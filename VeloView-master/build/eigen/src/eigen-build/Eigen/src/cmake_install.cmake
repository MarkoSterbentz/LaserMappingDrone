# Install script for directory: /home/marko/research/VeloView-master/build/eigen/src/eigen/Eigen/src

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

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("/home/marko/research/VeloView-master/build/eigen/src/eigen-build/Eigen/src/SparseCore/cmake_install.cmake")
  include("/home/marko/research/VeloView-master/build/eigen/src/eigen-build/Eigen/src/Eigen2Support/cmake_install.cmake")
  include("/home/marko/research/VeloView-master/build/eigen/src/eigen-build/Eigen/src/IterativeLinearSolvers/cmake_install.cmake")
  include("/home/marko/research/VeloView-master/build/eigen/src/eigen-build/Eigen/src/SuperLUSupport/cmake_install.cmake")
  include("/home/marko/research/VeloView-master/build/eigen/src/eigen-build/Eigen/src/Eigenvalues/cmake_install.cmake")
  include("/home/marko/research/VeloView-master/build/eigen/src/eigen-build/Eigen/src/misc/cmake_install.cmake")
  include("/home/marko/research/VeloView-master/build/eigen/src/eigen-build/Eigen/src/Cholesky/cmake_install.cmake")
  include("/home/marko/research/VeloView-master/build/eigen/src/eigen-build/Eigen/src/UmfPackSupport/cmake_install.cmake")
  include("/home/marko/research/VeloView-master/build/eigen/src/eigen-build/Eigen/src/StlSupport/cmake_install.cmake")
  include("/home/marko/research/VeloView-master/build/eigen/src/eigen-build/Eigen/src/Geometry/cmake_install.cmake")
  include("/home/marko/research/VeloView-master/build/eigen/src/eigen-build/Eigen/src/SVD/cmake_install.cmake")
  include("/home/marko/research/VeloView-master/build/eigen/src/eigen-build/Eigen/src/QR/cmake_install.cmake")
  include("/home/marko/research/VeloView-master/build/eigen/src/eigen-build/Eigen/src/LU/cmake_install.cmake")
  include("/home/marko/research/VeloView-master/build/eigen/src/eigen-build/Eigen/src/Householder/cmake_install.cmake")
  include("/home/marko/research/VeloView-master/build/eigen/src/eigen-build/Eigen/src/SparseCholesky/cmake_install.cmake")
  include("/home/marko/research/VeloView-master/build/eigen/src/eigen-build/Eigen/src/CholmodSupport/cmake_install.cmake")
  include("/home/marko/research/VeloView-master/build/eigen/src/eigen-build/Eigen/src/PardisoSupport/cmake_install.cmake")
  include("/home/marko/research/VeloView-master/build/eigen/src/eigen-build/Eigen/src/PaStiXSupport/cmake_install.cmake")
  include("/home/marko/research/VeloView-master/build/eigen/src/eigen-build/Eigen/src/Jacobi/cmake_install.cmake")
  include("/home/marko/research/VeloView-master/build/eigen/src/eigen-build/Eigen/src/Core/cmake_install.cmake")
  include("/home/marko/research/VeloView-master/build/eigen/src/eigen-build/Eigen/src/OrderingMethods/cmake_install.cmake")
  include("/home/marko/research/VeloView-master/build/eigen/src/eigen-build/Eigen/src/plugins/cmake_install.cmake")

endif()

