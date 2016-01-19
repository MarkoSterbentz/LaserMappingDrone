// python wrapper for vtkTypedArray
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkArrayCoordinates.h"
#include "vtkTypedArray.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkTypedArray(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkTypedArray_IcENew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkArrayNew
extern "C" { PyObject *PyVTKClass_vtkArrayNew(const char *); }
#define DECLARED_PyVTKClass_vtkArrayNew
#endif

static const char **PyvtkTypedArray_IcE_Doc();


static PyObject *
PyvtkTypedArray_IcE_GetVariantValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVariantValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<char> *op = static_cast<vtkTypedArray<char> *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkVariant tempr = (ap.IsBound() ?
      op->GetVariantValue(temp0) :
      op->vtkTypedArray<char>::GetVariantValue(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildSpecialObject(&tempr, "vtkVariant");
      }
    }

  return result;
}

static PyObject *
PyvtkTypedArray_IcE_GetVariantValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVariantValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<char> *op = static_cast<vtkTypedArray<char> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    vtkVariant tempr = (ap.IsBound() ?
      op->GetVariantValue(temp0, temp1) :
      op->vtkTypedArray<char>::GetVariantValue(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildSpecialObject(&tempr, "vtkVariant");
      }
    }

  return result;
}

static PyObject *
PyvtkTypedArray_IcE_GetVariantValue_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVariantValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<char> *op = static_cast<vtkTypedArray<char> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  vtkIdType temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    vtkVariant tempr = (ap.IsBound() ?
      op->GetVariantValue(temp0, temp1, temp2) :
      op->vtkTypedArray<char>::GetVariantValue(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildSpecialObject(&tempr, "vtkVariant");
      }
    }

  return result;
}

static PyObject *
PyvtkTypedArray_IcE_GetVariantValue_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVariantValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<char> *op = static_cast<vtkTypedArray<char> *>(vp);

  vtkArrayCoordinates *temp0 = NULL;
  PyObject *pobj0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkArrayCoordinates"))
    {
    vtkVariant tempr = (ap.IsBound() ?
      op->GetVariantValue(*temp0) :
      op->vtkTypedArray<char>::GetVariantValue(*temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildSpecialObject(&tempr, "vtkVariant");
      }
    }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkTypedArray_IcE_GetVariantValue_Methods[] = {
  {NULL, PyvtkTypedArray_IcE_GetVariantValue_s1, METH_VARARGS,
   (char*)"@L"},
  {NULL, PyvtkTypedArray_IcE_GetVariantValue_s4, METH_VARARGS,
   (char*)"@O &vtkArrayCoordinates"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkTypedArray_IcE_GetVariantValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkTypedArray_IcE_GetVariantValue_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkTypedArray_IcE_GetVariantValue_s2(self, args);
    case 3:
      return PyvtkTypedArray_IcE_GetVariantValue_s3(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetVariantValue");
  return NULL;
}



static PyObject *
PyvtkTypedArray_IcE_SetVariantValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVariantValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<char> *op = static_cast<vtkTypedArray<char> *>(vp);

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
      op->SetVariantValue(temp0, *temp1);
      }
    else
      {
      op->vtkTypedArray<char>::SetVariantValue(temp0, *temp1);
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
PyvtkTypedArray_IcE_SetVariantValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVariantValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<char> *op = static_cast<vtkTypedArray<char> *>(vp);

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
      op->SetVariantValue(temp0, temp1, *temp2);
      }
    else
      {
      op->vtkTypedArray<char>::SetVariantValue(temp0, temp1, *temp2);
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
PyvtkTypedArray_IcE_SetVariantValue_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVariantValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<char> *op = static_cast<vtkTypedArray<char> *>(vp);

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
      op->SetVariantValue(temp0, temp1, temp2, *temp3);
      }
    else
      {
      op->vtkTypedArray<char>::SetVariantValue(temp0, temp1, temp2, *temp3);
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
PyvtkTypedArray_IcE_SetVariantValue_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVariantValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<char> *op = static_cast<vtkTypedArray<char> *>(vp);

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
      op->SetVariantValue(*temp0, *temp1);
      }
    else
      {
      op->vtkTypedArray<char>::SetVariantValue(*temp0, *temp1);
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

static PyMethodDef PyvtkTypedArray_IcE_SetVariantValue_Methods[] = {
  {NULL, PyvtkTypedArray_IcE_SetVariantValue_s1, METH_VARARGS,
   (char*)"@LO &vtkVariant"},
  {NULL, PyvtkTypedArray_IcE_SetVariantValue_s4, METH_VARARGS,
   (char*)"@OO &vtkArrayCoordinates &vtkVariant"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkTypedArray_IcE_SetVariantValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkTypedArray_IcE_SetVariantValue_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkTypedArray_IcE_SetVariantValue_s2(self, args);
    case 4:
      return PyvtkTypedArray_IcE_SetVariantValue_s3(self, args);
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetVariantValue");
  return NULL;
}



static PyObject *
PyvtkTypedArray_IcE_GetVariantValueN(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVariantValueN");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<char> *op = static_cast<vtkTypedArray<char> *>(vp);

  unsigned long long temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkVariant tempr = (ap.IsBound() ?
      op->GetVariantValueN(temp0) :
      op->vtkTypedArray<char>::GetVariantValueN(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildSpecialObject(&tempr, "vtkVariant");
      }
    }

  return result;
}


static PyObject *
PyvtkTypedArray_IcE_SetVariantValueN(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVariantValueN");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<char> *op = static_cast<vtkTypedArray<char> *>(vp);

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
      op->SetVariantValueN(temp0, *temp1);
      }
    else
      {
      op->vtkTypedArray<char>::SetVariantValueN(temp0, *temp1);
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
PyvtkTypedArray_IcE_CopyValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<char> *op = static_cast<vtkTypedArray<char> *>(vp);

  vtkArray *temp0 = NULL;
  vtkArrayCoordinates *temp1 = NULL;
  PyObject *pobj1 = NULL;
  vtkArrayCoordinates *temp2 = NULL;
  PyObject *pobj2 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkArray") &&
      ap.GetSpecialObject(temp1, pobj1, "vtkArrayCoordinates") &&
      ap.GetSpecialObject(temp2, pobj2, "vtkArrayCoordinates"))
    {
    if (ap.IsBound())
      {
      op->CopyValue(temp0, *temp1, *temp2);
      }
    else
      {
      op->vtkTypedArray<char>::CopyValue(temp0, *temp1, *temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  Py_XDECREF(pobj1);
  Py_XDECREF(pobj2);

  return result;
}

static PyObject *
PyvtkTypedArray_IcE_CopyValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<char> *op = static_cast<vtkTypedArray<char> *>(vp);

  vtkArray *temp0 = NULL;
  unsigned long long temp1;
  vtkArrayCoordinates *temp2 = NULL;
  PyObject *pobj2 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkArray") &&
      ap.GetValue(temp1) &&
      ap.GetSpecialObject(temp2, pobj2, "vtkArrayCoordinates"))
    {
    if (ap.IsBound())
      {
      op->CopyValue(temp0, temp1, *temp2);
      }
    else
      {
      op->vtkTypedArray<char>::CopyValue(temp0, temp1, *temp2);
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
PyvtkTypedArray_IcE_CopyValue_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<char> *op = static_cast<vtkTypedArray<char> *>(vp);

  vtkArray *temp0 = NULL;
  vtkArrayCoordinates *temp1 = NULL;
  PyObject *pobj1 = NULL;
  unsigned long long temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkArray") &&
      ap.GetSpecialObject(temp1, pobj1, "vtkArrayCoordinates") &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      op->CopyValue(temp0, *temp1, temp2);
      }
    else
      {
      op->vtkTypedArray<char>::CopyValue(temp0, *temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  Py_XDECREF(pobj1);

  return result;
}

static PyMethodDef PyvtkTypedArray_IcE_CopyValue_Methods[] = {
  {NULL, PyvtkTypedArray_IcE_CopyValue_s1, METH_VARARGS,
   (char*)"@OOO *vtkArray &vtkArrayCoordinates &vtkArrayCoordinates"},
  {NULL, PyvtkTypedArray_IcE_CopyValue_s2, METH_VARARGS,
   (char*)"@OKO *vtkArray &vtkArrayCoordinates"},
  {NULL, PyvtkTypedArray_IcE_CopyValue_s3, METH_VARARGS,
   (char*)"@OOK *vtkArray &vtkArrayCoordinates"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkTypedArray_IcE_CopyValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkTypedArray_IcE_CopyValue_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "CopyValue");
  return NULL;
}



static PyObject *
PyvtkTypedArray_IcE_GetValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<char> *op = static_cast<vtkTypedArray<char> *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    const char *tempr = &op->GetValue(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(*tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkTypedArray_IcE_GetValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<char> *op = static_cast<vtkTypedArray<char> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    const char *tempr = &op->GetValue(temp0, temp1);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(*tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkTypedArray_IcE_GetValue_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<char> *op = static_cast<vtkTypedArray<char> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  vtkIdType temp2;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    const char *tempr = &op->GetValue(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(*tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkTypedArray_IcE_GetValue_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<char> *op = static_cast<vtkTypedArray<char> *>(vp);

  vtkArrayCoordinates *temp0 = NULL;
  PyObject *pobj0 = NULL;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkArrayCoordinates"))
    {
    const char *tempr = &op->GetValue(*temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(*tempr);
      }
    }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkTypedArray_IcE_GetValue_Methods[] = {
  {NULL, PyvtkTypedArray_IcE_GetValue_s1, METH_VARARGS,
   (char*)"@L"},
  {NULL, PyvtkTypedArray_IcE_GetValue_s4, METH_VARARGS,
   (char*)"@O &vtkArrayCoordinates"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkTypedArray_IcE_GetValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkTypedArray_IcE_GetValue_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkTypedArray_IcE_GetValue_s2(self, args);
    case 3:
      return PyvtkTypedArray_IcE_GetValue_s3(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetValue");
  return NULL;
}



static PyObject *
PyvtkTypedArray_IcE_GetValueN(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValueN");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<char> *op = static_cast<vtkTypedArray<char> *>(vp);

  unsigned long long temp0;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    const char *tempr = &op->GetValueN(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(*tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTypedArray_IcE_SetValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<char> *op = static_cast<vtkTypedArray<char> *>(vp);

  vtkIdType temp0;
  char temp1;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    op->SetValue(temp0, temp1);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkTypedArray_IcE_SetValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<char> *op = static_cast<vtkTypedArray<char> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  char temp2;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    op->SetValue(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkTypedArray_IcE_SetValue_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<char> *op = static_cast<vtkTypedArray<char> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  vtkIdType temp2;
  char temp3;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
    {
    op->SetValue(temp0, temp1, temp2, temp3);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkTypedArray_IcE_SetValue_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<char> *op = static_cast<vtkTypedArray<char> *>(vp);

  vtkArrayCoordinates *temp0 = NULL;
  PyObject *pobj0 = NULL;
  char temp1;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(2) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkArrayCoordinates") &&
      ap.GetValue(temp1))
    {
    op->SetValue(*temp0, temp1);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkTypedArray_IcE_SetValue_Methods[] = {
  {NULL, PyvtkTypedArray_IcE_SetValue_s1, METH_VARARGS,
   (char*)"@Lc"},
  {NULL, PyvtkTypedArray_IcE_SetValue_s4, METH_VARARGS,
   (char*)"@Oc &vtkArrayCoordinates"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkTypedArray_IcE_SetValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkTypedArray_IcE_SetValue_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkTypedArray_IcE_SetValue_s2(self, args);
    case 4:
      return PyvtkTypedArray_IcE_SetValue_s3(self, args);
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetValue");
  return NULL;
}



static PyObject *
PyvtkTypedArray_IcE_SetValueN(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValueN");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<char> *op = static_cast<vtkTypedArray<char> *>(vp);

  unsigned long long temp0;
  char temp1;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    op->SetValueN(temp0, temp1);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkTypedArray_IcE_Methods[] = {
  {(char*)"GetVariantValue", PyvtkTypedArray_IcE_GetVariantValue, METH_VARARGS,
   (char*)"V.GetVariantValue(int) -> vtkVariant\nC++: vtkVariant GetVariantValue(vtkIdType i)\nV.GetVariantValue(int, int) -> vtkVariant\nC++: vtkVariant GetVariantValue(vtkIdType i, vtkIdType j)\nV.GetVariantValue(int, int, int) -> vtkVariant\nC++: vtkVariant GetVariantValue(vtkIdType i, vtkIdType j,\n    vtkIdType k)\nV.GetVariantValue(vtkArrayCoordinates) -> vtkVariant\nC++: virtual vtkVariant GetVariantValue(\n    const vtkArrayCoordinates &coordinates)\n\n"},
  {(char*)"SetVariantValue", PyvtkTypedArray_IcE_SetVariantValue, METH_VARARGS,
   (char*)"V.SetVariantValue(int, vtkVariant)\nC++: void SetVariantValue(vtkIdType i, const vtkVariant &value)\nV.SetVariantValue(int, int, vtkVariant)\nC++: void SetVariantValue(vtkIdType i, vtkIdType j,\n    const vtkVariant &value)\nV.SetVariantValue(int, int, int, vtkVariant)\nC++: void SetVariantValue(vtkIdType i, vtkIdType j, vtkIdType k,\n    const vtkVariant &value)\nV.SetVariantValue(vtkArrayCoordinates, vtkVariant)\nC++: virtual void SetVariantValue(\n    const vtkArrayCoordinates &coordinates,\n    const vtkVariant &value)\n\n"},
  {(char*)"GetVariantValueN", PyvtkTypedArray_IcE_GetVariantValueN, METH_VARARGS,
   (char*)"V.GetVariantValueN(int) -> vtkVariant\nC++: virtual vtkVariant GetVariantValueN(const SizeT n)\n\n"},
  {(char*)"SetVariantValueN", PyvtkTypedArray_IcE_SetVariantValueN, METH_VARARGS,
   (char*)"V.SetVariantValueN(int, vtkVariant)\nC++: virtual void SetVariantValueN(const SizeT n,\n    const vtkVariant &value)\n\n"},
  {(char*)"CopyValue", PyvtkTypedArray_IcE_CopyValue, METH_VARARGS,
   (char*)"V.CopyValue(vtkArray, vtkArrayCoordinates, vtkArrayCoordinates)\nC++: virtual void CopyValue(vtkArray *source,\n    const vtkArrayCoordinates &source_coordinates,\n    const vtkArrayCoordinates &target_coordinates)\nV.CopyValue(vtkArray, int, vtkArrayCoordinates)\nC++: virtual void CopyValue(vtkArray *source,\n    const SizeT source_index,\n    const vtkArrayCoordinates &target_coordinates)\nV.CopyValue(vtkArray, vtkArrayCoordinates, int)\nC++: virtual void CopyValue(vtkArray *source,\n    const vtkArrayCoordinates &source_coordinates,\n    const SizeT target_index)\n\n"},
  {(char*)"GetValue", PyvtkTypedArray_IcE_GetValue, METH_VARARGS,
   (char*)"V.GetValue(int) -> char\nC++: virtual const char &GetValue(CoordinateT i)\nV.GetValue(int, int) -> char\nC++: virtual const char &GetValue(CoordinateT i, CoordinateT j)\nV.GetValue(int, int, int) -> char\nC++: virtual const char &GetValue(CoordinateT i, CoordinateT j,\n    CoordinateT k)\nV.GetValue(vtkArrayCoordinates) -> char\nC++: virtual const char &GetValue(\n    const vtkArrayCoordinates &coordinates)\n\nReturns the value stored in the array at the given coordinates.\nNote that the number of dimensions in the supplied coordinates\nmust match the number of dimensions in the array.\n"},
  {(char*)"GetValueN", PyvtkTypedArray_IcE_GetValueN, METH_VARARGS,
   (char*)"V.GetValueN(int) -> char\nC++: virtual const char &GetValueN(const SizeT n)\n\nReturns the n-th value stored in the array, where n is in the\nrange [0, GetNonNullSize()).  This is useful for efficiently\nvisiting every value in the array.  Note that the order in which\nvalues are visited is undefined, but is guaranteed to match the\norder used by vtkArray::GetCoordinatesN().\n"},
  {(char*)"SetValue", PyvtkTypedArray_IcE_SetValue, METH_VARARGS,
   (char*)"V.SetValue(int, char)\nC++: virtual void SetValue(CoordinateT i, const char &value)\nV.SetValue(int, int, char)\nC++: virtual void SetValue(CoordinateT i, CoordinateT j,\n    const char &value)\nV.SetValue(int, int, int, char)\nC++: virtual void SetValue(CoordinateT i, CoordinateT j,\n    CoordinateT k, const char &value)\nV.SetValue(vtkArrayCoordinates, char)\nC++: virtual void SetValue(const vtkArrayCoordinates &coordinates,\n     const char &value)\n\nOverwrites the value stored in the array at the given\ncoordinates. Note that the number of dimensions in the supplied\ncoordinates must match the number of dimensions in the array.\n"},
  {(char*)"SetValueN", PyvtkTypedArray_IcE_SetValueN, METH_VARARGS,
   (char*)"V.SetValueN(int, char)\nC++: virtual void SetValueN(const SizeT n, const char &value)\n\nOverwrites the n-th value stored in the array, where n is in the\nrange [0, GetNonNullSize()).  This is useful for efficiently\nvisiting every value in the array.  Note that the order in which\nvalues are visited is undefined, but is guaranteed to match the\norder used by vtkArray::GetCoordinatesN().\n"},
  {NULL, NULL, 0, NULL}
};

PyObject *PyVTKClass_vtkTypedArray_IcENew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(NULL,
    PyvtkTypedArray_IcE_Methods,
    typeid(vtkTypedArray<char>).name(), modulename,
    "vtkTypedArray_IcE", "vtkTypedArray_IcE",
    PyvtkTypedArray_IcE_Doc(),
    PyVTKClass_vtkArrayNew(modulename));
  return cls;
}

const char **PyvtkTypedArray_IcE_Doc()
{
  static const char *docstring[] = {
    "vtkTypedArray - Provides a type-specific interface to N-way arrays\n\n",
    "Superclass: vtkArray\n\n",
    "vtkTypedArray provides an interface for retrieving and updating data\nin an arbitrary-dimension array.  It derives from vtkArray and is\ntemplated on the type of value stored in the array.\n\nMethods are provided for retrieving and updating array values based\neither on their array coordinates, or on a 1-dimensional integer\nindex.  The latter approach can be used to iterate over the values in\nan array ",
    "in arbitrary order, which is useful when writing filters\nthat operate efficiently on sparse arrays and arrays that can have\nany number of dimensions.\n\nSpecial overloaded methods provide simple access for arrays with one,\ntwo, or three dimensions.\n\nSee Also:\n\nvtkArray, vtkDenseArray, vtkSparseArray\n\nThanks:\n\nDeveloped by Timothy M. Shead (tshead@sandia.gov) at Sandia National\nLaboratories.\n\n",
    NULL
  };

  return docstring;
}

extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkTypedArray_IaENew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkArrayNew
extern "C" { PyObject *PyVTKClass_vtkArrayNew(const char *); }
#define DECLARED_PyVTKClass_vtkArrayNew
#endif

static const char **PyvtkTypedArray_IaE_Doc();


static PyObject *
PyvtkTypedArray_IaE_GetVariantValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVariantValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<signed char> *op = static_cast<vtkTypedArray<signed char> *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkVariant tempr = (ap.IsBound() ?
      op->GetVariantValue(temp0) :
      op->vtkTypedArray<signed char>::GetVariantValue(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildSpecialObject(&tempr, "vtkVariant");
      }
    }

  return result;
}

static PyObject *
PyvtkTypedArray_IaE_GetVariantValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVariantValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<signed char> *op = static_cast<vtkTypedArray<signed char> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    vtkVariant tempr = (ap.IsBound() ?
      op->GetVariantValue(temp0, temp1) :
      op->vtkTypedArray<signed char>::GetVariantValue(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildSpecialObject(&tempr, "vtkVariant");
      }
    }

  return result;
}

static PyObject *
PyvtkTypedArray_IaE_GetVariantValue_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVariantValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<signed char> *op = static_cast<vtkTypedArray<signed char> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  vtkIdType temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    vtkVariant tempr = (ap.IsBound() ?
      op->GetVariantValue(temp0, temp1, temp2) :
      op->vtkTypedArray<signed char>::GetVariantValue(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildSpecialObject(&tempr, "vtkVariant");
      }
    }

  return result;
}

static PyObject *
PyvtkTypedArray_IaE_GetVariantValue_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVariantValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<signed char> *op = static_cast<vtkTypedArray<signed char> *>(vp);

  vtkArrayCoordinates *temp0 = NULL;
  PyObject *pobj0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkArrayCoordinates"))
    {
    vtkVariant tempr = (ap.IsBound() ?
      op->GetVariantValue(*temp0) :
      op->vtkTypedArray<signed char>::GetVariantValue(*temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildSpecialObject(&tempr, "vtkVariant");
      }
    }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkTypedArray_IaE_GetVariantValue_Methods[] = {
  {NULL, PyvtkTypedArray_IaE_GetVariantValue_s1, METH_VARARGS,
   (char*)"@L"},
  {NULL, PyvtkTypedArray_IaE_GetVariantValue_s4, METH_VARARGS,
   (char*)"@O &vtkArrayCoordinates"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkTypedArray_IaE_GetVariantValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkTypedArray_IaE_GetVariantValue_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkTypedArray_IaE_GetVariantValue_s2(self, args);
    case 3:
      return PyvtkTypedArray_IaE_GetVariantValue_s3(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetVariantValue");
  return NULL;
}



static PyObject *
PyvtkTypedArray_IaE_SetVariantValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVariantValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<signed char> *op = static_cast<vtkTypedArray<signed char> *>(vp);

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
      op->SetVariantValue(temp0, *temp1);
      }
    else
      {
      op->vtkTypedArray<signed char>::SetVariantValue(temp0, *temp1);
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
PyvtkTypedArray_IaE_SetVariantValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVariantValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<signed char> *op = static_cast<vtkTypedArray<signed char> *>(vp);

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
      op->SetVariantValue(temp0, temp1, *temp2);
      }
    else
      {
      op->vtkTypedArray<signed char>::SetVariantValue(temp0, temp1, *temp2);
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
PyvtkTypedArray_IaE_SetVariantValue_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVariantValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<signed char> *op = static_cast<vtkTypedArray<signed char> *>(vp);

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
      op->SetVariantValue(temp0, temp1, temp2, *temp3);
      }
    else
      {
      op->vtkTypedArray<signed char>::SetVariantValue(temp0, temp1, temp2, *temp3);
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
PyvtkTypedArray_IaE_SetVariantValue_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVariantValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<signed char> *op = static_cast<vtkTypedArray<signed char> *>(vp);

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
      op->SetVariantValue(*temp0, *temp1);
      }
    else
      {
      op->vtkTypedArray<signed char>::SetVariantValue(*temp0, *temp1);
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

static PyMethodDef PyvtkTypedArray_IaE_SetVariantValue_Methods[] = {
  {NULL, PyvtkTypedArray_IaE_SetVariantValue_s1, METH_VARARGS,
   (char*)"@LO &vtkVariant"},
  {NULL, PyvtkTypedArray_IaE_SetVariantValue_s4, METH_VARARGS,
   (char*)"@OO &vtkArrayCoordinates &vtkVariant"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkTypedArray_IaE_SetVariantValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkTypedArray_IaE_SetVariantValue_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkTypedArray_IaE_SetVariantValue_s2(self, args);
    case 4:
      return PyvtkTypedArray_IaE_SetVariantValue_s3(self, args);
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetVariantValue");
  return NULL;
}



static PyObject *
PyvtkTypedArray_IaE_GetVariantValueN(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVariantValueN");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<signed char> *op = static_cast<vtkTypedArray<signed char> *>(vp);

  unsigned long long temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkVariant tempr = (ap.IsBound() ?
      op->GetVariantValueN(temp0) :
      op->vtkTypedArray<signed char>::GetVariantValueN(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildSpecialObject(&tempr, "vtkVariant");
      }
    }

  return result;
}


static PyObject *
PyvtkTypedArray_IaE_SetVariantValueN(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVariantValueN");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<signed char> *op = static_cast<vtkTypedArray<signed char> *>(vp);

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
      op->SetVariantValueN(temp0, *temp1);
      }
    else
      {
      op->vtkTypedArray<signed char>::SetVariantValueN(temp0, *temp1);
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
PyvtkTypedArray_IaE_CopyValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<signed char> *op = static_cast<vtkTypedArray<signed char> *>(vp);

  vtkArray *temp0 = NULL;
  vtkArrayCoordinates *temp1 = NULL;
  PyObject *pobj1 = NULL;
  vtkArrayCoordinates *temp2 = NULL;
  PyObject *pobj2 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkArray") &&
      ap.GetSpecialObject(temp1, pobj1, "vtkArrayCoordinates") &&
      ap.GetSpecialObject(temp2, pobj2, "vtkArrayCoordinates"))
    {
    if (ap.IsBound())
      {
      op->CopyValue(temp0, *temp1, *temp2);
      }
    else
      {
      op->vtkTypedArray<signed char>::CopyValue(temp0, *temp1, *temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  Py_XDECREF(pobj1);
  Py_XDECREF(pobj2);

  return result;
}

static PyObject *
PyvtkTypedArray_IaE_CopyValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<signed char> *op = static_cast<vtkTypedArray<signed char> *>(vp);

  vtkArray *temp0 = NULL;
  unsigned long long temp1;
  vtkArrayCoordinates *temp2 = NULL;
  PyObject *pobj2 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkArray") &&
      ap.GetValue(temp1) &&
      ap.GetSpecialObject(temp2, pobj2, "vtkArrayCoordinates"))
    {
    if (ap.IsBound())
      {
      op->CopyValue(temp0, temp1, *temp2);
      }
    else
      {
      op->vtkTypedArray<signed char>::CopyValue(temp0, temp1, *temp2);
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
PyvtkTypedArray_IaE_CopyValue_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<signed char> *op = static_cast<vtkTypedArray<signed char> *>(vp);

  vtkArray *temp0 = NULL;
  vtkArrayCoordinates *temp1 = NULL;
  PyObject *pobj1 = NULL;
  unsigned long long temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkArray") &&
      ap.GetSpecialObject(temp1, pobj1, "vtkArrayCoordinates") &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      op->CopyValue(temp0, *temp1, temp2);
      }
    else
      {
      op->vtkTypedArray<signed char>::CopyValue(temp0, *temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  Py_XDECREF(pobj1);

  return result;
}

static PyMethodDef PyvtkTypedArray_IaE_CopyValue_Methods[] = {
  {NULL, PyvtkTypedArray_IaE_CopyValue_s1, METH_VARARGS,
   (char*)"@OOO *vtkArray &vtkArrayCoordinates &vtkArrayCoordinates"},
  {NULL, PyvtkTypedArray_IaE_CopyValue_s2, METH_VARARGS,
   (char*)"@OKO *vtkArray &vtkArrayCoordinates"},
  {NULL, PyvtkTypedArray_IaE_CopyValue_s3, METH_VARARGS,
   (char*)"@OOK *vtkArray &vtkArrayCoordinates"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkTypedArray_IaE_CopyValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkTypedArray_IaE_CopyValue_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "CopyValue");
  return NULL;
}



static PyObject *
PyvtkTypedArray_IaE_GetValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<signed char> *op = static_cast<vtkTypedArray<signed char> *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    const signed char *tempr = &op->GetValue(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(*tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkTypedArray_IaE_GetValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<signed char> *op = static_cast<vtkTypedArray<signed char> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    const signed char *tempr = &op->GetValue(temp0, temp1);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(*tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkTypedArray_IaE_GetValue_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<signed char> *op = static_cast<vtkTypedArray<signed char> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  vtkIdType temp2;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    const signed char *tempr = &op->GetValue(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(*tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkTypedArray_IaE_GetValue_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<signed char> *op = static_cast<vtkTypedArray<signed char> *>(vp);

  vtkArrayCoordinates *temp0 = NULL;
  PyObject *pobj0 = NULL;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkArrayCoordinates"))
    {
    const signed char *tempr = &op->GetValue(*temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(*tempr);
      }
    }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkTypedArray_IaE_GetValue_Methods[] = {
  {NULL, PyvtkTypedArray_IaE_GetValue_s1, METH_VARARGS,
   (char*)"@L"},
  {NULL, PyvtkTypedArray_IaE_GetValue_s4, METH_VARARGS,
   (char*)"@O &vtkArrayCoordinates"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkTypedArray_IaE_GetValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkTypedArray_IaE_GetValue_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkTypedArray_IaE_GetValue_s2(self, args);
    case 3:
      return PyvtkTypedArray_IaE_GetValue_s3(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetValue");
  return NULL;
}



static PyObject *
PyvtkTypedArray_IaE_GetValueN(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValueN");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<signed char> *op = static_cast<vtkTypedArray<signed char> *>(vp);

  unsigned long long temp0;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    const signed char *tempr = &op->GetValueN(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(*tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTypedArray_IaE_SetValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<signed char> *op = static_cast<vtkTypedArray<signed char> *>(vp);

  vtkIdType temp0;
  signed char temp1;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    op->SetValue(temp0, temp1);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkTypedArray_IaE_SetValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<signed char> *op = static_cast<vtkTypedArray<signed char> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  signed char temp2;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    op->SetValue(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkTypedArray_IaE_SetValue_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<signed char> *op = static_cast<vtkTypedArray<signed char> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  vtkIdType temp2;
  signed char temp3;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
    {
    op->SetValue(temp0, temp1, temp2, temp3);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkTypedArray_IaE_SetValue_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<signed char> *op = static_cast<vtkTypedArray<signed char> *>(vp);

  vtkArrayCoordinates *temp0 = NULL;
  PyObject *pobj0 = NULL;
  signed char temp1;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(2) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkArrayCoordinates") &&
      ap.GetValue(temp1))
    {
    op->SetValue(*temp0, temp1);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkTypedArray_IaE_SetValue_Methods[] = {
  {NULL, PyvtkTypedArray_IaE_SetValue_s1, METH_VARARGS,
   (char*)"@LB"},
  {NULL, PyvtkTypedArray_IaE_SetValue_s4, METH_VARARGS,
   (char*)"@OB &vtkArrayCoordinates"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkTypedArray_IaE_SetValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkTypedArray_IaE_SetValue_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkTypedArray_IaE_SetValue_s2(self, args);
    case 4:
      return PyvtkTypedArray_IaE_SetValue_s3(self, args);
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetValue");
  return NULL;
}



static PyObject *
PyvtkTypedArray_IaE_SetValueN(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValueN");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<signed char> *op = static_cast<vtkTypedArray<signed char> *>(vp);

  unsigned long long temp0;
  signed char temp1;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    op->SetValueN(temp0, temp1);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkTypedArray_IaE_Methods[] = {
  {(char*)"GetVariantValue", PyvtkTypedArray_IaE_GetVariantValue, METH_VARARGS,
   (char*)"V.GetVariantValue(int) -> vtkVariant\nC++: vtkVariant GetVariantValue(vtkIdType i)\nV.GetVariantValue(int, int) -> vtkVariant\nC++: vtkVariant GetVariantValue(vtkIdType i, vtkIdType j)\nV.GetVariantValue(int, int, int) -> vtkVariant\nC++: vtkVariant GetVariantValue(vtkIdType i, vtkIdType j,\n    vtkIdType k)\nV.GetVariantValue(vtkArrayCoordinates) -> vtkVariant\nC++: virtual vtkVariant GetVariantValue(\n    const vtkArrayCoordinates &coordinates)\n\n"},
  {(char*)"SetVariantValue", PyvtkTypedArray_IaE_SetVariantValue, METH_VARARGS,
   (char*)"V.SetVariantValue(int, vtkVariant)\nC++: void SetVariantValue(vtkIdType i, const vtkVariant &value)\nV.SetVariantValue(int, int, vtkVariant)\nC++: void SetVariantValue(vtkIdType i, vtkIdType j,\n    const vtkVariant &value)\nV.SetVariantValue(int, int, int, vtkVariant)\nC++: void SetVariantValue(vtkIdType i, vtkIdType j, vtkIdType k,\n    const vtkVariant &value)\nV.SetVariantValue(vtkArrayCoordinates, vtkVariant)\nC++: virtual void SetVariantValue(\n    const vtkArrayCoordinates &coordinates,\n    const vtkVariant &value)\n\n"},
  {(char*)"GetVariantValueN", PyvtkTypedArray_IaE_GetVariantValueN, METH_VARARGS,
   (char*)"V.GetVariantValueN(int) -> vtkVariant\nC++: virtual vtkVariant GetVariantValueN(const SizeT n)\n\n"},
  {(char*)"SetVariantValueN", PyvtkTypedArray_IaE_SetVariantValueN, METH_VARARGS,
   (char*)"V.SetVariantValueN(int, vtkVariant)\nC++: virtual void SetVariantValueN(const SizeT n,\n    const vtkVariant &value)\n\n"},
  {(char*)"CopyValue", PyvtkTypedArray_IaE_CopyValue, METH_VARARGS,
   (char*)"V.CopyValue(vtkArray, vtkArrayCoordinates, vtkArrayCoordinates)\nC++: virtual void CopyValue(vtkArray *source,\n    const vtkArrayCoordinates &source_coordinates,\n    const vtkArrayCoordinates &target_coordinates)\nV.CopyValue(vtkArray, int, vtkArrayCoordinates)\nC++: virtual void CopyValue(vtkArray *source,\n    const SizeT source_index,\n    const vtkArrayCoordinates &target_coordinates)\nV.CopyValue(vtkArray, vtkArrayCoordinates, int)\nC++: virtual void CopyValue(vtkArray *source,\n    const vtkArrayCoordinates &source_coordinates,\n    const SizeT target_index)\n\n"},
  {(char*)"GetValue", PyvtkTypedArray_IaE_GetValue, METH_VARARGS,
   (char*)"V.GetValue(int) -> int\nC++: virtual const signed char &GetValue(CoordinateT i)\nV.GetValue(int, int) -> int\nC++: virtual const signed char &GetValue(CoordinateT i,\n    CoordinateT j)\nV.GetValue(int, int, int) -> int\nC++: virtual const signed char &GetValue(CoordinateT i,\n    CoordinateT j, CoordinateT k)\nV.GetValue(vtkArrayCoordinates) -> int\nC++: virtual const signed char &GetValue(\n    const vtkArrayCoordinates &coordinates)\n\nReturns the value stored in the array at the given coordinates.\nNote that the number of dimensions in the supplied coordinates\nmust match the number of dimensions in the array.\n"},
  {(char*)"GetValueN", PyvtkTypedArray_IaE_GetValueN, METH_VARARGS,
   (char*)"V.GetValueN(int) -> int\nC++: virtual const signed char &GetValueN(const SizeT n)\n\nReturns the n-th value stored in the array, where n is in the\nrange [0, GetNonNullSize()).  This is useful for efficiently\nvisiting every value in the array.  Note that the order in which\nvalues are visited is undefined, but is guaranteed to match the\norder used by vtkArray::GetCoordinatesN().\n"},
  {(char*)"SetValue", PyvtkTypedArray_IaE_SetValue, METH_VARARGS,
   (char*)"V.SetValue(int, int)\nC++: virtual void SetValue(CoordinateT i,\n    const signed char &value)\nV.SetValue(int, int, int)\nC++: virtual void SetValue(CoordinateT i, CoordinateT j,\n    const signed char &value)\nV.SetValue(int, int, int, int)\nC++: virtual void SetValue(CoordinateT i, CoordinateT j,\n    CoordinateT k, const signed char &value)\nV.SetValue(vtkArrayCoordinates, int)\nC++: virtual void SetValue(const vtkArrayCoordinates &coordinates,\n     const signed char &value)\n\nOverwrites the value stored in the array at the given\ncoordinates. Note that the number of dimensions in the supplied\ncoordinates must match the number of dimensions in the array.\n"},
  {(char*)"SetValueN", PyvtkTypedArray_IaE_SetValueN, METH_VARARGS,
   (char*)"V.SetValueN(int, int)\nC++: virtual void SetValueN(const SizeT n,\n    const signed char &value)\n\nOverwrites the n-th value stored in the array, where n is in the\nrange [0, GetNonNullSize()).  This is useful for efficiently\nvisiting every value in the array.  Note that the order in which\nvalues are visited is undefined, but is guaranteed to match the\norder used by vtkArray::GetCoordinatesN().\n"},
  {NULL, NULL, 0, NULL}
};

PyObject *PyVTKClass_vtkTypedArray_IaENew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(NULL,
    PyvtkTypedArray_IaE_Methods,
    typeid(vtkTypedArray<signed char>).name(), modulename,
    "vtkTypedArray_IaE", "vtkTypedArray_IaE",
    PyvtkTypedArray_IaE_Doc(),
    PyVTKClass_vtkArrayNew(modulename));
  return cls;
}

const char **PyvtkTypedArray_IaE_Doc()
{
  static const char *docstring[] = {
    "vtkTypedArray - Provides a type-specific interface to N-way arrays\n\n",
    "Superclass: vtkArray\n\n",
    "vtkTypedArray provides an interface for retrieving and updating data\nin an arbitrary-dimension array.  It derives from vtkArray and is\ntemplated on the type of value stored in the array.\n\nMethods are provided for retrieving and updating array values based\neither on their array coordinates, or on a 1-dimensional integer\nindex.  The latter approach can be used to iterate over the values in\nan array ",
    "in arbitrary order, which is useful when writing filters\nthat operate efficiently on sparse arrays and arrays that can have\nany number of dimensions.\n\nSpecial overloaded methods provide simple access for arrays with one,\ntwo, or three dimensions.\n\nSee Also:\n\nvtkArray, vtkDenseArray, vtkSparseArray\n\nThanks:\n\nDeveloped by Timothy M. Shead (tshead@sandia.gov) at Sandia National\nLaboratories.\n\n",
    NULL
  };

  return docstring;
}

extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkTypedArray_IhENew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkArrayNew
extern "C" { PyObject *PyVTKClass_vtkArrayNew(const char *); }
#define DECLARED_PyVTKClass_vtkArrayNew
#endif

static const char **PyvtkTypedArray_IhE_Doc();


static PyObject *
PyvtkTypedArray_IhE_GetVariantValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVariantValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<unsigned char> *op = static_cast<vtkTypedArray<unsigned char> *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkVariant tempr = (ap.IsBound() ?
      op->GetVariantValue(temp0) :
      op->vtkTypedArray<unsigned char>::GetVariantValue(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildSpecialObject(&tempr, "vtkVariant");
      }
    }

  return result;
}

static PyObject *
PyvtkTypedArray_IhE_GetVariantValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVariantValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<unsigned char> *op = static_cast<vtkTypedArray<unsigned char> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    vtkVariant tempr = (ap.IsBound() ?
      op->GetVariantValue(temp0, temp1) :
      op->vtkTypedArray<unsigned char>::GetVariantValue(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildSpecialObject(&tempr, "vtkVariant");
      }
    }

  return result;
}

static PyObject *
PyvtkTypedArray_IhE_GetVariantValue_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVariantValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<unsigned char> *op = static_cast<vtkTypedArray<unsigned char> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  vtkIdType temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    vtkVariant tempr = (ap.IsBound() ?
      op->GetVariantValue(temp0, temp1, temp2) :
      op->vtkTypedArray<unsigned char>::GetVariantValue(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildSpecialObject(&tempr, "vtkVariant");
      }
    }

  return result;
}

static PyObject *
PyvtkTypedArray_IhE_GetVariantValue_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVariantValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<unsigned char> *op = static_cast<vtkTypedArray<unsigned char> *>(vp);

  vtkArrayCoordinates *temp0 = NULL;
  PyObject *pobj0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkArrayCoordinates"))
    {
    vtkVariant tempr = (ap.IsBound() ?
      op->GetVariantValue(*temp0) :
      op->vtkTypedArray<unsigned char>::GetVariantValue(*temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildSpecialObject(&tempr, "vtkVariant");
      }
    }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkTypedArray_IhE_GetVariantValue_Methods[] = {
  {NULL, PyvtkTypedArray_IhE_GetVariantValue_s1, METH_VARARGS,
   (char*)"@L"},
  {NULL, PyvtkTypedArray_IhE_GetVariantValue_s4, METH_VARARGS,
   (char*)"@O &vtkArrayCoordinates"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkTypedArray_IhE_GetVariantValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkTypedArray_IhE_GetVariantValue_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkTypedArray_IhE_GetVariantValue_s2(self, args);
    case 3:
      return PyvtkTypedArray_IhE_GetVariantValue_s3(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetVariantValue");
  return NULL;
}



static PyObject *
PyvtkTypedArray_IhE_SetVariantValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVariantValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<unsigned char> *op = static_cast<vtkTypedArray<unsigned char> *>(vp);

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
      op->SetVariantValue(temp0, *temp1);
      }
    else
      {
      op->vtkTypedArray<unsigned char>::SetVariantValue(temp0, *temp1);
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
PyvtkTypedArray_IhE_SetVariantValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVariantValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<unsigned char> *op = static_cast<vtkTypedArray<unsigned char> *>(vp);

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
      op->SetVariantValue(temp0, temp1, *temp2);
      }
    else
      {
      op->vtkTypedArray<unsigned char>::SetVariantValue(temp0, temp1, *temp2);
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
PyvtkTypedArray_IhE_SetVariantValue_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVariantValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<unsigned char> *op = static_cast<vtkTypedArray<unsigned char> *>(vp);

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
      op->SetVariantValue(temp0, temp1, temp2, *temp3);
      }
    else
      {
      op->vtkTypedArray<unsigned char>::SetVariantValue(temp0, temp1, temp2, *temp3);
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
PyvtkTypedArray_IhE_SetVariantValue_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVariantValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<unsigned char> *op = static_cast<vtkTypedArray<unsigned char> *>(vp);

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
      op->SetVariantValue(*temp0, *temp1);
      }
    else
      {
      op->vtkTypedArray<unsigned char>::SetVariantValue(*temp0, *temp1);
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

static PyMethodDef PyvtkTypedArray_IhE_SetVariantValue_Methods[] = {
  {NULL, PyvtkTypedArray_IhE_SetVariantValue_s1, METH_VARARGS,
   (char*)"@LO &vtkVariant"},
  {NULL, PyvtkTypedArray_IhE_SetVariantValue_s4, METH_VARARGS,
   (char*)"@OO &vtkArrayCoordinates &vtkVariant"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkTypedArray_IhE_SetVariantValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkTypedArray_IhE_SetVariantValue_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkTypedArray_IhE_SetVariantValue_s2(self, args);
    case 4:
      return PyvtkTypedArray_IhE_SetVariantValue_s3(self, args);
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetVariantValue");
  return NULL;
}



static PyObject *
PyvtkTypedArray_IhE_GetVariantValueN(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVariantValueN");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<unsigned char> *op = static_cast<vtkTypedArray<unsigned char> *>(vp);

  unsigned long long temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkVariant tempr = (ap.IsBound() ?
      op->GetVariantValueN(temp0) :
      op->vtkTypedArray<unsigned char>::GetVariantValueN(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildSpecialObject(&tempr, "vtkVariant");
      }
    }

  return result;
}


static PyObject *
PyvtkTypedArray_IhE_SetVariantValueN(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVariantValueN");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<unsigned char> *op = static_cast<vtkTypedArray<unsigned char> *>(vp);

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
      op->SetVariantValueN(temp0, *temp1);
      }
    else
      {
      op->vtkTypedArray<unsigned char>::SetVariantValueN(temp0, *temp1);
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
PyvtkTypedArray_IhE_CopyValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<unsigned char> *op = static_cast<vtkTypedArray<unsigned char> *>(vp);

  vtkArray *temp0 = NULL;
  vtkArrayCoordinates *temp1 = NULL;
  PyObject *pobj1 = NULL;
  vtkArrayCoordinates *temp2 = NULL;
  PyObject *pobj2 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkArray") &&
      ap.GetSpecialObject(temp1, pobj1, "vtkArrayCoordinates") &&
      ap.GetSpecialObject(temp2, pobj2, "vtkArrayCoordinates"))
    {
    if (ap.IsBound())
      {
      op->CopyValue(temp0, *temp1, *temp2);
      }
    else
      {
      op->vtkTypedArray<unsigned char>::CopyValue(temp0, *temp1, *temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  Py_XDECREF(pobj1);
  Py_XDECREF(pobj2);

  return result;
}

static PyObject *
PyvtkTypedArray_IhE_CopyValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<unsigned char> *op = static_cast<vtkTypedArray<unsigned char> *>(vp);

  vtkArray *temp0 = NULL;
  unsigned long long temp1;
  vtkArrayCoordinates *temp2 = NULL;
  PyObject *pobj2 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkArray") &&
      ap.GetValue(temp1) &&
      ap.GetSpecialObject(temp2, pobj2, "vtkArrayCoordinates"))
    {
    if (ap.IsBound())
      {
      op->CopyValue(temp0, temp1, *temp2);
      }
    else
      {
      op->vtkTypedArray<unsigned char>::CopyValue(temp0, temp1, *temp2);
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
PyvtkTypedArray_IhE_CopyValue_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<unsigned char> *op = static_cast<vtkTypedArray<unsigned char> *>(vp);

  vtkArray *temp0 = NULL;
  vtkArrayCoordinates *temp1 = NULL;
  PyObject *pobj1 = NULL;
  unsigned long long temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkArray") &&
      ap.GetSpecialObject(temp1, pobj1, "vtkArrayCoordinates") &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      op->CopyValue(temp0, *temp1, temp2);
      }
    else
      {
      op->vtkTypedArray<unsigned char>::CopyValue(temp0, *temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  Py_XDECREF(pobj1);

  return result;
}

static PyMethodDef PyvtkTypedArray_IhE_CopyValue_Methods[] = {
  {NULL, PyvtkTypedArray_IhE_CopyValue_s1, METH_VARARGS,
   (char*)"@OOO *vtkArray &vtkArrayCoordinates &vtkArrayCoordinates"},
  {NULL, PyvtkTypedArray_IhE_CopyValue_s2, METH_VARARGS,
   (char*)"@OKO *vtkArray &vtkArrayCoordinates"},
  {NULL, PyvtkTypedArray_IhE_CopyValue_s3, METH_VARARGS,
   (char*)"@OOK *vtkArray &vtkArrayCoordinates"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkTypedArray_IhE_CopyValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkTypedArray_IhE_CopyValue_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "CopyValue");
  return NULL;
}



static PyObject *
PyvtkTypedArray_IhE_GetValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<unsigned char> *op = static_cast<vtkTypedArray<unsigned char> *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    const unsigned char *tempr = &op->GetValue(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(*tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkTypedArray_IhE_GetValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<unsigned char> *op = static_cast<vtkTypedArray<unsigned char> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    const unsigned char *tempr = &op->GetValue(temp0, temp1);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(*tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkTypedArray_IhE_GetValue_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<unsigned char> *op = static_cast<vtkTypedArray<unsigned char> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  vtkIdType temp2;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    const unsigned char *tempr = &op->GetValue(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(*tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkTypedArray_IhE_GetValue_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<unsigned char> *op = static_cast<vtkTypedArray<unsigned char> *>(vp);

  vtkArrayCoordinates *temp0 = NULL;
  PyObject *pobj0 = NULL;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkArrayCoordinates"))
    {
    const unsigned char *tempr = &op->GetValue(*temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(*tempr);
      }
    }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkTypedArray_IhE_GetValue_Methods[] = {
  {NULL, PyvtkTypedArray_IhE_GetValue_s1, METH_VARARGS,
   (char*)"@L"},
  {NULL, PyvtkTypedArray_IhE_GetValue_s4, METH_VARARGS,
   (char*)"@O &vtkArrayCoordinates"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkTypedArray_IhE_GetValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkTypedArray_IhE_GetValue_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkTypedArray_IhE_GetValue_s2(self, args);
    case 3:
      return PyvtkTypedArray_IhE_GetValue_s3(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetValue");
  return NULL;
}



static PyObject *
PyvtkTypedArray_IhE_GetValueN(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValueN");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<unsigned char> *op = static_cast<vtkTypedArray<unsigned char> *>(vp);

  unsigned long long temp0;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    const unsigned char *tempr = &op->GetValueN(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(*tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTypedArray_IhE_SetValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<unsigned char> *op = static_cast<vtkTypedArray<unsigned char> *>(vp);

  vtkIdType temp0;
  unsigned char temp1;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    op->SetValue(temp0, temp1);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkTypedArray_IhE_SetValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<unsigned char> *op = static_cast<vtkTypedArray<unsigned char> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  unsigned char temp2;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    op->SetValue(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkTypedArray_IhE_SetValue_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<unsigned char> *op = static_cast<vtkTypedArray<unsigned char> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  vtkIdType temp2;
  unsigned char temp3;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
    {
    op->SetValue(temp0, temp1, temp2, temp3);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkTypedArray_IhE_SetValue_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<unsigned char> *op = static_cast<vtkTypedArray<unsigned char> *>(vp);

  vtkArrayCoordinates *temp0 = NULL;
  PyObject *pobj0 = NULL;
  unsigned char temp1;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(2) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkArrayCoordinates") &&
      ap.GetValue(temp1))
    {
    op->SetValue(*temp0, temp1);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkTypedArray_IhE_SetValue_Methods[] = {
  {NULL, PyvtkTypedArray_IhE_SetValue_s1, METH_VARARGS,
   (char*)"@Lb"},
  {NULL, PyvtkTypedArray_IhE_SetValue_s4, METH_VARARGS,
   (char*)"@Ob &vtkArrayCoordinates"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkTypedArray_IhE_SetValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkTypedArray_IhE_SetValue_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkTypedArray_IhE_SetValue_s2(self, args);
    case 4:
      return PyvtkTypedArray_IhE_SetValue_s3(self, args);
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetValue");
  return NULL;
}



static PyObject *
PyvtkTypedArray_IhE_SetValueN(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValueN");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<unsigned char> *op = static_cast<vtkTypedArray<unsigned char> *>(vp);

  unsigned long long temp0;
  unsigned char temp1;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    op->SetValueN(temp0, temp1);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkTypedArray_IhE_Methods[] = {
  {(char*)"GetVariantValue", PyvtkTypedArray_IhE_GetVariantValue, METH_VARARGS,
   (char*)"V.GetVariantValue(int) -> vtkVariant\nC++: vtkVariant GetVariantValue(vtkIdType i)\nV.GetVariantValue(int, int) -> vtkVariant\nC++: vtkVariant GetVariantValue(vtkIdType i, vtkIdType j)\nV.GetVariantValue(int, int, int) -> vtkVariant\nC++: vtkVariant GetVariantValue(vtkIdType i, vtkIdType j,\n    vtkIdType k)\nV.GetVariantValue(vtkArrayCoordinates) -> vtkVariant\nC++: virtual vtkVariant GetVariantValue(\n    const vtkArrayCoordinates &coordinates)\n\n"},
  {(char*)"SetVariantValue", PyvtkTypedArray_IhE_SetVariantValue, METH_VARARGS,
   (char*)"V.SetVariantValue(int, vtkVariant)\nC++: void SetVariantValue(vtkIdType i, const vtkVariant &value)\nV.SetVariantValue(int, int, vtkVariant)\nC++: void SetVariantValue(vtkIdType i, vtkIdType j,\n    const vtkVariant &value)\nV.SetVariantValue(int, int, int, vtkVariant)\nC++: void SetVariantValue(vtkIdType i, vtkIdType j, vtkIdType k,\n    const vtkVariant &value)\nV.SetVariantValue(vtkArrayCoordinates, vtkVariant)\nC++: virtual void SetVariantValue(\n    const vtkArrayCoordinates &coordinates,\n    const vtkVariant &value)\n\n"},
  {(char*)"GetVariantValueN", PyvtkTypedArray_IhE_GetVariantValueN, METH_VARARGS,
   (char*)"V.GetVariantValueN(int) -> vtkVariant\nC++: virtual vtkVariant GetVariantValueN(const SizeT n)\n\n"},
  {(char*)"SetVariantValueN", PyvtkTypedArray_IhE_SetVariantValueN, METH_VARARGS,
   (char*)"V.SetVariantValueN(int, vtkVariant)\nC++: virtual void SetVariantValueN(const SizeT n,\n    const vtkVariant &value)\n\n"},
  {(char*)"CopyValue", PyvtkTypedArray_IhE_CopyValue, METH_VARARGS,
   (char*)"V.CopyValue(vtkArray, vtkArrayCoordinates, vtkArrayCoordinates)\nC++: virtual void CopyValue(vtkArray *source,\n    const vtkArrayCoordinates &source_coordinates,\n    const vtkArrayCoordinates &target_coordinates)\nV.CopyValue(vtkArray, int, vtkArrayCoordinates)\nC++: virtual void CopyValue(vtkArray *source,\n    const SizeT source_index,\n    const vtkArrayCoordinates &target_coordinates)\nV.CopyValue(vtkArray, vtkArrayCoordinates, int)\nC++: virtual void CopyValue(vtkArray *source,\n    const vtkArrayCoordinates &source_coordinates,\n    const SizeT target_index)\n\n"},
  {(char*)"GetValue", PyvtkTypedArray_IhE_GetValue, METH_VARARGS,
   (char*)"V.GetValue(int) -> int\nC++: virtual const unsigned char &GetValue(CoordinateT i)\nV.GetValue(int, int) -> int\nC++: virtual const unsigned char &GetValue(CoordinateT i,\n    CoordinateT j)\nV.GetValue(int, int, int) -> int\nC++: virtual const unsigned char &GetValue(CoordinateT i,\n    CoordinateT j, CoordinateT k)\nV.GetValue(vtkArrayCoordinates) -> int\nC++: virtual const unsigned char &GetValue(\n    const vtkArrayCoordinates &coordinates)\n\nReturns the value stored in the array at the given coordinates.\nNote that the number of dimensions in the supplied coordinates\nmust match the number of dimensions in the array.\n"},
  {(char*)"GetValueN", PyvtkTypedArray_IhE_GetValueN, METH_VARARGS,
   (char*)"V.GetValueN(int) -> int\nC++: virtual const unsigned char &GetValueN(const SizeT n)\n\nReturns the n-th value stored in the array, where n is in the\nrange [0, GetNonNullSize()).  This is useful for efficiently\nvisiting every value in the array.  Note that the order in which\nvalues are visited is undefined, but is guaranteed to match the\norder used by vtkArray::GetCoordinatesN().\n"},
  {(char*)"SetValue", PyvtkTypedArray_IhE_SetValue, METH_VARARGS,
   (char*)"V.SetValue(int, int)\nC++: virtual void SetValue(CoordinateT i,\n    const unsigned char &value)\nV.SetValue(int, int, int)\nC++: virtual void SetValue(CoordinateT i, CoordinateT j,\n    const unsigned char &value)\nV.SetValue(int, int, int, int)\nC++: virtual void SetValue(CoordinateT i, CoordinateT j,\n    CoordinateT k, const unsigned char &value)\nV.SetValue(vtkArrayCoordinates, int)\nC++: virtual void SetValue(const vtkArrayCoordinates &coordinates,\n     const unsigned char &value)\n\nOverwrites the value stored in the array at the given\ncoordinates. Note that the number of dimensions in the supplied\ncoordinates must match the number of dimensions in the array.\n"},
  {(char*)"SetValueN", PyvtkTypedArray_IhE_SetValueN, METH_VARARGS,
   (char*)"V.SetValueN(int, int)\nC++: virtual void SetValueN(const SizeT n,\n    const unsigned char &value)\n\nOverwrites the n-th value stored in the array, where n is in the\nrange [0, GetNonNullSize()).  This is useful for efficiently\nvisiting every value in the array.  Note that the order in which\nvalues are visited is undefined, but is guaranteed to match the\norder used by vtkArray::GetCoordinatesN().\n"},
  {NULL, NULL, 0, NULL}
};

PyObject *PyVTKClass_vtkTypedArray_IhENew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(NULL,
    PyvtkTypedArray_IhE_Methods,
    typeid(vtkTypedArray<unsigned char>).name(), modulename,
    "vtkTypedArray_IhE", "vtkTypedArray_IhE",
    PyvtkTypedArray_IhE_Doc(),
    PyVTKClass_vtkArrayNew(modulename));
  return cls;
}

const char **PyvtkTypedArray_IhE_Doc()
{
  static const char *docstring[] = {
    "vtkTypedArray - Provides a type-specific interface to N-way arrays\n\n",
    "Superclass: vtkArray\n\n",
    "vtkTypedArray provides an interface for retrieving and updating data\nin an arbitrary-dimension array.  It derives from vtkArray and is\ntemplated on the type of value stored in the array.\n\nMethods are provided for retrieving and updating array values based\neither on their array coordinates, or on a 1-dimensional integer\nindex.  The latter approach can be used to iterate over the values in\nan array ",
    "in arbitrary order, which is useful when writing filters\nthat operate efficiently on sparse arrays and arrays that can have\nany number of dimensions.\n\nSpecial overloaded methods provide simple access for arrays with one,\ntwo, or three dimensions.\n\nSee Also:\n\nvtkArray, vtkDenseArray, vtkSparseArray\n\nThanks:\n\nDeveloped by Timothy M. Shead (tshead@sandia.gov) at Sandia National\nLaboratories.\n\n",
    NULL
  };

  return docstring;
}

extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkTypedArray_IsENew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkArrayNew
extern "C" { PyObject *PyVTKClass_vtkArrayNew(const char *); }
#define DECLARED_PyVTKClass_vtkArrayNew
#endif

static const char **PyvtkTypedArray_IsE_Doc();


static PyObject *
PyvtkTypedArray_IsE_GetVariantValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVariantValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<short> *op = static_cast<vtkTypedArray<short> *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkVariant tempr = (ap.IsBound() ?
      op->GetVariantValue(temp0) :
      op->vtkTypedArray<short>::GetVariantValue(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildSpecialObject(&tempr, "vtkVariant");
      }
    }

  return result;
}

static PyObject *
PyvtkTypedArray_IsE_GetVariantValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVariantValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<short> *op = static_cast<vtkTypedArray<short> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    vtkVariant tempr = (ap.IsBound() ?
      op->GetVariantValue(temp0, temp1) :
      op->vtkTypedArray<short>::GetVariantValue(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildSpecialObject(&tempr, "vtkVariant");
      }
    }

  return result;
}

static PyObject *
PyvtkTypedArray_IsE_GetVariantValue_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVariantValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<short> *op = static_cast<vtkTypedArray<short> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  vtkIdType temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    vtkVariant tempr = (ap.IsBound() ?
      op->GetVariantValue(temp0, temp1, temp2) :
      op->vtkTypedArray<short>::GetVariantValue(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildSpecialObject(&tempr, "vtkVariant");
      }
    }

  return result;
}

static PyObject *
PyvtkTypedArray_IsE_GetVariantValue_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVariantValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<short> *op = static_cast<vtkTypedArray<short> *>(vp);

  vtkArrayCoordinates *temp0 = NULL;
  PyObject *pobj0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkArrayCoordinates"))
    {
    vtkVariant tempr = (ap.IsBound() ?
      op->GetVariantValue(*temp0) :
      op->vtkTypedArray<short>::GetVariantValue(*temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildSpecialObject(&tempr, "vtkVariant");
      }
    }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkTypedArray_IsE_GetVariantValue_Methods[] = {
  {NULL, PyvtkTypedArray_IsE_GetVariantValue_s1, METH_VARARGS,
   (char*)"@L"},
  {NULL, PyvtkTypedArray_IsE_GetVariantValue_s4, METH_VARARGS,
   (char*)"@O &vtkArrayCoordinates"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkTypedArray_IsE_GetVariantValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkTypedArray_IsE_GetVariantValue_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkTypedArray_IsE_GetVariantValue_s2(self, args);
    case 3:
      return PyvtkTypedArray_IsE_GetVariantValue_s3(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetVariantValue");
  return NULL;
}



static PyObject *
PyvtkTypedArray_IsE_SetVariantValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVariantValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<short> *op = static_cast<vtkTypedArray<short> *>(vp);

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
      op->SetVariantValue(temp0, *temp1);
      }
    else
      {
      op->vtkTypedArray<short>::SetVariantValue(temp0, *temp1);
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
PyvtkTypedArray_IsE_SetVariantValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVariantValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<short> *op = static_cast<vtkTypedArray<short> *>(vp);

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
      op->SetVariantValue(temp0, temp1, *temp2);
      }
    else
      {
      op->vtkTypedArray<short>::SetVariantValue(temp0, temp1, *temp2);
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
PyvtkTypedArray_IsE_SetVariantValue_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVariantValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<short> *op = static_cast<vtkTypedArray<short> *>(vp);

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
      op->SetVariantValue(temp0, temp1, temp2, *temp3);
      }
    else
      {
      op->vtkTypedArray<short>::SetVariantValue(temp0, temp1, temp2, *temp3);
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
PyvtkTypedArray_IsE_SetVariantValue_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVariantValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<short> *op = static_cast<vtkTypedArray<short> *>(vp);

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
      op->SetVariantValue(*temp0, *temp1);
      }
    else
      {
      op->vtkTypedArray<short>::SetVariantValue(*temp0, *temp1);
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

static PyMethodDef PyvtkTypedArray_IsE_SetVariantValue_Methods[] = {
  {NULL, PyvtkTypedArray_IsE_SetVariantValue_s1, METH_VARARGS,
   (char*)"@LO &vtkVariant"},
  {NULL, PyvtkTypedArray_IsE_SetVariantValue_s4, METH_VARARGS,
   (char*)"@OO &vtkArrayCoordinates &vtkVariant"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkTypedArray_IsE_SetVariantValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkTypedArray_IsE_SetVariantValue_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkTypedArray_IsE_SetVariantValue_s2(self, args);
    case 4:
      return PyvtkTypedArray_IsE_SetVariantValue_s3(self, args);
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetVariantValue");
  return NULL;
}



static PyObject *
PyvtkTypedArray_IsE_GetVariantValueN(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVariantValueN");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<short> *op = static_cast<vtkTypedArray<short> *>(vp);

  unsigned long long temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkVariant tempr = (ap.IsBound() ?
      op->GetVariantValueN(temp0) :
      op->vtkTypedArray<short>::GetVariantValueN(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildSpecialObject(&tempr, "vtkVariant");
      }
    }

  return result;
}


static PyObject *
PyvtkTypedArray_IsE_SetVariantValueN(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVariantValueN");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<short> *op = static_cast<vtkTypedArray<short> *>(vp);

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
      op->SetVariantValueN(temp0, *temp1);
      }
    else
      {
      op->vtkTypedArray<short>::SetVariantValueN(temp0, *temp1);
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
PyvtkTypedArray_IsE_CopyValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<short> *op = static_cast<vtkTypedArray<short> *>(vp);

  vtkArray *temp0 = NULL;
  vtkArrayCoordinates *temp1 = NULL;
  PyObject *pobj1 = NULL;
  vtkArrayCoordinates *temp2 = NULL;
  PyObject *pobj2 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkArray") &&
      ap.GetSpecialObject(temp1, pobj1, "vtkArrayCoordinates") &&
      ap.GetSpecialObject(temp2, pobj2, "vtkArrayCoordinates"))
    {
    if (ap.IsBound())
      {
      op->CopyValue(temp0, *temp1, *temp2);
      }
    else
      {
      op->vtkTypedArray<short>::CopyValue(temp0, *temp1, *temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  Py_XDECREF(pobj1);
  Py_XDECREF(pobj2);

  return result;
}

static PyObject *
PyvtkTypedArray_IsE_CopyValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<short> *op = static_cast<vtkTypedArray<short> *>(vp);

  vtkArray *temp0 = NULL;
  unsigned long long temp1;
  vtkArrayCoordinates *temp2 = NULL;
  PyObject *pobj2 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkArray") &&
      ap.GetValue(temp1) &&
      ap.GetSpecialObject(temp2, pobj2, "vtkArrayCoordinates"))
    {
    if (ap.IsBound())
      {
      op->CopyValue(temp0, temp1, *temp2);
      }
    else
      {
      op->vtkTypedArray<short>::CopyValue(temp0, temp1, *temp2);
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
PyvtkTypedArray_IsE_CopyValue_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<short> *op = static_cast<vtkTypedArray<short> *>(vp);

  vtkArray *temp0 = NULL;
  vtkArrayCoordinates *temp1 = NULL;
  PyObject *pobj1 = NULL;
  unsigned long long temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkArray") &&
      ap.GetSpecialObject(temp1, pobj1, "vtkArrayCoordinates") &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      op->CopyValue(temp0, *temp1, temp2);
      }
    else
      {
      op->vtkTypedArray<short>::CopyValue(temp0, *temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  Py_XDECREF(pobj1);

  return result;
}

static PyMethodDef PyvtkTypedArray_IsE_CopyValue_Methods[] = {
  {NULL, PyvtkTypedArray_IsE_CopyValue_s1, METH_VARARGS,
   (char*)"@OOO *vtkArray &vtkArrayCoordinates &vtkArrayCoordinates"},
  {NULL, PyvtkTypedArray_IsE_CopyValue_s2, METH_VARARGS,
   (char*)"@OKO *vtkArray &vtkArrayCoordinates"},
  {NULL, PyvtkTypedArray_IsE_CopyValue_s3, METH_VARARGS,
   (char*)"@OOK *vtkArray &vtkArrayCoordinates"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkTypedArray_IsE_CopyValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkTypedArray_IsE_CopyValue_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "CopyValue");
  return NULL;
}



static PyObject *
PyvtkTypedArray_IsE_GetValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<short> *op = static_cast<vtkTypedArray<short> *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    const short *tempr = &op->GetValue(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(*tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkTypedArray_IsE_GetValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<short> *op = static_cast<vtkTypedArray<short> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    const short *tempr = &op->GetValue(temp0, temp1);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(*tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkTypedArray_IsE_GetValue_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<short> *op = static_cast<vtkTypedArray<short> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  vtkIdType temp2;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    const short *tempr = &op->GetValue(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(*tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkTypedArray_IsE_GetValue_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<short> *op = static_cast<vtkTypedArray<short> *>(vp);

  vtkArrayCoordinates *temp0 = NULL;
  PyObject *pobj0 = NULL;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkArrayCoordinates"))
    {
    const short *tempr = &op->GetValue(*temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(*tempr);
      }
    }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkTypedArray_IsE_GetValue_Methods[] = {
  {NULL, PyvtkTypedArray_IsE_GetValue_s1, METH_VARARGS,
   (char*)"@L"},
  {NULL, PyvtkTypedArray_IsE_GetValue_s4, METH_VARARGS,
   (char*)"@O &vtkArrayCoordinates"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkTypedArray_IsE_GetValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkTypedArray_IsE_GetValue_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkTypedArray_IsE_GetValue_s2(self, args);
    case 3:
      return PyvtkTypedArray_IsE_GetValue_s3(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetValue");
  return NULL;
}



static PyObject *
PyvtkTypedArray_IsE_GetValueN(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValueN");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<short> *op = static_cast<vtkTypedArray<short> *>(vp);

  unsigned long long temp0;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    const short *tempr = &op->GetValueN(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(*tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTypedArray_IsE_SetValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<short> *op = static_cast<vtkTypedArray<short> *>(vp);

  vtkIdType temp0;
  short temp1;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    op->SetValue(temp0, temp1);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkTypedArray_IsE_SetValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<short> *op = static_cast<vtkTypedArray<short> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  short temp2;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    op->SetValue(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkTypedArray_IsE_SetValue_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<short> *op = static_cast<vtkTypedArray<short> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  vtkIdType temp2;
  short temp3;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
    {
    op->SetValue(temp0, temp1, temp2, temp3);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkTypedArray_IsE_SetValue_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<short> *op = static_cast<vtkTypedArray<short> *>(vp);

  vtkArrayCoordinates *temp0 = NULL;
  PyObject *pobj0 = NULL;
  short temp1;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(2) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkArrayCoordinates") &&
      ap.GetValue(temp1))
    {
    op->SetValue(*temp0, temp1);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkTypedArray_IsE_SetValue_Methods[] = {
  {NULL, PyvtkTypedArray_IsE_SetValue_s1, METH_VARARGS,
   (char*)"@Lh"},
  {NULL, PyvtkTypedArray_IsE_SetValue_s4, METH_VARARGS,
   (char*)"@Oh &vtkArrayCoordinates"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkTypedArray_IsE_SetValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkTypedArray_IsE_SetValue_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkTypedArray_IsE_SetValue_s2(self, args);
    case 4:
      return PyvtkTypedArray_IsE_SetValue_s3(self, args);
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetValue");
  return NULL;
}



static PyObject *
PyvtkTypedArray_IsE_SetValueN(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValueN");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<short> *op = static_cast<vtkTypedArray<short> *>(vp);

  unsigned long long temp0;
  short temp1;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    op->SetValueN(temp0, temp1);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkTypedArray_IsE_Methods[] = {
  {(char*)"GetVariantValue", PyvtkTypedArray_IsE_GetVariantValue, METH_VARARGS,
   (char*)"V.GetVariantValue(int) -> vtkVariant\nC++: vtkVariant GetVariantValue(vtkIdType i)\nV.GetVariantValue(int, int) -> vtkVariant\nC++: vtkVariant GetVariantValue(vtkIdType i, vtkIdType j)\nV.GetVariantValue(int, int, int) -> vtkVariant\nC++: vtkVariant GetVariantValue(vtkIdType i, vtkIdType j,\n    vtkIdType k)\nV.GetVariantValue(vtkArrayCoordinates) -> vtkVariant\nC++: virtual vtkVariant GetVariantValue(\n    const vtkArrayCoordinates &coordinates)\n\n"},
  {(char*)"SetVariantValue", PyvtkTypedArray_IsE_SetVariantValue, METH_VARARGS,
   (char*)"V.SetVariantValue(int, vtkVariant)\nC++: void SetVariantValue(vtkIdType i, const vtkVariant &value)\nV.SetVariantValue(int, int, vtkVariant)\nC++: void SetVariantValue(vtkIdType i, vtkIdType j,\n    const vtkVariant &value)\nV.SetVariantValue(int, int, int, vtkVariant)\nC++: void SetVariantValue(vtkIdType i, vtkIdType j, vtkIdType k,\n    const vtkVariant &value)\nV.SetVariantValue(vtkArrayCoordinates, vtkVariant)\nC++: virtual void SetVariantValue(\n    const vtkArrayCoordinates &coordinates,\n    const vtkVariant &value)\n\n"},
  {(char*)"GetVariantValueN", PyvtkTypedArray_IsE_GetVariantValueN, METH_VARARGS,
   (char*)"V.GetVariantValueN(int) -> vtkVariant\nC++: virtual vtkVariant GetVariantValueN(const SizeT n)\n\n"},
  {(char*)"SetVariantValueN", PyvtkTypedArray_IsE_SetVariantValueN, METH_VARARGS,
   (char*)"V.SetVariantValueN(int, vtkVariant)\nC++: virtual void SetVariantValueN(const SizeT n,\n    const vtkVariant &value)\n\n"},
  {(char*)"CopyValue", PyvtkTypedArray_IsE_CopyValue, METH_VARARGS,
   (char*)"V.CopyValue(vtkArray, vtkArrayCoordinates, vtkArrayCoordinates)\nC++: virtual void CopyValue(vtkArray *source,\n    const vtkArrayCoordinates &source_coordinates,\n    const vtkArrayCoordinates &target_coordinates)\nV.CopyValue(vtkArray, int, vtkArrayCoordinates)\nC++: virtual void CopyValue(vtkArray *source,\n    const SizeT source_index,\n    const vtkArrayCoordinates &target_coordinates)\nV.CopyValue(vtkArray, vtkArrayCoordinates, int)\nC++: virtual void CopyValue(vtkArray *source,\n    const vtkArrayCoordinates &source_coordinates,\n    const SizeT target_index)\n\n"},
  {(char*)"GetValue", PyvtkTypedArray_IsE_GetValue, METH_VARARGS,
   (char*)"V.GetValue(int) -> int\nC++: virtual const short &GetValue(CoordinateT i)\nV.GetValue(int, int) -> int\nC++: virtual const short &GetValue(CoordinateT i, CoordinateT j)\nV.GetValue(int, int, int) -> int\nC++: virtual const short &GetValue(CoordinateT i, CoordinateT j,\n    CoordinateT k)\nV.GetValue(vtkArrayCoordinates) -> int\nC++: virtual const short &GetValue(\n    const vtkArrayCoordinates &coordinates)\n\nReturns the value stored in the array at the given coordinates.\nNote that the number of dimensions in the supplied coordinates\nmust match the number of dimensions in the array.\n"},
  {(char*)"GetValueN", PyvtkTypedArray_IsE_GetValueN, METH_VARARGS,
   (char*)"V.GetValueN(int) -> int\nC++: virtual const short &GetValueN(const SizeT n)\n\nReturns the n-th value stored in the array, where n is in the\nrange [0, GetNonNullSize()).  This is useful for efficiently\nvisiting every value in the array.  Note that the order in which\nvalues are visited is undefined, but is guaranteed to match the\norder used by vtkArray::GetCoordinatesN().\n"},
  {(char*)"SetValue", PyvtkTypedArray_IsE_SetValue, METH_VARARGS,
   (char*)"V.SetValue(int, int)\nC++: virtual void SetValue(CoordinateT i, const short &value)\nV.SetValue(int, int, int)\nC++: virtual void SetValue(CoordinateT i, CoordinateT j,\n    const short &value)\nV.SetValue(int, int, int, int)\nC++: virtual void SetValue(CoordinateT i, CoordinateT j,\n    CoordinateT k, const short &value)\nV.SetValue(vtkArrayCoordinates, int)\nC++: virtual void SetValue(const vtkArrayCoordinates &coordinates,\n     const short &value)\n\nOverwrites the value stored in the array at the given\ncoordinates. Note that the number of dimensions in the supplied\ncoordinates must match the number of dimensions in the array.\n"},
  {(char*)"SetValueN", PyvtkTypedArray_IsE_SetValueN, METH_VARARGS,
   (char*)"V.SetValueN(int, int)\nC++: virtual void SetValueN(const SizeT n, const short &value)\n\nOverwrites the n-th value stored in the array, where n is in the\nrange [0, GetNonNullSize()).  This is useful for efficiently\nvisiting every value in the array.  Note that the order in which\nvalues are visited is undefined, but is guaranteed to match the\norder used by vtkArray::GetCoordinatesN().\n"},
  {NULL, NULL, 0, NULL}
};

PyObject *PyVTKClass_vtkTypedArray_IsENew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(NULL,
    PyvtkTypedArray_IsE_Methods,
    typeid(vtkTypedArray<short>).name(), modulename,
    "vtkTypedArray_IsE", "vtkTypedArray_IsE",
    PyvtkTypedArray_IsE_Doc(),
    PyVTKClass_vtkArrayNew(modulename));
  return cls;
}

const char **PyvtkTypedArray_IsE_Doc()
{
  static const char *docstring[] = {
    "vtkTypedArray - Provides a type-specific interface to N-way arrays\n\n",
    "Superclass: vtkArray\n\n",
    "vtkTypedArray provides an interface for retrieving and updating data\nin an arbitrary-dimension array.  It derives from vtkArray and is\ntemplated on the type of value stored in the array.\n\nMethods are provided for retrieving and updating array values based\neither on their array coordinates, or on a 1-dimensional integer\nindex.  The latter approach can be used to iterate over the values in\nan array ",
    "in arbitrary order, which is useful when writing filters\nthat operate efficiently on sparse arrays and arrays that can have\nany number of dimensions.\n\nSpecial overloaded methods provide simple access for arrays with one,\ntwo, or three dimensions.\n\nSee Also:\n\nvtkArray, vtkDenseArray, vtkSparseArray\n\nThanks:\n\nDeveloped by Timothy M. Shead (tshead@sandia.gov) at Sandia National\nLaboratories.\n\n",
    NULL
  };

  return docstring;
}

extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkTypedArray_ItENew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkArrayNew
extern "C" { PyObject *PyVTKClass_vtkArrayNew(const char *); }
#define DECLARED_PyVTKClass_vtkArrayNew
#endif

static const char **PyvtkTypedArray_ItE_Doc();


static PyObject *
PyvtkTypedArray_ItE_GetVariantValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVariantValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<unsigned short> *op = static_cast<vtkTypedArray<unsigned short> *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkVariant tempr = (ap.IsBound() ?
      op->GetVariantValue(temp0) :
      op->vtkTypedArray<unsigned short>::GetVariantValue(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildSpecialObject(&tempr, "vtkVariant");
      }
    }

  return result;
}

static PyObject *
PyvtkTypedArray_ItE_GetVariantValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVariantValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<unsigned short> *op = static_cast<vtkTypedArray<unsigned short> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    vtkVariant tempr = (ap.IsBound() ?
      op->GetVariantValue(temp0, temp1) :
      op->vtkTypedArray<unsigned short>::GetVariantValue(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildSpecialObject(&tempr, "vtkVariant");
      }
    }

  return result;
}

static PyObject *
PyvtkTypedArray_ItE_GetVariantValue_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVariantValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<unsigned short> *op = static_cast<vtkTypedArray<unsigned short> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  vtkIdType temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    vtkVariant tempr = (ap.IsBound() ?
      op->GetVariantValue(temp0, temp1, temp2) :
      op->vtkTypedArray<unsigned short>::GetVariantValue(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildSpecialObject(&tempr, "vtkVariant");
      }
    }

  return result;
}

static PyObject *
PyvtkTypedArray_ItE_GetVariantValue_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVariantValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<unsigned short> *op = static_cast<vtkTypedArray<unsigned short> *>(vp);

  vtkArrayCoordinates *temp0 = NULL;
  PyObject *pobj0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkArrayCoordinates"))
    {
    vtkVariant tempr = (ap.IsBound() ?
      op->GetVariantValue(*temp0) :
      op->vtkTypedArray<unsigned short>::GetVariantValue(*temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildSpecialObject(&tempr, "vtkVariant");
      }
    }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkTypedArray_ItE_GetVariantValue_Methods[] = {
  {NULL, PyvtkTypedArray_ItE_GetVariantValue_s1, METH_VARARGS,
   (char*)"@L"},
  {NULL, PyvtkTypedArray_ItE_GetVariantValue_s4, METH_VARARGS,
   (char*)"@O &vtkArrayCoordinates"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkTypedArray_ItE_GetVariantValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkTypedArray_ItE_GetVariantValue_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkTypedArray_ItE_GetVariantValue_s2(self, args);
    case 3:
      return PyvtkTypedArray_ItE_GetVariantValue_s3(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetVariantValue");
  return NULL;
}



static PyObject *
PyvtkTypedArray_ItE_SetVariantValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVariantValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<unsigned short> *op = static_cast<vtkTypedArray<unsigned short> *>(vp);

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
      op->SetVariantValue(temp0, *temp1);
      }
    else
      {
      op->vtkTypedArray<unsigned short>::SetVariantValue(temp0, *temp1);
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
PyvtkTypedArray_ItE_SetVariantValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVariantValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<unsigned short> *op = static_cast<vtkTypedArray<unsigned short> *>(vp);

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
      op->SetVariantValue(temp0, temp1, *temp2);
      }
    else
      {
      op->vtkTypedArray<unsigned short>::SetVariantValue(temp0, temp1, *temp2);
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
PyvtkTypedArray_ItE_SetVariantValue_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVariantValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<unsigned short> *op = static_cast<vtkTypedArray<unsigned short> *>(vp);

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
      op->SetVariantValue(temp0, temp1, temp2, *temp3);
      }
    else
      {
      op->vtkTypedArray<unsigned short>::SetVariantValue(temp0, temp1, temp2, *temp3);
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
PyvtkTypedArray_ItE_SetVariantValue_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVariantValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<unsigned short> *op = static_cast<vtkTypedArray<unsigned short> *>(vp);

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
      op->SetVariantValue(*temp0, *temp1);
      }
    else
      {
      op->vtkTypedArray<unsigned short>::SetVariantValue(*temp0, *temp1);
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

static PyMethodDef PyvtkTypedArray_ItE_SetVariantValue_Methods[] = {
  {NULL, PyvtkTypedArray_ItE_SetVariantValue_s1, METH_VARARGS,
   (char*)"@LO &vtkVariant"},
  {NULL, PyvtkTypedArray_ItE_SetVariantValue_s4, METH_VARARGS,
   (char*)"@OO &vtkArrayCoordinates &vtkVariant"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkTypedArray_ItE_SetVariantValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkTypedArray_ItE_SetVariantValue_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkTypedArray_ItE_SetVariantValue_s2(self, args);
    case 4:
      return PyvtkTypedArray_ItE_SetVariantValue_s3(self, args);
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetVariantValue");
  return NULL;
}



static PyObject *
PyvtkTypedArray_ItE_GetVariantValueN(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVariantValueN");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<unsigned short> *op = static_cast<vtkTypedArray<unsigned short> *>(vp);

  unsigned long long temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkVariant tempr = (ap.IsBound() ?
      op->GetVariantValueN(temp0) :
      op->vtkTypedArray<unsigned short>::GetVariantValueN(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildSpecialObject(&tempr, "vtkVariant");
      }
    }

  return result;
}


static PyObject *
PyvtkTypedArray_ItE_SetVariantValueN(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVariantValueN");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<unsigned short> *op = static_cast<vtkTypedArray<unsigned short> *>(vp);

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
      op->SetVariantValueN(temp0, *temp1);
      }
    else
      {
      op->vtkTypedArray<unsigned short>::SetVariantValueN(temp0, *temp1);
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
PyvtkTypedArray_ItE_CopyValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<unsigned short> *op = static_cast<vtkTypedArray<unsigned short> *>(vp);

  vtkArray *temp0 = NULL;
  vtkArrayCoordinates *temp1 = NULL;
  PyObject *pobj1 = NULL;
  vtkArrayCoordinates *temp2 = NULL;
  PyObject *pobj2 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkArray") &&
      ap.GetSpecialObject(temp1, pobj1, "vtkArrayCoordinates") &&
      ap.GetSpecialObject(temp2, pobj2, "vtkArrayCoordinates"))
    {
    if (ap.IsBound())
      {
      op->CopyValue(temp0, *temp1, *temp2);
      }
    else
      {
      op->vtkTypedArray<unsigned short>::CopyValue(temp0, *temp1, *temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  Py_XDECREF(pobj1);
  Py_XDECREF(pobj2);

  return result;
}

static PyObject *
PyvtkTypedArray_ItE_CopyValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<unsigned short> *op = static_cast<vtkTypedArray<unsigned short> *>(vp);

  vtkArray *temp0 = NULL;
  unsigned long long temp1;
  vtkArrayCoordinates *temp2 = NULL;
  PyObject *pobj2 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkArray") &&
      ap.GetValue(temp1) &&
      ap.GetSpecialObject(temp2, pobj2, "vtkArrayCoordinates"))
    {
    if (ap.IsBound())
      {
      op->CopyValue(temp0, temp1, *temp2);
      }
    else
      {
      op->vtkTypedArray<unsigned short>::CopyValue(temp0, temp1, *temp2);
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
PyvtkTypedArray_ItE_CopyValue_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<unsigned short> *op = static_cast<vtkTypedArray<unsigned short> *>(vp);

  vtkArray *temp0 = NULL;
  vtkArrayCoordinates *temp1 = NULL;
  PyObject *pobj1 = NULL;
  unsigned long long temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkArray") &&
      ap.GetSpecialObject(temp1, pobj1, "vtkArrayCoordinates") &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      op->CopyValue(temp0, *temp1, temp2);
      }
    else
      {
      op->vtkTypedArray<unsigned short>::CopyValue(temp0, *temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  Py_XDECREF(pobj1);

  return result;
}

static PyMethodDef PyvtkTypedArray_ItE_CopyValue_Methods[] = {
  {NULL, PyvtkTypedArray_ItE_CopyValue_s1, METH_VARARGS,
   (char*)"@OOO *vtkArray &vtkArrayCoordinates &vtkArrayCoordinates"},
  {NULL, PyvtkTypedArray_ItE_CopyValue_s2, METH_VARARGS,
   (char*)"@OKO *vtkArray &vtkArrayCoordinates"},
  {NULL, PyvtkTypedArray_ItE_CopyValue_s3, METH_VARARGS,
   (char*)"@OOK *vtkArray &vtkArrayCoordinates"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkTypedArray_ItE_CopyValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkTypedArray_ItE_CopyValue_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "CopyValue");
  return NULL;
}



static PyObject *
PyvtkTypedArray_ItE_GetValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<unsigned short> *op = static_cast<vtkTypedArray<unsigned short> *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    const unsigned short *tempr = &op->GetValue(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(*tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkTypedArray_ItE_GetValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<unsigned short> *op = static_cast<vtkTypedArray<unsigned short> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    const unsigned short *tempr = &op->GetValue(temp0, temp1);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(*tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkTypedArray_ItE_GetValue_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<unsigned short> *op = static_cast<vtkTypedArray<unsigned short> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  vtkIdType temp2;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    const unsigned short *tempr = &op->GetValue(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(*tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkTypedArray_ItE_GetValue_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<unsigned short> *op = static_cast<vtkTypedArray<unsigned short> *>(vp);

  vtkArrayCoordinates *temp0 = NULL;
  PyObject *pobj0 = NULL;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkArrayCoordinates"))
    {
    const unsigned short *tempr = &op->GetValue(*temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(*tempr);
      }
    }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkTypedArray_ItE_GetValue_Methods[] = {
  {NULL, PyvtkTypedArray_ItE_GetValue_s1, METH_VARARGS,
   (char*)"@L"},
  {NULL, PyvtkTypedArray_ItE_GetValue_s4, METH_VARARGS,
   (char*)"@O &vtkArrayCoordinates"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkTypedArray_ItE_GetValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkTypedArray_ItE_GetValue_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkTypedArray_ItE_GetValue_s2(self, args);
    case 3:
      return PyvtkTypedArray_ItE_GetValue_s3(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetValue");
  return NULL;
}



static PyObject *
PyvtkTypedArray_ItE_GetValueN(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValueN");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<unsigned short> *op = static_cast<vtkTypedArray<unsigned short> *>(vp);

  unsigned long long temp0;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    const unsigned short *tempr = &op->GetValueN(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(*tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTypedArray_ItE_SetValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<unsigned short> *op = static_cast<vtkTypedArray<unsigned short> *>(vp);

  vtkIdType temp0;
  unsigned short temp1;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    op->SetValue(temp0, temp1);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkTypedArray_ItE_SetValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<unsigned short> *op = static_cast<vtkTypedArray<unsigned short> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  unsigned short temp2;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    op->SetValue(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkTypedArray_ItE_SetValue_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<unsigned short> *op = static_cast<vtkTypedArray<unsigned short> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  vtkIdType temp2;
  unsigned short temp3;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
    {
    op->SetValue(temp0, temp1, temp2, temp3);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkTypedArray_ItE_SetValue_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<unsigned short> *op = static_cast<vtkTypedArray<unsigned short> *>(vp);

  vtkArrayCoordinates *temp0 = NULL;
  PyObject *pobj0 = NULL;
  unsigned short temp1;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(2) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkArrayCoordinates") &&
      ap.GetValue(temp1))
    {
    op->SetValue(*temp0, temp1);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkTypedArray_ItE_SetValue_Methods[] = {
  {NULL, PyvtkTypedArray_ItE_SetValue_s1, METH_VARARGS,
   (char*)"@LH"},
  {NULL, PyvtkTypedArray_ItE_SetValue_s4, METH_VARARGS,
   (char*)"@OH &vtkArrayCoordinates"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkTypedArray_ItE_SetValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkTypedArray_ItE_SetValue_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkTypedArray_ItE_SetValue_s2(self, args);
    case 4:
      return PyvtkTypedArray_ItE_SetValue_s3(self, args);
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetValue");
  return NULL;
}



static PyObject *
PyvtkTypedArray_ItE_SetValueN(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValueN");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<unsigned short> *op = static_cast<vtkTypedArray<unsigned short> *>(vp);

  unsigned long long temp0;
  unsigned short temp1;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    op->SetValueN(temp0, temp1);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkTypedArray_ItE_Methods[] = {
  {(char*)"GetVariantValue", PyvtkTypedArray_ItE_GetVariantValue, METH_VARARGS,
   (char*)"V.GetVariantValue(int) -> vtkVariant\nC++: vtkVariant GetVariantValue(vtkIdType i)\nV.GetVariantValue(int, int) -> vtkVariant\nC++: vtkVariant GetVariantValue(vtkIdType i, vtkIdType j)\nV.GetVariantValue(int, int, int) -> vtkVariant\nC++: vtkVariant GetVariantValue(vtkIdType i, vtkIdType j,\n    vtkIdType k)\nV.GetVariantValue(vtkArrayCoordinates) -> vtkVariant\nC++: virtual vtkVariant GetVariantValue(\n    const vtkArrayCoordinates &coordinates)\n\n"},
  {(char*)"SetVariantValue", PyvtkTypedArray_ItE_SetVariantValue, METH_VARARGS,
   (char*)"V.SetVariantValue(int, vtkVariant)\nC++: void SetVariantValue(vtkIdType i, const vtkVariant &value)\nV.SetVariantValue(int, int, vtkVariant)\nC++: void SetVariantValue(vtkIdType i, vtkIdType j,\n    const vtkVariant &value)\nV.SetVariantValue(int, int, int, vtkVariant)\nC++: void SetVariantValue(vtkIdType i, vtkIdType j, vtkIdType k,\n    const vtkVariant &value)\nV.SetVariantValue(vtkArrayCoordinates, vtkVariant)\nC++: virtual void SetVariantValue(\n    const vtkArrayCoordinates &coordinates,\n    const vtkVariant &value)\n\n"},
  {(char*)"GetVariantValueN", PyvtkTypedArray_ItE_GetVariantValueN, METH_VARARGS,
   (char*)"V.GetVariantValueN(int) -> vtkVariant\nC++: virtual vtkVariant GetVariantValueN(const SizeT n)\n\n"},
  {(char*)"SetVariantValueN", PyvtkTypedArray_ItE_SetVariantValueN, METH_VARARGS,
   (char*)"V.SetVariantValueN(int, vtkVariant)\nC++: virtual void SetVariantValueN(const SizeT n,\n    const vtkVariant &value)\n\n"},
  {(char*)"CopyValue", PyvtkTypedArray_ItE_CopyValue, METH_VARARGS,
   (char*)"V.CopyValue(vtkArray, vtkArrayCoordinates, vtkArrayCoordinates)\nC++: virtual void CopyValue(vtkArray *source,\n    const vtkArrayCoordinates &source_coordinates,\n    const vtkArrayCoordinates &target_coordinates)\nV.CopyValue(vtkArray, int, vtkArrayCoordinates)\nC++: virtual void CopyValue(vtkArray *source,\n    const SizeT source_index,\n    const vtkArrayCoordinates &target_coordinates)\nV.CopyValue(vtkArray, vtkArrayCoordinates, int)\nC++: virtual void CopyValue(vtkArray *source,\n    const vtkArrayCoordinates &source_coordinates,\n    const SizeT target_index)\n\n"},
  {(char*)"GetValue", PyvtkTypedArray_ItE_GetValue, METH_VARARGS,
   (char*)"V.GetValue(int) -> int\nC++: virtual const unsigned short &GetValue(CoordinateT i)\nV.GetValue(int, int) -> int\nC++: virtual const unsigned short &GetValue(CoordinateT i,\n    CoordinateT j)\nV.GetValue(int, int, int) -> int\nC++: virtual const unsigned short &GetValue(CoordinateT i,\n    CoordinateT j, CoordinateT k)\nV.GetValue(vtkArrayCoordinates) -> int\nC++: virtual const unsigned short &GetValue(\n    const vtkArrayCoordinates &coordinates)\n\nReturns the value stored in the array at the given coordinates.\nNote that the number of dimensions in the supplied coordinates\nmust match the number of dimensions in the array.\n"},
  {(char*)"GetValueN", PyvtkTypedArray_ItE_GetValueN, METH_VARARGS,
   (char*)"V.GetValueN(int) -> int\nC++: virtual const unsigned short &GetValueN(const SizeT n)\n\nReturns the n-th value stored in the array, where n is in the\nrange [0, GetNonNullSize()).  This is useful for efficiently\nvisiting every value in the array.  Note that the order in which\nvalues are visited is undefined, but is guaranteed to match the\norder used by vtkArray::GetCoordinatesN().\n"},
  {(char*)"SetValue", PyvtkTypedArray_ItE_SetValue, METH_VARARGS,
   (char*)"V.SetValue(int, int)\nC++: virtual void SetValue(CoordinateT i,\n    const unsigned short &value)\nV.SetValue(int, int, int)\nC++: virtual void SetValue(CoordinateT i, CoordinateT j,\n    const unsigned short &value)\nV.SetValue(int, int, int, int)\nC++: virtual void SetValue(CoordinateT i, CoordinateT j,\n    CoordinateT k, const unsigned short &value)\nV.SetValue(vtkArrayCoordinates, int)\nC++: virtual void SetValue(const vtkArrayCoordinates &coordinates,\n     const unsigned short &value)\n\nOverwrites the value stored in the array at the given\ncoordinates. Note that the number of dimensions in the supplied\ncoordinates must match the number of dimensions in the array.\n"},
  {(char*)"SetValueN", PyvtkTypedArray_ItE_SetValueN, METH_VARARGS,
   (char*)"V.SetValueN(int, int)\nC++: virtual void SetValueN(const SizeT n,\n    const unsigned short &value)\n\nOverwrites the n-th value stored in the array, where n is in the\nrange [0, GetNonNullSize()).  This is useful for efficiently\nvisiting every value in the array.  Note that the order in which\nvalues are visited is undefined, but is guaranteed to match the\norder used by vtkArray::GetCoordinatesN().\n"},
  {NULL, NULL, 0, NULL}
};

PyObject *PyVTKClass_vtkTypedArray_ItENew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(NULL,
    PyvtkTypedArray_ItE_Methods,
    typeid(vtkTypedArray<unsigned short>).name(), modulename,
    "vtkTypedArray_ItE", "vtkTypedArray_ItE",
    PyvtkTypedArray_ItE_Doc(),
    PyVTKClass_vtkArrayNew(modulename));
  return cls;
}

const char **PyvtkTypedArray_ItE_Doc()
{
  static const char *docstring[] = {
    "vtkTypedArray - Provides a type-specific interface to N-way arrays\n\n",
    "Superclass: vtkArray\n\n",
    "vtkTypedArray provides an interface for retrieving and updating data\nin an arbitrary-dimension array.  It derives from vtkArray and is\ntemplated on the type of value stored in the array.\n\nMethods are provided for retrieving and updating array values based\neither on their array coordinates, or on a 1-dimensional integer\nindex.  The latter approach can be used to iterate over the values in\nan array ",
    "in arbitrary order, which is useful when writing filters\nthat operate efficiently on sparse arrays and arrays that can have\nany number of dimensions.\n\nSpecial overloaded methods provide simple access for arrays with one,\ntwo, or three dimensions.\n\nSee Also:\n\nvtkArray, vtkDenseArray, vtkSparseArray\n\nThanks:\n\nDeveloped by Timothy M. Shead (tshead@sandia.gov) at Sandia National\nLaboratories.\n\n",
    NULL
  };

  return docstring;
}

extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkTypedArray_IiENew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkArrayNew
extern "C" { PyObject *PyVTKClass_vtkArrayNew(const char *); }
#define DECLARED_PyVTKClass_vtkArrayNew
#endif

static const char **PyvtkTypedArray_IiE_Doc();


static PyObject *
PyvtkTypedArray_IiE_GetVariantValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVariantValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<int> *op = static_cast<vtkTypedArray<int> *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkVariant tempr = (ap.IsBound() ?
      op->GetVariantValue(temp0) :
      op->vtkTypedArray<int>::GetVariantValue(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildSpecialObject(&tempr, "vtkVariant");
      }
    }

  return result;
}

static PyObject *
PyvtkTypedArray_IiE_GetVariantValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVariantValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<int> *op = static_cast<vtkTypedArray<int> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    vtkVariant tempr = (ap.IsBound() ?
      op->GetVariantValue(temp0, temp1) :
      op->vtkTypedArray<int>::GetVariantValue(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildSpecialObject(&tempr, "vtkVariant");
      }
    }

  return result;
}

static PyObject *
PyvtkTypedArray_IiE_GetVariantValue_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVariantValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<int> *op = static_cast<vtkTypedArray<int> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  vtkIdType temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    vtkVariant tempr = (ap.IsBound() ?
      op->GetVariantValue(temp0, temp1, temp2) :
      op->vtkTypedArray<int>::GetVariantValue(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildSpecialObject(&tempr, "vtkVariant");
      }
    }

  return result;
}

static PyObject *
PyvtkTypedArray_IiE_GetVariantValue_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVariantValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<int> *op = static_cast<vtkTypedArray<int> *>(vp);

  vtkArrayCoordinates *temp0 = NULL;
  PyObject *pobj0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkArrayCoordinates"))
    {
    vtkVariant tempr = (ap.IsBound() ?
      op->GetVariantValue(*temp0) :
      op->vtkTypedArray<int>::GetVariantValue(*temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildSpecialObject(&tempr, "vtkVariant");
      }
    }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkTypedArray_IiE_GetVariantValue_Methods[] = {
  {NULL, PyvtkTypedArray_IiE_GetVariantValue_s1, METH_VARARGS,
   (char*)"@L"},
  {NULL, PyvtkTypedArray_IiE_GetVariantValue_s4, METH_VARARGS,
   (char*)"@O &vtkArrayCoordinates"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkTypedArray_IiE_GetVariantValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkTypedArray_IiE_GetVariantValue_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkTypedArray_IiE_GetVariantValue_s2(self, args);
    case 3:
      return PyvtkTypedArray_IiE_GetVariantValue_s3(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetVariantValue");
  return NULL;
}



static PyObject *
PyvtkTypedArray_IiE_SetVariantValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVariantValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<int> *op = static_cast<vtkTypedArray<int> *>(vp);

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
      op->SetVariantValue(temp0, *temp1);
      }
    else
      {
      op->vtkTypedArray<int>::SetVariantValue(temp0, *temp1);
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
PyvtkTypedArray_IiE_SetVariantValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVariantValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<int> *op = static_cast<vtkTypedArray<int> *>(vp);

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
      op->SetVariantValue(temp0, temp1, *temp2);
      }
    else
      {
      op->vtkTypedArray<int>::SetVariantValue(temp0, temp1, *temp2);
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
PyvtkTypedArray_IiE_SetVariantValue_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVariantValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<int> *op = static_cast<vtkTypedArray<int> *>(vp);

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
      op->SetVariantValue(temp0, temp1, temp2, *temp3);
      }
    else
      {
      op->vtkTypedArray<int>::SetVariantValue(temp0, temp1, temp2, *temp3);
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
PyvtkTypedArray_IiE_SetVariantValue_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVariantValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<int> *op = static_cast<vtkTypedArray<int> *>(vp);

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
      op->SetVariantValue(*temp0, *temp1);
      }
    else
      {
      op->vtkTypedArray<int>::SetVariantValue(*temp0, *temp1);
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

static PyMethodDef PyvtkTypedArray_IiE_SetVariantValue_Methods[] = {
  {NULL, PyvtkTypedArray_IiE_SetVariantValue_s1, METH_VARARGS,
   (char*)"@LO &vtkVariant"},
  {NULL, PyvtkTypedArray_IiE_SetVariantValue_s4, METH_VARARGS,
   (char*)"@OO &vtkArrayCoordinates &vtkVariant"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkTypedArray_IiE_SetVariantValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkTypedArray_IiE_SetVariantValue_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkTypedArray_IiE_SetVariantValue_s2(self, args);
    case 4:
      return PyvtkTypedArray_IiE_SetVariantValue_s3(self, args);
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetVariantValue");
  return NULL;
}



static PyObject *
PyvtkTypedArray_IiE_GetVariantValueN(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVariantValueN");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<int> *op = static_cast<vtkTypedArray<int> *>(vp);

  unsigned long long temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkVariant tempr = (ap.IsBound() ?
      op->GetVariantValueN(temp0) :
      op->vtkTypedArray<int>::GetVariantValueN(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildSpecialObject(&tempr, "vtkVariant");
      }
    }

  return result;
}


static PyObject *
PyvtkTypedArray_IiE_SetVariantValueN(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVariantValueN");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<int> *op = static_cast<vtkTypedArray<int> *>(vp);

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
      op->SetVariantValueN(temp0, *temp1);
      }
    else
      {
      op->vtkTypedArray<int>::SetVariantValueN(temp0, *temp1);
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
PyvtkTypedArray_IiE_CopyValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<int> *op = static_cast<vtkTypedArray<int> *>(vp);

  vtkArray *temp0 = NULL;
  vtkArrayCoordinates *temp1 = NULL;
  PyObject *pobj1 = NULL;
  vtkArrayCoordinates *temp2 = NULL;
  PyObject *pobj2 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkArray") &&
      ap.GetSpecialObject(temp1, pobj1, "vtkArrayCoordinates") &&
      ap.GetSpecialObject(temp2, pobj2, "vtkArrayCoordinates"))
    {
    if (ap.IsBound())
      {
      op->CopyValue(temp0, *temp1, *temp2);
      }
    else
      {
      op->vtkTypedArray<int>::CopyValue(temp0, *temp1, *temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  Py_XDECREF(pobj1);
  Py_XDECREF(pobj2);

  return result;
}

static PyObject *
PyvtkTypedArray_IiE_CopyValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<int> *op = static_cast<vtkTypedArray<int> *>(vp);

  vtkArray *temp0 = NULL;
  unsigned long long temp1;
  vtkArrayCoordinates *temp2 = NULL;
  PyObject *pobj2 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkArray") &&
      ap.GetValue(temp1) &&
      ap.GetSpecialObject(temp2, pobj2, "vtkArrayCoordinates"))
    {
    if (ap.IsBound())
      {
      op->CopyValue(temp0, temp1, *temp2);
      }
    else
      {
      op->vtkTypedArray<int>::CopyValue(temp0, temp1, *temp2);
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
PyvtkTypedArray_IiE_CopyValue_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<int> *op = static_cast<vtkTypedArray<int> *>(vp);

  vtkArray *temp0 = NULL;
  vtkArrayCoordinates *temp1 = NULL;
  PyObject *pobj1 = NULL;
  unsigned long long temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkArray") &&
      ap.GetSpecialObject(temp1, pobj1, "vtkArrayCoordinates") &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      op->CopyValue(temp0, *temp1, temp2);
      }
    else
      {
      op->vtkTypedArray<int>::CopyValue(temp0, *temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  Py_XDECREF(pobj1);

  return result;
}

static PyMethodDef PyvtkTypedArray_IiE_CopyValue_Methods[] = {
  {NULL, PyvtkTypedArray_IiE_CopyValue_s1, METH_VARARGS,
   (char*)"@OOO *vtkArray &vtkArrayCoordinates &vtkArrayCoordinates"},
  {NULL, PyvtkTypedArray_IiE_CopyValue_s2, METH_VARARGS,
   (char*)"@OKO *vtkArray &vtkArrayCoordinates"},
  {NULL, PyvtkTypedArray_IiE_CopyValue_s3, METH_VARARGS,
   (char*)"@OOK *vtkArray &vtkArrayCoordinates"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkTypedArray_IiE_CopyValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkTypedArray_IiE_CopyValue_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "CopyValue");
  return NULL;
}



static PyObject *
PyvtkTypedArray_IiE_GetValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<int> *op = static_cast<vtkTypedArray<int> *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    const int *tempr = &op->GetValue(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(*tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkTypedArray_IiE_GetValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<int> *op = static_cast<vtkTypedArray<int> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    const int *tempr = &op->GetValue(temp0, temp1);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(*tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkTypedArray_IiE_GetValue_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<int> *op = static_cast<vtkTypedArray<int> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  vtkIdType temp2;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    const int *tempr = &op->GetValue(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(*tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkTypedArray_IiE_GetValue_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<int> *op = static_cast<vtkTypedArray<int> *>(vp);

  vtkArrayCoordinates *temp0 = NULL;
  PyObject *pobj0 = NULL;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkArrayCoordinates"))
    {
    const int *tempr = &op->GetValue(*temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(*tempr);
      }
    }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkTypedArray_IiE_GetValue_Methods[] = {
  {NULL, PyvtkTypedArray_IiE_GetValue_s1, METH_VARARGS,
   (char*)"@L"},
  {NULL, PyvtkTypedArray_IiE_GetValue_s4, METH_VARARGS,
   (char*)"@O &vtkArrayCoordinates"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkTypedArray_IiE_GetValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkTypedArray_IiE_GetValue_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkTypedArray_IiE_GetValue_s2(self, args);
    case 3:
      return PyvtkTypedArray_IiE_GetValue_s3(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetValue");
  return NULL;
}



static PyObject *
PyvtkTypedArray_IiE_GetValueN(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValueN");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<int> *op = static_cast<vtkTypedArray<int> *>(vp);

  unsigned long long temp0;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    const int *tempr = &op->GetValueN(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(*tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTypedArray_IiE_SetValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<int> *op = static_cast<vtkTypedArray<int> *>(vp);

  vtkIdType temp0;
  int temp1;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    op->SetValue(temp0, temp1);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkTypedArray_IiE_SetValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<int> *op = static_cast<vtkTypedArray<int> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  int temp2;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    op->SetValue(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkTypedArray_IiE_SetValue_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<int> *op = static_cast<vtkTypedArray<int> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  vtkIdType temp2;
  int temp3;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
    {
    op->SetValue(temp0, temp1, temp2, temp3);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkTypedArray_IiE_SetValue_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<int> *op = static_cast<vtkTypedArray<int> *>(vp);

  vtkArrayCoordinates *temp0 = NULL;
  PyObject *pobj0 = NULL;
  int temp1;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(2) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkArrayCoordinates") &&
      ap.GetValue(temp1))
    {
    op->SetValue(*temp0, temp1);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkTypedArray_IiE_SetValue_Methods[] = {
  {NULL, PyvtkTypedArray_IiE_SetValue_s1, METH_VARARGS,
   (char*)"@Li"},
  {NULL, PyvtkTypedArray_IiE_SetValue_s4, METH_VARARGS,
   (char*)"@Oi &vtkArrayCoordinates"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkTypedArray_IiE_SetValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkTypedArray_IiE_SetValue_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkTypedArray_IiE_SetValue_s2(self, args);
    case 4:
      return PyvtkTypedArray_IiE_SetValue_s3(self, args);
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetValue");
  return NULL;
}



static PyObject *
PyvtkTypedArray_IiE_SetValueN(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValueN");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<int> *op = static_cast<vtkTypedArray<int> *>(vp);

  unsigned long long temp0;
  int temp1;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    op->SetValueN(temp0, temp1);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkTypedArray_IiE_Methods[] = {
  {(char*)"GetVariantValue", PyvtkTypedArray_IiE_GetVariantValue, METH_VARARGS,
   (char*)"V.GetVariantValue(int) -> vtkVariant\nC++: vtkVariant GetVariantValue(vtkIdType i)\nV.GetVariantValue(int, int) -> vtkVariant\nC++: vtkVariant GetVariantValue(vtkIdType i, vtkIdType j)\nV.GetVariantValue(int, int, int) -> vtkVariant\nC++: vtkVariant GetVariantValue(vtkIdType i, vtkIdType j,\n    vtkIdType k)\nV.GetVariantValue(vtkArrayCoordinates) -> vtkVariant\nC++: virtual vtkVariant GetVariantValue(\n    const vtkArrayCoordinates &coordinates)\n\n"},
  {(char*)"SetVariantValue", PyvtkTypedArray_IiE_SetVariantValue, METH_VARARGS,
   (char*)"V.SetVariantValue(int, vtkVariant)\nC++: void SetVariantValue(vtkIdType i, const vtkVariant &value)\nV.SetVariantValue(int, int, vtkVariant)\nC++: void SetVariantValue(vtkIdType i, vtkIdType j,\n    const vtkVariant &value)\nV.SetVariantValue(int, int, int, vtkVariant)\nC++: void SetVariantValue(vtkIdType i, vtkIdType j, vtkIdType k,\n    const vtkVariant &value)\nV.SetVariantValue(vtkArrayCoordinates, vtkVariant)\nC++: virtual void SetVariantValue(\n    const vtkArrayCoordinates &coordinates,\n    const vtkVariant &value)\n\n"},
  {(char*)"GetVariantValueN", PyvtkTypedArray_IiE_GetVariantValueN, METH_VARARGS,
   (char*)"V.GetVariantValueN(int) -> vtkVariant\nC++: virtual vtkVariant GetVariantValueN(const SizeT n)\n\n"},
  {(char*)"SetVariantValueN", PyvtkTypedArray_IiE_SetVariantValueN, METH_VARARGS,
   (char*)"V.SetVariantValueN(int, vtkVariant)\nC++: virtual void SetVariantValueN(const SizeT n,\n    const vtkVariant &value)\n\n"},
  {(char*)"CopyValue", PyvtkTypedArray_IiE_CopyValue, METH_VARARGS,
   (char*)"V.CopyValue(vtkArray, vtkArrayCoordinates, vtkArrayCoordinates)\nC++: virtual void CopyValue(vtkArray *source,\n    const vtkArrayCoordinates &source_coordinates,\n    const vtkArrayCoordinates &target_coordinates)\nV.CopyValue(vtkArray, int, vtkArrayCoordinates)\nC++: virtual void CopyValue(vtkArray *source,\n    const SizeT source_index,\n    const vtkArrayCoordinates &target_coordinates)\nV.CopyValue(vtkArray, vtkArrayCoordinates, int)\nC++: virtual void CopyValue(vtkArray *source,\n    const vtkArrayCoordinates &source_coordinates,\n    const SizeT target_index)\n\n"},
  {(char*)"GetValue", PyvtkTypedArray_IiE_GetValue, METH_VARARGS,
   (char*)"V.GetValue(int) -> int\nC++: virtual const int &GetValue(CoordinateT i)\nV.GetValue(int, int) -> int\nC++: virtual const int &GetValue(CoordinateT i, CoordinateT j)\nV.GetValue(int, int, int) -> int\nC++: virtual const int &GetValue(CoordinateT i, CoordinateT j,\n    CoordinateT k)\nV.GetValue(vtkArrayCoordinates) -> int\nC++: virtual const int &GetValue(\n    const vtkArrayCoordinates &coordinates)\n\nReturns the value stored in the array at the given coordinates.\nNote that the number of dimensions in the supplied coordinates\nmust match the number of dimensions in the array.\n"},
  {(char*)"GetValueN", PyvtkTypedArray_IiE_GetValueN, METH_VARARGS,
   (char*)"V.GetValueN(int) -> int\nC++: virtual const int &GetValueN(const SizeT n)\n\nReturns the n-th value stored in the array, where n is in the\nrange [0, GetNonNullSize()).  This is useful for efficiently\nvisiting every value in the array.  Note that the order in which\nvalues are visited is undefined, but is guaranteed to match the\norder used by vtkArray::GetCoordinatesN().\n"},
  {(char*)"SetValue", PyvtkTypedArray_IiE_SetValue, METH_VARARGS,
   (char*)"V.SetValue(int, int)\nC++: virtual void SetValue(CoordinateT i, const int &value)\nV.SetValue(int, int, int)\nC++: virtual void SetValue(CoordinateT i, CoordinateT j,\n    const int &value)\nV.SetValue(int, int, int, int)\nC++: virtual void SetValue(CoordinateT i, CoordinateT j,\n    CoordinateT k, const int &value)\nV.SetValue(vtkArrayCoordinates, int)\nC++: virtual void SetValue(const vtkArrayCoordinates &coordinates,\n     const int &value)\n\nOverwrites the value stored in the array at the given\ncoordinates. Note that the number of dimensions in the supplied\ncoordinates must match the number of dimensions in the array.\n"},
  {(char*)"SetValueN", PyvtkTypedArray_IiE_SetValueN, METH_VARARGS,
   (char*)"V.SetValueN(int, int)\nC++: virtual void SetValueN(const SizeT n, const int &value)\n\nOverwrites the n-th value stored in the array, where n is in the\nrange [0, GetNonNullSize()).  This is useful for efficiently\nvisiting every value in the array.  Note that the order in which\nvalues are visited is undefined, but is guaranteed to match the\norder used by vtkArray::GetCoordinatesN().\n"},
  {NULL, NULL, 0, NULL}
};

PyObject *PyVTKClass_vtkTypedArray_IiENew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(NULL,
    PyvtkTypedArray_IiE_Methods,
    typeid(vtkTypedArray<int>).name(), modulename,
    "vtkTypedArray_IiE", "vtkTypedArray_IiE",
    PyvtkTypedArray_IiE_Doc(),
    PyVTKClass_vtkArrayNew(modulename));
  return cls;
}

const char **PyvtkTypedArray_IiE_Doc()
{
  static const char *docstring[] = {
    "vtkTypedArray - Provides a type-specific interface to N-way arrays\n\n",
    "Superclass: vtkArray\n\n",
    "vtkTypedArray provides an interface for retrieving and updating data\nin an arbitrary-dimension array.  It derives from vtkArray and is\ntemplated on the type of value stored in the array.\n\nMethods are provided for retrieving and updating array values based\neither on their array coordinates, or on a 1-dimensional integer\nindex.  The latter approach can be used to iterate over the values in\nan array ",
    "in arbitrary order, which is useful when writing filters\nthat operate efficiently on sparse arrays and arrays that can have\nany number of dimensions.\n\nSpecial overloaded methods provide simple access for arrays with one,\ntwo, or three dimensions.\n\nSee Also:\n\nvtkArray, vtkDenseArray, vtkSparseArray\n\nThanks:\n\nDeveloped by Timothy M. Shead (tshead@sandia.gov) at Sandia National\nLaboratories.\n\n",
    NULL
  };

  return docstring;
}

extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkTypedArray_IjENew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkArrayNew
extern "C" { PyObject *PyVTKClass_vtkArrayNew(const char *); }
#define DECLARED_PyVTKClass_vtkArrayNew
#endif

static const char **PyvtkTypedArray_IjE_Doc();


static PyObject *
PyvtkTypedArray_IjE_GetVariantValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVariantValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<unsigned int> *op = static_cast<vtkTypedArray<unsigned int> *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkVariant tempr = (ap.IsBound() ?
      op->GetVariantValue(temp0) :
      op->vtkTypedArray<unsigned int>::GetVariantValue(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildSpecialObject(&tempr, "vtkVariant");
      }
    }

  return result;
}

static PyObject *
PyvtkTypedArray_IjE_GetVariantValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVariantValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<unsigned int> *op = static_cast<vtkTypedArray<unsigned int> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    vtkVariant tempr = (ap.IsBound() ?
      op->GetVariantValue(temp0, temp1) :
      op->vtkTypedArray<unsigned int>::GetVariantValue(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildSpecialObject(&tempr, "vtkVariant");
      }
    }

  return result;
}

static PyObject *
PyvtkTypedArray_IjE_GetVariantValue_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVariantValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<unsigned int> *op = static_cast<vtkTypedArray<unsigned int> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  vtkIdType temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    vtkVariant tempr = (ap.IsBound() ?
      op->GetVariantValue(temp0, temp1, temp2) :
      op->vtkTypedArray<unsigned int>::GetVariantValue(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildSpecialObject(&tempr, "vtkVariant");
      }
    }

  return result;
}

static PyObject *
PyvtkTypedArray_IjE_GetVariantValue_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVariantValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<unsigned int> *op = static_cast<vtkTypedArray<unsigned int> *>(vp);

  vtkArrayCoordinates *temp0 = NULL;
  PyObject *pobj0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkArrayCoordinates"))
    {
    vtkVariant tempr = (ap.IsBound() ?
      op->GetVariantValue(*temp0) :
      op->vtkTypedArray<unsigned int>::GetVariantValue(*temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildSpecialObject(&tempr, "vtkVariant");
      }
    }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkTypedArray_IjE_GetVariantValue_Methods[] = {
  {NULL, PyvtkTypedArray_IjE_GetVariantValue_s1, METH_VARARGS,
   (char*)"@L"},
  {NULL, PyvtkTypedArray_IjE_GetVariantValue_s4, METH_VARARGS,
   (char*)"@O &vtkArrayCoordinates"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkTypedArray_IjE_GetVariantValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkTypedArray_IjE_GetVariantValue_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkTypedArray_IjE_GetVariantValue_s2(self, args);
    case 3:
      return PyvtkTypedArray_IjE_GetVariantValue_s3(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetVariantValue");
  return NULL;
}



static PyObject *
PyvtkTypedArray_IjE_SetVariantValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVariantValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<unsigned int> *op = static_cast<vtkTypedArray<unsigned int> *>(vp);

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
      op->SetVariantValue(temp0, *temp1);
      }
    else
      {
      op->vtkTypedArray<unsigned int>::SetVariantValue(temp0, *temp1);
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
PyvtkTypedArray_IjE_SetVariantValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVariantValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<unsigned int> *op = static_cast<vtkTypedArray<unsigned int> *>(vp);

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
      op->SetVariantValue(temp0, temp1, *temp2);
      }
    else
      {
      op->vtkTypedArray<unsigned int>::SetVariantValue(temp0, temp1, *temp2);
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
PyvtkTypedArray_IjE_SetVariantValue_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVariantValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<unsigned int> *op = static_cast<vtkTypedArray<unsigned int> *>(vp);

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
      op->SetVariantValue(temp0, temp1, temp2, *temp3);
      }
    else
      {
      op->vtkTypedArray<unsigned int>::SetVariantValue(temp0, temp1, temp2, *temp3);
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
PyvtkTypedArray_IjE_SetVariantValue_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVariantValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<unsigned int> *op = static_cast<vtkTypedArray<unsigned int> *>(vp);

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
      op->SetVariantValue(*temp0, *temp1);
      }
    else
      {
      op->vtkTypedArray<unsigned int>::SetVariantValue(*temp0, *temp1);
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

static PyMethodDef PyvtkTypedArray_IjE_SetVariantValue_Methods[] = {
  {NULL, PyvtkTypedArray_IjE_SetVariantValue_s1, METH_VARARGS,
   (char*)"@LO &vtkVariant"},
  {NULL, PyvtkTypedArray_IjE_SetVariantValue_s4, METH_VARARGS,
   (char*)"@OO &vtkArrayCoordinates &vtkVariant"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkTypedArray_IjE_SetVariantValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkTypedArray_IjE_SetVariantValue_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkTypedArray_IjE_SetVariantValue_s2(self, args);
    case 4:
      return PyvtkTypedArray_IjE_SetVariantValue_s3(self, args);
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetVariantValue");
  return NULL;
}



static PyObject *
PyvtkTypedArray_IjE_GetVariantValueN(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVariantValueN");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<unsigned int> *op = static_cast<vtkTypedArray<unsigned int> *>(vp);

  unsigned long long temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkVariant tempr = (ap.IsBound() ?
      op->GetVariantValueN(temp0) :
      op->vtkTypedArray<unsigned int>::GetVariantValueN(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildSpecialObject(&tempr, "vtkVariant");
      }
    }

  return result;
}


static PyObject *
PyvtkTypedArray_IjE_SetVariantValueN(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVariantValueN");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<unsigned int> *op = static_cast<vtkTypedArray<unsigned int> *>(vp);

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
      op->SetVariantValueN(temp0, *temp1);
      }
    else
      {
      op->vtkTypedArray<unsigned int>::SetVariantValueN(temp0, *temp1);
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
PyvtkTypedArray_IjE_CopyValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<unsigned int> *op = static_cast<vtkTypedArray<unsigned int> *>(vp);

  vtkArray *temp0 = NULL;
  vtkArrayCoordinates *temp1 = NULL;
  PyObject *pobj1 = NULL;
  vtkArrayCoordinates *temp2 = NULL;
  PyObject *pobj2 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkArray") &&
      ap.GetSpecialObject(temp1, pobj1, "vtkArrayCoordinates") &&
      ap.GetSpecialObject(temp2, pobj2, "vtkArrayCoordinates"))
    {
    if (ap.IsBound())
      {
      op->CopyValue(temp0, *temp1, *temp2);
      }
    else
      {
      op->vtkTypedArray<unsigned int>::CopyValue(temp0, *temp1, *temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  Py_XDECREF(pobj1);
  Py_XDECREF(pobj2);

  return result;
}

static PyObject *
PyvtkTypedArray_IjE_CopyValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<unsigned int> *op = static_cast<vtkTypedArray<unsigned int> *>(vp);

  vtkArray *temp0 = NULL;
  unsigned long long temp1;
  vtkArrayCoordinates *temp2 = NULL;
  PyObject *pobj2 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkArray") &&
      ap.GetValue(temp1) &&
      ap.GetSpecialObject(temp2, pobj2, "vtkArrayCoordinates"))
    {
    if (ap.IsBound())
      {
      op->CopyValue(temp0, temp1, *temp2);
      }
    else
      {
      op->vtkTypedArray<unsigned int>::CopyValue(temp0, temp1, *temp2);
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
PyvtkTypedArray_IjE_CopyValue_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<unsigned int> *op = static_cast<vtkTypedArray<unsigned int> *>(vp);

  vtkArray *temp0 = NULL;
  vtkArrayCoordinates *temp1 = NULL;
  PyObject *pobj1 = NULL;
  unsigned long long temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkArray") &&
      ap.GetSpecialObject(temp1, pobj1, "vtkArrayCoordinates") &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      op->CopyValue(temp0, *temp1, temp2);
      }
    else
      {
      op->vtkTypedArray<unsigned int>::CopyValue(temp0, *temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  Py_XDECREF(pobj1);

  return result;
}

static PyMethodDef PyvtkTypedArray_IjE_CopyValue_Methods[] = {
  {NULL, PyvtkTypedArray_IjE_CopyValue_s1, METH_VARARGS,
   (char*)"@OOO *vtkArray &vtkArrayCoordinates &vtkArrayCoordinates"},
  {NULL, PyvtkTypedArray_IjE_CopyValue_s2, METH_VARARGS,
   (char*)"@OKO *vtkArray &vtkArrayCoordinates"},
  {NULL, PyvtkTypedArray_IjE_CopyValue_s3, METH_VARARGS,
   (char*)"@OOK *vtkArray &vtkArrayCoordinates"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkTypedArray_IjE_CopyValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkTypedArray_IjE_CopyValue_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "CopyValue");
  return NULL;
}



static PyObject *
PyvtkTypedArray_IjE_GetValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<unsigned int> *op = static_cast<vtkTypedArray<unsigned int> *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    const unsigned int *tempr = &op->GetValue(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(*tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkTypedArray_IjE_GetValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<unsigned int> *op = static_cast<vtkTypedArray<unsigned int> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    const unsigned int *tempr = &op->GetValue(temp0, temp1);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(*tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkTypedArray_IjE_GetValue_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<unsigned int> *op = static_cast<vtkTypedArray<unsigned int> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  vtkIdType temp2;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    const unsigned int *tempr = &op->GetValue(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(*tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkTypedArray_IjE_GetValue_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<unsigned int> *op = static_cast<vtkTypedArray<unsigned int> *>(vp);

  vtkArrayCoordinates *temp0 = NULL;
  PyObject *pobj0 = NULL;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkArrayCoordinates"))
    {
    const unsigned int *tempr = &op->GetValue(*temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(*tempr);
      }
    }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkTypedArray_IjE_GetValue_Methods[] = {
  {NULL, PyvtkTypedArray_IjE_GetValue_s1, METH_VARARGS,
   (char*)"@L"},
  {NULL, PyvtkTypedArray_IjE_GetValue_s4, METH_VARARGS,
   (char*)"@O &vtkArrayCoordinates"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkTypedArray_IjE_GetValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkTypedArray_IjE_GetValue_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkTypedArray_IjE_GetValue_s2(self, args);
    case 3:
      return PyvtkTypedArray_IjE_GetValue_s3(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetValue");
  return NULL;
}



static PyObject *
PyvtkTypedArray_IjE_GetValueN(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValueN");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<unsigned int> *op = static_cast<vtkTypedArray<unsigned int> *>(vp);

  unsigned long long temp0;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    const unsigned int *tempr = &op->GetValueN(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(*tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTypedArray_IjE_SetValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<unsigned int> *op = static_cast<vtkTypedArray<unsigned int> *>(vp);

  vtkIdType temp0;
  unsigned int temp1;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    op->SetValue(temp0, temp1);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkTypedArray_IjE_SetValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<unsigned int> *op = static_cast<vtkTypedArray<unsigned int> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  unsigned int temp2;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    op->SetValue(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkTypedArray_IjE_SetValue_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<unsigned int> *op = static_cast<vtkTypedArray<unsigned int> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  vtkIdType temp2;
  unsigned int temp3;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
    {
    op->SetValue(temp0, temp1, temp2, temp3);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkTypedArray_IjE_SetValue_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<unsigned int> *op = static_cast<vtkTypedArray<unsigned int> *>(vp);

  vtkArrayCoordinates *temp0 = NULL;
  PyObject *pobj0 = NULL;
  unsigned int temp1;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(2) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkArrayCoordinates") &&
      ap.GetValue(temp1))
    {
    op->SetValue(*temp0, temp1);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkTypedArray_IjE_SetValue_Methods[] = {
  {NULL, PyvtkTypedArray_IjE_SetValue_s1, METH_VARARGS,
   (char*)"@LI"},
  {NULL, PyvtkTypedArray_IjE_SetValue_s4, METH_VARARGS,
   (char*)"@OI &vtkArrayCoordinates"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkTypedArray_IjE_SetValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkTypedArray_IjE_SetValue_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkTypedArray_IjE_SetValue_s2(self, args);
    case 4:
      return PyvtkTypedArray_IjE_SetValue_s3(self, args);
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetValue");
  return NULL;
}



static PyObject *
PyvtkTypedArray_IjE_SetValueN(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValueN");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<unsigned int> *op = static_cast<vtkTypedArray<unsigned int> *>(vp);

  unsigned long long temp0;
  unsigned int temp1;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    op->SetValueN(temp0, temp1);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkTypedArray_IjE_Methods[] = {
  {(char*)"GetVariantValue", PyvtkTypedArray_IjE_GetVariantValue, METH_VARARGS,
   (char*)"V.GetVariantValue(int) -> vtkVariant\nC++: vtkVariant GetVariantValue(vtkIdType i)\nV.GetVariantValue(int, int) -> vtkVariant\nC++: vtkVariant GetVariantValue(vtkIdType i, vtkIdType j)\nV.GetVariantValue(int, int, int) -> vtkVariant\nC++: vtkVariant GetVariantValue(vtkIdType i, vtkIdType j,\n    vtkIdType k)\nV.GetVariantValue(vtkArrayCoordinates) -> vtkVariant\nC++: virtual vtkVariant GetVariantValue(\n    const vtkArrayCoordinates &coordinates)\n\n"},
  {(char*)"SetVariantValue", PyvtkTypedArray_IjE_SetVariantValue, METH_VARARGS,
   (char*)"V.SetVariantValue(int, vtkVariant)\nC++: void SetVariantValue(vtkIdType i, const vtkVariant &value)\nV.SetVariantValue(int, int, vtkVariant)\nC++: void SetVariantValue(vtkIdType i, vtkIdType j,\n    const vtkVariant &value)\nV.SetVariantValue(int, int, int, vtkVariant)\nC++: void SetVariantValue(vtkIdType i, vtkIdType j, vtkIdType k,\n    const vtkVariant &value)\nV.SetVariantValue(vtkArrayCoordinates, vtkVariant)\nC++: virtual void SetVariantValue(\n    const vtkArrayCoordinates &coordinates,\n    const vtkVariant &value)\n\n"},
  {(char*)"GetVariantValueN", PyvtkTypedArray_IjE_GetVariantValueN, METH_VARARGS,
   (char*)"V.GetVariantValueN(int) -> vtkVariant\nC++: virtual vtkVariant GetVariantValueN(const SizeT n)\n\n"},
  {(char*)"SetVariantValueN", PyvtkTypedArray_IjE_SetVariantValueN, METH_VARARGS,
   (char*)"V.SetVariantValueN(int, vtkVariant)\nC++: virtual void SetVariantValueN(const SizeT n,\n    const vtkVariant &value)\n\n"},
  {(char*)"CopyValue", PyvtkTypedArray_IjE_CopyValue, METH_VARARGS,
   (char*)"V.CopyValue(vtkArray, vtkArrayCoordinates, vtkArrayCoordinates)\nC++: virtual void CopyValue(vtkArray *source,\n    const vtkArrayCoordinates &source_coordinates,\n    const vtkArrayCoordinates &target_coordinates)\nV.CopyValue(vtkArray, int, vtkArrayCoordinates)\nC++: virtual void CopyValue(vtkArray *source,\n    const SizeT source_index,\n    const vtkArrayCoordinates &target_coordinates)\nV.CopyValue(vtkArray, vtkArrayCoordinates, int)\nC++: virtual void CopyValue(vtkArray *source,\n    const vtkArrayCoordinates &source_coordinates,\n    const SizeT target_index)\n\n"},
  {(char*)"GetValue", PyvtkTypedArray_IjE_GetValue, METH_VARARGS,
   (char*)"V.GetValue(int) -> int\nC++: virtual const unsigned int &GetValue(CoordinateT i)\nV.GetValue(int, int) -> int\nC++: virtual const unsigned int &GetValue(CoordinateT i,\n    CoordinateT j)\nV.GetValue(int, int, int) -> int\nC++: virtual const unsigned int &GetValue(CoordinateT i,\n    CoordinateT j, CoordinateT k)\nV.GetValue(vtkArrayCoordinates) -> int\nC++: virtual const unsigned int &GetValue(\n    const vtkArrayCoordinates &coordinates)\n\nReturns the value stored in the array at the given coordinates.\nNote that the number of dimensions in the supplied coordinates\nmust match the number of dimensions in the array.\n"},
  {(char*)"GetValueN", PyvtkTypedArray_IjE_GetValueN, METH_VARARGS,
   (char*)"V.GetValueN(int) -> int\nC++: virtual const unsigned int &GetValueN(const SizeT n)\n\nReturns the n-th value stored in the array, where n is in the\nrange [0, GetNonNullSize()).  This is useful for efficiently\nvisiting every value in the array.  Note that the order in which\nvalues are visited is undefined, but is guaranteed to match the\norder used by vtkArray::GetCoordinatesN().\n"},
  {(char*)"SetValue", PyvtkTypedArray_IjE_SetValue, METH_VARARGS,
   (char*)"V.SetValue(int, int)\nC++: virtual void SetValue(CoordinateT i,\n    const unsigned int &value)\nV.SetValue(int, int, int)\nC++: virtual void SetValue(CoordinateT i, CoordinateT j,\n    const unsigned int &value)\nV.SetValue(int, int, int, int)\nC++: virtual void SetValue(CoordinateT i, CoordinateT j,\n    CoordinateT k, const unsigned int &value)\nV.SetValue(vtkArrayCoordinates, int)\nC++: virtual void SetValue(const vtkArrayCoordinates &coordinates,\n     const unsigned int &value)\n\nOverwrites the value stored in the array at the given\ncoordinates. Note that the number of dimensions in the supplied\ncoordinates must match the number of dimensions in the array.\n"},
  {(char*)"SetValueN", PyvtkTypedArray_IjE_SetValueN, METH_VARARGS,
   (char*)"V.SetValueN(int, int)\nC++: virtual void SetValueN(const SizeT n,\n    const unsigned int &value)\n\nOverwrites the n-th value stored in the array, where n is in the\nrange [0, GetNonNullSize()).  This is useful for efficiently\nvisiting every value in the array.  Note that the order in which\nvalues are visited is undefined, but is guaranteed to match the\norder used by vtkArray::GetCoordinatesN().\n"},
  {NULL, NULL, 0, NULL}
};

PyObject *PyVTKClass_vtkTypedArray_IjENew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(NULL,
    PyvtkTypedArray_IjE_Methods,
    typeid(vtkTypedArray<unsigned int>).name(), modulename,
    "vtkTypedArray_IjE", "vtkTypedArray_IjE",
    PyvtkTypedArray_IjE_Doc(),
    PyVTKClass_vtkArrayNew(modulename));
  return cls;
}

const char **PyvtkTypedArray_IjE_Doc()
{
  static const char *docstring[] = {
    "vtkTypedArray - Provides a type-specific interface to N-way arrays\n\n",
    "Superclass: vtkArray\n\n",
    "vtkTypedArray provides an interface for retrieving and updating data\nin an arbitrary-dimension array.  It derives from vtkArray and is\ntemplated on the type of value stored in the array.\n\nMethods are provided for retrieving and updating array values based\neither on their array coordinates, or on a 1-dimensional integer\nindex.  The latter approach can be used to iterate over the values in\nan array ",
    "in arbitrary order, which is useful when writing filters\nthat operate efficiently on sparse arrays and arrays that can have\nany number of dimensions.\n\nSpecial overloaded methods provide simple access for arrays with one,\ntwo, or three dimensions.\n\nSee Also:\n\nvtkArray, vtkDenseArray, vtkSparseArray\n\nThanks:\n\nDeveloped by Timothy M. Shead (tshead@sandia.gov) at Sandia National\nLaboratories.\n\n",
    NULL
  };

  return docstring;
}

extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkTypedArray_IlENew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkArrayNew
extern "C" { PyObject *PyVTKClass_vtkArrayNew(const char *); }
#define DECLARED_PyVTKClass_vtkArrayNew
#endif

static const char **PyvtkTypedArray_IlE_Doc();


static PyObject *
PyvtkTypedArray_IlE_GetVariantValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVariantValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<long> *op = static_cast<vtkTypedArray<long> *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkVariant tempr = (ap.IsBound() ?
      op->GetVariantValue(temp0) :
      op->vtkTypedArray<long>::GetVariantValue(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildSpecialObject(&tempr, "vtkVariant");
      }
    }

  return result;
}

static PyObject *
PyvtkTypedArray_IlE_GetVariantValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVariantValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<long> *op = static_cast<vtkTypedArray<long> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    vtkVariant tempr = (ap.IsBound() ?
      op->GetVariantValue(temp0, temp1) :
      op->vtkTypedArray<long>::GetVariantValue(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildSpecialObject(&tempr, "vtkVariant");
      }
    }

  return result;
}

static PyObject *
PyvtkTypedArray_IlE_GetVariantValue_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVariantValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<long> *op = static_cast<vtkTypedArray<long> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  vtkIdType temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    vtkVariant tempr = (ap.IsBound() ?
      op->GetVariantValue(temp0, temp1, temp2) :
      op->vtkTypedArray<long>::GetVariantValue(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildSpecialObject(&tempr, "vtkVariant");
      }
    }

  return result;
}

static PyObject *
PyvtkTypedArray_IlE_GetVariantValue_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVariantValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<long> *op = static_cast<vtkTypedArray<long> *>(vp);

  vtkArrayCoordinates *temp0 = NULL;
  PyObject *pobj0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkArrayCoordinates"))
    {
    vtkVariant tempr = (ap.IsBound() ?
      op->GetVariantValue(*temp0) :
      op->vtkTypedArray<long>::GetVariantValue(*temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildSpecialObject(&tempr, "vtkVariant");
      }
    }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkTypedArray_IlE_GetVariantValue_Methods[] = {
  {NULL, PyvtkTypedArray_IlE_GetVariantValue_s1, METH_VARARGS,
   (char*)"@L"},
  {NULL, PyvtkTypedArray_IlE_GetVariantValue_s4, METH_VARARGS,
   (char*)"@O &vtkArrayCoordinates"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkTypedArray_IlE_GetVariantValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkTypedArray_IlE_GetVariantValue_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkTypedArray_IlE_GetVariantValue_s2(self, args);
    case 3:
      return PyvtkTypedArray_IlE_GetVariantValue_s3(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetVariantValue");
  return NULL;
}



static PyObject *
PyvtkTypedArray_IlE_SetVariantValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVariantValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<long> *op = static_cast<vtkTypedArray<long> *>(vp);

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
      op->SetVariantValue(temp0, *temp1);
      }
    else
      {
      op->vtkTypedArray<long>::SetVariantValue(temp0, *temp1);
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
PyvtkTypedArray_IlE_SetVariantValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVariantValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<long> *op = static_cast<vtkTypedArray<long> *>(vp);

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
      op->SetVariantValue(temp0, temp1, *temp2);
      }
    else
      {
      op->vtkTypedArray<long>::SetVariantValue(temp0, temp1, *temp2);
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
PyvtkTypedArray_IlE_SetVariantValue_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVariantValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<long> *op = static_cast<vtkTypedArray<long> *>(vp);

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
      op->SetVariantValue(temp0, temp1, temp2, *temp3);
      }
    else
      {
      op->vtkTypedArray<long>::SetVariantValue(temp0, temp1, temp2, *temp3);
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
PyvtkTypedArray_IlE_SetVariantValue_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVariantValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<long> *op = static_cast<vtkTypedArray<long> *>(vp);

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
      op->SetVariantValue(*temp0, *temp1);
      }
    else
      {
      op->vtkTypedArray<long>::SetVariantValue(*temp0, *temp1);
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

static PyMethodDef PyvtkTypedArray_IlE_SetVariantValue_Methods[] = {
  {NULL, PyvtkTypedArray_IlE_SetVariantValue_s1, METH_VARARGS,
   (char*)"@LO &vtkVariant"},
  {NULL, PyvtkTypedArray_IlE_SetVariantValue_s4, METH_VARARGS,
   (char*)"@OO &vtkArrayCoordinates &vtkVariant"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkTypedArray_IlE_SetVariantValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkTypedArray_IlE_SetVariantValue_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkTypedArray_IlE_SetVariantValue_s2(self, args);
    case 4:
      return PyvtkTypedArray_IlE_SetVariantValue_s3(self, args);
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetVariantValue");
  return NULL;
}



static PyObject *
PyvtkTypedArray_IlE_GetVariantValueN(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVariantValueN");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<long> *op = static_cast<vtkTypedArray<long> *>(vp);

  unsigned long long temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkVariant tempr = (ap.IsBound() ?
      op->GetVariantValueN(temp0) :
      op->vtkTypedArray<long>::GetVariantValueN(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildSpecialObject(&tempr, "vtkVariant");
      }
    }

  return result;
}


static PyObject *
PyvtkTypedArray_IlE_SetVariantValueN(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVariantValueN");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<long> *op = static_cast<vtkTypedArray<long> *>(vp);

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
      op->SetVariantValueN(temp0, *temp1);
      }
    else
      {
      op->vtkTypedArray<long>::SetVariantValueN(temp0, *temp1);
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
PyvtkTypedArray_IlE_CopyValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<long> *op = static_cast<vtkTypedArray<long> *>(vp);

  vtkArray *temp0 = NULL;
  vtkArrayCoordinates *temp1 = NULL;
  PyObject *pobj1 = NULL;
  vtkArrayCoordinates *temp2 = NULL;
  PyObject *pobj2 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkArray") &&
      ap.GetSpecialObject(temp1, pobj1, "vtkArrayCoordinates") &&
      ap.GetSpecialObject(temp2, pobj2, "vtkArrayCoordinates"))
    {
    if (ap.IsBound())
      {
      op->CopyValue(temp0, *temp1, *temp2);
      }
    else
      {
      op->vtkTypedArray<long>::CopyValue(temp0, *temp1, *temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  Py_XDECREF(pobj1);
  Py_XDECREF(pobj2);

  return result;
}

static PyObject *
PyvtkTypedArray_IlE_CopyValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<long> *op = static_cast<vtkTypedArray<long> *>(vp);

  vtkArray *temp0 = NULL;
  unsigned long long temp1;
  vtkArrayCoordinates *temp2 = NULL;
  PyObject *pobj2 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkArray") &&
      ap.GetValue(temp1) &&
      ap.GetSpecialObject(temp2, pobj2, "vtkArrayCoordinates"))
    {
    if (ap.IsBound())
      {
      op->CopyValue(temp0, temp1, *temp2);
      }
    else
      {
      op->vtkTypedArray<long>::CopyValue(temp0, temp1, *temp2);
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
PyvtkTypedArray_IlE_CopyValue_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<long> *op = static_cast<vtkTypedArray<long> *>(vp);

  vtkArray *temp0 = NULL;
  vtkArrayCoordinates *temp1 = NULL;
  PyObject *pobj1 = NULL;
  unsigned long long temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkArray") &&
      ap.GetSpecialObject(temp1, pobj1, "vtkArrayCoordinates") &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      op->CopyValue(temp0, *temp1, temp2);
      }
    else
      {
      op->vtkTypedArray<long>::CopyValue(temp0, *temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  Py_XDECREF(pobj1);

  return result;
}

static PyMethodDef PyvtkTypedArray_IlE_CopyValue_Methods[] = {
  {NULL, PyvtkTypedArray_IlE_CopyValue_s1, METH_VARARGS,
   (char*)"@OOO *vtkArray &vtkArrayCoordinates &vtkArrayCoordinates"},
  {NULL, PyvtkTypedArray_IlE_CopyValue_s2, METH_VARARGS,
   (char*)"@OKO *vtkArray &vtkArrayCoordinates"},
  {NULL, PyvtkTypedArray_IlE_CopyValue_s3, METH_VARARGS,
   (char*)"@OOK *vtkArray &vtkArrayCoordinates"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkTypedArray_IlE_CopyValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkTypedArray_IlE_CopyValue_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "CopyValue");
  return NULL;
}



static PyObject *
PyvtkTypedArray_IlE_GetValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<long> *op = static_cast<vtkTypedArray<long> *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    const long *tempr = &op->GetValue(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(*tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkTypedArray_IlE_GetValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<long> *op = static_cast<vtkTypedArray<long> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    const long *tempr = &op->GetValue(temp0, temp1);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(*tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkTypedArray_IlE_GetValue_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<long> *op = static_cast<vtkTypedArray<long> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  vtkIdType temp2;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    const long *tempr = &op->GetValue(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(*tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkTypedArray_IlE_GetValue_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<long> *op = static_cast<vtkTypedArray<long> *>(vp);

  vtkArrayCoordinates *temp0 = NULL;
  PyObject *pobj0 = NULL;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkArrayCoordinates"))
    {
    const long *tempr = &op->GetValue(*temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(*tempr);
      }
    }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkTypedArray_IlE_GetValue_Methods[] = {
  {NULL, PyvtkTypedArray_IlE_GetValue_s1, METH_VARARGS,
   (char*)"@L"},
  {NULL, PyvtkTypedArray_IlE_GetValue_s4, METH_VARARGS,
   (char*)"@O &vtkArrayCoordinates"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkTypedArray_IlE_GetValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkTypedArray_IlE_GetValue_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkTypedArray_IlE_GetValue_s2(self, args);
    case 3:
      return PyvtkTypedArray_IlE_GetValue_s3(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetValue");
  return NULL;
}



static PyObject *
PyvtkTypedArray_IlE_GetValueN(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValueN");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<long> *op = static_cast<vtkTypedArray<long> *>(vp);

  unsigned long long temp0;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    const long *tempr = &op->GetValueN(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(*tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTypedArray_IlE_SetValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<long> *op = static_cast<vtkTypedArray<long> *>(vp);

  vtkIdType temp0;
  long temp1;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    op->SetValue(temp0, temp1);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkTypedArray_IlE_SetValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<long> *op = static_cast<vtkTypedArray<long> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  long temp2;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    op->SetValue(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkTypedArray_IlE_SetValue_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<long> *op = static_cast<vtkTypedArray<long> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  vtkIdType temp2;
  long temp3;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
    {
    op->SetValue(temp0, temp1, temp2, temp3);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkTypedArray_IlE_SetValue_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<long> *op = static_cast<vtkTypedArray<long> *>(vp);

  vtkArrayCoordinates *temp0 = NULL;
  PyObject *pobj0 = NULL;
  long temp1;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(2) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkArrayCoordinates") &&
      ap.GetValue(temp1))
    {
    op->SetValue(*temp0, temp1);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkTypedArray_IlE_SetValue_Methods[] = {
  {NULL, PyvtkTypedArray_IlE_SetValue_s1, METH_VARARGS,
   (char*)"@Ll"},
  {NULL, PyvtkTypedArray_IlE_SetValue_s4, METH_VARARGS,
   (char*)"@Ol &vtkArrayCoordinates"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkTypedArray_IlE_SetValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkTypedArray_IlE_SetValue_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkTypedArray_IlE_SetValue_s2(self, args);
    case 4:
      return PyvtkTypedArray_IlE_SetValue_s3(self, args);
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetValue");
  return NULL;
}



static PyObject *
PyvtkTypedArray_IlE_SetValueN(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValueN");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<long> *op = static_cast<vtkTypedArray<long> *>(vp);

  unsigned long long temp0;
  long temp1;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    op->SetValueN(temp0, temp1);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkTypedArray_IlE_Methods[] = {
  {(char*)"GetVariantValue", PyvtkTypedArray_IlE_GetVariantValue, METH_VARARGS,
   (char*)"V.GetVariantValue(int) -> vtkVariant\nC++: vtkVariant GetVariantValue(vtkIdType i)\nV.GetVariantValue(int, int) -> vtkVariant\nC++: vtkVariant GetVariantValue(vtkIdType i, vtkIdType j)\nV.GetVariantValue(int, int, int) -> vtkVariant\nC++: vtkVariant GetVariantValue(vtkIdType i, vtkIdType j,\n    vtkIdType k)\nV.GetVariantValue(vtkArrayCoordinates) -> vtkVariant\nC++: virtual vtkVariant GetVariantValue(\n    const vtkArrayCoordinates &coordinates)\n\n"},
  {(char*)"SetVariantValue", PyvtkTypedArray_IlE_SetVariantValue, METH_VARARGS,
   (char*)"V.SetVariantValue(int, vtkVariant)\nC++: void SetVariantValue(vtkIdType i, const vtkVariant &value)\nV.SetVariantValue(int, int, vtkVariant)\nC++: void SetVariantValue(vtkIdType i, vtkIdType j,\n    const vtkVariant &value)\nV.SetVariantValue(int, int, int, vtkVariant)\nC++: void SetVariantValue(vtkIdType i, vtkIdType j, vtkIdType k,\n    const vtkVariant &value)\nV.SetVariantValue(vtkArrayCoordinates, vtkVariant)\nC++: virtual void SetVariantValue(\n    const vtkArrayCoordinates &coordinates,\n    const vtkVariant &value)\n\n"},
  {(char*)"GetVariantValueN", PyvtkTypedArray_IlE_GetVariantValueN, METH_VARARGS,
   (char*)"V.GetVariantValueN(int) -> vtkVariant\nC++: virtual vtkVariant GetVariantValueN(const SizeT n)\n\n"},
  {(char*)"SetVariantValueN", PyvtkTypedArray_IlE_SetVariantValueN, METH_VARARGS,
   (char*)"V.SetVariantValueN(int, vtkVariant)\nC++: virtual void SetVariantValueN(const SizeT n,\n    const vtkVariant &value)\n\n"},
  {(char*)"CopyValue", PyvtkTypedArray_IlE_CopyValue, METH_VARARGS,
   (char*)"V.CopyValue(vtkArray, vtkArrayCoordinates, vtkArrayCoordinates)\nC++: virtual void CopyValue(vtkArray *source,\n    const vtkArrayCoordinates &source_coordinates,\n    const vtkArrayCoordinates &target_coordinates)\nV.CopyValue(vtkArray, int, vtkArrayCoordinates)\nC++: virtual void CopyValue(vtkArray *source,\n    const SizeT source_index,\n    const vtkArrayCoordinates &target_coordinates)\nV.CopyValue(vtkArray, vtkArrayCoordinates, int)\nC++: virtual void CopyValue(vtkArray *source,\n    const vtkArrayCoordinates &source_coordinates,\n    const SizeT target_index)\n\n"},
  {(char*)"GetValue", PyvtkTypedArray_IlE_GetValue, METH_VARARGS,
   (char*)"V.GetValue(int) -> int\nC++: virtual const long &GetValue(CoordinateT i)\nV.GetValue(int, int) -> int\nC++: virtual const long &GetValue(CoordinateT i, CoordinateT j)\nV.GetValue(int, int, int) -> int\nC++: virtual const long &GetValue(CoordinateT i, CoordinateT j,\n    CoordinateT k)\nV.GetValue(vtkArrayCoordinates) -> int\nC++: virtual const long &GetValue(\n    const vtkArrayCoordinates &coordinates)\n\nReturns the value stored in the array at the given coordinates.\nNote that the number of dimensions in the supplied coordinates\nmust match the number of dimensions in the array.\n"},
  {(char*)"GetValueN", PyvtkTypedArray_IlE_GetValueN, METH_VARARGS,
   (char*)"V.GetValueN(int) -> int\nC++: virtual const long &GetValueN(const SizeT n)\n\nReturns the n-th value stored in the array, where n is in the\nrange [0, GetNonNullSize()).  This is useful for efficiently\nvisiting every value in the array.  Note that the order in which\nvalues are visited is undefined, but is guaranteed to match the\norder used by vtkArray::GetCoordinatesN().\n"},
  {(char*)"SetValue", PyvtkTypedArray_IlE_SetValue, METH_VARARGS,
   (char*)"V.SetValue(int, int)\nC++: virtual void SetValue(CoordinateT i, const long &value)\nV.SetValue(int, int, int)\nC++: virtual void SetValue(CoordinateT i, CoordinateT j,\n    const long &value)\nV.SetValue(int, int, int, int)\nC++: virtual void SetValue(CoordinateT i, CoordinateT j,\n    CoordinateT k, const long &value)\nV.SetValue(vtkArrayCoordinates, int)\nC++: virtual void SetValue(const vtkArrayCoordinates &coordinates,\n     const long &value)\n\nOverwrites the value stored in the array at the given\ncoordinates. Note that the number of dimensions in the supplied\ncoordinates must match the number of dimensions in the array.\n"},
  {(char*)"SetValueN", PyvtkTypedArray_IlE_SetValueN, METH_VARARGS,
   (char*)"V.SetValueN(int, int)\nC++: virtual void SetValueN(const SizeT n, const long &value)\n\nOverwrites the n-th value stored in the array, where n is in the\nrange [0, GetNonNullSize()).  This is useful for efficiently\nvisiting every value in the array.  Note that the order in which\nvalues are visited is undefined, but is guaranteed to match the\norder used by vtkArray::GetCoordinatesN().\n"},
  {NULL, NULL, 0, NULL}
};

PyObject *PyVTKClass_vtkTypedArray_IlENew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(NULL,
    PyvtkTypedArray_IlE_Methods,
    typeid(vtkTypedArray<long>).name(), modulename,
    "vtkTypedArray_IlE", "vtkTypedArray_IlE",
    PyvtkTypedArray_IlE_Doc(),
    PyVTKClass_vtkArrayNew(modulename));
  return cls;
}

const char **PyvtkTypedArray_IlE_Doc()
{
  static const char *docstring[] = {
    "vtkTypedArray - Provides a type-specific interface to N-way arrays\n\n",
    "Superclass: vtkArray\n\n",
    "vtkTypedArray provides an interface for retrieving and updating data\nin an arbitrary-dimension array.  It derives from vtkArray and is\ntemplated on the type of value stored in the array.\n\nMethods are provided for retrieving and updating array values based\neither on their array coordinates, or on a 1-dimensional integer\nindex.  The latter approach can be used to iterate over the values in\nan array ",
    "in arbitrary order, which is useful when writing filters\nthat operate efficiently on sparse arrays and arrays that can have\nany number of dimensions.\n\nSpecial overloaded methods provide simple access for arrays with one,\ntwo, or three dimensions.\n\nSee Also:\n\nvtkArray, vtkDenseArray, vtkSparseArray\n\nThanks:\n\nDeveloped by Timothy M. Shead (tshead@sandia.gov) at Sandia National\nLaboratories.\n\n",
    NULL
  };

  return docstring;
}

extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkTypedArray_ImENew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkArrayNew
extern "C" { PyObject *PyVTKClass_vtkArrayNew(const char *); }
#define DECLARED_PyVTKClass_vtkArrayNew
#endif

static const char **PyvtkTypedArray_ImE_Doc();


static PyObject *
PyvtkTypedArray_ImE_GetVariantValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVariantValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<unsigned long> *op = static_cast<vtkTypedArray<unsigned long> *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkVariant tempr = (ap.IsBound() ?
      op->GetVariantValue(temp0) :
      op->vtkTypedArray<unsigned long>::GetVariantValue(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildSpecialObject(&tempr, "vtkVariant");
      }
    }

  return result;
}

static PyObject *
PyvtkTypedArray_ImE_GetVariantValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVariantValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<unsigned long> *op = static_cast<vtkTypedArray<unsigned long> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    vtkVariant tempr = (ap.IsBound() ?
      op->GetVariantValue(temp0, temp1) :
      op->vtkTypedArray<unsigned long>::GetVariantValue(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildSpecialObject(&tempr, "vtkVariant");
      }
    }

  return result;
}

static PyObject *
PyvtkTypedArray_ImE_GetVariantValue_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVariantValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<unsigned long> *op = static_cast<vtkTypedArray<unsigned long> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  vtkIdType temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    vtkVariant tempr = (ap.IsBound() ?
      op->GetVariantValue(temp0, temp1, temp2) :
      op->vtkTypedArray<unsigned long>::GetVariantValue(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildSpecialObject(&tempr, "vtkVariant");
      }
    }

  return result;
}

static PyObject *
PyvtkTypedArray_ImE_GetVariantValue_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVariantValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<unsigned long> *op = static_cast<vtkTypedArray<unsigned long> *>(vp);

  vtkArrayCoordinates *temp0 = NULL;
  PyObject *pobj0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkArrayCoordinates"))
    {
    vtkVariant tempr = (ap.IsBound() ?
      op->GetVariantValue(*temp0) :
      op->vtkTypedArray<unsigned long>::GetVariantValue(*temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildSpecialObject(&tempr, "vtkVariant");
      }
    }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkTypedArray_ImE_GetVariantValue_Methods[] = {
  {NULL, PyvtkTypedArray_ImE_GetVariantValue_s1, METH_VARARGS,
   (char*)"@L"},
  {NULL, PyvtkTypedArray_ImE_GetVariantValue_s4, METH_VARARGS,
   (char*)"@O &vtkArrayCoordinates"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkTypedArray_ImE_GetVariantValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkTypedArray_ImE_GetVariantValue_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkTypedArray_ImE_GetVariantValue_s2(self, args);
    case 3:
      return PyvtkTypedArray_ImE_GetVariantValue_s3(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetVariantValue");
  return NULL;
}



static PyObject *
PyvtkTypedArray_ImE_SetVariantValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVariantValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<unsigned long> *op = static_cast<vtkTypedArray<unsigned long> *>(vp);

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
      op->SetVariantValue(temp0, *temp1);
      }
    else
      {
      op->vtkTypedArray<unsigned long>::SetVariantValue(temp0, *temp1);
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
PyvtkTypedArray_ImE_SetVariantValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVariantValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<unsigned long> *op = static_cast<vtkTypedArray<unsigned long> *>(vp);

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
      op->SetVariantValue(temp0, temp1, *temp2);
      }
    else
      {
      op->vtkTypedArray<unsigned long>::SetVariantValue(temp0, temp1, *temp2);
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
PyvtkTypedArray_ImE_SetVariantValue_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVariantValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<unsigned long> *op = static_cast<vtkTypedArray<unsigned long> *>(vp);

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
      op->SetVariantValue(temp0, temp1, temp2, *temp3);
      }
    else
      {
      op->vtkTypedArray<unsigned long>::SetVariantValue(temp0, temp1, temp2, *temp3);
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
PyvtkTypedArray_ImE_SetVariantValue_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVariantValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<unsigned long> *op = static_cast<vtkTypedArray<unsigned long> *>(vp);

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
      op->SetVariantValue(*temp0, *temp1);
      }
    else
      {
      op->vtkTypedArray<unsigned long>::SetVariantValue(*temp0, *temp1);
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

static PyMethodDef PyvtkTypedArray_ImE_SetVariantValue_Methods[] = {
  {NULL, PyvtkTypedArray_ImE_SetVariantValue_s1, METH_VARARGS,
   (char*)"@LO &vtkVariant"},
  {NULL, PyvtkTypedArray_ImE_SetVariantValue_s4, METH_VARARGS,
   (char*)"@OO &vtkArrayCoordinates &vtkVariant"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkTypedArray_ImE_SetVariantValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkTypedArray_ImE_SetVariantValue_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkTypedArray_ImE_SetVariantValue_s2(self, args);
    case 4:
      return PyvtkTypedArray_ImE_SetVariantValue_s3(self, args);
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetVariantValue");
  return NULL;
}



static PyObject *
PyvtkTypedArray_ImE_GetVariantValueN(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVariantValueN");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<unsigned long> *op = static_cast<vtkTypedArray<unsigned long> *>(vp);

  unsigned long long temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkVariant tempr = (ap.IsBound() ?
      op->GetVariantValueN(temp0) :
      op->vtkTypedArray<unsigned long>::GetVariantValueN(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildSpecialObject(&tempr, "vtkVariant");
      }
    }

  return result;
}


static PyObject *
PyvtkTypedArray_ImE_SetVariantValueN(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVariantValueN");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<unsigned long> *op = static_cast<vtkTypedArray<unsigned long> *>(vp);

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
      op->SetVariantValueN(temp0, *temp1);
      }
    else
      {
      op->vtkTypedArray<unsigned long>::SetVariantValueN(temp0, *temp1);
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
PyvtkTypedArray_ImE_CopyValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<unsigned long> *op = static_cast<vtkTypedArray<unsigned long> *>(vp);

  vtkArray *temp0 = NULL;
  vtkArrayCoordinates *temp1 = NULL;
  PyObject *pobj1 = NULL;
  vtkArrayCoordinates *temp2 = NULL;
  PyObject *pobj2 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkArray") &&
      ap.GetSpecialObject(temp1, pobj1, "vtkArrayCoordinates") &&
      ap.GetSpecialObject(temp2, pobj2, "vtkArrayCoordinates"))
    {
    if (ap.IsBound())
      {
      op->CopyValue(temp0, *temp1, *temp2);
      }
    else
      {
      op->vtkTypedArray<unsigned long>::CopyValue(temp0, *temp1, *temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  Py_XDECREF(pobj1);
  Py_XDECREF(pobj2);

  return result;
}

static PyObject *
PyvtkTypedArray_ImE_CopyValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<unsigned long> *op = static_cast<vtkTypedArray<unsigned long> *>(vp);

  vtkArray *temp0 = NULL;
  unsigned long long temp1;
  vtkArrayCoordinates *temp2 = NULL;
  PyObject *pobj2 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkArray") &&
      ap.GetValue(temp1) &&
      ap.GetSpecialObject(temp2, pobj2, "vtkArrayCoordinates"))
    {
    if (ap.IsBound())
      {
      op->CopyValue(temp0, temp1, *temp2);
      }
    else
      {
      op->vtkTypedArray<unsigned long>::CopyValue(temp0, temp1, *temp2);
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
PyvtkTypedArray_ImE_CopyValue_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<unsigned long> *op = static_cast<vtkTypedArray<unsigned long> *>(vp);

  vtkArray *temp0 = NULL;
  vtkArrayCoordinates *temp1 = NULL;
  PyObject *pobj1 = NULL;
  unsigned long long temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkArray") &&
      ap.GetSpecialObject(temp1, pobj1, "vtkArrayCoordinates") &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      op->CopyValue(temp0, *temp1, temp2);
      }
    else
      {
      op->vtkTypedArray<unsigned long>::CopyValue(temp0, *temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  Py_XDECREF(pobj1);

  return result;
}

static PyMethodDef PyvtkTypedArray_ImE_CopyValue_Methods[] = {
  {NULL, PyvtkTypedArray_ImE_CopyValue_s1, METH_VARARGS,
   (char*)"@OOO *vtkArray &vtkArrayCoordinates &vtkArrayCoordinates"},
  {NULL, PyvtkTypedArray_ImE_CopyValue_s2, METH_VARARGS,
   (char*)"@OKO *vtkArray &vtkArrayCoordinates"},
  {NULL, PyvtkTypedArray_ImE_CopyValue_s3, METH_VARARGS,
   (char*)"@OOK *vtkArray &vtkArrayCoordinates"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkTypedArray_ImE_CopyValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkTypedArray_ImE_CopyValue_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "CopyValue");
  return NULL;
}



static PyObject *
PyvtkTypedArray_ImE_GetValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<unsigned long> *op = static_cast<vtkTypedArray<unsigned long> *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    const unsigned long *tempr = &op->GetValue(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(*tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkTypedArray_ImE_GetValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<unsigned long> *op = static_cast<vtkTypedArray<unsigned long> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    const unsigned long *tempr = &op->GetValue(temp0, temp1);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(*tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkTypedArray_ImE_GetValue_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<unsigned long> *op = static_cast<vtkTypedArray<unsigned long> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  vtkIdType temp2;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    const unsigned long *tempr = &op->GetValue(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(*tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkTypedArray_ImE_GetValue_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<unsigned long> *op = static_cast<vtkTypedArray<unsigned long> *>(vp);

  vtkArrayCoordinates *temp0 = NULL;
  PyObject *pobj0 = NULL;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkArrayCoordinates"))
    {
    const unsigned long *tempr = &op->GetValue(*temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(*tempr);
      }
    }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkTypedArray_ImE_GetValue_Methods[] = {
  {NULL, PyvtkTypedArray_ImE_GetValue_s1, METH_VARARGS,
   (char*)"@L"},
  {NULL, PyvtkTypedArray_ImE_GetValue_s4, METH_VARARGS,
   (char*)"@O &vtkArrayCoordinates"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkTypedArray_ImE_GetValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkTypedArray_ImE_GetValue_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkTypedArray_ImE_GetValue_s2(self, args);
    case 3:
      return PyvtkTypedArray_ImE_GetValue_s3(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetValue");
  return NULL;
}



static PyObject *
PyvtkTypedArray_ImE_GetValueN(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValueN");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<unsigned long> *op = static_cast<vtkTypedArray<unsigned long> *>(vp);

  unsigned long long temp0;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    const unsigned long *tempr = &op->GetValueN(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(*tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTypedArray_ImE_SetValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<unsigned long> *op = static_cast<vtkTypedArray<unsigned long> *>(vp);

  vtkIdType temp0;
  unsigned long temp1;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    op->SetValue(temp0, temp1);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkTypedArray_ImE_SetValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<unsigned long> *op = static_cast<vtkTypedArray<unsigned long> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  unsigned long temp2;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    op->SetValue(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkTypedArray_ImE_SetValue_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<unsigned long> *op = static_cast<vtkTypedArray<unsigned long> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  vtkIdType temp2;
  unsigned long temp3;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
    {
    op->SetValue(temp0, temp1, temp2, temp3);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkTypedArray_ImE_SetValue_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<unsigned long> *op = static_cast<vtkTypedArray<unsigned long> *>(vp);

  vtkArrayCoordinates *temp0 = NULL;
  PyObject *pobj0 = NULL;
  unsigned long temp1;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(2) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkArrayCoordinates") &&
      ap.GetValue(temp1))
    {
    op->SetValue(*temp0, temp1);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkTypedArray_ImE_SetValue_Methods[] = {
  {NULL, PyvtkTypedArray_ImE_SetValue_s1, METH_VARARGS,
   (char*)"@Lk"},
  {NULL, PyvtkTypedArray_ImE_SetValue_s4, METH_VARARGS,
   (char*)"@Ok &vtkArrayCoordinates"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkTypedArray_ImE_SetValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkTypedArray_ImE_SetValue_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkTypedArray_ImE_SetValue_s2(self, args);
    case 4:
      return PyvtkTypedArray_ImE_SetValue_s3(self, args);
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetValue");
  return NULL;
}



static PyObject *
PyvtkTypedArray_ImE_SetValueN(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValueN");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<unsigned long> *op = static_cast<vtkTypedArray<unsigned long> *>(vp);

  unsigned long long temp0;
  unsigned long temp1;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    op->SetValueN(temp0, temp1);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkTypedArray_ImE_Methods[] = {
  {(char*)"GetVariantValue", PyvtkTypedArray_ImE_GetVariantValue, METH_VARARGS,
   (char*)"V.GetVariantValue(int) -> vtkVariant\nC++: vtkVariant GetVariantValue(vtkIdType i)\nV.GetVariantValue(int, int) -> vtkVariant\nC++: vtkVariant GetVariantValue(vtkIdType i, vtkIdType j)\nV.GetVariantValue(int, int, int) -> vtkVariant\nC++: vtkVariant GetVariantValue(vtkIdType i, vtkIdType j,\n    vtkIdType k)\nV.GetVariantValue(vtkArrayCoordinates) -> vtkVariant\nC++: virtual vtkVariant GetVariantValue(\n    const vtkArrayCoordinates &coordinates)\n\n"},
  {(char*)"SetVariantValue", PyvtkTypedArray_ImE_SetVariantValue, METH_VARARGS,
   (char*)"V.SetVariantValue(int, vtkVariant)\nC++: void SetVariantValue(vtkIdType i, const vtkVariant &value)\nV.SetVariantValue(int, int, vtkVariant)\nC++: void SetVariantValue(vtkIdType i, vtkIdType j,\n    const vtkVariant &value)\nV.SetVariantValue(int, int, int, vtkVariant)\nC++: void SetVariantValue(vtkIdType i, vtkIdType j, vtkIdType k,\n    const vtkVariant &value)\nV.SetVariantValue(vtkArrayCoordinates, vtkVariant)\nC++: virtual void SetVariantValue(\n    const vtkArrayCoordinates &coordinates,\n    const vtkVariant &value)\n\n"},
  {(char*)"GetVariantValueN", PyvtkTypedArray_ImE_GetVariantValueN, METH_VARARGS,
   (char*)"V.GetVariantValueN(int) -> vtkVariant\nC++: virtual vtkVariant GetVariantValueN(const SizeT n)\n\n"},
  {(char*)"SetVariantValueN", PyvtkTypedArray_ImE_SetVariantValueN, METH_VARARGS,
   (char*)"V.SetVariantValueN(int, vtkVariant)\nC++: virtual void SetVariantValueN(const SizeT n,\n    const vtkVariant &value)\n\n"},
  {(char*)"CopyValue", PyvtkTypedArray_ImE_CopyValue, METH_VARARGS,
   (char*)"V.CopyValue(vtkArray, vtkArrayCoordinates, vtkArrayCoordinates)\nC++: virtual void CopyValue(vtkArray *source,\n    const vtkArrayCoordinates &source_coordinates,\n    const vtkArrayCoordinates &target_coordinates)\nV.CopyValue(vtkArray, int, vtkArrayCoordinates)\nC++: virtual void CopyValue(vtkArray *source,\n    const SizeT source_index,\n    const vtkArrayCoordinates &target_coordinates)\nV.CopyValue(vtkArray, vtkArrayCoordinates, int)\nC++: virtual void CopyValue(vtkArray *source,\n    const vtkArrayCoordinates &source_coordinates,\n    const SizeT target_index)\n\n"},
  {(char*)"GetValue", PyvtkTypedArray_ImE_GetValue, METH_VARARGS,
   (char*)"V.GetValue(int) -> int\nC++: virtual const unsigned long &GetValue(CoordinateT i)\nV.GetValue(int, int) -> int\nC++: virtual const unsigned long &GetValue(CoordinateT i,\n    CoordinateT j)\nV.GetValue(int, int, int) -> int\nC++: virtual const unsigned long &GetValue(CoordinateT i,\n    CoordinateT j, CoordinateT k)\nV.GetValue(vtkArrayCoordinates) -> int\nC++: virtual const unsigned long &GetValue(\n    const vtkArrayCoordinates &coordinates)\n\nReturns the value stored in the array at the given coordinates.\nNote that the number of dimensions in the supplied coordinates\nmust match the number of dimensions in the array.\n"},
  {(char*)"GetValueN", PyvtkTypedArray_ImE_GetValueN, METH_VARARGS,
   (char*)"V.GetValueN(int) -> int\nC++: virtual const unsigned long &GetValueN(const SizeT n)\n\nReturns the n-th value stored in the array, where n is in the\nrange [0, GetNonNullSize()).  This is useful for efficiently\nvisiting every value in the array.  Note that the order in which\nvalues are visited is undefined, but is guaranteed to match the\norder used by vtkArray::GetCoordinatesN().\n"},
  {(char*)"SetValue", PyvtkTypedArray_ImE_SetValue, METH_VARARGS,
   (char*)"V.SetValue(int, int)\nC++: virtual void SetValue(CoordinateT i,\n    const unsigned long &value)\nV.SetValue(int, int, int)\nC++: virtual void SetValue(CoordinateT i, CoordinateT j,\n    const unsigned long &value)\nV.SetValue(int, int, int, int)\nC++: virtual void SetValue(CoordinateT i, CoordinateT j,\n    CoordinateT k, const unsigned long &value)\nV.SetValue(vtkArrayCoordinates, int)\nC++: virtual void SetValue(const vtkArrayCoordinates &coordinates,\n     const unsigned long &value)\n\nOverwrites the value stored in the array at the given\ncoordinates. Note that the number of dimensions in the supplied\ncoordinates must match the number of dimensions in the array.\n"},
  {(char*)"SetValueN", PyvtkTypedArray_ImE_SetValueN, METH_VARARGS,
   (char*)"V.SetValueN(int, int)\nC++: virtual void SetValueN(const SizeT n,\n    const unsigned long &value)\n\nOverwrites the n-th value stored in the array, where n is in the\nrange [0, GetNonNullSize()).  This is useful for efficiently\nvisiting every value in the array.  Note that the order in which\nvalues are visited is undefined, but is guaranteed to match the\norder used by vtkArray::GetCoordinatesN().\n"},
  {NULL, NULL, 0, NULL}
};

PyObject *PyVTKClass_vtkTypedArray_ImENew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(NULL,
    PyvtkTypedArray_ImE_Methods,
    typeid(vtkTypedArray<unsigned long>).name(), modulename,
    "vtkTypedArray_ImE", "vtkTypedArray_ImE",
    PyvtkTypedArray_ImE_Doc(),
    PyVTKClass_vtkArrayNew(modulename));
  return cls;
}

const char **PyvtkTypedArray_ImE_Doc()
{
  static const char *docstring[] = {
    "vtkTypedArray - Provides a type-specific interface to N-way arrays\n\n",
    "Superclass: vtkArray\n\n",
    "vtkTypedArray provides an interface for retrieving and updating data\nin an arbitrary-dimension array.  It derives from vtkArray and is\ntemplated on the type of value stored in the array.\n\nMethods are provided for retrieving and updating array values based\neither on their array coordinates, or on a 1-dimensional integer\nindex.  The latter approach can be used to iterate over the values in\nan array ",
    "in arbitrary order, which is useful when writing filters\nthat operate efficiently on sparse arrays and arrays that can have\nany number of dimensions.\n\nSpecial overloaded methods provide simple access for arrays with one,\ntwo, or three dimensions.\n\nSee Also:\n\nvtkArray, vtkDenseArray, vtkSparseArray\n\nThanks:\n\nDeveloped by Timothy M. Shead (tshead@sandia.gov) at Sandia National\nLaboratories.\n\n",
    NULL
  };

  return docstring;
}

extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkTypedArray_IxENew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkArrayNew
extern "C" { PyObject *PyVTKClass_vtkArrayNew(const char *); }
#define DECLARED_PyVTKClass_vtkArrayNew
#endif

static const char **PyvtkTypedArray_IxE_Doc();


static PyObject *
PyvtkTypedArray_IxE_GetVariantValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVariantValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<long long> *op = static_cast<vtkTypedArray<long long> *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkVariant tempr = (ap.IsBound() ?
      op->GetVariantValue(temp0) :
      op->vtkTypedArray<long long>::GetVariantValue(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildSpecialObject(&tempr, "vtkVariant");
      }
    }

  return result;
}

static PyObject *
PyvtkTypedArray_IxE_GetVariantValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVariantValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<long long> *op = static_cast<vtkTypedArray<long long> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    vtkVariant tempr = (ap.IsBound() ?
      op->GetVariantValue(temp0, temp1) :
      op->vtkTypedArray<long long>::GetVariantValue(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildSpecialObject(&tempr, "vtkVariant");
      }
    }

  return result;
}

static PyObject *
PyvtkTypedArray_IxE_GetVariantValue_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVariantValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<long long> *op = static_cast<vtkTypedArray<long long> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  vtkIdType temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    vtkVariant tempr = (ap.IsBound() ?
      op->GetVariantValue(temp0, temp1, temp2) :
      op->vtkTypedArray<long long>::GetVariantValue(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildSpecialObject(&tempr, "vtkVariant");
      }
    }

  return result;
}

static PyObject *
PyvtkTypedArray_IxE_GetVariantValue_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVariantValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<long long> *op = static_cast<vtkTypedArray<long long> *>(vp);

  vtkArrayCoordinates *temp0 = NULL;
  PyObject *pobj0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkArrayCoordinates"))
    {
    vtkVariant tempr = (ap.IsBound() ?
      op->GetVariantValue(*temp0) :
      op->vtkTypedArray<long long>::GetVariantValue(*temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildSpecialObject(&tempr, "vtkVariant");
      }
    }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkTypedArray_IxE_GetVariantValue_Methods[] = {
  {NULL, PyvtkTypedArray_IxE_GetVariantValue_s1, METH_VARARGS,
   (char*)"@L"},
  {NULL, PyvtkTypedArray_IxE_GetVariantValue_s4, METH_VARARGS,
   (char*)"@O &vtkArrayCoordinates"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkTypedArray_IxE_GetVariantValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkTypedArray_IxE_GetVariantValue_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkTypedArray_IxE_GetVariantValue_s2(self, args);
    case 3:
      return PyvtkTypedArray_IxE_GetVariantValue_s3(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetVariantValue");
  return NULL;
}



static PyObject *
PyvtkTypedArray_IxE_SetVariantValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVariantValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<long long> *op = static_cast<vtkTypedArray<long long> *>(vp);

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
      op->SetVariantValue(temp0, *temp1);
      }
    else
      {
      op->vtkTypedArray<long long>::SetVariantValue(temp0, *temp1);
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
PyvtkTypedArray_IxE_SetVariantValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVariantValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<long long> *op = static_cast<vtkTypedArray<long long> *>(vp);

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
      op->SetVariantValue(temp0, temp1, *temp2);
      }
    else
      {
      op->vtkTypedArray<long long>::SetVariantValue(temp0, temp1, *temp2);
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
PyvtkTypedArray_IxE_SetVariantValue_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVariantValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<long long> *op = static_cast<vtkTypedArray<long long> *>(vp);

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
      op->SetVariantValue(temp0, temp1, temp2, *temp3);
      }
    else
      {
      op->vtkTypedArray<long long>::SetVariantValue(temp0, temp1, temp2, *temp3);
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
PyvtkTypedArray_IxE_SetVariantValue_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVariantValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<long long> *op = static_cast<vtkTypedArray<long long> *>(vp);

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
      op->SetVariantValue(*temp0, *temp1);
      }
    else
      {
      op->vtkTypedArray<long long>::SetVariantValue(*temp0, *temp1);
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

static PyMethodDef PyvtkTypedArray_IxE_SetVariantValue_Methods[] = {
  {NULL, PyvtkTypedArray_IxE_SetVariantValue_s1, METH_VARARGS,
   (char*)"@LO &vtkVariant"},
  {NULL, PyvtkTypedArray_IxE_SetVariantValue_s4, METH_VARARGS,
   (char*)"@OO &vtkArrayCoordinates &vtkVariant"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkTypedArray_IxE_SetVariantValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkTypedArray_IxE_SetVariantValue_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkTypedArray_IxE_SetVariantValue_s2(self, args);
    case 4:
      return PyvtkTypedArray_IxE_SetVariantValue_s3(self, args);
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetVariantValue");
  return NULL;
}



static PyObject *
PyvtkTypedArray_IxE_GetVariantValueN(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVariantValueN");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<long long> *op = static_cast<vtkTypedArray<long long> *>(vp);

  unsigned long long temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkVariant tempr = (ap.IsBound() ?
      op->GetVariantValueN(temp0) :
      op->vtkTypedArray<long long>::GetVariantValueN(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildSpecialObject(&tempr, "vtkVariant");
      }
    }

  return result;
}


static PyObject *
PyvtkTypedArray_IxE_SetVariantValueN(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVariantValueN");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<long long> *op = static_cast<vtkTypedArray<long long> *>(vp);

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
      op->SetVariantValueN(temp0, *temp1);
      }
    else
      {
      op->vtkTypedArray<long long>::SetVariantValueN(temp0, *temp1);
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
PyvtkTypedArray_IxE_CopyValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<long long> *op = static_cast<vtkTypedArray<long long> *>(vp);

  vtkArray *temp0 = NULL;
  vtkArrayCoordinates *temp1 = NULL;
  PyObject *pobj1 = NULL;
  vtkArrayCoordinates *temp2 = NULL;
  PyObject *pobj2 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkArray") &&
      ap.GetSpecialObject(temp1, pobj1, "vtkArrayCoordinates") &&
      ap.GetSpecialObject(temp2, pobj2, "vtkArrayCoordinates"))
    {
    if (ap.IsBound())
      {
      op->CopyValue(temp0, *temp1, *temp2);
      }
    else
      {
      op->vtkTypedArray<long long>::CopyValue(temp0, *temp1, *temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  Py_XDECREF(pobj1);
  Py_XDECREF(pobj2);

  return result;
}

static PyObject *
PyvtkTypedArray_IxE_CopyValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<long long> *op = static_cast<vtkTypedArray<long long> *>(vp);

  vtkArray *temp0 = NULL;
  unsigned long long temp1;
  vtkArrayCoordinates *temp2 = NULL;
  PyObject *pobj2 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkArray") &&
      ap.GetValue(temp1) &&
      ap.GetSpecialObject(temp2, pobj2, "vtkArrayCoordinates"))
    {
    if (ap.IsBound())
      {
      op->CopyValue(temp0, temp1, *temp2);
      }
    else
      {
      op->vtkTypedArray<long long>::CopyValue(temp0, temp1, *temp2);
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
PyvtkTypedArray_IxE_CopyValue_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<long long> *op = static_cast<vtkTypedArray<long long> *>(vp);

  vtkArray *temp0 = NULL;
  vtkArrayCoordinates *temp1 = NULL;
  PyObject *pobj1 = NULL;
  unsigned long long temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkArray") &&
      ap.GetSpecialObject(temp1, pobj1, "vtkArrayCoordinates") &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      op->CopyValue(temp0, *temp1, temp2);
      }
    else
      {
      op->vtkTypedArray<long long>::CopyValue(temp0, *temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  Py_XDECREF(pobj1);

  return result;
}

static PyMethodDef PyvtkTypedArray_IxE_CopyValue_Methods[] = {
  {NULL, PyvtkTypedArray_IxE_CopyValue_s1, METH_VARARGS,
   (char*)"@OOO *vtkArray &vtkArrayCoordinates &vtkArrayCoordinates"},
  {NULL, PyvtkTypedArray_IxE_CopyValue_s2, METH_VARARGS,
   (char*)"@OKO *vtkArray &vtkArrayCoordinates"},
  {NULL, PyvtkTypedArray_IxE_CopyValue_s3, METH_VARARGS,
   (char*)"@OOK *vtkArray &vtkArrayCoordinates"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkTypedArray_IxE_CopyValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkTypedArray_IxE_CopyValue_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "CopyValue");
  return NULL;
}



static PyObject *
PyvtkTypedArray_IxE_GetValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<long long> *op = static_cast<vtkTypedArray<long long> *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    const long long *tempr = &op->GetValue(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(*tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkTypedArray_IxE_GetValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<long long> *op = static_cast<vtkTypedArray<long long> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    const long long *tempr = &op->GetValue(temp0, temp1);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(*tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkTypedArray_IxE_GetValue_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<long long> *op = static_cast<vtkTypedArray<long long> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  vtkIdType temp2;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    const long long *tempr = &op->GetValue(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(*tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkTypedArray_IxE_GetValue_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<long long> *op = static_cast<vtkTypedArray<long long> *>(vp);

  vtkArrayCoordinates *temp0 = NULL;
  PyObject *pobj0 = NULL;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkArrayCoordinates"))
    {
    const long long *tempr = &op->GetValue(*temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(*tempr);
      }
    }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkTypedArray_IxE_GetValue_Methods[] = {
  {NULL, PyvtkTypedArray_IxE_GetValue_s1, METH_VARARGS,
   (char*)"@L"},
  {NULL, PyvtkTypedArray_IxE_GetValue_s4, METH_VARARGS,
   (char*)"@O &vtkArrayCoordinates"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkTypedArray_IxE_GetValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkTypedArray_IxE_GetValue_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkTypedArray_IxE_GetValue_s2(self, args);
    case 3:
      return PyvtkTypedArray_IxE_GetValue_s3(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetValue");
  return NULL;
}



static PyObject *
PyvtkTypedArray_IxE_GetValueN(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValueN");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<long long> *op = static_cast<vtkTypedArray<long long> *>(vp);

  unsigned long long temp0;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    const long long *tempr = &op->GetValueN(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(*tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTypedArray_IxE_SetValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<long long> *op = static_cast<vtkTypedArray<long long> *>(vp);

  vtkIdType temp0;
  long long temp1;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    op->SetValue(temp0, temp1);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkTypedArray_IxE_SetValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<long long> *op = static_cast<vtkTypedArray<long long> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  long long temp2;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    op->SetValue(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkTypedArray_IxE_SetValue_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<long long> *op = static_cast<vtkTypedArray<long long> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  vtkIdType temp2;
  long long temp3;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
    {
    op->SetValue(temp0, temp1, temp2, temp3);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkTypedArray_IxE_SetValue_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<long long> *op = static_cast<vtkTypedArray<long long> *>(vp);

  vtkArrayCoordinates *temp0 = NULL;
  PyObject *pobj0 = NULL;
  long long temp1;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(2) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkArrayCoordinates") &&
      ap.GetValue(temp1))
    {
    op->SetValue(*temp0, temp1);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkTypedArray_IxE_SetValue_Methods[] = {
  {NULL, PyvtkTypedArray_IxE_SetValue_s1, METH_VARARGS,
   (char*)"@LL"},
  {NULL, PyvtkTypedArray_IxE_SetValue_s4, METH_VARARGS,
   (char*)"@OL &vtkArrayCoordinates"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkTypedArray_IxE_SetValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkTypedArray_IxE_SetValue_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkTypedArray_IxE_SetValue_s2(self, args);
    case 4:
      return PyvtkTypedArray_IxE_SetValue_s3(self, args);
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetValue");
  return NULL;
}



static PyObject *
PyvtkTypedArray_IxE_SetValueN(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValueN");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<long long> *op = static_cast<vtkTypedArray<long long> *>(vp);

  unsigned long long temp0;
  long long temp1;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    op->SetValueN(temp0, temp1);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkTypedArray_IxE_Methods[] = {
  {(char*)"GetVariantValue", PyvtkTypedArray_IxE_GetVariantValue, METH_VARARGS,
   (char*)"V.GetVariantValue(int) -> vtkVariant\nC++: vtkVariant GetVariantValue(vtkIdType i)\nV.GetVariantValue(int, int) -> vtkVariant\nC++: vtkVariant GetVariantValue(vtkIdType i, vtkIdType j)\nV.GetVariantValue(int, int, int) -> vtkVariant\nC++: vtkVariant GetVariantValue(vtkIdType i, vtkIdType j,\n    vtkIdType k)\nV.GetVariantValue(vtkArrayCoordinates) -> vtkVariant\nC++: virtual vtkVariant GetVariantValue(\n    const vtkArrayCoordinates &coordinates)\n\n"},
  {(char*)"SetVariantValue", PyvtkTypedArray_IxE_SetVariantValue, METH_VARARGS,
   (char*)"V.SetVariantValue(int, vtkVariant)\nC++: void SetVariantValue(vtkIdType i, const vtkVariant &value)\nV.SetVariantValue(int, int, vtkVariant)\nC++: void SetVariantValue(vtkIdType i, vtkIdType j,\n    const vtkVariant &value)\nV.SetVariantValue(int, int, int, vtkVariant)\nC++: void SetVariantValue(vtkIdType i, vtkIdType j, vtkIdType k,\n    const vtkVariant &value)\nV.SetVariantValue(vtkArrayCoordinates, vtkVariant)\nC++: virtual void SetVariantValue(\n    const vtkArrayCoordinates &coordinates,\n    const vtkVariant &value)\n\n"},
  {(char*)"GetVariantValueN", PyvtkTypedArray_IxE_GetVariantValueN, METH_VARARGS,
   (char*)"V.GetVariantValueN(int) -> vtkVariant\nC++: virtual vtkVariant GetVariantValueN(const SizeT n)\n\n"},
  {(char*)"SetVariantValueN", PyvtkTypedArray_IxE_SetVariantValueN, METH_VARARGS,
   (char*)"V.SetVariantValueN(int, vtkVariant)\nC++: virtual void SetVariantValueN(const SizeT n,\n    const vtkVariant &value)\n\n"},
  {(char*)"CopyValue", PyvtkTypedArray_IxE_CopyValue, METH_VARARGS,
   (char*)"V.CopyValue(vtkArray, vtkArrayCoordinates, vtkArrayCoordinates)\nC++: virtual void CopyValue(vtkArray *source,\n    const vtkArrayCoordinates &source_coordinates,\n    const vtkArrayCoordinates &target_coordinates)\nV.CopyValue(vtkArray, int, vtkArrayCoordinates)\nC++: virtual void CopyValue(vtkArray *source,\n    const SizeT source_index,\n    const vtkArrayCoordinates &target_coordinates)\nV.CopyValue(vtkArray, vtkArrayCoordinates, int)\nC++: virtual void CopyValue(vtkArray *source,\n    const vtkArrayCoordinates &source_coordinates,\n    const SizeT target_index)\n\n"},
  {(char*)"GetValue", PyvtkTypedArray_IxE_GetValue, METH_VARARGS,
   (char*)"V.GetValue(int) -> int\nC++: virtual const long long &GetValue(CoordinateT i)\nV.GetValue(int, int) -> int\nC++: virtual const long long &GetValue(CoordinateT i,\n    CoordinateT j)\nV.GetValue(int, int, int) -> int\nC++: virtual const long long &GetValue(CoordinateT i,\n    CoordinateT j, CoordinateT k)\nV.GetValue(vtkArrayCoordinates) -> int\nC++: virtual const long long &GetValue(\n    const vtkArrayCoordinates &coordinates)\n\nReturns the value stored in the array at the given coordinates.\nNote that the number of dimensions in the supplied coordinates\nmust match the number of dimensions in the array.\n"},
  {(char*)"GetValueN", PyvtkTypedArray_IxE_GetValueN, METH_VARARGS,
   (char*)"V.GetValueN(int) -> int\nC++: virtual const long long &GetValueN(const SizeT n)\n\nReturns the n-th value stored in the array, where n is in the\nrange [0, GetNonNullSize()).  This is useful for efficiently\nvisiting every value in the array.  Note that the order in which\nvalues are visited is undefined, but is guaranteed to match the\norder used by vtkArray::GetCoordinatesN().\n"},
  {(char*)"SetValue", PyvtkTypedArray_IxE_SetValue, METH_VARARGS,
   (char*)"V.SetValue(int, int)\nC++: virtual void SetValue(CoordinateT i, const long long &value)\nV.SetValue(int, int, int)\nC++: virtual void SetValue(CoordinateT i, CoordinateT j,\n    const long long &value)\nV.SetValue(int, int, int, int)\nC++: virtual void SetValue(CoordinateT i, CoordinateT j,\n    CoordinateT k, const long long &value)\nV.SetValue(vtkArrayCoordinates, int)\nC++: virtual void SetValue(const vtkArrayCoordinates &coordinates,\n     const long long &value)\n\nOverwrites the value stored in the array at the given\ncoordinates. Note that the number of dimensions in the supplied\ncoordinates must match the number of dimensions in the array.\n"},
  {(char*)"SetValueN", PyvtkTypedArray_IxE_SetValueN, METH_VARARGS,
   (char*)"V.SetValueN(int, int)\nC++: virtual void SetValueN(const SizeT n, const long long &value)\n\nOverwrites the n-th value stored in the array, where n is in the\nrange [0, GetNonNullSize()).  This is useful for efficiently\nvisiting every value in the array.  Note that the order in which\nvalues are visited is undefined, but is guaranteed to match the\norder used by vtkArray::GetCoordinatesN().\n"},
  {NULL, NULL, 0, NULL}
};

PyObject *PyVTKClass_vtkTypedArray_IxENew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(NULL,
    PyvtkTypedArray_IxE_Methods,
    typeid(vtkTypedArray<long long>).name(), modulename,
    "vtkTypedArray_IxE", "vtkTypedArray_IxE",
    PyvtkTypedArray_IxE_Doc(),
    PyVTKClass_vtkArrayNew(modulename));
  return cls;
}

const char **PyvtkTypedArray_IxE_Doc()
{
  static const char *docstring[] = {
    "vtkTypedArray - Provides a type-specific interface to N-way arrays\n\n",
    "Superclass: vtkArray\n\n",
    "vtkTypedArray provides an interface for retrieving and updating data\nin an arbitrary-dimension array.  It derives from vtkArray and is\ntemplated on the type of value stored in the array.\n\nMethods are provided for retrieving and updating array values based\neither on their array coordinates, or on a 1-dimensional integer\nindex.  The latter approach can be used to iterate over the values in\nan array ",
    "in arbitrary order, which is useful when writing filters\nthat operate efficiently on sparse arrays and arrays that can have\nany number of dimensions.\n\nSpecial overloaded methods provide simple access for arrays with one,\ntwo, or three dimensions.\n\nSee Also:\n\nvtkArray, vtkDenseArray, vtkSparseArray\n\nThanks:\n\nDeveloped by Timothy M. Shead (tshead@sandia.gov) at Sandia National\nLaboratories.\n\n",
    NULL
  };

  return docstring;
}

extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkTypedArray_IyENew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkArrayNew
extern "C" { PyObject *PyVTKClass_vtkArrayNew(const char *); }
#define DECLARED_PyVTKClass_vtkArrayNew
#endif

static const char **PyvtkTypedArray_IyE_Doc();


static PyObject *
PyvtkTypedArray_IyE_GetVariantValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVariantValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<unsigned long long> *op = static_cast<vtkTypedArray<unsigned long long> *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkVariant tempr = (ap.IsBound() ?
      op->GetVariantValue(temp0) :
      op->vtkTypedArray<unsigned long long>::GetVariantValue(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildSpecialObject(&tempr, "vtkVariant");
      }
    }

  return result;
}

static PyObject *
PyvtkTypedArray_IyE_GetVariantValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVariantValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<unsigned long long> *op = static_cast<vtkTypedArray<unsigned long long> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    vtkVariant tempr = (ap.IsBound() ?
      op->GetVariantValue(temp0, temp1) :
      op->vtkTypedArray<unsigned long long>::GetVariantValue(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildSpecialObject(&tempr, "vtkVariant");
      }
    }

  return result;
}

static PyObject *
PyvtkTypedArray_IyE_GetVariantValue_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVariantValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<unsigned long long> *op = static_cast<vtkTypedArray<unsigned long long> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  vtkIdType temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    vtkVariant tempr = (ap.IsBound() ?
      op->GetVariantValue(temp0, temp1, temp2) :
      op->vtkTypedArray<unsigned long long>::GetVariantValue(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildSpecialObject(&tempr, "vtkVariant");
      }
    }

  return result;
}

static PyObject *
PyvtkTypedArray_IyE_GetVariantValue_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVariantValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<unsigned long long> *op = static_cast<vtkTypedArray<unsigned long long> *>(vp);

  vtkArrayCoordinates *temp0 = NULL;
  PyObject *pobj0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkArrayCoordinates"))
    {
    vtkVariant tempr = (ap.IsBound() ?
      op->GetVariantValue(*temp0) :
      op->vtkTypedArray<unsigned long long>::GetVariantValue(*temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildSpecialObject(&tempr, "vtkVariant");
      }
    }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkTypedArray_IyE_GetVariantValue_Methods[] = {
  {NULL, PyvtkTypedArray_IyE_GetVariantValue_s1, METH_VARARGS,
   (char*)"@L"},
  {NULL, PyvtkTypedArray_IyE_GetVariantValue_s4, METH_VARARGS,
   (char*)"@O &vtkArrayCoordinates"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkTypedArray_IyE_GetVariantValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkTypedArray_IyE_GetVariantValue_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkTypedArray_IyE_GetVariantValue_s2(self, args);
    case 3:
      return PyvtkTypedArray_IyE_GetVariantValue_s3(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetVariantValue");
  return NULL;
}



static PyObject *
PyvtkTypedArray_IyE_SetVariantValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVariantValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<unsigned long long> *op = static_cast<vtkTypedArray<unsigned long long> *>(vp);

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
      op->SetVariantValue(temp0, *temp1);
      }
    else
      {
      op->vtkTypedArray<unsigned long long>::SetVariantValue(temp0, *temp1);
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
PyvtkTypedArray_IyE_SetVariantValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVariantValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<unsigned long long> *op = static_cast<vtkTypedArray<unsigned long long> *>(vp);

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
      op->SetVariantValue(temp0, temp1, *temp2);
      }
    else
      {
      op->vtkTypedArray<unsigned long long>::SetVariantValue(temp0, temp1, *temp2);
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
PyvtkTypedArray_IyE_SetVariantValue_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVariantValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<unsigned long long> *op = static_cast<vtkTypedArray<unsigned long long> *>(vp);

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
      op->SetVariantValue(temp0, temp1, temp2, *temp3);
      }
    else
      {
      op->vtkTypedArray<unsigned long long>::SetVariantValue(temp0, temp1, temp2, *temp3);
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
PyvtkTypedArray_IyE_SetVariantValue_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVariantValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<unsigned long long> *op = static_cast<vtkTypedArray<unsigned long long> *>(vp);

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
      op->SetVariantValue(*temp0, *temp1);
      }
    else
      {
      op->vtkTypedArray<unsigned long long>::SetVariantValue(*temp0, *temp1);
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

static PyMethodDef PyvtkTypedArray_IyE_SetVariantValue_Methods[] = {
  {NULL, PyvtkTypedArray_IyE_SetVariantValue_s1, METH_VARARGS,
   (char*)"@LO &vtkVariant"},
  {NULL, PyvtkTypedArray_IyE_SetVariantValue_s4, METH_VARARGS,
   (char*)"@OO &vtkArrayCoordinates &vtkVariant"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkTypedArray_IyE_SetVariantValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkTypedArray_IyE_SetVariantValue_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkTypedArray_IyE_SetVariantValue_s2(self, args);
    case 4:
      return PyvtkTypedArray_IyE_SetVariantValue_s3(self, args);
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetVariantValue");
  return NULL;
}



static PyObject *
PyvtkTypedArray_IyE_GetVariantValueN(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVariantValueN");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<unsigned long long> *op = static_cast<vtkTypedArray<unsigned long long> *>(vp);

  unsigned long long temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkVariant tempr = (ap.IsBound() ?
      op->GetVariantValueN(temp0) :
      op->vtkTypedArray<unsigned long long>::GetVariantValueN(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildSpecialObject(&tempr, "vtkVariant");
      }
    }

  return result;
}


static PyObject *
PyvtkTypedArray_IyE_SetVariantValueN(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVariantValueN");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<unsigned long long> *op = static_cast<vtkTypedArray<unsigned long long> *>(vp);

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
      op->SetVariantValueN(temp0, *temp1);
      }
    else
      {
      op->vtkTypedArray<unsigned long long>::SetVariantValueN(temp0, *temp1);
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
PyvtkTypedArray_IyE_CopyValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<unsigned long long> *op = static_cast<vtkTypedArray<unsigned long long> *>(vp);

  vtkArray *temp0 = NULL;
  vtkArrayCoordinates *temp1 = NULL;
  PyObject *pobj1 = NULL;
  vtkArrayCoordinates *temp2 = NULL;
  PyObject *pobj2 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkArray") &&
      ap.GetSpecialObject(temp1, pobj1, "vtkArrayCoordinates") &&
      ap.GetSpecialObject(temp2, pobj2, "vtkArrayCoordinates"))
    {
    if (ap.IsBound())
      {
      op->CopyValue(temp0, *temp1, *temp2);
      }
    else
      {
      op->vtkTypedArray<unsigned long long>::CopyValue(temp0, *temp1, *temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  Py_XDECREF(pobj1);
  Py_XDECREF(pobj2);

  return result;
}

static PyObject *
PyvtkTypedArray_IyE_CopyValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<unsigned long long> *op = static_cast<vtkTypedArray<unsigned long long> *>(vp);

  vtkArray *temp0 = NULL;
  unsigned long long temp1;
  vtkArrayCoordinates *temp2 = NULL;
  PyObject *pobj2 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkArray") &&
      ap.GetValue(temp1) &&
      ap.GetSpecialObject(temp2, pobj2, "vtkArrayCoordinates"))
    {
    if (ap.IsBound())
      {
      op->CopyValue(temp0, temp1, *temp2);
      }
    else
      {
      op->vtkTypedArray<unsigned long long>::CopyValue(temp0, temp1, *temp2);
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
PyvtkTypedArray_IyE_CopyValue_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<unsigned long long> *op = static_cast<vtkTypedArray<unsigned long long> *>(vp);

  vtkArray *temp0 = NULL;
  vtkArrayCoordinates *temp1 = NULL;
  PyObject *pobj1 = NULL;
  unsigned long long temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkArray") &&
      ap.GetSpecialObject(temp1, pobj1, "vtkArrayCoordinates") &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      op->CopyValue(temp0, *temp1, temp2);
      }
    else
      {
      op->vtkTypedArray<unsigned long long>::CopyValue(temp0, *temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  Py_XDECREF(pobj1);

  return result;
}

static PyMethodDef PyvtkTypedArray_IyE_CopyValue_Methods[] = {
  {NULL, PyvtkTypedArray_IyE_CopyValue_s1, METH_VARARGS,
   (char*)"@OOO *vtkArray &vtkArrayCoordinates &vtkArrayCoordinates"},
  {NULL, PyvtkTypedArray_IyE_CopyValue_s2, METH_VARARGS,
   (char*)"@OKO *vtkArray &vtkArrayCoordinates"},
  {NULL, PyvtkTypedArray_IyE_CopyValue_s3, METH_VARARGS,
   (char*)"@OOK *vtkArray &vtkArrayCoordinates"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkTypedArray_IyE_CopyValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkTypedArray_IyE_CopyValue_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "CopyValue");
  return NULL;
}



static PyObject *
PyvtkTypedArray_IyE_GetValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<unsigned long long> *op = static_cast<vtkTypedArray<unsigned long long> *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    const unsigned long long *tempr = &op->GetValue(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(*tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkTypedArray_IyE_GetValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<unsigned long long> *op = static_cast<vtkTypedArray<unsigned long long> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    const unsigned long long *tempr = &op->GetValue(temp0, temp1);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(*tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkTypedArray_IyE_GetValue_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<unsigned long long> *op = static_cast<vtkTypedArray<unsigned long long> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  vtkIdType temp2;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    const unsigned long long *tempr = &op->GetValue(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(*tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkTypedArray_IyE_GetValue_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<unsigned long long> *op = static_cast<vtkTypedArray<unsigned long long> *>(vp);

  vtkArrayCoordinates *temp0 = NULL;
  PyObject *pobj0 = NULL;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkArrayCoordinates"))
    {
    const unsigned long long *tempr = &op->GetValue(*temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(*tempr);
      }
    }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkTypedArray_IyE_GetValue_Methods[] = {
  {NULL, PyvtkTypedArray_IyE_GetValue_s1, METH_VARARGS,
   (char*)"@L"},
  {NULL, PyvtkTypedArray_IyE_GetValue_s4, METH_VARARGS,
   (char*)"@O &vtkArrayCoordinates"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkTypedArray_IyE_GetValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkTypedArray_IyE_GetValue_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkTypedArray_IyE_GetValue_s2(self, args);
    case 3:
      return PyvtkTypedArray_IyE_GetValue_s3(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetValue");
  return NULL;
}



static PyObject *
PyvtkTypedArray_IyE_GetValueN(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValueN");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<unsigned long long> *op = static_cast<vtkTypedArray<unsigned long long> *>(vp);

  unsigned long long temp0;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    const unsigned long long *tempr = &op->GetValueN(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(*tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTypedArray_IyE_SetValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<unsigned long long> *op = static_cast<vtkTypedArray<unsigned long long> *>(vp);

  vtkIdType temp0;
  unsigned long long temp1;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    op->SetValue(temp0, temp1);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkTypedArray_IyE_SetValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<unsigned long long> *op = static_cast<vtkTypedArray<unsigned long long> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  unsigned long long temp2;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    op->SetValue(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkTypedArray_IyE_SetValue_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<unsigned long long> *op = static_cast<vtkTypedArray<unsigned long long> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  vtkIdType temp2;
  unsigned long long temp3;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
    {
    op->SetValue(temp0, temp1, temp2, temp3);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkTypedArray_IyE_SetValue_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<unsigned long long> *op = static_cast<vtkTypedArray<unsigned long long> *>(vp);

  vtkArrayCoordinates *temp0 = NULL;
  PyObject *pobj0 = NULL;
  unsigned long long temp1;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(2) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkArrayCoordinates") &&
      ap.GetValue(temp1))
    {
    op->SetValue(*temp0, temp1);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkTypedArray_IyE_SetValue_Methods[] = {
  {NULL, PyvtkTypedArray_IyE_SetValue_s1, METH_VARARGS,
   (char*)"@LK"},
  {NULL, PyvtkTypedArray_IyE_SetValue_s4, METH_VARARGS,
   (char*)"@OK &vtkArrayCoordinates"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkTypedArray_IyE_SetValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkTypedArray_IyE_SetValue_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkTypedArray_IyE_SetValue_s2(self, args);
    case 4:
      return PyvtkTypedArray_IyE_SetValue_s3(self, args);
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetValue");
  return NULL;
}



static PyObject *
PyvtkTypedArray_IyE_SetValueN(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValueN");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<unsigned long long> *op = static_cast<vtkTypedArray<unsigned long long> *>(vp);

  unsigned long long temp0;
  unsigned long long temp1;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    op->SetValueN(temp0, temp1);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkTypedArray_IyE_Methods[] = {
  {(char*)"GetVariantValue", PyvtkTypedArray_IyE_GetVariantValue, METH_VARARGS,
   (char*)"V.GetVariantValue(int) -> vtkVariant\nC++: vtkVariant GetVariantValue(vtkIdType i)\nV.GetVariantValue(int, int) -> vtkVariant\nC++: vtkVariant GetVariantValue(vtkIdType i, vtkIdType j)\nV.GetVariantValue(int, int, int) -> vtkVariant\nC++: vtkVariant GetVariantValue(vtkIdType i, vtkIdType j,\n    vtkIdType k)\nV.GetVariantValue(vtkArrayCoordinates) -> vtkVariant\nC++: virtual vtkVariant GetVariantValue(\n    const vtkArrayCoordinates &coordinates)\n\n"},
  {(char*)"SetVariantValue", PyvtkTypedArray_IyE_SetVariantValue, METH_VARARGS,
   (char*)"V.SetVariantValue(int, vtkVariant)\nC++: void SetVariantValue(vtkIdType i, const vtkVariant &value)\nV.SetVariantValue(int, int, vtkVariant)\nC++: void SetVariantValue(vtkIdType i, vtkIdType j,\n    const vtkVariant &value)\nV.SetVariantValue(int, int, int, vtkVariant)\nC++: void SetVariantValue(vtkIdType i, vtkIdType j, vtkIdType k,\n    const vtkVariant &value)\nV.SetVariantValue(vtkArrayCoordinates, vtkVariant)\nC++: virtual void SetVariantValue(\n    const vtkArrayCoordinates &coordinates,\n    const vtkVariant &value)\n\n"},
  {(char*)"GetVariantValueN", PyvtkTypedArray_IyE_GetVariantValueN, METH_VARARGS,
   (char*)"V.GetVariantValueN(int) -> vtkVariant\nC++: virtual vtkVariant GetVariantValueN(const SizeT n)\n\n"},
  {(char*)"SetVariantValueN", PyvtkTypedArray_IyE_SetVariantValueN, METH_VARARGS,
   (char*)"V.SetVariantValueN(int, vtkVariant)\nC++: virtual void SetVariantValueN(const SizeT n,\n    const vtkVariant &value)\n\n"},
  {(char*)"CopyValue", PyvtkTypedArray_IyE_CopyValue, METH_VARARGS,
   (char*)"V.CopyValue(vtkArray, vtkArrayCoordinates, vtkArrayCoordinates)\nC++: virtual void CopyValue(vtkArray *source,\n    const vtkArrayCoordinates &source_coordinates,\n    const vtkArrayCoordinates &target_coordinates)\nV.CopyValue(vtkArray, int, vtkArrayCoordinates)\nC++: virtual void CopyValue(vtkArray *source,\n    const SizeT source_index,\n    const vtkArrayCoordinates &target_coordinates)\nV.CopyValue(vtkArray, vtkArrayCoordinates, int)\nC++: virtual void CopyValue(vtkArray *source,\n    const vtkArrayCoordinates &source_coordinates,\n    const SizeT target_index)\n\n"},
  {(char*)"GetValue", PyvtkTypedArray_IyE_GetValue, METH_VARARGS,
   (char*)"V.GetValue(int) -> int\nC++: virtual const unsigned long long &GetValue(CoordinateT i)\nV.GetValue(int, int) -> int\nC++: virtual const unsigned long long &GetValue(CoordinateT i,\n    CoordinateT j)\nV.GetValue(int, int, int) -> int\nC++: virtual const unsigned long long &GetValue(CoordinateT i,\n    CoordinateT j, CoordinateT k)\nV.GetValue(vtkArrayCoordinates) -> int\nC++: virtual const unsigned long long &GetValue(\n    const vtkArrayCoordinates &coordinates)\n\nReturns the value stored in the array at the given coordinates.\nNote that the number of dimensions in the supplied coordinates\nmust match the number of dimensions in the array.\n"},
  {(char*)"GetValueN", PyvtkTypedArray_IyE_GetValueN, METH_VARARGS,
   (char*)"V.GetValueN(int) -> int\nC++: virtual const unsigned long long &GetValueN(const SizeT n)\n\nReturns the n-th value stored in the array, where n is in the\nrange [0, GetNonNullSize()).  This is useful for efficiently\nvisiting every value in the array.  Note that the order in which\nvalues are visited is undefined, but is guaranteed to match the\norder used by vtkArray::GetCoordinatesN().\n"},
  {(char*)"SetValue", PyvtkTypedArray_IyE_SetValue, METH_VARARGS,
   (char*)"V.SetValue(int, int)\nC++: virtual void SetValue(CoordinateT i,\n    const unsigned long long &value)\nV.SetValue(int, int, int)\nC++: virtual void SetValue(CoordinateT i, CoordinateT j,\n    const unsigned long long &value)\nV.SetValue(int, int, int, int)\nC++: virtual void SetValue(CoordinateT i, CoordinateT j,\n    CoordinateT k, const unsigned long long &value)\nV.SetValue(vtkArrayCoordinates, int)\nC++: virtual void SetValue(const vtkArrayCoordinates &coordinates,\n     const unsigned long long &value)\n\nOverwrites the value stored in the array at the given\ncoordinates. Note that the number of dimensions in the supplied\ncoordinates must match the number of dimensions in the array.\n"},
  {(char*)"SetValueN", PyvtkTypedArray_IyE_SetValueN, METH_VARARGS,
   (char*)"V.SetValueN(int, int)\nC++: virtual void SetValueN(const SizeT n,\n    const unsigned long long &value)\n\nOverwrites the n-th value stored in the array, where n is in the\nrange [0, GetNonNullSize()).  This is useful for efficiently\nvisiting every value in the array.  Note that the order in which\nvalues are visited is undefined, but is guaranteed to match the\norder used by vtkArray::GetCoordinatesN().\n"},
  {NULL, NULL, 0, NULL}
};

PyObject *PyVTKClass_vtkTypedArray_IyENew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(NULL,
    PyvtkTypedArray_IyE_Methods,
    typeid(vtkTypedArray<unsigned long long>).name(), modulename,
    "vtkTypedArray_IyE", "vtkTypedArray_IyE",
    PyvtkTypedArray_IyE_Doc(),
    PyVTKClass_vtkArrayNew(modulename));
  return cls;
}

const char **PyvtkTypedArray_IyE_Doc()
{
  static const char *docstring[] = {
    "vtkTypedArray - Provides a type-specific interface to N-way arrays\n\n",
    "Superclass: vtkArray\n\n",
    "vtkTypedArray provides an interface for retrieving and updating data\nin an arbitrary-dimension array.  It derives from vtkArray and is\ntemplated on the type of value stored in the array.\n\nMethods are provided for retrieving and updating array values based\neither on their array coordinates, or on a 1-dimensional integer\nindex.  The latter approach can be used to iterate over the values in\nan array ",
    "in arbitrary order, which is useful when writing filters\nthat operate efficiently on sparse arrays and arrays that can have\nany number of dimensions.\n\nSpecial overloaded methods provide simple access for arrays with one,\ntwo, or three dimensions.\n\nSee Also:\n\nvtkArray, vtkDenseArray, vtkSparseArray\n\nThanks:\n\nDeveloped by Timothy M. Shead (tshead@sandia.gov) at Sandia National\nLaboratories.\n\n",
    NULL
  };

  return docstring;
}

extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkTypedArray_IfENew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkArrayNew
extern "C" { PyObject *PyVTKClass_vtkArrayNew(const char *); }
#define DECLARED_PyVTKClass_vtkArrayNew
#endif

static const char **PyvtkTypedArray_IfE_Doc();


static PyObject *
PyvtkTypedArray_IfE_GetVariantValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVariantValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<float> *op = static_cast<vtkTypedArray<float> *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkVariant tempr = (ap.IsBound() ?
      op->GetVariantValue(temp0) :
      op->vtkTypedArray<float>::GetVariantValue(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildSpecialObject(&tempr, "vtkVariant");
      }
    }

  return result;
}

static PyObject *
PyvtkTypedArray_IfE_GetVariantValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVariantValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<float> *op = static_cast<vtkTypedArray<float> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    vtkVariant tempr = (ap.IsBound() ?
      op->GetVariantValue(temp0, temp1) :
      op->vtkTypedArray<float>::GetVariantValue(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildSpecialObject(&tempr, "vtkVariant");
      }
    }

  return result;
}

static PyObject *
PyvtkTypedArray_IfE_GetVariantValue_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVariantValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<float> *op = static_cast<vtkTypedArray<float> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  vtkIdType temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    vtkVariant tempr = (ap.IsBound() ?
      op->GetVariantValue(temp0, temp1, temp2) :
      op->vtkTypedArray<float>::GetVariantValue(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildSpecialObject(&tempr, "vtkVariant");
      }
    }

  return result;
}

static PyObject *
PyvtkTypedArray_IfE_GetVariantValue_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVariantValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<float> *op = static_cast<vtkTypedArray<float> *>(vp);

  vtkArrayCoordinates *temp0 = NULL;
  PyObject *pobj0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkArrayCoordinates"))
    {
    vtkVariant tempr = (ap.IsBound() ?
      op->GetVariantValue(*temp0) :
      op->vtkTypedArray<float>::GetVariantValue(*temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildSpecialObject(&tempr, "vtkVariant");
      }
    }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkTypedArray_IfE_GetVariantValue_Methods[] = {
  {NULL, PyvtkTypedArray_IfE_GetVariantValue_s1, METH_VARARGS,
   (char*)"@L"},
  {NULL, PyvtkTypedArray_IfE_GetVariantValue_s4, METH_VARARGS,
   (char*)"@O &vtkArrayCoordinates"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkTypedArray_IfE_GetVariantValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkTypedArray_IfE_GetVariantValue_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkTypedArray_IfE_GetVariantValue_s2(self, args);
    case 3:
      return PyvtkTypedArray_IfE_GetVariantValue_s3(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetVariantValue");
  return NULL;
}



static PyObject *
PyvtkTypedArray_IfE_SetVariantValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVariantValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<float> *op = static_cast<vtkTypedArray<float> *>(vp);

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
      op->SetVariantValue(temp0, *temp1);
      }
    else
      {
      op->vtkTypedArray<float>::SetVariantValue(temp0, *temp1);
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
PyvtkTypedArray_IfE_SetVariantValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVariantValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<float> *op = static_cast<vtkTypedArray<float> *>(vp);

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
      op->SetVariantValue(temp0, temp1, *temp2);
      }
    else
      {
      op->vtkTypedArray<float>::SetVariantValue(temp0, temp1, *temp2);
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
PyvtkTypedArray_IfE_SetVariantValue_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVariantValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<float> *op = static_cast<vtkTypedArray<float> *>(vp);

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
      op->SetVariantValue(temp0, temp1, temp2, *temp3);
      }
    else
      {
      op->vtkTypedArray<float>::SetVariantValue(temp0, temp1, temp2, *temp3);
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
PyvtkTypedArray_IfE_SetVariantValue_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVariantValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<float> *op = static_cast<vtkTypedArray<float> *>(vp);

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
      op->SetVariantValue(*temp0, *temp1);
      }
    else
      {
      op->vtkTypedArray<float>::SetVariantValue(*temp0, *temp1);
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

static PyMethodDef PyvtkTypedArray_IfE_SetVariantValue_Methods[] = {
  {NULL, PyvtkTypedArray_IfE_SetVariantValue_s1, METH_VARARGS,
   (char*)"@LO &vtkVariant"},
  {NULL, PyvtkTypedArray_IfE_SetVariantValue_s4, METH_VARARGS,
   (char*)"@OO &vtkArrayCoordinates &vtkVariant"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkTypedArray_IfE_SetVariantValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkTypedArray_IfE_SetVariantValue_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkTypedArray_IfE_SetVariantValue_s2(self, args);
    case 4:
      return PyvtkTypedArray_IfE_SetVariantValue_s3(self, args);
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetVariantValue");
  return NULL;
}



static PyObject *
PyvtkTypedArray_IfE_GetVariantValueN(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVariantValueN");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<float> *op = static_cast<vtkTypedArray<float> *>(vp);

  unsigned long long temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkVariant tempr = (ap.IsBound() ?
      op->GetVariantValueN(temp0) :
      op->vtkTypedArray<float>::GetVariantValueN(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildSpecialObject(&tempr, "vtkVariant");
      }
    }

  return result;
}


static PyObject *
PyvtkTypedArray_IfE_SetVariantValueN(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVariantValueN");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<float> *op = static_cast<vtkTypedArray<float> *>(vp);

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
      op->SetVariantValueN(temp0, *temp1);
      }
    else
      {
      op->vtkTypedArray<float>::SetVariantValueN(temp0, *temp1);
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
PyvtkTypedArray_IfE_CopyValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<float> *op = static_cast<vtkTypedArray<float> *>(vp);

  vtkArray *temp0 = NULL;
  vtkArrayCoordinates *temp1 = NULL;
  PyObject *pobj1 = NULL;
  vtkArrayCoordinates *temp2 = NULL;
  PyObject *pobj2 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkArray") &&
      ap.GetSpecialObject(temp1, pobj1, "vtkArrayCoordinates") &&
      ap.GetSpecialObject(temp2, pobj2, "vtkArrayCoordinates"))
    {
    if (ap.IsBound())
      {
      op->CopyValue(temp0, *temp1, *temp2);
      }
    else
      {
      op->vtkTypedArray<float>::CopyValue(temp0, *temp1, *temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  Py_XDECREF(pobj1);
  Py_XDECREF(pobj2);

  return result;
}

static PyObject *
PyvtkTypedArray_IfE_CopyValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<float> *op = static_cast<vtkTypedArray<float> *>(vp);

  vtkArray *temp0 = NULL;
  unsigned long long temp1;
  vtkArrayCoordinates *temp2 = NULL;
  PyObject *pobj2 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkArray") &&
      ap.GetValue(temp1) &&
      ap.GetSpecialObject(temp2, pobj2, "vtkArrayCoordinates"))
    {
    if (ap.IsBound())
      {
      op->CopyValue(temp0, temp1, *temp2);
      }
    else
      {
      op->vtkTypedArray<float>::CopyValue(temp0, temp1, *temp2);
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
PyvtkTypedArray_IfE_CopyValue_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<float> *op = static_cast<vtkTypedArray<float> *>(vp);

  vtkArray *temp0 = NULL;
  vtkArrayCoordinates *temp1 = NULL;
  PyObject *pobj1 = NULL;
  unsigned long long temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkArray") &&
      ap.GetSpecialObject(temp1, pobj1, "vtkArrayCoordinates") &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      op->CopyValue(temp0, *temp1, temp2);
      }
    else
      {
      op->vtkTypedArray<float>::CopyValue(temp0, *temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  Py_XDECREF(pobj1);

  return result;
}

static PyMethodDef PyvtkTypedArray_IfE_CopyValue_Methods[] = {
  {NULL, PyvtkTypedArray_IfE_CopyValue_s1, METH_VARARGS,
   (char*)"@OOO *vtkArray &vtkArrayCoordinates &vtkArrayCoordinates"},
  {NULL, PyvtkTypedArray_IfE_CopyValue_s2, METH_VARARGS,
   (char*)"@OKO *vtkArray &vtkArrayCoordinates"},
  {NULL, PyvtkTypedArray_IfE_CopyValue_s3, METH_VARARGS,
   (char*)"@OOK *vtkArray &vtkArrayCoordinates"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkTypedArray_IfE_CopyValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkTypedArray_IfE_CopyValue_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "CopyValue");
  return NULL;
}



static PyObject *
PyvtkTypedArray_IfE_GetValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<float> *op = static_cast<vtkTypedArray<float> *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    const float *tempr = &op->GetValue(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(*tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkTypedArray_IfE_GetValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<float> *op = static_cast<vtkTypedArray<float> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    const float *tempr = &op->GetValue(temp0, temp1);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(*tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkTypedArray_IfE_GetValue_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<float> *op = static_cast<vtkTypedArray<float> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  vtkIdType temp2;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    const float *tempr = &op->GetValue(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(*tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkTypedArray_IfE_GetValue_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<float> *op = static_cast<vtkTypedArray<float> *>(vp);

  vtkArrayCoordinates *temp0 = NULL;
  PyObject *pobj0 = NULL;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkArrayCoordinates"))
    {
    const float *tempr = &op->GetValue(*temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(*tempr);
      }
    }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkTypedArray_IfE_GetValue_Methods[] = {
  {NULL, PyvtkTypedArray_IfE_GetValue_s1, METH_VARARGS,
   (char*)"@L"},
  {NULL, PyvtkTypedArray_IfE_GetValue_s4, METH_VARARGS,
   (char*)"@O &vtkArrayCoordinates"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkTypedArray_IfE_GetValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkTypedArray_IfE_GetValue_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkTypedArray_IfE_GetValue_s2(self, args);
    case 3:
      return PyvtkTypedArray_IfE_GetValue_s3(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetValue");
  return NULL;
}



static PyObject *
PyvtkTypedArray_IfE_GetValueN(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValueN");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<float> *op = static_cast<vtkTypedArray<float> *>(vp);

  unsigned long long temp0;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    const float *tempr = &op->GetValueN(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(*tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTypedArray_IfE_SetValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<float> *op = static_cast<vtkTypedArray<float> *>(vp);

  vtkIdType temp0;
  float temp1;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    op->SetValue(temp0, temp1);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkTypedArray_IfE_SetValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<float> *op = static_cast<vtkTypedArray<float> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  float temp2;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    op->SetValue(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkTypedArray_IfE_SetValue_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<float> *op = static_cast<vtkTypedArray<float> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  vtkIdType temp2;
  float temp3;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
    {
    op->SetValue(temp0, temp1, temp2, temp3);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkTypedArray_IfE_SetValue_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<float> *op = static_cast<vtkTypedArray<float> *>(vp);

  vtkArrayCoordinates *temp0 = NULL;
  PyObject *pobj0 = NULL;
  float temp1;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(2) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkArrayCoordinates") &&
      ap.GetValue(temp1))
    {
    op->SetValue(*temp0, temp1);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkTypedArray_IfE_SetValue_Methods[] = {
  {NULL, PyvtkTypedArray_IfE_SetValue_s1, METH_VARARGS,
   (char*)"@Lf"},
  {NULL, PyvtkTypedArray_IfE_SetValue_s4, METH_VARARGS,
   (char*)"@Of &vtkArrayCoordinates"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkTypedArray_IfE_SetValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkTypedArray_IfE_SetValue_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkTypedArray_IfE_SetValue_s2(self, args);
    case 4:
      return PyvtkTypedArray_IfE_SetValue_s3(self, args);
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetValue");
  return NULL;
}



static PyObject *
PyvtkTypedArray_IfE_SetValueN(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValueN");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<float> *op = static_cast<vtkTypedArray<float> *>(vp);

  unsigned long long temp0;
  float temp1;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    op->SetValueN(temp0, temp1);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkTypedArray_IfE_Methods[] = {
  {(char*)"GetVariantValue", PyvtkTypedArray_IfE_GetVariantValue, METH_VARARGS,
   (char*)"V.GetVariantValue(int) -> vtkVariant\nC++: vtkVariant GetVariantValue(vtkIdType i)\nV.GetVariantValue(int, int) -> vtkVariant\nC++: vtkVariant GetVariantValue(vtkIdType i, vtkIdType j)\nV.GetVariantValue(int, int, int) -> vtkVariant\nC++: vtkVariant GetVariantValue(vtkIdType i, vtkIdType j,\n    vtkIdType k)\nV.GetVariantValue(vtkArrayCoordinates) -> vtkVariant\nC++: virtual vtkVariant GetVariantValue(\n    const vtkArrayCoordinates &coordinates)\n\n"},
  {(char*)"SetVariantValue", PyvtkTypedArray_IfE_SetVariantValue, METH_VARARGS,
   (char*)"V.SetVariantValue(int, vtkVariant)\nC++: void SetVariantValue(vtkIdType i, const vtkVariant &value)\nV.SetVariantValue(int, int, vtkVariant)\nC++: void SetVariantValue(vtkIdType i, vtkIdType j,\n    const vtkVariant &value)\nV.SetVariantValue(int, int, int, vtkVariant)\nC++: void SetVariantValue(vtkIdType i, vtkIdType j, vtkIdType k,\n    const vtkVariant &value)\nV.SetVariantValue(vtkArrayCoordinates, vtkVariant)\nC++: virtual void SetVariantValue(\n    const vtkArrayCoordinates &coordinates,\n    const vtkVariant &value)\n\n"},
  {(char*)"GetVariantValueN", PyvtkTypedArray_IfE_GetVariantValueN, METH_VARARGS,
   (char*)"V.GetVariantValueN(int) -> vtkVariant\nC++: virtual vtkVariant GetVariantValueN(const SizeT n)\n\n"},
  {(char*)"SetVariantValueN", PyvtkTypedArray_IfE_SetVariantValueN, METH_VARARGS,
   (char*)"V.SetVariantValueN(int, vtkVariant)\nC++: virtual void SetVariantValueN(const SizeT n,\n    const vtkVariant &value)\n\n"},
  {(char*)"CopyValue", PyvtkTypedArray_IfE_CopyValue, METH_VARARGS,
   (char*)"V.CopyValue(vtkArray, vtkArrayCoordinates, vtkArrayCoordinates)\nC++: virtual void CopyValue(vtkArray *source,\n    const vtkArrayCoordinates &source_coordinates,\n    const vtkArrayCoordinates &target_coordinates)\nV.CopyValue(vtkArray, int, vtkArrayCoordinates)\nC++: virtual void CopyValue(vtkArray *source,\n    const SizeT source_index,\n    const vtkArrayCoordinates &target_coordinates)\nV.CopyValue(vtkArray, vtkArrayCoordinates, int)\nC++: virtual void CopyValue(vtkArray *source,\n    const vtkArrayCoordinates &source_coordinates,\n    const SizeT target_index)\n\n"},
  {(char*)"GetValue", PyvtkTypedArray_IfE_GetValue, METH_VARARGS,
   (char*)"V.GetValue(int) -> float\nC++: virtual const float &GetValue(CoordinateT i)\nV.GetValue(int, int) -> float\nC++: virtual const float &GetValue(CoordinateT i, CoordinateT j)\nV.GetValue(int, int, int) -> float\nC++: virtual const float &GetValue(CoordinateT i, CoordinateT j,\n    CoordinateT k)\nV.GetValue(vtkArrayCoordinates) -> float\nC++: virtual const float &GetValue(\n    const vtkArrayCoordinates &coordinates)\n\nReturns the value stored in the array at the given coordinates.\nNote that the number of dimensions in the supplied coordinates\nmust match the number of dimensions in the array.\n"},
  {(char*)"GetValueN", PyvtkTypedArray_IfE_GetValueN, METH_VARARGS,
   (char*)"V.GetValueN(int) -> float\nC++: virtual const float &GetValueN(const SizeT n)\n\nReturns the n-th value stored in the array, where n is in the\nrange [0, GetNonNullSize()).  This is useful for efficiently\nvisiting every value in the array.  Note that the order in which\nvalues are visited is undefined, but is guaranteed to match the\norder used by vtkArray::GetCoordinatesN().\n"},
  {(char*)"SetValue", PyvtkTypedArray_IfE_SetValue, METH_VARARGS,
   (char*)"V.SetValue(int, float)\nC++: virtual void SetValue(CoordinateT i, const float &value)\nV.SetValue(int, int, float)\nC++: virtual void SetValue(CoordinateT i, CoordinateT j,\n    const float &value)\nV.SetValue(int, int, int, float)\nC++: virtual void SetValue(CoordinateT i, CoordinateT j,\n    CoordinateT k, const float &value)\nV.SetValue(vtkArrayCoordinates, float)\nC++: virtual void SetValue(const vtkArrayCoordinates &coordinates,\n     const float &value)\n\nOverwrites the value stored in the array at the given\ncoordinates. Note that the number of dimensions in the supplied\ncoordinates must match the number of dimensions in the array.\n"},
  {(char*)"SetValueN", PyvtkTypedArray_IfE_SetValueN, METH_VARARGS,
   (char*)"V.SetValueN(int, float)\nC++: virtual void SetValueN(const SizeT n, const float &value)\n\nOverwrites the n-th value stored in the array, where n is in the\nrange [0, GetNonNullSize()).  This is useful for efficiently\nvisiting every value in the array.  Note that the order in which\nvalues are visited is undefined, but is guaranteed to match the\norder used by vtkArray::GetCoordinatesN().\n"},
  {NULL, NULL, 0, NULL}
};

PyObject *PyVTKClass_vtkTypedArray_IfENew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(NULL,
    PyvtkTypedArray_IfE_Methods,
    typeid(vtkTypedArray<float>).name(), modulename,
    "vtkTypedArray_IfE", "vtkTypedArray_IfE",
    PyvtkTypedArray_IfE_Doc(),
    PyVTKClass_vtkArrayNew(modulename));
  return cls;
}

const char **PyvtkTypedArray_IfE_Doc()
{
  static const char *docstring[] = {
    "vtkTypedArray - Provides a type-specific interface to N-way arrays\n\n",
    "Superclass: vtkArray\n\n",
    "vtkTypedArray provides an interface for retrieving and updating data\nin an arbitrary-dimension array.  It derives from vtkArray and is\ntemplated on the type of value stored in the array.\n\nMethods are provided for retrieving and updating array values based\neither on their array coordinates, or on a 1-dimensional integer\nindex.  The latter approach can be used to iterate over the values in\nan array ",
    "in arbitrary order, which is useful when writing filters\nthat operate efficiently on sparse arrays and arrays that can have\nany number of dimensions.\n\nSpecial overloaded methods provide simple access for arrays with one,\ntwo, or three dimensions.\n\nSee Also:\n\nvtkArray, vtkDenseArray, vtkSparseArray\n\nThanks:\n\nDeveloped by Timothy M. Shead (tshead@sandia.gov) at Sandia National\nLaboratories.\n\n",
    NULL
  };

  return docstring;
}

extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkTypedArray_IdENew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkArrayNew
extern "C" { PyObject *PyVTKClass_vtkArrayNew(const char *); }
#define DECLARED_PyVTKClass_vtkArrayNew
#endif

static const char **PyvtkTypedArray_IdE_Doc();


static PyObject *
PyvtkTypedArray_IdE_GetVariantValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVariantValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<double> *op = static_cast<vtkTypedArray<double> *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkVariant tempr = (ap.IsBound() ?
      op->GetVariantValue(temp0) :
      op->vtkTypedArray<double>::GetVariantValue(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildSpecialObject(&tempr, "vtkVariant");
      }
    }

  return result;
}

static PyObject *
PyvtkTypedArray_IdE_GetVariantValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVariantValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<double> *op = static_cast<vtkTypedArray<double> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    vtkVariant tempr = (ap.IsBound() ?
      op->GetVariantValue(temp0, temp1) :
      op->vtkTypedArray<double>::GetVariantValue(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildSpecialObject(&tempr, "vtkVariant");
      }
    }

  return result;
}

static PyObject *
PyvtkTypedArray_IdE_GetVariantValue_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVariantValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<double> *op = static_cast<vtkTypedArray<double> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  vtkIdType temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    vtkVariant tempr = (ap.IsBound() ?
      op->GetVariantValue(temp0, temp1, temp2) :
      op->vtkTypedArray<double>::GetVariantValue(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildSpecialObject(&tempr, "vtkVariant");
      }
    }

  return result;
}

static PyObject *
PyvtkTypedArray_IdE_GetVariantValue_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVariantValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<double> *op = static_cast<vtkTypedArray<double> *>(vp);

  vtkArrayCoordinates *temp0 = NULL;
  PyObject *pobj0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkArrayCoordinates"))
    {
    vtkVariant tempr = (ap.IsBound() ?
      op->GetVariantValue(*temp0) :
      op->vtkTypedArray<double>::GetVariantValue(*temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildSpecialObject(&tempr, "vtkVariant");
      }
    }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkTypedArray_IdE_GetVariantValue_Methods[] = {
  {NULL, PyvtkTypedArray_IdE_GetVariantValue_s1, METH_VARARGS,
   (char*)"@L"},
  {NULL, PyvtkTypedArray_IdE_GetVariantValue_s4, METH_VARARGS,
   (char*)"@O &vtkArrayCoordinates"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkTypedArray_IdE_GetVariantValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkTypedArray_IdE_GetVariantValue_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkTypedArray_IdE_GetVariantValue_s2(self, args);
    case 3:
      return PyvtkTypedArray_IdE_GetVariantValue_s3(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetVariantValue");
  return NULL;
}



static PyObject *
PyvtkTypedArray_IdE_SetVariantValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVariantValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<double> *op = static_cast<vtkTypedArray<double> *>(vp);

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
      op->SetVariantValue(temp0, *temp1);
      }
    else
      {
      op->vtkTypedArray<double>::SetVariantValue(temp0, *temp1);
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
PyvtkTypedArray_IdE_SetVariantValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVariantValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<double> *op = static_cast<vtkTypedArray<double> *>(vp);

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
      op->SetVariantValue(temp0, temp1, *temp2);
      }
    else
      {
      op->vtkTypedArray<double>::SetVariantValue(temp0, temp1, *temp2);
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
PyvtkTypedArray_IdE_SetVariantValue_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVariantValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<double> *op = static_cast<vtkTypedArray<double> *>(vp);

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
      op->SetVariantValue(temp0, temp1, temp2, *temp3);
      }
    else
      {
      op->vtkTypedArray<double>::SetVariantValue(temp0, temp1, temp2, *temp3);
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
PyvtkTypedArray_IdE_SetVariantValue_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVariantValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<double> *op = static_cast<vtkTypedArray<double> *>(vp);

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
      op->SetVariantValue(*temp0, *temp1);
      }
    else
      {
      op->vtkTypedArray<double>::SetVariantValue(*temp0, *temp1);
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

static PyMethodDef PyvtkTypedArray_IdE_SetVariantValue_Methods[] = {
  {NULL, PyvtkTypedArray_IdE_SetVariantValue_s1, METH_VARARGS,
   (char*)"@LO &vtkVariant"},
  {NULL, PyvtkTypedArray_IdE_SetVariantValue_s4, METH_VARARGS,
   (char*)"@OO &vtkArrayCoordinates &vtkVariant"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkTypedArray_IdE_SetVariantValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkTypedArray_IdE_SetVariantValue_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkTypedArray_IdE_SetVariantValue_s2(self, args);
    case 4:
      return PyvtkTypedArray_IdE_SetVariantValue_s3(self, args);
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetVariantValue");
  return NULL;
}



static PyObject *
PyvtkTypedArray_IdE_GetVariantValueN(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVariantValueN");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<double> *op = static_cast<vtkTypedArray<double> *>(vp);

  unsigned long long temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkVariant tempr = (ap.IsBound() ?
      op->GetVariantValueN(temp0) :
      op->vtkTypedArray<double>::GetVariantValueN(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildSpecialObject(&tempr, "vtkVariant");
      }
    }

  return result;
}


static PyObject *
PyvtkTypedArray_IdE_SetVariantValueN(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVariantValueN");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<double> *op = static_cast<vtkTypedArray<double> *>(vp);

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
      op->SetVariantValueN(temp0, *temp1);
      }
    else
      {
      op->vtkTypedArray<double>::SetVariantValueN(temp0, *temp1);
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
PyvtkTypedArray_IdE_CopyValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<double> *op = static_cast<vtkTypedArray<double> *>(vp);

  vtkArray *temp0 = NULL;
  vtkArrayCoordinates *temp1 = NULL;
  PyObject *pobj1 = NULL;
  vtkArrayCoordinates *temp2 = NULL;
  PyObject *pobj2 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkArray") &&
      ap.GetSpecialObject(temp1, pobj1, "vtkArrayCoordinates") &&
      ap.GetSpecialObject(temp2, pobj2, "vtkArrayCoordinates"))
    {
    if (ap.IsBound())
      {
      op->CopyValue(temp0, *temp1, *temp2);
      }
    else
      {
      op->vtkTypedArray<double>::CopyValue(temp0, *temp1, *temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  Py_XDECREF(pobj1);
  Py_XDECREF(pobj2);

  return result;
}

static PyObject *
PyvtkTypedArray_IdE_CopyValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<double> *op = static_cast<vtkTypedArray<double> *>(vp);

  vtkArray *temp0 = NULL;
  unsigned long long temp1;
  vtkArrayCoordinates *temp2 = NULL;
  PyObject *pobj2 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkArray") &&
      ap.GetValue(temp1) &&
      ap.GetSpecialObject(temp2, pobj2, "vtkArrayCoordinates"))
    {
    if (ap.IsBound())
      {
      op->CopyValue(temp0, temp1, *temp2);
      }
    else
      {
      op->vtkTypedArray<double>::CopyValue(temp0, temp1, *temp2);
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
PyvtkTypedArray_IdE_CopyValue_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<double> *op = static_cast<vtkTypedArray<double> *>(vp);

  vtkArray *temp0 = NULL;
  vtkArrayCoordinates *temp1 = NULL;
  PyObject *pobj1 = NULL;
  unsigned long long temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkArray") &&
      ap.GetSpecialObject(temp1, pobj1, "vtkArrayCoordinates") &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      op->CopyValue(temp0, *temp1, temp2);
      }
    else
      {
      op->vtkTypedArray<double>::CopyValue(temp0, *temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  Py_XDECREF(pobj1);

  return result;
}

static PyMethodDef PyvtkTypedArray_IdE_CopyValue_Methods[] = {
  {NULL, PyvtkTypedArray_IdE_CopyValue_s1, METH_VARARGS,
   (char*)"@OOO *vtkArray &vtkArrayCoordinates &vtkArrayCoordinates"},
  {NULL, PyvtkTypedArray_IdE_CopyValue_s2, METH_VARARGS,
   (char*)"@OKO *vtkArray &vtkArrayCoordinates"},
  {NULL, PyvtkTypedArray_IdE_CopyValue_s3, METH_VARARGS,
   (char*)"@OOK *vtkArray &vtkArrayCoordinates"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkTypedArray_IdE_CopyValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkTypedArray_IdE_CopyValue_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "CopyValue");
  return NULL;
}



static PyObject *
PyvtkTypedArray_IdE_GetValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<double> *op = static_cast<vtkTypedArray<double> *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    const double *tempr = &op->GetValue(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(*tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkTypedArray_IdE_GetValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<double> *op = static_cast<vtkTypedArray<double> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    const double *tempr = &op->GetValue(temp0, temp1);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(*tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkTypedArray_IdE_GetValue_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<double> *op = static_cast<vtkTypedArray<double> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  vtkIdType temp2;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    const double *tempr = &op->GetValue(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(*tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkTypedArray_IdE_GetValue_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<double> *op = static_cast<vtkTypedArray<double> *>(vp);

  vtkArrayCoordinates *temp0 = NULL;
  PyObject *pobj0 = NULL;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkArrayCoordinates"))
    {
    const double *tempr = &op->GetValue(*temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(*tempr);
      }
    }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkTypedArray_IdE_GetValue_Methods[] = {
  {NULL, PyvtkTypedArray_IdE_GetValue_s1, METH_VARARGS,
   (char*)"@L"},
  {NULL, PyvtkTypedArray_IdE_GetValue_s4, METH_VARARGS,
   (char*)"@O &vtkArrayCoordinates"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkTypedArray_IdE_GetValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkTypedArray_IdE_GetValue_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkTypedArray_IdE_GetValue_s2(self, args);
    case 3:
      return PyvtkTypedArray_IdE_GetValue_s3(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetValue");
  return NULL;
}



static PyObject *
PyvtkTypedArray_IdE_GetValueN(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValueN");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<double> *op = static_cast<vtkTypedArray<double> *>(vp);

  unsigned long long temp0;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    const double *tempr = &op->GetValueN(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(*tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTypedArray_IdE_SetValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<double> *op = static_cast<vtkTypedArray<double> *>(vp);

  vtkIdType temp0;
  double temp1;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    op->SetValue(temp0, temp1);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkTypedArray_IdE_SetValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<double> *op = static_cast<vtkTypedArray<double> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  double temp2;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    op->SetValue(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkTypedArray_IdE_SetValue_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<double> *op = static_cast<vtkTypedArray<double> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  vtkIdType temp2;
  double temp3;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
    {
    op->SetValue(temp0, temp1, temp2, temp3);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkTypedArray_IdE_SetValue_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<double> *op = static_cast<vtkTypedArray<double> *>(vp);

  vtkArrayCoordinates *temp0 = NULL;
  PyObject *pobj0 = NULL;
  double temp1;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(2) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkArrayCoordinates") &&
      ap.GetValue(temp1))
    {
    op->SetValue(*temp0, temp1);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkTypedArray_IdE_SetValue_Methods[] = {
  {NULL, PyvtkTypedArray_IdE_SetValue_s1, METH_VARARGS,
   (char*)"@Ld"},
  {NULL, PyvtkTypedArray_IdE_SetValue_s4, METH_VARARGS,
   (char*)"@Od &vtkArrayCoordinates"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkTypedArray_IdE_SetValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkTypedArray_IdE_SetValue_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkTypedArray_IdE_SetValue_s2(self, args);
    case 4:
      return PyvtkTypedArray_IdE_SetValue_s3(self, args);
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetValue");
  return NULL;
}



static PyObject *
PyvtkTypedArray_IdE_SetValueN(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValueN");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<double> *op = static_cast<vtkTypedArray<double> *>(vp);

  unsigned long long temp0;
  double temp1;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    op->SetValueN(temp0, temp1);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkTypedArray_IdE_Methods[] = {
  {(char*)"GetVariantValue", PyvtkTypedArray_IdE_GetVariantValue, METH_VARARGS,
   (char*)"V.GetVariantValue(int) -> vtkVariant\nC++: vtkVariant GetVariantValue(vtkIdType i)\nV.GetVariantValue(int, int) -> vtkVariant\nC++: vtkVariant GetVariantValue(vtkIdType i, vtkIdType j)\nV.GetVariantValue(int, int, int) -> vtkVariant\nC++: vtkVariant GetVariantValue(vtkIdType i, vtkIdType j,\n    vtkIdType k)\nV.GetVariantValue(vtkArrayCoordinates) -> vtkVariant\nC++: virtual vtkVariant GetVariantValue(\n    const vtkArrayCoordinates &coordinates)\n\n"},
  {(char*)"SetVariantValue", PyvtkTypedArray_IdE_SetVariantValue, METH_VARARGS,
   (char*)"V.SetVariantValue(int, vtkVariant)\nC++: void SetVariantValue(vtkIdType i, const vtkVariant &value)\nV.SetVariantValue(int, int, vtkVariant)\nC++: void SetVariantValue(vtkIdType i, vtkIdType j,\n    const vtkVariant &value)\nV.SetVariantValue(int, int, int, vtkVariant)\nC++: void SetVariantValue(vtkIdType i, vtkIdType j, vtkIdType k,\n    const vtkVariant &value)\nV.SetVariantValue(vtkArrayCoordinates, vtkVariant)\nC++: virtual void SetVariantValue(\n    const vtkArrayCoordinates &coordinates,\n    const vtkVariant &value)\n\n"},
  {(char*)"GetVariantValueN", PyvtkTypedArray_IdE_GetVariantValueN, METH_VARARGS,
   (char*)"V.GetVariantValueN(int) -> vtkVariant\nC++: virtual vtkVariant GetVariantValueN(const SizeT n)\n\n"},
  {(char*)"SetVariantValueN", PyvtkTypedArray_IdE_SetVariantValueN, METH_VARARGS,
   (char*)"V.SetVariantValueN(int, vtkVariant)\nC++: virtual void SetVariantValueN(const SizeT n,\n    const vtkVariant &value)\n\n"},
  {(char*)"CopyValue", PyvtkTypedArray_IdE_CopyValue, METH_VARARGS,
   (char*)"V.CopyValue(vtkArray, vtkArrayCoordinates, vtkArrayCoordinates)\nC++: virtual void CopyValue(vtkArray *source,\n    const vtkArrayCoordinates &source_coordinates,\n    const vtkArrayCoordinates &target_coordinates)\nV.CopyValue(vtkArray, int, vtkArrayCoordinates)\nC++: virtual void CopyValue(vtkArray *source,\n    const SizeT source_index,\n    const vtkArrayCoordinates &target_coordinates)\nV.CopyValue(vtkArray, vtkArrayCoordinates, int)\nC++: virtual void CopyValue(vtkArray *source,\n    const vtkArrayCoordinates &source_coordinates,\n    const SizeT target_index)\n\n"},
  {(char*)"GetValue", PyvtkTypedArray_IdE_GetValue, METH_VARARGS,
   (char*)"V.GetValue(int) -> float\nC++: virtual const double &GetValue(CoordinateT i)\nV.GetValue(int, int) -> float\nC++: virtual const double &GetValue(CoordinateT i, CoordinateT j)\nV.GetValue(int, int, int) -> float\nC++: virtual const double &GetValue(CoordinateT i, CoordinateT j,\n    CoordinateT k)\nV.GetValue(vtkArrayCoordinates) -> float\nC++: virtual const double &GetValue(\n    const vtkArrayCoordinates &coordinates)\n\nReturns the value stored in the array at the given coordinates.\nNote that the number of dimensions in the supplied coordinates\nmust match the number of dimensions in the array.\n"},
  {(char*)"GetValueN", PyvtkTypedArray_IdE_GetValueN, METH_VARARGS,
   (char*)"V.GetValueN(int) -> float\nC++: virtual const double &GetValueN(const SizeT n)\n\nReturns the n-th value stored in the array, where n is in the\nrange [0, GetNonNullSize()).  This is useful for efficiently\nvisiting every value in the array.  Note that the order in which\nvalues are visited is undefined, but is guaranteed to match the\norder used by vtkArray::GetCoordinatesN().\n"},
  {(char*)"SetValue", PyvtkTypedArray_IdE_SetValue, METH_VARARGS,
   (char*)"V.SetValue(int, float)\nC++: virtual void SetValue(CoordinateT i, const double &value)\nV.SetValue(int, int, float)\nC++: virtual void SetValue(CoordinateT i, CoordinateT j,\n    const double &value)\nV.SetValue(int, int, int, float)\nC++: virtual void SetValue(CoordinateT i, CoordinateT j,\n    CoordinateT k, const double &value)\nV.SetValue(vtkArrayCoordinates, float)\nC++: virtual void SetValue(const vtkArrayCoordinates &coordinates,\n     const double &value)\n\nOverwrites the value stored in the array at the given\ncoordinates. Note that the number of dimensions in the supplied\ncoordinates must match the number of dimensions in the array.\n"},
  {(char*)"SetValueN", PyvtkTypedArray_IdE_SetValueN, METH_VARARGS,
   (char*)"V.SetValueN(int, float)\nC++: virtual void SetValueN(const SizeT n, const double &value)\n\nOverwrites the n-th value stored in the array, where n is in the\nrange [0, GetNonNullSize()).  This is useful for efficiently\nvisiting every value in the array.  Note that the order in which\nvalues are visited is undefined, but is guaranteed to match the\norder used by vtkArray::GetCoordinatesN().\n"},
  {NULL, NULL, 0, NULL}
};

PyObject *PyVTKClass_vtkTypedArray_IdENew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(NULL,
    PyvtkTypedArray_IdE_Methods,
    typeid(vtkTypedArray<double>).name(), modulename,
    "vtkTypedArray_IdE", "vtkTypedArray_IdE",
    PyvtkTypedArray_IdE_Doc(),
    PyVTKClass_vtkArrayNew(modulename));
  return cls;
}

const char **PyvtkTypedArray_IdE_Doc()
{
  static const char *docstring[] = {
    "vtkTypedArray - Provides a type-specific interface to N-way arrays\n\n",
    "Superclass: vtkArray\n\n",
    "vtkTypedArray provides an interface for retrieving and updating data\nin an arbitrary-dimension array.  It derives from vtkArray and is\ntemplated on the type of value stored in the array.\n\nMethods are provided for retrieving and updating array values based\neither on their array coordinates, or on a 1-dimensional integer\nindex.  The latter approach can be used to iterate over the values in\nan array ",
    "in arbitrary order, which is useful when writing filters\nthat operate efficiently on sparse arrays and arrays that can have\nany number of dimensions.\n\nSpecial overloaded methods provide simple access for arrays with one,\ntwo, or three dimensions.\n\nSee Also:\n\nvtkArray, vtkDenseArray, vtkSparseArray\n\nThanks:\n\nDeveloped by Timothy M. Shead (tshead@sandia.gov) at Sandia National\nLaboratories.\n\n",
    NULL
  };

  return docstring;
}

extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkTypedArray_I12vtkStdStringENew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkArrayNew
extern "C" { PyObject *PyVTKClass_vtkArrayNew(const char *); }
#define DECLARED_PyVTKClass_vtkArrayNew
#endif

static const char **PyvtkTypedArray_I12vtkStdStringE_Doc();


static PyObject *
PyvtkTypedArray_I12vtkStdStringE_GetVariantValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVariantValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<vtkStdString> *op = static_cast<vtkTypedArray<vtkStdString> *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkVariant tempr = (ap.IsBound() ?
      op->GetVariantValue(temp0) :
      op->vtkTypedArray<vtkStdString>::GetVariantValue(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildSpecialObject(&tempr, "vtkVariant");
      }
    }

  return result;
}

static PyObject *
PyvtkTypedArray_I12vtkStdStringE_GetVariantValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVariantValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<vtkStdString> *op = static_cast<vtkTypedArray<vtkStdString> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    vtkVariant tempr = (ap.IsBound() ?
      op->GetVariantValue(temp0, temp1) :
      op->vtkTypedArray<vtkStdString>::GetVariantValue(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildSpecialObject(&tempr, "vtkVariant");
      }
    }

  return result;
}

static PyObject *
PyvtkTypedArray_I12vtkStdStringE_GetVariantValue_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVariantValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<vtkStdString> *op = static_cast<vtkTypedArray<vtkStdString> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  vtkIdType temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    vtkVariant tempr = (ap.IsBound() ?
      op->GetVariantValue(temp0, temp1, temp2) :
      op->vtkTypedArray<vtkStdString>::GetVariantValue(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildSpecialObject(&tempr, "vtkVariant");
      }
    }

  return result;
}

static PyObject *
PyvtkTypedArray_I12vtkStdStringE_GetVariantValue_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVariantValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<vtkStdString> *op = static_cast<vtkTypedArray<vtkStdString> *>(vp);

  vtkArrayCoordinates *temp0 = NULL;
  PyObject *pobj0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkArrayCoordinates"))
    {
    vtkVariant tempr = (ap.IsBound() ?
      op->GetVariantValue(*temp0) :
      op->vtkTypedArray<vtkStdString>::GetVariantValue(*temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildSpecialObject(&tempr, "vtkVariant");
      }
    }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkTypedArray_I12vtkStdStringE_GetVariantValue_Methods[] = {
  {NULL, PyvtkTypedArray_I12vtkStdStringE_GetVariantValue_s1, METH_VARARGS,
   (char*)"@L"},
  {NULL, PyvtkTypedArray_I12vtkStdStringE_GetVariantValue_s4, METH_VARARGS,
   (char*)"@O &vtkArrayCoordinates"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkTypedArray_I12vtkStdStringE_GetVariantValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkTypedArray_I12vtkStdStringE_GetVariantValue_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkTypedArray_I12vtkStdStringE_GetVariantValue_s2(self, args);
    case 3:
      return PyvtkTypedArray_I12vtkStdStringE_GetVariantValue_s3(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetVariantValue");
  return NULL;
}



static PyObject *
PyvtkTypedArray_I12vtkStdStringE_SetVariantValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVariantValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<vtkStdString> *op = static_cast<vtkTypedArray<vtkStdString> *>(vp);

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
      op->SetVariantValue(temp0, *temp1);
      }
    else
      {
      op->vtkTypedArray<vtkStdString>::SetVariantValue(temp0, *temp1);
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
PyvtkTypedArray_I12vtkStdStringE_SetVariantValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVariantValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<vtkStdString> *op = static_cast<vtkTypedArray<vtkStdString> *>(vp);

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
      op->SetVariantValue(temp0, temp1, *temp2);
      }
    else
      {
      op->vtkTypedArray<vtkStdString>::SetVariantValue(temp0, temp1, *temp2);
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
PyvtkTypedArray_I12vtkStdStringE_SetVariantValue_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVariantValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<vtkStdString> *op = static_cast<vtkTypedArray<vtkStdString> *>(vp);

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
      op->SetVariantValue(temp0, temp1, temp2, *temp3);
      }
    else
      {
      op->vtkTypedArray<vtkStdString>::SetVariantValue(temp0, temp1, temp2, *temp3);
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
PyvtkTypedArray_I12vtkStdStringE_SetVariantValue_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVariantValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<vtkStdString> *op = static_cast<vtkTypedArray<vtkStdString> *>(vp);

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
      op->SetVariantValue(*temp0, *temp1);
      }
    else
      {
      op->vtkTypedArray<vtkStdString>::SetVariantValue(*temp0, *temp1);
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

static PyMethodDef PyvtkTypedArray_I12vtkStdStringE_SetVariantValue_Methods[] = {
  {NULL, PyvtkTypedArray_I12vtkStdStringE_SetVariantValue_s1, METH_VARARGS,
   (char*)"@LO &vtkVariant"},
  {NULL, PyvtkTypedArray_I12vtkStdStringE_SetVariantValue_s4, METH_VARARGS,
   (char*)"@OO &vtkArrayCoordinates &vtkVariant"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkTypedArray_I12vtkStdStringE_SetVariantValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkTypedArray_I12vtkStdStringE_SetVariantValue_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkTypedArray_I12vtkStdStringE_SetVariantValue_s2(self, args);
    case 4:
      return PyvtkTypedArray_I12vtkStdStringE_SetVariantValue_s3(self, args);
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetVariantValue");
  return NULL;
}



static PyObject *
PyvtkTypedArray_I12vtkStdStringE_GetVariantValueN(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVariantValueN");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<vtkStdString> *op = static_cast<vtkTypedArray<vtkStdString> *>(vp);

  unsigned long long temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkVariant tempr = (ap.IsBound() ?
      op->GetVariantValueN(temp0) :
      op->vtkTypedArray<vtkStdString>::GetVariantValueN(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildSpecialObject(&tempr, "vtkVariant");
      }
    }

  return result;
}


static PyObject *
PyvtkTypedArray_I12vtkStdStringE_SetVariantValueN(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVariantValueN");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<vtkStdString> *op = static_cast<vtkTypedArray<vtkStdString> *>(vp);

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
      op->SetVariantValueN(temp0, *temp1);
      }
    else
      {
      op->vtkTypedArray<vtkStdString>::SetVariantValueN(temp0, *temp1);
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
PyvtkTypedArray_I12vtkStdStringE_CopyValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<vtkStdString> *op = static_cast<vtkTypedArray<vtkStdString> *>(vp);

  vtkArray *temp0 = NULL;
  vtkArrayCoordinates *temp1 = NULL;
  PyObject *pobj1 = NULL;
  vtkArrayCoordinates *temp2 = NULL;
  PyObject *pobj2 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkArray") &&
      ap.GetSpecialObject(temp1, pobj1, "vtkArrayCoordinates") &&
      ap.GetSpecialObject(temp2, pobj2, "vtkArrayCoordinates"))
    {
    if (ap.IsBound())
      {
      op->CopyValue(temp0, *temp1, *temp2);
      }
    else
      {
      op->vtkTypedArray<vtkStdString>::CopyValue(temp0, *temp1, *temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  Py_XDECREF(pobj1);
  Py_XDECREF(pobj2);

  return result;
}

static PyObject *
PyvtkTypedArray_I12vtkStdStringE_CopyValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<vtkStdString> *op = static_cast<vtkTypedArray<vtkStdString> *>(vp);

  vtkArray *temp0 = NULL;
  unsigned long long temp1;
  vtkArrayCoordinates *temp2 = NULL;
  PyObject *pobj2 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkArray") &&
      ap.GetValue(temp1) &&
      ap.GetSpecialObject(temp2, pobj2, "vtkArrayCoordinates"))
    {
    if (ap.IsBound())
      {
      op->CopyValue(temp0, temp1, *temp2);
      }
    else
      {
      op->vtkTypedArray<vtkStdString>::CopyValue(temp0, temp1, *temp2);
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
PyvtkTypedArray_I12vtkStdStringE_CopyValue_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<vtkStdString> *op = static_cast<vtkTypedArray<vtkStdString> *>(vp);

  vtkArray *temp0 = NULL;
  vtkArrayCoordinates *temp1 = NULL;
  PyObject *pobj1 = NULL;
  unsigned long long temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkArray") &&
      ap.GetSpecialObject(temp1, pobj1, "vtkArrayCoordinates") &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      op->CopyValue(temp0, *temp1, temp2);
      }
    else
      {
      op->vtkTypedArray<vtkStdString>::CopyValue(temp0, *temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  Py_XDECREF(pobj1);

  return result;
}

static PyMethodDef PyvtkTypedArray_I12vtkStdStringE_CopyValue_Methods[] = {
  {NULL, PyvtkTypedArray_I12vtkStdStringE_CopyValue_s1, METH_VARARGS,
   (char*)"@OOO *vtkArray &vtkArrayCoordinates &vtkArrayCoordinates"},
  {NULL, PyvtkTypedArray_I12vtkStdStringE_CopyValue_s2, METH_VARARGS,
   (char*)"@OKO *vtkArray &vtkArrayCoordinates"},
  {NULL, PyvtkTypedArray_I12vtkStdStringE_CopyValue_s3, METH_VARARGS,
   (char*)"@OOK *vtkArray &vtkArrayCoordinates"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkTypedArray_I12vtkStdStringE_CopyValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkTypedArray_I12vtkStdStringE_CopyValue_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "CopyValue");
  return NULL;
}



static PyObject *
PyvtkTypedArray_I12vtkStdStringE_GetValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<vtkStdString> *op = static_cast<vtkTypedArray<vtkStdString> *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    const vtkStdString *tempr = &op->GetValue(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(*tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkTypedArray_I12vtkStdStringE_GetValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<vtkStdString> *op = static_cast<vtkTypedArray<vtkStdString> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    const vtkStdString *tempr = &op->GetValue(temp0, temp1);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(*tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkTypedArray_I12vtkStdStringE_GetValue_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<vtkStdString> *op = static_cast<vtkTypedArray<vtkStdString> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  vtkIdType temp2;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    const vtkStdString *tempr = &op->GetValue(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(*tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkTypedArray_I12vtkStdStringE_GetValue_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<vtkStdString> *op = static_cast<vtkTypedArray<vtkStdString> *>(vp);

  vtkArrayCoordinates *temp0 = NULL;
  PyObject *pobj0 = NULL;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkArrayCoordinates"))
    {
    const vtkStdString *tempr = &op->GetValue(*temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(*tempr);
      }
    }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkTypedArray_I12vtkStdStringE_GetValue_Methods[] = {
  {NULL, PyvtkTypedArray_I12vtkStdStringE_GetValue_s1, METH_VARARGS,
   (char*)"@L"},
  {NULL, PyvtkTypedArray_I12vtkStdStringE_GetValue_s4, METH_VARARGS,
   (char*)"@O &vtkArrayCoordinates"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkTypedArray_I12vtkStdStringE_GetValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkTypedArray_I12vtkStdStringE_GetValue_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkTypedArray_I12vtkStdStringE_GetValue_s2(self, args);
    case 3:
      return PyvtkTypedArray_I12vtkStdStringE_GetValue_s3(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetValue");
  return NULL;
}



static PyObject *
PyvtkTypedArray_I12vtkStdStringE_GetValueN(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValueN");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<vtkStdString> *op = static_cast<vtkTypedArray<vtkStdString> *>(vp);

  unsigned long long temp0;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    const vtkStdString *tempr = &op->GetValueN(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(*tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTypedArray_I12vtkStdStringE_SetValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<vtkStdString> *op = static_cast<vtkTypedArray<vtkStdString> *>(vp);

  vtkIdType temp0;
  vtkStdString temp1;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    op->SetValue(temp0, temp1);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkTypedArray_I12vtkStdStringE_SetValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<vtkStdString> *op = static_cast<vtkTypedArray<vtkStdString> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  vtkStdString temp2;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    op->SetValue(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkTypedArray_I12vtkStdStringE_SetValue_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<vtkStdString> *op = static_cast<vtkTypedArray<vtkStdString> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  vtkIdType temp2;
  vtkStdString temp3;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
    {
    op->SetValue(temp0, temp1, temp2, temp3);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkTypedArray_I12vtkStdStringE_SetValue_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<vtkStdString> *op = static_cast<vtkTypedArray<vtkStdString> *>(vp);

  vtkArrayCoordinates *temp0 = NULL;
  PyObject *pobj0 = NULL;
  vtkStdString temp1;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(2) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkArrayCoordinates") &&
      ap.GetValue(temp1))
    {
    op->SetValue(*temp0, temp1);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkTypedArray_I12vtkStdStringE_SetValue_Methods[] = {
  {NULL, PyvtkTypedArray_I12vtkStdStringE_SetValue_s1, METH_VARARGS,
   (char*)"@Ls"},
  {NULL, PyvtkTypedArray_I12vtkStdStringE_SetValue_s4, METH_VARARGS,
   (char*)"@Os &vtkArrayCoordinates"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkTypedArray_I12vtkStdStringE_SetValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkTypedArray_I12vtkStdStringE_SetValue_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkTypedArray_I12vtkStdStringE_SetValue_s2(self, args);
    case 4:
      return PyvtkTypedArray_I12vtkStdStringE_SetValue_s3(self, args);
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetValue");
  return NULL;
}



static PyObject *
PyvtkTypedArray_I12vtkStdStringE_SetValueN(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValueN");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<vtkStdString> *op = static_cast<vtkTypedArray<vtkStdString> *>(vp);

  unsigned long long temp0;
  vtkStdString temp1;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    op->SetValueN(temp0, temp1);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkTypedArray_I12vtkStdStringE_Methods[] = {
  {(char*)"GetVariantValue", PyvtkTypedArray_I12vtkStdStringE_GetVariantValue, METH_VARARGS,
   (char*)"V.GetVariantValue(int) -> vtkVariant\nC++: vtkVariant GetVariantValue(vtkIdType i)\nV.GetVariantValue(int, int) -> vtkVariant\nC++: vtkVariant GetVariantValue(vtkIdType i, vtkIdType j)\nV.GetVariantValue(int, int, int) -> vtkVariant\nC++: vtkVariant GetVariantValue(vtkIdType i, vtkIdType j,\n    vtkIdType k)\nV.GetVariantValue(vtkArrayCoordinates) -> vtkVariant\nC++: virtual vtkVariant GetVariantValue(\n    const vtkArrayCoordinates &coordinates)\n\n"},
  {(char*)"SetVariantValue", PyvtkTypedArray_I12vtkStdStringE_SetVariantValue, METH_VARARGS,
   (char*)"V.SetVariantValue(int, vtkVariant)\nC++: void SetVariantValue(vtkIdType i, const vtkVariant &value)\nV.SetVariantValue(int, int, vtkVariant)\nC++: void SetVariantValue(vtkIdType i, vtkIdType j,\n    const vtkVariant &value)\nV.SetVariantValue(int, int, int, vtkVariant)\nC++: void SetVariantValue(vtkIdType i, vtkIdType j, vtkIdType k,\n    const vtkVariant &value)\nV.SetVariantValue(vtkArrayCoordinates, vtkVariant)\nC++: virtual void SetVariantValue(\n    const vtkArrayCoordinates &coordinates,\n    const vtkVariant &value)\n\n"},
  {(char*)"GetVariantValueN", PyvtkTypedArray_I12vtkStdStringE_GetVariantValueN, METH_VARARGS,
   (char*)"V.GetVariantValueN(int) -> vtkVariant\nC++: virtual vtkVariant GetVariantValueN(const SizeT n)\n\n"},
  {(char*)"SetVariantValueN", PyvtkTypedArray_I12vtkStdStringE_SetVariantValueN, METH_VARARGS,
   (char*)"V.SetVariantValueN(int, vtkVariant)\nC++: virtual void SetVariantValueN(const SizeT n,\n    const vtkVariant &value)\n\n"},
  {(char*)"CopyValue", PyvtkTypedArray_I12vtkStdStringE_CopyValue, METH_VARARGS,
   (char*)"V.CopyValue(vtkArray, vtkArrayCoordinates, vtkArrayCoordinates)\nC++: virtual void CopyValue(vtkArray *source,\n    const vtkArrayCoordinates &source_coordinates,\n    const vtkArrayCoordinates &target_coordinates)\nV.CopyValue(vtkArray, int, vtkArrayCoordinates)\nC++: virtual void CopyValue(vtkArray *source,\n    const SizeT source_index,\n    const vtkArrayCoordinates &target_coordinates)\nV.CopyValue(vtkArray, vtkArrayCoordinates, int)\nC++: virtual void CopyValue(vtkArray *source,\n    const vtkArrayCoordinates &source_coordinates,\n    const SizeT target_index)\n\n"},
  {(char*)"GetValue", PyvtkTypedArray_I12vtkStdStringE_GetValue, METH_VARARGS,
   (char*)"V.GetValue(int) -> string\nC++: virtual const vtkStdString &GetValue(CoordinateT i)\nV.GetValue(int, int) -> string\nC++: virtual const vtkStdString &GetValue(CoordinateT i,\n    CoordinateT j)\nV.GetValue(int, int, int) -> string\nC++: virtual const vtkStdString &GetValue(CoordinateT i,\n    CoordinateT j, CoordinateT k)\nV.GetValue(vtkArrayCoordinates) -> string\nC++: virtual const vtkStdString &GetValue(\n    const vtkArrayCoordinates &coordinates)\n\nReturns the value stored in the array at the given coordinates.\nNote that the number of dimensions in the supplied coordinates\nmust match the number of dimensions in the array.\n"},
  {(char*)"GetValueN", PyvtkTypedArray_I12vtkStdStringE_GetValueN, METH_VARARGS,
   (char*)"V.GetValueN(int) -> string\nC++: virtual const vtkStdString &GetValueN(const SizeT n)\n\nReturns the n-th value stored in the array, where n is in the\nrange [0, GetNonNullSize()).  This is useful for efficiently\nvisiting every value in the array.  Note that the order in which\nvalues are visited is undefined, but is guaranteed to match the\norder used by vtkArray::GetCoordinatesN().\n"},
  {(char*)"SetValue", PyvtkTypedArray_I12vtkStdStringE_SetValue, METH_VARARGS,
   (char*)"V.SetValue(int, string)\nC++: virtual void SetValue(CoordinateT i,\n    const vtkStdString &value)\nV.SetValue(int, int, string)\nC++: virtual void SetValue(CoordinateT i, CoordinateT j,\n    const vtkStdString &value)\nV.SetValue(int, int, int, string)\nC++: virtual void SetValue(CoordinateT i, CoordinateT j,\n    CoordinateT k, const vtkStdString &value)\nV.SetValue(vtkArrayCoordinates, string)\nC++: virtual void SetValue(const vtkArrayCoordinates &coordinates,\n     const vtkStdString &value)\n\nOverwrites the value stored in the array at the given\ncoordinates. Note that the number of dimensions in the supplied\ncoordinates must match the number of dimensions in the array.\n"},
  {(char*)"SetValueN", PyvtkTypedArray_I12vtkStdStringE_SetValueN, METH_VARARGS,
   (char*)"V.SetValueN(int, string)\nC++: virtual void SetValueN(const SizeT n,\n    const vtkStdString &value)\n\nOverwrites the n-th value stored in the array, where n is in the\nrange [0, GetNonNullSize()).  This is useful for efficiently\nvisiting every value in the array.  Note that the order in which\nvalues are visited is undefined, but is guaranteed to match the\norder used by vtkArray::GetCoordinatesN().\n"},
  {NULL, NULL, 0, NULL}
};

PyObject *PyVTKClass_vtkTypedArray_I12vtkStdStringENew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(NULL,
    PyvtkTypedArray_I12vtkStdStringE_Methods,
    typeid(vtkTypedArray<vtkStdString>).name(), modulename,
    "vtkTypedArray_I12vtkStdStringE", "vtkTypedArray_I12vtkStdStringE",
    PyvtkTypedArray_I12vtkStdStringE_Doc(),
    PyVTKClass_vtkArrayNew(modulename));
  return cls;
}

const char **PyvtkTypedArray_I12vtkStdStringE_Doc()
{
  static const char *docstring[] = {
    "vtkTypedArray - Provides a type-specific interface to N-way arrays\n\n",
    "Superclass: vtkArray\n\n",
    "vtkTypedArray provides an interface for retrieving and updating data\nin an arbitrary-dimension array.  It derives from vtkArray and is\ntemplated on the type of value stored in the array.\n\nMethods are provided for retrieving and updating array values based\neither on their array coordinates, or on a 1-dimensional integer\nindex.  The latter approach can be used to iterate over the values in\nan array ",
    "in arbitrary order, which is useful when writing filters\nthat operate efficiently on sparse arrays and arrays that can have\nany number of dimensions.\n\nSpecial overloaded methods provide simple access for arrays with one,\ntwo, or three dimensions.\n\nSee Also:\n\nvtkArray, vtkDenseArray, vtkSparseArray\n\nThanks:\n\nDeveloped by Timothy M. Shead (tshead@sandia.gov) at Sandia National\nLaboratories.\n\n",
    NULL
  };

  return docstring;
}

extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkTypedArray_I16vtkUnicodeStringENew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkArrayNew
extern "C" { PyObject *PyVTKClass_vtkArrayNew(const char *); }
#define DECLARED_PyVTKClass_vtkArrayNew
#endif

static const char **PyvtkTypedArray_I16vtkUnicodeStringE_Doc();


static PyObject *
PyvtkTypedArray_I16vtkUnicodeStringE_GetVariantValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVariantValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<vtkUnicodeString> *op = static_cast<vtkTypedArray<vtkUnicodeString> *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkVariant tempr = (ap.IsBound() ?
      op->GetVariantValue(temp0) :
      op->vtkTypedArray<vtkUnicodeString>::GetVariantValue(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildSpecialObject(&tempr, "vtkVariant");
      }
    }

  return result;
}

static PyObject *
PyvtkTypedArray_I16vtkUnicodeStringE_GetVariantValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVariantValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<vtkUnicodeString> *op = static_cast<vtkTypedArray<vtkUnicodeString> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    vtkVariant tempr = (ap.IsBound() ?
      op->GetVariantValue(temp0, temp1) :
      op->vtkTypedArray<vtkUnicodeString>::GetVariantValue(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildSpecialObject(&tempr, "vtkVariant");
      }
    }

  return result;
}

static PyObject *
PyvtkTypedArray_I16vtkUnicodeStringE_GetVariantValue_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVariantValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<vtkUnicodeString> *op = static_cast<vtkTypedArray<vtkUnicodeString> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  vtkIdType temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    vtkVariant tempr = (ap.IsBound() ?
      op->GetVariantValue(temp0, temp1, temp2) :
      op->vtkTypedArray<vtkUnicodeString>::GetVariantValue(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildSpecialObject(&tempr, "vtkVariant");
      }
    }

  return result;
}

static PyObject *
PyvtkTypedArray_I16vtkUnicodeStringE_GetVariantValue_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVariantValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<vtkUnicodeString> *op = static_cast<vtkTypedArray<vtkUnicodeString> *>(vp);

  vtkArrayCoordinates *temp0 = NULL;
  PyObject *pobj0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkArrayCoordinates"))
    {
    vtkVariant tempr = (ap.IsBound() ?
      op->GetVariantValue(*temp0) :
      op->vtkTypedArray<vtkUnicodeString>::GetVariantValue(*temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildSpecialObject(&tempr, "vtkVariant");
      }
    }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkTypedArray_I16vtkUnicodeStringE_GetVariantValue_Methods[] = {
  {NULL, PyvtkTypedArray_I16vtkUnicodeStringE_GetVariantValue_s1, METH_VARARGS,
   (char*)"@L"},
  {NULL, PyvtkTypedArray_I16vtkUnicodeStringE_GetVariantValue_s4, METH_VARARGS,
   (char*)"@O &vtkArrayCoordinates"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkTypedArray_I16vtkUnicodeStringE_GetVariantValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkTypedArray_I16vtkUnicodeStringE_GetVariantValue_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkTypedArray_I16vtkUnicodeStringE_GetVariantValue_s2(self, args);
    case 3:
      return PyvtkTypedArray_I16vtkUnicodeStringE_GetVariantValue_s3(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetVariantValue");
  return NULL;
}



static PyObject *
PyvtkTypedArray_I16vtkUnicodeStringE_SetVariantValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVariantValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<vtkUnicodeString> *op = static_cast<vtkTypedArray<vtkUnicodeString> *>(vp);

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
      op->SetVariantValue(temp0, *temp1);
      }
    else
      {
      op->vtkTypedArray<vtkUnicodeString>::SetVariantValue(temp0, *temp1);
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
PyvtkTypedArray_I16vtkUnicodeStringE_SetVariantValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVariantValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<vtkUnicodeString> *op = static_cast<vtkTypedArray<vtkUnicodeString> *>(vp);

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
      op->SetVariantValue(temp0, temp1, *temp2);
      }
    else
      {
      op->vtkTypedArray<vtkUnicodeString>::SetVariantValue(temp0, temp1, *temp2);
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
PyvtkTypedArray_I16vtkUnicodeStringE_SetVariantValue_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVariantValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<vtkUnicodeString> *op = static_cast<vtkTypedArray<vtkUnicodeString> *>(vp);

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
      op->SetVariantValue(temp0, temp1, temp2, *temp3);
      }
    else
      {
      op->vtkTypedArray<vtkUnicodeString>::SetVariantValue(temp0, temp1, temp2, *temp3);
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
PyvtkTypedArray_I16vtkUnicodeStringE_SetVariantValue_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVariantValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<vtkUnicodeString> *op = static_cast<vtkTypedArray<vtkUnicodeString> *>(vp);

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
      op->SetVariantValue(*temp0, *temp1);
      }
    else
      {
      op->vtkTypedArray<vtkUnicodeString>::SetVariantValue(*temp0, *temp1);
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

static PyMethodDef PyvtkTypedArray_I16vtkUnicodeStringE_SetVariantValue_Methods[] = {
  {NULL, PyvtkTypedArray_I16vtkUnicodeStringE_SetVariantValue_s1, METH_VARARGS,
   (char*)"@LO &vtkVariant"},
  {NULL, PyvtkTypedArray_I16vtkUnicodeStringE_SetVariantValue_s4, METH_VARARGS,
   (char*)"@OO &vtkArrayCoordinates &vtkVariant"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkTypedArray_I16vtkUnicodeStringE_SetVariantValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkTypedArray_I16vtkUnicodeStringE_SetVariantValue_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkTypedArray_I16vtkUnicodeStringE_SetVariantValue_s2(self, args);
    case 4:
      return PyvtkTypedArray_I16vtkUnicodeStringE_SetVariantValue_s3(self, args);
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetVariantValue");
  return NULL;
}



static PyObject *
PyvtkTypedArray_I16vtkUnicodeStringE_GetVariantValueN(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVariantValueN");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<vtkUnicodeString> *op = static_cast<vtkTypedArray<vtkUnicodeString> *>(vp);

  unsigned long long temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkVariant tempr = (ap.IsBound() ?
      op->GetVariantValueN(temp0) :
      op->vtkTypedArray<vtkUnicodeString>::GetVariantValueN(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildSpecialObject(&tempr, "vtkVariant");
      }
    }

  return result;
}


static PyObject *
PyvtkTypedArray_I16vtkUnicodeStringE_SetVariantValueN(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVariantValueN");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<vtkUnicodeString> *op = static_cast<vtkTypedArray<vtkUnicodeString> *>(vp);

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
      op->SetVariantValueN(temp0, *temp1);
      }
    else
      {
      op->vtkTypedArray<vtkUnicodeString>::SetVariantValueN(temp0, *temp1);
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
PyvtkTypedArray_I16vtkUnicodeStringE_CopyValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<vtkUnicodeString> *op = static_cast<vtkTypedArray<vtkUnicodeString> *>(vp);

  vtkArray *temp0 = NULL;
  vtkArrayCoordinates *temp1 = NULL;
  PyObject *pobj1 = NULL;
  vtkArrayCoordinates *temp2 = NULL;
  PyObject *pobj2 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkArray") &&
      ap.GetSpecialObject(temp1, pobj1, "vtkArrayCoordinates") &&
      ap.GetSpecialObject(temp2, pobj2, "vtkArrayCoordinates"))
    {
    if (ap.IsBound())
      {
      op->CopyValue(temp0, *temp1, *temp2);
      }
    else
      {
      op->vtkTypedArray<vtkUnicodeString>::CopyValue(temp0, *temp1, *temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  Py_XDECREF(pobj1);
  Py_XDECREF(pobj2);

  return result;
}

static PyObject *
PyvtkTypedArray_I16vtkUnicodeStringE_CopyValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<vtkUnicodeString> *op = static_cast<vtkTypedArray<vtkUnicodeString> *>(vp);

  vtkArray *temp0 = NULL;
  unsigned long long temp1;
  vtkArrayCoordinates *temp2 = NULL;
  PyObject *pobj2 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkArray") &&
      ap.GetValue(temp1) &&
      ap.GetSpecialObject(temp2, pobj2, "vtkArrayCoordinates"))
    {
    if (ap.IsBound())
      {
      op->CopyValue(temp0, temp1, *temp2);
      }
    else
      {
      op->vtkTypedArray<vtkUnicodeString>::CopyValue(temp0, temp1, *temp2);
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
PyvtkTypedArray_I16vtkUnicodeStringE_CopyValue_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<vtkUnicodeString> *op = static_cast<vtkTypedArray<vtkUnicodeString> *>(vp);

  vtkArray *temp0 = NULL;
  vtkArrayCoordinates *temp1 = NULL;
  PyObject *pobj1 = NULL;
  unsigned long long temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkArray") &&
      ap.GetSpecialObject(temp1, pobj1, "vtkArrayCoordinates") &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      op->CopyValue(temp0, *temp1, temp2);
      }
    else
      {
      op->vtkTypedArray<vtkUnicodeString>::CopyValue(temp0, *temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  Py_XDECREF(pobj1);

  return result;
}

static PyMethodDef PyvtkTypedArray_I16vtkUnicodeStringE_CopyValue_Methods[] = {
  {NULL, PyvtkTypedArray_I16vtkUnicodeStringE_CopyValue_s1, METH_VARARGS,
   (char*)"@OOO *vtkArray &vtkArrayCoordinates &vtkArrayCoordinates"},
  {NULL, PyvtkTypedArray_I16vtkUnicodeStringE_CopyValue_s2, METH_VARARGS,
   (char*)"@OKO *vtkArray &vtkArrayCoordinates"},
  {NULL, PyvtkTypedArray_I16vtkUnicodeStringE_CopyValue_s3, METH_VARARGS,
   (char*)"@OOK *vtkArray &vtkArrayCoordinates"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkTypedArray_I16vtkUnicodeStringE_CopyValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkTypedArray_I16vtkUnicodeStringE_CopyValue_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "CopyValue");
  return NULL;
}



static PyObject *
PyvtkTypedArray_I16vtkUnicodeStringE_GetValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<vtkUnicodeString> *op = static_cast<vtkTypedArray<vtkUnicodeString> *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    const vtkUnicodeString *tempr = &op->GetValue(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(*tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkTypedArray_I16vtkUnicodeStringE_GetValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<vtkUnicodeString> *op = static_cast<vtkTypedArray<vtkUnicodeString> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    const vtkUnicodeString *tempr = &op->GetValue(temp0, temp1);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(*tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkTypedArray_I16vtkUnicodeStringE_GetValue_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<vtkUnicodeString> *op = static_cast<vtkTypedArray<vtkUnicodeString> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  vtkIdType temp2;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    const vtkUnicodeString *tempr = &op->GetValue(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(*tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkTypedArray_I16vtkUnicodeStringE_GetValue_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<vtkUnicodeString> *op = static_cast<vtkTypedArray<vtkUnicodeString> *>(vp);

  vtkArrayCoordinates *temp0 = NULL;
  PyObject *pobj0 = NULL;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkArrayCoordinates"))
    {
    const vtkUnicodeString *tempr = &op->GetValue(*temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(*tempr);
      }
    }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkTypedArray_I16vtkUnicodeStringE_GetValue_Methods[] = {
  {NULL, PyvtkTypedArray_I16vtkUnicodeStringE_GetValue_s1, METH_VARARGS,
   (char*)"@L"},
  {NULL, PyvtkTypedArray_I16vtkUnicodeStringE_GetValue_s4, METH_VARARGS,
   (char*)"@O &vtkArrayCoordinates"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkTypedArray_I16vtkUnicodeStringE_GetValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkTypedArray_I16vtkUnicodeStringE_GetValue_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkTypedArray_I16vtkUnicodeStringE_GetValue_s2(self, args);
    case 3:
      return PyvtkTypedArray_I16vtkUnicodeStringE_GetValue_s3(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetValue");
  return NULL;
}



static PyObject *
PyvtkTypedArray_I16vtkUnicodeStringE_GetValueN(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValueN");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<vtkUnicodeString> *op = static_cast<vtkTypedArray<vtkUnicodeString> *>(vp);

  unsigned long long temp0;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    const vtkUnicodeString *tempr = &op->GetValueN(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(*tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTypedArray_I16vtkUnicodeStringE_SetValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<vtkUnicodeString> *op = static_cast<vtkTypedArray<vtkUnicodeString> *>(vp);

  vtkIdType temp0;
  vtkUnicodeString temp1;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    op->SetValue(temp0, temp1);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkTypedArray_I16vtkUnicodeStringE_SetValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<vtkUnicodeString> *op = static_cast<vtkTypedArray<vtkUnicodeString> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  vtkUnicodeString temp2;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    op->SetValue(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkTypedArray_I16vtkUnicodeStringE_SetValue_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<vtkUnicodeString> *op = static_cast<vtkTypedArray<vtkUnicodeString> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  vtkIdType temp2;
  vtkUnicodeString temp3;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
    {
    op->SetValue(temp0, temp1, temp2, temp3);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkTypedArray_I16vtkUnicodeStringE_SetValue_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<vtkUnicodeString> *op = static_cast<vtkTypedArray<vtkUnicodeString> *>(vp);

  vtkArrayCoordinates *temp0 = NULL;
  PyObject *pobj0 = NULL;
  vtkUnicodeString temp1;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(2) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkArrayCoordinates") &&
      ap.GetValue(temp1))
    {
    op->SetValue(*temp0, temp1);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkTypedArray_I16vtkUnicodeStringE_SetValue_Methods[] = {
  {NULL, PyvtkTypedArray_I16vtkUnicodeStringE_SetValue_s1, METH_VARARGS,
   (char*)"@LO unicode"},
  {NULL, PyvtkTypedArray_I16vtkUnicodeStringE_SetValue_s4, METH_VARARGS,
   (char*)"@OO &vtkArrayCoordinates unicode"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkTypedArray_I16vtkUnicodeStringE_SetValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkTypedArray_I16vtkUnicodeStringE_SetValue_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkTypedArray_I16vtkUnicodeStringE_SetValue_s2(self, args);
    case 4:
      return PyvtkTypedArray_I16vtkUnicodeStringE_SetValue_s3(self, args);
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetValue");
  return NULL;
}



static PyObject *
PyvtkTypedArray_I16vtkUnicodeStringE_SetValueN(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValueN");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<vtkUnicodeString> *op = static_cast<vtkTypedArray<vtkUnicodeString> *>(vp);

  unsigned long long temp0;
  vtkUnicodeString temp1;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    op->SetValueN(temp0, temp1);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkTypedArray_I16vtkUnicodeStringE_Methods[] = {
  {(char*)"GetVariantValue", PyvtkTypedArray_I16vtkUnicodeStringE_GetVariantValue, METH_VARARGS,
   (char*)"V.GetVariantValue(int) -> vtkVariant\nC++: vtkVariant GetVariantValue(vtkIdType i)\nV.GetVariantValue(int, int) -> vtkVariant\nC++: vtkVariant GetVariantValue(vtkIdType i, vtkIdType j)\nV.GetVariantValue(int, int, int) -> vtkVariant\nC++: vtkVariant GetVariantValue(vtkIdType i, vtkIdType j,\n    vtkIdType k)\nV.GetVariantValue(vtkArrayCoordinates) -> vtkVariant\nC++: virtual vtkVariant GetVariantValue(\n    const vtkArrayCoordinates &coordinates)\n\n"},
  {(char*)"SetVariantValue", PyvtkTypedArray_I16vtkUnicodeStringE_SetVariantValue, METH_VARARGS,
   (char*)"V.SetVariantValue(int, vtkVariant)\nC++: void SetVariantValue(vtkIdType i, const vtkVariant &value)\nV.SetVariantValue(int, int, vtkVariant)\nC++: void SetVariantValue(vtkIdType i, vtkIdType j,\n    const vtkVariant &value)\nV.SetVariantValue(int, int, int, vtkVariant)\nC++: void SetVariantValue(vtkIdType i, vtkIdType j, vtkIdType k,\n    const vtkVariant &value)\nV.SetVariantValue(vtkArrayCoordinates, vtkVariant)\nC++: virtual void SetVariantValue(\n    const vtkArrayCoordinates &coordinates,\n    const vtkVariant &value)\n\n"},
  {(char*)"GetVariantValueN", PyvtkTypedArray_I16vtkUnicodeStringE_GetVariantValueN, METH_VARARGS,
   (char*)"V.GetVariantValueN(int) -> vtkVariant\nC++: virtual vtkVariant GetVariantValueN(const SizeT n)\n\n"},
  {(char*)"SetVariantValueN", PyvtkTypedArray_I16vtkUnicodeStringE_SetVariantValueN, METH_VARARGS,
   (char*)"V.SetVariantValueN(int, vtkVariant)\nC++: virtual void SetVariantValueN(const SizeT n,\n    const vtkVariant &value)\n\n"},
  {(char*)"CopyValue", PyvtkTypedArray_I16vtkUnicodeStringE_CopyValue, METH_VARARGS,
   (char*)"V.CopyValue(vtkArray, vtkArrayCoordinates, vtkArrayCoordinates)\nC++: virtual void CopyValue(vtkArray *source,\n    const vtkArrayCoordinates &source_coordinates,\n    const vtkArrayCoordinates &target_coordinates)\nV.CopyValue(vtkArray, int, vtkArrayCoordinates)\nC++: virtual void CopyValue(vtkArray *source,\n    const SizeT source_index,\n    const vtkArrayCoordinates &target_coordinates)\nV.CopyValue(vtkArray, vtkArrayCoordinates, int)\nC++: virtual void CopyValue(vtkArray *source,\n    const vtkArrayCoordinates &source_coordinates,\n    const SizeT target_index)\n\n"},
  {(char*)"GetValue", PyvtkTypedArray_I16vtkUnicodeStringE_GetValue, METH_VARARGS,
   (char*)"V.GetValue(int) -> unicode\nC++: virtual const vtkUnicodeString &GetValue(CoordinateT i)\nV.GetValue(int, int) -> unicode\nC++: virtual const vtkUnicodeString &GetValue(CoordinateT i,\n    CoordinateT j)\nV.GetValue(int, int, int) -> unicode\nC++: virtual const vtkUnicodeString &GetValue(CoordinateT i,\n    CoordinateT j, CoordinateT k)\nV.GetValue(vtkArrayCoordinates) -> unicode\nC++: virtual const vtkUnicodeString &GetValue(\n    const vtkArrayCoordinates &coordinates)\n\nReturns the value stored in the array at the given coordinates.\nNote that the number of dimensions in the supplied coordinates\nmust match the number of dimensions in the array.\n"},
  {(char*)"GetValueN", PyvtkTypedArray_I16vtkUnicodeStringE_GetValueN, METH_VARARGS,
   (char*)"V.GetValueN(int) -> unicode\nC++: virtual const vtkUnicodeString &GetValueN(const SizeT n)\n\nReturns the n-th value stored in the array, where n is in the\nrange [0, GetNonNullSize()).  This is useful for efficiently\nvisiting every value in the array.  Note that the order in which\nvalues are visited is undefined, but is guaranteed to match the\norder used by vtkArray::GetCoordinatesN().\n"},
  {(char*)"SetValue", PyvtkTypedArray_I16vtkUnicodeStringE_SetValue, METH_VARARGS,
   (char*)"V.SetValue(int, unicode)\nC++: virtual void SetValue(CoordinateT i,\n    const vtkUnicodeString &value)\nV.SetValue(int, int, unicode)\nC++: virtual void SetValue(CoordinateT i, CoordinateT j,\n    const vtkUnicodeString &value)\nV.SetValue(int, int, int, unicode)\nC++: virtual void SetValue(CoordinateT i, CoordinateT j,\n    CoordinateT k, const vtkUnicodeString &value)\nV.SetValue(vtkArrayCoordinates, unicode)\nC++: virtual void SetValue(const vtkArrayCoordinates &coordinates,\n     const vtkUnicodeString &value)\n\nOverwrites the value stored in the array at the given\ncoordinates. Note that the number of dimensions in the supplied\ncoordinates must match the number of dimensions in the array.\n"},
  {(char*)"SetValueN", PyvtkTypedArray_I16vtkUnicodeStringE_SetValueN, METH_VARARGS,
   (char*)"V.SetValueN(int, unicode)\nC++: virtual void SetValueN(const SizeT n,\n    const vtkUnicodeString &value)\n\nOverwrites the n-th value stored in the array, where n is in the\nrange [0, GetNonNullSize()).  This is useful for efficiently\nvisiting every value in the array.  Note that the order in which\nvalues are visited is undefined, but is guaranteed to match the\norder used by vtkArray::GetCoordinatesN().\n"},
  {NULL, NULL, 0, NULL}
};

PyObject *PyVTKClass_vtkTypedArray_I16vtkUnicodeStringENew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(NULL,
    PyvtkTypedArray_I16vtkUnicodeStringE_Methods,
    typeid(vtkTypedArray<vtkUnicodeString>).name(), modulename,
    "vtkTypedArray_I16vtkUnicodeStringE", "vtkTypedArray_I16vtkUnicodeStringE",
    PyvtkTypedArray_I16vtkUnicodeStringE_Doc(),
    PyVTKClass_vtkArrayNew(modulename));
  return cls;
}

const char **PyvtkTypedArray_I16vtkUnicodeStringE_Doc()
{
  static const char *docstring[] = {
    "vtkTypedArray - Provides a type-specific interface to N-way arrays\n\n",
    "Superclass: vtkArray\n\n",
    "vtkTypedArray provides an interface for retrieving and updating data\nin an arbitrary-dimension array.  It derives from vtkArray and is\ntemplated on the type of value stored in the array.\n\nMethods are provided for retrieving and updating array values based\neither on their array coordinates, or on a 1-dimensional integer\nindex.  The latter approach can be used to iterate over the values in\nan array ",
    "in arbitrary order, which is useful when writing filters\nthat operate efficiently on sparse arrays and arrays that can have\nany number of dimensions.\n\nSpecial overloaded methods provide simple access for arrays with one,\ntwo, or three dimensions.\n\nSee Also:\n\nvtkArray, vtkDenseArray, vtkSparseArray\n\nThanks:\n\nDeveloped by Timothy M. Shead (tshead@sandia.gov) at Sandia National\nLaboratories.\n\n",
    NULL
  };

  return docstring;
}

extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkTypedArray_I10vtkVariantENew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkArrayNew
extern "C" { PyObject *PyVTKClass_vtkArrayNew(const char *); }
#define DECLARED_PyVTKClass_vtkArrayNew
#endif

static const char **PyvtkTypedArray_I10vtkVariantE_Doc();


static PyObject *
PyvtkTypedArray_I10vtkVariantE_GetVariantValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVariantValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<vtkVariant> *op = static_cast<vtkTypedArray<vtkVariant> *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkVariant tempr = (ap.IsBound() ?
      op->GetVariantValue(temp0) :
      op->vtkTypedArray<vtkVariant>::GetVariantValue(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildSpecialObject(&tempr, "vtkVariant");
      }
    }

  return result;
}

static PyObject *
PyvtkTypedArray_I10vtkVariantE_GetVariantValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVariantValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<vtkVariant> *op = static_cast<vtkTypedArray<vtkVariant> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    vtkVariant tempr = (ap.IsBound() ?
      op->GetVariantValue(temp0, temp1) :
      op->vtkTypedArray<vtkVariant>::GetVariantValue(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildSpecialObject(&tempr, "vtkVariant");
      }
    }

  return result;
}

static PyObject *
PyvtkTypedArray_I10vtkVariantE_GetVariantValue_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVariantValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<vtkVariant> *op = static_cast<vtkTypedArray<vtkVariant> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  vtkIdType temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    vtkVariant tempr = (ap.IsBound() ?
      op->GetVariantValue(temp0, temp1, temp2) :
      op->vtkTypedArray<vtkVariant>::GetVariantValue(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildSpecialObject(&tempr, "vtkVariant");
      }
    }

  return result;
}

static PyObject *
PyvtkTypedArray_I10vtkVariantE_GetVariantValue_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVariantValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<vtkVariant> *op = static_cast<vtkTypedArray<vtkVariant> *>(vp);

  vtkArrayCoordinates *temp0 = NULL;
  PyObject *pobj0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkArrayCoordinates"))
    {
    vtkVariant tempr = (ap.IsBound() ?
      op->GetVariantValue(*temp0) :
      op->vtkTypedArray<vtkVariant>::GetVariantValue(*temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildSpecialObject(&tempr, "vtkVariant");
      }
    }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkTypedArray_I10vtkVariantE_GetVariantValue_Methods[] = {
  {NULL, PyvtkTypedArray_I10vtkVariantE_GetVariantValue_s1, METH_VARARGS,
   (char*)"@L"},
  {NULL, PyvtkTypedArray_I10vtkVariantE_GetVariantValue_s4, METH_VARARGS,
   (char*)"@O &vtkArrayCoordinates"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkTypedArray_I10vtkVariantE_GetVariantValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkTypedArray_I10vtkVariantE_GetVariantValue_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkTypedArray_I10vtkVariantE_GetVariantValue_s2(self, args);
    case 3:
      return PyvtkTypedArray_I10vtkVariantE_GetVariantValue_s3(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetVariantValue");
  return NULL;
}



static PyObject *
PyvtkTypedArray_I10vtkVariantE_SetVariantValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVariantValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<vtkVariant> *op = static_cast<vtkTypedArray<vtkVariant> *>(vp);

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
      op->SetVariantValue(temp0, *temp1);
      }
    else
      {
      op->vtkTypedArray<vtkVariant>::SetVariantValue(temp0, *temp1);
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
PyvtkTypedArray_I10vtkVariantE_SetVariantValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVariantValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<vtkVariant> *op = static_cast<vtkTypedArray<vtkVariant> *>(vp);

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
      op->SetVariantValue(temp0, temp1, *temp2);
      }
    else
      {
      op->vtkTypedArray<vtkVariant>::SetVariantValue(temp0, temp1, *temp2);
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
PyvtkTypedArray_I10vtkVariantE_SetVariantValue_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVariantValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<vtkVariant> *op = static_cast<vtkTypedArray<vtkVariant> *>(vp);

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
      op->SetVariantValue(temp0, temp1, temp2, *temp3);
      }
    else
      {
      op->vtkTypedArray<vtkVariant>::SetVariantValue(temp0, temp1, temp2, *temp3);
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
PyvtkTypedArray_I10vtkVariantE_SetVariantValue_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVariantValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<vtkVariant> *op = static_cast<vtkTypedArray<vtkVariant> *>(vp);

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
      op->SetVariantValue(*temp0, *temp1);
      }
    else
      {
      op->vtkTypedArray<vtkVariant>::SetVariantValue(*temp0, *temp1);
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

static PyMethodDef PyvtkTypedArray_I10vtkVariantE_SetVariantValue_Methods[] = {
  {NULL, PyvtkTypedArray_I10vtkVariantE_SetVariantValue_s1, METH_VARARGS,
   (char*)"@LO &vtkVariant"},
  {NULL, PyvtkTypedArray_I10vtkVariantE_SetVariantValue_s4, METH_VARARGS,
   (char*)"@OO &vtkArrayCoordinates &vtkVariant"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkTypedArray_I10vtkVariantE_SetVariantValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkTypedArray_I10vtkVariantE_SetVariantValue_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkTypedArray_I10vtkVariantE_SetVariantValue_s2(self, args);
    case 4:
      return PyvtkTypedArray_I10vtkVariantE_SetVariantValue_s3(self, args);
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetVariantValue");
  return NULL;
}



static PyObject *
PyvtkTypedArray_I10vtkVariantE_GetVariantValueN(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVariantValueN");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<vtkVariant> *op = static_cast<vtkTypedArray<vtkVariant> *>(vp);

  unsigned long long temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkVariant tempr = (ap.IsBound() ?
      op->GetVariantValueN(temp0) :
      op->vtkTypedArray<vtkVariant>::GetVariantValueN(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildSpecialObject(&tempr, "vtkVariant");
      }
    }

  return result;
}


static PyObject *
PyvtkTypedArray_I10vtkVariantE_SetVariantValueN(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVariantValueN");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<vtkVariant> *op = static_cast<vtkTypedArray<vtkVariant> *>(vp);

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
      op->SetVariantValueN(temp0, *temp1);
      }
    else
      {
      op->vtkTypedArray<vtkVariant>::SetVariantValueN(temp0, *temp1);
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
PyvtkTypedArray_I10vtkVariantE_CopyValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<vtkVariant> *op = static_cast<vtkTypedArray<vtkVariant> *>(vp);

  vtkArray *temp0 = NULL;
  vtkArrayCoordinates *temp1 = NULL;
  PyObject *pobj1 = NULL;
  vtkArrayCoordinates *temp2 = NULL;
  PyObject *pobj2 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkArray") &&
      ap.GetSpecialObject(temp1, pobj1, "vtkArrayCoordinates") &&
      ap.GetSpecialObject(temp2, pobj2, "vtkArrayCoordinates"))
    {
    if (ap.IsBound())
      {
      op->CopyValue(temp0, *temp1, *temp2);
      }
    else
      {
      op->vtkTypedArray<vtkVariant>::CopyValue(temp0, *temp1, *temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  Py_XDECREF(pobj1);
  Py_XDECREF(pobj2);

  return result;
}

static PyObject *
PyvtkTypedArray_I10vtkVariantE_CopyValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<vtkVariant> *op = static_cast<vtkTypedArray<vtkVariant> *>(vp);

  vtkArray *temp0 = NULL;
  unsigned long long temp1;
  vtkArrayCoordinates *temp2 = NULL;
  PyObject *pobj2 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkArray") &&
      ap.GetValue(temp1) &&
      ap.GetSpecialObject(temp2, pobj2, "vtkArrayCoordinates"))
    {
    if (ap.IsBound())
      {
      op->CopyValue(temp0, temp1, *temp2);
      }
    else
      {
      op->vtkTypedArray<vtkVariant>::CopyValue(temp0, temp1, *temp2);
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
PyvtkTypedArray_I10vtkVariantE_CopyValue_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<vtkVariant> *op = static_cast<vtkTypedArray<vtkVariant> *>(vp);

  vtkArray *temp0 = NULL;
  vtkArrayCoordinates *temp1 = NULL;
  PyObject *pobj1 = NULL;
  unsigned long long temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkArray") &&
      ap.GetSpecialObject(temp1, pobj1, "vtkArrayCoordinates") &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      op->CopyValue(temp0, *temp1, temp2);
      }
    else
      {
      op->vtkTypedArray<vtkVariant>::CopyValue(temp0, *temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  Py_XDECREF(pobj1);

  return result;
}

static PyMethodDef PyvtkTypedArray_I10vtkVariantE_CopyValue_Methods[] = {
  {NULL, PyvtkTypedArray_I10vtkVariantE_CopyValue_s1, METH_VARARGS,
   (char*)"@OOO *vtkArray &vtkArrayCoordinates &vtkArrayCoordinates"},
  {NULL, PyvtkTypedArray_I10vtkVariantE_CopyValue_s2, METH_VARARGS,
   (char*)"@OKO *vtkArray &vtkArrayCoordinates"},
  {NULL, PyvtkTypedArray_I10vtkVariantE_CopyValue_s3, METH_VARARGS,
   (char*)"@OOK *vtkArray &vtkArrayCoordinates"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkTypedArray_I10vtkVariantE_CopyValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkTypedArray_I10vtkVariantE_CopyValue_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "CopyValue");
  return NULL;
}



static PyObject *
PyvtkTypedArray_I10vtkVariantE_GetValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<vtkVariant> *op = static_cast<vtkTypedArray<vtkVariant> *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    const vtkVariant *tempr = &op->GetValue(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildSpecialObject(tempr, "vtkVariant");
      }
    }

  return result;
}

static PyObject *
PyvtkTypedArray_I10vtkVariantE_GetValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<vtkVariant> *op = static_cast<vtkTypedArray<vtkVariant> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    const vtkVariant *tempr = &op->GetValue(temp0, temp1);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildSpecialObject(tempr, "vtkVariant");
      }
    }

  return result;
}

static PyObject *
PyvtkTypedArray_I10vtkVariantE_GetValue_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<vtkVariant> *op = static_cast<vtkTypedArray<vtkVariant> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  vtkIdType temp2;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    const vtkVariant *tempr = &op->GetValue(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildSpecialObject(tempr, "vtkVariant");
      }
    }

  return result;
}

static PyObject *
PyvtkTypedArray_I10vtkVariantE_GetValue_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<vtkVariant> *op = static_cast<vtkTypedArray<vtkVariant> *>(vp);

  vtkArrayCoordinates *temp0 = NULL;
  PyObject *pobj0 = NULL;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkArrayCoordinates"))
    {
    const vtkVariant *tempr = &op->GetValue(*temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildSpecialObject(tempr, "vtkVariant");
      }
    }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkTypedArray_I10vtkVariantE_GetValue_Methods[] = {
  {NULL, PyvtkTypedArray_I10vtkVariantE_GetValue_s1, METH_VARARGS,
   (char*)"@L"},
  {NULL, PyvtkTypedArray_I10vtkVariantE_GetValue_s4, METH_VARARGS,
   (char*)"@O &vtkArrayCoordinates"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkTypedArray_I10vtkVariantE_GetValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkTypedArray_I10vtkVariantE_GetValue_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkTypedArray_I10vtkVariantE_GetValue_s2(self, args);
    case 3:
      return PyvtkTypedArray_I10vtkVariantE_GetValue_s3(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetValue");
  return NULL;
}



static PyObject *
PyvtkTypedArray_I10vtkVariantE_GetValueN(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValueN");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<vtkVariant> *op = static_cast<vtkTypedArray<vtkVariant> *>(vp);

  unsigned long long temp0;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    const vtkVariant *tempr = &op->GetValueN(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildSpecialObject(tempr, "vtkVariant");
      }
    }

  return result;
}


static PyObject *
PyvtkTypedArray_I10vtkVariantE_SetValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<vtkVariant> *op = static_cast<vtkTypedArray<vtkVariant> *>(vp);

  vtkIdType temp0;
  vtkVariant *temp1 = NULL;
  PyObject *pobj1 = NULL;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetSpecialObject(temp1, pobj1, "vtkVariant"))
    {
    op->SetValue(temp0, *temp1);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  Py_XDECREF(pobj1);

  return result;
}

static PyObject *
PyvtkTypedArray_I10vtkVariantE_SetValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<vtkVariant> *op = static_cast<vtkTypedArray<vtkVariant> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  vtkVariant *temp2 = NULL;
  PyObject *pobj2 = NULL;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetSpecialObject(temp2, pobj2, "vtkVariant"))
    {
    op->SetValue(temp0, temp1, *temp2);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  Py_XDECREF(pobj2);

  return result;
}

static PyObject *
PyvtkTypedArray_I10vtkVariantE_SetValue_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<vtkVariant> *op = static_cast<vtkTypedArray<vtkVariant> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  vtkIdType temp2;
  vtkVariant *temp3 = NULL;
  PyObject *pobj3 = NULL;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetSpecialObject(temp3, pobj3, "vtkVariant"))
    {
    op->SetValue(temp0, temp1, temp2, *temp3);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  Py_XDECREF(pobj3);

  return result;
}

static PyObject *
PyvtkTypedArray_I10vtkVariantE_SetValue_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<vtkVariant> *op = static_cast<vtkTypedArray<vtkVariant> *>(vp);

  vtkArrayCoordinates *temp0 = NULL;
  PyObject *pobj0 = NULL;
  vtkVariant *temp1 = NULL;
  PyObject *pobj1 = NULL;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(2) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkArrayCoordinates") &&
      ap.GetSpecialObject(temp1, pobj1, "vtkVariant"))
    {
    op->SetValue(*temp0, *temp1);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  Py_XDECREF(pobj0);
  Py_XDECREF(pobj1);

  return result;
}

static PyMethodDef PyvtkTypedArray_I10vtkVariantE_SetValue_Methods[] = {
  {NULL, PyvtkTypedArray_I10vtkVariantE_SetValue_s1, METH_VARARGS,
   (char*)"@LO &vtkVariant"},
  {NULL, PyvtkTypedArray_I10vtkVariantE_SetValue_s4, METH_VARARGS,
   (char*)"@OO &vtkArrayCoordinates &vtkVariant"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkTypedArray_I10vtkVariantE_SetValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkTypedArray_I10vtkVariantE_SetValue_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkTypedArray_I10vtkVariantE_SetValue_s2(self, args);
    case 4:
      return PyvtkTypedArray_I10vtkVariantE_SetValue_s3(self, args);
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetValue");
  return NULL;
}



static PyObject *
PyvtkTypedArray_I10vtkVariantE_SetValueN(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValueN");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<vtkVariant> *op = static_cast<vtkTypedArray<vtkVariant> *>(vp);

  unsigned long long temp0;
  vtkVariant *temp1 = NULL;
  PyObject *pobj1 = NULL;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetSpecialObject(temp1, pobj1, "vtkVariant"))
    {
    op->SetValueN(temp0, *temp1);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  Py_XDECREF(pobj1);

  return result;
}

static PyMethodDef PyvtkTypedArray_I10vtkVariantE_Methods[] = {
  {(char*)"GetVariantValue", PyvtkTypedArray_I10vtkVariantE_GetVariantValue, METH_VARARGS,
   (char*)"V.GetVariantValue(int) -> vtkVariant\nC++: vtkVariant GetVariantValue(vtkIdType i)\nV.GetVariantValue(int, int) -> vtkVariant\nC++: vtkVariant GetVariantValue(vtkIdType i, vtkIdType j)\nV.GetVariantValue(int, int, int) -> vtkVariant\nC++: vtkVariant GetVariantValue(vtkIdType i, vtkIdType j,\n    vtkIdType k)\nV.GetVariantValue(vtkArrayCoordinates) -> vtkVariant\nC++: virtual vtkVariant GetVariantValue(\n    const vtkArrayCoordinates &coordinates)\n\n"},
  {(char*)"SetVariantValue", PyvtkTypedArray_I10vtkVariantE_SetVariantValue, METH_VARARGS,
   (char*)"V.SetVariantValue(int, vtkVariant)\nC++: void SetVariantValue(vtkIdType i, const vtkVariant &value)\nV.SetVariantValue(int, int, vtkVariant)\nC++: void SetVariantValue(vtkIdType i, vtkIdType j,\n    const vtkVariant &value)\nV.SetVariantValue(int, int, int, vtkVariant)\nC++: void SetVariantValue(vtkIdType i, vtkIdType j, vtkIdType k,\n    const vtkVariant &value)\nV.SetVariantValue(vtkArrayCoordinates, vtkVariant)\nC++: virtual void SetVariantValue(\n    const vtkArrayCoordinates &coordinates,\n    const vtkVariant &value)\n\n"},
  {(char*)"GetVariantValueN", PyvtkTypedArray_I10vtkVariantE_GetVariantValueN, METH_VARARGS,
   (char*)"V.GetVariantValueN(int) -> vtkVariant\nC++: virtual vtkVariant GetVariantValueN(const SizeT n)\n\n"},
  {(char*)"SetVariantValueN", PyvtkTypedArray_I10vtkVariantE_SetVariantValueN, METH_VARARGS,
   (char*)"V.SetVariantValueN(int, vtkVariant)\nC++: virtual void SetVariantValueN(const SizeT n,\n    const vtkVariant &value)\n\n"},
  {(char*)"CopyValue", PyvtkTypedArray_I10vtkVariantE_CopyValue, METH_VARARGS,
   (char*)"V.CopyValue(vtkArray, vtkArrayCoordinates, vtkArrayCoordinates)\nC++: virtual void CopyValue(vtkArray *source,\n    const vtkArrayCoordinates &source_coordinates,\n    const vtkArrayCoordinates &target_coordinates)\nV.CopyValue(vtkArray, int, vtkArrayCoordinates)\nC++: virtual void CopyValue(vtkArray *source,\n    const SizeT source_index,\n    const vtkArrayCoordinates &target_coordinates)\nV.CopyValue(vtkArray, vtkArrayCoordinates, int)\nC++: virtual void CopyValue(vtkArray *source,\n    const vtkArrayCoordinates &source_coordinates,\n    const SizeT target_index)\n\n"},
  {(char*)"GetValue", PyvtkTypedArray_I10vtkVariantE_GetValue, METH_VARARGS,
   (char*)"V.GetValue(int) -> vtkVariant\nC++: virtual const vtkVariant &GetValue(CoordinateT i)\nV.GetValue(int, int) -> vtkVariant\nC++: virtual const vtkVariant &GetValue(CoordinateT i,\n    CoordinateT j)\nV.GetValue(int, int, int) -> vtkVariant\nC++: virtual const vtkVariant &GetValue(CoordinateT i,\n    CoordinateT j, CoordinateT k)\nV.GetValue(vtkArrayCoordinates) -> vtkVariant\nC++: virtual const vtkVariant &GetValue(\n    const vtkArrayCoordinates &coordinates)\n\nReturns the value stored in the array at the given coordinates.\nNote that the number of dimensions in the supplied coordinates\nmust match the number of dimensions in the array.\n"},
  {(char*)"GetValueN", PyvtkTypedArray_I10vtkVariantE_GetValueN, METH_VARARGS,
   (char*)"V.GetValueN(int) -> vtkVariant\nC++: virtual const vtkVariant &GetValueN(const SizeT n)\n\nReturns the n-th value stored in the array, where n is in the\nrange [0, GetNonNullSize()).  This is useful for efficiently\nvisiting every value in the array.  Note that the order in which\nvalues are visited is undefined, but is guaranteed to match the\norder used by vtkArray::GetCoordinatesN().\n"},
  {(char*)"SetValue", PyvtkTypedArray_I10vtkVariantE_SetValue, METH_VARARGS,
   (char*)"V.SetValue(int, vtkVariant)\nC++: virtual void SetValue(CoordinateT i, const vtkVariant &value)\nV.SetValue(int, int, vtkVariant)\nC++: virtual void SetValue(CoordinateT i, CoordinateT j,\n    const vtkVariant &value)\nV.SetValue(int, int, int, vtkVariant)\nC++: virtual void SetValue(CoordinateT i, CoordinateT j,\n    CoordinateT k, const vtkVariant &value)\nV.SetValue(vtkArrayCoordinates, vtkVariant)\nC++: virtual void SetValue(const vtkArrayCoordinates &coordinates,\n     const vtkVariant &value)\n\nOverwrites the value stored in the array at the given\ncoordinates. Note that the number of dimensions in the supplied\ncoordinates must match the number of dimensions in the array.\n"},
  {(char*)"SetValueN", PyvtkTypedArray_I10vtkVariantE_SetValueN, METH_VARARGS,
   (char*)"V.SetValueN(int, vtkVariant)\nC++: virtual void SetValueN(const SizeT n,\n    const vtkVariant &value)\n\nOverwrites the n-th value stored in the array, where n is in the\nrange [0, GetNonNullSize()).  This is useful for efficiently\nvisiting every value in the array.  Note that the order in which\nvalues are visited is undefined, but is guaranteed to match the\norder used by vtkArray::GetCoordinatesN().\n"},
  {NULL, NULL, 0, NULL}
};

PyObject *PyVTKClass_vtkTypedArray_I10vtkVariantENew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(NULL,
    PyvtkTypedArray_I10vtkVariantE_Methods,
    typeid(vtkTypedArray<vtkVariant>).name(), modulename,
    "vtkTypedArray_I10vtkVariantE", "vtkTypedArray_I10vtkVariantE",
    PyvtkTypedArray_I10vtkVariantE_Doc(),
    PyVTKClass_vtkArrayNew(modulename));
  return cls;
}

const char **PyvtkTypedArray_I10vtkVariantE_Doc()
{
  static const char *docstring[] = {
    "vtkTypedArray - Provides a type-specific interface to N-way arrays\n\n",
    "Superclass: vtkArray\n\n",
    "vtkTypedArray provides an interface for retrieving and updating data\nin an arbitrary-dimension array.  It derives from vtkArray and is\ntemplated on the type of value stored in the array.\n\nMethods are provided for retrieving and updating array values based\neither on their array coordinates, or on a 1-dimensional integer\nindex.  The latter approach can be used to iterate over the values in\nan array ",
    "in arbitrary order, which is useful when writing filters\nthat operate efficiently on sparse arrays and arrays that can have\nany number of dimensions.\n\nSpecial overloaded methods provide simple access for arrays with one,\ntwo, or three dimensions.\n\nSee Also:\n\nvtkArray, vtkDenseArray, vtkSparseArray\n\nThanks:\n\nDeveloped by Timothy M. Shead (tshead@sandia.gov) at Sandia National\nLaboratories.\n\n",
    NULL
  };

  return docstring;
}

static const char *PyvtkTypedArray_Doc[] = {
    "vtkTypedArray - Provides a type-specific interface to N-way arrays\n\n",
    "Superclass: vtkArray\n\n",
    "vtkTypedArray provides an interface for retrieving and updating data\nin an arbitrary-dimension array.  It derives from vtkArray and is\ntemplated on the type of value stored in the array.\n\nMethods are provided for retrieving and updating array values based\neither on their array coordinates, or on a 1-dimensional integer\nindex.  The latter approach can be used to iterate over the values in\nan array ",
    "in arbitrary order, which is useful when writing filters\nthat operate efficiently on sparse arrays and arrays that can have\nany number of dimensions.\n\nSpecial overloaded methods provide simple access for arrays with one,\ntwo, or three dimensions.\n\nSee Also:\n\nvtkArray, vtkDenseArray, vtkSparseArray\n\nThanks:\n\nDeveloped by Timothy M. Shead (tshead@sandia.gov) at Sandia National\nLaboratories.\n\n",
    "\nProvided Types:\n\n",
    "  vtkTypedArray[char] => vtkTypedArray<char>\n",
    "  vtkTypedArray[int8] => vtkTypedArray<signed char>\n",
    "  vtkTypedArray[uint8] => vtkTypedArray<unsigned char>\n",
    "  vtkTypedArray[int16] => vtkTypedArray<short>\n",
    "  vtkTypedArray[uint16] => vtkTypedArray<unsigned short>\n",
    "  vtkTypedArray[int32] => vtkTypedArray<int>\n",
    "  vtkTypedArray[uint32] => vtkTypedArray<unsigned int>\n",
    "  vtkTypedArray[int] => vtkTypedArray<long>\n",
    "  vtkTypedArray[uint] => vtkTypedArray<unsigned long>\n",
    "  vtkTypedArray[int64] => vtkTypedArray<long long>\n",
    "  vtkTypedArray[uint64] => vtkTypedArray<unsigned long long>\n",
    "  vtkTypedArray[float32] => vtkTypedArray<float>\n",
    "  vtkTypedArray[float64] => vtkTypedArray<double>\n",
    "  vtkTypedArray[str] => vtkTypedArray<vtkStdString>\n",
    "  vtkTypedArray[unicode] => vtkTypedArray<vtkUnicodeString>\n",
    "  vtkTypedArray[vtkVariant] => vtkTypedArray<vtkVariant>\n",
    NULL
};

PyObject *PyvtkTypedArray_TemplateNew(const char *modulename)
{
  PyObject *o;

  PyObject *temp = PyVTKTemplate_New("vtkTypedArray", modulename,
                                     PyvtkTypedArray_Doc);

  o = PyVTKClass_vtkTypedArray_IcENew(modulename);
  if (o && PyVTKTemplate_AddItem(temp, o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyVTKClass_vtkTypedArray_IaENew(modulename);
  if (o && PyVTKTemplate_AddItem(temp, o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyVTKClass_vtkTypedArray_IhENew(modulename);
  if (o && PyVTKTemplate_AddItem(temp, o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyVTKClass_vtkTypedArray_IsENew(modulename);
  if (o && PyVTKTemplate_AddItem(temp, o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyVTKClass_vtkTypedArray_ItENew(modulename);
  if (o && PyVTKTemplate_AddItem(temp, o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyVTKClass_vtkTypedArray_IiENew(modulename);
  if (o && PyVTKTemplate_AddItem(temp, o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyVTKClass_vtkTypedArray_IjENew(modulename);
  if (o && PyVTKTemplate_AddItem(temp, o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyVTKClass_vtkTypedArray_IlENew(modulename);
  if (o && PyVTKTemplate_AddItem(temp, o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyVTKClass_vtkTypedArray_ImENew(modulename);
  if (o && PyVTKTemplate_AddItem(temp, o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyVTKClass_vtkTypedArray_IxENew(modulename);
  if (o && PyVTKTemplate_AddItem(temp, o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyVTKClass_vtkTypedArray_IyENew(modulename);
  if (o && PyVTKTemplate_AddItem(temp, o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyVTKClass_vtkTypedArray_IfENew(modulename);
  if (o && PyVTKTemplate_AddItem(temp, o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyVTKClass_vtkTypedArray_IdENew(modulename);
  if (o && PyVTKTemplate_AddItem(temp, o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyVTKClass_vtkTypedArray_I12vtkStdStringENew(modulename);
  if (o && PyVTKTemplate_AddItem(temp, o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyVTKClass_vtkTypedArray_I16vtkUnicodeStringENew(modulename);
  if (o && PyVTKTemplate_AddItem(temp, o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyVTKClass_vtkTypedArray_I10vtkVariantENew(modulename);
  if (o && PyVTKTemplate_AddItem(temp, o) != 0)
    {
    Py_DECREF(o);
    }

  return temp;
}

void PyVTKAddFile_vtkTypedArray(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyvtkTypedArray_TemplateNew(modulename);

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

  if (o && PyDict_SetItemString(dict, (char *)"vtkTypedArray", o) != 0)
    {
    Py_DECREF(o);
    }

}

