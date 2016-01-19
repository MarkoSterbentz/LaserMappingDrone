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
extern "C" void real_initvtkPVCommonPython(const char *modulename);

void initvtkPVCommonPython()
{
  static const char modulename[] = "vtkPVCommonPython";
  real_initvtkPVCommonPython(modulename);
}
#endif

extern void vtkCommandOptions_Init(vtkClientServerInterpreter* csi);
extern void vtkCommandOptions_Init(vtkClientServerInterpreter* csi);
extern void vtkCommandOptionsXMLParser_Init(vtkClientServerInterpreter* csi);
extern void vtkCommandOptionsXMLParser_Init(vtkClientServerInterpreter* csi);
extern void vtkPVTestUtilities_Init(vtkClientServerInterpreter* csi);
extern void vtkPVTestUtilities_Init(vtkClientServerInterpreter* csi);
extern void vtkPVXMLElement_Init(vtkClientServerInterpreter* csi);
extern void vtkPVXMLElement_Init(vtkClientServerInterpreter* csi);
extern void vtkPVXMLParser_Init(vtkClientServerInterpreter* csi);
extern void vtkPVXMLParser_Init(vtkClientServerInterpreter* csi);
extern void vtkStringList_Init(vtkClientServerInterpreter* csi);
extern void vtkStringList_Init(vtkClientServerInterpreter* csi);
extern void vtkPVInstantiator_Init(vtkClientServerInterpreter* csi);
extern void vtkPVInstantiator_Init(vtkClientServerInterpreter* csi);


extern "C" void VTK_WRAP_CS_EXPORT vtkPVCommonCS_Initialize(
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
    PyImport_AppendInittab("vtkPVCommonPython", initvtkPVCommonPython);
    }

  csi->Load("vtkPVCommon");
#endif

  vtkCommandOptions_Init(csi);
  vtkCommandOptions_Init(csi);
  vtkCommandOptionsXMLParser_Init(csi);
  vtkCommandOptionsXMLParser_Init(csi);
  vtkPVTestUtilities_Init(csi);
  vtkPVTestUtilities_Init(csi);
  vtkPVXMLElement_Init(csi);
  vtkPVXMLElement_Init(csi);
  vtkPVXMLParser_Init(csi);
  vtkPVXMLParser_Init(csi);
  vtkStringList_Init(csi);
  vtkStringList_Init(csi);
  vtkPVInstantiator_Init(csi);
  vtkPVInstantiator_Init(csi);

}
