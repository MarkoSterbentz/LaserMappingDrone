set(vtkPVCommon_HEADERS_LOADED 1)
set(vtkPVCommon_HEADERS "vtkCommandOptions;vtkCommandOptions;vtkCommandOptionsXMLParser;vtkCommandOptionsXMLParser;vtkPVTestUtilities;vtkPVTestUtilities;vtkPVXMLElement;vtkPVXMLElement;vtkPVXMLParser;vtkPVXMLParser;vtkStringList;vtkStringList;vtkPVInstantiator;vtkPVInstantiator")

foreach(header ${vtkPVCommon_HEADERS})
  set(vtkPVCommon_HEADER_${header}_EXISTS 1)
endforeach()




