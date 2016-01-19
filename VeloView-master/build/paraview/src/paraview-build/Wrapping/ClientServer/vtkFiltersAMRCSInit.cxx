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
extern "C" void real_initvtkFiltersAMRPython(const char *modulename);

void initvtkFiltersAMRPython()
{
  static const char modulename[] = "vtkFiltersAMRPython";
  real_initvtkFiltersAMRPython(modulename);
}
#endif

extern void vtkAMRCutPlane_Init(vtkClientServerInterpreter* csi);
extern void vtkAMRGaussianPulseSource_Init(vtkClientServerInterpreter* csi);
extern void vtkAMRResampleFilter_Init(vtkClientServerInterpreter* csi);
extern void vtkAMRSliceFilter_Init(vtkClientServerInterpreter* csi);
extern void vtkAMRToMultiBlockFilter_Init(vtkClientServerInterpreter* csi);
extern void vtkImageToAMR_Init(vtkClientServerInterpreter* csi);
extern void vtkParallelAMRUtilities_Init(vtkClientServerInterpreter* csi);


extern "C" void VTK_WRAP_CS_EXPORT vtkFiltersAMRCS_Initialize(
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
    PyImport_AppendInittab("vtkFiltersAMRPython", initvtkFiltersAMRPython);
    }

  csi->Load("vtkFiltersAMR");
#endif

  vtkAMRCutPlane_Init(csi);
  vtkAMRGaussianPulseSource_Init(csi);
  vtkAMRResampleFilter_Init(csi);
  vtkAMRSliceFilter_Init(csi);
  vtkAMRToMultiBlockFilter_Init(csi);
  vtkImageToAMR_Init(csi);
  vtkParallelAMRUtilities_Init(csi);

}
