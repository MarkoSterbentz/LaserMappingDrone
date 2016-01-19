// python wrapper for vtkDenseArray
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkArrayExtents.h"
#include "vtkArrayCoordinates.h"
#include "vtkDenseArray.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkDenseArray(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkDenseArray_IcENew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkTypedArray_IcENew
extern "C" { PyObject *PyVTKClass_vtkTypedArray_IcENew(const char *); }
#define DECLARED_PyVTKClass_vtkTypedArray_IcENew
#endif

static const char **PyvtkDenseArray_IcE_Doc();


static PyObject *
PyvtkDenseArray_IcE_IsDense(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsDense");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<char> *op = static_cast<vtkDenseArray<char> *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->IsDense() :
      op->vtkDenseArray<char>::IsDense());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDenseArray_IcE_GetExtents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetExtents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<char> *op = static_cast<vtkDenseArray<char> *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const vtkArrayExtents *tempr = (ap.IsBound() ?
      &op->GetExtents() :
      &op->vtkDenseArray<char>::GetExtents());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildSpecialObject(tempr, "vtkArrayExtents");
      }
    }

  return result;
}


static PyObject *
PyvtkDenseArray_IcE_GetNonNullSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNonNullSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<char> *op = static_cast<vtkDenseArray<char> *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned long long tempr = (ap.IsBound() ?
      op->GetNonNullSize() :
      op->vtkDenseArray<char>::GetNonNullSize());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDenseArray_IcE_GetCoordinatesN(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCoordinatesN");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<char> *op = static_cast<vtkDenseArray<char> *>(vp);

  unsigned long long temp0;
  vtkArrayCoordinates *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetSpecialObject(temp1, "vtkArrayCoordinates"))
    {
    if (ap.IsBound())
      {
      op->GetCoordinatesN(temp0, *temp1);
      }
    else
      {
      op->vtkDenseArray<char>::GetCoordinatesN(temp0, *temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDenseArray_IcE_DeepCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeepCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<char> *op = static_cast<vtkDenseArray<char> *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkArray *tempr = (ap.IsBound() ?
      op->DeepCopy() :
      op->vtkDenseArray<char>::DeepCopy());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDenseArray_IcE_GetValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<char> *op = static_cast<vtkDenseArray<char> *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    const char *tempr = (ap.IsBound() ?
      &op->GetValue(temp0) :
      &op->vtkDenseArray<char>::GetValue(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(*tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkDenseArray_IcE_GetValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<char> *op = static_cast<vtkDenseArray<char> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    const char *tempr = (ap.IsBound() ?
      &op->GetValue(temp0, temp1) :
      &op->vtkDenseArray<char>::GetValue(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(*tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkDenseArray_IcE_GetValue_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<char> *op = static_cast<vtkDenseArray<char> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  vtkIdType temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    const char *tempr = (ap.IsBound() ?
      &op->GetValue(temp0, temp1, temp2) :
      &op->vtkDenseArray<char>::GetValue(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(*tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkDenseArray_IcE_GetValue_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<char> *op = static_cast<vtkDenseArray<char> *>(vp);

  vtkArrayCoordinates *temp0 = NULL;
  PyObject *pobj0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkArrayCoordinates"))
    {
    const char *tempr = (ap.IsBound() ?
      &op->GetValue(*temp0) :
      &op->vtkDenseArray<char>::GetValue(*temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(*tempr);
      }
    }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkDenseArray_IcE_GetValue_Methods[] = {
  {NULL, PyvtkDenseArray_IcE_GetValue_s1, METH_VARARGS,
   (char*)"@L"},
  {NULL, PyvtkDenseArray_IcE_GetValue_s4, METH_VARARGS,
   (char*)"@O &vtkArrayCoordinates"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkDenseArray_IcE_GetValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkDenseArray_IcE_GetValue_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkDenseArray_IcE_GetValue_s2(self, args);
    case 3:
      return PyvtkDenseArray_IcE_GetValue_s3(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetValue");
  return NULL;
}



static PyObject *
PyvtkDenseArray_IcE_GetValueN(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValueN");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<char> *op = static_cast<vtkDenseArray<char> *>(vp);

  unsigned long long temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    const char *tempr = (ap.IsBound() ?
      &op->GetValueN(temp0) :
      &op->vtkDenseArray<char>::GetValueN(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(*tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDenseArray_IcE_SetValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<char> *op = static_cast<vtkDenseArray<char> *>(vp);

  vtkIdType temp0;
  char temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetValue(temp0, temp1);
      }
    else
      {
      op->vtkDenseArray<char>::SetValue(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkDenseArray_IcE_SetValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<char> *op = static_cast<vtkDenseArray<char> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  char temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      op->SetValue(temp0, temp1, temp2);
      }
    else
      {
      op->vtkDenseArray<char>::SetValue(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkDenseArray_IcE_SetValue_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<char> *op = static_cast<vtkDenseArray<char> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  vtkIdType temp2;
  char temp3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
    {
    if (ap.IsBound())
      {
      op->SetValue(temp0, temp1, temp2, temp3);
      }
    else
      {
      op->vtkDenseArray<char>::SetValue(temp0, temp1, temp2, temp3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkDenseArray_IcE_SetValue_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<char> *op = static_cast<vtkDenseArray<char> *>(vp);

  vtkArrayCoordinates *temp0 = NULL;
  PyObject *pobj0 = NULL;
  char temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkArrayCoordinates") &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetValue(*temp0, temp1);
      }
    else
      {
      op->vtkDenseArray<char>::SetValue(*temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkDenseArray_IcE_SetValue_Methods[] = {
  {NULL, PyvtkDenseArray_IcE_SetValue_s1, METH_VARARGS,
   (char*)"@Lc"},
  {NULL, PyvtkDenseArray_IcE_SetValue_s4, METH_VARARGS,
   (char*)"@Oc &vtkArrayCoordinates"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkDenseArray_IcE_SetValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkDenseArray_IcE_SetValue_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkDenseArray_IcE_SetValue_s2(self, args);
    case 4:
      return PyvtkDenseArray_IcE_SetValue_s3(self, args);
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetValue");
  return NULL;
}



static PyObject *
PyvtkDenseArray_IcE_SetValueN(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValueN");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<char> *op = static_cast<vtkDenseArray<char> *>(vp);

  unsigned long long temp0;
  char temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetValueN(temp0, temp1);
      }
    else
      {
      op->vtkDenseArray<char>::SetValueN(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDenseArray_IcE_Fill(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Fill");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<char> *op = static_cast<vtkDenseArray<char> *>(vp);

  char temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->Fill(temp0);
      }
    else
      {
      op->vtkDenseArray<char>::Fill(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDenseArray_IcE_GetStorage(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStorage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<char> *op = static_cast<vtkDenseArray<char> *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetStorage() :
      op->vtkDenseArray<char>::GetStorage());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkDenseArray_IcE_Methods[] = {
  {(char*)"IsDense", PyvtkDenseArray_IcE_IsDense, METH_VARARGS,
   (char*)"V.IsDense() -> bool\nC++: bool IsDense()\n\n"},
  {(char*)"GetExtents", PyvtkDenseArray_IcE_GetExtents, METH_VARARGS,
   (char*)"V.GetExtents() -> vtkArrayExtents\nC++: const vtkArrayExtents &GetExtents()\n\n"},
  {(char*)"GetNonNullSize", PyvtkDenseArray_IcE_GetNonNullSize, METH_VARARGS,
   (char*)"V.GetNonNullSize() -> int\nC++: SizeT GetNonNullSize()\n\n"},
  {(char*)"GetCoordinatesN", PyvtkDenseArray_IcE_GetCoordinatesN, METH_VARARGS,
   (char*)"V.GetCoordinatesN(int, vtkArrayCoordinates)\nC++: void GetCoordinatesN(const SizeT n,\n    vtkArrayCoordinates &coordinates)\n\n"},
  {(char*)"DeepCopy", PyvtkDenseArray_IcE_DeepCopy, METH_VARARGS,
   (char*)"V.DeepCopy() -> vtkArray\nC++: vtkArray *DeepCopy()\n\n"},
  {(char*)"GetValue", PyvtkDenseArray_IcE_GetValue, METH_VARARGS,
   (char*)"V.GetValue(int) -> char\nC++: const char &GetValue(CoordinateT i)\nV.GetValue(int, int) -> char\nC++: const char &GetValue(CoordinateT i, CoordinateT j)\nV.GetValue(int, int, int) -> char\nC++: const char &GetValue(CoordinateT i, CoordinateT j,\n    CoordinateT k)\nV.GetValue(vtkArrayCoordinates) -> char\nC++: const char &GetValue(const vtkArrayCoordinates &coordinates)\n\n"},
  {(char*)"GetValueN", PyvtkDenseArray_IcE_GetValueN, METH_VARARGS,
   (char*)"V.GetValueN(int) -> char\nC++: const char &GetValueN(const SizeT n)\n\n"},
  {(char*)"SetValue", PyvtkDenseArray_IcE_SetValue, METH_VARARGS,
   (char*)"V.SetValue(int, char)\nC++: void SetValue(CoordinateT i, const char &value)\nV.SetValue(int, int, char)\nC++: void SetValue(CoordinateT i, CoordinateT j,\n    const char &value)\nV.SetValue(int, int, int, char)\nC++: void SetValue(CoordinateT i, CoordinateT j, CoordinateT k,\n    const char &value)\nV.SetValue(vtkArrayCoordinates, char)\nC++: void SetValue(const vtkArrayCoordinates &coordinates,\n    const char &value)\n\n"},
  {(char*)"SetValueN", PyvtkDenseArray_IcE_SetValueN, METH_VARARGS,
   (char*)"V.SetValueN(int, char)\nC++: void SetValueN(const SizeT n, const char &value)\n\n"},
  {(char*)"Fill", PyvtkDenseArray_IcE_Fill, METH_VARARGS,
   (char*)"V.Fill(char)\nC++: void Fill(const char &value)\n\nFills every element in the array with the given value.\n"},
  {(char*)"GetStorage", PyvtkDenseArray_IcE_GetStorage, METH_VARARGS,
   (char*)"V.GetStorage() -> string\nC++: char *GetStorage()\n\nReturns a mutable reference to the underlying storage.  Values\nare stored contiguously with fortran ordering.  Use at your own\nrisk!\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkDenseArray_IcE_StaticNew()
{
  return vtkDenseArray<char>::New();
}

PyObject *PyVTKClass_vtkDenseArray_IcENew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkDenseArray_IcE_StaticNew,
    PyvtkDenseArray_IcE_Methods,
    typeid(vtkDenseArray<char>).name(), modulename,
    "vtkDenseArray_IcE", "vtkDenseArray_IcE",
    PyvtkDenseArray_IcE_Doc(),
    PyVTKClass_vtkTypedArray_IcENew(modulename));
  return cls;
}

const char **PyvtkDenseArray_IcE_Doc()
{
  static const char *docstring[] = {
    "vtkDenseArray - Contiguous storage for N-way arrays.\n\n",
    "Superclass: vtkTypedArray[char]\n\n",
    "vtkDenseArray is a concrete vtkArray implementation that stores\nvalues using a contiguous block of memory.  Values are stored with\nfortran ordering, meaning that if you iterated over the memory block,\nthe left-most coordinates would vary the fastest.\n\nIn addition to the retrieval and update methods provided by\nvtkTypedArray, vtkDenseArray provides methods to:\n\nFill the entire array with a specific",
    " value.\n\nRetrieve a pointer to the storage memory block.\n\nSee Also:\n\nvtkArray, vtkTypedArray, vtkSparseArray\n\nThanks:\n\nDeveloped by Timothy M. Shead (tshead@sandia.gov) at Sandia National\nLaboratories.\n\n",
    NULL
  };

  return docstring;
}

extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkDenseArray_IaENew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkTypedArray_IaENew
extern "C" { PyObject *PyVTKClass_vtkTypedArray_IaENew(const char *); }
#define DECLARED_PyVTKClass_vtkTypedArray_IaENew
#endif

static const char **PyvtkDenseArray_IaE_Doc();


static PyObject *
PyvtkDenseArray_IaE_IsDense(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsDense");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<signed char> *op = static_cast<vtkDenseArray<signed char> *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->IsDense() :
      op->vtkDenseArray<signed char>::IsDense());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDenseArray_IaE_GetExtents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetExtents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<signed char> *op = static_cast<vtkDenseArray<signed char> *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const vtkArrayExtents *tempr = (ap.IsBound() ?
      &op->GetExtents() :
      &op->vtkDenseArray<signed char>::GetExtents());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildSpecialObject(tempr, "vtkArrayExtents");
      }
    }

  return result;
}


static PyObject *
PyvtkDenseArray_IaE_GetNonNullSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNonNullSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<signed char> *op = static_cast<vtkDenseArray<signed char> *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned long long tempr = (ap.IsBound() ?
      op->GetNonNullSize() :
      op->vtkDenseArray<signed char>::GetNonNullSize());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDenseArray_IaE_GetCoordinatesN(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCoordinatesN");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<signed char> *op = static_cast<vtkDenseArray<signed char> *>(vp);

  unsigned long long temp0;
  vtkArrayCoordinates *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetSpecialObject(temp1, "vtkArrayCoordinates"))
    {
    if (ap.IsBound())
      {
      op->GetCoordinatesN(temp0, *temp1);
      }
    else
      {
      op->vtkDenseArray<signed char>::GetCoordinatesN(temp0, *temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDenseArray_IaE_DeepCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeepCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<signed char> *op = static_cast<vtkDenseArray<signed char> *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkArray *tempr = (ap.IsBound() ?
      op->DeepCopy() :
      op->vtkDenseArray<signed char>::DeepCopy());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDenseArray_IaE_GetValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<signed char> *op = static_cast<vtkDenseArray<signed char> *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    const signed char *tempr = (ap.IsBound() ?
      &op->GetValue(temp0) :
      &op->vtkDenseArray<signed char>::GetValue(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(*tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkDenseArray_IaE_GetValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<signed char> *op = static_cast<vtkDenseArray<signed char> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    const signed char *tempr = (ap.IsBound() ?
      &op->GetValue(temp0, temp1) :
      &op->vtkDenseArray<signed char>::GetValue(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(*tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkDenseArray_IaE_GetValue_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<signed char> *op = static_cast<vtkDenseArray<signed char> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  vtkIdType temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    const signed char *tempr = (ap.IsBound() ?
      &op->GetValue(temp0, temp1, temp2) :
      &op->vtkDenseArray<signed char>::GetValue(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(*tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkDenseArray_IaE_GetValue_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<signed char> *op = static_cast<vtkDenseArray<signed char> *>(vp);

  vtkArrayCoordinates *temp0 = NULL;
  PyObject *pobj0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkArrayCoordinates"))
    {
    const signed char *tempr = (ap.IsBound() ?
      &op->GetValue(*temp0) :
      &op->vtkDenseArray<signed char>::GetValue(*temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(*tempr);
      }
    }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkDenseArray_IaE_GetValue_Methods[] = {
  {NULL, PyvtkDenseArray_IaE_GetValue_s1, METH_VARARGS,
   (char*)"@L"},
  {NULL, PyvtkDenseArray_IaE_GetValue_s4, METH_VARARGS,
   (char*)"@O &vtkArrayCoordinates"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkDenseArray_IaE_GetValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkDenseArray_IaE_GetValue_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkDenseArray_IaE_GetValue_s2(self, args);
    case 3:
      return PyvtkDenseArray_IaE_GetValue_s3(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetValue");
  return NULL;
}



static PyObject *
PyvtkDenseArray_IaE_GetValueN(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValueN");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<signed char> *op = static_cast<vtkDenseArray<signed char> *>(vp);

  unsigned long long temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    const signed char *tempr = (ap.IsBound() ?
      &op->GetValueN(temp0) :
      &op->vtkDenseArray<signed char>::GetValueN(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(*tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDenseArray_IaE_SetValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<signed char> *op = static_cast<vtkDenseArray<signed char> *>(vp);

  vtkIdType temp0;
  signed char temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetValue(temp0, temp1);
      }
    else
      {
      op->vtkDenseArray<signed char>::SetValue(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkDenseArray_IaE_SetValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<signed char> *op = static_cast<vtkDenseArray<signed char> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  signed char temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      op->SetValue(temp0, temp1, temp2);
      }
    else
      {
      op->vtkDenseArray<signed char>::SetValue(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkDenseArray_IaE_SetValue_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<signed char> *op = static_cast<vtkDenseArray<signed char> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  vtkIdType temp2;
  signed char temp3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
    {
    if (ap.IsBound())
      {
      op->SetValue(temp0, temp1, temp2, temp3);
      }
    else
      {
      op->vtkDenseArray<signed char>::SetValue(temp0, temp1, temp2, temp3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkDenseArray_IaE_SetValue_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<signed char> *op = static_cast<vtkDenseArray<signed char> *>(vp);

  vtkArrayCoordinates *temp0 = NULL;
  PyObject *pobj0 = NULL;
  signed char temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkArrayCoordinates") &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetValue(*temp0, temp1);
      }
    else
      {
      op->vtkDenseArray<signed char>::SetValue(*temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkDenseArray_IaE_SetValue_Methods[] = {
  {NULL, PyvtkDenseArray_IaE_SetValue_s1, METH_VARARGS,
   (char*)"@LB"},
  {NULL, PyvtkDenseArray_IaE_SetValue_s4, METH_VARARGS,
   (char*)"@OB &vtkArrayCoordinates"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkDenseArray_IaE_SetValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkDenseArray_IaE_SetValue_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkDenseArray_IaE_SetValue_s2(self, args);
    case 4:
      return PyvtkDenseArray_IaE_SetValue_s3(self, args);
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetValue");
  return NULL;
}



static PyObject *
PyvtkDenseArray_IaE_SetValueN(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValueN");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<signed char> *op = static_cast<vtkDenseArray<signed char> *>(vp);

  unsigned long long temp0;
  signed char temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetValueN(temp0, temp1);
      }
    else
      {
      op->vtkDenseArray<signed char>::SetValueN(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDenseArray_IaE_Fill(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Fill");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<signed char> *op = static_cast<vtkDenseArray<signed char> *>(vp);

  signed char temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->Fill(temp0);
      }
    else
      {
      op->vtkDenseArray<signed char>::Fill(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDenseArray_IaE_GetStorage(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStorage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<signed char> *op = static_cast<vtkDenseArray<signed char> *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    signed char *tempr = (ap.IsBound() ?
      op->GetStorage() :
      op->vtkDenseArray<signed char>::GetStorage());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkDenseArray_IaE_Methods[] = {
  {(char*)"IsDense", PyvtkDenseArray_IaE_IsDense, METH_VARARGS,
   (char*)"V.IsDense() -> bool\nC++: bool IsDense()\n\n"},
  {(char*)"GetExtents", PyvtkDenseArray_IaE_GetExtents, METH_VARARGS,
   (char*)"V.GetExtents() -> vtkArrayExtents\nC++: const vtkArrayExtents &GetExtents()\n\n"},
  {(char*)"GetNonNullSize", PyvtkDenseArray_IaE_GetNonNullSize, METH_VARARGS,
   (char*)"V.GetNonNullSize() -> int\nC++: SizeT GetNonNullSize()\n\n"},
  {(char*)"GetCoordinatesN", PyvtkDenseArray_IaE_GetCoordinatesN, METH_VARARGS,
   (char*)"V.GetCoordinatesN(int, vtkArrayCoordinates)\nC++: void GetCoordinatesN(const SizeT n,\n    vtkArrayCoordinates &coordinates)\n\n"},
  {(char*)"DeepCopy", PyvtkDenseArray_IaE_DeepCopy, METH_VARARGS,
   (char*)"V.DeepCopy() -> vtkArray\nC++: vtkArray *DeepCopy()\n\n"},
  {(char*)"GetValue", PyvtkDenseArray_IaE_GetValue, METH_VARARGS,
   (char*)"V.GetValue(int) -> int\nC++: const signed char &GetValue(CoordinateT i)\nV.GetValue(int, int) -> int\nC++: const signed char &GetValue(CoordinateT i, CoordinateT j)\nV.GetValue(int, int, int) -> int\nC++: const signed char &GetValue(CoordinateT i, CoordinateT j,\n    CoordinateT k)\nV.GetValue(vtkArrayCoordinates) -> int\nC++: const signed char &GetValue(\n    const vtkArrayCoordinates &coordinates)\n\n"},
  {(char*)"GetValueN", PyvtkDenseArray_IaE_GetValueN, METH_VARARGS,
   (char*)"V.GetValueN(int) -> int\nC++: const signed char &GetValueN(const SizeT n)\n\n"},
  {(char*)"SetValue", PyvtkDenseArray_IaE_SetValue, METH_VARARGS,
   (char*)"V.SetValue(int, int)\nC++: void SetValue(CoordinateT i, const signed char &value)\nV.SetValue(int, int, int)\nC++: void SetValue(CoordinateT i, CoordinateT j,\n    const signed char &value)\nV.SetValue(int, int, int, int)\nC++: void SetValue(CoordinateT i, CoordinateT j, CoordinateT k,\n    const signed char &value)\nV.SetValue(vtkArrayCoordinates, int)\nC++: void SetValue(const vtkArrayCoordinates &coordinates,\n    const signed char &value)\n\n"},
  {(char*)"SetValueN", PyvtkDenseArray_IaE_SetValueN, METH_VARARGS,
   (char*)"V.SetValueN(int, int)\nC++: void SetValueN(const SizeT n, const signed char &value)\n\n"},
  {(char*)"Fill", PyvtkDenseArray_IaE_Fill, METH_VARARGS,
   (char*)"V.Fill(int)\nC++: void Fill(const signed char &value)\n\nFills every element in the array with the given value.\n"},
  {(char*)"GetStorage", PyvtkDenseArray_IaE_GetStorage, METH_VARARGS,
   (char*)"V.GetStorage() -> (int, ...)\nC++: signed char *GetStorage()\n\nReturns a mutable reference to the underlying storage.  Values\nare stored contiguously with fortran ordering.  Use at your own\nrisk!\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkDenseArray_IaE_StaticNew()
{
  return vtkDenseArray<signed char>::New();
}

PyObject *PyVTKClass_vtkDenseArray_IaENew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkDenseArray_IaE_StaticNew,
    PyvtkDenseArray_IaE_Methods,
    typeid(vtkDenseArray<signed char>).name(), modulename,
    "vtkDenseArray_IaE", "vtkDenseArray_IaE",
    PyvtkDenseArray_IaE_Doc(),
    PyVTKClass_vtkTypedArray_IaENew(modulename));
  return cls;
}

const char **PyvtkDenseArray_IaE_Doc()
{
  static const char *docstring[] = {
    "vtkDenseArray - Contiguous storage for N-way arrays.\n\n",
    "Superclass: vtkTypedArray[int8]\n\n",
    "vtkDenseArray is a concrete vtkArray implementation that stores\nvalues using a contiguous block of memory.  Values are stored with\nfortran ordering, meaning that if you iterated over the memory block,\nthe left-most coordinates would vary the fastest.\n\nIn addition to the retrieval and update methods provided by\nvtkTypedArray, vtkDenseArray provides methods to:\n\nFill the entire array with a specific",
    " value.\n\nRetrieve a pointer to the storage memory block.\n\nSee Also:\n\nvtkArray, vtkTypedArray, vtkSparseArray\n\nThanks:\n\nDeveloped by Timothy M. Shead (tshead@sandia.gov) at Sandia National\nLaboratories.\n\n",
    NULL
  };

  return docstring;
}

extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkDenseArray_IhENew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkTypedArray_IhENew
extern "C" { PyObject *PyVTKClass_vtkTypedArray_IhENew(const char *); }
#define DECLARED_PyVTKClass_vtkTypedArray_IhENew
#endif

static const char **PyvtkDenseArray_IhE_Doc();


static PyObject *
PyvtkDenseArray_IhE_IsDense(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsDense");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<unsigned char> *op = static_cast<vtkDenseArray<unsigned char> *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->IsDense() :
      op->vtkDenseArray<unsigned char>::IsDense());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDenseArray_IhE_GetExtents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetExtents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<unsigned char> *op = static_cast<vtkDenseArray<unsigned char> *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const vtkArrayExtents *tempr = (ap.IsBound() ?
      &op->GetExtents() :
      &op->vtkDenseArray<unsigned char>::GetExtents());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildSpecialObject(tempr, "vtkArrayExtents");
      }
    }

  return result;
}


static PyObject *
PyvtkDenseArray_IhE_GetNonNullSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNonNullSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<unsigned char> *op = static_cast<vtkDenseArray<unsigned char> *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned long long tempr = (ap.IsBound() ?
      op->GetNonNullSize() :
      op->vtkDenseArray<unsigned char>::GetNonNullSize());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDenseArray_IhE_GetCoordinatesN(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCoordinatesN");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<unsigned char> *op = static_cast<vtkDenseArray<unsigned char> *>(vp);

  unsigned long long temp0;
  vtkArrayCoordinates *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetSpecialObject(temp1, "vtkArrayCoordinates"))
    {
    if (ap.IsBound())
      {
      op->GetCoordinatesN(temp0, *temp1);
      }
    else
      {
      op->vtkDenseArray<unsigned char>::GetCoordinatesN(temp0, *temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDenseArray_IhE_DeepCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeepCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<unsigned char> *op = static_cast<vtkDenseArray<unsigned char> *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkArray *tempr = (ap.IsBound() ?
      op->DeepCopy() :
      op->vtkDenseArray<unsigned char>::DeepCopy());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDenseArray_IhE_GetValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<unsigned char> *op = static_cast<vtkDenseArray<unsigned char> *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    const unsigned char *tempr = (ap.IsBound() ?
      &op->GetValue(temp0) :
      &op->vtkDenseArray<unsigned char>::GetValue(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(*tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkDenseArray_IhE_GetValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<unsigned char> *op = static_cast<vtkDenseArray<unsigned char> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    const unsigned char *tempr = (ap.IsBound() ?
      &op->GetValue(temp0, temp1) :
      &op->vtkDenseArray<unsigned char>::GetValue(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(*tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkDenseArray_IhE_GetValue_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<unsigned char> *op = static_cast<vtkDenseArray<unsigned char> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  vtkIdType temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    const unsigned char *tempr = (ap.IsBound() ?
      &op->GetValue(temp0, temp1, temp2) :
      &op->vtkDenseArray<unsigned char>::GetValue(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(*tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkDenseArray_IhE_GetValue_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<unsigned char> *op = static_cast<vtkDenseArray<unsigned char> *>(vp);

  vtkArrayCoordinates *temp0 = NULL;
  PyObject *pobj0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkArrayCoordinates"))
    {
    const unsigned char *tempr = (ap.IsBound() ?
      &op->GetValue(*temp0) :
      &op->vtkDenseArray<unsigned char>::GetValue(*temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(*tempr);
      }
    }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkDenseArray_IhE_GetValue_Methods[] = {
  {NULL, PyvtkDenseArray_IhE_GetValue_s1, METH_VARARGS,
   (char*)"@L"},
  {NULL, PyvtkDenseArray_IhE_GetValue_s4, METH_VARARGS,
   (char*)"@O &vtkArrayCoordinates"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkDenseArray_IhE_GetValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkDenseArray_IhE_GetValue_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkDenseArray_IhE_GetValue_s2(self, args);
    case 3:
      return PyvtkDenseArray_IhE_GetValue_s3(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetValue");
  return NULL;
}



static PyObject *
PyvtkDenseArray_IhE_GetValueN(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValueN");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<unsigned char> *op = static_cast<vtkDenseArray<unsigned char> *>(vp);

  unsigned long long temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    const unsigned char *tempr = (ap.IsBound() ?
      &op->GetValueN(temp0) :
      &op->vtkDenseArray<unsigned char>::GetValueN(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(*tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDenseArray_IhE_SetValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<unsigned char> *op = static_cast<vtkDenseArray<unsigned char> *>(vp);

  vtkIdType temp0;
  unsigned char temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetValue(temp0, temp1);
      }
    else
      {
      op->vtkDenseArray<unsigned char>::SetValue(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkDenseArray_IhE_SetValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<unsigned char> *op = static_cast<vtkDenseArray<unsigned char> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  unsigned char temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      op->SetValue(temp0, temp1, temp2);
      }
    else
      {
      op->vtkDenseArray<unsigned char>::SetValue(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkDenseArray_IhE_SetValue_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<unsigned char> *op = static_cast<vtkDenseArray<unsigned char> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  vtkIdType temp2;
  unsigned char temp3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
    {
    if (ap.IsBound())
      {
      op->SetValue(temp0, temp1, temp2, temp3);
      }
    else
      {
      op->vtkDenseArray<unsigned char>::SetValue(temp0, temp1, temp2, temp3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkDenseArray_IhE_SetValue_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<unsigned char> *op = static_cast<vtkDenseArray<unsigned char> *>(vp);

  vtkArrayCoordinates *temp0 = NULL;
  PyObject *pobj0 = NULL;
  unsigned char temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkArrayCoordinates") &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetValue(*temp0, temp1);
      }
    else
      {
      op->vtkDenseArray<unsigned char>::SetValue(*temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkDenseArray_IhE_SetValue_Methods[] = {
  {NULL, PyvtkDenseArray_IhE_SetValue_s1, METH_VARARGS,
   (char*)"@Lb"},
  {NULL, PyvtkDenseArray_IhE_SetValue_s4, METH_VARARGS,
   (char*)"@Ob &vtkArrayCoordinates"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkDenseArray_IhE_SetValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkDenseArray_IhE_SetValue_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkDenseArray_IhE_SetValue_s2(self, args);
    case 4:
      return PyvtkDenseArray_IhE_SetValue_s3(self, args);
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetValue");
  return NULL;
}



static PyObject *
PyvtkDenseArray_IhE_SetValueN(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValueN");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<unsigned char> *op = static_cast<vtkDenseArray<unsigned char> *>(vp);

  unsigned long long temp0;
  unsigned char temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetValueN(temp0, temp1);
      }
    else
      {
      op->vtkDenseArray<unsigned char>::SetValueN(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDenseArray_IhE_Fill(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Fill");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<unsigned char> *op = static_cast<vtkDenseArray<unsigned char> *>(vp);

  unsigned char temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->Fill(temp0);
      }
    else
      {
      op->vtkDenseArray<unsigned char>::Fill(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDenseArray_IhE_GetStorage(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStorage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<unsigned char> *op = static_cast<vtkDenseArray<unsigned char> *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned char *tempr = (ap.IsBound() ?
      op->GetStorage() :
      op->vtkDenseArray<unsigned char>::GetStorage());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkDenseArray_IhE_Methods[] = {
  {(char*)"IsDense", PyvtkDenseArray_IhE_IsDense, METH_VARARGS,
   (char*)"V.IsDense() -> bool\nC++: bool IsDense()\n\n"},
  {(char*)"GetExtents", PyvtkDenseArray_IhE_GetExtents, METH_VARARGS,
   (char*)"V.GetExtents() -> vtkArrayExtents\nC++: const vtkArrayExtents &GetExtents()\n\n"},
  {(char*)"GetNonNullSize", PyvtkDenseArray_IhE_GetNonNullSize, METH_VARARGS,
   (char*)"V.GetNonNullSize() -> int\nC++: SizeT GetNonNullSize()\n\n"},
  {(char*)"GetCoordinatesN", PyvtkDenseArray_IhE_GetCoordinatesN, METH_VARARGS,
   (char*)"V.GetCoordinatesN(int, vtkArrayCoordinates)\nC++: void GetCoordinatesN(const SizeT n,\n    vtkArrayCoordinates &coordinates)\n\n"},
  {(char*)"DeepCopy", PyvtkDenseArray_IhE_DeepCopy, METH_VARARGS,
   (char*)"V.DeepCopy() -> vtkArray\nC++: vtkArray *DeepCopy()\n\n"},
  {(char*)"GetValue", PyvtkDenseArray_IhE_GetValue, METH_VARARGS,
   (char*)"V.GetValue(int) -> int\nC++: const unsigned char &GetValue(CoordinateT i)\nV.GetValue(int, int) -> int\nC++: const unsigned char &GetValue(CoordinateT i, CoordinateT j)\nV.GetValue(int, int, int) -> int\nC++: const unsigned char &GetValue(CoordinateT i, CoordinateT j,\n    CoordinateT k)\nV.GetValue(vtkArrayCoordinates) -> int\nC++: const unsigned char &GetValue(\n    const vtkArrayCoordinates &coordinates)\n\n"},
  {(char*)"GetValueN", PyvtkDenseArray_IhE_GetValueN, METH_VARARGS,
   (char*)"V.GetValueN(int) -> int\nC++: const unsigned char &GetValueN(const SizeT n)\n\n"},
  {(char*)"SetValue", PyvtkDenseArray_IhE_SetValue, METH_VARARGS,
   (char*)"V.SetValue(int, int)\nC++: void SetValue(CoordinateT i, const unsigned char &value)\nV.SetValue(int, int, int)\nC++: void SetValue(CoordinateT i, CoordinateT j,\n    const unsigned char &value)\nV.SetValue(int, int, int, int)\nC++: void SetValue(CoordinateT i, CoordinateT j, CoordinateT k,\n    const unsigned char &value)\nV.SetValue(vtkArrayCoordinates, int)\nC++: void SetValue(const vtkArrayCoordinates &coordinates,\n    const unsigned char &value)\n\n"},
  {(char*)"SetValueN", PyvtkDenseArray_IhE_SetValueN, METH_VARARGS,
   (char*)"V.SetValueN(int, int)\nC++: void SetValueN(const SizeT n, const unsigned char &value)\n\n"},
  {(char*)"Fill", PyvtkDenseArray_IhE_Fill, METH_VARARGS,
   (char*)"V.Fill(int)\nC++: void Fill(const unsigned char &value)\n\nFills every element in the array with the given value.\n"},
  {(char*)"GetStorage", PyvtkDenseArray_IhE_GetStorage, METH_VARARGS,
   (char*)"V.GetStorage() -> (int, ...)\nC++: unsigned char *GetStorage()\n\nReturns a mutable reference to the underlying storage.  Values\nare stored contiguously with fortran ordering.  Use at your own\nrisk!\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkDenseArray_IhE_StaticNew()
{
  return vtkDenseArray<unsigned char>::New();
}

PyObject *PyVTKClass_vtkDenseArray_IhENew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkDenseArray_IhE_StaticNew,
    PyvtkDenseArray_IhE_Methods,
    typeid(vtkDenseArray<unsigned char>).name(), modulename,
    "vtkDenseArray_IhE", "vtkDenseArray_IhE",
    PyvtkDenseArray_IhE_Doc(),
    PyVTKClass_vtkTypedArray_IhENew(modulename));
  return cls;
}

const char **PyvtkDenseArray_IhE_Doc()
{
  static const char *docstring[] = {
    "vtkDenseArray - Contiguous storage for N-way arrays.\n\n",
    "Superclass: vtkTypedArray[uint8]\n\n",
    "vtkDenseArray is a concrete vtkArray implementation that stores\nvalues using a contiguous block of memory.  Values are stored with\nfortran ordering, meaning that if you iterated over the memory block,\nthe left-most coordinates would vary the fastest.\n\nIn addition to the retrieval and update methods provided by\nvtkTypedArray, vtkDenseArray provides methods to:\n\nFill the entire array with a specific",
    " value.\n\nRetrieve a pointer to the storage memory block.\n\nSee Also:\n\nvtkArray, vtkTypedArray, vtkSparseArray\n\nThanks:\n\nDeveloped by Timothy M. Shead (tshead@sandia.gov) at Sandia National\nLaboratories.\n\n",
    NULL
  };

  return docstring;
}

extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkDenseArray_IsENew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkTypedArray_IsENew
extern "C" { PyObject *PyVTKClass_vtkTypedArray_IsENew(const char *); }
#define DECLARED_PyVTKClass_vtkTypedArray_IsENew
#endif

static const char **PyvtkDenseArray_IsE_Doc();


static PyObject *
PyvtkDenseArray_IsE_IsDense(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsDense");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<short> *op = static_cast<vtkDenseArray<short> *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->IsDense() :
      op->vtkDenseArray<short>::IsDense());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDenseArray_IsE_GetExtents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetExtents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<short> *op = static_cast<vtkDenseArray<short> *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const vtkArrayExtents *tempr = (ap.IsBound() ?
      &op->GetExtents() :
      &op->vtkDenseArray<short>::GetExtents());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildSpecialObject(tempr, "vtkArrayExtents");
      }
    }

  return result;
}


static PyObject *
PyvtkDenseArray_IsE_GetNonNullSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNonNullSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<short> *op = static_cast<vtkDenseArray<short> *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned long long tempr = (ap.IsBound() ?
      op->GetNonNullSize() :
      op->vtkDenseArray<short>::GetNonNullSize());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDenseArray_IsE_GetCoordinatesN(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCoordinatesN");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<short> *op = static_cast<vtkDenseArray<short> *>(vp);

  unsigned long long temp0;
  vtkArrayCoordinates *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetSpecialObject(temp1, "vtkArrayCoordinates"))
    {
    if (ap.IsBound())
      {
      op->GetCoordinatesN(temp0, *temp1);
      }
    else
      {
      op->vtkDenseArray<short>::GetCoordinatesN(temp0, *temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDenseArray_IsE_DeepCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeepCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<short> *op = static_cast<vtkDenseArray<short> *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkArray *tempr = (ap.IsBound() ?
      op->DeepCopy() :
      op->vtkDenseArray<short>::DeepCopy());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDenseArray_IsE_GetValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<short> *op = static_cast<vtkDenseArray<short> *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    const short *tempr = (ap.IsBound() ?
      &op->GetValue(temp0) :
      &op->vtkDenseArray<short>::GetValue(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(*tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkDenseArray_IsE_GetValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<short> *op = static_cast<vtkDenseArray<short> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    const short *tempr = (ap.IsBound() ?
      &op->GetValue(temp0, temp1) :
      &op->vtkDenseArray<short>::GetValue(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(*tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkDenseArray_IsE_GetValue_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<short> *op = static_cast<vtkDenseArray<short> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  vtkIdType temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    const short *tempr = (ap.IsBound() ?
      &op->GetValue(temp0, temp1, temp2) :
      &op->vtkDenseArray<short>::GetValue(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(*tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkDenseArray_IsE_GetValue_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<short> *op = static_cast<vtkDenseArray<short> *>(vp);

  vtkArrayCoordinates *temp0 = NULL;
  PyObject *pobj0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkArrayCoordinates"))
    {
    const short *tempr = (ap.IsBound() ?
      &op->GetValue(*temp0) :
      &op->vtkDenseArray<short>::GetValue(*temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(*tempr);
      }
    }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkDenseArray_IsE_GetValue_Methods[] = {
  {NULL, PyvtkDenseArray_IsE_GetValue_s1, METH_VARARGS,
   (char*)"@L"},
  {NULL, PyvtkDenseArray_IsE_GetValue_s4, METH_VARARGS,
   (char*)"@O &vtkArrayCoordinates"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkDenseArray_IsE_GetValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkDenseArray_IsE_GetValue_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkDenseArray_IsE_GetValue_s2(self, args);
    case 3:
      return PyvtkDenseArray_IsE_GetValue_s3(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetValue");
  return NULL;
}



static PyObject *
PyvtkDenseArray_IsE_GetValueN(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValueN");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<short> *op = static_cast<vtkDenseArray<short> *>(vp);

  unsigned long long temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    const short *tempr = (ap.IsBound() ?
      &op->GetValueN(temp0) :
      &op->vtkDenseArray<short>::GetValueN(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(*tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDenseArray_IsE_SetValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<short> *op = static_cast<vtkDenseArray<short> *>(vp);

  vtkIdType temp0;
  short temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetValue(temp0, temp1);
      }
    else
      {
      op->vtkDenseArray<short>::SetValue(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkDenseArray_IsE_SetValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<short> *op = static_cast<vtkDenseArray<short> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  short temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      op->SetValue(temp0, temp1, temp2);
      }
    else
      {
      op->vtkDenseArray<short>::SetValue(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkDenseArray_IsE_SetValue_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<short> *op = static_cast<vtkDenseArray<short> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  vtkIdType temp2;
  short temp3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
    {
    if (ap.IsBound())
      {
      op->SetValue(temp0, temp1, temp2, temp3);
      }
    else
      {
      op->vtkDenseArray<short>::SetValue(temp0, temp1, temp2, temp3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkDenseArray_IsE_SetValue_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<short> *op = static_cast<vtkDenseArray<short> *>(vp);

  vtkArrayCoordinates *temp0 = NULL;
  PyObject *pobj0 = NULL;
  short temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkArrayCoordinates") &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetValue(*temp0, temp1);
      }
    else
      {
      op->vtkDenseArray<short>::SetValue(*temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkDenseArray_IsE_SetValue_Methods[] = {
  {NULL, PyvtkDenseArray_IsE_SetValue_s1, METH_VARARGS,
   (char*)"@Lh"},
  {NULL, PyvtkDenseArray_IsE_SetValue_s4, METH_VARARGS,
   (char*)"@Oh &vtkArrayCoordinates"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkDenseArray_IsE_SetValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkDenseArray_IsE_SetValue_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkDenseArray_IsE_SetValue_s2(self, args);
    case 4:
      return PyvtkDenseArray_IsE_SetValue_s3(self, args);
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetValue");
  return NULL;
}



static PyObject *
PyvtkDenseArray_IsE_SetValueN(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValueN");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<short> *op = static_cast<vtkDenseArray<short> *>(vp);

  unsigned long long temp0;
  short temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetValueN(temp0, temp1);
      }
    else
      {
      op->vtkDenseArray<short>::SetValueN(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDenseArray_IsE_Fill(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Fill");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<short> *op = static_cast<vtkDenseArray<short> *>(vp);

  short temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->Fill(temp0);
      }
    else
      {
      op->vtkDenseArray<short>::Fill(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDenseArray_IsE_GetStorage(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStorage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<short> *op = static_cast<vtkDenseArray<short> *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    short *tempr = (ap.IsBound() ?
      op->GetStorage() :
      op->vtkDenseArray<short>::GetStorage());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkDenseArray_IsE_Methods[] = {
  {(char*)"IsDense", PyvtkDenseArray_IsE_IsDense, METH_VARARGS,
   (char*)"V.IsDense() -> bool\nC++: bool IsDense()\n\n"},
  {(char*)"GetExtents", PyvtkDenseArray_IsE_GetExtents, METH_VARARGS,
   (char*)"V.GetExtents() -> vtkArrayExtents\nC++: const vtkArrayExtents &GetExtents()\n\n"},
  {(char*)"GetNonNullSize", PyvtkDenseArray_IsE_GetNonNullSize, METH_VARARGS,
   (char*)"V.GetNonNullSize() -> int\nC++: SizeT GetNonNullSize()\n\n"},
  {(char*)"GetCoordinatesN", PyvtkDenseArray_IsE_GetCoordinatesN, METH_VARARGS,
   (char*)"V.GetCoordinatesN(int, vtkArrayCoordinates)\nC++: void GetCoordinatesN(const SizeT n,\n    vtkArrayCoordinates &coordinates)\n\n"},
  {(char*)"DeepCopy", PyvtkDenseArray_IsE_DeepCopy, METH_VARARGS,
   (char*)"V.DeepCopy() -> vtkArray\nC++: vtkArray *DeepCopy()\n\n"},
  {(char*)"GetValue", PyvtkDenseArray_IsE_GetValue, METH_VARARGS,
   (char*)"V.GetValue(int) -> int\nC++: const short &GetValue(CoordinateT i)\nV.GetValue(int, int) -> int\nC++: const short &GetValue(CoordinateT i, CoordinateT j)\nV.GetValue(int, int, int) -> int\nC++: const short &GetValue(CoordinateT i, CoordinateT j,\n    CoordinateT k)\nV.GetValue(vtkArrayCoordinates) -> int\nC++: const short &GetValue(const vtkArrayCoordinates &coordinates)\n\n"},
  {(char*)"GetValueN", PyvtkDenseArray_IsE_GetValueN, METH_VARARGS,
   (char*)"V.GetValueN(int) -> int\nC++: const short &GetValueN(const SizeT n)\n\n"},
  {(char*)"SetValue", PyvtkDenseArray_IsE_SetValue, METH_VARARGS,
   (char*)"V.SetValue(int, int)\nC++: void SetValue(CoordinateT i, const short &value)\nV.SetValue(int, int, int)\nC++: void SetValue(CoordinateT i, CoordinateT j,\n    const short &value)\nV.SetValue(int, int, int, int)\nC++: void SetValue(CoordinateT i, CoordinateT j, CoordinateT k,\n    const short &value)\nV.SetValue(vtkArrayCoordinates, int)\nC++: void SetValue(const vtkArrayCoordinates &coordinates,\n    const short &value)\n\n"},
  {(char*)"SetValueN", PyvtkDenseArray_IsE_SetValueN, METH_VARARGS,
   (char*)"V.SetValueN(int, int)\nC++: void SetValueN(const SizeT n, const short &value)\n\n"},
  {(char*)"Fill", PyvtkDenseArray_IsE_Fill, METH_VARARGS,
   (char*)"V.Fill(int)\nC++: void Fill(const short &value)\n\nFills every element in the array with the given value.\n"},
  {(char*)"GetStorage", PyvtkDenseArray_IsE_GetStorage, METH_VARARGS,
   (char*)"V.GetStorage() -> (int, ...)\nC++: short *GetStorage()\n\nReturns a mutable reference to the underlying storage.  Values\nare stored contiguously with fortran ordering.  Use at your own\nrisk!\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkDenseArray_IsE_StaticNew()
{
  return vtkDenseArray<short>::New();
}

PyObject *PyVTKClass_vtkDenseArray_IsENew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkDenseArray_IsE_StaticNew,
    PyvtkDenseArray_IsE_Methods,
    typeid(vtkDenseArray<short>).name(), modulename,
    "vtkDenseArray_IsE", "vtkDenseArray_IsE",
    PyvtkDenseArray_IsE_Doc(),
    PyVTKClass_vtkTypedArray_IsENew(modulename));
  return cls;
}

const char **PyvtkDenseArray_IsE_Doc()
{
  static const char *docstring[] = {
    "vtkDenseArray - Contiguous storage for N-way arrays.\n\n",
    "Superclass: vtkTypedArray[int16]\n\n",
    "vtkDenseArray is a concrete vtkArray implementation that stores\nvalues using a contiguous block of memory.  Values are stored with\nfortran ordering, meaning that if you iterated over the memory block,\nthe left-most coordinates would vary the fastest.\n\nIn addition to the retrieval and update methods provided by\nvtkTypedArray, vtkDenseArray provides methods to:\n\nFill the entire array with a specific",
    " value.\n\nRetrieve a pointer to the storage memory block.\n\nSee Also:\n\nvtkArray, vtkTypedArray, vtkSparseArray\n\nThanks:\n\nDeveloped by Timothy M. Shead (tshead@sandia.gov) at Sandia National\nLaboratories.\n\n",
    NULL
  };

  return docstring;
}

extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkDenseArray_ItENew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkTypedArray_ItENew
extern "C" { PyObject *PyVTKClass_vtkTypedArray_ItENew(const char *); }
#define DECLARED_PyVTKClass_vtkTypedArray_ItENew
#endif

static const char **PyvtkDenseArray_ItE_Doc();


static PyObject *
PyvtkDenseArray_ItE_IsDense(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsDense");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<unsigned short> *op = static_cast<vtkDenseArray<unsigned short> *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->IsDense() :
      op->vtkDenseArray<unsigned short>::IsDense());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDenseArray_ItE_GetExtents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetExtents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<unsigned short> *op = static_cast<vtkDenseArray<unsigned short> *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const vtkArrayExtents *tempr = (ap.IsBound() ?
      &op->GetExtents() :
      &op->vtkDenseArray<unsigned short>::GetExtents());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildSpecialObject(tempr, "vtkArrayExtents");
      }
    }

  return result;
}


static PyObject *
PyvtkDenseArray_ItE_GetNonNullSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNonNullSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<unsigned short> *op = static_cast<vtkDenseArray<unsigned short> *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned long long tempr = (ap.IsBound() ?
      op->GetNonNullSize() :
      op->vtkDenseArray<unsigned short>::GetNonNullSize());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDenseArray_ItE_GetCoordinatesN(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCoordinatesN");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<unsigned short> *op = static_cast<vtkDenseArray<unsigned short> *>(vp);

  unsigned long long temp0;
  vtkArrayCoordinates *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetSpecialObject(temp1, "vtkArrayCoordinates"))
    {
    if (ap.IsBound())
      {
      op->GetCoordinatesN(temp0, *temp1);
      }
    else
      {
      op->vtkDenseArray<unsigned short>::GetCoordinatesN(temp0, *temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDenseArray_ItE_DeepCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeepCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<unsigned short> *op = static_cast<vtkDenseArray<unsigned short> *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkArray *tempr = (ap.IsBound() ?
      op->DeepCopy() :
      op->vtkDenseArray<unsigned short>::DeepCopy());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDenseArray_ItE_GetValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<unsigned short> *op = static_cast<vtkDenseArray<unsigned short> *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    const unsigned short *tempr = (ap.IsBound() ?
      &op->GetValue(temp0) :
      &op->vtkDenseArray<unsigned short>::GetValue(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(*tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkDenseArray_ItE_GetValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<unsigned short> *op = static_cast<vtkDenseArray<unsigned short> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    const unsigned short *tempr = (ap.IsBound() ?
      &op->GetValue(temp0, temp1) :
      &op->vtkDenseArray<unsigned short>::GetValue(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(*tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkDenseArray_ItE_GetValue_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<unsigned short> *op = static_cast<vtkDenseArray<unsigned short> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  vtkIdType temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    const unsigned short *tempr = (ap.IsBound() ?
      &op->GetValue(temp0, temp1, temp2) :
      &op->vtkDenseArray<unsigned short>::GetValue(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(*tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkDenseArray_ItE_GetValue_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<unsigned short> *op = static_cast<vtkDenseArray<unsigned short> *>(vp);

  vtkArrayCoordinates *temp0 = NULL;
  PyObject *pobj0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkArrayCoordinates"))
    {
    const unsigned short *tempr = (ap.IsBound() ?
      &op->GetValue(*temp0) :
      &op->vtkDenseArray<unsigned short>::GetValue(*temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(*tempr);
      }
    }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkDenseArray_ItE_GetValue_Methods[] = {
  {NULL, PyvtkDenseArray_ItE_GetValue_s1, METH_VARARGS,
   (char*)"@L"},
  {NULL, PyvtkDenseArray_ItE_GetValue_s4, METH_VARARGS,
   (char*)"@O &vtkArrayCoordinates"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkDenseArray_ItE_GetValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkDenseArray_ItE_GetValue_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkDenseArray_ItE_GetValue_s2(self, args);
    case 3:
      return PyvtkDenseArray_ItE_GetValue_s3(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetValue");
  return NULL;
}



static PyObject *
PyvtkDenseArray_ItE_GetValueN(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValueN");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<unsigned short> *op = static_cast<vtkDenseArray<unsigned short> *>(vp);

  unsigned long long temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    const unsigned short *tempr = (ap.IsBound() ?
      &op->GetValueN(temp0) :
      &op->vtkDenseArray<unsigned short>::GetValueN(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(*tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDenseArray_ItE_SetValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<unsigned short> *op = static_cast<vtkDenseArray<unsigned short> *>(vp);

  vtkIdType temp0;
  unsigned short temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetValue(temp0, temp1);
      }
    else
      {
      op->vtkDenseArray<unsigned short>::SetValue(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkDenseArray_ItE_SetValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<unsigned short> *op = static_cast<vtkDenseArray<unsigned short> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  unsigned short temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      op->SetValue(temp0, temp1, temp2);
      }
    else
      {
      op->vtkDenseArray<unsigned short>::SetValue(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkDenseArray_ItE_SetValue_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<unsigned short> *op = static_cast<vtkDenseArray<unsigned short> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  vtkIdType temp2;
  unsigned short temp3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
    {
    if (ap.IsBound())
      {
      op->SetValue(temp0, temp1, temp2, temp3);
      }
    else
      {
      op->vtkDenseArray<unsigned short>::SetValue(temp0, temp1, temp2, temp3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkDenseArray_ItE_SetValue_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<unsigned short> *op = static_cast<vtkDenseArray<unsigned short> *>(vp);

  vtkArrayCoordinates *temp0 = NULL;
  PyObject *pobj0 = NULL;
  unsigned short temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkArrayCoordinates") &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetValue(*temp0, temp1);
      }
    else
      {
      op->vtkDenseArray<unsigned short>::SetValue(*temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkDenseArray_ItE_SetValue_Methods[] = {
  {NULL, PyvtkDenseArray_ItE_SetValue_s1, METH_VARARGS,
   (char*)"@LH"},
  {NULL, PyvtkDenseArray_ItE_SetValue_s4, METH_VARARGS,
   (char*)"@OH &vtkArrayCoordinates"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkDenseArray_ItE_SetValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkDenseArray_ItE_SetValue_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkDenseArray_ItE_SetValue_s2(self, args);
    case 4:
      return PyvtkDenseArray_ItE_SetValue_s3(self, args);
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetValue");
  return NULL;
}



static PyObject *
PyvtkDenseArray_ItE_SetValueN(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValueN");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<unsigned short> *op = static_cast<vtkDenseArray<unsigned short> *>(vp);

  unsigned long long temp0;
  unsigned short temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetValueN(temp0, temp1);
      }
    else
      {
      op->vtkDenseArray<unsigned short>::SetValueN(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDenseArray_ItE_Fill(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Fill");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<unsigned short> *op = static_cast<vtkDenseArray<unsigned short> *>(vp);

  unsigned short temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->Fill(temp0);
      }
    else
      {
      op->vtkDenseArray<unsigned short>::Fill(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDenseArray_ItE_GetStorage(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStorage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<unsigned short> *op = static_cast<vtkDenseArray<unsigned short> *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned short *tempr = (ap.IsBound() ?
      op->GetStorage() :
      op->vtkDenseArray<unsigned short>::GetStorage());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkDenseArray_ItE_Methods[] = {
  {(char*)"IsDense", PyvtkDenseArray_ItE_IsDense, METH_VARARGS,
   (char*)"V.IsDense() -> bool\nC++: bool IsDense()\n\n"},
  {(char*)"GetExtents", PyvtkDenseArray_ItE_GetExtents, METH_VARARGS,
   (char*)"V.GetExtents() -> vtkArrayExtents\nC++: const vtkArrayExtents &GetExtents()\n\n"},
  {(char*)"GetNonNullSize", PyvtkDenseArray_ItE_GetNonNullSize, METH_VARARGS,
   (char*)"V.GetNonNullSize() -> int\nC++: SizeT GetNonNullSize()\n\n"},
  {(char*)"GetCoordinatesN", PyvtkDenseArray_ItE_GetCoordinatesN, METH_VARARGS,
   (char*)"V.GetCoordinatesN(int, vtkArrayCoordinates)\nC++: void GetCoordinatesN(const SizeT n,\n    vtkArrayCoordinates &coordinates)\n\n"},
  {(char*)"DeepCopy", PyvtkDenseArray_ItE_DeepCopy, METH_VARARGS,
   (char*)"V.DeepCopy() -> vtkArray\nC++: vtkArray *DeepCopy()\n\n"},
  {(char*)"GetValue", PyvtkDenseArray_ItE_GetValue, METH_VARARGS,
   (char*)"V.GetValue(int) -> int\nC++: const unsigned short &GetValue(CoordinateT i)\nV.GetValue(int, int) -> int\nC++: const unsigned short &GetValue(CoordinateT i, CoordinateT j)\nV.GetValue(int, int, int) -> int\nC++: const unsigned short &GetValue(CoordinateT i, CoordinateT j,\n    CoordinateT k)\nV.GetValue(vtkArrayCoordinates) -> int\nC++: const unsigned short &GetValue(\n    const vtkArrayCoordinates &coordinates)\n\n"},
  {(char*)"GetValueN", PyvtkDenseArray_ItE_GetValueN, METH_VARARGS,
   (char*)"V.GetValueN(int) -> int\nC++: const unsigned short &GetValueN(const SizeT n)\n\n"},
  {(char*)"SetValue", PyvtkDenseArray_ItE_SetValue, METH_VARARGS,
   (char*)"V.SetValue(int, int)\nC++: void SetValue(CoordinateT i, const unsigned short &value)\nV.SetValue(int, int, int)\nC++: void SetValue(CoordinateT i, CoordinateT j,\n    const unsigned short &value)\nV.SetValue(int, int, int, int)\nC++: void SetValue(CoordinateT i, CoordinateT j, CoordinateT k,\n    const unsigned short &value)\nV.SetValue(vtkArrayCoordinates, int)\nC++: void SetValue(const vtkArrayCoordinates &coordinates,\n    const unsigned short &value)\n\n"},
  {(char*)"SetValueN", PyvtkDenseArray_ItE_SetValueN, METH_VARARGS,
   (char*)"V.SetValueN(int, int)\nC++: void SetValueN(const SizeT n, const unsigned short &value)\n\n"},
  {(char*)"Fill", PyvtkDenseArray_ItE_Fill, METH_VARARGS,
   (char*)"V.Fill(int)\nC++: void Fill(const unsigned short &value)\n\nFills every element in the array with the given value.\n"},
  {(char*)"GetStorage", PyvtkDenseArray_ItE_GetStorage, METH_VARARGS,
   (char*)"V.GetStorage() -> (int, ...)\nC++: unsigned short *GetStorage()\n\nReturns a mutable reference to the underlying storage.  Values\nare stored contiguously with fortran ordering.  Use at your own\nrisk!\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkDenseArray_ItE_StaticNew()
{
  return vtkDenseArray<unsigned short>::New();
}

PyObject *PyVTKClass_vtkDenseArray_ItENew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkDenseArray_ItE_StaticNew,
    PyvtkDenseArray_ItE_Methods,
    typeid(vtkDenseArray<unsigned short>).name(), modulename,
    "vtkDenseArray_ItE", "vtkDenseArray_ItE",
    PyvtkDenseArray_ItE_Doc(),
    PyVTKClass_vtkTypedArray_ItENew(modulename));
  return cls;
}

const char **PyvtkDenseArray_ItE_Doc()
{
  static const char *docstring[] = {
    "vtkDenseArray - Contiguous storage for N-way arrays.\n\n",
    "Superclass: vtkTypedArray[uint16]\n\n",
    "vtkDenseArray is a concrete vtkArray implementation that stores\nvalues using a contiguous block of memory.  Values are stored with\nfortran ordering, meaning that if you iterated over the memory block,\nthe left-most coordinates would vary the fastest.\n\nIn addition to the retrieval and update methods provided by\nvtkTypedArray, vtkDenseArray provides methods to:\n\nFill the entire array with a specific",
    " value.\n\nRetrieve a pointer to the storage memory block.\n\nSee Also:\n\nvtkArray, vtkTypedArray, vtkSparseArray\n\nThanks:\n\nDeveloped by Timothy M. Shead (tshead@sandia.gov) at Sandia National\nLaboratories.\n\n",
    NULL
  };

  return docstring;
}

extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkDenseArray_IiENew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkTypedArray_IiENew
extern "C" { PyObject *PyVTKClass_vtkTypedArray_IiENew(const char *); }
#define DECLARED_PyVTKClass_vtkTypedArray_IiENew
#endif

static const char **PyvtkDenseArray_IiE_Doc();


static PyObject *
PyvtkDenseArray_IiE_IsDense(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsDense");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<int> *op = static_cast<vtkDenseArray<int> *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->IsDense() :
      op->vtkDenseArray<int>::IsDense());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDenseArray_IiE_GetExtents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetExtents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<int> *op = static_cast<vtkDenseArray<int> *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const vtkArrayExtents *tempr = (ap.IsBound() ?
      &op->GetExtents() :
      &op->vtkDenseArray<int>::GetExtents());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildSpecialObject(tempr, "vtkArrayExtents");
      }
    }

  return result;
}


static PyObject *
PyvtkDenseArray_IiE_GetNonNullSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNonNullSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<int> *op = static_cast<vtkDenseArray<int> *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned long long tempr = (ap.IsBound() ?
      op->GetNonNullSize() :
      op->vtkDenseArray<int>::GetNonNullSize());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDenseArray_IiE_GetCoordinatesN(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCoordinatesN");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<int> *op = static_cast<vtkDenseArray<int> *>(vp);

  unsigned long long temp0;
  vtkArrayCoordinates *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetSpecialObject(temp1, "vtkArrayCoordinates"))
    {
    if (ap.IsBound())
      {
      op->GetCoordinatesN(temp0, *temp1);
      }
    else
      {
      op->vtkDenseArray<int>::GetCoordinatesN(temp0, *temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDenseArray_IiE_DeepCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeepCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<int> *op = static_cast<vtkDenseArray<int> *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkArray *tempr = (ap.IsBound() ?
      op->DeepCopy() :
      op->vtkDenseArray<int>::DeepCopy());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDenseArray_IiE_GetValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<int> *op = static_cast<vtkDenseArray<int> *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    const int *tempr = (ap.IsBound() ?
      &op->GetValue(temp0) :
      &op->vtkDenseArray<int>::GetValue(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(*tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkDenseArray_IiE_GetValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<int> *op = static_cast<vtkDenseArray<int> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    const int *tempr = (ap.IsBound() ?
      &op->GetValue(temp0, temp1) :
      &op->vtkDenseArray<int>::GetValue(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(*tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkDenseArray_IiE_GetValue_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<int> *op = static_cast<vtkDenseArray<int> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  vtkIdType temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    const int *tempr = (ap.IsBound() ?
      &op->GetValue(temp0, temp1, temp2) :
      &op->vtkDenseArray<int>::GetValue(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(*tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkDenseArray_IiE_GetValue_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<int> *op = static_cast<vtkDenseArray<int> *>(vp);

  vtkArrayCoordinates *temp0 = NULL;
  PyObject *pobj0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkArrayCoordinates"))
    {
    const int *tempr = (ap.IsBound() ?
      &op->GetValue(*temp0) :
      &op->vtkDenseArray<int>::GetValue(*temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(*tempr);
      }
    }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkDenseArray_IiE_GetValue_Methods[] = {
  {NULL, PyvtkDenseArray_IiE_GetValue_s1, METH_VARARGS,
   (char*)"@L"},
  {NULL, PyvtkDenseArray_IiE_GetValue_s4, METH_VARARGS,
   (char*)"@O &vtkArrayCoordinates"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkDenseArray_IiE_GetValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkDenseArray_IiE_GetValue_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkDenseArray_IiE_GetValue_s2(self, args);
    case 3:
      return PyvtkDenseArray_IiE_GetValue_s3(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetValue");
  return NULL;
}



static PyObject *
PyvtkDenseArray_IiE_GetValueN(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValueN");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<int> *op = static_cast<vtkDenseArray<int> *>(vp);

  unsigned long long temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    const int *tempr = (ap.IsBound() ?
      &op->GetValueN(temp0) :
      &op->vtkDenseArray<int>::GetValueN(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(*tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDenseArray_IiE_SetValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<int> *op = static_cast<vtkDenseArray<int> *>(vp);

  vtkIdType temp0;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetValue(temp0, temp1);
      }
    else
      {
      op->vtkDenseArray<int>::SetValue(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkDenseArray_IiE_SetValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<int> *op = static_cast<vtkDenseArray<int> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  int temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      op->SetValue(temp0, temp1, temp2);
      }
    else
      {
      op->vtkDenseArray<int>::SetValue(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkDenseArray_IiE_SetValue_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<int> *op = static_cast<vtkDenseArray<int> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  vtkIdType temp2;
  int temp3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
    {
    if (ap.IsBound())
      {
      op->SetValue(temp0, temp1, temp2, temp3);
      }
    else
      {
      op->vtkDenseArray<int>::SetValue(temp0, temp1, temp2, temp3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkDenseArray_IiE_SetValue_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<int> *op = static_cast<vtkDenseArray<int> *>(vp);

  vtkArrayCoordinates *temp0 = NULL;
  PyObject *pobj0 = NULL;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkArrayCoordinates") &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetValue(*temp0, temp1);
      }
    else
      {
      op->vtkDenseArray<int>::SetValue(*temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkDenseArray_IiE_SetValue_Methods[] = {
  {NULL, PyvtkDenseArray_IiE_SetValue_s1, METH_VARARGS,
   (char*)"@Li"},
  {NULL, PyvtkDenseArray_IiE_SetValue_s4, METH_VARARGS,
   (char*)"@Oi &vtkArrayCoordinates"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkDenseArray_IiE_SetValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkDenseArray_IiE_SetValue_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkDenseArray_IiE_SetValue_s2(self, args);
    case 4:
      return PyvtkDenseArray_IiE_SetValue_s3(self, args);
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetValue");
  return NULL;
}



static PyObject *
PyvtkDenseArray_IiE_SetValueN(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValueN");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<int> *op = static_cast<vtkDenseArray<int> *>(vp);

  unsigned long long temp0;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetValueN(temp0, temp1);
      }
    else
      {
      op->vtkDenseArray<int>::SetValueN(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDenseArray_IiE_Fill(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Fill");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<int> *op = static_cast<vtkDenseArray<int> *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->Fill(temp0);
      }
    else
      {
      op->vtkDenseArray<int>::Fill(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDenseArray_IiE_GetStorage(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStorage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<int> *op = static_cast<vtkDenseArray<int> *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int *tempr = (ap.IsBound() ?
      op->GetStorage() :
      op->vtkDenseArray<int>::GetStorage());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkDenseArray_IiE_Methods[] = {
  {(char*)"IsDense", PyvtkDenseArray_IiE_IsDense, METH_VARARGS,
   (char*)"V.IsDense() -> bool\nC++: bool IsDense()\n\n"},
  {(char*)"GetExtents", PyvtkDenseArray_IiE_GetExtents, METH_VARARGS,
   (char*)"V.GetExtents() -> vtkArrayExtents\nC++: const vtkArrayExtents &GetExtents()\n\n"},
  {(char*)"GetNonNullSize", PyvtkDenseArray_IiE_GetNonNullSize, METH_VARARGS,
   (char*)"V.GetNonNullSize() -> int\nC++: SizeT GetNonNullSize()\n\n"},
  {(char*)"GetCoordinatesN", PyvtkDenseArray_IiE_GetCoordinatesN, METH_VARARGS,
   (char*)"V.GetCoordinatesN(int, vtkArrayCoordinates)\nC++: void GetCoordinatesN(const SizeT n,\n    vtkArrayCoordinates &coordinates)\n\n"},
  {(char*)"DeepCopy", PyvtkDenseArray_IiE_DeepCopy, METH_VARARGS,
   (char*)"V.DeepCopy() -> vtkArray\nC++: vtkArray *DeepCopy()\n\n"},
  {(char*)"GetValue", PyvtkDenseArray_IiE_GetValue, METH_VARARGS,
   (char*)"V.GetValue(int) -> int\nC++: const int &GetValue(CoordinateT i)\nV.GetValue(int, int) -> int\nC++: const int &GetValue(CoordinateT i, CoordinateT j)\nV.GetValue(int, int, int) -> int\nC++: const int &GetValue(CoordinateT i, CoordinateT j,\n    CoordinateT k)\nV.GetValue(vtkArrayCoordinates) -> int\nC++: const int &GetValue(const vtkArrayCoordinates &coordinates)\n\n"},
  {(char*)"GetValueN", PyvtkDenseArray_IiE_GetValueN, METH_VARARGS,
   (char*)"V.GetValueN(int) -> int\nC++: const int &GetValueN(const SizeT n)\n\n"},
  {(char*)"SetValue", PyvtkDenseArray_IiE_SetValue, METH_VARARGS,
   (char*)"V.SetValue(int, int)\nC++: void SetValue(CoordinateT i, const int &value)\nV.SetValue(int, int, int)\nC++: void SetValue(CoordinateT i, CoordinateT j, const int &value)\nV.SetValue(int, int, int, int)\nC++: void SetValue(CoordinateT i, CoordinateT j, CoordinateT k,\n    const int &value)\nV.SetValue(vtkArrayCoordinates, int)\nC++: void SetValue(const vtkArrayCoordinates &coordinates,\n    const int &value)\n\n"},
  {(char*)"SetValueN", PyvtkDenseArray_IiE_SetValueN, METH_VARARGS,
   (char*)"V.SetValueN(int, int)\nC++: void SetValueN(const SizeT n, const int &value)\n\n"},
  {(char*)"Fill", PyvtkDenseArray_IiE_Fill, METH_VARARGS,
   (char*)"V.Fill(int)\nC++: void Fill(const int &value)\n\nFills every element in the array with the given value.\n"},
  {(char*)"GetStorage", PyvtkDenseArray_IiE_GetStorage, METH_VARARGS,
   (char*)"V.GetStorage() -> (int, ...)\nC++: int *GetStorage()\n\nReturns a mutable reference to the underlying storage.  Values\nare stored contiguously with fortran ordering.  Use at your own\nrisk!\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkDenseArray_IiE_StaticNew()
{
  return vtkDenseArray<int>::New();
}

PyObject *PyVTKClass_vtkDenseArray_IiENew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkDenseArray_IiE_StaticNew,
    PyvtkDenseArray_IiE_Methods,
    typeid(vtkDenseArray<int>).name(), modulename,
    "vtkDenseArray_IiE", "vtkDenseArray_IiE",
    PyvtkDenseArray_IiE_Doc(),
    PyVTKClass_vtkTypedArray_IiENew(modulename));
  return cls;
}

const char **PyvtkDenseArray_IiE_Doc()
{
  static const char *docstring[] = {
    "vtkDenseArray - Contiguous storage for N-way arrays.\n\n",
    "Superclass: vtkTypedArray[int32]\n\n",
    "vtkDenseArray is a concrete vtkArray implementation that stores\nvalues using a contiguous block of memory.  Values are stored with\nfortran ordering, meaning that if you iterated over the memory block,\nthe left-most coordinates would vary the fastest.\n\nIn addition to the retrieval and update methods provided by\nvtkTypedArray, vtkDenseArray provides methods to:\n\nFill the entire array with a specific",
    " value.\n\nRetrieve a pointer to the storage memory block.\n\nSee Also:\n\nvtkArray, vtkTypedArray, vtkSparseArray\n\nThanks:\n\nDeveloped by Timothy M. Shead (tshead@sandia.gov) at Sandia National\nLaboratories.\n\n",
    NULL
  };

  return docstring;
}

extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkDenseArray_IjENew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkTypedArray_IjENew
extern "C" { PyObject *PyVTKClass_vtkTypedArray_IjENew(const char *); }
#define DECLARED_PyVTKClass_vtkTypedArray_IjENew
#endif

static const char **PyvtkDenseArray_IjE_Doc();


static PyObject *
PyvtkDenseArray_IjE_IsDense(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsDense");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<unsigned int> *op = static_cast<vtkDenseArray<unsigned int> *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->IsDense() :
      op->vtkDenseArray<unsigned int>::IsDense());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDenseArray_IjE_GetExtents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetExtents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<unsigned int> *op = static_cast<vtkDenseArray<unsigned int> *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const vtkArrayExtents *tempr = (ap.IsBound() ?
      &op->GetExtents() :
      &op->vtkDenseArray<unsigned int>::GetExtents());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildSpecialObject(tempr, "vtkArrayExtents");
      }
    }

  return result;
}


static PyObject *
PyvtkDenseArray_IjE_GetNonNullSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNonNullSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<unsigned int> *op = static_cast<vtkDenseArray<unsigned int> *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned long long tempr = (ap.IsBound() ?
      op->GetNonNullSize() :
      op->vtkDenseArray<unsigned int>::GetNonNullSize());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDenseArray_IjE_GetCoordinatesN(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCoordinatesN");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<unsigned int> *op = static_cast<vtkDenseArray<unsigned int> *>(vp);

  unsigned long long temp0;
  vtkArrayCoordinates *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetSpecialObject(temp1, "vtkArrayCoordinates"))
    {
    if (ap.IsBound())
      {
      op->GetCoordinatesN(temp0, *temp1);
      }
    else
      {
      op->vtkDenseArray<unsigned int>::GetCoordinatesN(temp0, *temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDenseArray_IjE_DeepCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeepCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<unsigned int> *op = static_cast<vtkDenseArray<unsigned int> *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkArray *tempr = (ap.IsBound() ?
      op->DeepCopy() :
      op->vtkDenseArray<unsigned int>::DeepCopy());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDenseArray_IjE_GetValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<unsigned int> *op = static_cast<vtkDenseArray<unsigned int> *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    const unsigned int *tempr = (ap.IsBound() ?
      &op->GetValue(temp0) :
      &op->vtkDenseArray<unsigned int>::GetValue(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(*tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkDenseArray_IjE_GetValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<unsigned int> *op = static_cast<vtkDenseArray<unsigned int> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    const unsigned int *tempr = (ap.IsBound() ?
      &op->GetValue(temp0, temp1) :
      &op->vtkDenseArray<unsigned int>::GetValue(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(*tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkDenseArray_IjE_GetValue_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<unsigned int> *op = static_cast<vtkDenseArray<unsigned int> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  vtkIdType temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    const unsigned int *tempr = (ap.IsBound() ?
      &op->GetValue(temp0, temp1, temp2) :
      &op->vtkDenseArray<unsigned int>::GetValue(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(*tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkDenseArray_IjE_GetValue_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<unsigned int> *op = static_cast<vtkDenseArray<unsigned int> *>(vp);

  vtkArrayCoordinates *temp0 = NULL;
  PyObject *pobj0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkArrayCoordinates"))
    {
    const unsigned int *tempr = (ap.IsBound() ?
      &op->GetValue(*temp0) :
      &op->vtkDenseArray<unsigned int>::GetValue(*temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(*tempr);
      }
    }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkDenseArray_IjE_GetValue_Methods[] = {
  {NULL, PyvtkDenseArray_IjE_GetValue_s1, METH_VARARGS,
   (char*)"@L"},
  {NULL, PyvtkDenseArray_IjE_GetValue_s4, METH_VARARGS,
   (char*)"@O &vtkArrayCoordinates"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkDenseArray_IjE_GetValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkDenseArray_IjE_GetValue_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkDenseArray_IjE_GetValue_s2(self, args);
    case 3:
      return PyvtkDenseArray_IjE_GetValue_s3(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetValue");
  return NULL;
}



static PyObject *
PyvtkDenseArray_IjE_GetValueN(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValueN");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<unsigned int> *op = static_cast<vtkDenseArray<unsigned int> *>(vp);

  unsigned long long temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    const unsigned int *tempr = (ap.IsBound() ?
      &op->GetValueN(temp0) :
      &op->vtkDenseArray<unsigned int>::GetValueN(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(*tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDenseArray_IjE_SetValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<unsigned int> *op = static_cast<vtkDenseArray<unsigned int> *>(vp);

  vtkIdType temp0;
  unsigned int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetValue(temp0, temp1);
      }
    else
      {
      op->vtkDenseArray<unsigned int>::SetValue(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkDenseArray_IjE_SetValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<unsigned int> *op = static_cast<vtkDenseArray<unsigned int> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  unsigned int temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      op->SetValue(temp0, temp1, temp2);
      }
    else
      {
      op->vtkDenseArray<unsigned int>::SetValue(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkDenseArray_IjE_SetValue_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<unsigned int> *op = static_cast<vtkDenseArray<unsigned int> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  vtkIdType temp2;
  unsigned int temp3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
    {
    if (ap.IsBound())
      {
      op->SetValue(temp0, temp1, temp2, temp3);
      }
    else
      {
      op->vtkDenseArray<unsigned int>::SetValue(temp0, temp1, temp2, temp3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkDenseArray_IjE_SetValue_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<unsigned int> *op = static_cast<vtkDenseArray<unsigned int> *>(vp);

  vtkArrayCoordinates *temp0 = NULL;
  PyObject *pobj0 = NULL;
  unsigned int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkArrayCoordinates") &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetValue(*temp0, temp1);
      }
    else
      {
      op->vtkDenseArray<unsigned int>::SetValue(*temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkDenseArray_IjE_SetValue_Methods[] = {
  {NULL, PyvtkDenseArray_IjE_SetValue_s1, METH_VARARGS,
   (char*)"@LI"},
  {NULL, PyvtkDenseArray_IjE_SetValue_s4, METH_VARARGS,
   (char*)"@OI &vtkArrayCoordinates"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkDenseArray_IjE_SetValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkDenseArray_IjE_SetValue_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkDenseArray_IjE_SetValue_s2(self, args);
    case 4:
      return PyvtkDenseArray_IjE_SetValue_s3(self, args);
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetValue");
  return NULL;
}



static PyObject *
PyvtkDenseArray_IjE_SetValueN(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValueN");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<unsigned int> *op = static_cast<vtkDenseArray<unsigned int> *>(vp);

  unsigned long long temp0;
  unsigned int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetValueN(temp0, temp1);
      }
    else
      {
      op->vtkDenseArray<unsigned int>::SetValueN(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDenseArray_IjE_Fill(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Fill");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<unsigned int> *op = static_cast<vtkDenseArray<unsigned int> *>(vp);

  unsigned int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->Fill(temp0);
      }
    else
      {
      op->vtkDenseArray<unsigned int>::Fill(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDenseArray_IjE_GetStorage(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStorage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<unsigned int> *op = static_cast<vtkDenseArray<unsigned int> *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned int *tempr = (ap.IsBound() ?
      op->GetStorage() :
      op->vtkDenseArray<unsigned int>::GetStorage());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkDenseArray_IjE_Methods[] = {
  {(char*)"IsDense", PyvtkDenseArray_IjE_IsDense, METH_VARARGS,
   (char*)"V.IsDense() -> bool\nC++: bool IsDense()\n\n"},
  {(char*)"GetExtents", PyvtkDenseArray_IjE_GetExtents, METH_VARARGS,
   (char*)"V.GetExtents() -> vtkArrayExtents\nC++: const vtkArrayExtents &GetExtents()\n\n"},
  {(char*)"GetNonNullSize", PyvtkDenseArray_IjE_GetNonNullSize, METH_VARARGS,
   (char*)"V.GetNonNullSize() -> int\nC++: SizeT GetNonNullSize()\n\n"},
  {(char*)"GetCoordinatesN", PyvtkDenseArray_IjE_GetCoordinatesN, METH_VARARGS,
   (char*)"V.GetCoordinatesN(int, vtkArrayCoordinates)\nC++: void GetCoordinatesN(const SizeT n,\n    vtkArrayCoordinates &coordinates)\n\n"},
  {(char*)"DeepCopy", PyvtkDenseArray_IjE_DeepCopy, METH_VARARGS,
   (char*)"V.DeepCopy() -> vtkArray\nC++: vtkArray *DeepCopy()\n\n"},
  {(char*)"GetValue", PyvtkDenseArray_IjE_GetValue, METH_VARARGS,
   (char*)"V.GetValue(int) -> int\nC++: const unsigned int &GetValue(CoordinateT i)\nV.GetValue(int, int) -> int\nC++: const unsigned int &GetValue(CoordinateT i, CoordinateT j)\nV.GetValue(int, int, int) -> int\nC++: const unsigned int &GetValue(CoordinateT i, CoordinateT j,\n    CoordinateT k)\nV.GetValue(vtkArrayCoordinates) -> int\nC++: const unsigned int &GetValue(\n    const vtkArrayCoordinates &coordinates)\n\n"},
  {(char*)"GetValueN", PyvtkDenseArray_IjE_GetValueN, METH_VARARGS,
   (char*)"V.GetValueN(int) -> int\nC++: const unsigned int &GetValueN(const SizeT n)\n\n"},
  {(char*)"SetValue", PyvtkDenseArray_IjE_SetValue, METH_VARARGS,
   (char*)"V.SetValue(int, int)\nC++: void SetValue(CoordinateT i, const unsigned int &value)\nV.SetValue(int, int, int)\nC++: void SetValue(CoordinateT i, CoordinateT j,\n    const unsigned int &value)\nV.SetValue(int, int, int, int)\nC++: void SetValue(CoordinateT i, CoordinateT j, CoordinateT k,\n    const unsigned int &value)\nV.SetValue(vtkArrayCoordinates, int)\nC++: void SetValue(const vtkArrayCoordinates &coordinates,\n    const unsigned int &value)\n\n"},
  {(char*)"SetValueN", PyvtkDenseArray_IjE_SetValueN, METH_VARARGS,
   (char*)"V.SetValueN(int, int)\nC++: void SetValueN(const SizeT n, const unsigned int &value)\n\n"},
  {(char*)"Fill", PyvtkDenseArray_IjE_Fill, METH_VARARGS,
   (char*)"V.Fill(int)\nC++: void Fill(const unsigned int &value)\n\nFills every element in the array with the given value.\n"},
  {(char*)"GetStorage", PyvtkDenseArray_IjE_GetStorage, METH_VARARGS,
   (char*)"V.GetStorage() -> (int, ...)\nC++: unsigned int *GetStorage()\n\nReturns a mutable reference to the underlying storage.  Values\nare stored contiguously with fortran ordering.  Use at your own\nrisk!\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkDenseArray_IjE_StaticNew()
{
  return vtkDenseArray<unsigned int>::New();
}

PyObject *PyVTKClass_vtkDenseArray_IjENew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkDenseArray_IjE_StaticNew,
    PyvtkDenseArray_IjE_Methods,
    typeid(vtkDenseArray<unsigned int>).name(), modulename,
    "vtkDenseArray_IjE", "vtkDenseArray_IjE",
    PyvtkDenseArray_IjE_Doc(),
    PyVTKClass_vtkTypedArray_IjENew(modulename));
  return cls;
}

const char **PyvtkDenseArray_IjE_Doc()
{
  static const char *docstring[] = {
    "vtkDenseArray - Contiguous storage for N-way arrays.\n\n",
    "Superclass: vtkTypedArray[uint32]\n\n",
    "vtkDenseArray is a concrete vtkArray implementation that stores\nvalues using a contiguous block of memory.  Values are stored with\nfortran ordering, meaning that if you iterated over the memory block,\nthe left-most coordinates would vary the fastest.\n\nIn addition to the retrieval and update methods provided by\nvtkTypedArray, vtkDenseArray provides methods to:\n\nFill the entire array with a specific",
    " value.\n\nRetrieve a pointer to the storage memory block.\n\nSee Also:\n\nvtkArray, vtkTypedArray, vtkSparseArray\n\nThanks:\n\nDeveloped by Timothy M. Shead (tshead@sandia.gov) at Sandia National\nLaboratories.\n\n",
    NULL
  };

  return docstring;
}

extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkDenseArray_IlENew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkTypedArray_IlENew
extern "C" { PyObject *PyVTKClass_vtkTypedArray_IlENew(const char *); }
#define DECLARED_PyVTKClass_vtkTypedArray_IlENew
#endif

static const char **PyvtkDenseArray_IlE_Doc();


static PyObject *
PyvtkDenseArray_IlE_IsDense(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsDense");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<long> *op = static_cast<vtkDenseArray<long> *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->IsDense() :
      op->vtkDenseArray<long>::IsDense());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDenseArray_IlE_GetExtents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetExtents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<long> *op = static_cast<vtkDenseArray<long> *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const vtkArrayExtents *tempr = (ap.IsBound() ?
      &op->GetExtents() :
      &op->vtkDenseArray<long>::GetExtents());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildSpecialObject(tempr, "vtkArrayExtents");
      }
    }

  return result;
}


static PyObject *
PyvtkDenseArray_IlE_GetNonNullSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNonNullSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<long> *op = static_cast<vtkDenseArray<long> *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned long long tempr = (ap.IsBound() ?
      op->GetNonNullSize() :
      op->vtkDenseArray<long>::GetNonNullSize());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDenseArray_IlE_GetCoordinatesN(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCoordinatesN");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<long> *op = static_cast<vtkDenseArray<long> *>(vp);

  unsigned long long temp0;
  vtkArrayCoordinates *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetSpecialObject(temp1, "vtkArrayCoordinates"))
    {
    if (ap.IsBound())
      {
      op->GetCoordinatesN(temp0, *temp1);
      }
    else
      {
      op->vtkDenseArray<long>::GetCoordinatesN(temp0, *temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDenseArray_IlE_DeepCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeepCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<long> *op = static_cast<vtkDenseArray<long> *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkArray *tempr = (ap.IsBound() ?
      op->DeepCopy() :
      op->vtkDenseArray<long>::DeepCopy());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDenseArray_IlE_GetValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<long> *op = static_cast<vtkDenseArray<long> *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    const long *tempr = (ap.IsBound() ?
      &op->GetValue(temp0) :
      &op->vtkDenseArray<long>::GetValue(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(*tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkDenseArray_IlE_GetValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<long> *op = static_cast<vtkDenseArray<long> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    const long *tempr = (ap.IsBound() ?
      &op->GetValue(temp0, temp1) :
      &op->vtkDenseArray<long>::GetValue(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(*tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkDenseArray_IlE_GetValue_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<long> *op = static_cast<vtkDenseArray<long> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  vtkIdType temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    const long *tempr = (ap.IsBound() ?
      &op->GetValue(temp0, temp1, temp2) :
      &op->vtkDenseArray<long>::GetValue(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(*tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkDenseArray_IlE_GetValue_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<long> *op = static_cast<vtkDenseArray<long> *>(vp);

  vtkArrayCoordinates *temp0 = NULL;
  PyObject *pobj0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkArrayCoordinates"))
    {
    const long *tempr = (ap.IsBound() ?
      &op->GetValue(*temp0) :
      &op->vtkDenseArray<long>::GetValue(*temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(*tempr);
      }
    }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkDenseArray_IlE_GetValue_Methods[] = {
  {NULL, PyvtkDenseArray_IlE_GetValue_s1, METH_VARARGS,
   (char*)"@L"},
  {NULL, PyvtkDenseArray_IlE_GetValue_s4, METH_VARARGS,
   (char*)"@O &vtkArrayCoordinates"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkDenseArray_IlE_GetValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkDenseArray_IlE_GetValue_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkDenseArray_IlE_GetValue_s2(self, args);
    case 3:
      return PyvtkDenseArray_IlE_GetValue_s3(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetValue");
  return NULL;
}



static PyObject *
PyvtkDenseArray_IlE_GetValueN(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValueN");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<long> *op = static_cast<vtkDenseArray<long> *>(vp);

  unsigned long long temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    const long *tempr = (ap.IsBound() ?
      &op->GetValueN(temp0) :
      &op->vtkDenseArray<long>::GetValueN(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(*tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDenseArray_IlE_SetValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<long> *op = static_cast<vtkDenseArray<long> *>(vp);

  vtkIdType temp0;
  long temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetValue(temp0, temp1);
      }
    else
      {
      op->vtkDenseArray<long>::SetValue(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkDenseArray_IlE_SetValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<long> *op = static_cast<vtkDenseArray<long> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  long temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      op->SetValue(temp0, temp1, temp2);
      }
    else
      {
      op->vtkDenseArray<long>::SetValue(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkDenseArray_IlE_SetValue_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<long> *op = static_cast<vtkDenseArray<long> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  vtkIdType temp2;
  long temp3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
    {
    if (ap.IsBound())
      {
      op->SetValue(temp0, temp1, temp2, temp3);
      }
    else
      {
      op->vtkDenseArray<long>::SetValue(temp0, temp1, temp2, temp3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkDenseArray_IlE_SetValue_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<long> *op = static_cast<vtkDenseArray<long> *>(vp);

  vtkArrayCoordinates *temp0 = NULL;
  PyObject *pobj0 = NULL;
  long temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkArrayCoordinates") &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetValue(*temp0, temp1);
      }
    else
      {
      op->vtkDenseArray<long>::SetValue(*temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkDenseArray_IlE_SetValue_Methods[] = {
  {NULL, PyvtkDenseArray_IlE_SetValue_s1, METH_VARARGS,
   (char*)"@Ll"},
  {NULL, PyvtkDenseArray_IlE_SetValue_s4, METH_VARARGS,
   (char*)"@Ol &vtkArrayCoordinates"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkDenseArray_IlE_SetValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkDenseArray_IlE_SetValue_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkDenseArray_IlE_SetValue_s2(self, args);
    case 4:
      return PyvtkDenseArray_IlE_SetValue_s3(self, args);
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetValue");
  return NULL;
}



static PyObject *
PyvtkDenseArray_IlE_SetValueN(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValueN");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<long> *op = static_cast<vtkDenseArray<long> *>(vp);

  unsigned long long temp0;
  long temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetValueN(temp0, temp1);
      }
    else
      {
      op->vtkDenseArray<long>::SetValueN(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDenseArray_IlE_Fill(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Fill");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<long> *op = static_cast<vtkDenseArray<long> *>(vp);

  long temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->Fill(temp0);
      }
    else
      {
      op->vtkDenseArray<long>::Fill(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDenseArray_IlE_GetStorage(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStorage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<long> *op = static_cast<vtkDenseArray<long> *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    long *tempr = (ap.IsBound() ?
      op->GetStorage() :
      op->vtkDenseArray<long>::GetStorage());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkDenseArray_IlE_Methods[] = {
  {(char*)"IsDense", PyvtkDenseArray_IlE_IsDense, METH_VARARGS,
   (char*)"V.IsDense() -> bool\nC++: bool IsDense()\n\n"},
  {(char*)"GetExtents", PyvtkDenseArray_IlE_GetExtents, METH_VARARGS,
   (char*)"V.GetExtents() -> vtkArrayExtents\nC++: const vtkArrayExtents &GetExtents()\n\n"},
  {(char*)"GetNonNullSize", PyvtkDenseArray_IlE_GetNonNullSize, METH_VARARGS,
   (char*)"V.GetNonNullSize() -> int\nC++: SizeT GetNonNullSize()\n\n"},
  {(char*)"GetCoordinatesN", PyvtkDenseArray_IlE_GetCoordinatesN, METH_VARARGS,
   (char*)"V.GetCoordinatesN(int, vtkArrayCoordinates)\nC++: void GetCoordinatesN(const SizeT n,\n    vtkArrayCoordinates &coordinates)\n\n"},
  {(char*)"DeepCopy", PyvtkDenseArray_IlE_DeepCopy, METH_VARARGS,
   (char*)"V.DeepCopy() -> vtkArray\nC++: vtkArray *DeepCopy()\n\n"},
  {(char*)"GetValue", PyvtkDenseArray_IlE_GetValue, METH_VARARGS,
   (char*)"V.GetValue(int) -> int\nC++: const long &GetValue(CoordinateT i)\nV.GetValue(int, int) -> int\nC++: const long &GetValue(CoordinateT i, CoordinateT j)\nV.GetValue(int, int, int) -> int\nC++: const long &GetValue(CoordinateT i, CoordinateT j,\n    CoordinateT k)\nV.GetValue(vtkArrayCoordinates) -> int\nC++: const long &GetValue(const vtkArrayCoordinates &coordinates)\n\n"},
  {(char*)"GetValueN", PyvtkDenseArray_IlE_GetValueN, METH_VARARGS,
   (char*)"V.GetValueN(int) -> int\nC++: const long &GetValueN(const SizeT n)\n\n"},
  {(char*)"SetValue", PyvtkDenseArray_IlE_SetValue, METH_VARARGS,
   (char*)"V.SetValue(int, int)\nC++: void SetValue(CoordinateT i, const long &value)\nV.SetValue(int, int, int)\nC++: void SetValue(CoordinateT i, CoordinateT j,\n    const long &value)\nV.SetValue(int, int, int, int)\nC++: void SetValue(CoordinateT i, CoordinateT j, CoordinateT k,\n    const long &value)\nV.SetValue(vtkArrayCoordinates, int)\nC++: void SetValue(const vtkArrayCoordinates &coordinates,\n    const long &value)\n\n"},
  {(char*)"SetValueN", PyvtkDenseArray_IlE_SetValueN, METH_VARARGS,
   (char*)"V.SetValueN(int, int)\nC++: void SetValueN(const SizeT n, const long &value)\n\n"},
  {(char*)"Fill", PyvtkDenseArray_IlE_Fill, METH_VARARGS,
   (char*)"V.Fill(int)\nC++: void Fill(const long &value)\n\nFills every element in the array with the given value.\n"},
  {(char*)"GetStorage", PyvtkDenseArray_IlE_GetStorage, METH_VARARGS,
   (char*)"V.GetStorage() -> (int, ...)\nC++: long *GetStorage()\n\nReturns a mutable reference to the underlying storage.  Values\nare stored contiguously with fortran ordering.  Use at your own\nrisk!\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkDenseArray_IlE_StaticNew()
{
  return vtkDenseArray<long>::New();
}

PyObject *PyVTKClass_vtkDenseArray_IlENew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkDenseArray_IlE_StaticNew,
    PyvtkDenseArray_IlE_Methods,
    typeid(vtkDenseArray<long>).name(), modulename,
    "vtkDenseArray_IlE", "vtkDenseArray_IlE",
    PyvtkDenseArray_IlE_Doc(),
    PyVTKClass_vtkTypedArray_IlENew(modulename));
  return cls;
}

const char **PyvtkDenseArray_IlE_Doc()
{
  static const char *docstring[] = {
    "vtkDenseArray - Contiguous storage for N-way arrays.\n\n",
    "Superclass: vtkTypedArray[int]\n\n",
    "vtkDenseArray is a concrete vtkArray implementation that stores\nvalues using a contiguous block of memory.  Values are stored with\nfortran ordering, meaning that if you iterated over the memory block,\nthe left-most coordinates would vary the fastest.\n\nIn addition to the retrieval and update methods provided by\nvtkTypedArray, vtkDenseArray provides methods to:\n\nFill the entire array with a specific",
    " value.\n\nRetrieve a pointer to the storage memory block.\n\nSee Also:\n\nvtkArray, vtkTypedArray, vtkSparseArray\n\nThanks:\n\nDeveloped by Timothy M. Shead (tshead@sandia.gov) at Sandia National\nLaboratories.\n\n",
    NULL
  };

  return docstring;
}

extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkDenseArray_ImENew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkTypedArray_ImENew
extern "C" { PyObject *PyVTKClass_vtkTypedArray_ImENew(const char *); }
#define DECLARED_PyVTKClass_vtkTypedArray_ImENew
#endif

static const char **PyvtkDenseArray_ImE_Doc();


static PyObject *
PyvtkDenseArray_ImE_IsDense(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsDense");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<unsigned long> *op = static_cast<vtkDenseArray<unsigned long> *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->IsDense() :
      op->vtkDenseArray<unsigned long>::IsDense());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDenseArray_ImE_GetExtents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetExtents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<unsigned long> *op = static_cast<vtkDenseArray<unsigned long> *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const vtkArrayExtents *tempr = (ap.IsBound() ?
      &op->GetExtents() :
      &op->vtkDenseArray<unsigned long>::GetExtents());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildSpecialObject(tempr, "vtkArrayExtents");
      }
    }

  return result;
}


static PyObject *
PyvtkDenseArray_ImE_GetNonNullSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNonNullSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<unsigned long> *op = static_cast<vtkDenseArray<unsigned long> *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned long long tempr = (ap.IsBound() ?
      op->GetNonNullSize() :
      op->vtkDenseArray<unsigned long>::GetNonNullSize());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDenseArray_ImE_GetCoordinatesN(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCoordinatesN");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<unsigned long> *op = static_cast<vtkDenseArray<unsigned long> *>(vp);

  unsigned long long temp0;
  vtkArrayCoordinates *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetSpecialObject(temp1, "vtkArrayCoordinates"))
    {
    if (ap.IsBound())
      {
      op->GetCoordinatesN(temp0, *temp1);
      }
    else
      {
      op->vtkDenseArray<unsigned long>::GetCoordinatesN(temp0, *temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDenseArray_ImE_DeepCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeepCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<unsigned long> *op = static_cast<vtkDenseArray<unsigned long> *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkArray *tempr = (ap.IsBound() ?
      op->DeepCopy() :
      op->vtkDenseArray<unsigned long>::DeepCopy());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDenseArray_ImE_GetValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<unsigned long> *op = static_cast<vtkDenseArray<unsigned long> *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    const unsigned long *tempr = (ap.IsBound() ?
      &op->GetValue(temp0) :
      &op->vtkDenseArray<unsigned long>::GetValue(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(*tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkDenseArray_ImE_GetValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<unsigned long> *op = static_cast<vtkDenseArray<unsigned long> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    const unsigned long *tempr = (ap.IsBound() ?
      &op->GetValue(temp0, temp1) :
      &op->vtkDenseArray<unsigned long>::GetValue(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(*tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkDenseArray_ImE_GetValue_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<unsigned long> *op = static_cast<vtkDenseArray<unsigned long> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  vtkIdType temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    const unsigned long *tempr = (ap.IsBound() ?
      &op->GetValue(temp0, temp1, temp2) :
      &op->vtkDenseArray<unsigned long>::GetValue(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(*tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkDenseArray_ImE_GetValue_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<unsigned long> *op = static_cast<vtkDenseArray<unsigned long> *>(vp);

  vtkArrayCoordinates *temp0 = NULL;
  PyObject *pobj0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkArrayCoordinates"))
    {
    const unsigned long *tempr = (ap.IsBound() ?
      &op->GetValue(*temp0) :
      &op->vtkDenseArray<unsigned long>::GetValue(*temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(*tempr);
      }
    }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkDenseArray_ImE_GetValue_Methods[] = {
  {NULL, PyvtkDenseArray_ImE_GetValue_s1, METH_VARARGS,
   (char*)"@L"},
  {NULL, PyvtkDenseArray_ImE_GetValue_s4, METH_VARARGS,
   (char*)"@O &vtkArrayCoordinates"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkDenseArray_ImE_GetValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkDenseArray_ImE_GetValue_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkDenseArray_ImE_GetValue_s2(self, args);
    case 3:
      return PyvtkDenseArray_ImE_GetValue_s3(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetValue");
  return NULL;
}



static PyObject *
PyvtkDenseArray_ImE_GetValueN(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValueN");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<unsigned long> *op = static_cast<vtkDenseArray<unsigned long> *>(vp);

  unsigned long long temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    const unsigned long *tempr = (ap.IsBound() ?
      &op->GetValueN(temp0) :
      &op->vtkDenseArray<unsigned long>::GetValueN(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(*tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDenseArray_ImE_SetValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<unsigned long> *op = static_cast<vtkDenseArray<unsigned long> *>(vp);

  vtkIdType temp0;
  unsigned long temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetValue(temp0, temp1);
      }
    else
      {
      op->vtkDenseArray<unsigned long>::SetValue(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkDenseArray_ImE_SetValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<unsigned long> *op = static_cast<vtkDenseArray<unsigned long> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  unsigned long temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      op->SetValue(temp0, temp1, temp2);
      }
    else
      {
      op->vtkDenseArray<unsigned long>::SetValue(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkDenseArray_ImE_SetValue_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<unsigned long> *op = static_cast<vtkDenseArray<unsigned long> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  vtkIdType temp2;
  unsigned long temp3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
    {
    if (ap.IsBound())
      {
      op->SetValue(temp0, temp1, temp2, temp3);
      }
    else
      {
      op->vtkDenseArray<unsigned long>::SetValue(temp0, temp1, temp2, temp3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkDenseArray_ImE_SetValue_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<unsigned long> *op = static_cast<vtkDenseArray<unsigned long> *>(vp);

  vtkArrayCoordinates *temp0 = NULL;
  PyObject *pobj0 = NULL;
  unsigned long temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkArrayCoordinates") &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetValue(*temp0, temp1);
      }
    else
      {
      op->vtkDenseArray<unsigned long>::SetValue(*temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkDenseArray_ImE_SetValue_Methods[] = {
  {NULL, PyvtkDenseArray_ImE_SetValue_s1, METH_VARARGS,
   (char*)"@Lk"},
  {NULL, PyvtkDenseArray_ImE_SetValue_s4, METH_VARARGS,
   (char*)"@Ok &vtkArrayCoordinates"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkDenseArray_ImE_SetValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkDenseArray_ImE_SetValue_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkDenseArray_ImE_SetValue_s2(self, args);
    case 4:
      return PyvtkDenseArray_ImE_SetValue_s3(self, args);
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetValue");
  return NULL;
}



static PyObject *
PyvtkDenseArray_ImE_SetValueN(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValueN");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<unsigned long> *op = static_cast<vtkDenseArray<unsigned long> *>(vp);

  unsigned long long temp0;
  unsigned long temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetValueN(temp0, temp1);
      }
    else
      {
      op->vtkDenseArray<unsigned long>::SetValueN(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDenseArray_ImE_Fill(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Fill");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<unsigned long> *op = static_cast<vtkDenseArray<unsigned long> *>(vp);

  unsigned long temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->Fill(temp0);
      }
    else
      {
      op->vtkDenseArray<unsigned long>::Fill(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDenseArray_ImE_GetStorage(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStorage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<unsigned long> *op = static_cast<vtkDenseArray<unsigned long> *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned long *tempr = (ap.IsBound() ?
      op->GetStorage() :
      op->vtkDenseArray<unsigned long>::GetStorage());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkDenseArray_ImE_Methods[] = {
  {(char*)"IsDense", PyvtkDenseArray_ImE_IsDense, METH_VARARGS,
   (char*)"V.IsDense() -> bool\nC++: bool IsDense()\n\n"},
  {(char*)"GetExtents", PyvtkDenseArray_ImE_GetExtents, METH_VARARGS,
   (char*)"V.GetExtents() -> vtkArrayExtents\nC++: const vtkArrayExtents &GetExtents()\n\n"},
  {(char*)"GetNonNullSize", PyvtkDenseArray_ImE_GetNonNullSize, METH_VARARGS,
   (char*)"V.GetNonNullSize() -> int\nC++: SizeT GetNonNullSize()\n\n"},
  {(char*)"GetCoordinatesN", PyvtkDenseArray_ImE_GetCoordinatesN, METH_VARARGS,
   (char*)"V.GetCoordinatesN(int, vtkArrayCoordinates)\nC++: void GetCoordinatesN(const SizeT n,\n    vtkArrayCoordinates &coordinates)\n\n"},
  {(char*)"DeepCopy", PyvtkDenseArray_ImE_DeepCopy, METH_VARARGS,
   (char*)"V.DeepCopy() -> vtkArray\nC++: vtkArray *DeepCopy()\n\n"},
  {(char*)"GetValue", PyvtkDenseArray_ImE_GetValue, METH_VARARGS,
   (char*)"V.GetValue(int) -> int\nC++: const unsigned long &GetValue(CoordinateT i)\nV.GetValue(int, int) -> int\nC++: const unsigned long &GetValue(CoordinateT i, CoordinateT j)\nV.GetValue(int, int, int) -> int\nC++: const unsigned long &GetValue(CoordinateT i, CoordinateT j,\n    CoordinateT k)\nV.GetValue(vtkArrayCoordinates) -> int\nC++: const unsigned long &GetValue(\n    const vtkArrayCoordinates &coordinates)\n\n"},
  {(char*)"GetValueN", PyvtkDenseArray_ImE_GetValueN, METH_VARARGS,
   (char*)"V.GetValueN(int) -> int\nC++: const unsigned long &GetValueN(const SizeT n)\n\n"},
  {(char*)"SetValue", PyvtkDenseArray_ImE_SetValue, METH_VARARGS,
   (char*)"V.SetValue(int, int)\nC++: void SetValue(CoordinateT i, const unsigned long &value)\nV.SetValue(int, int, int)\nC++: void SetValue(CoordinateT i, CoordinateT j,\n    const unsigned long &value)\nV.SetValue(int, int, int, int)\nC++: void SetValue(CoordinateT i, CoordinateT j, CoordinateT k,\n    const unsigned long &value)\nV.SetValue(vtkArrayCoordinates, int)\nC++: void SetValue(const vtkArrayCoordinates &coordinates,\n    const unsigned long &value)\n\n"},
  {(char*)"SetValueN", PyvtkDenseArray_ImE_SetValueN, METH_VARARGS,
   (char*)"V.SetValueN(int, int)\nC++: void SetValueN(const SizeT n, const unsigned long &value)\n\n"},
  {(char*)"Fill", PyvtkDenseArray_ImE_Fill, METH_VARARGS,
   (char*)"V.Fill(int)\nC++: void Fill(const unsigned long &value)\n\nFills every element in the array with the given value.\n"},
  {(char*)"GetStorage", PyvtkDenseArray_ImE_GetStorage, METH_VARARGS,
   (char*)"V.GetStorage() -> (int, ...)\nC++: unsigned long *GetStorage()\n\nReturns a mutable reference to the underlying storage.  Values\nare stored contiguously with fortran ordering.  Use at your own\nrisk!\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkDenseArray_ImE_StaticNew()
{
  return vtkDenseArray<unsigned long>::New();
}

PyObject *PyVTKClass_vtkDenseArray_ImENew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkDenseArray_ImE_StaticNew,
    PyvtkDenseArray_ImE_Methods,
    typeid(vtkDenseArray<unsigned long>).name(), modulename,
    "vtkDenseArray_ImE", "vtkDenseArray_ImE",
    PyvtkDenseArray_ImE_Doc(),
    PyVTKClass_vtkTypedArray_ImENew(modulename));
  return cls;
}

const char **PyvtkDenseArray_ImE_Doc()
{
  static const char *docstring[] = {
    "vtkDenseArray - Contiguous storage for N-way arrays.\n\n",
    "Superclass: vtkTypedArray[uint]\n\n",
    "vtkDenseArray is a concrete vtkArray implementation that stores\nvalues using a contiguous block of memory.  Values are stored with\nfortran ordering, meaning that if you iterated over the memory block,\nthe left-most coordinates would vary the fastest.\n\nIn addition to the retrieval and update methods provided by\nvtkTypedArray, vtkDenseArray provides methods to:\n\nFill the entire array with a specific",
    " value.\n\nRetrieve a pointer to the storage memory block.\n\nSee Also:\n\nvtkArray, vtkTypedArray, vtkSparseArray\n\nThanks:\n\nDeveloped by Timothy M. Shead (tshead@sandia.gov) at Sandia National\nLaboratories.\n\n",
    NULL
  };

  return docstring;
}

extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkDenseArray_IxENew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkTypedArray_IxENew
extern "C" { PyObject *PyVTKClass_vtkTypedArray_IxENew(const char *); }
#define DECLARED_PyVTKClass_vtkTypedArray_IxENew
#endif

static const char **PyvtkDenseArray_IxE_Doc();


static PyObject *
PyvtkDenseArray_IxE_IsDense(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsDense");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<long long> *op = static_cast<vtkDenseArray<long long> *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->IsDense() :
      op->vtkDenseArray<long long>::IsDense());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDenseArray_IxE_GetExtents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetExtents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<long long> *op = static_cast<vtkDenseArray<long long> *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const vtkArrayExtents *tempr = (ap.IsBound() ?
      &op->GetExtents() :
      &op->vtkDenseArray<long long>::GetExtents());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildSpecialObject(tempr, "vtkArrayExtents");
      }
    }

  return result;
}


static PyObject *
PyvtkDenseArray_IxE_GetNonNullSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNonNullSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<long long> *op = static_cast<vtkDenseArray<long long> *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned long long tempr = (ap.IsBound() ?
      op->GetNonNullSize() :
      op->vtkDenseArray<long long>::GetNonNullSize());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDenseArray_IxE_GetCoordinatesN(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCoordinatesN");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<long long> *op = static_cast<vtkDenseArray<long long> *>(vp);

  unsigned long long temp0;
  vtkArrayCoordinates *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetSpecialObject(temp1, "vtkArrayCoordinates"))
    {
    if (ap.IsBound())
      {
      op->GetCoordinatesN(temp0, *temp1);
      }
    else
      {
      op->vtkDenseArray<long long>::GetCoordinatesN(temp0, *temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDenseArray_IxE_DeepCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeepCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<long long> *op = static_cast<vtkDenseArray<long long> *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkArray *tempr = (ap.IsBound() ?
      op->DeepCopy() :
      op->vtkDenseArray<long long>::DeepCopy());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDenseArray_IxE_GetValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<long long> *op = static_cast<vtkDenseArray<long long> *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    const long long *tempr = (ap.IsBound() ?
      &op->GetValue(temp0) :
      &op->vtkDenseArray<long long>::GetValue(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(*tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkDenseArray_IxE_GetValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<long long> *op = static_cast<vtkDenseArray<long long> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    const long long *tempr = (ap.IsBound() ?
      &op->GetValue(temp0, temp1) :
      &op->vtkDenseArray<long long>::GetValue(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(*tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkDenseArray_IxE_GetValue_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<long long> *op = static_cast<vtkDenseArray<long long> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  vtkIdType temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    const long long *tempr = (ap.IsBound() ?
      &op->GetValue(temp0, temp1, temp2) :
      &op->vtkDenseArray<long long>::GetValue(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(*tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkDenseArray_IxE_GetValue_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<long long> *op = static_cast<vtkDenseArray<long long> *>(vp);

  vtkArrayCoordinates *temp0 = NULL;
  PyObject *pobj0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkArrayCoordinates"))
    {
    const long long *tempr = (ap.IsBound() ?
      &op->GetValue(*temp0) :
      &op->vtkDenseArray<long long>::GetValue(*temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(*tempr);
      }
    }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkDenseArray_IxE_GetValue_Methods[] = {
  {NULL, PyvtkDenseArray_IxE_GetValue_s1, METH_VARARGS,
   (char*)"@L"},
  {NULL, PyvtkDenseArray_IxE_GetValue_s4, METH_VARARGS,
   (char*)"@O &vtkArrayCoordinates"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkDenseArray_IxE_GetValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkDenseArray_IxE_GetValue_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkDenseArray_IxE_GetValue_s2(self, args);
    case 3:
      return PyvtkDenseArray_IxE_GetValue_s3(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetValue");
  return NULL;
}



static PyObject *
PyvtkDenseArray_IxE_GetValueN(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValueN");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<long long> *op = static_cast<vtkDenseArray<long long> *>(vp);

  unsigned long long temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    const long long *tempr = (ap.IsBound() ?
      &op->GetValueN(temp0) :
      &op->vtkDenseArray<long long>::GetValueN(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(*tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDenseArray_IxE_SetValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<long long> *op = static_cast<vtkDenseArray<long long> *>(vp);

  vtkIdType temp0;
  long long temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetValue(temp0, temp1);
      }
    else
      {
      op->vtkDenseArray<long long>::SetValue(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkDenseArray_IxE_SetValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<long long> *op = static_cast<vtkDenseArray<long long> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  long long temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      op->SetValue(temp0, temp1, temp2);
      }
    else
      {
      op->vtkDenseArray<long long>::SetValue(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkDenseArray_IxE_SetValue_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<long long> *op = static_cast<vtkDenseArray<long long> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  vtkIdType temp2;
  long long temp3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
    {
    if (ap.IsBound())
      {
      op->SetValue(temp0, temp1, temp2, temp3);
      }
    else
      {
      op->vtkDenseArray<long long>::SetValue(temp0, temp1, temp2, temp3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkDenseArray_IxE_SetValue_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<long long> *op = static_cast<vtkDenseArray<long long> *>(vp);

  vtkArrayCoordinates *temp0 = NULL;
  PyObject *pobj0 = NULL;
  long long temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkArrayCoordinates") &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetValue(*temp0, temp1);
      }
    else
      {
      op->vtkDenseArray<long long>::SetValue(*temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkDenseArray_IxE_SetValue_Methods[] = {
  {NULL, PyvtkDenseArray_IxE_SetValue_s1, METH_VARARGS,
   (char*)"@LL"},
  {NULL, PyvtkDenseArray_IxE_SetValue_s4, METH_VARARGS,
   (char*)"@OL &vtkArrayCoordinates"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkDenseArray_IxE_SetValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkDenseArray_IxE_SetValue_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkDenseArray_IxE_SetValue_s2(self, args);
    case 4:
      return PyvtkDenseArray_IxE_SetValue_s3(self, args);
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetValue");
  return NULL;
}



static PyObject *
PyvtkDenseArray_IxE_SetValueN(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValueN");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<long long> *op = static_cast<vtkDenseArray<long long> *>(vp);

  unsigned long long temp0;
  long long temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetValueN(temp0, temp1);
      }
    else
      {
      op->vtkDenseArray<long long>::SetValueN(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDenseArray_IxE_Fill(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Fill");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<long long> *op = static_cast<vtkDenseArray<long long> *>(vp);

  long long temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->Fill(temp0);
      }
    else
      {
      op->vtkDenseArray<long long>::Fill(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDenseArray_IxE_GetStorage(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStorage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<long long> *op = static_cast<vtkDenseArray<long long> *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    long long *tempr = (ap.IsBound() ?
      op->GetStorage() :
      op->vtkDenseArray<long long>::GetStorage());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkDenseArray_IxE_Methods[] = {
  {(char*)"IsDense", PyvtkDenseArray_IxE_IsDense, METH_VARARGS,
   (char*)"V.IsDense() -> bool\nC++: bool IsDense()\n\n"},
  {(char*)"GetExtents", PyvtkDenseArray_IxE_GetExtents, METH_VARARGS,
   (char*)"V.GetExtents() -> vtkArrayExtents\nC++: const vtkArrayExtents &GetExtents()\n\n"},
  {(char*)"GetNonNullSize", PyvtkDenseArray_IxE_GetNonNullSize, METH_VARARGS,
   (char*)"V.GetNonNullSize() -> int\nC++: SizeT GetNonNullSize()\n\n"},
  {(char*)"GetCoordinatesN", PyvtkDenseArray_IxE_GetCoordinatesN, METH_VARARGS,
   (char*)"V.GetCoordinatesN(int, vtkArrayCoordinates)\nC++: void GetCoordinatesN(const SizeT n,\n    vtkArrayCoordinates &coordinates)\n\n"},
  {(char*)"DeepCopy", PyvtkDenseArray_IxE_DeepCopy, METH_VARARGS,
   (char*)"V.DeepCopy() -> vtkArray\nC++: vtkArray *DeepCopy()\n\n"},
  {(char*)"GetValue", PyvtkDenseArray_IxE_GetValue, METH_VARARGS,
   (char*)"V.GetValue(int) -> int\nC++: const long long &GetValue(CoordinateT i)\nV.GetValue(int, int) -> int\nC++: const long long &GetValue(CoordinateT i, CoordinateT j)\nV.GetValue(int, int, int) -> int\nC++: const long long &GetValue(CoordinateT i, CoordinateT j,\n    CoordinateT k)\nV.GetValue(vtkArrayCoordinates) -> int\nC++: const long long &GetValue(\n    const vtkArrayCoordinates &coordinates)\n\n"},
  {(char*)"GetValueN", PyvtkDenseArray_IxE_GetValueN, METH_VARARGS,
   (char*)"V.GetValueN(int) -> int\nC++: const long long &GetValueN(const SizeT n)\n\n"},
  {(char*)"SetValue", PyvtkDenseArray_IxE_SetValue, METH_VARARGS,
   (char*)"V.SetValue(int, int)\nC++: void SetValue(CoordinateT i, const long long &value)\nV.SetValue(int, int, int)\nC++: void SetValue(CoordinateT i, CoordinateT j,\n    const long long &value)\nV.SetValue(int, int, int, int)\nC++: void SetValue(CoordinateT i, CoordinateT j, CoordinateT k,\n    const long long &value)\nV.SetValue(vtkArrayCoordinates, int)\nC++: void SetValue(const vtkArrayCoordinates &coordinates,\n    const long long &value)\n\n"},
  {(char*)"SetValueN", PyvtkDenseArray_IxE_SetValueN, METH_VARARGS,
   (char*)"V.SetValueN(int, int)\nC++: void SetValueN(const SizeT n, const long long &value)\n\n"},
  {(char*)"Fill", PyvtkDenseArray_IxE_Fill, METH_VARARGS,
   (char*)"V.Fill(int)\nC++: void Fill(const long long &value)\n\nFills every element in the array with the given value.\n"},
  {(char*)"GetStorage", PyvtkDenseArray_IxE_GetStorage, METH_VARARGS,
   (char*)"V.GetStorage() -> (int, ...)\nC++: long long *GetStorage()\n\nReturns a mutable reference to the underlying storage.  Values\nare stored contiguously with fortran ordering.  Use at your own\nrisk!\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkDenseArray_IxE_StaticNew()
{
  return vtkDenseArray<long long>::New();
}

PyObject *PyVTKClass_vtkDenseArray_IxENew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkDenseArray_IxE_StaticNew,
    PyvtkDenseArray_IxE_Methods,
    typeid(vtkDenseArray<long long>).name(), modulename,
    "vtkDenseArray_IxE", "vtkDenseArray_IxE",
    PyvtkDenseArray_IxE_Doc(),
    PyVTKClass_vtkTypedArray_IxENew(modulename));
  return cls;
}

const char **PyvtkDenseArray_IxE_Doc()
{
  static const char *docstring[] = {
    "vtkDenseArray - Contiguous storage for N-way arrays.\n\n",
    "Superclass: vtkTypedArray[int64]\n\n",
    "vtkDenseArray is a concrete vtkArray implementation that stores\nvalues using a contiguous block of memory.  Values are stored with\nfortran ordering, meaning that if you iterated over the memory block,\nthe left-most coordinates would vary the fastest.\n\nIn addition to the retrieval and update methods provided by\nvtkTypedArray, vtkDenseArray provides methods to:\n\nFill the entire array with a specific",
    " value.\n\nRetrieve a pointer to the storage memory block.\n\nSee Also:\n\nvtkArray, vtkTypedArray, vtkSparseArray\n\nThanks:\n\nDeveloped by Timothy M. Shead (tshead@sandia.gov) at Sandia National\nLaboratories.\n\n",
    NULL
  };

  return docstring;
}

extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkDenseArray_IyENew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkTypedArray_IyENew
extern "C" { PyObject *PyVTKClass_vtkTypedArray_IyENew(const char *); }
#define DECLARED_PyVTKClass_vtkTypedArray_IyENew
#endif

static const char **PyvtkDenseArray_IyE_Doc();


static PyObject *
PyvtkDenseArray_IyE_IsDense(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsDense");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<unsigned long long> *op = static_cast<vtkDenseArray<unsigned long long> *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->IsDense() :
      op->vtkDenseArray<unsigned long long>::IsDense());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDenseArray_IyE_GetExtents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetExtents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<unsigned long long> *op = static_cast<vtkDenseArray<unsigned long long> *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const vtkArrayExtents *tempr = (ap.IsBound() ?
      &op->GetExtents() :
      &op->vtkDenseArray<unsigned long long>::GetExtents());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildSpecialObject(tempr, "vtkArrayExtents");
      }
    }

  return result;
}


static PyObject *
PyvtkDenseArray_IyE_GetNonNullSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNonNullSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<unsigned long long> *op = static_cast<vtkDenseArray<unsigned long long> *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned long long tempr = (ap.IsBound() ?
      op->GetNonNullSize() :
      op->vtkDenseArray<unsigned long long>::GetNonNullSize());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDenseArray_IyE_GetCoordinatesN(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCoordinatesN");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<unsigned long long> *op = static_cast<vtkDenseArray<unsigned long long> *>(vp);

  unsigned long long temp0;
  vtkArrayCoordinates *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetSpecialObject(temp1, "vtkArrayCoordinates"))
    {
    if (ap.IsBound())
      {
      op->GetCoordinatesN(temp0, *temp1);
      }
    else
      {
      op->vtkDenseArray<unsigned long long>::GetCoordinatesN(temp0, *temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDenseArray_IyE_DeepCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeepCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<unsigned long long> *op = static_cast<vtkDenseArray<unsigned long long> *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkArray *tempr = (ap.IsBound() ?
      op->DeepCopy() :
      op->vtkDenseArray<unsigned long long>::DeepCopy());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDenseArray_IyE_GetValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<unsigned long long> *op = static_cast<vtkDenseArray<unsigned long long> *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    const unsigned long long *tempr = (ap.IsBound() ?
      &op->GetValue(temp0) :
      &op->vtkDenseArray<unsigned long long>::GetValue(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(*tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkDenseArray_IyE_GetValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<unsigned long long> *op = static_cast<vtkDenseArray<unsigned long long> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    const unsigned long long *tempr = (ap.IsBound() ?
      &op->GetValue(temp0, temp1) :
      &op->vtkDenseArray<unsigned long long>::GetValue(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(*tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkDenseArray_IyE_GetValue_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<unsigned long long> *op = static_cast<vtkDenseArray<unsigned long long> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  vtkIdType temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    const unsigned long long *tempr = (ap.IsBound() ?
      &op->GetValue(temp0, temp1, temp2) :
      &op->vtkDenseArray<unsigned long long>::GetValue(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(*tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkDenseArray_IyE_GetValue_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<unsigned long long> *op = static_cast<vtkDenseArray<unsigned long long> *>(vp);

  vtkArrayCoordinates *temp0 = NULL;
  PyObject *pobj0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkArrayCoordinates"))
    {
    const unsigned long long *tempr = (ap.IsBound() ?
      &op->GetValue(*temp0) :
      &op->vtkDenseArray<unsigned long long>::GetValue(*temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(*tempr);
      }
    }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkDenseArray_IyE_GetValue_Methods[] = {
  {NULL, PyvtkDenseArray_IyE_GetValue_s1, METH_VARARGS,
   (char*)"@L"},
  {NULL, PyvtkDenseArray_IyE_GetValue_s4, METH_VARARGS,
   (char*)"@O &vtkArrayCoordinates"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkDenseArray_IyE_GetValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkDenseArray_IyE_GetValue_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkDenseArray_IyE_GetValue_s2(self, args);
    case 3:
      return PyvtkDenseArray_IyE_GetValue_s3(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetValue");
  return NULL;
}



static PyObject *
PyvtkDenseArray_IyE_GetValueN(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValueN");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<unsigned long long> *op = static_cast<vtkDenseArray<unsigned long long> *>(vp);

  unsigned long long temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    const unsigned long long *tempr = (ap.IsBound() ?
      &op->GetValueN(temp0) :
      &op->vtkDenseArray<unsigned long long>::GetValueN(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(*tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDenseArray_IyE_SetValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<unsigned long long> *op = static_cast<vtkDenseArray<unsigned long long> *>(vp);

  vtkIdType temp0;
  unsigned long long temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetValue(temp0, temp1);
      }
    else
      {
      op->vtkDenseArray<unsigned long long>::SetValue(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkDenseArray_IyE_SetValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<unsigned long long> *op = static_cast<vtkDenseArray<unsigned long long> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  unsigned long long temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      op->SetValue(temp0, temp1, temp2);
      }
    else
      {
      op->vtkDenseArray<unsigned long long>::SetValue(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkDenseArray_IyE_SetValue_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<unsigned long long> *op = static_cast<vtkDenseArray<unsigned long long> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  vtkIdType temp2;
  unsigned long long temp3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
    {
    if (ap.IsBound())
      {
      op->SetValue(temp0, temp1, temp2, temp3);
      }
    else
      {
      op->vtkDenseArray<unsigned long long>::SetValue(temp0, temp1, temp2, temp3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkDenseArray_IyE_SetValue_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<unsigned long long> *op = static_cast<vtkDenseArray<unsigned long long> *>(vp);

  vtkArrayCoordinates *temp0 = NULL;
  PyObject *pobj0 = NULL;
  unsigned long long temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkArrayCoordinates") &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetValue(*temp0, temp1);
      }
    else
      {
      op->vtkDenseArray<unsigned long long>::SetValue(*temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkDenseArray_IyE_SetValue_Methods[] = {
  {NULL, PyvtkDenseArray_IyE_SetValue_s1, METH_VARARGS,
   (char*)"@LK"},
  {NULL, PyvtkDenseArray_IyE_SetValue_s4, METH_VARARGS,
   (char*)"@OK &vtkArrayCoordinates"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkDenseArray_IyE_SetValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkDenseArray_IyE_SetValue_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkDenseArray_IyE_SetValue_s2(self, args);
    case 4:
      return PyvtkDenseArray_IyE_SetValue_s3(self, args);
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetValue");
  return NULL;
}



static PyObject *
PyvtkDenseArray_IyE_SetValueN(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValueN");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<unsigned long long> *op = static_cast<vtkDenseArray<unsigned long long> *>(vp);

  unsigned long long temp0;
  unsigned long long temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetValueN(temp0, temp1);
      }
    else
      {
      op->vtkDenseArray<unsigned long long>::SetValueN(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDenseArray_IyE_Fill(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Fill");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<unsigned long long> *op = static_cast<vtkDenseArray<unsigned long long> *>(vp);

  unsigned long long temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->Fill(temp0);
      }
    else
      {
      op->vtkDenseArray<unsigned long long>::Fill(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDenseArray_IyE_GetStorage(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStorage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<unsigned long long> *op = static_cast<vtkDenseArray<unsigned long long> *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned long long *tempr = (ap.IsBound() ?
      op->GetStorage() :
      op->vtkDenseArray<unsigned long long>::GetStorage());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkDenseArray_IyE_Methods[] = {
  {(char*)"IsDense", PyvtkDenseArray_IyE_IsDense, METH_VARARGS,
   (char*)"V.IsDense() -> bool\nC++: bool IsDense()\n\n"},
  {(char*)"GetExtents", PyvtkDenseArray_IyE_GetExtents, METH_VARARGS,
   (char*)"V.GetExtents() -> vtkArrayExtents\nC++: const vtkArrayExtents &GetExtents()\n\n"},
  {(char*)"GetNonNullSize", PyvtkDenseArray_IyE_GetNonNullSize, METH_VARARGS,
   (char*)"V.GetNonNullSize() -> int\nC++: SizeT GetNonNullSize()\n\n"},
  {(char*)"GetCoordinatesN", PyvtkDenseArray_IyE_GetCoordinatesN, METH_VARARGS,
   (char*)"V.GetCoordinatesN(int, vtkArrayCoordinates)\nC++: void GetCoordinatesN(const SizeT n,\n    vtkArrayCoordinates &coordinates)\n\n"},
  {(char*)"DeepCopy", PyvtkDenseArray_IyE_DeepCopy, METH_VARARGS,
   (char*)"V.DeepCopy() -> vtkArray\nC++: vtkArray *DeepCopy()\n\n"},
  {(char*)"GetValue", PyvtkDenseArray_IyE_GetValue, METH_VARARGS,
   (char*)"V.GetValue(int) -> int\nC++: const unsigned long long &GetValue(CoordinateT i)\nV.GetValue(int, int) -> int\nC++: const unsigned long long &GetValue(CoordinateT i,\n    CoordinateT j)\nV.GetValue(int, int, int) -> int\nC++: const unsigned long long &GetValue(CoordinateT i,\n    CoordinateT j, CoordinateT k)\nV.GetValue(vtkArrayCoordinates) -> int\nC++: const unsigned long long &GetValue(\n    const vtkArrayCoordinates &coordinates)\n\n"},
  {(char*)"GetValueN", PyvtkDenseArray_IyE_GetValueN, METH_VARARGS,
   (char*)"V.GetValueN(int) -> int\nC++: const unsigned long long &GetValueN(const SizeT n)\n\n"},
  {(char*)"SetValue", PyvtkDenseArray_IyE_SetValue, METH_VARARGS,
   (char*)"V.SetValue(int, int)\nC++: void SetValue(CoordinateT i, const unsigned long long &value)\nV.SetValue(int, int, int)\nC++: void SetValue(CoordinateT i, CoordinateT j,\n    const unsigned long long &value)\nV.SetValue(int, int, int, int)\nC++: void SetValue(CoordinateT i, CoordinateT j, CoordinateT k,\n    const unsigned long long &value)\nV.SetValue(vtkArrayCoordinates, int)\nC++: void SetValue(const vtkArrayCoordinates &coordinates,\n    const unsigned long long &value)\n\n"},
  {(char*)"SetValueN", PyvtkDenseArray_IyE_SetValueN, METH_VARARGS,
   (char*)"V.SetValueN(int, int)\nC++: void SetValueN(const SizeT n,\n    const unsigned long long &value)\n\n"},
  {(char*)"Fill", PyvtkDenseArray_IyE_Fill, METH_VARARGS,
   (char*)"V.Fill(int)\nC++: void Fill(const unsigned long long &value)\n\nFills every element in the array with the given value.\n"},
  {(char*)"GetStorage", PyvtkDenseArray_IyE_GetStorage, METH_VARARGS,
   (char*)"V.GetStorage() -> (int, ...)\nC++: unsigned long long *GetStorage()\n\nReturns a mutable reference to the underlying storage.  Values\nare stored contiguously with fortran ordering.  Use at your own\nrisk!\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkDenseArray_IyE_StaticNew()
{
  return vtkDenseArray<unsigned long long>::New();
}

PyObject *PyVTKClass_vtkDenseArray_IyENew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkDenseArray_IyE_StaticNew,
    PyvtkDenseArray_IyE_Methods,
    typeid(vtkDenseArray<unsigned long long>).name(), modulename,
    "vtkDenseArray_IyE", "vtkDenseArray_IyE",
    PyvtkDenseArray_IyE_Doc(),
    PyVTKClass_vtkTypedArray_IyENew(modulename));
  return cls;
}

const char **PyvtkDenseArray_IyE_Doc()
{
  static const char *docstring[] = {
    "vtkDenseArray - Contiguous storage for N-way arrays.\n\n",
    "Superclass: vtkTypedArray[uint64]\n\n",
    "vtkDenseArray is a concrete vtkArray implementation that stores\nvalues using a contiguous block of memory.  Values are stored with\nfortran ordering, meaning that if you iterated over the memory block,\nthe left-most coordinates would vary the fastest.\n\nIn addition to the retrieval and update methods provided by\nvtkTypedArray, vtkDenseArray provides methods to:\n\nFill the entire array with a specific",
    " value.\n\nRetrieve a pointer to the storage memory block.\n\nSee Also:\n\nvtkArray, vtkTypedArray, vtkSparseArray\n\nThanks:\n\nDeveloped by Timothy M. Shead (tshead@sandia.gov) at Sandia National\nLaboratories.\n\n",
    NULL
  };

  return docstring;
}

extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkDenseArray_IfENew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkTypedArray_IfENew
extern "C" { PyObject *PyVTKClass_vtkTypedArray_IfENew(const char *); }
#define DECLARED_PyVTKClass_vtkTypedArray_IfENew
#endif

static const char **PyvtkDenseArray_IfE_Doc();


static PyObject *
PyvtkDenseArray_IfE_IsDense(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsDense");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<float> *op = static_cast<vtkDenseArray<float> *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->IsDense() :
      op->vtkDenseArray<float>::IsDense());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDenseArray_IfE_GetExtents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetExtents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<float> *op = static_cast<vtkDenseArray<float> *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const vtkArrayExtents *tempr = (ap.IsBound() ?
      &op->GetExtents() :
      &op->vtkDenseArray<float>::GetExtents());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildSpecialObject(tempr, "vtkArrayExtents");
      }
    }

  return result;
}


static PyObject *
PyvtkDenseArray_IfE_GetNonNullSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNonNullSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<float> *op = static_cast<vtkDenseArray<float> *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned long long tempr = (ap.IsBound() ?
      op->GetNonNullSize() :
      op->vtkDenseArray<float>::GetNonNullSize());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDenseArray_IfE_GetCoordinatesN(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCoordinatesN");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<float> *op = static_cast<vtkDenseArray<float> *>(vp);

  unsigned long long temp0;
  vtkArrayCoordinates *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetSpecialObject(temp1, "vtkArrayCoordinates"))
    {
    if (ap.IsBound())
      {
      op->GetCoordinatesN(temp0, *temp1);
      }
    else
      {
      op->vtkDenseArray<float>::GetCoordinatesN(temp0, *temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDenseArray_IfE_DeepCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeepCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<float> *op = static_cast<vtkDenseArray<float> *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkArray *tempr = (ap.IsBound() ?
      op->DeepCopy() :
      op->vtkDenseArray<float>::DeepCopy());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDenseArray_IfE_GetValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<float> *op = static_cast<vtkDenseArray<float> *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    const float *tempr = (ap.IsBound() ?
      &op->GetValue(temp0) :
      &op->vtkDenseArray<float>::GetValue(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(*tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkDenseArray_IfE_GetValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<float> *op = static_cast<vtkDenseArray<float> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    const float *tempr = (ap.IsBound() ?
      &op->GetValue(temp0, temp1) :
      &op->vtkDenseArray<float>::GetValue(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(*tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkDenseArray_IfE_GetValue_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<float> *op = static_cast<vtkDenseArray<float> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  vtkIdType temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    const float *tempr = (ap.IsBound() ?
      &op->GetValue(temp0, temp1, temp2) :
      &op->vtkDenseArray<float>::GetValue(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(*tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkDenseArray_IfE_GetValue_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<float> *op = static_cast<vtkDenseArray<float> *>(vp);

  vtkArrayCoordinates *temp0 = NULL;
  PyObject *pobj0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkArrayCoordinates"))
    {
    const float *tempr = (ap.IsBound() ?
      &op->GetValue(*temp0) :
      &op->vtkDenseArray<float>::GetValue(*temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(*tempr);
      }
    }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkDenseArray_IfE_GetValue_Methods[] = {
  {NULL, PyvtkDenseArray_IfE_GetValue_s1, METH_VARARGS,
   (char*)"@L"},
  {NULL, PyvtkDenseArray_IfE_GetValue_s4, METH_VARARGS,
   (char*)"@O &vtkArrayCoordinates"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkDenseArray_IfE_GetValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkDenseArray_IfE_GetValue_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkDenseArray_IfE_GetValue_s2(self, args);
    case 3:
      return PyvtkDenseArray_IfE_GetValue_s3(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetValue");
  return NULL;
}



static PyObject *
PyvtkDenseArray_IfE_GetValueN(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValueN");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<float> *op = static_cast<vtkDenseArray<float> *>(vp);

  unsigned long long temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    const float *tempr = (ap.IsBound() ?
      &op->GetValueN(temp0) :
      &op->vtkDenseArray<float>::GetValueN(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(*tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDenseArray_IfE_SetValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<float> *op = static_cast<vtkDenseArray<float> *>(vp);

  vtkIdType temp0;
  float temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetValue(temp0, temp1);
      }
    else
      {
      op->vtkDenseArray<float>::SetValue(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkDenseArray_IfE_SetValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<float> *op = static_cast<vtkDenseArray<float> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  float temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      op->SetValue(temp0, temp1, temp2);
      }
    else
      {
      op->vtkDenseArray<float>::SetValue(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkDenseArray_IfE_SetValue_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<float> *op = static_cast<vtkDenseArray<float> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  vtkIdType temp2;
  float temp3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
    {
    if (ap.IsBound())
      {
      op->SetValue(temp0, temp1, temp2, temp3);
      }
    else
      {
      op->vtkDenseArray<float>::SetValue(temp0, temp1, temp2, temp3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkDenseArray_IfE_SetValue_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<float> *op = static_cast<vtkDenseArray<float> *>(vp);

  vtkArrayCoordinates *temp0 = NULL;
  PyObject *pobj0 = NULL;
  float temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkArrayCoordinates") &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetValue(*temp0, temp1);
      }
    else
      {
      op->vtkDenseArray<float>::SetValue(*temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkDenseArray_IfE_SetValue_Methods[] = {
  {NULL, PyvtkDenseArray_IfE_SetValue_s1, METH_VARARGS,
   (char*)"@Lf"},
  {NULL, PyvtkDenseArray_IfE_SetValue_s4, METH_VARARGS,
   (char*)"@Of &vtkArrayCoordinates"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkDenseArray_IfE_SetValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkDenseArray_IfE_SetValue_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkDenseArray_IfE_SetValue_s2(self, args);
    case 4:
      return PyvtkDenseArray_IfE_SetValue_s3(self, args);
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetValue");
  return NULL;
}



static PyObject *
PyvtkDenseArray_IfE_SetValueN(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValueN");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<float> *op = static_cast<vtkDenseArray<float> *>(vp);

  unsigned long long temp0;
  float temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetValueN(temp0, temp1);
      }
    else
      {
      op->vtkDenseArray<float>::SetValueN(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDenseArray_IfE_Fill(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Fill");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<float> *op = static_cast<vtkDenseArray<float> *>(vp);

  float temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->Fill(temp0);
      }
    else
      {
      op->vtkDenseArray<float>::Fill(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDenseArray_IfE_GetStorage(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStorage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<float> *op = static_cast<vtkDenseArray<float> *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    float *tempr = (ap.IsBound() ?
      op->GetStorage() :
      op->vtkDenseArray<float>::GetStorage());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkDenseArray_IfE_Methods[] = {
  {(char*)"IsDense", PyvtkDenseArray_IfE_IsDense, METH_VARARGS,
   (char*)"V.IsDense() -> bool\nC++: bool IsDense()\n\n"},
  {(char*)"GetExtents", PyvtkDenseArray_IfE_GetExtents, METH_VARARGS,
   (char*)"V.GetExtents() -> vtkArrayExtents\nC++: const vtkArrayExtents &GetExtents()\n\n"},
  {(char*)"GetNonNullSize", PyvtkDenseArray_IfE_GetNonNullSize, METH_VARARGS,
   (char*)"V.GetNonNullSize() -> int\nC++: SizeT GetNonNullSize()\n\n"},
  {(char*)"GetCoordinatesN", PyvtkDenseArray_IfE_GetCoordinatesN, METH_VARARGS,
   (char*)"V.GetCoordinatesN(int, vtkArrayCoordinates)\nC++: void GetCoordinatesN(const SizeT n,\n    vtkArrayCoordinates &coordinates)\n\n"},
  {(char*)"DeepCopy", PyvtkDenseArray_IfE_DeepCopy, METH_VARARGS,
   (char*)"V.DeepCopy() -> vtkArray\nC++: vtkArray *DeepCopy()\n\n"},
  {(char*)"GetValue", PyvtkDenseArray_IfE_GetValue, METH_VARARGS,
   (char*)"V.GetValue(int) -> float\nC++: const float &GetValue(CoordinateT i)\nV.GetValue(int, int) -> float\nC++: const float &GetValue(CoordinateT i, CoordinateT j)\nV.GetValue(int, int, int) -> float\nC++: const float &GetValue(CoordinateT i, CoordinateT j,\n    CoordinateT k)\nV.GetValue(vtkArrayCoordinates) -> float\nC++: const float &GetValue(const vtkArrayCoordinates &coordinates)\n\n"},
  {(char*)"GetValueN", PyvtkDenseArray_IfE_GetValueN, METH_VARARGS,
   (char*)"V.GetValueN(int) -> float\nC++: const float &GetValueN(const SizeT n)\n\n"},
  {(char*)"SetValue", PyvtkDenseArray_IfE_SetValue, METH_VARARGS,
   (char*)"V.SetValue(int, float)\nC++: void SetValue(CoordinateT i, const float &value)\nV.SetValue(int, int, float)\nC++: void SetValue(CoordinateT i, CoordinateT j,\n    const float &value)\nV.SetValue(int, int, int, float)\nC++: void SetValue(CoordinateT i, CoordinateT j, CoordinateT k,\n    const float &value)\nV.SetValue(vtkArrayCoordinates, float)\nC++: void SetValue(const vtkArrayCoordinates &coordinates,\n    const float &value)\n\n"},
  {(char*)"SetValueN", PyvtkDenseArray_IfE_SetValueN, METH_VARARGS,
   (char*)"V.SetValueN(int, float)\nC++: void SetValueN(const SizeT n, const float &value)\n\n"},
  {(char*)"Fill", PyvtkDenseArray_IfE_Fill, METH_VARARGS,
   (char*)"V.Fill(float)\nC++: void Fill(const float &value)\n\nFills every element in the array with the given value.\n"},
  {(char*)"GetStorage", PyvtkDenseArray_IfE_GetStorage, METH_VARARGS,
   (char*)"V.GetStorage() -> (float, ...)\nC++: float *GetStorage()\n\nReturns a mutable reference to the underlying storage.  Values\nare stored contiguously with fortran ordering.  Use at your own\nrisk!\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkDenseArray_IfE_StaticNew()
{
  return vtkDenseArray<float>::New();
}

PyObject *PyVTKClass_vtkDenseArray_IfENew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkDenseArray_IfE_StaticNew,
    PyvtkDenseArray_IfE_Methods,
    typeid(vtkDenseArray<float>).name(), modulename,
    "vtkDenseArray_IfE", "vtkDenseArray_IfE",
    PyvtkDenseArray_IfE_Doc(),
    PyVTKClass_vtkTypedArray_IfENew(modulename));
  return cls;
}

const char **PyvtkDenseArray_IfE_Doc()
{
  static const char *docstring[] = {
    "vtkDenseArray - Contiguous storage for N-way arrays.\n\n",
    "Superclass: vtkTypedArray[float32]\n\n",
    "vtkDenseArray is a concrete vtkArray implementation that stores\nvalues using a contiguous block of memory.  Values are stored with\nfortran ordering, meaning that if you iterated over the memory block,\nthe left-most coordinates would vary the fastest.\n\nIn addition to the retrieval and update methods provided by\nvtkTypedArray, vtkDenseArray provides methods to:\n\nFill the entire array with a specific",
    " value.\n\nRetrieve a pointer to the storage memory block.\n\nSee Also:\n\nvtkArray, vtkTypedArray, vtkSparseArray\n\nThanks:\n\nDeveloped by Timothy M. Shead (tshead@sandia.gov) at Sandia National\nLaboratories.\n\n",
    NULL
  };

  return docstring;
}

extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkDenseArray_IdENew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkTypedArray_IdENew
extern "C" { PyObject *PyVTKClass_vtkTypedArray_IdENew(const char *); }
#define DECLARED_PyVTKClass_vtkTypedArray_IdENew
#endif

static const char **PyvtkDenseArray_IdE_Doc();


static PyObject *
PyvtkDenseArray_IdE_IsDense(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsDense");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<double> *op = static_cast<vtkDenseArray<double> *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->IsDense() :
      op->vtkDenseArray<double>::IsDense());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDenseArray_IdE_GetExtents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetExtents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<double> *op = static_cast<vtkDenseArray<double> *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const vtkArrayExtents *tempr = (ap.IsBound() ?
      &op->GetExtents() :
      &op->vtkDenseArray<double>::GetExtents());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildSpecialObject(tempr, "vtkArrayExtents");
      }
    }

  return result;
}


static PyObject *
PyvtkDenseArray_IdE_GetNonNullSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNonNullSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<double> *op = static_cast<vtkDenseArray<double> *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned long long tempr = (ap.IsBound() ?
      op->GetNonNullSize() :
      op->vtkDenseArray<double>::GetNonNullSize());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDenseArray_IdE_GetCoordinatesN(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCoordinatesN");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<double> *op = static_cast<vtkDenseArray<double> *>(vp);

  unsigned long long temp0;
  vtkArrayCoordinates *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetSpecialObject(temp1, "vtkArrayCoordinates"))
    {
    if (ap.IsBound())
      {
      op->GetCoordinatesN(temp0, *temp1);
      }
    else
      {
      op->vtkDenseArray<double>::GetCoordinatesN(temp0, *temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDenseArray_IdE_DeepCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeepCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<double> *op = static_cast<vtkDenseArray<double> *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkArray *tempr = (ap.IsBound() ?
      op->DeepCopy() :
      op->vtkDenseArray<double>::DeepCopy());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDenseArray_IdE_GetValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<double> *op = static_cast<vtkDenseArray<double> *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    const double *tempr = (ap.IsBound() ?
      &op->GetValue(temp0) :
      &op->vtkDenseArray<double>::GetValue(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(*tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkDenseArray_IdE_GetValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<double> *op = static_cast<vtkDenseArray<double> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    const double *tempr = (ap.IsBound() ?
      &op->GetValue(temp0, temp1) :
      &op->vtkDenseArray<double>::GetValue(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(*tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkDenseArray_IdE_GetValue_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<double> *op = static_cast<vtkDenseArray<double> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  vtkIdType temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    const double *tempr = (ap.IsBound() ?
      &op->GetValue(temp0, temp1, temp2) :
      &op->vtkDenseArray<double>::GetValue(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(*tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkDenseArray_IdE_GetValue_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<double> *op = static_cast<vtkDenseArray<double> *>(vp);

  vtkArrayCoordinates *temp0 = NULL;
  PyObject *pobj0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkArrayCoordinates"))
    {
    const double *tempr = (ap.IsBound() ?
      &op->GetValue(*temp0) :
      &op->vtkDenseArray<double>::GetValue(*temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(*tempr);
      }
    }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkDenseArray_IdE_GetValue_Methods[] = {
  {NULL, PyvtkDenseArray_IdE_GetValue_s1, METH_VARARGS,
   (char*)"@L"},
  {NULL, PyvtkDenseArray_IdE_GetValue_s4, METH_VARARGS,
   (char*)"@O &vtkArrayCoordinates"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkDenseArray_IdE_GetValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkDenseArray_IdE_GetValue_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkDenseArray_IdE_GetValue_s2(self, args);
    case 3:
      return PyvtkDenseArray_IdE_GetValue_s3(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetValue");
  return NULL;
}



static PyObject *
PyvtkDenseArray_IdE_GetValueN(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValueN");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<double> *op = static_cast<vtkDenseArray<double> *>(vp);

  unsigned long long temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    const double *tempr = (ap.IsBound() ?
      &op->GetValueN(temp0) :
      &op->vtkDenseArray<double>::GetValueN(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(*tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDenseArray_IdE_SetValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<double> *op = static_cast<vtkDenseArray<double> *>(vp);

  vtkIdType temp0;
  double temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetValue(temp0, temp1);
      }
    else
      {
      op->vtkDenseArray<double>::SetValue(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkDenseArray_IdE_SetValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<double> *op = static_cast<vtkDenseArray<double> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  double temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      op->SetValue(temp0, temp1, temp2);
      }
    else
      {
      op->vtkDenseArray<double>::SetValue(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkDenseArray_IdE_SetValue_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<double> *op = static_cast<vtkDenseArray<double> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  vtkIdType temp2;
  double temp3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
    {
    if (ap.IsBound())
      {
      op->SetValue(temp0, temp1, temp2, temp3);
      }
    else
      {
      op->vtkDenseArray<double>::SetValue(temp0, temp1, temp2, temp3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkDenseArray_IdE_SetValue_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<double> *op = static_cast<vtkDenseArray<double> *>(vp);

  vtkArrayCoordinates *temp0 = NULL;
  PyObject *pobj0 = NULL;
  double temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkArrayCoordinates") &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetValue(*temp0, temp1);
      }
    else
      {
      op->vtkDenseArray<double>::SetValue(*temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkDenseArray_IdE_SetValue_Methods[] = {
  {NULL, PyvtkDenseArray_IdE_SetValue_s1, METH_VARARGS,
   (char*)"@Ld"},
  {NULL, PyvtkDenseArray_IdE_SetValue_s4, METH_VARARGS,
   (char*)"@Od &vtkArrayCoordinates"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkDenseArray_IdE_SetValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkDenseArray_IdE_SetValue_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkDenseArray_IdE_SetValue_s2(self, args);
    case 4:
      return PyvtkDenseArray_IdE_SetValue_s3(self, args);
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetValue");
  return NULL;
}



static PyObject *
PyvtkDenseArray_IdE_SetValueN(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValueN");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<double> *op = static_cast<vtkDenseArray<double> *>(vp);

  unsigned long long temp0;
  double temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetValueN(temp0, temp1);
      }
    else
      {
      op->vtkDenseArray<double>::SetValueN(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDenseArray_IdE_Fill(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Fill");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<double> *op = static_cast<vtkDenseArray<double> *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->Fill(temp0);
      }
    else
      {
      op->vtkDenseArray<double>::Fill(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDenseArray_IdE_GetStorage(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStorage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<double> *op = static_cast<vtkDenseArray<double> *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetStorage() :
      op->vtkDenseArray<double>::GetStorage());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkDenseArray_IdE_Methods[] = {
  {(char*)"IsDense", PyvtkDenseArray_IdE_IsDense, METH_VARARGS,
   (char*)"V.IsDense() -> bool\nC++: bool IsDense()\n\n"},
  {(char*)"GetExtents", PyvtkDenseArray_IdE_GetExtents, METH_VARARGS,
   (char*)"V.GetExtents() -> vtkArrayExtents\nC++: const vtkArrayExtents &GetExtents()\n\n"},
  {(char*)"GetNonNullSize", PyvtkDenseArray_IdE_GetNonNullSize, METH_VARARGS,
   (char*)"V.GetNonNullSize() -> int\nC++: SizeT GetNonNullSize()\n\n"},
  {(char*)"GetCoordinatesN", PyvtkDenseArray_IdE_GetCoordinatesN, METH_VARARGS,
   (char*)"V.GetCoordinatesN(int, vtkArrayCoordinates)\nC++: void GetCoordinatesN(const SizeT n,\n    vtkArrayCoordinates &coordinates)\n\n"},
  {(char*)"DeepCopy", PyvtkDenseArray_IdE_DeepCopy, METH_VARARGS,
   (char*)"V.DeepCopy() -> vtkArray\nC++: vtkArray *DeepCopy()\n\n"},
  {(char*)"GetValue", PyvtkDenseArray_IdE_GetValue, METH_VARARGS,
   (char*)"V.GetValue(int) -> float\nC++: const double &GetValue(CoordinateT i)\nV.GetValue(int, int) -> float\nC++: const double &GetValue(CoordinateT i, CoordinateT j)\nV.GetValue(int, int, int) -> float\nC++: const double &GetValue(CoordinateT i, CoordinateT j,\n    CoordinateT k)\nV.GetValue(vtkArrayCoordinates) -> float\nC++: const double &GetValue(\n    const vtkArrayCoordinates &coordinates)\n\n"},
  {(char*)"GetValueN", PyvtkDenseArray_IdE_GetValueN, METH_VARARGS,
   (char*)"V.GetValueN(int) -> float\nC++: const double &GetValueN(const SizeT n)\n\n"},
  {(char*)"SetValue", PyvtkDenseArray_IdE_SetValue, METH_VARARGS,
   (char*)"V.SetValue(int, float)\nC++: void SetValue(CoordinateT i, const double &value)\nV.SetValue(int, int, float)\nC++: void SetValue(CoordinateT i, CoordinateT j,\n    const double &value)\nV.SetValue(int, int, int, float)\nC++: void SetValue(CoordinateT i, CoordinateT j, CoordinateT k,\n    const double &value)\nV.SetValue(vtkArrayCoordinates, float)\nC++: void SetValue(const vtkArrayCoordinates &coordinates,\n    const double &value)\n\n"},
  {(char*)"SetValueN", PyvtkDenseArray_IdE_SetValueN, METH_VARARGS,
   (char*)"V.SetValueN(int, float)\nC++: void SetValueN(const SizeT n, const double &value)\n\n"},
  {(char*)"Fill", PyvtkDenseArray_IdE_Fill, METH_VARARGS,
   (char*)"V.Fill(float)\nC++: void Fill(const double &value)\n\nFills every element in the array with the given value.\n"},
  {(char*)"GetStorage", PyvtkDenseArray_IdE_GetStorage, METH_VARARGS,
   (char*)"V.GetStorage() -> (float, ...)\nC++: double *GetStorage()\n\nReturns a mutable reference to the underlying storage.  Values\nare stored contiguously with fortran ordering.  Use at your own\nrisk!\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkDenseArray_IdE_StaticNew()
{
  return vtkDenseArray<double>::New();
}

PyObject *PyVTKClass_vtkDenseArray_IdENew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkDenseArray_IdE_StaticNew,
    PyvtkDenseArray_IdE_Methods,
    typeid(vtkDenseArray<double>).name(), modulename,
    "vtkDenseArray_IdE", "vtkDenseArray_IdE",
    PyvtkDenseArray_IdE_Doc(),
    PyVTKClass_vtkTypedArray_IdENew(modulename));
  return cls;
}

const char **PyvtkDenseArray_IdE_Doc()
{
  static const char *docstring[] = {
    "vtkDenseArray - Contiguous storage for N-way arrays.\n\n",
    "Superclass: vtkTypedArray[float64]\n\n",
    "vtkDenseArray is a concrete vtkArray implementation that stores\nvalues using a contiguous block of memory.  Values are stored with\nfortran ordering, meaning that if you iterated over the memory block,\nthe left-most coordinates would vary the fastest.\n\nIn addition to the retrieval and update methods provided by\nvtkTypedArray, vtkDenseArray provides methods to:\n\nFill the entire array with a specific",
    " value.\n\nRetrieve a pointer to the storage memory block.\n\nSee Also:\n\nvtkArray, vtkTypedArray, vtkSparseArray\n\nThanks:\n\nDeveloped by Timothy M. Shead (tshead@sandia.gov) at Sandia National\nLaboratories.\n\n",
    NULL
  };

  return docstring;
}

extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkDenseArray_I12vtkStdStringENew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkTypedArray_I12vtkStdStringENew
extern "C" { PyObject *PyVTKClass_vtkTypedArray_I12vtkStdStringENew(const char *); }
#define DECLARED_PyVTKClass_vtkTypedArray_I12vtkStdStringENew
#endif

static const char **PyvtkDenseArray_I12vtkStdStringE_Doc();


static PyObject *
PyvtkDenseArray_I12vtkStdStringE_IsDense(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsDense");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<vtkStdString> *op = static_cast<vtkDenseArray<vtkStdString> *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->IsDense() :
      op->vtkDenseArray<vtkStdString>::IsDense());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDenseArray_I12vtkStdStringE_GetExtents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetExtents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<vtkStdString> *op = static_cast<vtkDenseArray<vtkStdString> *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const vtkArrayExtents *tempr = (ap.IsBound() ?
      &op->GetExtents() :
      &op->vtkDenseArray<vtkStdString>::GetExtents());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildSpecialObject(tempr, "vtkArrayExtents");
      }
    }

  return result;
}


static PyObject *
PyvtkDenseArray_I12vtkStdStringE_GetNonNullSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNonNullSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<vtkStdString> *op = static_cast<vtkDenseArray<vtkStdString> *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned long long tempr = (ap.IsBound() ?
      op->GetNonNullSize() :
      op->vtkDenseArray<vtkStdString>::GetNonNullSize());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDenseArray_I12vtkStdStringE_GetCoordinatesN(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCoordinatesN");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<vtkStdString> *op = static_cast<vtkDenseArray<vtkStdString> *>(vp);

  unsigned long long temp0;
  vtkArrayCoordinates *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetSpecialObject(temp1, "vtkArrayCoordinates"))
    {
    if (ap.IsBound())
      {
      op->GetCoordinatesN(temp0, *temp1);
      }
    else
      {
      op->vtkDenseArray<vtkStdString>::GetCoordinatesN(temp0, *temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDenseArray_I12vtkStdStringE_DeepCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeepCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<vtkStdString> *op = static_cast<vtkDenseArray<vtkStdString> *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkArray *tempr = (ap.IsBound() ?
      op->DeepCopy() :
      op->vtkDenseArray<vtkStdString>::DeepCopy());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDenseArray_I12vtkStdStringE_GetValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<vtkStdString> *op = static_cast<vtkDenseArray<vtkStdString> *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    const vtkStdString *tempr = (ap.IsBound() ?
      &op->GetValue(temp0) :
      &op->vtkDenseArray<vtkStdString>::GetValue(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(*tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkDenseArray_I12vtkStdStringE_GetValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<vtkStdString> *op = static_cast<vtkDenseArray<vtkStdString> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    const vtkStdString *tempr = (ap.IsBound() ?
      &op->GetValue(temp0, temp1) :
      &op->vtkDenseArray<vtkStdString>::GetValue(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(*tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkDenseArray_I12vtkStdStringE_GetValue_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<vtkStdString> *op = static_cast<vtkDenseArray<vtkStdString> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  vtkIdType temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    const vtkStdString *tempr = (ap.IsBound() ?
      &op->GetValue(temp0, temp1, temp2) :
      &op->vtkDenseArray<vtkStdString>::GetValue(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(*tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkDenseArray_I12vtkStdStringE_GetValue_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<vtkStdString> *op = static_cast<vtkDenseArray<vtkStdString> *>(vp);

  vtkArrayCoordinates *temp0 = NULL;
  PyObject *pobj0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkArrayCoordinates"))
    {
    const vtkStdString *tempr = (ap.IsBound() ?
      &op->GetValue(*temp0) :
      &op->vtkDenseArray<vtkStdString>::GetValue(*temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(*tempr);
      }
    }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkDenseArray_I12vtkStdStringE_GetValue_Methods[] = {
  {NULL, PyvtkDenseArray_I12vtkStdStringE_GetValue_s1, METH_VARARGS,
   (char*)"@L"},
  {NULL, PyvtkDenseArray_I12vtkStdStringE_GetValue_s4, METH_VARARGS,
   (char*)"@O &vtkArrayCoordinates"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkDenseArray_I12vtkStdStringE_GetValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkDenseArray_I12vtkStdStringE_GetValue_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkDenseArray_I12vtkStdStringE_GetValue_s2(self, args);
    case 3:
      return PyvtkDenseArray_I12vtkStdStringE_GetValue_s3(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetValue");
  return NULL;
}



static PyObject *
PyvtkDenseArray_I12vtkStdStringE_GetValueN(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValueN");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<vtkStdString> *op = static_cast<vtkDenseArray<vtkStdString> *>(vp);

  unsigned long long temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    const vtkStdString *tempr = (ap.IsBound() ?
      &op->GetValueN(temp0) :
      &op->vtkDenseArray<vtkStdString>::GetValueN(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(*tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDenseArray_I12vtkStdStringE_SetValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<vtkStdString> *op = static_cast<vtkDenseArray<vtkStdString> *>(vp);

  vtkIdType temp0;
  vtkStdString temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetValue(temp0, temp1);
      }
    else
      {
      op->vtkDenseArray<vtkStdString>::SetValue(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkDenseArray_I12vtkStdStringE_SetValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<vtkStdString> *op = static_cast<vtkDenseArray<vtkStdString> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  vtkStdString temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      op->SetValue(temp0, temp1, temp2);
      }
    else
      {
      op->vtkDenseArray<vtkStdString>::SetValue(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkDenseArray_I12vtkStdStringE_SetValue_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<vtkStdString> *op = static_cast<vtkDenseArray<vtkStdString> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  vtkIdType temp2;
  vtkStdString temp3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
    {
    if (ap.IsBound())
      {
      op->SetValue(temp0, temp1, temp2, temp3);
      }
    else
      {
      op->vtkDenseArray<vtkStdString>::SetValue(temp0, temp1, temp2, temp3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkDenseArray_I12vtkStdStringE_SetValue_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<vtkStdString> *op = static_cast<vtkDenseArray<vtkStdString> *>(vp);

  vtkArrayCoordinates *temp0 = NULL;
  PyObject *pobj0 = NULL;
  vtkStdString temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkArrayCoordinates") &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetValue(*temp0, temp1);
      }
    else
      {
      op->vtkDenseArray<vtkStdString>::SetValue(*temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkDenseArray_I12vtkStdStringE_SetValue_Methods[] = {
  {NULL, PyvtkDenseArray_I12vtkStdStringE_SetValue_s1, METH_VARARGS,
   (char*)"@Ls"},
  {NULL, PyvtkDenseArray_I12vtkStdStringE_SetValue_s4, METH_VARARGS,
   (char*)"@Os &vtkArrayCoordinates"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkDenseArray_I12vtkStdStringE_SetValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkDenseArray_I12vtkStdStringE_SetValue_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkDenseArray_I12vtkStdStringE_SetValue_s2(self, args);
    case 4:
      return PyvtkDenseArray_I12vtkStdStringE_SetValue_s3(self, args);
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetValue");
  return NULL;
}



static PyObject *
PyvtkDenseArray_I12vtkStdStringE_SetValueN(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValueN");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<vtkStdString> *op = static_cast<vtkDenseArray<vtkStdString> *>(vp);

  unsigned long long temp0;
  vtkStdString temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetValueN(temp0, temp1);
      }
    else
      {
      op->vtkDenseArray<vtkStdString>::SetValueN(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDenseArray_I12vtkStdStringE_Fill(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Fill");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<vtkStdString> *op = static_cast<vtkDenseArray<vtkStdString> *>(vp);

  vtkStdString temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->Fill(temp0);
      }
    else
      {
      op->vtkDenseArray<vtkStdString>::Fill(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkDenseArray_I12vtkStdStringE_Methods[] = {
  {(char*)"IsDense", PyvtkDenseArray_I12vtkStdStringE_IsDense, METH_VARARGS,
   (char*)"V.IsDense() -> bool\nC++: bool IsDense()\n\n"},
  {(char*)"GetExtents", PyvtkDenseArray_I12vtkStdStringE_GetExtents, METH_VARARGS,
   (char*)"V.GetExtents() -> vtkArrayExtents\nC++: const vtkArrayExtents &GetExtents()\n\n"},
  {(char*)"GetNonNullSize", PyvtkDenseArray_I12vtkStdStringE_GetNonNullSize, METH_VARARGS,
   (char*)"V.GetNonNullSize() -> int\nC++: SizeT GetNonNullSize()\n\n"},
  {(char*)"GetCoordinatesN", PyvtkDenseArray_I12vtkStdStringE_GetCoordinatesN, METH_VARARGS,
   (char*)"V.GetCoordinatesN(int, vtkArrayCoordinates)\nC++: void GetCoordinatesN(const SizeT n,\n    vtkArrayCoordinates &coordinates)\n\n"},
  {(char*)"DeepCopy", PyvtkDenseArray_I12vtkStdStringE_DeepCopy, METH_VARARGS,
   (char*)"V.DeepCopy() -> vtkArray\nC++: vtkArray *DeepCopy()\n\n"},
  {(char*)"GetValue", PyvtkDenseArray_I12vtkStdStringE_GetValue, METH_VARARGS,
   (char*)"V.GetValue(int) -> string\nC++: const vtkStdString &GetValue(CoordinateT i)\nV.GetValue(int, int) -> string\nC++: const vtkStdString &GetValue(CoordinateT i, CoordinateT j)\nV.GetValue(int, int, int) -> string\nC++: const vtkStdString &GetValue(CoordinateT i, CoordinateT j,\n    CoordinateT k)\nV.GetValue(vtkArrayCoordinates) -> string\nC++: const vtkStdString &GetValue(\n    const vtkArrayCoordinates &coordinates)\n\n"},
  {(char*)"GetValueN", PyvtkDenseArray_I12vtkStdStringE_GetValueN, METH_VARARGS,
   (char*)"V.GetValueN(int) -> string\nC++: const vtkStdString &GetValueN(const SizeT n)\n\n"},
  {(char*)"SetValue", PyvtkDenseArray_I12vtkStdStringE_SetValue, METH_VARARGS,
   (char*)"V.SetValue(int, string)\nC++: void SetValue(CoordinateT i, const vtkStdString &value)\nV.SetValue(int, int, string)\nC++: void SetValue(CoordinateT i, CoordinateT j,\n    const vtkStdString &value)\nV.SetValue(int, int, int, string)\nC++: void SetValue(CoordinateT i, CoordinateT j, CoordinateT k,\n    const vtkStdString &value)\nV.SetValue(vtkArrayCoordinates, string)\nC++: void SetValue(const vtkArrayCoordinates &coordinates,\n    const vtkStdString &value)\n\n"},
  {(char*)"SetValueN", PyvtkDenseArray_I12vtkStdStringE_SetValueN, METH_VARARGS,
   (char*)"V.SetValueN(int, string)\nC++: void SetValueN(const SizeT n, const vtkStdString &value)\n\n"},
  {(char*)"Fill", PyvtkDenseArray_I12vtkStdStringE_Fill, METH_VARARGS,
   (char*)"V.Fill(string)\nC++: void Fill(const vtkStdString &value)\n\nFills every element in the array with the given value.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkDenseArray_I12vtkStdStringE_StaticNew()
{
  return vtkDenseArray<vtkStdString>::New();
}

PyObject *PyVTKClass_vtkDenseArray_I12vtkStdStringENew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkDenseArray_I12vtkStdStringE_StaticNew,
    PyvtkDenseArray_I12vtkStdStringE_Methods,
    typeid(vtkDenseArray<vtkStdString>).name(), modulename,
    "vtkDenseArray_I12vtkStdStringE", "vtkDenseArray_I12vtkStdStringE",
    PyvtkDenseArray_I12vtkStdStringE_Doc(),
    PyVTKClass_vtkTypedArray_I12vtkStdStringENew(modulename));
  return cls;
}

const char **PyvtkDenseArray_I12vtkStdStringE_Doc()
{
  static const char *docstring[] = {
    "vtkDenseArray - Contiguous storage for N-way arrays.\n\n",
    "Superclass: vtkTypedArray[str]\n\n",
    "vtkDenseArray is a concrete vtkArray implementation that stores\nvalues using a contiguous block of memory.  Values are stored with\nfortran ordering, meaning that if you iterated over the memory block,\nthe left-most coordinates would vary the fastest.\n\nIn addition to the retrieval and update methods provided by\nvtkTypedArray, vtkDenseArray provides methods to:\n\nFill the entire array with a specific",
    " value.\n\nRetrieve a pointer to the storage memory block.\n\nSee Also:\n\nvtkArray, vtkTypedArray, vtkSparseArray\n\nThanks:\n\nDeveloped by Timothy M. Shead (tshead@sandia.gov) at Sandia National\nLaboratories.\n\n",
    NULL
  };

  return docstring;
}

extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkDenseArray_I16vtkUnicodeStringENew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkTypedArray_I16vtkUnicodeStringENew
extern "C" { PyObject *PyVTKClass_vtkTypedArray_I16vtkUnicodeStringENew(const char *); }
#define DECLARED_PyVTKClass_vtkTypedArray_I16vtkUnicodeStringENew
#endif

static const char **PyvtkDenseArray_I16vtkUnicodeStringE_Doc();


static PyObject *
PyvtkDenseArray_I16vtkUnicodeStringE_IsDense(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsDense");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<vtkUnicodeString> *op = static_cast<vtkDenseArray<vtkUnicodeString> *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->IsDense() :
      op->vtkDenseArray<vtkUnicodeString>::IsDense());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDenseArray_I16vtkUnicodeStringE_GetExtents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetExtents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<vtkUnicodeString> *op = static_cast<vtkDenseArray<vtkUnicodeString> *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const vtkArrayExtents *tempr = (ap.IsBound() ?
      &op->GetExtents() :
      &op->vtkDenseArray<vtkUnicodeString>::GetExtents());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildSpecialObject(tempr, "vtkArrayExtents");
      }
    }

  return result;
}


static PyObject *
PyvtkDenseArray_I16vtkUnicodeStringE_GetNonNullSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNonNullSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<vtkUnicodeString> *op = static_cast<vtkDenseArray<vtkUnicodeString> *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned long long tempr = (ap.IsBound() ?
      op->GetNonNullSize() :
      op->vtkDenseArray<vtkUnicodeString>::GetNonNullSize());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDenseArray_I16vtkUnicodeStringE_GetCoordinatesN(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCoordinatesN");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<vtkUnicodeString> *op = static_cast<vtkDenseArray<vtkUnicodeString> *>(vp);

  unsigned long long temp0;
  vtkArrayCoordinates *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetSpecialObject(temp1, "vtkArrayCoordinates"))
    {
    if (ap.IsBound())
      {
      op->GetCoordinatesN(temp0, *temp1);
      }
    else
      {
      op->vtkDenseArray<vtkUnicodeString>::GetCoordinatesN(temp0, *temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDenseArray_I16vtkUnicodeStringE_DeepCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeepCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<vtkUnicodeString> *op = static_cast<vtkDenseArray<vtkUnicodeString> *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkArray *tempr = (ap.IsBound() ?
      op->DeepCopy() :
      op->vtkDenseArray<vtkUnicodeString>::DeepCopy());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDenseArray_I16vtkUnicodeStringE_GetValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<vtkUnicodeString> *op = static_cast<vtkDenseArray<vtkUnicodeString> *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    const vtkUnicodeString *tempr = (ap.IsBound() ?
      &op->GetValue(temp0) :
      &op->vtkDenseArray<vtkUnicodeString>::GetValue(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(*tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkDenseArray_I16vtkUnicodeStringE_GetValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<vtkUnicodeString> *op = static_cast<vtkDenseArray<vtkUnicodeString> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    const vtkUnicodeString *tempr = (ap.IsBound() ?
      &op->GetValue(temp0, temp1) :
      &op->vtkDenseArray<vtkUnicodeString>::GetValue(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(*tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkDenseArray_I16vtkUnicodeStringE_GetValue_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<vtkUnicodeString> *op = static_cast<vtkDenseArray<vtkUnicodeString> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  vtkIdType temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    const vtkUnicodeString *tempr = (ap.IsBound() ?
      &op->GetValue(temp0, temp1, temp2) :
      &op->vtkDenseArray<vtkUnicodeString>::GetValue(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(*tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkDenseArray_I16vtkUnicodeStringE_GetValue_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<vtkUnicodeString> *op = static_cast<vtkDenseArray<vtkUnicodeString> *>(vp);

  vtkArrayCoordinates *temp0 = NULL;
  PyObject *pobj0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkArrayCoordinates"))
    {
    const vtkUnicodeString *tempr = (ap.IsBound() ?
      &op->GetValue(*temp0) :
      &op->vtkDenseArray<vtkUnicodeString>::GetValue(*temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(*tempr);
      }
    }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkDenseArray_I16vtkUnicodeStringE_GetValue_Methods[] = {
  {NULL, PyvtkDenseArray_I16vtkUnicodeStringE_GetValue_s1, METH_VARARGS,
   (char*)"@L"},
  {NULL, PyvtkDenseArray_I16vtkUnicodeStringE_GetValue_s4, METH_VARARGS,
   (char*)"@O &vtkArrayCoordinates"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkDenseArray_I16vtkUnicodeStringE_GetValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkDenseArray_I16vtkUnicodeStringE_GetValue_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkDenseArray_I16vtkUnicodeStringE_GetValue_s2(self, args);
    case 3:
      return PyvtkDenseArray_I16vtkUnicodeStringE_GetValue_s3(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetValue");
  return NULL;
}



static PyObject *
PyvtkDenseArray_I16vtkUnicodeStringE_GetValueN(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValueN");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<vtkUnicodeString> *op = static_cast<vtkDenseArray<vtkUnicodeString> *>(vp);

  unsigned long long temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    const vtkUnicodeString *tempr = (ap.IsBound() ?
      &op->GetValueN(temp0) :
      &op->vtkDenseArray<vtkUnicodeString>::GetValueN(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(*tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDenseArray_I16vtkUnicodeStringE_SetValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<vtkUnicodeString> *op = static_cast<vtkDenseArray<vtkUnicodeString> *>(vp);

  vtkIdType temp0;
  vtkUnicodeString temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetValue(temp0, temp1);
      }
    else
      {
      op->vtkDenseArray<vtkUnicodeString>::SetValue(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkDenseArray_I16vtkUnicodeStringE_SetValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<vtkUnicodeString> *op = static_cast<vtkDenseArray<vtkUnicodeString> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  vtkUnicodeString temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      op->SetValue(temp0, temp1, temp2);
      }
    else
      {
      op->vtkDenseArray<vtkUnicodeString>::SetValue(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkDenseArray_I16vtkUnicodeStringE_SetValue_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<vtkUnicodeString> *op = static_cast<vtkDenseArray<vtkUnicodeString> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  vtkIdType temp2;
  vtkUnicodeString temp3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
    {
    if (ap.IsBound())
      {
      op->SetValue(temp0, temp1, temp2, temp3);
      }
    else
      {
      op->vtkDenseArray<vtkUnicodeString>::SetValue(temp0, temp1, temp2, temp3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkDenseArray_I16vtkUnicodeStringE_SetValue_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<vtkUnicodeString> *op = static_cast<vtkDenseArray<vtkUnicodeString> *>(vp);

  vtkArrayCoordinates *temp0 = NULL;
  PyObject *pobj0 = NULL;
  vtkUnicodeString temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkArrayCoordinates") &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetValue(*temp0, temp1);
      }
    else
      {
      op->vtkDenseArray<vtkUnicodeString>::SetValue(*temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkDenseArray_I16vtkUnicodeStringE_SetValue_Methods[] = {
  {NULL, PyvtkDenseArray_I16vtkUnicodeStringE_SetValue_s1, METH_VARARGS,
   (char*)"@LO unicode"},
  {NULL, PyvtkDenseArray_I16vtkUnicodeStringE_SetValue_s4, METH_VARARGS,
   (char*)"@OO &vtkArrayCoordinates unicode"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkDenseArray_I16vtkUnicodeStringE_SetValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkDenseArray_I16vtkUnicodeStringE_SetValue_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkDenseArray_I16vtkUnicodeStringE_SetValue_s2(self, args);
    case 4:
      return PyvtkDenseArray_I16vtkUnicodeStringE_SetValue_s3(self, args);
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetValue");
  return NULL;
}



static PyObject *
PyvtkDenseArray_I16vtkUnicodeStringE_SetValueN(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValueN");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<vtkUnicodeString> *op = static_cast<vtkDenseArray<vtkUnicodeString> *>(vp);

  unsigned long long temp0;
  vtkUnicodeString temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetValueN(temp0, temp1);
      }
    else
      {
      op->vtkDenseArray<vtkUnicodeString>::SetValueN(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDenseArray_I16vtkUnicodeStringE_Fill(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Fill");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<vtkUnicodeString> *op = static_cast<vtkDenseArray<vtkUnicodeString> *>(vp);

  vtkUnicodeString temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->Fill(temp0);
      }
    else
      {
      op->vtkDenseArray<vtkUnicodeString>::Fill(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkDenseArray_I16vtkUnicodeStringE_Methods[] = {
  {(char*)"IsDense", PyvtkDenseArray_I16vtkUnicodeStringE_IsDense, METH_VARARGS,
   (char*)"V.IsDense() -> bool\nC++: bool IsDense()\n\n"},
  {(char*)"GetExtents", PyvtkDenseArray_I16vtkUnicodeStringE_GetExtents, METH_VARARGS,
   (char*)"V.GetExtents() -> vtkArrayExtents\nC++: const vtkArrayExtents &GetExtents()\n\n"},
  {(char*)"GetNonNullSize", PyvtkDenseArray_I16vtkUnicodeStringE_GetNonNullSize, METH_VARARGS,
   (char*)"V.GetNonNullSize() -> int\nC++: SizeT GetNonNullSize()\n\n"},
  {(char*)"GetCoordinatesN", PyvtkDenseArray_I16vtkUnicodeStringE_GetCoordinatesN, METH_VARARGS,
   (char*)"V.GetCoordinatesN(int, vtkArrayCoordinates)\nC++: void GetCoordinatesN(const SizeT n,\n    vtkArrayCoordinates &coordinates)\n\n"},
  {(char*)"DeepCopy", PyvtkDenseArray_I16vtkUnicodeStringE_DeepCopy, METH_VARARGS,
   (char*)"V.DeepCopy() -> vtkArray\nC++: vtkArray *DeepCopy()\n\n"},
  {(char*)"GetValue", PyvtkDenseArray_I16vtkUnicodeStringE_GetValue, METH_VARARGS,
   (char*)"V.GetValue(int) -> unicode\nC++: const vtkUnicodeString &GetValue(CoordinateT i)\nV.GetValue(int, int) -> unicode\nC++: const vtkUnicodeString &GetValue(CoordinateT i,\n    CoordinateT j)\nV.GetValue(int, int, int) -> unicode\nC++: const vtkUnicodeString &GetValue(CoordinateT i,\n    CoordinateT j, CoordinateT k)\nV.GetValue(vtkArrayCoordinates) -> unicode\nC++: const vtkUnicodeString &GetValue(\n    const vtkArrayCoordinates &coordinates)\n\n"},
  {(char*)"GetValueN", PyvtkDenseArray_I16vtkUnicodeStringE_GetValueN, METH_VARARGS,
   (char*)"V.GetValueN(int) -> unicode\nC++: const vtkUnicodeString &GetValueN(const SizeT n)\n\n"},
  {(char*)"SetValue", PyvtkDenseArray_I16vtkUnicodeStringE_SetValue, METH_VARARGS,
   (char*)"V.SetValue(int, unicode)\nC++: void SetValue(CoordinateT i, const vtkUnicodeString &value)\nV.SetValue(int, int, unicode)\nC++: void SetValue(CoordinateT i, CoordinateT j,\n    const vtkUnicodeString &value)\nV.SetValue(int, int, int, unicode)\nC++: void SetValue(CoordinateT i, CoordinateT j, CoordinateT k,\n    const vtkUnicodeString &value)\nV.SetValue(vtkArrayCoordinates, unicode)\nC++: void SetValue(const vtkArrayCoordinates &coordinates,\n    const vtkUnicodeString &value)\n\n"},
  {(char*)"SetValueN", PyvtkDenseArray_I16vtkUnicodeStringE_SetValueN, METH_VARARGS,
   (char*)"V.SetValueN(int, unicode)\nC++: void SetValueN(const SizeT n, const vtkUnicodeString &value)\n\n"},
  {(char*)"Fill", PyvtkDenseArray_I16vtkUnicodeStringE_Fill, METH_VARARGS,
   (char*)"V.Fill(unicode)\nC++: void Fill(const vtkUnicodeString &value)\n\nFills every element in the array with the given value.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkDenseArray_I16vtkUnicodeStringE_StaticNew()
{
  return vtkDenseArray<vtkUnicodeString>::New();
}

PyObject *PyVTKClass_vtkDenseArray_I16vtkUnicodeStringENew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkDenseArray_I16vtkUnicodeStringE_StaticNew,
    PyvtkDenseArray_I16vtkUnicodeStringE_Methods,
    typeid(vtkDenseArray<vtkUnicodeString>).name(), modulename,
    "vtkDenseArray_I16vtkUnicodeStringE", "vtkDenseArray_I16vtkUnicodeStringE",
    PyvtkDenseArray_I16vtkUnicodeStringE_Doc(),
    PyVTKClass_vtkTypedArray_I16vtkUnicodeStringENew(modulename));
  return cls;
}

const char **PyvtkDenseArray_I16vtkUnicodeStringE_Doc()
{
  static const char *docstring[] = {
    "vtkDenseArray - Contiguous storage for N-way arrays.\n\n",
    "Superclass: vtkTypedArray[unicode]\n\n",
    "vtkDenseArray is a concrete vtkArray implementation that stores\nvalues using a contiguous block of memory.  Values are stored with\nfortran ordering, meaning that if you iterated over the memory block,\nthe left-most coordinates would vary the fastest.\n\nIn addition to the retrieval and update methods provided by\nvtkTypedArray, vtkDenseArray provides methods to:\n\nFill the entire array with a specific",
    " value.\n\nRetrieve a pointer to the storage memory block.\n\nSee Also:\n\nvtkArray, vtkTypedArray, vtkSparseArray\n\nThanks:\n\nDeveloped by Timothy M. Shead (tshead@sandia.gov) at Sandia National\nLaboratories.\n\n",
    NULL
  };

  return docstring;
}

extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkDenseArray_I10vtkVariantENew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkTypedArray_I10vtkVariantENew
extern "C" { PyObject *PyVTKClass_vtkTypedArray_I10vtkVariantENew(const char *); }
#define DECLARED_PyVTKClass_vtkTypedArray_I10vtkVariantENew
#endif

static const char **PyvtkDenseArray_I10vtkVariantE_Doc();


static PyObject *
PyvtkDenseArray_I10vtkVariantE_IsDense(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsDense");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<vtkVariant> *op = static_cast<vtkDenseArray<vtkVariant> *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->IsDense() :
      op->vtkDenseArray<vtkVariant>::IsDense());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDenseArray_I10vtkVariantE_GetExtents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetExtents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<vtkVariant> *op = static_cast<vtkDenseArray<vtkVariant> *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const vtkArrayExtents *tempr = (ap.IsBound() ?
      &op->GetExtents() :
      &op->vtkDenseArray<vtkVariant>::GetExtents());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildSpecialObject(tempr, "vtkArrayExtents");
      }
    }

  return result;
}


static PyObject *
PyvtkDenseArray_I10vtkVariantE_GetNonNullSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNonNullSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<vtkVariant> *op = static_cast<vtkDenseArray<vtkVariant> *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned long long tempr = (ap.IsBound() ?
      op->GetNonNullSize() :
      op->vtkDenseArray<vtkVariant>::GetNonNullSize());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDenseArray_I10vtkVariantE_GetCoordinatesN(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCoordinatesN");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<vtkVariant> *op = static_cast<vtkDenseArray<vtkVariant> *>(vp);

  unsigned long long temp0;
  vtkArrayCoordinates *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetSpecialObject(temp1, "vtkArrayCoordinates"))
    {
    if (ap.IsBound())
      {
      op->GetCoordinatesN(temp0, *temp1);
      }
    else
      {
      op->vtkDenseArray<vtkVariant>::GetCoordinatesN(temp0, *temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDenseArray_I10vtkVariantE_DeepCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeepCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<vtkVariant> *op = static_cast<vtkDenseArray<vtkVariant> *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkArray *tempr = (ap.IsBound() ?
      op->DeepCopy() :
      op->vtkDenseArray<vtkVariant>::DeepCopy());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDenseArray_I10vtkVariantE_GetValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<vtkVariant> *op = static_cast<vtkDenseArray<vtkVariant> *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    const vtkVariant *tempr = (ap.IsBound() ?
      &op->GetValue(temp0) :
      &op->vtkDenseArray<vtkVariant>::GetValue(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildSpecialObject(tempr, "vtkVariant");
      }
    }

  return result;
}

static PyObject *
PyvtkDenseArray_I10vtkVariantE_GetValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<vtkVariant> *op = static_cast<vtkDenseArray<vtkVariant> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    const vtkVariant *tempr = (ap.IsBound() ?
      &op->GetValue(temp0, temp1) :
      &op->vtkDenseArray<vtkVariant>::GetValue(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildSpecialObject(tempr, "vtkVariant");
      }
    }

  return result;
}

static PyObject *
PyvtkDenseArray_I10vtkVariantE_GetValue_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<vtkVariant> *op = static_cast<vtkDenseArray<vtkVariant> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  vtkIdType temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    const vtkVariant *tempr = (ap.IsBound() ?
      &op->GetValue(temp0, temp1, temp2) :
      &op->vtkDenseArray<vtkVariant>::GetValue(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildSpecialObject(tempr, "vtkVariant");
      }
    }

  return result;
}

static PyObject *
PyvtkDenseArray_I10vtkVariantE_GetValue_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<vtkVariant> *op = static_cast<vtkDenseArray<vtkVariant> *>(vp);

  vtkArrayCoordinates *temp0 = NULL;
  PyObject *pobj0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkArrayCoordinates"))
    {
    const vtkVariant *tempr = (ap.IsBound() ?
      &op->GetValue(*temp0) :
      &op->vtkDenseArray<vtkVariant>::GetValue(*temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildSpecialObject(tempr, "vtkVariant");
      }
    }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkDenseArray_I10vtkVariantE_GetValue_Methods[] = {
  {NULL, PyvtkDenseArray_I10vtkVariantE_GetValue_s1, METH_VARARGS,
   (char*)"@L"},
  {NULL, PyvtkDenseArray_I10vtkVariantE_GetValue_s4, METH_VARARGS,
   (char*)"@O &vtkArrayCoordinates"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkDenseArray_I10vtkVariantE_GetValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkDenseArray_I10vtkVariantE_GetValue_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkDenseArray_I10vtkVariantE_GetValue_s2(self, args);
    case 3:
      return PyvtkDenseArray_I10vtkVariantE_GetValue_s3(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetValue");
  return NULL;
}



static PyObject *
PyvtkDenseArray_I10vtkVariantE_GetValueN(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValueN");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<vtkVariant> *op = static_cast<vtkDenseArray<vtkVariant> *>(vp);

  unsigned long long temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    const vtkVariant *tempr = (ap.IsBound() ?
      &op->GetValueN(temp0) :
      &op->vtkDenseArray<vtkVariant>::GetValueN(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildSpecialObject(tempr, "vtkVariant");
      }
    }

  return result;
}


static PyObject *
PyvtkDenseArray_I10vtkVariantE_SetValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<vtkVariant> *op = static_cast<vtkDenseArray<vtkVariant> *>(vp);

  vtkIdType temp0;
  vtkVariant *temp1 = NULL;
  PyObject *pobj1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetSpecialObject(temp1, pobj1, "vtkVariant"))
    {
    if (ap.IsBound())
      {
      op->SetValue(temp0, *temp1);
      }
    else
      {
      op->vtkDenseArray<vtkVariant>::SetValue(temp0, *temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  Py_XDECREF(pobj1);

  return result;
}

static PyObject *
PyvtkDenseArray_I10vtkVariantE_SetValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<vtkVariant> *op = static_cast<vtkDenseArray<vtkVariant> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  vtkVariant *temp2 = NULL;
  PyObject *pobj2 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetSpecialObject(temp2, pobj2, "vtkVariant"))
    {
    if (ap.IsBound())
      {
      op->SetValue(temp0, temp1, *temp2);
      }
    else
      {
      op->vtkDenseArray<vtkVariant>::SetValue(temp0, temp1, *temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  Py_XDECREF(pobj2);

  return result;
}

static PyObject *
PyvtkDenseArray_I10vtkVariantE_SetValue_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<vtkVariant> *op = static_cast<vtkDenseArray<vtkVariant> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  vtkIdType temp2;
  vtkVariant *temp3 = NULL;
  PyObject *pobj3 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetSpecialObject(temp3, pobj3, "vtkVariant"))
    {
    if (ap.IsBound())
      {
      op->SetValue(temp0, temp1, temp2, *temp3);
      }
    else
      {
      op->vtkDenseArray<vtkVariant>::SetValue(temp0, temp1, temp2, *temp3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  Py_XDECREF(pobj3);

  return result;
}

static PyObject *
PyvtkDenseArray_I10vtkVariantE_SetValue_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<vtkVariant> *op = static_cast<vtkDenseArray<vtkVariant> *>(vp);

  vtkArrayCoordinates *temp0 = NULL;
  PyObject *pobj0 = NULL;
  vtkVariant *temp1 = NULL;
  PyObject *pobj1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkArrayCoordinates") &&
      ap.GetSpecialObject(temp1, pobj1, "vtkVariant"))
    {
    if (ap.IsBound())
      {
      op->SetValue(*temp0, *temp1);
      }
    else
      {
      op->vtkDenseArray<vtkVariant>::SetValue(*temp0, *temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  Py_XDECREF(pobj0);
  Py_XDECREF(pobj1);

  return result;
}

static PyMethodDef PyvtkDenseArray_I10vtkVariantE_SetValue_Methods[] = {
  {NULL, PyvtkDenseArray_I10vtkVariantE_SetValue_s1, METH_VARARGS,
   (char*)"@LO &vtkVariant"},
  {NULL, PyvtkDenseArray_I10vtkVariantE_SetValue_s4, METH_VARARGS,
   (char*)"@OO &vtkArrayCoordinates &vtkVariant"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkDenseArray_I10vtkVariantE_SetValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkDenseArray_I10vtkVariantE_SetValue_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkDenseArray_I10vtkVariantE_SetValue_s2(self, args);
    case 4:
      return PyvtkDenseArray_I10vtkVariantE_SetValue_s3(self, args);
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetValue");
  return NULL;
}



static PyObject *
PyvtkDenseArray_I10vtkVariantE_SetValueN(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValueN");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<vtkVariant> *op = static_cast<vtkDenseArray<vtkVariant> *>(vp);

  unsigned long long temp0;
  vtkVariant *temp1 = NULL;
  PyObject *pobj1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetSpecialObject(temp1, pobj1, "vtkVariant"))
    {
    if (ap.IsBound())
      {
      op->SetValueN(temp0, *temp1);
      }
    else
      {
      op->vtkDenseArray<vtkVariant>::SetValueN(temp0, *temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  Py_XDECREF(pobj1);

  return result;
}


static PyObject *
PyvtkDenseArray_I10vtkVariantE_Fill(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Fill");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<vtkVariant> *op = static_cast<vtkDenseArray<vtkVariant> *>(vp);

  vtkVariant *temp0 = NULL;
  PyObject *pobj0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkVariant"))
    {
    if (ap.IsBound())
      {
      op->Fill(*temp0);
      }
    else
      {
      op->vtkDenseArray<vtkVariant>::Fill(*temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkDenseArray_I10vtkVariantE_Methods[] = {
  {(char*)"IsDense", PyvtkDenseArray_I10vtkVariantE_IsDense, METH_VARARGS,
   (char*)"V.IsDense() -> bool\nC++: bool IsDense()\n\n"},
  {(char*)"GetExtents", PyvtkDenseArray_I10vtkVariantE_GetExtents, METH_VARARGS,
   (char*)"V.GetExtents() -> vtkArrayExtents\nC++: const vtkArrayExtents &GetExtents()\n\n"},
  {(char*)"GetNonNullSize", PyvtkDenseArray_I10vtkVariantE_GetNonNullSize, METH_VARARGS,
   (char*)"V.GetNonNullSize() -> int\nC++: SizeT GetNonNullSize()\n\n"},
  {(char*)"GetCoordinatesN", PyvtkDenseArray_I10vtkVariantE_GetCoordinatesN, METH_VARARGS,
   (char*)"V.GetCoordinatesN(int, vtkArrayCoordinates)\nC++: void GetCoordinatesN(const SizeT n,\n    vtkArrayCoordinates &coordinates)\n\n"},
  {(char*)"DeepCopy", PyvtkDenseArray_I10vtkVariantE_DeepCopy, METH_VARARGS,
   (char*)"V.DeepCopy() -> vtkArray\nC++: vtkArray *DeepCopy()\n\n"},
  {(char*)"GetValue", PyvtkDenseArray_I10vtkVariantE_GetValue, METH_VARARGS,
   (char*)"V.GetValue(int) -> vtkVariant\nC++: const vtkVariant &GetValue(CoordinateT i)\nV.GetValue(int, int) -> vtkVariant\nC++: const vtkVariant &GetValue(CoordinateT i, CoordinateT j)\nV.GetValue(int, int, int) -> vtkVariant\nC++: const vtkVariant &GetValue(CoordinateT i, CoordinateT j,\n    CoordinateT k)\nV.GetValue(vtkArrayCoordinates) -> vtkVariant\nC++: const vtkVariant &GetValue(\n    const vtkArrayCoordinates &coordinates)\n\n"},
  {(char*)"GetValueN", PyvtkDenseArray_I10vtkVariantE_GetValueN, METH_VARARGS,
   (char*)"V.GetValueN(int) -> vtkVariant\nC++: const vtkVariant &GetValueN(const SizeT n)\n\n"},
  {(char*)"SetValue", PyvtkDenseArray_I10vtkVariantE_SetValue, METH_VARARGS,
   (char*)"V.SetValue(int, vtkVariant)\nC++: void SetValue(CoordinateT i, const vtkVariant &value)\nV.SetValue(int, int, vtkVariant)\nC++: void SetValue(CoordinateT i, CoordinateT j,\n    const vtkVariant &value)\nV.SetValue(int, int, int, vtkVariant)\nC++: void SetValue(CoordinateT i, CoordinateT j, CoordinateT k,\n    const vtkVariant &value)\nV.SetValue(vtkArrayCoordinates, vtkVariant)\nC++: void SetValue(const vtkArrayCoordinates &coordinates,\n    const vtkVariant &value)\n\n"},
  {(char*)"SetValueN", PyvtkDenseArray_I10vtkVariantE_SetValueN, METH_VARARGS,
   (char*)"V.SetValueN(int, vtkVariant)\nC++: void SetValueN(const SizeT n, const vtkVariant &value)\n\n"},
  {(char*)"Fill", PyvtkDenseArray_I10vtkVariantE_Fill, METH_VARARGS,
   (char*)"V.Fill(vtkVariant)\nC++: void Fill(const vtkVariant &value)\n\nFills every element in the array with the given value.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkDenseArray_I10vtkVariantE_StaticNew()
{
  return vtkDenseArray<vtkVariant>::New();
}

PyObject *PyVTKClass_vtkDenseArray_I10vtkVariantENew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkDenseArray_I10vtkVariantE_StaticNew,
    PyvtkDenseArray_I10vtkVariantE_Methods,
    typeid(vtkDenseArray<vtkVariant>).name(), modulename,
    "vtkDenseArray_I10vtkVariantE", "vtkDenseArray_I10vtkVariantE",
    PyvtkDenseArray_I10vtkVariantE_Doc(),
    PyVTKClass_vtkTypedArray_I10vtkVariantENew(modulename));
  return cls;
}

const char **PyvtkDenseArray_I10vtkVariantE_Doc()
{
  static const char *docstring[] = {
    "vtkDenseArray - Contiguous storage for N-way arrays.\n\n",
    "Superclass: vtkTypedArray[vtkVariant]\n\n",
    "vtkDenseArray is a concrete vtkArray implementation that stores\nvalues using a contiguous block of memory.  Values are stored with\nfortran ordering, meaning that if you iterated over the memory block,\nthe left-most coordinates would vary the fastest.\n\nIn addition to the retrieval and update methods provided by\nvtkTypedArray, vtkDenseArray provides methods to:\n\nFill the entire array with a specific",
    " value.\n\nRetrieve a pointer to the storage memory block.\n\nSee Also:\n\nvtkArray, vtkTypedArray, vtkSparseArray\n\nThanks:\n\nDeveloped by Timothy M. Shead (tshead@sandia.gov) at Sandia National\nLaboratories.\n\n",
    NULL
  };

  return docstring;
}

static const char *PyvtkDenseArray_Doc[] = {
    "vtkDenseArray - Contiguous storage for N-way arrays.\n\n",
    "Superclass: vtkTypedArray[T]\n\n",
    "vtkDenseArray is a concrete vtkArray implementation that stores\nvalues using a contiguous block of memory.  Values are stored with\nfortran ordering, meaning that if you iterated over the memory block,\nthe left-most coordinates would vary the fastest.\n\nIn addition to the retrieval and update methods provided by\nvtkTypedArray, vtkDenseArray provides methods to:\n\nFill the entire array with a specific",
    " value.\n\nRetrieve a pointer to the storage memory block.\n\nSee Also:\n\nvtkArray, vtkTypedArray, vtkSparseArray\n\nThanks:\n\nDeveloped by Timothy M. Shead (tshead@sandia.gov) at Sandia National\nLaboratories.\n\n",
    "\nProvided Types:\n\n",
    "  vtkDenseArray[char] => vtkDenseArray<char>\n",
    "  vtkDenseArray[int8] => vtkDenseArray<signed char>\n",
    "  vtkDenseArray[uint8] => vtkDenseArray<unsigned char>\n",
    "  vtkDenseArray[int16] => vtkDenseArray<short>\n",
    "  vtkDenseArray[uint16] => vtkDenseArray<unsigned short>\n",
    "  vtkDenseArray[int32] => vtkDenseArray<int>\n",
    "  vtkDenseArray[uint32] => vtkDenseArray<unsigned int>\n",
    "  vtkDenseArray[int] => vtkDenseArray<long>\n",
    "  vtkDenseArray[uint] => vtkDenseArray<unsigned long>\n",
    "  vtkDenseArray[int64] => vtkDenseArray<long long>\n",
    "  vtkDenseArray[uint64] => vtkDenseArray<unsigned long long>\n",
    "  vtkDenseArray[float32] => vtkDenseArray<float>\n",
    "  vtkDenseArray[float64] => vtkDenseArray<double>\n",
    "  vtkDenseArray[str] => vtkDenseArray<vtkStdString>\n",
    "  vtkDenseArray[unicode] => vtkDenseArray<vtkUnicodeString>\n",
    "  vtkDenseArray[vtkVariant] => vtkDenseArray<vtkVariant>\n",
    NULL
};

PyObject *PyvtkDenseArray_TemplateNew(const char *modulename)
{
  PyObject *o;

  PyObject *temp = PyVTKTemplate_New("vtkDenseArray", modulename,
                                     PyvtkDenseArray_Doc);

  o = PyVTKClass_vtkDenseArray_IcENew(modulename);
  if (o && PyVTKTemplate_AddItem(temp, o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyVTKClass_vtkDenseArray_IaENew(modulename);
  if (o && PyVTKTemplate_AddItem(temp, o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyVTKClass_vtkDenseArray_IhENew(modulename);
  if (o && PyVTKTemplate_AddItem(temp, o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyVTKClass_vtkDenseArray_IsENew(modulename);
  if (o && PyVTKTemplate_AddItem(temp, o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyVTKClass_vtkDenseArray_ItENew(modulename);
  if (o && PyVTKTemplate_AddItem(temp, o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyVTKClass_vtkDenseArray_IiENew(modulename);
  if (o && PyVTKTemplate_AddItem(temp, o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyVTKClass_vtkDenseArray_IjENew(modulename);
  if (o && PyVTKTemplate_AddItem(temp, o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyVTKClass_vtkDenseArray_IlENew(modulename);
  if (o && PyVTKTemplate_AddItem(temp, o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyVTKClass_vtkDenseArray_ImENew(modulename);
  if (o && PyVTKTemplate_AddItem(temp, o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyVTKClass_vtkDenseArray_IxENew(modulename);
  if (o && PyVTKTemplate_AddItem(temp, o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyVTKClass_vtkDenseArray_IyENew(modulename);
  if (o && PyVTKTemplate_AddItem(temp, o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyVTKClass_vtkDenseArray_IfENew(modulename);
  if (o && PyVTKTemplate_AddItem(temp, o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyVTKClass_vtkDenseArray_IdENew(modulename);
  if (o && PyVTKTemplate_AddItem(temp, o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyVTKClass_vtkDenseArray_I12vtkStdStringENew(modulename);
  if (o && PyVTKTemplate_AddItem(temp, o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyVTKClass_vtkDenseArray_I16vtkUnicodeStringENew(modulename);
  if (o && PyVTKTemplate_AddItem(temp, o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyVTKClass_vtkDenseArray_I10vtkVariantENew(modulename);
  if (o && PyVTKTemplate_AddItem(temp, o) != 0)
    {
    Py_DECREF(o);
    }

  return temp;
}

void PyVTKAddFile_vtkDenseArray(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyvtkDenseArray_TemplateNew(modulename);

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

  if (o && PyDict_SetItemString(dict, (char *)"vtkDenseArray", o) != 0)
    {
    Py_DECREF(o);
    }

}

