set(Pygments_LOADED 1)
set(Pygments_DEPENDS "vtkPython")
set(Pygments_LIBRARIES "/usr/lib/x86_64-linux-gnu/libpython2.7.so")
set(Pygments_INCLUDE_DIRS "${VTK_INSTALL_PREFIX}/include/paraview-4.3")
set(Pygments_LIBRARY_DIRS "")
set(Pygments_RUNTIME_LIBRARY_DIRS "${VTK_INSTALL_PREFIX}/lib/paraview-4.3")
set(Pygments_WRAP_HIERARCHY_FILE "${CMAKE_CURRENT_LIST_DIR}/PygmentsHierarchy.txt")
set(Pygments_EXCLUDE_FROM_WRAPPING 1)

