// python wrapper for vtkSMSession
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkSMSession.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkSMSession(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkSMSessionNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkPVSessionBaseNew
extern "C" { PyObject *PyVTKClass_vtkPVSessionBaseNew(const char *); }
#define DECLARED_PyVTKClass_vtkPVSessionBaseNew
#endif

static const char **PyvtkSMSession_Doc();

#ifndef DECLARED_PyvtkSMSession_RenderingMode_Type
extern VTK_PYTHON_EXPORT PyTypeObject PyvtkSMSession_RenderingMode_Type;
#define DECLARED_PyvtkSMSession_RenderingMode_Type
#endif

PyTypeObject PyvtkSMSession_RenderingMode_Type = {
  PyObject_HEAD_INIT(&PyType_Type)
  0,
  (char*)"RenderingMode", // tp_name
  sizeof(PyIntObject), // tp_basicsize
  0, // tp_itemsize
  0, // tp_dealloc
  0, // tp_print
  0, // tp_getattr
  0, // tp_setattr
  0, // tp_compare
  0, // tp_repr
  0, // tp_as_number
  0, // tp_as_sequence
  0, // tp_as_mapping
  0, // tp_hash
  0, // tp_call
  0, // tp_str
  0, // tp_getattro
  0, // tp_setattro
  0, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  0, // tp_doc
  0, // tp_traverse
  0, // tp_clear
  0, // tp_richcompare
  0, // tp_weaklistoffset
  0, // tp_iter
  0, // tp_iternext
  0, // tp_methods
  0, // tp_members
  0, // tp_getset
  &PyInt_Type, // tp_base
  0, // tp_dict
  0, // tp_descr_get
  0, // tp_descr_set
  0, // tp_dictoffset
  0, // tp_init
  0, // tp_alloc
  0, // tp_new
  PyObject_Del, // tp_free
  0, // tp_is_gc
  0, // tp_bases
  0, // tp_mro
  0, // tp_cache
  0, // tp_subclasses
  0, // tp_weaklist
  VTK_WRAP_PYTHON_SUPRESS_UNINITIALIZED
};

PyObject *PyvtkSMSession_RenderingMode_FromEnum(int val)
{
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkSMSession_RenderingMode_Type);
  self->ob_ival = val;
  return (PyObject *)self;
}


static PyObject *
PyvtkSMSession_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSession *op = static_cast<vtkSMSession *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkSMSession::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMSession_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSession *op = static_cast<vtkSMSession *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSMSession::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMSession_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSession *op = static_cast<vtkSMSession *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkSMSession *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSMSession::NewInstance());

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
PyvtkSMSession_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkSMSession *tempr = vtkSMSession::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMSession_GetCollaborationManager(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCollaborationManager");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSession *op = static_cast<vtkSMSession *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkSMCollaborationManager *tempr = (ap.IsBound() ?
      op->GetCollaborationManager() :
      op->vtkSMSession::GetCollaborationManager());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMSession_GetURI(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetURI");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSession *op = static_cast<vtkSMSession *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetURI() :
      op->vtkSMSession::GetURI());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMSession_GetSessionProxyManager(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSessionProxyManager");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSession *op = static_cast<vtkSMSession *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkSMSessionProxyManager *tempr = (ap.IsBound() ?
      op->GetSessionProxyManager() :
      op->vtkSMSession::GetSessionProxyManager());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMSession_GetNumberOfProcesses(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfProcesses");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSession *op = static_cast<vtkSMSession *>(vp);

  unsigned int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfProcesses(temp0) :
      op->vtkSMSession::GetNumberOfProcesses(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMSession_IsMPIInitialized(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsMPIInitialized");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSession *op = static_cast<vtkSMSession *>(vp);

  unsigned int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    bool tempr = (ap.IsBound() ?
      op->IsMPIInitialized(temp0) :
      op->vtkSMSession::IsMPIInitialized(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMSession_GetProxyLocator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProxyLocator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSession *op = static_cast<vtkSMSession *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkSMProxyLocator *tempr = (ap.IsBound() ?
      op->GetProxyLocator() :
      op->vtkSMSession::GetProxyLocator());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMSession_GetRenderClientMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRenderClientMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSession *op = static_cast<vtkSMSession *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned int tempr = (ap.IsBound() ?
      op->GetRenderClientMode() :
      op->vtkSMSession::GetRenderClientMode());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMSession_GetStateLocator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStateLocator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSession *op = static_cast<vtkSMSession *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkSMStateLocator *tempr = (ap.IsBound() ?
      op->GetStateLocator() :
      op->vtkSMSession::GetStateLocator());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMSession_GetIsAlive(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIsAlive");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSession *op = static_cast<vtkSMSession *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetIsAlive() :
      op->vtkSMSession::GetIsAlive());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMSession_PushState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PushState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSession *op = static_cast<vtkSMSession *>(vp);

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
      op->vtkSMSession::PushState(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMSession_NotifyAllClients(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NotifyAllClients");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSession *op = static_cast<vtkSMSession *>(vp);

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
      op->vtkSMSession::NotifyAllClients(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMSession_NotifyOtherClients(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NotifyOtherClients");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSession *op = static_cast<vtkSMSession *>(vp);

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
      op->vtkSMSession::NotifyOtherClients(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMSession_PreDisconnection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PreDisconnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSession *op = static_cast<vtkSMSession *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->PreDisconnection();
      }
    else
      {
      op->vtkSMSession::PreDisconnection();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMSession_ConnectToCatalyst(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "ConnectToCatalyst");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkIdType tempr = vtkSMSession::ConnectToCatalyst();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMSession_ConnectToSelf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "ConnectToSelf");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkIdType tempr = vtkSMSession::ConnectToSelf();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMSession_ConnectToRemote_s1(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "ConnectToRemote");

  char *temp0 = NULL;
  int temp1;
  PyObject *result = NULL;

  if (ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    vtkIdType tempr = vtkSMSession::ConnectToRemote(temp0, temp1);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkSMSession_ConnectToRemote_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "ConnectToRemote");

  char *temp0 = NULL;
  int temp1;
  char *temp2 = NULL;
  int temp3;
  PyObject *result = NULL;

  if (ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
    {
    vtkIdType tempr = vtkSMSession::ConnectToRemote(temp0, temp1, temp2, temp3);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkSMSession_ConnectToRemote(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
    {
    case 2:
      return PyvtkSMSession_ConnectToRemote_s1(self, args);
    case 4:
      return PyvtkSMSession_ConnectToRemote_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "ConnectToRemote");
  return NULL;
}



static PyObject *
PyvtkSMSession_ReverseConnectToRemote_s1(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "ReverseConnectToRemote");

  int temp0;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkIdType tempr = vtkSMSession::ReverseConnectToRemote(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkSMSession_ReverseConnectToRemote_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "ReverseConnectToRemote");

  int temp0;
  int temp1;
  PyObject *result = NULL;

  if (ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    vtkIdType tempr = vtkSMSession::ReverseConnectToRemote(temp0, temp1);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkSMSession_ReverseConnectToRemote(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
    {
    case 1:
      return PyvtkSMSession_ReverseConnectToRemote_s1(self, args);
    case 2:
      return PyvtkSMSession_ReverseConnectToRemote_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "ReverseConnectToRemote");
  return NULL;
}



static PyObject *
PyvtkSMSession_Disconnect_s1(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "Disconnect");

  vtkIdType temp0;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkSMSession::Disconnect(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkSMSession_Disconnect_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "Disconnect");

  vtkSMSession *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMSession"))
    {
    vtkSMSession::Disconnect(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkSMSession_Disconnect_Methods[] = {
  {NULL, PyvtkSMSession_Disconnect_s1, METH_VARARGS | METH_STATIC,
   (char*)"L"},
  {NULL, PyvtkSMSession_Disconnect_s2, METH_VARARGS | METH_STATIC,
   (char*)"O *vtkSMSession"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkSMSession_Disconnect(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkSMSession_Disconnect_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
    {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "Disconnect");
  return NULL;
}



static PyObject *
PyvtkSMSession_GetIsAutoMPI(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIsAutoMPI");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSession *op = static_cast<vtkSMSession *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetIsAutoMPI() :
      op->vtkSMSession::GetIsAutoMPI());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkSMSession_Methods[] = {
  {(char*)"GetClassName", PyvtkSMSession_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkSMSession_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkSMSession_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkSMSession\nC++: vtkSMSession *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkSMSession_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkSMSession\nC++: vtkSMSession *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetCollaborationManager", PyvtkSMSession_GetCollaborationManager, METH_VARARGS,
   (char*)"V.GetCollaborationManager() -> vtkSMCollaborationManager\nC++: virtual vtkSMCollaborationManager *GetCollaborationManager()\n\nReturn the instance of vtkSMCollaborationManager that will be\nlazy created at the first call. By default we return NULL\n"},
  {(char*)"GetURI", PyvtkSMSession_GetURI, METH_VARARGS,
   (char*)"V.GetURI() -> string\nC++: virtual const char *GetURI()\n\nReturn the URL that define where the session is connected to. URI\nhas enough information to know the type of connection, server\nhosts and ports.\n"},
  {(char*)"GetSessionProxyManager", PyvtkSMSession_GetSessionProxyManager, METH_VARARGS,
   (char*)"V.GetSessionProxyManager() -> vtkSMSessionProxyManager\nC++: vtkSMSessionProxyManager *GetSessionProxyManager()\n\nReturns the vtkSMSessionProxyManager associated with this\nsession.\n"},
  {(char*)"GetNumberOfProcesses", PyvtkSMSession_GetNumberOfProcesses, METH_VARARGS,
   (char*)"V.GetNumberOfProcesses(int) -> int\nC++: virtual int GetNumberOfProcesses(vtkTypeUInt32 servers)\n\nReturns the number of processes on the given server/s. If more\nthan 1 server is identified, then it returns the maximum number\nof processes e.g. is servers = DATA_SERVER | RENDER_SERVER and\nthere are 3 data-server nodes and 2 render-server nodes, then\nthis method will return 3. Implementation provided simply returns\nthe number of local processes.\n"},
  {(char*)"IsMPIInitialized", PyvtkSMSession_IsMPIInitialized, METH_VARARGS,
   (char*)"V.IsMPIInitialized(int) -> bool\nC++: virtual bool IsMPIInitialized(vtkTypeUInt32 servers)\n\nReturns whether or not MPI is initialized on the specified\nserver/s. If more than 1 server is identified it will return true\nonly if all of the servers have MPI initialized.\n"},
  {(char*)"GetProxyLocator", PyvtkSMSession_GetProxyLocator, METH_VARARGS,
   (char*)"V.GetProxyLocator() -> vtkSMProxyLocator\nC++: vtkSMProxyLocator *GetProxyLocator()\n\n"},
  {(char*)"GetRenderClientMode", PyvtkSMSession_GetRenderClientMode, METH_VARARGS,
   (char*)"V.GetRenderClientMode() -> int\nC++: virtual unsigned int GetRenderClientMode()\n\nConvenient method to determine if the rendering is done in a\npvrenderer or not. For built-in or pvserver you will get\nRENDERING_UNIFIED and for a setting with a pvrenderer you will\nget RENDERING_SPLIT. If the session is something else it should\nreply RENDERING_NOT_AVAILABLE.\n"},
  {(char*)"GetStateLocator", PyvtkSMSession_GetStateLocator, METH_VARARGS,
   (char*)"V.GetStateLocator() -> vtkSMStateLocator\nC++: vtkSMStateLocator *GetStateLocator()\n\nProvide an access to the session state locator that can provide\nthe last state of a given remote object that have been pushed.\nThat locator will be filled by RemoteObject state only if the\nUndoStackBuilder in vtkSMProxyManager is non-null.\n"},
  {(char*)"GetIsAlive", PyvtkSMSession_GetIsAlive, METH_VARARGS,
   (char*)"V.GetIsAlive() -> bool\nC++: virtual bool GetIsAlive()\n\nBuiltin session is always alive.\n"},
  {(char*)"PushState", PyvtkSMSession_PushState, METH_VARARGS,
   (char*)"V.PushState(vtkSMMessage)\nC++: virtual void PushState(vtkSMMessage *msg)\n\nPush the state message. Overridden to ensure that the information\nin the undo-redo state manager is updated.\n"},
  {(char*)"NotifyAllClients", PyvtkSMSession_NotifyAllClients, METH_VARARGS,
   (char*)"V.NotifyAllClients(vtkSMMessage)\nC++: virtual void NotifyAllClients(const vtkSMMessage *msg)\n\nSends the message to all clients.\n"},
  {(char*)"NotifyOtherClients", PyvtkSMSession_NotifyOtherClients, METH_VARARGS,
   (char*)"V.NotifyOtherClients(vtkSMMessage)\nC++: virtual void NotifyOtherClients(const vtkSMMessage *)\n\nSends the message to all but the active client-session.\n"},
  {(char*)"PreDisconnection", PyvtkSMSession_PreDisconnection, METH_VARARGS,
   (char*)"V.PreDisconnection()\nC++: virtual void PreDisconnection()\n\n"},
  {(char*)"ConnectToCatalyst", PyvtkSMSession_ConnectToCatalyst, METH_VARARGS | METH_STATIC,
   (char*)"V.ConnectToCatalyst() -> int\nC++: static vtkIdType ConnectToCatalyst()\n\nThese are static helper methods that help create Catalyst\nParaView sessions. They register the session with the process\nmodule and return the session id. Returns 0 on failure. This\noverload is used to create a catalyst built-in session.\n"},
  {(char*)"ConnectToSelf", PyvtkSMSession_ConnectToSelf, METH_VARARGS | METH_STATIC,
   (char*)"V.ConnectToSelf() -> int\nC++: static vtkIdType ConnectToSelf()\n\nThese are static helper methods that help create standard\nParaView sessions. They register the session with the process\nmodule and return the session id. Returns 0 on failure. This\noverload is used to create a built-in session.\n"},
  {(char*)"ConnectToRemote", PyvtkSMSession_ConnectToRemote, METH_VARARGS | METH_STATIC,
   (char*)"V.ConnectToRemote(string, int) -> int\nC++: static vtkIdType ConnectToRemote(const char *hostname,\n    int port)\nV.ConnectToRemote(string, int, string, int) -> int\nC++: static vtkIdType ConnectToRemote(const char *dshost,\n    int dsport, const char *rshost, int rsport)\n\nThese are static helper methods that help create standard\nParaView sessions. They register the session with the process\nmodule and return the session id. Returns 0 on failure. This\noverload is used to create a client-server session on client.\n"},
  {(char*)"ReverseConnectToRemote", PyvtkSMSession_ReverseConnectToRemote, METH_VARARGS | METH_STATIC,
   (char*)"V.ReverseConnectToRemote(int) -> int\nC++: static vtkIdType ReverseConnectToRemote(int port)\nV.ReverseConnectToRemote(int, int) -> int\nC++: static vtkIdType ReverseConnectToRemote(int dsport,\n    int rsport)\n\nSame as ConnectToRemote() except that it waits for a reverse\nconnection. This is a blocking call. One can optionally provide a\ncallback that can be called periodically while this call is\nblocked. The callback should return true, if the connection\nshould continue waiting, else return false to abort the wait.\n"},
  {(char*)"Disconnect", PyvtkSMSession_Disconnect, METH_VARARGS | METH_STATIC,
   (char*)"V.Disconnect(int)\nC++: static void Disconnect(vtkIdType sessionid)\nV.Disconnect(vtkSMSession)\nC++: static void Disconnect(vtkSMSession *session)\n\nUse this method to disconnect from a session. This ensures that\nappropriate cleanup happens before the disconnect such as\nunregistering proxies. It also ensures that if in collaboration\nmode, the proxy unregistering doesn't affect other connected\nclients.\n"},
  {(char*)"GetIsAutoMPI", PyvtkSMSession_GetIsAutoMPI, METH_VARARGS,
   (char*)"V.GetIsAutoMPI() -> bool\nC++: bool GetIsAutoMPI()\n\nThis flag if set indicates that the current session module has\nautomatically started \"pvservers\" as MPI processes as default\npipeline.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkSMSession_StaticNew()
{
  return vtkSMSession::New();
}

PyObject *PyVTKClass_vtkSMSessionNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkSMSession_StaticNew,
    PyvtkSMSession_Methods,
    "vtkSMSession", modulename,
    NULL, NULL,
    PyvtkSMSession_Doc(),
    PyVTKClass_vtkPVSessionBaseNew(modulename));

  if (cls)
    {
    PyObject *d = PyVTKClass_GetDict(cls);
    PyObject *o;

    PyType_Ready(&PyvtkSMSession_RenderingMode_Type);
    PyvtkSMSession_RenderingMode_Type.tp_new = NULL;

    o = (PyObject *)&PyvtkSMSession_RenderingMode_Type;
    if (o && PyDict_SetItemString(d, (char *)"RenderingMode", o) != 0)
      {
      Py_DECREF(o);
      }

    for (int c = 0; c < 3; c++)
      {
      typedef vtkSMSession::RenderingMode cxx_enum_type;

      static const struct { const char *name; cxx_enum_type value; }
        constants[3] = {
          { "RENDERING_NOT_AVAILABLE", vtkSMSession::RENDERING_NOT_AVAILABLE },
          { "RENDERING_UNIFIED", vtkSMSession::RENDERING_UNIFIED },
          { "RENDERING_SPLIT", vtkSMSession::RENDERING_SPLIT },
        };

      o = PyvtkSMSession_RenderingMode_FromEnum(constants[c].value);
      if (o)
        {
        PyDict_SetItemString(d, (char *)constants[c].name, o);
        Py_DECREF(o);
        }
      }

    }

  return cls;
}

const char **PyvtkSMSession_Doc()
{
  static const char *docstring[] = {
    "vtkSMSession\n\n",
    "Superclass: vtkPVSessionBase\n\n",
    "vtkSMSession is the default ParaView session. This class can be used\nas the session for non-client-server configurations eg. builtin mode\nor batch.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkSMSession(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkSMSessionNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkSMSession", o) != 0)
    {
    Py_DECREF(o);
    }

}

