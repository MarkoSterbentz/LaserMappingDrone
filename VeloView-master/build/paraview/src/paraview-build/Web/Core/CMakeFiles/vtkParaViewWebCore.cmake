set(vtkParaViewWebCore_LOADED 1)
set(vtkParaViewWebCore_DEPENDS "vtkPVServerManagerDefault;vtkWebCore;vtkWebGLExporter")
set(vtkParaViewWebCore_LIBRARIES "vtkParaViewWebCore")
set(vtkParaViewWebCore_INCLUDE_DIRS "${VTK_INSTALL_PREFIX}/include/paraview-4.3")
set(vtkParaViewWebCore_LIBRARY_DIRS "")
set(vtkParaViewWebCore_RUNTIME_LIBRARY_DIRS "${VTK_INSTALL_PREFIX}/lib/paraview-4.3")
set(vtkParaViewWebCore_WRAP_HIERARCHY_FILE "${CMAKE_CURRENT_LIST_DIR}/vtkParaViewWebCoreHierarchy.txt")

