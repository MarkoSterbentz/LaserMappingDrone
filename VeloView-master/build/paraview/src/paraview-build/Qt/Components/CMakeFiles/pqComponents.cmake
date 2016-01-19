set(pqComponents_LOADED 1)
set(pqComponents_DEPENDS "pqCore;pqPython;vtkChartsCore;vtkIOImage;vtkPVAnimation;vtkPVServerManagerDefault;vtkPVServerManagerRendering;vtksys")
set(pqComponents_LIBRARIES "pqComponents")
set(pqComponents_INCLUDE_DIRS "${VTK_INSTALL_PREFIX}/include/paraview-4.3")
set(pqComponents_LIBRARY_DIRS "")
set(pqComponents_RUNTIME_LIBRARY_DIRS "${VTK_INSTALL_PREFIX}/lib/paraview-4.3")
set(pqComponents_WRAP_HIERARCHY_FILE "${CMAKE_CURRENT_LIST_DIR}/pqComponentsHierarchy.txt")
set(pqComponents_EXCLUDE_FROM_WRAPPING 1)

