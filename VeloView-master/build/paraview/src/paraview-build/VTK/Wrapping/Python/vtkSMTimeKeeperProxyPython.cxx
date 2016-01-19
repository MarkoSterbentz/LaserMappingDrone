// python wrapper for vtkSMTimeKeeperProxy
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkSMTimeKeeperProxy.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkSMTimeKeeperProxy(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkSMTimeKeeperProxyNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkSMProxyNew
extern "C" { PyObject *PyVTKClass_vtkSMProxyNew(const char *); }
#define DECLARED_PyVTKClass_vtkSMProxyNew
#endif

static const char **PyvtkSMTimeKeeperProxy_Doc();


static PyObject *
PyvtkSMTimeKeeperProxy_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMTimeKeeperProxy *op = static_cast<vtkSMTimeKeeperProxy *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkSMTimeKeeperProxy::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMTimeKeeperProxy_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMTimeKeeperProxy *op = static_cast<vtkSMTimeKeeperProxy *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSMTimeKeeperProxy::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMTimeKeeperProxy_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMTimeKeeperProxy *op = static_cast<vtkSMTimeKeeperProxy *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkSMTimeKeeperProxy *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSMTimeKeeperProxy::NewInstance());

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
PyvtkSMTimeKeeperProxy_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkSMTimeKeeperProxy *tempr = vtkSMTimeKeeperProxy::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMTimeKeeperProxy_AddTimeSource_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddTimeSource");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMTimeKeeperProxy *op = static_cast<vtkSMTimeKeeperProxy *>(vp);

  vtkSMProxy *temp0 = NULL;
  bool temp1 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkSMProxy") &&
      ap.GetValue(temp1))
    {
    bool tempr = (ap.IsBound() ?
      op->AddTimeSource(temp0, temp1) :
      op->vtkSMTimeKeeperProxy::AddTimeSource(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkSMTimeKeeperProxy_AddTimeSource_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "AddTimeSource");

  vtkSMProxy *temp0 = NULL;
  vtkSMProxy *temp1 = NULL;
  bool temp2 = false;
  PyObject *result = NULL;

  if (ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkSMProxy") &&
      ap.GetVTKObject(temp1, "vtkSMProxy") &&
      ap.GetValue(temp2))
    {
    bool tempr = vtkSMTimeKeeperProxy::AddTimeSource(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkSMTimeKeeperProxy_AddTimeSource(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
    {
    case 2:
      return PyvtkSMTimeKeeperProxy_AddTimeSource_s1(self, args);
    case 3:
      return PyvtkSMTimeKeeperProxy_AddTimeSource_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "AddTimeSource");
  return NULL;
}



static PyObject *
PyvtkSMTimeKeeperProxy_RemoveTimeSource_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveTimeSource");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMTimeKeeperProxy *op = static_cast<vtkSMTimeKeeperProxy *>(vp);

  vtkSMProxy *temp0 = NULL;
  bool temp1 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkSMProxy") &&
      ap.GetValue(temp1))
    {
    bool tempr = (ap.IsBound() ?
      op->RemoveTimeSource(temp0, temp1) :
      op->vtkSMTimeKeeperProxy::RemoveTimeSource(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkSMTimeKeeperProxy_RemoveTimeSource_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "RemoveTimeSource");

  vtkSMProxy *temp0 = NULL;
  vtkSMProxy *temp1 = NULL;
  bool temp2 = false;
  PyObject *result = NULL;

  if (ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkSMProxy") &&
      ap.GetVTKObject(temp1, "vtkSMProxy") &&
      ap.GetValue(temp2))
    {
    bool tempr = vtkSMTimeKeeperProxy::RemoveTimeSource(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkSMTimeKeeperProxy_RemoveTimeSource(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
    {
    case 2:
      return PyvtkSMTimeKeeperProxy_RemoveTimeSource_s1(self, args);
    case 3:
      return PyvtkSMTimeKeeperProxy_RemoveTimeSource_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "RemoveTimeSource");
  return NULL;
}



static PyObject *
PyvtkSMTimeKeeperProxy_IsTimeSourceTracked_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsTimeSourceTracked");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMTimeKeeperProxy *op = static_cast<vtkSMTimeKeeperProxy *>(vp);

  vtkSMProxy *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMProxy"))
    {
    bool tempr = (ap.IsBound() ?
      op->IsTimeSourceTracked(temp0) :
      op->vtkSMTimeKeeperProxy::IsTimeSourceTracked(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkSMTimeKeeperProxy_IsTimeSourceTracked_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTimeSourceTracked");

  vtkSMProxy *temp0 = NULL;
  vtkSMProxy *temp1 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkSMProxy") &&
      ap.GetVTKObject(temp1, "vtkSMProxy"))
    {
    bool tempr = vtkSMTimeKeeperProxy::IsTimeSourceTracked(temp0, temp1);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkSMTimeKeeperProxy_IsTimeSourceTracked(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
    {
    case 1:
      return PyvtkSMTimeKeeperProxy_IsTimeSourceTracked_s1(self, args);
    case 2:
      return PyvtkSMTimeKeeperProxy_IsTimeSourceTracked_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "IsTimeSourceTracked");
  return NULL;
}



static PyObject *
PyvtkSMTimeKeeperProxy_SetSuppressTimeSource_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSuppressTimeSource");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMTimeKeeperProxy *op = static_cast<vtkSMTimeKeeperProxy *>(vp);

  vtkSMProxy *temp0 = NULL;
  bool temp1 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkSMProxy") &&
      ap.GetValue(temp1))
    {
    bool tempr = (ap.IsBound() ?
      op->SetSuppressTimeSource(temp0, temp1) :
      op->vtkSMTimeKeeperProxy::SetSuppressTimeSource(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkSMTimeKeeperProxy_SetSuppressTimeSource_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SetSuppressTimeSource");

  vtkSMProxy *temp0 = NULL;
  vtkSMProxy *temp1 = NULL;
  bool temp2 = false;
  PyObject *result = NULL;

  if (ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkSMProxy") &&
      ap.GetVTKObject(temp1, "vtkSMProxy") &&
      ap.GetValue(temp2))
    {
    bool tempr = vtkSMTimeKeeperProxy::SetSuppressTimeSource(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkSMTimeKeeperProxy_SetSuppressTimeSource(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
    {
    case 2:
      return PyvtkSMTimeKeeperProxy_SetSuppressTimeSource_s1(self, args);
    case 3:
      return PyvtkSMTimeKeeperProxy_SetSuppressTimeSource_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetSuppressTimeSource");
  return NULL;
}



static PyObject *
PyvtkSMTimeKeeperProxy_GetLowerBoundTimeStep_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLowerBoundTimeStep");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMTimeKeeperProxy *op = static_cast<vtkSMTimeKeeperProxy *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    double tempr = (ap.IsBound() ?
      op->GetLowerBoundTimeStep(temp0) :
      op->vtkSMTimeKeeperProxy::GetLowerBoundTimeStep(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkSMTimeKeeperProxy_GetLowerBoundTimeStep_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetLowerBoundTimeStep");

  vtkSMProxy *temp0 = NULL;
  double temp1;
  PyObject *result = NULL;

  if (ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkSMProxy") &&
      ap.GetValue(temp1))
    {
    double tempr = vtkSMTimeKeeperProxy::GetLowerBoundTimeStep(temp0, temp1);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkSMTimeKeeperProxy_GetLowerBoundTimeStep(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
    {
    case 1:
      return PyvtkSMTimeKeeperProxy_GetLowerBoundTimeStep_s1(self, args);
    case 2:
      return PyvtkSMTimeKeeperProxy_GetLowerBoundTimeStep_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetLowerBoundTimeStep");
  return NULL;
}



static PyObject *
PyvtkSMTimeKeeperProxy_GetLowerBoundTimeStepIndex_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLowerBoundTimeStepIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMTimeKeeperProxy *op = static_cast<vtkSMTimeKeeperProxy *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->GetLowerBoundTimeStepIndex(temp0) :
      op->vtkSMTimeKeeperProxy::GetLowerBoundTimeStepIndex(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkSMTimeKeeperProxy_GetLowerBoundTimeStepIndex_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetLowerBoundTimeStepIndex");

  vtkSMProxy *temp0 = NULL;
  double temp1;
  PyObject *result = NULL;

  if (ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkSMProxy") &&
      ap.GetValue(temp1))
    {
    int tempr = vtkSMTimeKeeperProxy::GetLowerBoundTimeStepIndex(temp0, temp1);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkSMTimeKeeperProxy_GetLowerBoundTimeStepIndex(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
    {
    case 1:
      return PyvtkSMTimeKeeperProxy_GetLowerBoundTimeStepIndex_s1(self, args);
    case 2:
      return PyvtkSMTimeKeeperProxy_GetLowerBoundTimeStepIndex_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetLowerBoundTimeStepIndex");
  return NULL;
}


static PyMethodDef PyvtkSMTimeKeeperProxy_Methods[] = {
  {(char*)"GetClassName", PyvtkSMTimeKeeperProxy_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkSMTimeKeeperProxy_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkSMTimeKeeperProxy_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkSMTimeKeeperProxy\nC++: vtkSMTimeKeeperProxy *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkSMTimeKeeperProxy_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkSMTimeKeeperProxy\nC++: vtkSMTimeKeeperProxy *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"AddTimeSource", PyvtkSMTimeKeeperProxy_AddTimeSource, METH_VARARGS,
   (char*)"V.AddTimeSource(vtkSMProxy, bool) -> bool\nC++: virtual bool AddTimeSource(vtkSMProxy *proxy,\n    bool suppress_input)\nV.AddTimeSource(vtkSMProxy, vtkSMProxy, bool) -> bool\nC++: static bool AddTimeSource(vtkSMProxy *timeKeeper,\n    vtkSMProxy *proxy, bool suppress_input)\n\nTrack timesteps provided by a source. If suppress_input is true,\nbefore adding the proxy, if the \\r proxy has producers those will\nbe removed from the time sources i.e. we'll ignore timesteps from\nthe input.\n"},
  {(char*)"RemoveTimeSource", PyvtkSMTimeKeeperProxy_RemoveTimeSource, METH_VARARGS,
   (char*)"V.RemoveTimeSource(vtkSMProxy, bool) -> bool\nC++: virtual bool RemoveTimeSource(vtkSMProxy *proxy,\n    bool unsuppress_input)\nV.RemoveTimeSource(vtkSMProxy, vtkSMProxy, bool) -> bool\nC++: static bool RemoveTimeSource(vtkSMProxy *timeKeeper,\n    vtkSMProxy *proxy, bool unsuppress_input)\n\nRemove a particular time source.\n"},
  {(char*)"IsTimeSourceTracked", PyvtkSMTimeKeeperProxy_IsTimeSourceTracked, METH_VARARGS,
   (char*)"V.IsTimeSourceTracked(vtkSMProxy) -> bool\nC++: virtual bool IsTimeSourceTracked(vtkSMProxy *proxy)\nV.IsTimeSourceTracked(vtkSMProxy, vtkSMProxy) -> bool\nC++: static bool IsTimeSourceTracked(vtkSMProxy *timeKeeper,\n    vtkSMProxy *proxy)\n\nReturns true if the proxy has been added to time sources and not\nsuppressed.\n"},
  {(char*)"SetSuppressTimeSource", PyvtkSMTimeKeeperProxy_SetSuppressTimeSource, METH_VARARGS,
   (char*)"V.SetSuppressTimeSource(vtkSMProxy, bool) -> bool\nC++: virtual bool SetSuppressTimeSource(vtkSMProxy *proxy,\n    bool suppress)\nV.SetSuppressTimeSource(vtkSMProxy, vtkSMProxy, bool) -> bool\nC++: static bool SetSuppressTimeSource(vtkSMProxy *timeKeeper,\n    vtkSMProxy *proxy, bool suppress)\n\nSet whether to suppress a time source that has been added to the\ntime keeper. Suppressing a source results in its time being\nignored by the time keeper.\n"},
  {(char*)"GetLowerBoundTimeStep", PyvtkSMTimeKeeperProxy_GetLowerBoundTimeStep, METH_VARARGS,
   (char*)"V.GetLowerBoundTimeStep(float) -> float\nC++: virtual double GetLowerBoundTimeStep(double value)\nV.GetLowerBoundTimeStep(vtkSMProxy, float) -> float\nC++: static double GetLowerBoundTimeStep(vtkSMProxy *timeKeeper,\n    double value)\n\nReturns a time value after snapping to a lower-bound in the\ncurrent timesteps.\n"},
  {(char*)"GetLowerBoundTimeStepIndex", PyvtkSMTimeKeeperProxy_GetLowerBoundTimeStepIndex, METH_VARARGS,
   (char*)"V.GetLowerBoundTimeStepIndex(float) -> int\nC++: virtual int GetLowerBoundTimeStepIndex(double value)\nV.GetLowerBoundTimeStepIndex(vtkSMProxy, float) -> int\nC++: static int GetLowerBoundTimeStepIndex(vtkSMProxy *timeKeeper,\n     double value)\n\nReturns the index for the lower bound of the time specified in\ncurrent timestep values, if possible. If there are no timestep\nvalues, returns 0.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkSMTimeKeeperProxy_StaticNew()
{
  return vtkSMTimeKeeperProxy::New();
}

PyObject *PyVTKClass_vtkSMTimeKeeperProxyNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkSMTimeKeeperProxy_StaticNew,
    PyvtkSMTimeKeeperProxy_Methods,
    "vtkSMTimeKeeperProxy", modulename,
    NULL, NULL,
    PyvtkSMTimeKeeperProxy_Doc(),
    PyVTKClass_vtkSMProxyNew(modulename));
  return cls;
}

const char **PyvtkSMTimeKeeperProxy_Doc()
{
  static const char *docstring[] = {
    "vtkSMTimeKeeperProxy\n\n",
    "Superclass: vtkSMProxy\n\n",
    "We simply pass the TimestepValues and TimeRange properties to the\nclient-side vtkSMTimeKeeper instance so that it can keep those\nup-to-date.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkSMTimeKeeperProxy(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkSMTimeKeeperProxyNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkSMTimeKeeperProxy", o) != 0)
    {
    Py_DECREF(o);
    }

}

