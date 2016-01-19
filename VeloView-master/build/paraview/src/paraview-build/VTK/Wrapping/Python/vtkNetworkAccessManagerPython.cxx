// python wrapper for vtkNetworkAccessManager
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkNetworkAccessManager.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkNetworkAccessManager(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkNetworkAccessManagerNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkNetworkAccessManager_Doc();


static PyObject *
PyvtkNetworkAccessManager_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNetworkAccessManager *op = static_cast<vtkNetworkAccessManager *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkNetworkAccessManager::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkNetworkAccessManager_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNetworkAccessManager *op = static_cast<vtkNetworkAccessManager *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkNetworkAccessManager::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkNetworkAccessManager_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNetworkAccessManager *op = static_cast<vtkNetworkAccessManager *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkNetworkAccessManager *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkNetworkAccessManager::NewInstance());

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
PyvtkNetworkAccessManager_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkNetworkAccessManager *tempr = vtkNetworkAccessManager::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkNetworkAccessManager_NewConnection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNetworkAccessManager *op = static_cast<vtkNetworkAccessManager *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkMultiProcessController *tempr = op->NewConnection(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkNetworkAccessManager_AbortPendingConnection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AbortPendingConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNetworkAccessManager *op = static_cast<vtkNetworkAccessManager *>(vp);

  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
    {
    op->AbortPendingConnection();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkNetworkAccessManager_ProcessEvents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ProcessEvents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNetworkAccessManager *op = static_cast<vtkNetworkAccessManager *>(vp);

  unsigned long temp0;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = op->ProcessEvents(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkNetworkAccessManager_GetNetworkEventsAvailable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNetworkEventsAvailable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNetworkAccessManager *op = static_cast<vtkNetworkAccessManager *>(vp);

  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
    {
    bool tempr = op->GetNetworkEventsAvailable();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkNetworkAccessManager_GetPendingConnectionsPresent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPendingConnectionsPresent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNetworkAccessManager *op = static_cast<vtkNetworkAccessManager *>(vp);

  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
    {
    bool tempr = op->GetPendingConnectionsPresent();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkNetworkAccessManager_Methods[] = {
  {(char*)"GetClassName", PyvtkNetworkAccessManager_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkNetworkAccessManager_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkNetworkAccessManager_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkNetworkAccessManager\nC++: vtkNetworkAccessManager *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkNetworkAccessManager_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkNetworkAccessManager\nC++: vtkNetworkAccessManager *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"NewConnection", PyvtkNetworkAccessManager_NewConnection, METH_VARARGS,
   (char*)"V.NewConnection(string) -> vtkMultiProcessController\nC++: virtual vtkMultiProcessController *NewConnection(\n    const char *url)\n\nCreates a new connection given the url. This call may block until\nthe connection can be established. To keep user-interfaces\nresponsive, one can listen to the vtkCommand::ProgressEvent fired\nperiodically by this class while waiting.\n\nvtkNetworkAccessManager can  be waiting for atmost one connection\nat a time. Calling NewConnection() while another connection is\npending will raise an error.\n\nTo abort the connection and cancel the waiting, simply call\nAbortPendingConnection() in the vtkCommand::ProgressEvent\ncallback.\n\nReturns the new connection instance on success, otherwise NULL.\n\nURLs are of the following form: ://\n* tcp://:\n\n* tcp://localhost:\n\n/listen -- listen for connection on port.\n* tcp://localhost:\n\n/listenmultiple -- listen for multiple Examples:\n* tcp://medea:12345\n* tcp://localhost:12345/listen\n* ssh://utkarsh@medea\n* http://kitware-server/session?id=12322&authorization=12\n"},
  {(char*)"AbortPendingConnection", PyvtkNetworkAccessManager_AbortPendingConnection, METH_VARARGS,
   (char*)"V.AbortPendingConnection()\nC++: virtual void AbortPendingConnection()\n\nUsed to abort pending connection creation, if any. Refer to\nNewConnection() for details.\n"},
  {(char*)"ProcessEvents", PyvtkNetworkAccessManager_ProcessEvents, METH_VARARGS,
   (char*)"V.ProcessEvents(int) -> int\nC++: virtual int ProcessEvents(unsigned long timeout_msecs)\n\nProcess any network activity.\n"},
  {(char*)"GetNetworkEventsAvailable", PyvtkNetworkAccessManager_GetNetworkEventsAvailable, METH_VARARGS,
   (char*)"V.GetNetworkEventsAvailable() -> bool\nC++: virtual bool GetNetworkEventsAvailable()\n\nPeeks to check if any activity is available. When this call\nreturns true, ProcessEvents() will always result in some activity\nprocessing if called afterword.\n"},
  {(char*)"GetPendingConnectionsPresent", PyvtkNetworkAccessManager_GetPendingConnectionsPresent, METH_VARARGS,
   (char*)"V.GetPendingConnectionsPresent() -> bool\nC++: virtual bool GetPendingConnectionsPresent()\n\nReturns true is the manager is currently waiting for any\nconnections.\n"},
  {NULL, NULL, 0, NULL}
};

PyObject *PyVTKClass_vtkNetworkAccessManagerNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(NULL,
    PyvtkNetworkAccessManager_Methods,
    "vtkNetworkAccessManager", modulename,
    NULL, NULL,
    PyvtkNetworkAccessManager_Doc(),
    PyVTKClass_vtkObjectNew(modulename));
  return cls;
}

const char **PyvtkNetworkAccessManager_Doc()
{
  static const char *docstring[] = {
    "vtkNetworkAccessManager\n\n",
    "Superclass: vtkObject\n\n",
    "vtkNetworkAccessManager is used to create new connections and monitor\nactivity of those connections. This is an abstract class that defines\nthe interface. Concrete implementations of this class can be written\nto support tcp/ip socket or ssl or ssh based network connections\namong processes.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkNetworkAccessManager(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkNetworkAccessManagerNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkNetworkAccessManager", o) != 0)
    {
    Py_DECREF(o);
    }

}

