set(vtkIONetCDF_LOADED 1)
set(vtkIONetCDF_DEPENDS "vtkCommonDataModel;vtkCommonSystem;vtkIOCore;vtknetcdf;vtksys")
set(vtkIONetCDF_LIBRARIES "vtkIONetCDF")
set(vtkIONetCDF_INCLUDE_DIRS "${VTK_INSTALL_PREFIX}/include/paraview-4.3")
set(vtkIONetCDF_LIBRARY_DIRS "")
set(vtkIONetCDF_RUNTIME_LIBRARY_DIRS "${VTK_INSTALL_PREFIX}/lib/paraview-4.3")
set(vtkIONetCDF_WRAP_HIERARCHY_FILE "${CMAKE_CURRENT_LIST_DIR}/vtkIONetCDFHierarchy.txt")

