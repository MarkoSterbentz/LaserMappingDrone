// python wrapper for vtkArrayCoordinates
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkArrayCoordinates.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkArrayCoordinates(PyObject *, const char *); }

static const char **PyvtkArrayCoordinates_Doc();


static PyObject *
PyvtkArrayCoordinates_GetDimensions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "GetDimensions");
  void *vp = ap.GetSelfPointer(self);
  vtkArrayCoordinates *op = static_cast<vtkArrayCoordinates *>(vp);

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
PyvtkArrayCoordinates_SetDimensions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "SetDimensions");
  void *vp = ap.GetSelfPointer(self);
  vtkArrayCoordinates *op = static_cast<vtkArrayCoordinates *>(vp);

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


static PyObject *
PyvtkArrayCoordinates_GetCoordinate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "GetCoordinate");
  void *vp = ap.GetSelfPointer(self);
  vtkArrayCoordinates *op = static_cast<vtkArrayCoordinates *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkIdType tempr = op->GetCoordinate(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkArrayCoordinates_SetCoordinate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "SetCoordinate");
  void *vp = ap.GetSelfPointer(self);
  vtkArrayCoordinates *op = static_cast<vtkArrayCoordinates *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  PyObject *result = NULL;

  if (ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    op->SetCoordinate(temp0, temp1);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkArrayCoordinates_Methods[] = {
  {(char*)"GetDimensions", PyvtkArrayCoordinates_GetDimensions, METH_VARARGS,
   (char*)"V.GetDimensions() -> int\nC++: DimensionT GetDimensions()\n\nReturn the number of dimensions contained in the coordinates.\n"},
  {(char*)"SetDimensions", PyvtkArrayCoordinates_SetDimensions, METH_VARARGS,
   (char*)"V.SetDimensions(int)\nC++: void SetDimensions(DimensionT dimensions)\n\nSet the number of dimensions.  Note that this method resets the\ncoordinate along each dimension to zero, so you must set every\ncoordinate explicitly using operator[] after calling\nSetDimensions().\n"},
  {(char*)"GetCoordinate", PyvtkArrayCoordinates_GetCoordinate, METH_VARARGS,
   (char*)"V.GetCoordinate(int) -> int\nC++: CoordinateT GetCoordinate(DimensionT i)\n\nReturns the coordinate of the i-th dimension.\n"},
  {(char*)"SetCoordinate", PyvtkArrayCoordinates_SetCoordinate, METH_VARARGS,
   (char*)"V.SetCoordinate(int, int)\nC++: void SetCoordinate(DimensionT i, const CoordinateT &)\n\nSets the coordinate of the i-th dimension.\n"},
  {NULL, NULL, 0, NULL}
};

#ifndef DECLARED_PyvtkArrayCoordinates_Type
extern VTK_PYTHON_EXPORT PyTypeObject PyvtkArrayCoordinates_Type;
#define DECLARED_PyvtkArrayCoordinates_Type
#endif


static PyObject *
PyvtkArrayCoordinates_vtkArrayCoordinates_s1(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkArrayCoordinates");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkArrayCoordinates *op = new vtkArrayCoordinates();

    result = PyVTKSpecialObject_New("vtkArrayCoordinates", op);
    }

  return result;
}

static PyObject *
PyvtkArrayCoordinates_vtkArrayCoordinates_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkArrayCoordinates");

  vtkIdType temp0;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkArrayCoordinates *op = new vtkArrayCoordinates(temp0);

    result = PyVTKSpecialObject_New("vtkArrayCoordinates", op);
    }

  return result;
}

static PyObject *
PyvtkArrayCoordinates_vtkArrayCoordinates_s3(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkArrayCoordinates");

  vtkIdType temp0;
  vtkIdType temp1;
  PyObject *result = NULL;

  if (ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    vtkArrayCoordinates *op = new vtkArrayCoordinates(temp0, temp1);

    result = PyVTKSpecialObject_New("vtkArrayCoordinates", op);
    }

  return result;
}

static PyObject *
PyvtkArrayCoordinates_vtkArrayCoordinates_s4(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkArrayCoordinates");

  vtkIdType temp0;
  vtkIdType temp1;
  vtkIdType temp2;
  PyObject *result = NULL;

  if (ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    vtkArrayCoordinates *op = new vtkArrayCoordinates(temp0, temp1, temp2);

    result = PyVTKSpecialObject_New("vtkArrayCoordinates", op);
    }

  return result;
}

static PyObject *
PyvtkArrayCoordinates_vtkArrayCoordinates_s5(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkArrayCoordinates");

  vtkArrayCoordinates *temp0 = NULL;
  PyObject *pobj0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkArrayCoordinates"))
    {
    vtkArrayCoordinates *op = new vtkArrayCoordinates(*temp0);

    result = PyVTKSpecialObject_New("vtkArrayCoordinates", op);
    }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkArrayCoordinates_vtkArrayCoordinates_Methods[] = {
  {NULL, PyvtkArrayCoordinates_vtkArrayCoordinates_s2, METH_VARARGS,
   (char*)"-L"},
  {NULL, PyvtkArrayCoordinates_vtkArrayCoordinates_s5, METH_VARARGS,
   (char*)"O &vtkArrayCoordinates"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkArrayCoordinates_vtkArrayCoordinates(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkArrayCoordinates_vtkArrayCoordinates_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
    {
    case 0:
      return PyvtkArrayCoordinates_vtkArrayCoordinates_s1(self, args);
    case 2:
      return PyvtkArrayCoordinates_vtkArrayCoordinates_s3(self, args);
    case 3:
      return PyvtkArrayCoordinates_vtkArrayCoordinates_s4(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "vtkArrayCoordinates");
  return NULL;
}


static PyMethodDef PyvtkArrayCoordinates_NewMethod = \
{ (char*)"vtkArrayCoordinates", PyvtkArrayCoordinates_vtkArrayCoordinates, 1,
  (char*)"" };

#if PY_VERSION_HEX >= 0x02020000
static PyObject *
PyvtkArrayCoordinates_New(PyTypeObject *, PyObject *args, PyObject *kwds)
{
  if (kwds && PyDict_Size(kwds))
    {
    PyErr_SetString(PyExc_TypeError,
                    "this function takes no keyword arguments");
    return NULL;
    }

  return PyvtkArrayCoordinates_vtkArrayCoordinates(NULL, args);
}
#endif

static void PyvtkArrayCoordinates_Delete(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  if (obj->vtk_ptr)
    {
    delete static_cast<vtkArrayCoordinates *>(obj->vtk_ptr);
    }
#if PY_MAJOR_VERSION >= 2
  PyObject_Del(self);
#else
  PyMem_DEL(self);
#endif
}

static PyObject *PyvtkArrayCoordinates_String(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  vtksys_ios::ostringstream os;
  if (obj->vtk_ptr)
    {
    os << *static_cast<const vtkArrayCoordinates *>(obj->vtk_ptr);
    }
  const vtksys_stl::string &s = os.str();
  return PyString_FromStringAndSize(s.data(), s.size());
}

#if PY_VERSION_HEX >= 0x02010000
static PyObject *PyvtkArrayCoordinates_RichCompare(
  PyObject *o1, PyObject *o2, int opid)
{
  PyObject *n1 = NULL;
  PyObject *n2 = NULL;
  const vtkArrayCoordinates *so1 = NULL;
  const vtkArrayCoordinates *so2 = NULL;
  int result = -1;

  if (o1->ob_type == &PyvtkArrayCoordinates_Type)
    {
    PyVTKSpecialObject *s1 = (PyVTKSpecialObject *)o1;
    so1 = static_cast<const vtkArrayCoordinates *>(s1->vtk_ptr);
    }
  else
    {
    so1 = static_cast<const vtkArrayCoordinates *>(
      vtkPythonUtil::GetPointerFromSpecialObject(
        o1, "vtkArrayCoordinates", &n1));
    if (so1 == NULL)
      {
      PyErr_Clear();
      Py_INCREF(Py_NotImplemented);
      return Py_NotImplemented;
      }
    }

  if (o2->ob_type == &PyvtkArrayCoordinates_Type)
    {
    PyVTKSpecialObject *s2 = (PyVTKSpecialObject *)o2;
    so2 = static_cast<const vtkArrayCoordinates *>(s2->vtk_ptr);
    }
  else
    {
    so2 = static_cast<const vtkArrayCoordinates *>(
      vtkPythonUtil::GetPointerFromSpecialObject(
        o2, "vtkArrayCoordinates", &n2));
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

Py_ssize_t PyvtkArrayCoordinates_SequenceSize(PyObject *self)
{
  void *vp = vtkPythonArgs::GetSelfPointer(self);
  vtkArrayCoordinates *op = static_cast<vtkArrayCoordinates *>(vp);

  return static_cast<Py_ssize_t>(op->GetDimensions());
}

PyObject *PyvtkArrayCoordinates_SequenceItem(PyObject *self, Py_ssize_t i)
{
  void *vp = vtkPythonArgs::GetSelfPointer(self);
  vtkArrayCoordinates *op = static_cast<vtkArrayCoordinates *>(vp);

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

int PyvtkArrayCoordinates_SequenceSetItem(
  PyObject *self, Py_ssize_t i, PyObject *arg1)
{
  void *vp = vtkPythonArgs::GetSelfPointer(self);
  vtkArrayCoordinates *op = static_cast<vtkArrayCoordinates *>(vp);

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

static PySequenceMethods PyvtkArrayCoordinates_AsSequence = {
  PyvtkArrayCoordinates_SequenceSize, // sq_length
  0, // sq_concat
  0, // sq_repeat
  PyvtkArrayCoordinates_SequenceItem, // sq_item
  0, // sq_slice
  PyvtkArrayCoordinates_SequenceSetItem, // sq_ass_item
  0, // sq_ass_slice
  0, // sq_contains
#if PY_VERSION_HEX >= 0x2000000
  0, // sq_inplace_concat
  0, // sq_inplace_repeat
#endif
};

static long PyvtkArrayCoordinates_Hash(PyObject *self)
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

PyTypeObject PyvtkArrayCoordinates_Type = {
  PyObject_HEAD_INIT(&PyType_Type)
  0,
  (char*)"vtkArrayCoordinates", // tp_name
  sizeof(PyVTKSpecialObject), // tp_basicsize
  0, // tp_itemsize
  PyvtkArrayCoordinates_Delete, // tp_dealloc
  0, // tp_print
  0, // tp_getattr
  0, // tp_setattr
  0, // tp_compare
  PyVTKSpecialObject_Repr, // tp_repr
  0, // tp_as_number
  &PyvtkArrayCoordinates_AsSequence, // tp_as_sequence
  0, // tp_as_mapping
  PyvtkArrayCoordinates_Hash, // tp_hash
  0, // tp_call
  PyvtkArrayCoordinates_String, // tp_str
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
  PyvtkArrayCoordinates_RichCompare, // tp_richcompare
#else
  0, // tp_richcompare
#endif
  0, // tp_weaklistoffset
#if PY_VERSION_HEX >= 0x02020000
  0, // tp_iter
  0, // tp_iternext
  PyvtkArrayCoordinates_Methods, // tp_methods
  0, // tp_members
  0, // tp_getset
  0, // tp_base
  0, // tp_dict
  0, // tp_descr_get
  0, // tp_descr_set
  0, // tp_dictoffset
  0, // tp_init
  0, // tp_alloc
  PyvtkArrayCoordinates_New, // tp_new
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

static void *PyvtkArrayCoordinates_CCopy(const void *obj)
{
  if (obj)
    {
    return new vtkArrayCoordinates(*static_cast<const vtkArrayCoordinates*>(obj));
    }
  return 0;
}

static PyObject *PyvtkArrayCoordinates_TypeNew(const char *)
{
  PyObject *cls = PyVTKSpecialType_New(
    &PyvtkArrayCoordinates_Type,
    PyvtkArrayCoordinates_Methods,
    PyvtkArrayCoordinates_vtkArrayCoordinates_Methods,
    &PyvtkArrayCoordinates_NewMethod,
    PyvtkArrayCoordinates_Doc(), &PyvtkArrayCoordinates_CCopy);

  return cls;
}

const char **PyvtkArrayCoordinates_Doc()
{
  static const char *docstring[] = {
    "vtkArrayCoordinates - Stores coordinate into an N-way array.\n\n",
    "vtkArrayCoordinates stores a collection of coordinates that can be\nused to access values in a vtkArray containing an arbitrary number of\ndimensions.\n\nConvenience constructors are provided for working with one, two, and\nthree dimensions.  For higher dimensions, use the default\nconstructor, SetDimensions() and operator[] to assign a coordinate\nvalue along each dimension.\n\nSee Also:\n\nvtkArray, vtkArr",
    "ayExtents\n\nThanks:\n\nDeveloped by Timothy M. Shead (tshead@sandia.gov) at Sandia National\nLaboratories.\n\n",
    "V.vtkArrayCoordinates()\nC++: vtkArrayCoordinates()\nV.vtkArrayCoordinates(int)\nC++: explicit vtkArrayCoordinates(CoordinateT i)\nV.vtkArrayCoordinates(int, int)\nC++: vtkArrayCoordinates(CoordinateT i, CoordinateT j)\nV.vtkArrayCoordinates(int, int, int)\nC++: vtkArrayCoordinates(CoordinateT i, CoordinateT j, CoordinateT k)\nV.vtkArrayCoordinates(vtkArrayCoordinates)\nC++: vtkArrayCoordinates(const &vtkArrayCoordinates)\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkArrayCoordinates(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyvtkArrayCoordinates_TypeNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkArrayCoordinates", o) != 0)
    {
    Py_DECREF(o);
    }

}

