set(vtkInfovisCore_LOADED 1)
set(vtkInfovisCore_DEPENDS "vtkCommonDataModel;vtkCommonSystem;vtkFiltersExtraction;vtkFiltersGeneral")
set(vtkInfovisCore_LIBRARIES "vtkInfovisCore")
set(vtkInfovisCore_INCLUDE_DIRS "${VTK_INSTALL_PREFIX}/include/paraview-4.3")
set(vtkInfovisCore_LIBRARY_DIRS "")
set(vtkInfovisCore_RUNTIME_LIBRARY_DIRS "${VTK_INSTALL_PREFIX}/lib/paraview-4.3")
set(vtkInfovisCore_WRAP_HIERARCHY_FILE "${CMAKE_CURRENT_LIST_DIR}/vtkInfovisCoreHierarchy.txt")

