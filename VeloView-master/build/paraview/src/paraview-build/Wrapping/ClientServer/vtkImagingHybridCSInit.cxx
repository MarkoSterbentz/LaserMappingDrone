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
extern "C" void real_initvtkImagingHybridPython(const char *modulename);

void initvtkImagingHybridPython()
{
  static const char modulename[] = "vtkImagingHybridPython";
  real_initvtkImagingHybridPython(modulename);
}
#endif

extern void vtkBooleanTexture_Init(vtkClientServerInterpreter* csi);
extern void vtkShepardMethod_Init(vtkClientServerInterpreter* csi);
extern void vtkVoxelModeller_Init(vtkClientServerInterpreter* csi);
extern void vtkSurfaceReconstructionFilter_Init(vtkClientServerInterpreter* csi);
extern void vtkFastSplatter_Init(vtkClientServerInterpreter* csi);
extern void vtkGaussianSplatter_Init(vtkClientServerInterpreter* csi);
extern void vtkSampleFunction_Init(vtkClientServerInterpreter* csi);
extern void vtkPointLoad_Init(vtkClientServerInterpreter* csi);
extern void vtkImageCursor3D_Init(vtkClientServerInterpreter* csi);
extern void vtkImageRectilinearWipe_Init(vtkClientServerInterpreter* csi);
extern void vtkTriangularTexture_Init(vtkClientServerInterpreter* csi);
extern void vtkSliceCubes_Init(vtkClientServerInterpreter* csi);


extern "C" void VTK_WRAP_CS_EXPORT vtkImagingHybridCS_Initialize(
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
    PyImport_AppendInittab("vtkImagingHybridPython", initvtkImagingHybridPython);
    }

  csi->Load("vtkImagingHybrid");
#endif

  vtkBooleanTexture_Init(csi);
  vtkShepardMethod_Init(csi);
  vtkVoxelModeller_Init(csi);
  vtkSurfaceReconstructionFilter_Init(csi);
  vtkFastSplatter_Init(csi);
  vtkGaussianSplatter_Init(csi);
  vtkSampleFunction_Init(csi);
  vtkPointLoad_Init(csi);
  vtkImageCursor3D_Init(csi);
  vtkImageRectilinearWipe_Init(csi);
  vtkTriangularTexture_Init(csi);
  vtkSliceCubes_Init(csi);

}
