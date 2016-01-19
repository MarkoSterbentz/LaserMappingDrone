// python wrapper for vtkWidgetEvent
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkWidgetEvent.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkWidgetEvent(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkWidgetEventNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkWidgetEvent_Doc();

#ifndef DECLARED_PyvtkWidgetEvent_WidgetEventIds_Type
extern VTK_PYTHON_EXPORT PyTypeObject PyvtkWidgetEvent_WidgetEventIds_Type;
#define DECLARED_PyvtkWidgetEvent_WidgetEventIds_Type
#endif

PyTypeObject PyvtkWidgetEvent_WidgetEventIds_Type = {
  PyObject_HEAD_INIT(&PyType_Type)
  0,
  (char*)"WidgetEventIds", // tp_name
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

PyObject *PyvtkWidgetEvent_WidgetEventIds_FromEnum(int val)
{
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkWidgetEvent_WidgetEventIds_Type);
  self->ob_ival = val;
  return (PyObject *)self;
}


static PyObject *
PyvtkWidgetEvent_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWidgetEvent *op = static_cast<vtkWidgetEvent *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkWidgetEvent::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkWidgetEvent_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWidgetEvent *op = static_cast<vtkWidgetEvent *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkWidgetEvent::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkWidgetEvent_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWidgetEvent *op = static_cast<vtkWidgetEvent *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkWidgetEvent *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkWidgetEvent::NewInstance());

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
PyvtkWidgetEvent_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkWidgetEvent *tempr = vtkWidgetEvent::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkWidgetEvent_GetStringFromEventId(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetStringFromEventId");

  unsigned long temp0;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    const char *tempr = vtkWidgetEvent::GetStringFromEventId(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkWidgetEvent_GetEventIdFromString(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetEventIdFromString");

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    unsigned long tempr = vtkWidgetEvent::GetEventIdFromString(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkWidgetEvent_Methods[] = {
  {(char*)"GetClassName", PyvtkWidgetEvent_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\nStandard macros.\n"},
  {(char*)"IsA", PyvtkWidgetEvent_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\nStandard macros.\n"},
  {(char*)"NewInstance", PyvtkWidgetEvent_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkWidgetEvent\nC++: vtkWidgetEvent *NewInstance()\n\nStandard macros.\n"},
  {(char*)"SafeDownCast", PyvtkWidgetEvent_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkWidgetEvent\nC++: vtkWidgetEvent *SafeDownCast(vtkObject* o)\n\nStandard macros.\n"},
  {(char*)"GetStringFromEventId", PyvtkWidgetEvent_GetStringFromEventId, METH_VARARGS | METH_STATIC,
   (char*)"V.GetStringFromEventId(int) -> string\nC++: static const char *GetStringFromEventId(unsigned long event)\n\nConvenience methods for translating between event names and event\nids.\n"},
  {(char*)"GetEventIdFromString", PyvtkWidgetEvent_GetEventIdFromString, METH_VARARGS | METH_STATIC,
   (char*)"V.GetEventIdFromString(string) -> int\nC++: static unsigned long GetEventIdFromString(const char *event)\n\nConvenience methods for translating between event names and event\nids.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkWidgetEvent_StaticNew()
{
  return vtkWidgetEvent::New();
}

PyObject *PyVTKClass_vtkWidgetEventNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkWidgetEvent_StaticNew,
    PyvtkWidgetEvent_Methods,
    "vtkWidgetEvent", modulename,
    NULL, NULL,
    PyvtkWidgetEvent_Doc(),
    PyVTKClass_vtkObjectNew(modulename));

  if (cls)
    {
    PyObject *d = PyVTKClass_GetDict(cls);
    PyObject *o;

    PyType_Ready(&PyvtkWidgetEvent_WidgetEventIds_Type);
    PyvtkWidgetEvent_WidgetEventIds_Type.tp_new = NULL;

    o = (PyObject *)&PyvtkWidgetEvent_WidgetEventIds_Type;
    if (o && PyDict_SetItemString(d, (char *)"WidgetEventIds", o) != 0)
      {
      Py_DECREF(o);
      }

    for (int c = 0; c < 24; c++)
      {
      typedef vtkWidgetEvent::WidgetEventIds cxx_enum_type;

      static const struct { const char *name; cxx_enum_type value; }
        constants[24] = {
          { "NoEvent", vtkWidgetEvent::NoEvent },
          { "Select", vtkWidgetEvent::Select },
          { "EndSelect", vtkWidgetEvent::EndSelect },
          { "Delete", vtkWidgetEvent::Delete },
          { "Translate", vtkWidgetEvent::Translate },
          { "EndTranslate", vtkWidgetEvent::EndTranslate },
          { "Scale", vtkWidgetEvent::Scale },
          { "EndScale", vtkWidgetEvent::EndScale },
          { "Resize", vtkWidgetEvent::Resize },
          { "EndResize", vtkWidgetEvent::EndResize },
          { "Rotate", vtkWidgetEvent::Rotate },
          { "EndRotate", vtkWidgetEvent::EndRotate },
          { "Move", vtkWidgetEvent::Move },
          { "SizeHandles", vtkWidgetEvent::SizeHandles },
          { "AddPoint", vtkWidgetEvent::AddPoint },
          { "AddFinalPoint", vtkWidgetEvent::AddFinalPoint },
          { "Completed", vtkWidgetEvent::Completed },
          { "TimedOut", vtkWidgetEvent::TimedOut },
          { "ModifyEvent", vtkWidgetEvent::ModifyEvent },
          { "Reset", vtkWidgetEvent::Reset },
          { "Up", vtkWidgetEvent::Up },
          { "Down", vtkWidgetEvent::Down },
          { "Left", vtkWidgetEvent::Left },
          { "Right", vtkWidgetEvent::Right },
        };

      o = PyvtkWidgetEvent_WidgetEventIds_FromEnum(constants[c].value);
      if (o)
        {
        PyDict_SetItemString(d, (char *)constants[c].name, o);
        Py_DECREF(o);
        }
      }

    }

  return cls;
}

const char **PyvtkWidgetEvent_Doc()
{
  static const char *docstring[] = {
    "vtkWidgetEvent - define widget events\n\n",
    "Superclass: vtkObject\n\n",
    "vtkWidgetEvent defines widget events. These events are processed by\nsubclasses of vtkInteractorObserver.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkWidgetEvent(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkWidgetEventNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkWidgetEvent", o) != 0)
    {
    Py_DECREF(o);
    }

}

