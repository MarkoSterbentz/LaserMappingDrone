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
extern "C" void real_initvtkPVServerManagerDefaultPython(const char *modulename);

void initvtkPVServerManagerDefaultPython()
{
  static const char modulename[] = "vtkPVServerManagerDefaultPython";
  real_initvtkPVServerManagerDefaultPython(modulename);
}
#endif

extern void vtkPVGeneralSettings_Init(vtkClientServerInterpreter* csi);
extern void vtkPVMultiServerDataSource_Init(vtkClientServerInterpreter* csi);
extern void vtkSMCameraConfigurationReader_Init(vtkClientServerInterpreter* csi);
extern void vtkSMCameraConfigurationWriter_Init(vtkClientServerInterpreter* csi);
extern void vtkSMCSVExporterProxy_Init(vtkClientServerInterpreter* csi);
extern void vtkSMDirectoryProxy_Init(vtkClientServerInterpreter* csi);
extern void vtkSMExporterProxy_Init(vtkClientServerInterpreter* csi);
extern void vtkSMInteractionUndoStackBuilder_Init(vtkClientServerInterpreter* csi);
extern void vtkSMMultiServerSourceProxy_Init(vtkClientServerInterpreter* csi);
extern void vtkSMPropertyModificationUndoElement_Init(vtkClientServerInterpreter* csi);
extern void vtkSMProxyConfigurationReader_Init(vtkClientServerInterpreter* csi);
extern void vtkSMProxyConfigurationWriter_Init(vtkClientServerInterpreter* csi);
extern void vtkSMPSWriterProxy_Init(vtkClientServerInterpreter* csi);
extern void vtkSMRenderViewExporterProxy_Init(vtkClientServerInterpreter* csi);
extern void vtkSMTesting_Init(vtkClientServerInterpreter* csi);
extern void vtkSMViewExportHelper_Init(vtkClientServerInterpreter* csi);
extern void vtkSMGL2PSExporterProxy_Init(vtkClientServerInterpreter* csi);


extern "C" void VTK_WRAP_CS_EXPORT vtkPVServerManagerDefaultCS_Initialize(
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
    PyImport_AppendInittab("vtkPVServerManagerDefaultPython", initvtkPVServerManagerDefaultPython);
    }

  csi->Load("vtkPVServerManagerDefault");
#endif

  vtkPVGeneralSettings_Init(csi);
  vtkPVMultiServerDataSource_Init(csi);
  vtkSMCameraConfigurationReader_Init(csi);
  vtkSMCameraConfigurationWriter_Init(csi);
  vtkSMCSVExporterProxy_Init(csi);
  vtkSMDirectoryProxy_Init(csi);
  vtkSMExporterProxy_Init(csi);
  vtkSMInteractionUndoStackBuilder_Init(csi);
  vtkSMMultiServerSourceProxy_Init(csi);
  vtkSMPropertyModificationUndoElement_Init(csi);
  vtkSMProxyConfigurationReader_Init(csi);
  vtkSMProxyConfigurationWriter_Init(csi);
  vtkSMPSWriterProxy_Init(csi);
  vtkSMRenderViewExporterProxy_Init(csi);
  vtkSMTesting_Init(csi);
  vtkSMViewExportHelper_Init(csi);
  vtkSMGL2PSExporterProxy_Init(csi);

}
