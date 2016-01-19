set(pqApplicationComponents_LOADED 1)
set(pqApplicationComponents_DEPENDS "pqComponents;vtkGUISupportQt;vtkPVAnimation;vtkPVServerManagerDefault;vtkPVServerManagerRendering;vtksys")
set(pqApplicationComponents_LIBRARIES "pqApplicationComponents")
set(pqApplicationComponents_INCLUDE_DIRS "${VTK_INSTALL_PREFIX}/include/paraview-4.3")
set(pqApplicationComponents_LIBRARY_DIRS "")
set(pqApplicationComponents_RUNTIME_LIBRARY_DIRS "${VTK_INSTALL_PREFIX}/lib/paraview-4.3")
set(pqApplicationComponents_WRAP_HIERARCHY_FILE "${CMAKE_CURRENT_LIST_DIR}/pqApplicationComponentsHierarchy.txt")
set(pqApplicationComponents_EXCLUDE_FROM_WRAPPING 1)

