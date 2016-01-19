// python wrapper for vtkSMUndoStack
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkSMUndoStack.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkSMUndoStack(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkSMUndoStackNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkUndoStackNew
extern "C" { PyObject *PyVTKClass_vtkUndoStackNew(const char *); }
#define DECLARED_PyVTKClass_vtkUndoStackNew
#endif

static const char **PyvtkSMUndoStack_Doc();

#ifndef DECLARED_PyvtkSMUndoStack_EventIds_Type
extern VTK_PYTHON_EXPORT PyTypeObject PyvtkSMUndoStack_EventIds_Type;
#define DECLARED_PyvtkSMUndoStack_EventIds_Type
#endif

PyTypeObject PyvtkSMUndoStack_EventIds_Type = {
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

PyObject *PyvtkSMUndoStack_EventIds_FromEnum(int val)
{
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkSMUndoStack_EventIds_Type);
  self->ob_ival = val;
  return (PyObject *)self;
}


static PyObject *
PyvtkSMUndoStack_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMUndoStack *op = static_cast<vtkSMUndoStack *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkSMUndoStack::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMUndoStack_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMUndoStack *op = static_cast<vtkSMUndoStack *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSMUndoStack::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMUndoStack_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMUndoStack *op = static_cast<vtkSMUndoStack *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkSMUndoStack *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSMUndoStack::NewInstance());

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
PyvtkSMUndoStack_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkSMUndoStack *tempr = vtkSMUndoStack::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMUndoStack_Push(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Push");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMUndoStack *op = static_cast<vtkSMUndoStack *>(vp);

  char *temp0 = NULL;
  vtkUndoSet *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkUndoSet"))
    {
    if (ap.IsBound())
      {
      op->Push(temp0, temp1);
      }
    else
      {
      op->vtkSMUndoStack::Push(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMUndoStack_Undo(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Undo");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMUndoStack *op = static_cast<vtkSMUndoStack *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->Undo() :
      op->vtkSMUndoStack::Undo());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMUndoStack_Redo(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Redo");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMUndoStack *op = static_cast<vtkSMUndoStack *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->Redo() :
      op->vtkSMUndoStack::Redo());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkSMUndoStack_Methods[] = {
  {(char*)"GetClassName", PyvtkSMUndoStack_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkSMUndoStack_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkSMUndoStack_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkSMUndoStack\nC++: vtkSMUndoStack *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkSMUndoStack_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkSMUndoStack\nC++: vtkSMUndoStack *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"Push", PyvtkSMUndoStack_Push, METH_VARARGS,
   (char*)"V.Push(string, vtkUndoSet)\nC++: virtual void Push(const char *label, vtkUndoSet *changeSet)\n\nPush an undo set on the Undo stack. This will clear any sets in\nthe Redo stack.\n"},
  {(char*)"Undo", PyvtkSMUndoStack_Undo, METH_VARARGS,
   (char*)"V.Undo() -> int\nC++: virtual int Undo()\n\nPerforms an Undo using the set on the top of the undo stack. The\nset is poped from the undo stack and pushed at the top of the\nredo stack. Before undo begins, it fires vtkCommand::StartEvent\nand when undo completes, it fires vtkCommand::EndEvent.\n\\returns the status of the operation.\n"},
  {(char*)"Redo", PyvtkSMUndoStack_Redo, METH_VARARGS,
   (char*)"V.Redo() -> int\nC++: virtual int Redo()\n\nPerforms a Redo using the set on the top of the redo stack. The\nset is poped from the redo stack and pushed at the top of the\nundo stack. Before redo begins, it fires vtkCommand::StartEvent\nand when redo completes, it fires vtkCommand::EndEvent.\n\\returns the status of the operation.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkSMUndoStack_StaticNew()
{
  return vtkSMUndoStack::New();
}

PyObject *PyVTKClass_vtkSMUndoStackNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkSMUndoStack_StaticNew,
    PyvtkSMUndoStack_Methods,
    "vtkSMUndoStack", modulename,
    NULL, NULL,
    PyvtkSMUndoStack_Doc(),
    PyVTKClass_vtkUndoStackNew(modulename));

  if (cls)
    {
    PyObject *d = PyVTKClass_GetDict(cls);
    PyObject *o;

    PyType_Ready(&PyvtkSMUndoStack_EventIds_Type);
    PyvtkSMUndoStack_EventIds_Type.tp_new = NULL;

    o = (PyObject *)&PyvtkSMUndoStack_EventIds_Type;
    if (o && PyDict_SetItemString(d, (char *)"EventIds", o) != 0)
      {
      Py_DECREF(o);
      }

    for (int c = 0; c < 2; c++)
      {
      typedef vtkSMUndoStack::EventIds cxx_enum_type;

      static const struct { const char *name; cxx_enum_type value; }
        constants[2] = {
          { "PushUndoSetEvent", vtkSMUndoStack::PushUndoSetEvent },
          { "ObjectCreationEvent", vtkSMUndoStack::ObjectCreationEvent },
        };

      o = PyvtkSMUndoStack_EventIds_FromEnum(constants[c].value);
      if (o)
        {
        PyDict_SetItemString(d, (char *)constants[c].name, o);
        Py_DECREF(o);
        }
      }

    }

  return cls;
}

const char **PyvtkSMUndoStack_Doc()
{
  static const char *docstring[] = {
    "vtkSMUndoStack\n\n",
    "Superclass: vtkUndoStack\n\n",
    "This is the undo/redo stack for the Server Manager. This provides a\nunified face for undo/redo irrespective of number of connections,\ntheir type etc etc.\n\nOn every undo/redo, it fetches the XML state change from the server.\nvtkSMUndoRedoStateLoader is used to generate a vtkUndoSet object from\nthe XML. GUI can subclass vtkSMUndoRedoStateLoader to handle GUI\nspecific XML elements. The loader instanc",
    "e must be set before\nperforming the undo, otherwise vtkSMUndoRedoStateLoader is used.\n\nThis class also provides API to push any vtkUndoSet instance on to a\nserver. GUI can use this to push its own changes that is undoable\nacross connections.\n\nSee Also:\n\nvtkSMUndoStackBuilder\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkSMUndoStack(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkSMUndoStackNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkSMUndoStack", o) != 0)
    {
    Py_DECREF(o);
    }

}

