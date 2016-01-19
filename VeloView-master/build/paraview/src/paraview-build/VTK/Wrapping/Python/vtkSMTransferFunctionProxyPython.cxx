// python wrapper for vtkSMTransferFunctionProxy
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkSMTransferFunctionProxy.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkSMTransferFunctionProxy(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkSMTransferFunctionProxyNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkSMProxyNew
extern "C" { PyObject *PyVTKClass_vtkSMProxyNew(const char *); }
#define DECLARED_PyVTKClass_vtkSMProxyNew
#endif

static const char **PyvtkSMTransferFunctionProxy_Doc();


static PyObject *
PyvtkSMTransferFunctionProxy_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMTransferFunctionProxy *op = static_cast<vtkSMTransferFunctionProxy *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkSMTransferFunctionProxy::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMTransferFunctionProxy_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMTransferFunctionProxy *op = static_cast<vtkSMTransferFunctionProxy *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSMTransferFunctionProxy::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMTransferFunctionProxy_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMTransferFunctionProxy *op = static_cast<vtkSMTransferFunctionProxy *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkSMTransferFunctionProxy *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSMTransferFunctionProxy::NewInstance());

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
PyvtkSMTransferFunctionProxy_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkSMTransferFunctionProxy *tempr = vtkSMTransferFunctionProxy::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMTransferFunctionProxy_RescaleTransferFunction_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RescaleTransferFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMTransferFunctionProxy *op = static_cast<vtkSMTransferFunctionProxy *>(vp);

  double temp0[2];
  const int size0 = 2;
  bool temp1 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1, 2) &&
      ap.GetArray(temp0, size0) &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
    {
    bool tempr = (ap.IsBound() ?
      op->RescaleTransferFunction(temp0, temp1) :
      op->vtkSMTransferFunctionProxy::RescaleTransferFunction(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkSMTransferFunctionProxy_RescaleTransferFunction_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RescaleTransferFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMTransferFunctionProxy *op = static_cast<vtkSMTransferFunctionProxy *>(vp);

  double temp0;
  double temp1;
  bool temp2 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2, 3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)))
    {
    bool tempr = (ap.IsBound() ?
      op->RescaleTransferFunction(temp0, temp1, temp2) :
      op->vtkSMTransferFunctionProxy::RescaleTransferFunction(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkSMTransferFunctionProxy_RescaleTransferFunction_s3(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "RescaleTransferFunction");

  vtkSMProxy *temp0 = NULL;
  double temp1;
  double temp2;
  bool temp3 = false;
  PyObject *result = NULL;

  if (ap.CheckArgCount(3, 4) &&
      ap.GetVTKObject(temp0, "vtkSMProxy") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      (ap.NoArgsLeft() || ap.GetValue(temp3)))
    {
    bool tempr = vtkSMTransferFunctionProxy::RescaleTransferFunction(temp0, temp1, temp2, temp3);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkSMTransferFunctionProxy_RescaleTransferFunction_s4(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "RescaleTransferFunction");

  vtkSMProxy *temp0 = NULL;
  double temp1[2];
  const int size1 = 2;
  bool temp2 = false;
  PyObject *result = NULL;

  if (ap.CheckArgCount(2, 3) &&
      ap.GetVTKObject(temp0, "vtkSMProxy") &&
      ap.GetArray(temp1, size1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)))
    {
    bool tempr = vtkSMTransferFunctionProxy::RescaleTransferFunction(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkSMTransferFunctionProxy_RescaleTransferFunction_Methods[] = {
  {NULL, PyvtkSMTransferFunctionProxy_RescaleTransferFunction_s1, METH_VARARGS,
   (char*)"@O|O *d bool"},
  {NULL, PyvtkSMTransferFunctionProxy_RescaleTransferFunction_s2, METH_VARARGS,
   (char*)"@dd|O bool"},
  {NULL, PyvtkSMTransferFunctionProxy_RescaleTransferFunction_s3, METH_VARARGS | METH_STATIC,
   (char*)"Odd|O *vtkSMProxy bool"},
  {NULL, PyvtkSMTransferFunctionProxy_RescaleTransferFunction_s4, METH_VARARGS | METH_STATIC,
   (char*)"OO|O *vtkSMProxy *d bool"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkSMTransferFunctionProxy_RescaleTransferFunction(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkSMTransferFunctionProxy_RescaleTransferFunction_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
    {
    case 1:
      return PyvtkSMTransferFunctionProxy_RescaleTransferFunction_s1(self, args);
    case 4:
      return PyvtkSMTransferFunctionProxy_RescaleTransferFunction_s3(self, args);
    case 2:
    case 3:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "RescaleTransferFunction");
  return NULL;
}



static PyObject *
PyvtkSMTransferFunctionProxy_RescaleTransferFunctionToDataRange_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RescaleTransferFunctionToDataRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMTransferFunctionProxy *op = static_cast<vtkSMTransferFunctionProxy *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0, 1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp0)))
    {
    bool tempr = (ap.IsBound() ?
      op->RescaleTransferFunctionToDataRange(temp0) :
      op->vtkSMTransferFunctionProxy::RescaleTransferFunctionToDataRange(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkSMTransferFunctionProxy_RescaleTransferFunctionToDataRange_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "RescaleTransferFunctionToDataRange");

  vtkSMProxy *temp0 = NULL;
  bool temp1 = false;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1, 2) &&
      ap.GetVTKObject(temp0, "vtkSMProxy") &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
    {
    bool tempr = vtkSMTransferFunctionProxy::RescaleTransferFunctionToDataRange(temp0, temp1);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkSMTransferFunctionProxy_RescaleTransferFunctionToDataRange_Methods[] = {
  {NULL, PyvtkSMTransferFunctionProxy_RescaleTransferFunctionToDataRange_s1, METH_VARARGS,
   (char*)"@|O bool"},
  {NULL, PyvtkSMTransferFunctionProxy_RescaleTransferFunctionToDataRange_s2, METH_VARARGS | METH_STATIC,
   (char*)"O|O *vtkSMProxy bool"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkSMTransferFunctionProxy_RescaleTransferFunctionToDataRange(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkSMTransferFunctionProxy_RescaleTransferFunctionToDataRange_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
    {
    case 0:
      return PyvtkSMTransferFunctionProxy_RescaleTransferFunctionToDataRange_s1(self, args);
    case 2:
      return PyvtkSMTransferFunctionProxy_RescaleTransferFunctionToDataRange_s2(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "RescaleTransferFunctionToDataRange");
  return NULL;
}



static PyObject *
PyvtkSMTransferFunctionProxy_InvertTransferFunction_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InvertTransferFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMTransferFunctionProxy *op = static_cast<vtkSMTransferFunctionProxy *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->InvertTransferFunction() :
      op->vtkSMTransferFunctionProxy::InvertTransferFunction());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkSMTransferFunctionProxy_InvertTransferFunction_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "InvertTransferFunction");

  vtkSMProxy *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMProxy"))
    {
    bool tempr = vtkSMTransferFunctionProxy::InvertTransferFunction(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkSMTransferFunctionProxy_InvertTransferFunction(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
    {
    case 0:
      return PyvtkSMTransferFunctionProxy_InvertTransferFunction_s1(self, args);
    case 1:
      return PyvtkSMTransferFunctionProxy_InvertTransferFunction_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "InvertTransferFunction");
  return NULL;
}



static PyObject *
PyvtkSMTransferFunctionProxy_MapControlPointsToLogSpace_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MapControlPointsToLogSpace");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMTransferFunctionProxy *op = static_cast<vtkSMTransferFunctionProxy *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0, 1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp0)))
    {
    bool tempr = (ap.IsBound() ?
      op->MapControlPointsToLogSpace(temp0) :
      op->vtkSMTransferFunctionProxy::MapControlPointsToLogSpace(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkSMTransferFunctionProxy_MapControlPointsToLogSpace_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "MapControlPointsToLogSpace");

  vtkSMProxy *temp0 = NULL;
  bool temp1 = false;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1, 2) &&
      ap.GetVTKObject(temp0, "vtkSMProxy") &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
    {
    bool tempr = vtkSMTransferFunctionProxy::MapControlPointsToLogSpace(temp0, temp1);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkSMTransferFunctionProxy_MapControlPointsToLogSpace_Methods[] = {
  {NULL, PyvtkSMTransferFunctionProxy_MapControlPointsToLogSpace_s1, METH_VARARGS,
   (char*)"@|O bool"},
  {NULL, PyvtkSMTransferFunctionProxy_MapControlPointsToLogSpace_s2, METH_VARARGS | METH_STATIC,
   (char*)"O|O *vtkSMProxy bool"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkSMTransferFunctionProxy_MapControlPointsToLogSpace(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkSMTransferFunctionProxy_MapControlPointsToLogSpace_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
    {
    case 0:
      return PyvtkSMTransferFunctionProxy_MapControlPointsToLogSpace_s1(self, args);
    case 2:
      return PyvtkSMTransferFunctionProxy_MapControlPointsToLogSpace_s2(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "MapControlPointsToLogSpace");
  return NULL;
}



static PyObject *
PyvtkSMTransferFunctionProxy_MapControlPointsToLinearSpace_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MapControlPointsToLinearSpace");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMTransferFunctionProxy *op = static_cast<vtkSMTransferFunctionProxy *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->MapControlPointsToLinearSpace() :
      op->vtkSMTransferFunctionProxy::MapControlPointsToLinearSpace());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkSMTransferFunctionProxy_MapControlPointsToLinearSpace_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "MapControlPointsToLinearSpace");

  vtkSMProxy *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMProxy"))
    {
    bool tempr = vtkSMTransferFunctionProxy::MapControlPointsToLinearSpace(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkSMTransferFunctionProxy_MapControlPointsToLinearSpace(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
    {
    case 0:
      return PyvtkSMTransferFunctionProxy_MapControlPointsToLinearSpace_s1(self, args);
    case 1:
      return PyvtkSMTransferFunctionProxy_MapControlPointsToLinearSpace_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "MapControlPointsToLinearSpace");
  return NULL;
}



static PyObject *
PyvtkSMTransferFunctionProxy_ApplyColorMap_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ApplyColorMap");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMTransferFunctionProxy *op = static_cast<vtkSMTransferFunctionProxy *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    bool tempr = (ap.IsBound() ?
      op->ApplyColorMap(temp0) :
      op->vtkSMTransferFunctionProxy::ApplyColorMap(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkSMTransferFunctionProxy_ApplyColorMap_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ApplyColorMap");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMTransferFunctionProxy *op = static_cast<vtkSMTransferFunctionProxy *>(vp);

  vtkPVXMLElement *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPVXMLElement"))
    {
    bool tempr = (ap.IsBound() ?
      op->ApplyColorMap(temp0) :
      op->vtkSMTransferFunctionProxy::ApplyColorMap(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkSMTransferFunctionProxy_ApplyColorMap_s3(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "ApplyColorMap");

  vtkSMProxy *temp0 = NULL;
  char *temp1 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkSMProxy") &&
      ap.GetValue(temp1))
    {
    bool tempr = vtkSMTransferFunctionProxy::ApplyColorMap(temp0, temp1);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkSMTransferFunctionProxy_ApplyColorMap_s4(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "ApplyColorMap");

  vtkSMProxy *temp0 = NULL;
  vtkPVXMLElement *temp1 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkSMProxy") &&
      ap.GetVTKObject(temp1, "vtkPVXMLElement"))
    {
    bool tempr = vtkSMTransferFunctionProxy::ApplyColorMap(temp0, temp1);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkSMTransferFunctionProxy_ApplyColorMap_Methods[] = {
  {NULL, PyvtkSMTransferFunctionProxy_ApplyColorMap_s1, METH_VARARGS,
   (char*)"@z"},
  {NULL, PyvtkSMTransferFunctionProxy_ApplyColorMap_s2, METH_VARARGS,
   (char*)"@O *vtkPVXMLElement"},
  {NULL, PyvtkSMTransferFunctionProxy_ApplyColorMap_s3, METH_VARARGS | METH_STATIC,
   (char*)"Oz *vtkSMProxy"},
  {NULL, PyvtkSMTransferFunctionProxy_ApplyColorMap_s4, METH_VARARGS | METH_STATIC,
   (char*)"OO *vtkSMProxy *vtkPVXMLElement"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkSMTransferFunctionProxy_ApplyColorMap(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkSMTransferFunctionProxy_ApplyColorMap_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
    {
    case 1:
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "ApplyColorMap");
  return NULL;
}



static PyObject *
PyvtkSMTransferFunctionProxy_SaveColorMap_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SaveColorMap");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMTransferFunctionProxy *op = static_cast<vtkSMTransferFunctionProxy *>(vp);

  vtkPVXMLElement *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPVXMLElement"))
    {
    bool tempr = (ap.IsBound() ?
      op->SaveColorMap(temp0) :
      op->vtkSMTransferFunctionProxy::SaveColorMap(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkSMTransferFunctionProxy_SaveColorMap_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SaveColorMap");

  vtkSMProxy *temp0 = NULL;
  vtkPVXMLElement *temp1 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkSMProxy") &&
      ap.GetVTKObject(temp1, "vtkPVXMLElement"))
    {
    bool tempr = vtkSMTransferFunctionProxy::SaveColorMap(temp0, temp1);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkSMTransferFunctionProxy_SaveColorMap(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
    {
    case 1:
      return PyvtkSMTransferFunctionProxy_SaveColorMap_s1(self, args);
    case 2:
      return PyvtkSMTransferFunctionProxy_SaveColorMap_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SaveColorMap");
  return NULL;
}



static PyObject *
PyvtkSMTransferFunctionProxy_IsScalarBarVisible_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsScalarBarVisible");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMTransferFunctionProxy *op = static_cast<vtkSMTransferFunctionProxy *>(vp);

  vtkSMProxy *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMProxy"))
    {
    bool tempr = (ap.IsBound() ?
      op->IsScalarBarVisible(temp0) :
      op->vtkSMTransferFunctionProxy::IsScalarBarVisible(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkSMTransferFunctionProxy_IsScalarBarVisible_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsScalarBarVisible");

  vtkSMProxy *temp0 = NULL;
  vtkSMProxy *temp1 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkSMProxy") &&
      ap.GetVTKObject(temp1, "vtkSMProxy"))
    {
    bool tempr = vtkSMTransferFunctionProxy::IsScalarBarVisible(temp0, temp1);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkSMTransferFunctionProxy_IsScalarBarVisible(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
    {
    case 1:
      return PyvtkSMTransferFunctionProxy_IsScalarBarVisible_s1(self, args);
    case 2:
      return PyvtkSMTransferFunctionProxy_IsScalarBarVisible_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "IsScalarBarVisible");
  return NULL;
}



static PyObject *
PyvtkSMTransferFunctionProxy_FindScalarBarRepresentation_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FindScalarBarRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMTransferFunctionProxy *op = static_cast<vtkSMTransferFunctionProxy *>(vp);

  vtkSMProxy *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMProxy"))
    {
    vtkSMProxy *tempr = (ap.IsBound() ?
      op->FindScalarBarRepresentation(temp0) :
      op->vtkSMTransferFunctionProxy::FindScalarBarRepresentation(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkSMTransferFunctionProxy_FindScalarBarRepresentation_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "FindScalarBarRepresentation");

  vtkSMProxy *temp0 = NULL;
  vtkSMProxy *temp1 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkSMProxy") &&
      ap.GetVTKObject(temp1, "vtkSMProxy"))
    {
    vtkSMProxy *tempr = vtkSMTransferFunctionProxy::FindScalarBarRepresentation(temp0, temp1);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkSMTransferFunctionProxy_FindScalarBarRepresentation(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
    {
    case 1:
      return PyvtkSMTransferFunctionProxy_FindScalarBarRepresentation_s1(self, args);
    case 2:
      return PyvtkSMTransferFunctionProxy_FindScalarBarRepresentation_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "FindScalarBarRepresentation");
  return NULL;
}



static PyObject *
PyvtkSMTransferFunctionProxy_UpdateScalarBarsComponentTitle_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateScalarBarsComponentTitle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMTransferFunctionProxy *op = static_cast<vtkSMTransferFunctionProxy *>(vp);

  vtkPVArrayInformation *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPVArrayInformation"))
    {
    bool tempr = (ap.IsBound() ?
      op->UpdateScalarBarsComponentTitle(temp0) :
      op->vtkSMTransferFunctionProxy::UpdateScalarBarsComponentTitle(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkSMTransferFunctionProxy_UpdateScalarBarsComponentTitle_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "UpdateScalarBarsComponentTitle");

  vtkSMProxy *temp0 = NULL;
  vtkPVArrayInformation *temp1 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkSMProxy") &&
      ap.GetVTKObject(temp1, "vtkPVArrayInformation"))
    {
    bool tempr = vtkSMTransferFunctionProxy::UpdateScalarBarsComponentTitle(temp0, temp1);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkSMTransferFunctionProxy_UpdateScalarBarsComponentTitle(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
    {
    case 1:
      return PyvtkSMTransferFunctionProxy_UpdateScalarBarsComponentTitle_s1(self, args);
    case 2:
      return PyvtkSMTransferFunctionProxy_UpdateScalarBarsComponentTitle_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "UpdateScalarBarsComponentTitle");
  return NULL;
}



static PyObject *
PyvtkSMTransferFunctionProxy_ComputeDataRange_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeDataRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMTransferFunctionProxy *op = static_cast<vtkSMTransferFunctionProxy *>(vp);

  double temp0[2];
  double save0[2];
  const int size0 = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    bool tempr = (ap.IsBound() ?
      op->ComputeDataRange(temp0) :
      op->vtkSMTransferFunctionProxy::ComputeDataRange(temp0));

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

  return result;
}

static PyObject *
PyvtkSMTransferFunctionProxy_ComputeDataRange_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "ComputeDataRange");

  vtkSMProxy *temp0 = NULL;
  double temp1[2];
  double save1[2];
  const int size1 = 2;
  PyObject *result = NULL;

  if (ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkSMProxy") &&
      ap.GetArray(temp1, size1))
    {
    ap.SaveArray(temp1, save1, size1);

    bool tempr = vtkSMTransferFunctionProxy::ComputeDataRange(temp0, temp1);

    if (ap.ArrayHasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(1, temp1, size1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkSMTransferFunctionProxy_ComputeDataRange(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
    {
    case 1:
      return PyvtkSMTransferFunctionProxy_ComputeDataRange_s1(self, args);
    case 2:
      return PyvtkSMTransferFunctionProxy_ComputeDataRange_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "ComputeDataRange");
  return NULL;
}



static PyObject *
PyvtkSMTransferFunctionProxy_ResetPropertiesToXMLDefaults_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ResetPropertiesToXMLDefaults");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMTransferFunctionProxy *op = static_cast<vtkSMTransferFunctionProxy *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->ResetPropertiesToXMLDefaults(temp0);
      }
    else
      {
      op->vtkSMTransferFunctionProxy::ResetPropertiesToXMLDefaults(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkSMTransferFunctionProxy_ResetPropertiesToXMLDefaults_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "ResetPropertiesToXMLDefaults");

  vtkSMProxy *temp0 = NULL;
  bool temp1 = false;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1, 2) &&
      ap.GetVTKObject(temp0, "vtkSMProxy") &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
    {
    vtkSMTransferFunctionProxy::ResetPropertiesToXMLDefaults(temp0, temp1);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkSMTransferFunctionProxy_ResetPropertiesToXMLDefaults_Methods[] = {
  {NULL, PyvtkSMTransferFunctionProxy_ResetPropertiesToXMLDefaults_s1, METH_VARARGS,
   (char*)"@O bool"},
  {NULL, PyvtkSMTransferFunctionProxy_ResetPropertiesToXMLDefaults_s2, METH_VARARGS | METH_STATIC,
   (char*)"O|O *vtkSMProxy bool"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkSMTransferFunctionProxy_ResetPropertiesToXMLDefaults(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkSMTransferFunctionProxy_ResetPropertiesToXMLDefaults_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
    {
    case 2:
      return PyvtkSMTransferFunctionProxy_ResetPropertiesToXMLDefaults_s2(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "ResetPropertiesToXMLDefaults");
  return NULL;
}


static PyMethodDef PyvtkSMTransferFunctionProxy_Methods[] = {
  {(char*)"GetClassName", PyvtkSMTransferFunctionProxy_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkSMTransferFunctionProxy_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkSMTransferFunctionProxy_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkSMTransferFunctionProxy\nC++: vtkSMTransferFunctionProxy *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkSMTransferFunctionProxy_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkSMTransferFunctionProxy\nC++: vtkSMTransferFunctionProxy *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"RescaleTransferFunction", PyvtkSMTransferFunctionProxy_RescaleTransferFunction, METH_VARARGS,
   (char*)"V.RescaleTransferFunction((float, float), bool) -> bool\nC++: virtual bool RescaleTransferFunction(const double range[2],\n    bool extend=false)\nV.RescaleTransferFunction(float, float, bool) -> bool\nC++: virtual bool RescaleTransferFunction(double rangeMin,\n    double rangeMax, bool extend=false)\nV.RescaleTransferFunction(vtkSMProxy, float, float, bool) -> bool\nC++: static bool RescaleTransferFunction(vtkSMProxy *proxy,\n    double rangeMin, double rangeMax, bool extend=false)\nV.RescaleTransferFunction(vtkSMProxy, (float, float), bool)\n    -> bool\nC++: static bool RescaleTransferFunction(vtkSMProxy *proxy,\n    const double range[2], bool extend=false)\n\nRescale the \"RGBPoints\" for the transfer function to match the\nnew range. Returns true if rescale was successful. If extend is\ntrue (false by default), the transfer function range will only be\nextended as needed to fit the data range.\n"},
  {(char*)"RescaleTransferFunctionToDataRange", PyvtkSMTransferFunctionProxy_RescaleTransferFunctionToDataRange, METH_VARARGS,
   (char*)"V.RescaleTransferFunctionToDataRange(bool) -> bool\nC++: virtual bool RescaleTransferFunctionToDataRange(\n    bool extend=false)\nV.RescaleTransferFunctionToDataRange(vtkSMProxy, bool) -> bool\nC++: static bool RescaleTransferFunctionToDataRange(\n    vtkSMProxy *proxy, bool extend=false)\n\nLocates all representations that are currently using this\ntransfer function and then rescales the transfer function scalar\nrange to exactly match the combined valid scalar ranges obtained\nfrom them all.\n"},
  {(char*)"InvertTransferFunction", PyvtkSMTransferFunctionProxy_InvertTransferFunction, METH_VARARGS,
   (char*)"V.InvertTransferFunction() -> bool\nC++: virtual bool InvertTransferFunction()\nV.InvertTransferFunction(vtkSMProxy) -> bool\nC++: static bool InvertTransferFunction(vtkSMProxy *)\n\nInvert the transfer function. Returns true if successful.\n"},
  {(char*)"MapControlPointsToLogSpace", PyvtkSMTransferFunctionProxy_MapControlPointsToLogSpace, METH_VARARGS,
   (char*)"V.MapControlPointsToLogSpace(bool) -> bool\nC++: virtual bool MapControlPointsToLogSpace(bool inverse=false)\nV.MapControlPointsToLogSpace(vtkSMProxy, bool) -> bool\nC++: static bool MapControlPointsToLogSpace(vtkSMProxy *proxy,\n    bool inverse=false)\n\nRemaps control points by normalizing in linear-space and then\ninterpolating in log-space. This is useful when converting the\ntransfer function from linear- to log-mode. If inverse is true,\nthe operation is reversed i.e. the control points are normalized\nin log-space and interpolated in linear-space, useful when\nconverting from log- to linear-mode.\n"},
  {(char*)"MapControlPointsToLinearSpace", PyvtkSMTransferFunctionProxy_MapControlPointsToLinearSpace, METH_VARARGS,
   (char*)"V.MapControlPointsToLinearSpace() -> bool\nC++: virtual bool MapControlPointsToLinearSpace()\nV.MapControlPointsToLinearSpace(vtkSMProxy) -> bool\nC++: static bool MapControlPointsToLinearSpace(vtkSMProxy *proxy)\n\nRemaps control points by normalizing in linear-space and then\ninterpolating in log-space. This is useful when converting the\ntransfer function from linear- to log-mode. If inverse is true,\nthe operation is reversed i.e. the control points are normalized\nin log-space and interpolated in linear-space, useful when\nconverting from log- to linear-mode.\n"},
  {(char*)"ApplyColorMap", PyvtkSMTransferFunctionProxy_ApplyColorMap, METH_VARARGS,
   (char*)"V.ApplyColorMap(string) -> bool\nC++: virtual bool ApplyColorMap(const char *text)\nV.ApplyColorMap(vtkPVXMLElement) -> bool\nC++: virtual bool ApplyColorMap(vtkPVXMLElement *xml)\nV.ApplyColorMap(vtkSMProxy, string) -> bool\nC++: static bool ApplyColorMap(vtkSMProxy *proxy,\n    const char *text)\nV.ApplyColorMap(vtkSMProxy, vtkPVXMLElement) -> bool\nC++: static bool ApplyColorMap(vtkSMProxy *proxy,\n    vtkPVXMLElement *xml)\n\nLoad a ColorMap XML. This will update a transfer function using\nthe ColorMap XML. Currently, this is only supported for color\ntransfer functions. Returns true on success.\n"},
  {(char*)"SaveColorMap", PyvtkSMTransferFunctionProxy_SaveColorMap, METH_VARARGS,
   (char*)"V.SaveColorMap(vtkPVXMLElement) -> bool\nC++: virtual bool SaveColorMap(vtkPVXMLElement *xml)\nV.SaveColorMap(vtkSMProxy, vtkPVXMLElement) -> bool\nC++: static bool SaveColorMap(vtkSMProxy *proxy,\n    vtkPVXMLElement *xml)\n\nSave to ColorMap XML. Currently, this is only supported for color\ntransfer functions. Returns true on success.\n"},
  {(char*)"IsScalarBarVisible", PyvtkSMTransferFunctionProxy_IsScalarBarVisible, METH_VARARGS,
   (char*)"V.IsScalarBarVisible(vtkSMProxy) -> bool\nC++: virtual bool IsScalarBarVisible(vtkSMProxy *view)\nV.IsScalarBarVisible(vtkSMProxy, vtkSMProxy) -> bool\nC++: static bool IsScalarBarVisible(vtkSMProxy *proxy,\n    vtkSMProxy *view)\n\nReturn true if the representation corresponding to the transfer\nfunction for the view is showing a Scalar-Bar (Color Legend). \nOtherwise return false.\n"},
  {(char*)"FindScalarBarRepresentation", PyvtkSMTransferFunctionProxy_FindScalarBarRepresentation, METH_VARARGS,
   (char*)"V.FindScalarBarRepresentation(vtkSMProxy) -> vtkSMProxy\nC++: virtual vtkSMProxy *FindScalarBarRepresentation(\n    vtkSMProxy *view)\nV.FindScalarBarRepresentation(vtkSMProxy, vtkSMProxy)\n    -> vtkSMProxy\nC++: static vtkSMProxy *FindScalarBarRepresentation(\n    vtkSMProxy *proxy, vtkSMProxy *view)\n\nFind and return the Scalar-Bar (Color Legend) representation\ncorresponding to the transfer function for the view, if any. This\nreturns the proxy if one exists, it won't create a new one.\n"},
  {(char*)"UpdateScalarBarsComponentTitle", PyvtkSMTransferFunctionProxy_UpdateScalarBarsComponentTitle, METH_VARARGS,
   (char*)"V.UpdateScalarBarsComponentTitle(vtkPVArrayInformation) -> bool\nC++: virtual bool UpdateScalarBarsComponentTitle(\n    vtkPVArrayInformation *arrayInfo)\nV.UpdateScalarBarsComponentTitle(vtkSMProxy,\n    vtkPVArrayInformation) -> bool\nC++: static bool UpdateScalarBarsComponentTitle(vtkSMProxy *proxy,\n     vtkPVArrayInformation *arrayInfo)\n\nUpdate component titles for all scalar bars connected to this\ntransfer function proxy. The arrayInfo is used to determine\ncomponent names, if possible.\n"},
  {(char*)"ComputeDataRange", PyvtkSMTransferFunctionProxy_ComputeDataRange, METH_VARARGS,
   (char*)"V.ComputeDataRange([float, float]) -> bool\nC++: virtual bool ComputeDataRange(double range[2])\nV.ComputeDataRange(vtkSMProxy, [float, float]) -> bool\nC++: static bool ComputeDataRange(vtkSMProxy *proxy,\n    double range[2])\n\nHelper method used by RescaleTransferFunctionToDataRange() to\ncompute range from all visible representations using the transfer\nfunction. Returns true if a valid range was determined.\n"},
  {(char*)"ResetPropertiesToXMLDefaults", PyvtkSMTransferFunctionProxy_ResetPropertiesToXMLDefaults, METH_VARARGS,
   (char*)"V.ResetPropertiesToXMLDefaults(bool)\nC++: virtual void ResetPropertiesToXMLDefaults(\n    bool preserve_range)\nV.ResetPropertiesToXMLDefaults(vtkSMProxy, bool)\nC++: static void ResetPropertiesToXMLDefaults(vtkSMProxy *proxy,\n    bool preserve_range=false)\n\nHelper method to reset a transfer function proxy to its XML\ndefaults. By passing in preserve_range, you can make this method\npreserve the current transfer function range.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkSMTransferFunctionProxy_StaticNew()
{
  return vtkSMTransferFunctionProxy::New();
}

PyObject *PyVTKClass_vtkSMTransferFunctionProxyNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkSMTransferFunctionProxy_StaticNew,
    PyvtkSMTransferFunctionProxy_Methods,
    "vtkSMTransferFunctionProxy", modulename,
    NULL, NULL,
    PyvtkSMTransferFunctionProxy_Doc(),
    PyVTKClass_vtkSMProxyNew(modulename));
  return cls;
}

const char **PyvtkSMTransferFunctionProxy_Doc()
{
  static const char *docstring[] = {
    "vtkSMTransferFunctionProxy\n\n",
    "Superclass: vtkSMProxy\n\n",
    "vtkSMTransferFunctionProxy is the proxy used for \"PVLookupTable\",\n\"ColorTransferFunction\" and \"PiecewiseFunction\". It provides utility\nAPI to update lookup-table ranges, invert transfer function, etc.\nthat can be used from C++ as well as Python layers.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkSMTransferFunctionProxy(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkSMTransferFunctionProxyNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkSMTransferFunctionProxy", o) != 0)
    {
    Py_DECREF(o);
    }

}

