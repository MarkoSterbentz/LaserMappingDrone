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
extern "C" void real_initvtkCommonMathPython(const char *modulename);

void initvtkCommonMathPython()
{
  static const char modulename[] = "vtkCommonMathPython";
  real_initvtkCommonMathPython(modulename);
}
#endif

extern void vtkAmoebaMinimizer_Init(vtkClientServerInterpreter* csi);
extern void vtkFunctionSet_Init(vtkClientServerInterpreter* csi);
extern void vtkInitialValueProblemSolver_Init(vtkClientServerInterpreter* csi);
extern void vtkMatrix3x3_Init(vtkClientServerInterpreter* csi);
extern void vtkMatrix4x4_Init(vtkClientServerInterpreter* csi);
extern void vtkPolynomialSolversUnivariate_Init(vtkClientServerInterpreter* csi);
extern void vtkQuaternionInterpolator_Init(vtkClientServerInterpreter* csi);
extern void vtkRungeKutta2_Init(vtkClientServerInterpreter* csi);
extern void vtkRungeKutta4_Init(vtkClientServerInterpreter* csi);
extern void vtkRungeKutta45_Init(vtkClientServerInterpreter* csi);
extern void vtkFastNumericConversion_Init(vtkClientServerInterpreter* csi);


extern "C" void VTK_WRAP_CS_EXPORT vtkCommonMathCS_Initialize(
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
    PyImport_AppendInittab("vtkCommonMathPython", initvtkCommonMathPython);
    }

  csi->Load("vtkCommonMath");
#endif

  vtkAmoebaMinimizer_Init(csi);
  vtkFunctionSet_Init(csi);
  vtkInitialValueProblemSolver_Init(csi);
  vtkMatrix3x3_Init(csi);
  vtkMatrix4x4_Init(csi);
  vtkPolynomialSolversUnivariate_Init(csi);
  vtkQuaternionInterpolator_Init(csi);
  vtkRungeKutta2_Init(csi);
  vtkRungeKutta4_Init(csi);
  vtkRungeKutta45_Init(csi);
  vtkFastNumericConversion_Init(csi);

}
