// python wrapper for vtkSMCollaborationManager
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkSMCollaborationManager.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkSMCollaborationManager(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkSMCollaborationManagerNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkSMRemoteObjectNew
extern "C" { PyObject *PyVTKClass_vtkSMRemoteObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkSMRemoteObjectNew
#endif

static const char **PyvtkSMCollaborationManager_Doc();

#ifndef DECLARED_PyvtkSMCollaborationManager_EventType_Type
extern VTK_PYTHON_EXPORT PyTypeObject PyvtkSMCollaborationManager_EventType_Type;
#define DECLARED_PyvtkSMCollaborationManager_EventType_Type
#endif

PyTypeObject PyvtkSMCollaborationManager_EventType_Type = {
  PyObject_HEAD_INIT(&PyType_Type)
  0,
  (char*)"EventType", // tp_name
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

PyObject *PyvtkSMCollaborationManager_EventType_FromEnum(int val)
{
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkSMCollaborationManager_EventType_Type);
  self->ob_ival = val;
  return (PyObject *)self;
}


static PyObject *
PyvtkSMCollaborationManager_GetReservedGlobalID(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetReservedGlobalID");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    unsigned int tempr = vtkSMCollaborationManager::GetReservedGlobalID();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMCollaborationManager_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMCollaborationManager *op = static_cast<vtkSMCollaborationManager *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkSMCollaborationManager::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMCollaborationManager_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMCollaborationManager *op = static_cast<vtkSMCollaborationManager *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSMCollaborationManager::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMCollaborationManager_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMCollaborationManager *op = static_cast<vtkSMCollaborationManager *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkSMCollaborationManager *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSMCollaborationManager::NewInstance());

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
PyvtkSMCollaborationManager_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkSMCollaborationManager *tempr = vtkSMCollaborationManager::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMCollaborationManager_GetGlobalID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGlobalID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMCollaborationManager *op = static_cast<vtkSMCollaborationManager *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned int tempr = (ap.IsBound() ?
      op->GetGlobalID() :
      op->vtkSMCollaborationManager::GetGlobalID());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMCollaborationManager_SetSession(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSession");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMCollaborationManager *op = static_cast<vtkSMCollaborationManager *>(vp);

  vtkSMSession *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMSession"))
    {
    if (ap.IsBound())
      {
      op->SetSession(temp0);
      }
    else
      {
      op->vtkSMCollaborationManager::SetSession(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMCollaborationManager_PromoteToMaster(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PromoteToMaster");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMCollaborationManager *op = static_cast<vtkSMCollaborationManager *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->PromoteToMaster(temp0);
      }
    else
      {
      op->vtkSMCollaborationManager::PromoteToMaster(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMCollaborationManager_FollowUser(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FollowUser");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMCollaborationManager *op = static_cast<vtkSMCollaborationManager *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->FollowUser(temp0);
      }
    else
      {
      op->vtkSMCollaborationManager::FollowUser(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMCollaborationManager_GetFollowedUser(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFollowedUser");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMCollaborationManager *op = static_cast<vtkSMCollaborationManager *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetFollowedUser() :
      op->vtkSMCollaborationManager::GetFollowedUser());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMCollaborationManager_IsMaster(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsMaster");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMCollaborationManager *op = static_cast<vtkSMCollaborationManager *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->IsMaster() :
      op->vtkSMCollaborationManager::IsMaster());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMCollaborationManager_GetMasterId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMasterId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMCollaborationManager *op = static_cast<vtkSMCollaborationManager *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetMasterId() :
      op->vtkSMCollaborationManager::GetMasterId());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMCollaborationManager_GetUserId_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUserId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMCollaborationManager *op = static_cast<vtkSMCollaborationManager *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetUserId() :
      op->vtkSMCollaborationManager::GetUserId());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkSMCollaborationManager_GetUserId_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUserId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMCollaborationManager *op = static_cast<vtkSMCollaborationManager *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->GetUserId(temp0) :
      op->vtkSMCollaborationManager::GetUserId(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkSMCollaborationManager_GetUserId(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 0:
      return PyvtkSMCollaborationManager_GetUserId_s1(self, args);
    case 1:
      return PyvtkSMCollaborationManager_GetUserId_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetUserId");
  return NULL;
}



static PyObject *
PyvtkSMCollaborationManager_GetUserLabel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUserLabel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMCollaborationManager *op = static_cast<vtkSMCollaborationManager *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetUserLabel(temp0) :
      op->vtkSMCollaborationManager::GetUserLabel(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMCollaborationManager_SetUserLabel_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUserLabel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMCollaborationManager *op = static_cast<vtkSMCollaborationManager *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetUserLabel(temp0);
      }
    else
      {
      op->vtkSMCollaborationManager::SetUserLabel(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkSMCollaborationManager_SetUserLabel_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUserLabel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMCollaborationManager *op = static_cast<vtkSMCollaborationManager *>(vp);

  int temp0;
  char *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetUserLabel(temp0, temp1);
      }
    else
      {
      op->vtkSMCollaborationManager::SetUserLabel(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkSMCollaborationManager_SetUserLabel(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkSMCollaborationManager_SetUserLabel_s1(self, args);
    case 2:
      return PyvtkSMCollaborationManager_SetUserLabel_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetUserLabel");
  return NULL;
}



static PyObject *
PyvtkSMCollaborationManager_GetNumberOfConnectedClients(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfConnectedClients");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMCollaborationManager *op = static_cast<vtkSMCollaborationManager *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfConnectedClients() :
      op->vtkSMCollaborationManager::GetNumberOfConnectedClients());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMCollaborationManager_UpdateUserInformations(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateUserInformations");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMCollaborationManager *op = static_cast<vtkSMCollaborationManager *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->UpdateUserInformations();
      }
    else
      {
      op->vtkSMCollaborationManager::UpdateUserInformations();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMCollaborationManager_SendToOtherClients(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SendToOtherClients");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMCollaborationManager *op = static_cast<vtkSMCollaborationManager *>(vp);

  vtkSMMessage *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMMessage"))
    {
    if (ap.IsBound())
      {
      op->SendToOtherClients(temp0);
      }
    else
      {
      op->vtkSMCollaborationManager::SendToOtherClients(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMCollaborationManager_GetFullState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFullState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMCollaborationManager *op = static_cast<vtkSMCollaborationManager *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const vtkSMMessage *tempr = (ap.IsBound() ?
      op->GetFullState() :
      op->vtkSMCollaborationManager::GetFullState());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMCollaborationManager_LoadState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LoadState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMCollaborationManager *op = static_cast<vtkSMCollaborationManager *>(vp);

  vtkSMMessage *temp0 = NULL;
  vtkSMProxyLocator *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkSMMessage") &&
      ap.GetVTKObject(temp1, "vtkSMProxyLocator"))
    {
    if (ap.IsBound())
      {
      op->LoadState(temp0, temp1);
      }
    else
      {
      op->vtkSMCollaborationManager::LoadState(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkSMCollaborationManager_Methods[] = {
  {(char*)"GetReservedGlobalID", PyvtkSMCollaborationManager_GetReservedGlobalID, METH_VARARGS | METH_STATIC,
   (char*)"V.GetReservedGlobalID() -> int\nC++: static vtkTypeUInt32 GetReservedGlobalID()\n\nReturn the GlobalID that should be used to refer to the\nTimeKeeper\n"},
  {(char*)"GetClassName", PyvtkSMCollaborationManager_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkSMCollaborationManager_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkSMCollaborationManager_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkSMCollaborationManager\nC++: vtkSMCollaborationManager *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkSMCollaborationManager_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkSMCollaborationManager\nC++: vtkSMCollaborationManager *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetGlobalID", PyvtkSMCollaborationManager_GetGlobalID, METH_VARARGS,
   (char*)"V.GetGlobalID() -> int\nC++: virtual vtkTypeUInt32 GetGlobalID()\n\nGet the global unique id for this object. If none is set and the\nsession is valid, a new global id will be assigned automatically.\n"},
  {(char*)"SetSession", PyvtkSMCollaborationManager_SetSession, METH_VARARGS,
   (char*)"V.SetSession(vtkSMSession)\nC++: virtual void SetSession(vtkSMSession *)\n\nOverride the session setting in order to update only once our\ncurrent local user id\n"},
  {(char*)"PromoteToMaster", PyvtkSMCollaborationManager_PromoteToMaster, METH_VARARGS,
   (char*)"V.PromoteToMaster(int)\nC++: virtual void PromoteToMaster(int clientId)\n\nThis method is used promote a new Master user. Master/Slave user\ndoesn't buy you anything here. It just provide you the\ninformation, and it is your call to prevent slaves users to do or\nachieve some actions inside your client. When you call that\nmethod a SMMessage is also propagated to the other client so they\ncould follow who is the Master without fetching the information\nagain.\n"},
  {(char*)"FollowUser", PyvtkSMCollaborationManager_FollowUser, METH_VARARGS,
   (char*)"V.FollowUser(int)\nC++: virtual void FollowUser(int clientId)\n\nShare the decision that user should follow that given user if\nmaster or follow someone else on your own\n"},
  {(char*)"GetFollowedUser", PyvtkSMCollaborationManager_GetFollowedUser, METH_VARARGS,
   (char*)"V.GetFollowedUser() -> int\nC++: int GetFollowedUser()\n\nReturn the local followed user\n"},
  {(char*)"IsMaster", PyvtkSMCollaborationManager_IsMaster, METH_VARARGS,
   (char*)"V.IsMaster() -> bool\nC++: virtual bool IsMaster()\n\nReturn true if the current client is the master\n"},
  {(char*)"GetMasterId", PyvtkSMCollaborationManager_GetMasterId, METH_VARARGS,
   (char*)"V.GetMasterId() -> int\nC++: virtual int GetMasterId()\n\nReturn the userId of the current master\n"},
  {(char*)"GetUserId", PyvtkSMCollaborationManager_GetUserId, METH_VARARGS,
   (char*)"V.GetUserId() -> int\nC++: virtual int GetUserId()\nV.GetUserId(int) -> int\nC++: virtual int GetUserId(int index)\n\nReturn the id of the current client\n"},
  {(char*)"GetUserLabel", PyvtkSMCollaborationManager_GetUserLabel, METH_VARARGS,
   (char*)"V.GetUserLabel(int) -> string\nC++: virtual const char *GetUserLabel(int userID)\n\nreturn the name of the provided userId\n"},
  {(char*)"SetUserLabel", PyvtkSMCollaborationManager_SetUserLabel, METH_VARARGS,
   (char*)"V.SetUserLabel(string)\nC++: virtual void SetUserLabel(const char *userName)\nV.SetUserLabel(int, string)\nC++: virtual void SetUserLabel(int userId, const char *userName)\n\nUpdate ou local user name\n"},
  {(char*)"GetNumberOfConnectedClients", PyvtkSMCollaborationManager_GetNumberOfConnectedClients, METH_VARARGS,
   (char*)"V.GetNumberOfConnectedClients() -> int\nC++: virtual int GetNumberOfConnectedClients()\n\nreturn the number of currently connected clients. This size is\nused to bound the GetUserId() method.\n"},
  {(char*)"UpdateUserInformations", PyvtkSMCollaborationManager_UpdateUserInformations, METH_VARARGS,
   (char*)"V.UpdateUserInformations()\nC++: void UpdateUserInformations()\n\nRequest an update of the user list from the server. (A pull\nrequest is done)\n"},
  {(char*)"SendToOtherClients", PyvtkSMCollaborationManager_SendToOtherClients, METH_VARARGS,
   (char*)"V.SendToOtherClients(vtkSMMessage)\nC++: void SendToOtherClients(vtkSMMessage *msg)\n\nSend message to other clients which will trigger Observer\n"},
  {(char*)"GetFullState", PyvtkSMCollaborationManager_GetFullState, METH_VARARGS,
   (char*)"V.GetFullState() -> vtkSMMessage\nC++: virtual const vtkSMMessage *GetFullState()\n\nThis method return the state of the connected clients\n"},
  {(char*)"LoadState", PyvtkSMCollaborationManager_LoadState, METH_VARARGS,
   (char*)"V.LoadState(vtkSMMessage, vtkSMProxyLocator)\nC++: virtual void LoadState(const vtkSMMessage *msg,\n    vtkSMProxyLocator *locator)\n\nThis method is used to either load its internal connected clients\ninformations or to forward messages across clients\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkSMCollaborationManager_StaticNew()
{
  return vtkSMCollaborationManager::New();
}

PyObject *PyVTKClass_vtkSMCollaborationManagerNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkSMCollaborationManager_StaticNew,
    PyvtkSMCollaborationManager_Methods,
    "vtkSMCollaborationManager", modulename,
    NULL, NULL,
    PyvtkSMCollaborationManager_Doc(),
    PyVTKClass_vtkSMRemoteObjectNew(modulename));

  if (cls)
    {
    PyObject *d = PyVTKClass_GetDict(cls);
    PyObject *o;

    PyType_Ready(&PyvtkSMCollaborationManager_EventType_Type);
    PyvtkSMCollaborationManager_EventType_Type.tp_new = NULL;

    o = (PyObject *)&PyvtkSMCollaborationManager_EventType_Type;
    if (o && PyDict_SetItemString(d, (char *)"EventType", o) != 0)
      {
      Py_DECREF(o);
      }

    for (int c = 0; c < 6; c++)
      {
      typedef vtkSMCollaborationManager::EventType cxx_enum_type;

      static const struct { const char *name; cxx_enum_type value; }
        constants[6] = {
          { "CollaborationNotification", vtkSMCollaborationManager::CollaborationNotification },
          { "UpdateUserName", vtkSMCollaborationManager::UpdateUserName },
          { "UpdateUserList", vtkSMCollaborationManager::UpdateUserList },
          { "UpdateMasterUser", vtkSMCollaborationManager::UpdateMasterUser },
          { "FollowUserCamera", vtkSMCollaborationManager::FollowUserCamera },
          { "CameraChanged", vtkSMCollaborationManager::CameraChanged },
        };

      o = PyvtkSMCollaborationManager_EventType_FromEnum(constants[c].value);
      if (o)
        {
        PyDict_SetItemString(d, (char *)constants[c].name, o);
        Py_DECREF(o);
        }
      }

    }

  return cls;
}

const char **PyvtkSMCollaborationManager_Doc()
{
  static const char *docstring[] = {
    "vtkSMCollaborationManager - Class used to broadcast message from\n\n",
    "Superclass: vtkSMRemoteObject\n\n",
    "This class allow to trigger protobuf messages on all the clients that\nare connected to the server. Those clients can attach listeners and\nhandle those message in the way they want. The message sender do not\nreceive its message again, only other clients do.\n\nTo listen collaboration notification messages you should have a code\nthat look like that:\n\ncollaborationManager->AddObserver(\n         vtkSMCo",
    "llaborationManager::CollaborationNotification,\n         callback);\n\nvoid callback(vtkObject* src, unsigned long event, void* method,\nvoid* data) {\n  vtkSMMessage* msg = reinterpret_cast<vtkSMMessage*>(data);\n  => do what you want with the message }\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkSMCollaborationManager(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkSMCollaborationManagerNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkSMCollaborationManager", o) != 0)
    {
    Py_DECREF(o);
    }

}

