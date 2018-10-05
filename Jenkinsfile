#!/bin/groovy

pipeline {
  agent none
  stages {
    stage('Standard Tests') {
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
  }
}
