// python wrapper for vtkWarpScalar
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkWarpScalar.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkWarpScalar(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkWarpScalarNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkPointSetAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkPointSetAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkPointSetAlgorithmNew
#endif

static const char **PyvtkWarpScalar_Doc();


static PyObject *
PyvtkWarpScalar_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWarpScalar *op = static_cast<vtkWarpScalar *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkWarpScalar::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkWarpScalar_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWarpScalar *op = static_cast<vtkWarpScalar *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkWarpScalar::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkWarpScalar_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWarpScalar *op = static_cast<vtkWarpScalar *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkWarpScalar *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkWarpScalar::NewInstance());

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
PyvtkWarpScalar_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkWarpScalar *tempr = vtkWarpScalar::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkWarpScalar_SetScaleFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScaleFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWarpScalar *op = static_cast<vtkWarpScalar *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetScaleFactor(temp0);
      }
    else
      {
      op->vtkWarpScalar::SetScaleFactor(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkWarpScalar_GetScaleFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScaleFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWarpScalar *op = static_cast<vtkWarpScalar *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetScaleFactor() :
      op->vtkWarpScalar::GetScaleFactor());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkWarpScalar_SetUseNormal(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseNormal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWarpScalar *op = static_cast<vtkWarpScalar *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetUseNormal(temp0);
      }
    else
      {
      op->vtkWarpScalar::SetUseNormal(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkWarpScalar_GetUseNormal(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseNormal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWarpScalar *op = static_cast<vtkWarpScalar *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetUseNormal() :
      op->vtkWarpScalar::GetUseNormal());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkWarpScalar_UseNormalOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseNormalOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWarpScalar *op = static_cast<vtkWarpScalar *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->UseNormalOn();
      }
    else
      {
      op->vtkWarpScalar::UseNormalOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkWarpScalar_UseNormalOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseNormalOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWarpScalar *op = static_cast<vtkWarpScalar *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->UseNormalOff();
      }
    else
      {
      op->vtkWarpScalar::UseNormalOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkWarpScalar_SetNormal_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNormal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWarpScalar *op = static_cast<vtkWarpScalar *>(vp);

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
      op->SetNormal(temp0, temp1, temp2);
      }
    else
      {
      op->vtkWarpScalar::SetNormal(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkWarpScalar_SetNormal_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNormal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWarpScalar *op = static_cast<vtkWarpScalar *>(vp);

  double temp0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetNormal(temp0);
      }
    else
      {
      op->vtkWarpScalar::SetNormal(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkWarpScalar_SetNormal(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkWarpScalar_SetNormal_s1(self, args);
    case 1:
      return PyvtkWarpScalar_SetNormal_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetNormal");
  return NULL;
}



static PyObject *
PyvtkWarpScalar_GetNormal(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNormal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWarpScalar *op = static_cast<vtkWarpScalar *>(vp);

  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetNormal() :
      op->vtkWarpScalar::GetNormal());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkWarpScalar_SetXYPlane(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetXYPlane");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWarpScalar *op = static_cast<vtkWarpScalar *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetXYPlane(temp0);
      }
    else
      {
      op->vtkWarpScalar::SetXYPlane(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkWarpScalar_GetXYPlane(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetXYPlane");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWarpScalar *op = static_cast<vtkWarpScalar *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetXYPlane() :
      op->vtkWarpScalar::GetXYPlane());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkWarpScalar_XYPlaneOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "XYPlaneOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWarpScalar *op = static_cast<vtkWarpScalar *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->XYPlaneOn();
      }
    else
      {
      op->vtkWarpScalar::XYPlaneOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkWarpScalar_XYPlaneOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "XYPlaneOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWarpScalar *op = static_cast<vtkWarpScalar *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->XYPlaneOff();
      }
    else
      {
      op->vtkWarpScalar::XYPlaneOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkWarpScalar_FillInputPortInformation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FillInputPortInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWarpScalar *op = static_cast<vtkWarpScalar *>(vp);

  int temp0;
  vtkInformation *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkInformation"))
    {
    int tempr = (ap.IsBound() ?
      op->FillInputPortInformation(temp0, temp1) :
      op->vtkWarpScalar::FillInputPortInformation(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkWarpScalar_Methods[] = {
  {(char*)"GetClassName", PyvtkWarpScalar_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkWarpScalar_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkWarpScalar_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkWarpScalar\nC++: vtkWarpScalar *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkWarpScalar_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkWarpScalar\nC++: vtkWarpScalar *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetScaleFactor", PyvtkWarpScalar_SetScaleFactor, METH_VARARGS,
   (char*)"V.SetScaleFactor(float)\nC++: void SetScaleFactor(double a)\n\nSpecify value to scale displacement.\n"},
  {(char*)"GetScaleFactor", PyvtkWarpScalar_GetScaleFactor, METH_VARARGS,
   (char*)"V.GetScaleFactor() -> float\nC++: double GetScaleFactor()\n\nSpecify value to scale displacement.\n"},
  {(char*)"SetUseNormal", PyvtkWarpScalar_SetUseNormal, METH_VARARGS,
   (char*)"V.SetUseNormal(int)\nC++: void SetUseNormal(int a)\n\nTurn on/off use of user specified normal. If on, data normals\nwill be ignored and instance variable Normal will be used\ninstead.\n"},
  {(char*)"GetUseNormal", PyvtkWarpScalar_GetUseNormal, METH_VARARGS,
   (char*)"V.GetUseNormal() -> int\nC++: int GetUseNormal()\n\nTurn on/off use of user specified normal. If on, data normals\nwill be ignored and instance variable Normal will be used\ninstead.\n"},
  {(char*)"UseNormalOn", PyvtkWarpScalar_UseNormalOn, METH_VARARGS,
   (char*)"V.UseNormalOn()\nC++: void UseNormalOn()\n\nTurn on/off use of user specified normal. If on, data normals\nwill be ignored and instance variable Normal will be used\ninstead.\n"},
  {(char*)"UseNormalOff", PyvtkWarpScalar_UseNormalOff, METH_VARARGS,
   (char*)"V.UseNormalOff()\nC++: void UseNormalOff()\n\nTurn on/off use of user specified normal. If on, data normals\nwill be ignored and instance variable Normal will be used\ninstead.\n"},
  {(char*)"SetNormal", PyvtkWarpScalar_SetNormal, METH_VARARGS,
   (char*)"V.SetNormal(float, float, float)\nC++: void SetNormal(double, double, double)\nV.SetNormal((float, float, float))\nC++: void SetNormal(double a[3])\n\n"},
  {(char*)"GetNormal", PyvtkWarpScalar_GetNormal, METH_VARARGS,
   (char*)"V.GetNormal() -> (float, float, float)\nC++: double *GetNormal()\n\nNormal (i.e., direction) along which to warp geometry. Only used\nif UseNormal boolean set to true or no normals available in data.\n"},
  {(char*)"SetXYPlane", PyvtkWarpScalar_SetXYPlane, METH_VARARGS,
   (char*)"V.SetXYPlane(int)\nC++: void SetXYPlane(int a)\n\nTurn on/off flag specifying that input data is x-y plane. If x-y\nplane, then the z value is used to warp the surface in the z-axis\ndirection (times the scale factor) and scalars are used to color\nthe surface.\n"},
  {(char*)"GetXYPlane", PyvtkWarpScalar_GetXYPlane, METH_VARARGS,
   (char*)"V.GetXYPlane() -> int\nC++: int GetXYPlane()\n\nTurn on/off flag specifying that input data is x-y plane. If x-y\nplane, then the z value is used to warp the surface in the z-axis\ndirection (times the scale factor) and scalars are used to color\nthe surface.\n"},
  {(char*)"XYPlaneOn", PyvtkWarpScalar_XYPlaneOn, METH_VARARGS,
   (char*)"V.XYPlaneOn()\nC++: void XYPlaneOn()\n\nTurn on/off flag specifying that input data is x-y plane. If x-y\nplane, then the z value is used to warp the surface in the z-axis\ndirection (times the scale factor) and scalars are used to color\nthe surface.\n"},
  {(char*)"XYPlaneOff", PyvtkWarpScalar_XYPlaneOff, METH_VARARGS,
   (char*)"V.XYPlaneOff()\nC++: void XYPlaneOff()\n\nTurn on/off flag specifying that input data is x-y plane. If x-y\nplane, then the z value is used to warp the surface in the z-axis\ndirection (times the scale factor) and scalars are used to color\nthe surface.\n"},
  {(char*)"FillInputPortInformation", PyvtkWarpScalar_FillInputPortInformation, METH_VARARGS,
   (char*)"V.FillInputPortInformation(int, vtkInformation) -> int\nC++: int FillInputPortInformation(int port, vtkInformation *info)\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkWarpScalar_StaticNew()
{
  return vtkWarpScalar::New();
}

PyObject *PyVTKClass_vtkWarpScalarNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkWarpScalar_StaticNew,
    PyvtkWarpScalar_Methods,
    "vtkWarpScalar", modulename,
    NULL, NULL,
    PyvtkWarpScalar_Doc(),
    PyVTKClass_vtkPointSetAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkWarpScalar_Doc()
{
  static const char *docstring[] = {
    "vtkWarpScalar - deform geometry with scalar data\n\n",
    "Superclass: vtkPointSetAlgorithm\n\n",
    "vtkWarpScalar is a filter that modifies point coordinates by moving\npoints along point normals by the scalar amount times the scale\nfactor. Useful for creating carpet or x-y-z plots.\n\nIf normals are not present in data, the Normal instance variable will\nbe used as the direction along which to warp the geometry. If normals\nare present but you would like to use the Normal instance variable,\nset the ",
    "UseNormal boolean to true.\n\nIf XYPlane boolean is set true, then the z-value is considered to be\na scalar value (still scaled by scale factor), and the displacement\nis along the z-axis. If scalars are also present, these are copied\nthrough and can be used to color the surface.\n\nNote that the filter passes both its point data and cell data to its\noutput, except for normals, since these are distorte",
    "d by the warping.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkWarpScalar(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkWarpScalarNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkWarpScalar", o) != 0)
    {
    Py_DECREF(o);
    }

}

