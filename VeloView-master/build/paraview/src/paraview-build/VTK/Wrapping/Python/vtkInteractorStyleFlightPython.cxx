// python wrapper for vtkInteractorStyleFlight
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkInteractorStyleFlight.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkInteractorStyleFlight(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkInteractorStyleFlightNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkInteractorStyleNew
extern "C" { PyObject *PyVTKClass_vtkInteractorStyleNew(const char *); }
#define DECLARED_PyVTKClass_vtkInteractorStyleNew
#endif

static const char **PyvtkInteractorStyleFlight_Doc();


static PyObject *
PyvtkInteractorStyleFlight_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleFlight *op = static_cast<vtkInteractorStyleFlight *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkInteractorStyleFlight::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyleFlight_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleFlight *op = static_cast<vtkInteractorStyleFlight *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkInteractorStyleFlight::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyleFlight_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleFlight *op = static_cast<vtkInteractorStyleFlight *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkInteractorStyleFlight *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkInteractorStyleFlight::NewInstance());

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
PyvtkInteractorStyleFlight_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkInteractorStyleFlight *tempr = vtkInteractorStyleFlight::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyleFlight_JumpTo(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "JumpTo");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleFlight *op = static_cast<vtkInteractorStyleFlight *>(vp);

  double temp0[3];
  double save0[3];
  const int size0 = 3;
  double temp1[3];
  double save1[3];
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
      op->JumpTo(temp0, temp1);
      }
    else
      {
      op->vtkInteractorStyleFlight::JumpTo(temp0, temp1);
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
PyvtkInteractorStyleFlight_SetMotionStepSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMotionStepSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleFlight *op = static_cast<vtkInteractorStyleFlight *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetMotionStepSize(temp0);
      }
    else
      {
      op->vtkInteractorStyleFlight::SetMotionStepSize(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyleFlight_GetMotionStepSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMotionStepSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleFlight *op = static_cast<vtkInteractorStyleFlight *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetMotionStepSize() :
      op->vtkInteractorStyleFlight::GetMotionStepSize());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyleFlight_SetMotionAccelerationFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMotionAccelerationFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleFlight *op = static_cast<vtkInteractorStyleFlight *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetMotionAccelerationFactor(temp0);
      }
    else
      {
      op->vtkInteractorStyleFlight::SetMotionAccelerationFactor(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyleFlight_GetMotionAccelerationFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMotionAccelerationFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleFlight *op = static_cast<vtkInteractorStyleFlight *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetMotionAccelerationFactor() :
      op->vtkInteractorStyleFlight::GetMotionAccelerationFactor());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyleFlight_SetAngleStepSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAngleStepSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleFlight *op = static_cast<vtkInteractorStyleFlight *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetAngleStepSize(temp0);
      }
    else
      {
      op->vtkInteractorStyleFlight::SetAngleStepSize(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyleFlight_GetAngleStepSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAngleStepSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleFlight *op = static_cast<vtkInteractorStyleFlight *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetAngleStepSize() :
      op->vtkInteractorStyleFlight::GetAngleStepSize());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyleFlight_SetAngleAccelerationFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAngleAccelerationFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleFlight *op = static_cast<vtkInteractorStyleFlight *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetAngleAccelerationFactor(temp0);
      }
    else
      {
      op->vtkInteractorStyleFlight::SetAngleAccelerationFactor(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyleFlight_GetAngleAccelerationFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAngleAccelerationFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleFlight *op = static_cast<vtkInteractorStyleFlight *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetAngleAccelerationFactor() :
      op->vtkInteractorStyleFlight::GetAngleAccelerationFactor());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyleFlight_SetDisableMotion(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDisableMotion");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleFlight *op = static_cast<vtkInteractorStyleFlight *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetDisableMotion(temp0);
      }
    else
      {
      op->vtkInteractorStyleFlight::SetDisableMotion(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyleFlight_GetDisableMotion(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDisableMotion");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleFlight *op = static_cast<vtkInteractorStyleFlight *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetDisableMotion() :
      op->vtkInteractorStyleFlight::GetDisableMotion());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyleFlight_DisableMotionOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DisableMotionOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleFlight *op = static_cast<vtkInteractorStyleFlight *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->DisableMotionOn();
      }
    else
      {
      op->vtkInteractorStyleFlight::DisableMotionOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyleFlight_DisableMotionOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DisableMotionOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleFlight *op = static_cast<vtkInteractorStyleFlight *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->DisableMotionOff();
      }
    else
      {
      op->vtkInteractorStyleFlight::DisableMotionOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyleFlight_SetRestoreUpVector(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRestoreUpVector");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleFlight *op = static_cast<vtkInteractorStyleFlight *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetRestoreUpVector(temp0);
      }
    else
      {
      op->vtkInteractorStyleFlight::SetRestoreUpVector(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyleFlight_GetRestoreUpVector(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRestoreUpVector");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleFlight *op = static_cast<vtkInteractorStyleFlight *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetRestoreUpVector() :
      op->vtkInteractorStyleFlight::GetRestoreUpVector());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyleFlight_RestoreUpVectorOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RestoreUpVectorOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleFlight *op = static_cast<vtkInteractorStyleFlight *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->RestoreUpVectorOn();
      }
    else
      {
      op->vtkInteractorStyleFlight::RestoreUpVectorOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyleFlight_RestoreUpVectorOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RestoreUpVectorOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleFlight *op = static_cast<vtkInteractorStyleFlight *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->RestoreUpVectorOff();
      }
    else
      {
      op->vtkInteractorStyleFlight::RestoreUpVectorOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyleFlight_GetDefaultUpVector(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDefaultUpVector");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleFlight *op = static_cast<vtkInteractorStyleFlight *>(vp);

  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetDefaultUpVector() :
      op->vtkInteractorStyleFlight::GetDefaultUpVector());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyleFlight_SetDefaultUpVector(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDefaultUpVector");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleFlight *op = static_cast<vtkInteractorStyleFlight *>(vp);

  double temp0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetDefaultUpVector(temp0);
      }
    else
      {
      op->vtkInteractorStyleFlight::SetDefaultUpVector(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyleFlight_OnMouseMove(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnMouseMove");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleFlight *op = static_cast<vtkInteractorStyleFlight *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->OnMouseMove();
      }
    else
      {
      op->vtkInteractorStyleFlight::OnMouseMove();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyleFlight_OnLeftButtonDown(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnLeftButtonDown");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleFlight *op = static_cast<vtkInteractorStyleFlight *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->OnLeftButtonDown();
      }
    else
      {
      op->vtkInteractorStyleFlight::OnLeftButtonDown();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyleFlight_OnLeftButtonUp(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnLeftButtonUp");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleFlight *op = static_cast<vtkInteractorStyleFlight *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->OnLeftButtonUp();
      }
    else
      {
      op->vtkInteractorStyleFlight::OnLeftButtonUp();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyleFlight_OnMiddleButtonDown(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnMiddleButtonDown");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleFlight *op = static_cast<vtkInteractorStyleFlight *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->OnMiddleButtonDown();
      }
    else
      {
      op->vtkInteractorStyleFlight::OnMiddleButtonDown();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyleFlight_OnMiddleButtonUp(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnMiddleButtonUp");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleFlight *op = static_cast<vtkInteractorStyleFlight *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->OnMiddleButtonUp();
      }
    else
      {
      op->vtkInteractorStyleFlight::OnMiddleButtonUp();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyleFlight_OnRightButtonDown(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnRightButtonDown");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleFlight *op = static_cast<vtkInteractorStyleFlight *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->OnRightButtonDown();
      }
    else
      {
      op->vtkInteractorStyleFlight::OnRightButtonDown();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyleFlight_OnRightButtonUp(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnRightButtonUp");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleFlight *op = static_cast<vtkInteractorStyleFlight *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->OnRightButtonUp();
      }
    else
      {
      op->vtkInteractorStyleFlight::OnRightButtonUp();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyleFlight_OnChar(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnChar");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleFlight *op = static_cast<vtkInteractorStyleFlight *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->OnChar();
      }
    else
      {
      op->vtkInteractorStyleFlight::OnChar();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyleFlight_OnKeyDown(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnKeyDown");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleFlight *op = static_cast<vtkInteractorStyleFlight *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->OnKeyDown();
      }
    else
      {
      op->vtkInteractorStyleFlight::OnKeyDown();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyleFlight_OnKeyUp(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnKeyUp");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleFlight *op = static_cast<vtkInteractorStyleFlight *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->OnKeyUp();
      }
    else
      {
      op->vtkInteractorStyleFlight::OnKeyUp();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyleFlight_OnTimer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnTimer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleFlight *op = static_cast<vtkInteractorStyleFlight *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->OnTimer();
      }
    else
      {
      op->vtkInteractorStyleFlight::OnTimer();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyleFlight_ForwardFly(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ForwardFly");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleFlight *op = static_cast<vtkInteractorStyleFlight *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ForwardFly();
      }
    else
      {
      op->vtkInteractorStyleFlight::ForwardFly();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyleFlight_ReverseFly(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReverseFly");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleFlight *op = static_cast<vtkInteractorStyleFlight *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ReverseFly();
      }
    else
      {
      op->vtkInteractorStyleFlight::ReverseFly();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyleFlight_StartForwardFly(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StartForwardFly");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleFlight *op = static_cast<vtkInteractorStyleFlight *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->StartForwardFly();
      }
    else
      {
      op->vtkInteractorStyleFlight::StartForwardFly();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyleFlight_EndForwardFly(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EndForwardFly");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleFlight *op = static_cast<vtkInteractorStyleFlight *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->EndForwardFly();
      }
    else
      {
      op->vtkInteractorStyleFlight::EndForwardFly();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyleFlight_StartReverseFly(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StartReverseFly");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleFlight *op = static_cast<vtkInteractorStyleFlight *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->StartReverseFly();
      }
    else
      {
      op->vtkInteractorStyleFlight::StartReverseFly();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyleFlight_EndReverseFly(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EndReverseFly");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleFlight *op = static_cast<vtkInteractorStyleFlight *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->EndReverseFly();
      }
    else
      {
      op->vtkInteractorStyleFlight::EndReverseFly();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkInteractorStyleFlight_Methods[] = {
  {(char*)"GetClassName", PyvtkInteractorStyleFlight_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkInteractorStyleFlight_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkInteractorStyleFlight_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkInteractorStyleFlight\nC++: vtkInteractorStyleFlight *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkInteractorStyleFlight_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkInteractorStyleFlight\nC++: vtkInteractorStyleFlight *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"JumpTo", PyvtkInteractorStyleFlight_JumpTo, METH_VARARGS,
   (char*)"V.JumpTo([float, float, float], [float, float, float])\nC++: void JumpTo(double campos[3], double focpos[3])\n\nMove the Eye/Camera to a specific location (no intermediate steps\nare taken\n"},
  {(char*)"SetMotionStepSize", PyvtkInteractorStyleFlight_SetMotionStepSize, METH_VARARGS,
   (char*)"V.SetMotionStepSize(float)\nC++: void SetMotionStepSize(double a)\n\nSet the basic unit step size : by default 1/250 of bounding\ndiagonal\n"},
  {(char*)"GetMotionStepSize", PyvtkInteractorStyleFlight_GetMotionStepSize, METH_VARARGS,
   (char*)"V.GetMotionStepSize() -> float\nC++: double GetMotionStepSize()\n\nSet the basic unit step size : by default 1/250 of bounding\ndiagonal\n"},
  {(char*)"SetMotionAccelerationFactor", PyvtkInteractorStyleFlight_SetMotionAccelerationFactor, METH_VARARGS,
   (char*)"V.SetMotionAccelerationFactor(float)\nC++: void SetMotionAccelerationFactor(double a)\n\nSet acceleration factor when shift key is applied : default 10\n"},
  {(char*)"GetMotionAccelerationFactor", PyvtkInteractorStyleFlight_GetMotionAccelerationFactor, METH_VARARGS,
   (char*)"V.GetMotionAccelerationFactor() -> float\nC++: double GetMotionAccelerationFactor()\n\nSet acceleration factor when shift key is applied : default 10\n"},
  {(char*)"SetAngleStepSize", PyvtkInteractorStyleFlight_SetAngleStepSize, METH_VARARGS,
   (char*)"V.SetAngleStepSize(float)\nC++: void SetAngleStepSize(double a)\n\nSet the basic angular unit for turning : default 1 degree\n"},
  {(char*)"GetAngleStepSize", PyvtkInteractorStyleFlight_GetAngleStepSize, METH_VARARGS,
   (char*)"V.GetAngleStepSize() -> float\nC++: double GetAngleStepSize()\n\nSet the basic angular unit for turning : default 1 degree\n"},
  {(char*)"SetAngleAccelerationFactor", PyvtkInteractorStyleFlight_SetAngleAccelerationFactor, METH_VARARGS,
   (char*)"V.SetAngleAccelerationFactor(float)\nC++: void SetAngleAccelerationFactor(double a)\n\nSet angular acceleration when shift key is applied : default 5\n"},
  {(char*)"GetAngleAccelerationFactor", PyvtkInteractorStyleFlight_GetAngleAccelerationFactor, METH_VARARGS,
   (char*)"V.GetAngleAccelerationFactor() -> float\nC++: double GetAngleAccelerationFactor()\n\nSet angular acceleration when shift key is applied : default 5\n"},
  {(char*)"SetDisableMotion", PyvtkInteractorStyleFlight_SetDisableMotion, METH_VARARGS,
   (char*)"V.SetDisableMotion(int)\nC++: void SetDisableMotion(int a)\n\nDisable motion (temporarily - for viewing etc)\n"},
  {(char*)"GetDisableMotion", PyvtkInteractorStyleFlight_GetDisableMotion, METH_VARARGS,
   (char*)"V.GetDisableMotion() -> int\nC++: int GetDisableMotion()\n\nDisable motion (temporarily - for viewing etc)\n"},
  {(char*)"DisableMotionOn", PyvtkInteractorStyleFlight_DisableMotionOn, METH_VARARGS,
   (char*)"V.DisableMotionOn()\nC++: void DisableMotionOn()\n\nDisable motion (temporarily - for viewing etc)\n"},
  {(char*)"DisableMotionOff", PyvtkInteractorStyleFlight_DisableMotionOff, METH_VARARGS,
   (char*)"V.DisableMotionOff()\nC++: void DisableMotionOff()\n\nDisable motion (temporarily - for viewing etc)\n"},
  {(char*)"SetRestoreUpVector", PyvtkInteractorStyleFlight_SetRestoreUpVector, METH_VARARGS,
   (char*)"V.SetRestoreUpVector(int)\nC++: void SetRestoreUpVector(int a)\n\nWhen flying, apply a restorative force to the \"Up\" vector. This\nis activated when the current 'up' is close to the actual 'up'\n(as defined in DefaultUpVector). This prevents excessive twisting\nforces when viewing from arbitrary angles, but keep the horizon\nlevel when the user is flying over terrain.\n"},
  {(char*)"GetRestoreUpVector", PyvtkInteractorStyleFlight_GetRestoreUpVector, METH_VARARGS,
   (char*)"V.GetRestoreUpVector() -> int\nC++: int GetRestoreUpVector()\n\nWhen flying, apply a restorative force to the \"Up\" vector. This\nis activated when the current 'up' is close to the actual 'up'\n(as defined in DefaultUpVector). This prevents excessive twisting\nforces when viewing from arbitrary angles, but keep the horizon\nlevel when the user is flying over terrain.\n"},
  {(char*)"RestoreUpVectorOn", PyvtkInteractorStyleFlight_RestoreUpVectorOn, METH_VARARGS,
   (char*)"V.RestoreUpVectorOn()\nC++: void RestoreUpVectorOn()\n\nWhen flying, apply a restorative force to the \"Up\" vector. This\nis activated when the current 'up' is close to the actual 'up'\n(as defined in DefaultUpVector). This prevents excessive twisting\nforces when viewing from arbitrary angles, but keep the horizon\nlevel when the user is flying over terrain.\n"},
  {(char*)"RestoreUpVectorOff", PyvtkInteractorStyleFlight_RestoreUpVectorOff, METH_VARARGS,
   (char*)"V.RestoreUpVectorOff()\nC++: void RestoreUpVectorOff()\n\nWhen flying, apply a restorative force to the \"Up\" vector. This\nis activated when the current 'up' is close to the actual 'up'\n(as defined in DefaultUpVector). This prevents excessive twisting\nforces when viewing from arbitrary angles, but keep the horizon\nlevel when the user is flying over terrain.\n"},
  {(char*)"GetDefaultUpVector", PyvtkInteractorStyleFlight_GetDefaultUpVector, METH_VARARGS,
   (char*)"V.GetDefaultUpVector() -> (float, float, float)\nC++: double *GetDefaultUpVector()\n\n"},
  {(char*)"SetDefaultUpVector", PyvtkInteractorStyleFlight_SetDefaultUpVector, METH_VARARGS,
   (char*)"V.SetDefaultUpVector((float, float, float))\nC++: void SetDefaultUpVector(double a[3])\n\n"},
  {(char*)"OnMouseMove", PyvtkInteractorStyleFlight_OnMouseMove, METH_VARARGS,
   (char*)"V.OnMouseMove()\nC++: virtual void OnMouseMove()\n\nConcrete implementation of Mouse event bindings for flight\n"},
  {(char*)"OnLeftButtonDown", PyvtkInteractorStyleFlight_OnLeftButtonDown, METH_VARARGS,
   (char*)"V.OnLeftButtonDown()\nC++: virtual void OnLeftButtonDown()\n\nConcrete implementation of Mouse event bindings for flight\n"},
  {(char*)"OnLeftButtonUp", PyvtkInteractorStyleFlight_OnLeftButtonUp, METH_VARARGS,
   (char*)"V.OnLeftButtonUp()\nC++: virtual void OnLeftButtonUp()\n\nConcrete implementation of Mouse event bindings for flight\n"},
  {(char*)"OnMiddleButtonDown", PyvtkInteractorStyleFlight_OnMiddleButtonDown, METH_VARARGS,
   (char*)"V.OnMiddleButtonDown()\nC++: virtual void OnMiddleButtonDown()\n\nConcrete implementation of Mouse event bindings for flight\n"},
  {(char*)"OnMiddleButtonUp", PyvtkInteractorStyleFlight_OnMiddleButtonUp, METH_VARARGS,
   (char*)"V.OnMiddleButtonUp()\nC++: virtual void OnMiddleButtonUp()\n\nConcrete implementation of Mouse event bindings for flight\n"},
  {(char*)"OnRightButtonDown", PyvtkInteractorStyleFlight_OnRightButtonDown, METH_VARARGS,
   (char*)"V.OnRightButtonDown()\nC++: virtual void OnRightButtonDown()\n\nConcrete implementation of Mouse event bindings for flight\n"},
  {(char*)"OnRightButtonUp", PyvtkInteractorStyleFlight_OnRightButtonUp, METH_VARARGS,
   (char*)"V.OnRightButtonUp()\nC++: virtual void OnRightButtonUp()\n\nConcrete implementation of Mouse event bindings for flight\n"},
  {(char*)"OnChar", PyvtkInteractorStyleFlight_OnChar, METH_VARARGS,
   (char*)"V.OnChar()\nC++: virtual void OnChar()\n\nConcrete implementation of Keyboard event bindings for flight\n"},
  {(char*)"OnKeyDown", PyvtkInteractorStyleFlight_OnKeyDown, METH_VARARGS,
   (char*)"V.OnKeyDown()\nC++: virtual void OnKeyDown()\n\nConcrete implementation of Keyboard event bindings for flight\n"},
  {(char*)"OnKeyUp", PyvtkInteractorStyleFlight_OnKeyUp, METH_VARARGS,
   (char*)"V.OnKeyUp()\nC++: virtual void OnKeyUp()\n\nConcrete implementation of Keyboard event bindings for flight\n"},
  {(char*)"OnTimer", PyvtkInteractorStyleFlight_OnTimer, METH_VARARGS,
   (char*)"V.OnTimer()\nC++: virtual void OnTimer()\n\nConcrete implementation of Keyboard event bindings for flight\n"},
  {(char*)"ForwardFly", PyvtkInteractorStyleFlight_ForwardFly, METH_VARARGS,
   (char*)"V.ForwardFly()\nC++: virtual void ForwardFly()\n\n"},
  {(char*)"ReverseFly", PyvtkInteractorStyleFlight_ReverseFly, METH_VARARGS,
   (char*)"V.ReverseFly()\nC++: virtual void ReverseFly()\n\n"},
  {(char*)"StartForwardFly", PyvtkInteractorStyleFlight_StartForwardFly, METH_VARARGS,
   (char*)"V.StartForwardFly()\nC++: virtual void StartForwardFly()\n\n"},
  {(char*)"EndForwardFly", PyvtkInteractorStyleFlight_EndForwardFly, METH_VARARGS,
   (char*)"V.EndForwardFly()\nC++: virtual void EndForwardFly()\n\n"},
  {(char*)"StartReverseFly", PyvtkInteractorStyleFlight_StartReverseFly, METH_VARARGS,
   (char*)"V.StartReverseFly()\nC++: virtual void StartReverseFly()\n\n"},
  {(char*)"EndReverseFly", PyvtkInteractorStyleFlight_EndReverseFly, METH_VARARGS,
   (char*)"V.EndReverseFly()\nC++: virtual void EndReverseFly()\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkInteractorStyleFlight_StaticNew()
{
  return vtkInteractorStyleFlight::New();
}

PyObject *PyVTKClass_vtkInteractorStyleFlightNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkInteractorStyleFlight_StaticNew,
    PyvtkInteractorStyleFlight_Methods,
    "vtkInteractorStyleFlight", modulename,
    NULL, NULL,
    PyvtkInteractorStyleFlight_Doc(),
    PyVTKClass_vtkInteractorStyleNew(modulename));
  return cls;
}

const char **PyvtkInteractorStyleFlight_Doc()
{
  static const char *docstring[] = {
    "vtkInteractorStyleFlight - provides flight motion routines\n\n",
    "Superclass: vtkInteractorStyle\n\n",
    "Left  mouse button press produces forward motion. Right mouse button\npress produces reverse motion. Moving mouse during motion steers user\nin desired direction. Keyboard controls are: Left/Right/Up/Down\nArrows for steering direction 'A' forward, 'Z' reverse motion Ctrl\nKey causes sidestep instead of steering in mouse and key modes Shift\nkey is accelerator in mouse and key modes Ctrl and Shift toge",
    "ther\ncauses Roll in mouse and key modes\n\nBy default, one \"step\" of motion corresponds to 1/250th of the\ndiagonal of bounding box of visible actors, '+' and '-' keys allow\nuser to increase or decrease step size.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkInteractorStyleFlight(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkInteractorStyleFlightNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkInteractorStyleFlight", o) != 0)
    {
    Py_DECREF(o);
    }

}

