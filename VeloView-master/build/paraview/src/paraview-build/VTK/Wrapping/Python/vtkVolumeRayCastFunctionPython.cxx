// python wrapper for vtkVolumeRayCastFunction
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkVolumeRayCastFunction.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkVolumeRayCastFunction(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkVolumeRayCastFunctionNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkVolumeRayCastFunction_Doc();


static PyObject *
PyvtkVolumeRayCastFunction_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeRayCastFunction *op = static_cast<vtkVolumeRayCastFunction *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkVolumeRayCastFunction::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeRayCastFunction_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeRayCastFunction *op = static_cast<vtkVolumeRayCastFunction *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkVolumeRayCastFunction::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeRayCastFunction_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeRayCastFunction *op = static_cast<vtkVolumeRayCastFunction *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkVolumeRayCastFunction *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkVolumeRayCastFunction::NewInstance());

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
PyvtkVolumeRayCastFunction_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkVolumeRayCastFunction *tempr = vtkVolumeRayCastFunction::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeRayCastFunction_FunctionInitialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FunctionInitialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeRayCastFunction *op = static_cast<vtkVolumeRayCastFunction *>(vp);

  vtkRenderer *temp0 = NULL;
  vtkVolume *temp1 = NULL;
  vtkVolumeRayCastStaticInfo *temp2 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkRenderer") &&
      ap.GetVTKObject(temp1, "vtkVolume") &&
      ap.GetVTKObject(temp2, "vtkVolumeRayCastStaticInfo"))
    {
    if (ap.IsBound())
      {
      op->FunctionInitialize(temp0, temp1, temp2);
      }
    else
      {
      op->vtkVolumeRayCastFunction::FunctionInitialize(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeRayCastFunction_CastRay(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CastRay");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeRayCastFunction *op = static_cast<vtkVolumeRayCastFunction *>(vp);

  vtkVolumeRayCastDynamicInfo *temp0 = NULL;
  vtkVolumeRayCastStaticInfo *temp1 = NULL;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkVolumeRayCastDynamicInfo") &&
      ap.GetVTKObject(temp1, "vtkVolumeRayCastStaticInfo"))
    {
    op->CastRay(temp0, temp1);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeRayCastFunction_GetZeroOpacityThreshold(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetZeroOpacityThreshold");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeRayCastFunction *op = static_cast<vtkVolumeRayCastFunction *>(vp);

  vtkVolume *temp0 = NULL;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkVolume"))
    {
    float tempr = op->GetZeroOpacityThreshold(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkVolumeRayCastFunction_Methods[] = {
  {(char*)"GetClassName", PyvtkVolumeRayCastFunction_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkVolumeRayCastFunction_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkVolumeRayCastFunction_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkVolumeRayCastFunction\nC++: vtkVolumeRayCastFunction *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkVolumeRayCastFunction_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkVolumeRayCastFunction\nC++: vtkVolumeRayCastFunction *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"FunctionInitialize", PyvtkVolumeRayCastFunction_FunctionInitialize, METH_VARARGS,
   (char*)"V.FunctionInitialize(vtkRenderer, vtkVolume,\n    vtkVolumeRayCastStaticInfo)\nC++: void FunctionInitialize(vtkRenderer *ren, vtkVolume *vol,\n    vtkVolumeRayCastStaticInfo *staticInfo)\n\nDo the basic initialization. This includes saving the parameters\npassed in into local variables, as well as grabbing some useful\ninfo from the volume property and normal encoder. This initialize\nroutine is called once per render. It also calls the\nSpecificFunctionInitialize of the subclass function.\n"},
  {(char*)"CastRay", PyvtkVolumeRayCastFunction_CastRay, METH_VARARGS,
   (char*)"V.CastRay(vtkVolumeRayCastDynamicInfo, vtkVolumeRayCastStaticInfo)\nC++: virtual void CastRay(\n    vtkVolumeRayCastDynamicInfo *dynamicInfo,\n    vtkVolumeRayCastStaticInfo *staticInfo)\n\n"},
  {(char*)"GetZeroOpacityThreshold", PyvtkVolumeRayCastFunction_GetZeroOpacityThreshold, METH_VARARGS,
   (char*)"V.GetZeroOpacityThreshold(vtkVolume) -> float\nC++: virtual float GetZeroOpacityThreshold(vtkVolume *vol)\n\nGet the value below which all scalar values are considered to\nhave 0 opacity.\n"},
  {NULL, NULL, 0, NULL}
};

PyObject *PyVTKClass_vtkVolumeRayCastFunctionNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(NULL,
    PyvtkVolumeRayCastFunction_Methods,
    "vtkVolumeRayCastFunction", modulename,
    NULL, NULL,
    PyvtkVolumeRayCastFunction_Doc(),
    PyVTKClass_vtkObjectNew(modulename));
  return cls;
}

const char **PyvtkVolumeRayCastFunction_Doc()
{
  static const char *docstring[] = {
    "vtkVolumeRayCastFunction - a superclass for ray casting functions\n\n",
    "Superclass: vtkObject\n\n",
    "vtkVolumeRayCastFunction is a superclass for ray casting functions\nthat can be used within a vtkVolumeRayCastMapper. This includes for\nexample, vtkVolumeRayCastCompositeFunction,\nvtkVolumeRayCastMIPFunction, and vtkVolumeRayCastIsosurfaceFunction.\n\nSee Also:\n\nvtkVolumeRayCastCompositeFunction vtkVolumeRayCastMIPFunction\nvtkVolumeRayCastIsosurfaceFunction vtkVolumeRayCastMapper\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkVolumeRayCastFunction(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkVolumeRayCastFunctionNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkVolumeRayCastFunction", o) != 0)
    {
    Py_DECREF(o);
    }

}

