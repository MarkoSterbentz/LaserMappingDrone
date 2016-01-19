set(vtkRenderingLIC_HEADERS_LOADED 1)
set(vtkRenderingLIC_HEADERS "vtkImageDataLIC2D;vtkStructuredGridLIC2D;vtkSurfaceLICDefaultPainter;vtkSurfaceLICPainter")

foreach(header ${vtkRenderingLIC_HEADERS})
  set(vtkRenderingLIC_HEADER_${header}_EXISTS 1)
endforeach()




