// python wrapper for vtkAxisFollower
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkAxisFollower.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkAxisFollower(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkAxisFollowerNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkFollowerNew
extern "C" { PyObject *PyVTKClass_vtkFollowerNew(const char *); }
#define DECLARED_PyVTKClass_vtkFollowerNew
#endif

static const char **PyvtkAxisFollower_Doc();


static PyObject *
PyvtkAxisFollower_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisFollower *op = static_cast<vtkAxisFollower *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkAxisFollower::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAxisFollower_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisFollower *op = static_cast<vtkAxisFollower *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkAxisFollower::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAxisFollower_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisFollower *op = static_cast<vtkAxisFollower *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkAxisFollower *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkAxisFollower::NewInstance());

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
PyvtkAxisFollower_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkAxisFollower *tempr = vtkAxisFollower::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAxisFollower_SetAxis(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAxis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisFollower *op = static_cast<vtkAxisFollower *>(vp);

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
      op->vtkAxisFollower::SetAxis(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAxisFollower_GetAxis(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAxis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisFollower *op = static_cast<vtkAxisFollower *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkAxisActor *tempr = (ap.IsBound() ?
      op->GetAxis() :
      op->vtkAxisFollower::GetAxis());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAxisFollower_SetAutoCenter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAutoCenter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisFollower *op = static_cast<vtkAxisFollower *>(vp);

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
      op->vtkAxisFollower::SetAutoCenter(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAxisFollower_GetAutoCenter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAutoCenter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisFollower *op = static_cast<vtkAxisFollower *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetAutoCenter() :
      op->vtkAxisFollower::GetAutoCenter());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAxisFollower_AutoCenterOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AutoCenterOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisFollower *op = static_cast<vtkAxisFollower *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->AutoCenterOn();
      }
    else
      {
      op->vtkAxisFollower::AutoCenterOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAxisFollower_AutoCenterOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AutoCenterOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisFollower *op = static_cast<vtkAxisFollower *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->AutoCenterOff();
      }
    else
      {
      op->vtkAxisFollower::AutoCenterOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAxisFollower_SetEnableDistanceLOD(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEnableDistanceLOD");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisFollower *op = static_cast<vtkAxisFollower *>(vp);

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
      op->vtkAxisFollower::SetEnableDistanceLOD(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAxisFollower_GetEnableDistanceLOD(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEnableDistanceLOD");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisFollower *op = static_cast<vtkAxisFollower *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetEnableDistanceLOD() :
      op->vtkAxisFollower::GetEnableDistanceLOD());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAxisFollower_SetDistanceLODThreshold(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDistanceLODThreshold");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisFollower *op = static_cast<vtkAxisFollower *>(vp);

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
      op->vtkAxisFollower::SetDistanceLODThreshold(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAxisFollower_GetDistanceLODThresholdMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDistanceLODThresholdMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisFollower *op = static_cast<vtkAxisFollower *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetDistanceLODThresholdMinValue() :
      op->vtkAxisFollower::GetDistanceLODThresholdMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAxisFollower_GetDistanceLODThresholdMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDistanceLODThresholdMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisFollower *op = static_cast<vtkAxisFollower *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetDistanceLODThresholdMaxValue() :
      op->vtkAxisFollower::GetDistanceLODThresholdMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAxisFollower_GetDistanceLODThreshold(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDistanceLODThreshold");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisFollower *op = static_cast<vtkAxisFollower *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetDistanceLODThreshold() :
      op->vtkAxisFollower::GetDistanceLODThreshold());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAxisFollower_SetEnableViewAngleLOD(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEnableViewAngleLOD");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisFollower *op = static_cast<vtkAxisFollower *>(vp);

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
      op->vtkAxisFollower::SetEnableViewAngleLOD(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAxisFollower_GetEnableViewAngleLOD(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEnableViewAngleLOD");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisFollower *op = static_cast<vtkAxisFollower *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetEnableViewAngleLOD() :
      op->vtkAxisFollower::GetEnableViewAngleLOD());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAxisFollower_SetViewAngleLODThreshold(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetViewAngleLODThreshold");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisFollower *op = static_cast<vtkAxisFollower *>(vp);

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
      op->vtkAxisFollower::SetViewAngleLODThreshold(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAxisFollower_GetViewAngleLODThresholdMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetViewAngleLODThresholdMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisFollower *op = static_cast<vtkAxisFollower *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetViewAngleLODThresholdMinValue() :
      op->vtkAxisFollower::GetViewAngleLODThresholdMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAxisFollower_GetViewAngleLODThresholdMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetViewAngleLODThresholdMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisFollower *op = static_cast<vtkAxisFollower *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetViewAngleLODThresholdMaxValue() :
      op->vtkAxisFollower::GetViewAngleLODThresholdMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAxisFollower_GetViewAngleLODThreshold(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetViewAngleLODThreshold");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisFollower *op = static_cast<vtkAxisFollower *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetViewAngleLODThreshold() :
      op->vtkAxisFollower::GetViewAngleLODThreshold());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAxisFollower_SetScreenOffset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScreenOffset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisFollower *op = static_cast<vtkAxisFollower *>(vp);

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
      op->vtkAxisFollower::SetScreenOffset(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAxisFollower_GetScreenOffset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScreenOffset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisFollower *op = static_cast<vtkAxisFollower *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetScreenOffset() :
      op->vtkAxisFollower::GetScreenOffset());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAxisFollower_RenderOpaqueGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOpaqueGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisFollower *op = static_cast<vtkAxisFollower *>(vp);

  vtkViewport *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
    {
    int tempr = (ap.IsBound() ?
      op->RenderOpaqueGeometry(temp0) :
      op->vtkAxisFollower::RenderOpaqueGeometry(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAxisFollower_RenderTranslucentPolygonalGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderTranslucentPolygonalGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisFollower *op = static_cast<vtkAxisFollower *>(vp);

  vtkViewport *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
    {
    int tempr = (ap.IsBound() ?
      op->RenderTranslucentPolygonalGeometry(temp0) :
      op->vtkAxisFollower::RenderTranslucentPolygonalGeometry(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAxisFollower_Render(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Render");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisFollower *op = static_cast<vtkAxisFollower *>(vp);

  vtkRenderer *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkRenderer"))
    {
    if (ap.IsBound())
      {
      op->Render(temp0);
      }
    else
      {
      op->vtkAxisFollower::Render(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAxisFollower_ComputeTransformMatrix(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeTransformMatrix");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisFollower *op = static_cast<vtkAxisFollower *>(vp);

  vtkRenderer *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkRenderer"))
    {
    if (ap.IsBound())
      {
      op->ComputeTransformMatrix(temp0);
      }
    else
      {
      op->vtkAxisFollower::ComputeTransformMatrix(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAxisFollower_ShallowCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShallowCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisFollower *op = static_cast<vtkAxisFollower *>(vp);

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
      op->vtkAxisFollower::ShallowCopy(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAxisFollower_AutoScale(PyObject *, PyObject *args)
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

    double tempr = vtkAxisFollower::AutoScale(temp0, temp1, temp2, temp3);

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

static PyMethodDef PyvtkAxisFollower_Methods[] = {
  {(char*)"GetClassName", PyvtkAxisFollower_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkAxisFollower_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkAxisFollower_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkAxisFollower\nC++: vtkAxisFollower *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkAxisFollower_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkAxisFollower\nC++: vtkAxisFollower *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetAxis", PyvtkAxisFollower_SetAxis, METH_VARARGS,
   (char*)"V.SetAxis(vtkAxisActor)\nC++: virtual void SetAxis(vtkAxisActor *)\n\nSet axis that needs to be followed.\n"},
  {(char*)"GetAxis", PyvtkAxisFollower_GetAxis, METH_VARARGS,
   (char*)"V.GetAxis() -> vtkAxisActor\nC++: virtual vtkAxisActor *GetAxis()\n\nSet axis that needs to be followed.\n"},
  {(char*)"SetAutoCenter", PyvtkAxisFollower_SetAutoCenter, METH_VARARGS,
   (char*)"V.SetAutoCenter(int)\nC++: void SetAutoCenter(int a)\n\nSet/Get state of auto center mode where additional translation\nwill be added to make sure the underlying geometry has its pivot\npoint at the center of its bounds.\n"},
  {(char*)"GetAutoCenter", PyvtkAxisFollower_GetAutoCenter, METH_VARARGS,
   (char*)"V.GetAutoCenter() -> int\nC++: int GetAutoCenter()\n\nSet/Get state of auto center mode where additional translation\nwill be added to make sure the underlying geometry has its pivot\npoint at the center of its bounds.\n"},
  {(char*)"AutoCenterOn", PyvtkAxisFollower_AutoCenterOn, METH_VARARGS,
   (char*)"V.AutoCenterOn()\nC++: void AutoCenterOn()\n\nSet/Get state of auto center mode where additional translation\nwill be added to make sure the underlying geometry has its pivot\npoint at the center of its bounds.\n"},
  {(char*)"AutoCenterOff", PyvtkAxisFollower_AutoCenterOff, METH_VARARGS,
   (char*)"V.AutoCenterOff()\nC++: void AutoCenterOff()\n\nSet/Get state of auto center mode where additional translation\nwill be added to make sure the underlying geometry has its pivot\npoint at the center of its bounds.\n"},
  {(char*)"SetEnableDistanceLOD", PyvtkAxisFollower_SetEnableDistanceLOD, METH_VARARGS,
   (char*)"V.SetEnableDistanceLOD(int)\nC++: void SetEnableDistanceLOD(int a)\n\nEnable / disable use of distance based LOD. If enabled the actor\nwill not be visible at a certain distance from the camera.\nDefault is false.\n"},
  {(char*)"GetEnableDistanceLOD", PyvtkAxisFollower_GetEnableDistanceLOD, METH_VARARGS,
   (char*)"V.GetEnableDistanceLOD() -> int\nC++: int GetEnableDistanceLOD()\n\nEnable / disable use of distance based LOD. If enabled the actor\nwill not be visible at a certain distance from the camera.\nDefault is false.\n"},
  {(char*)"SetDistanceLODThreshold", PyvtkAxisFollower_SetDistanceLODThreshold, METH_VARARGS,
   (char*)"V.SetDistanceLODThreshold(float)\nC++: void SetDistanceLODThreshold(double)\n\nSet distance LOD threshold (0.0 - 1.0).This determines at what\nfraction of camera far clip range, actor is not visible. Default\nis 0.80.\n"},
  {(char*)"GetDistanceLODThresholdMinValue", PyvtkAxisFollower_GetDistanceLODThresholdMinValue, METH_VARARGS,
   (char*)"V.GetDistanceLODThresholdMinValue() -> float\nC++: double GetDistanceLODThresholdMinValue()\n\nSet distance LOD threshold (0.0 - 1.0).This determines at what\nfraction of camera far clip range, actor is not visible. Default\nis 0.80.\n"},
  {(char*)"GetDistanceLODThresholdMaxValue", PyvtkAxisFollower_GetDistanceLODThresholdMaxValue, METH_VARARGS,
   (char*)"V.GetDistanceLODThresholdMaxValue() -> float\nC++: double GetDistanceLODThresholdMaxValue()\n\nSet distance LOD threshold (0.0 - 1.0).This determines at what\nfraction of camera far clip range, actor is not visible. Default\nis 0.80.\n"},
  {(char*)"GetDistanceLODThreshold", PyvtkAxisFollower_GetDistanceLODThreshold, METH_VARARGS,
   (char*)"V.GetDistanceLODThreshold() -> float\nC++: double GetDistanceLODThreshold()\n\nSet distance LOD threshold (0.0 - 1.0).This determines at what\nfraction of camera far clip range, actor is not visible. Default\nis 0.80.\n"},
  {(char*)"SetEnableViewAngleLOD", PyvtkAxisFollower_SetEnableViewAngleLOD, METH_VARARGS,
   (char*)"V.SetEnableViewAngleLOD(int)\nC++: void SetEnableViewAngleLOD(int a)\n\nEnable / disable use of view angle based LOD. If enabled the\nactor will not be visible at a certain view angle. Default is\ntrue.\n"},
  {(char*)"GetEnableViewAngleLOD", PyvtkAxisFollower_GetEnableViewAngleLOD, METH_VARARGS,
   (char*)"V.GetEnableViewAngleLOD() -> int\nC++: int GetEnableViewAngleLOD()\n\nEnable / disable use of view angle based LOD. If enabled the\nactor will not be visible at a certain view angle. Default is\ntrue.\n"},
  {(char*)"SetViewAngleLODThreshold", PyvtkAxisFollower_SetViewAngleLODThreshold, METH_VARARGS,
   (char*)"V.SetViewAngleLODThreshold(float)\nC++: void SetViewAngleLODThreshold(double)\n\nSet view angle LOD threshold (0.0 - 1.0).This determines at what\nview angle to geometry will make the geometry not visibile.\nDefault is 0.34.\n"},
  {(char*)"GetViewAngleLODThresholdMinValue", PyvtkAxisFollower_GetViewAngleLODThresholdMinValue, METH_VARARGS,
   (char*)"V.GetViewAngleLODThresholdMinValue() -> float\nC++: double GetViewAngleLODThresholdMinValue()\n\nSet view angle LOD threshold (0.0 - 1.0).This determines at what\nview angle to geometry will make the geometry not visibile.\nDefault is 0.34.\n"},
  {(char*)"GetViewAngleLODThresholdMaxValue", PyvtkAxisFollower_GetViewAngleLODThresholdMaxValue, METH_VARARGS,
   (char*)"V.GetViewAngleLODThresholdMaxValue() -> float\nC++: double GetViewAngleLODThresholdMaxValue()\n\nSet view angle LOD threshold (0.0 - 1.0).This determines at what\nview angle to geometry will make the geometry not visibile.\nDefault is 0.34.\n"},
  {(char*)"GetViewAngleLODThreshold", PyvtkAxisFollower_GetViewAngleLODThreshold, METH_VARARGS,
   (char*)"V.GetViewAngleLODThreshold() -> float\nC++: double GetViewAngleLODThreshold()\n\nSet view angle LOD threshold (0.0 - 1.0).This determines at what\nview angle to geometry will make the geometry not visibile.\nDefault is 0.34.\n"},
  {(char*)"SetScreenOffset", PyvtkAxisFollower_SetScreenOffset, METH_VARARGS,
   (char*)"V.SetScreenOffset(float)\nC++: void SetScreenOffset(double a)\n\nSet/Get the desired screen offset from the axis.\n"},
  {(char*)"GetScreenOffset", PyvtkAxisFollower_GetScreenOffset, METH_VARARGS,
   (char*)"V.GetScreenOffset() -> float\nC++: double GetScreenOffset()\n\nSet/Get the desired screen offset from the axis.\n"},
  {(char*)"RenderOpaqueGeometry", PyvtkAxisFollower_RenderOpaqueGeometry, METH_VARARGS,
   (char*)"V.RenderOpaqueGeometry(vtkViewport) -> int\nC++: virtual int RenderOpaqueGeometry(vtkViewport *viewport)\n\nThis causes the actor to be rendered. It in turn will render the\nactor's property, texture map and then mapper. If a property\nhasn't been assigned, then the actor will create one\nautomatically.\n"},
  {(char*)"RenderTranslucentPolygonalGeometry", PyvtkAxisFollower_RenderTranslucentPolygonalGeometry, METH_VARARGS,
   (char*)"V.RenderTranslucentPolygonalGeometry(vtkViewport) -> int\nC++: virtual int RenderTranslucentPolygonalGeometry(\n    vtkViewport *viewport)\n\nThis causes the actor to be rendered. It in turn will render the\nactor's property, texture map and then mapper. If a property\nhasn't been assigned, then the actor will create one\nautomatically.\n"},
  {(char*)"Render", PyvtkAxisFollower_Render, METH_VARARGS,
   (char*)"V.Render(vtkRenderer)\nC++: virtual void Render(vtkRenderer *ren)\n\nThis causes the actor to be rendered. It in turn will render the\nactor's property, texture map and then mapper. If a property\nhasn't been assigned, then the actor will create one\nautomatically.\n"},
  {(char*)"ComputeTransformMatrix", PyvtkAxisFollower_ComputeTransformMatrix, METH_VARARGS,
   (char*)"V.ComputeTransformMatrix(vtkRenderer)\nC++: virtual void ComputeTransformMatrix(vtkRenderer *ren)\n\nGenerate the matrix based on ivars. This method overloads its\nsuperclasses ComputeMatrix() method due to the special\nvtkFollower matrix operations.\n"},
  {(char*)"ShallowCopy", PyvtkAxisFollower_ShallowCopy, METH_VARARGS,
   (char*)"V.ShallowCopy(vtkProp)\nC++: void ShallowCopy(vtkProp *prop)\n\nShallow copy of a follower. Overloads the virtual vtkProp method.\n"},
  {(char*)"AutoScale", PyvtkAxisFollower_AutoScale, METH_VARARGS | METH_STATIC,
   (char*)"V.AutoScale(vtkViewport, vtkCamera, float, [float, float, float])\n    -> float\nC++: static double AutoScale(vtkViewport *viewport,\n    vtkCamera *camera, double screenSize, double position[3])\n\nCalculate scale factor to maintain same size of a object on the\nscreen.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkAxisFollower_StaticNew()
{
  return vtkAxisFollower::New();
}

PyObject *PyVTKClass_vtkAxisFollowerNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkAxisFollower_StaticNew,
    PyvtkAxisFollower_Methods,
    "vtkAxisFollower", modulename,
    NULL, NULL,
    PyvtkAxisFollower_Doc(),
    PyVTKClass_vtkFollowerNew(modulename));
  return cls;
}

const char **PyvtkAxisFollower_Doc()
{
  static const char *docstring[] = {
    "vtkAxisFollower - a subclass of vtkFollower that ensures that\n\n",
    "Superclass: vtkFollower\n\n",
    "vtkAxisFollower is a subclass of vtkFollower that always follows its\nspecified axis. More specifically it will not change its position or\nscale, but it will continually update its orientation so that it is\naliged with the axis and facing at angle to the camera to provide\nmaximum visibilty. This is typically used for text labels for 3d\nplots.\n\nSee Also:\n\nvtkActor vtkFollower vtkCamera vtkAxisActor ",
    "vtkCubeAxesActor\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkAxisFollower(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkAxisFollowerNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkAxisFollower", o) != 0)
    {
    Py_DECREF(o);
    }

}

