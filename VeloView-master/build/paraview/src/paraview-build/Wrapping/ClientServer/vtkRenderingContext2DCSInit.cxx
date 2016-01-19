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
extern "C" void real_initvtkRenderingContext2DPython(const char *modulename);

void initvtkRenderingContext2DPython()
{
  static const char modulename[] = "vtkRenderingContext2DPython";
  real_initvtkRenderingContext2DPython(modulename);
}
#endif

extern void vtkAbstractContextBufferId_Init(vtkClientServerInterpreter* csi);
extern void vtkAbstractContextItem_Init(vtkClientServerInterpreter* csi);
extern void vtkBlockItem_Init(vtkClientServerInterpreter* csi);
extern void vtkBrush_Init(vtkClientServerInterpreter* csi);
extern void vtkContext2D_Init(vtkClientServerInterpreter* csi);
extern void vtkContextActor_Init(vtkClientServerInterpreter* csi);
extern void vtkContextClip_Init(vtkClientServerInterpreter* csi);
extern void vtkContextItem_Init(vtkClientServerInterpreter* csi);
extern void vtkContextMapper2D_Init(vtkClientServerInterpreter* csi);
extern void vtkContextScene_Init(vtkClientServerInterpreter* csi);
extern void vtkContextTransform_Init(vtkClientServerInterpreter* csi);
extern void vtkImageItem_Init(vtkClientServerInterpreter* csi);
extern void vtkMarkerUtilities_Init(vtkClientServerInterpreter* csi);
extern void vtkPen_Init(vtkClientServerInterpreter* csi);
extern void vtkTooltipItem_Init(vtkClientServerInterpreter* csi);


extern "C" void VTK_WRAP_CS_EXPORT vtkRenderingContext2DCS_Initialize(
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
    PyImport_AppendInittab("vtkRenderingContext2DPython", initvtkRenderingContext2DPython);
    }

  csi->Load("vtkRenderingContext2D");
#endif

  vtkAbstractContextBufferId_Init(csi);
  vtkAbstractContextItem_Init(csi);
  vtkBlockItem_Init(csi);
  vtkBrush_Init(csi);
  vtkContext2D_Init(csi);
  vtkContextActor_Init(csi);
  vtkContextClip_Init(csi);
  vtkContextItem_Init(csi);
  vtkContextMapper2D_Init(csi);
  vtkContextScene_Init(csi);
  vtkContextTransform_Init(csi);
  vtkImageItem_Init(csi);
  vtkMarkerUtilities_Init(csi);
  vtkPen_Init(csi);
  vtkTooltipItem_Init(csi);

}
