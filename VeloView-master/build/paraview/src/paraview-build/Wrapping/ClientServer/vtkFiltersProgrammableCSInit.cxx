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
extern "C" void real_initvtkFiltersProgrammablePython(const char *modulename);

void initvtkFiltersProgrammablePython()
{
  static const char modulename[] = "vtkFiltersProgrammablePython";
  real_initvtkFiltersProgrammablePython(modulename);
}
#endif

extern void vtkProgrammableAttributeDataFilter_Init(vtkClientServerInterpreter* csi);
extern void vtkProgrammableFilter_Init(vtkClientServerInterpreter* csi);
extern void vtkProgrammableGlyphFilter_Init(vtkClientServerInterpreter* csi);


extern "C" void VTK_WRAP_CS_EXPORT vtkFiltersProgrammableCS_Initialize(
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
    PyImport_AppendInittab("vtkFiltersProgrammablePython", initvtkFiltersProgrammablePython);
    }

  csi->Load("vtkFiltersProgrammable");
#endif

  vtkProgrammableAttributeDataFilter_Init(csi);
  vtkProgrammableFilter_Init(csi);
  vtkProgrammableGlyphFilter_Init(csi);

}
