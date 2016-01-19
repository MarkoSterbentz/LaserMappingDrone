// python wrapper for vtkRearrangeFields
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkRearrangeFields.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkRearrangeFields(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkRearrangeFieldsNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkDataSetAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkDataSetAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkDataSetAlgorithmNew
#endif

static const char **PyvtkRearrangeFields_Doc();

#ifndef DECLARED_PyvtkRearrangeFields_OperationType_Type
extern VTK_PYTHON_EXPORT PyTypeObject PyvtkRearrangeFields_OperationType_Type;
#define DECLARED_PyvtkRearrangeFields_OperationType_Type
#endif

PyTypeObject PyvtkRearrangeFields_OperationType_Type = {
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

PyObject *PyvtkRearrangeFields_OperationType_FromEnum(int val)
{
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkRearrangeFields_OperationType_Type);
  self->ob_ival = val;
  return (PyObject *)self;
}

#ifndef DECLARED_PyvtkRearrangeFields_FieldLocation_Type
extern VTK_PYTHON_EXPORT PyTypeObject PyvtkRearrangeFields_FieldLocation_Type;
#define DECLARED_PyvtkRearrangeFields_FieldLocation_Type
#endif

PyTypeObject PyvtkRearrangeFields_FieldLocation_Type = {
  PyObject_HEAD_INIT(&PyType_Type)
  0,
  (char*)"FieldLocation", // tp_name
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

PyObject *PyvtkRearrangeFields_FieldLocation_FromEnum(int val)
{
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkRearrangeFields_FieldLocation_Type);
  self->ob_ival = val;
  return (PyObject *)self;
}

#ifndef DECLARED_PyvtkRearrangeFields_FieldType_Type
extern VTK_PYTHON_EXPORT PyTypeObject PyvtkRearrangeFields_FieldType_Type;
#define DECLARED_PyvtkRearrangeFields_FieldType_Type
#endif

PyTypeObject PyvtkRearrangeFields_FieldType_Type = {
  PyObject_HEAD_INIT(&PyType_Type)
  0,
  (char*)"FieldType", // tp_name
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

PyObject *PyvtkRearrangeFields_FieldType_FromEnum(int val)
{
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkRearrangeFields_FieldType_Type);
  self->ob_ival = val;
  return (PyObject *)self;
}


static PyObject *
PyvtkRearrangeFields_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRearrangeFields *op = static_cast<vtkRearrangeFields *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkRearrangeFields::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRearrangeFields_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRearrangeFields *op = static_cast<vtkRearrangeFields *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkRearrangeFields::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRearrangeFields_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRearrangeFields *op = static_cast<vtkRearrangeFields *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkRearrangeFields *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkRearrangeFields::NewInstance());

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
PyvtkRearrangeFields_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkRearrangeFields *tempr = vtkRearrangeFields::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRearrangeFields_AddOperation_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddOperation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRearrangeFields *op = static_cast<vtkRearrangeFields *>(vp);

  int temp0;
  int temp1;
  int temp2;
  int temp3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
    {
    int tempr = (ap.IsBound() ?
      op->AddOperation(temp0, temp1, temp2, temp3) :
      op->vtkRearrangeFields::AddOperation(temp0, temp1, temp2, temp3));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkRearrangeFields_AddOperation_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddOperation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRearrangeFields *op = static_cast<vtkRearrangeFields *>(vp);

  int temp0;
  char *temp1 = NULL;
  int temp2;
  int temp3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
    {
    int tempr = (ap.IsBound() ?
      op->AddOperation(temp0, temp1, temp2, temp3) :
      op->vtkRearrangeFields::AddOperation(temp0, temp1, temp2, temp3));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkRearrangeFields_AddOperation_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddOperation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRearrangeFields *op = static_cast<vtkRearrangeFields *>(vp);

  char *temp0 = NULL;
  char *temp1 = NULL;
  char *temp2 = NULL;
  char *temp3 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
    {
    int tempr = (ap.IsBound() ?
      op->AddOperation(temp0, temp1, temp2, temp3) :
      op->vtkRearrangeFields::AddOperation(temp0, temp1, temp2, temp3));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkRearrangeFields_AddOperation_Methods[] = {
  {NULL, PyvtkRearrangeFields_AddOperation_s1, METH_VARARGS,
   (char*)"@iiii"},
  {NULL, PyvtkRearrangeFields_AddOperation_s2, METH_VARARGS,
   (char*)"@izii"},
  {NULL, PyvtkRearrangeFields_AddOperation_s3, METH_VARARGS,
   (char*)"@zzzz"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkRearrangeFields_AddOperation(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkRearrangeFields_AddOperation_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 4:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "AddOperation");
  return NULL;
}



static PyObject *
PyvtkRearrangeFields_RemoveOperation_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveOperation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRearrangeFields *op = static_cast<vtkRearrangeFields *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->RemoveOperation(temp0) :
      op->vtkRearrangeFields::RemoveOperation(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkRearrangeFields_RemoveOperation_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveOperation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRearrangeFields *op = static_cast<vtkRearrangeFields *>(vp);

  int temp0;
  int temp1;
  int temp2;
  int temp3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
    {
    int tempr = (ap.IsBound() ?
      op->RemoveOperation(temp0, temp1, temp2, temp3) :
      op->vtkRearrangeFields::RemoveOperation(temp0, temp1, temp2, temp3));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkRearrangeFields_RemoveOperation_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveOperation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRearrangeFields *op = static_cast<vtkRearrangeFields *>(vp);

  int temp0;
  char *temp1 = NULL;
  int temp2;
  int temp3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
    {
    int tempr = (ap.IsBound() ?
      op->RemoveOperation(temp0, temp1, temp2, temp3) :
      op->vtkRearrangeFields::RemoveOperation(temp0, temp1, temp2, temp3));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkRearrangeFields_RemoveOperation_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveOperation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRearrangeFields *op = static_cast<vtkRearrangeFields *>(vp);

  char *temp0 = NULL;
  char *temp1 = NULL;
  char *temp2 = NULL;
  char *temp3 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
    {
    int tempr = (ap.IsBound() ?
      op->RemoveOperation(temp0, temp1, temp2, temp3) :
      op->vtkRearrangeFields::RemoveOperation(temp0, temp1, temp2, temp3));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkRearrangeFields_RemoveOperation_Methods[] = {
  {NULL, PyvtkRearrangeFields_RemoveOperation_s2, METH_VARARGS,
   (char*)"@iiii"},
  {NULL, PyvtkRearrangeFields_RemoveOperation_s3, METH_VARARGS,
   (char*)"@izii"},
  {NULL, PyvtkRearrangeFields_RemoveOperation_s4, METH_VARARGS,
   (char*)"@zzzz"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkRearrangeFields_RemoveOperation(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkRearrangeFields_RemoveOperation_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkRearrangeFields_RemoveOperation_s1(self, args);
    case 4:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "RemoveOperation");
  return NULL;
}



static PyObject *
PyvtkRearrangeFields_RemoveAllOperations(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveAllOperations");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRearrangeFields *op = static_cast<vtkRearrangeFields *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->RemoveAllOperations();
      }
    else
      {
      op->vtkRearrangeFields::RemoveAllOperations();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkRearrangeFields_Methods[] = {
  {(char*)"GetClassName", PyvtkRearrangeFields_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkRearrangeFields_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkRearrangeFields_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkRearrangeFields\nC++: vtkRearrangeFields *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkRearrangeFields_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkRearrangeFields\nC++: vtkRearrangeFields *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"AddOperation", PyvtkRearrangeFields_AddOperation, METH_VARARGS,
   (char*)"V.AddOperation(int, int, int, int) -> int\nC++: int AddOperation(int operationType, int attributeType,\n    int fromFieldLoc, int toFieldLoc)\nV.AddOperation(int, string, int, int) -> int\nC++: int AddOperation(int operationType, const char *name,\n    int fromFieldLoc, int toFieldLoc)\nV.AddOperation(string, string, string, string) -> int\nC++: int AddOperation(const char *operationType,\n    const char *attributeType, const char *fromFieldLoc,\n    const char *toFieldLoc)\n\nAdd an operation which copies an attribute's field (data array)\nfrom one field data to another. Returns an operation id which can\nlater be used to remove the operation.\n"},
  {(char*)"RemoveOperation", PyvtkRearrangeFields_RemoveOperation, METH_VARARGS,
   (char*)"V.RemoveOperation(int) -> int\nC++: int RemoveOperation(int operationId)\nV.RemoveOperation(int, int, int, int) -> int\nC++: int RemoveOperation(int operationType, int attributeType,\n    int fromFieldLoc, int toFieldLoc)\nV.RemoveOperation(int, string, int, int) -> int\nC++: int RemoveOperation(int operationType, const char *name,\n    int fromFieldLoc, int toFieldLoc)\nV.RemoveOperation(string, string, string, string) -> int\nC++: int RemoveOperation(const char *operationType,\n    const char *attributeType, const char *fromFieldLoc,\n    const char *toFieldLoc)\n\nRemove an operation with the given id.\n"},
  {(char*)"RemoveAllOperations", PyvtkRearrangeFields_RemoveAllOperations, METH_VARARGS,
   (char*)"V.RemoveAllOperations()\nC++: void RemoveAllOperations()\n\nRemove all operations.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkRearrangeFields_StaticNew()
{
  return vtkRearrangeFields::New();
}

PyObject *PyVTKClass_vtkRearrangeFieldsNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkRearrangeFields_StaticNew,
    PyvtkRearrangeFields_Methods,
    "vtkRearrangeFields", modulename,
    NULL, NULL,
    PyvtkRearrangeFields_Doc(),
    PyVTKClass_vtkDataSetAlgorithmNew(modulename));

  if (cls)
    {
    PyObject *d = PyVTKClass_GetDict(cls);
    PyObject *o;

    PyType_Ready(&PyvtkRearrangeFields_OperationType_Type);
    PyvtkRearrangeFields_OperationType_Type.tp_new = NULL;

    o = (PyObject *)&PyvtkRearrangeFields_OperationType_Type;
    if (o && PyDict_SetItemString(d, (char *)"OperationType", o) != 0)
      {
      Py_DECREF(o);
      }

    PyType_Ready(&PyvtkRearrangeFields_FieldLocation_Type);
    PyvtkRearrangeFields_FieldLocation_Type.tp_new = NULL;

    o = (PyObject *)&PyvtkRearrangeFields_FieldLocation_Type;
    if (o && PyDict_SetItemString(d, (char *)"FieldLocation", o) != 0)
      {
      Py_DECREF(o);
      }

    PyType_Ready(&PyvtkRearrangeFields_FieldType_Type);
    PyvtkRearrangeFields_FieldType_Type.tp_new = NULL;

    o = (PyObject *)&PyvtkRearrangeFields_FieldType_Type;
    if (o && PyDict_SetItemString(d, (char *)"FieldType", o) != 0)
      {
      Py_DECREF(o);
      }

    for (int c = 0; c < 2; c++)
      {
      typedef vtkRearrangeFields::OperationType cxx_enum_type;

      static const struct { const char *name; cxx_enum_type value; }
        constants[2] = {
          { "COPY", vtkRearrangeFields::COPY },
          { "MOVE", vtkRearrangeFields::MOVE },
        };

      o = PyvtkRearrangeFields_OperationType_FromEnum(constants[c].value);
      if (o)
        {
        PyDict_SetItemString(d, (char *)constants[c].name, o);
        Py_DECREF(o);
        }
      }

    for (int c = 0; c < 3; c++)
      {
      typedef vtkRearrangeFields::FieldLocation cxx_enum_type;

      static const struct { const char *name; cxx_enum_type value; }
        constants[3] = {
          { "DATA_OBJECT", vtkRearrangeFields::DATA_OBJECT },
          { "POINT_DATA", vtkRearrangeFields::POINT_DATA },
          { "CELL_DATA", vtkRearrangeFields::CELL_DATA },
        };

      o = PyvtkRearrangeFields_FieldLocation_FromEnum(constants[c].value);
      if (o)
        {
        PyDict_SetItemString(d, (char *)constants[c].name, o);
        Py_DECREF(o);
        }
      }

    for (int c = 0; c < 2; c++)
      {
      typedef vtkRearrangeFields::FieldType cxx_enum_type;

      static const struct { const char *name; cxx_enum_type value; }
        constants[2] = {
          { "NAME", vtkRearrangeFields::NAME },
          { "ATTRIBUTE", vtkRearrangeFields::ATTRIBUTE },
        };

      o = PyvtkRearrangeFields_FieldType_FromEnum(constants[c].value);
      if (o)
        {
        PyDict_SetItemString(d, (char *)constants[c].name, o);
        Py_DECREF(o);
        }
      }

    }

  return cls;
}

const char **PyvtkRearrangeFields_Doc()
{
  static const char *docstring[] = {
    "vtkRearrangeFields - Move/copy fields between field data, point data\nand cell data\n\n",
    "Superclass: vtkDataSetAlgorithm\n\n",
    "vtkRearrangeFields is used to copy/move fields (vtkDataArrays)\nbetween data object's field data, point data and cell data. To\nspecify which fields are copied/moved, the user adds operations.\nThere are two types of operations: 1. the type which copies/moves an\nattribute's data (i.e. the field will be copied but will not be an\nattribute in the target), 2. the type which copies/moves fields by\nname. ",
    "For example:\n rf->AddOperation(vtkRearrangeFields::COPY, \"foo\",\n                  vtkRearrangeFields::DATA_OBJECT,\n                  vtkRearrangeFields::POINT_DATA);\n  adds an operation which copies a field (data array) called foo from\nthe data object's field data to point data. From Tcl, the same\noperation can be added as follows:\n rf AddOperation COPY foo DATA_OBJECT POINT_DATA\n  The same can be",
    " done using Python and Java bindings by passing\nstrings as arguments.\n Operation types: COPY, MOVE\n AttributeTypes: SCALARS, VECTORS, NORMALS, TCOORDS, TENSORS\n Field data locations: DATA_OBJECT, POINT_DATA, CELL_DATA\n \n\nCaveats:\n\nWhen using Tcl, Java, Python or Visual Basic bindings, the array name\ncan not be one of the  AttributeTypes when calling AddOperation()\nwhich takes strings as arguments.",
    " The Tcl (Java etc.) command will\nalways assume the string corresponds to an attribute type when the\nargument is one of the AttributeTypes. In this situation, use the\nAddOperation() which takes enums.\n\nSee Also:\n\nvtkFieldData vtkDataSet vtkDataObjectToDataSetFilter\nvtkDataSetAttributes vtkDataArray vtkAssignAttribute vtkSplitField\nvtkMergeFields\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkRearrangeFields(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkRearrangeFieldsNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkRearrangeFields", o) != 0)
    {
    Py_DECREF(o);
    }

}

