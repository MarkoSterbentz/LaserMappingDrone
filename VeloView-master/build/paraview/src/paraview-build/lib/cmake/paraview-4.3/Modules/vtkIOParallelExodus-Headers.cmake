set(vtkIOParallelExodus_HEADERS_LOADED 1)
set(vtkIOParallelExodus_HEADERS "vtkPExodusIIReader;vtkPExodusIIWriter")

foreach(header ${vtkIOParallelExodus_HEADERS})
  set(vtkIOParallelExodus_HEADER_${header}_EXISTS 1)
endforeach()




