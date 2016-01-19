set(vtkWebGLExporter_LOADED 1)
set(vtkWebGLExporter_DEPENDS "vtkFiltersGeometry;vtkIOExport;vtkInteractionWidgets;vtkRenderingCore;vtkUtilitiesEncodeString;vtksys")
set(vtkWebGLExporter_LIBRARIES "vtkWebGLExporter")
set(vtkWebGLExporter_INCLUDE_DIRS "${VTK_INSTALL_PREFIX}/include/paraview-4.3")
set(vtkWebGLExporter_LIBRARY_DIRS "")
set(vtkWebGLExporter_RUNTIME_LIBRARY_DIRS "${VTK_INSTALL_PREFIX}/lib/paraview-4.3")
set(vtkWebGLExporter_WRAP_HIERARCHY_FILE "${CMAKE_CURRENT_LIST_DIR}/vtkWebGLExporterHierarchy.txt")

