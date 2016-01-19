/* #undef PARAVIEW_USE_UNIFIED_BINDINGS */
#define NO_PYTHON_BINDINGS_AVAILABLE
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
extern "C" void real_initStreamingParticlesPython(const char *modulename);

void initStreamingParticlesPython()
{
  static const char modulename[] = "StreamingParticlesPython";
  real_initStreamingParticlesPython(modulename);
}
#endif

extern void vtkStreamingParticlesRepresentation_Init(vtkClientServerInterpreter* csi);
extern void vtkStreamingParticlesRepresentation_Init(vtkClientServerInterpreter* csi);
extern void vtkStreamingParticlesPriorityQueue_Init(vtkClientServerInterpreter* csi);
extern void vtkStreamingParticlesPriorityQueue_Init(vtkClientServerInterpreter* csi);
extern void vtkPVRandomPointsStreamingSource_Init(vtkClientServerInterpreter* csi);
extern void vtkPVRandomPointsStreamingSource_Init(vtkClientServerInterpreter* csi);


extern "C" void VTK_WRAP_CS_EXPORT StreamingParticles_Initialize(
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
    PyImport_AppendInittab("StreamingParticlesPython", initStreamingParticlesPython);
    }

  csi->Load("StreamingParticles");
#endif

  vtkStreamingParticlesRepresentation_Init(csi);
  vtkStreamingParticlesRepresentation_Init(csi);
  vtkStreamingParticlesPriorityQueue_Init(csi);
  vtkStreamingParticlesPriorityQueue_Init(csi);
  vtkPVRandomPointsStreamingSource_Init(csi);
  vtkPVRandomPointsStreamingSource_Init(csi);

}
