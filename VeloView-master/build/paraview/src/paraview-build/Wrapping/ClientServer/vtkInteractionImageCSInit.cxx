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
extern "C" void real_initvtkInteractionImagePython(const char *modulename);

void initvtkInteractionImagePython()
{
  static const char modulename[] = "vtkInteractionImagePython";
  real_initvtkInteractionImagePython(modulename);
}
#endif

extern void vtkImageViewer2_Init(vtkClientServerInterpreter* csi);
extern void vtkImageViewer_Init(vtkClientServerInterpreter* csi);
extern void vtkResliceImageViewer_Init(vtkClientServerInterpreter* csi);
extern void vtkResliceImageViewerMeasurements_Init(vtkClientServerInterpreter* csi);


extern "C" void VTK_WRAP_CS_EXPORT vtkInteractionImageCS_Initialize(
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
    PyImport_AppendInittab("vtkInteractionImagePython", initvtkInteractionImagePython);
    }

  csi->Load("vtkInteractionImage");
#endif

  vtkImageViewer2_Init(csi);
  vtkImageViewer_Init(csi);
  vtkResliceImageViewer_Init(csi);
  vtkResliceImageViewerMeasurements_Init(csi);

}
