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
extern "C" void real_initvtkImagingSourcesPython(const char *modulename);

void initvtkImagingSourcesPython()
{
  static const char modulename[] = "vtkImagingSourcesPython";
  real_initvtkImagingSourcesPython(modulename);
}
#endif

extern void vtkImageCanvasSource2D_Init(vtkClientServerInterpreter* csi);
extern void vtkImageEllipsoidSource_Init(vtkClientServerInterpreter* csi);
extern void vtkImageGaussianSource_Init(vtkClientServerInterpreter* csi);
extern void vtkImageGridSource_Init(vtkClientServerInterpreter* csi);
extern void vtkImageMandelbrotSource_Init(vtkClientServerInterpreter* csi);
extern void vtkImageNoiseSource_Init(vtkClientServerInterpreter* csi);
extern void vtkImageSinusoidSource_Init(vtkClientServerInterpreter* csi);


extern "C" void VTK_WRAP_CS_EXPORT vtkImagingSourcesCS_Initialize(
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
    PyImport_AppendInittab("vtkImagingSourcesPython", initvtkImagingSourcesPython);
    }

  csi->Load("vtkImagingSources");
#endif

  vtkImageCanvasSource2D_Init(csi);
  vtkImageEllipsoidSource_Init(csi);
  vtkImageGaussianSource_Init(csi);
  vtkImageGridSource_Init(csi);
  vtkImageMandelbrotSource_Init(csi);
  vtkImageNoiseSource_Init(csi);
  vtkImageSinusoidSource_Init(csi);

}
