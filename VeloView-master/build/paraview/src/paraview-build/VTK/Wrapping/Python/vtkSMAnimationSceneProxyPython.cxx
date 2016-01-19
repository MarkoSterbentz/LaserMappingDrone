// python wrapper for vtkSMAnimationSceneProxy
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkSMAnimationSceneProxy.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkSMAnimationSceneProxy(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkSMAnimationSceneProxyNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkSMProxyNew
extern "C" { PyObject *PyVTKClass_vtkSMProxyNew(const char *); }
#define DECLARED_PyVTKClass_vtkSMProxyNew
#endif

static const char **PyvtkSMAnimationSceneProxy_Doc();


static PyObject *
PyvtkSMAnimationSceneProxy_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMAnimationSceneProxy *op = static_cast<vtkSMAnimationSceneProxy *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkSMAnimationSceneProxy::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMAnimationSceneProxy_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMAnimationSceneProxy *op = static_cast<vtkSMAnimationSceneProxy *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSMAnimationSceneProxy::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMAnimationSceneProxy_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMAnimationSceneProxy *op = static_cast<vtkSMAnimationSceneProxy *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkSMAnimationSceneProxy *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSMAnimationSceneProxy::NewInstance());

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
PyvtkSMAnimationSceneProxy_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkSMAnimationSceneProxy *tempr = vtkSMAnimationSceneProxy::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMAnimationSceneProxy_UpdateAnimationUsingDataTimeSteps_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateAnimationUsingDataTimeSteps");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMAnimationSceneProxy *op = static_cast<vtkSMAnimationSceneProxy *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->UpdateAnimationUsingDataTimeSteps() :
      op->vtkSMAnimationSceneProxy::UpdateAnimationUsingDataTimeSteps());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkSMAnimationSceneProxy_UpdateAnimationUsingDataTimeSteps_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "UpdateAnimationUsingDataTimeSteps");

  vtkSMProxy *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMProxy"))
    {
    bool tempr = vtkSMAnimationSceneProxy::UpdateAnimationUsingDataTimeSteps(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkSMAnimationSceneProxy_UpdateAnimationUsingDataTimeSteps(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
    {
    case 0:
      return PyvtkSMAnimationSceneProxy_UpdateAnimationUsingDataTimeSteps_s1(self, args);
    case 1:
      return PyvtkSMAnimationSceneProxy_UpdateAnimationUsingDataTimeSteps_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "UpdateAnimationUsingDataTimeSteps");
  return NULL;
}



static PyObject *
PyvtkSMAnimationSceneProxy_FindAnimationCue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FindAnimationCue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMAnimationSceneProxy *op = static_cast<vtkSMAnimationSceneProxy *>(vp);

  vtkSMProxy *temp0 = NULL;
  char *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkSMProxy") &&
      ap.GetValue(temp1))
    {
    vtkSMProxy *tempr = (ap.IsBound() ?
      op->FindAnimationCue(temp0, temp1) :
      op->vtkSMAnimationSceneProxy::FindAnimationCue(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkSMAnimationSceneProxy_FindAnimationCue_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "FindAnimationCue");

  vtkSMProxy *temp0 = NULL;
  vtkSMProxy *temp1 = NULL;
  char *temp2 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkSMProxy") &&
      ap.GetVTKObject(temp1, "vtkSMProxy") &&
      ap.GetValue(temp2))
    {
    vtkSMProxy *tempr = vtkSMAnimationSceneProxy::FindAnimationCue(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkSMAnimationSceneProxy_FindAnimationCue(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
    {
    case 2:
      return PyvtkSMAnimationSceneProxy_FindAnimationCue_s1(self, args);
    case 3:
      return PyvtkSMAnimationSceneProxy_FindAnimationCue_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "FindAnimationCue");
  return NULL;
}


static PyMethodDef PyvtkSMAnimationSceneProxy_Methods[] = {
  {(char*)"GetClassName", PyvtkSMAnimationSceneProxy_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkSMAnimationSceneProxy_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkSMAnimationSceneProxy_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkSMAnimationSceneProxy\nC++: vtkSMAnimationSceneProxy *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkSMAnimationSceneProxy_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkSMAnimationSceneProxy\nC++: vtkSMAnimationSceneProxy *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"UpdateAnimationUsingDataTimeSteps", PyvtkSMAnimationSceneProxy_UpdateAnimationUsingDataTimeSteps, METH_VARARGS,
   (char*)"V.UpdateAnimationUsingDataTimeSteps() -> bool\nC++: virtual bool UpdateAnimationUsingDataTimeSteps()\nV.UpdateAnimationUsingDataTimeSteps(vtkSMProxy) -> bool\nC++: static bool UpdateAnimationUsingDataTimeSteps(\n    vtkSMProxy *scene)\n\nSetups the animation scene's playback mode and time-ranges based\non the timesteps available on the time-keeper proxy set on the\nanimation scene.\n"},
  {(char*)"FindAnimationCue", PyvtkSMAnimationSceneProxy_FindAnimationCue, METH_VARARGS,
   (char*)"V.FindAnimationCue(vtkSMProxy, string) -> vtkSMProxy\nC++: virtual vtkSMProxy *FindAnimationCue(\n    vtkSMProxy *animatedProxy, const char *animatedPropertyName)\nV.FindAnimationCue(vtkSMProxy, vtkSMProxy, string) -> vtkSMProxy\nC++: static vtkSMProxy *FindAnimationCue(vtkSMProxy *scene,\n    vtkSMProxy *animatedProxy, const char *animatedPropertyName)\n\nReturns the first animation cue (enabled or otherwise) that\nanimates the given property on the proxy. This will return NULL\nif none such cue exists.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkSMAnimationSceneProxy_StaticNew()
{
  return vtkSMAnimationSceneProxy::New();
}

PyObject *PyVTKClass_vtkSMAnimationSceneProxyNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkSMAnimationSceneProxy_StaticNew,
    PyvtkSMAnimationSceneProxy_Methods,
    "vtkSMAnimationSceneProxy", modulename,
    NULL, NULL,
    PyvtkSMAnimationSceneProxy_Doc(),
    PyVTKClass_vtkSMProxyNew(modulename));
  return cls;
}

const char **PyvtkSMAnimationSceneProxy_Doc()
{
  static const char *docstring[] = {
    "vtkSMAnimationSceneProxy\n\n",
    "Superclass: vtkSMProxy\n\n",
    "vtkSMAnimationSceneProxy observes vtkCommand::ModifiedEvent on the\nclient-side VTK-object to call UpdatePropertyInformation() every time\nthat happens.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkSMAnimationSceneProxy(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkSMAnimationSceneProxyNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkSMAnimationSceneProxy", o) != 0)
    {
    Py_DECREF(o);
    }

}

