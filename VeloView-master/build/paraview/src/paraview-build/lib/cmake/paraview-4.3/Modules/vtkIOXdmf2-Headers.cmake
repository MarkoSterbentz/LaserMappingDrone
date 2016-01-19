set(vtkIOXdmf2_HEADERS_LOADED 1)
set(vtkIOXdmf2_HEADERS "vtkSILBuilder;vtkXdmfReader;vtkXdmfWriter")

foreach(header ${vtkIOXdmf2_HEADERS})
  set(vtkIOXdmf2_HEADER_${header}_EXISTS 1)
endforeach()




