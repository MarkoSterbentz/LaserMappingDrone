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
extern "C" void real_initvtkParallelCorePython(const char *modulename);

void initvtkParallelCorePython()
{
  static const char modulename[] = "vtkParallelCorePython";
  real_initvtkParallelCorePython(modulename);
}
#endif

extern void vtkCommunicator_Init(vtkClientServerInterpreter* csi);
extern void vtkDummyCommunicator_Init(vtkClientServerInterpreter* csi);
extern void vtkDummyController_Init(vtkClientServerInterpreter* csi);
extern void vtkMultiProcessController_Init(vtkClientServerInterpreter* csi);
extern void vtkProcess_Init(vtkClientServerInterpreter* csi);
extern void vtkProcessGroup_Init(vtkClientServerInterpreter* csi);
extern void vtkSocketCommunicator_Init(vtkClientServerInterpreter* csi);
extern void vtkSocketController_Init(vtkClientServerInterpreter* csi);
extern void vtkSubCommunicator_Init(vtkClientServerInterpreter* csi);
extern void vtkSubGroup_Init(vtkClientServerInterpreter* csi);
extern void vtkFieldDataSerializer_Init(vtkClientServerInterpreter* csi);


extern "C" void VTK_WRAP_CS_EXPORT vtkParallelCoreCS_Initialize(
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
    PyImport_AppendInittab("vtkParallelCorePython", initvtkParallelCorePython);
    }

  csi->Load("vtkParallelCore");
#endif

  vtkCommunicator_Init(csi);
  vtkDummyCommunicator_Init(csi);
  vtkDummyController_Init(csi);
  vtkMultiProcessController_Init(csi);
  vtkProcess_Init(csi);
  vtkProcessGroup_Init(csi);
  vtkSocketCommunicator_Init(csi);
  vtkSocketController_Init(csi);
  vtkSubCommunicator_Init(csi);
  vtkSubGroup_Init(csi);
  vtkFieldDataSerializer_Init(csi);

}
