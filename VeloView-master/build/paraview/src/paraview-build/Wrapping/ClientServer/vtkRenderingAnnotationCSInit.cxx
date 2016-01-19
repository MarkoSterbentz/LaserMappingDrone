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
extern "C" void real_initvtkRenderingAnnotationPython(const char *modulename);

void initvtkRenderingAnnotationPython()
{
  static const char modulename[] = "vtkRenderingAnnotationPython";
  real_initvtkRenderingAnnotationPython(modulename);
}
#endif

extern void vtkAnnotatedCubeActor_Init(vtkClientServerInterpreter* csi);
extern void vtkArcPlotter_Init(vtkClientServerInterpreter* csi);
extern void vtkAxesActor_Init(vtkClientServerInterpreter* csi);
extern void vtkAxisActor2D_Init(vtkClientServerInterpreter* csi);
extern void vtkAxisActor_Init(vtkClientServerInterpreter* csi);
extern void vtkAxisFollower_Init(vtkClientServerInterpreter* csi);
extern void vtkBarChartActor_Init(vtkClientServerInterpreter* csi);
extern void vtkCaptionActor2D_Init(vtkClientServerInterpreter* csi);
extern void vtkConvexHull2D_Init(vtkClientServerInterpreter* csi);
extern void vtkCornerAnnotation_Init(vtkClientServerInterpreter* csi);
extern void vtkCubeAxesActor2D_Init(vtkClientServerInterpreter* csi);
extern void vtkCubeAxesActor_Init(vtkClientServerInterpreter* csi);
extern void vtkGraphAnnotationLayersFilter_Init(vtkClientServerInterpreter* csi);
extern void vtkLeaderActor2D_Init(vtkClientServerInterpreter* csi);
extern void vtkLegendBoxActor_Init(vtkClientServerInterpreter* csi);
extern void vtkLegendScaleActor_Init(vtkClientServerInterpreter* csi);
extern void vtkPieChartActor_Init(vtkClientServerInterpreter* csi);
extern void vtkPolarAxesActor_Init(vtkClientServerInterpreter* csi);
extern void vtkProp3DAxisFollower_Init(vtkClientServerInterpreter* csi);
extern void vtkScalarBarActor_Init(vtkClientServerInterpreter* csi);
extern void vtkSpiderPlotActor_Init(vtkClientServerInterpreter* csi);
extern void vtkXYPlotActor_Init(vtkClientServerInterpreter* csi);


extern "C" void VTK_WRAP_CS_EXPORT vtkRenderingAnnotationCS_Initialize(
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
    PyImport_AppendInittab("vtkRenderingAnnotationPython", initvtkRenderingAnnotationPython);
    }

  csi->Load("vtkRenderingAnnotation");
#endif

  vtkAnnotatedCubeActor_Init(csi);
  vtkArcPlotter_Init(csi);
  vtkAxesActor_Init(csi);
  vtkAxisActor2D_Init(csi);
  vtkAxisActor_Init(csi);
  vtkAxisFollower_Init(csi);
  vtkBarChartActor_Init(csi);
  vtkCaptionActor2D_Init(csi);
  vtkConvexHull2D_Init(csi);
  vtkCornerAnnotation_Init(csi);
  vtkCubeAxesActor2D_Init(csi);
  vtkCubeAxesActor_Init(csi);
  vtkGraphAnnotationLayersFilter_Init(csi);
  vtkLeaderActor2D_Init(csi);
  vtkLegendBoxActor_Init(csi);
  vtkLegendScaleActor_Init(csi);
  vtkPieChartActor_Init(csi);
  vtkPolarAxesActor_Init(csi);
  vtkProp3DAxisFollower_Init(csi);
  vtkScalarBarActor_Init(csi);
  vtkSpiderPlotActor_Init(csi);
  vtkXYPlotActor_Init(csi);

}
