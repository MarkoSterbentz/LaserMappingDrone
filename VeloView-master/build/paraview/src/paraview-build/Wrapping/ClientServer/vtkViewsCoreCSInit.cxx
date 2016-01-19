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
extern "C" void real_initvtkViewsCorePython(const char *modulename);

void initvtkViewsCorePython()
{
  static const char modulename[] = "vtkViewsCorePython";
  real_initvtkViewsCorePython(modulename);
}
#endif

extern void vtkConvertSelectionDomain_Init(vtkClientServerInterpreter* csi);
extern void vtkDataRepresentation_Init(vtkClientServerInterpreter* csi);
extern void vtkEmptyRepresentation_Init(vtkClientServerInterpreter* csi);
extern void vtkRenderViewBase_Init(vtkClientServerInterpreter* csi);
extern void vtkView_Init(vtkClientServerInterpreter* csi);
extern void vtkViewTheme_Init(vtkClientServerInterpreter* csi);


extern "C" void VTK_WRAP_CS_EXPORT vtkViewsCoreCS_Initialize(
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
    PyImport_AppendInittab("vtkViewsCorePython", initvtkViewsCorePython);
    }

  csi->Load("vtkViewsCore");
#endif

  vtkConvertSelectionDomain_Init(csi);
  vtkDataRepresentation_Init(csi);
  vtkEmptyRepresentation_Init(csi);
  vtkRenderViewBase_Init(csi);
  vtkView_Init(csi);
  vtkViewTheme_Init(csi);

}
