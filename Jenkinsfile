pipeline {
  agent {
    docker {
      image 'kellekai/archlinuxopenmpi1.10'
    }

  }
  stages {
    stage('DS L1 1/4') {
      steps {
        sh '''id
pwd
mpirun --version
mpirun -n 16 echo "hello world"'''
      }
    }
  }
}