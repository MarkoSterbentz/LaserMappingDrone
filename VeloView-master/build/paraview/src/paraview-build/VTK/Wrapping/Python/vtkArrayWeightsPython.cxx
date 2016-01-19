// python wrapper for vtkArrayWeights
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkArrayWeights.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkArrayWeights(PyObject *, const char *); }

static const char **PyvtkArrayWeights_Doc();


static PyObject *
PyvtkArrayWeights_GetCount(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "GetCount");
  void *vp = ap.GetSelfPointer(self);
  vtkArrayWeights *op = static_cast<vtkArrayWeights *>(vp);

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
PyvtkArrayWeights_SetCount(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "SetCount");
  void *vp = ap.GetSelfPointer(self);
  vtkArrayWeights *op = static_cast<vtkArrayWeights *>(vp);

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

static PyMethodDef PyvtkArrayWeights_Methods[] = {
  {(char*)"GetCount", PyvtkArrayWeights_GetCount, METH_VARARGS,
   (char*)"V.GetCount() -> int\nC++: vtkIdType GetCount()\n\nReturns the number of weights stored in this container.\n"},
  {(char*)"SetCount", PyvtkArrayWeights_SetCount, METH_VARARGS,
   (char*)"V.SetCount(int)\nC++: void SetCount(vtkIdType count)\n\nSets the number of weights stored in this container.  Note that\neach weight will be reset to 0.0 after calling SetCount(), use\noperator[] to assign the desired value for each weight.\n"},
  {NULL, NULL, 0, NULL}
};

#ifndef DECLARED_PyvtkArrayWeights_Type
extern VTK_PYTHON_EXPORT PyTypeObject PyvtkArrayWeights_Type;
#define DECLARED_PyvtkArrayWeights_Type
#endif


static PyObject *
PyvtkArrayWeights_vtkArrayWeights_s1(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkArrayWeights");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkArrayWeights *op = new vtkArrayWeights();

    result = PyVTKSpecialObject_New("vtkArrayWeights", op);
    }

  return result;
}

static PyObject *
PyvtkArrayWeights_vtkArrayWeights_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkArrayWeights");

  vtkArrayWeights *temp0 = NULL;
  PyObject *pobj0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkArrayWeights"))
    {
    vtkArrayWeights *op = new vtkArrayWeights(*temp0);

    result = PyVTKSpecialObject_New("vtkArrayWeights", op);
    }

  Py_XDECREF(pobj0);

  return result;
}

static PyObject *
PyvtkArrayWeights_vtkArrayWeights_s3(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkArrayWeights");

  double temp0;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkArrayWeights *op = new vtkArrayWeights(temp0);

    result = PyVTKSpecialObject_New("vtkArrayWeights", op);
    }

  return result;
}

static PyObject *
PyvtkArrayWeights_vtkArrayWeights_s4(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkArrayWeights");

  double temp0;
  double temp1;
  PyObject *result = NULL;

  if (ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    vtkArrayWeights *op = new vtkArrayWeights(temp0, temp1);

    result = PyVTKSpecialObject_New("vtkArrayWeights", op);
    }

  return result;
}

static PyObject *
PyvtkArrayWeights_vtkArrayWeights_s5(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkArrayWeights");

  double temp0;
  double temp1;
  double temp2;
  PyObject *result = NULL;

  if (ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    vtkArrayWeights *op = new vtkArrayWeights(temp0, temp1, temp2);

    result = PyVTKSpecialObject_New("vtkArrayWeights", op);
    }

  return result;
}

static PyObject *
PyvtkArrayWeights_vtkArrayWeights_s6(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkArrayWeights");

  double temp0;
  double temp1;
  double temp2;
  double temp3;
  PyObject *result = NULL;

  if (ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
    {
    vtkArrayWeights *op = new vtkArrayWeights(temp0, temp1, temp2, temp3);

    result = PyVTKSpecialObject_New("vtkArrayWeights", op);
    }

  return result;
}

static PyMethodDef PyvtkArrayWeights_vtkArrayWeights_Methods[] = {
  {NULL, PyvtkArrayWeights_vtkArrayWeights_s2, METH_VARARGS,
   (char*)"O &vtkArrayWeights"},
  {NULL, PyvtkArrayWeights_vtkArrayWeights_s3, METH_VARARGS,
   (char*)"d"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkArrayWeights_vtkArrayWeights(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkArrayWeights_vtkArrayWeights_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
    {
    case 0:
      return PyvtkArrayWeights_vtkArrayWeights_s1(self, args);
    case 2:
      return PyvtkArrayWeights_vtkArrayWeights_s4(self, args);
    case 3:
      return PyvtkArrayWeights_vtkArrayWeights_s5(self, args);
    case 4:
      return PyvtkArrayWeights_vtkArrayWeights_s6(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "vtkArrayWeights");
  return NULL;
}


static PyMethodDef PyvtkArrayWeights_NewMethod = \
{ (char*)"vtkArrayWeights", PyvtkArrayWeights_vtkArrayWeights, 1,
  (char*)"" };

#if PY_VERSION_HEX >= 0x02020000
static PyObject *
PyvtkArrayWeights_New(PyTypeObject *, PyObject *args, PyObject *kwds)
{
  if (kwds && PyDict_Size(kwds))
    {
    PyErr_SetString(PyExc_TypeError,
                    "this function takes no keyword arguments");
    return NULL;
    }

  return PyvtkArrayWeights_vtkArrayWeights(NULL, args);
}
#endif

static void PyvtkArrayWeights_Delete(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  if (obj->vtk_ptr)
    {
    delete static_cast<vtkArrayWeights *>(obj->vtk_ptr);
    }
#if PY_MAJOR_VERSION >= 2
  PyObject_Del(self);
#else
  PyMem_DEL(self);
#endif
}

Py_ssize_t PyvtkArrayWeights_SequenceSize(PyObject *self)
{
  void *vp = vtkPythonArgs::GetSelfPointer(self);
  vtkArrayWeights *op = static_cast<vtkArrayWeights *>(vp);

  return static_cast<Py_ssize_t>(op->GetCount());
}

PyObject *PyvtkArrayWeights_SequenceItem(PyObject *self, Py_ssize_t i)
{
  void *vp = vtkPythonArgs::GetSelfPointer(self);
  vtkArrayWeights *op = static_cast<vtkArrayWeights *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  temp0 = static_cast<vtkIdType>(i);

  if (temp0 < 0 || temp0 >= op->GetCount())
    {
    PyErr_SetString(PyExc_IndexError, "index out of range");
    }
  else
    {
    const double *tempr = &(*op)[temp0];

    if (PyErr_Occurred() == NULL)
      {
      result = vtkPythonArgs::BuildValue(*tempr);
      }
    }

  return result;
}

int PyvtkArrayWeights_SequenceSetItem(
  PyObject *self, Py_ssize_t i, PyObject *arg1)
{
  void *vp = vtkPythonArgs::GetSelfPointer(self);
  vtkArrayWeights *op = static_cast<vtkArrayWeights *>(vp);

  vtkIdType temp0;
  double temp1;
  int result = -1;

  temp0 = static_cast<vtkIdType>(i);

  if (temp0 < 0 || temp0 >= op->GetCount())
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

static PySequenceMethods PyvtkArrayWeights_AsSequence = {
  PyvtkArrayWeights_SequenceSize, // sq_length
  0, // sq_concat
  0, // sq_repeat
  PyvtkArrayWeights_SequenceItem, // sq_item
  0, // sq_slice
  PyvtkArrayWeights_SequenceSetItem, // sq_ass_item
  0, // sq_ass_slice
  0, // sq_contains
#if PY_VERSION_HEX >= 0x2000000
  0, // sq_inplace_concat
  0, // sq_inplace_repeat
#endif
};

static long PyvtkArrayWeights_Hash(PyObject *self)
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

PyTypeObject PyvtkArrayWeights_Type = {
  PyObject_HEAD_INIT(&PyType_Type)
  0,
  (char*)"vtkArrayWeights", // tp_name
  sizeof(PyVTKSpecialObject), // tp_basicsize
  0, // tp_itemsize
  PyvtkArrayWeights_Delete, // tp_dealloc
  0, // tp_print
  0, // tp_getattr
  0, // tp_setattr
  0, // tp_compare
  PyVTKSpecialObject_Repr, // tp_repr
  0, // tp_as_number
  &PyvtkArrayWeights_AsSequence, // tp_as_sequence
  0, // tp_as_mapping
  PyvtkArrayWeights_Hash, // tp_hash
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
  PyvtkArrayWeights_Methods, // tp_methods
  0, // tp_members
  0, // tp_getset
  0, // tp_base
  0, // tp_dict
  0, // tp_descr_get
  0, // tp_descr_set
  0, // tp_dictoffset
  0, // tp_init
  0, // tp_alloc
  PyvtkArrayWeights_New, // tp_new
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

static void *PyvtkArrayWeights_CCopy(const void *obj)
{
  if (obj)
    {
    return new vtkArrayWeights(*static_cast<const vtkArrayWeights*>(obj));
    }
  return 0;
}

static PyObject *PyvtkArrayWeights_TypeNew(const char *)
{
  PyObject *cls = PyVTKSpecialType_New(
    &PyvtkArrayWeights_Type,
    PyvtkArrayWeights_Methods,
    PyvtkArrayWeights_vtkArrayWeights_Methods,
    &PyvtkArrayWeights_NewMethod,
    PyvtkArrayWeights_Doc(), &PyvtkArrayWeights_CCopy);

  return cls;
}

const char **PyvtkArrayWeights_Doc()
{
  static const char *docstring[] = {
    "vtkArrayWeights - Stores a collection of weighting factors.\n\n",
    "vtkArrayWeights provides storage for a collection of weights to be\nused when merging / interpolating N-way arrays.  Convenience\nconstructors are provided for working with one, two, three, and four\nweighting factors.  For arbitrary collections of weights, use\nSetCount() and operator[] to assign values.\n\nvtkArrayWeights is most commonly used with the vtkInterpolate()\nfunction to compute weighted sum",
    "s of vtkArray objects.\n\nSee Also:\n\nvtkArray, vtkArraySlices\n\nThanks:\n\nDeveloped by Timothy M. Shead (tshead@sandia.gov) at Sandia National\nLaboratories.\n\n",
    "V.vtkArrayWeights()\nC++: vtkArrayWeights()\nV.vtkArrayWeights(vtkArrayWeights)\nC++: vtkArrayWeights(const vtkArrayWeights &other)\nV.vtkArrayWeights(float)\nC++: vtkArrayWeights(double i)\nV.vtkArrayWeights(float, float)\nC++: vtkArrayWeights(double i, double j)\nV.vtkArrayWeights(float, float, float)\nC++: vtkArrayWeights(double i, double j, double k)\nV.vtkArrayWeights(float, float, float, float)\nC++: vtkArrayWeights(double i, double j, double k, double l)\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkArrayWeights(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyvtkArrayWeights_TypeNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkArrayWeights", o) != 0)
    {
    Py_DECREF(o);
    }

}

