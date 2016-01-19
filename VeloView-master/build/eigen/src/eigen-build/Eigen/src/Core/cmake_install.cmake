# Install script for directory: /home/marko/research/VeloView-master/build/eigen/src/eigen/Eigen/src/Core

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
   "/home/marko/research/VeloView-master/build/install/include/eigen3/Eigen/src/Core/VectorBlock.h;/home/marko/research/VeloView-master/build/install/include/eigen3/Eigen/src/Core/DenseBase.h;/home/marko/research/VeloView-master/build/install/include/eigen3/Eigen/src/Core/Functors.h;/home/marko/research/VeloView-master/build/install/include/eigen3/Eigen/src/Core/Dot.h;/home/marko/research/VeloView-master/build/install/include/eigen3/Eigen/src/Core/NoAlias.h;/home/marko/research/VeloView-master/build/install/include/eigen3/Eigen/src/Core/TriangularMatrix.h;/home/marko/research/VeloView-master/build/install/include/eigen3/Eigen/src/Core/Replicate.h;/home/marko/research/VeloView-master/build/install/include/eigen3/Eigen/src/Core/ReturnByValue.h;/home/marko/research/VeloView-master/build/install/include/eigen3/Eigen/src/Core/Map.h;/home/marko/research/VeloView-master/build/install/include/eigen3/Eigen/src/Core/StableNorm.h;/home/marko/research/VeloView-master/build/install/include/eigen3/Eigen/src/Core/ProductBase.h;/home/marko/research/VeloView-master/build/install/include/eigen3/Eigen/src/Core/DiagonalMatrix.h;/home/marko/research/VeloView-master/build/install/include/eigen3/Eigen/src/Core/GeneralProduct.h;/home/marko/research/VeloView-master/build/install/include/eigen3/Eigen/src/Core/Transpose.h;/home/marko/research/VeloView-master/build/install/include/eigen3/Eigen/src/Core/SelfCwiseBinaryOp.h;/home/marko/research/VeloView-master/build/install/include/eigen3/Eigen/src/Core/DenseStorage.h;/home/marko/research/VeloView-master/build/install/include/eigen3/Eigen/src/Core/Stride.h;/home/marko/research/VeloView-master/build/install/include/eigen3/Eigen/src/Core/CwiseUnaryOp.h;/home/marko/research/VeloView-master/build/install/include/eigen3/Eigen/src/Core/BandMatrix.h;/home/marko/research/VeloView-master/build/install/include/eigen3/Eigen/src/Core/Random.h;/home/marko/research/VeloView-master/build/install/include/eigen3/Eigen/src/Core/EigenBase.h;/home/marko/research/VeloView-master/build/install/include/eigen3/Eigen/src/Core/BooleanRedux.h;/home/marko/research/VeloView-master/build/install/include/eigen3/Eigen/src/Core/IO.h;/home/marko/research/VeloView-master/build/install/include/eigen3/Eigen/src/Core/ArrayBase.h;/home/marko/research/VeloView-master/build/install/include/eigen3/Eigen/src/Core/VectorwiseOp.h;/home/marko/research/VeloView-master/build/install/include/eigen3/Eigen/src/Core/PlainObjectBase.h;/home/marko/research/VeloView-master/build/install/include/eigen3/Eigen/src/Core/DenseCoeffsBase.h;/home/marko/research/VeloView-master/build/install/include/eigen3/Eigen/src/Core/SelfAdjointView.h;/home/marko/research/VeloView-master/build/install/include/eigen3/Eigen/src/Core/Visitor.h;/home/marko/research/VeloView-master/build/install/include/eigen3/Eigen/src/Core/MatrixBase.h;/home/marko/research/VeloView-master/build/install/include/eigen3/Eigen/src/Core/Select.h;/home/marko/research/VeloView-master/build/install/include/eigen3/Eigen/src/Core/Flagged.h;/home/marko/research/VeloView-master/build/install/include/eigen3/Eigen/src/Core/ArrayWrapper.h;/home/marko/research/VeloView-master/build/install/include/eigen3/Eigen/src/Core/Product.h;/home/marko/research/VeloView-master/build/install/include/eigen3/Eigen/src/Core/DiagonalProduct.h;/home/marko/research/VeloView-master/build/install/include/eigen3/Eigen/src/Core/CwiseNullaryOp.h;/home/marko/research/VeloView-master/build/install/include/eigen3/Eigen/src/Core/Reverse.h;/home/marko/research/VeloView-master/build/install/include/eigen3/Eigen/src/Core/Diagonal.h;/home/marko/research/VeloView-master/build/install/include/eigen3/Eigen/src/Core/Array.h;/home/marko/research/VeloView-master/build/install/include/eigen3/Eigen/src/Core/Matrix.h;/home/marko/research/VeloView-master/build/install/include/eigen3/Eigen/src/Core/GenericPacketMath.h;/home/marko/research/VeloView-master/build/install/include/eigen3/Eigen/src/Core/Fuzzy.h;/home/marko/research/VeloView-master/build/install/include/eigen3/Eigen/src/Core/MathFunctions.h;/home/marko/research/VeloView-master/build/install/include/eigen3/Eigen/src/Core/CwiseBinaryOp.h;/home/marko/research/VeloView-master/build/install/include/eigen3/Eigen/src/Core/SolveTriangular.h;/home/marko/research/VeloView-master/build/install/include/eigen3/Eigen/src/Core/GlobalFunctions.h;/home/marko/research/VeloView-master/build/install/include/eigen3/Eigen/src/Core/Transpositions.h;/home/marko/research/VeloView-master/build/install/include/eigen3/Eigen/src/Core/NestByValue.h;/home/marko/research/VeloView-master/build/install/include/eigen3/Eigen/src/Core/Block.h;/home/marko/research/VeloView-master/build/install/include/eigen3/Eigen/src/Core/Assign.h;/home/marko/research/VeloView-master/build/install/include/eigen3/Eigen/src/Core/CommaInitializer.h;/home/marko/research/VeloView-master/build/install/include/eigen3/Eigen/src/Core/PermutationMatrix.h;/home/marko/research/VeloView-master/build/install/include/eigen3/Eigen/src/Core/NumTraits.h;/home/marko/research/VeloView-master/build/install/include/eigen3/Eigen/src/Core/Redux.h;/home/marko/research/VeloView-master/build/install/include/eigen3/Eigen/src/Core/Swap.h;/home/marko/research/VeloView-master/build/install/include/eigen3/Eigen/src/Core/MapBase.h;/home/marko/research/VeloView-master/build/install/include/eigen3/Eigen/src/Core/Assign_MKL.h;/home/marko/research/VeloView-master/build/install/include/eigen3/Eigen/src/Core/CwiseUnaryView.h;/home/marko/research/VeloView-master/build/install/include/eigen3/Eigen/src/Core/ForceAlignedAccess.h")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/home/marko/research/VeloView-master/build/install/include/eigen3/Eigen/src/Core" TYPE FILE FILES
    "/home/marko/research/VeloView-master/build/eigen/src/eigen/Eigen/src/Core/VectorBlock.h"
    "/home/marko/research/VeloView-master/build/eigen/src/eigen/Eigen/src/Core/DenseBase.h"
    "/home/marko/research/VeloView-master/build/eigen/src/eigen/Eigen/src/Core/Functors.h"
    "/home/marko/research/VeloView-master/build/eigen/src/eigen/Eigen/src/Core/Dot.h"
    "/home/marko/research/VeloView-master/build/eigen/src/eigen/Eigen/src/Core/NoAlias.h"
    "/home/marko/research/VeloView-master/build/eigen/src/eigen/Eigen/src/Core/TriangularMatrix.h"
    "/home/marko/research/VeloView-master/build/eigen/src/eigen/Eigen/src/Core/Replicate.h"
    "/home/marko/research/VeloView-master/build/eigen/src/eigen/Eigen/src/Core/ReturnByValue.h"
    "/home/marko/research/VeloView-master/build/eigen/src/eigen/Eigen/src/Core/Map.h"
    "/home/marko/research/VeloView-master/build/eigen/src/eigen/Eigen/src/Core/StableNorm.h"
    "/home/marko/research/VeloView-master/build/eigen/src/eigen/Eigen/src/Core/ProductBase.h"
    "/home/marko/research/VeloView-master/build/eigen/src/eigen/Eigen/src/Core/DiagonalMatrix.h"
    "/home/marko/research/VeloView-master/build/eigen/src/eigen/Eigen/src/Core/GeneralProduct.h"
    "/home/marko/research/VeloView-master/build/eigen/src/eigen/Eigen/src/Core/Transpose.h"
    "/home/marko/research/VeloView-master/build/eigen/src/eigen/Eigen/src/Core/SelfCwiseBinaryOp.h"
    "/home/marko/research/VeloView-master/build/eigen/src/eigen/Eigen/src/Core/DenseStorage.h"
    "/home/marko/research/VeloView-master/build/eigen/src/eigen/Eigen/src/Core/Stride.h"
    "/home/marko/research/VeloView-master/build/eigen/src/eigen/Eigen/src/Core/CwiseUnaryOp.h"
    "/home/marko/research/VeloView-master/build/eigen/src/eigen/Eigen/src/Core/BandMatrix.h"
    "/home/marko/research/VeloView-master/build/eigen/src/eigen/Eigen/src/Core/Random.h"
    "/home/marko/research/VeloView-master/build/eigen/src/eigen/Eigen/src/Core/EigenBase.h"
    "/home/marko/research/VeloView-master/build/eigen/src/eigen/Eigen/src/Core/BooleanRedux.h"
    "/home/marko/research/VeloView-master/build/eigen/src/eigen/Eigen/src/Core/IO.h"
    "/home/marko/research/VeloView-master/build/eigen/src/eigen/Eigen/src/Core/ArrayBase.h"
    "/home/marko/research/VeloView-master/build/eigen/src/eigen/Eigen/src/Core/VectorwiseOp.h"
    "/home/marko/research/VeloView-master/build/eigen/src/eigen/Eigen/src/Core/PlainObjectBase.h"
    "/home/marko/research/VeloView-master/build/eigen/src/eigen/Eigen/src/Core/DenseCoeffsBase.h"
    "/home/marko/research/VeloView-master/build/eigen/src/eigen/Eigen/src/Core/SelfAdjointView.h"
    "/home/marko/research/VeloView-master/build/eigen/src/eigen/Eigen/src/Core/Visitor.h"
    "/home/marko/research/VeloView-master/build/eigen/src/eigen/Eigen/src/Core/MatrixBase.h"
    "/home/marko/research/VeloView-master/build/eigen/src/eigen/Eigen/src/Core/Select.h"
    "/home/marko/research/VeloView-master/build/eigen/src/eigen/Eigen/src/Core/Flagged.h"
    "/home/marko/research/VeloView-master/build/eigen/src/eigen/Eigen/src/Core/ArrayWrapper.h"
    "/home/marko/research/VeloView-master/build/eigen/src/eigen/Eigen/src/Core/Product.h"
    "/home/marko/research/VeloView-master/build/eigen/src/eigen/Eigen/src/Core/DiagonalProduct.h"
    "/home/marko/research/VeloView-master/build/eigen/src/eigen/Eigen/src/Core/CwiseNullaryOp.h"
    "/home/marko/research/VeloView-master/build/eigen/src/eigen/Eigen/src/Core/Reverse.h"
    "/home/marko/research/VeloView-master/build/eigen/src/eigen/Eigen/src/Core/Diagonal.h"
    "/home/marko/research/VeloView-master/build/eigen/src/eigen/Eigen/src/Core/Array.h"
    "/home/marko/research/VeloView-master/build/eigen/src/eigen/Eigen/src/Core/Matrix.h"
    "/home/marko/research/VeloView-master/build/eigen/src/eigen/Eigen/src/Core/GenericPacketMath.h"
    "/home/marko/research/VeloView-master/build/eigen/src/eigen/Eigen/src/Core/Fuzzy.h"
    "/home/marko/research/VeloView-master/build/eigen/src/eigen/Eigen/src/Core/MathFunctions.h"
    "/home/marko/research/VeloView-master/build/eigen/src/eigen/Eigen/src/Core/CwiseBinaryOp.h"
    "/home/marko/research/VeloView-master/build/eigen/src/eigen/Eigen/src/Core/SolveTriangular.h"
    "/home/marko/research/VeloView-master/build/eigen/src/eigen/Eigen/src/Core/GlobalFunctions.h"
    "/home/marko/research/VeloView-master/build/eigen/src/eigen/Eigen/src/Core/Transpositions.h"
    "/home/marko/research/VeloView-master/build/eigen/src/eigen/Eigen/src/Core/NestByValue.h"
    "/home/marko/research/VeloView-master/build/eigen/src/eigen/Eigen/src/Core/Block.h"
    "/home/marko/research/VeloView-master/build/eigen/src/eigen/Eigen/src/Core/Assign.h"
    "/home/marko/research/VeloView-master/build/eigen/src/eigen/Eigen/src/Core/CommaInitializer.h"
    "/home/marko/research/VeloView-master/build/eigen/src/eigen/Eigen/src/Core/PermutationMatrix.h"
    "/home/marko/research/VeloView-master/build/eigen/src/eigen/Eigen/src/Core/NumTraits.h"
    "/home/marko/research/VeloView-master/build/eigen/src/eigen/Eigen/src/Core/Redux.h"
    "/home/marko/research/VeloView-master/build/eigen/src/eigen/Eigen/src/Core/Swap.h"
    "/home/marko/research/VeloView-master/build/eigen/src/eigen/Eigen/src/Core/MapBase.h"
    "/home/marko/research/VeloView-master/build/eigen/src/eigen/Eigen/src/Core/Assign_MKL.h"
    "/home/marko/research/VeloView-master/build/eigen/src/eigen/Eigen/src/Core/CwiseUnaryView.h"
    "/home/marko/research/VeloView-master/build/eigen/src/eigen/Eigen/src/Core/ForceAlignedAccess.h"
    )
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("/home/marko/research/VeloView-master/build/eigen/src/eigen-build/Eigen/src/Core/products/cmake_install.cmake")
  include("/home/marko/research/VeloView-master/build/eigen/src/eigen-build/Eigen/src/Core/util/cmake_install.cmake")
  include("/home/marko/research/VeloView-master/build/eigen/src/eigen-build/Eigen/src/Core/arch/cmake_install.cmake")

endif()

