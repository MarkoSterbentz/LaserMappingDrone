set(vtkRenderingFreeType_HEADERS_LOADED 1)
set(vtkRenderingFreeType_HEADERS "vtkFreeTypeStringToImage;vtkMathTextFreeTypeTextRenderer;vtkMathTextUtilities;vtkTextRendererStringToImage;vtkScaledTextActor;vtkVectorText")

foreach(header ${vtkRenderingFreeType_HEADERS})
  set(vtkRenderingFreeType_HEADER_${header}_EXISTS 1)
endforeach()




