set(vtkIOGeometry_LOADED 1)
set(vtkIOGeometry_DEPENDS "vtkCommonDataModel;vtkCommonMisc;vtkCommonSystem;vtkIOCore;vtkjsoncpp;vtksys;vtkzlib")
set(vtkIOGeometry_LIBRARIES "vtkIOGeometry")
set(vtkIOGeometry_INCLUDE_DIRS "${VTK_INSTALL_PREFIX}/include/paraview-4.3")
set(vtkIOGeometry_LIBRARY_DIRS "")
set(vtkIOGeometry_RUNTIME_LIBRARY_DIRS "${VTK_INSTALL_PREFIX}/lib/paraview-4.3")
set(vtkIOGeometry_WRAP_HIERARCHY_FILE "${CMAKE_CURRENT_LIST_DIR}/vtkIOGeometryHierarchy.txt")

