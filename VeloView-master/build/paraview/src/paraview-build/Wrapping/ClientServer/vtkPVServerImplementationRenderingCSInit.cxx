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
extern "C" void real_initvtkPVServerImplementationRenderingPython(const char *modulename);

void initvtkPVServerImplementationRenderingPython()
{
  static const char modulename[] = "vtkPVServerImplementationRenderingPython";
  real_initvtkPVServerImplementationRenderingPython(modulename);
}
#endif

extern void vtkSIChartRepresentationProxy_Init(vtkClientServerInterpreter* csi);
extern void vtkSIImageTextureProxy_Init(vtkClientServerInterpreter* csi);
extern void vtkSIPVRepresentationProxy_Init(vtkClientServerInterpreter* csi);
extern void vtkSIScalarBarActorProxy_Init(vtkClientServerInterpreter* csi);
extern void vtkSISelectionRepresentationProxy_Init(vtkClientServerInterpreter* csi);
extern void vtkSITextSourceRepresentationProxy_Init(vtkClientServerInterpreter* csi);
extern void vtkSIUniformGridVolumeRepresentationProxy_Init(vtkClientServerInterpreter* csi);
extern void vtkSIUnstructuredGridVolumeRepresentationProxy_Init(vtkClientServerInterpreter* csi);
extern void vtkSICompositeOrthographicSliceRepresentationProxy_Init(vtkClientServerInterpreter* csi);


extern "C" void VTK_WRAP_CS_EXPORT vtkPVServerImplementationRenderingCS_Initialize(
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
    PyImport_AppendInittab("vtkPVServerImplementationRenderingPython", initvtkPVServerImplementationRenderingPython);
    }

  csi->Load("vtkPVServerImplementationRendering");
#endif

  vtkSIChartRepresentationProxy_Init(csi);
  vtkSIImageTextureProxy_Init(csi);
  vtkSIPVRepresentationProxy_Init(csi);
  vtkSIScalarBarActorProxy_Init(csi);
  vtkSISelectionRepresentationProxy_Init(csi);
  vtkSITextSourceRepresentationProxy_Init(csi);
  vtkSIUniformGridVolumeRepresentationProxy_Init(csi);
  vtkSIUnstructuredGridVolumeRepresentationProxy_Init(csi);
  vtkSICompositeOrthographicSliceRepresentationProxy_Init(csi);

}
