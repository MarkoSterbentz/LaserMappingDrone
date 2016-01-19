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
extern "C" void real_initvtkIOExodusPython(const char *modulename);

void initvtkIOExodusPython()
{
  static const char modulename[] = "vtkIOExodusPython";
  real_initvtkIOExodusPython(modulename);
}
#endif

extern void vtkCPExodusIIElementBlock_Init(vtkClientServerInterpreter* csi);
extern void vtkCPExodusIIInSituReader_Init(vtkClientServerInterpreter* csi);
extern void vtkExodusIICache_Init(vtkClientServerInterpreter* csi);
extern void vtkExodusIIReader_Init(vtkClientServerInterpreter* csi);
extern void vtkExodusIIWriter_Init(vtkClientServerInterpreter* csi);
extern void vtkModelMetadata_Init(vtkClientServerInterpreter* csi);


extern "C" void VTK_WRAP_CS_EXPORT vtkIOExodusCS_Initialize(
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
    PyImport_AppendInittab("vtkIOExodusPython", initvtkIOExodusPython);
    }

  csi->Load("vtkIOExodus");
#endif

  vtkCPExodusIIElementBlock_Init(csi);
  vtkCPExodusIIInSituReader_Init(csi);
  vtkExodusIICache_Init(csi);
  vtkExodusIIReader_Init(csi);
  vtkExodusIIWriter_Init(csi);
  vtkModelMetadata_Init(csi);

}
