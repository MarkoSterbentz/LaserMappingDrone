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
extern "C" void real_initvtkChartsCorePython(const char *modulename);

void initvtkChartsCorePython()
{
  static const char modulename[] = "vtkChartsCorePython";
  real_initvtkChartsCorePython(modulename);
}
#endif

extern void vtkAxis_Init(vtkClientServerInterpreter* csi);
extern void vtkAxisExtended_Init(vtkClientServerInterpreter* csi);
extern void vtkCategoryLegend_Init(vtkClientServerInterpreter* csi);
extern void vtkChart_Init(vtkClientServerInterpreter* csi);
extern void vtkChartBox_Init(vtkClientServerInterpreter* csi);
extern void vtkChartHistogram2D_Init(vtkClientServerInterpreter* csi);
extern void vtkChartLegend_Init(vtkClientServerInterpreter* csi);
extern void vtkChartMatrix_Init(vtkClientServerInterpreter* csi);
extern void vtkChartParallelCoordinates_Init(vtkClientServerInterpreter* csi);
extern void vtkChartPie_Init(vtkClientServerInterpreter* csi);
extern void vtkChartXY_Init(vtkClientServerInterpreter* csi);
extern void vtkChartXYZ_Init(vtkClientServerInterpreter* csi);
extern void vtkColorLegend_Init(vtkClientServerInterpreter* csi);
extern void vtkColorTransferControlPointsItem_Init(vtkClientServerInterpreter* csi);
extern void vtkColorTransferFunctionItem_Init(vtkClientServerInterpreter* csi);
extern void vtkCompositeControlPointsItem_Init(vtkClientServerInterpreter* csi);
extern void vtkCompositeTransferFunctionItem_Init(vtkClientServerInterpreter* csi);
extern void vtkControlPointsItem_Init(vtkClientServerInterpreter* csi);
extern void vtkLookupTableItem_Init(vtkClientServerInterpreter* csi);
extern void vtkPiecewiseControlPointsItem_Init(vtkClientServerInterpreter* csi);
extern void vtkPiecewiseFunctionItem_Init(vtkClientServerInterpreter* csi);
extern void vtkPiecewisePointHandleItem_Init(vtkClientServerInterpreter* csi);
extern void vtkPlot_Init(vtkClientServerInterpreter* csi);
extern void vtkPlot3D_Init(vtkClientServerInterpreter* csi);
extern void vtkPlotBag_Init(vtkClientServerInterpreter* csi);
extern void vtkPlotBar_Init(vtkClientServerInterpreter* csi);
extern void vtkPlotBox_Init(vtkClientServerInterpreter* csi);
extern void vtkPlotFunctionalBag_Init(vtkClientServerInterpreter* csi);
extern void vtkPlotGrid_Init(vtkClientServerInterpreter* csi);
extern void vtkPlotHistogram2D_Init(vtkClientServerInterpreter* csi);
extern void vtkPlotLine_Init(vtkClientServerInterpreter* csi);
extern void vtkPlotLine3D_Init(vtkClientServerInterpreter* csi);
extern void vtkPlotParallelCoordinates_Init(vtkClientServerInterpreter* csi);
extern void vtkPlotPie_Init(vtkClientServerInterpreter* csi);
extern void vtkPlotPoints_Init(vtkClientServerInterpreter* csi);
extern void vtkPlotPoints3D_Init(vtkClientServerInterpreter* csi);
extern void vtkPlotStacked_Init(vtkClientServerInterpreter* csi);
extern void vtkPlotSurface_Init(vtkClientServerInterpreter* csi);
extern void vtkScalarsToColorsItem_Init(vtkClientServerInterpreter* csi);
extern void vtkScatterPlotMatrix_Init(vtkClientServerInterpreter* csi);


extern "C" void VTK_WRAP_CS_EXPORT vtkChartsCoreCS_Initialize(
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
    PyImport_AppendInittab("vtkChartsCorePython", initvtkChartsCorePython);
    }

  csi->Load("vtkChartsCore");
#endif

  vtkAxis_Init(csi);
  vtkAxisExtended_Init(csi);
  vtkCategoryLegend_Init(csi);
  vtkChart_Init(csi);
  vtkChartBox_Init(csi);
  vtkChartHistogram2D_Init(csi);
  vtkChartLegend_Init(csi);
  vtkChartMatrix_Init(csi);
  vtkChartParallelCoordinates_Init(csi);
  vtkChartPie_Init(csi);
  vtkChartXY_Init(csi);
  vtkChartXYZ_Init(csi);
  vtkColorLegend_Init(csi);
  vtkColorTransferControlPointsItem_Init(csi);
  vtkColorTransferFunctionItem_Init(csi);
  vtkCompositeControlPointsItem_Init(csi);
  vtkCompositeTransferFunctionItem_Init(csi);
  vtkControlPointsItem_Init(csi);
  vtkLookupTableItem_Init(csi);
  vtkPiecewiseControlPointsItem_Init(csi);
  vtkPiecewiseFunctionItem_Init(csi);
  vtkPiecewisePointHandleItem_Init(csi);
  vtkPlot_Init(csi);
  vtkPlot3D_Init(csi);
  vtkPlotBag_Init(csi);
  vtkPlotBar_Init(csi);
  vtkPlotBox_Init(csi);
  vtkPlotFunctionalBag_Init(csi);
  vtkPlotGrid_Init(csi);
  vtkPlotHistogram2D_Init(csi);
  vtkPlotLine_Init(csi);
  vtkPlotLine3D_Init(csi);
  vtkPlotParallelCoordinates_Init(csi);
  vtkPlotPie_Init(csi);
  vtkPlotPoints_Init(csi);
  vtkPlotPoints3D_Init(csi);
  vtkPlotStacked_Init(csi);
  vtkPlotSurface_Init(csi);
  vtkScalarsToColorsItem_Init(csi);
  vtkScatterPlotMatrix_Init(csi);

}
