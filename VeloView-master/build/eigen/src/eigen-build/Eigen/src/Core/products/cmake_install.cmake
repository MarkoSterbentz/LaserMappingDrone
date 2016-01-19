# Install script for directory: /home/marko/research/VeloView-master/build/eigen/src/eigen/Eigen/src/Core/products

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
   "/home/marko/research/VeloView-master/build/install/include/eigen3/Eigen/src/Core/products/TriangularSolverMatrix_MKL.h;/home/marko/research/VeloView-master/build/install/include/eigen3/Eigen/src/Core/products/TriangularSolverMatrix.h;/home/marko/research/VeloView-master/build/install/include/eigen3/Eigen/src/Core/products/SelfadjointRank2Update.h;/home/marko/research/VeloView-master/build/install/include/eigen3/Eigen/src/Core/products/SelfadjointMatrixVector_MKL.h;/home/marko/research/VeloView-master/build/install/include/eigen3/Eigen/src/Core/products/TriangularSolverVector.h;/home/marko/research/VeloView-master/build/install/include/eigen3/Eigen/src/Core/products/TriangularMatrixVector.h;/home/marko/research/VeloView-master/build/install/include/eigen3/Eigen/src/Core/products/GeneralMatrixMatrix_MKL.h;/home/marko/research/VeloView-master/build/install/include/eigen3/Eigen/src/Core/products/GeneralMatrixVector.h;/home/marko/research/VeloView-master/build/install/include/eigen3/Eigen/src/Core/products/CoeffBasedProduct.h;/home/marko/research/VeloView-master/build/install/include/eigen3/Eigen/src/Core/products/SelfadjointMatrixMatrix.h;/home/marko/research/VeloView-master/build/install/include/eigen3/Eigen/src/Core/products/TriangularMatrixMatrix_MKL.h;/home/marko/research/VeloView-master/build/install/include/eigen3/Eigen/src/Core/products/SelfadjointMatrixMatrix_MKL.h;/home/marko/research/VeloView-master/build/install/include/eigen3/Eigen/src/Core/products/GeneralMatrixMatrix.h;/home/marko/research/VeloView-master/build/install/include/eigen3/Eigen/src/Core/products/SelfadjointProduct.h;/home/marko/research/VeloView-master/build/install/include/eigen3/Eigen/src/Core/products/Parallelizer.h;/home/marko/research/VeloView-master/build/install/include/eigen3/Eigen/src/Core/products/GeneralMatrixMatrixTriangular.h;/home/marko/research/VeloView-master/build/install/include/eigen3/Eigen/src/Core/products/TriangularMatrixMatrix.h;/home/marko/research/VeloView-master/build/install/include/eigen3/Eigen/src/Core/products/GeneralMatrixVector_MKL.h;/home/marko/research/VeloView-master/build/install/include/eigen3/Eigen/src/Core/products/TriangularMatrixVector_MKL.h;/home/marko/research/VeloView-master/build/install/include/eigen3/Eigen/src/Core/products/GeneralMatrixMatrixTriangular_MKL.h;/home/marko/research/VeloView-master/build/install/include/eigen3/Eigen/src/Core/products/GeneralBlockPanelKernel.h;/home/marko/research/VeloView-master/build/install/include/eigen3/Eigen/src/Core/products/SelfadjointMatrixVector.h")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/home/marko/research/VeloView-master/build/install/include/eigen3/Eigen/src/Core/products" TYPE FILE FILES
    "/home/marko/research/VeloView-master/build/eigen/src/eigen/Eigen/src/Core/products/TriangularSolverMatrix_MKL.h"
    "/home/marko/research/VeloView-master/build/eigen/src/eigen/Eigen/src/Core/products/TriangularSolverMatrix.h"
    "/home/marko/research/VeloView-master/build/eigen/src/eigen/Eigen/src/Core/products/SelfadjointRank2Update.h"
    "/home/marko/research/VeloView-master/build/eigen/src/eigen/Eigen/src/Core/products/SelfadjointMatrixVector_MKL.h"
    "/home/marko/research/VeloView-master/build/eigen/src/eigen/Eigen/src/Core/products/TriangularSolverVector.h"
    "/home/marko/research/VeloView-master/build/eigen/src/eigen/Eigen/src/Core/products/TriangularMatrixVector.h"
    "/home/marko/research/VeloView-master/build/eigen/src/eigen/Eigen/src/Core/products/GeneralMatrixMatrix_MKL.h"
    "/home/marko/research/VeloView-master/build/eigen/src/eigen/Eigen/src/Core/products/GeneralMatrixVector.h"
    "/home/marko/research/VeloView-master/build/eigen/src/eigen/Eigen/src/Core/products/CoeffBasedProduct.h"
    "/home/marko/research/VeloView-master/build/eigen/src/eigen/Eigen/src/Core/products/SelfadjointMatrixMatrix.h"
    "/home/marko/research/VeloView-master/build/eigen/src/eigen/Eigen/src/Core/products/TriangularMatrixMatrix_MKL.h"
    "/home/marko/research/VeloView-master/build/eigen/src/eigen/Eigen/src/Core/products/SelfadjointMatrixMatrix_MKL.h"
    "/home/marko/research/VeloView-master/build/eigen/src/eigen/Eigen/src/Core/products/GeneralMatrixMatrix.h"
    "/home/marko/research/VeloView-master/build/eigen/src/eigen/Eigen/src/Core/products/SelfadjointProduct.h"
    "/home/marko/research/VeloView-master/build/eigen/src/eigen/Eigen/src/Core/products/Parallelizer.h"
    "/home/marko/research/VeloView-master/build/eigen/src/eigen/Eigen/src/Core/products/GeneralMatrixMatrixTriangular.h"
    "/home/marko/research/VeloView-master/build/eigen/src/eigen/Eigen/src/Core/products/TriangularMatrixMatrix.h"
    "/home/marko/research/VeloView-master/build/eigen/src/eigen/Eigen/src/Core/products/GeneralMatrixVector_MKL.h"
    "/home/marko/research/VeloView-master/build/eigen/src/eigen/Eigen/src/Core/products/TriangularMatrixVector_MKL.h"
    "/home/marko/research/VeloView-master/build/eigen/src/eigen/Eigen/src/Core/products/GeneralMatrixMatrixTriangular_MKL.h"
    "/home/marko/research/VeloView-master/build/eigen/src/eigen/Eigen/src/Core/products/GeneralBlockPanelKernel.h"
    "/home/marko/research/VeloView-master/build/eigen/src/eigen/Eigen/src/Core/products/SelfadjointMatrixVector.h"
    )
endif()

