set(vtkIOXMLParser_LOADED 1)
set(vtkIOXMLParser_DEPENDS "vtkCommonDataModel;vtkCommonMisc;vtkCommonSystem;vtkIOCore;vtkexpat")
set(vtkIOXMLParser_LIBRARIES "vtkIOXMLParser")
set(vtkIOXMLParser_INCLUDE_DIRS "${VTK_INSTALL_PREFIX}/include/paraview-4.3")
set(vtkIOXMLParser_LIBRARY_DIRS "")
set(vtkIOXMLParser_RUNTIME_LIBRARY_DIRS "${VTK_INSTALL_PREFIX}/lib/paraview-4.3")
set(vtkIOXMLParser_WRAP_HIERARCHY_FILE "${CMAKE_CURRENT_LIST_DIR}/vtkIOXMLParserHierarchy.txt")

