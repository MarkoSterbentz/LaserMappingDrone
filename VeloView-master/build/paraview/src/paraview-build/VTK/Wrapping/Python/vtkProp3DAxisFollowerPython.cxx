// python wrapper for vtkProp3DAxisFollower
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkProp3DAxisFollower.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkProp3DAxisFollower(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkProp3DAxisFollowerNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkProp3DFollowerNew
extern "C" { PyObject *PyVTKClass_vtkProp3DFollowerNew(const char *); }
#define DECLARED_PyVTKClass_vtkProp3DFollowerNew
#endif

static const char **PyvtkProp3DAxisFollower_Doc();


static PyObject *
PyvtkProp3DAxisFollower_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProp3DAxisFollower *op = static_cast<vtkProp3DAxisFollower *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkProp3DAxisFollower::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkProp3DAxisFollower_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProp3DAxisFollower *op = static_cast<vtkProp3DAxisFollower *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkProp3DAxisFollower::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkProp3DAxisFollower_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProp3DAxisFollower *op = static_cast<vtkProp3DAxisFollower *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkProp3DAxisFollower *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkProp3DAxisFollower::NewInstance());

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
PyvtkProp3DAxisFollower_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkProp3DAxisFollower *tempr = vtkProp3DAxisFollower::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkProp3DAxisFollower_SetAxis(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAxis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProp3DAxisFollower *op = static_cast<vtkProp3DAxisFollower *>(vp);

  vtkAxisActor *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAxisActor"))
    {
    if (ap.IsBound())
      {
      op->SetAxis(temp0);
      }
    else
      {
      op->vtkProp3DAxisFollower::SetAxis(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkProp3DAxisFollower_GetAxis(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAxis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProp3DAxisFollower *op = static_cast<vtkProp3DAxisFollower *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkAxisActor *tempr = (ap.IsBound() ?
      op->GetAxis() :
      op->vtkProp3DAxisFollower::GetAxis());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkProp3DAxisFollower_SetAutoCenter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAutoCenter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProp3DAxisFollower *op = static_cast<vtkProp3DAxisFollower *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetAutoCenter(temp0);
      }
    else
      {
      op->vtkProp3DAxisFollower::SetAutoCenter(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkProp3DAxisFollower_GetAutoCenter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAutoCenter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProp3DAxisFollower *op = static_cast<vtkProp3DAxisFollower *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetAutoCenter() :
      op->vtkProp3DAxisFollower::GetAutoCenter());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkProp3DAxisFollower_AutoCenterOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AutoCenterOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProp3DAxisFollower *op = static_cast<vtkProp3DAxisFollower *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->AutoCenterOn();
      }
    else
      {
      op->vtkProp3DAxisFollower::AutoCenterOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkProp3DAxisFollower_AutoCenterOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AutoCenterOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProp3DAxisFollower *op = static_cast<vtkProp3DAxisFollower *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->AutoCenterOff();
      }
    else
      {
      op->vtkProp3DAxisFollower::AutoCenterOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkProp3DAxisFollower_SetEnableDistanceLOD(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEnableDistanceLOD");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProp3DAxisFollower *op = static_cast<vtkProp3DAxisFollower *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetEnableDistanceLOD(temp0);
      }
    else
      {
      op->vtkProp3DAxisFollower::SetEnableDistanceLOD(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkProp3DAxisFollower_GetEnableDistanceLOD(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEnableDistanceLOD");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProp3DAxisFollower *op = static_cast<vtkProp3DAxisFollower *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetEnableDistanceLOD() :
      op->vtkProp3DAxisFollower::GetEnableDistanceLOD());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkProp3DAxisFollower_SetDistanceLODThreshold(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDistanceLODThreshold");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProp3DAxisFollower *op = static_cast<vtkProp3DAxisFollower *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetDistanceLODThreshold(temp0);
      }
    else
      {
      op->vtkProp3DAxisFollower::SetDistanceLODThreshold(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkProp3DAxisFollower_GetDistanceLODThresholdMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDistanceLODThresholdMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProp3DAxisFollower *op = static_cast<vtkProp3DAxisFollower *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetDistanceLODThresholdMinValue() :
      op->vtkProp3DAxisFollower::GetDistanceLODThresholdMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkProp3DAxisFollower_GetDistanceLODThresholdMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDistanceLODThresholdMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProp3DAxisFollower *op = static_cast<vtkProp3DAxisFollower *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetDistanceLODThresholdMaxValue() :
      op->vtkProp3DAxisFollower::GetDistanceLODThresholdMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkProp3DAxisFollower_GetDistanceLODThreshold(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDistanceLODThreshold");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProp3DAxisFollower *op = static_cast<vtkProp3DAxisFollower *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetDistanceLODThreshold() :
      op->vtkProp3DAxisFollower::GetDistanceLODThreshold());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkProp3DAxisFollower_SetEnableViewAngleLOD(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEnableViewAngleLOD");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProp3DAxisFollower *op = static_cast<vtkProp3DAxisFollower *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetEnableViewAngleLOD(temp0);
      }
    else
      {
      op->vtkProp3DAxisFollower::SetEnableViewAngleLOD(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkProp3DAxisFollower_GetEnableViewAngleLOD(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEnableViewAngleLOD");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProp3DAxisFollower *op = static_cast<vtkProp3DAxisFollower *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetEnableViewAngleLOD() :
      op->vtkProp3DAxisFollower::GetEnableViewAngleLOD());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkProp3DAxisFollower_SetViewAngleLODThreshold(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetViewAngleLODThreshold");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProp3DAxisFollower *op = static_cast<vtkProp3DAxisFollower *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetViewAngleLODThreshold(temp0);
      }
    else
      {
      op->vtkProp3DAxisFollower::SetViewAngleLODThreshold(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkProp3DAxisFollower_GetViewAngleLODThresholdMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetViewAngleLODThresholdMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProp3DAxisFollower *op = static_cast<vtkProp3DAxisFollower *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetViewAngleLODThresholdMinValue() :
      op->vtkProp3DAxisFollower::GetViewAngleLODThresholdMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkProp3DAxisFollower_GetViewAngleLODThresholdMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetViewAngleLODThresholdMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProp3DAxisFollower *op = static_cast<vtkProp3DAxisFollower *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetViewAngleLODThresholdMaxValue() :
      op->vtkProp3DAxisFollower::GetViewAngleLODThresholdMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkProp3DAxisFollower_GetViewAngleLODThreshold(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetViewAngleLODThreshold");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProp3DAxisFollower *op = static_cast<vtkProp3DAxisFollower *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetViewAngleLODThreshold() :
      op->vtkProp3DAxisFollower::GetViewAngleLODThreshold());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkProp3DAxisFollower_SetScreenOffset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScreenOffset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProp3DAxisFollower *op = static_cast<vtkProp3DAxisFollower *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetScreenOffset(temp0);
      }
    else
      {
      op->vtkProp3DAxisFollower::SetScreenOffset(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkProp3DAxisFollower_GetScreenOffset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScreenOffset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProp3DAxisFollower *op = static_cast<vtkProp3DAxisFollower *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetScreenOffset() :
      op->vtkProp3DAxisFollower::GetScreenOffset());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkProp3DAxisFollower_ComputeMatrix(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeMatrix");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProp3DAxisFollower *op = static_cast<vtkProp3DAxisFollower *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ComputeMatrix();
      }
    else
      {
      op->vtkProp3DAxisFollower::ComputeMatrix();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkProp3DAxisFollower_ShallowCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShallowCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProp3DAxisFollower *op = static_cast<vtkProp3DAxisFollower *>(vp);

  vtkProp *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkProp"))
    {
    if (ap.IsBound())
      {
      op->ShallowCopy(temp0);
      }
    else
      {
      op->vtkProp3DAxisFollower::ShallowCopy(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkProp3DAxisFollower_AutoScale(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "AutoScale");

  vtkViewport *temp0 = NULL;
  vtkCamera *temp1 = NULL;
  double temp2;
  double temp3[3];
  double save3[3];
  const int size3 = 3;
  PyObject *result = NULL;

  if (ap.CheckArgCount(4) &&
      ap.GetVTKObject(temp0, "vtkViewport") &&
      ap.GetVTKObject(temp1, "vtkCamera") &&
      ap.GetValue(temp2) &&
      ap.GetArray(temp3, size3))
    {
    ap.SaveArray(temp3, save3, size3);

    double tempr = vtkProp3DAxisFollower::AutoScale(temp0, temp1, temp2, temp3);

    if (ap.ArrayHasChanged(temp3, save3, size3) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(3, temp3, size3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkProp3DAxisFollower_RenderOpaqueGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOpaqueGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProp3DAxisFollower *op = static_cast<vtkProp3DAxisFollower *>(vp);

  vtkViewport *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
    {
    int tempr = (ap.IsBound() ?
      op->RenderOpaqueGeometry(temp0) :
      op->vtkProp3DAxisFollower::RenderOpaqueGeometry(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkProp3DAxisFollower_RenderTranslucentPolygonalGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderTranslucentPolygonalGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProp3DAxisFollower *op = static_cast<vtkProp3DAxisFollower *>(vp);

  vtkViewport *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
    {
    int tempr = (ap.IsBound() ?
      op->RenderTranslucentPolygonalGeometry(temp0) :
      op->vtkProp3DAxisFollower::RenderTranslucentPolygonalGeometry(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkProp3DAxisFollower_RenderVolumetricGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderVolumetricGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProp3DAxisFollower *op = static_cast<vtkProp3DAxisFollower *>(vp);

  vtkViewport *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
    {
    int tempr = (ap.IsBound() ?
      op->RenderVolumetricGeometry(temp0) :
      op->vtkProp3DAxisFollower::RenderVolumetricGeometry(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkProp3DAxisFollower_SetViewport(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetViewport");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProp3DAxisFollower *op = static_cast<vtkProp3DAxisFollower *>(vp);

  vtkViewport *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
    {
    if (ap.IsBound())
      {
      op->SetViewport(temp0);
      }
    else
      {
      op->vtkProp3DAxisFollower::SetViewport(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkProp3DAxisFollower_GetViewport(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetViewport");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProp3DAxisFollower *op = static_cast<vtkProp3DAxisFollower *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkViewport *tempr = (ap.IsBound() ?
      op->GetViewport() :
      op->vtkProp3DAxisFollower::GetViewport());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkProp3DAxisFollower_Methods[] = {
  {(char*)"GetClassName", PyvtkProp3DAxisFollower_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\nStandard VTK methods for type and printing.\n"},
  {(char*)"IsA", PyvtkProp3DAxisFollower_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\nStandard VTK methods for type and printing.\n"},
  {(char*)"NewInstance", PyvtkProp3DAxisFollower_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkProp3DAxisFollower\nC++: vtkProp3DAxisFollower *NewInstance()\n\nStandard VTK methods for type and printing.\n"},
  {(char*)"SafeDownCast", PyvtkProp3DAxisFollower_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkProp3DAxisFollower\nC++: vtkProp3DAxisFollower *SafeDownCast(vtkObject* o)\n\nStandard VTK methods for type and printing.\n"},
  {(char*)"SetAxis", PyvtkProp3DAxisFollower_SetAxis, METH_VARARGS,
   (char*)"V.SetAxis(vtkAxisActor)\nC++: virtual void SetAxis(vtkAxisActor *)\n\nSet axis that needs to be followed.\n"},
  {(char*)"GetAxis", PyvtkProp3DAxisFollower_GetAxis, METH_VARARGS,
   (char*)"V.GetAxis() -> vtkAxisActor\nC++: virtual vtkAxisActor *GetAxis()\n\nSet axis that needs to be followed.\n"},
  {(char*)"SetAutoCenter", PyvtkProp3DAxisFollower_SetAutoCenter, METH_VARARGS,
   (char*)"V.SetAutoCenter(int)\nC++: void SetAutoCenter(int a)\n\nSet/Get state of auto center mode where additional translation\nwill be added to make sure the underlying geometry has its pivot\npoint at the center of its bounds.\n"},
  {(char*)"GetAutoCenter", PyvtkProp3DAxisFollower_GetAutoCenter, METH_VARARGS,
   (char*)"V.GetAutoCenter() -> int\nC++: int GetAutoCenter()\n\nSet/Get state of auto center mode where additional translation\nwill be added to make sure the underlying geometry has its pivot\npoint at the center of its bounds.\n"},
  {(char*)"AutoCenterOn", PyvtkProp3DAxisFollower_AutoCenterOn, METH_VARARGS,
   (char*)"V.AutoCenterOn()\nC++: void AutoCenterOn()\n\nSet/Get state of auto center mode where additional translation\nwill be added to make sure the underlying geometry has its pivot\npoint at the center of its bounds.\n"},
  {(char*)"AutoCenterOff", PyvtkProp3DAxisFollower_AutoCenterOff, METH_VARARGS,
   (char*)"V.AutoCenterOff()\nC++: void AutoCenterOff()\n\nSet/Get state of auto center mode where additional translation\nwill be added to make sure the underlying geometry has its pivot\npoint at the center of its bounds.\n"},
  {(char*)"SetEnableDistanceLOD", PyvtkProp3DAxisFollower_SetEnableDistanceLOD, METH_VARARGS,
   (char*)"V.SetEnableDistanceLOD(int)\nC++: void SetEnableDistanceLOD(int a)\n\nEnable / disable use of distance based LOD. If enabled the actor\nwill not be visible at a certain distance from the camera.\nDefault is false.\n"},
  {(char*)"GetEnableDistanceLOD", PyvtkProp3DAxisFollower_GetEnableDistanceLOD, METH_VARARGS,
   (char*)"V.GetEnableDistanceLOD() -> int\nC++: int GetEnableDistanceLOD()\n\nEnable / disable use of distance based LOD. If enabled the actor\nwill not be visible at a certain distance from the camera.\nDefault is false.\n"},
  {(char*)"SetDistanceLODThreshold", PyvtkProp3DAxisFollower_SetDistanceLODThreshold, METH_VARARGS,
   (char*)"V.SetDistanceLODThreshold(float)\nC++: void SetDistanceLODThreshold(double)\n\nSet distance LOD threshold (0.0 - 1.0).This determines at what\nfraction of camera far clip range, actor is not visible. Default\nis 0.80.\n"},
  {(char*)"GetDistanceLODThresholdMinValue", PyvtkProp3DAxisFollower_GetDistanceLODThresholdMinValue, METH_VARARGS,
   (char*)"V.GetDistanceLODThresholdMinValue() -> float\nC++: double GetDistanceLODThresholdMinValue()\n\nSet distance LOD threshold (0.0 - 1.0).This determines at what\nfraction of camera far clip range, actor is not visible. Default\nis 0.80.\n"},
  {(char*)"GetDistanceLODThresholdMaxValue", PyvtkProp3DAxisFollower_GetDistanceLODThresholdMaxValue, METH_VARARGS,
   (char*)"V.GetDistanceLODThresholdMaxValue() -> float\nC++: double GetDistanceLODThresholdMaxValue()\n\nSet distance LOD threshold (0.0 - 1.0).This determines at what\nfraction of camera far clip range, actor is not visible. Default\nis 0.80.\n"},
  {(char*)"GetDistanceLODThreshold", PyvtkProp3DAxisFollower_GetDistanceLODThreshold, METH_VARARGS,
   (char*)"V.GetDistanceLODThreshold() -> float\nC++: double GetDistanceLODThreshold()\n\nSet distance LOD threshold (0.0 - 1.0).This determines at what\nfraction of camera far clip range, actor is not visible. Default\nis 0.80.\n"},
  {(char*)"SetEnableViewAngleLOD", PyvtkProp3DAxisFollower_SetEnableViewAngleLOD, METH_VARARGS,
   (char*)"V.SetEnableViewAngleLOD(int)\nC++: void SetEnableViewAngleLOD(int a)\n\nEnable / disable use of view angle based LOD. If enabled the\nactor will not be visible at a certain view angle. Default is\ntrue.\n"},
  {(char*)"GetEnableViewAngleLOD", PyvtkProp3DAxisFollower_GetEnableViewAngleLOD, METH_VARARGS,
   (char*)"V.GetEnableViewAngleLOD() -> int\nC++: int GetEnableViewAngleLOD()\n\nEnable / disable use of view angle based LOD. If enabled the\nactor will not be visible at a certain view angle. Default is\ntrue.\n"},
  {(char*)"SetViewAngleLODThreshold", PyvtkProp3DAxisFollower_SetViewAngleLODThreshold, METH_VARARGS,
   (char*)"V.SetViewAngleLODThreshold(float)\nC++: void SetViewAngleLODThreshold(double)\n\nSet view angle LOD threshold (0.0 - 1.0).This determines at what\nview angle to geometry will make the geometry not visibile.\nDefault is 0.34.\n"},
  {(char*)"GetViewAngleLODThresholdMinValue", PyvtkProp3DAxisFollower_GetViewAngleLODThresholdMinValue, METH_VARARGS,
   (char*)"V.GetViewAngleLODThresholdMinValue() -> float\nC++: double GetViewAngleLODThresholdMinValue()\n\nSet view angle LOD threshold (0.0 - 1.0).This determines at what\nview angle to geometry will make the geometry not visibile.\nDefault is 0.34.\n"},
  {(char*)"GetViewAngleLODThresholdMaxValue", PyvtkProp3DAxisFollower_GetViewAngleLODThresholdMaxValue, METH_VARARGS,
   (char*)"V.GetViewAngleLODThresholdMaxValue() -> float\nC++: double GetViewAngleLODThresholdMaxValue()\n\nSet view angle LOD threshold (0.0 - 1.0).This determines at what\nview angle to geometry will make the geometry not visibile.\nDefault is 0.34.\n"},
  {(char*)"GetViewAngleLODThreshold", PyvtkProp3DAxisFollower_GetViewAngleLODThreshold, METH_VARARGS,
   (char*)"V.GetViewAngleLODThreshold() -> float\nC++: double GetViewAngleLODThreshold()\n\nSet view angle LOD threshold (0.0 - 1.0).This determines at what\nview angle to geometry will make the geometry not visibile.\nDefault is 0.34.\n"},
  {(char*)"SetScreenOffset", PyvtkProp3DAxisFollower_SetScreenOffset, METH_VARARGS,
   (char*)"V.SetScreenOffset(float)\nC++: void SetScreenOffset(double a)\n\nSet/Get the desired screen offset from the axis.\n"},
  {(char*)"GetScreenOffset", PyvtkProp3DAxisFollower_GetScreenOffset, METH_VARARGS,
   (char*)"V.GetScreenOffset() -> float\nC++: double GetScreenOffset()\n\nSet/Get the desired screen offset from the axis.\n"},
  {(char*)"ComputeMatrix", PyvtkProp3DAxisFollower_ComputeMatrix, METH_VARARGS,
   (char*)"V.ComputeMatrix()\nC++: virtual void ComputeMatrix()\n\nGenerate the matrix based on ivars. This method overloads its\nsuperclasses ComputeMatrix() method due to the special\nvtkProp3DAxisFollower matrix operations.\n"},
  {(char*)"ShallowCopy", PyvtkProp3DAxisFollower_ShallowCopy, METH_VARARGS,
   (char*)"V.ShallowCopy(vtkProp)\nC++: void ShallowCopy(vtkProp *prop)\n\nShallow copy of a follower. Overloads the virtual vtkProp method.\n"},
  {(char*)"AutoScale", PyvtkProp3DAxisFollower_AutoScale, METH_VARARGS | METH_STATIC,
   (char*)"V.AutoScale(vtkViewport, vtkCamera, float, [float, float, float])\n    -> float\nC++: static double AutoScale(vtkViewport *viewport,\n    vtkCamera *camera, double screenSize, double position[3])\n\nCalculate scale factor to maintain same size of a object on the\nscreen.\n"},
  {(char*)"RenderOpaqueGeometry", PyvtkProp3DAxisFollower_RenderOpaqueGeometry, METH_VARARGS,
   (char*)"V.RenderOpaqueGeometry(vtkViewport) -> int\nC++: virtual int RenderOpaqueGeometry(vtkViewport *viewport)\n\nThis causes the actor to be rendered. It in turn will render the\nactor's property, texture map and then mapper. If a property\nhasn't been assigned, then the actor will create one\nautomatically.\n"},
  {(char*)"RenderTranslucentPolygonalGeometry", PyvtkProp3DAxisFollower_RenderTranslucentPolygonalGeometry, METH_VARARGS,
   (char*)"V.RenderTranslucentPolygonalGeometry(vtkViewport) -> int\nC++: virtual int RenderTranslucentPolygonalGeometry(\n    vtkViewport *viewport)\n\nThis causes the actor to be rendered. It in turn will render the\nactor's property, texture map and then mapper. If a property\nhasn't been assigned, then the actor will create one\nautomatically.\n"},
  {(char*)"RenderVolumetricGeometry", PyvtkProp3DAxisFollower_RenderVolumetricGeometry, METH_VARARGS,
   (char*)"V.RenderVolumetricGeometry(vtkViewport) -> int\nC++: virtual int RenderVolumetricGeometry(vtkViewport *viewport)\n\nThis causes the actor to be rendered. It in turn will render the\nactor's property, texture map and then mapper. If a property\nhasn't been assigned, then the actor will create one\nautomatically.\n"},
  {(char*)"SetViewport", PyvtkProp3DAxisFollower_SetViewport, METH_VARARGS,
   (char*)"V.SetViewport(vtkViewport)\nC++: virtual void SetViewport(vtkViewport *viewport)\n\n"},
  {(char*)"GetViewport", PyvtkProp3DAxisFollower_GetViewport, METH_VARARGS,
   (char*)"V.GetViewport() -> vtkViewport\nC++: virtual vtkViewport *GetViewport()\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkProp3DAxisFollower_StaticNew()
{
  return vtkProp3DAxisFollower::New();
}

PyObject *PyVTKClass_vtkProp3DAxisFollowerNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkProp3DAxisFollower_StaticNew,
    PyvtkProp3DAxisFollower_Methods,
    "vtkProp3DAxisFollower", modulename,
    NULL, NULL,
    PyvtkProp3DAxisFollower_Doc(),
    PyVTKClass_vtkProp3DFollowerNew(modulename));
  return cls;
}

const char **PyvtkProp3DAxisFollower_Doc()
{
  static const char *docstring[] = {
    "vtkProp3DAxisFollower - a subclass of vtkProp3DFollower that ensures\n\n",
    "Superclass: vtkProp3DFollower\n\n",
    "vtkProp3DAxisFollower is a subclass of vtkProp3DFollower that always\nfollows its specified axis. More specifically it will not change its\nposition or scale, but it will continually update its orientation so\nthat it is aligned with the axis and facing at angle to the camera to\nprovide maximum visibilty. This is typically used for text labels for\n3d plots.\n\nSee Also:\n\nvtkFollower vtkAxisFollower vtk",
    "Prop3DFollower\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkProp3DAxisFollower(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkProp3DAxisFollowerNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkProp3DAxisFollower", o) != 0)
    {
    Py_DECREF(o);
    }

}

