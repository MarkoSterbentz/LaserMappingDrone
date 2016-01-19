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
extern "C" void real_initvtkFiltersTexturePython(const char *modulename);

void initvtkFiltersTexturePython()
{
  static const char modulename[] = "vtkFiltersTexturePython";
  real_initvtkFiltersTexturePython(modulename);
}
#endif

extern void vtkTextureMapToCylinder_Init(vtkClientServerInterpreter* csi);
extern void vtkTextureMapToPlane_Init(vtkClientServerInterpreter* csi);
extern void vtkTextureMapToSphere_Init(vtkClientServerInterpreter* csi);
extern void vtkImplicitTextureCoords_Init(vtkClientServerInterpreter* csi);
extern void vtkThresholdTextureCoords_Init(vtkClientServerInterpreter* csi);
extern void vtkTransformTextureCoords_Init(vtkClientServerInterpreter* csi);
extern void vtkTriangularTCoords_Init(vtkClientServerInterpreter* csi);


extern "C" void VTK_WRAP_CS_EXPORT vtkFiltersTextureCS_Initialize(
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
    PyImport_AppendInittab("vtkFiltersTexturePython", initvtkFiltersTexturePython);
    }

  csi->Load("vtkFiltersTexture");
#endif

  vtkTextureMapToCylinder_Init(csi);
  vtkTextureMapToPlane_Init(csi);
  vtkTextureMapToSphere_Init(csi);
  vtkImplicitTextureCoords_Init(csi);
  vtkThresholdTextureCoords_Init(csi);
  vtkTransformTextureCoords_Init(csi);
  vtkTriangularTCoords_Init(csi);

}
