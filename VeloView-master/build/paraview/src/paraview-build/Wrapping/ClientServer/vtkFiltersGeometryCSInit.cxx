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
extern "C" void real_initvtkFiltersGeometryPython(const char *modulename);

void initvtkFiltersGeometryPython()
{
  static const char modulename[] = "vtkFiltersGeometryPython";
  real_initvtkFiltersGeometryPython(modulename);
}
#endif

extern void vtkCompositeDataGeometryFilter_Init(vtkClientServerInterpreter* csi);
extern void vtkGeometryFilter_Init(vtkClientServerInterpreter* csi);
extern void vtkHierarchicalDataSetGeometryFilter_Init(vtkClientServerInterpreter* csi);
extern void vtkImageDataGeometryFilter_Init(vtkClientServerInterpreter* csi);
extern void vtkImageDataToUniformGrid_Init(vtkClientServerInterpreter* csi);
extern void vtkProjectSphereFilter_Init(vtkClientServerInterpreter* csi);
extern void vtkRectilinearGridGeometryFilter_Init(vtkClientServerInterpreter* csi);
extern void vtkStructuredGridGeometryFilter_Init(vtkClientServerInterpreter* csi);
extern void vtkStructuredPointsGeometryFilter_Init(vtkClientServerInterpreter* csi);
extern void vtkUnstructuredGridGeometryFilter_Init(vtkClientServerInterpreter* csi);
extern void vtkDataSetSurfaceFilter_Init(vtkClientServerInterpreter* csi);
extern void vtkAbstractGridConnectivity_Init(vtkClientServerInterpreter* csi);
extern void vtkDataSetGhostGenerator_Init(vtkClientServerInterpreter* csi);
extern void vtkRectilinearGridPartitioner_Init(vtkClientServerInterpreter* csi);
extern void vtkStructuredAMRGridConnectivity_Init(vtkClientServerInterpreter* csi);
extern void vtkStructuredGridConnectivity_Init(vtkClientServerInterpreter* csi);
extern void vtkStructuredGridGhostDataGenerator_Init(vtkClientServerInterpreter* csi);
extern void vtkStructuredGridPartitioner_Init(vtkClientServerInterpreter* csi);
extern void vtkUniformGridGhostDataGenerator_Init(vtkClientServerInterpreter* csi);


extern "C" void VTK_WRAP_CS_EXPORT vtkFiltersGeometryCS_Initialize(
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
    PyImport_AppendInittab("vtkFiltersGeometryPython", initvtkFiltersGeometryPython);
    }

  csi->Load("vtkFiltersGeometry");
#endif

  vtkCompositeDataGeometryFilter_Init(csi);
  vtkGeometryFilter_Init(csi);
  vtkHierarchicalDataSetGeometryFilter_Init(csi);
  vtkImageDataGeometryFilter_Init(csi);
  vtkImageDataToUniformGrid_Init(csi);
  vtkProjectSphereFilter_Init(csi);
  vtkRectilinearGridGeometryFilter_Init(csi);
  vtkStructuredGridGeometryFilter_Init(csi);
  vtkStructuredPointsGeometryFilter_Init(csi);
  vtkUnstructuredGridGeometryFilter_Init(csi);
  vtkDataSetSurfaceFilter_Init(csi);
  vtkAbstractGridConnectivity_Init(csi);
  vtkDataSetGhostGenerator_Init(csi);
  vtkRectilinearGridPartitioner_Init(csi);
  vtkStructuredAMRGridConnectivity_Init(csi);
  vtkStructuredGridConnectivity_Init(csi);
  vtkStructuredGridGhostDataGenerator_Init(csi);
  vtkStructuredGridPartitioner_Init(csi);
  vtkUniformGridGhostDataGenerator_Init(csi);

}
