// python wrapper for vtkPVSession
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkPVSession.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkPVSession(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkPVSessionNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkSessionNew
extern "C" { PyObject *PyVTKClass_vtkSessionNew(const char *); }
#define DECLARED_PyVTKClass_vtkSessionNew
#endif

static const char **PyvtkPVSession_Doc();

#ifndef DECLARED_PyvtkPVSession_ServerFlags_Type
extern VTK_PYTHON_EXPORT PyTypeObject PyvtkPVSession_ServerFlags_Type;
#define DECLARED_PyvtkPVSession_ServerFlags_Type
#endif

PyTypeObject PyvtkPVSession_ServerFlags_Type = {
  PyObject_HEAD_INIT(&PyType_Type)
  0,
  (char*)"ServerFlags", // tp_name
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

PyObject *PyvtkPVSession_ServerFlags_FromEnum(int val)
{
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkPVSession_ServerFlags_Type);
  self->ob_ival = val;
  return (PyObject *)self;
}


static PyObject *
PyvtkPVSession_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSession *op = static_cast<vtkPVSession *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkPVSession::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVSession_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSession *op = static_cast<vtkPVSession *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPVSession::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVSession_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSession *op = static_cast<vtkPVSession *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPVSession *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPVSession::NewInstance());

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
PyvtkPVSession_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkPVSession *tempr = vtkPVSession::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVSession_GetProcessRoles(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProcessRoles");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSession *op = static_cast<vtkPVSession *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    typedef vtkPVSession::ServerFlags tempr_type;
  tempr_type tempr = (ap.IsBound() ?
      op->GetProcessRoles() :
      op->vtkPVSession::GetProcessRoles());

    if (!ap.ErrorOccurred())
      {
      result = PyvtkPVSession_ServerFlags_FromEnum(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVSession_HasProcessRole(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasProcessRole");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSession *op = static_cast<vtkPVSession *>(vp);

  unsigned int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    bool tempr = (ap.IsBound() ?
      op->HasProcessRole(temp0) :
      op->vtkPVSession::HasProcessRole(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVSession_GetController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSession *op = static_cast<vtkPVSession *>(vp);

  typedef vtkPVSession::ServerFlags temp0_type;
  temp0_type temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetEnumValue(temp0, &PyvtkPVSession_ServerFlags_Type))
    {
    vtkMultiProcessController *tempr = (ap.IsBound() ?
      op->GetController(temp0) :
      op->vtkPVSession::GetController(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVSession_GetMPIMToNSocketConnection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMPIMToNSocketConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSession *op = static_cast<vtkPVSession *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkMPIMToNSocketConnection *tempr = (ap.IsBound() ?
      op->GetMPIMToNSocketConnection() :
      op->vtkPVSession::GetMPIMToNSocketConnection());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVSession_GetServerInformation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetServerInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSession *op = static_cast<vtkPVSession *>(vp);

  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
    {
    vtkPVServerInformation *tempr = op->GetServerInformation();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVSession_IsMultiClients(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsMultiClients");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSession *op = static_cast<vtkPVSession *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->IsMultiClients() :
      op->vtkPVSession::IsMultiClients());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVSession_GetProgressHandler(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProgressHandler");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSession *op = static_cast<vtkPVSession *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPVProgressHandler *tempr = (ap.IsBound() ?
      op->GetProgressHandler() :
      op->vtkPVSession::GetProgressHandler());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVSession_PrepareProgress(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PrepareProgress");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSession *op = static_cast<vtkPVSession *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->PrepareProgress();
      }
    else
      {
      op->vtkPVSession::PrepareProgress();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVSession_CleanupPendingProgress(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CleanupPendingProgress");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSession *op = static_cast<vtkPVSession *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->CleanupPendingProgress();
      }
    else
      {
      op->vtkPVSession::CleanupPendingProgress();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVSession_GetPendingProgress(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPendingProgress");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSession *op = static_cast<vtkPVSession *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetPendingProgress() :
      op->vtkPVSession::GetPendingProgress());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkPVSession_Methods[] = {
  {(char*)"GetClassName", PyvtkPVSession_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkPVSession_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkPVSession_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkPVSession\nC++: vtkPVSession *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkPVSession_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkPVSession\nC++: vtkPVSession *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetProcessRoles", PyvtkPVSession_GetProcessRoles, METH_VARARGS,
   (char*)"V.GetProcessRoles() ->\nC++: virtual ServerFlags GetProcessRoles()\n\nReturns a ServerFlags indicate the nature of the current\nprocesses. e.g. if the current processes acts as a data-server\nand a render-server, it returns DATA_SERVER | RENDER_SERVER.\n"},
  {(char*)"HasProcessRole", PyvtkPVSession_HasProcessRole, METH_VARARGS,
   (char*)"V.HasProcessRole(int) -> bool\nC++: bool HasProcessRole(vtkTypeUInt32 flag)\n\nConvenience method that returns true if the current session is\nserving the indicated role on this process.\n"},
  {(char*)"GetController", PyvtkPVSession_GetController, METH_VARARGS,
   (char*)"V.GetController() -> vtkMultiProcessController\nC++: virtual vtkMultiProcessController *GetController(\n    ServerFlags processType)\n\nReturns the controller used to communicate with the process.\nValue must be DATA_SERVER_ROOT or RENDER_SERVER_ROOT or CLIENT.\nDefault implementation returns NULL.\n"},
  {(char*)"GetMPIMToNSocketConnection", PyvtkPVSession_GetMPIMToNSocketConnection, METH_VARARGS,
   (char*)"V.GetMPIMToNSocketConnection() -> vtkMPIMToNSocketConnection\nC++: virtual vtkMPIMToNSocketConnection *GetMPIMToNSocketConnection(\n    )\n\nThis is socket connection, if any to communicate between the\ndata-server and render-server nodes.\n"},
  {(char*)"GetServerInformation", PyvtkPVSession_GetServerInformation, METH_VARARGS,
   (char*)"V.GetServerInformation() -> vtkPVServerInformation\nC++: virtual vtkPVServerInformation *GetServerInformation()\n\nvtkPVServerInformation is an information-object that provides\ninformation about the server processes. These include server-side\ncapabilities as well as server-side command line arguments e.g.\ntile-display parameters. Use this method to obtain the\nserver-side information. NOTE: For now, we are not bothering to\nprovide separate informations from data-server and render-server\n(as was the case earlier). We can easily add API for the same if\nneeded.\n"},
  {(char*)"IsMultiClients", PyvtkPVSession_IsMultiClients, METH_VARARGS,
   (char*)"V.IsMultiClients() -> bool\nC++: virtual bool IsMultiClients()\n\nAllow anyone to know easily if the current session is involved in\ncollaboration or not. This is mostly true for the Client side.\n"},
  {(char*)"GetProgressHandler", PyvtkPVSession_GetProgressHandler, METH_VARARGS,
   (char*)"V.GetProgressHandler() -> vtkPVProgressHandler\nC++: vtkPVProgressHandler *GetProgressHandler()\n\nProvides access to the progress handler.\n"},
  {(char*)"PrepareProgress", PyvtkPVSession_PrepareProgress, METH_VARARGS,
   (char*)"V.PrepareProgress()\nC++: void PrepareProgress()\n\nShould be called to begin/end receiving progresses on this\nsession.\n"},
  {(char*)"CleanupPendingProgress", PyvtkPVSession_CleanupPendingProgress, METH_VARARGS,
   (char*)"V.CleanupPendingProgress()\nC++: void CleanupPendingProgress()\n\nShould be called to begin/end receiving progresses on this\nsession.\n"},
  {(char*)"GetPendingProgress", PyvtkPVSession_GetPendingProgress, METH_VARARGS,
   (char*)"V.GetPendingProgress() -> bool\nC++: bool GetPendingProgress()\n\nReturns true if the session is within a PrepareProgress() and\nCleanupPendingProgress() block.\n"},
  {NULL, NULL, 0, NULL}
};

PyObject *PyVTKClass_vtkPVSessionNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(NULL,
    PyvtkPVSession_Methods,
    "vtkPVSession", modulename,
    NULL, NULL,
    PyvtkPVSession_Doc(),
    PyVTKClass_vtkSessionNew(modulename));

  if (cls)
    {
    PyObject *d = PyVTKClass_GetDict(cls);
    PyObject *o;

    PyType_Ready(&PyvtkPVSession_ServerFlags_Type);
    PyvtkPVSession_ServerFlags_Type.tp_new = NULL;

    o = (PyObject *)&PyvtkPVSession_ServerFlags_Type;
    if (o && PyDict_SetItemString(d, (char *)"ServerFlags", o) != 0)
      {
      Py_DECREF(o);
      }

    for (int c = 0; c < 8; c++)
      {
      typedef vtkPVSession::ServerFlags cxx_enum_type;

      static const struct { const char *name; cxx_enum_type value; }
        constants[8] = {
          { "NONE", vtkPVSession::NONE },
          { "DATA_SERVER", vtkPVSession::DATA_SERVER },
          { "DATA_SERVER_ROOT", vtkPVSession::DATA_SERVER_ROOT },
          { "RENDER_SERVER", vtkPVSession::RENDER_SERVER },
          { "RENDER_SERVER_ROOT", vtkPVSession::RENDER_SERVER_ROOT },
          { "SERVERS", vtkPVSession::SERVERS },
          { "CLIENT", vtkPVSession::CLIENT },
          { "CLIENT_AND_SERVERS", vtkPVSession::CLIENT_AND_SERVERS },
        };

      o = PyvtkPVSession_ServerFlags_FromEnum(constants[c].value);
      if (o)
        {
        PyDict_SetItemString(d, (char *)constants[c].name, o);
        Py_DECREF(o);
        }
      }

    }

  return cls;
}

const char **PyvtkPVSession_Doc()
{
  static const char *docstring[] = {
    "vtkPVSession - extends vtkSession to add API for ParaView sessions.\n\n",
    "Superclass: vtkSession\n\n",
    "vtkPVSession adds APIs to vtkSession for ParaView-specific sessions,\nnamely those that are used to communicate between\ndata-server,render-server and client. This is an abstract class.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPVSession(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPVSessionNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPVSession", o) != 0)
    {
    Py_DECREF(o);
    }

}

