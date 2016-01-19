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
extern "C" void real_initvtkPVVTKExtensionsRenderingPython(const char *modulename);

void initvtkPVVTKExtensionsRenderingPython()
{
  static const char modulename[] = "vtkPVVTKExtensionsRenderingPython";
  real_initvtkPVVTKExtensionsRenderingPython(modulename);
}
#endif

extern void vtkAttributeDataToTableFilter_Init(vtkClientServerInterpreter* csi);
extern void vtkBlockDeliveryPreprocessor_Init(vtkClientServerInterpreter* csi);
extern void vtkCameraInterpolator2_Init(vtkClientServerInterpreter* csi);
extern void vtkCameraManipulator_Init(vtkClientServerInterpreter* csi);
extern void vtkCameraManipulatorGUIHelper_Init(vtkClientServerInterpreter* csi);
extern void vtkCleanArrays_Init(vtkClientServerInterpreter* csi);
extern void vtkCompositeDataToUnstructuredGridFilter_Init(vtkClientServerInterpreter* csi);
extern void vtkCSVExporter_Init(vtkClientServerInterpreter* csi);
extern void vtkImageCompressor_Init(vtkClientServerInterpreter* csi);
extern void vtkKdTreeGenerator_Init(vtkClientServerInterpreter* csi);
extern void vtkKdTreeManager_Init(vtkClientServerInterpreter* csi);
extern void vtkMarkSelectedRows_Init(vtkClientServerInterpreter* csi);
extern void vtkMultiSliceContextItem_Init(vtkClientServerInterpreter* csi);
extern void vtkOrderedCompositeDistributor_Init(vtkClientServerInterpreter* csi);
extern void vtkPVArrowSource_Init(vtkClientServerInterpreter* csi);
extern void vtkPVAxesActor_Init(vtkClientServerInterpreter* csi);
extern void vtkPVAxesWidget_Init(vtkClientServerInterpreter* csi);
extern void vtkPVCenterAxesActor_Init(vtkClientServerInterpreter* csi);
extern void vtkPVDefaultPass_Init(vtkClientServerInterpreter* csi);
extern void vtkPVGenericRenderWindowInteractor_Init(vtkClientServerInterpreter* csi);
extern void vtkPVGeometryFilter_Init(vtkClientServerInterpreter* csi);
extern void vtkPVInteractorStyle_Init(vtkClientServerInterpreter* csi);
extern void vtkPVJoystickFly_Init(vtkClientServerInterpreter* csi);
extern void vtkPVJoystickFlyIn_Init(vtkClientServerInterpreter* csi);
extern void vtkPVJoystickFlyOut_Init(vtkClientServerInterpreter* csi);
extern void vtkPVLODActor_Init(vtkClientServerInterpreter* csi);
extern void vtkPVLODVolume_Init(vtkClientServerInterpreter* csi);
extern void vtkPVMergeTables_Init(vtkClientServerInterpreter* csi);
extern void vtkPVMergeTablesMultiBlock_Init(vtkClientServerInterpreter* csi);
extern void vtkPVPlotTime_Init(vtkClientServerInterpreter* csi);
extern void vtkPVRecoverGeometryWireframe_Init(vtkClientServerInterpreter* csi);
extern void vtkPVRenderViewProxy_Init(vtkClientServerInterpreter* csi);
extern void vtkPVScalarBarActor_Init(vtkClientServerInterpreter* csi);
extern void vtkPVTrackballMoveActor_Init(vtkClientServerInterpreter* csi);
extern void vtkPVTrackballMultiRotate_Init(vtkClientServerInterpreter* csi);
extern void vtkPVTrackballPan_Init(vtkClientServerInterpreter* csi);
extern void vtkPVTrackballRoll_Init(vtkClientServerInterpreter* csi);
extern void vtkPVTrackballRotate_Init(vtkClientServerInterpreter* csi);
extern void vtkPVTrackballZoom_Init(vtkClientServerInterpreter* csi);
extern void vtkPVUpdateSuppressor_Init(vtkClientServerInterpreter* csi);
extern void vtkReductionFilter_Init(vtkClientServerInterpreter* csi);
extern void vtkResampledAMRImageSource_Init(vtkClientServerInterpreter* csi);
extern void vtkSelectionConverter_Init(vtkClientServerInterpreter* csi);
extern void vtkSelectionSerializer_Init(vtkClientServerInterpreter* csi);
extern void vtkSortedTableStreamer_Init(vtkClientServerInterpreter* csi);
extern void vtkSquirtCompressor_Init(vtkClientServerInterpreter* csi);
extern void vtkTileDisplayHelper_Init(vtkClientServerInterpreter* csi);
extern void vtkTilesHelper_Init(vtkClientServerInterpreter* csi);
extern void vtkTrackballPan_Init(vtkClientServerInterpreter* csi);
extern void vtkUpdateSuppressorPipeline_Init(vtkClientServerInterpreter* csi);
extern void vtkViewLayout_Init(vtkClientServerInterpreter* csi);
extern void vtkVolumeRepresentationPreprocessor_Init(vtkClientServerInterpreter* csi);
extern void vtkZlibImageCompressor_Init(vtkClientServerInterpreter* csi);
extern void vtkPVGL2PSExporter_Init(vtkClientServerInterpreter* csi);
extern void vtkTexturePainter_Init(vtkClientServerInterpreter* csi);


extern "C" void VTK_WRAP_CS_EXPORT vtkPVVTKExtensionsRenderingCS_Initialize(
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
    PyImport_AppendInittab("vtkPVVTKExtensionsRenderingPython", initvtkPVVTKExtensionsRenderingPython);
    }

  csi->Load("vtkPVVTKExtensionsRendering");
#endif

  vtkAttributeDataToTableFilter_Init(csi);
  vtkBlockDeliveryPreprocessor_Init(csi);
  vtkCameraInterpolator2_Init(csi);
  vtkCameraManipulator_Init(csi);
  vtkCameraManipulatorGUIHelper_Init(csi);
  vtkCleanArrays_Init(csi);
  vtkCompositeDataToUnstructuredGridFilter_Init(csi);
  vtkCSVExporter_Init(csi);
  vtkImageCompressor_Init(csi);
  vtkKdTreeGenerator_Init(csi);
  vtkKdTreeManager_Init(csi);
  vtkMarkSelectedRows_Init(csi);
  vtkMultiSliceContextItem_Init(csi);
  vtkOrderedCompositeDistributor_Init(csi);
  vtkPVArrowSource_Init(csi);
  vtkPVAxesActor_Init(csi);
  vtkPVAxesWidget_Init(csi);
  vtkPVCenterAxesActor_Init(csi);
  vtkPVDefaultPass_Init(csi);
  vtkPVGenericRenderWindowInteractor_Init(csi);
  vtkPVGeometryFilter_Init(csi);
  vtkPVInteractorStyle_Init(csi);
  vtkPVJoystickFly_Init(csi);
  vtkPVJoystickFlyIn_Init(csi);
  vtkPVJoystickFlyOut_Init(csi);
  vtkPVLODActor_Init(csi);
  vtkPVLODVolume_Init(csi);
  vtkPVMergeTables_Init(csi);
  vtkPVMergeTablesMultiBlock_Init(csi);
  vtkPVPlotTime_Init(csi);
  vtkPVRecoverGeometryWireframe_Init(csi);
  vtkPVRenderViewProxy_Init(csi);
  vtkPVScalarBarActor_Init(csi);
  vtkPVTrackballMoveActor_Init(csi);
  vtkPVTrackballMultiRotate_Init(csi);
  vtkPVTrackballPan_Init(csi);
  vtkPVTrackballRoll_Init(csi);
  vtkPVTrackballRotate_Init(csi);
  vtkPVTrackballZoom_Init(csi);
  vtkPVUpdateSuppressor_Init(csi);
  vtkReductionFilter_Init(csi);
  vtkResampledAMRImageSource_Init(csi);
  vtkSelectionConverter_Init(csi);
  vtkSelectionSerializer_Init(csi);
  vtkSortedTableStreamer_Init(csi);
  vtkSquirtCompressor_Init(csi);
  vtkTileDisplayHelper_Init(csi);
  vtkTilesHelper_Init(csi);
  vtkTrackballPan_Init(csi);
  vtkUpdateSuppressorPipeline_Init(csi);
  vtkViewLayout_Init(csi);
  vtkVolumeRepresentationPreprocessor_Init(csi);
  vtkZlibImageCompressor_Init(csi);
  vtkPVGL2PSExporter_Init(csi);
  vtkTexturePainter_Init(csi);

}
