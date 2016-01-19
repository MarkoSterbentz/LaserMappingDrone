// python wrapper for vtkContextPolygon
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkVector.h"
#include "vtkContextPolygon.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkContextPolygon(PyObject *, const char *); }

static const char **PyvtkContextPolygon_Doc();


static PyObject *
PyvtkContextPolygon_AddPoint_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "AddPoint");
  void *vp = ap.GetSelfPointer(self);
  vtkContextPolygon *op = static_cast<vtkContextPolygon *>(vp);

  vtkVector2f *temp0 = NULL;
  PyObject *pobj0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkVector2f"))
    {
    op->AddPoint(*temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  Py_XDECREF(pobj0);

  return result;
}

static PyObject *
PyvtkContextPolygon_AddPoint_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "AddPoint");
  void *vp = ap.GetSelfPointer(self);
  vtkContextPolygon *op = static_cast<vtkContextPolygon *>(vp);

  float temp0;
  float temp1;
  PyObject *result = NULL;

  if (ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    op->AddPoint(temp0, temp1);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkContextPolygon_AddPoint(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
    {
    case 1:
      return PyvtkContextPolygon_AddPoint_s1(self, args);
    case 2:
      return PyvtkContextPolygon_AddPoint_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "AddPoint");
  return NULL;
}



static PyObject *
PyvtkContextPolygon_GetPoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "GetPoint");
  void *vp = ap.GetSelfPointer(self);
  vtkContextPolygon *op = static_cast<vtkContextPolygon *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkVector2f tempr = op->GetPoint(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildSpecialObject(&tempr, "vtkVector2f");
      }
    }

  return result;
}


static PyObject *
PyvtkContextPolygon_GetNumberOfPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfPoints");
  void *vp = ap.GetSelfPointer(self);
  vtkContextPolygon *op = static_cast<vtkContextPolygon *>(vp);

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkIdType tempr = op->GetNumberOfPoints();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkContextPolygon_Clear(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "Clear");
  void *vp = ap.GetSelfPointer(self);
  vtkContextPolygon *op = static_cast<vtkContextPolygon *>(vp);

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    op->Clear();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkContextPolygon_Contains(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "Contains");
  void *vp = ap.GetSelfPointer(self);
  vtkContextPolygon *op = static_cast<vtkContextPolygon *>(vp);

  vtkVector2f *temp0 = NULL;
  PyObject *pobj0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkVector2f"))
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
PyvtkContextPolygon_Transformed(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "Transformed");
  void *vp = ap.GetSelfPointer(self);
  vtkContextPolygon *op = static_cast<vtkContextPolygon *>(vp);

  vtkTransform2D *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkTransform2D"))
    {
    vtkContextPolygon tempr = op->Transformed(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildSpecialObject(&tempr, "vtkContextPolygon");
      }
    }

  return result;
}

static PyMethodDef PyvtkContextPolygon_Methods[] = {
  {(char*)"AddPoint", PyvtkContextPolygon_AddPoint, METH_VARARGS,
   (char*)"V.AddPoint(vtkVector2f)\nC++: void AddPoint(const vtkVector2f &point)\nV.AddPoint(float, float)\nC++: void AddPoint(float x, float y)\n\nAdds a point to the polygon.\n"},
  {(char*)"GetPoint", PyvtkContextPolygon_GetPoint, METH_VARARGS,
   (char*)"V.GetPoint(int) -> vtkVector2f\nC++: vtkVector2f GetPoint(vtkIdType index)\n\nReturns the point at index.\n"},
  {(char*)"GetNumberOfPoints", PyvtkContextPolygon_GetNumberOfPoints, METH_VARARGS,
   (char*)"V.GetNumberOfPoints() -> int\nC++: vtkIdType GetNumberOfPoints()\n\nReturns the number of points in the polygon.\n"},
  {(char*)"Clear", PyvtkContextPolygon_Clear, METH_VARARGS,
   (char*)"V.Clear()\nC++: void Clear()\n\nClears all the points from the polygon.\n"},
  {(char*)"Contains", PyvtkContextPolygon_Contains, METH_VARARGS,
   (char*)"V.Contains(vtkVector2f) -> bool\nC++: bool Contains(const vtkVector2f &point)\n\nReturns true if the polygon contains point.\n"},
  {(char*)"Transformed", PyvtkContextPolygon_Transformed, METH_VARARGS,
   (char*)"V.Transformed(vtkTransform2D) -> vtkContextPolygon\nC++: vtkContextPolygon Transformed(vtkTransform2D *transform)\n\nReturns a new polygon with each point transformed by transform.\n"},
  {NULL, NULL, 0, NULL}
};

#ifndef DECLARED_PyvtkContextPolygon_Type
extern VTK_PYTHON_EXPORT PyTypeObject PyvtkContextPolygon_Type;
#define DECLARED_PyvtkContextPolygon_Type
#endif


static PyObject *
PyvtkContextPolygon_vtkContextPolygon_s1(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkContextPolygon");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkContextPolygon *op = new vtkContextPolygon();

    result = PyVTKSpecialObject_New("vtkContextPolygon", op);
    }

  return result;
}

static PyObject *
PyvtkContextPolygon_vtkContextPolygon_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkContextPolygon");

  vtkContextPolygon *temp0 = NULL;
  PyObject *pobj0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkContextPolygon"))
    {
    vtkContextPolygon *op = new vtkContextPolygon(*temp0);

    result = PyVTKSpecialObject_New("vtkContextPolygon", op);
    }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkContextPolygon_vtkContextPolygon_Methods[] = {
  {NULL, PyvtkContextPolygon_vtkContextPolygon_s2, METH_VARARGS,
   (char*)"O &vtkContextPolygon"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkContextPolygon_vtkContextPolygon(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
    {
    case 0:
      return PyvtkContextPolygon_vtkContextPolygon_s1(self, args);
    case 1:
      return PyvtkContextPolygon_vtkContextPolygon_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "vtkContextPolygon");
  return NULL;
}


static PyMethodDef PyvtkContextPolygon_NewMethod = \
{ (char*)"vtkContextPolygon", PyvtkContextPolygon_vtkContextPolygon, 1,
  (char*)"" };

#if PY_VERSION_HEX >= 0x02020000
static PyObject *
PyvtkContextPolygon_New(PyTypeObject *, PyObject *args, PyObject *kwds)
{
  if (kwds && PyDict_Size(kwds))
    {
    PyErr_SetString(PyExc_TypeError,
                    "this function takes no keyword arguments");
    return NULL;
    }

  return PyvtkContextPolygon_vtkContextPolygon(NULL, args);
}
#endif

static void PyvtkContextPolygon_Delete(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  if (obj->vtk_ptr)
    {
    delete static_cast<vtkContextPolygon *>(obj->vtk_ptr);
    }
#if PY_MAJOR_VERSION >= 2
  PyObject_Del(self);
#else
  PyMem_DEL(self);
#endif
}

static long PyvtkContextPolygon_Hash(PyObject *self)
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

PyTypeObject PyvtkContextPolygon_Type = {
  PyObject_HEAD_INIT(&PyType_Type)
  0,
  (char*)"vtkContextPolygon", // tp_name
  sizeof(PyVTKSpecialObject), // tp_basicsize
  0, // tp_itemsize
  PyvtkContextPolygon_Delete, // tp_dealloc
  0, // tp_print
  0, // tp_getattr
  0, // tp_setattr
  0, // tp_compare
  PyVTKSpecialObject_Repr, // tp_repr
  0, // tp_as_number
  0, // tp_as_sequence
  0, // tp_as_mapping
  PyvtkContextPolygon_Hash, // tp_hash
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
  PyvtkContextPolygon_Methods, // tp_methods
  0, // tp_members
  0, // tp_getset
  0, // tp_base
  0, // tp_dict
  0, // tp_descr_get
  0, // tp_descr_set
  0, // tp_dictoffset
  0, // tp_init
  0, // tp_alloc
  PyvtkContextPolygon_New, // tp_new
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

static void *PyvtkContextPolygon_CCopy(const void *obj)
{
  if (obj)
    {
    return new vtkContextPolygon(*static_cast<const vtkContextPolygon*>(obj));
    }
  return 0;
}

static PyObject *PyvtkContextPolygon_TypeNew(const char *)
{
  PyObject *cls = PyVTKSpecialType_New(
    &PyvtkContextPolygon_Type,
    PyvtkContextPolygon_Methods,
    PyvtkContextPolygon_vtkContextPolygon_Methods,
    &PyvtkContextPolygon_NewMethod,
    PyvtkContextPolygon_Doc(), &PyvtkContextPolygon_CCopy);

  return cls;
}

const char **PyvtkContextPolygon_Doc()
{
  static const char *docstring[] = {
    "vtkContextPolygon - no description provided.\n\n",
    "\n\n",
    "V.vtkContextPolygon()\nC++: vtkContextPolygon()\nV.vtkContextPolygon(vtkContextPolygon)\nC++: vtkContextPolygon(const vtkContextPolygon &polygon)\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkContextPolygon(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyvtkContextPolygon_TypeNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkContextPolygon", o) != 0)
    {
    Py_DECREF(o);
    }

}

