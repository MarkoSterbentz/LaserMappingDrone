set(vtkClientServer_LOADED 1)
set(vtkClientServer_DEPENDS "vtkCommonCore;vtkPython;vtkPythonInterpreter;vtkWrappingPythonCore")
set(vtkClientServer_LIBRARIES "vtkClientServer")
set(vtkClientServer_INCLUDE_DIRS "${VTK_INSTALL_PREFIX}/include/paraview-4.3")
set(vtkClientServer_LIBRARY_DIRS "")
set(vtkClientServer_RUNTIME_LIBRARY_DIRS "${VTK_INSTALL_PREFIX}/lib/paraview-4.3")
set(vtkClientServer_WRAP_HIERARCHY_FILE "${CMAKE_CURRENT_LIST_DIR}/vtkClientServerHierarchy.txt")
set(vtkClientServer_EXCLUDE_FROM_WRAPPING 1)

