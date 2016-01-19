#-----------------------------------------------------------------------------
#
# ParaViewConfig.cmake - ParaView CMake configuration file for external projects.
#
# This file is configured by ParaView and used by the UseParaView.cmake module
# to load ParaView's settings for an external project.
set (__pv_install_tree FALSE)
if (__pv_install_tree)
  get_filename_component(location "${CMAKE_CURRENT_LIST_FILE}" PATH)
  set (VTK_CONFIG_FILE "${location}/VTKConfig.cmake")
  set (ParaView_CMAKE_DIR "${location}")
  set (PARAVIEW_CONFIG_TARGETS_FILE "${location}/ParaViewTargets.cmake")
else()
  # The ParaView is in the build-location.
  set (VTK_CONFIG_FILE "/home/marko/research/VeloView-master/build/paraview/src/paraview-build/VTK/VTKConfig.cmake")
  set (ParaView_CMAKE_DIR "/home/marko/research/VeloView-master/build/paraview/src/paraview/CMake")
  set (PARAVIEW_CONFIG_TARGETS_FILE "/home/marko/research/VeloView-master/build/paraview/src/paraview-build/ParaViewTargets.cmake")
endif()

#------------------------------------------------------------------------------
# Version information for ParaView
SET(PARAVIEW_VERSION_MAJOR "4")
SET(PARAVIEW_VERSION_MINOR "3")
SET(PARAVIEW_VERSION_PATCH "1")
SET(PARAVIEW_VERSION_FULL  "4.3.1-63-gf60010c")

# The location of the UseParaView.cmake file
# FIXME: I don't like this mixing of case, we need to fix that to be consistent.
set (ParaView_USE_FILE "${ParaView_CMAKE_DIR}/UseParaView.cmake")

set (PARAVIEW_USE_FILE ${ParaView_USE_FILE})
set (PARAVIEW_CMAKE_DIR ${ParaView_CMAKE_DIR})

# Import ParaView targets.
if(NOT TARGET vtkPVCommon)
  include("${PARAVIEW_CONFIG_TARGETS_FILE}")
endif()

# load VTK config. This will bring in information about all modules (including
# ParaView's modules).
set (paraview_build_qt_gui "ON")
if (paraview_build_qt_gui)
  set (VTK_FIND_COMPONENTS pqApplicationComponents)
else()
  set (VTK_FIND_COMPONENTS vtkPVServerManagerApplication)
endif()

set (VTK_FIND_COMPONENTS ${VTK_FIND_COMPONENTS} ${ParaView_FIND_COMPONENTS})
include("${VTK_CONFIG_FILE}")

if (__pv_install_tree)
  set (PARAVIEW_WWW_DIR "${VTK_INSTALL_PREFIX}/lib/paraview-4.3/www")
else()
  list(APPEND VTK_INCLUDE_DIRS "/home/marko/research/VeloView-master/build/paraview/src/paraview-build")
  set (PARAVIEW_WWW_DIR "/home/marko/research/VeloView-master/build/paraview/src/paraview-build/www")
endif()

# unless using external vtk (when we start supporting it, that is)
# PARAVIEW_INCLUDE_DIRS is same as VTK_INCLUDE_DIRS, but to make it easier for
# ParaView users.
set (PARAVIEW_INCLUDE_DIRS ${VTK_INCLUDE_DIRS})

#------------------------------------------------------------------------------
# ParaView global configuration options.

set (PARAVIEW_BUILD_SHARED_LIBS "ON")
set (PARAVIEW_BUILD_QT_GUI "ON")
set (PARAVIEW_USE_MPI "OFF")
set (PARAVIEW_ENABLE_PYTHON "ON")
set (PARAVIEW_ENABLE_QT_SUPPORT "ON")
set (PARAVIEW_QT_QMAKE_EXECUTABLE "/usr/bin/qmake")
set (PARAVIEW_USE_VISITBRIDGE "OFF")
set (PARAVIEW_ENABLE_COPROCESSING "")
set (PARAVIEW_ENABLE_WEB "ON")

# cleanup
unset(__pv_install_tree)
