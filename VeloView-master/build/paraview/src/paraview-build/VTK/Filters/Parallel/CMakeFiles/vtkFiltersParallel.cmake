set(vtkFiltersParallel_LOADED 1)
set(vtkFiltersParallel_DEPENDS "vtkFiltersExtraction;vtkFiltersGeometry;vtkFiltersModeling;vtkParallelCore;vtkRenderingCore")
set(vtkFiltersParallel_LIBRARIES "vtkFiltersParallel")
set(vtkFiltersParallel_INCLUDE_DIRS "${VTK_INSTALL_PREFIX}/include/paraview-4.3")
set(vtkFiltersParallel_LIBRARY_DIRS "")
set(vtkFiltersParallel_RUNTIME_LIBRARY_DIRS "${VTK_INSTALL_PREFIX}/lib/paraview-4.3")
set(vtkFiltersParallel_WRAP_HIERARCHY_FILE "${CMAKE_CURRENT_LIST_DIR}/vtkFiltersParallelHierarchy.txt")

