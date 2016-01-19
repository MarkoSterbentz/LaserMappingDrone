// python wrapper for vtkFunctionSet
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkFunctionSet.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkFunctionSet(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkFunctionSetNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkFunctionSet_Doc();


static PyObject *
PyvtkFunctionSet_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFunctionSet *op = static_cast<vtkFunctionSet *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkFunctionSet::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkFunctionSet_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFunctionSet *op = static_cast<vtkFunctionSet *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkFunctionSet::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkFunctionSet_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFunctionSet *op = static_cast<vtkFunctionSet *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkFunctionSet *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkFunctionSet::NewInstance());

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
PyvtkFunctionSet_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkFunctionSet *tempr = vtkFunctionSet::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkFunctionSet_FunctionValues(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FunctionValues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFunctionSet *op = static_cast<vtkFunctionSet *>(vp);

  double *temp0 = NULL;
  double *save0 = NULL;
  double small0[8];
  int size0 = 0;
  double *temp1 = NULL;
  double *save1 = NULL;
  double small1[8];
  int size1 = 0;
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

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1))
    {
    ap.SaveArray(temp0, save0, size0);
    ap.SaveArray(temp1, save1, size1);

    int tempr = op->FunctionValues(temp0, temp1);

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
PyvtkFunctionSet_GetNumberOfFunctions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfFunctions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFunctionSet *op = static_cast<vtkFunctionSet *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfFunctions() :
      op->vtkFunctionSet::GetNumberOfFunctions());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkFunctionSet_GetNumberOfIndependentVariables(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfIndependentVariables");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFunctionSet *op = static_cast<vtkFunctionSet *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfIndependentVariables() :
      op->vtkFunctionSet::GetNumberOfIndependentVariables());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkFunctionSet_Methods[] = {
  {(char*)"GetClassName", PyvtkFunctionSet_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkFunctionSet_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkFunctionSet_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkFunctionSet\nC++: vtkFunctionSet *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkFunctionSet_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkFunctionSet\nC++: vtkFunctionSet *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"FunctionValues", PyvtkFunctionSet_FunctionValues, METH_VARARGS,
   (char*)"V.FunctionValues([float, ...], [float, ...]) -> int\nC++: virtual int FunctionValues(double *x, double *f)\n\nEvaluate functions at x_j. x and f have to point to valid double\narrays of appropriate sizes obtained with GetNumberOfFunctions()\nand GetNumberOfIndependentVariables.\n"},
  {(char*)"GetNumberOfFunctions", PyvtkFunctionSet_GetNumberOfFunctions, METH_VARARGS,
   (char*)"V.GetNumberOfFunctions() -> int\nC++: virtual int GetNumberOfFunctions()\n\nReturn the number of functions. Note that this is constant for a\ngiven type of set of functions and can not be changed at run\ntime.\n"},
  {(char*)"GetNumberOfIndependentVariables", PyvtkFunctionSet_GetNumberOfIndependentVariables, METH_VARARGS,
   (char*)"V.GetNumberOfIndependentVariables() -> int\nC++: virtual int GetNumberOfIndependentVariables()\n\nReturn the number of independent variables. Note that this is\nconstant for a given type of set of functions and can not be\nchanged at run time.\n"},
  {NULL, NULL, 0, NULL}
};

PyObject *PyVTKClass_vtkFunctionSetNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(NULL,
    PyvtkFunctionSet_Methods,
    "vtkFunctionSet", modulename,
    NULL, NULL,
    PyvtkFunctionSet_Doc(),
    PyVTKClass_vtkObjectNew(modulename));
  return cls;
}

const char **PyvtkFunctionSet_Doc()
{
  static const char *docstring[] = {
    "vtkFunctionSet - Abstract interface for sets of functions\n\n",
    "Superclass: vtkObject\n\n",
    "vtkFunctionSet specifies an abstract interface for set of functions\nof the form F_i = F_i(x_j) where F (with i=1..m) are the functions\nand x (with j=1..n) are the independent variables. The only supported\noperation is the  function evaluation at x_j.\n\nSee Also:\n\nvtkImplicitDataSet vtkInterpolatedVelocityField\nvtkInitialValueProblemSolver\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkFunctionSet(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkFunctionSetNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkFunctionSet", o) != 0)
    {
    Py_DECREF(o);
    }

}

