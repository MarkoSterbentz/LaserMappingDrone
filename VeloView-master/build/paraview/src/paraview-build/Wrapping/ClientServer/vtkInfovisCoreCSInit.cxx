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
extern "C" void real_initvtkInfovisCorePython(const char *modulename);

void initvtkInfovisCorePython()
{
  static const char modulename[] = "vtkInfovisCorePython";
  real_initvtkInfovisCorePython(modulename);
}
#endif

extern void vtkAddMembershipArray_Init(vtkClientServerInterpreter* csi);
extern void vtkAdjacencyMatrixToEdgeTable_Init(vtkClientServerInterpreter* csi);
extern void vtkArrayNorm_Init(vtkClientServerInterpreter* csi);
extern void vtkArrayToTable_Init(vtkClientServerInterpreter* csi);
extern void vtkCollapseGraph_Init(vtkClientServerInterpreter* csi);
extern void vtkCollapseVerticesByArray_Init(vtkClientServerInterpreter* csi);
extern void vtkDataObjectToTable_Init(vtkClientServerInterpreter* csi);
extern void vtkDotProductSimilarity_Init(vtkClientServerInterpreter* csi);
extern void vtkExtractSelectedTree_Init(vtkClientServerInterpreter* csi);
extern void vtkEdgeCenters_Init(vtkClientServerInterpreter* csi);
extern void vtkExpandSelectedGraph_Init(vtkClientServerInterpreter* csi);
extern void vtkExtractSelectedGraph_Init(vtkClientServerInterpreter* csi);
extern void vtkGenerateIndexArray_Init(vtkClientServerInterpreter* csi);
extern void vtkGraphHierarchicalBundleEdges_Init(vtkClientServerInterpreter* csi);
extern void vtkGroupLeafVertices_Init(vtkClientServerInterpreter* csi);
extern void vtkMergeColumns_Init(vtkClientServerInterpreter* csi);
extern void vtkMergeGraphs_Init(vtkClientServerInterpreter* csi);
extern void vtkMergeTables_Init(vtkClientServerInterpreter* csi);
extern void vtkMutableGraphHelper_Init(vtkClientServerInterpreter* csi);
extern void vtkNetworkHierarchy_Init(vtkClientServerInterpreter* csi);
extern void vtkPipelineGraphSource_Init(vtkClientServerInterpreter* csi);
extern void vtkPruneTreeFilter_Init(vtkClientServerInterpreter* csi);
extern void vtkRandomGraphSource_Init(vtkClientServerInterpreter* csi);
extern void vtkReduceTable_Init(vtkClientServerInterpreter* csi);
extern void vtkRemoveIsolatedVertices_Init(vtkClientServerInterpreter* csi);
extern void vtkSparseArrayToTable_Init(vtkClientServerInterpreter* csi);
extern void vtkStreamGraph_Init(vtkClientServerInterpreter* csi);
extern void vtkStringToCategory_Init(vtkClientServerInterpreter* csi);
extern void vtkStringToNumeric_Init(vtkClientServerInterpreter* csi);
extern void vtkTableToArray_Init(vtkClientServerInterpreter* csi);
extern void vtkTableToGraph_Init(vtkClientServerInterpreter* csi);
extern void vtkTableToSparseArray_Init(vtkClientServerInterpreter* csi);
extern void vtkTableToTreeFilter_Init(vtkClientServerInterpreter* csi);
extern void vtkThresholdGraph_Init(vtkClientServerInterpreter* csi);
extern void vtkThresholdTable_Init(vtkClientServerInterpreter* csi);
extern void vtkTransferAttributes_Init(vtkClientServerInterpreter* csi);
extern void vtkTransposeMatrix_Init(vtkClientServerInterpreter* csi);
extern void vtkTreeFieldAggregator_Init(vtkClientServerInterpreter* csi);
extern void vtkTreeDifferenceFilter_Init(vtkClientServerInterpreter* csi);
extern void vtkTreeLevelsFilter_Init(vtkClientServerInterpreter* csi);
extern void vtkVertexDegree_Init(vtkClientServerInterpreter* csi);
extern void vtkRemoveHiddenData_Init(vtkClientServerInterpreter* csi);
extern void vtkKCoreDecomposition_Init(vtkClientServerInterpreter* csi);


extern "C" void VTK_WRAP_CS_EXPORT vtkInfovisCoreCS_Initialize(
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
    PyImport_AppendInittab("vtkInfovisCorePython", initvtkInfovisCorePython);
    }

  csi->Load("vtkInfovisCore");
#endif

  vtkAddMembershipArray_Init(csi);
  vtkAdjacencyMatrixToEdgeTable_Init(csi);
  vtkArrayNorm_Init(csi);
  vtkArrayToTable_Init(csi);
  vtkCollapseGraph_Init(csi);
  vtkCollapseVerticesByArray_Init(csi);
  vtkDataObjectToTable_Init(csi);
  vtkDotProductSimilarity_Init(csi);
  vtkExtractSelectedTree_Init(csi);
  vtkEdgeCenters_Init(csi);
  vtkExpandSelectedGraph_Init(csi);
  vtkExtractSelectedGraph_Init(csi);
  vtkGenerateIndexArray_Init(csi);
  vtkGraphHierarchicalBundleEdges_Init(csi);
  vtkGroupLeafVertices_Init(csi);
  vtkMergeColumns_Init(csi);
  vtkMergeGraphs_Init(csi);
  vtkMergeTables_Init(csi);
  vtkMutableGraphHelper_Init(csi);
  vtkNetworkHierarchy_Init(csi);
  vtkPipelineGraphSource_Init(csi);
  vtkPruneTreeFilter_Init(csi);
  vtkRandomGraphSource_Init(csi);
  vtkReduceTable_Init(csi);
  vtkRemoveIsolatedVertices_Init(csi);
  vtkSparseArrayToTable_Init(csi);
  vtkStreamGraph_Init(csi);
  vtkStringToCategory_Init(csi);
  vtkStringToNumeric_Init(csi);
  vtkTableToArray_Init(csi);
  vtkTableToGraph_Init(csi);
  vtkTableToSparseArray_Init(csi);
  vtkTableToTreeFilter_Init(csi);
  vtkThresholdGraph_Init(csi);
  vtkThresholdTable_Init(csi);
  vtkTransferAttributes_Init(csi);
  vtkTransposeMatrix_Init(csi);
  vtkTreeFieldAggregator_Init(csi);
  vtkTreeDifferenceFilter_Init(csi);
  vtkTreeLevelsFilter_Init(csi);
  vtkVertexDegree_Init(csi);
  vtkRemoveHiddenData_Init(csi);
  vtkKCoreDecomposition_Init(csi);

}
