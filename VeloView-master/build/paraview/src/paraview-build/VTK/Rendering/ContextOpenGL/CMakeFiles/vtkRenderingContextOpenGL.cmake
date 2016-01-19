set(vtkRenderingContextOpenGL_LOADED 1)
set(vtkRenderingContextOpenGL_DEPENDS "vtkRenderingContext2D;vtkRenderingFreeType;vtkRenderingOpenGL")
set(vtkRenderingContextOpenGL_LIBRARIES "vtkRenderingContextOpenGL")
set(vtkRenderingContextOpenGL_INCLUDE_DIRS "${VTK_INSTALL_PREFIX}/include/paraview-4.3")
set(vtkRenderingContextOpenGL_LIBRARY_DIRS "")
set(vtkRenderingContextOpenGL_RUNTIME_LIBRARY_DIRS "${VTK_INSTALL_PREFIX}/lib/paraview-4.3")
set(vtkRenderingContextOpenGL_WRAP_HIERARCHY_FILE "${CMAKE_CURRENT_LIST_DIR}/vtkRenderingContextOpenGLHierarchy.txt")
set(vtkRenderingContextOpenGL_IMPLEMENTS "vtkRenderingContext2D")

