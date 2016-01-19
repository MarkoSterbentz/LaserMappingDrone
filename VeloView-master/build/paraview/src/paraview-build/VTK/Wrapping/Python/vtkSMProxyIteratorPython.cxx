// python wrapper for vtkSMProxyIterator
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkSMProxyIterator.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkSMProxyIterator(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkSMProxyIteratorNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkSMObjectNew
extern "C" { PyObject *PyVTKClass_vtkSMObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkSMObjectNew
#endif

static const char **PyvtkSMProxyIterator_Doc();

#ifndef DECLARED_PyvtkSMProxyIterator_TraversalMode_Type
extern VTK_PYTHON_EXPORT PyTypeObject PyvtkSMProxyIterator_TraversalMode_Type;
#define DECLARED_PyvtkSMProxyIterator_TraversalMode_Type
#endif

PyTypeObject PyvtkSMProxyIterator_TraversalMode_Type = {
  PyObject_HEAD_INIT(&PyType_Type)
  0,
  (char*)"TraversalMode", // tp_name
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

PyObject *PyvtkSMProxyIterator_TraversalMode_FromEnum(int val)
{
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkSMProxyIterator_TraversalMode_Type);
  self->ob_ival = val;
  return (PyObject *)self;
}


static PyObject *
PyvtkSMProxyIterator_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxyIterator *op = static_cast<vtkSMProxyIterator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkSMProxyIterator::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMProxyIterator_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxyIterator *op = static_cast<vtkSMProxyIterator *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSMProxyIterator::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMProxyIterator_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxyIterator *op = static_cast<vtkSMProxyIterator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkSMProxyIterator *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSMProxyIterator::NewInstance());

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
PyvtkSMProxyIterator_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkSMProxyIterator *tempr = vtkSMProxyIterator::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMProxyIterator_SetSessionProxyManager(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSessionProxyManager");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxyIterator *op = static_cast<vtkSMProxyIterator *>(vp);

  vtkSMSessionProxyManager *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMSessionProxyManager"))
    {
    if (ap.IsBound())
      {
      op->SetSessionProxyManager(temp0);
      }
    else
      {
      op->vtkSMProxyIterator::SetSessionProxyManager(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMProxyIterator_SetSession(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSession");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxyIterator *op = static_cast<vtkSMProxyIterator *>(vp);

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
      op->vtkSMProxyIterator::SetSession(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMProxyIterator_Begin_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Begin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxyIterator *op = static_cast<vtkSMProxyIterator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Begin();
      }
    else
      {
      op->vtkSMProxyIterator::Begin();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkSMProxyIterator_Begin_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Begin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxyIterator *op = static_cast<vtkSMProxyIterator *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->Begin(temp0);
      }
    else
      {
      op->vtkSMProxyIterator::Begin(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkSMProxyIterator_Begin(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 0:
      return PyvtkSMProxyIterator_Begin_s1(self, args);
    case 1:
      return PyvtkSMProxyIterator_Begin_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "Begin");
  return NULL;
}



static PyObject *
PyvtkSMProxyIterator_IsAtEnd(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsAtEnd");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxyIterator *op = static_cast<vtkSMProxyIterator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->IsAtEnd() :
      op->vtkSMProxyIterator::IsAtEnd());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMProxyIterator_Next(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Next");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxyIterator *op = static_cast<vtkSMProxyIterator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Next();
      }
    else
      {
      op->vtkSMProxyIterator::Next();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMProxyIterator_GetGroup(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGroup");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxyIterator *op = static_cast<vtkSMProxyIterator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetGroup() :
      op->vtkSMProxyIterator::GetGroup());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMProxyIterator_GetKey(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetKey");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxyIterator *op = static_cast<vtkSMProxyIterator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetKey() :
      op->vtkSMProxyIterator::GetKey());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMProxyIterator_GetProxy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProxy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxyIterator *op = static_cast<vtkSMProxyIterator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkSMProxy *tempr = (ap.IsBound() ?
      op->GetProxy() :
      op->vtkSMProxyIterator::GetProxy());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMProxyIterator_SetMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxyIterator *op = static_cast<vtkSMProxyIterator *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetMode(temp0);
      }
    else
      {
      op->vtkSMProxyIterator::SetMode(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMProxyIterator_GetMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxyIterator *op = static_cast<vtkSMProxyIterator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetMode() :
      op->vtkSMProxyIterator::GetMode());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMProxyIterator_SetModeToGroupsOnly(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetModeToGroupsOnly");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxyIterator *op = static_cast<vtkSMProxyIterator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetModeToGroupsOnly();
      }
    else
      {
      op->vtkSMProxyIterator::SetModeToGroupsOnly();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMProxyIterator_SetModeToOneGroup(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetModeToOneGroup");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxyIterator *op = static_cast<vtkSMProxyIterator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetModeToOneGroup();
      }
    else
      {
      op->vtkSMProxyIterator::SetModeToOneGroup();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMProxyIterator_SetModeToAll(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetModeToAll");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxyIterator *op = static_cast<vtkSMProxyIterator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetModeToAll();
      }
    else
      {
      op->vtkSMProxyIterator::SetModeToAll();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMProxyIterator_SetSkipPrototypes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSkipPrototypes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxyIterator *op = static_cast<vtkSMProxyIterator *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetSkipPrototypes(temp0);
      }
    else
      {
      op->vtkSMProxyIterator::SetSkipPrototypes(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMProxyIterator_GetSkipPrototypes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSkipPrototypes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxyIterator *op = static_cast<vtkSMProxyIterator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetSkipPrototypes() :
      op->vtkSMProxyIterator::GetSkipPrototypes());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMProxyIterator_SkipPrototypesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SkipPrototypesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxyIterator *op = static_cast<vtkSMProxyIterator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SkipPrototypesOn();
      }
    else
      {
      op->vtkSMProxyIterator::SkipPrototypesOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMProxyIterator_SkipPrototypesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SkipPrototypesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxyIterator *op = static_cast<vtkSMProxyIterator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SkipPrototypesOff();
      }
    else
      {
      op->vtkSMProxyIterator::SkipPrototypesOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkSMProxyIterator_Methods[] = {
  {(char*)"GetClassName", PyvtkSMProxyIterator_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkSMProxyIterator_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkSMProxyIterator_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkSMProxyIterator\nC++: vtkSMProxyIterator *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkSMProxyIterator_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkSMProxyIterator\nC++: vtkSMProxyIterator *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetSessionProxyManager", PyvtkSMProxyIterator_SetSessionProxyManager, METH_VARARGS,
   (char*)"V.SetSessionProxyManager(vtkSMSessionProxyManager)\nC++: void SetSessionProxyManager(vtkSMSessionProxyManager *)\n\nOverride the set sesssion so the SessionProxyManager could be\ncache for\n"},
  {(char*)"SetSession", PyvtkSMProxyIterator_SetSession, METH_VARARGS,
   (char*)"V.SetSession(vtkSMSession)\nC++: void SetSession(vtkSMSession *session)\n\nConvenience method. Internally calls\nthis->SetSessionProxyManager(session->GetSessionProxyManager());\n"},
  {(char*)"Begin", PyvtkSMProxyIterator_Begin, METH_VARARGS,
   (char*)"V.Begin()\nC++: void Begin()\nV.Begin(string)\nC++: void Begin(const char *groupName)\n\nGo to the beginning of the collection.\n"},
  {(char*)"IsAtEnd", PyvtkSMProxyIterator_IsAtEnd, METH_VARARGS,
   (char*)"V.IsAtEnd() -> int\nC++: int IsAtEnd()\n\nIs the iterator pointing past the last element?\n"},
  {(char*)"Next", PyvtkSMProxyIterator_Next, METH_VARARGS,
   (char*)"V.Next()\nC++: void Next()\n\nMove to the next property.\n"},
  {(char*)"GetGroup", PyvtkSMProxyIterator_GetGroup, METH_VARARGS,
   (char*)"V.GetGroup() -> string\nC++: const char *GetGroup()\n\nGet the group at the current iterator location.\n"},
  {(char*)"GetKey", PyvtkSMProxyIterator_GetKey, METH_VARARGS,
   (char*)"V.GetKey() -> string\nC++: const char *GetKey()\n\nGet the key (proxy name) at the current iterator location.\n"},
  {(char*)"GetProxy", PyvtkSMProxyIterator_GetProxy, METH_VARARGS,
   (char*)"V.GetProxy() -> vtkSMProxy\nC++: vtkSMProxy *GetProxy()\n\nGet the proxy at the current iterator location.\n"},
  {(char*)"SetMode", PyvtkSMProxyIterator_SetMode, METH_VARARGS,
   (char*)"V.SetMode(int)\nC++: void SetMode(int a)\n\nThe traversal mode for the iterator. If the traversal mode is set\nto GROUPS, each Next() will move to the next group, in ONE_GROUP\nmode, all proxies in one group are visited and finally in ALL\nmode, all proxies are visited.\n"},
  {(char*)"GetMode", PyvtkSMProxyIterator_GetMode, METH_VARARGS,
   (char*)"V.GetMode() -> int\nC++: int GetMode()\n\nThe traversal mode for the iterator. If the traversal mode is set\nto GROUPS, each Next() will move to the next group, in ONE_GROUP\nmode, all proxies in one group are visited and finally in ALL\nmode, all proxies are visited.\n"},
  {(char*)"SetModeToGroupsOnly", PyvtkSMProxyIterator_SetModeToGroupsOnly, METH_VARARGS,
   (char*)"V.SetModeToGroupsOnly()\nC++: void SetModeToGroupsOnly()\n\nThe traversal mode for the iterator. If the traversal mode is set\nto GROUPS, each Next() will move to the next group, in ONE_GROUP\nmode, all proxies in one group are visited and finally in ALL\nmode, all proxies are visited.\n"},
  {(char*)"SetModeToOneGroup", PyvtkSMProxyIterator_SetModeToOneGroup, METH_VARARGS,
   (char*)"V.SetModeToOneGroup()\nC++: void SetModeToOneGroup()\n\nThe traversal mode for the iterator. If the traversal mode is set\nto GROUPS, each Next() will move to the next group, in ONE_GROUP\nmode, all proxies in one group are visited and finally in ALL\nmode, all proxies are visited.\n"},
  {(char*)"SetModeToAll", PyvtkSMProxyIterator_SetModeToAll, METH_VARARGS,
   (char*)"V.SetModeToAll()\nC++: void SetModeToAll()\n\nThe traversal mode for the iterator. If the traversal mode is set\nto GROUPS, each Next() will move to the next group, in ONE_GROUP\nmode, all proxies in one group are visited and finally in ALL\nmode, all proxies are visited.\n"},
  {(char*)"SetSkipPrototypes", PyvtkSMProxyIterator_SetSkipPrototypes, METH_VARARGS,
   (char*)"V.SetSkipPrototypes(bool)\nC++: void SetSkipPrototypes(bool a)\n\nWhen set to true (default), the iterator will skip prototype\nproxies.\n"},
  {(char*)"GetSkipPrototypes", PyvtkSMProxyIterator_GetSkipPrototypes, METH_VARARGS,
   (char*)"V.GetSkipPrototypes() -> bool\nC++: bool GetSkipPrototypes()\n\nWhen set to true (default), the iterator will skip prototype\nproxies.\n"},
  {(char*)"SkipPrototypesOn", PyvtkSMProxyIterator_SkipPrototypesOn, METH_VARARGS,
   (char*)"V.SkipPrototypesOn()\nC++: void SkipPrototypesOn()\n\nWhen set to true (default), the iterator will skip prototype\nproxies.\n"},
  {(char*)"SkipPrototypesOff", PyvtkSMProxyIterator_SkipPrototypesOff, METH_VARARGS,
   (char*)"V.SkipPrototypesOff()\nC++: void SkipPrototypesOff()\n\nWhen set to true (default), the iterator will skip prototype\nproxies.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkSMProxyIterator_StaticNew()
{
  return vtkSMProxyIterator::New();
}

PyObject *PyVTKClass_vtkSMProxyIteratorNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkSMProxyIterator_StaticNew,
    PyvtkSMProxyIterator_Methods,
    "vtkSMProxyIterator", modulename,
    NULL, NULL,
    PyvtkSMProxyIterator_Doc(),
    PyVTKClass_vtkSMObjectNew(modulename));

  if (cls)
    {
    PyObject *d = PyVTKClass_GetDict(cls);
    PyObject *o;

    PyType_Ready(&PyvtkSMProxyIterator_TraversalMode_Type);
    PyvtkSMProxyIterator_TraversalMode_Type.tp_new = NULL;

    o = (PyObject *)&PyvtkSMProxyIterator_TraversalMode_Type;
    if (o && PyDict_SetItemString(d, (char *)"TraversalMode", o) != 0)
      {
      Py_DECREF(o);
      }

    for (int c = 0; c < 3; c++)
      {
      typedef vtkSMProxyIterator::TraversalMode cxx_enum_type;

      static const struct { const char *name; cxx_enum_type value; }
        constants[3] = {
          { "GROUPS_ONLY", vtkSMProxyIterator::GROUPS_ONLY },
          { "ONE_GROUP", vtkSMProxyIterator::ONE_GROUP },
          { "ALL", vtkSMProxyIterator::ALL },
        };

      o = PyvtkSMProxyIterator_TraversalMode_FromEnum(constants[c].value);
      if (o)
        {
        PyDict_SetItemString(d, (char *)constants[c].name, o);
        Py_DECREF(o);
        }
      }

    }

  return cls;
}

const char **PyvtkSMProxyIterator_Doc()
{
  static const char *docstring[] = {
    "vtkSMProxyIterator - iterates over all registered proxies (and groups)\n\n",
    "Superclass: vtkSMObject\n\n",
    "vtkSMProxyIterator iterates over all proxies registered with the\nproxy manager. It can also iterate over groups.\n\nSee Also:\n\nvtkSMProxy vtkSMProxyManager\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkSMProxyIterator(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkSMProxyIteratorNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkSMProxyIterator", o) != 0)
    {
    Py_DECREF(o);
    }

}

