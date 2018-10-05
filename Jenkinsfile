#!/bin/groovy

pipeline {
  agent none
  stages {
    stage('build') {
      agent {
        docker {
          image 'kellekai/archlinuxopenmpi1.10'
          reuseNode true
        }
      }
      steps {
        sh '''
        mkdir build-gcc
        ls -arthl
        cd build-gcc
        cmake -DCMAKE_INSTALL_PREFIX=`pwd`/RELEASE -DENABLE_FORTRAN=OFF ..
        make all install
        '''
      }
    }
    stage('Standard Tests L1 No Head') {
      agent {
        docker {
          image 'kellekai/archlinuxopenmpi1.10'
          args '-w $WORKSPACE/build-gcc'
        }
      }
      steps {
        sh 'pwd'
        catchError {
          sh 'TEST=diffSizes CONFIG=configH0I1.fti LEVEL=1 CKPTORPTNER=0 CORRORERASE=0 CORRUPTIONLEVEL=0 ./test/tests.sh'
        }
      }
    }
  }
}
