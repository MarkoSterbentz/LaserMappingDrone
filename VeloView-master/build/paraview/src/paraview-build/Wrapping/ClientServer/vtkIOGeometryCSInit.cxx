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
extern "C" void real_initvtkIOGeometryPython(const char *modulename);

void initvtkIOGeometryPython()
{
  static const char modulename[] = "vtkIOGeometryPython";
  real_initvtkIOGeometryPython(modulename);
}
#endif

extern void vtkAVSucdReader_Init(vtkClientServerInterpreter* csi);
extern void vtkBYUReader_Init(vtkClientServerInterpreter* csi);
extern void vtkBYUWriter_Init(vtkClientServerInterpreter* csi);
extern void vtkChacoReader_Init(vtkClientServerInterpreter* csi);
extern void vtkFacetWriter_Init(vtkClientServerInterpreter* csi);
extern void vtkFLUENTReader_Init(vtkClientServerInterpreter* csi);
extern void vtkGAMBITReader_Init(vtkClientServerInterpreter* csi);
extern void vtkGaussianCubeReader_Init(vtkClientServerInterpreter* csi);
extern void vtkIVWriter_Init(vtkClientServerInterpreter* csi);
extern void vtkMCubesReader_Init(vtkClientServerInterpreter* csi);
extern void vtkMCubesWriter_Init(vtkClientServerInterpreter* csi);
extern void vtkMFIXReader_Init(vtkClientServerInterpreter* csi);
extern void vtkMoleculeReaderBase_Init(vtkClientServerInterpreter* csi);
extern void vtkMultiBlockPLOT3DReader_Init(vtkClientServerInterpreter* csi);
extern void vtkOBJReader_Init(vtkClientServerInterpreter* csi);
extern void vtkOpenFOAMReader_Init(vtkClientServerInterpreter* csi);
extern void vtkParticleReader_Init(vtkClientServerInterpreter* csi);
extern void vtkPDBReader_Init(vtkClientServerInterpreter* csi);
extern void vtkPlot3DMetaReader_Init(vtkClientServerInterpreter* csi);
extern void vtkProStarReader_Init(vtkClientServerInterpreter* csi);
extern void vtkSTLReader_Init(vtkClientServerInterpreter* csi);
extern void vtkSTLWriter_Init(vtkClientServerInterpreter* csi);
extern void vtkTecplotReader_Init(vtkClientServerInterpreter* csi);
extern void vtkUGFacetReader_Init(vtkClientServerInterpreter* csi);
extern void vtkWindBladeReader_Init(vtkClientServerInterpreter* csi);
extern void vtkXYZMolReader_Init(vtkClientServerInterpreter* csi);


extern "C" void VTK_WRAP_CS_EXPORT vtkIOGeometryCS_Initialize(
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
    PyImport_AppendInittab("vtkIOGeometryPython", initvtkIOGeometryPython);
    }

  csi->Load("vtkIOGeometry");
#endif

  vtkAVSucdReader_Init(csi);
  vtkBYUReader_Init(csi);
  vtkBYUWriter_Init(csi);
  vtkChacoReader_Init(csi);
  vtkFacetWriter_Init(csi);
  vtkFLUENTReader_Init(csi);
  vtkGAMBITReader_Init(csi);
  vtkGaussianCubeReader_Init(csi);
  vtkIVWriter_Init(csi);
  vtkMCubesReader_Init(csi);
  vtkMCubesWriter_Init(csi);
  vtkMFIXReader_Init(csi);
  vtkMoleculeReaderBase_Init(csi);
  vtkMultiBlockPLOT3DReader_Init(csi);
  vtkOBJReader_Init(csi);
  vtkOpenFOAMReader_Init(csi);
  vtkParticleReader_Init(csi);
  vtkPDBReader_Init(csi);
  vtkPlot3DMetaReader_Init(csi);
  vtkProStarReader_Init(csi);
  vtkSTLReader_Init(csi);
  vtkSTLWriter_Init(csi);
  vtkTecplotReader_Init(csi);
  vtkUGFacetReader_Init(csi);
  vtkWindBladeReader_Init(csi);
  vtkXYZMolReader_Init(csi);

}
