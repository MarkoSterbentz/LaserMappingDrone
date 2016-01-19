# Install script for directory: /home/marko/research/VeloView-master/build/eigen/src/eigen/Eigen/src/SparseCore

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/home/marko/research/VeloView-master/build/install")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "Release")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Devel")
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/home/marko/research/VeloView-master/build/install/include/eigen3/Eigen/src/SparseCore/SparseFuzzy.h;/home/marko/research/VeloView-master/build/install/include/eigen3/Eigen/src/SparseCore/SparseSelfAdjointView.h;/home/marko/research/VeloView-master/build/install/include/eigen3/Eigen/src/SparseCore/SparseProduct.h;/home/marko/research/VeloView-master/build/install/include/eigen3/Eigen/src/SparseCore/SparseCwiseBinaryOp.h;/home/marko/research/VeloView-master/build/install/include/eigen3/Eigen/src/SparseCore/SparseTranspose.h;/home/marko/research/VeloView-master/build/install/include/eigen3/Eigen/src/SparseCore/SparseSparseProductWithPruning.h;/home/marko/research/VeloView-master/build/install/include/eigen3/Eigen/src/SparseCore/CoreIterators.h;/home/marko/research/VeloView-master/build/install/include/eigen3/Eigen/src/SparseCore/SparseVector.h;/home/marko/research/VeloView-master/build/install/include/eigen3/Eigen/src/SparseCore/SparseUtil.h;/home/marko/research/VeloView-master/build/install/include/eigen3/Eigen/src/SparseCore/SparseDenseProduct.h;/home/marko/research/VeloView-master/build/install/include/eigen3/Eigen/src/SparseCore/SparseMatrixBase.h;/home/marko/research/VeloView-master/build/install/include/eigen3/Eigen/src/SparseCore/SparseRedux.h;/home/marko/research/VeloView-master/build/install/include/eigen3/Eigen/src/SparseCore/SparseTriangularView.h;/home/marko/research/VeloView-master/build/install/include/eigen3/Eigen/src/SparseCore/SparseBlock.h;/home/marko/research/VeloView-master/build/install/include/eigen3/Eigen/src/SparseCore/SparseMatrix.h;/home/marko/research/VeloView-master/build/install/include/eigen3/Eigen/src/SparseCore/SparsePermutation.h;/home/marko/research/VeloView-master/build/install/include/eigen3/Eigen/src/SparseCore/SparseDot.h;/home/marko/research/VeloView-master/build/install/include/eigen3/Eigen/src/SparseCore/SparseDiagonalProduct.h;/home/marko/research/VeloView-master/build/install/include/eigen3/Eigen/src/SparseCore/MappedSparseMatrix.h;/home/marko/research/VeloView-master/build/install/include/eigen3/Eigen/src/SparseCore/SparseView.h;/home/marko/research/VeloView-master/build/install/include/eigen3/Eigen/src/SparseCore/TriangularSolver.h;/home/marko/research/VeloView-master/build/install/include/eigen3/Eigen/src/SparseCore/SparseCwiseUnaryOp.h;/home/marko/research/VeloView-master/build/install/include/eigen3/Eigen/src/SparseCore/ConservativeSparseSparseProduct.h;/home/marko/research/VeloView-master/build/install/include/eigen3/Eigen/src/SparseCore/CompressedStorage.h;/home/marko/research/VeloView-master/build/install/include/eigen3/Eigen/src/SparseCore/SparseAssign.h;/home/marko/research/VeloView-master/build/install/include/eigen3/Eigen/src/SparseCore/AmbiVector.h")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/home/marko/research/VeloView-master/build/install/include/eigen3/Eigen/src/SparseCore" TYPE FILE FILES
    "/home/marko/research/VeloView-master/build/eigen/src/eigen/Eigen/src/SparseCore/SparseFuzzy.h"
    "/home/marko/research/VeloView-master/build/eigen/src/eigen/Eigen/src/SparseCore/SparseSelfAdjointView.h"
    "/home/marko/research/VeloView-master/build/eigen/src/eigen/Eigen/src/SparseCore/SparseProduct.h"
    "/home/marko/research/VeloView-master/build/eigen/src/eigen/Eigen/src/SparseCore/SparseCwiseBinaryOp.h"
    "/home/marko/research/VeloView-master/build/eigen/src/eigen/Eigen/src/SparseCore/SparseTranspose.h"
    "/home/marko/research/VeloView-master/build/eigen/src/eigen/Eigen/src/SparseCore/SparseSparseProductWithPruning.h"
    "/home/marko/research/VeloView-master/build/eigen/src/eigen/Eigen/src/SparseCore/CoreIterators.h"
    "/home/marko/research/VeloView-master/build/eigen/src/eigen/Eigen/src/SparseCore/SparseVector.h"
    "/home/marko/research/VeloView-master/build/eigen/src/eigen/Eigen/src/SparseCore/SparseUtil.h"
    "/home/marko/research/VeloView-master/build/eigen/src/eigen/Eigen/src/SparseCore/SparseDenseProduct.h"
    "/home/marko/research/VeloView-master/build/eigen/src/eigen/Eigen/src/SparseCore/SparseMatrixBase.h"
    "/home/marko/research/VeloView-master/build/eigen/src/eigen/Eigen/src/SparseCore/SparseRedux.h"
    "/home/marko/research/VeloView-master/build/eigen/src/eigen/Eigen/src/SparseCore/SparseTriangularView.h"
    "/home/marko/research/VeloView-master/build/eigen/src/eigen/Eigen/src/SparseCore/SparseBlock.h"
    "/home/marko/research/VeloView-master/build/eigen/src/eigen/Eigen/src/SparseCore/SparseMatrix.h"
    "/home/marko/research/VeloView-master/build/eigen/src/eigen/Eigen/src/SparseCore/SparsePermutation.h"
    "/home/marko/research/VeloView-master/build/eigen/src/eigen/Eigen/src/SparseCore/SparseDot.h"
    "/home/marko/research/VeloView-master/build/eigen/src/eigen/Eigen/src/SparseCore/SparseDiagonalProduct.h"
    "/home/marko/research/VeloView-master/build/eigen/src/eigen/Eigen/src/SparseCore/MappedSparseMatrix.h"
    "/home/marko/research/VeloView-master/build/eigen/src/eigen/Eigen/src/SparseCore/SparseView.h"
    "/home/marko/research/VeloView-master/build/eigen/src/eigen/Eigen/src/SparseCore/TriangularSolver.h"
    "/home/marko/research/VeloView-master/build/eigen/src/eigen/Eigen/src/SparseCore/SparseCwiseUnaryOp.h"
    "/home/marko/research/VeloView-master/build/eigen/src/eigen/Eigen/src/SparseCore/ConservativeSparseSparseProduct.h"
    "/home/marko/research/VeloView-master/build/eigen/src/eigen/Eigen/src/SparseCore/CompressedStorage.h"
    "/home/marko/research/VeloView-master/build/eigen/src/eigen/Eigen/src/SparseCore/SparseAssign.h"
    "/home/marko/research/VeloView-master/build/eigen/src/eigen/Eigen/src/SparseCore/AmbiVector.h"
    )
endif()

