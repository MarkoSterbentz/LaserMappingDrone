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
extern "C" void real_initvtkIOParallelXMLPython(const char *modulename);

void initvtkIOParallelXMLPython()
{
  static const char modulename[] = "vtkIOParallelXMLPython";
  real_initvtkIOParallelXMLPython(modulename);
}
#endif

extern void vtkXMLPDataSetWriter_Init(vtkClientServerInterpreter* csi);
extern void vtkXMLPDataWriter_Init(vtkClientServerInterpreter* csi);
extern void vtkXMLPImageDataWriter_Init(vtkClientServerInterpreter* csi);
extern void vtkXMLPPolyDataWriter_Init(vtkClientServerInterpreter* csi);
extern void vtkXMLPRectilinearGridWriter_Init(vtkClientServerInterpreter* csi);
extern void vtkXMLPStructuredDataWriter_Init(vtkClientServerInterpreter* csi);
extern void vtkXMLPStructuredGridWriter_Init(vtkClientServerInterpreter* csi);
extern void vtkXMLPUnstructuredDataWriter_Init(vtkClientServerInterpreter* csi);
extern void vtkXMLPUnstructuredGridWriter_Init(vtkClientServerInterpreter* csi);
extern void vtkXMLPHierarchicalBoxDataWriter_Init(vtkClientServerInterpreter* csi);
extern void vtkXMLPMultiBlockDataWriter_Init(vtkClientServerInterpreter* csi);
extern void vtkXMLPUniformGridAMRWriter_Init(vtkClientServerInterpreter* csi);


extern "C" void VTK_WRAP_CS_EXPORT vtkIOParallelXMLCS_Initialize(
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
    PyImport_AppendInittab("vtkIOParallelXMLPython", initvtkIOParallelXMLPython);
    }

  csi->Load("vtkIOParallelXML");
#endif

  vtkXMLPDataSetWriter_Init(csi);
  vtkXMLPDataWriter_Init(csi);
  vtkXMLPImageDataWriter_Init(csi);
  vtkXMLPPolyDataWriter_Init(csi);
  vtkXMLPRectilinearGridWriter_Init(csi);
  vtkXMLPStructuredDataWriter_Init(csi);
  vtkXMLPStructuredGridWriter_Init(csi);
  vtkXMLPUnstructuredDataWriter_Init(csi);
  vtkXMLPUnstructuredGridWriter_Init(csi);
  vtkXMLPHierarchicalBoxDataWriter_Init(csi);
  vtkXMLPMultiBlockDataWriter_Init(csi);
  vtkXMLPUniformGridAMRWriter_Init(csi);

}
