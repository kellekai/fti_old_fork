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
      }
    }
    stage('Standard Tests L2 No Head') {
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
          sh 'cd build; TEST=diffSizes CONFIG=configH0I1.fti LEVEL=2 CKPTORPTNER=0 CORRORERASE=0 CORRUPTIONLEVEL=0 ./test/tests.sh'
        }
      }
    }
    stage('Standard Tests L3 No Head') {
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
          sh 'cd build; TEST=diffSizes CONFIG=configH0I1.fti LEVEL=3 CKPTORPTNER=0 CORRORERASE=0 CORRUPTIONLEVEL=0 ./test/tests.sh'
        }
      }
    }
    stage('Standard Tests L4 No Head') {
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
          sh 'cd build; TEST=diffSizes CONFIG=configH0I1.fti LEVEL=4 CKPTORPTNER=0 CORRORERASE=0 CORRUPTIONLEVEL=0 ./test/tests.sh'
        }
      }
    }
  }
}
