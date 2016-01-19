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
extern "C" void real_initvtkCommonDataModelPython(const char *modulename);

void initvtkCommonDataModelPython()
{
  static const char modulename[] = "vtkCommonDataModelPython";
  real_initvtkCommonDataModelPython(modulename);
}
#endif

extern void vtkAbstractCellLocator_Init(vtkClientServerInterpreter* csi);
extern void vtkAbstractPointLocator_Init(vtkClientServerInterpreter* csi);
extern void vtkAdjacentVertexIterator_Init(vtkClientServerInterpreter* csi);
extern void vtkAMRUtilities_Init(vtkClientServerInterpreter* csi);
extern void vtkAnimationScene_Init(vtkClientServerInterpreter* csi);
extern void vtkAnnotation_Init(vtkClientServerInterpreter* csi);
extern void vtkAnnotationLayers_Init(vtkClientServerInterpreter* csi);
extern void vtkArrayData_Init(vtkClientServerInterpreter* csi);
extern void vtkAttributesErrorMetric_Init(vtkClientServerInterpreter* csi);
extern void vtkBiQuadraticQuad_Init(vtkClientServerInterpreter* csi);
extern void vtkBiQuadraticQuadraticHexahedron_Init(vtkClientServerInterpreter* csi);
extern void vtkBiQuadraticQuadraticWedge_Init(vtkClientServerInterpreter* csi);
extern void vtkBiQuadraticTriangle_Init(vtkClientServerInterpreter* csi);
extern void vtkBox_Init(vtkClientServerInterpreter* csi);
extern void vtkBSPCuts_Init(vtkClientServerInterpreter* csi);
extern void vtkBSPIntersections_Init(vtkClientServerInterpreter* csi);
extern void vtkCell3D_Init(vtkClientServerInterpreter* csi);
extern void vtkCellArray_Init(vtkClientServerInterpreter* csi);
extern void vtkCell_Init(vtkClientServerInterpreter* csi);
extern void vtkCellData_Init(vtkClientServerInterpreter* csi);
extern void vtkCellIterator_Init(vtkClientServerInterpreter* csi);
extern void vtkCellLinks_Init(vtkClientServerInterpreter* csi);
extern void vtkCellLocator_Init(vtkClientServerInterpreter* csi);
extern void vtkCellTypes_Init(vtkClientServerInterpreter* csi);
extern void vtkCompositeDataSet_Init(vtkClientServerInterpreter* csi);
extern void vtkCompositeDataIterator_Init(vtkClientServerInterpreter* csi);
extern void vtkCone_Init(vtkClientServerInterpreter* csi);
extern void vtkConvexPointSet_Init(vtkClientServerInterpreter* csi);
extern void vtkCubicLine_Init(vtkClientServerInterpreter* csi);
extern void vtkCylinder_Init(vtkClientServerInterpreter* csi);
extern void vtkDataSetCellIterator_Init(vtkClientServerInterpreter* csi);
extern void vtkDataObjectCollection_Init(vtkClientServerInterpreter* csi);
extern void vtkDataObject_Init(vtkClientServerInterpreter* csi);
extern void vtkDataObjectTypes_Init(vtkClientServerInterpreter* csi);
extern void vtkDataObjectTree_Init(vtkClientServerInterpreter* csi);
extern void vtkDataObjectTreeIterator_Init(vtkClientServerInterpreter* csi);
extern void vtkDataSetAttributes_Init(vtkClientServerInterpreter* csi);
extern void vtkDataSetCollection_Init(vtkClientServerInterpreter* csi);
extern void vtkDataSet_Init(vtkClientServerInterpreter* csi);
extern void vtkDirectedAcyclicGraph_Init(vtkClientServerInterpreter* csi);
extern void vtkDirectedGraph_Init(vtkClientServerInterpreter* csi);
extern void vtkDistributedGraphHelper_Init(vtkClientServerInterpreter* csi);
extern void vtkEdgeListIterator_Init(vtkClientServerInterpreter* csi);
extern void vtkEdgeTable_Init(vtkClientServerInterpreter* csi);
extern void vtkEmptyCell_Init(vtkClientServerInterpreter* csi);
extern void vtkExplicitCell_Init(vtkClientServerInterpreter* csi);
extern void vtkExtractStructuredGridHelper_Init(vtkClientServerInterpreter* csi);
extern void vtkFieldData_Init(vtkClientServerInterpreter* csi);
extern void vtkGenericAdaptorCell_Init(vtkClientServerInterpreter* csi);
extern void vtkGenericAttributeCollection_Init(vtkClientServerInterpreter* csi);
extern void vtkGenericAttribute_Init(vtkClientServerInterpreter* csi);
extern void vtkGenericCell_Init(vtkClientServerInterpreter* csi);
extern void vtkGenericCellIterator_Init(vtkClientServerInterpreter* csi);
extern void vtkGenericCellTessellator_Init(vtkClientServerInterpreter* csi);
extern void vtkGenericDataSet_Init(vtkClientServerInterpreter* csi);
extern void vtkGenericEdgeTable_Init(vtkClientServerInterpreter* csi);
extern void vtkGenericInterpolatedVelocityField_Init(vtkClientServerInterpreter* csi);
extern void vtkGenericPointIterator_Init(vtkClientServerInterpreter* csi);
extern void vtkGenericSubdivisionErrorMetric_Init(vtkClientServerInterpreter* csi);
extern void vtkGeometricErrorMetric_Init(vtkClientServerInterpreter* csi);
extern void vtkGraph_Init(vtkClientServerInterpreter* csi);
extern void vtkGraphEdge_Init(vtkClientServerInterpreter* csi);
extern void vtkGraphInternals_Init(vtkClientServerInterpreter* csi);
extern void vtkHexagonalPrism_Init(vtkClientServerInterpreter* csi);
extern void vtkHexahedron_Init(vtkClientServerInterpreter* csi);
extern void vtkHierarchicalBoxDataIterator_Init(vtkClientServerInterpreter* csi);
extern void vtkHierarchicalBoxDataSet_Init(vtkClientServerInterpreter* csi);
extern void vtkHyperOctreeCursor_Init(vtkClientServerInterpreter* csi);
extern void vtkHyperOctree_Init(vtkClientServerInterpreter* csi);
extern void vtkHyperOctreePointsGrabber_Init(vtkClientServerInterpreter* csi);
extern void vtkHyperTree_Init(vtkClientServerInterpreter* csi);
extern void vtkHyperTreeCursor_Init(vtkClientServerInterpreter* csi);
extern void vtkHyperTreeGrid_Init(vtkClientServerInterpreter* csi);
extern void vtkImageData_Init(vtkClientServerInterpreter* csi);
extern void vtkImplicitBoolean_Init(vtkClientServerInterpreter* csi);
extern void vtkImplicitDataSet_Init(vtkClientServerInterpreter* csi);
extern void vtkImplicitFunctionCollection_Init(vtkClientServerInterpreter* csi);
extern void vtkImplicitFunction_Init(vtkClientServerInterpreter* csi);
extern void vtkImplicitHalo_Init(vtkClientServerInterpreter* csi);
extern void vtkImplicitSelectionLoop_Init(vtkClientServerInterpreter* csi);
extern void vtkImplicitSum_Init(vtkClientServerInterpreter* csi);
extern void vtkImplicitVolume_Init(vtkClientServerInterpreter* csi);
extern void vtkImplicitWindowFunction_Init(vtkClientServerInterpreter* csi);
extern void vtkIncrementalOctreeNode_Init(vtkClientServerInterpreter* csi);
extern void vtkIncrementalOctreePointLocator_Init(vtkClientServerInterpreter* csi);
extern void vtkIncrementalPointLocator_Init(vtkClientServerInterpreter* csi);
extern void vtkInEdgeIterator_Init(vtkClientServerInterpreter* csi);
extern void vtkInformationQuadratureSchemeDefinitionVectorKey_Init(vtkClientServerInterpreter* csi);
extern void vtkIterativeClosestPointTransform_Init(vtkClientServerInterpreter* csi);
extern void vtkKdNode_Init(vtkClientServerInterpreter* csi);
extern void vtkKdTree_Init(vtkClientServerInterpreter* csi);
extern void vtkKdTreePointLocator_Init(vtkClientServerInterpreter* csi);
extern void vtkLine_Init(vtkClientServerInterpreter* csi);
extern void vtkLocator_Init(vtkClientServerInterpreter* csi);
extern void vtkMeanValueCoordinatesInterpolator_Init(vtkClientServerInterpreter* csi);
extern void vtkMergePoints_Init(vtkClientServerInterpreter* csi);
extern void vtkMultiBlockDataSet_Init(vtkClientServerInterpreter* csi);
extern void vtkMultiPieceDataSet_Init(vtkClientServerInterpreter* csi);
extern void vtkMutableDirectedGraph_Init(vtkClientServerInterpreter* csi);
extern void vtkMutableUndirectedGraph_Init(vtkClientServerInterpreter* csi);
extern void vtkNonLinearCell_Init(vtkClientServerInterpreter* csi);
extern void vtkNonMergingPointLocator_Init(vtkClientServerInterpreter* csi);
extern void vtkOctreePointLocator_Init(vtkClientServerInterpreter* csi);
extern void vtkOctreePointLocatorNode_Init(vtkClientServerInterpreter* csi);
extern void vtkOrderedTriangulator_Init(vtkClientServerInterpreter* csi);
extern void vtkOutEdgeIterator_Init(vtkClientServerInterpreter* csi);
extern void vtkPath_Init(vtkClientServerInterpreter* csi);
extern void vtkPentagonalPrism_Init(vtkClientServerInterpreter* csi);
extern void vtkPerlinNoise_Init(vtkClientServerInterpreter* csi);
extern void vtkPiecewiseFunction_Init(vtkClientServerInterpreter* csi);
extern void vtkPixel_Init(vtkClientServerInterpreter* csi);
extern void vtkPlaneCollection_Init(vtkClientServerInterpreter* csi);
extern void vtkPlane_Init(vtkClientServerInterpreter* csi);
extern void vtkPlanes_Init(vtkClientServerInterpreter* csi);
extern void vtkPlanesIntersection_Init(vtkClientServerInterpreter* csi);
extern void vtkPointData_Init(vtkClientServerInterpreter* csi);
extern void vtkPointLocator_Init(vtkClientServerInterpreter* csi);
extern void vtkPointSet_Init(vtkClientServerInterpreter* csi);
extern void vtkPointSetCellIterator_Init(vtkClientServerInterpreter* csi);
extern void vtkPointsProjectedHull_Init(vtkClientServerInterpreter* csi);
extern void vtkPolyDataCollection_Init(vtkClientServerInterpreter* csi);
extern void vtkPolyData_Init(vtkClientServerInterpreter* csi);
extern void vtkPolygon_Init(vtkClientServerInterpreter* csi);
extern void vtkPolyhedron_Init(vtkClientServerInterpreter* csi);
extern void vtkPolyLine_Init(vtkClientServerInterpreter* csi);
extern void vtkPolyPlane_Init(vtkClientServerInterpreter* csi);
extern void vtkPolyVertex_Init(vtkClientServerInterpreter* csi);
extern void vtkPyramid_Init(vtkClientServerInterpreter* csi);
extern void vtkQuad_Init(vtkClientServerInterpreter* csi);
extern void vtkQuadraticEdge_Init(vtkClientServerInterpreter* csi);
extern void vtkQuadraticHexahedron_Init(vtkClientServerInterpreter* csi);
extern void vtkQuadraticLinearQuad_Init(vtkClientServerInterpreter* csi);
extern void vtkQuadraticLinearWedge_Init(vtkClientServerInterpreter* csi);
extern void vtkQuadraticPolygon_Init(vtkClientServerInterpreter* csi);
extern void vtkQuadraticPyramid_Init(vtkClientServerInterpreter* csi);
extern void vtkQuadraticQuad_Init(vtkClientServerInterpreter* csi);
extern void vtkQuadraticTetra_Init(vtkClientServerInterpreter* csi);
extern void vtkQuadraticTriangle_Init(vtkClientServerInterpreter* csi);
extern void vtkQuadraticWedge_Init(vtkClientServerInterpreter* csi);
extern void vtkQuadratureSchemeDefinition_Init(vtkClientServerInterpreter* csi);
extern void vtkQuadric_Init(vtkClientServerInterpreter* csi);
extern void vtkRectilinearGrid_Init(vtkClientServerInterpreter* csi);
extern void vtkReebGraph_Init(vtkClientServerInterpreter* csi);
extern void vtkReebGraphSimplificationMetric_Init(vtkClientServerInterpreter* csi);
extern void vtkSelection_Init(vtkClientServerInterpreter* csi);
extern void vtkSelectionNode_Init(vtkClientServerInterpreter* csi);
extern void vtkSimpleCellTessellator_Init(vtkClientServerInterpreter* csi);
extern void vtkSmoothErrorMetric_Init(vtkClientServerInterpreter* csi);
extern void vtkSphere_Init(vtkClientServerInterpreter* csi);
extern void vtkSpline_Init(vtkClientServerInterpreter* csi);
extern void vtkStructuredData_Init(vtkClientServerInterpreter* csi);
extern void vtkStructuredExtent_Init(vtkClientServerInterpreter* csi);
extern void vtkStructuredGrid_Init(vtkClientServerInterpreter* csi);
extern void vtkStructuredPointsCollection_Init(vtkClientServerInterpreter* csi);
extern void vtkStructuredPoints_Init(vtkClientServerInterpreter* csi);
extern void vtkStructuredVisibilityConstraint_Init(vtkClientServerInterpreter* csi);
extern void vtkSuperquadric_Init(vtkClientServerInterpreter* csi);
extern void vtkTable_Init(vtkClientServerInterpreter* csi);
extern void vtkTensor_Init(vtkClientServerInterpreter* csi);
extern void vtkTetra_Init(vtkClientServerInterpreter* csi);
extern void vtkTreeBFSIterator_Init(vtkClientServerInterpreter* csi);
extern void vtkTree_Init(vtkClientServerInterpreter* csi);
extern void vtkTreeDFSIterator_Init(vtkClientServerInterpreter* csi);
extern void vtkTriangle_Init(vtkClientServerInterpreter* csi);
extern void vtkTriangleStrip_Init(vtkClientServerInterpreter* csi);
extern void vtkTriQuadraticHexahedron_Init(vtkClientServerInterpreter* csi);
extern void vtkUndirectedGraph_Init(vtkClientServerInterpreter* csi);
extern void vtkUniformGrid_Init(vtkClientServerInterpreter* csi);
extern void vtkUnstructuredGrid_Init(vtkClientServerInterpreter* csi);
extern void vtkUnstructuredGridBase_Init(vtkClientServerInterpreter* csi);
extern void vtkUnstructuredGridCellIterator_Init(vtkClientServerInterpreter* csi);
extern void vtkVertex_Init(vtkClientServerInterpreter* csi);
extern void vtkVertexListIterator_Init(vtkClientServerInterpreter* csi);
extern void vtkVoxel_Init(vtkClientServerInterpreter* csi);
extern void vtkWedge_Init(vtkClientServerInterpreter* csi);
extern void vtkXMLDataElement_Init(vtkClientServerInterpreter* csi);
extern void vtkTreeIterator_Init(vtkClientServerInterpreter* csi);
extern void vtkMolecule_Init(vtkClientServerInterpreter* csi);
extern void vtkAbstractElectronicData_Init(vtkClientServerInterpreter* csi);
extern void vtkNonOverlappingAMR_Init(vtkClientServerInterpreter* csi);
extern void vtkOverlappingAMR_Init(vtkClientServerInterpreter* csi);
extern void vtkAMRInformation_Init(vtkClientServerInterpreter* csi);
extern void vtkUniformGridAMR_Init(vtkClientServerInterpreter* csi);
extern void vtkUniformGridAMRDataIterator_Init(vtkClientServerInterpreter* csi);


extern "C" void VTK_WRAP_CS_EXPORT vtkCommonDataModelCS_Initialize(
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
    PyImport_AppendInittab("vtkCommonDataModelPython", initvtkCommonDataModelPython);
    }

  csi->Load("vtkCommonDataModel");
#endif

  vtkAbstractCellLocator_Init(csi);
  vtkAbstractPointLocator_Init(csi);
  vtkAdjacentVertexIterator_Init(csi);
  vtkAMRUtilities_Init(csi);
  vtkAnimationScene_Init(csi);
  vtkAnnotation_Init(csi);
  vtkAnnotationLayers_Init(csi);
  vtkArrayData_Init(csi);
  vtkAttributesErrorMetric_Init(csi);
  vtkBiQuadraticQuad_Init(csi);
  vtkBiQuadraticQuadraticHexahedron_Init(csi);
  vtkBiQuadraticQuadraticWedge_Init(csi);
  vtkBiQuadraticTriangle_Init(csi);
  vtkBox_Init(csi);
  vtkBSPCuts_Init(csi);
  vtkBSPIntersections_Init(csi);
  vtkCell3D_Init(csi);
  vtkCellArray_Init(csi);
  vtkCell_Init(csi);
  vtkCellData_Init(csi);
  vtkCellIterator_Init(csi);
  vtkCellLinks_Init(csi);
  vtkCellLocator_Init(csi);
  vtkCellTypes_Init(csi);
  vtkCompositeDataSet_Init(csi);
  vtkCompositeDataIterator_Init(csi);
  vtkCone_Init(csi);
  vtkConvexPointSet_Init(csi);
  vtkCubicLine_Init(csi);
  vtkCylinder_Init(csi);
  vtkDataSetCellIterator_Init(csi);
  vtkDataObjectCollection_Init(csi);
  vtkDataObject_Init(csi);
  vtkDataObjectTypes_Init(csi);
  vtkDataObjectTree_Init(csi);
  vtkDataObjectTreeIterator_Init(csi);
  vtkDataSetAttributes_Init(csi);
  vtkDataSetCollection_Init(csi);
  vtkDataSet_Init(csi);
  vtkDirectedAcyclicGraph_Init(csi);
  vtkDirectedGraph_Init(csi);
  vtkDistributedGraphHelper_Init(csi);
  vtkEdgeListIterator_Init(csi);
  vtkEdgeTable_Init(csi);
  vtkEmptyCell_Init(csi);
  vtkExplicitCell_Init(csi);
  vtkExtractStructuredGridHelper_Init(csi);
  vtkFieldData_Init(csi);
  vtkGenericAdaptorCell_Init(csi);
  vtkGenericAttributeCollection_Init(csi);
  vtkGenericAttribute_Init(csi);
  vtkGenericCell_Init(csi);
  vtkGenericCellIterator_Init(csi);
  vtkGenericCellTessellator_Init(csi);
  vtkGenericDataSet_Init(csi);
  vtkGenericEdgeTable_Init(csi);
  vtkGenericInterpolatedVelocityField_Init(csi);
  vtkGenericPointIterator_Init(csi);
  vtkGenericSubdivisionErrorMetric_Init(csi);
  vtkGeometricErrorMetric_Init(csi);
  vtkGraph_Init(csi);
  vtkGraphEdge_Init(csi);
  vtkGraphInternals_Init(csi);
  vtkHexagonalPrism_Init(csi);
  vtkHexahedron_Init(csi);
  vtkHierarchicalBoxDataIterator_Init(csi);
  vtkHierarchicalBoxDataSet_Init(csi);
  vtkHyperOctreeCursor_Init(csi);
  vtkHyperOctree_Init(csi);
  vtkHyperOctreePointsGrabber_Init(csi);
  vtkHyperTree_Init(csi);
  vtkHyperTreeCursor_Init(csi);
  vtkHyperTreeGrid_Init(csi);
  vtkImageData_Init(csi);
  vtkImplicitBoolean_Init(csi);
  vtkImplicitDataSet_Init(csi);
  vtkImplicitFunctionCollection_Init(csi);
  vtkImplicitFunction_Init(csi);
  vtkImplicitHalo_Init(csi);
  vtkImplicitSelectionLoop_Init(csi);
  vtkImplicitSum_Init(csi);
  vtkImplicitVolume_Init(csi);
  vtkImplicitWindowFunction_Init(csi);
  vtkIncrementalOctreeNode_Init(csi);
  vtkIncrementalOctreePointLocator_Init(csi);
  vtkIncrementalPointLocator_Init(csi);
  vtkInEdgeIterator_Init(csi);
  vtkInformationQuadratureSchemeDefinitionVectorKey_Init(csi);
  vtkIterativeClosestPointTransform_Init(csi);
  vtkKdNode_Init(csi);
  vtkKdTree_Init(csi);
  vtkKdTreePointLocator_Init(csi);
  vtkLine_Init(csi);
  vtkLocator_Init(csi);
  vtkMeanValueCoordinatesInterpolator_Init(csi);
  vtkMergePoints_Init(csi);
  vtkMultiBlockDataSet_Init(csi);
  vtkMultiPieceDataSet_Init(csi);
  vtkMutableDirectedGraph_Init(csi);
  vtkMutableUndirectedGraph_Init(csi);
  vtkNonLinearCell_Init(csi);
  vtkNonMergingPointLocator_Init(csi);
  vtkOctreePointLocator_Init(csi);
  vtkOctreePointLocatorNode_Init(csi);
  vtkOrderedTriangulator_Init(csi);
  vtkOutEdgeIterator_Init(csi);
  vtkPath_Init(csi);
  vtkPentagonalPrism_Init(csi);
  vtkPerlinNoise_Init(csi);
  vtkPiecewiseFunction_Init(csi);
  vtkPixel_Init(csi);
  vtkPlaneCollection_Init(csi);
  vtkPlane_Init(csi);
  vtkPlanes_Init(csi);
  vtkPlanesIntersection_Init(csi);
  vtkPointData_Init(csi);
  vtkPointLocator_Init(csi);
  vtkPointSet_Init(csi);
  vtkPointSetCellIterator_Init(csi);
  vtkPointsProjectedHull_Init(csi);
  vtkPolyDataCollection_Init(csi);
  vtkPolyData_Init(csi);
  vtkPolygon_Init(csi);
  vtkPolyhedron_Init(csi);
  vtkPolyLine_Init(csi);
  vtkPolyPlane_Init(csi);
  vtkPolyVertex_Init(csi);
  vtkPyramid_Init(csi);
  vtkQuad_Init(csi);
  vtkQuadraticEdge_Init(csi);
  vtkQuadraticHexahedron_Init(csi);
  vtkQuadraticLinearQuad_Init(csi);
  vtkQuadraticLinearWedge_Init(csi);
  vtkQuadraticPolygon_Init(csi);
  vtkQuadraticPyramid_Init(csi);
  vtkQuadraticQuad_Init(csi);
  vtkQuadraticTetra_Init(csi);
  vtkQuadraticTriangle_Init(csi);
  vtkQuadraticWedge_Init(csi);
  vtkQuadratureSchemeDefinition_Init(csi);
  vtkQuadric_Init(csi);
  vtkRectilinearGrid_Init(csi);
  vtkReebGraph_Init(csi);
  vtkReebGraphSimplificationMetric_Init(csi);
  vtkSelection_Init(csi);
  vtkSelectionNode_Init(csi);
  vtkSimpleCellTessellator_Init(csi);
  vtkSmoothErrorMetric_Init(csi);
  vtkSphere_Init(csi);
  vtkSpline_Init(csi);
  vtkStructuredData_Init(csi);
  vtkStructuredExtent_Init(csi);
  vtkStructuredGrid_Init(csi);
  vtkStructuredPointsCollection_Init(csi);
  vtkStructuredPoints_Init(csi);
  vtkStructuredVisibilityConstraint_Init(csi);
  vtkSuperquadric_Init(csi);
  vtkTable_Init(csi);
  vtkTensor_Init(csi);
  vtkTetra_Init(csi);
  vtkTreeBFSIterator_Init(csi);
  vtkTree_Init(csi);
  vtkTreeDFSIterator_Init(csi);
  vtkTriangle_Init(csi);
  vtkTriangleStrip_Init(csi);
  vtkTriQuadraticHexahedron_Init(csi);
  vtkUndirectedGraph_Init(csi);
  vtkUniformGrid_Init(csi);
  vtkUnstructuredGrid_Init(csi);
  vtkUnstructuredGridBase_Init(csi);
  vtkUnstructuredGridCellIterator_Init(csi);
  vtkVertex_Init(csi);
  vtkVertexListIterator_Init(csi);
  vtkVoxel_Init(csi);
  vtkWedge_Init(csi);
  vtkXMLDataElement_Init(csi);
  vtkTreeIterator_Init(csi);
  vtkMolecule_Init(csi);
  vtkAbstractElectronicData_Init(csi);
  vtkNonOverlappingAMR_Init(csi);
  vtkOverlappingAMR_Init(csi);
  vtkAMRInformation_Init(csi);
  vtkUniformGridAMR_Init(csi);
  vtkUniformGridAMRDataIterator_Init(csi);

}
