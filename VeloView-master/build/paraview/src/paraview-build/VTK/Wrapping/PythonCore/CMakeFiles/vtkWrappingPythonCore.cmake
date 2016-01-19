set(vtkWrappingPythonCore_LOADED 1)
set(vtkWrappingPythonCore_DEPENDS "vtkCommonCore;vtkPython;vtkWrappingTools;vtksys")
set(vtkWrappingPythonCore_LIBRARIES "vtkWrappingPythonCore")
set(vtkWrappingPythonCore_INCLUDE_DIRS "${VTK_INSTALL_PREFIX}/include/paraview-4.3")
set(vtkWrappingPythonCore_LIBRARY_DIRS "")
set(vtkWrappingPythonCore_RUNTIME_LIBRARY_DIRS "${VTK_INSTALL_PREFIX}/lib/paraview-4.3")
set(vtkWrappingPythonCore_WRAP_HIERARCHY_FILE "${CMAKE_CURRENT_LIST_DIR}/vtkWrappingPythonCoreHierarchy.txt")
set(vtkWrappingPythonCore_EXCLUDE_FROM_WRAPPING 1)

