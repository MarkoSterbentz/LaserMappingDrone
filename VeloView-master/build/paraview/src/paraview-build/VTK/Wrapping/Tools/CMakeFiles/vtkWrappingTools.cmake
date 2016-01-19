set(vtkWrappingTools_LOADED 1)
set(vtkWrappingTools_DEPENDS "vtkCommonCore;vtksys")
set(vtkWrappingTools_LIBRARIES "vtkWrappingTools")
set(vtkWrappingTools_INCLUDE_DIRS "${VTK_INSTALL_PREFIX}/include/paraview-4.3")
set(vtkWrappingTools_LIBRARY_DIRS "")
set(vtkWrappingTools_RUNTIME_LIBRARY_DIRS "${VTK_INSTALL_PREFIX}/lib/paraview-4.3")
set(vtkWrappingTools_WRAP_HIERARCHY_FILE "${CMAKE_CURRENT_LIST_DIR}/vtkWrappingToolsHierarchy.txt")
set(vtkWrappingTools_EXCLUDE_FROM_WRAPPING 1)

