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
extern "C" void real_initvtkPVServerManagerRenderingPython(const char *modulename);

void initvtkPVServerManagerRenderingPython()
{
  static const char modulename[] = "vtkPVServerManagerRenderingPython";
  real_initvtkPVServerManagerRenderingPython(modulename);
}
#endif

extern void vtkPVComparativeAnimationCue_Init(vtkClientServerInterpreter* csi);
extern void vtkPVComparativeView_Init(vtkClientServerInterpreter* csi);
extern void vtkSMBagChartSeriesListDomain_Init(vtkClientServerInterpreter* csi);
extern void vtkSMBoxRepresentationProxy_Init(vtkClientServerInterpreter* csi);
extern void vtkSMCameraLink_Init(vtkClientServerInterpreter* csi);
extern void vtkSMCameraProxy_Init(vtkClientServerInterpreter* csi);
extern void vtkSMChartRepresentationProxy_Init(vtkClientServerInterpreter* csi);
extern void vtkSMChartSeriesListDomain_Init(vtkClientServerInterpreter* csi);
extern void vtkSMChartSeriesSelectionDomain_Init(vtkClientServerInterpreter* csi);
extern void vtkSMChartUseIndexForAxisDomain_Init(vtkClientServerInterpreter* csi);
extern void vtkSMComparativeAnimationCueProxy_Init(vtkClientServerInterpreter* csi);
extern void vtkSMComparativeAnimationCueUndoElement_Init(vtkClientServerInterpreter* csi);
extern void vtkSMComparativeViewProxy_Init(vtkClientServerInterpreter* csi);
extern void vtkSMContextViewProxy_Init(vtkClientServerInterpreter* csi);
extern void vtkSMDataDeliveryManager_Init(vtkClientServerInterpreter* csi);
extern void vtkSMFunctionalBagChartSeriesSelectionDomain_Init(vtkClientServerInterpreter* csi);
extern void vtkSMImplicitPlaneRepresentationProxy_Init(vtkClientServerInterpreter* csi);
extern void vtkSMMultiSliceViewProxy_Init(vtkClientServerInterpreter* csi);
extern void vtkSMNewWidgetRepresentationProxy_Init(vtkClientServerInterpreter* csi);
extern void vtkSMOrthographicSliceViewProxy_Init(vtkClientServerInterpreter* csi);
extern void vtkSMPlotMatrixViewProxy_Init(vtkClientServerInterpreter* csi);
extern void vtkSMPVRepresentationProxy_Init(vtkClientServerInterpreter* csi);
extern void vtkSMRenderViewProxy_Init(vtkClientServerInterpreter* csi);
extern void vtkSMRepresentationProxy_Init(vtkClientServerInterpreter* csi);
extern void vtkSMRepresentationTypeDomain_Init(vtkClientServerInterpreter* csi);
extern void vtkSMRepresentedArrayListDomain_Init(vtkClientServerInterpreter* csi);
extern void vtkSMScalarBarWidgetRepresentationProxy_Init(vtkClientServerInterpreter* csi);
extern void vtkSMSelectionHelper_Init(vtkClientServerInterpreter* csi);
extern void vtkSMSpreadSheetRepresentationProxy_Init(vtkClientServerInterpreter* csi);
extern void vtkSMTextWidgetRepresentationProxy_Init(vtkClientServerInterpreter* csi);
extern void vtkSMTransferFunctionManager_Init(vtkClientServerInterpreter* csi);
extern void vtkSMTransferFunctionProxy_Init(vtkClientServerInterpreter* csi);
extern void vtkSMUtilities_Init(vtkClientServerInterpreter* csi);
extern void vtkSMViewLayoutProxy_Init(vtkClientServerInterpreter* csi);
extern void vtkSMViewProxy_Init(vtkClientServerInterpreter* csi);
extern void vtkSMWidgetRepresentationProxy_Init(vtkClientServerInterpreter* csi);
extern void vtkSMPythonViewProxy_Init(vtkClientServerInterpreter* csi);
extern void vtkSMParaViewPipelineControllerWithRendering_Init(vtkClientServerInterpreter* csi);


extern "C" void VTK_WRAP_CS_EXPORT vtkPVServerManagerRenderingCS_Initialize(
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
    PyImport_AppendInittab("vtkPVServerManagerRenderingPython", initvtkPVServerManagerRenderingPython);
    }

  csi->Load("vtkPVServerManagerRendering");
#endif

  vtkPVComparativeAnimationCue_Init(csi);
  vtkPVComparativeView_Init(csi);
  vtkSMBagChartSeriesListDomain_Init(csi);
  vtkSMBoxRepresentationProxy_Init(csi);
  vtkSMCameraLink_Init(csi);
  vtkSMCameraProxy_Init(csi);
  vtkSMChartRepresentationProxy_Init(csi);
  vtkSMChartSeriesListDomain_Init(csi);
  vtkSMChartSeriesSelectionDomain_Init(csi);
  vtkSMChartUseIndexForAxisDomain_Init(csi);
  vtkSMComparativeAnimationCueProxy_Init(csi);
  vtkSMComparativeAnimationCueUndoElement_Init(csi);
  vtkSMComparativeViewProxy_Init(csi);
  vtkSMContextViewProxy_Init(csi);
  vtkSMDataDeliveryManager_Init(csi);
  vtkSMFunctionalBagChartSeriesSelectionDomain_Init(csi);
  vtkSMImplicitPlaneRepresentationProxy_Init(csi);
  vtkSMMultiSliceViewProxy_Init(csi);
  vtkSMNewWidgetRepresentationProxy_Init(csi);
  vtkSMOrthographicSliceViewProxy_Init(csi);
  vtkSMPlotMatrixViewProxy_Init(csi);
  vtkSMPVRepresentationProxy_Init(csi);
  vtkSMRenderViewProxy_Init(csi);
  vtkSMRepresentationProxy_Init(csi);
  vtkSMRepresentationTypeDomain_Init(csi);
  vtkSMRepresentedArrayListDomain_Init(csi);
  vtkSMScalarBarWidgetRepresentationProxy_Init(csi);
  vtkSMSelectionHelper_Init(csi);
  vtkSMSpreadSheetRepresentationProxy_Init(csi);
  vtkSMTextWidgetRepresentationProxy_Init(csi);
  vtkSMTransferFunctionManager_Init(csi);
  vtkSMTransferFunctionProxy_Init(csi);
  vtkSMUtilities_Init(csi);
  vtkSMViewLayoutProxy_Init(csi);
  vtkSMViewProxy_Init(csi);
  vtkSMWidgetRepresentationProxy_Init(csi);
  vtkSMPythonViewProxy_Init(csi);
  vtkSMParaViewPipelineControllerWithRendering_Init(csi);

}
