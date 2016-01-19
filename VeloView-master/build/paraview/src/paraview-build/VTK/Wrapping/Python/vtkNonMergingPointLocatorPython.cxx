// python wrapper for vtkNonMergingPointLocator
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkNonMergingPointLocator.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkNonMergingPointLocator(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkNonMergingPointLocatorNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkPointLocatorNew
extern "C" { PyObject *PyVTKClass_vtkPointLocatorNew(const char *); }
#define DECLARED_PyVTKClass_vtkPointLocatorNew
#endif

static const char **PyvtkNonMergingPointLocator_Doc();


static PyObject *
PyvtkNonMergingPointLocator_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNonMergingPointLocator *op = static_cast<vtkNonMergingPointLocator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkNonMergingPointLocator::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkNonMergingPointLocator_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNonMergingPointLocator *op = static_cast<vtkNonMergingPointLocator *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkNonMergingPointLocator::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkNonMergingPointLocator_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNonMergingPointLocator *op = static_cast<vtkNonMergingPointLocator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkNonMergingPointLocator *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkNonMergingPointLocator::NewInstance());

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
PyvtkNonMergingPointLocator_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkNonMergingPointLocator *tempr = vtkNonMergingPointLocator::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkNonMergingPointLocator_IsInsertedPoint_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsInsertedPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNonMergingPointLocator *op = static_cast<vtkNonMergingPointLocator *>(vp);

  double temp0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    vtkIdType tempr = (ap.IsBound() ?
      op->IsInsertedPoint(temp0) :
      op->vtkNonMergingPointLocator::IsInsertedPoint(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkNonMergingPointLocator_IsInsertedPoint_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsInsertedPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNonMergingPointLocator *op = static_cast<vtkNonMergingPointLocator *>(vp);

  double temp0;
  double temp1;
  double temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    vtkIdType tempr = (ap.IsBound() ?
      op->IsInsertedPoint(temp0, temp1, temp2) :
      op->vtkNonMergingPointLocator::IsInsertedPoint(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkNonMergingPointLocator_IsInsertedPoint(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkNonMergingPointLocator_IsInsertedPoint_s1(self, args);
    case 3:
      return PyvtkNonMergingPointLocator_IsInsertedPoint_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "IsInsertedPoint");
  return NULL;
}



static PyObject *
PyvtkNonMergingPointLocator_InsertUniquePoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertUniquePoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNonMergingPointLocator *op = static_cast<vtkNonMergingPointLocator *>(vp);

  double temp0[3];
  const int size0 = 3;
  vtkIdType temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1))
    {
    int tempr = (ap.IsBound() ?
      op->InsertUniquePoint(temp0, temp1) :
      op->vtkNonMergingPointLocator::InsertUniquePoint(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      ap.SetArgValue(1, temp1);
      }
    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkNonMergingPointLocator_Methods[] = {
  {(char*)"GetClassName", PyvtkNonMergingPointLocator_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkNonMergingPointLocator_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkNonMergingPointLocator_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkNonMergingPointLocator\nC++: vtkNonMergingPointLocator *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkNonMergingPointLocator_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkNonMergingPointLocator\nC++: vtkNonMergingPointLocator *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"IsInsertedPoint", PyvtkNonMergingPointLocator_IsInsertedPoint, METH_VARARGS,
   (char*)"V.IsInsertedPoint((float, float, float)) -> int\nC++: virtual vtkIdType IsInsertedPoint(const double[3])\nV.IsInsertedPoint(float, float, float) -> int\nC++: virtual vtkIdType IsInsertedPoint(double, double, double)\n\nDetermine whether a given point x has been inserted into the\npoints list. Return the id of the already inserted point if it is\ntrue, or -1 else. Note this function always returns -1 since any\npoint is always inserted.\n"},
  {(char*)"InsertUniquePoint", PyvtkNonMergingPointLocator_InsertUniquePoint, METH_VARARGS,
   (char*)"V.InsertUniquePoint((float, float, float), int) -> int\nC++: virtual int InsertUniquePoint(const double x[3],\n    vtkIdType &ptId)\n\nDetermine whether a given point x has been inserted into the\npoints list. Return 0 if a duplicate has been inserted in the\nlist, or 1 else. Note this function always returns 1 since any\npoint is always inserted. The index of the point is returned via\nptId.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkNonMergingPointLocator_StaticNew()
{
  return vtkNonMergingPointLocator::New();
}

PyObject *PyVTKClass_vtkNonMergingPointLocatorNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkNonMergingPointLocator_StaticNew,
    PyvtkNonMergingPointLocator_Methods,
    "vtkNonMergingPointLocator", modulename,
    NULL, NULL,
    PyvtkNonMergingPointLocator_Doc(),
    PyVTKClass_vtkPointLocatorNew(modulename));
  return cls;
}

const char **PyvtkNonMergingPointLocator_Doc()
{
  static const char *docstring[] = {
    "vtkNonMergingPointLocator - direct / check-free point insertion.\n\n",
    "Superclass: vtkPointLocator\n\n",
    "As a special sub-class of vtkPointLocator, vtkNonMergingPointLocator\nis\n intended for direct / check-free insertion of points into a\nvtkPoints\n object. In other words, any given point is always directly inserted.\n The name emphasizes the difference between this class and its\nsibling\n class vtkMergePoints in that the latter class performs check-based\nzero\n tolerance point insertion (or to 'merge' e",
    "xactly duplicate /\ncoincident\n points) by exploiting the uniform bin mechanism employed by the\nparent\n class vtkPointLocator. vtkPointLocator allows for generic (zero and\nnon-\n zero) tolerance point insertion as well as point location.\n\nSee Also:\n\n\n vtkIncrementalPointLocator vtkPointLocator vtkMergePoints\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkNonMergingPointLocator(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkNonMergingPointLocatorNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkNonMergingPointLocator", o) != 0)
    {
    Py_DECREF(o);
    }

}

