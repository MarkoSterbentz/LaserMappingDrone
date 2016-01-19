// python wrapper for vtkInteractorStyle
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkInteractorStyle.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkInteractorStyle(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkInteractorStyleNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkInteractorObserverNew
extern "C" { PyObject *PyVTKClass_vtkInteractorObserverNew(const char *); }
#define DECLARED_PyVTKClass_vtkInteractorObserverNew
#endif

static const char **PyvtkInteractorStyle_Doc();


static PyObject *
PyvtkInteractorStyle_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyle *op = static_cast<vtkInteractorStyle *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkInteractorStyle::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyle_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyle *op = static_cast<vtkInteractorStyle *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkInteractorStyle::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyle_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyle *op = static_cast<vtkInteractorStyle *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkInteractorStyle *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkInteractorStyle::NewInstance());

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
PyvtkInteractorStyle_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkInteractorStyle *tempr = vtkInteractorStyle::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyle_SetInteractor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInteractor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyle *op = static_cast<vtkInteractorStyle *>(vp);

  vtkRenderWindowInteractor *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkRenderWindowInteractor"))
    {
    if (ap.IsBound())
      {
      op->SetInteractor(temp0);
      }
    else
      {
      op->vtkInteractorStyle::SetInteractor(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyle_SetEnabled(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEnabled");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyle *op = static_cast<vtkInteractorStyle *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetEnabled(temp0);
      }
    else
      {
      op->vtkInteractorStyle::SetEnabled(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyle_SetAutoAdjustCameraClippingRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAutoAdjustCameraClippingRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyle *op = static_cast<vtkInteractorStyle *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetAutoAdjustCameraClippingRange(temp0);
      }
    else
      {
      op->vtkInteractorStyle::SetAutoAdjustCameraClippingRange(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyle_GetAutoAdjustCameraClippingRangeMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAutoAdjustCameraClippingRangeMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyle *op = static_cast<vtkInteractorStyle *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetAutoAdjustCameraClippingRangeMinValue() :
      op->vtkInteractorStyle::GetAutoAdjustCameraClippingRangeMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyle_GetAutoAdjustCameraClippingRangeMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAutoAdjustCameraClippingRangeMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyle *op = static_cast<vtkInteractorStyle *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetAutoAdjustCameraClippingRangeMaxValue() :
      op->vtkInteractorStyle::GetAutoAdjustCameraClippingRangeMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyle_GetAutoAdjustCameraClippingRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAutoAdjustCameraClippingRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyle *op = static_cast<vtkInteractorStyle *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetAutoAdjustCameraClippingRange() :
      op->vtkInteractorStyle::GetAutoAdjustCameraClippingRange());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyle_AutoAdjustCameraClippingRangeOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AutoAdjustCameraClippingRangeOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyle *op = static_cast<vtkInteractorStyle *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->AutoAdjustCameraClippingRangeOn();
      }
    else
      {
      op->vtkInteractorStyle::AutoAdjustCameraClippingRangeOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyle_AutoAdjustCameraClippingRangeOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AutoAdjustCameraClippingRangeOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyle *op = static_cast<vtkInteractorStyle *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->AutoAdjustCameraClippingRangeOff();
      }
    else
      {
      op->vtkInteractorStyle::AutoAdjustCameraClippingRangeOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyle_FindPokedRenderer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FindPokedRenderer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyle *op = static_cast<vtkInteractorStyle *>(vp);

  int temp0;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->FindPokedRenderer(temp0, temp1);
      }
    else
      {
      op->vtkInteractorStyle::FindPokedRenderer(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyle_GetState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyle *op = static_cast<vtkInteractorStyle *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetState() :
      op->vtkInteractorStyle::GetState());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyle_GetUseTimers(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseTimers");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyle *op = static_cast<vtkInteractorStyle *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetUseTimers() :
      op->vtkInteractorStyle::GetUseTimers());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyle_SetUseTimers(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseTimers");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyle *op = static_cast<vtkInteractorStyle *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetUseTimers(temp0);
      }
    else
      {
      op->vtkInteractorStyle::SetUseTimers(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyle_UseTimersOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseTimersOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyle *op = static_cast<vtkInteractorStyle *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->UseTimersOn();
      }
    else
      {
      op->vtkInteractorStyle::UseTimersOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyle_UseTimersOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseTimersOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyle *op = static_cast<vtkInteractorStyle *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->UseTimersOff();
      }
    else
      {
      op->vtkInteractorStyle::UseTimersOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyle_SetTimerDuration(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTimerDuration");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyle *op = static_cast<vtkInteractorStyle *>(vp);

  unsigned long temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetTimerDuration(temp0);
      }
    else
      {
      op->vtkInteractorStyle::SetTimerDuration(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyle_GetTimerDurationMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTimerDurationMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyle *op = static_cast<vtkInteractorStyle *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned long tempr = (ap.IsBound() ?
      op->GetTimerDurationMinValue() :
      op->vtkInteractorStyle::GetTimerDurationMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyle_GetTimerDurationMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTimerDurationMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyle *op = static_cast<vtkInteractorStyle *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned long tempr = (ap.IsBound() ?
      op->GetTimerDurationMaxValue() :
      op->vtkInteractorStyle::GetTimerDurationMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyle_GetTimerDuration(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTimerDuration");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyle *op = static_cast<vtkInteractorStyle *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned long tempr = (ap.IsBound() ?
      op->GetTimerDuration() :
      op->vtkInteractorStyle::GetTimerDuration());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyle_SetHandleObservers(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHandleObservers");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyle *op = static_cast<vtkInteractorStyle *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetHandleObservers(temp0);
      }
    else
      {
      op->vtkInteractorStyle::SetHandleObservers(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyle_GetHandleObservers(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHandleObservers");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyle *op = static_cast<vtkInteractorStyle *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetHandleObservers() :
      op->vtkInteractorStyle::GetHandleObservers());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyle_HandleObserversOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HandleObserversOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyle *op = static_cast<vtkInteractorStyle *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->HandleObserversOn();
      }
    else
      {
      op->vtkInteractorStyle::HandleObserversOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyle_HandleObserversOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HandleObserversOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyle *op = static_cast<vtkInteractorStyle *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->HandleObserversOff();
      }
    else
      {
      op->vtkInteractorStyle::HandleObserversOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyle_OnMouseMove(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnMouseMove");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyle *op = static_cast<vtkInteractorStyle *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->OnMouseMove();
      }
    else
      {
      op->vtkInteractorStyle::OnMouseMove();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyle_OnLeftButtonDown(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnLeftButtonDown");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyle *op = static_cast<vtkInteractorStyle *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->OnLeftButtonDown();
      }
    else
      {
      op->vtkInteractorStyle::OnLeftButtonDown();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyle_OnLeftButtonUp(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnLeftButtonUp");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyle *op = static_cast<vtkInteractorStyle *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->OnLeftButtonUp();
      }
    else
      {
      op->vtkInteractorStyle::OnLeftButtonUp();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyle_OnMiddleButtonDown(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnMiddleButtonDown");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyle *op = static_cast<vtkInteractorStyle *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->OnMiddleButtonDown();
      }
    else
      {
      op->vtkInteractorStyle::OnMiddleButtonDown();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyle_OnMiddleButtonUp(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnMiddleButtonUp");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyle *op = static_cast<vtkInteractorStyle *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->OnMiddleButtonUp();
      }
    else
      {
      op->vtkInteractorStyle::OnMiddleButtonUp();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyle_OnRightButtonDown(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnRightButtonDown");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyle *op = static_cast<vtkInteractorStyle *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->OnRightButtonDown();
      }
    else
      {
      op->vtkInteractorStyle::OnRightButtonDown();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyle_OnRightButtonUp(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnRightButtonUp");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyle *op = static_cast<vtkInteractorStyle *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->OnRightButtonUp();
      }
    else
      {
      op->vtkInteractorStyle::OnRightButtonUp();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyle_OnMouseWheelForward(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnMouseWheelForward");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyle *op = static_cast<vtkInteractorStyle *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->OnMouseWheelForward();
      }
    else
      {
      op->vtkInteractorStyle::OnMouseWheelForward();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyle_OnMouseWheelBackward(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnMouseWheelBackward");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyle *op = static_cast<vtkInteractorStyle *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->OnMouseWheelBackward();
      }
    else
      {
      op->vtkInteractorStyle::OnMouseWheelBackward();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyle_OnChar(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnChar");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyle *op = static_cast<vtkInteractorStyle *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->OnChar();
      }
    else
      {
      op->vtkInteractorStyle::OnChar();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyle_OnKeyDown(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnKeyDown");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyle *op = static_cast<vtkInteractorStyle *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->OnKeyDown();
      }
    else
      {
      op->vtkInteractorStyle::OnKeyDown();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyle_OnKeyUp(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnKeyUp");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyle *op = static_cast<vtkInteractorStyle *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->OnKeyUp();
      }
    else
      {
      op->vtkInteractorStyle::OnKeyUp();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyle_OnKeyPress(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnKeyPress");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyle *op = static_cast<vtkInteractorStyle *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->OnKeyPress();
      }
    else
      {
      op->vtkInteractorStyle::OnKeyPress();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyle_OnKeyRelease(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnKeyRelease");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyle *op = static_cast<vtkInteractorStyle *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->OnKeyRelease();
      }
    else
      {
      op->vtkInteractorStyle::OnKeyRelease();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyle_OnExpose(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnExpose");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyle *op = static_cast<vtkInteractorStyle *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->OnExpose();
      }
    else
      {
      op->vtkInteractorStyle::OnExpose();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyle_OnConfigure(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnConfigure");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyle *op = static_cast<vtkInteractorStyle *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->OnConfigure();
      }
    else
      {
      op->vtkInteractorStyle::OnConfigure();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyle_OnEnter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnEnter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyle *op = static_cast<vtkInteractorStyle *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->OnEnter();
      }
    else
      {
      op->vtkInteractorStyle::OnEnter();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyle_OnLeave(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnLeave");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyle *op = static_cast<vtkInteractorStyle *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->OnLeave();
      }
    else
      {
      op->vtkInteractorStyle::OnLeave();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyle_OnTimer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnTimer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyle *op = static_cast<vtkInteractorStyle *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->OnTimer();
      }
    else
      {
      op->vtkInteractorStyle::OnTimer();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyle_Rotate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Rotate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyle *op = static_cast<vtkInteractorStyle *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Rotate();
      }
    else
      {
      op->vtkInteractorStyle::Rotate();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyle_Spin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Spin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyle *op = static_cast<vtkInteractorStyle *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Spin();
      }
    else
      {
      op->vtkInteractorStyle::Spin();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyle_Pan(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Pan");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyle *op = static_cast<vtkInteractorStyle *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Pan();
      }
    else
      {
      op->vtkInteractorStyle::Pan();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyle_Dolly(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Dolly");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyle *op = static_cast<vtkInteractorStyle *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Dolly();
      }
    else
      {
      op->vtkInteractorStyle::Dolly();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyle_Zoom(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Zoom");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyle *op = static_cast<vtkInteractorStyle *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Zoom();
      }
    else
      {
      op->vtkInteractorStyle::Zoom();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyle_UniformScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UniformScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyle *op = static_cast<vtkInteractorStyle *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->UniformScale();
      }
    else
      {
      op->vtkInteractorStyle::UniformScale();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyle_StartState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StartState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyle *op = static_cast<vtkInteractorStyle *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->StartState(temp0);
      }
    else
      {
      op->vtkInteractorStyle::StartState(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyle_StopState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StopState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyle *op = static_cast<vtkInteractorStyle *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->StopState();
      }
    else
      {
      op->vtkInteractorStyle::StopState();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyle_StartAnimate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StartAnimate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyle *op = static_cast<vtkInteractorStyle *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->StartAnimate();
      }
    else
      {
      op->vtkInteractorStyle::StartAnimate();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyle_StopAnimate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StopAnimate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyle *op = static_cast<vtkInteractorStyle *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->StopAnimate();
      }
    else
      {
      op->vtkInteractorStyle::StopAnimate();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyle_StartRotate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StartRotate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyle *op = static_cast<vtkInteractorStyle *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->StartRotate();
      }
    else
      {
      op->vtkInteractorStyle::StartRotate();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyle_EndRotate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EndRotate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyle *op = static_cast<vtkInteractorStyle *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->EndRotate();
      }
    else
      {
      op->vtkInteractorStyle::EndRotate();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyle_StartZoom(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StartZoom");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyle *op = static_cast<vtkInteractorStyle *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->StartZoom();
      }
    else
      {
      op->vtkInteractorStyle::StartZoom();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyle_EndZoom(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EndZoom");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyle *op = static_cast<vtkInteractorStyle *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->EndZoom();
      }
    else
      {
      op->vtkInteractorStyle::EndZoom();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyle_StartPan(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StartPan");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyle *op = static_cast<vtkInteractorStyle *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->StartPan();
      }
    else
      {
      op->vtkInteractorStyle::StartPan();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyle_EndPan(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EndPan");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyle *op = static_cast<vtkInteractorStyle *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->EndPan();
      }
    else
      {
      op->vtkInteractorStyle::EndPan();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyle_StartSpin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StartSpin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyle *op = static_cast<vtkInteractorStyle *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->StartSpin();
      }
    else
      {
      op->vtkInteractorStyle::StartSpin();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyle_EndSpin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EndSpin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyle *op = static_cast<vtkInteractorStyle *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->EndSpin();
      }
    else
      {
      op->vtkInteractorStyle::EndSpin();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyle_StartDolly(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StartDolly");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyle *op = static_cast<vtkInteractorStyle *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->StartDolly();
      }
    else
      {
      op->vtkInteractorStyle::StartDolly();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyle_EndDolly(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EndDolly");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyle *op = static_cast<vtkInteractorStyle *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->EndDolly();
      }
    else
      {
      op->vtkInteractorStyle::EndDolly();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyle_StartUniformScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StartUniformScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyle *op = static_cast<vtkInteractorStyle *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->StartUniformScale();
      }
    else
      {
      op->vtkInteractorStyle::StartUniformScale();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyle_EndUniformScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EndUniformScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyle *op = static_cast<vtkInteractorStyle *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->EndUniformScale();
      }
    else
      {
      op->vtkInteractorStyle::EndUniformScale();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyle_StartTimer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StartTimer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyle *op = static_cast<vtkInteractorStyle *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->StartTimer();
      }
    else
      {
      op->vtkInteractorStyle::StartTimer();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyle_EndTimer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EndTimer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyle *op = static_cast<vtkInteractorStyle *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->EndTimer();
      }
    else
      {
      op->vtkInteractorStyle::EndTimer();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyle_StartTwoPointer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StartTwoPointer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyle *op = static_cast<vtkInteractorStyle *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->StartTwoPointer();
      }
    else
      {
      op->vtkInteractorStyle::StartTwoPointer();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyle_EndTwoPointer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EndTwoPointer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyle *op = static_cast<vtkInteractorStyle *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->EndTwoPointer();
      }
    else
      {
      op->vtkInteractorStyle::EndTwoPointer();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyle_HighlightProp(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HighlightProp");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyle *op = static_cast<vtkInteractorStyle *>(vp);

  vtkProp *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkProp"))
    {
    if (ap.IsBound())
      {
      op->HighlightProp(temp0);
      }
    else
      {
      op->vtkInteractorStyle::HighlightProp(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyle_HighlightActor2D(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HighlightActor2D");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyle *op = static_cast<vtkInteractorStyle *>(vp);

  vtkActor2D *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkActor2D"))
    {
    if (ap.IsBound())
      {
      op->HighlightActor2D(temp0);
      }
    else
      {
      op->vtkInteractorStyle::HighlightActor2D(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyle_HighlightProp3D(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HighlightProp3D");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyle *op = static_cast<vtkInteractorStyle *>(vp);

  vtkProp3D *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkProp3D"))
    {
    if (ap.IsBound())
      {
      op->HighlightProp3D(temp0);
      }
    else
      {
      op->vtkInteractorStyle::HighlightProp3D(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyle_SetPickColor_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPickColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyle *op = static_cast<vtkInteractorStyle *>(vp);

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
      op->SetPickColor(temp0, temp1, temp2);
      }
    else
      {
      op->vtkInteractorStyle::SetPickColor(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkInteractorStyle_SetPickColor_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPickColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyle *op = static_cast<vtkInteractorStyle *>(vp);

  double temp0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetPickColor(temp0);
      }
    else
      {
      op->vtkInteractorStyle::SetPickColor(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkInteractorStyle_SetPickColor(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkInteractorStyle_SetPickColor_s1(self, args);
    case 1:
      return PyvtkInteractorStyle_SetPickColor_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetPickColor");
  return NULL;
}



static PyObject *
PyvtkInteractorStyle_GetPickColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPickColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyle *op = static_cast<vtkInteractorStyle *>(vp);

  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetPickColor() :
      op->vtkInteractorStyle::GetPickColor());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyle_SetMouseWheelMotionFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMouseWheelMotionFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyle *op = static_cast<vtkInteractorStyle *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetMouseWheelMotionFactor(temp0);
      }
    else
      {
      op->vtkInteractorStyle::SetMouseWheelMotionFactor(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyle_GetMouseWheelMotionFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMouseWheelMotionFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyle *op = static_cast<vtkInteractorStyle *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetMouseWheelMotionFactor() :
      op->vtkInteractorStyle::GetMouseWheelMotionFactor());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyle_GetTDxStyle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTDxStyle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyle *op = static_cast<vtkInteractorStyle *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkTDxInteractorStyle *tempr = (ap.IsBound() ?
      op->GetTDxStyle() :
      op->vtkInteractorStyle::GetTDxStyle());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyle_SetTDxStyle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTDxStyle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyle *op = static_cast<vtkInteractorStyle *>(vp);

  vtkTDxInteractorStyle *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkTDxInteractorStyle"))
    {
    if (ap.IsBound())
      {
      op->SetTDxStyle(temp0);
      }
    else
      {
      op->vtkInteractorStyle::SetTDxStyle(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyle_DelegateTDxEvent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DelegateTDxEvent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyle *op = static_cast<vtkInteractorStyle *>(vp);

  unsigned long temp0;
  void  *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->DelegateTDxEvent(temp0, temp1);
      }
    else
      {
      op->vtkInteractorStyle::DelegateTDxEvent(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkInteractorStyle_Methods[] = {
  {(char*)"GetClassName", PyvtkInteractorStyle_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkInteractorStyle_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkInteractorStyle_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkInteractorStyle\nC++: vtkInteractorStyle *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkInteractorStyle_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkInteractorStyle\nC++: vtkInteractorStyle *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetInteractor", PyvtkInteractorStyle_SetInteractor, METH_VARARGS,
   (char*)"V.SetInteractor(vtkRenderWindowInteractor)\nC++: virtual void SetInteractor(\n    vtkRenderWindowInteractor *interactor)\n\nSet/Get the Interactor wrapper being controlled by this object.\n(Satisfy superclass API.)\n"},
  {(char*)"SetEnabled", PyvtkInteractorStyle_SetEnabled, METH_VARARGS,
   (char*)"V.SetEnabled(int)\nC++: virtual void SetEnabled(int)\n\nTurn on/off this interactor. Interactor styles operate a little\nbit differently than other types of interactor observers. When\nthe SetInteractor() method is invoked, the automatically enable\nthemselves. This is a legacy requirement, and convenient for the\nuser.\n"},
  {(char*)"SetAutoAdjustCameraClippingRange", PyvtkInteractorStyle_SetAutoAdjustCameraClippingRange, METH_VARARGS,
   (char*)"V.SetAutoAdjustCameraClippingRange(int)\nC++: void SetAutoAdjustCameraClippingRange(int)\n\nIf AutoAdjustCameraClippingRange is on, then before each render\nthe camera clipping range will be adjusted to \"fit\" the whole\nscene. Clipping will still occur if objects in the scene are\nbehind the camera or come very close. If\nAutoAdjustCameraClippingRange is off, no adjustment will be made\nper render, but the camera clipping range will still be reset\nwhen the camera is reset.\n"},
  {(char*)"GetAutoAdjustCameraClippingRangeMinValue", PyvtkInteractorStyle_GetAutoAdjustCameraClippingRangeMinValue, METH_VARARGS,
   (char*)"V.GetAutoAdjustCameraClippingRangeMinValue() -> int\nC++: int GetAutoAdjustCameraClippingRangeMinValue()\n\nIf AutoAdjustCameraClippingRange is on, then before each render\nthe camera clipping range will be adjusted to \"fit\" the whole\nscene. Clipping will still occur if objects in the scene are\nbehind the camera or come very close. If\nAutoAdjustCameraClippingRange is off, no adjustment will be made\nper render, but the camera clipping range will still be reset\nwhen the camera is reset.\n"},
  {(char*)"GetAutoAdjustCameraClippingRangeMaxValue", PyvtkInteractorStyle_GetAutoAdjustCameraClippingRangeMaxValue, METH_VARARGS,
   (char*)"V.GetAutoAdjustCameraClippingRangeMaxValue() -> int\nC++: int GetAutoAdjustCameraClippingRangeMaxValue()\n\nIf AutoAdjustCameraClippingRange is on, then before each render\nthe camera clipping range will be adjusted to \"fit\" the whole\nscene. Clipping will still occur if objects in the scene are\nbehind the camera or come very close. If\nAutoAdjustCameraClippingRange is off, no adjustment will be made\nper render, but the camera clipping range will still be reset\nwhen the camera is reset.\n"},
  {(char*)"GetAutoAdjustCameraClippingRange", PyvtkInteractorStyle_GetAutoAdjustCameraClippingRange, METH_VARARGS,
   (char*)"V.GetAutoAdjustCameraClippingRange() -> int\nC++: int GetAutoAdjustCameraClippingRange()\n\nIf AutoAdjustCameraClippingRange is on, then before each render\nthe camera clipping range will be adjusted to \"fit\" the whole\nscene. Clipping will still occur if objects in the scene are\nbehind the camera or come very close. If\nAutoAdjustCameraClippingRange is off, no adjustment will be made\nper render, but the camera clipping range will still be reset\nwhen the camera is reset.\n"},
  {(char*)"AutoAdjustCameraClippingRangeOn", PyvtkInteractorStyle_AutoAdjustCameraClippingRangeOn, METH_VARARGS,
   (char*)"V.AutoAdjustCameraClippingRangeOn()\nC++: void AutoAdjustCameraClippingRangeOn()\n\nIf AutoAdjustCameraClippingRange is on, then before each render\nthe camera clipping range will be adjusted to \"fit\" the whole\nscene. Clipping will still occur if objects in the scene are\nbehind the camera or come very close. If\nAutoAdjustCameraClippingRange is off, no adjustment will be made\nper render, but the camera clipping range will still be reset\nwhen the camera is reset.\n"},
  {(char*)"AutoAdjustCameraClippingRangeOff", PyvtkInteractorStyle_AutoAdjustCameraClippingRangeOff, METH_VARARGS,
   (char*)"V.AutoAdjustCameraClippingRangeOff()\nC++: void AutoAdjustCameraClippingRangeOff()\n\nIf AutoAdjustCameraClippingRange is on, then before each render\nthe camera clipping range will be adjusted to \"fit\" the whole\nscene. Clipping will still occur if objects in the scene are\nbehind the camera or come very close. If\nAutoAdjustCameraClippingRange is off, no adjustment will be made\nper render, but the camera clipping range will still be reset\nwhen the camera is reset.\n"},
  {(char*)"FindPokedRenderer", PyvtkInteractorStyle_FindPokedRenderer, METH_VARARGS,
   (char*)"V.FindPokedRenderer(int, int)\nC++: void FindPokedRenderer(int, int)\n\nWhen an event occurs, we must determine which Renderer the event\noccurred within, since one RenderWindow may contain multiple\nrenderers.\n"},
  {(char*)"GetState", PyvtkInteractorStyle_GetState, METH_VARARGS,
   (char*)"V.GetState() -> int\nC++: int GetState()\n\nSome useful information for interaction\n"},
  {(char*)"GetUseTimers", PyvtkInteractorStyle_GetUseTimers, METH_VARARGS,
   (char*)"V.GetUseTimers() -> int\nC++: int GetUseTimers()\n\nSet/Get timer hint\n"},
  {(char*)"SetUseTimers", PyvtkInteractorStyle_SetUseTimers, METH_VARARGS,
   (char*)"V.SetUseTimers(int)\nC++: void SetUseTimers(int a)\n\nSet/Get timer hint\n"},
  {(char*)"UseTimersOn", PyvtkInteractorStyle_UseTimersOn, METH_VARARGS,
   (char*)"V.UseTimersOn()\nC++: void UseTimersOn()\n\nSet/Get timer hint\n"},
  {(char*)"UseTimersOff", PyvtkInteractorStyle_UseTimersOff, METH_VARARGS,
   (char*)"V.UseTimersOff()\nC++: void UseTimersOff()\n\nSet/Get timer hint\n"},
  {(char*)"SetTimerDuration", PyvtkInteractorStyle_SetTimerDuration, METH_VARARGS,
   (char*)"V.SetTimerDuration(int)\nC++: void SetTimerDuration(unsigned long)\n\nIf using timers, specify the default timer interval (in\nmilliseconds). Care must be taken when adjusting the timer\ninterval from the default value of 10 milliseconds--it may\nadversely affect the interactors.\n"},
  {(char*)"GetTimerDurationMinValue", PyvtkInteractorStyle_GetTimerDurationMinValue, METH_VARARGS,
   (char*)"V.GetTimerDurationMinValue() -> int\nC++: unsigned long GetTimerDurationMinValue()\n\nIf using timers, specify the default timer interval (in\nmilliseconds). Care must be taken when adjusting the timer\ninterval from the default value of 10 milliseconds--it may\nadversely affect the interactors.\n"},
  {(char*)"GetTimerDurationMaxValue", PyvtkInteractorStyle_GetTimerDurationMaxValue, METH_VARARGS,
   (char*)"V.GetTimerDurationMaxValue() -> int\nC++: unsigned long GetTimerDurationMaxValue()\n\nIf using timers, specify the default timer interval (in\nmilliseconds). Care must be taken when adjusting the timer\ninterval from the default value of 10 milliseconds--it may\nadversely affect the interactors.\n"},
  {(char*)"GetTimerDuration", PyvtkInteractorStyle_GetTimerDuration, METH_VARARGS,
   (char*)"V.GetTimerDuration() -> int\nC++: unsigned long GetTimerDuration()\n\nIf using timers, specify the default timer interval (in\nmilliseconds). Care must be taken when adjusting the timer\ninterval from the default value of 10 milliseconds--it may\nadversely affect the interactors.\n"},
  {(char*)"SetHandleObservers", PyvtkInteractorStyle_SetHandleObservers, METH_VARARGS,
   (char*)"V.SetHandleObservers(int)\nC++: void SetHandleObservers(int a)\n\nDoes ProcessEvents handle observers on this class or not\n"},
  {(char*)"GetHandleObservers", PyvtkInteractorStyle_GetHandleObservers, METH_VARARGS,
   (char*)"V.GetHandleObservers() -> int\nC++: int GetHandleObservers()\n\nDoes ProcessEvents handle observers on this class or not\n"},
  {(char*)"HandleObserversOn", PyvtkInteractorStyle_HandleObserversOn, METH_VARARGS,
   (char*)"V.HandleObserversOn()\nC++: void HandleObserversOn()\n\nDoes ProcessEvents handle observers on this class or not\n"},
  {(char*)"HandleObserversOff", PyvtkInteractorStyle_HandleObserversOff, METH_VARARGS,
   (char*)"V.HandleObserversOff()\nC++: void HandleObserversOff()\n\nDoes ProcessEvents handle observers on this class or not\n"},
  {(char*)"OnMouseMove", PyvtkInteractorStyle_OnMouseMove, METH_VARARGS,
   (char*)"V.OnMouseMove()\nC++: virtual void OnMouseMove()\n\nGeneric event bindings can be overridden in subclasses\n"},
  {(char*)"OnLeftButtonDown", PyvtkInteractorStyle_OnLeftButtonDown, METH_VARARGS,
   (char*)"V.OnLeftButtonDown()\nC++: virtual void OnLeftButtonDown()\n\nGeneric event bindings can be overridden in subclasses\n"},
  {(char*)"OnLeftButtonUp", PyvtkInteractorStyle_OnLeftButtonUp, METH_VARARGS,
   (char*)"V.OnLeftButtonUp()\nC++: virtual void OnLeftButtonUp()\n\nGeneric event bindings can be overridden in subclasses\n"},
  {(char*)"OnMiddleButtonDown", PyvtkInteractorStyle_OnMiddleButtonDown, METH_VARARGS,
   (char*)"V.OnMiddleButtonDown()\nC++: virtual void OnMiddleButtonDown()\n\nGeneric event bindings can be overridden in subclasses\n"},
  {(char*)"OnMiddleButtonUp", PyvtkInteractorStyle_OnMiddleButtonUp, METH_VARARGS,
   (char*)"V.OnMiddleButtonUp()\nC++: virtual void OnMiddleButtonUp()\n\nGeneric event bindings can be overridden in subclasses\n"},
  {(char*)"OnRightButtonDown", PyvtkInteractorStyle_OnRightButtonDown, METH_VARARGS,
   (char*)"V.OnRightButtonDown()\nC++: virtual void OnRightButtonDown()\n\nGeneric event bindings can be overridden in subclasses\n"},
  {(char*)"OnRightButtonUp", PyvtkInteractorStyle_OnRightButtonUp, METH_VARARGS,
   (char*)"V.OnRightButtonUp()\nC++: virtual void OnRightButtonUp()\n\nGeneric event bindings can be overridden in subclasses\n"},
  {(char*)"OnMouseWheelForward", PyvtkInteractorStyle_OnMouseWheelForward, METH_VARARGS,
   (char*)"V.OnMouseWheelForward()\nC++: virtual void OnMouseWheelForward()\n\nGeneric event bindings can be overridden in subclasses\n"},
  {(char*)"OnMouseWheelBackward", PyvtkInteractorStyle_OnMouseWheelBackward, METH_VARARGS,
   (char*)"V.OnMouseWheelBackward()\nC++: virtual void OnMouseWheelBackward()\n\nGeneric event bindings can be overridden in subclasses\n"},
  {(char*)"OnChar", PyvtkInteractorStyle_OnChar, METH_VARARGS,
   (char*)"V.OnChar()\nC++: virtual void OnChar()\n\nOnChar is triggered when an ASCII key is pressed. Some basic key\npresses are handled here ('q' for Quit, 'p' for Pick, etc)\n"},
  {(char*)"OnKeyDown", PyvtkInteractorStyle_OnKeyDown, METH_VARARGS,
   (char*)"V.OnKeyDown()\nC++: virtual void OnKeyDown()\n\n"},
  {(char*)"OnKeyUp", PyvtkInteractorStyle_OnKeyUp, METH_VARARGS,
   (char*)"V.OnKeyUp()\nC++: virtual void OnKeyUp()\n\n"},
  {(char*)"OnKeyPress", PyvtkInteractorStyle_OnKeyPress, METH_VARARGS,
   (char*)"V.OnKeyPress()\nC++: virtual void OnKeyPress()\n\n"},
  {(char*)"OnKeyRelease", PyvtkInteractorStyle_OnKeyRelease, METH_VARARGS,
   (char*)"V.OnKeyRelease()\nC++: virtual void OnKeyRelease()\n\n"},
  {(char*)"OnExpose", PyvtkInteractorStyle_OnExpose, METH_VARARGS,
   (char*)"V.OnExpose()\nC++: virtual void OnExpose()\n\nThese are more esoteric events, but are useful in some cases.\n"},
  {(char*)"OnConfigure", PyvtkInteractorStyle_OnConfigure, METH_VARARGS,
   (char*)"V.OnConfigure()\nC++: virtual void OnConfigure()\n\nThese are more esoteric events, but are useful in some cases.\n"},
  {(char*)"OnEnter", PyvtkInteractorStyle_OnEnter, METH_VARARGS,
   (char*)"V.OnEnter()\nC++: virtual void OnEnter()\n\nThese are more esoteric events, but are useful in some cases.\n"},
  {(char*)"OnLeave", PyvtkInteractorStyle_OnLeave, METH_VARARGS,
   (char*)"V.OnLeave()\nC++: virtual void OnLeave()\n\nThese are more esoteric events, but are useful in some cases.\n"},
  {(char*)"OnTimer", PyvtkInteractorStyle_OnTimer, METH_VARARGS,
   (char*)"V.OnTimer()\nC++: virtual void OnTimer()\n\nOnTimer calls Rotate, Rotate etc which should be overridden by\nstyle subclasses.\n"},
  {(char*)"Rotate", PyvtkInteractorStyle_Rotate, METH_VARARGS,
   (char*)"V.Rotate()\nC++: virtual void Rotate()\n\nThese methods for the different interactions in different modes\nare overridden in subclasses to perform the correct motion. Since\nthey might be called from OnTimer, they do not have mouse coord\nparameters (use interactor's GetEventPosition and\nGetLastEventPosition)\n"},
  {(char*)"Spin", PyvtkInteractorStyle_Spin, METH_VARARGS,
   (char*)"V.Spin()\nC++: virtual void Spin()\n\nThese methods for the different interactions in different modes\nare overridden in subclasses to perform the correct motion. Since\nthey might be called from OnTimer, they do not have mouse coord\nparameters (use interactor's GetEventPosition and\nGetLastEventPosition)\n"},
  {(char*)"Pan", PyvtkInteractorStyle_Pan, METH_VARARGS,
   (char*)"V.Pan()\nC++: virtual void Pan()\n\nThese methods for the different interactions in different modes\nare overridden in subclasses to perform the correct motion. Since\nthey might be called from OnTimer, they do not have mouse coord\nparameters (use interactor's GetEventPosition and\nGetLastEventPosition)\n"},
  {(char*)"Dolly", PyvtkInteractorStyle_Dolly, METH_VARARGS,
   (char*)"V.Dolly()\nC++: virtual void Dolly()\n\nThese methods for the different interactions in different modes\nare overridden in subclasses to perform the correct motion. Since\nthey might be called from OnTimer, they do not have mouse coord\nparameters (use interactor's GetEventPosition and\nGetLastEventPosition)\n"},
  {(char*)"Zoom", PyvtkInteractorStyle_Zoom, METH_VARARGS,
   (char*)"V.Zoom()\nC++: virtual void Zoom()\n\nThese methods for the different interactions in different modes\nare overridden in subclasses to perform the correct motion. Since\nthey might be called from OnTimer, they do not have mouse coord\nparameters (use interactor's GetEventPosition and\nGetLastEventPosition)\n"},
  {(char*)"UniformScale", PyvtkInteractorStyle_UniformScale, METH_VARARGS,
   (char*)"V.UniformScale()\nC++: virtual void UniformScale()\n\nThese methods for the different interactions in different modes\nare overridden in subclasses to perform the correct motion. Since\nthey might be called from OnTimer, they do not have mouse coord\nparameters (use interactor's GetEventPosition and\nGetLastEventPosition)\n"},
  {(char*)"StartState", PyvtkInteractorStyle_StartState, METH_VARARGS,
   (char*)"V.StartState(int)\nC++: virtual void StartState(int newstate)\n\nutility routines used by state changes\n"},
  {(char*)"StopState", PyvtkInteractorStyle_StopState, METH_VARARGS,
   (char*)"V.StopState()\nC++: virtual void StopState()\n\nutility routines used by state changes\n"},
  {(char*)"StartAnimate", PyvtkInteractorStyle_StartAnimate, METH_VARARGS,
   (char*)"V.StartAnimate()\nC++: virtual void StartAnimate()\n\nInteraction mode entry points used internally.\n"},
  {(char*)"StopAnimate", PyvtkInteractorStyle_StopAnimate, METH_VARARGS,
   (char*)"V.StopAnimate()\nC++: virtual void StopAnimate()\n\nInteraction mode entry points used internally.\n"},
  {(char*)"StartRotate", PyvtkInteractorStyle_StartRotate, METH_VARARGS,
   (char*)"V.StartRotate()\nC++: virtual void StartRotate()\n\nInteraction mode entry points used internally.\n"},
  {(char*)"EndRotate", PyvtkInteractorStyle_EndRotate, METH_VARARGS,
   (char*)"V.EndRotate()\nC++: virtual void EndRotate()\n\nInteraction mode entry points used internally.\n"},
  {(char*)"StartZoom", PyvtkInteractorStyle_StartZoom, METH_VARARGS,
   (char*)"V.StartZoom()\nC++: virtual void StartZoom()\n\nInteraction mode entry points used internally.\n"},
  {(char*)"EndZoom", PyvtkInteractorStyle_EndZoom, METH_VARARGS,
   (char*)"V.EndZoom()\nC++: virtual void EndZoom()\n\nInteraction mode entry points used internally.\n"},
  {(char*)"StartPan", PyvtkInteractorStyle_StartPan, METH_VARARGS,
   (char*)"V.StartPan()\nC++: virtual void StartPan()\n\nInteraction mode entry points used internally.\n"},
  {(char*)"EndPan", PyvtkInteractorStyle_EndPan, METH_VARARGS,
   (char*)"V.EndPan()\nC++: virtual void EndPan()\n\nInteraction mode entry points used internally.\n"},
  {(char*)"StartSpin", PyvtkInteractorStyle_StartSpin, METH_VARARGS,
   (char*)"V.StartSpin()\nC++: virtual void StartSpin()\n\nInteraction mode entry points used internally.\n"},
  {(char*)"EndSpin", PyvtkInteractorStyle_EndSpin, METH_VARARGS,
   (char*)"V.EndSpin()\nC++: virtual void EndSpin()\n\nInteraction mode entry points used internally.\n"},
  {(char*)"StartDolly", PyvtkInteractorStyle_StartDolly, METH_VARARGS,
   (char*)"V.StartDolly()\nC++: virtual void StartDolly()\n\nInteraction mode entry points used internally.\n"},
  {(char*)"EndDolly", PyvtkInteractorStyle_EndDolly, METH_VARARGS,
   (char*)"V.EndDolly()\nC++: virtual void EndDolly()\n\nInteraction mode entry points used internally.\n"},
  {(char*)"StartUniformScale", PyvtkInteractorStyle_StartUniformScale, METH_VARARGS,
   (char*)"V.StartUniformScale()\nC++: virtual void StartUniformScale()\n\nInteraction mode entry points used internally.\n"},
  {(char*)"EndUniformScale", PyvtkInteractorStyle_EndUniformScale, METH_VARARGS,
   (char*)"V.EndUniformScale()\nC++: virtual void EndUniformScale()\n\nInteraction mode entry points used internally.\n"},
  {(char*)"StartTimer", PyvtkInteractorStyle_StartTimer, METH_VARARGS,
   (char*)"V.StartTimer()\nC++: virtual void StartTimer()\n\nInteraction mode entry points used internally.\n"},
  {(char*)"EndTimer", PyvtkInteractorStyle_EndTimer, METH_VARARGS,
   (char*)"V.EndTimer()\nC++: virtual void EndTimer()\n\nInteraction mode entry points used internally.\n"},
  {(char*)"StartTwoPointer", PyvtkInteractorStyle_StartTwoPointer, METH_VARARGS,
   (char*)"V.StartTwoPointer()\nC++: virtual void StartTwoPointer()\n\nInteraction mode entry points used internally.\n"},
  {(char*)"EndTwoPointer", PyvtkInteractorStyle_EndTwoPointer, METH_VARARGS,
   (char*)"V.EndTwoPointer()\nC++: virtual void EndTwoPointer()\n\nInteraction mode entry points used internally.\n"},
  {(char*)"HighlightProp", PyvtkInteractorStyle_HighlightProp, METH_VARARGS,
   (char*)"V.HighlightProp(vtkProp)\nC++: virtual void HighlightProp(vtkProp *prop)\n\nWhen picking successfully selects an actor, this method\nhighlights the picked prop appropriately. Currently this is done\nby placing a bounding box around a picked vtkProp3D, and using\nthe PickColor to highlight a vtkProp2D.\n"},
  {(char*)"HighlightActor2D", PyvtkInteractorStyle_HighlightActor2D, METH_VARARGS,
   (char*)"V.HighlightActor2D(vtkActor2D)\nC++: virtual void HighlightActor2D(vtkActor2D *actor2D)\n\nWhen picking successfully selects an actor, this method\nhighlights the picked prop appropriately. Currently this is done\nby placing a bounding box around a picked vtkProp3D, and using\nthe PickColor to highlight a vtkProp2D.\n"},
  {(char*)"HighlightProp3D", PyvtkInteractorStyle_HighlightProp3D, METH_VARARGS,
   (char*)"V.HighlightProp3D(vtkProp3D)\nC++: virtual void HighlightProp3D(vtkProp3D *prop3D)\n\nWhen picking successfully selects an actor, this method\nhighlights the picked prop appropriately. Currently this is done\nby placing a bounding box around a picked vtkProp3D, and using\nthe PickColor to highlight a vtkProp2D.\n"},
  {(char*)"SetPickColor", PyvtkInteractorStyle_SetPickColor, METH_VARARGS,
   (char*)"V.SetPickColor(float, float, float)\nC++: void SetPickColor(double, double, double)\nV.SetPickColor((float, float, float))\nC++: void SetPickColor(double a[3])\n\n"},
  {(char*)"GetPickColor", PyvtkInteractorStyle_GetPickColor, METH_VARARGS,
   (char*)"V.GetPickColor() -> (float, float, float)\nC++: double *GetPickColor()\n\nSet/Get the pick color (used by default to color vtkActor2D's).\nThe color is expressed as red/green/blue values between\n(0.0,1.0).\n"},
  {(char*)"SetMouseWheelMotionFactor", PyvtkInteractorStyle_SetMouseWheelMotionFactor, METH_VARARGS,
   (char*)"V.SetMouseWheelMotionFactor(float)\nC++: void SetMouseWheelMotionFactor(double a)\n\nSet/Get the mouse wheel motion factor. Default to 1.0. Set it to\na different value to emphasize or de-emphasize the action\ntriggered by mouse wheel motion.\n"},
  {(char*)"GetMouseWheelMotionFactor", PyvtkInteractorStyle_GetMouseWheelMotionFactor, METH_VARARGS,
   (char*)"V.GetMouseWheelMotionFactor() -> float\nC++: double GetMouseWheelMotionFactor()\n\nSet/Get the mouse wheel motion factor. Default to 1.0. Set it to\na different value to emphasize or de-emphasize the action\ntriggered by mouse wheel motion.\n"},
  {(char*)"GetTDxStyle", PyvtkInteractorStyle_GetTDxStyle, METH_VARARGS,
   (char*)"V.GetTDxStyle() -> vtkTDxInteractorStyle\nC++: vtkTDxInteractorStyle *GetTDxStyle()\n\n3Dconnexion device interactor style. Initial value is a pointer\nto an object of class vtkTdxInteractorStyleCamera.\n"},
  {(char*)"SetTDxStyle", PyvtkInteractorStyle_SetTDxStyle, METH_VARARGS,
   (char*)"V.SetTDxStyle(vtkTDxInteractorStyle)\nC++: virtual void SetTDxStyle(vtkTDxInteractorStyle *tdxStyle)\n\n3Dconnexion device interactor style. Initial value is a pointer\nto an object of class vtkTdxInteractorStyleCamera.\n"},
  {(char*)"DelegateTDxEvent", PyvtkInteractorStyle_DelegateTDxEvent, METH_VARARGS,
   (char*)"V.DelegateTDxEvent(int, )\nC++: void DelegateTDxEvent(unsigned long event, void *calldata)\n\nCalled by the callback to process 3DConnexion device events.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkInteractorStyle_StaticNew()
{
  return vtkInteractorStyle::New();
}

PyObject *PyVTKClass_vtkInteractorStyleNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkInteractorStyle_StaticNew,
    PyvtkInteractorStyle_Methods,
    "vtkInteractorStyle", modulename,
    NULL, NULL,
    PyvtkInteractorStyle_Doc(),
    PyVTKClass_vtkInteractorObserverNew(modulename));
  return cls;
}

const char **PyvtkInteractorStyle_Doc()
{
  static const char *docstring[] = {
    "vtkInteractorStyle - provide event-driven interface to the rendering\nwindow (defines trackball mode)\n\n",
    "Superclass: vtkInteractorObserver\n\n",
    "vtkInteractorStyle is a base class implementing the majority of\nmotion control routines and defines an event driven interface to\nsupport vtkRenderWindowInteractor. vtkRenderWindowInteractor\nimplements platform dependent key/mouse routing and timer control,\nwhich forwards events in a neutral form to vtkInteractorStyle.\n\nvtkInteractorStyle implements the \"joystick\" style of interaction.\nThat is, hol",
    "ding down the mouse keys generates a stream of events\nthat cause continuous actions (e.g., rotate, translate, pan, zoom).\n(The class vtkInteractorStyleTrackball implements a grab and move\nstyle.) The event bindings for this class include the following:\n- Keypress j / Keypress t: toggle between joystick (position\n  sensitive) and trackball (motion sensitive) styles. In joystick\n  style, motion occu",
    "rs continuously as long as a mouse button is\n  pressed. In trackball style, motion occurs when the mouse button is\npressed and the mouse pointer moves.\n- Keypress c / Keypress a: toggle between camera and actor modes. In\n  camera mode, mouse events affect the camera position and focal\n  point. In actor mode, mouse events affect the actor that is under\n  the mouse pointer.\n- Button 1: rotate the ca",
    "mera around its focal point (if camera mode)\nor rotate the actor around its origin (if actor mode). The rotation\n  is in the direction defined from the center of the renderer's\n  viewport towards the mouse position. In joystick mode, the\n  magnitude of the rotation is determined by the distance the mouse\n  is from the center of the render window.\n- Button 2: pan the camera (if camera mode) or tran",
    "slate the actor\n  (if actor mode). In joystick mode, the direction of pan or\n  translation is from the center of the viewport towards the mouse\n  position. In trackball mode, the direction of motion is the\n  direction the mouse moves. (Note: with 2-button mice, pan is\n  defined as <Shift>-Button 1.)\n- Button 3: zoom the camera (if camera mode) or scale the actor (if\n  actor mode). Zoom in/increase",
    " scale if the mouse position is in the\ntop half of the viewport; zoom out/decrease scale if the mouse\n  position is in the bottom half. In joystick mode, the amount of\n  zoom is controlled by the distance of the mouse pointer from the\n  horizontal centerline of the window.\n- Keypress 3: toggle the render window into and out of stereo mode.\n  By default, red-blue stereo pairs are created. Some syst",
    "ems support\nCrystal Eyes LCD stereo glasses; you have to invoke\n  SetStereoTypeToCrystalEyes() on the rendering window.\n- Keypress e: exit the application.\n- Keypress f: fly to the picked point\n- Keypress p: perform a pick operation. The render window interactor\n  has an internal instance of vtkCellPicker that it uses to pick.\n- Keypress r: reset the camera view along the current view direction.\nC",
    "enters the actors and moves the camera so that all actors are\n  visible.\n- Keypress s: modify the representation of all actors so that they\n  are surfaces.\n- Keypress u: invoke the user-defined function. Typically, this\n  keypress will bring up an interactor that you can type commands in.\n  Typing u calls UserCallBack() on the vtkRenderWindowInteractor,\n  which invokes a vtkCommand::UserEvent. In ",
    "other words, to define a\n  user-defined callback, just add an observer to the\n  vtkCommand::UserEvent on the vtkRenderWindowInteractor object.\n- Keypress w: modify the representation of all actors so that they\n  are wireframe.\n\nvtkInteractorStyle can be subclassed to provide new interaction\nstyles and a facility to override any of the default mouse/key\noperations which currently handle trackball o",
    "r joystick styles is\nprovided. Note that this class will fire a variety of events that can\nbe watched using an observer, such as LeftButtonPressEvent,\nLeftButtonReleaseEvent, MiddleButtonPressEvent,\nMiddleButtonReleaseEvent, RightButtonPressEvent,\nRightButtonReleaseEvent, EnterEvent, LeaveEvent, KeyPressEvent,\nKeyReleaseEvent, CharEvent, ExposeEvent, ConfigureEvent, TimerEvent,\nMouseMoveEvent,\n\nSe",
    "e Also:\n\nvtkInteractorStyleTrackball\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkInteractorStyle(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkInteractorStyleNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkInteractorStyle", o) != 0)
    {
    Py_DECREF(o);
    }

  for (int c = 0; c < 14; c++)
    {
    static const struct { const char *name; int value; }
      constants[14] = {
        { "VTKIS_START", 0 },
        { "VTKIS_NONE", 0 },
        { "VTKIS_ROTATE", 1 },
        { "VTKIS_PAN", 2 },
        { "VTKIS_SPIN", 3 },
        { "VTKIS_DOLLY", 4 },
        { "VTKIS_ZOOM", 5 },
        { "VTKIS_USCALE", 6 },
        { "VTKIS_TIMER", 7 },
        { "VTKIS_FORWARDFLY", 8 },
        { "VTKIS_REVERSEFLY", 9 },
        { "VTKIS_TWO_POINTER", 10 },
        { "VTKIS_ANIM_OFF", 0 },
        { "VTKIS_ANIM_ON", 1 },
      };

    o = PyInt_FromLong(constants[c].value);
    if (o)
      {
      PyDict_SetItemString(dict, (char *)constants[c].name, o);
      Py_DECREF(o);
      }
    }

}

