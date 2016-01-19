set(vtkIOParallelXML_LOADED 1)
set(vtkIOParallelXML_DEPENDS "vtkIOXML;vtkParallelCore;vtksys")
set(vtkIOParallelXML_LIBRARIES "vtkIOParallelXML")
set(vtkIOParallelXML_INCLUDE_DIRS "${VTK_INSTALL_PREFIX}/include/paraview-4.3")
set(vtkIOParallelXML_LIBRARY_DIRS "")
set(vtkIOParallelXML_RUNTIME_LIBRARY_DIRS "${VTK_INSTALL_PREFIX}/lib/paraview-4.3")
set(vtkIOParallelXML_WRAP_HIERARCHY_FILE "${CMAKE_CURRENT_LIST_DIR}/vtkIOParallelXMLHierarchy.txt")

