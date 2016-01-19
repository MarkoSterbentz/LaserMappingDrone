// python wrapper for vtkFixedPointVolumeRayCastMapper
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkFixedPointVolumeRayCastMapper.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkFixedPointVolumeRayCastMapper(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkFixedPointVolumeRayCastMapperNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkVolumeMapperNew
extern "C" { PyObject *PyVTKClass_vtkVolumeMapperNew(const char *); }
#define DECLARED_PyVTKClass_vtkVolumeMapperNew
#endif

static const char **PyvtkFixedPointVolumeRayCastMapper_Doc();


static PyObject *
PyvtkFixedPointVolumeRayCastMapper_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointVolumeRayCastMapper *op = static_cast<vtkFixedPointVolumeRayCastMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkFixedPointVolumeRayCastMapper::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkFixedPointVolumeRayCastMapper_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointVolumeRayCastMapper *op = static_cast<vtkFixedPointVolumeRayCastMapper *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkFixedPointVolumeRayCastMapper::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkFixedPointVolumeRayCastMapper_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointVolumeRayCastMapper *op = static_cast<vtkFixedPointVolumeRayCastMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkFixedPointVolumeRayCastMapper *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkFixedPointVolumeRayCastMapper::NewInstance());

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
PyvtkFixedPointVolumeRayCastMapper_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkFixedPointVolumeRayCastMapper *tempr = vtkFixedPointVolumeRayCastMapper::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkFixedPointVolumeRayCastMapper_SetSampleDistance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSampleDistance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointVolumeRayCastMapper *op = static_cast<vtkFixedPointVolumeRayCastMapper *>(vp);

  float temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetSampleDistance(temp0);
      }
    else
      {
      op->vtkFixedPointVolumeRayCastMapper::SetSampleDistance(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkFixedPointVolumeRayCastMapper_GetSampleDistance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSampleDistance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointVolumeRayCastMapper *op = static_cast<vtkFixedPointVolumeRayCastMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    float tempr = (ap.IsBound() ?
      op->GetSampleDistance() :
      op->vtkFixedPointVolumeRayCastMapper::GetSampleDistance());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkFixedPointVolumeRayCastMapper_SetInteractiveSampleDistance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInteractiveSampleDistance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointVolumeRayCastMapper *op = static_cast<vtkFixedPointVolumeRayCastMapper *>(vp);

  float temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetInteractiveSampleDistance(temp0);
      }
    else
      {
      op->vtkFixedPointVolumeRayCastMapper::SetInteractiveSampleDistance(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkFixedPointVolumeRayCastMapper_GetInteractiveSampleDistance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInteractiveSampleDistance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointVolumeRayCastMapper *op = static_cast<vtkFixedPointVolumeRayCastMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    float tempr = (ap.IsBound() ?
      op->GetInteractiveSampleDistance() :
      op->vtkFixedPointVolumeRayCastMapper::GetInteractiveSampleDistance());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkFixedPointVolumeRayCastMapper_SetImageSampleDistance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetImageSampleDistance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointVolumeRayCastMapper *op = static_cast<vtkFixedPointVolumeRayCastMapper *>(vp);

  float temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetImageSampleDistance(temp0);
      }
    else
      {
      op->vtkFixedPointVolumeRayCastMapper::SetImageSampleDistance(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkFixedPointVolumeRayCastMapper_GetImageSampleDistanceMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetImageSampleDistanceMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointVolumeRayCastMapper *op = static_cast<vtkFixedPointVolumeRayCastMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    float tempr = (ap.IsBound() ?
      op->GetImageSampleDistanceMinValue() :
      op->vtkFixedPointVolumeRayCastMapper::GetImageSampleDistanceMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkFixedPointVolumeRayCastMapper_GetImageSampleDistanceMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetImageSampleDistanceMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointVolumeRayCastMapper *op = static_cast<vtkFixedPointVolumeRayCastMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    float tempr = (ap.IsBound() ?
      op->GetImageSampleDistanceMaxValue() :
      op->vtkFixedPointVolumeRayCastMapper::GetImageSampleDistanceMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkFixedPointVolumeRayCastMapper_GetImageSampleDistance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetImageSampleDistance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointVolumeRayCastMapper *op = static_cast<vtkFixedPointVolumeRayCastMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    float tempr = (ap.IsBound() ?
      op->GetImageSampleDistance() :
      op->vtkFixedPointVolumeRayCastMapper::GetImageSampleDistance());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkFixedPointVolumeRayCastMapper_SetMinimumImageSampleDistance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMinimumImageSampleDistance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointVolumeRayCastMapper *op = static_cast<vtkFixedPointVolumeRayCastMapper *>(vp);

  float temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetMinimumImageSampleDistance(temp0);
      }
    else
      {
      op->vtkFixedPointVolumeRayCastMapper::SetMinimumImageSampleDistance(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkFixedPointVolumeRayCastMapper_GetMinimumImageSampleDistanceMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMinimumImageSampleDistanceMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointVolumeRayCastMapper *op = static_cast<vtkFixedPointVolumeRayCastMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    float tempr = (ap.IsBound() ?
      op->GetMinimumImageSampleDistanceMinValue() :
      op->vtkFixedPointVolumeRayCastMapper::GetMinimumImageSampleDistanceMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkFixedPointVolumeRayCastMapper_GetMinimumImageSampleDistanceMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMinimumImageSampleDistanceMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointVolumeRayCastMapper *op = static_cast<vtkFixedPointVolumeRayCastMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    float tempr = (ap.IsBound() ?
      op->GetMinimumImageSampleDistanceMaxValue() :
      op->vtkFixedPointVolumeRayCastMapper::GetMinimumImageSampleDistanceMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkFixedPointVolumeRayCastMapper_GetMinimumImageSampleDistance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMinimumImageSampleDistance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointVolumeRayCastMapper *op = static_cast<vtkFixedPointVolumeRayCastMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    float tempr = (ap.IsBound() ?
      op->GetMinimumImageSampleDistance() :
      op->vtkFixedPointVolumeRayCastMapper::GetMinimumImageSampleDistance());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkFixedPointVolumeRayCastMapper_SetMaximumImageSampleDistance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaximumImageSampleDistance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointVolumeRayCastMapper *op = static_cast<vtkFixedPointVolumeRayCastMapper *>(vp);

  float temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetMaximumImageSampleDistance(temp0);
      }
    else
      {
      op->vtkFixedPointVolumeRayCastMapper::SetMaximumImageSampleDistance(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkFixedPointVolumeRayCastMapper_GetMaximumImageSampleDistanceMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumImageSampleDistanceMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointVolumeRayCastMapper *op = static_cast<vtkFixedPointVolumeRayCastMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    float tempr = (ap.IsBound() ?
      op->GetMaximumImageSampleDistanceMinValue() :
      op->vtkFixedPointVolumeRayCastMapper::GetMaximumImageSampleDistanceMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkFixedPointVolumeRayCastMapper_GetMaximumImageSampleDistanceMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumImageSampleDistanceMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointVolumeRayCastMapper *op = static_cast<vtkFixedPointVolumeRayCastMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    float tempr = (ap.IsBound() ?
      op->GetMaximumImageSampleDistanceMaxValue() :
      op->vtkFixedPointVolumeRayCastMapper::GetMaximumImageSampleDistanceMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkFixedPointVolumeRayCastMapper_GetMaximumImageSampleDistance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumImageSampleDistance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointVolumeRayCastMapper *op = static_cast<vtkFixedPointVolumeRayCastMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    float tempr = (ap.IsBound() ?
      op->GetMaximumImageSampleDistance() :
      op->vtkFixedPointVolumeRayCastMapper::GetMaximumImageSampleDistance());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkFixedPointVolumeRayCastMapper_SetAutoAdjustSampleDistances(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAutoAdjustSampleDistances");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointVolumeRayCastMapper *op = static_cast<vtkFixedPointVolumeRayCastMapper *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetAutoAdjustSampleDistances(temp0);
      }
    else
      {
      op->vtkFixedPointVolumeRayCastMapper::SetAutoAdjustSampleDistances(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkFixedPointVolumeRayCastMapper_GetAutoAdjustSampleDistancesMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAutoAdjustSampleDistancesMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointVolumeRayCastMapper *op = static_cast<vtkFixedPointVolumeRayCastMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetAutoAdjustSampleDistancesMinValue() :
      op->vtkFixedPointVolumeRayCastMapper::GetAutoAdjustSampleDistancesMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkFixedPointVolumeRayCastMapper_GetAutoAdjustSampleDistancesMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAutoAdjustSampleDistancesMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointVolumeRayCastMapper *op = static_cast<vtkFixedPointVolumeRayCastMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetAutoAdjustSampleDistancesMaxValue() :
      op->vtkFixedPointVolumeRayCastMapper::GetAutoAdjustSampleDistancesMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkFixedPointVolumeRayCastMapper_GetAutoAdjustSampleDistances(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAutoAdjustSampleDistances");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointVolumeRayCastMapper *op = static_cast<vtkFixedPointVolumeRayCastMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetAutoAdjustSampleDistances() :
      op->vtkFixedPointVolumeRayCastMapper::GetAutoAdjustSampleDistances());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkFixedPointVolumeRayCastMapper_AutoAdjustSampleDistancesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AutoAdjustSampleDistancesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointVolumeRayCastMapper *op = static_cast<vtkFixedPointVolumeRayCastMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->AutoAdjustSampleDistancesOn();
      }
    else
      {
      op->vtkFixedPointVolumeRayCastMapper::AutoAdjustSampleDistancesOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkFixedPointVolumeRayCastMapper_AutoAdjustSampleDistancesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AutoAdjustSampleDistancesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointVolumeRayCastMapper *op = static_cast<vtkFixedPointVolumeRayCastMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->AutoAdjustSampleDistancesOff();
      }
    else
      {
      op->vtkFixedPointVolumeRayCastMapper::AutoAdjustSampleDistancesOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkFixedPointVolumeRayCastMapper_SetLockSampleDistanceToInputSpacing(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLockSampleDistanceToInputSpacing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointVolumeRayCastMapper *op = static_cast<vtkFixedPointVolumeRayCastMapper *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetLockSampleDistanceToInputSpacing(temp0);
      }
    else
      {
      op->vtkFixedPointVolumeRayCastMapper::SetLockSampleDistanceToInputSpacing(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkFixedPointVolumeRayCastMapper_GetLockSampleDistanceToInputSpacingMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLockSampleDistanceToInputSpacingMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointVolumeRayCastMapper *op = static_cast<vtkFixedPointVolumeRayCastMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetLockSampleDistanceToInputSpacingMinValue() :
      op->vtkFixedPointVolumeRayCastMapper::GetLockSampleDistanceToInputSpacingMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkFixedPointVolumeRayCastMapper_GetLockSampleDistanceToInputSpacingMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLockSampleDistanceToInputSpacingMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointVolumeRayCastMapper *op = static_cast<vtkFixedPointVolumeRayCastMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetLockSampleDistanceToInputSpacingMaxValue() :
      op->vtkFixedPointVolumeRayCastMapper::GetLockSampleDistanceToInputSpacingMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkFixedPointVolumeRayCastMapper_GetLockSampleDistanceToInputSpacing(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLockSampleDistanceToInputSpacing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointVolumeRayCastMapper *op = static_cast<vtkFixedPointVolumeRayCastMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetLockSampleDistanceToInputSpacing() :
      op->vtkFixedPointVolumeRayCastMapper::GetLockSampleDistanceToInputSpacing());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkFixedPointVolumeRayCastMapper_LockSampleDistanceToInputSpacingOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LockSampleDistanceToInputSpacingOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointVolumeRayCastMapper *op = static_cast<vtkFixedPointVolumeRayCastMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->LockSampleDistanceToInputSpacingOn();
      }
    else
      {
      op->vtkFixedPointVolumeRayCastMapper::LockSampleDistanceToInputSpacingOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkFixedPointVolumeRayCastMapper_LockSampleDistanceToInputSpacingOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LockSampleDistanceToInputSpacingOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointVolumeRayCastMapper *op = static_cast<vtkFixedPointVolumeRayCastMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->LockSampleDistanceToInputSpacingOff();
      }
    else
      {
      op->vtkFixedPointVolumeRayCastMapper::LockSampleDistanceToInputSpacingOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkFixedPointVolumeRayCastMapper_SetNumberOfThreads(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfThreads");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointVolumeRayCastMapper *op = static_cast<vtkFixedPointVolumeRayCastMapper *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetNumberOfThreads(temp0);
      }
    else
      {
      op->vtkFixedPointVolumeRayCastMapper::SetNumberOfThreads(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkFixedPointVolumeRayCastMapper_GetNumberOfThreads(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfThreads");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointVolumeRayCastMapper *op = static_cast<vtkFixedPointVolumeRayCastMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfThreads() :
      op->vtkFixedPointVolumeRayCastMapper::GetNumberOfThreads());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkFixedPointVolumeRayCastMapper_SetIntermixIntersectingGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIntermixIntersectingGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointVolumeRayCastMapper *op = static_cast<vtkFixedPointVolumeRayCastMapper *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetIntermixIntersectingGeometry(temp0);
      }
    else
      {
      op->vtkFixedPointVolumeRayCastMapper::SetIntermixIntersectingGeometry(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkFixedPointVolumeRayCastMapper_GetIntermixIntersectingGeometryMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIntermixIntersectingGeometryMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointVolumeRayCastMapper *op = static_cast<vtkFixedPointVolumeRayCastMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetIntermixIntersectingGeometryMinValue() :
      op->vtkFixedPointVolumeRayCastMapper::GetIntermixIntersectingGeometryMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkFixedPointVolumeRayCastMapper_GetIntermixIntersectingGeometryMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIntermixIntersectingGeometryMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointVolumeRayCastMapper *op = static_cast<vtkFixedPointVolumeRayCastMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetIntermixIntersectingGeometryMaxValue() :
      op->vtkFixedPointVolumeRayCastMapper::GetIntermixIntersectingGeometryMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkFixedPointVolumeRayCastMapper_GetIntermixIntersectingGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIntermixIntersectingGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointVolumeRayCastMapper *op = static_cast<vtkFixedPointVolumeRayCastMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetIntermixIntersectingGeometry() :
      op->vtkFixedPointVolumeRayCastMapper::GetIntermixIntersectingGeometry());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkFixedPointVolumeRayCastMapper_IntermixIntersectingGeometryOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IntermixIntersectingGeometryOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointVolumeRayCastMapper *op = static_cast<vtkFixedPointVolumeRayCastMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->IntermixIntersectingGeometryOn();
      }
    else
      {
      op->vtkFixedPointVolumeRayCastMapper::IntermixIntersectingGeometryOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkFixedPointVolumeRayCastMapper_IntermixIntersectingGeometryOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IntermixIntersectingGeometryOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointVolumeRayCastMapper *op = static_cast<vtkFixedPointVolumeRayCastMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->IntermixIntersectingGeometryOff();
      }
    else
      {
      op->vtkFixedPointVolumeRayCastMapper::IntermixIntersectingGeometryOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkFixedPointVolumeRayCastMapper_ComputeRequiredImageSampleDistance_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeRequiredImageSampleDistance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointVolumeRayCastMapper *op = static_cast<vtkFixedPointVolumeRayCastMapper *>(vp);

  float temp0;
  vtkRenderer *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkRenderer"))
    {
    float tempr = (ap.IsBound() ?
      op->ComputeRequiredImageSampleDistance(temp0, temp1) :
      op->vtkFixedPointVolumeRayCastMapper::ComputeRequiredImageSampleDistance(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkFixedPointVolumeRayCastMapper_ComputeRequiredImageSampleDistance_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeRequiredImageSampleDistance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointVolumeRayCastMapper *op = static_cast<vtkFixedPointVolumeRayCastMapper *>(vp);

  float temp0;
  vtkRenderer *temp1 = NULL;
  vtkVolume *temp2 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkRenderer") &&
      ap.GetVTKObject(temp2, "vtkVolume"))
    {
    float tempr = (ap.IsBound() ?
      op->ComputeRequiredImageSampleDistance(temp0, temp1, temp2) :
      op->vtkFixedPointVolumeRayCastMapper::ComputeRequiredImageSampleDistance(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkFixedPointVolumeRayCastMapper_ComputeRequiredImageSampleDistance(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkFixedPointVolumeRayCastMapper_ComputeRequiredImageSampleDistance_s1(self, args);
    case 3:
      return PyvtkFixedPointVolumeRayCastMapper_ComputeRequiredImageSampleDistance_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "ComputeRequiredImageSampleDistance");
  return NULL;
}



static PyObject *
PyvtkFixedPointVolumeRayCastMapper_Render(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Render");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointVolumeRayCastMapper *op = static_cast<vtkFixedPointVolumeRayCastMapper *>(vp);

  vtkRenderer *temp0 = NULL;
  vtkVolume *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkRenderer") &&
      ap.GetVTKObject(temp1, "vtkVolume"))
    {
    if (ap.IsBound())
      {
      op->Render(temp0, temp1);
      }
    else
      {
      op->vtkFixedPointVolumeRayCastMapper::Render(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkFixedPointVolumeRayCastMapper_ToFixedPointPosition_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ToFixedPointPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointVolumeRayCastMapper *op = static_cast<vtkFixedPointVolumeRayCastMapper *>(vp);

  float temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    unsigned int tempr = (ap.IsBound() ?
      op->ToFixedPointPosition(temp0) :
      op->vtkFixedPointVolumeRayCastMapper::ToFixedPointPosition(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkFixedPointVolumeRayCastMapper_ToFixedPointPosition_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ToFixedPointPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointVolumeRayCastMapper *op = static_cast<vtkFixedPointVolumeRayCastMapper *>(vp);

  float temp0[3];
  float save0[3];
  const int size0 = 3;
  unsigned int temp1[3];
  unsigned int save1[3];
  const int size1 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1))
    {
    ap.SaveArray(temp0, save0, size0);
    ap.SaveArray(temp1, save1, size1);

    if (ap.IsBound())
      {
      op->ToFixedPointPosition(temp0, temp1);
      }
    else
      {
      op->vtkFixedPointVolumeRayCastMapper::ToFixedPointPosition(temp0, temp1);
      }

    if (ap.ArrayHasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(0, temp0, size0);
      }

    if (ap.ArrayHasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(1, temp1, size1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkFixedPointVolumeRayCastMapper_ToFixedPointPosition(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkFixedPointVolumeRayCastMapper_ToFixedPointPosition_s1(self, args);
    case 2:
      return PyvtkFixedPointVolumeRayCastMapper_ToFixedPointPosition_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "ToFixedPointPosition");
  return NULL;
}



static PyObject *
PyvtkFixedPointVolumeRayCastMapper_ToFixedPointDirection_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ToFixedPointDirection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointVolumeRayCastMapper *op = static_cast<vtkFixedPointVolumeRayCastMapper *>(vp);

  float temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    unsigned int tempr = (ap.IsBound() ?
      op->ToFixedPointDirection(temp0) :
      op->vtkFixedPointVolumeRayCastMapper::ToFixedPointDirection(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkFixedPointVolumeRayCastMapper_ToFixedPointDirection_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ToFixedPointDirection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointVolumeRayCastMapper *op = static_cast<vtkFixedPointVolumeRayCastMapper *>(vp);

  float temp0[3];
  float save0[3];
  const int size0 = 3;
  unsigned int temp1[3];
  unsigned int save1[3];
  const int size1 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1))
    {
    ap.SaveArray(temp0, save0, size0);
    ap.SaveArray(temp1, save1, size1);

    if (ap.IsBound())
      {
      op->ToFixedPointDirection(temp0, temp1);
      }
    else
      {
      op->vtkFixedPointVolumeRayCastMapper::ToFixedPointDirection(temp0, temp1);
      }

    if (ap.ArrayHasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(0, temp0, size0);
      }

    if (ap.ArrayHasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(1, temp1, size1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkFixedPointVolumeRayCastMapper_ToFixedPointDirection(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkFixedPointVolumeRayCastMapper_ToFixedPointDirection_s1(self, args);
    case 2:
      return PyvtkFixedPointVolumeRayCastMapper_ToFixedPointDirection_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "ToFixedPointDirection");
  return NULL;
}



static PyObject *
PyvtkFixedPointVolumeRayCastMapper_FixedPointIncrement(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FixedPointIncrement");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointVolumeRayCastMapper *op = static_cast<vtkFixedPointVolumeRayCastMapper *>(vp);

  unsigned int temp0[3];
  unsigned int save0[3];
  const int size0 = 3;
  unsigned int temp1[3];
  unsigned int save1[3];
  const int size1 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1))
    {
    ap.SaveArray(temp0, save0, size0);
    ap.SaveArray(temp1, save1, size1);

    if (ap.IsBound())
      {
      op->FixedPointIncrement(temp0, temp1);
      }
    else
      {
      op->vtkFixedPointVolumeRayCastMapper::FixedPointIncrement(temp0, temp1);
      }

    if (ap.ArrayHasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(0, temp0, size0);
      }

    if (ap.ArrayHasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(1, temp1, size1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkFixedPointVolumeRayCastMapper_GetFloatTripleFromPointer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFloatTripleFromPointer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointVolumeRayCastMapper *op = static_cast<vtkFixedPointVolumeRayCastMapper *>(vp);

  float temp0[3];
  float save0[3];
  const int size0 = 3;
  float *temp1 = NULL;
  float *save1 = NULL;
  float small1[8];
  int size1 = 0;
  PyObject *result = NULL;

  if (op)
    {
    size1 = ap.GetArgSize(1);
    temp1 = small1;
    if (size1 > 4)
      {
      temp1 = new float[2*size1];
      }
    save1 = &temp1[size1];
    }

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1))
    {
    ap.SaveArray(temp0, save0, size0);
    ap.SaveArray(temp1, save1, size1);

    if (ap.IsBound())
      {
      op->GetFloatTripleFromPointer(temp0, temp1);
      }
    else
      {
      op->vtkFixedPointVolumeRayCastMapper::GetFloatTripleFromPointer(temp0, temp1);
      }

    if (ap.ArrayHasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(0, temp0, size0);
      }

    if (ap.ArrayHasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(1, temp1, size1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  if (temp1 && temp1 != small1)
    {
    delete [] temp1;
    }

  return result;
}


static PyObject *
PyvtkFixedPointVolumeRayCastMapper_GetUIntTripleFromPointer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUIntTripleFromPointer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointVolumeRayCastMapper *op = static_cast<vtkFixedPointVolumeRayCastMapper *>(vp);

  unsigned int temp0[3];
  unsigned int save0[3];
  const int size0 = 3;
  unsigned int *temp1 = NULL;
  unsigned int *save1 = NULL;
  unsigned int small1[8];
  int size1 = 0;
  PyObject *result = NULL;

  if (op)
    {
    size1 = ap.GetArgSize(1);
    temp1 = small1;
    if (size1 > 4)
      {
      temp1 = new unsigned int[2*size1];
      }
    save1 = &temp1[size1];
    }

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1))
    {
    ap.SaveArray(temp0, save0, size0);
    ap.SaveArray(temp1, save1, size1);

    if (ap.IsBound())
      {
      op->GetUIntTripleFromPointer(temp0, temp1);
      }
    else
      {
      op->vtkFixedPointVolumeRayCastMapper::GetUIntTripleFromPointer(temp0, temp1);
      }

    if (ap.ArrayHasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(0, temp0, size0);
      }

    if (ap.ArrayHasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(1, temp1, size1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  if (temp1 && temp1 != small1)
    {
    delete [] temp1;
    }

  return result;
}


static PyObject *
PyvtkFixedPointVolumeRayCastMapper_ShiftVectorDown(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShiftVectorDown");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointVolumeRayCastMapper *op = static_cast<vtkFixedPointVolumeRayCastMapper *>(vp);

  unsigned int temp0[3];
  unsigned int save0[3];
  const int size0 = 3;
  unsigned int temp1[3];
  unsigned int save1[3];
  const int size1 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1))
    {
    ap.SaveArray(temp0, save0, size0);
    ap.SaveArray(temp1, save1, size1);

    if (ap.IsBound())
      {
      op->ShiftVectorDown(temp0, temp1);
      }
    else
      {
      op->vtkFixedPointVolumeRayCastMapper::ShiftVectorDown(temp0, temp1);
      }

    if (ap.ArrayHasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(0, temp0, size0);
      }

    if (ap.ArrayHasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(1, temp1, size1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkFixedPointVolumeRayCastMapper_CheckMinMaxVolumeFlag(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CheckMinMaxVolumeFlag");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointVolumeRayCastMapper *op = static_cast<vtkFixedPointVolumeRayCastMapper *>(vp);

  unsigned int temp0[3];
  unsigned int save0[3];
  const int size0 = 3;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1))
    {
    ap.SaveArray(temp0, save0, size0);

    int tempr = (ap.IsBound() ?
      op->CheckMinMaxVolumeFlag(temp0, temp1) :
      op->vtkFixedPointVolumeRayCastMapper::CheckMinMaxVolumeFlag(temp0, temp1));

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
PyvtkFixedPointVolumeRayCastMapper_CheckMIPMinMaxVolumeFlag(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CheckMIPMinMaxVolumeFlag");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointVolumeRayCastMapper *op = static_cast<vtkFixedPointVolumeRayCastMapper *>(vp);

  unsigned int temp0[3];
  unsigned int save0[3];
  const int size0 = 3;
  int temp1;
  unsigned short temp2;
  int temp3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(4) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
    {
    ap.SaveArray(temp0, save0, size0);

    int tempr = (ap.IsBound() ?
      op->CheckMIPMinMaxVolumeFlag(temp0, temp1, temp2, temp3) :
      op->vtkFixedPointVolumeRayCastMapper::CheckMIPMinMaxVolumeFlag(temp0, temp1, temp2, temp3));

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
PyvtkFixedPointVolumeRayCastMapper_LookupColorUC(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LookupColorUC");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointVolumeRayCastMapper *op = static_cast<vtkFixedPointVolumeRayCastMapper *>(vp);

  unsigned short *temp0 = NULL;
  unsigned short *save0 = NULL;
  unsigned short small0[8];
  int size0 = 0;
  unsigned short *temp1 = NULL;
  unsigned short *save1 = NULL;
  unsigned short small1[8];
  int size1 = 0;
  unsigned short temp2;
  unsigned char temp3[4];
  unsigned char save3[4];
  const int size3 = 4;
  PyObject *result = NULL;

  if (op)
    {
    size0 = ap.GetArgSize(0);
    temp0 = small0;
    if (size0 > 4)
      {
      temp0 = new unsigned short[2*size0];
      }
    save0 = &temp0[size0];
    size1 = ap.GetArgSize(1);
    temp1 = small1;
    if (size1 > 4)
      {
      temp1 = new unsigned short[2*size1];
      }
    save1 = &temp1[size1];
    }

  if (op && ap.CheckArgCount(4) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2) &&
      ap.GetArray(temp3, size3))
    {
    ap.SaveArray(temp0, save0, size0);
    ap.SaveArray(temp1, save1, size1);
    ap.SaveArray(temp3, save3, size3);

    if (ap.IsBound())
      {
      op->LookupColorUC(temp0, temp1, temp2, temp3);
      }
    else
      {
      op->vtkFixedPointVolumeRayCastMapper::LookupColorUC(temp0, temp1, temp2, temp3);
      }

    if (ap.ArrayHasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(0, temp0, size0);
      }

    if (ap.ArrayHasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(1, temp1, size1);
      }

    if (ap.ArrayHasChanged(temp3, save3, size3) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(3, temp3, size3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  if (temp0 && temp0 != small0)
    {
    delete [] temp0;
    }
  if (temp1 && temp1 != small1)
    {
    delete [] temp1;
    }

  return result;
}


static PyObject *
PyvtkFixedPointVolumeRayCastMapper_LookupDependentColorUC(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LookupDependentColorUC");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointVolumeRayCastMapper *op = static_cast<vtkFixedPointVolumeRayCastMapper *>(vp);

  unsigned short *temp0 = NULL;
  unsigned short *save0 = NULL;
  unsigned short small0[8];
  int size0 = 0;
  unsigned short *temp1 = NULL;
  unsigned short *save1 = NULL;
  unsigned short small1[8];
  int size1 = 0;
  unsigned short temp2[4];
  unsigned short save2[4];
  const int size2 = 4;
  int temp3;
  unsigned char temp4[4];
  unsigned char save4[4];
  const int size4 = 4;
  PyObject *result = NULL;

  if (op)
    {
    size0 = ap.GetArgSize(0);
    temp0 = small0;
    if (size0 > 4)
      {
      temp0 = new unsigned short[2*size0];
      }
    save0 = &temp0[size0];
    size1 = ap.GetArgSize(1);
    temp1 = small1;
    if (size1 > 4)
      {
      temp1 = new unsigned short[2*size1];
      }
    save1 = &temp1[size1];
    }

  if (op && ap.CheckArgCount(5) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetArray(temp2, size2) &&
      ap.GetValue(temp3) &&
      ap.GetArray(temp4, size4))
    {
    ap.SaveArray(temp0, save0, size0);
    ap.SaveArray(temp1, save1, size1);
    ap.SaveArray(temp2, save2, size2);
    ap.SaveArray(temp4, save4, size4);

    if (ap.IsBound())
      {
      op->LookupDependentColorUC(temp0, temp1, temp2, temp3, temp4);
      }
    else
      {
      op->vtkFixedPointVolumeRayCastMapper::LookupDependentColorUC(temp0, temp1, temp2, temp3, temp4);
      }

    if (ap.ArrayHasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(0, temp0, size0);
      }

    if (ap.ArrayHasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(1, temp1, size1);
      }

    if (ap.ArrayHasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(2, temp2, size2);
      }

    if (ap.ArrayHasChanged(temp4, save4, size4) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(4, temp4, size4);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  if (temp0 && temp0 != small0)
    {
    delete [] temp0;
    }
  if (temp1 && temp1 != small1)
    {
    delete [] temp1;
    }

  return result;
}


static PyObject *
PyvtkFixedPointVolumeRayCastMapper_CheckIfCropped(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CheckIfCropped");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointVolumeRayCastMapper *op = static_cast<vtkFixedPointVolumeRayCastMapper *>(vp);

  unsigned int temp0[3];
  unsigned int save0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    int tempr = (ap.IsBound() ?
      op->CheckIfCropped(temp0) :
      op->vtkFixedPointVolumeRayCastMapper::CheckIfCropped(temp0));

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
PyvtkFixedPointVolumeRayCastMapper_GetRenderWindow(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRenderWindow");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointVolumeRayCastMapper *op = static_cast<vtkFixedPointVolumeRayCastMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkRenderWindow *tempr = (ap.IsBound() ?
      op->GetRenderWindow() :
      op->vtkFixedPointVolumeRayCastMapper::GetRenderWindow());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkFixedPointVolumeRayCastMapper_GetMIPHelper(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMIPHelper");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointVolumeRayCastMapper *op = static_cast<vtkFixedPointVolumeRayCastMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkFixedPointVolumeRayCastMIPHelper *tempr = (ap.IsBound() ?
      op->GetMIPHelper() :
      op->vtkFixedPointVolumeRayCastMapper::GetMIPHelper());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkFixedPointVolumeRayCastMapper_GetCompositeHelper(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCompositeHelper");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointVolumeRayCastMapper *op = static_cast<vtkFixedPointVolumeRayCastMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkFixedPointVolumeRayCastCompositeHelper *tempr = (ap.IsBound() ?
      op->GetCompositeHelper() :
      op->vtkFixedPointVolumeRayCastMapper::GetCompositeHelper());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkFixedPointVolumeRayCastMapper_GetCompositeGOHelper(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCompositeGOHelper");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointVolumeRayCastMapper *op = static_cast<vtkFixedPointVolumeRayCastMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkFixedPointVolumeRayCastCompositeGOHelper *tempr = (ap.IsBound() ?
      op->GetCompositeGOHelper() :
      op->vtkFixedPointVolumeRayCastMapper::GetCompositeGOHelper());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkFixedPointVolumeRayCastMapper_GetCompositeGOShadeHelper(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCompositeGOShadeHelper");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointVolumeRayCastMapper *op = static_cast<vtkFixedPointVolumeRayCastMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkFixedPointVolumeRayCastCompositeGOShadeHelper *tempr = (ap.IsBound() ?
      op->GetCompositeGOShadeHelper() :
      op->vtkFixedPointVolumeRayCastMapper::GetCompositeGOShadeHelper());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkFixedPointVolumeRayCastMapper_GetCompositeShadeHelper(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCompositeShadeHelper");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointVolumeRayCastMapper *op = static_cast<vtkFixedPointVolumeRayCastMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkFixedPointVolumeRayCastCompositeShadeHelper *tempr = (ap.IsBound() ?
      op->GetCompositeShadeHelper() :
      op->vtkFixedPointVolumeRayCastMapper::GetCompositeShadeHelper());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkFixedPointVolumeRayCastMapper_GetTableShift(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTableShift");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointVolumeRayCastMapper *op = static_cast<vtkFixedPointVolumeRayCastMapper *>(vp);

  int sizer = 4;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    float *tempr = (ap.IsBound() ?
      op->GetTableShift() :
      op->vtkFixedPointVolumeRayCastMapper::GetTableShift());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkFixedPointVolumeRayCastMapper_GetTableScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTableScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointVolumeRayCastMapper *op = static_cast<vtkFixedPointVolumeRayCastMapper *>(vp);

  int sizer = 4;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    float *tempr = (ap.IsBound() ?
      op->GetTableScale() :
      op->vtkFixedPointVolumeRayCastMapper::GetTableScale());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkFixedPointVolumeRayCastMapper_GetShadingRequired(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetShadingRequired");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointVolumeRayCastMapper *op = static_cast<vtkFixedPointVolumeRayCastMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetShadingRequired() :
      op->vtkFixedPointVolumeRayCastMapper::GetShadingRequired());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkFixedPointVolumeRayCastMapper_GetGradientOpacityRequired(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGradientOpacityRequired");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointVolumeRayCastMapper *op = static_cast<vtkFixedPointVolumeRayCastMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetGradientOpacityRequired() :
      op->vtkFixedPointVolumeRayCastMapper::GetGradientOpacityRequired());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkFixedPointVolumeRayCastMapper_GetCurrentScalars(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCurrentScalars");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointVolumeRayCastMapper *op = static_cast<vtkFixedPointVolumeRayCastMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkDataArray *tempr = (ap.IsBound() ?
      op->GetCurrentScalars() :
      op->vtkFixedPointVolumeRayCastMapper::GetCurrentScalars());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkFixedPointVolumeRayCastMapper_GetPreviousScalars(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPreviousScalars");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointVolumeRayCastMapper *op = static_cast<vtkFixedPointVolumeRayCastMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkDataArray *tempr = (ap.IsBound() ?
      op->GetPreviousScalars() :
      op->vtkFixedPointVolumeRayCastMapper::GetPreviousScalars());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkFixedPointVolumeRayCastMapper_GetRowBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRowBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointVolumeRayCastMapper *op = static_cast<vtkFixedPointVolumeRayCastMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int *tempr = (ap.IsBound() ?
      op->GetRowBounds() :
      op->vtkFixedPointVolumeRayCastMapper::GetRowBounds());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkFixedPointVolumeRayCastMapper_GetColorTable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColorTable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointVolumeRayCastMapper *op = static_cast<vtkFixedPointVolumeRayCastMapper *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    unsigned short *tempr = (ap.IsBound() ?
      op->GetColorTable(temp0) :
      op->vtkFixedPointVolumeRayCastMapper::GetColorTable(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkFixedPointVolumeRayCastMapper_GetScalarOpacityTable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalarOpacityTable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointVolumeRayCastMapper *op = static_cast<vtkFixedPointVolumeRayCastMapper *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    unsigned short *tempr = (ap.IsBound() ?
      op->GetScalarOpacityTable(temp0) :
      op->vtkFixedPointVolumeRayCastMapper::GetScalarOpacityTable(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkFixedPointVolumeRayCastMapper_GetGradientOpacityTable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGradientOpacityTable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointVolumeRayCastMapper *op = static_cast<vtkFixedPointVolumeRayCastMapper *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    unsigned short *tempr = (ap.IsBound() ?
      op->GetGradientOpacityTable(temp0) :
      op->vtkFixedPointVolumeRayCastMapper::GetGradientOpacityTable(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkFixedPointVolumeRayCastMapper_GetVolume(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVolume");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointVolumeRayCastMapper *op = static_cast<vtkFixedPointVolumeRayCastMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkVolume *tempr = (ap.IsBound() ?
      op->GetVolume() :
      op->vtkFixedPointVolumeRayCastMapper::GetVolume());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkFixedPointVolumeRayCastMapper_GetDiffuseShadingTable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDiffuseShadingTable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointVolumeRayCastMapper *op = static_cast<vtkFixedPointVolumeRayCastMapper *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    unsigned short *tempr = (ap.IsBound() ?
      op->GetDiffuseShadingTable(temp0) :
      op->vtkFixedPointVolumeRayCastMapper::GetDiffuseShadingTable(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkFixedPointVolumeRayCastMapper_GetSpecularShadingTable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSpecularShadingTable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointVolumeRayCastMapper *op = static_cast<vtkFixedPointVolumeRayCastMapper *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    unsigned short *tempr = (ap.IsBound() ?
      op->GetSpecularShadingTable(temp0) :
      op->vtkFixedPointVolumeRayCastMapper::GetSpecularShadingTable(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkFixedPointVolumeRayCastMapper_ComputeRayInfo(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeRayInfo");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointVolumeRayCastMapper *op = static_cast<vtkFixedPointVolumeRayCastMapper *>(vp);

  int temp0;
  int temp1;
  unsigned int temp2[3];
  unsigned int save2[3];
  const int size2 = 3;
  unsigned int temp3[3];
  unsigned int save3[3];
  const int size3 = 3;
  unsigned int *temp4 = NULL;
  unsigned int *save4 = NULL;
  unsigned int small4[8];
  int size4 = 0;
  PyObject *result = NULL;

  if (op)
    {
    size4 = ap.GetArgSize(4);
    temp4 = small4;
    if (size4 > 4)
      {
      temp4 = new unsigned int[2*size4];
      }
    save4 = &temp4[size4];
    }

  if (op && ap.CheckArgCount(5) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetArray(temp2, size2) &&
      ap.GetArray(temp3, size3) &&
      ap.GetArray(temp4, size4))
    {
    ap.SaveArray(temp2, save2, size2);
    ap.SaveArray(temp3, save3, size3);
    ap.SaveArray(temp4, save4, size4);

    if (ap.IsBound())
      {
      op->ComputeRayInfo(temp0, temp1, temp2, temp3, temp4);
      }
    else
      {
      op->vtkFixedPointVolumeRayCastMapper::ComputeRayInfo(temp0, temp1, temp2, temp3, temp4);
      }

    if (ap.ArrayHasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(2, temp2, size2);
      }

    if (ap.ArrayHasChanged(temp3, save3, size3) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(3, temp3, size3);
      }

    if (ap.ArrayHasChanged(temp4, save4, size4) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(4, temp4, size4);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  if (temp4 && temp4 != small4)
    {
    delete [] temp4;
    }

  return result;
}


static PyObject *
PyvtkFixedPointVolumeRayCastMapper_InitializeRayInfo(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InitializeRayInfo");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointVolumeRayCastMapper *op = static_cast<vtkFixedPointVolumeRayCastMapper *>(vp);

  vtkVolume *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkVolume"))
    {
    if (ap.IsBound())
      {
      op->InitializeRayInfo(temp0);
      }
    else
      {
      op->vtkFixedPointVolumeRayCastMapper::InitializeRayInfo(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkFixedPointVolumeRayCastMapper_ShouldUseNearestNeighborInterpolation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShouldUseNearestNeighborInterpolation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointVolumeRayCastMapper *op = static_cast<vtkFixedPointVolumeRayCastMapper *>(vp);

  vtkVolume *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkVolume"))
    {
    int tempr = (ap.IsBound() ?
      op->ShouldUseNearestNeighborInterpolation(temp0) :
      op->vtkFixedPointVolumeRayCastMapper::ShouldUseNearestNeighborInterpolation(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkFixedPointVolumeRayCastMapper_SetRayCastImage(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRayCastImage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointVolumeRayCastMapper *op = static_cast<vtkFixedPointVolumeRayCastMapper *>(vp);

  vtkFixedPointRayCastImage *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkFixedPointRayCastImage"))
    {
    if (ap.IsBound())
      {
      op->SetRayCastImage(temp0);
      }
    else
      {
      op->vtkFixedPointVolumeRayCastMapper::SetRayCastImage(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkFixedPointVolumeRayCastMapper_GetRayCastImage(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRayCastImage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointVolumeRayCastMapper *op = static_cast<vtkFixedPointVolumeRayCastMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkFixedPointRayCastImage *tempr = (ap.IsBound() ?
      op->GetRayCastImage() :
      op->vtkFixedPointVolumeRayCastMapper::GetRayCastImage());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkFixedPointVolumeRayCastMapper_PerImageInitialization(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PerImageInitialization");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointVolumeRayCastMapper *op = static_cast<vtkFixedPointVolumeRayCastMapper *>(vp);

  vtkRenderer *temp0 = NULL;
  vtkVolume *temp1 = NULL;
  int temp2;
  double *temp3 = NULL;
  double *save3 = NULL;
  double small3[8];
  int size3 = 0;
  double *temp4 = NULL;
  double *save4 = NULL;
  double small4[8];
  int size4 = 0;
  int *temp5 = NULL;
  int *save5 = NULL;
  int small5[8];
  int size5 = 0;
  PyObject *result = NULL;

  if (op)
    {
    size3 = ap.GetArgSize(3);
    temp3 = small3;
    if (size3 > 4)
      {
      temp3 = new double[2*size3];
      }
    save3 = &temp3[size3];
    size4 = ap.GetArgSize(4);
    temp4 = small4;
    if (size4 > 4)
      {
      temp4 = new double[2*size4];
      }
    save4 = &temp4[size4];
    size5 = ap.GetArgSize(5);
    temp5 = small5;
    if (size5 > 4)
      {
      temp5 = new int[2*size5];
      }
    save5 = &temp5[size5];
    }

  if (op && ap.CheckArgCount(6) &&
      ap.GetVTKObject(temp0, "vtkRenderer") &&
      ap.GetVTKObject(temp1, "vtkVolume") &&
      ap.GetValue(temp2) &&
      ap.GetArray(temp3, size3) &&
      ap.GetArray(temp4, size4) &&
      ap.GetArray(temp5, size5))
    {
    ap.SaveArray(temp3, save3, size3);
    ap.SaveArray(temp4, save4, size4);
    ap.SaveArray(temp5, save5, size5);

    int tempr = (ap.IsBound() ?
      op->PerImageInitialization(temp0, temp1, temp2, temp3, temp4, temp5) :
      op->vtkFixedPointVolumeRayCastMapper::PerImageInitialization(temp0, temp1, temp2, temp3, temp4, temp5));

    if (ap.ArrayHasChanged(temp3, save3, size3) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(3, temp3, size3);
      }

    if (ap.ArrayHasChanged(temp4, save4, size4) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(4, temp4, size4);
      }

    if (ap.ArrayHasChanged(temp5, save5, size5) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(5, temp5, size5);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  if (temp3 && temp3 != small3)
    {
    delete [] temp3;
    }
  if (temp4 && temp4 != small4)
    {
    delete [] temp4;
    }
  if (temp5 && temp5 != small5)
    {
    delete [] temp5;
    }

  return result;
}


static PyObject *
PyvtkFixedPointVolumeRayCastMapper_PerVolumeInitialization(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PerVolumeInitialization");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointVolumeRayCastMapper *op = static_cast<vtkFixedPointVolumeRayCastMapper *>(vp);

  vtkRenderer *temp0 = NULL;
  vtkVolume *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkRenderer") &&
      ap.GetVTKObject(temp1, "vtkVolume"))
    {
    if (ap.IsBound())
      {
      op->PerVolumeInitialization(temp0, temp1);
      }
    else
      {
      op->vtkFixedPointVolumeRayCastMapper::PerVolumeInitialization(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkFixedPointVolumeRayCastMapper_PerSubVolumeInitialization(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PerSubVolumeInitialization");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointVolumeRayCastMapper *op = static_cast<vtkFixedPointVolumeRayCastMapper *>(vp);

  vtkRenderer *temp0 = NULL;
  vtkVolume *temp1 = NULL;
  int temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkRenderer") &&
      ap.GetVTKObject(temp1, "vtkVolume") &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      op->PerSubVolumeInitialization(temp0, temp1, temp2);
      }
    else
      {
      op->vtkFixedPointVolumeRayCastMapper::PerSubVolumeInitialization(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkFixedPointVolumeRayCastMapper_RenderSubVolume(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderSubVolume");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointVolumeRayCastMapper *op = static_cast<vtkFixedPointVolumeRayCastMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->RenderSubVolume();
      }
    else
      {
      op->vtkFixedPointVolumeRayCastMapper::RenderSubVolume();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkFixedPointVolumeRayCastMapper_DisplayRenderedImage(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DisplayRenderedImage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointVolumeRayCastMapper *op = static_cast<vtkFixedPointVolumeRayCastMapper *>(vp);

  vtkRenderer *temp0 = NULL;
  vtkVolume *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkRenderer") &&
      ap.GetVTKObject(temp1, "vtkVolume"))
    {
    if (ap.IsBound())
      {
      op->DisplayRenderedImage(temp0, temp1);
      }
    else
      {
      op->vtkFixedPointVolumeRayCastMapper::DisplayRenderedImage(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkFixedPointVolumeRayCastMapper_AbortRender(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AbortRender");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointVolumeRayCastMapper *op = static_cast<vtkFixedPointVolumeRayCastMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->AbortRender();
      }
    else
      {
      op->vtkFixedPointVolumeRayCastMapper::AbortRender();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkFixedPointVolumeRayCastMapper_CreateCanonicalView(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateCanonicalView");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointVolumeRayCastMapper *op = static_cast<vtkFixedPointVolumeRayCastMapper *>(vp);

  vtkVolume *temp0 = NULL;
  vtkImageData *temp1 = NULL;
  int temp2;
  double temp3[3];
  double save3[3];
  const int size3 = 3;
  double temp4[3];
  double save4[3];
  const int size4 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(5) &&
      ap.GetVTKObject(temp0, "vtkVolume") &&
      ap.GetVTKObject(temp1, "vtkImageData") &&
      ap.GetValue(temp2) &&
      ap.GetArray(temp3, size3) &&
      ap.GetArray(temp4, size4))
    {
    ap.SaveArray(temp3, save3, size3);
    ap.SaveArray(temp4, save4, size4);

    if (ap.IsBound())
      {
      op->CreateCanonicalView(temp0, temp1, temp2, temp3, temp4);
      }
    else
      {
      op->vtkFixedPointVolumeRayCastMapper::CreateCanonicalView(temp0, temp1, temp2, temp3, temp4);
      }

    if (ap.ArrayHasChanged(temp3, save3, size3) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(3, temp3, size3);
      }

    if (ap.ArrayHasChanged(temp4, save4, size4) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(4, temp4, size4);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkFixedPointVolumeRayCastMapper_GetEstimatedRenderTime_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEstimatedRenderTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointVolumeRayCastMapper *op = static_cast<vtkFixedPointVolumeRayCastMapper *>(vp);

  vtkRenderer *temp0 = NULL;
  vtkVolume *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkRenderer") &&
      ap.GetVTKObject(temp1, "vtkVolume"))
    {
    float tempr = (ap.IsBound() ?
      op->GetEstimatedRenderTime(temp0, temp1) :
      op->vtkFixedPointVolumeRayCastMapper::GetEstimatedRenderTime(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkFixedPointVolumeRayCastMapper_GetEstimatedRenderTime_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEstimatedRenderTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointVolumeRayCastMapper *op = static_cast<vtkFixedPointVolumeRayCastMapper *>(vp);

  vtkRenderer *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkRenderer"))
    {
    float tempr = (ap.IsBound() ?
      op->GetEstimatedRenderTime(temp0) :
      op->vtkFixedPointVolumeRayCastMapper::GetEstimatedRenderTime(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkFixedPointVolumeRayCastMapper_GetEstimatedRenderTime(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkFixedPointVolumeRayCastMapper_GetEstimatedRenderTime_s1(self, args);
    case 1:
      return PyvtkFixedPointVolumeRayCastMapper_GetEstimatedRenderTime_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetEstimatedRenderTime");
  return NULL;
}



static PyObject *
PyvtkFixedPointVolumeRayCastMapper_SetFinalColorWindow(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFinalColorWindow");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointVolumeRayCastMapper *op = static_cast<vtkFixedPointVolumeRayCastMapper *>(vp);

  float temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetFinalColorWindow(temp0);
      }
    else
      {
      op->vtkFixedPointVolumeRayCastMapper::SetFinalColorWindow(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkFixedPointVolumeRayCastMapper_GetFinalColorWindow(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFinalColorWindow");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointVolumeRayCastMapper *op = static_cast<vtkFixedPointVolumeRayCastMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    float tempr = (ap.IsBound() ?
      op->GetFinalColorWindow() :
      op->vtkFixedPointVolumeRayCastMapper::GetFinalColorWindow());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkFixedPointVolumeRayCastMapper_SetFinalColorLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFinalColorLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointVolumeRayCastMapper *op = static_cast<vtkFixedPointVolumeRayCastMapper *>(vp);

  float temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetFinalColorLevel(temp0);
      }
    else
      {
      op->vtkFixedPointVolumeRayCastMapper::SetFinalColorLevel(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkFixedPointVolumeRayCastMapper_GetFinalColorLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFinalColorLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointVolumeRayCastMapper *op = static_cast<vtkFixedPointVolumeRayCastMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    float tempr = (ap.IsBound() ?
      op->GetFinalColorLevel() :
      op->vtkFixedPointVolumeRayCastMapper::GetFinalColorLevel());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkFixedPointVolumeRayCastMapper_GetFlipMIPComparison(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFlipMIPComparison");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointVolumeRayCastMapper *op = static_cast<vtkFixedPointVolumeRayCastMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetFlipMIPComparison() :
      op->vtkFixedPointVolumeRayCastMapper::GetFlipMIPComparison());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkFixedPointVolumeRayCastMapper_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointVolumeRayCastMapper *op = static_cast<vtkFixedPointVolumeRayCastMapper *>(vp);

  vtkWindow *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkWindow"))
    {
    if (ap.IsBound())
      {
      op->ReleaseGraphicsResources(temp0);
      }
    else
      {
      op->vtkFixedPointVolumeRayCastMapper::ReleaseGraphicsResources(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkFixedPointVolumeRayCastMapper_Methods[] = {
  {(char*)"GetClassName", PyvtkFixedPointVolumeRayCastMapper_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkFixedPointVolumeRayCastMapper_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkFixedPointVolumeRayCastMapper_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkFixedPointVolumeRayCastMapper\nC++: vtkFixedPointVolumeRayCastMapper *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkFixedPointVolumeRayCastMapper_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkFixedPointVolumeRayCastMapper\nC++: vtkFixedPointVolumeRayCastMapper *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetSampleDistance", PyvtkFixedPointVolumeRayCastMapper_SetSampleDistance, METH_VARARGS,
   (char*)"V.SetSampleDistance(float)\nC++: void SetSampleDistance(float a)\n\nSet/Get the distance between samples used for rendering when\nAutoAdjustSampleDistances is off, or when this mapper has more\nthan 1 second allocated to it for rendering.\n"},
  {(char*)"GetSampleDistance", PyvtkFixedPointVolumeRayCastMapper_GetSampleDistance, METH_VARARGS,
   (char*)"V.GetSampleDistance() -> float\nC++: float GetSampleDistance()\n\nSet/Get the distance between samples used for rendering when\nAutoAdjustSampleDistances is off, or when this mapper has more\nthan 1 second allocated to it for rendering.\n"},
  {(char*)"SetInteractiveSampleDistance", PyvtkFixedPointVolumeRayCastMapper_SetInteractiveSampleDistance, METH_VARARGS,
   (char*)"V.SetInteractiveSampleDistance(float)\nC++: void SetInteractiveSampleDistance(float a)\n\nSet/Get the distance between samples when interactive rendering\nis happening. In this case, interactive is defined as this volume\nmapper having less than 1 second allocated for rendering. When\nAutoAdjustSampleDistance is On, and the allocated render time is\nless than 1 second, then this InteractiveSampleDistance will be\nused instead of the SampleDistance above.\n"},
  {(char*)"GetInteractiveSampleDistance", PyvtkFixedPointVolumeRayCastMapper_GetInteractiveSampleDistance, METH_VARARGS,
   (char*)"V.GetInteractiveSampleDistance() -> float\nC++: float GetInteractiveSampleDistance()\n\nSet/Get the distance between samples when interactive rendering\nis happening. In this case, interactive is defined as this volume\nmapper having less than 1 second allocated for rendering. When\nAutoAdjustSampleDistance is On, and the allocated render time is\nless than 1 second, then this InteractiveSampleDistance will be\nused instead of the SampleDistance above.\n"},
  {(char*)"SetImageSampleDistance", PyvtkFixedPointVolumeRayCastMapper_SetImageSampleDistance, METH_VARARGS,
   (char*)"V.SetImageSampleDistance(float)\nC++: void SetImageSampleDistance(float)\n\nSampling distance in the XY image dimensions. Default value of 1\nmeaning 1 ray cast per pixel. If set to 0.5, 4 rays will be cast\nper pixel. If set to 2.0, 1 ray will be cast for every 4 (2 by 2)\npixels. This value will be adjusted to meet a desired frame rate\nwhen AutoAdjustSampleDistances is on.\n"},
  {(char*)"GetImageSampleDistanceMinValue", PyvtkFixedPointVolumeRayCastMapper_GetImageSampleDistanceMinValue, METH_VARARGS,
   (char*)"V.GetImageSampleDistanceMinValue() -> float\nC++: float GetImageSampleDistanceMinValue()\n\nSampling distance in the XY image dimensions. Default value of 1\nmeaning 1 ray cast per pixel. If set to 0.5, 4 rays will be cast\nper pixel. If set to 2.0, 1 ray will be cast for every 4 (2 by 2)\npixels. This value will be adjusted to meet a desired frame rate\nwhen AutoAdjustSampleDistances is on.\n"},
  {(char*)"GetImageSampleDistanceMaxValue", PyvtkFixedPointVolumeRayCastMapper_GetImageSampleDistanceMaxValue, METH_VARARGS,
   (char*)"V.GetImageSampleDistanceMaxValue() -> float\nC++: float GetImageSampleDistanceMaxValue()\n\nSampling distance in the XY image dimensions. Default value of 1\nmeaning 1 ray cast per pixel. If set to 0.5, 4 rays will be cast\nper pixel. If set to 2.0, 1 ray will be cast for every 4 (2 by 2)\npixels. This value will be adjusted to meet a desired frame rate\nwhen AutoAdjustSampleDistances is on.\n"},
  {(char*)"GetImageSampleDistance", PyvtkFixedPointVolumeRayCastMapper_GetImageSampleDistance, METH_VARARGS,
   (char*)"V.GetImageSampleDistance() -> float\nC++: float GetImageSampleDistance()\n\nSampling distance in the XY image dimensions. Default value of 1\nmeaning 1 ray cast per pixel. If set to 0.5, 4 rays will be cast\nper pixel. If set to 2.0, 1 ray will be cast for every 4 (2 by 2)\npixels. This value will be adjusted to meet a desired frame rate\nwhen AutoAdjustSampleDistances is on.\n"},
  {(char*)"SetMinimumImageSampleDistance", PyvtkFixedPointVolumeRayCastMapper_SetMinimumImageSampleDistance, METH_VARARGS,
   (char*)"V.SetMinimumImageSampleDistance(float)\nC++: void SetMinimumImageSampleDistance(float)\n\nThis is the minimum image sample distance allow when the image\nsample distance is being automatically adjusted.\n"},
  {(char*)"GetMinimumImageSampleDistanceMinValue", PyvtkFixedPointVolumeRayCastMapper_GetMinimumImageSampleDistanceMinValue, METH_VARARGS,
   (char*)"V.GetMinimumImageSampleDistanceMinValue() -> float\nC++: float GetMinimumImageSampleDistanceMinValue()\n\nThis is the minimum image sample distance allow when the image\nsample distance is being automatically adjusted.\n"},
  {(char*)"GetMinimumImageSampleDistanceMaxValue", PyvtkFixedPointVolumeRayCastMapper_GetMinimumImageSampleDistanceMaxValue, METH_VARARGS,
   (char*)"V.GetMinimumImageSampleDistanceMaxValue() -> float\nC++: float GetMinimumImageSampleDistanceMaxValue()\n\nThis is the minimum image sample distance allow when the image\nsample distance is being automatically adjusted.\n"},
  {(char*)"GetMinimumImageSampleDistance", PyvtkFixedPointVolumeRayCastMapper_GetMinimumImageSampleDistance, METH_VARARGS,
   (char*)"V.GetMinimumImageSampleDistance() -> float\nC++: float GetMinimumImageSampleDistance()\n\nThis is the minimum image sample distance allow when the image\nsample distance is being automatically adjusted.\n"},
  {(char*)"SetMaximumImageSampleDistance", PyvtkFixedPointVolumeRayCastMapper_SetMaximumImageSampleDistance, METH_VARARGS,
   (char*)"V.SetMaximumImageSampleDistance(float)\nC++: void SetMaximumImageSampleDistance(float)\n\nThis is the maximum image sample distance allow when the image\nsample distance is being automatically adjusted.\n"},
  {(char*)"GetMaximumImageSampleDistanceMinValue", PyvtkFixedPointVolumeRayCastMapper_GetMaximumImageSampleDistanceMinValue, METH_VARARGS,
   (char*)"V.GetMaximumImageSampleDistanceMinValue() -> float\nC++: float GetMaximumImageSampleDistanceMinValue()\n\nThis is the maximum image sample distance allow when the image\nsample distance is being automatically adjusted.\n"},
  {(char*)"GetMaximumImageSampleDistanceMaxValue", PyvtkFixedPointVolumeRayCastMapper_GetMaximumImageSampleDistanceMaxValue, METH_VARARGS,
   (char*)"V.GetMaximumImageSampleDistanceMaxValue() -> float\nC++: float GetMaximumImageSampleDistanceMaxValue()\n\nThis is the maximum image sample distance allow when the image\nsample distance is being automatically adjusted.\n"},
  {(char*)"GetMaximumImageSampleDistance", PyvtkFixedPointVolumeRayCastMapper_GetMaximumImageSampleDistance, METH_VARARGS,
   (char*)"V.GetMaximumImageSampleDistance() -> float\nC++: float GetMaximumImageSampleDistance()\n\nThis is the maximum image sample distance allow when the image\nsample distance is being automatically adjusted.\n"},
  {(char*)"SetAutoAdjustSampleDistances", PyvtkFixedPointVolumeRayCastMapper_SetAutoAdjustSampleDistances, METH_VARARGS,
   (char*)"V.SetAutoAdjustSampleDistances(int)\nC++: void SetAutoAdjustSampleDistances(int)\n\nIf AutoAdjustSampleDistances is on, the the ImageSampleDistance\nand the SampleDistance will be varied to achieve the allocated\nrender time of this prop (controlled by the desired update rate\nand any culling in use). If this is an interactive render (more\nthan 1 frame per second) the SampleDistance will be increased,\notherwise it will not be altered (a binary decision, as opposed\nto the ImageSampleDistance which will vary continuously).\n"},
  {(char*)"GetAutoAdjustSampleDistancesMinValue", PyvtkFixedPointVolumeRayCastMapper_GetAutoAdjustSampleDistancesMinValue, METH_VARARGS,
   (char*)"V.GetAutoAdjustSampleDistancesMinValue() -> int\nC++: int GetAutoAdjustSampleDistancesMinValue()\n\nIf AutoAdjustSampleDistances is on, the the ImageSampleDistance\nand the SampleDistance will be varied to achieve the allocated\nrender time of this prop (controlled by the desired update rate\nand any culling in use). If this is an interactive render (more\nthan 1 frame per second) the SampleDistance will be increased,\notherwise it will not be altered (a binary decision, as opposed\nto the ImageSampleDistance which will vary continuously).\n"},
  {(char*)"GetAutoAdjustSampleDistancesMaxValue", PyvtkFixedPointVolumeRayCastMapper_GetAutoAdjustSampleDistancesMaxValue, METH_VARARGS,
   (char*)"V.GetAutoAdjustSampleDistancesMaxValue() -> int\nC++: int GetAutoAdjustSampleDistancesMaxValue()\n\nIf AutoAdjustSampleDistances is on, the the ImageSampleDistance\nand the SampleDistance will be varied to achieve the allocated\nrender time of this prop (controlled by the desired update rate\nand any culling in use). If this is an interactive render (more\nthan 1 frame per second) the SampleDistance will be increased,\notherwise it will not be altered (a binary decision, as opposed\nto the ImageSampleDistance which will vary continuously).\n"},
  {(char*)"GetAutoAdjustSampleDistances", PyvtkFixedPointVolumeRayCastMapper_GetAutoAdjustSampleDistances, METH_VARARGS,
   (char*)"V.GetAutoAdjustSampleDistances() -> int\nC++: int GetAutoAdjustSampleDistances()\n\nIf AutoAdjustSampleDistances is on, the the ImageSampleDistance\nand the SampleDistance will be varied to achieve the allocated\nrender time of this prop (controlled by the desired update rate\nand any culling in use). If this is an interactive render (more\nthan 1 frame per second) the SampleDistance will be increased,\notherwise it will not be altered (a binary decision, as opposed\nto the ImageSampleDistance which will vary continuously).\n"},
  {(char*)"AutoAdjustSampleDistancesOn", PyvtkFixedPointVolumeRayCastMapper_AutoAdjustSampleDistancesOn, METH_VARARGS,
   (char*)"V.AutoAdjustSampleDistancesOn()\nC++: void AutoAdjustSampleDistancesOn()\n\nIf AutoAdjustSampleDistances is on, the the ImageSampleDistance\nand the SampleDistance will be varied to achieve the allocated\nrender time of this prop (controlled by the desired update rate\nand any culling in use). If this is an interactive render (more\nthan 1 frame per second) the SampleDistance will be increased,\notherwise it will not be altered (a binary decision, as opposed\nto the ImageSampleDistance which will vary continuously).\n"},
  {(char*)"AutoAdjustSampleDistancesOff", PyvtkFixedPointVolumeRayCastMapper_AutoAdjustSampleDistancesOff, METH_VARARGS,
   (char*)"V.AutoAdjustSampleDistancesOff()\nC++: void AutoAdjustSampleDistancesOff()\n\nIf AutoAdjustSampleDistances is on, the the ImageSampleDistance\nand the SampleDistance will be varied to achieve the allocated\nrender time of this prop (controlled by the desired update rate\nand any culling in use). If this is an interactive render (more\nthan 1 frame per second) the SampleDistance will be increased,\notherwise it will not be altered (a binary decision, as opposed\nto the ImageSampleDistance which will vary continuously).\n"},
  {(char*)"SetLockSampleDistanceToInputSpacing", PyvtkFixedPointVolumeRayCastMapper_SetLockSampleDistanceToInputSpacing, METH_VARARGS,
   (char*)"V.SetLockSampleDistanceToInputSpacing(int)\nC++: void SetLockSampleDistanceToInputSpacing(int)\n\nAutomatically compute the sample distance from the data spacing. \nWhen the number of voxels is 8, the sample distance will be\nroughly 1/200 the average voxel size. The distance will grow\nproportionally to numVoxels^(1/3) until it reaches 1/2 average\nvoxel size when number of voxels is 1E6. Note that\nScalarOpacityUnitDistance is still taken into account and if\ndifferent than 1, will effect the sample distance.\n"},
  {(char*)"GetLockSampleDistanceToInputSpacingMinValue", PyvtkFixedPointVolumeRayCastMapper_GetLockSampleDistanceToInputSpacingMinValue, METH_VARARGS,
   (char*)"V.GetLockSampleDistanceToInputSpacingMinValue() -> int\nC++: int GetLockSampleDistanceToInputSpacingMinValue()\n\nAutomatically compute the sample distance from the data spacing. \nWhen the number of voxels is 8, the sample distance will be\nroughly 1/200 the average voxel size. The distance will grow\nproportionally to numVoxels^(1/3) until it reaches 1/2 average\nvoxel size when number of voxels is 1E6. Note that\nScalarOpacityUnitDistance is still taken into account and if\ndifferent than 1, will effect the sample distance.\n"},
  {(char*)"GetLockSampleDistanceToInputSpacingMaxValue", PyvtkFixedPointVolumeRayCastMapper_GetLockSampleDistanceToInputSpacingMaxValue, METH_VARARGS,
   (char*)"V.GetLockSampleDistanceToInputSpacingMaxValue() -> int\nC++: int GetLockSampleDistanceToInputSpacingMaxValue()\n\nAutomatically compute the sample distance from the data spacing. \nWhen the number of voxels is 8, the sample distance will be\nroughly 1/200 the average voxel size. The distance will grow\nproportionally to numVoxels^(1/3) until it reaches 1/2 average\nvoxel size when number of voxels is 1E6. Note that\nScalarOpacityUnitDistance is still taken into account and if\ndifferent than 1, will effect the sample distance.\n"},
  {(char*)"GetLockSampleDistanceToInputSpacing", PyvtkFixedPointVolumeRayCastMapper_GetLockSampleDistanceToInputSpacing, METH_VARARGS,
   (char*)"V.GetLockSampleDistanceToInputSpacing() -> int\nC++: int GetLockSampleDistanceToInputSpacing()\n\nAutomatically compute the sample distance from the data spacing. \nWhen the number of voxels is 8, the sample distance will be\nroughly 1/200 the average voxel size. The distance will grow\nproportionally to numVoxels^(1/3) until it reaches 1/2 average\nvoxel size when number of voxels is 1E6. Note that\nScalarOpacityUnitDistance is still taken into account and if\ndifferent than 1, will effect the sample distance.\n"},
  {(char*)"LockSampleDistanceToInputSpacingOn", PyvtkFixedPointVolumeRayCastMapper_LockSampleDistanceToInputSpacingOn, METH_VARARGS,
   (char*)"V.LockSampleDistanceToInputSpacingOn()\nC++: void LockSampleDistanceToInputSpacingOn()\n\nAutomatically compute the sample distance from the data spacing. \nWhen the number of voxels is 8, the sample distance will be\nroughly 1/200 the average voxel size. The distance will grow\nproportionally to numVoxels^(1/3) until it reaches 1/2 average\nvoxel size when number of voxels is 1E6. Note that\nScalarOpacityUnitDistance is still taken into account and if\ndifferent than 1, will effect the sample distance.\n"},
  {(char*)"LockSampleDistanceToInputSpacingOff", PyvtkFixedPointVolumeRayCastMapper_LockSampleDistanceToInputSpacingOff, METH_VARARGS,
   (char*)"V.LockSampleDistanceToInputSpacingOff()\nC++: void LockSampleDistanceToInputSpacingOff()\n\nAutomatically compute the sample distance from the data spacing. \nWhen the number of voxels is 8, the sample distance will be\nroughly 1/200 the average voxel size. The distance will grow\nproportionally to numVoxels^(1/3) until it reaches 1/2 average\nvoxel size when number of voxels is 1E6. Note that\nScalarOpacityUnitDistance is still taken into account and if\ndifferent than 1, will effect the sample distance.\n"},
  {(char*)"SetNumberOfThreads", PyvtkFixedPointVolumeRayCastMapper_SetNumberOfThreads, METH_VARARGS,
   (char*)"V.SetNumberOfThreads(int)\nC++: void SetNumberOfThreads(int num)\n\nSet/Get the number of threads to use. This by default is equal to\nthe number of available processors detected. WARNING: If number\nof threads > 1, results may not be consistent.\n"},
  {(char*)"GetNumberOfThreads", PyvtkFixedPointVolumeRayCastMapper_GetNumberOfThreads, METH_VARARGS,
   (char*)"V.GetNumberOfThreads() -> int\nC++: int GetNumberOfThreads()\n\nSet/Get the number of threads to use. This by default is equal to\nthe number of available processors detected. WARNING: If number\nof threads > 1, results may not be consistent.\n"},
  {(char*)"SetIntermixIntersectingGeometry", PyvtkFixedPointVolumeRayCastMapper_SetIntermixIntersectingGeometry, METH_VARARGS,
   (char*)"V.SetIntermixIntersectingGeometry(int)\nC++: void SetIntermixIntersectingGeometry(int)\n\nIf IntermixIntersectingGeometry is turned on, the zbuffer will be\ncaptured and used to limit the traversal of the rays.\n"},
  {(char*)"GetIntermixIntersectingGeometryMinValue", PyvtkFixedPointVolumeRayCastMapper_GetIntermixIntersectingGeometryMinValue, METH_VARARGS,
   (char*)"V.GetIntermixIntersectingGeometryMinValue() -> int\nC++: int GetIntermixIntersectingGeometryMinValue()\n\nIf IntermixIntersectingGeometry is turned on, the zbuffer will be\ncaptured and used to limit the traversal of the rays.\n"},
  {(char*)"GetIntermixIntersectingGeometryMaxValue", PyvtkFixedPointVolumeRayCastMapper_GetIntermixIntersectingGeometryMaxValue, METH_VARARGS,
   (char*)"V.GetIntermixIntersectingGeometryMaxValue() -> int\nC++: int GetIntermixIntersectingGeometryMaxValue()\n\nIf IntermixIntersectingGeometry is turned on, the zbuffer will be\ncaptured and used to limit the traversal of the rays.\n"},
  {(char*)"GetIntermixIntersectingGeometry", PyvtkFixedPointVolumeRayCastMapper_GetIntermixIntersectingGeometry, METH_VARARGS,
   (char*)"V.GetIntermixIntersectingGeometry() -> int\nC++: int GetIntermixIntersectingGeometry()\n\nIf IntermixIntersectingGeometry is turned on, the zbuffer will be\ncaptured and used to limit the traversal of the rays.\n"},
  {(char*)"IntermixIntersectingGeometryOn", PyvtkFixedPointVolumeRayCastMapper_IntermixIntersectingGeometryOn, METH_VARARGS,
   (char*)"V.IntermixIntersectingGeometryOn()\nC++: void IntermixIntersectingGeometryOn()\n\nIf IntermixIntersectingGeometry is turned on, the zbuffer will be\ncaptured and used to limit the traversal of the rays.\n"},
  {(char*)"IntermixIntersectingGeometryOff", PyvtkFixedPointVolumeRayCastMapper_IntermixIntersectingGeometryOff, METH_VARARGS,
   (char*)"V.IntermixIntersectingGeometryOff()\nC++: void IntermixIntersectingGeometryOff()\n\nIf IntermixIntersectingGeometry is turned on, the zbuffer will be\ncaptured and used to limit the traversal of the rays.\n"},
  {(char*)"ComputeRequiredImageSampleDistance", PyvtkFixedPointVolumeRayCastMapper_ComputeRequiredImageSampleDistance, METH_VARARGS,
   (char*)"V.ComputeRequiredImageSampleDistance(float, vtkRenderer) -> float\nC++: float ComputeRequiredImageSampleDistance(float desiredTime,\n    vtkRenderer *ren)\nV.ComputeRequiredImageSampleDistance(float, vtkRenderer,\n    vtkVolume) -> float\nC++: float ComputeRequiredImageSampleDistance(float desiredTime,\n    vtkRenderer *ren, vtkVolume *vol)\n\nWhat is the image sample distance required to achieve the desired\ntime? A version of this method is provided that does not require\nthe volume argument since if you are using an LODProp3D you may\nnot know this information. If you use this version you must be\ncertain that the ray cast mapper is only used for one volume (and\nnot shared among multiple volumes)\n"},
  {(char*)"Render", PyvtkFixedPointVolumeRayCastMapper_Render, METH_VARARGS,
   (char*)"V.Render(vtkRenderer, vtkVolume)\nC++: void Render(vtkRenderer *, vtkVolume *)\n\nWARNING: INTERNAL METHOD - NOT INTENDED FOR GENERAL USE\nInitialize rendering for this volume.\n"},
  {(char*)"ToFixedPointPosition", PyvtkFixedPointVolumeRayCastMapper_ToFixedPointPosition, METH_VARARGS,
   (char*)"V.ToFixedPointPosition(float) -> int\nC++: unsigned int ToFixedPointPosition(float val)\nV.ToFixedPointPosition([float, float, float], [int, int, int])\nC++: void ToFixedPointPosition(float in[3], unsigned int out[3])\n\n"},
  {(char*)"ToFixedPointDirection", PyvtkFixedPointVolumeRayCastMapper_ToFixedPointDirection, METH_VARARGS,
   (char*)"V.ToFixedPointDirection(float) -> int\nC++: unsigned int ToFixedPointDirection(float dir)\nV.ToFixedPointDirection([float, float, float], [int, int, int])\nC++: void ToFixedPointDirection(float in[3], unsigned int out[3])\n\n"},
  {(char*)"FixedPointIncrement", PyvtkFixedPointVolumeRayCastMapper_FixedPointIncrement, METH_VARARGS,
   (char*)"V.FixedPointIncrement([int, int, int], [int, int, int])\nC++: void FixedPointIncrement(unsigned int position[3],\n    unsigned int increment[3])\n\n"},
  {(char*)"GetFloatTripleFromPointer", PyvtkFixedPointVolumeRayCastMapper_GetFloatTripleFromPointer, METH_VARARGS,
   (char*)"V.GetFloatTripleFromPointer([float, float, float], [float, ...])\nC++: void GetFloatTripleFromPointer(float v[3], float *ptr)\n\n"},
  {(char*)"GetUIntTripleFromPointer", PyvtkFixedPointVolumeRayCastMapper_GetUIntTripleFromPointer, METH_VARARGS,
   (char*)"V.GetUIntTripleFromPointer([int, int, int], [int, ...])\nC++: void GetUIntTripleFromPointer(unsigned int v[3],\n    unsigned int *ptr)\n\n"},
  {(char*)"ShiftVectorDown", PyvtkFixedPointVolumeRayCastMapper_ShiftVectorDown, METH_VARARGS,
   (char*)"V.ShiftVectorDown([int, int, int], [int, int, int])\nC++: void ShiftVectorDown(unsigned int in[3], unsigned int out[3])\n\n"},
  {(char*)"CheckMinMaxVolumeFlag", PyvtkFixedPointVolumeRayCastMapper_CheckMinMaxVolumeFlag, METH_VARARGS,
   (char*)"V.CheckMinMaxVolumeFlag([int, int, int], int) -> int\nC++: int CheckMinMaxVolumeFlag(unsigned int pos[3], int c)\n\n"},
  {(char*)"CheckMIPMinMaxVolumeFlag", PyvtkFixedPointVolumeRayCastMapper_CheckMIPMinMaxVolumeFlag, METH_VARARGS,
   (char*)"V.CheckMIPMinMaxVolumeFlag([int, int, int], int, int, int) -> int\nC++: int CheckMIPMinMaxVolumeFlag(unsigned int pos[3], int c,\n    unsigned short maxIdx, int flip)\n\n"},
  {(char*)"LookupColorUC", PyvtkFixedPointVolumeRayCastMapper_LookupColorUC, METH_VARARGS,
   (char*)"V.LookupColorUC([int, ...], [int, ...], int, [int, int, int, int])\nC++: void LookupColorUC(unsigned short *colorTable,\n    unsigned short *scalarOpacityTable, unsigned short index,\n    unsigned char color[4])\n\n"},
  {(char*)"LookupDependentColorUC", PyvtkFixedPointVolumeRayCastMapper_LookupDependentColorUC, METH_VARARGS,
   (char*)"V.LookupDependentColorUC([int, ...], [int, ...], [int, int, int,\n    int], int, [int, int, int, int])\nC++: void LookupDependentColorUC(unsigned short *colorTable,\n    unsigned short *scalarOpacityTable, unsigned short index[4],\n    int components, unsigned char color[4])\n\n"},
  {(char*)"CheckIfCropped", PyvtkFixedPointVolumeRayCastMapper_CheckIfCropped, METH_VARARGS,
   (char*)"V.CheckIfCropped([int, int, int]) -> int\nC++: int CheckIfCropped(unsigned int pos[3])\n\n"},
  {(char*)"GetRenderWindow", PyvtkFixedPointVolumeRayCastMapper_GetRenderWindow, METH_VARARGS,
   (char*)"V.GetRenderWindow() -> vtkRenderWindow\nC++: vtkRenderWindow *GetRenderWindow()\n\n"},
  {(char*)"GetMIPHelper", PyvtkFixedPointVolumeRayCastMapper_GetMIPHelper, METH_VARARGS,
   (char*)"V.GetMIPHelper() -> vtkFixedPointVolumeRayCastMIPHelper\nC++: vtkFixedPointVolumeRayCastMIPHelper *GetMIPHelper()\n\n"},
  {(char*)"GetCompositeHelper", PyvtkFixedPointVolumeRayCastMapper_GetCompositeHelper, METH_VARARGS,
   (char*)"V.GetCompositeHelper()\n    -> vtkFixedPointVolumeRayCastCompositeHelper\nC++: vtkFixedPointVolumeRayCastCompositeHelper *GetCompositeHelper(\n    )\n\n"},
  {(char*)"GetCompositeGOHelper", PyvtkFixedPointVolumeRayCastMapper_GetCompositeGOHelper, METH_VARARGS,
   (char*)"V.GetCompositeGOHelper()\n    -> vtkFixedPointVolumeRayCastCompositeGOHelper\nC++: vtkFixedPointVolumeRayCastCompositeGOHelper *GetCompositeGOHelper(\n    )\n\n"},
  {(char*)"GetCompositeGOShadeHelper", PyvtkFixedPointVolumeRayCastMapper_GetCompositeGOShadeHelper, METH_VARARGS,
   (char*)"V.GetCompositeGOShadeHelper()\n    -> vtkFixedPointVolumeRayCastCompositeGOShadeHelper\nC++: vtkFixedPointVolumeRayCastCompositeGOShadeHelper *GetCompositeGOShadeHelper(\n    )\n\n"},
  {(char*)"GetCompositeShadeHelper", PyvtkFixedPointVolumeRayCastMapper_GetCompositeShadeHelper, METH_VARARGS,
   (char*)"V.GetCompositeShadeHelper()\n    -> vtkFixedPointVolumeRayCastCompositeShadeHelper\nC++: vtkFixedPointVolumeRayCastCompositeShadeHelper *GetCompositeShadeHelper(\n    )\n\n"},
  {(char*)"GetTableShift", PyvtkFixedPointVolumeRayCastMapper_GetTableShift, METH_VARARGS,
   (char*)"V.GetTableShift() -> (float, float, float, float)\nC++: float *GetTableShift()\n\n"},
  {(char*)"GetTableScale", PyvtkFixedPointVolumeRayCastMapper_GetTableScale, METH_VARARGS,
   (char*)"V.GetTableScale() -> (float, float, float, float)\nC++: float *GetTableScale()\n\n"},
  {(char*)"GetShadingRequired", PyvtkFixedPointVolumeRayCastMapper_GetShadingRequired, METH_VARARGS,
   (char*)"V.GetShadingRequired() -> int\nC++: int GetShadingRequired()\n\n"},
  {(char*)"GetGradientOpacityRequired", PyvtkFixedPointVolumeRayCastMapper_GetGradientOpacityRequired, METH_VARARGS,
   (char*)"V.GetGradientOpacityRequired() -> int\nC++: int GetGradientOpacityRequired()\n\n"},
  {(char*)"GetCurrentScalars", PyvtkFixedPointVolumeRayCastMapper_GetCurrentScalars, METH_VARARGS,
   (char*)"V.GetCurrentScalars() -> vtkDataArray\nC++: vtkDataArray *GetCurrentScalars()\n\n"},
  {(char*)"GetPreviousScalars", PyvtkFixedPointVolumeRayCastMapper_GetPreviousScalars, METH_VARARGS,
   (char*)"V.GetPreviousScalars() -> vtkDataArray\nC++: vtkDataArray *GetPreviousScalars()\n\n"},
  {(char*)"GetRowBounds", PyvtkFixedPointVolumeRayCastMapper_GetRowBounds, METH_VARARGS,
   (char*)"V.GetRowBounds() -> (int, ...)\nC++: int *GetRowBounds()\n\n"},
  {(char*)"GetColorTable", PyvtkFixedPointVolumeRayCastMapper_GetColorTable, METH_VARARGS,
   (char*)"V.GetColorTable(int) -> (int, ...)\nC++: unsigned short *GetColorTable(int c)\n\n"},
  {(char*)"GetScalarOpacityTable", PyvtkFixedPointVolumeRayCastMapper_GetScalarOpacityTable, METH_VARARGS,
   (char*)"V.GetScalarOpacityTable(int) -> (int, ...)\nC++: unsigned short *GetScalarOpacityTable(int c)\n\n"},
  {(char*)"GetGradientOpacityTable", PyvtkFixedPointVolumeRayCastMapper_GetGradientOpacityTable, METH_VARARGS,
   (char*)"V.GetGradientOpacityTable(int) -> (int, ...)\nC++: unsigned short *GetGradientOpacityTable(int c)\n\n"},
  {(char*)"GetVolume", PyvtkFixedPointVolumeRayCastMapper_GetVolume, METH_VARARGS,
   (char*)"V.GetVolume() -> vtkVolume\nC++: vtkVolume *GetVolume()\n\n"},
  {(char*)"GetDiffuseShadingTable", PyvtkFixedPointVolumeRayCastMapper_GetDiffuseShadingTable, METH_VARARGS,
   (char*)"V.GetDiffuseShadingTable(int) -> (int, ...)\nC++: unsigned short *GetDiffuseShadingTable(int c)\n\n"},
  {(char*)"GetSpecularShadingTable", PyvtkFixedPointVolumeRayCastMapper_GetSpecularShadingTable, METH_VARARGS,
   (char*)"V.GetSpecularShadingTable(int) -> (int, ...)\nC++: unsigned short *GetSpecularShadingTable(int c)\n\n"},
  {(char*)"ComputeRayInfo", PyvtkFixedPointVolumeRayCastMapper_ComputeRayInfo, METH_VARARGS,
   (char*)"V.ComputeRayInfo(int, int, [int, int, int], [int, int, int], [int,\n     ...])\nC++: void ComputeRayInfo(int x, int y, unsigned int pos[3],\n    unsigned int dir[3], unsigned int *numSteps)\n\n"},
  {(char*)"InitializeRayInfo", PyvtkFixedPointVolumeRayCastMapper_InitializeRayInfo, METH_VARARGS,
   (char*)"V.InitializeRayInfo(vtkVolume)\nC++: void InitializeRayInfo(vtkVolume *vol)\n\n"},
  {(char*)"ShouldUseNearestNeighborInterpolation", PyvtkFixedPointVolumeRayCastMapper_ShouldUseNearestNeighborInterpolation, METH_VARARGS,
   (char*)"V.ShouldUseNearestNeighborInterpolation(vtkVolume) -> int\nC++: int ShouldUseNearestNeighborInterpolation(vtkVolume *vol)\n\n"},
  {(char*)"SetRayCastImage", PyvtkFixedPointVolumeRayCastMapper_SetRayCastImage, METH_VARARGS,
   (char*)"V.SetRayCastImage(vtkFixedPointRayCastImage)\nC++: void SetRayCastImage(vtkFixedPointRayCastImage *)\n\nSet / Get the underlying image object. One will be automatically\ncreated - only need to set it when using from an AMR mapper which\nrenders multiple times into the same image.\n"},
  {(char*)"GetRayCastImage", PyvtkFixedPointVolumeRayCastMapper_GetRayCastImage, METH_VARARGS,
   (char*)"V.GetRayCastImage() -> vtkFixedPointRayCastImage\nC++: vtkFixedPointRayCastImage *GetRayCastImage()\n\nSet / Get the underlying image object. One will be automatically\ncreated - only need to set it when using from an AMR mapper which\nrenders multiple times into the same image.\n"},
  {(char*)"PerImageInitialization", PyvtkFixedPointVolumeRayCastMapper_PerImageInitialization, METH_VARARGS,
   (char*)"V.PerImageInitialization(vtkRenderer, vtkVolume, int, [float,\n    ...], [float, ...], [int, ...]) -> int\nC++: int PerImageInitialization(vtkRenderer *, vtkVolume *, int,\n    double *, double *, int *)\n\n"},
  {(char*)"PerVolumeInitialization", PyvtkFixedPointVolumeRayCastMapper_PerVolumeInitialization, METH_VARARGS,
   (char*)"V.PerVolumeInitialization(vtkRenderer, vtkVolume)\nC++: void PerVolumeInitialization(vtkRenderer *, vtkVolume *)\n\n"},
  {(char*)"PerSubVolumeInitialization", PyvtkFixedPointVolumeRayCastMapper_PerSubVolumeInitialization, METH_VARARGS,
   (char*)"V.PerSubVolumeInitialization(vtkRenderer, vtkVolume, int)\nC++: void PerSubVolumeInitialization(vtkRenderer *, vtkVolume *,\n    int)\n\n"},
  {(char*)"RenderSubVolume", PyvtkFixedPointVolumeRayCastMapper_RenderSubVolume, METH_VARARGS,
   (char*)"V.RenderSubVolume()\nC++: void RenderSubVolume()\n\n"},
  {(char*)"DisplayRenderedImage", PyvtkFixedPointVolumeRayCastMapper_DisplayRenderedImage, METH_VARARGS,
   (char*)"V.DisplayRenderedImage(vtkRenderer, vtkVolume)\nC++: void DisplayRenderedImage(vtkRenderer *, vtkVolume *)\n\n"},
  {(char*)"AbortRender", PyvtkFixedPointVolumeRayCastMapper_AbortRender, METH_VARARGS,
   (char*)"V.AbortRender()\nC++: void AbortRender()\n\n"},
  {(char*)"CreateCanonicalView", PyvtkFixedPointVolumeRayCastMapper_CreateCanonicalView, METH_VARARGS,
   (char*)"V.CreateCanonicalView(vtkVolume, vtkImageData, int, [float, float,\n     float], [float, float, float])\nC++: void CreateCanonicalView(vtkVolume *volume,\n    vtkImageData *image, int blend_mode, double viewDirection[3],\n    double viewUp[3])\n\n"},
  {(char*)"GetEstimatedRenderTime", PyvtkFixedPointVolumeRayCastMapper_GetEstimatedRenderTime, METH_VARARGS,
   (char*)"V.GetEstimatedRenderTime(vtkRenderer, vtkVolume) -> float\nC++: float GetEstimatedRenderTime(vtkRenderer *ren,\n    vtkVolume *vol)\nV.GetEstimatedRenderTime(vtkRenderer) -> float\nC++: float GetEstimatedRenderTime(vtkRenderer *ren)\n\nGet an estimate of the rendering time for a given volume /\nrenderer. Only valid if this mapper has been used to render that\nvolume for that renderer previously. Estimate is good when the\nviewing parameters have not changed much since that last render.\n"},
  {(char*)"SetFinalColorWindow", PyvtkFixedPointVolumeRayCastMapper_SetFinalColorWindow, METH_VARARGS,
   (char*)"V.SetFinalColorWindow(float)\nC++: void SetFinalColorWindow(float a)\n\nSet/Get the window / level applied to the final color. This\nallows brightness / contrast adjustments on the final image.\nwindow is the width of the window. level is the center of the\nwindow. Initial window value is 1.0 Initial level value is 0.5\nwindow cannot be null but can be negative, this way values will\nbe reversed. |window| can be larger than 1.0 level can be any\nreal value.\n"},
  {(char*)"GetFinalColorWindow", PyvtkFixedPointVolumeRayCastMapper_GetFinalColorWindow, METH_VARARGS,
   (char*)"V.GetFinalColorWindow() -> float\nC++: float GetFinalColorWindow()\n\nSet/Get the window / level applied to the final color. This\nallows brightness / contrast adjustments on the final image.\nwindow is the width of the window. level is the center of the\nwindow. Initial window value is 1.0 Initial level value is 0.5\nwindow cannot be null but can be negative, this way values will\nbe reversed. |window| can be larger than 1.0 level can be any\nreal value.\n"},
  {(char*)"SetFinalColorLevel", PyvtkFixedPointVolumeRayCastMapper_SetFinalColorLevel, METH_VARARGS,
   (char*)"V.SetFinalColorLevel(float)\nC++: void SetFinalColorLevel(float a)\n\nSet/Get the window / level applied to the final color. This\nallows brightness / contrast adjustments on the final image.\nwindow is the width of the window. level is the center of the\nwindow. Initial window value is 1.0 Initial level value is 0.5\nwindow cannot be null but can be negative, this way values will\nbe reversed. |window| can be larger than 1.0 level can be any\nreal value.\n"},
  {(char*)"GetFinalColorLevel", PyvtkFixedPointVolumeRayCastMapper_GetFinalColorLevel, METH_VARARGS,
   (char*)"V.GetFinalColorLevel() -> float\nC++: float GetFinalColorLevel()\n\nSet/Get the window / level applied to the final color. This\nallows brightness / contrast adjustments on the final image.\nwindow is the width of the window. level is the center of the\nwindow. Initial window value is 1.0 Initial level value is 0.5\nwindow cannot be null but can be negative, this way values will\nbe reversed. |window| can be larger than 1.0 level can be any\nreal value.\n"},
  {(char*)"GetFlipMIPComparison", PyvtkFixedPointVolumeRayCastMapper_GetFlipMIPComparison, METH_VARARGS,
   (char*)"V.GetFlipMIPComparison() -> int\nC++: int GetFlipMIPComparison()\n\n"},
  {(char*)"ReleaseGraphicsResources", PyvtkFixedPointVolumeRayCastMapper_ReleaseGraphicsResources, METH_VARARGS,
   (char*)"V.ReleaseGraphicsResources(vtkWindow)\nC++: virtual void ReleaseGraphicsResources(vtkWindow *)\n\nWARNING: INTERNAL METHOD - NOT INTENDED FOR GENERAL USE Release\nany graphics resources that are being consumed by this mapper.\nThe parameter window could be used to determine which graphic\nresources to release.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkFixedPointVolumeRayCastMapper_StaticNew()
{
  return vtkFixedPointVolumeRayCastMapper::New();
}

PyObject *PyVTKClass_vtkFixedPointVolumeRayCastMapperNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkFixedPointVolumeRayCastMapper_StaticNew,
    PyvtkFixedPointVolumeRayCastMapper_Methods,
    "vtkFixedPointVolumeRayCastMapper", modulename,
    NULL, NULL,
    PyvtkFixedPointVolumeRayCastMapper_Doc(),
    PyVTKClass_vtkVolumeMapperNew(modulename));
  return cls;
}

const char **PyvtkFixedPointVolumeRayCastMapper_Doc()
{
  static const char *docstring[] = {
    "vtkFixedPointVolumeRayCastMapper - A fixed point mapper for volumes\n\n",
    "Superclass: vtkVolumeMapper\n\n",
    "This is a software ray caster for rendering volumes in vtkImageData.\nIt works with all input data types and up to four components. It\nperforms composite or MIP rendering, and can be intermixed with\ngeometric data. Space leaping is used to speed up the rendering\nprocess. In addition, calculation are performed in 15 bit fixed point\nprecision. This mapper is threaded, and will interleave scan lines\na",
    "cross processors.\n\nWARNING: This ray caster may not produce consistent results when the\nnumber of threads exceeds 1. The class warns if the number of threads\n> 1. The differences may be subtle. Applications should decide if the\ntrade-off in performance is worth the lack of consistency.\n\nThis mapper is a good replacement for vtkVolumeRayCastMapper EXCEPT:\n- it does not do isosurface ray casting\n- i",
    "t does only interpolate before classify compositing\n- it does only maximum scalar value MIP\n\nThe vtkVolumeRayCastMapper CANNOT be used in these instances when a\nvtkFixedPointVolumeRayCastMapper can be used:\n- if the data is not unsigned char or unsigned short\n- if the data has more than one component\n\nThis mapper handles all data type from unsigned char through double.\nHowever, some of the interna",
    "l calcultions are performed in float and\ntherefore even the full float range may cause problems for this\nmapper (both in scalar data values and in spacing between samples).\n\nSpace leaping is performed by creating a sub-sampled volume. 4x4x4\ncells in the original volume are represented by a min, max, and\ncombined gradient and flag value. The min max volume has three\nunsigned shorts per 4x4x4 group ",
    "of cells from the original volume -\none reprenting the minimum scalar index (the scalar value adjusted to\nfit in the 15 bit range), the maximum scalar index, and a third\nunsigned short which is both the maximum gradient opacity in the\nneighborhood (an unsigned char) and the flag that is filled in for\nthe current lookup tables to indicate whether this region can be\nskipped.\n\nSee Also:\n\nvtkVolumeMap",
    "per\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkFixedPointVolumeRayCastMapper(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkFixedPointVolumeRayCastMapperNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkFixedPointVolumeRayCastMapper", o) != 0)
    {
    Py_DECREF(o);
    }

  for (int c = 0; c < 2; c++)
    {
    static const struct { const char *name; int value; }
      constants[2] = {
        { "VTKKW_FP_SHIFT", 15 },
        { "VTKKW_FPMM_SHIFT", 17 },
      };

    o = PyInt_FromLong(constants[c].value);
    if (o)
      {
      PyDict_SetItemString(dict, (char *)constants[c].name, o);
      Py_DECREF(o);
      }
    }

  o = PyFloat_FromDouble(0x7fff);
  if (o)
    {
    PyDict_SetItemString(dict, (char *)"VTKKW_FP_MASK", o);
    Py_DECREF(o);
    }
  o = PyFloat_FromDouble(32767.0);
  if (o)
    {
    PyDict_SetItemString(dict, (char *)"VTKKW_FP_SCALE", o);
    Py_DECREF(o);
    }
}

