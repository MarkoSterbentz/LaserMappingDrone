// python wrapper for vtkSmartVolumeMapper
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkSmartVolumeMapper.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkSmartVolumeMapper(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkSmartVolumeMapperNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkVolumeMapperNew
extern "C" { PyObject *PyVTKClass_vtkVolumeMapperNew(const char *); }
#define DECLARED_PyVTKClass_vtkVolumeMapperNew
#endif

static const char **PyvtkSmartVolumeMapper_Doc();


static PyObject *
PyvtkSmartVolumeMapper_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSmartVolumeMapper *op = static_cast<vtkSmartVolumeMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkSmartVolumeMapper::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSmartVolumeMapper_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSmartVolumeMapper *op = static_cast<vtkSmartVolumeMapper *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSmartVolumeMapper::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSmartVolumeMapper_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSmartVolumeMapper *op = static_cast<vtkSmartVolumeMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkSmartVolumeMapper *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSmartVolumeMapper::NewInstance());

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
PyvtkSmartVolumeMapper_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkSmartVolumeMapper *tempr = vtkSmartVolumeMapper::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSmartVolumeMapper_SetFinalColorWindow(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFinalColorWindow");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSmartVolumeMapper *op = static_cast<vtkSmartVolumeMapper *>(vp);

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
      op->vtkSmartVolumeMapper::SetFinalColorWindow(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSmartVolumeMapper_GetFinalColorWindow(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFinalColorWindow");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSmartVolumeMapper *op = static_cast<vtkSmartVolumeMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    float tempr = (ap.IsBound() ?
      op->GetFinalColorWindow() :
      op->vtkSmartVolumeMapper::GetFinalColorWindow());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSmartVolumeMapper_SetFinalColorLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFinalColorLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSmartVolumeMapper *op = static_cast<vtkSmartVolumeMapper *>(vp);

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
      op->vtkSmartVolumeMapper::SetFinalColorLevel(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSmartVolumeMapper_GetFinalColorLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFinalColorLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSmartVolumeMapper *op = static_cast<vtkSmartVolumeMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    float tempr = (ap.IsBound() ?
      op->GetFinalColorLevel() :
      op->vtkSmartVolumeMapper::GetFinalColorLevel());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSmartVolumeMapper_SetRequestedRenderMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRequestedRenderMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSmartVolumeMapper *op = static_cast<vtkSmartVolumeMapper *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetRequestedRenderMode(temp0);
      }
    else
      {
      op->vtkSmartVolumeMapper::SetRequestedRenderMode(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSmartVolumeMapper_SetRequestedRenderModeToDefault(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRequestedRenderModeToDefault");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSmartVolumeMapper *op = static_cast<vtkSmartVolumeMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetRequestedRenderModeToDefault();
      }
    else
      {
      op->vtkSmartVolumeMapper::SetRequestedRenderModeToDefault();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSmartVolumeMapper_SetRequestedRenderModeToRayCastAndTexture(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRequestedRenderModeToRayCastAndTexture");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSmartVolumeMapper *op = static_cast<vtkSmartVolumeMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetRequestedRenderModeToRayCastAndTexture();
      }
    else
      {
      op->vtkSmartVolumeMapper::SetRequestedRenderModeToRayCastAndTexture();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSmartVolumeMapper_SetRequestedRenderModeToRayCast(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRequestedRenderModeToRayCast");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSmartVolumeMapper *op = static_cast<vtkSmartVolumeMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetRequestedRenderModeToRayCast();
      }
    else
      {
      op->vtkSmartVolumeMapper::SetRequestedRenderModeToRayCast();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSmartVolumeMapper_GetRequestedRenderMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRequestedRenderMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSmartVolumeMapper *op = static_cast<vtkSmartVolumeMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetRequestedRenderMode() :
      op->vtkSmartVolumeMapper::GetRequestedRenderMode());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSmartVolumeMapper_SetInteractiveUpdateRate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInteractiveUpdateRate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSmartVolumeMapper *op = static_cast<vtkSmartVolumeMapper *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetInteractiveUpdateRate(temp0);
      }
    else
      {
      op->vtkSmartVolumeMapper::SetInteractiveUpdateRate(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSmartVolumeMapper_GetInteractiveUpdateRateMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInteractiveUpdateRateMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSmartVolumeMapper *op = static_cast<vtkSmartVolumeMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetInteractiveUpdateRateMinValue() :
      op->vtkSmartVolumeMapper::GetInteractiveUpdateRateMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSmartVolumeMapper_GetInteractiveUpdateRateMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInteractiveUpdateRateMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSmartVolumeMapper *op = static_cast<vtkSmartVolumeMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetInteractiveUpdateRateMaxValue() :
      op->vtkSmartVolumeMapper::GetInteractiveUpdateRateMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSmartVolumeMapper_GetInteractiveUpdateRate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInteractiveUpdateRate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSmartVolumeMapper *op = static_cast<vtkSmartVolumeMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetInteractiveUpdateRate() :
      op->vtkSmartVolumeMapper::GetInteractiveUpdateRate());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSmartVolumeMapper_GetLastUsedRenderMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLastUsedRenderMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSmartVolumeMapper *op = static_cast<vtkSmartVolumeMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetLastUsedRenderMode() :
      op->vtkSmartVolumeMapper::GetLastUsedRenderMode());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSmartVolumeMapper_SetMaxMemoryInBytes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaxMemoryInBytes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSmartVolumeMapper *op = static_cast<vtkSmartVolumeMapper *>(vp);

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
      op->vtkSmartVolumeMapper::SetMaxMemoryInBytes(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSmartVolumeMapper_GetMaxMemoryInBytes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaxMemoryInBytes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSmartVolumeMapper *op = static_cast<vtkSmartVolumeMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetMaxMemoryInBytes() :
      op->vtkSmartVolumeMapper::GetMaxMemoryInBytes());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSmartVolumeMapper_SetMaxMemoryFraction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaxMemoryFraction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSmartVolumeMapper *op = static_cast<vtkSmartVolumeMapper *>(vp);

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
      op->vtkSmartVolumeMapper::SetMaxMemoryFraction(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSmartVolumeMapper_GetMaxMemoryFractionMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaxMemoryFractionMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSmartVolumeMapper *op = static_cast<vtkSmartVolumeMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    float tempr = (ap.IsBound() ?
      op->GetMaxMemoryFractionMinValue() :
      op->vtkSmartVolumeMapper::GetMaxMemoryFractionMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSmartVolumeMapper_GetMaxMemoryFractionMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaxMemoryFractionMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSmartVolumeMapper *op = static_cast<vtkSmartVolumeMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    float tempr = (ap.IsBound() ?
      op->GetMaxMemoryFractionMaxValue() :
      op->vtkSmartVolumeMapper::GetMaxMemoryFractionMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSmartVolumeMapper_GetMaxMemoryFraction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaxMemoryFraction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSmartVolumeMapper *op = static_cast<vtkSmartVolumeMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    float tempr = (ap.IsBound() ?
      op->GetMaxMemoryFraction() :
      op->vtkSmartVolumeMapper::GetMaxMemoryFraction());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSmartVolumeMapper_SetInterpolationMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInterpolationMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSmartVolumeMapper *op = static_cast<vtkSmartVolumeMapper *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetInterpolationMode(temp0);
      }
    else
      {
      op->vtkSmartVolumeMapper::SetInterpolationMode(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSmartVolumeMapper_GetInterpolationModeMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInterpolationModeMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSmartVolumeMapper *op = static_cast<vtkSmartVolumeMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetInterpolationModeMinValue() :
      op->vtkSmartVolumeMapper::GetInterpolationModeMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSmartVolumeMapper_GetInterpolationModeMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInterpolationModeMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSmartVolumeMapper *op = static_cast<vtkSmartVolumeMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetInterpolationModeMaxValue() :
      op->vtkSmartVolumeMapper::GetInterpolationModeMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSmartVolumeMapper_GetInterpolationMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInterpolationMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSmartVolumeMapper *op = static_cast<vtkSmartVolumeMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetInterpolationMode() :
      op->vtkSmartVolumeMapper::GetInterpolationMode());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSmartVolumeMapper_SetInterpolationModeToNearestNeighbor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInterpolationModeToNearestNeighbor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSmartVolumeMapper *op = static_cast<vtkSmartVolumeMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetInterpolationModeToNearestNeighbor();
      }
    else
      {
      op->vtkSmartVolumeMapper::SetInterpolationModeToNearestNeighbor();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSmartVolumeMapper_SetInterpolationModeToLinear(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInterpolationModeToLinear");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSmartVolumeMapper *op = static_cast<vtkSmartVolumeMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetInterpolationModeToLinear();
      }
    else
      {
      op->vtkSmartVolumeMapper::SetInterpolationModeToLinear();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSmartVolumeMapper_SetInterpolationModeToCubic(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInterpolationModeToCubic");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSmartVolumeMapper *op = static_cast<vtkSmartVolumeMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetInterpolationModeToCubic();
      }
    else
      {
      op->vtkSmartVolumeMapper::SetInterpolationModeToCubic();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSmartVolumeMapper_CreateCanonicalView(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateCanonicalView");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSmartVolumeMapper *op = static_cast<vtkSmartVolumeMapper *>(vp);

  vtkRenderer *temp0 = NULL;
  vtkVolume *temp1 = NULL;
  vtkVolume *temp2 = NULL;
  vtkImageData *temp3 = NULL;
  int temp4;
  double temp5[3];
  double save5[3];
  const int size5 = 3;
  double temp6[3];
  double save6[3];
  const int size6 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(7) &&
      ap.GetVTKObject(temp0, "vtkRenderer") &&
      ap.GetVTKObject(temp1, "vtkVolume") &&
      ap.GetVTKObject(temp2, "vtkVolume") &&
      ap.GetVTKObject(temp3, "vtkImageData") &&
      ap.GetValue(temp4) &&
      ap.GetArray(temp5, size5) &&
      ap.GetArray(temp6, size6))
    {
    ap.SaveArray(temp5, save5, size5);
    ap.SaveArray(temp6, save6, size6);

    if (ap.IsBound())
      {
      op->CreateCanonicalView(temp0, temp1, temp2, temp3, temp4, temp5, temp6);
      }
    else
      {
      op->vtkSmartVolumeMapper::CreateCanonicalView(temp0, temp1, temp2, temp3, temp4, temp5, temp6);
      }

    if (ap.ArrayHasChanged(temp5, save5, size5) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(5, temp5, size5);
      }

    if (ap.ArrayHasChanged(temp6, save6, size6) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(6, temp6, size6);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSmartVolumeMapper_Render(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Render");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSmartVolumeMapper *op = static_cast<vtkSmartVolumeMapper *>(vp);

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
      op->vtkSmartVolumeMapper::Render(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSmartVolumeMapper_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSmartVolumeMapper *op = static_cast<vtkSmartVolumeMapper *>(vp);

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
      op->vtkSmartVolumeMapper::ReleaseGraphicsResources(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkSmartVolumeMapper_Methods[] = {
  {(char*)"GetClassName", PyvtkSmartVolumeMapper_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkSmartVolumeMapper_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkSmartVolumeMapper_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkSmartVolumeMapper\nC++: vtkSmartVolumeMapper *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkSmartVolumeMapper_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkSmartVolumeMapper\nC++: vtkSmartVolumeMapper *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetFinalColorWindow", PyvtkSmartVolumeMapper_SetFinalColorWindow, METH_VARARGS,
   (char*)"V.SetFinalColorWindow(float)\nC++: void SetFinalColorWindow(float a)\n\nSet the final color window. This controls the contrast of the\nimage. The default value is 1.0. The Window can be negative (this\ncauses a \"negative\" effect on the image) Although Window can be\nset to 0.0, any value less than 0.00001 and greater than or equal\nto 0.0 will be set to 0.00001, and any value greater than\n-0.00001 but less than or equal to 0.0 will be set to -0.00001.\nInitial value is 1.0.\n"},
  {(char*)"GetFinalColorWindow", PyvtkSmartVolumeMapper_GetFinalColorWindow, METH_VARARGS,
   (char*)"V.GetFinalColorWindow() -> float\nC++: float GetFinalColorWindow()\n\nGet the final color window. Initial value is 1.0.\n"},
  {(char*)"SetFinalColorLevel", PyvtkSmartVolumeMapper_SetFinalColorLevel, METH_VARARGS,
   (char*)"V.SetFinalColorLevel(float)\nC++: void SetFinalColorLevel(float a)\n\nSet the final color level. The level controls the brightness of\nthe image. The final color window will be centered at the final\ncolor level, and together represent a linear remapping of color\nvalues. The default value for the level is 0.5.\n"},
  {(char*)"GetFinalColorLevel", PyvtkSmartVolumeMapper_GetFinalColorLevel, METH_VARARGS,
   (char*)"V.GetFinalColorLevel() -> float\nC++: float GetFinalColorLevel()\n\nGet the final color level.\n"},
  {(char*)"SetRequestedRenderMode", PyvtkSmartVolumeMapper_SetRequestedRenderMode, METH_VARARGS,
   (char*)"V.SetRequestedRenderMode(int)\nC++: void SetRequestedRenderMode(int mode)\n\nSet the requested render mode. The default is\nvtkSmartVolumeMapper::DefaultRenderMode.\n"},
  {(char*)"SetRequestedRenderModeToDefault", PyvtkSmartVolumeMapper_SetRequestedRenderModeToDefault, METH_VARARGS,
   (char*)"V.SetRequestedRenderModeToDefault()\nC++: void SetRequestedRenderModeToDefault()\n\nSet the requested render mode to\nvtkSmartVolumeMapper::DefaultRenderMode. This is the best option\nfor an application that must adapt to different data types,\nhardware, and rendering parameters.\n"},
  {(char*)"SetRequestedRenderModeToRayCastAndTexture", PyvtkSmartVolumeMapper_SetRequestedRenderModeToRayCastAndTexture, METH_VARARGS,
   (char*)"V.SetRequestedRenderModeToRayCastAndTexture()\nC++: void SetRequestedRenderModeToRayCastAndTexture()\n\nSet the requested render mode to\nvtkSmartVolumeMapper::RayCastAndTextureRenderMode. This is a good\noption if you want to avoid using advanced OpenGL functionality,\nbut would still like to used 3D texture mapping, if available,\nfor interactive rendering.\n"},
  {(char*)"SetRequestedRenderModeToRayCast", PyvtkSmartVolumeMapper_SetRequestedRenderModeToRayCast, METH_VARARGS,
   (char*)"V.SetRequestedRenderModeToRayCast()\nC++: void SetRequestedRenderModeToRayCast()\n\nSet the requested render mode to\nvtkSmartVolumeMapper::RayCastRenderMode. This option will use\nsoftware rendering exclusively. This is a good option if you know\nthere is no hardware acceleration.\n"},
  {(char*)"GetRequestedRenderMode", PyvtkSmartVolumeMapper_GetRequestedRenderMode, METH_VARARGS,
   (char*)"V.GetRequestedRenderMode() -> int\nC++: int GetRequestedRenderMode()\n\nGet the requested render mode.\n"},
  {(char*)"SetInteractiveUpdateRate", PyvtkSmartVolumeMapper_SetInteractiveUpdateRate, METH_VARARGS,
   (char*)"V.SetInteractiveUpdateRate(float)\nC++: void SetInteractiveUpdateRate(double)\n\nSet the rate at or above this render will be considered\ninteractive. If the DesiredUpdateRate of the vtkRenderWindow that\ncaused the Render falls at or above this rate, the render is\nconsidered interactive and the mapper may be adjusted (depending\non the render mode). Initial value is 1.0.\n"},
  {(char*)"GetInteractiveUpdateRateMinValue", PyvtkSmartVolumeMapper_GetInteractiveUpdateRateMinValue, METH_VARARGS,
   (char*)"V.GetInteractiveUpdateRateMinValue() -> float\nC++: double GetInteractiveUpdateRateMinValue()\n\nSet the rate at or above this render will be considered\ninteractive. If the DesiredUpdateRate of the vtkRenderWindow that\ncaused the Render falls at or above this rate, the render is\nconsidered interactive and the mapper may be adjusted (depending\non the render mode). Initial value is 1.0.\n"},
  {(char*)"GetInteractiveUpdateRateMaxValue", PyvtkSmartVolumeMapper_GetInteractiveUpdateRateMaxValue, METH_VARARGS,
   (char*)"V.GetInteractiveUpdateRateMaxValue() -> float\nC++: double GetInteractiveUpdateRateMaxValue()\n\nSet the rate at or above this render will be considered\ninteractive. If the DesiredUpdateRate of the vtkRenderWindow that\ncaused the Render falls at or above this rate, the render is\nconsidered interactive and the mapper may be adjusted (depending\non the render mode). Initial value is 1.0.\n"},
  {(char*)"GetInteractiveUpdateRate", PyvtkSmartVolumeMapper_GetInteractiveUpdateRate, METH_VARARGS,
   (char*)"V.GetInteractiveUpdateRate() -> float\nC++: double GetInteractiveUpdateRate()\n\nGet the update rate at or above which this is considered an\ninteractive render. Initial value is 1.0.\n"},
  {(char*)"GetLastUsedRenderMode", PyvtkSmartVolumeMapper_GetLastUsedRenderMode, METH_VARARGS,
   (char*)"V.GetLastUsedRenderMode() -> int\nC++: int GetLastUsedRenderMode()\n\nThis will return the render mode used during the previous call to\nRender().\n"},
  {(char*)"SetMaxMemoryInBytes", PyvtkSmartVolumeMapper_SetMaxMemoryInBytes, METH_VARARGS,
   (char*)"V.SetMaxMemoryInBytes(int)\nC++: void SetMaxMemoryInBytes(vtkIdType a)\n\nValue passed to the GPU mapper. Ignored by other mappers. Maximum\nsize of the 3D texture in GPU memory. Will default to the size\ncomputed from the graphics card. Can be adjusted by the user.\nUseful if the automatic detection is defective or missing.\n"},
  {(char*)"GetMaxMemoryInBytes", PyvtkSmartVolumeMapper_GetMaxMemoryInBytes, METH_VARARGS,
   (char*)"V.GetMaxMemoryInBytes() -> int\nC++: vtkIdType GetMaxMemoryInBytes()\n\nValue passed to the GPU mapper. Ignored by other mappers. Maximum\nsize of the 3D texture in GPU memory. Will default to the size\ncomputed from the graphics card. Can be adjusted by the user.\nUseful if the automatic detection is defective or missing.\n"},
  {(char*)"SetMaxMemoryFraction", PyvtkSmartVolumeMapper_SetMaxMemoryFraction, METH_VARARGS,
   (char*)"V.SetMaxMemoryFraction(float)\nC++: void SetMaxMemoryFraction(float)\n\nValue passed to the GPU mapper. Ignored by other mappers. Maximum\nfraction of the MaxMemoryInBytes that should be used to hold the\ntexture. Valid values are 0.1 to 1.0.\n"},
  {(char*)"GetMaxMemoryFractionMinValue", PyvtkSmartVolumeMapper_GetMaxMemoryFractionMinValue, METH_VARARGS,
   (char*)"V.GetMaxMemoryFractionMinValue() -> float\nC++: float GetMaxMemoryFractionMinValue()\n\nValue passed to the GPU mapper. Ignored by other mappers. Maximum\nfraction of the MaxMemoryInBytes that should be used to hold the\ntexture. Valid values are 0.1 to 1.0.\n"},
  {(char*)"GetMaxMemoryFractionMaxValue", PyvtkSmartVolumeMapper_GetMaxMemoryFractionMaxValue, METH_VARARGS,
   (char*)"V.GetMaxMemoryFractionMaxValue() -> float\nC++: float GetMaxMemoryFractionMaxValue()\n\nValue passed to the GPU mapper. Ignored by other mappers. Maximum\nfraction of the MaxMemoryInBytes that should be used to hold the\ntexture. Valid values are 0.1 to 1.0.\n"},
  {(char*)"GetMaxMemoryFraction", PyvtkSmartVolumeMapper_GetMaxMemoryFraction, METH_VARARGS,
   (char*)"V.GetMaxMemoryFraction() -> float\nC++: float GetMaxMemoryFraction()\n\nValue passed to the GPU mapper. Ignored by other mappers. Maximum\nfraction of the MaxMemoryInBytes that should be used to hold the\ntexture. Valid values are 0.1 to 1.0.\n"},
  {(char*)"SetInterpolationMode", PyvtkSmartVolumeMapper_SetInterpolationMode, METH_VARARGS,
   (char*)"V.SetInterpolationMode(int)\nC++: void SetInterpolationMode(int)\n\nSet interpolation mode for downsampling (lowres GPU) (initial\nvalue: cubic).\n"},
  {(char*)"GetInterpolationModeMinValue", PyvtkSmartVolumeMapper_GetInterpolationModeMinValue, METH_VARARGS,
   (char*)"V.GetInterpolationModeMinValue() -> int\nC++: int GetInterpolationModeMinValue()\n\nSet interpolation mode for downsampling (lowres GPU) (initial\nvalue: cubic).\n"},
  {(char*)"GetInterpolationModeMaxValue", PyvtkSmartVolumeMapper_GetInterpolationModeMaxValue, METH_VARARGS,
   (char*)"V.GetInterpolationModeMaxValue() -> int\nC++: int GetInterpolationModeMaxValue()\n\nSet interpolation mode for downsampling (lowres GPU) (initial\nvalue: cubic).\n"},
  {(char*)"GetInterpolationMode", PyvtkSmartVolumeMapper_GetInterpolationMode, METH_VARARGS,
   (char*)"V.GetInterpolationMode() -> int\nC++: int GetInterpolationMode()\n\nSet interpolation mode for downsampling (lowres GPU) (initial\nvalue: cubic).\n"},
  {(char*)"SetInterpolationModeToNearestNeighbor", PyvtkSmartVolumeMapper_SetInterpolationModeToNearestNeighbor, METH_VARARGS,
   (char*)"V.SetInterpolationModeToNearestNeighbor()\nC++: void SetInterpolationModeToNearestNeighbor()\n\nSet interpolation mode for downsampling (lowres GPU) (initial\nvalue: cubic).\n"},
  {(char*)"SetInterpolationModeToLinear", PyvtkSmartVolumeMapper_SetInterpolationModeToLinear, METH_VARARGS,
   (char*)"V.SetInterpolationModeToLinear()\nC++: void SetInterpolationModeToLinear()\n\nSet interpolation mode for downsampling (lowres GPU) (initial\nvalue: cubic).\n"},
  {(char*)"SetInterpolationModeToCubic", PyvtkSmartVolumeMapper_SetInterpolationModeToCubic, METH_VARARGS,
   (char*)"V.SetInterpolationModeToCubic()\nC++: void SetInterpolationModeToCubic()\n\nSet interpolation mode for downsampling (lowres GPU) (initial\nvalue: cubic).\n"},
  {(char*)"CreateCanonicalView", PyvtkSmartVolumeMapper_CreateCanonicalView, METH_VARARGS,
   (char*)"V.CreateCanonicalView(vtkRenderer, vtkVolume, vtkVolume,\n    vtkImageData, int, [float, float, float], [float, float,\n    float])\nC++: void CreateCanonicalView(vtkRenderer *ren, vtkVolume *volume,\n     vtkVolume *volume2, vtkImageData *image, int blend_mode,\n    double viewDirection[3], double viewUp[3])\n\nThis method can be used to render a representative view of the\ninput data into the supplied image given the supplied blending\nmode, view direction, and view up vector.\n"},
  {(char*)"Render", PyvtkSmartVolumeMapper_Render, METH_VARARGS,
   (char*)"V.Render(vtkRenderer, vtkVolume)\nC++: void Render(vtkRenderer *, vtkVolume *)\n\nWARNING: INTERNAL METHOD - NOT INTENDED FOR GENERAL USE\nInitialize rendering for this volume.\n"},
  {(char*)"ReleaseGraphicsResources", PyvtkSmartVolumeMapper_ReleaseGraphicsResources, METH_VARARGS,
   (char*)"V.ReleaseGraphicsResources(vtkWindow)\nC++: void ReleaseGraphicsResources(vtkWindow *)\n\nWARNING: INTERNAL METHOD - NOT INTENDED FOR GENERAL USE Release\nany graphics resources that are being consumed by this mapper.\nThe parameter window could be used to determine which graphic\nresources to release.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkSmartVolumeMapper_StaticNew()
{
  return vtkSmartVolumeMapper::New();
}

PyObject *PyVTKClass_vtkSmartVolumeMapperNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkSmartVolumeMapper_StaticNew,
    PyvtkSmartVolumeMapper_Methods,
    "vtkSmartVolumeMapper", modulename,
    NULL, NULL,
    PyvtkSmartVolumeMapper_Doc(),
    PyVTKClass_vtkVolumeMapperNew(modulename));

  if (cls)
    {
    PyObject *d = PyVTKClass_GetDict(cls);
    PyObject *o;

    for (int c = 0; c < 7; c++)
      {
      static const struct { const char *name; int value; }
        constants[7] = {
          { "DefaultRenderMode", vtkSmartVolumeMapper::DefaultRenderMode },
          { "RayCastAndTextureRenderMode", vtkSmartVolumeMapper::RayCastAndTextureRenderMode },
          { "RayCastRenderMode", vtkSmartVolumeMapper::RayCastRenderMode },
          { "TextureRenderMode", vtkSmartVolumeMapper::TextureRenderMode },
          { "GPURenderMode", vtkSmartVolumeMapper::GPURenderMode },
          { "UndefinedRenderMode", vtkSmartVolumeMapper::UndefinedRenderMode },
          { "InvalidRenderMode", vtkSmartVolumeMapper::InvalidRenderMode },
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

const char **PyvtkSmartVolumeMapper_Doc()
{
  static const char *docstring[] = {
    "vtkSmartVolumeMapper - Adaptive volume mapper\n\n",
    "Superclass: vtkVolumeMapper\n\n",
    "vtkSmartVolumeMapper is a volume mapper that will delegate to a\nspecific volume mapper based on rendering parameters and available\nhardware. Use the SetRequestedRenderMode() method to control the\nbehavior of the selection. The following options are available:\n\nvtkSmartVolumeMapper::DefaultRenderMode:\n\n\n         Allow the vtkSmartVolumeMapper to select the best mapper\nbased on\n         rendering pa",
    "rameters and hardware support. If GPU ray\ncasting is\n         supported, this mapper will be used for all rendering. If\nnot,\n         then if 3D texture mapping is supported, it will be used for\n         interactive rendering and the vtkFixedPointRayCastMapper\nwill be\n         used for still rendering. If 3D texture mapping is not\nsupported,\n         then the vtkFixedPointRayCastMapper will be use",
    "d\nexclusively.\n         This is the default requested render mode, and is generally\nthe\n         best option. When you use this option, your volume will\nalways\n         be rendered, but the method used to render it may vary based\n         on parameters and platform.\n\nvtkSmartVolumeMapper::RayCastAndTextureRenderMode:\n\n\n         Use the vtkVolumeTextureMapper3D for interactive rendering,\n         a",
    "nd the vtkFixedPointVolumeRayCastMapper for still renders.\n         If 3D texture mapping is not supported, then the ray\n         caster will be used exclusively. When you use this option\nyour\n         volume will always be rendered, but the method used for\n         interactive rendering will vary based on parameters and\n         platform. The decision on whether a particular render is\n         in",
    "teractive or still is based on the adjustable parameter\n         InteractiveUpdateRate. If the DesiredUpdateRate found in the\n         vtkRenderWindow that initiated the Render is at or above\n         the InteractiveUpdateRate value, then the render is\nconsidered\n         interactive, otherwise it is considered a still render.\n\nvtkSmartVolumeMapper::RayCastRenderMode:\n\n\n         Use the vtkFixedPo",
    "intVolumeRayCastMapper for both\ninteractive and\n         still rendering. When you use this option your volume will\nalways\n         be rendered with the vtkFixedPointVolumeRayCastMapper.\n\nvtkSmartVolumeMapper::TextureRenderMode:\n\n\n         Use the vtkVolumeTextureMapper3D, if supported, for both\n         interactive and still rendering. If 3D texture mapping is\nnot\n         supported (either by th",
    "e hardware, or due to the rendering\n         parameters) then no image will be rendered. Use this option\nonly\n         if you have already checked for support based on the current\n         hardware, number of scalar components, and rendering\nparameters\n         in the vtkVolumeProperty. Also note that the\n         vtkVolumeTextureMapper3D does not support window / level\n         operations on the ",
    "final image, so FinalColorWindow must be\nat\n         the default value of 1.0 and FinalColorLevel must be at the\n         default value of 0.5.\n\nvtkSmartVolumeMapper::GPURenderMode:\n\n\n         Use the vtkGPUVolumeRayCastMapper, if supported, for both\n         interactive and still rendering. If the GPU ray caster is\nnot\n         supported (due to hardware limitations or rendering\nparameters)\n     ",
    "    then no image will be rendered. Use this option only if you\nhave\n         already checked for supported based on the current hardware,\n         number of scalar components, and rendering parameters in the\n         vtkVolumeProperty.\n\n\n You can adjust the contrast and brightness in the rendered image\nusing the\n FinalColorWindow and FinalColorLevel ivars. By default the\n FinalColorWindow is set ",
    "to 1.0, and the FinalColorLevel is set to\n0.5,\n which applies no correction to the computed image. To apply the\nwindow /\n level operation to the computer image color, first a Scale and Bias\n value are computed:\n\n\n scale = 1.0 / this->FinalColorWindow\n bias  = 0.5 - this->FinalColorLevel / this->FinalColorWindow\n \n To compute a new color (R', G', B', A') from an existing color\n(R,G,B,A)\n for a pixe",
    "l, the following equation is used:\n\n\n R' = R*scale + bias*A\n G' = G*scale + bias*A\n B' = B*scale + bias*A\n A' = A\n  Note that bias is multiplied by the alpha component before adding\nbecause the red, green, and blue component of the color are already\npre-multiplied by alpha. Also note that the window / level operation\nleaves the alpha component unchanged - it only adjusts the RGB\nvalues.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkSmartVolumeMapper(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkSmartVolumeMapperNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkSmartVolumeMapper", o) != 0)
    {
    Py_DECREF(o);
    }

}

