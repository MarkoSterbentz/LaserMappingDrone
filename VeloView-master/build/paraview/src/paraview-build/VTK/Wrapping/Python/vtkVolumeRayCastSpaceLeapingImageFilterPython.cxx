// python wrapper for vtkVolumeRayCastSpaceLeapingImageFilter
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkVolumeRayCastSpaceLeapingImageFilter.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkVolumeRayCastSpaceLeapingImageFilter(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkVolumeRayCastSpaceLeapingImageFilterNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkThreadedImageAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkThreadedImageAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkThreadedImageAlgorithmNew
#endif

static const char **PyvtkVolumeRayCastSpaceLeapingImageFilter_Doc();


static PyObject *
PyvtkVolumeRayCastSpaceLeapingImageFilter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeRayCastSpaceLeapingImageFilter *op = static_cast<vtkVolumeRayCastSpaceLeapingImageFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkVolumeRayCastSpaceLeapingImageFilter::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeRayCastSpaceLeapingImageFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeRayCastSpaceLeapingImageFilter *op = static_cast<vtkVolumeRayCastSpaceLeapingImageFilter *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkVolumeRayCastSpaceLeapingImageFilter::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeRayCastSpaceLeapingImageFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeRayCastSpaceLeapingImageFilter *op = static_cast<vtkVolumeRayCastSpaceLeapingImageFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkVolumeRayCastSpaceLeapingImageFilter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkVolumeRayCastSpaceLeapingImageFilter::NewInstance());

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
PyvtkVolumeRayCastSpaceLeapingImageFilter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkVolumeRayCastSpaceLeapingImageFilter *tempr = vtkVolumeRayCastSpaceLeapingImageFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeRayCastSpaceLeapingImageFilter_SetCurrentScalars(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCurrentScalars");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeRayCastSpaceLeapingImageFilter *op = static_cast<vtkVolumeRayCastSpaceLeapingImageFilter *>(vp);

  vtkDataArray *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataArray"))
    {
    if (ap.IsBound())
      {
      op->SetCurrentScalars(temp0);
      }
    else
      {
      op->vtkVolumeRayCastSpaceLeapingImageFilter::SetCurrentScalars(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeRayCastSpaceLeapingImageFilter_GetCurrentScalars(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCurrentScalars");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeRayCastSpaceLeapingImageFilter *op = static_cast<vtkVolumeRayCastSpaceLeapingImageFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkDataArray *tempr = (ap.IsBound() ?
      op->GetCurrentScalars() :
      op->vtkVolumeRayCastSpaceLeapingImageFilter::GetCurrentScalars());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeRayCastSpaceLeapingImageFilter_SetIndependentComponents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIndependentComponents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeRayCastSpaceLeapingImageFilter *op = static_cast<vtkVolumeRayCastSpaceLeapingImageFilter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetIndependentComponents(temp0);
      }
    else
      {
      op->vtkVolumeRayCastSpaceLeapingImageFilter::SetIndependentComponents(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeRayCastSpaceLeapingImageFilter_GetIndependentComponents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIndependentComponents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeRayCastSpaceLeapingImageFilter *op = static_cast<vtkVolumeRayCastSpaceLeapingImageFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetIndependentComponents() :
      op->vtkVolumeRayCastSpaceLeapingImageFilter::GetIndependentComponents());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeRayCastSpaceLeapingImageFilter_SetComputeGradientOpacity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetComputeGradientOpacity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeRayCastSpaceLeapingImageFilter *op = static_cast<vtkVolumeRayCastSpaceLeapingImageFilter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetComputeGradientOpacity(temp0);
      }
    else
      {
      op->vtkVolumeRayCastSpaceLeapingImageFilter::SetComputeGradientOpacity(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeRayCastSpaceLeapingImageFilter_GetComputeGradientOpacity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetComputeGradientOpacity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeRayCastSpaceLeapingImageFilter *op = static_cast<vtkVolumeRayCastSpaceLeapingImageFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetComputeGradientOpacity() :
      op->vtkVolumeRayCastSpaceLeapingImageFilter::GetComputeGradientOpacity());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeRayCastSpaceLeapingImageFilter_ComputeGradientOpacityOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeGradientOpacityOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeRayCastSpaceLeapingImageFilter *op = static_cast<vtkVolumeRayCastSpaceLeapingImageFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ComputeGradientOpacityOn();
      }
    else
      {
      op->vtkVolumeRayCastSpaceLeapingImageFilter::ComputeGradientOpacityOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeRayCastSpaceLeapingImageFilter_ComputeGradientOpacityOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeGradientOpacityOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeRayCastSpaceLeapingImageFilter *op = static_cast<vtkVolumeRayCastSpaceLeapingImageFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ComputeGradientOpacityOff();
      }
    else
      {
      op->vtkVolumeRayCastSpaceLeapingImageFilter::ComputeGradientOpacityOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeRayCastSpaceLeapingImageFilter_SetComputeMinMax(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetComputeMinMax");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeRayCastSpaceLeapingImageFilter *op = static_cast<vtkVolumeRayCastSpaceLeapingImageFilter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetComputeMinMax(temp0);
      }
    else
      {
      op->vtkVolumeRayCastSpaceLeapingImageFilter::SetComputeMinMax(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeRayCastSpaceLeapingImageFilter_GetComputeMinMax(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetComputeMinMax");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeRayCastSpaceLeapingImageFilter *op = static_cast<vtkVolumeRayCastSpaceLeapingImageFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetComputeMinMax() :
      op->vtkVolumeRayCastSpaceLeapingImageFilter::GetComputeMinMax());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeRayCastSpaceLeapingImageFilter_ComputeMinMaxOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeMinMaxOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeRayCastSpaceLeapingImageFilter *op = static_cast<vtkVolumeRayCastSpaceLeapingImageFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ComputeMinMaxOn();
      }
    else
      {
      op->vtkVolumeRayCastSpaceLeapingImageFilter::ComputeMinMaxOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeRayCastSpaceLeapingImageFilter_ComputeMinMaxOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeMinMaxOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeRayCastSpaceLeapingImageFilter *op = static_cast<vtkVolumeRayCastSpaceLeapingImageFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ComputeMinMaxOff();
      }
    else
      {
      op->vtkVolumeRayCastSpaceLeapingImageFilter::ComputeMinMaxOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeRayCastSpaceLeapingImageFilter_SetUpdateGradientOpacityFlags(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUpdateGradientOpacityFlags");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeRayCastSpaceLeapingImageFilter *op = static_cast<vtkVolumeRayCastSpaceLeapingImageFilter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetUpdateGradientOpacityFlags(temp0);
      }
    else
      {
      op->vtkVolumeRayCastSpaceLeapingImageFilter::SetUpdateGradientOpacityFlags(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeRayCastSpaceLeapingImageFilter_GetUpdateGradientOpacityFlags(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUpdateGradientOpacityFlags");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeRayCastSpaceLeapingImageFilter *op = static_cast<vtkVolumeRayCastSpaceLeapingImageFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetUpdateGradientOpacityFlags() :
      op->vtkVolumeRayCastSpaceLeapingImageFilter::GetUpdateGradientOpacityFlags());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeRayCastSpaceLeapingImageFilter_UpdateGradientOpacityFlagsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateGradientOpacityFlagsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeRayCastSpaceLeapingImageFilter *op = static_cast<vtkVolumeRayCastSpaceLeapingImageFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->UpdateGradientOpacityFlagsOn();
      }
    else
      {
      op->vtkVolumeRayCastSpaceLeapingImageFilter::UpdateGradientOpacityFlagsOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeRayCastSpaceLeapingImageFilter_UpdateGradientOpacityFlagsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateGradientOpacityFlagsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeRayCastSpaceLeapingImageFilter *op = static_cast<vtkVolumeRayCastSpaceLeapingImageFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->UpdateGradientOpacityFlagsOff();
      }
    else
      {
      op->vtkVolumeRayCastSpaceLeapingImageFilter::UpdateGradientOpacityFlagsOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeRayCastSpaceLeapingImageFilter_GetLastMinMaxBuildTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLastMinMaxBuildTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeRayCastSpaceLeapingImageFilter *op = static_cast<vtkVolumeRayCastSpaceLeapingImageFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned long tempr = (ap.IsBound() ?
      op->GetLastMinMaxBuildTime() :
      op->vtkVolumeRayCastSpaceLeapingImageFilter::GetLastMinMaxBuildTime());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeRayCastSpaceLeapingImageFilter_GetLastMinMaxFlagTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLastMinMaxFlagTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeRayCastSpaceLeapingImageFilter *op = static_cast<vtkVolumeRayCastSpaceLeapingImageFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned long tempr = (ap.IsBound() ?
      op->GetLastMinMaxFlagTime() :
      op->vtkVolumeRayCastSpaceLeapingImageFilter::GetLastMinMaxFlagTime());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeRayCastSpaceLeapingImageFilter_SetTableShift_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTableShift");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeRayCastSpaceLeapingImageFilter *op = static_cast<vtkVolumeRayCastSpaceLeapingImageFilter *>(vp);

  float temp0;
  float temp1;
  float temp2;
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
      op->SetTableShift(temp0, temp1, temp2, temp3);
      }
    else
      {
      op->vtkVolumeRayCastSpaceLeapingImageFilter::SetTableShift(temp0, temp1, temp2, temp3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkVolumeRayCastSpaceLeapingImageFilter_SetTableShift_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTableShift");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeRayCastSpaceLeapingImageFilter *op = static_cast<vtkVolumeRayCastSpaceLeapingImageFilter *>(vp);

  float temp0[4];
  const int size0 = 4;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetTableShift(temp0);
      }
    else
      {
      op->vtkVolumeRayCastSpaceLeapingImageFilter::SetTableShift(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkVolumeRayCastSpaceLeapingImageFilter_SetTableShift(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 4:
      return PyvtkVolumeRayCastSpaceLeapingImageFilter_SetTableShift_s1(self, args);
    case 1:
      return PyvtkVolumeRayCastSpaceLeapingImageFilter_SetTableShift_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetTableShift");
  return NULL;
}



static PyObject *
PyvtkVolumeRayCastSpaceLeapingImageFilter_GetTableShift(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTableShift");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeRayCastSpaceLeapingImageFilter *op = static_cast<vtkVolumeRayCastSpaceLeapingImageFilter *>(vp);

  int sizer = 4;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    float *tempr = (ap.IsBound() ?
      op->GetTableShift() :
      op->vtkVolumeRayCastSpaceLeapingImageFilter::GetTableShift());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeRayCastSpaceLeapingImageFilter_SetTableScale_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTableScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeRayCastSpaceLeapingImageFilter *op = static_cast<vtkVolumeRayCastSpaceLeapingImageFilter *>(vp);

  float temp0;
  float temp1;
  float temp2;
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
      op->SetTableScale(temp0, temp1, temp2, temp3);
      }
    else
      {
      op->vtkVolumeRayCastSpaceLeapingImageFilter::SetTableScale(temp0, temp1, temp2, temp3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkVolumeRayCastSpaceLeapingImageFilter_SetTableScale_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTableScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeRayCastSpaceLeapingImageFilter *op = static_cast<vtkVolumeRayCastSpaceLeapingImageFilter *>(vp);

  float temp0[4];
  const int size0 = 4;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetTableScale(temp0);
      }
    else
      {
      op->vtkVolumeRayCastSpaceLeapingImageFilter::SetTableScale(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkVolumeRayCastSpaceLeapingImageFilter_SetTableScale(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 4:
      return PyvtkVolumeRayCastSpaceLeapingImageFilter_SetTableScale_s1(self, args);
    case 1:
      return PyvtkVolumeRayCastSpaceLeapingImageFilter_SetTableScale_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetTableScale");
  return NULL;
}



static PyObject *
PyvtkVolumeRayCastSpaceLeapingImageFilter_GetTableScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTableScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeRayCastSpaceLeapingImageFilter *op = static_cast<vtkVolumeRayCastSpaceLeapingImageFilter *>(vp);

  int sizer = 4;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    float *tempr = (ap.IsBound() ?
      op->GetTableScale() :
      op->vtkVolumeRayCastSpaceLeapingImageFilter::GetTableScale());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeRayCastSpaceLeapingImageFilter_SetTableSize_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTableSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeRayCastSpaceLeapingImageFilter *op = static_cast<vtkVolumeRayCastSpaceLeapingImageFilter *>(vp);

  int temp0;
  int temp1;
  int temp2;
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
      op->SetTableSize(temp0, temp1, temp2, temp3);
      }
    else
      {
      op->vtkVolumeRayCastSpaceLeapingImageFilter::SetTableSize(temp0, temp1, temp2, temp3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkVolumeRayCastSpaceLeapingImageFilter_SetTableSize_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTableSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeRayCastSpaceLeapingImageFilter *op = static_cast<vtkVolumeRayCastSpaceLeapingImageFilter *>(vp);

  int temp0[4];
  const int size0 = 4;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetTableSize(temp0);
      }
    else
      {
      op->vtkVolumeRayCastSpaceLeapingImageFilter::SetTableSize(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkVolumeRayCastSpaceLeapingImageFilter_SetTableSize(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 4:
      return PyvtkVolumeRayCastSpaceLeapingImageFilter_SetTableSize_s1(self, args);
    case 1:
      return PyvtkVolumeRayCastSpaceLeapingImageFilter_SetTableSize_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetTableSize");
  return NULL;
}



static PyObject *
PyvtkVolumeRayCastSpaceLeapingImageFilter_GetTableSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTableSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeRayCastSpaceLeapingImageFilter *op = static_cast<vtkVolumeRayCastSpaceLeapingImageFilter *>(vp);

  int sizer = 4;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int *tempr = (ap.IsBound() ?
      op->GetTableSize() :
      op->vtkVolumeRayCastSpaceLeapingImageFilter::GetTableSize());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeRayCastSpaceLeapingImageFilter_GetNumberOfIndependentComponents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfIndependentComponents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeRayCastSpaceLeapingImageFilter *op = static_cast<vtkVolumeRayCastSpaceLeapingImageFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfIndependentComponents() :
      op->vtkVolumeRayCastSpaceLeapingImageFilter::GetNumberOfIndependentComponents());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeRayCastSpaceLeapingImageFilter_GetMinMaxVolume(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMinMaxVolume");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeRayCastSpaceLeapingImageFilter *op = static_cast<vtkVolumeRayCastSpaceLeapingImageFilter *>(vp);

  int temp0[4];
  int save0[4];
  const int size0 = 4;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    unsigned short *tempr = (ap.IsBound() ?
      op->GetMinMaxVolume(temp0) :
      op->vtkVolumeRayCastSpaceLeapingImageFilter::GetMinMaxVolume(temp0));

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
PyvtkVolumeRayCastSpaceLeapingImageFilter_SetCache(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCache");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeRayCastSpaceLeapingImageFilter *op = static_cast<vtkVolumeRayCastSpaceLeapingImageFilter *>(vp);

  vtkImageData *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkImageData"))
    {
    if (ap.IsBound())
      {
      op->SetCache(temp0);
      }
    else
      {
      op->vtkVolumeRayCastSpaceLeapingImageFilter::SetCache(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeRayCastSpaceLeapingImageFilter_ComputeInputExtentsForOutput(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "ComputeInputExtentsForOutput");

  int temp0[6];
  int save0[6];
  const int size0 = 6;
  int temp1[3];
  int save1[3];
  const int size1 = 3;
  int temp2[6];
  int save2[6];
  const int size2 = 6;
  vtkImageData *temp3 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(4) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetArray(temp2, size2) &&
      ap.GetVTKObject(temp3, "vtkImageData"))
    {
    ap.SaveArray(temp0, save0, size0);
    ap.SaveArray(temp1, save1, size1);
    ap.SaveArray(temp2, save2, size2);

    vtkVolumeRayCastSpaceLeapingImageFilter::ComputeInputExtentsForOutput(temp0, temp1, temp2, temp3);

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

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeRayCastSpaceLeapingImageFilter_GetMinNonZeroScalarIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMinNonZeroScalarIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeRayCastSpaceLeapingImageFilter *op = static_cast<vtkVolumeRayCastSpaceLeapingImageFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned short *tempr = (ap.IsBound() ?
      op->GetMinNonZeroScalarIndex() :
      op->vtkVolumeRayCastSpaceLeapingImageFilter::GetMinNonZeroScalarIndex());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeRayCastSpaceLeapingImageFilter_GetMinNonZeroGradientMagnitudeIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMinNonZeroGradientMagnitudeIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeRayCastSpaceLeapingImageFilter *op = static_cast<vtkVolumeRayCastSpaceLeapingImageFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned char *tempr = (ap.IsBound() ?
      op->GetMinNonZeroGradientMagnitudeIndex() :
      op->vtkVolumeRayCastSpaceLeapingImageFilter::GetMinNonZeroGradientMagnitudeIndex());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeRayCastSpaceLeapingImageFilter_SetScalarOpacityTable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarOpacityTable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeRayCastSpaceLeapingImageFilter *op = static_cast<vtkVolumeRayCastSpaceLeapingImageFilter *>(vp);

  int temp0;
  unsigned short *temp1 = NULL;
  unsigned short *save1 = NULL;
  unsigned short small1[8];
  int size1 = 0;
  PyObject *result = NULL;

  if (op)
    {
    size1 = ap.GetArgSize(1);
    temp1 = small1;
    if (size1 > 4)
      {
      temp1 = new unsigned short[2*size1];
      }
    save1 = &temp1[size1];
    }

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
    {
    ap.SaveArray(temp1, save1, size1);

    if (ap.IsBound())
      {
      op->SetScalarOpacityTable(temp0, temp1);
      }
    else
      {
      op->vtkVolumeRayCastSpaceLeapingImageFilter::SetScalarOpacityTable(temp0, temp1);
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
PyvtkVolumeRayCastSpaceLeapingImageFilter_SetGradientOpacityTable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGradientOpacityTable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeRayCastSpaceLeapingImageFilter *op = static_cast<vtkVolumeRayCastSpaceLeapingImageFilter *>(vp);

  int temp0;
  unsigned short *temp1 = NULL;
  unsigned short *save1 = NULL;
  unsigned short small1[8];
  int size1 = 0;
  PyObject *result = NULL;

  if (op)
    {
    size1 = ap.GetArgSize(1);
    temp1 = small1;
    if (size1 > 4)
      {
      temp1 = new unsigned short[2*size1];
      }
    save1 = &temp1[size1];
    }

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
    {
    ap.SaveArray(temp1, save1, size1);

    if (ap.IsBound())
      {
      op->SetGradientOpacityTable(temp0, temp1);
      }
    else
      {
      op->vtkVolumeRayCastSpaceLeapingImageFilter::SetGradientOpacityTable(temp0, temp1);
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
PyvtkVolumeRayCastSpaceLeapingImageFilter_ComputeOffset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeOffset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeRayCastSpaceLeapingImageFilter *op = static_cast<vtkVolumeRayCastSpaceLeapingImageFilter *>(vp);

  int temp0[6];
  const int size0 = 6;
  int temp1[6];
  const int size1 = 6;
  int temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2))
    {
    vtkIdType tempr = (ap.IsBound() ?
      op->ComputeOffset(temp0, temp1, temp2) :
      op->vtkVolumeRayCastSpaceLeapingImageFilter::ComputeOffset(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkVolumeRayCastSpaceLeapingImageFilter_Methods[] = {
  {(char*)"GetClassName", PyvtkVolumeRayCastSpaceLeapingImageFilter_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkVolumeRayCastSpaceLeapingImageFilter_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkVolumeRayCastSpaceLeapingImageFilter_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkVolumeRayCastSpaceLeapingImageFilter\nC++: vtkVolumeRayCastSpaceLeapingImageFilter *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkVolumeRayCastSpaceLeapingImageFilter_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject)\n    -> vtkVolumeRayCastSpaceLeapingImageFilter\nC++: vtkVolumeRayCastSpaceLeapingImageFilter *SafeDownCast(\n    vtkObject* o)\n\n"},
  {(char*)"SetCurrentScalars", PyvtkVolumeRayCastSpaceLeapingImageFilter_SetCurrentScalars, METH_VARARGS,
   (char*)"V.SetCurrentScalars(vtkDataArray)\nC++: virtual void SetCurrentScalars(vtkDataArray *)\n\nSet the scalars.\n"},
  {(char*)"GetCurrentScalars", PyvtkVolumeRayCastSpaceLeapingImageFilter_GetCurrentScalars, METH_VARARGS,
   (char*)"V.GetCurrentScalars() -> vtkDataArray\nC++: vtkDataArray *GetCurrentScalars()\n\nSet the scalars.\n"},
  {(char*)"SetIndependentComponents", PyvtkVolumeRayCastSpaceLeapingImageFilter_SetIndependentComponents, METH_VARARGS,
   (char*)"V.SetIndependentComponents(int)\nC++: void SetIndependentComponents(int a)\n\nDo we use independent components, or dependent components ?\n"},
  {(char*)"GetIndependentComponents", PyvtkVolumeRayCastSpaceLeapingImageFilter_GetIndependentComponents, METH_VARARGS,
   (char*)"V.GetIndependentComponents() -> int\nC++: int GetIndependentComponents()\n\nDo we use independent components, or dependent components ?\n"},
  {(char*)"SetComputeGradientOpacity", PyvtkVolumeRayCastSpaceLeapingImageFilter_SetComputeGradientOpacity, METH_VARARGS,
   (char*)"V.SetComputeGradientOpacity(int)\nC++: void SetComputeGradientOpacity(int a)\n\nCompute gradient opacity ?\n"},
  {(char*)"GetComputeGradientOpacity", PyvtkVolumeRayCastSpaceLeapingImageFilter_GetComputeGradientOpacity, METH_VARARGS,
   (char*)"V.GetComputeGradientOpacity() -> int\nC++: int GetComputeGradientOpacity()\n\nCompute gradient opacity ?\n"},
  {(char*)"ComputeGradientOpacityOn", PyvtkVolumeRayCastSpaceLeapingImageFilter_ComputeGradientOpacityOn, METH_VARARGS,
   (char*)"V.ComputeGradientOpacityOn()\nC++: void ComputeGradientOpacityOn()\n\nCompute gradient opacity ?\n"},
  {(char*)"ComputeGradientOpacityOff", PyvtkVolumeRayCastSpaceLeapingImageFilter_ComputeGradientOpacityOff, METH_VARARGS,
   (char*)"V.ComputeGradientOpacityOff()\nC++: void ComputeGradientOpacityOff()\n\nCompute gradient opacity ?\n"},
  {(char*)"SetComputeMinMax", PyvtkVolumeRayCastSpaceLeapingImageFilter_SetComputeMinMax, METH_VARARGS,
   (char*)"V.SetComputeMinMax(int)\nC++: void SetComputeMinMax(int a)\n\nCompute the min max structure ?.\n"},
  {(char*)"GetComputeMinMax", PyvtkVolumeRayCastSpaceLeapingImageFilter_GetComputeMinMax, METH_VARARGS,
   (char*)"V.GetComputeMinMax() -> int\nC++: int GetComputeMinMax()\n\nCompute the min max structure ?.\n"},
  {(char*)"ComputeMinMaxOn", PyvtkVolumeRayCastSpaceLeapingImageFilter_ComputeMinMaxOn, METH_VARARGS,
   (char*)"V.ComputeMinMaxOn()\nC++: void ComputeMinMaxOn()\n\nCompute the min max structure ?.\n"},
  {(char*)"ComputeMinMaxOff", PyvtkVolumeRayCastSpaceLeapingImageFilter_ComputeMinMaxOff, METH_VARARGS,
   (char*)"V.ComputeMinMaxOff()\nC++: void ComputeMinMaxOff()\n\nCompute the min max structure ?.\n"},
  {(char*)"SetUpdateGradientOpacityFlags", PyvtkVolumeRayCastSpaceLeapingImageFilter_SetUpdateGradientOpacityFlags, METH_VARARGS,
   (char*)"V.SetUpdateGradientOpacityFlags(int)\nC++: void SetUpdateGradientOpacityFlags(int a)\n\nUpdate the gradient opacity flags. (The scalar opacity flags are\nalways updated upon execution of this filter.)\n"},
  {(char*)"GetUpdateGradientOpacityFlags", PyvtkVolumeRayCastSpaceLeapingImageFilter_GetUpdateGradientOpacityFlags, METH_VARARGS,
   (char*)"V.GetUpdateGradientOpacityFlags() -> int\nC++: int GetUpdateGradientOpacityFlags()\n\nUpdate the gradient opacity flags. (The scalar opacity flags are\nalways updated upon execution of this filter.)\n"},
  {(char*)"UpdateGradientOpacityFlagsOn", PyvtkVolumeRayCastSpaceLeapingImageFilter_UpdateGradientOpacityFlagsOn, METH_VARARGS,
   (char*)"V.UpdateGradientOpacityFlagsOn()\nC++: void UpdateGradientOpacityFlagsOn()\n\nUpdate the gradient opacity flags. (The scalar opacity flags are\nalways updated upon execution of this filter.)\n"},
  {(char*)"UpdateGradientOpacityFlagsOff", PyvtkVolumeRayCastSpaceLeapingImageFilter_UpdateGradientOpacityFlagsOff, METH_VARARGS,
   (char*)"V.UpdateGradientOpacityFlagsOff()\nC++: void UpdateGradientOpacityFlagsOff()\n\nUpdate the gradient opacity flags. (The scalar opacity flags are\nalways updated upon execution of this filter.)\n"},
  {(char*)"GetLastMinMaxBuildTime", PyvtkVolumeRayCastSpaceLeapingImageFilter_GetLastMinMaxBuildTime, METH_VARARGS,
   (char*)"V.GetLastMinMaxBuildTime() -> int\nC++: unsigned long GetLastMinMaxBuildTime()\n\nGet the last execution time. This is updated every time the\nscalars or the gradient opacity values are computed\n"},
  {(char*)"GetLastMinMaxFlagTime", PyvtkVolumeRayCastSpaceLeapingImageFilter_GetLastMinMaxFlagTime, METH_VARARGS,
   (char*)"V.GetLastMinMaxFlagTime() -> int\nC++: unsigned long GetLastMinMaxFlagTime()\n\nGet the last execution time. This is updated every time the flags\nbits are re-computed.\n"},
  {(char*)"SetTableShift", PyvtkVolumeRayCastSpaceLeapingImageFilter_SetTableShift, METH_VARARGS,
   (char*)"V.SetTableShift(float, float, float, float)\nC++: void SetTableShift(float, float, float, float)\nV.SetTableShift((float, float, float, float))\nC++: void SetTableShift(float a[4])\n\n"},
  {(char*)"GetTableShift", PyvtkVolumeRayCastSpaceLeapingImageFilter_GetTableShift, METH_VARARGS,
   (char*)"V.GetTableShift() -> (float, float, float, float)\nC++: float *GetTableShift()\n\n"},
  {(char*)"SetTableScale", PyvtkVolumeRayCastSpaceLeapingImageFilter_SetTableScale, METH_VARARGS,
   (char*)"V.SetTableScale(float, float, float, float)\nC++: void SetTableScale(float, float, float, float)\nV.SetTableScale((float, float, float, float))\nC++: void SetTableScale(float a[4])\n\n"},
  {(char*)"GetTableScale", PyvtkVolumeRayCastSpaceLeapingImageFilter_GetTableScale, METH_VARARGS,
   (char*)"V.GetTableScale() -> (float, float, float, float)\nC++: float *GetTableScale()\n\n"},
  {(char*)"SetTableSize", PyvtkVolumeRayCastSpaceLeapingImageFilter_SetTableSize, METH_VARARGS,
   (char*)"V.SetTableSize(int, int, int, int)\nC++: void SetTableSize(int, int, int, int)\nV.SetTableSize((int, int, int, int))\nC++: void SetTableSize(int a[4])\n\n"},
  {(char*)"GetTableSize", PyvtkVolumeRayCastSpaceLeapingImageFilter_GetTableSize, METH_VARARGS,
   (char*)"V.GetTableSize() -> (int, int, int, int)\nC++: int *GetTableSize()\n\n"},
  {(char*)"GetNumberOfIndependentComponents", PyvtkVolumeRayCastSpaceLeapingImageFilter_GetNumberOfIndependentComponents, METH_VARARGS,
   (char*)"V.GetNumberOfIndependentComponents() -> int\nC++: int GetNumberOfIndependentComponents()\n\nGet the number of independent components for which we need to\nkeep track of min/max\n"},
  {(char*)"GetMinMaxVolume", PyvtkVolumeRayCastSpaceLeapingImageFilter_GetMinMaxVolume, METH_VARARGS,
   (char*)"V.GetMinMaxVolume([int, int, int, int]) -> (int, ...)\nC++: unsigned short *GetMinMaxVolume(int dims[4])\n\nGet the raw pointer to the final computed space leaping\ndatastructure. The result is only valid after Update() has been\ncalled on the filter. Note that this filter holds onto its\nmemory. The dimensions of the min- max volume are in dims. The\n4th value in the array indicates the number of independent\ncomponents, (also queried via GetNumberOfIndependentComponents())\n"},
  {(char*)"SetCache", PyvtkVolumeRayCastSpaceLeapingImageFilter_SetCache, METH_VARARGS,
   (char*)"V.SetCache(vtkImageData)\nC++: virtual void SetCache(vtkImageData *imageCache)\n\nINTERNAL - Do not use Set the last cached min-max volume, as used\nby vtkFixedPointVolumeRayCastMapper.\n"},
  {(char*)"ComputeInputExtentsForOutput", PyvtkVolumeRayCastSpaceLeapingImageFilter_ComputeInputExtentsForOutput, METH_VARARGS | METH_STATIC,
   (char*)"V.ComputeInputExtentsForOutput([int, int, int, int, int, int],\n    [int, int, int], [int, int, int, int, int, int], vtkImageData)\nC++: static void ComputeInputExtentsForOutput(int inExt[6],\n    int inDim[3], int outExt[6], vtkImageData *inData)\n\nCompute the extents and dimensions of the input that's required\nto generate an output min-max structure given by outExt. INTERNAL\n- Do not use\n"},
  {(char*)"GetMinNonZeroScalarIndex", PyvtkVolumeRayCastSpaceLeapingImageFilter_GetMinNonZeroScalarIndex, METH_VARARGS,
   (char*)"V.GetMinNonZeroScalarIndex() -> (int, ...)\nC++: unsigned short *GetMinNonZeroScalarIndex()\n\nGet the first non-zero scalar opacity and gradient opacity\nindices for each independent copmonent INTERNAL - Do not use.\n"},
  {(char*)"GetMinNonZeroGradientMagnitudeIndex", PyvtkVolumeRayCastSpaceLeapingImageFilter_GetMinNonZeroGradientMagnitudeIndex, METH_VARARGS,
   (char*)"V.GetMinNonZeroGradientMagnitudeIndex() -> (int, ...)\nC++: unsigned char *GetMinNonZeroGradientMagnitudeIndex()\n\nGet the first non-zero scalar opacity and gradient opacity\nindices for each independent copmonent INTERNAL - Do not use.\n"},
  {(char*)"SetScalarOpacityTable", PyvtkVolumeRayCastSpaceLeapingImageFilter_SetScalarOpacityTable, METH_VARARGS,
   (char*)"V.SetScalarOpacityTable(int, [int, ...])\nC++: void SetScalarOpacityTable(int c, unsigned short *t)\n\nSet the scalar opacity and gradient opacity tables computed for\neach component by the vtkFixedPointVolumeRayCastMapper\n"},
  {(char*)"SetGradientOpacityTable", PyvtkVolumeRayCastSpaceLeapingImageFilter_SetGradientOpacityTable, METH_VARARGS,
   (char*)"V.SetGradientOpacityTable(int, [int, ...])\nC++: void SetGradientOpacityTable(int c, unsigned short *t)\n\nSet the scalar opacity and gradient opacity tables computed for\neach component by the vtkFixedPointVolumeRayCastMapper\n"},
  {(char*)"ComputeOffset", PyvtkVolumeRayCastSpaceLeapingImageFilter_ComputeOffset, METH_VARARGS,
   (char*)"V.ComputeOffset((int, int, int, int, int, int), (int, int, int,\n    int, int, int), int) -> int\nC++: vtkIdType ComputeOffset(const int ext[6],\n    const int wholeExt[6], int nComponents)\n\nINTERNAL - Do not use Compute the offset within an image of whole\nextents wholeExt, to access the data starting at extents ext.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkVolumeRayCastSpaceLeapingImageFilter_StaticNew()
{
  return vtkVolumeRayCastSpaceLeapingImageFilter::New();
}

PyObject *PyVTKClass_vtkVolumeRayCastSpaceLeapingImageFilterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkVolumeRayCastSpaceLeapingImageFilter_StaticNew,
    PyvtkVolumeRayCastSpaceLeapingImageFilter_Methods,
    "vtkVolumeRayCastSpaceLeapingImageFilter", modulename,
    NULL, NULL,
    PyvtkVolumeRayCastSpaceLeapingImageFilter_Doc(),
    PyVTKClass_vtkThreadedImageAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkVolumeRayCastSpaceLeapingImageFilter_Doc()
{
  static const char *docstring[] = {
    "vtkVolumeRayCastSpaceLeapingImageFilter - Builds the space leaping\ndata structure.\n\n",
    "Superclass: vtkThreadedImageAlgorithm\n\n",
    "This is an optimized multi-threaded imaging filter that builds the\nspace leaping datastructure, used by\nvtkFixedPointVolumeRayCastMapper. Empty space leaping is used to skip\nlarge empty regions in the scalar opacity and/or the gradient opacity\ntransfer functions. Depending on the various options set by\nvtkFixedPointVolumeRayCastMapper, the class will internally invoke\none of the many optmized rout",
    "ines to compute the min/max/gradient-max\nvalues within a fixed block size, trying to compute everything in a\nsingle multi-threaded pass through the data\n\nThe block size may be changed at compile time. Its ifdef'ed to 4 in\nthe CXX file.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkVolumeRayCastSpaceLeapingImageFilter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkVolumeRayCastSpaceLeapingImageFilterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkVolumeRayCastSpaceLeapingImageFilter", o) != 0)
    {
    Py_DECREF(o);
    }

}

