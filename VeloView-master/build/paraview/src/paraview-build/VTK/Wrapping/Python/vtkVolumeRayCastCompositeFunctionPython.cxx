// python wrapper for vtkVolumeRayCastCompositeFunction
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkVolumeRayCastCompositeFunction.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkVolumeRayCastCompositeFunction(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkVolumeRayCastCompositeFunctionNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkVolumeRayCastFunctionNew
extern "C" { PyObject *PyVTKClass_vtkVolumeRayCastFunctionNew(const char *); }
#define DECLARED_PyVTKClass_vtkVolumeRayCastFunctionNew
#endif

static const char **PyvtkVolumeRayCastCompositeFunction_Doc();


static PyObject *
PyvtkVolumeRayCastCompositeFunction_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeRayCastCompositeFunction *op = static_cast<vtkVolumeRayCastCompositeFunction *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkVolumeRayCastCompositeFunction::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeRayCastCompositeFunction_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeRayCastCompositeFunction *op = static_cast<vtkVolumeRayCastCompositeFunction *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkVolumeRayCastCompositeFunction::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeRayCastCompositeFunction_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeRayCastCompositeFunction *op = static_cast<vtkVolumeRayCastCompositeFunction *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkVolumeRayCastCompositeFunction *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkVolumeRayCastCompositeFunction::NewInstance());

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
PyvtkVolumeRayCastCompositeFunction_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkVolumeRayCastCompositeFunction *tempr = vtkVolumeRayCastCompositeFunction::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeRayCastCompositeFunction_SetCompositeMethod(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCompositeMethod");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeRayCastCompositeFunction *op = static_cast<vtkVolumeRayCastCompositeFunction *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetCompositeMethod(temp0);
      }
    else
      {
      op->vtkVolumeRayCastCompositeFunction::SetCompositeMethod(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeRayCastCompositeFunction_GetCompositeMethodMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCompositeMethodMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeRayCastCompositeFunction *op = static_cast<vtkVolumeRayCastCompositeFunction *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetCompositeMethodMinValue() :
      op->vtkVolumeRayCastCompositeFunction::GetCompositeMethodMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeRayCastCompositeFunction_GetCompositeMethodMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCompositeMethodMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeRayCastCompositeFunction *op = static_cast<vtkVolumeRayCastCompositeFunction *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetCompositeMethodMaxValue() :
      op->vtkVolumeRayCastCompositeFunction::GetCompositeMethodMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeRayCastCompositeFunction_GetCompositeMethod(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCompositeMethod");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeRayCastCompositeFunction *op = static_cast<vtkVolumeRayCastCompositeFunction *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetCompositeMethod() :
      op->vtkVolumeRayCastCompositeFunction::GetCompositeMethod());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeRayCastCompositeFunction_SetCompositeMethodToInterpolateFirst(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCompositeMethodToInterpolateFirst");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeRayCastCompositeFunction *op = static_cast<vtkVolumeRayCastCompositeFunction *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetCompositeMethodToInterpolateFirst();
      }
    else
      {
      op->vtkVolumeRayCastCompositeFunction::SetCompositeMethodToInterpolateFirst();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeRayCastCompositeFunction_SetCompositeMethodToClassifyFirst(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCompositeMethodToClassifyFirst");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeRayCastCompositeFunction *op = static_cast<vtkVolumeRayCastCompositeFunction *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetCompositeMethodToClassifyFirst();
      }
    else
      {
      op->vtkVolumeRayCastCompositeFunction::SetCompositeMethodToClassifyFirst();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeRayCastCompositeFunction_GetCompositeMethodAsString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCompositeMethodAsString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeRayCastCompositeFunction *op = static_cast<vtkVolumeRayCastCompositeFunction *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetCompositeMethodAsString() :
      op->vtkVolumeRayCastCompositeFunction::GetCompositeMethodAsString());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeRayCastCompositeFunction_CastRay(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CastRay");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeRayCastCompositeFunction *op = static_cast<vtkVolumeRayCastCompositeFunction *>(vp);

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
      op->vtkVolumeRayCastCompositeFunction::CastRay(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeRayCastCompositeFunction_GetZeroOpacityThreshold(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetZeroOpacityThreshold");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeRayCastCompositeFunction *op = static_cast<vtkVolumeRayCastCompositeFunction *>(vp);

  vtkVolume *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkVolume"))
    {
    float tempr = (ap.IsBound() ?
      op->GetZeroOpacityThreshold(temp0) :
      op->vtkVolumeRayCastCompositeFunction::GetZeroOpacityThreshold(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkVolumeRayCastCompositeFunction_Methods[] = {
  {(char*)"GetClassName", PyvtkVolumeRayCastCompositeFunction_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkVolumeRayCastCompositeFunction_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkVolumeRayCastCompositeFunction_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkVolumeRayCastCompositeFunction\nC++: vtkVolumeRayCastCompositeFunction *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkVolumeRayCastCompositeFunction_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkVolumeRayCastCompositeFunction\nC++: vtkVolumeRayCastCompositeFunction *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetCompositeMethod", PyvtkVolumeRayCastCompositeFunction_SetCompositeMethod, METH_VARARGS,
   (char*)"V.SetCompositeMethod(int)\nC++: void SetCompositeMethod(int)\n\nSet the CompositeMethod to either Classify First or Interpolate\nFirst\n"},
  {(char*)"GetCompositeMethodMinValue", PyvtkVolumeRayCastCompositeFunction_GetCompositeMethodMinValue, METH_VARARGS,
   (char*)"V.GetCompositeMethodMinValue() -> int\nC++: int GetCompositeMethodMinValue()\n\nSet the CompositeMethod to either Classify First or Interpolate\nFirst\n"},
  {(char*)"GetCompositeMethodMaxValue", PyvtkVolumeRayCastCompositeFunction_GetCompositeMethodMaxValue, METH_VARARGS,
   (char*)"V.GetCompositeMethodMaxValue() -> int\nC++: int GetCompositeMethodMaxValue()\n\nSet the CompositeMethod to either Classify First or Interpolate\nFirst\n"},
  {(char*)"GetCompositeMethod", PyvtkVolumeRayCastCompositeFunction_GetCompositeMethod, METH_VARARGS,
   (char*)"V.GetCompositeMethod() -> int\nC++: int GetCompositeMethod()\n\nSet the CompositeMethod to either Classify First or Interpolate\nFirst\n"},
  {(char*)"SetCompositeMethodToInterpolateFirst", PyvtkVolumeRayCastCompositeFunction_SetCompositeMethodToInterpolateFirst, METH_VARARGS,
   (char*)"V.SetCompositeMethodToInterpolateFirst()\nC++: void SetCompositeMethodToInterpolateFirst()\n\nSet the CompositeMethod to either Classify First or Interpolate\nFirst\n"},
  {(char*)"SetCompositeMethodToClassifyFirst", PyvtkVolumeRayCastCompositeFunction_SetCompositeMethodToClassifyFirst, METH_VARARGS,
   (char*)"V.SetCompositeMethodToClassifyFirst()\nC++: void SetCompositeMethodToClassifyFirst()\n\nSet the CompositeMethod to either Classify First or Interpolate\nFirst\n"},
  {(char*)"GetCompositeMethodAsString", PyvtkVolumeRayCastCompositeFunction_GetCompositeMethodAsString, METH_VARARGS,
   (char*)"V.GetCompositeMethodAsString() -> string\nC++: const char *GetCompositeMethodAsString(void)\n\nSet the CompositeMethod to either Classify First or Interpolate\nFirst\n"},
  {(char*)"CastRay", PyvtkVolumeRayCastCompositeFunction_CastRay, METH_VARARGS,
   (char*)"V.CastRay(vtkVolumeRayCastDynamicInfo, vtkVolumeRayCastStaticInfo)\nC++: void CastRay(vtkVolumeRayCastDynamicInfo *dynamicInfo,\n    vtkVolumeRayCastStaticInfo *staticInfo)\n\n"},
  {(char*)"GetZeroOpacityThreshold", PyvtkVolumeRayCastCompositeFunction_GetZeroOpacityThreshold, METH_VARARGS,
   (char*)"V.GetZeroOpacityThreshold(vtkVolume) -> float\nC++: float GetZeroOpacityThreshold(vtkVolume *vol)\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkVolumeRayCastCompositeFunction_StaticNew()
{
  return vtkVolumeRayCastCompositeFunction::New();
}

PyObject *PyVTKClass_vtkVolumeRayCastCompositeFunctionNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkVolumeRayCastCompositeFunction_StaticNew,
    PyvtkVolumeRayCastCompositeFunction_Methods,
    "vtkVolumeRayCastCompositeFunction", modulename,
    NULL, NULL,
    PyvtkVolumeRayCastCompositeFunction_Doc(),
    PyVTKClass_vtkVolumeRayCastFunctionNew(modulename));
  return cls;
}

const char **PyvtkVolumeRayCastCompositeFunction_Doc()
{
  static const char *docstring[] = {
    "vtkVolumeRayCastCompositeFunction - a ray function for compositing\n\n",
    "Superclass: vtkVolumeRayCastFunction\n\n",
    "vtkVolumeRayCastCompositeFunction is a ray function that can be used\nwithin a vtkVolumeRayCastMapper. This function performs compositing\nalong the ray according to the properties stored in the\nvtkVolumeProperty for the volume.\n\nSee Also:\n\nvtkVolumeRayCastMapper vtkVolumeProperty vtkVolume\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkVolumeRayCastCompositeFunction(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkVolumeRayCastCompositeFunctionNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkVolumeRayCastCompositeFunction", o) != 0)
    {
    Py_DECREF(o);
    }

  for (int c = 0; c < 2; c++)
    {
    static const struct { const char *name; int value; }
      constants[2] = {
        { "VTK_COMPOSITE_CLASSIFY_FIRST", 0 },
        { "VTK_COMPOSITE_INTERPOLATE_FIRST", 1 },
      };

    o = PyInt_FromLong(constants[c].value);
    if (o)
      {
      PyDict_SetItemString(dict, (char *)constants[c].name, o);
      Py_DECREF(o);
      }
    }

}

