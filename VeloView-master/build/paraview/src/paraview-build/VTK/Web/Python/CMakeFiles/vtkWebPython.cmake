set(vtkWebPython_LOADED 1)
set(vtkWebPython_DEPENDS "AutobahnPython;vtkPython")
set(vtkWebPython_LIBRARIES "/usr/lib/x86_64-linux-gnu/libpython2.7.so")
set(vtkWebPython_INCLUDE_DIRS "${VTK_INSTALL_PREFIX}/include/paraview-4.3")
set(vtkWebPython_LIBRARY_DIRS "")
set(vtkWebPython_RUNTIME_LIBRARY_DIRS "${VTK_INSTALL_PREFIX}/lib/paraview-4.3")
set(vtkWebPython_WRAP_HIERARCHY_FILE "${CMAKE_CURRENT_LIST_DIR}/vtkWebPythonHierarchy.txt")
set(vtkWebPython_EXCLUDE_FROM_WRAPPING 1)

