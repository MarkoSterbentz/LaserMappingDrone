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
extern "C" void real_initvtkCommonTransformsPython(const char *modulename);

void initvtkCommonTransformsPython()
{
  static const char modulename[] = "vtkCommonTransformsPython";
  real_initvtkCommonTransformsPython(modulename);
}
#endif

extern void vtkAbstractTransform_Init(vtkClientServerInterpreter* csi);
extern void vtkCylindricalTransform_Init(vtkClientServerInterpreter* csi);
extern void vtkGeneralTransform_Init(vtkClientServerInterpreter* csi);
extern void vtkHomogeneousTransform_Init(vtkClientServerInterpreter* csi);
extern void vtkIdentityTransform_Init(vtkClientServerInterpreter* csi);
extern void vtkLinearTransform_Init(vtkClientServerInterpreter* csi);
extern void vtkMatrixToHomogeneousTransform_Init(vtkClientServerInterpreter* csi);
extern void vtkMatrixToLinearTransform_Init(vtkClientServerInterpreter* csi);
extern void vtkPerspectiveTransform_Init(vtkClientServerInterpreter* csi);
extern void vtkSphericalTransform_Init(vtkClientServerInterpreter* csi);
extern void vtkThinPlateSplineTransform_Init(vtkClientServerInterpreter* csi);
extern void vtkTransform2D_Init(vtkClientServerInterpreter* csi);
extern void vtkTransformCollection_Init(vtkClientServerInterpreter* csi);
extern void vtkTransform_Init(vtkClientServerInterpreter* csi);
extern void vtkWarpTransform_Init(vtkClientServerInterpreter* csi);
extern void vtkLandmarkTransform_Init(vtkClientServerInterpreter* csi);


extern "C" void VTK_WRAP_CS_EXPORT vtkCommonTransformsCS_Initialize(
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
    PyImport_AppendInittab("vtkCommonTransformsPython", initvtkCommonTransformsPython);
    }

  csi->Load("vtkCommonTransforms");
#endif

  vtkAbstractTransform_Init(csi);
  vtkCylindricalTransform_Init(csi);
  vtkGeneralTransform_Init(csi);
  vtkHomogeneousTransform_Init(csi);
  vtkIdentityTransform_Init(csi);
  vtkLinearTransform_Init(csi);
  vtkMatrixToHomogeneousTransform_Init(csi);
  vtkMatrixToLinearTransform_Init(csi);
  vtkPerspectiveTransform_Init(csi);
  vtkSphericalTransform_Init(csi);
  vtkThinPlateSplineTransform_Init(csi);
  vtkTransform2D_Init(csi);
  vtkTransformCollection_Init(csi);
  vtkTransform_Init(csi);
  vtkWarpTransform_Init(csi);
  vtkLandmarkTransform_Init(csi);

}
