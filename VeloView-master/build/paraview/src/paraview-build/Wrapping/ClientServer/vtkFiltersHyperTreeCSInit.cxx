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
extern "C" void real_initvtkFiltersHyperTreePython(const char *modulename);

void initvtkFiltersHyperTreePython()
{
  static const char modulename[] = "vtkFiltersHyperTreePython";
  real_initvtkFiltersHyperTreePython(modulename);
}
#endif

extern void vtkClipHyperOctree_Init(vtkClientServerInterpreter* csi);
extern void vtkHyperTreeGridAxisCut_Init(vtkClientServerInterpreter* csi);
extern void vtkHyperTreeGridGeometry_Init(vtkClientServerInterpreter* csi);
extern void vtkHyperTreeGridToUnstructuredGrid_Init(vtkClientServerInterpreter* csi);
extern void vtkHyperOctreeClipCutPointsGrabber_Init(vtkClientServerInterpreter* csi);
extern void vtkHyperOctreeContourFilter_Init(vtkClientServerInterpreter* csi);
extern void vtkHyperOctreeCutter_Init(vtkClientServerInterpreter* csi);
extern void vtkHyperOctreeDepth_Init(vtkClientServerInterpreter* csi);
extern void vtkHyperOctreeDualGridContourFilter_Init(vtkClientServerInterpreter* csi);
extern void vtkHyperOctreeLimiter_Init(vtkClientServerInterpreter* csi);
extern void vtkHyperOctreeSampleFunction_Init(vtkClientServerInterpreter* csi);
extern void vtkHyperOctreeSurfaceFilter_Init(vtkClientServerInterpreter* csi);
extern void vtkHyperOctreeToUniformGridFilter_Init(vtkClientServerInterpreter* csi);


extern "C" void VTK_WRAP_CS_EXPORT vtkFiltersHyperTreeCS_Initialize(
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
    PyImport_AppendInittab("vtkFiltersHyperTreePython", initvtkFiltersHyperTreePython);
    }

  csi->Load("vtkFiltersHyperTree");
#endif

  vtkClipHyperOctree_Init(csi);
  vtkHyperTreeGridAxisCut_Init(csi);
  vtkHyperTreeGridGeometry_Init(csi);
  vtkHyperTreeGridToUnstructuredGrid_Init(csi);
  vtkHyperOctreeClipCutPointsGrabber_Init(csi);
  vtkHyperOctreeContourFilter_Init(csi);
  vtkHyperOctreeCutter_Init(csi);
  vtkHyperOctreeDepth_Init(csi);
  vtkHyperOctreeDualGridContourFilter_Init(csi);
  vtkHyperOctreeLimiter_Init(csi);
  vtkHyperOctreeSampleFunction_Init(csi);
  vtkHyperOctreeSurfaceFilter_Init(csi);
  vtkHyperOctreeToUniformGridFilter_Init(csi);

}
