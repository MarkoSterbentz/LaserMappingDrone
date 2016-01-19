set(vtkIOXdmf2_LOADED 1)
set(vtkIOXdmf2_DEPENDS "vtkCommonCore;vtkCommonDataModel;vtkCommonExecutionModel;vtkFiltersExtraction;vtkIOLegacy;vtkIOXML;vtksys;vtkxdmf2")
set(vtkIOXdmf2_LIBRARIES "vtkIOXdmf2")
set(vtkIOXdmf2_INCLUDE_DIRS "${VTK_INSTALL_PREFIX}/include/paraview-4.3")
set(vtkIOXdmf2_LIBRARY_DIRS "")
set(vtkIOXdmf2_RUNTIME_LIBRARY_DIRS "${VTK_INSTALL_PREFIX}/lib/paraview-4.3")
set(vtkIOXdmf2_WRAP_HIERARCHY_FILE "${CMAKE_CURRENT_LIST_DIR}/vtkIOXdmf2Hierarchy.txt")

