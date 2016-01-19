# Install script for directory: /home/marko/research/VeloView-master/build/eigen/src/eigen/Eigen/src/Geometry

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
   "/home/marko/research/VeloView-master/build/install/include/eigen3/Eigen/src/Geometry/OrthoMethods.h;/home/marko/research/VeloView-master/build/install/include/eigen3/Eigen/src/Geometry/Quaternion.h;/home/marko/research/VeloView-master/build/install/include/eigen3/Eigen/src/Geometry/Transform.h;/home/marko/research/VeloView-master/build/install/include/eigen3/Eigen/src/Geometry/AlignedBox.h;/home/marko/research/VeloView-master/build/install/include/eigen3/Eigen/src/Geometry/Hyperplane.h;/home/marko/research/VeloView-master/build/install/include/eigen3/Eigen/src/Geometry/Translation.h;/home/marko/research/VeloView-master/build/install/include/eigen3/Eigen/src/Geometry/RotationBase.h;/home/marko/research/VeloView-master/build/install/include/eigen3/Eigen/src/Geometry/Umeyama.h;/home/marko/research/VeloView-master/build/install/include/eigen3/Eigen/src/Geometry/Scaling.h;/home/marko/research/VeloView-master/build/install/include/eigen3/Eigen/src/Geometry/AngleAxis.h;/home/marko/research/VeloView-master/build/install/include/eigen3/Eigen/src/Geometry/ParametrizedLine.h;/home/marko/research/VeloView-master/build/install/include/eigen3/Eigen/src/Geometry/Rotation2D.h;/home/marko/research/VeloView-master/build/install/include/eigen3/Eigen/src/Geometry/Homogeneous.h;/home/marko/research/VeloView-master/build/install/include/eigen3/Eigen/src/Geometry/EulerAngles.h")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/home/marko/research/VeloView-master/build/install/include/eigen3/Eigen/src/Geometry" TYPE FILE FILES
    "/home/marko/research/VeloView-master/build/eigen/src/eigen/Eigen/src/Geometry/OrthoMethods.h"
    "/home/marko/research/VeloView-master/build/eigen/src/eigen/Eigen/src/Geometry/Quaternion.h"
    "/home/marko/research/VeloView-master/build/eigen/src/eigen/Eigen/src/Geometry/Transform.h"
    "/home/marko/research/VeloView-master/build/eigen/src/eigen/Eigen/src/Geometry/AlignedBox.h"
    "/home/marko/research/VeloView-master/build/eigen/src/eigen/Eigen/src/Geometry/Hyperplane.h"
    "/home/marko/research/VeloView-master/build/eigen/src/eigen/Eigen/src/Geometry/Translation.h"
    "/home/marko/research/VeloView-master/build/eigen/src/eigen/Eigen/src/Geometry/RotationBase.h"
    "/home/marko/research/VeloView-master/build/eigen/src/eigen/Eigen/src/Geometry/Umeyama.h"
    "/home/marko/research/VeloView-master/build/eigen/src/eigen/Eigen/src/Geometry/Scaling.h"
    "/home/marko/research/VeloView-master/build/eigen/src/eigen/Eigen/src/Geometry/AngleAxis.h"
    "/home/marko/research/VeloView-master/build/eigen/src/eigen/Eigen/src/Geometry/ParametrizedLine.h"
    "/home/marko/research/VeloView-master/build/eigen/src/eigen/Eigen/src/Geometry/Rotation2D.h"
    "/home/marko/research/VeloView-master/build/eigen/src/eigen/Eigen/src/Geometry/Homogeneous.h"
    "/home/marko/research/VeloView-master/build/eigen/src/eigen/Eigen/src/Geometry/EulerAngles.h"
    )
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("/home/marko/research/VeloView-master/build/eigen/src/eigen-build/Eigen/src/Geometry/arch/cmake_install.cmake")

endif()

