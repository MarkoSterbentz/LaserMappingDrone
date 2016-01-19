set(vtkImagingColor_HEADERS_LOADED 1)
set(vtkImagingColor_HEADERS "vtkImageHSIToRGB;vtkImageHSVToRGB;vtkImageLuminance;vtkImageMapToRGBA;vtkImageMapToWindowLevelColors;vtkImageQuantizeRGBToIndex;vtkImageRGBToHSI;vtkImageRGBToHSV")

foreach(header ${vtkImagingColor_HEADERS})
  set(vtkImagingColor_HEADER_${header}_EXISTS 1)
endforeach()




