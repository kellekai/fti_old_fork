pipeline {
  agent none
  stages {
    stage('PGI Compiler Tests') {
      agent {
        docker {
          image 'kellekai/archlinuxpgi18'
        }

      }
      environment {
        PGI = '/opt/pgi'
      }
      steps {
        sh '''
            mkdir build; cd build
            CC=pgcc FC=pgfortran cmake -DCMAKE_INSTALL_PREFIX=`pwd`/RELEASE ..
            make -j 16 all install
            '''
        catchError() {
          sh 'cd build; CONFIG=configH0I1.fti LEVEL=1 ./test/tests.sh'
        }

        catchError() {
          sh 'cd build; CONFIG=configH0I1.fti LEVEL=2 ./test/tests.sh'
        }

        catchError() {
          sh 'cd build; CONFIG=configH0I1.fti LEVEL=3 PART=0 ./test/tests.sh'
        }

        catchError() {
          sh 'cd build; CONFIG=configH0I1.fti LEVEL=3 PART=1 ./test/tests.sh'
        }

        catchError() {
          sh 'cd build; CONFIG=configH0I1.fti LEVEL=4 ./test/tests.sh'
        }

        catchError() {
          sh 'cd build; CONFIG=configH1I1.fti LEVEL=1 ./test/tests.sh'
        }

        catchError() {
          sh 'cd build; CONFIG=configH1I1.fti LEVEL=2 ./test/tests.sh'
        }

        catchError() {
          sh 'cd build; CONFIG=configH1I1.fti LEVEL=3 PART=0 ./test/tests.sh'
        }

        catchError() {
          sh 'cd build; CONFIG=configH1I1.fti LEVEL=3 PART=1 ./test/tests.sh'
        }

        catchError() {
          sh 'cd build; CONFIG=configH1I1.fti LEVEL=4 ./test/tests.sh'
        }

        catchError() {
          sh 'cd build; CONFIG=configH1I0.fti LEVEL=1 ./test/tests.sh'
        }

        catchError() {
          sh 'cd build; CONFIG=configH1I0.fti LEVEL=2 ./test/tests.sh'
        }

        catchError() {
          sh 'cd build; CONFIG=configH1I0.fti LEVEL=3 PART=0 ./test/tests.sh'
        }

        catchError() {
          sh 'cd build; CONFIG=configH1I0.fti LEVEL=3 PART=1 ./test/tests.sh'
        }

        catchError() {
          sh 'cd build; CONFIG=configH1I0.fti LEVEL=4 ./test/tests.sh'
        }

      }
    }
  }
}