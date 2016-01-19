set(ZopeInterface_LOADED 1)
set(ZopeInterface_DEPENDS "vtkPython")
set(ZopeInterface_LIBRARIES "/usr/lib/x86_64-linux-gnu/libpython2.7.so")
set(ZopeInterface_INCLUDE_DIRS "${VTK_INSTALL_PREFIX}/include/paraview-4.3")
set(ZopeInterface_LIBRARY_DIRS "")
set(ZopeInterface_RUNTIME_LIBRARY_DIRS "${VTK_INSTALL_PREFIX}/lib/paraview-4.3")
set(ZopeInterface_WRAP_HIERARCHY_FILE "${CMAKE_CURRENT_LIST_DIR}/ZopeInterfaceHierarchy.txt")
set(ZopeInterface_EXCLUDE_FROM_WRAPPING 1)

