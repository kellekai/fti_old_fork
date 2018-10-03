pipeline {
  agent {
    docker {
      image 'kellekai/archlinuxopenmpi1.10'
    }

  }
  stages {
    stage('building') {
      steps {
        sh '''mkdir build; cd build
cmake -DCMAKE_INSTALL_PREFIX=`pwd`/RELEASE -DENABLE_FORTRAN=OFF ..
make all install'''
      }
    }
  stage('testing') {
    steps {
      sh 'cd build'
      catchError {
        sh 'TEST=diffSizes CONFIG=configH0I1.fti LEVEL=1 CKPTORPTNER=0 CORRORERASE=0 CORRUPTIONLEVEL=0 ./tests/test.sh'
      }
      catchError {
        sh 'TEST=diffSizes CONFIG=configH0I1.fti LEVEL=1 CKPTORPTNER=0 CORRORERASE=1 CORRUPTIONLEVEL=0 ./tests/test.sh'
      }
      catchError {
        sh 'TEST=diffSizes CONFIG=configH1I1.fti LEVEL=1 CKPTORPTNER=0 CORRORERASE=0 CORRUPTIONLEVEL=0 ./tests/test.sh'
      }
      catchError {
        sh 'TEST=diffSizes CONFIG=configH1I1.fti LEVEL=1 CKPTORPTNER=0 CORRORERASE=1 CORRUPTIONLEVEL=0 ./tests/test.sh'
      }
      catchError {
        sh 'TEST=diffSizes CONFIG=configH1I0.fti LEVEL=1 CKPTORPTNER=0 CORRORERASE=0 CORRUPTIONLEVEL=0 ./tests/test.sh'
      }
      catchError {
        sh 'TEST=diffSizes CONFIG=configH1I0.fti LEVEL=1 CKPTORPTNER=0 CORRORERASE=1 CORRUPTIONLEVEL=0 ./tests/test.sh'
      }
      catchError {
        sh 'TEST=diffSizes CONFIG=configH0I1.fti LEVEL=2 CKPTORPTNER=0 CORRORERASE=0 CORRUPTIONLEVEL=0 ./tests/test.sh'
      }
      catchError {
        sh 'TEST=diffSizes CONFIG=configH0I1.fti LEVEL=2 CKPTORPTNER=0 CORRORERASE=1 CORRUPTIONLEVEL=0 ./tests/test.sh'
      }
      catchError {
        sh 'TEST=diffSizes CONFIG=configH0I1.fti LEVEL=2 CKPTORPTNER=1 CORRORERASE=0 CORRUPTIONLEVEL=0 ./tests/test.sh'
      }
      catchError {
        sh 'TEST=diffSizes CONFIG=configH0I1.fti LEVEL=2 CKPTORPTNER=1 CORRORERASE=1 CORRUPTIONLEVEL=0 ./tests/test.sh'
      }
      catchError {
        sh 'TEST=diffSizes CONFIG=configH0I1.fti LEVEL=2 CKPTORPTNER=0 CORRORERASE=0 CORRUPTIONLEVEL=1 ./tests/test.sh'
      }
      catchError {
        sh 'TEST=diffSizes CONFIG=configH0I1.fti LEVEL=2 CKPTORPTNER=0 CORRORERASE=1 CORRUPTIONLEVEL=1 ./tests/test.sh'
      }
      catchError {
        sh 'TEST=diffSizes CONFIG=configH0I1.fti LEVEL=2 CKPTORPTNER=1 CORRORERASE=0 CORRUPTIONLEVEL=1 ./tests/test.sh'
      }
      catchError {
        sh 'TEST=diffSizes CONFIG=configH0I1.fti LEVEL=2 CKPTORPTNER=1 CORRORERASE=1 CORRUPTIONLEVEL=1 ./tests/test.sh'
      }
      catchError {
        sh 'TEST=diffSizes CONFIG=configH0I1.fti LEVEL=2 CKPTORPTNER=0 CORRORERASE=0 CORRUPTIONLEVEL=2 ./tests/test.sh'
      }
      catchError {
        sh 'TEST=diffSizes CONFIG=configH0I1.fti LEVEL=2 CKPTORPTNER=0 CORRORERASE=1 CORRUPTIONLEVEL=2 ./tests/test.sh'
      }
      catchError {
        sh 'TEST=diffSizes CONFIG=configH0I1.fti LEVEL=2 CKPTORPTNER=1 CORRORERASE=0 CORRUPTIONLEVEL=2 ./tests/test.sh'
      }
      catchError {
        sh 'TEST=diffSizes CONFIG=configH0I1.fti LEVEL=2 CKPTORPTNER=1 CORRORERASE=1 CORRUPTIONLEVEL=2 ./tests/test.sh'
      }
      catchError {
        sh 'TEST=diffSizes CONFIG=configH0I1.fti LEVEL=2 CKPTORPTNER=0 CORRORERASE=0 CORRUPTIONLEVEL=3 ./tests/test.sh'
      }
      catchError {
        sh 'TEST=diffSizes CONFIG=configH0I1.fti LEVEL=2 CKPTORPTNER=0 CORRORERASE=1 CORRUPTIONLEVEL=3 ./tests/test.sh'
      }
      catchError {
        sh 'TEST=diffSizes CONFIG=configH0I1.fti LEVEL=2 CKPTORPTNER=1 CORRORERASE=0 CORRUPTIONLEVEL=3 ./tests/test.sh'
      }
      catchError {
        sh 'TEST=diffSizes CONFIG=configH0I1.fti LEVEL=2 CKPTORPTNER=1 CORRORERASE=1 CORRUPTIONLEVEL=3 ./tests/test.sh'
      }
      catchError {
        sh 'TEST=diffSizes CONFIG=configH1I1.fti LEVEL=2 CKPTORPTNER=0 CORRORERASE=0 CORRUPTIONLEVEL=0 ./tests/test.sh'
      }
      catchError {
        sh 'TEST=diffSizes CONFIG=configH1I1.fti LEVEL=2 CKPTORPTNER=0 CORRORERASE=1 CORRUPTIONLEVEL=0 ./tests/test.sh'
      }
      catchError {
        sh 'TEST=diffSizes CONFIG=configH1I1.fti LEVEL=2 CKPTORPTNER=1 CORRORERASE=0 CORRUPTIONLEVEL=0 ./tests/test.sh'
      }
      catchError {
        sh 'TEST=diffSizes CONFIG=configH1I1.fti LEVEL=2 CKPTORPTNER=1 CORRORERASE=1 CORRUPTIONLEVEL=0 ./tests/test.sh'
      }
      catchError {
        sh 'TEST=diffSizes CONFIG=configH1I1.fti LEVEL=2 CKPTORPTNER=0 CORRORERASE=0 CORRUPTIONLEVEL=1 ./tests/test.sh'
      }
      catchError {
        sh 'TEST=diffSizes CONFIG=configH1I1.fti LEVEL=2 CKPTORPTNER=0 CORRORERASE=1 CORRUPTIONLEVEL=1 ./tests/test.sh'
      }
      catchError {
        sh 'TEST=diffSizes CONFIG=configH1I1.fti LEVEL=2 CKPTORPTNER=1 CORRORERASE=0 CORRUPTIONLEVEL=1 ./tests/test.sh'
      }
      catchError {
        sh 'TEST=diffSizes CONFIG=configH1I1.fti LEVEL=2 CKPTORPTNER=1 CORRORERASE=1 CORRUPTIONLEVEL=1 ./tests/test.sh'
      }
      catchError {
        sh 'TEST=diffSizes CONFIG=configH1I1.fti LEVEL=2 CKPTORPTNER=0 CORRORERASE=0 CORRUPTIONLEVEL=2 ./tests/test.sh'
      }
      catchError {
        sh 'TEST=diffSizes CONFIG=configH1I1.fti LEVEL=2 CKPTORPTNER=0 CORRORERASE=1 CORRUPTIONLEVEL=2 ./tests/test.sh'
      }
      catchError {
        sh 'TEST=diffSizes CONFIG=configH1I1.fti LEVEL=2 CKPTORPTNER=1 CORRORERASE=0 CORRUPTIONLEVEL=2 ./tests/test.sh'
      }
      catchError {
        sh 'TEST=diffSizes CONFIG=configH1I1.fti LEVEL=2 CKPTORPTNER=1 CORRORERASE=1 CORRUPTIONLEVEL=2 ./tests/test.sh'
      }
      catchError {
        sh 'TEST=diffSizes CONFIG=configH1I1.fti LEVEL=2 CKPTORPTNER=0 CORRORERASE=0 CORRUPTIONLEVEL=3 ./tests/test.sh'
      }
      catchError {
        sh 'TEST=diffSizes CONFIG=configH1I1.fti LEVEL=2 CKPTORPTNER=0 CORRORERASE=1 CORRUPTIONLEVEL=3 ./tests/test.sh'
      }
      catchError {
        sh 'TEST=diffSizes CONFIG=configH1I1.fti LEVEL=2 CKPTORPTNER=1 CORRORERASE=0 CORRUPTIONLEVEL=3 ./tests/test.sh'
      }
      catchError {
        sh 'TEST=diffSizes CONFIG=configH1I1.fti LEVEL=2 CKPTORPTNER=1 CORRORERASE=1 CORRUPTIONLEVEL=3 ./tests/test.sh'
      }
      catchError {
        sh 'TEST=diffSizes CONFIG=configH1I0.fti LEVEL=2 CKPTORPTNER=0 CORRORERASE=0 CORRUPTIONLEVEL=0 ./tests/test.sh'
      }
      catchError {
        sh 'TEST=diffSizes CONFIG=configH1I0.fti LEVEL=2 CKPTORPTNER=0 CORRORERASE=1 CORRUPTIONLEVEL=0 ./tests/test.sh'
      }
      catchError {
        sh 'TEST=diffSizes CONFIG=configH1I0.fti LEVEL=2 CKPTORPTNER=1 CORRORERASE=0 CORRUPTIONLEVEL=0 ./tests/test.sh'
      }
      catchError {
        sh 'TEST=diffSizes CONFIG=configH1I0.fti LEVEL=2 CKPTORPTNER=1 CORRORERASE=1 CORRUPTIONLEVEL=0 ./tests/test.sh'
      }
      catchError {
        sh 'TEST=diffSizes CONFIG=configH1I0.fti LEVEL=2 CKPTORPTNER=0 CORRORERASE=0 CORRUPTIONLEVEL=1 ./tests/test.sh'
      }
      catchError {
        sh 'TEST=diffSizes CONFIG=configH1I0.fti LEVEL=2 CKPTORPTNER=0 CORRORERASE=1 CORRUPTIONLEVEL=1 ./tests/test.sh'
      }
      catchError {
        sh 'TEST=diffSizes CONFIG=configH1I0.fti LEVEL=2 CKPTORPTNER=1 CORRORERASE=0 CORRUPTIONLEVEL=1 ./tests/test.sh'
      }
      catchError {
        sh 'TEST=diffSizes CONFIG=configH1I0.fti LEVEL=2 CKPTORPTNER=1 CORRORERASE=1 CORRUPTIONLEVEL=1 ./tests/test.sh'
      }
      catchError {
        sh 'TEST=diffSizes CONFIG=configH1I0.fti LEVEL=2 CKPTORPTNER=0 CORRORERASE=0 CORRUPTIONLEVEL=2 ./tests/test.sh'
      }
      catchError {
        sh 'TEST=diffSizes CONFIG=configH1I0.fti LEVEL=2 CKPTORPTNER=0 CORRORERASE=1 CORRUPTIONLEVEL=2 ./tests/test.sh'
      }
      catchError {
        sh 'TEST=diffSizes CONFIG=configH1I0.fti LEVEL=2 CKPTORPTNER=1 CORRORERASE=0 CORRUPTIONLEVEL=2 ./tests/test.sh'
      }
      catchError {
        sh 'TEST=diffSizes CONFIG=configH1I0.fti LEVEL=2 CKPTORPTNER=1 CORRORERASE=1 CORRUPTIONLEVEL=2 ./tests/test.sh'
      }
      catchError {
        sh 'TEST=diffSizes CONFIG=configH1I0.fti LEVEL=2 CKPTORPTNER=0 CORRORERASE=0 CORRUPTIONLEVEL=3 ./tests/test.sh'
      }
      catchError {
        sh 'TEST=diffSizes CONFIG=configH1I0.fti LEVEL=2 CKPTORPTNER=0 CORRORERASE=1 CORRUPTIONLEVEL=3 ./tests/test.sh'
      }
      catchError {
        sh 'TEST=diffSizes CONFIG=configH1I0.fti LEVEL=2 CKPTORPTNER=1 CORRORERASE=0 CORRUPTIONLEVEL=3 ./tests/test.sh'
      }
      catchError {
        sh 'TEST=diffSizes CONFIG=configH1I0.fti LEVEL=2 CKPTORPTNER=1 CORRORERASE=1 CORRUPTIONLEVEL=3 ./tests/test.sh'
      }
      catchError {
        sh 'TEST=diffSizes CONFIG=configH0I1.fti LEVEL=3 CKPTORPTNER=0 CORRORERASE=0 CORRUPTIONLEVEL=0 ./tests/test.sh'
      }
      catchError {
        sh 'TEST=diffSizes CONFIG=configH0I1.fti LEVEL=3 CKPTORPTNER=0 CORRORERASE=1 CORRUPTIONLEVEL=0 ./tests/test.sh'
      }
      catchError {
        sh 'TEST=diffSizes CONFIG=configH0I1.fti LEVEL=3 CKPTORPTNER=1 CORRORERASE=0 CORRUPTIONLEVEL=0 ./tests/test.sh'
      }
      catchError {
        sh 'TEST=diffSizes CONFIG=configH0I1.fti LEVEL=3 CKPTORPTNER=1 CORRORERASE=1 CORRUPTIONLEVEL=0 ./tests/test.sh'
      }
      catchError {
        sh 'TEST=diffSizes CONFIG=configH0I1.fti LEVEL=3 CKPTORPTNER=0 CORRORERASE=0 CORRUPTIONLEVEL=1 ./tests/test.sh'
      }
      catchError {
        sh 'TEST=diffSizes CONFIG=configH0I1.fti LEVEL=3 CKPTORPTNER=0 CORRORERASE=1 CORRUPTIONLEVEL=1 ./tests/test.sh'
      }
      catchError {
        sh 'TEST=diffSizes CONFIG=configH0I1.fti LEVEL=3 CKPTORPTNER=1 CORRORERASE=0 CORRUPTIONLEVEL=1 ./tests/test.sh'
      }
      catchError {
        sh 'TEST=diffSizes CONFIG=configH0I1.fti LEVEL=3 CKPTORPTNER=1 CORRORERASE=1 CORRUPTIONLEVEL=1 ./tests/test.sh'
      }
      catchError {
        sh 'TEST=diffSizes CONFIG=configH0I1.fti LEVEL=3 CKPTORPTNER=0 CORRORERASE=0 CORRUPTIONLEVEL=2 ./tests/test.sh'
      }
      catchError {
        sh 'TEST=diffSizes CONFIG=configH0I1.fti LEVEL=3 CKPTORPTNER=0 CORRORERASE=1 CORRUPTIONLEVEL=2 ./tests/test.sh'
      }
      catchError {
        sh 'TEST=diffSizes CONFIG=configH0I1.fti LEVEL=3 CKPTORPTNER=1 CORRORERASE=0 CORRUPTIONLEVEL=2 ./tests/test.sh'
      }
      catchError {
        sh 'TEST=diffSizes CONFIG=configH0I1.fti LEVEL=3 CKPTORPTNER=1 CORRORERASE=1 CORRUPTIONLEVEL=2 ./tests/test.sh'
      }
      catchError {
        sh 'TEST=diffSizes CONFIG=configH0I1.fti LEVEL=3 CKPTORPTNER=0 CORRORERASE=0 CORRUPTIONLEVEL=3 ./tests/test.sh'
      }
      catchError {
        sh 'TEST=diffSizes CONFIG=configH0I1.fti LEVEL=3 CKPTORPTNER=0 CORRORERASE=1 CORRUPTIONLEVEL=3 ./tests/test.sh'
      }
      catchError {
        sh 'TEST=diffSizes CONFIG=configH0I1.fti LEVEL=3 CKPTORPTNER=1 CORRORERASE=0 CORRUPTIONLEVEL=3 ./tests/test.sh'
      }
      catchError {
        sh 'TEST=diffSizes CONFIG=configH0I1.fti LEVEL=3 CKPTORPTNER=1 CORRORERASE=1 CORRUPTIONLEVEL=3 ./tests/test.sh'
      }
      catchError {
        sh 'TEST=diffSizes CONFIG=configH1I1.fti LEVEL=3 CKPTORPTNER=0 CORRORERASE=0 CORRUPTIONLEVEL=0 ./tests/test.sh'
      }
      catchError {
        sh 'TEST=diffSizes CONFIG=configH1I1.fti LEVEL=3 CKPTORPTNER=0 CORRORERASE=1 CORRUPTIONLEVEL=0 ./tests/test.sh'
      }
      catchError {
        sh 'TEST=diffSizes CONFIG=configH1I1.fti LEVEL=3 CKPTORPTNER=1 CORRORERASE=0 CORRUPTIONLEVEL=0 ./tests/test.sh'
      }
      catchError {
        sh 'TEST=diffSizes CONFIG=configH1I1.fti LEVEL=3 CKPTORPTNER=1 CORRORERASE=1 CORRUPTIONLEVEL=0 ./tests/test.sh'
      }
      catchError {
        sh 'TEST=diffSizes CONFIG=configH1I1.fti LEVEL=3 CKPTORPTNER=0 CORRORERASE=0 CORRUPTIONLEVEL=1 ./tests/test.sh'
      }
      catchError {
        sh 'TEST=diffSizes CONFIG=configH1I1.fti LEVEL=3 CKPTORPTNER=0 CORRORERASE=1 CORRUPTIONLEVEL=1 ./tests/test.sh'
      }
      catchError {
        sh 'TEST=diffSizes CONFIG=configH1I1.fti LEVEL=3 CKPTORPTNER=1 CORRORERASE=0 CORRUPTIONLEVEL=1 ./tests/test.sh'
      }
      catchError {
        sh 'TEST=diffSizes CONFIG=configH1I1.fti LEVEL=3 CKPTORPTNER=1 CORRORERASE=1 CORRUPTIONLEVEL=1 ./tests/test.sh'
      }
      catchError {
        sh 'TEST=diffSizes CONFIG=configH1I1.fti LEVEL=3 CKPTORPTNER=0 CORRORERASE=0 CORRUPTIONLEVEL=2 ./tests/test.sh'
      }
      catchError {
        sh 'TEST=diffSizes CONFIG=configH1I1.fti LEVEL=3 CKPTORPTNER=0 CORRORERASE=1 CORRUPTIONLEVEL=2 ./tests/test.sh'
      }
      catchError {
        sh 'TEST=diffSizes CONFIG=configH1I1.fti LEVEL=3 CKPTORPTNER=1 CORRORERASE=0 CORRUPTIONLEVEL=2 ./tests/test.sh'
      }
      catchError {
        sh 'TEST=diffSizes CONFIG=configH1I1.fti LEVEL=3 CKPTORPTNER=1 CORRORERASE=1 CORRUPTIONLEVEL=2 ./tests/test.sh'
      }
      catchError {
        sh 'TEST=diffSizes CONFIG=configH1I1.fti LEVEL=3 CKPTORPTNER=0 CORRORERASE=0 CORRUPTIONLEVEL=3 ./tests/test.sh'
      }
      catchError {
        sh 'TEST=diffSizes CONFIG=configH1I1.fti LEVEL=3 CKPTORPTNER=0 CORRORERASE=1 CORRUPTIONLEVEL=3 ./tests/test.sh'
      }
      catchError {
        sh 'TEST=diffSizes CONFIG=configH1I1.fti LEVEL=3 CKPTORPTNER=1 CORRORERASE=0 CORRUPTIONLEVEL=3 ./tests/test.sh'
      }
      catchError {
        sh 'TEST=diffSizes CONFIG=configH1I1.fti LEVEL=3 CKPTORPTNER=1 CORRORERASE=1 CORRUPTIONLEVEL=3 ./tests/test.sh'
      }
      catchError {
        sh 'TEST=diffSizes CONFIG=configH1I0.fti LEVEL=3 CKPTORPTNER=0 CORRORERASE=0 CORRUPTIONLEVEL=0 ./tests/test.sh'
      }
      catchError {
        sh 'TEST=diffSizes CONFIG=configH1I0.fti LEVEL=3 CKPTORPTNER=0 CORRORERASE=1 CORRUPTIONLEVEL=0 ./tests/test.sh'
      }
      catchError {
        sh 'TEST=diffSizes CONFIG=configH1I0.fti LEVEL=3 CKPTORPTNER=1 CORRORERASE=0 CORRUPTIONLEVEL=0 ./tests/test.sh'
      }
      catchError {
        sh 'TEST=diffSizes CONFIG=configH1I0.fti LEVEL=3 CKPTORPTNER=1 CORRORERASE=1 CORRUPTIONLEVEL=0 ./tests/test.sh'
      }
      catchError {
        sh 'TEST=diffSizes CONFIG=configH1I0.fti LEVEL=3 CKPTORPTNER=0 CORRORERASE=0 CORRUPTIONLEVEL=1 ./tests/test.sh'
      }
      catchError {
        sh 'TEST=diffSizes CONFIG=configH1I0.fti LEVEL=3 CKPTORPTNER=0 CORRORERASE=1 CORRUPTIONLEVEL=1 ./tests/test.sh'
      }
      catchError {
        sh 'TEST=diffSizes CONFIG=configH1I0.fti LEVEL=3 CKPTORPTNER=1 CORRORERASE=0 CORRUPTIONLEVEL=1 ./tests/test.sh'
      }
      catchError {
        sh 'TEST=diffSizes CONFIG=configH1I0.fti LEVEL=3 CKPTORPTNER=1 CORRORERASE=1 CORRUPTIONLEVEL=1 ./tests/test.sh'
      }
      catchError {
        sh 'TEST=diffSizes CONFIG=configH1I0.fti LEVEL=3 CKPTORPTNER=0 CORRORERASE=0 CORRUPTIONLEVEL=2 ./tests/test.sh'
      }
      catchError {
        sh 'TEST=diffSizes CONFIG=configH1I0.fti LEVEL=3 CKPTORPTNER=0 CORRORERASE=1 CORRUPTIONLEVEL=2 ./tests/test.sh'
      }
      catchError {
        sh 'TEST=diffSizes CONFIG=configH1I0.fti LEVEL=3 CKPTORPTNER=1 CORRORERASE=0 CORRUPTIONLEVEL=2 ./tests/test.sh'
      }
      catchError {
        sh 'TEST=diffSizes CONFIG=configH1I0.fti LEVEL=3 CKPTORPTNER=1 CORRORERASE=1 CORRUPTIONLEVEL=2 ./tests/test.sh'
      }
      catchError {
        sh 'TEST=diffSizes CONFIG=configH1I0.fti LEVEL=3 CKPTORPTNER=0 CORRORERASE=0 CORRUPTIONLEVEL=3 ./tests/test.sh'
      }
      catchError {
        sh 'TEST=diffSizes CONFIG=configH1I0.fti LEVEL=3 CKPTORPTNER=0 CORRORERASE=1 CORRUPTIONLEVEL=3 ./tests/test.sh'
      }
      catchError {
        sh 'TEST=diffSizes CONFIG=configH1I0.fti LEVEL=3 CKPTORPTNER=1 CORRORERASE=0 CORRUPTIONLEVEL=3 ./tests/test.sh'
      }
      catchError {
        sh 'TEST=diffSizes CONFIG=configH1I0.fti LEVEL=3 CKPTORPTNER=1 CORRORERASE=1 CORRUPTIONLEVEL=3 ./tests/test.sh'
      }
      catchError {
        sh 'TEST=diffSizes CONFIG=configH0I1.fti LEVEL=4 CKPTORPTNER=0 CORRORERASE=0 CORRUPTIONLEVEL=0 ./tests/test.sh'
      }
      catchError {
        sh 'TEST=diffSizes CONFIG=configH0I1.fti LEVEL=4 CKPTORPTNER=0 CORRORERASE=1 CORRUPTIONLEVEL=0 ./tests/test.sh'
      }
      catchError {
        sh 'TEST=diffSizes CONFIG=configH1I1.fti LEVEL=4 CKPTORPTNER=0 CORRORERASE=0 CORRUPTIONLEVEL=0 ./tests/test.sh'
      }
      catchError {
        sh 'TEST=diffSizes CONFIG=configH1I1.fti LEVEL=4 CKPTORPTNER=0 CORRORERASE=1 CORRUPTIONLEVEL=0 ./tests/test.sh'
      }
      catchError {
        sh 'TEST=diffSizes CONFIG=configH1I0.fti LEVEL=4 CKPTORPTNER=0 CORRORERASE=0 CORRUPTIONLEVEL=0 ./tests/test.sh'
      }
      catchError {
        sh 'TEST=diffSizes CONFIG=configH1I0.fti LEVEL=4 CKPTORPTNER=0 CORRORERASE=1 CORRUPTIONLEVEL=0 ./tests/test.sh'
      }
      catchError {
        sh 'TEST=diffSizes NOTCORRUPT=1 CONFIG=configH0I1.fti LEVEL=1 ./tests/test.sh'
      }
      catchError {
        sh 'TEST=diffSizes NOTCORRUPT=1 CONFIG=configH0I1.fti LEVEL=2 ./tests/test.sh'
      }
      catchError {
        sh 'TEST=diffSizes NOTCORRUPT=1 CONFIG=configH0I1.fti LEVEL=3 ./tests/test.sh'
      }
      catchError {
        sh 'TEST=diffSizes NOTCORRUPT=1 CONFIG=configH0I1.fti LEVEL=4 ./tests/test.sh'
      }
      catchError {
        sh 'TEST=diffSizes NOTCORRUPT=1 CONFIG=configH1I1.fti LEVEL=1 ./tests/test.sh'
      }
      catchError {
        sh 'TEST=diffSizes NOTCORRUPT=1 CONFIG=configH1I1.fti LEVEL=2 ./tests/test.sh'
      }
      catchError {
        sh 'TEST=diffSizes NOTCORRUPT=1 CONFIG=configH1I1.fti LEVEL=3 ./tests/test.sh'
      }
      catchError {
        sh 'TEST=diffSizes NOTCORRUPT=1 CONFIG=configH1I1.fti LEVEL=4 ./tests/test.sh'
      }
      catchError {
        sh 'TEST=diffSizes NOTCORRUPT=1 CONFIG=configH1I0.fti LEVEL=1 ./tests/test.sh'
      }
      catchError {
        sh 'TEST=diffSizes NOTCORRUPT=1 CONFIG=configH1I0.fti LEVEL=2 ./tests/test.sh'
      }
      catchError {
        sh 'TEST=diffSizes NOTCORRUPT=1 CONFIG=configH1I0.fti LEVEL=3 ./tests/test.sh'
      }
      catchError {
        sh 'TEST=diffSizes NOTCORRUPT=1 CONFIG=configH1I0.fti LEVEL=4 ./tests/test.sh'
      }
      catchError {
        sh 'TEST=heatdis CONFIG=configH0I1.fti ./tests/test.sh'
      }
      catchError {
        sh 'TEST=heatdis CONFIG=configH1I1.fti ./tests/test.sh'
      }
      catchError {
        sh 'TEST=heatdis CONFIG=configH1I0.fti ./tests/test.sh'
      }
      catchError {
        sh 'TEST=nodeFlag CONFIG=configH0I1.fti ./tests/test.sh'
      }
      catchError {
        sh 'TEST=nodeFlag CONFIG=configH1I1.fti ./tests/test.sh'
      }
      catchError {
        sh 'TEST=nodeFlag CONFIG=configH1I0.fti ./tests/test.sh'
      }
      catchError {
        sh 'TEST=addInArray CONFIG=configH0I1.fti LEVEL=1 ./tests/test.sh'
      }
      catchError {
        sh 'TEST=addInArray CONFIG=configH0I1.fti LEVEL=2 ./tests/test.sh'
      }
      catchError {
        sh 'TEST=addInArray CONFIG=configH0I1.fti LEVEL=3 ./tests/test.sh'
      }
      catchError {
        sh 'TEST=addInArray CONFIG=configH0I1.fti LEVEL=4 ./tests/test.sh'
      }
      catchError {
        sh 'TEST=addInArray CONFIG=configH1I1.fti LEVEL=1 ./tests/test.sh'
      }
      catchError {
        sh 'TEST=addInArray CONFIG=configH1I1.fti LEVEL=2 ./tests/test.sh'
      }
      catchError {
        sh 'TEST=addInArray CONFIG=configH1I1.fti LEVEL=3 ./tests/test.sh'
      }
      catchError {
        sh 'TEST=addInArray CONFIG=configH1I1.fti LEVEL=4 ./tests/test.sh'
      }
      catchError {
        sh 'TEST=addInArray CONFIG=configH1I0.fti LEVEL=1 ./tests/test.sh'
      }
      catchError {
        sh 'TEST=addInArray CONFIG=configH1I0.fti LEVEL=2 ./tests/test.sh'
      }
      catchError {
        sh 'TEST=addInArray CONFIG=configH1I0.fti LEVEL=3 ./tests/test.sh'
      }
      catchError {
        sh 'TEST=addInArray CONFIG=configH1I0.fti LEVEL=4 ./tests/test.sh'
      }
      catchError {
        sh 'TEST=diffSizes CONFIG=configH1I0.fti LEVEL=3 CKPTORPTNER=0 CORRORERASE=0 CORRUPTIONLEVEL=3 CMAKEVERSION=3.3 ./tests/test.sh'
      }
      catchError {
        sh 'TEST=diffSizes CONFIG=configH1I0.fti LEVEL=3 CKPTORPTNER=0 CORRORERASE=0 CORRUPTIONLEVEL=3 CMAKEVERSION=3.4 ./tests/test.sh'
      }
      catchError {
        sh 'TEST=diffSizes CONFIG=configH1I0.fti LEVEL=3 CKPTORPTNER=0 CORRORERASE=0 CORRUPTIONLEVEL=3 CMAKEVERSION=3.5 ./tests/test.sh'
      }
      catchError {
        sh 'TEST=diffSizes CONFIG=configH1I0.fti LEVEL=3 CKPTORPTNER=0 CORRORERASE=0 CORRUPTIONLEVEL=3 CMAKEVERSION=3.6 ./tests/test.sh'
      }
      catchError {
        sh 'TEST=diffSizes CONFIG=configH1I0.fti LEVEL=3 CKPTORPTNER=0 CORRORERASE=0 CORRUPTIONLEVEL=3 CMAKEVERSION=3.7 ./tests/test.sh'
      }
      catchError {
        sh 'TEST=diffSizes CONFIG=configH1I0.fti LEVEL=3 CKPTORPTNER=0 CORRORERASE=0 CORRUPTIONLEVEL=3 CMAKEVERSION=3.8 ./tests/test.sh'
      }
      catchError {
        sh 'TEST=diffSizes CONFIG=configH1I0.fti LEVEL=3 CKPTORPTNER=0 CORRORERASE=0 CORRUPTIONLEVEL=3 CMAKEVERSION=3.9 ./tests/test.sh'
      }
      catchError {
        sh 'TEST=syncIntv CONFIG=configH1I0.fti ./tests/test.sh'
      }
      catchError {
        sh 'TEST=hdf5 ./tests/test.sh'
      }
      catchError {
        sh 'TEST=cornerCases ./tests/test.sh'
      }
    }
  }

  }
}
