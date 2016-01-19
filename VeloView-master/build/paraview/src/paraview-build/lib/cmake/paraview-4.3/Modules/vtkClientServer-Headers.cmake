set(vtkClientServer_HEADERS_LOADED 1)
set(vtkClientServer_HEADERS "vtkClientServerID;vtkClientServerID;vtkClientServerInterpreter;vtkClientServerInterpreter;vtkClientServerStream;vtkClientServerStream")

foreach(header ${vtkClientServer_HEADERS})
  set(vtkClientServer_HEADER_${header}_EXISTS 1)
endforeach()




