set(vtkInteractionImage_LOADED 1)
set(vtkInteractionImage_DEPENDS "vtkImagingColor;vtkInteractionStyle;vtkInteractionWidgets;vtkRenderingCore;vtkRenderingFreeType")
set(vtkInteractionImage_LIBRARIES "vtkInteractionImage")
set(vtkInteractionImage_INCLUDE_DIRS "${VTK_INSTALL_PREFIX}/include/paraview-4.3")
set(vtkInteractionImage_LIBRARY_DIRS "")
set(vtkInteractionImage_RUNTIME_LIBRARY_DIRS "${VTK_INSTALL_PREFIX}/lib/paraview-4.3")
set(vtkInteractionImage_WRAP_HIERARCHY_FILE "${CMAKE_CURRENT_LIST_DIR}/vtkInteractionImageHierarchy.txt")

