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
extern "C" void real_initvtkFiltersExtractionPython(const char *modulename);

void initvtkFiltersExtractionPython()
{
  static const char modulename[] = "vtkFiltersExtractionPython";
  real_initvtkFiltersExtractionPython(modulename);
}
#endif

extern void vtkConvertSelection_Init(vtkClientServerInterpreter* csi);
extern void vtkExtractArraysOverTime_Init(vtkClientServerInterpreter* csi);
extern void vtkExtractBlock_Init(vtkClientServerInterpreter* csi);
extern void vtkExtractCells_Init(vtkClientServerInterpreter* csi);
extern void vtkExtractDataOverTime_Init(vtkClientServerInterpreter* csi);
extern void vtkExtractDataSets_Init(vtkClientServerInterpreter* csi);
extern void vtkExtractEdges_Init(vtkClientServerInterpreter* csi);
extern void vtkExtractGeometry_Init(vtkClientServerInterpreter* csi);
extern void vtkExtractGrid_Init(vtkClientServerInterpreter* csi);
extern void vtkExtractLevel_Init(vtkClientServerInterpreter* csi);
extern void vtkExtractPolyDataGeometry_Init(vtkClientServerInterpreter* csi);
extern void vtkExtractRectilinearGrid_Init(vtkClientServerInterpreter* csi);
extern void vtkExtractSelectedBlock_Init(vtkClientServerInterpreter* csi);
extern void vtkExtractSelectedFrustum_Init(vtkClientServerInterpreter* csi);
extern void vtkExtractSelectedIds_Init(vtkClientServerInterpreter* csi);
extern void vtkExtractSelectedLocations_Init(vtkClientServerInterpreter* csi);
extern void vtkExtractSelectedPolyDataIds_Init(vtkClientServerInterpreter* csi);
extern void vtkExtractSelectedRows_Init(vtkClientServerInterpreter* csi);
extern void vtkExtractSelectedThresholds_Init(vtkClientServerInterpreter* csi);
extern void vtkExtractSelection_Init(vtkClientServerInterpreter* csi);
extern void vtkExtractSelectionBase_Init(vtkClientServerInterpreter* csi);
extern void vtkExtractTemporalFieldData_Init(vtkClientServerInterpreter* csi);
extern void vtkExtractTensorComponents_Init(vtkClientServerInterpreter* csi);
extern void vtkExtractUnstructuredGrid_Init(vtkClientServerInterpreter* csi);
extern void vtkExtractVectorComponents_Init(vtkClientServerInterpreter* csi);
extern void vtkProbeSelectedLocations_Init(vtkClientServerInterpreter* csi);
extern void vtkHierarchicalDataExtractDataSets_Init(vtkClientServerInterpreter* csi);
extern void vtkHierarchicalDataExtractLevel_Init(vtkClientServerInterpreter* csi);


extern "C" void VTK_WRAP_CS_EXPORT vtkFiltersExtractionCS_Initialize(
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
    PyImport_AppendInittab("vtkFiltersExtractionPython", initvtkFiltersExtractionPython);
    }

  csi->Load("vtkFiltersExtraction");
#endif

  vtkConvertSelection_Init(csi);
  vtkExtractArraysOverTime_Init(csi);
  vtkExtractBlock_Init(csi);
  vtkExtractCells_Init(csi);
  vtkExtractDataOverTime_Init(csi);
  vtkExtractDataSets_Init(csi);
  vtkExtractEdges_Init(csi);
  vtkExtractGeometry_Init(csi);
  vtkExtractGrid_Init(csi);
  vtkExtractLevel_Init(csi);
  vtkExtractPolyDataGeometry_Init(csi);
  vtkExtractRectilinearGrid_Init(csi);
  vtkExtractSelectedBlock_Init(csi);
  vtkExtractSelectedFrustum_Init(csi);
  vtkExtractSelectedIds_Init(csi);
  vtkExtractSelectedLocations_Init(csi);
  vtkExtractSelectedPolyDataIds_Init(csi);
  vtkExtractSelectedRows_Init(csi);
  vtkExtractSelectedThresholds_Init(csi);
  vtkExtractSelection_Init(csi);
  vtkExtractSelectionBase_Init(csi);
  vtkExtractTemporalFieldData_Init(csi);
  vtkExtractTensorComponents_Init(csi);
  vtkExtractUnstructuredGrid_Init(csi);
  vtkExtractVectorComponents_Init(csi);
  vtkProbeSelectedLocations_Init(csi);
  vtkHierarchicalDataExtractDataSets_Init(csi);
  vtkHierarchicalDataExtractLevel_Init(csi);

}
