set(vtkRenderingMatplotlib_LOADED 1)
set(vtkRenderingMatplotlib_DEPENDS "vtkImagingCore;vtkPythonInterpreter;vtkRenderingCore;vtkRenderingFreeType;vtkWrappingPythonCore")
set(vtkRenderingMatplotlib_LIBRARIES "vtkRenderingMatplotlib")
set(vtkRenderingMatplotlib_INCLUDE_DIRS "${VTK_INSTALL_PREFIX}/include/paraview-4.3")
set(vtkRenderingMatplotlib_LIBRARY_DIRS "")
set(vtkRenderingMatplotlib_RUNTIME_LIBRARY_DIRS "${VTK_INSTALL_PREFIX}/lib/paraview-4.3")
set(vtkRenderingMatplotlib_WRAP_HIERARCHY_FILE "${CMAKE_CURRENT_LIST_DIR}/vtkRenderingMatplotlibHierarchy.txt")
set(vtkRenderingMatplotlib_IMPLEMENTS "vtkRenderingFreeType")

