// python wrapper for vtkColor
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkColor.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkColor(PyObject *, const char *); }

static const char **PyvtkColor3_IdE_Doc();


static PyObject *
PyvtkColor3_IdE_Set(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "Set");
  void *vp = ap.GetSelfPointer(self);
  vtkColor3<double> *op = static_cast<vtkColor3<double> *>(vp);

  double temp0;
  double temp1;
  double temp2;
  PyObject *result = NULL;

  if (ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    op->Set(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkColor3_IdE_SetRed(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "SetRed");
  void *vp = ap.GetSelfPointer(self);
  vtkColor3<double> *op = static_cast<vtkColor3<double> *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    op->SetRed(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkColor3_IdE_GetRed(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "GetRed");
  void *vp = ap.GetSelfPointer(self);
  vtkColor3<double> *op = static_cast<vtkColor3<double> *>(vp);

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    const double *tempr = &op->GetRed();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(*tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkColor3_IdE_SetGreen(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "SetGreen");
  void *vp = ap.GetSelfPointer(self);
  vtkColor3<double> *op = static_cast<vtkColor3<double> *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    op->SetGreen(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkColor3_IdE_GetGreen(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "GetGreen");
  void *vp = ap.GetSelfPointer(self);
  vtkColor3<double> *op = static_cast<vtkColor3<double> *>(vp);

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    const double *tempr = &op->GetGreen();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(*tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkColor3_IdE_SetBlue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "SetBlue");
  void *vp = ap.GetSelfPointer(self);
  vtkColor3<double> *op = static_cast<vtkColor3<double> *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    op->SetBlue(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkColor3_IdE_GetBlue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "GetBlue");
  void *vp = ap.GetSelfPointer(self);
  vtkColor3<double> *op = static_cast<vtkColor3<double> *>(vp);

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    const double *tempr = &op->GetBlue();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(*tempr);
      }
    }

  return result;
}


#if !defined(VTK_LEGACY_REMOVE)
static PyObject *
PyvtkColor3_IdE_Red(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "Red");
  void *vp = ap.GetSelfPointer(self);
  vtkColor3<double> *op = static_cast<vtkColor3<double> *>(vp);

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    const double *tempr = &op->Red();

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
PyvtkColor3_IdE_Green(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "Green");
  void *vp = ap.GetSelfPointer(self);
  vtkColor3<double> *op = static_cast<vtkColor3<double> *>(vp);

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    const double *tempr = &op->Green();

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
PyvtkColor3_IdE_Blue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "Blue");
  void *vp = ap.GetSelfPointer(self);
  vtkColor3<double> *op = static_cast<vtkColor3<double> *>(vp);

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    const double *tempr = &op->Blue();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(*tempr);
      }
    }

  return result;
}
#endif

static PyMethodDef PyvtkColor3_IdE_Methods[] = {
  {(char*)"Set", PyvtkColor3_IdE_Set, METH_VARARGS,
   (char*)"V.Set(float, float, float)\nC++: void Set(const double &red, const double &green,\n    const double &blue)\n\nSet the red, green and blue components of the color.\n"},
  {(char*)"SetRed", PyvtkColor3_IdE_SetRed, METH_VARARGS,
   (char*)"V.SetRed(float)\nC++: void SetRed(const double &red)\n\nSet the red component of the color, i.e. element 0.\n"},
  {(char*)"GetRed", PyvtkColor3_IdE_GetRed, METH_VARARGS,
   (char*)"V.GetRed() -> float\nC++: const double &GetRed()\n\nGet the red component of the color, i.e. element 0.\n"},
  {(char*)"SetGreen", PyvtkColor3_IdE_SetGreen, METH_VARARGS,
   (char*)"V.SetGreen(float)\nC++: void SetGreen(const double &green)\n\nSet the green component of the color, i.e. element 1.\n"},
  {(char*)"GetGreen", PyvtkColor3_IdE_GetGreen, METH_VARARGS,
   (char*)"V.GetGreen() -> float\nC++: const double &GetGreen()\n\nGet the green component of the color, i.e. element 1.\n"},
  {(char*)"SetBlue", PyvtkColor3_IdE_SetBlue, METH_VARARGS,
   (char*)"V.SetBlue(float)\nC++: void SetBlue(const double &blue)\n\nSet the blue component of the color, i.e. element 2.\n"},
  {(char*)"GetBlue", PyvtkColor3_IdE_GetBlue, METH_VARARGS,
   (char*)"V.GetBlue() -> float\nC++: const double &GetBlue()\n\nGet the blue component of the color, i.e. element 2.\n"},
#if !defined(VTK_LEGACY_REMOVE)
  {(char*)"Red", PyvtkColor3_IdE_Red, METH_VARARGS,
   (char*)"V.Red() -> float\nC++: const double &Red()\n\nLegacy method for getting the red component.\n"},
#endif
#if !defined(VTK_LEGACY_REMOVE)
  {(char*)"Green", PyvtkColor3_IdE_Green, METH_VARARGS,
   (char*)"V.Green() -> float\nC++: const double &Green()\n\nLegacy method for getting the green component.\n"},
#endif
#if !defined(VTK_LEGACY_REMOVE)
  {(char*)"Blue", PyvtkColor3_IdE_Blue, METH_VARARGS,
   (char*)"V.Blue() -> float\nC++: const double &Blue()\n\nLegacy method for getting the blue component.\n"},
#endif
  {NULL, NULL, 0, NULL}
};

#ifndef DECLARED_PyvtkColor3_IdE_Type
extern VTK_PYTHON_EXPORT PyTypeObject PyvtkColor3_IdE_Type;
#define DECLARED_PyvtkColor3_IdE_Type
#endif

#ifndef DECLARED_PyvtkTuple_IdLi3EE_Type
extern VTK_PYTHON_IMPORT PyTypeObject PyvtkTuple_IdLi3EE_Type;
#define DECLARED_PyvtkTuple_IdLi3EE_Type
#endif


static PyObject *
PyvtkColor3_IdE_vtkColor3_s1(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkColor3");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkColor3<double> *op = new vtkColor3<double>();
    (*op)[0] = 0;
    (*op)[1] = 0;
    (*op)[2] = 0;

    result = PyVTKSpecialObject_New("vtkColor3_IdE", op);
    }

  return result;
}

static PyObject *
PyvtkColor3_IdE_vtkColor3_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkColor3");

  double temp0;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkColor3<double> *op = new vtkColor3<double>(temp0);

    result = PyVTKSpecialObject_New("vtkColor3_IdE", op);
    }

  return result;
}

static PyObject *
PyvtkColor3_IdE_vtkColor3_s3(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkColor3");

  double temp0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    vtkColor3<double> *op = new vtkColor3<double>(temp0);

    result = PyVTKSpecialObject_New("vtkColor3_IdE", op);
    }

  return result;
}

static PyObject *
PyvtkColor3_IdE_vtkColor3_s4(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkColor3");

  double temp0;
  double temp1;
  double temp2;
  PyObject *result = NULL;

  if (ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    vtkColor3<double> *op = new vtkColor3<double>(temp0, temp1, temp2);

    result = PyVTKSpecialObject_New("vtkColor3_IdE", op);
    }

  return result;
}

static PyObject *
PyvtkColor3_IdE_vtkColor3_s5(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkColor3");

  vtkColor3<double> *temp0 = NULL;
  PyObject *pobj0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkColor3_IdE"))
    {
    vtkColor3<double> *op = new vtkColor3<double>(*temp0);

    result = PyVTKSpecialObject_New("vtkColor3_IdE", op);
    }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkColor3_IdE_vtkColor3_Methods[] = {
  {NULL, PyvtkColor3_IdE_vtkColor3_s2, METH_VARARGS,
   (char*)"-d"},
  {NULL, PyvtkColor3_IdE_vtkColor3_s3, METH_VARARGS,
   (char*)"-O *d"},
  {NULL, PyvtkColor3_IdE_vtkColor3_s5, METH_VARARGS,
   (char*)"O &vtkColor3_IdE"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkColor3_IdE_vtkColor3(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkColor3_IdE_vtkColor3_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
    {
    case 0:
      return PyvtkColor3_IdE_vtkColor3_s1(self, args);
    case 3:
      return PyvtkColor3_IdE_vtkColor3_s4(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "vtkColor3");
  return NULL;
}


static PyMethodDef PyvtkColor3_IdE_NewMethod = \
{ (char*)"vtkColor3_IdE", PyvtkColor3_IdE_vtkColor3, 1,
  (char*)"" };

#if PY_VERSION_HEX >= 0x02020000
static PyObject *
PyvtkColor3_IdE_New(PyTypeObject *, PyObject *args, PyObject *kwds)
{
  if (kwds && PyDict_Size(kwds))
    {
    PyErr_SetString(PyExc_TypeError,
                    "this function takes no keyword arguments");
    return NULL;
    }

  return PyvtkColor3_IdE_vtkColor3(NULL, args);
}
#endif

static void PyvtkColor3_IdE_Delete(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  if (obj->vtk_ptr)
    {
    delete static_cast<vtkColor3<double> *>(obj->vtk_ptr);
    }
#if PY_MAJOR_VERSION >= 2
  PyObject_Del(self);
#else
  PyMem_DEL(self);
#endif
}

static long PyvtkColor3_IdE_Hash(PyObject *self)
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

PyTypeObject PyvtkColor3_IdE_Type = {
  PyObject_HEAD_INIT(&PyType_Type)
  0,
  (char*)"vtkColor3_IdE", // tp_name
  sizeof(PyVTKSpecialObject), // tp_basicsize
  0, // tp_itemsize
  PyvtkColor3_IdE_Delete, // tp_dealloc
  0, // tp_print
  0, // tp_getattr
  0, // tp_setattr
  0, // tp_compare
  PyVTKSpecialObject_Repr, // tp_repr
  0, // tp_as_number
  0, // tp_as_sequence
  0, // tp_as_mapping
  PyvtkColor3_IdE_Hash, // tp_hash
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
  PyvtkColor3_IdE_Methods, // tp_methods
  0, // tp_members
  0, // tp_getset
  &PyvtkTuple_IdLi3EE_Type, // tp_base
  0, // tp_dict
  0, // tp_descr_get
  0, // tp_descr_set
  0, // tp_dictoffset
  0, // tp_init
  0, // tp_alloc
  PyvtkColor3_IdE_New, // tp_new
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

static void *PyvtkColor3_IdE_CCopy(const void *obj)
{
  if (obj)
    {
    return new vtkColor3<double>(*static_cast<const vtkColor3<double>*>(obj));
    }
  return 0;
}

static PyObject *PyvtkColor3_IdE_TypeNew(const char *)
{
  PyObject *cls = PyVTKSpecialType_New(
    &PyvtkColor3_IdE_Type,
    PyvtkColor3_IdE_Methods,
    PyvtkColor3_IdE_vtkColor3_Methods,
    &PyvtkColor3_IdE_NewMethod,
    PyvtkColor3_IdE_Doc(), &PyvtkColor3_IdE_CCopy);

  return cls;
}

const char **PyvtkColor3_IdE_Doc()
{
  static const char *docstring[] = {
    "vtkColor4 - templated base type for storage of 4 component colors.\n\n",
    "Superclass: vtkTuple[float64,3]\n\n",
    "This class is a templated data type for storing and manipulating\nfixed size colors. It derives from the vtkVector templated data\nstructure.\n\n",
    "V.vtkColor3()\nC++: vtkColor3()\nV.vtkColor3(float)\nC++: explicit vtkColor3(const double &scalar)\nV.vtkColor3((float, float, float))\nC++: explicit vtkColor3(const double *init)\nV.vtkColor3(float, float, float)\nC++: vtkColor3(const double &red, const double &green,\n    const double &blue)\nV.vtkColor3(vtkColor3<double>)\nC++: vtkColor3(const &vtkColor3<double>)\n",
    NULL
  };

  return docstring;
}


static const char **PyvtkColor3_IfE_Doc();


static PyObject *
PyvtkColor3_IfE_Set(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "Set");
  void *vp = ap.GetSelfPointer(self);
  vtkColor3<float> *op = static_cast<vtkColor3<float> *>(vp);

  float temp0;
  float temp1;
  float temp2;
  PyObject *result = NULL;

  if (ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    op->Set(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkColor3_IfE_SetRed(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "SetRed");
  void *vp = ap.GetSelfPointer(self);
  vtkColor3<float> *op = static_cast<vtkColor3<float> *>(vp);

  float temp0;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    op->SetRed(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkColor3_IfE_GetRed(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "GetRed");
  void *vp = ap.GetSelfPointer(self);
  vtkColor3<float> *op = static_cast<vtkColor3<float> *>(vp);

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    const float *tempr = &op->GetRed();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(*tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkColor3_IfE_SetGreen(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "SetGreen");
  void *vp = ap.GetSelfPointer(self);
  vtkColor3<float> *op = static_cast<vtkColor3<float> *>(vp);

  float temp0;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    op->SetGreen(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkColor3_IfE_GetGreen(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "GetGreen");
  void *vp = ap.GetSelfPointer(self);
  vtkColor3<float> *op = static_cast<vtkColor3<float> *>(vp);

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    const float *tempr = &op->GetGreen();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(*tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkColor3_IfE_SetBlue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "SetBlue");
  void *vp = ap.GetSelfPointer(self);
  vtkColor3<float> *op = static_cast<vtkColor3<float> *>(vp);

  float temp0;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    op->SetBlue(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkColor3_IfE_GetBlue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "GetBlue");
  void *vp = ap.GetSelfPointer(self);
  vtkColor3<float> *op = static_cast<vtkColor3<float> *>(vp);

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    const float *tempr = &op->GetBlue();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(*tempr);
      }
    }

  return result;
}


#if !defined(VTK_LEGACY_REMOVE)
static PyObject *
PyvtkColor3_IfE_Red(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "Red");
  void *vp = ap.GetSelfPointer(self);
  vtkColor3<float> *op = static_cast<vtkColor3<float> *>(vp);

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    const float *tempr = &op->Red();

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
PyvtkColor3_IfE_Green(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "Green");
  void *vp = ap.GetSelfPointer(self);
  vtkColor3<float> *op = static_cast<vtkColor3<float> *>(vp);

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    const float *tempr = &op->Green();

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
PyvtkColor3_IfE_Blue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "Blue");
  void *vp = ap.GetSelfPointer(self);
  vtkColor3<float> *op = static_cast<vtkColor3<float> *>(vp);

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    const float *tempr = &op->Blue();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(*tempr);
      }
    }

  return result;
}
#endif

static PyMethodDef PyvtkColor3_IfE_Methods[] = {
  {(char*)"Set", PyvtkColor3_IfE_Set, METH_VARARGS,
   (char*)"V.Set(float, float, float)\nC++: void Set(const float &red, const float &green,\n    const float &blue)\n\nSet the red, green and blue components of the color.\n"},
  {(char*)"SetRed", PyvtkColor3_IfE_SetRed, METH_VARARGS,
   (char*)"V.SetRed(float)\nC++: void SetRed(const float &red)\n\nSet the red component of the color, i.e. element 0.\n"},
  {(char*)"GetRed", PyvtkColor3_IfE_GetRed, METH_VARARGS,
   (char*)"V.GetRed() -> float\nC++: const float &GetRed()\n\nGet the red component of the color, i.e. element 0.\n"},
  {(char*)"SetGreen", PyvtkColor3_IfE_SetGreen, METH_VARARGS,
   (char*)"V.SetGreen(float)\nC++: void SetGreen(const float &green)\n\nSet the green component of the color, i.e. element 1.\n"},
  {(char*)"GetGreen", PyvtkColor3_IfE_GetGreen, METH_VARARGS,
   (char*)"V.GetGreen() -> float\nC++: const float &GetGreen()\n\nGet the green component of the color, i.e. element 1.\n"},
  {(char*)"SetBlue", PyvtkColor3_IfE_SetBlue, METH_VARARGS,
   (char*)"V.SetBlue(float)\nC++: void SetBlue(const float &blue)\n\nSet the blue component of the color, i.e. element 2.\n"},
  {(char*)"GetBlue", PyvtkColor3_IfE_GetBlue, METH_VARARGS,
   (char*)"V.GetBlue() -> float\nC++: const float &GetBlue()\n\nGet the blue component of the color, i.e. element 2.\n"},
#if !defined(VTK_LEGACY_REMOVE)
  {(char*)"Red", PyvtkColor3_IfE_Red, METH_VARARGS,
   (char*)"V.Red() -> float\nC++: const float &Red()\n\nLegacy method for getting the red component.\n"},
#endif
#if !defined(VTK_LEGACY_REMOVE)
  {(char*)"Green", PyvtkColor3_IfE_Green, METH_VARARGS,
   (char*)"V.Green() -> float\nC++: const float &Green()\n\nLegacy method for getting the green component.\n"},
#endif
#if !defined(VTK_LEGACY_REMOVE)
  {(char*)"Blue", PyvtkColor3_IfE_Blue, METH_VARARGS,
   (char*)"V.Blue() -> float\nC++: const float &Blue()\n\nLegacy method for getting the blue component.\n"},
#endif
  {NULL, NULL, 0, NULL}
};

#ifndef DECLARED_PyvtkColor3_IfE_Type
extern VTK_PYTHON_EXPORT PyTypeObject PyvtkColor3_IfE_Type;
#define DECLARED_PyvtkColor3_IfE_Type
#endif

#ifndef DECLARED_PyvtkTuple_IfLi3EE_Type
extern VTK_PYTHON_IMPORT PyTypeObject PyvtkTuple_IfLi3EE_Type;
#define DECLARED_PyvtkTuple_IfLi3EE_Type
#endif


static PyObject *
PyvtkColor3_IfE_vtkColor3_s1(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkColor3");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkColor3<float> *op = new vtkColor3<float>();
    (*op)[0] = 0;
    (*op)[1] = 0;
    (*op)[2] = 0;

    result = PyVTKSpecialObject_New("vtkColor3_IfE", op);
    }

  return result;
}

static PyObject *
PyvtkColor3_IfE_vtkColor3_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkColor3");

  float temp0;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkColor3<float> *op = new vtkColor3<float>(temp0);

    result = PyVTKSpecialObject_New("vtkColor3_IfE", op);
    }

  return result;
}

static PyObject *
PyvtkColor3_IfE_vtkColor3_s3(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkColor3");

  float temp0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    vtkColor3<float> *op = new vtkColor3<float>(temp0);

    result = PyVTKSpecialObject_New("vtkColor3_IfE", op);
    }

  return result;
}

static PyObject *
PyvtkColor3_IfE_vtkColor3_s4(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkColor3");

  float temp0;
  float temp1;
  float temp2;
  PyObject *result = NULL;

  if (ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    vtkColor3<float> *op = new vtkColor3<float>(temp0, temp1, temp2);

    result = PyVTKSpecialObject_New("vtkColor3_IfE", op);
    }

  return result;
}

static PyObject *
PyvtkColor3_IfE_vtkColor3_s5(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkColor3");

  vtkColor3<float> *temp0 = NULL;
  PyObject *pobj0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkColor3_IfE"))
    {
    vtkColor3<float> *op = new vtkColor3<float>(*temp0);

    result = PyVTKSpecialObject_New("vtkColor3_IfE", op);
    }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkColor3_IfE_vtkColor3_Methods[] = {
  {NULL, PyvtkColor3_IfE_vtkColor3_s2, METH_VARARGS,
   (char*)"-f"},
  {NULL, PyvtkColor3_IfE_vtkColor3_s3, METH_VARARGS,
   (char*)"-O *f"},
  {NULL, PyvtkColor3_IfE_vtkColor3_s5, METH_VARARGS,
   (char*)"O &vtkColor3_IfE"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkColor3_IfE_vtkColor3(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkColor3_IfE_vtkColor3_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
    {
    case 0:
      return PyvtkColor3_IfE_vtkColor3_s1(self, args);
    case 3:
      return PyvtkColor3_IfE_vtkColor3_s4(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "vtkColor3");
  return NULL;
}


static PyMethodDef PyvtkColor3_IfE_NewMethod = \
{ (char*)"vtkColor3_IfE", PyvtkColor3_IfE_vtkColor3, 1,
  (char*)"" };

#if PY_VERSION_HEX >= 0x02020000
static PyObject *
PyvtkColor3_IfE_New(PyTypeObject *, PyObject *args, PyObject *kwds)
{
  if (kwds && PyDict_Size(kwds))
    {
    PyErr_SetString(PyExc_TypeError,
                    "this function takes no keyword arguments");
    return NULL;
    }

  return PyvtkColor3_IfE_vtkColor3(NULL, args);
}
#endif

static void PyvtkColor3_IfE_Delete(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  if (obj->vtk_ptr)
    {
    delete static_cast<vtkColor3<float> *>(obj->vtk_ptr);
    }
#if PY_MAJOR_VERSION >= 2
  PyObject_Del(self);
#else
  PyMem_DEL(self);
#endif
}

static long PyvtkColor3_IfE_Hash(PyObject *self)
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

PyTypeObject PyvtkColor3_IfE_Type = {
  PyObject_HEAD_INIT(&PyType_Type)
  0,
  (char*)"vtkColor3_IfE", // tp_name
  sizeof(PyVTKSpecialObject), // tp_basicsize
  0, // tp_itemsize
  PyvtkColor3_IfE_Delete, // tp_dealloc
  0, // tp_print
  0, // tp_getattr
  0, // tp_setattr
  0, // tp_compare
  PyVTKSpecialObject_Repr, // tp_repr
  0, // tp_as_number
  0, // tp_as_sequence
  0, // tp_as_mapping
  PyvtkColor3_IfE_Hash, // tp_hash
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
  PyvtkColor3_IfE_Methods, // tp_methods
  0, // tp_members
  0, // tp_getset
  &PyvtkTuple_IfLi3EE_Type, // tp_base
  0, // tp_dict
  0, // tp_descr_get
  0, // tp_descr_set
  0, // tp_dictoffset
  0, // tp_init
  0, // tp_alloc
  PyvtkColor3_IfE_New, // tp_new
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

static void *PyvtkColor3_IfE_CCopy(const void *obj)
{
  if (obj)
    {
    return new vtkColor3<float>(*static_cast<const vtkColor3<float>*>(obj));
    }
  return 0;
}

static PyObject *PyvtkColor3_IfE_TypeNew(const char *)
{
  PyObject *cls = PyVTKSpecialType_New(
    &PyvtkColor3_IfE_Type,
    PyvtkColor3_IfE_Methods,
    PyvtkColor3_IfE_vtkColor3_Methods,
    &PyvtkColor3_IfE_NewMethod,
    PyvtkColor3_IfE_Doc(), &PyvtkColor3_IfE_CCopy);

  return cls;
}

const char **PyvtkColor3_IfE_Doc()
{
  static const char *docstring[] = {
    "vtkColor4 - templated base type for storage of 4 component colors.\n\n",
    "Superclass: vtkTuple[float32,3]\n\n",
    "This class is a templated data type for storing and manipulating\nfixed size colors. It derives from the vtkVector templated data\nstructure.\n\n",
    "V.vtkColor3()\nC++: vtkColor3()\nV.vtkColor3(float)\nC++: explicit vtkColor3(const float &scalar)\nV.vtkColor3((float, float, float))\nC++: explicit vtkColor3(const float *init)\nV.vtkColor3(float, float, float)\nC++: vtkColor3(const float &red, const float &green,\n    const float &blue)\nV.vtkColor3(vtkColor3<float>)\nC++: vtkColor3(const &vtkColor3<float>)\n",
    NULL
  };

  return docstring;
}


static const char **PyvtkColor3_IhE_Doc();


static PyObject *
PyvtkColor3_IhE_Set(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "Set");
  void *vp = ap.GetSelfPointer(self);
  vtkColor3<unsigned char> *op = static_cast<vtkColor3<unsigned char> *>(vp);

  unsigned char temp0;
  unsigned char temp1;
  unsigned char temp2;
  PyObject *result = NULL;

  if (ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    op->Set(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkColor3_IhE_SetRed(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "SetRed");
  void *vp = ap.GetSelfPointer(self);
  vtkColor3<unsigned char> *op = static_cast<vtkColor3<unsigned char> *>(vp);

  unsigned char temp0;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    op->SetRed(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkColor3_IhE_GetRed(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "GetRed");
  void *vp = ap.GetSelfPointer(self);
  vtkColor3<unsigned char> *op = static_cast<vtkColor3<unsigned char> *>(vp);

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    const unsigned char *tempr = &op->GetRed();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(*tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkColor3_IhE_SetGreen(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "SetGreen");
  void *vp = ap.GetSelfPointer(self);
  vtkColor3<unsigned char> *op = static_cast<vtkColor3<unsigned char> *>(vp);

  unsigned char temp0;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    op->SetGreen(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkColor3_IhE_GetGreen(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "GetGreen");
  void *vp = ap.GetSelfPointer(self);
  vtkColor3<unsigned char> *op = static_cast<vtkColor3<unsigned char> *>(vp);

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    const unsigned char *tempr = &op->GetGreen();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(*tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkColor3_IhE_SetBlue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "SetBlue");
  void *vp = ap.GetSelfPointer(self);
  vtkColor3<unsigned char> *op = static_cast<vtkColor3<unsigned char> *>(vp);

  unsigned char temp0;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    op->SetBlue(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkColor3_IhE_GetBlue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "GetBlue");
  void *vp = ap.GetSelfPointer(self);
  vtkColor3<unsigned char> *op = static_cast<vtkColor3<unsigned char> *>(vp);

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    const unsigned char *tempr = &op->GetBlue();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(*tempr);
      }
    }

  return result;
}


#if !defined(VTK_LEGACY_REMOVE)
static PyObject *
PyvtkColor3_IhE_Red(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "Red");
  void *vp = ap.GetSelfPointer(self);
  vtkColor3<unsigned char> *op = static_cast<vtkColor3<unsigned char> *>(vp);

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    const unsigned char *tempr = &op->Red();

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
PyvtkColor3_IhE_Green(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "Green");
  void *vp = ap.GetSelfPointer(self);
  vtkColor3<unsigned char> *op = static_cast<vtkColor3<unsigned char> *>(vp);

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    const unsigned char *tempr = &op->Green();

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
PyvtkColor3_IhE_Blue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "Blue");
  void *vp = ap.GetSelfPointer(self);
  vtkColor3<unsigned char> *op = static_cast<vtkColor3<unsigned char> *>(vp);

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    const unsigned char *tempr = &op->Blue();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(*tempr);
      }
    }

  return result;
}
#endif

static PyMethodDef PyvtkColor3_IhE_Methods[] = {
  {(char*)"Set", PyvtkColor3_IhE_Set, METH_VARARGS,
   (char*)"V.Set(int, int, int)\nC++: void Set(const unsigned char &red,\n    const unsigned char &green, const unsigned char &blue)\n\nSet the red, green and blue components of the color.\n"},
  {(char*)"SetRed", PyvtkColor3_IhE_SetRed, METH_VARARGS,
   (char*)"V.SetRed(int)\nC++: void SetRed(const unsigned char &red)\n\nSet the red component of the color, i.e. element 0.\n"},
  {(char*)"GetRed", PyvtkColor3_IhE_GetRed, METH_VARARGS,
   (char*)"V.GetRed() -> int\nC++: const unsigned char &GetRed()\n\nGet the red component of the color, i.e. element 0.\n"},
  {(char*)"SetGreen", PyvtkColor3_IhE_SetGreen, METH_VARARGS,
   (char*)"V.SetGreen(int)\nC++: void SetGreen(const unsigned char &green)\n\nSet the green component of the color, i.e. element 1.\n"},
  {(char*)"GetGreen", PyvtkColor3_IhE_GetGreen, METH_VARARGS,
   (char*)"V.GetGreen() -> int\nC++: const unsigned char &GetGreen()\n\nGet the green component of the color, i.e. element 1.\n"},
  {(char*)"SetBlue", PyvtkColor3_IhE_SetBlue, METH_VARARGS,
   (char*)"V.SetBlue(int)\nC++: void SetBlue(const unsigned char &blue)\n\nSet the blue component of the color, i.e. element 2.\n"},
  {(char*)"GetBlue", PyvtkColor3_IhE_GetBlue, METH_VARARGS,
   (char*)"V.GetBlue() -> int\nC++: const unsigned char &GetBlue()\n\nGet the blue component of the color, i.e. element 2.\n"},
#if !defined(VTK_LEGACY_REMOVE)
  {(char*)"Red", PyvtkColor3_IhE_Red, METH_VARARGS,
   (char*)"V.Red() -> int\nC++: const unsigned char &Red()\n\nLegacy method for getting the red component.\n"},
#endif
#if !defined(VTK_LEGACY_REMOVE)
  {(char*)"Green", PyvtkColor3_IhE_Green, METH_VARARGS,
   (char*)"V.Green() -> int\nC++: const unsigned char &Green()\n\nLegacy method for getting the green component.\n"},
#endif
#if !defined(VTK_LEGACY_REMOVE)
  {(char*)"Blue", PyvtkColor3_IhE_Blue, METH_VARARGS,
   (char*)"V.Blue() -> int\nC++: const unsigned char &Blue()\n\nLegacy method for getting the blue component.\n"},
#endif
  {NULL, NULL, 0, NULL}
};

#ifndef DECLARED_PyvtkColor3_IhE_Type
extern VTK_PYTHON_EXPORT PyTypeObject PyvtkColor3_IhE_Type;
#define DECLARED_PyvtkColor3_IhE_Type
#endif

#ifndef DECLARED_PyvtkTuple_IhLi3EE_Type
extern VTK_PYTHON_IMPORT PyTypeObject PyvtkTuple_IhLi3EE_Type;
#define DECLARED_PyvtkTuple_IhLi3EE_Type
#endif


static PyObject *
PyvtkColor3_IhE_vtkColor3_s1(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkColor3");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkColor3<unsigned char> *op = new vtkColor3<unsigned char>();
    (*op)[0] = 0;
    (*op)[1] = 0;
    (*op)[2] = 0;

    result = PyVTKSpecialObject_New("vtkColor3_IhE", op);
    }

  return result;
}

static PyObject *
PyvtkColor3_IhE_vtkColor3_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkColor3");

  unsigned char temp0;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkColor3<unsigned char> *op = new vtkColor3<unsigned char>(temp0);

    result = PyVTKSpecialObject_New("vtkColor3_IhE", op);
    }

  return result;
}

static PyObject *
PyvtkColor3_IhE_vtkColor3_s3(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkColor3");

  unsigned char temp0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    vtkColor3<unsigned char> *op = new vtkColor3<unsigned char>(temp0);

    result = PyVTKSpecialObject_New("vtkColor3_IhE", op);
    }

  return result;
}

static PyObject *
PyvtkColor3_IhE_vtkColor3_s4(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkColor3");

  unsigned char temp0;
  unsigned char temp1;
  unsigned char temp2;
  PyObject *result = NULL;

  if (ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    vtkColor3<unsigned char> *op = new vtkColor3<unsigned char>(temp0, temp1, temp2);

    result = PyVTKSpecialObject_New("vtkColor3_IhE", op);
    }

  return result;
}

static PyObject *
PyvtkColor3_IhE_vtkColor3_s5(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkColor3");

  vtkColor3<unsigned char> *temp0 = NULL;
  PyObject *pobj0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkColor3_IhE"))
    {
    vtkColor3<unsigned char> *op = new vtkColor3<unsigned char>(*temp0);

    result = PyVTKSpecialObject_New("vtkColor3_IhE", op);
    }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkColor3_IhE_vtkColor3_Methods[] = {
  {NULL, PyvtkColor3_IhE_vtkColor3_s2, METH_VARARGS,
   (char*)"-b"},
  {NULL, PyvtkColor3_IhE_vtkColor3_s3, METH_VARARGS,
   (char*)"-O *b"},
  {NULL, PyvtkColor3_IhE_vtkColor3_s5, METH_VARARGS,
   (char*)"O &vtkColor3_IhE"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkColor3_IhE_vtkColor3(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkColor3_IhE_vtkColor3_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
    {
    case 0:
      return PyvtkColor3_IhE_vtkColor3_s1(self, args);
    case 3:
      return PyvtkColor3_IhE_vtkColor3_s4(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "vtkColor3");
  return NULL;
}


static PyMethodDef PyvtkColor3_IhE_NewMethod = \
{ (char*)"vtkColor3_IhE", PyvtkColor3_IhE_vtkColor3, 1,
  (char*)"" };

#if PY_VERSION_HEX >= 0x02020000
static PyObject *
PyvtkColor3_IhE_New(PyTypeObject *, PyObject *args, PyObject *kwds)
{
  if (kwds && PyDict_Size(kwds))
    {
    PyErr_SetString(PyExc_TypeError,
                    "this function takes no keyword arguments");
    return NULL;
    }

  return PyvtkColor3_IhE_vtkColor3(NULL, args);
}
#endif

static void PyvtkColor3_IhE_Delete(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  if (obj->vtk_ptr)
    {
    delete static_cast<vtkColor3<unsigned char> *>(obj->vtk_ptr);
    }
#if PY_MAJOR_VERSION >= 2
  PyObject_Del(self);
#else
  PyMem_DEL(self);
#endif
}

static long PyvtkColor3_IhE_Hash(PyObject *self)
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

PyTypeObject PyvtkColor3_IhE_Type = {
  PyObject_HEAD_INIT(&PyType_Type)
  0,
  (char*)"vtkColor3_IhE", // tp_name
  sizeof(PyVTKSpecialObject), // tp_basicsize
  0, // tp_itemsize
  PyvtkColor3_IhE_Delete, // tp_dealloc
  0, // tp_print
  0, // tp_getattr
  0, // tp_setattr
  0, // tp_compare
  PyVTKSpecialObject_Repr, // tp_repr
  0, // tp_as_number
  0, // tp_as_sequence
  0, // tp_as_mapping
  PyvtkColor3_IhE_Hash, // tp_hash
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
  PyvtkColor3_IhE_Methods, // tp_methods
  0, // tp_members
  0, // tp_getset
  &PyvtkTuple_IhLi3EE_Type, // tp_base
  0, // tp_dict
  0, // tp_descr_get
  0, // tp_descr_set
  0, // tp_dictoffset
  0, // tp_init
  0, // tp_alloc
  PyvtkColor3_IhE_New, // tp_new
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

static void *PyvtkColor3_IhE_CCopy(const void *obj)
{
  if (obj)
    {
    return new vtkColor3<unsigned char>(*static_cast<const vtkColor3<unsigned char>*>(obj));
    }
  return 0;
}

static PyObject *PyvtkColor3_IhE_TypeNew(const char *)
{
  PyObject *cls = PyVTKSpecialType_New(
    &PyvtkColor3_IhE_Type,
    PyvtkColor3_IhE_Methods,
    PyvtkColor3_IhE_vtkColor3_Methods,
    &PyvtkColor3_IhE_NewMethod,
    PyvtkColor3_IhE_Doc(), &PyvtkColor3_IhE_CCopy);

  return cls;
}

const char **PyvtkColor3_IhE_Doc()
{
  static const char *docstring[] = {
    "vtkColor4 - templated base type for storage of 4 component colors.\n\n",
    "Superclass: vtkTuple[uint8,3]\n\n",
    "This class is a templated data type for storing and manipulating\nfixed size colors. It derives from the vtkVector templated data\nstructure.\n\n",
    "V.vtkColor3()\nC++: vtkColor3()\nV.vtkColor3(int)\nC++: explicit vtkColor3(const unsigned char &scalar)\nV.vtkColor3((int, int, int))\nC++: explicit vtkColor3(const unsigned char *init)\nV.vtkColor3(int, int, int)\nC++: vtkColor3(const unsigned char &red, const unsigned char &green,\n    const unsigned char &blue)\nV.vtkColor3(vtkColor3<unsigned char>)\nC++: vtkColor3(const &vtkColor3<unsigned char>)\n",
    NULL
  };

  return docstring;
}

static const char *PyvtkColor3_Doc[] = {
    "vtkColor4 - templated base type for storage of 4 component colors.\n\n",
    "Superclass: vtkTuple[T,3]\n\n",
    "This class is a templated data type for storing and manipulating\nfixed size colors. It derives from the vtkVector templated data\nstructure.\n\n",
    "\nProvided Types:\n\n",
    "  vtkColor3[float64] => vtkColor3<double>\n",
    "  vtkColor3[float32] => vtkColor3<float>\n",
    "  vtkColor3[uint8] => vtkColor3<unsigned char>\n",
    NULL
};

PyObject *PyvtkColor3_TemplateNew(const char *modulename)
{
  PyObject *o;

  PyObject *temp = PyVTKTemplate_New("vtkColor3", modulename,
                                     PyvtkColor3_Doc);

  o = PyvtkColor3_IdE_TypeNew(modulename);
  if (o && PyVTKTemplate_AddItem(temp, o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyvtkColor3_IfE_TypeNew(modulename);
  if (o && PyVTKTemplate_AddItem(temp, o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyvtkColor3_IhE_TypeNew(modulename);
  if (o && PyVTKTemplate_AddItem(temp, o) != 0)
    {
    Py_DECREF(o);
    }

  return temp;
}


static const char **PyvtkColor4_IdE_Doc();


static PyObject *
PyvtkColor4_IdE_Set_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "Set");
  void *vp = ap.GetSelfPointer(self);
  vtkColor4<double> *op = static_cast<vtkColor4<double> *>(vp);

  double temp0;
  double temp1;
  double temp2;
  PyObject *result = NULL;

  if (ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    op->Set(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkColor4_IdE_Set_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "Set");
  void *vp = ap.GetSelfPointer(self);
  vtkColor4<double> *op = static_cast<vtkColor4<double> *>(vp);

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
PyvtkColor4_IdE_Set(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
    {
    case 3:
      return PyvtkColor4_IdE_Set_s1(self, args);
    case 4:
      return PyvtkColor4_IdE_Set_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "Set");
  return NULL;
}



static PyObject *
PyvtkColor4_IdE_SetRed(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "SetRed");
  void *vp = ap.GetSelfPointer(self);
  vtkColor4<double> *op = static_cast<vtkColor4<double> *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    op->SetRed(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkColor4_IdE_GetRed(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "GetRed");
  void *vp = ap.GetSelfPointer(self);
  vtkColor4<double> *op = static_cast<vtkColor4<double> *>(vp);

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    const double *tempr = &op->GetRed();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(*tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkColor4_IdE_SetGreen(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "SetGreen");
  void *vp = ap.GetSelfPointer(self);
  vtkColor4<double> *op = static_cast<vtkColor4<double> *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    op->SetGreen(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkColor4_IdE_GetGreen(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "GetGreen");
  void *vp = ap.GetSelfPointer(self);
  vtkColor4<double> *op = static_cast<vtkColor4<double> *>(vp);

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    const double *tempr = &op->GetGreen();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(*tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkColor4_IdE_SetBlue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "SetBlue");
  void *vp = ap.GetSelfPointer(self);
  vtkColor4<double> *op = static_cast<vtkColor4<double> *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    op->SetBlue(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkColor4_IdE_GetBlue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "GetBlue");
  void *vp = ap.GetSelfPointer(self);
  vtkColor4<double> *op = static_cast<vtkColor4<double> *>(vp);

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    const double *tempr = &op->GetBlue();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(*tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkColor4_IdE_SetAlpha(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "SetAlpha");
  void *vp = ap.GetSelfPointer(self);
  vtkColor4<double> *op = static_cast<vtkColor4<double> *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    op->SetAlpha(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkColor4_IdE_GetAlpha(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "GetAlpha");
  void *vp = ap.GetSelfPointer(self);
  vtkColor4<double> *op = static_cast<vtkColor4<double> *>(vp);

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    const double *tempr = &op->GetAlpha();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(*tempr);
      }
    }

  return result;
}


#if !defined(VTK_LEGACY_REMOVE)
static PyObject *
PyvtkColor4_IdE_Red(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "Red");
  void *vp = ap.GetSelfPointer(self);
  vtkColor4<double> *op = static_cast<vtkColor4<double> *>(vp);

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    const double *tempr = &op->Red();

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
PyvtkColor4_IdE_Green(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "Green");
  void *vp = ap.GetSelfPointer(self);
  vtkColor4<double> *op = static_cast<vtkColor4<double> *>(vp);

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    const double *tempr = &op->Green();

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
PyvtkColor4_IdE_Blue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "Blue");
  void *vp = ap.GetSelfPointer(self);
  vtkColor4<double> *op = static_cast<vtkColor4<double> *>(vp);

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    const double *tempr = &op->Blue();

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
PyvtkColor4_IdE_Alpha(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "Alpha");
  void *vp = ap.GetSelfPointer(self);
  vtkColor4<double> *op = static_cast<vtkColor4<double> *>(vp);

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    const double *tempr = &op->Alpha();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(*tempr);
      }
    }

  return result;
}
#endif

static PyMethodDef PyvtkColor4_IdE_Methods[] = {
  {(char*)"Set", PyvtkColor4_IdE_Set, METH_VARARGS,
   (char*)"V.Set(float, float, float)\nC++: void Set(const double &red, const double &green,\n    const double &blue)\nV.Set(float, float, float, float)\nC++: void Set(const double &red, const double &green,\n    const double &blue, const double &alpha)\n\nSet the red, green and blue components of the color.\n"},
  {(char*)"SetRed", PyvtkColor4_IdE_SetRed, METH_VARARGS,
   (char*)"V.SetRed(float)\nC++: void SetRed(const double &red)\n\nSet the red component of the color, i.e. element 0.\n"},
  {(char*)"GetRed", PyvtkColor4_IdE_GetRed, METH_VARARGS,
   (char*)"V.GetRed() -> float\nC++: const double &GetRed()\n\nGet the red component of the color, i.e. element 0.\n"},
  {(char*)"SetGreen", PyvtkColor4_IdE_SetGreen, METH_VARARGS,
   (char*)"V.SetGreen(float)\nC++: void SetGreen(const double &green)\n\nSet the green component of the color, i.e. element 1.\n"},
  {(char*)"GetGreen", PyvtkColor4_IdE_GetGreen, METH_VARARGS,
   (char*)"V.GetGreen() -> float\nC++: const double &GetGreen()\n\nGet the green component of the color, i.e. element 1.\n"},
  {(char*)"SetBlue", PyvtkColor4_IdE_SetBlue, METH_VARARGS,
   (char*)"V.SetBlue(float)\nC++: void SetBlue(const double &blue)\n\nSet the blue component of the color, i.e. element 2.\n"},
  {(char*)"GetBlue", PyvtkColor4_IdE_GetBlue, METH_VARARGS,
   (char*)"V.GetBlue() -> float\nC++: const double &GetBlue()\n\nGet the blue component of the color, i.e. element 2.\n"},
  {(char*)"SetAlpha", PyvtkColor4_IdE_SetAlpha, METH_VARARGS,
   (char*)"V.SetAlpha(float)\nC++: void SetAlpha(const double &alpha)\n\nSet the alpha component of the color, i.e. element 3.\n"},
  {(char*)"GetAlpha", PyvtkColor4_IdE_GetAlpha, METH_VARARGS,
   (char*)"V.GetAlpha() -> float\nC++: const double &GetAlpha()\n\nGet the alpha component of the color, i.e. element 3.\n"},
#if !defined(VTK_LEGACY_REMOVE)
  {(char*)"Red", PyvtkColor4_IdE_Red, METH_VARARGS,
   (char*)"V.Red() -> float\nC++: const double &Red()\n\nLegacy method for getting the red component.\n"},
#endif
#if !defined(VTK_LEGACY_REMOVE)
  {(char*)"Green", PyvtkColor4_IdE_Green, METH_VARARGS,
   (char*)"V.Green() -> float\nC++: const double &Green()\n\nLegacy method for getting the green component.\n"},
#endif
#if !defined(VTK_LEGACY_REMOVE)
  {(char*)"Blue", PyvtkColor4_IdE_Blue, METH_VARARGS,
   (char*)"V.Blue() -> float\nC++: const double &Blue()\n\nLegacy method for getting the blue component.\n"},
#endif
#if !defined(VTK_LEGACY_REMOVE)
  {(char*)"Alpha", PyvtkColor4_IdE_Alpha, METH_VARARGS,
   (char*)"V.Alpha() -> float\nC++: const double &Alpha()\n\nLegacy method for getting the alpha component.\n"},
#endif
  {NULL, NULL, 0, NULL}
};

#ifndef DECLARED_PyvtkColor4_IdE_Type
extern VTK_PYTHON_EXPORT PyTypeObject PyvtkColor4_IdE_Type;
#define DECLARED_PyvtkColor4_IdE_Type
#endif

#ifndef DECLARED_PyvtkTuple_IdLi4EE_Type
extern VTK_PYTHON_IMPORT PyTypeObject PyvtkTuple_IdLi4EE_Type;
#define DECLARED_PyvtkTuple_IdLi4EE_Type
#endif


static PyObject *
PyvtkColor4_IdE_vtkColor4_s1(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkColor4");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkColor4<double> *op = new vtkColor4<double>();
    (*op)[0] = 0;
    (*op)[1] = 0;
    (*op)[2] = 0;
    (*op)[3] = 0;

    result = PyVTKSpecialObject_New("vtkColor4_IdE", op);
    }

  return result;
}

static PyObject *
PyvtkColor4_IdE_vtkColor4_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkColor4");

  double temp0;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkColor4<double> *op = new vtkColor4<double>(temp0);

    result = PyVTKSpecialObject_New("vtkColor4_IdE", op);
    }

  return result;
}

static PyObject *
PyvtkColor4_IdE_vtkColor4_s3(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkColor4");

  double temp0[4];
  const int size0 = 4;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    vtkColor4<double> *op = new vtkColor4<double>(temp0);

    result = PyVTKSpecialObject_New("vtkColor4_IdE", op);
    }

  return result;
}

static PyObject *
PyvtkColor4_IdE_vtkColor4_s4(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkColor4");

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
    vtkColor4<double> *op = new vtkColor4<double>(temp0, temp1, temp2, temp3);

    result = PyVTKSpecialObject_New("vtkColor4_IdE", op);
    }

  return result;
}

static PyObject *
PyvtkColor4_IdE_vtkColor4_s5(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkColor4");

  vtkColor4<double> *temp0 = NULL;
  PyObject *pobj0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkColor4_IdE"))
    {
    vtkColor4<double> *op = new vtkColor4<double>(*temp0);

    result = PyVTKSpecialObject_New("vtkColor4_IdE", op);
    }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkColor4_IdE_vtkColor4_Methods[] = {
  {NULL, PyvtkColor4_IdE_vtkColor4_s2, METH_VARARGS,
   (char*)"-d"},
  {NULL, PyvtkColor4_IdE_vtkColor4_s3, METH_VARARGS,
   (char*)"-O *d"},
  {NULL, PyvtkColor4_IdE_vtkColor4_s5, METH_VARARGS,
   (char*)"O &vtkColor4_IdE"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkColor4_IdE_vtkColor4(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkColor4_IdE_vtkColor4_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
    {
    case 0:
      return PyvtkColor4_IdE_vtkColor4_s1(self, args);
    case 4:
      return PyvtkColor4_IdE_vtkColor4_s4(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "vtkColor4");
  return NULL;
}


static PyMethodDef PyvtkColor4_IdE_NewMethod = \
{ (char*)"vtkColor4_IdE", PyvtkColor4_IdE_vtkColor4, 1,
  (char*)"" };

#if PY_VERSION_HEX >= 0x02020000
static PyObject *
PyvtkColor4_IdE_New(PyTypeObject *, PyObject *args, PyObject *kwds)
{
  if (kwds && PyDict_Size(kwds))
    {
    PyErr_SetString(PyExc_TypeError,
                    "this function takes no keyword arguments");
    return NULL;
    }

  return PyvtkColor4_IdE_vtkColor4(NULL, args);
}
#endif

static void PyvtkColor4_IdE_Delete(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  if (obj->vtk_ptr)
    {
    delete static_cast<vtkColor4<double> *>(obj->vtk_ptr);
    }
#if PY_MAJOR_VERSION >= 2
  PyObject_Del(self);
#else
  PyMem_DEL(self);
#endif
}

static long PyvtkColor4_IdE_Hash(PyObject *self)
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

PyTypeObject PyvtkColor4_IdE_Type = {
  PyObject_HEAD_INIT(&PyType_Type)
  0,
  (char*)"vtkColor4_IdE", // tp_name
  sizeof(PyVTKSpecialObject), // tp_basicsize
  0, // tp_itemsize
  PyvtkColor4_IdE_Delete, // tp_dealloc
  0, // tp_print
  0, // tp_getattr
  0, // tp_setattr
  0, // tp_compare
  PyVTKSpecialObject_Repr, // tp_repr
  0, // tp_as_number
  0, // tp_as_sequence
  0, // tp_as_mapping
  PyvtkColor4_IdE_Hash, // tp_hash
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
  PyvtkColor4_IdE_Methods, // tp_methods
  0, // tp_members
  0, // tp_getset
  &PyvtkTuple_IdLi4EE_Type, // tp_base
  0, // tp_dict
  0, // tp_descr_get
  0, // tp_descr_set
  0, // tp_dictoffset
  0, // tp_init
  0, // tp_alloc
  PyvtkColor4_IdE_New, // tp_new
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

static void *PyvtkColor4_IdE_CCopy(const void *obj)
{
  if (obj)
    {
    return new vtkColor4<double>(*static_cast<const vtkColor4<double>*>(obj));
    }
  return 0;
}

static PyObject *PyvtkColor4_IdE_TypeNew(const char *)
{
  PyObject *cls = PyVTKSpecialType_New(
    &PyvtkColor4_IdE_Type,
    PyvtkColor4_IdE_Methods,
    PyvtkColor4_IdE_vtkColor4_Methods,
    &PyvtkColor4_IdE_NewMethod,
    PyvtkColor4_IdE_Doc(), &PyvtkColor4_IdE_CCopy);

  return cls;
}

const char **PyvtkColor4_IdE_Doc()
{
  static const char *docstring[] = {
    "vtkColor4 - templated base type for storage of 4 component colors.\n\n",
    "Superclass: vtkTuple[float64,4]\n\n",
    "This class is a templated data type for storing and manipulating\nfixed size colors. It derives from the vtkVector templated data\nstructure.\n\n",
    "V.vtkColor4()\nC++: vtkColor4()\nV.vtkColor4(float)\nC++: explicit vtkColor4(const double &scalar)\nV.vtkColor4((float, float, float, float))\nC++: explicit vtkColor4(const double *init)\nV.vtkColor4(float, float, float, float)\nC++: vtkColor4(const double &red, const double &green,\n    const double &blue, const double &alpha)\nV.vtkColor4(vtkColor4<double>)\nC++: vtkColor4(const &vtkColor4<double>)\n",
    NULL
  };

  return docstring;
}


static const char **PyvtkColor4_IfE_Doc();


static PyObject *
PyvtkColor4_IfE_Set_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "Set");
  void *vp = ap.GetSelfPointer(self);
  vtkColor4<float> *op = static_cast<vtkColor4<float> *>(vp);

  float temp0;
  float temp1;
  float temp2;
  PyObject *result = NULL;

  if (ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    op->Set(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkColor4_IfE_Set_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "Set");
  void *vp = ap.GetSelfPointer(self);
  vtkColor4<float> *op = static_cast<vtkColor4<float> *>(vp);

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
PyvtkColor4_IfE_Set(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
    {
    case 3:
      return PyvtkColor4_IfE_Set_s1(self, args);
    case 4:
      return PyvtkColor4_IfE_Set_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "Set");
  return NULL;
}



static PyObject *
PyvtkColor4_IfE_SetRed(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "SetRed");
  void *vp = ap.GetSelfPointer(self);
  vtkColor4<float> *op = static_cast<vtkColor4<float> *>(vp);

  float temp0;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    op->SetRed(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkColor4_IfE_GetRed(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "GetRed");
  void *vp = ap.GetSelfPointer(self);
  vtkColor4<float> *op = static_cast<vtkColor4<float> *>(vp);

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    const float *tempr = &op->GetRed();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(*tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkColor4_IfE_SetGreen(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "SetGreen");
  void *vp = ap.GetSelfPointer(self);
  vtkColor4<float> *op = static_cast<vtkColor4<float> *>(vp);

  float temp0;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    op->SetGreen(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkColor4_IfE_GetGreen(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "GetGreen");
  void *vp = ap.GetSelfPointer(self);
  vtkColor4<float> *op = static_cast<vtkColor4<float> *>(vp);

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    const float *tempr = &op->GetGreen();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(*tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkColor4_IfE_SetBlue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "SetBlue");
  void *vp = ap.GetSelfPointer(self);
  vtkColor4<float> *op = static_cast<vtkColor4<float> *>(vp);

  float temp0;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    op->SetBlue(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkColor4_IfE_GetBlue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "GetBlue");
  void *vp = ap.GetSelfPointer(self);
  vtkColor4<float> *op = static_cast<vtkColor4<float> *>(vp);

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    const float *tempr = &op->GetBlue();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(*tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkColor4_IfE_SetAlpha(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "SetAlpha");
  void *vp = ap.GetSelfPointer(self);
  vtkColor4<float> *op = static_cast<vtkColor4<float> *>(vp);

  float temp0;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    op->SetAlpha(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkColor4_IfE_GetAlpha(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "GetAlpha");
  void *vp = ap.GetSelfPointer(self);
  vtkColor4<float> *op = static_cast<vtkColor4<float> *>(vp);

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    const float *tempr = &op->GetAlpha();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(*tempr);
      }
    }

  return result;
}


#if !defined(VTK_LEGACY_REMOVE)
static PyObject *
PyvtkColor4_IfE_Red(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "Red");
  void *vp = ap.GetSelfPointer(self);
  vtkColor4<float> *op = static_cast<vtkColor4<float> *>(vp);

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    const float *tempr = &op->Red();

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
PyvtkColor4_IfE_Green(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "Green");
  void *vp = ap.GetSelfPointer(self);
  vtkColor4<float> *op = static_cast<vtkColor4<float> *>(vp);

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    const float *tempr = &op->Green();

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
PyvtkColor4_IfE_Blue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "Blue");
  void *vp = ap.GetSelfPointer(self);
  vtkColor4<float> *op = static_cast<vtkColor4<float> *>(vp);

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    const float *tempr = &op->Blue();

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
PyvtkColor4_IfE_Alpha(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "Alpha");
  void *vp = ap.GetSelfPointer(self);
  vtkColor4<float> *op = static_cast<vtkColor4<float> *>(vp);

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    const float *tempr = &op->Alpha();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(*tempr);
      }
    }

  return result;
}
#endif

static PyMethodDef PyvtkColor4_IfE_Methods[] = {
  {(char*)"Set", PyvtkColor4_IfE_Set, METH_VARARGS,
   (char*)"V.Set(float, float, float)\nC++: void Set(const float &red, const float &green,\n    const float &blue)\nV.Set(float, float, float, float)\nC++: void Set(const float &red, const float &green,\n    const float &blue, const float &alpha)\n\nSet the red, green and blue components of the color.\n"},
  {(char*)"SetRed", PyvtkColor4_IfE_SetRed, METH_VARARGS,
   (char*)"V.SetRed(float)\nC++: void SetRed(const float &red)\n\nSet the red component of the color, i.e. element 0.\n"},
  {(char*)"GetRed", PyvtkColor4_IfE_GetRed, METH_VARARGS,
   (char*)"V.GetRed() -> float\nC++: const float &GetRed()\n\nGet the red component of the color, i.e. element 0.\n"},
  {(char*)"SetGreen", PyvtkColor4_IfE_SetGreen, METH_VARARGS,
   (char*)"V.SetGreen(float)\nC++: void SetGreen(const float &green)\n\nSet the green component of the color, i.e. element 1.\n"},
  {(char*)"GetGreen", PyvtkColor4_IfE_GetGreen, METH_VARARGS,
   (char*)"V.GetGreen() -> float\nC++: const float &GetGreen()\n\nGet the green component of the color, i.e. element 1.\n"},
  {(char*)"SetBlue", PyvtkColor4_IfE_SetBlue, METH_VARARGS,
   (char*)"V.SetBlue(float)\nC++: void SetBlue(const float &blue)\n\nSet the blue component of the color, i.e. element 2.\n"},
  {(char*)"GetBlue", PyvtkColor4_IfE_GetBlue, METH_VARARGS,
   (char*)"V.GetBlue() -> float\nC++: const float &GetBlue()\n\nGet the blue component of the color, i.e. element 2.\n"},
  {(char*)"SetAlpha", PyvtkColor4_IfE_SetAlpha, METH_VARARGS,
   (char*)"V.SetAlpha(float)\nC++: void SetAlpha(const float &alpha)\n\nSet the alpha component of the color, i.e. element 3.\n"},
  {(char*)"GetAlpha", PyvtkColor4_IfE_GetAlpha, METH_VARARGS,
   (char*)"V.GetAlpha() -> float\nC++: const float &GetAlpha()\n\nGet the alpha component of the color, i.e. element 3.\n"},
#if !defined(VTK_LEGACY_REMOVE)
  {(char*)"Red", PyvtkColor4_IfE_Red, METH_VARARGS,
   (char*)"V.Red() -> float\nC++: const float &Red()\n\nLegacy method for getting the red component.\n"},
#endif
#if !defined(VTK_LEGACY_REMOVE)
  {(char*)"Green", PyvtkColor4_IfE_Green, METH_VARARGS,
   (char*)"V.Green() -> float\nC++: const float &Green()\n\nLegacy method for getting the green component.\n"},
#endif
#if !defined(VTK_LEGACY_REMOVE)
  {(char*)"Blue", PyvtkColor4_IfE_Blue, METH_VARARGS,
   (char*)"V.Blue() -> float\nC++: const float &Blue()\n\nLegacy method for getting the blue component.\n"},
#endif
#if !defined(VTK_LEGACY_REMOVE)
  {(char*)"Alpha", PyvtkColor4_IfE_Alpha, METH_VARARGS,
   (char*)"V.Alpha() -> float\nC++: const float &Alpha()\n\nLegacy method for getting the alpha component.\n"},
#endif
  {NULL, NULL, 0, NULL}
};

#ifndef DECLARED_PyvtkColor4_IfE_Type
extern VTK_PYTHON_EXPORT PyTypeObject PyvtkColor4_IfE_Type;
#define DECLARED_PyvtkColor4_IfE_Type
#endif

#ifndef DECLARED_PyvtkTuple_IfLi4EE_Type
extern VTK_PYTHON_IMPORT PyTypeObject PyvtkTuple_IfLi4EE_Type;
#define DECLARED_PyvtkTuple_IfLi4EE_Type
#endif


static PyObject *
PyvtkColor4_IfE_vtkColor4_s1(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkColor4");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkColor4<float> *op = new vtkColor4<float>();
    (*op)[0] = 0;
    (*op)[1] = 0;
    (*op)[2] = 0;
    (*op)[3] = 0;

    result = PyVTKSpecialObject_New("vtkColor4_IfE", op);
    }

  return result;
}

static PyObject *
PyvtkColor4_IfE_vtkColor4_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkColor4");

  float temp0;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkColor4<float> *op = new vtkColor4<float>(temp0);

    result = PyVTKSpecialObject_New("vtkColor4_IfE", op);
    }

  return result;
}

static PyObject *
PyvtkColor4_IfE_vtkColor4_s3(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkColor4");

  float temp0[4];
  const int size0 = 4;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    vtkColor4<float> *op = new vtkColor4<float>(temp0);

    result = PyVTKSpecialObject_New("vtkColor4_IfE", op);
    }

  return result;
}

static PyObject *
PyvtkColor4_IfE_vtkColor4_s4(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkColor4");

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
    vtkColor4<float> *op = new vtkColor4<float>(temp0, temp1, temp2, temp3);

    result = PyVTKSpecialObject_New("vtkColor4_IfE", op);
    }

  return result;
}

static PyObject *
PyvtkColor4_IfE_vtkColor4_s5(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkColor4");

  vtkColor4<float> *temp0 = NULL;
  PyObject *pobj0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkColor4_IfE"))
    {
    vtkColor4<float> *op = new vtkColor4<float>(*temp0);

    result = PyVTKSpecialObject_New("vtkColor4_IfE", op);
    }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkColor4_IfE_vtkColor4_Methods[] = {
  {NULL, PyvtkColor4_IfE_vtkColor4_s2, METH_VARARGS,
   (char*)"-f"},
  {NULL, PyvtkColor4_IfE_vtkColor4_s3, METH_VARARGS,
   (char*)"-O *f"},
  {NULL, PyvtkColor4_IfE_vtkColor4_s5, METH_VARARGS,
   (char*)"O &vtkColor4_IfE"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkColor4_IfE_vtkColor4(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkColor4_IfE_vtkColor4_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
    {
    case 0:
      return PyvtkColor4_IfE_vtkColor4_s1(self, args);
    case 4:
      return PyvtkColor4_IfE_vtkColor4_s4(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "vtkColor4");
  return NULL;
}


static PyMethodDef PyvtkColor4_IfE_NewMethod = \
{ (char*)"vtkColor4_IfE", PyvtkColor4_IfE_vtkColor4, 1,
  (char*)"" };

#if PY_VERSION_HEX >= 0x02020000
static PyObject *
PyvtkColor4_IfE_New(PyTypeObject *, PyObject *args, PyObject *kwds)
{
  if (kwds && PyDict_Size(kwds))
    {
    PyErr_SetString(PyExc_TypeError,
                    "this function takes no keyword arguments");
    return NULL;
    }

  return PyvtkColor4_IfE_vtkColor4(NULL, args);
}
#endif

static void PyvtkColor4_IfE_Delete(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  if (obj->vtk_ptr)
    {
    delete static_cast<vtkColor4<float> *>(obj->vtk_ptr);
    }
#if PY_MAJOR_VERSION >= 2
  PyObject_Del(self);
#else
  PyMem_DEL(self);
#endif
}

static long PyvtkColor4_IfE_Hash(PyObject *self)
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

PyTypeObject PyvtkColor4_IfE_Type = {
  PyObject_HEAD_INIT(&PyType_Type)
  0,
  (char*)"vtkColor4_IfE", // tp_name
  sizeof(PyVTKSpecialObject), // tp_basicsize
  0, // tp_itemsize
  PyvtkColor4_IfE_Delete, // tp_dealloc
  0, // tp_print
  0, // tp_getattr
  0, // tp_setattr
  0, // tp_compare
  PyVTKSpecialObject_Repr, // tp_repr
  0, // tp_as_number
  0, // tp_as_sequence
  0, // tp_as_mapping
  PyvtkColor4_IfE_Hash, // tp_hash
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
  PyvtkColor4_IfE_Methods, // tp_methods
  0, // tp_members
  0, // tp_getset
  &PyvtkTuple_IfLi4EE_Type, // tp_base
  0, // tp_dict
  0, // tp_descr_get
  0, // tp_descr_set
  0, // tp_dictoffset
  0, // tp_init
  0, // tp_alloc
  PyvtkColor4_IfE_New, // tp_new
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

static void *PyvtkColor4_IfE_CCopy(const void *obj)
{
  if (obj)
    {
    return new vtkColor4<float>(*static_cast<const vtkColor4<float>*>(obj));
    }
  return 0;
}

static PyObject *PyvtkColor4_IfE_TypeNew(const char *)
{
  PyObject *cls = PyVTKSpecialType_New(
    &PyvtkColor4_IfE_Type,
    PyvtkColor4_IfE_Methods,
    PyvtkColor4_IfE_vtkColor4_Methods,
    &PyvtkColor4_IfE_NewMethod,
    PyvtkColor4_IfE_Doc(), &PyvtkColor4_IfE_CCopy);

  return cls;
}

const char **PyvtkColor4_IfE_Doc()
{
  static const char *docstring[] = {
    "vtkColor4 - templated base type for storage of 4 component colors.\n\n",
    "Superclass: vtkTuple[float32,4]\n\n",
    "This class is a templated data type for storing and manipulating\nfixed size colors. It derives from the vtkVector templated data\nstructure.\n\n",
    "V.vtkColor4()\nC++: vtkColor4()\nV.vtkColor4(float)\nC++: explicit vtkColor4(const float &scalar)\nV.vtkColor4((float, float, float, float))\nC++: explicit vtkColor4(const float *init)\nV.vtkColor4(float, float, float, float)\nC++: vtkColor4(const float &red, const float &green,\n    const float &blue, const float &alpha)\nV.vtkColor4(vtkColor4<float>)\nC++: vtkColor4(const &vtkColor4<float>)\n",
    NULL
  };

  return docstring;
}


static const char **PyvtkColor4_IhE_Doc();


static PyObject *
PyvtkColor4_IhE_Set_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "Set");
  void *vp = ap.GetSelfPointer(self);
  vtkColor4<unsigned char> *op = static_cast<vtkColor4<unsigned char> *>(vp);

  unsigned char temp0;
  unsigned char temp1;
  unsigned char temp2;
  PyObject *result = NULL;

  if (ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    op->Set(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkColor4_IhE_Set_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "Set");
  void *vp = ap.GetSelfPointer(self);
  vtkColor4<unsigned char> *op = static_cast<vtkColor4<unsigned char> *>(vp);

  unsigned char temp0;
  unsigned char temp1;
  unsigned char temp2;
  unsigned char temp3;
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
PyvtkColor4_IhE_Set(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
    {
    case 3:
      return PyvtkColor4_IhE_Set_s1(self, args);
    case 4:
      return PyvtkColor4_IhE_Set_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "Set");
  return NULL;
}



static PyObject *
PyvtkColor4_IhE_SetRed(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "SetRed");
  void *vp = ap.GetSelfPointer(self);
  vtkColor4<unsigned char> *op = static_cast<vtkColor4<unsigned char> *>(vp);

  unsigned char temp0;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    op->SetRed(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkColor4_IhE_GetRed(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "GetRed");
  void *vp = ap.GetSelfPointer(self);
  vtkColor4<unsigned char> *op = static_cast<vtkColor4<unsigned char> *>(vp);

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    const unsigned char *tempr = &op->GetRed();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(*tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkColor4_IhE_SetGreen(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "SetGreen");
  void *vp = ap.GetSelfPointer(self);
  vtkColor4<unsigned char> *op = static_cast<vtkColor4<unsigned char> *>(vp);

  unsigned char temp0;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    op->SetGreen(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkColor4_IhE_GetGreen(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "GetGreen");
  void *vp = ap.GetSelfPointer(self);
  vtkColor4<unsigned char> *op = static_cast<vtkColor4<unsigned char> *>(vp);

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    const unsigned char *tempr = &op->GetGreen();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(*tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkColor4_IhE_SetBlue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "SetBlue");
  void *vp = ap.GetSelfPointer(self);
  vtkColor4<unsigned char> *op = static_cast<vtkColor4<unsigned char> *>(vp);

  unsigned char temp0;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    op->SetBlue(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkColor4_IhE_GetBlue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "GetBlue");
  void *vp = ap.GetSelfPointer(self);
  vtkColor4<unsigned char> *op = static_cast<vtkColor4<unsigned char> *>(vp);

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    const unsigned char *tempr = &op->GetBlue();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(*tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkColor4_IhE_SetAlpha(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "SetAlpha");
  void *vp = ap.GetSelfPointer(self);
  vtkColor4<unsigned char> *op = static_cast<vtkColor4<unsigned char> *>(vp);

  unsigned char temp0;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    op->SetAlpha(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkColor4_IhE_GetAlpha(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "GetAlpha");
  void *vp = ap.GetSelfPointer(self);
  vtkColor4<unsigned char> *op = static_cast<vtkColor4<unsigned char> *>(vp);

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    const unsigned char *tempr = &op->GetAlpha();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(*tempr);
      }
    }

  return result;
}


#if !defined(VTK_LEGACY_REMOVE)
static PyObject *
PyvtkColor4_IhE_Red(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "Red");
  void *vp = ap.GetSelfPointer(self);
  vtkColor4<unsigned char> *op = static_cast<vtkColor4<unsigned char> *>(vp);

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    const unsigned char *tempr = &op->Red();

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
PyvtkColor4_IhE_Green(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "Green");
  void *vp = ap.GetSelfPointer(self);
  vtkColor4<unsigned char> *op = static_cast<vtkColor4<unsigned char> *>(vp);

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    const unsigned char *tempr = &op->Green();

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
PyvtkColor4_IhE_Blue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "Blue");
  void *vp = ap.GetSelfPointer(self);
  vtkColor4<unsigned char> *op = static_cast<vtkColor4<unsigned char> *>(vp);

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    const unsigned char *tempr = &op->Blue();

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
PyvtkColor4_IhE_Alpha(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "Alpha");
  void *vp = ap.GetSelfPointer(self);
  vtkColor4<unsigned char> *op = static_cast<vtkColor4<unsigned char> *>(vp);

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    const unsigned char *tempr = &op->Alpha();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(*tempr);
      }
    }

  return result;
}
#endif

static PyMethodDef PyvtkColor4_IhE_Methods[] = {
  {(char*)"Set", PyvtkColor4_IhE_Set, METH_VARARGS,
   (char*)"V.Set(int, int, int)\nC++: void Set(const unsigned char &red,\n    const unsigned char &green, const unsigned char &blue)\nV.Set(int, int, int, int)\nC++: void Set(const unsigned char &red,\n    const unsigned char &green, const unsigned char &blue,\n    const unsigned char &alpha)\n\nSet the red, green and blue components of the color.\n"},
  {(char*)"SetRed", PyvtkColor4_IhE_SetRed, METH_VARARGS,
   (char*)"V.SetRed(int)\nC++: void SetRed(const unsigned char &red)\n\nSet the red component of the color, i.e. element 0.\n"},
  {(char*)"GetRed", PyvtkColor4_IhE_GetRed, METH_VARARGS,
   (char*)"V.GetRed() -> int\nC++: const unsigned char &GetRed()\n\nGet the red component of the color, i.e. element 0.\n"},
  {(char*)"SetGreen", PyvtkColor4_IhE_SetGreen, METH_VARARGS,
   (char*)"V.SetGreen(int)\nC++: void SetGreen(const unsigned char &green)\n\nSet the green component of the color, i.e. element 1.\n"},
  {(char*)"GetGreen", PyvtkColor4_IhE_GetGreen, METH_VARARGS,
   (char*)"V.GetGreen() -> int\nC++: const unsigned char &GetGreen()\n\nGet the green component of the color, i.e. element 1.\n"},
  {(char*)"SetBlue", PyvtkColor4_IhE_SetBlue, METH_VARARGS,
   (char*)"V.SetBlue(int)\nC++: void SetBlue(const unsigned char &blue)\n\nSet the blue component of the color, i.e. element 2.\n"},
  {(char*)"GetBlue", PyvtkColor4_IhE_GetBlue, METH_VARARGS,
   (char*)"V.GetBlue() -> int\nC++: const unsigned char &GetBlue()\n\nGet the blue component of the color, i.e. element 2.\n"},
  {(char*)"SetAlpha", PyvtkColor4_IhE_SetAlpha, METH_VARARGS,
   (char*)"V.SetAlpha(int)\nC++: void SetAlpha(const unsigned char &alpha)\n\nSet the alpha component of the color, i.e. element 3.\n"},
  {(char*)"GetAlpha", PyvtkColor4_IhE_GetAlpha, METH_VARARGS,
   (char*)"V.GetAlpha() -> int\nC++: const unsigned char &GetAlpha()\n\nGet the alpha component of the color, i.e. element 3.\n"},
#if !defined(VTK_LEGACY_REMOVE)
  {(char*)"Red", PyvtkColor4_IhE_Red, METH_VARARGS,
   (char*)"V.Red() -> int\nC++: const unsigned char &Red()\n\nLegacy method for getting the red component.\n"},
#endif
#if !defined(VTK_LEGACY_REMOVE)
  {(char*)"Green", PyvtkColor4_IhE_Green, METH_VARARGS,
   (char*)"V.Green() -> int\nC++: const unsigned char &Green()\n\nLegacy method for getting the green component.\n"},
#endif
#if !defined(VTK_LEGACY_REMOVE)
  {(char*)"Blue", PyvtkColor4_IhE_Blue, METH_VARARGS,
   (char*)"V.Blue() -> int\nC++: const unsigned char &Blue()\n\nLegacy method for getting the blue component.\n"},
#endif
#if !defined(VTK_LEGACY_REMOVE)
  {(char*)"Alpha", PyvtkColor4_IhE_Alpha, METH_VARARGS,
   (char*)"V.Alpha() -> int\nC++: const unsigned char &Alpha()\n\nLegacy method for getting the alpha component.\n"},
#endif
  {NULL, NULL, 0, NULL}
};

#ifndef DECLARED_PyvtkColor4_IhE_Type
extern VTK_PYTHON_EXPORT PyTypeObject PyvtkColor4_IhE_Type;
#define DECLARED_PyvtkColor4_IhE_Type
#endif

#ifndef DECLARED_PyvtkTuple_IhLi4EE_Type
extern VTK_PYTHON_IMPORT PyTypeObject PyvtkTuple_IhLi4EE_Type;
#define DECLARED_PyvtkTuple_IhLi4EE_Type
#endif


static PyObject *
PyvtkColor4_IhE_vtkColor4_s1(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkColor4");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkColor4<unsigned char> *op = new vtkColor4<unsigned char>();
    (*op)[0] = 0;
    (*op)[1] = 0;
    (*op)[2] = 0;
    (*op)[3] = 0;

    result = PyVTKSpecialObject_New("vtkColor4_IhE", op);
    }

  return result;
}

static PyObject *
PyvtkColor4_IhE_vtkColor4_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkColor4");

  unsigned char temp0;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkColor4<unsigned char> *op = new vtkColor4<unsigned char>(temp0);

    result = PyVTKSpecialObject_New("vtkColor4_IhE", op);
    }

  return result;
}

static PyObject *
PyvtkColor4_IhE_vtkColor4_s3(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkColor4");

  unsigned char temp0[4];
  const int size0 = 4;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    vtkColor4<unsigned char> *op = new vtkColor4<unsigned char>(temp0);

    result = PyVTKSpecialObject_New("vtkColor4_IhE", op);
    }

  return result;
}

static PyObject *
PyvtkColor4_IhE_vtkColor4_s4(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkColor4");

  unsigned char temp0;
  unsigned char temp1;
  unsigned char temp2;
  unsigned char temp3;
  PyObject *result = NULL;

  if (ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
    {
    vtkColor4<unsigned char> *op = new vtkColor4<unsigned char>(temp0, temp1, temp2, temp3);

    result = PyVTKSpecialObject_New("vtkColor4_IhE", op);
    }

  return result;
}

static PyObject *
PyvtkColor4_IhE_vtkColor4_s5(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkColor4");

  vtkColor4<unsigned char> *temp0 = NULL;
  PyObject *pobj0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkColor4_IhE"))
    {
    vtkColor4<unsigned char> *op = new vtkColor4<unsigned char>(*temp0);

    result = PyVTKSpecialObject_New("vtkColor4_IhE", op);
    }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkColor4_IhE_vtkColor4_Methods[] = {
  {NULL, PyvtkColor4_IhE_vtkColor4_s2, METH_VARARGS,
   (char*)"-b"},
  {NULL, PyvtkColor4_IhE_vtkColor4_s3, METH_VARARGS,
   (char*)"-O *b"},
  {NULL, PyvtkColor4_IhE_vtkColor4_s5, METH_VARARGS,
   (char*)"O &vtkColor4_IhE"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkColor4_IhE_vtkColor4(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkColor4_IhE_vtkColor4_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
    {
    case 0:
      return PyvtkColor4_IhE_vtkColor4_s1(self, args);
    case 4:
      return PyvtkColor4_IhE_vtkColor4_s4(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "vtkColor4");
  return NULL;
}


static PyMethodDef PyvtkColor4_IhE_NewMethod = \
{ (char*)"vtkColor4_IhE", PyvtkColor4_IhE_vtkColor4, 1,
  (char*)"" };

#if PY_VERSION_HEX >= 0x02020000
static PyObject *
PyvtkColor4_IhE_New(PyTypeObject *, PyObject *args, PyObject *kwds)
{
  if (kwds && PyDict_Size(kwds))
    {
    PyErr_SetString(PyExc_TypeError,
                    "this function takes no keyword arguments");
    return NULL;
    }

  return PyvtkColor4_IhE_vtkColor4(NULL, args);
}
#endif

static void PyvtkColor4_IhE_Delete(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  if (obj->vtk_ptr)
    {
    delete static_cast<vtkColor4<unsigned char> *>(obj->vtk_ptr);
    }
#if PY_MAJOR_VERSION >= 2
  PyObject_Del(self);
#else
  PyMem_DEL(self);
#endif
}

static long PyvtkColor4_IhE_Hash(PyObject *self)
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

PyTypeObject PyvtkColor4_IhE_Type = {
  PyObject_HEAD_INIT(&PyType_Type)
  0,
  (char*)"vtkColor4_IhE", // tp_name
  sizeof(PyVTKSpecialObject), // tp_basicsize
  0, // tp_itemsize
  PyvtkColor4_IhE_Delete, // tp_dealloc
  0, // tp_print
  0, // tp_getattr
  0, // tp_setattr
  0, // tp_compare
  PyVTKSpecialObject_Repr, // tp_repr
  0, // tp_as_number
  0, // tp_as_sequence
  0, // tp_as_mapping
  PyvtkColor4_IhE_Hash, // tp_hash
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
  PyvtkColor4_IhE_Methods, // tp_methods
  0, // tp_members
  0, // tp_getset
  &PyvtkTuple_IhLi4EE_Type, // tp_base
  0, // tp_dict
  0, // tp_descr_get
  0, // tp_descr_set
  0, // tp_dictoffset
  0, // tp_init
  0, // tp_alloc
  PyvtkColor4_IhE_New, // tp_new
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

static void *PyvtkColor4_IhE_CCopy(const void *obj)
{
  if (obj)
    {
    return new vtkColor4<unsigned char>(*static_cast<const vtkColor4<unsigned char>*>(obj));
    }
  return 0;
}

static PyObject *PyvtkColor4_IhE_TypeNew(const char *)
{
  PyObject *cls = PyVTKSpecialType_New(
    &PyvtkColor4_IhE_Type,
    PyvtkColor4_IhE_Methods,
    PyvtkColor4_IhE_vtkColor4_Methods,
    &PyvtkColor4_IhE_NewMethod,
    PyvtkColor4_IhE_Doc(), &PyvtkColor4_IhE_CCopy);

  return cls;
}

const char **PyvtkColor4_IhE_Doc()
{
  static const char *docstring[] = {
    "vtkColor4 - templated base type for storage of 4 component colors.\n\n",
    "Superclass: vtkTuple[uint8,4]\n\n",
    "This class is a templated data type for storing and manipulating\nfixed size colors. It derives from the vtkVector templated data\nstructure.\n\n",
    "V.vtkColor4()\nC++: vtkColor4()\nV.vtkColor4(int)\nC++: explicit vtkColor4(const unsigned char &scalar)\nV.vtkColor4((int, int, int, int))\nC++: explicit vtkColor4(const unsigned char *init)\nV.vtkColor4(int, int, int, int)\nC++: vtkColor4(const unsigned char &red, const unsigned char &green,\n    const unsigned char &blue, const unsigned char &alpha)\nV.vtkColor4(vtkColor4<unsigned char>)\nC++: vtkColor4(const &vtkColor4<unsigned char>)\n",
    NULL
  };

  return docstring;
}

static const char *PyvtkColor4_Doc[] = {
    "vtkColor4 - templated base type for storage of 4 component colors.\n\n",
    "Superclass: vtkTuple[T,4]\n\n",
    "This class is a templated data type for storing and manipulating\nfixed size colors. It derives from the vtkVector templated data\nstructure.\n\n",
    "\nProvided Types:\n\n",
    "  vtkColor4[float64] => vtkColor4<double>\n",
    "  vtkColor4[float32] => vtkColor4<float>\n",
    "  vtkColor4[uint8] => vtkColor4<unsigned char>\n",
    NULL
};

PyObject *PyvtkColor4_TemplateNew(const char *modulename)
{
  PyObject *o;

  PyObject *temp = PyVTKTemplate_New("vtkColor4", modulename,
                                     PyvtkColor4_Doc);

  o = PyvtkColor4_IdE_TypeNew(modulename);
  if (o && PyVTKTemplate_AddItem(temp, o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyvtkColor4_IfE_TypeNew(modulename);
  if (o && PyVTKTemplate_AddItem(temp, o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyvtkColor4_IhE_TypeNew(modulename);
  if (o && PyVTKTemplate_AddItem(temp, o) != 0)
    {
    Py_DECREF(o);
    }

  return temp;
}


static const char **PyvtkColor3ub_Doc();

static PyMethodDef PyvtkColor3ub_Methods[] = {
  {NULL, NULL, 0, NULL}
};

#ifndef DECLARED_PyvtkColor3ub_Type
extern VTK_PYTHON_EXPORT PyTypeObject PyvtkColor3ub_Type;
#define DECLARED_PyvtkColor3ub_Type
#endif

#ifndef DECLARED_PyvtkColor3_IhE_Type
extern VTK_PYTHON_EXPORT PyTypeObject PyvtkColor3_IhE_Type;
#define DECLARED_PyvtkColor3_IhE_Type
#endif


static PyObject *
PyvtkColor3ub_vtkColor3ub_s1(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkColor3ub");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkColor3ub *op = new vtkColor3ub();
    (*op)[0] = 0;
    (*op)[1] = 0;
    (*op)[2] = 0;

    result = PyVTKSpecialObject_New("vtkColor3ub", op);
    }

  return result;
}

static PyObject *
PyvtkColor3ub_vtkColor3ub_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkColor3ub");

  unsigned char temp0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    vtkColor3ub *op = new vtkColor3ub(temp0);

    result = PyVTKSpecialObject_New("vtkColor3ub", op);
    }

  return result;
}

static PyObject *
PyvtkColor3ub_vtkColor3ub_s3(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkColor3ub");

  int temp0;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkColor3ub *op = new vtkColor3ub(temp0);

    result = PyVTKSpecialObject_New("vtkColor3ub", op);
    }

  return result;
}

static PyObject *
PyvtkColor3ub_vtkColor3ub_s4(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkColor3ub");

  unsigned char temp0;
  unsigned char temp1;
  unsigned char temp2;
  PyObject *result = NULL;

  if (ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    vtkColor3ub *op = new vtkColor3ub(temp0, temp1, temp2);

    result = PyVTKSpecialObject_New("vtkColor3ub", op);
    }

  return result;
}

static PyObject *
PyvtkColor3ub_vtkColor3ub_s5(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkColor3ub");

  vtkColor3ub *temp0 = NULL;
  PyObject *pobj0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkColor3ub"))
    {
    vtkColor3ub *op = new vtkColor3ub(*temp0);

    result = PyVTKSpecialObject_New("vtkColor3ub", op);
    }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkColor3ub_vtkColor3ub_Methods[] = {
  {NULL, PyvtkColor3ub_vtkColor3ub_s2, METH_VARARGS,
   (char*)"-O *b"},
  {NULL, PyvtkColor3ub_vtkColor3ub_s3, METH_VARARGS,
   (char*)"-i"},
  {NULL, PyvtkColor3ub_vtkColor3ub_s5, METH_VARARGS,
   (char*)"O &vtkColor3ub"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkColor3ub_vtkColor3ub(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkColor3ub_vtkColor3ub_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
    {
    case 0:
      return PyvtkColor3ub_vtkColor3ub_s1(self, args);
    case 3:
      return PyvtkColor3ub_vtkColor3ub_s4(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "vtkColor3ub");
  return NULL;
}


static PyMethodDef PyvtkColor3ub_NewMethod = \
{ (char*)"vtkColor3ub", PyvtkColor3ub_vtkColor3ub, 1,
  (char*)"" };

#if PY_VERSION_HEX >= 0x02020000
static PyObject *
PyvtkColor3ub_New(PyTypeObject *, PyObject *args, PyObject *kwds)
{
  if (kwds && PyDict_Size(kwds))
    {
    PyErr_SetString(PyExc_TypeError,
                    "this function takes no keyword arguments");
    return NULL;
    }

  return PyvtkColor3ub_vtkColor3ub(NULL, args);
}
#endif

static void PyvtkColor3ub_Delete(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  if (obj->vtk_ptr)
    {
    delete static_cast<vtkColor3ub *>(obj->vtk_ptr);
    }
#if PY_MAJOR_VERSION >= 2
  PyObject_Del(self);
#else
  PyMem_DEL(self);
#endif
}

static long PyvtkColor3ub_Hash(PyObject *self)
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

PyTypeObject PyvtkColor3ub_Type = {
  PyObject_HEAD_INIT(&PyType_Type)
  0,
  (char*)"vtkColor3ub", // tp_name
  sizeof(PyVTKSpecialObject), // tp_basicsize
  0, // tp_itemsize
  PyvtkColor3ub_Delete, // tp_dealloc
  0, // tp_print
  0, // tp_getattr
  0, // tp_setattr
  0, // tp_compare
  PyVTKSpecialObject_Repr, // tp_repr
  0, // tp_as_number
  0, // tp_as_sequence
  0, // tp_as_mapping
  PyvtkColor3ub_Hash, // tp_hash
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
  PyvtkColor3ub_Methods, // tp_methods
  0, // tp_members
  0, // tp_getset
  &PyvtkColor3_IhE_Type, // tp_base
  0, // tp_dict
  0, // tp_descr_get
  0, // tp_descr_set
  0, // tp_dictoffset
  0, // tp_init
  0, // tp_alloc
  PyvtkColor3ub_New, // tp_new
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

static void *PyvtkColor3ub_CCopy(const void *obj)
{
  if (obj)
    {
    return new vtkColor3ub(*static_cast<const vtkColor3ub*>(obj));
    }
  return 0;
}

static PyObject *PyvtkColor3ub_TypeNew(const char *)
{
  PyObject *cls = PyVTKSpecialType_New(
    &PyvtkColor3ub_Type,
    PyvtkColor3ub_Methods,
    PyvtkColor3ub_vtkColor3ub_Methods,
    &PyvtkColor3ub_NewMethod,
    PyvtkColor3ub_Doc(), &PyvtkColor3ub_CCopy);

  return cls;
}

const char **PyvtkColor3ub_Doc()
{
  static const char *docstring[] = {
    "vtkColor4 - templated base type for storage of 4 component colors.\n\n",
    "Superclass: vtkColor3[uint8]\n\n",
    "This class is a templated data type for storing and manipulating\nfixed size colors. It derives from the vtkVector templated data\nstructure.\n\n",
    "V.vtkColor3ub()\nC++: vtkColor3ub()\nV.vtkColor3ub((int, int, int))\nC++: explicit vtkColor3ub(const unsigned char *init)\nV.vtkColor3ub(int)\nC++: explicit vtkColor3ub(int hexSigned)\nV.vtkColor3ub(int, int, int)\nC++: vtkColor3ub(unsigned char r, unsigned char g, unsigned char b)\nV.vtkColor3ub(vtkColor3ub)\nC++: vtkColor3ub(const &vtkColor3ub)\n",
    NULL
  };

  return docstring;
}


static const char **PyvtkColor3f_Doc();

static PyMethodDef PyvtkColor3f_Methods[] = {
  {NULL, NULL, 0, NULL}
};

#ifndef DECLARED_PyvtkColor3f_Type
extern VTK_PYTHON_EXPORT PyTypeObject PyvtkColor3f_Type;
#define DECLARED_PyvtkColor3f_Type
#endif

#ifndef DECLARED_PyvtkColor3_IfE_Type
extern VTK_PYTHON_EXPORT PyTypeObject PyvtkColor3_IfE_Type;
#define DECLARED_PyvtkColor3_IfE_Type
#endif


static PyObject *
PyvtkColor3f_vtkColor3f_s1(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkColor3f");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkColor3f *op = new vtkColor3f();
    (*op)[0] = 0;
    (*op)[1] = 0;
    (*op)[2] = 0;

    result = PyVTKSpecialObject_New("vtkColor3f", op);
    }

  return result;
}

static PyObject *
PyvtkColor3f_vtkColor3f_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkColor3f");

  float temp0;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkColor3f *op = new vtkColor3f(temp0);

    result = PyVTKSpecialObject_New("vtkColor3f", op);
    }

  return result;
}

static PyObject *
PyvtkColor3f_vtkColor3f_s3(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkColor3f");

  float temp0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    vtkColor3f *op = new vtkColor3f(temp0);

    result = PyVTKSpecialObject_New("vtkColor3f", op);
    }

  return result;
}

static PyObject *
PyvtkColor3f_vtkColor3f_s4(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkColor3f");

  float temp0;
  float temp1;
  float temp2;
  PyObject *result = NULL;

  if (ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    vtkColor3f *op = new vtkColor3f(temp0, temp1, temp2);

    result = PyVTKSpecialObject_New("vtkColor3f", op);
    }

  return result;
}

static PyObject *
PyvtkColor3f_vtkColor3f_s5(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkColor3f");

  vtkColor3f *temp0 = NULL;
  PyObject *pobj0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkColor3f"))
    {
    vtkColor3f *op = new vtkColor3f(*temp0);

    result = PyVTKSpecialObject_New("vtkColor3f", op);
    }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkColor3f_vtkColor3f_Methods[] = {
  {NULL, PyvtkColor3f_vtkColor3f_s2, METH_VARARGS,
   (char*)"-f"},
  {NULL, PyvtkColor3f_vtkColor3f_s3, METH_VARARGS,
   (char*)"-O *f"},
  {NULL, PyvtkColor3f_vtkColor3f_s5, METH_VARARGS,
   (char*)"O &vtkColor3f"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkColor3f_vtkColor3f(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkColor3f_vtkColor3f_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
    {
    case 0:
      return PyvtkColor3f_vtkColor3f_s1(self, args);
    case 3:
      return PyvtkColor3f_vtkColor3f_s4(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "vtkColor3f");
  return NULL;
}


static PyMethodDef PyvtkColor3f_NewMethod = \
{ (char*)"vtkColor3f", PyvtkColor3f_vtkColor3f, 1,
  (char*)"" };

#if PY_VERSION_HEX >= 0x02020000
static PyObject *
PyvtkColor3f_New(PyTypeObject *, PyObject *args, PyObject *kwds)
{
  if (kwds && PyDict_Size(kwds))
    {
    PyErr_SetString(PyExc_TypeError,
                    "this function takes no keyword arguments");
    return NULL;
    }

  return PyvtkColor3f_vtkColor3f(NULL, args);
}
#endif

static void PyvtkColor3f_Delete(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  if (obj->vtk_ptr)
    {
    delete static_cast<vtkColor3f *>(obj->vtk_ptr);
    }
#if PY_MAJOR_VERSION >= 2
  PyObject_Del(self);
#else
  PyMem_DEL(self);
#endif
}

static long PyvtkColor3f_Hash(PyObject *self)
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

PyTypeObject PyvtkColor3f_Type = {
  PyObject_HEAD_INIT(&PyType_Type)
  0,
  (char*)"vtkColor3f", // tp_name
  sizeof(PyVTKSpecialObject), // tp_basicsize
  0, // tp_itemsize
  PyvtkColor3f_Delete, // tp_dealloc
  0, // tp_print
  0, // tp_getattr
  0, // tp_setattr
  0, // tp_compare
  PyVTKSpecialObject_Repr, // tp_repr
  0, // tp_as_number
  0, // tp_as_sequence
  0, // tp_as_mapping
  PyvtkColor3f_Hash, // tp_hash
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
  PyvtkColor3f_Methods, // tp_methods
  0, // tp_members
  0, // tp_getset
  &PyvtkColor3_IfE_Type, // tp_base
  0, // tp_dict
  0, // tp_descr_get
  0, // tp_descr_set
  0, // tp_dictoffset
  0, // tp_init
  0, // tp_alloc
  PyvtkColor3f_New, // tp_new
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

static void *PyvtkColor3f_CCopy(const void *obj)
{
  if (obj)
    {
    return new vtkColor3f(*static_cast<const vtkColor3f*>(obj));
    }
  return 0;
}

static PyObject *PyvtkColor3f_TypeNew(const char *)
{
  PyObject *cls = PyVTKSpecialType_New(
    &PyvtkColor3f_Type,
    PyvtkColor3f_Methods,
    PyvtkColor3f_vtkColor3f_Methods,
    &PyvtkColor3f_NewMethod,
    PyvtkColor3f_Doc(), &PyvtkColor3f_CCopy);

  return cls;
}

const char **PyvtkColor3f_Doc()
{
  static const char *docstring[] = {
    "vtkColor4 - templated base type for storage of 4 component colors.\n\n",
    "Superclass: vtkColor3[float32]\n\n",
    "This class is a templated data type for storing and manipulating\nfixed size colors. It derives from the vtkVector templated data\nstructure.\n\n",
    "V.vtkColor3f()\nC++: vtkColor3f()\nV.vtkColor3f(float)\nC++: explicit vtkColor3f(float scalar)\nV.vtkColor3f((float, float, float))\nC++: explicit vtkColor3f(const float *init)\nV.vtkColor3f(float, float, float)\nC++: vtkColor3f(float r, float g, float b)\nV.vtkColor3f(vtkColor3f)\nC++: vtkColor3f(const &vtkColor3f)\n",
    NULL
  };

  return docstring;
}


static const char **PyvtkColor3d_Doc();

static PyMethodDef PyvtkColor3d_Methods[] = {
  {NULL, NULL, 0, NULL}
};

#ifndef DECLARED_PyvtkColor3d_Type
extern VTK_PYTHON_EXPORT PyTypeObject PyvtkColor3d_Type;
#define DECLARED_PyvtkColor3d_Type
#endif

#ifndef DECLARED_PyvtkColor3_IdE_Type
extern VTK_PYTHON_EXPORT PyTypeObject PyvtkColor3_IdE_Type;
#define DECLARED_PyvtkColor3_IdE_Type
#endif


static PyObject *
PyvtkColor3d_vtkColor3d_s1(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkColor3d");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkColor3d *op = new vtkColor3d();
    (*op)[0] = 0;
    (*op)[1] = 0;
    (*op)[2] = 0;

    result = PyVTKSpecialObject_New("vtkColor3d", op);
    }

  return result;
}

static PyObject *
PyvtkColor3d_vtkColor3d_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkColor3d");

  double temp0;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkColor3d *op = new vtkColor3d(temp0);

    result = PyVTKSpecialObject_New("vtkColor3d", op);
    }

  return result;
}

static PyObject *
PyvtkColor3d_vtkColor3d_s3(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkColor3d");

  double temp0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    vtkColor3d *op = new vtkColor3d(temp0);

    result = PyVTKSpecialObject_New("vtkColor3d", op);
    }

  return result;
}

static PyObject *
PyvtkColor3d_vtkColor3d_s4(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkColor3d");

  double temp0;
  double temp1;
  double temp2;
  PyObject *result = NULL;

  if (ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    vtkColor3d *op = new vtkColor3d(temp0, temp1, temp2);

    result = PyVTKSpecialObject_New("vtkColor3d", op);
    }

  return result;
}

static PyObject *
PyvtkColor3d_vtkColor3d_s5(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkColor3d");

  vtkColor3d *temp0 = NULL;
  PyObject *pobj0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkColor3d"))
    {
    vtkColor3d *op = new vtkColor3d(*temp0);

    result = PyVTKSpecialObject_New("vtkColor3d", op);
    }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkColor3d_vtkColor3d_Methods[] = {
  {NULL, PyvtkColor3d_vtkColor3d_s2, METH_VARARGS,
   (char*)"-d"},
  {NULL, PyvtkColor3d_vtkColor3d_s3, METH_VARARGS,
   (char*)"-O *d"},
  {NULL, PyvtkColor3d_vtkColor3d_s5, METH_VARARGS,
   (char*)"O &vtkColor3d"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkColor3d_vtkColor3d(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkColor3d_vtkColor3d_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
    {
    case 0:
      return PyvtkColor3d_vtkColor3d_s1(self, args);
    case 3:
      return PyvtkColor3d_vtkColor3d_s4(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "vtkColor3d");
  return NULL;
}


static PyMethodDef PyvtkColor3d_NewMethod = \
{ (char*)"vtkColor3d", PyvtkColor3d_vtkColor3d, 1,
  (char*)"" };

#if PY_VERSION_HEX >= 0x02020000
static PyObject *
PyvtkColor3d_New(PyTypeObject *, PyObject *args, PyObject *kwds)
{
  if (kwds && PyDict_Size(kwds))
    {
    PyErr_SetString(PyExc_TypeError,
                    "this function takes no keyword arguments");
    return NULL;
    }

  return PyvtkColor3d_vtkColor3d(NULL, args);
}
#endif

static void PyvtkColor3d_Delete(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  if (obj->vtk_ptr)
    {
    delete static_cast<vtkColor3d *>(obj->vtk_ptr);
    }
#if PY_MAJOR_VERSION >= 2
  PyObject_Del(self);
#else
  PyMem_DEL(self);
#endif
}

static long PyvtkColor3d_Hash(PyObject *self)
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

PyTypeObject PyvtkColor3d_Type = {
  PyObject_HEAD_INIT(&PyType_Type)
  0,
  (char*)"vtkColor3d", // tp_name
  sizeof(PyVTKSpecialObject), // tp_basicsize
  0, // tp_itemsize
  PyvtkColor3d_Delete, // tp_dealloc
  0, // tp_print
  0, // tp_getattr
  0, // tp_setattr
  0, // tp_compare
  PyVTKSpecialObject_Repr, // tp_repr
  0, // tp_as_number
  0, // tp_as_sequence
  0, // tp_as_mapping
  PyvtkColor3d_Hash, // tp_hash
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
  PyvtkColor3d_Methods, // tp_methods
  0, // tp_members
  0, // tp_getset
  &PyvtkColor3_IdE_Type, // tp_base
  0, // tp_dict
  0, // tp_descr_get
  0, // tp_descr_set
  0, // tp_dictoffset
  0, // tp_init
  0, // tp_alloc
  PyvtkColor3d_New, // tp_new
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

static void *PyvtkColor3d_CCopy(const void *obj)
{
  if (obj)
    {
    return new vtkColor3d(*static_cast<const vtkColor3d*>(obj));
    }
  return 0;
}

static PyObject *PyvtkColor3d_TypeNew(const char *)
{
  PyObject *cls = PyVTKSpecialType_New(
    &PyvtkColor3d_Type,
    PyvtkColor3d_Methods,
    PyvtkColor3d_vtkColor3d_Methods,
    &PyvtkColor3d_NewMethod,
    PyvtkColor3d_Doc(), &PyvtkColor3d_CCopy);

  return cls;
}

const char **PyvtkColor3d_Doc()
{
  static const char *docstring[] = {
    "vtkColor4 - templated base type for storage of 4 component colors.\n\n",
    "Superclass: vtkColor3[float64]\n\n",
    "This class is a templated data type for storing and manipulating\nfixed size colors. It derives from the vtkVector templated data\nstructure.\n\n",
    "V.vtkColor3d()\nC++: vtkColor3d()\nV.vtkColor3d(float)\nC++: explicit vtkColor3d(double scalar)\nV.vtkColor3d((float, float, float))\nC++: explicit vtkColor3d(const double *init)\nV.vtkColor3d(float, float, float)\nC++: vtkColor3d(double r, double g, double b)\nV.vtkColor3d(vtkColor3d)\nC++: vtkColor3d(const &vtkColor3d)\n",
    NULL
  };

  return docstring;
}


static const char **PyvtkColor4ub_Doc();

static PyMethodDef PyvtkColor4ub_Methods[] = {
  {NULL, NULL, 0, NULL}
};

#ifndef DECLARED_PyvtkColor4ub_Type
extern VTK_PYTHON_EXPORT PyTypeObject PyvtkColor4ub_Type;
#define DECLARED_PyvtkColor4ub_Type
#endif

#ifndef DECLARED_PyvtkColor4_IhE_Type
extern VTK_PYTHON_EXPORT PyTypeObject PyvtkColor4_IhE_Type;
#define DECLARED_PyvtkColor4_IhE_Type
#endif


static PyObject *
PyvtkColor4ub_vtkColor4ub_s1(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkColor4ub");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkColor4ub *op = new vtkColor4ub();
    (*op)[0] = 0;
    (*op)[1] = 0;
    (*op)[2] = 0;
    (*op)[3] = 0;

    result = PyVTKSpecialObject_New("vtkColor4ub", op);
    }

  return result;
}

static PyObject *
PyvtkColor4ub_vtkColor4ub_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkColor4ub");

  unsigned char temp0[4];
  const int size0 = 4;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    vtkColor4ub *op = new vtkColor4ub(temp0);

    result = PyVTKSpecialObject_New("vtkColor4ub", op);
    }

  return result;
}

static PyObject *
PyvtkColor4ub_vtkColor4ub_s3(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkColor4ub");

  int temp0;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkColor4ub *op = new vtkColor4ub(temp0);

    result = PyVTKSpecialObject_New("vtkColor4ub", op);
    }

  return result;
}

static PyObject *
PyvtkColor4ub_vtkColor4ub_s4(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkColor4ub");

  unsigned char temp0;
  unsigned char temp1;
  unsigned char temp2;
  unsigned char temp3 = 255;
  PyObject *result = NULL;

  if (ap.CheckArgCount(3, 4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      (ap.NoArgsLeft() || ap.GetValue(temp3)))
    {
    vtkColor4ub *op = new vtkColor4ub(temp0, temp1, temp2, temp3);

    result = PyVTKSpecialObject_New("vtkColor4ub", op);
    }

  return result;
}

static PyObject *
PyvtkColor4ub_vtkColor4ub_s5(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkColor4ub");

  vtkColor3ub *temp0 = NULL;
  PyObject *pobj0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkColor3ub"))
    {
    vtkColor4ub *op = new vtkColor4ub(*temp0);

    result = PyVTKSpecialObject_New("vtkColor4ub", op);
    }

  Py_XDECREF(pobj0);

  return result;
}

static PyObject *
PyvtkColor4ub_vtkColor4ub_s6(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkColor4ub");

  vtkColor4ub *temp0 = NULL;
  PyObject *pobj0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkColor4ub"))
    {
    vtkColor4ub *op = new vtkColor4ub(*temp0);

    result = PyVTKSpecialObject_New("vtkColor4ub", op);
    }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkColor4ub_vtkColor4ub_Methods[] = {
  {NULL, PyvtkColor4ub_vtkColor4ub_s2, METH_VARARGS,
   (char*)"-O *b"},
  {NULL, PyvtkColor4ub_vtkColor4ub_s3, METH_VARARGS,
   (char*)"-i"},
  {NULL, PyvtkColor4ub_vtkColor4ub_s5, METH_VARARGS,
   (char*)"O &vtkColor3ub"},
  {NULL, PyvtkColor4ub_vtkColor4ub_s6, METH_VARARGS,
   (char*)"O &vtkColor4ub"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkColor4ub_vtkColor4ub(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkColor4ub_vtkColor4ub_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
    {
    case 0:
      return PyvtkColor4ub_vtkColor4ub_s1(self, args);
    case 3:
    case 4:
      return PyvtkColor4ub_vtkColor4ub_s4(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "vtkColor4ub");
  return NULL;
}


static PyMethodDef PyvtkColor4ub_NewMethod = \
{ (char*)"vtkColor4ub", PyvtkColor4ub_vtkColor4ub, 1,
  (char*)"" };

#if PY_VERSION_HEX >= 0x02020000
static PyObject *
PyvtkColor4ub_New(PyTypeObject *, PyObject *args, PyObject *kwds)
{
  if (kwds && PyDict_Size(kwds))
    {
    PyErr_SetString(PyExc_TypeError,
                    "this function takes no keyword arguments");
    return NULL;
    }

  return PyvtkColor4ub_vtkColor4ub(NULL, args);
}
#endif

static void PyvtkColor4ub_Delete(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  if (obj->vtk_ptr)
    {
    delete static_cast<vtkColor4ub *>(obj->vtk_ptr);
    }
#if PY_MAJOR_VERSION >= 2
  PyObject_Del(self);
#else
  PyMem_DEL(self);
#endif
}

static long PyvtkColor4ub_Hash(PyObject *self)
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

PyTypeObject PyvtkColor4ub_Type = {
  PyObject_HEAD_INIT(&PyType_Type)
  0,
  (char*)"vtkColor4ub", // tp_name
  sizeof(PyVTKSpecialObject), // tp_basicsize
  0, // tp_itemsize
  PyvtkColor4ub_Delete, // tp_dealloc
  0, // tp_print
  0, // tp_getattr
  0, // tp_setattr
  0, // tp_compare
  PyVTKSpecialObject_Repr, // tp_repr
  0, // tp_as_number
  0, // tp_as_sequence
  0, // tp_as_mapping
  PyvtkColor4ub_Hash, // tp_hash
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
  PyvtkColor4ub_Methods, // tp_methods
  0, // tp_members
  0, // tp_getset
  &PyvtkColor4_IhE_Type, // tp_base
  0, // tp_dict
  0, // tp_descr_get
  0, // tp_descr_set
  0, // tp_dictoffset
  0, // tp_init
  0, // tp_alloc
  PyvtkColor4ub_New, // tp_new
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

static void *PyvtkColor4ub_CCopy(const void *obj)
{
  if (obj)
    {
    return new vtkColor4ub(*static_cast<const vtkColor4ub*>(obj));
    }
  return 0;
}

static PyObject *PyvtkColor4ub_TypeNew(const char *)
{
  PyObject *cls = PyVTKSpecialType_New(
    &PyvtkColor4ub_Type,
    PyvtkColor4ub_Methods,
    PyvtkColor4ub_vtkColor4ub_Methods,
    &PyvtkColor4ub_NewMethod,
    PyvtkColor4ub_Doc(), &PyvtkColor4ub_CCopy);

  return cls;
}

const char **PyvtkColor4ub_Doc()
{
  static const char *docstring[] = {
    "vtkColor4 - templated base type for storage of 4 component colors.\n\n",
    "Superclass: vtkColor4[uint8]\n\n",
    "This class is a templated data type for storing and manipulating\nfixed size colors. It derives from the vtkVector templated data\nstructure.\n\n",
    "V.vtkColor4ub()\nC++: vtkColor4ub()\nV.vtkColor4ub((int, int, int, int))\nC++: explicit vtkColor4ub(const unsigned char *init)\nV.vtkColor4ub(int)\nC++: explicit vtkColor4ub(int hexSigned)\nV.vtkColor4ub(int, int, int, int)\nC++: vtkColor4ub(unsigned char r, unsigned char g, unsigned char b,\n    unsigned char a=255)\nV.vtkColor4ub(vtkColor3ub)\nC++: vtkColor4ub(const vtkColor3ub &c)\nV.vtkColor4ub(vtkColor4ub)\nC++: vtkColor4ub(const &vtkColor4ub)\n",
    NULL
  };

  return docstring;
}


static const char **PyvtkColor4f_Doc();

static PyMethodDef PyvtkColor4f_Methods[] = {
  {NULL, NULL, 0, NULL}
};

#ifndef DECLARED_PyvtkColor4f_Type
extern VTK_PYTHON_EXPORT PyTypeObject PyvtkColor4f_Type;
#define DECLARED_PyvtkColor4f_Type
#endif

#ifndef DECLARED_PyvtkColor4_IfE_Type
extern VTK_PYTHON_EXPORT PyTypeObject PyvtkColor4_IfE_Type;
#define DECLARED_PyvtkColor4_IfE_Type
#endif


static PyObject *
PyvtkColor4f_vtkColor4f_s1(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkColor4f");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkColor4f *op = new vtkColor4f();
    (*op)[0] = 0;
    (*op)[1] = 0;
    (*op)[2] = 0;
    (*op)[3] = 0;

    result = PyVTKSpecialObject_New("vtkColor4f", op);
    }

  return result;
}

static PyObject *
PyvtkColor4f_vtkColor4f_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkColor4f");

  float temp0;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkColor4f *op = new vtkColor4f(temp0);

    result = PyVTKSpecialObject_New("vtkColor4f", op);
    }

  return result;
}

static PyObject *
PyvtkColor4f_vtkColor4f_s3(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkColor4f");

  float temp0[4];
  const int size0 = 4;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    vtkColor4f *op = new vtkColor4f(temp0);

    result = PyVTKSpecialObject_New("vtkColor4f", op);
    }

  return result;
}

static PyObject *
PyvtkColor4f_vtkColor4f_s4(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkColor4f");

  float temp0;
  float temp1;
  float temp2;
  float temp3 = 1.0;
  PyObject *result = NULL;

  if (ap.CheckArgCount(3, 4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      (ap.NoArgsLeft() || ap.GetValue(temp3)))
    {
    vtkColor4f *op = new vtkColor4f(temp0, temp1, temp2, temp3);

    result = PyVTKSpecialObject_New("vtkColor4f", op);
    }

  return result;
}

static PyObject *
PyvtkColor4f_vtkColor4f_s5(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkColor4f");

  vtkColor4f *temp0 = NULL;
  PyObject *pobj0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkColor4f"))
    {
    vtkColor4f *op = new vtkColor4f(*temp0);

    result = PyVTKSpecialObject_New("vtkColor4f", op);
    }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkColor4f_vtkColor4f_Methods[] = {
  {NULL, PyvtkColor4f_vtkColor4f_s2, METH_VARARGS,
   (char*)"-f"},
  {NULL, PyvtkColor4f_vtkColor4f_s3, METH_VARARGS,
   (char*)"-O *f"},
  {NULL, PyvtkColor4f_vtkColor4f_s5, METH_VARARGS,
   (char*)"O &vtkColor4f"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkColor4f_vtkColor4f(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkColor4f_vtkColor4f_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
    {
    case 0:
      return PyvtkColor4f_vtkColor4f_s1(self, args);
    case 3:
    case 4:
      return PyvtkColor4f_vtkColor4f_s4(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "vtkColor4f");
  return NULL;
}


static PyMethodDef PyvtkColor4f_NewMethod = \
{ (char*)"vtkColor4f", PyvtkColor4f_vtkColor4f, 1,
  (char*)"" };

#if PY_VERSION_HEX >= 0x02020000
static PyObject *
PyvtkColor4f_New(PyTypeObject *, PyObject *args, PyObject *kwds)
{
  if (kwds && PyDict_Size(kwds))
    {
    PyErr_SetString(PyExc_TypeError,
                    "this function takes no keyword arguments");
    return NULL;
    }

  return PyvtkColor4f_vtkColor4f(NULL, args);
}
#endif

static void PyvtkColor4f_Delete(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  if (obj->vtk_ptr)
    {
    delete static_cast<vtkColor4f *>(obj->vtk_ptr);
    }
#if PY_MAJOR_VERSION >= 2
  PyObject_Del(self);
#else
  PyMem_DEL(self);
#endif
}

static long PyvtkColor4f_Hash(PyObject *self)
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

PyTypeObject PyvtkColor4f_Type = {
  PyObject_HEAD_INIT(&PyType_Type)
  0,
  (char*)"vtkColor4f", // tp_name
  sizeof(PyVTKSpecialObject), // tp_basicsize
  0, // tp_itemsize
  PyvtkColor4f_Delete, // tp_dealloc
  0, // tp_print
  0, // tp_getattr
  0, // tp_setattr
  0, // tp_compare
  PyVTKSpecialObject_Repr, // tp_repr
  0, // tp_as_number
  0, // tp_as_sequence
  0, // tp_as_mapping
  PyvtkColor4f_Hash, // tp_hash
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
  PyvtkColor4f_Methods, // tp_methods
  0, // tp_members
  0, // tp_getset
  &PyvtkColor4_IfE_Type, // tp_base
  0, // tp_dict
  0, // tp_descr_get
  0, // tp_descr_set
  0, // tp_dictoffset
  0, // tp_init
  0, // tp_alloc
  PyvtkColor4f_New, // tp_new
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

static void *PyvtkColor4f_CCopy(const void *obj)
{
  if (obj)
    {
    return new vtkColor4f(*static_cast<const vtkColor4f*>(obj));
    }
  return 0;
}

static PyObject *PyvtkColor4f_TypeNew(const char *)
{
  PyObject *cls = PyVTKSpecialType_New(
    &PyvtkColor4f_Type,
    PyvtkColor4f_Methods,
    PyvtkColor4f_vtkColor4f_Methods,
    &PyvtkColor4f_NewMethod,
    PyvtkColor4f_Doc(), &PyvtkColor4f_CCopy);

  return cls;
}

const char **PyvtkColor4f_Doc()
{
  static const char *docstring[] = {
    "vtkColor4 - templated base type for storage of 4 component colors.\n\n",
    "Superclass: vtkColor4[float32]\n\n",
    "This class is a templated data type for storing and manipulating\nfixed size colors. It derives from the vtkVector templated data\nstructure.\n\n",
    "V.vtkColor4f()\nC++: vtkColor4f()\nV.vtkColor4f(float)\nC++: explicit vtkColor4f(float scalar)\nV.vtkColor4f((float, float, float, float))\nC++: explicit vtkColor4f(const float *init)\nV.vtkColor4f(float, float, float, float)\nC++: vtkColor4f(float r, float g, float b, float a=1.0)\nV.vtkColor4f(vtkColor4f)\nC++: vtkColor4f(const &vtkColor4f)\n",
    NULL
  };

  return docstring;
}


static const char **PyvtkColor4d_Doc();

static PyMethodDef PyvtkColor4d_Methods[] = {
  {NULL, NULL, 0, NULL}
};

#ifndef DECLARED_PyvtkColor4d_Type
extern VTK_PYTHON_EXPORT PyTypeObject PyvtkColor4d_Type;
#define DECLARED_PyvtkColor4d_Type
#endif

#ifndef DECLARED_PyvtkColor4_IdE_Type
extern VTK_PYTHON_EXPORT PyTypeObject PyvtkColor4_IdE_Type;
#define DECLARED_PyvtkColor4_IdE_Type
#endif


static PyObject *
PyvtkColor4d_vtkColor4d_s1(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkColor4d");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkColor4d *op = new vtkColor4d();
    (*op)[0] = 0;
    (*op)[1] = 0;
    (*op)[2] = 0;
    (*op)[3] = 0;

    result = PyVTKSpecialObject_New("vtkColor4d", op);
    }

  return result;
}

static PyObject *
PyvtkColor4d_vtkColor4d_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkColor4d");

  double temp0;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkColor4d *op = new vtkColor4d(temp0);

    result = PyVTKSpecialObject_New("vtkColor4d", op);
    }

  return result;
}

static PyObject *
PyvtkColor4d_vtkColor4d_s3(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkColor4d");

  double temp0[4];
  const int size0 = 4;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    vtkColor4d *op = new vtkColor4d(temp0);

    result = PyVTKSpecialObject_New("vtkColor4d", op);
    }

  return result;
}

static PyObject *
PyvtkColor4d_vtkColor4d_s4(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkColor4d");

  double temp0;
  double temp1;
  double temp2;
  double temp3 = 1.0;
  PyObject *result = NULL;

  if (ap.CheckArgCount(3, 4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      (ap.NoArgsLeft() || ap.GetValue(temp3)))
    {
    vtkColor4d *op = new vtkColor4d(temp0, temp1, temp2, temp3);

    result = PyVTKSpecialObject_New("vtkColor4d", op);
    }

  return result;
}

static PyObject *
PyvtkColor4d_vtkColor4d_s5(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkColor4d");

  vtkColor4d *temp0 = NULL;
  PyObject *pobj0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkColor4d"))
    {
    vtkColor4d *op = new vtkColor4d(*temp0);

    result = PyVTKSpecialObject_New("vtkColor4d", op);
    }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkColor4d_vtkColor4d_Methods[] = {
  {NULL, PyvtkColor4d_vtkColor4d_s2, METH_VARARGS,
   (char*)"-d"},
  {NULL, PyvtkColor4d_vtkColor4d_s3, METH_VARARGS,
   (char*)"-O *d"},
  {NULL, PyvtkColor4d_vtkColor4d_s5, METH_VARARGS,
   (char*)"O &vtkColor4d"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkColor4d_vtkColor4d(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkColor4d_vtkColor4d_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
    {
    case 0:
      return PyvtkColor4d_vtkColor4d_s1(self, args);
    case 3:
    case 4:
      return PyvtkColor4d_vtkColor4d_s4(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "vtkColor4d");
  return NULL;
}


static PyMethodDef PyvtkColor4d_NewMethod = \
{ (char*)"vtkColor4d", PyvtkColor4d_vtkColor4d, 1,
  (char*)"" };

#if PY_VERSION_HEX >= 0x02020000
static PyObject *
PyvtkColor4d_New(PyTypeObject *, PyObject *args, PyObject *kwds)
{
  if (kwds && PyDict_Size(kwds))
    {
    PyErr_SetString(PyExc_TypeError,
                    "this function takes no keyword arguments");
    return NULL;
    }

  return PyvtkColor4d_vtkColor4d(NULL, args);
}
#endif

static void PyvtkColor4d_Delete(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  if (obj->vtk_ptr)
    {
    delete static_cast<vtkColor4d *>(obj->vtk_ptr);
    }
#if PY_MAJOR_VERSION >= 2
  PyObject_Del(self);
#else
  PyMem_DEL(self);
#endif
}

static long PyvtkColor4d_Hash(PyObject *self)
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

PyTypeObject PyvtkColor4d_Type = {
  PyObject_HEAD_INIT(&PyType_Type)
  0,
  (char*)"vtkColor4d", // tp_name
  sizeof(PyVTKSpecialObject), // tp_basicsize
  0, // tp_itemsize
  PyvtkColor4d_Delete, // tp_dealloc
  0, // tp_print
  0, // tp_getattr
  0, // tp_setattr
  0, // tp_compare
  PyVTKSpecialObject_Repr, // tp_repr
  0, // tp_as_number
  0, // tp_as_sequence
  0, // tp_as_mapping
  PyvtkColor4d_Hash, // tp_hash
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
  PyvtkColor4d_Methods, // tp_methods
  0, // tp_members
  0, // tp_getset
  &PyvtkColor4_IdE_Type, // tp_base
  0, // tp_dict
  0, // tp_descr_get
  0, // tp_descr_set
  0, // tp_dictoffset
  0, // tp_init
  0, // tp_alloc
  PyvtkColor4d_New, // tp_new
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

static void *PyvtkColor4d_CCopy(const void *obj)
{
  if (obj)
    {
    return new vtkColor4d(*static_cast<const vtkColor4d*>(obj));
    }
  return 0;
}

static PyObject *PyvtkColor4d_TypeNew(const char *)
{
  PyObject *cls = PyVTKSpecialType_New(
    &PyvtkColor4d_Type,
    PyvtkColor4d_Methods,
    PyvtkColor4d_vtkColor4d_Methods,
    &PyvtkColor4d_NewMethod,
    PyvtkColor4d_Doc(), &PyvtkColor4d_CCopy);

  return cls;
}

const char **PyvtkColor4d_Doc()
{
  static const char *docstring[] = {
    "vtkColor4 - templated base type for storage of 4 component colors.\n\n",
    "Superclass: vtkColor4[float64]\n\n",
    "This class is a templated data type for storing and manipulating\nfixed size colors. It derives from the vtkVector templated data\nstructure.\n\n",
    "V.vtkColor4d()\nC++: vtkColor4d()\nV.vtkColor4d(float)\nC++: explicit vtkColor4d(double scalar)\nV.vtkColor4d((float, float, float, float))\nC++: explicit vtkColor4d(const double *init)\nV.vtkColor4d(float, float, float, float)\nC++: vtkColor4d(double r, double g, double b, double a=1.0)\nV.vtkColor4d(vtkColor4d)\nC++: vtkColor4d(const &vtkColor4d)\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkColor(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyvtkColor3_TemplateNew(modulename);

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

  if (o && PyDict_SetItemString(dict, (char *)"vtkColor3", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyvtkColor4_TemplateNew(modulename);

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

  if (o && PyDict_SetItemString(dict, (char *)"vtkColor4", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyvtkColor3ub_TypeNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkColor3ub", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyvtkColor3f_TypeNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkColor3f", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyvtkColor3d_TypeNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkColor3d", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyvtkColor4ub_TypeNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkColor4ub", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyvtkColor4f_TypeNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkColor4f", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyvtkColor4d_TypeNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkColor4d", o) != 0)
    {
    Py_DECREF(o);
    }

}

