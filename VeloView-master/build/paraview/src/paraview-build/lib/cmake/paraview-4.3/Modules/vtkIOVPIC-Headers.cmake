set(vtkIOVPIC_HEADERS_LOADED 1)
set(vtkIOVPIC_HEADERS "vtkVPICReader")

foreach(header ${vtkIOVPIC_HEADERS})
  set(vtkIOVPIC_HEADER_${header}_EXISTS 1)
endforeach()




