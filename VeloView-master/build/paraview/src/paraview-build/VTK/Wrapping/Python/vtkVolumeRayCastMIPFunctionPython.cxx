// python wrapper for vtkVolumeRayCastMIPFunction
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkVolumeRayCastMIPFunction.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkVolumeRayCastMIPFunction(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkVolumeRayCastMIPFunctionNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkVolumeRayCastFunctionNew
extern "C" { PyObject *PyVTKClass_vtkVolumeRayCastFunctionNew(const char *); }
#define DECLARED_PyVTKClass_vtkVolumeRayCastFunctionNew
#endif

static const char **PyvtkVolumeRayCastMIPFunction_Doc();


static PyObject *
PyvtkVolumeRayCastMIPFunction_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeRayCastMIPFunction *op = static_cast<vtkVolumeRayCastMIPFunction *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkVolumeRayCastMIPFunction::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeRayCastMIPFunction_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeRayCastMIPFunction *op = static_cast<vtkVolumeRayCastMIPFunction *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkVolumeRayCastMIPFunction::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeRayCastMIPFunction_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeRayCastMIPFunction *op = static_cast<vtkVolumeRayCastMIPFunction *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkVolumeRayCastMIPFunction *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkVolumeRayCastMIPFunction::NewInstance());

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
PyvtkVolumeRayCastMIPFunction_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkVolumeRayCastMIPFunction *tempr = vtkVolumeRayCastMIPFunction::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeRayCastMIPFunction_GetZeroOpacityThreshold(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetZeroOpacityThreshold");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeRayCastMIPFunction *op = static_cast<vtkVolumeRayCastMIPFunction *>(vp);

  vtkVolume *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkVolume"))
    {
    float tempr = (ap.IsBound() ?
      op->GetZeroOpacityThreshold(temp0) :
      op->vtkVolumeRayCastMIPFunction::GetZeroOpacityThreshold(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeRayCastMIPFunction_SetMaximizeMethod(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaximizeMethod");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeRayCastMIPFunction *op = static_cast<vtkVolumeRayCastMIPFunction *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetMaximizeMethod(temp0);
      }
    else
      {
      op->vtkVolumeRayCastMIPFunction::SetMaximizeMethod(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeRayCastMIPFunction_GetMaximizeMethodMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximizeMethodMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeRayCastMIPFunction *op = static_cast<vtkVolumeRayCastMIPFunction *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetMaximizeMethodMinValue() :
      op->vtkVolumeRayCastMIPFunction::GetMaximizeMethodMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeRayCastMIPFunction_GetMaximizeMethodMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximizeMethodMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeRayCastMIPFunction *op = static_cast<vtkVolumeRayCastMIPFunction *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetMaximizeMethodMaxValue() :
      op->vtkVolumeRayCastMIPFunction::GetMaximizeMethodMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeRayCastMIPFunction_GetMaximizeMethod(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximizeMethod");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeRayCastMIPFunction *op = static_cast<vtkVolumeRayCastMIPFunction *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetMaximizeMethod() :
      op->vtkVolumeRayCastMIPFunction::GetMaximizeMethod());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeRayCastMIPFunction_SetMaximizeMethodToScalarValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaximizeMethodToScalarValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeRayCastMIPFunction *op = static_cast<vtkVolumeRayCastMIPFunction *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetMaximizeMethodToScalarValue();
      }
    else
      {
      op->vtkVolumeRayCastMIPFunction::SetMaximizeMethodToScalarValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeRayCastMIPFunction_SetMaximizeMethodToOpacity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaximizeMethodToOpacity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeRayCastMIPFunction *op = static_cast<vtkVolumeRayCastMIPFunction *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetMaximizeMethodToOpacity();
      }
    else
      {
      op->vtkVolumeRayCastMIPFunction::SetMaximizeMethodToOpacity();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeRayCastMIPFunction_GetMaximizeMethodAsString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximizeMethodAsString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeRayCastMIPFunction *op = static_cast<vtkVolumeRayCastMIPFunction *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetMaximizeMethodAsString() :
      op->vtkVolumeRayCastMIPFunction::GetMaximizeMethodAsString());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeRayCastMIPFunction_CastRay(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CastRay");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeRayCastMIPFunction *op = static_cast<vtkVolumeRayCastMIPFunction *>(vp);

  vtkVolumeRayCastDynamicInfo *temp0 = NULL;
  vtkVolumeRayCastStaticInfo *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkVolumeRayCastDynamicInfo") &&
      ap.GetVTKObject(temp1, "vtkVolumeRayCastStaticInfo"))
    {
    if (ap.IsBound())
      {
      op->CastRay(temp0, temp1);
      }
    else
      {
      op->vtkVolumeRayCastMIPFunction::CastRay(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkVolumeRayCastMIPFunction_Methods[] = {
  {(char*)"GetClassName", PyvtkVolumeRayCastMIPFunction_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkVolumeRayCastMIPFunction_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkVolumeRayCastMIPFunction_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkVolumeRayCastMIPFunction\nC++: vtkVolumeRayCastMIPFunction *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkVolumeRayCastMIPFunction_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkVolumeRayCastMIPFunction\nC++: vtkVolumeRayCastMIPFunction *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetZeroOpacityThreshold", PyvtkVolumeRayCastMIPFunction_GetZeroOpacityThreshold, METH_VARARGS,
   (char*)"V.GetZeroOpacityThreshold(vtkVolume) -> float\nC++: float GetZeroOpacityThreshold(vtkVolume *vol)\n\nGet the scalar value below which all scalar values have zero\nopacity.\n"},
  {(char*)"SetMaximizeMethod", PyvtkVolumeRayCastMIPFunction_SetMaximizeMethod, METH_VARARGS,
   (char*)"V.SetMaximizeMethod(int)\nC++: void SetMaximizeMethod(int)\n\nSet the MaximizeMethod to either ScalarValue or Opacity.\n"},
  {(char*)"GetMaximizeMethodMinValue", PyvtkVolumeRayCastMIPFunction_GetMaximizeMethodMinValue, METH_VARARGS,
   (char*)"V.GetMaximizeMethodMinValue() -> int\nC++: int GetMaximizeMethodMinValue()\n\nSet the MaximizeMethod to either ScalarValue or Opacity.\n"},
  {(char*)"GetMaximizeMethodMaxValue", PyvtkVolumeRayCastMIPFunction_GetMaximizeMethodMaxValue, METH_VARARGS,
   (char*)"V.GetMaximizeMethodMaxValue() -> int\nC++: int GetMaximizeMethodMaxValue()\n\nSet the MaximizeMethod to either ScalarValue or Opacity.\n"},
  {(char*)"GetMaximizeMethod", PyvtkVolumeRayCastMIPFunction_GetMaximizeMethod, METH_VARARGS,
   (char*)"V.GetMaximizeMethod() -> int\nC++: int GetMaximizeMethod()\n\nSet the MaximizeMethod to either ScalarValue or Opacity.\n"},
  {(char*)"SetMaximizeMethodToScalarValue", PyvtkVolumeRayCastMIPFunction_SetMaximizeMethodToScalarValue, METH_VARARGS,
   (char*)"V.SetMaximizeMethodToScalarValue()\nC++: void SetMaximizeMethodToScalarValue()\n\nSet the MaximizeMethod to either ScalarValue or Opacity.\n"},
  {(char*)"SetMaximizeMethodToOpacity", PyvtkVolumeRayCastMIPFunction_SetMaximizeMethodToOpacity, METH_VARARGS,
   (char*)"V.SetMaximizeMethodToOpacity()\nC++: void SetMaximizeMethodToOpacity()\n\nSet the MaximizeMethod to either ScalarValue or Opacity.\n"},
  {(char*)"GetMaximizeMethodAsString", PyvtkVolumeRayCastMIPFunction_GetMaximizeMethodAsString, METH_VARARGS,
   (char*)"V.GetMaximizeMethodAsString() -> string\nC++: const char *GetMaximizeMethodAsString(void)\n\nSet the MaximizeMethod to either ScalarValue or Opacity.\n"},
  {(char*)"CastRay", PyvtkVolumeRayCastMIPFunction_CastRay, METH_VARARGS,
   (char*)"V.CastRay(vtkVolumeRayCastDynamicInfo, vtkVolumeRayCastStaticInfo)\nC++: void CastRay(vtkVolumeRayCastDynamicInfo *dynamicInfo,\n    vtkVolumeRayCastStaticInfo *staticInfo)\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkVolumeRayCastMIPFunction_StaticNew()
{
  return vtkVolumeRayCastMIPFunction::New();
}

PyObject *PyVTKClass_vtkVolumeRayCastMIPFunctionNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkVolumeRayCastMIPFunction_StaticNew,
    PyvtkVolumeRayCastMIPFunction_Methods,
    "vtkVolumeRayCastMIPFunction", modulename,
    NULL, NULL,
    PyvtkVolumeRayCastMIPFunction_Doc(),
    PyVTKClass_vtkVolumeRayCastFunctionNew(modulename));
  return cls;
}

const char **PyvtkVolumeRayCastMIPFunction_Doc()
{
  static const char *docstring[] = {
    "vtkVolumeRayCastMIPFunction - A maximum intensity projection ray\ncaster for volumes\n\n",
    "Superclass: vtkVolumeRayCastFunction\n\n",
    "vtkVolumeRayCastMIPFunction is a volume ray cast function that\ncomputes the maximum value encountered along the ray. This is either\nthe maximum scalar value, or the maximum opacity, as defined by the\nMaximizeMethod. The color and opacity returned by this function is\nbased on the color, scalar opacity, and gradient opacity transfer\nfunctions defined in the vtkVolumeProperty of the vtkVolume.\n\nSee A",
    "lso:\n\nvtkVolumeRayCastFunction vtkVolumeRayCastMapper vtkVolumeProperty\nvtkVolumeRayCastCompositeFunction vtkVolumeRayCastIsosurfaceFunction\nvtkVolume vtkVolumeProperty\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkVolumeRayCastMIPFunction(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkVolumeRayCastMIPFunctionNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkVolumeRayCastMIPFunction", o) != 0)
    {
    Py_DECREF(o);
    }

  for (int c = 0; c < 2; c++)
    {
    static const struct { const char *name; int value; }
      constants[2] = {
        { "VTK_MAXIMIZE_SCALAR_VALUE", 0 },
        { "VTK_MAXIMIZE_OPACITY", 1 },
      };

    o = PyInt_FromLong(constants[c].value);
    if (o)
      {
      PyDict_SetItemString(dict, (char *)constants[c].name, o);
      Py_DECREF(o);
      }
    }

}

