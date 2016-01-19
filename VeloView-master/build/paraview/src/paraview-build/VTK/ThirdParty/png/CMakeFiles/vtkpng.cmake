set(vtkpng_LOADED 1)
set(vtkpng_DEPENDS "vtkzlib")
set(vtkpng_LIBRARIES "vtkpng")
set(vtkpng_INCLUDE_DIRS "${VTK_INSTALL_PREFIX}/include/paraview-4.3")
set(vtkpng_LIBRARY_DIRS "")
set(vtkpng_RUNTIME_LIBRARY_DIRS "${VTK_INSTALL_PREFIX}/lib/paraview-4.3")
set(vtkpng_WRAP_HIERARCHY_FILE "${CMAKE_CURRENT_LIST_DIR}/vtkpngHierarchy.txt")
set(vtkpng_EXCLUDE_FROM_WRAPPING 1)

