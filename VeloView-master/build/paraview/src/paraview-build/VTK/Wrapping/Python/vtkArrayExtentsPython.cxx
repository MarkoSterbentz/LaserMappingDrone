// python wrapper for vtkArrayExtents
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkArrayRange.h"
#include "vtkArrayCoordinates.h"
#include "vtkArrayExtents.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkArrayExtents(PyObject *, const char *); }

static const char **PyvtkArrayExtents_Doc();


static PyObject *
PyvtkArrayExtents_Uniform(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "Uniform");

  vtkIdType temp0;
  vtkIdType temp1;
  PyObject *result = NULL;

  if (ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    vtkArrayExtents tempr = vtkArrayExtents::Uniform(temp0, temp1);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildSpecialObject(&tempr, "vtkArrayExtents");
      }
    }

  return result;
}


static PyObject *
PyvtkArrayExtents_Append(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "Append");
  void *vp = ap.GetSelfPointer(self);
  vtkArrayExtents *op = static_cast<vtkArrayExtents *>(vp);

  vtkArrayRange *temp0 = NULL;
  PyObject *pobj0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkArrayRange"))
    {
    op->Append(*temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  Py_XDECREF(pobj0);

  return result;
}


static PyObject *
PyvtkArrayExtents_GetDimensions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "GetDimensions");
  void *vp = ap.GetSelfPointer(self);
  vtkArrayExtents *op = static_cast<vtkArrayExtents *>(vp);

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
PyvtkArrayExtents_GetSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "GetSize");
  void *vp = ap.GetSelfPointer(self);
  vtkArrayExtents *op = static_cast<vtkArrayExtents *>(vp);

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    unsigned long long tempr = op->GetSize();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkArrayExtents_SetDimensions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "SetDimensions");
  void *vp = ap.GetSelfPointer(self);
  vtkArrayExtents *op = static_cast<vtkArrayExtents *>(vp);

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
PyvtkArrayExtents_GetExtent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "GetExtent");
  void *vp = ap.GetSelfPointer(self);
  vtkArrayExtents *op = static_cast<vtkArrayExtents *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkArrayRange tempr = op->GetExtent(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildSpecialObject(&tempr, "vtkArrayRange");
      }
    }

  return result;
}


static PyObject *
PyvtkArrayExtents_SetExtent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "SetExtent");
  void *vp = ap.GetSelfPointer(self);
  vtkArrayExtents *op = static_cast<vtkArrayExtents *>(vp);

  vtkIdType temp0;
  vtkArrayRange *temp1 = NULL;
  PyObject *pobj1 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetSpecialObject(temp1, pobj1, "vtkArrayRange"))
    {
    op->SetExtent(temp0, *temp1);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  Py_XDECREF(pobj1);

  return result;
}


static PyObject *
PyvtkArrayExtents_ZeroBased(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "ZeroBased");
  void *vp = ap.GetSelfPointer(self);
  vtkArrayExtents *op = static_cast<vtkArrayExtents *>(vp);

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    bool tempr = op->ZeroBased();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkArrayExtents_SameShape(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "SameShape");
  void *vp = ap.GetSelfPointer(self);
  vtkArrayExtents *op = static_cast<vtkArrayExtents *>(vp);

  vtkArrayExtents *temp0 = NULL;
  PyObject *pobj0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkArrayExtents"))
    {
    bool tempr = op->SameShape(*temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  Py_XDECREF(pobj0);

  return result;
}


static PyObject *
PyvtkArrayExtents_GetLeftToRightCoordinatesN(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "GetLeftToRightCoordinatesN");
  void *vp = ap.GetSelfPointer(self);
  vtkArrayExtents *op = static_cast<vtkArrayExtents *>(vp);

  unsigned long long temp0;
  vtkArrayCoordinates *temp1 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetSpecialObject(temp1, "vtkArrayCoordinates"))
    {
    op->GetLeftToRightCoordinatesN(temp0, *temp1);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkArrayExtents_GetRightToLeftCoordinatesN(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "GetRightToLeftCoordinatesN");
  void *vp = ap.GetSelfPointer(self);
  vtkArrayExtents *op = static_cast<vtkArrayExtents *>(vp);

  unsigned long long temp0;
  vtkArrayCoordinates *temp1 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetSpecialObject(temp1, "vtkArrayCoordinates"))
    {
    op->GetRightToLeftCoordinatesN(temp0, *temp1);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkArrayExtents_Contains(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "Contains");
  void *vp = ap.GetSelfPointer(self);
  vtkArrayExtents *op = static_cast<vtkArrayExtents *>(vp);

  vtkArrayCoordinates *temp0 = NULL;
  PyObject *pobj0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkArrayCoordinates"))
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

static PyMethodDef PyvtkArrayExtents_Methods[] = {
  {(char*)"Uniform", PyvtkArrayExtents_Uniform, METH_VARARGS | METH_STATIC,
   (char*)"V.Uniform(int, int) -> vtkArrayExtents\nC++: static const vtkArrayExtents Uniform(DimensionT n,\n    CoordinateT m)\n\nCreate n-dimensional extents with extent [0, m) along each\ndimension. This is useful for creating e.g: a square matrix.\n"},
  {(char*)"Append", PyvtkArrayExtents_Append, METH_VARARGS,
   (char*)"V.Append(vtkArrayRange)\nC++: void Append(const vtkArrayRange &extent)\n\nGrow the number of dimensions by one, specifying the extent of\nthe new dimension.\n"},
  {(char*)"GetDimensions", PyvtkArrayExtents_GetDimensions, METH_VARARGS,
   (char*)"V.GetDimensions() -> int\nC++: DimensionT GetDimensions()\n\nReturn the current number of dimensions.\n"},
  {(char*)"GetSize", PyvtkArrayExtents_GetSize, METH_VARARGS,
   (char*)"V.GetSize() -> int\nC++: SizeT GetSize()\n\nReturn the number of values that *could* be stored using the\ncurrent extents.  This is equal to the product of the size of the\nextent along each dimension.\n"},
  {(char*)"SetDimensions", PyvtkArrayExtents_SetDimensions, METH_VARARGS,
   (char*)"V.SetDimensions(int)\nC++: void SetDimensions(DimensionT dimensions)\n\nSet the current number of dimensions.  Note that this method\nresets the extent along each dimension to an empty range, so you\nmust assign each dimension's extent explicitly using operator[]\nafter calling SetDimensions().\n"},
  {(char*)"GetExtent", PyvtkArrayExtents_GetExtent, METH_VARARGS,
   (char*)"V.GetExtent(int) -> vtkArrayRange\nC++: vtkArrayRange GetExtent(DimensionT i)\n\nGet the extent of the i-th dimension.\n"},
  {(char*)"SetExtent", PyvtkArrayExtents_SetExtent, METH_VARARGS,
   (char*)"V.SetExtent(int, vtkArrayRange)\nC++: void SetExtent(DimensionT i, const vtkArrayRange &)\n\nSet the extent of the i-th dimension.\n"},
  {(char*)"ZeroBased", PyvtkArrayExtents_ZeroBased, METH_VARARGS,
   (char*)"V.ZeroBased() -> bool\nC++: bool ZeroBased()\n\nReturns true iff every range in the current extents is\nzero-based. This is useful as a precondition test for legacy\nfilters/operations that predate the switch to range-based extents\nand assume that all extents are zero-based.  In general, new code\nshould be written to work with arbitrary range extents, so won't\nneed to perform this check.\n"},
  {(char*)"SameShape", PyvtkArrayExtents_SameShape, METH_VARARGS,
   (char*)"V.SameShape(vtkArrayExtents) -> bool\nC++: bool SameShape(const vtkArrayExtents &rhs)\n\nReturns true iff the given extents have the same number of\ndimensions and size along each dimension.  Note that the ranges\nalong each dimension may have different values, so long as their\nsizes match.\n"},
  {(char*)"GetLeftToRightCoordinatesN", PyvtkArrayExtents_GetLeftToRightCoordinatesN, METH_VARARGS,
   (char*)"V.GetLeftToRightCoordinatesN(int, vtkArrayCoordinates)\nC++: void GetLeftToRightCoordinatesN(SizeT n,\n    vtkArrayCoordinates &coordinates)\n\nReturns coordinates that reference the n-th value in the extents,\nwhere n is in the range [0, GetSize()).  The returned coordinates\nwill be ordered so that the left-most indices vary fastest.  This\nis equivalent to column-major ordering for matrices, and\ncorresponds to the order in which consecutive array values would\nbe stored in languages such as Fortran, MATLAB, Octave, and R.\n"},
  {(char*)"GetRightToLeftCoordinatesN", PyvtkArrayExtents_GetRightToLeftCoordinatesN, METH_VARARGS,
   (char*)"V.GetRightToLeftCoordinatesN(int, vtkArrayCoordinates)\nC++: void GetRightToLeftCoordinatesN(SizeT n,\n    vtkArrayCoordinates &coordinates)\n\nReturns coordinates that reference the n-th value in the extents,\nwhere n is in the range [0, GetSize()).  The returned coordinates\nwill be ordered so that the right-most indices vary fastest. \nThis is equivalent to row-major ordering for matrices, and\ncorresponds to the order in which consecutive array values would\nbe stored in languages including C and C++.\n"},
  {(char*)"Contains", PyvtkArrayExtents_Contains, METH_VARARGS,
   (char*)"V.Contains(vtkArrayCoordinates) -> bool\nC++: bool Contains(const vtkArrayCoordinates &coordinates)\n\nReturns true if the given array coordinates are completely\ncontained by the current extents (i.e. extent begin <= coordinate\nand coordinate < extent end along every dimension).  Returns\nfalse if the array coordinates are outside the current extents,\nor contain a different number of dimensions.\n"},
  {NULL, NULL, 0, NULL}
};

#ifndef DECLARED_PyvtkArrayExtents_Type
extern VTK_PYTHON_EXPORT PyTypeObject PyvtkArrayExtents_Type;
#define DECLARED_PyvtkArrayExtents_Type
#endif


static PyObject *
PyvtkArrayExtents_vtkArrayExtents_s1(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkArrayExtents");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkArrayExtents *op = new vtkArrayExtents();

    result = PyVTKSpecialObject_New("vtkArrayExtents", op);
    }

  return result;
}

static PyObject *
PyvtkArrayExtents_vtkArrayExtents_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkArrayExtents");

  vtkIdType temp0;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkArrayExtents *op = new vtkArrayExtents(temp0);

    result = PyVTKSpecialObject_New("vtkArrayExtents", op);
    }

  return result;
}

static PyObject *
PyvtkArrayExtents_vtkArrayExtents_s3(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkArrayExtents");

  vtkArrayRange *temp0 = NULL;
  PyObject *pobj0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkArrayRange"))
    {
    vtkArrayExtents *op = new vtkArrayExtents(*temp0);

    result = PyVTKSpecialObject_New("vtkArrayExtents", op);
    }

  Py_XDECREF(pobj0);

  return result;
}

static PyObject *
PyvtkArrayExtents_vtkArrayExtents_s4(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkArrayExtents");

  vtkIdType temp0;
  vtkIdType temp1;
  PyObject *result = NULL;

  if (ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    vtkArrayExtents *op = new vtkArrayExtents(temp0, temp1);

    result = PyVTKSpecialObject_New("vtkArrayExtents", op);
    }

  return result;
}

static PyObject *
PyvtkArrayExtents_vtkArrayExtents_s5(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkArrayExtents");

  vtkArrayRange *temp0 = NULL;
  PyObject *pobj0 = NULL;
  vtkArrayRange *temp1 = NULL;
  PyObject *pobj1 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(2) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkArrayRange") &&
      ap.GetSpecialObject(temp1, pobj1, "vtkArrayRange"))
    {
    vtkArrayExtents *op = new vtkArrayExtents(*temp0, *temp1);

    result = PyVTKSpecialObject_New("vtkArrayExtents", op);
    }

  Py_XDECREF(pobj0);
  Py_XDECREF(pobj1);

  return result;
}

static PyObject *
PyvtkArrayExtents_vtkArrayExtents_s6(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkArrayExtents");

  vtkIdType temp0;
  vtkIdType temp1;
  vtkIdType temp2;
  PyObject *result = NULL;

  if (ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    vtkArrayExtents *op = new vtkArrayExtents(temp0, temp1, temp2);

    result = PyVTKSpecialObject_New("vtkArrayExtents", op);
    }

  return result;
}

static PyObject *
PyvtkArrayExtents_vtkArrayExtents_s7(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkArrayExtents");

  vtkArrayRange *temp0 = NULL;
  PyObject *pobj0 = NULL;
  vtkArrayRange *temp1 = NULL;
  PyObject *pobj1 = NULL;
  vtkArrayRange *temp2 = NULL;
  PyObject *pobj2 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(3) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkArrayRange") &&
      ap.GetSpecialObject(temp1, pobj1, "vtkArrayRange") &&
      ap.GetSpecialObject(temp2, pobj2, "vtkArrayRange"))
    {
    vtkArrayExtents *op = new vtkArrayExtents(*temp0, *temp1, *temp2);

    result = PyVTKSpecialObject_New("vtkArrayExtents", op);
    }

  Py_XDECREF(pobj0);
  Py_XDECREF(pobj1);
  Py_XDECREF(pobj2);

  return result;
}

static PyObject *
PyvtkArrayExtents_vtkArrayExtents_s8(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkArrayExtents");

  vtkArrayExtents *temp0 = NULL;
  PyObject *pobj0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkArrayExtents"))
    {
    vtkArrayExtents *op = new vtkArrayExtents(*temp0);

    result = PyVTKSpecialObject_New("vtkArrayExtents", op);
    }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkArrayExtents_vtkArrayExtents_Methods[] = {
  {NULL, PyvtkArrayExtents_vtkArrayExtents_s2, METH_VARARGS,
   (char*)"-L"},
  {NULL, PyvtkArrayExtents_vtkArrayExtents_s3, METH_VARARGS,
   (char*)"-O &vtkArrayRange"},
  {NULL, PyvtkArrayExtents_vtkArrayExtents_s4, METH_VARARGS,
   (char*)"LL"},
  {NULL, PyvtkArrayExtents_vtkArrayExtents_s5, METH_VARARGS,
   (char*)"OO &vtkArrayRange &vtkArrayRange"},
  {NULL, PyvtkArrayExtents_vtkArrayExtents_s6, METH_VARARGS,
   (char*)"LLL"},
  {NULL, PyvtkArrayExtents_vtkArrayExtents_s7, METH_VARARGS,
   (char*)"OOO &vtkArrayRange &vtkArrayRange &vtkArrayRange"},
  {NULL, PyvtkArrayExtents_vtkArrayExtents_s8, METH_VARARGS,
   (char*)"O &vtkArrayExtents"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkArrayExtents_vtkArrayExtents(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkArrayExtents_vtkArrayExtents_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
    {
    case 0:
      return PyvtkArrayExtents_vtkArrayExtents_s1(self, args);
    case 1:
    case 2:
    case 3:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "vtkArrayExtents");
  return NULL;
}


static PyMethodDef PyvtkArrayExtents_NewMethod = \
{ (char*)"vtkArrayExtents", PyvtkArrayExtents_vtkArrayExtents, 1,
  (char*)"" };

#if PY_VERSION_HEX >= 0x02020000
static PyObject *
PyvtkArrayExtents_New(PyTypeObject *, PyObject *args, PyObject *kwds)
{
  if (kwds && PyDict_Size(kwds))
    {
    PyErr_SetString(PyExc_TypeError,
                    "this function takes no keyword arguments");
    return NULL;
    }

  return PyvtkArrayExtents_vtkArrayExtents(NULL, args);
}
#endif

static void PyvtkArrayExtents_Delete(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  if (obj->vtk_ptr)
    {
    delete static_cast<vtkArrayExtents *>(obj->vtk_ptr);
    }
#if PY_MAJOR_VERSION >= 2
  PyObject_Del(self);
#else
  PyMem_DEL(self);
#endif
}

static PyObject *PyvtkArrayExtents_String(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  vtksys_ios::ostringstream os;
  if (obj->vtk_ptr)
    {
    os << *static_cast<const vtkArrayExtents *>(obj->vtk_ptr);
    }
  const vtksys_stl::string &s = os.str();
  return PyString_FromStringAndSize(s.data(), s.size());
}

#if PY_VERSION_HEX >= 0x02010000
static PyObject *PyvtkArrayExtents_RichCompare(
  PyObject *o1, PyObject *o2, int opid)
{
  PyObject *n1 = NULL;
  PyObject *n2 = NULL;
  const vtkArrayExtents *so1 = NULL;
  const vtkArrayExtents *so2 = NULL;
  int result = -1;

  if (o1->ob_type == &PyvtkArrayExtents_Type)
    {
    PyVTKSpecialObject *s1 = (PyVTKSpecialObject *)o1;
    so1 = static_cast<const vtkArrayExtents *>(s1->vtk_ptr);
    }
  else
    {
    so1 = static_cast<const vtkArrayExtents *>(
      vtkPythonUtil::GetPointerFromSpecialObject(
        o1, "vtkArrayExtents", &n1));
    if (so1 == NULL)
      {
      PyErr_Clear();
      Py_INCREF(Py_NotImplemented);
      return Py_NotImplemented;
      }
    }

  if (o2->ob_type == &PyvtkArrayExtents_Type)
    {
    PyVTKSpecialObject *s2 = (PyVTKSpecialObject *)o2;
    so2 = static_cast<const vtkArrayExtents *>(s2->vtk_ptr);
    }
  else
    {
    so2 = static_cast<const vtkArrayExtents *>(
      vtkPythonUtil::GetPointerFromSpecialObject(
        o2, "vtkArrayExtents", &n2));
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

Py_ssize_t PyvtkArrayExtents_SequenceSize(PyObject *self)
{
  void *vp = vtkPythonArgs::GetSelfPointer(self);
  vtkArrayExtents *op = static_cast<vtkArrayExtents *>(vp);

  return static_cast<Py_ssize_t>(op->GetDimensions());
}

PyObject *PyvtkArrayExtents_SequenceItem(PyObject *self, Py_ssize_t i)
{
  void *vp = vtkPythonArgs::GetSelfPointer(self);
  vtkArrayExtents *op = static_cast<vtkArrayExtents *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  temp0 = static_cast<vtkIdType>(i);

  if (temp0 < 0 || temp0 >= op->GetDimensions())
    {
    PyErr_SetString(PyExc_IndexError, "index out of range");
    }
  else
    {
    const vtkArrayRange *tempr = &(*op)[temp0];

    if (PyErr_Occurred() == NULL)
      {
      result = vtkPythonArgs::BuildSpecialObject(tempr, "vtkArrayRange");
      }
    }

  return result;
}

int PyvtkArrayExtents_SequenceSetItem(
  PyObject *self, Py_ssize_t i, PyObject *arg1)
{
  void *vp = vtkPythonArgs::GetSelfPointer(self);
  vtkArrayExtents *op = static_cast<vtkArrayExtents *>(vp);

  vtkIdType temp0;
  vtkArrayRange *temp1 = NULL;
  int result = -1;

  temp0 = static_cast<vtkIdType>(i);

  if (temp0 < 0 || temp0 >= op->GetDimensions())
    {
    PyErr_SetString(PyExc_IndexError, "index out of range");
    }
  else if (vtkPythonArgs::GetSpecialObject(arg1, temp1, "vtkArrayRange"))
    {
    (*op)[temp0] = *temp1;

    if (PyErr_Occurred() == NULL)
      {
      result = 0;
      }
    }

  return result;
}

static PySequenceMethods PyvtkArrayExtents_AsSequence = {
  PyvtkArrayExtents_SequenceSize, // sq_length
  0, // sq_concat
  0, // sq_repeat
  PyvtkArrayExtents_SequenceItem, // sq_item
  0, // sq_slice
  PyvtkArrayExtents_SequenceSetItem, // sq_ass_item
  0, // sq_ass_slice
  0, // sq_contains
#if PY_VERSION_HEX >= 0x2000000
  0, // sq_inplace_concat
  0, // sq_inplace_repeat
#endif
};

static long PyvtkArrayExtents_Hash(PyObject *self)
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

PyTypeObject PyvtkArrayExtents_Type = {
  PyObject_HEAD_INIT(&PyType_Type)
  0,
  (char*)"vtkArrayExtents", // tp_name
  sizeof(PyVTKSpecialObject), // tp_basicsize
  0, // tp_itemsize
  PyvtkArrayExtents_Delete, // tp_dealloc
  0, // tp_print
  0, // tp_getattr
  0, // tp_setattr
  0, // tp_compare
  PyVTKSpecialObject_Repr, // tp_repr
  0, // tp_as_number
  &PyvtkArrayExtents_AsSequence, // tp_as_sequence
  0, // tp_as_mapping
  PyvtkArrayExtents_Hash, // tp_hash
  0, // tp_call
  PyvtkArrayExtents_String, // tp_str
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
  PyvtkArrayExtents_RichCompare, // tp_richcompare
#else
  0, // tp_richcompare
#endif
  0, // tp_weaklistoffset
#if PY_VERSION_HEX >= 0x02020000
  0, // tp_iter
  0, // tp_iternext
  PyvtkArrayExtents_Methods, // tp_methods
  0, // tp_members
  0, // tp_getset
  0, // tp_base
  0, // tp_dict
  0, // tp_descr_get
  0, // tp_descr_set
  0, // tp_dictoffset
  0, // tp_init
  0, // tp_alloc
  PyvtkArrayExtents_New, // tp_new
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

static void *PyvtkArrayExtents_CCopy(const void *obj)
{
  if (obj)
    {
    return new vtkArrayExtents(*static_cast<const vtkArrayExtents*>(obj));
    }
  return 0;
}

static PyObject *PyvtkArrayExtents_TypeNew(const char *)
{
  PyObject *cls = PyVTKSpecialType_New(
    &PyvtkArrayExtents_Type,
    PyvtkArrayExtents_Methods,
    PyvtkArrayExtents_vtkArrayExtents_Methods,
    &PyvtkArrayExtents_NewMethod,
    PyvtkArrayExtents_Doc(), &PyvtkArrayExtents_CCopy);

  return cls;
}

const char **PyvtkArrayExtents_Doc()
{
  static const char *docstring[] = {
    "vtkArrayExtents - Stores the number of dimensions and valid\n\n",
    "vtkArrayExtents describes the number of dimensions and coordinate\nranges along each dimension of an N-way collection of values.  It is\nused to retrieve and update the extents of a vtkArray object.\n\nConceptually, vtkArrayExtents is a collection of vtkArrayRange\nobjects, one per dimension, that store the half-open range of valid\ncoordinates (the \"extent\") for that dimension.  Because each extent\nis ",
    "stored as a range rather than a size, you can: create arrays that\nuse one-based coordinates for consistency with mathematics and tools\nsuch as MATLAB; easily represent arbitrary subsets of an array; and\neasily store and manipulate distributed arrays using \"global\"\ncoordinates.\n\nConvenience constructors are provided for creating extents along one,\ntwo, and three dimensions.  For higher dimensions, ",
    "you can:\n\nUse the static Uniform() factory method to create extents that have\nthe same size along an arbitrary number of dimensions.\n\nUse the default constructor and the Append() method to \"grow\" your\nextents to the correct number of dimensions.\n\nUse the default constructuor, SetDimensions() and operator[] to\nassign a size along each dimension.\n\nSee Also:\n\nvtkArray, vtkArrayRange, vtkArrayCoordina",
    "tes\n\nThanks:\n\nDeveloped by Timothy M. Shead (tshead@sandia.gov) at Sandia National\nLaboratories.\n\n",
    "V.vtkArrayExtents()\nC++: vtkArrayExtents()\nV.vtkArrayExtents(int)\nC++: explicit vtkArrayExtents(const CoordinateT i)\nV.vtkArrayExtents(vtkArrayRange)\nC++: explicit vtkArrayExtents(const vtkArrayRange &i)\nV.vtkArrayExtents(int, int)\nC++: vtkArrayExtents(const CoordinateT i, const CoordinateT j)\nV.vtkArrayExtents(vtkArrayRange, vtkArrayRange)\nC++: vtkArrayExtents(const vtkArrayRange &i, const vtkArrayRange &j)\nV.vtkArrayExtents(int, int, int)\nC++: vtkArrayExtents(const CoordinateT i, const CoordinateT j,\n    const CoordinateT k)\nV.vtkArrayExtents(vtkArrayRange, vtkArrayRange, vtkArrayRange)\nC++: vtkArrayExtents(const vtkArrayRange &i, const vtkArrayRange &j,\n    const vtkArrayRange &k)\nV.vtkArrayExtents(vtkArrayExtents)\nC++: vtkArrayExtents(const &vtkArrayExtents)\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkArrayExtents(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyvtkArrayExtents_TypeNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkArrayExtents", o) != 0)
    {
    Py_DECREF(o);
    }

}

