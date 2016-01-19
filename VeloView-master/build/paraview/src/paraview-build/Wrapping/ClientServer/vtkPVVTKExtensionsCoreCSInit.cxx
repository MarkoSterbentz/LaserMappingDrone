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
extern "C" void real_initvtkPVVTKExtensionsCorePython(const char *modulename);

void initvtkPVVTKExtensionsCorePython()
{
  static const char modulename[] = "vtkPVVTKExtensionsCorePython";
  real_initvtkPVVTKExtensionsCorePython(modulename);
}
#endif

extern void vtkCompositeMultiProcessController_Init(vtkClientServerInterpreter* csi);
extern void vtkDistributedTrivialProducer_Init(vtkClientServerInterpreter* csi);
extern void vtkPVCompositeDataPipeline_Init(vtkClientServerInterpreter* csi);
extern void vtkPVPostFilter_Init(vtkClientServerInterpreter* csi);
extern void vtkPVPostFilterExecutive_Init(vtkClientServerInterpreter* csi);
extern void vtkPVPostFilter_Init(vtkClientServerInterpreter* csi);
extern void vtkPVPostFilterExecutive_Init(vtkClientServerInterpreter* csi);
extern void vtkPVTrivialProducer_Init(vtkClientServerInterpreter* csi);
extern void vtkUndoElement_Init(vtkClientServerInterpreter* csi);
extern void vtkUndoSet_Init(vtkClientServerInterpreter* csi);
extern void vtkUndoStack_Init(vtkClientServerInterpreter* csi);


extern "C" void VTK_WRAP_CS_EXPORT vtkPVVTKExtensionsCoreCS_Initialize(
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
    PyImport_AppendInittab("vtkPVVTKExtensionsCorePython", initvtkPVVTKExtensionsCorePython);
    }

  csi->Load("vtkPVVTKExtensionsCore");
#endif

  vtkCompositeMultiProcessController_Init(csi);
  vtkDistributedTrivialProducer_Init(csi);
  vtkPVCompositeDataPipeline_Init(csi);
  vtkPVPostFilter_Init(csi);
  vtkPVPostFilterExecutive_Init(csi);
  vtkPVPostFilter_Init(csi);
  vtkPVPostFilterExecutive_Init(csi);
  vtkPVTrivialProducer_Init(csi);
  vtkUndoElement_Init(csi);
  vtkUndoSet_Init(csi);
  vtkUndoStack_Init(csi);

}
