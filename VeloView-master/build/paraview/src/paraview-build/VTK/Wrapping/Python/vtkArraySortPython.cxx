// python wrapper for vtkArraySort
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkArraySort.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkArraySort(PyObject *, const char *); }

static const char **PyvtkArraySort_Doc();


static PyObject *
PyvtkArraySort_GetDimensions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "GetDimensions");
  void *vp = ap.GetSelfPointer(self);
  vtkArraySort *op = static_cast<vtkArraySort *>(vp);

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkIdType tempr = op->GetDimensions();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkArraySort_SetDimensions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "SetDimensions");
  void *vp = ap.GetSelfPointer(self);
  vtkArraySort *op = static_cast<vtkArraySort *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    op->SetDimensions(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkArraySort_Methods[] = {
  {(char*)"GetDimensions", PyvtkArraySort_GetDimensions, METH_VARARGS,
   (char*)"V.GetDimensions() -> int\nC++: DimensionT GetDimensions()\n\nReturn the number of dimensions for sorting.\n"},
  {(char*)"SetDimensions", PyvtkArraySort_SetDimensions, METH_VARARGS,
   (char*)"V.SetDimensions(int)\nC++: void SetDimensions(DimensionT dimensions)\n\nSet the number of dimensions to be sorted.  Note that this method\nresets every dimension to zero, so you must set every dimension\nexplicitly using operator[] after calling SetDimensions().\n"},
  {NULL, NULL, 0, NULL}
};

#ifndef DECLARED_PyvtkArraySort_Type
extern VTK_PYTHON_EXPORT PyTypeObject PyvtkArraySort_Type;
#define DECLARED_PyvtkArraySort_Type
#endif


static PyObject *
PyvtkArraySort_vtkArraySort_s1(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkArraySort");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkArraySort *op = new vtkArraySort();

    result = PyVTKSpecialObject_New("vtkArraySort", op);
    }

  return result;
}

static PyObject *
PyvtkArraySort_vtkArraySort_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkArraySort");

  vtkIdType temp0;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkArraySort *op = new vtkArraySort(temp0);

    result = PyVTKSpecialObject_New("vtkArraySort", op);
    }

  return result;
}

static PyObject *
PyvtkArraySort_vtkArraySort_s3(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkArraySort");

  vtkIdType temp0;
  vtkIdType temp1;
  PyObject *result = NULL;

  if (ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    vtkArraySort *op = new vtkArraySort(temp0, temp1);

    result = PyVTKSpecialObject_New("vtkArraySort", op);
    }

  return result;
}

static PyObject *
PyvtkArraySort_vtkArraySort_s4(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkArraySort");

  vtkIdType temp0;
  vtkIdType temp1;
  vtkIdType temp2;
  PyObject *result = NULL;

  if (ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    vtkArraySort *op = new vtkArraySort(temp0, temp1, temp2);

    result = PyVTKSpecialObject_New("vtkArraySort", op);
    }

  return result;
}

static PyObject *
PyvtkArraySort_vtkArraySort_s5(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkArraySort");

  vtkArraySort *temp0 = NULL;
  PyObject *pobj0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkArraySort"))
    {
    vtkArraySort *op = new vtkArraySort(*temp0);

    result = PyVTKSpecialObject_New("vtkArraySort", op);
    }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkArraySort_vtkArraySort_Methods[] = {
  {NULL, PyvtkArraySort_vtkArraySort_s2, METH_VARARGS,
   (char*)"-L"},
  {NULL, PyvtkArraySort_vtkArraySort_s5, METH_VARARGS,
   (char*)"O &vtkArraySort"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkArraySort_vtkArraySort(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkArraySort_vtkArraySort_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
    {
    case 0:
      return PyvtkArraySort_vtkArraySort_s1(self, args);
    case 2:
      return PyvtkArraySort_vtkArraySort_s3(self, args);
    case 3:
      return PyvtkArraySort_vtkArraySort_s4(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "vtkArraySort");
  return NULL;
}


static PyMethodDef PyvtkArraySort_NewMethod = \
{ (char*)"vtkArraySort", PyvtkArraySort_vtkArraySort, 1,
  (char*)"" };

#if PY_VERSION_HEX >= 0x02020000
static PyObject *
PyvtkArraySort_New(PyTypeObject *, PyObject *args, PyObject *kwds)
{
  if (kwds && PyDict_Size(kwds))
    {
    PyErr_SetString(PyExc_TypeError,
                    "this function takes no keyword arguments");
    return NULL;
    }

  return PyvtkArraySort_vtkArraySort(NULL, args);
}
#endif

static void PyvtkArraySort_Delete(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  if (obj->vtk_ptr)
    {
    delete static_cast<vtkArraySort *>(obj->vtk_ptr);
    }
#if PY_MAJOR_VERSION >= 2
  PyObject_Del(self);
#else
  PyMem_DEL(self);
#endif
}

static PyObject *PyvtkArraySort_String(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  vtksys_ios::ostringstream os;
  if (obj->vtk_ptr)
    {
    os << *static_cast<const vtkArraySort *>(obj->vtk_ptr);
    }
  const vtksys_stl::string &s = os.str();
  return PyString_FromStringAndSize(s.data(), s.size());
}

#if PY_VERSION_HEX >= 0x02010000
static PyObject *PyvtkArraySort_RichCompare(
  PyObject *o1, PyObject *o2, int opid)
{
  PyObject *n1 = NULL;
  PyObject *n2 = NULL;
  const vtkArraySort *so1 = NULL;
  const vtkArraySort *so2 = NULL;
  int result = -1;

  if (o1->ob_type == &PyvtkArraySort_Type)
    {
    PyVTKSpecialObject *s1 = (PyVTKSpecialObject *)o1;
    so1 = static_cast<const vtkArraySort *>(s1->vtk_ptr);
    }
  else
    {
    so1 = static_cast<const vtkArraySort *>(
      vtkPythonUtil::GetPointerFromSpecialObject(
        o1, "vtkArraySort", &n1));
    if (so1 == NULL)
      {
      PyErr_Clear();
      Py_INCREF(Py_NotImplemented);
      return Py_NotImplemented;
      }
    }

  if (o2->ob_type == &PyvtkArraySort_Type)
    {
    PyVTKSpecialObject *s2 = (PyVTKSpecialObject *)o2;
    so2 = static_cast<const vtkArraySort *>(s2->vtk_ptr);
    }
  else
    {
    so2 = static_cast<const vtkArraySort *>(
      vtkPythonUtil::GetPointerFromSpecialObject(
        o2, "vtkArraySort", &n2));
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

Py_ssize_t PyvtkArraySort_SequenceSize(PyObject *self)
{
  void *vp = vtkPythonArgs::GetSelfPointer(self);
  vtkArraySort *op = static_cast<vtkArraySort *>(vp);

  return static_cast<Py_ssize_t>(op->GetDimensions());
}

PyObject *PyvtkArraySort_SequenceItem(PyObject *self, Py_ssize_t i)
{
  void *vp = vtkPythonArgs::GetSelfPointer(self);
  vtkArraySort *op = static_cast<vtkArraySort *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  temp0 = static_cast<vtkIdType>(i);

  if (temp0 < 0 || temp0 >= op->GetDimensions())
    {
    PyErr_SetString(PyExc_IndexError, "index out of range");
    }
  else
    {
    const vtkIdType *tempr = &(*op)[temp0];

    if (PyErr_Occurred() == NULL)
      {
      result = vtkPythonArgs::BuildValue(*tempr);
      }
    }

  return result;
}

int PyvtkArraySort_SequenceSetItem(
  PyObject *self, Py_ssize_t i, PyObject *arg1)
{
  void *vp = vtkPythonArgs::GetSelfPointer(self);
  vtkArraySort *op = static_cast<vtkArraySort *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  int result = -1;

  temp0 = static_cast<vtkIdType>(i);

  if (temp0 < 0 || temp0 >= op->GetDimensions())
    {
    PyErr_SetString(PyExc_IndexError, "index out of range");
    }
  else if (vtkPythonArgs::GetValue(arg1, temp1))
    {
    (*op)[temp0] = temp1;

    if (PyErr_Occurred() == NULL)
      {
      result = 0;
      }
    }

  return result;
}

static PySequenceMethods PyvtkArraySort_AsSequence = {
  PyvtkArraySort_SequenceSize, // sq_length
  0, // sq_concat
  0, // sq_repeat
  PyvtkArraySort_SequenceItem, // sq_item
  0, // sq_slice
  PyvtkArraySort_SequenceSetItem, // sq_ass_item
  0, // sq_ass_slice
  0, // sq_contains
#if PY_VERSION_HEX >= 0x2000000
  0, // sq_inplace_concat
  0, // sq_inplace_repeat
#endif
};

static long PyvtkArraySort_Hash(PyObject *self)
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

PyTypeObject PyvtkArraySort_Type = {
  PyObject_HEAD_INIT(&PyType_Type)
  0,
  (char*)"vtkArraySort", // tp_name
  sizeof(PyVTKSpecialObject), // tp_basicsize
  0, // tp_itemsize
  PyvtkArraySort_Delete, // tp_dealloc
  0, // tp_print
  0, // tp_getattr
  0, // tp_setattr
  0, // tp_compare
  PyVTKSpecialObject_Repr, // tp_repr
  0, // tp_as_number
  &PyvtkArraySort_AsSequence, // tp_as_sequence
  0, // tp_as_mapping
  PyvtkArraySort_Hash, // tp_hash
  0, // tp_call
  PyvtkArraySort_String, // tp_str
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
  PyvtkArraySort_RichCompare, // tp_richcompare
#else
  0, // tp_richcompare
#endif
  0, // tp_weaklistoffset
#if PY_VERSION_HEX >= 0x02020000
  0, // tp_iter
  0, // tp_iternext
  PyvtkArraySort_Methods, // tp_methods
  0, // tp_members
  0, // tp_getset
  0, // tp_base
  0, // tp_dict
  0, // tp_descr_get
  0, // tp_descr_set
  0, // tp_dictoffset
  0, // tp_init
  0, // tp_alloc
  PyvtkArraySort_New, // tp_new
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

static void *PyvtkArraySort_CCopy(const void *obj)
{
  if (obj)
    {
    return new vtkArraySort(*static_cast<const vtkArraySort*>(obj));
    }
  return 0;
}

static PyObject *PyvtkArraySort_TypeNew(const char *)
{
  PyObject *cls = PyVTKSpecialType_New(
    &PyvtkArraySort_Type,
    PyvtkArraySort_Methods,
    PyvtkArraySort_vtkArraySort_Methods,
    &PyvtkArraySort_NewMethod,
    PyvtkArraySort_Doc(), &PyvtkArraySort_CCopy);

  return cls;
}

const char **PyvtkArraySort_Doc()
{
  static const char *docstring[] = {
    "vtkArraySort - Controls sorting of sparse array coordinates.\n\n",
    "vtkArraySort stores an ordered set of dimensions along which the\nvalues stored in a sparse array should be sorted.\n\nConvenience constructors are provided for specifying one, two, and\nthree dimensions.  To sort along more than three dimensions, use the\ndefault constructor, SetDimensions(), and operator[] to assign each\ndimension to be sorted.\n\nSee Also:\n\nvtkSparseArray\n\nThanks:\n\nDeveloped by Timoth",
    "y M. Shead (tshead@sandia.gov) at Sandia National\nLaboratories.\n\n",
    "V.vtkArraySort()\nC++: vtkArraySort()\nV.vtkArraySort(int)\nC++: explicit vtkArraySort(DimensionT i)\nV.vtkArraySort(int, int)\nC++: vtkArraySort(DimensionT i, DimensionT j)\nV.vtkArraySort(int, int, int)\nC++: vtkArraySort(DimensionT i, DimensionT j, DimensionT k)\nV.vtkArraySort(vtkArraySort)\nC++: vtkArraySort(const &vtkArraySort)\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkArraySort(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyvtkArraySort_TypeNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkArraySort", o) != 0)
    {
    Py_DECREF(o);
    }

}

