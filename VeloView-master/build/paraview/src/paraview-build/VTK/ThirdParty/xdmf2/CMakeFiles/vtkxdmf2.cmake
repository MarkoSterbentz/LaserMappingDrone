set(vtkxdmf2_LOADED 1)
set(vtkxdmf2_DEPENDS "vtkhdf5;vtklibxml2")
set(vtkxdmf2_LIBRARIES "vtkxdmf2")
set(vtkxdmf2_INCLUDE_DIRS "${VTK_INSTALL_PREFIX}/include/paraview-4.3")
set(vtkxdmf2_LIBRARY_DIRS "")
set(vtkxdmf2_RUNTIME_LIBRARY_DIRS "${VTK_INSTALL_PREFIX}/lib/paraview-4.3")
set(vtkxdmf2_WRAP_HIERARCHY_FILE "${CMAKE_CURRENT_LIST_DIR}/vtkxdmf2Hierarchy.txt")
set(vtkxdmf2_EXCLUDE_FROM_WRAPPING 1)

