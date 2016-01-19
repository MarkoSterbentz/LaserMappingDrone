// python wrapper for vtkPVSessionServer
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkPVSessionServer.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkPVSessionServer(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkPVSessionServerNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkPVSessionBaseNew
extern "C" { PyObject *PyVTKClass_vtkPVSessionBaseNew(const char *); }
#define DECLARED_PyVTKClass_vtkPVSessionBaseNew
#endif

static const char **PyvtkPVSessionServer_Doc();


static PyObject *
PyvtkPVSessionServer_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSessionServer *op = static_cast<vtkPVSessionServer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkPVSessionServer::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVSessionServer_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSessionServer *op = static_cast<vtkPVSessionServer *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPVSessionServer::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVSessionServer_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSessionServer *op = static_cast<vtkPVSessionServer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPVSessionServer *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPVSessionServer::NewInstance());

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
PyvtkPVSessionServer_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkPVSessionServer *tempr = vtkPVSessionServer::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVSessionServer_Connect_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Connect");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSessionServer *op = static_cast<vtkPVSessionServer *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    bool tempr = (ap.IsBound() ?
      op->Connect(temp0) :
      op->vtkPVSessionServer::Connect(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkPVSessionServer_Connect_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Connect");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSessionServer *op = static_cast<vtkPVSessionServer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->Connect() :
      op->vtkPVSessionServer::Connect());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkPVSessionServer_Connect(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkPVSessionServer_Connect_s1(self, args);
    case 0:
      return PyvtkPVSessionServer_Connect_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "Connect");
  return NULL;
}



static PyObject *
PyvtkPVSessionServer_GetIsAlive(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIsAlive");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSessionServer *op = static_cast<vtkPVSessionServer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetIsAlive() :
      op->vtkPVSessionServer::GetIsAlive());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVSessionServer_MultipleConnectionOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MultipleConnectionOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSessionServer *op = static_cast<vtkPVSessionServer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->MultipleConnectionOn();
      }
    else
      {
      op->vtkPVSessionServer::MultipleConnectionOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVSessionServer_MultipleConnectionOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MultipleConnectionOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSessionServer *op = static_cast<vtkPVSessionServer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->MultipleConnectionOff();
      }
    else
      {
      op->vtkPVSessionServer::MultipleConnectionOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVSessionServer_SetMultipleConnection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMultipleConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSessionServer *op = static_cast<vtkPVSessionServer *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetMultipleConnection(temp0);
      }
    else
      {
      op->vtkPVSessionServer::SetMultipleConnection(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVSessionServer_GetMultipleConnection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMultipleConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSessionServer *op = static_cast<vtkPVSessionServer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetMultipleConnection() :
      op->vtkPVSessionServer::GetMultipleConnection());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVSessionServer_OnClientServerMessageRMI(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnClientServerMessageRMI");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSessionServer *op = static_cast<vtkPVSessionServer *>(vp);

  void  *temp0 = NULL;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->OnClientServerMessageRMI(temp0, temp1);
      }
    else
      {
      op->vtkPVSessionServer::OnClientServerMessageRMI(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVSessionServer_OnCloseSessionRMI(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnCloseSessionRMI");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSessionServer *op = static_cast<vtkPVSessionServer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->OnCloseSessionRMI();
      }
    else
      {
      op->vtkPVSessionServer::OnCloseSessionRMI();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVSessionServer_NotifyAllClients(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NotifyAllClients");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSessionServer *op = static_cast<vtkPVSessionServer *>(vp);

  vtkSMMessage *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMMessage"))
    {
    if (ap.IsBound())
      {
      op->NotifyAllClients(temp0);
      }
    else
      {
      op->vtkPVSessionServer::NotifyAllClients(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVSessionServer_NotifyOtherClients(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NotifyOtherClients");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSessionServer *op = static_cast<vtkPVSessionServer *>(vp);

  vtkSMMessage *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMMessage"))
    {
    if (ap.IsBound())
      {
      op->NotifyOtherClients(temp0);
      }
    else
      {
      op->vtkPVSessionServer::NotifyOtherClients(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkPVSessionServer_Methods[] = {
  {(char*)"GetClassName", PyvtkPVSessionServer_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkPVSessionServer_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkPVSessionServer_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkPVSessionServer\nC++: vtkPVSessionServer *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkPVSessionServer_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkPVSessionServer\nC++: vtkPVSessionServer *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"Connect", PyvtkPVSessionServer_Connect, METH_VARARGS,
   (char*)"V.Connect(string) -> bool\nC++: virtual bool Connect(const char *url)\nV.Connect() -> bool\nC++: bool Connect()\n\nConnects a remote server. URL can be of the following format:\ncs://<pvserver-host>:<pvserver-port>\ncdsrs://<pvdataserver-host>:<pvdataserver-port>/<pvrenderserver-ho\nst>:<pvrenderserver-port> In both cases the port is optional.\nWhen not provided default pvserver/pvdataserver port // is 11111,\nwhile default pvrenderserver port is 22221. For reverse connect\ni.e. the client waits for the server to connect back, simply add\n\"rc\" to the protocol e.g. csrc://<pvserver-host>:<pvserver-port>\ncdsrsrc://<pvdataserver-host>:<pvdataserver-port>/<pvrenderserver-\nhost>:<pvrenderserver-port> In this case, the hostname is\nirrelevant and is ignored.\n"},
  {(char*)"GetIsAlive", PyvtkPVSessionServer_GetIsAlive, METH_VARARGS,
   (char*)"V.GetIsAlive() -> bool\nC++: virtual bool GetIsAlive()\n\nReturns true is this session is active/alive/valid.\n"},
  {(char*)"MultipleConnectionOn", PyvtkPVSessionServer_MultipleConnectionOn, METH_VARARGS,
   (char*)"V.MultipleConnectionOn()\nC++: void MultipleConnectionOn()\n\nEnable or Disable multi-connection support. The\nMultipleConnection is only used inside the DATA_SERVER to support\nseveral clients to connect to it. By default we allow\ncollaboration (this->MultipleConnection = true)\n"},
  {(char*)"MultipleConnectionOff", PyvtkPVSessionServer_MultipleConnectionOff, METH_VARARGS,
   (char*)"V.MultipleConnectionOff()\nC++: void MultipleConnectionOff()\n\nEnable or Disable multi-connection support. The\nMultipleConnection is only used inside the DATA_SERVER to support\nseveral clients to connect to it. By default we allow\ncollaboration (this->MultipleConnection = true)\n"},
  {(char*)"SetMultipleConnection", PyvtkPVSessionServer_SetMultipleConnection, METH_VARARGS,
   (char*)"V.SetMultipleConnection(bool)\nC++: void SetMultipleConnection(bool a)\n\nEnable or Disable multi-connection support. The\nMultipleConnection is only used inside the DATA_SERVER to support\nseveral clients to connect to it. By default we allow\ncollaboration (this->MultipleConnection = true)\n"},
  {(char*)"GetMultipleConnection", PyvtkPVSessionServer_GetMultipleConnection, METH_VARARGS,
   (char*)"V.GetMultipleConnection() -> bool\nC++: bool GetMultipleConnection()\n\nEnable or Disable multi-connection support. The\nMultipleConnection is only used inside the DATA_SERVER to support\nseveral clients to connect to it. By default we allow\ncollaboration (this->MultipleConnection = true)\n"},
  {(char*)"OnClientServerMessageRMI", PyvtkPVSessionServer_OnClientServerMessageRMI, METH_VARARGS,
   (char*)"V.OnClientServerMessageRMI(, int)\nC++: void OnClientServerMessageRMI(void *message,\n    int message_length)\n\n"},
  {(char*)"OnCloseSessionRMI", PyvtkPVSessionServer_OnCloseSessionRMI, METH_VARARGS,
   (char*)"V.OnCloseSessionRMI()\nC++: void OnCloseSessionRMI()\n\n"},
  {(char*)"NotifyAllClients", PyvtkPVSessionServer_NotifyAllClients, METH_VARARGS,
   (char*)"V.NotifyAllClients(vtkSMMessage)\nC++: virtual void NotifyAllClients(const vtkSMMessage *)\n\nSends the message to all clients.\n"},
  {(char*)"NotifyOtherClients", PyvtkPVSessionServer_NotifyOtherClients, METH_VARARGS,
   (char*)"V.NotifyOtherClients(vtkSMMessage)\nC++: virtual void NotifyOtherClients(const vtkSMMessage *)\n\nSends the message to all but the active client-session.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkPVSessionServer_StaticNew()
{
  return vtkPVSessionServer::New();
}

PyObject *PyVTKClass_vtkPVSessionServerNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkPVSessionServer_StaticNew,
    PyvtkPVSessionServer_Methods,
    "vtkPVSessionServer", modulename,
    NULL, NULL,
    PyvtkPVSessionServer_Doc(),
    PyVTKClass_vtkPVSessionBaseNew(modulename));

  if (cls)
    {
    PyObject *d = PyVTKClass_GetDict(cls);
    PyObject *o;

    for (int c = 0; c < 14; c++)
      {
      static const struct { const char *name; int value; }
        constants[14] = {
          { "PUSH", vtkPVSessionServer::PUSH },
          { "PULL", vtkPVSessionServer::PULL },
          { "EXECUTE_STREAM", vtkPVSessionServer::EXECUTE_STREAM },
          { "GATHER_INFORMATION", vtkPVSessionServer::GATHER_INFORMATION },
          { "REGISTER_SI", vtkPVSessionServer::REGISTER_SI },
          { "UNREGISTER_SI", vtkPVSessionServer::UNREGISTER_SI },
          { "LAST_RESULT", vtkPVSessionServer::LAST_RESULT },
          { "SERVER_NOTIFICATION_MESSAGE_RMI", vtkPVSessionServer::SERVER_NOTIFICATION_MESSAGE_RMI },
          { "CLIENT_SERVER_MESSAGE_RMI", vtkPVSessionServer::CLIENT_SERVER_MESSAGE_RMI },
          { "CLOSE_SESSION", vtkPVSessionServer::CLOSE_SESSION },
          { "REPLY_GATHER_INFORMATION_TAG", vtkPVSessionServer::REPLY_GATHER_INFORMATION_TAG },
          { "REPLY_PULL", vtkPVSessionServer::REPLY_PULL },
          { "REPLY_LAST_RESULT", vtkPVSessionServer::REPLY_LAST_RESULT },
          { "EXECUTE_STREAM_TAG", vtkPVSessionServer::EXECUTE_STREAM_TAG },
        };

      o = PyInt_FromLong(constants[c].value);
      if (o)
        {
        PyDict_SetItemString(d, (char *)constants[c].name, o);
        Py_DECREF(o);
        }
      }

    }

  return cls;
}

const char **PyvtkPVSessionServer_Doc()
{
  static const char *docstring[] = {
    "vtkPVSessionServer\n\n",
    "Superclass: vtkPVSessionBase\n\n",
    "vtkSMSessionServer is a session used on data and/or render servers.\nIt's designed for a process that works with a separate client process\nthat acts as the visualization driver.\n\nSee Also:\n\nvtkSMSessionClient\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPVSessionServer(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPVSessionServerNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPVSessionServer", o) != 0)
    {
    Py_DECREF(o);
    }

}

