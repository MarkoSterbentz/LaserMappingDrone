// python wrapper for vtkAttributeDataReductionFilter
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkAttributeDataReductionFilter.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkAttributeDataReductionFilter(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkAttributeDataReductionFilterNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkDataObjectAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkDataObjectAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkDataObjectAlgorithmNew
#endif

static const char **PyvtkAttributeDataReductionFilter_Doc();

#ifndef DECLARED_PyvtkAttributeDataReductionFilter_ReductionTypes_Type
extern VTK_PYTHON_EXPORT PyTypeObject PyvtkAttributeDataReductionFilter_ReductionTypes_Type;
#define DECLARED_PyvtkAttributeDataReductionFilter_ReductionTypes_Type
#endif

PyTypeObject PyvtkAttributeDataReductionFilter_ReductionTypes_Type = {
  PyObject_HEAD_INIT(&PyType_Type)
  0,
  (char*)"ReductionTypes", // tp_name
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

PyObject *PyvtkAttributeDataReductionFilter_ReductionTypes_FromEnum(int val)
{
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkAttributeDataReductionFilter_ReductionTypes_Type);
  self->ob_ival = val;
  return (PyObject *)self;
}

#ifndef DECLARED_PyvtkAttributeDataReductionFilter_AttributeTypes_Type
extern VTK_PYTHON_EXPORT PyTypeObject PyvtkAttributeDataReductionFilter_AttributeTypes_Type;
#define DECLARED_PyvtkAttributeDataReductionFilter_AttributeTypes_Type
#endif

PyTypeObject PyvtkAttributeDataReductionFilter_AttributeTypes_Type = {
  PyObject_HEAD_INIT(&PyType_Type)
  0,
  (char*)"AttributeTypes", // tp_name
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

PyObject *PyvtkAttributeDataReductionFilter_AttributeTypes_FromEnum(int val)
{
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkAttributeDataReductionFilter_AttributeTypes_Type);
  self->ob_ival = val;
  return (PyObject *)self;
}


static PyObject *
PyvtkAttributeDataReductionFilter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAttributeDataReductionFilter *op = static_cast<vtkAttributeDataReductionFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkAttributeDataReductionFilter::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAttributeDataReductionFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAttributeDataReductionFilter *op = static_cast<vtkAttributeDataReductionFilter *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkAttributeDataReductionFilter::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAttributeDataReductionFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAttributeDataReductionFilter *op = static_cast<vtkAttributeDataReductionFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkAttributeDataReductionFilter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkAttributeDataReductionFilter::NewInstance());

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
PyvtkAttributeDataReductionFilter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkAttributeDataReductionFilter *tempr = vtkAttributeDataReductionFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAttributeDataReductionFilter_SetAttributeType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAttributeType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAttributeDataReductionFilter *op = static_cast<vtkAttributeDataReductionFilter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetAttributeType(temp0);
      }
    else
      {
      op->vtkAttributeDataReductionFilter::SetAttributeType(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAttributeDataReductionFilter_GetAttributeType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAttributeType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAttributeDataReductionFilter *op = static_cast<vtkAttributeDataReductionFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetAttributeType() :
      op->vtkAttributeDataReductionFilter::GetAttributeType());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAttributeDataReductionFilter_SetReductionType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetReductionType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAttributeDataReductionFilter *op = static_cast<vtkAttributeDataReductionFilter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetReductionType(temp0);
      }
    else
      {
      op->vtkAttributeDataReductionFilter::SetReductionType(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAttributeDataReductionFilter_GetReductionType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetReductionType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAttributeDataReductionFilter *op = static_cast<vtkAttributeDataReductionFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetReductionType() :
      op->vtkAttributeDataReductionFilter::GetReductionType());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAttributeDataReductionFilter_GetReductionTypeAsString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetReductionTypeAsString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAttributeDataReductionFilter *op = static_cast<vtkAttributeDataReductionFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetReductionTypeAsString() :
      op->vtkAttributeDataReductionFilter::GetReductionTypeAsString());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAttributeDataReductionFilter_SetReductionTypeToAdd(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetReductionTypeToAdd");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAttributeDataReductionFilter *op = static_cast<vtkAttributeDataReductionFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetReductionTypeToAdd();
      }
    else
      {
      op->vtkAttributeDataReductionFilter::SetReductionTypeToAdd();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAttributeDataReductionFilter_SetReductionTypeToMax(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetReductionTypeToMax");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAttributeDataReductionFilter *op = static_cast<vtkAttributeDataReductionFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetReductionTypeToMax();
      }
    else
      {
      op->vtkAttributeDataReductionFilter::SetReductionTypeToMax();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAttributeDataReductionFilter_SetReductionTypeToMin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetReductionTypeToMin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAttributeDataReductionFilter *op = static_cast<vtkAttributeDataReductionFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetReductionTypeToMin();
      }
    else
      {
      op->vtkAttributeDataReductionFilter::SetReductionTypeToMin();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkAttributeDataReductionFilter_Methods[] = {
  {(char*)"GetClassName", PyvtkAttributeDataReductionFilter_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkAttributeDataReductionFilter_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkAttributeDataReductionFilter_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkAttributeDataReductionFilter\nC++: vtkAttributeDataReductionFilter *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkAttributeDataReductionFilter_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkAttributeDataReductionFilter\nC++: vtkAttributeDataReductionFilter *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetAttributeType", PyvtkAttributeDataReductionFilter_SetAttributeType, METH_VARARGS,
   (char*)"V.SetAttributeType(int)\nC++: void SetAttributeType(int a)\n\n"},
  {(char*)"GetAttributeType", PyvtkAttributeDataReductionFilter_GetAttributeType, METH_VARARGS,
   (char*)"V.GetAttributeType() -> int\nC++: int GetAttributeType()\n\n"},
  {(char*)"SetReductionType", PyvtkAttributeDataReductionFilter_SetReductionType, METH_VARARGS,
   (char*)"V.SetReductionType(int)\nC++: void SetReductionType(int a)\n\n"},
  {(char*)"GetReductionType", PyvtkAttributeDataReductionFilter_GetReductionType, METH_VARARGS,
   (char*)"V.GetReductionType() -> int\nC++: int GetReductionType()\n\n"},
  {(char*)"GetReductionTypeAsString", PyvtkAttributeDataReductionFilter_GetReductionTypeAsString, METH_VARARGS,
   (char*)"V.GetReductionTypeAsString() -> string\nC++: const char *GetReductionTypeAsString()\n\n"},
  {(char*)"SetReductionTypeToAdd", PyvtkAttributeDataReductionFilter_SetReductionTypeToAdd, METH_VARARGS,
   (char*)"V.SetReductionTypeToAdd()\nC++: void SetReductionTypeToAdd()\n\n"},
  {(char*)"SetReductionTypeToMax", PyvtkAttributeDataReductionFilter_SetReductionTypeToMax, METH_VARARGS,
   (char*)"V.SetReductionTypeToMax()\nC++: void SetReductionTypeToMax()\n\n"},
  {(char*)"SetReductionTypeToMin", PyvtkAttributeDataReductionFilter_SetReductionTypeToMin, METH_VARARGS,
   (char*)"V.SetReductionTypeToMin()\nC++: void SetReductionTypeToMin()\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkAttributeDataReductionFilter_StaticNew()
{
  return vtkAttributeDataReductionFilter::New();
}

PyObject *PyVTKClass_vtkAttributeDataReductionFilterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkAttributeDataReductionFilter_StaticNew,
    PyvtkAttributeDataReductionFilter_Methods,
    "vtkAttributeDataReductionFilter", modulename,
    NULL, NULL,
    PyvtkAttributeDataReductionFilter_Doc(),
    PyVTKClass_vtkDataObjectAlgorithmNew(modulename));

  if (cls)
    {
    PyObject *d = PyVTKClass_GetDict(cls);
    PyObject *o;

    PyType_Ready(&PyvtkAttributeDataReductionFilter_ReductionTypes_Type);
    PyvtkAttributeDataReductionFilter_ReductionTypes_Type.tp_new = NULL;

    o = (PyObject *)&PyvtkAttributeDataReductionFilter_ReductionTypes_Type;
    if (o && PyDict_SetItemString(d, (char *)"ReductionTypes", o) != 0)
      {
      Py_DECREF(o);
      }

    PyType_Ready(&PyvtkAttributeDataReductionFilter_AttributeTypes_Type);
    PyvtkAttributeDataReductionFilter_AttributeTypes_Type.tp_new = NULL;

    o = (PyObject *)&PyvtkAttributeDataReductionFilter_AttributeTypes_Type;
    if (o && PyDict_SetItemString(d, (char *)"AttributeTypes", o) != 0)
      {
      Py_DECREF(o);
      }

    for (int c = 0; c < 3; c++)
      {
      typedef vtkAttributeDataReductionFilter::ReductionTypes cxx_enum_type;

      static const struct { const char *name; cxx_enum_type value; }
        constants[3] = {
          { "ADD", vtkAttributeDataReductionFilter::ADD },
          { "MAX", vtkAttributeDataReductionFilter::MAX },
          { "MIN", vtkAttributeDataReductionFilter::MIN },
        };

      o = PyvtkAttributeDataReductionFilter_ReductionTypes_FromEnum(constants[c].value);
      if (o)
        {
        PyDict_SetItemString(d, (char *)constants[c].name, o);
        Py_DECREF(o);
        }
      }

    for (int c = 0; c < 4; c++)
      {
      typedef vtkAttributeDataReductionFilter::AttributeTypes cxx_enum_type;

      static const struct { const char *name; cxx_enum_type value; }
        constants[4] = {
          { "POINT_DATA", vtkAttributeDataReductionFilter::POINT_DATA },
          { "CELL_DATA", vtkAttributeDataReductionFilter::CELL_DATA },
          { "FIELD_DATA", vtkAttributeDataReductionFilter::FIELD_DATA },
          { "ROW_DATA", vtkAttributeDataReductionFilter::ROW_DATA },
        };

      o = PyvtkAttributeDataReductionFilter_AttributeTypes_FromEnum(constants[c].value);
      if (o)
        {
        PyDict_SetItemString(d, (char *)constants[c].name, o);
        Py_DECREF(o);
        }
      }

    }

  return cls;
}

const char **PyvtkAttributeDataReductionFilter_Doc()
{
  static const char *docstring[] = {
    "vtkAttributeDataReductionFilter - Reduces cell/point attribute data \n\n",
    "Superclass: vtkDataObjectAlgorithm\n\n",
    "Filter that takes data with same structure on multiple input\nconnections to produce a reduced dataset with cell/point data\nsummed/maxed/minned for all cells/points. Data arrays not available\nin all inputs are discarded. The attribute to reduce can be set to\npoint or cell or field or all. Only selected attributes will be\nreduced according to the type choosen, all other attributes are those\nat the f",
    "irst input.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkAttributeDataReductionFilter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkAttributeDataReductionFilterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkAttributeDataReductionFilter", o) != 0)
    {
    Py_DECREF(o);
    }

}

