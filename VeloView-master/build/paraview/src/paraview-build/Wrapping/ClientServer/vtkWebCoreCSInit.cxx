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
extern "C" void real_initvtkWebCorePython(const char *modulename);

void initvtkWebCorePython()
{
  static const char modulename[] = "vtkWebCorePython";
  real_initvtkWebCorePython(modulename);
}
#endif

extern void vtkDataEncoder_Init(vtkClientServerInterpreter* csi);
extern void vtkWebApplication_Init(vtkClientServerInterpreter* csi);
extern void vtkWebInteractionEvent_Init(vtkClientServerInterpreter* csi);
extern void vtkWebUtilities_Init(vtkClientServerInterpreter* csi);
extern void vtkObjectIdMap_Init(vtkClientServerInterpreter* csi);


extern "C" void VTK_WRAP_CS_EXPORT vtkWebCoreCS_Initialize(
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
    PyImport_AppendInittab("vtkWebCorePython", initvtkWebCorePython);
    }

  csi->Load("vtkWebCore");
#endif

  vtkDataEncoder_Init(csi);
  vtkWebApplication_Init(csi);
  vtkWebInteractionEvent_Init(csi);
  vtkWebUtilities_Init(csi);
  vtkObjectIdMap_Init(csi);

}
