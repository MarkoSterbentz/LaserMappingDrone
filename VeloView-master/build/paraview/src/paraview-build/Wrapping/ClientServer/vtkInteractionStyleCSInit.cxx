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
extern "C" void real_initvtkInteractionStylePython(const char *modulename);

void initvtkInteractionStylePython()
{
  static const char modulename[] = "vtkInteractionStylePython";
  real_initvtkInteractionStylePython(modulename);
}
#endif

extern void vtkInteractorStyleDrawPolygon_Init(vtkClientServerInterpreter* csi);
extern void vtkInteractorStyleFlight_Init(vtkClientServerInterpreter* csi);
extern void vtkInteractorStyleImage_Init(vtkClientServerInterpreter* csi);
extern void vtkInteractorStyleJoystickActor_Init(vtkClientServerInterpreter* csi);
extern void vtkInteractorStyleJoystickCamera_Init(vtkClientServerInterpreter* csi);
extern void vtkInteractorStyleMultiTouchCamera_Init(vtkClientServerInterpreter* csi);
extern void vtkInteractorStyleRubberBand2D_Init(vtkClientServerInterpreter* csi);
extern void vtkInteractorStyleRubberBand3D_Init(vtkClientServerInterpreter* csi);
extern void vtkInteractorStyleRubberBandPick_Init(vtkClientServerInterpreter* csi);
extern void vtkInteractorStyleRubberBandZoom_Init(vtkClientServerInterpreter* csi);
extern void vtkInteractorStyleTerrain_Init(vtkClientServerInterpreter* csi);
extern void vtkInteractorStyleTrackballActor_Init(vtkClientServerInterpreter* csi);
extern void vtkInteractorStyleTrackballCamera_Init(vtkClientServerInterpreter* csi);
extern void vtkInteractorStyleTrackball_Init(vtkClientServerInterpreter* csi);
extern void vtkInteractorStyleUnicam_Init(vtkClientServerInterpreter* csi);
extern void vtkInteractorStyleUser_Init(vtkClientServerInterpreter* csi);
extern void vtkInteractorStyleSwitch_Init(vtkClientServerInterpreter* csi);
extern void vtkParallelCoordinatesInteractorStyle_Init(vtkClientServerInterpreter* csi);


extern "C" void VTK_WRAP_CS_EXPORT vtkInteractionStyleCS_Initialize(
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
    PyImport_AppendInittab("vtkInteractionStylePython", initvtkInteractionStylePython);
    }

  csi->Load("vtkInteractionStyle");
#endif

  vtkInteractorStyleDrawPolygon_Init(csi);
  vtkInteractorStyleFlight_Init(csi);
  vtkInteractorStyleImage_Init(csi);
  vtkInteractorStyleJoystickActor_Init(csi);
  vtkInteractorStyleJoystickCamera_Init(csi);
  vtkInteractorStyleMultiTouchCamera_Init(csi);
  vtkInteractorStyleRubberBand2D_Init(csi);
  vtkInteractorStyleRubberBand3D_Init(csi);
  vtkInteractorStyleRubberBandPick_Init(csi);
  vtkInteractorStyleRubberBandZoom_Init(csi);
  vtkInteractorStyleTerrain_Init(csi);
  vtkInteractorStyleTrackballActor_Init(csi);
  vtkInteractorStyleTrackballCamera_Init(csi);
  vtkInteractorStyleTrackball_Init(csi);
  vtkInteractorStyleUnicam_Init(csi);
  vtkInteractorStyleUser_Init(csi);
  vtkInteractorStyleSwitch_Init(csi);
  vtkParallelCoordinatesInteractorStyle_Init(csi);

}
