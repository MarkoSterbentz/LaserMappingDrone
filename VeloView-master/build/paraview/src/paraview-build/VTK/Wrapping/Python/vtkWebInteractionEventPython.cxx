// python wrapper for vtkWebInteractionEvent
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkWebInteractionEvent.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkWebInteractionEvent(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkWebInteractionEventNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkWebInteractionEvent_Doc();

#ifndef DECLARED_PyvtkWebInteractionEvent_MouseButton_Type
extern VTK_PYTHON_EXPORT PyTypeObject PyvtkWebInteractionEvent_MouseButton_Type;
#define DECLARED_PyvtkWebInteractionEvent_MouseButton_Type
#endif

PyTypeObject PyvtkWebInteractionEvent_MouseButton_Type = {
  PyObject_HEAD_INIT(&PyType_Type)
  0,
  (char*)"MouseButton", // tp_name
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

PyObject *PyvtkWebInteractionEvent_MouseButton_FromEnum(int val)
{
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkWebInteractionEvent_MouseButton_Type);
  self->ob_ival = val;
  return (PyObject *)self;
}

#ifndef DECLARED_PyvtkWebInteractionEvent_ModifierKeys_Type
extern VTK_PYTHON_EXPORT PyTypeObject PyvtkWebInteractionEvent_ModifierKeys_Type;
#define DECLARED_PyvtkWebInteractionEvent_ModifierKeys_Type
#endif

PyTypeObject PyvtkWebInteractionEvent_ModifierKeys_Type = {
  PyObject_HEAD_INIT(&PyType_Type)
  0,
  (char*)"ModifierKeys", // tp_name
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

PyObject *PyvtkWebInteractionEvent_ModifierKeys_FromEnum(int val)
{
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkWebInteractionEvent_ModifierKeys_Type);
  self->ob_ival = val;
  return (PyObject *)self;
}


static PyObject *
PyvtkWebInteractionEvent_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWebInteractionEvent *op = static_cast<vtkWebInteractionEvent *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkWebInteractionEvent::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkWebInteractionEvent_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWebInteractionEvent *op = static_cast<vtkWebInteractionEvent *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkWebInteractionEvent::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkWebInteractionEvent_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWebInteractionEvent *op = static_cast<vtkWebInteractionEvent *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkWebInteractionEvent *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkWebInteractionEvent::NewInstance());

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
PyvtkWebInteractionEvent_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkWebInteractionEvent *tempr = vtkWebInteractionEvent::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkWebInteractionEvent_SetButtons(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetButtons");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWebInteractionEvent *op = static_cast<vtkWebInteractionEvent *>(vp);

  unsigned int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetButtons(temp0);
      }
    else
      {
      op->vtkWebInteractionEvent::SetButtons(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkWebInteractionEvent_GetButtons(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetButtons");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWebInteractionEvent *op = static_cast<vtkWebInteractionEvent *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned int tempr = (ap.IsBound() ?
      op->GetButtons() :
      op->vtkWebInteractionEvent::GetButtons());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkWebInteractionEvent_SetModifiers(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetModifiers");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWebInteractionEvent *op = static_cast<vtkWebInteractionEvent *>(vp);

  unsigned int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetModifiers(temp0);
      }
    else
      {
      op->vtkWebInteractionEvent::SetModifiers(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkWebInteractionEvent_GetModifiers(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetModifiers");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWebInteractionEvent *op = static_cast<vtkWebInteractionEvent *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned int tempr = (ap.IsBound() ?
      op->GetModifiers() :
      op->vtkWebInteractionEvent::GetModifiers());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkWebInteractionEvent_SetKeyCode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetKeyCode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWebInteractionEvent *op = static_cast<vtkWebInteractionEvent *>(vp);

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
      op->vtkWebInteractionEvent::SetKeyCode(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkWebInteractionEvent_GetKeyCode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetKeyCode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWebInteractionEvent *op = static_cast<vtkWebInteractionEvent *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char tempr = (ap.IsBound() ?
      op->GetKeyCode() :
      op->vtkWebInteractionEvent::GetKeyCode());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkWebInteractionEvent_SetX(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetX");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWebInteractionEvent *op = static_cast<vtkWebInteractionEvent *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetX(temp0);
      }
    else
      {
      op->vtkWebInteractionEvent::SetX(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkWebInteractionEvent_GetX(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetX");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWebInteractionEvent *op = static_cast<vtkWebInteractionEvent *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetX() :
      op->vtkWebInteractionEvent::GetX());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkWebInteractionEvent_SetY(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetY");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWebInteractionEvent *op = static_cast<vtkWebInteractionEvent *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetY(temp0);
      }
    else
      {
      op->vtkWebInteractionEvent::SetY(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkWebInteractionEvent_GetY(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetY");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWebInteractionEvent *op = static_cast<vtkWebInteractionEvent *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetY() :
      op->vtkWebInteractionEvent::GetY());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkWebInteractionEvent_SetScroll(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScroll");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWebInteractionEvent *op = static_cast<vtkWebInteractionEvent *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetScroll(temp0);
      }
    else
      {
      op->vtkWebInteractionEvent::SetScroll(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkWebInteractionEvent_GetScroll(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScroll");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWebInteractionEvent *op = static_cast<vtkWebInteractionEvent *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetScroll() :
      op->vtkWebInteractionEvent::GetScroll());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkWebInteractionEvent_SetRepeatCount(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRepeatCount");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWebInteractionEvent *op = static_cast<vtkWebInteractionEvent *>(vp);

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
      op->vtkWebInteractionEvent::SetRepeatCount(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkWebInteractionEvent_GetRepeatCount(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRepeatCount");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWebInteractionEvent *op = static_cast<vtkWebInteractionEvent *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetRepeatCount() :
      op->vtkWebInteractionEvent::GetRepeatCount());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkWebInteractionEvent_Methods[] = {
  {(char*)"GetClassName", PyvtkWebInteractionEvent_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkWebInteractionEvent_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkWebInteractionEvent_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkWebInteractionEvent\nC++: vtkWebInteractionEvent *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkWebInteractionEvent_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkWebInteractionEvent\nC++: vtkWebInteractionEvent *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetButtons", PyvtkWebInteractionEvent_SetButtons, METH_VARARGS,
   (char*)"V.SetButtons(int)\nC++: void SetButtons(unsigned int a)\n\nSet/Get the mouse buttons state.\n"},
  {(char*)"GetButtons", PyvtkWebInteractionEvent_GetButtons, METH_VARARGS,
   (char*)"V.GetButtons() -> int\nC++: unsigned int GetButtons()\n\nSet/Get the mouse buttons state.\n"},
  {(char*)"SetModifiers", PyvtkWebInteractionEvent_SetModifiers, METH_VARARGS,
   (char*)"V.SetModifiers(int)\nC++: void SetModifiers(unsigned int a)\n\nSet/Get modifier state.\n"},
  {(char*)"GetModifiers", PyvtkWebInteractionEvent_GetModifiers, METH_VARARGS,
   (char*)"V.GetModifiers() -> int\nC++: unsigned int GetModifiers()\n\nSet/Get modifier state.\n"},
  {(char*)"SetKeyCode", PyvtkWebInteractionEvent_SetKeyCode, METH_VARARGS,
   (char*)"V.SetKeyCode(char)\nC++: void SetKeyCode(char a)\n\nSet/Get the chart code.\n"},
  {(char*)"GetKeyCode", PyvtkWebInteractionEvent_GetKeyCode, METH_VARARGS,
   (char*)"V.GetKeyCode() -> char\nC++: char GetKeyCode()\n\nSet/Get the chart code.\n"},
  {(char*)"SetX", PyvtkWebInteractionEvent_SetX, METH_VARARGS,
   (char*)"V.SetX(float)\nC++: void SetX(double a)\n\nSet/Get event position.\n"},
  {(char*)"GetX", PyvtkWebInteractionEvent_GetX, METH_VARARGS,
   (char*)"V.GetX() -> float\nC++: double GetX()\n\nSet/Get event position.\n"},
  {(char*)"SetY", PyvtkWebInteractionEvent_SetY, METH_VARARGS,
   (char*)"V.SetY(float)\nC++: void SetY(double a)\n\nSet/Get event position.\n"},
  {(char*)"GetY", PyvtkWebInteractionEvent_GetY, METH_VARARGS,
   (char*)"V.GetY() -> float\nC++: double GetY()\n\nSet/Get event position.\n"},
  {(char*)"SetScroll", PyvtkWebInteractionEvent_SetScroll, METH_VARARGS,
   (char*)"V.SetScroll(float)\nC++: void SetScroll(double a)\n\nSet/Get event position.\n"},
  {(char*)"GetScroll", PyvtkWebInteractionEvent_GetScroll, METH_VARARGS,
   (char*)"V.GetScroll() -> float\nC++: double GetScroll()\n\nSet/Get event position.\n"},
  {(char*)"SetRepeatCount", PyvtkWebInteractionEvent_SetRepeatCount, METH_VARARGS,
   (char*)"V.SetRepeatCount(int)\nC++: void SetRepeatCount(int a)\n\n"},
  {(char*)"GetRepeatCount", PyvtkWebInteractionEvent_GetRepeatCount, METH_VARARGS,
   (char*)"V.GetRepeatCount() -> int\nC++: int GetRepeatCount()\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkWebInteractionEvent_StaticNew()
{
  return vtkWebInteractionEvent::New();
}

PyObject *PyVTKClass_vtkWebInteractionEventNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkWebInteractionEvent_StaticNew,
    PyvtkWebInteractionEvent_Methods,
    "vtkWebInteractionEvent", modulename,
    NULL, NULL,
    PyvtkWebInteractionEvent_Doc(),
    PyVTKClass_vtkObjectNew(modulename));

  if (cls)
    {
    PyObject *d = PyVTKClass_GetDict(cls);
    PyObject *o;

    PyType_Ready(&PyvtkWebInteractionEvent_MouseButton_Type);
    PyvtkWebInteractionEvent_MouseButton_Type.tp_new = NULL;

    o = (PyObject *)&PyvtkWebInteractionEvent_MouseButton_Type;
    if (o && PyDict_SetItemString(d, (char *)"MouseButton", o) != 0)
      {
      Py_DECREF(o);
      }

    PyType_Ready(&PyvtkWebInteractionEvent_ModifierKeys_Type);
    PyvtkWebInteractionEvent_ModifierKeys_Type.tp_new = NULL;

    o = (PyObject *)&PyvtkWebInteractionEvent_ModifierKeys_Type;
    if (o && PyDict_SetItemString(d, (char *)"ModifierKeys", o) != 0)
      {
      Py_DECREF(o);
      }

    for (int c = 0; c < 3; c++)
      {
      typedef vtkWebInteractionEvent::MouseButton cxx_enum_type;

      static const struct { const char *name; cxx_enum_type value; }
        constants[3] = {
          { "LEFT_BUTTON", vtkWebInteractionEvent::LEFT_BUTTON },
          { "MIDDLE_BUTTON", vtkWebInteractionEvent::MIDDLE_BUTTON },
          { "RIGHT_BUTTON", vtkWebInteractionEvent::RIGHT_BUTTON },
        };

      o = PyvtkWebInteractionEvent_MouseButton_FromEnum(constants[c].value);
      if (o)
        {
        PyDict_SetItemString(d, (char *)constants[c].name, o);
        Py_DECREF(o);
        }
      }

    for (int c = 0; c < 4; c++)
      {
      typedef vtkWebInteractionEvent::ModifierKeys cxx_enum_type;

      static const struct { const char *name; cxx_enum_type value; }
        constants[4] = {
          { "SHIFT_KEY", vtkWebInteractionEvent::SHIFT_KEY },
          { "CTRL_KEY", vtkWebInteractionEvent::CTRL_KEY },
          { "ALT_KEY", vtkWebInteractionEvent::ALT_KEY },
          { "META_KEY", vtkWebInteractionEvent::META_KEY },
        };

      o = PyvtkWebInteractionEvent_ModifierKeys_FromEnum(constants[c].value);
      if (o)
        {
        PyDict_SetItemString(d, (char *)constants[c].name, o);
        Py_DECREF(o);
        }
      }

    }

  return cls;
}

const char **PyvtkWebInteractionEvent_Doc()
{
  static const char *docstring[] = {
    "vtkWebInteractionEvent\n\n",
    "Superclass: vtkObject\n\n",
    "\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkWebInteractionEvent(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkWebInteractionEventNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkWebInteractionEvent", o) != 0)
    {
    Py_DECREF(o);
    }

}

