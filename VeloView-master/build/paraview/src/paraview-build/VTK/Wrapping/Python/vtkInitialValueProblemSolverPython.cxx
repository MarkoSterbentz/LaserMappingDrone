// python wrapper for vtkInitialValueProblemSolver
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkInitialValueProblemSolver.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkInitialValueProblemSolver(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkInitialValueProblemSolverNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkInitialValueProblemSolver_Doc();

#ifndef DECLARED_PyvtkInitialValueProblemSolver_ErrorCodes_Type
extern VTK_PYTHON_EXPORT PyTypeObject PyvtkInitialValueProblemSolver_ErrorCodes_Type;
#define DECLARED_PyvtkInitialValueProblemSolver_ErrorCodes_Type
#endif

PyTypeObject PyvtkInitialValueProblemSolver_ErrorCodes_Type = {
  PyObject_HEAD_INIT(&PyType_Type)
  0,
  (char*)"ErrorCodes", // tp_name
  sizeof(PyIntObject), // tp_basicsize
  0, // tp_itemsize
  0, // tp_dealloc
  0, // tp_print
  0, // tp_getattr
  0, // tp_setattr
  0, // tp_compare
  0, // tp_repr
  0, // tp_as_number
  0, // tp_as_sequence
  0, // tp_as_mapping
  0, // tp_hash
  0, // tp_call
  0, // tp_str
  0, // tp_getattro
  0, // tp_setattro
  0, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  0, // tp_doc
  0, // tp_traverse
  0, // tp_clear
  0, // tp_richcompare
  0, // tp_weaklistoffset
  0, // tp_iter
  0, // tp_iternext
  0, // tp_methods
  0, // tp_members
  0, // tp_getset
  &PyInt_Type, // tp_base
  0, // tp_dict
  0, // tp_descr_get
  0, // tp_descr_set
  0, // tp_dictoffset
  0, // tp_init
  0, // tp_alloc
  0, // tp_new
  PyObject_Del, // tp_free
  0, // tp_is_gc
  0, // tp_bases
  0, // tp_mro
  0, // tp_cache
  0, // tp_subclasses
  0, // tp_weaklist
  VTK_WRAP_PYTHON_SUPRESS_UNINITIALIZED
};

PyObject *PyvtkInitialValueProblemSolver_ErrorCodes_FromEnum(int val)
{
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkInitialValueProblemSolver_ErrorCodes_Type);
  self->ob_ival = val;
  return (PyObject *)self;
}


static PyObject *
PyvtkInitialValueProblemSolver_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInitialValueProblemSolver *op = static_cast<vtkInitialValueProblemSolver *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkInitialValueProblemSolver::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkInitialValueProblemSolver_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInitialValueProblemSolver *op = static_cast<vtkInitialValueProblemSolver *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkInitialValueProblemSolver::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkInitialValueProblemSolver_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInitialValueProblemSolver *op = static_cast<vtkInitialValueProblemSolver *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkInitialValueProblemSolver *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkInitialValueProblemSolver::NewInstance());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      if (result && PyVTKObject_Check(result))
        {
        PyVTKObject_GetObject(result)->UnRegister(0);
        PyVTKObject_SetFlag(result, VTK_PYTHON_IGNORE_UNREGISTER, 1);
        }
      }
    }

  return result;
}


static PyObject *
PyvtkInitialValueProblemSolver_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkInitialValueProblemSolver *tempr = vtkInitialValueProblemSolver::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkInitialValueProblemSolver_ComputeNextStep_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeNextStep");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInitialValueProblemSolver *op = static_cast<vtkInitialValueProblemSolver *>(vp);

  double *temp0 = NULL;
  double *save0 = NULL;
  double small0[8];
  int size0 = 0;
  double *temp1 = NULL;
  double *save1 = NULL;
  double small1[8];
  int size1 = 0;
  double temp2;
  double temp3;
  double temp4;
  double temp5;
  PyObject *result = NULL;

  if (op)
    {
    size0 = ap.GetArgSize(0);
    temp0 = small0;
    if (size0 > 4)
      {
      temp0 = new double[2*size0];
      }
    save0 = &temp0[size0];
    size1 = ap.GetArgSize(1);
    temp1 = small1;
    if (size1 > 4)
      {
      temp1 = new double[2*size1];
      }
    save1 = &temp1[size1];
    }

  if (op && ap.CheckArgCount(6) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5))
    {
    ap.SaveArray(temp0, save0, size0);
    ap.SaveArray(temp1, save1, size1);

    int tempr = (ap.IsBound() ?
      op->ComputeNextStep(temp0, temp1, temp2, temp3, temp4, temp5) :
      op->vtkInitialValueProblemSolver::ComputeNextStep(temp0, temp1, temp2, temp3, temp4, temp5));

    if (ap.ArrayHasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(0, temp0, size0);
      }

    if (ap.ArrayHasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(1, temp1, size1);
      }

    if (!ap.ErrorOccurred())
      {
      ap.SetArgValue(3, temp3);
      }
    if (!ap.ErrorOccurred())
      {
      ap.SetArgValue(5, temp5);
      }
    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  if (temp0 && temp0 != small0)
    {
    delete [] temp0;
    }
  if (temp1 && temp1 != small1)
    {
    delete [] temp1;
    }

  return result;
}

static PyObject *
PyvtkInitialValueProblemSolver_ComputeNextStep_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeNextStep");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInitialValueProblemSolver *op = static_cast<vtkInitialValueProblemSolver *>(vp);

  double *temp0 = NULL;
  double *save0 = NULL;
  double small0[8];
  int size0 = 0;
  double *temp1 = NULL;
  double *save1 = NULL;
  double small1[8];
  int size1 = 0;
  double *temp2 = NULL;
  double *save2 = NULL;
  double small2[8];
  int size2 = 0;
  double temp3;
  double temp4;
  double temp5;
  double temp6;
  PyObject *result = NULL;

  if (op)
    {
    size0 = ap.GetArgSize(0);
    temp0 = small0;
    if (size0 > 4)
      {
      temp0 = new double[2*size0];
      }
    save0 = &temp0[size0];
    size1 = ap.GetArgSize(1);
    temp1 = small1;
    if (size1 > 4)
      {
      temp1 = new double[2*size1];
      }
    save1 = &temp1[size1];
    size2 = ap.GetArgSize(2);
    temp2 = small2;
    if (size2 > 4)
      {
      temp2 = new double[2*size2];
      }
    save2 = &temp2[size2];
    }

  if (op && ap.CheckArgCount(7) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetArray(temp2, size2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5) &&
      ap.GetValue(temp6))
    {
    ap.SaveArray(temp0, save0, size0);
    ap.SaveArray(temp1, save1, size1);
    ap.SaveArray(temp2, save2, size2);

    int tempr = (ap.IsBound() ?
      op->ComputeNextStep(temp0, temp1, temp2, temp3, temp4, temp5, temp6) :
      op->vtkInitialValueProblemSolver::ComputeNextStep(temp0, temp1, temp2, temp3, temp4, temp5, temp6));

    if (ap.ArrayHasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(0, temp0, size0);
      }

    if (ap.ArrayHasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(1, temp1, size1);
      }

    if (ap.ArrayHasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(2, temp2, size2);
      }

    if (!ap.ErrorOccurred())
      {
      ap.SetArgValue(4, temp4);
      }
    if (!ap.ErrorOccurred())
      {
      ap.SetArgValue(6, temp6);
      }
    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  if (temp0 && temp0 != small0)
    {
    delete [] temp0;
    }
  if (temp1 && temp1 != small1)
    {
    delete [] temp1;
    }
  if (temp2 && temp2 != small2)
    {
    delete [] temp2;
    }

  return result;
}

static PyObject *
PyvtkInitialValueProblemSolver_ComputeNextStep_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeNextStep");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInitialValueProblemSolver *op = static_cast<vtkInitialValueProblemSolver *>(vp);

  double *temp0 = NULL;
  double *save0 = NULL;
  double small0[8];
  int size0 = 0;
  double *temp1 = NULL;
  double *save1 = NULL;
  double small1[8];
  int size1 = 0;
  double temp2;
  double temp3;
  double temp4;
  double temp5;
  double temp6;
  double temp7;
  double temp8;
  PyObject *result = NULL;

  if (op)
    {
    size0 = ap.GetArgSize(0);
    temp0 = small0;
    if (size0 > 4)
      {
      temp0 = new double[2*size0];
      }
    save0 = &temp0[size0];
    size1 = ap.GetArgSize(1);
    temp1 = small1;
    if (size1 > 4)
      {
      temp1 = new double[2*size1];
      }
    save1 = &temp1[size1];
    }

  if (op && ap.CheckArgCount(9) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5) &&
      ap.GetValue(temp6) &&
      ap.GetValue(temp7) &&
      ap.GetValue(temp8))
    {
    ap.SaveArray(temp0, save0, size0);
    ap.SaveArray(temp1, save1, size1);

    int tempr = (ap.IsBound() ?
      op->ComputeNextStep(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7, temp8) :
      op->vtkInitialValueProblemSolver::ComputeNextStep(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7, temp8));

    if (ap.ArrayHasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(0, temp0, size0);
      }

    if (ap.ArrayHasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(1, temp1, size1);
      }

    if (!ap.ErrorOccurred())
      {
      ap.SetArgValue(3, temp3);
      }
    if (!ap.ErrorOccurred())
      {
      ap.SetArgValue(4, temp4);
      }
    if (!ap.ErrorOccurred())
      {
      ap.SetArgValue(8, temp8);
      }
    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  if (temp0 && temp0 != small0)
    {
    delete [] temp0;
    }
  if (temp1 && temp1 != small1)
    {
    delete [] temp1;
    }

  return result;
}

static PyObject *
PyvtkInitialValueProblemSolver_ComputeNextStep_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeNextStep");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInitialValueProblemSolver *op = static_cast<vtkInitialValueProblemSolver *>(vp);

  double *temp0 = NULL;
  double *save0 = NULL;
  double small0[8];
  int size0 = 0;
  double *temp1 = NULL;
  double *save1 = NULL;
  double small1[8];
  int size1 = 0;
  double *temp2 = NULL;
  double *save2 = NULL;
  double small2[8];
  int size2 = 0;
  double temp3;
  double temp4;
  double temp5;
  double temp6;
  double temp7;
  double temp8;
  double temp9;
  PyObject *result = NULL;

  if (op)
    {
    size0 = ap.GetArgSize(0);
    temp0 = small0;
    if (size0 > 4)
      {
      temp0 = new double[2*size0];
      }
    save0 = &temp0[size0];
    size1 = ap.GetArgSize(1);
    temp1 = small1;
    if (size1 > 4)
      {
      temp1 = new double[2*size1];
      }
    save1 = &temp1[size1];
    size2 = ap.GetArgSize(2);
    temp2 = small2;
    if (size2 > 4)
      {
      temp2 = new double[2*size2];
      }
    save2 = &temp2[size2];
    }

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(10) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetArray(temp2, size2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5) &&
      ap.GetValue(temp6) &&
      ap.GetValue(temp7) &&
      ap.GetValue(temp8) &&
      ap.GetValue(temp9))
    {
    ap.SaveArray(temp0, save0, size0);
    ap.SaveArray(temp1, save1, size1);
    ap.SaveArray(temp2, save2, size2);

    int tempr = op->ComputeNextStep(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7, temp8, temp9);

    if (ap.ArrayHasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(0, temp0, size0);
      }

    if (ap.ArrayHasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(1, temp1, size1);
      }

    if (ap.ArrayHasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(2, temp2, size2);
      }

    if (!ap.ErrorOccurred())
      {
      ap.SetArgValue(4, temp4);
      }
    if (!ap.ErrorOccurred())
      {
      ap.SetArgValue(5, temp5);
      }
    if (!ap.ErrorOccurred())
      {
      ap.SetArgValue(9, temp9);
      }
    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  if (temp0 && temp0 != small0)
    {
    delete [] temp0;
    }
  if (temp1 && temp1 != small1)
    {
    delete [] temp1;
    }
  if (temp2 && temp2 != small2)
    {
    delete [] temp2;
    }

  return result;
}

static PyObject *
PyvtkInitialValueProblemSolver_ComputeNextStep(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 6:
      return PyvtkInitialValueProblemSolver_ComputeNextStep_s1(self, args);
    case 7:
      return PyvtkInitialValueProblemSolver_ComputeNextStep_s2(self, args);
    case 9:
      return PyvtkInitialValueProblemSolver_ComputeNextStep_s3(self, args);
    case 10:
      return PyvtkInitialValueProblemSolver_ComputeNextStep_s4(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "ComputeNextStep");
  return NULL;
}



static PyObject *
PyvtkInitialValueProblemSolver_SetFunctionSet(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFunctionSet");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInitialValueProblemSolver *op = static_cast<vtkInitialValueProblemSolver *>(vp);

  vtkFunctionSet *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkFunctionSet"))
    {
    if (ap.IsBound())
      {
      op->SetFunctionSet(temp0);
      }
    else
      {
      op->vtkInitialValueProblemSolver::SetFunctionSet(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInitialValueProblemSolver_GetFunctionSet(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFunctionSet");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInitialValueProblemSolver *op = static_cast<vtkInitialValueProblemSolver *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkFunctionSet *tempr = (ap.IsBound() ?
      op->GetFunctionSet() :
      op->vtkInitialValueProblemSolver::GetFunctionSet());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkInitialValueProblemSolver_IsAdaptive(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsAdaptive");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInitialValueProblemSolver *op = static_cast<vtkInitialValueProblemSolver *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->IsAdaptive() :
      op->vtkInitialValueProblemSolver::IsAdaptive());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkInitialValueProblemSolver_Methods[] = {
  {(char*)"GetClassName", PyvtkInitialValueProblemSolver_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkInitialValueProblemSolver_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkInitialValueProblemSolver_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkInitialValueProblemSolver\nC++: vtkInitialValueProblemSolver *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkInitialValueProblemSolver_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkInitialValueProblemSolver\nC++: vtkInitialValueProblemSolver *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"ComputeNextStep", PyvtkInitialValueProblemSolver_ComputeNextStep, METH_VARARGS,
   (char*)"V.ComputeNextStep([float, ...], [float, ...], float, float, float,\n     float) -> int\nC++: virtual int ComputeNextStep(double *xprev, double *xnext,\n    double t, double &delT, double maxError, double &error)\nV.ComputeNextStep([float, ...], [float, ...], [float, ...], float,\n     float, float, float) -> int\nC++: virtual int ComputeNextStep(double *xprev, double *dxprev,\n    double *xnext, double t, double &delT, double maxError,\n    double &error)\nV.ComputeNextStep([float, ...], [float, ...], float, float, float,\n     float, float, float, float) -> int\nC++: virtual int ComputeNextStep(double *xprev, double *xnext,\n    double t, double &delT, double &delTActual, double minStep,\n    double maxStep, double maxError, double &error)\nV.ComputeNextStep([float, ...], [float, ...], [float, ...], float,\n     float, float, float, float, float, float) -> int\nC++: virtual int ComputeNextStep(double *xprev, double *dxprev,\n    double *xnext, double t, double &delT, double &delTActual,\n    double minStep, double maxStep, double maxError,\n    double &error)\n\nGiven initial values, xprev , initial time, t and a requested\ntime interval, delT calculate values of x at t+delTActual\n(xnext). For certain concrete sub-classes delTActual != delT.\nThis occurs when the solver supports adaptive stepsize control.\nIf this is the case, the solver tries to change to stepsize such\nthat the (estimated) error of the integration is less than\nmaxError. The solver will not set the stepsize smaller than\nminStep or larger than maxStep. Also note that delT is an in/out\nargument. Adaptive solvers will modify delT to reflect the best\n(estimated) size for the next integration step. An estimated\nvalue for the error is returned (by reference) in error. Note\nthat only some concrete sub-classes support this. Otherwise, the\nerror is set to 0. This method returns an error code representing\nthe nature of the failure: OutOfDomain = 1, NotInitialized = 2,\nUnexpectedValue = 3\n"},
  {(char*)"SetFunctionSet", PyvtkInitialValueProblemSolver_SetFunctionSet, METH_VARARGS,
   (char*)"V.SetFunctionSet(vtkFunctionSet)\nC++: virtual void SetFunctionSet(vtkFunctionSet *functionset)\n\nSet / get the dataset used for the implicit function evaluation.\n"},
  {(char*)"GetFunctionSet", PyvtkInitialValueProblemSolver_GetFunctionSet, METH_VARARGS,
   (char*)"V.GetFunctionSet() -> vtkFunctionSet\nC++: vtkFunctionSet *GetFunctionSet()\n\nSet / get the dataset used for the implicit function evaluation.\n"},
  {(char*)"IsAdaptive", PyvtkInitialValueProblemSolver_IsAdaptive, METH_VARARGS,
   (char*)"V.IsAdaptive() -> int\nC++: virtual int IsAdaptive()\n\nReturns 1 if the solver uses adaptive stepsize control, 0\notherwise\n"},
  {NULL, NULL, 0, NULL}
};

PyObject *PyVTKClass_vtkInitialValueProblemSolverNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(NULL,
    PyvtkInitialValueProblemSolver_Methods,
    "vtkInitialValueProblemSolver", modulename,
    NULL, NULL,
    PyvtkInitialValueProblemSolver_Doc(),
    PyVTKClass_vtkObjectNew(modulename));

  if (cls)
    {
    PyObject *d = PyVTKClass_GetDict(cls);
    PyObject *o;

    PyType_Ready(&PyvtkInitialValueProblemSolver_ErrorCodes_Type);
    PyvtkInitialValueProblemSolver_ErrorCodes_Type.tp_new = NULL;

    o = (PyObject *)&PyvtkInitialValueProblemSolver_ErrorCodes_Type;
    if (o && PyDict_SetItemString(d, (char *)"ErrorCodes", o) != 0)
      {
      Py_DECREF(o);
      }

    for (int c = 0; c < 3; c++)
      {
      typedef vtkInitialValueProblemSolver::ErrorCodes cxx_enum_type;

      static const struct { const char *name; cxx_enum_type value; }
        constants[3] = {
          { "OUT_OF_DOMAIN", vtkInitialValueProblemSolver::OUT_OF_DOMAIN },
          { "NOT_INITIALIZED", vtkInitialValueProblemSolver::NOT_INITIALIZED },
          { "UNEXPECTED_VALUE", vtkInitialValueProblemSolver::UNEXPECTED_VALUE },
        };

      o = PyvtkInitialValueProblemSolver_ErrorCodes_FromEnum(constants[c].value);
      if (o)
        {
        PyDict_SetItemString(d, (char *)constants[c].name, o);
        Py_DECREF(o);
        }
      }

    }

  return cls;
}

const char **PyvtkInitialValueProblemSolver_Doc()
{
  static const char *docstring[] = {
    "vtkInitialValueProblemSolver - Integrate a set of ordinary\n\n",
    "Superclass: vtkObject\n\n",
    "Given a vtkFunctionSet which returns dF_i(x_j, t)/dt given x_j and t,\nvtkInitialValueProblemSolver computes the value of F_i at t+deltat.\n\nSee Also:\n\nvtkRungeKutta2 vtkRungeKutta4\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkInitialValueProblemSolver(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkInitialValueProblemSolverNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkInitialValueProblemSolver", o) != 0)
    {
    Py_DECREF(o);
    }

}

