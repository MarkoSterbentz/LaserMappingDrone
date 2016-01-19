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
extern "C" void real_initvtkFiltersGeneralPython(const char *modulename);

void initvtkFiltersGeneralPython()
{
  static const char modulename[] = "vtkFiltersGeneralPython";
  real_initvtkFiltersGeneralPython(modulename);
}
#endif

extern void vtkAnnotationLink_Init(vtkClientServerInterpreter* csi);
extern void vtkAppendPoints_Init(vtkClientServerInterpreter* csi);
extern void vtkApproximatingSubdivisionFilter_Init(vtkClientServerInterpreter* csi);
extern void vtkAreaContourSpectrumFilter_Init(vtkClientServerInterpreter* csi);
extern void vtkAxes_Init(vtkClientServerInterpreter* csi);
extern void vtkBlankStructuredGrid_Init(vtkClientServerInterpreter* csi);
extern void vtkBlankStructuredGridWithImage_Init(vtkClientServerInterpreter* csi);
extern void vtkBlockIdScalars_Init(vtkClientServerInterpreter* csi);
extern void vtkBoxClipDataSet_Init(vtkClientServerInterpreter* csi);
extern void vtkBrownianPoints_Init(vtkClientServerInterpreter* csi);
extern void vtkCellCenters_Init(vtkClientServerInterpreter* csi);
extern void vtkCellDerivatives_Init(vtkClientServerInterpreter* csi);
extern void vtkClipClosedSurface_Init(vtkClientServerInterpreter* csi);
extern void vtkClipConvexPolyData_Init(vtkClientServerInterpreter* csi);
extern void vtkClipDataSet_Init(vtkClientServerInterpreter* csi);
extern void vtkClipVolume_Init(vtkClientServerInterpreter* csi);
extern void vtkCoincidentPoints_Init(vtkClientServerInterpreter* csi);
extern void vtkContourTriangulator_Init(vtkClientServerInterpreter* csi);
extern void vtkCursor2D_Init(vtkClientServerInterpreter* csi);
extern void vtkCursor3D_Init(vtkClientServerInterpreter* csi);
extern void vtkCurvatures_Init(vtkClientServerInterpreter* csi);
extern void vtkDataSetGradient_Init(vtkClientServerInterpreter* csi);
extern void vtkDataSetGradientPrecompute_Init(vtkClientServerInterpreter* csi);
extern void vtkDataSetTriangleFilter_Init(vtkClientServerInterpreter* csi);
extern void vtkDeformPointSet_Init(vtkClientServerInterpreter* csi);
extern void vtkDensifyPolyData_Init(vtkClientServerInterpreter* csi);
extern void vtkDicer_Init(vtkClientServerInterpreter* csi);
extern void vtkDiscreteMarchingCubes_Init(vtkClientServerInterpreter* csi);
extern void vtkEdgePoints_Init(vtkClientServerInterpreter* csi);
extern void vtkGradientFilter_Init(vtkClientServerInterpreter* csi);
extern void vtkGraphLayoutFilter_Init(vtkClientServerInterpreter* csi);
extern void vtkGraphToPoints_Init(vtkClientServerInterpreter* csi);
extern void vtkHierarchicalDataLevelFilter_Init(vtkClientServerInterpreter* csi);
extern void vtkHyperStreamline_Init(vtkClientServerInterpreter* csi);
extern void vtkIconGlyphFilter_Init(vtkClientServerInterpreter* csi);
extern void vtkImageMarchingCubes_Init(vtkClientServerInterpreter* csi);
extern void vtkInterpolateDataSetAttributes_Init(vtkClientServerInterpreter* csi);
extern void vtkInterpolatingSubdivisionFilter_Init(vtkClientServerInterpreter* csi);
extern void vtkLevelIdScalars_Init(vtkClientServerInterpreter* csi);
extern void vtkLinkEdgels_Init(vtkClientServerInterpreter* csi);
extern void vtkMergeCells_Init(vtkClientServerInterpreter* csi);
extern void vtkMultiBlockDataGroupFilter_Init(vtkClientServerInterpreter* csi);
extern void vtkMultiBlockMergeFilter_Init(vtkClientServerInterpreter* csi);
extern void vtkMultiThreshold_Init(vtkClientServerInterpreter* csi);
extern void vtkOBBDicer_Init(vtkClientServerInterpreter* csi);
extern void vtkOBBTree_Init(vtkClientServerInterpreter* csi);
extern void vtkPassThrough_Init(vtkClientServerInterpreter* csi);
extern void vtkPolyDataStreamer_Init(vtkClientServerInterpreter* csi);
extern void vtkPolyDataToReebGraphFilter_Init(vtkClientServerInterpreter* csi);
extern void vtkProbePolyhedron_Init(vtkClientServerInterpreter* csi);
extern void vtkQuadraturePointInterpolator_Init(vtkClientServerInterpreter* csi);
extern void vtkQuadraturePointsGenerator_Init(vtkClientServerInterpreter* csi);
extern void vtkQuadratureSchemeDictionaryGenerator_Init(vtkClientServerInterpreter* csi);
extern void vtkQuantizePolyDataPoints_Init(vtkClientServerInterpreter* csi);
extern void vtkRandomAttributeGenerator_Init(vtkClientServerInterpreter* csi);
extern void vtkRectilinearGridClip_Init(vtkClientServerInterpreter* csi);
extern void vtkRectilinearGridToTetrahedra_Init(vtkClientServerInterpreter* csi);
extern void vtkRecursiveDividingCubes_Init(vtkClientServerInterpreter* csi);
extern void vtkReflectionFilter_Init(vtkClientServerInterpreter* csi);
extern void vtkRotationFilter_Init(vtkClientServerInterpreter* csi);
extern void vtkShrinkFilter_Init(vtkClientServerInterpreter* csi);
extern void vtkShrinkPolyData_Init(vtkClientServerInterpreter* csi);
extern void vtkSpatialRepresentationFilter_Init(vtkClientServerInterpreter* csi);
extern void vtkSplineFilter_Init(vtkClientServerInterpreter* csi);
extern void vtkSplitField_Init(vtkClientServerInterpreter* csi);
extern void vtkStructuredGridClip_Init(vtkClientServerInterpreter* csi);
extern void vtkSubPixelPositionEdgels_Init(vtkClientServerInterpreter* csi);
extern void vtkTableBasedClipDataSet_Init(vtkClientServerInterpreter* csi);
extern void vtkTableToPolyData_Init(vtkClientServerInterpreter* csi);
extern void vtkTableToStructuredGrid_Init(vtkClientServerInterpreter* csi);
extern void vtkTemporalPathLineFilter_Init(vtkClientServerInterpreter* csi);
extern void vtkTemporalStatistics_Init(vtkClientServerInterpreter* csi);
extern void vtkTessellatorFilter_Init(vtkClientServerInterpreter* csi);
extern void vtkTimeSourceExample_Init(vtkClientServerInterpreter* csi);
extern void vtkTransformFilter_Init(vtkClientServerInterpreter* csi);
extern void vtkTransformPolyDataFilter_Init(vtkClientServerInterpreter* csi);
extern void vtkUncertaintyTubeFilter_Init(vtkClientServerInterpreter* csi);
extern void vtkVertexGlyphFilter_Init(vtkClientServerInterpreter* csi);
extern void vtkVolumeContourSpectrumFilter_Init(vtkClientServerInterpreter* csi);
extern void vtkVoxelContoursToSurfaceFilter_Init(vtkClientServerInterpreter* csi);
extern void vtkWarpLens_Init(vtkClientServerInterpreter* csi);
extern void vtkWarpScalar_Init(vtkClientServerInterpreter* csi);
extern void vtkWarpTo_Init(vtkClientServerInterpreter* csi);
extern void vtkWarpVector_Init(vtkClientServerInterpreter* csi);
extern void vtkYoungsMaterialInterface_Init(vtkClientServerInterpreter* csi);
extern void vtkMarchingContourFilter_Init(vtkClientServerInterpreter* csi);
extern void vtkRectilinearGridToPointSet_Init(vtkClientServerInterpreter* csi);
extern void vtkGraphWeightEuclideanDistanceFilter_Init(vtkClientServerInterpreter* csi);
extern void vtkGraphWeightFilter_Init(vtkClientServerInterpreter* csi);
extern void vtkImageDataToPointSet_Init(vtkClientServerInterpreter* csi);
extern void vtkIntersectionPolyDataFilter_Init(vtkClientServerInterpreter* csi);
extern void vtkBooleanOperationPolyDataFilter_Init(vtkClientServerInterpreter* csi);
extern void vtkDistancePolyDataFilter_Init(vtkClientServerInterpreter* csi);
extern void vtkOverlappingAMRLevelIdScalars_Init(vtkClientServerInterpreter* csi);
extern void vtkExtractArray_Init(vtkClientServerInterpreter* csi);
extern void vtkMatricizeArray_Init(vtkClientServerInterpreter* csi);
extern void vtkNormalizeMatrixVectors_Init(vtkClientServerInterpreter* csi);
extern void vtkPassArrays_Init(vtkClientServerInterpreter* csi);
extern void vtkSplitColumnComponents_Init(vtkClientServerInterpreter* csi);
extern void vtkCellTreeLocator_Init(vtkClientServerInterpreter* csi);


extern "C" void VTK_WRAP_CS_EXPORT vtkFiltersGeneralCS_Initialize(
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
    PyImport_AppendInittab("vtkFiltersGeneralPython", initvtkFiltersGeneralPython);
    }

  csi->Load("vtkFiltersGeneral");
#endif

  vtkAnnotationLink_Init(csi);
  vtkAppendPoints_Init(csi);
  vtkApproximatingSubdivisionFilter_Init(csi);
  vtkAreaContourSpectrumFilter_Init(csi);
  vtkAxes_Init(csi);
  vtkBlankStructuredGrid_Init(csi);
  vtkBlankStructuredGridWithImage_Init(csi);
  vtkBlockIdScalars_Init(csi);
  vtkBoxClipDataSet_Init(csi);
  vtkBrownianPoints_Init(csi);
  vtkCellCenters_Init(csi);
  vtkCellDerivatives_Init(csi);
  vtkClipClosedSurface_Init(csi);
  vtkClipConvexPolyData_Init(csi);
  vtkClipDataSet_Init(csi);
  vtkClipVolume_Init(csi);
  vtkCoincidentPoints_Init(csi);
  vtkContourTriangulator_Init(csi);
  vtkCursor2D_Init(csi);
  vtkCursor3D_Init(csi);
  vtkCurvatures_Init(csi);
  vtkDataSetGradient_Init(csi);
  vtkDataSetGradientPrecompute_Init(csi);
  vtkDataSetTriangleFilter_Init(csi);
  vtkDeformPointSet_Init(csi);
  vtkDensifyPolyData_Init(csi);
  vtkDicer_Init(csi);
  vtkDiscreteMarchingCubes_Init(csi);
  vtkEdgePoints_Init(csi);
  vtkGradientFilter_Init(csi);
  vtkGraphLayoutFilter_Init(csi);
  vtkGraphToPoints_Init(csi);
  vtkHierarchicalDataLevelFilter_Init(csi);
  vtkHyperStreamline_Init(csi);
  vtkIconGlyphFilter_Init(csi);
  vtkImageMarchingCubes_Init(csi);
  vtkInterpolateDataSetAttributes_Init(csi);
  vtkInterpolatingSubdivisionFilter_Init(csi);
  vtkLevelIdScalars_Init(csi);
  vtkLinkEdgels_Init(csi);
  vtkMergeCells_Init(csi);
  vtkMultiBlockDataGroupFilter_Init(csi);
  vtkMultiBlockMergeFilter_Init(csi);
  vtkMultiThreshold_Init(csi);
  vtkOBBDicer_Init(csi);
  vtkOBBTree_Init(csi);
  vtkPassThrough_Init(csi);
  vtkPolyDataStreamer_Init(csi);
  vtkPolyDataToReebGraphFilter_Init(csi);
  vtkProbePolyhedron_Init(csi);
  vtkQuadraturePointInterpolator_Init(csi);
  vtkQuadraturePointsGenerator_Init(csi);
  vtkQuadratureSchemeDictionaryGenerator_Init(csi);
  vtkQuantizePolyDataPoints_Init(csi);
  vtkRandomAttributeGenerator_Init(csi);
  vtkRectilinearGridClip_Init(csi);
  vtkRectilinearGridToTetrahedra_Init(csi);
  vtkRecursiveDividingCubes_Init(csi);
  vtkReflectionFilter_Init(csi);
  vtkRotationFilter_Init(csi);
  vtkShrinkFilter_Init(csi);
  vtkShrinkPolyData_Init(csi);
  vtkSpatialRepresentationFilter_Init(csi);
  vtkSplineFilter_Init(csi);
  vtkSplitField_Init(csi);
  vtkStructuredGridClip_Init(csi);
  vtkSubPixelPositionEdgels_Init(csi);
  vtkTableBasedClipDataSet_Init(csi);
  vtkTableToPolyData_Init(csi);
  vtkTableToStructuredGrid_Init(csi);
  vtkTemporalPathLineFilter_Init(csi);
  vtkTemporalStatistics_Init(csi);
  vtkTessellatorFilter_Init(csi);
  vtkTimeSourceExample_Init(csi);
  vtkTransformFilter_Init(csi);
  vtkTransformPolyDataFilter_Init(csi);
  vtkUncertaintyTubeFilter_Init(csi);
  vtkVertexGlyphFilter_Init(csi);
  vtkVolumeContourSpectrumFilter_Init(csi);
  vtkVoxelContoursToSurfaceFilter_Init(csi);
  vtkWarpLens_Init(csi);
  vtkWarpScalar_Init(csi);
  vtkWarpTo_Init(csi);
  vtkWarpVector_Init(csi);
  vtkYoungsMaterialInterface_Init(csi);
  vtkMarchingContourFilter_Init(csi);
  vtkRectilinearGridToPointSet_Init(csi);
  vtkGraphWeightEuclideanDistanceFilter_Init(csi);
  vtkGraphWeightFilter_Init(csi);
  vtkImageDataToPointSet_Init(csi);
  vtkIntersectionPolyDataFilter_Init(csi);
  vtkBooleanOperationPolyDataFilter_Init(csi);
  vtkDistancePolyDataFilter_Init(csi);
  vtkOverlappingAMRLevelIdScalars_Init(csi);
  vtkExtractArray_Init(csi);
  vtkMatricizeArray_Init(csi);
  vtkNormalizeMatrixVectors_Init(csi);
  vtkPassArrays_Init(csi);
  vtkSplitColumnComponents_Init(csi);
  vtkCellTreeLocator_Init(csi);

}
