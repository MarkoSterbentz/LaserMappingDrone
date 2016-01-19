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
extern "C" void real_initvtkPVClientServerCoreRenderingPython(const char *modulename);

void initvtkPVClientServerCoreRenderingPython()
{
  static const char modulename[] = "vtkPVClientServerCoreRenderingPython";
  real_initvtkPVClientServerCoreRenderingPython(modulename);
}
#endif

extern void vtk3DWidgetRepresentation_Init(vtkClientServerInterpreter* csi);
extern void vtkAMROutlineRepresentation_Init(vtkClientServerInterpreter* csi);
extern void vtkAMRStreamingPriorityQueue_Init(vtkClientServerInterpreter* csi);
extern void vtkCaveSynchronizedRenderers_Init(vtkClientServerInterpreter* csi);
extern void vtkChartRepresentation_Init(vtkClientServerInterpreter* csi);
extern void vtkChartSelectionRepresentation_Init(vtkClientServerInterpreter* csi);
extern void vtkChartWarning_Init(vtkClientServerInterpreter* csi);
extern void vtkClientServerMoveData_Init(vtkClientServerInterpreter* csi);
extern void vtkCompositeRepresentation_Init(vtkClientServerInterpreter* csi);
extern void vtkCubeAxesRepresentation_Init(vtkClientServerInterpreter* csi);
extern void vtkDataLabelRepresentation_Init(vtkClientServerInterpreter* csi);
extern void vtkGeometryRepresentation_Init(vtkClientServerInterpreter* csi);
extern void vtkGeometryRepresentationWithFaces_Init(vtkClientServerInterpreter* csi);
extern void vtkGeometrySliceRepresentation_Init(vtkClientServerInterpreter* csi);
extern void vtkGlyph3DRepresentation_Init(vtkClientServerInterpreter* csi);
extern void vtkImageSliceRepresentation_Init(vtkClientServerInterpreter* csi);
extern void vtkImageVolumeRepresentation_Init(vtkClientServerInterpreter* csi);
extern void vtkMoleculeRepresentation_Init(vtkClientServerInterpreter* csi);
extern void vtkMPIMoveData_Init(vtkClientServerInterpreter* csi);
extern void vtkOutlineRepresentation_Init(vtkClientServerInterpreter* csi);
extern void vtkPVBagChartRepresentation_Init(vtkClientServerInterpreter* csi);
extern void vtkPVBoxChartRepresentation_Init(vtkClientServerInterpreter* csi);
extern void vtkPVCacheKeeper_Init(vtkClientServerInterpreter* csi);
extern void vtkPVCacheKeeperPipeline_Init(vtkClientServerInterpreter* csi);
extern void vtkPVCacheSizeInformation_Init(vtkClientServerInterpreter* csi);
extern void vtkPVClientServerSynchronizedRenderers_Init(vtkClientServerInterpreter* csi);
extern void vtkPVCompositeOrthographicSliceRepresentation_Init(vtkClientServerInterpreter* csi);
extern void vtkPVCompositeRepresentation_Init(vtkClientServerInterpreter* csi);
extern void vtkPVContextView_Init(vtkClientServerInterpreter* csi);
extern void vtkPVDataDeliveryManager_Init(vtkClientServerInterpreter* csi);
extern void vtkPVDataRepresentation_Init(vtkClientServerInterpreter* csi);
extern void vtkPVDataRepresentationPipeline_Init(vtkClientServerInterpreter* csi);
extern void vtkPVDisplayInformation_Init(vtkClientServerInterpreter* csi);
extern void vtkPVHardwareSelector_Init(vtkClientServerInterpreter* csi);
extern void vtkPVHistogramChartRepresentation_Init(vtkClientServerInterpreter* csi);
extern void vtkPVImageSliceMapper_Init(vtkClientServerInterpreter* csi);
extern void vtkPVImplicitPlaneRepresentation_Init(vtkClientServerInterpreter* csi);
extern void vtkPVLastSelectionInformation_Init(vtkClientServerInterpreter* csi);
extern void vtkPVMultiSliceView_Init(vtkClientServerInterpreter* csi);
extern void vtkPVOpenGLExtensionsInformation_Init(vtkClientServerInterpreter* csi);
extern void vtkPVOrthographicSliceView_Init(vtkClientServerInterpreter* csi);
extern void vtkPVParallelCoordinatesRepresentation_Init(vtkClientServerInterpreter* csi);
extern void vtkPVPlotMatrixRepresentation_Init(vtkClientServerInterpreter* csi);
extern void vtkPVPlotMatrixView_Init(vtkClientServerInterpreter* csi);
extern void vtkPVProminentValuesInformation_Init(vtkClientServerInterpreter* csi);
extern void vtkPVRayCastPickingHelper_Init(vtkClientServerInterpreter* csi);
extern void vtkPVRenderView_Init(vtkClientServerInterpreter* csi);
extern void vtkPVRenderViewSettings_Init(vtkClientServerInterpreter* csi);
extern void vtkPVRepresentedDataInformation_Init(vtkClientServerInterpreter* csi);
extern void vtkPVSelectionInformation_Init(vtkClientServerInterpreter* csi);
extern void vtkPVStreamingPiecesInformation_Init(vtkClientServerInterpreter* csi);
extern void vtkPVSynchronizedRenderer_Init(vtkClientServerInterpreter* csi);
extern void vtkPVSynchronizedRenderWindows_Init(vtkClientServerInterpreter* csi);
extern void vtkPVView_Init(vtkClientServerInterpreter* csi);
extern void vtkPVXYChartView_Init(vtkClientServerInterpreter* csi);
extern void vtkSelectionDeliveryFilter_Init(vtkClientServerInterpreter* csi);
extern void vtkSelectionRepresentation_Init(vtkClientServerInterpreter* csi);
extern void vtkSpreadSheetRepresentation_Init(vtkClientServerInterpreter* csi);
extern void vtkSpreadSheetView_Init(vtkClientServerInterpreter* csi);
extern void vtkStructuredGridVolumeRepresentation_Init(vtkClientServerInterpreter* csi);
extern void vtkTableExtentTranslator_Init(vtkClientServerInterpreter* csi);
extern void vtkTextSourceRepresentation_Init(vtkClientServerInterpreter* csi);
extern void vtkThreeSliceFilter_Init(vtkClientServerInterpreter* csi);
extern void vtkUnstructuredGridVolumeRepresentation_Init(vtkClientServerInterpreter* csi);
extern void vtkXYChartRepresentation_Init(vtkClientServerInterpreter* csi);
extern void vtkAMRStreamingVolumeRepresentation_Init(vtkClientServerInterpreter* csi);
extern void vtkPythonRepresentation_Init(vtkClientServerInterpreter* csi);
extern void vtkPythonView_Init(vtkClientServerInterpreter* csi);


extern "C" void VTK_WRAP_CS_EXPORT vtkPVClientServerCoreRenderingCS_Initialize(
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
    PyImport_AppendInittab("vtkPVClientServerCoreRenderingPython", initvtkPVClientServerCoreRenderingPython);
    }

  csi->Load("vtkPVClientServerCoreRendering");
#endif

  vtk3DWidgetRepresentation_Init(csi);
  vtkAMROutlineRepresentation_Init(csi);
  vtkAMRStreamingPriorityQueue_Init(csi);
  vtkCaveSynchronizedRenderers_Init(csi);
  vtkChartRepresentation_Init(csi);
  vtkChartSelectionRepresentation_Init(csi);
  vtkChartWarning_Init(csi);
  vtkClientServerMoveData_Init(csi);
  vtkCompositeRepresentation_Init(csi);
  vtkCubeAxesRepresentation_Init(csi);
  vtkDataLabelRepresentation_Init(csi);
  vtkGeometryRepresentation_Init(csi);
  vtkGeometryRepresentationWithFaces_Init(csi);
  vtkGeometrySliceRepresentation_Init(csi);
  vtkGlyph3DRepresentation_Init(csi);
  vtkImageSliceRepresentation_Init(csi);
  vtkImageVolumeRepresentation_Init(csi);
  vtkMoleculeRepresentation_Init(csi);
  vtkMPIMoveData_Init(csi);
  vtkOutlineRepresentation_Init(csi);
  vtkPVBagChartRepresentation_Init(csi);
  vtkPVBoxChartRepresentation_Init(csi);
  vtkPVCacheKeeper_Init(csi);
  vtkPVCacheKeeperPipeline_Init(csi);
  vtkPVCacheSizeInformation_Init(csi);
  vtkPVClientServerSynchronizedRenderers_Init(csi);
  vtkPVCompositeOrthographicSliceRepresentation_Init(csi);
  vtkPVCompositeRepresentation_Init(csi);
  vtkPVContextView_Init(csi);
  vtkPVDataDeliveryManager_Init(csi);
  vtkPVDataRepresentation_Init(csi);
  vtkPVDataRepresentationPipeline_Init(csi);
  vtkPVDisplayInformation_Init(csi);
  vtkPVHardwareSelector_Init(csi);
  vtkPVHistogramChartRepresentation_Init(csi);
  vtkPVImageSliceMapper_Init(csi);
  vtkPVImplicitPlaneRepresentation_Init(csi);
  vtkPVLastSelectionInformation_Init(csi);
  vtkPVMultiSliceView_Init(csi);
  vtkPVOpenGLExtensionsInformation_Init(csi);
  vtkPVOrthographicSliceView_Init(csi);
  vtkPVParallelCoordinatesRepresentation_Init(csi);
  vtkPVPlotMatrixRepresentation_Init(csi);
  vtkPVPlotMatrixView_Init(csi);
  vtkPVProminentValuesInformation_Init(csi);
  vtkPVRayCastPickingHelper_Init(csi);
  vtkPVRenderView_Init(csi);
  vtkPVRenderViewSettings_Init(csi);
  vtkPVRepresentedDataInformation_Init(csi);
  vtkPVSelectionInformation_Init(csi);
  vtkPVStreamingPiecesInformation_Init(csi);
  vtkPVSynchronizedRenderer_Init(csi);
  vtkPVSynchronizedRenderWindows_Init(csi);
  vtkPVView_Init(csi);
  vtkPVXYChartView_Init(csi);
  vtkSelectionDeliveryFilter_Init(csi);
  vtkSelectionRepresentation_Init(csi);
  vtkSpreadSheetRepresentation_Init(csi);
  vtkSpreadSheetView_Init(csi);
  vtkStructuredGridVolumeRepresentation_Init(csi);
  vtkTableExtentTranslator_Init(csi);
  vtkTextSourceRepresentation_Init(csi);
  vtkThreeSliceFilter_Init(csi);
  vtkUnstructuredGridVolumeRepresentation_Init(csi);
  vtkXYChartRepresentation_Init(csi);
  vtkAMRStreamingVolumeRepresentation_Init(csi);
  vtkPythonRepresentation_Init(csi);
  vtkPythonView_Init(csi);

}
