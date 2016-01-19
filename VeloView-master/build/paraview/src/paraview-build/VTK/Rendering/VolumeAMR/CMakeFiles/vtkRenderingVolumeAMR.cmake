set(vtkRenderingVolumeAMR_LOADED 1)
set(vtkRenderingVolumeAMR_DEPENDS "vtkFiltersAMR;vtkParallelCore;vtkRenderingVolumeOpenGL")
set(vtkRenderingVolumeAMR_LIBRARIES "vtkRenderingVolumeAMR")
set(vtkRenderingVolumeAMR_INCLUDE_DIRS "${VTK_INSTALL_PREFIX}/include/paraview-4.3")
set(vtkRenderingVolumeAMR_LIBRARY_DIRS "")
set(vtkRenderingVolumeAMR_RUNTIME_LIBRARY_DIRS "${VTK_INSTALL_PREFIX}/lib/paraview-4.3")
set(vtkRenderingVolumeAMR_WRAP_HIERARCHY_FILE "${CMAKE_CURRENT_LIST_DIR}/vtkRenderingVolumeAMRHierarchy.txt")

