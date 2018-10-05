#!/bin/groovy

pipeline {
  agent none
  stages {
    stage('build') {
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
        stash name: 'test', includes: 'test/*'
        stash name: 'patterns_posix', includes: 'test/patterns/posix_io/*'
        stash name: 'patterns_hdf5', includes: 'test/patterns/hdf5_io/*'
        stash name: 'configs', includes: 'test/configs/*'
        stash name: 'ckptHierarchy', includes: 'test/ckptHierarchy/*'
        stash name: 'cornerCases', includes: 'test/cornerCases/*'
      }
    }
    stage('Standard Tests L1 No Head') {
      agent {
        docker {
          image 'kellekai/archlinuxopenmpi1.10'
        }
      }
      steps {
        sh 'mkdir build'
        sh 'mkdir build/test'
        sh 'mkdir build/test/patterns'
        sh 'mkdir build/test/patterns/posix_io'
        sh 'mkdir build/test/patterns/hdf5_io'
        sh 'mkdir build/test/ckptHierarchy'
        sh 'mkdir build/test/cornerCases'
        dir('build/test') {
          unstash 'test'
          sh 'cd build/test; ls -arthl; cd ../..'
        }
        dir('build/test/patterns/posix_io') {
          unstash 'patterns_posix'
        }
        dir('build/test/patterns/hdf5_io') {
          unstash 'patterns_hdf5'
        }
        dir('build/test/configs') {
          unstash 'configs'
        }
        dir('build/test/ckptHierarchy') {
          unstash 'ckptHierarchy'
        }
        dir('build/test/cornerCases') {
          unstash 'cornerCases'
        }
        catchError {
          sh 'cd build; TEST=diffSizes CONFIG=configH0I1.fti LEVEL=1 CKPTORPTNER=0 CORRORERASE=0 CORRUPTIONLEVEL=0 ./test/tests.sh'
        }
      }
    }
  }
}
