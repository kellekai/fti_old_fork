#include <fti.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>
#include <stdio.h>
#define SIZE 1000000


int main(int argc, char* argv[]) {

    srand(time(NULL));

    int* arr;
    int rarr=0, rbrr=0, sred, rred, rank;
    arr = (int*) malloc(sizeof(int)*SIZE);
    int* brr;
    brr = (int*) malloc(sizeof(int)*SIZE);
    int ID_arr=0;
    int ID_brr=1;
    int i;
    
    MPI_Init(&argc, &argv);
    FTI_Init("test.conf", MPI_COMM_WORLD);
    
    MPI_Comm_rank(FTI_COMM_WORLD, &rank);

    for(i = 0; i < SIZE; i++) {
        arr[i] = rand();
        brr[i] = rand();
    }
    
    for(i = 0; i < SIZE; i++) {
        rarr+=arr[i];
        rbrr+=brr[i];
    }
    
    sred=rarr+rbrr;
        
    MPI_Allreduce(&sred, &rred, 1, MPI_INT, MPI_SUM, FTI_COMM_WORLD);
    if (rank==0)
        printf("reduced value: %i\n", rred);

    FTI_Protect(ID_arr, arr, SIZE, FTI_INTG);
    FTI_Protect(ID_brr, brr, SIZE, FTI_INTG);
    
    FTI_Checkpoint(0,4);
    
    free(brr);
    free(arr);

    arr = (int*) malloc(sizeof(int)*SIZE);
    brr = (int*) malloc(sizeof(int)*SIZE);
    
    FTI_Protect(ID_arr, arr, SIZE, FTI_INTG);
    FTI_Protect(ID_brr, brr, SIZE, FTI_INTG);
    
    
    for(i = 0; i < SIZE; i++) {
        arr[i] = 0;
        brr[i] = 0;
    }
    
    FTI_Recover_MPIL4();
   
    rarr=0;
    rbrr=0;
    for(i = 0; i < SIZE; i++) {
        rarr+=arr[i];
        rbrr+=brr[i];
    }

    sred=rarr+rbrr;
        
    MPI_Allreduce(&sred, &rred, 1, MPI_INT, MPI_SUM, FTI_COMM_WORLD);
    if(rank==0)
        printf("reduced value: %i\n", rred);

    //sleep(60);
    FTI_Finalize();
    MPI_Finalize();
    
}
