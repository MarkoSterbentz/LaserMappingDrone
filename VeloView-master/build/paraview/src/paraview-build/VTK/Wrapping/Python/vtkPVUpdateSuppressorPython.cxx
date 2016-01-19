// python wrapper for vtkPVUpdateSuppressor
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkTimeStamp.h"
#include "vtkPVUpdateSuppressor.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkPVUpdateSuppressor(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkPVUpdateSuppressorNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkDataObjectAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkDataObjectAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkDataObjectAlgorithmNew
#endif

static const char **PyvtkPVUpdateSuppressor_Doc();


static PyObject *
PyvtkPVUpdateSuppressor_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVUpdateSuppressor *op = static_cast<vtkPVUpdateSuppressor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkPVUpdateSuppressor::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVUpdateSuppressor_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVUpdateSuppressor *op = static_cast<vtkPVUpdateSuppressor *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPVUpdateSuppressor::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVUpdateSuppressor_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVUpdateSuppressor *op = static_cast<vtkPVUpdateSuppressor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPVUpdateSuppressor *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPVUpdateSuppressor::NewInstance());

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
PyvtkPVUpdateSuppressor_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkPVUpdateSuppressor *tempr = vtkPVUpdateSuppressor::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVUpdateSuppressor_ForceUpdate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ForceUpdate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVUpdateSuppressor *op = static_cast<vtkPVUpdateSuppressor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ForceUpdate();
      }
    else
      {
      op->vtkPVUpdateSuppressor::ForceUpdate();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVUpdateSuppressor_SetEnabled(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEnabled");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVUpdateSuppressor *op = static_cast<vtkPVUpdateSuppressor *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetEnabled(temp0);
      }
    else
      {
      op->vtkPVUpdateSuppressor::SetEnabled(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVUpdateSuppressor_GetEnabled(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEnabled");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVUpdateSuppressor *op = static_cast<vtkPVUpdateSuppressor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetEnabled() :
      op->vtkPVUpdateSuppressor::GetEnabled());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVUpdateSuppressor_GetForcedUpdateTimeStamp(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetForcedUpdateTimeStamp");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVUpdateSuppressor *op = static_cast<vtkPVUpdateSuppressor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkTimeStamp tempr = (ap.IsBound() ?
      op->GetForcedUpdateTimeStamp() :
      op->vtkPVUpdateSuppressor::GetForcedUpdateTimeStamp());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildSpecialObject(&tempr, "vtkTimeStamp");
      }
    }

  return result;
}

static PyMethodDef PyvtkPVUpdateSuppressor_Methods[] = {
  {(char*)"GetClassName", PyvtkPVUpdateSuppressor_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkPVUpdateSuppressor_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkPVUpdateSuppressor_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkPVUpdateSuppressor\nC++: vtkPVUpdateSuppressor *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkPVUpdateSuppressor_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkPVUpdateSuppressor\nC++: vtkPVUpdateSuppressor *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"ForceUpdate", PyvtkPVUpdateSuppressor_ForceUpdate, METH_VARARGS,
   (char*)"V.ForceUpdate()\nC++: virtual void ForceUpdate()\n\nForce update on the input.\n"},
  {(char*)"SetEnabled", PyvtkPVUpdateSuppressor_SetEnabled, METH_VARARGS,
   (char*)"V.SetEnabled(bool)\nC++: void SetEnabled(bool)\n\nGet/Set if the update suppressor is enabled. If the update\nsuppressor is not enabled, it won't supress any updates. Enabled\nby default.\n"},
  {(char*)"GetEnabled", PyvtkPVUpdateSuppressor_GetEnabled, METH_VARARGS,
   (char*)"V.GetEnabled() -> bool\nC++: bool GetEnabled()\n\nGet/Set if the update suppressor is enabled. If the update\nsuppressor is not enabled, it won't supress any updates. Enabled\nby default.\n"},
  {(char*)"GetForcedUpdateTimeStamp", PyvtkPVUpdateSuppressor_GetForcedUpdateTimeStamp, METH_VARARGS,
   (char*)"V.GetForcedUpdateTimeStamp() -> vtkTimeStamp\nC++: vtkTimeStamp GetForcedUpdateTimeStamp()\n\nProvides access to the timestamp when the most recent\nForceUpdate() was called.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkPVUpdateSuppressor_StaticNew()
{
  return vtkPVUpdateSuppressor::New();
}

PyObject *PyVTKClass_vtkPVUpdateSuppressorNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkPVUpdateSuppressor_StaticNew,
    PyvtkPVUpdateSuppressor_Methods,
    "vtkPVUpdateSuppressor", modulename,
    NULL, NULL,
    PyvtkPVUpdateSuppressor_Doc(),
    PyVTKClass_vtkDataObjectAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkPVUpdateSuppressor_Doc()
{
  static const char *docstring[] = {
    "vtkPVUpdateSuppressor - prevents propagation of update\n\n",
    "Superclass: vtkDataObjectAlgorithm\n\n",
    "vtkPVUpdateSuppressor is simple filter that work with\nvtkUpdateSuppressorPipeline to block pipeline updates. One should\ncall ForceUpdate() to update the input, if needed, explicitly. Note\nthat ForceUpdate() may not result in input updating at all if it has\nbeen already updated by some other means.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPVUpdateSuppressor(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPVUpdateSuppressorNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPVUpdateSuppressor", o) != 0)
    {
    Py_DECREF(o);
    }

}

