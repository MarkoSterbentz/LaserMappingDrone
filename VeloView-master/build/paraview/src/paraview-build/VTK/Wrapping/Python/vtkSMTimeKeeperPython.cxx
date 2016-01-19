// python wrapper for vtkSMTimeKeeper
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkSMTimeKeeper.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkSMTimeKeeper(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkSMTimeKeeperNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkSMTimeKeeper_Doc();


static PyObject *
PyvtkSMTimeKeeper_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMTimeKeeper *op = static_cast<vtkSMTimeKeeper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkSMTimeKeeper::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMTimeKeeper_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMTimeKeeper *op = static_cast<vtkSMTimeKeeper *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSMTimeKeeper::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMTimeKeeper_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMTimeKeeper *op = static_cast<vtkSMTimeKeeper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkSMTimeKeeper *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSMTimeKeeper::NewInstance());

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
PyvtkSMTimeKeeper_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkSMTimeKeeper *tempr = vtkSMTimeKeeper::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMTimeKeeper_SetTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMTimeKeeper *op = static_cast<vtkSMTimeKeeper *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetTime(temp0);
      }
    else
      {
      op->vtkSMTimeKeeper::SetTime(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMTimeKeeper_GetTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMTimeKeeper *op = static_cast<vtkSMTimeKeeper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetTime() :
      op->vtkSMTimeKeeper::GetTime());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMTimeKeeper_AddView(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddView");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMTimeKeeper *op = static_cast<vtkSMTimeKeeper *>(vp);

  vtkSMProxy *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMProxy"))
    {
    if (ap.IsBound())
      {
      op->AddView(temp0);
      }
    else
      {
      op->vtkSMTimeKeeper::AddView(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMTimeKeeper_RemoveView(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveView");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMTimeKeeper *op = static_cast<vtkSMTimeKeeper *>(vp);

  vtkSMProxy *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMProxy"))
    {
    if (ap.IsBound())
      {
      op->RemoveView(temp0);
      }
    else
      {
      op->vtkSMTimeKeeper::RemoveView(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMTimeKeeper_RemoveAllViews(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveAllViews");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMTimeKeeper *op = static_cast<vtkSMTimeKeeper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->RemoveAllViews();
      }
    else
      {
      op->vtkSMTimeKeeper::RemoveAllViews();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMTimeKeeper_AddTimeSource(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddTimeSource");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMTimeKeeper *op = static_cast<vtkSMTimeKeeper *>(vp);

  vtkSMSourceProxy *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMSourceProxy"))
    {
    if (ap.IsBound())
      {
      op->AddTimeSource(temp0);
      }
    else
      {
      op->vtkSMTimeKeeper::AddTimeSource(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMTimeKeeper_RemoveTimeSource(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveTimeSource");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMTimeKeeper *op = static_cast<vtkSMTimeKeeper *>(vp);

  vtkSMSourceProxy *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMSourceProxy"))
    {
    if (ap.IsBound())
      {
      op->RemoveTimeSource(temp0);
      }
    else
      {
      op->vtkSMTimeKeeper::RemoveTimeSource(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMTimeKeeper_RemoveAllTimeSources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveAllTimeSources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMTimeKeeper *op = static_cast<vtkSMTimeKeeper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->RemoveAllTimeSources();
      }
    else
      {
      op->vtkSMTimeKeeper::RemoveAllTimeSources();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMTimeKeeper_AddSuppressedTimeSource(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddSuppressedTimeSource");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMTimeKeeper *op = static_cast<vtkSMTimeKeeper *>(vp);

  vtkSMSourceProxy *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMSourceProxy"))
    {
    if (ap.IsBound())
      {
      op->AddSuppressedTimeSource(temp0);
      }
    else
      {
      op->vtkSMTimeKeeper::AddSuppressedTimeSource(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMTimeKeeper_RemoveSuppressedTimeSource(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveSuppressedTimeSource");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMTimeKeeper *op = static_cast<vtkSMTimeKeeper *>(vp);

  vtkSMSourceProxy *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMSourceProxy"))
    {
    if (ap.IsBound())
      {
      op->RemoveSuppressedTimeSource(temp0);
      }
    else
      {
      op->vtkSMTimeKeeper::RemoveSuppressedTimeSource(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkSMTimeKeeper_Methods[] = {
  {(char*)"GetClassName", PyvtkSMTimeKeeper_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkSMTimeKeeper_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkSMTimeKeeper_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkSMTimeKeeper\nC++: vtkSMTimeKeeper *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkSMTimeKeeper_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkSMTimeKeeper\nC++: vtkSMTimeKeeper *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetTime", PyvtkSMTimeKeeper_SetTime, METH_VARARGS,
   (char*)"V.SetTime(float)\nC++: void SetTime(double time)\n\nGet/Set the pipeline time.\n"},
  {(char*)"GetTime", PyvtkSMTimeKeeper_GetTime, METH_VARARGS,
   (char*)"V.GetTime() -> float\nC++: double GetTime()\n\nGet/Set the pipeline time.\n"},
  {(char*)"AddView", PyvtkSMTimeKeeper_AddView, METH_VARARGS,
   (char*)"V.AddView(vtkSMProxy)\nC++: void AddView(vtkSMProxy *)\n\nAdd/Remove view proxy linked to this time keeper.\n"},
  {(char*)"RemoveView", PyvtkSMTimeKeeper_RemoveView, METH_VARARGS,
   (char*)"V.RemoveView(vtkSMProxy)\nC++: void RemoveView(vtkSMProxy *)\n\nAdd/Remove view proxy linked to this time keeper.\n"},
  {(char*)"RemoveAllViews", PyvtkSMTimeKeeper_RemoveAllViews, METH_VARARGS,
   (char*)"V.RemoveAllViews()\nC++: void RemoveAllViews()\n\nAdd/Remove view proxy linked to this time keeper.\n"},
  {(char*)"AddTimeSource", PyvtkSMTimeKeeper_AddTimeSource, METH_VARARGS,
   (char*)"V.AddTimeSource(vtkSMSourceProxy)\nC++: void AddTimeSource(vtkSMSourceProxy *)\n\nList of proxies that provide time. TimestepValues property has a\nset of timesteps provided by all the sources added to this\nproperty alone.\n"},
  {(char*)"RemoveTimeSource", PyvtkSMTimeKeeper_RemoveTimeSource, METH_VARARGS,
   (char*)"V.RemoveTimeSource(vtkSMSourceProxy)\nC++: void RemoveTimeSource(vtkSMSourceProxy *)\n\nList of proxies that provide time. TimestepValues property has a\nset of timesteps provided by all the sources added to this\nproperty alone.\n"},
  {(char*)"RemoveAllTimeSources", PyvtkSMTimeKeeper_RemoveAllTimeSources, METH_VARARGS,
   (char*)"V.RemoveAllTimeSources()\nC++: void RemoveAllTimeSources()\n\nList of proxies that provide time. TimestepValues property has a\nset of timesteps provided by all the sources added to this\nproperty alone.\n"},
  {(char*)"AddSuppressedTimeSource", PyvtkSMTimeKeeper_AddSuppressedTimeSource, METH_VARARGS,
   (char*)"V.AddSuppressedTimeSource(vtkSMSourceProxy)\nC++: void AddSuppressedTimeSource(vtkSMSourceProxy *)\n\nList of proxies that provide time. TimestepValues property has a\nset of timesteps provided by all the sources added to this\nproperty alone.\n"},
  {(char*)"RemoveSuppressedTimeSource", PyvtkSMTimeKeeper_RemoveSuppressedTimeSource, METH_VARARGS,
   (char*)"V.RemoveSuppressedTimeSource(vtkSMSourceProxy)\nC++: void RemoveSuppressedTimeSource(vtkSMSourceProxy *)\n\nList of proxies that provide time. TimestepValues property has a\nset of timesteps provided by all the sources added to this\nproperty alone.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkSMTimeKeeper_StaticNew()
{
  return vtkSMTimeKeeper::New();
}

PyObject *PyVTKClass_vtkSMTimeKeeperNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkSMTimeKeeper_StaticNew,
    PyvtkSMTimeKeeper_Methods,
    "vtkSMTimeKeeper", modulename,
    NULL, NULL,
    PyvtkSMTimeKeeper_Doc(),
    PyVTKClass_vtkObjectNew(modulename));
  return cls;
}

const char **PyvtkSMTimeKeeper_Doc()
{
  static const char *docstring[] = {
    "vtkSMTimeKeeper - a time keeper is used to keep track of the\n\n",
    "Superclass: vtkObject\n\n",
    "TimeKeeper can be thought of as a application wide clock. In\nParaView, all views are registered with the TimeKeeper (using\nAddView()) so that all the views render data at the same global time.\n\nTimeKeeper also keeps track of time steps and continuous time ranges\nprovided by sources/readers/filters. This expects that the readers\nhave a \"TimestepValues\" and/or \"TimeRange\" properties from which the\nt",
    "ime steps and time ranges provided by the reader can be obtained.\nAll sources whose time steps/time ranges must be noted by the time\nkeeper need to be registered with the time keeper using\nAddTimeSource(). ParaView automatically registers all created\nsources/filters/readers with the time keeper. The time steps and time\nranges are made accessible by two information properties\n\"TimestepValues\" and \"",
    "TimeRange\" on the TimeKeeper proxy.\n\nTo change the time shown by all the views, simply change the \"Time\"\nproperty on the time keeper proxy (don't directly call SetTime()\nsince otherwise undo/redo, state etc. will not work as expected).\n\nThis proxy has no VTK objects that it creates on the server.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkSMTimeKeeper(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkSMTimeKeeperNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkSMTimeKeeper", o) != 0)
    {
    Py_DECREF(o);
    }

}

