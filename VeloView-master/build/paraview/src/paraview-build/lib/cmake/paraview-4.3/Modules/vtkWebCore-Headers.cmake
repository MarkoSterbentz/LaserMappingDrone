set(vtkWebCore_HEADERS_LOADED 1)
set(vtkWebCore_HEADERS "vtkDataEncoder;vtkWebApplication;vtkWebInteractionEvent;vtkWebUtilities;vtkObjectIdMap")

foreach(header ${vtkWebCore_HEADERS})
  set(vtkWebCore_HEADER_${header}_EXISTS 1)
endforeach()




