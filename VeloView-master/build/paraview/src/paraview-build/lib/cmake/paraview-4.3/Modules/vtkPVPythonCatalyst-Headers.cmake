set(vtkPVPythonCatalyst_HEADERS_LOADED 1)
set(vtkPVPythonCatalyst_HEADERS "CPythonAdaptorAPI;vtkCPPythonAdaptorAPI;vtkCPPythonScriptPipeline")

foreach(header ${vtkPVPythonCatalyst_HEADERS})
  set(vtkPVPythonCatalyst_HEADER_${header}_EXISTS 1)
endforeach()

set(vtkPVPythonCatalyst_HEADER_vtkCPPythonAdaptorAPI_ABSTRACT 1)



