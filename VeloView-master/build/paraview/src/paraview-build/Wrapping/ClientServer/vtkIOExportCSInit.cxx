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
extern "C" void real_initvtkIOExportPython(const char *modulename);

void initvtkIOExportPython()
{
  static const char modulename[] = "vtkIOExportPython";
  real_initvtkIOExportPython(modulename);
}
#endif

extern void vtkExporter_Init(vtkClientServerInterpreter* csi);
extern void vtkIVExporter_Init(vtkClientServerInterpreter* csi);
extern void vtkOBJExporter_Init(vtkClientServerInterpreter* csi);
extern void vtkOOGLExporter_Init(vtkClientServerInterpreter* csi);
extern void vtkPOVExporter_Init(vtkClientServerInterpreter* csi);
extern void vtkRIBExporter_Init(vtkClientServerInterpreter* csi);
extern void vtkRIBLight_Init(vtkClientServerInterpreter* csi);
extern void vtkRIBProperty_Init(vtkClientServerInterpreter* csi);
extern void vtkVRMLExporter_Init(vtkClientServerInterpreter* csi);
extern void vtkX3DExporter_Init(vtkClientServerInterpreter* csi);
extern void vtkGL2PSExporter_Init(vtkClientServerInterpreter* csi);


extern "C" void VTK_WRAP_CS_EXPORT vtkIOExportCS_Initialize(
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
    PyImport_AppendInittab("vtkIOExportPython", initvtkIOExportPython);
    }

  csi->Load("vtkIOExport");
#endif

  vtkExporter_Init(csi);
  vtkIVExporter_Init(csi);
  vtkOBJExporter_Init(csi);
  vtkOOGLExporter_Init(csi);
  vtkPOVExporter_Init(csi);
  vtkRIBExporter_Init(csi);
  vtkRIBLight_Init(csi);
  vtkRIBProperty_Init(csi);
  vtkVRMLExporter_Init(csi);
  vtkX3DExporter_Init(csi);
  vtkGL2PSExporter_Init(csi);

}
