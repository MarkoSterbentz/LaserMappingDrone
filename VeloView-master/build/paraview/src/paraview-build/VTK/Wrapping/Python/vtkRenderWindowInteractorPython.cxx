// python wrapper for vtkRenderWindowInteractor
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkRenderWindowInteractor.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkRenderWindowInteractor(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkRenderWindowInteractorNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkRenderWindowInteractor_Doc();


static PyObject *
PyvtkRenderWindowInteractor_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkRenderWindowInteractor::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkRenderWindowInteractor::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkRenderWindowInteractor *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkRenderWindowInteractor::NewInstance());

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
PyvtkRenderWindowInteractor_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkRenderWindowInteractor *tempr = vtkRenderWindowInteractor::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Initialize();
      }
    else
      {
      op->vtkRenderWindowInteractor::Initialize();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_ReInitialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReInitialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ReInitialize();
      }
    else
      {
      op->vtkRenderWindowInteractor::ReInitialize();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_Start(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Start");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Start();
      }
    else
      {
      op->vtkRenderWindowInteractor::Start();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_Enable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Enable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Enable();
      }
    else
      {
      op->vtkRenderWindowInteractor::Enable();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_Disable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Disable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Disable();
      }
    else
      {
      op->vtkRenderWindowInteractor::Disable();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_GetEnabled(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEnabled");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetEnabled() :
      op->vtkRenderWindowInteractor::GetEnabled());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_EnableRenderOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EnableRenderOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->EnableRenderOn();
      }
    else
      {
      op->vtkRenderWindowInteractor::EnableRenderOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_EnableRenderOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EnableRenderOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->EnableRenderOff();
      }
    else
      {
      op->vtkRenderWindowInteractor::EnableRenderOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_SetEnableRender(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEnableRender");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetEnableRender(temp0);
      }
    else
      {
      op->vtkRenderWindowInteractor::SetEnableRender(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_GetEnableRender(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEnableRender");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetEnableRender() :
      op->vtkRenderWindowInteractor::GetEnableRender());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_SetRenderWindow(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRenderWindow");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  vtkRenderWindow *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkRenderWindow"))
    {
    if (ap.IsBound())
      {
      op->SetRenderWindow(temp0);
      }
    else
      {
      op->vtkRenderWindowInteractor::SetRenderWindow(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_GetRenderWindow(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRenderWindow");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkRenderWindow *tempr = (ap.IsBound() ?
      op->GetRenderWindow() :
      op->vtkRenderWindowInteractor::GetRenderWindow());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_UpdateSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  int temp0;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->UpdateSize(temp0, temp1);
      }
    else
      {
      op->vtkRenderWindowInteractor::UpdateSize(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_CreateTimer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateTimer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->CreateTimer(temp0) :
      op->vtkRenderWindowInteractor::CreateTimer(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_DestroyTimer_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DestroyTimer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->DestroyTimer() :
      op->vtkRenderWindowInteractor::DestroyTimer());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkRenderWindowInteractor_DestroyTimer_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DestroyTimer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->DestroyTimer(temp0) :
      op->vtkRenderWindowInteractor::DestroyTimer(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkRenderWindowInteractor_DestroyTimer(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 0:
      return PyvtkRenderWindowInteractor_DestroyTimer_s1(self, args);
    case 1:
      return PyvtkRenderWindowInteractor_DestroyTimer_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "DestroyTimer");
  return NULL;
}



static PyObject *
PyvtkRenderWindowInteractor_CreateRepeatingTimer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateRepeatingTimer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  unsigned long temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->CreateRepeatingTimer(temp0) :
      op->vtkRenderWindowInteractor::CreateRepeatingTimer(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_CreateOneShotTimer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateOneShotTimer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  unsigned long temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->CreateOneShotTimer(temp0) :
      op->vtkRenderWindowInteractor::CreateOneShotTimer(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_IsOneShotTimer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsOneShotTimer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsOneShotTimer(temp0) :
      op->vtkRenderWindowInteractor::IsOneShotTimer(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_GetTimerDuration_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTimerDuration");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    unsigned long tempr = (ap.IsBound() ?
      op->GetTimerDuration(temp0) :
      op->vtkRenderWindowInteractor::GetTimerDuration(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkRenderWindowInteractor_GetTimerDuration_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTimerDuration");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned long tempr = (ap.IsBound() ?
      op->GetTimerDuration() :
      op->vtkRenderWindowInteractor::GetTimerDuration());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkRenderWindowInteractor_GetTimerDuration(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkRenderWindowInteractor_GetTimerDuration_s1(self, args);
    case 0:
      return PyvtkRenderWindowInteractor_GetTimerDuration_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetTimerDuration");
  return NULL;
}



static PyObject *
PyvtkRenderWindowInteractor_ResetTimer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ResetTimer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->ResetTimer(temp0) :
      op->vtkRenderWindowInteractor::ResetTimer(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_GetVTKTimerId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVTKTimerId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->GetVTKTimerId(temp0) :
      op->vtkRenderWindowInteractor::GetVTKTimerId(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_SetTimerDuration(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTimerDuration");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

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
      op->vtkRenderWindowInteractor::SetTimerDuration(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_GetTimerDurationMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTimerDurationMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned long tempr = (ap.IsBound() ?
      op->GetTimerDurationMinValue() :
      op->vtkRenderWindowInteractor::GetTimerDurationMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_GetTimerDurationMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTimerDurationMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned long tempr = (ap.IsBound() ?
      op->GetTimerDurationMaxValue() :
      op->vtkRenderWindowInteractor::GetTimerDurationMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_SetTimerEventId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTimerEventId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetTimerEventId(temp0);
      }
    else
      {
      op->vtkRenderWindowInteractor::SetTimerEventId(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_GetTimerEventId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTimerEventId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetTimerEventId() :
      op->vtkRenderWindowInteractor::GetTimerEventId());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_SetTimerEventType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTimerEventType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetTimerEventType(temp0);
      }
    else
      {
      op->vtkRenderWindowInteractor::SetTimerEventType(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_GetTimerEventType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTimerEventType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetTimerEventType() :
      op->vtkRenderWindowInteractor::GetTimerEventType());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_SetTimerEventDuration(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTimerEventDuration");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetTimerEventDuration(temp0);
      }
    else
      {
      op->vtkRenderWindowInteractor::SetTimerEventDuration(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_GetTimerEventDuration(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTimerEventDuration");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetTimerEventDuration() :
      op->vtkRenderWindowInteractor::GetTimerEventDuration());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_SetTimerEventPlatformId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTimerEventPlatformId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetTimerEventPlatformId(temp0);
      }
    else
      {
      op->vtkRenderWindowInteractor::SetTimerEventPlatformId(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_GetTimerEventPlatformId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTimerEventPlatformId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetTimerEventPlatformId() :
      op->vtkRenderWindowInteractor::GetTimerEventPlatformId());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_TerminateApp(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TerminateApp");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->TerminateApp();
      }
    else
      {
      op->vtkRenderWindowInteractor::TerminateApp();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_SetInteractorStyle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInteractorStyle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

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
      op->vtkRenderWindowInteractor::SetInteractorStyle(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_GetInteractorStyle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInteractorStyle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkInteractorObserver *tempr = (ap.IsBound() ?
      op->GetInteractorStyle() :
      op->vtkRenderWindowInteractor::GetInteractorStyle());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_SetLightFollowCamera(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLightFollowCamera");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetLightFollowCamera(temp0);
      }
    else
      {
      op->vtkRenderWindowInteractor::SetLightFollowCamera(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_GetLightFollowCamera(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLightFollowCamera");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetLightFollowCamera() :
      op->vtkRenderWindowInteractor::GetLightFollowCamera());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_LightFollowCameraOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LightFollowCameraOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->LightFollowCameraOn();
      }
    else
      {
      op->vtkRenderWindowInteractor::LightFollowCameraOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_LightFollowCameraOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LightFollowCameraOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->LightFollowCameraOff();
      }
    else
      {
      op->vtkRenderWindowInteractor::LightFollowCameraOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_SetDesiredUpdateRate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDesiredUpdateRate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetDesiredUpdateRate(temp0);
      }
    else
      {
      op->vtkRenderWindowInteractor::SetDesiredUpdateRate(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_GetDesiredUpdateRateMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDesiredUpdateRateMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetDesiredUpdateRateMinValue() :
      op->vtkRenderWindowInteractor::GetDesiredUpdateRateMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_GetDesiredUpdateRateMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDesiredUpdateRateMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetDesiredUpdateRateMaxValue() :
      op->vtkRenderWindowInteractor::GetDesiredUpdateRateMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_GetDesiredUpdateRate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDesiredUpdateRate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetDesiredUpdateRate() :
      op->vtkRenderWindowInteractor::GetDesiredUpdateRate());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_SetStillUpdateRate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetStillUpdateRate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetStillUpdateRate(temp0);
      }
    else
      {
      op->vtkRenderWindowInteractor::SetStillUpdateRate(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_GetStillUpdateRateMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStillUpdateRateMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetStillUpdateRateMinValue() :
      op->vtkRenderWindowInteractor::GetStillUpdateRateMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_GetStillUpdateRateMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStillUpdateRateMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetStillUpdateRateMaxValue() :
      op->vtkRenderWindowInteractor::GetStillUpdateRateMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_GetStillUpdateRate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStillUpdateRate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetStillUpdateRate() :
      op->vtkRenderWindowInteractor::GetStillUpdateRate());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_GetInitialized(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInitialized");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetInitialized() :
      op->vtkRenderWindowInteractor::GetInitialized());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_SetPicker(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPicker");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  vtkAbstractPicker *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAbstractPicker"))
    {
    if (ap.IsBound())
      {
      op->SetPicker(temp0);
      }
    else
      {
      op->vtkRenderWindowInteractor::SetPicker(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_GetPicker(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPicker");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkAbstractPicker *tempr = (ap.IsBound() ?
      op->GetPicker() :
      op->vtkRenderWindowInteractor::GetPicker());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_CreateDefaultPicker(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateDefaultPicker");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkAbstractPropPicker *tempr = (ap.IsBound() ?
      op->CreateDefaultPicker() :
      op->vtkRenderWindowInteractor::CreateDefaultPicker());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_SetPickingManager(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPickingManager");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  vtkPickingManager *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPickingManager"))
    {
    if (ap.IsBound())
      {
      op->SetPickingManager(temp0);
      }
    else
      {
      op->vtkRenderWindowInteractor::SetPickingManager(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_GetPickingManager(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPickingManager");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPickingManager *tempr = (ap.IsBound() ?
      op->GetPickingManager() :
      op->vtkRenderWindowInteractor::GetPickingManager());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_ExitCallback(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ExitCallback");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ExitCallback();
      }
    else
      {
      op->vtkRenderWindowInteractor::ExitCallback();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_UserCallback(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UserCallback");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->UserCallback();
      }
    else
      {
      op->vtkRenderWindowInteractor::UserCallback();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_StartPickCallback(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StartPickCallback");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->StartPickCallback();
      }
    else
      {
      op->vtkRenderWindowInteractor::StartPickCallback();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_EndPickCallback(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EndPickCallback");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->EndPickCallback();
      }
    else
      {
      op->vtkRenderWindowInteractor::EndPickCallback();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_GetMousePosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMousePosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  int *temp0 = NULL;
  int *save0 = NULL;
  int small0[8];
  int size0 = 0;
  int *temp1 = NULL;
  int *save1 = NULL;
  int small1[8];
  int size1 = 0;
  PyObject *result = NULL;

  if (op)
    {
    size0 = ap.GetArgSize(0);
    temp0 = small0;
    if (size0 > 4)
      {
      temp0 = new int[2*size0];
      }
    save0 = &temp0[size0];
    size1 = ap.GetArgSize(1);
    temp1 = small1;
    if (size1 > 4)
      {
      temp1 = new int[2*size1];
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
      op->GetMousePosition(temp0, temp1);
      }
    else
      {
      op->vtkRenderWindowInteractor::GetMousePosition(temp0, temp1);
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
PyvtkRenderWindowInteractor_HideCursor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HideCursor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->HideCursor();
      }
    else
      {
      op->vtkRenderWindowInteractor::HideCursor();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_ShowCursor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShowCursor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ShowCursor();
      }
    else
      {
      op->vtkRenderWindowInteractor::ShowCursor();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_Render(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Render");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Render();
      }
    else
      {
      op->vtkRenderWindowInteractor::Render();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_FlyTo_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FlyTo");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  vtkRenderer *temp0 = NULL;
  double temp1;
  double temp2;
  double temp3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(4) &&
      ap.GetVTKObject(temp0, "vtkRenderer") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
    {
    if (ap.IsBound())
      {
      op->FlyTo(temp0, temp1, temp2, temp3);
      }
    else
      {
      op->vtkRenderWindowInteractor::FlyTo(temp0, temp1, temp2, temp3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkRenderWindowInteractor_FlyTo_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FlyTo");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  vtkRenderer *temp0 = NULL;
  double *temp1 = NULL;
  double *save1 = NULL;
  double small1[8];
  int size1 = 0;
  PyObject *result = NULL;

  if (op)
    {
    size1 = ap.GetArgSize(1);
    temp1 = small1;
    if (size1 > 4)
      {
      temp1 = new double[2*size1];
      }
    save1 = &temp1[size1];
    }

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkRenderer") &&
      ap.GetArray(temp1, size1))
    {
    ap.SaveArray(temp1, save1, size1);

    if (ap.IsBound())
      {
      op->FlyTo(temp0, temp1);
      }
    else
      {
      op->vtkRenderWindowInteractor::FlyTo(temp0, temp1);
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
PyvtkRenderWindowInteractor_FlyTo(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 4:
      return PyvtkRenderWindowInteractor_FlyTo_s1(self, args);
    case 2:
      return PyvtkRenderWindowInteractor_FlyTo_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "FlyTo");
  return NULL;
}



static PyObject *
PyvtkRenderWindowInteractor_FlyToImage_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FlyToImage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  vtkRenderer *temp0 = NULL;
  double temp1;
  double temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkRenderer") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      op->FlyToImage(temp0, temp1, temp2);
      }
    else
      {
      op->vtkRenderWindowInteractor::FlyToImage(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkRenderWindowInteractor_FlyToImage_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FlyToImage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  vtkRenderer *temp0 = NULL;
  double *temp1 = NULL;
  double *save1 = NULL;
  double small1[8];
  int size1 = 0;
  PyObject *result = NULL;

  if (op)
    {
    size1 = ap.GetArgSize(1);
    temp1 = small1;
    if (size1 > 4)
      {
      temp1 = new double[2*size1];
      }
    save1 = &temp1[size1];
    }

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkRenderer") &&
      ap.GetArray(temp1, size1))
    {
    ap.SaveArray(temp1, save1, size1);

    if (ap.IsBound())
      {
      op->FlyToImage(temp0, temp1);
      }
    else
      {
      op->vtkRenderWindowInteractor::FlyToImage(temp0, temp1);
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
PyvtkRenderWindowInteractor_FlyToImage(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkRenderWindowInteractor_FlyToImage_s1(self, args);
    case 2:
      return PyvtkRenderWindowInteractor_FlyToImage_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "FlyToImage");
  return NULL;
}



static PyObject *
PyvtkRenderWindowInteractor_SetNumberOfFlyFrames(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfFlyFrames");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetNumberOfFlyFrames(temp0);
      }
    else
      {
      op->vtkRenderWindowInteractor::SetNumberOfFlyFrames(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_GetNumberOfFlyFramesMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfFlyFramesMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfFlyFramesMinValue() :
      op->vtkRenderWindowInteractor::GetNumberOfFlyFramesMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_GetNumberOfFlyFramesMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfFlyFramesMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfFlyFramesMaxValue() :
      op->vtkRenderWindowInteractor::GetNumberOfFlyFramesMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_GetNumberOfFlyFrames(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfFlyFrames");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfFlyFrames() :
      op->vtkRenderWindowInteractor::GetNumberOfFlyFrames());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_SetDolly(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDolly");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetDolly(temp0);
      }
    else
      {
      op->vtkRenderWindowInteractor::SetDolly(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_GetDolly(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDolly");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetDolly() :
      op->vtkRenderWindowInteractor::GetDolly());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_GetEventPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEventPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  int sizer = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int *tempr = (ap.IsBound() ?
      op->GetEventPosition() :
      op->vtkRenderWindowInteractor::GetEventPosition());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_GetLastEventPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLastEventPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  int sizer = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int *tempr = (ap.IsBound() ?
      op->GetLastEventPosition() :
      op->vtkRenderWindowInteractor::GetLastEventPosition());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_SetLastEventPosition_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLastEventPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  int temp0;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetLastEventPosition(temp0, temp1);
      }
    else
      {
      op->vtkRenderWindowInteractor::SetLastEventPosition(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkRenderWindowInteractor_SetLastEventPosition_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLastEventPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  int temp0[2];
  const int size0 = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetLastEventPosition(temp0);
      }
    else
      {
      op->vtkRenderWindowInteractor::SetLastEventPosition(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkRenderWindowInteractor_SetLastEventPosition(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkRenderWindowInteractor_SetLastEventPosition_s1(self, args);
    case 1:
      return PyvtkRenderWindowInteractor_SetLastEventPosition_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetLastEventPosition");
  return NULL;
}



static PyObject *
PyvtkRenderWindowInteractor_SetEventPosition_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEventPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  int temp0;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetEventPosition(temp0, temp1);
      }
    else
      {
      op->vtkRenderWindowInteractor::SetEventPosition(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkRenderWindowInteractor_SetEventPosition_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEventPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  int temp0[2];
  int save0[2];
  const int size0 = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    if (ap.IsBound())
      {
      op->SetEventPosition(temp0);
      }
    else
      {
      op->vtkRenderWindowInteractor::SetEventPosition(temp0);
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
PyvtkRenderWindowInteractor_SetEventPosition_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEventPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  int temp0;
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
      op->SetEventPosition(temp0, temp1, temp2);
      }
    else
      {
      op->vtkRenderWindowInteractor::SetEventPosition(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkRenderWindowInteractor_SetEventPosition_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEventPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  int temp0[2];
  int save0[2];
  const int size0 = 2;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1))
    {
    ap.SaveArray(temp0, save0, size0);

    if (ap.IsBound())
      {
      op->SetEventPosition(temp0, temp1);
      }
    else
      {
      op->vtkRenderWindowInteractor::SetEventPosition(temp0, temp1);
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

static PyMethodDef PyvtkRenderWindowInteractor_SetEventPosition_Methods[] = {
  {NULL, PyvtkRenderWindowInteractor_SetEventPosition_s1, METH_VARARGS,
   (char*)"@ii"},
  {NULL, PyvtkRenderWindowInteractor_SetEventPosition_s4, METH_VARARGS,
   (char*)"@Oi *i"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkRenderWindowInteractor_SetEventPosition(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkRenderWindowInteractor_SetEventPosition_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkRenderWindowInteractor_SetEventPosition_s2(self, args);
    case 3:
      return PyvtkRenderWindowInteractor_SetEventPosition_s3(self, args);
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetEventPosition");
  return NULL;
}



static PyObject *
PyvtkRenderWindowInteractor_SetEventPositionFlipY_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEventPositionFlipY");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  int temp0;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetEventPositionFlipY(temp0, temp1);
      }
    else
      {
      op->vtkRenderWindowInteractor::SetEventPositionFlipY(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkRenderWindowInteractor_SetEventPositionFlipY_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEventPositionFlipY");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  int temp0[2];
  int save0[2];
  const int size0 = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    if (ap.IsBound())
      {
      op->SetEventPositionFlipY(temp0);
      }
    else
      {
      op->vtkRenderWindowInteractor::SetEventPositionFlipY(temp0);
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
PyvtkRenderWindowInteractor_SetEventPositionFlipY_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEventPositionFlipY");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  int temp0;
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
      op->SetEventPositionFlipY(temp0, temp1, temp2);
      }
    else
      {
      op->vtkRenderWindowInteractor::SetEventPositionFlipY(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkRenderWindowInteractor_SetEventPositionFlipY_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEventPositionFlipY");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  int temp0[2];
  int save0[2];
  const int size0 = 2;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1))
    {
    ap.SaveArray(temp0, save0, size0);

    if (ap.IsBound())
      {
      op->SetEventPositionFlipY(temp0, temp1);
      }
    else
      {
      op->vtkRenderWindowInteractor::SetEventPositionFlipY(temp0, temp1);
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

static PyMethodDef PyvtkRenderWindowInteractor_SetEventPositionFlipY_Methods[] = {
  {NULL, PyvtkRenderWindowInteractor_SetEventPositionFlipY_s1, METH_VARARGS,
   (char*)"@ii"},
  {NULL, PyvtkRenderWindowInteractor_SetEventPositionFlipY_s4, METH_VARARGS,
   (char*)"@Oi *i"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkRenderWindowInteractor_SetEventPositionFlipY(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkRenderWindowInteractor_SetEventPositionFlipY_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkRenderWindowInteractor_SetEventPositionFlipY_s2(self, args);
    case 3:
      return PyvtkRenderWindowInteractor_SetEventPositionFlipY_s3(self, args);
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetEventPositionFlipY");
  return NULL;
}



static PyObject *
PyvtkRenderWindowInteractor_GetEventPositions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEventPositions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int *tempr = (ap.IsBound() ?
      op->GetEventPositions(temp0) :
      op->vtkRenderWindowInteractor::GetEventPositions(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_GetLastEventPositions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLastEventPositions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int *tempr = (ap.IsBound() ?
      op->GetLastEventPositions(temp0) :
      op->vtkRenderWindowInteractor::GetLastEventPositions(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_SetAltKey(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAltKey");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetAltKey(temp0);
      }
    else
      {
      op->vtkRenderWindowInteractor::SetAltKey(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_GetAltKey(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAltKey");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetAltKey() :
      op->vtkRenderWindowInteractor::GetAltKey());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_SetControlKey(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetControlKey");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetControlKey(temp0);
      }
    else
      {
      op->vtkRenderWindowInteractor::SetControlKey(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_GetControlKey(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetControlKey");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetControlKey() :
      op->vtkRenderWindowInteractor::GetControlKey());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_SetShiftKey(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetShiftKey");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetShiftKey(temp0);
      }
    else
      {
      op->vtkRenderWindowInteractor::SetShiftKey(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_GetShiftKey(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetShiftKey");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetShiftKey() :
      op->vtkRenderWindowInteractor::GetShiftKey());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_SetKeyCode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetKeyCode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  char temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetKeyCode(temp0);
      }
    else
      {
      op->vtkRenderWindowInteractor::SetKeyCode(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_GetKeyCode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetKeyCode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char tempr = (ap.IsBound() ?
      op->GetKeyCode() :
      op->vtkRenderWindowInteractor::GetKeyCode());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_SetRepeatCount(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRepeatCount");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetRepeatCount(temp0);
      }
    else
      {
      op->vtkRenderWindowInteractor::SetRepeatCount(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_GetRepeatCount(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRepeatCount");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetRepeatCount() :
      op->vtkRenderWindowInteractor::GetRepeatCount());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_SetKeySym(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetKeySym");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetKeySym(temp0);
      }
    else
      {
      op->vtkRenderWindowInteractor::SetKeySym(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_GetKeySym(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetKeySym");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetKeySym() :
      op->vtkRenderWindowInteractor::GetKeySym());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_SetPointerIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPointerIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetPointerIndex(temp0);
      }
    else
      {
      op->vtkRenderWindowInteractor::SetPointerIndex(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_GetPointerIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointerIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetPointerIndex() :
      op->vtkRenderWindowInteractor::GetPointerIndex());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_SetEventInformation_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEventInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  int temp0;
  int temp1;
  int temp2;
  int temp3;
  char temp4;
  int temp5;
  char *temp6 = NULL;
  int temp7;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(8) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5) &&
      ap.GetValue(temp6) &&
      ap.GetValue(temp7))
    {
    if (ap.IsBound())
      {
      op->SetEventInformation(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7);
      }
    else
      {
      op->vtkRenderWindowInteractor::SetEventInformation(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkRenderWindowInteractor_SetEventInformation_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEventInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  int temp0;
  int temp1;
  int temp2 = 0;
  int temp3 = 0;
  char temp4 = 0;
  int temp5 = 0;
  char *temp6 = 0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2, 7) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)) &&
      (ap.NoArgsLeft() || ap.GetValue(temp3)) &&
      (ap.NoArgsLeft() || ap.GetValue(temp4)) &&
      (ap.NoArgsLeft() || ap.GetValue(temp5)) &&
      (ap.NoArgsLeft() || ap.GetValue(temp6)))
    {
    if (ap.IsBound())
      {
      op->SetEventInformation(temp0, temp1, temp2, temp3, temp4, temp5, temp6);
      }
    else
      {
      op->vtkRenderWindowInteractor::SetEventInformation(temp0, temp1, temp2, temp3, temp4, temp5, temp6);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkRenderWindowInteractor_SetEventInformation(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 8:
      return PyvtkRenderWindowInteractor_SetEventInformation_s1(self, args);
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
      return PyvtkRenderWindowInteractor_SetEventInformation_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetEventInformation");
  return NULL;
}



static PyObject *
PyvtkRenderWindowInteractor_SetEventInformationFlipY_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEventInformationFlipY");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  int temp0;
  int temp1;
  int temp2;
  int temp3;
  char temp4;
  int temp5;
  char *temp6 = NULL;
  int temp7;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(8) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5) &&
      ap.GetValue(temp6) &&
      ap.GetValue(temp7))
    {
    if (ap.IsBound())
      {
      op->SetEventInformationFlipY(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7);
      }
    else
      {
      op->vtkRenderWindowInteractor::SetEventInformationFlipY(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkRenderWindowInteractor_SetEventInformationFlipY_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEventInformationFlipY");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  int temp0;
  int temp1;
  int temp2 = 0;
  int temp3 = 0;
  char temp4 = 0;
  int temp5 = 0;
  char *temp6 = 0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2, 7) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)) &&
      (ap.NoArgsLeft() || ap.GetValue(temp3)) &&
      (ap.NoArgsLeft() || ap.GetValue(temp4)) &&
      (ap.NoArgsLeft() || ap.GetValue(temp5)) &&
      (ap.NoArgsLeft() || ap.GetValue(temp6)))
    {
    if (ap.IsBound())
      {
      op->SetEventInformationFlipY(temp0, temp1, temp2, temp3, temp4, temp5, temp6);
      }
    else
      {
      op->vtkRenderWindowInteractor::SetEventInformationFlipY(temp0, temp1, temp2, temp3, temp4, temp5, temp6);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkRenderWindowInteractor_SetEventInformationFlipY(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 8:
      return PyvtkRenderWindowInteractor_SetEventInformationFlipY_s1(self, args);
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
      return PyvtkRenderWindowInteractor_SetEventInformationFlipY_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetEventInformationFlipY");
  return NULL;
}



static PyObject *
PyvtkRenderWindowInteractor_SetKeyEventInformation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetKeyEventInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  int temp0 = 0;
  int temp1 = 0;
  char temp2 = 0;
  int temp3 = 0;
  char *temp4 = 0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0, 5) &&
      (ap.NoArgsLeft() || ap.GetValue(temp0)) &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)) &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)) &&
      (ap.NoArgsLeft() || ap.GetValue(temp3)) &&
      (ap.NoArgsLeft() || ap.GetValue(temp4)))
    {
    if (ap.IsBound())
      {
      op->SetKeyEventInformation(temp0, temp1, temp2, temp3, temp4);
      }
    else
      {
      op->vtkRenderWindowInteractor::SetKeyEventInformation(temp0, temp1, temp2, temp3, temp4);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_SetSize_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  int temp0;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetSize(temp0, temp1);
      }
    else
      {
      op->vtkRenderWindowInteractor::SetSize(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkRenderWindowInteractor_SetSize_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  int temp0[2];
  const int size0 = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetSize(temp0);
      }
    else
      {
      op->vtkRenderWindowInteractor::SetSize(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkRenderWindowInteractor_SetSize(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkRenderWindowInteractor_SetSize_s1(self, args);
    case 1:
      return PyvtkRenderWindowInteractor_SetSize_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetSize");
  return NULL;
}



static PyObject *
PyvtkRenderWindowInteractor_GetSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  int sizer = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int *tempr = (ap.IsBound() ?
      op->GetSize() :
      op->vtkRenderWindowInteractor::GetSize());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_SetEventSize_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEventSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  int temp0;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetEventSize(temp0, temp1);
      }
    else
      {
      op->vtkRenderWindowInteractor::SetEventSize(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkRenderWindowInteractor_SetEventSize_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEventSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  int temp0[2];
  const int size0 = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetEventSize(temp0);
      }
    else
      {
      op->vtkRenderWindowInteractor::SetEventSize(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkRenderWindowInteractor_SetEventSize(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkRenderWindowInteractor_SetEventSize_s1(self, args);
    case 1:
      return PyvtkRenderWindowInteractor_SetEventSize_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetEventSize");
  return NULL;
}



static PyObject *
PyvtkRenderWindowInteractor_GetEventSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEventSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  int sizer = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int *tempr = (ap.IsBound() ?
      op->GetEventSize() :
      op->vtkRenderWindowInteractor::GetEventSize());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_FindPokedRenderer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FindPokedRenderer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  int temp0;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    vtkRenderer *tempr = (ap.IsBound() ?
      op->FindPokedRenderer(temp0, temp1) :
      op->vtkRenderWindowInteractor::FindPokedRenderer(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_GetObserverMediator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetObserverMediator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkObserverMediator *tempr = (ap.IsBound() ?
      op->GetObserverMediator() :
      op->vtkRenderWindowInteractor::GetObserverMediator());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_SetUseTDx(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseTDx");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetUseTDx(temp0);
      }
    else
      {
      op->vtkRenderWindowInteractor::SetUseTDx(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_GetUseTDx(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseTDx");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetUseTDx() :
      op->vtkRenderWindowInteractor::GetUseTDx());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_MouseMoveEvent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MouseMoveEvent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->MouseMoveEvent();
      }
    else
      {
      op->vtkRenderWindowInteractor::MouseMoveEvent();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_RightButtonPressEvent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RightButtonPressEvent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->RightButtonPressEvent();
      }
    else
      {
      op->vtkRenderWindowInteractor::RightButtonPressEvent();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_RightButtonReleaseEvent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RightButtonReleaseEvent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->RightButtonReleaseEvent();
      }
    else
      {
      op->vtkRenderWindowInteractor::RightButtonReleaseEvent();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_LeftButtonPressEvent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LeftButtonPressEvent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->LeftButtonPressEvent();
      }
    else
      {
      op->vtkRenderWindowInteractor::LeftButtonPressEvent();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_LeftButtonReleaseEvent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LeftButtonReleaseEvent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->LeftButtonReleaseEvent();
      }
    else
      {
      op->vtkRenderWindowInteractor::LeftButtonReleaseEvent();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_MiddleButtonPressEvent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MiddleButtonPressEvent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->MiddleButtonPressEvent();
      }
    else
      {
      op->vtkRenderWindowInteractor::MiddleButtonPressEvent();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_MiddleButtonReleaseEvent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MiddleButtonReleaseEvent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->MiddleButtonReleaseEvent();
      }
    else
      {
      op->vtkRenderWindowInteractor::MiddleButtonReleaseEvent();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_MouseWheelForwardEvent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MouseWheelForwardEvent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->MouseWheelForwardEvent();
      }
    else
      {
      op->vtkRenderWindowInteractor::MouseWheelForwardEvent();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_MouseWheelBackwardEvent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MouseWheelBackwardEvent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->MouseWheelBackwardEvent();
      }
    else
      {
      op->vtkRenderWindowInteractor::MouseWheelBackwardEvent();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_ExposeEvent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ExposeEvent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ExposeEvent();
      }
    else
      {
      op->vtkRenderWindowInteractor::ExposeEvent();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_ConfigureEvent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ConfigureEvent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ConfigureEvent();
      }
    else
      {
      op->vtkRenderWindowInteractor::ConfigureEvent();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_EnterEvent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EnterEvent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->EnterEvent();
      }
    else
      {
      op->vtkRenderWindowInteractor::EnterEvent();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_LeaveEvent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LeaveEvent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->LeaveEvent();
      }
    else
      {
      op->vtkRenderWindowInteractor::LeaveEvent();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_KeyPressEvent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "KeyPressEvent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->KeyPressEvent();
      }
    else
      {
      op->vtkRenderWindowInteractor::KeyPressEvent();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_KeyReleaseEvent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "KeyReleaseEvent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->KeyReleaseEvent();
      }
    else
      {
      op->vtkRenderWindowInteractor::KeyReleaseEvent();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_CharEvent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CharEvent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->CharEvent();
      }
    else
      {
      op->vtkRenderWindowInteractor::CharEvent();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_ExitEvent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ExitEvent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ExitEvent();
      }
    else
      {
      op->vtkRenderWindowInteractor::ExitEvent();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkRenderWindowInteractor_Methods[] = {
  {(char*)"GetClassName", PyvtkRenderWindowInteractor_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkRenderWindowInteractor_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkRenderWindowInteractor_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkRenderWindowInteractor\nC++: vtkRenderWindowInteractor *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkRenderWindowInteractor_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkRenderWindowInteractor\nC++: vtkRenderWindowInteractor *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"Initialize", PyvtkRenderWindowInteractor_Initialize, METH_VARARGS,
   (char*)"V.Initialize()\nC++: virtual void Initialize()\n\nPrepare for handling events and set the Enabled flag to true.\nThis will be called automatically by Start() if the interactor is\nnot initialized, but it can be called manually if you need to\nperform any operations between initialization and the start of\nthe event loop.\n"},
  {(char*)"ReInitialize", PyvtkRenderWindowInteractor_ReInitialize, METH_VARARGS,
   (char*)"V.ReInitialize()\nC++: void ReInitialize()\n\nPrepare for handling events and set the Enabled flag to true.\nThis will be called automatically by Start() if the interactor is\nnot initialized, but it can be called manually if you need to\nperform any operations between initialization and the start of\nthe event loop.\n"},
  {(char*)"Start", PyvtkRenderWindowInteractor_Start, METH_VARARGS,
   (char*)"V.Start()\nC++: virtual void Start()\n\nStart the event loop. This is provided so that you do not have to\nimplement your own event loop. You still can use your own event\nloop if you want.\n"},
  {(char*)"Enable", PyvtkRenderWindowInteractor_Enable, METH_VARARGS,
   (char*)"V.Enable()\nC++: virtual void Enable()\n\nEnable/Disable interactions.  By default interactors are enabled\nwhen initialized.  Initialize() must be called prior to\nenabling/disabling interaction. These methods are used when a\nwindow/widget is being shared by multiple renderers and\ninteractors.  This allows a \"modal\" display where one interactor\nis active when its data is to be displayed and all other\ninteractors associated with the widget are disabled when their\ndata is not displayed.\n"},
  {(char*)"Disable", PyvtkRenderWindowInteractor_Disable, METH_VARARGS,
   (char*)"V.Disable()\nC++: virtual void Disable()\n\nEnable/Disable interactions.  By default interactors are enabled\nwhen initialized.  Initialize() must be called prior to\nenabling/disabling interaction. These methods are used when a\nwindow/widget is being shared by multiple renderers and\ninteractors.  This allows a \"modal\" display where one interactor\nis active when its data is to be displayed and all other\ninteractors associated with the widget are disabled when their\ndata is not displayed.\n"},
  {(char*)"GetEnabled", PyvtkRenderWindowInteractor_GetEnabled, METH_VARARGS,
   (char*)"V.GetEnabled() -> int\nC++: int GetEnabled()\n\nEnable/Disable interactions.  By default interactors are enabled\nwhen initialized.  Initialize() must be called prior to\nenabling/disabling interaction. These methods are used when a\nwindow/widget is being shared by multiple renderers and\ninteractors.  This allows a \"modal\" display where one interactor\nis active when its data is to be displayed and all other\ninteractors associated with the widget are disabled when their\ndata is not displayed.\n"},
  {(char*)"EnableRenderOn", PyvtkRenderWindowInteractor_EnableRenderOn, METH_VARARGS,
   (char*)"V.EnableRenderOn()\nC++: void EnableRenderOn()\n\nEnable/Disable whether vtkRenderWindowInteractor::Render() calls\nthis->RenderWindow->Render().\n"},
  {(char*)"EnableRenderOff", PyvtkRenderWindowInteractor_EnableRenderOff, METH_VARARGS,
   (char*)"V.EnableRenderOff()\nC++: void EnableRenderOff()\n\nEnable/Disable whether vtkRenderWindowInteractor::Render() calls\nthis->RenderWindow->Render().\n"},
  {(char*)"SetEnableRender", PyvtkRenderWindowInteractor_SetEnableRender, METH_VARARGS,
   (char*)"V.SetEnableRender(bool)\nC++: void SetEnableRender(bool a)\n\nEnable/Disable whether vtkRenderWindowInteractor::Render() calls\nthis->RenderWindow->Render().\n"},
  {(char*)"GetEnableRender", PyvtkRenderWindowInteractor_GetEnableRender, METH_VARARGS,
   (char*)"V.GetEnableRender() -> bool\nC++: bool GetEnableRender()\n\nEnable/Disable whether vtkRenderWindowInteractor::Render() calls\nthis->RenderWindow->Render().\n"},
  {(char*)"SetRenderWindow", PyvtkRenderWindowInteractor_SetRenderWindow, METH_VARARGS,
   (char*)"V.SetRenderWindow(vtkRenderWindow)\nC++: void SetRenderWindow(vtkRenderWindow *aren)\n\nSet/Get the rendering window being controlled by this object.\n"},
  {(char*)"GetRenderWindow", PyvtkRenderWindowInteractor_GetRenderWindow, METH_VARARGS,
   (char*)"V.GetRenderWindow() -> vtkRenderWindow\nC++: vtkRenderWindow *GetRenderWindow()\n\nSet/Get the rendering window being controlled by this object.\n"},
  {(char*)"UpdateSize", PyvtkRenderWindowInteractor_UpdateSize, METH_VARARGS,
   (char*)"V.UpdateSize(int, int)\nC++: virtual void UpdateSize(int x, int y)\n\nEvent loop notification member for window size change. Window\nsize is measured in pixels.\n"},
  {(char*)"CreateTimer", PyvtkRenderWindowInteractor_CreateTimer, METH_VARARGS,
   (char*)"V.CreateTimer(int) -> int\nC++: virtual int CreateTimer(int timerType)\n\nThis class provides two groups of methods for manipulating\ntimers.  The first group (CreateTimer(timerType) and\nDestroyTimer()) implicitly use an internal timer id (and are\npresent for backward compatibility). The second group\n(CreateRepeatingTimer(long),CreateOneShotTimer(long),\nResetTimer(int),DestroyTimer(int)) use timer ids so multiple\ntimers can be independently managed. In the first group, the\nCreateTimer() method takes an argument indicating whether the\ntimer is created the first time (timerType==VTKI_TIMER_FIRST) or\nwhether it is being reset (timerType==VTKI_TIMER_UPDATE). (In\ninitial implementations of VTK this was how one shot and\nrepeating timers were managed.) In the second group, the create\nmethods take a timer duration argument (in milliseconds) and\nreturn a timer id. Thus the ResetTimer(timerId) and\nDestroyTimer(timerId) methods take this timer id and operate on\nthe timer as appropriate. Methods are also available for\ndetermining\n"},
  {(char*)"DestroyTimer", PyvtkRenderWindowInteractor_DestroyTimer, METH_VARARGS,
   (char*)"V.DestroyTimer() -> int\nC++: virtual int DestroyTimer()\nV.DestroyTimer(int) -> int\nC++: int DestroyTimer(int timerId)\n\nThis class provides two groups of methods for manipulating\ntimers.  The first group (CreateTimer(timerType) and\nDestroyTimer()) implicitly use an internal timer id (and are\npresent for backward compatibility). The second group\n(CreateRepeatingTimer(long),CreateOneShotTimer(long),\nResetTimer(int),DestroyTimer(int)) use timer ids so multiple\ntimers can be independently managed. In the first group, the\nCreateTimer() method takes an argument indicating whether the\ntimer is created the first time (timerType==VTKI_TIMER_FIRST) or\nwhether it is being reset (timerType==VTKI_TIMER_UPDATE). (In\ninitial implementations of VTK this was how one shot and\nrepeating timers were managed.) In the second group, the create\nmethods take a timer duration argument (in milliseconds) and\nreturn a timer id. Thus the ResetTimer(timerId) and\nDestroyTimer(timerId) methods take this timer id and operate on\nthe timer as appropriate. Methods are also available for\ndetermining\n"},
  {(char*)"CreateRepeatingTimer", PyvtkRenderWindowInteractor_CreateRepeatingTimer, METH_VARARGS,
   (char*)"V.CreateRepeatingTimer(int) -> int\nC++: int CreateRepeatingTimer(unsigned long duration)\n\nCreate a repeating timer, with the specified duration (in\nmilliseconds).\n\\return the timer id.\n"},
  {(char*)"CreateOneShotTimer", PyvtkRenderWindowInteractor_CreateOneShotTimer, METH_VARARGS,
   (char*)"V.CreateOneShotTimer(int) -> int\nC++: int CreateOneShotTimer(unsigned long duration)\n\nCreate a one shot timer, with the specified duretion (in\nmilliseconds).\n\\return the timer id.\n"},
  {(char*)"IsOneShotTimer", PyvtkRenderWindowInteractor_IsOneShotTimer, METH_VARARGS,
   (char*)"V.IsOneShotTimer(int) -> int\nC++: int IsOneShotTimer(int timerId)\n\nQuery whether the specified timerId is a one shot timer.\n\\return 1 if the timer is a one shot timer.\n"},
  {(char*)"GetTimerDuration", PyvtkRenderWindowInteractor_GetTimerDuration, METH_VARARGS,
   (char*)"V.GetTimerDuration(int) -> int\nC++: unsigned long GetTimerDuration(int timerId)\nV.GetTimerDuration() -> int\nC++: unsigned long GetTimerDuration()\n\nGet the duration (in milliseconds) for the specified timerId.\n"},
  {(char*)"ResetTimer", PyvtkRenderWindowInteractor_ResetTimer, METH_VARARGS,
   (char*)"V.ResetTimer(int) -> int\nC++: int ResetTimer(int timerId)\n\nReset the specified timer.\n"},
  {(char*)"GetVTKTimerId", PyvtkRenderWindowInteractor_GetVTKTimerId, METH_VARARGS,
   (char*)"V.GetVTKTimerId(int) -> int\nC++: virtual int GetVTKTimerId(int platformTimerId)\n\nGet the VTK timer ID that corresponds to the supplied platform\nID.\n"},
  {(char*)"SetTimerDuration", PyvtkRenderWindowInteractor_SetTimerDuration, METH_VARARGS,
   (char*)"V.SetTimerDuration(int)\nC++: void SetTimerDuration(unsigned long)\n\nSpecify the default timer interval (in milliseconds). (This is\nused in conjunction with the timer methods described previously,\ne.g., CreateTimer() uses this value; and\nCreateRepeatingTimer(duration) and CreateOneShotTimer(duration)\nuse the default value if the parameter \"duration\" is less than or\nequal to zero.) Care must be taken when adjusting the timer\ninterval from the default value of 10 milliseconds--it may\nadversely affect the interactors.\n"},
  {(char*)"GetTimerDurationMinValue", PyvtkRenderWindowInteractor_GetTimerDurationMinValue, METH_VARARGS,
   (char*)"V.GetTimerDurationMinValue() -> int\nC++: unsigned long GetTimerDurationMinValue()\n\nSpecify the default timer interval (in milliseconds). (This is\nused in conjunction with the timer methods described previously,\ne.g., CreateTimer() uses this value; and\nCreateRepeatingTimer(duration) and CreateOneShotTimer(duration)\nuse the default value if the parameter \"duration\" is less than or\nequal to zero.) Care must be taken when adjusting the timer\ninterval from the default value of 10 milliseconds--it may\nadversely affect the interactors.\n"},
  {(char*)"GetTimerDurationMaxValue", PyvtkRenderWindowInteractor_GetTimerDurationMaxValue, METH_VARARGS,
   (char*)"V.GetTimerDurationMaxValue() -> int\nC++: unsigned long GetTimerDurationMaxValue()\n\nSpecify the default timer interval (in milliseconds). (This is\nused in conjunction with the timer methods described previously,\ne.g., CreateTimer() uses this value; and\nCreateRepeatingTimer(duration) and CreateOneShotTimer(duration)\nuse the default value if the parameter \"duration\" is less than or\nequal to zero.) Care must be taken when adjusting the timer\ninterval from the default value of 10 milliseconds--it may\nadversely affect the interactors.\n"},
  {(char*)"SetTimerEventId", PyvtkRenderWindowInteractor_SetTimerEventId, METH_VARARGS,
   (char*)"V.SetTimerEventId(int)\nC++: void SetTimerEventId(int a)\n\nThese methods are used to communicate information about the\ncurrently firing CreateTimerEvent or DestroyTimerEvent. The\ncaller of CreateTimerEvent sets up TimerEventId, TimerEventType\nand TimerEventDuration. The observer of CreateTimerEvent should\nset up an appropriate platform specific timer based on those\nvalues and set the TimerEventPlatformId before returning. The\ncaller of DestroyTimerEvent sets up TimerEventPlatformId. The\nobserver of DestroyTimerEvent should simply destroy the platform\nspecific timer created by CreateTimerEvent. See\nvtkGenericRenderWindowInteractor's InternalCreateTimer and\nInternalDestroyTimer for an example.\n"},
  {(char*)"GetTimerEventId", PyvtkRenderWindowInteractor_GetTimerEventId, METH_VARARGS,
   (char*)"V.GetTimerEventId() -> int\nC++: int GetTimerEventId()\n\nThese methods are used to communicate information about the\ncurrently firing CreateTimerEvent or DestroyTimerEvent. The\ncaller of CreateTimerEvent sets up TimerEventId, TimerEventType\nand TimerEventDuration. The observer of CreateTimerEvent should\nset up an appropriate platform specific timer based on those\nvalues and set the TimerEventPlatformId before returning. The\ncaller of DestroyTimerEvent sets up TimerEventPlatformId. The\nobserver of DestroyTimerEvent should simply destroy the platform\nspecific timer created by CreateTimerEvent. See\nvtkGenericRenderWindowInteractor's InternalCreateTimer and\nInternalDestroyTimer for an example.\n"},
  {(char*)"SetTimerEventType", PyvtkRenderWindowInteractor_SetTimerEventType, METH_VARARGS,
   (char*)"V.SetTimerEventType(int)\nC++: void SetTimerEventType(int a)\n\nThese methods are used to communicate information about the\ncurrently firing CreateTimerEvent or DestroyTimerEvent. The\ncaller of CreateTimerEvent sets up TimerEventId, TimerEventType\nand TimerEventDuration. The observer of CreateTimerEvent should\nset up an appropriate platform specific timer based on those\nvalues and set the TimerEventPlatformId before returning. The\ncaller of DestroyTimerEvent sets up TimerEventPlatformId. The\nobserver of DestroyTimerEvent should simply destroy the platform\nspecific timer created by CreateTimerEvent. See\nvtkGenericRenderWindowInteractor's InternalCreateTimer and\nInternalDestroyTimer for an example.\n"},
  {(char*)"GetTimerEventType", PyvtkRenderWindowInteractor_GetTimerEventType, METH_VARARGS,
   (char*)"V.GetTimerEventType() -> int\nC++: int GetTimerEventType()\n\nThese methods are used to communicate information about the\ncurrently firing CreateTimerEvent or DestroyTimerEvent. The\ncaller of CreateTimerEvent sets up TimerEventId, TimerEventType\nand TimerEventDuration. The observer of CreateTimerEvent should\nset up an appropriate platform specific timer based on those\nvalues and set the TimerEventPlatformId before returning. The\ncaller of DestroyTimerEvent sets up TimerEventPlatformId. The\nobserver of DestroyTimerEvent should simply destroy the platform\nspecific timer created by CreateTimerEvent. See\nvtkGenericRenderWindowInteractor's InternalCreateTimer and\nInternalDestroyTimer for an example.\n"},
  {(char*)"SetTimerEventDuration", PyvtkRenderWindowInteractor_SetTimerEventDuration, METH_VARARGS,
   (char*)"V.SetTimerEventDuration(int)\nC++: void SetTimerEventDuration(int a)\n\nThese methods are used to communicate information about the\ncurrently firing CreateTimerEvent or DestroyTimerEvent. The\ncaller of CreateTimerEvent sets up TimerEventId, TimerEventType\nand TimerEventDuration. The observer of CreateTimerEvent should\nset up an appropriate platform specific timer based on those\nvalues and set the TimerEventPlatformId before returning. The\ncaller of DestroyTimerEvent sets up TimerEventPlatformId. The\nobserver of DestroyTimerEvent should simply destroy the platform\nspecific timer created by CreateTimerEvent. See\nvtkGenericRenderWindowInteractor's InternalCreateTimer and\nInternalDestroyTimer for an example.\n"},
  {(char*)"GetTimerEventDuration", PyvtkRenderWindowInteractor_GetTimerEventDuration, METH_VARARGS,
   (char*)"V.GetTimerEventDuration() -> int\nC++: int GetTimerEventDuration()\n\nThese methods are used to communicate information about the\ncurrently firing CreateTimerEvent or DestroyTimerEvent. The\ncaller of CreateTimerEvent sets up TimerEventId, TimerEventType\nand TimerEventDuration. The observer of CreateTimerEvent should\nset up an appropriate platform specific timer based on those\nvalues and set the TimerEventPlatformId before returning. The\ncaller of DestroyTimerEvent sets up TimerEventPlatformId. The\nobserver of DestroyTimerEvent should simply destroy the platform\nspecific timer created by CreateTimerEvent. See\nvtkGenericRenderWindowInteractor's InternalCreateTimer and\nInternalDestroyTimer for an example.\n"},
  {(char*)"SetTimerEventPlatformId", PyvtkRenderWindowInteractor_SetTimerEventPlatformId, METH_VARARGS,
   (char*)"V.SetTimerEventPlatformId(int)\nC++: void SetTimerEventPlatformId(int a)\n\nThese methods are used to communicate information about the\ncurrently firing CreateTimerEvent or DestroyTimerEvent. The\ncaller of CreateTimerEvent sets up TimerEventId, TimerEventType\nand TimerEventDuration. The observer of CreateTimerEvent should\nset up an appropriate platform specific timer based on those\nvalues and set the TimerEventPlatformId before returning. The\ncaller of DestroyTimerEvent sets up TimerEventPlatformId. The\nobserver of DestroyTimerEvent should simply destroy the platform\nspecific timer created by CreateTimerEvent. See\nvtkGenericRenderWindowInteractor's InternalCreateTimer and\nInternalDestroyTimer for an example.\n"},
  {(char*)"GetTimerEventPlatformId", PyvtkRenderWindowInteractor_GetTimerEventPlatformId, METH_VARARGS,
   (char*)"V.GetTimerEventPlatformId() -> int\nC++: int GetTimerEventPlatformId()\n\nThese methods are used to communicate information about the\ncurrently firing CreateTimerEvent or DestroyTimerEvent. The\ncaller of CreateTimerEvent sets up TimerEventId, TimerEventType\nand TimerEventDuration. The observer of CreateTimerEvent should\nset up an appropriate platform specific timer based on those\nvalues and set the TimerEventPlatformId before returning. The\ncaller of DestroyTimerEvent sets up TimerEventPlatformId. The\nobserver of DestroyTimerEvent should simply destroy the platform\nspecific timer created by CreateTimerEvent. See\nvtkGenericRenderWindowInteractor's InternalCreateTimer and\nInternalDestroyTimer for an example.\n"},
  {(char*)"TerminateApp", PyvtkRenderWindowInteractor_TerminateApp, METH_VARARGS,
   (char*)"V.TerminateApp()\nC++: virtual void TerminateApp(void)\n\nThis function is called on 'q','e' keypress if exitmethod is not\nspecified and should be overridden by platform dependent\nsubclasses to provide a termination procedure if one is required.\n"},
  {(char*)"SetInteractorStyle", PyvtkRenderWindowInteractor_SetInteractorStyle, METH_VARARGS,
   (char*)"V.SetInteractorStyle(vtkInteractorObserver)\nC++: virtual void SetInteractorStyle(vtkInteractorObserver *)\n\nExternal switching between joystick/trackball/new? modes. Initial\nvalue is a vtkInteractorStyleSwitch object.\n"},
  {(char*)"GetInteractorStyle", PyvtkRenderWindowInteractor_GetInteractorStyle, METH_VARARGS,
   (char*)"V.GetInteractorStyle() -> vtkInteractorObserver\nC++: vtkInteractorObserver *GetInteractorStyle()\n\nExternal switching between joystick/trackball/new? modes. Initial\nvalue is a vtkInteractorStyleSwitch object.\n"},
  {(char*)"SetLightFollowCamera", PyvtkRenderWindowInteractor_SetLightFollowCamera, METH_VARARGS,
   (char*)"V.SetLightFollowCamera(int)\nC++: void SetLightFollowCamera(int a)\n\nTurn on/off the automatic repositioning of lights as the camera\nmoves. Default is On.\n"},
  {(char*)"GetLightFollowCamera", PyvtkRenderWindowInteractor_GetLightFollowCamera, METH_VARARGS,
   (char*)"V.GetLightFollowCamera() -> int\nC++: int GetLightFollowCamera()\n\nTurn on/off the automatic repositioning of lights as the camera\nmoves. Default is On.\n"},
  {(char*)"LightFollowCameraOn", PyvtkRenderWindowInteractor_LightFollowCameraOn, METH_VARARGS,
   (char*)"V.LightFollowCameraOn()\nC++: void LightFollowCameraOn()\n\nTurn on/off the automatic repositioning of lights as the camera\nmoves. Default is On.\n"},
  {(char*)"LightFollowCameraOff", PyvtkRenderWindowInteractor_LightFollowCameraOff, METH_VARARGS,
   (char*)"V.LightFollowCameraOff()\nC++: void LightFollowCameraOff()\n\nTurn on/off the automatic repositioning of lights as the camera\nmoves. Default is On.\n"},
  {(char*)"SetDesiredUpdateRate", PyvtkRenderWindowInteractor_SetDesiredUpdateRate, METH_VARARGS,
   (char*)"V.SetDesiredUpdateRate(float)\nC++: void SetDesiredUpdateRate(double)\n\nSet/Get the desired update rate. This is used by vtkLODActor's to\ntell them how quickly they need to render.  This update is in\neffect only when the camera is being rotated, or zoomed.  When\nthe interactor is still, the StillUpdateRate is used instead. The\ndefault is 15.\n"},
  {(char*)"GetDesiredUpdateRateMinValue", PyvtkRenderWindowInteractor_GetDesiredUpdateRateMinValue, METH_VARARGS,
   (char*)"V.GetDesiredUpdateRateMinValue() -> float\nC++: double GetDesiredUpdateRateMinValue()\n\nSet/Get the desired update rate. This is used by vtkLODActor's to\ntell them how quickly they need to render.  This update is in\neffect only when the camera is being rotated, or zoomed.  When\nthe interactor is still, the StillUpdateRate is used instead. The\ndefault is 15.\n"},
  {(char*)"GetDesiredUpdateRateMaxValue", PyvtkRenderWindowInteractor_GetDesiredUpdateRateMaxValue, METH_VARARGS,
   (char*)"V.GetDesiredUpdateRateMaxValue() -> float\nC++: double GetDesiredUpdateRateMaxValue()\n\nSet/Get the desired update rate. This is used by vtkLODActor's to\ntell them how quickly they need to render.  This update is in\neffect only when the camera is being rotated, or zoomed.  When\nthe interactor is still, the StillUpdateRate is used instead. The\ndefault is 15.\n"},
  {(char*)"GetDesiredUpdateRate", PyvtkRenderWindowInteractor_GetDesiredUpdateRate, METH_VARARGS,
   (char*)"V.GetDesiredUpdateRate() -> float\nC++: double GetDesiredUpdateRate()\n\nSet/Get the desired update rate. This is used by vtkLODActor's to\ntell them how quickly they need to render.  This update is in\neffect only when the camera is being rotated, or zoomed.  When\nthe interactor is still, the StillUpdateRate is used instead. The\ndefault is 15.\n"},
  {(char*)"SetStillUpdateRate", PyvtkRenderWindowInteractor_SetStillUpdateRate, METH_VARARGS,
   (char*)"V.SetStillUpdateRate(float)\nC++: void SetStillUpdateRate(double)\n\nSet/Get the desired update rate when movement has stopped. For\nthe non-still update rate, see the SetDesiredUpdateRate method.\nThe default is 0.0001\n"},
  {(char*)"GetStillUpdateRateMinValue", PyvtkRenderWindowInteractor_GetStillUpdateRateMinValue, METH_VARARGS,
   (char*)"V.GetStillUpdateRateMinValue() -> float\nC++: double GetStillUpdateRateMinValue()\n\nSet/Get the desired update rate when movement has stopped. For\nthe non-still update rate, see the SetDesiredUpdateRate method.\nThe default is 0.0001\n"},
  {(char*)"GetStillUpdateRateMaxValue", PyvtkRenderWindowInteractor_GetStillUpdateRateMaxValue, METH_VARARGS,
   (char*)"V.GetStillUpdateRateMaxValue() -> float\nC++: double GetStillUpdateRateMaxValue()\n\nSet/Get the desired update rate when movement has stopped. For\nthe non-still update rate, see the SetDesiredUpdateRate method.\nThe default is 0.0001\n"},
  {(char*)"GetStillUpdateRate", PyvtkRenderWindowInteractor_GetStillUpdateRate, METH_VARARGS,
   (char*)"V.GetStillUpdateRate() -> float\nC++: double GetStillUpdateRate()\n\nSet/Get the desired update rate when movement has stopped. For\nthe non-still update rate, see the SetDesiredUpdateRate method.\nThe default is 0.0001\n"},
  {(char*)"GetInitialized", PyvtkRenderWindowInteractor_GetInitialized, METH_VARARGS,
   (char*)"V.GetInitialized() -> int\nC++: int GetInitialized()\n\nSee whether interactor has been initialized yet. Default is 0.\n"},
  {(char*)"SetPicker", PyvtkRenderWindowInteractor_SetPicker, METH_VARARGS,
   (char*)"V.SetPicker(vtkAbstractPicker)\nC++: virtual void SetPicker(vtkAbstractPicker *)\n\nSet/Get the object used to perform pick operations. In order to\npick instances of vtkProp, the picker must be a subclass of\nvtkAbstractPropPicker, meaning that it can identify a particular\ninstance of vtkProp.\n"},
  {(char*)"GetPicker", PyvtkRenderWindowInteractor_GetPicker, METH_VARARGS,
   (char*)"V.GetPicker() -> vtkAbstractPicker\nC++: vtkAbstractPicker *GetPicker()\n\nSet/Get the object used to perform pick operations. In order to\npick instances of vtkProp, the picker must be a subclass of\nvtkAbstractPropPicker, meaning that it can identify a particular\ninstance of vtkProp.\n"},
  {(char*)"CreateDefaultPicker", PyvtkRenderWindowInteractor_CreateDefaultPicker, METH_VARARGS,
   (char*)"V.CreateDefaultPicker() -> vtkAbstractPropPicker\nC++: virtual vtkAbstractPropPicker *CreateDefaultPicker()\n\nCreate default picker. Used to create one when none is specified.\nDefault is an instance of vtkPropPicker.\n"},
  {(char*)"SetPickingManager", PyvtkRenderWindowInteractor_SetPickingManager, METH_VARARGS,
   (char*)"V.SetPickingManager(vtkPickingManager)\nC++: virtual void SetPickingManager(vtkPickingManager *)\n\nSet the picking manager. Set/Get the object used to perform\noperations through the interactor By default, a valid but\ndisabled picking manager is instantiated.\n"},
  {(char*)"GetPickingManager", PyvtkRenderWindowInteractor_GetPickingManager, METH_VARARGS,
   (char*)"V.GetPickingManager() -> vtkPickingManager\nC++: vtkPickingManager *GetPickingManager()\n\nSet the picking manager. Set/Get the object used to perform\noperations through the interactor By default, a valid but\ndisabled picking manager is instantiated.\n"},
  {(char*)"ExitCallback", PyvtkRenderWindowInteractor_ExitCallback, METH_VARARGS,
   (char*)"V.ExitCallback()\nC++: virtual void ExitCallback()\n\nThese methods correspond to the the Exit, User and Pick\ncallbacks. They allow for the Style to invoke them.\n"},
  {(char*)"UserCallback", PyvtkRenderWindowInteractor_UserCallback, METH_VARARGS,
   (char*)"V.UserCallback()\nC++: virtual void UserCallback()\n\nThese methods correspond to the the Exit, User and Pick\ncallbacks. They allow for the Style to invoke them.\n"},
  {(char*)"StartPickCallback", PyvtkRenderWindowInteractor_StartPickCallback, METH_VARARGS,
   (char*)"V.StartPickCallback()\nC++: virtual void StartPickCallback()\n\nThese methods correspond to the the Exit, User and Pick\ncallbacks. They allow for the Style to invoke them.\n"},
  {(char*)"EndPickCallback", PyvtkRenderWindowInteractor_EndPickCallback, METH_VARARGS,
   (char*)"V.EndPickCallback()\nC++: virtual void EndPickCallback()\n\nThese methods correspond to the the Exit, User and Pick\ncallbacks. They allow for the Style to invoke them.\n"},
  {(char*)"GetMousePosition", PyvtkRenderWindowInteractor_GetMousePosition, METH_VARARGS,
   (char*)"V.GetMousePosition([int, ...], [int, ...])\nC++: virtual void GetMousePosition(int *x, int *y)\n\nGet the current position of the mouse.\n"},
  {(char*)"HideCursor", PyvtkRenderWindowInteractor_HideCursor, METH_VARARGS,
   (char*)"V.HideCursor()\nC++: void HideCursor()\n\nHide or show the mouse cursor, it is nice to be able to hide the\ndefault cursor if you want VTK to display a 3D cursor instead.\n"},
  {(char*)"ShowCursor", PyvtkRenderWindowInteractor_ShowCursor, METH_VARARGS,
   (char*)"V.ShowCursor()\nC++: void ShowCursor()\n\nHide or show the mouse cursor, it is nice to be able to hide the\ndefault cursor if you want VTK to display a 3D cursor instead.\n"},
  {(char*)"Render", PyvtkRenderWindowInteractor_Render, METH_VARARGS,
   (char*)"V.Render()\nC++: virtual void Render()\n\nRender the scene. Just pass the render call on to the associated\nvtkRenderWindow.\n"},
  {(char*)"FlyTo", PyvtkRenderWindowInteractor_FlyTo, METH_VARARGS,
   (char*)"V.FlyTo(vtkRenderer, float, float, float)\nC++: void FlyTo(vtkRenderer *ren, double x, double y, double z)\nV.FlyTo(vtkRenderer, [float, ...])\nC++: void FlyTo(vtkRenderer *ren, double *x)\n\nGiven a position x, move the current camera's focal point to x.\nThe movement is animated over the number of frames specified in\nNumberOfFlyFrames. The LOD desired frame rate is used.\n"},
  {(char*)"FlyToImage", PyvtkRenderWindowInteractor_FlyToImage, METH_VARARGS,
   (char*)"V.FlyToImage(vtkRenderer, float, float)\nC++: void FlyToImage(vtkRenderer *ren, double x, double y)\nV.FlyToImage(vtkRenderer, [float, ...])\nC++: void FlyToImage(vtkRenderer *ren, double *x)\n\nGiven a position x, move the current camera's focal point to x.\nThe movement is animated over the number of frames specified in\nNumberOfFlyFrames. The LOD desired frame rate is used.\n"},
  {(char*)"SetNumberOfFlyFrames", PyvtkRenderWindowInteractor_SetNumberOfFlyFrames, METH_VARARGS,
   (char*)"V.SetNumberOfFlyFrames(int)\nC++: void SetNumberOfFlyFrames(int)\n\nSet the number of frames to fly to when FlyTo is invoked.\n"},
  {(char*)"GetNumberOfFlyFramesMinValue", PyvtkRenderWindowInteractor_GetNumberOfFlyFramesMinValue, METH_VARARGS,
   (char*)"V.GetNumberOfFlyFramesMinValue() -> int\nC++: int GetNumberOfFlyFramesMinValue()\n\nSet the number of frames to fly to when FlyTo is invoked.\n"},
  {(char*)"GetNumberOfFlyFramesMaxValue", PyvtkRenderWindowInteractor_GetNumberOfFlyFramesMaxValue, METH_VARARGS,
   (char*)"V.GetNumberOfFlyFramesMaxValue() -> int\nC++: int GetNumberOfFlyFramesMaxValue()\n\nSet the number of frames to fly to when FlyTo is invoked.\n"},
  {(char*)"GetNumberOfFlyFrames", PyvtkRenderWindowInteractor_GetNumberOfFlyFrames, METH_VARARGS,
   (char*)"V.GetNumberOfFlyFrames() -> int\nC++: int GetNumberOfFlyFrames()\n\nSet the number of frames to fly to when FlyTo is invoked.\n"},
  {(char*)"SetDolly", PyvtkRenderWindowInteractor_SetDolly, METH_VARARGS,
   (char*)"V.SetDolly(float)\nC++: void SetDolly(double a)\n\nSet the total Dolly value to use when flying to (FlyTo()) a\nspecified point. Negative values fly away from the point.\n"},
  {(char*)"GetDolly", PyvtkRenderWindowInteractor_GetDolly, METH_VARARGS,
   (char*)"V.GetDolly() -> float\nC++: double GetDolly()\n\nSet the total Dolly value to use when flying to (FlyTo()) a\nspecified point. Negative values fly away from the point.\n"},
  {(char*)"GetEventPosition", PyvtkRenderWindowInteractor_GetEventPosition, METH_VARARGS,
   (char*)"V.GetEventPosition() -> (int, int)\nC++: int *GetEventPosition()\n\n"},
  {(char*)"GetLastEventPosition", PyvtkRenderWindowInteractor_GetLastEventPosition, METH_VARARGS,
   (char*)"V.GetLastEventPosition() -> (int, int)\nC++: int *GetLastEventPosition()\n\n"},
  {(char*)"SetLastEventPosition", PyvtkRenderWindowInteractor_SetLastEventPosition, METH_VARARGS,
   (char*)"V.SetLastEventPosition(int, int)\nC++: void SetLastEventPosition(int, int)\nV.SetLastEventPosition((int, int))\nC++: void SetLastEventPosition(int a[2])\n\n"},
  {(char*)"SetEventPosition", PyvtkRenderWindowInteractor_SetEventPosition, METH_VARARGS,
   (char*)"V.SetEventPosition(int, int)\nC++: virtual void SetEventPosition(int x, int y)\nV.SetEventPosition([int, int])\nC++: virtual void SetEventPosition(int pos[2])\nV.SetEventPosition(int, int, int)\nC++: virtual void SetEventPosition(int x, int y, int pointerIndex)\nV.SetEventPosition([int, int], int)\nC++: virtual void SetEventPosition(int pos[2], int pointerIndex)\n\nSet/Get information about the current event. The current x,y\nposition is in the EventPosition, and the previous event position\nis in LastEventPosition, updated automatically each time\nEventPosition is set using its Set() method. Mouse positions are\nmeasured in pixels. The other information is about key board\ninput.\n"},
  {(char*)"SetEventPositionFlipY", PyvtkRenderWindowInteractor_SetEventPositionFlipY, METH_VARARGS,
   (char*)"V.SetEventPositionFlipY(int, int)\nC++: virtual void SetEventPositionFlipY(int x, int y)\nV.SetEventPositionFlipY([int, int])\nC++: virtual void SetEventPositionFlipY(int pos[2])\nV.SetEventPositionFlipY(int, int, int)\nC++: virtual void SetEventPositionFlipY(int x, int y,\n    int pointerIndex)\nV.SetEventPositionFlipY([int, int], int)\nC++: virtual void SetEventPositionFlipY(int pos[2],\n    int pointerIndex)\n\nSet/Get information about the current event. The current x,y\nposition is in the EventPosition, and the previous event position\nis in LastEventPosition, updated automatically each time\nEventPosition is set using its Set() method. Mouse positions are\nmeasured in pixels. The other information is about key board\ninput.\n"},
  {(char*)"GetEventPositions", PyvtkRenderWindowInteractor_GetEventPositions, METH_VARARGS,
   (char*)"V.GetEventPositions(int) -> (int, ...)\nC++: virtual int *GetEventPositions(int pointerIndex)\n\n"},
  {(char*)"GetLastEventPositions", PyvtkRenderWindowInteractor_GetLastEventPositions, METH_VARARGS,
   (char*)"V.GetLastEventPositions(int) -> (int, ...)\nC++: virtual int *GetLastEventPositions(int pointerIndex)\n\n"},
  {(char*)"SetAltKey", PyvtkRenderWindowInteractor_SetAltKey, METH_VARARGS,
   (char*)"V.SetAltKey(int)\nC++: void SetAltKey(int a)\n\nSet/get whether alt modifier key was pressed.\n"},
  {(char*)"GetAltKey", PyvtkRenderWindowInteractor_GetAltKey, METH_VARARGS,
   (char*)"V.GetAltKey() -> int\nC++: int GetAltKey()\n\nSet/get whether alt modifier key was pressed.\n"},
  {(char*)"SetControlKey", PyvtkRenderWindowInteractor_SetControlKey, METH_VARARGS,
   (char*)"V.SetControlKey(int)\nC++: void SetControlKey(int a)\n\nSet/get whether control modifier key was pressed.\n"},
  {(char*)"GetControlKey", PyvtkRenderWindowInteractor_GetControlKey, METH_VARARGS,
   (char*)"V.GetControlKey() -> int\nC++: int GetControlKey()\n\nSet/get whether control modifier key was pressed.\n"},
  {(char*)"SetShiftKey", PyvtkRenderWindowInteractor_SetShiftKey, METH_VARARGS,
   (char*)"V.SetShiftKey(int)\nC++: void SetShiftKey(int a)\n\nSet/get whether shift modifier key was pressed.\n"},
  {(char*)"GetShiftKey", PyvtkRenderWindowInteractor_GetShiftKey, METH_VARARGS,
   (char*)"V.GetShiftKey() -> int\nC++: int GetShiftKey()\n\nSet/get whether shift modifier key was pressed.\n"},
  {(char*)"SetKeyCode", PyvtkRenderWindowInteractor_SetKeyCode, METH_VARARGS,
   (char*)"V.SetKeyCode(char)\nC++: void SetKeyCode(char a)\n\nSet/get the key code for the key that was pressed.\n"},
  {(char*)"GetKeyCode", PyvtkRenderWindowInteractor_GetKeyCode, METH_VARARGS,
   (char*)"V.GetKeyCode() -> char\nC++: char GetKeyCode()\n\nSet/get the key code for the key that was pressed.\n"},
  {(char*)"SetRepeatCount", PyvtkRenderWindowInteractor_SetRepeatCount, METH_VARARGS,
   (char*)"V.SetRepeatCount(int)\nC++: void SetRepeatCount(int a)\n\nSet/get the repear count for the key or mouse event. This\nspecifies how many times a key has been pressed.\n"},
  {(char*)"GetRepeatCount", PyvtkRenderWindowInteractor_GetRepeatCount, METH_VARARGS,
   (char*)"V.GetRepeatCount() -> int\nC++: int GetRepeatCount()\n\nSet/get the repear count for the key or mouse event. This\nspecifies how many times a key has been pressed.\n"},
  {(char*)"SetKeySym", PyvtkRenderWindowInteractor_SetKeySym, METH_VARARGS,
   (char*)"V.SetKeySym(string)\nC++: void SetKeySym(char *)\n\nSet/get the key symbol for the key that was pressed. This is the\nkey symbol as defined by the relevant X headers. On X based\nplatforms this corresponds to the installed X sevrer, whereas on\nother platforms the native key codes are translated into a string\nrepresentation.\n"},
  {(char*)"GetKeySym", PyvtkRenderWindowInteractor_GetKeySym, METH_VARARGS,
   (char*)"V.GetKeySym() -> string\nC++: char *GetKeySym()\n\nSet/get the key symbol for the key that was pressed. This is the\nkey symbol as defined by the relevant X headers. On X based\nplatforms this corresponds to the installed X sevrer, whereas on\nother platforms the native key codes are translated into a string\nrepresentation.\n"},
  {(char*)"SetPointerIndex", PyvtkRenderWindowInteractor_SetPointerIndex, METH_VARARGS,
   (char*)"V.SetPointerIndex(int)\nC++: void SetPointerIndex(int a)\n\nSet/get the index of the most recent pointer to have an event\n"},
  {(char*)"GetPointerIndex", PyvtkRenderWindowInteractor_GetPointerIndex, METH_VARARGS,
   (char*)"V.GetPointerIndex() -> int\nC++: int GetPointerIndex()\n\nSet/get the index of the most recent pointer to have an event\n"},
  {(char*)"SetEventInformation", PyvtkRenderWindowInteractor_SetEventInformation, METH_VARARGS,
   (char*)"V.SetEventInformation(int, int, int, int, char, int, string, int)\nC++: void SetEventInformation(int x, int y, int ctrl, int shift,\n    char keycode, int repeatcount, const char *keysym,\n    int pointerIndex)\nV.SetEventInformation(int, int, int, int, char, int, string)\nC++: void SetEventInformation(int x, int y, int ctrl=0,\n    int shift=0, char keycode=0, int repeatcount=0,\n    const char *keysym=0)\n\nSet all the event information in one call.\n"},
  {(char*)"SetEventInformationFlipY", PyvtkRenderWindowInteractor_SetEventInformationFlipY, METH_VARARGS,
   (char*)"V.SetEventInformationFlipY(int, int, int, int, char, int, string,\n    int)\nC++: void SetEventInformationFlipY(int x, int y, int ctrl,\n    int shift, char keycode, int repeatcount, const char *keysym,\n    int pointerIndex)\nV.SetEventInformationFlipY(int, int, int, int, char, int, string)\nC++: void SetEventInformationFlipY(int x, int y, int ctrl=0,\n    int shift=0, char keycode=0, int repeatcount=0,\n    const char *keysym=0)\n\nCalls SetEventInformation, but flips the Y based on the current\nSize[1] value (i.e. y = this->Size[1] - y - 1).\n"},
  {(char*)"SetKeyEventInformation", PyvtkRenderWindowInteractor_SetKeyEventInformation, METH_VARARGS,
   (char*)"V.SetKeyEventInformation(int, int, char, int, string)\nC++: void SetKeyEventInformation(int ctrl=0, int shift=0,\n    char keycode=0, int repeatcount=0, const char *keysym=0)\n\nSet all the keyboard-related event information in one call.\n"},
  {(char*)"SetSize", PyvtkRenderWindowInteractor_SetSize, METH_VARARGS,
   (char*)"V.SetSize(int, int)\nC++: void SetSize(int, int)\nV.SetSize((int, int))\nC++: void SetSize(int a[2])\n\n"},
  {(char*)"GetSize", PyvtkRenderWindowInteractor_GetSize, METH_VARARGS,
   (char*)"V.GetSize() -> (int, int)\nC++: int *GetSize()\n\n"},
  {(char*)"SetEventSize", PyvtkRenderWindowInteractor_SetEventSize, METH_VARARGS,
   (char*)"V.SetEventSize(int, int)\nC++: void SetEventSize(int, int)\nV.SetEventSize((int, int))\nC++: void SetEventSize(int a[2])\n\n"},
  {(char*)"GetEventSize", PyvtkRenderWindowInteractor_GetEventSize, METH_VARARGS,
   (char*)"V.GetEventSize() -> (int, int)\nC++: int *GetEventSize()\n\n"},
  {(char*)"FindPokedRenderer", PyvtkRenderWindowInteractor_FindPokedRenderer, METH_VARARGS,
   (char*)"V.FindPokedRenderer(int, int) -> vtkRenderer\nC++: virtual vtkRenderer *FindPokedRenderer(int, int)\n\nWhen an event occurs, we must determine which Renderer the event\noccurred within, since one RenderWindow may contain multiple\nrenderers.\n"},
  {(char*)"GetObserverMediator", PyvtkRenderWindowInteractor_GetObserverMediator, METH_VARARGS,
   (char*)"V.GetObserverMediator() -> vtkObserverMediator\nC++: vtkObserverMediator *GetObserverMediator()\n\nReturn the object used to mediate between vtkInteractorObservers\ncontending for resources. Multiple interactor observers will\noften request different resources (e.g., cursor shape); the\nmediator uses a strategy to provide the resource based on\npriority of the observer plus the particular request (default\nversus non-default cursor shape).\n"},
  {(char*)"SetUseTDx", PyvtkRenderWindowInteractor_SetUseTDx, METH_VARARGS,
   (char*)"V.SetUseTDx(bool)\nC++: void SetUseTDx(bool a)\n\nUse a 3DConnexion device. Initial value is false. If VTK is not\nbuild with the TDx option, this is no-op. If VTK is build with\nthe TDx option, and a device is not connected, a warning is\nemitted. It is must be called before the first Render to be\neffective, otherwise it is ignored.\n"},
  {(char*)"GetUseTDx", PyvtkRenderWindowInteractor_GetUseTDx, METH_VARARGS,
   (char*)"V.GetUseTDx() -> bool\nC++: bool GetUseTDx()\n\nUse a 3DConnexion device. Initial value is false. If VTK is not\nbuild with the TDx option, this is no-op. If VTK is build with\nthe TDx option, and a device is not connected, a warning is\nemitted. It is must be called before the first Render to be\neffective, otherwise it is ignored.\n"},
  {(char*)"MouseMoveEvent", PyvtkRenderWindowInteractor_MouseMoveEvent, METH_VARARGS,
   (char*)"V.MouseMoveEvent()\nC++: virtual void MouseMoveEvent()\n\nFire various events. SetEventInformation should be called just\nprior to calling any of these methods. These methods will Invoke\nthe corresponding vtk event.\n"},
  {(char*)"RightButtonPressEvent", PyvtkRenderWindowInteractor_RightButtonPressEvent, METH_VARARGS,
   (char*)"V.RightButtonPressEvent()\nC++: virtual void RightButtonPressEvent()\n\nFire various events. SetEventInformation should be called just\nprior to calling any of these methods. These methods will Invoke\nthe corresponding vtk event.\n"},
  {(char*)"RightButtonReleaseEvent", PyvtkRenderWindowInteractor_RightButtonReleaseEvent, METH_VARARGS,
   (char*)"V.RightButtonReleaseEvent()\nC++: virtual void RightButtonReleaseEvent()\n\nFire various events. SetEventInformation should be called just\nprior to calling any of these methods. These methods will Invoke\nthe corresponding vtk event.\n"},
  {(char*)"LeftButtonPressEvent", PyvtkRenderWindowInteractor_LeftButtonPressEvent, METH_VARARGS,
   (char*)"V.LeftButtonPressEvent()\nC++: virtual void LeftButtonPressEvent()\n\nFire various events. SetEventInformation should be called just\nprior to calling any of these methods. These methods will Invoke\nthe corresponding vtk event.\n"},
  {(char*)"LeftButtonReleaseEvent", PyvtkRenderWindowInteractor_LeftButtonReleaseEvent, METH_VARARGS,
   (char*)"V.LeftButtonReleaseEvent()\nC++: virtual void LeftButtonReleaseEvent()\n\nFire various events. SetEventInformation should be called just\nprior to calling any of these methods. These methods will Invoke\nthe corresponding vtk event.\n"},
  {(char*)"MiddleButtonPressEvent", PyvtkRenderWindowInteractor_MiddleButtonPressEvent, METH_VARARGS,
   (char*)"V.MiddleButtonPressEvent()\nC++: virtual void MiddleButtonPressEvent()\n\nFire various events. SetEventInformation should be called just\nprior to calling any of these methods. These methods will Invoke\nthe corresponding vtk event.\n"},
  {(char*)"MiddleButtonReleaseEvent", PyvtkRenderWindowInteractor_MiddleButtonReleaseEvent, METH_VARARGS,
   (char*)"V.MiddleButtonReleaseEvent()\nC++: virtual void MiddleButtonReleaseEvent()\n\nFire various events. SetEventInformation should be called just\nprior to calling any of these methods. These methods will Invoke\nthe corresponding vtk event.\n"},
  {(char*)"MouseWheelForwardEvent", PyvtkRenderWindowInteractor_MouseWheelForwardEvent, METH_VARARGS,
   (char*)"V.MouseWheelForwardEvent()\nC++: virtual void MouseWheelForwardEvent()\n\nFire various events. SetEventInformation should be called just\nprior to calling any of these methods. These methods will Invoke\nthe corresponding vtk event.\n"},
  {(char*)"MouseWheelBackwardEvent", PyvtkRenderWindowInteractor_MouseWheelBackwardEvent, METH_VARARGS,
   (char*)"V.MouseWheelBackwardEvent()\nC++: virtual void MouseWheelBackwardEvent()\n\nFire various events. SetEventInformation should be called just\nprior to calling any of these methods. These methods will Invoke\nthe corresponding vtk event.\n"},
  {(char*)"ExposeEvent", PyvtkRenderWindowInteractor_ExposeEvent, METH_VARARGS,
   (char*)"V.ExposeEvent()\nC++: virtual void ExposeEvent()\n\nFire various events. SetEventInformation should be called just\nprior to calling any of these methods. These methods will Invoke\nthe corresponding vtk event.\n"},
  {(char*)"ConfigureEvent", PyvtkRenderWindowInteractor_ConfigureEvent, METH_VARARGS,
   (char*)"V.ConfigureEvent()\nC++: virtual void ConfigureEvent()\n\nFire various events. SetEventInformation should be called just\nprior to calling any of these methods. These methods will Invoke\nthe corresponding vtk event.\n"},
  {(char*)"EnterEvent", PyvtkRenderWindowInteractor_EnterEvent, METH_VARARGS,
   (char*)"V.EnterEvent()\nC++: virtual void EnterEvent()\n\nFire various events. SetEventInformation should be called just\nprior to calling any of these methods. These methods will Invoke\nthe corresponding vtk event.\n"},
  {(char*)"LeaveEvent", PyvtkRenderWindowInteractor_LeaveEvent, METH_VARARGS,
   (char*)"V.LeaveEvent()\nC++: virtual void LeaveEvent()\n\nFire various events. SetEventInformation should be called just\nprior to calling any of these methods. These methods will Invoke\nthe corresponding vtk event.\n"},
  {(char*)"KeyPressEvent", PyvtkRenderWindowInteractor_KeyPressEvent, METH_VARARGS,
   (char*)"V.KeyPressEvent()\nC++: virtual void KeyPressEvent()\n\nFire various events. SetEventInformation should be called just\nprior to calling any of these methods. These methods will Invoke\nthe corresponding vtk event.\n"},
  {(char*)"KeyReleaseEvent", PyvtkRenderWindowInteractor_KeyReleaseEvent, METH_VARARGS,
   (char*)"V.KeyReleaseEvent()\nC++: virtual void KeyReleaseEvent()\n\nFire various events. SetEventInformation should be called just\nprior to calling any of these methods. These methods will Invoke\nthe corresponding vtk event.\n"},
  {(char*)"CharEvent", PyvtkRenderWindowInteractor_CharEvent, METH_VARARGS,
   (char*)"V.CharEvent()\nC++: virtual void CharEvent()\n\nFire various events. SetEventInformation should be called just\nprior to calling any of these methods. These methods will Invoke\nthe corresponding vtk event.\n"},
  {(char*)"ExitEvent", PyvtkRenderWindowInteractor_ExitEvent, METH_VARARGS,
   (char*)"V.ExitEvent()\nC++: virtual void ExitEvent()\n\nFire various events. SetEventInformation should be called just\nprior to calling any of these methods. These methods will Invoke\nthe corresponding vtk event.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkRenderWindowInteractor_StaticNew()
{
  return vtkRenderWindowInteractor::New();
}

PyObject *PyVTKClass_vtkRenderWindowInteractorNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkRenderWindowInteractor_StaticNew,
    PyvtkRenderWindowInteractor_Methods,
    "vtkRenderWindowInteractor", modulename,
    NULL, NULL,
    PyvtkRenderWindowInteractor_Doc(),
    PyVTKClass_vtkObjectNew(modulename));

  if (cls)
    {
    PyObject *d = PyVTKClass_GetDict(cls);
    PyObject *o;

    for (int c = 0; c < 2; c++)
      {
      static const struct { const char *name; int value; }
        constants[2] = {
          { "OneShotTimer", vtkRenderWindowInteractor::OneShotTimer },
          { "RepeatingTimer", vtkRenderWindowInteractor::RepeatingTimer },
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

const char **PyvtkRenderWindowInteractor_Doc()
{
  static const char *docstring[] = {
    "vtkRenderWindowInteractor - platform-independent render window\n\n",
    "Superclass: vtkObject\n\n",
    "vtkRenderWindowInteractor provides a platform-independent interaction\nmechanism for mouse/key/time events. It serves as a base class for\nplatform-dependent implementations that handle routing of\nmouse/key/timer messages to vtkInteractorObserver and its subclasses.\nvtkRenderWindowInteractor also provides controls for picking,\nrendering frame rate, and headlights.\n\nvtkRenderWindowInteractor has chan",
    "ged from previous implementations\nand now serves only as a shell to hold user preferences and route\nmessages to vtkInteractorStyle. Callbacks are available for many\nevents.  Platform specific subclasses should provide methods for\nmanipulating timers, TerminateApp, and an event loop if required via\nInitialize/Start/Enable/Disable.\n\nCaveats:\n\nvtkRenderWindowInteractor routes events through VTK's\ncom",
    "mand/observer design pattern. That is, when\nvtkRenderWindowInteractor (actually, one of its subclasses) sees a\nplatform-dependent event, it translates this into a VTK event using\nthe InvokeEvent() method. Then any vtkInteractorObservers registered\nfor that event are expected to respond as appropriate.\n\nSee Also:\n\nvtkInteractorObserver\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkRenderWindowInteractor(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkRenderWindowInteractorNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkRenderWindowInteractor", o) != 0)
    {
    Py_DECREF(o);
    }

  for (int c = 0; c < 3; c++)
    {
    static const struct { const char *name; int value; }
      constants[3] = {
        { "VTKI_TIMER_FIRST", 0 },
        { "VTKI_TIMER_UPDATE", 1 },
        { "VTKI_MAX_POINTERS", 5 },
      };

    o = PyInt_FromLong(constants[c].value);
    if (o)
      {
      PyDict_SetItemString(dict, (char *)constants[c].name, o);
      Py_DECREF(o);
      }
    }

}

