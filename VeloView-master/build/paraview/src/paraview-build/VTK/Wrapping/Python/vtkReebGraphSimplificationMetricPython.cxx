// python wrapper for vtkReebGraphSimplificationMetric
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkReebGraphSimplificationMetric.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkReebGraphSimplificationMetric(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkReebGraphSimplificationMetricNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkReebGraphSimplificationMetric_Doc();


static PyObject *
PyvtkReebGraphSimplificationMetric_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkReebGraphSimplificationMetric *op = static_cast<vtkReebGraphSimplificationMetric *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkReebGraphSimplificationMetric::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkReebGraphSimplificationMetric_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkReebGraphSimplificationMetric *op = static_cast<vtkReebGraphSimplificationMetric *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkReebGraphSimplificationMetric::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkReebGraphSimplificationMetric_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkReebGraphSimplificationMetric *op = static_cast<vtkReebGraphSimplificationMetric *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkReebGraphSimplificationMetric *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkReebGraphSimplificationMetric::NewInstance());

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
PyvtkReebGraphSimplificationMetric_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkReebGraphSimplificationMetric *tempr = vtkReebGraphSimplificationMetric::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkReebGraphSimplificationMetric_SetLowerBound(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLowerBound");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkReebGraphSimplificationMetric *op = static_cast<vtkReebGraphSimplificationMetric *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetLowerBound(temp0);
      }
    else
      {
      op->vtkReebGraphSimplificationMetric::SetLowerBound(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkReebGraphSimplificationMetric_GetLowerBound(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLowerBound");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkReebGraphSimplificationMetric *op = static_cast<vtkReebGraphSimplificationMetric *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetLowerBound() :
      op->vtkReebGraphSimplificationMetric::GetLowerBound());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkReebGraphSimplificationMetric_SetUpperBound(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUpperBound");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkReebGraphSimplificationMetric *op = static_cast<vtkReebGraphSimplificationMetric *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetUpperBound(temp0);
      }
    else
      {
      op->vtkReebGraphSimplificationMetric::SetUpperBound(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkReebGraphSimplificationMetric_GetUpperBound(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUpperBound");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkReebGraphSimplificationMetric *op = static_cast<vtkReebGraphSimplificationMetric *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetUpperBound() :
      op->vtkReebGraphSimplificationMetric::GetUpperBound());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkReebGraphSimplificationMetric_ComputeMetric(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeMetric");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkReebGraphSimplificationMetric *op = static_cast<vtkReebGraphSimplificationMetric *>(vp);

  vtkDataSet *temp0 = NULL;
  vtkDataArray *temp1 = NULL;
  vtkIdType temp2;
  vtkAbstractArray *temp3 = NULL;
  vtkIdType temp4;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(5) &&
      ap.GetVTKObject(temp0, "vtkDataSet") &&
      ap.GetVTKObject(temp1, "vtkDataArray") &&
      ap.GetValue(temp2) &&
      ap.GetVTKObject(temp3, "vtkAbstractArray") &&
      ap.GetValue(temp4))
    {
    double tempr = (ap.IsBound() ?
      op->ComputeMetric(temp0, temp1, temp2, temp3, temp4) :
      op->vtkReebGraphSimplificationMetric::ComputeMetric(temp0, temp1, temp2, temp3, temp4));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkReebGraphSimplificationMetric_Methods[] = {
  {(char*)"GetClassName", PyvtkReebGraphSimplificationMetric_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkReebGraphSimplificationMetric_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkReebGraphSimplificationMetric_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkReebGraphSimplificationMetric\nC++: vtkReebGraphSimplificationMetric *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkReebGraphSimplificationMetric_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkReebGraphSimplificationMetric\nC++: vtkReebGraphSimplificationMetric *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetLowerBound", PyvtkReebGraphSimplificationMetric_SetLowerBound, METH_VARARGS,
   (char*)"V.SetLowerBound(float)\nC++: void SetLowerBound(double a)\n\nSet the lowest possible value for the custom metric space. This\nvalue can be set prior to launching the Reeb graph simplification\nand then used inside the ComputeMetric call to make sure the\nreturned value of ComputeMetric call is indeed between 0 and 1.\n"},
  {(char*)"GetLowerBound", PyvtkReebGraphSimplificationMetric_GetLowerBound, METH_VARARGS,
   (char*)"V.GetLowerBound() -> float\nC++: double GetLowerBound()\n\nSet the lowest possible value for the custom metric space. This\nvalue can be set prior to launching the Reeb graph simplification\nand then used inside the ComputeMetric call to make sure the\nreturned value of ComputeMetric call is indeed between 0 and 1.\n"},
  {(char*)"SetUpperBound", PyvtkReebGraphSimplificationMetric_SetUpperBound, METH_VARARGS,
   (char*)"V.SetUpperBound(float)\nC++: void SetUpperBound(double a)\n\nSet the highest possible value for the custom metric space. This\nvalue can be set prior to launching the Reeb graph simplification\nand then used inside the ComputeMetric call to make sure the\nreturned value of ComputeMetric call is indeed between 0 and 1.\n"},
  {(char*)"GetUpperBound", PyvtkReebGraphSimplificationMetric_GetUpperBound, METH_VARARGS,
   (char*)"V.GetUpperBound() -> float\nC++: double GetUpperBound()\n\nSet the highest possible value for the custom metric space. This\nvalue can be set prior to launching the Reeb graph simplification\nand then used inside the ComputeMetric call to make sure the\nreturned value of ComputeMetric call is indeed between 0 and 1.\n"},
  {(char*)"ComputeMetric", PyvtkReebGraphSimplificationMetric_ComputeMetric, METH_VARARGS,
   (char*)"V.ComputeMetric(vtkDataSet, vtkDataArray, int, vtkAbstractArray,\n    int) -> float\nC++: virtual double ComputeMetric(vtkDataSet *mesh,\n    vtkDataArray *field, vtkIdType startCriticalPoint,\n    vtkAbstractArray *vertexList, vtkIdType endCriticalPoint)\n\nFunction to implement in your simplification metric algorithm.\nGiven the input mesh and the Ids of the vertices living on the\nReeb graph arc to consider for removal, you should return a value\nbetween 0 and 1 (the smallest the more likely the arc will be\nremoved, depending on the user-defined simplification threshold).\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkReebGraphSimplificationMetric_StaticNew()
{
  return vtkReebGraphSimplificationMetric::New();
}

PyObject *PyVTKClass_vtkReebGraphSimplificationMetricNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkReebGraphSimplificationMetric_StaticNew,
    PyvtkReebGraphSimplificationMetric_Methods,
    "vtkReebGraphSimplificationMetric", modulename,
    NULL, NULL,
    PyvtkReebGraphSimplificationMetric_Doc(),
    PyVTKClass_vtkObjectNew(modulename));
  return cls;
}

const char **PyvtkReebGraphSimplificationMetric_Doc()
{
  static const char *docstring[] = {
    "vtkReebGraphSimplificationMetric - abstract class for custom Reeb\ngraph\n\n",
    "Superclass: vtkObject\n\n",
    "\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkReebGraphSimplificationMetric(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkReebGraphSimplificationMetricNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkReebGraphSimplificationMetric", o) != 0)
    {
    Py_DECREF(o);
    }

}

