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
extern "C" void real_initvtkPVServerManagerCorePython(const char *modulename);

void initvtkPVServerManagerCorePython()
{
  static const char modulename[] = "vtkPVServerManagerCorePython";
  real_initvtkPVServerManagerCorePython(modulename);
}
#endif

extern void vtkLiveInsituLink_Init(vtkClientServerInterpreter* csi);
extern void vtkSMArrayListDomain_Init(vtkClientServerInterpreter* csi);
extern void vtkSMArrayRangeDomain_Init(vtkClientServerInterpreter* csi);
extern void vtkSMArraySelectionDomain_Init(vtkClientServerInterpreter* csi);
extern void vtkSMBooleanDomain_Init(vtkClientServerInterpreter* csi);
extern void vtkSMBoundsDomain_Init(vtkClientServerInterpreter* csi);
extern void vtkSMCollaborationManager_Init(vtkClientServerInterpreter* csi);
extern void vtkSMCompositeTreeDomain_Init(vtkClientServerInterpreter* csi);
extern void vtkSMCompoundProxyDefinitionLoader_Init(vtkClientServerInterpreter* csi);
extern void vtkSMCompoundSourceProxy_Init(vtkClientServerInterpreter* csi);
extern void vtkSMCompoundSourceProxyDefinitionBuilder_Init(vtkClientServerInterpreter* csi);
extern void vtkSMCoreUtilities_Init(vtkClientServerInterpreter* csi);
extern void vtkSMDataSourceProxy_Init(vtkClientServerInterpreter* csi);
extern void vtkSMDataTypeDomain_Init(vtkClientServerInterpreter* csi);
extern void vtkSMDeserializer_Init(vtkClientServerInterpreter* csi);
extern void vtkSMDeserializerProtobuf_Init(vtkClientServerInterpreter* csi);
extern void vtkSMDeserializerXMLCache_Init(vtkClientServerInterpreter* csi);
extern void vtkSMDeserializerXML_Init(vtkClientServerInterpreter* csi);
extern void vtkSMDimensionsDomain_Init(vtkClientServerInterpreter* csi);
extern void vtkSMDocumentation_Init(vtkClientServerInterpreter* csi);
extern void vtkSMDomain_Init(vtkClientServerInterpreter* csi);
extern void vtkSMDomainIterator_Init(vtkClientServerInterpreter* csi);
extern void vtkSMDoubleMapProperty_Init(vtkClientServerInterpreter* csi);
extern void vtkSMDoubleMapPropertyIterator_Init(vtkClientServerInterpreter* csi);
extern void vtkSMDoubleRangeDomain_Init(vtkClientServerInterpreter* csi);
extern void vtkSMDoubleVectorProperty_Init(vtkClientServerInterpreter* csi);
extern void vtkSMEnumerationDomain_Init(vtkClientServerInterpreter* csi);
extern void vtkSMExtentDomain_Init(vtkClientServerInterpreter* csi);
extern void vtkSMFieldDataDomain_Init(vtkClientServerInterpreter* csi);
extern void vtkSMFileListDomain_Init(vtkClientServerInterpreter* csi);
extern void vtkSMFixedTypeDomain_Init(vtkClientServerInterpreter* csi);
extern void vtkSMGlobalPropertiesLinkUndoElement_Init(vtkClientServerInterpreter* csi);
extern void vtkSMGlobalPropertiesProxy_Init(vtkClientServerInterpreter* csi);
extern void vtkSMIdTypeVectorProperty_Init(vtkClientServerInterpreter* csi);
extern void vtkSMInputArrayDomain_Init(vtkClientServerInterpreter* csi);
extern void vtkSMInputProperty_Init(vtkClientServerInterpreter* csi);
extern void vtkSMInsituStateLoader_Init(vtkClientServerInterpreter* csi);
extern void vtkSMIntRangeDomain_Init(vtkClientServerInterpreter* csi);
extern void vtkSMIntVectorProperty_Init(vtkClientServerInterpreter* csi);
extern void vtkSMLink_Init(vtkClientServerInterpreter* csi);
extern void vtkSMLiveInsituLinkProxy_Init(vtkClientServerInterpreter* csi);
extern void vtkSMMapProperty_Init(vtkClientServerInterpreter* csi);
extern void vtkSMNamedPropertyIterator_Init(vtkClientServerInterpreter* csi);
extern void vtkSMNumberOfComponentsDomain_Init(vtkClientServerInterpreter* csi);
extern void vtkSMObject_Init(vtkClientServerInterpreter* csi);
extern void vtkSMOrderedPropertyIterator_Init(vtkClientServerInterpreter* csi);
extern void vtkSMOutputPort_Init(vtkClientServerInterpreter* csi);
extern void vtkSMParaViewPipelineController_Init(vtkClientServerInterpreter* csi);
extern void vtkSMPWriterProxy_Init(vtkClientServerInterpreter* csi);
extern void vtkSMPipelineState_Init(vtkClientServerInterpreter* csi);
extern void vtkSMPluginLoaderProxy_Init(vtkClientServerInterpreter* csi);
extern void vtkSMPluginManager_Init(vtkClientServerInterpreter* csi);
extern void vtkSMProperty_Init(vtkClientServerInterpreter* csi);
extern void vtkSMPropertyGroup_Init(vtkClientServerInterpreter* csi);
extern void vtkSMPropertyIterator_Init(vtkClientServerInterpreter* csi);
extern void vtkSMPropertyLink_Init(vtkClientServerInterpreter* csi);
extern void vtkSMProxy_Init(vtkClientServerInterpreter* csi);
extern void vtkSMProxyDefinitionManager_Init(vtkClientServerInterpreter* csi);
extern void vtkSMProxyGroupDomain_Init(vtkClientServerInterpreter* csi);
extern void vtkSMProxyIterator_Init(vtkClientServerInterpreter* csi);
extern void vtkSMProxyLink_Init(vtkClientServerInterpreter* csi);
extern void vtkSMProxyListDomain_Init(vtkClientServerInterpreter* csi);
extern void vtkSMProxyLocator_Init(vtkClientServerInterpreter* csi);
extern void vtkSMProxyManager_Init(vtkClientServerInterpreter* csi);
extern void vtkSMProxyProperty_Init(vtkClientServerInterpreter* csi);
extern void vtkSMProxySelectionModel_Init(vtkClientServerInterpreter* csi);
extern void vtkSMReaderFactory_Init(vtkClientServerInterpreter* csi);
extern void vtkSMRemoteObject_Init(vtkClientServerInterpreter* csi);
extern void vtkSMRemoteObjectUpdateUndoElement_Init(vtkClientServerInterpreter* csi);
extern void vtkSMServerStateLocator_Init(vtkClientServerInterpreter* csi);
extern void vtkSMSessionClient_Init(vtkClientServerInterpreter* csi);
extern void vtkSMSession_Init(vtkClientServerInterpreter* csi);
extern void vtkSMSessionObject_Init(vtkClientServerInterpreter* csi);
extern void vtkSMSessionProxyManager_Init(vtkClientServerInterpreter* csi);
extern void vtkSMSettings_Init(vtkClientServerInterpreter* csi);
extern void vtkSMSettingsProxy_Init(vtkClientServerInterpreter* csi);
extern void vtkSMSILDomain_Init(vtkClientServerInterpreter* csi);
extern void vtkSMSILModel_Init(vtkClientServerInterpreter* csi);
extern void vtkSMSourceProxy_Init(vtkClientServerInterpreter* csi);
extern void vtkSMStateLoader_Init(vtkClientServerInterpreter* csi);
extern void vtkSMStateLocator_Init(vtkClientServerInterpreter* csi);
extern void vtkSMStateVersionController_Init(vtkClientServerInterpreter* csi);
extern void vtkSMStringListDomain_Init(vtkClientServerInterpreter* csi);
extern void vtkSMStringVectorProperty_Init(vtkClientServerInterpreter* csi);
extern void vtkSMUndoElement_Init(vtkClientServerInterpreter* csi);
extern void vtkSMUndoStackBuilder_Init(vtkClientServerInterpreter* csi);
extern void vtkSMUndoStack_Init(vtkClientServerInterpreter* csi);
extern void vtkSMNullProxy_Init(vtkClientServerInterpreter* csi);
extern void vtkSMTimeKeeper_Init(vtkClientServerInterpreter* csi);
extern void vtkSMTimeKeeperProxy_Init(vtkClientServerInterpreter* csi);
extern void vtkSMTrace_Init(vtkClientServerInterpreter* csi);
extern void vtkSMVectorProperty_Init(vtkClientServerInterpreter* csi);
extern void vtkSMWriterFactory_Init(vtkClientServerInterpreter* csi);
extern void vtkSMWriterProxy_Init(vtkClientServerInterpreter* csi);


extern "C" void VTK_WRAP_CS_EXPORT vtkPVServerManagerCoreCS_Initialize(
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
    PyImport_AppendInittab("vtkPVServerManagerCorePython", initvtkPVServerManagerCorePython);
    }

  csi->Load("vtkPVServerManagerCore");
#endif

  vtkLiveInsituLink_Init(csi);
  vtkSMArrayListDomain_Init(csi);
  vtkSMArrayRangeDomain_Init(csi);
  vtkSMArraySelectionDomain_Init(csi);
  vtkSMBooleanDomain_Init(csi);
  vtkSMBoundsDomain_Init(csi);
  vtkSMCollaborationManager_Init(csi);
  vtkSMCompositeTreeDomain_Init(csi);
  vtkSMCompoundProxyDefinitionLoader_Init(csi);
  vtkSMCompoundSourceProxy_Init(csi);
  vtkSMCompoundSourceProxyDefinitionBuilder_Init(csi);
  vtkSMCoreUtilities_Init(csi);
  vtkSMDataSourceProxy_Init(csi);
  vtkSMDataTypeDomain_Init(csi);
  vtkSMDeserializer_Init(csi);
  vtkSMDeserializerProtobuf_Init(csi);
  vtkSMDeserializerXMLCache_Init(csi);
  vtkSMDeserializerXML_Init(csi);
  vtkSMDimensionsDomain_Init(csi);
  vtkSMDocumentation_Init(csi);
  vtkSMDomain_Init(csi);
  vtkSMDomainIterator_Init(csi);
  vtkSMDoubleMapProperty_Init(csi);
  vtkSMDoubleMapPropertyIterator_Init(csi);
  vtkSMDoubleRangeDomain_Init(csi);
  vtkSMDoubleVectorProperty_Init(csi);
  vtkSMEnumerationDomain_Init(csi);
  vtkSMExtentDomain_Init(csi);
  vtkSMFieldDataDomain_Init(csi);
  vtkSMFileListDomain_Init(csi);
  vtkSMFixedTypeDomain_Init(csi);
  vtkSMGlobalPropertiesLinkUndoElement_Init(csi);
  vtkSMGlobalPropertiesProxy_Init(csi);
  vtkSMIdTypeVectorProperty_Init(csi);
  vtkSMInputArrayDomain_Init(csi);
  vtkSMInputProperty_Init(csi);
  vtkSMInsituStateLoader_Init(csi);
  vtkSMIntRangeDomain_Init(csi);
  vtkSMIntVectorProperty_Init(csi);
  vtkSMLink_Init(csi);
  vtkSMLiveInsituLinkProxy_Init(csi);
  vtkSMMapProperty_Init(csi);
  vtkSMNamedPropertyIterator_Init(csi);
  vtkSMNumberOfComponentsDomain_Init(csi);
  vtkSMObject_Init(csi);
  vtkSMOrderedPropertyIterator_Init(csi);
  vtkSMOutputPort_Init(csi);
  vtkSMParaViewPipelineController_Init(csi);
  vtkSMPWriterProxy_Init(csi);
  vtkSMPipelineState_Init(csi);
  vtkSMPluginLoaderProxy_Init(csi);
  vtkSMPluginManager_Init(csi);
  vtkSMProperty_Init(csi);
  vtkSMPropertyGroup_Init(csi);
  vtkSMPropertyIterator_Init(csi);
  vtkSMPropertyLink_Init(csi);
  vtkSMProxy_Init(csi);
  vtkSMProxyDefinitionManager_Init(csi);
  vtkSMProxyGroupDomain_Init(csi);
  vtkSMProxyIterator_Init(csi);
  vtkSMProxyLink_Init(csi);
  vtkSMProxyListDomain_Init(csi);
  vtkSMProxyLocator_Init(csi);
  vtkSMProxyManager_Init(csi);
  vtkSMProxyProperty_Init(csi);
  vtkSMProxySelectionModel_Init(csi);
  vtkSMReaderFactory_Init(csi);
  vtkSMRemoteObject_Init(csi);
  vtkSMRemoteObjectUpdateUndoElement_Init(csi);
  vtkSMServerStateLocator_Init(csi);
  vtkSMSessionClient_Init(csi);
  vtkSMSession_Init(csi);
  vtkSMSessionObject_Init(csi);
  vtkSMSessionProxyManager_Init(csi);
  vtkSMSettings_Init(csi);
  vtkSMSettingsProxy_Init(csi);
  vtkSMSILDomain_Init(csi);
  vtkSMSILModel_Init(csi);
  vtkSMSourceProxy_Init(csi);
  vtkSMStateLoader_Init(csi);
  vtkSMStateLocator_Init(csi);
  vtkSMStateVersionController_Init(csi);
  vtkSMStringListDomain_Init(csi);
  vtkSMStringVectorProperty_Init(csi);
  vtkSMUndoElement_Init(csi);
  vtkSMUndoStackBuilder_Init(csi);
  vtkSMUndoStack_Init(csi);
  vtkSMNullProxy_Init(csi);
  vtkSMTimeKeeper_Init(csi);
  vtkSMTimeKeeperProxy_Init(csi);
  vtkSMTrace_Init(csi);
  vtkSMVectorProperty_Init(csi);
  vtkSMWriterFactory_Init(csi);
  vtkSMWriterProxy_Init(csi);

}
