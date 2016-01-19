set(vtkParaViewWebPython_LOADED 1)
set(vtkParaViewWebPython_DEPENDS "AutobahnPython")
set(vtkParaViewWebPython_LIBRARIES "/usr/lib/x86_64-linux-gnu/libpython2.7.so")
set(vtkParaViewWebPython_INCLUDE_DIRS "${VTK_INSTALL_PREFIX}/include/paraview-4.3")
set(vtkParaViewWebPython_LIBRARY_DIRS "")
set(vtkParaViewWebPython_RUNTIME_LIBRARY_DIRS "${VTK_INSTALL_PREFIX}/lib/paraview-4.3")
set(vtkParaViewWebPython_WRAP_HIERARCHY_FILE "${CMAKE_CURRENT_LIST_DIR}/vtkParaViewWebPythonHierarchy.txt")
set(vtkParaViewWebPython_EXCLUDE_FROM_WRAPPING 1)

