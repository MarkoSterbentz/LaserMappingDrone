// python wrapper for vtkInteractorObserver
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkInteractorObserver.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkInteractorObserver(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkInteractorObserverNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkInteractorObserver_Doc();


static PyObject *
PyvtkInteractorObserver_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorObserver *op = static_cast<vtkInteractorObserver *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkInteractorObserver::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorObserver_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorObserver *op = static_cast<vtkInteractorObserver *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkInteractorObserver::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorObserver_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorObserver *op = static_cast<vtkInteractorObserver *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkInteractorObserver *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkInteractorObserver::NewInstance());

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
PyvtkInteractorObserver_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkInteractorObserver *tempr = vtkInteractorObserver::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorObserver_SetEnabled(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEnabled");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorObserver *op = static_cast<vtkInteractorObserver *>(vp);

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
      op->vtkInteractorObserver::SetEnabled(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorObserver_GetEnabled(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEnabled");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorObserver *op = static_cast<vtkInteractorObserver *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetEnabled() :
      op->vtkInteractorObserver::GetEnabled());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorObserver_EnabledOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EnabledOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorObserver *op = static_cast<vtkInteractorObserver *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->EnabledOn();
      }
    else
      {
      op->vtkInteractorObserver::EnabledOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorObserver_EnabledOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EnabledOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorObserver *op = static_cast<vtkInteractorObserver *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->EnabledOff();
      }
    else
      {
      op->vtkInteractorObserver::EnabledOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorObserver_On(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "On");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorObserver *op = static_cast<vtkInteractorObserver *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->On();
      }
    else
      {
      op->vtkInteractorObserver::On();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorObserver_Off(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Off");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorObserver *op = static_cast<vtkInteractorObserver *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Off();
      }
    else
      {
      op->vtkInteractorObserver::Off();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorObserver_SetInteractor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInteractor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorObserver *op = static_cast<vtkInteractorObserver *>(vp);

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
      op->vtkInteractorObserver::SetInteractor(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorObserver_GetInteractor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInteractor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorObserver *op = static_cast<vtkInteractorObserver *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkRenderWindowInteractor *tempr = (ap.IsBound() ?
      op->GetInteractor() :
      op->vtkInteractorObserver::GetInteractor());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorObserver_SetPriority(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPriority");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorObserver *op = static_cast<vtkInteractorObserver *>(vp);

  float temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetPriority(temp0);
      }
    else
      {
      op->vtkInteractorObserver::SetPriority(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorObserver_GetPriorityMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPriorityMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorObserver *op = static_cast<vtkInteractorObserver *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    float tempr = (ap.IsBound() ?
      op->GetPriorityMinValue() :
      op->vtkInteractorObserver::GetPriorityMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorObserver_GetPriorityMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPriorityMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorObserver *op = static_cast<vtkInteractorObserver *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    float tempr = (ap.IsBound() ?
      op->GetPriorityMaxValue() :
      op->vtkInteractorObserver::GetPriorityMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorObserver_GetPriority(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPriority");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorObserver *op = static_cast<vtkInteractorObserver *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    float tempr = (ap.IsBound() ?
      op->GetPriority() :
      op->vtkInteractorObserver::GetPriority());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorObserver_PickingManagedOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PickingManagedOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorObserver *op = static_cast<vtkInteractorObserver *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->PickingManagedOn();
      }
    else
      {
      op->vtkInteractorObserver::PickingManagedOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorObserver_PickingManagedOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PickingManagedOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorObserver *op = static_cast<vtkInteractorObserver *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->PickingManagedOff();
      }
    else
      {
      op->vtkInteractorObserver::PickingManagedOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorObserver_SetPickingManaged(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPickingManaged");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorObserver *op = static_cast<vtkInteractorObserver *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetPickingManaged(temp0);
      }
    else
      {
      op->vtkInteractorObserver::SetPickingManaged(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorObserver_GetPickingManaged(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPickingManaged");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorObserver *op = static_cast<vtkInteractorObserver *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetPickingManaged() :
      op->vtkInteractorObserver::GetPickingManaged());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorObserver_SetKeyPressActivation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetKeyPressActivation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorObserver *op = static_cast<vtkInteractorObserver *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetKeyPressActivation(temp0);
      }
    else
      {
      op->vtkInteractorObserver::SetKeyPressActivation(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorObserver_GetKeyPressActivation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetKeyPressActivation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorObserver *op = static_cast<vtkInteractorObserver *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetKeyPressActivation() :
      op->vtkInteractorObserver::GetKeyPressActivation());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorObserver_KeyPressActivationOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "KeyPressActivationOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorObserver *op = static_cast<vtkInteractorObserver *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->KeyPressActivationOn();
      }
    else
      {
      op->vtkInteractorObserver::KeyPressActivationOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorObserver_KeyPressActivationOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "KeyPressActivationOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorObserver *op = static_cast<vtkInteractorObserver *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->KeyPressActivationOff();
      }
    else
      {
      op->vtkInteractorObserver::KeyPressActivationOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorObserver_SetKeyPressActivationValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetKeyPressActivationValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorObserver *op = static_cast<vtkInteractorObserver *>(vp);

  char temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetKeyPressActivationValue(temp0);
      }
    else
      {
      op->vtkInteractorObserver::SetKeyPressActivationValue(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorObserver_GetKeyPressActivationValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetKeyPressActivationValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorObserver *op = static_cast<vtkInteractorObserver *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char tempr = (ap.IsBound() ?
      op->GetKeyPressActivationValue() :
      op->vtkInteractorObserver::GetKeyPressActivationValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorObserver_GetDefaultRenderer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDefaultRenderer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorObserver *op = static_cast<vtkInteractorObserver *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkRenderer *tempr = (ap.IsBound() ?
      op->GetDefaultRenderer() :
      op->vtkInteractorObserver::GetDefaultRenderer());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorObserver_SetDefaultRenderer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDefaultRenderer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorObserver *op = static_cast<vtkInteractorObserver *>(vp);

  vtkRenderer *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkRenderer"))
    {
    if (ap.IsBound())
      {
      op->SetDefaultRenderer(temp0);
      }
    else
      {
      op->vtkInteractorObserver::SetDefaultRenderer(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorObserver_GetCurrentRenderer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCurrentRenderer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorObserver *op = static_cast<vtkInteractorObserver *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkRenderer *tempr = (ap.IsBound() ?
      op->GetCurrentRenderer() :
      op->vtkInteractorObserver::GetCurrentRenderer());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorObserver_SetCurrentRenderer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCurrentRenderer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorObserver *op = static_cast<vtkInteractorObserver *>(vp);

  vtkRenderer *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkRenderer"))
    {
    if (ap.IsBound())
      {
      op->SetCurrentRenderer(temp0);
      }
    else
      {
      op->vtkInteractorObserver::SetCurrentRenderer(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorObserver_OnChar(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnChar");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorObserver *op = static_cast<vtkInteractorObserver *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->OnChar();
      }
    else
      {
      op->vtkInteractorObserver::OnChar();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorObserver_ComputeDisplayToWorld(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "ComputeDisplayToWorld");

  vtkRenderer *temp0 = NULL;
  double temp1;
  double temp2;
  double temp3;
  double temp4[4];
  double save4[4];
  const int size4 = 4;
  PyObject *result = NULL;

  if (ap.CheckArgCount(5) &&
      ap.GetVTKObject(temp0, "vtkRenderer") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetArray(temp4, size4))
    {
    ap.SaveArray(temp4, save4, size4);

    vtkInteractorObserver::ComputeDisplayToWorld(temp0, temp1, temp2, temp3, temp4);

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
PyvtkInteractorObserver_ComputeWorldToDisplay(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "ComputeWorldToDisplay");

  vtkRenderer *temp0 = NULL;
  double temp1;
  double temp2;
  double temp3;
  double temp4[3];
  double save4[3];
  const int size4 = 3;
  PyObject *result = NULL;

  if (ap.CheckArgCount(5) &&
      ap.GetVTKObject(temp0, "vtkRenderer") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetArray(temp4, size4))
    {
    ap.SaveArray(temp4, save4, size4);

    vtkInteractorObserver::ComputeWorldToDisplay(temp0, temp1, temp2, temp3, temp4);

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
PyvtkInteractorObserver_GrabFocus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GrabFocus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorObserver *op = static_cast<vtkInteractorObserver *>(vp);

  vtkCommand *temp0 = NULL;
  vtkCommand *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1, 2) &&
      ap.GetVTKObject(temp0, "vtkCommand") &&
      (ap.NoArgsLeft() || ap.GetVTKObject(temp1, "vtkCommand")))
    {
    if (ap.IsBound())
      {
      op->GrabFocus(temp0, temp1);
      }
    else
      {
      op->vtkInteractorObserver::GrabFocus(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorObserver_ReleaseFocus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseFocus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorObserver *op = static_cast<vtkInteractorObserver *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ReleaseFocus();
      }
    else
      {
      op->vtkInteractorObserver::ReleaseFocus();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkInteractorObserver_Methods[] = {
  {(char*)"GetClassName", PyvtkInteractorObserver_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkInteractorObserver_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkInteractorObserver_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkInteractorObserver\nC++: vtkInteractorObserver *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkInteractorObserver_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkInteractorObserver\nC++: vtkInteractorObserver *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetEnabled", PyvtkInteractorObserver_SetEnabled, METH_VARARGS,
   (char*)"V.SetEnabled(int)\nC++: virtual void SetEnabled(int)\n\nMethods for turning the interactor observer on and off, and\ndetermining its state. All subclasses must provide the\nSetEnabled() method. Enabling a vtkInteractorObserver has the\nside effect of adding observers; disabling it removes the\nobservers. Prior to enabling the vtkInteractorObserver you must\nset the render window interactor (via SetInteractor()). Initial\nvalue is 0.\n"},
  {(char*)"GetEnabled", PyvtkInteractorObserver_GetEnabled, METH_VARARGS,
   (char*)"V.GetEnabled() -> int\nC++: int GetEnabled()\n\nMethods for turning the interactor observer on and off, and\ndetermining its state. All subclasses must provide the\nSetEnabled() method. Enabling a vtkInteractorObserver has the\nside effect of adding observers; disabling it removes the\nobservers. Prior to enabling the vtkInteractorObserver you must\nset the render window interactor (via SetInteractor()). Initial\nvalue is 0.\n"},
  {(char*)"EnabledOn", PyvtkInteractorObserver_EnabledOn, METH_VARARGS,
   (char*)"V.EnabledOn()\nC++: void EnabledOn()\n\nMethods for turning the interactor observer on and off, and\ndetermining its state. All subclasses must provide the\nSetEnabled() method. Enabling a vtkInteractorObserver has the\nside effect of adding observers; disabling it removes the\nobservers. Prior to enabling the vtkInteractorObserver you must\nset the render window interactor (via SetInteractor()). Initial\nvalue is 0.\n"},
  {(char*)"EnabledOff", PyvtkInteractorObserver_EnabledOff, METH_VARARGS,
   (char*)"V.EnabledOff()\nC++: void EnabledOff()\n\nMethods for turning the interactor observer on and off, and\ndetermining its state. All subclasses must provide the\nSetEnabled() method. Enabling a vtkInteractorObserver has the\nside effect of adding observers; disabling it removes the\nobservers. Prior to enabling the vtkInteractorObserver you must\nset the render window interactor (via SetInteractor()). Initial\nvalue is 0.\n"},
  {(char*)"On", PyvtkInteractorObserver_On, METH_VARARGS,
   (char*)"V.On()\nC++: void On()\n\nMethods for turning the interactor observer on and off, and\ndetermining its state. All subclasses must provide the\nSetEnabled() method. Enabling a vtkInteractorObserver has the\nside effect of adding observers; disabling it removes the\nobservers. Prior to enabling the vtkInteractorObserver you must\nset the render window interactor (via SetInteractor()). Initial\nvalue is 0.\n"},
  {(char*)"Off", PyvtkInteractorObserver_Off, METH_VARARGS,
   (char*)"V.Off()\nC++: void Off()\n\nMethods for turning the interactor observer on and off, and\ndetermining its state. All subclasses must provide the\nSetEnabled() method. Enabling a vtkInteractorObserver has the\nside effect of adding observers; disabling it removes the\nobservers. Prior to enabling the vtkInteractorObserver you must\nset the render window interactor (via SetInteractor()). Initial\nvalue is 0.\n"},
  {(char*)"SetInteractor", PyvtkInteractorObserver_SetInteractor, METH_VARARGS,
   (char*)"V.SetInteractor(vtkRenderWindowInteractor)\nC++: virtual void SetInteractor(vtkRenderWindowInteractor *iren)\n\nThis method is used to associate the widget with the render\nwindow interactor.  Observers of the appropriate events invoked\nin the render window interactor are set up as a result of this\nmethod invocation. The SetInteractor() method must be invoked\nprior to enabling the vtkInteractorObserver. It automatically\nregisters available pickers to the Picking Manager.\n"},
  {(char*)"GetInteractor", PyvtkInteractorObserver_GetInteractor, METH_VARARGS,
   (char*)"V.GetInteractor() -> vtkRenderWindowInteractor\nC++: vtkRenderWindowInteractor *GetInteractor()\n\nThis method is used to associate the widget with the render\nwindow interactor.  Observers of the appropriate events invoked\nin the render window interactor are set up as a result of this\nmethod invocation. The SetInteractor() method must be invoked\nprior to enabling the vtkInteractorObserver. It automatically\nregisters available pickers to the Picking Manager.\n"},
  {(char*)"SetPriority", PyvtkInteractorObserver_SetPriority, METH_VARARGS,
   (char*)"V.SetPriority(float)\nC++: void SetPriority(float)\n\nSet/Get the priority at which events are processed. This is used\nwhen multiple interactor observers are used simultaneously. The\ndefault value is 0.0 (lowest priority.) Note that when multiple\ninteractor observer have the same priority, then the last\nobserver added will process the event first. (Note: once the\nSetInteractor() method has been called, changing the priority\ndoes not effect event processing. You will have to\nSetInteractor(NULL), change priority, and then\nSetInteractor(iren) to have the priority take effect.)\n"},
  {(char*)"GetPriorityMinValue", PyvtkInteractorObserver_GetPriorityMinValue, METH_VARARGS,
   (char*)"V.GetPriorityMinValue() -> float\nC++: float GetPriorityMinValue()\n\nSet/Get the priority at which events are processed. This is used\nwhen multiple interactor observers are used simultaneously. The\ndefault value is 0.0 (lowest priority.) Note that when multiple\ninteractor observer have the same priority, then the last\nobserver added will process the event first. (Note: once the\nSetInteractor() method has been called, changing the priority\ndoes not effect event processing. You will have to\nSetInteractor(NULL), change priority, and then\nSetInteractor(iren) to have the priority take effect.)\n"},
  {(char*)"GetPriorityMaxValue", PyvtkInteractorObserver_GetPriorityMaxValue, METH_VARARGS,
   (char*)"V.GetPriorityMaxValue() -> float\nC++: float GetPriorityMaxValue()\n\nSet/Get the priority at which events are processed. This is used\nwhen multiple interactor observers are used simultaneously. The\ndefault value is 0.0 (lowest priority.) Note that when multiple\ninteractor observer have the same priority, then the last\nobserver added will process the event first. (Note: once the\nSetInteractor() method has been called, changing the priority\ndoes not effect event processing. You will have to\nSetInteractor(NULL), change priority, and then\nSetInteractor(iren) to have the priority take effect.)\n"},
  {(char*)"GetPriority", PyvtkInteractorObserver_GetPriority, METH_VARARGS,
   (char*)"V.GetPriority() -> float\nC++: float GetPriority()\n\nSet/Get the priority at which events are processed. This is used\nwhen multiple interactor observers are used simultaneously. The\ndefault value is 0.0 (lowest priority.) Note that when multiple\ninteractor observer have the same priority, then the last\nobserver added will process the event first. (Note: once the\nSetInteractor() method has been called, changing the priority\ndoes not effect event processing. You will have to\nSetInteractor(NULL), change priority, and then\nSetInteractor(iren) to have the priority take effect.)\n"},
  {(char*)"PickingManagedOn", PyvtkInteractorObserver_PickingManagedOn, METH_VARARGS,
   (char*)"V.PickingManagedOn()\nC++: void PickingManagedOn()\n\n"},
  {(char*)"PickingManagedOff", PyvtkInteractorObserver_PickingManagedOff, METH_VARARGS,
   (char*)"V.PickingManagedOff()\nC++: void PickingManagedOff()\n\n"},
  {(char*)"SetPickingManaged", PyvtkInteractorObserver_SetPickingManaged, METH_VARARGS,
   (char*)"V.SetPickingManaged(bool)\nC++: void SetPickingManaged(bool a)\n\n"},
  {(char*)"GetPickingManaged", PyvtkInteractorObserver_GetPickingManaged, METH_VARARGS,
   (char*)"V.GetPickingManaged() -> bool\nC++: bool GetPickingManaged()\n\n"},
  {(char*)"SetKeyPressActivation", PyvtkInteractorObserver_SetKeyPressActivation, METH_VARARGS,
   (char*)"V.SetKeyPressActivation(int)\nC++: void SetKeyPressActivation(int a)\n\nEnable/Disable of the use of a keypress to turn on and off the\ninteractor observer. (By default, the keypress is 'i' for\n\"interactor observer\".)  Set the KeyPressActivationValue to\nchange which key activates the widget.)\n"},
  {(char*)"GetKeyPressActivation", PyvtkInteractorObserver_GetKeyPressActivation, METH_VARARGS,
   (char*)"V.GetKeyPressActivation() -> int\nC++: int GetKeyPressActivation()\n\nEnable/Disable of the use of a keypress to turn on and off the\ninteractor observer. (By default, the keypress is 'i' for\n\"interactor observer\".)  Set the KeyPressActivationValue to\nchange which key activates the widget.)\n"},
  {(char*)"KeyPressActivationOn", PyvtkInteractorObserver_KeyPressActivationOn, METH_VARARGS,
   (char*)"V.KeyPressActivationOn()\nC++: void KeyPressActivationOn()\n\nEnable/Disable of the use of a keypress to turn on and off the\ninteractor observer. (By default, the keypress is 'i' for\n\"interactor observer\".)  Set the KeyPressActivationValue to\nchange which key activates the widget.)\n"},
  {(char*)"KeyPressActivationOff", PyvtkInteractorObserver_KeyPressActivationOff, METH_VARARGS,
   (char*)"V.KeyPressActivationOff()\nC++: void KeyPressActivationOff()\n\nEnable/Disable of the use of a keypress to turn on and off the\ninteractor observer. (By default, the keypress is 'i' for\n\"interactor observer\".)  Set the KeyPressActivationValue to\nchange which key activates the widget.)\n"},
  {(char*)"SetKeyPressActivationValue", PyvtkInteractorObserver_SetKeyPressActivationValue, METH_VARARGS,
   (char*)"V.SetKeyPressActivationValue(char)\nC++: void SetKeyPressActivationValue(char a)\n\nSpecify which key press value to use to activate the interactor\nobserver (if key press activation is enabled). By default, the\nkey press activation value is 'i'. Note: once the SetInteractor()\nmethod is invoked, changing the key press activation value will\nnot affect the key press until\nSetInteractor(NULL)/SetInteractor(iren) is called.\n"},
  {(char*)"GetKeyPressActivationValue", PyvtkInteractorObserver_GetKeyPressActivationValue, METH_VARARGS,
   (char*)"V.GetKeyPressActivationValue() -> char\nC++: char GetKeyPressActivationValue()\n\nSpecify which key press value to use to activate the interactor\nobserver (if key press activation is enabled). By default, the\nkey press activation value is 'i'. Note: once the SetInteractor()\nmethod is invoked, changing the key press activation value will\nnot affect the key press until\nSetInteractor(NULL)/SetInteractor(iren) is called.\n"},
  {(char*)"GetDefaultRenderer", PyvtkInteractorObserver_GetDefaultRenderer, METH_VARARGS,
   (char*)"V.GetDefaultRenderer() -> vtkRenderer\nC++: vtkRenderer *GetDefaultRenderer()\n\nSet/Get the default renderer to use when activating the\ninteractor observer. Normally when the widget is activated\n(SetEnabled(1) or when keypress activation takes place), the\nrenderer over which the mouse pointer is positioned is used.\nAlternatively, you can specify the renderer to bind the\ninteractor to when the interactor observer is activated.\n"},
  {(char*)"SetDefaultRenderer", PyvtkInteractorObserver_SetDefaultRenderer, METH_VARARGS,
   (char*)"V.SetDefaultRenderer(vtkRenderer)\nC++: virtual void SetDefaultRenderer(vtkRenderer *)\n\nSet/Get the default renderer to use when activating the\ninteractor observer. Normally when the widget is activated\n(SetEnabled(1) or when keypress activation takes place), the\nrenderer over which the mouse pointer is positioned is used.\nAlternatively, you can specify the renderer to bind the\ninteractor to when the interactor observer is activated.\n"},
  {(char*)"GetCurrentRenderer", PyvtkInteractorObserver_GetCurrentRenderer, METH_VARARGS,
   (char*)"V.GetCurrentRenderer() -> vtkRenderer\nC++: vtkRenderer *GetCurrentRenderer()\n\nSet/Get the current renderer. Normally when the widget is\nactivated (SetEnabled(1) or when keypress activation takes\nplace), the renderer over which the mouse pointer is positioned\nis used and assigned to this Ivar. Alternatively, you might want\nto set the CurrentRenderer explicitly. WARNING: note that if the\nDefaultRenderer Ivar is set (see above), it will always override\nthe parameter passed to SetCurrentRenderer, unless it is NULL.\n(i.e., SetCurrentRenderer(foo) =\nSetCurrentRenderer(DefaultRenderer).\n"},
  {(char*)"SetCurrentRenderer", PyvtkInteractorObserver_SetCurrentRenderer, METH_VARARGS,
   (char*)"V.SetCurrentRenderer(vtkRenderer)\nC++: virtual void SetCurrentRenderer(vtkRenderer *)\n\nSet/Get the current renderer. Normally when the widget is\nactivated (SetEnabled(1) or when keypress activation takes\nplace), the renderer over which the mouse pointer is positioned\nis used and assigned to this Ivar. Alternatively, you might want\nto set the CurrentRenderer explicitly. WARNING: note that if the\nDefaultRenderer Ivar is set (see above), it will always override\nthe parameter passed to SetCurrentRenderer, unless it is NULL.\n(i.e., SetCurrentRenderer(foo) =\nSetCurrentRenderer(DefaultRenderer).\n"},
  {(char*)"OnChar", PyvtkInteractorObserver_OnChar, METH_VARARGS,
   (char*)"V.OnChar()\nC++: virtual void OnChar()\n\nSets up the keypress-i event.\n"},
  {(char*)"ComputeDisplayToWorld", PyvtkInteractorObserver_ComputeDisplayToWorld, METH_VARARGS | METH_STATIC,
   (char*)"V.ComputeDisplayToWorld(vtkRenderer, float, float, float, [float,\n    float, float, float])\nC++: static void ComputeDisplayToWorld(vtkRenderer *ren, double x,\n     double y, double z, double worldPt[4])\n\nConvenience methods for outside classes. Make sure that the\nparameter \"ren\" is not-null.\n"},
  {(char*)"ComputeWorldToDisplay", PyvtkInteractorObserver_ComputeWorldToDisplay, METH_VARARGS | METH_STATIC,
   (char*)"V.ComputeWorldToDisplay(vtkRenderer, float, float, float, [float,\n    float, float])\nC++: static void ComputeWorldToDisplay(vtkRenderer *ren, double x,\n     double y, double z, double displayPt[3])\n\nConvenience methods for outside classes. Make sure that the\nparameter \"ren\" is not-null.\n"},
  {(char*)"GrabFocus", PyvtkInteractorObserver_GrabFocus, METH_VARARGS,
   (char*)"V.GrabFocus(vtkCommand, vtkCommand)\nC++: void GrabFocus(vtkCommand *mouseEvents,\n    vtkCommand *keypressEvents=NULL)\n\nThese methods enable an interactor observer to exclusively grab\nall events invoked by its associated vtkRenderWindowInteractor.\n(This method is typically used by widgets to grab events once an\nevent sequence begins.) The GrabFocus() signature takes up to two\nvtkCommands corresponding to mouse events and keypress events.\n(These two commands are separated so that the widget can listen\nfor its activation keypress, as well as listening for\nDeleteEvents, without actually having to process mouse events.)\n"},
  {(char*)"ReleaseFocus", PyvtkInteractorObserver_ReleaseFocus, METH_VARARGS,
   (char*)"V.ReleaseFocus()\nC++: void ReleaseFocus()\n\nThese methods enable an interactor observer to exclusively grab\nall events invoked by its associated vtkRenderWindowInteractor.\n(This method is typically used by widgets to grab events once an\nevent sequence begins.) The GrabFocus() signature takes up to two\nvtkCommands corresponding to mouse events and keypress events.\n(These two commands are separated so that the widget can listen\nfor its activation keypress, as well as listening for\nDeleteEvents, without actually having to process mouse events.)\n"},
  {NULL, NULL, 0, NULL}
};

PyObject *PyVTKClass_vtkInteractorObserverNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(NULL,
    PyvtkInteractorObserver_Methods,
    "vtkInteractorObserver", modulename,
    NULL, NULL,
    PyvtkInteractorObserver_Doc(),
    PyVTKClass_vtkObjectNew(modulename));
  return cls;
}

const char **PyvtkInteractorObserver_Doc()
{
  static const char *docstring[] = {
    "vtkInteractorObserver - an abstract superclass for classes observing\nevents invoked by vtkRenderWindowInteractor\n\n",
    "Superclass: vtkObject\n\n",
    "vtkInteractorObserver is an abstract superclass for subclasses that\nobserve events invoked by vtkRenderWindowInteractor. These subclasses\nare typically things like 3D widgets; objects that interact with\nactors in the scene, or interactively probe the scene for\ninformation.\n\nvtkInteractorObserver defines the method SetInteractor() and enables\nand disables the processing of events by the vtkInteract",
    "orObserver.\nUse the methods EnabledOn() or SetEnabled(1) to turn on the\ninteractor observer, and the methods EnabledOff() or SetEnabled(0) to\nturn off the interactor. Initial value is 0.\n\nTo support interactive manipulation of objects, this class (and\nsubclasses) invoke the events StartInteractionEvent,\nInteractionEvent, and EndInteractionEvent.  These events are invoked\nwhen the vtkInteractorObse",
    "rver enters a state where rapid response is\ndesired: mouse motion, etc. The events can be used, for example, to\nset the desired update frame rate (StartInteractionEvent), operate on\ndata or update a pipeline (InteractionEvent), and set the desired\nframe rate back to normal values (EndInteractionEvent). Two other\nevents, EnableEvent and DisableEvent, are invoked when the interactor\nobserver is enab",
    "led or disabled.\n\nSee Also:\n\nvtk3DWidget vtkBoxWidget vtkLineWidget\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkInteractorObserver(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkInteractorObserverNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkInteractorObserver", o) != 0)
    {
    Py_DECREF(o);
    }

}

