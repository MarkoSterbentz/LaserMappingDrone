// python wrapper for vtkTimerLog
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkTimerLog.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkTimerLog(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkTimerLogNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkTimerLog_Doc();


static PyObject *
PyvtkTimerLog_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTimerLog *op = static_cast<vtkTimerLog *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkTimerLog::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTimerLog_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTimerLog *op = static_cast<vtkTimerLog *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkTimerLog::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTimerLog_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTimerLog *op = static_cast<vtkTimerLog *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkTimerLog *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkTimerLog::NewInstance());

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
PyvtkTimerLog_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkTimerLog *tempr = vtkTimerLog::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTimerLog_SetLogging(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SetLogging");

  int temp0;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkTimerLog::SetLogging(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTimerLog_GetLogging(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetLogging");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    int tempr = vtkTimerLog::GetLogging();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTimerLog_LoggingOn(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "LoggingOn");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkTimerLog::LoggingOn();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTimerLog_LoggingOff(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "LoggingOff");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkTimerLog::LoggingOff();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTimerLog_SetMaxEntries(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SetMaxEntries");

  int temp0;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkTimerLog::SetMaxEntries(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTimerLog_GetMaxEntries(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetMaxEntries");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    int tempr = vtkTimerLog::GetMaxEntries();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTimerLog_FormatAndMarkEvent(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "FormatAndMarkEvent");

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkTimerLog::FormatAndMarkEvent(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTimerLog_DumpLog(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "DumpLog");

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkTimerLog::DumpLog(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTimerLog_MarkStartEvent(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "MarkStartEvent");

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkTimerLog::MarkStartEvent(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTimerLog_MarkEndEvent(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "MarkEndEvent");

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkTimerLog::MarkEndEvent(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTimerLog_GetNumberOfEvents(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfEvents");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    int tempr = vtkTimerLog::GetNumberOfEvents();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTimerLog_GetEventIndent(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetEventIndent");

  int temp0;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = vtkTimerLog::GetEventIndent(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTimerLog_GetEventWallTime(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetEventWallTime");

  int temp0;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    double tempr = vtkTimerLog::GetEventWallTime(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTimerLog_GetEventString(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetEventString");

  int temp0;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    const char *tempr = vtkTimerLog::GetEventString(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTimerLog_MarkEvent(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "MarkEvent");

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkTimerLog::MarkEvent(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTimerLog_ResetLog(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "ResetLog");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkTimerLog::ResetLog();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTimerLog_AllocateLog(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "AllocateLog");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkTimerLog::AllocateLog();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTimerLog_CleanupLog(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "CleanupLog");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkTimerLog::CleanupLog();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTimerLog_GetUniversalTime(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetUniversalTime");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    double tempr = vtkTimerLog::GetUniversalTime();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTimerLog_GetCPUTime(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetCPUTime");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    double tempr = vtkTimerLog::GetCPUTime();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTimerLog_StartTimer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StartTimer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTimerLog *op = static_cast<vtkTimerLog *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->StartTimer();
      }
    else
      {
      op->vtkTimerLog::StartTimer();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTimerLog_StopTimer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StopTimer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTimerLog *op = static_cast<vtkTimerLog *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->StopTimer();
      }
    else
      {
      op->vtkTimerLog::StopTimer();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTimerLog_GetElapsedTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetElapsedTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTimerLog *op = static_cast<vtkTimerLog *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetElapsedTime() :
      op->vtkTimerLog::GetElapsedTime());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkTimerLog_Methods[] = {
  {(char*)"GetClassName", PyvtkTimerLog_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkTimerLog_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkTimerLog_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkTimerLog\nC++: vtkTimerLog *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkTimerLog_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkTimerLog\nC++: vtkTimerLog *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetLogging", PyvtkTimerLog_SetLogging, METH_VARARGS | METH_STATIC,
   (char*)"V.SetLogging(int)\nC++: static void SetLogging(int v)\n\nThis flag will turn loging of events off or on. By default,\nlogging is on.\n"},
  {(char*)"GetLogging", PyvtkTimerLog_GetLogging, METH_VARARGS | METH_STATIC,
   (char*)"V.GetLogging() -> int\nC++: static int GetLogging()\n\nThis flag will turn loging of events off or on. By default,\nlogging is on.\n"},
  {(char*)"LoggingOn", PyvtkTimerLog_LoggingOn, METH_VARARGS | METH_STATIC,
   (char*)"V.LoggingOn()\nC++: static void LoggingOn()\n\nThis flag will turn loging of events off or on. By default,\nlogging is on.\n"},
  {(char*)"LoggingOff", PyvtkTimerLog_LoggingOff, METH_VARARGS | METH_STATIC,
   (char*)"V.LoggingOff()\nC++: static void LoggingOff()\n\nThis flag will turn loging of events off or on. By default,\nlogging is on.\n"},
  {(char*)"SetMaxEntries", PyvtkTimerLog_SetMaxEntries, METH_VARARGS | METH_STATIC,
   (char*)"V.SetMaxEntries(int)\nC++: static void SetMaxEntries(int a)\n\nSet/Get the maximum number of entries allowed in the timer log\n"},
  {(char*)"GetMaxEntries", PyvtkTimerLog_GetMaxEntries, METH_VARARGS | METH_STATIC,
   (char*)"V.GetMaxEntries() -> int\nC++: static int GetMaxEntries()\n\nSet/Get the maximum number of entries allowed in the timer log\n"},
  {(char*)"FormatAndMarkEvent", PyvtkTimerLog_FormatAndMarkEvent, METH_VARARGS | METH_STATIC,
   (char*)"V.FormatAndMarkEvent(string)\nC++: static void FormatAndMarkEvent(const char *EventString, ...)\n\nRecord a timing event.  The event is represented by a formatted\nstring.\n"},
  {(char*)"DumpLog", PyvtkTimerLog_DumpLog, METH_VARARGS | METH_STATIC,
   (char*)"V.DumpLog(string)\nC++: static void DumpLog(const char *filename)\n\nWrite the timing table out to a file.  Calculate some helpful\nstatistics (deltas and  percentages) in the process.\n"},
  {(char*)"MarkStartEvent", PyvtkTimerLog_MarkStartEvent, METH_VARARGS | METH_STATIC,
   (char*)"V.MarkStartEvent(string)\nC++: static void MarkStartEvent(const char *EventString)\n\nI want to time events, so I am creating this interface to mark\nevents that have a start and an end.  These events can be,\nnested. The standard Dumplog ignores the indents.\n"},
  {(char*)"MarkEndEvent", PyvtkTimerLog_MarkEndEvent, METH_VARARGS | METH_STATIC,
   (char*)"V.MarkEndEvent(string)\nC++: static void MarkEndEvent(const char *EventString)\n\nI want to time events, so I am creating this interface to mark\nevents that have a start and an end.  These events can be,\nnested. The standard Dumplog ignores the indents.\n"},
  {(char*)"GetNumberOfEvents", PyvtkTimerLog_GetNumberOfEvents, METH_VARARGS | METH_STATIC,
   (char*)"V.GetNumberOfEvents() -> int\nC++: static int GetNumberOfEvents()\n\nProgramatic access to events.  Indexed from 0 to num-1.\n"},
  {(char*)"GetEventIndent", PyvtkTimerLog_GetEventIndent, METH_VARARGS | METH_STATIC,
   (char*)"V.GetEventIndent(int) -> int\nC++: static int GetEventIndent(int i)\n\nProgramatic access to events.  Indexed from 0 to num-1.\n"},
  {(char*)"GetEventWallTime", PyvtkTimerLog_GetEventWallTime, METH_VARARGS | METH_STATIC,
   (char*)"V.GetEventWallTime(int) -> float\nC++: static double GetEventWallTime(int i)\n\nProgramatic access to events.  Indexed from 0 to num-1.\n"},
  {(char*)"GetEventString", PyvtkTimerLog_GetEventString, METH_VARARGS | METH_STATIC,
   (char*)"V.GetEventString(int) -> string\nC++: static const char *GetEventString(int i)\n\nProgramatic access to events.  Indexed from 0 to num-1.\n"},
  {(char*)"MarkEvent", PyvtkTimerLog_MarkEvent, METH_VARARGS | METH_STATIC,
   (char*)"V.MarkEvent(string)\nC++: static void MarkEvent(const char *EventString)\n\nRecord a timing event and capture wall time and cpu ticks.\n"},
  {(char*)"ResetLog", PyvtkTimerLog_ResetLog, METH_VARARGS | METH_STATIC,
   (char*)"V.ResetLog()\nC++: static void ResetLog()\n\nClear the timing table.  walltime and cputime will also be set to\nzero when the first new event is recorded.\n"},
  {(char*)"AllocateLog", PyvtkTimerLog_AllocateLog, METH_VARARGS | METH_STATIC,
   (char*)"V.AllocateLog()\nC++: static void AllocateLog()\n\nAllocate timing table with MaxEntries elements.\n"},
  {(char*)"CleanupLog", PyvtkTimerLog_CleanupLog, METH_VARARGS | METH_STATIC,
   (char*)"V.CleanupLog()\nC++: static void CleanupLog()\n\nRemove timer log.\n"},
  {(char*)"GetUniversalTime", PyvtkTimerLog_GetUniversalTime, METH_VARARGS | METH_STATIC,
   (char*)"V.GetUniversalTime() -> float\nC++: static double GetUniversalTime()\n\nReturns the elapsed number of seconds since January 1, 1970. This\nis also called Universal Coordinated Time.\n"},
  {(char*)"GetCPUTime", PyvtkTimerLog_GetCPUTime, METH_VARARGS | METH_STATIC,
   (char*)"V.GetCPUTime() -> float\nC++: static double GetCPUTime()\n\nReturns the CPU time for this process On Win32 platforms this\nactually returns wall time.\n"},
  {(char*)"StartTimer", PyvtkTimerLog_StartTimer, METH_VARARGS,
   (char*)"V.StartTimer()\nC++: void StartTimer()\n\nSet the StartTime to the current time. Used with\nGetElapsedTime().\n"},
  {(char*)"StopTimer", PyvtkTimerLog_StopTimer, METH_VARARGS,
   (char*)"V.StopTimer()\nC++: void StopTimer()\n\nSets EndTime to the current time. Used with GetElapsedTime().\n"},
  {(char*)"GetElapsedTime", PyvtkTimerLog_GetElapsedTime, METH_VARARGS,
   (char*)"V.GetElapsedTime() -> float\nC++: double GetElapsedTime()\n\nReturns the difference between StartTime and EndTime as a\ndoubleing point value indicating the elapsed time in seconds.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkTimerLog_StaticNew()
{
  return vtkTimerLog::New();
}

PyObject *PyVTKClass_vtkTimerLogNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkTimerLog_StaticNew,
    PyvtkTimerLog_Methods,
    "vtkTimerLog", modulename,
    NULL, NULL,
    PyvtkTimerLog_Doc(),
    PyVTKClass_vtkObjectNew(modulename));
  return cls;
}

const char **PyvtkTimerLog_Doc()
{
  static const char *docstring[] = {
    "vtkTimerLog - Timer support and logging\n\n",
    "Superclass: vtkObject\n\n",
    "vtkTimerLog contains walltime and cputime measurements associated\nwith a given event.  These results can be later analyzed when \"dumping\nout\" the table.\n\nIn addition, vtkTimerLog allows the user to simply get the current\ntime, and to start/stop a simple timer separate from the timing table\nlogging.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkTimerLog(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkTimerLogNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkTimerLog", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(40);
  if (o)
    {
    PyDict_SetItemString(dict, (char *)"VTK_LOG_EVENT_LENGTH", o);
    Py_DECREF(o);
    }
}

