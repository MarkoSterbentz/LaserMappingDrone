// python wrapper for vtkMergePoints
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkMergePoints.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkMergePoints(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkMergePointsNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkPointLocatorNew
extern "C" { PyObject *PyVTKClass_vtkPointLocatorNew(const char *); }
#define DECLARED_PyVTKClass_vtkPointLocatorNew
#endif

static const char **PyvtkMergePoints_Doc();


static PyObject *
PyvtkMergePoints_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMergePoints *op = static_cast<vtkMergePoints *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkMergePoints::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMergePoints_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMergePoints *op = static_cast<vtkMergePoints *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkMergePoints::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMergePoints_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMergePoints *op = static_cast<vtkMergePoints *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkMergePoints *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkMergePoints::NewInstance());

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
PyvtkMergePoints_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkMergePoints *tempr = vtkMergePoints::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMergePoints_IsInsertedPoint_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsInsertedPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMergePoints *op = static_cast<vtkMergePoints *>(vp);

  double temp0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    vtkIdType tempr = (ap.IsBound() ?
      op->IsInsertedPoint(temp0) :
      op->vtkMergePoints::IsInsertedPoint(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkMergePoints_IsInsertedPoint_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsInsertedPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMergePoints *op = static_cast<vtkMergePoints *>(vp);

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
      op->vtkMergePoints::IsInsertedPoint(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkMergePoints_IsInsertedPoint(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkMergePoints_IsInsertedPoint_s1(self, args);
    case 3:
      return PyvtkMergePoints_IsInsertedPoint_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "IsInsertedPoint");
  return NULL;
}



static PyObject *
PyvtkMergePoints_InsertUniquePoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertUniquePoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMergePoints *op = static_cast<vtkMergePoints *>(vp);

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
      op->vtkMergePoints::InsertUniquePoint(temp0, temp1));

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

static PyMethodDef PyvtkMergePoints_Methods[] = {
  {(char*)"GetClassName", PyvtkMergePoints_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkMergePoints_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkMergePoints_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkMergePoints\nC++: vtkMergePoints *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkMergePoints_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkMergePoints\nC++: vtkMergePoints *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"IsInsertedPoint", PyvtkMergePoints_IsInsertedPoint, METH_VARARGS,
   (char*)"V.IsInsertedPoint((float, float, float)) -> int\nC++: vtkIdType IsInsertedPoint(const double x[3])\nV.IsInsertedPoint(float, float, float) -> int\nC++: vtkIdType IsInsertedPoint(double x, double y, double z)\n\nDetermine whether point given by x[3] has been inserted into\npoints list. Return id of previously inserted point if this is\ntrue, otherwise return\n-1.\n"},
  {(char*)"InsertUniquePoint", PyvtkMergePoints_InsertUniquePoint, METH_VARARGS,
   (char*)"V.InsertUniquePoint((float, float, float), int) -> int\nC++: int InsertUniquePoint(const double x[3], vtkIdType &ptId)\n\nDetermine whether point given by x[3] has been inserted into\npoints list. Return 0 if point was already in the list, otherwise\nreturn 1. If the point was not in the list, it will be ADDED.  In\neither case, the id of the point (newly inserted or not) is\nreturned in the ptId argument. Note this combines the\nfunctionality of IsInsertedPoint() followed by a call to\nInsertNextPoint().\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkMergePoints_StaticNew()
{
  return vtkMergePoints::New();
}

PyObject *PyVTKClass_vtkMergePointsNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkMergePoints_StaticNew,
    PyvtkMergePoints_Methods,
    "vtkMergePoints", modulename,
    NULL, NULL,
    PyvtkMergePoints_Doc(),
    PyVTKClass_vtkPointLocatorNew(modulename));
  return cls;
}

const char **PyvtkMergePoints_Doc()
{
  static const char *docstring[] = {
    "vtkMergePoints - merge exactly coincident points\n\n",
    "Superclass: vtkPointLocator\n\n",
    "vtkMergePoints is a locator object to quickly locate points in 3D.\nThe primary difference between vtkMergePoints and its superclass\nvtkPointLocator is that vtkMergePoints merges precisely coincident\npoints and is therefore much faster.\n\nSee Also:\n\nvtkCleanPolyData\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkMergePoints(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkMergePointsNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkMergePoints", o) != 0)
    {
    Py_DECREF(o);
    }

}

