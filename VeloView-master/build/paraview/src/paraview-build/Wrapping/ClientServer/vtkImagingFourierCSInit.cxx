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
extern "C" void real_initvtkImagingFourierPython(const char *modulename);

void initvtkImagingFourierPython()
{
  static const char modulename[] = "vtkImagingFourierPython";
  real_initvtkImagingFourierPython(modulename);
}
#endif

extern void vtkImageButterworthHighPass_Init(vtkClientServerInterpreter* csi);
extern void vtkImageButterworthLowPass_Init(vtkClientServerInterpreter* csi);
extern void vtkImageFFT_Init(vtkClientServerInterpreter* csi);
extern void vtkImageFourierCenter_Init(vtkClientServerInterpreter* csi);
extern void vtkImageFourierFilter_Init(vtkClientServerInterpreter* csi);
extern void vtkImageIdealHighPass_Init(vtkClientServerInterpreter* csi);
extern void vtkImageIdealLowPass_Init(vtkClientServerInterpreter* csi);
extern void vtkImageRFFT_Init(vtkClientServerInterpreter* csi);
extern void vtkTableFFT_Init(vtkClientServerInterpreter* csi);


extern "C" void VTK_WRAP_CS_EXPORT vtkImagingFourierCS_Initialize(
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
    PyImport_AppendInittab("vtkImagingFourierPython", initvtkImagingFourierPython);
    }

  csi->Load("vtkImagingFourier");
#endif

  vtkImageButterworthHighPass_Init(csi);
  vtkImageButterworthLowPass_Init(csi);
  vtkImageFFT_Init(csi);
  vtkImageFourierCenter_Init(csi);
  vtkImageFourierFilter_Init(csi);
  vtkImageIdealHighPass_Init(csi);
  vtkImageIdealLowPass_Init(csi);
  vtkImageRFFT_Init(csi);
  vtkTableFFT_Init(csi);

}
