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
extern "C" void real_initvtkInteractionWidgetsPython(const char *modulename);

void initvtkInteractionWidgetsPython()
{
  static const char modulename[] = "vtkInteractionWidgetsPython";
  real_initvtkInteractionWidgetsPython(modulename);
}
#endif

extern void vtk3DWidget_Init(vtkClientServerInterpreter* csi);
extern void vtkAbstractPolygonalHandleRepresentation3D_Init(vtkClientServerInterpreter* csi);
extern void vtkAbstractWidget_Init(vtkClientServerInterpreter* csi);
extern void vtkAffineRepresentation2D_Init(vtkClientServerInterpreter* csi);
extern void vtkAffineRepresentation_Init(vtkClientServerInterpreter* csi);
extern void vtkAffineWidget_Init(vtkClientServerInterpreter* csi);
extern void vtkAngleRepresentation2D_Init(vtkClientServerInterpreter* csi);
extern void vtkAngleRepresentation3D_Init(vtkClientServerInterpreter* csi);
extern void vtkAngleRepresentation_Init(vtkClientServerInterpreter* csi);
extern void vtkAngleWidget_Init(vtkClientServerInterpreter* csi);
extern void vtkAxesTransformRepresentation_Init(vtkClientServerInterpreter* csi);
extern void vtkAxesTransformWidget_Init(vtkClientServerInterpreter* csi);
extern void vtkBalloonRepresentation_Init(vtkClientServerInterpreter* csi);
extern void vtkBalloonWidget_Init(vtkClientServerInterpreter* csi);
extern void vtkBezierContourLineInterpolator_Init(vtkClientServerInterpreter* csi);
extern void vtkBiDimensionalRepresentation2D_Init(vtkClientServerInterpreter* csi);
extern void vtkBiDimensionalRepresentation_Init(vtkClientServerInterpreter* csi);
extern void vtkBiDimensionalWidget_Init(vtkClientServerInterpreter* csi);
extern void vtkBorderRepresentation_Init(vtkClientServerInterpreter* csi);
extern void vtkBorderWidget_Init(vtkClientServerInterpreter* csi);
extern void vtkBoundedPlanePointPlacer_Init(vtkClientServerInterpreter* csi);
extern void vtkBoxRepresentation_Init(vtkClientServerInterpreter* csi);
extern void vtkBoxWidget2_Init(vtkClientServerInterpreter* csi);
extern void vtkBoxWidget_Init(vtkClientServerInterpreter* csi);
extern void vtkBrokenLineWidget_Init(vtkClientServerInterpreter* csi);
extern void vtkButtonRepresentation_Init(vtkClientServerInterpreter* csi);
extern void vtkButtonWidget_Init(vtkClientServerInterpreter* csi);
extern void vtkCameraRepresentation_Init(vtkClientServerInterpreter* csi);
extern void vtkCameraWidget_Init(vtkClientServerInterpreter* csi);
extern void vtkCaptionRepresentation_Init(vtkClientServerInterpreter* csi);
extern void vtkCaptionWidget_Init(vtkClientServerInterpreter* csi);
extern void vtkCellCentersPointPlacer_Init(vtkClientServerInterpreter* csi);
extern void vtkCenteredSliderRepresentation_Init(vtkClientServerInterpreter* csi);
extern void vtkCenteredSliderWidget_Init(vtkClientServerInterpreter* csi);
extern void vtkCheckerboardRepresentation_Init(vtkClientServerInterpreter* csi);
extern void vtkCheckerboardWidget_Init(vtkClientServerInterpreter* csi);
extern void vtkClosedSurfacePointPlacer_Init(vtkClientServerInterpreter* csi);
extern void vtkConstrainedPointHandleRepresentation_Init(vtkClientServerInterpreter* csi);
extern void vtkContinuousValueWidget_Init(vtkClientServerInterpreter* csi);
extern void vtkContinuousValueWidgetRepresentation_Init(vtkClientServerInterpreter* csi);
extern void vtkContourLineInterpolator_Init(vtkClientServerInterpreter* csi);
extern void vtkContourRepresentation_Init(vtkClientServerInterpreter* csi);
extern void vtkContourWidget_Init(vtkClientServerInterpreter* csi);
extern void vtkDijkstraImageContourLineInterpolator_Init(vtkClientServerInterpreter* csi);
extern void vtkDistanceRepresentation2D_Init(vtkClientServerInterpreter* csi);
extern void vtkDistanceRepresentation3D_Init(vtkClientServerInterpreter* csi);
extern void vtkDistanceRepresentation_Init(vtkClientServerInterpreter* csi);
extern void vtkDistanceWidget_Init(vtkClientServerInterpreter* csi);
extern void vtkEllipsoidTensorProbeRepresentation_Init(vtkClientServerInterpreter* csi);
extern void vtkEvent_Init(vtkClientServerInterpreter* csi);
extern void vtkFixedSizeHandleRepresentation3D_Init(vtkClientServerInterpreter* csi);
extern void vtkFocalPlaneContourRepresentation_Init(vtkClientServerInterpreter* csi);
extern void vtkFocalPlanePointPlacer_Init(vtkClientServerInterpreter* csi);
extern void vtkHandleRepresentation_Init(vtkClientServerInterpreter* csi);
extern void vtkHandleWidget_Init(vtkClientServerInterpreter* csi);
extern void vtkHoverWidget_Init(vtkClientServerInterpreter* csi);
extern void vtkImageActorPointPlacer_Init(vtkClientServerInterpreter* csi);
extern void vtkImageCroppingRegionsWidget_Init(vtkClientServerInterpreter* csi);
extern void vtkImageOrthoPlanes_Init(vtkClientServerInterpreter* csi);
extern void vtkImagePlaneWidget_Init(vtkClientServerInterpreter* csi);
extern void vtkImageTracerWidget_Init(vtkClientServerInterpreter* csi);
extern void vtkImplicitPlaneRepresentation_Init(vtkClientServerInterpreter* csi);
extern void vtkImplicitPlaneWidget2_Init(vtkClientServerInterpreter* csi);
extern void vtkImplicitPlaneWidget_Init(vtkClientServerInterpreter* csi);
extern void vtkLinearContourLineInterpolator_Init(vtkClientServerInterpreter* csi);
extern void vtkLineRepresentation_Init(vtkClientServerInterpreter* csi);
extern void vtkLineWidget2_Init(vtkClientServerInterpreter* csi);
extern void vtkLineWidget_Init(vtkClientServerInterpreter* csi);
extern void vtkLogoRepresentation_Init(vtkClientServerInterpreter* csi);
extern void vtkLogoWidget_Init(vtkClientServerInterpreter* csi);
extern void vtkOrientationMarkerWidget_Init(vtkClientServerInterpreter* csi);
extern void vtkOrientedGlyphContourRepresentation_Init(vtkClientServerInterpreter* csi);
extern void vtkOrientedGlyphFocalPlaneContourRepresentation_Init(vtkClientServerInterpreter* csi);
extern void vtkOrientedPolygonalHandleRepresentation3D_Init(vtkClientServerInterpreter* csi);
extern void vtkParallelopipedRepresentation_Init(vtkClientServerInterpreter* csi);
extern void vtkParallelopipedWidget_Init(vtkClientServerInterpreter* csi);
extern void vtkPlaneWidget_Init(vtkClientServerInterpreter* csi);
extern void vtkPlaybackRepresentation_Init(vtkClientServerInterpreter* csi);
extern void vtkPlaybackWidget_Init(vtkClientServerInterpreter* csi);
extern void vtkPointHandleRepresentation2D_Init(vtkClientServerInterpreter* csi);
extern void vtkPointHandleRepresentation3D_Init(vtkClientServerInterpreter* csi);
extern void vtkPointPlacer_Init(vtkClientServerInterpreter* csi);
extern void vtkPointWidget_Init(vtkClientServerInterpreter* csi);
extern void vtkPolyDataContourLineInterpolator_Init(vtkClientServerInterpreter* csi);
extern void vtkPolyDataPointPlacer_Init(vtkClientServerInterpreter* csi);
extern void vtkPolyDataSourceWidget_Init(vtkClientServerInterpreter* csi);
extern void vtkPolygonalHandleRepresentation3D_Init(vtkClientServerInterpreter* csi);
extern void vtkPolygonalSurfaceContourLineInterpolator_Init(vtkClientServerInterpreter* csi);
extern void vtkPolygonalSurfacePointPlacer_Init(vtkClientServerInterpreter* csi);
extern void vtkProp3DButtonRepresentation_Init(vtkClientServerInterpreter* csi);
extern void vtkRectilinearWipeRepresentation_Init(vtkClientServerInterpreter* csi);
extern void vtkRectilinearWipeWidget_Init(vtkClientServerInterpreter* csi);
extern void vtkScalarBarRepresentation_Init(vtkClientServerInterpreter* csi);
extern void vtkScalarBarWidget_Init(vtkClientServerInterpreter* csi);
extern void vtkSeedRepresentation_Init(vtkClientServerInterpreter* csi);
extern void vtkSeedWidget_Init(vtkClientServerInterpreter* csi);
extern void vtkSliderRepresentation2D_Init(vtkClientServerInterpreter* csi);
extern void vtkSliderRepresentation3D_Init(vtkClientServerInterpreter* csi);
extern void vtkSliderRepresentation_Init(vtkClientServerInterpreter* csi);
extern void vtkSliderWidget_Init(vtkClientServerInterpreter* csi);
extern void vtkSphereHandleRepresentation_Init(vtkClientServerInterpreter* csi);
extern void vtkSphereRepresentation_Init(vtkClientServerInterpreter* csi);
extern void vtkSphereWidget2_Init(vtkClientServerInterpreter* csi);
extern void vtkSphereWidget_Init(vtkClientServerInterpreter* csi);
extern void vtkSplineRepresentation_Init(vtkClientServerInterpreter* csi);
extern void vtkSplineWidget2_Init(vtkClientServerInterpreter* csi);
extern void vtkSplineWidget_Init(vtkClientServerInterpreter* csi);
extern void vtkTensorProbeRepresentation_Init(vtkClientServerInterpreter* csi);
extern void vtkTensorProbeWidget_Init(vtkClientServerInterpreter* csi);
extern void vtkTerrainContourLineInterpolator_Init(vtkClientServerInterpreter* csi);
extern void vtkTerrainDataPointPlacer_Init(vtkClientServerInterpreter* csi);
extern void vtkTextRepresentation_Init(vtkClientServerInterpreter* csi);
extern void vtkTexturedButtonRepresentation2D_Init(vtkClientServerInterpreter* csi);
extern void vtkTexturedButtonRepresentation_Init(vtkClientServerInterpreter* csi);
extern void vtkTextWidget_Init(vtkClientServerInterpreter* csi);
extern void vtkWidgetCallbackMapper_Init(vtkClientServerInterpreter* csi);
extern void vtkWidgetEvent_Init(vtkClientServerInterpreter* csi);
extern void vtkWidgetEventTranslator_Init(vtkClientServerInterpreter* csi);
extern void vtkWidgetRepresentation_Init(vtkClientServerInterpreter* csi);
extern void vtkWidgetSet_Init(vtkClientServerInterpreter* csi);
extern void vtkXYPlotWidget_Init(vtkClientServerInterpreter* csi);
extern void vtkResliceCursorLineRepresentation_Init(vtkClientServerInterpreter* csi);
extern void vtkResliceCursorRepresentation_Init(vtkClientServerInterpreter* csi);
extern void vtkResliceCursorThickLineRepresentation_Init(vtkClientServerInterpreter* csi);
extern void vtkResliceCursorWidget_Init(vtkClientServerInterpreter* csi);
extern void vtkResliceCursorActor_Init(vtkClientServerInterpreter* csi);
extern void vtkResliceCursorPicker_Init(vtkClientServerInterpreter* csi);
extern void vtkResliceCursor_Init(vtkClientServerInterpreter* csi);
extern void vtkResliceCursorPolyDataAlgorithm_Init(vtkClientServerInterpreter* csi);


extern "C" void VTK_WRAP_CS_EXPORT vtkInteractionWidgetsCS_Initialize(
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
    PyImport_AppendInittab("vtkInteractionWidgetsPython", initvtkInteractionWidgetsPython);
    }

  csi->Load("vtkInteractionWidgets");
#endif

  vtk3DWidget_Init(csi);
  vtkAbstractPolygonalHandleRepresentation3D_Init(csi);
  vtkAbstractWidget_Init(csi);
  vtkAffineRepresentation2D_Init(csi);
  vtkAffineRepresentation_Init(csi);
  vtkAffineWidget_Init(csi);
  vtkAngleRepresentation2D_Init(csi);
  vtkAngleRepresentation3D_Init(csi);
  vtkAngleRepresentation_Init(csi);
  vtkAngleWidget_Init(csi);
  vtkAxesTransformRepresentation_Init(csi);
  vtkAxesTransformWidget_Init(csi);
  vtkBalloonRepresentation_Init(csi);
  vtkBalloonWidget_Init(csi);
  vtkBezierContourLineInterpolator_Init(csi);
  vtkBiDimensionalRepresentation2D_Init(csi);
  vtkBiDimensionalRepresentation_Init(csi);
  vtkBiDimensionalWidget_Init(csi);
  vtkBorderRepresentation_Init(csi);
  vtkBorderWidget_Init(csi);
  vtkBoundedPlanePointPlacer_Init(csi);
  vtkBoxRepresentation_Init(csi);
  vtkBoxWidget2_Init(csi);
  vtkBoxWidget_Init(csi);
  vtkBrokenLineWidget_Init(csi);
  vtkButtonRepresentation_Init(csi);
  vtkButtonWidget_Init(csi);
  vtkCameraRepresentation_Init(csi);
  vtkCameraWidget_Init(csi);
  vtkCaptionRepresentation_Init(csi);
  vtkCaptionWidget_Init(csi);
  vtkCellCentersPointPlacer_Init(csi);
  vtkCenteredSliderRepresentation_Init(csi);
  vtkCenteredSliderWidget_Init(csi);
  vtkCheckerboardRepresentation_Init(csi);
  vtkCheckerboardWidget_Init(csi);
  vtkClosedSurfacePointPlacer_Init(csi);
  vtkConstrainedPointHandleRepresentation_Init(csi);
  vtkContinuousValueWidget_Init(csi);
  vtkContinuousValueWidgetRepresentation_Init(csi);
  vtkContourLineInterpolator_Init(csi);
  vtkContourRepresentation_Init(csi);
  vtkContourWidget_Init(csi);
  vtkDijkstraImageContourLineInterpolator_Init(csi);
  vtkDistanceRepresentation2D_Init(csi);
  vtkDistanceRepresentation3D_Init(csi);
  vtkDistanceRepresentation_Init(csi);
  vtkDistanceWidget_Init(csi);
  vtkEllipsoidTensorProbeRepresentation_Init(csi);
  vtkEvent_Init(csi);
  vtkFixedSizeHandleRepresentation3D_Init(csi);
  vtkFocalPlaneContourRepresentation_Init(csi);
  vtkFocalPlanePointPlacer_Init(csi);
  vtkHandleRepresentation_Init(csi);
  vtkHandleWidget_Init(csi);
  vtkHoverWidget_Init(csi);
  vtkImageActorPointPlacer_Init(csi);
  vtkImageCroppingRegionsWidget_Init(csi);
  vtkImageOrthoPlanes_Init(csi);
  vtkImagePlaneWidget_Init(csi);
  vtkImageTracerWidget_Init(csi);
  vtkImplicitPlaneRepresentation_Init(csi);
  vtkImplicitPlaneWidget2_Init(csi);
  vtkImplicitPlaneWidget_Init(csi);
  vtkLinearContourLineInterpolator_Init(csi);
  vtkLineRepresentation_Init(csi);
  vtkLineWidget2_Init(csi);
  vtkLineWidget_Init(csi);
  vtkLogoRepresentation_Init(csi);
  vtkLogoWidget_Init(csi);
  vtkOrientationMarkerWidget_Init(csi);
  vtkOrientedGlyphContourRepresentation_Init(csi);
  vtkOrientedGlyphFocalPlaneContourRepresentation_Init(csi);
  vtkOrientedPolygonalHandleRepresentation3D_Init(csi);
  vtkParallelopipedRepresentation_Init(csi);
  vtkParallelopipedWidget_Init(csi);
  vtkPlaneWidget_Init(csi);
  vtkPlaybackRepresentation_Init(csi);
  vtkPlaybackWidget_Init(csi);
  vtkPointHandleRepresentation2D_Init(csi);
  vtkPointHandleRepresentation3D_Init(csi);
  vtkPointPlacer_Init(csi);
  vtkPointWidget_Init(csi);
  vtkPolyDataContourLineInterpolator_Init(csi);
  vtkPolyDataPointPlacer_Init(csi);
  vtkPolyDataSourceWidget_Init(csi);
  vtkPolygonalHandleRepresentation3D_Init(csi);
  vtkPolygonalSurfaceContourLineInterpolator_Init(csi);
  vtkPolygonalSurfacePointPlacer_Init(csi);
  vtkProp3DButtonRepresentation_Init(csi);
  vtkRectilinearWipeRepresentation_Init(csi);
  vtkRectilinearWipeWidget_Init(csi);
  vtkScalarBarRepresentation_Init(csi);
  vtkScalarBarWidget_Init(csi);
  vtkSeedRepresentation_Init(csi);
  vtkSeedWidget_Init(csi);
  vtkSliderRepresentation2D_Init(csi);
  vtkSliderRepresentation3D_Init(csi);
  vtkSliderRepresentation_Init(csi);
  vtkSliderWidget_Init(csi);
  vtkSphereHandleRepresentation_Init(csi);
  vtkSphereRepresentation_Init(csi);
  vtkSphereWidget2_Init(csi);
  vtkSphereWidget_Init(csi);
  vtkSplineRepresentation_Init(csi);
  vtkSplineWidget2_Init(csi);
  vtkSplineWidget_Init(csi);
  vtkTensorProbeRepresentation_Init(csi);
  vtkTensorProbeWidget_Init(csi);
  vtkTerrainContourLineInterpolator_Init(csi);
  vtkTerrainDataPointPlacer_Init(csi);
  vtkTextRepresentation_Init(csi);
  vtkTexturedButtonRepresentation2D_Init(csi);
  vtkTexturedButtonRepresentation_Init(csi);
  vtkTextWidget_Init(csi);
  vtkWidgetCallbackMapper_Init(csi);
  vtkWidgetEvent_Init(csi);
  vtkWidgetEventTranslator_Init(csi);
  vtkWidgetRepresentation_Init(csi);
  vtkWidgetSet_Init(csi);
  vtkXYPlotWidget_Init(csi);
  vtkResliceCursorLineRepresentation_Init(csi);
  vtkResliceCursorRepresentation_Init(csi);
  vtkResliceCursorThickLineRepresentation_Init(csi);
  vtkResliceCursorWidget_Init(csi);
  vtkResliceCursorActor_Init(csi);
  vtkResliceCursorPicker_Init(csi);
  vtkResliceCursor_Init(csi);
  vtkResliceCursorPolyDataAlgorithm_Init(csi);

}
