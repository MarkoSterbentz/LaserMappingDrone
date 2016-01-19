set(vtkIOParallelExodus_LOADED 1)
set(vtkIOParallelExodus_DEPENDS "vtkIOExodus;vtkIOExodus;vtkParallelCore;vtkexodusII;vtksys")
set(vtkIOParallelExodus_LIBRARIES "vtkIOParallelExodus")
set(vtkIOParallelExodus_INCLUDE_DIRS "${VTK_INSTALL_PREFIX}/include/paraview-4.3")
set(vtkIOParallelExodus_LIBRARY_DIRS "")
set(vtkIOParallelExodus_RUNTIME_LIBRARY_DIRS "${VTK_INSTALL_PREFIX}/lib/paraview-4.3")
set(vtkIOParallelExodus_WRAP_HIERARCHY_FILE "${CMAKE_CURRENT_LIST_DIR}/vtkIOParallelExodusHierarchy.txt")
set(vtkIOParallelExodus_IMPLEMENTS "vtkIOExodus")

