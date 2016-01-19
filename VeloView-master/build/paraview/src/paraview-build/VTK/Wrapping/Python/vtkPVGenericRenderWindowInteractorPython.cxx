// python wrapper for vtkPVGenericRenderWindowInteractor
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkPVGenericRenderWindowInteractor.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkPVGenericRenderWindowInteractor(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkPVGenericRenderWindowInteractorNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkRenderWindowInteractorNew
extern "C" { PyObject *PyVTKClass_vtkRenderWindowInteractorNew(const char *); }
#define DECLARED_PyVTKClass_vtkRenderWindowInteractorNew
#endif

static const char **PyvtkPVGenericRenderWindowInteractor_Doc();


static PyObject *
PyvtkPVGenericRenderWindowInteractor_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVGenericRenderWindowInteractor *op = static_cast<vtkPVGenericRenderWindowInteractor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkPVGenericRenderWindowInteractor::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVGenericRenderWindowInteractor_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVGenericRenderWindowInteractor *op = static_cast<vtkPVGenericRenderWindowInteractor *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPVGenericRenderWindowInteractor::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVGenericRenderWindowInteractor_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVGenericRenderWindowInteractor *op = static_cast<vtkPVGenericRenderWindowInteractor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPVGenericRenderWindowInteractor *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPVGenericRenderWindowInteractor::NewInstance());

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
PyvtkPVGenericRenderWindowInteractor_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkPVGenericRenderWindowInteractor *tempr = vtkPVGenericRenderWindowInteractor::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVGenericRenderWindowInteractor_SetPVRenderView(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPVRenderView");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVGenericRenderWindowInteractor *op = static_cast<vtkPVGenericRenderWindowInteractor *>(vp);

  vtkPVRenderViewProxy *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPVRenderViewProxy"))
    {
    if (ap.IsBound())
      {
      op->SetPVRenderView(temp0);
      }
    else
      {
      op->vtkPVGenericRenderWindowInteractor::SetPVRenderView(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVGenericRenderWindowInteractor_GetPVRenderView(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPVRenderView");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVGenericRenderWindowInteractor *op = static_cast<vtkPVGenericRenderWindowInteractor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPVRenderViewProxy *tempr = (ap.IsBound() ?
      op->GetPVRenderView() :
      op->vtkPVGenericRenderWindowInteractor::GetPVRenderView());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVGenericRenderWindowInteractor_SetInteractiveRenderEnabled(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInteractiveRenderEnabled");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVGenericRenderWindowInteractor *op = static_cast<vtkPVGenericRenderWindowInteractor *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetInteractiveRenderEnabled(temp0);
      }
    else
      {
      op->vtkPVGenericRenderWindowInteractor::SetInteractiveRenderEnabled(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVGenericRenderWindowInteractor_GetInteractiveRenderEnabled(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInteractiveRenderEnabled");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVGenericRenderWindowInteractor *op = static_cast<vtkPVGenericRenderWindowInteractor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetInteractiveRenderEnabled() :
      op->vtkPVGenericRenderWindowInteractor::GetInteractiveRenderEnabled());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVGenericRenderWindowInteractor_InteractiveRenderEnabledOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InteractiveRenderEnabledOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVGenericRenderWindowInteractor *op = static_cast<vtkPVGenericRenderWindowInteractor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->InteractiveRenderEnabledOn();
      }
    else
      {
      op->vtkPVGenericRenderWindowInteractor::InteractiveRenderEnabledOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVGenericRenderWindowInteractor_InteractiveRenderEnabledOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InteractiveRenderEnabledOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVGenericRenderWindowInteractor *op = static_cast<vtkPVGenericRenderWindowInteractor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->InteractiveRenderEnabledOff();
      }
    else
      {
      op->vtkPVGenericRenderWindowInteractor::InteractiveRenderEnabledOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVGenericRenderWindowInteractor_SetRenderCallsEnabled(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRenderCallsEnabled");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVGenericRenderWindowInteractor *op = static_cast<vtkPVGenericRenderWindowInteractor *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetRenderCallsEnabled(temp0);
      }
    else
      {
      op->vtkPVGenericRenderWindowInteractor::SetRenderCallsEnabled(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVGenericRenderWindowInteractor_GetRenderCallsEnabled(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRenderCallsEnabled");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVGenericRenderWindowInteractor *op = static_cast<vtkPVGenericRenderWindowInteractor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetRenderCallsEnabled() :
      op->vtkPVGenericRenderWindowInteractor::GetRenderCallsEnabled());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVGenericRenderWindowInteractor_RenderCallsEnabledOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderCallsEnabledOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVGenericRenderWindowInteractor *op = static_cast<vtkPVGenericRenderWindowInteractor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->RenderCallsEnabledOn();
      }
    else
      {
      op->vtkPVGenericRenderWindowInteractor::RenderCallsEnabledOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVGenericRenderWindowInteractor_RenderCallsEnabledOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderCallsEnabledOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVGenericRenderWindowInteractor *op = static_cast<vtkPVGenericRenderWindowInteractor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->RenderCallsEnabledOff();
      }
    else
      {
      op->vtkPVGenericRenderWindowInteractor::RenderCallsEnabledOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVGenericRenderWindowInteractor_SetNonInteractiveRenderDelay(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNonInteractiveRenderDelay");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVGenericRenderWindowInteractor *op = static_cast<vtkPVGenericRenderWindowInteractor *>(vp);

  unsigned long temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetNonInteractiveRenderDelay(temp0);
      }
    else
      {
      op->vtkPVGenericRenderWindowInteractor::SetNonInteractiveRenderDelay(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVGenericRenderWindowInteractor_GetNonInteractiveRenderDelay(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNonInteractiveRenderDelay");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVGenericRenderWindowInteractor *op = static_cast<vtkPVGenericRenderWindowInteractor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned long tempr = (ap.IsBound() ?
      op->GetNonInteractiveRenderDelay() :
      op->vtkPVGenericRenderWindowInteractor::GetNonInteractiveRenderDelay());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVGenericRenderWindowInteractor_Render(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Render");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVGenericRenderWindowInteractor *op = static_cast<vtkPVGenericRenderWindowInteractor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Render();
      }
    else
      {
      op->vtkPVGenericRenderWindowInteractor::Render();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVGenericRenderWindowInteractor_OnLeftPress(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnLeftPress");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVGenericRenderWindowInteractor *op = static_cast<vtkPVGenericRenderWindowInteractor *>(vp);

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
      op->OnLeftPress(temp0, temp1, temp2, temp3);
      }
    else
      {
      op->vtkPVGenericRenderWindowInteractor::OnLeftPress(temp0, temp1, temp2, temp3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVGenericRenderWindowInteractor_OnMiddlePress(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnMiddlePress");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVGenericRenderWindowInteractor *op = static_cast<vtkPVGenericRenderWindowInteractor *>(vp);

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
      op->OnMiddlePress(temp0, temp1, temp2, temp3);
      }
    else
      {
      op->vtkPVGenericRenderWindowInteractor::OnMiddlePress(temp0, temp1, temp2, temp3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVGenericRenderWindowInteractor_OnRightPress(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnRightPress");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVGenericRenderWindowInteractor *op = static_cast<vtkPVGenericRenderWindowInteractor *>(vp);

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
      op->OnRightPress(temp0, temp1, temp2, temp3);
      }
    else
      {
      op->vtkPVGenericRenderWindowInteractor::OnRightPress(temp0, temp1, temp2, temp3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVGenericRenderWindowInteractor_OnLeftRelease(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnLeftRelease");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVGenericRenderWindowInteractor *op = static_cast<vtkPVGenericRenderWindowInteractor *>(vp);

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
      op->OnLeftRelease(temp0, temp1, temp2, temp3);
      }
    else
      {
      op->vtkPVGenericRenderWindowInteractor::OnLeftRelease(temp0, temp1, temp2, temp3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVGenericRenderWindowInteractor_OnMiddleRelease(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnMiddleRelease");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVGenericRenderWindowInteractor *op = static_cast<vtkPVGenericRenderWindowInteractor *>(vp);

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
      op->OnMiddleRelease(temp0, temp1, temp2, temp3);
      }
    else
      {
      op->vtkPVGenericRenderWindowInteractor::OnMiddleRelease(temp0, temp1, temp2, temp3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVGenericRenderWindowInteractor_OnRightRelease(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnRightRelease");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVGenericRenderWindowInteractor *op = static_cast<vtkPVGenericRenderWindowInteractor *>(vp);

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
      op->OnRightRelease(temp0, temp1, temp2, temp3);
      }
    else
      {
      op->vtkPVGenericRenderWindowInteractor::OnRightRelease(temp0, temp1, temp2, temp3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVGenericRenderWindowInteractor_OnMove(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnMove");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVGenericRenderWindowInteractor *op = static_cast<vtkPVGenericRenderWindowInteractor *>(vp);

  int temp0;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->OnMove(temp0, temp1);
      }
    else
      {
      op->vtkPVGenericRenderWindowInteractor::OnMove(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVGenericRenderWindowInteractor_OnKeyPress(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnKeyPress");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVGenericRenderWindowInteractor *op = static_cast<vtkPVGenericRenderWindowInteractor *>(vp);

  char temp0;
  int temp1;
  int temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      op->OnKeyPress(temp0, temp1, temp2);
      }
    else
      {
      op->vtkPVGenericRenderWindowInteractor::OnKeyPress(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVGenericRenderWindowInteractor_SetInteractorStyle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInteractorStyle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVGenericRenderWindowInteractor *op = static_cast<vtkPVGenericRenderWindowInteractor *>(vp);

  vtkInteractorObserver *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInteractorObserver"))
    {
    if (ap.IsBound())
      {
      op->SetInteractorStyle(temp0);
      }
    else
      {
      op->vtkPVGenericRenderWindowInteractor::SetInteractorStyle(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVGenericRenderWindowInteractor_GetCenterOfRotation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCenterOfRotation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVGenericRenderWindowInteractor *op = static_cast<vtkPVGenericRenderWindowInteractor *>(vp);

  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetCenterOfRotation() :
      op->vtkPVGenericRenderWindowInteractor::GetCenterOfRotation());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkPVGenericRenderWindowInteractor_SetCenterOfRotation_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCenterOfRotation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVGenericRenderWindowInteractor *op = static_cast<vtkPVGenericRenderWindowInteractor *>(vp);

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
      op->SetCenterOfRotation(temp0, temp1, temp2);
      }
    else
      {
      op->vtkPVGenericRenderWindowInteractor::SetCenterOfRotation(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkPVGenericRenderWindowInteractor_SetCenterOfRotation_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCenterOfRotation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVGenericRenderWindowInteractor *op = static_cast<vtkPVGenericRenderWindowInteractor *>(vp);

  double temp0[3];
  double save0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    if (ap.IsBound())
      {
      op->SetCenterOfRotation(temp0);
      }
    else
      {
      op->vtkPVGenericRenderWindowInteractor::SetCenterOfRotation(temp0);
      }

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

static PyObject *
PyvtkPVGenericRenderWindowInteractor_SetCenterOfRotation(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkPVGenericRenderWindowInteractor_SetCenterOfRotation_s1(self, args);
    case 1:
      return PyvtkPVGenericRenderWindowInteractor_SetCenterOfRotation_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetCenterOfRotation");
  return NULL;
}



static PyObject *
PyvtkPVGenericRenderWindowInteractor_SetRotationFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRotationFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVGenericRenderWindowInteractor *op = static_cast<vtkPVGenericRenderWindowInteractor *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetRotationFactor(temp0);
      }
    else
      {
      op->vtkPVGenericRenderWindowInteractor::SetRotationFactor(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVGenericRenderWindowInteractor_GetRotationFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRotationFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVGenericRenderWindowInteractor *op = static_cast<vtkPVGenericRenderWindowInteractor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetRotationFactor() :
      op->vtkPVGenericRenderWindowInteractor::GetRotationFactor());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkPVGenericRenderWindowInteractor_Methods[] = {
  {(char*)"GetClassName", PyvtkPVGenericRenderWindowInteractor_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkPVGenericRenderWindowInteractor_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkPVGenericRenderWindowInteractor_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkPVGenericRenderWindowInteractor\nC++: vtkPVGenericRenderWindowInteractor *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkPVGenericRenderWindowInteractor_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkPVGenericRenderWindowInteractor\nC++: vtkPVGenericRenderWindowInteractor *SafeDownCast(\n    vtkObject* o)\n\n"},
  {(char*)"SetPVRenderView", PyvtkPVGenericRenderWindowInteractor_SetPVRenderView, METH_VARARGS,
   (char*)"V.SetPVRenderView(vtkPVRenderViewProxy)\nC++: void SetPVRenderView(vtkPVRenderViewProxy *view)\n\n"},
  {(char*)"GetPVRenderView", PyvtkPVGenericRenderWindowInteractor_GetPVRenderView, METH_VARARGS,
   (char*)"V.GetPVRenderView() -> vtkPVRenderViewProxy\nC++: vtkPVRenderViewProxy *GetPVRenderView()\n\n"},
  {(char*)"SetInteractiveRenderEnabled", PyvtkPVGenericRenderWindowInteractor_SetInteractiveRenderEnabled, METH_VARARGS,
   (char*)"V.SetInteractiveRenderEnabled(int)\nC++: void SetInteractiveRenderEnabled(int)\n\n3D widgets call render on this interactor directly. They call\nSetInteractive to tell whether to use still or interactive\nrendering. This class just forwards the render request to\nParaView's RenderModule. DesiredUpdateRate is ignored.\n"},
  {(char*)"GetInteractiveRenderEnabled", PyvtkPVGenericRenderWindowInteractor_GetInteractiveRenderEnabled, METH_VARARGS,
   (char*)"V.GetInteractiveRenderEnabled() -> int\nC++: int GetInteractiveRenderEnabled()\n\n3D widgets call render on this interactor directly. They call\nSetInteractive to tell whether to use still or interactive\nrendering. This class just forwards the render request to\nParaView's RenderModule. DesiredUpdateRate is ignored.\n"},
  {(char*)"InteractiveRenderEnabledOn", PyvtkPVGenericRenderWindowInteractor_InteractiveRenderEnabledOn, METH_VARARGS,
   (char*)"V.InteractiveRenderEnabledOn()\nC++: void InteractiveRenderEnabledOn()\n\n3D widgets call render on this interactor directly. They call\nSetInteractive to tell whether to use still or interactive\nrendering. This class just forwards the render request to\nParaView's RenderModule. DesiredUpdateRate is ignored.\n"},
  {(char*)"InteractiveRenderEnabledOff", PyvtkPVGenericRenderWindowInteractor_InteractiveRenderEnabledOff, METH_VARARGS,
   (char*)"V.InteractiveRenderEnabledOff()\nC++: void InteractiveRenderEnabledOff()\n\n3D widgets call render on this interactor directly. They call\nSetInteractive to tell whether to use still or interactive\nrendering. This class just forwards the render request to\nParaView's RenderModule. DesiredUpdateRate is ignored.\n"},
  {(char*)"SetRenderCallsEnabled", PyvtkPVGenericRenderWindowInteractor_SetRenderCallsEnabled, METH_VARARGS,
   (char*)"V.SetRenderCallsEnabled(int)\nC++: void SetRenderCallsEnabled(int a)\n\nIn some cases, we may not want to automatically render in\nresponse to mouse interaction events.  In those cases, set\nRenderCallsEnabled to 0.  By default, this value is set to 1 so\nthat render calls are enabled.\n"},
  {(char*)"GetRenderCallsEnabled", PyvtkPVGenericRenderWindowInteractor_GetRenderCallsEnabled, METH_VARARGS,
   (char*)"V.GetRenderCallsEnabled() -> int\nC++: int GetRenderCallsEnabled()\n\nIn some cases, we may not want to automatically render in\nresponse to mouse interaction events.  In those cases, set\nRenderCallsEnabled to 0.  By default, this value is set to 1 so\nthat render calls are enabled.\n"},
  {(char*)"RenderCallsEnabledOn", PyvtkPVGenericRenderWindowInteractor_RenderCallsEnabledOn, METH_VARARGS,
   (char*)"V.RenderCallsEnabledOn()\nC++: void RenderCallsEnabledOn()\n\nIn some cases, we may not want to automatically render in\nresponse to mouse interaction events.  In those cases, set\nRenderCallsEnabled to 0.  By default, this value is set to 1 so\nthat render calls are enabled.\n"},
  {(char*)"RenderCallsEnabledOff", PyvtkPVGenericRenderWindowInteractor_RenderCallsEnabledOff, METH_VARARGS,
   (char*)"V.RenderCallsEnabledOff()\nC++: void RenderCallsEnabledOff()\n\nIn some cases, we may not want to automatically render in\nresponse to mouse interaction events.  In those cases, set\nRenderCallsEnabled to 0.  By default, this value is set to 1 so\nthat render calls are enabled.\n"},
  {(char*)"SetNonInteractiveRenderDelay", PyvtkPVGenericRenderWindowInteractor_SetNonInteractiveRenderDelay, METH_VARARGS,
   (char*)"V.SetNonInteractiveRenderDelay(int)\nC++: void SetNonInteractiveRenderDelay(unsigned long a)\n\nvtkPVGenericRenderWindowInteractor allows applications to support\n\"delayed-switch-to-non-interative-render\" mode i.e. when user\nstops interacting, the application does not want the scene to be\nimmediately rendered in non-interactive mode, but wait for a few\nseconds. This will allow the user to do multiple adjustments\nwhile staying locked in the interactive mode. For that, the\napplication must first set SetNonInteractiveRenderDelay(unsigned\nlong milliseconds). If milliseconds==0, then the application\nswitches to non-interactive mode immediately. Note, currently\ndelayed render is only supported when compiled with\nPARAVIEW_ENABLE_QT_SUPPORT set to ON.\n"},
  {(char*)"GetNonInteractiveRenderDelay", PyvtkPVGenericRenderWindowInteractor_GetNonInteractiveRenderDelay, METH_VARARGS,
   (char*)"V.GetNonInteractiveRenderDelay() -> int\nC++: unsigned long GetNonInteractiveRenderDelay()\n\nvtkPVGenericRenderWindowInteractor allows applications to support\n\"delayed-switch-to-non-interative-render\" mode i.e. when user\nstops interacting, the application does not want the scene to be\nimmediately rendered in non-interactive mode, but wait for a few\nseconds. This will allow the user to do multiple adjustments\nwhile staying locked in the interactive mode. For that, the\napplication must first set SetNonInteractiveRenderDelay(unsigned\nlong milliseconds). If milliseconds==0, then the application\nswitches to non-interactive mode immediately. Note, currently\ndelayed render is only supported when compiled with\nPARAVIEW_ENABLE_QT_SUPPORT set to ON.\n"},
  {(char*)"Render", PyvtkPVGenericRenderWindowInteractor_Render, METH_VARARGS,
   (char*)"V.Render()\nC++: virtual void Render()\n\nTriggers a render.\n"},
  {(char*)"OnLeftPress", PyvtkPVGenericRenderWindowInteractor_OnLeftPress, METH_VARARGS,
   (char*)"V.OnLeftPress(int, int, int, int)\nC++: virtual void OnLeftPress(int x, int y, int control,\n    int shift)\n\nThese methods merely call SetEventInformation() and then fire the\nappropriate vtk-event.\n"},
  {(char*)"OnMiddlePress", PyvtkPVGenericRenderWindowInteractor_OnMiddlePress, METH_VARARGS,
   (char*)"V.OnMiddlePress(int, int, int, int)\nC++: virtual void OnMiddlePress(int x, int y, int control,\n    int shift)\n\nThese methods merely call SetEventInformation() and then fire the\nappropriate vtk-event.\n"},
  {(char*)"OnRightPress", PyvtkPVGenericRenderWindowInteractor_OnRightPress, METH_VARARGS,
   (char*)"V.OnRightPress(int, int, int, int)\nC++: virtual void OnRightPress(int x, int y, int control,\n    int shift)\n\nThese methods merely call SetEventInformation() and then fire the\nappropriate vtk-event.\n"},
  {(char*)"OnLeftRelease", PyvtkPVGenericRenderWindowInteractor_OnLeftRelease, METH_VARARGS,
   (char*)"V.OnLeftRelease(int, int, int, int)\nC++: virtual void OnLeftRelease(int x, int y, int control,\n    int shift)\n\nThese methods merely call SetEventInformation() and then fire the\nappropriate vtk-event.\n"},
  {(char*)"OnMiddleRelease", PyvtkPVGenericRenderWindowInteractor_OnMiddleRelease, METH_VARARGS,
   (char*)"V.OnMiddleRelease(int, int, int, int)\nC++: virtual void OnMiddleRelease(int x, int y, int control,\n    int shift)\n\nThese methods merely call SetEventInformation() and then fire the\nappropriate vtk-event.\n"},
  {(char*)"OnRightRelease", PyvtkPVGenericRenderWindowInteractor_OnRightRelease, METH_VARARGS,
   (char*)"V.OnRightRelease(int, int, int, int)\nC++: virtual void OnRightRelease(int x, int y, int control,\n    int shift)\n\nThese methods merely call SetEventInformation() and then fire the\nappropriate vtk-event.\n"},
  {(char*)"OnMove", PyvtkPVGenericRenderWindowInteractor_OnMove, METH_VARARGS,
   (char*)"V.OnMove(int, int)\nC++: virtual void OnMove(int x, int y)\n\nThese methods merely call SetEventInformation() and then fire the\nappropriate vtk-event.\n"},
  {(char*)"OnKeyPress", PyvtkPVGenericRenderWindowInteractor_OnKeyPress, METH_VARARGS,
   (char*)"V.OnKeyPress(char, int, int)\nC++: virtual void OnKeyPress(char keyCode, int x, int y)\n\nThese methods merely call SetEventInformation() and then fire the\nappropriate vtk-event.\n"},
  {(char*)"SetInteractorStyle", PyvtkPVGenericRenderWindowInteractor_SetInteractorStyle, METH_VARARGS,
   (char*)"V.SetInteractorStyle(vtkInteractorObserver)\nC++: virtual void SetInteractorStyle(vtkInteractorObserver *)\n\n"},
  {(char*)"GetCenterOfRotation", PyvtkPVGenericRenderWindowInteractor_GetCenterOfRotation, METH_VARARGS,
   (char*)"V.GetCenterOfRotation() -> (float, float, float)\nC++: double *GetCenterOfRotation()\n\n"},
  {(char*)"SetCenterOfRotation", PyvtkPVGenericRenderWindowInteractor_SetCenterOfRotation, METH_VARARGS,
   (char*)"V.SetCenterOfRotation(float, float, float)\nC++: void SetCenterOfRotation(double x, double y, double z)\nV.SetCenterOfRotation([float, float, float])\nC++: void SetCenterOfRotation(double xyz[3])\n\nPropagates the center to the interactor style. Currently, center\nof rotation is propagated only with the interactor style is a\nvtkPVInteractorStyle or subclass.\n"},
  {(char*)"SetRotationFactor", PyvtkPVGenericRenderWindowInteractor_SetRotationFactor, METH_VARARGS,
   (char*)"V.SetRotationFactor(float)\nC++: void SetRotationFactor(double factor)\n\nPropagates the rotation factor to the interactor style.\n"},
  {(char*)"GetRotationFactor", PyvtkPVGenericRenderWindowInteractor_GetRotationFactor, METH_VARARGS,
   (char*)"V.GetRotationFactor() -> float\nC++: double GetRotationFactor()\n\nPropagates the rotation factor to the interactor style.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkPVGenericRenderWindowInteractor_StaticNew()
{
  return vtkPVGenericRenderWindowInteractor::New();
}

PyObject *PyVTKClass_vtkPVGenericRenderWindowInteractorNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkPVGenericRenderWindowInteractor_StaticNew,
    PyvtkPVGenericRenderWindowInteractor_Methods,
    "vtkPVGenericRenderWindowInteractor", modulename,
    NULL, NULL,
    PyvtkPVGenericRenderWindowInteractor_Doc(),
    PyVTKClass_vtkRenderWindowInteractorNew(modulename));

  if (cls)
    {
    PyObject *d = PyVTKClass_GetDict(cls);
    PyObject *o;

    for (int c = 0; c < 2; c++)
      {
      static const struct { const char *name; int value; }
        constants[2] = {
          { "BeginDelayNonInteractiveRenderEvent", vtkPVGenericRenderWindowInteractor::BeginDelayNonInteractiveRenderEvent },
          { "EndDelayNonInteractiveRenderEvent", vtkPVGenericRenderWindowInteractor::EndDelayNonInteractiveRenderEvent },
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

const char **PyvtkPVGenericRenderWindowInteractor_Doc()
{
  static const char *docstring[] = {
    "vtkPVGenericRenderWindowInteractor\n\n",
    "Superclass: vtkRenderWindowInteractor\n\n",
    "\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPVGenericRenderWindowInteractor(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPVGenericRenderWindowInteractorNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPVGenericRenderWindowInteractor", o) != 0)
    {
    Py_DECREF(o);
    }

}

