pipeline {
  agent {
    docker {
      image 'kellekai/archlinuxopenmpi'
    }

  }
  stages {
    stage('build') {
      steps {
        sh '''mkdir build; cd build
cmake -DCMAKE_INSTALL_PREFIX=`pwd`/RELEASE -DENABLE_FORTRAN=OFF ..
make all install'''
      }
    }
    stage('Test') {
      steps {
        sh '''export TEST=diffSizes
export CONFIG=configH0I1.fti
export LEVEL=1
export CKPTORPTNER=0
export CORRORERASE=0
export CORRUPTIONLEVEL=0
cd build
./test/tests.sh'''
      }
    }
  }
}