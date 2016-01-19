set(pqCore_LOADED 1)
set(pqCore_DEPENDS "pqWidgets;vtkGUISupportQt;vtkPVAnimation;vtkPVClientServerCoreDefault;vtkPVServerManagerApplication;vtkPVServerManagerDefault;vtkTestingRendering;vtksys")
set(pqCore_LIBRARIES "pqCore")
set(pqCore_INCLUDE_DIRS "${VTK_INSTALL_PREFIX}/include/paraview-4.3")
set(pqCore_LIBRARY_DIRS "")
set(pqCore_RUNTIME_LIBRARY_DIRS "${VTK_INSTALL_PREFIX}/lib/paraview-4.3")
set(pqCore_WRAP_HIERARCHY_FILE "${CMAKE_CURRENT_LIST_DIR}/pqCoreHierarchy.txt")
set(pqCore_EXCLUDE_FROM_WRAPPING 1)

