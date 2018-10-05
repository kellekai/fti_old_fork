#!/bin/groovy

pipeline {
  agent {
    docker {
      label 'gcc'
      image 'kellekai/archlinuxopenmpi1.10'
      args '-v $WORKSPACE/build-gcc:$WORKSPACE/build-gcc:rw,z'
    }
  }
  stages {
    stage('Standard Tests') {
      agent {
        node {
          label 'gcc'
          customWorkspace 'build-gcc'
        }
      }
      steps {
        sh '''
        cmake -DCMAKE_INSTALL_PREFIX=`pwd`/RELEASE -DENABLE_FORTRAN=OFF ..
        make all install
        '''
        catchError {
          sh 'TEST=diffSizes CONFIG=configH0I1.fti LEVEL=1 CKPTORPTNER=0 CORRORERASE=0 CORRUPTIONLEVEL=0 ./test/tests.sh'
        }
      }
    }
  }
}
