set(vtkPVVTKExtensionsCore_LOADED 1)
set(vtkPVVTKExtensionsCore_DEPENDS "vtkFiltersCore;vtkPVCommon;vtkParallelCore;vtksys")
set(vtkPVVTKExtensionsCore_LIBRARIES "vtkPVVTKExtensionsCore")
set(vtkPVVTKExtensionsCore_INCLUDE_DIRS "${VTK_INSTALL_PREFIX}/include/paraview-4.3")
set(vtkPVVTKExtensionsCore_LIBRARY_DIRS "")
set(vtkPVVTKExtensionsCore_RUNTIME_LIBRARY_DIRS "${VTK_INSTALL_PREFIX}/lib/paraview-4.3")
set(vtkPVVTKExtensionsCore_WRAP_HIERARCHY_FILE "${CMAKE_CURRENT_LIST_DIR}/vtkPVVTKExtensionsCoreHierarchy.txt")

