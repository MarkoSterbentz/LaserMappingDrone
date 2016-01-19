set(vtkIOImport_LOADED 1)
set(vtkIOImport_DEPENDS "vtkCommonCore;vtkFiltersSources;vtkRenderingCore")
set(vtkIOImport_LIBRARIES "vtkIOImport")
set(vtkIOImport_INCLUDE_DIRS "${VTK_INSTALL_PREFIX}/include/paraview-4.3")
set(vtkIOImport_LIBRARY_DIRS "")
set(vtkIOImport_RUNTIME_LIBRARY_DIRS "${VTK_INSTALL_PREFIX}/lib/paraview-4.3")
set(vtkIOImport_WRAP_HIERARCHY_FILE "${CMAKE_CURRENT_LIST_DIR}/vtkIOImportHierarchy.txt")

