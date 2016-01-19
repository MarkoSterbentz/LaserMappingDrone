// python wrapper for vtkImplicitPolyDataDistance
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkImplicitPolyDataDistance.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkImplicitPolyDataDistance(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkImplicitPolyDataDistanceNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkImplicitFunctionNew
extern "C" { PyObject *PyVTKClass_vtkImplicitFunctionNew(const char *); }
#define DECLARED_PyVTKClass_vtkImplicitFunctionNew
#endif

static const char **PyvtkImplicitPolyDataDistance_Doc();


static PyObject *
PyvtkImplicitPolyDataDistance_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPolyDataDistance *op = static_cast<vtkImplicitPolyDataDistance *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkImplicitPolyDataDistance::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImplicitPolyDataDistance_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPolyDataDistance *op = static_cast<vtkImplicitPolyDataDistance *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkImplicitPolyDataDistance::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImplicitPolyDataDistance_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPolyDataDistance *op = static_cast<vtkImplicitPolyDataDistance *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkImplicitPolyDataDistance *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkImplicitPolyDataDistance::NewInstance());

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
PyvtkImplicitPolyDataDistance_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkImplicitPolyDataDistance *tempr = vtkImplicitPolyDataDistance::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImplicitPolyDataDistance_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPolyDataDistance *op = static_cast<vtkImplicitPolyDataDistance *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMTime() :
      op->vtkImplicitPolyDataDistance::GetMTime());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImplicitPolyDataDistance_EvaluateFunction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EvaluateFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPolyDataDistance *op = static_cast<vtkImplicitPolyDataDistance *>(vp);

  double temp0[3];
  double save0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    double tempr = (ap.IsBound() ?
      op->EvaluateFunction(temp0) :
      op->vtkImplicitPolyDataDistance::EvaluateFunction(temp0));

    if (ap.ArrayHasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(0, temp0, size0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImplicitPolyDataDistance_EvaluateGradient(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EvaluateGradient");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPolyDataDistance *op = static_cast<vtkImplicitPolyDataDistance *>(vp);

  double temp0[3];
  double save0[3];
  const int size0 = 3;
  double temp1[3];
  double save1[3];
  const int size1 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1))
    {
    ap.SaveArray(temp0, save0, size0);
    ap.SaveArray(temp1, save1, size1);

    if (ap.IsBound())
      {
      op->EvaluateGradient(temp0, temp1);
      }
    else
      {
      op->vtkImplicitPolyDataDistance::EvaluateGradient(temp0, temp1);
      }

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
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImplicitPolyDataDistance_SetInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPolyDataDistance *op = static_cast<vtkImplicitPolyDataDistance *>(vp);

  vtkPolyData *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPolyData"))
    {
    if (ap.IsBound())
      {
      op->SetInput(temp0);
      }
    else
      {
      op->vtkImplicitPolyDataDistance::SetInput(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImplicitPolyDataDistance_SetNoValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNoValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPolyDataDistance *op = static_cast<vtkImplicitPolyDataDistance *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetNoValue(temp0);
      }
    else
      {
      op->vtkImplicitPolyDataDistance::SetNoValue(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImplicitPolyDataDistance_GetNoValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNoValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPolyDataDistance *op = static_cast<vtkImplicitPolyDataDistance *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetNoValue() :
      op->vtkImplicitPolyDataDistance::GetNoValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImplicitPolyDataDistance_SetNoGradient_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNoGradient");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPolyDataDistance *op = static_cast<vtkImplicitPolyDataDistance *>(vp);

  double temp0;
  double temp1;
  double temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      op->SetNoGradient(temp0, temp1, temp2);
      }
    else
      {
      op->vtkImplicitPolyDataDistance::SetNoGradient(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkImplicitPolyDataDistance_SetNoGradient_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNoGradient");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPolyDataDistance *op = static_cast<vtkImplicitPolyDataDistance *>(vp);

  double temp0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetNoGradient(temp0);
      }
    else
      {
      op->vtkImplicitPolyDataDistance::SetNoGradient(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkImplicitPolyDataDistance_SetNoGradient(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkImplicitPolyDataDistance_SetNoGradient_s1(self, args);
    case 1:
      return PyvtkImplicitPolyDataDistance_SetNoGradient_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetNoGradient");
  return NULL;
}



static PyObject *
PyvtkImplicitPolyDataDistance_GetNoGradient(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNoGradient");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPolyDataDistance *op = static_cast<vtkImplicitPolyDataDistance *>(vp);

  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetNoGradient() :
      op->vtkImplicitPolyDataDistance::GetNoGradient());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkImplicitPolyDataDistance_GetTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTolerance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPolyDataDistance *op = static_cast<vtkImplicitPolyDataDistance *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetTolerance() :
      op->vtkImplicitPolyDataDistance::GetTolerance());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImplicitPolyDataDistance_SetTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTolerance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPolyDataDistance *op = static_cast<vtkImplicitPolyDataDistance *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetTolerance(temp0);
      }
    else
      {
      op->vtkImplicitPolyDataDistance::SetTolerance(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkImplicitPolyDataDistance_Methods[] = {
  {(char*)"GetClassName", PyvtkImplicitPolyDataDistance_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkImplicitPolyDataDistance_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkImplicitPolyDataDistance_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkImplicitPolyDataDistance\nC++: vtkImplicitPolyDataDistance *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkImplicitPolyDataDistance_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkImplicitPolyDataDistance\nC++: vtkImplicitPolyDataDistance *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetMTime", PyvtkImplicitPolyDataDistance_GetMTime, METH_VARARGS,
   (char*)"V.GetMTime() -> int\nC++: unsigned long GetMTime()\n\nReturn the MTime also considering the Input dependency.\n"},
  {(char*)"EvaluateFunction", PyvtkImplicitPolyDataDistance_EvaluateFunction, METH_VARARGS,
   (char*)"V.EvaluateFunction([float, float, float]) -> float\nC++: double EvaluateFunction(double x[3])\n\nEvaluate plane equation of nearest triangle to point x[3].\n"},
  {(char*)"EvaluateGradient", PyvtkImplicitPolyDataDistance_EvaluateGradient, METH_VARARGS,
   (char*)"V.EvaluateGradient([float, float, float], [float, float, float])\nC++: void EvaluateGradient(double x[3], double g[3])\n\nEvaluate function gradient of nearest triangle to point x[3].\n"},
  {(char*)"SetInput", PyvtkImplicitPolyDataDistance_SetInput, METH_VARARGS,
   (char*)"V.SetInput(vtkPolyData)\nC++: void SetInput(vtkPolyData *input)\n\nSet the input vtkPolyData used for the implicit function\nevaluation.  Passes input through an internal instance of\nvtkTriangleFilter to remove vertices and lines, leaving only\ntriangular polygons for evaluation as implicit planes.\n"},
  {(char*)"SetNoValue", PyvtkImplicitPolyDataDistance_SetNoValue, METH_VARARGS,
   (char*)"V.SetNoValue(float)\nC++: void SetNoValue(double a)\n\nSet/get the function value to use if no input vtkPolyData\nspecified.\n"},
  {(char*)"GetNoValue", PyvtkImplicitPolyDataDistance_GetNoValue, METH_VARARGS,
   (char*)"V.GetNoValue() -> float\nC++: double GetNoValue()\n\nSet/get the function value to use if no input vtkPolyData\nspecified.\n"},
  {(char*)"SetNoGradient", PyvtkImplicitPolyDataDistance_SetNoGradient, METH_VARARGS,
   (char*)"V.SetNoGradient(float, float, float)\nC++: void SetNoGradient(double, double, double)\nV.SetNoGradient((float, float, float))\nC++: void SetNoGradient(double a[3])\n\n"},
  {(char*)"GetNoGradient", PyvtkImplicitPolyDataDistance_GetNoGradient, METH_VARARGS,
   (char*)"V.GetNoGradient() -> (float, float, float)\nC++: double *GetNoGradient()\n\n"},
  {(char*)"GetTolerance", PyvtkImplicitPolyDataDistance_GetTolerance, METH_VARARGS,
   (char*)"V.GetTolerance() -> float\nC++: double GetTolerance()\n\nSet/get the tolerance usued for the locator.\n"},
  {(char*)"SetTolerance", PyvtkImplicitPolyDataDistance_SetTolerance, METH_VARARGS,
   (char*)"V.SetTolerance(float)\nC++: void SetTolerance(double a)\n\nSet/get the tolerance usued for the locator.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkImplicitPolyDataDistance_StaticNew()
{
  return vtkImplicitPolyDataDistance::New();
}

PyObject *PyVTKClass_vtkImplicitPolyDataDistanceNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkImplicitPolyDataDistance_StaticNew,
    PyvtkImplicitPolyDataDistance_Methods,
    "vtkImplicitPolyDataDistance", modulename,
    NULL, NULL,
    PyvtkImplicitPolyDataDistance_Doc(),
    PyVTKClass_vtkImplicitFunctionNew(modulename));
  return cls;
}

const char **PyvtkImplicitPolyDataDistance_Doc()
{
  static const char *docstring[] = {
    "vtkImplicitPolyDataDistance\n\n",
    "Superclass: vtkImplicitFunction\n\n",
    "Implicit function that computes the distance from a point x to the\nnearest point p on an input vtkPolyData. The sign of the function is\nset to the sign of the dot product between the angle-weighted\npseudonormal at the nearest surface point and the vector x - p.\nPoints interior to the geometry have a negative distance, points on\nthe exterior have a positive distance, and points on the input\nvtkPoly",
    "Data have a distance of zero. The gradient of the function is\nthe angle-weighted pseudonormal at the nearest point.\n\nBaerentzen, J. A. and Aanaes, H. (2005). Signed distance computation\nusing the angle weighted pseudonormal. IEEE Transactions on\nVisualization and Computer Graphics, 11:243-253.\n\nThis code was contributed in the VTK Journal paper: \"Boolean Operations on Surfaces in VTK Without Exter",
    "nal\nLibraries\" by Cory Quammen, Chris Weigle C., Russ Taylor\nhttp://hdl.handle.net/10380/3262\nhttp://www.midasjournal.org/browse/publication/797\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkImplicitPolyDataDistance(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkImplicitPolyDataDistanceNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkImplicitPolyDataDistance", o) != 0)
    {
    Py_DECREF(o);
    }

}

