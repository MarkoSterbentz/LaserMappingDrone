set(vtkRenderingCore_LOADED 1)
set(vtkRenderingCore_DEPENDS "vtkCommonColor;vtkCommonExecutionModel;vtkCommonTransforms;vtkFiltersExtraction;vtkFiltersGeometry;vtkFiltersSources;vtksys")
set(vtkRenderingCore_LIBRARIES "vtkRenderingCore")
set(vtkRenderingCore_INCLUDE_DIRS "${VTK_INSTALL_PREFIX}/include/paraview-4.3")
set(vtkRenderingCore_LIBRARY_DIRS "")
set(vtkRenderingCore_RUNTIME_LIBRARY_DIRS "${VTK_INSTALL_PREFIX}/lib/paraview-4.3")
set(vtkRenderingCore_WRAP_HIERARCHY_FILE "${CMAKE_CURRENT_LIST_DIR}/vtkRenderingCoreHierarchy.txt")

