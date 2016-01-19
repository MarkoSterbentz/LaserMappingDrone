// python wrapper for vtkThreshold
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkThreshold.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkThreshold(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkThresholdNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkUnstructuredGridAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkUnstructuredGridAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkUnstructuredGridAlgorithmNew
#endif

static const char **PyvtkThreshold_Doc();


static PyObject *
PyvtkThreshold_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThreshold *op = static_cast<vtkThreshold *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkThreshold::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkThreshold_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThreshold *op = static_cast<vtkThreshold *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkThreshold::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkThreshold_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThreshold *op = static_cast<vtkThreshold *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkThreshold *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkThreshold::NewInstance());

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
PyvtkThreshold_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkThreshold *tempr = vtkThreshold::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkThreshold_ThresholdByLower(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ThresholdByLower");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThreshold *op = static_cast<vtkThreshold *>(vp);

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
      op->vtkThreshold::ThresholdByLower(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkThreshold_ThresholdByUpper(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ThresholdByUpper");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThreshold *op = static_cast<vtkThreshold *>(vp);

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
      op->vtkThreshold::ThresholdByUpper(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkThreshold_ThresholdBetween(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ThresholdBetween");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThreshold *op = static_cast<vtkThreshold *>(vp);

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
      op->vtkThreshold::ThresholdBetween(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkThreshold_GetUpperThreshold(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUpperThreshold");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThreshold *op = static_cast<vtkThreshold *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetUpperThreshold() :
      op->vtkThreshold::GetUpperThreshold());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkThreshold_GetLowerThreshold(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLowerThreshold");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThreshold *op = static_cast<vtkThreshold *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetLowerThreshold() :
      op->vtkThreshold::GetLowerThreshold());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkThreshold_SetAttributeMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAttributeMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThreshold *op = static_cast<vtkThreshold *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetAttributeMode(temp0);
      }
    else
      {
      op->vtkThreshold::SetAttributeMode(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkThreshold_GetAttributeMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAttributeMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThreshold *op = static_cast<vtkThreshold *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetAttributeMode() :
      op->vtkThreshold::GetAttributeMode());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkThreshold_SetAttributeModeToDefault(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAttributeModeToDefault");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThreshold *op = static_cast<vtkThreshold *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetAttributeModeToDefault();
      }
    else
      {
      op->vtkThreshold::SetAttributeModeToDefault();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkThreshold_SetAttributeModeToUsePointData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAttributeModeToUsePointData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThreshold *op = static_cast<vtkThreshold *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetAttributeModeToUsePointData();
      }
    else
      {
      op->vtkThreshold::SetAttributeModeToUsePointData();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkThreshold_SetAttributeModeToUseCellData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAttributeModeToUseCellData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThreshold *op = static_cast<vtkThreshold *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetAttributeModeToUseCellData();
      }
    else
      {
      op->vtkThreshold::SetAttributeModeToUseCellData();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkThreshold_GetAttributeModeAsString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAttributeModeAsString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThreshold *op = static_cast<vtkThreshold *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetAttributeModeAsString() :
      op->vtkThreshold::GetAttributeModeAsString());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkThreshold_SetComponentMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetComponentMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThreshold *op = static_cast<vtkThreshold *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetComponentMode(temp0);
      }
    else
      {
      op->vtkThreshold::SetComponentMode(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkThreshold_GetComponentModeMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetComponentModeMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThreshold *op = static_cast<vtkThreshold *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetComponentModeMinValue() :
      op->vtkThreshold::GetComponentModeMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkThreshold_GetComponentModeMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetComponentModeMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThreshold *op = static_cast<vtkThreshold *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetComponentModeMaxValue() :
      op->vtkThreshold::GetComponentModeMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkThreshold_GetComponentMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetComponentMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThreshold *op = static_cast<vtkThreshold *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetComponentMode() :
      op->vtkThreshold::GetComponentMode());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkThreshold_SetComponentModeToUseSelected(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetComponentModeToUseSelected");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThreshold *op = static_cast<vtkThreshold *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetComponentModeToUseSelected();
      }
    else
      {
      op->vtkThreshold::SetComponentModeToUseSelected();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkThreshold_SetComponentModeToUseAll(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetComponentModeToUseAll");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThreshold *op = static_cast<vtkThreshold *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetComponentModeToUseAll();
      }
    else
      {
      op->vtkThreshold::SetComponentModeToUseAll();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkThreshold_SetComponentModeToUseAny(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetComponentModeToUseAny");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThreshold *op = static_cast<vtkThreshold *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetComponentModeToUseAny();
      }
    else
      {
      op->vtkThreshold::SetComponentModeToUseAny();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkThreshold_GetComponentModeAsString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetComponentModeAsString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThreshold *op = static_cast<vtkThreshold *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetComponentModeAsString() :
      op->vtkThreshold::GetComponentModeAsString());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkThreshold_SetSelectedComponent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSelectedComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThreshold *op = static_cast<vtkThreshold *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetSelectedComponent(temp0);
      }
    else
      {
      op->vtkThreshold::SetSelectedComponent(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkThreshold_GetSelectedComponentMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelectedComponentMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThreshold *op = static_cast<vtkThreshold *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetSelectedComponentMinValue() :
      op->vtkThreshold::GetSelectedComponentMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkThreshold_GetSelectedComponentMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelectedComponentMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThreshold *op = static_cast<vtkThreshold *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetSelectedComponentMaxValue() :
      op->vtkThreshold::GetSelectedComponentMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkThreshold_GetSelectedComponent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelectedComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThreshold *op = static_cast<vtkThreshold *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetSelectedComponent() :
      op->vtkThreshold::GetSelectedComponent());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkThreshold_SetAllScalars(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAllScalars");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThreshold *op = static_cast<vtkThreshold *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetAllScalars(temp0);
      }
    else
      {
      op->vtkThreshold::SetAllScalars(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkThreshold_GetAllScalars(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAllScalars");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThreshold *op = static_cast<vtkThreshold *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetAllScalars() :
      op->vtkThreshold::GetAllScalars());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkThreshold_AllScalarsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AllScalarsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThreshold *op = static_cast<vtkThreshold *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->AllScalarsOn();
      }
    else
      {
      op->vtkThreshold::AllScalarsOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkThreshold_AllScalarsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AllScalarsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThreshold *op = static_cast<vtkThreshold *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->AllScalarsOff();
      }
    else
      {
      op->vtkThreshold::AllScalarsOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkThreshold_SetUseContinuousCellRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseContinuousCellRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThreshold *op = static_cast<vtkThreshold *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetUseContinuousCellRange(temp0);
      }
    else
      {
      op->vtkThreshold::SetUseContinuousCellRange(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkThreshold_GetUseContinuousCellRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseContinuousCellRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThreshold *op = static_cast<vtkThreshold *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetUseContinuousCellRange() :
      op->vtkThreshold::GetUseContinuousCellRange());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkThreshold_UseContinuousCellRangeOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseContinuousCellRangeOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThreshold *op = static_cast<vtkThreshold *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->UseContinuousCellRangeOn();
      }
    else
      {
      op->vtkThreshold::UseContinuousCellRangeOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkThreshold_UseContinuousCellRangeOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseContinuousCellRangeOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThreshold *op = static_cast<vtkThreshold *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->UseContinuousCellRangeOff();
      }
    else
      {
      op->vtkThreshold::UseContinuousCellRangeOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkThreshold_SetPointsDataTypeToDouble(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPointsDataTypeToDouble");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThreshold *op = static_cast<vtkThreshold *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetPointsDataTypeToDouble();
      }
    else
      {
      op->vtkThreshold::SetPointsDataTypeToDouble();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkThreshold_SetPointsDataTypeToFloat(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPointsDataTypeToFloat");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThreshold *op = static_cast<vtkThreshold *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetPointsDataTypeToFloat();
      }
    else
      {
      op->vtkThreshold::SetPointsDataTypeToFloat();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkThreshold_SetPointsDataType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPointsDataType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThreshold *op = static_cast<vtkThreshold *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetPointsDataType(temp0);
      }
    else
      {
      op->vtkThreshold::SetPointsDataType(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkThreshold_GetPointsDataType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointsDataType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThreshold *op = static_cast<vtkThreshold *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetPointsDataType() :
      op->vtkThreshold::GetPointsDataType());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkThreshold_SetOutputPointsPrecision(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputPointsPrecision");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThreshold *op = static_cast<vtkThreshold *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetOutputPointsPrecision(temp0);
      }
    else
      {
      op->vtkThreshold::SetOutputPointsPrecision(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkThreshold_GetOutputPointsPrecision(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputPointsPrecision");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThreshold *op = static_cast<vtkThreshold *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetOutputPointsPrecision() :
      op->vtkThreshold::GetOutputPointsPrecision());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkThreshold_Methods[] = {
  {(char*)"GetClassName", PyvtkThreshold_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkThreshold_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkThreshold_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkThreshold\nC++: vtkThreshold *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkThreshold_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkThreshold\nC++: vtkThreshold *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"ThresholdByLower", PyvtkThreshold_ThresholdByLower, METH_VARARGS,
   (char*)"V.ThresholdByLower(float)\nC++: void ThresholdByLower(double lower)\n\nCriterion is cells whose scalars are less or equal to lower\nthreshold.\n"},
  {(char*)"ThresholdByUpper", PyvtkThreshold_ThresholdByUpper, METH_VARARGS,
   (char*)"V.ThresholdByUpper(float)\nC++: void ThresholdByUpper(double upper)\n\nCriterion is cells whose scalars are greater or equal to upper\nthreshold.\n"},
  {(char*)"ThresholdBetween", PyvtkThreshold_ThresholdBetween, METH_VARARGS,
   (char*)"V.ThresholdBetween(float, float)\nC++: void ThresholdBetween(double lower, double upper)\n\nCriterion is cells whose scalars are between lower and upper\nthresholds (inclusive of the end values).\n"},
  {(char*)"GetUpperThreshold", PyvtkThreshold_GetUpperThreshold, METH_VARARGS,
   (char*)"V.GetUpperThreshold() -> float\nC++: double GetUpperThreshold()\n\nGet the Upper and Lower thresholds.\n"},
  {(char*)"GetLowerThreshold", PyvtkThreshold_GetLowerThreshold, METH_VARARGS,
   (char*)"V.GetLowerThreshold() -> float\nC++: double GetLowerThreshold()\n\nGet the Upper and Lower thresholds.\n"},
  {(char*)"SetAttributeMode", PyvtkThreshold_SetAttributeMode, METH_VARARGS,
   (char*)"V.SetAttributeMode(int)\nC++: void SetAttributeMode(int a)\n\nControl how the filter works with scalar point data and cell\nattribute data.  By default (AttributeModeToDefault), the filter\nwill use point data, and if no point data is available, then cell\ndata is used. Alternatively you can explicitly set the filter to\nuse point data (AttributeModeToUsePointData) or cell data\n(AttributeModeToUseCellData).\n"},
  {(char*)"GetAttributeMode", PyvtkThreshold_GetAttributeMode, METH_VARARGS,
   (char*)"V.GetAttributeMode() -> int\nC++: int GetAttributeMode()\n\nControl how the filter works with scalar point data and cell\nattribute data.  By default (AttributeModeToDefault), the filter\nwill use point data, and if no point data is available, then cell\ndata is used. Alternatively you can explicitly set the filter to\nuse point data (AttributeModeToUsePointData) or cell data\n(AttributeModeToUseCellData).\n"},
  {(char*)"SetAttributeModeToDefault", PyvtkThreshold_SetAttributeModeToDefault, METH_VARARGS,
   (char*)"V.SetAttributeModeToDefault()\nC++: void SetAttributeModeToDefault()\n\nControl how the filter works with scalar point data and cell\nattribute data.  By default (AttributeModeToDefault), the filter\nwill use point data, and if no point data is available, then cell\ndata is used. Alternatively you can explicitly set the filter to\nuse point data (AttributeModeToUsePointData) or cell data\n(AttributeModeToUseCellData).\n"},
  {(char*)"SetAttributeModeToUsePointData", PyvtkThreshold_SetAttributeModeToUsePointData, METH_VARARGS,
   (char*)"V.SetAttributeModeToUsePointData()\nC++: void SetAttributeModeToUsePointData()\n\nControl how the filter works with scalar point data and cell\nattribute data.  By default (AttributeModeToDefault), the filter\nwill use point data, and if no point data is available, then cell\ndata is used. Alternatively you can explicitly set the filter to\nuse point data (AttributeModeToUsePointData) or cell data\n(AttributeModeToUseCellData).\n"},
  {(char*)"SetAttributeModeToUseCellData", PyvtkThreshold_SetAttributeModeToUseCellData, METH_VARARGS,
   (char*)"V.SetAttributeModeToUseCellData()\nC++: void SetAttributeModeToUseCellData()\n\nControl how the filter works with scalar point data and cell\nattribute data.  By default (AttributeModeToDefault), the filter\nwill use point data, and if no point data is available, then cell\ndata is used. Alternatively you can explicitly set the filter to\nuse point data (AttributeModeToUsePointData) or cell data\n(AttributeModeToUseCellData).\n"},
  {(char*)"GetAttributeModeAsString", PyvtkThreshold_GetAttributeModeAsString, METH_VARARGS,
   (char*)"V.GetAttributeModeAsString() -> string\nC++: const char *GetAttributeModeAsString()\n\nControl how the filter works with scalar point data and cell\nattribute data.  By default (AttributeModeToDefault), the filter\nwill use point data, and if no point data is available, then cell\ndata is used. Alternatively you can explicitly set the filter to\nuse point data (AttributeModeToUsePointData) or cell data\n(AttributeModeToUseCellData).\n"},
  {(char*)"SetComponentMode", PyvtkThreshold_SetComponentMode, METH_VARARGS,
   (char*)"V.SetComponentMode(int)\nC++: void SetComponentMode(int)\n\nControl how the decision of in / out is made with multi-component\ndata. The choices are to use the selected component (specified in\nthe SelectedComponent ivar), or to look at all components. When\nlooking at all components, the evaluation can pass if all the\ncomponents satisfy the rule (UseAll) or if any satisfy is\n(UseAny). The default value is UseSelected.\n"},
  {(char*)"GetComponentModeMinValue", PyvtkThreshold_GetComponentModeMinValue, METH_VARARGS,
   (char*)"V.GetComponentModeMinValue() -> int\nC++: int GetComponentModeMinValue()\n\nControl how the decision of in / out is made with multi-component\ndata. The choices are to use the selected component (specified in\nthe SelectedComponent ivar), or to look at all components. When\nlooking at all components, the evaluation can pass if all the\ncomponents satisfy the rule (UseAll) or if any satisfy is\n(UseAny). The default value is UseSelected.\n"},
  {(char*)"GetComponentModeMaxValue", PyvtkThreshold_GetComponentModeMaxValue, METH_VARARGS,
   (char*)"V.GetComponentModeMaxValue() -> int\nC++: int GetComponentModeMaxValue()\n\nControl how the decision of in / out is made with multi-component\ndata. The choices are to use the selected component (specified in\nthe SelectedComponent ivar), or to look at all components. When\nlooking at all components, the evaluation can pass if all the\ncomponents satisfy the rule (UseAll) or if any satisfy is\n(UseAny). The default value is UseSelected.\n"},
  {(char*)"GetComponentMode", PyvtkThreshold_GetComponentMode, METH_VARARGS,
   (char*)"V.GetComponentMode() -> int\nC++: int GetComponentMode()\n\nControl how the decision of in / out is made with multi-component\ndata. The choices are to use the selected component (specified in\nthe SelectedComponent ivar), or to look at all components. When\nlooking at all components, the evaluation can pass if all the\ncomponents satisfy the rule (UseAll) or if any satisfy is\n(UseAny). The default value is UseSelected.\n"},
  {(char*)"SetComponentModeToUseSelected", PyvtkThreshold_SetComponentModeToUseSelected, METH_VARARGS,
   (char*)"V.SetComponentModeToUseSelected()\nC++: void SetComponentModeToUseSelected()\n\nControl how the decision of in / out is made with multi-component\ndata. The choices are to use the selected component (specified in\nthe SelectedComponent ivar), or to look at all components. When\nlooking at all components, the evaluation can pass if all the\ncomponents satisfy the rule (UseAll) or if any satisfy is\n(UseAny). The default value is UseSelected.\n"},
  {(char*)"SetComponentModeToUseAll", PyvtkThreshold_SetComponentModeToUseAll, METH_VARARGS,
   (char*)"V.SetComponentModeToUseAll()\nC++: void SetComponentModeToUseAll()\n\nControl how the decision of in / out is made with multi-component\ndata. The choices are to use the selected component (specified in\nthe SelectedComponent ivar), or to look at all components. When\nlooking at all components, the evaluation can pass if all the\ncomponents satisfy the rule (UseAll) or if any satisfy is\n(UseAny). The default value is UseSelected.\n"},
  {(char*)"SetComponentModeToUseAny", PyvtkThreshold_SetComponentModeToUseAny, METH_VARARGS,
   (char*)"V.SetComponentModeToUseAny()\nC++: void SetComponentModeToUseAny()\n\nControl how the decision of in / out is made with multi-component\ndata. The choices are to use the selected component (specified in\nthe SelectedComponent ivar), or to look at all components. When\nlooking at all components, the evaluation can pass if all the\ncomponents satisfy the rule (UseAll) or if any satisfy is\n(UseAny). The default value is UseSelected.\n"},
  {(char*)"GetComponentModeAsString", PyvtkThreshold_GetComponentModeAsString, METH_VARARGS,
   (char*)"V.GetComponentModeAsString() -> string\nC++: const char *GetComponentModeAsString()\n\nControl how the decision of in / out is made with multi-component\ndata. The choices are to use the selected component (specified in\nthe SelectedComponent ivar), or to look at all components. When\nlooking at all components, the evaluation can pass if all the\ncomponents satisfy the rule (UseAll) or if any satisfy is\n(UseAny). The default value is UseSelected.\n"},
  {(char*)"SetSelectedComponent", PyvtkThreshold_SetSelectedComponent, METH_VARARGS,
   (char*)"V.SetSelectedComponent(int)\nC++: void SetSelectedComponent(int)\n\nWhen the component mode is UseSelected, this ivar indicated the\nselected component. The default value is 0.\n"},
  {(char*)"GetSelectedComponentMinValue", PyvtkThreshold_GetSelectedComponentMinValue, METH_VARARGS,
   (char*)"V.GetSelectedComponentMinValue() -> int\nC++: int GetSelectedComponentMinValue()\n\nWhen the component mode is UseSelected, this ivar indicated the\nselected component. The default value is 0.\n"},
  {(char*)"GetSelectedComponentMaxValue", PyvtkThreshold_GetSelectedComponentMaxValue, METH_VARARGS,
   (char*)"V.GetSelectedComponentMaxValue() -> int\nC++: int GetSelectedComponentMaxValue()\n\nWhen the component mode is UseSelected, this ivar indicated the\nselected component. The default value is 0.\n"},
  {(char*)"GetSelectedComponent", PyvtkThreshold_GetSelectedComponent, METH_VARARGS,
   (char*)"V.GetSelectedComponent() -> int\nC++: int GetSelectedComponent()\n\nWhen the component mode is UseSelected, this ivar indicated the\nselected component. The default value is 0.\n"},
  {(char*)"SetAllScalars", PyvtkThreshold_SetAllScalars, METH_VARARGS,
   (char*)"V.SetAllScalars(int)\nC++: void SetAllScalars(int a)\n\nIf using scalars from point data, all scalars for all points in a\ncell must satisfy the threshold criterion if AllScalars is set.\nOtherwise, just a single scalar value satisfying the threshold\ncriterion enables will extract the cell.\n"},
  {(char*)"GetAllScalars", PyvtkThreshold_GetAllScalars, METH_VARARGS,
   (char*)"V.GetAllScalars() -> int\nC++: int GetAllScalars()\n\nIf using scalars from point data, all scalars for all points in a\ncell must satisfy the threshold criterion if AllScalars is set.\nOtherwise, just a single scalar value satisfying the threshold\ncriterion enables will extract the cell.\n"},
  {(char*)"AllScalarsOn", PyvtkThreshold_AllScalarsOn, METH_VARARGS,
   (char*)"V.AllScalarsOn()\nC++: void AllScalarsOn()\n\nIf using scalars from point data, all scalars for all points in a\ncell must satisfy the threshold criterion if AllScalars is set.\nOtherwise, just a single scalar value satisfying the threshold\ncriterion enables will extract the cell.\n"},
  {(char*)"AllScalarsOff", PyvtkThreshold_AllScalarsOff, METH_VARARGS,
   (char*)"V.AllScalarsOff()\nC++: void AllScalarsOff()\n\nIf using scalars from point data, all scalars for all points in a\ncell must satisfy the threshold criterion if AllScalars is set.\nOtherwise, just a single scalar value satisfying the threshold\ncriterion enables will extract the cell.\n"},
  {(char*)"SetUseContinuousCellRange", PyvtkThreshold_SetUseContinuousCellRange, METH_VARARGS,
   (char*)"V.SetUseContinuousCellRange(int)\nC++: void SetUseContinuousCellRange(int a)\n\nIf this is on (default is off), we will use the continuous\ninterval [minimum cell scalar, maxmimum cell scalar] to intersect\nthe threshold bound , rather than the set of discrete scalar\nvalues from the vertices\n*WARNING*: For higher order cells, the scalar range of the cell\n    is not the same as the vertex scalar interval used here, so\n    the result will not be accurate.\n"},
  {(char*)"GetUseContinuousCellRange", PyvtkThreshold_GetUseContinuousCellRange, METH_VARARGS,
   (char*)"V.GetUseContinuousCellRange() -> int\nC++: int GetUseContinuousCellRange()\n\nIf this is on (default is off), we will use the continuous\ninterval [minimum cell scalar, maxmimum cell scalar] to intersect\nthe threshold bound , rather than the set of discrete scalar\nvalues from the vertices\n*WARNING*: For higher order cells, the scalar range of the cell\n    is not the same as the vertex scalar interval used here, so\n    the result will not be accurate.\n"},
  {(char*)"UseContinuousCellRangeOn", PyvtkThreshold_UseContinuousCellRangeOn, METH_VARARGS,
   (char*)"V.UseContinuousCellRangeOn()\nC++: void UseContinuousCellRangeOn()\n\nIf this is on (default is off), we will use the continuous\ninterval [minimum cell scalar, maxmimum cell scalar] to intersect\nthe threshold bound , rather than the set of discrete scalar\nvalues from the vertices\n*WARNING*: For higher order cells, the scalar range of the cell\n    is not the same as the vertex scalar interval used here, so\n    the result will not be accurate.\n"},
  {(char*)"UseContinuousCellRangeOff", PyvtkThreshold_UseContinuousCellRangeOff, METH_VARARGS,
   (char*)"V.UseContinuousCellRangeOff()\nC++: void UseContinuousCellRangeOff()\n\nIf this is on (default is off), we will use the continuous\ninterval [minimum cell scalar, maxmimum cell scalar] to intersect\nthe threshold bound , rather than the set of discrete scalar\nvalues from the vertices\n*WARNING*: For higher order cells, the scalar range of the cell\n    is not the same as the vertex scalar interval used here, so\n    the result will not be accurate.\n"},
  {(char*)"SetPointsDataTypeToDouble", PyvtkThreshold_SetPointsDataTypeToDouble, METH_VARARGS,
   (char*)"V.SetPointsDataTypeToDouble()\nC++: void SetPointsDataTypeToDouble()\n\nSet the data type of the output points (See the data types\ndefined in vtkType.h). The default data type is float.\n\nThese methods are deprecated. Please use the\nSetOutputPointsPrecision() and GetOutputPointsPrecision() methods\ninstead.\n"},
  {(char*)"SetPointsDataTypeToFloat", PyvtkThreshold_SetPointsDataTypeToFloat, METH_VARARGS,
   (char*)"V.SetPointsDataTypeToFloat()\nC++: void SetPointsDataTypeToFloat()\n\nSet the data type of the output points (See the data types\ndefined in vtkType.h). The default data type is float.\n\nThese methods are deprecated. Please use the\nSetOutputPointsPrecision() and GetOutputPointsPrecision() methods\ninstead.\n"},
  {(char*)"SetPointsDataType", PyvtkThreshold_SetPointsDataType, METH_VARARGS,
   (char*)"V.SetPointsDataType(int)\nC++: void SetPointsDataType(int type)\n\nSet the data type of the output points (See the data types\ndefined in vtkType.h). The default data type is float.\n\nThese methods are deprecated. Please use the\nSetOutputPointsPrecision() and GetOutputPointsPrecision() methods\ninstead.\n"},
  {(char*)"GetPointsDataType", PyvtkThreshold_GetPointsDataType, METH_VARARGS,
   (char*)"V.GetPointsDataType() -> int\nC++: int GetPointsDataType()\n\nSet the data type of the output points (See the data types\ndefined in vtkType.h). The default data type is float.\n\nThese methods are deprecated. Please use the\nSetOutputPointsPrecision() and GetOutputPointsPrecision() methods\ninstead.\n"},
  {(char*)"SetOutputPointsPrecision", PyvtkThreshold_SetOutputPointsPrecision, METH_VARARGS,
   (char*)"V.SetOutputPointsPrecision(int)\nC++: void SetOutputPointsPrecision(int precision)\n\nSet/get the desired precision for the output types. See the\ndocumentation for the vtkAlgorithm::DesiredOutputPrecision enum\nfor an explanation of the available precision settings.\n"},
  {(char*)"GetOutputPointsPrecision", PyvtkThreshold_GetOutputPointsPrecision, METH_VARARGS,
   (char*)"V.GetOutputPointsPrecision() -> int\nC++: int GetOutputPointsPrecision()\n\nSet/get the desired precision for the output types. See the\ndocumentation for the vtkAlgorithm::DesiredOutputPrecision enum\nfor an explanation of the available precision settings.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkThreshold_StaticNew()
{
  return vtkThreshold::New();
}

PyObject *PyVTKClass_vtkThresholdNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkThreshold_StaticNew,
    PyvtkThreshold_Methods,
    "vtkThreshold", modulename,
    NULL, NULL,
    PyvtkThreshold_Doc(),
    PyVTKClass_vtkUnstructuredGridAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkThreshold_Doc()
{
  static const char *docstring[] = {
    "vtkThreshold - extracts cells where scalar value in cell satisfies\nthreshold criterion\n\n",
    "Superclass: vtkUnstructuredGridAlgorithm\n\n",
    "vtkThreshold is a filter that extracts cells from any dataset type\nthat satisfy a threshold criterion. A cell satisfies the criterion if\nthe scalar value of (every or any) point satisfies the criterion. The\ncriterion can take three forms: 1) greater than a particular value;\n2) less than a particular value; or 3) between two values. The output\nof this filter is an unstructured grid.\n\nNote that scal",
    "ar values are available from the point and cell\nattribute data.  By default, point data is used to obtain scalars,\nbut you can control this behavior. See the AttributeMode ivar below.\n\nBy default only the first scalar value is used in the decision. Use\nthe ComponentMode and SelectedComponent ivars to control this\nbehavior.\n\nSee Also:\n\nvtkThresholdPoints vtkThresholdTextureCoords\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkThreshold(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkThresholdNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkThreshold", o) != 0)
    {
    Py_DECREF(o);
    }

  for (int c = 0; c < 6; c++)
    {
    static const struct { const char *name; int value; }
      constants[6] = {
        { "VTK_ATTRIBUTE_MODE_DEFAULT", 0 },
        { "VTK_ATTRIBUTE_MODE_USE_POINT_DATA", 1 },
        { "VTK_ATTRIBUTE_MODE_USE_CELL_DATA", 2 },
        { "VTK_COMPONENT_MODE_USE_SELECTED", 0 },
        { "VTK_COMPONENT_MODE_USE_ALL", 1 },
        { "VTK_COMPONENT_MODE_USE_ANY", 2 },
      };

    o = PyInt_FromLong(constants[c].value);
    if (o)
      {
      PyDict_SetItemString(dict, (char *)constants[c].name, o);
      Py_DECREF(o);
      }
    }

}

