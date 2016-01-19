// python wrapper for vtkIterativeClosestPointTransform
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkIterativeClosestPointTransform.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkIterativeClosestPointTransform(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkIterativeClosestPointTransformNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkLinearTransformNew
extern "C" { PyObject *PyVTKClass_vtkLinearTransformNew(const char *); }
#define DECLARED_PyVTKClass_vtkLinearTransformNew
#endif

static const char **PyvtkIterativeClosestPointTransform_Doc();


static PyObject *
PyvtkIterativeClosestPointTransform_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIterativeClosestPointTransform *op = static_cast<vtkIterativeClosestPointTransform *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkIterativeClosestPointTransform::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkIterativeClosestPointTransform_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIterativeClosestPointTransform *op = static_cast<vtkIterativeClosestPointTransform *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkIterativeClosestPointTransform::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkIterativeClosestPointTransform_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIterativeClosestPointTransform *op = static_cast<vtkIterativeClosestPointTransform *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkIterativeClosestPointTransform *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkIterativeClosestPointTransform::NewInstance());

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
PyvtkIterativeClosestPointTransform_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkIterativeClosestPointTransform *tempr = vtkIterativeClosestPointTransform::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkIterativeClosestPointTransform_SetSource(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSource");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIterativeClosestPointTransform *op = static_cast<vtkIterativeClosestPointTransform *>(vp);

  vtkDataSet *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataSet"))
    {
    if (ap.IsBound())
      {
      op->SetSource(temp0);
      }
    else
      {
      op->vtkIterativeClosestPointTransform::SetSource(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkIterativeClosestPointTransform_SetTarget(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTarget");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIterativeClosestPointTransform *op = static_cast<vtkIterativeClosestPointTransform *>(vp);

  vtkDataSet *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataSet"))
    {
    if (ap.IsBound())
      {
      op->SetTarget(temp0);
      }
    else
      {
      op->vtkIterativeClosestPointTransform::SetTarget(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkIterativeClosestPointTransform_GetSource(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSource");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIterativeClosestPointTransform *op = static_cast<vtkIterativeClosestPointTransform *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkDataSet *tempr = (ap.IsBound() ?
      op->GetSource() :
      op->vtkIterativeClosestPointTransform::GetSource());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkIterativeClosestPointTransform_GetTarget(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTarget");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIterativeClosestPointTransform *op = static_cast<vtkIterativeClosestPointTransform *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkDataSet *tempr = (ap.IsBound() ?
      op->GetTarget() :
      op->vtkIterativeClosestPointTransform::GetTarget());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkIterativeClosestPointTransform_SetLocator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLocator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIterativeClosestPointTransform *op = static_cast<vtkIterativeClosestPointTransform *>(vp);

  vtkCellLocator *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCellLocator"))
    {
    if (ap.IsBound())
      {
      op->SetLocator(temp0);
      }
    else
      {
      op->vtkIterativeClosestPointTransform::SetLocator(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkIterativeClosestPointTransform_GetLocator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLocator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIterativeClosestPointTransform *op = static_cast<vtkIterativeClosestPointTransform *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkCellLocator *tempr = (ap.IsBound() ?
      op->GetLocator() :
      op->vtkIterativeClosestPointTransform::GetLocator());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkIterativeClosestPointTransform_SetMaximumNumberOfIterations(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaximumNumberOfIterations");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIterativeClosestPointTransform *op = static_cast<vtkIterativeClosestPointTransform *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetMaximumNumberOfIterations(temp0);
      }
    else
      {
      op->vtkIterativeClosestPointTransform::SetMaximumNumberOfIterations(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkIterativeClosestPointTransform_GetMaximumNumberOfIterations(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumNumberOfIterations");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIterativeClosestPointTransform *op = static_cast<vtkIterativeClosestPointTransform *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetMaximumNumberOfIterations() :
      op->vtkIterativeClosestPointTransform::GetMaximumNumberOfIterations());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkIterativeClosestPointTransform_GetNumberOfIterations(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfIterations");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIterativeClosestPointTransform *op = static_cast<vtkIterativeClosestPointTransform *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfIterations() :
      op->vtkIterativeClosestPointTransform::GetNumberOfIterations());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkIterativeClosestPointTransform_SetCheckMeanDistance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCheckMeanDistance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIterativeClosestPointTransform *op = static_cast<vtkIterativeClosestPointTransform *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetCheckMeanDistance(temp0);
      }
    else
      {
      op->vtkIterativeClosestPointTransform::SetCheckMeanDistance(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkIterativeClosestPointTransform_GetCheckMeanDistance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCheckMeanDistance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIterativeClosestPointTransform *op = static_cast<vtkIterativeClosestPointTransform *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetCheckMeanDistance() :
      op->vtkIterativeClosestPointTransform::GetCheckMeanDistance());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkIterativeClosestPointTransform_CheckMeanDistanceOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CheckMeanDistanceOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIterativeClosestPointTransform *op = static_cast<vtkIterativeClosestPointTransform *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->CheckMeanDistanceOn();
      }
    else
      {
      op->vtkIterativeClosestPointTransform::CheckMeanDistanceOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkIterativeClosestPointTransform_CheckMeanDistanceOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CheckMeanDistanceOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIterativeClosestPointTransform *op = static_cast<vtkIterativeClosestPointTransform *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->CheckMeanDistanceOff();
      }
    else
      {
      op->vtkIterativeClosestPointTransform::CheckMeanDistanceOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkIterativeClosestPointTransform_SetMeanDistanceMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMeanDistanceMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIterativeClosestPointTransform *op = static_cast<vtkIterativeClosestPointTransform *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetMeanDistanceMode(temp0);
      }
    else
      {
      op->vtkIterativeClosestPointTransform::SetMeanDistanceMode(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkIterativeClosestPointTransform_GetMeanDistanceModeMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMeanDistanceModeMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIterativeClosestPointTransform *op = static_cast<vtkIterativeClosestPointTransform *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetMeanDistanceModeMinValue() :
      op->vtkIterativeClosestPointTransform::GetMeanDistanceModeMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkIterativeClosestPointTransform_GetMeanDistanceModeMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMeanDistanceModeMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIterativeClosestPointTransform *op = static_cast<vtkIterativeClosestPointTransform *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetMeanDistanceModeMaxValue() :
      op->vtkIterativeClosestPointTransform::GetMeanDistanceModeMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkIterativeClosestPointTransform_GetMeanDistanceMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMeanDistanceMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIterativeClosestPointTransform *op = static_cast<vtkIterativeClosestPointTransform *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetMeanDistanceMode() :
      op->vtkIterativeClosestPointTransform::GetMeanDistanceMode());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkIterativeClosestPointTransform_SetMeanDistanceModeToRMS(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMeanDistanceModeToRMS");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIterativeClosestPointTransform *op = static_cast<vtkIterativeClosestPointTransform *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetMeanDistanceModeToRMS();
      }
    else
      {
      op->vtkIterativeClosestPointTransform::SetMeanDistanceModeToRMS();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkIterativeClosestPointTransform_SetMeanDistanceModeToAbsoluteValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMeanDistanceModeToAbsoluteValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIterativeClosestPointTransform *op = static_cast<vtkIterativeClosestPointTransform *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetMeanDistanceModeToAbsoluteValue();
      }
    else
      {
      op->vtkIterativeClosestPointTransform::SetMeanDistanceModeToAbsoluteValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkIterativeClosestPointTransform_GetMeanDistanceModeAsString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMeanDistanceModeAsString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIterativeClosestPointTransform *op = static_cast<vtkIterativeClosestPointTransform *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetMeanDistanceModeAsString() :
      op->vtkIterativeClosestPointTransform::GetMeanDistanceModeAsString());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkIterativeClosestPointTransform_SetMaximumMeanDistance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaximumMeanDistance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIterativeClosestPointTransform *op = static_cast<vtkIterativeClosestPointTransform *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetMaximumMeanDistance(temp0);
      }
    else
      {
      op->vtkIterativeClosestPointTransform::SetMaximumMeanDistance(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkIterativeClosestPointTransform_GetMaximumMeanDistance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumMeanDistance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIterativeClosestPointTransform *op = static_cast<vtkIterativeClosestPointTransform *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetMaximumMeanDistance() :
      op->vtkIterativeClosestPointTransform::GetMaximumMeanDistance());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkIterativeClosestPointTransform_GetMeanDistance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMeanDistance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIterativeClosestPointTransform *op = static_cast<vtkIterativeClosestPointTransform *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetMeanDistance() :
      op->vtkIterativeClosestPointTransform::GetMeanDistance());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkIterativeClosestPointTransform_SetMaximumNumberOfLandmarks(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaximumNumberOfLandmarks");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIterativeClosestPointTransform *op = static_cast<vtkIterativeClosestPointTransform *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetMaximumNumberOfLandmarks(temp0);
      }
    else
      {
      op->vtkIterativeClosestPointTransform::SetMaximumNumberOfLandmarks(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkIterativeClosestPointTransform_GetMaximumNumberOfLandmarks(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumNumberOfLandmarks");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIterativeClosestPointTransform *op = static_cast<vtkIterativeClosestPointTransform *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetMaximumNumberOfLandmarks() :
      op->vtkIterativeClosestPointTransform::GetMaximumNumberOfLandmarks());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkIterativeClosestPointTransform_SetStartByMatchingCentroids(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetStartByMatchingCentroids");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIterativeClosestPointTransform *op = static_cast<vtkIterativeClosestPointTransform *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetStartByMatchingCentroids(temp0);
      }
    else
      {
      op->vtkIterativeClosestPointTransform::SetStartByMatchingCentroids(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkIterativeClosestPointTransform_GetStartByMatchingCentroids(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStartByMatchingCentroids");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIterativeClosestPointTransform *op = static_cast<vtkIterativeClosestPointTransform *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetStartByMatchingCentroids() :
      op->vtkIterativeClosestPointTransform::GetStartByMatchingCentroids());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkIterativeClosestPointTransform_StartByMatchingCentroidsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StartByMatchingCentroidsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIterativeClosestPointTransform *op = static_cast<vtkIterativeClosestPointTransform *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->StartByMatchingCentroidsOn();
      }
    else
      {
      op->vtkIterativeClosestPointTransform::StartByMatchingCentroidsOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkIterativeClosestPointTransform_StartByMatchingCentroidsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StartByMatchingCentroidsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIterativeClosestPointTransform *op = static_cast<vtkIterativeClosestPointTransform *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->StartByMatchingCentroidsOff();
      }
    else
      {
      op->vtkIterativeClosestPointTransform::StartByMatchingCentroidsOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkIterativeClosestPointTransform_GetLandmarkTransform(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLandmarkTransform");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIterativeClosestPointTransform *op = static_cast<vtkIterativeClosestPointTransform *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkLandmarkTransform *tempr = (ap.IsBound() ?
      op->GetLandmarkTransform() :
      op->vtkIterativeClosestPointTransform::GetLandmarkTransform());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkIterativeClosestPointTransform_Inverse(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Inverse");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIterativeClosestPointTransform *op = static_cast<vtkIterativeClosestPointTransform *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Inverse();
      }
    else
      {
      op->vtkIterativeClosestPointTransform::Inverse();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkIterativeClosestPointTransform_MakeTransform(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MakeTransform");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIterativeClosestPointTransform *op = static_cast<vtkIterativeClosestPointTransform *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkAbstractTransform *tempr = (ap.IsBound() ?
      op->MakeTransform() :
      op->vtkIterativeClosestPointTransform::MakeTransform());

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

static PyMethodDef PyvtkIterativeClosestPointTransform_Methods[] = {
  {(char*)"GetClassName", PyvtkIterativeClosestPointTransform_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkIterativeClosestPointTransform_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkIterativeClosestPointTransform_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkIterativeClosestPointTransform\nC++: vtkIterativeClosestPointTransform *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkIterativeClosestPointTransform_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkIterativeClosestPointTransform\nC++: vtkIterativeClosestPointTransform *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetSource", PyvtkIterativeClosestPointTransform_SetSource, METH_VARARGS,
   (char*)"V.SetSource(vtkDataSet)\nC++: void SetSource(vtkDataSet *source)\n\nSpecify the source and target data sets.\n"},
  {(char*)"SetTarget", PyvtkIterativeClosestPointTransform_SetTarget, METH_VARARGS,
   (char*)"V.SetTarget(vtkDataSet)\nC++: void SetTarget(vtkDataSet *target)\n\nSpecify the source and target data sets.\n"},
  {(char*)"GetSource", PyvtkIterativeClosestPointTransform_GetSource, METH_VARARGS,
   (char*)"V.GetSource() -> vtkDataSet\nC++: vtkDataSet *GetSource()\n\nSpecify the source and target data sets.\n"},
  {(char*)"GetTarget", PyvtkIterativeClosestPointTransform_GetTarget, METH_VARARGS,
   (char*)"V.GetTarget() -> vtkDataSet\nC++: vtkDataSet *GetTarget()\n\nSpecify the source and target data sets.\n"},
  {(char*)"SetLocator", PyvtkIterativeClosestPointTransform_SetLocator, METH_VARARGS,
   (char*)"V.SetLocator(vtkCellLocator)\nC++: void SetLocator(vtkCellLocator *locator)\n\nSet/Get a spatial locator for speeding up the search process. An\ninstance of vtkCellLocator is used by default.\n"},
  {(char*)"GetLocator", PyvtkIterativeClosestPointTransform_GetLocator, METH_VARARGS,
   (char*)"V.GetLocator() -> vtkCellLocator\nC++: vtkCellLocator *GetLocator()\n\nSet/Get a spatial locator for speeding up the search process. An\ninstance of vtkCellLocator is used by default.\n"},
  {(char*)"SetMaximumNumberOfIterations", PyvtkIterativeClosestPointTransform_SetMaximumNumberOfIterations, METH_VARARGS,
   (char*)"V.SetMaximumNumberOfIterations(int)\nC++: void SetMaximumNumberOfIterations(int a)\n\nSet/Get the  maximum number of iterations. Default is 50.\n"},
  {(char*)"GetMaximumNumberOfIterations", PyvtkIterativeClosestPointTransform_GetMaximumNumberOfIterations, METH_VARARGS,
   (char*)"V.GetMaximumNumberOfIterations() -> int\nC++: int GetMaximumNumberOfIterations()\n\nSet/Get the  maximum number of iterations. Default is 50.\n"},
  {(char*)"GetNumberOfIterations", PyvtkIterativeClosestPointTransform_GetNumberOfIterations, METH_VARARGS,
   (char*)"V.GetNumberOfIterations() -> int\nC++: int GetNumberOfIterations()\n\nGet the number of iterations since the last update\n"},
  {(char*)"SetCheckMeanDistance", PyvtkIterativeClosestPointTransform_SetCheckMeanDistance, METH_VARARGS,
   (char*)"V.SetCheckMeanDistance(int)\nC++: void SetCheckMeanDistance(int a)\n\nForce the algorithm to check the mean distance between two\niterations. Default is Off.\n"},
  {(char*)"GetCheckMeanDistance", PyvtkIterativeClosestPointTransform_GetCheckMeanDistance, METH_VARARGS,
   (char*)"V.GetCheckMeanDistance() -> int\nC++: int GetCheckMeanDistance()\n\nForce the algorithm to check the mean distance between two\niterations. Default is Off.\n"},
  {(char*)"CheckMeanDistanceOn", PyvtkIterativeClosestPointTransform_CheckMeanDistanceOn, METH_VARARGS,
   (char*)"V.CheckMeanDistanceOn()\nC++: void CheckMeanDistanceOn()\n\nForce the algorithm to check the mean distance between two\niterations. Default is Off.\n"},
  {(char*)"CheckMeanDistanceOff", PyvtkIterativeClosestPointTransform_CheckMeanDistanceOff, METH_VARARGS,
   (char*)"V.CheckMeanDistanceOff()\nC++: void CheckMeanDistanceOff()\n\nForce the algorithm to check the mean distance between two\niterations. Default is Off.\n"},
  {(char*)"SetMeanDistanceMode", PyvtkIterativeClosestPointTransform_SetMeanDistanceMode, METH_VARARGS,
   (char*)"V.SetMeanDistanceMode(int)\nC++: void SetMeanDistanceMode(int)\n\nSpecify the mean distance mode. This mode expresses how the mean\ndistance is computed. The RMS mode is the square root of the\naverage of the sum of squares of the closest point distances. The\nAbsolute Value mode is the mean of the sum of absolute values of\nthe closest point distances. The default is VTK_ICP_MODE_RMS\n"},
  {(char*)"GetMeanDistanceModeMinValue", PyvtkIterativeClosestPointTransform_GetMeanDistanceModeMinValue, METH_VARARGS,
   (char*)"V.GetMeanDistanceModeMinValue() -> int\nC++: int GetMeanDistanceModeMinValue()\n\nSpecify the mean distance mode. This mode expresses how the mean\ndistance is computed. The RMS mode is the square root of the\naverage of the sum of squares of the closest point distances. The\nAbsolute Value mode is the mean of the sum of absolute values of\nthe closest point distances. The default is VTK_ICP_MODE_RMS\n"},
  {(char*)"GetMeanDistanceModeMaxValue", PyvtkIterativeClosestPointTransform_GetMeanDistanceModeMaxValue, METH_VARARGS,
   (char*)"V.GetMeanDistanceModeMaxValue() -> int\nC++: int GetMeanDistanceModeMaxValue()\n\nSpecify the mean distance mode. This mode expresses how the mean\ndistance is computed. The RMS mode is the square root of the\naverage of the sum of squares of the closest point distances. The\nAbsolute Value mode is the mean of the sum of absolute values of\nthe closest point distances. The default is VTK_ICP_MODE_RMS\n"},
  {(char*)"GetMeanDistanceMode", PyvtkIterativeClosestPointTransform_GetMeanDistanceMode, METH_VARARGS,
   (char*)"V.GetMeanDistanceMode() -> int\nC++: int GetMeanDistanceMode()\n\nSpecify the mean distance mode. This mode expresses how the mean\ndistance is computed. The RMS mode is the square root of the\naverage of the sum of squares of the closest point distances. The\nAbsolute Value mode is the mean of the sum of absolute values of\nthe closest point distances. The default is VTK_ICP_MODE_RMS\n"},
  {(char*)"SetMeanDistanceModeToRMS", PyvtkIterativeClosestPointTransform_SetMeanDistanceModeToRMS, METH_VARARGS,
   (char*)"V.SetMeanDistanceModeToRMS()\nC++: void SetMeanDistanceModeToRMS()\n\nSpecify the mean distance mode. This mode expresses how the mean\ndistance is computed. The RMS mode is the square root of the\naverage of the sum of squares of the closest point distances. The\nAbsolute Value mode is the mean of the sum of absolute values of\nthe closest point distances. The default is VTK_ICP_MODE_RMS\n"},
  {(char*)"SetMeanDistanceModeToAbsoluteValue", PyvtkIterativeClosestPointTransform_SetMeanDistanceModeToAbsoluteValue, METH_VARARGS,
   (char*)"V.SetMeanDistanceModeToAbsoluteValue()\nC++: void SetMeanDistanceModeToAbsoluteValue()\n\nSpecify the mean distance mode. This mode expresses how the mean\ndistance is computed. The RMS mode is the square root of the\naverage of the sum of squares of the closest point distances. The\nAbsolute Value mode is the mean of the sum of absolute values of\nthe closest point distances. The default is VTK_ICP_MODE_RMS\n"},
  {(char*)"GetMeanDistanceModeAsString", PyvtkIterativeClosestPointTransform_GetMeanDistanceModeAsString, METH_VARARGS,
   (char*)"V.GetMeanDistanceModeAsString() -> string\nC++: const char *GetMeanDistanceModeAsString()\n\nSpecify the mean distance mode. This mode expresses how the mean\ndistance is computed. The RMS mode is the square root of the\naverage of the sum of squares of the closest point distances. The\nAbsolute Value mode is the mean of the sum of absolute values of\nthe closest point distances. The default is VTK_ICP_MODE_RMS\n"},
  {(char*)"SetMaximumMeanDistance", PyvtkIterativeClosestPointTransform_SetMaximumMeanDistance, METH_VARARGS,
   (char*)"V.SetMaximumMeanDistance(float)\nC++: void SetMaximumMeanDistance(double a)\n\nSet/Get the maximum mean distance between two iteration. If the\nmean distance is lower than this, the convergence stops. The\ndefault is 0.01.\n"},
  {(char*)"GetMaximumMeanDistance", PyvtkIterativeClosestPointTransform_GetMaximumMeanDistance, METH_VARARGS,
   (char*)"V.GetMaximumMeanDistance() -> float\nC++: double GetMaximumMeanDistance()\n\nSet/Get the maximum mean distance between two iteration. If the\nmean distance is lower than this, the convergence stops. The\ndefault is 0.01.\n"},
  {(char*)"GetMeanDistance", PyvtkIterativeClosestPointTransform_GetMeanDistance, METH_VARARGS,
   (char*)"V.GetMeanDistance() -> float\nC++: double GetMeanDistance()\n\nGet the mean distance between the last two iterations.\n"},
  {(char*)"SetMaximumNumberOfLandmarks", PyvtkIterativeClosestPointTransform_SetMaximumNumberOfLandmarks, METH_VARARGS,
   (char*)"V.SetMaximumNumberOfLandmarks(int)\nC++: void SetMaximumNumberOfLandmarks(int a)\n\nSet/Get the maximum number of landmarks sampled in your dataset.\nIf your dataset is dense, then you will typically not need all\nthe points to compute the ICP transform. The default is 200.\n"},
  {(char*)"GetMaximumNumberOfLandmarks", PyvtkIterativeClosestPointTransform_GetMaximumNumberOfLandmarks, METH_VARARGS,
   (char*)"V.GetMaximumNumberOfLandmarks() -> int\nC++: int GetMaximumNumberOfLandmarks()\n\nSet/Get the maximum number of landmarks sampled in your dataset.\nIf your dataset is dense, then you will typically not need all\nthe points to compute the ICP transform. The default is 200.\n"},
  {(char*)"SetStartByMatchingCentroids", PyvtkIterativeClosestPointTransform_SetStartByMatchingCentroids, METH_VARARGS,
   (char*)"V.SetStartByMatchingCentroids(int)\nC++: void SetStartByMatchingCentroids(int a)\n\nStarts the process by translating source centroid to target\ncentroid. The default is Off.\n"},
  {(char*)"GetStartByMatchingCentroids", PyvtkIterativeClosestPointTransform_GetStartByMatchingCentroids, METH_VARARGS,
   (char*)"V.GetStartByMatchingCentroids() -> int\nC++: int GetStartByMatchingCentroids()\n\nStarts the process by translating source centroid to target\ncentroid. The default is Off.\n"},
  {(char*)"StartByMatchingCentroidsOn", PyvtkIterativeClosestPointTransform_StartByMatchingCentroidsOn, METH_VARARGS,
   (char*)"V.StartByMatchingCentroidsOn()\nC++: void StartByMatchingCentroidsOn()\n\nStarts the process by translating source centroid to target\ncentroid. The default is Off.\n"},
  {(char*)"StartByMatchingCentroidsOff", PyvtkIterativeClosestPointTransform_StartByMatchingCentroidsOff, METH_VARARGS,
   (char*)"V.StartByMatchingCentroidsOff()\nC++: void StartByMatchingCentroidsOff()\n\nStarts the process by translating source centroid to target\ncentroid. The default is Off.\n"},
  {(char*)"GetLandmarkTransform", PyvtkIterativeClosestPointTransform_GetLandmarkTransform, METH_VARARGS,
   (char*)"V.GetLandmarkTransform() -> vtkLandmarkTransform\nC++: vtkLandmarkTransform *GetLandmarkTransform()\n\nGet the internal landmark transform. Use it to constrain the\nnumber of degrees of freedom of the solution (i.e. rigid body,\nsimilarity, etc.).\n"},
  {(char*)"Inverse", PyvtkIterativeClosestPointTransform_Inverse, METH_VARARGS,
   (char*)"V.Inverse()\nC++: void Inverse()\n\nInvert the transformation.  This is done by switching the source\nand target.\n"},
  {(char*)"MakeTransform", PyvtkIterativeClosestPointTransform_MakeTransform, METH_VARARGS,
   (char*)"V.MakeTransform() -> vtkAbstractTransform\nC++: vtkAbstractTransform *MakeTransform()\n\nMake another transform of the same type.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkIterativeClosestPointTransform_StaticNew()
{
  return vtkIterativeClosestPointTransform::New();
}

PyObject *PyVTKClass_vtkIterativeClosestPointTransformNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkIterativeClosestPointTransform_StaticNew,
    PyvtkIterativeClosestPointTransform_Methods,
    "vtkIterativeClosestPointTransform", modulename,
    NULL, NULL,
    PyvtkIterativeClosestPointTransform_Doc(),
    PyVTKClass_vtkLinearTransformNew(modulename));
  return cls;
}

const char **PyvtkIterativeClosestPointTransform_Doc()
{
  static const char *docstring[] = {
    "vtkIterativeClosestPointTransform - Implementation of the ICP\nalgorithm.\n\n",
    "Superclass: vtkLinearTransform\n\n",
    "Match two surfaces using the iterative closest point (ICP) algorithm.\nThe core of the algorithm is to match each vertex in one surface with\nthe closest surface point on the other, then apply the transformation\nthat modify one surface to best match the other (in a least square\nsense). This has to be iterated to get proper convergence of the\nsurfaces.\n\nNote:\n\nUse vtkTransformPolyDataFilter to apply ",
    "the resulting ICP transform\nto your data. You might also set it to your actor's user transform.\n\nNote:\n\nThis class makes use of vtkLandmarkTransform internally to compute\nthe best fit. Use the GetLandmarkTransform member to get a pointer to\nthat transform and set its parameters. You might, for example,\nconstrain the number of degrees of freedom of the solution (i.e.\nrigid body, similarity, etc.) b",
    "y checking the vtkLandmarkTransform\ndocumentation for its SetMode member.\n\nSee Also:\n\nvtkLandmarkTransform\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkIterativeClosestPointTransform(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkIterativeClosestPointTransformNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkIterativeClosestPointTransform", o) != 0)
    {
    Py_DECREF(o);
    }

  for (int c = 0; c < 2; c++)
    {
    static const struct { const char *name; int value; }
      constants[2] = {
        { "VTK_ICP_MODE_RMS", 0 },
        { "VTK_ICP_MODE_AV", 1 },
      };

    o = PyInt_FromLong(constants[c].value);
    if (o)
      {
      PyDict_SetItemString(dict, (char *)constants[c].name, o);
      Py_DECREF(o);
      }
    }

}

