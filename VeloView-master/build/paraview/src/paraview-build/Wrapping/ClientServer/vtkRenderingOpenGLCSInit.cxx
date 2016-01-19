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
extern "C" void real_initvtkRenderingOpenGLPython(const char *modulename);

void initvtkRenderingOpenGLPython()
{
  static const char modulename[] = "vtkRenderingOpenGLPython";
  real_initvtkRenderingOpenGLPython(modulename);
}
#endif

extern void vtkCameraPass_Init(vtkClientServerInterpreter* csi);
extern void vtkChooserPainter_Init(vtkClientServerInterpreter* csi);
extern void vtkClearRGBPass_Init(vtkClientServerInterpreter* csi);
extern void vtkClearZPass_Init(vtkClientServerInterpreter* csi);
extern void vtkClipPlanesPainter_Init(vtkClientServerInterpreter* csi);
extern void vtkCoincidentTopologyResolutionPainter_Init(vtkClientServerInterpreter* csi);
extern void vtkColorMaterialHelper_Init(vtkClientServerInterpreter* csi);
extern void vtkCompositePainter_Init(vtkClientServerInterpreter* csi);
extern void vtkCompositePolyDataMapper2_Init(vtkClientServerInterpreter* csi);
extern void vtkDataTransferHelper_Init(vtkClientServerInterpreter* csi);
extern void vtkDefaultPainter_Init(vtkClientServerInterpreter* csi);
extern void vtkDefaultPass_Init(vtkClientServerInterpreter* csi);
extern void vtkDepthPeelingPass_Init(vtkClientServerInterpreter* csi);
extern void vtkDisplayListPainter_Init(vtkClientServerInterpreter* csi);
extern void vtkFrameBufferObject_Init(vtkClientServerInterpreter* csi);
extern void vtkFrameBufferObject2_Init(vtkClientServerInterpreter* csi);
extern void vtkGLSLShaderDeviceAdapter2_Init(vtkClientServerInterpreter* csi);
extern void vtkGaussianBlurPass_Init(vtkClientServerInterpreter* csi);
extern void vtkGenericOpenGLRenderWindow_Init(vtkClientServerInterpreter* csi);
extern void vtkHardwareSelectionPolyDataPainter_Init(vtkClientServerInterpreter* csi);
extern void vtkImageProcessingPass_Init(vtkClientServerInterpreter* csi);
extern void vtkLightingPainter_Init(vtkClientServerInterpreter* csi);
extern void vtkLightsPass_Init(vtkClientServerInterpreter* csi);
extern void vtkLinesPainter_Init(vtkClientServerInterpreter* csi);
extern void vtkOpaquePass_Init(vtkClientServerInterpreter* csi);
extern void vtkOpenGLActor_Init(vtkClientServerInterpreter* csi);
extern void vtkOpenGLCamera_Init(vtkClientServerInterpreter* csi);
extern void vtkOpenGLClipPlanesPainter_Init(vtkClientServerInterpreter* csi);
extern void vtkOpenGLCoincidentTopologyResolutionPainter_Init(vtkClientServerInterpreter* csi);
extern void vtkOpenGLCompositePainter_Init(vtkClientServerInterpreter* csi);
extern void vtkOpenGLDisplayListPainter_Init(vtkClientServerInterpreter* csi);
extern void vtkOpenGLExtensionManager_Init(vtkClientServerInterpreter* csi);
extern void vtkOpenGLGlyph3DMapper_Init(vtkClientServerInterpreter* csi);
extern void vtkOpenGLHardwareSelector_Init(vtkClientServerInterpreter* csi);
extern void vtkOpenGLHardwareSupport_Init(vtkClientServerInterpreter* csi);
extern void vtkOpenGLImageMapper_Init(vtkClientServerInterpreter* csi);
extern void vtkOpenGLImageSliceMapper_Init(vtkClientServerInterpreter* csi);
extern void vtkOpenGLLabeledContourMapper_Init(vtkClientServerInterpreter* csi);
extern void vtkOpenGLLight_Init(vtkClientServerInterpreter* csi);
extern void vtkOpenGLLightMonitor_Init(vtkClientServerInterpreter* csi);
extern void vtkOpenGLLightingPainter_Init(vtkClientServerInterpreter* csi);
extern void vtkOpenGLModelViewProjectionMonitor_Init(vtkClientServerInterpreter* csi);
extern void vtkOpenGLPainterDeviceAdapter_Init(vtkClientServerInterpreter* csi);
extern void vtkOpenGLPolyDataMapper2D_Init(vtkClientServerInterpreter* csi);
extern void vtkOpenGLProperty_Init(vtkClientServerInterpreter* csi);
extern void vtkOpenGLRenderWindow_Init(vtkClientServerInterpreter* csi);
extern void vtkOpenGLRenderer_Init(vtkClientServerInterpreter* csi);
extern void vtkOpenGLRepresentationPainter_Init(vtkClientServerInterpreter* csi);
extern void vtkOpenGLScalarsToColorsPainter_Init(vtkClientServerInterpreter* csi);
extern void vtkOpenGLTexture_Init(vtkClientServerInterpreter* csi);
extern void vtkOverlayPass_Init(vtkClientServerInterpreter* csi);
extern void vtkPainter_Init(vtkClientServerInterpreter* csi);
extern void vtkPainterPolyDataMapper_Init(vtkClientServerInterpreter* csi);
extern void vtkPixelBufferObject_Init(vtkClientServerInterpreter* csi);
extern void vtkPointsPainter_Init(vtkClientServerInterpreter* csi);
extern void vtkPolyDataPainter_Init(vtkClientServerInterpreter* csi);
extern void vtkPolygonsPainter_Init(vtkClientServerInterpreter* csi);
extern void vtkPrimitivePainter_Init(vtkClientServerInterpreter* csi);
extern void vtkRenderPass_Init(vtkClientServerInterpreter* csi);
extern void vtkRenderPassCollection_Init(vtkClientServerInterpreter* csi);
extern void vtkRenderbuffer_Init(vtkClientServerInterpreter* csi);
extern void vtkRepresentationPainter_Init(vtkClientServerInterpreter* csi);
extern void vtkScalarsToColorsPainter_Init(vtkClientServerInterpreter* csi);
extern void vtkSequencePass_Init(vtkClientServerInterpreter* csi);
extern void vtkShadowMapBakerPass_Init(vtkClientServerInterpreter* csi);
extern void vtkShadowMapPass_Init(vtkClientServerInterpreter* csi);
extern void vtkSobelGradientMagnitudePass_Init(vtkClientServerInterpreter* csi);
extern void vtkStandardPolyDataPainter_Init(vtkClientServerInterpreter* csi);
extern void vtkTStripsPainter_Init(vtkClientServerInterpreter* csi);
extern void vtkTextureObject_Init(vtkClientServerInterpreter* csi);
extern void vtkTranslucentPass_Init(vtkClientServerInterpreter* csi);
extern void vtkUniformVariables_Init(vtkClientServerInterpreter* csi);
extern void vtkValuePainter_Init(vtkClientServerInterpreter* csi);
extern void vtkValuePass_Init(vtkClientServerInterpreter* csi);
extern void vtkValuePasses_Init(vtkClientServerInterpreter* csi);
extern void vtkVolumetricPass_Init(vtkClientServerInterpreter* csi);
extern void vtkOpenGLPolyDataMapper_Init(vtkClientServerInterpreter* csi);
extern void vtkXRenderWindowInteractor_Init(vtkClientServerInterpreter* csi);
extern void vtkXOpenGLRenderWindow_Init(vtkClientServerInterpreter* csi);
extern void vtkDummyGPUInfoList_Init(vtkClientServerInterpreter* csi);


extern "C" void VTK_WRAP_CS_EXPORT vtkRenderingOpenGLCS_Initialize(
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
    PyImport_AppendInittab("vtkRenderingOpenGLPython", initvtkRenderingOpenGLPython);
    }

  csi->Load("vtkRenderingOpenGL");
#endif

  vtkCameraPass_Init(csi);
  vtkChooserPainter_Init(csi);
  vtkClearRGBPass_Init(csi);
  vtkClearZPass_Init(csi);
  vtkClipPlanesPainter_Init(csi);
  vtkCoincidentTopologyResolutionPainter_Init(csi);
  vtkColorMaterialHelper_Init(csi);
  vtkCompositePainter_Init(csi);
  vtkCompositePolyDataMapper2_Init(csi);
  vtkDataTransferHelper_Init(csi);
  vtkDefaultPainter_Init(csi);
  vtkDefaultPass_Init(csi);
  vtkDepthPeelingPass_Init(csi);
  vtkDisplayListPainter_Init(csi);
  vtkFrameBufferObject_Init(csi);
  vtkFrameBufferObject2_Init(csi);
  vtkGLSLShaderDeviceAdapter2_Init(csi);
  vtkGaussianBlurPass_Init(csi);
  vtkGenericOpenGLRenderWindow_Init(csi);
  vtkHardwareSelectionPolyDataPainter_Init(csi);
  vtkImageProcessingPass_Init(csi);
  vtkLightingPainter_Init(csi);
  vtkLightsPass_Init(csi);
  vtkLinesPainter_Init(csi);
  vtkOpaquePass_Init(csi);
  vtkOpenGLActor_Init(csi);
  vtkOpenGLCamera_Init(csi);
  vtkOpenGLClipPlanesPainter_Init(csi);
  vtkOpenGLCoincidentTopologyResolutionPainter_Init(csi);
  vtkOpenGLCompositePainter_Init(csi);
  vtkOpenGLDisplayListPainter_Init(csi);
  vtkOpenGLExtensionManager_Init(csi);
  vtkOpenGLGlyph3DMapper_Init(csi);
  vtkOpenGLHardwareSelector_Init(csi);
  vtkOpenGLHardwareSupport_Init(csi);
  vtkOpenGLImageMapper_Init(csi);
  vtkOpenGLImageSliceMapper_Init(csi);
  vtkOpenGLLabeledContourMapper_Init(csi);
  vtkOpenGLLight_Init(csi);
  vtkOpenGLLightMonitor_Init(csi);
  vtkOpenGLLightingPainter_Init(csi);
  vtkOpenGLModelViewProjectionMonitor_Init(csi);
  vtkOpenGLPainterDeviceAdapter_Init(csi);
  vtkOpenGLPolyDataMapper2D_Init(csi);
  vtkOpenGLProperty_Init(csi);
  vtkOpenGLRenderWindow_Init(csi);
  vtkOpenGLRenderer_Init(csi);
  vtkOpenGLRepresentationPainter_Init(csi);
  vtkOpenGLScalarsToColorsPainter_Init(csi);
  vtkOpenGLTexture_Init(csi);
  vtkOverlayPass_Init(csi);
  vtkPainter_Init(csi);
  vtkPainterPolyDataMapper_Init(csi);
  vtkPixelBufferObject_Init(csi);
  vtkPointsPainter_Init(csi);
  vtkPolyDataPainter_Init(csi);
  vtkPolygonsPainter_Init(csi);
  vtkPrimitivePainter_Init(csi);
  vtkRenderPass_Init(csi);
  vtkRenderPassCollection_Init(csi);
  vtkRenderbuffer_Init(csi);
  vtkRepresentationPainter_Init(csi);
  vtkScalarsToColorsPainter_Init(csi);
  vtkSequencePass_Init(csi);
  vtkShadowMapBakerPass_Init(csi);
  vtkShadowMapPass_Init(csi);
  vtkSobelGradientMagnitudePass_Init(csi);
  vtkStandardPolyDataPainter_Init(csi);
  vtkTStripsPainter_Init(csi);
  vtkTextureObject_Init(csi);
  vtkTranslucentPass_Init(csi);
  vtkUniformVariables_Init(csi);
  vtkValuePainter_Init(csi);
  vtkValuePass_Init(csi);
  vtkValuePasses_Init(csi);
  vtkVolumetricPass_Init(csi);
  vtkOpenGLPolyDataMapper_Init(csi);
  vtkXRenderWindowInteractor_Init(csi);
  vtkXOpenGLRenderWindow_Init(csi);
  vtkDummyGPUInfoList_Init(csi);

}
