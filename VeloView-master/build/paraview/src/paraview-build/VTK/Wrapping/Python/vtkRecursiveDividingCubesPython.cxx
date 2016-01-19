// python wrapper for vtkRecursiveDividingCubes
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkRecursiveDividingCubes.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkRecursiveDividingCubes(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkRecursiveDividingCubesNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkPolyDataAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
#endif

static const char **PyvtkRecursiveDividingCubes_Doc();


static PyObject *
PyvtkRecursiveDividingCubes_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRecursiveDividingCubes *op = static_cast<vtkRecursiveDividingCubes *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkRecursiveDividingCubes::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRecursiveDividingCubes_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRecursiveDividingCubes *op = static_cast<vtkRecursiveDividingCubes *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkRecursiveDividingCubes::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRecursiveDividingCubes_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRecursiveDividingCubes *op = static_cast<vtkRecursiveDividingCubes *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkRecursiveDividingCubes *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkRecursiveDividingCubes::NewInstance());

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
PyvtkRecursiveDividingCubes_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkRecursiveDividingCubes *tempr = vtkRecursiveDividingCubes::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRecursiveDividingCubes_SetValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRecursiveDividingCubes *op = static_cast<vtkRecursiveDividingCubes *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetValue(temp0);
      }
    else
      {
      op->vtkRecursiveDividingCubes::SetValue(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRecursiveDividingCubes_GetValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRecursiveDividingCubes *op = static_cast<vtkRecursiveDividingCubes *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetValue() :
      op->vtkRecursiveDividingCubes::GetValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRecursiveDividingCubes_SetDistance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDistance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRecursiveDividingCubes *op = static_cast<vtkRecursiveDividingCubes *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetDistance(temp0);
      }
    else
      {
      op->vtkRecursiveDividingCubes::SetDistance(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRecursiveDividingCubes_GetDistanceMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDistanceMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRecursiveDividingCubes *op = static_cast<vtkRecursiveDividingCubes *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetDistanceMinValue() :
      op->vtkRecursiveDividingCubes::GetDistanceMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRecursiveDividingCubes_GetDistanceMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDistanceMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRecursiveDividingCubes *op = static_cast<vtkRecursiveDividingCubes *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetDistanceMaxValue() :
      op->vtkRecursiveDividingCubes::GetDistanceMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRecursiveDividingCubes_GetDistance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDistance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRecursiveDividingCubes *op = static_cast<vtkRecursiveDividingCubes *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetDistance() :
      op->vtkRecursiveDividingCubes::GetDistance());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRecursiveDividingCubes_SetIncrement(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIncrement");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRecursiveDividingCubes *op = static_cast<vtkRecursiveDividingCubes *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetIncrement(temp0);
      }
    else
      {
      op->vtkRecursiveDividingCubes::SetIncrement(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRecursiveDividingCubes_GetIncrementMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIncrementMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRecursiveDividingCubes *op = static_cast<vtkRecursiveDividingCubes *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetIncrementMinValue() :
      op->vtkRecursiveDividingCubes::GetIncrementMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRecursiveDividingCubes_GetIncrementMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIncrementMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRecursiveDividingCubes *op = static_cast<vtkRecursiveDividingCubes *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetIncrementMaxValue() :
      op->vtkRecursiveDividingCubes::GetIncrementMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRecursiveDividingCubes_GetIncrement(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIncrement");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRecursiveDividingCubes *op = static_cast<vtkRecursiveDividingCubes *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetIncrement() :
      op->vtkRecursiveDividingCubes::GetIncrement());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkRecursiveDividingCubes_Methods[] = {
  {(char*)"GetClassName", PyvtkRecursiveDividingCubes_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkRecursiveDividingCubes_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkRecursiveDividingCubes_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkRecursiveDividingCubes\nC++: vtkRecursiveDividingCubes *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkRecursiveDividingCubes_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkRecursiveDividingCubes\nC++: vtkRecursiveDividingCubes *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetValue", PyvtkRecursiveDividingCubes_SetValue, METH_VARARGS,
   (char*)"V.SetValue(float)\nC++: void SetValue(double a)\n\nSet isosurface value.\n"},
  {(char*)"GetValue", PyvtkRecursiveDividingCubes_GetValue, METH_VARARGS,
   (char*)"V.GetValue() -> float\nC++: double GetValue()\n\nSet isosurface value.\n"},
  {(char*)"SetDistance", PyvtkRecursiveDividingCubes_SetDistance, METH_VARARGS,
   (char*)"V.SetDistance(float)\nC++: void SetDistance(double)\n\nSpecify sub-voxel size at which to generate point.\n"},
  {(char*)"GetDistanceMinValue", PyvtkRecursiveDividingCubes_GetDistanceMinValue, METH_VARARGS,
   (char*)"V.GetDistanceMinValue() -> float\nC++: double GetDistanceMinValue()\n\nSpecify sub-voxel size at which to generate point.\n"},
  {(char*)"GetDistanceMaxValue", PyvtkRecursiveDividingCubes_GetDistanceMaxValue, METH_VARARGS,
   (char*)"V.GetDistanceMaxValue() -> float\nC++: double GetDistanceMaxValue()\n\nSpecify sub-voxel size at which to generate point.\n"},
  {(char*)"GetDistance", PyvtkRecursiveDividingCubes_GetDistance, METH_VARARGS,
   (char*)"V.GetDistance() -> float\nC++: double GetDistance()\n\nSpecify sub-voxel size at which to generate point.\n"},
  {(char*)"SetIncrement", PyvtkRecursiveDividingCubes_SetIncrement, METH_VARARGS,
   (char*)"V.SetIncrement(int)\nC++: void SetIncrement(int)\n\nEvery \"Increment\" point is added to the list of points. This\nparameter, if set to a large value, can be used to limit the\nnumber of points while retaining good accuracy.\n"},
  {(char*)"GetIncrementMinValue", PyvtkRecursiveDividingCubes_GetIncrementMinValue, METH_VARARGS,
   (char*)"V.GetIncrementMinValue() -> int\nC++: int GetIncrementMinValue()\n\nEvery \"Increment\" point is added to the list of points. This\nparameter, if set to a large value, can be used to limit the\nnumber of points while retaining good accuracy.\n"},
  {(char*)"GetIncrementMaxValue", PyvtkRecursiveDividingCubes_GetIncrementMaxValue, METH_VARARGS,
   (char*)"V.GetIncrementMaxValue() -> int\nC++: int GetIncrementMaxValue()\n\nEvery \"Increment\" point is added to the list of points. This\nparameter, if set to a large value, can be used to limit the\nnumber of points while retaining good accuracy.\n"},
  {(char*)"GetIncrement", PyvtkRecursiveDividingCubes_GetIncrement, METH_VARARGS,
   (char*)"V.GetIncrement() -> int\nC++: int GetIncrement()\n\nEvery \"Increment\" point is added to the list of points. This\nparameter, if set to a large value, can be used to limit the\nnumber of points while retaining good accuracy.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkRecursiveDividingCubes_StaticNew()
{
  return vtkRecursiveDividingCubes::New();
}

PyObject *PyVTKClass_vtkRecursiveDividingCubesNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkRecursiveDividingCubes_StaticNew,
    PyvtkRecursiveDividingCubes_Methods,
    "vtkRecursiveDividingCubes", modulename,
    NULL, NULL,
    PyvtkRecursiveDividingCubes_Doc(),
    PyVTKClass_vtkPolyDataAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkRecursiveDividingCubes_Doc()
{
  static const char *docstring[] = {
    "vtkRecursiveDividingCubes - create points laying on isosurface (using\nrecursive approach)\n\n",
    "Superclass: vtkPolyDataAlgorithm\n\n",
    "vtkRecursiveDividingCubes is a filter that generates points laying on\na surface of constant scalar value (i.e., an isosurface). Dense point\nclouds (i.e., at screen resolution) will appear as a surface. Less\ndense clouds can be used as a source to generate streamlines or to\ngenerate \"transparent\" surfaces.\n\nThis implementation differs from vtkDividingCubes in that it uses a\nrecursive procedure. In ",
    "many cases this can result in generating more\npoints than the procedural implementation of vtkDividingCubes. This\nis because the recursive procedure divides voxels by multiples of\npowers of two. This can over-constrain subdivision. One of the\nadvantages of the recursive technique is that the recursion is\nterminated earlier, which in some cases can be more efficient.\n\nSee Also:\n\nvtkDividingCubes vt",
    "kContourFilter vtkMarchingCubes\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkRecursiveDividingCubes(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkRecursiveDividingCubesNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkRecursiveDividingCubes", o) != 0)
    {
    Py_DECREF(o);
    }

}

