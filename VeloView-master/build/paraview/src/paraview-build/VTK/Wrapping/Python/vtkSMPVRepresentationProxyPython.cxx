// python wrapper for vtkSMPVRepresentationProxy
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkSMPVRepresentationProxy.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkSMPVRepresentationProxy(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkSMPVRepresentationProxyNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkSMRepresentationProxyNew
extern "C" { PyObject *PyVTKClass_vtkSMRepresentationProxyNew(const char *); }
#define DECLARED_PyVTKClass_vtkSMRepresentationProxyNew
#endif

static const char **PyvtkSMPVRepresentationProxy_Doc();


static PyObject *
PyvtkSMPVRepresentationProxy_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMPVRepresentationProxy *op = static_cast<vtkSMPVRepresentationProxy *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkSMPVRepresentationProxy::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMPVRepresentationProxy_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMPVRepresentationProxy *op = static_cast<vtkSMPVRepresentationProxy *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSMPVRepresentationProxy::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMPVRepresentationProxy_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMPVRepresentationProxy *op = static_cast<vtkSMPVRepresentationProxy *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkSMPVRepresentationProxy *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSMPVRepresentationProxy::NewInstance());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      if (result && PyVTKObject_Check(result))
        {
        PyVTKObject_GetObject(result)->UnRegister(0);
        PyVTKObject_SetFlag(result, VTK_PYTHON_IGNORE_UNREGISTER, 1);
        }
      }
    }

  return result;
}


static PyObject *
PyvtkSMPVRepresentationProxy_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkSMPVRepresentationProxy *tempr = vtkSMPVRepresentationProxy::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMPVRepresentationProxy_GetUsingScalarColoring_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUsingScalarColoring");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMPVRepresentationProxy *op = static_cast<vtkSMPVRepresentationProxy *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetUsingScalarColoring() :
      op->vtkSMPVRepresentationProxy::GetUsingScalarColoring());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkSMPVRepresentationProxy_GetUsingScalarColoring_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetUsingScalarColoring");

  vtkSMProxy *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMProxy"))
    {
    bool tempr = vtkSMPVRepresentationProxy::GetUsingScalarColoring(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkSMPVRepresentationProxy_GetUsingScalarColoring(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
    {
    case 0:
      return PyvtkSMPVRepresentationProxy_GetUsingScalarColoring_s1(self, args);
    case 1:
      return PyvtkSMPVRepresentationProxy_GetUsingScalarColoring_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetUsingScalarColoring");
  return NULL;
}



static PyObject *
PyvtkSMPVRepresentationProxy_SetScalarColoring_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarColoring");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMPVRepresentationProxy *op = static_cast<vtkSMPVRepresentationProxy *>(vp);

  char *temp0 = NULL;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    bool tempr = (ap.IsBound() ?
      op->SetScalarColoring(temp0, temp1) :
      op->vtkSMPVRepresentationProxy::SetScalarColoring(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkSMPVRepresentationProxy_SetScalarColoring_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SetScalarColoring");

  vtkSMProxy *temp0 = NULL;
  char *temp1 = NULL;
  int temp2;
  PyObject *result = NULL;

  if (ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkSMProxy") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    bool tempr = vtkSMPVRepresentationProxy::SetScalarColoring(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkSMPVRepresentationProxy_SetScalarColoring(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
    {
    case 2:
      return PyvtkSMPVRepresentationProxy_SetScalarColoring_s1(self, args);
    case 3:
      return PyvtkSMPVRepresentationProxy_SetScalarColoring_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetScalarColoring");
  return NULL;
}



static PyObject *
PyvtkSMPVRepresentationProxy_RescaleTransferFunctionToDataRange_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RescaleTransferFunctionToDataRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMPVRepresentationProxy *op = static_cast<vtkSMPVRepresentationProxy *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0, 1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp0)))
    {
    bool tempr = (ap.IsBound() ?
      op->RescaleTransferFunctionToDataRange(temp0) :
      op->vtkSMPVRepresentationProxy::RescaleTransferFunctionToDataRange(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkSMPVRepresentationProxy_RescaleTransferFunctionToDataRange_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RescaleTransferFunctionToDataRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMPVRepresentationProxy *op = static_cast<vtkSMPVRepresentationProxy *>(vp);

  char *temp0 = NULL;
  int temp1;
  bool temp2 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2, 3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)))
    {
    bool tempr = (ap.IsBound() ?
      op->RescaleTransferFunctionToDataRange(temp0, temp1, temp2) :
      op->vtkSMPVRepresentationProxy::RescaleTransferFunctionToDataRange(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkSMPVRepresentationProxy_RescaleTransferFunctionToDataRange_s3(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "RescaleTransferFunctionToDataRange");

  vtkSMProxy *temp0 = NULL;
  bool temp1 = false;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1, 2) &&
      ap.GetVTKObject(temp0, "vtkSMProxy") &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
    {
    bool tempr = vtkSMPVRepresentationProxy::RescaleTransferFunctionToDataRange(temp0, temp1);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkSMPVRepresentationProxy_RescaleTransferFunctionToDataRange_s4(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "RescaleTransferFunctionToDataRange");

  vtkSMProxy *temp0 = NULL;
  char *temp1 = NULL;
  int temp2;
  bool temp3 = false;
  PyObject *result = NULL;

  if (ap.CheckArgCount(3, 4) &&
      ap.GetVTKObject(temp0, "vtkSMProxy") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      (ap.NoArgsLeft() || ap.GetValue(temp3)))
    {
    bool tempr = vtkSMPVRepresentationProxy::RescaleTransferFunctionToDataRange(temp0, temp1, temp2, temp3);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkSMPVRepresentationProxy_RescaleTransferFunctionToDataRange_Methods[] = {
  {NULL, PyvtkSMPVRepresentationProxy_RescaleTransferFunctionToDataRange_s1, METH_VARARGS,
   (char*)"@|O bool"},
  {NULL, PyvtkSMPVRepresentationProxy_RescaleTransferFunctionToDataRange_s2, METH_VARARGS,
   (char*)"@zi|O bool"},
  {NULL, PyvtkSMPVRepresentationProxy_RescaleTransferFunctionToDataRange_s3, METH_VARARGS | METH_STATIC,
   (char*)"O|O *vtkSMProxy bool"},
  {NULL, PyvtkSMPVRepresentationProxy_RescaleTransferFunctionToDataRange_s4, METH_VARARGS | METH_STATIC,
   (char*)"Ozi|O *vtkSMProxy bool"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkSMPVRepresentationProxy_RescaleTransferFunctionToDataRange(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkSMPVRepresentationProxy_RescaleTransferFunctionToDataRange_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
    {
    case 0:
      return PyvtkSMPVRepresentationProxy_RescaleTransferFunctionToDataRange_s1(self, args);
    case 4:
      return PyvtkSMPVRepresentationProxy_RescaleTransferFunctionToDataRange_s4(self, args);
    case 1:
    case 2:
    case 3:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "RescaleTransferFunctionToDataRange");
  return NULL;
}



static PyObject *
PyvtkSMPVRepresentationProxy_RescaleTransferFunctionToDataRangeOverTime_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RescaleTransferFunctionToDataRangeOverTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMPVRepresentationProxy *op = static_cast<vtkSMPVRepresentationProxy *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->RescaleTransferFunctionToDataRangeOverTime() :
      op->vtkSMPVRepresentationProxy::RescaleTransferFunctionToDataRangeOverTime());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkSMPVRepresentationProxy_RescaleTransferFunctionToDataRangeOverTime_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RescaleTransferFunctionToDataRangeOverTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMPVRepresentationProxy *op = static_cast<vtkSMPVRepresentationProxy *>(vp);

  char *temp0 = NULL;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    bool tempr = (ap.IsBound() ?
      op->RescaleTransferFunctionToDataRangeOverTime(temp0, temp1) :
      op->vtkSMPVRepresentationProxy::RescaleTransferFunctionToDataRangeOverTime(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkSMPVRepresentationProxy_RescaleTransferFunctionToDataRangeOverTime_s3(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "RescaleTransferFunctionToDataRangeOverTime");

  vtkSMProxy *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMProxy"))
    {
    bool tempr = vtkSMPVRepresentationProxy::RescaleTransferFunctionToDataRangeOverTime(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkSMPVRepresentationProxy_RescaleTransferFunctionToDataRangeOverTime_s4(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "RescaleTransferFunctionToDataRangeOverTime");

  vtkSMProxy *temp0 = NULL;
  char *temp1 = NULL;
  int temp2;
  PyObject *result = NULL;

  if (ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkSMProxy") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    bool tempr = vtkSMPVRepresentationProxy::RescaleTransferFunctionToDataRangeOverTime(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkSMPVRepresentationProxy_RescaleTransferFunctionToDataRangeOverTime(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
    {
    case 0:
      return PyvtkSMPVRepresentationProxy_RescaleTransferFunctionToDataRangeOverTime_s1(self, args);
    case 2:
      return PyvtkSMPVRepresentationProxy_RescaleTransferFunctionToDataRangeOverTime_s2(self, args);
    case 1:
      return PyvtkSMPVRepresentationProxy_RescaleTransferFunctionToDataRangeOverTime_s3(self, args);
    case 3:
      return PyvtkSMPVRepresentationProxy_RescaleTransferFunctionToDataRangeOverTime_s4(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "RescaleTransferFunctionToDataRangeOverTime");
  return NULL;
}



static PyObject *
PyvtkSMPVRepresentationProxy_RescaleTransferFunctionToVisibleRange_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RescaleTransferFunctionToVisibleRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMPVRepresentationProxy *op = static_cast<vtkSMPVRepresentationProxy *>(vp);

  vtkSMProxy *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMProxy"))
    {
    bool tempr = (ap.IsBound() ?
      op->RescaleTransferFunctionToVisibleRange(temp0) :
      op->vtkSMPVRepresentationProxy::RescaleTransferFunctionToVisibleRange(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkSMPVRepresentationProxy_RescaleTransferFunctionToVisibleRange_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RescaleTransferFunctionToVisibleRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMPVRepresentationProxy *op = static_cast<vtkSMPVRepresentationProxy *>(vp);

  vtkSMProxy *temp0 = NULL;
  char *temp1 = NULL;
  int temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkSMProxy") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    bool tempr = (ap.IsBound() ?
      op->RescaleTransferFunctionToVisibleRange(temp0, temp1, temp2) :
      op->vtkSMPVRepresentationProxy::RescaleTransferFunctionToVisibleRange(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkSMPVRepresentationProxy_RescaleTransferFunctionToVisibleRange_s3(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "RescaleTransferFunctionToVisibleRange");

  vtkSMProxy *temp0 = NULL;
  vtkSMProxy *temp1 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkSMProxy") &&
      ap.GetVTKObject(temp1, "vtkSMProxy"))
    {
    bool tempr = vtkSMPVRepresentationProxy::RescaleTransferFunctionToVisibleRange(temp0, temp1);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkSMPVRepresentationProxy_RescaleTransferFunctionToVisibleRange_s4(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "RescaleTransferFunctionToVisibleRange");

  vtkSMProxy *temp0 = NULL;
  vtkSMProxy *temp1 = NULL;
  char *temp2 = NULL;
  int temp3;
  PyObject *result = NULL;

  if (ap.CheckArgCount(4) &&
      ap.GetVTKObject(temp0, "vtkSMProxy") &&
      ap.GetVTKObject(temp1, "vtkSMProxy") &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
    {
    bool tempr = vtkSMPVRepresentationProxy::RescaleTransferFunctionToVisibleRange(temp0, temp1, temp2, temp3);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkSMPVRepresentationProxy_RescaleTransferFunctionToVisibleRange(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
    {
    case 1:
      return PyvtkSMPVRepresentationProxy_RescaleTransferFunctionToVisibleRange_s1(self, args);
    case 3:
      return PyvtkSMPVRepresentationProxy_RescaleTransferFunctionToVisibleRange_s2(self, args);
    case 2:
      return PyvtkSMPVRepresentationProxy_RescaleTransferFunctionToVisibleRange_s3(self, args);
    case 4:
      return PyvtkSMPVRepresentationProxy_RescaleTransferFunctionToVisibleRange_s4(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "RescaleTransferFunctionToVisibleRange");
  return NULL;
}



static PyObject *
PyvtkSMPVRepresentationProxy_SetScalarBarVisibility_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarBarVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMPVRepresentationProxy *op = static_cast<vtkSMPVRepresentationProxy *>(vp);

  vtkSMProxy *temp0 = NULL;
  bool temp1 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkSMProxy") &&
      ap.GetValue(temp1))
    {
    bool tempr = (ap.IsBound() ?
      op->SetScalarBarVisibility(temp0, temp1) :
      op->vtkSMPVRepresentationProxy::SetScalarBarVisibility(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkSMPVRepresentationProxy_SetScalarBarVisibility_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SetScalarBarVisibility");

  vtkSMProxy *temp0 = NULL;
  vtkSMProxy *temp1 = NULL;
  bool temp2 = false;
  PyObject *result = NULL;

  if (ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkSMProxy") &&
      ap.GetVTKObject(temp1, "vtkSMProxy") &&
      ap.GetValue(temp2))
    {
    bool tempr = vtkSMPVRepresentationProxy::SetScalarBarVisibility(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkSMPVRepresentationProxy_SetScalarBarVisibility(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
    {
    case 2:
      return PyvtkSMPVRepresentationProxy_SetScalarBarVisibility_s1(self, args);
    case 3:
      return PyvtkSMPVRepresentationProxy_SetScalarBarVisibility_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetScalarBarVisibility");
  return NULL;
}



static PyObject *
PyvtkSMPVRepresentationProxy_HideScalarBarIfNotNeeded_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HideScalarBarIfNotNeeded");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMPVRepresentationProxy *op = static_cast<vtkSMPVRepresentationProxy *>(vp);

  vtkSMProxy *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMProxy"))
    {
    bool tempr = (ap.IsBound() ?
      op->HideScalarBarIfNotNeeded(temp0) :
      op->vtkSMPVRepresentationProxy::HideScalarBarIfNotNeeded(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkSMPVRepresentationProxy_HideScalarBarIfNotNeeded_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "HideScalarBarIfNotNeeded");

  vtkSMProxy *temp0 = NULL;
  vtkSMProxy *temp1 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkSMProxy") &&
      ap.GetVTKObject(temp1, "vtkSMProxy"))
    {
    bool tempr = vtkSMPVRepresentationProxy::HideScalarBarIfNotNeeded(temp0, temp1);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkSMPVRepresentationProxy_HideScalarBarIfNotNeeded(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
    {
    case 1:
      return PyvtkSMPVRepresentationProxy_HideScalarBarIfNotNeeded_s1(self, args);
    case 2:
      return PyvtkSMPVRepresentationProxy_HideScalarBarIfNotNeeded_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "HideScalarBarIfNotNeeded");
  return NULL;
}



static PyObject *
PyvtkSMPVRepresentationProxy_IsScalarBarVisible_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsScalarBarVisible");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMPVRepresentationProxy *op = static_cast<vtkSMPVRepresentationProxy *>(vp);

  vtkSMProxy *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMProxy"))
    {
    bool tempr = (ap.IsBound() ?
      op->IsScalarBarVisible(temp0) :
      op->vtkSMPVRepresentationProxy::IsScalarBarVisible(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkSMPVRepresentationProxy_IsScalarBarVisible_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsScalarBarVisible");

  vtkSMProxy *temp0 = NULL;
  vtkSMProxy *temp1 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkSMProxy") &&
      ap.GetVTKObject(temp1, "vtkSMProxy"))
    {
    bool tempr = vtkSMPVRepresentationProxy::IsScalarBarVisible(temp0, temp1);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkSMPVRepresentationProxy_IsScalarBarVisible(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
    {
    case 1:
      return PyvtkSMPVRepresentationProxy_IsScalarBarVisible_s1(self, args);
    case 2:
      return PyvtkSMPVRepresentationProxy_IsScalarBarVisible_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "IsScalarBarVisible");
  return NULL;
}



static PyObject *
PyvtkSMPVRepresentationProxy_GetArrayInformationForColorArray_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetArrayInformationForColorArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMPVRepresentationProxy *op = static_cast<vtkSMPVRepresentationProxy *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPVArrayInformation *tempr = (ap.IsBound() ?
      op->GetArrayInformationForColorArray() :
      op->vtkSMPVRepresentationProxy::GetArrayInformationForColorArray());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkSMPVRepresentationProxy_GetArrayInformationForColorArray_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetArrayInformationForColorArray");

  vtkSMProxy *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMProxy"))
    {
    vtkPVArrayInformation *tempr = vtkSMPVRepresentationProxy::GetArrayInformationForColorArray(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkSMPVRepresentationProxy_GetArrayInformationForColorArray(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
    {
    case 0:
      return PyvtkSMPVRepresentationProxy_GetArrayInformationForColorArray_s1(self, args);
    case 1:
      return PyvtkSMPVRepresentationProxy_GetArrayInformationForColorArray_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetArrayInformationForColorArray");
  return NULL;
}



static PyObject *
PyvtkSMPVRepresentationProxy_GetProminentValuesInformationForColorArray_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProminentValuesInformationForColorArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMPVRepresentationProxy *op = static_cast<vtkSMPVRepresentationProxy *>(vp);

  double temp0 = 1e-6;
  double temp1 = 1e-3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0, 2) &&
      (ap.NoArgsLeft() || ap.GetValue(temp0)) &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
    {
    vtkPVProminentValuesInformation *tempr = (ap.IsBound() ?
      op->GetProminentValuesInformationForColorArray(temp0, temp1) :
      op->vtkSMPVRepresentationProxy::GetProminentValuesInformationForColorArray(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkSMPVRepresentationProxy_GetProminentValuesInformationForColorArray_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetProminentValuesInformationForColorArray");

  vtkSMProxy *temp0 = NULL;
  double temp1 = 1e-6;
  double temp2 = 1e-3;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1, 3) &&
      ap.GetVTKObject(temp0, "vtkSMProxy") &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)) &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)))
    {
    vtkPVProminentValuesInformation *tempr = vtkSMPVRepresentationProxy::GetProminentValuesInformationForColorArray(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkSMPVRepresentationProxy_GetProminentValuesInformationForColorArray_Methods[] = {
  {NULL, PyvtkSMPVRepresentationProxy_GetProminentValuesInformationForColorArray_s1, METH_VARARGS,
   (char*)"@|dd"},
  {NULL, PyvtkSMPVRepresentationProxy_GetProminentValuesInformationForColorArray_s2, METH_VARARGS | METH_STATIC,
   (char*)"O|dd *vtkSMProxy"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkSMPVRepresentationProxy_GetProminentValuesInformationForColorArray(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkSMPVRepresentationProxy_GetProminentValuesInformationForColorArray_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
    {
    case 0:
      return PyvtkSMPVRepresentationProxy_GetProminentValuesInformationForColorArray_s1(self, args);
    case 3:
      return PyvtkSMPVRepresentationProxy_GetProminentValuesInformationForColorArray_s2(self, args);
    case 1:
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetProminentValuesInformationForColorArray");
  return NULL;
}



static PyObject *
PyvtkSMPVRepresentationProxy_SetRepresentationType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRepresentationType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMPVRepresentationProxy *op = static_cast<vtkSMPVRepresentationProxy *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    bool tempr = (ap.IsBound() ?
      op->SetRepresentationType(temp0) :
      op->vtkSMPVRepresentationProxy::SetRepresentationType(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkSMPVRepresentationProxy_Methods[] = {
  {(char*)"GetClassName", PyvtkSMPVRepresentationProxy_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkSMPVRepresentationProxy_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkSMPVRepresentationProxy_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkSMPVRepresentationProxy\nC++: vtkSMPVRepresentationProxy *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkSMPVRepresentationProxy_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkSMPVRepresentationProxy\nC++: vtkSMPVRepresentationProxy *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetUsingScalarColoring", PyvtkSMPVRepresentationProxy_GetUsingScalarColoring, METH_VARARGS,
   (char*)"V.GetUsingScalarColoring() -> bool\nC++: virtual bool GetUsingScalarColoring()\nV.GetUsingScalarColoring(vtkSMProxy) -> bool\nC++: static bool GetUsingScalarColoring(vtkSMProxy *proxy)\n\nReturns true if scalar coloring is enabled. This checks whether a\nproperty named \"ColorArrayName\" exists and has a non-empty\nstring. This does not check for the validity of the array.\n"},
  {(char*)"SetScalarColoring", PyvtkSMPVRepresentationProxy_SetScalarColoring, METH_VARARGS,
   (char*)"V.SetScalarColoring(string, int) -> bool\nC++: virtual bool SetScalarColoring(const char *arrayname,\n    int attribute_type)\nV.SetScalarColoring(vtkSMProxy, string, int) -> bool\nC++: static bool SetScalarColoring(vtkSMProxy *proxy,\n    const char *arrayname, int attribute_type)\n\nEnable/disable scalar coloring using the specified array. This\nwill setup a color and opacity transfer functions using\nvtkSMTransferFunctionProxy instance. If arrayname is NULL, then\nscalar coloring is turned off.field_association must be one of\nvtkDataObject::AttributeTypes.\n"},
  {(char*)"RescaleTransferFunctionToDataRange", PyvtkSMPVRepresentationProxy_RescaleTransferFunctionToDataRange, METH_VARARGS,
   (char*)"V.RescaleTransferFunctionToDataRange(bool) -> bool\nC++: virtual bool RescaleTransferFunctionToDataRange(\n    bool extend=false)\nV.RescaleTransferFunctionToDataRange(string, int, bool) -> bool\nC++: virtual bool RescaleTransferFunctionToDataRange(\n    const char *arrayname, int attribute_type, bool extend=false)\nV.RescaleTransferFunctionToDataRange(vtkSMProxy, bool) -> bool\nC++: static bool RescaleTransferFunctionToDataRange(\n    vtkSMProxy *proxy, bool extend=false)\nV.RescaleTransferFunctionToDataRange(vtkSMProxy, string, int,\n    bool) -> bool\nC++: static bool RescaleTransferFunctionToDataRange(\n    vtkSMProxy *proxy, const char *arrayname, int attribute_type,\n    bool extend=false)\n\nRescales the color transfer function and opacity transfer\nfunction using the current data range. Returns true if rescale\nwas successful. If extend is true (false by default), the\ntransfer function range will only be extended as needed to fit\nthe data range.\n"},
  {(char*)"RescaleTransferFunctionToDataRangeOverTime", PyvtkSMPVRepresentationProxy_RescaleTransferFunctionToDataRangeOverTime, METH_VARARGS,
   (char*)"V.RescaleTransferFunctionToDataRangeOverTime() -> bool\nC++: virtual bool RescaleTransferFunctionToDataRangeOverTime()\nV.RescaleTransferFunctionToDataRangeOverTime(string, int) -> bool\nC++: virtual bool RescaleTransferFunctionToDataRangeOverTime(\n    const char *arrayname, int attribute_type)\nV.RescaleTransferFunctionToDataRangeOverTime(vtkSMProxy) -> bool\nC++: static bool RescaleTransferFunctionToDataRangeOverTime(\n    vtkSMProxy *proxy)\nV.RescaleTransferFunctionToDataRangeOverTime(vtkSMProxy, string,\n    int) -> bool\nC++: static bool RescaleTransferFunctionToDataRangeOverTime(\n    vtkSMProxy *proxy, const char *arrayname, int attribute_type)\n\nRescales the color transfer function and opacity transfer\nfunction using the current data range over time. Returns true if\nrescale was successful.\n"},
  {(char*)"RescaleTransferFunctionToVisibleRange", PyvtkSMPVRepresentationProxy_RescaleTransferFunctionToVisibleRange, METH_VARARGS,
   (char*)"V.RescaleTransferFunctionToVisibleRange(vtkSMProxy) -> bool\nC++: virtual bool RescaleTransferFunctionToVisibleRange(\n    vtkSMProxy *view)\nV.RescaleTransferFunctionToVisibleRange(vtkSMProxy, string, int)\n    -> bool\nC++: virtual bool RescaleTransferFunctionToVisibleRange(\n    vtkSMProxy *view, const char *arrayname, int attribute_type)\nV.RescaleTransferFunctionToVisibleRange(vtkSMProxy, vtkSMProxy)\n    -> bool\nC++: static bool RescaleTransferFunctionToVisibleRange(\n    vtkSMProxy *proxy, vtkSMProxy *view)\nV.RescaleTransferFunctionToVisibleRange(vtkSMProxy, vtkSMProxy,\n    string, int) -> bool\nC++: static bool RescaleTransferFunctionToVisibleRange(\n    vtkSMProxy *proxy, vtkSMProxy *view, const char *arrayname,\n    int attribute_type)\n\nRescales the color transfer function and the opacity transfer\nfunction using the current data range, limited to the currernt\nvisible elements.\n"},
  {(char*)"SetScalarBarVisibility", PyvtkSMPVRepresentationProxy_SetScalarBarVisibility, METH_VARARGS,
   (char*)"V.SetScalarBarVisibility(vtkSMProxy, bool) -> bool\nC++: virtual bool SetScalarBarVisibility(vtkSMProxy *view,\n    bool visibile)\nV.SetScalarBarVisibility(vtkSMProxy, vtkSMProxy, bool) -> bool\nC++: static bool SetScalarBarVisibility(vtkSMProxy *proxy,\n    vtkSMProxy *view, bool visibile)\n\nSet the scalar bar visibility. This will create a new scalar bar\nas needed. Scalar bar is only shown if scalar coloring is indeed\nbeing used.\n"},
  {(char*)"HideScalarBarIfNotNeeded", PyvtkSMPVRepresentationProxy_HideScalarBarIfNotNeeded, METH_VARARGS,
   (char*)"V.HideScalarBarIfNotNeeded(vtkSMProxy) -> bool\nC++: virtual bool HideScalarBarIfNotNeeded(vtkSMProxy *view)\nV.HideScalarBarIfNotNeeded(vtkSMProxy, vtkSMProxy) -> bool\nC++: static bool HideScalarBarIfNotNeeded(vtkSMProxy *repr,\n    vtkSMProxy *view)\n\nWhile SetScalarBarVisibility can be used to hide a scalar bar, it\nwill always simply hide the scalar bar even if its being used by\nsome other representation. Use this method instead to only hide\nthe scalar/color bar if no other visible representation in the\nview is mapping data using the scalar bar.\n"},
  {(char*)"IsScalarBarVisible", PyvtkSMPVRepresentationProxy_IsScalarBarVisible, METH_VARARGS,
   (char*)"V.IsScalarBarVisible(vtkSMProxy) -> bool\nC++: virtual bool IsScalarBarVisible(vtkSMProxy *view)\nV.IsScalarBarVisible(vtkSMProxy, vtkSMProxy) -> bool\nC++: static bool IsScalarBarVisible(vtkSMProxy *repr,\n    vtkSMProxy *view)\n\nCheck scalar bar visibility.  Return true if the scalar bar for\nthis representation and view is visible, return false otherwise.\n"},
  {(char*)"GetArrayInformationForColorArray", PyvtkSMPVRepresentationProxy_GetArrayInformationForColorArray, METH_VARARGS,
   (char*)"V.GetArrayInformationForColorArray() -> vtkPVArrayInformation\nC++: virtual vtkPVArrayInformation *GetArrayInformationForColorArray(\n    )\nV.GetArrayInformationForColorArray(vtkSMProxy)\n    -> vtkPVArrayInformation\nC++: static vtkPVArrayInformation *GetArrayInformationForColorArray(\n    vtkSMProxy *proxy)\n\nReturns the array information for the data array used for scalar\ncoloring, if any. Otherwise returns NULL.\n"},
  {(char*)"GetProminentValuesInformationForColorArray", PyvtkSMPVRepresentationProxy_GetProminentValuesInformationForColorArray, METH_VARARGS,
   (char*)"V.GetProminentValuesInformationForColorArray(float, float)\n    -> vtkPVProminentValuesInformation\nC++: virtual vtkPVProminentValuesInformation *GetProminentValuesInformationForColorArray(\n    double uncertaintyAllowed=1e-6, double fraction=1e-3)\nV.GetProminentValuesInformationForColorArray(vtkSMProxy, float,\n    float) -> vtkPVProminentValuesInformation\nC++: static vtkPVProminentValuesInformation *GetProminentValuesInformationForColorArray(\n    vtkSMProxy *proxy, double uncertaintyAllowed=1e-6,\n    double fraction=1e-3)\n\nCall vtkSMRepresentationProxy::GetProminentValuesInformation()\nfor the array used for scalar color, if any. Otherwise returns\nNULL.\n"},
  {(char*)"SetRepresentationType", PyvtkSMPVRepresentationProxy_SetRepresentationType, METH_VARARGS,
   (char*)"V.SetRepresentationType(string) -> bool\nC++: virtual bool SetRepresentationType(const char *type)\n\nOverridden to ensure when picking representation types that\nrequire scalar colors, scalar coloring it setup properly.\nCurrently this is hard-coded for Volume and Slice representation\ntypes.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkSMPVRepresentationProxy_StaticNew()
{
  return vtkSMPVRepresentationProxy::New();
}

PyObject *PyVTKClass_vtkSMPVRepresentationProxyNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkSMPVRepresentationProxy_StaticNew,
    PyvtkSMPVRepresentationProxy_Methods,
    "vtkSMPVRepresentationProxy", modulename,
    NULL, NULL,
    PyvtkSMPVRepresentationProxy_Doc(),
    PyVTKClass_vtkSMRepresentationProxyNew(modulename));
  return cls;
}

const char **PyvtkSMPVRepresentationProxy_Doc()
{
  static const char *docstring[] = {
    "vtkSMPVRepresentationProxy - representation for \"Render View\" like\n\n",
    "Superclass: vtkSMRepresentationProxy\n\n",
    "vtkSMPVRepresentationProxy combines surface representation and volume\nrepresentation proxies typically used for displaying data. This class\nalso takes over the selection obligations for all the internal\nrepresentations, i.e. is disables showing of selection in all the\ninternal representations, and manages it. This avoids duplicate\nexecution of extract selection filter for each of the internal\nrepr",
    "esentations.\n\nvtkSMPVRepresentationProxy is used for pretty much all of the\ndata-representations (i.e. representations showing input data) in the\nrender views. It provides helper functions for controlling transfer\nfunctions, scalar coloring, etc.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkSMPVRepresentationProxy(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkSMPVRepresentationProxyNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkSMPVRepresentationProxy", o) != 0)
    {
    Py_DECREF(o);
    }

}

