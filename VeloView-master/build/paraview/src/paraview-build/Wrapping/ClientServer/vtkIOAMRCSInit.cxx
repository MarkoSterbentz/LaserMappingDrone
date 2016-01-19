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
extern "C" void real_initvtkIOAMRPython(const char *modulename);

void initvtkIOAMRPython()
{
  static const char modulename[] = "vtkIOAMRPython";
  real_initvtkIOAMRPython(modulename);
}
#endif

extern void vtkAMRDataSetCache_Init(vtkClientServerInterpreter* csi);
extern void vtkAMRBaseParticlesReader_Init(vtkClientServerInterpreter* csi);
extern void vtkAMRBaseReader_Init(vtkClientServerInterpreter* csi);
extern void vtkAMREnzoParticlesReader_Init(vtkClientServerInterpreter* csi);
extern void vtkAMREnzoReader_Init(vtkClientServerInterpreter* csi);
extern void vtkAMRFlashParticlesReader_Init(vtkClientServerInterpreter* csi);
extern void vtkAMRFlashReader_Init(vtkClientServerInterpreter* csi);


extern "C" void VTK_WRAP_CS_EXPORT vtkIOAMRCS_Initialize(
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
    PyImport_AppendInittab("vtkIOAMRPython", initvtkIOAMRPython);
    }

  csi->Load("vtkIOAMR");
#endif

  vtkAMRDataSetCache_Init(csi);
  vtkAMRBaseParticlesReader_Init(csi);
  vtkAMRBaseReader_Init(csi);
  vtkAMREnzoParticlesReader_Init(csi);
  vtkAMREnzoReader_Init(csi);
  vtkAMRFlashParticlesReader_Init(csi);
  vtkAMRFlashReader_Init(csi);

}
