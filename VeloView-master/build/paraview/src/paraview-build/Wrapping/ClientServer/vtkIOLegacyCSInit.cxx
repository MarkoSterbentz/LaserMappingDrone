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
extern "C" void real_initvtkIOLegacyPython(const char *modulename);

void initvtkIOLegacyPython()
{
  static const char modulename[] = "vtkIOLegacyPython";
  real_initvtkIOLegacyPython(modulename);
}
#endif

extern void vtkCompositeDataReader_Init(vtkClientServerInterpreter* csi);
extern void vtkCompositeDataWriter_Init(vtkClientServerInterpreter* csi);
extern void vtkDataObjectReader_Init(vtkClientServerInterpreter* csi);
extern void vtkDataObjectWriter_Init(vtkClientServerInterpreter* csi);
extern void vtkDataReader_Init(vtkClientServerInterpreter* csi);
extern void vtkDataSetReader_Init(vtkClientServerInterpreter* csi);
extern void vtkDataSetWriter_Init(vtkClientServerInterpreter* csi);
extern void vtkDataWriter_Init(vtkClientServerInterpreter* csi);
extern void vtkGenericDataObjectReader_Init(vtkClientServerInterpreter* csi);
extern void vtkGenericDataObjectWriter_Init(vtkClientServerInterpreter* csi);
extern void vtkGraphReader_Init(vtkClientServerInterpreter* csi);
extern void vtkGraphWriter_Init(vtkClientServerInterpreter* csi);
extern void vtkPolyDataReader_Init(vtkClientServerInterpreter* csi);
extern void vtkPolyDataWriter_Init(vtkClientServerInterpreter* csi);
extern void vtkRectilinearGridReader_Init(vtkClientServerInterpreter* csi);
extern void vtkRectilinearGridWriter_Init(vtkClientServerInterpreter* csi);
extern void vtkSimplePointsReader_Init(vtkClientServerInterpreter* csi);
extern void vtkSimplePointsWriter_Init(vtkClientServerInterpreter* csi);
extern void vtkStructuredGridReader_Init(vtkClientServerInterpreter* csi);
extern void vtkStructuredGridWriter_Init(vtkClientServerInterpreter* csi);
extern void vtkStructuredPointsReader_Init(vtkClientServerInterpreter* csi);
extern void vtkStructuredPointsWriter_Init(vtkClientServerInterpreter* csi);
extern void vtkTableReader_Init(vtkClientServerInterpreter* csi);
extern void vtkTableWriter_Init(vtkClientServerInterpreter* csi);
extern void vtkTreeReader_Init(vtkClientServerInterpreter* csi);
extern void vtkTreeWriter_Init(vtkClientServerInterpreter* csi);
extern void vtkUnstructuredGridReader_Init(vtkClientServerInterpreter* csi);
extern void vtkUnstructuredGridWriter_Init(vtkClientServerInterpreter* csi);


extern "C" void VTK_WRAP_CS_EXPORT vtkIOLegacyCS_Initialize(
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
    PyImport_AppendInittab("vtkIOLegacyPython", initvtkIOLegacyPython);
    }

  csi->Load("vtkIOLegacy");
#endif

  vtkCompositeDataReader_Init(csi);
  vtkCompositeDataWriter_Init(csi);
  vtkDataObjectReader_Init(csi);
  vtkDataObjectWriter_Init(csi);
  vtkDataReader_Init(csi);
  vtkDataSetReader_Init(csi);
  vtkDataSetWriter_Init(csi);
  vtkDataWriter_Init(csi);
  vtkGenericDataObjectReader_Init(csi);
  vtkGenericDataObjectWriter_Init(csi);
  vtkGraphReader_Init(csi);
  vtkGraphWriter_Init(csi);
  vtkPolyDataReader_Init(csi);
  vtkPolyDataWriter_Init(csi);
  vtkRectilinearGridReader_Init(csi);
  vtkRectilinearGridWriter_Init(csi);
  vtkSimplePointsReader_Init(csi);
  vtkSimplePointsWriter_Init(csi);
  vtkStructuredGridReader_Init(csi);
  vtkStructuredGridWriter_Init(csi);
  vtkStructuredPointsReader_Init(csi);
  vtkStructuredPointsWriter_Init(csi);
  vtkTableReader_Init(csi);
  vtkTableWriter_Init(csi);
  vtkTreeReader_Init(csi);
  vtkTreeWriter_Init(csi);
  vtkUnstructuredGridReader_Init(csi);
  vtkUnstructuredGridWriter_Init(csi);

}
