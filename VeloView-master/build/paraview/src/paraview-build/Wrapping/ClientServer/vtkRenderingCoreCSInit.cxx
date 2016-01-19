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
extern "C" void real_initvtkRenderingCorePython(const char *modulename);

void initvtkRenderingCorePython()
{
  static const char modulename[] = "vtkRenderingCorePython";
  real_initvtkRenderingCorePython(modulename);
}
#endif

extern void vtkAbstractMapper3D_Init(vtkClientServerInterpreter* csi);
extern void vtkAbstractMapper_Init(vtkClientServerInterpreter* csi);
extern void vtkAbstractPicker_Init(vtkClientServerInterpreter* csi);
extern void vtkAbstractVolumeMapper_Init(vtkClientServerInterpreter* csi);
extern void vtkActor2DCollection_Init(vtkClientServerInterpreter* csi);
extern void vtkActor2D_Init(vtkClientServerInterpreter* csi);
extern void vtkActorCollection_Init(vtkClientServerInterpreter* csi);
extern void vtkActor_Init(vtkClientServerInterpreter* csi);
extern void vtkAssembly_Init(vtkClientServerInterpreter* csi);
extern void vtkBackgroundColorMonitor_Init(vtkClientServerInterpreter* csi);
extern void vtkCameraActor_Init(vtkClientServerInterpreter* csi);
extern void vtkCamera_Init(vtkClientServerInterpreter* csi);
extern void vtkCameraInterpolator_Init(vtkClientServerInterpreter* csi);
extern void vtkCellCenterDepthSort_Init(vtkClientServerInterpreter* csi);
extern void vtkColorTransferFunction_Init(vtkClientServerInterpreter* csi);
extern void vtkCompositeDataDisplayAttributes_Init(vtkClientServerInterpreter* csi);
extern void vtkCompositePolyDataMapper_Init(vtkClientServerInterpreter* csi);
extern void vtkCoordinate_Init(vtkClientServerInterpreter* csi);
extern void vtkCullerCollection_Init(vtkClientServerInterpreter* csi);
extern void vtkCuller_Init(vtkClientServerInterpreter* csi);
extern void vtkDataSetMapper_Init(vtkClientServerInterpreter* csi);
extern void vtkDiscretizableColorTransferFunction_Init(vtkClientServerInterpreter* csi);
extern void vtkDistanceToCamera_Init(vtkClientServerInterpreter* csi);
extern void vtkFollower_Init(vtkClientServerInterpreter* csi);
extern void vtkFrustumCoverageCuller_Init(vtkClientServerInterpreter* csi);
extern void vtkGenericRenderWindowInteractor_Init(vtkClientServerInterpreter* csi);
extern void vtkGenericVertexAttributeMapping_Init(vtkClientServerInterpreter* csi);
extern void vtkGlyph3DMapper_Init(vtkClientServerInterpreter* csi);
extern void vtkGPUInfo_Init(vtkClientServerInterpreter* csi);
extern void vtkGPUInfoList_Init(vtkClientServerInterpreter* csi);
extern void vtkGraphicsFactory_Init(vtkClientServerInterpreter* csi);
extern void vtkGraphMapper_Init(vtkClientServerInterpreter* csi);
extern void vtkGraphToGlyphs_Init(vtkClientServerInterpreter* csi);
extern void vtkHardwareSelector_Init(vtkClientServerInterpreter* csi);
extern void vtkHierarchicalPolyDataMapper_Init(vtkClientServerInterpreter* csi);
extern void vtkImageActor_Init(vtkClientServerInterpreter* csi);
extern void vtkImageMapper3D_Init(vtkClientServerInterpreter* csi);
extern void vtkImageMapper_Init(vtkClientServerInterpreter* csi);
extern void vtkImageProperty_Init(vtkClientServerInterpreter* csi);
extern void vtkImageSlice_Init(vtkClientServerInterpreter* csi);
extern void vtkImageSliceMapper_Init(vtkClientServerInterpreter* csi);
extern void vtkInteractorEventRecorder_Init(vtkClientServerInterpreter* csi);
extern void vtkInteractorObserver_Init(vtkClientServerInterpreter* csi);
extern void vtkLabeledContourMapper_Init(vtkClientServerInterpreter* csi);
extern void vtkLightActor_Init(vtkClientServerInterpreter* csi);
extern void vtkLightCollection_Init(vtkClientServerInterpreter* csi);
extern void vtkLight_Init(vtkClientServerInterpreter* csi);
extern void vtkLightKit_Init(vtkClientServerInterpreter* csi);
extern void vtkLogLookupTable_Init(vtkClientServerInterpreter* csi);
extern void vtkLookupTableWithEnabling_Init(vtkClientServerInterpreter* csi);
extern void vtkMapArrayValues_Init(vtkClientServerInterpreter* csi);
extern void vtkMapper2D_Init(vtkClientServerInterpreter* csi);
extern void vtkMapperCollection_Init(vtkClientServerInterpreter* csi);
extern void vtkMapper_Init(vtkClientServerInterpreter* csi);
extern void vtkObserverMediator_Init(vtkClientServerInterpreter* csi);
extern void vtkPolyDataMapper2D_Init(vtkClientServerInterpreter* csi);
extern void vtkPolyDataMapper_Init(vtkClientServerInterpreter* csi);
extern void vtkProp3DCollection_Init(vtkClientServerInterpreter* csi);
extern void vtkProp3D_Init(vtkClientServerInterpreter* csi);
extern void vtkProp3DFollower_Init(vtkClientServerInterpreter* csi);
extern void vtkPropAssembly_Init(vtkClientServerInterpreter* csi);
extern void vtkPropCollection_Init(vtkClientServerInterpreter* csi);
extern void vtkProp_Init(vtkClientServerInterpreter* csi);
extern void vtkProperty2D_Init(vtkClientServerInterpreter* csi);
extern void vtkProperty_Init(vtkClientServerInterpreter* csi);
extern void vtkRendererCollection_Init(vtkClientServerInterpreter* csi);
extern void vtkRenderer_Init(vtkClientServerInterpreter* csi);
extern void vtkRendererDelegate_Init(vtkClientServerInterpreter* csi);
extern void vtkRendererSource_Init(vtkClientServerInterpreter* csi);
extern void vtkRenderWindowCollection_Init(vtkClientServerInterpreter* csi);
extern void vtkRenderWindow_Init(vtkClientServerInterpreter* csi);
extern void vtkRenderWindowInteractor_Init(vtkClientServerInterpreter* csi);
extern void vtkSelectVisiblePoints_Init(vtkClientServerInterpreter* csi);
extern void vtkShaderDeviceAdapter2_Init(vtkClientServerInterpreter* csi);
extern void vtkTextActor_Init(vtkClientServerInterpreter* csi);
extern void vtkTextActor3D_Init(vtkClientServerInterpreter* csi);
extern void vtkTexture_Init(vtkClientServerInterpreter* csi);
extern void vtkTexturedActor2D_Init(vtkClientServerInterpreter* csi);
extern void vtkTransformCoordinateSystems_Init(vtkClientServerInterpreter* csi);
extern void vtkTransformInterpolator_Init(vtkClientServerInterpreter* csi);
extern void vtkTupleInterpolator_Init(vtkClientServerInterpreter* csi);
extern void vtkViewDependentErrorMetric_Init(vtkClientServerInterpreter* csi);
extern void vtkViewport_Init(vtkClientServerInterpreter* csi);
extern void vtkVisibilitySort_Init(vtkClientServerInterpreter* csi);
extern void vtkVolumeCollection_Init(vtkClientServerInterpreter* csi);
extern void vtkVolume_Init(vtkClientServerInterpreter* csi);
extern void vtkVolumeProperty_Init(vtkClientServerInterpreter* csi);
extern void vtkWindowLevelLookupTable_Init(vtkClientServerInterpreter* csi);
extern void vtkWindowToImageFilter_Init(vtkClientServerInterpreter* csi);
extern void vtkAssemblyNode_Init(vtkClientServerInterpreter* csi);
extern void vtkAssemblyPath_Init(vtkClientServerInterpreter* csi);
extern void vtkAssemblyPaths_Init(vtkClientServerInterpreter* csi);
extern void vtkAreaPicker_Init(vtkClientServerInterpreter* csi);
extern void vtkPicker_Init(vtkClientServerInterpreter* csi);
extern void vtkAbstractPropPicker_Init(vtkClientServerInterpreter* csi);
extern void vtkPropPicker_Init(vtkClientServerInterpreter* csi);
extern void vtkPickingManager_Init(vtkClientServerInterpreter* csi);
extern void vtkLODProp3D_Init(vtkClientServerInterpreter* csi);
extern void vtkWorldPointPicker_Init(vtkClientServerInterpreter* csi);
extern void vtkCellPicker_Init(vtkClientServerInterpreter* csi);
extern void vtkPointPicker_Init(vtkClientServerInterpreter* csi);
extern void vtkRenderedAreaPicker_Init(vtkClientServerInterpreter* csi);
extern void vtkScenePicker_Init(vtkClientServerInterpreter* csi);
extern void vtkInteractorStyle_Init(vtkClientServerInterpreter* csi);
extern void vtkInteractorStyleSwitchBase_Init(vtkClientServerInterpreter* csi);
extern void vtkTDxInteractorStyle_Init(vtkClientServerInterpreter* csi);
extern void vtkTDxInteractorStyleCamera_Init(vtkClientServerInterpreter* csi);
extern void vtkTDxInteractorStyleSettings_Init(vtkClientServerInterpreter* csi);
extern void vtkStringToImage_Init(vtkClientServerInterpreter* csi);
extern void vtkTextMapper_Init(vtkClientServerInterpreter* csi);
extern void vtkTextProperty_Init(vtkClientServerInterpreter* csi);
extern void vtkTextPropertyCollection_Init(vtkClientServerInterpreter* csi);
extern void vtkTextRenderer_Init(vtkClientServerInterpreter* csi);
extern void vtkPainterDeviceAdapter_Init(vtkClientServerInterpreter* csi);


extern "C" void VTK_WRAP_CS_EXPORT vtkRenderingCoreCS_Initialize(
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
    PyImport_AppendInittab("vtkRenderingCorePython", initvtkRenderingCorePython);
    }

  csi->Load("vtkRenderingCore");
#endif

  vtkAbstractMapper3D_Init(csi);
  vtkAbstractMapper_Init(csi);
  vtkAbstractPicker_Init(csi);
  vtkAbstractVolumeMapper_Init(csi);
  vtkActor2DCollection_Init(csi);
  vtkActor2D_Init(csi);
  vtkActorCollection_Init(csi);
  vtkActor_Init(csi);
  vtkAssembly_Init(csi);
  vtkBackgroundColorMonitor_Init(csi);
  vtkCameraActor_Init(csi);
  vtkCamera_Init(csi);
  vtkCameraInterpolator_Init(csi);
  vtkCellCenterDepthSort_Init(csi);
  vtkColorTransferFunction_Init(csi);
  vtkCompositeDataDisplayAttributes_Init(csi);
  vtkCompositePolyDataMapper_Init(csi);
  vtkCoordinate_Init(csi);
  vtkCullerCollection_Init(csi);
  vtkCuller_Init(csi);
  vtkDataSetMapper_Init(csi);
  vtkDiscretizableColorTransferFunction_Init(csi);
  vtkDistanceToCamera_Init(csi);
  vtkFollower_Init(csi);
  vtkFrustumCoverageCuller_Init(csi);
  vtkGenericRenderWindowInteractor_Init(csi);
  vtkGenericVertexAttributeMapping_Init(csi);
  vtkGlyph3DMapper_Init(csi);
  vtkGPUInfo_Init(csi);
  vtkGPUInfoList_Init(csi);
  vtkGraphicsFactory_Init(csi);
  vtkGraphMapper_Init(csi);
  vtkGraphToGlyphs_Init(csi);
  vtkHardwareSelector_Init(csi);
  vtkHierarchicalPolyDataMapper_Init(csi);
  vtkImageActor_Init(csi);
  vtkImageMapper3D_Init(csi);
  vtkImageMapper_Init(csi);
  vtkImageProperty_Init(csi);
  vtkImageSlice_Init(csi);
  vtkImageSliceMapper_Init(csi);
  vtkInteractorEventRecorder_Init(csi);
  vtkInteractorObserver_Init(csi);
  vtkLabeledContourMapper_Init(csi);
  vtkLightActor_Init(csi);
  vtkLightCollection_Init(csi);
  vtkLight_Init(csi);
  vtkLightKit_Init(csi);
  vtkLogLookupTable_Init(csi);
  vtkLookupTableWithEnabling_Init(csi);
  vtkMapArrayValues_Init(csi);
  vtkMapper2D_Init(csi);
  vtkMapperCollection_Init(csi);
  vtkMapper_Init(csi);
  vtkObserverMediator_Init(csi);
  vtkPolyDataMapper2D_Init(csi);
  vtkPolyDataMapper_Init(csi);
  vtkProp3DCollection_Init(csi);
  vtkProp3D_Init(csi);
  vtkProp3DFollower_Init(csi);
  vtkPropAssembly_Init(csi);
  vtkPropCollection_Init(csi);
  vtkProp_Init(csi);
  vtkProperty2D_Init(csi);
  vtkProperty_Init(csi);
  vtkRendererCollection_Init(csi);
  vtkRenderer_Init(csi);
  vtkRendererDelegate_Init(csi);
  vtkRendererSource_Init(csi);
  vtkRenderWindowCollection_Init(csi);
  vtkRenderWindow_Init(csi);
  vtkRenderWindowInteractor_Init(csi);
  vtkSelectVisiblePoints_Init(csi);
  vtkShaderDeviceAdapter2_Init(csi);
  vtkTextActor_Init(csi);
  vtkTextActor3D_Init(csi);
  vtkTexture_Init(csi);
  vtkTexturedActor2D_Init(csi);
  vtkTransformCoordinateSystems_Init(csi);
  vtkTransformInterpolator_Init(csi);
  vtkTupleInterpolator_Init(csi);
  vtkViewDependentErrorMetric_Init(csi);
  vtkViewport_Init(csi);
  vtkVisibilitySort_Init(csi);
  vtkVolumeCollection_Init(csi);
  vtkVolume_Init(csi);
  vtkVolumeProperty_Init(csi);
  vtkWindowLevelLookupTable_Init(csi);
  vtkWindowToImageFilter_Init(csi);
  vtkAssemblyNode_Init(csi);
  vtkAssemblyPath_Init(csi);
  vtkAssemblyPaths_Init(csi);
  vtkAreaPicker_Init(csi);
  vtkPicker_Init(csi);
  vtkAbstractPropPicker_Init(csi);
  vtkPropPicker_Init(csi);
  vtkPickingManager_Init(csi);
  vtkLODProp3D_Init(csi);
  vtkWorldPointPicker_Init(csi);
  vtkCellPicker_Init(csi);
  vtkPointPicker_Init(csi);
  vtkRenderedAreaPicker_Init(csi);
  vtkScenePicker_Init(csi);
  vtkInteractorStyle_Init(csi);
  vtkInteractorStyleSwitchBase_Init(csi);
  vtkTDxInteractorStyle_Init(csi);
  vtkTDxInteractorStyleCamera_Init(csi);
  vtkTDxInteractorStyleSettings_Init(csi);
  vtkStringToImage_Init(csi);
  vtkTextMapper_Init(csi);
  vtkTextProperty_Init(csi);
  vtkTextPropertyCollection_Init(csi);
  vtkTextRenderer_Init(csi);
  vtkPainterDeviceAdapter_Init(csi);

}
