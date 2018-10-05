#!/bin/groovy

pipeline {
  agent none
    stages {
      stage('Standard Tests L1 No Head') {
        agent {
          docker {
            image 'kellekai/archlinuxopenmpi1.10'
          }
        }
        steps {
          sh '''
            mkdir build; cd build
            cmake -DCMAKE_INSTALL_PREFIX=`pwd`/RELEASE -DENABLE_FORTRAN=OFF ..
            make all install
            '''
          catchError {
            sh 'cd build; TEST=diffSizes CONFIG=configH0I1.fti LEVEL=1 CKPTORPTNER=0 CORRORERASE=0 CORRUPTIONLEVEL=0 ./test/tests.sh'
          }
          catchError {
            sh 'cd build; TEST=diffSizes CONFIG=configH0I1.fti LEVEL=1 CKPTORPTNER=0 CORRORERASE=0 CORRUPTIONLEVEL=0 ./test/tests.sh'
          }
          catchError {
            sh 'cd build; TEST=diffSizes CONFIG=configH0I1.fti LEVEL=1 CKPTORPTNER=0 CORRORERASE=1 CORRUPTIONLEVEL=0 ./test/tests.sh'
          }
          catchError {
            sh 'cd build; TEST=diffSizes NOTCORRUPT=1 CONFIG=configH0I1.fti LEVEL=1 ./test/tests.sh'
          }
          catchError {
            sh 'cd build; TEST=addInArray CONFIG=configH0I1.fti LEVEL=1 ./test/tests.sh'
          }
        }
      }
      stage('Standard Tests L1 With Head') {
        agent {
          docker {
            image 'kellekai/archlinuxopenmpi1.10'
          }
        }
        steps {
          sh '''
            mkdir build; cd build
            cmake -DCMAKE_INSTALL_PREFIX=`pwd`/RELEASE -DENABLE_FORTRAN=OFF ..
            make all install
            '''
          catchError {
            sh 'cd build; TEST=diffSizes CONFIG=configH1I1.fti LEVEL=1 CKPTORPTNER=0 CORRORERASE=0 CORRUPTIONLEVEL=0 ./test/tests.sh'
          }
          catchError {
            sh 'cd build; TEST=diffSizes CONFIG=configH1I1.fti LEVEL=1 CKPTORPTNER=0 CORRORERASE=1 CORRUPTIONLEVEL=0 ./test/tests.sh'
          }
          catchError {
            sh 'cd build; TEST=diffSizes CONFIG=configH1I0.fti LEVEL=1 CKPTORPTNER=0 CORRORERASE=0 CORRUPTIONLEVEL=0 ./test/tests.sh'
          }
          catchError {
            sh 'cd build; TEST=diffSizes CONFIG=configH1I0.fti LEVEL=1 CKPTORPTNER=0 CORRORERASE=1 CORRUPTIONLEVEL=0 ./test/tests.sh'
          }
          catchError {
            sh 'cd build; TEST=diffSizes NOTCORRUPT=1 CONFIG=configH1I1.fti LEVEL=1 ./test/tests.sh'
          }
          catchError {
            sh 'cd build; TEST=diffSizes NOTCORRUPT=1 CONFIG=configH1I0.fti LEVEL=1 ./test/tests.sh'
          }
          catchError {
            sh 'cd build; TEST=addInArray CONFIG=configH1I1.fti LEVEL=1 ./test/tests.sh'
          }
          catchError {
            sh 'cd build; TEST=addInArray CONFIG=configH1I0.fti LEVEL=1 ./test/tests.sh'
          }
        }
      }
      stage('Standard Tests L2 No Head') {
        agent {
          docker {
            image 'kellekai/archlinuxopenmpi1.10'
          }
        }
        steps {
          sh '''
            mkdir build; cd build
            cmake -DCMAKE_INSTALL_PREFIX=`pwd`/RELEASE -DENABLE_FORTRAN=OFF ..
            make all install
            '''
          catchError {
            sh 'cd build; TEST=diffSizes CONFIG=configH0I1.fti LEVEL=2 CKPTORPTNER=0 CORRORERASE=0 CORRUPTIONLEVEL=0 ./tests/test.sh'
          }
          catchError {
            sh 'cd build; TEST=diffSizes CONFIG=configH0I1.fti LEVEL=2 CKPTORPTNER=0 CORRORERASE=1 CORRUPTIONLEVEL=0 ./tests/test.sh'
          }
          catchError {
            sh 'cd build; TEST=diffSizes CONFIG=configH0I1.fti LEVEL=2 CKPTORPTNER=1 CORRORERASE=0 CORRUPTIONLEVEL=0 ./tests/test.sh'
          }
          catchError {
            sh 'cd build; TEST=diffSizes CONFIG=configH0I1.fti LEVEL=2 CKPTORPTNER=1 CORRORERASE=1 CORRUPTIONLEVEL=0 ./tests/test.sh'
          }
          catchError {
            sh 'cd build; TEST=diffSizes CONFIG=configH0I1.fti LEVEL=2 CKPTORPTNER=0 CORRORERASE=0 CORRUPTIONLEVEL=1 ./tests/test.sh'
          }
          catchError {
            sh 'cd build; TEST=diffSizes CONFIG=configH0I1.fti LEVEL=2 CKPTORPTNER=0 CORRORERASE=1 CORRUPTIONLEVEL=1 ./tests/test.sh'
          }
          catchError {
            sh 'cd build; TEST=diffSizes CONFIG=configH0I1.fti LEVEL=2 CKPTORPTNER=1 CORRORERASE=0 CORRUPTIONLEVEL=1 ./tests/test.sh'
          }
          catchError {
            sh 'cd build; TEST=diffSizes CONFIG=configH0I1.fti LEVEL=2 CKPTORPTNER=1 CORRORERASE=1 CORRUPTIONLEVEL=1 ./tests/test.sh'
          }
          catchError {
            sh 'cd build; TEST=diffSizes CONFIG=configH0I1.fti LEVEL=2 CKPTORPTNER=0 CORRORERASE=0 CORRUPTIONLEVEL=2 ./tests/test.sh'
          }
          catchError {
            sh 'cd build; TEST=diffSizes CONFIG=configH0I1.fti LEVEL=2 CKPTORPTNER=0 CORRORERASE=1 CORRUPTIONLEVEL=2 ./tests/test.sh'
          }
          catchError {
            sh 'cd build; TEST=diffSizes CONFIG=configH0I1.fti LEVEL=2 CKPTORPTNER=1 CORRORERASE=0 CORRUPTIONLEVEL=2 ./tests/test.sh'
          }
          catchError {
            sh 'cd build; TEST=diffSizes CONFIG=configH0I1.fti LEVEL=2 CKPTORPTNER=1 CORRORERASE=1 CORRUPTIONLEVEL=2 ./tests/test.sh'
          }
          catchError {
            sh 'cd build; TEST=diffSizes CONFIG=configH0I1.fti LEVEL=2 CKPTORPTNER=0 CORRORERASE=0 CORRUPTIONLEVEL=3 ./tests/test.sh'
          }
          catchError {
            sh 'cd build; TEST=diffSizes CONFIG=configH0I1.fti LEVEL=2 CKPTORPTNER=0 CORRORERASE=1 CORRUPTIONLEVEL=3 ./tests/test.sh'
          }
          catchError {
            sh 'cd build; TEST=diffSizes CONFIG=configH0I1.fti LEVEL=2 CKPTORPTNER=1 CORRORERASE=0 CORRUPTIONLEVEL=3 ./tests/test.sh'
          }
          catchError {
            sh 'cd build; TEST=diffSizes CONFIG=configH0I1.fti LEVEL=2 CKPTORPTNER=1 CORRORERASE=1 CORRUPTIONLEVEL=3 ./tests/test.sh'
          }
          catchError {
            sh 'cd build; TEST=diffSizes NOTCORRUPT=1 CONFIG=configH0I1.fti LEVEL=2 ./tests/test.sh'
          }
          catchError {
            sh 'cd build; TEST=addInArray CONFIG=configH0I1.fti LEVEL=2 ./tests/test.sh'
          }
        }
      }
      stage('Standard Tests L2 With Head') {
        agent {
          docker {
            image 'kellekai/archlinuxopenmpi1.10'
          }
        }
        steps {
          sh '''
            mkdir build; cd build
            cmake -DCMAKE_INSTALL_PREFIX=`pwd`/RELEASE -DENABLE_FORTRAN=OFF ..
            make all install
            '''
          catchError {
            sh 'cd build; TEST=diffSizes CONFIG=configH1I1.fti LEVEL=2 CKPTORPTNER=0 CORRORERASE=0 CORRUPTIONLEVEL=0 ./tests/test.sh'
          }
          catchError {
            sh 'cd build; TEST=diffSizes CONFIG=configH1I1.fti LEVEL=2 CKPTORPTNER=0 CORRORERASE=1 CORRUPTIONLEVEL=0 ./tests/test.sh'
          }
          catchError {
            sh 'cd build; TEST=diffSizes CONFIG=configH1I1.fti LEVEL=2 CKPTORPTNER=1 CORRORERASE=0 CORRUPTIONLEVEL=0 ./tests/test.sh'
          }
          catchError {
            sh 'cd build; TEST=diffSizes CONFIG=configH1I1.fti LEVEL=2 CKPTORPTNER=1 CORRORERASE=1 CORRUPTIONLEVEL=0 ./tests/test.sh'
          }
          catchError {
            sh 'cd build; TEST=diffSizes CONFIG=configH1I1.fti LEVEL=2 CKPTORPTNER=0 CORRORERASE=0 CORRUPTIONLEVEL=1 ./tests/test.sh'
          }
          catchError {
            sh 'cd build; TEST=diffSizes CONFIG=configH1I1.fti LEVEL=2 CKPTORPTNER=0 CORRORERASE=1 CORRUPTIONLEVEL=1 ./tests/test.sh'
          }
          catchError {
            sh 'cd build; TEST=diffSizes CONFIG=configH1I1.fti LEVEL=2 CKPTORPTNER=1 CORRORERASE=0 CORRUPTIONLEVEL=1 ./tests/test.sh'
          }
          catchError {
            sh 'cd build; TEST=diffSizes CONFIG=configH1I1.fti LEVEL=2 CKPTORPTNER=1 CORRORERASE=1 CORRUPTIONLEVEL=1 ./tests/test.sh'
          }
          catchError {
            sh 'cd build; TEST=diffSizes CONFIG=configH1I1.fti LEVEL=2 CKPTORPTNER=0 CORRORERASE=0 CORRUPTIONLEVEL=2 ./tests/test.sh'
          }
          catchError {
            sh 'cd build; TEST=diffSizes CONFIG=configH1I1.fti LEVEL=2 CKPTORPTNER=0 CORRORERASE=1 CORRUPTIONLEVEL=2 ./tests/test.sh'
          }
          catchError {
            sh 'cd build; TEST=diffSizes CONFIG=configH1I1.fti LEVEL=2 CKPTORPTNER=1 CORRORERASE=0 CORRUPTIONLEVEL=2 ./tests/test.sh'
          }
          catchError {
            sh 'cd build; TEST=diffSizes CONFIG=configH1I1.fti LEVEL=2 CKPTORPTNER=1 CORRORERASE=1 CORRUPTIONLEVEL=2 ./tests/test.sh'
          }
          catchError {
            sh 'cd build; TEST=diffSizes CONFIG=configH1I1.fti LEVEL=2 CKPTORPTNER=0 CORRORERASE=0 CORRUPTIONLEVEL=3 ./tests/test.sh'
          }
          catchError {
            sh 'cd build; TEST=diffSizes CONFIG=configH1I1.fti LEVEL=2 CKPTORPTNER=0 CORRORERASE=1 CORRUPTIONLEVEL=3 ./tests/test.sh'
          }
          catchError {
            sh 'cd build; TEST=diffSizes CONFIG=configH1I1.fti LEVEL=2 CKPTORPTNER=1 CORRORERASE=0 CORRUPTIONLEVEL=3 ./tests/test.sh'
          }
          catchError {
            sh 'cd build; TEST=diffSizes CONFIG=configH1I1.fti LEVEL=2 CKPTORPTNER=1 CORRORERASE=1 CORRUPTIONLEVEL=3 ./tests/test.sh'
          }
          catchError {
            sh 'cd build; TEST=diffSizes CONFIG=configH1I0.fti LEVEL=2 CKPTORPTNER=0 CORRORERASE=0 CORRUPTIONLEVEL=0 ./tests/test.sh'
          }
          catchError {
            sh 'cd build; TEST=diffSizes CONFIG=configH1I0.fti LEVEL=2 CKPTORPTNER=0 CORRORERASE=1 CORRUPTIONLEVEL=0 ./tests/test.sh'
          }
          catchError {
            sh 'cd build; TEST=diffSizes CONFIG=configH1I0.fti LEVEL=2 CKPTORPTNER=1 CORRORERASE=0 CORRUPTIONLEVEL=0 ./tests/test.sh'
          }
          catchError {
            sh 'cd build; TEST=diffSizes CONFIG=configH1I0.fti LEVEL=2 CKPTORPTNER=1 CORRORERASE=1 CORRUPTIONLEVEL=0 ./tests/test.sh'
          }
          catchError {
            sh 'cd build; TEST=diffSizes CONFIG=configH1I0.fti LEVEL=2 CKPTORPTNER=0 CORRORERASE=0 CORRUPTIONLEVEL=1 ./tests/test.sh'
          }
          catchError {
            sh 'cd build; TEST=diffSizes CONFIG=configH1I0.fti LEVEL=2 CKPTORPTNER=0 CORRORERASE=1 CORRUPTIONLEVEL=1 ./tests/test.sh'
          }
          catchError {
            sh 'cd build; TEST=diffSizes CONFIG=configH1I0.fti LEVEL=2 CKPTORPTNER=1 CORRORERASE=0 CORRUPTIONLEVEL=1 ./tests/test.sh'
          }
          catchError {
            sh 'cd build; TEST=diffSizes CONFIG=configH1I0.fti LEVEL=2 CKPTORPTNER=1 CORRORERASE=1 CORRUPTIONLEVEL=1 ./tests/test.sh'
          }
          catchError {
            sh 'cd build; TEST=diffSizes CONFIG=configH1I0.fti LEVEL=2 CKPTORPTNER=0 CORRORERASE=0 CORRUPTIONLEVEL=2 ./tests/test.sh'
          }
          catchError {
            sh 'cd build; TEST=diffSizes CONFIG=configH1I0.fti LEVEL=2 CKPTORPTNER=0 CORRORERASE=1 CORRUPTIONLEVEL=2 ./tests/test.sh'
          }
          catchError {
            sh 'cd build; TEST=diffSizes CONFIG=configH1I0.fti LEVEL=2 CKPTORPTNER=1 CORRORERASE=0 CORRUPTIONLEVEL=2 ./tests/test.sh'
          }
          catchError {
            sh 'cd build; TEST=diffSizes CONFIG=configH1I0.fti LEVEL=2 CKPTORPTNER=1 CORRORERASE=1 CORRUPTIONLEVEL=2 ./tests/test.sh'
          }
          catchError {
            sh 'cd build; TEST=diffSizes CONFIG=configH1I0.fti LEVEL=2 CKPTORPTNER=0 CORRORERASE=0 CORRUPTIONLEVEL=3 ./tests/test.sh'
          }
          catchError {
            sh 'cd build; TEST=diffSizes CONFIG=configH1I0.fti LEVEL=2 CKPTORPTNER=0 CORRORERASE=1 CORRUPTIONLEVEL=3 ./tests/test.sh'
          }
          catchError {
            sh 'cd build; TEST=diffSizes CONFIG=configH1I0.fti LEVEL=2 CKPTORPTNER=1 CORRORERASE=0 CORRUPTIONLEVEL=3 ./tests/test.sh'
          }
          catchError {
            sh 'cd build; TEST=diffSizes CONFIG=configH1I0.fti LEVEL=2 CKPTORPTNER=1 CORRORERASE=1 CORRUPTIONLEVEL=3 ./tests/test.sh'
          }
          catchError {
            sh 'cd build; TEST=diffSizes NOTCORRUPT=1 CONFIG=configH1I1.fti LEVEL=2 ./tests/test.sh'
          }
          catchError {
            sh 'cd build; TEST=diffSizes NOTCORRUPT=1 CONFIG=configH1I0.fti LEVEL=2 ./tests/test.sh'
          }
          catchError {
            sh 'cd build; TEST=addInArray CONFIG=configH1I1.fti LEVEL=2 ./tests/test.sh'
          }
          catchError {
            sh 'cd build; TEST=addInArray CONFIG=configH1I0.fti LEVEL=2 ./tests/test.sh'
          }
        }
      }
      stage('Standard Tests L3 No Head') {
        agent {
          docker {
            image 'kellekai/archlinuxopenmpi1.10'
          }
        }
        steps {
          sh '''
            mkdir build; cd build
            cmake -DCMAKE_INSTALL_PREFIX=`pwd`/RELEASE -DENABLE_FORTRAN=OFF ..
            make all install
            '''
          catchError {
            sh 'cd build; TEST=diffSizes CONFIG=configH0I1.fti LEVEL=3 CKPTORPTNER=0 CORRORERASE=0 CORRUPTIONLEVEL=0 ./tests/test.sh'
          }
          catchError {
            sh 'cd build; TEST=diffSizes CONFIG=configH0I1.fti LEVEL=3 CKPTORPTNER=0 CORRORERASE=1 CORRUPTIONLEVEL=0 ./tests/test.sh'
          }
          catchError {
            sh 'cd build; TEST=diffSizes CONFIG=configH0I1.fti LEVEL=3 CKPTORPTNER=1 CORRORERASE=0 CORRUPTIONLEVEL=0 ./tests/test.sh'
          }
          catchError {
            sh 'cd build; TEST=diffSizes CONFIG=configH0I1.fti LEVEL=3 CKPTORPTNER=1 CORRORERASE=1 CORRUPTIONLEVEL=0 ./tests/test.sh'
          }
          catchError {
            sh 'cd build; TEST=diffSizes CONFIG=configH0I1.fti LEVEL=3 CKPTORPTNER=0 CORRORERASE=0 CORRUPTIONLEVEL=1 ./tests/test.sh'
          }
          catchError {
            sh 'cd build; TEST=diffSizes CONFIG=configH0I1.fti LEVEL=3 CKPTORPTNER=0 CORRORERASE=1 CORRUPTIONLEVEL=1 ./tests/test.sh'
          }
          catchError {
            sh 'cd build; TEST=diffSizes CONFIG=configH0I1.fti LEVEL=3 CKPTORPTNER=1 CORRORERASE=0 CORRUPTIONLEVEL=1 ./tests/test.sh'
          }
          catchError {
            sh 'cd build; TEST=diffSizes CONFIG=configH0I1.fti LEVEL=3 CKPTORPTNER=1 CORRORERASE=1 CORRUPTIONLEVEL=1 ./tests/test.sh'
          }
          catchError {
            sh 'cd build; TEST=diffSizes CONFIG=configH0I1.fti LEVEL=3 CKPTORPTNER=0 CORRORERASE=0 CORRUPTIONLEVEL=2 ./tests/test.sh'
          }
          catchError {
            sh 'cd build; TEST=diffSizes CONFIG=configH0I1.fti LEVEL=3 CKPTORPTNER=0 CORRORERASE=1 CORRUPTIONLEVEL=2 ./tests/test.sh'
          }
          catchError {
            sh 'cd build; TEST=diffSizes CONFIG=configH0I1.fti LEVEL=3 CKPTORPTNER=1 CORRORERASE=0 CORRUPTIONLEVEL=2 ./tests/test.sh'
          }
          catchError {
            sh 'cd build; TEST=diffSizes CONFIG=configH0I1.fti LEVEL=3 CKPTORPTNER=1 CORRORERASE=1 CORRUPTIONLEVEL=2 ./tests/test.sh'
          }
          catchError {
            sh 'cd build; TEST=diffSizes CONFIG=configH0I1.fti LEVEL=3 CKPTORPTNER=0 CORRORERASE=0 CORRUPTIONLEVEL=3 ./tests/test.sh'
          }
          catchError {
            sh 'cd build; TEST=diffSizes CONFIG=configH0I1.fti LEVEL=3 CKPTORPTNER=0 CORRORERASE=1 CORRUPTIONLEVEL=3 ./tests/test.sh'
          }
          catchError {
            sh 'cd build; TEST=diffSizes CONFIG=configH0I1.fti LEVEL=3 CKPTORPTNER=1 CORRORERASE=0 CORRUPTIONLEVEL=3 ./tests/test.sh'
          }
          catchError {
            sh 'cd build; TEST=diffSizes CONFIG=configH0I1.fti LEVEL=3 CKPTORPTNER=1 CORRORERASE=1 CORRUPTIONLEVEL=3 ./tests/test.sh'
          }
          catchError {
            sh 'cd build; TEST=diffSizes NOTCORRUPT=1 CONFIG=configH0I1.fti LEVEL=3 ./tests/test.sh'
          }
          catchError {
            sh 'cd build; TEST=addInArray CONFIG=configH0I1.fti LEVEL=3 ./tests/test.sh'
          }
        }
      }
      stage('Standard Tests L3 With Head') {
        agent {
          docker {
            image 'kellekai/archlinuxopenmpi1.10'
          }
        }
        steps {
          sh '''
            mkdir build; cd build
            cmake -DCMAKE_INSTALL_PREFIX=`pwd`/RELEASE -DENABLE_FORTRAN=OFF ..
            make all install
            '''
          catchError {
            sh 'cd build; TEST=diffSizes CONFIG=configH1I1.fti LEVEL=3 CKPTORPTNER=0 CORRORERASE=0 CORRUPTIONLEVEL=0 ./tests/test.sh'
          }
          catchError {
            sh 'cd build; TEST=diffSizes CONFIG=configH1I1.fti LEVEL=3 CKPTORPTNER=0 CORRORERASE=1 CORRUPTIONLEVEL=0 ./tests/test.sh'
          }
          catchError {
            sh 'cd build; TEST=diffSizes CONFIG=configH1I1.fti LEVEL=3 CKPTORPTNER=1 CORRORERASE=0 CORRUPTIONLEVEL=0 ./tests/test.sh'
          }
          catchError {
            sh 'cd build; TEST=diffSizes CONFIG=configH1I1.fti LEVEL=3 CKPTORPTNER=1 CORRORERASE=1 CORRUPTIONLEVEL=0 ./tests/test.sh'
          }
          catchError {
            sh 'cd build; TEST=diffSizes CONFIG=configH1I1.fti LEVEL=3 CKPTORPTNER=0 CORRORERASE=0 CORRUPTIONLEVEL=1 ./tests/test.sh'
          }
          catchError {
            sh 'cd build; TEST=diffSizes CONFIG=configH1I1.fti LEVEL=3 CKPTORPTNER=0 CORRORERASE=1 CORRUPTIONLEVEL=1 ./tests/test.sh'
          }
          catchError {
            sh 'cd build; TEST=diffSizes CONFIG=configH1I1.fti LEVEL=3 CKPTORPTNER=1 CORRORERASE=0 CORRUPTIONLEVEL=1 ./tests/test.sh'
          }
          catchError {
            sh 'cd build; TEST=diffSizes CONFIG=configH1I1.fti LEVEL=3 CKPTORPTNER=1 CORRORERASE=1 CORRUPTIONLEVEL=1 ./tests/test.sh'
          }
          catchError {
            sh 'cd build; TEST=diffSizes CONFIG=configH1I1.fti LEVEL=3 CKPTORPTNER=0 CORRORERASE=0 CORRUPTIONLEVEL=2 ./tests/test.sh'
          }
          catchError {
            sh 'cd build; TEST=diffSizes CONFIG=configH1I1.fti LEVEL=3 CKPTORPTNER=0 CORRORERASE=1 CORRUPTIONLEVEL=2 ./tests/test.sh'
          }
          catchError {
            sh 'cd build; TEST=diffSizes CONFIG=configH1I1.fti LEVEL=3 CKPTORPTNER=1 CORRORERASE=0 CORRUPTIONLEVEL=2 ./tests/test.sh'
          }
          catchError {
            sh 'cd build; TEST=diffSizes CONFIG=configH1I1.fti LEVEL=3 CKPTORPTNER=1 CORRORERASE=1 CORRUPTIONLEVEL=2 ./tests/test.sh'
          }
          catchError {
            sh 'cd build; TEST=diffSizes CONFIG=configH1I1.fti LEVEL=3 CKPTORPTNER=0 CORRORERASE=0 CORRUPTIONLEVEL=3 ./tests/test.sh'
          }
          catchError {
            sh 'cd build; TEST=diffSizes CONFIG=configH1I1.fti LEVEL=3 CKPTORPTNER=0 CORRORERASE=1 CORRUPTIONLEVEL=3 ./tests/test.sh'
          }
          catchError {
            sh 'cd build; TEST=diffSizes CONFIG=configH1I1.fti LEVEL=3 CKPTORPTNER=1 CORRORERASE=0 CORRUPTIONLEVEL=3 ./tests/test.sh'
          }
          catchError {
            sh 'cd build; TEST=diffSizes CONFIG=configH1I1.fti LEVEL=3 CKPTORPTNER=1 CORRORERASE=1 CORRUPTIONLEVEL=3 ./tests/test.sh'
          }
          catchError {
            sh 'cd build; TEST=diffSizes CONFIG=configH1I0.fti LEVEL=3 CKPTORPTNER=0 CORRORERASE=0 CORRUPTIONLEVEL=0 ./tests/test.sh'
          }
          catchError {
            sh 'cd build; TEST=diffSizes CONFIG=configH1I0.fti LEVEL=3 CKPTORPTNER=0 CORRORERASE=1 CORRUPTIONLEVEL=0 ./tests/test.sh'
          }
          catchError {
            sh 'cd build; TEST=diffSizes CONFIG=configH1I0.fti LEVEL=3 CKPTORPTNER=1 CORRORERASE=0 CORRUPTIONLEVEL=0 ./tests/test.sh'
          }
          catchError {
            sh 'cd build; TEST=diffSizes CONFIG=configH1I0.fti LEVEL=3 CKPTORPTNER=1 CORRORERASE=1 CORRUPTIONLEVEL=0 ./tests/test.sh'
          }
          catchError {
            sh 'cd build; TEST=diffSizes CONFIG=configH1I0.fti LEVEL=3 CKPTORPTNER=0 CORRORERASE=0 CORRUPTIONLEVEL=1 ./tests/test.sh'
          }
          catchError {
            sh 'cd build; TEST=diffSizes CONFIG=configH1I0.fti LEVEL=3 CKPTORPTNER=0 CORRORERASE=1 CORRUPTIONLEVEL=1 ./tests/test.sh'
          }
          catchError {
            sh 'cd build; TEST=diffSizes CONFIG=configH1I0.fti LEVEL=3 CKPTORPTNER=1 CORRORERASE=0 CORRUPTIONLEVEL=1 ./tests/test.sh'
          }
          catchError {
            sh 'cd build; TEST=diffSizes CONFIG=configH1I0.fti LEVEL=3 CKPTORPTNER=1 CORRORERASE=1 CORRUPTIONLEVEL=1 ./tests/test.sh'
          }
          catchError {
            sh 'cd build; TEST=diffSizes CONFIG=configH1I0.fti LEVEL=3 CKPTORPTNER=0 CORRORERASE=0 CORRUPTIONLEVEL=2 ./tests/test.sh'
          }
          catchError {
            sh 'cd build; TEST=diffSizes CONFIG=configH1I0.fti LEVEL=3 CKPTORPTNER=0 CORRORERASE=1 CORRUPTIONLEVEL=2 ./tests/test.sh'
          }
          catchError {
            sh 'cd build; TEST=diffSizes CONFIG=configH1I0.fti LEVEL=3 CKPTORPTNER=1 CORRORERASE=0 CORRUPTIONLEVEL=2 ./tests/test.sh'
          }
          catchError {
            sh 'cd build; TEST=diffSizes CONFIG=configH1I0.fti LEVEL=3 CKPTORPTNER=1 CORRORERASE=1 CORRUPTIONLEVEL=2 ./tests/test.sh'
          }
          catchError {
            sh 'cd build; TEST=diffSizes CONFIG=configH1I0.fti LEVEL=3 CKPTORPTNER=0 CORRORERASE=0 CORRUPTIONLEVEL=3 ./tests/test.sh'
          }
          catchError {
            sh 'cd build; TEST=diffSizes CONFIG=configH1I0.fti LEVEL=3 CKPTORPTNER=0 CORRORERASE=1 CORRUPTIONLEVEL=3 ./tests/test.sh'
          }
          catchError {
            sh 'cd build; TEST=diffSizes CONFIG=configH1I0.fti LEVEL=3 CKPTORPTNER=1 CORRORERASE=0 CORRUPTIONLEVEL=3 ./tests/test.sh'
          }
          catchError {
            sh 'cd build; TEST=diffSizes CONFIG=configH1I0.fti LEVEL=3 CKPTORPTNER=1 CORRORERASE=1 CORRUPTIONLEVEL=3 ./tests/test.sh'
          }
          catchError {
            sh 'cd build; TEST=diffSizes NOTCORRUPT=1 CONFIG=configH1I1.fti LEVEL=3 ./tests/test.sh'
          }
          catchError {
            sh 'cd build; TEST=diffSizes NOTCORRUPT=1 CONFIG=configH1I0.fti LEVEL=3 ./tests/test.sh'
          }
          catchError {
            sh 'cd build; TEST=addInArray CONFIG=configH1I1.fti LEVEL=3 ./tests/test.sh'
          }
          catchError {
            sh 'cd build; TEST=addInArray CONFIG=configH1I0.fti LEVEL=3 ./tests/test.sh'
          }
          catchError {
            sh 'cd build; TEST=diffSizes CONFIG=configH1I0.fti LEVEL=3 CKPTORPTNER=0 CORRORERASE=0 CORRUPTIONLEVEL=3 CMAKEVERSION=3.3 ./tests/test.sh'
          }
          catchError {
            sh 'cd build; TEST=diffSizes CONFIG=configH1I0.fti LEVEL=3 CKPTORPTNER=0 CORRORERASE=0 CORRUPTIONLEVEL=3 CMAKEVERSION=3.4 ./tests/test.sh'
          }
          catchError {
            sh 'cd build; TEST=diffSizes CONFIG=configH1I0.fti LEVEL=3 CKPTORPTNER=0 CORRORERASE=0 CORRUPTIONLEVEL=3 CMAKEVERSION=3.5 ./tests/test.sh'
          }
          catchError {
            sh 'cd build; TEST=diffSizes CONFIG=configH1I0.fti LEVEL=3 CKPTORPTNER=0 CORRORERASE=0 CORRUPTIONLEVEL=3 CMAKEVERSION=3.6 ./tests/test.sh'
          }
          catchError {
            sh 'cd build; TEST=diffSizes CONFIG=configH1I0.fti LEVEL=3 CKPTORPTNER=0 CORRORERASE=0 CORRUPTIONLEVEL=3 CMAKEVERSION=3.7 ./tests/test.sh'
          }
          catchError {
            sh 'cd build; TEST=diffSizes CONFIG=configH1I0.fti LEVEL=3 CKPTORPTNER=0 CORRORERASE=0 CORRUPTIONLEVEL=3 CMAKEVERSION=3.8 ./tests/test.sh'
          }
          catchError {
            sh 'cd build; TEST=diffSizes CONFIG=configH1I0.fti LEVEL=3 CKPTORPTNER=0 CORRORERASE=0 CORRUPTIONLEVEL=3 CMAKEVERSION=3.9 ./tests/test.sh'
          }
        }
      }
      stage('Standard Tests L4 No Head') {
        agent {
          docker {
            image 'kellekai/archlinuxopenmpi1.10'
          }
        }
        steps {
          sh '''
            mkdir build; cd build
            cmake -DCMAKE_INSTALL_PREFIX=`pwd`/RELEASE -DENABLE_FORTRAN=OFF ..
            make all install
            '''
          catchError {
            sh 'cd build; TEST=diffSizes CONFIG=configH0I1.fti LEVEL=4 CKPTORPTNER=0 CORRORERASE=0 CORRUPTIONLEVEL=0 ./tests/test.sh'
          }
          catchError {
            sh 'cd build; TEST=diffSizes CONFIG=configH0I1.fti LEVEL=4 CKPTORPTNER=0 CORRORERASE=1 CORRUPTIONLEVEL=0 ./tests/test.sh'
          }
          catchError {
            sh 'cd build; TEST=diffSizes NOTCORRUPT=1 CONFIG=configH0I1.fti LEVEL=4 ./tests/test.sh'
          }
          catchError {
            sh 'cd build; TEST=addInArray CONFIG=configH0I1.fti LEVEL=4 ./tests/test.sh'
          }
        }
      }
      stage('Standard Tests L4 With Head') {
        agent {
          docker {
            image 'kellekai/archlinuxopenmpi1.10'
          }
        }
        steps {
          sh '''
            mkdir build; cd build
            cmake -DCMAKE_INSTALL_PREFIX=`pwd`/RELEASE -DENABLE_FORTRAN=OFF ..
            make all install
            '''
          catchError {
            sh 'cd build; TEST=diffSizes CONFIG=configH1I1.fti LEVEL=4 CKPTORPTNER=0 CORRORERASE=0 CORRUPTIONLEVEL=0 ./tests/test.sh'
          }
          catchError {
            sh 'cd build; TEST=diffSizes CONFIG=configH1I1.fti LEVEL=4 CKPTORPTNER=0 CORRORERASE=1 CORRUPTIONLEVEL=0 ./tests/test.sh'
          }
          catchError {
            sh 'cd build; TEST=diffSizes CONFIG=configH1I0.fti LEVEL=4 CKPTORPTNER=0 CORRORERASE=0 CORRUPTIONLEVEL=0 ./tests/test.sh'
          }
          catchError {
            sh 'cd build; TEST=diffSizes CONFIG=configH1I0.fti LEVEL=4 CKPTORPTNER=0 CORRORERASE=1 CORRUPTIONLEVEL=0 ./tests/test.sh'
          }
          catchError {
            sh 'cd build; TEST=diffSizes NOTCORRUPT=1 CONFIG=configH1I1.fti LEVEL=4 ./tests/test.sh'
          }
          catchError {
            sh 'cd build; TEST=diffSizes NOTCORRUPT=1 CONFIG=configH1I0.fti LEVEL=4 ./tests/test.sh'
          }
          catchError {
            sh 'cd build; TEST=addInArray CONFIG=configH1I1.fti LEVEL=4 ./tests/test.sh'
          }
          catchError {
            sh 'cd build; TEST=addInArray CONFIG=configH1I0.fti LEVEL=4 ./tests/test.sh'
          }
        }
      }
      stage('Special Cases Tests') {
        agent {
          docker {
            image 'kellekai/archlinuxopenmpi1.10'
          }
        }
        steps {
          sh '''
            mkdir build; cd build
            cmake -DCMAKE_INSTALL_PREFIX=`pwd`/RELEASE -DENABLE_FORTRAN=OFF ..
            make all install
            '''
          catchError {
            sh 'cd build; TEST=heatdis CONFIG=configH0I1.fti ./tests/test.sh'
          }
          catchError {
            sh 'cd build; TEST=heatdis CONFIG=configH1I1.fti ./tests/test.sh'
          }
          catchError {
            sh 'cd build; TEST=heatdis CONFIG=configH1I0.fti ./tests/test.sh'
          }
          catchError {
            sh 'cd build; TEST=nodeFlag CONFIG=configH0I1.fti ./tests/test.sh'
          }
          catchError {
            sh 'cd build; TEST=nodeFlag CONFIG=configH1I1.fti ./tests/test.sh'
          }
          catchError {
            sh 'cd build; TEST=nodeFlag CONFIG=configH1I0.fti ./tests/test.sh'
          }
          catchError {
            sh 'cd build; TEST=syncIntv CONFIG=configH1I0.fti ./tests/test.sh'
          }
          catchError {
            sh 'cd build; TEST=hdf5 ./tests/test.sh'
          }
          catchError {
            sh 'cd build; TEST=cornerCases ./tests/test.sh'
          }
        }
      }
      stage('Cmake Versions Test') {
        agent {
          docker {
            image 'kellekai/archlinuxopenmpi1.10'
          }
        }
        steps {
          sh '''
            mkdir build; cd build
            cmake -DCMAKE_INSTALL_PREFIX=`pwd`/RELEASE -DENABLE_FORTRAN=OFF ..
            make all install
            '''
          catchError {
            sh 'cd build; TEST=diffSizes CONFIG=configH1I0.fti LEVEL=3 CKPTORPTNER=0 CORRORERASE=0 CORRUPTIONLEVEL=3 CMAKEVERSION=3.3 ./tests/test.sh'
          }
          catchError {
            sh 'cd build; TEST=diffSizes CONFIG=configH1I0.fti LEVEL=3 CKPTORPTNER=0 CORRORERASE=0 CORRUPTIONLEVEL=3 CMAKEVERSION=3.4 ./tests/test.sh'
          }
          catchError {
            sh 'cd build; TEST=diffSizes CONFIG=configH1I0.fti LEVEL=3 CKPTORPTNER=0 CORRORERASE=0 CORRUPTIONLEVEL=3 CMAKEVERSION=3.5 ./tests/test.sh'
          }
          catchError {
            sh 'cd build; TEST=diffSizes CONFIG=configH1I0.fti LEVEL=3 CKPTORPTNER=0 CORRORERASE=0 CORRUPTIONLEVEL=3 CMAKEVERSION=3.6 ./tests/test.sh'
          }
          catchError {
            sh 'cd build; TEST=diffSizes CONFIG=configH1I0.fti LEVEL=3 CKPTORPTNER=0 CORRORERASE=0 CORRUPTIONLEVEL=3 CMAKEVERSION=3.7 ./tests/test.sh'
          }
          catchError {
            sh 'cd build; TEST=diffSizes CONFIG=configH1I0.fti LEVEL=3 CKPTORPTNER=0 CORRORERASE=0 CORRUPTIONLEVEL=3 CMAKEVERSION=3.8 ./tests/test.sh'
          }
          catchError {
            sh 'cd build; TEST=diffSizes CONFIG=configH1I0.fti LEVEL=3 CKPTORPTNER=0 CORRORERASE=0 CORRUPTIONLEVEL=3 CMAKEVERSION=3.9 ./tests/test.sh'
          }
        }
      }
    }
}
