set(smTestDriver_LOADED 1)
set(smTestDriver_DEPENDS "vtkCommonCore;vtksys")
set(smTestDriver_LIBRARIES "vtkCommonCore;vtksys")
set(smTestDriver_INCLUDE_DIRS "${VTK_INSTALL_PREFIX}/include/paraview-4.3")
set(smTestDriver_LIBRARY_DIRS "")
set(smTestDriver_RUNTIME_LIBRARY_DIRS "${VTK_INSTALL_PREFIX}/lib/paraview-4.3")
set(smTestDriver_WRAP_HIERARCHY_FILE "${CMAKE_CURRENT_LIST_DIR}/smTestDriverHierarchy.txt")
set(smTestDriver_EXCLUDE_FROM_WRAPPING 1)

