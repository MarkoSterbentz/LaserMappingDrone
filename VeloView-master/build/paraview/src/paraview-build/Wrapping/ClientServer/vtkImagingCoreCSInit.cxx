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
extern "C" void real_initvtkImagingCorePython(const char *modulename);

void initvtkImagingCorePython()
{
  static const char modulename[] = "vtkImagingCorePython";
  real_initvtkImagingCorePython(modulename);
}
#endif

extern void vtkExtractVOI_Init(vtkClientServerInterpreter* csi);
extern void vtkImageAppendComponents_Init(vtkClientServerInterpreter* csi);
extern void vtkImageBlend_Init(vtkClientServerInterpreter* csi);
extern void vtkImageCacheFilter_Init(vtkClientServerInterpreter* csi);
extern void vtkImageCast_Init(vtkClientServerInterpreter* csi);
extern void vtkImageChangeInformation_Init(vtkClientServerInterpreter* csi);
extern void vtkImageClip_Init(vtkClientServerInterpreter* csi);
extern void vtkImageConstantPad_Init(vtkClientServerInterpreter* csi);
extern void vtkImageDataStreamer_Init(vtkClientServerInterpreter* csi);
extern void vtkImageDecomposeFilter_Init(vtkClientServerInterpreter* csi);
extern void vtkImageDifference_Init(vtkClientServerInterpreter* csi);
extern void vtkImageExtractComponents_Init(vtkClientServerInterpreter* csi);
extern void vtkImageFlip_Init(vtkClientServerInterpreter* csi);
extern void vtkImageIterateFilter_Init(vtkClientServerInterpreter* csi);
extern void vtkImageMagnify_Init(vtkClientServerInterpreter* csi);
extern void vtkImageMapToColors_Init(vtkClientServerInterpreter* csi);
extern void vtkImageMask_Init(vtkClientServerInterpreter* csi);
extern void vtkImageMirrorPad_Init(vtkClientServerInterpreter* csi);
extern void vtkImagePadFilter_Init(vtkClientServerInterpreter* csi);
extern void vtkImagePermute_Init(vtkClientServerInterpreter* csi);
extern void vtkImageResample_Init(vtkClientServerInterpreter* csi);
extern void vtkImageReslice_Init(vtkClientServerInterpreter* csi);
extern void vtkImageResliceToColors_Init(vtkClientServerInterpreter* csi);
extern void vtkImageShiftScale_Init(vtkClientServerInterpreter* csi);
extern void vtkImageShrink3D_Init(vtkClientServerInterpreter* csi);
extern void vtkImageThreshold_Init(vtkClientServerInterpreter* csi);
extern void vtkImageTranslateExtent_Init(vtkClientServerInterpreter* csi);
extern void vtkImageWrapPad_Init(vtkClientServerInterpreter* csi);
extern void vtkRTAnalyticSource_Init(vtkClientServerInterpreter* csi);
extern void vtkImageResize_Init(vtkClientServerInterpreter* csi);
extern void vtkImageBSplineCoefficients_Init(vtkClientServerInterpreter* csi);
extern void vtkImageStencilData_Init(vtkClientServerInterpreter* csi);
extern void vtkImageStencilAlgorithm_Init(vtkClientServerInterpreter* csi);
extern void vtkAbstractImageInterpolator_Init(vtkClientServerInterpreter* csi);
extern void vtkImageBSplineInterpolator_Init(vtkClientServerInterpreter* csi);
extern void vtkImageSincInterpolator_Init(vtkClientServerInterpreter* csi);
extern void vtkImageInterpolator_Init(vtkClientServerInterpreter* csi);
extern void vtkImageStencilSource_Init(vtkClientServerInterpreter* csi);


extern "C" void VTK_WRAP_CS_EXPORT vtkImagingCoreCS_Initialize(
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
    PyImport_AppendInittab("vtkImagingCorePython", initvtkImagingCorePython);
    }

  csi->Load("vtkImagingCore");
#endif

  vtkExtractVOI_Init(csi);
  vtkImageAppendComponents_Init(csi);
  vtkImageBlend_Init(csi);
  vtkImageCacheFilter_Init(csi);
  vtkImageCast_Init(csi);
  vtkImageChangeInformation_Init(csi);
  vtkImageClip_Init(csi);
  vtkImageConstantPad_Init(csi);
  vtkImageDataStreamer_Init(csi);
  vtkImageDecomposeFilter_Init(csi);
  vtkImageDifference_Init(csi);
  vtkImageExtractComponents_Init(csi);
  vtkImageFlip_Init(csi);
  vtkImageIterateFilter_Init(csi);
  vtkImageMagnify_Init(csi);
  vtkImageMapToColors_Init(csi);
  vtkImageMask_Init(csi);
  vtkImageMirrorPad_Init(csi);
  vtkImagePadFilter_Init(csi);
  vtkImagePermute_Init(csi);
  vtkImageResample_Init(csi);
  vtkImageReslice_Init(csi);
  vtkImageResliceToColors_Init(csi);
  vtkImageShiftScale_Init(csi);
  vtkImageShrink3D_Init(csi);
  vtkImageThreshold_Init(csi);
  vtkImageTranslateExtent_Init(csi);
  vtkImageWrapPad_Init(csi);
  vtkRTAnalyticSource_Init(csi);
  vtkImageResize_Init(csi);
  vtkImageBSplineCoefficients_Init(csi);
  vtkImageStencilData_Init(csi);
  vtkImageStencilAlgorithm_Init(csi);
  vtkAbstractImageInterpolator_Init(csi);
  vtkImageBSplineInterpolator_Init(csi);
  vtkImageSincInterpolator_Init(csi);
  vtkImageInterpolator_Init(csi);
  vtkImageStencilSource_Init(csi);

}
