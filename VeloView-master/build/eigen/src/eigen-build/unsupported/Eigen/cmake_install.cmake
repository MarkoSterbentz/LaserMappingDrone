# Install script for directory: /home/marko/research/VeloView-master/build/eigen/src/eigen/unsupported/Eigen

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
   "/home/marko/research/VeloView-master/build/install/include/eigen3/unsupported/Eigen/AdolcForward;/home/marko/research/VeloView-master/build/install/include/eigen3/unsupported/Eigen/BVH;/home/marko/research/VeloView-master/build/install/include/eigen3/unsupported/Eigen/IterativeSolvers;/home/marko/research/VeloView-master/build/install/include/eigen3/unsupported/Eigen/MatrixFunctions;/home/marko/research/VeloView-master/build/install/include/eigen3/unsupported/Eigen/MoreVectorization;/home/marko/research/VeloView-master/build/install/include/eigen3/unsupported/Eigen/AutoDiff;/home/marko/research/VeloView-master/build/install/include/eigen3/unsupported/Eigen/AlignedVector3;/home/marko/research/VeloView-master/build/install/include/eigen3/unsupported/Eigen/Polynomials;/home/marko/research/VeloView-master/build/install/include/eigen3/unsupported/Eigen/FFT;/home/marko/research/VeloView-master/build/install/include/eigen3/unsupported/Eigen/NonLinearOptimization;/home/marko/research/VeloView-master/build/install/include/eigen3/unsupported/Eigen/SparseExtra;/home/marko/research/VeloView-master/build/install/include/eigen3/unsupported/Eigen/IterativeSolvers;/home/marko/research/VeloView-master/build/install/include/eigen3/unsupported/Eigen/NumericalDiff;/home/marko/research/VeloView-master/build/install/include/eigen3/unsupported/Eigen/Skyline;/home/marko/research/VeloView-master/build/install/include/eigen3/unsupported/Eigen/MPRealSupport;/home/marko/research/VeloView-master/build/install/include/eigen3/unsupported/Eigen/OpenGLSupport;/home/marko/research/VeloView-master/build/install/include/eigen3/unsupported/Eigen/KroneckerProduct;/home/marko/research/VeloView-master/build/install/include/eigen3/unsupported/Eigen/Splines")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/home/marko/research/VeloView-master/build/install/include/eigen3/unsupported/Eigen" TYPE FILE FILES
    "/home/marko/research/VeloView-master/build/eigen/src/eigen/unsupported/Eigen/AdolcForward"
    "/home/marko/research/VeloView-master/build/eigen/src/eigen/unsupported/Eigen/BVH"
    "/home/marko/research/VeloView-master/build/eigen/src/eigen/unsupported/Eigen/IterativeSolvers"
    "/home/marko/research/VeloView-master/build/eigen/src/eigen/unsupported/Eigen/MatrixFunctions"
    "/home/marko/research/VeloView-master/build/eigen/src/eigen/unsupported/Eigen/MoreVectorization"
    "/home/marko/research/VeloView-master/build/eigen/src/eigen/unsupported/Eigen/AutoDiff"
    "/home/marko/research/VeloView-master/build/eigen/src/eigen/unsupported/Eigen/AlignedVector3"
    "/home/marko/research/VeloView-master/build/eigen/src/eigen/unsupported/Eigen/Polynomials"
    "/home/marko/research/VeloView-master/build/eigen/src/eigen/unsupported/Eigen/FFT"
    "/home/marko/research/VeloView-master/build/eigen/src/eigen/unsupported/Eigen/NonLinearOptimization"
    "/home/marko/research/VeloView-master/build/eigen/src/eigen/unsupported/Eigen/SparseExtra"
    "/home/marko/research/VeloView-master/build/eigen/src/eigen/unsupported/Eigen/IterativeSolvers"
    "/home/marko/research/VeloView-master/build/eigen/src/eigen/unsupported/Eigen/NumericalDiff"
    "/home/marko/research/VeloView-master/build/eigen/src/eigen/unsupported/Eigen/Skyline"
    "/home/marko/research/VeloView-master/build/eigen/src/eigen/unsupported/Eigen/MPRealSupport"
    "/home/marko/research/VeloView-master/build/eigen/src/eigen/unsupported/Eigen/OpenGLSupport"
    "/home/marko/research/VeloView-master/build/eigen/src/eigen/unsupported/Eigen/KroneckerProduct"
    "/home/marko/research/VeloView-master/build/eigen/src/eigen/unsupported/Eigen/Splines"
    )
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("/home/marko/research/VeloView-master/build/eigen/src/eigen-build/unsupported/Eigen/src/cmake_install.cmake")

endif()

