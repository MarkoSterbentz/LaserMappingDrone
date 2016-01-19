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
extern "C" void real_initvtkImagingMorphologicalPython(const char *modulename);

void initvtkImagingMorphologicalPython()
{
  static const char modulename[] = "vtkImagingMorphologicalPython";
  real_initvtkImagingMorphologicalPython(modulename);
}
#endif

extern void vtkImageConnector_Init(vtkClientServerInterpreter* csi);
extern void vtkImageContinuousDilate3D_Init(vtkClientServerInterpreter* csi);
extern void vtkImageContinuousErode3D_Init(vtkClientServerInterpreter* csi);
extern void vtkImageDilateErode3D_Init(vtkClientServerInterpreter* csi);
extern void vtkImageIslandRemoval2D_Init(vtkClientServerInterpreter* csi);
extern void vtkImageNonMaximumSuppression_Init(vtkClientServerInterpreter* csi);
extern void vtkImageOpenClose3D_Init(vtkClientServerInterpreter* csi);
extern void vtkImageSeedConnectivity_Init(vtkClientServerInterpreter* csi);
extern void vtkImageSkeleton2D_Init(vtkClientServerInterpreter* csi);
extern void vtkImageThresholdConnectivity_Init(vtkClientServerInterpreter* csi);


extern "C" void VTK_WRAP_CS_EXPORT vtkImagingMorphologicalCS_Initialize(
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
    PyImport_AppendInittab("vtkImagingMorphologicalPython", initvtkImagingMorphologicalPython);
    }

  csi->Load("vtkImagingMorphological");
#endif

  vtkImageConnector_Init(csi);
  vtkImageContinuousDilate3D_Init(csi);
  vtkImageContinuousErode3D_Init(csi);
  vtkImageDilateErode3D_Init(csi);
  vtkImageIslandRemoval2D_Init(csi);
  vtkImageNonMaximumSuppression_Init(csi);
  vtkImageOpenClose3D_Init(csi);
  vtkImageSeedConnectivity_Init(csi);
  vtkImageSkeleton2D_Init(csi);
  vtkImageThresholdConnectivity_Init(csi);

}
