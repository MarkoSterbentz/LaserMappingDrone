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
extern "C" void real_initvtkPVClientServerCoreCorePython(const char *modulename);

void initvtkPVClientServerCoreCorePython()
{
  static const char modulename[] = "vtkPVClientServerCoreCorePython";
  real_initvtkPVClientServerCoreCorePython(modulename);
}
#endif

extern void vtkCompleteArrays_Init(vtkClientServerInterpreter* csi);
extern void vtkMPIMToNSocketConnection_Init(vtkClientServerInterpreter* csi);
extern void vtkMPIMToNSocketConnectionPortInformation_Init(vtkClientServerInterpreter* csi);
extern void vtkNetworkAccessManager_Init(vtkClientServerInterpreter* csi);
extern void vtkPConvertSelection_Init(vtkClientServerInterpreter* csi);
extern void vtkProcessModule_Init(vtkClientServerInterpreter* csi);
extern void vtkPVAlgorithmPortsInformation_Init(vtkClientServerInterpreter* csi);
extern void vtkPVArrayInformation_Init(vtkClientServerInterpreter* csi);
extern void vtkPVClassNameInformation_Init(vtkClientServerInterpreter* csi);
extern void vtkPVCompositeDataInformation_Init(vtkClientServerInterpreter* csi);
extern void vtkPVCompositeDataInformationIterator_Init(vtkClientServerInterpreter* csi);
extern void vtkPVDataInformation_Init(vtkClientServerInterpreter* csi);
extern void vtkPVDataInformationHelper_Init(vtkClientServerInterpreter* csi);
extern void vtkPVDataSetAttributesInformation_Init(vtkClientServerInterpreter* csi);
extern void vtkPVDataSizeInformation_Init(vtkClientServerInterpreter* csi);
extern void vtkPVDisableStackTraceSignalHandler_Init(vtkClientServerInterpreter* csi);
extern void vtkPVEnableStackTraceSignalHandler_Init(vtkClientServerInterpreter* csi);
extern void vtkPVExtractSelection_Init(vtkClientServerInterpreter* csi);
extern void vtkPVExtractArraysOverTime_Init(vtkClientServerInterpreter* csi);
extern void vtkPVGenericAttributeInformation_Init(vtkClientServerInterpreter* csi);
extern void vtkPVInformation_Init(vtkClientServerInterpreter* csi);
extern void vtkPVMemoryUseInformation_Init(vtkClientServerInterpreter* csi);
extern void vtkPVMultiClientsInformation_Init(vtkClientServerInterpreter* csi);
extern void vtkPVOptions_Init(vtkClientServerInterpreter* csi);
extern void vtkPVPluginLoader_Init(vtkClientServerInterpreter* csi);
extern void vtkPVPluginsInformation_Init(vtkClientServerInterpreter* csi);
extern void vtkPVPluginTracker_Init(vtkClientServerInterpreter* csi);
extern void vtkPVProgressHandler_Init(vtkClientServerInterpreter* csi);
extern void vtkPVPythonInformation_Init(vtkClientServerInterpreter* csi);
extern void vtkPVPythonModule_Init(vtkClientServerInterpreter* csi);
extern void vtkPVPythonOptions_Init(vtkClientServerInterpreter* csi);
extern void vtkPVServerInformation_Init(vtkClientServerInterpreter* csi);
extern void vtkPVSession_Init(vtkClientServerInterpreter* csi);
extern void vtkPVSILInformation_Init(vtkClientServerInterpreter* csi);
extern void vtkPVSystemConfigInformation_Init(vtkClientServerInterpreter* csi);
extern void vtkPVSystemInformation_Init(vtkClientServerInterpreter* csi);
extern void vtkPVTemporalDataInformation_Init(vtkClientServerInterpreter* csi);
extern void vtkPVTimerInformation_Init(vtkClientServerInterpreter* csi);
extern void vtkSession_Init(vtkClientServerInterpreter* csi);
extern void vtkSessionIterator_Init(vtkClientServerInterpreter* csi);
extern void vtkTCPNetworkAccessManager_Init(vtkClientServerInterpreter* csi);
extern void vtkPythonExtractSelection_Init(vtkClientServerInterpreter* csi);
extern void vtkPythonProgrammableFilter_Init(vtkClientServerInterpreter* csi);
extern void vtkPythonAnnotationFilter_Init(vtkClientServerInterpreter* csi);


extern "C" void VTK_WRAP_CS_EXPORT vtkPVClientServerCoreCoreCS_Initialize(
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
    PyImport_AppendInittab("vtkPVClientServerCoreCorePython", initvtkPVClientServerCoreCorePython);
    }

  csi->Load("vtkPVClientServerCoreCore");
#endif

  vtkCompleteArrays_Init(csi);
  vtkMPIMToNSocketConnection_Init(csi);
  vtkMPIMToNSocketConnectionPortInformation_Init(csi);
  vtkNetworkAccessManager_Init(csi);
  vtkPConvertSelection_Init(csi);
  vtkProcessModule_Init(csi);
  vtkPVAlgorithmPortsInformation_Init(csi);
  vtkPVArrayInformation_Init(csi);
  vtkPVClassNameInformation_Init(csi);
  vtkPVCompositeDataInformation_Init(csi);
  vtkPVCompositeDataInformationIterator_Init(csi);
  vtkPVDataInformation_Init(csi);
  vtkPVDataInformationHelper_Init(csi);
  vtkPVDataSetAttributesInformation_Init(csi);
  vtkPVDataSizeInformation_Init(csi);
  vtkPVDisableStackTraceSignalHandler_Init(csi);
  vtkPVEnableStackTraceSignalHandler_Init(csi);
  vtkPVExtractSelection_Init(csi);
  vtkPVExtractArraysOverTime_Init(csi);
  vtkPVGenericAttributeInformation_Init(csi);
  vtkPVInformation_Init(csi);
  vtkPVMemoryUseInformation_Init(csi);
  vtkPVMultiClientsInformation_Init(csi);
  vtkPVOptions_Init(csi);
  vtkPVPluginLoader_Init(csi);
  vtkPVPluginsInformation_Init(csi);
  vtkPVPluginTracker_Init(csi);
  vtkPVProgressHandler_Init(csi);
  vtkPVPythonInformation_Init(csi);
  vtkPVPythonModule_Init(csi);
  vtkPVPythonOptions_Init(csi);
  vtkPVServerInformation_Init(csi);
  vtkPVSession_Init(csi);
  vtkPVSILInformation_Init(csi);
  vtkPVSystemConfigInformation_Init(csi);
  vtkPVSystemInformation_Init(csi);
  vtkPVTemporalDataInformation_Init(csi);
  vtkPVTimerInformation_Init(csi);
  vtkSession_Init(csi);
  vtkSessionIterator_Init(csi);
  vtkTCPNetworkAccessManager_Init(csi);
  vtkPythonExtractSelection_Init(csi);
  vtkPythonProgrammableFilter_Init(csi);
  vtkPythonAnnotationFilter_Init(csi);

}
