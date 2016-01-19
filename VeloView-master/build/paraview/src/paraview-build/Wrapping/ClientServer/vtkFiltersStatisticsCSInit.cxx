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
extern "C" void real_initvtkFiltersStatisticsPython(const char *modulename);

void initvtkFiltersStatisticsPython()
{
  static const char modulename[] = "vtkFiltersStatisticsPython";
  real_initvtkFiltersStatisticsPython(modulename);
}
#endif

extern void vtkAutoCorrelativeStatistics_Init(vtkClientServerInterpreter* csi);
extern void vtkBivariateLinearTableThreshold_Init(vtkClientServerInterpreter* csi);
extern void vtkComputeQuartiles_Init(vtkClientServerInterpreter* csi);
extern void vtkContingencyStatistics_Init(vtkClientServerInterpreter* csi);
extern void vtkCorrelativeStatistics_Init(vtkClientServerInterpreter* csi);
extern void vtkDescriptiveStatistics_Init(vtkClientServerInterpreter* csi);
extern void vtkHighestDensityRegionsStatistics_Init(vtkClientServerInterpreter* csi);
extern void vtkExtractFunctionalBagPlot_Init(vtkClientServerInterpreter* csi);
extern void vtkKMeansDistanceFunctorCalculator_Init(vtkClientServerInterpreter* csi);
extern void vtkKMeansDistanceFunctor_Init(vtkClientServerInterpreter* csi);
extern void vtkKMeansStatistics_Init(vtkClientServerInterpreter* csi);
extern void vtkMultiCorrelativeStatistics_Init(vtkClientServerInterpreter* csi);
extern void vtkOrderStatistics_Init(vtkClientServerInterpreter* csi);
extern void vtkPCAStatistics_Init(vtkClientServerInterpreter* csi);
extern void vtkStatisticsAlgorithm_Init(vtkClientServerInterpreter* csi);
extern void vtkStrahlerMetric_Init(vtkClientServerInterpreter* csi);
extern void vtkStreamingStatistics_Init(vtkClientServerInterpreter* csi);


extern "C" void VTK_WRAP_CS_EXPORT vtkFiltersStatisticsCS_Initialize(
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
    PyImport_AppendInittab("vtkFiltersStatisticsPython", initvtkFiltersStatisticsPython);
    }

  csi->Load("vtkFiltersStatistics");
#endif

  vtkAutoCorrelativeStatistics_Init(csi);
  vtkBivariateLinearTableThreshold_Init(csi);
  vtkComputeQuartiles_Init(csi);
  vtkContingencyStatistics_Init(csi);
  vtkCorrelativeStatistics_Init(csi);
  vtkDescriptiveStatistics_Init(csi);
  vtkHighestDensityRegionsStatistics_Init(csi);
  vtkExtractFunctionalBagPlot_Init(csi);
  vtkKMeansDistanceFunctorCalculator_Init(csi);
  vtkKMeansDistanceFunctor_Init(csi);
  vtkKMeansStatistics_Init(csi);
  vtkMultiCorrelativeStatistics_Init(csi);
  vtkOrderStatistics_Init(csi);
  vtkPCAStatistics_Init(csi);
  vtkStatisticsAlgorithm_Init(csi);
  vtkStrahlerMetric_Init(csi);
  vtkStreamingStatistics_Init(csi);

}
