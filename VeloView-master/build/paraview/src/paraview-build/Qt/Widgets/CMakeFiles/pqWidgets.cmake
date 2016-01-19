set(pqWidgets_LOADED 1)
set(pqWidgets_DEPENDS "vtkGUISupportQt;vtkPVServerManagerCore;vtkqttesting")
set(pqWidgets_LIBRARIES "pqWidgets")
set(pqWidgets_INCLUDE_DIRS "${VTK_INSTALL_PREFIX}/include/paraview-4.3")
set(pqWidgets_LIBRARY_DIRS "")
set(pqWidgets_RUNTIME_LIBRARY_DIRS "${VTK_INSTALL_PREFIX}/lib/paraview-4.3")
set(pqWidgets_WRAP_HIERARCHY_FILE "${CMAKE_CURRENT_LIST_DIR}/pqWidgetsHierarchy.txt")
set(pqWidgets_EXCLUDE_FROM_WRAPPING 1)

