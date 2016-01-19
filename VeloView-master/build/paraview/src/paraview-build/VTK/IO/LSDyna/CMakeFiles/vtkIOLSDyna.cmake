set(vtkIOLSDyna_LOADED 1)
set(vtkIOLSDyna_DEPENDS "vtkCommonExecutionModel;vtkIOXML;vtksys")
set(vtkIOLSDyna_LIBRARIES "vtkIOLSDyna")
set(vtkIOLSDyna_INCLUDE_DIRS "${VTK_INSTALL_PREFIX}/include/paraview-4.3")
set(vtkIOLSDyna_LIBRARY_DIRS "")
set(vtkIOLSDyna_RUNTIME_LIBRARY_DIRS "${VTK_INSTALL_PREFIX}/lib/paraview-4.3")
set(vtkIOLSDyna_WRAP_HIERARCHY_FILE "${CMAKE_CURRENT_LIST_DIR}/vtkIOLSDynaHierarchy.txt")

