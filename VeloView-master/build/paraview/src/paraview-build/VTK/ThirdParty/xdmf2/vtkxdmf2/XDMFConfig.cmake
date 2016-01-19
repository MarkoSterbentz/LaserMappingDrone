#-----------------------------------------------------------------------------
#
# XDMFConfig.cmake - XDMF CMake configuration file for external projects.
#
# This file is configured by XDMF and used by the UseXDMF.cmake module
# to load XDMF's settings for an external project.


# The XDMF include file directories.
SET(XDMF_INCLUDE_DIRS "")

# The XDMF library directories.
SET(XDMF_LIBRARY_DIRS "/home/marko/research/VeloView-master/build/paraview/src/paraview-build/lib/.")


# The names of utility libraries used by XDMF.

SET(XDMF_LIBXML2_LIBRARIES "")
SET(XDMF_LIBXML2_LIBRARY_PATH "")
SET(XDMF_LIBXML2_LIBRARY_SHORT "")
SET(XDMF_LIBXML2_INCLUDE_DIRS "/home/marko/research/VeloView-master/build/paraview/src/paraview-build/VTK/ThirdParty/libxml2/vtklibxml2;/home/marko/research/VeloView-master/build/paraview/src/paraview-build/VTK/ThirdParty/libxml2;/home/marko/research/VeloView-master/build/paraview/src/paraview/VTK/ThirdParty/libxml2")

#SET(XDMF_EXPAT_LIBRARIES "")
#SET(XDMF_EXPAT_INCLUDE_DIRS "")

SET(XDMF_HDF5_LIBRARIES "vtkhdf5_hl;vtkhdf5")
SET(XDMF_HDF5_LIBRARY_PATH "")
SET(XDMF_HDF5_LIBRARY_SHORT "")
SET(XDMF_HDF5_INCLUDE_DIRS "/home/marko/research/VeloView-master/build/paraview/src/paraview-build/VTK/ThirdParty/hdf5/vtkhdf5;/home/marko/research/VeloView-master/build/paraview/src/paraview/VTK/ThirdParty/hdf5/vtkhdf5/hl/src;/home/marko/research/VeloView-master/build/paraview/src/paraview/VTK/ThirdParty/hdf5/vtkhdf5/src;/home/marko/research/VeloView-master/build/paraview/src/paraview-build/VTK/ThirdParty/hdf5;/home/marko/research/VeloView-master/build/paraview/src/paraview/VTK/ThirdParty/hdf5")

SET(XDMF_BUILD_MPI "OFF")
IF(XDMF_BUILD_MPI)
  SET(XDMF_MPI_LIBRARIES "")
  SET(XDMF_MPI_INCLUDE_PATH "")
ENDIF()

SET(XDMF_HAS_NDGM "OFF")
