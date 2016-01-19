// python wrapper for vtkArrayExtentsList
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkArrayExtents.h"
#include "vtkArrayExtentsList.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkArrayExtentsList(PyObject *, const char *); }

static const char **PyvtkArrayExtentsList_Doc();


static PyObject *
PyvtkArrayExtentsList_GetCount(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "GetCount");
  void *vp = ap.GetSelfPointer(self);
  vtkArrayExtentsList *op = static_cast<vtkArrayExtentsList *>(vp);

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkIdType tempr = op->GetCount();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkArrayExtentsList_SetCount(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "SetCount");
  void *vp = ap.GetSelfPointer(self);
  vtkArrayExtentsList *op = static_cast<vtkArrayExtentsList *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    op->SetCount(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkArrayExtentsList_Methods[] = {
  {(char*)"GetCount", PyvtkArrayExtentsList_GetCount, METH_VARARGS,
   (char*)"V.GetCount() -> int\nC++: vtkIdType GetCount()\n\nReturns the number of slices stored in this collection.\n"},
  {(char*)"SetCount", PyvtkArrayExtentsList_SetCount, METH_VARARGS,
   (char*)"V.SetCount(int)\nC++: void SetCount(vtkIdType count)\n\nSets the number of extents stored in this collection.  Note: all\nextents will be empty after calling SetCount(), use operator[] to\nassign extents to each item in the collection.\n"},
  {NULL, NULL, 0, NULL}
};

#ifndef DECLARED_PyvtkArrayExtentsList_Type
extern VTK_PYTHON_EXPORT PyTypeObject PyvtkArrayExtentsList_Type;
#define DECLARED_PyvtkArrayExtentsList_Type
#endif


static PyObject *
PyvtkArrayExtentsList_vtkArrayExtentsList_s1(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkArrayExtentsList");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkArrayExtentsList *op = new vtkArrayExtentsList();

    result = PyVTKSpecialObject_New("vtkArrayExtentsList", op);
    }

  return result;
}

static PyObject *
PyvtkArrayExtentsList_vtkArrayExtentsList_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkArrayExtentsList");

  vtkArrayExtents *temp0 = NULL;
  PyObject *pobj0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkArrayExtents"))
    {
    vtkArrayExtentsList *op = new vtkArrayExtentsList(*temp0);

    result = PyVTKSpecialObject_New("vtkArrayExtentsList", op);
    }

  Py_XDECREF(pobj0);

  return result;
}

static PyObject *
PyvtkArrayExtentsList_vtkArrayExtentsList_s3(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkArrayExtentsList");

  vtkArrayExtents *temp0 = NULL;
  PyObject *pobj0 = NULL;
  vtkArrayExtents *temp1 = NULL;
  PyObject *pobj1 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(2) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkArrayExtents") &&
      ap.GetSpecialObject(temp1, pobj1, "vtkArrayExtents"))
    {
    vtkArrayExtentsList *op = new vtkArrayExtentsList(*temp0, *temp1);

    result = PyVTKSpecialObject_New("vtkArrayExtentsList", op);
    }

  Py_XDECREF(pobj0);
  Py_XDECREF(pobj1);

  return result;
}

static PyObject *
PyvtkArrayExtentsList_vtkArrayExtentsList_s4(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkArrayExtentsList");

  vtkArrayExtents *temp0 = NULL;
  PyObject *pobj0 = NULL;
  vtkArrayExtents *temp1 = NULL;
  PyObject *pobj1 = NULL;
  vtkArrayExtents *temp2 = NULL;
  PyObject *pobj2 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(3) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkArrayExtents") &&
      ap.GetSpecialObject(temp1, pobj1, "vtkArrayExtents") &&
      ap.GetSpecialObject(temp2, pobj2, "vtkArrayExtents"))
    {
    vtkArrayExtentsList *op = new vtkArrayExtentsList(*temp0, *temp1, *temp2);

    result = PyVTKSpecialObject_New("vtkArrayExtentsList", op);
    }

  Py_XDECREF(pobj0);
  Py_XDECREF(pobj1);
  Py_XDECREF(pobj2);

  return result;
}

static PyObject *
PyvtkArrayExtentsList_vtkArrayExtentsList_s5(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkArrayExtentsList");

  vtkArrayExtents *temp0 = NULL;
  PyObject *pobj0 = NULL;
  vtkArrayExtents *temp1 = NULL;
  PyObject *pobj1 = NULL;
  vtkArrayExtents *temp2 = NULL;
  PyObject *pobj2 = NULL;
  vtkArrayExtents *temp3 = NULL;
  PyObject *pobj3 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(4) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkArrayExtents") &&
      ap.GetSpecialObject(temp1, pobj1, "vtkArrayExtents") &&
      ap.GetSpecialObject(temp2, pobj2, "vtkArrayExtents") &&
      ap.GetSpecialObject(temp3, pobj3, "vtkArrayExtents"))
    {
    vtkArrayExtentsList *op = new vtkArrayExtentsList(*temp0, *temp1, *temp2, *temp3);

    result = PyVTKSpecialObject_New("vtkArrayExtentsList", op);
    }

  Py_XDECREF(pobj0);
  Py_XDECREF(pobj1);
  Py_XDECREF(pobj2);
  Py_XDECREF(pobj3);

  return result;
}

static PyObject *
PyvtkArrayExtentsList_vtkArrayExtentsList_s6(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkArrayExtentsList");

  vtkArrayExtentsList *temp0 = NULL;
  PyObject *pobj0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkArrayExtentsList"))
    {
    vtkArrayExtentsList *op = new vtkArrayExtentsList(*temp0);

    result = PyVTKSpecialObject_New("vtkArrayExtentsList", op);
    }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkArrayExtentsList_vtkArrayExtentsList_Methods[] = {
  {NULL, PyvtkArrayExtentsList_vtkArrayExtentsList_s2, METH_VARARGS,
   (char*)"O &vtkArrayExtents"},
  {NULL, PyvtkArrayExtentsList_vtkArrayExtentsList_s6, METH_VARARGS,
   (char*)"O &vtkArrayExtentsList"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkArrayExtentsList_vtkArrayExtentsList(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkArrayExtentsList_vtkArrayExtentsList_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
    {
    case 0:
      return PyvtkArrayExtentsList_vtkArrayExtentsList_s1(self, args);
    case 2:
      return PyvtkArrayExtentsList_vtkArrayExtentsList_s3(self, args);
    case 3:
      return PyvtkArrayExtentsList_vtkArrayExtentsList_s4(self, args);
    case 4:
      return PyvtkArrayExtentsList_vtkArrayExtentsList_s5(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "vtkArrayExtentsList");
  return NULL;
}


static PyMethodDef PyvtkArrayExtentsList_NewMethod = \
{ (char*)"vtkArrayExtentsList", PyvtkArrayExtentsList_vtkArrayExtentsList, 1,
  (char*)"" };

#if PY_VERSION_HEX >= 0x02020000
static PyObject *
PyvtkArrayExtentsList_New(PyTypeObject *, PyObject *args, PyObject *kwds)
{
  if (kwds && PyDict_Size(kwds))
    {
    PyErr_SetString(PyExc_TypeError,
                    "this function takes no keyword arguments");
    return NULL;
    }

  return PyvtkArrayExtentsList_vtkArrayExtentsList(NULL, args);
}
#endif

static void PyvtkArrayExtentsList_Delete(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  if (obj->vtk_ptr)
    {
    delete static_cast<vtkArrayExtentsList *>(obj->vtk_ptr);
    }
#if PY_MAJOR_VERSION >= 2
  PyObject_Del(self);
#else
  PyMem_DEL(self);
#endif
}

Py_ssize_t PyvtkArrayExtentsList_SequenceSize(PyObject *self)
{
  void *vp = vtkPythonArgs::GetSelfPointer(self);
  vtkArrayExtentsList *op = static_cast<vtkArrayExtentsList *>(vp);

  return static_cast<Py_ssize_t>(op->GetCount());
}

PyObject *PyvtkArrayExtentsList_SequenceItem(PyObject *self, Py_ssize_t i)
{
  void *vp = vtkPythonArgs::GetSelfPointer(self);
  vtkArrayExtentsList *op = static_cast<vtkArrayExtentsList *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  temp0 = static_cast<vtkIdType>(i);

  if (temp0 < 0 || temp0 >= op->GetCount())
    {
    PyErr_SetString(PyExc_IndexError, "index out of range");
    }
  else
    {
    const vtkArrayExtents *tempr = &(*op)[temp0];

    if (PyErr_Occurred() == NULL)
      {
      result = vtkPythonArgs::BuildSpecialObject(tempr, "vtkArrayExtents");
      }
    }

  return result;
}

int PyvtkArrayExtentsList_SequenceSetItem(
  PyObject *self, Py_ssize_t i, PyObject *arg1)
{
  void *vp = vtkPythonArgs::GetSelfPointer(self);
  vtkArrayExtentsList *op = static_cast<vtkArrayExtentsList *>(vp);

  vtkIdType temp0;
  vtkArrayExtents *temp1 = NULL;
  int result = -1;

  temp0 = static_cast<vtkIdType>(i);

  if (temp0 < 0 || temp0 >= op->GetCount())
    {
    PyErr_SetString(PyExc_IndexError, "index out of range");
    }
  else if (vtkPythonArgs::GetSpecialObject(arg1, temp1, "vtkArrayExtents"))
    {
    (*op)[temp0] = *temp1;

    if (PyErr_Occurred() == NULL)
      {
      result = 0;
      }
    }

  return result;
}

static PySequenceMethods PyvtkArrayExtentsList_AsSequence = {
  PyvtkArrayExtentsList_SequenceSize, // sq_length
  0, // sq_concat
  0, // sq_repeat
  PyvtkArrayExtentsList_SequenceItem, // sq_item
  0, // sq_slice
  PyvtkArrayExtentsList_SequenceSetItem, // sq_ass_item
  0, // sq_ass_slice
  0, // sq_contains
#if PY_VERSION_HEX >= 0x2000000
  0, // sq_inplace_concat
  0, // sq_inplace_repeat
#endif
};

static long PyvtkArrayExtentsList_Hash(PyObject *self)
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

PyTypeObject PyvtkArrayExtentsList_Type = {
  PyObject_HEAD_INIT(&PyType_Type)
  0,
  (char*)"vtkArrayExtentsList", // tp_name
  sizeof(PyVTKSpecialObject), // tp_basicsize
  0, // tp_itemsize
  PyvtkArrayExtentsList_Delete, // tp_dealloc
  0, // tp_print
  0, // tp_getattr
  0, // tp_setattr
  0, // tp_compare
  PyVTKSpecialObject_Repr, // tp_repr
  0, // tp_as_number
  &PyvtkArrayExtentsList_AsSequence, // tp_as_sequence
  0, // tp_as_mapping
  PyvtkArrayExtentsList_Hash, // tp_hash
  0, // tp_call
  PyVTKSpecialObject_SequenceString, // tp_str
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
  PyvtkArrayExtentsList_Methods, // tp_methods
  0, // tp_members
  0, // tp_getset
  0, // tp_base
  0, // tp_dict
  0, // tp_descr_get
  0, // tp_descr_set
  0, // tp_dictoffset
  0, // tp_init
  0, // tp_alloc
  PyvtkArrayExtentsList_New, // tp_new
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

static void *PyvtkArrayExtentsList_CCopy(const void *obj)
{
  if (obj)
    {
    return new vtkArrayExtentsList(*static_cast<const vtkArrayExtentsList*>(obj));
    }
  return 0;
}

static PyObject *PyvtkArrayExtentsList_TypeNew(const char *)
{
  PyObject *cls = PyVTKSpecialType_New(
    &PyvtkArrayExtentsList_Type,
    PyvtkArrayExtentsList_Methods,
    PyvtkArrayExtentsList_vtkArrayExtentsList_Methods,
    &PyvtkArrayExtentsList_NewMethod,
    PyvtkArrayExtentsList_Doc(), &PyvtkArrayExtentsList_CCopy);

  return cls;
}

const char **PyvtkArrayExtentsList_Doc()
{
  static const char *docstring[] = {
    "vtkArrayExtentsList - Stores a collection of vtkArrayExtents objects.\n\n",
    "vtkArrayExtentsList provides storage for a collection of\nvtkArrayExtents instances.  Constructors are provided for creating\ncollections containing one, two, three, or four slices.  To work with\nlarger numbers of slices, use the default constructor, the SetCount()\nmethod, and operator[].\n\nvtkArrayExtentsList is most commonly used with the vtkInterpolate()\nfunction, which is used to computed weighte",
    "d sums of vtkArray slices.\n\nSee Also:\n\nvtkArray, vtkExtents\n\nThanks:\n\nDeveloped by Timothy M. Shead (tshead@sandia.gov) at Sandia National\nLaboratories.\n\n",
    "V.vtkArrayExtentsList()\nC++: vtkArrayExtentsList()\nV.vtkArrayExtentsList(vtkArrayExtents)\nC++: vtkArrayExtentsList(const vtkArrayExtents &i)\nV.vtkArrayExtentsList(vtkArrayExtents, vtkArrayExtents)\nC++: vtkArrayExtentsList(const vtkArrayExtents &i,\n    const vtkArrayExtents &j)\nV.vtkArrayExtentsList(vtkArrayExtents, vtkArrayExtents,\n    vtkArrayExtents)\nC++: vtkArrayExtentsList(const vtkArrayExtents &i,\n    const vtkArrayExtents &j, const vtkArrayExtents &k)\nV.vtkArrayExtentsList(vtkArrayExtents, vtkArrayExtents,\n    vtkArrayExtents, vtkArrayExtents)\nC++: vtkArrayExtentsList(const vtkArrayExtents &i,\n    const vtkArrayExtents &j, const vtkArrayExtents &k,\n    const vtkArrayExtents &l)\nV.vtkArrayExtentsList(vtkArrayExtentsList)\nC++: vtkArrayExtentsList(const &vtkArrayExtentsList)\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkArrayExtentsList(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyvtkArrayExtentsList_TypeNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkArrayExtentsList", o) != 0)
    {
    Py_DECREF(o);
    }

}

