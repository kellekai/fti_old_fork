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
make all install
export TEST=cornerCases
./test/tests.sh'''
      }
    }
  }
}