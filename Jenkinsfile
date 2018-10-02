pipeline {
  agent {
    docker {
      image 'kellekai/archlinuxopenmpi1.10'
      args '--user jenkins -w /home/jenkins'
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
    stage('DS L1 1/4') {
      steps {
        sh 'source JenkinsScripts/diffSizes-1.sh'
      }
    }
    stage('DS L1 2/4') {
      steps {
        sh '''export TEST=diffSizes
export CONFIG=configH0I1.fti
export LEVEL=1
export CKPTORPTNER=0
export CORRORERASE=1
export CORRUPTIONLEVEL=0
cd build
./test/tests.sh'''
      }
    }
    stage('DS L1 3/4') {
      steps {
        sh '''export TEST=diffSizes
export CONFIG=configH1I1.fti
export LEVEL=1
export CKPTORPTNER=0
export CORRORERASE=0
export CORRUPTIONLEVEL=0
cd build
./test/tests.sh'''
      }
    }
    stage('DS L1 4/4') {
      steps {
        sh '''export TEST=diffSizes
export CONFIG=configH1I1.fti
export LEVEL=1
export CKPTORPTNER=0
export CORRORERASE=1
export CORRUPTIONLEVEL=0
cd build
./test/tests.sh'''
      }
    }
  }
}