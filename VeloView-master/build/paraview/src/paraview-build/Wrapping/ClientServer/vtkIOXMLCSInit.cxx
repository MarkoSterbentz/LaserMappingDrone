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
extern "C" void real_initvtkIOXMLPython(const char *modulename);

void initvtkIOXMLPython()
{
  static const char modulename[] = "vtkIOXMLPython";
  real_initvtkIOXMLPython(modulename);
}
#endif

extern void vtkRTXMLPolyDataReader_Init(vtkClientServerInterpreter* csi);
extern void vtkXMLCompositeDataReader_Init(vtkClientServerInterpreter* csi);
extern void vtkXMLCompositeDataWriter_Init(vtkClientServerInterpreter* csi);
extern void vtkXMLDataReader_Init(vtkClientServerInterpreter* csi);
extern void vtkXMLDataSetWriter_Init(vtkClientServerInterpreter* csi);
extern void vtkXMLFileReadTester_Init(vtkClientServerInterpreter* csi);
extern void vtkXMLGenericDataObjectReader_Init(vtkClientServerInterpreter* csi);
extern void vtkXMLHierarchicalBoxDataFileConverter_Init(vtkClientServerInterpreter* csi);
extern void vtkXMLHierarchicalBoxDataReader_Init(vtkClientServerInterpreter* csi);
extern void vtkXMLHierarchicalBoxDataWriter_Init(vtkClientServerInterpreter* csi);
extern void vtkXMLHierarchicalDataReader_Init(vtkClientServerInterpreter* csi);
extern void vtkXMLHyperOctreeReader_Init(vtkClientServerInterpreter* csi);
extern void vtkXMLHyperOctreeWriter_Init(vtkClientServerInterpreter* csi);
extern void vtkXMLImageDataReader_Init(vtkClientServerInterpreter* csi);
extern void vtkXMLImageDataWriter_Init(vtkClientServerInterpreter* csi);
extern void vtkXMLMultiBlockDataReader_Init(vtkClientServerInterpreter* csi);
extern void vtkXMLMultiBlockDataWriter_Init(vtkClientServerInterpreter* csi);
extern void vtkXMLMultiGroupDataReader_Init(vtkClientServerInterpreter* csi);
extern void vtkXMLPDataReader_Init(vtkClientServerInterpreter* csi);
extern void vtkXMLPImageDataReader_Init(vtkClientServerInterpreter* csi);
extern void vtkXMLPolyDataReader_Init(vtkClientServerInterpreter* csi);
extern void vtkXMLPolyDataWriter_Init(vtkClientServerInterpreter* csi);
extern void vtkXMLPPolyDataReader_Init(vtkClientServerInterpreter* csi);
extern void vtkXMLPRectilinearGridReader_Init(vtkClientServerInterpreter* csi);
extern void vtkXMLPStructuredDataReader_Init(vtkClientServerInterpreter* csi);
extern void vtkXMLPStructuredGridReader_Init(vtkClientServerInterpreter* csi);
extern void vtkXMLPUnstructuredDataReader_Init(vtkClientServerInterpreter* csi);
extern void vtkXMLPUnstructuredGridReader_Init(vtkClientServerInterpreter* csi);
extern void vtkXMLReader_Init(vtkClientServerInterpreter* csi);
extern void vtkXMLRectilinearGridReader_Init(vtkClientServerInterpreter* csi);
extern void vtkXMLRectilinearGridWriter_Init(vtkClientServerInterpreter* csi);
extern void vtkXMLStructuredDataReader_Init(vtkClientServerInterpreter* csi);
extern void vtkXMLStructuredDataWriter_Init(vtkClientServerInterpreter* csi);
extern void vtkXMLStructuredGridReader_Init(vtkClientServerInterpreter* csi);
extern void vtkXMLStructuredGridWriter_Init(vtkClientServerInterpreter* csi);
extern void vtkXMLUniformGridAMRReader_Init(vtkClientServerInterpreter* csi);
extern void vtkXMLUniformGridAMRWriter_Init(vtkClientServerInterpreter* csi);
extern void vtkXMLUnstructuredDataReader_Init(vtkClientServerInterpreter* csi);
extern void vtkXMLUnstructuredDataWriter_Init(vtkClientServerInterpreter* csi);
extern void vtkXMLUnstructuredGridReader_Init(vtkClientServerInterpreter* csi);
extern void vtkXMLUnstructuredGridWriter_Init(vtkClientServerInterpreter* csi);
extern void vtkXMLWriter_Init(vtkClientServerInterpreter* csi);


extern "C" void VTK_WRAP_CS_EXPORT vtkIOXMLCS_Initialize(
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
    PyImport_AppendInittab("vtkIOXMLPython", initvtkIOXMLPython);
    }

  csi->Load("vtkIOXML");
#endif

  vtkRTXMLPolyDataReader_Init(csi);
  vtkXMLCompositeDataReader_Init(csi);
  vtkXMLCompositeDataWriter_Init(csi);
  vtkXMLDataReader_Init(csi);
  vtkXMLDataSetWriter_Init(csi);
  vtkXMLFileReadTester_Init(csi);
  vtkXMLGenericDataObjectReader_Init(csi);
  vtkXMLHierarchicalBoxDataFileConverter_Init(csi);
  vtkXMLHierarchicalBoxDataReader_Init(csi);
  vtkXMLHierarchicalBoxDataWriter_Init(csi);
  vtkXMLHierarchicalDataReader_Init(csi);
  vtkXMLHyperOctreeReader_Init(csi);
  vtkXMLHyperOctreeWriter_Init(csi);
  vtkXMLImageDataReader_Init(csi);
  vtkXMLImageDataWriter_Init(csi);
  vtkXMLMultiBlockDataReader_Init(csi);
  vtkXMLMultiBlockDataWriter_Init(csi);
  vtkXMLMultiGroupDataReader_Init(csi);
  vtkXMLPDataReader_Init(csi);
  vtkXMLPImageDataReader_Init(csi);
  vtkXMLPolyDataReader_Init(csi);
  vtkXMLPolyDataWriter_Init(csi);
  vtkXMLPPolyDataReader_Init(csi);
  vtkXMLPRectilinearGridReader_Init(csi);
  vtkXMLPStructuredDataReader_Init(csi);
  vtkXMLPStructuredGridReader_Init(csi);
  vtkXMLPUnstructuredDataReader_Init(csi);
  vtkXMLPUnstructuredGridReader_Init(csi);
  vtkXMLReader_Init(csi);
  vtkXMLRectilinearGridReader_Init(csi);
  vtkXMLRectilinearGridWriter_Init(csi);
  vtkXMLStructuredDataReader_Init(csi);
  vtkXMLStructuredDataWriter_Init(csi);
  vtkXMLStructuredGridReader_Init(csi);
  vtkXMLStructuredGridWriter_Init(csi);
  vtkXMLUniformGridAMRReader_Init(csi);
  vtkXMLUniformGridAMRWriter_Init(csi);
  vtkXMLUnstructuredDataReader_Init(csi);
  vtkXMLUnstructuredDataWriter_Init(csi);
  vtkXMLUnstructuredGridReader_Init(csi);
  vtkXMLUnstructuredGridWriter_Init(csi);
  vtkXMLWriter_Init(csi);

}
