// python wrapper for vtkTreeDFSIterator
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkTreeDFSIterator.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkTreeDFSIterator(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkTreeDFSIteratorNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkTreeIteratorNew
extern "C" { PyObject *PyVTKClass_vtkTreeIteratorNew(const char *); }
#define DECLARED_PyVTKClass_vtkTreeIteratorNew
#endif

static const char **PyvtkTreeDFSIterator_Doc();

#ifndef DECLARED_PyvtkTreeDFSIterator_ModeType_Type
extern VTK_PYTHON_EXPORT PyTypeObject PyvtkTreeDFSIterator_ModeType_Type;
#define DECLARED_PyvtkTreeDFSIterator_ModeType_Type
#endif

PyTypeObject PyvtkTreeDFSIterator_ModeType_Type = {
  PyObject_HEAD_INIT(&PyType_Type)
  0,
  (char*)"ModeType", // tp_name
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

PyObject *PyvtkTreeDFSIterator_ModeType_FromEnum(int val)
{
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkTreeDFSIterator_ModeType_Type);
  self->ob_ival = val;
  return (PyObject *)self;
}


static PyObject *
PyvtkTreeDFSIterator_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeDFSIterator *op = static_cast<vtkTreeDFSIterator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkTreeDFSIterator::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTreeDFSIterator_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeDFSIterator *op = static_cast<vtkTreeDFSIterator *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkTreeDFSIterator::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTreeDFSIterator_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeDFSIterator *op = static_cast<vtkTreeDFSIterator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkTreeDFSIterator *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkTreeDFSIterator::NewInstance());

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
PyvtkTreeDFSIterator_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkTreeDFSIterator *tempr = vtkTreeDFSIterator::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTreeDFSIterator_SetMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeDFSIterator *op = static_cast<vtkTreeDFSIterator *>(vp);

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
      op->vtkTreeDFSIterator::SetMode(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTreeDFSIterator_GetMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeDFSIterator *op = static_cast<vtkTreeDFSIterator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetMode() :
      op->vtkTreeDFSIterator::GetMode());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkTreeDFSIterator_Methods[] = {
  {(char*)"GetClassName", PyvtkTreeDFSIterator_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkTreeDFSIterator_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkTreeDFSIterator_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkTreeDFSIterator\nC++: vtkTreeDFSIterator *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkTreeDFSIterator_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkTreeDFSIterator\nC++: vtkTreeDFSIterator *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetMode", PyvtkTreeDFSIterator_SetMode, METH_VARARGS,
   (char*)"V.SetMode(int)\nC++: void SetMode(int mode)\n\nSet the visit mode of the iterator.  Mode can be\n  DISCOVER (0): Order by discovery time\n  FINISH   (1): Order by finish time Default is DISCOVER. Use\nDISCOVER for top-down algorithms where parents need to be\nprocessed before children. Use FINISH for bottom-up algorithms\nwhere children need to be processed before parents.\n"},
  {(char*)"GetMode", PyvtkTreeDFSIterator_GetMode, METH_VARARGS,
   (char*)"V.GetMode() -> int\nC++: int GetMode()\n\nSet the visit mode of the iterator.  Mode can be\n  DISCOVER (0): Order by discovery time\n  FINISH   (1): Order by finish time Default is DISCOVER. Use\nDISCOVER for top-down algorithms where parents need to be\nprocessed before children. Use FINISH for bottom-up algorithms\nwhere children need to be processed before parents.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkTreeDFSIterator_StaticNew()
{
  return vtkTreeDFSIterator::New();
}

PyObject *PyVTKClass_vtkTreeDFSIteratorNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkTreeDFSIterator_StaticNew,
    PyvtkTreeDFSIterator_Methods,
    "vtkTreeDFSIterator", modulename,
    NULL, NULL,
    PyvtkTreeDFSIterator_Doc(),
    PyVTKClass_vtkTreeIteratorNew(modulename));

  if (cls)
    {
    PyObject *d = PyVTKClass_GetDict(cls);
    PyObject *o;

    PyType_Ready(&PyvtkTreeDFSIterator_ModeType_Type);
    PyvtkTreeDFSIterator_ModeType_Type.tp_new = NULL;

    o = (PyObject *)&PyvtkTreeDFSIterator_ModeType_Type;
    if (o && PyDict_SetItemString(d, (char *)"ModeType", o) != 0)
      {
      Py_DECREF(o);
      }

    for (int c = 0; c < 2; c++)
      {
      typedef vtkTreeDFSIterator::ModeType cxx_enum_type;

      static const struct { const char *name; cxx_enum_type value; }
        constants[2] = {
          { "DISCOVER", vtkTreeDFSIterator::DISCOVER },
          { "FINISH", vtkTreeDFSIterator::FINISH },
        };

      o = PyvtkTreeDFSIterator_ModeType_FromEnum(constants[c].value);
      if (o)
        {
        PyDict_SetItemString(d, (char *)constants[c].name, o);
        Py_DECREF(o);
        }
      }

    }

  return cls;
}

const char **PyvtkTreeDFSIterator_Doc()
{
  static const char *docstring[] = {
    "vtkTreeDFSIterator - depth first iterator through a vtkGraph\n\n",
    "Superclass: vtkTreeIterator\n\n",
    "vtkTreeDFSIterator performs a depth first search traversal of a tree.\n\nFirst, you must set the tree on which you are going to iterate, and\nthen optionally set the starting vertex and mode. The mode is either\nDISCOVER (default), in which case vertices are visited as they are\nfirst reached, or FINISH, in which case vertices are visited when\nthey are done, i.e. all adjacent vertices have been discove",
    "red\nalready.\n\nAfter setting up the iterator, the normal mode of operation is to set\nup a while(iter->HasNext())loop, with the statement vtkIdType vertex\n= iter->Next()inside the loop.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkTreeDFSIterator(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkTreeDFSIteratorNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkTreeDFSIterator", o) != 0)
    {
    Py_DECREF(o);
    }

}

