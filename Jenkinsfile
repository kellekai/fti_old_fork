pipeline {
  agent {
    docker {
      image 'kellekai/archlinuxopenmpi1.10'
    }

  }
  stages {
    stage('DS L1 1/4') {
      steps {
        sh 'source JenkinsScripts/diffSizes-1.sh'
      }
    }
  }
}