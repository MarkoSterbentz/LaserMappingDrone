set(vtkWebGLExporter_HEADERS_LOADED 1)
set(vtkWebGLExporter_HEADERS "vtkPVWebGLExporter;vtkWebGLDataSet;vtkWebGLExporter;vtkWebGLObject;vtkWebGLPolyData;vtkWebGLWidget")

foreach(header ${vtkWebGLExporter_HEADERS})
  set(vtkWebGLExporter_HEADER_${header}_EXISTS 1)
endforeach()




