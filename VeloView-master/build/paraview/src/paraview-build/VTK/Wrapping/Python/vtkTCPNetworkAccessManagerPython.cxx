// python wrapper for vtkTCPNetworkAccessManager
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkTCPNetworkAccessManager.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkTCPNetworkAccessManager(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkTCPNetworkAccessManagerNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkNetworkAccessManagerNew
extern "C" { PyObject *PyVTKClass_vtkNetworkAccessManagerNew(const char *); }
#define DECLARED_PyVTKClass_vtkNetworkAccessManagerNew
#endif

static const char **PyvtkTCPNetworkAccessManager_Doc();


static PyObject *
PyvtkTCPNetworkAccessManager_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTCPNetworkAccessManager *op = static_cast<vtkTCPNetworkAccessManager *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkTCPNetworkAccessManager::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTCPNetworkAccessManager_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTCPNetworkAccessManager *op = static_cast<vtkTCPNetworkAccessManager *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkTCPNetworkAccessManager::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTCPNetworkAccessManager_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTCPNetworkAccessManager *op = static_cast<vtkTCPNetworkAccessManager *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkTCPNetworkAccessManager *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkTCPNetworkAccessManager::NewInstance());

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
PyvtkTCPNetworkAccessManager_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkTCPNetworkAccessManager *tempr = vtkTCPNetworkAccessManager::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTCPNetworkAccessManager_NewConnection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTCPNetworkAccessManager *op = static_cast<vtkTCPNetworkAccessManager *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkMultiProcessController *tempr = (ap.IsBound() ?
      op->NewConnection(temp0) :
      op->vtkTCPNetworkAccessManager::NewConnection(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTCPNetworkAccessManager_AbortPendingConnection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AbortPendingConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTCPNetworkAccessManager *op = static_cast<vtkTCPNetworkAccessManager *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->AbortPendingConnection();
      }
    else
      {
      op->vtkTCPNetworkAccessManager::AbortPendingConnection();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTCPNetworkAccessManager_ProcessEvents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ProcessEvents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTCPNetworkAccessManager *op = static_cast<vtkTCPNetworkAccessManager *>(vp);

  unsigned long temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->ProcessEvents(temp0) :
      op->vtkTCPNetworkAccessManager::ProcessEvents(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTCPNetworkAccessManager_GetNetworkEventsAvailable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNetworkEventsAvailable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTCPNetworkAccessManager *op = static_cast<vtkTCPNetworkAccessManager *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetNetworkEventsAvailable() :
      op->vtkTCPNetworkAccessManager::GetNetworkEventsAvailable());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTCPNetworkAccessManager_GetPendingConnectionsPresent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPendingConnectionsPresent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTCPNetworkAccessManager *op = static_cast<vtkTCPNetworkAccessManager *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetPendingConnectionsPresent() :
      op->vtkTCPNetworkAccessManager::GetPendingConnectionsPresent());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkTCPNetworkAccessManager_Methods[] = {
  {(char*)"GetClassName", PyvtkTCPNetworkAccessManager_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkTCPNetworkAccessManager_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkTCPNetworkAccessManager_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkTCPNetworkAccessManager\nC++: vtkTCPNetworkAccessManager *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkTCPNetworkAccessManager_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkTCPNetworkAccessManager\nC++: vtkTCPNetworkAccessManager *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"NewConnection", PyvtkTCPNetworkAccessManager_NewConnection, METH_VARARGS,
   (char*)"V.NewConnection(string) -> vtkMultiProcessController\nC++: virtual vtkMultiProcessController *NewConnection(\n    const char *url)\n\nCreates a new connection given the url. This call may block until\nthe connection can be established. To keep user-interfaces\nresponsive, one can listen to the vtkCommand::ProgressEvent fired\nperiodically by this class while waiting.\n\nvtkNetworkAccessManager can  be waiting for atmost one connection\nat a time. Calling NewConnection() while another connection is\npending will raise an error.\n\nTo abort the connection and cancel the waiting, simply call\nAbortPendingConnection() in the vtkCommand::ProgressEvent\ncallback.\n\nReturns the new connection instance on success, otherwise NULL.\n\nURLs are of the following form: ://\n* tcp://:\n\n* tcp://localhost:\n\n?listen=true& -- listen for connection on port.\n* tcp://localhost:\n\n?listen=true&multiple=true -- listen for multiple Examples:\n* tcp://medea:12345\n* tcp://localhost:12345?listen&handshake=3.8.12 Supported\n  parameters: handshake :- specify a message that is matched with\nthe other side listen    :- open a server-socket for a client to\n  connect to multiple  :- leave server-socket open for more than\n  1 client to connect (listen must be set to true) nonblocking:-\n  When listen is true, this will result in the call returning\n  NULL if a client connection is not available immediately. It\n  leaves the server socket open for client to connect. timeout  \n  :- When connecting to remote i.e listen==false, specify the\n  time (in seconds) for which this call blocks to retry attempts\n  to connect to the host/port. If absent, default is 60s. 0 or\n  negative implies no retry attempts.\n"},
  {(char*)"AbortPendingConnection", PyvtkTCPNetworkAccessManager_AbortPendingConnection, METH_VARARGS,
   (char*)"V.AbortPendingConnection()\nC++: virtual void AbortPendingConnection()\n\nUsed to abort pending connection creation, if any. Refer to\nNewConnection() for details.\n"},
  {(char*)"ProcessEvents", PyvtkTCPNetworkAccessManager_ProcessEvents, METH_VARARGS,
   (char*)"V.ProcessEvents(int) -> int\nC++: virtual int ProcessEvents(unsigned long timeout_msecs)\n\nProcess any network activity.\n"},
  {(char*)"GetNetworkEventsAvailable", PyvtkTCPNetworkAccessManager_GetNetworkEventsAvailable, METH_VARARGS,
   (char*)"V.GetNetworkEventsAvailable() -> bool\nC++: virtual bool GetNetworkEventsAvailable()\n\nPeeks to check if any activity is available. When this call\nreturns true, ProcessEvents() will always result in some activity\nprocessing if called afterword.\n"},
  {(char*)"GetPendingConnectionsPresent", PyvtkTCPNetworkAccessManager_GetPendingConnectionsPresent, METH_VARARGS,
   (char*)"V.GetPendingConnectionsPresent() -> bool\nC++: virtual bool GetPendingConnectionsPresent()\n\nReturns true is the manager is currently waiting for any\nconnections.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkTCPNetworkAccessManager_StaticNew()
{
  return vtkTCPNetworkAccessManager::New();
}

PyObject *PyVTKClass_vtkTCPNetworkAccessManagerNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkTCPNetworkAccessManager_StaticNew,
    PyvtkTCPNetworkAccessManager_Methods,
    "vtkTCPNetworkAccessManager", modulename,
    NULL, NULL,
    PyvtkTCPNetworkAccessManager_Doc(),
    PyVTKClass_vtkNetworkAccessManagerNew(modulename));
  return cls;
}

const char **PyvtkTCPNetworkAccessManager_Doc()
{
  static const char *docstring[] = {
    "vtkTCPNetworkAccessManager\n\n",
    "Superclass: vtkNetworkAccessManager\n\n",
    "vtkTCPNetworkAccessManager is a concrete implementation of\nvtkNetworkAccessManager that uses tcp/ip sockets for communication\nbetween processes. It supports urls that use \"tcp\" as their protocol\nspecifier.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkTCPNetworkAccessManager(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkTCPNetworkAccessManagerNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkTCPNetworkAccessManager", o) != 0)
    {
    Py_DECREF(o);
    }

}

