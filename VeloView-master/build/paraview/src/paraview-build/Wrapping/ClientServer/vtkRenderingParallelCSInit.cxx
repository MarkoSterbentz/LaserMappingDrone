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
extern "C" void real_initvtkRenderingParallelPython(const char *modulename);

void initvtkRenderingParallelPython()
{
  static const char modulename[] = "vtkRenderingParallelPython";
  real_initvtkRenderingParallelPython(modulename);
}
#endif

extern void vtkClientServerCompositePass_Init(vtkClientServerInterpreter* csi);
extern void vtkClientServerSynchronizedRenderers_Init(vtkClientServerInterpreter* csi);
extern void vtkCompositedSynchronizedRenderers_Init(vtkClientServerInterpreter* csi);
extern void vtkCompositer_Init(vtkClientServerInterpreter* csi);
extern void vtkCompositeRenderManager_Init(vtkClientServerInterpreter* csi);
extern void vtkCompressCompositer_Init(vtkClientServerInterpreter* csi);
extern void vtkParallelRenderManager_Init(vtkClientServerInterpreter* csi);
extern void vtkPHardwareSelector_Init(vtkClientServerInterpreter* csi);
extern void vtkSynchronizedRenderers_Init(vtkClientServerInterpreter* csi);
extern void vtkSynchronizedRenderWindows_Init(vtkClientServerInterpreter* csi);
extern void vtkTreeCompositer_Init(vtkClientServerInterpreter* csi);
extern void vtkImageRenderManager_Init(vtkClientServerInterpreter* csi);


extern "C" void VTK_WRAP_CS_EXPORT vtkRenderingParallelCS_Initialize(
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
    PyImport_AppendInittab("vtkRenderingParallelPython", initvtkRenderingParallelPython);
    }

  csi->Load("vtkRenderingParallel");
#endif

  vtkClientServerCompositePass_Init(csi);
  vtkClientServerSynchronizedRenderers_Init(csi);
  vtkCompositedSynchronizedRenderers_Init(csi);
  vtkCompositer_Init(csi);
  vtkCompositeRenderManager_Init(csi);
  vtkCompressCompositer_Init(csi);
  vtkParallelRenderManager_Init(csi);
  vtkPHardwareSelector_Init(csi);
  vtkSynchronizedRenderers_Init(csi);
  vtkSynchronizedRenderWindows_Init(csi);
  vtkTreeCompositer_Init(csi);
  vtkImageRenderManager_Init(csi);

}
