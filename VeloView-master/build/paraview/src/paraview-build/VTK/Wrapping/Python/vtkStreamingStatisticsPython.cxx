// python wrapper for vtkStreamingStatistics
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkStreamingStatistics.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkStreamingStatistics(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkStreamingStatisticsNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkTableAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkTableAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkTableAlgorithmNew
#endif

static const char **PyvtkStreamingStatistics_Doc();

#ifndef DECLARED_PyvtkStreamingStatistics_InputPorts_Type
extern VTK_PYTHON_EXPORT PyTypeObject PyvtkStreamingStatistics_InputPorts_Type;
#define DECLARED_PyvtkStreamingStatistics_InputPorts_Type
#endif

PyTypeObject PyvtkStreamingStatistics_InputPorts_Type = {
  PyObject_HEAD_INIT(&PyType_Type)
  0,
  (char*)"InputPorts", // tp_name
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

PyObject *PyvtkStreamingStatistics_InputPorts_FromEnum(int val)
{
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkStreamingStatistics_InputPorts_Type);
  self->ob_ival = val;
  return (PyObject *)self;
}

#ifndef DECLARED_PyvtkStreamingStatistics_OutputIndices_Type
extern VTK_PYTHON_EXPORT PyTypeObject PyvtkStreamingStatistics_OutputIndices_Type;
#define DECLARED_PyvtkStreamingStatistics_OutputIndices_Type
#endif

PyTypeObject PyvtkStreamingStatistics_OutputIndices_Type = {
  PyObject_HEAD_INIT(&PyType_Type)
  0,
  (char*)"OutputIndices", // tp_name
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

PyObject *PyvtkStreamingStatistics_OutputIndices_FromEnum(int val)
{
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkStreamingStatistics_OutputIndices_Type);
  self->ob_ival = val;
  return (PyObject *)self;
}


static PyObject *
PyvtkStreamingStatistics_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamingStatistics *op = static_cast<vtkStreamingStatistics *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkStreamingStatistics::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStreamingStatistics_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamingStatistics *op = static_cast<vtkStreamingStatistics *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkStreamingStatistics::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStreamingStatistics_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamingStatistics *op = static_cast<vtkStreamingStatistics *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkStreamingStatistics *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkStreamingStatistics::NewInstance());

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
PyvtkStreamingStatistics_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkStreamingStatistics *tempr = vtkStreamingStatistics::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStreamingStatistics_SetStatisticsAlgorithm(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetStatisticsAlgorithm");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamingStatistics *op = static_cast<vtkStreamingStatistics *>(vp);

  vtkStatisticsAlgorithm *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkStatisticsAlgorithm"))
    {
    if (ap.IsBound())
      {
      op->SetStatisticsAlgorithm(temp0);
      }
    else
      {
      op->vtkStreamingStatistics::SetStatisticsAlgorithm(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkStreamingStatistics_Methods[] = {
  {(char*)"GetClassName", PyvtkStreamingStatistics_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkStreamingStatistics_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkStreamingStatistics_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkStreamingStatistics\nC++: vtkStreamingStatistics *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkStreamingStatistics_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkStreamingStatistics\nC++: vtkStreamingStatistics *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetStatisticsAlgorithm", PyvtkStreamingStatistics_SetStatisticsAlgorithm, METH_VARARGS,
   (char*)"V.SetStatisticsAlgorithm(vtkStatisticsAlgorithm)\nC++: virtual void SetStatisticsAlgorithm(vtkStatisticsAlgorithm *)\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkStreamingStatistics_StaticNew()
{
  return vtkStreamingStatistics::New();
}

PyObject *PyVTKClass_vtkStreamingStatisticsNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkStreamingStatistics_StaticNew,
    PyvtkStreamingStatistics_Methods,
    "vtkStreamingStatistics", modulename,
    NULL, NULL,
    PyvtkStreamingStatistics_Doc(),
    PyVTKClass_vtkTableAlgorithmNew(modulename));

  if (cls)
    {
    PyObject *d = PyVTKClass_GetDict(cls);
    PyObject *o;

    PyType_Ready(&PyvtkStreamingStatistics_InputPorts_Type);
    PyvtkStreamingStatistics_InputPorts_Type.tp_new = NULL;

    o = (PyObject *)&PyvtkStreamingStatistics_InputPorts_Type;
    if (o && PyDict_SetItemString(d, (char *)"InputPorts", o) != 0)
      {
      Py_DECREF(o);
      }

    PyType_Ready(&PyvtkStreamingStatistics_OutputIndices_Type);
    PyvtkStreamingStatistics_OutputIndices_Type.tp_new = NULL;

    o = (PyObject *)&PyvtkStreamingStatistics_OutputIndices_Type;
    if (o && PyDict_SetItemString(d, (char *)"OutputIndices", o) != 0)
      {
      Py_DECREF(o);
      }

    for (int c = 0; c < 3; c++)
      {
      typedef vtkStreamingStatistics::InputPorts cxx_enum_type;

      static const struct { const char *name; cxx_enum_type value; }
        constants[3] = {
          { "INPUT_DATA", vtkStreamingStatistics::INPUT_DATA },
          { "LEARN_PARAMETERS", vtkStreamingStatistics::LEARN_PARAMETERS },
          { "INPUT_MODEL", vtkStreamingStatistics::INPUT_MODEL },
        };

      o = PyvtkStreamingStatistics_InputPorts_FromEnum(constants[c].value);
      if (o)
        {
        PyDict_SetItemString(d, (char *)constants[c].name, o);
        Py_DECREF(o);
        }
      }

    for (int c = 0; c < 4; c++)
      {
      typedef vtkStreamingStatistics::OutputIndices cxx_enum_type;

      static const struct { const char *name; cxx_enum_type value; }
        constants[4] = {
          { "OUTPUT_DATA", vtkStreamingStatistics::OUTPUT_DATA },
          { "OUTPUT_MODEL", vtkStreamingStatistics::OUTPUT_MODEL },
          { "ASSESSMENT", vtkStreamingStatistics::ASSESSMENT },
          { "OUTPUT_TEST", vtkStreamingStatistics::OUTPUT_TEST },
        };

      o = PyvtkStreamingStatistics_OutputIndices_FromEnum(constants[c].value);
      if (o)
        {
        PyDict_SetItemString(d, (char *)constants[c].name, o);
        Py_DECREF(o);
        }
      }

    }

  return cls;
}

const char **PyvtkStreamingStatistics_Doc()
{
  static const char *docstring[] = {
    "vtkStreamingStatistics - A class for using the statistics filters\n\n",
    "Superclass: vtkTableAlgorithm\n\n",
    "A class for using the statistics filters in a streaming mode or\nperhaps an \"online, incremental, push\" mode.\n\nThanks:\n\nThanks to the Universe for unfolding in a way that allowed this class\nto be implemented, also Godzilla for not crushing my computer.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkStreamingStatistics(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkStreamingStatisticsNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkStreamingStatistics", o) != 0)
    {
    Py_DECREF(o);
    }

}

