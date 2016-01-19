/* #undef PARAVIEW_USE_UNIFIED_BINDINGS */
/* #undef NO_PYTHON_BINDINGS_AVAILABLE */
#ifdef NO_PYTHON_BINDINGS_AVAILABLE
#undef PARAVIEW_USE_UNIFIED_BINDINGS
#endif
#ifdef PARAVIEW_USE_UNIFIED_BINDINGS
#include "vtkPython.h"
#include "vtkPythonInterpreter.h"
#endif

#include "vtkClientServerInterpreter.h"

#ifndef PARAVIEW_BUILD_SHARED_LIBS
#define PARAVIEW_BUILD_SHARED_LIBS
#endif
#if defined(PARAVIEW_BUILD_SHARED_LIBS) && defined(_WIN32)
# define VTK_WRAP_CS_EXPORT __declspec(dllexport)
#else
# define VTK_WRAP_CS_EXPORT
#endif

#ifdef PARAVIEW_USE_UNIFIED_BINDINGS
extern "C" void real_initvtkImagingGeneralPython(const char *modulename);

void initvtkImagingGeneralPython()
{
  static const char modulename[] = "vtkImagingGeneralPython";
  real_initvtkImagingGeneralPython(modulename);
}
#endif

extern void vtkImageAnisotropicDiffusion2D_Init(vtkClientServerInterpreter* csi);
extern void vtkImageAnisotropicDiffusion3D_Init(vtkClientServerInterpreter* csi);
extern void vtkImageCheckerboard_Init(vtkClientServerInterpreter* csi);
extern void vtkImageCityBlockDistance_Init(vtkClientServerInterpreter* csi);
extern void vtkImageConvolve_Init(vtkClientServerInterpreter* csi);
extern void vtkImageCorrelation_Init(vtkClientServerInterpreter* csi);
extern void vtkImageEuclideanDistance_Init(vtkClientServerInterpreter* csi);
extern void vtkImageEuclideanToPolar_Init(vtkClientServerInterpreter* csi);
extern void vtkImageGaussianSmooth_Init(vtkClientServerInterpreter* csi);
extern void vtkImageGradient_Init(vtkClientServerInterpreter* csi);
extern void vtkImageGradientMagnitude_Init(vtkClientServerInterpreter* csi);
extern void vtkImageHybridMedian2D_Init(vtkClientServerInterpreter* csi);
extern void vtkImageLaplacian_Init(vtkClientServerInterpreter* csi);
extern void vtkImageMedian3D_Init(vtkClientServerInterpreter* csi);
extern void vtkImageNormalize_Init(vtkClientServerInterpreter* csi);
extern void vtkImageRange3D_Init(vtkClientServerInterpreter* csi);
extern void vtkImageSeparableConvolution_Init(vtkClientServerInterpreter* csi);
extern void vtkImageSobel2D_Init(vtkClientServerInterpreter* csi);
extern void vtkImageSobel3D_Init(vtkClientServerInterpreter* csi);
extern void vtkImageSpatialAlgorithm_Init(vtkClientServerInterpreter* csi);
extern void vtkImageVariance3D_Init(vtkClientServerInterpreter* csi);
extern void vtkSimpleImageFilterExample_Init(vtkClientServerInterpreter* csi);
extern void vtkImageSlab_Init(vtkClientServerInterpreter* csi);
extern void vtkImageSlabReslice_Init(vtkClientServerInterpreter* csi);


extern "C" void VTK_WRAP_CS_EXPORT vtkImagingGeneralCS_Initialize(
  vtkClientServerInterpreter *csi)
{
#ifdef PARAVIEW_USE_UNIFIED_BINDINGS
  if (!vtkPythonInterpreter::IsInitialized())
    {
    vtkPythonInterpreter::Initialize();
    }

  static bool initialized = false;

  if (!initialized)
    {
    initialized = true;
    PyImport_AppendInittab("vtkImagingGeneralPython", initvtkImagingGeneralPython);
    }

  csi->Load("vtkImagingGeneral");
#endif

  vtkImageAnisotropicDiffusion2D_Init(csi);
  vtkImageAnisotropicDiffusion3D_Init(csi);
  vtkImageCheckerboard_Init(csi);
  vtkImageCityBlockDistance_Init(csi);
  vtkImageConvolve_Init(csi);
  vtkImageCorrelation_Init(csi);
  vtkImageEuclideanDistance_Init(csi);
  vtkImageEuclideanToPolar_Init(csi);
  vtkImageGaussianSmooth_Init(csi);
  vtkImageGradient_Init(csi);
  vtkImageGradientMagnitude_Init(csi);
  vtkImageHybridMedian2D_Init(csi);
  vtkImageLaplacian_Init(csi);
  vtkImageMedian3D_Init(csi);
  vtkImageNormalize_Init(csi);
  vtkImageRange3D_Init(csi);
  vtkImageSeparableConvolution_Init(csi);
  vtkImageSobel2D_Init(csi);
  vtkImageSobel3D_Init(csi);
  vtkImageSpatialAlgorithm_Init(csi);
  vtkImageVariance3D_Init(csi);
  vtkSimpleImageFilterExample_Init(csi);
  vtkImageSlab_Init(csi);
  vtkImageSlabReslice_Init(csi);

}
