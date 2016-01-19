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
extern "C" void real_initvtkIOXdmf2Python(const char *modulename);

void initvtkIOXdmf2Python()
{
  static const char modulename[] = "vtkIOXdmf2Python";
  real_initvtkIOXdmf2Python(modulename);
}
#endif

extern void vtkSILBuilder_Init(vtkClientServerInterpreter* csi);
extern void vtkXdmfReader_Init(vtkClientServerInterpreter* csi);
extern void vtkXdmfWriter_Init(vtkClientServerInterpreter* csi);


extern "C" void VTK_WRAP_CS_EXPORT vtkIOXdmf2CS_Initialize(
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
    PyImport_AppendInittab("vtkIOXdmf2Python", initvtkIOXdmf2Python);
    }

  csi->Load("vtkIOXdmf2");
#endif

  vtkSILBuilder_Init(csi);
  vtkXdmfReader_Init(csi);
  vtkXdmfWriter_Init(csi);

}
