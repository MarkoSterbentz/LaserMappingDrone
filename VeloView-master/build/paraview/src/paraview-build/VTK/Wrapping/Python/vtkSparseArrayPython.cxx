// python wrapper for vtkSparseArray
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
#include "vtkArraySort.h"
#include "vtkSparseArray.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkSparseArray(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkSparseArray_IcENew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkTypedArray_IcENew
extern "C" { PyObject *PyVTKClass_vtkTypedArray_IcENew(const char *); }
#define DECLARED_PyVTKClass_vtkTypedArray_IcENew
#endif

static const char **PyvtkSparseArray_IcE_Doc();


static PyObject *
PyvtkSparseArray_IcE_IsDense(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsDense");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<char> *op = static_cast<vtkSparseArray<char> *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->IsDense() :
      op->vtkSparseArray<char>::IsDense());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSparseArray_IcE_GetExtents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetExtents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<char> *op = static_cast<vtkSparseArray<char> *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const vtkArrayExtents *tempr = (ap.IsBound() ?
      &op->GetExtents() :
      &op->vtkSparseArray<char>::GetExtents());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildSpecialObject(tempr, "vtkArrayExtents");
      }
    }

  return result;
}


static PyObject *
PyvtkSparseArray_IcE_GetNonNullSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNonNullSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<char> *op = static_cast<vtkSparseArray<char> *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned long long tempr = (ap.IsBound() ?
      op->GetNonNullSize() :
      op->vtkSparseArray<char>::GetNonNullSize());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSparseArray_IcE_GetCoordinatesN(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCoordinatesN");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<char> *op = static_cast<vtkSparseArray<char> *>(vp);

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
      op->vtkSparseArray<char>::GetCoordinatesN(temp0, *temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSparseArray_IcE_DeepCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeepCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<char> *op = static_cast<vtkSparseArray<char> *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkArray *tempr = (ap.IsBound() ?
      op->DeepCopy() :
      op->vtkSparseArray<char>::DeepCopy());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSparseArray_IcE_GetValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<char> *op = static_cast<vtkSparseArray<char> *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    const char *tempr = (ap.IsBound() ?
      &op->GetValue(temp0) :
      &op->vtkSparseArray<char>::GetValue(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(*tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkSparseArray_IcE_GetValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<char> *op = static_cast<vtkSparseArray<char> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    const char *tempr = (ap.IsBound() ?
      &op->GetValue(temp0, temp1) :
      &op->vtkSparseArray<char>::GetValue(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(*tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkSparseArray_IcE_GetValue_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<char> *op = static_cast<vtkSparseArray<char> *>(vp);

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
      &op->vtkSparseArray<char>::GetValue(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(*tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkSparseArray_IcE_GetValue_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<char> *op = static_cast<vtkSparseArray<char> *>(vp);

  vtkArrayCoordinates *temp0 = NULL;
  PyObject *pobj0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkArrayCoordinates"))
    {
    const char *tempr = (ap.IsBound() ?
      &op->GetValue(*temp0) :
      &op->vtkSparseArray<char>::GetValue(*temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(*tempr);
      }
    }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkSparseArray_IcE_GetValue_Methods[] = {
  {NULL, PyvtkSparseArray_IcE_GetValue_s1, METH_VARARGS,
   (char*)"@L"},
  {NULL, PyvtkSparseArray_IcE_GetValue_s4, METH_VARARGS,
   (char*)"@O &vtkArrayCoordinates"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkSparseArray_IcE_GetValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkSparseArray_IcE_GetValue_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkSparseArray_IcE_GetValue_s2(self, args);
    case 3:
      return PyvtkSparseArray_IcE_GetValue_s3(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetValue");
  return NULL;
}



static PyObject *
PyvtkSparseArray_IcE_GetValueN(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValueN");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<char> *op = static_cast<vtkSparseArray<char> *>(vp);

  unsigned long long temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    const char *tempr = (ap.IsBound() ?
      &op->GetValueN(temp0) :
      &op->vtkSparseArray<char>::GetValueN(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(*tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSparseArray_IcE_SetValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<char> *op = static_cast<vtkSparseArray<char> *>(vp);

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
      op->vtkSparseArray<char>::SetValue(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkSparseArray_IcE_SetValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<char> *op = static_cast<vtkSparseArray<char> *>(vp);

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
      op->vtkSparseArray<char>::SetValue(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkSparseArray_IcE_SetValue_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<char> *op = static_cast<vtkSparseArray<char> *>(vp);

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
      op->vtkSparseArray<char>::SetValue(temp0, temp1, temp2, temp3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkSparseArray_IcE_SetValue_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<char> *op = static_cast<vtkSparseArray<char> *>(vp);

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
      op->vtkSparseArray<char>::SetValue(*temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkSparseArray_IcE_SetValue_Methods[] = {
  {NULL, PyvtkSparseArray_IcE_SetValue_s1, METH_VARARGS,
   (char*)"@Lc"},
  {NULL, PyvtkSparseArray_IcE_SetValue_s4, METH_VARARGS,
   (char*)"@Oc &vtkArrayCoordinates"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkSparseArray_IcE_SetValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkSparseArray_IcE_SetValue_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkSparseArray_IcE_SetValue_s2(self, args);
    case 4:
      return PyvtkSparseArray_IcE_SetValue_s3(self, args);
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetValue");
  return NULL;
}



static PyObject *
PyvtkSparseArray_IcE_SetValueN(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValueN");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<char> *op = static_cast<vtkSparseArray<char> *>(vp);

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
      op->vtkSparseArray<char>::SetValueN(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSparseArray_IcE_SetNullValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNullValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<char> *op = static_cast<vtkSparseArray<char> *>(vp);

  char temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetNullValue(temp0);
      }
    else
      {
      op->vtkSparseArray<char>::SetNullValue(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSparseArray_IcE_GetNullValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNullValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<char> *op = static_cast<vtkSparseArray<char> *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      &op->GetNullValue() :
      &op->vtkSparseArray<char>::GetNullValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(*tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSparseArray_IcE_Clear(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Clear");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<char> *op = static_cast<vtkSparseArray<char> *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Clear();
      }
    else
      {
      op->vtkSparseArray<char>::Clear();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSparseArray_IcE_Sort(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Sort");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<char> *op = static_cast<vtkSparseArray<char> *>(vp);

  vtkArraySort *temp0 = NULL;
  PyObject *pobj0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkArraySort"))
    {
    if (ap.IsBound())
      {
      op->Sort(*temp0);
      }
    else
      {
      op->vtkSparseArray<char>::Sort(*temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  Py_XDECREF(pobj0);

  return result;
}


static PyObject *
PyvtkSparseArray_IcE_GetCoordinateStorage(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCoordinateStorage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<char> *op = static_cast<vtkSparseArray<char> *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkIdType *tempr = (ap.IsBound() ?
      op->GetCoordinateStorage(temp0) :
      op->vtkSparseArray<char>::GetCoordinateStorage(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSparseArray_IcE_GetValueStorage(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValueStorage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<char> *op = static_cast<vtkSparseArray<char> *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetValueStorage() :
      op->vtkSparseArray<char>::GetValueStorage());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSparseArray_IcE_ReserveStorage(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReserveStorage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<char> *op = static_cast<vtkSparseArray<char> *>(vp);

  unsigned long long temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->ReserveStorage(temp0);
      }
    else
      {
      op->vtkSparseArray<char>::ReserveStorage(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSparseArray_IcE_SetExtentsFromContents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExtentsFromContents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<char> *op = static_cast<vtkSparseArray<char> *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetExtentsFromContents();
      }
    else
      {
      op->vtkSparseArray<char>::SetExtentsFromContents();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSparseArray_IcE_SetExtents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExtents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<char> *op = static_cast<vtkSparseArray<char> *>(vp);

  vtkArrayExtents *temp0 = NULL;
  PyObject *pobj0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkArrayExtents"))
    {
    if (ap.IsBound())
      {
      op->SetExtents(*temp0);
      }
    else
      {
      op->vtkSparseArray<char>::SetExtents(*temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  Py_XDECREF(pobj0);

  return result;
}


static PyObject *
PyvtkSparseArray_IcE_AddValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<char> *op = static_cast<vtkSparseArray<char> *>(vp);

  vtkIdType temp0;
  char temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->AddValue(temp0, temp1);
      }
    else
      {
      op->vtkSparseArray<char>::AddValue(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkSparseArray_IcE_AddValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<char> *op = static_cast<vtkSparseArray<char> *>(vp);

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
      op->AddValue(temp0, temp1, temp2);
      }
    else
      {
      op->vtkSparseArray<char>::AddValue(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkSparseArray_IcE_AddValue_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<char> *op = static_cast<vtkSparseArray<char> *>(vp);

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
      op->AddValue(temp0, temp1, temp2, temp3);
      }
    else
      {
      op->vtkSparseArray<char>::AddValue(temp0, temp1, temp2, temp3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkSparseArray_IcE_AddValue_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<char> *op = static_cast<vtkSparseArray<char> *>(vp);

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
      op->AddValue(*temp0, temp1);
      }
    else
      {
      op->vtkSparseArray<char>::AddValue(*temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkSparseArray_IcE_AddValue_Methods[] = {
  {NULL, PyvtkSparseArray_IcE_AddValue_s1, METH_VARARGS,
   (char*)"@Lc"},
  {NULL, PyvtkSparseArray_IcE_AddValue_s4, METH_VARARGS,
   (char*)"@Oc &vtkArrayCoordinates"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkSparseArray_IcE_AddValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkSparseArray_IcE_AddValue_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkSparseArray_IcE_AddValue_s2(self, args);
    case 4:
      return PyvtkSparseArray_IcE_AddValue_s3(self, args);
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "AddValue");
  return NULL;
}



static PyObject *
PyvtkSparseArray_IcE_Validate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Validate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<char> *op = static_cast<vtkSparseArray<char> *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->Validate() :
      op->vtkSparseArray<char>::Validate());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkSparseArray_IcE_Methods[] = {
  {(char*)"IsDense", PyvtkSparseArray_IcE_IsDense, METH_VARARGS,
   (char*)"V.IsDense() -> bool\nC++: bool IsDense()\n\n"},
  {(char*)"GetExtents", PyvtkSparseArray_IcE_GetExtents, METH_VARARGS,
   (char*)"V.GetExtents() -> vtkArrayExtents\nC++: const vtkArrayExtents &GetExtents()\n\n"},
  {(char*)"GetNonNullSize", PyvtkSparseArray_IcE_GetNonNullSize, METH_VARARGS,
   (char*)"V.GetNonNullSize() -> int\nC++: SizeT GetNonNullSize()\n\n"},
  {(char*)"GetCoordinatesN", PyvtkSparseArray_IcE_GetCoordinatesN, METH_VARARGS,
   (char*)"V.GetCoordinatesN(int, vtkArrayCoordinates)\nC++: void GetCoordinatesN(const SizeT n,\n    vtkArrayCoordinates &coordinates)\n\n"},
  {(char*)"DeepCopy", PyvtkSparseArray_IcE_DeepCopy, METH_VARARGS,
   (char*)"V.DeepCopy() -> vtkArray\nC++: vtkArray *DeepCopy()\n\n"},
  {(char*)"GetValue", PyvtkSparseArray_IcE_GetValue, METH_VARARGS,
   (char*)"V.GetValue(int) -> char\nC++: const char &GetValue(CoordinateT i)\nV.GetValue(int, int) -> char\nC++: const char &GetValue(CoordinateT i, CoordinateT j)\nV.GetValue(int, int, int) -> char\nC++: const char &GetValue(CoordinateT i, CoordinateT j,\n    CoordinateT k)\nV.GetValue(vtkArrayCoordinates) -> char\nC++: const char &GetValue(const vtkArrayCoordinates &coordinates)\n\n"},
  {(char*)"GetValueN", PyvtkSparseArray_IcE_GetValueN, METH_VARARGS,
   (char*)"V.GetValueN(int) -> char\nC++: const char &GetValueN(const SizeT n)\n\n"},
  {(char*)"SetValue", PyvtkSparseArray_IcE_SetValue, METH_VARARGS,
   (char*)"V.SetValue(int, char)\nC++: void SetValue(CoordinateT i, const char &value)\nV.SetValue(int, int, char)\nC++: void SetValue(CoordinateT i, CoordinateT j,\n    const char &value)\nV.SetValue(int, int, int, char)\nC++: void SetValue(CoordinateT i, CoordinateT j, CoordinateT k,\n    const char &value)\nV.SetValue(vtkArrayCoordinates, char)\nC++: void SetValue(const vtkArrayCoordinates &coordinates,\n    const char &value)\n\n"},
  {(char*)"SetValueN", PyvtkSparseArray_IcE_SetValueN, METH_VARARGS,
   (char*)"V.SetValueN(int, char)\nC++: void SetValueN(const SizeT n, const char &value)\n\n"},
  {(char*)"SetNullValue", PyvtkSparseArray_IcE_SetNullValue, METH_VARARGS,
   (char*)"V.SetNullValue(char)\nC++: void SetNullValue(const char &value)\n\nSet the value that will be returned by GetValue() for NULL areas\nof the array.\n"},
  {(char*)"GetNullValue", PyvtkSparseArray_IcE_GetNullValue, METH_VARARGS,
   (char*)"V.GetNullValue() -> char\nC++: const char &GetNullValue()\n\nReturns the value that will be returned by GetValue() for NULL\nareas of the array.\n"},
  {(char*)"Clear", PyvtkSparseArray_IcE_Clear, METH_VARARGS,
   (char*)"V.Clear()\nC++: void Clear()\n\nRemove all non-null elements from the array, leaving the number\nof dimensions, the extent of each dimension, and the label for\neach dimension unchanged.\n"},
  {(char*)"Sort", PyvtkSparseArray_IcE_Sort, METH_VARARGS,
   (char*)"V.Sort(vtkArraySort)\nC++: void Sort(const vtkArraySort &sort)\n\nSorts array values so that their coordinates appear in some\nwell-defined order. The supplied vtkArraySort object controls\nwhich dimensions are sorted, and in what order, and should\ncontain one-or-more sort dimensions, up to the number of\ndimensions stored in the array.\n"},
  {(char*)"GetCoordinateStorage", PyvtkSparseArray_IcE_GetCoordinateStorage, METH_VARARGS,
   (char*)"V.GetCoordinateStorage(int) -> (int, ...)\nC++: CoordinateT *GetCoordinateStorage(DimensionT dimension)\n\nReturn a mutable reference to the underlying coordinate storage. \nCoordinates for each dimension are stored contiguously as a\none-dimensional array.  The ordering of coordinates within the\narray depends on the order in which values were added to the\narray, and any subsequent sorting.  Use at your own risk!\n"},
  {(char*)"GetValueStorage", PyvtkSparseArray_IcE_GetValueStorage, METH_VARARGS,
   (char*)"V.GetValueStorage() -> string\nC++: char *GetValueStorage()\n\nReturn a mutable reference to the underlying value storage. \nValues are stored contiguously, but in arbitrary order.  Use\nGetCoordinateStorage() if you need to get the corresponding\ncoordinates for a value.  Use at your own risk!\n"},
  {(char*)"ReserveStorage", PyvtkSparseArray_IcE_ReserveStorage, METH_VARARGS,
   (char*)"V.ReserveStorage(int)\nC++: void ReserveStorage(const SizeT value_count)\n\nReserve storage for a specific number of values.  This is useful\nfor reading external data using GetCoordinateStorage() and\nGetValueStorage(), when the total number of non-NULL values in\nthe array can be determined in advance.  Note that after calling\nReserveStorage(), all coordinates and values will be undefined,\nso you must ensure that every set of coordinates and values is\noverwritten.  It is the caller's responsibility to ensure that\nduplicate coordinates are not inserted into the array.\n"},
  {(char*)"SetExtentsFromContents", PyvtkSparseArray_IcE_SetExtentsFromContents, METH_VARARGS,
   (char*)"V.SetExtentsFromContents()\nC++: void SetExtentsFromContents()\n\nUpdate the array extents to match its contents, so that the\nextent along each dimension matches the maximum index value along\nthat dimension.\n"},
  {(char*)"SetExtents", PyvtkSparseArray_IcE_SetExtents, METH_VARARGS,
   (char*)"V.SetExtents(vtkArrayExtents)\nC++: void SetExtents(const vtkArrayExtents &extents)\n\nSpecify arbitrary array extents, without altering the contents of\nthe array.  Note that the extents must be as-large-or-larger-than\nthe extents of the actual values stored in the array.  The number\nof dimensions in the supplied extents must match the number of\ndimensions currently stored in the array.\n"},
  {(char*)"AddValue", PyvtkSparseArray_IcE_AddValue, METH_VARARGS,
   (char*)"V.AddValue(int, char)\nC++: void AddValue(CoordinateT i, const char &value)\nV.AddValue(int, int, char)\nC++: void AddValue(CoordinateT i, CoordinateT j,\n    const char &value)\nV.AddValue(int, int, int, char)\nC++: void AddValue(CoordinateT i, CoordinateT j, CoordinateT k,\n    const char &value)\nV.AddValue(vtkArrayCoordinates, char)\nC++: void AddValue(const vtkArrayCoordinates &coordinates,\n    const char &value)\n\nAdds a new non-null element to the array.  Does not test to see\nif an element with matching coordinates already exists.  Useful\nfor providing fast initialization of the array as long as the\ncaller is prepared to guarantee that no duplicate coordinates are\never used.\n"},
  {(char*)"Validate", PyvtkSparseArray_IcE_Validate, METH_VARARGS,
   (char*)"V.Validate() -> bool\nC++: bool Validate()\n\nValidate the contents of the array, returning false if there are\nany problems. Potential problems include duplicate coordinates,\nwhich can be introduced into the array either through AddValue()\nor direct access to coordinates storage; and coordinates\nout-of-bounds given the current array extents.\n\nNote that Validate() is a heavyweight O(N log N) operation that\nis intended for temporary use during debugging.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkSparseArray_IcE_StaticNew()
{
  return vtkSparseArray<char>::New();
}

PyObject *PyVTKClass_vtkSparseArray_IcENew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkSparseArray_IcE_StaticNew,
    PyvtkSparseArray_IcE_Methods,
    typeid(vtkSparseArray<char>).name(), modulename,
    "vtkSparseArray_IcE", "vtkSparseArray_IcE",
    PyvtkSparseArray_IcE_Doc(),
    PyVTKClass_vtkTypedArray_IcENew(modulename));
  return cls;
}

const char **PyvtkSparseArray_IcE_Doc()
{
  static const char *docstring[] = {
    "vtkSparseArray - Sparse, independent coordinate storage for N-way\narrays.\n\n",
    "Superclass: vtkTypedArray[char]\n\n",
    "vtkSparseArray is a concrete vtkArray implementation that stores\nvalues using sparse independent coordinate storage.  This means that\nthe array stores the complete set of coordinates and the value for\neach non-null value in the array. While this approach requires\nslightly more storage than other sparse storage schemes (such as\nCompressed-Row or Compressed-Column), it is easier and more efficient\nt",
    "o work with when implementing algorithms, and  it generalizes well\nfor arbitrary numbers of dimensions.\n\nIn addition to the value retrieval and update methods provided by\nvtkTypedArray, vtkSparseArray provides methods to:\n\nGet and set a special 'null' value that will be returned when\nretrieving values for undefined coordinates.\n\nClear the contents of the array so that every set of coordinates is\nu",
    "ndefined.\n\nSort the array contents so that value coordinates can be visited in a\nspecific order.\n\nRetrieve pointers to the value- and coordinate-storage memory blocks.\n\nReserve storage for a specific number of non-null values, for\nefficiency when the number of non-null values is known in advance.\n\nRecompute the array extents so that they bound the largest set of\nnon-NULL values along each dimensio",
    "n.\n\nSpecify arbitrary array extents.\n\nAdd values to the array in amortized-constant time.\n\nValidate that the array does not contain duplicate coordinates.\n\nSee Also:\n\nvtkArray, vtkTypedArray, vtkDenseArray\n\nThanks:\n\nDeveloped by Timothy M. Shead (tshead@sandia.gov) at Sandia National\nLaboratories.\n\n",
    NULL
  };

  return docstring;
}

extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkSparseArray_IaENew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkTypedArray_IaENew
extern "C" { PyObject *PyVTKClass_vtkTypedArray_IaENew(const char *); }
#define DECLARED_PyVTKClass_vtkTypedArray_IaENew
#endif

static const char **PyvtkSparseArray_IaE_Doc();


static PyObject *
PyvtkSparseArray_IaE_IsDense(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsDense");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<signed char> *op = static_cast<vtkSparseArray<signed char> *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->IsDense() :
      op->vtkSparseArray<signed char>::IsDense());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSparseArray_IaE_GetExtents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetExtents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<signed char> *op = static_cast<vtkSparseArray<signed char> *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const vtkArrayExtents *tempr = (ap.IsBound() ?
      &op->GetExtents() :
      &op->vtkSparseArray<signed char>::GetExtents());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildSpecialObject(tempr, "vtkArrayExtents");
      }
    }

  return result;
}


static PyObject *
PyvtkSparseArray_IaE_GetNonNullSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNonNullSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<signed char> *op = static_cast<vtkSparseArray<signed char> *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned long long tempr = (ap.IsBound() ?
      op->GetNonNullSize() :
      op->vtkSparseArray<signed char>::GetNonNullSize());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSparseArray_IaE_GetCoordinatesN(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCoordinatesN");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<signed char> *op = static_cast<vtkSparseArray<signed char> *>(vp);

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
      op->vtkSparseArray<signed char>::GetCoordinatesN(temp0, *temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSparseArray_IaE_DeepCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeepCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<signed char> *op = static_cast<vtkSparseArray<signed char> *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkArray *tempr = (ap.IsBound() ?
      op->DeepCopy() :
      op->vtkSparseArray<signed char>::DeepCopy());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSparseArray_IaE_GetValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<signed char> *op = static_cast<vtkSparseArray<signed char> *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    const signed char *tempr = (ap.IsBound() ?
      &op->GetValue(temp0) :
      &op->vtkSparseArray<signed char>::GetValue(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(*tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkSparseArray_IaE_GetValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<signed char> *op = static_cast<vtkSparseArray<signed char> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    const signed char *tempr = (ap.IsBound() ?
      &op->GetValue(temp0, temp1) :
      &op->vtkSparseArray<signed char>::GetValue(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(*tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkSparseArray_IaE_GetValue_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<signed char> *op = static_cast<vtkSparseArray<signed char> *>(vp);

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
      &op->vtkSparseArray<signed char>::GetValue(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(*tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkSparseArray_IaE_GetValue_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<signed char> *op = static_cast<vtkSparseArray<signed char> *>(vp);

  vtkArrayCoordinates *temp0 = NULL;
  PyObject *pobj0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkArrayCoordinates"))
    {
    const signed char *tempr = (ap.IsBound() ?
      &op->GetValue(*temp0) :
      &op->vtkSparseArray<signed char>::GetValue(*temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(*tempr);
      }
    }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkSparseArray_IaE_GetValue_Methods[] = {
  {NULL, PyvtkSparseArray_IaE_GetValue_s1, METH_VARARGS,
   (char*)"@L"},
  {NULL, PyvtkSparseArray_IaE_GetValue_s4, METH_VARARGS,
   (char*)"@O &vtkArrayCoordinates"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkSparseArray_IaE_GetValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkSparseArray_IaE_GetValue_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkSparseArray_IaE_GetValue_s2(self, args);
    case 3:
      return PyvtkSparseArray_IaE_GetValue_s3(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetValue");
  return NULL;
}



static PyObject *
PyvtkSparseArray_IaE_GetValueN(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValueN");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<signed char> *op = static_cast<vtkSparseArray<signed char> *>(vp);

  unsigned long long temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    const signed char *tempr = (ap.IsBound() ?
      &op->GetValueN(temp0) :
      &op->vtkSparseArray<signed char>::GetValueN(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(*tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSparseArray_IaE_SetValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<signed char> *op = static_cast<vtkSparseArray<signed char> *>(vp);

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
      op->vtkSparseArray<signed char>::SetValue(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkSparseArray_IaE_SetValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<signed char> *op = static_cast<vtkSparseArray<signed char> *>(vp);

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
      op->vtkSparseArray<signed char>::SetValue(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkSparseArray_IaE_SetValue_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<signed char> *op = static_cast<vtkSparseArray<signed char> *>(vp);

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
      op->vtkSparseArray<signed char>::SetValue(temp0, temp1, temp2, temp3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkSparseArray_IaE_SetValue_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<signed char> *op = static_cast<vtkSparseArray<signed char> *>(vp);

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
      op->vtkSparseArray<signed char>::SetValue(*temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkSparseArray_IaE_SetValue_Methods[] = {
  {NULL, PyvtkSparseArray_IaE_SetValue_s1, METH_VARARGS,
   (char*)"@LB"},
  {NULL, PyvtkSparseArray_IaE_SetValue_s4, METH_VARARGS,
   (char*)"@OB &vtkArrayCoordinates"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkSparseArray_IaE_SetValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkSparseArray_IaE_SetValue_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkSparseArray_IaE_SetValue_s2(self, args);
    case 4:
      return PyvtkSparseArray_IaE_SetValue_s3(self, args);
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetValue");
  return NULL;
}



static PyObject *
PyvtkSparseArray_IaE_SetValueN(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValueN");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<signed char> *op = static_cast<vtkSparseArray<signed char> *>(vp);

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
      op->vtkSparseArray<signed char>::SetValueN(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSparseArray_IaE_SetNullValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNullValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<signed char> *op = static_cast<vtkSparseArray<signed char> *>(vp);

  signed char temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetNullValue(temp0);
      }
    else
      {
      op->vtkSparseArray<signed char>::SetNullValue(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSparseArray_IaE_GetNullValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNullValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<signed char> *op = static_cast<vtkSparseArray<signed char> *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const signed char *tempr = (ap.IsBound() ?
      &op->GetNullValue() :
      &op->vtkSparseArray<signed char>::GetNullValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(*tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSparseArray_IaE_Clear(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Clear");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<signed char> *op = static_cast<vtkSparseArray<signed char> *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Clear();
      }
    else
      {
      op->vtkSparseArray<signed char>::Clear();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSparseArray_IaE_Sort(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Sort");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<signed char> *op = static_cast<vtkSparseArray<signed char> *>(vp);

  vtkArraySort *temp0 = NULL;
  PyObject *pobj0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkArraySort"))
    {
    if (ap.IsBound())
      {
      op->Sort(*temp0);
      }
    else
      {
      op->vtkSparseArray<signed char>::Sort(*temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  Py_XDECREF(pobj0);

  return result;
}


static PyObject *
PyvtkSparseArray_IaE_GetCoordinateStorage(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCoordinateStorage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<signed char> *op = static_cast<vtkSparseArray<signed char> *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkIdType *tempr = (ap.IsBound() ?
      op->GetCoordinateStorage(temp0) :
      op->vtkSparseArray<signed char>::GetCoordinateStorage(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSparseArray_IaE_GetValueStorage(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValueStorage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<signed char> *op = static_cast<vtkSparseArray<signed char> *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    signed char *tempr = (ap.IsBound() ?
      op->GetValueStorage() :
      op->vtkSparseArray<signed char>::GetValueStorage());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSparseArray_IaE_ReserveStorage(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReserveStorage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<signed char> *op = static_cast<vtkSparseArray<signed char> *>(vp);

  unsigned long long temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->ReserveStorage(temp0);
      }
    else
      {
      op->vtkSparseArray<signed char>::ReserveStorage(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSparseArray_IaE_SetExtentsFromContents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExtentsFromContents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<signed char> *op = static_cast<vtkSparseArray<signed char> *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetExtentsFromContents();
      }
    else
      {
      op->vtkSparseArray<signed char>::SetExtentsFromContents();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSparseArray_IaE_SetExtents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExtents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<signed char> *op = static_cast<vtkSparseArray<signed char> *>(vp);

  vtkArrayExtents *temp0 = NULL;
  PyObject *pobj0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkArrayExtents"))
    {
    if (ap.IsBound())
      {
      op->SetExtents(*temp0);
      }
    else
      {
      op->vtkSparseArray<signed char>::SetExtents(*temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  Py_XDECREF(pobj0);

  return result;
}


static PyObject *
PyvtkSparseArray_IaE_AddValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<signed char> *op = static_cast<vtkSparseArray<signed char> *>(vp);

  vtkIdType temp0;
  signed char temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->AddValue(temp0, temp1);
      }
    else
      {
      op->vtkSparseArray<signed char>::AddValue(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkSparseArray_IaE_AddValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<signed char> *op = static_cast<vtkSparseArray<signed char> *>(vp);

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
      op->AddValue(temp0, temp1, temp2);
      }
    else
      {
      op->vtkSparseArray<signed char>::AddValue(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkSparseArray_IaE_AddValue_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<signed char> *op = static_cast<vtkSparseArray<signed char> *>(vp);

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
      op->AddValue(temp0, temp1, temp2, temp3);
      }
    else
      {
      op->vtkSparseArray<signed char>::AddValue(temp0, temp1, temp2, temp3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkSparseArray_IaE_AddValue_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<signed char> *op = static_cast<vtkSparseArray<signed char> *>(vp);

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
      op->AddValue(*temp0, temp1);
      }
    else
      {
      op->vtkSparseArray<signed char>::AddValue(*temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkSparseArray_IaE_AddValue_Methods[] = {
  {NULL, PyvtkSparseArray_IaE_AddValue_s1, METH_VARARGS,
   (char*)"@LB"},
  {NULL, PyvtkSparseArray_IaE_AddValue_s4, METH_VARARGS,
   (char*)"@OB &vtkArrayCoordinates"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkSparseArray_IaE_AddValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkSparseArray_IaE_AddValue_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkSparseArray_IaE_AddValue_s2(self, args);
    case 4:
      return PyvtkSparseArray_IaE_AddValue_s3(self, args);
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "AddValue");
  return NULL;
}



static PyObject *
PyvtkSparseArray_IaE_Validate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Validate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<signed char> *op = static_cast<vtkSparseArray<signed char> *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->Validate() :
      op->vtkSparseArray<signed char>::Validate());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkSparseArray_IaE_Methods[] = {
  {(char*)"IsDense", PyvtkSparseArray_IaE_IsDense, METH_VARARGS,
   (char*)"V.IsDense() -> bool\nC++: bool IsDense()\n\n"},
  {(char*)"GetExtents", PyvtkSparseArray_IaE_GetExtents, METH_VARARGS,
   (char*)"V.GetExtents() -> vtkArrayExtents\nC++: const vtkArrayExtents &GetExtents()\n\n"},
  {(char*)"GetNonNullSize", PyvtkSparseArray_IaE_GetNonNullSize, METH_VARARGS,
   (char*)"V.GetNonNullSize() -> int\nC++: SizeT GetNonNullSize()\n\n"},
  {(char*)"GetCoordinatesN", PyvtkSparseArray_IaE_GetCoordinatesN, METH_VARARGS,
   (char*)"V.GetCoordinatesN(int, vtkArrayCoordinates)\nC++: void GetCoordinatesN(const SizeT n,\n    vtkArrayCoordinates &coordinates)\n\n"},
  {(char*)"DeepCopy", PyvtkSparseArray_IaE_DeepCopy, METH_VARARGS,
   (char*)"V.DeepCopy() -> vtkArray\nC++: vtkArray *DeepCopy()\n\n"},
  {(char*)"GetValue", PyvtkSparseArray_IaE_GetValue, METH_VARARGS,
   (char*)"V.GetValue(int) -> int\nC++: const signed char &GetValue(CoordinateT i)\nV.GetValue(int, int) -> int\nC++: const signed char &GetValue(CoordinateT i, CoordinateT j)\nV.GetValue(int, int, int) -> int\nC++: const signed char &GetValue(CoordinateT i, CoordinateT j,\n    CoordinateT k)\nV.GetValue(vtkArrayCoordinates) -> int\nC++: const signed char &GetValue(\n    const vtkArrayCoordinates &coordinates)\n\n"},
  {(char*)"GetValueN", PyvtkSparseArray_IaE_GetValueN, METH_VARARGS,
   (char*)"V.GetValueN(int) -> int\nC++: const signed char &GetValueN(const SizeT n)\n\n"},
  {(char*)"SetValue", PyvtkSparseArray_IaE_SetValue, METH_VARARGS,
   (char*)"V.SetValue(int, int)\nC++: void SetValue(CoordinateT i, const signed char &value)\nV.SetValue(int, int, int)\nC++: void SetValue(CoordinateT i, CoordinateT j,\n    const signed char &value)\nV.SetValue(int, int, int, int)\nC++: void SetValue(CoordinateT i, CoordinateT j, CoordinateT k,\n    const signed char &value)\nV.SetValue(vtkArrayCoordinates, int)\nC++: void SetValue(const vtkArrayCoordinates &coordinates,\n    const signed char &value)\n\n"},
  {(char*)"SetValueN", PyvtkSparseArray_IaE_SetValueN, METH_VARARGS,
   (char*)"V.SetValueN(int, int)\nC++: void SetValueN(const SizeT n, const signed char &value)\n\n"},
  {(char*)"SetNullValue", PyvtkSparseArray_IaE_SetNullValue, METH_VARARGS,
   (char*)"V.SetNullValue(int)\nC++: void SetNullValue(const signed char &value)\n\nSet the value that will be returned by GetValue() for NULL areas\nof the array.\n"},
  {(char*)"GetNullValue", PyvtkSparseArray_IaE_GetNullValue, METH_VARARGS,
   (char*)"V.GetNullValue() -> int\nC++: const signed char &GetNullValue()\n\nReturns the value that will be returned by GetValue() for NULL\nareas of the array.\n"},
  {(char*)"Clear", PyvtkSparseArray_IaE_Clear, METH_VARARGS,
   (char*)"V.Clear()\nC++: void Clear()\n\nRemove all non-null elements from the array, leaving the number\nof dimensions, the extent of each dimension, and the label for\neach dimension unchanged.\n"},
  {(char*)"Sort", PyvtkSparseArray_IaE_Sort, METH_VARARGS,
   (char*)"V.Sort(vtkArraySort)\nC++: void Sort(const vtkArraySort &sort)\n\nSorts array values so that their coordinates appear in some\nwell-defined order. The supplied vtkArraySort object controls\nwhich dimensions are sorted, and in what order, and should\ncontain one-or-more sort dimensions, up to the number of\ndimensions stored in the array.\n"},
  {(char*)"GetCoordinateStorage", PyvtkSparseArray_IaE_GetCoordinateStorage, METH_VARARGS,
   (char*)"V.GetCoordinateStorage(int) -> (int, ...)\nC++: CoordinateT *GetCoordinateStorage(DimensionT dimension)\n\nReturn a mutable reference to the underlying coordinate storage. \nCoordinates for each dimension are stored contiguously as a\none-dimensional array.  The ordering of coordinates within the\narray depends on the order in which values were added to the\narray, and any subsequent sorting.  Use at your own risk!\n"},
  {(char*)"GetValueStorage", PyvtkSparseArray_IaE_GetValueStorage, METH_VARARGS,
   (char*)"V.GetValueStorage() -> (int, ...)\nC++: signed char *GetValueStorage()\n\nReturn a mutable reference to the underlying value storage. \nValues are stored contiguously, but in arbitrary order.  Use\nGetCoordinateStorage() if you need to get the corresponding\ncoordinates for a value.  Use at your own risk!\n"},
  {(char*)"ReserveStorage", PyvtkSparseArray_IaE_ReserveStorage, METH_VARARGS,
   (char*)"V.ReserveStorage(int)\nC++: void ReserveStorage(const SizeT value_count)\n\nReserve storage for a specific number of values.  This is useful\nfor reading external data using GetCoordinateStorage() and\nGetValueStorage(), when the total number of non-NULL values in\nthe array can be determined in advance.  Note that after calling\nReserveStorage(), all coordinates and values will be undefined,\nso you must ensure that every set of coordinates and values is\noverwritten.  It is the caller's responsibility to ensure that\nduplicate coordinates are not inserted into the array.\n"},
  {(char*)"SetExtentsFromContents", PyvtkSparseArray_IaE_SetExtentsFromContents, METH_VARARGS,
   (char*)"V.SetExtentsFromContents()\nC++: void SetExtentsFromContents()\n\nUpdate the array extents to match its contents, so that the\nextent along each dimension matches the maximum index value along\nthat dimension.\n"},
  {(char*)"SetExtents", PyvtkSparseArray_IaE_SetExtents, METH_VARARGS,
   (char*)"V.SetExtents(vtkArrayExtents)\nC++: void SetExtents(const vtkArrayExtents &extents)\n\nSpecify arbitrary array extents, without altering the contents of\nthe array.  Note that the extents must be as-large-or-larger-than\nthe extents of the actual values stored in the array.  The number\nof dimensions in the supplied extents must match the number of\ndimensions currently stored in the array.\n"},
  {(char*)"AddValue", PyvtkSparseArray_IaE_AddValue, METH_VARARGS,
   (char*)"V.AddValue(int, int)\nC++: void AddValue(CoordinateT i, const signed char &value)\nV.AddValue(int, int, int)\nC++: void AddValue(CoordinateT i, CoordinateT j,\n    const signed char &value)\nV.AddValue(int, int, int, int)\nC++: void AddValue(CoordinateT i, CoordinateT j, CoordinateT k,\n    const signed char &value)\nV.AddValue(vtkArrayCoordinates, int)\nC++: void AddValue(const vtkArrayCoordinates &coordinates,\n    const signed char &value)\n\nAdds a new non-null element to the array.  Does not test to see\nif an element with matching coordinates already exists.  Useful\nfor providing fast initialization of the array as long as the\ncaller is prepared to guarantee that no duplicate coordinates are\never used.\n"},
  {(char*)"Validate", PyvtkSparseArray_IaE_Validate, METH_VARARGS,
   (char*)"V.Validate() -> bool\nC++: bool Validate()\n\nValidate the contents of the array, returning false if there are\nany problems. Potential problems include duplicate coordinates,\nwhich can be introduced into the array either through AddValue()\nor direct access to coordinates storage; and coordinates\nout-of-bounds given the current array extents.\n\nNote that Validate() is a heavyweight O(N log N) operation that\nis intended for temporary use during debugging.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkSparseArray_IaE_StaticNew()
{
  return vtkSparseArray<signed char>::New();
}

PyObject *PyVTKClass_vtkSparseArray_IaENew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkSparseArray_IaE_StaticNew,
    PyvtkSparseArray_IaE_Methods,
    typeid(vtkSparseArray<signed char>).name(), modulename,
    "vtkSparseArray_IaE", "vtkSparseArray_IaE",
    PyvtkSparseArray_IaE_Doc(),
    PyVTKClass_vtkTypedArray_IaENew(modulename));
  return cls;
}

const char **PyvtkSparseArray_IaE_Doc()
{
  static const char *docstring[] = {
    "vtkSparseArray - Sparse, independent coordinate storage for N-way\narrays.\n\n",
    "Superclass: vtkTypedArray[int8]\n\n",
    "vtkSparseArray is a concrete vtkArray implementation that stores\nvalues using sparse independent coordinate storage.  This means that\nthe array stores the complete set of coordinates and the value for\neach non-null value in the array. While this approach requires\nslightly more storage than other sparse storage schemes (such as\nCompressed-Row or Compressed-Column), it is easier and more efficient\nt",
    "o work with when implementing algorithms, and  it generalizes well\nfor arbitrary numbers of dimensions.\n\nIn addition to the value retrieval and update methods provided by\nvtkTypedArray, vtkSparseArray provides methods to:\n\nGet and set a special 'null' value that will be returned when\nretrieving values for undefined coordinates.\n\nClear the contents of the array so that every set of coordinates is\nu",
    "ndefined.\n\nSort the array contents so that value coordinates can be visited in a\nspecific order.\n\nRetrieve pointers to the value- and coordinate-storage memory blocks.\n\nReserve storage for a specific number of non-null values, for\nefficiency when the number of non-null values is known in advance.\n\nRecompute the array extents so that they bound the largest set of\nnon-NULL values along each dimensio",
    "n.\n\nSpecify arbitrary array extents.\n\nAdd values to the array in amortized-constant time.\n\nValidate that the array does not contain duplicate coordinates.\n\nSee Also:\n\nvtkArray, vtkTypedArray, vtkDenseArray\n\nThanks:\n\nDeveloped by Timothy M. Shead (tshead@sandia.gov) at Sandia National\nLaboratories.\n\n",
    NULL
  };

  return docstring;
}

extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkSparseArray_IhENew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkTypedArray_IhENew
extern "C" { PyObject *PyVTKClass_vtkTypedArray_IhENew(const char *); }
#define DECLARED_PyVTKClass_vtkTypedArray_IhENew
#endif

static const char **PyvtkSparseArray_IhE_Doc();


static PyObject *
PyvtkSparseArray_IhE_IsDense(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsDense");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<unsigned char> *op = static_cast<vtkSparseArray<unsigned char> *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->IsDense() :
      op->vtkSparseArray<unsigned char>::IsDense());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSparseArray_IhE_GetExtents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetExtents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<unsigned char> *op = static_cast<vtkSparseArray<unsigned char> *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const vtkArrayExtents *tempr = (ap.IsBound() ?
      &op->GetExtents() :
      &op->vtkSparseArray<unsigned char>::GetExtents());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildSpecialObject(tempr, "vtkArrayExtents");
      }
    }

  return result;
}


static PyObject *
PyvtkSparseArray_IhE_GetNonNullSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNonNullSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<unsigned char> *op = static_cast<vtkSparseArray<unsigned char> *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned long long tempr = (ap.IsBound() ?
      op->GetNonNullSize() :
      op->vtkSparseArray<unsigned char>::GetNonNullSize());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSparseArray_IhE_GetCoordinatesN(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCoordinatesN");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<unsigned char> *op = static_cast<vtkSparseArray<unsigned char> *>(vp);

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
      op->vtkSparseArray<unsigned char>::GetCoordinatesN(temp0, *temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSparseArray_IhE_DeepCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeepCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<unsigned char> *op = static_cast<vtkSparseArray<unsigned char> *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkArray *tempr = (ap.IsBound() ?
      op->DeepCopy() :
      op->vtkSparseArray<unsigned char>::DeepCopy());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSparseArray_IhE_GetValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<unsigned char> *op = static_cast<vtkSparseArray<unsigned char> *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    const unsigned char *tempr = (ap.IsBound() ?
      &op->GetValue(temp0) :
      &op->vtkSparseArray<unsigned char>::GetValue(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(*tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkSparseArray_IhE_GetValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<unsigned char> *op = static_cast<vtkSparseArray<unsigned char> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    const unsigned char *tempr = (ap.IsBound() ?
      &op->GetValue(temp0, temp1) :
      &op->vtkSparseArray<unsigned char>::GetValue(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(*tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkSparseArray_IhE_GetValue_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<unsigned char> *op = static_cast<vtkSparseArray<unsigned char> *>(vp);

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
      &op->vtkSparseArray<unsigned char>::GetValue(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(*tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkSparseArray_IhE_GetValue_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<unsigned char> *op = static_cast<vtkSparseArray<unsigned char> *>(vp);

  vtkArrayCoordinates *temp0 = NULL;
  PyObject *pobj0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkArrayCoordinates"))
    {
    const unsigned char *tempr = (ap.IsBound() ?
      &op->GetValue(*temp0) :
      &op->vtkSparseArray<unsigned char>::GetValue(*temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(*tempr);
      }
    }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkSparseArray_IhE_GetValue_Methods[] = {
  {NULL, PyvtkSparseArray_IhE_GetValue_s1, METH_VARARGS,
   (char*)"@L"},
  {NULL, PyvtkSparseArray_IhE_GetValue_s4, METH_VARARGS,
   (char*)"@O &vtkArrayCoordinates"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkSparseArray_IhE_GetValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkSparseArray_IhE_GetValue_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkSparseArray_IhE_GetValue_s2(self, args);
    case 3:
      return PyvtkSparseArray_IhE_GetValue_s3(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetValue");
  return NULL;
}



static PyObject *
PyvtkSparseArray_IhE_GetValueN(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValueN");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<unsigned char> *op = static_cast<vtkSparseArray<unsigned char> *>(vp);

  unsigned long long temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    const unsigned char *tempr = (ap.IsBound() ?
      &op->GetValueN(temp0) :
      &op->vtkSparseArray<unsigned char>::GetValueN(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(*tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSparseArray_IhE_SetValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<unsigned char> *op = static_cast<vtkSparseArray<unsigned char> *>(vp);

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
      op->vtkSparseArray<unsigned char>::SetValue(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkSparseArray_IhE_SetValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<unsigned char> *op = static_cast<vtkSparseArray<unsigned char> *>(vp);

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
      op->vtkSparseArray<unsigned char>::SetValue(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkSparseArray_IhE_SetValue_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<unsigned char> *op = static_cast<vtkSparseArray<unsigned char> *>(vp);

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
      op->vtkSparseArray<unsigned char>::SetValue(temp0, temp1, temp2, temp3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkSparseArray_IhE_SetValue_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<unsigned char> *op = static_cast<vtkSparseArray<unsigned char> *>(vp);

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
      op->vtkSparseArray<unsigned char>::SetValue(*temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkSparseArray_IhE_SetValue_Methods[] = {
  {NULL, PyvtkSparseArray_IhE_SetValue_s1, METH_VARARGS,
   (char*)"@Lb"},
  {NULL, PyvtkSparseArray_IhE_SetValue_s4, METH_VARARGS,
   (char*)"@Ob &vtkArrayCoordinates"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkSparseArray_IhE_SetValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkSparseArray_IhE_SetValue_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkSparseArray_IhE_SetValue_s2(self, args);
    case 4:
      return PyvtkSparseArray_IhE_SetValue_s3(self, args);
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetValue");
  return NULL;
}



static PyObject *
PyvtkSparseArray_IhE_SetValueN(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValueN");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<unsigned char> *op = static_cast<vtkSparseArray<unsigned char> *>(vp);

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
      op->vtkSparseArray<unsigned char>::SetValueN(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSparseArray_IhE_SetNullValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNullValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<unsigned char> *op = static_cast<vtkSparseArray<unsigned char> *>(vp);

  unsigned char temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetNullValue(temp0);
      }
    else
      {
      op->vtkSparseArray<unsigned char>::SetNullValue(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSparseArray_IhE_GetNullValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNullValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<unsigned char> *op = static_cast<vtkSparseArray<unsigned char> *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const unsigned char *tempr = (ap.IsBound() ?
      &op->GetNullValue() :
      &op->vtkSparseArray<unsigned char>::GetNullValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(*tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSparseArray_IhE_Clear(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Clear");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<unsigned char> *op = static_cast<vtkSparseArray<unsigned char> *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Clear();
      }
    else
      {
      op->vtkSparseArray<unsigned char>::Clear();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSparseArray_IhE_Sort(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Sort");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<unsigned char> *op = static_cast<vtkSparseArray<unsigned char> *>(vp);

  vtkArraySort *temp0 = NULL;
  PyObject *pobj0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkArraySort"))
    {
    if (ap.IsBound())
      {
      op->Sort(*temp0);
      }
    else
      {
      op->vtkSparseArray<unsigned char>::Sort(*temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  Py_XDECREF(pobj0);

  return result;
}


static PyObject *
PyvtkSparseArray_IhE_GetCoordinateStorage(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCoordinateStorage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<unsigned char> *op = static_cast<vtkSparseArray<unsigned char> *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkIdType *tempr = (ap.IsBound() ?
      op->GetCoordinateStorage(temp0) :
      op->vtkSparseArray<unsigned char>::GetCoordinateStorage(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSparseArray_IhE_GetValueStorage(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValueStorage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<unsigned char> *op = static_cast<vtkSparseArray<unsigned char> *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned char *tempr = (ap.IsBound() ?
      op->GetValueStorage() :
      op->vtkSparseArray<unsigned char>::GetValueStorage());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSparseArray_IhE_ReserveStorage(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReserveStorage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<unsigned char> *op = static_cast<vtkSparseArray<unsigned char> *>(vp);

  unsigned long long temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->ReserveStorage(temp0);
      }
    else
      {
      op->vtkSparseArray<unsigned char>::ReserveStorage(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSparseArray_IhE_SetExtentsFromContents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExtentsFromContents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<unsigned char> *op = static_cast<vtkSparseArray<unsigned char> *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetExtentsFromContents();
      }
    else
      {
      op->vtkSparseArray<unsigned char>::SetExtentsFromContents();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSparseArray_IhE_SetExtents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExtents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<unsigned char> *op = static_cast<vtkSparseArray<unsigned char> *>(vp);

  vtkArrayExtents *temp0 = NULL;
  PyObject *pobj0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkArrayExtents"))
    {
    if (ap.IsBound())
      {
      op->SetExtents(*temp0);
      }
    else
      {
      op->vtkSparseArray<unsigned char>::SetExtents(*temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  Py_XDECREF(pobj0);

  return result;
}


static PyObject *
PyvtkSparseArray_IhE_AddValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<unsigned char> *op = static_cast<vtkSparseArray<unsigned char> *>(vp);

  vtkIdType temp0;
  unsigned char temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->AddValue(temp0, temp1);
      }
    else
      {
      op->vtkSparseArray<unsigned char>::AddValue(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkSparseArray_IhE_AddValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<unsigned char> *op = static_cast<vtkSparseArray<unsigned char> *>(vp);

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
      op->AddValue(temp0, temp1, temp2);
      }
    else
      {
      op->vtkSparseArray<unsigned char>::AddValue(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkSparseArray_IhE_AddValue_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<unsigned char> *op = static_cast<vtkSparseArray<unsigned char> *>(vp);

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
      op->AddValue(temp0, temp1, temp2, temp3);
      }
    else
      {
      op->vtkSparseArray<unsigned char>::AddValue(temp0, temp1, temp2, temp3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkSparseArray_IhE_AddValue_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<unsigned char> *op = static_cast<vtkSparseArray<unsigned char> *>(vp);

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
      op->AddValue(*temp0, temp1);
      }
    else
      {
      op->vtkSparseArray<unsigned char>::AddValue(*temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkSparseArray_IhE_AddValue_Methods[] = {
  {NULL, PyvtkSparseArray_IhE_AddValue_s1, METH_VARARGS,
   (char*)"@Lb"},
  {NULL, PyvtkSparseArray_IhE_AddValue_s4, METH_VARARGS,
   (char*)"@Ob &vtkArrayCoordinates"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkSparseArray_IhE_AddValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkSparseArray_IhE_AddValue_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkSparseArray_IhE_AddValue_s2(self, args);
    case 4:
      return PyvtkSparseArray_IhE_AddValue_s3(self, args);
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "AddValue");
  return NULL;
}



static PyObject *
PyvtkSparseArray_IhE_Validate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Validate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<unsigned char> *op = static_cast<vtkSparseArray<unsigned char> *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->Validate() :
      op->vtkSparseArray<unsigned char>::Validate());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkSparseArray_IhE_Methods[] = {
  {(char*)"IsDense", PyvtkSparseArray_IhE_IsDense, METH_VARARGS,
   (char*)"V.IsDense() -> bool\nC++: bool IsDense()\n\n"},
  {(char*)"GetExtents", PyvtkSparseArray_IhE_GetExtents, METH_VARARGS,
   (char*)"V.GetExtents() -> vtkArrayExtents\nC++: const vtkArrayExtents &GetExtents()\n\n"},
  {(char*)"GetNonNullSize", PyvtkSparseArray_IhE_GetNonNullSize, METH_VARARGS,
   (char*)"V.GetNonNullSize() -> int\nC++: SizeT GetNonNullSize()\n\n"},
  {(char*)"GetCoordinatesN", PyvtkSparseArray_IhE_GetCoordinatesN, METH_VARARGS,
   (char*)"V.GetCoordinatesN(int, vtkArrayCoordinates)\nC++: void GetCoordinatesN(const SizeT n,\n    vtkArrayCoordinates &coordinates)\n\n"},
  {(char*)"DeepCopy", PyvtkSparseArray_IhE_DeepCopy, METH_VARARGS,
   (char*)"V.DeepCopy() -> vtkArray\nC++: vtkArray *DeepCopy()\n\n"},
  {(char*)"GetValue", PyvtkSparseArray_IhE_GetValue, METH_VARARGS,
   (char*)"V.GetValue(int) -> int\nC++: const unsigned char &GetValue(CoordinateT i)\nV.GetValue(int, int) -> int\nC++: const unsigned char &GetValue(CoordinateT i, CoordinateT j)\nV.GetValue(int, int, int) -> int\nC++: const unsigned char &GetValue(CoordinateT i, CoordinateT j,\n    CoordinateT k)\nV.GetValue(vtkArrayCoordinates) -> int\nC++: const unsigned char &GetValue(\n    const vtkArrayCoordinates &coordinates)\n\n"},
  {(char*)"GetValueN", PyvtkSparseArray_IhE_GetValueN, METH_VARARGS,
   (char*)"V.GetValueN(int) -> int\nC++: const unsigned char &GetValueN(const SizeT n)\n\n"},
  {(char*)"SetValue", PyvtkSparseArray_IhE_SetValue, METH_VARARGS,
   (char*)"V.SetValue(int, int)\nC++: void SetValue(CoordinateT i, const unsigned char &value)\nV.SetValue(int, int, int)\nC++: void SetValue(CoordinateT i, CoordinateT j,\n    const unsigned char &value)\nV.SetValue(int, int, int, int)\nC++: void SetValue(CoordinateT i, CoordinateT j, CoordinateT k,\n    const unsigned char &value)\nV.SetValue(vtkArrayCoordinates, int)\nC++: void SetValue(const vtkArrayCoordinates &coordinates,\n    const unsigned char &value)\n\n"},
  {(char*)"SetValueN", PyvtkSparseArray_IhE_SetValueN, METH_VARARGS,
   (char*)"V.SetValueN(int, int)\nC++: void SetValueN(const SizeT n, const unsigned char &value)\n\n"},
  {(char*)"SetNullValue", PyvtkSparseArray_IhE_SetNullValue, METH_VARARGS,
   (char*)"V.SetNullValue(int)\nC++: void SetNullValue(const unsigned char &value)\n\nSet the value that will be returned by GetValue() for NULL areas\nof the array.\n"},
  {(char*)"GetNullValue", PyvtkSparseArray_IhE_GetNullValue, METH_VARARGS,
   (char*)"V.GetNullValue() -> int\nC++: const unsigned char &GetNullValue()\n\nReturns the value that will be returned by GetValue() for NULL\nareas of the array.\n"},
  {(char*)"Clear", PyvtkSparseArray_IhE_Clear, METH_VARARGS,
   (char*)"V.Clear()\nC++: void Clear()\n\nRemove all non-null elements from the array, leaving the number\nof dimensions, the extent of each dimension, and the label for\neach dimension unchanged.\n"},
  {(char*)"Sort", PyvtkSparseArray_IhE_Sort, METH_VARARGS,
   (char*)"V.Sort(vtkArraySort)\nC++: void Sort(const vtkArraySort &sort)\n\nSorts array values so that their coordinates appear in some\nwell-defined order. The supplied vtkArraySort object controls\nwhich dimensions are sorted, and in what order, and should\ncontain one-or-more sort dimensions, up to the number of\ndimensions stored in the array.\n"},
  {(char*)"GetCoordinateStorage", PyvtkSparseArray_IhE_GetCoordinateStorage, METH_VARARGS,
   (char*)"V.GetCoordinateStorage(int) -> (int, ...)\nC++: CoordinateT *GetCoordinateStorage(DimensionT dimension)\n\nReturn a mutable reference to the underlying coordinate storage. \nCoordinates for each dimension are stored contiguously as a\none-dimensional array.  The ordering of coordinates within the\narray depends on the order in which values were added to the\narray, and any subsequent sorting.  Use at your own risk!\n"},
  {(char*)"GetValueStorage", PyvtkSparseArray_IhE_GetValueStorage, METH_VARARGS,
   (char*)"V.GetValueStorage() -> (int, ...)\nC++: unsigned char *GetValueStorage()\n\nReturn a mutable reference to the underlying value storage. \nValues are stored contiguously, but in arbitrary order.  Use\nGetCoordinateStorage() if you need to get the corresponding\ncoordinates for a value.  Use at your own risk!\n"},
  {(char*)"ReserveStorage", PyvtkSparseArray_IhE_ReserveStorage, METH_VARARGS,
   (char*)"V.ReserveStorage(int)\nC++: void ReserveStorage(const SizeT value_count)\n\nReserve storage for a specific number of values.  This is useful\nfor reading external data using GetCoordinateStorage() and\nGetValueStorage(), when the total number of non-NULL values in\nthe array can be determined in advance.  Note that after calling\nReserveStorage(), all coordinates and values will be undefined,\nso you must ensure that every set of coordinates and values is\noverwritten.  It is the caller's responsibility to ensure that\nduplicate coordinates are not inserted into the array.\n"},
  {(char*)"SetExtentsFromContents", PyvtkSparseArray_IhE_SetExtentsFromContents, METH_VARARGS,
   (char*)"V.SetExtentsFromContents()\nC++: void SetExtentsFromContents()\n\nUpdate the array extents to match its contents, so that the\nextent along each dimension matches the maximum index value along\nthat dimension.\n"},
  {(char*)"SetExtents", PyvtkSparseArray_IhE_SetExtents, METH_VARARGS,
   (char*)"V.SetExtents(vtkArrayExtents)\nC++: void SetExtents(const vtkArrayExtents &extents)\n\nSpecify arbitrary array extents, without altering the contents of\nthe array.  Note that the extents must be as-large-or-larger-than\nthe extents of the actual values stored in the array.  The number\nof dimensions in the supplied extents must match the number of\ndimensions currently stored in the array.\n"},
  {(char*)"AddValue", PyvtkSparseArray_IhE_AddValue, METH_VARARGS,
   (char*)"V.AddValue(int, int)\nC++: void AddValue(CoordinateT i, const unsigned char &value)\nV.AddValue(int, int, int)\nC++: void AddValue(CoordinateT i, CoordinateT j,\n    const unsigned char &value)\nV.AddValue(int, int, int, int)\nC++: void AddValue(CoordinateT i, CoordinateT j, CoordinateT k,\n    const unsigned char &value)\nV.AddValue(vtkArrayCoordinates, int)\nC++: void AddValue(const vtkArrayCoordinates &coordinates,\n    const unsigned char &value)\n\nAdds a new non-null element to the array.  Does not test to see\nif an element with matching coordinates already exists.  Useful\nfor providing fast initialization of the array as long as the\ncaller is prepared to guarantee that no duplicate coordinates are\never used.\n"},
  {(char*)"Validate", PyvtkSparseArray_IhE_Validate, METH_VARARGS,
   (char*)"V.Validate() -> bool\nC++: bool Validate()\n\nValidate the contents of the array, returning false if there are\nany problems. Potential problems include duplicate coordinates,\nwhich can be introduced into the array either through AddValue()\nor direct access to coordinates storage; and coordinates\nout-of-bounds given the current array extents.\n\nNote that Validate() is a heavyweight O(N log N) operation that\nis intended for temporary use during debugging.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkSparseArray_IhE_StaticNew()
{
  return vtkSparseArray<unsigned char>::New();
}

PyObject *PyVTKClass_vtkSparseArray_IhENew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkSparseArray_IhE_StaticNew,
    PyvtkSparseArray_IhE_Methods,
    typeid(vtkSparseArray<unsigned char>).name(), modulename,
    "vtkSparseArray_IhE", "vtkSparseArray_IhE",
    PyvtkSparseArray_IhE_Doc(),
    PyVTKClass_vtkTypedArray_IhENew(modulename));
  return cls;
}

const char **PyvtkSparseArray_IhE_Doc()
{
  static const char *docstring[] = {
    "vtkSparseArray - Sparse, independent coordinate storage for N-way\narrays.\n\n",
    "Superclass: vtkTypedArray[uint8]\n\n",
    "vtkSparseArray is a concrete vtkArray implementation that stores\nvalues using sparse independent coordinate storage.  This means that\nthe array stores the complete set of coordinates and the value for\neach non-null value in the array. While this approach requires\nslightly more storage than other sparse storage schemes (such as\nCompressed-Row or Compressed-Column), it is easier and more efficient\nt",
    "o work with when implementing algorithms, and  it generalizes well\nfor arbitrary numbers of dimensions.\n\nIn addition to the value retrieval and update methods provided by\nvtkTypedArray, vtkSparseArray provides methods to:\n\nGet and set a special 'null' value that will be returned when\nretrieving values for undefined coordinates.\n\nClear the contents of the array so that every set of coordinates is\nu",
    "ndefined.\n\nSort the array contents so that value coordinates can be visited in a\nspecific order.\n\nRetrieve pointers to the value- and coordinate-storage memory blocks.\n\nReserve storage for a specific number of non-null values, for\nefficiency when the number of non-null values is known in advance.\n\nRecompute the array extents so that they bound the largest set of\nnon-NULL values along each dimensio",
    "n.\n\nSpecify arbitrary array extents.\n\nAdd values to the array in amortized-constant time.\n\nValidate that the array does not contain duplicate coordinates.\n\nSee Also:\n\nvtkArray, vtkTypedArray, vtkDenseArray\n\nThanks:\n\nDeveloped by Timothy M. Shead (tshead@sandia.gov) at Sandia National\nLaboratories.\n\n",
    NULL
  };

  return docstring;
}

extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkSparseArray_IsENew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkTypedArray_IsENew
extern "C" { PyObject *PyVTKClass_vtkTypedArray_IsENew(const char *); }
#define DECLARED_PyVTKClass_vtkTypedArray_IsENew
#endif

static const char **PyvtkSparseArray_IsE_Doc();


static PyObject *
PyvtkSparseArray_IsE_IsDense(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsDense");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<short> *op = static_cast<vtkSparseArray<short> *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->IsDense() :
      op->vtkSparseArray<short>::IsDense());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSparseArray_IsE_GetExtents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetExtents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<short> *op = static_cast<vtkSparseArray<short> *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const vtkArrayExtents *tempr = (ap.IsBound() ?
      &op->GetExtents() :
      &op->vtkSparseArray<short>::GetExtents());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildSpecialObject(tempr, "vtkArrayExtents");
      }
    }

  return result;
}


static PyObject *
PyvtkSparseArray_IsE_GetNonNullSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNonNullSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<short> *op = static_cast<vtkSparseArray<short> *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned long long tempr = (ap.IsBound() ?
      op->GetNonNullSize() :
      op->vtkSparseArray<short>::GetNonNullSize());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSparseArray_IsE_GetCoordinatesN(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCoordinatesN");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<short> *op = static_cast<vtkSparseArray<short> *>(vp);

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
      op->vtkSparseArray<short>::GetCoordinatesN(temp0, *temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSparseArray_IsE_DeepCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeepCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<short> *op = static_cast<vtkSparseArray<short> *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkArray *tempr = (ap.IsBound() ?
      op->DeepCopy() :
      op->vtkSparseArray<short>::DeepCopy());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSparseArray_IsE_GetValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<short> *op = static_cast<vtkSparseArray<short> *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    const short *tempr = (ap.IsBound() ?
      &op->GetValue(temp0) :
      &op->vtkSparseArray<short>::GetValue(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(*tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkSparseArray_IsE_GetValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<short> *op = static_cast<vtkSparseArray<short> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    const short *tempr = (ap.IsBound() ?
      &op->GetValue(temp0, temp1) :
      &op->vtkSparseArray<short>::GetValue(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(*tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkSparseArray_IsE_GetValue_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<short> *op = static_cast<vtkSparseArray<short> *>(vp);

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
      &op->vtkSparseArray<short>::GetValue(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(*tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkSparseArray_IsE_GetValue_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<short> *op = static_cast<vtkSparseArray<short> *>(vp);

  vtkArrayCoordinates *temp0 = NULL;
  PyObject *pobj0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkArrayCoordinates"))
    {
    const short *tempr = (ap.IsBound() ?
      &op->GetValue(*temp0) :
      &op->vtkSparseArray<short>::GetValue(*temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(*tempr);
      }
    }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkSparseArray_IsE_GetValue_Methods[] = {
  {NULL, PyvtkSparseArray_IsE_GetValue_s1, METH_VARARGS,
   (char*)"@L"},
  {NULL, PyvtkSparseArray_IsE_GetValue_s4, METH_VARARGS,
   (char*)"@O &vtkArrayCoordinates"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkSparseArray_IsE_GetValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkSparseArray_IsE_GetValue_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkSparseArray_IsE_GetValue_s2(self, args);
    case 3:
      return PyvtkSparseArray_IsE_GetValue_s3(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetValue");
  return NULL;
}



static PyObject *
PyvtkSparseArray_IsE_GetValueN(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValueN");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<short> *op = static_cast<vtkSparseArray<short> *>(vp);

  unsigned long long temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    const short *tempr = (ap.IsBound() ?
      &op->GetValueN(temp0) :
      &op->vtkSparseArray<short>::GetValueN(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(*tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSparseArray_IsE_SetValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<short> *op = static_cast<vtkSparseArray<short> *>(vp);

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
      op->vtkSparseArray<short>::SetValue(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkSparseArray_IsE_SetValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<short> *op = static_cast<vtkSparseArray<short> *>(vp);

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
      op->vtkSparseArray<short>::SetValue(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkSparseArray_IsE_SetValue_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<short> *op = static_cast<vtkSparseArray<short> *>(vp);

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
      op->vtkSparseArray<short>::SetValue(temp0, temp1, temp2, temp3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkSparseArray_IsE_SetValue_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<short> *op = static_cast<vtkSparseArray<short> *>(vp);

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
      op->vtkSparseArray<short>::SetValue(*temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkSparseArray_IsE_SetValue_Methods[] = {
  {NULL, PyvtkSparseArray_IsE_SetValue_s1, METH_VARARGS,
   (char*)"@Lh"},
  {NULL, PyvtkSparseArray_IsE_SetValue_s4, METH_VARARGS,
   (char*)"@Oh &vtkArrayCoordinates"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkSparseArray_IsE_SetValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkSparseArray_IsE_SetValue_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkSparseArray_IsE_SetValue_s2(self, args);
    case 4:
      return PyvtkSparseArray_IsE_SetValue_s3(self, args);
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetValue");
  return NULL;
}



static PyObject *
PyvtkSparseArray_IsE_SetValueN(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValueN");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<short> *op = static_cast<vtkSparseArray<short> *>(vp);

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
      op->vtkSparseArray<short>::SetValueN(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSparseArray_IsE_SetNullValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNullValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<short> *op = static_cast<vtkSparseArray<short> *>(vp);

  short temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetNullValue(temp0);
      }
    else
      {
      op->vtkSparseArray<short>::SetNullValue(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSparseArray_IsE_GetNullValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNullValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<short> *op = static_cast<vtkSparseArray<short> *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const short *tempr = (ap.IsBound() ?
      &op->GetNullValue() :
      &op->vtkSparseArray<short>::GetNullValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(*tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSparseArray_IsE_Clear(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Clear");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<short> *op = static_cast<vtkSparseArray<short> *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Clear();
      }
    else
      {
      op->vtkSparseArray<short>::Clear();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSparseArray_IsE_Sort(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Sort");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<short> *op = static_cast<vtkSparseArray<short> *>(vp);

  vtkArraySort *temp0 = NULL;
  PyObject *pobj0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkArraySort"))
    {
    if (ap.IsBound())
      {
      op->Sort(*temp0);
      }
    else
      {
      op->vtkSparseArray<short>::Sort(*temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  Py_XDECREF(pobj0);

  return result;
}


static PyObject *
PyvtkSparseArray_IsE_GetCoordinateStorage(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCoordinateStorage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<short> *op = static_cast<vtkSparseArray<short> *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkIdType *tempr = (ap.IsBound() ?
      op->GetCoordinateStorage(temp0) :
      op->vtkSparseArray<short>::GetCoordinateStorage(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSparseArray_IsE_GetValueStorage(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValueStorage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<short> *op = static_cast<vtkSparseArray<short> *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    short *tempr = (ap.IsBound() ?
      op->GetValueStorage() :
      op->vtkSparseArray<short>::GetValueStorage());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSparseArray_IsE_ReserveStorage(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReserveStorage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<short> *op = static_cast<vtkSparseArray<short> *>(vp);

  unsigned long long temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->ReserveStorage(temp0);
      }
    else
      {
      op->vtkSparseArray<short>::ReserveStorage(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSparseArray_IsE_SetExtentsFromContents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExtentsFromContents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<short> *op = static_cast<vtkSparseArray<short> *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetExtentsFromContents();
      }
    else
      {
      op->vtkSparseArray<short>::SetExtentsFromContents();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSparseArray_IsE_SetExtents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExtents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<short> *op = static_cast<vtkSparseArray<short> *>(vp);

  vtkArrayExtents *temp0 = NULL;
  PyObject *pobj0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkArrayExtents"))
    {
    if (ap.IsBound())
      {
      op->SetExtents(*temp0);
      }
    else
      {
      op->vtkSparseArray<short>::SetExtents(*temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  Py_XDECREF(pobj0);

  return result;
}


static PyObject *
PyvtkSparseArray_IsE_AddValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<short> *op = static_cast<vtkSparseArray<short> *>(vp);

  vtkIdType temp0;
  short temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->AddValue(temp0, temp1);
      }
    else
      {
      op->vtkSparseArray<short>::AddValue(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkSparseArray_IsE_AddValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<short> *op = static_cast<vtkSparseArray<short> *>(vp);

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
      op->AddValue(temp0, temp1, temp2);
      }
    else
      {
      op->vtkSparseArray<short>::AddValue(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkSparseArray_IsE_AddValue_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<short> *op = static_cast<vtkSparseArray<short> *>(vp);

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
      op->AddValue(temp0, temp1, temp2, temp3);
      }
    else
      {
      op->vtkSparseArray<short>::AddValue(temp0, temp1, temp2, temp3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkSparseArray_IsE_AddValue_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<short> *op = static_cast<vtkSparseArray<short> *>(vp);

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
      op->AddValue(*temp0, temp1);
      }
    else
      {
      op->vtkSparseArray<short>::AddValue(*temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkSparseArray_IsE_AddValue_Methods[] = {
  {NULL, PyvtkSparseArray_IsE_AddValue_s1, METH_VARARGS,
   (char*)"@Lh"},
  {NULL, PyvtkSparseArray_IsE_AddValue_s4, METH_VARARGS,
   (char*)"@Oh &vtkArrayCoordinates"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkSparseArray_IsE_AddValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkSparseArray_IsE_AddValue_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkSparseArray_IsE_AddValue_s2(self, args);
    case 4:
      return PyvtkSparseArray_IsE_AddValue_s3(self, args);
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "AddValue");
  return NULL;
}



static PyObject *
PyvtkSparseArray_IsE_Validate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Validate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<short> *op = static_cast<vtkSparseArray<short> *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->Validate() :
      op->vtkSparseArray<short>::Validate());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkSparseArray_IsE_Methods[] = {
  {(char*)"IsDense", PyvtkSparseArray_IsE_IsDense, METH_VARARGS,
   (char*)"V.IsDense() -> bool\nC++: bool IsDense()\n\n"},
  {(char*)"GetExtents", PyvtkSparseArray_IsE_GetExtents, METH_VARARGS,
   (char*)"V.GetExtents() -> vtkArrayExtents\nC++: const vtkArrayExtents &GetExtents()\n\n"},
  {(char*)"GetNonNullSize", PyvtkSparseArray_IsE_GetNonNullSize, METH_VARARGS,
   (char*)"V.GetNonNullSize() -> int\nC++: SizeT GetNonNullSize()\n\n"},
  {(char*)"GetCoordinatesN", PyvtkSparseArray_IsE_GetCoordinatesN, METH_VARARGS,
   (char*)"V.GetCoordinatesN(int, vtkArrayCoordinates)\nC++: void GetCoordinatesN(const SizeT n,\n    vtkArrayCoordinates &coordinates)\n\n"},
  {(char*)"DeepCopy", PyvtkSparseArray_IsE_DeepCopy, METH_VARARGS,
   (char*)"V.DeepCopy() -> vtkArray\nC++: vtkArray *DeepCopy()\n\n"},
  {(char*)"GetValue", PyvtkSparseArray_IsE_GetValue, METH_VARARGS,
   (char*)"V.GetValue(int) -> int\nC++: const short &GetValue(CoordinateT i)\nV.GetValue(int, int) -> int\nC++: const short &GetValue(CoordinateT i, CoordinateT j)\nV.GetValue(int, int, int) -> int\nC++: const short &GetValue(CoordinateT i, CoordinateT j,\n    CoordinateT k)\nV.GetValue(vtkArrayCoordinates) -> int\nC++: const short &GetValue(const vtkArrayCoordinates &coordinates)\n\n"},
  {(char*)"GetValueN", PyvtkSparseArray_IsE_GetValueN, METH_VARARGS,
   (char*)"V.GetValueN(int) -> int\nC++: const short &GetValueN(const SizeT n)\n\n"},
  {(char*)"SetValue", PyvtkSparseArray_IsE_SetValue, METH_VARARGS,
   (char*)"V.SetValue(int, int)\nC++: void SetValue(CoordinateT i, const short &value)\nV.SetValue(int, int, int)\nC++: void SetValue(CoordinateT i, CoordinateT j,\n    const short &value)\nV.SetValue(int, int, int, int)\nC++: void SetValue(CoordinateT i, CoordinateT j, CoordinateT k,\n    const short &value)\nV.SetValue(vtkArrayCoordinates, int)\nC++: void SetValue(const vtkArrayCoordinates &coordinates,\n    const short &value)\n\n"},
  {(char*)"SetValueN", PyvtkSparseArray_IsE_SetValueN, METH_VARARGS,
   (char*)"V.SetValueN(int, int)\nC++: void SetValueN(const SizeT n, const short &value)\n\n"},
  {(char*)"SetNullValue", PyvtkSparseArray_IsE_SetNullValue, METH_VARARGS,
   (char*)"V.SetNullValue(int)\nC++: void SetNullValue(const short &value)\n\nSet the value that will be returned by GetValue() for NULL areas\nof the array.\n"},
  {(char*)"GetNullValue", PyvtkSparseArray_IsE_GetNullValue, METH_VARARGS,
   (char*)"V.GetNullValue() -> int\nC++: const short &GetNullValue()\n\nReturns the value that will be returned by GetValue() for NULL\nareas of the array.\n"},
  {(char*)"Clear", PyvtkSparseArray_IsE_Clear, METH_VARARGS,
   (char*)"V.Clear()\nC++: void Clear()\n\nRemove all non-null elements from the array, leaving the number\nof dimensions, the extent of each dimension, and the label for\neach dimension unchanged.\n"},
  {(char*)"Sort", PyvtkSparseArray_IsE_Sort, METH_VARARGS,
   (char*)"V.Sort(vtkArraySort)\nC++: void Sort(const vtkArraySort &sort)\n\nSorts array values so that their coordinates appear in some\nwell-defined order. The supplied vtkArraySort object controls\nwhich dimensions are sorted, and in what order, and should\ncontain one-or-more sort dimensions, up to the number of\ndimensions stored in the array.\n"},
  {(char*)"GetCoordinateStorage", PyvtkSparseArray_IsE_GetCoordinateStorage, METH_VARARGS,
   (char*)"V.GetCoordinateStorage(int) -> (int, ...)\nC++: CoordinateT *GetCoordinateStorage(DimensionT dimension)\n\nReturn a mutable reference to the underlying coordinate storage. \nCoordinates for each dimension are stored contiguously as a\none-dimensional array.  The ordering of coordinates within the\narray depends on the order in which values were added to the\narray, and any subsequent sorting.  Use at your own risk!\n"},
  {(char*)"GetValueStorage", PyvtkSparseArray_IsE_GetValueStorage, METH_VARARGS,
   (char*)"V.GetValueStorage() -> (int, ...)\nC++: short *GetValueStorage()\n\nReturn a mutable reference to the underlying value storage. \nValues are stored contiguously, but in arbitrary order.  Use\nGetCoordinateStorage() if you need to get the corresponding\ncoordinates for a value.  Use at your own risk!\n"},
  {(char*)"ReserveStorage", PyvtkSparseArray_IsE_ReserveStorage, METH_VARARGS,
   (char*)"V.ReserveStorage(int)\nC++: void ReserveStorage(const SizeT value_count)\n\nReserve storage for a specific number of values.  This is useful\nfor reading external data using GetCoordinateStorage() and\nGetValueStorage(), when the total number of non-NULL values in\nthe array can be determined in advance.  Note that after calling\nReserveStorage(), all coordinates and values will be undefined,\nso you must ensure that every set of coordinates and values is\noverwritten.  It is the caller's responsibility to ensure that\nduplicate coordinates are not inserted into the array.\n"},
  {(char*)"SetExtentsFromContents", PyvtkSparseArray_IsE_SetExtentsFromContents, METH_VARARGS,
   (char*)"V.SetExtentsFromContents()\nC++: void SetExtentsFromContents()\n\nUpdate the array extents to match its contents, so that the\nextent along each dimension matches the maximum index value along\nthat dimension.\n"},
  {(char*)"SetExtents", PyvtkSparseArray_IsE_SetExtents, METH_VARARGS,
   (char*)"V.SetExtents(vtkArrayExtents)\nC++: void SetExtents(const vtkArrayExtents &extents)\n\nSpecify arbitrary array extents, without altering the contents of\nthe array.  Note that the extents must be as-large-or-larger-than\nthe extents of the actual values stored in the array.  The number\nof dimensions in the supplied extents must match the number of\ndimensions currently stored in the array.\n"},
  {(char*)"AddValue", PyvtkSparseArray_IsE_AddValue, METH_VARARGS,
   (char*)"V.AddValue(int, int)\nC++: void AddValue(CoordinateT i, const short &value)\nV.AddValue(int, int, int)\nC++: void AddValue(CoordinateT i, CoordinateT j,\n    const short &value)\nV.AddValue(int, int, int, int)\nC++: void AddValue(CoordinateT i, CoordinateT j, CoordinateT k,\n    const short &value)\nV.AddValue(vtkArrayCoordinates, int)\nC++: void AddValue(const vtkArrayCoordinates &coordinates,\n    const short &value)\n\nAdds a new non-null element to the array.  Does not test to see\nif an element with matching coordinates already exists.  Useful\nfor providing fast initialization of the array as long as the\ncaller is prepared to guarantee that no duplicate coordinates are\never used.\n"},
  {(char*)"Validate", PyvtkSparseArray_IsE_Validate, METH_VARARGS,
   (char*)"V.Validate() -> bool\nC++: bool Validate()\n\nValidate the contents of the array, returning false if there are\nany problems. Potential problems include duplicate coordinates,\nwhich can be introduced into the array either through AddValue()\nor direct access to coordinates storage; and coordinates\nout-of-bounds given the current array extents.\n\nNote that Validate() is a heavyweight O(N log N) operation that\nis intended for temporary use during debugging.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkSparseArray_IsE_StaticNew()
{
  return vtkSparseArray<short>::New();
}

PyObject *PyVTKClass_vtkSparseArray_IsENew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkSparseArray_IsE_StaticNew,
    PyvtkSparseArray_IsE_Methods,
    typeid(vtkSparseArray<short>).name(), modulename,
    "vtkSparseArray_IsE", "vtkSparseArray_IsE",
    PyvtkSparseArray_IsE_Doc(),
    PyVTKClass_vtkTypedArray_IsENew(modulename));
  return cls;
}

const char **PyvtkSparseArray_IsE_Doc()
{
  static const char *docstring[] = {
    "vtkSparseArray - Sparse, independent coordinate storage for N-way\narrays.\n\n",
    "Superclass: vtkTypedArray[int16]\n\n",
    "vtkSparseArray is a concrete vtkArray implementation that stores\nvalues using sparse independent coordinate storage.  This means that\nthe array stores the complete set of coordinates and the value for\neach non-null value in the array. While this approach requires\nslightly more storage than other sparse storage schemes (such as\nCompressed-Row or Compressed-Column), it is easier and more efficient\nt",
    "o work with when implementing algorithms, and  it generalizes well\nfor arbitrary numbers of dimensions.\n\nIn addition to the value retrieval and update methods provided by\nvtkTypedArray, vtkSparseArray provides methods to:\n\nGet and set a special 'null' value that will be returned when\nretrieving values for undefined coordinates.\n\nClear the contents of the array so that every set of coordinates is\nu",
    "ndefined.\n\nSort the array contents so that value coordinates can be visited in a\nspecific order.\n\nRetrieve pointers to the value- and coordinate-storage memory blocks.\n\nReserve storage for a specific number of non-null values, for\nefficiency when the number of non-null values is known in advance.\n\nRecompute the array extents so that they bound the largest set of\nnon-NULL values along each dimensio",
    "n.\n\nSpecify arbitrary array extents.\n\nAdd values to the array in amortized-constant time.\n\nValidate that the array does not contain duplicate coordinates.\n\nSee Also:\n\nvtkArray, vtkTypedArray, vtkDenseArray\n\nThanks:\n\nDeveloped by Timothy M. Shead (tshead@sandia.gov) at Sandia National\nLaboratories.\n\n",
    NULL
  };

  return docstring;
}

extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkSparseArray_ItENew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkTypedArray_ItENew
extern "C" { PyObject *PyVTKClass_vtkTypedArray_ItENew(const char *); }
#define DECLARED_PyVTKClass_vtkTypedArray_ItENew
#endif

static const char **PyvtkSparseArray_ItE_Doc();


static PyObject *
PyvtkSparseArray_ItE_IsDense(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsDense");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<unsigned short> *op = static_cast<vtkSparseArray<unsigned short> *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->IsDense() :
      op->vtkSparseArray<unsigned short>::IsDense());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSparseArray_ItE_GetExtents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetExtents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<unsigned short> *op = static_cast<vtkSparseArray<unsigned short> *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const vtkArrayExtents *tempr = (ap.IsBound() ?
      &op->GetExtents() :
      &op->vtkSparseArray<unsigned short>::GetExtents());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildSpecialObject(tempr, "vtkArrayExtents");
      }
    }

  return result;
}


static PyObject *
PyvtkSparseArray_ItE_GetNonNullSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNonNullSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<unsigned short> *op = static_cast<vtkSparseArray<unsigned short> *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned long long tempr = (ap.IsBound() ?
      op->GetNonNullSize() :
      op->vtkSparseArray<unsigned short>::GetNonNullSize());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSparseArray_ItE_GetCoordinatesN(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCoordinatesN");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<unsigned short> *op = static_cast<vtkSparseArray<unsigned short> *>(vp);

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
      op->vtkSparseArray<unsigned short>::GetCoordinatesN(temp0, *temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSparseArray_ItE_DeepCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeepCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<unsigned short> *op = static_cast<vtkSparseArray<unsigned short> *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkArray *tempr = (ap.IsBound() ?
      op->DeepCopy() :
      op->vtkSparseArray<unsigned short>::DeepCopy());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSparseArray_ItE_GetValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<unsigned short> *op = static_cast<vtkSparseArray<unsigned short> *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    const unsigned short *tempr = (ap.IsBound() ?
      &op->GetValue(temp0) :
      &op->vtkSparseArray<unsigned short>::GetValue(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(*tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkSparseArray_ItE_GetValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<unsigned short> *op = static_cast<vtkSparseArray<unsigned short> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    const unsigned short *tempr = (ap.IsBound() ?
      &op->GetValue(temp0, temp1) :
      &op->vtkSparseArray<unsigned short>::GetValue(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(*tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkSparseArray_ItE_GetValue_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<unsigned short> *op = static_cast<vtkSparseArray<unsigned short> *>(vp);

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
      &op->vtkSparseArray<unsigned short>::GetValue(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(*tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkSparseArray_ItE_GetValue_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<unsigned short> *op = static_cast<vtkSparseArray<unsigned short> *>(vp);

  vtkArrayCoordinates *temp0 = NULL;
  PyObject *pobj0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkArrayCoordinates"))
    {
    const unsigned short *tempr = (ap.IsBound() ?
      &op->GetValue(*temp0) :
      &op->vtkSparseArray<unsigned short>::GetValue(*temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(*tempr);
      }
    }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkSparseArray_ItE_GetValue_Methods[] = {
  {NULL, PyvtkSparseArray_ItE_GetValue_s1, METH_VARARGS,
   (char*)"@L"},
  {NULL, PyvtkSparseArray_ItE_GetValue_s4, METH_VARARGS,
   (char*)"@O &vtkArrayCoordinates"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkSparseArray_ItE_GetValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkSparseArray_ItE_GetValue_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkSparseArray_ItE_GetValue_s2(self, args);
    case 3:
      return PyvtkSparseArray_ItE_GetValue_s3(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetValue");
  return NULL;
}



static PyObject *
PyvtkSparseArray_ItE_GetValueN(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValueN");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<unsigned short> *op = static_cast<vtkSparseArray<unsigned short> *>(vp);

  unsigned long long temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    const unsigned short *tempr = (ap.IsBound() ?
      &op->GetValueN(temp0) :
      &op->vtkSparseArray<unsigned short>::GetValueN(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(*tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSparseArray_ItE_SetValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<unsigned short> *op = static_cast<vtkSparseArray<unsigned short> *>(vp);

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
      op->vtkSparseArray<unsigned short>::SetValue(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkSparseArray_ItE_SetValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<unsigned short> *op = static_cast<vtkSparseArray<unsigned short> *>(vp);

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
      op->vtkSparseArray<unsigned short>::SetValue(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkSparseArray_ItE_SetValue_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<unsigned short> *op = static_cast<vtkSparseArray<unsigned short> *>(vp);

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
      op->vtkSparseArray<unsigned short>::SetValue(temp0, temp1, temp2, temp3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkSparseArray_ItE_SetValue_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<unsigned short> *op = static_cast<vtkSparseArray<unsigned short> *>(vp);

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
      op->vtkSparseArray<unsigned short>::SetValue(*temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkSparseArray_ItE_SetValue_Methods[] = {
  {NULL, PyvtkSparseArray_ItE_SetValue_s1, METH_VARARGS,
   (char*)"@LH"},
  {NULL, PyvtkSparseArray_ItE_SetValue_s4, METH_VARARGS,
   (char*)"@OH &vtkArrayCoordinates"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkSparseArray_ItE_SetValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkSparseArray_ItE_SetValue_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkSparseArray_ItE_SetValue_s2(self, args);
    case 4:
      return PyvtkSparseArray_ItE_SetValue_s3(self, args);
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetValue");
  return NULL;
}



static PyObject *
PyvtkSparseArray_ItE_SetValueN(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValueN");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<unsigned short> *op = static_cast<vtkSparseArray<unsigned short> *>(vp);

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
      op->vtkSparseArray<unsigned short>::SetValueN(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSparseArray_ItE_SetNullValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNullValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<unsigned short> *op = static_cast<vtkSparseArray<unsigned short> *>(vp);

  unsigned short temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetNullValue(temp0);
      }
    else
      {
      op->vtkSparseArray<unsigned short>::SetNullValue(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSparseArray_ItE_GetNullValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNullValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<unsigned short> *op = static_cast<vtkSparseArray<unsigned short> *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const unsigned short *tempr = (ap.IsBound() ?
      &op->GetNullValue() :
      &op->vtkSparseArray<unsigned short>::GetNullValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(*tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSparseArray_ItE_Clear(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Clear");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<unsigned short> *op = static_cast<vtkSparseArray<unsigned short> *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Clear();
      }
    else
      {
      op->vtkSparseArray<unsigned short>::Clear();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSparseArray_ItE_Sort(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Sort");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<unsigned short> *op = static_cast<vtkSparseArray<unsigned short> *>(vp);

  vtkArraySort *temp0 = NULL;
  PyObject *pobj0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkArraySort"))
    {
    if (ap.IsBound())
      {
      op->Sort(*temp0);
      }
    else
      {
      op->vtkSparseArray<unsigned short>::Sort(*temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  Py_XDECREF(pobj0);

  return result;
}


static PyObject *
PyvtkSparseArray_ItE_GetCoordinateStorage(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCoordinateStorage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<unsigned short> *op = static_cast<vtkSparseArray<unsigned short> *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkIdType *tempr = (ap.IsBound() ?
      op->GetCoordinateStorage(temp0) :
      op->vtkSparseArray<unsigned short>::GetCoordinateStorage(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSparseArray_ItE_GetValueStorage(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValueStorage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<unsigned short> *op = static_cast<vtkSparseArray<unsigned short> *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned short *tempr = (ap.IsBound() ?
      op->GetValueStorage() :
      op->vtkSparseArray<unsigned short>::GetValueStorage());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSparseArray_ItE_ReserveStorage(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReserveStorage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<unsigned short> *op = static_cast<vtkSparseArray<unsigned short> *>(vp);

  unsigned long long temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->ReserveStorage(temp0);
      }
    else
      {
      op->vtkSparseArray<unsigned short>::ReserveStorage(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSparseArray_ItE_SetExtentsFromContents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExtentsFromContents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<unsigned short> *op = static_cast<vtkSparseArray<unsigned short> *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetExtentsFromContents();
      }
    else
      {
      op->vtkSparseArray<unsigned short>::SetExtentsFromContents();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSparseArray_ItE_SetExtents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExtents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<unsigned short> *op = static_cast<vtkSparseArray<unsigned short> *>(vp);

  vtkArrayExtents *temp0 = NULL;
  PyObject *pobj0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkArrayExtents"))
    {
    if (ap.IsBound())
      {
      op->SetExtents(*temp0);
      }
    else
      {
      op->vtkSparseArray<unsigned short>::SetExtents(*temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  Py_XDECREF(pobj0);

  return result;
}


static PyObject *
PyvtkSparseArray_ItE_AddValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<unsigned short> *op = static_cast<vtkSparseArray<unsigned short> *>(vp);

  vtkIdType temp0;
  unsigned short temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->AddValue(temp0, temp1);
      }
    else
      {
      op->vtkSparseArray<unsigned short>::AddValue(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkSparseArray_ItE_AddValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<unsigned short> *op = static_cast<vtkSparseArray<unsigned short> *>(vp);

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
      op->AddValue(temp0, temp1, temp2);
      }
    else
      {
      op->vtkSparseArray<unsigned short>::AddValue(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkSparseArray_ItE_AddValue_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<unsigned short> *op = static_cast<vtkSparseArray<unsigned short> *>(vp);

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
      op->AddValue(temp0, temp1, temp2, temp3);
      }
    else
      {
      op->vtkSparseArray<unsigned short>::AddValue(temp0, temp1, temp2, temp3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkSparseArray_ItE_AddValue_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<unsigned short> *op = static_cast<vtkSparseArray<unsigned short> *>(vp);

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
      op->AddValue(*temp0, temp1);
      }
    else
      {
      op->vtkSparseArray<unsigned short>::AddValue(*temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkSparseArray_ItE_AddValue_Methods[] = {
  {NULL, PyvtkSparseArray_ItE_AddValue_s1, METH_VARARGS,
   (char*)"@LH"},
  {NULL, PyvtkSparseArray_ItE_AddValue_s4, METH_VARARGS,
   (char*)"@OH &vtkArrayCoordinates"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkSparseArray_ItE_AddValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkSparseArray_ItE_AddValue_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkSparseArray_ItE_AddValue_s2(self, args);
    case 4:
      return PyvtkSparseArray_ItE_AddValue_s3(self, args);
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "AddValue");
  return NULL;
}



static PyObject *
PyvtkSparseArray_ItE_Validate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Validate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<unsigned short> *op = static_cast<vtkSparseArray<unsigned short> *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->Validate() :
      op->vtkSparseArray<unsigned short>::Validate());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkSparseArray_ItE_Methods[] = {
  {(char*)"IsDense", PyvtkSparseArray_ItE_IsDense, METH_VARARGS,
   (char*)"V.IsDense() -> bool\nC++: bool IsDense()\n\n"},
  {(char*)"GetExtents", PyvtkSparseArray_ItE_GetExtents, METH_VARARGS,
   (char*)"V.GetExtents() -> vtkArrayExtents\nC++: const vtkArrayExtents &GetExtents()\n\n"},
  {(char*)"GetNonNullSize", PyvtkSparseArray_ItE_GetNonNullSize, METH_VARARGS,
   (char*)"V.GetNonNullSize() -> int\nC++: SizeT GetNonNullSize()\n\n"},
  {(char*)"GetCoordinatesN", PyvtkSparseArray_ItE_GetCoordinatesN, METH_VARARGS,
   (char*)"V.GetCoordinatesN(int, vtkArrayCoordinates)\nC++: void GetCoordinatesN(const SizeT n,\n    vtkArrayCoordinates &coordinates)\n\n"},
  {(char*)"DeepCopy", PyvtkSparseArray_ItE_DeepCopy, METH_VARARGS,
   (char*)"V.DeepCopy() -> vtkArray\nC++: vtkArray *DeepCopy()\n\n"},
  {(char*)"GetValue", PyvtkSparseArray_ItE_GetValue, METH_VARARGS,
   (char*)"V.GetValue(int) -> int\nC++: const unsigned short &GetValue(CoordinateT i)\nV.GetValue(int, int) -> int\nC++: const unsigned short &GetValue(CoordinateT i, CoordinateT j)\nV.GetValue(int, int, int) -> int\nC++: const unsigned short &GetValue(CoordinateT i, CoordinateT j,\n    CoordinateT k)\nV.GetValue(vtkArrayCoordinates) -> int\nC++: const unsigned short &GetValue(\n    const vtkArrayCoordinates &coordinates)\n\n"},
  {(char*)"GetValueN", PyvtkSparseArray_ItE_GetValueN, METH_VARARGS,
   (char*)"V.GetValueN(int) -> int\nC++: const unsigned short &GetValueN(const SizeT n)\n\n"},
  {(char*)"SetValue", PyvtkSparseArray_ItE_SetValue, METH_VARARGS,
   (char*)"V.SetValue(int, int)\nC++: void SetValue(CoordinateT i, const unsigned short &value)\nV.SetValue(int, int, int)\nC++: void SetValue(CoordinateT i, CoordinateT j,\n    const unsigned short &value)\nV.SetValue(int, int, int, int)\nC++: void SetValue(CoordinateT i, CoordinateT j, CoordinateT k,\n    const unsigned short &value)\nV.SetValue(vtkArrayCoordinates, int)\nC++: void SetValue(const vtkArrayCoordinates &coordinates,\n    const unsigned short &value)\n\n"},
  {(char*)"SetValueN", PyvtkSparseArray_ItE_SetValueN, METH_VARARGS,
   (char*)"V.SetValueN(int, int)\nC++: void SetValueN(const SizeT n, const unsigned short &value)\n\n"},
  {(char*)"SetNullValue", PyvtkSparseArray_ItE_SetNullValue, METH_VARARGS,
   (char*)"V.SetNullValue(int)\nC++: void SetNullValue(const unsigned short &value)\n\nSet the value that will be returned by GetValue() for NULL areas\nof the array.\n"},
  {(char*)"GetNullValue", PyvtkSparseArray_ItE_GetNullValue, METH_VARARGS,
   (char*)"V.GetNullValue() -> int\nC++: const unsigned short &GetNullValue()\n\nReturns the value that will be returned by GetValue() for NULL\nareas of the array.\n"},
  {(char*)"Clear", PyvtkSparseArray_ItE_Clear, METH_VARARGS,
   (char*)"V.Clear()\nC++: void Clear()\n\nRemove all non-null elements from the array, leaving the number\nof dimensions, the extent of each dimension, and the label for\neach dimension unchanged.\n"},
  {(char*)"Sort", PyvtkSparseArray_ItE_Sort, METH_VARARGS,
   (char*)"V.Sort(vtkArraySort)\nC++: void Sort(const vtkArraySort &sort)\n\nSorts array values so that their coordinates appear in some\nwell-defined order. The supplied vtkArraySort object controls\nwhich dimensions are sorted, and in what order, and should\ncontain one-or-more sort dimensions, up to the number of\ndimensions stored in the array.\n"},
  {(char*)"GetCoordinateStorage", PyvtkSparseArray_ItE_GetCoordinateStorage, METH_VARARGS,
   (char*)"V.GetCoordinateStorage(int) -> (int, ...)\nC++: CoordinateT *GetCoordinateStorage(DimensionT dimension)\n\nReturn a mutable reference to the underlying coordinate storage. \nCoordinates for each dimension are stored contiguously as a\none-dimensional array.  The ordering of coordinates within the\narray depends on the order in which values were added to the\narray, and any subsequent sorting.  Use at your own risk!\n"},
  {(char*)"GetValueStorage", PyvtkSparseArray_ItE_GetValueStorage, METH_VARARGS,
   (char*)"V.GetValueStorage() -> (int, ...)\nC++: unsigned short *GetValueStorage()\n\nReturn a mutable reference to the underlying value storage. \nValues are stored contiguously, but in arbitrary order.  Use\nGetCoordinateStorage() if you need to get the corresponding\ncoordinates for a value.  Use at your own risk!\n"},
  {(char*)"ReserveStorage", PyvtkSparseArray_ItE_ReserveStorage, METH_VARARGS,
   (char*)"V.ReserveStorage(int)\nC++: void ReserveStorage(const SizeT value_count)\n\nReserve storage for a specific number of values.  This is useful\nfor reading external data using GetCoordinateStorage() and\nGetValueStorage(), when the total number of non-NULL values in\nthe array can be determined in advance.  Note that after calling\nReserveStorage(), all coordinates and values will be undefined,\nso you must ensure that every set of coordinates and values is\noverwritten.  It is the caller's responsibility to ensure that\nduplicate coordinates are not inserted into the array.\n"},
  {(char*)"SetExtentsFromContents", PyvtkSparseArray_ItE_SetExtentsFromContents, METH_VARARGS,
   (char*)"V.SetExtentsFromContents()\nC++: void SetExtentsFromContents()\n\nUpdate the array extents to match its contents, so that the\nextent along each dimension matches the maximum index value along\nthat dimension.\n"},
  {(char*)"SetExtents", PyvtkSparseArray_ItE_SetExtents, METH_VARARGS,
   (char*)"V.SetExtents(vtkArrayExtents)\nC++: void SetExtents(const vtkArrayExtents &extents)\n\nSpecify arbitrary array extents, without altering the contents of\nthe array.  Note that the extents must be as-large-or-larger-than\nthe extents of the actual values stored in the array.  The number\nof dimensions in the supplied extents must match the number of\ndimensions currently stored in the array.\n"},
  {(char*)"AddValue", PyvtkSparseArray_ItE_AddValue, METH_VARARGS,
   (char*)"V.AddValue(int, int)\nC++: void AddValue(CoordinateT i, const unsigned short &value)\nV.AddValue(int, int, int)\nC++: void AddValue(CoordinateT i, CoordinateT j,\n    const unsigned short &value)\nV.AddValue(int, int, int, int)\nC++: void AddValue(CoordinateT i, CoordinateT j, CoordinateT k,\n    const unsigned short &value)\nV.AddValue(vtkArrayCoordinates, int)\nC++: void AddValue(const vtkArrayCoordinates &coordinates,\n    const unsigned short &value)\n\nAdds a new non-null element to the array.  Does not test to see\nif an element with matching coordinates already exists.  Useful\nfor providing fast initialization of the array as long as the\ncaller is prepared to guarantee that no duplicate coordinates are\never used.\n"},
  {(char*)"Validate", PyvtkSparseArray_ItE_Validate, METH_VARARGS,
   (char*)"V.Validate() -> bool\nC++: bool Validate()\n\nValidate the contents of the array, returning false if there are\nany problems. Potential problems include duplicate coordinates,\nwhich can be introduced into the array either through AddValue()\nor direct access to coordinates storage; and coordinates\nout-of-bounds given the current array extents.\n\nNote that Validate() is a heavyweight O(N log N) operation that\nis intended for temporary use during debugging.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkSparseArray_ItE_StaticNew()
{
  return vtkSparseArray<unsigned short>::New();
}

PyObject *PyVTKClass_vtkSparseArray_ItENew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkSparseArray_ItE_StaticNew,
    PyvtkSparseArray_ItE_Methods,
    typeid(vtkSparseArray<unsigned short>).name(), modulename,
    "vtkSparseArray_ItE", "vtkSparseArray_ItE",
    PyvtkSparseArray_ItE_Doc(),
    PyVTKClass_vtkTypedArray_ItENew(modulename));
  return cls;
}

const char **PyvtkSparseArray_ItE_Doc()
{
  static const char *docstring[] = {
    "vtkSparseArray - Sparse, independent coordinate storage for N-way\narrays.\n\n",
    "Superclass: vtkTypedArray[uint16]\n\n",
    "vtkSparseArray is a concrete vtkArray implementation that stores\nvalues using sparse independent coordinate storage.  This means that\nthe array stores the complete set of coordinates and the value for\neach non-null value in the array. While this approach requires\nslightly more storage than other sparse storage schemes (such as\nCompressed-Row or Compressed-Column), it is easier and more efficient\nt",
    "o work with when implementing algorithms, and  it generalizes well\nfor arbitrary numbers of dimensions.\n\nIn addition to the value retrieval and update methods provided by\nvtkTypedArray, vtkSparseArray provides methods to:\n\nGet and set a special 'null' value that will be returned when\nretrieving values for undefined coordinates.\n\nClear the contents of the array so that every set of coordinates is\nu",
    "ndefined.\n\nSort the array contents so that value coordinates can be visited in a\nspecific order.\n\nRetrieve pointers to the value- and coordinate-storage memory blocks.\n\nReserve storage for a specific number of non-null values, for\nefficiency when the number of non-null values is known in advance.\n\nRecompute the array extents so that they bound the largest set of\nnon-NULL values along each dimensio",
    "n.\n\nSpecify arbitrary array extents.\n\nAdd values to the array in amortized-constant time.\n\nValidate that the array does not contain duplicate coordinates.\n\nSee Also:\n\nvtkArray, vtkTypedArray, vtkDenseArray\n\nThanks:\n\nDeveloped by Timothy M. Shead (tshead@sandia.gov) at Sandia National\nLaboratories.\n\n",
    NULL
  };

  return docstring;
}

extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkSparseArray_IiENew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkTypedArray_IiENew
extern "C" { PyObject *PyVTKClass_vtkTypedArray_IiENew(const char *); }
#define DECLARED_PyVTKClass_vtkTypedArray_IiENew
#endif

static const char **PyvtkSparseArray_IiE_Doc();


static PyObject *
PyvtkSparseArray_IiE_IsDense(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsDense");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<int> *op = static_cast<vtkSparseArray<int> *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->IsDense() :
      op->vtkSparseArray<int>::IsDense());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSparseArray_IiE_GetExtents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetExtents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<int> *op = static_cast<vtkSparseArray<int> *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const vtkArrayExtents *tempr = (ap.IsBound() ?
      &op->GetExtents() :
      &op->vtkSparseArray<int>::GetExtents());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildSpecialObject(tempr, "vtkArrayExtents");
      }
    }

  return result;
}


static PyObject *
PyvtkSparseArray_IiE_GetNonNullSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNonNullSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<int> *op = static_cast<vtkSparseArray<int> *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned long long tempr = (ap.IsBound() ?
      op->GetNonNullSize() :
      op->vtkSparseArray<int>::GetNonNullSize());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSparseArray_IiE_GetCoordinatesN(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCoordinatesN");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<int> *op = static_cast<vtkSparseArray<int> *>(vp);

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
      op->vtkSparseArray<int>::GetCoordinatesN(temp0, *temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSparseArray_IiE_DeepCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeepCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<int> *op = static_cast<vtkSparseArray<int> *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkArray *tempr = (ap.IsBound() ?
      op->DeepCopy() :
      op->vtkSparseArray<int>::DeepCopy());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSparseArray_IiE_GetValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<int> *op = static_cast<vtkSparseArray<int> *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    const int *tempr = (ap.IsBound() ?
      &op->GetValue(temp0) :
      &op->vtkSparseArray<int>::GetValue(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(*tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkSparseArray_IiE_GetValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<int> *op = static_cast<vtkSparseArray<int> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    const int *tempr = (ap.IsBound() ?
      &op->GetValue(temp0, temp1) :
      &op->vtkSparseArray<int>::GetValue(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(*tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkSparseArray_IiE_GetValue_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<int> *op = static_cast<vtkSparseArray<int> *>(vp);

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
      &op->vtkSparseArray<int>::GetValue(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(*tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkSparseArray_IiE_GetValue_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<int> *op = static_cast<vtkSparseArray<int> *>(vp);

  vtkArrayCoordinates *temp0 = NULL;
  PyObject *pobj0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkArrayCoordinates"))
    {
    const int *tempr = (ap.IsBound() ?
      &op->GetValue(*temp0) :
      &op->vtkSparseArray<int>::GetValue(*temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(*tempr);
      }
    }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkSparseArray_IiE_GetValue_Methods[] = {
  {NULL, PyvtkSparseArray_IiE_GetValue_s1, METH_VARARGS,
   (char*)"@L"},
  {NULL, PyvtkSparseArray_IiE_GetValue_s4, METH_VARARGS,
   (char*)"@O &vtkArrayCoordinates"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkSparseArray_IiE_GetValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkSparseArray_IiE_GetValue_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkSparseArray_IiE_GetValue_s2(self, args);
    case 3:
      return PyvtkSparseArray_IiE_GetValue_s3(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetValue");
  return NULL;
}



static PyObject *
PyvtkSparseArray_IiE_GetValueN(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValueN");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<int> *op = static_cast<vtkSparseArray<int> *>(vp);

  unsigned long long temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    const int *tempr = (ap.IsBound() ?
      &op->GetValueN(temp0) :
      &op->vtkSparseArray<int>::GetValueN(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(*tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSparseArray_IiE_SetValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<int> *op = static_cast<vtkSparseArray<int> *>(vp);

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
      op->vtkSparseArray<int>::SetValue(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkSparseArray_IiE_SetValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<int> *op = static_cast<vtkSparseArray<int> *>(vp);

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
      op->vtkSparseArray<int>::SetValue(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkSparseArray_IiE_SetValue_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<int> *op = static_cast<vtkSparseArray<int> *>(vp);

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
      op->vtkSparseArray<int>::SetValue(temp0, temp1, temp2, temp3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkSparseArray_IiE_SetValue_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<int> *op = static_cast<vtkSparseArray<int> *>(vp);

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
      op->vtkSparseArray<int>::SetValue(*temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkSparseArray_IiE_SetValue_Methods[] = {
  {NULL, PyvtkSparseArray_IiE_SetValue_s1, METH_VARARGS,
   (char*)"@Li"},
  {NULL, PyvtkSparseArray_IiE_SetValue_s4, METH_VARARGS,
   (char*)"@Oi &vtkArrayCoordinates"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkSparseArray_IiE_SetValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkSparseArray_IiE_SetValue_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkSparseArray_IiE_SetValue_s2(self, args);
    case 4:
      return PyvtkSparseArray_IiE_SetValue_s3(self, args);
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetValue");
  return NULL;
}



static PyObject *
PyvtkSparseArray_IiE_SetValueN(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValueN");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<int> *op = static_cast<vtkSparseArray<int> *>(vp);

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
      op->vtkSparseArray<int>::SetValueN(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSparseArray_IiE_SetNullValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNullValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<int> *op = static_cast<vtkSparseArray<int> *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetNullValue(temp0);
      }
    else
      {
      op->vtkSparseArray<int>::SetNullValue(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSparseArray_IiE_GetNullValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNullValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<int> *op = static_cast<vtkSparseArray<int> *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const int *tempr = (ap.IsBound() ?
      &op->GetNullValue() :
      &op->vtkSparseArray<int>::GetNullValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(*tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSparseArray_IiE_Clear(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Clear");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<int> *op = static_cast<vtkSparseArray<int> *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Clear();
      }
    else
      {
      op->vtkSparseArray<int>::Clear();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSparseArray_IiE_Sort(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Sort");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<int> *op = static_cast<vtkSparseArray<int> *>(vp);

  vtkArraySort *temp0 = NULL;
  PyObject *pobj0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkArraySort"))
    {
    if (ap.IsBound())
      {
      op->Sort(*temp0);
      }
    else
      {
      op->vtkSparseArray<int>::Sort(*temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  Py_XDECREF(pobj0);

  return result;
}


static PyObject *
PyvtkSparseArray_IiE_GetCoordinateStorage(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCoordinateStorage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<int> *op = static_cast<vtkSparseArray<int> *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkIdType *tempr = (ap.IsBound() ?
      op->GetCoordinateStorage(temp0) :
      op->vtkSparseArray<int>::GetCoordinateStorage(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSparseArray_IiE_GetValueStorage(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValueStorage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<int> *op = static_cast<vtkSparseArray<int> *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int *tempr = (ap.IsBound() ?
      op->GetValueStorage() :
      op->vtkSparseArray<int>::GetValueStorage());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSparseArray_IiE_ReserveStorage(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReserveStorage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<int> *op = static_cast<vtkSparseArray<int> *>(vp);

  unsigned long long temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->ReserveStorage(temp0);
      }
    else
      {
      op->vtkSparseArray<int>::ReserveStorage(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSparseArray_IiE_SetExtentsFromContents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExtentsFromContents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<int> *op = static_cast<vtkSparseArray<int> *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetExtentsFromContents();
      }
    else
      {
      op->vtkSparseArray<int>::SetExtentsFromContents();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSparseArray_IiE_SetExtents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExtents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<int> *op = static_cast<vtkSparseArray<int> *>(vp);

  vtkArrayExtents *temp0 = NULL;
  PyObject *pobj0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkArrayExtents"))
    {
    if (ap.IsBound())
      {
      op->SetExtents(*temp0);
      }
    else
      {
      op->vtkSparseArray<int>::SetExtents(*temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  Py_XDECREF(pobj0);

  return result;
}


static PyObject *
PyvtkSparseArray_IiE_AddValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<int> *op = static_cast<vtkSparseArray<int> *>(vp);

  vtkIdType temp0;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->AddValue(temp0, temp1);
      }
    else
      {
      op->vtkSparseArray<int>::AddValue(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkSparseArray_IiE_AddValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<int> *op = static_cast<vtkSparseArray<int> *>(vp);

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
      op->AddValue(temp0, temp1, temp2);
      }
    else
      {
      op->vtkSparseArray<int>::AddValue(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkSparseArray_IiE_AddValue_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<int> *op = static_cast<vtkSparseArray<int> *>(vp);

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
      op->AddValue(temp0, temp1, temp2, temp3);
      }
    else
      {
      op->vtkSparseArray<int>::AddValue(temp0, temp1, temp2, temp3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkSparseArray_IiE_AddValue_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<int> *op = static_cast<vtkSparseArray<int> *>(vp);

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
      op->AddValue(*temp0, temp1);
      }
    else
      {
      op->vtkSparseArray<int>::AddValue(*temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkSparseArray_IiE_AddValue_Methods[] = {
  {NULL, PyvtkSparseArray_IiE_AddValue_s1, METH_VARARGS,
   (char*)"@Li"},
  {NULL, PyvtkSparseArray_IiE_AddValue_s4, METH_VARARGS,
   (char*)"@Oi &vtkArrayCoordinates"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkSparseArray_IiE_AddValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkSparseArray_IiE_AddValue_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkSparseArray_IiE_AddValue_s2(self, args);
    case 4:
      return PyvtkSparseArray_IiE_AddValue_s3(self, args);
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "AddValue");
  return NULL;
}



static PyObject *
PyvtkSparseArray_IiE_Validate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Validate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<int> *op = static_cast<vtkSparseArray<int> *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->Validate() :
      op->vtkSparseArray<int>::Validate());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkSparseArray_IiE_Methods[] = {
  {(char*)"IsDense", PyvtkSparseArray_IiE_IsDense, METH_VARARGS,
   (char*)"V.IsDense() -> bool\nC++: bool IsDense()\n\n"},
  {(char*)"GetExtents", PyvtkSparseArray_IiE_GetExtents, METH_VARARGS,
   (char*)"V.GetExtents() -> vtkArrayExtents\nC++: const vtkArrayExtents &GetExtents()\n\n"},
  {(char*)"GetNonNullSize", PyvtkSparseArray_IiE_GetNonNullSize, METH_VARARGS,
   (char*)"V.GetNonNullSize() -> int\nC++: SizeT GetNonNullSize()\n\n"},
  {(char*)"GetCoordinatesN", PyvtkSparseArray_IiE_GetCoordinatesN, METH_VARARGS,
   (char*)"V.GetCoordinatesN(int, vtkArrayCoordinates)\nC++: void GetCoordinatesN(const SizeT n,\n    vtkArrayCoordinates &coordinates)\n\n"},
  {(char*)"DeepCopy", PyvtkSparseArray_IiE_DeepCopy, METH_VARARGS,
   (char*)"V.DeepCopy() -> vtkArray\nC++: vtkArray *DeepCopy()\n\n"},
  {(char*)"GetValue", PyvtkSparseArray_IiE_GetValue, METH_VARARGS,
   (char*)"V.GetValue(int) -> int\nC++: const int &GetValue(CoordinateT i)\nV.GetValue(int, int) -> int\nC++: const int &GetValue(CoordinateT i, CoordinateT j)\nV.GetValue(int, int, int) -> int\nC++: const int &GetValue(CoordinateT i, CoordinateT j,\n    CoordinateT k)\nV.GetValue(vtkArrayCoordinates) -> int\nC++: const int &GetValue(const vtkArrayCoordinates &coordinates)\n\n"},
  {(char*)"GetValueN", PyvtkSparseArray_IiE_GetValueN, METH_VARARGS,
   (char*)"V.GetValueN(int) -> int\nC++: const int &GetValueN(const SizeT n)\n\n"},
  {(char*)"SetValue", PyvtkSparseArray_IiE_SetValue, METH_VARARGS,
   (char*)"V.SetValue(int, int)\nC++: void SetValue(CoordinateT i, const int &value)\nV.SetValue(int, int, int)\nC++: void SetValue(CoordinateT i, CoordinateT j, const int &value)\nV.SetValue(int, int, int, int)\nC++: void SetValue(CoordinateT i, CoordinateT j, CoordinateT k,\n    const int &value)\nV.SetValue(vtkArrayCoordinates, int)\nC++: void SetValue(const vtkArrayCoordinates &coordinates,\n    const int &value)\n\n"},
  {(char*)"SetValueN", PyvtkSparseArray_IiE_SetValueN, METH_VARARGS,
   (char*)"V.SetValueN(int, int)\nC++: void SetValueN(const SizeT n, const int &value)\n\n"},
  {(char*)"SetNullValue", PyvtkSparseArray_IiE_SetNullValue, METH_VARARGS,
   (char*)"V.SetNullValue(int)\nC++: void SetNullValue(const int &value)\n\nSet the value that will be returned by GetValue() for NULL areas\nof the array.\n"},
  {(char*)"GetNullValue", PyvtkSparseArray_IiE_GetNullValue, METH_VARARGS,
   (char*)"V.GetNullValue() -> int\nC++: const int &GetNullValue()\n\nReturns the value that will be returned by GetValue() for NULL\nareas of the array.\n"},
  {(char*)"Clear", PyvtkSparseArray_IiE_Clear, METH_VARARGS,
   (char*)"V.Clear()\nC++: void Clear()\n\nRemove all non-null elements from the array, leaving the number\nof dimensions, the extent of each dimension, and the label for\neach dimension unchanged.\n"},
  {(char*)"Sort", PyvtkSparseArray_IiE_Sort, METH_VARARGS,
   (char*)"V.Sort(vtkArraySort)\nC++: void Sort(const vtkArraySort &sort)\n\nSorts array values so that their coordinates appear in some\nwell-defined order. The supplied vtkArraySort object controls\nwhich dimensions are sorted, and in what order, and should\ncontain one-or-more sort dimensions, up to the number of\ndimensions stored in the array.\n"},
  {(char*)"GetCoordinateStorage", PyvtkSparseArray_IiE_GetCoordinateStorage, METH_VARARGS,
   (char*)"V.GetCoordinateStorage(int) -> (int, ...)\nC++: CoordinateT *GetCoordinateStorage(DimensionT dimension)\n\nReturn a mutable reference to the underlying coordinate storage. \nCoordinates for each dimension are stored contiguously as a\none-dimensional array.  The ordering of coordinates within the\narray depends on the order in which values were added to the\narray, and any subsequent sorting.  Use at your own risk!\n"},
  {(char*)"GetValueStorage", PyvtkSparseArray_IiE_GetValueStorage, METH_VARARGS,
   (char*)"V.GetValueStorage() -> (int, ...)\nC++: int *GetValueStorage()\n\nReturn a mutable reference to the underlying value storage. \nValues are stored contiguously, but in arbitrary order.  Use\nGetCoordinateStorage() if you need to get the corresponding\ncoordinates for a value.  Use at your own risk!\n"},
  {(char*)"ReserveStorage", PyvtkSparseArray_IiE_ReserveStorage, METH_VARARGS,
   (char*)"V.ReserveStorage(int)\nC++: void ReserveStorage(const SizeT value_count)\n\nReserve storage for a specific number of values.  This is useful\nfor reading external data using GetCoordinateStorage() and\nGetValueStorage(), when the total number of non-NULL values in\nthe array can be determined in advance.  Note that after calling\nReserveStorage(), all coordinates and values will be undefined,\nso you must ensure that every set of coordinates and values is\noverwritten.  It is the caller's responsibility to ensure that\nduplicate coordinates are not inserted into the array.\n"},
  {(char*)"SetExtentsFromContents", PyvtkSparseArray_IiE_SetExtentsFromContents, METH_VARARGS,
   (char*)"V.SetExtentsFromContents()\nC++: void SetExtentsFromContents()\n\nUpdate the array extents to match its contents, so that the\nextent along each dimension matches the maximum index value along\nthat dimension.\n"},
  {(char*)"SetExtents", PyvtkSparseArray_IiE_SetExtents, METH_VARARGS,
   (char*)"V.SetExtents(vtkArrayExtents)\nC++: void SetExtents(const vtkArrayExtents &extents)\n\nSpecify arbitrary array extents, without altering the contents of\nthe array.  Note that the extents must be as-large-or-larger-than\nthe extents of the actual values stored in the array.  The number\nof dimensions in the supplied extents must match the number of\ndimensions currently stored in the array.\n"},
  {(char*)"AddValue", PyvtkSparseArray_IiE_AddValue, METH_VARARGS,
   (char*)"V.AddValue(int, int)\nC++: void AddValue(CoordinateT i, const int &value)\nV.AddValue(int, int, int)\nC++: void AddValue(CoordinateT i, CoordinateT j, const int &value)\nV.AddValue(int, int, int, int)\nC++: void AddValue(CoordinateT i, CoordinateT j, CoordinateT k,\n    const int &value)\nV.AddValue(vtkArrayCoordinates, int)\nC++: void AddValue(const vtkArrayCoordinates &coordinates,\n    const int &value)\n\nAdds a new non-null element to the array.  Does not test to see\nif an element with matching coordinates already exists.  Useful\nfor providing fast initialization of the array as long as the\ncaller is prepared to guarantee that no duplicate coordinates are\never used.\n"},
  {(char*)"Validate", PyvtkSparseArray_IiE_Validate, METH_VARARGS,
   (char*)"V.Validate() -> bool\nC++: bool Validate()\n\nValidate the contents of the array, returning false if there are\nany problems. Potential problems include duplicate coordinates,\nwhich can be introduced into the array either through AddValue()\nor direct access to coordinates storage; and coordinates\nout-of-bounds given the current array extents.\n\nNote that Validate() is a heavyweight O(N log N) operation that\nis intended for temporary use during debugging.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkSparseArray_IiE_StaticNew()
{
  return vtkSparseArray<int>::New();
}

PyObject *PyVTKClass_vtkSparseArray_IiENew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkSparseArray_IiE_StaticNew,
    PyvtkSparseArray_IiE_Methods,
    typeid(vtkSparseArray<int>).name(), modulename,
    "vtkSparseArray_IiE", "vtkSparseArray_IiE",
    PyvtkSparseArray_IiE_Doc(),
    PyVTKClass_vtkTypedArray_IiENew(modulename));
  return cls;
}

const char **PyvtkSparseArray_IiE_Doc()
{
  static const char *docstring[] = {
    "vtkSparseArray - Sparse, independent coordinate storage for N-way\narrays.\n\n",
    "Superclass: vtkTypedArray[int32]\n\n",
    "vtkSparseArray is a concrete vtkArray implementation that stores\nvalues using sparse independent coordinate storage.  This means that\nthe array stores the complete set of coordinates and the value for\neach non-null value in the array. While this approach requires\nslightly more storage than other sparse storage schemes (such as\nCompressed-Row or Compressed-Column), it is easier and more efficient\nt",
    "o work with when implementing algorithms, and  it generalizes well\nfor arbitrary numbers of dimensions.\n\nIn addition to the value retrieval and update methods provided by\nvtkTypedArray, vtkSparseArray provides methods to:\n\nGet and set a special 'null' value that will be returned when\nretrieving values for undefined coordinates.\n\nClear the contents of the array so that every set of coordinates is\nu",
    "ndefined.\n\nSort the array contents so that value coordinates can be visited in a\nspecific order.\n\nRetrieve pointers to the value- and coordinate-storage memory blocks.\n\nReserve storage for a specific number of non-null values, for\nefficiency when the number of non-null values is known in advance.\n\nRecompute the array extents so that they bound the largest set of\nnon-NULL values along each dimensio",
    "n.\n\nSpecify arbitrary array extents.\n\nAdd values to the array in amortized-constant time.\n\nValidate that the array does not contain duplicate coordinates.\n\nSee Also:\n\nvtkArray, vtkTypedArray, vtkDenseArray\n\nThanks:\n\nDeveloped by Timothy M. Shead (tshead@sandia.gov) at Sandia National\nLaboratories.\n\n",
    NULL
  };

  return docstring;
}

extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkSparseArray_IjENew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkTypedArray_IjENew
extern "C" { PyObject *PyVTKClass_vtkTypedArray_IjENew(const char *); }
#define DECLARED_PyVTKClass_vtkTypedArray_IjENew
#endif

static const char **PyvtkSparseArray_IjE_Doc();


static PyObject *
PyvtkSparseArray_IjE_IsDense(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsDense");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<unsigned int> *op = static_cast<vtkSparseArray<unsigned int> *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->IsDense() :
      op->vtkSparseArray<unsigned int>::IsDense());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSparseArray_IjE_GetExtents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetExtents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<unsigned int> *op = static_cast<vtkSparseArray<unsigned int> *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const vtkArrayExtents *tempr = (ap.IsBound() ?
      &op->GetExtents() :
      &op->vtkSparseArray<unsigned int>::GetExtents());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildSpecialObject(tempr, "vtkArrayExtents");
      }
    }

  return result;
}


static PyObject *
PyvtkSparseArray_IjE_GetNonNullSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNonNullSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<unsigned int> *op = static_cast<vtkSparseArray<unsigned int> *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned long long tempr = (ap.IsBound() ?
      op->GetNonNullSize() :
      op->vtkSparseArray<unsigned int>::GetNonNullSize());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSparseArray_IjE_GetCoordinatesN(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCoordinatesN");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<unsigned int> *op = static_cast<vtkSparseArray<unsigned int> *>(vp);

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
      op->vtkSparseArray<unsigned int>::GetCoordinatesN(temp0, *temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSparseArray_IjE_DeepCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeepCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<unsigned int> *op = static_cast<vtkSparseArray<unsigned int> *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkArray *tempr = (ap.IsBound() ?
      op->DeepCopy() :
      op->vtkSparseArray<unsigned int>::DeepCopy());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSparseArray_IjE_GetValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<unsigned int> *op = static_cast<vtkSparseArray<unsigned int> *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    const unsigned int *tempr = (ap.IsBound() ?
      &op->GetValue(temp0) :
      &op->vtkSparseArray<unsigned int>::GetValue(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(*tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkSparseArray_IjE_GetValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<unsigned int> *op = static_cast<vtkSparseArray<unsigned int> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    const unsigned int *tempr = (ap.IsBound() ?
      &op->GetValue(temp0, temp1) :
      &op->vtkSparseArray<unsigned int>::GetValue(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(*tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkSparseArray_IjE_GetValue_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<unsigned int> *op = static_cast<vtkSparseArray<unsigned int> *>(vp);

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
      &op->vtkSparseArray<unsigned int>::GetValue(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(*tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkSparseArray_IjE_GetValue_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<unsigned int> *op = static_cast<vtkSparseArray<unsigned int> *>(vp);

  vtkArrayCoordinates *temp0 = NULL;
  PyObject *pobj0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkArrayCoordinates"))
    {
    const unsigned int *tempr = (ap.IsBound() ?
      &op->GetValue(*temp0) :
      &op->vtkSparseArray<unsigned int>::GetValue(*temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(*tempr);
      }
    }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkSparseArray_IjE_GetValue_Methods[] = {
  {NULL, PyvtkSparseArray_IjE_GetValue_s1, METH_VARARGS,
   (char*)"@L"},
  {NULL, PyvtkSparseArray_IjE_GetValue_s4, METH_VARARGS,
   (char*)"@O &vtkArrayCoordinates"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkSparseArray_IjE_GetValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkSparseArray_IjE_GetValue_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkSparseArray_IjE_GetValue_s2(self, args);
    case 3:
      return PyvtkSparseArray_IjE_GetValue_s3(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetValue");
  return NULL;
}



static PyObject *
PyvtkSparseArray_IjE_GetValueN(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValueN");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<unsigned int> *op = static_cast<vtkSparseArray<unsigned int> *>(vp);

  unsigned long long temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    const unsigned int *tempr = (ap.IsBound() ?
      &op->GetValueN(temp0) :
      &op->vtkSparseArray<unsigned int>::GetValueN(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(*tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSparseArray_IjE_SetValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<unsigned int> *op = static_cast<vtkSparseArray<unsigned int> *>(vp);

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
      op->vtkSparseArray<unsigned int>::SetValue(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkSparseArray_IjE_SetValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<unsigned int> *op = static_cast<vtkSparseArray<unsigned int> *>(vp);

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
      op->vtkSparseArray<unsigned int>::SetValue(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkSparseArray_IjE_SetValue_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<unsigned int> *op = static_cast<vtkSparseArray<unsigned int> *>(vp);

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
      op->vtkSparseArray<unsigned int>::SetValue(temp0, temp1, temp2, temp3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkSparseArray_IjE_SetValue_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<unsigned int> *op = static_cast<vtkSparseArray<unsigned int> *>(vp);

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
      op->vtkSparseArray<unsigned int>::SetValue(*temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkSparseArray_IjE_SetValue_Methods[] = {
  {NULL, PyvtkSparseArray_IjE_SetValue_s1, METH_VARARGS,
   (char*)"@LI"},
  {NULL, PyvtkSparseArray_IjE_SetValue_s4, METH_VARARGS,
   (char*)"@OI &vtkArrayCoordinates"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkSparseArray_IjE_SetValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkSparseArray_IjE_SetValue_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkSparseArray_IjE_SetValue_s2(self, args);
    case 4:
      return PyvtkSparseArray_IjE_SetValue_s3(self, args);
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetValue");
  return NULL;
}



static PyObject *
PyvtkSparseArray_IjE_SetValueN(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValueN");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<unsigned int> *op = static_cast<vtkSparseArray<unsigned int> *>(vp);

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
      op->vtkSparseArray<unsigned int>::SetValueN(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSparseArray_IjE_SetNullValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNullValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<unsigned int> *op = static_cast<vtkSparseArray<unsigned int> *>(vp);

  unsigned int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetNullValue(temp0);
      }
    else
      {
      op->vtkSparseArray<unsigned int>::SetNullValue(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSparseArray_IjE_GetNullValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNullValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<unsigned int> *op = static_cast<vtkSparseArray<unsigned int> *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const unsigned int *tempr = (ap.IsBound() ?
      &op->GetNullValue() :
      &op->vtkSparseArray<unsigned int>::GetNullValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(*tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSparseArray_IjE_Clear(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Clear");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<unsigned int> *op = static_cast<vtkSparseArray<unsigned int> *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Clear();
      }
    else
      {
      op->vtkSparseArray<unsigned int>::Clear();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSparseArray_IjE_Sort(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Sort");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<unsigned int> *op = static_cast<vtkSparseArray<unsigned int> *>(vp);

  vtkArraySort *temp0 = NULL;
  PyObject *pobj0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkArraySort"))
    {
    if (ap.IsBound())
      {
      op->Sort(*temp0);
      }
    else
      {
      op->vtkSparseArray<unsigned int>::Sort(*temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  Py_XDECREF(pobj0);

  return result;
}


static PyObject *
PyvtkSparseArray_IjE_GetCoordinateStorage(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCoordinateStorage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<unsigned int> *op = static_cast<vtkSparseArray<unsigned int> *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkIdType *tempr = (ap.IsBound() ?
      op->GetCoordinateStorage(temp0) :
      op->vtkSparseArray<unsigned int>::GetCoordinateStorage(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSparseArray_IjE_GetValueStorage(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValueStorage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<unsigned int> *op = static_cast<vtkSparseArray<unsigned int> *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned int *tempr = (ap.IsBound() ?
      op->GetValueStorage() :
      op->vtkSparseArray<unsigned int>::GetValueStorage());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSparseArray_IjE_ReserveStorage(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReserveStorage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<unsigned int> *op = static_cast<vtkSparseArray<unsigned int> *>(vp);

  unsigned long long temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->ReserveStorage(temp0);
      }
    else
      {
      op->vtkSparseArray<unsigned int>::ReserveStorage(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSparseArray_IjE_SetExtentsFromContents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExtentsFromContents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<unsigned int> *op = static_cast<vtkSparseArray<unsigned int> *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetExtentsFromContents();
      }
    else
      {
      op->vtkSparseArray<unsigned int>::SetExtentsFromContents();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSparseArray_IjE_SetExtents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExtents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<unsigned int> *op = static_cast<vtkSparseArray<unsigned int> *>(vp);

  vtkArrayExtents *temp0 = NULL;
  PyObject *pobj0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkArrayExtents"))
    {
    if (ap.IsBound())
      {
      op->SetExtents(*temp0);
      }
    else
      {
      op->vtkSparseArray<unsigned int>::SetExtents(*temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  Py_XDECREF(pobj0);

  return result;
}


static PyObject *
PyvtkSparseArray_IjE_AddValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<unsigned int> *op = static_cast<vtkSparseArray<unsigned int> *>(vp);

  vtkIdType temp0;
  unsigned int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->AddValue(temp0, temp1);
      }
    else
      {
      op->vtkSparseArray<unsigned int>::AddValue(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkSparseArray_IjE_AddValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<unsigned int> *op = static_cast<vtkSparseArray<unsigned int> *>(vp);

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
      op->AddValue(temp0, temp1, temp2);
      }
    else
      {
      op->vtkSparseArray<unsigned int>::AddValue(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkSparseArray_IjE_AddValue_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<unsigned int> *op = static_cast<vtkSparseArray<unsigned int> *>(vp);

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
      op->AddValue(temp0, temp1, temp2, temp3);
      }
    else
      {
      op->vtkSparseArray<unsigned int>::AddValue(temp0, temp1, temp2, temp3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkSparseArray_IjE_AddValue_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<unsigned int> *op = static_cast<vtkSparseArray<unsigned int> *>(vp);

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
      op->AddValue(*temp0, temp1);
      }
    else
      {
      op->vtkSparseArray<unsigned int>::AddValue(*temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkSparseArray_IjE_AddValue_Methods[] = {
  {NULL, PyvtkSparseArray_IjE_AddValue_s1, METH_VARARGS,
   (char*)"@LI"},
  {NULL, PyvtkSparseArray_IjE_AddValue_s4, METH_VARARGS,
   (char*)"@OI &vtkArrayCoordinates"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkSparseArray_IjE_AddValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkSparseArray_IjE_AddValue_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkSparseArray_IjE_AddValue_s2(self, args);
    case 4:
      return PyvtkSparseArray_IjE_AddValue_s3(self, args);
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "AddValue");
  return NULL;
}



static PyObject *
PyvtkSparseArray_IjE_Validate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Validate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<unsigned int> *op = static_cast<vtkSparseArray<unsigned int> *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->Validate() :
      op->vtkSparseArray<unsigned int>::Validate());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkSparseArray_IjE_Methods[] = {
  {(char*)"IsDense", PyvtkSparseArray_IjE_IsDense, METH_VARARGS,
   (char*)"V.IsDense() -> bool\nC++: bool IsDense()\n\n"},
  {(char*)"GetExtents", PyvtkSparseArray_IjE_GetExtents, METH_VARARGS,
   (char*)"V.GetExtents() -> vtkArrayExtents\nC++: const vtkArrayExtents &GetExtents()\n\n"},
  {(char*)"GetNonNullSize", PyvtkSparseArray_IjE_GetNonNullSize, METH_VARARGS,
   (char*)"V.GetNonNullSize() -> int\nC++: SizeT GetNonNullSize()\n\n"},
  {(char*)"GetCoordinatesN", PyvtkSparseArray_IjE_GetCoordinatesN, METH_VARARGS,
   (char*)"V.GetCoordinatesN(int, vtkArrayCoordinates)\nC++: void GetCoordinatesN(const SizeT n,\n    vtkArrayCoordinates &coordinates)\n\n"},
  {(char*)"DeepCopy", PyvtkSparseArray_IjE_DeepCopy, METH_VARARGS,
   (char*)"V.DeepCopy() -> vtkArray\nC++: vtkArray *DeepCopy()\n\n"},
  {(char*)"GetValue", PyvtkSparseArray_IjE_GetValue, METH_VARARGS,
   (char*)"V.GetValue(int) -> int\nC++: const unsigned int &GetValue(CoordinateT i)\nV.GetValue(int, int) -> int\nC++: const unsigned int &GetValue(CoordinateT i, CoordinateT j)\nV.GetValue(int, int, int) -> int\nC++: const unsigned int &GetValue(CoordinateT i, CoordinateT j,\n    CoordinateT k)\nV.GetValue(vtkArrayCoordinates) -> int\nC++: const unsigned int &GetValue(\n    const vtkArrayCoordinates &coordinates)\n\n"},
  {(char*)"GetValueN", PyvtkSparseArray_IjE_GetValueN, METH_VARARGS,
   (char*)"V.GetValueN(int) -> int\nC++: const unsigned int &GetValueN(const SizeT n)\n\n"},
  {(char*)"SetValue", PyvtkSparseArray_IjE_SetValue, METH_VARARGS,
   (char*)"V.SetValue(int, int)\nC++: void SetValue(CoordinateT i, const unsigned int &value)\nV.SetValue(int, int, int)\nC++: void SetValue(CoordinateT i, CoordinateT j,\n    const unsigned int &value)\nV.SetValue(int, int, int, int)\nC++: void SetValue(CoordinateT i, CoordinateT j, CoordinateT k,\n    const unsigned int &value)\nV.SetValue(vtkArrayCoordinates, int)\nC++: void SetValue(const vtkArrayCoordinates &coordinates,\n    const unsigned int &value)\n\n"},
  {(char*)"SetValueN", PyvtkSparseArray_IjE_SetValueN, METH_VARARGS,
   (char*)"V.SetValueN(int, int)\nC++: void SetValueN(const SizeT n, const unsigned int &value)\n\n"},
  {(char*)"SetNullValue", PyvtkSparseArray_IjE_SetNullValue, METH_VARARGS,
   (char*)"V.SetNullValue(int)\nC++: void SetNullValue(const unsigned int &value)\n\nSet the value that will be returned by GetValue() for NULL areas\nof the array.\n"},
  {(char*)"GetNullValue", PyvtkSparseArray_IjE_GetNullValue, METH_VARARGS,
   (char*)"V.GetNullValue() -> int\nC++: const unsigned int &GetNullValue()\n\nReturns the value that will be returned by GetValue() for NULL\nareas of the array.\n"},
  {(char*)"Clear", PyvtkSparseArray_IjE_Clear, METH_VARARGS,
   (char*)"V.Clear()\nC++: void Clear()\n\nRemove all non-null elements from the array, leaving the number\nof dimensions, the extent of each dimension, and the label for\neach dimension unchanged.\n"},
  {(char*)"Sort", PyvtkSparseArray_IjE_Sort, METH_VARARGS,
   (char*)"V.Sort(vtkArraySort)\nC++: void Sort(const vtkArraySort &sort)\n\nSorts array values so that their coordinates appear in some\nwell-defined order. The supplied vtkArraySort object controls\nwhich dimensions are sorted, and in what order, and should\ncontain one-or-more sort dimensions, up to the number of\ndimensions stored in the array.\n"},
  {(char*)"GetCoordinateStorage", PyvtkSparseArray_IjE_GetCoordinateStorage, METH_VARARGS,
   (char*)"V.GetCoordinateStorage(int) -> (int, ...)\nC++: CoordinateT *GetCoordinateStorage(DimensionT dimension)\n\nReturn a mutable reference to the underlying coordinate storage. \nCoordinates for each dimension are stored contiguously as a\none-dimensional array.  The ordering of coordinates within the\narray depends on the order in which values were added to the\narray, and any subsequent sorting.  Use at your own risk!\n"},
  {(char*)"GetValueStorage", PyvtkSparseArray_IjE_GetValueStorage, METH_VARARGS,
   (char*)"V.GetValueStorage() -> (int, ...)\nC++: unsigned int *GetValueStorage()\n\nReturn a mutable reference to the underlying value storage. \nValues are stored contiguously, but in arbitrary order.  Use\nGetCoordinateStorage() if you need to get the corresponding\ncoordinates for a value.  Use at your own risk!\n"},
  {(char*)"ReserveStorage", PyvtkSparseArray_IjE_ReserveStorage, METH_VARARGS,
   (char*)"V.ReserveStorage(int)\nC++: void ReserveStorage(const SizeT value_count)\n\nReserve storage for a specific number of values.  This is useful\nfor reading external data using GetCoordinateStorage() and\nGetValueStorage(), when the total number of non-NULL values in\nthe array can be determined in advance.  Note that after calling\nReserveStorage(), all coordinates and values will be undefined,\nso you must ensure that every set of coordinates and values is\noverwritten.  It is the caller's responsibility to ensure that\nduplicate coordinates are not inserted into the array.\n"},
  {(char*)"SetExtentsFromContents", PyvtkSparseArray_IjE_SetExtentsFromContents, METH_VARARGS,
   (char*)"V.SetExtentsFromContents()\nC++: void SetExtentsFromContents()\n\nUpdate the array extents to match its contents, so that the\nextent along each dimension matches the maximum index value along\nthat dimension.\n"},
  {(char*)"SetExtents", PyvtkSparseArray_IjE_SetExtents, METH_VARARGS,
   (char*)"V.SetExtents(vtkArrayExtents)\nC++: void SetExtents(const vtkArrayExtents &extents)\n\nSpecify arbitrary array extents, without altering the contents of\nthe array.  Note that the extents must be as-large-or-larger-than\nthe extents of the actual values stored in the array.  The number\nof dimensions in the supplied extents must match the number of\ndimensions currently stored in the array.\n"},
  {(char*)"AddValue", PyvtkSparseArray_IjE_AddValue, METH_VARARGS,
   (char*)"V.AddValue(int, int)\nC++: void AddValue(CoordinateT i, const unsigned int &value)\nV.AddValue(int, int, int)\nC++: void AddValue(CoordinateT i, CoordinateT j,\n    const unsigned int &value)\nV.AddValue(int, int, int, int)\nC++: void AddValue(CoordinateT i, CoordinateT j, CoordinateT k,\n    const unsigned int &value)\nV.AddValue(vtkArrayCoordinates, int)\nC++: void AddValue(const vtkArrayCoordinates &coordinates,\n    const unsigned int &value)\n\nAdds a new non-null element to the array.  Does not test to see\nif an element with matching coordinates already exists.  Useful\nfor providing fast initialization of the array as long as the\ncaller is prepared to guarantee that no duplicate coordinates are\never used.\n"},
  {(char*)"Validate", PyvtkSparseArray_IjE_Validate, METH_VARARGS,
   (char*)"V.Validate() -> bool\nC++: bool Validate()\n\nValidate the contents of the array, returning false if there are\nany problems. Potential problems include duplicate coordinates,\nwhich can be introduced into the array either through AddValue()\nor direct access to coordinates storage; and coordinates\nout-of-bounds given the current array extents.\n\nNote that Validate() is a heavyweight O(N log N) operation that\nis intended for temporary use during debugging.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkSparseArray_IjE_StaticNew()
{
  return vtkSparseArray<unsigned int>::New();
}

PyObject *PyVTKClass_vtkSparseArray_IjENew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkSparseArray_IjE_StaticNew,
    PyvtkSparseArray_IjE_Methods,
    typeid(vtkSparseArray<unsigned int>).name(), modulename,
    "vtkSparseArray_IjE", "vtkSparseArray_IjE",
    PyvtkSparseArray_IjE_Doc(),
    PyVTKClass_vtkTypedArray_IjENew(modulename));
  return cls;
}

const char **PyvtkSparseArray_IjE_Doc()
{
  static const char *docstring[] = {
    "vtkSparseArray - Sparse, independent coordinate storage for N-way\narrays.\n\n",
    "Superclass: vtkTypedArray[uint32]\n\n",
    "vtkSparseArray is a concrete vtkArray implementation that stores\nvalues using sparse independent coordinate storage.  This means that\nthe array stores the complete set of coordinates and the value for\neach non-null value in the array. While this approach requires\nslightly more storage than other sparse storage schemes (such as\nCompressed-Row or Compressed-Column), it is easier and more efficient\nt",
    "o work with when implementing algorithms, and  it generalizes well\nfor arbitrary numbers of dimensions.\n\nIn addition to the value retrieval and update methods provided by\nvtkTypedArray, vtkSparseArray provides methods to:\n\nGet and set a special 'null' value that will be returned when\nretrieving values for undefined coordinates.\n\nClear the contents of the array so that every set of coordinates is\nu",
    "ndefined.\n\nSort the array contents so that value coordinates can be visited in a\nspecific order.\n\nRetrieve pointers to the value- and coordinate-storage memory blocks.\n\nReserve storage for a specific number of non-null values, for\nefficiency when the number of non-null values is known in advance.\n\nRecompute the array extents so that they bound the largest set of\nnon-NULL values along each dimensio",
    "n.\n\nSpecify arbitrary array extents.\n\nAdd values to the array in amortized-constant time.\n\nValidate that the array does not contain duplicate coordinates.\n\nSee Also:\n\nvtkArray, vtkTypedArray, vtkDenseArray\n\nThanks:\n\nDeveloped by Timothy M. Shead (tshead@sandia.gov) at Sandia National\nLaboratories.\n\n",
    NULL
  };

  return docstring;
}

extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkSparseArray_IlENew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkTypedArray_IlENew
extern "C" { PyObject *PyVTKClass_vtkTypedArray_IlENew(const char *); }
#define DECLARED_PyVTKClass_vtkTypedArray_IlENew
#endif

static const char **PyvtkSparseArray_IlE_Doc();


static PyObject *
PyvtkSparseArray_IlE_IsDense(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsDense");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<long> *op = static_cast<vtkSparseArray<long> *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->IsDense() :
      op->vtkSparseArray<long>::IsDense());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSparseArray_IlE_GetExtents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetExtents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<long> *op = static_cast<vtkSparseArray<long> *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const vtkArrayExtents *tempr = (ap.IsBound() ?
      &op->GetExtents() :
      &op->vtkSparseArray<long>::GetExtents());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildSpecialObject(tempr, "vtkArrayExtents");
      }
    }

  return result;
}


static PyObject *
PyvtkSparseArray_IlE_GetNonNullSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNonNullSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<long> *op = static_cast<vtkSparseArray<long> *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned long long tempr = (ap.IsBound() ?
      op->GetNonNullSize() :
      op->vtkSparseArray<long>::GetNonNullSize());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSparseArray_IlE_GetCoordinatesN(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCoordinatesN");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<long> *op = static_cast<vtkSparseArray<long> *>(vp);

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
      op->vtkSparseArray<long>::GetCoordinatesN(temp0, *temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSparseArray_IlE_DeepCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeepCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<long> *op = static_cast<vtkSparseArray<long> *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkArray *tempr = (ap.IsBound() ?
      op->DeepCopy() :
      op->vtkSparseArray<long>::DeepCopy());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSparseArray_IlE_GetValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<long> *op = static_cast<vtkSparseArray<long> *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    const long *tempr = (ap.IsBound() ?
      &op->GetValue(temp0) :
      &op->vtkSparseArray<long>::GetValue(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(*tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkSparseArray_IlE_GetValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<long> *op = static_cast<vtkSparseArray<long> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    const long *tempr = (ap.IsBound() ?
      &op->GetValue(temp0, temp1) :
      &op->vtkSparseArray<long>::GetValue(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(*tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkSparseArray_IlE_GetValue_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<long> *op = static_cast<vtkSparseArray<long> *>(vp);

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
      &op->vtkSparseArray<long>::GetValue(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(*tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkSparseArray_IlE_GetValue_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<long> *op = static_cast<vtkSparseArray<long> *>(vp);

  vtkArrayCoordinates *temp0 = NULL;
  PyObject *pobj0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkArrayCoordinates"))
    {
    const long *tempr = (ap.IsBound() ?
      &op->GetValue(*temp0) :
      &op->vtkSparseArray<long>::GetValue(*temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(*tempr);
      }
    }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkSparseArray_IlE_GetValue_Methods[] = {
  {NULL, PyvtkSparseArray_IlE_GetValue_s1, METH_VARARGS,
   (char*)"@L"},
  {NULL, PyvtkSparseArray_IlE_GetValue_s4, METH_VARARGS,
   (char*)"@O &vtkArrayCoordinates"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkSparseArray_IlE_GetValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkSparseArray_IlE_GetValue_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkSparseArray_IlE_GetValue_s2(self, args);
    case 3:
      return PyvtkSparseArray_IlE_GetValue_s3(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetValue");
  return NULL;
}



static PyObject *
PyvtkSparseArray_IlE_GetValueN(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValueN");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<long> *op = static_cast<vtkSparseArray<long> *>(vp);

  unsigned long long temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    const long *tempr = (ap.IsBound() ?
      &op->GetValueN(temp0) :
      &op->vtkSparseArray<long>::GetValueN(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(*tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSparseArray_IlE_SetValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<long> *op = static_cast<vtkSparseArray<long> *>(vp);

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
      op->vtkSparseArray<long>::SetValue(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkSparseArray_IlE_SetValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<long> *op = static_cast<vtkSparseArray<long> *>(vp);

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
      op->vtkSparseArray<long>::SetValue(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkSparseArray_IlE_SetValue_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<long> *op = static_cast<vtkSparseArray<long> *>(vp);

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
      op->vtkSparseArray<long>::SetValue(temp0, temp1, temp2, temp3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkSparseArray_IlE_SetValue_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<long> *op = static_cast<vtkSparseArray<long> *>(vp);

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
      op->vtkSparseArray<long>::SetValue(*temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkSparseArray_IlE_SetValue_Methods[] = {
  {NULL, PyvtkSparseArray_IlE_SetValue_s1, METH_VARARGS,
   (char*)"@Ll"},
  {NULL, PyvtkSparseArray_IlE_SetValue_s4, METH_VARARGS,
   (char*)"@Ol &vtkArrayCoordinates"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkSparseArray_IlE_SetValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkSparseArray_IlE_SetValue_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkSparseArray_IlE_SetValue_s2(self, args);
    case 4:
      return PyvtkSparseArray_IlE_SetValue_s3(self, args);
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetValue");
  return NULL;
}



static PyObject *
PyvtkSparseArray_IlE_SetValueN(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValueN");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<long> *op = static_cast<vtkSparseArray<long> *>(vp);

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
      op->vtkSparseArray<long>::SetValueN(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSparseArray_IlE_SetNullValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNullValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<long> *op = static_cast<vtkSparseArray<long> *>(vp);

  long temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetNullValue(temp0);
      }
    else
      {
      op->vtkSparseArray<long>::SetNullValue(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSparseArray_IlE_GetNullValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNullValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<long> *op = static_cast<vtkSparseArray<long> *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const long *tempr = (ap.IsBound() ?
      &op->GetNullValue() :
      &op->vtkSparseArray<long>::GetNullValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(*tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSparseArray_IlE_Clear(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Clear");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<long> *op = static_cast<vtkSparseArray<long> *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Clear();
      }
    else
      {
      op->vtkSparseArray<long>::Clear();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSparseArray_IlE_Sort(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Sort");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<long> *op = static_cast<vtkSparseArray<long> *>(vp);

  vtkArraySort *temp0 = NULL;
  PyObject *pobj0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkArraySort"))
    {
    if (ap.IsBound())
      {
      op->Sort(*temp0);
      }
    else
      {
      op->vtkSparseArray<long>::Sort(*temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  Py_XDECREF(pobj0);

  return result;
}


static PyObject *
PyvtkSparseArray_IlE_GetCoordinateStorage(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCoordinateStorage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<long> *op = static_cast<vtkSparseArray<long> *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkIdType *tempr = (ap.IsBound() ?
      op->GetCoordinateStorage(temp0) :
      op->vtkSparseArray<long>::GetCoordinateStorage(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSparseArray_IlE_GetValueStorage(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValueStorage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<long> *op = static_cast<vtkSparseArray<long> *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    long *tempr = (ap.IsBound() ?
      op->GetValueStorage() :
      op->vtkSparseArray<long>::GetValueStorage());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSparseArray_IlE_ReserveStorage(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReserveStorage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<long> *op = static_cast<vtkSparseArray<long> *>(vp);

  unsigned long long temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->ReserveStorage(temp0);
      }
    else
      {
      op->vtkSparseArray<long>::ReserveStorage(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSparseArray_IlE_SetExtentsFromContents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExtentsFromContents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<long> *op = static_cast<vtkSparseArray<long> *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetExtentsFromContents();
      }
    else
      {
      op->vtkSparseArray<long>::SetExtentsFromContents();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSparseArray_IlE_SetExtents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExtents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<long> *op = static_cast<vtkSparseArray<long> *>(vp);

  vtkArrayExtents *temp0 = NULL;
  PyObject *pobj0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkArrayExtents"))
    {
    if (ap.IsBound())
      {
      op->SetExtents(*temp0);
      }
    else
      {
      op->vtkSparseArray<long>::SetExtents(*temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  Py_XDECREF(pobj0);

  return result;
}


static PyObject *
PyvtkSparseArray_IlE_AddValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<long> *op = static_cast<vtkSparseArray<long> *>(vp);

  vtkIdType temp0;
  long temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->AddValue(temp0, temp1);
      }
    else
      {
      op->vtkSparseArray<long>::AddValue(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkSparseArray_IlE_AddValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<long> *op = static_cast<vtkSparseArray<long> *>(vp);

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
      op->AddValue(temp0, temp1, temp2);
      }
    else
      {
      op->vtkSparseArray<long>::AddValue(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkSparseArray_IlE_AddValue_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<long> *op = static_cast<vtkSparseArray<long> *>(vp);

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
      op->AddValue(temp0, temp1, temp2, temp3);
      }
    else
      {
      op->vtkSparseArray<long>::AddValue(temp0, temp1, temp2, temp3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkSparseArray_IlE_AddValue_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<long> *op = static_cast<vtkSparseArray<long> *>(vp);

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
      op->AddValue(*temp0, temp1);
      }
    else
      {
      op->vtkSparseArray<long>::AddValue(*temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkSparseArray_IlE_AddValue_Methods[] = {
  {NULL, PyvtkSparseArray_IlE_AddValue_s1, METH_VARARGS,
   (char*)"@Ll"},
  {NULL, PyvtkSparseArray_IlE_AddValue_s4, METH_VARARGS,
   (char*)"@Ol &vtkArrayCoordinates"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkSparseArray_IlE_AddValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkSparseArray_IlE_AddValue_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkSparseArray_IlE_AddValue_s2(self, args);
    case 4:
      return PyvtkSparseArray_IlE_AddValue_s3(self, args);
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "AddValue");
  return NULL;
}



static PyObject *
PyvtkSparseArray_IlE_Validate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Validate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<long> *op = static_cast<vtkSparseArray<long> *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->Validate() :
      op->vtkSparseArray<long>::Validate());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkSparseArray_IlE_Methods[] = {
  {(char*)"IsDense", PyvtkSparseArray_IlE_IsDense, METH_VARARGS,
   (char*)"V.IsDense() -> bool\nC++: bool IsDense()\n\n"},
  {(char*)"GetExtents", PyvtkSparseArray_IlE_GetExtents, METH_VARARGS,
   (char*)"V.GetExtents() -> vtkArrayExtents\nC++: const vtkArrayExtents &GetExtents()\n\n"},
  {(char*)"GetNonNullSize", PyvtkSparseArray_IlE_GetNonNullSize, METH_VARARGS,
   (char*)"V.GetNonNullSize() -> int\nC++: SizeT GetNonNullSize()\n\n"},
  {(char*)"GetCoordinatesN", PyvtkSparseArray_IlE_GetCoordinatesN, METH_VARARGS,
   (char*)"V.GetCoordinatesN(int, vtkArrayCoordinates)\nC++: void GetCoordinatesN(const SizeT n,\n    vtkArrayCoordinates &coordinates)\n\n"},
  {(char*)"DeepCopy", PyvtkSparseArray_IlE_DeepCopy, METH_VARARGS,
   (char*)"V.DeepCopy() -> vtkArray\nC++: vtkArray *DeepCopy()\n\n"},
  {(char*)"GetValue", PyvtkSparseArray_IlE_GetValue, METH_VARARGS,
   (char*)"V.GetValue(int) -> int\nC++: const long &GetValue(CoordinateT i)\nV.GetValue(int, int) -> int\nC++: const long &GetValue(CoordinateT i, CoordinateT j)\nV.GetValue(int, int, int) -> int\nC++: const long &GetValue(CoordinateT i, CoordinateT j,\n    CoordinateT k)\nV.GetValue(vtkArrayCoordinates) -> int\nC++: const long &GetValue(const vtkArrayCoordinates &coordinates)\n\n"},
  {(char*)"GetValueN", PyvtkSparseArray_IlE_GetValueN, METH_VARARGS,
   (char*)"V.GetValueN(int) -> int\nC++: const long &GetValueN(const SizeT n)\n\n"},
  {(char*)"SetValue", PyvtkSparseArray_IlE_SetValue, METH_VARARGS,
   (char*)"V.SetValue(int, int)\nC++: void SetValue(CoordinateT i, const long &value)\nV.SetValue(int, int, int)\nC++: void SetValue(CoordinateT i, CoordinateT j,\n    const long &value)\nV.SetValue(int, int, int, int)\nC++: void SetValue(CoordinateT i, CoordinateT j, CoordinateT k,\n    const long &value)\nV.SetValue(vtkArrayCoordinates, int)\nC++: void SetValue(const vtkArrayCoordinates &coordinates,\n    const long &value)\n\n"},
  {(char*)"SetValueN", PyvtkSparseArray_IlE_SetValueN, METH_VARARGS,
   (char*)"V.SetValueN(int, int)\nC++: void SetValueN(const SizeT n, const long &value)\n\n"},
  {(char*)"SetNullValue", PyvtkSparseArray_IlE_SetNullValue, METH_VARARGS,
   (char*)"V.SetNullValue(int)\nC++: void SetNullValue(const long &value)\n\nSet the value that will be returned by GetValue() for NULL areas\nof the array.\n"},
  {(char*)"GetNullValue", PyvtkSparseArray_IlE_GetNullValue, METH_VARARGS,
   (char*)"V.GetNullValue() -> int\nC++: const long &GetNullValue()\n\nReturns the value that will be returned by GetValue() for NULL\nareas of the array.\n"},
  {(char*)"Clear", PyvtkSparseArray_IlE_Clear, METH_VARARGS,
   (char*)"V.Clear()\nC++: void Clear()\n\nRemove all non-null elements from the array, leaving the number\nof dimensions, the extent of each dimension, and the label for\neach dimension unchanged.\n"},
  {(char*)"Sort", PyvtkSparseArray_IlE_Sort, METH_VARARGS,
   (char*)"V.Sort(vtkArraySort)\nC++: void Sort(const vtkArraySort &sort)\n\nSorts array values so that their coordinates appear in some\nwell-defined order. The supplied vtkArraySort object controls\nwhich dimensions are sorted, and in what order, and should\ncontain one-or-more sort dimensions, up to the number of\ndimensions stored in the array.\n"},
  {(char*)"GetCoordinateStorage", PyvtkSparseArray_IlE_GetCoordinateStorage, METH_VARARGS,
   (char*)"V.GetCoordinateStorage(int) -> (int, ...)\nC++: CoordinateT *GetCoordinateStorage(DimensionT dimension)\n\nReturn a mutable reference to the underlying coordinate storage. \nCoordinates for each dimension are stored contiguously as a\none-dimensional array.  The ordering of coordinates within the\narray depends on the order in which values were added to the\narray, and any subsequent sorting.  Use at your own risk!\n"},
  {(char*)"GetValueStorage", PyvtkSparseArray_IlE_GetValueStorage, METH_VARARGS,
   (char*)"V.GetValueStorage() -> (int, ...)\nC++: long *GetValueStorage()\n\nReturn a mutable reference to the underlying value storage. \nValues are stored contiguously, but in arbitrary order.  Use\nGetCoordinateStorage() if you need to get the corresponding\ncoordinates for a value.  Use at your own risk!\n"},
  {(char*)"ReserveStorage", PyvtkSparseArray_IlE_ReserveStorage, METH_VARARGS,
   (char*)"V.ReserveStorage(int)\nC++: void ReserveStorage(const SizeT value_count)\n\nReserve storage for a specific number of values.  This is useful\nfor reading external data using GetCoordinateStorage() and\nGetValueStorage(), when the total number of non-NULL values in\nthe array can be determined in advance.  Note that after calling\nReserveStorage(), all coordinates and values will be undefined,\nso you must ensure that every set of coordinates and values is\noverwritten.  It is the caller's responsibility to ensure that\nduplicate coordinates are not inserted into the array.\n"},
  {(char*)"SetExtentsFromContents", PyvtkSparseArray_IlE_SetExtentsFromContents, METH_VARARGS,
   (char*)"V.SetExtentsFromContents()\nC++: void SetExtentsFromContents()\n\nUpdate the array extents to match its contents, so that the\nextent along each dimension matches the maximum index value along\nthat dimension.\n"},
  {(char*)"SetExtents", PyvtkSparseArray_IlE_SetExtents, METH_VARARGS,
   (char*)"V.SetExtents(vtkArrayExtents)\nC++: void SetExtents(const vtkArrayExtents &extents)\n\nSpecify arbitrary array extents, without altering the contents of\nthe array.  Note that the extents must be as-large-or-larger-than\nthe extents of the actual values stored in the array.  The number\nof dimensions in the supplied extents must match the number of\ndimensions currently stored in the array.\n"},
  {(char*)"AddValue", PyvtkSparseArray_IlE_AddValue, METH_VARARGS,
   (char*)"V.AddValue(int, int)\nC++: void AddValue(CoordinateT i, const long &value)\nV.AddValue(int, int, int)\nC++: void AddValue(CoordinateT i, CoordinateT j,\n    const long &value)\nV.AddValue(int, int, int, int)\nC++: void AddValue(CoordinateT i, CoordinateT j, CoordinateT k,\n    const long &value)\nV.AddValue(vtkArrayCoordinates, int)\nC++: void AddValue(const vtkArrayCoordinates &coordinates,\n    const long &value)\n\nAdds a new non-null element to the array.  Does not test to see\nif an element with matching coordinates already exists.  Useful\nfor providing fast initialization of the array as long as the\ncaller is prepared to guarantee that no duplicate coordinates are\never used.\n"},
  {(char*)"Validate", PyvtkSparseArray_IlE_Validate, METH_VARARGS,
   (char*)"V.Validate() -> bool\nC++: bool Validate()\n\nValidate the contents of the array, returning false if there are\nany problems. Potential problems include duplicate coordinates,\nwhich can be introduced into the array either through AddValue()\nor direct access to coordinates storage; and coordinates\nout-of-bounds given the current array extents.\n\nNote that Validate() is a heavyweight O(N log N) operation that\nis intended for temporary use during debugging.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkSparseArray_IlE_StaticNew()
{
  return vtkSparseArray<long>::New();
}

PyObject *PyVTKClass_vtkSparseArray_IlENew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkSparseArray_IlE_StaticNew,
    PyvtkSparseArray_IlE_Methods,
    typeid(vtkSparseArray<long>).name(), modulename,
    "vtkSparseArray_IlE", "vtkSparseArray_IlE",
    PyvtkSparseArray_IlE_Doc(),
    PyVTKClass_vtkTypedArray_IlENew(modulename));
  return cls;
}

const char **PyvtkSparseArray_IlE_Doc()
{
  static const char *docstring[] = {
    "vtkSparseArray - Sparse, independent coordinate storage for N-way\narrays.\n\n",
    "Superclass: vtkTypedArray[int]\n\n",
    "vtkSparseArray is a concrete vtkArray implementation that stores\nvalues using sparse independent coordinate storage.  This means that\nthe array stores the complete set of coordinates and the value for\neach non-null value in the array. While this approach requires\nslightly more storage than other sparse storage schemes (such as\nCompressed-Row or Compressed-Column), it is easier and more efficient\nt",
    "o work with when implementing algorithms, and  it generalizes well\nfor arbitrary numbers of dimensions.\n\nIn addition to the value retrieval and update methods provided by\nvtkTypedArray, vtkSparseArray provides methods to:\n\nGet and set a special 'null' value that will be returned when\nretrieving values for undefined coordinates.\n\nClear the contents of the array so that every set of coordinates is\nu",
    "ndefined.\n\nSort the array contents so that value coordinates can be visited in a\nspecific order.\n\nRetrieve pointers to the value- and coordinate-storage memory blocks.\n\nReserve storage for a specific number of non-null values, for\nefficiency when the number of non-null values is known in advance.\n\nRecompute the array extents so that they bound the largest set of\nnon-NULL values along each dimensio",
    "n.\n\nSpecify arbitrary array extents.\n\nAdd values to the array in amortized-constant time.\n\nValidate that the array does not contain duplicate coordinates.\n\nSee Also:\n\nvtkArray, vtkTypedArray, vtkDenseArray\n\nThanks:\n\nDeveloped by Timothy M. Shead (tshead@sandia.gov) at Sandia National\nLaboratories.\n\n",
    NULL
  };

  return docstring;
}

extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkSparseArray_ImENew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkTypedArray_ImENew
extern "C" { PyObject *PyVTKClass_vtkTypedArray_ImENew(const char *); }
#define DECLARED_PyVTKClass_vtkTypedArray_ImENew
#endif

static const char **PyvtkSparseArray_ImE_Doc();


static PyObject *
PyvtkSparseArray_ImE_IsDense(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsDense");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<unsigned long> *op = static_cast<vtkSparseArray<unsigned long> *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->IsDense() :
      op->vtkSparseArray<unsigned long>::IsDense());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSparseArray_ImE_GetExtents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetExtents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<unsigned long> *op = static_cast<vtkSparseArray<unsigned long> *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const vtkArrayExtents *tempr = (ap.IsBound() ?
      &op->GetExtents() :
      &op->vtkSparseArray<unsigned long>::GetExtents());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildSpecialObject(tempr, "vtkArrayExtents");
      }
    }

  return result;
}


static PyObject *
PyvtkSparseArray_ImE_GetNonNullSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNonNullSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<unsigned long> *op = static_cast<vtkSparseArray<unsigned long> *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned long long tempr = (ap.IsBound() ?
      op->GetNonNullSize() :
      op->vtkSparseArray<unsigned long>::GetNonNullSize());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSparseArray_ImE_GetCoordinatesN(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCoordinatesN");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<unsigned long> *op = static_cast<vtkSparseArray<unsigned long> *>(vp);

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
      op->vtkSparseArray<unsigned long>::GetCoordinatesN(temp0, *temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSparseArray_ImE_DeepCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeepCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<unsigned long> *op = static_cast<vtkSparseArray<unsigned long> *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkArray *tempr = (ap.IsBound() ?
      op->DeepCopy() :
      op->vtkSparseArray<unsigned long>::DeepCopy());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSparseArray_ImE_GetValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<unsigned long> *op = static_cast<vtkSparseArray<unsigned long> *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    const unsigned long *tempr = (ap.IsBound() ?
      &op->GetValue(temp0) :
      &op->vtkSparseArray<unsigned long>::GetValue(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(*tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkSparseArray_ImE_GetValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<unsigned long> *op = static_cast<vtkSparseArray<unsigned long> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    const unsigned long *tempr = (ap.IsBound() ?
      &op->GetValue(temp0, temp1) :
      &op->vtkSparseArray<unsigned long>::GetValue(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(*tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkSparseArray_ImE_GetValue_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<unsigned long> *op = static_cast<vtkSparseArray<unsigned long> *>(vp);

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
      &op->vtkSparseArray<unsigned long>::GetValue(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(*tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkSparseArray_ImE_GetValue_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<unsigned long> *op = static_cast<vtkSparseArray<unsigned long> *>(vp);

  vtkArrayCoordinates *temp0 = NULL;
  PyObject *pobj0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkArrayCoordinates"))
    {
    const unsigned long *tempr = (ap.IsBound() ?
      &op->GetValue(*temp0) :
      &op->vtkSparseArray<unsigned long>::GetValue(*temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(*tempr);
      }
    }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkSparseArray_ImE_GetValue_Methods[] = {
  {NULL, PyvtkSparseArray_ImE_GetValue_s1, METH_VARARGS,
   (char*)"@L"},
  {NULL, PyvtkSparseArray_ImE_GetValue_s4, METH_VARARGS,
   (char*)"@O &vtkArrayCoordinates"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkSparseArray_ImE_GetValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkSparseArray_ImE_GetValue_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkSparseArray_ImE_GetValue_s2(self, args);
    case 3:
      return PyvtkSparseArray_ImE_GetValue_s3(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetValue");
  return NULL;
}



static PyObject *
PyvtkSparseArray_ImE_GetValueN(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValueN");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<unsigned long> *op = static_cast<vtkSparseArray<unsigned long> *>(vp);

  unsigned long long temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    const unsigned long *tempr = (ap.IsBound() ?
      &op->GetValueN(temp0) :
      &op->vtkSparseArray<unsigned long>::GetValueN(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(*tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSparseArray_ImE_SetValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<unsigned long> *op = static_cast<vtkSparseArray<unsigned long> *>(vp);

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
      op->vtkSparseArray<unsigned long>::SetValue(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkSparseArray_ImE_SetValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<unsigned long> *op = static_cast<vtkSparseArray<unsigned long> *>(vp);

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
      op->vtkSparseArray<unsigned long>::SetValue(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkSparseArray_ImE_SetValue_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<unsigned long> *op = static_cast<vtkSparseArray<unsigned long> *>(vp);

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
      op->vtkSparseArray<unsigned long>::SetValue(temp0, temp1, temp2, temp3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkSparseArray_ImE_SetValue_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<unsigned long> *op = static_cast<vtkSparseArray<unsigned long> *>(vp);

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
      op->vtkSparseArray<unsigned long>::SetValue(*temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkSparseArray_ImE_SetValue_Methods[] = {
  {NULL, PyvtkSparseArray_ImE_SetValue_s1, METH_VARARGS,
   (char*)"@Lk"},
  {NULL, PyvtkSparseArray_ImE_SetValue_s4, METH_VARARGS,
   (char*)"@Ok &vtkArrayCoordinates"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkSparseArray_ImE_SetValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkSparseArray_ImE_SetValue_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkSparseArray_ImE_SetValue_s2(self, args);
    case 4:
      return PyvtkSparseArray_ImE_SetValue_s3(self, args);
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetValue");
  return NULL;
}



static PyObject *
PyvtkSparseArray_ImE_SetValueN(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValueN");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<unsigned long> *op = static_cast<vtkSparseArray<unsigned long> *>(vp);

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
      op->vtkSparseArray<unsigned long>::SetValueN(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSparseArray_ImE_SetNullValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNullValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<unsigned long> *op = static_cast<vtkSparseArray<unsigned long> *>(vp);

  unsigned long temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetNullValue(temp0);
      }
    else
      {
      op->vtkSparseArray<unsigned long>::SetNullValue(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSparseArray_ImE_GetNullValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNullValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<unsigned long> *op = static_cast<vtkSparseArray<unsigned long> *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const unsigned long *tempr = (ap.IsBound() ?
      &op->GetNullValue() :
      &op->vtkSparseArray<unsigned long>::GetNullValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(*tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSparseArray_ImE_Clear(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Clear");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<unsigned long> *op = static_cast<vtkSparseArray<unsigned long> *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Clear();
      }
    else
      {
      op->vtkSparseArray<unsigned long>::Clear();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSparseArray_ImE_Sort(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Sort");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<unsigned long> *op = static_cast<vtkSparseArray<unsigned long> *>(vp);

  vtkArraySort *temp0 = NULL;
  PyObject *pobj0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkArraySort"))
    {
    if (ap.IsBound())
      {
      op->Sort(*temp0);
      }
    else
      {
      op->vtkSparseArray<unsigned long>::Sort(*temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  Py_XDECREF(pobj0);

  return result;
}


static PyObject *
PyvtkSparseArray_ImE_GetCoordinateStorage(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCoordinateStorage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<unsigned long> *op = static_cast<vtkSparseArray<unsigned long> *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkIdType *tempr = (ap.IsBound() ?
      op->GetCoordinateStorage(temp0) :
      op->vtkSparseArray<unsigned long>::GetCoordinateStorage(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSparseArray_ImE_GetValueStorage(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValueStorage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<unsigned long> *op = static_cast<vtkSparseArray<unsigned long> *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned long *tempr = (ap.IsBound() ?
      op->GetValueStorage() :
      op->vtkSparseArray<unsigned long>::GetValueStorage());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSparseArray_ImE_ReserveStorage(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReserveStorage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<unsigned long> *op = static_cast<vtkSparseArray<unsigned long> *>(vp);

  unsigned long long temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->ReserveStorage(temp0);
      }
    else
      {
      op->vtkSparseArray<unsigned long>::ReserveStorage(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSparseArray_ImE_SetExtentsFromContents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExtentsFromContents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<unsigned long> *op = static_cast<vtkSparseArray<unsigned long> *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetExtentsFromContents();
      }
    else
      {
      op->vtkSparseArray<unsigned long>::SetExtentsFromContents();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSparseArray_ImE_SetExtents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExtents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<unsigned long> *op = static_cast<vtkSparseArray<unsigned long> *>(vp);

  vtkArrayExtents *temp0 = NULL;
  PyObject *pobj0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkArrayExtents"))
    {
    if (ap.IsBound())
      {
      op->SetExtents(*temp0);
      }
    else
      {
      op->vtkSparseArray<unsigned long>::SetExtents(*temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  Py_XDECREF(pobj0);

  return result;
}


static PyObject *
PyvtkSparseArray_ImE_AddValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<unsigned long> *op = static_cast<vtkSparseArray<unsigned long> *>(vp);

  vtkIdType temp0;
  unsigned long temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->AddValue(temp0, temp1);
      }
    else
      {
      op->vtkSparseArray<unsigned long>::AddValue(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkSparseArray_ImE_AddValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<unsigned long> *op = static_cast<vtkSparseArray<unsigned long> *>(vp);

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
      op->AddValue(temp0, temp1, temp2);
      }
    else
      {
      op->vtkSparseArray<unsigned long>::AddValue(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkSparseArray_ImE_AddValue_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<unsigned long> *op = static_cast<vtkSparseArray<unsigned long> *>(vp);

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
      op->AddValue(temp0, temp1, temp2, temp3);
      }
    else
      {
      op->vtkSparseArray<unsigned long>::AddValue(temp0, temp1, temp2, temp3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkSparseArray_ImE_AddValue_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<unsigned long> *op = static_cast<vtkSparseArray<unsigned long> *>(vp);

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
      op->AddValue(*temp0, temp1);
      }
    else
      {
      op->vtkSparseArray<unsigned long>::AddValue(*temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkSparseArray_ImE_AddValue_Methods[] = {
  {NULL, PyvtkSparseArray_ImE_AddValue_s1, METH_VARARGS,
   (char*)"@Lk"},
  {NULL, PyvtkSparseArray_ImE_AddValue_s4, METH_VARARGS,
   (char*)"@Ok &vtkArrayCoordinates"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkSparseArray_ImE_AddValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkSparseArray_ImE_AddValue_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkSparseArray_ImE_AddValue_s2(self, args);
    case 4:
      return PyvtkSparseArray_ImE_AddValue_s3(self, args);
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "AddValue");
  return NULL;
}



static PyObject *
PyvtkSparseArray_ImE_Validate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Validate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<unsigned long> *op = static_cast<vtkSparseArray<unsigned long> *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->Validate() :
      op->vtkSparseArray<unsigned long>::Validate());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkSparseArray_ImE_Methods[] = {
  {(char*)"IsDense", PyvtkSparseArray_ImE_IsDense, METH_VARARGS,
   (char*)"V.IsDense() -> bool\nC++: bool IsDense()\n\n"},
  {(char*)"GetExtents", PyvtkSparseArray_ImE_GetExtents, METH_VARARGS,
   (char*)"V.GetExtents() -> vtkArrayExtents\nC++: const vtkArrayExtents &GetExtents()\n\n"},
  {(char*)"GetNonNullSize", PyvtkSparseArray_ImE_GetNonNullSize, METH_VARARGS,
   (char*)"V.GetNonNullSize() -> int\nC++: SizeT GetNonNullSize()\n\n"},
  {(char*)"GetCoordinatesN", PyvtkSparseArray_ImE_GetCoordinatesN, METH_VARARGS,
   (char*)"V.GetCoordinatesN(int, vtkArrayCoordinates)\nC++: void GetCoordinatesN(const SizeT n,\n    vtkArrayCoordinates &coordinates)\n\n"},
  {(char*)"DeepCopy", PyvtkSparseArray_ImE_DeepCopy, METH_VARARGS,
   (char*)"V.DeepCopy() -> vtkArray\nC++: vtkArray *DeepCopy()\n\n"},
  {(char*)"GetValue", PyvtkSparseArray_ImE_GetValue, METH_VARARGS,
   (char*)"V.GetValue(int) -> int\nC++: const unsigned long &GetValue(CoordinateT i)\nV.GetValue(int, int) -> int\nC++: const unsigned long &GetValue(CoordinateT i, CoordinateT j)\nV.GetValue(int, int, int) -> int\nC++: const unsigned long &GetValue(CoordinateT i, CoordinateT j,\n    CoordinateT k)\nV.GetValue(vtkArrayCoordinates) -> int\nC++: const unsigned long &GetValue(\n    const vtkArrayCoordinates &coordinates)\n\n"},
  {(char*)"GetValueN", PyvtkSparseArray_ImE_GetValueN, METH_VARARGS,
   (char*)"V.GetValueN(int) -> int\nC++: const unsigned long &GetValueN(const SizeT n)\n\n"},
  {(char*)"SetValue", PyvtkSparseArray_ImE_SetValue, METH_VARARGS,
   (char*)"V.SetValue(int, int)\nC++: void SetValue(CoordinateT i, const unsigned long &value)\nV.SetValue(int, int, int)\nC++: void SetValue(CoordinateT i, CoordinateT j,\n    const unsigned long &value)\nV.SetValue(int, int, int, int)\nC++: void SetValue(CoordinateT i, CoordinateT j, CoordinateT k,\n    const unsigned long &value)\nV.SetValue(vtkArrayCoordinates, int)\nC++: void SetValue(const vtkArrayCoordinates &coordinates,\n    const unsigned long &value)\n\n"},
  {(char*)"SetValueN", PyvtkSparseArray_ImE_SetValueN, METH_VARARGS,
   (char*)"V.SetValueN(int, int)\nC++: void SetValueN(const SizeT n, const unsigned long &value)\n\n"},
  {(char*)"SetNullValue", PyvtkSparseArray_ImE_SetNullValue, METH_VARARGS,
   (char*)"V.SetNullValue(int)\nC++: void SetNullValue(const unsigned long &value)\n\nSet the value that will be returned by GetValue() for NULL areas\nof the array.\n"},
  {(char*)"GetNullValue", PyvtkSparseArray_ImE_GetNullValue, METH_VARARGS,
   (char*)"V.GetNullValue() -> int\nC++: const unsigned long &GetNullValue()\n\nReturns the value that will be returned by GetValue() for NULL\nareas of the array.\n"},
  {(char*)"Clear", PyvtkSparseArray_ImE_Clear, METH_VARARGS,
   (char*)"V.Clear()\nC++: void Clear()\n\nRemove all non-null elements from the array, leaving the number\nof dimensions, the extent of each dimension, and the label for\neach dimension unchanged.\n"},
  {(char*)"Sort", PyvtkSparseArray_ImE_Sort, METH_VARARGS,
   (char*)"V.Sort(vtkArraySort)\nC++: void Sort(const vtkArraySort &sort)\n\nSorts array values so that their coordinates appear in some\nwell-defined order. The supplied vtkArraySort object controls\nwhich dimensions are sorted, and in what order, and should\ncontain one-or-more sort dimensions, up to the number of\ndimensions stored in the array.\n"},
  {(char*)"GetCoordinateStorage", PyvtkSparseArray_ImE_GetCoordinateStorage, METH_VARARGS,
   (char*)"V.GetCoordinateStorage(int) -> (int, ...)\nC++: CoordinateT *GetCoordinateStorage(DimensionT dimension)\n\nReturn a mutable reference to the underlying coordinate storage. \nCoordinates for each dimension are stored contiguously as a\none-dimensional array.  The ordering of coordinates within the\narray depends on the order in which values were added to the\narray, and any subsequent sorting.  Use at your own risk!\n"},
  {(char*)"GetValueStorage", PyvtkSparseArray_ImE_GetValueStorage, METH_VARARGS,
   (char*)"V.GetValueStorage() -> (int, ...)\nC++: unsigned long *GetValueStorage()\n\nReturn a mutable reference to the underlying value storage. \nValues are stored contiguously, but in arbitrary order.  Use\nGetCoordinateStorage() if you need to get the corresponding\ncoordinates for a value.  Use at your own risk!\n"},
  {(char*)"ReserveStorage", PyvtkSparseArray_ImE_ReserveStorage, METH_VARARGS,
   (char*)"V.ReserveStorage(int)\nC++: void ReserveStorage(const SizeT value_count)\n\nReserve storage for a specific number of values.  This is useful\nfor reading external data using GetCoordinateStorage() and\nGetValueStorage(), when the total number of non-NULL values in\nthe array can be determined in advance.  Note that after calling\nReserveStorage(), all coordinates and values will be undefined,\nso you must ensure that every set of coordinates and values is\noverwritten.  It is the caller's responsibility to ensure that\nduplicate coordinates are not inserted into the array.\n"},
  {(char*)"SetExtentsFromContents", PyvtkSparseArray_ImE_SetExtentsFromContents, METH_VARARGS,
   (char*)"V.SetExtentsFromContents()\nC++: void SetExtentsFromContents()\n\nUpdate the array extents to match its contents, so that the\nextent along each dimension matches the maximum index value along\nthat dimension.\n"},
  {(char*)"SetExtents", PyvtkSparseArray_ImE_SetExtents, METH_VARARGS,
   (char*)"V.SetExtents(vtkArrayExtents)\nC++: void SetExtents(const vtkArrayExtents &extents)\n\nSpecify arbitrary array extents, without altering the contents of\nthe array.  Note that the extents must be as-large-or-larger-than\nthe extents of the actual values stored in the array.  The number\nof dimensions in the supplied extents must match the number of\ndimensions currently stored in the array.\n"},
  {(char*)"AddValue", PyvtkSparseArray_ImE_AddValue, METH_VARARGS,
   (char*)"V.AddValue(int, int)\nC++: void AddValue(CoordinateT i, const unsigned long &value)\nV.AddValue(int, int, int)\nC++: void AddValue(CoordinateT i, CoordinateT j,\n    const unsigned long &value)\nV.AddValue(int, int, int, int)\nC++: void AddValue(CoordinateT i, CoordinateT j, CoordinateT k,\n    const unsigned long &value)\nV.AddValue(vtkArrayCoordinates, int)\nC++: void AddValue(const vtkArrayCoordinates &coordinates,\n    const unsigned long &value)\n\nAdds a new non-null element to the array.  Does not test to see\nif an element with matching coordinates already exists.  Useful\nfor providing fast initialization of the array as long as the\ncaller is prepared to guarantee that no duplicate coordinates are\never used.\n"},
  {(char*)"Validate", PyvtkSparseArray_ImE_Validate, METH_VARARGS,
   (char*)"V.Validate() -> bool\nC++: bool Validate()\n\nValidate the contents of the array, returning false if there are\nany problems. Potential problems include duplicate coordinates,\nwhich can be introduced into the array either through AddValue()\nor direct access to coordinates storage; and coordinates\nout-of-bounds given the current array extents.\n\nNote that Validate() is a heavyweight O(N log N) operation that\nis intended for temporary use during debugging.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkSparseArray_ImE_StaticNew()
{
  return vtkSparseArray<unsigned long>::New();
}

PyObject *PyVTKClass_vtkSparseArray_ImENew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkSparseArray_ImE_StaticNew,
    PyvtkSparseArray_ImE_Methods,
    typeid(vtkSparseArray<unsigned long>).name(), modulename,
    "vtkSparseArray_ImE", "vtkSparseArray_ImE",
    PyvtkSparseArray_ImE_Doc(),
    PyVTKClass_vtkTypedArray_ImENew(modulename));
  return cls;
}

const char **PyvtkSparseArray_ImE_Doc()
{
  static const char *docstring[] = {
    "vtkSparseArray - Sparse, independent coordinate storage for N-way\narrays.\n\n",
    "Superclass: vtkTypedArray[uint]\n\n",
    "vtkSparseArray is a concrete vtkArray implementation that stores\nvalues using sparse independent coordinate storage.  This means that\nthe array stores the complete set of coordinates and the value for\neach non-null value in the array. While this approach requires\nslightly more storage than other sparse storage schemes (such as\nCompressed-Row or Compressed-Column), it is easier and more efficient\nt",
    "o work with when implementing algorithms, and  it generalizes well\nfor arbitrary numbers of dimensions.\n\nIn addition to the value retrieval and update methods provided by\nvtkTypedArray, vtkSparseArray provides methods to:\n\nGet and set a special 'null' value that will be returned when\nretrieving values for undefined coordinates.\n\nClear the contents of the array so that every set of coordinates is\nu",
    "ndefined.\n\nSort the array contents so that value coordinates can be visited in a\nspecific order.\n\nRetrieve pointers to the value- and coordinate-storage memory blocks.\n\nReserve storage for a specific number of non-null values, for\nefficiency when the number of non-null values is known in advance.\n\nRecompute the array extents so that they bound the largest set of\nnon-NULL values along each dimensio",
    "n.\n\nSpecify arbitrary array extents.\n\nAdd values to the array in amortized-constant time.\n\nValidate that the array does not contain duplicate coordinates.\n\nSee Also:\n\nvtkArray, vtkTypedArray, vtkDenseArray\n\nThanks:\n\nDeveloped by Timothy M. Shead (tshead@sandia.gov) at Sandia National\nLaboratories.\n\n",
    NULL
  };

  return docstring;
}

extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkSparseArray_IxENew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkTypedArray_IxENew
extern "C" { PyObject *PyVTKClass_vtkTypedArray_IxENew(const char *); }
#define DECLARED_PyVTKClass_vtkTypedArray_IxENew
#endif

static const char **PyvtkSparseArray_IxE_Doc();


static PyObject *
PyvtkSparseArray_IxE_IsDense(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsDense");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<long long> *op = static_cast<vtkSparseArray<long long> *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->IsDense() :
      op->vtkSparseArray<long long>::IsDense());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSparseArray_IxE_GetExtents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetExtents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<long long> *op = static_cast<vtkSparseArray<long long> *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const vtkArrayExtents *tempr = (ap.IsBound() ?
      &op->GetExtents() :
      &op->vtkSparseArray<long long>::GetExtents());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildSpecialObject(tempr, "vtkArrayExtents");
      }
    }

  return result;
}


static PyObject *
PyvtkSparseArray_IxE_GetNonNullSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNonNullSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<long long> *op = static_cast<vtkSparseArray<long long> *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned long long tempr = (ap.IsBound() ?
      op->GetNonNullSize() :
      op->vtkSparseArray<long long>::GetNonNullSize());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSparseArray_IxE_GetCoordinatesN(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCoordinatesN");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<long long> *op = static_cast<vtkSparseArray<long long> *>(vp);

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
      op->vtkSparseArray<long long>::GetCoordinatesN(temp0, *temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSparseArray_IxE_DeepCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeepCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<long long> *op = static_cast<vtkSparseArray<long long> *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkArray *tempr = (ap.IsBound() ?
      op->DeepCopy() :
      op->vtkSparseArray<long long>::DeepCopy());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSparseArray_IxE_GetValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<long long> *op = static_cast<vtkSparseArray<long long> *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    const long long *tempr = (ap.IsBound() ?
      &op->GetValue(temp0) :
      &op->vtkSparseArray<long long>::GetValue(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(*tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkSparseArray_IxE_GetValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<long long> *op = static_cast<vtkSparseArray<long long> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    const long long *tempr = (ap.IsBound() ?
      &op->GetValue(temp0, temp1) :
      &op->vtkSparseArray<long long>::GetValue(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(*tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkSparseArray_IxE_GetValue_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<long long> *op = static_cast<vtkSparseArray<long long> *>(vp);

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
      &op->vtkSparseArray<long long>::GetValue(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(*tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkSparseArray_IxE_GetValue_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<long long> *op = static_cast<vtkSparseArray<long long> *>(vp);

  vtkArrayCoordinates *temp0 = NULL;
  PyObject *pobj0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkArrayCoordinates"))
    {
    const long long *tempr = (ap.IsBound() ?
      &op->GetValue(*temp0) :
      &op->vtkSparseArray<long long>::GetValue(*temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(*tempr);
      }
    }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkSparseArray_IxE_GetValue_Methods[] = {
  {NULL, PyvtkSparseArray_IxE_GetValue_s1, METH_VARARGS,
   (char*)"@L"},
  {NULL, PyvtkSparseArray_IxE_GetValue_s4, METH_VARARGS,
   (char*)"@O &vtkArrayCoordinates"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkSparseArray_IxE_GetValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkSparseArray_IxE_GetValue_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkSparseArray_IxE_GetValue_s2(self, args);
    case 3:
      return PyvtkSparseArray_IxE_GetValue_s3(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetValue");
  return NULL;
}



static PyObject *
PyvtkSparseArray_IxE_GetValueN(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValueN");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<long long> *op = static_cast<vtkSparseArray<long long> *>(vp);

  unsigned long long temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    const long long *tempr = (ap.IsBound() ?
      &op->GetValueN(temp0) :
      &op->vtkSparseArray<long long>::GetValueN(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(*tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSparseArray_IxE_SetValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<long long> *op = static_cast<vtkSparseArray<long long> *>(vp);

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
      op->vtkSparseArray<long long>::SetValue(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkSparseArray_IxE_SetValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<long long> *op = static_cast<vtkSparseArray<long long> *>(vp);

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
      op->vtkSparseArray<long long>::SetValue(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkSparseArray_IxE_SetValue_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<long long> *op = static_cast<vtkSparseArray<long long> *>(vp);

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
      op->vtkSparseArray<long long>::SetValue(temp0, temp1, temp2, temp3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkSparseArray_IxE_SetValue_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<long long> *op = static_cast<vtkSparseArray<long long> *>(vp);

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
      op->vtkSparseArray<long long>::SetValue(*temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkSparseArray_IxE_SetValue_Methods[] = {
  {NULL, PyvtkSparseArray_IxE_SetValue_s1, METH_VARARGS,
   (char*)"@LL"},
  {NULL, PyvtkSparseArray_IxE_SetValue_s4, METH_VARARGS,
   (char*)"@OL &vtkArrayCoordinates"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkSparseArray_IxE_SetValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkSparseArray_IxE_SetValue_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkSparseArray_IxE_SetValue_s2(self, args);
    case 4:
      return PyvtkSparseArray_IxE_SetValue_s3(self, args);
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetValue");
  return NULL;
}



static PyObject *
PyvtkSparseArray_IxE_SetValueN(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValueN");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<long long> *op = static_cast<vtkSparseArray<long long> *>(vp);

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
      op->vtkSparseArray<long long>::SetValueN(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSparseArray_IxE_SetNullValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNullValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<long long> *op = static_cast<vtkSparseArray<long long> *>(vp);

  long long temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetNullValue(temp0);
      }
    else
      {
      op->vtkSparseArray<long long>::SetNullValue(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSparseArray_IxE_GetNullValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNullValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<long long> *op = static_cast<vtkSparseArray<long long> *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const long long *tempr = (ap.IsBound() ?
      &op->GetNullValue() :
      &op->vtkSparseArray<long long>::GetNullValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(*tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSparseArray_IxE_Clear(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Clear");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<long long> *op = static_cast<vtkSparseArray<long long> *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Clear();
      }
    else
      {
      op->vtkSparseArray<long long>::Clear();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSparseArray_IxE_Sort(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Sort");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<long long> *op = static_cast<vtkSparseArray<long long> *>(vp);

  vtkArraySort *temp0 = NULL;
  PyObject *pobj0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkArraySort"))
    {
    if (ap.IsBound())
      {
      op->Sort(*temp0);
      }
    else
      {
      op->vtkSparseArray<long long>::Sort(*temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  Py_XDECREF(pobj0);

  return result;
}


static PyObject *
PyvtkSparseArray_IxE_GetCoordinateStorage(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCoordinateStorage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<long long> *op = static_cast<vtkSparseArray<long long> *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkIdType *tempr = (ap.IsBound() ?
      op->GetCoordinateStorage(temp0) :
      op->vtkSparseArray<long long>::GetCoordinateStorage(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSparseArray_IxE_GetValueStorage(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValueStorage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<long long> *op = static_cast<vtkSparseArray<long long> *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    long long *tempr = (ap.IsBound() ?
      op->GetValueStorage() :
      op->vtkSparseArray<long long>::GetValueStorage());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSparseArray_IxE_ReserveStorage(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReserveStorage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<long long> *op = static_cast<vtkSparseArray<long long> *>(vp);

  unsigned long long temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->ReserveStorage(temp0);
      }
    else
      {
      op->vtkSparseArray<long long>::ReserveStorage(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSparseArray_IxE_SetExtentsFromContents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExtentsFromContents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<long long> *op = static_cast<vtkSparseArray<long long> *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetExtentsFromContents();
      }
    else
      {
      op->vtkSparseArray<long long>::SetExtentsFromContents();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSparseArray_IxE_SetExtents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExtents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<long long> *op = static_cast<vtkSparseArray<long long> *>(vp);

  vtkArrayExtents *temp0 = NULL;
  PyObject *pobj0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkArrayExtents"))
    {
    if (ap.IsBound())
      {
      op->SetExtents(*temp0);
      }
    else
      {
      op->vtkSparseArray<long long>::SetExtents(*temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  Py_XDECREF(pobj0);

  return result;
}


static PyObject *
PyvtkSparseArray_IxE_AddValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<long long> *op = static_cast<vtkSparseArray<long long> *>(vp);

  vtkIdType temp0;
  long long temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->AddValue(temp0, temp1);
      }
    else
      {
      op->vtkSparseArray<long long>::AddValue(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkSparseArray_IxE_AddValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<long long> *op = static_cast<vtkSparseArray<long long> *>(vp);

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
      op->AddValue(temp0, temp1, temp2);
      }
    else
      {
      op->vtkSparseArray<long long>::AddValue(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkSparseArray_IxE_AddValue_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<long long> *op = static_cast<vtkSparseArray<long long> *>(vp);

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
      op->AddValue(temp0, temp1, temp2, temp3);
      }
    else
      {
      op->vtkSparseArray<long long>::AddValue(temp0, temp1, temp2, temp3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkSparseArray_IxE_AddValue_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<long long> *op = static_cast<vtkSparseArray<long long> *>(vp);

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
      op->AddValue(*temp0, temp1);
      }
    else
      {
      op->vtkSparseArray<long long>::AddValue(*temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkSparseArray_IxE_AddValue_Methods[] = {
  {NULL, PyvtkSparseArray_IxE_AddValue_s1, METH_VARARGS,
   (char*)"@LL"},
  {NULL, PyvtkSparseArray_IxE_AddValue_s4, METH_VARARGS,
   (char*)"@OL &vtkArrayCoordinates"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkSparseArray_IxE_AddValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkSparseArray_IxE_AddValue_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkSparseArray_IxE_AddValue_s2(self, args);
    case 4:
      return PyvtkSparseArray_IxE_AddValue_s3(self, args);
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "AddValue");
  return NULL;
}



static PyObject *
PyvtkSparseArray_IxE_Validate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Validate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<long long> *op = static_cast<vtkSparseArray<long long> *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->Validate() :
      op->vtkSparseArray<long long>::Validate());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkSparseArray_IxE_Methods[] = {
  {(char*)"IsDense", PyvtkSparseArray_IxE_IsDense, METH_VARARGS,
   (char*)"V.IsDense() -> bool\nC++: bool IsDense()\n\n"},
  {(char*)"GetExtents", PyvtkSparseArray_IxE_GetExtents, METH_VARARGS,
   (char*)"V.GetExtents() -> vtkArrayExtents\nC++: const vtkArrayExtents &GetExtents()\n\n"},
  {(char*)"GetNonNullSize", PyvtkSparseArray_IxE_GetNonNullSize, METH_VARARGS,
   (char*)"V.GetNonNullSize() -> int\nC++: SizeT GetNonNullSize()\n\n"},
  {(char*)"GetCoordinatesN", PyvtkSparseArray_IxE_GetCoordinatesN, METH_VARARGS,
   (char*)"V.GetCoordinatesN(int, vtkArrayCoordinates)\nC++: void GetCoordinatesN(const SizeT n,\n    vtkArrayCoordinates &coordinates)\n\n"},
  {(char*)"DeepCopy", PyvtkSparseArray_IxE_DeepCopy, METH_VARARGS,
   (char*)"V.DeepCopy() -> vtkArray\nC++: vtkArray *DeepCopy()\n\n"},
  {(char*)"GetValue", PyvtkSparseArray_IxE_GetValue, METH_VARARGS,
   (char*)"V.GetValue(int) -> int\nC++: const long long &GetValue(CoordinateT i)\nV.GetValue(int, int) -> int\nC++: const long long &GetValue(CoordinateT i, CoordinateT j)\nV.GetValue(int, int, int) -> int\nC++: const long long &GetValue(CoordinateT i, CoordinateT j,\n    CoordinateT k)\nV.GetValue(vtkArrayCoordinates) -> int\nC++: const long long &GetValue(\n    const vtkArrayCoordinates &coordinates)\n\n"},
  {(char*)"GetValueN", PyvtkSparseArray_IxE_GetValueN, METH_VARARGS,
   (char*)"V.GetValueN(int) -> int\nC++: const long long &GetValueN(const SizeT n)\n\n"},
  {(char*)"SetValue", PyvtkSparseArray_IxE_SetValue, METH_VARARGS,
   (char*)"V.SetValue(int, int)\nC++: void SetValue(CoordinateT i, const long long &value)\nV.SetValue(int, int, int)\nC++: void SetValue(CoordinateT i, CoordinateT j,\n    const long long &value)\nV.SetValue(int, int, int, int)\nC++: void SetValue(CoordinateT i, CoordinateT j, CoordinateT k,\n    const long long &value)\nV.SetValue(vtkArrayCoordinates, int)\nC++: void SetValue(const vtkArrayCoordinates &coordinates,\n    const long long &value)\n\n"},
  {(char*)"SetValueN", PyvtkSparseArray_IxE_SetValueN, METH_VARARGS,
   (char*)"V.SetValueN(int, int)\nC++: void SetValueN(const SizeT n, const long long &value)\n\n"},
  {(char*)"SetNullValue", PyvtkSparseArray_IxE_SetNullValue, METH_VARARGS,
   (char*)"V.SetNullValue(int)\nC++: void SetNullValue(const long long &value)\n\nSet the value that will be returned by GetValue() for NULL areas\nof the array.\n"},
  {(char*)"GetNullValue", PyvtkSparseArray_IxE_GetNullValue, METH_VARARGS,
   (char*)"V.GetNullValue() -> int\nC++: const long long &GetNullValue()\n\nReturns the value that will be returned by GetValue() for NULL\nareas of the array.\n"},
  {(char*)"Clear", PyvtkSparseArray_IxE_Clear, METH_VARARGS,
   (char*)"V.Clear()\nC++: void Clear()\n\nRemove all non-null elements from the array, leaving the number\nof dimensions, the extent of each dimension, and the label for\neach dimension unchanged.\n"},
  {(char*)"Sort", PyvtkSparseArray_IxE_Sort, METH_VARARGS,
   (char*)"V.Sort(vtkArraySort)\nC++: void Sort(const vtkArraySort &sort)\n\nSorts array values so that their coordinates appear in some\nwell-defined order. The supplied vtkArraySort object controls\nwhich dimensions are sorted, and in what order, and should\ncontain one-or-more sort dimensions, up to the number of\ndimensions stored in the array.\n"},
  {(char*)"GetCoordinateStorage", PyvtkSparseArray_IxE_GetCoordinateStorage, METH_VARARGS,
   (char*)"V.GetCoordinateStorage(int) -> (int, ...)\nC++: CoordinateT *GetCoordinateStorage(DimensionT dimension)\n\nReturn a mutable reference to the underlying coordinate storage. \nCoordinates for each dimension are stored contiguously as a\none-dimensional array.  The ordering of coordinates within the\narray depends on the order in which values were added to the\narray, and any subsequent sorting.  Use at your own risk!\n"},
  {(char*)"GetValueStorage", PyvtkSparseArray_IxE_GetValueStorage, METH_VARARGS,
   (char*)"V.GetValueStorage() -> (int, ...)\nC++: long long *GetValueStorage()\n\nReturn a mutable reference to the underlying value storage. \nValues are stored contiguously, but in arbitrary order.  Use\nGetCoordinateStorage() if you need to get the corresponding\ncoordinates for a value.  Use at your own risk!\n"},
  {(char*)"ReserveStorage", PyvtkSparseArray_IxE_ReserveStorage, METH_VARARGS,
   (char*)"V.ReserveStorage(int)\nC++: void ReserveStorage(const SizeT value_count)\n\nReserve storage for a specific number of values.  This is useful\nfor reading external data using GetCoordinateStorage() and\nGetValueStorage(), when the total number of non-NULL values in\nthe array can be determined in advance.  Note that after calling\nReserveStorage(), all coordinates and values will be undefined,\nso you must ensure that every set of coordinates and values is\noverwritten.  It is the caller's responsibility to ensure that\nduplicate coordinates are not inserted into the array.\n"},
  {(char*)"SetExtentsFromContents", PyvtkSparseArray_IxE_SetExtentsFromContents, METH_VARARGS,
   (char*)"V.SetExtentsFromContents()\nC++: void SetExtentsFromContents()\n\nUpdate the array extents to match its contents, so that the\nextent along each dimension matches the maximum index value along\nthat dimension.\n"},
  {(char*)"SetExtents", PyvtkSparseArray_IxE_SetExtents, METH_VARARGS,
   (char*)"V.SetExtents(vtkArrayExtents)\nC++: void SetExtents(const vtkArrayExtents &extents)\n\nSpecify arbitrary array extents, without altering the contents of\nthe array.  Note that the extents must be as-large-or-larger-than\nthe extents of the actual values stored in the array.  The number\nof dimensions in the supplied extents must match the number of\ndimensions currently stored in the array.\n"},
  {(char*)"AddValue", PyvtkSparseArray_IxE_AddValue, METH_VARARGS,
   (char*)"V.AddValue(int, int)\nC++: void AddValue(CoordinateT i, const long long &value)\nV.AddValue(int, int, int)\nC++: void AddValue(CoordinateT i, CoordinateT j,\n    const long long &value)\nV.AddValue(int, int, int, int)\nC++: void AddValue(CoordinateT i, CoordinateT j, CoordinateT k,\n    const long long &value)\nV.AddValue(vtkArrayCoordinates, int)\nC++: void AddValue(const vtkArrayCoordinates &coordinates,\n    const long long &value)\n\nAdds a new non-null element to the array.  Does not test to see\nif an element with matching coordinates already exists.  Useful\nfor providing fast initialization of the array as long as the\ncaller is prepared to guarantee that no duplicate coordinates are\never used.\n"},
  {(char*)"Validate", PyvtkSparseArray_IxE_Validate, METH_VARARGS,
   (char*)"V.Validate() -> bool\nC++: bool Validate()\n\nValidate the contents of the array, returning false if there are\nany problems. Potential problems include duplicate coordinates,\nwhich can be introduced into the array either through AddValue()\nor direct access to coordinates storage; and coordinates\nout-of-bounds given the current array extents.\n\nNote that Validate() is a heavyweight O(N log N) operation that\nis intended for temporary use during debugging.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkSparseArray_IxE_StaticNew()
{
  return vtkSparseArray<long long>::New();
}

PyObject *PyVTKClass_vtkSparseArray_IxENew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkSparseArray_IxE_StaticNew,
    PyvtkSparseArray_IxE_Methods,
    typeid(vtkSparseArray<long long>).name(), modulename,
    "vtkSparseArray_IxE", "vtkSparseArray_IxE",
    PyvtkSparseArray_IxE_Doc(),
    PyVTKClass_vtkTypedArray_IxENew(modulename));
  return cls;
}

const char **PyvtkSparseArray_IxE_Doc()
{
  static const char *docstring[] = {
    "vtkSparseArray - Sparse, independent coordinate storage for N-way\narrays.\n\n",
    "Superclass: vtkTypedArray[int64]\n\n",
    "vtkSparseArray is a concrete vtkArray implementation that stores\nvalues using sparse independent coordinate storage.  This means that\nthe array stores the complete set of coordinates and the value for\neach non-null value in the array. While this approach requires\nslightly more storage than other sparse storage schemes (such as\nCompressed-Row or Compressed-Column), it is easier and more efficient\nt",
    "o work with when implementing algorithms, and  it generalizes well\nfor arbitrary numbers of dimensions.\n\nIn addition to the value retrieval and update methods provided by\nvtkTypedArray, vtkSparseArray provides methods to:\n\nGet and set a special 'null' value that will be returned when\nretrieving values for undefined coordinates.\n\nClear the contents of the array so that every set of coordinates is\nu",
    "ndefined.\n\nSort the array contents so that value coordinates can be visited in a\nspecific order.\n\nRetrieve pointers to the value- and coordinate-storage memory blocks.\n\nReserve storage for a specific number of non-null values, for\nefficiency when the number of non-null values is known in advance.\n\nRecompute the array extents so that they bound the largest set of\nnon-NULL values along each dimensio",
    "n.\n\nSpecify arbitrary array extents.\n\nAdd values to the array in amortized-constant time.\n\nValidate that the array does not contain duplicate coordinates.\n\nSee Also:\n\nvtkArray, vtkTypedArray, vtkDenseArray\n\nThanks:\n\nDeveloped by Timothy M. Shead (tshead@sandia.gov) at Sandia National\nLaboratories.\n\n",
    NULL
  };

  return docstring;
}

extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkSparseArray_IyENew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkTypedArray_IyENew
extern "C" { PyObject *PyVTKClass_vtkTypedArray_IyENew(const char *); }
#define DECLARED_PyVTKClass_vtkTypedArray_IyENew
#endif

static const char **PyvtkSparseArray_IyE_Doc();


static PyObject *
PyvtkSparseArray_IyE_IsDense(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsDense");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<unsigned long long> *op = static_cast<vtkSparseArray<unsigned long long> *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->IsDense() :
      op->vtkSparseArray<unsigned long long>::IsDense());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSparseArray_IyE_GetExtents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetExtents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<unsigned long long> *op = static_cast<vtkSparseArray<unsigned long long> *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const vtkArrayExtents *tempr = (ap.IsBound() ?
      &op->GetExtents() :
      &op->vtkSparseArray<unsigned long long>::GetExtents());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildSpecialObject(tempr, "vtkArrayExtents");
      }
    }

  return result;
}


static PyObject *
PyvtkSparseArray_IyE_GetNonNullSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNonNullSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<unsigned long long> *op = static_cast<vtkSparseArray<unsigned long long> *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned long long tempr = (ap.IsBound() ?
      op->GetNonNullSize() :
      op->vtkSparseArray<unsigned long long>::GetNonNullSize());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSparseArray_IyE_GetCoordinatesN(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCoordinatesN");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<unsigned long long> *op = static_cast<vtkSparseArray<unsigned long long> *>(vp);

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
      op->vtkSparseArray<unsigned long long>::GetCoordinatesN(temp0, *temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSparseArray_IyE_DeepCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeepCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<unsigned long long> *op = static_cast<vtkSparseArray<unsigned long long> *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkArray *tempr = (ap.IsBound() ?
      op->DeepCopy() :
      op->vtkSparseArray<unsigned long long>::DeepCopy());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSparseArray_IyE_GetValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<unsigned long long> *op = static_cast<vtkSparseArray<unsigned long long> *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    const unsigned long long *tempr = (ap.IsBound() ?
      &op->GetValue(temp0) :
      &op->vtkSparseArray<unsigned long long>::GetValue(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(*tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkSparseArray_IyE_GetValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<unsigned long long> *op = static_cast<vtkSparseArray<unsigned long long> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    const unsigned long long *tempr = (ap.IsBound() ?
      &op->GetValue(temp0, temp1) :
      &op->vtkSparseArray<unsigned long long>::GetValue(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(*tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkSparseArray_IyE_GetValue_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<unsigned long long> *op = static_cast<vtkSparseArray<unsigned long long> *>(vp);

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
      &op->vtkSparseArray<unsigned long long>::GetValue(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(*tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkSparseArray_IyE_GetValue_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<unsigned long long> *op = static_cast<vtkSparseArray<unsigned long long> *>(vp);

  vtkArrayCoordinates *temp0 = NULL;
  PyObject *pobj0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkArrayCoordinates"))
    {
    const unsigned long long *tempr = (ap.IsBound() ?
      &op->GetValue(*temp0) :
      &op->vtkSparseArray<unsigned long long>::GetValue(*temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(*tempr);
      }
    }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkSparseArray_IyE_GetValue_Methods[] = {
  {NULL, PyvtkSparseArray_IyE_GetValue_s1, METH_VARARGS,
   (char*)"@L"},
  {NULL, PyvtkSparseArray_IyE_GetValue_s4, METH_VARARGS,
   (char*)"@O &vtkArrayCoordinates"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkSparseArray_IyE_GetValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkSparseArray_IyE_GetValue_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkSparseArray_IyE_GetValue_s2(self, args);
    case 3:
      return PyvtkSparseArray_IyE_GetValue_s3(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetValue");
  return NULL;
}



static PyObject *
PyvtkSparseArray_IyE_GetValueN(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValueN");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<unsigned long long> *op = static_cast<vtkSparseArray<unsigned long long> *>(vp);

  unsigned long long temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    const unsigned long long *tempr = (ap.IsBound() ?
      &op->GetValueN(temp0) :
      &op->vtkSparseArray<unsigned long long>::GetValueN(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(*tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSparseArray_IyE_SetValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<unsigned long long> *op = static_cast<vtkSparseArray<unsigned long long> *>(vp);

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
      op->vtkSparseArray<unsigned long long>::SetValue(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkSparseArray_IyE_SetValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<unsigned long long> *op = static_cast<vtkSparseArray<unsigned long long> *>(vp);

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
      op->vtkSparseArray<unsigned long long>::SetValue(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkSparseArray_IyE_SetValue_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<unsigned long long> *op = static_cast<vtkSparseArray<unsigned long long> *>(vp);

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
      op->vtkSparseArray<unsigned long long>::SetValue(temp0, temp1, temp2, temp3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkSparseArray_IyE_SetValue_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<unsigned long long> *op = static_cast<vtkSparseArray<unsigned long long> *>(vp);

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
      op->vtkSparseArray<unsigned long long>::SetValue(*temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkSparseArray_IyE_SetValue_Methods[] = {
  {NULL, PyvtkSparseArray_IyE_SetValue_s1, METH_VARARGS,
   (char*)"@LK"},
  {NULL, PyvtkSparseArray_IyE_SetValue_s4, METH_VARARGS,
   (char*)"@OK &vtkArrayCoordinates"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkSparseArray_IyE_SetValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkSparseArray_IyE_SetValue_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkSparseArray_IyE_SetValue_s2(self, args);
    case 4:
      return PyvtkSparseArray_IyE_SetValue_s3(self, args);
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetValue");
  return NULL;
}



static PyObject *
PyvtkSparseArray_IyE_SetValueN(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValueN");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<unsigned long long> *op = static_cast<vtkSparseArray<unsigned long long> *>(vp);

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
      op->vtkSparseArray<unsigned long long>::SetValueN(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSparseArray_IyE_SetNullValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNullValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<unsigned long long> *op = static_cast<vtkSparseArray<unsigned long long> *>(vp);

  unsigned long long temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetNullValue(temp0);
      }
    else
      {
      op->vtkSparseArray<unsigned long long>::SetNullValue(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSparseArray_IyE_GetNullValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNullValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<unsigned long long> *op = static_cast<vtkSparseArray<unsigned long long> *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const unsigned long long *tempr = (ap.IsBound() ?
      &op->GetNullValue() :
      &op->vtkSparseArray<unsigned long long>::GetNullValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(*tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSparseArray_IyE_Clear(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Clear");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<unsigned long long> *op = static_cast<vtkSparseArray<unsigned long long> *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Clear();
      }
    else
      {
      op->vtkSparseArray<unsigned long long>::Clear();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSparseArray_IyE_Sort(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Sort");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<unsigned long long> *op = static_cast<vtkSparseArray<unsigned long long> *>(vp);

  vtkArraySort *temp0 = NULL;
  PyObject *pobj0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkArraySort"))
    {
    if (ap.IsBound())
      {
      op->Sort(*temp0);
      }
    else
      {
      op->vtkSparseArray<unsigned long long>::Sort(*temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  Py_XDECREF(pobj0);

  return result;
}


static PyObject *
PyvtkSparseArray_IyE_GetCoordinateStorage(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCoordinateStorage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<unsigned long long> *op = static_cast<vtkSparseArray<unsigned long long> *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkIdType *tempr = (ap.IsBound() ?
      op->GetCoordinateStorage(temp0) :
      op->vtkSparseArray<unsigned long long>::GetCoordinateStorage(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSparseArray_IyE_GetValueStorage(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValueStorage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<unsigned long long> *op = static_cast<vtkSparseArray<unsigned long long> *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned long long *tempr = (ap.IsBound() ?
      op->GetValueStorage() :
      op->vtkSparseArray<unsigned long long>::GetValueStorage());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSparseArray_IyE_ReserveStorage(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReserveStorage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<unsigned long long> *op = static_cast<vtkSparseArray<unsigned long long> *>(vp);

  unsigned long long temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->ReserveStorage(temp0);
      }
    else
      {
      op->vtkSparseArray<unsigned long long>::ReserveStorage(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSparseArray_IyE_SetExtentsFromContents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExtentsFromContents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<unsigned long long> *op = static_cast<vtkSparseArray<unsigned long long> *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetExtentsFromContents();
      }
    else
      {
      op->vtkSparseArray<unsigned long long>::SetExtentsFromContents();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSparseArray_IyE_SetExtents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExtents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<unsigned long long> *op = static_cast<vtkSparseArray<unsigned long long> *>(vp);

  vtkArrayExtents *temp0 = NULL;
  PyObject *pobj0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkArrayExtents"))
    {
    if (ap.IsBound())
      {
      op->SetExtents(*temp0);
      }
    else
      {
      op->vtkSparseArray<unsigned long long>::SetExtents(*temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  Py_XDECREF(pobj0);

  return result;
}


static PyObject *
PyvtkSparseArray_IyE_AddValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<unsigned long long> *op = static_cast<vtkSparseArray<unsigned long long> *>(vp);

  vtkIdType temp0;
  unsigned long long temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->AddValue(temp0, temp1);
      }
    else
      {
      op->vtkSparseArray<unsigned long long>::AddValue(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkSparseArray_IyE_AddValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<unsigned long long> *op = static_cast<vtkSparseArray<unsigned long long> *>(vp);

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
      op->AddValue(temp0, temp1, temp2);
      }
    else
      {
      op->vtkSparseArray<unsigned long long>::AddValue(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkSparseArray_IyE_AddValue_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<unsigned long long> *op = static_cast<vtkSparseArray<unsigned long long> *>(vp);

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
      op->AddValue(temp0, temp1, temp2, temp3);
      }
    else
      {
      op->vtkSparseArray<unsigned long long>::AddValue(temp0, temp1, temp2, temp3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkSparseArray_IyE_AddValue_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<unsigned long long> *op = static_cast<vtkSparseArray<unsigned long long> *>(vp);

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
      op->AddValue(*temp0, temp1);
      }
    else
      {
      op->vtkSparseArray<unsigned long long>::AddValue(*temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkSparseArray_IyE_AddValue_Methods[] = {
  {NULL, PyvtkSparseArray_IyE_AddValue_s1, METH_VARARGS,
   (char*)"@LK"},
  {NULL, PyvtkSparseArray_IyE_AddValue_s4, METH_VARARGS,
   (char*)"@OK &vtkArrayCoordinates"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkSparseArray_IyE_AddValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkSparseArray_IyE_AddValue_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkSparseArray_IyE_AddValue_s2(self, args);
    case 4:
      return PyvtkSparseArray_IyE_AddValue_s3(self, args);
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "AddValue");
  return NULL;
}



static PyObject *
PyvtkSparseArray_IyE_Validate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Validate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<unsigned long long> *op = static_cast<vtkSparseArray<unsigned long long> *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->Validate() :
      op->vtkSparseArray<unsigned long long>::Validate());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkSparseArray_IyE_Methods[] = {
  {(char*)"IsDense", PyvtkSparseArray_IyE_IsDense, METH_VARARGS,
   (char*)"V.IsDense() -> bool\nC++: bool IsDense()\n\n"},
  {(char*)"GetExtents", PyvtkSparseArray_IyE_GetExtents, METH_VARARGS,
   (char*)"V.GetExtents() -> vtkArrayExtents\nC++: const vtkArrayExtents &GetExtents()\n\n"},
  {(char*)"GetNonNullSize", PyvtkSparseArray_IyE_GetNonNullSize, METH_VARARGS,
   (char*)"V.GetNonNullSize() -> int\nC++: SizeT GetNonNullSize()\n\n"},
  {(char*)"GetCoordinatesN", PyvtkSparseArray_IyE_GetCoordinatesN, METH_VARARGS,
   (char*)"V.GetCoordinatesN(int, vtkArrayCoordinates)\nC++: void GetCoordinatesN(const SizeT n,\n    vtkArrayCoordinates &coordinates)\n\n"},
  {(char*)"DeepCopy", PyvtkSparseArray_IyE_DeepCopy, METH_VARARGS,
   (char*)"V.DeepCopy() -> vtkArray\nC++: vtkArray *DeepCopy()\n\n"},
  {(char*)"GetValue", PyvtkSparseArray_IyE_GetValue, METH_VARARGS,
   (char*)"V.GetValue(int) -> int\nC++: const unsigned long long &GetValue(CoordinateT i)\nV.GetValue(int, int) -> int\nC++: const unsigned long long &GetValue(CoordinateT i,\n    CoordinateT j)\nV.GetValue(int, int, int) -> int\nC++: const unsigned long long &GetValue(CoordinateT i,\n    CoordinateT j, CoordinateT k)\nV.GetValue(vtkArrayCoordinates) -> int\nC++: const unsigned long long &GetValue(\n    const vtkArrayCoordinates &coordinates)\n\n"},
  {(char*)"GetValueN", PyvtkSparseArray_IyE_GetValueN, METH_VARARGS,
   (char*)"V.GetValueN(int) -> int\nC++: const unsigned long long &GetValueN(const SizeT n)\n\n"},
  {(char*)"SetValue", PyvtkSparseArray_IyE_SetValue, METH_VARARGS,
   (char*)"V.SetValue(int, int)\nC++: void SetValue(CoordinateT i, const unsigned long long &value)\nV.SetValue(int, int, int)\nC++: void SetValue(CoordinateT i, CoordinateT j,\n    const unsigned long long &value)\nV.SetValue(int, int, int, int)\nC++: void SetValue(CoordinateT i, CoordinateT j, CoordinateT k,\n    const unsigned long long &value)\nV.SetValue(vtkArrayCoordinates, int)\nC++: void SetValue(const vtkArrayCoordinates &coordinates,\n    const unsigned long long &value)\n\n"},
  {(char*)"SetValueN", PyvtkSparseArray_IyE_SetValueN, METH_VARARGS,
   (char*)"V.SetValueN(int, int)\nC++: void SetValueN(const SizeT n,\n    const unsigned long long &value)\n\n"},
  {(char*)"SetNullValue", PyvtkSparseArray_IyE_SetNullValue, METH_VARARGS,
   (char*)"V.SetNullValue(int)\nC++: void SetNullValue(const unsigned long long &value)\n\nSet the value that will be returned by GetValue() for NULL areas\nof the array.\n"},
  {(char*)"GetNullValue", PyvtkSparseArray_IyE_GetNullValue, METH_VARARGS,
   (char*)"V.GetNullValue() -> int\nC++: const unsigned long long &GetNullValue()\n\nReturns the value that will be returned by GetValue() for NULL\nareas of the array.\n"},
  {(char*)"Clear", PyvtkSparseArray_IyE_Clear, METH_VARARGS,
   (char*)"V.Clear()\nC++: void Clear()\n\nRemove all non-null elements from the array, leaving the number\nof dimensions, the extent of each dimension, and the label for\neach dimension unchanged.\n"},
  {(char*)"Sort", PyvtkSparseArray_IyE_Sort, METH_VARARGS,
   (char*)"V.Sort(vtkArraySort)\nC++: void Sort(const vtkArraySort &sort)\n\nSorts array values so that their coordinates appear in some\nwell-defined order. The supplied vtkArraySort object controls\nwhich dimensions are sorted, and in what order, and should\ncontain one-or-more sort dimensions, up to the number of\ndimensions stored in the array.\n"},
  {(char*)"GetCoordinateStorage", PyvtkSparseArray_IyE_GetCoordinateStorage, METH_VARARGS,
   (char*)"V.GetCoordinateStorage(int) -> (int, ...)\nC++: CoordinateT *GetCoordinateStorage(DimensionT dimension)\n\nReturn a mutable reference to the underlying coordinate storage. \nCoordinates for each dimension are stored contiguously as a\none-dimensional array.  The ordering of coordinates within the\narray depends on the order in which values were added to the\narray, and any subsequent sorting.  Use at your own risk!\n"},
  {(char*)"GetValueStorage", PyvtkSparseArray_IyE_GetValueStorage, METH_VARARGS,
   (char*)"V.GetValueStorage() -> (int, ...)\nC++: unsigned long long *GetValueStorage()\n\nReturn a mutable reference to the underlying value storage. \nValues are stored contiguously, but in arbitrary order.  Use\nGetCoordinateStorage() if you need to get the corresponding\ncoordinates for a value.  Use at your own risk!\n"},
  {(char*)"ReserveStorage", PyvtkSparseArray_IyE_ReserveStorage, METH_VARARGS,
   (char*)"V.ReserveStorage(int)\nC++: void ReserveStorage(const SizeT value_count)\n\nReserve storage for a specific number of values.  This is useful\nfor reading external data using GetCoordinateStorage() and\nGetValueStorage(), when the total number of non-NULL values in\nthe array can be determined in advance.  Note that after calling\nReserveStorage(), all coordinates and values will be undefined,\nso you must ensure that every set of coordinates and values is\noverwritten.  It is the caller's responsibility to ensure that\nduplicate coordinates are not inserted into the array.\n"},
  {(char*)"SetExtentsFromContents", PyvtkSparseArray_IyE_SetExtentsFromContents, METH_VARARGS,
   (char*)"V.SetExtentsFromContents()\nC++: void SetExtentsFromContents()\n\nUpdate the array extents to match its contents, so that the\nextent along each dimension matches the maximum index value along\nthat dimension.\n"},
  {(char*)"SetExtents", PyvtkSparseArray_IyE_SetExtents, METH_VARARGS,
   (char*)"V.SetExtents(vtkArrayExtents)\nC++: void SetExtents(const vtkArrayExtents &extents)\n\nSpecify arbitrary array extents, without altering the contents of\nthe array.  Note that the extents must be as-large-or-larger-than\nthe extents of the actual values stored in the array.  The number\nof dimensions in the supplied extents must match the number of\ndimensions currently stored in the array.\n"},
  {(char*)"AddValue", PyvtkSparseArray_IyE_AddValue, METH_VARARGS,
   (char*)"V.AddValue(int, int)\nC++: void AddValue(CoordinateT i, const unsigned long long &value)\nV.AddValue(int, int, int)\nC++: void AddValue(CoordinateT i, CoordinateT j,\n    const unsigned long long &value)\nV.AddValue(int, int, int, int)\nC++: void AddValue(CoordinateT i, CoordinateT j, CoordinateT k,\n    const unsigned long long &value)\nV.AddValue(vtkArrayCoordinates, int)\nC++: void AddValue(const vtkArrayCoordinates &coordinates,\n    const unsigned long long &value)\n\nAdds a new non-null element to the array.  Does not test to see\nif an element with matching coordinates already exists.  Useful\nfor providing fast initialization of the array as long as the\ncaller is prepared to guarantee that no duplicate coordinates are\never used.\n"},
  {(char*)"Validate", PyvtkSparseArray_IyE_Validate, METH_VARARGS,
   (char*)"V.Validate() -> bool\nC++: bool Validate()\n\nValidate the contents of the array, returning false if there are\nany problems. Potential problems include duplicate coordinates,\nwhich can be introduced into the array either through AddValue()\nor direct access to coordinates storage; and coordinates\nout-of-bounds given the current array extents.\n\nNote that Validate() is a heavyweight O(N log N) operation that\nis intended for temporary use during debugging.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkSparseArray_IyE_StaticNew()
{
  return vtkSparseArray<unsigned long long>::New();
}

PyObject *PyVTKClass_vtkSparseArray_IyENew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkSparseArray_IyE_StaticNew,
    PyvtkSparseArray_IyE_Methods,
    typeid(vtkSparseArray<unsigned long long>).name(), modulename,
    "vtkSparseArray_IyE", "vtkSparseArray_IyE",
    PyvtkSparseArray_IyE_Doc(),
    PyVTKClass_vtkTypedArray_IyENew(modulename));
  return cls;
}

const char **PyvtkSparseArray_IyE_Doc()
{
  static const char *docstring[] = {
    "vtkSparseArray - Sparse, independent coordinate storage for N-way\narrays.\n\n",
    "Superclass: vtkTypedArray[uint64]\n\n",
    "vtkSparseArray is a concrete vtkArray implementation that stores\nvalues using sparse independent coordinate storage.  This means that\nthe array stores the complete set of coordinates and the value for\neach non-null value in the array. While this approach requires\nslightly more storage than other sparse storage schemes (such as\nCompressed-Row or Compressed-Column), it is easier and more efficient\nt",
    "o work with when implementing algorithms, and  it generalizes well\nfor arbitrary numbers of dimensions.\n\nIn addition to the value retrieval and update methods provided by\nvtkTypedArray, vtkSparseArray provides methods to:\n\nGet and set a special 'null' value that will be returned when\nretrieving values for undefined coordinates.\n\nClear the contents of the array so that every set of coordinates is\nu",
    "ndefined.\n\nSort the array contents so that value coordinates can be visited in a\nspecific order.\n\nRetrieve pointers to the value- and coordinate-storage memory blocks.\n\nReserve storage for a specific number of non-null values, for\nefficiency when the number of non-null values is known in advance.\n\nRecompute the array extents so that they bound the largest set of\nnon-NULL values along each dimensio",
    "n.\n\nSpecify arbitrary array extents.\n\nAdd values to the array in amortized-constant time.\n\nValidate that the array does not contain duplicate coordinates.\n\nSee Also:\n\nvtkArray, vtkTypedArray, vtkDenseArray\n\nThanks:\n\nDeveloped by Timothy M. Shead (tshead@sandia.gov) at Sandia National\nLaboratories.\n\n",
    NULL
  };

  return docstring;
}

extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkSparseArray_IfENew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkTypedArray_IfENew
extern "C" { PyObject *PyVTKClass_vtkTypedArray_IfENew(const char *); }
#define DECLARED_PyVTKClass_vtkTypedArray_IfENew
#endif

static const char **PyvtkSparseArray_IfE_Doc();


static PyObject *
PyvtkSparseArray_IfE_IsDense(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsDense");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<float> *op = static_cast<vtkSparseArray<float> *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->IsDense() :
      op->vtkSparseArray<float>::IsDense());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSparseArray_IfE_GetExtents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetExtents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<float> *op = static_cast<vtkSparseArray<float> *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const vtkArrayExtents *tempr = (ap.IsBound() ?
      &op->GetExtents() :
      &op->vtkSparseArray<float>::GetExtents());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildSpecialObject(tempr, "vtkArrayExtents");
      }
    }

  return result;
}


static PyObject *
PyvtkSparseArray_IfE_GetNonNullSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNonNullSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<float> *op = static_cast<vtkSparseArray<float> *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned long long tempr = (ap.IsBound() ?
      op->GetNonNullSize() :
      op->vtkSparseArray<float>::GetNonNullSize());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSparseArray_IfE_GetCoordinatesN(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCoordinatesN");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<float> *op = static_cast<vtkSparseArray<float> *>(vp);

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
      op->vtkSparseArray<float>::GetCoordinatesN(temp0, *temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSparseArray_IfE_DeepCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeepCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<float> *op = static_cast<vtkSparseArray<float> *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkArray *tempr = (ap.IsBound() ?
      op->DeepCopy() :
      op->vtkSparseArray<float>::DeepCopy());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSparseArray_IfE_GetValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<float> *op = static_cast<vtkSparseArray<float> *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    const float *tempr = (ap.IsBound() ?
      &op->GetValue(temp0) :
      &op->vtkSparseArray<float>::GetValue(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(*tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkSparseArray_IfE_GetValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<float> *op = static_cast<vtkSparseArray<float> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    const float *tempr = (ap.IsBound() ?
      &op->GetValue(temp0, temp1) :
      &op->vtkSparseArray<float>::GetValue(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(*tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkSparseArray_IfE_GetValue_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<float> *op = static_cast<vtkSparseArray<float> *>(vp);

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
      &op->vtkSparseArray<float>::GetValue(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(*tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkSparseArray_IfE_GetValue_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<float> *op = static_cast<vtkSparseArray<float> *>(vp);

  vtkArrayCoordinates *temp0 = NULL;
  PyObject *pobj0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkArrayCoordinates"))
    {
    const float *tempr = (ap.IsBound() ?
      &op->GetValue(*temp0) :
      &op->vtkSparseArray<float>::GetValue(*temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(*tempr);
      }
    }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkSparseArray_IfE_GetValue_Methods[] = {
  {NULL, PyvtkSparseArray_IfE_GetValue_s1, METH_VARARGS,
   (char*)"@L"},
  {NULL, PyvtkSparseArray_IfE_GetValue_s4, METH_VARARGS,
   (char*)"@O &vtkArrayCoordinates"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkSparseArray_IfE_GetValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkSparseArray_IfE_GetValue_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkSparseArray_IfE_GetValue_s2(self, args);
    case 3:
      return PyvtkSparseArray_IfE_GetValue_s3(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetValue");
  return NULL;
}



static PyObject *
PyvtkSparseArray_IfE_GetValueN(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValueN");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<float> *op = static_cast<vtkSparseArray<float> *>(vp);

  unsigned long long temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    const float *tempr = (ap.IsBound() ?
      &op->GetValueN(temp0) :
      &op->vtkSparseArray<float>::GetValueN(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(*tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSparseArray_IfE_SetValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<float> *op = static_cast<vtkSparseArray<float> *>(vp);

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
      op->vtkSparseArray<float>::SetValue(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkSparseArray_IfE_SetValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<float> *op = static_cast<vtkSparseArray<float> *>(vp);

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
      op->vtkSparseArray<float>::SetValue(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkSparseArray_IfE_SetValue_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<float> *op = static_cast<vtkSparseArray<float> *>(vp);

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
      op->vtkSparseArray<float>::SetValue(temp0, temp1, temp2, temp3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkSparseArray_IfE_SetValue_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<float> *op = static_cast<vtkSparseArray<float> *>(vp);

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
      op->vtkSparseArray<float>::SetValue(*temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkSparseArray_IfE_SetValue_Methods[] = {
  {NULL, PyvtkSparseArray_IfE_SetValue_s1, METH_VARARGS,
   (char*)"@Lf"},
  {NULL, PyvtkSparseArray_IfE_SetValue_s4, METH_VARARGS,
   (char*)"@Of &vtkArrayCoordinates"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkSparseArray_IfE_SetValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkSparseArray_IfE_SetValue_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkSparseArray_IfE_SetValue_s2(self, args);
    case 4:
      return PyvtkSparseArray_IfE_SetValue_s3(self, args);
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetValue");
  return NULL;
}



static PyObject *
PyvtkSparseArray_IfE_SetValueN(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValueN");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<float> *op = static_cast<vtkSparseArray<float> *>(vp);

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
      op->vtkSparseArray<float>::SetValueN(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSparseArray_IfE_SetNullValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNullValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<float> *op = static_cast<vtkSparseArray<float> *>(vp);

  float temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetNullValue(temp0);
      }
    else
      {
      op->vtkSparseArray<float>::SetNullValue(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSparseArray_IfE_GetNullValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNullValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<float> *op = static_cast<vtkSparseArray<float> *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const float *tempr = (ap.IsBound() ?
      &op->GetNullValue() :
      &op->vtkSparseArray<float>::GetNullValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(*tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSparseArray_IfE_Clear(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Clear");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<float> *op = static_cast<vtkSparseArray<float> *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Clear();
      }
    else
      {
      op->vtkSparseArray<float>::Clear();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSparseArray_IfE_Sort(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Sort");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<float> *op = static_cast<vtkSparseArray<float> *>(vp);

  vtkArraySort *temp0 = NULL;
  PyObject *pobj0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkArraySort"))
    {
    if (ap.IsBound())
      {
      op->Sort(*temp0);
      }
    else
      {
      op->vtkSparseArray<float>::Sort(*temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  Py_XDECREF(pobj0);

  return result;
}


static PyObject *
PyvtkSparseArray_IfE_GetCoordinateStorage(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCoordinateStorage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<float> *op = static_cast<vtkSparseArray<float> *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkIdType *tempr = (ap.IsBound() ?
      op->GetCoordinateStorage(temp0) :
      op->vtkSparseArray<float>::GetCoordinateStorage(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSparseArray_IfE_GetValueStorage(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValueStorage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<float> *op = static_cast<vtkSparseArray<float> *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    float *tempr = (ap.IsBound() ?
      op->GetValueStorage() :
      op->vtkSparseArray<float>::GetValueStorage());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSparseArray_IfE_ReserveStorage(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReserveStorage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<float> *op = static_cast<vtkSparseArray<float> *>(vp);

  unsigned long long temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->ReserveStorage(temp0);
      }
    else
      {
      op->vtkSparseArray<float>::ReserveStorage(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSparseArray_IfE_SetExtentsFromContents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExtentsFromContents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<float> *op = static_cast<vtkSparseArray<float> *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetExtentsFromContents();
      }
    else
      {
      op->vtkSparseArray<float>::SetExtentsFromContents();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSparseArray_IfE_SetExtents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExtents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<float> *op = static_cast<vtkSparseArray<float> *>(vp);

  vtkArrayExtents *temp0 = NULL;
  PyObject *pobj0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkArrayExtents"))
    {
    if (ap.IsBound())
      {
      op->SetExtents(*temp0);
      }
    else
      {
      op->vtkSparseArray<float>::SetExtents(*temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  Py_XDECREF(pobj0);

  return result;
}


static PyObject *
PyvtkSparseArray_IfE_AddValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<float> *op = static_cast<vtkSparseArray<float> *>(vp);

  vtkIdType temp0;
  float temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->AddValue(temp0, temp1);
      }
    else
      {
      op->vtkSparseArray<float>::AddValue(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkSparseArray_IfE_AddValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<float> *op = static_cast<vtkSparseArray<float> *>(vp);

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
      op->AddValue(temp0, temp1, temp2);
      }
    else
      {
      op->vtkSparseArray<float>::AddValue(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkSparseArray_IfE_AddValue_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<float> *op = static_cast<vtkSparseArray<float> *>(vp);

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
      op->AddValue(temp0, temp1, temp2, temp3);
      }
    else
      {
      op->vtkSparseArray<float>::AddValue(temp0, temp1, temp2, temp3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkSparseArray_IfE_AddValue_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<float> *op = static_cast<vtkSparseArray<float> *>(vp);

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
      op->AddValue(*temp0, temp1);
      }
    else
      {
      op->vtkSparseArray<float>::AddValue(*temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkSparseArray_IfE_AddValue_Methods[] = {
  {NULL, PyvtkSparseArray_IfE_AddValue_s1, METH_VARARGS,
   (char*)"@Lf"},
  {NULL, PyvtkSparseArray_IfE_AddValue_s4, METH_VARARGS,
   (char*)"@Of &vtkArrayCoordinates"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkSparseArray_IfE_AddValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkSparseArray_IfE_AddValue_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkSparseArray_IfE_AddValue_s2(self, args);
    case 4:
      return PyvtkSparseArray_IfE_AddValue_s3(self, args);
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "AddValue");
  return NULL;
}



static PyObject *
PyvtkSparseArray_IfE_Validate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Validate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<float> *op = static_cast<vtkSparseArray<float> *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->Validate() :
      op->vtkSparseArray<float>::Validate());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkSparseArray_IfE_Methods[] = {
  {(char*)"IsDense", PyvtkSparseArray_IfE_IsDense, METH_VARARGS,
   (char*)"V.IsDense() -> bool\nC++: bool IsDense()\n\n"},
  {(char*)"GetExtents", PyvtkSparseArray_IfE_GetExtents, METH_VARARGS,
   (char*)"V.GetExtents() -> vtkArrayExtents\nC++: const vtkArrayExtents &GetExtents()\n\n"},
  {(char*)"GetNonNullSize", PyvtkSparseArray_IfE_GetNonNullSize, METH_VARARGS,
   (char*)"V.GetNonNullSize() -> int\nC++: SizeT GetNonNullSize()\n\n"},
  {(char*)"GetCoordinatesN", PyvtkSparseArray_IfE_GetCoordinatesN, METH_VARARGS,
   (char*)"V.GetCoordinatesN(int, vtkArrayCoordinates)\nC++: void GetCoordinatesN(const SizeT n,\n    vtkArrayCoordinates &coordinates)\n\n"},
  {(char*)"DeepCopy", PyvtkSparseArray_IfE_DeepCopy, METH_VARARGS,
   (char*)"V.DeepCopy() -> vtkArray\nC++: vtkArray *DeepCopy()\n\n"},
  {(char*)"GetValue", PyvtkSparseArray_IfE_GetValue, METH_VARARGS,
   (char*)"V.GetValue(int) -> float\nC++: const float &GetValue(CoordinateT i)\nV.GetValue(int, int) -> float\nC++: const float &GetValue(CoordinateT i, CoordinateT j)\nV.GetValue(int, int, int) -> float\nC++: const float &GetValue(CoordinateT i, CoordinateT j,\n    CoordinateT k)\nV.GetValue(vtkArrayCoordinates) -> float\nC++: const float &GetValue(const vtkArrayCoordinates &coordinates)\n\n"},
  {(char*)"GetValueN", PyvtkSparseArray_IfE_GetValueN, METH_VARARGS,
   (char*)"V.GetValueN(int) -> float\nC++: const float &GetValueN(const SizeT n)\n\n"},
  {(char*)"SetValue", PyvtkSparseArray_IfE_SetValue, METH_VARARGS,
   (char*)"V.SetValue(int, float)\nC++: void SetValue(CoordinateT i, const float &value)\nV.SetValue(int, int, float)\nC++: void SetValue(CoordinateT i, CoordinateT j,\n    const float &value)\nV.SetValue(int, int, int, float)\nC++: void SetValue(CoordinateT i, CoordinateT j, CoordinateT k,\n    const float &value)\nV.SetValue(vtkArrayCoordinates, float)\nC++: void SetValue(const vtkArrayCoordinates &coordinates,\n    const float &value)\n\n"},
  {(char*)"SetValueN", PyvtkSparseArray_IfE_SetValueN, METH_VARARGS,
   (char*)"V.SetValueN(int, float)\nC++: void SetValueN(const SizeT n, const float &value)\n\n"},
  {(char*)"SetNullValue", PyvtkSparseArray_IfE_SetNullValue, METH_VARARGS,
   (char*)"V.SetNullValue(float)\nC++: void SetNullValue(const float &value)\n\nSet the value that will be returned by GetValue() for NULL areas\nof the array.\n"},
  {(char*)"GetNullValue", PyvtkSparseArray_IfE_GetNullValue, METH_VARARGS,
   (char*)"V.GetNullValue() -> float\nC++: const float &GetNullValue()\n\nReturns the value that will be returned by GetValue() for NULL\nareas of the array.\n"},
  {(char*)"Clear", PyvtkSparseArray_IfE_Clear, METH_VARARGS,
   (char*)"V.Clear()\nC++: void Clear()\n\nRemove all non-null elements from the array, leaving the number\nof dimensions, the extent of each dimension, and the label for\neach dimension unchanged.\n"},
  {(char*)"Sort", PyvtkSparseArray_IfE_Sort, METH_VARARGS,
   (char*)"V.Sort(vtkArraySort)\nC++: void Sort(const vtkArraySort &sort)\n\nSorts array values so that their coordinates appear in some\nwell-defined order. The supplied vtkArraySort object controls\nwhich dimensions are sorted, and in what order, and should\ncontain one-or-more sort dimensions, up to the number of\ndimensions stored in the array.\n"},
  {(char*)"GetCoordinateStorage", PyvtkSparseArray_IfE_GetCoordinateStorage, METH_VARARGS,
   (char*)"V.GetCoordinateStorage(int) -> (int, ...)\nC++: CoordinateT *GetCoordinateStorage(DimensionT dimension)\n\nReturn a mutable reference to the underlying coordinate storage. \nCoordinates for each dimension are stored contiguously as a\none-dimensional array.  The ordering of coordinates within the\narray depends on the order in which values were added to the\narray, and any subsequent sorting.  Use at your own risk!\n"},
  {(char*)"GetValueStorage", PyvtkSparseArray_IfE_GetValueStorage, METH_VARARGS,
   (char*)"V.GetValueStorage() -> (float, ...)\nC++: float *GetValueStorage()\n\nReturn a mutable reference to the underlying value storage. \nValues are stored contiguously, but in arbitrary order.  Use\nGetCoordinateStorage() if you need to get the corresponding\ncoordinates for a value.  Use at your own risk!\n"},
  {(char*)"ReserveStorage", PyvtkSparseArray_IfE_ReserveStorage, METH_VARARGS,
   (char*)"V.ReserveStorage(int)\nC++: void ReserveStorage(const SizeT value_count)\n\nReserve storage for a specific number of values.  This is useful\nfor reading external data using GetCoordinateStorage() and\nGetValueStorage(), when the total number of non-NULL values in\nthe array can be determined in advance.  Note that after calling\nReserveStorage(), all coordinates and values will be undefined,\nso you must ensure that every set of coordinates and values is\noverwritten.  It is the caller's responsibility to ensure that\nduplicate coordinates are not inserted into the array.\n"},
  {(char*)"SetExtentsFromContents", PyvtkSparseArray_IfE_SetExtentsFromContents, METH_VARARGS,
   (char*)"V.SetExtentsFromContents()\nC++: void SetExtentsFromContents()\n\nUpdate the array extents to match its contents, so that the\nextent along each dimension matches the maximum index value along\nthat dimension.\n"},
  {(char*)"SetExtents", PyvtkSparseArray_IfE_SetExtents, METH_VARARGS,
   (char*)"V.SetExtents(vtkArrayExtents)\nC++: void SetExtents(const vtkArrayExtents &extents)\n\nSpecify arbitrary array extents, without altering the contents of\nthe array.  Note that the extents must be as-large-or-larger-than\nthe extents of the actual values stored in the array.  The number\nof dimensions in the supplied extents must match the number of\ndimensions currently stored in the array.\n"},
  {(char*)"AddValue", PyvtkSparseArray_IfE_AddValue, METH_VARARGS,
   (char*)"V.AddValue(int, float)\nC++: void AddValue(CoordinateT i, const float &value)\nV.AddValue(int, int, float)\nC++: void AddValue(CoordinateT i, CoordinateT j,\n    const float &value)\nV.AddValue(int, int, int, float)\nC++: void AddValue(CoordinateT i, CoordinateT j, CoordinateT k,\n    const float &value)\nV.AddValue(vtkArrayCoordinates, float)\nC++: void AddValue(const vtkArrayCoordinates &coordinates,\n    const float &value)\n\nAdds a new non-null element to the array.  Does not test to see\nif an element with matching coordinates already exists.  Useful\nfor providing fast initialization of the array as long as the\ncaller is prepared to guarantee that no duplicate coordinates are\never used.\n"},
  {(char*)"Validate", PyvtkSparseArray_IfE_Validate, METH_VARARGS,
   (char*)"V.Validate() -> bool\nC++: bool Validate()\n\nValidate the contents of the array, returning false if there are\nany problems. Potential problems include duplicate coordinates,\nwhich can be introduced into the array either through AddValue()\nor direct access to coordinates storage; and coordinates\nout-of-bounds given the current array extents.\n\nNote that Validate() is a heavyweight O(N log N) operation that\nis intended for temporary use during debugging.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkSparseArray_IfE_StaticNew()
{
  return vtkSparseArray<float>::New();
}

PyObject *PyVTKClass_vtkSparseArray_IfENew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkSparseArray_IfE_StaticNew,
    PyvtkSparseArray_IfE_Methods,
    typeid(vtkSparseArray<float>).name(), modulename,
    "vtkSparseArray_IfE", "vtkSparseArray_IfE",
    PyvtkSparseArray_IfE_Doc(),
    PyVTKClass_vtkTypedArray_IfENew(modulename));
  return cls;
}

const char **PyvtkSparseArray_IfE_Doc()
{
  static const char *docstring[] = {
    "vtkSparseArray - Sparse, independent coordinate storage for N-way\narrays.\n\n",
    "Superclass: vtkTypedArray[float32]\n\n",
    "vtkSparseArray is a concrete vtkArray implementation that stores\nvalues using sparse independent coordinate storage.  This means that\nthe array stores the complete set of coordinates and the value for\neach non-null value in the array. While this approach requires\nslightly more storage than other sparse storage schemes (such as\nCompressed-Row or Compressed-Column), it is easier and more efficient\nt",
    "o work with when implementing algorithms, and  it generalizes well\nfor arbitrary numbers of dimensions.\n\nIn addition to the value retrieval and update methods provided by\nvtkTypedArray, vtkSparseArray provides methods to:\n\nGet and set a special 'null' value that will be returned when\nretrieving values for undefined coordinates.\n\nClear the contents of the array so that every set of coordinates is\nu",
    "ndefined.\n\nSort the array contents so that value coordinates can be visited in a\nspecific order.\n\nRetrieve pointers to the value- and coordinate-storage memory blocks.\n\nReserve storage for a specific number of non-null values, for\nefficiency when the number of non-null values is known in advance.\n\nRecompute the array extents so that they bound the largest set of\nnon-NULL values along each dimensio",
    "n.\n\nSpecify arbitrary array extents.\n\nAdd values to the array in amortized-constant time.\n\nValidate that the array does not contain duplicate coordinates.\n\nSee Also:\n\nvtkArray, vtkTypedArray, vtkDenseArray\n\nThanks:\n\nDeveloped by Timothy M. Shead (tshead@sandia.gov) at Sandia National\nLaboratories.\n\n",
    NULL
  };

  return docstring;
}

extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkSparseArray_IdENew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkTypedArray_IdENew
extern "C" { PyObject *PyVTKClass_vtkTypedArray_IdENew(const char *); }
#define DECLARED_PyVTKClass_vtkTypedArray_IdENew
#endif

static const char **PyvtkSparseArray_IdE_Doc();


static PyObject *
PyvtkSparseArray_IdE_IsDense(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsDense");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<double> *op = static_cast<vtkSparseArray<double> *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->IsDense() :
      op->vtkSparseArray<double>::IsDense());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSparseArray_IdE_GetExtents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetExtents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<double> *op = static_cast<vtkSparseArray<double> *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const vtkArrayExtents *tempr = (ap.IsBound() ?
      &op->GetExtents() :
      &op->vtkSparseArray<double>::GetExtents());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildSpecialObject(tempr, "vtkArrayExtents");
      }
    }

  return result;
}


static PyObject *
PyvtkSparseArray_IdE_GetNonNullSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNonNullSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<double> *op = static_cast<vtkSparseArray<double> *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned long long tempr = (ap.IsBound() ?
      op->GetNonNullSize() :
      op->vtkSparseArray<double>::GetNonNullSize());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSparseArray_IdE_GetCoordinatesN(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCoordinatesN");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<double> *op = static_cast<vtkSparseArray<double> *>(vp);

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
      op->vtkSparseArray<double>::GetCoordinatesN(temp0, *temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSparseArray_IdE_DeepCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeepCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<double> *op = static_cast<vtkSparseArray<double> *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkArray *tempr = (ap.IsBound() ?
      op->DeepCopy() :
      op->vtkSparseArray<double>::DeepCopy());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSparseArray_IdE_GetValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<double> *op = static_cast<vtkSparseArray<double> *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    const double *tempr = (ap.IsBound() ?
      &op->GetValue(temp0) :
      &op->vtkSparseArray<double>::GetValue(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(*tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkSparseArray_IdE_GetValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<double> *op = static_cast<vtkSparseArray<double> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    const double *tempr = (ap.IsBound() ?
      &op->GetValue(temp0, temp1) :
      &op->vtkSparseArray<double>::GetValue(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(*tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkSparseArray_IdE_GetValue_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<double> *op = static_cast<vtkSparseArray<double> *>(vp);

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
      &op->vtkSparseArray<double>::GetValue(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(*tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkSparseArray_IdE_GetValue_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<double> *op = static_cast<vtkSparseArray<double> *>(vp);

  vtkArrayCoordinates *temp0 = NULL;
  PyObject *pobj0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkArrayCoordinates"))
    {
    const double *tempr = (ap.IsBound() ?
      &op->GetValue(*temp0) :
      &op->vtkSparseArray<double>::GetValue(*temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(*tempr);
      }
    }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkSparseArray_IdE_GetValue_Methods[] = {
  {NULL, PyvtkSparseArray_IdE_GetValue_s1, METH_VARARGS,
   (char*)"@L"},
  {NULL, PyvtkSparseArray_IdE_GetValue_s4, METH_VARARGS,
   (char*)"@O &vtkArrayCoordinates"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkSparseArray_IdE_GetValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkSparseArray_IdE_GetValue_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkSparseArray_IdE_GetValue_s2(self, args);
    case 3:
      return PyvtkSparseArray_IdE_GetValue_s3(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetValue");
  return NULL;
}



static PyObject *
PyvtkSparseArray_IdE_GetValueN(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValueN");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<double> *op = static_cast<vtkSparseArray<double> *>(vp);

  unsigned long long temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    const double *tempr = (ap.IsBound() ?
      &op->GetValueN(temp0) :
      &op->vtkSparseArray<double>::GetValueN(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(*tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSparseArray_IdE_SetValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<double> *op = static_cast<vtkSparseArray<double> *>(vp);

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
      op->vtkSparseArray<double>::SetValue(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkSparseArray_IdE_SetValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<double> *op = static_cast<vtkSparseArray<double> *>(vp);

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
      op->vtkSparseArray<double>::SetValue(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkSparseArray_IdE_SetValue_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<double> *op = static_cast<vtkSparseArray<double> *>(vp);

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
      op->vtkSparseArray<double>::SetValue(temp0, temp1, temp2, temp3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkSparseArray_IdE_SetValue_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<double> *op = static_cast<vtkSparseArray<double> *>(vp);

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
      op->vtkSparseArray<double>::SetValue(*temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkSparseArray_IdE_SetValue_Methods[] = {
  {NULL, PyvtkSparseArray_IdE_SetValue_s1, METH_VARARGS,
   (char*)"@Ld"},
  {NULL, PyvtkSparseArray_IdE_SetValue_s4, METH_VARARGS,
   (char*)"@Od &vtkArrayCoordinates"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkSparseArray_IdE_SetValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkSparseArray_IdE_SetValue_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkSparseArray_IdE_SetValue_s2(self, args);
    case 4:
      return PyvtkSparseArray_IdE_SetValue_s3(self, args);
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetValue");
  return NULL;
}



static PyObject *
PyvtkSparseArray_IdE_SetValueN(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValueN");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<double> *op = static_cast<vtkSparseArray<double> *>(vp);

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
      op->vtkSparseArray<double>::SetValueN(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSparseArray_IdE_SetNullValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNullValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<double> *op = static_cast<vtkSparseArray<double> *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetNullValue(temp0);
      }
    else
      {
      op->vtkSparseArray<double>::SetNullValue(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSparseArray_IdE_GetNullValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNullValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<double> *op = static_cast<vtkSparseArray<double> *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const double *tempr = (ap.IsBound() ?
      &op->GetNullValue() :
      &op->vtkSparseArray<double>::GetNullValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(*tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSparseArray_IdE_Clear(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Clear");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<double> *op = static_cast<vtkSparseArray<double> *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Clear();
      }
    else
      {
      op->vtkSparseArray<double>::Clear();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSparseArray_IdE_Sort(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Sort");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<double> *op = static_cast<vtkSparseArray<double> *>(vp);

  vtkArraySort *temp0 = NULL;
  PyObject *pobj0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkArraySort"))
    {
    if (ap.IsBound())
      {
      op->Sort(*temp0);
      }
    else
      {
      op->vtkSparseArray<double>::Sort(*temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  Py_XDECREF(pobj0);

  return result;
}


static PyObject *
PyvtkSparseArray_IdE_GetCoordinateStorage(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCoordinateStorage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<double> *op = static_cast<vtkSparseArray<double> *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkIdType *tempr = (ap.IsBound() ?
      op->GetCoordinateStorage(temp0) :
      op->vtkSparseArray<double>::GetCoordinateStorage(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSparseArray_IdE_GetValueStorage(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValueStorage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<double> *op = static_cast<vtkSparseArray<double> *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetValueStorage() :
      op->vtkSparseArray<double>::GetValueStorage());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSparseArray_IdE_ReserveStorage(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReserveStorage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<double> *op = static_cast<vtkSparseArray<double> *>(vp);

  unsigned long long temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->ReserveStorage(temp0);
      }
    else
      {
      op->vtkSparseArray<double>::ReserveStorage(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSparseArray_IdE_SetExtentsFromContents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExtentsFromContents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<double> *op = static_cast<vtkSparseArray<double> *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetExtentsFromContents();
      }
    else
      {
      op->vtkSparseArray<double>::SetExtentsFromContents();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSparseArray_IdE_SetExtents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExtents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<double> *op = static_cast<vtkSparseArray<double> *>(vp);

  vtkArrayExtents *temp0 = NULL;
  PyObject *pobj0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkArrayExtents"))
    {
    if (ap.IsBound())
      {
      op->SetExtents(*temp0);
      }
    else
      {
      op->vtkSparseArray<double>::SetExtents(*temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  Py_XDECREF(pobj0);

  return result;
}


static PyObject *
PyvtkSparseArray_IdE_AddValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<double> *op = static_cast<vtkSparseArray<double> *>(vp);

  vtkIdType temp0;
  double temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->AddValue(temp0, temp1);
      }
    else
      {
      op->vtkSparseArray<double>::AddValue(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkSparseArray_IdE_AddValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<double> *op = static_cast<vtkSparseArray<double> *>(vp);

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
      op->AddValue(temp0, temp1, temp2);
      }
    else
      {
      op->vtkSparseArray<double>::AddValue(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkSparseArray_IdE_AddValue_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<double> *op = static_cast<vtkSparseArray<double> *>(vp);

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
      op->AddValue(temp0, temp1, temp2, temp3);
      }
    else
      {
      op->vtkSparseArray<double>::AddValue(temp0, temp1, temp2, temp3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkSparseArray_IdE_AddValue_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<double> *op = static_cast<vtkSparseArray<double> *>(vp);

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
      op->AddValue(*temp0, temp1);
      }
    else
      {
      op->vtkSparseArray<double>::AddValue(*temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkSparseArray_IdE_AddValue_Methods[] = {
  {NULL, PyvtkSparseArray_IdE_AddValue_s1, METH_VARARGS,
   (char*)"@Ld"},
  {NULL, PyvtkSparseArray_IdE_AddValue_s4, METH_VARARGS,
   (char*)"@Od &vtkArrayCoordinates"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkSparseArray_IdE_AddValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkSparseArray_IdE_AddValue_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkSparseArray_IdE_AddValue_s2(self, args);
    case 4:
      return PyvtkSparseArray_IdE_AddValue_s3(self, args);
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "AddValue");
  return NULL;
}



static PyObject *
PyvtkSparseArray_IdE_Validate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Validate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<double> *op = static_cast<vtkSparseArray<double> *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->Validate() :
      op->vtkSparseArray<double>::Validate());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkSparseArray_IdE_Methods[] = {
  {(char*)"IsDense", PyvtkSparseArray_IdE_IsDense, METH_VARARGS,
   (char*)"V.IsDense() -> bool\nC++: bool IsDense()\n\n"},
  {(char*)"GetExtents", PyvtkSparseArray_IdE_GetExtents, METH_VARARGS,
   (char*)"V.GetExtents() -> vtkArrayExtents\nC++: const vtkArrayExtents &GetExtents()\n\n"},
  {(char*)"GetNonNullSize", PyvtkSparseArray_IdE_GetNonNullSize, METH_VARARGS,
   (char*)"V.GetNonNullSize() -> int\nC++: SizeT GetNonNullSize()\n\n"},
  {(char*)"GetCoordinatesN", PyvtkSparseArray_IdE_GetCoordinatesN, METH_VARARGS,
   (char*)"V.GetCoordinatesN(int, vtkArrayCoordinates)\nC++: void GetCoordinatesN(const SizeT n,\n    vtkArrayCoordinates &coordinates)\n\n"},
  {(char*)"DeepCopy", PyvtkSparseArray_IdE_DeepCopy, METH_VARARGS,
   (char*)"V.DeepCopy() -> vtkArray\nC++: vtkArray *DeepCopy()\n\n"},
  {(char*)"GetValue", PyvtkSparseArray_IdE_GetValue, METH_VARARGS,
   (char*)"V.GetValue(int) -> float\nC++: const double &GetValue(CoordinateT i)\nV.GetValue(int, int) -> float\nC++: const double &GetValue(CoordinateT i, CoordinateT j)\nV.GetValue(int, int, int) -> float\nC++: const double &GetValue(CoordinateT i, CoordinateT j,\n    CoordinateT k)\nV.GetValue(vtkArrayCoordinates) -> float\nC++: const double &GetValue(\n    const vtkArrayCoordinates &coordinates)\n\n"},
  {(char*)"GetValueN", PyvtkSparseArray_IdE_GetValueN, METH_VARARGS,
   (char*)"V.GetValueN(int) -> float\nC++: const double &GetValueN(const SizeT n)\n\n"},
  {(char*)"SetValue", PyvtkSparseArray_IdE_SetValue, METH_VARARGS,
   (char*)"V.SetValue(int, float)\nC++: void SetValue(CoordinateT i, const double &value)\nV.SetValue(int, int, float)\nC++: void SetValue(CoordinateT i, CoordinateT j,\n    const double &value)\nV.SetValue(int, int, int, float)\nC++: void SetValue(CoordinateT i, CoordinateT j, CoordinateT k,\n    const double &value)\nV.SetValue(vtkArrayCoordinates, float)\nC++: void SetValue(const vtkArrayCoordinates &coordinates,\n    const double &value)\n\n"},
  {(char*)"SetValueN", PyvtkSparseArray_IdE_SetValueN, METH_VARARGS,
   (char*)"V.SetValueN(int, float)\nC++: void SetValueN(const SizeT n, const double &value)\n\n"},
  {(char*)"SetNullValue", PyvtkSparseArray_IdE_SetNullValue, METH_VARARGS,
   (char*)"V.SetNullValue(float)\nC++: void SetNullValue(const double &value)\n\nSet the value that will be returned by GetValue() for NULL areas\nof the array.\n"},
  {(char*)"GetNullValue", PyvtkSparseArray_IdE_GetNullValue, METH_VARARGS,
   (char*)"V.GetNullValue() -> float\nC++: const double &GetNullValue()\n\nReturns the value that will be returned by GetValue() for NULL\nareas of the array.\n"},
  {(char*)"Clear", PyvtkSparseArray_IdE_Clear, METH_VARARGS,
   (char*)"V.Clear()\nC++: void Clear()\n\nRemove all non-null elements from the array, leaving the number\nof dimensions, the extent of each dimension, and the label for\neach dimension unchanged.\n"},
  {(char*)"Sort", PyvtkSparseArray_IdE_Sort, METH_VARARGS,
   (char*)"V.Sort(vtkArraySort)\nC++: void Sort(const vtkArraySort &sort)\n\nSorts array values so that their coordinates appear in some\nwell-defined order. The supplied vtkArraySort object controls\nwhich dimensions are sorted, and in what order, and should\ncontain one-or-more sort dimensions, up to the number of\ndimensions stored in the array.\n"},
  {(char*)"GetCoordinateStorage", PyvtkSparseArray_IdE_GetCoordinateStorage, METH_VARARGS,
   (char*)"V.GetCoordinateStorage(int) -> (int, ...)\nC++: CoordinateT *GetCoordinateStorage(DimensionT dimension)\n\nReturn a mutable reference to the underlying coordinate storage. \nCoordinates for each dimension are stored contiguously as a\none-dimensional array.  The ordering of coordinates within the\narray depends on the order in which values were added to the\narray, and any subsequent sorting.  Use at your own risk!\n"},
  {(char*)"GetValueStorage", PyvtkSparseArray_IdE_GetValueStorage, METH_VARARGS,
   (char*)"V.GetValueStorage() -> (float, ...)\nC++: double *GetValueStorage()\n\nReturn a mutable reference to the underlying value storage. \nValues are stored contiguously, but in arbitrary order.  Use\nGetCoordinateStorage() if you need to get the corresponding\ncoordinates for a value.  Use at your own risk!\n"},
  {(char*)"ReserveStorage", PyvtkSparseArray_IdE_ReserveStorage, METH_VARARGS,
   (char*)"V.ReserveStorage(int)\nC++: void ReserveStorage(const SizeT value_count)\n\nReserve storage for a specific number of values.  This is useful\nfor reading external data using GetCoordinateStorage() and\nGetValueStorage(), when the total number of non-NULL values in\nthe array can be determined in advance.  Note that after calling\nReserveStorage(), all coordinates and values will be undefined,\nso you must ensure that every set of coordinates and values is\noverwritten.  It is the caller's responsibility to ensure that\nduplicate coordinates are not inserted into the array.\n"},
  {(char*)"SetExtentsFromContents", PyvtkSparseArray_IdE_SetExtentsFromContents, METH_VARARGS,
   (char*)"V.SetExtentsFromContents()\nC++: void SetExtentsFromContents()\n\nUpdate the array extents to match its contents, so that the\nextent along each dimension matches the maximum index value along\nthat dimension.\n"},
  {(char*)"SetExtents", PyvtkSparseArray_IdE_SetExtents, METH_VARARGS,
   (char*)"V.SetExtents(vtkArrayExtents)\nC++: void SetExtents(const vtkArrayExtents &extents)\n\nSpecify arbitrary array extents, without altering the contents of\nthe array.  Note that the extents must be as-large-or-larger-than\nthe extents of the actual values stored in the array.  The number\nof dimensions in the supplied extents must match the number of\ndimensions currently stored in the array.\n"},
  {(char*)"AddValue", PyvtkSparseArray_IdE_AddValue, METH_VARARGS,
   (char*)"V.AddValue(int, float)\nC++: void AddValue(CoordinateT i, const double &value)\nV.AddValue(int, int, float)\nC++: void AddValue(CoordinateT i, CoordinateT j,\n    const double &value)\nV.AddValue(int, int, int, float)\nC++: void AddValue(CoordinateT i, CoordinateT j, CoordinateT k,\n    const double &value)\nV.AddValue(vtkArrayCoordinates, float)\nC++: void AddValue(const vtkArrayCoordinates &coordinates,\n    const double &value)\n\nAdds a new non-null element to the array.  Does not test to see\nif an element with matching coordinates already exists.  Useful\nfor providing fast initialization of the array as long as the\ncaller is prepared to guarantee that no duplicate coordinates are\never used.\n"},
  {(char*)"Validate", PyvtkSparseArray_IdE_Validate, METH_VARARGS,
   (char*)"V.Validate() -> bool\nC++: bool Validate()\n\nValidate the contents of the array, returning false if there are\nany problems. Potential problems include duplicate coordinates,\nwhich can be introduced into the array either through AddValue()\nor direct access to coordinates storage; and coordinates\nout-of-bounds given the current array extents.\n\nNote that Validate() is a heavyweight O(N log N) operation that\nis intended for temporary use during debugging.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkSparseArray_IdE_StaticNew()
{
  return vtkSparseArray<double>::New();
}

PyObject *PyVTKClass_vtkSparseArray_IdENew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkSparseArray_IdE_StaticNew,
    PyvtkSparseArray_IdE_Methods,
    typeid(vtkSparseArray<double>).name(), modulename,
    "vtkSparseArray_IdE", "vtkSparseArray_IdE",
    PyvtkSparseArray_IdE_Doc(),
    PyVTKClass_vtkTypedArray_IdENew(modulename));
  return cls;
}

const char **PyvtkSparseArray_IdE_Doc()
{
  static const char *docstring[] = {
    "vtkSparseArray - Sparse, independent coordinate storage for N-way\narrays.\n\n",
    "Superclass: vtkTypedArray[float64]\n\n",
    "vtkSparseArray is a concrete vtkArray implementation that stores\nvalues using sparse independent coordinate storage.  This means that\nthe array stores the complete set of coordinates and the value for\neach non-null value in the array. While this approach requires\nslightly more storage than other sparse storage schemes (such as\nCompressed-Row or Compressed-Column), it is easier and more efficient\nt",
    "o work with when implementing algorithms, and  it generalizes well\nfor arbitrary numbers of dimensions.\n\nIn addition to the value retrieval and update methods provided by\nvtkTypedArray, vtkSparseArray provides methods to:\n\nGet and set a special 'null' value that will be returned when\nretrieving values for undefined coordinates.\n\nClear the contents of the array so that every set of coordinates is\nu",
    "ndefined.\n\nSort the array contents so that value coordinates can be visited in a\nspecific order.\n\nRetrieve pointers to the value- and coordinate-storage memory blocks.\n\nReserve storage for a specific number of non-null values, for\nefficiency when the number of non-null values is known in advance.\n\nRecompute the array extents so that they bound the largest set of\nnon-NULL values along each dimensio",
    "n.\n\nSpecify arbitrary array extents.\n\nAdd values to the array in amortized-constant time.\n\nValidate that the array does not contain duplicate coordinates.\n\nSee Also:\n\nvtkArray, vtkTypedArray, vtkDenseArray\n\nThanks:\n\nDeveloped by Timothy M. Shead (tshead@sandia.gov) at Sandia National\nLaboratories.\n\n",
    NULL
  };

  return docstring;
}

extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkSparseArray_I12vtkStdStringENew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkTypedArray_I12vtkStdStringENew
extern "C" { PyObject *PyVTKClass_vtkTypedArray_I12vtkStdStringENew(const char *); }
#define DECLARED_PyVTKClass_vtkTypedArray_I12vtkStdStringENew
#endif

static const char **PyvtkSparseArray_I12vtkStdStringE_Doc();


static PyObject *
PyvtkSparseArray_I12vtkStdStringE_IsDense(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsDense");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<vtkStdString> *op = static_cast<vtkSparseArray<vtkStdString> *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->IsDense() :
      op->vtkSparseArray<vtkStdString>::IsDense());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSparseArray_I12vtkStdStringE_GetExtents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetExtents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<vtkStdString> *op = static_cast<vtkSparseArray<vtkStdString> *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const vtkArrayExtents *tempr = (ap.IsBound() ?
      &op->GetExtents() :
      &op->vtkSparseArray<vtkStdString>::GetExtents());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildSpecialObject(tempr, "vtkArrayExtents");
      }
    }

  return result;
}


static PyObject *
PyvtkSparseArray_I12vtkStdStringE_GetNonNullSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNonNullSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<vtkStdString> *op = static_cast<vtkSparseArray<vtkStdString> *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned long long tempr = (ap.IsBound() ?
      op->GetNonNullSize() :
      op->vtkSparseArray<vtkStdString>::GetNonNullSize());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSparseArray_I12vtkStdStringE_GetCoordinatesN(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCoordinatesN");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<vtkStdString> *op = static_cast<vtkSparseArray<vtkStdString> *>(vp);

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
      op->vtkSparseArray<vtkStdString>::GetCoordinatesN(temp0, *temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSparseArray_I12vtkStdStringE_DeepCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeepCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<vtkStdString> *op = static_cast<vtkSparseArray<vtkStdString> *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkArray *tempr = (ap.IsBound() ?
      op->DeepCopy() :
      op->vtkSparseArray<vtkStdString>::DeepCopy());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSparseArray_I12vtkStdStringE_GetValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<vtkStdString> *op = static_cast<vtkSparseArray<vtkStdString> *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    const vtkStdString *tempr = (ap.IsBound() ?
      &op->GetValue(temp0) :
      &op->vtkSparseArray<vtkStdString>::GetValue(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(*tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkSparseArray_I12vtkStdStringE_GetValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<vtkStdString> *op = static_cast<vtkSparseArray<vtkStdString> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    const vtkStdString *tempr = (ap.IsBound() ?
      &op->GetValue(temp0, temp1) :
      &op->vtkSparseArray<vtkStdString>::GetValue(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(*tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkSparseArray_I12vtkStdStringE_GetValue_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<vtkStdString> *op = static_cast<vtkSparseArray<vtkStdString> *>(vp);

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
      &op->vtkSparseArray<vtkStdString>::GetValue(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(*tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkSparseArray_I12vtkStdStringE_GetValue_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<vtkStdString> *op = static_cast<vtkSparseArray<vtkStdString> *>(vp);

  vtkArrayCoordinates *temp0 = NULL;
  PyObject *pobj0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkArrayCoordinates"))
    {
    const vtkStdString *tempr = (ap.IsBound() ?
      &op->GetValue(*temp0) :
      &op->vtkSparseArray<vtkStdString>::GetValue(*temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(*tempr);
      }
    }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkSparseArray_I12vtkStdStringE_GetValue_Methods[] = {
  {NULL, PyvtkSparseArray_I12vtkStdStringE_GetValue_s1, METH_VARARGS,
   (char*)"@L"},
  {NULL, PyvtkSparseArray_I12vtkStdStringE_GetValue_s4, METH_VARARGS,
   (char*)"@O &vtkArrayCoordinates"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkSparseArray_I12vtkStdStringE_GetValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkSparseArray_I12vtkStdStringE_GetValue_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkSparseArray_I12vtkStdStringE_GetValue_s2(self, args);
    case 3:
      return PyvtkSparseArray_I12vtkStdStringE_GetValue_s3(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetValue");
  return NULL;
}



static PyObject *
PyvtkSparseArray_I12vtkStdStringE_GetValueN(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValueN");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<vtkStdString> *op = static_cast<vtkSparseArray<vtkStdString> *>(vp);

  unsigned long long temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    const vtkStdString *tempr = (ap.IsBound() ?
      &op->GetValueN(temp0) :
      &op->vtkSparseArray<vtkStdString>::GetValueN(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(*tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSparseArray_I12vtkStdStringE_SetValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<vtkStdString> *op = static_cast<vtkSparseArray<vtkStdString> *>(vp);

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
      op->vtkSparseArray<vtkStdString>::SetValue(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkSparseArray_I12vtkStdStringE_SetValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<vtkStdString> *op = static_cast<vtkSparseArray<vtkStdString> *>(vp);

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
      op->vtkSparseArray<vtkStdString>::SetValue(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkSparseArray_I12vtkStdStringE_SetValue_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<vtkStdString> *op = static_cast<vtkSparseArray<vtkStdString> *>(vp);

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
      op->vtkSparseArray<vtkStdString>::SetValue(temp0, temp1, temp2, temp3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkSparseArray_I12vtkStdStringE_SetValue_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<vtkStdString> *op = static_cast<vtkSparseArray<vtkStdString> *>(vp);

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
      op->vtkSparseArray<vtkStdString>::SetValue(*temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkSparseArray_I12vtkStdStringE_SetValue_Methods[] = {
  {NULL, PyvtkSparseArray_I12vtkStdStringE_SetValue_s1, METH_VARARGS,
   (char*)"@Ls"},
  {NULL, PyvtkSparseArray_I12vtkStdStringE_SetValue_s4, METH_VARARGS,
   (char*)"@Os &vtkArrayCoordinates"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkSparseArray_I12vtkStdStringE_SetValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkSparseArray_I12vtkStdStringE_SetValue_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkSparseArray_I12vtkStdStringE_SetValue_s2(self, args);
    case 4:
      return PyvtkSparseArray_I12vtkStdStringE_SetValue_s3(self, args);
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetValue");
  return NULL;
}



static PyObject *
PyvtkSparseArray_I12vtkStdStringE_SetValueN(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValueN");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<vtkStdString> *op = static_cast<vtkSparseArray<vtkStdString> *>(vp);

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
      op->vtkSparseArray<vtkStdString>::SetValueN(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSparseArray_I12vtkStdStringE_SetNullValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNullValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<vtkStdString> *op = static_cast<vtkSparseArray<vtkStdString> *>(vp);

  vtkStdString temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetNullValue(temp0);
      }
    else
      {
      op->vtkSparseArray<vtkStdString>::SetNullValue(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSparseArray_I12vtkStdStringE_GetNullValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNullValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<vtkStdString> *op = static_cast<vtkSparseArray<vtkStdString> *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const vtkStdString *tempr = (ap.IsBound() ?
      &op->GetNullValue() :
      &op->vtkSparseArray<vtkStdString>::GetNullValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(*tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSparseArray_I12vtkStdStringE_Clear(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Clear");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<vtkStdString> *op = static_cast<vtkSparseArray<vtkStdString> *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Clear();
      }
    else
      {
      op->vtkSparseArray<vtkStdString>::Clear();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSparseArray_I12vtkStdStringE_Sort(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Sort");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<vtkStdString> *op = static_cast<vtkSparseArray<vtkStdString> *>(vp);

  vtkArraySort *temp0 = NULL;
  PyObject *pobj0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkArraySort"))
    {
    if (ap.IsBound())
      {
      op->Sort(*temp0);
      }
    else
      {
      op->vtkSparseArray<vtkStdString>::Sort(*temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  Py_XDECREF(pobj0);

  return result;
}


static PyObject *
PyvtkSparseArray_I12vtkStdStringE_GetCoordinateStorage(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCoordinateStorage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<vtkStdString> *op = static_cast<vtkSparseArray<vtkStdString> *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkIdType *tempr = (ap.IsBound() ?
      op->GetCoordinateStorage(temp0) :
      op->vtkSparseArray<vtkStdString>::GetCoordinateStorage(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSparseArray_I12vtkStdStringE_ReserveStorage(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReserveStorage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<vtkStdString> *op = static_cast<vtkSparseArray<vtkStdString> *>(vp);

  unsigned long long temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->ReserveStorage(temp0);
      }
    else
      {
      op->vtkSparseArray<vtkStdString>::ReserveStorage(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSparseArray_I12vtkStdStringE_SetExtentsFromContents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExtentsFromContents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<vtkStdString> *op = static_cast<vtkSparseArray<vtkStdString> *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetExtentsFromContents();
      }
    else
      {
      op->vtkSparseArray<vtkStdString>::SetExtentsFromContents();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSparseArray_I12vtkStdStringE_SetExtents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExtents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<vtkStdString> *op = static_cast<vtkSparseArray<vtkStdString> *>(vp);

  vtkArrayExtents *temp0 = NULL;
  PyObject *pobj0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkArrayExtents"))
    {
    if (ap.IsBound())
      {
      op->SetExtents(*temp0);
      }
    else
      {
      op->vtkSparseArray<vtkStdString>::SetExtents(*temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  Py_XDECREF(pobj0);

  return result;
}


static PyObject *
PyvtkSparseArray_I12vtkStdStringE_AddValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<vtkStdString> *op = static_cast<vtkSparseArray<vtkStdString> *>(vp);

  vtkIdType temp0;
  vtkStdString temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->AddValue(temp0, temp1);
      }
    else
      {
      op->vtkSparseArray<vtkStdString>::AddValue(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkSparseArray_I12vtkStdStringE_AddValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<vtkStdString> *op = static_cast<vtkSparseArray<vtkStdString> *>(vp);

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
      op->AddValue(temp0, temp1, temp2);
      }
    else
      {
      op->vtkSparseArray<vtkStdString>::AddValue(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkSparseArray_I12vtkStdStringE_AddValue_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<vtkStdString> *op = static_cast<vtkSparseArray<vtkStdString> *>(vp);

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
      op->AddValue(temp0, temp1, temp2, temp3);
      }
    else
      {
      op->vtkSparseArray<vtkStdString>::AddValue(temp0, temp1, temp2, temp3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkSparseArray_I12vtkStdStringE_AddValue_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<vtkStdString> *op = static_cast<vtkSparseArray<vtkStdString> *>(vp);

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
      op->AddValue(*temp0, temp1);
      }
    else
      {
      op->vtkSparseArray<vtkStdString>::AddValue(*temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkSparseArray_I12vtkStdStringE_AddValue_Methods[] = {
  {NULL, PyvtkSparseArray_I12vtkStdStringE_AddValue_s1, METH_VARARGS,
   (char*)"@Ls"},
  {NULL, PyvtkSparseArray_I12vtkStdStringE_AddValue_s4, METH_VARARGS,
   (char*)"@Os &vtkArrayCoordinates"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkSparseArray_I12vtkStdStringE_AddValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkSparseArray_I12vtkStdStringE_AddValue_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkSparseArray_I12vtkStdStringE_AddValue_s2(self, args);
    case 4:
      return PyvtkSparseArray_I12vtkStdStringE_AddValue_s3(self, args);
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "AddValue");
  return NULL;
}



static PyObject *
PyvtkSparseArray_I12vtkStdStringE_Validate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Validate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<vtkStdString> *op = static_cast<vtkSparseArray<vtkStdString> *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->Validate() :
      op->vtkSparseArray<vtkStdString>::Validate());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkSparseArray_I12vtkStdStringE_Methods[] = {
  {(char*)"IsDense", PyvtkSparseArray_I12vtkStdStringE_IsDense, METH_VARARGS,
   (char*)"V.IsDense() -> bool\nC++: bool IsDense()\n\n"},
  {(char*)"GetExtents", PyvtkSparseArray_I12vtkStdStringE_GetExtents, METH_VARARGS,
   (char*)"V.GetExtents() -> vtkArrayExtents\nC++: const vtkArrayExtents &GetExtents()\n\n"},
  {(char*)"GetNonNullSize", PyvtkSparseArray_I12vtkStdStringE_GetNonNullSize, METH_VARARGS,
   (char*)"V.GetNonNullSize() -> int\nC++: SizeT GetNonNullSize()\n\n"},
  {(char*)"GetCoordinatesN", PyvtkSparseArray_I12vtkStdStringE_GetCoordinatesN, METH_VARARGS,
   (char*)"V.GetCoordinatesN(int, vtkArrayCoordinates)\nC++: void GetCoordinatesN(const SizeT n,\n    vtkArrayCoordinates &coordinates)\n\n"},
  {(char*)"DeepCopy", PyvtkSparseArray_I12vtkStdStringE_DeepCopy, METH_VARARGS,
   (char*)"V.DeepCopy() -> vtkArray\nC++: vtkArray *DeepCopy()\n\n"},
  {(char*)"GetValue", PyvtkSparseArray_I12vtkStdStringE_GetValue, METH_VARARGS,
   (char*)"V.GetValue(int) -> string\nC++: const vtkStdString &GetValue(CoordinateT i)\nV.GetValue(int, int) -> string\nC++: const vtkStdString &GetValue(CoordinateT i, CoordinateT j)\nV.GetValue(int, int, int) -> string\nC++: const vtkStdString &GetValue(CoordinateT i, CoordinateT j,\n    CoordinateT k)\nV.GetValue(vtkArrayCoordinates) -> string\nC++: const vtkStdString &GetValue(\n    const vtkArrayCoordinates &coordinates)\n\n"},
  {(char*)"GetValueN", PyvtkSparseArray_I12vtkStdStringE_GetValueN, METH_VARARGS,
   (char*)"V.GetValueN(int) -> string\nC++: const vtkStdString &GetValueN(const SizeT n)\n\n"},
  {(char*)"SetValue", PyvtkSparseArray_I12vtkStdStringE_SetValue, METH_VARARGS,
   (char*)"V.SetValue(int, string)\nC++: void SetValue(CoordinateT i, const vtkStdString &value)\nV.SetValue(int, int, string)\nC++: void SetValue(CoordinateT i, CoordinateT j,\n    const vtkStdString &value)\nV.SetValue(int, int, int, string)\nC++: void SetValue(CoordinateT i, CoordinateT j, CoordinateT k,\n    const vtkStdString &value)\nV.SetValue(vtkArrayCoordinates, string)\nC++: void SetValue(const vtkArrayCoordinates &coordinates,\n    const vtkStdString &value)\n\n"},
  {(char*)"SetValueN", PyvtkSparseArray_I12vtkStdStringE_SetValueN, METH_VARARGS,
   (char*)"V.SetValueN(int, string)\nC++: void SetValueN(const SizeT n, const vtkStdString &value)\n\n"},
  {(char*)"SetNullValue", PyvtkSparseArray_I12vtkStdStringE_SetNullValue, METH_VARARGS,
   (char*)"V.SetNullValue(string)\nC++: void SetNullValue(const vtkStdString &value)\n\nSet the value that will be returned by GetValue() for NULL areas\nof the array.\n"},
  {(char*)"GetNullValue", PyvtkSparseArray_I12vtkStdStringE_GetNullValue, METH_VARARGS,
   (char*)"V.GetNullValue() -> string\nC++: const vtkStdString &GetNullValue()\n\nReturns the value that will be returned by GetValue() for NULL\nareas of the array.\n"},
  {(char*)"Clear", PyvtkSparseArray_I12vtkStdStringE_Clear, METH_VARARGS,
   (char*)"V.Clear()\nC++: void Clear()\n\nRemove all non-null elements from the array, leaving the number\nof dimensions, the extent of each dimension, and the label for\neach dimension unchanged.\n"},
  {(char*)"Sort", PyvtkSparseArray_I12vtkStdStringE_Sort, METH_VARARGS,
   (char*)"V.Sort(vtkArraySort)\nC++: void Sort(const vtkArraySort &sort)\n\nSorts array values so that their coordinates appear in some\nwell-defined order. The supplied vtkArraySort object controls\nwhich dimensions are sorted, and in what order, and should\ncontain one-or-more sort dimensions, up to the number of\ndimensions stored in the array.\n"},
  {(char*)"GetCoordinateStorage", PyvtkSparseArray_I12vtkStdStringE_GetCoordinateStorage, METH_VARARGS,
   (char*)"V.GetCoordinateStorage(int) -> (int, ...)\nC++: CoordinateT *GetCoordinateStorage(DimensionT dimension)\n\nReturn a mutable reference to the underlying coordinate storage. \nCoordinates for each dimension are stored contiguously as a\none-dimensional array.  The ordering of coordinates within the\narray depends on the order in which values were added to the\narray, and any subsequent sorting.  Use at your own risk!\n"},
  {(char*)"ReserveStorage", PyvtkSparseArray_I12vtkStdStringE_ReserveStorage, METH_VARARGS,
   (char*)"V.ReserveStorage(int)\nC++: void ReserveStorage(const SizeT value_count)\n\nReserve storage for a specific number of values.  This is useful\nfor reading external data using GetCoordinateStorage() and\nGetValueStorage(), when the total number of non-NULL values in\nthe array can be determined in advance.  Note that after calling\nReserveStorage(), all coordinates and values will be undefined,\nso you must ensure that every set of coordinates and values is\noverwritten.  It is the caller's responsibility to ensure that\nduplicate coordinates are not inserted into the array.\n"},
  {(char*)"SetExtentsFromContents", PyvtkSparseArray_I12vtkStdStringE_SetExtentsFromContents, METH_VARARGS,
   (char*)"V.SetExtentsFromContents()\nC++: void SetExtentsFromContents()\n\nUpdate the array extents to match its contents, so that the\nextent along each dimension matches the maximum index value along\nthat dimension.\n"},
  {(char*)"SetExtents", PyvtkSparseArray_I12vtkStdStringE_SetExtents, METH_VARARGS,
   (char*)"V.SetExtents(vtkArrayExtents)\nC++: void SetExtents(const vtkArrayExtents &extents)\n\nSpecify arbitrary array extents, without altering the contents of\nthe array.  Note that the extents must be as-large-or-larger-than\nthe extents of the actual values stored in the array.  The number\nof dimensions in the supplied extents must match the number of\ndimensions currently stored in the array.\n"},
  {(char*)"AddValue", PyvtkSparseArray_I12vtkStdStringE_AddValue, METH_VARARGS,
   (char*)"V.AddValue(int, string)\nC++: void AddValue(CoordinateT i, const vtkStdString &value)\nV.AddValue(int, int, string)\nC++: void AddValue(CoordinateT i, CoordinateT j,\n    const vtkStdString &value)\nV.AddValue(int, int, int, string)\nC++: void AddValue(CoordinateT i, CoordinateT j, CoordinateT k,\n    const vtkStdString &value)\nV.AddValue(vtkArrayCoordinates, string)\nC++: void AddValue(const vtkArrayCoordinates &coordinates,\n    const vtkStdString &value)\n\nAdds a new non-null element to the array.  Does not test to see\nif an element with matching coordinates already exists.  Useful\nfor providing fast initialization of the array as long as the\ncaller is prepared to guarantee that no duplicate coordinates are\never used.\n"},
  {(char*)"Validate", PyvtkSparseArray_I12vtkStdStringE_Validate, METH_VARARGS,
   (char*)"V.Validate() -> bool\nC++: bool Validate()\n\nValidate the contents of the array, returning false if there are\nany problems. Potential problems include duplicate coordinates,\nwhich can be introduced into the array either through AddValue()\nor direct access to coordinates storage; and coordinates\nout-of-bounds given the current array extents.\n\nNote that Validate() is a heavyweight O(N log N) operation that\nis intended for temporary use during debugging.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkSparseArray_I12vtkStdStringE_StaticNew()
{
  return vtkSparseArray<vtkStdString>::New();
}

PyObject *PyVTKClass_vtkSparseArray_I12vtkStdStringENew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkSparseArray_I12vtkStdStringE_StaticNew,
    PyvtkSparseArray_I12vtkStdStringE_Methods,
    typeid(vtkSparseArray<vtkStdString>).name(), modulename,
    "vtkSparseArray_I12vtkStdStringE", "vtkSparseArray_I12vtkStdStringE",
    PyvtkSparseArray_I12vtkStdStringE_Doc(),
    PyVTKClass_vtkTypedArray_I12vtkStdStringENew(modulename));
  return cls;
}

const char **PyvtkSparseArray_I12vtkStdStringE_Doc()
{
  static const char *docstring[] = {
    "vtkSparseArray - Sparse, independent coordinate storage for N-way\narrays.\n\n",
    "Superclass: vtkTypedArray[str]\n\n",
    "vtkSparseArray is a concrete vtkArray implementation that stores\nvalues using sparse independent coordinate storage.  This means that\nthe array stores the complete set of coordinates and the value for\neach non-null value in the array. While this approach requires\nslightly more storage than other sparse storage schemes (such as\nCompressed-Row or Compressed-Column), it is easier and more efficient\nt",
    "o work with when implementing algorithms, and  it generalizes well\nfor arbitrary numbers of dimensions.\n\nIn addition to the value retrieval and update methods provided by\nvtkTypedArray, vtkSparseArray provides methods to:\n\nGet and set a special 'null' value that will be returned when\nretrieving values for undefined coordinates.\n\nClear the contents of the array so that every set of coordinates is\nu",
    "ndefined.\n\nSort the array contents so that value coordinates can be visited in a\nspecific order.\n\nRetrieve pointers to the value- and coordinate-storage memory blocks.\n\nReserve storage for a specific number of non-null values, for\nefficiency when the number of non-null values is known in advance.\n\nRecompute the array extents so that they bound the largest set of\nnon-NULL values along each dimensio",
    "n.\n\nSpecify arbitrary array extents.\n\nAdd values to the array in amortized-constant time.\n\nValidate that the array does not contain duplicate coordinates.\n\nSee Also:\n\nvtkArray, vtkTypedArray, vtkDenseArray\n\nThanks:\n\nDeveloped by Timothy M. Shead (tshead@sandia.gov) at Sandia National\nLaboratories.\n\n",
    NULL
  };

  return docstring;
}

extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkSparseArray_I16vtkUnicodeStringENew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkTypedArray_I16vtkUnicodeStringENew
extern "C" { PyObject *PyVTKClass_vtkTypedArray_I16vtkUnicodeStringENew(const char *); }
#define DECLARED_PyVTKClass_vtkTypedArray_I16vtkUnicodeStringENew
#endif

static const char **PyvtkSparseArray_I16vtkUnicodeStringE_Doc();


static PyObject *
PyvtkSparseArray_I16vtkUnicodeStringE_IsDense(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsDense");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<vtkUnicodeString> *op = static_cast<vtkSparseArray<vtkUnicodeString> *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->IsDense() :
      op->vtkSparseArray<vtkUnicodeString>::IsDense());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSparseArray_I16vtkUnicodeStringE_GetExtents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetExtents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<vtkUnicodeString> *op = static_cast<vtkSparseArray<vtkUnicodeString> *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const vtkArrayExtents *tempr = (ap.IsBound() ?
      &op->GetExtents() :
      &op->vtkSparseArray<vtkUnicodeString>::GetExtents());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildSpecialObject(tempr, "vtkArrayExtents");
      }
    }

  return result;
}


static PyObject *
PyvtkSparseArray_I16vtkUnicodeStringE_GetNonNullSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNonNullSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<vtkUnicodeString> *op = static_cast<vtkSparseArray<vtkUnicodeString> *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned long long tempr = (ap.IsBound() ?
      op->GetNonNullSize() :
      op->vtkSparseArray<vtkUnicodeString>::GetNonNullSize());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSparseArray_I16vtkUnicodeStringE_GetCoordinatesN(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCoordinatesN");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<vtkUnicodeString> *op = static_cast<vtkSparseArray<vtkUnicodeString> *>(vp);

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
      op->vtkSparseArray<vtkUnicodeString>::GetCoordinatesN(temp0, *temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSparseArray_I16vtkUnicodeStringE_DeepCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeepCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<vtkUnicodeString> *op = static_cast<vtkSparseArray<vtkUnicodeString> *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkArray *tempr = (ap.IsBound() ?
      op->DeepCopy() :
      op->vtkSparseArray<vtkUnicodeString>::DeepCopy());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSparseArray_I16vtkUnicodeStringE_GetValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<vtkUnicodeString> *op = static_cast<vtkSparseArray<vtkUnicodeString> *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    const vtkUnicodeString *tempr = (ap.IsBound() ?
      &op->GetValue(temp0) :
      &op->vtkSparseArray<vtkUnicodeString>::GetValue(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(*tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkSparseArray_I16vtkUnicodeStringE_GetValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<vtkUnicodeString> *op = static_cast<vtkSparseArray<vtkUnicodeString> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    const vtkUnicodeString *tempr = (ap.IsBound() ?
      &op->GetValue(temp0, temp1) :
      &op->vtkSparseArray<vtkUnicodeString>::GetValue(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(*tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkSparseArray_I16vtkUnicodeStringE_GetValue_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<vtkUnicodeString> *op = static_cast<vtkSparseArray<vtkUnicodeString> *>(vp);

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
      &op->vtkSparseArray<vtkUnicodeString>::GetValue(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(*tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkSparseArray_I16vtkUnicodeStringE_GetValue_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<vtkUnicodeString> *op = static_cast<vtkSparseArray<vtkUnicodeString> *>(vp);

  vtkArrayCoordinates *temp0 = NULL;
  PyObject *pobj0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkArrayCoordinates"))
    {
    const vtkUnicodeString *tempr = (ap.IsBound() ?
      &op->GetValue(*temp0) :
      &op->vtkSparseArray<vtkUnicodeString>::GetValue(*temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(*tempr);
      }
    }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkSparseArray_I16vtkUnicodeStringE_GetValue_Methods[] = {
  {NULL, PyvtkSparseArray_I16vtkUnicodeStringE_GetValue_s1, METH_VARARGS,
   (char*)"@L"},
  {NULL, PyvtkSparseArray_I16vtkUnicodeStringE_GetValue_s4, METH_VARARGS,
   (char*)"@O &vtkArrayCoordinates"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkSparseArray_I16vtkUnicodeStringE_GetValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkSparseArray_I16vtkUnicodeStringE_GetValue_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkSparseArray_I16vtkUnicodeStringE_GetValue_s2(self, args);
    case 3:
      return PyvtkSparseArray_I16vtkUnicodeStringE_GetValue_s3(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetValue");
  return NULL;
}



static PyObject *
PyvtkSparseArray_I16vtkUnicodeStringE_GetValueN(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValueN");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<vtkUnicodeString> *op = static_cast<vtkSparseArray<vtkUnicodeString> *>(vp);

  unsigned long long temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    const vtkUnicodeString *tempr = (ap.IsBound() ?
      &op->GetValueN(temp0) :
      &op->vtkSparseArray<vtkUnicodeString>::GetValueN(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(*tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSparseArray_I16vtkUnicodeStringE_SetValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<vtkUnicodeString> *op = static_cast<vtkSparseArray<vtkUnicodeString> *>(vp);

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
      op->vtkSparseArray<vtkUnicodeString>::SetValue(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkSparseArray_I16vtkUnicodeStringE_SetValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<vtkUnicodeString> *op = static_cast<vtkSparseArray<vtkUnicodeString> *>(vp);

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
      op->vtkSparseArray<vtkUnicodeString>::SetValue(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkSparseArray_I16vtkUnicodeStringE_SetValue_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<vtkUnicodeString> *op = static_cast<vtkSparseArray<vtkUnicodeString> *>(vp);

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
      op->vtkSparseArray<vtkUnicodeString>::SetValue(temp0, temp1, temp2, temp3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkSparseArray_I16vtkUnicodeStringE_SetValue_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<vtkUnicodeString> *op = static_cast<vtkSparseArray<vtkUnicodeString> *>(vp);

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
      op->vtkSparseArray<vtkUnicodeString>::SetValue(*temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkSparseArray_I16vtkUnicodeStringE_SetValue_Methods[] = {
  {NULL, PyvtkSparseArray_I16vtkUnicodeStringE_SetValue_s1, METH_VARARGS,
   (char*)"@LO unicode"},
  {NULL, PyvtkSparseArray_I16vtkUnicodeStringE_SetValue_s4, METH_VARARGS,
   (char*)"@OO &vtkArrayCoordinates unicode"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkSparseArray_I16vtkUnicodeStringE_SetValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkSparseArray_I16vtkUnicodeStringE_SetValue_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkSparseArray_I16vtkUnicodeStringE_SetValue_s2(self, args);
    case 4:
      return PyvtkSparseArray_I16vtkUnicodeStringE_SetValue_s3(self, args);
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetValue");
  return NULL;
}



static PyObject *
PyvtkSparseArray_I16vtkUnicodeStringE_SetValueN(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValueN");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<vtkUnicodeString> *op = static_cast<vtkSparseArray<vtkUnicodeString> *>(vp);

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
      op->vtkSparseArray<vtkUnicodeString>::SetValueN(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSparseArray_I16vtkUnicodeStringE_SetNullValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNullValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<vtkUnicodeString> *op = static_cast<vtkSparseArray<vtkUnicodeString> *>(vp);

  vtkUnicodeString temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetNullValue(temp0);
      }
    else
      {
      op->vtkSparseArray<vtkUnicodeString>::SetNullValue(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSparseArray_I16vtkUnicodeStringE_GetNullValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNullValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<vtkUnicodeString> *op = static_cast<vtkSparseArray<vtkUnicodeString> *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const vtkUnicodeString *tempr = (ap.IsBound() ?
      &op->GetNullValue() :
      &op->vtkSparseArray<vtkUnicodeString>::GetNullValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(*tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSparseArray_I16vtkUnicodeStringE_Clear(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Clear");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<vtkUnicodeString> *op = static_cast<vtkSparseArray<vtkUnicodeString> *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Clear();
      }
    else
      {
      op->vtkSparseArray<vtkUnicodeString>::Clear();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSparseArray_I16vtkUnicodeStringE_Sort(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Sort");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<vtkUnicodeString> *op = static_cast<vtkSparseArray<vtkUnicodeString> *>(vp);

  vtkArraySort *temp0 = NULL;
  PyObject *pobj0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkArraySort"))
    {
    if (ap.IsBound())
      {
      op->Sort(*temp0);
      }
    else
      {
      op->vtkSparseArray<vtkUnicodeString>::Sort(*temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  Py_XDECREF(pobj0);

  return result;
}


static PyObject *
PyvtkSparseArray_I16vtkUnicodeStringE_GetCoordinateStorage(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCoordinateStorage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<vtkUnicodeString> *op = static_cast<vtkSparseArray<vtkUnicodeString> *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkIdType *tempr = (ap.IsBound() ?
      op->GetCoordinateStorage(temp0) :
      op->vtkSparseArray<vtkUnicodeString>::GetCoordinateStorage(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSparseArray_I16vtkUnicodeStringE_ReserveStorage(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReserveStorage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<vtkUnicodeString> *op = static_cast<vtkSparseArray<vtkUnicodeString> *>(vp);

  unsigned long long temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->ReserveStorage(temp0);
      }
    else
      {
      op->vtkSparseArray<vtkUnicodeString>::ReserveStorage(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSparseArray_I16vtkUnicodeStringE_SetExtentsFromContents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExtentsFromContents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<vtkUnicodeString> *op = static_cast<vtkSparseArray<vtkUnicodeString> *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetExtentsFromContents();
      }
    else
      {
      op->vtkSparseArray<vtkUnicodeString>::SetExtentsFromContents();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSparseArray_I16vtkUnicodeStringE_SetExtents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExtents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<vtkUnicodeString> *op = static_cast<vtkSparseArray<vtkUnicodeString> *>(vp);

  vtkArrayExtents *temp0 = NULL;
  PyObject *pobj0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkArrayExtents"))
    {
    if (ap.IsBound())
      {
      op->SetExtents(*temp0);
      }
    else
      {
      op->vtkSparseArray<vtkUnicodeString>::SetExtents(*temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  Py_XDECREF(pobj0);

  return result;
}


static PyObject *
PyvtkSparseArray_I16vtkUnicodeStringE_AddValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<vtkUnicodeString> *op = static_cast<vtkSparseArray<vtkUnicodeString> *>(vp);

  vtkIdType temp0;
  vtkUnicodeString temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->AddValue(temp0, temp1);
      }
    else
      {
      op->vtkSparseArray<vtkUnicodeString>::AddValue(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkSparseArray_I16vtkUnicodeStringE_AddValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<vtkUnicodeString> *op = static_cast<vtkSparseArray<vtkUnicodeString> *>(vp);

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
      op->AddValue(temp0, temp1, temp2);
      }
    else
      {
      op->vtkSparseArray<vtkUnicodeString>::AddValue(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkSparseArray_I16vtkUnicodeStringE_AddValue_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<vtkUnicodeString> *op = static_cast<vtkSparseArray<vtkUnicodeString> *>(vp);

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
      op->AddValue(temp0, temp1, temp2, temp3);
      }
    else
      {
      op->vtkSparseArray<vtkUnicodeString>::AddValue(temp0, temp1, temp2, temp3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkSparseArray_I16vtkUnicodeStringE_AddValue_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<vtkUnicodeString> *op = static_cast<vtkSparseArray<vtkUnicodeString> *>(vp);

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
      op->AddValue(*temp0, temp1);
      }
    else
      {
      op->vtkSparseArray<vtkUnicodeString>::AddValue(*temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkSparseArray_I16vtkUnicodeStringE_AddValue_Methods[] = {
  {NULL, PyvtkSparseArray_I16vtkUnicodeStringE_AddValue_s1, METH_VARARGS,
   (char*)"@LO unicode"},
  {NULL, PyvtkSparseArray_I16vtkUnicodeStringE_AddValue_s4, METH_VARARGS,
   (char*)"@OO &vtkArrayCoordinates unicode"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkSparseArray_I16vtkUnicodeStringE_AddValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkSparseArray_I16vtkUnicodeStringE_AddValue_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkSparseArray_I16vtkUnicodeStringE_AddValue_s2(self, args);
    case 4:
      return PyvtkSparseArray_I16vtkUnicodeStringE_AddValue_s3(self, args);
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "AddValue");
  return NULL;
}



static PyObject *
PyvtkSparseArray_I16vtkUnicodeStringE_Validate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Validate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<vtkUnicodeString> *op = static_cast<vtkSparseArray<vtkUnicodeString> *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->Validate() :
      op->vtkSparseArray<vtkUnicodeString>::Validate());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkSparseArray_I16vtkUnicodeStringE_Methods[] = {
  {(char*)"IsDense", PyvtkSparseArray_I16vtkUnicodeStringE_IsDense, METH_VARARGS,
   (char*)"V.IsDense() -> bool\nC++: bool IsDense()\n\n"},
  {(char*)"GetExtents", PyvtkSparseArray_I16vtkUnicodeStringE_GetExtents, METH_VARARGS,
   (char*)"V.GetExtents() -> vtkArrayExtents\nC++: const vtkArrayExtents &GetExtents()\n\n"},
  {(char*)"GetNonNullSize", PyvtkSparseArray_I16vtkUnicodeStringE_GetNonNullSize, METH_VARARGS,
   (char*)"V.GetNonNullSize() -> int\nC++: SizeT GetNonNullSize()\n\n"},
  {(char*)"GetCoordinatesN", PyvtkSparseArray_I16vtkUnicodeStringE_GetCoordinatesN, METH_VARARGS,
   (char*)"V.GetCoordinatesN(int, vtkArrayCoordinates)\nC++: void GetCoordinatesN(const SizeT n,\n    vtkArrayCoordinates &coordinates)\n\n"},
  {(char*)"DeepCopy", PyvtkSparseArray_I16vtkUnicodeStringE_DeepCopy, METH_VARARGS,
   (char*)"V.DeepCopy() -> vtkArray\nC++: vtkArray *DeepCopy()\n\n"},
  {(char*)"GetValue", PyvtkSparseArray_I16vtkUnicodeStringE_GetValue, METH_VARARGS,
   (char*)"V.GetValue(int) -> unicode\nC++: const vtkUnicodeString &GetValue(CoordinateT i)\nV.GetValue(int, int) -> unicode\nC++: const vtkUnicodeString &GetValue(CoordinateT i,\n    CoordinateT j)\nV.GetValue(int, int, int) -> unicode\nC++: const vtkUnicodeString &GetValue(CoordinateT i,\n    CoordinateT j, CoordinateT k)\nV.GetValue(vtkArrayCoordinates) -> unicode\nC++: const vtkUnicodeString &GetValue(\n    const vtkArrayCoordinates &coordinates)\n\n"},
  {(char*)"GetValueN", PyvtkSparseArray_I16vtkUnicodeStringE_GetValueN, METH_VARARGS,
   (char*)"V.GetValueN(int) -> unicode\nC++: const vtkUnicodeString &GetValueN(const SizeT n)\n\n"},
  {(char*)"SetValue", PyvtkSparseArray_I16vtkUnicodeStringE_SetValue, METH_VARARGS,
   (char*)"V.SetValue(int, unicode)\nC++: void SetValue(CoordinateT i, const vtkUnicodeString &value)\nV.SetValue(int, int, unicode)\nC++: void SetValue(CoordinateT i, CoordinateT j,\n    const vtkUnicodeString &value)\nV.SetValue(int, int, int, unicode)\nC++: void SetValue(CoordinateT i, CoordinateT j, CoordinateT k,\n    const vtkUnicodeString &value)\nV.SetValue(vtkArrayCoordinates, unicode)\nC++: void SetValue(const vtkArrayCoordinates &coordinates,\n    const vtkUnicodeString &value)\n\n"},
  {(char*)"SetValueN", PyvtkSparseArray_I16vtkUnicodeStringE_SetValueN, METH_VARARGS,
   (char*)"V.SetValueN(int, unicode)\nC++: void SetValueN(const SizeT n, const vtkUnicodeString &value)\n\n"},
  {(char*)"SetNullValue", PyvtkSparseArray_I16vtkUnicodeStringE_SetNullValue, METH_VARARGS,
   (char*)"V.SetNullValue(unicode)\nC++: void SetNullValue(const vtkUnicodeString &value)\n\nSet the value that will be returned by GetValue() for NULL areas\nof the array.\n"},
  {(char*)"GetNullValue", PyvtkSparseArray_I16vtkUnicodeStringE_GetNullValue, METH_VARARGS,
   (char*)"V.GetNullValue() -> unicode\nC++: const vtkUnicodeString &GetNullValue()\n\nReturns the value that will be returned by GetValue() for NULL\nareas of the array.\n"},
  {(char*)"Clear", PyvtkSparseArray_I16vtkUnicodeStringE_Clear, METH_VARARGS,
   (char*)"V.Clear()\nC++: void Clear()\n\nRemove all non-null elements from the array, leaving the number\nof dimensions, the extent of each dimension, and the label for\neach dimension unchanged.\n"},
  {(char*)"Sort", PyvtkSparseArray_I16vtkUnicodeStringE_Sort, METH_VARARGS,
   (char*)"V.Sort(vtkArraySort)\nC++: void Sort(const vtkArraySort &sort)\n\nSorts array values so that their coordinates appear in some\nwell-defined order. The supplied vtkArraySort object controls\nwhich dimensions are sorted, and in what order, and should\ncontain one-or-more sort dimensions, up to the number of\ndimensions stored in the array.\n"},
  {(char*)"GetCoordinateStorage", PyvtkSparseArray_I16vtkUnicodeStringE_GetCoordinateStorage, METH_VARARGS,
   (char*)"V.GetCoordinateStorage(int) -> (int, ...)\nC++: CoordinateT *GetCoordinateStorage(DimensionT dimension)\n\nReturn a mutable reference to the underlying coordinate storage. \nCoordinates for each dimension are stored contiguously as a\none-dimensional array.  The ordering of coordinates within the\narray depends on the order in which values were added to the\narray, and any subsequent sorting.  Use at your own risk!\n"},
  {(char*)"ReserveStorage", PyvtkSparseArray_I16vtkUnicodeStringE_ReserveStorage, METH_VARARGS,
   (char*)"V.ReserveStorage(int)\nC++: void ReserveStorage(const SizeT value_count)\n\nReserve storage for a specific number of values.  This is useful\nfor reading external data using GetCoordinateStorage() and\nGetValueStorage(), when the total number of non-NULL values in\nthe array can be determined in advance.  Note that after calling\nReserveStorage(), all coordinates and values will be undefined,\nso you must ensure that every set of coordinates and values is\noverwritten.  It is the caller's responsibility to ensure that\nduplicate coordinates are not inserted into the array.\n"},
  {(char*)"SetExtentsFromContents", PyvtkSparseArray_I16vtkUnicodeStringE_SetExtentsFromContents, METH_VARARGS,
   (char*)"V.SetExtentsFromContents()\nC++: void SetExtentsFromContents()\n\nUpdate the array extents to match its contents, so that the\nextent along each dimension matches the maximum index value along\nthat dimension.\n"},
  {(char*)"SetExtents", PyvtkSparseArray_I16vtkUnicodeStringE_SetExtents, METH_VARARGS,
   (char*)"V.SetExtents(vtkArrayExtents)\nC++: void SetExtents(const vtkArrayExtents &extents)\n\nSpecify arbitrary array extents, without altering the contents of\nthe array.  Note that the extents must be as-large-or-larger-than\nthe extents of the actual values stored in the array.  The number\nof dimensions in the supplied extents must match the number of\ndimensions currently stored in the array.\n"},
  {(char*)"AddValue", PyvtkSparseArray_I16vtkUnicodeStringE_AddValue, METH_VARARGS,
   (char*)"V.AddValue(int, unicode)\nC++: void AddValue(CoordinateT i, const vtkUnicodeString &value)\nV.AddValue(int, int, unicode)\nC++: void AddValue(CoordinateT i, CoordinateT j,\n    const vtkUnicodeString &value)\nV.AddValue(int, int, int, unicode)\nC++: void AddValue(CoordinateT i, CoordinateT j, CoordinateT k,\n    const vtkUnicodeString &value)\nV.AddValue(vtkArrayCoordinates, unicode)\nC++: void AddValue(const vtkArrayCoordinates &coordinates,\n    const vtkUnicodeString &value)\n\nAdds a new non-null element to the array.  Does not test to see\nif an element with matching coordinates already exists.  Useful\nfor providing fast initialization of the array as long as the\ncaller is prepared to guarantee that no duplicate coordinates are\never used.\n"},
  {(char*)"Validate", PyvtkSparseArray_I16vtkUnicodeStringE_Validate, METH_VARARGS,
   (char*)"V.Validate() -> bool\nC++: bool Validate()\n\nValidate the contents of the array, returning false if there are\nany problems. Potential problems include duplicate coordinates,\nwhich can be introduced into the array either through AddValue()\nor direct access to coordinates storage; and coordinates\nout-of-bounds given the current array extents.\n\nNote that Validate() is a heavyweight O(N log N) operation that\nis intended for temporary use during debugging.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkSparseArray_I16vtkUnicodeStringE_StaticNew()
{
  return vtkSparseArray<vtkUnicodeString>::New();
}

PyObject *PyVTKClass_vtkSparseArray_I16vtkUnicodeStringENew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkSparseArray_I16vtkUnicodeStringE_StaticNew,
    PyvtkSparseArray_I16vtkUnicodeStringE_Methods,
    typeid(vtkSparseArray<vtkUnicodeString>).name(), modulename,
    "vtkSparseArray_I16vtkUnicodeStringE", "vtkSparseArray_I16vtkUnicodeStringE",
    PyvtkSparseArray_I16vtkUnicodeStringE_Doc(),
    PyVTKClass_vtkTypedArray_I16vtkUnicodeStringENew(modulename));
  return cls;
}

const char **PyvtkSparseArray_I16vtkUnicodeStringE_Doc()
{
  static const char *docstring[] = {
    "vtkSparseArray - Sparse, independent coordinate storage for N-way\narrays.\n\n",
    "Superclass: vtkTypedArray[unicode]\n\n",
    "vtkSparseArray is a concrete vtkArray implementation that stores\nvalues using sparse independent coordinate storage.  This means that\nthe array stores the complete set of coordinates and the value for\neach non-null value in the array. While this approach requires\nslightly more storage than other sparse storage schemes (such as\nCompressed-Row or Compressed-Column), it is easier and more efficient\nt",
    "o work with when implementing algorithms, and  it generalizes well\nfor arbitrary numbers of dimensions.\n\nIn addition to the value retrieval and update methods provided by\nvtkTypedArray, vtkSparseArray provides methods to:\n\nGet and set a special 'null' value that will be returned when\nretrieving values for undefined coordinates.\n\nClear the contents of the array so that every set of coordinates is\nu",
    "ndefined.\n\nSort the array contents so that value coordinates can be visited in a\nspecific order.\n\nRetrieve pointers to the value- and coordinate-storage memory blocks.\n\nReserve storage for a specific number of non-null values, for\nefficiency when the number of non-null values is known in advance.\n\nRecompute the array extents so that they bound the largest set of\nnon-NULL values along each dimensio",
    "n.\n\nSpecify arbitrary array extents.\n\nAdd values to the array in amortized-constant time.\n\nValidate that the array does not contain duplicate coordinates.\n\nSee Also:\n\nvtkArray, vtkTypedArray, vtkDenseArray\n\nThanks:\n\nDeveloped by Timothy M. Shead (tshead@sandia.gov) at Sandia National\nLaboratories.\n\n",
    NULL
  };

  return docstring;
}

extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkSparseArray_I10vtkVariantENew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkTypedArray_I10vtkVariantENew
extern "C" { PyObject *PyVTKClass_vtkTypedArray_I10vtkVariantENew(const char *); }
#define DECLARED_PyVTKClass_vtkTypedArray_I10vtkVariantENew
#endif

static const char **PyvtkSparseArray_I10vtkVariantE_Doc();


static PyObject *
PyvtkSparseArray_I10vtkVariantE_IsDense(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsDense");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<vtkVariant> *op = static_cast<vtkSparseArray<vtkVariant> *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->IsDense() :
      op->vtkSparseArray<vtkVariant>::IsDense());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSparseArray_I10vtkVariantE_GetExtents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetExtents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<vtkVariant> *op = static_cast<vtkSparseArray<vtkVariant> *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const vtkArrayExtents *tempr = (ap.IsBound() ?
      &op->GetExtents() :
      &op->vtkSparseArray<vtkVariant>::GetExtents());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildSpecialObject(tempr, "vtkArrayExtents");
      }
    }

  return result;
}


static PyObject *
PyvtkSparseArray_I10vtkVariantE_GetNonNullSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNonNullSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<vtkVariant> *op = static_cast<vtkSparseArray<vtkVariant> *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned long long tempr = (ap.IsBound() ?
      op->GetNonNullSize() :
      op->vtkSparseArray<vtkVariant>::GetNonNullSize());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSparseArray_I10vtkVariantE_GetCoordinatesN(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCoordinatesN");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<vtkVariant> *op = static_cast<vtkSparseArray<vtkVariant> *>(vp);

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
      op->vtkSparseArray<vtkVariant>::GetCoordinatesN(temp0, *temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSparseArray_I10vtkVariantE_DeepCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeepCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<vtkVariant> *op = static_cast<vtkSparseArray<vtkVariant> *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkArray *tempr = (ap.IsBound() ?
      op->DeepCopy() :
      op->vtkSparseArray<vtkVariant>::DeepCopy());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSparseArray_I10vtkVariantE_GetValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<vtkVariant> *op = static_cast<vtkSparseArray<vtkVariant> *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    const vtkVariant *tempr = (ap.IsBound() ?
      &op->GetValue(temp0) :
      &op->vtkSparseArray<vtkVariant>::GetValue(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildSpecialObject(tempr, "vtkVariant");
      }
    }

  return result;
}

static PyObject *
PyvtkSparseArray_I10vtkVariantE_GetValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<vtkVariant> *op = static_cast<vtkSparseArray<vtkVariant> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    const vtkVariant *tempr = (ap.IsBound() ?
      &op->GetValue(temp0, temp1) :
      &op->vtkSparseArray<vtkVariant>::GetValue(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildSpecialObject(tempr, "vtkVariant");
      }
    }

  return result;
}

static PyObject *
PyvtkSparseArray_I10vtkVariantE_GetValue_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<vtkVariant> *op = static_cast<vtkSparseArray<vtkVariant> *>(vp);

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
      &op->vtkSparseArray<vtkVariant>::GetValue(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildSpecialObject(tempr, "vtkVariant");
      }
    }

  return result;
}

static PyObject *
PyvtkSparseArray_I10vtkVariantE_GetValue_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<vtkVariant> *op = static_cast<vtkSparseArray<vtkVariant> *>(vp);

  vtkArrayCoordinates *temp0 = NULL;
  PyObject *pobj0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkArrayCoordinates"))
    {
    const vtkVariant *tempr = (ap.IsBound() ?
      &op->GetValue(*temp0) :
      &op->vtkSparseArray<vtkVariant>::GetValue(*temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildSpecialObject(tempr, "vtkVariant");
      }
    }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkSparseArray_I10vtkVariantE_GetValue_Methods[] = {
  {NULL, PyvtkSparseArray_I10vtkVariantE_GetValue_s1, METH_VARARGS,
   (char*)"@L"},
  {NULL, PyvtkSparseArray_I10vtkVariantE_GetValue_s4, METH_VARARGS,
   (char*)"@O &vtkArrayCoordinates"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkSparseArray_I10vtkVariantE_GetValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkSparseArray_I10vtkVariantE_GetValue_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkSparseArray_I10vtkVariantE_GetValue_s2(self, args);
    case 3:
      return PyvtkSparseArray_I10vtkVariantE_GetValue_s3(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetValue");
  return NULL;
}



static PyObject *
PyvtkSparseArray_I10vtkVariantE_GetValueN(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValueN");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<vtkVariant> *op = static_cast<vtkSparseArray<vtkVariant> *>(vp);

  unsigned long long temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    const vtkVariant *tempr = (ap.IsBound() ?
      &op->GetValueN(temp0) :
      &op->vtkSparseArray<vtkVariant>::GetValueN(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildSpecialObject(tempr, "vtkVariant");
      }
    }

  return result;
}


static PyObject *
PyvtkSparseArray_I10vtkVariantE_SetValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<vtkVariant> *op = static_cast<vtkSparseArray<vtkVariant> *>(vp);

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
      op->vtkSparseArray<vtkVariant>::SetValue(temp0, *temp1);
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
PyvtkSparseArray_I10vtkVariantE_SetValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<vtkVariant> *op = static_cast<vtkSparseArray<vtkVariant> *>(vp);

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
      op->vtkSparseArray<vtkVariant>::SetValue(temp0, temp1, *temp2);
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
PyvtkSparseArray_I10vtkVariantE_SetValue_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<vtkVariant> *op = static_cast<vtkSparseArray<vtkVariant> *>(vp);

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
      op->vtkSparseArray<vtkVariant>::SetValue(temp0, temp1, temp2, *temp3);
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
PyvtkSparseArray_I10vtkVariantE_SetValue_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<vtkVariant> *op = static_cast<vtkSparseArray<vtkVariant> *>(vp);

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
      op->vtkSparseArray<vtkVariant>::SetValue(*temp0, *temp1);
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

static PyMethodDef PyvtkSparseArray_I10vtkVariantE_SetValue_Methods[] = {
  {NULL, PyvtkSparseArray_I10vtkVariantE_SetValue_s1, METH_VARARGS,
   (char*)"@LO &vtkVariant"},
  {NULL, PyvtkSparseArray_I10vtkVariantE_SetValue_s4, METH_VARARGS,
   (char*)"@OO &vtkArrayCoordinates &vtkVariant"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkSparseArray_I10vtkVariantE_SetValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkSparseArray_I10vtkVariantE_SetValue_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkSparseArray_I10vtkVariantE_SetValue_s2(self, args);
    case 4:
      return PyvtkSparseArray_I10vtkVariantE_SetValue_s3(self, args);
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetValue");
  return NULL;
}



static PyObject *
PyvtkSparseArray_I10vtkVariantE_SetValueN(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValueN");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<vtkVariant> *op = static_cast<vtkSparseArray<vtkVariant> *>(vp);

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
      op->vtkSparseArray<vtkVariant>::SetValueN(temp0, *temp1);
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
PyvtkSparseArray_I10vtkVariantE_SetNullValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNullValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<vtkVariant> *op = static_cast<vtkSparseArray<vtkVariant> *>(vp);

  vtkVariant *temp0 = NULL;
  PyObject *pobj0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkVariant"))
    {
    if (ap.IsBound())
      {
      op->SetNullValue(*temp0);
      }
    else
      {
      op->vtkSparseArray<vtkVariant>::SetNullValue(*temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  Py_XDECREF(pobj0);

  return result;
}


static PyObject *
PyvtkSparseArray_I10vtkVariantE_GetNullValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNullValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<vtkVariant> *op = static_cast<vtkSparseArray<vtkVariant> *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const vtkVariant *tempr = (ap.IsBound() ?
      &op->GetNullValue() :
      &op->vtkSparseArray<vtkVariant>::GetNullValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildSpecialObject(tempr, "vtkVariant");
      }
    }

  return result;
}


static PyObject *
PyvtkSparseArray_I10vtkVariantE_Clear(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Clear");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<vtkVariant> *op = static_cast<vtkSparseArray<vtkVariant> *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Clear();
      }
    else
      {
      op->vtkSparseArray<vtkVariant>::Clear();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSparseArray_I10vtkVariantE_Sort(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Sort");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<vtkVariant> *op = static_cast<vtkSparseArray<vtkVariant> *>(vp);

  vtkArraySort *temp0 = NULL;
  PyObject *pobj0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkArraySort"))
    {
    if (ap.IsBound())
      {
      op->Sort(*temp0);
      }
    else
      {
      op->vtkSparseArray<vtkVariant>::Sort(*temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  Py_XDECREF(pobj0);

  return result;
}


static PyObject *
PyvtkSparseArray_I10vtkVariantE_GetCoordinateStorage(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCoordinateStorage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<vtkVariant> *op = static_cast<vtkSparseArray<vtkVariant> *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkIdType *tempr = (ap.IsBound() ?
      op->GetCoordinateStorage(temp0) :
      op->vtkSparseArray<vtkVariant>::GetCoordinateStorage(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSparseArray_I10vtkVariantE_ReserveStorage(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReserveStorage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<vtkVariant> *op = static_cast<vtkSparseArray<vtkVariant> *>(vp);

  unsigned long long temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->ReserveStorage(temp0);
      }
    else
      {
      op->vtkSparseArray<vtkVariant>::ReserveStorage(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSparseArray_I10vtkVariantE_SetExtentsFromContents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExtentsFromContents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<vtkVariant> *op = static_cast<vtkSparseArray<vtkVariant> *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetExtentsFromContents();
      }
    else
      {
      op->vtkSparseArray<vtkVariant>::SetExtentsFromContents();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSparseArray_I10vtkVariantE_SetExtents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExtents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<vtkVariant> *op = static_cast<vtkSparseArray<vtkVariant> *>(vp);

  vtkArrayExtents *temp0 = NULL;
  PyObject *pobj0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkArrayExtents"))
    {
    if (ap.IsBound())
      {
      op->SetExtents(*temp0);
      }
    else
      {
      op->vtkSparseArray<vtkVariant>::SetExtents(*temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  Py_XDECREF(pobj0);

  return result;
}


static PyObject *
PyvtkSparseArray_I10vtkVariantE_AddValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<vtkVariant> *op = static_cast<vtkSparseArray<vtkVariant> *>(vp);

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
      op->AddValue(temp0, *temp1);
      }
    else
      {
      op->vtkSparseArray<vtkVariant>::AddValue(temp0, *temp1);
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
PyvtkSparseArray_I10vtkVariantE_AddValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<vtkVariant> *op = static_cast<vtkSparseArray<vtkVariant> *>(vp);

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
      op->AddValue(temp0, temp1, *temp2);
      }
    else
      {
      op->vtkSparseArray<vtkVariant>::AddValue(temp0, temp1, *temp2);
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
PyvtkSparseArray_I10vtkVariantE_AddValue_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<vtkVariant> *op = static_cast<vtkSparseArray<vtkVariant> *>(vp);

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
      op->AddValue(temp0, temp1, temp2, *temp3);
      }
    else
      {
      op->vtkSparseArray<vtkVariant>::AddValue(temp0, temp1, temp2, *temp3);
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
PyvtkSparseArray_I10vtkVariantE_AddValue_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<vtkVariant> *op = static_cast<vtkSparseArray<vtkVariant> *>(vp);

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
      op->AddValue(*temp0, *temp1);
      }
    else
      {
      op->vtkSparseArray<vtkVariant>::AddValue(*temp0, *temp1);
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

static PyMethodDef PyvtkSparseArray_I10vtkVariantE_AddValue_Methods[] = {
  {NULL, PyvtkSparseArray_I10vtkVariantE_AddValue_s1, METH_VARARGS,
   (char*)"@LO &vtkVariant"},
  {NULL, PyvtkSparseArray_I10vtkVariantE_AddValue_s4, METH_VARARGS,
   (char*)"@OO &vtkArrayCoordinates &vtkVariant"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkSparseArray_I10vtkVariantE_AddValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkSparseArray_I10vtkVariantE_AddValue_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkSparseArray_I10vtkVariantE_AddValue_s2(self, args);
    case 4:
      return PyvtkSparseArray_I10vtkVariantE_AddValue_s3(self, args);
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "AddValue");
  return NULL;
}



static PyObject *
PyvtkSparseArray_I10vtkVariantE_Validate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Validate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<vtkVariant> *op = static_cast<vtkSparseArray<vtkVariant> *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->Validate() :
      op->vtkSparseArray<vtkVariant>::Validate());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkSparseArray_I10vtkVariantE_Methods[] = {
  {(char*)"IsDense", PyvtkSparseArray_I10vtkVariantE_IsDense, METH_VARARGS,
   (char*)"V.IsDense() -> bool\nC++: bool IsDense()\n\n"},
  {(char*)"GetExtents", PyvtkSparseArray_I10vtkVariantE_GetExtents, METH_VARARGS,
   (char*)"V.GetExtents() -> vtkArrayExtents\nC++: const vtkArrayExtents &GetExtents()\n\n"},
  {(char*)"GetNonNullSize", PyvtkSparseArray_I10vtkVariantE_GetNonNullSize, METH_VARARGS,
   (char*)"V.GetNonNullSize() -> int\nC++: SizeT GetNonNullSize()\n\n"},
  {(char*)"GetCoordinatesN", PyvtkSparseArray_I10vtkVariantE_GetCoordinatesN, METH_VARARGS,
   (char*)"V.GetCoordinatesN(int, vtkArrayCoordinates)\nC++: void GetCoordinatesN(const SizeT n,\n    vtkArrayCoordinates &coordinates)\n\n"},
  {(char*)"DeepCopy", PyvtkSparseArray_I10vtkVariantE_DeepCopy, METH_VARARGS,
   (char*)"V.DeepCopy() -> vtkArray\nC++: vtkArray *DeepCopy()\n\n"},
  {(char*)"GetValue", PyvtkSparseArray_I10vtkVariantE_GetValue, METH_VARARGS,
   (char*)"V.GetValue(int) -> vtkVariant\nC++: const vtkVariant &GetValue(CoordinateT i)\nV.GetValue(int, int) -> vtkVariant\nC++: const vtkVariant &GetValue(CoordinateT i, CoordinateT j)\nV.GetValue(int, int, int) -> vtkVariant\nC++: const vtkVariant &GetValue(CoordinateT i, CoordinateT j,\n    CoordinateT k)\nV.GetValue(vtkArrayCoordinates) -> vtkVariant\nC++: const vtkVariant &GetValue(\n    const vtkArrayCoordinates &coordinates)\n\n"},
  {(char*)"GetValueN", PyvtkSparseArray_I10vtkVariantE_GetValueN, METH_VARARGS,
   (char*)"V.GetValueN(int) -> vtkVariant\nC++: const vtkVariant &GetValueN(const SizeT n)\n\n"},
  {(char*)"SetValue", PyvtkSparseArray_I10vtkVariantE_SetValue, METH_VARARGS,
   (char*)"V.SetValue(int, vtkVariant)\nC++: void SetValue(CoordinateT i, const vtkVariant &value)\nV.SetValue(int, int, vtkVariant)\nC++: void SetValue(CoordinateT i, CoordinateT j,\n    const vtkVariant &value)\nV.SetValue(int, int, int, vtkVariant)\nC++: void SetValue(CoordinateT i, CoordinateT j, CoordinateT k,\n    const vtkVariant &value)\nV.SetValue(vtkArrayCoordinates, vtkVariant)\nC++: void SetValue(const vtkArrayCoordinates &coordinates,\n    const vtkVariant &value)\n\n"},
  {(char*)"SetValueN", PyvtkSparseArray_I10vtkVariantE_SetValueN, METH_VARARGS,
   (char*)"V.SetValueN(int, vtkVariant)\nC++: void SetValueN(const SizeT n, const vtkVariant &value)\n\n"},
  {(char*)"SetNullValue", PyvtkSparseArray_I10vtkVariantE_SetNullValue, METH_VARARGS,
   (char*)"V.SetNullValue(vtkVariant)\nC++: void SetNullValue(const vtkVariant &value)\n\nSet the value that will be returned by GetValue() for NULL areas\nof the array.\n"},
  {(char*)"GetNullValue", PyvtkSparseArray_I10vtkVariantE_GetNullValue, METH_VARARGS,
   (char*)"V.GetNullValue() -> vtkVariant\nC++: const vtkVariant &GetNullValue()\n\nReturns the value that will be returned by GetValue() for NULL\nareas of the array.\n"},
  {(char*)"Clear", PyvtkSparseArray_I10vtkVariantE_Clear, METH_VARARGS,
   (char*)"V.Clear()\nC++: void Clear()\n\nRemove all non-null elements from the array, leaving the number\nof dimensions, the extent of each dimension, and the label for\neach dimension unchanged.\n"},
  {(char*)"Sort", PyvtkSparseArray_I10vtkVariantE_Sort, METH_VARARGS,
   (char*)"V.Sort(vtkArraySort)\nC++: void Sort(const vtkArraySort &sort)\n\nSorts array values so that their coordinates appear in some\nwell-defined order. The supplied vtkArraySort object controls\nwhich dimensions are sorted, and in what order, and should\ncontain one-or-more sort dimensions, up to the number of\ndimensions stored in the array.\n"},
  {(char*)"GetCoordinateStorage", PyvtkSparseArray_I10vtkVariantE_GetCoordinateStorage, METH_VARARGS,
   (char*)"V.GetCoordinateStorage(int) -> (int, ...)\nC++: CoordinateT *GetCoordinateStorage(DimensionT dimension)\n\nReturn a mutable reference to the underlying coordinate storage. \nCoordinates for each dimension are stored contiguously as a\none-dimensional array.  The ordering of coordinates within the\narray depends on the order in which values were added to the\narray, and any subsequent sorting.  Use at your own risk!\n"},
  {(char*)"ReserveStorage", PyvtkSparseArray_I10vtkVariantE_ReserveStorage, METH_VARARGS,
   (char*)"V.ReserveStorage(int)\nC++: void ReserveStorage(const SizeT value_count)\n\nReserve storage for a specific number of values.  This is useful\nfor reading external data using GetCoordinateStorage() and\nGetValueStorage(), when the total number of non-NULL values in\nthe array can be determined in advance.  Note that after calling\nReserveStorage(), all coordinates and values will be undefined,\nso you must ensure that every set of coordinates and values is\noverwritten.  It is the caller's responsibility to ensure that\nduplicate coordinates are not inserted into the array.\n"},
  {(char*)"SetExtentsFromContents", PyvtkSparseArray_I10vtkVariantE_SetExtentsFromContents, METH_VARARGS,
   (char*)"V.SetExtentsFromContents()\nC++: void SetExtentsFromContents()\n\nUpdate the array extents to match its contents, so that the\nextent along each dimension matches the maximum index value along\nthat dimension.\n"},
  {(char*)"SetExtents", PyvtkSparseArray_I10vtkVariantE_SetExtents, METH_VARARGS,
   (char*)"V.SetExtents(vtkArrayExtents)\nC++: void SetExtents(const vtkArrayExtents &extents)\n\nSpecify arbitrary array extents, without altering the contents of\nthe array.  Note that the extents must be as-large-or-larger-than\nthe extents of the actual values stored in the array.  The number\nof dimensions in the supplied extents must match the number of\ndimensions currently stored in the array.\n"},
  {(char*)"AddValue", PyvtkSparseArray_I10vtkVariantE_AddValue, METH_VARARGS,
   (char*)"V.AddValue(int, vtkVariant)\nC++: void AddValue(CoordinateT i, const vtkVariant &value)\nV.AddValue(int, int, vtkVariant)\nC++: void AddValue(CoordinateT i, CoordinateT j,\n    const vtkVariant &value)\nV.AddValue(int, int, int, vtkVariant)\nC++: void AddValue(CoordinateT i, CoordinateT j, CoordinateT k,\n    const vtkVariant &value)\nV.AddValue(vtkArrayCoordinates, vtkVariant)\nC++: void AddValue(const vtkArrayCoordinates &coordinates,\n    const vtkVariant &value)\n\nAdds a new non-null element to the array.  Does not test to see\nif an element with matching coordinates already exists.  Useful\nfor providing fast initialization of the array as long as the\ncaller is prepared to guarantee that no duplicate coordinates are\never used.\n"},
  {(char*)"Validate", PyvtkSparseArray_I10vtkVariantE_Validate, METH_VARARGS,
   (char*)"V.Validate() -> bool\nC++: bool Validate()\n\nValidate the contents of the array, returning false if there are\nany problems. Potential problems include duplicate coordinates,\nwhich can be introduced into the array either through AddValue()\nor direct access to coordinates storage; and coordinates\nout-of-bounds given the current array extents.\n\nNote that Validate() is a heavyweight O(N log N) operation that\nis intended for temporary use during debugging.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkSparseArray_I10vtkVariantE_StaticNew()
{
  return vtkSparseArray<vtkVariant>::New();
}

PyObject *PyVTKClass_vtkSparseArray_I10vtkVariantENew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkSparseArray_I10vtkVariantE_StaticNew,
    PyvtkSparseArray_I10vtkVariantE_Methods,
    typeid(vtkSparseArray<vtkVariant>).name(), modulename,
    "vtkSparseArray_I10vtkVariantE", "vtkSparseArray_I10vtkVariantE",
    PyvtkSparseArray_I10vtkVariantE_Doc(),
    PyVTKClass_vtkTypedArray_I10vtkVariantENew(modulename));
  return cls;
}

const char **PyvtkSparseArray_I10vtkVariantE_Doc()
{
  static const char *docstring[] = {
    "vtkSparseArray - Sparse, independent coordinate storage for N-way\narrays.\n\n",
    "Superclass: vtkTypedArray[vtkVariant]\n\n",
    "vtkSparseArray is a concrete vtkArray implementation that stores\nvalues using sparse independent coordinate storage.  This means that\nthe array stores the complete set of coordinates and the value for\neach non-null value in the array. While this approach requires\nslightly more storage than other sparse storage schemes (such as\nCompressed-Row or Compressed-Column), it is easier and more efficient\nt",
    "o work with when implementing algorithms, and  it generalizes well\nfor arbitrary numbers of dimensions.\n\nIn addition to the value retrieval and update methods provided by\nvtkTypedArray, vtkSparseArray provides methods to:\n\nGet and set a special 'null' value that will be returned when\nretrieving values for undefined coordinates.\n\nClear the contents of the array so that every set of coordinates is\nu",
    "ndefined.\n\nSort the array contents so that value coordinates can be visited in a\nspecific order.\n\nRetrieve pointers to the value- and coordinate-storage memory blocks.\n\nReserve storage for a specific number of non-null values, for\nefficiency when the number of non-null values is known in advance.\n\nRecompute the array extents so that they bound the largest set of\nnon-NULL values along each dimensio",
    "n.\n\nSpecify arbitrary array extents.\n\nAdd values to the array in amortized-constant time.\n\nValidate that the array does not contain duplicate coordinates.\n\nSee Also:\n\nvtkArray, vtkTypedArray, vtkDenseArray\n\nThanks:\n\nDeveloped by Timothy M. Shead (tshead@sandia.gov) at Sandia National\nLaboratories.\n\n",
    NULL
  };

  return docstring;
}

static const char *PyvtkSparseArray_Doc[] = {
    "vtkSparseArray - Sparse, independent coordinate storage for N-way\narrays.\n\n",
    "Superclass: vtkTypedArray[T]\n\n",
    "vtkSparseArray is a concrete vtkArray implementation that stores\nvalues using sparse independent coordinate storage.  This means that\nthe array stores the complete set of coordinates and the value for\neach non-null value in the array. While this approach requires\nslightly more storage than other sparse storage schemes (such as\nCompressed-Row or Compressed-Column), it is easier and more efficient\nt",
    "o work with when implementing algorithms, and  it generalizes well\nfor arbitrary numbers of dimensions.\n\nIn addition to the value retrieval and update methods provided by\nvtkTypedArray, vtkSparseArray provides methods to:\n\nGet and set a special 'null' value that will be returned when\nretrieving values for undefined coordinates.\n\nClear the contents of the array so that every set of coordinates is\nu",
    "ndefined.\n\nSort the array contents so that value coordinates can be visited in a\nspecific order.\n\nRetrieve pointers to the value- and coordinate-storage memory blocks.\n\nReserve storage for a specific number of non-null values, for\nefficiency when the number of non-null values is known in advance.\n\nRecompute the array extents so that they bound the largest set of\nnon-NULL values along each dimensio",
    "n.\n\nSpecify arbitrary array extents.\n\nAdd values to the array in amortized-constant time.\n\nValidate that the array does not contain duplicate coordinates.\n\nSee Also:\n\nvtkArray, vtkTypedArray, vtkDenseArray\n\nThanks:\n\nDeveloped by Timothy M. Shead (tshead@sandia.gov) at Sandia National\nLaboratories.\n\n",
    "\nProvided Types:\n\n",
    "  vtkSparseArray[char] => vtkSparseArray<char>\n",
    "  vtkSparseArray[int8] => vtkSparseArray<signed char>\n",
    "  vtkSparseArray[uint8] => vtkSparseArray<unsigned char>\n",
    "  vtkSparseArray[int16] => vtkSparseArray<short>\n",
    "  vtkSparseArray[uint16] => vtkSparseArray<unsigned short>\n",
    "  vtkSparseArray[int32] => vtkSparseArray<int>\n",
    "  vtkSparseArray[uint32] => vtkSparseArray<unsigned int>\n",
    "  vtkSparseArray[int] => vtkSparseArray<long>\n",
    "  vtkSparseArray[uint] => vtkSparseArray<unsigned long>\n",
    "  vtkSparseArray[int64] => vtkSparseArray<long long>\n",
    "  vtkSparseArray[uint64] => vtkSparseArray<unsigned long long>\n",
    "  vtkSparseArray[float32] => vtkSparseArray<float>\n",
    "  vtkSparseArray[float64] => vtkSparseArray<double>\n",
    "  vtkSparseArray[str] => vtkSparseArray<vtkStdString>\n",
    "  vtkSparseArray[unicode] => vtkSparseArray<vtkUnicodeString>\n",
    "  vtkSparseArray[vtkVariant] => vtkSparseArray<vtkVariant>\n",
    NULL
};

PyObject *PyvtkSparseArray_TemplateNew(const char *modulename)
{
  PyObject *o;

  PyObject *temp = PyVTKTemplate_New("vtkSparseArray", modulename,
                                     PyvtkSparseArray_Doc);

  o = PyVTKClass_vtkSparseArray_IcENew(modulename);
  if (o && PyVTKTemplate_AddItem(temp, o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyVTKClass_vtkSparseArray_IaENew(modulename);
  if (o && PyVTKTemplate_AddItem(temp, o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyVTKClass_vtkSparseArray_IhENew(modulename);
  if (o && PyVTKTemplate_AddItem(temp, o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyVTKClass_vtkSparseArray_IsENew(modulename);
  if (o && PyVTKTemplate_AddItem(temp, o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyVTKClass_vtkSparseArray_ItENew(modulename);
  if (o && PyVTKTemplate_AddItem(temp, o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyVTKClass_vtkSparseArray_IiENew(modulename);
  if (o && PyVTKTemplate_AddItem(temp, o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyVTKClass_vtkSparseArray_IjENew(modulename);
  if (o && PyVTKTemplate_AddItem(temp, o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyVTKClass_vtkSparseArray_IlENew(modulename);
  if (o && PyVTKTemplate_AddItem(temp, o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyVTKClass_vtkSparseArray_ImENew(modulename);
  if (o && PyVTKTemplate_AddItem(temp, o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyVTKClass_vtkSparseArray_IxENew(modulename);
  if (o && PyVTKTemplate_AddItem(temp, o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyVTKClass_vtkSparseArray_IyENew(modulename);
  if (o && PyVTKTemplate_AddItem(temp, o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyVTKClass_vtkSparseArray_IfENew(modulename);
  if (o && PyVTKTemplate_AddItem(temp, o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyVTKClass_vtkSparseArray_IdENew(modulename);
  if (o && PyVTKTemplate_AddItem(temp, o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyVTKClass_vtkSparseArray_I12vtkStdStringENew(modulename);
  if (o && PyVTKTemplate_AddItem(temp, o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyVTKClass_vtkSparseArray_I16vtkUnicodeStringENew(modulename);
  if (o && PyVTKTemplate_AddItem(temp, o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyVTKClass_vtkSparseArray_I10vtkVariantENew(modulename);
  if (o && PyVTKTemplate_AddItem(temp, o) != 0)
    {
    Py_DECREF(o);
    }

  return temp;
}

void PyVTKAddFile_vtkSparseArray(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyvtkSparseArray_TemplateNew(modulename);

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

  if (o && PyDict_SetItemString(dict, (char *)"vtkSparseArray", o) != 0)
    {
    Py_DECREF(o);
    }

}

