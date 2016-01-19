set(vtkWrappingPythonCore_HEADERS_LOADED 1)
set(vtkWrappingPythonCore_HEADERS "vtkPythonArgs;vtkPythonCommand;vtkPythonOverload;vtkPythonUtil;vtkSmartPyObject;PyVTKClass;PyVTKMutableObject;PyVTKNamespace;PyVTKObject;PyVTKSpecialObject;PyVTKTemplate;vtkWrappingPythonCoreModule")

foreach(header ${vtkWrappingPythonCore_HEADERS})
  set(vtkWrappingPythonCore_HEADER_${header}_EXISTS 1)
endforeach()




