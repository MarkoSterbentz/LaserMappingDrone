// python wrapper for vtkGPUVolumeRayCastMapper
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkGPUVolumeRayCastMapper.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkGPUVolumeRayCastMapper(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkGPUVolumeRayCastMapperNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkVolumeMapperNew
extern "C" { PyObject *PyVTKClass_vtkVolumeMapperNew(const char *); }
#define DECLARED_PyVTKClass_vtkVolumeMapperNew
#endif

static const char **PyvtkGPUVolumeRayCastMapper_Doc();


static PyObject *
PyvtkGPUVolumeRayCastMapper_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGPUVolumeRayCastMapper *op = static_cast<vtkGPUVolumeRayCastMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkGPUVolumeRayCastMapper::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGPUVolumeRayCastMapper_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGPUVolumeRayCastMapper *op = static_cast<vtkGPUVolumeRayCastMapper *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkGPUVolumeRayCastMapper::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGPUVolumeRayCastMapper_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGPUVolumeRayCastMapper *op = static_cast<vtkGPUVolumeRayCastMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkGPUVolumeRayCastMapper *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkGPUVolumeRayCastMapper::NewInstance());

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
PyvtkGPUVolumeRayCastMapper_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkGPUVolumeRayCastMapper *tempr = vtkGPUVolumeRayCastMapper::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGPUVolumeRayCastMapper_SetAutoAdjustSampleDistances(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAutoAdjustSampleDistances");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGPUVolumeRayCastMapper *op = static_cast<vtkGPUVolumeRayCastMapper *>(vp);

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
      op->vtkGPUVolumeRayCastMapper::SetAutoAdjustSampleDistances(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGPUVolumeRayCastMapper_GetAutoAdjustSampleDistancesMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAutoAdjustSampleDistancesMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGPUVolumeRayCastMapper *op = static_cast<vtkGPUVolumeRayCastMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetAutoAdjustSampleDistancesMinValue() :
      op->vtkGPUVolumeRayCastMapper::GetAutoAdjustSampleDistancesMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGPUVolumeRayCastMapper_GetAutoAdjustSampleDistancesMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAutoAdjustSampleDistancesMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGPUVolumeRayCastMapper *op = static_cast<vtkGPUVolumeRayCastMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetAutoAdjustSampleDistancesMaxValue() :
      op->vtkGPUVolumeRayCastMapper::GetAutoAdjustSampleDistancesMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGPUVolumeRayCastMapper_GetAutoAdjustSampleDistances(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAutoAdjustSampleDistances");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGPUVolumeRayCastMapper *op = static_cast<vtkGPUVolumeRayCastMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetAutoAdjustSampleDistances() :
      op->vtkGPUVolumeRayCastMapper::GetAutoAdjustSampleDistances());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGPUVolumeRayCastMapper_AutoAdjustSampleDistancesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AutoAdjustSampleDistancesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGPUVolumeRayCastMapper *op = static_cast<vtkGPUVolumeRayCastMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->AutoAdjustSampleDistancesOn();
      }
    else
      {
      op->vtkGPUVolumeRayCastMapper::AutoAdjustSampleDistancesOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGPUVolumeRayCastMapper_AutoAdjustSampleDistancesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AutoAdjustSampleDistancesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGPUVolumeRayCastMapper *op = static_cast<vtkGPUVolumeRayCastMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->AutoAdjustSampleDistancesOff();
      }
    else
      {
      op->vtkGPUVolumeRayCastMapper::AutoAdjustSampleDistancesOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGPUVolumeRayCastMapper_SetSampleDistance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSampleDistance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGPUVolumeRayCastMapper *op = static_cast<vtkGPUVolumeRayCastMapper *>(vp);

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
      op->vtkGPUVolumeRayCastMapper::SetSampleDistance(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGPUVolumeRayCastMapper_GetSampleDistance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSampleDistance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGPUVolumeRayCastMapper *op = static_cast<vtkGPUVolumeRayCastMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    float tempr = (ap.IsBound() ?
      op->GetSampleDistance() :
      op->vtkGPUVolumeRayCastMapper::GetSampleDistance());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGPUVolumeRayCastMapper_SetImageSampleDistance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetImageSampleDistance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGPUVolumeRayCastMapper *op = static_cast<vtkGPUVolumeRayCastMapper *>(vp);

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
      op->vtkGPUVolumeRayCastMapper::SetImageSampleDistance(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGPUVolumeRayCastMapper_GetImageSampleDistanceMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetImageSampleDistanceMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGPUVolumeRayCastMapper *op = static_cast<vtkGPUVolumeRayCastMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    float tempr = (ap.IsBound() ?
      op->GetImageSampleDistanceMinValue() :
      op->vtkGPUVolumeRayCastMapper::GetImageSampleDistanceMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGPUVolumeRayCastMapper_GetImageSampleDistanceMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetImageSampleDistanceMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGPUVolumeRayCastMapper *op = static_cast<vtkGPUVolumeRayCastMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    float tempr = (ap.IsBound() ?
      op->GetImageSampleDistanceMaxValue() :
      op->vtkGPUVolumeRayCastMapper::GetImageSampleDistanceMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGPUVolumeRayCastMapper_GetImageSampleDistance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetImageSampleDistance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGPUVolumeRayCastMapper *op = static_cast<vtkGPUVolumeRayCastMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    float tempr = (ap.IsBound() ?
      op->GetImageSampleDistance() :
      op->vtkGPUVolumeRayCastMapper::GetImageSampleDistance());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGPUVolumeRayCastMapper_SetMinimumImageSampleDistance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMinimumImageSampleDistance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGPUVolumeRayCastMapper *op = static_cast<vtkGPUVolumeRayCastMapper *>(vp);

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
      op->vtkGPUVolumeRayCastMapper::SetMinimumImageSampleDistance(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGPUVolumeRayCastMapper_GetMinimumImageSampleDistanceMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMinimumImageSampleDistanceMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGPUVolumeRayCastMapper *op = static_cast<vtkGPUVolumeRayCastMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    float tempr = (ap.IsBound() ?
      op->GetMinimumImageSampleDistanceMinValue() :
      op->vtkGPUVolumeRayCastMapper::GetMinimumImageSampleDistanceMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGPUVolumeRayCastMapper_GetMinimumImageSampleDistanceMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMinimumImageSampleDistanceMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGPUVolumeRayCastMapper *op = static_cast<vtkGPUVolumeRayCastMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    float tempr = (ap.IsBound() ?
      op->GetMinimumImageSampleDistanceMaxValue() :
      op->vtkGPUVolumeRayCastMapper::GetMinimumImageSampleDistanceMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGPUVolumeRayCastMapper_GetMinimumImageSampleDistance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMinimumImageSampleDistance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGPUVolumeRayCastMapper *op = static_cast<vtkGPUVolumeRayCastMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    float tempr = (ap.IsBound() ?
      op->GetMinimumImageSampleDistance() :
      op->vtkGPUVolumeRayCastMapper::GetMinimumImageSampleDistance());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGPUVolumeRayCastMapper_SetMaximumImageSampleDistance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaximumImageSampleDistance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGPUVolumeRayCastMapper *op = static_cast<vtkGPUVolumeRayCastMapper *>(vp);

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
      op->vtkGPUVolumeRayCastMapper::SetMaximumImageSampleDistance(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGPUVolumeRayCastMapper_GetMaximumImageSampleDistanceMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumImageSampleDistanceMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGPUVolumeRayCastMapper *op = static_cast<vtkGPUVolumeRayCastMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    float tempr = (ap.IsBound() ?
      op->GetMaximumImageSampleDistanceMinValue() :
      op->vtkGPUVolumeRayCastMapper::GetMaximumImageSampleDistanceMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGPUVolumeRayCastMapper_GetMaximumImageSampleDistanceMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumImageSampleDistanceMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGPUVolumeRayCastMapper *op = static_cast<vtkGPUVolumeRayCastMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    float tempr = (ap.IsBound() ?
      op->GetMaximumImageSampleDistanceMaxValue() :
      op->vtkGPUVolumeRayCastMapper::GetMaximumImageSampleDistanceMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGPUVolumeRayCastMapper_GetMaximumImageSampleDistance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumImageSampleDistance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGPUVolumeRayCastMapper *op = static_cast<vtkGPUVolumeRayCastMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    float tempr = (ap.IsBound() ?
      op->GetMaximumImageSampleDistance() :
      op->vtkGPUVolumeRayCastMapper::GetMaximumImageSampleDistance());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGPUVolumeRayCastMapper_SetFinalColorWindow(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFinalColorWindow");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGPUVolumeRayCastMapper *op = static_cast<vtkGPUVolumeRayCastMapper *>(vp);

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
      op->vtkGPUVolumeRayCastMapper::SetFinalColorWindow(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGPUVolumeRayCastMapper_GetFinalColorWindow(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFinalColorWindow");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGPUVolumeRayCastMapper *op = static_cast<vtkGPUVolumeRayCastMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    float tempr = (ap.IsBound() ?
      op->GetFinalColorWindow() :
      op->vtkGPUVolumeRayCastMapper::GetFinalColorWindow());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGPUVolumeRayCastMapper_SetFinalColorLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFinalColorLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGPUVolumeRayCastMapper *op = static_cast<vtkGPUVolumeRayCastMapper *>(vp);

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
      op->vtkGPUVolumeRayCastMapper::SetFinalColorLevel(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGPUVolumeRayCastMapper_GetFinalColorLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFinalColorLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGPUVolumeRayCastMapper *op = static_cast<vtkGPUVolumeRayCastMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    float tempr = (ap.IsBound() ?
      op->GetFinalColorLevel() :
      op->vtkGPUVolumeRayCastMapper::GetFinalColorLevel());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGPUVolumeRayCastMapper_SetMaxMemoryInBytes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaxMemoryInBytes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGPUVolumeRayCastMapper *op = static_cast<vtkGPUVolumeRayCastMapper *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetMaxMemoryInBytes(temp0);
      }
    else
      {
      op->vtkGPUVolumeRayCastMapper::SetMaxMemoryInBytes(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGPUVolumeRayCastMapper_GetMaxMemoryInBytes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaxMemoryInBytes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGPUVolumeRayCastMapper *op = static_cast<vtkGPUVolumeRayCastMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetMaxMemoryInBytes() :
      op->vtkGPUVolumeRayCastMapper::GetMaxMemoryInBytes());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGPUVolumeRayCastMapper_SetMaxMemoryFraction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaxMemoryFraction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGPUVolumeRayCastMapper *op = static_cast<vtkGPUVolumeRayCastMapper *>(vp);

  float temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetMaxMemoryFraction(temp0);
      }
    else
      {
      op->vtkGPUVolumeRayCastMapper::SetMaxMemoryFraction(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGPUVolumeRayCastMapper_GetMaxMemoryFractionMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaxMemoryFractionMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGPUVolumeRayCastMapper *op = static_cast<vtkGPUVolumeRayCastMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    float tempr = (ap.IsBound() ?
      op->GetMaxMemoryFractionMinValue() :
      op->vtkGPUVolumeRayCastMapper::GetMaxMemoryFractionMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGPUVolumeRayCastMapper_GetMaxMemoryFractionMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaxMemoryFractionMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGPUVolumeRayCastMapper *op = static_cast<vtkGPUVolumeRayCastMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    float tempr = (ap.IsBound() ?
      op->GetMaxMemoryFractionMaxValue() :
      op->vtkGPUVolumeRayCastMapper::GetMaxMemoryFractionMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGPUVolumeRayCastMapper_GetMaxMemoryFraction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaxMemoryFraction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGPUVolumeRayCastMapper *op = static_cast<vtkGPUVolumeRayCastMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    float tempr = (ap.IsBound() ?
      op->GetMaxMemoryFraction() :
      op->vtkGPUVolumeRayCastMapper::GetMaxMemoryFraction());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGPUVolumeRayCastMapper_SetReportProgress(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetReportProgress");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGPUVolumeRayCastMapper *op = static_cast<vtkGPUVolumeRayCastMapper *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetReportProgress(temp0);
      }
    else
      {
      op->vtkGPUVolumeRayCastMapper::SetReportProgress(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGPUVolumeRayCastMapper_GetReportProgress(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetReportProgress");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGPUVolumeRayCastMapper *op = static_cast<vtkGPUVolumeRayCastMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetReportProgress() :
      op->vtkGPUVolumeRayCastMapper::GetReportProgress());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGPUVolumeRayCastMapper_IsRenderSupported(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsRenderSupported");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGPUVolumeRayCastMapper *op = static_cast<vtkGPUVolumeRayCastMapper *>(vp);

  vtkRenderWindow *temp0 = NULL;
  vtkVolumeProperty *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkRenderWindow") &&
      ap.GetVTKObject(temp1, "vtkVolumeProperty"))
    {
    int tempr = (ap.IsBound() ?
      op->IsRenderSupported(temp0, temp1) :
      op->vtkGPUVolumeRayCastMapper::IsRenderSupported(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGPUVolumeRayCastMapper_CreateCanonicalView(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateCanonicalView");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGPUVolumeRayCastMapper *op = static_cast<vtkGPUVolumeRayCastMapper *>(vp);

  vtkRenderer *temp0 = NULL;
  vtkVolume *temp1 = NULL;
  vtkImageData *temp2 = NULL;
  int temp3;
  double temp4[3];
  double save4[3];
  const int size4 = 3;
  double temp5[3];
  double save5[3];
  const int size5 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(6) &&
      ap.GetVTKObject(temp0, "vtkRenderer") &&
      ap.GetVTKObject(temp1, "vtkVolume") &&
      ap.GetVTKObject(temp2, "vtkImageData") &&
      ap.GetValue(temp3) &&
      ap.GetArray(temp4, size4) &&
      ap.GetArray(temp5, size5))
    {
    ap.SaveArray(temp4, save4, size4);
    ap.SaveArray(temp5, save5, size5);

    if (ap.IsBound())
      {
      op->CreateCanonicalView(temp0, temp1, temp2, temp3, temp4, temp5);
      }
    else
      {
      op->vtkGPUVolumeRayCastMapper::CreateCanonicalView(temp0, temp1, temp2, temp3, temp4, temp5);
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
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGPUVolumeRayCastMapper_SetMaskInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaskInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGPUVolumeRayCastMapper *op = static_cast<vtkGPUVolumeRayCastMapper *>(vp);

  vtkImageData *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkImageData"))
    {
    if (ap.IsBound())
      {
      op->SetMaskInput(temp0);
      }
    else
      {
      op->vtkGPUVolumeRayCastMapper::SetMaskInput(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGPUVolumeRayCastMapper_GetMaskInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaskInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGPUVolumeRayCastMapper *op = static_cast<vtkGPUVolumeRayCastMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkImageData *tempr = (ap.IsBound() ?
      op->GetMaskInput() :
      op->vtkGPUVolumeRayCastMapper::GetMaskInput());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGPUVolumeRayCastMapper_SetMaskType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaskType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGPUVolumeRayCastMapper *op = static_cast<vtkGPUVolumeRayCastMapper *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetMaskType(temp0);
      }
    else
      {
      op->vtkGPUVolumeRayCastMapper::SetMaskType(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGPUVolumeRayCastMapper_GetMaskType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaskType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGPUVolumeRayCastMapper *op = static_cast<vtkGPUVolumeRayCastMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetMaskType() :
      op->vtkGPUVolumeRayCastMapper::GetMaskType());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGPUVolumeRayCastMapper_SetMaskTypeToBinary(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaskTypeToBinary");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGPUVolumeRayCastMapper *op = static_cast<vtkGPUVolumeRayCastMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetMaskTypeToBinary();
      }
    else
      {
      op->vtkGPUVolumeRayCastMapper::SetMaskTypeToBinary();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGPUVolumeRayCastMapper_SetMaskTypeToLabelMap(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaskTypeToLabelMap");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGPUVolumeRayCastMapper *op = static_cast<vtkGPUVolumeRayCastMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetMaskTypeToLabelMap();
      }
    else
      {
      op->vtkGPUVolumeRayCastMapper::SetMaskTypeToLabelMap();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGPUVolumeRayCastMapper_SetMaskBlendFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaskBlendFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGPUVolumeRayCastMapper *op = static_cast<vtkGPUVolumeRayCastMapper *>(vp);

  float temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetMaskBlendFactor(temp0);
      }
    else
      {
      op->vtkGPUVolumeRayCastMapper::SetMaskBlendFactor(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGPUVolumeRayCastMapper_GetMaskBlendFactorMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaskBlendFactorMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGPUVolumeRayCastMapper *op = static_cast<vtkGPUVolumeRayCastMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    float tempr = (ap.IsBound() ?
      op->GetMaskBlendFactorMinValue() :
      op->vtkGPUVolumeRayCastMapper::GetMaskBlendFactorMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGPUVolumeRayCastMapper_GetMaskBlendFactorMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaskBlendFactorMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGPUVolumeRayCastMapper *op = static_cast<vtkGPUVolumeRayCastMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    float tempr = (ap.IsBound() ?
      op->GetMaskBlendFactorMaxValue() :
      op->vtkGPUVolumeRayCastMapper::GetMaskBlendFactorMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGPUVolumeRayCastMapper_GetMaskBlendFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaskBlendFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGPUVolumeRayCastMapper *op = static_cast<vtkGPUVolumeRayCastMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    float tempr = (ap.IsBound() ?
      op->GetMaskBlendFactor() :
      op->vtkGPUVolumeRayCastMapper::GetMaskBlendFactor());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGPUVolumeRayCastMapper_Render(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Render");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGPUVolumeRayCastMapper *op = static_cast<vtkGPUVolumeRayCastMapper *>(vp);

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
      op->vtkGPUVolumeRayCastMapper::Render(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGPUVolumeRayCastMapper_GPURender(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GPURender");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGPUVolumeRayCastMapper *op = static_cast<vtkGPUVolumeRayCastMapper *>(vp);

  vtkRenderer *temp0 = NULL;
  vtkVolume *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkRenderer") &&
      ap.GetVTKObject(temp1, "vtkVolume"))
    {
    if (ap.IsBound())
      {
      op->GPURender(temp0, temp1);
      }
    else
      {
      op->vtkGPUVolumeRayCastMapper::GPURender(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGPUVolumeRayCastMapper_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGPUVolumeRayCastMapper *op = static_cast<vtkGPUVolumeRayCastMapper *>(vp);

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
      op->vtkGPUVolumeRayCastMapper::ReleaseGraphicsResources(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGPUVolumeRayCastMapper_GetReductionRatio(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetReductionRatio");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGPUVolumeRayCastMapper *op = static_cast<vtkGPUVolumeRayCastMapper *>(vp);

  double temp0[3];
  double save0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    op->GetReductionRatio(temp0);

    if (ap.ArrayHasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(0, temp0, size0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkGPUVolumeRayCastMapper_Methods[] = {
  {(char*)"GetClassName", PyvtkGPUVolumeRayCastMapper_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkGPUVolumeRayCastMapper_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkGPUVolumeRayCastMapper_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkGPUVolumeRayCastMapper\nC++: vtkGPUVolumeRayCastMapper *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkGPUVolumeRayCastMapper_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkGPUVolumeRayCastMapper\nC++: vtkGPUVolumeRayCastMapper *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetAutoAdjustSampleDistances", PyvtkGPUVolumeRayCastMapper_SetAutoAdjustSampleDistances, METH_VARARGS,
   (char*)"V.SetAutoAdjustSampleDistances(int)\nC++: void SetAutoAdjustSampleDistances(int)\n\nIf AutoAdjustSampleDistances is on, the the ImageSampleDistance\nwill be varied to achieve the allocated render time of this prop\n(controlled by the desired update rate and any culling in use).\n"},
  {(char*)"GetAutoAdjustSampleDistancesMinValue", PyvtkGPUVolumeRayCastMapper_GetAutoAdjustSampleDistancesMinValue, METH_VARARGS,
   (char*)"V.GetAutoAdjustSampleDistancesMinValue() -> int\nC++: int GetAutoAdjustSampleDistancesMinValue()\n\nIf AutoAdjustSampleDistances is on, the the ImageSampleDistance\nwill be varied to achieve the allocated render time of this prop\n(controlled by the desired update rate and any culling in use).\n"},
  {(char*)"GetAutoAdjustSampleDistancesMaxValue", PyvtkGPUVolumeRayCastMapper_GetAutoAdjustSampleDistancesMaxValue, METH_VARARGS,
   (char*)"V.GetAutoAdjustSampleDistancesMaxValue() -> int\nC++: int GetAutoAdjustSampleDistancesMaxValue()\n\nIf AutoAdjustSampleDistances is on, the the ImageSampleDistance\nwill be varied to achieve the allocated render time of this prop\n(controlled by the desired update rate and any culling in use).\n"},
  {(char*)"GetAutoAdjustSampleDistances", PyvtkGPUVolumeRayCastMapper_GetAutoAdjustSampleDistances, METH_VARARGS,
   (char*)"V.GetAutoAdjustSampleDistances() -> int\nC++: int GetAutoAdjustSampleDistances()\n\nIf AutoAdjustSampleDistances is on, the the ImageSampleDistance\nwill be varied to achieve the allocated render time of this prop\n(controlled by the desired update rate and any culling in use).\n"},
  {(char*)"AutoAdjustSampleDistancesOn", PyvtkGPUVolumeRayCastMapper_AutoAdjustSampleDistancesOn, METH_VARARGS,
   (char*)"V.AutoAdjustSampleDistancesOn()\nC++: void AutoAdjustSampleDistancesOn()\n\nIf AutoAdjustSampleDistances is on, the the ImageSampleDistance\nwill be varied to achieve the allocated render time of this prop\n(controlled by the desired update rate and any culling in use).\n"},
  {(char*)"AutoAdjustSampleDistancesOff", PyvtkGPUVolumeRayCastMapper_AutoAdjustSampleDistancesOff, METH_VARARGS,
   (char*)"V.AutoAdjustSampleDistancesOff()\nC++: void AutoAdjustSampleDistancesOff()\n\nIf AutoAdjustSampleDistances is on, the the ImageSampleDistance\nwill be varied to achieve the allocated render time of this prop\n(controlled by the desired update rate and any culling in use).\n"},
  {(char*)"SetSampleDistance", PyvtkGPUVolumeRayCastMapper_SetSampleDistance, METH_VARARGS,
   (char*)"V.SetSampleDistance(float)\nC++: void SetSampleDistance(float a)\n\nSet/Get the distance between samples used for rendering when\nAutoAdjustSampleDistances is off, or when this mapper has more\nthan 1 second allocated to it for rendering. Initial value is\n1.0.\n"},
  {(char*)"GetSampleDistance", PyvtkGPUVolumeRayCastMapper_GetSampleDistance, METH_VARARGS,
   (char*)"V.GetSampleDistance() -> float\nC++: float GetSampleDistance()\n\nSet/Get the distance between samples used for rendering when\nAutoAdjustSampleDistances is off, or when this mapper has more\nthan 1 second allocated to it for rendering. Initial value is\n1.0.\n"},
  {(char*)"SetImageSampleDistance", PyvtkGPUVolumeRayCastMapper_SetImageSampleDistance, METH_VARARGS,
   (char*)"V.SetImageSampleDistance(float)\nC++: void SetImageSampleDistance(float)\n\nSampling distance in the XY image dimensions. Default value of 1\nmeaning 1 ray cast per pixel. If set to 0.5, 4 rays will be cast\nper pixel. If set to 2.0, 1 ray will be cast for every 4 (2 by 2)\npixels. This value will be adjusted to meet a desired frame rate\nwhen AutoAdjustSampleDistances is on.\n"},
  {(char*)"GetImageSampleDistanceMinValue", PyvtkGPUVolumeRayCastMapper_GetImageSampleDistanceMinValue, METH_VARARGS,
   (char*)"V.GetImageSampleDistanceMinValue() -> float\nC++: float GetImageSampleDistanceMinValue()\n\nSampling distance in the XY image dimensions. Default value of 1\nmeaning 1 ray cast per pixel. If set to 0.5, 4 rays will be cast\nper pixel. If set to 2.0, 1 ray will be cast for every 4 (2 by 2)\npixels. This value will be adjusted to meet a desired frame rate\nwhen AutoAdjustSampleDistances is on.\n"},
  {(char*)"GetImageSampleDistanceMaxValue", PyvtkGPUVolumeRayCastMapper_GetImageSampleDistanceMaxValue, METH_VARARGS,
   (char*)"V.GetImageSampleDistanceMaxValue() -> float\nC++: float GetImageSampleDistanceMaxValue()\n\nSampling distance in the XY image dimensions. Default value of 1\nmeaning 1 ray cast per pixel. If set to 0.5, 4 rays will be cast\nper pixel. If set to 2.0, 1 ray will be cast for every 4 (2 by 2)\npixels. This value will be adjusted to meet a desired frame rate\nwhen AutoAdjustSampleDistances is on.\n"},
  {(char*)"GetImageSampleDistance", PyvtkGPUVolumeRayCastMapper_GetImageSampleDistance, METH_VARARGS,
   (char*)"V.GetImageSampleDistance() -> float\nC++: float GetImageSampleDistance()\n\nSampling distance in the XY image dimensions. Default value of 1\nmeaning 1 ray cast per pixel. If set to 0.5, 4 rays will be cast\nper pixel. If set to 2.0, 1 ray will be cast for every 4 (2 by 2)\npixels. This value will be adjusted to meet a desired frame rate\nwhen AutoAdjustSampleDistances is on.\n"},
  {(char*)"SetMinimumImageSampleDistance", PyvtkGPUVolumeRayCastMapper_SetMinimumImageSampleDistance, METH_VARARGS,
   (char*)"V.SetMinimumImageSampleDistance(float)\nC++: void SetMinimumImageSampleDistance(float)\n\nThis is the minimum image sample distance allow when the image\nsample distance is being automatically adjusted.\n"},
  {(char*)"GetMinimumImageSampleDistanceMinValue", PyvtkGPUVolumeRayCastMapper_GetMinimumImageSampleDistanceMinValue, METH_VARARGS,
   (char*)"V.GetMinimumImageSampleDistanceMinValue() -> float\nC++: float GetMinimumImageSampleDistanceMinValue()\n\nThis is the minimum image sample distance allow when the image\nsample distance is being automatically adjusted.\n"},
  {(char*)"GetMinimumImageSampleDistanceMaxValue", PyvtkGPUVolumeRayCastMapper_GetMinimumImageSampleDistanceMaxValue, METH_VARARGS,
   (char*)"V.GetMinimumImageSampleDistanceMaxValue() -> float\nC++: float GetMinimumImageSampleDistanceMaxValue()\n\nThis is the minimum image sample distance allow when the image\nsample distance is being automatically adjusted.\n"},
  {(char*)"GetMinimumImageSampleDistance", PyvtkGPUVolumeRayCastMapper_GetMinimumImageSampleDistance, METH_VARARGS,
   (char*)"V.GetMinimumImageSampleDistance() -> float\nC++: float GetMinimumImageSampleDistance()\n\nThis is the minimum image sample distance allow when the image\nsample distance is being automatically adjusted.\n"},
  {(char*)"SetMaximumImageSampleDistance", PyvtkGPUVolumeRayCastMapper_SetMaximumImageSampleDistance, METH_VARARGS,
   (char*)"V.SetMaximumImageSampleDistance(float)\nC++: void SetMaximumImageSampleDistance(float)\n\nThis is the maximum image sample distance allow when the image\nsample distance is being automatically adjusted.\n"},
  {(char*)"GetMaximumImageSampleDistanceMinValue", PyvtkGPUVolumeRayCastMapper_GetMaximumImageSampleDistanceMinValue, METH_VARARGS,
   (char*)"V.GetMaximumImageSampleDistanceMinValue() -> float\nC++: float GetMaximumImageSampleDistanceMinValue()\n\nThis is the maximum image sample distance allow when the image\nsample distance is being automatically adjusted.\n"},
  {(char*)"GetMaximumImageSampleDistanceMaxValue", PyvtkGPUVolumeRayCastMapper_GetMaximumImageSampleDistanceMaxValue, METH_VARARGS,
   (char*)"V.GetMaximumImageSampleDistanceMaxValue() -> float\nC++: float GetMaximumImageSampleDistanceMaxValue()\n\nThis is the maximum image sample distance allow when the image\nsample distance is being automatically adjusted.\n"},
  {(char*)"GetMaximumImageSampleDistance", PyvtkGPUVolumeRayCastMapper_GetMaximumImageSampleDistance, METH_VARARGS,
   (char*)"V.GetMaximumImageSampleDistance() -> float\nC++: float GetMaximumImageSampleDistance()\n\nThis is the maximum image sample distance allow when the image\nsample distance is being automatically adjusted.\n"},
  {(char*)"SetFinalColorWindow", PyvtkGPUVolumeRayCastMapper_SetFinalColorWindow, METH_VARARGS,
   (char*)"V.SetFinalColorWindow(float)\nC++: void SetFinalColorWindow(float a)\n\nSet/Get the window / level applied to the final color. This\nallows brightness / contrast adjustments on the final image.\nwindow is the width of the window. level is the center of the\nwindow. Initial window value is 1.0 Initial level value is 0.5\nwindow cannot be null but can be negative, this way values will\nbe reversed. |window| can be larger than 1.0 level can be any\nreal value.\n"},
  {(char*)"GetFinalColorWindow", PyvtkGPUVolumeRayCastMapper_GetFinalColorWindow, METH_VARARGS,
   (char*)"V.GetFinalColorWindow() -> float\nC++: float GetFinalColorWindow()\n\nSet/Get the window / level applied to the final color. This\nallows brightness / contrast adjustments on the final image.\nwindow is the width of the window. level is the center of the\nwindow. Initial window value is 1.0 Initial level value is 0.5\nwindow cannot be null but can be negative, this way values will\nbe reversed. |window| can be larger than 1.0 level can be any\nreal value.\n"},
  {(char*)"SetFinalColorLevel", PyvtkGPUVolumeRayCastMapper_SetFinalColorLevel, METH_VARARGS,
   (char*)"V.SetFinalColorLevel(float)\nC++: void SetFinalColorLevel(float a)\n\nSet/Get the window / level applied to the final color. This\nallows brightness / contrast adjustments on the final image.\nwindow is the width of the window. level is the center of the\nwindow. Initial window value is 1.0 Initial level value is 0.5\nwindow cannot be null but can be negative, this way values will\nbe reversed. |window| can be larger than 1.0 level can be any\nreal value.\n"},
  {(char*)"GetFinalColorLevel", PyvtkGPUVolumeRayCastMapper_GetFinalColorLevel, METH_VARARGS,
   (char*)"V.GetFinalColorLevel() -> float\nC++: float GetFinalColorLevel()\n\nSet/Get the window / level applied to the final color. This\nallows brightness / contrast adjustments on the final image.\nwindow is the width of the window. level is the center of the\nwindow. Initial window value is 1.0 Initial level value is 0.5\nwindow cannot be null but can be negative, this way values will\nbe reversed. |window| can be larger than 1.0 level can be any\nreal value.\n"},
  {(char*)"SetMaxMemoryInBytes", PyvtkGPUVolumeRayCastMapper_SetMaxMemoryInBytes, METH_VARARGS,
   (char*)"V.SetMaxMemoryInBytes(int)\nC++: void SetMaxMemoryInBytes(vtkIdType a)\n\nMaximum size of the 3D texture in GPU memory. Will default to the\nsize computed from the graphics card. Can be adjusted by the\nuser.\n"},
  {(char*)"GetMaxMemoryInBytes", PyvtkGPUVolumeRayCastMapper_GetMaxMemoryInBytes, METH_VARARGS,
   (char*)"V.GetMaxMemoryInBytes() -> int\nC++: vtkIdType GetMaxMemoryInBytes()\n\nMaximum size of the 3D texture in GPU memory. Will default to the\nsize computed from the graphics card. Can be adjusted by the\nuser.\n"},
  {(char*)"SetMaxMemoryFraction", PyvtkGPUVolumeRayCastMapper_SetMaxMemoryFraction, METH_VARARGS,
   (char*)"V.SetMaxMemoryFraction(float)\nC++: void SetMaxMemoryFraction(float)\n\nMaximum fraction of the MaxMemoryInBytes that should be used to\nhold the texture. Valid values are 0.1 to 1.0.\n"},
  {(char*)"GetMaxMemoryFractionMinValue", PyvtkGPUVolumeRayCastMapper_GetMaxMemoryFractionMinValue, METH_VARARGS,
   (char*)"V.GetMaxMemoryFractionMinValue() -> float\nC++: float GetMaxMemoryFractionMinValue()\n\nMaximum fraction of the MaxMemoryInBytes that should be used to\nhold the texture. Valid values are 0.1 to 1.0.\n"},
  {(char*)"GetMaxMemoryFractionMaxValue", PyvtkGPUVolumeRayCastMapper_GetMaxMemoryFractionMaxValue, METH_VARARGS,
   (char*)"V.GetMaxMemoryFractionMaxValue() -> float\nC++: float GetMaxMemoryFractionMaxValue()\n\nMaximum fraction of the MaxMemoryInBytes that should be used to\nhold the texture. Valid values are 0.1 to 1.0.\n"},
  {(char*)"GetMaxMemoryFraction", PyvtkGPUVolumeRayCastMapper_GetMaxMemoryFraction, METH_VARARGS,
   (char*)"V.GetMaxMemoryFraction() -> float\nC++: float GetMaxMemoryFraction()\n\nMaximum fraction of the MaxMemoryInBytes that should be used to\nhold the texture. Valid values are 0.1 to 1.0.\n"},
  {(char*)"SetReportProgress", PyvtkGPUVolumeRayCastMapper_SetReportProgress, METH_VARARGS,
   (char*)"V.SetReportProgress(bool)\nC++: void SetReportProgress(bool a)\n\nTells if the mapper will report intermediate progress. Initial\nvalue is true. As the progress works with a GL blocking call\n(glFinish()), this can be useful for huge dataset but can slow\ndown rendering of small dataset. It should be set to true for big\ndataset or complex shading and streaming but to false for small\ndatasets.\n"},
  {(char*)"GetReportProgress", PyvtkGPUVolumeRayCastMapper_GetReportProgress, METH_VARARGS,
   (char*)"V.GetReportProgress() -> bool\nC++: bool GetReportProgress()\n\nTells if the mapper will report intermediate progress. Initial\nvalue is true. As the progress works with a GL blocking call\n(glFinish()), this can be useful for huge dataset but can slow\ndown rendering of small dataset. It should be set to true for big\ndataset or complex shading and streaming but to false for small\ndatasets.\n"},
  {(char*)"IsRenderSupported", PyvtkGPUVolumeRayCastMapper_IsRenderSupported, METH_VARARGS,
   (char*)"V.IsRenderSupported(vtkRenderWindow, vtkVolumeProperty) -> int\nC++: virtual int IsRenderSupported(vtkRenderWindow *window,\n    vtkVolumeProperty *property)\n\nBased on hardware and properties, we may or may not be able to\nrender using 3D texture mapping. This indicates if 3D texture\nmapping is supported by the hardware, and if the other extensions\nnecessary to support the specific properties are available.\n"},
  {(char*)"CreateCanonicalView", PyvtkGPUVolumeRayCastMapper_CreateCanonicalView, METH_VARARGS,
   (char*)"V.CreateCanonicalView(vtkRenderer, vtkVolume, vtkImageData, int,\n    [float, float, float], [float, float, float])\nC++: void CreateCanonicalView(vtkRenderer *ren, vtkVolume *volume,\n     vtkImageData *image, int blend_mode, double viewDirection[3],\n     double viewUp[3])\n\n"},
  {(char*)"SetMaskInput", PyvtkGPUVolumeRayCastMapper_SetMaskInput, METH_VARARGS,
   (char*)"V.SetMaskInput(vtkImageData)\nC++: void SetMaskInput(vtkImageData *mask)\n\nOptionally, set a mask input. This mask may be a binary mask or a\nlabel map. This must be specified via SetMaskType.\n\nIf the mask is a binary mask, the volume rendering is confined to\nregions within the binary mask. The binary mask is assumed to\nhave a datatype of UCHAR and values of 255 (inside) and 0\n(outside).\n\nThe mask may also be a label map. The label map is allowed to\ncontain only 3 labels (values of 0, 1 and 2) and must have a\ndatatype of UCHAR. In voxels with label value of 0, the color\ntransfer function supplied by component 0 is used.\n  In voxels with label value of 1, the color transfer function\nsupplied by component 1 is used and blended with the transfer\nfunction supplied by component 0, with the blending weight being\ndetermined by MaskBlendFactor.\n   In voxels with a label value of 2, the color transfer function\nsupplied\n by component 2 is used and blended with the transfer function\nsupplied by component 0, with the blending weight being\ndetermined by MaskBlendFactor.\n"},
  {(char*)"GetMaskInput", PyvtkGPUVolumeRayCastMapper_GetMaskInput, METH_VARARGS,
   (char*)"V.GetMaskInput() -> vtkImageData\nC++: vtkImageData *GetMaskInput()\n\nOptionally, set a mask input. This mask may be a binary mask or a\nlabel map. This must be specified via SetMaskType.\n\nIf the mask is a binary mask, the volume rendering is confined to\nregions within the binary mask. The binary mask is assumed to\nhave a datatype of UCHAR and values of 255 (inside) and 0\n(outside).\n\nThe mask may also be a label map. The label map is allowed to\ncontain only 3 labels (values of 0, 1 and 2) and must have a\ndatatype of UCHAR. In voxels with label value of 0, the color\ntransfer function supplied by component 0 is used.\n  In voxels with label value of 1, the color transfer function\nsupplied by component 1 is used and blended with the transfer\nfunction supplied by component 0, with the blending weight being\ndetermined by MaskBlendFactor.\n   In voxels with a label value of 2, the color transfer function\nsupplied\n by component 2 is used and blended with the transfer function\nsupplied by component 0, with the blending weight being\ndetermined by MaskBlendFactor.\n"},
  {(char*)"SetMaskType", PyvtkGPUVolumeRayCastMapper_SetMaskType, METH_VARARGS,
   (char*)"V.SetMaskType(int)\nC++: void SetMaskType(int a)\n\nSet the mask type, if mask is to be used. See documentation for\nSetMaskInput(). The default is a LabelMapMaskType.\n"},
  {(char*)"GetMaskType", PyvtkGPUVolumeRayCastMapper_GetMaskType, METH_VARARGS,
   (char*)"V.GetMaskType() -> int\nC++: int GetMaskType()\n\nSet the mask type, if mask is to be used. See documentation for\nSetMaskInput(). The default is a LabelMapMaskType.\n"},
  {(char*)"SetMaskTypeToBinary", PyvtkGPUVolumeRayCastMapper_SetMaskTypeToBinary, METH_VARARGS,
   (char*)"V.SetMaskTypeToBinary()\nC++: void SetMaskTypeToBinary()\n\nSet the mask type, if mask is to be used. See documentation for\nSetMaskInput(). The default is a LabelMapMaskType.\n"},
  {(char*)"SetMaskTypeToLabelMap", PyvtkGPUVolumeRayCastMapper_SetMaskTypeToLabelMap, METH_VARARGS,
   (char*)"V.SetMaskTypeToLabelMap()\nC++: void SetMaskTypeToLabelMap()\n\nSet the mask type, if mask is to be used. See documentation for\nSetMaskInput(). The default is a LabelMapMaskType.\n"},
  {(char*)"SetMaskBlendFactor", PyvtkGPUVolumeRayCastMapper_SetMaskBlendFactor, METH_VARARGS,
   (char*)"V.SetMaskBlendFactor(float)\nC++: void SetMaskBlendFactor(float)\n\nTells how much mask color transfer function is used compared to\nthe standard color transfer function when the mask is true. This\nis relevant only for the label map mask.\n  0.0 means only standard color transfer function.\n  1.0 means only mask color transfer function. The default value\nis 1.0.\n"},
  {(char*)"GetMaskBlendFactorMinValue", PyvtkGPUVolumeRayCastMapper_GetMaskBlendFactorMinValue, METH_VARARGS,
   (char*)"V.GetMaskBlendFactorMinValue() -> float\nC++: float GetMaskBlendFactorMinValue()\n\nTells how much mask color transfer function is used compared to\nthe standard color transfer function when the mask is true. This\nis relevant only for the label map mask.\n  0.0 means only standard color transfer function.\n  1.0 means only mask color transfer function. The default value\nis 1.0.\n"},
  {(char*)"GetMaskBlendFactorMaxValue", PyvtkGPUVolumeRayCastMapper_GetMaskBlendFactorMaxValue, METH_VARARGS,
   (char*)"V.GetMaskBlendFactorMaxValue() -> float\nC++: float GetMaskBlendFactorMaxValue()\n\nTells how much mask color transfer function is used compared to\nthe standard color transfer function when the mask is true. This\nis relevant only for the label map mask.\n  0.0 means only standard color transfer function.\n  1.0 means only mask color transfer function. The default value\nis 1.0.\n"},
  {(char*)"GetMaskBlendFactor", PyvtkGPUVolumeRayCastMapper_GetMaskBlendFactor, METH_VARARGS,
   (char*)"V.GetMaskBlendFactor() -> float\nC++: float GetMaskBlendFactor()\n\nTells how much mask color transfer function is used compared to\nthe standard color transfer function when the mask is true. This\nis relevant only for the label map mask.\n  0.0 means only standard color transfer function.\n  1.0 means only mask color transfer function. The default value\nis 1.0.\n"},
  {(char*)"Render", PyvtkGPUVolumeRayCastMapper_Render, METH_VARARGS,
   (char*)"V.Render(vtkRenderer, vtkVolume)\nC++: void Render(vtkRenderer *, vtkVolume *)\n\nWARNING: INTERNAL METHOD - NOT INTENDED FOR GENERAL USE\nInitialize rendering for this volume.\n"},
  {(char*)"GPURender", PyvtkGPUVolumeRayCastMapper_GPURender, METH_VARARGS,
   (char*)"V.GPURender(vtkRenderer, vtkVolume)\nC++: virtual void GPURender(vtkRenderer *, vtkVolume *)\n\nHandled in the subclass - the actual render method\n\\pre input is up-to-date.\n"},
  {(char*)"ReleaseGraphicsResources", PyvtkGPUVolumeRayCastMapper_ReleaseGraphicsResources, METH_VARARGS,
   (char*)"V.ReleaseGraphicsResources(vtkWindow)\nC++: void ReleaseGraphicsResources(vtkWindow *)\n\nWARNING: INTERNAL METHOD - NOT INTENDED FOR GENERAL USE Release\nany graphics resources that are being consumed by this mapper.\nThe parameter window could be used to determine which graphic\nresources to release.\n"},
  {(char*)"GetReductionRatio", PyvtkGPUVolumeRayCastMapper_GetReductionRatio, METH_VARARGS,
   (char*)"V.GetReductionRatio([float, float, float])\nC++: virtual void GetReductionRatio(double ratio[3])\n\nReturn how much the dataset has to be reduced in each dimension\nto fit on the GPU. If the value is 1.0, there is no need to\nreduce the dataset.\n\\pre the calling thread has a current OpenGL context.\n\\pre mapper_supported:\n    IsRenderSupported(renderer->GetRenderWindow(),0)\nThe computation is based on hardware limits (3D texture indexable\nsize) and MaxMemoryInBytes.\n\\post valid_i_ratio: ratio[0]>0 && ratio[0]<=1.0\n\\post valid_j_ratio: ratio[1]>0 && ratio[1]<=1.0\n\\post valid_k_ratio: ratio[2]>0 && ratio[2]<=1.0\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkGPUVolumeRayCastMapper_StaticNew()
{
  return vtkGPUVolumeRayCastMapper::New();
}

PyObject *PyVTKClass_vtkGPUVolumeRayCastMapperNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkGPUVolumeRayCastMapper_StaticNew,
    PyvtkGPUVolumeRayCastMapper_Methods,
    "vtkGPUVolumeRayCastMapper", modulename,
    NULL, NULL,
    PyvtkGPUVolumeRayCastMapper_Doc(),
    PyVTKClass_vtkVolumeMapperNew(modulename));

  if (cls)
    {
    PyObject *d = PyVTKClass_GetDict(cls);
    PyObject *o;

    for (int c = 0; c < 2; c++)
      {
      static const struct { const char *name; int value; }
        constants[2] = {
          { "BinaryMaskType", vtkGPUVolumeRayCastMapper::BinaryMaskType },
          { "LabelMapMaskType", vtkGPUVolumeRayCastMapper::LabelMapMaskType },
        };

      o = PyInt_FromLong(constants[c].value);
      if (o)
        {
        PyDict_SetItemString(d, (char *)constants[c].name, o);
        Py_DECREF(o);
        }
      }

    }

  return cls;
}

const char **PyvtkGPUVolumeRayCastMapper_Doc()
{
  static const char *docstring[] = {
    "vtkGPUVolumeRayCastMapper - Ray casting performed on the GPU.\n\n",
    "Superclass: vtkVolumeMapper\n\n",
    "vtkGPUVolumeRayCastMapper is a volume mapper that performs ray\ncasting on the GPU using fragment programs.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkGPUVolumeRayCastMapper(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkGPUVolumeRayCastMapperNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkGPUVolumeRayCastMapper", o) != 0)
    {
    Py_DECREF(o);
    }

}

