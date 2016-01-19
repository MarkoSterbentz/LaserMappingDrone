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
extern "C" void real_initvtkFiltersGenericPython(const char *modulename);

void initvtkFiltersGenericPython()
{
  static const char modulename[] = "vtkFiltersGenericPython";
  real_initvtkFiltersGenericPython(modulename);
}
#endif

extern void vtkGenericClip_Init(vtkClientServerInterpreter* csi);
extern void vtkGenericContourFilter_Init(vtkClientServerInterpreter* csi);
extern void vtkGenericCutter_Init(vtkClientServerInterpreter* csi);
extern void vtkGenericDataSetTessellator_Init(vtkClientServerInterpreter* csi);
extern void vtkGenericGeometryFilter_Init(vtkClientServerInterpreter* csi);
extern void vtkGenericGlyph3DFilter_Init(vtkClientServerInterpreter* csi);
extern void vtkGenericOutlineFilter_Init(vtkClientServerInterpreter* csi);
extern void vtkGenericProbeFilter_Init(vtkClientServerInterpreter* csi);
extern void vtkGenericStreamTracer_Init(vtkClientServerInterpreter* csi);


extern "C" void VTK_WRAP_CS_EXPORT vtkFiltersGenericCS_Initialize(
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
    PyImport_AppendInittab("vtkFiltersGenericPython", initvtkFiltersGenericPython);
    }

  csi->Load("vtkFiltersGeneric");
#endif

  vtkGenericClip_Init(csi);
  vtkGenericContourFilter_Init(csi);
  vtkGenericCutter_Init(csi);
  vtkGenericDataSetTessellator_Init(csi);
  vtkGenericGeometryFilter_Init(csi);
  vtkGenericGlyph3DFilter_Init(csi);
  vtkGenericOutlineFilter_Init(csi);
  vtkGenericProbeFilter_Init(csi);
  vtkGenericStreamTracer_Init(csi);

}
