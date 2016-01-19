set(vtkftgl_LOADED 1)
set(vtkftgl_DEPENDS "vtkfreetype")
set(vtkftgl_LIBRARIES "vtkftgl")
set(vtkftgl_INCLUDE_DIRS "${VTK_INSTALL_PREFIX}/include/paraview-4.3")
set(vtkftgl_LIBRARY_DIRS "")
set(vtkftgl_RUNTIME_LIBRARY_DIRS "${VTK_INSTALL_PREFIX}/lib/paraview-4.3")
set(vtkftgl_WRAP_HIERARCHY_FILE "${CMAKE_CURRENT_LIST_DIR}/vtkftglHierarchy.txt")
set(vtkftgl_EXCLUDE_FROM_WRAPPING 1)

