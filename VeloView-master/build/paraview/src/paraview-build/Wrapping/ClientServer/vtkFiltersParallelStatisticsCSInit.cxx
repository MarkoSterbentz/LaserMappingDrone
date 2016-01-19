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
extern "C" void real_initvtkFiltersParallelStatisticsPython(const char *modulename);

void initvtkFiltersParallelStatisticsPython()
{
  static const char modulename[] = "vtkFiltersParallelStatisticsPython";
  real_initvtkFiltersParallelStatisticsPython(modulename);
}
#endif

extern void vtkPAutoCorrelativeStatistics_Init(vtkClientServerInterpreter* csi);
extern void vtkPContingencyStatistics_Init(vtkClientServerInterpreter* csi);
extern void vtkPCorrelativeStatistics_Init(vtkClientServerInterpreter* csi);
extern void vtkPDescriptiveStatistics_Init(vtkClientServerInterpreter* csi);
extern void vtkPKMeansStatistics_Init(vtkClientServerInterpreter* csi);
extern void vtkPMultiCorrelativeStatistics_Init(vtkClientServerInterpreter* csi);
extern void vtkPOrderStatistics_Init(vtkClientServerInterpreter* csi);
extern void vtkPPCAStatistics_Init(vtkClientServerInterpreter* csi);
extern void vtkPBivariateLinearTableThreshold_Init(vtkClientServerInterpreter* csi);


extern "C" void VTK_WRAP_CS_EXPORT vtkFiltersParallelStatisticsCS_Initialize(
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
    PyImport_AppendInittab("vtkFiltersParallelStatisticsPython", initvtkFiltersParallelStatisticsPython);
    }

  csi->Load("vtkFiltersParallelStatistics");
#endif

  vtkPAutoCorrelativeStatistics_Init(csi);
  vtkPContingencyStatistics_Init(csi);
  vtkPCorrelativeStatistics_Init(csi);
  vtkPDescriptiveStatistics_Init(csi);
  vtkPKMeansStatistics_Init(csi);
  vtkPMultiCorrelativeStatistics_Init(csi);
  vtkPOrderStatistics_Init(csi);
  vtkPPCAStatistics_Init(csi);
  vtkPBivariateLinearTableThreshold_Init(csi);

}
