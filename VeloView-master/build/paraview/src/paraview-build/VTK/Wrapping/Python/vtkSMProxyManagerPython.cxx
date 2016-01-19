// python wrapper for vtkSMProxyManager
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkSMProxyManager.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkSMProxyManager(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkSMProxyManagerNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkSMObjectNew
extern "C" { PyObject *PyVTKClass_vtkSMObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkSMObjectNew
#endif

static const char **PyvtkSMProxyManager_Doc();

#ifndef DECLARED_PyvtkSMProxyManager_eventId_Type
extern VTK_PYTHON_EXPORT PyTypeObject PyvtkSMProxyManager_eventId_Type;
#define DECLARED_PyvtkSMProxyManager_eventId_Type
#endif

PyTypeObject PyvtkSMProxyManager_eventId_Type = {
  PyObject_HEAD_INIT(&PyType_Type)
  0,
  (char*)"eventId", // tp_name
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

PyObject *PyvtkSMProxyManager_eventId_FromEnum(int val)
{
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkSMProxyManager_eventId_Type);
  self->ob_ival = val;
  return (PyObject *)self;
}


static PyObject *
PyvtkSMProxyManager_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxyManager *op = static_cast<vtkSMProxyManager *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkSMProxyManager::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMProxyManager_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxyManager *op = static_cast<vtkSMProxyManager *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSMProxyManager::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMProxyManager_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxyManager *op = static_cast<vtkSMProxyManager *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkSMProxyManager *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSMProxyManager::NewInstance());

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
PyvtkSMProxyManager_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkSMProxyManager *tempr = vtkSMProxyManager::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMProxyManager_GetProxyManager(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetProxyManager");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkSMProxyManager *tempr = vtkSMProxyManager::GetProxyManager();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMProxyManager_Finalize(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "Finalize");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkSMProxyManager::Finalize();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMProxyManager_IsInitialized(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsInitialized");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    bool tempr = vtkSMProxyManager::IsInitialized();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMProxyManager_GetVersionMajor(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetVersionMajor");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    int tempr = vtkSMProxyManager::GetVersionMajor();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMProxyManager_GetVersionMinor(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetVersionMinor");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    int tempr = vtkSMProxyManager::GetVersionMinor();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMProxyManager_GetVersionPatch(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetVersionPatch");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    int tempr = vtkSMProxyManager::GetVersionPatch();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMProxyManager_GetParaViewSourceVersion(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetParaViewSourceVersion");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    const char *tempr = vtkSMProxyManager::GetParaViewSourceVersion();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMProxyManager_GetActiveSession(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActiveSession");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxyManager *op = static_cast<vtkSMProxyManager *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkSMSession *tempr = (ap.IsBound() ?
      op->GetActiveSession() :
      op->vtkSMProxyManager::GetActiveSession());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMProxyManager_SetActiveSession_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetActiveSession");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxyManager *op = static_cast<vtkSMProxyManager *>(vp);

  vtkSMSession *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMSession"))
    {
    if (ap.IsBound())
      {
      op->SetActiveSession(temp0);
      }
    else
      {
      op->vtkSMProxyManager::SetActiveSession(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkSMProxyManager_SetActiveSession_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetActiveSession");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxyManager *op = static_cast<vtkSMProxyManager *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetActiveSession(temp0);
      }
    else
      {
      op->vtkSMProxyManager::SetActiveSession(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkSMProxyManager_SetActiveSession_Methods[] = {
  {NULL, PyvtkSMProxyManager_SetActiveSession_s1, METH_VARARGS,
   (char*)"@O *vtkSMSession"},
  {NULL, PyvtkSMProxyManager_SetActiveSession_s2, METH_VARARGS,
   (char*)"@L"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkSMProxyManager_SetActiveSession(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkSMProxyManager_SetActiveSession_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetActiveSession");
  return NULL;
}



static PyObject *
PyvtkSMProxyManager_GetActiveSessionProxyManager(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActiveSessionProxyManager");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxyManager *op = static_cast<vtkSMProxyManager *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkSMSessionProxyManager *tempr = (ap.IsBound() ?
      op->GetActiveSessionProxyManager() :
      op->vtkSMProxyManager::GetActiveSessionProxyManager());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMProxyManager_GetSessionProxyManager(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSessionProxyManager");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxyManager *op = static_cast<vtkSMProxyManager *>(vp);

  vtkSMSession *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMSession"))
    {
    vtkSMSessionProxyManager *tempr = (ap.IsBound() ?
      op->GetSessionProxyManager(temp0) :
      op->vtkSMProxyManager::GetSessionProxyManager(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMProxyManager_NewProxy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewProxy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxyManager *op = static_cast<vtkSMProxyManager *>(vp);

  char *temp0 = NULL;
  char *temp1 = NULL;
  char *temp2 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2, 3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)))
    {
    vtkSMProxy *tempr = (ap.IsBound() ?
      op->NewProxy(temp0, temp1, temp2) :
      op->vtkSMProxyManager::NewProxy(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMProxyManager_RegisterProxy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RegisterProxy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxyManager *op = static_cast<vtkSMProxyManager *>(vp);

  char *temp0 = NULL;
  char *temp1 = NULL;
  vtkSMProxy *temp2 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetVTKObject(temp2, "vtkSMProxy"))
    {
    if (ap.IsBound())
      {
      op->RegisterProxy(temp0, temp1, temp2);
      }
    else
      {
      op->vtkSMProxyManager::RegisterProxy(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMProxyManager_GetProxy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProxy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxyManager *op = static_cast<vtkSMProxyManager *>(vp);

  char *temp0 = NULL;
  char *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    vtkSMProxy *tempr = (ap.IsBound() ?
      op->GetProxy(temp0, temp1) :
      op->vtkSMProxyManager::GetProxy(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMProxyManager_UnRegisterProxy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UnRegisterProxy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxyManager *op = static_cast<vtkSMProxyManager *>(vp);

  char *temp0 = NULL;
  char *temp1 = NULL;
  vtkSMProxy *temp2 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetVTKObject(temp2, "vtkSMProxy"))
    {
    if (ap.IsBound())
      {
      op->UnRegisterProxy(temp0, temp1, temp2);
      }
    else
      {
      op->vtkSMProxyManager::UnRegisterProxy(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMProxyManager_GetProxyName_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProxyName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxyManager *op = static_cast<vtkSMProxyManager *>(vp);

  char *temp0 = NULL;
  unsigned int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetProxyName(temp0, temp1) :
      op->vtkSMProxyManager::GetProxyName(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkSMProxyManager_GetProxyName_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProxyName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxyManager *op = static_cast<vtkSMProxyManager *>(vp);

  char *temp0 = NULL;
  vtkSMProxy *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkSMProxy"))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetProxyName(temp0, temp1) :
      op->vtkSMProxyManager::GetProxyName(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkSMProxyManager_GetProxyName_Methods[] = {
  {NULL, PyvtkSMProxyManager_GetProxyName_s1, METH_VARARGS,
   (char*)"@zI"},
  {NULL, PyvtkSMProxyManager_GetProxyName_s2, METH_VARARGS,
   (char*)"@zO *vtkSMProxy"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkSMProxyManager_GetProxyName(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkSMProxyManager_GetProxyName_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetProxyName");
  return NULL;
}



static PyObject *
PyvtkSMProxyManager_SetUndoStackBuilder(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUndoStackBuilder");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxyManager *op = static_cast<vtkSMProxyManager *>(vp);

  vtkSMUndoStackBuilder *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMUndoStackBuilder"))
    {
    if (ap.IsBound())
      {
      op->SetUndoStackBuilder(temp0);
      }
    else
      {
      op->vtkSMProxyManager::SetUndoStackBuilder(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMProxyManager_GetUndoStackBuilder(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUndoStackBuilder");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxyManager *op = static_cast<vtkSMProxyManager *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkSMUndoStackBuilder *tempr = (ap.IsBound() ?
      op->GetUndoStackBuilder() :
      op->vtkSMProxyManager::GetUndoStackBuilder());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMProxyManager_GetPluginManager(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPluginManager");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxyManager *op = static_cast<vtkSMProxyManager *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkSMPluginManager *tempr = (ap.IsBound() ?
      op->GetPluginManager() :
      op->vtkSMProxyManager::GetPluginManager());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMProxyManager_GetReaderFactory(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetReaderFactory");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxyManager *op = static_cast<vtkSMProxyManager *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkSMReaderFactory *tempr = (ap.IsBound() ?
      op->GetReaderFactory() :
      op->vtkSMProxyManager::GetReaderFactory());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMProxyManager_GetWriterFactory(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWriterFactory");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxyManager *op = static_cast<vtkSMProxyManager *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkSMWriterFactory *tempr = (ap.IsBound() ?
      op->GetWriterFactory() :
      op->vtkSMProxyManager::GetWriterFactory());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkSMProxyManager_Methods[] = {
  {(char*)"GetClassName", PyvtkSMProxyManager_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkSMProxyManager_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkSMProxyManager_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkSMProxyManager\nC++: vtkSMProxyManager *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkSMProxyManager_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkSMProxyManager\nC++: vtkSMProxyManager *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetProxyManager", PyvtkSMProxyManager_GetProxyManager, METH_VARARGS | METH_STATIC,
   (char*)"V.GetProxyManager() -> vtkSMProxyManager\nC++: static vtkSMProxyManager *GetProxyManager()\n\nProvides access to the global ProxyManager.\n"},
  {(char*)"Finalize", PyvtkSMProxyManager_Finalize, METH_VARARGS | METH_STATIC,
   (char*)"V.Finalize()\nC++: static void Finalize()\n\nFree the singleton\n"},
  {(char*)"IsInitialized", PyvtkSMProxyManager_IsInitialized, METH_VARARGS | METH_STATIC,
   (char*)"V.IsInitialized() -> bool\nC++: static bool IsInitialized()\n\nAllow to check if the Singleton has been initialized and has a\nreference to a valid ProxyManager\n"},
  {(char*)"GetVersionMajor", PyvtkSMProxyManager_GetVersionMajor, METH_VARARGS | METH_STATIC,
   (char*)"V.GetVersionMajor() -> int\nC++: static int GetVersionMajor()\n\nThese methods can be used to obtain the ProxyManager version\nnumber. Returns the major version number eg. if version is 2.9.1\nthis method will return 2.\n"},
  {(char*)"GetVersionMinor", PyvtkSMProxyManager_GetVersionMinor, METH_VARARGS | METH_STATIC,
   (char*)"V.GetVersionMinor() -> int\nC++: static int GetVersionMinor()\n\nThese methods can be used to obtain the ProxyManager version\nnumber. Returns the minor version number eg. if version is 2.9.1\nthis method will return 9.\n"},
  {(char*)"GetVersionPatch", PyvtkSMProxyManager_GetVersionPatch, METH_VARARGS | METH_STATIC,
   (char*)"V.GetVersionPatch() -> int\nC++: static int GetVersionPatch()\n\nThese methods can be used to obtain the ProxyManager version\nnumber. Returns the patch version number eg. if version is 2.9.1\nthis method will return 1.\n"},
  {(char*)"GetParaViewSourceVersion", PyvtkSMProxyManager_GetParaViewSourceVersion, METH_VARARGS | METH_STATIC,
   (char*)"V.GetParaViewSourceVersion() -> string\nC++: static const char *GetParaViewSourceVersion()\n\nReturns a string with the format \"paraview version x.x.x, Date:\nYYYY-MM-DD\"\n"},
  {(char*)"GetActiveSession", PyvtkSMProxyManager_GetActiveSession, METH_VARARGS,
   (char*)"V.GetActiveSession() -> vtkSMSession\nC++: vtkSMSession *GetActiveSession()\n\nReturns the current active session. If no active session is set,\nand there's only one registered vtkSMSession with\nvtkProcessModule, then that session is automatically treated as\nthe active session.\n"},
  {(char*)"SetActiveSession", PyvtkSMProxyManager_SetActiveSession, METH_VARARGS,
   (char*)"V.SetActiveSession(vtkSMSession)\nC++: void SetActiveSession(vtkSMSession *session)\nV.SetActiveSession(int)\nC++: void SetActiveSession(vtkIdType sessionId)\n\nSet the active session. It's acceptable to set the active session\nas NULL (or 0 in case of sessionId), however GetActiveSession()\nmay automatically pick an active session if none is provided.\n"},
  {(char*)"GetActiveSessionProxyManager", PyvtkSMProxyManager_GetActiveSessionProxyManager, METH_VARARGS,
   (char*)"V.GetActiveSessionProxyManager() -> vtkSMSessionProxyManager\nC++: vtkSMSessionProxyManager *GetActiveSessionProxyManager()\n\nConvenient method to get the active vtkSMSessionProxyManager. If\nno\n"},
  {(char*)"GetSessionProxyManager", PyvtkSMProxyManager_GetSessionProxyManager, METH_VARARGS,
   (char*)"V.GetSessionProxyManager(vtkSMSession) -> vtkSMSessionProxyManager\nC++: vtkSMSessionProxyManager *GetSessionProxyManager(\n    vtkSMSession *session)\n\nReturn the corresponding vtkSMSessionProxyManager and if any,\nthen create a new one.\n"},
  {(char*)"NewProxy", PyvtkSMProxyManager_NewProxy, METH_VARARGS,
   (char*)"V.NewProxy(string, string, string) -> vtkSMProxy\nC++: vtkSMProxy *NewProxy(const char *groupName,\n    const char *proxyName, const char *subProxyName=NULL)\n\nCalls forwarded to the active vtkSMSessionProxyManager, if any.\nRaises errors if no active session manager can be determined\n(using GetActiveSessionProxyManager()).\n"},
  {(char*)"RegisterProxy", PyvtkSMProxyManager_RegisterProxy, METH_VARARGS,
   (char*)"V.RegisterProxy(string, string, vtkSMProxy)\nC++: void RegisterProxy(const char *groupname, const char *name,\n    vtkSMProxy *proxy)\n\nCalls forwarded to the active vtkSMSessionProxyManager, if any.\nRaises errors if no active session manager can be determined\n(using GetActiveSessionProxyManager()).\n"},
  {(char*)"GetProxy", PyvtkSMProxyManager_GetProxy, METH_VARARGS,
   (char*)"V.GetProxy(string, string) -> vtkSMProxy\nC++: vtkSMProxy *GetProxy(const char *groupname, const char *name)\n\nCalls forwarded to the active vtkSMSessionProxyManager, if any.\nRaises errors if no active session manager can be determined\n(using GetActiveSessionProxyManager()).\n"},
  {(char*)"UnRegisterProxy", PyvtkSMProxyManager_UnRegisterProxy, METH_VARARGS,
   (char*)"V.UnRegisterProxy(string, string, vtkSMProxy)\nC++: void UnRegisterProxy(const char *groupname, const char *name,\n     vtkSMProxy *)\n\nCalls forwarded to the active vtkSMSessionProxyManager, if any.\nRaises errors if no active session manager can be determined\n(using GetActiveSessionProxyManager()).\n"},
  {(char*)"GetProxyName", PyvtkSMProxyManager_GetProxyName, METH_VARARGS,
   (char*)"V.GetProxyName(string, int) -> string\nC++: const char *GetProxyName(const char *groupname,\n    unsigned int idx)\nV.GetProxyName(string, vtkSMProxy) -> string\nC++: const char *GetProxyName(const char *groupname,\n    vtkSMProxy *proxy)\n\nCalls forwarded to the active vtkSMSessionProxyManager, if any.\nRaises errors if no active session manager can be determined\n(using GetActiveSessionProxyManager()).\n"},
  {(char*)"SetUndoStackBuilder", PyvtkSMProxyManager_SetUndoStackBuilder, METH_VARARGS,
   (char*)"V.SetUndoStackBuilder(vtkSMUndoStackBuilder)\nC++: void SetUndoStackBuilder(vtkSMUndoStackBuilder *builder)\n\nGet/Set the undo-stack builder if the application is using\nundo-redo mechanism to track changes.\n"},
  {(char*)"GetUndoStackBuilder", PyvtkSMProxyManager_GetUndoStackBuilder, METH_VARARGS,
   (char*)"V.GetUndoStackBuilder() -> vtkSMUndoStackBuilder\nC++: vtkSMUndoStackBuilder *GetUndoStackBuilder()\n\nGet/Set the undo-stack builder if the application is using\nundo-redo mechanism to track changes.\n"},
  {(char*)"GetPluginManager", PyvtkSMProxyManager_GetPluginManager, METH_VARARGS,
   (char*)"V.GetPluginManager() -> vtkSMPluginManager\nC++: vtkSMPluginManager *GetPluginManager()\n\nPluginManager keeps track of plugins loaded on various sessions.\nThis provides access to the application-wide plugin manager.\n"},
  {(char*)"GetReaderFactory", PyvtkSMProxyManager_GetReaderFactory, METH_VARARGS,
   (char*)"V.GetReaderFactory() -> vtkSMReaderFactory\nC++: vtkSMReaderFactory *GetReaderFactory()\n\nProvides access to the reader factory. Before using the reader\nfactory, it is essential that it's configured correctly.\n"},
  {(char*)"GetWriterFactory", PyvtkSMProxyManager_GetWriterFactory, METH_VARARGS,
   (char*)"V.GetWriterFactory() -> vtkSMWriterFactory\nC++: vtkSMWriterFactory *GetWriterFactory()\n\nProvides access to the writer factory. Before using the reader\nfactory, it is essential that it's configured correctly.\n"},
  {NULL, NULL, 0, NULL}
};

PyObject *PyVTKClass_vtkSMProxyManagerNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(NULL,
    PyvtkSMProxyManager_Methods,
    "vtkSMProxyManager", modulename,
    NULL, NULL,
    PyvtkSMProxyManager_Doc(),
    PyVTKClass_vtkSMObjectNew(modulename));

  if (cls)
    {
    PyObject *d = PyVTKClass_GetDict(cls);
    PyObject *o;

    PyType_Ready(&PyvtkSMProxyManager_eventId_Type);
    PyvtkSMProxyManager_eventId_Type.tp_new = NULL;

    o = (PyObject *)&PyvtkSMProxyManager_eventId_Type;
    if (o && PyDict_SetItemString(d, (char *)"eventId", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyvtkSMProxyManager_eventId_FromEnum(vtkSMProxyManager::ActiveSessionChanged);
    if (o)
      {
      PyDict_SetItemString(d, (char *)"ActiveSessionChanged", o);
      Py_DECREF(o);
      }
    }

  return cls;
}

const char **PyvtkSMProxyManager_Doc()
{
  static const char *docstring[] = {
    "vtkSMProxyManager - singleton/facade to vtkSMSessionProxyManager\n\n",
    "Superclass: vtkSMObject\n\n",
    "vtkSMProxyManager is a singleton/facade that creates and manages\nproxies. It maintains a map of vtkSMSessionProxyManager and delegate\nall proxy related call to the appropriate one based on the provided\nsession.\n\nSee Also:\n\nvtkSMSessionProxyManager, vtkSMProxyDefinitionManager\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkSMProxyManager(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkSMProxyManagerNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkSMProxyManager", o) != 0)
    {
    Py_DECREF(o);
    }

}

