// python wrapper for vtkImageThresholdConnectivity
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkImageThresholdConnectivity.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkImageThresholdConnectivity(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkImageThresholdConnectivityNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkImageAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkImageAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkImageAlgorithmNew
#endif

static const char **PyvtkImageThresholdConnectivity_Doc();


static PyObject *
PyvtkImageThresholdConnectivity_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageThresholdConnectivity *op = static_cast<vtkImageThresholdConnectivity *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkImageThresholdConnectivity::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageThresholdConnectivity_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageThresholdConnectivity *op = static_cast<vtkImageThresholdConnectivity *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkImageThresholdConnectivity::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageThresholdConnectivity_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageThresholdConnectivity *op = static_cast<vtkImageThresholdConnectivity *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkImageThresholdConnectivity *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkImageThresholdConnectivity::NewInstance());

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
PyvtkImageThresholdConnectivity_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkImageThresholdConnectivity *tempr = vtkImageThresholdConnectivity::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageThresholdConnectivity_SetSeedPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSeedPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageThresholdConnectivity *op = static_cast<vtkImageThresholdConnectivity *>(vp);

  vtkPoints *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPoints"))
    {
    if (ap.IsBound())
      {
      op->SetSeedPoints(temp0);
      }
    else
      {
      op->vtkImageThresholdConnectivity::SetSeedPoints(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageThresholdConnectivity_GetSeedPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSeedPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageThresholdConnectivity *op = static_cast<vtkImageThresholdConnectivity *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPoints *tempr = (ap.IsBound() ?
      op->GetSeedPoints() :
      op->vtkImageThresholdConnectivity::GetSeedPoints());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageThresholdConnectivity_ThresholdByUpper(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ThresholdByUpper");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageThresholdConnectivity *op = static_cast<vtkImageThresholdConnectivity *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->ThresholdByUpper(temp0);
      }
    else
      {
      op->vtkImageThresholdConnectivity::ThresholdByUpper(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageThresholdConnectivity_ThresholdByLower(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ThresholdByLower");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageThresholdConnectivity *op = static_cast<vtkImageThresholdConnectivity *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->ThresholdByLower(temp0);
      }
    else
      {
      op->vtkImageThresholdConnectivity::ThresholdByLower(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageThresholdConnectivity_ThresholdBetween(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ThresholdBetween");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageThresholdConnectivity *op = static_cast<vtkImageThresholdConnectivity *>(vp);

  double temp0;
  double temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->ThresholdBetween(temp0, temp1);
      }
    else
      {
      op->vtkImageThresholdConnectivity::ThresholdBetween(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageThresholdConnectivity_SetReplaceIn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetReplaceIn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageThresholdConnectivity *op = static_cast<vtkImageThresholdConnectivity *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetReplaceIn(temp0);
      }
    else
      {
      op->vtkImageThresholdConnectivity::SetReplaceIn(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageThresholdConnectivity_GetReplaceIn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetReplaceIn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageThresholdConnectivity *op = static_cast<vtkImageThresholdConnectivity *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetReplaceIn() :
      op->vtkImageThresholdConnectivity::GetReplaceIn());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageThresholdConnectivity_ReplaceInOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReplaceInOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageThresholdConnectivity *op = static_cast<vtkImageThresholdConnectivity *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ReplaceInOn();
      }
    else
      {
      op->vtkImageThresholdConnectivity::ReplaceInOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageThresholdConnectivity_ReplaceInOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReplaceInOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageThresholdConnectivity *op = static_cast<vtkImageThresholdConnectivity *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ReplaceInOff();
      }
    else
      {
      op->vtkImageThresholdConnectivity::ReplaceInOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageThresholdConnectivity_SetInValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageThresholdConnectivity *op = static_cast<vtkImageThresholdConnectivity *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetInValue(temp0);
      }
    else
      {
      op->vtkImageThresholdConnectivity::SetInValue(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageThresholdConnectivity_GetInValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageThresholdConnectivity *op = static_cast<vtkImageThresholdConnectivity *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetInValue() :
      op->vtkImageThresholdConnectivity::GetInValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageThresholdConnectivity_SetReplaceOut(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetReplaceOut");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageThresholdConnectivity *op = static_cast<vtkImageThresholdConnectivity *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetReplaceOut(temp0);
      }
    else
      {
      op->vtkImageThresholdConnectivity::SetReplaceOut(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageThresholdConnectivity_GetReplaceOut(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetReplaceOut");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageThresholdConnectivity *op = static_cast<vtkImageThresholdConnectivity *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetReplaceOut() :
      op->vtkImageThresholdConnectivity::GetReplaceOut());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageThresholdConnectivity_ReplaceOutOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReplaceOutOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageThresholdConnectivity *op = static_cast<vtkImageThresholdConnectivity *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ReplaceOutOn();
      }
    else
      {
      op->vtkImageThresholdConnectivity::ReplaceOutOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageThresholdConnectivity_ReplaceOutOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReplaceOutOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageThresholdConnectivity *op = static_cast<vtkImageThresholdConnectivity *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ReplaceOutOff();
      }
    else
      {
      op->vtkImageThresholdConnectivity::ReplaceOutOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageThresholdConnectivity_SetOutValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageThresholdConnectivity *op = static_cast<vtkImageThresholdConnectivity *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetOutValue(temp0);
      }
    else
      {
      op->vtkImageThresholdConnectivity::SetOutValue(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageThresholdConnectivity_GetOutValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageThresholdConnectivity *op = static_cast<vtkImageThresholdConnectivity *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetOutValue() :
      op->vtkImageThresholdConnectivity::GetOutValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageThresholdConnectivity_GetUpperThreshold(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUpperThreshold");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageThresholdConnectivity *op = static_cast<vtkImageThresholdConnectivity *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetUpperThreshold() :
      op->vtkImageThresholdConnectivity::GetUpperThreshold());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageThresholdConnectivity_GetLowerThreshold(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLowerThreshold");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageThresholdConnectivity *op = static_cast<vtkImageThresholdConnectivity *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetLowerThreshold() :
      op->vtkImageThresholdConnectivity::GetLowerThreshold());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageThresholdConnectivity_SetSliceRangeX_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSliceRangeX");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageThresholdConnectivity *op = static_cast<vtkImageThresholdConnectivity *>(vp);

  int temp0;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetSliceRangeX(temp0, temp1);
      }
    else
      {
      op->vtkImageThresholdConnectivity::SetSliceRangeX(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkImageThresholdConnectivity_SetSliceRangeX_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSliceRangeX");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageThresholdConnectivity *op = static_cast<vtkImageThresholdConnectivity *>(vp);

  int temp0[2];
  const int size0 = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetSliceRangeX(temp0);
      }
    else
      {
      op->vtkImageThresholdConnectivity::SetSliceRangeX(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkImageThresholdConnectivity_SetSliceRangeX(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkImageThresholdConnectivity_SetSliceRangeX_s1(self, args);
    case 1:
      return PyvtkImageThresholdConnectivity_SetSliceRangeX_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetSliceRangeX");
  return NULL;
}



static PyObject *
PyvtkImageThresholdConnectivity_GetSliceRangeX(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSliceRangeX");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageThresholdConnectivity *op = static_cast<vtkImageThresholdConnectivity *>(vp);

  int sizer = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int *tempr = (ap.IsBound() ?
      op->GetSliceRangeX() :
      op->vtkImageThresholdConnectivity::GetSliceRangeX());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkImageThresholdConnectivity_SetSliceRangeY_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSliceRangeY");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageThresholdConnectivity *op = static_cast<vtkImageThresholdConnectivity *>(vp);

  int temp0;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetSliceRangeY(temp0, temp1);
      }
    else
      {
      op->vtkImageThresholdConnectivity::SetSliceRangeY(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkImageThresholdConnectivity_SetSliceRangeY_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSliceRangeY");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageThresholdConnectivity *op = static_cast<vtkImageThresholdConnectivity *>(vp);

  int temp0[2];
  const int size0 = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetSliceRangeY(temp0);
      }
    else
      {
      op->vtkImageThresholdConnectivity::SetSliceRangeY(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkImageThresholdConnectivity_SetSliceRangeY(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkImageThresholdConnectivity_SetSliceRangeY_s1(self, args);
    case 1:
      return PyvtkImageThresholdConnectivity_SetSliceRangeY_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetSliceRangeY");
  return NULL;
}



static PyObject *
PyvtkImageThresholdConnectivity_GetSliceRangeY(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSliceRangeY");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageThresholdConnectivity *op = static_cast<vtkImageThresholdConnectivity *>(vp);

  int sizer = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int *tempr = (ap.IsBound() ?
      op->GetSliceRangeY() :
      op->vtkImageThresholdConnectivity::GetSliceRangeY());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkImageThresholdConnectivity_SetSliceRangeZ_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSliceRangeZ");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageThresholdConnectivity *op = static_cast<vtkImageThresholdConnectivity *>(vp);

  int temp0;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetSliceRangeZ(temp0, temp1);
      }
    else
      {
      op->vtkImageThresholdConnectivity::SetSliceRangeZ(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkImageThresholdConnectivity_SetSliceRangeZ_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSliceRangeZ");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageThresholdConnectivity *op = static_cast<vtkImageThresholdConnectivity *>(vp);

  int temp0[2];
  const int size0 = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetSliceRangeZ(temp0);
      }
    else
      {
      op->vtkImageThresholdConnectivity::SetSliceRangeZ(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkImageThresholdConnectivity_SetSliceRangeZ(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkImageThresholdConnectivity_SetSliceRangeZ_s1(self, args);
    case 1:
      return PyvtkImageThresholdConnectivity_SetSliceRangeZ_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetSliceRangeZ");
  return NULL;
}



static PyObject *
PyvtkImageThresholdConnectivity_GetSliceRangeZ(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSliceRangeZ");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageThresholdConnectivity *op = static_cast<vtkImageThresholdConnectivity *>(vp);

  int sizer = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int *tempr = (ap.IsBound() ?
      op->GetSliceRangeZ() :
      op->vtkImageThresholdConnectivity::GetSliceRangeZ());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkImageThresholdConnectivity_SetStencilData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetStencilData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageThresholdConnectivity *op = static_cast<vtkImageThresholdConnectivity *>(vp);

  vtkImageStencilData *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkImageStencilData"))
    {
    if (ap.IsBound())
      {
      op->SetStencilData(temp0);
      }
    else
      {
      op->vtkImageThresholdConnectivity::SetStencilData(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageThresholdConnectivity_GetStencil(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStencil");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageThresholdConnectivity *op = static_cast<vtkImageThresholdConnectivity *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkImageStencilData *tempr = (ap.IsBound() ?
      op->GetStencil() :
      op->vtkImageThresholdConnectivity::GetStencil());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageThresholdConnectivity_SetActiveComponent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetActiveComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageThresholdConnectivity *op = static_cast<vtkImageThresholdConnectivity *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetActiveComponent(temp0);
      }
    else
      {
      op->vtkImageThresholdConnectivity::SetActiveComponent(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageThresholdConnectivity_GetActiveComponent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActiveComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageThresholdConnectivity *op = static_cast<vtkImageThresholdConnectivity *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetActiveComponent() :
      op->vtkImageThresholdConnectivity::GetActiveComponent());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageThresholdConnectivity_SetNeighborhoodRadius_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNeighborhoodRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageThresholdConnectivity *op = static_cast<vtkImageThresholdConnectivity *>(vp);

  double temp0;
  double temp1;
  double temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      op->SetNeighborhoodRadius(temp0, temp1, temp2);
      }
    else
      {
      op->vtkImageThresholdConnectivity::SetNeighborhoodRadius(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkImageThresholdConnectivity_SetNeighborhoodRadius_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNeighborhoodRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageThresholdConnectivity *op = static_cast<vtkImageThresholdConnectivity *>(vp);

  double temp0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetNeighborhoodRadius(temp0);
      }
    else
      {
      op->vtkImageThresholdConnectivity::SetNeighborhoodRadius(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkImageThresholdConnectivity_SetNeighborhoodRadius(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkImageThresholdConnectivity_SetNeighborhoodRadius_s1(self, args);
    case 1:
      return PyvtkImageThresholdConnectivity_SetNeighborhoodRadius_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetNeighborhoodRadius");
  return NULL;
}



static PyObject *
PyvtkImageThresholdConnectivity_GetNeighborhoodRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNeighborhoodRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageThresholdConnectivity *op = static_cast<vtkImageThresholdConnectivity *>(vp);

  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetNeighborhoodRadius() :
      op->vtkImageThresholdConnectivity::GetNeighborhoodRadius());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkImageThresholdConnectivity_SetNeighborhoodFraction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNeighborhoodFraction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageThresholdConnectivity *op = static_cast<vtkImageThresholdConnectivity *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetNeighborhoodFraction(temp0);
      }
    else
      {
      op->vtkImageThresholdConnectivity::SetNeighborhoodFraction(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageThresholdConnectivity_GetNeighborhoodFractionMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNeighborhoodFractionMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageThresholdConnectivity *op = static_cast<vtkImageThresholdConnectivity *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetNeighborhoodFractionMinValue() :
      op->vtkImageThresholdConnectivity::GetNeighborhoodFractionMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageThresholdConnectivity_GetNeighborhoodFractionMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNeighborhoodFractionMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageThresholdConnectivity *op = static_cast<vtkImageThresholdConnectivity *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetNeighborhoodFractionMaxValue() :
      op->vtkImageThresholdConnectivity::GetNeighborhoodFractionMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageThresholdConnectivity_GetNeighborhoodFraction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNeighborhoodFraction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageThresholdConnectivity *op = static_cast<vtkImageThresholdConnectivity *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetNeighborhoodFraction() :
      op->vtkImageThresholdConnectivity::GetNeighborhoodFraction());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageThresholdConnectivity_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageThresholdConnectivity *op = static_cast<vtkImageThresholdConnectivity *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMTime() :
      op->vtkImageThresholdConnectivity::GetMTime());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageThresholdConnectivity_GetNumberOfInVoxels(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfInVoxels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageThresholdConnectivity *op = static_cast<vtkImageThresholdConnectivity *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfInVoxels() :
      op->vtkImageThresholdConnectivity::GetNumberOfInVoxels());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkImageThresholdConnectivity_Methods[] = {
  {(char*)"GetClassName", PyvtkImageThresholdConnectivity_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkImageThresholdConnectivity_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkImageThresholdConnectivity_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkImageThresholdConnectivity\nC++: vtkImageThresholdConnectivity *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkImageThresholdConnectivity_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkImageThresholdConnectivity\nC++: vtkImageThresholdConnectivity *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetSeedPoints", PyvtkImageThresholdConnectivity_SetSeedPoints, METH_VARARGS,
   (char*)"V.SetSeedPoints(vtkPoints)\nC++: void SetSeedPoints(vtkPoints *points)\n\nSet the seeds.  The seeds are in real data coordinates, not in\nvoxel index locations.\n"},
  {(char*)"GetSeedPoints", PyvtkImageThresholdConnectivity_GetSeedPoints, METH_VARARGS,
   (char*)"V.GetSeedPoints() -> vtkPoints\nC++: vtkPoints *GetSeedPoints()\n\nSet the seeds.  The seeds are in real data coordinates, not in\nvoxel index locations.\n"},
  {(char*)"ThresholdByUpper", PyvtkImageThresholdConnectivity_ThresholdByUpper, METH_VARARGS,
   (char*)"V.ThresholdByUpper(float)\nC++: void ThresholdByUpper(double thresh)\n\nValues greater than or equal to this threshold will be filled.\n"},
  {(char*)"ThresholdByLower", PyvtkImageThresholdConnectivity_ThresholdByLower, METH_VARARGS,
   (char*)"V.ThresholdByLower(float)\nC++: void ThresholdByLower(double thresh)\n\nValues less than or equal to this threshold will be filled.\n"},
  {(char*)"ThresholdBetween", PyvtkImageThresholdConnectivity_ThresholdBetween, METH_VARARGS,
   (char*)"V.ThresholdBetween(float, float)\nC++: void ThresholdBetween(double lower, double upper)\n\nValues within this range will be filled, where the range inludes\nvalues that are exactly equal to the lower and upper thresholds.\n"},
  {(char*)"SetReplaceIn", PyvtkImageThresholdConnectivity_SetReplaceIn, METH_VARARGS,
   (char*)"V.SetReplaceIn(int)\nC++: void SetReplaceIn(int a)\n\nReplace the filled region by the value set by SetInValue().\n"},
  {(char*)"GetReplaceIn", PyvtkImageThresholdConnectivity_GetReplaceIn, METH_VARARGS,
   (char*)"V.GetReplaceIn() -> int\nC++: int GetReplaceIn()\n\nReplace the filled region by the value set by SetInValue().\n"},
  {(char*)"ReplaceInOn", PyvtkImageThresholdConnectivity_ReplaceInOn, METH_VARARGS,
   (char*)"V.ReplaceInOn()\nC++: void ReplaceInOn()\n\nReplace the filled region by the value set by SetInValue().\n"},
  {(char*)"ReplaceInOff", PyvtkImageThresholdConnectivity_ReplaceInOff, METH_VARARGS,
   (char*)"V.ReplaceInOff()\nC++: void ReplaceInOff()\n\nReplace the filled region by the value set by SetInValue().\n"},
  {(char*)"SetInValue", PyvtkImageThresholdConnectivity_SetInValue, METH_VARARGS,
   (char*)"V.SetInValue(float)\nC++: void SetInValue(double val)\n\nIf ReplaceIn is set, the filled region will be replaced by this\nvalue.\n"},
  {(char*)"GetInValue", PyvtkImageThresholdConnectivity_GetInValue, METH_VARARGS,
   (char*)"V.GetInValue() -> float\nC++: double GetInValue()\n\nIf ReplaceIn is set, the filled region will be replaced by this\nvalue.\n"},
  {(char*)"SetReplaceOut", PyvtkImageThresholdConnectivity_SetReplaceOut, METH_VARARGS,
   (char*)"V.SetReplaceOut(int)\nC++: void SetReplaceOut(int a)\n\nReplace the filled region by the value set by SetInValue().\n"},
  {(char*)"GetReplaceOut", PyvtkImageThresholdConnectivity_GetReplaceOut, METH_VARARGS,
   (char*)"V.GetReplaceOut() -> int\nC++: int GetReplaceOut()\n\nReplace the filled region by the value set by SetInValue().\n"},
  {(char*)"ReplaceOutOn", PyvtkImageThresholdConnectivity_ReplaceOutOn, METH_VARARGS,
   (char*)"V.ReplaceOutOn()\nC++: void ReplaceOutOn()\n\nReplace the filled region by the value set by SetInValue().\n"},
  {(char*)"ReplaceOutOff", PyvtkImageThresholdConnectivity_ReplaceOutOff, METH_VARARGS,
   (char*)"V.ReplaceOutOff()\nC++: void ReplaceOutOff()\n\nReplace the filled region by the value set by SetInValue().\n"},
  {(char*)"SetOutValue", PyvtkImageThresholdConnectivity_SetOutValue, METH_VARARGS,
   (char*)"V.SetOutValue(float)\nC++: void SetOutValue(double val)\n\nIf ReplaceOut is set, outside the fill will be replaced by this\nvalue.\n"},
  {(char*)"GetOutValue", PyvtkImageThresholdConnectivity_GetOutValue, METH_VARARGS,
   (char*)"V.GetOutValue() -> float\nC++: double GetOutValue()\n\nIf ReplaceOut is set, outside the fill will be replaced by this\nvalue.\n"},
  {(char*)"GetUpperThreshold", PyvtkImageThresholdConnectivity_GetUpperThreshold, METH_VARARGS,
   (char*)"V.GetUpperThreshold() -> float\nC++: double GetUpperThreshold()\n\nGet the Upper and Lower thresholds.\n"},
  {(char*)"GetLowerThreshold", PyvtkImageThresholdConnectivity_GetLowerThreshold, METH_VARARGS,
   (char*)"V.GetLowerThreshold() -> float\nC++: double GetLowerThreshold()\n\nGet the Upper and Lower thresholds.\n"},
  {(char*)"SetSliceRangeX", PyvtkImageThresholdConnectivity_SetSliceRangeX, METH_VARARGS,
   (char*)"V.SetSliceRangeX(int, int)\nC++: void SetSliceRangeX(int, int)\nV.SetSliceRangeX((int, int))\nC++: void SetSliceRangeX(int a[2])\n\n"},
  {(char*)"GetSliceRangeX", PyvtkImageThresholdConnectivity_GetSliceRangeX, METH_VARARGS,
   (char*)"V.GetSliceRangeX() -> (int, int)\nC++: int *GetSliceRangeX()\n\n"},
  {(char*)"SetSliceRangeY", PyvtkImageThresholdConnectivity_SetSliceRangeY, METH_VARARGS,
   (char*)"V.SetSliceRangeY(int, int)\nC++: void SetSliceRangeY(int, int)\nV.SetSliceRangeY((int, int))\nC++: void SetSliceRangeY(int a[2])\n\n"},
  {(char*)"GetSliceRangeY", PyvtkImageThresholdConnectivity_GetSliceRangeY, METH_VARARGS,
   (char*)"V.GetSliceRangeY() -> (int, int)\nC++: int *GetSliceRangeY()\n\n"},
  {(char*)"SetSliceRangeZ", PyvtkImageThresholdConnectivity_SetSliceRangeZ, METH_VARARGS,
   (char*)"V.SetSliceRangeZ(int, int)\nC++: void SetSliceRangeZ(int, int)\nV.SetSliceRangeZ((int, int))\nC++: void SetSliceRangeZ(int a[2])\n\n"},
  {(char*)"GetSliceRangeZ", PyvtkImageThresholdConnectivity_GetSliceRangeZ, METH_VARARGS,
   (char*)"V.GetSliceRangeZ() -> (int, int)\nC++: int *GetSliceRangeZ()\n\n"},
  {(char*)"SetStencilData", PyvtkImageThresholdConnectivity_SetStencilData, METH_VARARGS,
   (char*)"V.SetStencilData(vtkImageStencilData)\nC++: virtual void SetStencilData(vtkImageStencilData *stencil)\n\nSpecify a stencil that will be used to limit the flood fill to an\narbitrarily-shaped region of the image.\n"},
  {(char*)"GetStencil", PyvtkImageThresholdConnectivity_GetStencil, METH_VARARGS,
   (char*)"V.GetStencil() -> vtkImageStencilData\nC++: vtkImageStencilData *GetStencil()\n\nSpecify a stencil that will be used to limit the flood fill to an\narbitrarily-shaped region of the image.\n"},
  {(char*)"SetActiveComponent", PyvtkImageThresholdConnectivity_SetActiveComponent, METH_VARARGS,
   (char*)"V.SetActiveComponent(int)\nC++: void SetActiveComponent(int a)\n\nFor multi-component images, you can set which component will be\nused for the threshold checks.\n"},
  {(char*)"GetActiveComponent", PyvtkImageThresholdConnectivity_GetActiveComponent, METH_VARARGS,
   (char*)"V.GetActiveComponent() -> int\nC++: int GetActiveComponent()\n\nFor multi-component images, you can set which component will be\nused for the threshold checks.\n"},
  {(char*)"SetNeighborhoodRadius", PyvtkImageThresholdConnectivity_SetNeighborhoodRadius, METH_VARARGS,
   (char*)"V.SetNeighborhoodRadius(float, float, float)\nC++: void SetNeighborhoodRadius(double, double, double)\nV.SetNeighborhoodRadius((float, float, float))\nC++: void SetNeighborhoodRadius(double a[3])\n\n"},
  {(char*)"GetNeighborhoodRadius", PyvtkImageThresholdConnectivity_GetNeighborhoodRadius, METH_VARARGS,
   (char*)"V.GetNeighborhoodRadius() -> (float, float, float)\nC++: double *GetNeighborhoodRadius()\n\n"},
  {(char*)"SetNeighborhoodFraction", PyvtkImageThresholdConnectivity_SetNeighborhoodFraction, METH_VARARGS,
   (char*)"V.SetNeighborhoodFraction(float)\nC++: void SetNeighborhoodFraction(double)\n\nThe fraction of the neighborhood that must be within the\nthresholds. The default value is 0.5.\n"},
  {(char*)"GetNeighborhoodFractionMinValue", PyvtkImageThresholdConnectivity_GetNeighborhoodFractionMinValue, METH_VARARGS,
   (char*)"V.GetNeighborhoodFractionMinValue() -> float\nC++: double GetNeighborhoodFractionMinValue()\n\nThe fraction of the neighborhood that must be within the\nthresholds. The default value is 0.5.\n"},
  {(char*)"GetNeighborhoodFractionMaxValue", PyvtkImageThresholdConnectivity_GetNeighborhoodFractionMaxValue, METH_VARARGS,
   (char*)"V.GetNeighborhoodFractionMaxValue() -> float\nC++: double GetNeighborhoodFractionMaxValue()\n\nThe fraction of the neighborhood that must be within the\nthresholds. The default value is 0.5.\n"},
  {(char*)"GetNeighborhoodFraction", PyvtkImageThresholdConnectivity_GetNeighborhoodFraction, METH_VARARGS,
   (char*)"V.GetNeighborhoodFraction() -> float\nC++: double GetNeighborhoodFraction()\n\nThe fraction of the neighborhood that must be within the\nthresholds. The default value is 0.5.\n"},
  {(char*)"GetMTime", PyvtkImageThresholdConnectivity_GetMTime, METH_VARARGS,
   (char*)"V.GetMTime() -> int\nC++: unsigned long GetMTime()\n\nOverride the MTime to account for the seed points.\n"},
  {(char*)"GetNumberOfInVoxels", PyvtkImageThresholdConnectivity_GetNumberOfInVoxels, METH_VARARGS,
   (char*)"V.GetNumberOfInVoxels() -> int\nC++: int GetNumberOfInVoxels()\n\nAfter the filter has executed, use GetNumberOfVoxels() to find\nout how many voxels were filled.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkImageThresholdConnectivity_StaticNew()
{
  return vtkImageThresholdConnectivity::New();
}

PyObject *PyVTKClass_vtkImageThresholdConnectivityNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkImageThresholdConnectivity_StaticNew,
    PyvtkImageThresholdConnectivity_Methods,
    "vtkImageThresholdConnectivity", modulename,
    NULL, NULL,
    PyvtkImageThresholdConnectivity_Doc(),
    PyVTKClass_vtkImageAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkImageThresholdConnectivity_Doc()
{
  static const char *docstring[] = {
    "vtkImageThresholdConnectivity - Flood fill an image region.\n\n",
    "Superclass: vtkImageAlgorithm\n\n",
    "vtkImageThresholdConnectivity will perform a flood fill on an image,\ngiven upper and lower pixel intensity thresholds. It works similarly\nto vtkImageThreshold, but also allows the user to set seed points to\nlimit the threshold operation to contiguous regions of the image. The\nfilled region, or the \"inside\", will be passed through to the output\nby default, while the \"outside\" will be replaced with ",
    "zeros. This\nbehavior can be changed by using the ReplaceIn() and ReplaceOut()\nmethods.  The scalar type of the output is the same as the input.\n\nSee Also:\n\nvtkImageThreshold\n\nThanks:\n\nThanks to David Gobbi for contributing this class to VTK.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkImageThresholdConnectivity(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkImageThresholdConnectivityNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkImageThresholdConnectivity", o) != 0)
    {
    Py_DECREF(o);
    }

}

