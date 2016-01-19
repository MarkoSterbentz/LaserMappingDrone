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
extern "C" void real_initvtkIOInfovisPython(const char *modulename);

void initvtkIOInfovisPython()
{
  static const char modulename[] = "vtkIOInfovisPython";
  real_initvtkIOInfovisPython(modulename);
}
#endif

extern void vtkBiomTableReader_Init(vtkClientServerInterpreter* csi);
extern void vtkChacoGraphReader_Init(vtkClientServerInterpreter* csi);
extern void vtkDelimitedTextReader_Init(vtkClientServerInterpreter* csi);
extern void vtkDIMACSGraphReader_Init(vtkClientServerInterpreter* csi);
extern void vtkDIMACSGraphWriter_Init(vtkClientServerInterpreter* csi);
extern void vtkFixedWidthTextReader_Init(vtkClientServerInterpreter* csi);
extern void vtkISIReader_Init(vtkClientServerInterpreter* csi);
extern void vtkMultiNewickTreeReader_Init(vtkClientServerInterpreter* csi);
extern void vtkNewickTreeReader_Init(vtkClientServerInterpreter* csi);
extern void vtkNewickTreeWriter_Init(vtkClientServerInterpreter* csi);
extern void vtkPhyloXMLTreeReader_Init(vtkClientServerInterpreter* csi);
extern void vtkPhyloXMLTreeWriter_Init(vtkClientServerInterpreter* csi);
extern void vtkRISReader_Init(vtkClientServerInterpreter* csi);
extern void vtkTulipReader_Init(vtkClientServerInterpreter* csi);
extern void vtkXGMLReader_Init(vtkClientServerInterpreter* csi);
extern void vtkXMLTreeReader_Init(vtkClientServerInterpreter* csi);


extern "C" void VTK_WRAP_CS_EXPORT vtkIOInfovisCS_Initialize(
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
    PyImport_AppendInittab("vtkIOInfovisPython", initvtkIOInfovisPython);
    }

  csi->Load("vtkIOInfovis");
#endif

  vtkBiomTableReader_Init(csi);
  vtkChacoGraphReader_Init(csi);
  vtkDelimitedTextReader_Init(csi);
  vtkDIMACSGraphReader_Init(csi);
  vtkDIMACSGraphWriter_Init(csi);
  vtkFixedWidthTextReader_Init(csi);
  vtkISIReader_Init(csi);
  vtkMultiNewickTreeReader_Init(csi);
  vtkNewickTreeReader_Init(csi);
  vtkNewickTreeWriter_Init(csi);
  vtkPhyloXMLTreeReader_Init(csi);
  vtkPhyloXMLTreeWriter_Init(csi);
  vtkRISReader_Init(csi);
  vtkTulipReader_Init(csi);
  vtkXGMLReader_Init(csi);
  vtkXMLTreeReader_Init(csi);

}
