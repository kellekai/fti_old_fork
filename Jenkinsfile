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
	stage(' TEST=diffSizes CONFIG=configH0I1.fti LEVEL=1 CKPTORPTNER=0 CORRORERASE=0 CORRUPTIONLEVEL=0 ') { 
		steps {
			sh 'source JenkinsScripts/diffSizes-1.sh'
		}
	}
	stage(' TEST=diffSizes CONFIG=configH0I1.fti LEVEL=1 CKPTORPTNER=0 CORRORERASE=1 CORRUPTIONLEVEL=0 ') { 
		steps {
			sh 'source JenkinsScripts/diffSizes-2.sh'
		}
	}
	stage(' TEST=diffSizes CONFIG=configH1I1.fti LEVEL=1 CKPTORPTNER=0 CORRORERASE=0 CORRUPTIONLEVEL=0 ') { 
		steps {
			sh 'source JenkinsScripts/diffSizes-3.sh'
		}
	}
	stage(' TEST=diffSizes CONFIG=configH1I1.fti LEVEL=1 CKPTORPTNER=0 CORRORERASE=1 CORRUPTIONLEVEL=0 ') { 
		steps {
			sh 'source JenkinsScripts/diffSizes-4.sh'
		}
	}
	stage(' TEST=diffSizes CONFIG=configH1I0.fti LEVEL=1 CKPTORPTNER=0 CORRORERASE=0 CORRUPTIONLEVEL=0 ') { 
		steps {
			sh 'source JenkinsScripts/diffSizes-5.sh'
		}
	}
	stage(' TEST=diffSizes CONFIG=configH1I0.fti LEVEL=1 CKPTORPTNER=0 CORRORERASE=1 CORRUPTIONLEVEL=0 ') { 
		steps {
			sh 'source JenkinsScripts/diffSizes-6.sh'
		}
	}
	stage(' TEST=diffSizes CONFIG=configH0I1.fti LEVEL=2 CKPTORPTNER=0 CORRORERASE=0 CORRUPTIONLEVEL=0 ') { 
		steps {
			sh 'source JenkinsScripts/diffSizes-7.sh'
		}
	}
	stage(' TEST=diffSizes CONFIG=configH0I1.fti LEVEL=2 CKPTORPTNER=0 CORRORERASE=1 CORRUPTIONLEVEL=0 ') { 
		steps {
			sh 'source JenkinsScripts/diffSizes-8.sh'
		}
	}
	stage(' TEST=diffSizes CONFIG=configH0I1.fti LEVEL=2 CKPTORPTNER=1 CORRORERASE=0 CORRUPTIONLEVEL=0 ') { 
		steps {
			sh 'source JenkinsScripts/diffSizes-9.sh'
		}
	}
	stage(' TEST=diffSizes CONFIG=configH0I1.fti LEVEL=2 CKPTORPTNER=1 CORRORERASE=1 CORRUPTIONLEVEL=0 ') { 
		steps {
			sh 'source JenkinsScripts/diffSizes-10.sh'
		}
	}
	stage(' TEST=diffSizes CONFIG=configH0I1.fti LEVEL=2 CKPTORPTNER=0 CORRORERASE=0 CORRUPTIONLEVEL=1 ') { 
		steps {
			sh 'source JenkinsScripts/diffSizes-11.sh'
		}
	}
	stage(' TEST=diffSizes CONFIG=configH0I1.fti LEVEL=2 CKPTORPTNER=0 CORRORERASE=1 CORRUPTIONLEVEL=1 ') { 
		steps {
			sh 'source JenkinsScripts/diffSizes-12.sh'
		}
	}
	stage(' TEST=diffSizes CONFIG=configH0I1.fti LEVEL=2 CKPTORPTNER=1 CORRORERASE=0 CORRUPTIONLEVEL=1 ') { 
		steps {
			sh 'source JenkinsScripts/diffSizes-13.sh'
		}
	}
	stage(' TEST=diffSizes CONFIG=configH0I1.fti LEVEL=2 CKPTORPTNER=1 CORRORERASE=1 CORRUPTIONLEVEL=1 ') { 
		steps {
			sh 'source JenkinsScripts/diffSizes-14.sh'
		}
	}
	stage(' TEST=diffSizes CONFIG=configH0I1.fti LEVEL=2 CKPTORPTNER=0 CORRORERASE=0 CORRUPTIONLEVEL=2 ') { 
		steps {
			sh 'source JenkinsScripts/diffSizes-15.sh'
		}
	}
	stage(' TEST=diffSizes CONFIG=configH0I1.fti LEVEL=2 CKPTORPTNER=0 CORRORERASE=1 CORRUPTIONLEVEL=2 ') { 
		steps {
			sh 'source JenkinsScripts/diffSizes-16.sh'
		}
	}
	stage(' TEST=diffSizes CONFIG=configH0I1.fti LEVEL=2 CKPTORPTNER=1 CORRORERASE=0 CORRUPTIONLEVEL=2 ') { 
		steps {
			sh 'source JenkinsScripts/diffSizes-17.sh'
		}
	}
	stage(' TEST=diffSizes CONFIG=configH0I1.fti LEVEL=2 CKPTORPTNER=1 CORRORERASE=1 CORRUPTIONLEVEL=2 ') { 
		steps {
			sh 'source JenkinsScripts/diffSizes-18.sh'
		}
	}
	stage(' TEST=diffSizes CONFIG=configH0I1.fti LEVEL=2 CKPTORPTNER=0 CORRORERASE=0 CORRUPTIONLEVEL=3 ') { 
		steps {
			sh 'source JenkinsScripts/diffSizes-19.sh'
		}
	}
	stage(' TEST=diffSizes CONFIG=configH0I1.fti LEVEL=2 CKPTORPTNER=0 CORRORERASE=1 CORRUPTIONLEVEL=3 ') { 
		steps {
			sh 'source JenkinsScripts/diffSizes-20.sh'
		}
	}
	stage(' TEST=diffSizes CONFIG=configH0I1.fti LEVEL=2 CKPTORPTNER=1 CORRORERASE=0 CORRUPTIONLEVEL=3 ') { 
		steps {
			sh 'source JenkinsScripts/diffSizes-21.sh'
		}
	}
	stage(' TEST=diffSizes CONFIG=configH0I1.fti LEVEL=2 CKPTORPTNER=1 CORRORERASE=1 CORRUPTIONLEVEL=3 ') { 
		steps {
			sh 'source JenkinsScripts/diffSizes-22.sh'
		}
	}
	stage(' TEST=diffSizes CONFIG=configH1I1.fti LEVEL=2 CKPTORPTNER=0 CORRORERASE=0 CORRUPTIONLEVEL=0 ') { 
		steps {
			sh 'source JenkinsScripts/diffSizes-23.sh'
		}
	}
	stage(' TEST=diffSizes CONFIG=configH1I1.fti LEVEL=2 CKPTORPTNER=0 CORRORERASE=1 CORRUPTIONLEVEL=0 ') { 
		steps {
			sh 'source JenkinsScripts/diffSizes-24.sh'
		}
	}
	stage(' TEST=diffSizes CONFIG=configH1I1.fti LEVEL=2 CKPTORPTNER=1 CORRORERASE=0 CORRUPTIONLEVEL=0 ') { 
		steps {
			sh 'source JenkinsScripts/diffSizes-25.sh'
		}
	}
	stage(' TEST=diffSizes CONFIG=configH1I1.fti LEVEL=2 CKPTORPTNER=1 CORRORERASE=1 CORRUPTIONLEVEL=0 ') { 
		steps {
			sh 'source JenkinsScripts/diffSizes-26.sh'
		}
	}
	stage(' TEST=diffSizes CONFIG=configH1I1.fti LEVEL=2 CKPTORPTNER=0 CORRORERASE=0 CORRUPTIONLEVEL=1 ') { 
		steps {
			sh 'source JenkinsScripts/diffSizes-27.sh'
		}
	}
	stage(' TEST=diffSizes CONFIG=configH1I1.fti LEVEL=2 CKPTORPTNER=0 CORRORERASE=1 CORRUPTIONLEVEL=1 ') { 
		steps {
			sh 'source JenkinsScripts/diffSizes-28.sh'
		}
	}
	stage(' TEST=diffSizes CONFIG=configH1I1.fti LEVEL=2 CKPTORPTNER=1 CORRORERASE=0 CORRUPTIONLEVEL=1 ') { 
		steps {
			sh 'source JenkinsScripts/diffSizes-29.sh'
		}
	}
	stage(' TEST=diffSizes CONFIG=configH1I1.fti LEVEL=2 CKPTORPTNER=1 CORRORERASE=1 CORRUPTIONLEVEL=1 ') { 
		steps {
			sh 'source JenkinsScripts/diffSizes-30.sh'
		}
	}
	stage(' TEST=diffSizes CONFIG=configH1I1.fti LEVEL=2 CKPTORPTNER=0 CORRORERASE=0 CORRUPTIONLEVEL=2 ') { 
		steps {
			sh 'source JenkinsScripts/diffSizes-31.sh'
		}
	}
	stage(' TEST=diffSizes CONFIG=configH1I1.fti LEVEL=2 CKPTORPTNER=0 CORRORERASE=1 CORRUPTIONLEVEL=2 ') { 
		steps {
			sh 'source JenkinsScripts/diffSizes-32.sh'
		}
	}
	stage(' TEST=diffSizes CONFIG=configH1I1.fti LEVEL=2 CKPTORPTNER=1 CORRORERASE=0 CORRUPTIONLEVEL=2 ') { 
		steps {
			sh 'source JenkinsScripts/diffSizes-33.sh'
		}
	}
	stage(' TEST=diffSizes CONFIG=configH1I1.fti LEVEL=2 CKPTORPTNER=1 CORRORERASE=1 CORRUPTIONLEVEL=2 ') { 
		steps {
			sh 'source JenkinsScripts/diffSizes-34.sh'
		}
	}
	stage(' TEST=diffSizes CONFIG=configH1I1.fti LEVEL=2 CKPTORPTNER=0 CORRORERASE=0 CORRUPTIONLEVEL=3 ') { 
		steps {
			sh 'source JenkinsScripts/diffSizes-35.sh'
		}
	}
	stage(' TEST=diffSizes CONFIG=configH1I1.fti LEVEL=2 CKPTORPTNER=0 CORRORERASE=1 CORRUPTIONLEVEL=3 ') { 
		steps {
			sh 'source JenkinsScripts/diffSizes-36.sh'
		}
	}
	stage(' TEST=diffSizes CONFIG=configH1I1.fti LEVEL=2 CKPTORPTNER=1 CORRORERASE=0 CORRUPTIONLEVEL=3 ') { 
		steps {
			sh 'source JenkinsScripts/diffSizes-37.sh'
		}
	}
	stage(' TEST=diffSizes CONFIG=configH1I1.fti LEVEL=2 CKPTORPTNER=1 CORRORERASE=1 CORRUPTIONLEVEL=3 ') { 
		steps {
			sh 'source JenkinsScripts/diffSizes-38.sh'
		}
	}
	stage(' TEST=diffSizes CONFIG=configH1I0.fti LEVEL=2 CKPTORPTNER=0 CORRORERASE=0 CORRUPTIONLEVEL=0 ') { 
		steps {
			sh 'source JenkinsScripts/diffSizes-39.sh'
		}
	}
	stage(' TEST=diffSizes CONFIG=configH1I0.fti LEVEL=2 CKPTORPTNER=0 CORRORERASE=1 CORRUPTIONLEVEL=0 ') { 
		steps {
			sh 'source JenkinsScripts/diffSizes-40.sh'
		}
	}
	stage(' TEST=diffSizes CONFIG=configH1I0.fti LEVEL=2 CKPTORPTNER=1 CORRORERASE=0 CORRUPTIONLEVEL=0 ') { 
		steps {
			sh 'source JenkinsScripts/diffSizes-41.sh'
		}
	}
	stage(' TEST=diffSizes CONFIG=configH1I0.fti LEVEL=2 CKPTORPTNER=1 CORRORERASE=1 CORRUPTIONLEVEL=0 ') { 
		steps {
			sh 'source JenkinsScripts/diffSizes-42.sh'
		}
	}
	stage(' TEST=diffSizes CONFIG=configH1I0.fti LEVEL=2 CKPTORPTNER=0 CORRORERASE=0 CORRUPTIONLEVEL=1 ') { 
		steps {
			sh 'source JenkinsScripts/diffSizes-43.sh'
		}
	}
	stage(' TEST=diffSizes CONFIG=configH1I0.fti LEVEL=2 CKPTORPTNER=0 CORRORERASE=1 CORRUPTIONLEVEL=1 ') { 
		steps {
			sh 'source JenkinsScripts/diffSizes-44.sh'
		}
	}
	stage(' TEST=diffSizes CONFIG=configH1I0.fti LEVEL=2 CKPTORPTNER=1 CORRORERASE=0 CORRUPTIONLEVEL=1 ') { 
		steps {
			sh 'source JenkinsScripts/diffSizes-45.sh'
		}
	}
	stage(' TEST=diffSizes CONFIG=configH1I0.fti LEVEL=2 CKPTORPTNER=1 CORRORERASE=1 CORRUPTIONLEVEL=1 ') { 
		steps {
			sh 'source JenkinsScripts/diffSizes-46.sh'
		}
	}
	stage(' TEST=diffSizes CONFIG=configH1I0.fti LEVEL=2 CKPTORPTNER=0 CORRORERASE=0 CORRUPTIONLEVEL=2 ') { 
		steps {
			sh 'source JenkinsScripts/diffSizes-47.sh'
		}
	}
	stage(' TEST=diffSizes CONFIG=configH1I0.fti LEVEL=2 CKPTORPTNER=0 CORRORERASE=1 CORRUPTIONLEVEL=2 ') { 
		steps {
			sh 'source JenkinsScripts/diffSizes-48.sh'
		}
	}
	stage(' TEST=diffSizes CONFIG=configH1I0.fti LEVEL=2 CKPTORPTNER=1 CORRORERASE=0 CORRUPTIONLEVEL=2 ') { 
		steps {
			sh 'source JenkinsScripts/diffSizes-49.sh'
		}
	}
	stage(' TEST=diffSizes CONFIG=configH1I0.fti LEVEL=2 CKPTORPTNER=1 CORRORERASE=1 CORRUPTIONLEVEL=2 ') { 
		steps {
			sh 'source JenkinsScripts/diffSizes-50.sh'
		}
	}
	stage(' TEST=diffSizes CONFIG=configH1I0.fti LEVEL=2 CKPTORPTNER=0 CORRORERASE=0 CORRUPTIONLEVEL=3 ') { 
		steps {
			sh 'source JenkinsScripts/diffSizes-51.sh'
		}
	}
	stage(' TEST=diffSizes CONFIG=configH1I0.fti LEVEL=2 CKPTORPTNER=0 CORRORERASE=1 CORRUPTIONLEVEL=3 ') { 
		steps {
			sh 'source JenkinsScripts/diffSizes-52.sh'
		}
	}
	stage(' TEST=diffSizes CONFIG=configH1I0.fti LEVEL=2 CKPTORPTNER=1 CORRORERASE=0 CORRUPTIONLEVEL=3 ') { 
		steps {
			sh 'source JenkinsScripts/diffSizes-53.sh'
		}
	}
	stage(' TEST=diffSizes CONFIG=configH1I0.fti LEVEL=2 CKPTORPTNER=1 CORRORERASE=1 CORRUPTIONLEVEL=3 ') { 
		steps {
			sh 'source JenkinsScripts/diffSizes-54.sh'
		}
	}
	stage(' TEST=diffSizes CONFIG=configH0I1.fti LEVEL=3 CKPTORPTNER=0 CORRORERASE=0 CORRUPTIONLEVEL=0 ') { 
		steps {
			sh 'source JenkinsScripts/diffSizes-55.sh'
		}
	}
	stage(' TEST=diffSizes CONFIG=configH0I1.fti LEVEL=3 CKPTORPTNER=0 CORRORERASE=1 CORRUPTIONLEVEL=0 ') { 
		steps {
			sh 'source JenkinsScripts/diffSizes-56.sh'
		}
	}
	stage(' TEST=diffSizes CONFIG=configH0I1.fti LEVEL=3 CKPTORPTNER=1 CORRORERASE=0 CORRUPTIONLEVEL=0 ') { 
		steps {
			sh 'source JenkinsScripts/diffSizes-57.sh'
		}
	}
	stage(' TEST=diffSizes CONFIG=configH0I1.fti LEVEL=3 CKPTORPTNER=1 CORRORERASE=1 CORRUPTIONLEVEL=0 ') { 
		steps {
			sh 'source JenkinsScripts/diffSizes-58.sh'
		}
	}
	stage(' TEST=diffSizes CONFIG=configH0I1.fti LEVEL=3 CKPTORPTNER=0 CORRORERASE=0 CORRUPTIONLEVEL=1 ') { 
		steps {
			sh 'source JenkinsScripts/diffSizes-59.sh'
		}
	}
	stage(' TEST=diffSizes CONFIG=configH0I1.fti LEVEL=3 CKPTORPTNER=0 CORRORERASE=1 CORRUPTIONLEVEL=1 ') { 
		steps {
			sh 'source JenkinsScripts/diffSizes-60.sh'
		}
	}
	stage(' TEST=diffSizes CONFIG=configH0I1.fti LEVEL=3 CKPTORPTNER=1 CORRORERASE=0 CORRUPTIONLEVEL=1 ') { 
		steps {
			sh 'source JenkinsScripts/diffSizes-61.sh'
		}
	}
	stage(' TEST=diffSizes CONFIG=configH0I1.fti LEVEL=3 CKPTORPTNER=1 CORRORERASE=1 CORRUPTIONLEVEL=1 ') { 
		steps {
			sh 'source JenkinsScripts/diffSizes-62.sh'
		}
	}
	stage(' TEST=diffSizes CONFIG=configH0I1.fti LEVEL=3 CKPTORPTNER=0 CORRORERASE=0 CORRUPTIONLEVEL=2 ') { 
		steps {
			sh 'source JenkinsScripts/diffSizes-63.sh'
		}
	}
	stage(' TEST=diffSizes CONFIG=configH0I1.fti LEVEL=3 CKPTORPTNER=0 CORRORERASE=1 CORRUPTIONLEVEL=2 ') { 
		steps {
			sh 'source JenkinsScripts/diffSizes-64.sh'
		}
	}
	stage(' TEST=diffSizes CONFIG=configH0I1.fti LEVEL=3 CKPTORPTNER=1 CORRORERASE=0 CORRUPTIONLEVEL=2 ') { 
		steps {
			sh 'source JenkinsScripts/diffSizes-65.sh'
		}
	}
	stage(' TEST=diffSizes CONFIG=configH0I1.fti LEVEL=3 CKPTORPTNER=1 CORRORERASE=1 CORRUPTIONLEVEL=2 ') { 
		steps {
			sh 'source JenkinsScripts/diffSizes-66.sh'
		}
	}
	stage(' TEST=diffSizes CONFIG=configH0I1.fti LEVEL=3 CKPTORPTNER=0 CORRORERASE=0 CORRUPTIONLEVEL=3 ') { 
		steps {
			sh 'source JenkinsScripts/diffSizes-67.sh'
		}
	}
	stage(' TEST=diffSizes CONFIG=configH0I1.fti LEVEL=3 CKPTORPTNER=0 CORRORERASE=1 CORRUPTIONLEVEL=3 ') { 
		steps {
			sh 'source JenkinsScripts/diffSizes-68.sh'
		}
	}
	stage(' TEST=diffSizes CONFIG=configH0I1.fti LEVEL=3 CKPTORPTNER=1 CORRORERASE=0 CORRUPTIONLEVEL=3 ') { 
		steps {
			sh 'source JenkinsScripts/diffSizes-69.sh'
		}
	}
	stage(' TEST=diffSizes CONFIG=configH0I1.fti LEVEL=3 CKPTORPTNER=1 CORRORERASE=1 CORRUPTIONLEVEL=3 ') { 
		steps {
			sh 'source JenkinsScripts/diffSizes-70.sh'
		}
	}
	stage(' TEST=diffSizes CONFIG=configH1I1.fti LEVEL=3 CKPTORPTNER=0 CORRORERASE=0 CORRUPTIONLEVEL=0 ') { 
		steps {
			sh 'source JenkinsScripts/diffSizes-71.sh'
		}
	}
	stage(' TEST=diffSizes CONFIG=configH1I1.fti LEVEL=3 CKPTORPTNER=0 CORRORERASE=1 CORRUPTIONLEVEL=0 ') { 
		steps {
			sh 'source JenkinsScripts/diffSizes-72.sh'
		}
	}
	stage(' TEST=diffSizes CONFIG=configH1I1.fti LEVEL=3 CKPTORPTNER=1 CORRORERASE=0 CORRUPTIONLEVEL=0 ') { 
		steps {
			sh 'source JenkinsScripts/diffSizes-73.sh'
		}
	}
	stage(' TEST=diffSizes CONFIG=configH1I1.fti LEVEL=3 CKPTORPTNER=1 CORRORERASE=1 CORRUPTIONLEVEL=0 ') { 
		steps {
			sh 'source JenkinsScripts/diffSizes-74.sh'
		}
	}
	stage(' TEST=diffSizes CONFIG=configH1I1.fti LEVEL=3 CKPTORPTNER=0 CORRORERASE=0 CORRUPTIONLEVEL=1 ') { 
		steps {
			sh 'source JenkinsScripts/diffSizes-75.sh'
		}
	}
	stage(' TEST=diffSizes CONFIG=configH1I1.fti LEVEL=3 CKPTORPTNER=0 CORRORERASE=1 CORRUPTIONLEVEL=1 ') { 
		steps {
			sh 'source JenkinsScripts/diffSizes-76.sh'
		}
	}
	stage(' TEST=diffSizes CONFIG=configH1I1.fti LEVEL=3 CKPTORPTNER=1 CORRORERASE=0 CORRUPTIONLEVEL=1 ') { 
		steps {
			sh 'source JenkinsScripts/diffSizes-77.sh'
		}
	}
	stage(' TEST=diffSizes CONFIG=configH1I1.fti LEVEL=3 CKPTORPTNER=1 CORRORERASE=1 CORRUPTIONLEVEL=1 ') { 
		steps {
			sh 'source JenkinsScripts/diffSizes-78.sh'
		}
	}
	stage(' TEST=diffSizes CONFIG=configH1I1.fti LEVEL=3 CKPTORPTNER=0 CORRORERASE=0 CORRUPTIONLEVEL=2 ') { 
		steps {
			sh 'source JenkinsScripts/diffSizes-79.sh'
		}
	}
	stage(' TEST=diffSizes CONFIG=configH1I1.fti LEVEL=3 CKPTORPTNER=0 CORRORERASE=1 CORRUPTIONLEVEL=2 ') { 
		steps {
			sh 'source JenkinsScripts/diffSizes-80.sh'
		}
	}
	stage(' TEST=diffSizes CONFIG=configH1I1.fti LEVEL=3 CKPTORPTNER=1 CORRORERASE=0 CORRUPTIONLEVEL=2 ') { 
		steps {
			sh 'source JenkinsScripts/diffSizes-81.sh'
		}
	}
	stage(' TEST=diffSizes CONFIG=configH1I1.fti LEVEL=3 CKPTORPTNER=1 CORRORERASE=1 CORRUPTIONLEVEL=2 ') { 
		steps {
			sh 'source JenkinsScripts/diffSizes-82.sh'
		}
	}
	stage(' TEST=diffSizes CONFIG=configH1I1.fti LEVEL=3 CKPTORPTNER=0 CORRORERASE=0 CORRUPTIONLEVEL=3 ') { 
		steps {
			sh 'source JenkinsScripts/diffSizes-83.sh'
		}
	}
	stage(' TEST=diffSizes CONFIG=configH1I1.fti LEVEL=3 CKPTORPTNER=0 CORRORERASE=1 CORRUPTIONLEVEL=3 ') { 
		steps {
			sh 'source JenkinsScripts/diffSizes-84.sh'
		}
	}
	stage(' TEST=diffSizes CONFIG=configH1I1.fti LEVEL=3 CKPTORPTNER=1 CORRORERASE=0 CORRUPTIONLEVEL=3 ') { 
		steps {
			sh 'source JenkinsScripts/diffSizes-85.sh'
		}
	}
	stage(' TEST=diffSizes CONFIG=configH1I1.fti LEVEL=3 CKPTORPTNER=1 CORRORERASE=1 CORRUPTIONLEVEL=3 ') { 
		steps {
			sh 'source JenkinsScripts/diffSizes-86.sh'
		}
	}
	stage(' TEST=diffSizes CONFIG=configH1I0.fti LEVEL=3 CKPTORPTNER=0 CORRORERASE=0 CORRUPTIONLEVEL=0 ') { 
		steps {
			sh 'source JenkinsScripts/diffSizes-87.sh'
		}
	}
	stage(' TEST=diffSizes CONFIG=configH1I0.fti LEVEL=3 CKPTORPTNER=0 CORRORERASE=1 CORRUPTIONLEVEL=0 ') { 
		steps {
			sh 'source JenkinsScripts/diffSizes-88.sh'
		}
	}
	stage(' TEST=diffSizes CONFIG=configH1I0.fti LEVEL=3 CKPTORPTNER=1 CORRORERASE=0 CORRUPTIONLEVEL=0 ') { 
		steps {
			sh 'source JenkinsScripts/diffSizes-89.sh'
		}
	}
	stage(' TEST=diffSizes CONFIG=configH1I0.fti LEVEL=3 CKPTORPTNER=1 CORRORERASE=1 CORRUPTIONLEVEL=0 ') { 
		steps {
			sh 'source JenkinsScripts/diffSizes-90.sh'
		}
	}
	stage(' TEST=diffSizes CONFIG=configH1I0.fti LEVEL=3 CKPTORPTNER=0 CORRORERASE=0 CORRUPTIONLEVEL=1 ') { 
		steps {
			sh 'source JenkinsScripts/diffSizes-91.sh'
		}
	}
	stage(' TEST=diffSizes CONFIG=configH1I0.fti LEVEL=3 CKPTORPTNER=0 CORRORERASE=1 CORRUPTIONLEVEL=1 ') { 
		steps {
			sh 'source JenkinsScripts/diffSizes-92.sh'
		}
	}
	stage(' TEST=diffSizes CONFIG=configH1I0.fti LEVEL=3 CKPTORPTNER=1 CORRORERASE=0 CORRUPTIONLEVEL=1 ') { 
		steps {
			sh 'source JenkinsScripts/diffSizes-93.sh'
		}
	}
	stage(' TEST=diffSizes CONFIG=configH1I0.fti LEVEL=3 CKPTORPTNER=1 CORRORERASE=1 CORRUPTIONLEVEL=1 ') { 
		steps {
			sh 'source JenkinsScripts/diffSizes-94.sh'
		}
	}
	stage(' TEST=diffSizes CONFIG=configH1I0.fti LEVEL=3 CKPTORPTNER=0 CORRORERASE=0 CORRUPTIONLEVEL=2 ') { 
		steps {
			sh 'source JenkinsScripts/diffSizes-95.sh'
		}
	}
	stage(' TEST=diffSizes CONFIG=configH1I0.fti LEVEL=3 CKPTORPTNER=0 CORRORERASE=1 CORRUPTIONLEVEL=2 ') { 
		steps {
			sh 'source JenkinsScripts/diffSizes-96.sh'
		}
	}
	stage(' TEST=diffSizes CONFIG=configH1I0.fti LEVEL=3 CKPTORPTNER=1 CORRORERASE=0 CORRUPTIONLEVEL=2 ') { 
		steps {
			sh 'source JenkinsScripts/diffSizes-97.sh'
		}
	}
	stage(' TEST=diffSizes CONFIG=configH1I0.fti LEVEL=3 CKPTORPTNER=1 CORRORERASE=1 CORRUPTIONLEVEL=2 ') { 
		steps {
			sh 'source JenkinsScripts/diffSizes-98.sh'
		}
	}
	stage(' TEST=diffSizes CONFIG=configH1I0.fti LEVEL=3 CKPTORPTNER=0 CORRORERASE=0 CORRUPTIONLEVEL=3 ') { 
		steps {
			sh 'source JenkinsScripts/diffSizes-99.sh'
		}
	}
	stage(' TEST=diffSizes CONFIG=configH1I0.fti LEVEL=3 CKPTORPTNER=0 CORRORERASE=1 CORRUPTIONLEVEL=3 ') { 
		steps {
			sh 'source JenkinsScripts/diffSizes-100.sh'
		}
	}
	stage(' TEST=diffSizes CONFIG=configH1I0.fti LEVEL=3 CKPTORPTNER=1 CORRORERASE=0 CORRUPTIONLEVEL=3 ') { 
		steps {
			sh 'source JenkinsScripts/diffSizes-101.sh'
		}
	}
	stage(' TEST=diffSizes CONFIG=configH1I0.fti LEVEL=3 CKPTORPTNER=1 CORRORERASE=1 CORRUPTIONLEVEL=3 ') { 
		steps {
			sh 'source JenkinsScripts/diffSizes-102.sh'
		}
	}
	stage(' TEST=diffSizes CONFIG=configH0I1.fti LEVEL=4 CKPTORPTNER=0 CORRORERASE=0 CORRUPTIONLEVEL=0 ') { 
		steps {
			sh 'source JenkinsScripts/diffSizes-103.sh'
		}
	}
	stage(' TEST=diffSizes CONFIG=configH0I1.fti LEVEL=4 CKPTORPTNER=0 CORRORERASE=1 CORRUPTIONLEVEL=0 ') { 
		steps {
			sh 'source JenkinsScripts/diffSizes-104.sh'
		}
	}
	stage(' TEST=diffSizes CONFIG=configH1I1.fti LEVEL=4 CKPTORPTNER=0 CORRORERASE=0 CORRUPTIONLEVEL=0 ') { 
		steps {
			sh 'source JenkinsScripts/diffSizes-105.sh'
		}
	}
	stage(' TEST=diffSizes CONFIG=configH1I1.fti LEVEL=4 CKPTORPTNER=0 CORRORERASE=1 CORRUPTIONLEVEL=0 ') { 
		steps {
			sh 'source JenkinsScripts/diffSizes-106.sh'
		}
	}
	stage(' TEST=diffSizes CONFIG=configH1I0.fti LEVEL=4 CKPTORPTNER=0 CORRORERASE=0 CORRUPTIONLEVEL=0 ') { 
		steps {
			sh 'source JenkinsScripts/diffSizes-107.sh'
		}
	}
	stage(' TEST=diffSizes CONFIG=configH1I0.fti LEVEL=4 CKPTORPTNER=0 CORRORERASE=1 CORRUPTIONLEVEL=0 ') { 
		steps {
			sh 'source JenkinsScripts/diffSizes-108.sh'
		}
    }
  }
}
