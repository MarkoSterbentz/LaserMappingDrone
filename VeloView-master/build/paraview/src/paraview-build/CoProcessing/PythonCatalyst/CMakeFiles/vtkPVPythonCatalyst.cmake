set(vtkPVPythonCatalyst_LOADED 1)
set(vtkPVPythonCatalyst_DEPENDS "vtkPVCatalyst;vtkPythonInterpreter")
set(vtkPVPythonCatalyst_LIBRARIES "vtkPVPythonCatalyst")
set(vtkPVPythonCatalyst_INCLUDE_DIRS "${VTK_INSTALL_PREFIX}/include/paraview-4.3")
set(vtkPVPythonCatalyst_LIBRARY_DIRS "")
set(vtkPVPythonCatalyst_RUNTIME_LIBRARY_DIRS "${VTK_INSTALL_PREFIX}/lib/paraview-4.3")
set(vtkPVPythonCatalyst_WRAP_HIERARCHY_FILE "${CMAKE_CURRENT_LIST_DIR}/vtkPVPythonCatalystHierarchy.txt")

