// python wrapper for vtkErrorCode
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkErrorCode.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkErrorCode(PyObject *, const char *); }

static const char **PyvtkErrorCode_Doc();

#ifndef DECLARED_PyvtkErrorCode_ErrorIds_Type
extern VTK_PYTHON_EXPORT PyTypeObject PyvtkErrorCode_ErrorIds_Type;
#define DECLARED_PyvtkErrorCode_ErrorIds_Type
#endif

PyTypeObject PyvtkErrorCode_ErrorIds_Type = {
  PyObject_HEAD_INIT(&PyType_Type)
  0,
  (char*)"ErrorIds", // tp_name
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

PyObject *PyvtkErrorCode_ErrorIds_FromEnum(int val)
{
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkErrorCode_ErrorIds_Type);
  self->ob_ival = val;
  return (PyObject *)self;
}


static PyObject *
PyvtkErrorCode_GetStringFromErrorCode(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetStringFromErrorCode");

  unsigned long temp0;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    const char *tempr = vtkErrorCode::GetStringFromErrorCode(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkErrorCode_GetErrorCodeFromString(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetErrorCodeFromString");

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    unsigned long tempr = vtkErrorCode::GetErrorCodeFromString(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkErrorCode_GetLastSystemError(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetLastSystemError");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    unsigned long tempr = vtkErrorCode::GetLastSystemError();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkErrorCode_Methods[] = {
  {(char*)"GetStringFromErrorCode", PyvtkErrorCode_GetStringFromErrorCode, METH_VARARGS | METH_STATIC,
   (char*)"V.GetStringFromErrorCode(int) -> string\nC++: static const char *GetStringFromErrorCode(\n    unsigned long event)\n\n"},
  {(char*)"GetErrorCodeFromString", PyvtkErrorCode_GetErrorCodeFromString, METH_VARARGS | METH_STATIC,
   (char*)"V.GetErrorCodeFromString(string) -> int\nC++: static unsigned long GetErrorCodeFromString(\n    const char *event)\n\n"},
  {(char*)"GetLastSystemError", PyvtkErrorCode_GetLastSystemError, METH_VARARGS | METH_STATIC,
   (char*)"V.GetLastSystemError() -> int\nC++: static unsigned long GetLastSystemError()\n\n"},
  {NULL, NULL, 0, NULL}
};

#ifndef DECLARED_PyvtkErrorCode_Type
extern VTK_PYTHON_EXPORT PyTypeObject PyvtkErrorCode_Type;
#define DECLARED_PyvtkErrorCode_Type
#endif


static PyObject *
PyvtkErrorCode_vtkErrorCode_s1(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkErrorCode");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkErrorCode *op = new vtkErrorCode();

    result = PyVTKSpecialObject_New("vtkErrorCode", op);
    }

  return result;
}

static PyObject *
PyvtkErrorCode_vtkErrorCode_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkErrorCode");

  vtkErrorCode *temp0 = NULL;
  PyObject *pobj0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkErrorCode"))
    {
    vtkErrorCode *op = new vtkErrorCode(*temp0);

    result = PyVTKSpecialObject_New("vtkErrorCode", op);
    }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkErrorCode_vtkErrorCode_Methods[] = {
  {NULL, PyvtkErrorCode_vtkErrorCode_s2, METH_VARARGS,
   (char*)"O &vtkErrorCode"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkErrorCode_vtkErrorCode(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
    {
    case 0:
      return PyvtkErrorCode_vtkErrorCode_s1(self, args);
    case 1:
      return PyvtkErrorCode_vtkErrorCode_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "vtkErrorCode");
  return NULL;
}


static PyMethodDef PyvtkErrorCode_NewMethod = \
{ (char*)"vtkErrorCode", PyvtkErrorCode_vtkErrorCode, 1,
  (char*)"" };

#if PY_VERSION_HEX >= 0x02020000
static PyObject *
PyvtkErrorCode_New(PyTypeObject *, PyObject *args, PyObject *kwds)
{
  if (kwds && PyDict_Size(kwds))
    {
    PyErr_SetString(PyExc_TypeError,
                    "this function takes no keyword arguments");
    return NULL;
    }

  return PyvtkErrorCode_vtkErrorCode(NULL, args);
}
#endif

static void PyvtkErrorCode_Delete(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  if (obj->vtk_ptr)
    {
    delete static_cast<vtkErrorCode *>(obj->vtk_ptr);
    }
#if PY_MAJOR_VERSION >= 2
  PyObject_Del(self);
#else
  PyMem_DEL(self);
#endif
}

static long PyvtkErrorCode_Hash(PyObject *self)
{
#if PY_VERSION_HEX >= 0x020600B2
  return PyObject_HashNotImplemented(self);
#else
  char text[256];
  sprintf(text, "unhashable type: '%s'", self->ob_type->tp_name);
  PyErr_SetString(PyExc_TypeError, text);
  return -1;
#endif
}

PyTypeObject PyvtkErrorCode_Type = {
  PyObject_HEAD_INIT(&PyType_Type)
  0,
  (char*)"vtkErrorCode", // tp_name
  sizeof(PyVTKSpecialObject), // tp_basicsize
  0, // tp_itemsize
  PyvtkErrorCode_Delete, // tp_dealloc
  0, // tp_print
  0, // tp_getattr
  0, // tp_setattr
  0, // tp_compare
  PyVTKSpecialObject_Repr, // tp_repr
  0, // tp_as_number
  0, // tp_as_sequence
  0, // tp_as_mapping
  PyvtkErrorCode_Hash, // tp_hash
  0, // tp_call
  0, // tp_str
#if PY_VERSION_HEX >= 0x02020000
  PyObject_GenericGetAttr, // tp_getattro
#else
  PyVTKSpecialObject_GetAttr, // tp_getattro
#endif
  0, // tp_setattro
  0, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  0, // tp_doc
  0, // tp_traverse
  0, // tp_clear
  0, // tp_richcompare
  0, // tp_weaklistoffset
#if PY_VERSION_HEX >= 0x02020000
  0, // tp_iter
  0, // tp_iternext
  PyvtkErrorCode_Methods, // tp_methods
  0, // tp_members
  0, // tp_getset
  0, // tp_base
  0, // tp_dict
  0, // tp_descr_get
  0, // tp_descr_set
  0, // tp_dictoffset
  0, // tp_init
  0, // tp_alloc
  PyvtkErrorCode_New, // tp_new
#if PY_VERSION_HEX >= 0x02030000
  PyObject_Del, // tp_free
#else
  _PyObject_Del, // tp_free
#endif
  0, // tp_is_gc
  0, // tp_bases
  0, // tp_mro
  0, // tp_cache
  0, // tp_subclasses
  0, // tp_weaklist
#endif
  VTK_WRAP_PYTHON_SUPRESS_UNINITIALIZED
};

static void *PyvtkErrorCode_CCopy(const void *obj)
{
  if (obj)
    {
    return new vtkErrorCode(*static_cast<const vtkErrorCode*>(obj));
    }
  return 0;
}

static PyObject *PyvtkErrorCode_TypeNew(const char *)
{
  PyObject *cls = PyVTKSpecialType_New(
    &PyvtkErrorCode_Type,
    PyvtkErrorCode_Methods,
    PyvtkErrorCode_vtkErrorCode_Methods,
    &PyvtkErrorCode_NewMethod,
    PyvtkErrorCode_Doc(), &PyvtkErrorCode_CCopy);

  PyObject *d = PyvtkErrorCode_Type.tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkErrorCode_ErrorIds_Type);
  PyvtkErrorCode_ErrorIds_Type.tp_new = NULL;

  o = (PyObject *)&PyvtkErrorCode_ErrorIds_Type;
  if (o && PyDict_SetItemString(d, (char *)"ErrorIds", o) != 0)
    {
    Py_DECREF(o);
    }

  for (int c = 0; c < 11; c++)
    {
    typedef vtkErrorCode::ErrorIds cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[11] = {
        { "NoError", vtkErrorCode::NoError },
        { "FirstVTKErrorCode", vtkErrorCode::FirstVTKErrorCode },
        { "FileNotFoundError", vtkErrorCode::FileNotFoundError },
        { "CannotOpenFileError", vtkErrorCode::CannotOpenFileError },
        { "UnrecognizedFileTypeError", vtkErrorCode::UnrecognizedFileTypeError },
        { "PrematureEndOfFileError", vtkErrorCode::PrematureEndOfFileError },
        { "FileFormatError", vtkErrorCode::FileFormatError },
        { "NoFileNameError", vtkErrorCode::NoFileNameError },
        { "OutOfDiskSpaceError", vtkErrorCode::OutOfDiskSpaceError },
        { "UnknownError", vtkErrorCode::UnknownError },
        { "UserError", vtkErrorCode::UserError },
      };

    o = PyvtkErrorCode_ErrorIds_FromEnum(constants[c].value);
    if (o)
      {
      PyDict_SetItemString(d, (char *)constants[c].name, o);
      Py_DECREF(o);
      }
    }

  return cls;
}

const char **PyvtkErrorCode_Doc()
{
  static const char *docstring[] = {
    "vtkErrorCode - superclass for error codes\n\n",
    "vtkErrorCode is an mechanism for (currently) reader object to return\nerrors during reading file.\n\n",
    "V.vtkErrorCode()\nC++: vtkErrorCode()\nV.vtkErrorCode(vtkErrorCode)\nC++: vtkErrorCode(const &vtkErrorCode)\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkErrorCode(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyvtkErrorCode_TypeNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkErrorCode", o) != 0)
    {
    Py_DECREF(o);
    }

}

