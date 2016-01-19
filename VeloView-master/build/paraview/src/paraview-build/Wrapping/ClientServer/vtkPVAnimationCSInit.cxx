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
extern "C" void real_initvtkPVAnimationPython(const char *modulename);

void initvtkPVAnimationPython()
{
  static const char modulename[] = "vtkPVAnimationPython";
  real_initvtkPVAnimationPython(modulename);
}
#endif

extern void vtkAnimationPlayer_Init(vtkClientServerInterpreter* csi);
extern void vtkCompositeAnimationPlayer_Init(vtkClientServerInterpreter* csi);
extern void vtkPVAnimationCue_Init(vtkClientServerInterpreter* csi);
extern void vtkPVBooleanKeyFrame_Init(vtkClientServerInterpreter* csi);
extern void vtkPVCameraAnimationCue_Init(vtkClientServerInterpreter* csi);
extern void vtkPVCameraCueManipulator_Init(vtkClientServerInterpreter* csi);
extern void vtkPVCameraKeyFrame_Init(vtkClientServerInterpreter* csi);
extern void vtkPVCompositeKeyFrame_Init(vtkClientServerInterpreter* csi);
extern void vtkPVCueManipulator_Init(vtkClientServerInterpreter* csi);
extern void vtkPVExponentialKeyFrame_Init(vtkClientServerInterpreter* csi);
extern void vtkPVKeyFrameAnimationCue_Init(vtkClientServerInterpreter* csi);
extern void vtkPVKeyFrameAnimationCueForProxies_Init(vtkClientServerInterpreter* csi);
extern void vtkPVKeyFrameCueManipulator_Init(vtkClientServerInterpreter* csi);
extern void vtkPVKeyFrame_Init(vtkClientServerInterpreter* csi);
extern void vtkPVRampKeyFrame_Init(vtkClientServerInterpreter* csi);
extern void vtkPVRepresentationAnimationHelper_Init(vtkClientServerInterpreter* csi);
extern void vtkPVServerSideAnimationPlayer_Init(vtkClientServerInterpreter* csi);
extern void vtkPVSinusoidKeyFrame_Init(vtkClientServerInterpreter* csi);
extern void vtkRealtimeAnimationPlayer_Init(vtkClientServerInterpreter* csi);
extern void vtkSequenceAnimationPlayer_Init(vtkClientServerInterpreter* csi);
extern void vtkSIXMLAnimationWriterRepresentationProperty_Init(vtkClientServerInterpreter* csi);
extern void vtkSMAnimationScene_Init(vtkClientServerInterpreter* csi);
extern void vtkSMAnimationSceneGeometryWriter_Init(vtkClientServerInterpreter* csi);
extern void vtkSMAnimationSceneImageWriter_Init(vtkClientServerInterpreter* csi);
extern void vtkSMAnimationSceneProxy_Init(vtkClientServerInterpreter* csi);
extern void vtkSMAnimationSceneWriter_Init(vtkClientServerInterpreter* csi);
extern void vtkTimestepsAnimationPlayer_Init(vtkClientServerInterpreter* csi);
extern void vtkXMLPVAnimationWriter_Init(vtkClientServerInterpreter* csi);
extern void vtkPythonAnimationCue_Init(vtkClientServerInterpreter* csi);


extern "C" void VTK_WRAP_CS_EXPORT vtkPVAnimationCS_Initialize(
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
    PyImport_AppendInittab("vtkPVAnimationPython", initvtkPVAnimationPython);
    }

  csi->Load("vtkPVAnimation");
#endif

  vtkAnimationPlayer_Init(csi);
  vtkCompositeAnimationPlayer_Init(csi);
  vtkPVAnimationCue_Init(csi);
  vtkPVBooleanKeyFrame_Init(csi);
  vtkPVCameraAnimationCue_Init(csi);
  vtkPVCameraCueManipulator_Init(csi);
  vtkPVCameraKeyFrame_Init(csi);
  vtkPVCompositeKeyFrame_Init(csi);
  vtkPVCueManipulator_Init(csi);
  vtkPVExponentialKeyFrame_Init(csi);
  vtkPVKeyFrameAnimationCue_Init(csi);
  vtkPVKeyFrameAnimationCueForProxies_Init(csi);
  vtkPVKeyFrameCueManipulator_Init(csi);
  vtkPVKeyFrame_Init(csi);
  vtkPVRampKeyFrame_Init(csi);
  vtkPVRepresentationAnimationHelper_Init(csi);
  vtkPVServerSideAnimationPlayer_Init(csi);
  vtkPVSinusoidKeyFrame_Init(csi);
  vtkRealtimeAnimationPlayer_Init(csi);
  vtkSequenceAnimationPlayer_Init(csi);
  vtkSIXMLAnimationWriterRepresentationProperty_Init(csi);
  vtkSMAnimationScene_Init(csi);
  vtkSMAnimationSceneGeometryWriter_Init(csi);
  vtkSMAnimationSceneImageWriter_Init(csi);
  vtkSMAnimationSceneProxy_Init(csi);
  vtkSMAnimationSceneWriter_Init(csi);
  vtkTimestepsAnimationPlayer_Init(csi);
  vtkXMLPVAnimationWriter_Init(csi);
  vtkPythonAnimationCue_Init(csi);

}
