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
extern "C" void real_initvtkIOEnSightPython(const char *modulename);

void initvtkIOEnSightPython()
{
  static const char modulename[] = "vtkIOEnSightPython";
  real_initvtkIOEnSightPython(modulename);
}
#endif

extern void vtkEnSight6BinaryReader_Init(vtkClientServerInterpreter* csi);
extern void vtkEnSight6Reader_Init(vtkClientServerInterpreter* csi);
extern void vtkEnSightGoldBinaryReader_Init(vtkClientServerInterpreter* csi);
extern void vtkEnSightGoldReader_Init(vtkClientServerInterpreter* csi);
extern void vtkEnSightMasterServerReader_Init(vtkClientServerInterpreter* csi);
extern void vtkEnSightReader_Init(vtkClientServerInterpreter* csi);
extern void vtkGenericEnSightReader_Init(vtkClientServerInterpreter* csi);


extern "C" void VTK_WRAP_CS_EXPORT vtkIOEnSightCS_Initialize(
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
    PyImport_AppendInittab("vtkIOEnSightPython", initvtkIOEnSightPython);
    }

  csi->Load("vtkIOEnSight");
#endif

  vtkEnSight6BinaryReader_Init(csi);
  vtkEnSight6Reader_Init(csi);
  vtkEnSightGoldBinaryReader_Init(csi);
  vtkEnSightGoldReader_Init(csi);
  vtkEnSightMasterServerReader_Init(csi);
  vtkEnSightReader_Init(csi);
  vtkGenericEnSightReader_Init(csi);

}
