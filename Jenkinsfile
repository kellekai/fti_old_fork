#!/bin/groovy

pipeline {
  agent none
  stages {
    stage('build') {
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
        stash name: 'build-gcc', includes: 'build/*'
      }
    }
    stage('Standard Tests L1 No Head') {
      agent {
        docker {
          image 'kellekai/archlinuxopenmpi1.10'
        }
      }
      steps {
        sh 'mkdir build'
        dir('build') {
          unstash 'build-gcc'
        }
        catchError {
          sh 'cd build; TEST=diffSizes CONFIG=configH0I1.fti LEVEL=1 CKPTORPTNER=0 CORRORERASE=0 CORRUPTIONLEVEL=0 ./test/tests.sh'
        }
      }
    }
  }
}
