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
extern "C" void real_initvtkFiltersHybridPython(const char *modulename);

void initvtkFiltersHybridPython()
{
  static const char modulename[] = "vtkFiltersHybridPython";
  real_initvtkFiltersHybridPython(modulename);
}
#endif

extern void vtkBSplineTransform_Init(vtkClientServerInterpreter* csi);
extern void vtkDepthSortPolyData_Init(vtkClientServerInterpreter* csi);
extern void vtkDSPFilterDefinition_Init(vtkClientServerInterpreter* csi);
extern void vtkDSPFilterGroup_Init(vtkClientServerInterpreter* csi);
extern void vtkEarthSource_Init(vtkClientServerInterpreter* csi);
extern void vtkFacetReader_Init(vtkClientServerInterpreter* csi);
extern void vtkGreedyTerrainDecimation_Init(vtkClientServerInterpreter* csi);
extern void vtkGridTransform_Init(vtkClientServerInterpreter* csi);
extern void vtkImageToPolyDataFilter_Init(vtkClientServerInterpreter* csi);
extern void vtkImplicitModeller_Init(vtkClientServerInterpreter* csi);
extern void vtkPCAAnalysisFilter_Init(vtkClientServerInterpreter* csi);
extern void vtkPolyDataSilhouette_Init(vtkClientServerInterpreter* csi);
extern void vtkProcrustesAlignmentFilter_Init(vtkClientServerInterpreter* csi);
extern void vtkProjectedTerrainPath_Init(vtkClientServerInterpreter* csi);
extern void vtkRenderLargeImage_Init(vtkClientServerInterpreter* csi);
extern void vtkTemporalDataSetCache_Init(vtkClientServerInterpreter* csi);
extern void vtkTemporalFractal_Init(vtkClientServerInterpreter* csi);
extern void vtkTemporalInterpolator_Init(vtkClientServerInterpreter* csi);
extern void vtkTemporalShiftScale_Init(vtkClientServerInterpreter* csi);
extern void vtkTemporalSnapToTimeStep_Init(vtkClientServerInterpreter* csi);
extern void vtkTransformToGrid_Init(vtkClientServerInterpreter* csi);
extern void vtkWeightedTransformFilter_Init(vtkClientServerInterpreter* csi);


extern "C" void VTK_WRAP_CS_EXPORT vtkFiltersHybridCS_Initialize(
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
    PyImport_AppendInittab("vtkFiltersHybridPython", initvtkFiltersHybridPython);
    }

  csi->Load("vtkFiltersHybrid");
#endif

  vtkBSplineTransform_Init(csi);
  vtkDepthSortPolyData_Init(csi);
  vtkDSPFilterDefinition_Init(csi);
  vtkDSPFilterGroup_Init(csi);
  vtkEarthSource_Init(csi);
  vtkFacetReader_Init(csi);
  vtkGreedyTerrainDecimation_Init(csi);
  vtkGridTransform_Init(csi);
  vtkImageToPolyDataFilter_Init(csi);
  vtkImplicitModeller_Init(csi);
  vtkPCAAnalysisFilter_Init(csi);
  vtkPolyDataSilhouette_Init(csi);
  vtkProcrustesAlignmentFilter_Init(csi);
  vtkProjectedTerrainPath_Init(csi);
  vtkRenderLargeImage_Init(csi);
  vtkTemporalDataSetCache_Init(csi);
  vtkTemporalFractal_Init(csi);
  vtkTemporalInterpolator_Init(csi);
  vtkTemporalShiftScale_Init(csi);
  vtkTemporalSnapToTimeStep_Init(csi);
  vtkTransformToGrid_Init(csi);
  vtkWeightedTransformFilter_Init(csi);

}
