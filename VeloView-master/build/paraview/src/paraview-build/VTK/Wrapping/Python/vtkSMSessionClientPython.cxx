// python wrapper for vtkSMSessionClient
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkSMSessionClient.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkSMSessionClient(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkSMSessionClientNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkSMSessionNew
extern "C" { PyObject *PyVTKClass_vtkSMSessionNew(const char *); }
#define DECLARED_PyVTKClass_vtkSMSessionNew
#endif

static const char **PyvtkSMSessionClient_Doc();


static PyObject *
PyvtkSMSessionClient_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSessionClient *op = static_cast<vtkSMSessionClient *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkSMSessionClient::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMSessionClient_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSessionClient *op = static_cast<vtkSMSessionClient *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSMSessionClient::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMSessionClient_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSessionClient *op = static_cast<vtkSMSessionClient *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkSMSessionClient *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSMSessionClient::NewInstance());

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
PyvtkSMSessionClient_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkSMSessionClient *tempr = vtkSMSessionClient::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMSessionClient_GetURI(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetURI");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSessionClient *op = static_cast<vtkSMSessionClient *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetURI() :
      op->vtkSMSessionClient::GetURI());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMSessionClient_Connect(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Connect");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSessionClient *op = static_cast<vtkSMSessionClient *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    bool tempr = (ap.IsBound() ?
      op->Connect(temp0) :
      op->vtkSMSessionClient::Connect(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMSessionClient_GetIsAlive(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIsAlive");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSessionClient *op = static_cast<vtkSMSessionClient *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetIsAlive() :
      op->vtkSMSessionClient::GetIsAlive());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMSessionClient_GetServerInformation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetServerInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSessionClient *op = static_cast<vtkSMSessionClient *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPVServerInformation *tempr = (ap.IsBound() ?
      op->GetServerInformation() :
      op->vtkSMSessionClient::GetServerInformation());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMSessionClient_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSessionClient *op = static_cast<vtkSMSessionClient *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Initialize();
      }
    else
      {
      op->vtkSMSessionClient::Initialize();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMSessionClient_PushState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PushState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSessionClient *op = static_cast<vtkSMSessionClient *>(vp);

  vtkSMMessage *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMMessage"))
    {
    if (ap.IsBound())
      {
      op->PushState(temp0);
      }
    else
      {
      op->vtkSMSessionClient::PushState(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMSessionClient_PullState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PullState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSessionClient *op = static_cast<vtkSMSessionClient *>(vp);

  vtkSMMessage *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMMessage"))
    {
    if (ap.IsBound())
      {
      op->PullState(temp0);
      }
    else
      {
      op->vtkSMSessionClient::PullState(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMSessionClient_SetAbortConnect(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAbortConnect");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSessionClient *op = static_cast<vtkSMSessionClient *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetAbortConnect(temp0);
      }
    else
      {
      op->vtkSMSessionClient::SetAbortConnect(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMSessionClient_CloseSession(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CloseSession");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSessionClient *op = static_cast<vtkSMSessionClient *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->CloseSession();
      }
    else
      {
      op->vtkSMSessionClient::CloseSession();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMSessionClient_GatherInformation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GatherInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSessionClient *op = static_cast<vtkSMSessionClient *>(vp);

  unsigned int temp0;
  vtkPVInformation *temp1 = NULL;
  unsigned int temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkPVInformation") &&
      ap.GetValue(temp2))
    {
    bool tempr = (ap.IsBound() ?
      op->GatherInformation(temp0, temp1, temp2) :
      op->vtkSMSessionClient::GatherInformation(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMSessionClient_GetNumberOfProcesses(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfProcesses");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSessionClient *op = static_cast<vtkSMSessionClient *>(vp);

  unsigned int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfProcesses(temp0) :
      op->vtkSMSessionClient::GetNumberOfProcesses(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMSessionClient_IsMPIInitialized(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsMPIInitialized");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSessionClient *op = static_cast<vtkSMSessionClient *>(vp);

  unsigned int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    bool tempr = (ap.IsBound() ?
      op->IsMPIInitialized(temp0) :
      op->vtkSMSessionClient::IsMPIInitialized(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMSessionClient_PreDisconnection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PreDisconnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSessionClient *op = static_cast<vtkSMSessionClient *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->PreDisconnection();
      }
    else
      {
      op->vtkSMSessionClient::PreDisconnection();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMSessionClient_IsNotBusy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsNotBusy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSessionClient *op = static_cast<vtkSMSessionClient *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->IsNotBusy() :
      op->vtkSMSessionClient::IsNotBusy());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMSessionClient_StartBusyWork(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StartBusyWork");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSessionClient *op = static_cast<vtkSMSessionClient *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->StartBusyWork();
      }
    else
      {
      op->vtkSMSessionClient::StartBusyWork();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMSessionClient_EndBusyWork(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EndBusyWork");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSessionClient *op = static_cast<vtkSMSessionClient *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->EndBusyWork();
      }
    else
      {
      op->vtkSMSessionClient::EndBusyWork();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMSessionClient_GetCollaborationManager(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCollaborationManager");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSessionClient *op = static_cast<vtkSMSessionClient *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkSMCollaborationManager *tempr = (ap.IsBound() ?
      op->GetCollaborationManager() :
      op->vtkSMSessionClient::GetCollaborationManager());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMSessionClient_GetNextGlobalUniqueIdentifier(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNextGlobalUniqueIdentifier");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSessionClient *op = static_cast<vtkSMSessionClient *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned int tempr = (ap.IsBound() ?
      op->GetNextGlobalUniqueIdentifier() :
      op->vtkSMSessionClient::GetNextGlobalUniqueIdentifier());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMSessionClient_GetNextChunkGlobalUniqueIdentifier(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNextChunkGlobalUniqueIdentifier");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSessionClient *op = static_cast<vtkSMSessionClient *>(vp);

  unsigned int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    unsigned int tempr = (ap.IsBound() ?
      op->GetNextChunkGlobalUniqueIdentifier(temp0) :
      op->vtkSMSessionClient::GetNextChunkGlobalUniqueIdentifier(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMSessionClient_OnServerNotificationMessageRMI(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnServerNotificationMessageRMI");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSessionClient *op = static_cast<vtkSMSessionClient *>(vp);

  void  *temp0 = NULL;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->OnServerNotificationMessageRMI(temp0, temp1);
      }
    else
      {
      op->vtkSMSessionClient::OnServerNotificationMessageRMI(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkSMSessionClient_Methods[] = {
  {(char*)"GetClassName", PyvtkSMSessionClient_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkSMSessionClient_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkSMSessionClient_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkSMSessionClient\nC++: vtkSMSessionClient *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkSMSessionClient_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkSMSessionClient\nC++: vtkSMSessionClient *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetURI", PyvtkSMSessionClient_GetURI, METH_VARARGS,
   (char*)"V.GetURI() -> string\nC++: virtual const char *GetURI()\n\nReturn the url used to connect the current session to a server\n"},
  {(char*)"Connect", PyvtkSMSessionClient_Connect, METH_VARARGS,
   (char*)"V.Connect(string) -> bool\nC++: virtual bool Connect(const char *url)\n\nConnects a remote server. URL can be of the following format:\ncs://<pvserver-host>:<pvserver-port>\ncdsrs://<pvdataserver-host>:<pvdataserver-port>/<pvrenderserver-ho\nst>:<pvrenderserver-port> In both cases the port is optional.\nWhen not provided default pvserver/pvdataserver port // is 11111,\nwhile default pvrenderserver port is 22221. For reverse connect\ni.e. the client waits for the server to connect back, simply add\n\"rc\" to the protocol e.g. csrc://<pvserver-host>:<pvserver-port>\ncdsrsrc://<pvdataserver-host>:<pvdataserver-port>/<pvrenderserver-\nhost>:<pvrenderserver-port> In this case, the hostname is\nirrelevant and is ignored.\n"},
  {(char*)"GetIsAlive", PyvtkSMSessionClient_GetIsAlive, METH_VARARGS,
   (char*)"V.GetIsAlive() -> bool\nC++: virtual bool GetIsAlive()\n\nReturns true is this session is active/alive/valid.\n"},
  {(char*)"GetServerInformation", PyvtkSMSessionClient_GetServerInformation, METH_VARARGS,
   (char*)"V.GetServerInformation() -> vtkPVServerInformation\nC++: virtual vtkPVServerInformation *GetServerInformation()\n\nvtkPVServerInformation is an information-object that provides\ninformation about the server processes. These include server-side\ncapabilities as well as server-side command line arguments e.g.\ntile-display parameters. Use this method to obtain the\nserver-side information. Overridden to provide return the\ninformation gathered from data-server and render-server.\n"},
  {(char*)"Initialize", PyvtkSMSessionClient_Initialize, METH_VARARGS,
   (char*)"V.Initialize()\nC++: virtual void Initialize()\n\nCalled to do any initializations after a successful session has\nbeen established. Initialize the data-server-render-server\nconnection, if applicable.\n"},
  {(char*)"PushState", PyvtkSMSessionClient_PushState, METH_VARARGS,
   (char*)"V.PushState(vtkSMMessage)\nC++: virtual void PushState(vtkSMMessage *msg)\n\nPush the state.\n"},
  {(char*)"PullState", PyvtkSMSessionClient_PullState, METH_VARARGS,
   (char*)"V.PullState(vtkSMMessage)\nC++: virtual void PullState(vtkSMMessage *message)\n\nPush the state.\n"},
  {(char*)"SetAbortConnect", PyvtkSMSessionClient_SetAbortConnect, METH_VARARGS,
   (char*)"V.SetAbortConnect(bool)\nC++: void SetAbortConnect(bool a)\n\nWhen Connect() is waiting for a server to connect back to the\nclient (in reverse connect mode), then it periodically fires\nProgressEvent. Application can add observer to this signal and\nset this flag to true, if it wants to abort the wait for the\nserver.\n"},
  {(char*)"CloseSession", PyvtkSMSessionClient_CloseSession, METH_VARARGS,
   (char*)"V.CloseSession()\nC++: void CloseSession()\n\nGracefully exits the session.\n"},
  {(char*)"GatherInformation", PyvtkSMSessionClient_GatherInformation, METH_VARARGS,
   (char*)"V.GatherInformation(int, vtkPVInformation, int) -> bool\nC++: virtual bool GatherInformation(vtkTypeUInt32 location,\n    vtkPVInformation *information, vtkTypeUInt32 globalid)\n\nGather information about an object referred by the\nglobalid.location identifies the processes to gather the\ninformation from. Overridden to fetch the information from server\nif needed, otherwise it's handled locally.\n"},
  {(char*)"GetNumberOfProcesses", PyvtkSMSessionClient_GetNumberOfProcesses, METH_VARARGS,
   (char*)"V.GetNumberOfProcesses(int) -> int\nC++: virtual int GetNumberOfProcesses(vtkTypeUInt32 servers)\n\nReturns the number of processes on the given server/s. If more\nthan 1 server is identified, than it returns the maximum number\nof processes e.g. is servers = DATA_SERVER | RENDER_SERVER and\nthere are 3 data-server nodes and 2 render-server nodes, then\nthis method will return 3.\n"},
  {(char*)"IsMPIInitialized", PyvtkSMSessionClient_IsMPIInitialized, METH_VARARGS,
   (char*)"V.IsMPIInitialized(int) -> bool\nC++: virtual bool IsMPIInitialized(vtkTypeUInt32 servers)\n\nReturns whether or not MPI is initialized on the specified\nserver/s. If more than 1 server is identified it will return true\nonly if all of the servers have MPI initialized.\n"},
  {(char*)"PreDisconnection", PyvtkSMSessionClient_PreDisconnection, METH_VARARGS,
   (char*)"V.PreDisconnection()\nC++: virtual void PreDisconnection()\n\n"},
  {(char*)"IsNotBusy", PyvtkSMSessionClient_IsNotBusy, METH_VARARGS,
   (char*)"V.IsNotBusy() -> bool\nC++: virtual bool IsNotBusy()\n\nFlag used to know if it is a good time to handle server\nnotification.\n"},
  {(char*)"StartBusyWork", PyvtkSMSessionClient_StartBusyWork, METH_VARARGS,
   (char*)"V.StartBusyWork()\nC++: virtual void StartBusyWork()\n\nBusyWork should be declared inside method that will request\nseveral network call that we don't want to interupt such as\nGatherInformation and Pull.\n"},
  {(char*)"EndBusyWork", PyvtkSMSessionClient_EndBusyWork, METH_VARARGS,
   (char*)"V.EndBusyWork()\nC++: virtual void EndBusyWork()\n\nBusyWork should be declared inside method that will request\nseveral network call that we don't want to interupt such as\nGatherInformation and Pull.\n"},
  {(char*)"GetCollaborationManager", PyvtkSMSessionClient_GetCollaborationManager, METH_VARARGS,
   (char*)"V.GetCollaborationManager() -> vtkSMCollaborationManager\nC++: virtual vtkSMCollaborationManager *GetCollaborationManager()\n\nReturn the instance of vtkSMCollaborationManager that will be\nlazy created at the first call.\n"},
  {(char*)"GetNextGlobalUniqueIdentifier", PyvtkSMSessionClient_GetNextGlobalUniqueIdentifier, METH_VARARGS,
   (char*)"V.GetNextGlobalUniqueIdentifier() -> int\nC++: virtual vtkTypeUInt32 GetNextGlobalUniqueIdentifier()\n\nProvides the next available identifier. This implementation works\nlocally. without any code distribution. To support the\ndistributed architecture the vtkSMSessionClient overide those\nmethod to call them on the DATA_SERVER vtkPVSessionBase instance.\n"},
  {(char*)"GetNextChunkGlobalUniqueIdentifier", PyvtkSMSessionClient_GetNextChunkGlobalUniqueIdentifier, METH_VARARGS,
   (char*)"V.GetNextChunkGlobalUniqueIdentifier(int) -> int\nC++: virtual vtkTypeUInt32 GetNextChunkGlobalUniqueIdentifier(\n    vtkTypeUInt32 chunkSize)\n\nReturn the first Id of the requested chunk. 1 =\nReverveNextIdChunk(10); | Reserved ids [1,2,3,4,5,6,7,8,9,10] 11\n= ReverveNextIdChunk(10);| Reserved ids\n[11,12,13,14,15,16,17,18,19,20] b = a + 10;\n"},
  {(char*)"OnServerNotificationMessageRMI", PyvtkSMSessionClient_OnServerNotificationMessageRMI, METH_VARARGS,
   (char*)"V.OnServerNotificationMessageRMI(, int)\nC++: void OnServerNotificationMessageRMI(void *message,\n    int message_length)\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkSMSessionClient_StaticNew()
{
  return vtkSMSessionClient::New();
}

PyObject *PyVTKClass_vtkSMSessionClientNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkSMSessionClient_StaticNew,
    PyvtkSMSessionClient_Methods,
    "vtkSMSessionClient", modulename,
    NULL, NULL,
    PyvtkSMSessionClient_Doc(),
    PyVTKClass_vtkSMSessionNew(modulename));
  return cls;
}

const char **PyvtkSMSessionClient_Doc()
{
  static const char *docstring[] = {
    "vtkSMSessionClient\n\n",
    "Superclass: vtkSMSession\n\n",
    "vtkSMSessionClient is a remote-session that connects to a remote\nserver. vtkSMSessionClient supports both connecting a pvserver as\nwell as connecting a pvdataserver/pvrenderserver.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkSMSessionClient(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkSMSessionClientNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkSMSessionClient", o) != 0)
    {
    Py_DECREF(o);
    }

}

