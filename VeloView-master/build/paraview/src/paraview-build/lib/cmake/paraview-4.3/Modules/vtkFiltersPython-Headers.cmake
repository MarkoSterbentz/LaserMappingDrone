set(vtkFiltersPython_HEADERS_LOADED 1)
set(vtkFiltersPython_HEADERS "vtkPythonAlgorithm")

foreach(header ${vtkFiltersPython_HEADERS})
  set(vtkFiltersPython_HEADER_${header}_EXISTS 1)
endforeach()




