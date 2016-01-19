set(vtkIOExport_HEADERS_LOADED 1)
set(vtkIOExport_HEADERS "vtkExporter;vtkIVExporter;vtkOBJExporter;vtkOOGLExporter;vtkPOVExporter;vtkRIBExporter;vtkRIBLight;vtkRIBProperty;vtkVRMLExporter;vtkX3DExporter;vtkGL2PSExporter")

foreach(header ${vtkIOExport_HEADERS})
  set(vtkIOExport_HEADER_${header}_EXISTS 1)
endforeach()

set(vtkIOExport_HEADER_vtkExporter_ABSTRACT 1)



