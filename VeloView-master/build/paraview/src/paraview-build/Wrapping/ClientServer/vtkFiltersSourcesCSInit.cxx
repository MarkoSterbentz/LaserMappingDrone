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
extern "C" void real_initvtkFiltersSourcesPython(const char *modulename);

void initvtkFiltersSourcesPython()
{
  static const char modulename[] = "vtkFiltersSourcesPython";
  real_initvtkFiltersSourcesPython(modulename);
}
#endif

extern void vtkArcSource_Init(vtkClientServerInterpreter* csi);
extern void vtkArrowSource_Init(vtkClientServerInterpreter* csi);
extern void vtkButtonSource_Init(vtkClientServerInterpreter* csi);
extern void vtkConeSource_Init(vtkClientServerInterpreter* csi);
extern void vtkCubeSource_Init(vtkClientServerInterpreter* csi);
extern void vtkCylinderSource_Init(vtkClientServerInterpreter* csi);
extern void vtkDiskSource_Init(vtkClientServerInterpreter* csi);
extern void vtkEllipticalButtonSource_Init(vtkClientServerInterpreter* csi);
extern void vtkFrustumSource_Init(vtkClientServerInterpreter* csi);
extern void vtkGlyphSource2D_Init(vtkClientServerInterpreter* csi);
extern void vtkHyperOctreeFractalSource_Init(vtkClientServerInterpreter* csi);
extern void vtkHyperTreeGridSource_Init(vtkClientServerInterpreter* csi);
extern void vtkLineSource_Init(vtkClientServerInterpreter* csi);
extern void vtkOutlineCornerFilter_Init(vtkClientServerInterpreter* csi);
extern void vtkOutlineCornerSource_Init(vtkClientServerInterpreter* csi);
extern void vtkOutlineSource_Init(vtkClientServerInterpreter* csi);
extern void vtkParametricFunctionSource_Init(vtkClientServerInterpreter* csi);
extern void vtkPlaneSource_Init(vtkClientServerInterpreter* csi);
extern void vtkPlatonicSolidSource_Init(vtkClientServerInterpreter* csi);
extern void vtkPointSource_Init(vtkClientServerInterpreter* csi);
extern void vtkProgrammableDataObjectSource_Init(vtkClientServerInterpreter* csi);
extern void vtkProgrammableSource_Init(vtkClientServerInterpreter* csi);
extern void vtkRectangularButtonSource_Init(vtkClientServerInterpreter* csi);
extern void vtkRegularPolygonSource_Init(vtkClientServerInterpreter* csi);
extern void vtkSelectionSource_Init(vtkClientServerInterpreter* csi);
extern void vtkSphereSource_Init(vtkClientServerInterpreter* csi);
extern void vtkSuperquadricSource_Init(vtkClientServerInterpreter* csi);
extern void vtkTessellatedBoxSource_Init(vtkClientServerInterpreter* csi);
extern void vtkTextSource_Init(vtkClientServerInterpreter* csi);
extern void vtkTexturedSphereSource_Init(vtkClientServerInterpreter* csi);
extern void vtkGraphToPolyData_Init(vtkClientServerInterpreter* csi);
extern void vtkDiagonalMatrixSource_Init(vtkClientServerInterpreter* csi);


extern "C" void VTK_WRAP_CS_EXPORT vtkFiltersSourcesCS_Initialize(
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
    PyImport_AppendInittab("vtkFiltersSourcesPython", initvtkFiltersSourcesPython);
    }

  csi->Load("vtkFiltersSources");
#endif

  vtkArcSource_Init(csi);
  vtkArrowSource_Init(csi);
  vtkButtonSource_Init(csi);
  vtkConeSource_Init(csi);
  vtkCubeSource_Init(csi);
  vtkCylinderSource_Init(csi);
  vtkDiskSource_Init(csi);
  vtkEllipticalButtonSource_Init(csi);
  vtkFrustumSource_Init(csi);
  vtkGlyphSource2D_Init(csi);
  vtkHyperOctreeFractalSource_Init(csi);
  vtkHyperTreeGridSource_Init(csi);
  vtkLineSource_Init(csi);
  vtkOutlineCornerFilter_Init(csi);
  vtkOutlineCornerSource_Init(csi);
  vtkOutlineSource_Init(csi);
  vtkParametricFunctionSource_Init(csi);
  vtkPlaneSource_Init(csi);
  vtkPlatonicSolidSource_Init(csi);
  vtkPointSource_Init(csi);
  vtkProgrammableDataObjectSource_Init(csi);
  vtkProgrammableSource_Init(csi);
  vtkRectangularButtonSource_Init(csi);
  vtkRegularPolygonSource_Init(csi);
  vtkSelectionSource_Init(csi);
  vtkSphereSource_Init(csi);
  vtkSuperquadricSource_Init(csi);
  vtkTessellatedBoxSource_Init(csi);
  vtkTextSource_Init(csi);
  vtkTexturedSphereSource_Init(csi);
  vtkGraphToPolyData_Init(csi);
  vtkDiagonalMatrixSource_Init(csi);

}
