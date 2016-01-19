set(AutobahnPython_LOADED 1)
set(AutobahnPython_DEPENDS "SixPython;Twisted;vtkPython")
set(AutobahnPython_LIBRARIES "/usr/lib/x86_64-linux-gnu/libpython2.7.so")
set(AutobahnPython_INCLUDE_DIRS "${VTK_INSTALL_PREFIX}/include/paraview-4.3")
set(AutobahnPython_LIBRARY_DIRS "")
set(AutobahnPython_RUNTIME_LIBRARY_DIRS "${VTK_INSTALL_PREFIX}/lib/paraview-4.3")
set(AutobahnPython_WRAP_HIERARCHY_FILE "${CMAKE_CURRENT_LIST_DIR}/AutobahnPythonHierarchy.txt")
set(AutobahnPython_EXCLUDE_FROM_WRAPPING 1)

