// python wrapper for vtkEvent
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkEvent.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkEvent(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkEventNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkEvent_Doc();

#ifndef DECLARED_PyvtkEvent_EventModifiers_Type
extern VTK_PYTHON_EXPORT PyTypeObject PyvtkEvent_EventModifiers_Type;
#define DECLARED_PyvtkEvent_EventModifiers_Type
#endif

PyTypeObject PyvtkEvent_EventModifiers_Type = {
  PyObject_HEAD_INIT(&PyType_Type)
  0,
  (char*)"EventModifiers", // tp_name
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

PyObject *PyvtkEvent_EventModifiers_FromEnum(int val)
{
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkEvent_EventModifiers_Type);
  self->ob_ival = val;
  return (PyObject *)self;
}


static PyObject *
PyvtkEvent_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEvent *op = static_cast<vtkEvent *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkEvent::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkEvent_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEvent *op = static_cast<vtkEvent *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkEvent::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkEvent_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEvent *op = static_cast<vtkEvent *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkEvent *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkEvent::NewInstance());

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
PyvtkEvent_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkEvent *tempr = vtkEvent::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkEvent_SetEventId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEventId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEvent *op = static_cast<vtkEvent *>(vp);

  unsigned long temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetEventId(temp0);
      }
    else
      {
      op->vtkEvent::SetEventId(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkEvent_GetEventId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEventId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEvent *op = static_cast<vtkEvent *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned long tempr = (ap.IsBound() ?
      op->GetEventId() :
      op->vtkEvent::GetEventId());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkEvent_SetModifier(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetModifier");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEvent *op = static_cast<vtkEvent *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetModifier(temp0);
      }
    else
      {
      op->vtkEvent::SetModifier(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkEvent_GetModifier_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetModifier");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEvent *op = static_cast<vtkEvent *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetModifier() :
      op->vtkEvent::GetModifier());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkEvent_GetModifier_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetModifier");

  vtkRenderWindowInteractor *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkRenderWindowInteractor"))
    {
    int tempr = vtkEvent::GetModifier(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkEvent_GetModifier(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
    {
    case 0:
      return PyvtkEvent_GetModifier_s1(self, args);
    case 1:
      return PyvtkEvent_GetModifier_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetModifier");
  return NULL;
}



static PyObject *
PyvtkEvent_SetKeyCode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetKeyCode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEvent *op = static_cast<vtkEvent *>(vp);

  char temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetKeyCode(temp0);
      }
    else
      {
      op->vtkEvent::SetKeyCode(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkEvent_GetKeyCode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetKeyCode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEvent *op = static_cast<vtkEvent *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char tempr = (ap.IsBound() ?
      op->GetKeyCode() :
      op->vtkEvent::GetKeyCode());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkEvent_SetRepeatCount(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRepeatCount");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEvent *op = static_cast<vtkEvent *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetRepeatCount(temp0);
      }
    else
      {
      op->vtkEvent::SetRepeatCount(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkEvent_GetRepeatCount(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRepeatCount");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEvent *op = static_cast<vtkEvent *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetRepeatCount() :
      op->vtkEvent::GetRepeatCount());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkEvent_SetKeySym(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetKeySym");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEvent *op = static_cast<vtkEvent *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetKeySym(temp0);
      }
    else
      {
      op->vtkEvent::SetKeySym(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkEvent_GetKeySym(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetKeySym");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEvent *op = static_cast<vtkEvent *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetKeySym() :
      op->vtkEvent::GetKeySym());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkEvent_Methods[] = {
  {(char*)"GetClassName", PyvtkEvent_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\nStandard macros.\n"},
  {(char*)"IsA", PyvtkEvent_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\nStandard macros.\n"},
  {(char*)"NewInstance", PyvtkEvent_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkEvent\nC++: vtkEvent *NewInstance()\n\nStandard macros.\n"},
  {(char*)"SafeDownCast", PyvtkEvent_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkEvent\nC++: vtkEvent *SafeDownCast(vtkObject* o)\n\nStandard macros.\n"},
  {(char*)"SetEventId", PyvtkEvent_SetEventId, METH_VARARGS,
   (char*)"V.SetEventId(int)\nC++: void SetEventId(unsigned long a)\n\nSet the modifier for the event.\n"},
  {(char*)"GetEventId", PyvtkEvent_GetEventId, METH_VARARGS,
   (char*)"V.GetEventId() -> int\nC++: unsigned long GetEventId()\n\nSet the modifier for the event.\n"},
  {(char*)"SetModifier", PyvtkEvent_SetModifier, METH_VARARGS,
   (char*)"V.SetModifier(int)\nC++: void SetModifier(int a)\n\nSet the modifier for the event.\n"},
  {(char*)"GetModifier", PyvtkEvent_GetModifier, METH_VARARGS,
   (char*)"V.GetModifier() -> int\nC++: int GetModifier()\nV.GetModifier(vtkRenderWindowInteractor) -> int\nC++: static int GetModifier(vtkRenderWindowInteractor *)\n\nSet the modifier for the event.\n"},
  {(char*)"SetKeyCode", PyvtkEvent_SetKeyCode, METH_VARARGS,
   (char*)"V.SetKeyCode(char)\nC++: void SetKeyCode(char a)\n\nSet the KeyCode for the event.\n"},
  {(char*)"GetKeyCode", PyvtkEvent_GetKeyCode, METH_VARARGS,
   (char*)"V.GetKeyCode() -> char\nC++: char GetKeyCode()\n\nSet the KeyCode for the event.\n"},
  {(char*)"SetRepeatCount", PyvtkEvent_SetRepeatCount, METH_VARARGS,
   (char*)"V.SetRepeatCount(int)\nC++: void SetRepeatCount(int a)\n\nSet the repease count for the event.\n"},
  {(char*)"GetRepeatCount", PyvtkEvent_GetRepeatCount, METH_VARARGS,
   (char*)"V.GetRepeatCount() -> int\nC++: int GetRepeatCount()\n\nSet the repease count for the event.\n"},
  {(char*)"SetKeySym", PyvtkEvent_SetKeySym, METH_VARARGS,
   (char*)"V.SetKeySym(string)\nC++: void SetKeySym(char *)\n\nSet the complex key symbol (compound key strokes) for the event.\n"},
  {(char*)"GetKeySym", PyvtkEvent_GetKeySym, METH_VARARGS,
   (char*)"V.GetKeySym() -> string\nC++: char *GetKeySym()\n\nSet the complex key symbol (compound key strokes) for the event.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkEvent_StaticNew()
{
  return vtkEvent::New();
}

PyObject *PyVTKClass_vtkEventNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkEvent_StaticNew,
    PyvtkEvent_Methods,
    "vtkEvent", modulename,
    NULL, NULL,
    PyvtkEvent_Doc(),
    PyVTKClass_vtkObjectNew(modulename));

  if (cls)
    {
    PyObject *d = PyVTKClass_GetDict(cls);
    PyObject *o;

    PyType_Ready(&PyvtkEvent_EventModifiers_Type);
    PyvtkEvent_EventModifiers_Type.tp_new = NULL;

    o = (PyObject *)&PyvtkEvent_EventModifiers_Type;
    if (o && PyDict_SetItemString(d, (char *)"EventModifiers", o) != 0)
      {
      Py_DECREF(o);
      }

    for (int c = 0; c < 5; c++)
      {
      typedef vtkEvent::EventModifiers cxx_enum_type;

      static const struct { const char *name; cxx_enum_type value; }
        constants[5] = {
          { "AnyModifier", vtkEvent::AnyModifier },
          { "NoModifier", vtkEvent::NoModifier },
          { "ShiftModifier", vtkEvent::ShiftModifier },
          { "ControlModifier", vtkEvent::ControlModifier },
          { "AltModifier", vtkEvent::AltModifier },
        };

      o = PyvtkEvent_EventModifiers_FromEnum(constants[c].value);
      if (o)
        {
        PyDict_SetItemString(d, (char *)constants[c].name, o);
        Py_DECREF(o);
        }
      }

    }

  return cls;
}

const char **PyvtkEvent_Doc()
{
  static const char *docstring[] = {
    "vtkEvent - a complete specification of a VTK event including all\nmodifiers\n\n",
    "Superclass: vtkObject\n\n",
    "vtkEvent is a class that fully describes a VTK event. It is used by\nthe widgets to help specify the mapping between VTK events and widget\nevents.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkEvent(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkEventNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkEvent", o) != 0)
    {
    Py_DECREF(o);
    }

}

