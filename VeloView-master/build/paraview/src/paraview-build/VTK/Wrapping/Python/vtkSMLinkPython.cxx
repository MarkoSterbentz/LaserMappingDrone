// python wrapper for vtkSMLink
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkSMLink.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkSMLink(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkSMLinkNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkSMRemoteObjectNew
extern "C" { PyObject *PyVTKClass_vtkSMRemoteObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkSMRemoteObjectNew
#endif

static const char **PyvtkSMLink_Doc();

#ifndef DECLARED_PyvtkSMLink_UpdateDirections_Type
extern VTK_PYTHON_EXPORT PyTypeObject PyvtkSMLink_UpdateDirections_Type;
#define DECLARED_PyvtkSMLink_UpdateDirections_Type
#endif

PyTypeObject PyvtkSMLink_UpdateDirections_Type = {
  PyObject_HEAD_INIT(&PyType_Type)
  0,
  (char*)"UpdateDirections", // tp_name
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

PyObject *PyvtkSMLink_UpdateDirections_FromEnum(int val)
{
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkSMLink_UpdateDirections_Type);
  self->ob_ival = val;
  return (PyObject *)self;
}


static PyObject *
PyvtkSMLink_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMLink *op = static_cast<vtkSMLink *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkSMLink::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMLink_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMLink *op = static_cast<vtkSMLink *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSMLink::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMLink_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMLink *op = static_cast<vtkSMLink *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkSMLink *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSMLink::NewInstance());

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
PyvtkSMLink_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkSMLink *tempr = vtkSMLink::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMLink_SetPropagateUpdateVTKObjects(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPropagateUpdateVTKObjects");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMLink *op = static_cast<vtkSMLink *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetPropagateUpdateVTKObjects(temp0);
      }
    else
      {
      op->vtkSMLink::SetPropagateUpdateVTKObjects(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMLink_GetPropagateUpdateVTKObjects(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPropagateUpdateVTKObjects");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMLink *op = static_cast<vtkSMLink *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetPropagateUpdateVTKObjects() :
      op->vtkSMLink::GetPropagateUpdateVTKObjects());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMLink_PropagateUpdateVTKObjectsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PropagateUpdateVTKObjectsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMLink *op = static_cast<vtkSMLink *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->PropagateUpdateVTKObjectsOn();
      }
    else
      {
      op->vtkSMLink::PropagateUpdateVTKObjectsOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMLink_PropagateUpdateVTKObjectsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PropagateUpdateVTKObjectsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMLink *op = static_cast<vtkSMLink *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->PropagateUpdateVTKObjectsOff();
      }
    else
      {
      op->vtkSMLink::PropagateUpdateVTKObjectsOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMLink_SetEnabled(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEnabled");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMLink *op = static_cast<vtkSMLink *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetEnabled(temp0);
      }
    else
      {
      op->vtkSMLink::SetEnabled(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMLink_GetEnabled(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEnabled");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMLink *op = static_cast<vtkSMLink *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetEnabled() :
      op->vtkSMLink::GetEnabled());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMLink_RemoveAllLinks(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveAllLinks");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMLink *op = static_cast<vtkSMLink *>(vp);

  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
    {
    op->RemoveAllLinks();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMLink_GetFullState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFullState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMLink *op = static_cast<vtkSMLink *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const vtkSMMessage *tempr = (ap.IsBound() ?
      op->GetFullState() :
      op->vtkSMLink::GetFullState());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMLink_LoadState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LoadState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMLink *op = static_cast<vtkSMLink *>(vp);

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
      op->vtkSMLink::LoadState(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkSMLink_Methods[] = {
  {(char*)"GetClassName", PyvtkSMLink_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkSMLink_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkSMLink_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkSMLink\nC++: vtkSMLink *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkSMLink_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkSMLink\nC++: vtkSMLink *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetPropagateUpdateVTKObjects", PyvtkSMLink_SetPropagateUpdateVTKObjects, METH_VARARGS,
   (char*)"V.SetPropagateUpdateVTKObjects(int)\nC++: void SetPropagateUpdateVTKObjects(int a)\n\nThis flag determines if UpdateVTKObjects calls are to be\npropagated. Set to 1 by default.\n"},
  {(char*)"GetPropagateUpdateVTKObjects", PyvtkSMLink_GetPropagateUpdateVTKObjects, METH_VARARGS,
   (char*)"V.GetPropagateUpdateVTKObjects() -> int\nC++: int GetPropagateUpdateVTKObjects()\n\nThis flag determines if UpdateVTKObjects calls are to be\npropagated. Set to 1 by default.\n"},
  {(char*)"PropagateUpdateVTKObjectsOn", PyvtkSMLink_PropagateUpdateVTKObjectsOn, METH_VARARGS,
   (char*)"V.PropagateUpdateVTKObjectsOn()\nC++: void PropagateUpdateVTKObjectsOn()\n\nThis flag determines if UpdateVTKObjects calls are to be\npropagated. Set to 1 by default.\n"},
  {(char*)"PropagateUpdateVTKObjectsOff", PyvtkSMLink_PropagateUpdateVTKObjectsOff, METH_VARARGS,
   (char*)"V.PropagateUpdateVTKObjectsOff()\nC++: void PropagateUpdateVTKObjectsOff()\n\nThis flag determines if UpdateVTKObjects calls are to be\npropagated. Set to 1 by default.\n"},
  {(char*)"SetEnabled", PyvtkSMLink_SetEnabled, METH_VARARGS,
   (char*)"V.SetEnabled(bool)\nC++: void SetEnabled(bool a)\n\nGet/Set if the link is enabled. (true by default).\n"},
  {(char*)"GetEnabled", PyvtkSMLink_GetEnabled, METH_VARARGS,
   (char*)"V.GetEnabled() -> bool\nC++: bool GetEnabled()\n\nGet/Set if the link is enabled. (true by default).\n"},
  {(char*)"RemoveAllLinks", PyvtkSMLink_RemoveAllLinks, METH_VARARGS,
   (char*)"V.RemoveAllLinks()\nC++: virtual void RemoveAllLinks()\n\nRemove all links.\n"},
  {(char*)"GetFullState", PyvtkSMLink_GetFullState, METH_VARARGS,
   (char*)"V.GetFullState() -> vtkSMMessage\nC++: virtual const vtkSMMessage *GetFullState()\n\nThis method returns the full object state that can be used to\ncreate the object from scratch. This method will be used to fill\nthe undo stack. If not overriden this will return NULL.\n"},
  {(char*)"LoadState", PyvtkSMLink_LoadState, METH_VARARGS,
   (char*)"V.LoadState(vtkSMMessage, vtkSMProxyLocator)\nC++: virtual void LoadState(const vtkSMMessage *msg,\n    vtkSMProxyLocator *locator)\n\nThis method is used to initialize the object to the given state\nIf the definitionOnly Flag is set to True the proxy won't load\nthe properties values and just setup the new proxy hierarchy with\nall subproxy globalIDs set. This enables splitting the load\nprocess in 2 step to prevent invalid state when a property refers\nto a sub-proxy that does not exist yet.\n"},
  {NULL, NULL, 0, NULL}
};

PyObject *PyVTKClass_vtkSMLinkNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(NULL,
    PyvtkSMLink_Methods,
    "vtkSMLink", modulename,
    NULL, NULL,
    PyvtkSMLink_Doc(),
    PyVTKClass_vtkSMRemoteObjectNew(modulename));

  if (cls)
    {
    PyObject *d = PyVTKClass_GetDict(cls);
    PyObject *o;

    PyType_Ready(&PyvtkSMLink_UpdateDirections_Type);
    PyvtkSMLink_UpdateDirections_Type.tp_new = NULL;

    o = (PyObject *)&PyvtkSMLink_UpdateDirections_Type;
    if (o && PyDict_SetItemString(d, (char *)"UpdateDirections", o) != 0)
      {
      Py_DECREF(o);
      }

    for (int c = 0; c < 3; c++)
      {
      typedef vtkSMLink::UpdateDirections cxx_enum_type;

      static const struct { const char *name; cxx_enum_type value; }
        constants[3] = {
          { "NONE", vtkSMLink::NONE },
          { "INPUT", vtkSMLink::INPUT },
          { "OUTPUT", vtkSMLink::OUTPUT },
        };

      o = PyvtkSMLink_UpdateDirections_FromEnum(constants[c].value);
      if (o)
        {
        PyDict_SetItemString(d, (char *)constants[c].name, o);
        Py_DECREF(o);
        }
      }

    }

  return cls;
}

const char **PyvtkSMLink_Doc()
{
  static const char *docstring[] = {
    "vtkSMLink - Abstract base class for proxy/property links.\n\n",
    "Superclass: vtkSMRemoteObject\n\n",
    "Abstract base class for proxy/property links. Links provide a means\nto connect two properies(or proxies) together, thus when one is\nupdated, the dependent one is also updated accordingly.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkSMLink(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkSMLinkNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkSMLink", o) != 0)
    {
    Py_DECREF(o);
    }

}

