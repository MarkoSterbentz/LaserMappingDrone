// python wrapper for vtkGenericRenderWindowInteractor
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkGenericRenderWindowInteractor.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkGenericRenderWindowInteractor(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkGenericRenderWindowInteractorNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkRenderWindowInteractorNew
extern "C" { PyObject *PyVTKClass_vtkRenderWindowInteractorNew(const char *); }
#define DECLARED_PyVTKClass_vtkRenderWindowInteractorNew
#endif

static const char **PyvtkGenericRenderWindowInteractor_Doc();


static PyObject *
PyvtkGenericRenderWindowInteractor_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericRenderWindowInteractor *op = static_cast<vtkGenericRenderWindowInteractor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkGenericRenderWindowInteractor::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericRenderWindowInteractor_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericRenderWindowInteractor *op = static_cast<vtkGenericRenderWindowInteractor *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkGenericRenderWindowInteractor::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericRenderWindowInteractor_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericRenderWindowInteractor *op = static_cast<vtkGenericRenderWindowInteractor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkGenericRenderWindowInteractor *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkGenericRenderWindowInteractor::NewInstance());

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
PyvtkGenericRenderWindowInteractor_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkGenericRenderWindowInteractor *tempr = vtkGenericRenderWindowInteractor::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericRenderWindowInteractor_TimerEvent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TimerEvent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericRenderWindowInteractor *op = static_cast<vtkGenericRenderWindowInteractor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->TimerEvent();
      }
    else
      {
      op->vtkGenericRenderWindowInteractor::TimerEvent();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGenericRenderWindowInteractor_SetTimerEventResetsTimer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTimerEventResetsTimer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericRenderWindowInteractor *op = static_cast<vtkGenericRenderWindowInteractor *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetTimerEventResetsTimer(temp0);
      }
    else
      {
      op->vtkGenericRenderWindowInteractor::SetTimerEventResetsTimer(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGenericRenderWindowInteractor_GetTimerEventResetsTimer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTimerEventResetsTimer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericRenderWindowInteractor *op = static_cast<vtkGenericRenderWindowInteractor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetTimerEventResetsTimer() :
      op->vtkGenericRenderWindowInteractor::GetTimerEventResetsTimer());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericRenderWindowInteractor_TimerEventResetsTimerOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TimerEventResetsTimerOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericRenderWindowInteractor *op = static_cast<vtkGenericRenderWindowInteractor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->TimerEventResetsTimerOn();
      }
    else
      {
      op->vtkGenericRenderWindowInteractor::TimerEventResetsTimerOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGenericRenderWindowInteractor_TimerEventResetsTimerOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TimerEventResetsTimerOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericRenderWindowInteractor *op = static_cast<vtkGenericRenderWindowInteractor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->TimerEventResetsTimerOff();
      }
    else
      {
      op->vtkGenericRenderWindowInteractor::TimerEventResetsTimerOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkGenericRenderWindowInteractor_Methods[] = {
  {(char*)"GetClassName", PyvtkGenericRenderWindowInteractor_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkGenericRenderWindowInteractor_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkGenericRenderWindowInteractor_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkGenericRenderWindowInteractor\nC++: vtkGenericRenderWindowInteractor *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkGenericRenderWindowInteractor_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkGenericRenderWindowInteractor\nC++: vtkGenericRenderWindowInteractor *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"TimerEvent", PyvtkGenericRenderWindowInteractor_TimerEvent, METH_VARARGS,
   (char*)"V.TimerEvent()\nC++: virtual void TimerEvent()\n\nFire TimerEvent. SetEventInformation should be called just prior\nto calling any of these methods. These methods will Invoke the\ncorresponding vtk event.\n"},
  {(char*)"SetTimerEventResetsTimer", PyvtkGenericRenderWindowInteractor_SetTimerEventResetsTimer, METH_VARARGS,
   (char*)"V.SetTimerEventResetsTimer(int)\nC++: void SetTimerEventResetsTimer(int a)\n\nFlag that indicates whether the TimerEvent method should call\nResetTimer to simulate repeating timers with an endless stream of\none shot timers. By default this flag is on and all repeating\ntimers are implemented as a stream of sequential one shot timers.\nIf the observer of CreateTimerEvent actually creates a \"natively\nrepeating\" timer, setting this flag to off will prevent (perhaps\nmany many) unnecessary calls to ResetTimer. Having the flag on by\ndefault means that \"natively one shot\" timers can be either one\nshot or repeating timers with no additional work. Also, \"natively\nrepeating\" timers still work with the default setting, but with\npotentially many create and destroy calls.\n"},
  {(char*)"GetTimerEventResetsTimer", PyvtkGenericRenderWindowInteractor_GetTimerEventResetsTimer, METH_VARARGS,
   (char*)"V.GetTimerEventResetsTimer() -> int\nC++: int GetTimerEventResetsTimer()\n\nFlag that indicates whether the TimerEvent method should call\nResetTimer to simulate repeating timers with an endless stream of\none shot timers. By default this flag is on and all repeating\ntimers are implemented as a stream of sequential one shot timers.\nIf the observer of CreateTimerEvent actually creates a \"natively\nrepeating\" timer, setting this flag to off will prevent (perhaps\nmany many) unnecessary calls to ResetTimer. Having the flag on by\ndefault means that \"natively one shot\" timers can be either one\nshot or repeating timers with no additional work. Also, \"natively\nrepeating\" timers still work with the default setting, but with\npotentially many create and destroy calls.\n"},
  {(char*)"TimerEventResetsTimerOn", PyvtkGenericRenderWindowInteractor_TimerEventResetsTimerOn, METH_VARARGS,
   (char*)"V.TimerEventResetsTimerOn()\nC++: void TimerEventResetsTimerOn()\n\nFlag that indicates whether the TimerEvent method should call\nResetTimer to simulate repeating timers with an endless stream of\none shot timers. By default this flag is on and all repeating\ntimers are implemented as a stream of sequential one shot timers.\nIf the observer of CreateTimerEvent actually creates a \"natively\nrepeating\" timer, setting this flag to off will prevent (perhaps\nmany many) unnecessary calls to ResetTimer. Having the flag on by\ndefault means that \"natively one shot\" timers can be either one\nshot or repeating timers with no additional work. Also, \"natively\nrepeating\" timers still work with the default setting, but with\npotentially many create and destroy calls.\n"},
  {(char*)"TimerEventResetsTimerOff", PyvtkGenericRenderWindowInteractor_TimerEventResetsTimerOff, METH_VARARGS,
   (char*)"V.TimerEventResetsTimerOff()\nC++: void TimerEventResetsTimerOff()\n\nFlag that indicates whether the TimerEvent method should call\nResetTimer to simulate repeating timers with an endless stream of\none shot timers. By default this flag is on and all repeating\ntimers are implemented as a stream of sequential one shot timers.\nIf the observer of CreateTimerEvent actually creates a \"natively\nrepeating\" timer, setting this flag to off will prevent (perhaps\nmany many) unnecessary calls to ResetTimer. Having the flag on by\ndefault means that \"natively one shot\" timers can be either one\nshot or repeating timers with no additional work. Also, \"natively\nrepeating\" timers still work with the default setting, but with\npotentially many create and destroy calls.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkGenericRenderWindowInteractor_StaticNew()
{
  return vtkGenericRenderWindowInteractor::New();
}

PyObject *PyVTKClass_vtkGenericRenderWindowInteractorNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkGenericRenderWindowInteractor_StaticNew,
    PyvtkGenericRenderWindowInteractor_Methods,
    "vtkGenericRenderWindowInteractor", modulename,
    NULL, NULL,
    PyvtkGenericRenderWindowInteractor_Doc(),
    PyVTKClass_vtkRenderWindowInteractorNew(modulename));
  return cls;
}

const char **PyvtkGenericRenderWindowInteractor_Doc()
{
  static const char *docstring[] = {
    "vtkGenericRenderWindowInteractor - platform-independent programmable\nrender window interactor.\n\n",
    "Superclass: vtkRenderWindowInteractor\n\n",
    "vtkGenericRenderWindowInteractor provides a way to translate native\nmouse and keyboard events into vtk Events.   By calling the methods\non this class, vtk events will be invoked.   This will allow\nscripting languages to use vtkInteractorStyles and 3D widgets.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkGenericRenderWindowInteractor(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkGenericRenderWindowInteractorNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkGenericRenderWindowInteractor", o) != 0)
    {
    Py_DECREF(o);
    }

}

