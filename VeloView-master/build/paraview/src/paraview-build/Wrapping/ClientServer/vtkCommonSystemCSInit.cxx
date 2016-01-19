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
extern "C" void real_initvtkCommonSystemPython(const char *modulename);

void initvtkCommonSystemPython()
{
  static const char modulename[] = "vtkCommonSystemPython";
  real_initvtkCommonSystemPython(modulename);
}
#endif

extern void vtkClientSocket_Init(vtkClientServerInterpreter* csi);
extern void vtkDirectory_Init(vtkClientServerInterpreter* csi);
extern void vtkServerSocket_Init(vtkClientServerInterpreter* csi);
extern void vtkSocket_Init(vtkClientServerInterpreter* csi);
extern void vtkSocketCollection_Init(vtkClientServerInterpreter* csi);
extern void vtkThreadMessager_Init(vtkClientServerInterpreter* csi);
extern void vtkTimerLog_Init(vtkClientServerInterpreter* csi);


extern "C" void VTK_WRAP_CS_EXPORT vtkCommonSystemCS_Initialize(
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
    PyImport_AppendInittab("vtkCommonSystemPython", initvtkCommonSystemPython);
    }

  csi->Load("vtkCommonSystem");
#endif

  vtkClientSocket_Init(csi);
  vtkDirectory_Init(csi);
  vtkServerSocket_Init(csi);
  vtkSocket_Init(csi);
  vtkSocketCollection_Init(csi);
  vtkThreadMessager_Init(csi);
  vtkTimerLog_Init(csi);

}
