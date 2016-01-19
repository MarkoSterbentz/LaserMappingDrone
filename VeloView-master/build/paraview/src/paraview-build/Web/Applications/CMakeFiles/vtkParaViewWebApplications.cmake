set(vtkParaViewWebApplications_LOADED 1)
set(vtkParaViewWebApplications_DEPENDS "vtkParaViewWebPython;vtkParaViewWebWidgets;vtkWebJavaScript")
set(vtkParaViewWebApplications_LIBRARIES "/usr/lib/x86_64-linux-gnu/libpython2.7.so;")
set(vtkParaViewWebApplications_INCLUDE_DIRS "${VTK_INSTALL_PREFIX}/include/paraview-4.3")
set(vtkParaViewWebApplications_LIBRARY_DIRS "")
set(vtkParaViewWebApplications_RUNTIME_LIBRARY_DIRS "${VTK_INSTALL_PREFIX}/lib/paraview-4.3")
set(vtkParaViewWebApplications_WRAP_HIERARCHY_FILE "${CMAKE_CURRENT_LIST_DIR}/vtkParaViewWebApplicationsHierarchy.txt")
set(vtkParaViewWebApplications_EXCLUDE_FROM_WRAPPING 1)

