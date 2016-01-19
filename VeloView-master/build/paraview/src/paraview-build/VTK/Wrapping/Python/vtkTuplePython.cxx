// python wrapper for vtkTuple
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkTuple.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkTuple(PyObject *, const char *); }

static const char **PyvtkTuple_IdLi4EE_Doc();


static PyObject *
PyvtkTuple_IdLi4EE_GetSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "GetSize");
  void *vp = ap.GetSelfPointer(self);
  vtkTuple<double, 4> *op = static_cast<vtkTuple<double, 4> *>(vp);

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    int tempr = op->GetSize();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTuple_IdLi4EE_GetData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "GetData");
  void *vp = ap.GetSelfPointer(self);
  vtkTuple<double, 4> *op = static_cast<vtkTuple<double, 4> *>(vp);

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    double *tempr = op->GetData();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTuple_IdLi4EE_Compare(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "Compare");
  void *vp = ap.GetSelfPointer(self);
  vtkTuple<double, 4> *op = static_cast<vtkTuple<double, 4> *>(vp);

  vtkTuple<double, 4> *temp0 = NULL;
  PyObject *pobj0 = NULL;
  double temp1;
  PyObject *result = NULL;

  if (ap.CheckArgCount(2) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkTuple_IdLi4EE") &&
      ap.GetValue(temp1))
    {
    bool tempr = op->Compare(*temp0, temp1);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkTuple_IdLi4EE_Methods[] = {
  {(char*)"GetSize", PyvtkTuple_IdLi4EE_GetSize, METH_VARARGS,
   (char*)"V.GetSize() -> int\nC++: int GetSize()\n\nGet the size of the tuple.\n"},
  {(char*)"GetData", PyvtkTuple_IdLi4EE_GetData, METH_VARARGS,
   (char*)"V.GetData() -> (float, ...)\nC++: double *GetData()\n\nGet a pointer to the underlying data of the tuple.\n"},
  {(char*)"Compare", PyvtkTuple_IdLi4EE_Compare, METH_VARARGS,
   (char*)"V.Compare(vtkTuple<double, 4>, float) -> bool\nC++: bool Compare(const vtkTuple<double, 4> &other,\n    const double &tol)\n\nEquality operator with a tolerance to allow fuzzy comparisons.\n"},
  {NULL, NULL, 0, NULL}
};

#ifndef DECLARED_PyvtkTuple_IdLi4EE_Type
extern VTK_PYTHON_EXPORT PyTypeObject PyvtkTuple_IdLi4EE_Type;
#define DECLARED_PyvtkTuple_IdLi4EE_Type
#endif


static PyObject *
PyvtkTuple_IdLi4EE_vtkTuple_s1(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkTuple");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkTuple<double, 4> *op = new vtkTuple<double, 4>();
    (*op)[0] = 0;
    (*op)[1] = 0;
    (*op)[2] = 0;
    (*op)[3] = 0;

    result = PyVTKSpecialObject_New("vtkTuple_IdLi4EE", op);
    }

  return result;
}

static PyObject *
PyvtkTuple_IdLi4EE_vtkTuple_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkTuple");

  double temp0;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkTuple<double, 4> *op = new vtkTuple<double, 4>(temp0);

    result = PyVTKSpecialObject_New("vtkTuple_IdLi4EE", op);
    }

  return result;
}

static PyObject *
PyvtkTuple_IdLi4EE_vtkTuple_s3(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkTuple");

  double temp0[4];
  const int size0 = 4;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    vtkTuple<double, 4> *op = new vtkTuple<double, 4>(temp0);

    result = PyVTKSpecialObject_New("vtkTuple_IdLi4EE", op);
    }

  return result;
}

static PyObject *
PyvtkTuple_IdLi4EE_vtkTuple_s4(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkTuple");

  vtkTuple<double, 4> *temp0 = NULL;
  PyObject *pobj0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkTuple_IdLi4EE"))
    {
    vtkTuple<double, 4> *op = new vtkTuple<double, 4>(*temp0);

    result = PyVTKSpecialObject_New("vtkTuple_IdLi4EE", op);
    }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkTuple_IdLi4EE_vtkTuple_Methods[] = {
  {NULL, PyvtkTuple_IdLi4EE_vtkTuple_s2, METH_VARARGS,
   (char*)"-d"},
  {NULL, PyvtkTuple_IdLi4EE_vtkTuple_s3, METH_VARARGS,
   (char*)"-O *d"},
  {NULL, PyvtkTuple_IdLi4EE_vtkTuple_s4, METH_VARARGS,
   (char*)"O &vtkTuple_IdLi4EE"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkTuple_IdLi4EE_vtkTuple(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkTuple_IdLi4EE_vtkTuple_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
    {
    case 0:
      return PyvtkTuple_IdLi4EE_vtkTuple_s1(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "vtkTuple");
  return NULL;
}


static PyMethodDef PyvtkTuple_IdLi4EE_NewMethod = \
{ (char*)"vtkTuple_IdLi4EE", PyvtkTuple_IdLi4EE_vtkTuple, 1,
  (char*)"" };

#if PY_VERSION_HEX >= 0x02020000
static PyObject *
PyvtkTuple_IdLi4EE_New(PyTypeObject *, PyObject *args, PyObject *kwds)
{
  if (kwds && PyDict_Size(kwds))
    {
    PyErr_SetString(PyExc_TypeError,
                    "this function takes no keyword arguments");
    return NULL;
    }

  return PyvtkTuple_IdLi4EE_vtkTuple(NULL, args);
}
#endif

static void PyvtkTuple_IdLi4EE_Delete(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  if (obj->vtk_ptr)
    {
    delete static_cast<vtkTuple<double, 4> *>(obj->vtk_ptr);
    }
#if PY_MAJOR_VERSION >= 2
  PyObject_Del(self);
#else
  PyMem_DEL(self);
#endif
}

Py_ssize_t PyvtkTuple_IdLi4EE_SequenceSize(PyObject *self)
{
  void *vp = vtkPythonArgs::GetSelfPointer(self);
  vtkTuple<double, 4> *op = static_cast<vtkTuple<double, 4> *>(vp);

  return static_cast<Py_ssize_t>(op->GetSize());
}

PyObject *PyvtkTuple_IdLi4EE_SequenceItem(PyObject *self, Py_ssize_t i)
{
  void *vp = vtkPythonArgs::GetSelfPointer(self);
  vtkTuple<double, 4> *op = static_cast<vtkTuple<double, 4> *>(vp);

  int temp0;
  PyObject *result = NULL;

  temp0 = static_cast<int>(i);

  if (temp0 < 0 || temp0 >= op->GetSize())
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

int PyvtkTuple_IdLi4EE_SequenceSetItem(
  PyObject *self, Py_ssize_t i, PyObject *arg1)
{
  void *vp = vtkPythonArgs::GetSelfPointer(self);
  vtkTuple<double, 4> *op = static_cast<vtkTuple<double, 4> *>(vp);

  int temp0;
  double temp1;
  int result = -1;

  temp0 = static_cast<int>(i);

  if (temp0 < 0 || temp0 >= op->GetSize())
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

static PySequenceMethods PyvtkTuple_IdLi4EE_AsSequence = {
  PyvtkTuple_IdLi4EE_SequenceSize, // sq_length
  0, // sq_concat
  0, // sq_repeat
  PyvtkTuple_IdLi4EE_SequenceItem, // sq_item
  0, // sq_slice
  PyvtkTuple_IdLi4EE_SequenceSetItem, // sq_ass_item
  0, // sq_ass_slice
  0, // sq_contains
#if PY_VERSION_HEX >= 0x2000000
  0, // sq_inplace_concat
  0, // sq_inplace_repeat
#endif
};

static long PyvtkTuple_IdLi4EE_Hash(PyObject *self)
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

PyTypeObject PyvtkTuple_IdLi4EE_Type = {
  PyObject_HEAD_INIT(&PyType_Type)
  0,
  (char*)"vtkTuple_IdLi4EE", // tp_name
  sizeof(PyVTKSpecialObject), // tp_basicsize
  0, // tp_itemsize
  PyvtkTuple_IdLi4EE_Delete, // tp_dealloc
  0, // tp_print
  0, // tp_getattr
  0, // tp_setattr
  0, // tp_compare
  PyVTKSpecialObject_Repr, // tp_repr
  0, // tp_as_number
  &PyvtkTuple_IdLi4EE_AsSequence, // tp_as_sequence
  0, // tp_as_mapping
  PyvtkTuple_IdLi4EE_Hash, // tp_hash
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
  PyvtkTuple_IdLi4EE_Methods, // tp_methods
  0, // tp_members
  0, // tp_getset
  0, // tp_base
  0, // tp_dict
  0, // tp_descr_get
  0, // tp_descr_set
  0, // tp_dictoffset
  0, // tp_init
  0, // tp_alloc
  PyvtkTuple_IdLi4EE_New, // tp_new
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

static void *PyvtkTuple_IdLi4EE_CCopy(const void *obj)
{
  if (obj)
    {
    return new vtkTuple<double, 4>(*static_cast<const vtkTuple<double, 4>*>(obj));
    }
  return 0;
}

static PyObject *PyvtkTuple_IdLi4EE_TypeNew(const char *)
{
  PyObject *cls = PyVTKSpecialType_New(
    &PyvtkTuple_IdLi4EE_Type,
    PyvtkTuple_IdLi4EE_Methods,
    PyvtkTuple_IdLi4EE_vtkTuple_Methods,
    &PyvtkTuple_IdLi4EE_NewMethod,
    PyvtkTuple_IdLi4EE_Doc(), &PyvtkTuple_IdLi4EE_CCopy);

  return cls;
}

const char **PyvtkTuple_IdLi4EE_Doc()
{
  static const char *docstring[] = {
    "vtkTuple - templated base type for containers of constant size.\n\n",
    "This class is a templated data type for storing and manipulating\ntuples.\n\n",
    "V.vtkTuple()\nC++: vtkTuple()\nV.vtkTuple(float)\nC++: explicit vtkTuple(const double &scalar)\nV.vtkTuple((float, float, float, float))\nC++: explicit vtkTuple(const double *init)\nV.vtkTuple(vtkTuple<double, 4>)\nC++: vtkTuple(const &vtkTuple<double, 4>)\n",
    NULL
  };

  return docstring;
}


static const char **PyvtkTuple_IfLi4EE_Doc();


static PyObject *
PyvtkTuple_IfLi4EE_GetSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "GetSize");
  void *vp = ap.GetSelfPointer(self);
  vtkTuple<float, 4> *op = static_cast<vtkTuple<float, 4> *>(vp);

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    int tempr = op->GetSize();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTuple_IfLi4EE_GetData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "GetData");
  void *vp = ap.GetSelfPointer(self);
  vtkTuple<float, 4> *op = static_cast<vtkTuple<float, 4> *>(vp);

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    float *tempr = op->GetData();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTuple_IfLi4EE_Compare(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "Compare");
  void *vp = ap.GetSelfPointer(self);
  vtkTuple<float, 4> *op = static_cast<vtkTuple<float, 4> *>(vp);

  vtkTuple<float, 4> *temp0 = NULL;
  PyObject *pobj0 = NULL;
  float temp1;
  PyObject *result = NULL;

  if (ap.CheckArgCount(2) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkTuple_IfLi4EE") &&
      ap.GetValue(temp1))
    {
    bool tempr = op->Compare(*temp0, temp1);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkTuple_IfLi4EE_Methods[] = {
  {(char*)"GetSize", PyvtkTuple_IfLi4EE_GetSize, METH_VARARGS,
   (char*)"V.GetSize() -> int\nC++: int GetSize()\n\nGet the size of the tuple.\n"},
  {(char*)"GetData", PyvtkTuple_IfLi4EE_GetData, METH_VARARGS,
   (char*)"V.GetData() -> (float, ...)\nC++: float *GetData()\n\nGet a pointer to the underlying data of the tuple.\n"},
  {(char*)"Compare", PyvtkTuple_IfLi4EE_Compare, METH_VARARGS,
   (char*)"V.Compare(vtkTuple<float, 4>, float) -> bool\nC++: bool Compare(const vtkTuple<float, 4> &other,\n    const float &tol)\n\nEquality operator with a tolerance to allow fuzzy comparisons.\n"},
  {NULL, NULL, 0, NULL}
};

#ifndef DECLARED_PyvtkTuple_IfLi4EE_Type
extern VTK_PYTHON_EXPORT PyTypeObject PyvtkTuple_IfLi4EE_Type;
#define DECLARED_PyvtkTuple_IfLi4EE_Type
#endif


static PyObject *
PyvtkTuple_IfLi4EE_vtkTuple_s1(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkTuple");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkTuple<float, 4> *op = new vtkTuple<float, 4>();
    (*op)[0] = 0;
    (*op)[1] = 0;
    (*op)[2] = 0;
    (*op)[3] = 0;

    result = PyVTKSpecialObject_New("vtkTuple_IfLi4EE", op);
    }

  return result;
}

static PyObject *
PyvtkTuple_IfLi4EE_vtkTuple_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkTuple");

  float temp0;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkTuple<float, 4> *op = new vtkTuple<float, 4>(temp0);

    result = PyVTKSpecialObject_New("vtkTuple_IfLi4EE", op);
    }

  return result;
}

static PyObject *
PyvtkTuple_IfLi4EE_vtkTuple_s3(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkTuple");

  float temp0[4];
  const int size0 = 4;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    vtkTuple<float, 4> *op = new vtkTuple<float, 4>(temp0);

    result = PyVTKSpecialObject_New("vtkTuple_IfLi4EE", op);
    }

  return result;
}

static PyObject *
PyvtkTuple_IfLi4EE_vtkTuple_s4(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkTuple");

  vtkTuple<float, 4> *temp0 = NULL;
  PyObject *pobj0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkTuple_IfLi4EE"))
    {
    vtkTuple<float, 4> *op = new vtkTuple<float, 4>(*temp0);

    result = PyVTKSpecialObject_New("vtkTuple_IfLi4EE", op);
    }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkTuple_IfLi4EE_vtkTuple_Methods[] = {
  {NULL, PyvtkTuple_IfLi4EE_vtkTuple_s2, METH_VARARGS,
   (char*)"-f"},
  {NULL, PyvtkTuple_IfLi4EE_vtkTuple_s3, METH_VARARGS,
   (char*)"-O *f"},
  {NULL, PyvtkTuple_IfLi4EE_vtkTuple_s4, METH_VARARGS,
   (char*)"O &vtkTuple_IfLi4EE"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkTuple_IfLi4EE_vtkTuple(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkTuple_IfLi4EE_vtkTuple_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
    {
    case 0:
      return PyvtkTuple_IfLi4EE_vtkTuple_s1(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "vtkTuple");
  return NULL;
}


static PyMethodDef PyvtkTuple_IfLi4EE_NewMethod = \
{ (char*)"vtkTuple_IfLi4EE", PyvtkTuple_IfLi4EE_vtkTuple, 1,
  (char*)"" };

#if PY_VERSION_HEX >= 0x02020000
static PyObject *
PyvtkTuple_IfLi4EE_New(PyTypeObject *, PyObject *args, PyObject *kwds)
{
  if (kwds && PyDict_Size(kwds))
    {
    PyErr_SetString(PyExc_TypeError,
                    "this function takes no keyword arguments");
    return NULL;
    }

  return PyvtkTuple_IfLi4EE_vtkTuple(NULL, args);
}
#endif

static void PyvtkTuple_IfLi4EE_Delete(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  if (obj->vtk_ptr)
    {
    delete static_cast<vtkTuple<float, 4> *>(obj->vtk_ptr);
    }
#if PY_MAJOR_VERSION >= 2
  PyObject_Del(self);
#else
  PyMem_DEL(self);
#endif
}

Py_ssize_t PyvtkTuple_IfLi4EE_SequenceSize(PyObject *self)
{
  void *vp = vtkPythonArgs::GetSelfPointer(self);
  vtkTuple<float, 4> *op = static_cast<vtkTuple<float, 4> *>(vp);

  return static_cast<Py_ssize_t>(op->GetSize());
}

PyObject *PyvtkTuple_IfLi4EE_SequenceItem(PyObject *self, Py_ssize_t i)
{
  void *vp = vtkPythonArgs::GetSelfPointer(self);
  vtkTuple<float, 4> *op = static_cast<vtkTuple<float, 4> *>(vp);

  int temp0;
  PyObject *result = NULL;

  temp0 = static_cast<int>(i);

  if (temp0 < 0 || temp0 >= op->GetSize())
    {
    PyErr_SetString(PyExc_IndexError, "index out of range");
    }
  else
    {
    const float *tempr = &(*op)[temp0];

    if (PyErr_Occurred() == NULL)
      {
      result = vtkPythonArgs::BuildValue(*tempr);
      }
    }

  return result;
}

int PyvtkTuple_IfLi4EE_SequenceSetItem(
  PyObject *self, Py_ssize_t i, PyObject *arg1)
{
  void *vp = vtkPythonArgs::GetSelfPointer(self);
  vtkTuple<float, 4> *op = static_cast<vtkTuple<float, 4> *>(vp);

  int temp0;
  float temp1;
  int result = -1;

  temp0 = static_cast<int>(i);

  if (temp0 < 0 || temp0 >= op->GetSize())
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

static PySequenceMethods PyvtkTuple_IfLi4EE_AsSequence = {
  PyvtkTuple_IfLi4EE_SequenceSize, // sq_length
  0, // sq_concat
  0, // sq_repeat
  PyvtkTuple_IfLi4EE_SequenceItem, // sq_item
  0, // sq_slice
  PyvtkTuple_IfLi4EE_SequenceSetItem, // sq_ass_item
  0, // sq_ass_slice
  0, // sq_contains
#if PY_VERSION_HEX >= 0x2000000
  0, // sq_inplace_concat
  0, // sq_inplace_repeat
#endif
};

static long PyvtkTuple_IfLi4EE_Hash(PyObject *self)
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

PyTypeObject PyvtkTuple_IfLi4EE_Type = {
  PyObject_HEAD_INIT(&PyType_Type)
  0,
  (char*)"vtkTuple_IfLi4EE", // tp_name
  sizeof(PyVTKSpecialObject), // tp_basicsize
  0, // tp_itemsize
  PyvtkTuple_IfLi4EE_Delete, // tp_dealloc
  0, // tp_print
  0, // tp_getattr
  0, // tp_setattr
  0, // tp_compare
  PyVTKSpecialObject_Repr, // tp_repr
  0, // tp_as_number
  &PyvtkTuple_IfLi4EE_AsSequence, // tp_as_sequence
  0, // tp_as_mapping
  PyvtkTuple_IfLi4EE_Hash, // tp_hash
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
  PyvtkTuple_IfLi4EE_Methods, // tp_methods
  0, // tp_members
  0, // tp_getset
  0, // tp_base
  0, // tp_dict
  0, // tp_descr_get
  0, // tp_descr_set
  0, // tp_dictoffset
  0, // tp_init
  0, // tp_alloc
  PyvtkTuple_IfLi4EE_New, // tp_new
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

static void *PyvtkTuple_IfLi4EE_CCopy(const void *obj)
{
  if (obj)
    {
    return new vtkTuple<float, 4>(*static_cast<const vtkTuple<float, 4>*>(obj));
    }
  return 0;
}

static PyObject *PyvtkTuple_IfLi4EE_TypeNew(const char *)
{
  PyObject *cls = PyVTKSpecialType_New(
    &PyvtkTuple_IfLi4EE_Type,
    PyvtkTuple_IfLi4EE_Methods,
    PyvtkTuple_IfLi4EE_vtkTuple_Methods,
    &PyvtkTuple_IfLi4EE_NewMethod,
    PyvtkTuple_IfLi4EE_Doc(), &PyvtkTuple_IfLi4EE_CCopy);

  return cls;
}

const char **PyvtkTuple_IfLi4EE_Doc()
{
  static const char *docstring[] = {
    "vtkTuple - templated base type for containers of constant size.\n\n",
    "This class is a templated data type for storing and manipulating\ntuples.\n\n",
    "V.vtkTuple()\nC++: vtkTuple()\nV.vtkTuple(float)\nC++: explicit vtkTuple(const float &scalar)\nV.vtkTuple((float, float, float, float))\nC++: explicit vtkTuple(const float *init)\nV.vtkTuple(vtkTuple<float, 4>)\nC++: vtkTuple(const &vtkTuple<float, 4>)\n",
    NULL
  };

  return docstring;
}


static const char **PyvtkTuple_IhLi2EE_Doc();


static PyObject *
PyvtkTuple_IhLi2EE_GetSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "GetSize");
  void *vp = ap.GetSelfPointer(self);
  vtkTuple<unsigned char, 2> *op = static_cast<vtkTuple<unsigned char, 2> *>(vp);

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    int tempr = op->GetSize();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTuple_IhLi2EE_GetData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "GetData");
  void *vp = ap.GetSelfPointer(self);
  vtkTuple<unsigned char, 2> *op = static_cast<vtkTuple<unsigned char, 2> *>(vp);

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    unsigned char *tempr = op->GetData();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTuple_IhLi2EE_Compare(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "Compare");
  void *vp = ap.GetSelfPointer(self);
  vtkTuple<unsigned char, 2> *op = static_cast<vtkTuple<unsigned char, 2> *>(vp);

  vtkTuple<unsigned char, 2> *temp0 = NULL;
  PyObject *pobj0 = NULL;
  unsigned char temp1;
  PyObject *result = NULL;

  if (ap.CheckArgCount(2) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkTuple_IhLi2EE") &&
      ap.GetValue(temp1))
    {
    bool tempr = op->Compare(*temp0, temp1);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkTuple_IhLi2EE_Methods[] = {
  {(char*)"GetSize", PyvtkTuple_IhLi2EE_GetSize, METH_VARARGS,
   (char*)"V.GetSize() -> int\nC++: int GetSize()\n\nGet the size of the tuple.\n"},
  {(char*)"GetData", PyvtkTuple_IhLi2EE_GetData, METH_VARARGS,
   (char*)"V.GetData() -> (int, ...)\nC++: unsigned char *GetData()\n\nGet a pointer to the underlying data of the tuple.\n"},
  {(char*)"Compare", PyvtkTuple_IhLi2EE_Compare, METH_VARARGS,
   (char*)"V.Compare(vtkTuple<unsigned char, 2>, int) -> bool\nC++: bool Compare(const vtkTuple<unsigned char, 2> &other,\n    const unsigned char &tol)\n\nEquality operator with a tolerance to allow fuzzy comparisons.\n"},
  {NULL, NULL, 0, NULL}
};

#ifndef DECLARED_PyvtkTuple_IhLi2EE_Type
extern VTK_PYTHON_EXPORT PyTypeObject PyvtkTuple_IhLi2EE_Type;
#define DECLARED_PyvtkTuple_IhLi2EE_Type
#endif


static PyObject *
PyvtkTuple_IhLi2EE_vtkTuple_s1(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkTuple");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkTuple<unsigned char, 2> *op = new vtkTuple<unsigned char, 2>();
    (*op)[0] = 0;
    (*op)[1] = 0;

    result = PyVTKSpecialObject_New("vtkTuple_IhLi2EE", op);
    }

  return result;
}

static PyObject *
PyvtkTuple_IhLi2EE_vtkTuple_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkTuple");

  unsigned char temp0;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkTuple<unsigned char, 2> *op = new vtkTuple<unsigned char, 2>(temp0);

    result = PyVTKSpecialObject_New("vtkTuple_IhLi2EE", op);
    }

  return result;
}

static PyObject *
PyvtkTuple_IhLi2EE_vtkTuple_s3(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkTuple");

  unsigned char temp0[2];
  const int size0 = 2;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    vtkTuple<unsigned char, 2> *op = new vtkTuple<unsigned char, 2>(temp0);

    result = PyVTKSpecialObject_New("vtkTuple_IhLi2EE", op);
    }

  return result;
}

static PyObject *
PyvtkTuple_IhLi2EE_vtkTuple_s4(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkTuple");

  vtkTuple<unsigned char, 2> *temp0 = NULL;
  PyObject *pobj0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkTuple_IhLi2EE"))
    {
    vtkTuple<unsigned char, 2> *op = new vtkTuple<unsigned char, 2>(*temp0);

    result = PyVTKSpecialObject_New("vtkTuple_IhLi2EE", op);
    }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkTuple_IhLi2EE_vtkTuple_Methods[] = {
  {NULL, PyvtkTuple_IhLi2EE_vtkTuple_s2, METH_VARARGS,
   (char*)"-b"},
  {NULL, PyvtkTuple_IhLi2EE_vtkTuple_s3, METH_VARARGS,
   (char*)"-O *b"},
  {NULL, PyvtkTuple_IhLi2EE_vtkTuple_s4, METH_VARARGS,
   (char*)"O &vtkTuple_IhLi2EE"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkTuple_IhLi2EE_vtkTuple(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkTuple_IhLi2EE_vtkTuple_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
    {
    case 0:
      return PyvtkTuple_IhLi2EE_vtkTuple_s1(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "vtkTuple");
  return NULL;
}


static PyMethodDef PyvtkTuple_IhLi2EE_NewMethod = \
{ (char*)"vtkTuple_IhLi2EE", PyvtkTuple_IhLi2EE_vtkTuple, 1,
  (char*)"" };

#if PY_VERSION_HEX >= 0x02020000
static PyObject *
PyvtkTuple_IhLi2EE_New(PyTypeObject *, PyObject *args, PyObject *kwds)
{
  if (kwds && PyDict_Size(kwds))
    {
    PyErr_SetString(PyExc_TypeError,
                    "this function takes no keyword arguments");
    return NULL;
    }

  return PyvtkTuple_IhLi2EE_vtkTuple(NULL, args);
}
#endif

static void PyvtkTuple_IhLi2EE_Delete(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  if (obj->vtk_ptr)
    {
    delete static_cast<vtkTuple<unsigned char, 2> *>(obj->vtk_ptr);
    }
#if PY_MAJOR_VERSION >= 2
  PyObject_Del(self);
#else
  PyMem_DEL(self);
#endif
}

Py_ssize_t PyvtkTuple_IhLi2EE_SequenceSize(PyObject *self)
{
  void *vp = vtkPythonArgs::GetSelfPointer(self);
  vtkTuple<unsigned char, 2> *op = static_cast<vtkTuple<unsigned char, 2> *>(vp);

  return static_cast<Py_ssize_t>(op->GetSize());
}

PyObject *PyvtkTuple_IhLi2EE_SequenceItem(PyObject *self, Py_ssize_t i)
{
  void *vp = vtkPythonArgs::GetSelfPointer(self);
  vtkTuple<unsigned char, 2> *op = static_cast<vtkTuple<unsigned char, 2> *>(vp);

  int temp0;
  PyObject *result = NULL;

  temp0 = static_cast<int>(i);

  if (temp0 < 0 || temp0 >= op->GetSize())
    {
    PyErr_SetString(PyExc_IndexError, "index out of range");
    }
  else
    {
    const unsigned char *tempr = &(*op)[temp0];

    if (PyErr_Occurred() == NULL)
      {
      result = vtkPythonArgs::BuildValue(*tempr);
      }
    }

  return result;
}

int PyvtkTuple_IhLi2EE_SequenceSetItem(
  PyObject *self, Py_ssize_t i, PyObject *arg1)
{
  void *vp = vtkPythonArgs::GetSelfPointer(self);
  vtkTuple<unsigned char, 2> *op = static_cast<vtkTuple<unsigned char, 2> *>(vp);

  int temp0;
  unsigned char temp1;
  int result = -1;

  temp0 = static_cast<int>(i);

  if (temp0 < 0 || temp0 >= op->GetSize())
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

static PySequenceMethods PyvtkTuple_IhLi2EE_AsSequence = {
  PyvtkTuple_IhLi2EE_SequenceSize, // sq_length
  0, // sq_concat
  0, // sq_repeat
  PyvtkTuple_IhLi2EE_SequenceItem, // sq_item
  0, // sq_slice
  PyvtkTuple_IhLi2EE_SequenceSetItem, // sq_ass_item
  0, // sq_ass_slice
  0, // sq_contains
#if PY_VERSION_HEX >= 0x2000000
  0, // sq_inplace_concat
  0, // sq_inplace_repeat
#endif
};

static long PyvtkTuple_IhLi2EE_Hash(PyObject *self)
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

PyTypeObject PyvtkTuple_IhLi2EE_Type = {
  PyObject_HEAD_INIT(&PyType_Type)
  0,
  (char*)"vtkTuple_IhLi2EE", // tp_name
  sizeof(PyVTKSpecialObject), // tp_basicsize
  0, // tp_itemsize
  PyvtkTuple_IhLi2EE_Delete, // tp_dealloc
  0, // tp_print
  0, // tp_getattr
  0, // tp_setattr
  0, // tp_compare
  PyVTKSpecialObject_Repr, // tp_repr
  0, // tp_as_number
  &PyvtkTuple_IhLi2EE_AsSequence, // tp_as_sequence
  0, // tp_as_mapping
  PyvtkTuple_IhLi2EE_Hash, // tp_hash
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
  PyvtkTuple_IhLi2EE_Methods, // tp_methods
  0, // tp_members
  0, // tp_getset
  0, // tp_base
  0, // tp_dict
  0, // tp_descr_get
  0, // tp_descr_set
  0, // tp_dictoffset
  0, // tp_init
  0, // tp_alloc
  PyvtkTuple_IhLi2EE_New, // tp_new
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

static void *PyvtkTuple_IhLi2EE_CCopy(const void *obj)
{
  if (obj)
    {
    return new vtkTuple<unsigned char, 2>(*static_cast<const vtkTuple<unsigned char, 2>*>(obj));
    }
  return 0;
}

static PyObject *PyvtkTuple_IhLi2EE_TypeNew(const char *)
{
  PyObject *cls = PyVTKSpecialType_New(
    &PyvtkTuple_IhLi2EE_Type,
    PyvtkTuple_IhLi2EE_Methods,
    PyvtkTuple_IhLi2EE_vtkTuple_Methods,
    &PyvtkTuple_IhLi2EE_NewMethod,
    PyvtkTuple_IhLi2EE_Doc(), &PyvtkTuple_IhLi2EE_CCopy);

  return cls;
}

const char **PyvtkTuple_IhLi2EE_Doc()
{
  static const char *docstring[] = {
    "vtkTuple - templated base type for containers of constant size.\n\n",
    "This class is a templated data type for storing and manipulating\ntuples.\n\n",
    "V.vtkTuple()\nC++: vtkTuple()\nV.vtkTuple(int)\nC++: explicit vtkTuple(const unsigned char &scalar)\nV.vtkTuple((int, int))\nC++: explicit vtkTuple(const unsigned char *init)\nV.vtkTuple(vtkTuple<unsigned char, 2>)\nC++: vtkTuple(const &vtkTuple<unsigned char, 2>)\n",
    NULL
  };

  return docstring;
}


static const char **PyvtkTuple_IhLi3EE_Doc();


static PyObject *
PyvtkTuple_IhLi3EE_GetSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "GetSize");
  void *vp = ap.GetSelfPointer(self);
  vtkTuple<unsigned char, 3> *op = static_cast<vtkTuple<unsigned char, 3> *>(vp);

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    int tempr = op->GetSize();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTuple_IhLi3EE_GetData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "GetData");
  void *vp = ap.GetSelfPointer(self);
  vtkTuple<unsigned char, 3> *op = static_cast<vtkTuple<unsigned char, 3> *>(vp);

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    unsigned char *tempr = op->GetData();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTuple_IhLi3EE_Compare(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "Compare");
  void *vp = ap.GetSelfPointer(self);
  vtkTuple<unsigned char, 3> *op = static_cast<vtkTuple<unsigned char, 3> *>(vp);

  vtkTuple<unsigned char, 3> *temp0 = NULL;
  PyObject *pobj0 = NULL;
  unsigned char temp1;
  PyObject *result = NULL;

  if (ap.CheckArgCount(2) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkTuple_IhLi3EE") &&
      ap.GetValue(temp1))
    {
    bool tempr = op->Compare(*temp0, temp1);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkTuple_IhLi3EE_Methods[] = {
  {(char*)"GetSize", PyvtkTuple_IhLi3EE_GetSize, METH_VARARGS,
   (char*)"V.GetSize() -> int\nC++: int GetSize()\n\nGet the size of the tuple.\n"},
  {(char*)"GetData", PyvtkTuple_IhLi3EE_GetData, METH_VARARGS,
   (char*)"V.GetData() -> (int, ...)\nC++: unsigned char *GetData()\n\nGet a pointer to the underlying data of the tuple.\n"},
  {(char*)"Compare", PyvtkTuple_IhLi3EE_Compare, METH_VARARGS,
   (char*)"V.Compare(vtkTuple<unsigned char, 3>, int) -> bool\nC++: bool Compare(const vtkTuple<unsigned char, 3> &other,\n    const unsigned char &tol)\n\nEquality operator with a tolerance to allow fuzzy comparisons.\n"},
  {NULL, NULL, 0, NULL}
};

#ifndef DECLARED_PyvtkTuple_IhLi3EE_Type
extern VTK_PYTHON_EXPORT PyTypeObject PyvtkTuple_IhLi3EE_Type;
#define DECLARED_PyvtkTuple_IhLi3EE_Type
#endif


static PyObject *
PyvtkTuple_IhLi3EE_vtkTuple_s1(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkTuple");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkTuple<unsigned char, 3> *op = new vtkTuple<unsigned char, 3>();
    (*op)[0] = 0;
    (*op)[1] = 0;
    (*op)[2] = 0;

    result = PyVTKSpecialObject_New("vtkTuple_IhLi3EE", op);
    }

  return result;
}

static PyObject *
PyvtkTuple_IhLi3EE_vtkTuple_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkTuple");

  unsigned char temp0;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkTuple<unsigned char, 3> *op = new vtkTuple<unsigned char, 3>(temp0);

    result = PyVTKSpecialObject_New("vtkTuple_IhLi3EE", op);
    }

  return result;
}

static PyObject *
PyvtkTuple_IhLi3EE_vtkTuple_s3(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkTuple");

  unsigned char temp0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    vtkTuple<unsigned char, 3> *op = new vtkTuple<unsigned char, 3>(temp0);

    result = PyVTKSpecialObject_New("vtkTuple_IhLi3EE", op);
    }

  return result;
}

static PyObject *
PyvtkTuple_IhLi3EE_vtkTuple_s4(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkTuple");

  vtkTuple<unsigned char, 3> *temp0 = NULL;
  PyObject *pobj0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkTuple_IhLi3EE"))
    {
    vtkTuple<unsigned char, 3> *op = new vtkTuple<unsigned char, 3>(*temp0);

    result = PyVTKSpecialObject_New("vtkTuple_IhLi3EE", op);
    }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkTuple_IhLi3EE_vtkTuple_Methods[] = {
  {NULL, PyvtkTuple_IhLi3EE_vtkTuple_s2, METH_VARARGS,
   (char*)"-b"},
  {NULL, PyvtkTuple_IhLi3EE_vtkTuple_s3, METH_VARARGS,
   (char*)"-O *b"},
  {NULL, PyvtkTuple_IhLi3EE_vtkTuple_s4, METH_VARARGS,
   (char*)"O &vtkTuple_IhLi3EE"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkTuple_IhLi3EE_vtkTuple(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkTuple_IhLi3EE_vtkTuple_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
    {
    case 0:
      return PyvtkTuple_IhLi3EE_vtkTuple_s1(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "vtkTuple");
  return NULL;
}


static PyMethodDef PyvtkTuple_IhLi3EE_NewMethod = \
{ (char*)"vtkTuple_IhLi3EE", PyvtkTuple_IhLi3EE_vtkTuple, 1,
  (char*)"" };

#if PY_VERSION_HEX >= 0x02020000
static PyObject *
PyvtkTuple_IhLi3EE_New(PyTypeObject *, PyObject *args, PyObject *kwds)
{
  if (kwds && PyDict_Size(kwds))
    {
    PyErr_SetString(PyExc_TypeError,
                    "this function takes no keyword arguments");
    return NULL;
    }

  return PyvtkTuple_IhLi3EE_vtkTuple(NULL, args);
}
#endif

static void PyvtkTuple_IhLi3EE_Delete(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  if (obj->vtk_ptr)
    {
    delete static_cast<vtkTuple<unsigned char, 3> *>(obj->vtk_ptr);
    }
#if PY_MAJOR_VERSION >= 2
  PyObject_Del(self);
#else
  PyMem_DEL(self);
#endif
}

Py_ssize_t PyvtkTuple_IhLi3EE_SequenceSize(PyObject *self)
{
  void *vp = vtkPythonArgs::GetSelfPointer(self);
  vtkTuple<unsigned char, 3> *op = static_cast<vtkTuple<unsigned char, 3> *>(vp);

  return static_cast<Py_ssize_t>(op->GetSize());
}

PyObject *PyvtkTuple_IhLi3EE_SequenceItem(PyObject *self, Py_ssize_t i)
{
  void *vp = vtkPythonArgs::GetSelfPointer(self);
  vtkTuple<unsigned char, 3> *op = static_cast<vtkTuple<unsigned char, 3> *>(vp);

  int temp0;
  PyObject *result = NULL;

  temp0 = static_cast<int>(i);

  if (temp0 < 0 || temp0 >= op->GetSize())
    {
    PyErr_SetString(PyExc_IndexError, "index out of range");
    }
  else
    {
    const unsigned char *tempr = &(*op)[temp0];

    if (PyErr_Occurred() == NULL)
      {
      result = vtkPythonArgs::BuildValue(*tempr);
      }
    }

  return result;
}

int PyvtkTuple_IhLi3EE_SequenceSetItem(
  PyObject *self, Py_ssize_t i, PyObject *arg1)
{
  void *vp = vtkPythonArgs::GetSelfPointer(self);
  vtkTuple<unsigned char, 3> *op = static_cast<vtkTuple<unsigned char, 3> *>(vp);

  int temp0;
  unsigned char temp1;
  int result = -1;

  temp0 = static_cast<int>(i);

  if (temp0 < 0 || temp0 >= op->GetSize())
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

static PySequenceMethods PyvtkTuple_IhLi3EE_AsSequence = {
  PyvtkTuple_IhLi3EE_SequenceSize, // sq_length
  0, // sq_concat
  0, // sq_repeat
  PyvtkTuple_IhLi3EE_SequenceItem, // sq_item
  0, // sq_slice
  PyvtkTuple_IhLi3EE_SequenceSetItem, // sq_ass_item
  0, // sq_ass_slice
  0, // sq_contains
#if PY_VERSION_HEX >= 0x2000000
  0, // sq_inplace_concat
  0, // sq_inplace_repeat
#endif
};

static long PyvtkTuple_IhLi3EE_Hash(PyObject *self)
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

PyTypeObject PyvtkTuple_IhLi3EE_Type = {
  PyObject_HEAD_INIT(&PyType_Type)
  0,
  (char*)"vtkTuple_IhLi3EE", // tp_name
  sizeof(PyVTKSpecialObject), // tp_basicsize
  0, // tp_itemsize
  PyvtkTuple_IhLi3EE_Delete, // tp_dealloc
  0, // tp_print
  0, // tp_getattr
  0, // tp_setattr
  0, // tp_compare
  PyVTKSpecialObject_Repr, // tp_repr
  0, // tp_as_number
  &PyvtkTuple_IhLi3EE_AsSequence, // tp_as_sequence
  0, // tp_as_mapping
  PyvtkTuple_IhLi3EE_Hash, // tp_hash
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
  PyvtkTuple_IhLi3EE_Methods, // tp_methods
  0, // tp_members
  0, // tp_getset
  0, // tp_base
  0, // tp_dict
  0, // tp_descr_get
  0, // tp_descr_set
  0, // tp_dictoffset
  0, // tp_init
  0, // tp_alloc
  PyvtkTuple_IhLi3EE_New, // tp_new
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

static void *PyvtkTuple_IhLi3EE_CCopy(const void *obj)
{
  if (obj)
    {
    return new vtkTuple<unsigned char, 3>(*static_cast<const vtkTuple<unsigned char, 3>*>(obj));
    }
  return 0;
}

static PyObject *PyvtkTuple_IhLi3EE_TypeNew(const char *)
{
  PyObject *cls = PyVTKSpecialType_New(
    &PyvtkTuple_IhLi3EE_Type,
    PyvtkTuple_IhLi3EE_Methods,
    PyvtkTuple_IhLi3EE_vtkTuple_Methods,
    &PyvtkTuple_IhLi3EE_NewMethod,
    PyvtkTuple_IhLi3EE_Doc(), &PyvtkTuple_IhLi3EE_CCopy);

  return cls;
}

const char **PyvtkTuple_IhLi3EE_Doc()
{
  static const char *docstring[] = {
    "vtkTuple - templated base type for containers of constant size.\n\n",
    "This class is a templated data type for storing and manipulating\ntuples.\n\n",
    "V.vtkTuple()\nC++: vtkTuple()\nV.vtkTuple(int)\nC++: explicit vtkTuple(const unsigned char &scalar)\nV.vtkTuple((int, int, int))\nC++: explicit vtkTuple(const unsigned char *init)\nV.vtkTuple(vtkTuple<unsigned char, 3>)\nC++: vtkTuple(const &vtkTuple<unsigned char, 3>)\n",
    NULL
  };

  return docstring;
}


static const char **PyvtkTuple_IhLi4EE_Doc();


static PyObject *
PyvtkTuple_IhLi4EE_GetSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "GetSize");
  void *vp = ap.GetSelfPointer(self);
  vtkTuple<unsigned char, 4> *op = static_cast<vtkTuple<unsigned char, 4> *>(vp);

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    int tempr = op->GetSize();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTuple_IhLi4EE_GetData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "GetData");
  void *vp = ap.GetSelfPointer(self);
  vtkTuple<unsigned char, 4> *op = static_cast<vtkTuple<unsigned char, 4> *>(vp);

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    unsigned char *tempr = op->GetData();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTuple_IhLi4EE_Compare(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "Compare");
  void *vp = ap.GetSelfPointer(self);
  vtkTuple<unsigned char, 4> *op = static_cast<vtkTuple<unsigned char, 4> *>(vp);

  vtkTuple<unsigned char, 4> *temp0 = NULL;
  PyObject *pobj0 = NULL;
  unsigned char temp1;
  PyObject *result = NULL;

  if (ap.CheckArgCount(2) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkTuple_IhLi4EE") &&
      ap.GetValue(temp1))
    {
    bool tempr = op->Compare(*temp0, temp1);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkTuple_IhLi4EE_Methods[] = {
  {(char*)"GetSize", PyvtkTuple_IhLi4EE_GetSize, METH_VARARGS,
   (char*)"V.GetSize() -> int\nC++: int GetSize()\n\nGet the size of the tuple.\n"},
  {(char*)"GetData", PyvtkTuple_IhLi4EE_GetData, METH_VARARGS,
   (char*)"V.GetData() -> (int, ...)\nC++: unsigned char *GetData()\n\nGet a pointer to the underlying data of the tuple.\n"},
  {(char*)"Compare", PyvtkTuple_IhLi4EE_Compare, METH_VARARGS,
   (char*)"V.Compare(vtkTuple<unsigned char, 4>, int) -> bool\nC++: bool Compare(const vtkTuple<unsigned char, 4> &other,\n    const unsigned char &tol)\n\nEquality operator with a tolerance to allow fuzzy comparisons.\n"},
  {NULL, NULL, 0, NULL}
};

#ifndef DECLARED_PyvtkTuple_IhLi4EE_Type
extern VTK_PYTHON_EXPORT PyTypeObject PyvtkTuple_IhLi4EE_Type;
#define DECLARED_PyvtkTuple_IhLi4EE_Type
#endif


static PyObject *
PyvtkTuple_IhLi4EE_vtkTuple_s1(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkTuple");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkTuple<unsigned char, 4> *op = new vtkTuple<unsigned char, 4>();
    (*op)[0] = 0;
    (*op)[1] = 0;
    (*op)[2] = 0;
    (*op)[3] = 0;

    result = PyVTKSpecialObject_New("vtkTuple_IhLi4EE", op);
    }

  return result;
}

static PyObject *
PyvtkTuple_IhLi4EE_vtkTuple_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkTuple");

  unsigned char temp0;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkTuple<unsigned char, 4> *op = new vtkTuple<unsigned char, 4>(temp0);

    result = PyVTKSpecialObject_New("vtkTuple_IhLi4EE", op);
    }

  return result;
}

static PyObject *
PyvtkTuple_IhLi4EE_vtkTuple_s3(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkTuple");

  unsigned char temp0[4];
  const int size0 = 4;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    vtkTuple<unsigned char, 4> *op = new vtkTuple<unsigned char, 4>(temp0);

    result = PyVTKSpecialObject_New("vtkTuple_IhLi4EE", op);
    }

  return result;
}

static PyObject *
PyvtkTuple_IhLi4EE_vtkTuple_s4(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkTuple");

  vtkTuple<unsigned char, 4> *temp0 = NULL;
  PyObject *pobj0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkTuple_IhLi4EE"))
    {
    vtkTuple<unsigned char, 4> *op = new vtkTuple<unsigned char, 4>(*temp0);

    result = PyVTKSpecialObject_New("vtkTuple_IhLi4EE", op);
    }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkTuple_IhLi4EE_vtkTuple_Methods[] = {
  {NULL, PyvtkTuple_IhLi4EE_vtkTuple_s2, METH_VARARGS,
   (char*)"-b"},
  {NULL, PyvtkTuple_IhLi4EE_vtkTuple_s3, METH_VARARGS,
   (char*)"-O *b"},
  {NULL, PyvtkTuple_IhLi4EE_vtkTuple_s4, METH_VARARGS,
   (char*)"O &vtkTuple_IhLi4EE"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkTuple_IhLi4EE_vtkTuple(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkTuple_IhLi4EE_vtkTuple_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
    {
    case 0:
      return PyvtkTuple_IhLi4EE_vtkTuple_s1(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "vtkTuple");
  return NULL;
}


static PyMethodDef PyvtkTuple_IhLi4EE_NewMethod = \
{ (char*)"vtkTuple_IhLi4EE", PyvtkTuple_IhLi4EE_vtkTuple, 1,
  (char*)"" };

#if PY_VERSION_HEX >= 0x02020000
static PyObject *
PyvtkTuple_IhLi4EE_New(PyTypeObject *, PyObject *args, PyObject *kwds)
{
  if (kwds && PyDict_Size(kwds))
    {
    PyErr_SetString(PyExc_TypeError,
                    "this function takes no keyword arguments");
    return NULL;
    }

  return PyvtkTuple_IhLi4EE_vtkTuple(NULL, args);
}
#endif

static void PyvtkTuple_IhLi4EE_Delete(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  if (obj->vtk_ptr)
    {
    delete static_cast<vtkTuple<unsigned char, 4> *>(obj->vtk_ptr);
    }
#if PY_MAJOR_VERSION >= 2
  PyObject_Del(self);
#else
  PyMem_DEL(self);
#endif
}

Py_ssize_t PyvtkTuple_IhLi4EE_SequenceSize(PyObject *self)
{
  void *vp = vtkPythonArgs::GetSelfPointer(self);
  vtkTuple<unsigned char, 4> *op = static_cast<vtkTuple<unsigned char, 4> *>(vp);

  return static_cast<Py_ssize_t>(op->GetSize());
}

PyObject *PyvtkTuple_IhLi4EE_SequenceItem(PyObject *self, Py_ssize_t i)
{
  void *vp = vtkPythonArgs::GetSelfPointer(self);
  vtkTuple<unsigned char, 4> *op = static_cast<vtkTuple<unsigned char, 4> *>(vp);

  int temp0;
  PyObject *result = NULL;

  temp0 = static_cast<int>(i);

  if (temp0 < 0 || temp0 >= op->GetSize())
    {
    PyErr_SetString(PyExc_IndexError, "index out of range");
    }
  else
    {
    const unsigned char *tempr = &(*op)[temp0];

    if (PyErr_Occurred() == NULL)
      {
      result = vtkPythonArgs::BuildValue(*tempr);
      }
    }

  return result;
}

int PyvtkTuple_IhLi4EE_SequenceSetItem(
  PyObject *self, Py_ssize_t i, PyObject *arg1)
{
  void *vp = vtkPythonArgs::GetSelfPointer(self);
  vtkTuple<unsigned char, 4> *op = static_cast<vtkTuple<unsigned char, 4> *>(vp);

  int temp0;
  unsigned char temp1;
  int result = -1;

  temp0 = static_cast<int>(i);

  if (temp0 < 0 || temp0 >= op->GetSize())
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

static PySequenceMethods PyvtkTuple_IhLi4EE_AsSequence = {
  PyvtkTuple_IhLi4EE_SequenceSize, // sq_length
  0, // sq_concat
  0, // sq_repeat
  PyvtkTuple_IhLi4EE_SequenceItem, // sq_item
  0, // sq_slice
  PyvtkTuple_IhLi4EE_SequenceSetItem, // sq_ass_item
  0, // sq_ass_slice
  0, // sq_contains
#if PY_VERSION_HEX >= 0x2000000
  0, // sq_inplace_concat
  0, // sq_inplace_repeat
#endif
};

static long PyvtkTuple_IhLi4EE_Hash(PyObject *self)
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

PyTypeObject PyvtkTuple_IhLi4EE_Type = {
  PyObject_HEAD_INIT(&PyType_Type)
  0,
  (char*)"vtkTuple_IhLi4EE", // tp_name
  sizeof(PyVTKSpecialObject), // tp_basicsize
  0, // tp_itemsize
  PyvtkTuple_IhLi4EE_Delete, // tp_dealloc
  0, // tp_print
  0, // tp_getattr
  0, // tp_setattr
  0, // tp_compare
  PyVTKSpecialObject_Repr, // tp_repr
  0, // tp_as_number
  &PyvtkTuple_IhLi4EE_AsSequence, // tp_as_sequence
  0, // tp_as_mapping
  PyvtkTuple_IhLi4EE_Hash, // tp_hash
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
  PyvtkTuple_IhLi4EE_Methods, // tp_methods
  0, // tp_members
  0, // tp_getset
  0, // tp_base
  0, // tp_dict
  0, // tp_descr_get
  0, // tp_descr_set
  0, // tp_dictoffset
  0, // tp_init
  0, // tp_alloc
  PyvtkTuple_IhLi4EE_New, // tp_new
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

static void *PyvtkTuple_IhLi4EE_CCopy(const void *obj)
{
  if (obj)
    {
    return new vtkTuple<unsigned char, 4>(*static_cast<const vtkTuple<unsigned char, 4>*>(obj));
    }
  return 0;
}

static PyObject *PyvtkTuple_IhLi4EE_TypeNew(const char *)
{
  PyObject *cls = PyVTKSpecialType_New(
    &PyvtkTuple_IhLi4EE_Type,
    PyvtkTuple_IhLi4EE_Methods,
    PyvtkTuple_IhLi4EE_vtkTuple_Methods,
    &PyvtkTuple_IhLi4EE_NewMethod,
    PyvtkTuple_IhLi4EE_Doc(), &PyvtkTuple_IhLi4EE_CCopy);

  return cls;
}

const char **PyvtkTuple_IhLi4EE_Doc()
{
  static const char *docstring[] = {
    "vtkTuple - templated base type for containers of constant size.\n\n",
    "This class is a templated data type for storing and manipulating\ntuples.\n\n",
    "V.vtkTuple()\nC++: vtkTuple()\nV.vtkTuple(int)\nC++: explicit vtkTuple(const unsigned char &scalar)\nV.vtkTuple((int, int, int, int))\nC++: explicit vtkTuple(const unsigned char *init)\nV.vtkTuple(vtkTuple<unsigned char, 4>)\nC++: vtkTuple(const &vtkTuple<unsigned char, 4>)\n",
    NULL
  };

  return docstring;
}


static const char **PyvtkTuple_IiLi2EE_Doc();


static PyObject *
PyvtkTuple_IiLi2EE_GetSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "GetSize");
  void *vp = ap.GetSelfPointer(self);
  vtkTuple<int, 2> *op = static_cast<vtkTuple<int, 2> *>(vp);

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    int tempr = op->GetSize();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTuple_IiLi2EE_GetData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "GetData");
  void *vp = ap.GetSelfPointer(self);
  vtkTuple<int, 2> *op = static_cast<vtkTuple<int, 2> *>(vp);

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    int *tempr = op->GetData();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTuple_IiLi2EE_Compare(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "Compare");
  void *vp = ap.GetSelfPointer(self);
  vtkTuple<int, 2> *op = static_cast<vtkTuple<int, 2> *>(vp);

  vtkTuple<int, 2> *temp0 = NULL;
  PyObject *pobj0 = NULL;
  int temp1;
  PyObject *result = NULL;

  if (ap.CheckArgCount(2) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkTuple_IiLi2EE") &&
      ap.GetValue(temp1))
    {
    bool tempr = op->Compare(*temp0, temp1);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkTuple_IiLi2EE_Methods[] = {
  {(char*)"GetSize", PyvtkTuple_IiLi2EE_GetSize, METH_VARARGS,
   (char*)"V.GetSize() -> int\nC++: int GetSize()\n\nGet the size of the tuple.\n"},
  {(char*)"GetData", PyvtkTuple_IiLi2EE_GetData, METH_VARARGS,
   (char*)"V.GetData() -> (int, ...)\nC++: int *GetData()\n\nGet a pointer to the underlying data of the tuple.\n"},
  {(char*)"Compare", PyvtkTuple_IiLi2EE_Compare, METH_VARARGS,
   (char*)"V.Compare(vtkTuple<int, 2>, int) -> bool\nC++: bool Compare(const vtkTuple<int, 2> &other, const int &tol)\n\nEquality operator with a tolerance to allow fuzzy comparisons.\n"},
  {NULL, NULL, 0, NULL}
};

#ifndef DECLARED_PyvtkTuple_IiLi2EE_Type
extern VTK_PYTHON_EXPORT PyTypeObject PyvtkTuple_IiLi2EE_Type;
#define DECLARED_PyvtkTuple_IiLi2EE_Type
#endif


static PyObject *
PyvtkTuple_IiLi2EE_vtkTuple_s1(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkTuple");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkTuple<int, 2> *op = new vtkTuple<int, 2>();
    (*op)[0] = 0;
    (*op)[1] = 0;

    result = PyVTKSpecialObject_New("vtkTuple_IiLi2EE", op);
    }

  return result;
}

static PyObject *
PyvtkTuple_IiLi2EE_vtkTuple_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkTuple");

  int temp0;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkTuple<int, 2> *op = new vtkTuple<int, 2>(temp0);

    result = PyVTKSpecialObject_New("vtkTuple_IiLi2EE", op);
    }

  return result;
}

static PyObject *
PyvtkTuple_IiLi2EE_vtkTuple_s3(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkTuple");

  int temp0[2];
  const int size0 = 2;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    vtkTuple<int, 2> *op = new vtkTuple<int, 2>(temp0);

    result = PyVTKSpecialObject_New("vtkTuple_IiLi2EE", op);
    }

  return result;
}

static PyObject *
PyvtkTuple_IiLi2EE_vtkTuple_s4(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkTuple");

  vtkTuple<int, 2> *temp0 = NULL;
  PyObject *pobj0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkTuple_IiLi2EE"))
    {
    vtkTuple<int, 2> *op = new vtkTuple<int, 2>(*temp0);

    result = PyVTKSpecialObject_New("vtkTuple_IiLi2EE", op);
    }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkTuple_IiLi2EE_vtkTuple_Methods[] = {
  {NULL, PyvtkTuple_IiLi2EE_vtkTuple_s2, METH_VARARGS,
   (char*)"-i"},
  {NULL, PyvtkTuple_IiLi2EE_vtkTuple_s3, METH_VARARGS,
   (char*)"-O *i"},
  {NULL, PyvtkTuple_IiLi2EE_vtkTuple_s4, METH_VARARGS,
   (char*)"O &vtkTuple_IiLi2EE"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkTuple_IiLi2EE_vtkTuple(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkTuple_IiLi2EE_vtkTuple_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
    {
    case 0:
      return PyvtkTuple_IiLi2EE_vtkTuple_s1(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "vtkTuple");
  return NULL;
}


static PyMethodDef PyvtkTuple_IiLi2EE_NewMethod = \
{ (char*)"vtkTuple_IiLi2EE", PyvtkTuple_IiLi2EE_vtkTuple, 1,
  (char*)"" };

#if PY_VERSION_HEX >= 0x02020000
static PyObject *
PyvtkTuple_IiLi2EE_New(PyTypeObject *, PyObject *args, PyObject *kwds)
{
  if (kwds && PyDict_Size(kwds))
    {
    PyErr_SetString(PyExc_TypeError,
                    "this function takes no keyword arguments");
    return NULL;
    }

  return PyvtkTuple_IiLi2EE_vtkTuple(NULL, args);
}
#endif

static void PyvtkTuple_IiLi2EE_Delete(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  if (obj->vtk_ptr)
    {
    delete static_cast<vtkTuple<int, 2> *>(obj->vtk_ptr);
    }
#if PY_MAJOR_VERSION >= 2
  PyObject_Del(self);
#else
  PyMem_DEL(self);
#endif
}

Py_ssize_t PyvtkTuple_IiLi2EE_SequenceSize(PyObject *self)
{
  void *vp = vtkPythonArgs::GetSelfPointer(self);
  vtkTuple<int, 2> *op = static_cast<vtkTuple<int, 2> *>(vp);

  return static_cast<Py_ssize_t>(op->GetSize());
}

PyObject *PyvtkTuple_IiLi2EE_SequenceItem(PyObject *self, Py_ssize_t i)
{
  void *vp = vtkPythonArgs::GetSelfPointer(self);
  vtkTuple<int, 2> *op = static_cast<vtkTuple<int, 2> *>(vp);

  int temp0;
  PyObject *result = NULL;

  temp0 = static_cast<int>(i);

  if (temp0 < 0 || temp0 >= op->GetSize())
    {
    PyErr_SetString(PyExc_IndexError, "index out of range");
    }
  else
    {
    const int *tempr = &(*op)[temp0];

    if (PyErr_Occurred() == NULL)
      {
      result = vtkPythonArgs::BuildValue(*tempr);
      }
    }

  return result;
}

int PyvtkTuple_IiLi2EE_SequenceSetItem(
  PyObject *self, Py_ssize_t i, PyObject *arg1)
{
  void *vp = vtkPythonArgs::GetSelfPointer(self);
  vtkTuple<int, 2> *op = static_cast<vtkTuple<int, 2> *>(vp);

  int temp0;
  int temp1;
  int result = -1;

  temp0 = static_cast<int>(i);

  if (temp0 < 0 || temp0 >= op->GetSize())
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

static PySequenceMethods PyvtkTuple_IiLi2EE_AsSequence = {
  PyvtkTuple_IiLi2EE_SequenceSize, // sq_length
  0, // sq_concat
  0, // sq_repeat
  PyvtkTuple_IiLi2EE_SequenceItem, // sq_item
  0, // sq_slice
  PyvtkTuple_IiLi2EE_SequenceSetItem, // sq_ass_item
  0, // sq_ass_slice
  0, // sq_contains
#if PY_VERSION_HEX >= 0x2000000
  0, // sq_inplace_concat
  0, // sq_inplace_repeat
#endif
};

static long PyvtkTuple_IiLi2EE_Hash(PyObject *self)
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

PyTypeObject PyvtkTuple_IiLi2EE_Type = {
  PyObject_HEAD_INIT(&PyType_Type)
  0,
  (char*)"vtkTuple_IiLi2EE", // tp_name
  sizeof(PyVTKSpecialObject), // tp_basicsize
  0, // tp_itemsize
  PyvtkTuple_IiLi2EE_Delete, // tp_dealloc
  0, // tp_print
  0, // tp_getattr
  0, // tp_setattr
  0, // tp_compare
  PyVTKSpecialObject_Repr, // tp_repr
  0, // tp_as_number
  &PyvtkTuple_IiLi2EE_AsSequence, // tp_as_sequence
  0, // tp_as_mapping
  PyvtkTuple_IiLi2EE_Hash, // tp_hash
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
  PyvtkTuple_IiLi2EE_Methods, // tp_methods
  0, // tp_members
  0, // tp_getset
  0, // tp_base
  0, // tp_dict
  0, // tp_descr_get
  0, // tp_descr_set
  0, // tp_dictoffset
  0, // tp_init
  0, // tp_alloc
  PyvtkTuple_IiLi2EE_New, // tp_new
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

static void *PyvtkTuple_IiLi2EE_CCopy(const void *obj)
{
  if (obj)
    {
    return new vtkTuple<int, 2>(*static_cast<const vtkTuple<int, 2>*>(obj));
    }
  return 0;
}

static PyObject *PyvtkTuple_IiLi2EE_TypeNew(const char *)
{
  PyObject *cls = PyVTKSpecialType_New(
    &PyvtkTuple_IiLi2EE_Type,
    PyvtkTuple_IiLi2EE_Methods,
    PyvtkTuple_IiLi2EE_vtkTuple_Methods,
    &PyvtkTuple_IiLi2EE_NewMethod,
    PyvtkTuple_IiLi2EE_Doc(), &PyvtkTuple_IiLi2EE_CCopy);

  return cls;
}

const char **PyvtkTuple_IiLi2EE_Doc()
{
  static const char *docstring[] = {
    "vtkTuple - templated base type for containers of constant size.\n\n",
    "This class is a templated data type for storing and manipulating\ntuples.\n\n",
    "V.vtkTuple()\nC++: vtkTuple()\nV.vtkTuple(int)\nC++: explicit vtkTuple(const int &scalar)\nV.vtkTuple((int, int))\nC++: explicit vtkTuple(const int *init)\nV.vtkTuple(vtkTuple<int, 2>)\nC++: vtkTuple(const &vtkTuple<int, 2>)\n",
    NULL
  };

  return docstring;
}


static const char **PyvtkTuple_IiLi3EE_Doc();


static PyObject *
PyvtkTuple_IiLi3EE_GetSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "GetSize");
  void *vp = ap.GetSelfPointer(self);
  vtkTuple<int, 3> *op = static_cast<vtkTuple<int, 3> *>(vp);

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    int tempr = op->GetSize();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTuple_IiLi3EE_GetData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "GetData");
  void *vp = ap.GetSelfPointer(self);
  vtkTuple<int, 3> *op = static_cast<vtkTuple<int, 3> *>(vp);

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    int *tempr = op->GetData();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTuple_IiLi3EE_Compare(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "Compare");
  void *vp = ap.GetSelfPointer(self);
  vtkTuple<int, 3> *op = static_cast<vtkTuple<int, 3> *>(vp);

  vtkTuple<int, 3> *temp0 = NULL;
  PyObject *pobj0 = NULL;
  int temp1;
  PyObject *result = NULL;

  if (ap.CheckArgCount(2) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkTuple_IiLi3EE") &&
      ap.GetValue(temp1))
    {
    bool tempr = op->Compare(*temp0, temp1);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkTuple_IiLi3EE_Methods[] = {
  {(char*)"GetSize", PyvtkTuple_IiLi3EE_GetSize, METH_VARARGS,
   (char*)"V.GetSize() -> int\nC++: int GetSize()\n\nGet the size of the tuple.\n"},
  {(char*)"GetData", PyvtkTuple_IiLi3EE_GetData, METH_VARARGS,
   (char*)"V.GetData() -> (int, ...)\nC++: int *GetData()\n\nGet a pointer to the underlying data of the tuple.\n"},
  {(char*)"Compare", PyvtkTuple_IiLi3EE_Compare, METH_VARARGS,
   (char*)"V.Compare(vtkTuple<int, 3>, int) -> bool\nC++: bool Compare(const vtkTuple<int, 3> &other, const int &tol)\n\nEquality operator with a tolerance to allow fuzzy comparisons.\n"},
  {NULL, NULL, 0, NULL}
};

#ifndef DECLARED_PyvtkTuple_IiLi3EE_Type
extern VTK_PYTHON_EXPORT PyTypeObject PyvtkTuple_IiLi3EE_Type;
#define DECLARED_PyvtkTuple_IiLi3EE_Type
#endif


static PyObject *
PyvtkTuple_IiLi3EE_vtkTuple_s1(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkTuple");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkTuple<int, 3> *op = new vtkTuple<int, 3>();
    (*op)[0] = 0;
    (*op)[1] = 0;
    (*op)[2] = 0;

    result = PyVTKSpecialObject_New("vtkTuple_IiLi3EE", op);
    }

  return result;
}

static PyObject *
PyvtkTuple_IiLi3EE_vtkTuple_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkTuple");

  int temp0;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkTuple<int, 3> *op = new vtkTuple<int, 3>(temp0);

    result = PyVTKSpecialObject_New("vtkTuple_IiLi3EE", op);
    }

  return result;
}

static PyObject *
PyvtkTuple_IiLi3EE_vtkTuple_s3(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkTuple");

  int temp0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    vtkTuple<int, 3> *op = new vtkTuple<int, 3>(temp0);

    result = PyVTKSpecialObject_New("vtkTuple_IiLi3EE", op);
    }

  return result;
}

static PyObject *
PyvtkTuple_IiLi3EE_vtkTuple_s4(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkTuple");

  vtkTuple<int, 3> *temp0 = NULL;
  PyObject *pobj0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkTuple_IiLi3EE"))
    {
    vtkTuple<int, 3> *op = new vtkTuple<int, 3>(*temp0);

    result = PyVTKSpecialObject_New("vtkTuple_IiLi3EE", op);
    }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkTuple_IiLi3EE_vtkTuple_Methods[] = {
  {NULL, PyvtkTuple_IiLi3EE_vtkTuple_s2, METH_VARARGS,
   (char*)"-i"},
  {NULL, PyvtkTuple_IiLi3EE_vtkTuple_s3, METH_VARARGS,
   (char*)"-O *i"},
  {NULL, PyvtkTuple_IiLi3EE_vtkTuple_s4, METH_VARARGS,
   (char*)"O &vtkTuple_IiLi3EE"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkTuple_IiLi3EE_vtkTuple(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkTuple_IiLi3EE_vtkTuple_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
    {
    case 0:
      return PyvtkTuple_IiLi3EE_vtkTuple_s1(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "vtkTuple");
  return NULL;
}


static PyMethodDef PyvtkTuple_IiLi3EE_NewMethod = \
{ (char*)"vtkTuple_IiLi3EE", PyvtkTuple_IiLi3EE_vtkTuple, 1,
  (char*)"" };

#if PY_VERSION_HEX >= 0x02020000
static PyObject *
PyvtkTuple_IiLi3EE_New(PyTypeObject *, PyObject *args, PyObject *kwds)
{
  if (kwds && PyDict_Size(kwds))
    {
    PyErr_SetString(PyExc_TypeError,
                    "this function takes no keyword arguments");
    return NULL;
    }

  return PyvtkTuple_IiLi3EE_vtkTuple(NULL, args);
}
#endif

static void PyvtkTuple_IiLi3EE_Delete(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  if (obj->vtk_ptr)
    {
    delete static_cast<vtkTuple<int, 3> *>(obj->vtk_ptr);
    }
#if PY_MAJOR_VERSION >= 2
  PyObject_Del(self);
#else
  PyMem_DEL(self);
#endif
}

Py_ssize_t PyvtkTuple_IiLi3EE_SequenceSize(PyObject *self)
{
  void *vp = vtkPythonArgs::GetSelfPointer(self);
  vtkTuple<int, 3> *op = static_cast<vtkTuple<int, 3> *>(vp);

  return static_cast<Py_ssize_t>(op->GetSize());
}

PyObject *PyvtkTuple_IiLi3EE_SequenceItem(PyObject *self, Py_ssize_t i)
{
  void *vp = vtkPythonArgs::GetSelfPointer(self);
  vtkTuple<int, 3> *op = static_cast<vtkTuple<int, 3> *>(vp);

  int temp0;
  PyObject *result = NULL;

  temp0 = static_cast<int>(i);

  if (temp0 < 0 || temp0 >= op->GetSize())
    {
    PyErr_SetString(PyExc_IndexError, "index out of range");
    }
  else
    {
    const int *tempr = &(*op)[temp0];

    if (PyErr_Occurred() == NULL)
      {
      result = vtkPythonArgs::BuildValue(*tempr);
      }
    }

  return result;
}

int PyvtkTuple_IiLi3EE_SequenceSetItem(
  PyObject *self, Py_ssize_t i, PyObject *arg1)
{
  void *vp = vtkPythonArgs::GetSelfPointer(self);
  vtkTuple<int, 3> *op = static_cast<vtkTuple<int, 3> *>(vp);

  int temp0;
  int temp1;
  int result = -1;

  temp0 = static_cast<int>(i);

  if (temp0 < 0 || temp0 >= op->GetSize())
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

static PySequenceMethods PyvtkTuple_IiLi3EE_AsSequence = {
  PyvtkTuple_IiLi3EE_SequenceSize, // sq_length
  0, // sq_concat
  0, // sq_repeat
  PyvtkTuple_IiLi3EE_SequenceItem, // sq_item
  0, // sq_slice
  PyvtkTuple_IiLi3EE_SequenceSetItem, // sq_ass_item
  0, // sq_ass_slice
  0, // sq_contains
#if PY_VERSION_HEX >= 0x2000000
  0, // sq_inplace_concat
  0, // sq_inplace_repeat
#endif
};

static long PyvtkTuple_IiLi3EE_Hash(PyObject *self)
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

PyTypeObject PyvtkTuple_IiLi3EE_Type = {
  PyObject_HEAD_INIT(&PyType_Type)
  0,
  (char*)"vtkTuple_IiLi3EE", // tp_name
  sizeof(PyVTKSpecialObject), // tp_basicsize
  0, // tp_itemsize
  PyvtkTuple_IiLi3EE_Delete, // tp_dealloc
  0, // tp_print
  0, // tp_getattr
  0, // tp_setattr
  0, // tp_compare
  PyVTKSpecialObject_Repr, // tp_repr
  0, // tp_as_number
  &PyvtkTuple_IiLi3EE_AsSequence, // tp_as_sequence
  0, // tp_as_mapping
  PyvtkTuple_IiLi3EE_Hash, // tp_hash
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
  PyvtkTuple_IiLi3EE_Methods, // tp_methods
  0, // tp_members
  0, // tp_getset
  0, // tp_base
  0, // tp_dict
  0, // tp_descr_get
  0, // tp_descr_set
  0, // tp_dictoffset
  0, // tp_init
  0, // tp_alloc
  PyvtkTuple_IiLi3EE_New, // tp_new
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

static void *PyvtkTuple_IiLi3EE_CCopy(const void *obj)
{
  if (obj)
    {
    return new vtkTuple<int, 3>(*static_cast<const vtkTuple<int, 3>*>(obj));
    }
  return 0;
}

static PyObject *PyvtkTuple_IiLi3EE_TypeNew(const char *)
{
  PyObject *cls = PyVTKSpecialType_New(
    &PyvtkTuple_IiLi3EE_Type,
    PyvtkTuple_IiLi3EE_Methods,
    PyvtkTuple_IiLi3EE_vtkTuple_Methods,
    &PyvtkTuple_IiLi3EE_NewMethod,
    PyvtkTuple_IiLi3EE_Doc(), &PyvtkTuple_IiLi3EE_CCopy);

  return cls;
}

const char **PyvtkTuple_IiLi3EE_Doc()
{
  static const char *docstring[] = {
    "vtkTuple - templated base type for containers of constant size.\n\n",
    "This class is a templated data type for storing and manipulating\ntuples.\n\n",
    "V.vtkTuple()\nC++: vtkTuple()\nV.vtkTuple(int)\nC++: explicit vtkTuple(const int &scalar)\nV.vtkTuple((int, int, int))\nC++: explicit vtkTuple(const int *init)\nV.vtkTuple(vtkTuple<int, 3>)\nC++: vtkTuple(const &vtkTuple<int, 3>)\n",
    NULL
  };

  return docstring;
}


static const char **PyvtkTuple_IiLi4EE_Doc();


static PyObject *
PyvtkTuple_IiLi4EE_GetSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "GetSize");
  void *vp = ap.GetSelfPointer(self);
  vtkTuple<int, 4> *op = static_cast<vtkTuple<int, 4> *>(vp);

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    int tempr = op->GetSize();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTuple_IiLi4EE_GetData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "GetData");
  void *vp = ap.GetSelfPointer(self);
  vtkTuple<int, 4> *op = static_cast<vtkTuple<int, 4> *>(vp);

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    int *tempr = op->GetData();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTuple_IiLi4EE_Compare(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "Compare");
  void *vp = ap.GetSelfPointer(self);
  vtkTuple<int, 4> *op = static_cast<vtkTuple<int, 4> *>(vp);

  vtkTuple<int, 4> *temp0 = NULL;
  PyObject *pobj0 = NULL;
  int temp1;
  PyObject *result = NULL;

  if (ap.CheckArgCount(2) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkTuple_IiLi4EE") &&
      ap.GetValue(temp1))
    {
    bool tempr = op->Compare(*temp0, temp1);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkTuple_IiLi4EE_Methods[] = {
  {(char*)"GetSize", PyvtkTuple_IiLi4EE_GetSize, METH_VARARGS,
   (char*)"V.GetSize() -> int\nC++: int GetSize()\n\nGet the size of the tuple.\n"},
  {(char*)"GetData", PyvtkTuple_IiLi4EE_GetData, METH_VARARGS,
   (char*)"V.GetData() -> (int, ...)\nC++: int *GetData()\n\nGet a pointer to the underlying data of the tuple.\n"},
  {(char*)"Compare", PyvtkTuple_IiLi4EE_Compare, METH_VARARGS,
   (char*)"V.Compare(vtkTuple<int, 4>, int) -> bool\nC++: bool Compare(const vtkTuple<int, 4> &other, const int &tol)\n\nEquality operator with a tolerance to allow fuzzy comparisons.\n"},
  {NULL, NULL, 0, NULL}
};

#ifndef DECLARED_PyvtkTuple_IiLi4EE_Type
extern VTK_PYTHON_EXPORT PyTypeObject PyvtkTuple_IiLi4EE_Type;
#define DECLARED_PyvtkTuple_IiLi4EE_Type
#endif


static PyObject *
PyvtkTuple_IiLi4EE_vtkTuple_s1(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkTuple");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkTuple<int, 4> *op = new vtkTuple<int, 4>();
    (*op)[0] = 0;
    (*op)[1] = 0;
    (*op)[2] = 0;
    (*op)[3] = 0;

    result = PyVTKSpecialObject_New("vtkTuple_IiLi4EE", op);
    }

  return result;
}

static PyObject *
PyvtkTuple_IiLi4EE_vtkTuple_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkTuple");

  int temp0;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkTuple<int, 4> *op = new vtkTuple<int, 4>(temp0);

    result = PyVTKSpecialObject_New("vtkTuple_IiLi4EE", op);
    }

  return result;
}

static PyObject *
PyvtkTuple_IiLi4EE_vtkTuple_s3(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkTuple");

  int temp0[4];
  const int size0 = 4;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    vtkTuple<int, 4> *op = new vtkTuple<int, 4>(temp0);

    result = PyVTKSpecialObject_New("vtkTuple_IiLi4EE", op);
    }

  return result;
}

static PyObject *
PyvtkTuple_IiLi4EE_vtkTuple_s4(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkTuple");

  vtkTuple<int, 4> *temp0 = NULL;
  PyObject *pobj0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkTuple_IiLi4EE"))
    {
    vtkTuple<int, 4> *op = new vtkTuple<int, 4>(*temp0);

    result = PyVTKSpecialObject_New("vtkTuple_IiLi4EE", op);
    }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkTuple_IiLi4EE_vtkTuple_Methods[] = {
  {NULL, PyvtkTuple_IiLi4EE_vtkTuple_s2, METH_VARARGS,
   (char*)"-i"},
  {NULL, PyvtkTuple_IiLi4EE_vtkTuple_s3, METH_VARARGS,
   (char*)"-O *i"},
  {NULL, PyvtkTuple_IiLi4EE_vtkTuple_s4, METH_VARARGS,
   (char*)"O &vtkTuple_IiLi4EE"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkTuple_IiLi4EE_vtkTuple(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkTuple_IiLi4EE_vtkTuple_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
    {
    case 0:
      return PyvtkTuple_IiLi4EE_vtkTuple_s1(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "vtkTuple");
  return NULL;
}


static PyMethodDef PyvtkTuple_IiLi4EE_NewMethod = \
{ (char*)"vtkTuple_IiLi4EE", PyvtkTuple_IiLi4EE_vtkTuple, 1,
  (char*)"" };

#if PY_VERSION_HEX >= 0x02020000
static PyObject *
PyvtkTuple_IiLi4EE_New(PyTypeObject *, PyObject *args, PyObject *kwds)
{
  if (kwds && PyDict_Size(kwds))
    {
    PyErr_SetString(PyExc_TypeError,
                    "this function takes no keyword arguments");
    return NULL;
    }

  return PyvtkTuple_IiLi4EE_vtkTuple(NULL, args);
}
#endif

static void PyvtkTuple_IiLi4EE_Delete(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  if (obj->vtk_ptr)
    {
    delete static_cast<vtkTuple<int, 4> *>(obj->vtk_ptr);
    }
#if PY_MAJOR_VERSION >= 2
  PyObject_Del(self);
#else
  PyMem_DEL(self);
#endif
}

Py_ssize_t PyvtkTuple_IiLi4EE_SequenceSize(PyObject *self)
{
  void *vp = vtkPythonArgs::GetSelfPointer(self);
  vtkTuple<int, 4> *op = static_cast<vtkTuple<int, 4> *>(vp);

  return static_cast<Py_ssize_t>(op->GetSize());
}

PyObject *PyvtkTuple_IiLi4EE_SequenceItem(PyObject *self, Py_ssize_t i)
{
  void *vp = vtkPythonArgs::GetSelfPointer(self);
  vtkTuple<int, 4> *op = static_cast<vtkTuple<int, 4> *>(vp);

  int temp0;
  PyObject *result = NULL;

  temp0 = static_cast<int>(i);

  if (temp0 < 0 || temp0 >= op->GetSize())
    {
    PyErr_SetString(PyExc_IndexError, "index out of range");
    }
  else
    {
    const int *tempr = &(*op)[temp0];

    if (PyErr_Occurred() == NULL)
      {
      result = vtkPythonArgs::BuildValue(*tempr);
      }
    }

  return result;
}

int PyvtkTuple_IiLi4EE_SequenceSetItem(
  PyObject *self, Py_ssize_t i, PyObject *arg1)
{
  void *vp = vtkPythonArgs::GetSelfPointer(self);
  vtkTuple<int, 4> *op = static_cast<vtkTuple<int, 4> *>(vp);

  int temp0;
  int temp1;
  int result = -1;

  temp0 = static_cast<int>(i);

  if (temp0 < 0 || temp0 >= op->GetSize())
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

static PySequenceMethods PyvtkTuple_IiLi4EE_AsSequence = {
  PyvtkTuple_IiLi4EE_SequenceSize, // sq_length
  0, // sq_concat
  0, // sq_repeat
  PyvtkTuple_IiLi4EE_SequenceItem, // sq_item
  0, // sq_slice
  PyvtkTuple_IiLi4EE_SequenceSetItem, // sq_ass_item
  0, // sq_ass_slice
  0, // sq_contains
#if PY_VERSION_HEX >= 0x2000000
  0, // sq_inplace_concat
  0, // sq_inplace_repeat
#endif
};

static long PyvtkTuple_IiLi4EE_Hash(PyObject *self)
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

PyTypeObject PyvtkTuple_IiLi4EE_Type = {
  PyObject_HEAD_INIT(&PyType_Type)
  0,
  (char*)"vtkTuple_IiLi4EE", // tp_name
  sizeof(PyVTKSpecialObject), // tp_basicsize
  0, // tp_itemsize
  PyvtkTuple_IiLi4EE_Delete, // tp_dealloc
  0, // tp_print
  0, // tp_getattr
  0, // tp_setattr
  0, // tp_compare
  PyVTKSpecialObject_Repr, // tp_repr
  0, // tp_as_number
  &PyvtkTuple_IiLi4EE_AsSequence, // tp_as_sequence
  0, // tp_as_mapping
  PyvtkTuple_IiLi4EE_Hash, // tp_hash
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
  PyvtkTuple_IiLi4EE_Methods, // tp_methods
  0, // tp_members
  0, // tp_getset
  0, // tp_base
  0, // tp_dict
  0, // tp_descr_get
  0, // tp_descr_set
  0, // tp_dictoffset
  0, // tp_init
  0, // tp_alloc
  PyvtkTuple_IiLi4EE_New, // tp_new
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

static void *PyvtkTuple_IiLi4EE_CCopy(const void *obj)
{
  if (obj)
    {
    return new vtkTuple<int, 4>(*static_cast<const vtkTuple<int, 4>*>(obj));
    }
  return 0;
}

static PyObject *PyvtkTuple_IiLi4EE_TypeNew(const char *)
{
  PyObject *cls = PyVTKSpecialType_New(
    &PyvtkTuple_IiLi4EE_Type,
    PyvtkTuple_IiLi4EE_Methods,
    PyvtkTuple_IiLi4EE_vtkTuple_Methods,
    &PyvtkTuple_IiLi4EE_NewMethod,
    PyvtkTuple_IiLi4EE_Doc(), &PyvtkTuple_IiLi4EE_CCopy);

  return cls;
}

const char **PyvtkTuple_IiLi4EE_Doc()
{
  static const char *docstring[] = {
    "vtkTuple - templated base type for containers of constant size.\n\n",
    "This class is a templated data type for storing and manipulating\ntuples.\n\n",
    "V.vtkTuple()\nC++: vtkTuple()\nV.vtkTuple(int)\nC++: explicit vtkTuple(const int &scalar)\nV.vtkTuple((int, int, int, int))\nC++: explicit vtkTuple(const int *init)\nV.vtkTuple(vtkTuple<int, 4>)\nC++: vtkTuple(const &vtkTuple<int, 4>)\n",
    NULL
  };

  return docstring;
}


static const char **PyvtkTuple_IfLi2EE_Doc();


static PyObject *
PyvtkTuple_IfLi2EE_GetSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "GetSize");
  void *vp = ap.GetSelfPointer(self);
  vtkTuple<float, 2> *op = static_cast<vtkTuple<float, 2> *>(vp);

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    int tempr = op->GetSize();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTuple_IfLi2EE_GetData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "GetData");
  void *vp = ap.GetSelfPointer(self);
  vtkTuple<float, 2> *op = static_cast<vtkTuple<float, 2> *>(vp);

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    float *tempr = op->GetData();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTuple_IfLi2EE_Compare(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "Compare");
  void *vp = ap.GetSelfPointer(self);
  vtkTuple<float, 2> *op = static_cast<vtkTuple<float, 2> *>(vp);

  vtkTuple<float, 2> *temp0 = NULL;
  PyObject *pobj0 = NULL;
  float temp1;
  PyObject *result = NULL;

  if (ap.CheckArgCount(2) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkTuple_IfLi2EE") &&
      ap.GetValue(temp1))
    {
    bool tempr = op->Compare(*temp0, temp1);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkTuple_IfLi2EE_Methods[] = {
  {(char*)"GetSize", PyvtkTuple_IfLi2EE_GetSize, METH_VARARGS,
   (char*)"V.GetSize() -> int\nC++: int GetSize()\n\nGet the size of the tuple.\n"},
  {(char*)"GetData", PyvtkTuple_IfLi2EE_GetData, METH_VARARGS,
   (char*)"V.GetData() -> (float, ...)\nC++: float *GetData()\n\nGet a pointer to the underlying data of the tuple.\n"},
  {(char*)"Compare", PyvtkTuple_IfLi2EE_Compare, METH_VARARGS,
   (char*)"V.Compare(vtkTuple<float, 2>, float) -> bool\nC++: bool Compare(const vtkTuple<float, 2> &other,\n    const float &tol)\n\nEquality operator with a tolerance to allow fuzzy comparisons.\n"},
  {NULL, NULL, 0, NULL}
};

#ifndef DECLARED_PyvtkTuple_IfLi2EE_Type
extern VTK_PYTHON_EXPORT PyTypeObject PyvtkTuple_IfLi2EE_Type;
#define DECLARED_PyvtkTuple_IfLi2EE_Type
#endif


static PyObject *
PyvtkTuple_IfLi2EE_vtkTuple_s1(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkTuple");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkTuple<float, 2> *op = new vtkTuple<float, 2>();
    (*op)[0] = 0;
    (*op)[1] = 0;

    result = PyVTKSpecialObject_New("vtkTuple_IfLi2EE", op);
    }

  return result;
}

static PyObject *
PyvtkTuple_IfLi2EE_vtkTuple_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkTuple");

  float temp0;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkTuple<float, 2> *op = new vtkTuple<float, 2>(temp0);

    result = PyVTKSpecialObject_New("vtkTuple_IfLi2EE", op);
    }

  return result;
}

static PyObject *
PyvtkTuple_IfLi2EE_vtkTuple_s3(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkTuple");

  float temp0[2];
  const int size0 = 2;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    vtkTuple<float, 2> *op = new vtkTuple<float, 2>(temp0);

    result = PyVTKSpecialObject_New("vtkTuple_IfLi2EE", op);
    }

  return result;
}

static PyObject *
PyvtkTuple_IfLi2EE_vtkTuple_s4(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkTuple");

  vtkTuple<float, 2> *temp0 = NULL;
  PyObject *pobj0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkTuple_IfLi2EE"))
    {
    vtkTuple<float, 2> *op = new vtkTuple<float, 2>(*temp0);

    result = PyVTKSpecialObject_New("vtkTuple_IfLi2EE", op);
    }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkTuple_IfLi2EE_vtkTuple_Methods[] = {
  {NULL, PyvtkTuple_IfLi2EE_vtkTuple_s2, METH_VARARGS,
   (char*)"-f"},
  {NULL, PyvtkTuple_IfLi2EE_vtkTuple_s3, METH_VARARGS,
   (char*)"-O *f"},
  {NULL, PyvtkTuple_IfLi2EE_vtkTuple_s4, METH_VARARGS,
   (char*)"O &vtkTuple_IfLi2EE"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkTuple_IfLi2EE_vtkTuple(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkTuple_IfLi2EE_vtkTuple_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
    {
    case 0:
      return PyvtkTuple_IfLi2EE_vtkTuple_s1(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "vtkTuple");
  return NULL;
}


static PyMethodDef PyvtkTuple_IfLi2EE_NewMethod = \
{ (char*)"vtkTuple_IfLi2EE", PyvtkTuple_IfLi2EE_vtkTuple, 1,
  (char*)"" };

#if PY_VERSION_HEX >= 0x02020000
static PyObject *
PyvtkTuple_IfLi2EE_New(PyTypeObject *, PyObject *args, PyObject *kwds)
{
  if (kwds && PyDict_Size(kwds))
    {
    PyErr_SetString(PyExc_TypeError,
                    "this function takes no keyword arguments");
    return NULL;
    }

  return PyvtkTuple_IfLi2EE_vtkTuple(NULL, args);
}
#endif

static void PyvtkTuple_IfLi2EE_Delete(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  if (obj->vtk_ptr)
    {
    delete static_cast<vtkTuple<float, 2> *>(obj->vtk_ptr);
    }
#if PY_MAJOR_VERSION >= 2
  PyObject_Del(self);
#else
  PyMem_DEL(self);
#endif
}

Py_ssize_t PyvtkTuple_IfLi2EE_SequenceSize(PyObject *self)
{
  void *vp = vtkPythonArgs::GetSelfPointer(self);
  vtkTuple<float, 2> *op = static_cast<vtkTuple<float, 2> *>(vp);

  return static_cast<Py_ssize_t>(op->GetSize());
}

PyObject *PyvtkTuple_IfLi2EE_SequenceItem(PyObject *self, Py_ssize_t i)
{
  void *vp = vtkPythonArgs::GetSelfPointer(self);
  vtkTuple<float, 2> *op = static_cast<vtkTuple<float, 2> *>(vp);

  int temp0;
  PyObject *result = NULL;

  temp0 = static_cast<int>(i);

  if (temp0 < 0 || temp0 >= op->GetSize())
    {
    PyErr_SetString(PyExc_IndexError, "index out of range");
    }
  else
    {
    const float *tempr = &(*op)[temp0];

    if (PyErr_Occurred() == NULL)
      {
      result = vtkPythonArgs::BuildValue(*tempr);
      }
    }

  return result;
}

int PyvtkTuple_IfLi2EE_SequenceSetItem(
  PyObject *self, Py_ssize_t i, PyObject *arg1)
{
  void *vp = vtkPythonArgs::GetSelfPointer(self);
  vtkTuple<float, 2> *op = static_cast<vtkTuple<float, 2> *>(vp);

  int temp0;
  float temp1;
  int result = -1;

  temp0 = static_cast<int>(i);

  if (temp0 < 0 || temp0 >= op->GetSize())
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

static PySequenceMethods PyvtkTuple_IfLi2EE_AsSequence = {
  PyvtkTuple_IfLi2EE_SequenceSize, // sq_length
  0, // sq_concat
  0, // sq_repeat
  PyvtkTuple_IfLi2EE_SequenceItem, // sq_item
  0, // sq_slice
  PyvtkTuple_IfLi2EE_SequenceSetItem, // sq_ass_item
  0, // sq_ass_slice
  0, // sq_contains
#if PY_VERSION_HEX >= 0x2000000
  0, // sq_inplace_concat
  0, // sq_inplace_repeat
#endif
};

static long PyvtkTuple_IfLi2EE_Hash(PyObject *self)
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

PyTypeObject PyvtkTuple_IfLi2EE_Type = {
  PyObject_HEAD_INIT(&PyType_Type)
  0,
  (char*)"vtkTuple_IfLi2EE", // tp_name
  sizeof(PyVTKSpecialObject), // tp_basicsize
  0, // tp_itemsize
  PyvtkTuple_IfLi2EE_Delete, // tp_dealloc
  0, // tp_print
  0, // tp_getattr
  0, // tp_setattr
  0, // tp_compare
  PyVTKSpecialObject_Repr, // tp_repr
  0, // tp_as_number
  &PyvtkTuple_IfLi2EE_AsSequence, // tp_as_sequence
  0, // tp_as_mapping
  PyvtkTuple_IfLi2EE_Hash, // tp_hash
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
  PyvtkTuple_IfLi2EE_Methods, // tp_methods
  0, // tp_members
  0, // tp_getset
  0, // tp_base
  0, // tp_dict
  0, // tp_descr_get
  0, // tp_descr_set
  0, // tp_dictoffset
  0, // tp_init
  0, // tp_alloc
  PyvtkTuple_IfLi2EE_New, // tp_new
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

static void *PyvtkTuple_IfLi2EE_CCopy(const void *obj)
{
  if (obj)
    {
    return new vtkTuple<float, 2>(*static_cast<const vtkTuple<float, 2>*>(obj));
    }
  return 0;
}

static PyObject *PyvtkTuple_IfLi2EE_TypeNew(const char *)
{
  PyObject *cls = PyVTKSpecialType_New(
    &PyvtkTuple_IfLi2EE_Type,
    PyvtkTuple_IfLi2EE_Methods,
    PyvtkTuple_IfLi2EE_vtkTuple_Methods,
    &PyvtkTuple_IfLi2EE_NewMethod,
    PyvtkTuple_IfLi2EE_Doc(), &PyvtkTuple_IfLi2EE_CCopy);

  return cls;
}

const char **PyvtkTuple_IfLi2EE_Doc()
{
  static const char *docstring[] = {
    "vtkTuple - templated base type for containers of constant size.\n\n",
    "This class is a templated data type for storing and manipulating\ntuples.\n\n",
    "V.vtkTuple()\nC++: vtkTuple()\nV.vtkTuple(float)\nC++: explicit vtkTuple(const float &scalar)\nV.vtkTuple((float, float))\nC++: explicit vtkTuple(const float *init)\nV.vtkTuple(vtkTuple<float, 2>)\nC++: vtkTuple(const &vtkTuple<float, 2>)\n",
    NULL
  };

  return docstring;
}


static const char **PyvtkTuple_IfLi3EE_Doc();


static PyObject *
PyvtkTuple_IfLi3EE_GetSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "GetSize");
  void *vp = ap.GetSelfPointer(self);
  vtkTuple<float, 3> *op = static_cast<vtkTuple<float, 3> *>(vp);

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    int tempr = op->GetSize();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTuple_IfLi3EE_GetData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "GetData");
  void *vp = ap.GetSelfPointer(self);
  vtkTuple<float, 3> *op = static_cast<vtkTuple<float, 3> *>(vp);

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    float *tempr = op->GetData();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTuple_IfLi3EE_Compare(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "Compare");
  void *vp = ap.GetSelfPointer(self);
  vtkTuple<float, 3> *op = static_cast<vtkTuple<float, 3> *>(vp);

  vtkTuple<float, 3> *temp0 = NULL;
  PyObject *pobj0 = NULL;
  float temp1;
  PyObject *result = NULL;

  if (ap.CheckArgCount(2) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkTuple_IfLi3EE") &&
      ap.GetValue(temp1))
    {
    bool tempr = op->Compare(*temp0, temp1);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkTuple_IfLi3EE_Methods[] = {
  {(char*)"GetSize", PyvtkTuple_IfLi3EE_GetSize, METH_VARARGS,
   (char*)"V.GetSize() -> int\nC++: int GetSize()\n\nGet the size of the tuple.\n"},
  {(char*)"GetData", PyvtkTuple_IfLi3EE_GetData, METH_VARARGS,
   (char*)"V.GetData() -> (float, ...)\nC++: float *GetData()\n\nGet a pointer to the underlying data of the tuple.\n"},
  {(char*)"Compare", PyvtkTuple_IfLi3EE_Compare, METH_VARARGS,
   (char*)"V.Compare(vtkTuple<float, 3>, float) -> bool\nC++: bool Compare(const vtkTuple<float, 3> &other,\n    const float &tol)\n\nEquality operator with a tolerance to allow fuzzy comparisons.\n"},
  {NULL, NULL, 0, NULL}
};

#ifndef DECLARED_PyvtkTuple_IfLi3EE_Type
extern VTK_PYTHON_EXPORT PyTypeObject PyvtkTuple_IfLi3EE_Type;
#define DECLARED_PyvtkTuple_IfLi3EE_Type
#endif


static PyObject *
PyvtkTuple_IfLi3EE_vtkTuple_s1(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkTuple");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkTuple<float, 3> *op = new vtkTuple<float, 3>();
    (*op)[0] = 0;
    (*op)[1] = 0;
    (*op)[2] = 0;

    result = PyVTKSpecialObject_New("vtkTuple_IfLi3EE", op);
    }

  return result;
}

static PyObject *
PyvtkTuple_IfLi3EE_vtkTuple_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkTuple");

  float temp0;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkTuple<float, 3> *op = new vtkTuple<float, 3>(temp0);

    result = PyVTKSpecialObject_New("vtkTuple_IfLi3EE", op);
    }

  return result;
}

static PyObject *
PyvtkTuple_IfLi3EE_vtkTuple_s3(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkTuple");

  float temp0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    vtkTuple<float, 3> *op = new vtkTuple<float, 3>(temp0);

    result = PyVTKSpecialObject_New("vtkTuple_IfLi3EE", op);
    }

  return result;
}

static PyObject *
PyvtkTuple_IfLi3EE_vtkTuple_s4(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkTuple");

  vtkTuple<float, 3> *temp0 = NULL;
  PyObject *pobj0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkTuple_IfLi3EE"))
    {
    vtkTuple<float, 3> *op = new vtkTuple<float, 3>(*temp0);

    result = PyVTKSpecialObject_New("vtkTuple_IfLi3EE", op);
    }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkTuple_IfLi3EE_vtkTuple_Methods[] = {
  {NULL, PyvtkTuple_IfLi3EE_vtkTuple_s2, METH_VARARGS,
   (char*)"-f"},
  {NULL, PyvtkTuple_IfLi3EE_vtkTuple_s3, METH_VARARGS,
   (char*)"-O *f"},
  {NULL, PyvtkTuple_IfLi3EE_vtkTuple_s4, METH_VARARGS,
   (char*)"O &vtkTuple_IfLi3EE"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkTuple_IfLi3EE_vtkTuple(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkTuple_IfLi3EE_vtkTuple_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
    {
    case 0:
      return PyvtkTuple_IfLi3EE_vtkTuple_s1(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "vtkTuple");
  return NULL;
}


static PyMethodDef PyvtkTuple_IfLi3EE_NewMethod = \
{ (char*)"vtkTuple_IfLi3EE", PyvtkTuple_IfLi3EE_vtkTuple, 1,
  (char*)"" };

#if PY_VERSION_HEX >= 0x02020000
static PyObject *
PyvtkTuple_IfLi3EE_New(PyTypeObject *, PyObject *args, PyObject *kwds)
{
  if (kwds && PyDict_Size(kwds))
    {
    PyErr_SetString(PyExc_TypeError,
                    "this function takes no keyword arguments");
    return NULL;
    }

  return PyvtkTuple_IfLi3EE_vtkTuple(NULL, args);
}
#endif

static void PyvtkTuple_IfLi3EE_Delete(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  if (obj->vtk_ptr)
    {
    delete static_cast<vtkTuple<float, 3> *>(obj->vtk_ptr);
    }
#if PY_MAJOR_VERSION >= 2
  PyObject_Del(self);
#else
  PyMem_DEL(self);
#endif
}

Py_ssize_t PyvtkTuple_IfLi3EE_SequenceSize(PyObject *self)
{
  void *vp = vtkPythonArgs::GetSelfPointer(self);
  vtkTuple<float, 3> *op = static_cast<vtkTuple<float, 3> *>(vp);

  return static_cast<Py_ssize_t>(op->GetSize());
}

PyObject *PyvtkTuple_IfLi3EE_SequenceItem(PyObject *self, Py_ssize_t i)
{
  void *vp = vtkPythonArgs::GetSelfPointer(self);
  vtkTuple<float, 3> *op = static_cast<vtkTuple<float, 3> *>(vp);

  int temp0;
  PyObject *result = NULL;

  temp0 = static_cast<int>(i);

  if (temp0 < 0 || temp0 >= op->GetSize())
    {
    PyErr_SetString(PyExc_IndexError, "index out of range");
    }
  else
    {
    const float *tempr = &(*op)[temp0];

    if (PyErr_Occurred() == NULL)
      {
      result = vtkPythonArgs::BuildValue(*tempr);
      }
    }

  return result;
}

int PyvtkTuple_IfLi3EE_SequenceSetItem(
  PyObject *self, Py_ssize_t i, PyObject *arg1)
{
  void *vp = vtkPythonArgs::GetSelfPointer(self);
  vtkTuple<float, 3> *op = static_cast<vtkTuple<float, 3> *>(vp);

  int temp0;
  float temp1;
  int result = -1;

  temp0 = static_cast<int>(i);

  if (temp0 < 0 || temp0 >= op->GetSize())
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

static PySequenceMethods PyvtkTuple_IfLi3EE_AsSequence = {
  PyvtkTuple_IfLi3EE_SequenceSize, // sq_length
  0, // sq_concat
  0, // sq_repeat
  PyvtkTuple_IfLi3EE_SequenceItem, // sq_item
  0, // sq_slice
  PyvtkTuple_IfLi3EE_SequenceSetItem, // sq_ass_item
  0, // sq_ass_slice
  0, // sq_contains
#if PY_VERSION_HEX >= 0x2000000
  0, // sq_inplace_concat
  0, // sq_inplace_repeat
#endif
};

static long PyvtkTuple_IfLi3EE_Hash(PyObject *self)
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

PyTypeObject PyvtkTuple_IfLi3EE_Type = {
  PyObject_HEAD_INIT(&PyType_Type)
  0,
  (char*)"vtkTuple_IfLi3EE", // tp_name
  sizeof(PyVTKSpecialObject), // tp_basicsize
  0, // tp_itemsize
  PyvtkTuple_IfLi3EE_Delete, // tp_dealloc
  0, // tp_print
  0, // tp_getattr
  0, // tp_setattr
  0, // tp_compare
  PyVTKSpecialObject_Repr, // tp_repr
  0, // tp_as_number
  &PyvtkTuple_IfLi3EE_AsSequence, // tp_as_sequence
  0, // tp_as_mapping
  PyvtkTuple_IfLi3EE_Hash, // tp_hash
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
  PyvtkTuple_IfLi3EE_Methods, // tp_methods
  0, // tp_members
  0, // tp_getset
  0, // tp_base
  0, // tp_dict
  0, // tp_descr_get
  0, // tp_descr_set
  0, // tp_dictoffset
  0, // tp_init
  0, // tp_alloc
  PyvtkTuple_IfLi3EE_New, // tp_new
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

static void *PyvtkTuple_IfLi3EE_CCopy(const void *obj)
{
  if (obj)
    {
    return new vtkTuple<float, 3>(*static_cast<const vtkTuple<float, 3>*>(obj));
    }
  return 0;
}

static PyObject *PyvtkTuple_IfLi3EE_TypeNew(const char *)
{
  PyObject *cls = PyVTKSpecialType_New(
    &PyvtkTuple_IfLi3EE_Type,
    PyvtkTuple_IfLi3EE_Methods,
    PyvtkTuple_IfLi3EE_vtkTuple_Methods,
    &PyvtkTuple_IfLi3EE_NewMethod,
    PyvtkTuple_IfLi3EE_Doc(), &PyvtkTuple_IfLi3EE_CCopy);

  return cls;
}

const char **PyvtkTuple_IfLi3EE_Doc()
{
  static const char *docstring[] = {
    "vtkTuple - templated base type for containers of constant size.\n\n",
    "This class is a templated data type for storing and manipulating\ntuples.\n\n",
    "V.vtkTuple()\nC++: vtkTuple()\nV.vtkTuple(float)\nC++: explicit vtkTuple(const float &scalar)\nV.vtkTuple((float, float, float))\nC++: explicit vtkTuple(const float *init)\nV.vtkTuple(vtkTuple<float, 3>)\nC++: vtkTuple(const &vtkTuple<float, 3>)\n",
    NULL
  };

  return docstring;
}


static const char **PyvtkTuple_IdLi2EE_Doc();


static PyObject *
PyvtkTuple_IdLi2EE_GetSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "GetSize");
  void *vp = ap.GetSelfPointer(self);
  vtkTuple<double, 2> *op = static_cast<vtkTuple<double, 2> *>(vp);

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    int tempr = op->GetSize();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTuple_IdLi2EE_GetData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "GetData");
  void *vp = ap.GetSelfPointer(self);
  vtkTuple<double, 2> *op = static_cast<vtkTuple<double, 2> *>(vp);

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    double *tempr = op->GetData();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTuple_IdLi2EE_Compare(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "Compare");
  void *vp = ap.GetSelfPointer(self);
  vtkTuple<double, 2> *op = static_cast<vtkTuple<double, 2> *>(vp);

  vtkTuple<double, 2> *temp0 = NULL;
  PyObject *pobj0 = NULL;
  double temp1;
  PyObject *result = NULL;

  if (ap.CheckArgCount(2) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkTuple_IdLi2EE") &&
      ap.GetValue(temp1))
    {
    bool tempr = op->Compare(*temp0, temp1);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkTuple_IdLi2EE_Methods[] = {
  {(char*)"GetSize", PyvtkTuple_IdLi2EE_GetSize, METH_VARARGS,
   (char*)"V.GetSize() -> int\nC++: int GetSize()\n\nGet the size of the tuple.\n"},
  {(char*)"GetData", PyvtkTuple_IdLi2EE_GetData, METH_VARARGS,
   (char*)"V.GetData() -> (float, ...)\nC++: double *GetData()\n\nGet a pointer to the underlying data of the tuple.\n"},
  {(char*)"Compare", PyvtkTuple_IdLi2EE_Compare, METH_VARARGS,
   (char*)"V.Compare(vtkTuple<double, 2>, float) -> bool\nC++: bool Compare(const vtkTuple<double, 2> &other,\n    const double &tol)\n\nEquality operator with a tolerance to allow fuzzy comparisons.\n"},
  {NULL, NULL, 0, NULL}
};

#ifndef DECLARED_PyvtkTuple_IdLi2EE_Type
extern VTK_PYTHON_EXPORT PyTypeObject PyvtkTuple_IdLi2EE_Type;
#define DECLARED_PyvtkTuple_IdLi2EE_Type
#endif


static PyObject *
PyvtkTuple_IdLi2EE_vtkTuple_s1(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkTuple");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkTuple<double, 2> *op = new vtkTuple<double, 2>();
    (*op)[0] = 0;
    (*op)[1] = 0;

    result = PyVTKSpecialObject_New("vtkTuple_IdLi2EE", op);
    }

  return result;
}

static PyObject *
PyvtkTuple_IdLi2EE_vtkTuple_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkTuple");

  double temp0;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkTuple<double, 2> *op = new vtkTuple<double, 2>(temp0);

    result = PyVTKSpecialObject_New("vtkTuple_IdLi2EE", op);
    }

  return result;
}

static PyObject *
PyvtkTuple_IdLi2EE_vtkTuple_s3(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkTuple");

  double temp0[2];
  const int size0 = 2;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    vtkTuple<double, 2> *op = new vtkTuple<double, 2>(temp0);

    result = PyVTKSpecialObject_New("vtkTuple_IdLi2EE", op);
    }

  return result;
}

static PyObject *
PyvtkTuple_IdLi2EE_vtkTuple_s4(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkTuple");

  vtkTuple<double, 2> *temp0 = NULL;
  PyObject *pobj0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkTuple_IdLi2EE"))
    {
    vtkTuple<double, 2> *op = new vtkTuple<double, 2>(*temp0);

    result = PyVTKSpecialObject_New("vtkTuple_IdLi2EE", op);
    }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkTuple_IdLi2EE_vtkTuple_Methods[] = {
  {NULL, PyvtkTuple_IdLi2EE_vtkTuple_s2, METH_VARARGS,
   (char*)"-d"},
  {NULL, PyvtkTuple_IdLi2EE_vtkTuple_s3, METH_VARARGS,
   (char*)"-O *d"},
  {NULL, PyvtkTuple_IdLi2EE_vtkTuple_s4, METH_VARARGS,
   (char*)"O &vtkTuple_IdLi2EE"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkTuple_IdLi2EE_vtkTuple(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkTuple_IdLi2EE_vtkTuple_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
    {
    case 0:
      return PyvtkTuple_IdLi2EE_vtkTuple_s1(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "vtkTuple");
  return NULL;
}


static PyMethodDef PyvtkTuple_IdLi2EE_NewMethod = \
{ (char*)"vtkTuple_IdLi2EE", PyvtkTuple_IdLi2EE_vtkTuple, 1,
  (char*)"" };

#if PY_VERSION_HEX >= 0x02020000
static PyObject *
PyvtkTuple_IdLi2EE_New(PyTypeObject *, PyObject *args, PyObject *kwds)
{
  if (kwds && PyDict_Size(kwds))
    {
    PyErr_SetString(PyExc_TypeError,
                    "this function takes no keyword arguments");
    return NULL;
    }

  return PyvtkTuple_IdLi2EE_vtkTuple(NULL, args);
}
#endif

static void PyvtkTuple_IdLi2EE_Delete(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  if (obj->vtk_ptr)
    {
    delete static_cast<vtkTuple<double, 2> *>(obj->vtk_ptr);
    }
#if PY_MAJOR_VERSION >= 2
  PyObject_Del(self);
#else
  PyMem_DEL(self);
#endif
}

Py_ssize_t PyvtkTuple_IdLi2EE_SequenceSize(PyObject *self)
{
  void *vp = vtkPythonArgs::GetSelfPointer(self);
  vtkTuple<double, 2> *op = static_cast<vtkTuple<double, 2> *>(vp);

  return static_cast<Py_ssize_t>(op->GetSize());
}

PyObject *PyvtkTuple_IdLi2EE_SequenceItem(PyObject *self, Py_ssize_t i)
{
  void *vp = vtkPythonArgs::GetSelfPointer(self);
  vtkTuple<double, 2> *op = static_cast<vtkTuple<double, 2> *>(vp);

  int temp0;
  PyObject *result = NULL;

  temp0 = static_cast<int>(i);

  if (temp0 < 0 || temp0 >= op->GetSize())
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

int PyvtkTuple_IdLi2EE_SequenceSetItem(
  PyObject *self, Py_ssize_t i, PyObject *arg1)
{
  void *vp = vtkPythonArgs::GetSelfPointer(self);
  vtkTuple<double, 2> *op = static_cast<vtkTuple<double, 2> *>(vp);

  int temp0;
  double temp1;
  int result = -1;

  temp0 = static_cast<int>(i);

  if (temp0 < 0 || temp0 >= op->GetSize())
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

static PySequenceMethods PyvtkTuple_IdLi2EE_AsSequence = {
  PyvtkTuple_IdLi2EE_SequenceSize, // sq_length
  0, // sq_concat
  0, // sq_repeat
  PyvtkTuple_IdLi2EE_SequenceItem, // sq_item
  0, // sq_slice
  PyvtkTuple_IdLi2EE_SequenceSetItem, // sq_ass_item
  0, // sq_ass_slice
  0, // sq_contains
#if PY_VERSION_HEX >= 0x2000000
  0, // sq_inplace_concat
  0, // sq_inplace_repeat
#endif
};

static long PyvtkTuple_IdLi2EE_Hash(PyObject *self)
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

PyTypeObject PyvtkTuple_IdLi2EE_Type = {
  PyObject_HEAD_INIT(&PyType_Type)
  0,
  (char*)"vtkTuple_IdLi2EE", // tp_name
  sizeof(PyVTKSpecialObject), // tp_basicsize
  0, // tp_itemsize
  PyvtkTuple_IdLi2EE_Delete, // tp_dealloc
  0, // tp_print
  0, // tp_getattr
  0, // tp_setattr
  0, // tp_compare
  PyVTKSpecialObject_Repr, // tp_repr
  0, // tp_as_number
  &PyvtkTuple_IdLi2EE_AsSequence, // tp_as_sequence
  0, // tp_as_mapping
  PyvtkTuple_IdLi2EE_Hash, // tp_hash
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
  PyvtkTuple_IdLi2EE_Methods, // tp_methods
  0, // tp_members
  0, // tp_getset
  0, // tp_base
  0, // tp_dict
  0, // tp_descr_get
  0, // tp_descr_set
  0, // tp_dictoffset
  0, // tp_init
  0, // tp_alloc
  PyvtkTuple_IdLi2EE_New, // tp_new
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

static void *PyvtkTuple_IdLi2EE_CCopy(const void *obj)
{
  if (obj)
    {
    return new vtkTuple<double, 2>(*static_cast<const vtkTuple<double, 2>*>(obj));
    }
  return 0;
}

static PyObject *PyvtkTuple_IdLi2EE_TypeNew(const char *)
{
  PyObject *cls = PyVTKSpecialType_New(
    &PyvtkTuple_IdLi2EE_Type,
    PyvtkTuple_IdLi2EE_Methods,
    PyvtkTuple_IdLi2EE_vtkTuple_Methods,
    &PyvtkTuple_IdLi2EE_NewMethod,
    PyvtkTuple_IdLi2EE_Doc(), &PyvtkTuple_IdLi2EE_CCopy);

  return cls;
}

const char **PyvtkTuple_IdLi2EE_Doc()
{
  static const char *docstring[] = {
    "vtkTuple - templated base type for containers of constant size.\n\n",
    "This class is a templated data type for storing and manipulating\ntuples.\n\n",
    "V.vtkTuple()\nC++: vtkTuple()\nV.vtkTuple(float)\nC++: explicit vtkTuple(const double &scalar)\nV.vtkTuple((float, float))\nC++: explicit vtkTuple(const double *init)\nV.vtkTuple(vtkTuple<double, 2>)\nC++: vtkTuple(const &vtkTuple<double, 2>)\n",
    NULL
  };

  return docstring;
}


static const char **PyvtkTuple_IdLi3EE_Doc();


static PyObject *
PyvtkTuple_IdLi3EE_GetSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "GetSize");
  void *vp = ap.GetSelfPointer(self);
  vtkTuple<double, 3> *op = static_cast<vtkTuple<double, 3> *>(vp);

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    int tempr = op->GetSize();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTuple_IdLi3EE_GetData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "GetData");
  void *vp = ap.GetSelfPointer(self);
  vtkTuple<double, 3> *op = static_cast<vtkTuple<double, 3> *>(vp);

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    double *tempr = op->GetData();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTuple_IdLi3EE_Compare(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "Compare");
  void *vp = ap.GetSelfPointer(self);
  vtkTuple<double, 3> *op = static_cast<vtkTuple<double, 3> *>(vp);

  vtkTuple<double, 3> *temp0 = NULL;
  PyObject *pobj0 = NULL;
  double temp1;
  PyObject *result = NULL;

  if (ap.CheckArgCount(2) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkTuple_IdLi3EE") &&
      ap.GetValue(temp1))
    {
    bool tempr = op->Compare(*temp0, temp1);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkTuple_IdLi3EE_Methods[] = {
  {(char*)"GetSize", PyvtkTuple_IdLi3EE_GetSize, METH_VARARGS,
   (char*)"V.GetSize() -> int\nC++: int GetSize()\n\nGet the size of the tuple.\n"},
  {(char*)"GetData", PyvtkTuple_IdLi3EE_GetData, METH_VARARGS,
   (char*)"V.GetData() -> (float, ...)\nC++: double *GetData()\n\nGet a pointer to the underlying data of the tuple.\n"},
  {(char*)"Compare", PyvtkTuple_IdLi3EE_Compare, METH_VARARGS,
   (char*)"V.Compare(vtkTuple<double, 3>, float) -> bool\nC++: bool Compare(const vtkTuple<double, 3> &other,\n    const double &tol)\n\nEquality operator with a tolerance to allow fuzzy comparisons.\n"},
  {NULL, NULL, 0, NULL}
};

#ifndef DECLARED_PyvtkTuple_IdLi3EE_Type
extern VTK_PYTHON_EXPORT PyTypeObject PyvtkTuple_IdLi3EE_Type;
#define DECLARED_PyvtkTuple_IdLi3EE_Type
#endif


static PyObject *
PyvtkTuple_IdLi3EE_vtkTuple_s1(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkTuple");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkTuple<double, 3> *op = new vtkTuple<double, 3>();
    (*op)[0] = 0;
    (*op)[1] = 0;
    (*op)[2] = 0;

    result = PyVTKSpecialObject_New("vtkTuple_IdLi3EE", op);
    }

  return result;
}

static PyObject *
PyvtkTuple_IdLi3EE_vtkTuple_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkTuple");

  double temp0;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkTuple<double, 3> *op = new vtkTuple<double, 3>(temp0);

    result = PyVTKSpecialObject_New("vtkTuple_IdLi3EE", op);
    }

  return result;
}

static PyObject *
PyvtkTuple_IdLi3EE_vtkTuple_s3(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkTuple");

  double temp0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    vtkTuple<double, 3> *op = new vtkTuple<double, 3>(temp0);

    result = PyVTKSpecialObject_New("vtkTuple_IdLi3EE", op);
    }

  return result;
}

static PyObject *
PyvtkTuple_IdLi3EE_vtkTuple_s4(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkTuple");

  vtkTuple<double, 3> *temp0 = NULL;
  PyObject *pobj0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkTuple_IdLi3EE"))
    {
    vtkTuple<double, 3> *op = new vtkTuple<double, 3>(*temp0);

    result = PyVTKSpecialObject_New("vtkTuple_IdLi3EE", op);
    }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkTuple_IdLi3EE_vtkTuple_Methods[] = {
  {NULL, PyvtkTuple_IdLi3EE_vtkTuple_s2, METH_VARARGS,
   (char*)"-d"},
  {NULL, PyvtkTuple_IdLi3EE_vtkTuple_s3, METH_VARARGS,
   (char*)"-O *d"},
  {NULL, PyvtkTuple_IdLi3EE_vtkTuple_s4, METH_VARARGS,
   (char*)"O &vtkTuple_IdLi3EE"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkTuple_IdLi3EE_vtkTuple(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkTuple_IdLi3EE_vtkTuple_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
    {
    case 0:
      return PyvtkTuple_IdLi3EE_vtkTuple_s1(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "vtkTuple");
  return NULL;
}


static PyMethodDef PyvtkTuple_IdLi3EE_NewMethod = \
{ (char*)"vtkTuple_IdLi3EE", PyvtkTuple_IdLi3EE_vtkTuple, 1,
  (char*)"" };

#if PY_VERSION_HEX >= 0x02020000
static PyObject *
PyvtkTuple_IdLi3EE_New(PyTypeObject *, PyObject *args, PyObject *kwds)
{
  if (kwds && PyDict_Size(kwds))
    {
    PyErr_SetString(PyExc_TypeError,
                    "this function takes no keyword arguments");
    return NULL;
    }

  return PyvtkTuple_IdLi3EE_vtkTuple(NULL, args);
}
#endif

static void PyvtkTuple_IdLi3EE_Delete(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  if (obj->vtk_ptr)
    {
    delete static_cast<vtkTuple<double, 3> *>(obj->vtk_ptr);
    }
#if PY_MAJOR_VERSION >= 2
  PyObject_Del(self);
#else
  PyMem_DEL(self);
#endif
}

Py_ssize_t PyvtkTuple_IdLi3EE_SequenceSize(PyObject *self)
{
  void *vp = vtkPythonArgs::GetSelfPointer(self);
  vtkTuple<double, 3> *op = static_cast<vtkTuple<double, 3> *>(vp);

  return static_cast<Py_ssize_t>(op->GetSize());
}

PyObject *PyvtkTuple_IdLi3EE_SequenceItem(PyObject *self, Py_ssize_t i)
{
  void *vp = vtkPythonArgs::GetSelfPointer(self);
  vtkTuple<double, 3> *op = static_cast<vtkTuple<double, 3> *>(vp);

  int temp0;
  PyObject *result = NULL;

  temp0 = static_cast<int>(i);

  if (temp0 < 0 || temp0 >= op->GetSize())
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

int PyvtkTuple_IdLi3EE_SequenceSetItem(
  PyObject *self, Py_ssize_t i, PyObject *arg1)
{
  void *vp = vtkPythonArgs::GetSelfPointer(self);
  vtkTuple<double, 3> *op = static_cast<vtkTuple<double, 3> *>(vp);

  int temp0;
  double temp1;
  int result = -1;

  temp0 = static_cast<int>(i);

  if (temp0 < 0 || temp0 >= op->GetSize())
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

static PySequenceMethods PyvtkTuple_IdLi3EE_AsSequence = {
  PyvtkTuple_IdLi3EE_SequenceSize, // sq_length
  0, // sq_concat
  0, // sq_repeat
  PyvtkTuple_IdLi3EE_SequenceItem, // sq_item
  0, // sq_slice
  PyvtkTuple_IdLi3EE_SequenceSetItem, // sq_ass_item
  0, // sq_ass_slice
  0, // sq_contains
#if PY_VERSION_HEX >= 0x2000000
  0, // sq_inplace_concat
  0, // sq_inplace_repeat
#endif
};

static long PyvtkTuple_IdLi3EE_Hash(PyObject *self)
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

PyTypeObject PyvtkTuple_IdLi3EE_Type = {
  PyObject_HEAD_INIT(&PyType_Type)
  0,
  (char*)"vtkTuple_IdLi3EE", // tp_name
  sizeof(PyVTKSpecialObject), // tp_basicsize
  0, // tp_itemsize
  PyvtkTuple_IdLi3EE_Delete, // tp_dealloc
  0, // tp_print
  0, // tp_getattr
  0, // tp_setattr
  0, // tp_compare
  PyVTKSpecialObject_Repr, // tp_repr
  0, // tp_as_number
  &PyvtkTuple_IdLi3EE_AsSequence, // tp_as_sequence
  0, // tp_as_mapping
  PyvtkTuple_IdLi3EE_Hash, // tp_hash
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
  PyvtkTuple_IdLi3EE_Methods, // tp_methods
  0, // tp_members
  0, // tp_getset
  0, // tp_base
  0, // tp_dict
  0, // tp_descr_get
  0, // tp_descr_set
  0, // tp_dictoffset
  0, // tp_init
  0, // tp_alloc
  PyvtkTuple_IdLi3EE_New, // tp_new
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

static void *PyvtkTuple_IdLi3EE_CCopy(const void *obj)
{
  if (obj)
    {
    return new vtkTuple<double, 3>(*static_cast<const vtkTuple<double, 3>*>(obj));
    }
  return 0;
}

static PyObject *PyvtkTuple_IdLi3EE_TypeNew(const char *)
{
  PyObject *cls = PyVTKSpecialType_New(
    &PyvtkTuple_IdLi3EE_Type,
    PyvtkTuple_IdLi3EE_Methods,
    PyvtkTuple_IdLi3EE_vtkTuple_Methods,
    &PyvtkTuple_IdLi3EE_NewMethod,
    PyvtkTuple_IdLi3EE_Doc(), &PyvtkTuple_IdLi3EE_CCopy);

  return cls;
}

const char **PyvtkTuple_IdLi3EE_Doc()
{
  static const char *docstring[] = {
    "vtkTuple - templated base type for containers of constant size.\n\n",
    "This class is a templated data type for storing and manipulating\ntuples.\n\n",
    "V.vtkTuple()\nC++: vtkTuple()\nV.vtkTuple(float)\nC++: explicit vtkTuple(const double &scalar)\nV.vtkTuple((float, float, float))\nC++: explicit vtkTuple(const double *init)\nV.vtkTuple(vtkTuple<double, 3>)\nC++: vtkTuple(const &vtkTuple<double, 3>)\n",
    NULL
  };

  return docstring;
}

static const char *PyvtkTuple_Doc[] = {
    "vtkTuple - templated base type for containers of constant size.\n\n",
    "This class is a templated data type for storing and manipulating\ntuples.\n\n",
    "\nProvided Types:\n\n",
    "  vtkTuple[float64,4] => vtkTuple<double, 4>\n",
    "  vtkTuple[float32,4] => vtkTuple<float, 4>\n",
    "  vtkTuple[uint8,2] => vtkTuple<unsigned char, 2>\n",
    "  vtkTuple[uint8,3] => vtkTuple<unsigned char, 3>\n",
    "  vtkTuple[uint8,4] => vtkTuple<unsigned char, 4>\n",
    "  vtkTuple[int32,2] => vtkTuple<int, 2>\n",
    "  vtkTuple[int32,3] => vtkTuple<int, 3>\n",
    "  vtkTuple[int32,4] => vtkTuple<int, 4>\n",
    "  vtkTuple[float32,2] => vtkTuple<float, 2>\n",
    "  vtkTuple[float32,3] => vtkTuple<float, 3>\n",
    "  vtkTuple[float64,2] => vtkTuple<double, 2>\n",
    "  vtkTuple[float64,3] => vtkTuple<double, 3>\n",
    NULL
};

PyObject *PyvtkTuple_TemplateNew(const char *modulename)
{
  PyObject *o;

  PyObject *temp = PyVTKTemplate_New("vtkTuple", modulename,
                                     PyvtkTuple_Doc);

  o = PyvtkTuple_IdLi4EE_TypeNew(modulename);
  if (o && PyVTKTemplate_AddItem(temp, o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyvtkTuple_IfLi4EE_TypeNew(modulename);
  if (o && PyVTKTemplate_AddItem(temp, o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyvtkTuple_IhLi2EE_TypeNew(modulename);
  if (o && PyVTKTemplate_AddItem(temp, o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyvtkTuple_IhLi3EE_TypeNew(modulename);
  if (o && PyVTKTemplate_AddItem(temp, o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyvtkTuple_IhLi4EE_TypeNew(modulename);
  if (o && PyVTKTemplate_AddItem(temp, o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyvtkTuple_IiLi2EE_TypeNew(modulename);
  if (o && PyVTKTemplate_AddItem(temp, o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyvtkTuple_IiLi3EE_TypeNew(modulename);
  if (o && PyVTKTemplate_AddItem(temp, o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyvtkTuple_IiLi4EE_TypeNew(modulename);
  if (o && PyVTKTemplate_AddItem(temp, o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyvtkTuple_IfLi2EE_TypeNew(modulename);
  if (o && PyVTKTemplate_AddItem(temp, o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyvtkTuple_IfLi3EE_TypeNew(modulename);
  if (o && PyVTKTemplate_AddItem(temp, o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyvtkTuple_IdLi2EE_TypeNew(modulename);
  if (o && PyVTKTemplate_AddItem(temp, o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyvtkTuple_IdLi3EE_TypeNew(modulename);
  if (o && PyVTKTemplate_AddItem(temp, o) != 0)
    {
    Py_DECREF(o);
    }

  return temp;
}

void PyVTKAddFile_vtkTuple(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyvtkTuple_TemplateNew(modulename);

  if (o)
    {
    PyObject *l = PyObject_CallMethod(o, (char *)"values", 0);
    Py_ssize_t n = PyList_GET_SIZE(l);
    for (Py_ssize_t i = 0; i < n; i++)
      {
      PyObject *ot = PyList_GET_ITEM(l, i);
      const char *nt = NULL;
      if (PyVTKClass_Check(ot))
        {
        nt = PyString_AsString(((PyVTKClass *)ot)->vtk_name);
        }
      else if (PyType_Check(ot))
        {
        nt = ((PyTypeObject *)ot)->tp_name;
        }
      else if (PyCFunction_Check(ot))
        {
        nt = ((PyCFunctionObject *)ot)->m_ml->ml_name;
        }
      if (nt)
        {
        PyDict_SetItemString(dict, (char *)nt, ot);
        }
      }
    Py_DECREF(l);
    }

  if (o && PyDict_SetItemString(dict, (char *)"vtkTuple", o) != 0)
    {
    Py_DECREF(o);
    }

}

