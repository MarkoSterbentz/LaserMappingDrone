set(vtkImagingHybrid_HEADERS_LOADED 1)
set(vtkImagingHybrid_HEADERS "vtkBooleanTexture;vtkShepardMethod;vtkVoxelModeller;vtkSurfaceReconstructionFilter;vtkFastSplatter;vtkGaussianSplatter;vtkSampleFunction;vtkPointLoad;vtkImageCursor3D;vtkImageRectilinearWipe;vtkTriangularTexture;vtkSliceCubes")

foreach(header ${vtkImagingHybrid_HEADERS})
  set(vtkImagingHybrid_HEADER_${header}_EXISTS 1)
endforeach()




