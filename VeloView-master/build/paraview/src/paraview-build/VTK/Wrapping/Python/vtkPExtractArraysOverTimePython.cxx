// python wrapper for vtkPExtractArraysOverTime
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkPExtractArraysOverTime.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkPExtractArraysOverTime(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkPExtractArraysOverTimeNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkExtractArraysOverTimeNew
extern "C" { PyObject *PyVTKClass_vtkExtractArraysOverTimeNew(const char *); }
#define DECLARED_PyVTKClass_vtkExtractArraysOverTimeNew
#endif

static const char **PyvtkPExtractArraysOverTime_Doc();

#ifndef DECLARED_PyvtkPExtractArraysOverTime_Tags_Type
extern VTK_PYTHON_EXPORT PyTypeObject PyvtkPExtractArraysOverTime_Tags_Type;
#define DECLARED_PyvtkPExtractArraysOverTime_Tags_Type
#endif

PyTypeObject PyvtkPExtractArraysOverTime_Tags_Type = {
  PyObject_HEAD_INIT(&PyType_Type)
  0,
  (char*)"Tags", // tp_name
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

PyObject *PyvtkPExtractArraysOverTime_Tags_FromEnum(int val)
{
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkPExtractArraysOverTime_Tags_Type);
  self->ob_ival = val;
  return (PyObject *)self;
}


static PyObject *
PyvtkPExtractArraysOverTime_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPExtractArraysOverTime *op = static_cast<vtkPExtractArraysOverTime *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkPExtractArraysOverTime::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPExtractArraysOverTime_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPExtractArraysOverTime *op = static_cast<vtkPExtractArraysOverTime *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPExtractArraysOverTime::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPExtractArraysOverTime_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPExtractArraysOverTime *op = static_cast<vtkPExtractArraysOverTime *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPExtractArraysOverTime *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPExtractArraysOverTime::NewInstance());

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
PyvtkPExtractArraysOverTime_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkPExtractArraysOverTime *tempr = vtkPExtractArraysOverTime::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPExtractArraysOverTime_SetController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPExtractArraysOverTime *op = static_cast<vtkPExtractArraysOverTime *>(vp);

  vtkMultiProcessController *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMultiProcessController"))
    {
    if (ap.IsBound())
      {
      op->SetController(temp0);
      }
    else
      {
      op->vtkPExtractArraysOverTime::SetController(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPExtractArraysOverTime_GetController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPExtractArraysOverTime *op = static_cast<vtkPExtractArraysOverTime *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkMultiProcessController *tempr = (ap.IsBound() ?
      op->GetController() :
      op->vtkPExtractArraysOverTime::GetController());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkPExtractArraysOverTime_Methods[] = {
  {(char*)"GetClassName", PyvtkPExtractArraysOverTime_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkPExtractArraysOverTime_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkPExtractArraysOverTime_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkPExtractArraysOverTime\nC++: vtkPExtractArraysOverTime *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkPExtractArraysOverTime_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkPExtractArraysOverTime\nC++: vtkPExtractArraysOverTime *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetController", PyvtkPExtractArraysOverTime_SetController, METH_VARARGS,
   (char*)"V.SetController(vtkMultiProcessController)\nC++: virtual void SetController(vtkMultiProcessController *)\n\nSet and get the controller.\n"},
  {(char*)"GetController", PyvtkPExtractArraysOverTime_GetController, METH_VARARGS,
   (char*)"V.GetController() -> vtkMultiProcessController\nC++: vtkMultiProcessController *GetController()\n\nSet and get the controller.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkPExtractArraysOverTime_StaticNew()
{
  return vtkPExtractArraysOverTime::New();
}

PyObject *PyVTKClass_vtkPExtractArraysOverTimeNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkPExtractArraysOverTime_StaticNew,
    PyvtkPExtractArraysOverTime_Methods,
    "vtkPExtractArraysOverTime", modulename,
    NULL, NULL,
    PyvtkPExtractArraysOverTime_Doc(),
    PyVTKClass_vtkExtractArraysOverTimeNew(modulename));

  if (cls)
    {
    PyObject *d = PyVTKClass_GetDict(cls);
    PyObject *o;

    PyType_Ready(&PyvtkPExtractArraysOverTime_Tags_Type);
    PyvtkPExtractArraysOverTime_Tags_Type.tp_new = NULL;

    o = (PyObject *)&PyvtkPExtractArraysOverTime_Tags_Type;
    if (o && PyDict_SetItemString(d, (char *)"Tags", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyvtkPExtractArraysOverTime_Tags_FromEnum(vtkPExtractArraysOverTime::EXCHANGE_DATA);
    if (o)
      {
      PyDict_SetItemString(d, (char *)"EXCHANGE_DATA", o);
      Py_DECREF(o);
      }
    }

  return cls;
}

const char **PyvtkPExtractArraysOverTime_Doc()
{
  static const char *docstring[] = {
    "vtkPExtractArraysOverTime - extract point or cell data over time\n(parallel)\n\n",
    "Superclass: vtkExtractArraysOverTime\n\n",
    "vtkPExtractArraysOverTime is a parallelized version of\nvtkExtractArraysOverTime. vtkExtractArraysOverTime extract point or\ncell data given a selection. For every cell or point extracted,\nvtkExtractArraysOverTime create a vtkTable that is placed in an\nappropriately named block in an output multi-block dataset. For\nglobal-id based selections or location based selections, it's\npossible that over time",
    " the cell/point moves across processes. This\nfilter ensures that such extractions spread across processes are\ncombined correctly into a single vtkTable. This filter produces a\nvalid output on the root node alone, all other nodes, simply have\nempty multi-block dataset with number of blocks matching the root (to\nensure that all processes have the same structure).\n\nSee Also:\n\nvtkExtractArraysOverTime",
    "\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPExtractArraysOverTime(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPExtractArraysOverTimeNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPExtractArraysOverTime", o) != 0)
    {
    Py_DECREF(o);
    }

}

