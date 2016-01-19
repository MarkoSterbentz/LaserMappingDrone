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
extern "C" void real_initvtkPVServerImplementationCorePython(const char *modulename);

void initvtkPVServerImplementationCorePython()
{
  static const char modulename[] = "vtkPVServerImplementationCorePython";
  real_initvtkPVServerImplementationCorePython(modulename);
}
#endif

extern void vtkPVCatalystSessionCore_Init(vtkClientServerInterpreter* csi);
extern void vtkPVProxyDefinitionIterator_Init(vtkClientServerInterpreter* csi);
extern void vtkPVSessionBase_Init(vtkClientServerInterpreter* csi);
extern void vtkPVSessionCore_Init(vtkClientServerInterpreter* csi);
extern void vtkPVSessionCoreInterpreterHelper_Init(vtkClientServerInterpreter* csi);
extern void vtkPVSessionServer_Init(vtkClientServerInterpreter* csi);
extern void vtkSIArraySelectionProperty_Init(vtkClientServerInterpreter* csi);
extern void vtkSICollaborationManager_Init(vtkClientServerInterpreter* csi);
extern void vtkSICompoundSourceProxy_Init(vtkClientServerInterpreter* csi);
extern void vtkSIDataArrayProperty_Init(vtkClientServerInterpreter* csi);
extern void vtkSIDirectoryProxy_Init(vtkClientServerInterpreter* csi);
extern void vtkSIDoubleMapProperty_Init(vtkClientServerInterpreter* csi);
extern void vtkSIDoubleVectorProperty_Init(vtkClientServerInterpreter* csi);
extern void vtkSIMetaReaderProxy_Init(vtkClientServerInterpreter* csi);
extern void vtkSIIdTypeVectorProperty_Init(vtkClientServerInterpreter* csi);
extern void vtkSIInputProperty_Init(vtkClientServerInterpreter* csi);
extern void vtkSIIntVectorProperty_Init(vtkClientServerInterpreter* csi);
extern void vtkSIObject_Init(vtkClientServerInterpreter* csi);
extern void vtkSIProperty_Init(vtkClientServerInterpreter* csi);
extern void vtkSIProxy_Init(vtkClientServerInterpreter* csi);
extern void vtkSIProxyDefinitionManager_Init(vtkClientServerInterpreter* csi);
extern void vtkSIProxyProperty_Init(vtkClientServerInterpreter* csi);
extern void vtkSISILProperty_Init(vtkClientServerInterpreter* csi);
extern void vtkSISourceProxy_Init(vtkClientServerInterpreter* csi);
extern void vtkSIStringVectorProperty_Init(vtkClientServerInterpreter* csi);
extern void vtkSITimeLabelProperty_Init(vtkClientServerInterpreter* csi);
extern void vtkSITimeRangeProperty_Init(vtkClientServerInterpreter* csi);
extern void vtkSITimeStepsProperty_Init(vtkClientServerInterpreter* csi);
extern void vtkSIVectorProperty_Init(vtkClientServerInterpreter* csi);
extern void vtkSIWriterProxy_Init(vtkClientServerInterpreter* csi);


extern "C" void VTK_WRAP_CS_EXPORT vtkPVServerImplementationCoreCS_Initialize(
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
    PyImport_AppendInittab("vtkPVServerImplementationCorePython", initvtkPVServerImplementationCorePython);
    }

  csi->Load("vtkPVServerImplementationCore");
#endif

  vtkPVCatalystSessionCore_Init(csi);
  vtkPVProxyDefinitionIterator_Init(csi);
  vtkPVSessionBase_Init(csi);
  vtkPVSessionCore_Init(csi);
  vtkPVSessionCoreInterpreterHelper_Init(csi);
  vtkPVSessionServer_Init(csi);
  vtkSIArraySelectionProperty_Init(csi);
  vtkSICollaborationManager_Init(csi);
  vtkSICompoundSourceProxy_Init(csi);
  vtkSIDataArrayProperty_Init(csi);
  vtkSIDirectoryProxy_Init(csi);
  vtkSIDoubleMapProperty_Init(csi);
  vtkSIDoubleVectorProperty_Init(csi);
  vtkSIMetaReaderProxy_Init(csi);
  vtkSIIdTypeVectorProperty_Init(csi);
  vtkSIInputProperty_Init(csi);
  vtkSIIntVectorProperty_Init(csi);
  vtkSIObject_Init(csi);
  vtkSIProperty_Init(csi);
  vtkSIProxy_Init(csi);
  vtkSIProxyDefinitionManager_Init(csi);
  vtkSIProxyProperty_Init(csi);
  vtkSISILProperty_Init(csi);
  vtkSISourceProxy_Init(csi);
  vtkSIStringVectorProperty_Init(csi);
  vtkSITimeLabelProperty_Init(csi);
  vtkSITimeRangeProperty_Init(csi);
  vtkSITimeStepsProperty_Init(csi);
  vtkSIVectorProperty_Init(csi);
  vtkSIWriterProxy_Init(csi);

}
