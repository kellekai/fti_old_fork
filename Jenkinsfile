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
      parallel {
        stage('Test') {
          steps {
            sh '''export TEST=diffSizes
export CONFIG=configH0I1.fti
export LEVEL=1
export CKPTORPTNER=0
export CORRORERASE=0
export CORRUPTIONLEVEL=0
./test/tests.sh'''
          }
        }
        stage('') {
          steps {
            sh '''export TEST=diffSizes
export CONFIG=configH0I1.fti
export LEVEL=1
export CKPTORPTNER=0
export CORRORERASE=1
export CORRUPTIONLEVEL=0
./test/tests.sh'''
          }
        }
        stage('') {
          steps {
            sh '''export TEST=diffSizes
export CONFIG=configH1I1.fti
export LEVEL=1
export CKPTORPTNER=0
export CORRORERASE=0
export CORRUPTIONLEVEL=0
./test/tests.sh'''
          }
        }
        stage('') {
          steps {
            sh '''export TEST=diffSizes
export CONFIG=configH1I1.fti
export LEVEL=1
export CKPTORPTNER=0
export CORRORERASE=1
export CORRUPTIONLEVEL=0
./test/tests.sh'''
          }
        }
      }
    }
  }
}