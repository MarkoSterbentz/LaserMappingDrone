set(Twisted_LOADED 1)
set(Twisted_DEPENDS "ZopeInterface;vtkPython")
set(Twisted_LIBRARIES "/usr/lib/x86_64-linux-gnu/libpython2.7.so")
set(Twisted_INCLUDE_DIRS "${VTK_INSTALL_PREFIX}/include/paraview-4.3")
set(Twisted_LIBRARY_DIRS "")
set(Twisted_RUNTIME_LIBRARY_DIRS "${VTK_INSTALL_PREFIX}/lib/paraview-4.3")
set(Twisted_WRAP_HIERARCHY_FILE "${CMAKE_CURRENT_LIST_DIR}/TwistedHierarchy.txt")
set(Twisted_EXCLUDE_FROM_WRAPPING 1)

