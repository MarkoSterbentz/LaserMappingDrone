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
extern "C" void real_initvtkRenderingLabelPython(const char *modulename);

void initvtkRenderingLabelPython()
{
  static const char modulename[] = "vtkRenderingLabelPython";
  real_initvtkRenderingLabelPython(modulename);
}
#endif

extern void vtkLabeledDataMapper_Init(vtkClientServerInterpreter* csi);
extern void vtkLabeledTreeMapDataMapper_Init(vtkClientServerInterpreter* csi);
extern void vtkLabelHierarchyAlgorithm_Init(vtkClientServerInterpreter* csi);
extern void vtkLabelHierarchyCompositeIterator_Init(vtkClientServerInterpreter* csi);
extern void vtkLabelHierarchy_Init(vtkClientServerInterpreter* csi);
extern void vtkLabelHierarchyIterator_Init(vtkClientServerInterpreter* csi);
extern void vtkLabelPlacementMapper_Init(vtkClientServerInterpreter* csi);
extern void vtkLabelPlacer_Init(vtkClientServerInterpreter* csi);
extern void vtkLabelRenderStrategy_Init(vtkClientServerInterpreter* csi);
extern void vtkLabelSizeCalculator_Init(vtkClientServerInterpreter* csi);
extern void vtkFreeTypeLabelRenderStrategy_Init(vtkClientServerInterpreter* csi);
extern void vtkDynamic2DLabelMapper_Init(vtkClientServerInterpreter* csi);
extern void vtkPointSetToLabelHierarchy_Init(vtkClientServerInterpreter* csi);


extern "C" void VTK_WRAP_CS_EXPORT vtkRenderingLabelCS_Initialize(
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
    PyImport_AppendInittab("vtkRenderingLabelPython", initvtkRenderingLabelPython);
    }

  csi->Load("vtkRenderingLabel");
#endif

  vtkLabeledDataMapper_Init(csi);
  vtkLabeledTreeMapDataMapper_Init(csi);
  vtkLabelHierarchyAlgorithm_Init(csi);
  vtkLabelHierarchyCompositeIterator_Init(csi);
  vtkLabelHierarchy_Init(csi);
  vtkLabelHierarchyIterator_Init(csi);
  vtkLabelPlacementMapper_Init(csi);
  vtkLabelPlacer_Init(csi);
  vtkLabelRenderStrategy_Init(csi);
  vtkLabelSizeCalculator_Init(csi);
  vtkFreeTypeLabelRenderStrategy_Init(csi);
  vtkDynamic2DLabelMapper_Init(csi);
  vtkPointSetToLabelHierarchy_Init(csi);

}
