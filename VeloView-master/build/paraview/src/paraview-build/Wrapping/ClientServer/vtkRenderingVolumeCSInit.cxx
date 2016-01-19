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
extern "C" void real_initvtkRenderingVolumePython(const char *modulename);

void initvtkRenderingVolumePython()
{
  static const char modulename[] = "vtkRenderingVolumePython";
  real_initvtkRenderingVolumePython(modulename);
}
#endif

extern void vtkDirectionEncoder_Init(vtkClientServerInterpreter* csi);
extern void vtkEncodedGradientEstimator_Init(vtkClientServerInterpreter* csi);
extern void vtkEncodedGradientShader_Init(vtkClientServerInterpreter* csi);
extern void vtkFiniteDifferenceGradientEstimator_Init(vtkClientServerInterpreter* csi);
extern void vtkFixedPointRayCastImage_Init(vtkClientServerInterpreter* csi);
extern void vtkFixedPointVolumeRayCastCompositeGOHelper_Init(vtkClientServerInterpreter* csi);
extern void vtkFixedPointVolumeRayCastCompositeGOShadeHelper_Init(vtkClientServerInterpreter* csi);
extern void vtkFixedPointVolumeRayCastCompositeHelper_Init(vtkClientServerInterpreter* csi);
extern void vtkFixedPointVolumeRayCastCompositeShadeHelper_Init(vtkClientServerInterpreter* csi);
extern void vtkFixedPointVolumeRayCastHelper_Init(vtkClientServerInterpreter* csi);
extern void vtkFixedPointVolumeRayCastMIPHelper_Init(vtkClientServerInterpreter* csi);
extern void vtkFixedPointVolumeRayCastMapper_Init(vtkClientServerInterpreter* csi);
extern void vtkGPUVolumeRayCastMapper_Init(vtkClientServerInterpreter* csi);
extern void vtkProjectedTetrahedraMapper_Init(vtkClientServerInterpreter* csi);
extern void vtkRayCastImageDisplayHelper_Init(vtkClientServerInterpreter* csi);
extern void vtkRecursiveSphereDirectionEncoder_Init(vtkClientServerInterpreter* csi);
extern void vtkSphericalDirectionEncoder_Init(vtkClientServerInterpreter* csi);
extern void vtkUnstructuredGridBunykRayCastFunction_Init(vtkClientServerInterpreter* csi);
extern void vtkUnstructuredGridHomogeneousRayIntegrator_Init(vtkClientServerInterpreter* csi);
extern void vtkUnstructuredGridLinearRayIntegrator_Init(vtkClientServerInterpreter* csi);
extern void vtkUnstructuredGridPartialPreIntegration_Init(vtkClientServerInterpreter* csi);
extern void vtkUnstructuredGridPreIntegration_Init(vtkClientServerInterpreter* csi);
extern void vtkUnstructuredGridVolumeMapper_Init(vtkClientServerInterpreter* csi);
extern void vtkUnstructuredGridVolumeRayCastFunction_Init(vtkClientServerInterpreter* csi);
extern void vtkUnstructuredGridVolumeRayCastIterator_Init(vtkClientServerInterpreter* csi);
extern void vtkUnstructuredGridVolumeRayCastMapper_Init(vtkClientServerInterpreter* csi);
extern void vtkUnstructuredGridVolumeRayIntegrator_Init(vtkClientServerInterpreter* csi);
extern void vtkUnstructuredGridVolumeZSweepMapper_Init(vtkClientServerInterpreter* csi);
extern void vtkVolumeMapper_Init(vtkClientServerInterpreter* csi);
extern void vtkVolumeOutlineSource_Init(vtkClientServerInterpreter* csi);
extern void vtkVolumePicker_Init(vtkClientServerInterpreter* csi);
extern void vtkVolumeRayCastCompositeFunction_Init(vtkClientServerInterpreter* csi);
extern void vtkVolumeRayCastFunction_Init(vtkClientServerInterpreter* csi);
extern void vtkVolumeRayCastIsosurfaceFunction_Init(vtkClientServerInterpreter* csi);
extern void vtkVolumeRayCastMIPFunction_Init(vtkClientServerInterpreter* csi);
extern void vtkVolumeRayCastMapper_Init(vtkClientServerInterpreter* csi);
extern void vtkVolumeRayCastSpaceLeapingImageFilter_Init(vtkClientServerInterpreter* csi);
extern void vtkHAVSVolumeMapper_Init(vtkClientServerInterpreter* csi);
extern void vtkProjectedAAHexahedraMapper_Init(vtkClientServerInterpreter* csi);
extern void vtkVolumeTextureMapper2D_Init(vtkClientServerInterpreter* csi);
extern void vtkVolumeTextureMapper3D_Init(vtkClientServerInterpreter* csi);
extern void vtkVolumeTextureMapper_Init(vtkClientServerInterpreter* csi);


extern "C" void VTK_WRAP_CS_EXPORT vtkRenderingVolumeCS_Initialize(
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
    PyImport_AppendInittab("vtkRenderingVolumePython", initvtkRenderingVolumePython);
    }

  csi->Load("vtkRenderingVolume");
#endif

  vtkDirectionEncoder_Init(csi);
  vtkEncodedGradientEstimator_Init(csi);
  vtkEncodedGradientShader_Init(csi);
  vtkFiniteDifferenceGradientEstimator_Init(csi);
  vtkFixedPointRayCastImage_Init(csi);
  vtkFixedPointVolumeRayCastCompositeGOHelper_Init(csi);
  vtkFixedPointVolumeRayCastCompositeGOShadeHelper_Init(csi);
  vtkFixedPointVolumeRayCastCompositeHelper_Init(csi);
  vtkFixedPointVolumeRayCastCompositeShadeHelper_Init(csi);
  vtkFixedPointVolumeRayCastHelper_Init(csi);
  vtkFixedPointVolumeRayCastMIPHelper_Init(csi);
  vtkFixedPointVolumeRayCastMapper_Init(csi);
  vtkGPUVolumeRayCastMapper_Init(csi);
  vtkProjectedTetrahedraMapper_Init(csi);
  vtkRayCastImageDisplayHelper_Init(csi);
  vtkRecursiveSphereDirectionEncoder_Init(csi);
  vtkSphericalDirectionEncoder_Init(csi);
  vtkUnstructuredGridBunykRayCastFunction_Init(csi);
  vtkUnstructuredGridHomogeneousRayIntegrator_Init(csi);
  vtkUnstructuredGridLinearRayIntegrator_Init(csi);
  vtkUnstructuredGridPartialPreIntegration_Init(csi);
  vtkUnstructuredGridPreIntegration_Init(csi);
  vtkUnstructuredGridVolumeMapper_Init(csi);
  vtkUnstructuredGridVolumeRayCastFunction_Init(csi);
  vtkUnstructuredGridVolumeRayCastIterator_Init(csi);
  vtkUnstructuredGridVolumeRayCastMapper_Init(csi);
  vtkUnstructuredGridVolumeRayIntegrator_Init(csi);
  vtkUnstructuredGridVolumeZSweepMapper_Init(csi);
  vtkVolumeMapper_Init(csi);
  vtkVolumeOutlineSource_Init(csi);
  vtkVolumePicker_Init(csi);
  vtkVolumeRayCastCompositeFunction_Init(csi);
  vtkVolumeRayCastFunction_Init(csi);
  vtkVolumeRayCastIsosurfaceFunction_Init(csi);
  vtkVolumeRayCastMIPFunction_Init(csi);
  vtkVolumeRayCastMapper_Init(csi);
  vtkVolumeRayCastSpaceLeapingImageFilter_Init(csi);
  vtkHAVSVolumeMapper_Init(csi);
  vtkProjectedAAHexahedraMapper_Init(csi);
  vtkVolumeTextureMapper2D_Init(csi);
  vtkVolumeTextureMapper3D_Init(csi);
  vtkVolumeTextureMapper_Init(csi);

}
