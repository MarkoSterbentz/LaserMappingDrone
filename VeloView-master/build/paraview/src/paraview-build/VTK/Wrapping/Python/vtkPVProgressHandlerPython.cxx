// python wrapper for vtkPVProgressHandler
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkPVProgressHandler.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkPVProgressHandler(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkPVProgressHandlerNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkPVProgressHandler_Doc();


static PyObject *
PyvtkPVProgressHandler_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVProgressHandler *op = static_cast<vtkPVProgressHandler *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkPVProgressHandler::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVProgressHandler_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVProgressHandler *op = static_cast<vtkPVProgressHandler *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPVProgressHandler::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVProgressHandler_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVProgressHandler *op = static_cast<vtkPVProgressHandler *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPVProgressHandler *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPVProgressHandler::NewInstance());

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
PyvtkPVProgressHandler_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkPVProgressHandler *tempr = vtkPVProgressHandler::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVProgressHandler_SetSession(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSession");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVProgressHandler *op = static_cast<vtkPVProgressHandler *>(vp);

  vtkPVSession *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPVSession"))
    {
    if (ap.IsBound())
      {
      op->SetSession(temp0);
      }
    else
      {
      op->vtkPVProgressHandler::SetSession(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVProgressHandler_GetSession(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSession");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVProgressHandler *op = static_cast<vtkPVProgressHandler *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPVSession *tempr = (ap.IsBound() ?
      op->GetSession() :
      op->vtkPVProgressHandler::GetSession());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVProgressHandler_RegisterProgressEvent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RegisterProgressEvent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVProgressHandler *op = static_cast<vtkPVProgressHandler *>(vp);

  vtkObject *temp0 = NULL;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkObject") &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->RegisterProgressEvent(temp0, temp1);
      }
    else
      {
      op->vtkPVProgressHandler::RegisterProgressEvent(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVProgressHandler_PrepareProgress(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PrepareProgress");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVProgressHandler *op = static_cast<vtkPVProgressHandler *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->PrepareProgress();
      }
    else
      {
      op->vtkPVProgressHandler::PrepareProgress();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVProgressHandler_CleanupPendingProgress(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CleanupPendingProgress");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVProgressHandler *op = static_cast<vtkPVProgressHandler *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->CleanupPendingProgress();
      }
    else
      {
      op->vtkPVProgressHandler::CleanupPendingProgress();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVProgressHandler_SetProgressFrequency(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetProgressFrequency");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVProgressHandler *op = static_cast<vtkPVProgressHandler *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetProgressFrequency(temp0);
      }
    else
      {
      op->vtkPVProgressHandler::SetProgressFrequency(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVProgressHandler_GetProgressFrequencyMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProgressFrequencyMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVProgressHandler *op = static_cast<vtkPVProgressHandler *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetProgressFrequencyMinValue() :
      op->vtkPVProgressHandler::GetProgressFrequencyMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVProgressHandler_GetProgressFrequencyMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProgressFrequencyMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVProgressHandler *op = static_cast<vtkPVProgressHandler *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetProgressFrequencyMaxValue() :
      op->vtkPVProgressHandler::GetProgressFrequencyMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVProgressHandler_GetProgressFrequency(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProgressFrequency");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVProgressHandler *op = static_cast<vtkPVProgressHandler *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetProgressFrequency() :
      op->vtkPVProgressHandler::GetProgressFrequency());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVProgressHandler_GetLastProgressText(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLastProgressText");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVProgressHandler *op = static_cast<vtkPVProgressHandler *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetLastProgressText() :
      op->vtkPVProgressHandler::GetLastProgressText());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVProgressHandler_GetLastProgress(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLastProgress");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVProgressHandler *op = static_cast<vtkPVProgressHandler *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetLastProgress() :
      op->vtkPVProgressHandler::GetLastProgress());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVProgressHandler_GetLastMessage(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLastMessage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVProgressHandler *op = static_cast<vtkPVProgressHandler *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetLastMessage() :
      op->vtkPVProgressHandler::GetLastMessage());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkPVProgressHandler_Methods[] = {
  {(char*)"GetClassName", PyvtkPVProgressHandler_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkPVProgressHandler_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkPVProgressHandler_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkPVProgressHandler\nC++: vtkPVProgressHandler *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkPVProgressHandler_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkPVProgressHandler\nC++: vtkPVProgressHandler *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetSession", PyvtkPVProgressHandler_SetSession, METH_VARARGS,
   (char*)"V.SetSession(vtkPVSession)\nC++: void SetSession(vtkPVSession *conn)\n\nGet/Set the session. This is not reference-counted to avoid\ncycles.\n"},
  {(char*)"GetSession", PyvtkPVProgressHandler_GetSession, METH_VARARGS,
   (char*)"V.GetSession() -> vtkPVSession\nC++: vtkPVSession *GetSession()\n\nGet/Set the session. This is not reference-counted to avoid\ncycles.\n"},
  {(char*)"RegisterProgressEvent", PyvtkPVProgressHandler_RegisterProgressEvent, METH_VARARGS,
   (char*)"V.RegisterProgressEvent(vtkObject, int)\nC++: void RegisterProgressEvent(vtkObject *object, int id)\n\nListen to progress events from the object.\n"},
  {(char*)"PrepareProgress", PyvtkPVProgressHandler_PrepareProgress, METH_VARARGS,
   (char*)"V.PrepareProgress()\nC++: void PrepareProgress()\n\nThis method resets all the progress counters and prepares\nprogress reporting. All progress events before this call are\nignored.\n"},
  {(char*)"CleanupPendingProgress", PyvtkPVProgressHandler_CleanupPendingProgress, METH_VARARGS,
   (char*)"V.CleanupPendingProgress()\nC++: void CleanupPendingProgress()\n\nThis method collects all outstanding progress messages. All\nprogress events after this call are ignored.\n"},
  {(char*)"SetProgressFrequency", PyvtkPVProgressHandler_SetProgressFrequency, METH_VARARGS,
   (char*)"V.SetProgressFrequency(float)\nC++: void SetProgressFrequency(double)\n\nGet/Set the progress frequency in seconds. Default is 0.5\nseconds.\n"},
  {(char*)"GetProgressFrequencyMinValue", PyvtkPVProgressHandler_GetProgressFrequencyMinValue, METH_VARARGS,
   (char*)"V.GetProgressFrequencyMinValue() -> float\nC++: double GetProgressFrequencyMinValue()\n\nGet/Set the progress frequency in seconds. Default is 0.5\nseconds.\n"},
  {(char*)"GetProgressFrequencyMaxValue", PyvtkPVProgressHandler_GetProgressFrequencyMaxValue, METH_VARARGS,
   (char*)"V.GetProgressFrequencyMaxValue() -> float\nC++: double GetProgressFrequencyMaxValue()\n\nGet/Set the progress frequency in seconds. Default is 0.5\nseconds.\n"},
  {(char*)"GetProgressFrequency", PyvtkPVProgressHandler_GetProgressFrequency, METH_VARARGS,
   (char*)"V.GetProgressFrequency() -> float\nC++: double GetProgressFrequency()\n\nGet/Set the progress frequency in seconds. Default is 0.5\nseconds.\n"},
  {(char*)"GetLastProgressText", PyvtkPVProgressHandler_GetLastProgressText, METH_VARARGS,
   (char*)"V.GetLastProgressText() -> string\nC++: char *GetLastProgressText()\n\nThese are only valid in handler for the\nvtkCommand::ProgressEvent.\n"},
  {(char*)"GetLastProgress", PyvtkPVProgressHandler_GetLastProgress, METH_VARARGS,
   (char*)"V.GetLastProgress() -> int\nC++: int GetLastProgress()\n\nThese are only valid in handler for the\nvtkCommand::ProgressEvent.\n"},
  {(char*)"GetLastMessage", PyvtkPVProgressHandler_GetLastMessage, METH_VARARGS,
   (char*)"V.GetLastMessage() -> string\nC++: char *GetLastMessage()\n\nTemporary storage for most recent message text.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkPVProgressHandler_StaticNew()
{
  return vtkPVProgressHandler::New();
}

PyObject *PyVTKClass_vtkPVProgressHandlerNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkPVProgressHandler_StaticNew,
    PyvtkPVProgressHandler_Methods,
    "vtkPVProgressHandler", modulename,
    NULL, NULL,
    PyvtkPVProgressHandler_Doc(),
    PyVTKClass_vtkObjectNew(modulename));
  return cls;
}

const char **PyvtkPVProgressHandler_Doc()
{
  static const char *docstring[] = {
    "vtkPVProgressHandler - progress handler.\n\n",
    "Superclass: vtkObject\n\n",
    "vtkPVProgressHandler handles the progress messages. It handles\nprogress in all configurations single process, client-server. It must\nbe noted that when running in parallel, progress updates are fetched\nfrom the root node. Due to performance reasons, we no longer collect\nprogress events (or messages) from satellites, only root-node events\nare reported back to the client. While this may not faithful",
    "ly report\nthe progress, this avoid nasty MPI issues that can be painful to\ndebug and diagnose.\n\nProgress events are currently not supported in multi-clients mode.\n\nEvents:\n\nvtkCommand::StartEvent\n\\li fired to indicate beginning of progress handling\n\\li calldata: vtkPVProgressHandler*\nvtkCommand::ProgressEvent\n\\li fired to indicate a progress event.\n\\li calldata: vtkPVProgressHandler*\nvtkCommand::E",
    "ndEvent\n\\li fired to indicate end of progress handling\n\\li calldata: vtkPVProgressHandler*\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPVProgressHandler(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPVProgressHandlerNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPVProgressHandler", o) != 0)
    {
    Py_DECREF(o);
    }

}

