// python wrapper for vtkSMRemoteObject
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkSMRemoteObject.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkSMRemoteObject(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkSMRemoteObjectNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkSMSessionObjectNew
extern "C" { PyObject *PyVTKClass_vtkSMSessionObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkSMSessionObjectNew
#endif

static const char **PyvtkSMRemoteObject_Doc();


static PyObject *
PyvtkSMRemoteObject_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMRemoteObject *op = static_cast<vtkSMRemoteObject *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkSMRemoteObject::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMRemoteObject_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMRemoteObject *op = static_cast<vtkSMRemoteObject *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSMRemoteObject::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMRemoteObject_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMRemoteObject *op = static_cast<vtkSMRemoteObject *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkSMRemoteObject *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSMRemoteObject::NewInstance());

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
PyvtkSMRemoteObject_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkSMRemoteObject *tempr = vtkSMRemoteObject::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMRemoteObject_SetLocation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLocation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMRemoteObject *op = static_cast<vtkSMRemoteObject *>(vp);

  unsigned int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetLocation(temp0);
      }
    else
      {
      op->vtkSMRemoteObject::SetLocation(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMRemoteObject_GetLocation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLocation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMRemoteObject *op = static_cast<vtkSMRemoteObject *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned int tempr = (ap.IsBound() ?
      op->GetLocation() :
      op->vtkSMRemoteObject::GetLocation());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMRemoteObject_SetSession(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSession");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMRemoteObject *op = static_cast<vtkSMRemoteObject *>(vp);

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
      op->vtkSMRemoteObject::SetSession(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMRemoteObject_GetGlobalID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGlobalID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMRemoteObject *op = static_cast<vtkSMRemoteObject *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned int tempr = (ap.IsBound() ?
      op->GetGlobalID() :
      op->vtkSMRemoteObject::GetGlobalID());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMRemoteObject_GetGlobalIDAsString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGlobalIDAsString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMRemoteObject *op = static_cast<vtkSMRemoteObject *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetGlobalIDAsString() :
      op->vtkSMRemoteObject::GetGlobalIDAsString());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMRemoteObject_HasGlobalID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasGlobalID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMRemoteObject *op = static_cast<vtkSMRemoteObject *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->HasGlobalID() :
      op->vtkSMRemoteObject::HasGlobalID());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMRemoteObject_PrototypeOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PrototypeOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMRemoteObject *op = static_cast<vtkSMRemoteObject *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->PrototypeOn();
      }
    else
      {
      op->vtkSMRemoteObject::PrototypeOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMRemoteObject_PrototypeOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PrototypeOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMRemoteObject *op = static_cast<vtkSMRemoteObject *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->PrototypeOff();
      }
    else
      {
      op->vtkSMRemoteObject::PrototypeOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMRemoteObject_IsPrototype(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsPrototype");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMRemoteObject *op = static_cast<vtkSMRemoteObject *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->IsPrototype() :
      op->vtkSMRemoteObject::IsPrototype());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMRemoteObject_SetPrototype(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPrototype");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMRemoteObject *op = static_cast<vtkSMRemoteObject *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetPrototype(temp0);
      }
    else
      {
      op->vtkSMRemoteObject::SetPrototype(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMRemoteObject_GetFullState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFullState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMRemoteObject *op = static_cast<vtkSMRemoteObject *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const vtkSMMessage *tempr = (ap.IsBound() ?
      op->GetFullState() :
      op->vtkSMRemoteObject::GetFullState());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMRemoteObject_LoadState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LoadState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMRemoteObject *op = static_cast<vtkSMRemoteObject *>(vp);

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
      op->vtkSMRemoteObject::LoadState(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMRemoteObject_EnableLocalPushOnly(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EnableLocalPushOnly");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMRemoteObject *op = static_cast<vtkSMRemoteObject *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->EnableLocalPushOnly();
      }
    else
      {
      op->vtkSMRemoteObject::EnableLocalPushOnly();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMRemoteObject_DisableLocalPushOnly(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DisableLocalPushOnly");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMRemoteObject *op = static_cast<vtkSMRemoteObject *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->DisableLocalPushOnly();
      }
    else
      {
      op->vtkSMRemoteObject::DisableLocalPushOnly();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMRemoteObject_IsLocalPushOnly(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsLocalPushOnly");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMRemoteObject *op = static_cast<vtkSMRemoteObject *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->IsLocalPushOnly() :
      op->vtkSMRemoteObject::IsLocalPushOnly());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkSMRemoteObject_Methods[] = {
  {(char*)"GetClassName", PyvtkSMRemoteObject_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkSMRemoteObject_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkSMRemoteObject_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkSMRemoteObject\nC++: vtkSMRemoteObject *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkSMRemoteObject_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkSMRemoteObject\nC++: vtkSMRemoteObject *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetLocation", PyvtkSMRemoteObject_SetLocation, METH_VARARGS,
   (char*)"V.SetLocation(int)\nC++: void SetLocation(vtkTypeUInt32 a)\n\nGet/Set the location where the underlying VTK-objects are\ncreated. The value can be contructed by or-ing\nvtkSMSession::ServerFlags\n"},
  {(char*)"GetLocation", PyvtkSMRemoteObject_GetLocation, METH_VARARGS,
   (char*)"V.GetLocation() -> int\nC++: vtkTypeUInt32 GetLocation()\n\nGet/Set the location where the underlying VTK-objects are\ncreated. The value can be contructed by or-ing\nvtkSMSession::ServerFlags\n"},
  {(char*)"SetSession", PyvtkSMRemoteObject_SetSession, METH_VARARGS,
   (char*)"V.SetSession(vtkSMSession)\nC++: virtual void SetSession(vtkSMSession *)\n\nOverride the SetSession so if the object already have an ID we\nautomatically register it to the associated session\n"},
  {(char*)"GetGlobalID", PyvtkSMRemoteObject_GetGlobalID, METH_VARARGS,
   (char*)"V.GetGlobalID() -> int\nC++: virtual vtkTypeUInt32 GetGlobalID()\n\nGet the global unique id for this object. If none is set and the\nsession is valid, a new global id will be assigned automatically.\n"},
  {(char*)"GetGlobalIDAsString", PyvtkSMRemoteObject_GetGlobalIDAsString, METH_VARARGS,
   (char*)"V.GetGlobalIDAsString() -> string\nC++: const char *GetGlobalIDAsString()\n\nGet the global unique id for this object. If none is set and the\nsession is valid, a new global id will be assigned automatically.\n"},
  {(char*)"HasGlobalID", PyvtkSMRemoteObject_HasGlobalID, METH_VARARGS,
   (char*)"V.HasGlobalID() -> bool\nC++: bool HasGlobalID()\n\nAllow the user to test if the RemoteObject has already a GlobalID\nwithout assigning a new one to it.\n"},
  {(char*)"PrototypeOn", PyvtkSMRemoteObject_PrototypeOn, METH_VARARGS,
   (char*)"V.PrototypeOn()\nC++: void PrototypeOn()\n\nAllow user to set the remote object to be discard for Undo/Redo\naction. By default, any remote object is Undoable.\n"},
  {(char*)"PrototypeOff", PyvtkSMRemoteObject_PrototypeOff, METH_VARARGS,
   (char*)"V.PrototypeOff()\nC++: void PrototypeOff()\n\nAllow user to set the remote object to be discard for Undo/Redo\naction. By default, any remote object is Undoable.\n"},
  {(char*)"IsPrototype", PyvtkSMRemoteObject_IsPrototype, METH_VARARGS,
   (char*)"V.IsPrototype() -> bool\nC++: bool IsPrototype()\n\nAllow user to set the remote object to be discard for Undo/Redo\naction. By default, any remote object is Undoable.\n"},
  {(char*)"SetPrototype", PyvtkSMRemoteObject_SetPrototype, METH_VARARGS,
   (char*)"V.SetPrototype(bool)\nC++: void SetPrototype(bool a)\n\nAllow user to set the remote object to be discard for Undo/Redo\naction. By default, any remote object is Undoable.\n"},
  {(char*)"GetFullState", PyvtkSMRemoteObject_GetFullState, METH_VARARGS,
   (char*)"V.GetFullState() -> vtkSMMessage\nC++: virtual const vtkSMMessage *GetFullState()\n\nThis method return the full object state that can be used to\ncreate that object from scratch. This method will be used to fill\nthe undo stack. If not overriden this will return NULL.\n"},
  {(char*)"LoadState", PyvtkSMRemoteObject_LoadState, METH_VARARGS,
   (char*)"V.LoadState(vtkSMMessage, vtkSMProxyLocator)\nC++: virtual void LoadState(const vtkSMMessage *msg,\n    vtkSMProxyLocator *locator)\n\nThis method is used to initialise the object to the given state\nIf the definitionOnly Flag is set to True the proxy won't load\nthe properties values and just setup the new proxy hierarchy with\nall subproxy globalID set. This allow to split the load process\nin 2 step to prevent invalid state when property refere to a\nsub-proxy that does not exist yet.\n"},
  {(char*)"EnableLocalPushOnly", PyvtkSMRemoteObject_EnableLocalPushOnly, METH_VARARGS,
   (char*)"V.EnableLocalPushOnly()\nC++: virtual void EnableLocalPushOnly()\n\nAllow to switch off any push of state change to the server for\nthat particular object. This is used when we load a state based\non a server notification. In that particular case, the server is\nalready aware of that new state, so we keep those changes local.\n"},
  {(char*)"DisableLocalPushOnly", PyvtkSMRemoteObject_DisableLocalPushOnly, METH_VARARGS,
   (char*)"V.DisableLocalPushOnly()\nC++: virtual void DisableLocalPushOnly()\n\nEnable the given remote object to communicate its state normaly\nto the server location.\n"},
  {(char*)"IsLocalPushOnly", PyvtkSMRemoteObject_IsLocalPushOnly, METH_VARARGS,
   (char*)"V.IsLocalPushOnly() -> bool\nC++: virtual bool IsLocalPushOnly()\n\nLet the session be aware that even if the Location is client\nonly, the message should not be send to the server for a general\nbroadcast\n"},
  {NULL, NULL, 0, NULL}
};

PyObject *PyVTKClass_vtkSMRemoteObjectNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(NULL,
    PyvtkSMRemoteObject_Methods,
    "vtkSMRemoteObject", modulename,
    NULL, NULL,
    PyvtkSMRemoteObject_Doc(),
    PyVTKClass_vtkSMSessionObjectNew(modulename));
  return cls;
}

const char **PyvtkSMRemoteObject_Doc()
{
  static const char *docstring[] = {
    "vtkSMRemoteObject - baseclass for all proxy-objects that have counter\n\n",
    "Superclass: vtkSMSessionObject\n\n",
    "Abstract class involved in ServerManager class hierarchy that has a\ncorresponding SIObject which can be local or remote.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkSMRemoteObject(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkSMRemoteObjectNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkSMRemoteObject", o) != 0)
    {
    Py_DECREF(o);
    }

}

