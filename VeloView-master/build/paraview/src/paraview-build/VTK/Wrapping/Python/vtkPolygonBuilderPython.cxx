// python wrapper for vtkPolygonBuilder
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkPolygonBuilder.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkPolygonBuilder(PyObject *, const char *); }

static const char **PyvtkPolygonBuilder_Doc();


static PyObject *
PyvtkPolygonBuilder_Reset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "Reset");
  void *vp = ap.GetSelfPointer(self);
  vtkPolygonBuilder *op = static_cast<vtkPolygonBuilder *>(vp);

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    op->Reset();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPolygonBuilder_InsertTriangle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "InsertTriangle");
  void *vp = ap.GetSelfPointer(self);
  vtkPolygonBuilder *op = static_cast<vtkPolygonBuilder *>(vp);

  vtkIdType *temp0 = NULL;
  vtkIdType *save0 = NULL;
  vtkIdType small0[8];
  int size0 = 0;
  PyObject *result = NULL;

  size0 = ap.GetArgSize(0);
  temp0 = small0;
  if (size0 > 4)
    {
    temp0 = new vtkIdType[2*size0];
    }
  save0 = &temp0[size0];

  if (ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    bool tempr = op->InsertTriangle(temp0);

    if (ap.ArrayHasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(0, temp0, size0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  if (temp0 && temp0 != small0)
    {
    delete [] temp0;
    }

  return result;
}


static PyObject *
PyvtkPolygonBuilder_GetPolygon(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "GetPolygon");
  void *vp = ap.GetSelfPointer(self);
  vtkPolygonBuilder *op = static_cast<vtkPolygonBuilder *>(vp);

  vtkIdList *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkIdList"))
    {
    op->GetPolygon(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkPolygonBuilder_Methods[] = {
  {(char*)"Reset", PyvtkPolygonBuilder_Reset, METH_VARARGS,
   (char*)"V.Reset()\nC++: void Reset()\n\n"},
  {(char*)"InsertTriangle", PyvtkPolygonBuilder_InsertTriangle, METH_VARARGS,
   (char*)"V.InsertTriangle([int, ...]) -> bool\nC++: bool InsertTriangle(vtkIdType *abc)\n\n"},
  {(char*)"GetPolygon", PyvtkPolygonBuilder_GetPolygon, METH_VARARGS,
   (char*)"V.GetPolygon(vtkIdList)\nC++: void GetPolygon(vtkIdList *poly)\n\n"},
  {NULL, NULL, 0, NULL}
};

#ifndef DECLARED_PyvtkPolygonBuilder_Type
extern VTK_PYTHON_EXPORT PyTypeObject PyvtkPolygonBuilder_Type;
#define DECLARED_PyvtkPolygonBuilder_Type
#endif


static PyObject *
PyvtkPolygonBuilder_vtkPolygonBuilder_s1(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkPolygonBuilder");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkPolygonBuilder *op = new vtkPolygonBuilder();

    result = PyVTKSpecialObject_New("vtkPolygonBuilder", op);
    }

  return result;
}

static PyObject *
PyvtkPolygonBuilder_vtkPolygonBuilder_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkPolygonBuilder");

  vtkPolygonBuilder *temp0 = NULL;
  PyObject *pobj0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkPolygonBuilder"))
    {
    vtkPolygonBuilder *op = new vtkPolygonBuilder(*temp0);

    result = PyVTKSpecialObject_New("vtkPolygonBuilder", op);
    }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkPolygonBuilder_vtkPolygonBuilder_Methods[] = {
  {NULL, PyvtkPolygonBuilder_vtkPolygonBuilder_s2, METH_VARARGS,
   (char*)"O &vtkPolygonBuilder"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkPolygonBuilder_vtkPolygonBuilder(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
    {
    case 0:
      return PyvtkPolygonBuilder_vtkPolygonBuilder_s1(self, args);
    case 1:
      return PyvtkPolygonBuilder_vtkPolygonBuilder_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "vtkPolygonBuilder");
  return NULL;
}


static PyMethodDef PyvtkPolygonBuilder_NewMethod = \
{ (char*)"vtkPolygonBuilder", PyvtkPolygonBuilder_vtkPolygonBuilder, 1,
  (char*)"" };

#if PY_VERSION_HEX >= 0x02020000
static PyObject *
PyvtkPolygonBuilder_New(PyTypeObject *, PyObject *args, PyObject *kwds)
{
  if (kwds && PyDict_Size(kwds))
    {
    PyErr_SetString(PyExc_TypeError,
                    "this function takes no keyword arguments");
    return NULL;
    }

  return PyvtkPolygonBuilder_vtkPolygonBuilder(NULL, args);
}
#endif

static void PyvtkPolygonBuilder_Delete(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  if (obj->vtk_ptr)
    {
    delete static_cast<vtkPolygonBuilder *>(obj->vtk_ptr);
    }
#if PY_MAJOR_VERSION >= 2
  PyObject_Del(self);
#else
  PyMem_DEL(self);
#endif
}

static long PyvtkPolygonBuilder_Hash(PyObject *self)
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

PyTypeObject PyvtkPolygonBuilder_Type = {
  PyObject_HEAD_INIT(&PyType_Type)
  0,
  (char*)"vtkPolygonBuilder", // tp_name
  sizeof(PyVTKSpecialObject), // tp_basicsize
  0, // tp_itemsize
  PyvtkPolygonBuilder_Delete, // tp_dealloc
  0, // tp_print
  0, // tp_getattr
  0, // tp_setattr
  0, // tp_compare
  PyVTKSpecialObject_Repr, // tp_repr
  0, // tp_as_number
  0, // tp_as_sequence
  0, // tp_as_mapping
  PyvtkPolygonBuilder_Hash, // tp_hash
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
  PyvtkPolygonBuilder_Methods, // tp_methods
  0, // tp_members
  0, // tp_getset
  0, // tp_base
  0, // tp_dict
  0, // tp_descr_get
  0, // tp_descr_set
  0, // tp_dictoffset
  0, // tp_init
  0, // tp_alloc
  PyvtkPolygonBuilder_New, // tp_new
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

static void *PyvtkPolygonBuilder_CCopy(const void *obj)
{
  if (obj)
    {
    return new vtkPolygonBuilder(*static_cast<const vtkPolygonBuilder*>(obj));
    }
  return 0;
}

static PyObject *PyvtkPolygonBuilder_TypeNew(const char *)
{
  PyObject *cls = PyVTKSpecialType_New(
    &PyvtkPolygonBuilder_Type,
    PyvtkPolygonBuilder_Methods,
    PyvtkPolygonBuilder_vtkPolygonBuilder_Methods,
    &PyvtkPolygonBuilder_NewMethod,
    PyvtkPolygonBuilder_Doc(), &PyvtkPolygonBuilder_CCopy);

  return cls;
}

const char **PyvtkPolygonBuilder_Doc()
{
  static const char *docstring[] = {
    "vtkPolygonBuilder -builds a polygon from a set of abstract triangles\n(represented by index triplets)\n\n",
    "The polygon output is the boundary of the union of the triangles.\n It is assumed that the input triangles form a simple polygon without\n internal vertices.\n The algorithm is quadratic to the input size, but\n can be sped up easily by improving the FindEdge() function. It is\n currently used to compute polygon for slicing.\n\n",
    "V.vtkPolygonBuilder()\nC++: vtkPolygonBuilder()\nV.vtkPolygonBuilder(vtkPolygonBuilder)\nC++: vtkPolygonBuilder(const &vtkPolygonBuilder)\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPolygonBuilder(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyvtkPolygonBuilder_TypeNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPolygonBuilder", o) != 0)
    {
    Py_DECREF(o);
    }

}

