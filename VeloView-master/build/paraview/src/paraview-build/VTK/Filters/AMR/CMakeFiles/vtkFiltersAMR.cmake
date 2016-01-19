set(vtkFiltersAMR_LOADED 1)
set(vtkFiltersAMR_DEPENDS "vtkFiltersGeneral;vtkParallelCore")
set(vtkFiltersAMR_LIBRARIES "vtkFiltersAMR")
set(vtkFiltersAMR_INCLUDE_DIRS "${VTK_INSTALL_PREFIX}/include/paraview-4.3")
set(vtkFiltersAMR_LIBRARY_DIRS "")
set(vtkFiltersAMR_RUNTIME_LIBRARY_DIRS "${VTK_INSTALL_PREFIX}/lib/paraview-4.3")
set(vtkFiltersAMR_WRAP_HIERARCHY_FILE "${CMAKE_CURRENT_LIST_DIR}/vtkFiltersAMRHierarchy.txt")

