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
extern "C" void real_initvtkRenderingVolumeOpenGLPython(const char *modulename);

void initvtkRenderingVolumeOpenGLPython()
{
  static const char modulename[] = "vtkRenderingVolumeOpenGLPython";
  real_initvtkRenderingVolumeOpenGLPython(modulename);
}
#endif

extern void vtkOpenGLHAVSVolumeMapper_Init(vtkClientServerInterpreter* csi);
extern void vtkOpenGLProjectedAAHexahedraMapper_Init(vtkClientServerInterpreter* csi);
extern void vtkOpenGLProjectedTetrahedraMapper_Init(vtkClientServerInterpreter* csi);
extern void vtkOpenGLRayCastImageDisplayHelper_Init(vtkClientServerInterpreter* csi);
extern void vtkOpenGLVolumeTextureMapper2D_Init(vtkClientServerInterpreter* csi);
extern void vtkOpenGLVolumeTextureMapper3D_Init(vtkClientServerInterpreter* csi);
extern void vtkSmartVolumeMapper_Init(vtkClientServerInterpreter* csi);
extern void vtkOpenGLGPUVolumeRayCastMapper_Init(vtkClientServerInterpreter* csi);


extern "C" void VTK_WRAP_CS_EXPORT vtkRenderingVolumeOpenGLCS_Initialize(
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
    PyImport_AppendInittab("vtkRenderingVolumeOpenGLPython", initvtkRenderingVolumeOpenGLPython);
    }

  csi->Load("vtkRenderingVolumeOpenGL");
#endif

  vtkOpenGLHAVSVolumeMapper_Init(csi);
  vtkOpenGLProjectedAAHexahedraMapper_Init(csi);
  vtkOpenGLProjectedTetrahedraMapper_Init(csi);
  vtkOpenGLRayCastImageDisplayHelper_Init(csi);
  vtkOpenGLVolumeTextureMapper2D_Init(csi);
  vtkOpenGLVolumeTextureMapper3D_Init(csi);
  vtkSmartVolumeMapper_Init(csi);
  vtkOpenGLGPUVolumeRayCastMapper_Init(csi);

}
