set(SixPython_LOADED 1)
set(SixPython_DEPENDS "vtkPython")
set(SixPython_LIBRARIES "/usr/lib/x86_64-linux-gnu/libpython2.7.so")
set(SixPython_INCLUDE_DIRS "${VTK_INSTALL_PREFIX}/include/paraview-4.3")
set(SixPython_LIBRARY_DIRS "")
set(SixPython_RUNTIME_LIBRARY_DIRS "${VTK_INSTALL_PREFIX}/lib/paraview-4.3")
set(SixPython_WRAP_HIERARCHY_FILE "${CMAKE_CURRENT_LIST_DIR}/SixPythonHierarchy.txt")
set(SixPython_EXCLUDE_FROM_WRAPPING 1)

