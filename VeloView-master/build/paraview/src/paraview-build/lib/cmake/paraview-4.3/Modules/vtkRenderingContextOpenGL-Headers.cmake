set(vtkRenderingContextOpenGL_HEADERS_LOADED 1)
set(vtkRenderingContextOpenGL_HEADERS "vtkOpenGLContextActor")

foreach(header ${vtkRenderingContextOpenGL_HEADERS})
  set(vtkRenderingContextOpenGL_HEADER_${header}_EXISTS 1)
endforeach()




