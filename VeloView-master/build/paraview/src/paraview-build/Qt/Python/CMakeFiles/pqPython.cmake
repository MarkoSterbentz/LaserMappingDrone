set(pqPython_LOADED 1)
set(pqPython_DEPENDS "Pygments;pqCore;vtkPythonInterpreter;vtkWrappingPythonCore")
set(pqPython_LIBRARIES "pqPython")
set(pqPython_INCLUDE_DIRS "${VTK_INSTALL_PREFIX}/include/paraview-4.3")
set(pqPython_LIBRARY_DIRS "")
set(pqPython_RUNTIME_LIBRARY_DIRS "${VTK_INSTALL_PREFIX}/lib/paraview-4.3")
set(pqPython_WRAP_HIERARCHY_FILE "${CMAKE_CURRENT_LIST_DIR}/pqPythonHierarchy.txt")
set(pqPython_EXCLUDE_FROM_WRAPPING 1)

