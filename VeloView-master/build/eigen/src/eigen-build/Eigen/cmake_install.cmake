# Install script for directory: /home/marko/research/VeloView-master/build/eigen/src/eigen/Eigen

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
   "/home/marko/research/VeloView-master/build/install/include/eigen3/Eigen/Sparse;/home/marko/research/VeloView-master/build/install/include/eigen3/Eigen/SparseCore;/home/marko/research/VeloView-master/build/install/include/eigen3/Eigen/Eigen2Support;/home/marko/research/VeloView-master/build/install/include/eigen3/Eigen/LeastSquares;/home/marko/research/VeloView-master/build/install/include/eigen3/Eigen/IterativeLinearSolvers;/home/marko/research/VeloView-master/build/install/include/eigen3/Eigen/SuperLUSupport;/home/marko/research/VeloView-master/build/install/include/eigen3/Eigen/Eigenvalues;/home/marko/research/VeloView-master/build/install/include/eigen3/Eigen/QtAlignedMalloc;/home/marko/research/VeloView-master/build/install/include/eigen3/Eigen/StdDeque;/home/marko/research/VeloView-master/build/install/include/eigen3/Eigen/Array;/home/marko/research/VeloView-master/build/install/include/eigen3/Eigen/Eigen;/home/marko/research/VeloView-master/build/install/include/eigen3/Eigen/Dense;/home/marko/research/VeloView-master/build/install/include/eigen3/Eigen/Cholesky;/home/marko/research/VeloView-master/build/install/include/eigen3/Eigen/UmfPackSupport;/home/marko/research/VeloView-master/build/install/include/eigen3/Eigen/Geometry;/home/marko/research/VeloView-master/build/install/include/eigen3/Eigen/SVD;/home/marko/research/VeloView-master/build/install/include/eigen3/Eigen/StdList;/home/marko/research/VeloView-master/build/install/include/eigen3/Eigen/QR;/home/marko/research/VeloView-master/build/install/include/eigen3/Eigen/LU;/home/marko/research/VeloView-master/build/install/include/eigen3/Eigen/Householder;/home/marko/research/VeloView-master/build/install/include/eigen3/Eigen/SparseCholesky;/home/marko/research/VeloView-master/build/install/include/eigen3/Eigen/StdVector;/home/marko/research/VeloView-master/build/install/include/eigen3/Eigen/CholmodSupport;/home/marko/research/VeloView-master/build/install/include/eigen3/Eigen/PardisoSupport;/home/marko/research/VeloView-master/build/install/include/eigen3/Eigen/PaStiXSupport;/home/marko/research/VeloView-master/build/install/include/eigen3/Eigen/Jacobi;/home/marko/research/VeloView-master/build/install/include/eigen3/Eigen/Core;/home/marko/research/VeloView-master/build/install/include/eigen3/Eigen/OrderingMethods")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/home/marko/research/VeloView-master/build/install/include/eigen3/Eigen" TYPE FILE FILES
    "/home/marko/research/VeloView-master/build/eigen/src/eigen/Eigen/Sparse"
    "/home/marko/research/VeloView-master/build/eigen/src/eigen/Eigen/SparseCore"
    "/home/marko/research/VeloView-master/build/eigen/src/eigen/Eigen/Eigen2Support"
    "/home/marko/research/VeloView-master/build/eigen/src/eigen/Eigen/LeastSquares"
    "/home/marko/research/VeloView-master/build/eigen/src/eigen/Eigen/IterativeLinearSolvers"
    "/home/marko/research/VeloView-master/build/eigen/src/eigen/Eigen/SuperLUSupport"
    "/home/marko/research/VeloView-master/build/eigen/src/eigen/Eigen/Eigenvalues"
    "/home/marko/research/VeloView-master/build/eigen/src/eigen/Eigen/QtAlignedMalloc"
    "/home/marko/research/VeloView-master/build/eigen/src/eigen/Eigen/StdDeque"
    "/home/marko/research/VeloView-master/build/eigen/src/eigen/Eigen/Array"
    "/home/marko/research/VeloView-master/build/eigen/src/eigen/Eigen/Eigen"
    "/home/marko/research/VeloView-master/build/eigen/src/eigen/Eigen/Dense"
    "/home/marko/research/VeloView-master/build/eigen/src/eigen/Eigen/Cholesky"
    "/home/marko/research/VeloView-master/build/eigen/src/eigen/Eigen/UmfPackSupport"
    "/home/marko/research/VeloView-master/build/eigen/src/eigen/Eigen/Geometry"
    "/home/marko/research/VeloView-master/build/eigen/src/eigen/Eigen/SVD"
    "/home/marko/research/VeloView-master/build/eigen/src/eigen/Eigen/StdList"
    "/home/marko/research/VeloView-master/build/eigen/src/eigen/Eigen/QR"
    "/home/marko/research/VeloView-master/build/eigen/src/eigen/Eigen/LU"
    "/home/marko/research/VeloView-master/build/eigen/src/eigen/Eigen/Householder"
    "/home/marko/research/VeloView-master/build/eigen/src/eigen/Eigen/SparseCholesky"
    "/home/marko/research/VeloView-master/build/eigen/src/eigen/Eigen/StdVector"
    "/home/marko/research/VeloView-master/build/eigen/src/eigen/Eigen/CholmodSupport"
    "/home/marko/research/VeloView-master/build/eigen/src/eigen/Eigen/PardisoSupport"
    "/home/marko/research/VeloView-master/build/eigen/src/eigen/Eigen/PaStiXSupport"
    "/home/marko/research/VeloView-master/build/eigen/src/eigen/Eigen/Jacobi"
    "/home/marko/research/VeloView-master/build/eigen/src/eigen/Eigen/Core"
    "/home/marko/research/VeloView-master/build/eigen/src/eigen/Eigen/OrderingMethods"
    )
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("/home/marko/research/VeloView-master/build/eigen/src/eigen-build/Eigen/src/cmake_install.cmake")

endif()

