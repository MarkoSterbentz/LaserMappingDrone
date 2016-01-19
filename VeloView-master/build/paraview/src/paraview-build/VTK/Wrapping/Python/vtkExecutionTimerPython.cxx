// python wrapper for vtkExecutionTimer
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkExecutionTimer.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkExecutionTimer(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkExecutionTimerNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkExecutionTimer_Doc();


static PyObject *
PyvtkExecutionTimer_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExecutionTimer *op = static_cast<vtkExecutionTimer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkExecutionTimer::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExecutionTimer_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExecutionTimer *op = static_cast<vtkExecutionTimer *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkExecutionTimer::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExecutionTimer_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExecutionTimer *op = static_cast<vtkExecutionTimer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkExecutionTimer *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkExecutionTimer::NewInstance());

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
PyvtkExecutionTimer_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkExecutionTimer *tempr = vtkExecutionTimer::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExecutionTimer_SetFilter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFilter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExecutionTimer *op = static_cast<vtkExecutionTimer *>(vp);

  vtkAlgorithm *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAlgorithm"))
    {
    if (ap.IsBound())
      {
      op->SetFilter(temp0);
      }
    else
      {
      op->vtkExecutionTimer::SetFilter(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExecutionTimer_GetFilter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFilter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExecutionTimer *op = static_cast<vtkExecutionTimer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkAlgorithm *tempr = (ap.IsBound() ?
      op->GetFilter() :
      op->vtkExecutionTimer::GetFilter());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExecutionTimer_GetElapsedCPUTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetElapsedCPUTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExecutionTimer *op = static_cast<vtkExecutionTimer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetElapsedCPUTime() :
      op->vtkExecutionTimer::GetElapsedCPUTime());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExecutionTimer_GetElapsedWallClockTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetElapsedWallClockTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExecutionTimer *op = static_cast<vtkExecutionTimer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetElapsedWallClockTime() :
      op->vtkExecutionTimer::GetElapsedWallClockTime());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkExecutionTimer_Methods[] = {
  {(char*)"GetClassName", PyvtkExecutionTimer_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkExecutionTimer_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkExecutionTimer_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkExecutionTimer\nC++: vtkExecutionTimer *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkExecutionTimer_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkExecutionTimer\nC++: vtkExecutionTimer *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetFilter", PyvtkExecutionTimer_SetFilter, METH_VARARGS,
   (char*)"V.SetFilter(vtkAlgorithm)\nC++: void SetFilter(vtkAlgorithm *filter)\n\nSet/get the filter to be monitored.  The only real constraint\nhere is that the vtkExecutive associated with the filter must\nfire StartEvent and EndEvent before and after the filter is\nexecuted.  All VTK executives should do this.\n"},
  {(char*)"GetFilter", PyvtkExecutionTimer_GetFilter, METH_VARARGS,
   (char*)"V.GetFilter() -> vtkAlgorithm\nC++: vtkAlgorithm *GetFilter()\n\nSet/get the filter to be monitored.  The only real constraint\nhere is that the vtkExecutive associated with the filter must\nfire StartEvent and EndEvent before and after the filter is\nexecuted.  All VTK executives should do this.\n"},
  {(char*)"GetElapsedCPUTime", PyvtkExecutionTimer_GetElapsedCPUTime, METH_VARARGS,
   (char*)"V.GetElapsedCPUTime() -> float\nC++: double GetElapsedCPUTime()\n\nGet the total CPU time (in seconds) that elapsed between\nStartEvent and EndEvent.  This is undefined before the filter has\nfinished executing.\n"},
  {(char*)"GetElapsedWallClockTime", PyvtkExecutionTimer_GetElapsedWallClockTime, METH_VARARGS,
   (char*)"V.GetElapsedWallClockTime() -> float\nC++: double GetElapsedWallClockTime()\n\nGet the total wall clock time (in seconds) that elapsed between\nStartEvent and EndEvent.  This is undefined before the filter has\nfinished executing.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkExecutionTimer_StaticNew()
{
  return vtkExecutionTimer::New();
}

PyObject *PyVTKClass_vtkExecutionTimerNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkExecutionTimer_StaticNew,
    PyvtkExecutionTimer_Methods,
    "vtkExecutionTimer", modulename,
    NULL, NULL,
    PyvtkExecutionTimer_Doc(),
    PyVTKClass_vtkObjectNew(modulename));
  return cls;
}

const char **PyvtkExecutionTimer_Doc()
{
  static const char *docstring[] = {
    "vtkExecutionTimer - Time filter execution\n\n",
    "Superclass: vtkObject\n\n",
    "This object monitors a single filter for StartEvent and EndEvent.\nEach time it hears StartEvent it records the time.  Each time it\nhears EndEvent it measures the elapsed time (both CPU and wall-clock)\nsince the most recent StartEvent.  Internally we use vtkTimerLog for\nmeasurements.\n\nBy default we simply store the elapsed time.  You are welcome to\nsubclass and override TimerFinished() to do anythi",
    "ng you want.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkExecutionTimer(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkExecutionTimerNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkExecutionTimer", o) != 0)
    {
    Py_DECREF(o);
    }

}

