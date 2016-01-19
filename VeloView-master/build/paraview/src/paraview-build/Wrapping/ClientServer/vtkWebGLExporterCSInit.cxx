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
extern "C" void real_initvtkWebGLExporterPython(const char *modulename);

void initvtkWebGLExporterPython()
{
  static const char modulename[] = "vtkWebGLExporterPython";
  real_initvtkWebGLExporterPython(modulename);
}
#endif

extern void vtkPVWebGLExporter_Init(vtkClientServerInterpreter* csi);
extern void vtkWebGLDataSet_Init(vtkClientServerInterpreter* csi);
extern void vtkWebGLExporter_Init(vtkClientServerInterpreter* csi);
extern void vtkWebGLObject_Init(vtkClientServerInterpreter* csi);
extern void vtkWebGLPolyData_Init(vtkClientServerInterpreter* csi);
extern void vtkWebGLWidget_Init(vtkClientServerInterpreter* csi);


extern "C" void VTK_WRAP_CS_EXPORT vtkWebGLExporterCS_Initialize(
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
    PyImport_AppendInittab("vtkWebGLExporterPython", initvtkWebGLExporterPython);
    }

  csi->Load("vtkWebGLExporter");
#endif

  vtkPVWebGLExporter_Init(csi);
  vtkWebGLDataSet_Init(csi);
  vtkWebGLExporter_Init(csi);
  vtkWebGLObject_Init(csi);
  vtkWebGLPolyData_Init(csi);
  vtkWebGLWidget_Init(csi);

}
