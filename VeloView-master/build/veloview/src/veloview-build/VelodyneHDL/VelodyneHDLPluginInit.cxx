/* #undef PARAVIEW_USE_UNIFIED_BINDINGS */
#define NO_PYTHON_BINDINGS_AVAILABLE
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
extern "C" void real_initVelodyneHDLPluginPython(const char *modulename);

void initVelodyneHDLPluginPython()
{
  static const char modulename[] = "VelodyneHDLPluginPython";
  real_initVelodyneHDLPluginPython(modulename);
}
#endif

extern void vtkApplanixPositionReader_Init(vtkClientServerInterpreter* csi);
extern void vtkProcessingSample_Init(vtkClientServerInterpreter* csi);
extern void vtkVelodyneHDLGridSource_Init(vtkClientServerInterpreter* csi);
extern void vtkVelodyneHDLReader_Init(vtkClientServerInterpreter* csi);
extern void vtkVelodyneHDLPositionReader_Init(vtkClientServerInterpreter* csi);
extern void vtkVelodyneHDLSource_Init(vtkClientServerInterpreter* csi);


extern "C" void VTK_WRAP_CS_EXPORT VelodyneHDLPlugin_Initialize(
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
    PyImport_AppendInittab("VelodyneHDLPluginPython", initVelodyneHDLPluginPython);
    }

  csi->Load("VelodyneHDLPlugin");
#endif

  vtkApplanixPositionReader_Init(csi);
  vtkProcessingSample_Init(csi);
  vtkVelodyneHDLGridSource_Init(csi);
  vtkVelodyneHDLReader_Init(csi);
  vtkVelodyneHDLPositionReader_Init(csi);
  vtkVelodyneHDLSource_Init(csi);

}
