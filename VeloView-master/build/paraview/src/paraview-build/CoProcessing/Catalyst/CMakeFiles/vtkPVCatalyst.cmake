set(vtkPVCatalyst_LOADED 1)
set(vtkPVCatalyst_DEPENDS "vtkPVServerManagerApplication;vtksys")
set(vtkPVCatalyst_LIBRARIES "vtkPVCatalyst")
set(vtkPVCatalyst_INCLUDE_DIRS "${VTK_INSTALL_PREFIX}/include/paraview-4.3")
set(vtkPVCatalyst_LIBRARY_DIRS "")
set(vtkPVCatalyst_RUNTIME_LIBRARY_DIRS "${VTK_INSTALL_PREFIX}/lib/paraview-4.3")
set(vtkPVCatalyst_WRAP_HIERARCHY_FILE "${CMAKE_CURRENT_LIST_DIR}/vtkPVCatalystHierarchy.txt")

