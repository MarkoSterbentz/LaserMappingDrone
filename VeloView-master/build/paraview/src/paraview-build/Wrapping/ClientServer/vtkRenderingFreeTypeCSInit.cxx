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
extern "C" void real_initvtkRenderingFreeTypePython(const char *modulename);

void initvtkRenderingFreeTypePython()
{
  static const char modulename[] = "vtkRenderingFreeTypePython";
  real_initvtkRenderingFreeTypePython(modulename);
}
#endif

extern void vtkFreeTypeStringToImage_Init(vtkClientServerInterpreter* csi);
extern void vtkMathTextFreeTypeTextRenderer_Init(vtkClientServerInterpreter* csi);
extern void vtkMathTextUtilities_Init(vtkClientServerInterpreter* csi);
extern void vtkTextRendererStringToImage_Init(vtkClientServerInterpreter* csi);
extern void vtkScaledTextActor_Init(vtkClientServerInterpreter* csi);
extern void vtkVectorText_Init(vtkClientServerInterpreter* csi);


extern "C" void VTK_WRAP_CS_EXPORT vtkRenderingFreeTypeCS_Initialize(
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
    PyImport_AppendInittab("vtkRenderingFreeTypePython", initvtkRenderingFreeTypePython);
    }

  csi->Load("vtkRenderingFreeType");
#endif

  vtkFreeTypeStringToImage_Init(csi);
  vtkMathTextFreeTypeTextRenderer_Init(csi);
  vtkMathTextUtilities_Init(csi);
  vtkTextRendererStringToImage_Init(csi);
  vtkScaledTextActor_Init(csi);
  vtkVectorText_Init(csi);

}
