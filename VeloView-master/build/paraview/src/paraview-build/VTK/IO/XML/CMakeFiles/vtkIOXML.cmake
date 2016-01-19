set(vtkIOXML_LOADED 1)
set(vtkIOXML_DEPENDS "vtkIOGeometry;vtkIOXMLParser;vtksys")
set(vtkIOXML_LIBRARIES "vtkIOXML")
set(vtkIOXML_INCLUDE_DIRS "${VTK_INSTALL_PREFIX}/include/paraview-4.3")
set(vtkIOXML_LIBRARY_DIRS "")
set(vtkIOXML_RUNTIME_LIBRARY_DIRS "${VTK_INSTALL_PREFIX}/lib/paraview-4.3")
set(vtkIOXML_WRAP_HIERARCHY_FILE "${CMAKE_CURRENT_LIST_DIR}/vtkIOXMLHierarchy.txt")

