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
extern "C" void real_initvtkImagingColorPython(const char *modulename);

void initvtkImagingColorPython()
{
  static const char modulename[] = "vtkImagingColorPython";
  real_initvtkImagingColorPython(modulename);
}
#endif

extern void vtkImageHSIToRGB_Init(vtkClientServerInterpreter* csi);
extern void vtkImageHSVToRGB_Init(vtkClientServerInterpreter* csi);
extern void vtkImageLuminance_Init(vtkClientServerInterpreter* csi);
extern void vtkImageMapToRGBA_Init(vtkClientServerInterpreter* csi);
extern void vtkImageMapToWindowLevelColors_Init(vtkClientServerInterpreter* csi);
extern void vtkImageQuantizeRGBToIndex_Init(vtkClientServerInterpreter* csi);
extern void vtkImageRGBToHSI_Init(vtkClientServerInterpreter* csi);
extern void vtkImageRGBToHSV_Init(vtkClientServerInterpreter* csi);


extern "C" void VTK_WRAP_CS_EXPORT vtkImagingColorCS_Initialize(
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
    PyImport_AppendInittab("vtkImagingColorPython", initvtkImagingColorPython);
    }

  csi->Load("vtkImagingColor");
#endif

  vtkImageHSIToRGB_Init(csi);
  vtkImageHSVToRGB_Init(csi);
  vtkImageLuminance_Init(csi);
  vtkImageMapToRGBA_Init(csi);
  vtkImageMapToWindowLevelColors_Init(csi);
  vtkImageQuantizeRGBToIndex_Init(csi);
  vtkImageRGBToHSI_Init(csi);
  vtkImageRGBToHSV_Init(csi);

}
