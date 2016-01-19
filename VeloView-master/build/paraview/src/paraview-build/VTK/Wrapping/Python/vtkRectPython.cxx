// python wrapper for vtkRect
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkRect.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkRect(PyObject *, const char *); }

static const char **PyvtkRect_IdE_Doc();


static PyObject *
PyvtkRect_IdE_Set(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "Set");
  void *vp = ap.GetSelfPointer(self);
  vtkRect<double> *op = static_cast<vtkRect<double> *>(vp);

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
    op->Set(temp0, temp1, temp2, temp3);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRect_IdE_SetX(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "SetX");
  void *vp = ap.GetSelfPointer(self);
  vtkRect<double> *op = static_cast<vtkRect<double> *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    op->SetX(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRect_IdE_GetX(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "GetX");
  void *vp = ap.GetSelfPointer(self);
  vtkRect<double> *op = static_cast<vtkRect<double> *>(vp);

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    const double *tempr = &op->GetX();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(*tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRect_IdE_SetY(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "SetY");
  void *vp = ap.GetSelfPointer(self);
  vtkRect<double> *op = static_cast<vtkRect<double> *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    op->SetY(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRect_IdE_GetY(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "GetY");
  void *vp = ap.GetSelfPointer(self);
  vtkRect<double> *op = static_cast<vtkRect<double> *>(vp);

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    const double *tempr = &op->GetY();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(*tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRect_IdE_SetWidth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "SetWidth");
  void *vp = ap.GetSelfPointer(self);
  vtkRect<double> *op = static_cast<vtkRect<double> *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    op->SetWidth(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRect_IdE_GetWidth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "GetWidth");
  void *vp = ap.GetSelfPointer(self);
  vtkRect<double> *op = static_cast<vtkRect<double> *>(vp);

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    const double *tempr = &op->GetWidth();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(*tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRect_IdE_SetHeight(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "SetHeight");
  void *vp = ap.GetSelfPointer(self);
  vtkRect<double> *op = static_cast<vtkRect<double> *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    op->SetHeight(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRect_IdE_GetHeight(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "GetHeight");
  void *vp = ap.GetSelfPointer(self);
  vtkRect<double> *op = static_cast<vtkRect<double> *>(vp);

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    const double *tempr = &op->GetHeight();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(*tempr);
      }
    }

  return result;
}


#if !defined(VTK_LEGACY_REMOVE)
static PyObject *
PyvtkRect_IdE_X(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "X");
  void *vp = ap.GetSelfPointer(self);
  vtkRect<double> *op = static_cast<vtkRect<double> *>(vp);

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    const double *tempr = &op->X();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(*tempr);
      }
    }

  return result;
}
#endif


#if !defined(VTK_LEGACY_REMOVE)
static PyObject *
PyvtkRect_IdE_Y(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "Y");
  void *vp = ap.GetSelfPointer(self);
  vtkRect<double> *op = static_cast<vtkRect<double> *>(vp);

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    const double *tempr = &op->Y();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(*tempr);
      }
    }

  return result;
}
#endif


#if !defined(VTK_LEGACY_REMOVE)
static PyObject *
PyvtkRect_IdE_Width(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "Width");
  void *vp = ap.GetSelfPointer(self);
  vtkRect<double> *op = static_cast<vtkRect<double> *>(vp);

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    const double *tempr = &op->Width();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(*tempr);
      }
    }

  return result;
}
#endif


#if !defined(VTK_LEGACY_REMOVE)
static PyObject *
PyvtkRect_IdE_Height(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "Height");
  void *vp = ap.GetSelfPointer(self);
  vtkRect<double> *op = static_cast<vtkRect<double> *>(vp);

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    const double *tempr = &op->Height();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(*tempr);
      }
    }

  return result;
}
#endif

static PyMethodDef PyvtkRect_IdE_Methods[] = {
  {(char*)"Set", PyvtkRect_IdE_Set, METH_VARARGS,
   (char*)"V.Set(float, float, float, float)\nC++: void Set(const double &x, const double &y,\n    const double &width, const double &height)\n\nSet the x, y components of the rectangle, and the width/height.\n"},
  {(char*)"SetX", PyvtkRect_IdE_SetX, METH_VARARGS,
   (char*)"V.SetX(float)\nC++: void SetX(const double &x)\n\nSet the x component of the rectangle bottom corner, i.e. element\n0.\n"},
  {(char*)"GetX", PyvtkRect_IdE_GetX, METH_VARARGS,
   (char*)"V.GetX() -> float\nC++: const double &GetX()\n\nGet the x component of the rectangle bottom corner, i.e. element\n0.\n"},
  {(char*)"SetY", PyvtkRect_IdE_SetY, METH_VARARGS,
   (char*)"V.SetY(float)\nC++: void SetY(const double &y)\n\nSet the y component of the rectangle bottom corner, i.e. element\n1.\n"},
  {(char*)"GetY", PyvtkRect_IdE_GetY, METH_VARARGS,
   (char*)"V.GetY() -> float\nC++: const double &GetY()\n\nGet the y component of the rectangle bottom corner, i.e. element\n1.\n"},
  {(char*)"SetWidth", PyvtkRect_IdE_SetWidth, METH_VARARGS,
   (char*)"V.SetWidth(float)\nC++: void SetWidth(const double &width)\n\nSet the width of the rectanle, i.e. element 2.\n"},
  {(char*)"GetWidth", PyvtkRect_IdE_GetWidth, METH_VARARGS,
   (char*)"V.GetWidth() -> float\nC++: const double &GetWidth()\n\nGet the width of the rectangle, i.e. element 2.\n"},
  {(char*)"SetHeight", PyvtkRect_IdE_SetHeight, METH_VARARGS,
   (char*)"V.SetHeight(float)\nC++: void SetHeight(const double &height)\n\nSet the height of the rectangle, i.e. element 3.\n"},
  {(char*)"GetHeight", PyvtkRect_IdE_GetHeight, METH_VARARGS,
   (char*)"V.GetHeight() -> float\nC++: const double &GetHeight()\n\nGet the height of the rectangle, i.e. element 3.\n"},
#if !defined(VTK_LEGACY_REMOVE)
  {(char*)"X", PyvtkRect_IdE_X, METH_VARARGS,
   (char*)"V.X() -> float\nC++: const double &X()\n\nLegacy method for getting the x position.\n"},
#endif
#if !defined(VTK_LEGACY_REMOVE)
  {(char*)"Y", PyvtkRect_IdE_Y, METH_VARARGS,
   (char*)"V.Y() -> float\nC++: const double &Y()\n\nLegacy method for getting the y position.\n"},
#endif
#if !defined(VTK_LEGACY_REMOVE)
  {(char*)"Width", PyvtkRect_IdE_Width, METH_VARARGS,
   (char*)"V.Width() -> float\nC++: const double &Width()\n\nLegacy method for getting the width.\n"},
#endif
#if !defined(VTK_LEGACY_REMOVE)
  {(char*)"Height", PyvtkRect_IdE_Height, METH_VARARGS,
   (char*)"V.Height() -> float\nC++: const double &Height()\n\nLegacy method for getting the height.\n"},
#endif
  {NULL, NULL, 0, NULL}
};

#ifndef DECLARED_PyvtkRect_IdE_Type
extern VTK_PYTHON_EXPORT PyTypeObject PyvtkRect_IdE_Type;
#define DECLARED_PyvtkRect_IdE_Type
#endif

#ifndef DECLARED_PyvtkVector_IdLi4EE_Type
extern VTK_PYTHON_EXPORT PyTypeObject PyvtkVector_IdLi4EE_Type;
#define DECLARED_PyvtkVector_IdLi4EE_Type
#endif


static PyObject *
PyvtkRect_IdE_vtkRect_s1(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkRect");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkRect<double> *op = new vtkRect<double>();
    (*op)[0] = 0;
    (*op)[1] = 0;
    (*op)[2] = 0;
    (*op)[3] = 0;

    result = PyVTKSpecialObject_New("vtkRect_IdE", op);
    }

  return result;
}

static PyObject *
PyvtkRect_IdE_vtkRect_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkRect");

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
    vtkRect<double> *op = new vtkRect<double>(temp0, temp1, temp2, temp3);

    result = PyVTKSpecialObject_New("vtkRect_IdE", op);
    }

  return result;
}

static PyObject *
PyvtkRect_IdE_vtkRect_s3(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkRect");

  double temp0[4];
  const int size0 = 4;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    vtkRect<double> *op = new vtkRect<double>(temp0);

    result = PyVTKSpecialObject_New("vtkRect_IdE", op);
    }

  return result;
}

static PyObject *
PyvtkRect_IdE_vtkRect_s4(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkRect");

  vtkRect<double> *temp0 = NULL;
  PyObject *pobj0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkRect_IdE"))
    {
    vtkRect<double> *op = new vtkRect<double>(*temp0);

    result = PyVTKSpecialObject_New("vtkRect_IdE", op);
    }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkRect_IdE_vtkRect_Methods[] = {
  {NULL, PyvtkRect_IdE_vtkRect_s3, METH_VARARGS,
   (char*)"-O *d"},
  {NULL, PyvtkRect_IdE_vtkRect_s4, METH_VARARGS,
   (char*)"O &vtkRect_IdE"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkRect_IdE_vtkRect(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkRect_IdE_vtkRect_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
    {
    case 0:
      return PyvtkRect_IdE_vtkRect_s1(self, args);
    case 4:
      return PyvtkRect_IdE_vtkRect_s2(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "vtkRect");
  return NULL;
}


static PyMethodDef PyvtkRect_IdE_NewMethod = \
{ (char*)"vtkRect_IdE", PyvtkRect_IdE_vtkRect, 1,
  (char*)"" };

#if PY_VERSION_HEX >= 0x02020000
static PyObject *
PyvtkRect_IdE_New(PyTypeObject *, PyObject *args, PyObject *kwds)
{
  if (kwds && PyDict_Size(kwds))
    {
    PyErr_SetString(PyExc_TypeError,
                    "this function takes no keyword arguments");
    return NULL;
    }

  return PyvtkRect_IdE_vtkRect(NULL, args);
}
#endif

static void PyvtkRect_IdE_Delete(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  if (obj->vtk_ptr)
    {
    delete static_cast<vtkRect<double> *>(obj->vtk_ptr);
    }
#if PY_MAJOR_VERSION >= 2
  PyObject_Del(self);
#else
  PyMem_DEL(self);
#endif
}

static long PyvtkRect_IdE_Hash(PyObject *self)
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

PyTypeObject PyvtkRect_IdE_Type = {
  PyObject_HEAD_INIT(&PyType_Type)
  0,
  (char*)"vtkRect_IdE", // tp_name
  sizeof(PyVTKSpecialObject), // tp_basicsize
  0, // tp_itemsize
  PyvtkRect_IdE_Delete, // tp_dealloc
  0, // tp_print
  0, // tp_getattr
  0, // tp_setattr
  0, // tp_compare
  PyVTKSpecialObject_Repr, // tp_repr
  0, // tp_as_number
  0, // tp_as_sequence
  0, // tp_as_mapping
  PyvtkRect_IdE_Hash, // tp_hash
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
  PyvtkRect_IdE_Methods, // tp_methods
  0, // tp_members
  0, // tp_getset
  &PyvtkVector_IdLi4EE_Type, // tp_base
  0, // tp_dict
  0, // tp_descr_get
  0, // tp_descr_set
  0, // tp_dictoffset
  0, // tp_init
  0, // tp_alloc
  PyvtkRect_IdE_New, // tp_new
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

static void *PyvtkRect_IdE_CCopy(const void *obj)
{
  if (obj)
    {
    return new vtkRect<double>(*static_cast<const vtkRect<double>*>(obj));
    }
  return 0;
}

static PyObject *PyvtkRect_IdE_TypeNew(const char *)
{
  PyObject *cls = PyVTKSpecialType_New(
    &PyvtkRect_IdE_Type,
    PyvtkRect_IdE_Methods,
    PyvtkRect_IdE_vtkRect_Methods,
    &PyvtkRect_IdE_NewMethod,
    PyvtkRect_IdE_Doc(), &PyvtkRect_IdE_CCopy);

  return cls;
}

const char **PyvtkRect_IdE_Doc()
{
  static const char *docstring[] = {
    "vtkRect - templated base type for storage of 2D rectangles.\n\n",
    "Superclass: vtkVector[float64,4]\n\n",
    "This class is a templated data type for storing and manipulating\nrectangles. The memory layout is a contiguous array of the specified\ntype, such that a float[4] can be cast to a vtkRectf and manipulated.\nAlso a float[12] could be cast and used as a vtkRectf[3].\n\n",
    "V.vtkRect()\nC++: vtkRect()\nV.vtkRect(float, float, float, float)\nC++: vtkRect(const double &x, const double &y, const double &width,\n    const double &height)\nV.vtkRect((float, float, float, float))\nC++: explicit vtkRect(const double *init)\nV.vtkRect(vtkRect<double>)\nC++: vtkRect(const &vtkRect<double>)\n",
    NULL
  };

  return docstring;
}


static const char **PyvtkRect_IfE_Doc();


static PyObject *
PyvtkRect_IfE_Set(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "Set");
  void *vp = ap.GetSelfPointer(self);
  vtkRect<float> *op = static_cast<vtkRect<float> *>(vp);

  float temp0;
  float temp1;
  float temp2;
  float temp3;
  PyObject *result = NULL;

  if (ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
    {
    op->Set(temp0, temp1, temp2, temp3);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRect_IfE_SetX(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "SetX");
  void *vp = ap.GetSelfPointer(self);
  vtkRect<float> *op = static_cast<vtkRect<float> *>(vp);

  float temp0;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    op->SetX(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRect_IfE_GetX(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "GetX");
  void *vp = ap.GetSelfPointer(self);
  vtkRect<float> *op = static_cast<vtkRect<float> *>(vp);

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    const float *tempr = &op->GetX();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(*tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRect_IfE_SetY(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "SetY");
  void *vp = ap.GetSelfPointer(self);
  vtkRect<float> *op = static_cast<vtkRect<float> *>(vp);

  float temp0;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    op->SetY(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRect_IfE_GetY(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "GetY");
  void *vp = ap.GetSelfPointer(self);
  vtkRect<float> *op = static_cast<vtkRect<float> *>(vp);

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    const float *tempr = &op->GetY();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(*tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRect_IfE_SetWidth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "SetWidth");
  void *vp = ap.GetSelfPointer(self);
  vtkRect<float> *op = static_cast<vtkRect<float> *>(vp);

  float temp0;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    op->SetWidth(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRect_IfE_GetWidth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "GetWidth");
  void *vp = ap.GetSelfPointer(self);
  vtkRect<float> *op = static_cast<vtkRect<float> *>(vp);

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    const float *tempr = &op->GetWidth();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(*tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRect_IfE_SetHeight(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "SetHeight");
  void *vp = ap.GetSelfPointer(self);
  vtkRect<float> *op = static_cast<vtkRect<float> *>(vp);

  float temp0;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    op->SetHeight(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRect_IfE_GetHeight(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "GetHeight");
  void *vp = ap.GetSelfPointer(self);
  vtkRect<float> *op = static_cast<vtkRect<float> *>(vp);

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    const float *tempr = &op->GetHeight();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(*tempr);
      }
    }

  return result;
}


#if !defined(VTK_LEGACY_REMOVE)
static PyObject *
PyvtkRect_IfE_X(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "X");
  void *vp = ap.GetSelfPointer(self);
  vtkRect<float> *op = static_cast<vtkRect<float> *>(vp);

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    const float *tempr = &op->X();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(*tempr);
      }
    }

  return result;
}
#endif


#if !defined(VTK_LEGACY_REMOVE)
static PyObject *
PyvtkRect_IfE_Y(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "Y");
  void *vp = ap.GetSelfPointer(self);
  vtkRect<float> *op = static_cast<vtkRect<float> *>(vp);

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    const float *tempr = &op->Y();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(*tempr);
      }
    }

  return result;
}
#endif


#if !defined(VTK_LEGACY_REMOVE)
static PyObject *
PyvtkRect_IfE_Width(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "Width");
  void *vp = ap.GetSelfPointer(self);
  vtkRect<float> *op = static_cast<vtkRect<float> *>(vp);

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    const float *tempr = &op->Width();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(*tempr);
      }
    }

  return result;
}
#endif


#if !defined(VTK_LEGACY_REMOVE)
static PyObject *
PyvtkRect_IfE_Height(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "Height");
  void *vp = ap.GetSelfPointer(self);
  vtkRect<float> *op = static_cast<vtkRect<float> *>(vp);

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    const float *tempr = &op->Height();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(*tempr);
      }
    }

  return result;
}
#endif

static PyMethodDef PyvtkRect_IfE_Methods[] = {
  {(char*)"Set", PyvtkRect_IfE_Set, METH_VARARGS,
   (char*)"V.Set(float, float, float, float)\nC++: void Set(const float &x, const float &y, const float &width,\n    const float &height)\n\nSet the x, y components of the rectangle, and the width/height.\n"},
  {(char*)"SetX", PyvtkRect_IfE_SetX, METH_VARARGS,
   (char*)"V.SetX(float)\nC++: void SetX(const float &x)\n\nSet the x component of the rectangle bottom corner, i.e. element\n0.\n"},
  {(char*)"GetX", PyvtkRect_IfE_GetX, METH_VARARGS,
   (char*)"V.GetX() -> float\nC++: const float &GetX()\n\nGet the x component of the rectangle bottom corner, i.e. element\n0.\n"},
  {(char*)"SetY", PyvtkRect_IfE_SetY, METH_VARARGS,
   (char*)"V.SetY(float)\nC++: void SetY(const float &y)\n\nSet the y component of the rectangle bottom corner, i.e. element\n1.\n"},
  {(char*)"GetY", PyvtkRect_IfE_GetY, METH_VARARGS,
   (char*)"V.GetY() -> float\nC++: const float &GetY()\n\nGet the y component of the rectangle bottom corner, i.e. element\n1.\n"},
  {(char*)"SetWidth", PyvtkRect_IfE_SetWidth, METH_VARARGS,
   (char*)"V.SetWidth(float)\nC++: void SetWidth(const float &width)\n\nSet the width of the rectanle, i.e. element 2.\n"},
  {(char*)"GetWidth", PyvtkRect_IfE_GetWidth, METH_VARARGS,
   (char*)"V.GetWidth() -> float\nC++: const float &GetWidth()\n\nGet the width of the rectangle, i.e. element 2.\n"},
  {(char*)"SetHeight", PyvtkRect_IfE_SetHeight, METH_VARARGS,
   (char*)"V.SetHeight(float)\nC++: void SetHeight(const float &height)\n\nSet the height of the rectangle, i.e. element 3.\n"},
  {(char*)"GetHeight", PyvtkRect_IfE_GetHeight, METH_VARARGS,
   (char*)"V.GetHeight() -> float\nC++: const float &GetHeight()\n\nGet the height of the rectangle, i.e. element 3.\n"},
#if !defined(VTK_LEGACY_REMOVE)
  {(char*)"X", PyvtkRect_IfE_X, METH_VARARGS,
   (char*)"V.X() -> float\nC++: const float &X()\n\nLegacy method for getting the x position.\n"},
#endif
#if !defined(VTK_LEGACY_REMOVE)
  {(char*)"Y", PyvtkRect_IfE_Y, METH_VARARGS,
   (char*)"V.Y() -> float\nC++: const float &Y()\n\nLegacy method for getting the y position.\n"},
#endif
#if !defined(VTK_LEGACY_REMOVE)
  {(char*)"Width", PyvtkRect_IfE_Width, METH_VARARGS,
   (char*)"V.Width() -> float\nC++: const float &Width()\n\nLegacy method for getting the width.\n"},
#endif
#if !defined(VTK_LEGACY_REMOVE)
  {(char*)"Height", PyvtkRect_IfE_Height, METH_VARARGS,
   (char*)"V.Height() -> float\nC++: const float &Height()\n\nLegacy method for getting the height.\n"},
#endif
  {NULL, NULL, 0, NULL}
};

#ifndef DECLARED_PyvtkRect_IfE_Type
extern VTK_PYTHON_EXPORT PyTypeObject PyvtkRect_IfE_Type;
#define DECLARED_PyvtkRect_IfE_Type
#endif

#ifndef DECLARED_PyvtkVector_IfLi4EE_Type
extern VTK_PYTHON_EXPORT PyTypeObject PyvtkVector_IfLi4EE_Type;
#define DECLARED_PyvtkVector_IfLi4EE_Type
#endif


static PyObject *
PyvtkRect_IfE_vtkRect_s1(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkRect");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkRect<float> *op = new vtkRect<float>();
    (*op)[0] = 0;
    (*op)[1] = 0;
    (*op)[2] = 0;
    (*op)[3] = 0;

    result = PyVTKSpecialObject_New("vtkRect_IfE", op);
    }

  return result;
}

static PyObject *
PyvtkRect_IfE_vtkRect_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkRect");

  float temp0;
  float temp1;
  float temp2;
  float temp3;
  PyObject *result = NULL;

  if (ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
    {
    vtkRect<float> *op = new vtkRect<float>(temp0, temp1, temp2, temp3);

    result = PyVTKSpecialObject_New("vtkRect_IfE", op);
    }

  return result;
}

static PyObject *
PyvtkRect_IfE_vtkRect_s3(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkRect");

  float temp0[4];
  const int size0 = 4;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    vtkRect<float> *op = new vtkRect<float>(temp0);

    result = PyVTKSpecialObject_New("vtkRect_IfE", op);
    }

  return result;
}

static PyObject *
PyvtkRect_IfE_vtkRect_s4(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkRect");

  vtkRect<float> *temp0 = NULL;
  PyObject *pobj0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkRect_IfE"))
    {
    vtkRect<float> *op = new vtkRect<float>(*temp0);

    result = PyVTKSpecialObject_New("vtkRect_IfE", op);
    }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkRect_IfE_vtkRect_Methods[] = {
  {NULL, PyvtkRect_IfE_vtkRect_s3, METH_VARARGS,
   (char*)"-O *f"},
  {NULL, PyvtkRect_IfE_vtkRect_s4, METH_VARARGS,
   (char*)"O &vtkRect_IfE"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkRect_IfE_vtkRect(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkRect_IfE_vtkRect_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
    {
    case 0:
      return PyvtkRect_IfE_vtkRect_s1(self, args);
    case 4:
      return PyvtkRect_IfE_vtkRect_s2(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "vtkRect");
  return NULL;
}


static PyMethodDef PyvtkRect_IfE_NewMethod = \
{ (char*)"vtkRect_IfE", PyvtkRect_IfE_vtkRect, 1,
  (char*)"" };

#if PY_VERSION_HEX >= 0x02020000
static PyObject *
PyvtkRect_IfE_New(PyTypeObject *, PyObject *args, PyObject *kwds)
{
  if (kwds && PyDict_Size(kwds))
    {
    PyErr_SetString(PyExc_TypeError,
                    "this function takes no keyword arguments");
    return NULL;
    }

  return PyvtkRect_IfE_vtkRect(NULL, args);
}
#endif

static void PyvtkRect_IfE_Delete(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  if (obj->vtk_ptr)
    {
    delete static_cast<vtkRect<float> *>(obj->vtk_ptr);
    }
#if PY_MAJOR_VERSION >= 2
  PyObject_Del(self);
#else
  PyMem_DEL(self);
#endif
}

static long PyvtkRect_IfE_Hash(PyObject *self)
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

PyTypeObject PyvtkRect_IfE_Type = {
  PyObject_HEAD_INIT(&PyType_Type)
  0,
  (char*)"vtkRect_IfE", // tp_name
  sizeof(PyVTKSpecialObject), // tp_basicsize
  0, // tp_itemsize
  PyvtkRect_IfE_Delete, // tp_dealloc
  0, // tp_print
  0, // tp_getattr
  0, // tp_setattr
  0, // tp_compare
  PyVTKSpecialObject_Repr, // tp_repr
  0, // tp_as_number
  0, // tp_as_sequence
  0, // tp_as_mapping
  PyvtkRect_IfE_Hash, // tp_hash
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
  PyvtkRect_IfE_Methods, // tp_methods
  0, // tp_members
  0, // tp_getset
  &PyvtkVector_IfLi4EE_Type, // tp_base
  0, // tp_dict
  0, // tp_descr_get
  0, // tp_descr_set
  0, // tp_dictoffset
  0, // tp_init
  0, // tp_alloc
  PyvtkRect_IfE_New, // tp_new
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

static void *PyvtkRect_IfE_CCopy(const void *obj)
{
  if (obj)
    {
    return new vtkRect<float>(*static_cast<const vtkRect<float>*>(obj));
    }
  return 0;
}

static PyObject *PyvtkRect_IfE_TypeNew(const char *)
{
  PyObject *cls = PyVTKSpecialType_New(
    &PyvtkRect_IfE_Type,
    PyvtkRect_IfE_Methods,
    PyvtkRect_IfE_vtkRect_Methods,
    &PyvtkRect_IfE_NewMethod,
    PyvtkRect_IfE_Doc(), &PyvtkRect_IfE_CCopy);

  return cls;
}

const char **PyvtkRect_IfE_Doc()
{
  static const char *docstring[] = {
    "vtkRect - templated base type for storage of 2D rectangles.\n\n",
    "Superclass: vtkVector[float32,4]\n\n",
    "This class is a templated data type for storing and manipulating\nrectangles. The memory layout is a contiguous array of the specified\ntype, such that a float[4] can be cast to a vtkRectf and manipulated.\nAlso a float[12] could be cast and used as a vtkRectf[3].\n\n",
    "V.vtkRect()\nC++: vtkRect()\nV.vtkRect(float, float, float, float)\nC++: vtkRect(const float &x, const float &y, const float &width,\n    const float &height)\nV.vtkRect((float, float, float, float))\nC++: explicit vtkRect(const float *init)\nV.vtkRect(vtkRect<float>)\nC++: vtkRect(const &vtkRect<float>)\n",
    NULL
  };

  return docstring;
}


static const char **PyvtkRect_IiE_Doc();


static PyObject *
PyvtkRect_IiE_Set(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "Set");
  void *vp = ap.GetSelfPointer(self);
  vtkRect<int> *op = static_cast<vtkRect<int> *>(vp);

  int temp0;
  int temp1;
  int temp2;
  int temp3;
  PyObject *result = NULL;

  if (ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
    {
    op->Set(temp0, temp1, temp2, temp3);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRect_IiE_SetX(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "SetX");
  void *vp = ap.GetSelfPointer(self);
  vtkRect<int> *op = static_cast<vtkRect<int> *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    op->SetX(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRect_IiE_GetX(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "GetX");
  void *vp = ap.GetSelfPointer(self);
  vtkRect<int> *op = static_cast<vtkRect<int> *>(vp);

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    const int *tempr = &op->GetX();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(*tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRect_IiE_SetY(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "SetY");
  void *vp = ap.GetSelfPointer(self);
  vtkRect<int> *op = static_cast<vtkRect<int> *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    op->SetY(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRect_IiE_GetY(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "GetY");
  void *vp = ap.GetSelfPointer(self);
  vtkRect<int> *op = static_cast<vtkRect<int> *>(vp);

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    const int *tempr = &op->GetY();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(*tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRect_IiE_SetWidth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "SetWidth");
  void *vp = ap.GetSelfPointer(self);
  vtkRect<int> *op = static_cast<vtkRect<int> *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    op->SetWidth(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRect_IiE_GetWidth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "GetWidth");
  void *vp = ap.GetSelfPointer(self);
  vtkRect<int> *op = static_cast<vtkRect<int> *>(vp);

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    const int *tempr = &op->GetWidth();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(*tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRect_IiE_SetHeight(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "SetHeight");
  void *vp = ap.GetSelfPointer(self);
  vtkRect<int> *op = static_cast<vtkRect<int> *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    op->SetHeight(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRect_IiE_GetHeight(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "GetHeight");
  void *vp = ap.GetSelfPointer(self);
  vtkRect<int> *op = static_cast<vtkRect<int> *>(vp);

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    const int *tempr = &op->GetHeight();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(*tempr);
      }
    }

  return result;
}


#if !defined(VTK_LEGACY_REMOVE)
static PyObject *
PyvtkRect_IiE_X(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "X");
  void *vp = ap.GetSelfPointer(self);
  vtkRect<int> *op = static_cast<vtkRect<int> *>(vp);

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    const int *tempr = &op->X();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(*tempr);
      }
    }

  return result;
}
#endif


#if !defined(VTK_LEGACY_REMOVE)
static PyObject *
PyvtkRect_IiE_Y(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "Y");
  void *vp = ap.GetSelfPointer(self);
  vtkRect<int> *op = static_cast<vtkRect<int> *>(vp);

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    const int *tempr = &op->Y();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(*tempr);
      }
    }

  return result;
}
#endif


#if !defined(VTK_LEGACY_REMOVE)
static PyObject *
PyvtkRect_IiE_Width(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "Width");
  void *vp = ap.GetSelfPointer(self);
  vtkRect<int> *op = static_cast<vtkRect<int> *>(vp);

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    const int *tempr = &op->Width();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(*tempr);
      }
    }

  return result;
}
#endif


#if !defined(VTK_LEGACY_REMOVE)
static PyObject *
PyvtkRect_IiE_Height(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "Height");
  void *vp = ap.GetSelfPointer(self);
  vtkRect<int> *op = static_cast<vtkRect<int> *>(vp);

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    const int *tempr = &op->Height();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(*tempr);
      }
    }

  return result;
}
#endif

static PyMethodDef PyvtkRect_IiE_Methods[] = {
  {(char*)"Set", PyvtkRect_IiE_Set, METH_VARARGS,
   (char*)"V.Set(int, int, int, int)\nC++: void Set(const int &x, const int &y, const int &width,\n    const int &height)\n\nSet the x, y components of the rectangle, and the width/height.\n"},
  {(char*)"SetX", PyvtkRect_IiE_SetX, METH_VARARGS,
   (char*)"V.SetX(int)\nC++: void SetX(const int &x)\n\nSet the x component of the rectangle bottom corner, i.e. element\n0.\n"},
  {(char*)"GetX", PyvtkRect_IiE_GetX, METH_VARARGS,
   (char*)"V.GetX() -> int\nC++: const int &GetX()\n\nGet the x component of the rectangle bottom corner, i.e. element\n0.\n"},
  {(char*)"SetY", PyvtkRect_IiE_SetY, METH_VARARGS,
   (char*)"V.SetY(int)\nC++: void SetY(const int &y)\n\nSet the y component of the rectangle bottom corner, i.e. element\n1.\n"},
  {(char*)"GetY", PyvtkRect_IiE_GetY, METH_VARARGS,
   (char*)"V.GetY() -> int\nC++: const int &GetY()\n\nGet the y component of the rectangle bottom corner, i.e. element\n1.\n"},
  {(char*)"SetWidth", PyvtkRect_IiE_SetWidth, METH_VARARGS,
   (char*)"V.SetWidth(int)\nC++: void SetWidth(const int &width)\n\nSet the width of the rectanle, i.e. element 2.\n"},
  {(char*)"GetWidth", PyvtkRect_IiE_GetWidth, METH_VARARGS,
   (char*)"V.GetWidth() -> int\nC++: const int &GetWidth()\n\nGet the width of the rectangle, i.e. element 2.\n"},
  {(char*)"SetHeight", PyvtkRect_IiE_SetHeight, METH_VARARGS,
   (char*)"V.SetHeight(int)\nC++: void SetHeight(const int &height)\n\nSet the height of the rectangle, i.e. element 3.\n"},
  {(char*)"GetHeight", PyvtkRect_IiE_GetHeight, METH_VARARGS,
   (char*)"V.GetHeight() -> int\nC++: const int &GetHeight()\n\nGet the height of the rectangle, i.e. element 3.\n"},
#if !defined(VTK_LEGACY_REMOVE)
  {(char*)"X", PyvtkRect_IiE_X, METH_VARARGS,
   (char*)"V.X() -> int\nC++: const int &X()\n\nLegacy method for getting the x position.\n"},
#endif
#if !defined(VTK_LEGACY_REMOVE)
  {(char*)"Y", PyvtkRect_IiE_Y, METH_VARARGS,
   (char*)"V.Y() -> int\nC++: const int &Y()\n\nLegacy method for getting the y position.\n"},
#endif
#if !defined(VTK_LEGACY_REMOVE)
  {(char*)"Width", PyvtkRect_IiE_Width, METH_VARARGS,
   (char*)"V.Width() -> int\nC++: const int &Width()\n\nLegacy method for getting the width.\n"},
#endif
#if !defined(VTK_LEGACY_REMOVE)
  {(char*)"Height", PyvtkRect_IiE_Height, METH_VARARGS,
   (char*)"V.Height() -> int\nC++: const int &Height()\n\nLegacy method for getting the height.\n"},
#endif
  {NULL, NULL, 0, NULL}
};

#ifndef DECLARED_PyvtkRect_IiE_Type
extern VTK_PYTHON_EXPORT PyTypeObject PyvtkRect_IiE_Type;
#define DECLARED_PyvtkRect_IiE_Type
#endif

#ifndef DECLARED_PyvtkVector_IiLi4EE_Type
extern VTK_PYTHON_EXPORT PyTypeObject PyvtkVector_IiLi4EE_Type;
#define DECLARED_PyvtkVector_IiLi4EE_Type
#endif


static PyObject *
PyvtkRect_IiE_vtkRect_s1(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkRect");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkRect<int> *op = new vtkRect<int>();
    (*op)[0] = 0;
    (*op)[1] = 0;
    (*op)[2] = 0;
    (*op)[3] = 0;

    result = PyVTKSpecialObject_New("vtkRect_IiE", op);
    }

  return result;
}

static PyObject *
PyvtkRect_IiE_vtkRect_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkRect");

  int temp0;
  int temp1;
  int temp2;
  int temp3;
  PyObject *result = NULL;

  if (ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
    {
    vtkRect<int> *op = new vtkRect<int>(temp0, temp1, temp2, temp3);

    result = PyVTKSpecialObject_New("vtkRect_IiE", op);
    }

  return result;
}

static PyObject *
PyvtkRect_IiE_vtkRect_s3(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkRect");

  int temp0[4];
  const int size0 = 4;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    vtkRect<int> *op = new vtkRect<int>(temp0);

    result = PyVTKSpecialObject_New("vtkRect_IiE", op);
    }

  return result;
}

static PyObject *
PyvtkRect_IiE_vtkRect_s4(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkRect");

  vtkRect<int> *temp0 = NULL;
  PyObject *pobj0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkRect_IiE"))
    {
    vtkRect<int> *op = new vtkRect<int>(*temp0);

    result = PyVTKSpecialObject_New("vtkRect_IiE", op);
    }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkRect_IiE_vtkRect_Methods[] = {
  {NULL, PyvtkRect_IiE_vtkRect_s3, METH_VARARGS,
   (char*)"-O *i"},
  {NULL, PyvtkRect_IiE_vtkRect_s4, METH_VARARGS,
   (char*)"O &vtkRect_IiE"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkRect_IiE_vtkRect(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkRect_IiE_vtkRect_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
    {
    case 0:
      return PyvtkRect_IiE_vtkRect_s1(self, args);
    case 4:
      return PyvtkRect_IiE_vtkRect_s2(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "vtkRect");
  return NULL;
}


static PyMethodDef PyvtkRect_IiE_NewMethod = \
{ (char*)"vtkRect_IiE", PyvtkRect_IiE_vtkRect, 1,
  (char*)"" };

#if PY_VERSION_HEX >= 0x02020000
static PyObject *
PyvtkRect_IiE_New(PyTypeObject *, PyObject *args, PyObject *kwds)
{
  if (kwds && PyDict_Size(kwds))
    {
    PyErr_SetString(PyExc_TypeError,
                    "this function takes no keyword arguments");
    return NULL;
    }

  return PyvtkRect_IiE_vtkRect(NULL, args);
}
#endif

static void PyvtkRect_IiE_Delete(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  if (obj->vtk_ptr)
    {
    delete static_cast<vtkRect<int> *>(obj->vtk_ptr);
    }
#if PY_MAJOR_VERSION >= 2
  PyObject_Del(self);
#else
  PyMem_DEL(self);
#endif
}

static long PyvtkRect_IiE_Hash(PyObject *self)
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

PyTypeObject PyvtkRect_IiE_Type = {
  PyObject_HEAD_INIT(&PyType_Type)
  0,
  (char*)"vtkRect_IiE", // tp_name
  sizeof(PyVTKSpecialObject), // tp_basicsize
  0, // tp_itemsize
  PyvtkRect_IiE_Delete, // tp_dealloc
  0, // tp_print
  0, // tp_getattr
  0, // tp_setattr
  0, // tp_compare
  PyVTKSpecialObject_Repr, // tp_repr
  0, // tp_as_number
  0, // tp_as_sequence
  0, // tp_as_mapping
  PyvtkRect_IiE_Hash, // tp_hash
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
  PyvtkRect_IiE_Methods, // tp_methods
  0, // tp_members
  0, // tp_getset
  &PyvtkVector_IiLi4EE_Type, // tp_base
  0, // tp_dict
  0, // tp_descr_get
  0, // tp_descr_set
  0, // tp_dictoffset
  0, // tp_init
  0, // tp_alloc
  PyvtkRect_IiE_New, // tp_new
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

static void *PyvtkRect_IiE_CCopy(const void *obj)
{
  if (obj)
    {
    return new vtkRect<int>(*static_cast<const vtkRect<int>*>(obj));
    }
  return 0;
}

static PyObject *PyvtkRect_IiE_TypeNew(const char *)
{
  PyObject *cls = PyVTKSpecialType_New(
    &PyvtkRect_IiE_Type,
    PyvtkRect_IiE_Methods,
    PyvtkRect_IiE_vtkRect_Methods,
    &PyvtkRect_IiE_NewMethod,
    PyvtkRect_IiE_Doc(), &PyvtkRect_IiE_CCopy);

  return cls;
}

const char **PyvtkRect_IiE_Doc()
{
  static const char *docstring[] = {
    "vtkRect - templated base type for storage of 2D rectangles.\n\n",
    "Superclass: vtkVector[int32,4]\n\n",
    "This class is a templated data type for storing and manipulating\nrectangles. The memory layout is a contiguous array of the specified\ntype, such that a float[4] can be cast to a vtkRectf and manipulated.\nAlso a float[12] could be cast and used as a vtkRectf[3].\n\n",
    "V.vtkRect()\nC++: vtkRect()\nV.vtkRect(int, int, int, int)\nC++: vtkRect(const int &x, const int &y, const int &width,\n    const int &height)\nV.vtkRect((int, int, int, int))\nC++: explicit vtkRect(const int *init)\nV.vtkRect(vtkRect<int>)\nC++: vtkRect(const &vtkRect<int>)\n",
    NULL
  };

  return docstring;
}

static const char *PyvtkRect_Doc[] = {
    "vtkRect - templated base type for storage of 2D rectangles.\n\n",
    "Superclass: vtkVector[T,4]\n\n",
    "This class is a templated data type for storing and manipulating\nrectangles. The memory layout is a contiguous array of the specified\ntype, such that a float[4] can be cast to a vtkRectf and manipulated.\nAlso a float[12] could be cast and used as a vtkRectf[3].\n\n",
    "\nProvided Types:\n\n",
    "  vtkRect[float64] => vtkRect<double>\n",
    "  vtkRect[float32] => vtkRect<float>\n",
    "  vtkRect[int32] => vtkRect<int>\n",
    NULL
};

PyObject *PyvtkRect_TemplateNew(const char *modulename)
{
  PyObject *o;

  PyObject *temp = PyVTKTemplate_New("vtkRect", modulename,
                                     PyvtkRect_Doc);

  o = PyvtkRect_IdE_TypeNew(modulename);
  if (o && PyVTKTemplate_AddItem(temp, o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyvtkRect_IfE_TypeNew(modulename);
  if (o && PyVTKTemplate_AddItem(temp, o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyvtkRect_IiE_TypeNew(modulename);
  if (o && PyVTKTemplate_AddItem(temp, o) != 0)
    {
    Py_DECREF(o);
    }

  return temp;
}


static const char **PyvtkRecti_Doc();

static PyMethodDef PyvtkRecti_Methods[] = {
  {NULL, NULL, 0, NULL}
};

#ifndef DECLARED_PyvtkRecti_Type
extern VTK_PYTHON_EXPORT PyTypeObject PyvtkRecti_Type;
#define DECLARED_PyvtkRecti_Type
#endif

#ifndef DECLARED_PyvtkRect_IiE_Type
extern VTK_PYTHON_EXPORT PyTypeObject PyvtkRect_IiE_Type;
#define DECLARED_PyvtkRect_IiE_Type
#endif


static PyObject *
PyvtkRecti_vtkRecti_s1(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkRecti");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkRecti *op = new vtkRecti();
    (*op)[0] = 0;
    (*op)[1] = 0;
    (*op)[2] = 0;
    (*op)[3] = 0;

    result = PyVTKSpecialObject_New("vtkRecti", op);
    }

  return result;
}

static PyObject *
PyvtkRecti_vtkRecti_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkRecti");

  int temp0;
  int temp1;
  int temp2;
  int temp3;
  PyObject *result = NULL;

  if (ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
    {
    vtkRecti *op = new vtkRecti(temp0, temp1, temp2, temp3);

    result = PyVTKSpecialObject_New("vtkRecti", op);
    }

  return result;
}

static PyObject *
PyvtkRecti_vtkRecti_s3(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkRecti");

  int temp0[4];
  const int size0 = 4;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    vtkRecti *op = new vtkRecti(temp0);

    result = PyVTKSpecialObject_New("vtkRecti", op);
    }

  return result;
}

static PyObject *
PyvtkRecti_vtkRecti_s4(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkRecti");

  vtkRecti *temp0 = NULL;
  PyObject *pobj0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkRecti"))
    {
    vtkRecti *op = new vtkRecti(*temp0);

    result = PyVTKSpecialObject_New("vtkRecti", op);
    }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkRecti_vtkRecti_Methods[] = {
  {NULL, PyvtkRecti_vtkRecti_s3, METH_VARARGS,
   (char*)"-O *i"},
  {NULL, PyvtkRecti_vtkRecti_s4, METH_VARARGS,
   (char*)"O &vtkRecti"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkRecti_vtkRecti(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkRecti_vtkRecti_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
    {
    case 0:
      return PyvtkRecti_vtkRecti_s1(self, args);
    case 4:
      return PyvtkRecti_vtkRecti_s2(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "vtkRecti");
  return NULL;
}


static PyMethodDef PyvtkRecti_NewMethod = \
{ (char*)"vtkRecti", PyvtkRecti_vtkRecti, 1,
  (char*)"" };

#if PY_VERSION_HEX >= 0x02020000
static PyObject *
PyvtkRecti_New(PyTypeObject *, PyObject *args, PyObject *kwds)
{
  if (kwds && PyDict_Size(kwds))
    {
    PyErr_SetString(PyExc_TypeError,
                    "this function takes no keyword arguments");
    return NULL;
    }

  return PyvtkRecti_vtkRecti(NULL, args);
}
#endif

static void PyvtkRecti_Delete(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  if (obj->vtk_ptr)
    {
    delete static_cast<vtkRecti *>(obj->vtk_ptr);
    }
#if PY_MAJOR_VERSION >= 2
  PyObject_Del(self);
#else
  PyMem_DEL(self);
#endif
}

static long PyvtkRecti_Hash(PyObject *self)
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

PyTypeObject PyvtkRecti_Type = {
  PyObject_HEAD_INIT(&PyType_Type)
  0,
  (char*)"vtkRecti", // tp_name
  sizeof(PyVTKSpecialObject), // tp_basicsize
  0, // tp_itemsize
  PyvtkRecti_Delete, // tp_dealloc
  0, // tp_print
  0, // tp_getattr
  0, // tp_setattr
  0, // tp_compare
  PyVTKSpecialObject_Repr, // tp_repr
  0, // tp_as_number
  0, // tp_as_sequence
  0, // tp_as_mapping
  PyvtkRecti_Hash, // tp_hash
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
  PyvtkRecti_Methods, // tp_methods
  0, // tp_members
  0, // tp_getset
  &PyvtkRect_IiE_Type, // tp_base
  0, // tp_dict
  0, // tp_descr_get
  0, // tp_descr_set
  0, // tp_dictoffset
  0, // tp_init
  0, // tp_alloc
  PyvtkRecti_New, // tp_new
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

static void *PyvtkRecti_CCopy(const void *obj)
{
  if (obj)
    {
    return new vtkRecti(*static_cast<const vtkRecti*>(obj));
    }
  return 0;
}

static PyObject *PyvtkRecti_TypeNew(const char *)
{
  PyObject *cls = PyVTKSpecialType_New(
    &PyvtkRecti_Type,
    PyvtkRecti_Methods,
    PyvtkRecti_vtkRecti_Methods,
    &PyvtkRecti_NewMethod,
    PyvtkRecti_Doc(), &PyvtkRecti_CCopy);

  return cls;
}

const char **PyvtkRecti_Doc()
{
  static const char *docstring[] = {
    "vtkRect - templated base type for storage of 2D rectangles.\n\n",
    "Superclass: vtkRect[int32]\n\n",
    "This class is a templated data type for storing and manipulating\nrectangles. The memory layout is a contiguous array of the specified\ntype, such that a float[4] can be cast to a vtkRectf and manipulated.\nAlso a float[12] could be cast and used as a vtkRectf[3].\n\n",
    "V.vtkRecti()\nC++: vtkRecti()\nV.vtkRecti(int, int, int, int)\nC++: vtkRecti(int x, int y, int width, int height)\nV.vtkRecti((int, int, int, int))\nC++: explicit vtkRecti(const int *init)\nV.vtkRecti(vtkRecti)\nC++: vtkRecti(const &vtkRecti)\n",
    NULL
  };

  return docstring;
}


static const char **PyvtkRectf_Doc();

static PyMethodDef PyvtkRectf_Methods[] = {
  {NULL, NULL, 0, NULL}
};

#ifndef DECLARED_PyvtkRectf_Type
extern VTK_PYTHON_EXPORT PyTypeObject PyvtkRectf_Type;
#define DECLARED_PyvtkRectf_Type
#endif

#ifndef DECLARED_PyvtkRect_IfE_Type
extern VTK_PYTHON_EXPORT PyTypeObject PyvtkRect_IfE_Type;
#define DECLARED_PyvtkRect_IfE_Type
#endif


static PyObject *
PyvtkRectf_vtkRectf_s1(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkRectf");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkRectf *op = new vtkRectf();
    (*op)[0] = 0;
    (*op)[1] = 0;
    (*op)[2] = 0;
    (*op)[3] = 0;

    result = PyVTKSpecialObject_New("vtkRectf", op);
    }

  return result;
}

static PyObject *
PyvtkRectf_vtkRectf_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkRectf");

  float temp0;
  float temp1;
  float temp2;
  float temp3;
  PyObject *result = NULL;

  if (ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
    {
    vtkRectf *op = new vtkRectf(temp0, temp1, temp2, temp3);

    result = PyVTKSpecialObject_New("vtkRectf", op);
    }

  return result;
}

static PyObject *
PyvtkRectf_vtkRectf_s3(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkRectf");

  float temp0[4];
  const int size0 = 4;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    vtkRectf *op = new vtkRectf(temp0);

    result = PyVTKSpecialObject_New("vtkRectf", op);
    }

  return result;
}

static PyObject *
PyvtkRectf_vtkRectf_s4(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkRectf");

  vtkRectf *temp0 = NULL;
  PyObject *pobj0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkRectf"))
    {
    vtkRectf *op = new vtkRectf(*temp0);

    result = PyVTKSpecialObject_New("vtkRectf", op);
    }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkRectf_vtkRectf_Methods[] = {
  {NULL, PyvtkRectf_vtkRectf_s3, METH_VARARGS,
   (char*)"-O *f"},
  {NULL, PyvtkRectf_vtkRectf_s4, METH_VARARGS,
   (char*)"O &vtkRectf"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkRectf_vtkRectf(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkRectf_vtkRectf_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
    {
    case 0:
      return PyvtkRectf_vtkRectf_s1(self, args);
    case 4:
      return PyvtkRectf_vtkRectf_s2(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "vtkRectf");
  return NULL;
}


static PyMethodDef PyvtkRectf_NewMethod = \
{ (char*)"vtkRectf", PyvtkRectf_vtkRectf, 1,
  (char*)"" };

#if PY_VERSION_HEX >= 0x02020000
static PyObject *
PyvtkRectf_New(PyTypeObject *, PyObject *args, PyObject *kwds)
{
  if (kwds && PyDict_Size(kwds))
    {
    PyErr_SetString(PyExc_TypeError,
                    "this function takes no keyword arguments");
    return NULL;
    }

  return PyvtkRectf_vtkRectf(NULL, args);
}
#endif

static void PyvtkRectf_Delete(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  if (obj->vtk_ptr)
    {
    delete static_cast<vtkRectf *>(obj->vtk_ptr);
    }
#if PY_MAJOR_VERSION >= 2
  PyObject_Del(self);
#else
  PyMem_DEL(self);
#endif
}

static long PyvtkRectf_Hash(PyObject *self)
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

PyTypeObject PyvtkRectf_Type = {
  PyObject_HEAD_INIT(&PyType_Type)
  0,
  (char*)"vtkRectf", // tp_name
  sizeof(PyVTKSpecialObject), // tp_basicsize
  0, // tp_itemsize
  PyvtkRectf_Delete, // tp_dealloc
  0, // tp_print
  0, // tp_getattr
  0, // tp_setattr
  0, // tp_compare
  PyVTKSpecialObject_Repr, // tp_repr
  0, // tp_as_number
  0, // tp_as_sequence
  0, // tp_as_mapping
  PyvtkRectf_Hash, // tp_hash
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
  PyvtkRectf_Methods, // tp_methods
  0, // tp_members
  0, // tp_getset
  &PyvtkRect_IfE_Type, // tp_base
  0, // tp_dict
  0, // tp_descr_get
  0, // tp_descr_set
  0, // tp_dictoffset
  0, // tp_init
  0, // tp_alloc
  PyvtkRectf_New, // tp_new
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

static void *PyvtkRectf_CCopy(const void *obj)
{
  if (obj)
    {
    return new vtkRectf(*static_cast<const vtkRectf*>(obj));
    }
  return 0;
}

static PyObject *PyvtkRectf_TypeNew(const char *)
{
  PyObject *cls = PyVTKSpecialType_New(
    &PyvtkRectf_Type,
    PyvtkRectf_Methods,
    PyvtkRectf_vtkRectf_Methods,
    &PyvtkRectf_NewMethod,
    PyvtkRectf_Doc(), &PyvtkRectf_CCopy);

  return cls;
}

const char **PyvtkRectf_Doc()
{
  static const char *docstring[] = {
    "vtkRect - templated base type for storage of 2D rectangles.\n\n",
    "Superclass: vtkRect[float32]\n\n",
    "This class is a templated data type for storing and manipulating\nrectangles. The memory layout is a contiguous array of the specified\ntype, such that a float[4] can be cast to a vtkRectf and manipulated.\nAlso a float[12] could be cast and used as a vtkRectf[3].\n\n",
    "V.vtkRectf()\nC++: vtkRectf()\nV.vtkRectf(float, float, float, float)\nC++: vtkRectf(float x, float y, float width, float height)\nV.vtkRectf((float, float, float, float))\nC++: explicit vtkRectf(const float *init)\nV.vtkRectf(vtkRectf)\nC++: vtkRectf(const &vtkRectf)\n",
    NULL
  };

  return docstring;
}


static const char **PyvtkRectd_Doc();

static PyMethodDef PyvtkRectd_Methods[] = {
  {NULL, NULL, 0, NULL}
};

#ifndef DECLARED_PyvtkRectd_Type
extern VTK_PYTHON_EXPORT PyTypeObject PyvtkRectd_Type;
#define DECLARED_PyvtkRectd_Type
#endif

#ifndef DECLARED_PyvtkRect_IdE_Type
extern VTK_PYTHON_EXPORT PyTypeObject PyvtkRect_IdE_Type;
#define DECLARED_PyvtkRect_IdE_Type
#endif


static PyObject *
PyvtkRectd_vtkRectd_s1(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkRectd");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkRectd *op = new vtkRectd();
    (*op)[0] = 0;
    (*op)[1] = 0;
    (*op)[2] = 0;
    (*op)[3] = 0;

    result = PyVTKSpecialObject_New("vtkRectd", op);
    }

  return result;
}

static PyObject *
PyvtkRectd_vtkRectd_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkRectd");

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
    vtkRectd *op = new vtkRectd(temp0, temp1, temp2, temp3);

    result = PyVTKSpecialObject_New("vtkRectd", op);
    }

  return result;
}

static PyObject *
PyvtkRectd_vtkRectd_s3(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkRectd");

  double temp0[4];
  const int size0 = 4;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    vtkRectd *op = new vtkRectd(temp0);

    result = PyVTKSpecialObject_New("vtkRectd", op);
    }

  return result;
}

static PyObject *
PyvtkRectd_vtkRectd_s4(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkRectd");

  vtkRectd *temp0 = NULL;
  PyObject *pobj0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkRectd"))
    {
    vtkRectd *op = new vtkRectd(*temp0);

    result = PyVTKSpecialObject_New("vtkRectd", op);
    }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkRectd_vtkRectd_Methods[] = {
  {NULL, PyvtkRectd_vtkRectd_s3, METH_VARARGS,
   (char*)"-O *d"},
  {NULL, PyvtkRectd_vtkRectd_s4, METH_VARARGS,
   (char*)"O &vtkRectd"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkRectd_vtkRectd(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkRectd_vtkRectd_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
    {
    case 0:
      return PyvtkRectd_vtkRectd_s1(self, args);
    case 4:
      return PyvtkRectd_vtkRectd_s2(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "vtkRectd");
  return NULL;
}


static PyMethodDef PyvtkRectd_NewMethod = \
{ (char*)"vtkRectd", PyvtkRectd_vtkRectd, 1,
  (char*)"" };

#if PY_VERSION_HEX >= 0x02020000
static PyObject *
PyvtkRectd_New(PyTypeObject *, PyObject *args, PyObject *kwds)
{
  if (kwds && PyDict_Size(kwds))
    {
    PyErr_SetString(PyExc_TypeError,
                    "this function takes no keyword arguments");
    return NULL;
    }

  return PyvtkRectd_vtkRectd(NULL, args);
}
#endif

static void PyvtkRectd_Delete(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  if (obj->vtk_ptr)
    {
    delete static_cast<vtkRectd *>(obj->vtk_ptr);
    }
#if PY_MAJOR_VERSION >= 2
  PyObject_Del(self);
#else
  PyMem_DEL(self);
#endif
}

static long PyvtkRectd_Hash(PyObject *self)
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

PyTypeObject PyvtkRectd_Type = {
  PyObject_HEAD_INIT(&PyType_Type)
  0,
  (char*)"vtkRectd", // tp_name
  sizeof(PyVTKSpecialObject), // tp_basicsize
  0, // tp_itemsize
  PyvtkRectd_Delete, // tp_dealloc
  0, // tp_print
  0, // tp_getattr
  0, // tp_setattr
  0, // tp_compare
  PyVTKSpecialObject_Repr, // tp_repr
  0, // tp_as_number
  0, // tp_as_sequence
  0, // tp_as_mapping
  PyvtkRectd_Hash, // tp_hash
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
  PyvtkRectd_Methods, // tp_methods
  0, // tp_members
  0, // tp_getset
  &PyvtkRect_IdE_Type, // tp_base
  0, // tp_dict
  0, // tp_descr_get
  0, // tp_descr_set
  0, // tp_dictoffset
  0, // tp_init
  0, // tp_alloc
  PyvtkRectd_New, // tp_new
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

static void *PyvtkRectd_CCopy(const void *obj)
{
  if (obj)
    {
    return new vtkRectd(*static_cast<const vtkRectd*>(obj));
    }
  return 0;
}

static PyObject *PyvtkRectd_TypeNew(const char *)
{
  PyObject *cls = PyVTKSpecialType_New(
    &PyvtkRectd_Type,
    PyvtkRectd_Methods,
    PyvtkRectd_vtkRectd_Methods,
    &PyvtkRectd_NewMethod,
    PyvtkRectd_Doc(), &PyvtkRectd_CCopy);

  return cls;
}

const char **PyvtkRectd_Doc()
{
  static const char *docstring[] = {
    "vtkRect - templated base type for storage of 2D rectangles.\n\n",
    "Superclass: vtkRect[float64]\n\n",
    "This class is a templated data type for storing and manipulating\nrectangles. The memory layout is a contiguous array of the specified\ntype, such that a float[4] can be cast to a vtkRectf and manipulated.\nAlso a float[12] could be cast and used as a vtkRectf[3].\n\n",
    "V.vtkRectd()\nC++: vtkRectd()\nV.vtkRectd(float, float, float, float)\nC++: vtkRectd(double x, double y, double width, double height)\nV.vtkRectd((float, float, float, float))\nC++: explicit vtkRectd(const double *init)\nV.vtkRectd(vtkRectd)\nC++: vtkRectd(const &vtkRectd)\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkRect(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyvtkRect_TemplateNew(modulename);

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

  if (o && PyDict_SetItemString(dict, (char *)"vtkRect", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyvtkRecti_TypeNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkRecti", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyvtkRectf_TypeNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkRectf", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyvtkRectd_TypeNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkRectd", o) != 0)
    {
    Py_DECREF(o);
    }

}

