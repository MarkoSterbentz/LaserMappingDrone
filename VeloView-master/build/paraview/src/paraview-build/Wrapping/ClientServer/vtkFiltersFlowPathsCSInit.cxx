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
extern "C" void real_initvtkFiltersFlowPathsPython(const char *modulename);

void initvtkFiltersFlowPathsPython()
{
  static const char modulename[] = "vtkFiltersFlowPathsPython";
  real_initvtkFiltersFlowPathsPython(modulename);
}
#endif

extern void vtkAbstractInterpolatedVelocityField_Init(vtkClientServerInterpreter* csi);
extern void vtkAMRInterpolatedVelocityField_Init(vtkClientServerInterpreter* csi);
extern void vtkCompositeInterpolatedVelocityField_Init(vtkClientServerInterpreter* csi);
extern void vtkDashedStreamLine_Init(vtkClientServerInterpreter* csi);
extern void vtkInterpolatedVelocityField_Init(vtkClientServerInterpreter* csi);
extern void vtkStreamer_Init(vtkClientServerInterpreter* csi);
extern void vtkStreamLine_Init(vtkClientServerInterpreter* csi);
extern void vtkStreamPoints_Init(vtkClientServerInterpreter* csi);
extern void vtkStreamTracer_Init(vtkClientServerInterpreter* csi);
extern void vtkModifiedBSPTree_Init(vtkClientServerInterpreter* csi);
extern void vtkCellLocatorInterpolatedVelocityField_Init(vtkClientServerInterpreter* csi);
extern void vtkTemporalStreamTracer_Init(vtkClientServerInterpreter* csi);
extern void vtkParticleTracerBase_Init(vtkClientServerInterpreter* csi);
extern void vtkParticleTracer_Init(vtkClientServerInterpreter* csi);
extern void vtkStreaklineFilter_Init(vtkClientServerInterpreter* csi);
extern void vtkParticlePathFilter_Init(vtkClientServerInterpreter* csi);
extern void vtkTemporalInterpolatedVelocityField_Init(vtkClientServerInterpreter* csi);
extern void vtkCachingInterpolatedVelocityField_Init(vtkClientServerInterpreter* csi);


extern "C" void VTK_WRAP_CS_EXPORT vtkFiltersFlowPathsCS_Initialize(
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
    PyImport_AppendInittab("vtkFiltersFlowPathsPython", initvtkFiltersFlowPathsPython);
    }

  csi->Load("vtkFiltersFlowPaths");
#endif

  vtkAbstractInterpolatedVelocityField_Init(csi);
  vtkAMRInterpolatedVelocityField_Init(csi);
  vtkCompositeInterpolatedVelocityField_Init(csi);
  vtkDashedStreamLine_Init(csi);
  vtkInterpolatedVelocityField_Init(csi);
  vtkStreamer_Init(csi);
  vtkStreamLine_Init(csi);
  vtkStreamPoints_Init(csi);
  vtkStreamTracer_Init(csi);
  vtkModifiedBSPTree_Init(csi);
  vtkCellLocatorInterpolatedVelocityField_Init(csi);
  vtkTemporalStreamTracer_Init(csi);
  vtkParticleTracerBase_Init(csi);
  vtkParticleTracer_Init(csi);
  vtkStreaklineFilter_Init(csi);
  vtkParticlePathFilter_Init(csi);
  vtkTemporalInterpolatedVelocityField_Init(csi);
  vtkCachingInterpolatedVelocityField_Init(csi);

}
