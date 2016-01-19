set(vtkPVCommon_LOADED 1)
set(vtkPVCommon_DEPENDS "vtkClientServer;vtkCommonCore;vtkIOXMLParser;vtksys")
set(vtkPVCommon_LIBRARIES "vtkPVCommon")
set(vtkPVCommon_INCLUDE_DIRS "${VTK_INSTALL_PREFIX}/include/paraview-4.3")
set(vtkPVCommon_LIBRARY_DIRS "")
set(vtkPVCommon_RUNTIME_LIBRARY_DIRS "${VTK_INSTALL_PREFIX}/lib/paraview-4.3")
set(vtkPVCommon_WRAP_HIERARCHY_FILE "${CMAKE_CURRENT_LIST_DIR}/vtkPVCommonHierarchy.txt")

