set(vtkParaViewWeb_LOADED 1)
set(vtkParaViewWeb_DEPENDS "vtkParaViewWebApplications;vtkParaViewWebCore;vtkParaViewWebPython;vtkWebCore;vtkWebGLExporter;vtkWebJavaScript;vtkWebPython")
set(vtkParaViewWeb_LIBRARIES "/usr/lib/x86_64-linux-gnu/libpython2.7.so;;vtkParaViewWebCore;vtkWebCore;vtkWebGLExporter")
set(vtkParaViewWeb_INCLUDE_DIRS "${VTK_INSTALL_PREFIX}/include/paraview-4.3")
set(vtkParaViewWeb_LIBRARY_DIRS "")
set(vtkParaViewWeb_RUNTIME_LIBRARY_DIRS "${VTK_INSTALL_PREFIX}/lib/paraview-4.3")
set(vtkParaViewWeb_WRAP_HIERARCHY_FILE "${CMAKE_CURRENT_LIST_DIR}/vtkParaViewWebHierarchy.txt")
set(vtkParaViewWeb_EXCLUDE_FROM_WRAPPING 1)

