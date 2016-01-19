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
extern "C" void real_initvtkIOXMLParserPython(const char *modulename);

void initvtkIOXMLParserPython()
{
  static const char modulename[] = "vtkIOXMLParserPython";
  real_initvtkIOXMLParserPython(modulename);
}
#endif

extern void vtkXMLDataParser_Init(vtkClientServerInterpreter* csi);
extern void vtkXMLParser_Init(vtkClientServerInterpreter* csi);
extern void vtkXMLUtilities_Init(vtkClientServerInterpreter* csi);


extern "C" void VTK_WRAP_CS_EXPORT vtkIOXMLParserCS_Initialize(
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
    PyImport_AppendInittab("vtkIOXMLParserPython", initvtkIOXMLParserPython);
    }

  csi->Load("vtkIOXMLParser");
#endif

  vtkXMLDataParser_Init(csi);
  vtkXMLParser_Init(csi);
  vtkXMLUtilities_Init(csi);

}
