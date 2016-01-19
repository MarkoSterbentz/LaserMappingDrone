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
extern "C" void real_initvtkCommonExecutionModelPython(const char *modulename);

void initvtkCommonExecutionModelPython()
{
  static const char modulename[] = "vtkCommonExecutionModelPython";
  real_initvtkCommonExecutionModelPython(modulename);
}
#endif

extern void vtkAlgorithm_Init(vtkClientServerInterpreter* csi);
extern void vtkAlgorithmOutput_Init(vtkClientServerInterpreter* csi);
extern void vtkAnnotationLayersAlgorithm_Init(vtkClientServerInterpreter* csi);
extern void vtkArrayDataAlgorithm_Init(vtkClientServerInterpreter* csi);
extern void vtkCachedStreamingDemandDrivenPipeline_Init(vtkClientServerInterpreter* csi);
extern void vtkCastToConcrete_Init(vtkClientServerInterpreter* csi);
extern void vtkCompositeDataPipeline_Init(vtkClientServerInterpreter* csi);
extern void vtkCompositeDataSetAlgorithm_Init(vtkClientServerInterpreter* csi);
extern void vtkDataObjectAlgorithm_Init(vtkClientServerInterpreter* csi);
extern void vtkDataSetAlgorithm_Init(vtkClientServerInterpreter* csi);
extern void vtkDemandDrivenPipeline_Init(vtkClientServerInterpreter* csi);
extern void vtkDirectedGraphAlgorithm_Init(vtkClientServerInterpreter* csi);
extern void vtkEnsembleSource_Init(vtkClientServerInterpreter* csi);
extern void vtkExecutive_Init(vtkClientServerInterpreter* csi);
extern void vtkExtentSplitter_Init(vtkClientServerInterpreter* csi);
extern void vtkExtentTranslator_Init(vtkClientServerInterpreter* csi);
extern void vtkGraphAlgorithm_Init(vtkClientServerInterpreter* csi);
extern void vtkHierarchicalBoxDataSetAlgorithm_Init(vtkClientServerInterpreter* csi);
extern void vtkHyperOctreeAlgorithm_Init(vtkClientServerInterpreter* csi);
extern void vtkHyperTreeGridAlgorithm_Init(vtkClientServerInterpreter* csi);
extern void vtkImageAlgorithm_Init(vtkClientServerInterpreter* csi);
extern void vtkImageInPlaceFilter_Init(vtkClientServerInterpreter* csi);
extern void vtkImageToStructuredGrid_Init(vtkClientServerInterpreter* csi);
extern void vtkImageToStructuredPoints_Init(vtkClientServerInterpreter* csi);
extern void vtkInformationDataObjectMetaDataKey_Init(vtkClientServerInterpreter* csi);
extern void vtkInformationExecutivePortKey_Init(vtkClientServerInterpreter* csi);
extern void vtkInformationExecutivePortVectorKey_Init(vtkClientServerInterpreter* csi);
extern void vtkInformationIntegerRequestKey_Init(vtkClientServerInterpreter* csi);
extern void vtkMultiBlockDataSetAlgorithm_Init(vtkClientServerInterpreter* csi);
extern void vtkMultiTimeStepAlgorithm_Init(vtkClientServerInterpreter* csi);
extern void vtkPassInputTypeAlgorithm_Init(vtkClientServerInterpreter* csi);
extern void vtkPiecewiseFunctionAlgorithm_Init(vtkClientServerInterpreter* csi);
extern void vtkPiecewiseFunctionShiftScale_Init(vtkClientServerInterpreter* csi);
extern void vtkPointSetAlgorithm_Init(vtkClientServerInterpreter* csi);
extern void vtkPolyDataAlgorithm_Init(vtkClientServerInterpreter* csi);
extern void vtkRectilinearGridAlgorithm_Init(vtkClientServerInterpreter* csi);
extern void vtkScalarTree_Init(vtkClientServerInterpreter* csi);
extern void vtkSimpleImageToImageFilter_Init(vtkClientServerInterpreter* csi);
extern void vtkSimpleScalarTree_Init(vtkClientServerInterpreter* csi);
extern void vtkStreamingDemandDrivenPipeline_Init(vtkClientServerInterpreter* csi);
extern void vtkStructuredGridAlgorithm_Init(vtkClientServerInterpreter* csi);
extern void vtkTableAlgorithm_Init(vtkClientServerInterpreter* csi);
extern void vtkThreadedCompositeDataPipeline_Init(vtkClientServerInterpreter* csi);
extern void vtkThreadedImageAlgorithm_Init(vtkClientServerInterpreter* csi);
extern void vtkTreeAlgorithm_Init(vtkClientServerInterpreter* csi);
extern void vtkTrivialProducer_Init(vtkClientServerInterpreter* csi);
extern void vtkUndirectedGraphAlgorithm_Init(vtkClientServerInterpreter* csi);
extern void vtkUnstructuredGridAlgorithm_Init(vtkClientServerInterpreter* csi);
extern void vtkUnstructuredGridBaseAlgorithm_Init(vtkClientServerInterpreter* csi);
extern void vtkProgressObserver_Init(vtkClientServerInterpreter* csi);
extern void vtkSelectionAlgorithm_Init(vtkClientServerInterpreter* csi);
extern void vtkExtentRCBPartitioner_Init(vtkClientServerInterpreter* csi);
extern void vtkUniformGridPartitioner_Init(vtkClientServerInterpreter* csi);
extern void vtkUniformGridAMRAlgorithm_Init(vtkClientServerInterpreter* csi);
extern void vtkOverlappingAMRAlgorithm_Init(vtkClientServerInterpreter* csi);
extern void vtkNonOverlappingAMRAlgorithm_Init(vtkClientServerInterpreter* csi);


extern "C" void VTK_WRAP_CS_EXPORT vtkCommonExecutionModelCS_Initialize(
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
    PyImport_AppendInittab("vtkCommonExecutionModelPython", initvtkCommonExecutionModelPython);
    }

  csi->Load("vtkCommonExecutionModel");
#endif

  vtkAlgorithm_Init(csi);
  vtkAlgorithmOutput_Init(csi);
  vtkAnnotationLayersAlgorithm_Init(csi);
  vtkArrayDataAlgorithm_Init(csi);
  vtkCachedStreamingDemandDrivenPipeline_Init(csi);
  vtkCastToConcrete_Init(csi);
  vtkCompositeDataPipeline_Init(csi);
  vtkCompositeDataSetAlgorithm_Init(csi);
  vtkDataObjectAlgorithm_Init(csi);
  vtkDataSetAlgorithm_Init(csi);
  vtkDemandDrivenPipeline_Init(csi);
  vtkDirectedGraphAlgorithm_Init(csi);
  vtkEnsembleSource_Init(csi);
  vtkExecutive_Init(csi);
  vtkExtentSplitter_Init(csi);
  vtkExtentTranslator_Init(csi);
  vtkGraphAlgorithm_Init(csi);
  vtkHierarchicalBoxDataSetAlgorithm_Init(csi);
  vtkHyperOctreeAlgorithm_Init(csi);
  vtkHyperTreeGridAlgorithm_Init(csi);
  vtkImageAlgorithm_Init(csi);
  vtkImageInPlaceFilter_Init(csi);
  vtkImageToStructuredGrid_Init(csi);
  vtkImageToStructuredPoints_Init(csi);
  vtkInformationDataObjectMetaDataKey_Init(csi);
  vtkInformationExecutivePortKey_Init(csi);
  vtkInformationExecutivePortVectorKey_Init(csi);
  vtkInformationIntegerRequestKey_Init(csi);
  vtkMultiBlockDataSetAlgorithm_Init(csi);
  vtkMultiTimeStepAlgorithm_Init(csi);
  vtkPassInputTypeAlgorithm_Init(csi);
  vtkPiecewiseFunctionAlgorithm_Init(csi);
  vtkPiecewiseFunctionShiftScale_Init(csi);
  vtkPointSetAlgorithm_Init(csi);
  vtkPolyDataAlgorithm_Init(csi);
  vtkRectilinearGridAlgorithm_Init(csi);
  vtkScalarTree_Init(csi);
  vtkSimpleImageToImageFilter_Init(csi);
  vtkSimpleScalarTree_Init(csi);
  vtkStreamingDemandDrivenPipeline_Init(csi);
  vtkStructuredGridAlgorithm_Init(csi);
  vtkTableAlgorithm_Init(csi);
  vtkThreadedCompositeDataPipeline_Init(csi);
  vtkThreadedImageAlgorithm_Init(csi);
  vtkTreeAlgorithm_Init(csi);
  vtkTrivialProducer_Init(csi);
  vtkUndirectedGraphAlgorithm_Init(csi);
  vtkUnstructuredGridAlgorithm_Init(csi);
  vtkUnstructuredGridBaseAlgorithm_Init(csi);
  vtkProgressObserver_Init(csi);
  vtkSelectionAlgorithm_Init(csi);
  vtkExtentRCBPartitioner_Init(csi);
  vtkUniformGridPartitioner_Init(csi);
  vtkUniformGridAMRAlgorithm_Init(csi);
  vtkOverlappingAMRAlgorithm_Init(csi);
  vtkNonOverlappingAMRAlgorithm_Init(csi);

}
