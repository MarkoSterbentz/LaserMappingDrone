// python wrapper for vtkPVRepresentationAnimationHelper
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkPVRepresentationAnimationHelper.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkPVRepresentationAnimationHelper(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkPVRepresentationAnimationHelperNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkSMProxyNew
extern "C" { PyObject *PyVTKClass_vtkSMProxyNew(const char *); }
#define DECLARED_PyVTKClass_vtkSMProxyNew
#endif

static const char **PyvtkPVRepresentationAnimationHelper_Doc();


static PyObject *
PyvtkPVRepresentationAnimationHelper_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRepresentationAnimationHelper *op = static_cast<vtkPVRepresentationAnimationHelper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkPVRepresentationAnimationHelper::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVRepresentationAnimationHelper_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRepresentationAnimationHelper *op = static_cast<vtkPVRepresentationAnimationHelper *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPVRepresentationAnimationHelper::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVRepresentationAnimationHelper_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRepresentationAnimationHelper *op = static_cast<vtkPVRepresentationAnimationHelper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPVRepresentationAnimationHelper *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPVRepresentationAnimationHelper::NewInstance());

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
PyvtkPVRepresentationAnimationHelper_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkPVRepresentationAnimationHelper *tempr = vtkPVRepresentationAnimationHelper::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVRepresentationAnimationHelper_SetVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRepresentationAnimationHelper *op = static_cast<vtkPVRepresentationAnimationHelper *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetVisibility(temp0);
      }
    else
      {
      op->vtkPVRepresentationAnimationHelper::SetVisibility(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVRepresentationAnimationHelper_SetOpacity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOpacity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRepresentationAnimationHelper *op = static_cast<vtkPVRepresentationAnimationHelper *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetOpacity(temp0);
      }
    else
      {
      op->vtkPVRepresentationAnimationHelper::SetOpacity(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVRepresentationAnimationHelper_SetSourceProxy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSourceProxy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRepresentationAnimationHelper *op = static_cast<vtkPVRepresentationAnimationHelper *>(vp);

  vtkSMProxy *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMProxy"))
    {
    if (ap.IsBound())
      {
      op->SetSourceProxy(temp0);
      }
    else
      {
      op->vtkPVRepresentationAnimationHelper::SetSourceProxy(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkPVRepresentationAnimationHelper_Methods[] = {
  {(char*)"GetClassName", PyvtkPVRepresentationAnimationHelper_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkPVRepresentationAnimationHelper_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkPVRepresentationAnimationHelper_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkPVRepresentationAnimationHelper\nC++: vtkPVRepresentationAnimationHelper *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkPVRepresentationAnimationHelper_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkPVRepresentationAnimationHelper\nC++: vtkPVRepresentationAnimationHelper *SafeDownCast(\n    vtkObject* o)\n\n"},
  {(char*)"SetVisibility", PyvtkPVRepresentationAnimationHelper_SetVisibility, METH_VARARGS,
   (char*)"V.SetVisibility(int)\nC++: void SetVisibility(int)\n\nDon't use directly. Use the corresponding properties intstead.\n"},
  {(char*)"SetOpacity", PyvtkPVRepresentationAnimationHelper_SetOpacity, METH_VARARGS,
   (char*)"V.SetOpacity(float)\nC++: void SetOpacity(double)\n\nDon't use directly. Use the corresponding properties intstead.\n"},
  {(char*)"SetSourceProxy", PyvtkPVRepresentationAnimationHelper_SetSourceProxy, METH_VARARGS,
   (char*)"V.SetSourceProxy(vtkSMProxy)\nC++: void SetSourceProxy(vtkSMProxy *proxy)\n\nDon't use directly. Use the corresponding properties intstead.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkPVRepresentationAnimationHelper_StaticNew()
{
  return vtkPVRepresentationAnimationHelper::New();
}

PyObject *PyVTKClass_vtkPVRepresentationAnimationHelperNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkPVRepresentationAnimationHelper_StaticNew,
    PyvtkPVRepresentationAnimationHelper_Methods,
    "vtkPVRepresentationAnimationHelper", modulename,
    NULL, NULL,
    PyvtkPVRepresentationAnimationHelper_Doc(),
    PyVTKClass_vtkSMProxyNew(modulename));
  return cls;
}

const char **PyvtkPVRepresentationAnimationHelper_Doc()
{
  static const char *docstring[] = {
    "vtkPVRepresentationAnimationHelper - helper proxy used to animate\n\n",
    "Superclass: vtkSMProxy\n\n",
    "vtkPVRepresentationAnimationHelper is helper proxy used to animate\nproperties on the representations for any source. This makes is\npossible to set up an animation cue that will affect properties on\nall representations for a source without directly referring to the\nrepresentation proxies.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPVRepresentationAnimationHelper(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPVRepresentationAnimationHelperNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPVRepresentationAnimationHelper", o) != 0)
    {
    Py_DECREF(o);
    }

}

