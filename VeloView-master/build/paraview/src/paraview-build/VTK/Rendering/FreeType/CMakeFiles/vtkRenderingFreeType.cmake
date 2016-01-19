set(vtkRenderingFreeType_LOADED 1)
set(vtkRenderingFreeType_DEPENDS "vtkRenderingCore;vtkRenderingCore;vtkfreetype;vtkftgl")
set(vtkRenderingFreeType_LIBRARIES "vtkRenderingFreeType")
set(vtkRenderingFreeType_INCLUDE_DIRS "${VTK_INSTALL_PREFIX}/include/paraview-4.3")
set(vtkRenderingFreeType_LIBRARY_DIRS "")
set(vtkRenderingFreeType_RUNTIME_LIBRARY_DIRS "${VTK_INSTALL_PREFIX}/lib/paraview-4.3")
set(vtkRenderingFreeType_WRAP_HIERARCHY_FILE "${CMAKE_CURRENT_LIST_DIR}/vtkRenderingFreeTypeHierarchy.txt")
set(vtkRenderingFreeType_IMPLEMENTS "vtkRenderingCore")

