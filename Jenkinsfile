pipeline {
  agent {
    docker {
      args '--rm'
      image 'kellekai/archlinuxopenmpi'
    }

  }
  stages {
    stage('Init') {
      steps {
        sh '''su jenkins
cd
pwd'''
      }
    }
  }
}