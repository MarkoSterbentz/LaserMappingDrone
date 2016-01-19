set(vtkPVCatalyst_HEADERS_LOADED 1)
set(vtkPVCatalyst_HEADERS "vtkCPAdaptorAPI;vtkCPDataDescription;vtkCPInputDataDescription;vtkCPPipeline;vtkCPProcessor")

foreach(header ${vtkPVCatalyst_HEADERS})
  set(vtkPVCatalyst_HEADER_${header}_EXISTS 1)
endforeach()

set(vtkPVCatalyst_HEADER_vtkCPAdaptorAPI_ABSTRACT 1)
set(vtkPVCatalyst_HEADER_vtkCPPipeline_ABSTRACT 1)



