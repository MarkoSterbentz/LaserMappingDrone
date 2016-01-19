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
extern "C" void real_initvtkCommonComputationalGeometryPython(const char *modulename);

void initvtkCommonComputationalGeometryPython()
{
  static const char modulename[] = "vtkCommonComputationalGeometryPython";
  real_initvtkCommonComputationalGeometryPython(modulename);
}
#endif

extern void vtkCardinalSpline_Init(vtkClientServerInterpreter* csi);
extern void vtkKochanekSpline_Init(vtkClientServerInterpreter* csi);
extern void vtkParametricBoy_Init(vtkClientServerInterpreter* csi);
extern void vtkParametricConicSpiral_Init(vtkClientServerInterpreter* csi);
extern void vtkParametricCrossCap_Init(vtkClientServerInterpreter* csi);
extern void vtkParametricDini_Init(vtkClientServerInterpreter* csi);
extern void vtkParametricEllipsoid_Init(vtkClientServerInterpreter* csi);
extern void vtkParametricEnneper_Init(vtkClientServerInterpreter* csi);
extern void vtkParametricFigure8Klein_Init(vtkClientServerInterpreter* csi);
extern void vtkParametricFunction_Init(vtkClientServerInterpreter* csi);
extern void vtkParametricKlein_Init(vtkClientServerInterpreter* csi);
extern void vtkParametricMobius_Init(vtkClientServerInterpreter* csi);
extern void vtkParametricRandomHills_Init(vtkClientServerInterpreter* csi);
extern void vtkParametricRoman_Init(vtkClientServerInterpreter* csi);
extern void vtkParametricSpline_Init(vtkClientServerInterpreter* csi);
extern void vtkParametricSuperEllipsoid_Init(vtkClientServerInterpreter* csi);
extern void vtkParametricSuperToroid_Init(vtkClientServerInterpreter* csi);
extern void vtkParametricTorus_Init(vtkClientServerInterpreter* csi);


extern "C" void VTK_WRAP_CS_EXPORT vtkCommonComputationalGeometryCS_Initialize(
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
    PyImport_AppendInittab("vtkCommonComputationalGeometryPython", initvtkCommonComputationalGeometryPython);
    }

  csi->Load("vtkCommonComputationalGeometry");
#endif

  vtkCardinalSpline_Init(csi);
  vtkKochanekSpline_Init(csi);
  vtkParametricBoy_Init(csi);
  vtkParametricConicSpiral_Init(csi);
  vtkParametricCrossCap_Init(csi);
  vtkParametricDini_Init(csi);
  vtkParametricEllipsoid_Init(csi);
  vtkParametricEnneper_Init(csi);
  vtkParametricFigure8Klein_Init(csi);
  vtkParametricFunction_Init(csi);
  vtkParametricKlein_Init(csi);
  vtkParametricMobius_Init(csi);
  vtkParametricRandomHills_Init(csi);
  vtkParametricRoman_Init(csi);
  vtkParametricSpline_Init(csi);
  vtkParametricSuperEllipsoid_Init(csi);
  vtkParametricSuperToroid_Init(csi);
  vtkParametricTorus_Init(csi);

}
