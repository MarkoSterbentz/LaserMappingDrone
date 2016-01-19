// python wrapper for vtkPVSessionBase
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkPVSessionBase.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkPVSessionBase(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkPVSessionBaseNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkPVSessionNew
extern "C" { PyObject *PyVTKClass_vtkPVSessionNew(const char *); }
#define DECLARED_PyVTKClass_vtkPVSessionNew
#endif

static const char **PyvtkPVSessionBase_Doc();

#ifndef DECLARED_PyvtkPVSessionBase_EventIds_Type
extern VTK_PYTHON_EXPORT PyTypeObject PyvtkPVSessionBase_EventIds_Type;
#define DECLARED_PyvtkPVSessionBase_EventIds_Type
#endif

PyTypeObject PyvtkPVSessionBase_EventIds_Type = {
  PyObject_HEAD_INIT(&PyType_Type)
  0,
  (char*)"EventIds", // tp_name
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

PyObject *PyvtkPVSessionBase_EventIds_FromEnum(int val)
{
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkPVSessionBase_EventIds_Type);
  self->ob_ival = val;
  return (PyObject *)self;
}


static PyObject *
PyvtkPVSessionBase_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSessionBase *op = static_cast<vtkPVSessionBase *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkPVSessionBase::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVSessionBase_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSessionBase *op = static_cast<vtkPVSessionBase *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPVSessionBase::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVSessionBase_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSessionBase *op = static_cast<vtkPVSessionBase *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPVSessionBase *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPVSessionBase::NewInstance());

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
PyvtkPVSessionBase_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkPVSessionBase *tempr = vtkPVSessionBase::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVSessionBase_GetServerInformation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetServerInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSessionBase *op = static_cast<vtkPVSessionBase *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPVServerInformation *tempr = (ap.IsBound() ?
      op->GetServerInformation() :
      op->vtkPVSessionBase::GetServerInformation());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVSessionBase_GetMPIMToNSocketConnection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMPIMToNSocketConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSessionBase *op = static_cast<vtkPVSessionBase *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkMPIMToNSocketConnection *tempr = (ap.IsBound() ?
      op->GetMPIMToNSocketConnection() :
      op->vtkPVSessionBase::GetMPIMToNSocketConnection());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVSessionBase_PushState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PushState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSessionBase *op = static_cast<vtkPVSessionBase *>(vp);

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
      op->vtkPVSessionBase::PushState(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVSessionBase_PullState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PullState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSessionBase *op = static_cast<vtkPVSessionBase *>(vp);

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
      op->vtkPVSessionBase::PullState(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVSessionBase_GatherInformation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GatherInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSessionBase *op = static_cast<vtkPVSessionBase *>(vp);

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
      op->vtkPVSessionBase::GatherInformation(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVSessionBase_NotifyAllClients(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NotifyAllClients");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSessionBase *op = static_cast<vtkPVSessionBase *>(vp);

  vtkSMMessage *temp0 = NULL;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMMessage"))
    {
    op->NotifyAllClients(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVSessionBase_NotifyOtherClients(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NotifyOtherClients");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSessionBase *op = static_cast<vtkPVSessionBase *>(vp);

  vtkSMMessage *temp0 = NULL;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMMessage"))
    {
    op->NotifyOtherClients(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVSessionBase_GetSessionCore(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSessionCore");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSessionBase *op = static_cast<vtkPVSessionBase *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPVSessionCore *tempr = (ap.IsBound() ?
      op->GetSessionCore() :
      op->vtkPVSessionBase::GetSessionCore());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVSessionBase_GetProxyDefinitionManager(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProxyDefinitionManager");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSessionBase *op = static_cast<vtkPVSessionBase *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkSIProxyDefinitionManager *tempr = (ap.IsBound() ?
      op->GetProxyDefinitionManager() :
      op->vtkPVSessionBase::GetProxyDefinitionManager());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVSessionBase_GetSIObject(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSIObject");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSessionBase *op = static_cast<vtkPVSessionBase *>(vp);

  unsigned int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkSIObject *tempr = (ap.IsBound() ?
      op->GetSIObject(temp0) :
      op->vtkPVSessionBase::GetSIObject(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVSessionBase_UnRegisterSIObject(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UnRegisterSIObject");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSessionBase *op = static_cast<vtkPVSessionBase *>(vp);

  vtkSMMessage *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMMessage"))
    {
    if (ap.IsBound())
      {
      op->UnRegisterSIObject(temp0);
      }
    else
      {
      op->vtkPVSessionBase::UnRegisterSIObject(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVSessionBase_RegisterSIObject(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RegisterSIObject");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSessionBase *op = static_cast<vtkPVSessionBase *>(vp);

  vtkSMMessage *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMMessage"))
    {
    if (ap.IsBound())
      {
      op->RegisterSIObject(temp0);
      }
    else
      {
      op->vtkPVSessionBase::RegisterSIObject(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVSessionBase_GetRemoteObject(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRemoteObject");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSessionBase *op = static_cast<vtkPVSessionBase *>(vp);

  unsigned int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkObject *tempr = (ap.IsBound() ?
      op->GetRemoteObject(temp0) :
      op->vtkPVSessionBase::GetRemoteObject(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVSessionBase_GetAllRemoteObjects(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAllRemoteObjects");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSessionBase *op = static_cast<vtkPVSessionBase *>(vp);

  vtkCollection *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCollection"))
    {
    if (ap.IsBound())
      {
      op->GetAllRemoteObjects(temp0);
      }
    else
      {
      op->vtkPVSessionBase::GetAllRemoteObjects(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVSessionBase_GetNextGlobalUniqueIdentifier(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNextGlobalUniqueIdentifier");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSessionBase *op = static_cast<vtkPVSessionBase *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned int tempr = (ap.IsBound() ?
      op->GetNextGlobalUniqueIdentifier() :
      op->vtkPVSessionBase::GetNextGlobalUniqueIdentifier());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVSessionBase_GetNextChunkGlobalUniqueIdentifier(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNextChunkGlobalUniqueIdentifier");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSessionBase *op = static_cast<vtkPVSessionBase *>(vp);

  unsigned int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    unsigned int tempr = (ap.IsBound() ?
      op->GetNextChunkGlobalUniqueIdentifier(temp0) :
      op->vtkPVSessionBase::GetNextChunkGlobalUniqueIdentifier(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVSessionBase_IsProcessingRemoteNotification(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsProcessingRemoteNotification");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSessionBase *op = static_cast<vtkPVSessionBase *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->IsProcessingRemoteNotification() :
      op->vtkPVSessionBase::IsProcessingRemoteNotification());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVSessionBase_UseSessionCoreOf(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseSessionCoreOf");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSessionBase *op = static_cast<vtkPVSessionBase *>(vp);

  vtkPVSessionBase *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPVSessionBase"))
    {
    if (ap.IsBound())
      {
      op->UseSessionCoreOf(temp0);
      }
    else
      {
      op->vtkPVSessionBase::UseSessionCoreOf(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkPVSessionBase_Methods[] = {
  {(char*)"GetClassName", PyvtkPVSessionBase_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkPVSessionBase_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkPVSessionBase_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkPVSessionBase\nC++: vtkPVSessionBase *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkPVSessionBase_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkPVSessionBase\nC++: vtkPVSessionBase *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetServerInformation", PyvtkPVSessionBase_GetServerInformation, METH_VARARGS,
   (char*)"V.GetServerInformation() -> vtkPVServerInformation\nC++: virtual vtkPVServerInformation *GetServerInformation()\n\nvtkPVServerInformation is an information-object that provides\ninformation about the server processes. These include server-side\ncapabilities as well as server-side command line arguments e.g.\ntile-display parameters. Use this method to obtain the\nserver-side information. Overridden to provide support for\nnon-remote-server case. We simply read the local process\ninformation and return it.\n"},
  {(char*)"GetMPIMToNSocketConnection", PyvtkPVSessionBase_GetMPIMToNSocketConnection, METH_VARARGS,
   (char*)"V.GetMPIMToNSocketConnection() -> vtkMPIMToNSocketConnection\nC++: virtual vtkMPIMToNSocketConnection *GetMPIMToNSocketConnection(\n    )\n\nThis is socket connection, if any to communicate between the\ndata-server and render-server nodes. Forwarded for\nvtkPVSessionCore.\n"},
  {(char*)"PushState", PyvtkPVSessionBase_PushState, METH_VARARGS,
   (char*)"V.PushState(vtkSMMessage)\nC++: virtual void PushState(vtkSMMessage *msg)\n\nPush the state message.\n"},
  {(char*)"PullState", PyvtkPVSessionBase_PullState, METH_VARARGS,
   (char*)"V.PullState(vtkSMMessage)\nC++: virtual void PullState(vtkSMMessage *msg)\n\nPull the state message.\n"},
  {(char*)"GatherInformation", PyvtkPVSessionBase_GatherInformation, METH_VARARGS,
   (char*)"V.GatherInformation(int, vtkPVInformation, int) -> bool\nC++: virtual bool GatherInformation(vtkTypeUInt32 location,\n    vtkPVInformation *information, vtkTypeUInt32 globalid)\n\nGather information about an object referred by the\nglobalid.location identifies the processes to gather the\ninformation from.\n"},
  {(char*)"NotifyAllClients", PyvtkPVSessionBase_NotifyAllClients, METH_VARARGS,
   (char*)"V.NotifyAllClients(vtkSMMessage)\nC++: virtual void NotifyAllClients(const vtkSMMessage *)\n\nSends the message to all clients.\n"},
  {(char*)"NotifyOtherClients", PyvtkPVSessionBase_NotifyOtherClients, METH_VARARGS,
   (char*)"V.NotifyOtherClients(vtkSMMessage)\nC++: virtual void NotifyOtherClients(const vtkSMMessage *)\n\nSends the message to all but the active client-session.\n"},
  {(char*)"GetSessionCore", PyvtkPVSessionBase_GetSessionCore, METH_VARARGS,
   (char*)"V.GetSessionCore() -> vtkPVSessionCore\nC++: vtkPVSessionCore *GetSessionCore()\n\nProvides access to the session core.\n"},
  {(char*)"GetProxyDefinitionManager", PyvtkPVSessionBase_GetProxyDefinitionManager, METH_VARARGS,
   (char*)"V.GetProxyDefinitionManager() -> vtkSIProxyDefinitionManager\nC++: vtkSIProxyDefinitionManager *GetProxyDefinitionManager()\n\nGet the ProxyDefinitionManager.\n"},
  {(char*)"GetSIObject", PyvtkPVSessionBase_GetSIObject, METH_VARARGS,
   (char*)"V.GetSIObject(int) -> vtkSIObject\nC++: vtkSIObject *GetSIObject(vtkTypeUInt32 globalid)\n\nReturns a vtkSIObject or subclass given its global id, if any.\n"},
  {(char*)"UnRegisterSIObject", PyvtkPVSessionBase_UnRegisterSIObject, METH_VARARGS,
   (char*)"V.UnRegisterSIObject(vtkSMMessage)\nC++: virtual void UnRegisterSIObject(vtkSMMessage *msg)\n\nUnregister server side object. (SIObject)\n"},
  {(char*)"RegisterSIObject", PyvtkPVSessionBase_RegisterSIObject, METH_VARARGS,
   (char*)"V.RegisterSIObject(vtkSMMessage)\nC++: virtual void RegisterSIObject(vtkSMMessage *msg)\n\nRegister server side object. (SIObject)\n"},
  {(char*)"GetRemoteObject", PyvtkPVSessionBase_GetRemoteObject, METH_VARARGS,
   (char*)"V.GetRemoteObject(int) -> vtkObject\nC++: vtkObject *GetRemoteObject(vtkTypeUInt32 globalid)\n\nReturn a vtkSMRemoteObject given its global id if any otherwise\nreturn NULL;\n"},
  {(char*)"GetAllRemoteObjects", PyvtkPVSessionBase_GetAllRemoteObjects, METH_VARARGS,
   (char*)"V.GetAllRemoteObjects(vtkCollection)\nC++: virtual void GetAllRemoteObjects(vtkCollection *collection)\n\nAllow the user to fill its vtkCollection with all RemoteObject\nThis could be usefull when you want to hold a reference to them\nto prevent any deletion across several method call.\n"},
  {(char*)"GetNextGlobalUniqueIdentifier", PyvtkPVSessionBase_GetNextGlobalUniqueIdentifier, METH_VARARGS,
   (char*)"V.GetNextGlobalUniqueIdentifier() -> int\nC++: virtual vtkTypeUInt32 GetNextGlobalUniqueIdentifier()\n\nProvides the next available identifier. This implementation works\nlocally. without any code distribution. To support the\ndistributed architecture the vtkSMSessionClient overide those\nmethod to call them on the DATA_SERVER vtkPVSessionBase instance.\n"},
  {(char*)"GetNextChunkGlobalUniqueIdentifier", PyvtkPVSessionBase_GetNextChunkGlobalUniqueIdentifier, METH_VARARGS,
   (char*)"V.GetNextChunkGlobalUniqueIdentifier(int) -> int\nC++: virtual vtkTypeUInt32 GetNextChunkGlobalUniqueIdentifier(\n    vtkTypeUInt32 chunkSize)\n\nReturn the first Id of the requested chunk. 1 =\nReverveNextIdChunk(10); | Reserved ids [1,2,3,4,5,6,7,8,9,10] 11\n= ReverveNextIdChunk(10);| Reserved ids\n[11,12,13,14,15,16,17,18,19,20] b = a + 10;\n"},
  {(char*)"IsProcessingRemoteNotification", PyvtkPVSessionBase_IsProcessingRemoteNotification, METH_VARARGS,
   (char*)"V.IsProcessingRemoteNotification() -> bool\nC++: virtual bool IsProcessingRemoteNotification()\n\nThis propertie is used to discard ignore_synchronization proxy\nproperty when we load protobuf states. Therefore, if we load any\ncamera state while that property is true, this won't affect the\nproxy/property state at all. It will simply remain the same.\n"},
  {(char*)"UseSessionCoreOf", PyvtkPVSessionBase_UseSessionCoreOf, METH_VARARGS,
   (char*)"V.UseSessionCoreOf(vtkPVSessionBase)\nC++: virtual void UseSessionCoreOf(vtkPVSessionBase *other)\n\nUpdate internal session core in order to use the one used in\nanother session\n"},
  {NULL, NULL, 0, NULL}
};

PyObject *PyVTKClass_vtkPVSessionBaseNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(NULL,
    PyvtkPVSessionBase_Methods,
    "vtkPVSessionBase", modulename,
    NULL, NULL,
    PyvtkPVSessionBase_Doc(),
    PyVTKClass_vtkPVSessionNew(modulename));

  if (cls)
    {
    PyObject *d = PyVTKClass_GetDict(cls);
    PyObject *o;

    PyType_Ready(&PyvtkPVSessionBase_EventIds_Type);
    PyvtkPVSessionBase_EventIds_Type.tp_new = NULL;

    o = (PyObject *)&PyvtkPVSessionBase_EventIds_Type;
    if (o && PyDict_SetItemString(d, (char *)"EventIds", o) != 0)
      {
      Py_DECREF(o);
      }

    for (int c = 0; c < 4; c++)
      {
      typedef vtkPVSessionBase::EventIds cxx_enum_type;

      static const struct { const char *name; cxx_enum_type value; }
        constants[4] = {
          { "RegisterRemoteObjectEvent", vtkPVSessionBase::RegisterRemoteObjectEvent },
          { "UnRegisterRemoteObjectEvent", vtkPVSessionBase::UnRegisterRemoteObjectEvent },
          { "ProcessingRemoteEnd", vtkPVSessionBase::ProcessingRemoteEnd },
          { "ConnectionLost", vtkPVSessionBase::ConnectionLost },
        };

      o = PyvtkPVSessionBase_EventIds_FromEnum(constants[c].value);
      if (o)
        {
        PyDict_SetItemString(d, (char *)constants[c].name, o);
        Py_DECREF(o);
        }
      }

    }

  return cls;
}

const char **PyvtkPVSessionBase_Doc()
{
  static const char *docstring[] = {
    "vtkPVSessionBase\n\n",
    "Superclass: vtkPVSession\n\n",
    "Abstract class used to provide the main implementation of the\nParaView session methods for the following classes: vtkSMSession,\n                                           vtkSMSessionClient,\n                                           vtkSMSessionServer\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPVSessionBase(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPVSessionBaseNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPVSessionBase", o) != 0)
    {
    Py_DECREF(o);
    }

}

