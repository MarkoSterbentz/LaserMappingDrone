// python wrapper for vtkBooleanOperationPolyDataFilter
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkBooleanOperationPolyDataFilter.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkBooleanOperationPolyDataFilter(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkBooleanOperationPolyDataFilterNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkPolyDataAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
#endif

static const char **PyvtkBooleanOperationPolyDataFilter_Doc();

#ifndef DECLARED_PyvtkBooleanOperationPolyDataFilter_OperationType_Type
extern VTK_PYTHON_EXPORT PyTypeObject PyvtkBooleanOperationPolyDataFilter_OperationType_Type;
#define DECLARED_PyvtkBooleanOperationPolyDataFilter_OperationType_Type
#endif

PyTypeObject PyvtkBooleanOperationPolyDataFilter_OperationType_Type = {
  PyObject_HEAD_INIT(&PyType_Type)
  0,
  (char*)"OperationType", // tp_name
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

PyObject *PyvtkBooleanOperationPolyDataFilter_OperationType_FromEnum(int val)
{
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkBooleanOperationPolyDataFilter_OperationType_Type);
  self->ob_ival = val;
  return (PyObject *)self;
}


static PyObject *
PyvtkBooleanOperationPolyDataFilter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBooleanOperationPolyDataFilter *op = static_cast<vtkBooleanOperationPolyDataFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkBooleanOperationPolyDataFilter::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBooleanOperationPolyDataFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBooleanOperationPolyDataFilter *op = static_cast<vtkBooleanOperationPolyDataFilter *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkBooleanOperationPolyDataFilter::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBooleanOperationPolyDataFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBooleanOperationPolyDataFilter *op = static_cast<vtkBooleanOperationPolyDataFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkBooleanOperationPolyDataFilter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkBooleanOperationPolyDataFilter::NewInstance());

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
PyvtkBooleanOperationPolyDataFilter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkBooleanOperationPolyDataFilter *tempr = vtkBooleanOperationPolyDataFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBooleanOperationPolyDataFilter_SetOperation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOperation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBooleanOperationPolyDataFilter *op = static_cast<vtkBooleanOperationPolyDataFilter *>(vp);

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
      op->vtkBooleanOperationPolyDataFilter::SetOperation(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkBooleanOperationPolyDataFilter_GetOperationMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOperationMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBooleanOperationPolyDataFilter *op = static_cast<vtkBooleanOperationPolyDataFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetOperationMinValue() :
      op->vtkBooleanOperationPolyDataFilter::GetOperationMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBooleanOperationPolyDataFilter_GetOperationMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOperationMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBooleanOperationPolyDataFilter *op = static_cast<vtkBooleanOperationPolyDataFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetOperationMaxValue() :
      op->vtkBooleanOperationPolyDataFilter::GetOperationMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBooleanOperationPolyDataFilter_GetOperation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOperation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBooleanOperationPolyDataFilter *op = static_cast<vtkBooleanOperationPolyDataFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetOperation() :
      op->vtkBooleanOperationPolyDataFilter::GetOperation());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBooleanOperationPolyDataFilter_SetOperationToUnion(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOperationToUnion");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBooleanOperationPolyDataFilter *op = static_cast<vtkBooleanOperationPolyDataFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetOperationToUnion();
      }
    else
      {
      op->vtkBooleanOperationPolyDataFilter::SetOperationToUnion();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkBooleanOperationPolyDataFilter_SetOperationToIntersection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOperationToIntersection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBooleanOperationPolyDataFilter *op = static_cast<vtkBooleanOperationPolyDataFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetOperationToIntersection();
      }
    else
      {
      op->vtkBooleanOperationPolyDataFilter::SetOperationToIntersection();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkBooleanOperationPolyDataFilter_SetOperationToDifference(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOperationToDifference");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBooleanOperationPolyDataFilter *op = static_cast<vtkBooleanOperationPolyDataFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetOperationToDifference();
      }
    else
      {
      op->vtkBooleanOperationPolyDataFilter::SetOperationToDifference();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkBooleanOperationPolyDataFilter_SetReorientDifferenceCells(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetReorientDifferenceCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBooleanOperationPolyDataFilter *op = static_cast<vtkBooleanOperationPolyDataFilter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetReorientDifferenceCells(temp0);
      }
    else
      {
      op->vtkBooleanOperationPolyDataFilter::SetReorientDifferenceCells(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkBooleanOperationPolyDataFilter_GetReorientDifferenceCells(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetReorientDifferenceCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBooleanOperationPolyDataFilter *op = static_cast<vtkBooleanOperationPolyDataFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetReorientDifferenceCells() :
      op->vtkBooleanOperationPolyDataFilter::GetReorientDifferenceCells());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBooleanOperationPolyDataFilter_ReorientDifferenceCellsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReorientDifferenceCellsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBooleanOperationPolyDataFilter *op = static_cast<vtkBooleanOperationPolyDataFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ReorientDifferenceCellsOn();
      }
    else
      {
      op->vtkBooleanOperationPolyDataFilter::ReorientDifferenceCellsOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkBooleanOperationPolyDataFilter_ReorientDifferenceCellsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReorientDifferenceCellsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBooleanOperationPolyDataFilter *op = static_cast<vtkBooleanOperationPolyDataFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ReorientDifferenceCellsOff();
      }
    else
      {
      op->vtkBooleanOperationPolyDataFilter::ReorientDifferenceCellsOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkBooleanOperationPolyDataFilter_SetTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTolerance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBooleanOperationPolyDataFilter *op = static_cast<vtkBooleanOperationPolyDataFilter *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetTolerance(temp0);
      }
    else
      {
      op->vtkBooleanOperationPolyDataFilter::SetTolerance(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkBooleanOperationPolyDataFilter_GetTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTolerance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBooleanOperationPolyDataFilter *op = static_cast<vtkBooleanOperationPolyDataFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetTolerance() :
      op->vtkBooleanOperationPolyDataFilter::GetTolerance());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkBooleanOperationPolyDataFilter_Methods[] = {
  {(char*)"GetClassName", PyvtkBooleanOperationPolyDataFilter_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkBooleanOperationPolyDataFilter_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkBooleanOperationPolyDataFilter_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkBooleanOperationPolyDataFilter\nC++: vtkBooleanOperationPolyDataFilter *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkBooleanOperationPolyDataFilter_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkBooleanOperationPolyDataFilter\nC++: vtkBooleanOperationPolyDataFilter *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetOperation", PyvtkBooleanOperationPolyDataFilter_SetOperation, METH_VARARGS,
   (char*)"V.SetOperation(int)\nC++: void SetOperation(int)\n\nSet the boolean operation to perform. Defaults to union.\n"},
  {(char*)"GetOperationMinValue", PyvtkBooleanOperationPolyDataFilter_GetOperationMinValue, METH_VARARGS,
   (char*)"V.GetOperationMinValue() -> int\nC++: int GetOperationMinValue()\n\nSet the boolean operation to perform. Defaults to union.\n"},
  {(char*)"GetOperationMaxValue", PyvtkBooleanOperationPolyDataFilter_GetOperationMaxValue, METH_VARARGS,
   (char*)"V.GetOperationMaxValue() -> int\nC++: int GetOperationMaxValue()\n\nSet the boolean operation to perform. Defaults to union.\n"},
  {(char*)"GetOperation", PyvtkBooleanOperationPolyDataFilter_GetOperation, METH_VARARGS,
   (char*)"V.GetOperation() -> int\nC++: int GetOperation()\n\nSet the boolean operation to perform. Defaults to union.\n"},
  {(char*)"SetOperationToUnion", PyvtkBooleanOperationPolyDataFilter_SetOperationToUnion, METH_VARARGS,
   (char*)"V.SetOperationToUnion()\nC++: void SetOperationToUnion()\n\nSet the boolean operation to perform. Defaults to union.\n"},
  {(char*)"SetOperationToIntersection", PyvtkBooleanOperationPolyDataFilter_SetOperationToIntersection, METH_VARARGS,
   (char*)"V.SetOperationToIntersection()\nC++: void SetOperationToIntersection()\n\nSet the boolean operation to perform. Defaults to union.\n"},
  {(char*)"SetOperationToDifference", PyvtkBooleanOperationPolyDataFilter_SetOperationToDifference, METH_VARARGS,
   (char*)"V.SetOperationToDifference()\nC++: void SetOperationToDifference()\n\nSet the boolean operation to perform. Defaults to union.\n"},
  {(char*)"SetReorientDifferenceCells", PyvtkBooleanOperationPolyDataFilter_SetReorientDifferenceCells, METH_VARARGS,
   (char*)"V.SetReorientDifferenceCells(int)\nC++: void SetReorientDifferenceCells(int a)\n\nTurn on/off cell reorientation of the intersection portion of the\nsurface when the operation is set to DIFFERENCE. Defaults to on.\n"},
  {(char*)"GetReorientDifferenceCells", PyvtkBooleanOperationPolyDataFilter_GetReorientDifferenceCells, METH_VARARGS,
   (char*)"V.GetReorientDifferenceCells() -> int\nC++: int GetReorientDifferenceCells()\n\nTurn on/off cell reorientation of the intersection portion of the\nsurface when the operation is set to DIFFERENCE. Defaults to on.\n"},
  {(char*)"ReorientDifferenceCellsOn", PyvtkBooleanOperationPolyDataFilter_ReorientDifferenceCellsOn, METH_VARARGS,
   (char*)"V.ReorientDifferenceCellsOn()\nC++: void ReorientDifferenceCellsOn()\n\nTurn on/off cell reorientation of the intersection portion of the\nsurface when the operation is set to DIFFERENCE. Defaults to on.\n"},
  {(char*)"ReorientDifferenceCellsOff", PyvtkBooleanOperationPolyDataFilter_ReorientDifferenceCellsOff, METH_VARARGS,
   (char*)"V.ReorientDifferenceCellsOff()\nC++: void ReorientDifferenceCellsOff()\n\nTurn on/off cell reorientation of the intersection portion of the\nsurface when the operation is set to DIFFERENCE. Defaults to on.\n"},
  {(char*)"SetTolerance", PyvtkBooleanOperationPolyDataFilter_SetTolerance, METH_VARARGS,
   (char*)"V.SetTolerance(float)\nC++: void SetTolerance(double a)\n\nSet/get the tolerance used to determine when a point's absolute\ndistance is considered to be zero. Defaults to 1e-6.\n"},
  {(char*)"GetTolerance", PyvtkBooleanOperationPolyDataFilter_GetTolerance, METH_VARARGS,
   (char*)"V.GetTolerance() -> float\nC++: double GetTolerance()\n\nSet/get the tolerance used to determine when a point's absolute\ndistance is considered to be zero. Defaults to 1e-6.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkBooleanOperationPolyDataFilter_StaticNew()
{
  return vtkBooleanOperationPolyDataFilter::New();
}

PyObject *PyVTKClass_vtkBooleanOperationPolyDataFilterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkBooleanOperationPolyDataFilter_StaticNew,
    PyvtkBooleanOperationPolyDataFilter_Methods,
    "vtkBooleanOperationPolyDataFilter", modulename,
    NULL, NULL,
    PyvtkBooleanOperationPolyDataFilter_Doc(),
    PyVTKClass_vtkPolyDataAlgorithmNew(modulename));

  if (cls)
    {
    PyObject *d = PyVTKClass_GetDict(cls);
    PyObject *o;

    PyType_Ready(&PyvtkBooleanOperationPolyDataFilter_OperationType_Type);
    PyvtkBooleanOperationPolyDataFilter_OperationType_Type.tp_new = NULL;

    o = (PyObject *)&PyvtkBooleanOperationPolyDataFilter_OperationType_Type;
    if (o && PyDict_SetItemString(d, (char *)"OperationType", o) != 0)
      {
      Py_DECREF(o);
      }

    for (int c = 0; c < 3; c++)
      {
      typedef vtkBooleanOperationPolyDataFilter::OperationType cxx_enum_type;

      static const struct { const char *name; cxx_enum_type value; }
        constants[3] = {
          { "VTK_UNION", vtkBooleanOperationPolyDataFilter::VTK_UNION },
          { "VTK_INTERSECTION", vtkBooleanOperationPolyDataFilter::VTK_INTERSECTION },
          { "VTK_DIFFERENCE", vtkBooleanOperationPolyDataFilter::VTK_DIFFERENCE },
        };

      o = PyvtkBooleanOperationPolyDataFilter_OperationType_FromEnum(constants[c].value);
      if (o)
        {
        PyDict_SetItemString(d, (char *)constants[c].name, o);
        Py_DECREF(o);
        }
      }

    }

  return cls;
}

const char **PyvtkBooleanOperationPolyDataFilter_Doc()
{
  static const char *docstring[] = {
    "vtkBooleanOperationPolyDataFilter\n\n",
    "Superclass: vtkPolyDataAlgorithm\n\n",
    "Computes the boundary of the union, intersection, or difference\nvolume computed from the volumes defined by two input surfaces. The\ntwo surfaces do not need to be manifold, but if they are not,\nunexpected results may be obtained. The resulting surface is\navailable in the first output of the filter. The second output\ncontains a set of polylines that represent the intersection between\nthe two input ",
    "surfaces.\n\nThis code was contributed in the VTK Journal paper: \"Boolean Operations on Surfaces in VTK Without External\nLibraries\" by Cory Quammen, Chris Weigle C., Russ Taylor\nhttp://hdl.handle.net/10380/3262\nhttp://www.midasjournal.org/browse/publication/797\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkBooleanOperationPolyDataFilter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkBooleanOperationPolyDataFilterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkBooleanOperationPolyDataFilter", o) != 0)
    {
    Py_DECREF(o);
    }

}

