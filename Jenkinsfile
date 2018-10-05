#!/bin/groovy

pipeline {
  agent none
    stages {
      stage('Standard Tests L1 No Head') {
        agent {
          docker {
            image 'kellekai/archlinuxopenmpi1.10'
          }
        }
        steps {
          sh '''
            mkdir build; cd build
            cmake -DCMAKE_INSTALL_PREFIX=`pwd`/RELEASE -DENABLE_FORTRAN=OFF ..
            make all install
            '''
            catchError {
              sh 'cd build; TEST=diffSizes CONFIG=configH0I1.fti LEVEL=1 CKPTORPTNER=0 CORRORERASE=0 CORRUPTIONLEVEL=0 ./test/tests.sh'
            }
          catchError {
            sh 'cd build; TEST=diffSizes CONFIG=configH0I1.fti LEVEL=1 CKPTORPTNER=0 CORRORERASE=0 CORRUPTIONLEVEL=0 ./test/tests.sh'
          }
          catchError {
            sh 'cd build; TEST=diffSizes CONFIG=configH0I1.fti LEVEL=1 CKPTORPTNER=0 CORRORERASE=1 CORRUPTIONLEVEL=0 ./test/tests.sh'
          }
          catchError {
            sh 'cd build; TEST=diffSizes NOTCORRUPT=1 CONFIG=configH0I1.fti LEVEL=1 ./test/tests.sh'
          }
          catchError {
            sh 'cd build; TEST=addInArray CONFIG=configH0I1.fti LEVEL=1 ./test/tests.sh'
          }
        }
      }
      stage('Standard Tests L1 With Head') {
        agent {
          docker {
            image 'kellekai/archlinuxopenmpi1.10'
          }
        }
        steps {
          sh '''
            mkdir build; cd build
            cmake -DCMAKE_INSTALL_PREFIX=`pwd`/RELEASE -DENABLE_FORTRAN=OFF ..
            make all install
            '''
          catchError {
            sh 'cd build; TEST=diffSizes CONFIG=configH1I1.fti LEVEL=1 CKPTORPTNER=0 CORRORERASE=0 CORRUPTIONLEVEL=0 ./test/tests.sh'
          }
          catchError {
            sh 'cd build; TEST=diffSizes CONFIG=configH1I1.fti LEVEL=1 CKPTORPTNER=0 CORRORERASE=1 CORRUPTIONLEVEL=0 ./test/tests.sh'
          }
          catchError {
            sh 'cd build; TEST=diffSizes CONFIG=configH1I0.fti LEVEL=1 CKPTORPTNER=0 CORRORERASE=0 CORRUPTIONLEVEL=0 ./test/tests.sh'
          }
          catchError {
            sh 'cd build; TEST=diffSizes CONFIG=configH1I0.fti LEVEL=1 CKPTORPTNER=0 CORRORERASE=1 CORRUPTIONLEVEL=0 ./test/tests.sh'
          }
          catchError {
            sh 'cd build; TEST=diffSizes NOTCORRUPT=1 CONFIG=configH1I1.fti LEVEL=1 ./test/tests.sh'
          }
          catchError {
            sh 'cd build; TEST=diffSizes NOTCORRUPT=1 CONFIG=configH1I0.fti LEVEL=1 ./test/tests.sh'
          }
          catchError {
            sh 'cd build; TEST=addInArray CONFIG=configH1I1.fti LEVEL=1 ./test/tests.sh'
          }
          catchError {
            sh 'cd build; TEST=addInArray CONFIG=configH1I0.fti LEVEL=1 ./test/tests.sh'
          }
        }
      }
    }
}
