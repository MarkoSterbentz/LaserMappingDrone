// python wrapper for vtkDiagonalMatrixSource
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkDiagonalMatrixSource.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkDiagonalMatrixSource(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkDiagonalMatrixSourceNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkArrayDataAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkArrayDataAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkArrayDataAlgorithmNew
#endif

static const char **PyvtkDiagonalMatrixSource_Doc();

#ifndef DECLARED_PyvtkDiagonalMatrixSource_StorageType_Type
extern VTK_PYTHON_EXPORT PyTypeObject PyvtkDiagonalMatrixSource_StorageType_Type;
#define DECLARED_PyvtkDiagonalMatrixSource_StorageType_Type
#endif

PyTypeObject PyvtkDiagonalMatrixSource_StorageType_Type = {
  PyObject_HEAD_INIT(&PyType_Type)
  0,
  (char*)"StorageType", // tp_name
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

PyObject *PyvtkDiagonalMatrixSource_StorageType_FromEnum(int val)
{
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkDiagonalMatrixSource_StorageType_Type);
  self->ob_ival = val;
  return (PyObject *)self;
}


static PyObject *
PyvtkDiagonalMatrixSource_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDiagonalMatrixSource *op = static_cast<vtkDiagonalMatrixSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkDiagonalMatrixSource::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDiagonalMatrixSource_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDiagonalMatrixSource *op = static_cast<vtkDiagonalMatrixSource *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkDiagonalMatrixSource::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDiagonalMatrixSource_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDiagonalMatrixSource *op = static_cast<vtkDiagonalMatrixSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkDiagonalMatrixSource *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkDiagonalMatrixSource::NewInstance());

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
PyvtkDiagonalMatrixSource_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkDiagonalMatrixSource *tempr = vtkDiagonalMatrixSource::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDiagonalMatrixSource_GetArrayType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetArrayType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDiagonalMatrixSource *op = static_cast<vtkDiagonalMatrixSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetArrayType() :
      op->vtkDiagonalMatrixSource::GetArrayType());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDiagonalMatrixSource_SetArrayType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetArrayType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDiagonalMatrixSource *op = static_cast<vtkDiagonalMatrixSource *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetArrayType(temp0);
      }
    else
      {
      op->vtkDiagonalMatrixSource::SetArrayType(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDiagonalMatrixSource_GetExtents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetExtents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDiagonalMatrixSource *op = static_cast<vtkDiagonalMatrixSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetExtents() :
      op->vtkDiagonalMatrixSource::GetExtents());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDiagonalMatrixSource_SetExtents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExtents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDiagonalMatrixSource *op = static_cast<vtkDiagonalMatrixSource *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetExtents(temp0);
      }
    else
      {
      op->vtkDiagonalMatrixSource::SetExtents(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDiagonalMatrixSource_GetDiagonal(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDiagonal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDiagonalMatrixSource *op = static_cast<vtkDiagonalMatrixSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetDiagonal() :
      op->vtkDiagonalMatrixSource::GetDiagonal());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDiagonalMatrixSource_SetDiagonal(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDiagonal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDiagonalMatrixSource *op = static_cast<vtkDiagonalMatrixSource *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetDiagonal(temp0);
      }
    else
      {
      op->vtkDiagonalMatrixSource::SetDiagonal(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDiagonalMatrixSource_GetSuperDiagonal(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSuperDiagonal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDiagonalMatrixSource *op = static_cast<vtkDiagonalMatrixSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetSuperDiagonal() :
      op->vtkDiagonalMatrixSource::GetSuperDiagonal());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDiagonalMatrixSource_SetSuperDiagonal(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSuperDiagonal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDiagonalMatrixSource *op = static_cast<vtkDiagonalMatrixSource *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetSuperDiagonal(temp0);
      }
    else
      {
      op->vtkDiagonalMatrixSource::SetSuperDiagonal(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDiagonalMatrixSource_GetSubDiagonal(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSubDiagonal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDiagonalMatrixSource *op = static_cast<vtkDiagonalMatrixSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetSubDiagonal() :
      op->vtkDiagonalMatrixSource::GetSubDiagonal());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDiagonalMatrixSource_SetSubDiagonal(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSubDiagonal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDiagonalMatrixSource *op = static_cast<vtkDiagonalMatrixSource *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetSubDiagonal(temp0);
      }
    else
      {
      op->vtkDiagonalMatrixSource::SetSubDiagonal(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDiagonalMatrixSource_GetRowLabel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRowLabel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDiagonalMatrixSource *op = static_cast<vtkDiagonalMatrixSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetRowLabel() :
      op->vtkDiagonalMatrixSource::GetRowLabel());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDiagonalMatrixSource_SetRowLabel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRowLabel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDiagonalMatrixSource *op = static_cast<vtkDiagonalMatrixSource *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetRowLabel(temp0);
      }
    else
      {
      op->vtkDiagonalMatrixSource::SetRowLabel(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDiagonalMatrixSource_GetColumnLabel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColumnLabel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDiagonalMatrixSource *op = static_cast<vtkDiagonalMatrixSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetColumnLabel() :
      op->vtkDiagonalMatrixSource::GetColumnLabel());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDiagonalMatrixSource_SetColumnLabel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColumnLabel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDiagonalMatrixSource *op = static_cast<vtkDiagonalMatrixSource *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetColumnLabel(temp0);
      }
    else
      {
      op->vtkDiagonalMatrixSource::SetColumnLabel(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkDiagonalMatrixSource_Methods[] = {
  {(char*)"GetClassName", PyvtkDiagonalMatrixSource_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkDiagonalMatrixSource_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkDiagonalMatrixSource_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkDiagonalMatrixSource\nC++: vtkDiagonalMatrixSource *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkDiagonalMatrixSource_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkDiagonalMatrixSource\nC++: vtkDiagonalMatrixSource *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetArrayType", PyvtkDiagonalMatrixSource_GetArrayType, METH_VARARGS,
   (char*)"V.GetArrayType() -> int\nC++: int GetArrayType()\n\n"},
  {(char*)"SetArrayType", PyvtkDiagonalMatrixSource_SetArrayType, METH_VARARGS,
   (char*)"V.SetArrayType(int)\nC++: void SetArrayType(int a)\n\n"},
  {(char*)"GetExtents", PyvtkDiagonalMatrixSource_GetExtents, METH_VARARGS,
   (char*)"V.GetExtents() -> int\nC++: vtkIdType GetExtents()\n\nStores the extents of the output matrix (which is square)\n"},
  {(char*)"SetExtents", PyvtkDiagonalMatrixSource_SetExtents, METH_VARARGS,
   (char*)"V.SetExtents(int)\nC++: void SetExtents(vtkIdType a)\n\nStores the extents of the output matrix (which is square)\n"},
  {(char*)"GetDiagonal", PyvtkDiagonalMatrixSource_GetDiagonal, METH_VARARGS,
   (char*)"V.GetDiagonal() -> float\nC++: double GetDiagonal()\n\nStores the value that will be assigned to diagonal elements\n(default: 1)\n"},
  {(char*)"SetDiagonal", PyvtkDiagonalMatrixSource_SetDiagonal, METH_VARARGS,
   (char*)"V.SetDiagonal(float)\nC++: void SetDiagonal(double a)\n\nStores the value that will be assigned to diagonal elements\n(default: 1)\n"},
  {(char*)"GetSuperDiagonal", PyvtkDiagonalMatrixSource_GetSuperDiagonal, METH_VARARGS,
   (char*)"V.GetSuperDiagonal() -> float\nC++: double GetSuperDiagonal()\n\nStores the value that will be assigned to superdiagonal elements\n(default: 0)\n"},
  {(char*)"SetSuperDiagonal", PyvtkDiagonalMatrixSource_SetSuperDiagonal, METH_VARARGS,
   (char*)"V.SetSuperDiagonal(float)\nC++: void SetSuperDiagonal(double a)\n\nStores the value that will be assigned to superdiagonal elements\n(default: 0)\n"},
  {(char*)"GetSubDiagonal", PyvtkDiagonalMatrixSource_GetSubDiagonal, METH_VARARGS,
   (char*)"V.GetSubDiagonal() -> float\nC++: double GetSubDiagonal()\n\nStores the value that will be assigned to subdiagonal elements\n(default: 0)\n"},
  {(char*)"SetSubDiagonal", PyvtkDiagonalMatrixSource_SetSubDiagonal, METH_VARARGS,
   (char*)"V.SetSubDiagonal(float)\nC++: void SetSubDiagonal(double a)\n\nStores the value that will be assigned to subdiagonal elements\n(default: 0)\n"},
  {(char*)"GetRowLabel", PyvtkDiagonalMatrixSource_GetRowLabel, METH_VARARGS,
   (char*)"V.GetRowLabel() -> string\nC++: char *GetRowLabel()\n\nControls the output matrix row dimension label. Default: \"rows\"\n"},
  {(char*)"SetRowLabel", PyvtkDiagonalMatrixSource_SetRowLabel, METH_VARARGS,
   (char*)"V.SetRowLabel(string)\nC++: void SetRowLabel(char *)\n\nControls the output matrix row dimension label. Default: \"rows\"\n"},
  {(char*)"GetColumnLabel", PyvtkDiagonalMatrixSource_GetColumnLabel, METH_VARARGS,
   (char*)"V.GetColumnLabel() -> string\nC++: char *GetColumnLabel()\n\nControls the output matrix column dimension label. Default:\n\"columns\"\n"},
  {(char*)"SetColumnLabel", PyvtkDiagonalMatrixSource_SetColumnLabel, METH_VARARGS,
   (char*)"V.SetColumnLabel(string)\nC++: void SetColumnLabel(char *)\n\nControls the output matrix column dimension label. Default:\n\"columns\"\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkDiagonalMatrixSource_StaticNew()
{
  return vtkDiagonalMatrixSource::New();
}

PyObject *PyVTKClass_vtkDiagonalMatrixSourceNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkDiagonalMatrixSource_StaticNew,
    PyvtkDiagonalMatrixSource_Methods,
    "vtkDiagonalMatrixSource", modulename,
    NULL, NULL,
    PyvtkDiagonalMatrixSource_Doc(),
    PyVTKClass_vtkArrayDataAlgorithmNew(modulename));

  if (cls)
    {
    PyObject *d = PyVTKClass_GetDict(cls);
    PyObject *o;

    PyType_Ready(&PyvtkDiagonalMatrixSource_StorageType_Type);
    PyvtkDiagonalMatrixSource_StorageType_Type.tp_new = NULL;

    o = (PyObject *)&PyvtkDiagonalMatrixSource_StorageType_Type;
    if (o && PyDict_SetItemString(d, (char *)"StorageType", o) != 0)
      {
      Py_DECREF(o);
      }

    for (int c = 0; c < 2; c++)
      {
      typedef vtkDiagonalMatrixSource::StorageType cxx_enum_type;

      static const struct { const char *name; cxx_enum_type value; }
        constants[2] = {
          { "DENSE", vtkDiagonalMatrixSource::DENSE },
          { "SPARSE", vtkDiagonalMatrixSource::SPARSE },
        };

      o = PyvtkDiagonalMatrixSource_StorageType_FromEnum(constants[c].value);
      if (o)
        {
        PyDict_SetItemString(d, (char *)constants[c].name, o);
        Py_DECREF(o);
        }
      }

    }

  return cls;
}

const char **PyvtkDiagonalMatrixSource_Doc()
{
  static const char *docstring[] = {
    "vtkDiagonalMatrixSource - generates a sparse or dense square matrix\n\n",
    "Superclass: vtkArrayDataAlgorithm\n\n",
    "\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkDiagonalMatrixSource(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkDiagonalMatrixSourceNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkDiagonalMatrixSource", o) != 0)
    {
    Py_DECREF(o);
    }

}

