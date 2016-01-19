// python wrapper for vtkArrayRange
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkArrayRange.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkArrayRange(PyObject *, const char *); }

static const char **PyvtkArrayRange_Doc();


static PyObject *
PyvtkArrayRange_GetBegin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "GetBegin");
  void *vp = ap.GetSelfPointer(self);
  vtkArrayRange *op = static_cast<vtkArrayRange *>(vp);

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkIdType tempr = op->GetBegin();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkArrayRange_GetEnd(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "GetEnd");
  void *vp = ap.GetSelfPointer(self);
  vtkArrayRange *op = static_cast<vtkArrayRange *>(vp);

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkIdType tempr = op->GetEnd();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkArrayRange_GetSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "GetSize");
  void *vp = ap.GetSelfPointer(self);
  vtkArrayRange *op = static_cast<vtkArrayRange *>(vp);

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkIdType tempr = op->GetSize();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkArrayRange_Contains_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "Contains");
  void *vp = ap.GetSelfPointer(self);
  vtkArrayRange *op = static_cast<vtkArrayRange *>(vp);

  vtkArrayRange *temp0 = NULL;
  PyObject *pobj0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkArrayRange"))
    {
    bool tempr = op->Contains(*temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  Py_XDECREF(pobj0);

  return result;
}

static PyObject *
PyvtkArrayRange_Contains_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "Contains");
  void *vp = ap.GetSelfPointer(self);
  vtkArrayRange *op = static_cast<vtkArrayRange *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    bool tempr = op->Contains(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkArrayRange_Contains_Methods[] = {
  {NULL, PyvtkArrayRange_Contains_s1, METH_VARARGS,
   (char*)"O &vtkArrayRange"},
  {NULL, PyvtkArrayRange_Contains_s2, METH_VARARGS,
   (char*)"L"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkArrayRange_Contains(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkArrayRange_Contains_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
    {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "Contains");
  return NULL;
}


static PyMethodDef PyvtkArrayRange_Methods[] = {
  {(char*)"GetBegin", PyvtkArrayRange_GetBegin, METH_VARARGS,
   (char*)"V.GetBegin() -> int\nC++: CoordinateT GetBegin()\n\nReturns the beginning of the range\n"},
  {(char*)"GetEnd", PyvtkArrayRange_GetEnd, METH_VARARGS,
   (char*)"V.GetEnd() -> int\nC++: CoordinateT GetEnd()\n\nReturns one-past-the-end of the range\n"},
  {(char*)"GetSize", PyvtkArrayRange_GetSize, METH_VARARGS,
   (char*)"V.GetSize() -> int\nC++: CoordinateT GetSize()\n\nReturns the size of the range (the distance End - Begin).\n"},
  {(char*)"Contains", PyvtkArrayRange_Contains, METH_VARARGS,
   (char*)"V.Contains(vtkArrayRange) -> bool\nC++: bool Contains(const vtkArrayRange &range)\nV.Contains(int) -> bool\nC++: bool Contains(const CoordinateT coordinate)\n\nReturns true iff the given range is a non-overlapping subset of\nthis range.\n"},
  {NULL, NULL, 0, NULL}
};

#ifndef DECLARED_PyvtkArrayRange_Type
extern VTK_PYTHON_EXPORT PyTypeObject PyvtkArrayRange_Type;
#define DECLARED_PyvtkArrayRange_Type
#endif


static PyObject *
PyvtkArrayRange_vtkArrayRange_s1(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkArrayRange");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkArrayRange *op = new vtkArrayRange();

    result = PyVTKSpecialObject_New("vtkArrayRange", op);
    }

  return result;
}

static PyObject *
PyvtkArrayRange_vtkArrayRange_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkArrayRange");

  vtkIdType temp0;
  vtkIdType temp1;
  PyObject *result = NULL;

  if (ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    vtkArrayRange *op = new vtkArrayRange(temp0, temp1);

    result = PyVTKSpecialObject_New("vtkArrayRange", op);
    }

  return result;
}

static PyObject *
PyvtkArrayRange_vtkArrayRange_s3(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkArrayRange");

  vtkArrayRange *temp0 = NULL;
  PyObject *pobj0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkArrayRange"))
    {
    vtkArrayRange *op = new vtkArrayRange(*temp0);

    result = PyVTKSpecialObject_New("vtkArrayRange", op);
    }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkArrayRange_vtkArrayRange_Methods[] = {
  {NULL, PyvtkArrayRange_vtkArrayRange_s3, METH_VARARGS,
   (char*)"O &vtkArrayRange"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkArrayRange_vtkArrayRange(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
    {
    case 0:
      return PyvtkArrayRange_vtkArrayRange_s1(self, args);
    case 2:
      return PyvtkArrayRange_vtkArrayRange_s2(self, args);
    case 1:
      return PyvtkArrayRange_vtkArrayRange_s3(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "vtkArrayRange");
  return NULL;
}


static PyMethodDef PyvtkArrayRange_NewMethod = \
{ (char*)"vtkArrayRange", PyvtkArrayRange_vtkArrayRange, 1,
  (char*)"" };

#if PY_VERSION_HEX >= 0x02020000
static PyObject *
PyvtkArrayRange_New(PyTypeObject *, PyObject *args, PyObject *kwds)
{
  if (kwds && PyDict_Size(kwds))
    {
    PyErr_SetString(PyExc_TypeError,
                    "this function takes no keyword arguments");
    return NULL;
    }

  return PyvtkArrayRange_vtkArrayRange(NULL, args);
}
#endif

static void PyvtkArrayRange_Delete(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  if (obj->vtk_ptr)
    {
    delete static_cast<vtkArrayRange *>(obj->vtk_ptr);
    }
#if PY_MAJOR_VERSION >= 2
  PyObject_Del(self);
#else
  PyMem_DEL(self);
#endif
}

static PyObject *PyvtkArrayRange_String(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  vtksys_ios::ostringstream os;
  if (obj->vtk_ptr)
    {
    os << *static_cast<const vtkArrayRange *>(obj->vtk_ptr);
    }
  const vtksys_stl::string &s = os.str();
  return PyString_FromStringAndSize(s.data(), s.size());
}

#if PY_VERSION_HEX >= 0x02010000
static PyObject *PyvtkArrayRange_RichCompare(
  PyObject *o1, PyObject *o2, int opid)
{
  PyObject *n1 = NULL;
  PyObject *n2 = NULL;
  const vtkArrayRange *so1 = NULL;
  const vtkArrayRange *so2 = NULL;
  int result = -1;

  if (o1->ob_type == &PyvtkArrayRange_Type)
    {
    PyVTKSpecialObject *s1 = (PyVTKSpecialObject *)o1;
    so1 = static_cast<const vtkArrayRange *>(s1->vtk_ptr);
    }
  else
    {
    so1 = static_cast<const vtkArrayRange *>(
      vtkPythonUtil::GetPointerFromSpecialObject(
        o1, "vtkArrayRange", &n1));
    if (so1 == NULL)
      {
      PyErr_Clear();
      Py_INCREF(Py_NotImplemented);
      return Py_NotImplemented;
      }
    }

  if (o2->ob_type == &PyvtkArrayRange_Type)
    {
    PyVTKSpecialObject *s2 = (PyVTKSpecialObject *)o2;
    so2 = static_cast<const vtkArrayRange *>(s2->vtk_ptr);
    }
  else
    {
    so2 = static_cast<const vtkArrayRange *>(
      vtkPythonUtil::GetPointerFromSpecialObject(
        o2, "vtkArrayRange", &n2));
    if (so2 == NULL)
      {
      PyErr_Clear();
      Py_INCREF(Py_NotImplemented);
      return Py_NotImplemented;
      }
    }

  switch (opid)
    {
    case Py_LT:
      break;
    case Py_LE:
      break;
    case Py_EQ:
      result = ((*so1) == (*so2));
      break;
    case Py_NE:
      result = ((*so1) != (*so2));
      break;
    case Py_GT:
      break;
    case Py_GE:
      break;
    }

  if (n1)
    {
    Py_DECREF(n1);
    }
  else if (n2)
    {
    Py_DECREF(n2);
    }

  if (result == -1)
    {
    PyErr_SetString(PyExc_TypeError, (char *)"operation not available");
    return NULL;
    }

#if PY_VERSION_HEX >= 0x02030000
  // avoids aliasing issues with Py_INCREF(Py_False)
  return PyBool_FromLong((long)result);
#else
  if (result == 0)
    {
    Py_INCREF(Py_False);
    return Py_False;
    }
  Py_INCREF(Py_True);
  return Py_True;
#endif
}
#endif

static long PyvtkArrayRange_Hash(PyObject *self)
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

PyTypeObject PyvtkArrayRange_Type = {
  PyObject_HEAD_INIT(&PyType_Type)
  0,
  (char*)"vtkArrayRange", // tp_name
  sizeof(PyVTKSpecialObject), // tp_basicsize
  0, // tp_itemsize
  PyvtkArrayRange_Delete, // tp_dealloc
  0, // tp_print
  0, // tp_getattr
  0, // tp_setattr
  0, // tp_compare
  PyVTKSpecialObject_Repr, // tp_repr
  0, // tp_as_number
  0, // tp_as_sequence
  0, // tp_as_mapping
  PyvtkArrayRange_Hash, // tp_hash
  0, // tp_call
  PyvtkArrayRange_String, // tp_str
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
#if PY_VERSION_HEX >= 0x02010000
  PyvtkArrayRange_RichCompare, // tp_richcompare
#else
  0, // tp_richcompare
#endif
  0, // tp_weaklistoffset
#if PY_VERSION_HEX >= 0x02020000
  0, // tp_iter
  0, // tp_iternext
  PyvtkArrayRange_Methods, // tp_methods
  0, // tp_members
  0, // tp_getset
  0, // tp_base
  0, // tp_dict
  0, // tp_descr_get
  0, // tp_descr_set
  0, // tp_dictoffset
  0, // tp_init
  0, // tp_alloc
  PyvtkArrayRange_New, // tp_new
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

static void *PyvtkArrayRange_CCopy(const void *obj)
{
  if (obj)
    {
    return new vtkArrayRange(*static_cast<const vtkArrayRange*>(obj));
    }
  return 0;
}

static PyObject *PyvtkArrayRange_TypeNew(const char *)
{
  PyObject *cls = PyVTKSpecialType_New(
    &PyvtkArrayRange_Type,
    PyvtkArrayRange_Methods,
    PyvtkArrayRange_vtkArrayRange_Methods,
    &PyvtkArrayRange_NewMethod,
    PyvtkArrayRange_Doc(), &PyvtkArrayRange_CCopy);

  return cls;
}

const char **PyvtkArrayRange_Doc()
{
  static const char *docstring[] = {
    "vtkArrayRange - Stores a half-open range of array coordinates.\n\n",
    "vtkArrayRange stores a half-open range of array coordinates along a\nsingle dimension of a vtkArraySlice object.\n\nSee Also:\n\nvtkArray, vtkArrayRange\n\nThanks:\n\nDeveloped by Timothy M. Shead (tshead@sandia.gov) at Sandia National\nLaboratories.\n\n",
    "V.vtkArrayRange()\nC++: vtkArrayRange()\nV.vtkArrayRange(int, int)\nC++: vtkArrayRange(CoordinateT begin, CoordinateT end)\nV.vtkArrayRange(vtkArrayRange)\nC++: vtkArrayRange(const &vtkArrayRange)\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkArrayRange(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyvtkArrayRange_TypeNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkArrayRange", o) != 0)
    {
    Py_DECREF(o);
    }

}

