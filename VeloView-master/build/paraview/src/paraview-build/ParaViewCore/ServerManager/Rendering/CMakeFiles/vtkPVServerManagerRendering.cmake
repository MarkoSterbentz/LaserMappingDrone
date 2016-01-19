set(vtkPVServerManagerRendering_LOADED 1)
set(vtkPVServerManagerRendering_DEPENDS "vtkCommonColor;vtkPVServerImplementationRendering;vtkPVServerManagerCore;vtkPVServerManagerCore;vtksys")
set(vtkPVServerManagerRendering_LIBRARIES "vtkPVServerManagerRendering")
set(vtkPVServerManagerRendering_INCLUDE_DIRS "${VTK_INSTALL_PREFIX}/include/paraview-4.3")
set(vtkPVServerManagerRendering_LIBRARY_DIRS "")
set(vtkPVServerManagerRendering_RUNTIME_LIBRARY_DIRS "${VTK_INSTALL_PREFIX}/lib/paraview-4.3")
set(vtkPVServerManagerRendering_WRAP_HIERARCHY_FILE "${CMAKE_CURRENT_LIST_DIR}/vtkPVServerManagerRenderingHierarchy.txt")
set(vtkPVServerManagerRendering_IMPLEMENTS "vtkPVServerManagerCore")

