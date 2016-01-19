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
extern "C" void real_initvtkFiltersCorePython(const char *modulename);

void initvtkFiltersCorePython()
{
  static const char modulename[] = "vtkFiltersCorePython";
  real_initvtkFiltersCorePython(modulename);
}
#endif

extern void vtkAppendFilter_Init(vtkClientServerInterpreter* csi);
extern void vtkAppendPolyData_Init(vtkClientServerInterpreter* csi);
extern void vtkAppendSelection_Init(vtkClientServerInterpreter* csi);
extern void vtkArrayCalculator_Init(vtkClientServerInterpreter* csi);
extern void vtkAssignAttribute_Init(vtkClientServerInterpreter* csi);
extern void vtkAttributeDataToFieldDataFilter_Init(vtkClientServerInterpreter* csi);
extern void vtkCellDataToPointData_Init(vtkClientServerInterpreter* csi);
extern void vtkCleanPolyData_Init(vtkClientServerInterpreter* csi);
extern void vtkClipPolyData_Init(vtkClientServerInterpreter* csi);
extern void vtkCompositeDataProbeFilter_Init(vtkClientServerInterpreter* csi);
extern void vtkConnectivityFilter_Init(vtkClientServerInterpreter* csi);
extern void vtkContourFilter_Init(vtkClientServerInterpreter* csi);
extern void vtkContourGrid_Init(vtkClientServerInterpreter* csi);
extern void vtkDataObjectGenerator_Init(vtkClientServerInterpreter* csi);
extern void vtkDataObjectToDataSetFilter_Init(vtkClientServerInterpreter* csi);
extern void vtkDataSetEdgeSubdivisionCriterion_Init(vtkClientServerInterpreter* csi);
extern void vtkDataSetToDataObjectFilter_Init(vtkClientServerInterpreter* csi);
extern void vtkDecimatePolylineFilter_Init(vtkClientServerInterpreter* csi);
extern void vtkDecimatePro_Init(vtkClientServerInterpreter* csi);
extern void vtkDelaunay2D_Init(vtkClientServerInterpreter* csi);
extern void vtkDelaunay3D_Init(vtkClientServerInterpreter* csi);
extern void vtkElevationFilter_Init(vtkClientServerInterpreter* csi);
extern void vtkExecutionTimer_Init(vtkClientServerInterpreter* csi);
extern void vtkFeatureEdges_Init(vtkClientServerInterpreter* csi);
extern void vtkFieldDataToAttributeDataFilter_Init(vtkClientServerInterpreter* csi);
extern void vtkGlyph2D_Init(vtkClientServerInterpreter* csi);
extern void vtkGlyph3D_Init(vtkClientServerInterpreter* csi);
extern void vtkHedgeHog_Init(vtkClientServerInterpreter* csi);
extern void vtkHull_Init(vtkClientServerInterpreter* csi);
extern void vtkIdFilter_Init(vtkClientServerInterpreter* csi);
extern void vtkMarchingCubes_Init(vtkClientServerInterpreter* csi);
extern void vtkMarchingSquares_Init(vtkClientServerInterpreter* csi);
extern void vtkMaskFields_Init(vtkClientServerInterpreter* csi);
extern void vtkMaskPoints_Init(vtkClientServerInterpreter* csi);
extern void vtkMaskPolyData_Init(vtkClientServerInterpreter* csi);
extern void vtkMassProperties_Init(vtkClientServerInterpreter* csi);
extern void vtkMergeDataObjectFilter_Init(vtkClientServerInterpreter* csi);
extern void vtkMergeFields_Init(vtkClientServerInterpreter* csi);
extern void vtkMergeFilter_Init(vtkClientServerInterpreter* csi);
extern void vtkPointDataToCellData_Init(vtkClientServerInterpreter* csi);
extern void vtkPolyDataConnectivityFilter_Init(vtkClientServerInterpreter* csi);
extern void vtkPolyDataNormals_Init(vtkClientServerInterpreter* csi);
extern void vtkProbeFilter_Init(vtkClientServerInterpreter* csi);
extern void vtkQuadricClustering_Init(vtkClientServerInterpreter* csi);
extern void vtkQuadricDecimation_Init(vtkClientServerInterpreter* csi);
extern void vtkRearrangeFields_Init(vtkClientServerInterpreter* csi);
extern void vtkReverseSense_Init(vtkClientServerInterpreter* csi);
extern void vtkSimpleElevationFilter_Init(vtkClientServerInterpreter* csi);
extern void vtkSmoothPolyDataFilter_Init(vtkClientServerInterpreter* csi);
extern void vtkStripper_Init(vtkClientServerInterpreter* csi);
extern void vtkStructuredGridOutlineFilter_Init(vtkClientServerInterpreter* csi);
extern void vtkSynchronizedTemplates2D_Init(vtkClientServerInterpreter* csi);
extern void vtkSynchronizedTemplates3D_Init(vtkClientServerInterpreter* csi);
extern void vtkSynchronizedTemplatesCutter3D_Init(vtkClientServerInterpreter* csi);
extern void vtkTensorGlyph_Init(vtkClientServerInterpreter* csi);
extern void vtkThreshold_Init(vtkClientServerInterpreter* csi);
extern void vtkThresholdPoints_Init(vtkClientServerInterpreter* csi);
extern void vtkTransposeTable_Init(vtkClientServerInterpreter* csi);
extern void vtkTriangleFilter_Init(vtkClientServerInterpreter* csi);
extern void vtkTubeFilter_Init(vtkClientServerInterpreter* csi);
extern void vtkVectorDot_Init(vtkClientServerInterpreter* csi);
extern void vtkVectorNorm_Init(vtkClientServerInterpreter* csi);
extern void vtkWindowedSincPolyDataFilter_Init(vtkClientServerInterpreter* csi);
extern void vtkCutter_Init(vtkClientServerInterpreter* csi);
extern void vtkCompositeCutter_Init(vtkClientServerInterpreter* csi);
extern void vtkGridSynchronizedTemplates3D_Init(vtkClientServerInterpreter* csi);
extern void vtkRectilinearSynchronizedTemplates_Init(vtkClientServerInterpreter* csi);
extern void vtkEdgeSubdivisionCriterion_Init(vtkClientServerInterpreter* csi);
extern void vtkStreamingTessellator_Init(vtkClientServerInterpreter* csi);
extern void vtkImplicitPolyDataDistance_Init(vtkClientServerInterpreter* csi);
extern void vtkStreamerBase_Init(vtkClientServerInterpreter* csi);
extern void vtkCenterOfMass_Init(vtkClientServerInterpreter* csi);
extern void vtkGhostArray_Init(vtkClientServerInterpreter* csi);
extern void vtkImageAppend_Init(vtkClientServerInterpreter* csi);
extern void vtkStructuredGridAppend_Init(vtkClientServerInterpreter* csi);
extern void vtkAppendCompositeDataLeaves_Init(vtkClientServerInterpreter* csi);


extern "C" void VTK_WRAP_CS_EXPORT vtkFiltersCoreCS_Initialize(
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
    PyImport_AppendInittab("vtkFiltersCorePython", initvtkFiltersCorePython);
    }

  csi->Load("vtkFiltersCore");
#endif

  vtkAppendFilter_Init(csi);
  vtkAppendPolyData_Init(csi);
  vtkAppendSelection_Init(csi);
  vtkArrayCalculator_Init(csi);
  vtkAssignAttribute_Init(csi);
  vtkAttributeDataToFieldDataFilter_Init(csi);
  vtkCellDataToPointData_Init(csi);
  vtkCleanPolyData_Init(csi);
  vtkClipPolyData_Init(csi);
  vtkCompositeDataProbeFilter_Init(csi);
  vtkConnectivityFilter_Init(csi);
  vtkContourFilter_Init(csi);
  vtkContourGrid_Init(csi);
  vtkDataObjectGenerator_Init(csi);
  vtkDataObjectToDataSetFilter_Init(csi);
  vtkDataSetEdgeSubdivisionCriterion_Init(csi);
  vtkDataSetToDataObjectFilter_Init(csi);
  vtkDecimatePolylineFilter_Init(csi);
  vtkDecimatePro_Init(csi);
  vtkDelaunay2D_Init(csi);
  vtkDelaunay3D_Init(csi);
  vtkElevationFilter_Init(csi);
  vtkExecutionTimer_Init(csi);
  vtkFeatureEdges_Init(csi);
  vtkFieldDataToAttributeDataFilter_Init(csi);
  vtkGlyph2D_Init(csi);
  vtkGlyph3D_Init(csi);
  vtkHedgeHog_Init(csi);
  vtkHull_Init(csi);
  vtkIdFilter_Init(csi);
  vtkMarchingCubes_Init(csi);
  vtkMarchingSquares_Init(csi);
  vtkMaskFields_Init(csi);
  vtkMaskPoints_Init(csi);
  vtkMaskPolyData_Init(csi);
  vtkMassProperties_Init(csi);
  vtkMergeDataObjectFilter_Init(csi);
  vtkMergeFields_Init(csi);
  vtkMergeFilter_Init(csi);
  vtkPointDataToCellData_Init(csi);
  vtkPolyDataConnectivityFilter_Init(csi);
  vtkPolyDataNormals_Init(csi);
  vtkProbeFilter_Init(csi);
  vtkQuadricClustering_Init(csi);
  vtkQuadricDecimation_Init(csi);
  vtkRearrangeFields_Init(csi);
  vtkReverseSense_Init(csi);
  vtkSimpleElevationFilter_Init(csi);
  vtkSmoothPolyDataFilter_Init(csi);
  vtkStripper_Init(csi);
  vtkStructuredGridOutlineFilter_Init(csi);
  vtkSynchronizedTemplates2D_Init(csi);
  vtkSynchronizedTemplates3D_Init(csi);
  vtkSynchronizedTemplatesCutter3D_Init(csi);
  vtkTensorGlyph_Init(csi);
  vtkThreshold_Init(csi);
  vtkThresholdPoints_Init(csi);
  vtkTransposeTable_Init(csi);
  vtkTriangleFilter_Init(csi);
  vtkTubeFilter_Init(csi);
  vtkVectorDot_Init(csi);
  vtkVectorNorm_Init(csi);
  vtkWindowedSincPolyDataFilter_Init(csi);
  vtkCutter_Init(csi);
  vtkCompositeCutter_Init(csi);
  vtkGridSynchronizedTemplates3D_Init(csi);
  vtkRectilinearSynchronizedTemplates_Init(csi);
  vtkEdgeSubdivisionCriterion_Init(csi);
  vtkStreamingTessellator_Init(csi);
  vtkImplicitPolyDataDistance_Init(csi);
  vtkStreamerBase_Init(csi);
  vtkCenterOfMass_Init(csi);
  vtkGhostArray_Init(csi);
  vtkImageAppend_Init(csi);
  vtkStructuredGridAppend_Init(csi);
  vtkAppendCompositeDataLeaves_Init(csi);

}
