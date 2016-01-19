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
extern "C" void real_initvtkDomainsChemistryPython(const char *modulename);

void initvtkDomainsChemistryPython()
{
  static const char modulename[] = "vtkDomainsChemistryPython";
  real_initvtkDomainsChemistryPython(modulename);
}
#endif

extern void vtkCMLMoleculeReader_Init(vtkClientServerInterpreter* csi);
extern void vtkMoleculeAlgorithm_Init(vtkClientServerInterpreter* csi);
extern void vtkMoleculeMapper_Init(vtkClientServerInterpreter* csi);
extern void vtkMoleculeToAtomBallFilter_Init(vtkClientServerInterpreter* csi);
extern void vtkMoleculeToBondStickFilter_Init(vtkClientServerInterpreter* csi);
extern void vtkMoleculeToPolyDataFilter_Init(vtkClientServerInterpreter* csi);
extern void vtkPeriodicTable_Init(vtkClientServerInterpreter* csi);
extern void vtkProgrammableElectronicData_Init(vtkClientServerInterpreter* csi);
extern void vtkProteinRibbonFilter_Init(vtkClientServerInterpreter* csi);
extern void vtkSimpleBondPerceiver_Init(vtkClientServerInterpreter* csi);


extern "C" void VTK_WRAP_CS_EXPORT vtkDomainsChemistryCS_Initialize(
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
    PyImport_AppendInittab("vtkDomainsChemistryPython", initvtkDomainsChemistryPython);
    }

  csi->Load("vtkDomainsChemistry");
#endif

  vtkCMLMoleculeReader_Init(csi);
  vtkMoleculeAlgorithm_Init(csi);
  vtkMoleculeMapper_Init(csi);
  vtkMoleculeToAtomBallFilter_Init(csi);
  vtkMoleculeToBondStickFilter_Init(csi);
  vtkMoleculeToPolyDataFilter_Init(csi);
  vtkPeriodicTable_Init(csi);
  vtkProgrammableElectronicData_Init(csi);
  vtkProteinRibbonFilter_Init(csi);
  vtkSimpleBondPerceiver_Init(csi);

}
