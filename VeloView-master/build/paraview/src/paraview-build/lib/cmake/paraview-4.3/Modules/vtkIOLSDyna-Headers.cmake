set(vtkIOLSDyna_HEADERS_LOADED 1)
set(vtkIOLSDyna_HEADERS "vtkLSDynaReader;vtkLSDynaSummaryParser")

foreach(header ${vtkIOLSDyna_HEADERS})
  set(vtkIOLSDyna_HEADER_${header}_EXISTS 1)
endforeach()




