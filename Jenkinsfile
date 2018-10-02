pipeline {
  agent {
    docker {
      image 'kellekai/archlinuxopenmpi1.10'
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
  }
}
