set(vtkWebCore_LOADED 1)
set(vtkWebCore_DEPENDS "vtkCommonCore;vtkFiltersGeneral;vtkIOCore;vtkIOImage;vtkParallelCore;vtkPython;vtkRenderingCore;vtkWebGLExporter;vtksys")
set(vtkWebCore_LIBRARIES "vtkWebCore")
set(vtkWebCore_INCLUDE_DIRS "${VTK_INSTALL_PREFIX}/include/paraview-4.3")
set(vtkWebCore_LIBRARY_DIRS "")
set(vtkWebCore_RUNTIME_LIBRARY_DIRS "${VTK_INSTALL_PREFIX}/lib/paraview-4.3")
set(vtkWebCore_WRAP_HIERARCHY_FILE "${CMAKE_CURRENT_LIST_DIR}/vtkWebCoreHierarchy.txt")

