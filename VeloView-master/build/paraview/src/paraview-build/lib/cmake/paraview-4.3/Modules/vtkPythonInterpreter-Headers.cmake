set(vtkPythonInterpreter_HEADERS_LOADED 1)
set(vtkPythonInterpreter_HEADERS "vtkPythonInterpreter;vtkPythonInteractiveInterpreter")

foreach(header ${vtkPythonInterpreter_HEADERS})
  set(vtkPythonInterpreter_HEADER_${header}_EXISTS 1)
endforeach()




