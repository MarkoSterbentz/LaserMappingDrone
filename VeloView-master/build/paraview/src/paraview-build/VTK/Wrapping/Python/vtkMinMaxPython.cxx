// python wrapper for vtkMinMax
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkMinMax.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkMinMax(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkMinMaxNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkPolyDataAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
#endif

static const char **PyvtkMinMax_Doc();

#ifndef DECLARED_PyvtkMinMax_Operations_Type
extern VTK_PYTHON_EXPORT PyTypeObject PyvtkMinMax_Operations_Type;
#define DECLARED_PyvtkMinMax_Operations_Type
#endif

PyTypeObject PyvtkMinMax_Operations_Type = {
  PyObject_HEAD_INIT(&PyType_Type)
  0,
  (char*)"Operations", // tp_name
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

PyObject *PyvtkMinMax_Operations_FromEnum(int val)
{
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkMinMax_Operations_Type);
  self->ob_ival = val;
  return (PyObject *)self;
}


static PyObject *
PyvtkMinMax_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMinMax *op = static_cast<vtkMinMax *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkMinMax::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMinMax_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMinMax *op = static_cast<vtkMinMax *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkMinMax::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMinMax_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMinMax *op = static_cast<vtkMinMax *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkMinMax *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkMinMax::NewInstance());

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
PyvtkMinMax_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkMinMax *tempr = vtkMinMax::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMinMax_SetOperation_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOperation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMinMax *op = static_cast<vtkMinMax *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetOperation(temp0);
      }
    else
      {
      op->vtkMinMax::SetOperation(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkMinMax_SetOperation_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOperation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMinMax *op = static_cast<vtkMinMax *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetOperation(temp0);
      }
    else
      {
      op->vtkMinMax::SetOperation(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkMinMax_SetOperation_Methods[] = {
  {NULL, PyvtkMinMax_SetOperation_s1, METH_VARARGS,
   (char*)"@i"},
  {NULL, PyvtkMinMax_SetOperation_s2, METH_VARARGS,
   (char*)"@z"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkMinMax_SetOperation(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkMinMax_SetOperation_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetOperation");
  return NULL;
}



static PyObject *
PyvtkMinMax_GetOperationMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOperationMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMinMax *op = static_cast<vtkMinMax *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetOperationMinValue() :
      op->vtkMinMax::GetOperationMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMinMax_GetOperationMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOperationMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMinMax *op = static_cast<vtkMinMax *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetOperationMaxValue() :
      op->vtkMinMax::GetOperationMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMinMax_GetOperation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOperation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMinMax *op = static_cast<vtkMinMax *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetOperation() :
      op->vtkMinMax::GetOperation());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMinMax_GetMismatchOccurred(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMismatchOccurred");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMinMax *op = static_cast<vtkMinMax *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetMismatchOccurred() :
      op->vtkMinMax::GetMismatchOccurred());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMinMax_GetFirstPasses(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFirstPasses");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMinMax *op = static_cast<vtkMinMax *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetFirstPasses() :
      op->vtkMinMax::GetFirstPasses());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMinMax_FlagsForPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FlagsForPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMinMax *op = static_cast<vtkMinMax *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->FlagsForPoints();
      }
    else
      {
      op->vtkMinMax::FlagsForPoints();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMinMax_FlagsForCells(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FlagsForCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMinMax *op = static_cast<vtkMinMax *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->FlagsForCells();
      }
    else
      {
      op->vtkMinMax::FlagsForCells();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkMinMax_Methods[] = {
  {(char*)"GetClassName", PyvtkMinMax_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkMinMax_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkMinMax_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkMinMax\nC++: vtkMinMax *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkMinMax_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkMinMax\nC++: vtkMinMax *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetOperation", PyvtkMinMax_SetOperation, METH_VARARGS,
   (char*)"V.SetOperation(int)\nC++: void SetOperation(int)\nV.SetOperation(string)\nC++: void SetOperation(const char *op)\n\n"},
  {(char*)"GetOperationMinValue", PyvtkMinMax_GetOperationMinValue, METH_VARARGS,
   (char*)"V.GetOperationMinValue() -> int\nC++: int GetOperationMinValue()\n\n"},
  {(char*)"GetOperationMaxValue", PyvtkMinMax_GetOperationMaxValue, METH_VARARGS,
   (char*)"V.GetOperationMaxValue() -> int\nC++: int GetOperationMaxValue()\n\n"},
  {(char*)"GetOperation", PyvtkMinMax_GetOperation, METH_VARARGS,
   (char*)"V.GetOperation() -> int\nC++: int GetOperation()\n\n"},
  {(char*)"GetMismatchOccurred", PyvtkMinMax_GetMismatchOccurred, METH_VARARGS,
   (char*)"V.GetMismatchOccurred() -> int\nC++: int GetMismatchOccurred()\n\n"},
  {(char*)"GetFirstPasses", PyvtkMinMax_GetFirstPasses, METH_VARARGS,
   (char*)"V.GetFirstPasses() -> string\nC++: char *GetFirstPasses()\n\n"},
  {(char*)"FlagsForPoints", PyvtkMinMax_FlagsForPoints, METH_VARARGS,
   (char*)"V.FlagsForPoints()\nC++: void FlagsForPoints()\n\n"},
  {(char*)"FlagsForCells", PyvtkMinMax_FlagsForCells, METH_VARARGS,
   (char*)"V.FlagsForCells()\nC++: void FlagsForCells()\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkMinMax_StaticNew()
{
  return vtkMinMax::New();
}

PyObject *PyVTKClass_vtkMinMaxNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkMinMax_StaticNew,
    PyvtkMinMax_Methods,
    "vtkMinMax", modulename,
    NULL, NULL,
    PyvtkMinMax_Doc(),
    PyVTKClass_vtkPolyDataAlgorithmNew(modulename));

  if (cls)
    {
    PyObject *d = PyVTKClass_GetDict(cls);
    PyObject *o;

    PyType_Ready(&PyvtkMinMax_Operations_Type);
    PyvtkMinMax_Operations_Type.tp_new = NULL;

    o = (PyObject *)&PyvtkMinMax_Operations_Type;
    if (o && PyDict_SetItemString(d, (char *)"Operations", o) != 0)
      {
      Py_DECREF(o);
      }

    for (int c = 0; c < 3; c++)
      {
      typedef vtkMinMax::Operations cxx_enum_type;

      static const struct { const char *name; cxx_enum_type value; }
        constants[3] = {
          { "MIN", vtkMinMax::MIN },
          { "MAX", vtkMinMax::MAX },
          { "SUM", vtkMinMax::SUM },
        };

      o = PyvtkMinMax_Operations_FromEnum(constants[c].value);
      if (o)
        {
        PyDict_SetItemString(d, (char *)constants[c].name, o);
        Py_DECREF(o);
        }
      }

    }

  return cls;
}

const char **PyvtkMinMax_Doc()
{
  static const char *docstring[] = {
    "vtkMinMax - Finds the min, max, or sum of all of its input data\n\n",
    "Superclass: vtkPolyDataAlgorithm\n\n",
    "This filter lets the user choose from a set of operations and then\nruns that operation on all of the attribute data of its input(s). For\nexample if MIN is requested, it finds the minimum values in all of\nits input data arrays. If this filter has multiple input data sets\nattached to its first input port, it will run the operation on each\ninput data set in turn, producing a global minimum value over",
    " all the\ninputs. In parallel runs this filter REQUIRES vtkGhostLevel arrays to\nskip redundant information. The output of this filter will always be\na single vtkPolyData that contains exactly one point and one cell (a\nVTK_VERTEX).\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkMinMax(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkMinMaxNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkMinMax", o) != 0)
    {
    Py_DECREF(o);
    }

}

