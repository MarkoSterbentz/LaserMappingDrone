// python wrapper for vtkCamera
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkCamera.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkCamera(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkCameraNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkCamera_Doc();


static PyObject *
PyvtkCamera_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCamera *op = static_cast<vtkCamera *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkCamera::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCamera_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCamera *op = static_cast<vtkCamera *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkCamera::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCamera_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCamera *op = static_cast<vtkCamera *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkCamera *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkCamera::NewInstance());

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
PyvtkCamera_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkCamera *tempr = vtkCamera::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCamera_SetPosition_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCamera *op = static_cast<vtkCamera *>(vp);

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
      op->SetPosition(temp0, temp1, temp2);
      }
    else
      {
      op->vtkCamera::SetPosition(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkCamera_SetPosition_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCamera *op = static_cast<vtkCamera *>(vp);

  double temp0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetPosition(temp0);
      }
    else
      {
      op->vtkCamera::SetPosition(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkCamera_SetPosition(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkCamera_SetPosition_s1(self, args);
    case 1:
      return PyvtkCamera_SetPosition_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetPosition");
  return NULL;
}



static PyObject *
PyvtkCamera_GetPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCamera *op = static_cast<vtkCamera *>(vp);

  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetPosition() :
      op->vtkCamera::GetPosition());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkCamera_SetFocalPoint_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFocalPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCamera *op = static_cast<vtkCamera *>(vp);

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
      op->SetFocalPoint(temp0, temp1, temp2);
      }
    else
      {
      op->vtkCamera::SetFocalPoint(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkCamera_SetFocalPoint_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFocalPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCamera *op = static_cast<vtkCamera *>(vp);

  double temp0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetFocalPoint(temp0);
      }
    else
      {
      op->vtkCamera::SetFocalPoint(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkCamera_SetFocalPoint(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkCamera_SetFocalPoint_s1(self, args);
    case 1:
      return PyvtkCamera_SetFocalPoint_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetFocalPoint");
  return NULL;
}



static PyObject *
PyvtkCamera_GetFocalPoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFocalPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCamera *op = static_cast<vtkCamera *>(vp);

  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetFocalPoint() :
      op->vtkCamera::GetFocalPoint());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkCamera_SetViewUp_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetViewUp");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCamera *op = static_cast<vtkCamera *>(vp);

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
      op->SetViewUp(temp0, temp1, temp2);
      }
    else
      {
      op->vtkCamera::SetViewUp(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkCamera_SetViewUp_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetViewUp");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCamera *op = static_cast<vtkCamera *>(vp);

  double temp0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetViewUp(temp0);
      }
    else
      {
      op->vtkCamera::SetViewUp(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkCamera_SetViewUp(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkCamera_SetViewUp_s1(self, args);
    case 1:
      return PyvtkCamera_SetViewUp_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetViewUp");
  return NULL;
}



static PyObject *
PyvtkCamera_GetViewUp(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetViewUp");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCamera *op = static_cast<vtkCamera *>(vp);

  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetViewUp() :
      op->vtkCamera::GetViewUp());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkCamera_OrthogonalizeViewUp(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OrthogonalizeViewUp");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCamera *op = static_cast<vtkCamera *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->OrthogonalizeViewUp();
      }
    else
      {
      op->vtkCamera::OrthogonalizeViewUp();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCamera_SetDistance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDistance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCamera *op = static_cast<vtkCamera *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetDistance(temp0);
      }
    else
      {
      op->vtkCamera::SetDistance(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCamera_GetDistance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDistance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCamera *op = static_cast<vtkCamera *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetDistance() :
      op->vtkCamera::GetDistance());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCamera_GetDirectionOfProjection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDirectionOfProjection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCamera *op = static_cast<vtkCamera *>(vp);

  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetDirectionOfProjection() :
      op->vtkCamera::GetDirectionOfProjection());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkCamera_Dolly(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Dolly");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCamera *op = static_cast<vtkCamera *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->Dolly(temp0);
      }
    else
      {
      op->vtkCamera::Dolly(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCamera_SetRoll(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRoll");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCamera *op = static_cast<vtkCamera *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetRoll(temp0);
      }
    else
      {
      op->vtkCamera::SetRoll(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCamera_GetRoll(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRoll");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCamera *op = static_cast<vtkCamera *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetRoll() :
      op->vtkCamera::GetRoll());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCamera_Roll(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Roll");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCamera *op = static_cast<vtkCamera *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->Roll(temp0);
      }
    else
      {
      op->vtkCamera::Roll(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCamera_Azimuth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Azimuth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCamera *op = static_cast<vtkCamera *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->Azimuth(temp0);
      }
    else
      {
      op->vtkCamera::Azimuth(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCamera_Yaw(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Yaw");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCamera *op = static_cast<vtkCamera *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->Yaw(temp0);
      }
    else
      {
      op->vtkCamera::Yaw(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCamera_Elevation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Elevation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCamera *op = static_cast<vtkCamera *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->Elevation(temp0);
      }
    else
      {
      op->vtkCamera::Elevation(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCamera_Pitch(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Pitch");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCamera *op = static_cast<vtkCamera *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->Pitch(temp0);
      }
    else
      {
      op->vtkCamera::Pitch(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCamera_SetParallelProjection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetParallelProjection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCamera *op = static_cast<vtkCamera *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetParallelProjection(temp0);
      }
    else
      {
      op->vtkCamera::SetParallelProjection(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCamera_GetParallelProjection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetParallelProjection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCamera *op = static_cast<vtkCamera *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetParallelProjection() :
      op->vtkCamera::GetParallelProjection());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCamera_ParallelProjectionOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ParallelProjectionOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCamera *op = static_cast<vtkCamera *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ParallelProjectionOn();
      }
    else
      {
      op->vtkCamera::ParallelProjectionOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCamera_ParallelProjectionOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ParallelProjectionOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCamera *op = static_cast<vtkCamera *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ParallelProjectionOff();
      }
    else
      {
      op->vtkCamera::ParallelProjectionOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCamera_SetUseHorizontalViewAngle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseHorizontalViewAngle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCamera *op = static_cast<vtkCamera *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetUseHorizontalViewAngle(temp0);
      }
    else
      {
      op->vtkCamera::SetUseHorizontalViewAngle(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCamera_GetUseHorizontalViewAngle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseHorizontalViewAngle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCamera *op = static_cast<vtkCamera *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetUseHorizontalViewAngle() :
      op->vtkCamera::GetUseHorizontalViewAngle());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCamera_UseHorizontalViewAngleOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseHorizontalViewAngleOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCamera *op = static_cast<vtkCamera *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->UseHorizontalViewAngleOn();
      }
    else
      {
      op->vtkCamera::UseHorizontalViewAngleOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCamera_UseHorizontalViewAngleOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseHorizontalViewAngleOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCamera *op = static_cast<vtkCamera *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->UseHorizontalViewAngleOff();
      }
    else
      {
      op->vtkCamera::UseHorizontalViewAngleOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCamera_SetViewAngle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetViewAngle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCamera *op = static_cast<vtkCamera *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetViewAngle(temp0);
      }
    else
      {
      op->vtkCamera::SetViewAngle(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCamera_GetViewAngle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetViewAngle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCamera *op = static_cast<vtkCamera *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetViewAngle() :
      op->vtkCamera::GetViewAngle());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCamera_SetParallelScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetParallelScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCamera *op = static_cast<vtkCamera *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetParallelScale(temp0);
      }
    else
      {
      op->vtkCamera::SetParallelScale(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCamera_GetParallelScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetParallelScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCamera *op = static_cast<vtkCamera *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetParallelScale() :
      op->vtkCamera::GetParallelScale());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCamera_Zoom(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Zoom");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCamera *op = static_cast<vtkCamera *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->Zoom(temp0);
      }
    else
      {
      op->vtkCamera::Zoom(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCamera_SetClippingRange_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetClippingRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCamera *op = static_cast<vtkCamera *>(vp);

  double temp0;
  double temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetClippingRange(temp0, temp1);
      }
    else
      {
      op->vtkCamera::SetClippingRange(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkCamera_SetClippingRange_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetClippingRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCamera *op = static_cast<vtkCamera *>(vp);

  double temp0[2];
  const int size0 = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetClippingRange(temp0);
      }
    else
      {
      op->vtkCamera::SetClippingRange(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkCamera_SetClippingRange(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkCamera_SetClippingRange_s1(self, args);
    case 1:
      return PyvtkCamera_SetClippingRange_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetClippingRange");
  return NULL;
}



static PyObject *
PyvtkCamera_GetClippingRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClippingRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCamera *op = static_cast<vtkCamera *>(vp);

  int sizer = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetClippingRange() :
      op->vtkCamera::GetClippingRange());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkCamera_SetThickness(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetThickness");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCamera *op = static_cast<vtkCamera *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetThickness(temp0);
      }
    else
      {
      op->vtkCamera::SetThickness(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCamera_GetThickness(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetThickness");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCamera *op = static_cast<vtkCamera *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetThickness() :
      op->vtkCamera::GetThickness());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCamera_SetWindowCenter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWindowCenter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCamera *op = static_cast<vtkCamera *>(vp);

  double temp0;
  double temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetWindowCenter(temp0, temp1);
      }
    else
      {
      op->vtkCamera::SetWindowCenter(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCamera_GetWindowCenter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWindowCenter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCamera *op = static_cast<vtkCamera *>(vp);

  int sizer = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetWindowCenter() :
      op->vtkCamera::GetWindowCenter());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkCamera_SetObliqueAngles(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetObliqueAngles");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCamera *op = static_cast<vtkCamera *>(vp);

  double temp0;
  double temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetObliqueAngles(temp0, temp1);
      }
    else
      {
      op->vtkCamera::SetObliqueAngles(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCamera_ApplyTransform(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ApplyTransform");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCamera *op = static_cast<vtkCamera *>(vp);

  vtkTransform *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkTransform"))
    {
    if (ap.IsBound())
      {
      op->ApplyTransform(temp0);
      }
    else
      {
      op->vtkCamera::ApplyTransform(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCamera_GetViewPlaneNormal(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetViewPlaneNormal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCamera *op = static_cast<vtkCamera *>(vp);

  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetViewPlaneNormal() :
      op->vtkCamera::GetViewPlaneNormal());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkCamera_SetViewShear_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetViewShear");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCamera *op = static_cast<vtkCamera *>(vp);

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
      op->SetViewShear(temp0, temp1, temp2);
      }
    else
      {
      op->vtkCamera::SetViewShear(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkCamera_SetViewShear_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetViewShear");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCamera *op = static_cast<vtkCamera *>(vp);

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
      op->SetViewShear(temp0);
      }
    else
      {
      op->vtkCamera::SetViewShear(temp0);
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
PyvtkCamera_SetViewShear(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkCamera_SetViewShear_s1(self, args);
    case 1:
      return PyvtkCamera_SetViewShear_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetViewShear");
  return NULL;
}



static PyObject *
PyvtkCamera_GetViewShear(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetViewShear");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCamera *op = static_cast<vtkCamera *>(vp);

  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetViewShear() :
      op->vtkCamera::GetViewShear());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkCamera_SetEyeAngle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEyeAngle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCamera *op = static_cast<vtkCamera *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetEyeAngle(temp0);
      }
    else
      {
      op->vtkCamera::SetEyeAngle(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCamera_GetEyeAngle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEyeAngle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCamera *op = static_cast<vtkCamera *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetEyeAngle() :
      op->vtkCamera::GetEyeAngle());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCamera_SetFocalDisk(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFocalDisk");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCamera *op = static_cast<vtkCamera *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetFocalDisk(temp0);
      }
    else
      {
      op->vtkCamera::SetFocalDisk(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCamera_GetFocalDisk(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFocalDisk");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCamera *op = static_cast<vtkCamera *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetFocalDisk() :
      op->vtkCamera::GetFocalDisk());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCamera_SetUseOffAxisProjection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseOffAxisProjection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCamera *op = static_cast<vtkCamera *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetUseOffAxisProjection(temp0);
      }
    else
      {
      op->vtkCamera::SetUseOffAxisProjection(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCamera_GetUseOffAxisProjection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseOffAxisProjection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCamera *op = static_cast<vtkCamera *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetUseOffAxisProjection() :
      op->vtkCamera::GetUseOffAxisProjection());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCamera_UseOffAxisProjectionOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseOffAxisProjectionOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCamera *op = static_cast<vtkCamera *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->UseOffAxisProjectionOn();
      }
    else
      {
      op->vtkCamera::UseOffAxisProjectionOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCamera_UseOffAxisProjectionOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseOffAxisProjectionOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCamera *op = static_cast<vtkCamera *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->UseOffAxisProjectionOff();
      }
    else
      {
      op->vtkCamera::UseOffAxisProjectionOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCamera_SetScreenBottomLeft_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScreenBottomLeft");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCamera *op = static_cast<vtkCamera *>(vp);

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
      op->SetScreenBottomLeft(temp0, temp1, temp2);
      }
    else
      {
      op->vtkCamera::SetScreenBottomLeft(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkCamera_SetScreenBottomLeft_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScreenBottomLeft");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCamera *op = static_cast<vtkCamera *>(vp);

  double temp0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetScreenBottomLeft(temp0);
      }
    else
      {
      op->vtkCamera::SetScreenBottomLeft(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkCamera_SetScreenBottomLeft(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkCamera_SetScreenBottomLeft_s1(self, args);
    case 1:
      return PyvtkCamera_SetScreenBottomLeft_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetScreenBottomLeft");
  return NULL;
}



static PyObject *
PyvtkCamera_GetScreenBottomLeft(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScreenBottomLeft");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCamera *op = static_cast<vtkCamera *>(vp);

  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetScreenBottomLeft() :
      op->vtkCamera::GetScreenBottomLeft());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkCamera_SetScreenBottomRight_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScreenBottomRight");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCamera *op = static_cast<vtkCamera *>(vp);

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
      op->SetScreenBottomRight(temp0, temp1, temp2);
      }
    else
      {
      op->vtkCamera::SetScreenBottomRight(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkCamera_SetScreenBottomRight_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScreenBottomRight");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCamera *op = static_cast<vtkCamera *>(vp);

  double temp0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetScreenBottomRight(temp0);
      }
    else
      {
      op->vtkCamera::SetScreenBottomRight(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkCamera_SetScreenBottomRight(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkCamera_SetScreenBottomRight_s1(self, args);
    case 1:
      return PyvtkCamera_SetScreenBottomRight_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetScreenBottomRight");
  return NULL;
}



static PyObject *
PyvtkCamera_GetScreenBottomRight(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScreenBottomRight");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCamera *op = static_cast<vtkCamera *>(vp);

  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetScreenBottomRight() :
      op->vtkCamera::GetScreenBottomRight());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkCamera_SetScreenTopRight_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScreenTopRight");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCamera *op = static_cast<vtkCamera *>(vp);

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
      op->SetScreenTopRight(temp0, temp1, temp2);
      }
    else
      {
      op->vtkCamera::SetScreenTopRight(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkCamera_SetScreenTopRight_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScreenTopRight");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCamera *op = static_cast<vtkCamera *>(vp);

  double temp0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetScreenTopRight(temp0);
      }
    else
      {
      op->vtkCamera::SetScreenTopRight(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkCamera_SetScreenTopRight(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkCamera_SetScreenTopRight_s1(self, args);
    case 1:
      return PyvtkCamera_SetScreenTopRight_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetScreenTopRight");
  return NULL;
}



static PyObject *
PyvtkCamera_GetScreenTopRight(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScreenTopRight");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCamera *op = static_cast<vtkCamera *>(vp);

  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetScreenTopRight() :
      op->vtkCamera::GetScreenTopRight());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkCamera_SetEyeSeparation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEyeSeparation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCamera *op = static_cast<vtkCamera *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetEyeSeparation(temp0);
      }
    else
      {
      op->vtkCamera::SetEyeSeparation(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCamera_GetEyeSeparation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEyeSeparation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCamera *op = static_cast<vtkCamera *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetEyeSeparation() :
      op->vtkCamera::GetEyeSeparation());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCamera_SetEyePosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEyePosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCamera *op = static_cast<vtkCamera *>(vp);

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
      op->SetEyePosition(temp0);
      }
    else
      {
      op->vtkCamera::SetEyePosition(temp0);
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
PyvtkCamera_GetEyePosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEyePosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCamera *op = static_cast<vtkCamera *>(vp);

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
      op->GetEyePosition(temp0);
      }
    else
      {
      op->vtkCamera::GetEyePosition(temp0);
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
PyvtkCamera_GetEyePlaneNormal(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEyePlaneNormal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCamera *op = static_cast<vtkCamera *>(vp);

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
      op->GetEyePlaneNormal(temp0);
      }
    else
      {
      op->vtkCamera::GetEyePlaneNormal(temp0);
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
PyvtkCamera_SetEyeTransformMatrix_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEyeTransformMatrix");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCamera *op = static_cast<vtkCamera *>(vp);

  vtkMatrix4x4 *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMatrix4x4"))
    {
    if (ap.IsBound())
      {
      op->SetEyeTransformMatrix(temp0);
      }
    else
      {
      op->vtkCamera::SetEyeTransformMatrix(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkCamera_SetEyeTransformMatrix_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEyeTransformMatrix");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCamera *op = static_cast<vtkCamera *>(vp);

  double temp0[16];
  const int size0 = 16;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetEyeTransformMatrix(temp0);
      }
    else
      {
      op->vtkCamera::SetEyeTransformMatrix(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkCamera_SetEyeTransformMatrix_Methods[] = {
  {NULL, PyvtkCamera_SetEyeTransformMatrix_s1, METH_VARARGS,
   (char*)"@O *vtkMatrix4x4"},
  {NULL, PyvtkCamera_SetEyeTransformMatrix_s2, METH_VARARGS,
   (char*)"@O *d"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkCamera_SetEyeTransformMatrix(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkCamera_SetEyeTransformMatrix_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetEyeTransformMatrix");
  return NULL;
}



static PyObject *
PyvtkCamera_GetEyeTransformMatrix(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEyeTransformMatrix");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCamera *op = static_cast<vtkCamera *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkMatrix4x4 *tempr = (ap.IsBound() ?
      op->GetEyeTransformMatrix() :
      op->vtkCamera::GetEyeTransformMatrix());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCamera_SetModelTransformMatrix_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetModelTransformMatrix");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCamera *op = static_cast<vtkCamera *>(vp);

  vtkMatrix4x4 *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMatrix4x4"))
    {
    if (ap.IsBound())
      {
      op->SetModelTransformMatrix(temp0);
      }
    else
      {
      op->vtkCamera::SetModelTransformMatrix(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkCamera_SetModelTransformMatrix_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetModelTransformMatrix");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCamera *op = static_cast<vtkCamera *>(vp);

  double temp0[16];
  const int size0 = 16;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetModelTransformMatrix(temp0);
      }
    else
      {
      op->vtkCamera::SetModelTransformMatrix(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkCamera_SetModelTransformMatrix_Methods[] = {
  {NULL, PyvtkCamera_SetModelTransformMatrix_s1, METH_VARARGS,
   (char*)"@O *vtkMatrix4x4"},
  {NULL, PyvtkCamera_SetModelTransformMatrix_s2, METH_VARARGS,
   (char*)"@O *d"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkCamera_SetModelTransformMatrix(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkCamera_SetModelTransformMatrix_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetModelTransformMatrix");
  return NULL;
}



static PyObject *
PyvtkCamera_GetModelTransformMatrix(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetModelTransformMatrix");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCamera *op = static_cast<vtkCamera *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkMatrix4x4 *tempr = (ap.IsBound() ?
      op->GetModelTransformMatrix() :
      op->vtkCamera::GetModelTransformMatrix());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCamera_GetModelViewTransformMatrix(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetModelViewTransformMatrix");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCamera *op = static_cast<vtkCamera *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkMatrix4x4 *tempr = (ap.IsBound() ?
      op->GetModelViewTransformMatrix() :
      op->vtkCamera::GetModelViewTransformMatrix());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCamera_GetModelViewTransformObject(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetModelViewTransformObject");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCamera *op = static_cast<vtkCamera *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkTransform *tempr = (ap.IsBound() ?
      op->GetModelViewTransformObject() :
      op->vtkCamera::GetModelViewTransformObject());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCamera_GetViewTransformMatrix(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetViewTransformMatrix");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCamera *op = static_cast<vtkCamera *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkMatrix4x4 *tempr = (ap.IsBound() ?
      op->GetViewTransformMatrix() :
      op->vtkCamera::GetViewTransformMatrix());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCamera_GetViewTransformObject(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetViewTransformObject");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCamera *op = static_cast<vtkCamera *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkTransform *tempr = (ap.IsBound() ?
      op->GetViewTransformObject() :
      op->vtkCamera::GetViewTransformObject());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCamera_GetProjectionTransformMatrix_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProjectionTransformMatrix");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCamera *op = static_cast<vtkCamera *>(vp);

  double temp0;
  double temp1;
  double temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    vtkMatrix4x4 *tempr = (ap.IsBound() ?
      op->GetProjectionTransformMatrix(temp0, temp1, temp2) :
      op->vtkCamera::GetProjectionTransformMatrix(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkCamera_GetProjectionTransformMatrix_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProjectionTransformMatrix");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCamera *op = static_cast<vtkCamera *>(vp);

  vtkRenderer *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkRenderer"))
    {
    vtkMatrix4x4 *tempr = (ap.IsBound() ?
      op->GetProjectionTransformMatrix(temp0) :
      op->vtkCamera::GetProjectionTransformMatrix(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkCamera_GetProjectionTransformMatrix(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkCamera_GetProjectionTransformMatrix_s1(self, args);
    case 1:
      return PyvtkCamera_GetProjectionTransformMatrix_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetProjectionTransformMatrix");
  return NULL;
}



static PyObject *
PyvtkCamera_GetProjectionTransformObject(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProjectionTransformObject");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCamera *op = static_cast<vtkCamera *>(vp);

  double temp0;
  double temp1;
  double temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    vtkPerspectiveTransform *tempr = (ap.IsBound() ?
      op->GetProjectionTransformObject(temp0, temp1, temp2) :
      op->vtkCamera::GetProjectionTransformObject(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCamera_GetCompositeProjectionTransformMatrix(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCompositeProjectionTransformMatrix");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCamera *op = static_cast<vtkCamera *>(vp);

  double temp0;
  double temp1;
  double temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    vtkMatrix4x4 *tempr = (ap.IsBound() ?
      op->GetCompositeProjectionTransformMatrix(temp0, temp1, temp2) :
      op->vtkCamera::GetCompositeProjectionTransformMatrix(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCamera_SetUserViewTransform(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUserViewTransform");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCamera *op = static_cast<vtkCamera *>(vp);

  vtkHomogeneousTransform *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkHomogeneousTransform"))
    {
    if (ap.IsBound())
      {
      op->SetUserViewTransform(temp0);
      }
    else
      {
      op->vtkCamera::SetUserViewTransform(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCamera_GetUserViewTransform(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUserViewTransform");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCamera *op = static_cast<vtkCamera *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkHomogeneousTransform *tempr = (ap.IsBound() ?
      op->GetUserViewTransform() :
      op->vtkCamera::GetUserViewTransform());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCamera_SetUserTransform(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUserTransform");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCamera *op = static_cast<vtkCamera *>(vp);

  vtkHomogeneousTransform *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkHomogeneousTransform"))
    {
    if (ap.IsBound())
      {
      op->SetUserTransform(temp0);
      }
    else
      {
      op->vtkCamera::SetUserTransform(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCamera_GetUserTransform(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUserTransform");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCamera *op = static_cast<vtkCamera *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkHomogeneousTransform *tempr = (ap.IsBound() ?
      op->GetUserTransform() :
      op->vtkCamera::GetUserTransform());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCamera_Render(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Render");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCamera *op = static_cast<vtkCamera *>(vp);

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
      op->vtkCamera::Render(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCamera_GetViewingRaysMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetViewingRaysMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCamera *op = static_cast<vtkCamera *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned long tempr = (ap.IsBound() ?
      op->GetViewingRaysMTime() :
      op->vtkCamera::GetViewingRaysMTime());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCamera_ViewingRaysModified(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ViewingRaysModified");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCamera *op = static_cast<vtkCamera *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ViewingRaysModified();
      }
    else
      {
      op->vtkCamera::ViewingRaysModified();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCamera_GetFrustumPlanes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFrustumPlanes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCamera *op = static_cast<vtkCamera *>(vp);

  double temp0;
  double temp1[24];
  double save1[24];
  const int size1 = 24;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
    {
    ap.SaveArray(temp1, save1, size1);

    if (ap.IsBound())
      {
      op->GetFrustumPlanes(temp0, temp1);
      }
    else
      {
      op->vtkCamera::GetFrustumPlanes(temp0, temp1);
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
PyvtkCamera_GetOrientation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOrientation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCamera *op = static_cast<vtkCamera *>(vp);

  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetOrientation() :
      op->vtkCamera::GetOrientation());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkCamera_GetOrientationWXYZ(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOrientationWXYZ");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCamera *op = static_cast<vtkCamera *>(vp);

  int sizer = 4;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetOrientationWXYZ() :
      op->vtkCamera::GetOrientationWXYZ());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkCamera_ComputeViewPlaneNormal(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeViewPlaneNormal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCamera *op = static_cast<vtkCamera *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ComputeViewPlaneNormal();
      }
    else
      {
      op->vtkCamera::ComputeViewPlaneNormal();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCamera_GetCameraLightTransformMatrix(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCameraLightTransformMatrix");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCamera *op = static_cast<vtkCamera *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkMatrix4x4 *tempr = (ap.IsBound() ?
      op->GetCameraLightTransformMatrix() :
      op->vtkCamera::GetCameraLightTransformMatrix());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCamera_UpdateViewport(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateViewport");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCamera *op = static_cast<vtkCamera *>(vp);

  vtkRenderer *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkRenderer"))
    {
    if (ap.IsBound())
      {
      op->UpdateViewport(temp0);
      }
    else
      {
      op->vtkCamera::UpdateViewport(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCamera_SetLeftEye(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLeftEye");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCamera *op = static_cast<vtkCamera *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetLeftEye(temp0);
      }
    else
      {
      op->vtkCamera::SetLeftEye(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCamera_GetLeftEye(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLeftEye");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCamera *op = static_cast<vtkCamera *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetLeftEye() :
      op->vtkCamera::GetLeftEye());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCamera_ShallowCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShallowCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCamera *op = static_cast<vtkCamera *>(vp);

  vtkCamera *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCamera"))
    {
    if (ap.IsBound())
      {
      op->ShallowCopy(temp0);
      }
    else
      {
      op->vtkCamera::ShallowCopy(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCamera_DeepCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeepCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCamera *op = static_cast<vtkCamera *>(vp);

  vtkCamera *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCamera"))
    {
    if (ap.IsBound())
      {
      op->DeepCopy(temp0);
      }
    else
      {
      op->vtkCamera::DeepCopy(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCamera_SetFreezeFocalPoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFreezeFocalPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCamera *op = static_cast<vtkCamera *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetFreezeFocalPoint(temp0);
      }
    else
      {
      op->vtkCamera::SetFreezeFocalPoint(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCamera_GetFreezeFocalPoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFreezeFocalPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCamera *op = static_cast<vtkCamera *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetFreezeFocalPoint() :
      op->vtkCamera::GetFreezeFocalPoint());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkCamera_Methods[] = {
  {(char*)"GetClassName", PyvtkCamera_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkCamera_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkCamera_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkCamera\nC++: vtkCamera *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkCamera_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkCamera\nC++: vtkCamera *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetPosition", PyvtkCamera_SetPosition, METH_VARARGS,
   (char*)"V.SetPosition(float, float, float)\nC++: void SetPosition(double x, double y, double z)\nV.SetPosition((float, float, float))\nC++: void SetPosition(const double a[3])\n\nSet/Get the position of the camera in world coordinates. The\ndefault position is (0,0,1).\n"},
  {(char*)"GetPosition", PyvtkCamera_GetPosition, METH_VARARGS,
   (char*)"V.GetPosition() -> (float, float, float)\nC++: double *GetPosition()\n\n"},
  {(char*)"SetFocalPoint", PyvtkCamera_SetFocalPoint, METH_VARARGS,
   (char*)"V.SetFocalPoint(float, float, float)\nC++: void SetFocalPoint(double x, double y, double z)\nV.SetFocalPoint((float, float, float))\nC++: void SetFocalPoint(const double a[3])\n\nSet/Get the focal of the camera in world coordinates. The default\nfocal point is the origin.\n"},
  {(char*)"GetFocalPoint", PyvtkCamera_GetFocalPoint, METH_VARARGS,
   (char*)"V.GetFocalPoint() -> (float, float, float)\nC++: double *GetFocalPoint()\n\n"},
  {(char*)"SetViewUp", PyvtkCamera_SetViewUp, METH_VARARGS,
   (char*)"V.SetViewUp(float, float, float)\nC++: void SetViewUp(double vx, double vy, double vz)\nV.SetViewUp((float, float, float))\nC++: void SetViewUp(const double a[3])\n\nSet/Get the view up direction for the camera.  The default is\n(0,1,0).\n"},
  {(char*)"GetViewUp", PyvtkCamera_GetViewUp, METH_VARARGS,
   (char*)"V.GetViewUp() -> (float, float, float)\nC++: double *GetViewUp()\n\n"},
  {(char*)"OrthogonalizeViewUp", PyvtkCamera_OrthogonalizeViewUp, METH_VARARGS,
   (char*)"V.OrthogonalizeViewUp()\nC++: void OrthogonalizeViewUp()\n\nRecompute the ViewUp vector to force it to be perpendicular to\ncamera->focalpoint vector.  Unless you are going to use Yaw or\nAzimuth on the camera, there is no need to do this.\n"},
  {(char*)"SetDistance", PyvtkCamera_SetDistance, METH_VARARGS,
   (char*)"V.SetDistance(float)\nC++: void SetDistance(double)\n\nMove the focal point so that it is the specified distance from\nthe camera position.  This distance must be positive.\n"},
  {(char*)"GetDistance", PyvtkCamera_GetDistance, METH_VARARGS,
   (char*)"V.GetDistance() -> float\nC++: double GetDistance()\n\nReturn the distance from the camera position to the focal point.\nThis distance is positive.\n"},
  {(char*)"GetDirectionOfProjection", PyvtkCamera_GetDirectionOfProjection, METH_VARARGS,
   (char*)"V.GetDirectionOfProjection() -> (float, float, float)\nC++: double *GetDirectionOfProjection()\n\n"},
  {(char*)"Dolly", PyvtkCamera_Dolly, METH_VARARGS,
   (char*)"V.Dolly(float)\nC++: void Dolly(double value)\n\nDivide the camera's distance from the focal point by the given\ndolly value.  Use a value greater than one to dolly-in toward the\nfocal point, and use a value less than one to dolly-out away from\nthe focal point.\n"},
  {(char*)"SetRoll", PyvtkCamera_SetRoll, METH_VARARGS,
   (char*)"V.SetRoll(float)\nC++: void SetRoll(double angle)\n\nSet the roll angle of the camera about the direction of\nprojection.\n"},
  {(char*)"GetRoll", PyvtkCamera_GetRoll, METH_VARARGS,
   (char*)"V.GetRoll() -> float\nC++: double GetRoll()\n\nSet the roll angle of the camera about the direction of\nprojection.\n"},
  {(char*)"Roll", PyvtkCamera_Roll, METH_VARARGS,
   (char*)"V.Roll(float)\nC++: void Roll(double angle)\n\nRotate the camera about the direction of projection.  This will\nspin the camera about its axis.\n"},
  {(char*)"Azimuth", PyvtkCamera_Azimuth, METH_VARARGS,
   (char*)"V.Azimuth(float)\nC++: void Azimuth(double angle)\n\nRotate the camera about the view up vector centered at the focal\npoint. Note that the view up vector is whatever was set via\nSetViewUp, and is not necessarily perpendicular to the direction\nof projection.  The result is a horizontal rotation of the\ncamera.\n"},
  {(char*)"Yaw", PyvtkCamera_Yaw, METH_VARARGS,
   (char*)"V.Yaw(float)\nC++: void Yaw(double angle)\n\nRotate the focal point about the view up vector, using the\ncamera's position as the center of rotation. Note that the view\nup vector is whatever was set via SetViewUp, and is not\nnecessarily perpendicular to the direction of projection.  The\nresult is a horizontal rotation of the scene.\n"},
  {(char*)"Elevation", PyvtkCamera_Elevation, METH_VARARGS,
   (char*)"V.Elevation(float)\nC++: void Elevation(double angle)\n\nRotate the camera about the cross product of the negative of the\ndirection of projection and the view up vector, using the focal\npoint as the center of rotation.  The result is a vertical\nrotation of the scene.\n"},
  {(char*)"Pitch", PyvtkCamera_Pitch, METH_VARARGS,
   (char*)"V.Pitch(float)\nC++: void Pitch(double angle)\n\nRotate the focal point about the cross product of the view up\nvector and the direction of projection, using the camera's\nposition as the center of rotation.  The result is a vertical\nrotation of the camera.\n"},
  {(char*)"SetParallelProjection", PyvtkCamera_SetParallelProjection, METH_VARARGS,
   (char*)"V.SetParallelProjection(int)\nC++: void SetParallelProjection(int flag)\n\nSet/Get the value of the ParallelProjection instance variable.\nThis determines if the camera should do a perspective or parallel\nprojection.\n"},
  {(char*)"GetParallelProjection", PyvtkCamera_GetParallelProjection, METH_VARARGS,
   (char*)"V.GetParallelProjection() -> int\nC++: int GetParallelProjection()\n\nSet/Get the value of the ParallelProjection instance variable.\nThis determines if the camera should do a perspective or parallel\nprojection.\n"},
  {(char*)"ParallelProjectionOn", PyvtkCamera_ParallelProjectionOn, METH_VARARGS,
   (char*)"V.ParallelProjectionOn()\nC++: void ParallelProjectionOn()\n\nSet/Get the value of the ParallelProjection instance variable.\nThis determines if the camera should do a perspective or parallel\nprojection.\n"},
  {(char*)"ParallelProjectionOff", PyvtkCamera_ParallelProjectionOff, METH_VARARGS,
   (char*)"V.ParallelProjectionOff()\nC++: void ParallelProjectionOff()\n\nSet/Get the value of the ParallelProjection instance variable.\nThis determines if the camera should do a perspective or parallel\nprojection.\n"},
  {(char*)"SetUseHorizontalViewAngle", PyvtkCamera_SetUseHorizontalViewAngle, METH_VARARGS,
   (char*)"V.SetUseHorizontalViewAngle(int)\nC++: void SetUseHorizontalViewAngle(int flag)\n\nSet/Get the value of the UseHorizontalViewAngle instance\nvariable. If set, the camera's view angle represents a horizontal\nview angle, rather than the default vertical view angle. This is\nuseful if the application uses a display device which whose specs\nindicate a particular horizontal view angle, or if the\napplication varies the window height but wants to keep the\nperspective transform unchanges.\n"},
  {(char*)"GetUseHorizontalViewAngle", PyvtkCamera_GetUseHorizontalViewAngle, METH_VARARGS,
   (char*)"V.GetUseHorizontalViewAngle() -> int\nC++: int GetUseHorizontalViewAngle()\n\nSet/Get the value of the UseHorizontalViewAngle instance\nvariable. If set, the camera's view angle represents a horizontal\nview angle, rather than the default vertical view angle. This is\nuseful if the application uses a display device which whose specs\nindicate a particular horizontal view angle, or if the\napplication varies the window height but wants to keep the\nperspective transform unchanges.\n"},
  {(char*)"UseHorizontalViewAngleOn", PyvtkCamera_UseHorizontalViewAngleOn, METH_VARARGS,
   (char*)"V.UseHorizontalViewAngleOn()\nC++: void UseHorizontalViewAngleOn()\n\nSet/Get the value of the UseHorizontalViewAngle instance\nvariable. If set, the camera's view angle represents a horizontal\nview angle, rather than the default vertical view angle. This is\nuseful if the application uses a display device which whose specs\nindicate a particular horizontal view angle, or if the\napplication varies the window height but wants to keep the\nperspective transform unchanges.\n"},
  {(char*)"UseHorizontalViewAngleOff", PyvtkCamera_UseHorizontalViewAngleOff, METH_VARARGS,
   (char*)"V.UseHorizontalViewAngleOff()\nC++: void UseHorizontalViewAngleOff()\n\nSet/Get the value of the UseHorizontalViewAngle instance\nvariable. If set, the camera's view angle represents a horizontal\nview angle, rather than the default vertical view angle. This is\nuseful if the application uses a display device which whose specs\nindicate a particular horizontal view angle, or if the\napplication varies the window height but wants to keep the\nperspective transform unchanges.\n"},
  {(char*)"SetViewAngle", PyvtkCamera_SetViewAngle, METH_VARARGS,
   (char*)"V.SetViewAngle(float)\nC++: void SetViewAngle(double angle)\n\nSet/Get the camera view angle, which is the angular height of the\ncamera view measured in degrees.  The default angle is 30\ndegrees. This method has no effect in parallel projection mode.\nThe formula for setting the angle up for perfect perspective\nviewing is: angle = 2*atan((h/2)/d) where h is the height of the\nRenderWindow (measured by holding a ruler up to your screen) and\nd is the distance from your eyes to the screen.\n"},
  {(char*)"GetViewAngle", PyvtkCamera_GetViewAngle, METH_VARARGS,
   (char*)"V.GetViewAngle() -> float\nC++: double GetViewAngle()\n\nSet/Get the camera view angle, which is the angular height of the\ncamera view measured in degrees.  The default angle is 30\ndegrees. This method has no effect in parallel projection mode.\nThe formula for setting the angle up for perfect perspective\nviewing is: angle = 2*atan((h/2)/d) where h is the height of the\nRenderWindow (measured by holding a ruler up to your screen) and\nd is the distance from your eyes to the screen.\n"},
  {(char*)"SetParallelScale", PyvtkCamera_SetParallelScale, METH_VARARGS,
   (char*)"V.SetParallelScale(float)\nC++: void SetParallelScale(double scale)\n\nSet/Get the scaling used for a parallel projection, i.e. the\nheight of the viewport in world-coordinate distances. The default\nis 1. Note that the \"scale\" parameter works as an \"inverse scale\"\n--- larger numbers produce smaller images. This method has no\neffect in perspective projection mode.\n"},
  {(char*)"GetParallelScale", PyvtkCamera_GetParallelScale, METH_VARARGS,
   (char*)"V.GetParallelScale() -> float\nC++: double GetParallelScale()\n\nSet/Get the scaling used for a parallel projection, i.e. the\nheight of the viewport in world-coordinate distances. The default\nis 1. Note that the \"scale\" parameter works as an \"inverse scale\"\n--- larger numbers produce smaller images. This method has no\neffect in perspective projection mode.\n"},
  {(char*)"Zoom", PyvtkCamera_Zoom, METH_VARARGS,
   (char*)"V.Zoom(float)\nC++: void Zoom(double factor)\n\nIn perspective mode, decrease the view angle by the specified\nfactor. In parallel mode, decrease the parallel scale by the\nspecified factor. A value greater than 1 is a zoom-in, a value\nless than 1 is a zoom-out.\n"},
  {(char*)"SetClippingRange", PyvtkCamera_SetClippingRange, METH_VARARGS,
   (char*)"V.SetClippingRange(float, float)\nC++: void SetClippingRange(double dNear, double dFar)\nV.SetClippingRange((float, float))\nC++: void SetClippingRange(const double a[2])\n\nSet/Get the location of the near and far clipping planes along\nthe direction of projection.  Both of these values must be\npositive. How the clipping planes are set can have a large impact\non how well z-buffering works.  In particular the front clipping\nplane can make a very big difference. Setting it to 0.01 when it\nreally could be 1.0 can have a big impact on your z-buffer\nresolution farther away.  The default clipping range is\n(0.1,1000). Clipping distance is measured in world coordinate\nunless a scale factor exists in camera's ModelTransformMatrix.\n"},
  {(char*)"GetClippingRange", PyvtkCamera_GetClippingRange, METH_VARARGS,
   (char*)"V.GetClippingRange() -> (float, float)\nC++: double *GetClippingRange()\n\n"},
  {(char*)"SetThickness", PyvtkCamera_SetThickness, METH_VARARGS,
   (char*)"V.SetThickness(float)\nC++: void SetThickness(double)\n\nSet the distance between clipping planes.  This method adjusts\nthe far clipping plane to be set a distance 'thickness' beyond\nthe near clipping plane.\n"},
  {(char*)"GetThickness", PyvtkCamera_GetThickness, METH_VARARGS,
   (char*)"V.GetThickness() -> float\nC++: double GetThickness()\n\nSet the distance between clipping planes.  This method adjusts\nthe far clipping plane to be set a distance 'thickness' beyond\nthe near clipping plane.\n"},
  {(char*)"SetWindowCenter", PyvtkCamera_SetWindowCenter, METH_VARARGS,
   (char*)"V.SetWindowCenter(float, float)\nC++: void SetWindowCenter(double x, double y)\n\nSet/Get the center of the window in viewport coordinates. The\nviewport coordinate range is ([-1,+1],[-1,+1]).  This method is\nfor if you have one window which consists of several viewports,\nor if you have several screens which you want to act together as\none large screen.\n"},
  {(char*)"GetWindowCenter", PyvtkCamera_GetWindowCenter, METH_VARARGS,
   (char*)"V.GetWindowCenter() -> (float, float)\nC++: double *GetWindowCenter()\n\n"},
  {(char*)"SetObliqueAngles", PyvtkCamera_SetObliqueAngles, METH_VARARGS,
   (char*)"V.SetObliqueAngles(float, float)\nC++: void SetObliqueAngles(double alpha, double beta)\n\nGet/Set the oblique viewing angles.  The first angle, alpha, is\nthe angle (measured from the horizontal) that rays along the\ndirection of projection will follow once projected onto the 2D\nscreen. The second angle, beta, is the angle between the view\nplane and the direction of projection.  This creates a shear\ntransform x' = x + dz*cos(alpha)/tan(beta), y' =\ndz*sin(alpha)/tan(beta) where dz is the distance of the point\nfrom the focal plane. The angles are (45,90) by default.  Oblique\nprojections commonly use (30,63.435).\n"},
  {(char*)"ApplyTransform", PyvtkCamera_ApplyTransform, METH_VARARGS,
   (char*)"V.ApplyTransform(vtkTransform)\nC++: void ApplyTransform(vtkTransform *t)\n\nApply a transform to the camera.  The camera position,\nfocal-point, and view-up are re-calculated using the transform's\nmatrix to multiply the old points by the new transform.\n"},
  {(char*)"GetViewPlaneNormal", PyvtkCamera_GetViewPlaneNormal, METH_VARARGS,
   (char*)"V.GetViewPlaneNormal() -> (float, float, float)\nC++: double *GetViewPlaneNormal()\n\n"},
  {(char*)"SetViewShear", PyvtkCamera_SetViewShear, METH_VARARGS,
   (char*)"V.SetViewShear(float, float, float)\nC++: void SetViewShear(double dxdz, double dydz, double center)\nV.SetViewShear([float, float, float])\nC++: void SetViewShear(double d[3])\n\nSet/get the shear transform of the viewing frustum.  Parameters\nare dx/dz, dy/dz, and center.  center is a factor that describes\nwhere to shear around. The distance dshear from the camera where\nno shear occurs is given by (dshear = center * FocalDistance).\n"},
  {(char*)"GetViewShear", PyvtkCamera_GetViewShear, METH_VARARGS,
   (char*)"V.GetViewShear() -> (float, float, float)\nC++: double *GetViewShear()\n\n"},
  {(char*)"SetEyeAngle", PyvtkCamera_SetEyeAngle, METH_VARARGS,
   (char*)"V.SetEyeAngle(float)\nC++: void SetEyeAngle(double a)\n\nSet/Get the separation between eyes (in degrees). This is used\nwhen generating stereo images.\n"},
  {(char*)"GetEyeAngle", PyvtkCamera_GetEyeAngle, METH_VARARGS,
   (char*)"V.GetEyeAngle() -> float\nC++: double GetEyeAngle()\n\nSet/Get the separation between eyes (in degrees). This is used\nwhen generating stereo images.\n"},
  {(char*)"SetFocalDisk", PyvtkCamera_SetFocalDisk, METH_VARARGS,
   (char*)"V.SetFocalDisk(float)\nC++: void SetFocalDisk(double a)\n\nSet the size of the cameras lens in world coordinates. This is\nonly used when the renderer is doing focal depth rendering. When\nthat is being done the size of the focal disk will effect how\nsignificant the depth effects will be.\n"},
  {(char*)"GetFocalDisk", PyvtkCamera_GetFocalDisk, METH_VARARGS,
   (char*)"V.GetFocalDisk() -> float\nC++: double GetFocalDisk()\n\nSet the size of the cameras lens in world coordinates. This is\nonly used when the renderer is doing focal depth rendering. When\nthat is being done the size of the focal disk will effect how\nsignificant the depth effects will be.\n"},
  {(char*)"SetUseOffAxisProjection", PyvtkCamera_SetUseOffAxisProjection, METH_VARARGS,
   (char*)"V.SetUseOffAxisProjection(int)\nC++: void SetUseOffAxisProjection(int a)\n\nSet/Get use offaxis frustum. OffAxis frustum is used for off-axis\nfrustum calculations specificly for stereo rendering. For\nreference see \"High Resolution Virtual Reality\", in Proc.\nSIGGRAPH '92, Computer Graphics, pages 195-202, 1992.\n"},
  {(char*)"GetUseOffAxisProjection", PyvtkCamera_GetUseOffAxisProjection, METH_VARARGS,
   (char*)"V.GetUseOffAxisProjection() -> int\nC++: int GetUseOffAxisProjection()\n\nSet/Get use offaxis frustum. OffAxis frustum is used for off-axis\nfrustum calculations specificly for stereo rendering. For\nreference see \"High Resolution Virtual Reality\", in Proc.\nSIGGRAPH '92, Computer Graphics, pages 195-202, 1992.\n"},
  {(char*)"UseOffAxisProjectionOn", PyvtkCamera_UseOffAxisProjectionOn, METH_VARARGS,
   (char*)"V.UseOffAxisProjectionOn()\nC++: void UseOffAxisProjectionOn()\n\nSet/Get use offaxis frustum. OffAxis frustum is used for off-axis\nfrustum calculations specificly for stereo rendering. For\nreference see \"High Resolution Virtual Reality\", in Proc.\nSIGGRAPH '92, Computer Graphics, pages 195-202, 1992.\n"},
  {(char*)"UseOffAxisProjectionOff", PyvtkCamera_UseOffAxisProjectionOff, METH_VARARGS,
   (char*)"V.UseOffAxisProjectionOff()\nC++: void UseOffAxisProjectionOff()\n\nSet/Get use offaxis frustum. OffAxis frustum is used for off-axis\nfrustum calculations specificly for stereo rendering. For\nreference see \"High Resolution Virtual Reality\", in Proc.\nSIGGRAPH '92, Computer Graphics, pages 195-202, 1992.\n"},
  {(char*)"SetScreenBottomLeft", PyvtkCamera_SetScreenBottomLeft, METH_VARARGS,
   (char*)"V.SetScreenBottomLeft(float, float, float)\nC++: void SetScreenBottomLeft(double, double, double)\nV.SetScreenBottomLeft((float, float, float))\nC++: void SetScreenBottomLeft(double a[3])\n\n"},
  {(char*)"GetScreenBottomLeft", PyvtkCamera_GetScreenBottomLeft, METH_VARARGS,
   (char*)"V.GetScreenBottomLeft() -> (float, float, float)\nC++: double *GetScreenBottomLeft()\n\n"},
  {(char*)"SetScreenBottomRight", PyvtkCamera_SetScreenBottomRight, METH_VARARGS,
   (char*)"V.SetScreenBottomRight(float, float, float)\nC++: void SetScreenBottomRight(double, double, double)\nV.SetScreenBottomRight((float, float, float))\nC++: void SetScreenBottomRight(double a[3])\n\n"},
  {(char*)"GetScreenBottomRight", PyvtkCamera_GetScreenBottomRight, METH_VARARGS,
   (char*)"V.GetScreenBottomRight() -> (float, float, float)\nC++: double *GetScreenBottomRight()\n\n"},
  {(char*)"SetScreenTopRight", PyvtkCamera_SetScreenTopRight, METH_VARARGS,
   (char*)"V.SetScreenTopRight(float, float, float)\nC++: void SetScreenTopRight(double, double, double)\nV.SetScreenTopRight((float, float, float))\nC++: void SetScreenTopRight(double a[3])\n\n"},
  {(char*)"GetScreenTopRight", PyvtkCamera_GetScreenTopRight, METH_VARARGS,
   (char*)"V.GetScreenTopRight() -> (float, float, float)\nC++: double *GetScreenTopRight()\n\n"},
  {(char*)"SetEyeSeparation", PyvtkCamera_SetEyeSeparation, METH_VARARGS,
   (char*)"V.SetEyeSeparation(float)\nC++: void SetEyeSeparation(double a)\n\nSet/Get distance between the eyes. This will be used only for\noffaxis frustum calculation. Default is 0.06.\n"},
  {(char*)"GetEyeSeparation", PyvtkCamera_GetEyeSeparation, METH_VARARGS,
   (char*)"V.GetEyeSeparation() -> float\nC++: double GetEyeSeparation()\n\nSet/Get distance between the eyes. This will be used only for\noffaxis frustum calculation. Default is 0.06.\n"},
  {(char*)"SetEyePosition", PyvtkCamera_SetEyePosition, METH_VARARGS,
   (char*)"V.SetEyePosition([float, float, float])\nC++: void SetEyePosition(double eyePosition[3])\n\nSet/Get the eye position (center point between two eyes). This is\na convenience function that sets the translation component of\nEyeTransformMatrix. This will be used only for offaxis frustum\ncalculation.\n"},
  {(char*)"GetEyePosition", PyvtkCamera_GetEyePosition, METH_VARARGS,
   (char*)"V.GetEyePosition([float, float, float])\nC++: void GetEyePosition(double eyePosition[3])\n\nSet/Get the eye position (center point between two eyes). This is\na convenience function that sets the translation component of\nEyeTransformMatrix. This will be used only for offaxis frustum\ncalculation.\n"},
  {(char*)"GetEyePlaneNormal", PyvtkCamera_GetEyePlaneNormal, METH_VARARGS,
   (char*)"V.GetEyePlaneNormal([float, float, float])\nC++: void GetEyePlaneNormal(double normal[3])\n\nGet normal vector from eye to screen rotated by\nEyeTransformMatrix. This will be used only for offaxis frustum\ncalculation.\n"},
  {(char*)"SetEyeTransformMatrix", PyvtkCamera_SetEyeTransformMatrix, METH_VARARGS,
   (char*)"V.SetEyeTransformMatrix(vtkMatrix4x4)\nC++: void SetEyeTransformMatrix(vtkMatrix4x4 *matrix)\nV.SetEyeTransformMatrix((float, float, float, float, float, float,\n     float, float, float, float, float, float, float, float,\n    float, float))\nC++: void SetEyeTransformMatrix(const double elements[16])\n\nSet/Get eye transformation matrix. This is the transformation\nmatrix for the point between eyes. This will be used only for\noffaxis frustum calculation. Default is identity.\n"},
  {(char*)"GetEyeTransformMatrix", PyvtkCamera_GetEyeTransformMatrix, METH_VARARGS,
   (char*)"V.GetEyeTransformMatrix() -> vtkMatrix4x4\nC++: vtkMatrix4x4 *GetEyeTransformMatrix()\n\nSet/Get eye transformation matrix. This is the transformation\nmatrix for the point between eyes. This will be used only for\noffaxis frustum calculation. Default is identity.\n"},
  {(char*)"SetModelTransformMatrix", PyvtkCamera_SetModelTransformMatrix, METH_VARARGS,
   (char*)"V.SetModelTransformMatrix(vtkMatrix4x4)\nC++: void SetModelTransformMatrix(vtkMatrix4x4 *matrix)\nV.SetModelTransformMatrix((float, float, float, float, float,\n    float, float, float, float, float, float, float, float, float,\n     float, float))\nC++: void SetModelTransformMatrix(const double elements[16])\n\nSet/Get model transformation matrix. This matrix could be used\nfor model related transformations such as scale, shear, roations\nand translations.\n"},
  {(char*)"GetModelTransformMatrix", PyvtkCamera_GetModelTransformMatrix, METH_VARARGS,
   (char*)"V.GetModelTransformMatrix() -> vtkMatrix4x4\nC++: vtkMatrix4x4 *GetModelTransformMatrix()\n\nSet/Get model transformation matrix. This matrix could be used\nfor model related transformations such as scale, shear, roations\nand translations.\n"},
  {(char*)"GetModelViewTransformMatrix", PyvtkCamera_GetModelViewTransformMatrix, METH_VARARGS,
   (char*)"V.GetModelViewTransformMatrix() -> vtkMatrix4x4\nC++: virtual vtkMatrix4x4 *GetModelViewTransformMatrix()\n\nReturn the model view matrix of model view transform.\n"},
  {(char*)"GetModelViewTransformObject", PyvtkCamera_GetModelViewTransformObject, METH_VARARGS,
   (char*)"V.GetModelViewTransformObject() -> vtkTransform\nC++: virtual vtkTransform *GetModelViewTransformObject()\n\nReturn the model view transform.\n"},
  {(char*)"GetViewTransformMatrix", PyvtkCamera_GetViewTransformMatrix, METH_VARARGS,
   (char*)"V.GetViewTransformMatrix() -> vtkMatrix4x4\nC++: virtual vtkMatrix4x4 *GetViewTransformMatrix()\n\nFor backward compatibility. Use GetModelViewTransformMatrix()\nnow. Return the matrix of the view transform. The ViewTransform\ndepends on only three ivars:  the Position, the FocalPoint, and\nthe ViewUp vector.  All the other methods are there simply for\nthe sake of the users' convenience.\n"},
  {(char*)"GetViewTransformObject", PyvtkCamera_GetViewTransformObject, METH_VARARGS,
   (char*)"V.GetViewTransformObject() -> vtkTransform\nC++: virtual vtkTransform *GetViewTransformObject()\n\nFor backward compatibility. Use GetModelViewTransformObject()\nnow. Return the view transform. If the camera's\nModelTransformMatrix is identity then the ViewTransform depends\non only three ivars: the Position, the FocalPoint, and the ViewUp\nvector. All the other methods are there simply for the sake of\nthe users' convenience.\n"},
  {(char*)"GetProjectionTransformMatrix", PyvtkCamera_GetProjectionTransformMatrix, METH_VARARGS,
   (char*)"V.GetProjectionTransformMatrix(float, float, float)\n    -> vtkMatrix4x4\nC++: virtual vtkMatrix4x4 *GetProjectionTransformMatrix(\n    double aspect, double nearz, double farz)\nV.GetProjectionTransformMatrix(vtkRenderer) -> vtkMatrix4x4\nC++: virtual vtkMatrix4x4 *GetProjectionTransformMatrix(\n    vtkRenderer *ren)\n\nReturn the projection transform matrix, which converts from\ncamera coordinates to viewport coordinates.  The 'aspect' is the\nwidth/height for the viewport, and the nearz and farz are the\nZ-buffer values that map to the near and far clipping planes. The\nviewport coordinates of a point located inside the frustum are in\nthe range ([-1,+1],[-1,+1],[nearz,farz]).\n"},
  {(char*)"GetProjectionTransformObject", PyvtkCamera_GetProjectionTransformObject, METH_VARARGS,
   (char*)"V.GetProjectionTransformObject(float, float, float)\n    -> vtkPerspectiveTransform\nC++: virtual vtkPerspectiveTransform *GetProjectionTransformObject(\n    double aspect, double nearz, double farz)\n\nReturn the projection transform matrix, which converts from\ncamera coordinates to viewport coordinates. The 'aspect' is the\nwidth/height for the viewport, and the nearz and farz are the\nZ-buffer values that map to the near and far clipping planes. The\nviewport coordinates of a point located inside the frustum are in\nthe range ([-1,+1],[-1,+1],[nearz,farz]).\n"},
  {(char*)"GetCompositeProjectionTransformMatrix", PyvtkCamera_GetCompositeProjectionTransformMatrix, METH_VARARGS,
   (char*)"V.GetCompositeProjectionTransformMatrix(float, float, float)\n    -> vtkMatrix4x4\nC++: virtual vtkMatrix4x4 *GetCompositeProjectionTransformMatrix(\n    double aspect, double nearz, double farz)\n\nReturn the concatenation of the ViewTransform and the\nProjectionTransform. This transform will convert world\ncoordinates to viewport coordinates. The 'aspect' is the\nwidth/height for the viewport, and the nearz and farz are the\nZ-buffer values that map to the near and far clipping planes. The\nviewport coordinates of a point located inside the frustum are in\nthe range ([-1,+1],[-1,+1],[nearz,farz]).\n"},
  {(char*)"SetUserViewTransform", PyvtkCamera_SetUserViewTransform, METH_VARARGS,
   (char*)"V.SetUserViewTransform(vtkHomogeneousTransform)\nC++: void SetUserViewTransform(vtkHomogeneousTransform *transform)\n\nIn addition to the instance variables such as position and\norientation, you can add an additional transformation for your\nown use.  This transformation is concatenated to the camera's\nViewTransform\n"},
  {(char*)"GetUserViewTransform", PyvtkCamera_GetUserViewTransform, METH_VARARGS,
   (char*)"V.GetUserViewTransform() -> vtkHomogeneousTransform\nC++: vtkHomogeneousTransform *GetUserViewTransform()\n\nIn addition to the instance variables such as position and\norientation, you can add an additional transformation for your\nown use.  This transformation is concatenated to the camera's\nViewTransform\n"},
  {(char*)"SetUserTransform", PyvtkCamera_SetUserTransform, METH_VARARGS,
   (char*)"V.SetUserTransform(vtkHomogeneousTransform)\nC++: void SetUserTransform(vtkHomogeneousTransform *transform)\n\nIn addition to the instance variables such as position and\norientation, you can add an additional transformation for your\nown use. This transformation is concatenated to the camera's\nProjectionTransform\n"},
  {(char*)"GetUserTransform", PyvtkCamera_GetUserTransform, METH_VARARGS,
   (char*)"V.GetUserTransform() -> vtkHomogeneousTransform\nC++: vtkHomogeneousTransform *GetUserTransform()\n\nIn addition to the instance variables such as position and\norientation, you can add an additional transformation for your\nown use. This transformation is concatenated to the camera's\nProjectionTransform\n"},
  {(char*)"Render", PyvtkCamera_Render, METH_VARARGS,
   (char*)"V.Render(vtkRenderer)\nC++: virtual void Render(vtkRenderer *)\n\nThis method causes the camera to set up whatever is required for\nviewing the scene. This is actually handled by an subclass of\nvtkCamera, which is created through New()\n"},
  {(char*)"GetViewingRaysMTime", PyvtkCamera_GetViewingRaysMTime, METH_VARARGS,
   (char*)"V.GetViewingRaysMTime() -> int\nC++: unsigned long GetViewingRaysMTime()\n\nReturn the MTime that concerns recomputing the view rays of the\ncamera.\n"},
  {(char*)"ViewingRaysModified", PyvtkCamera_ViewingRaysModified, METH_VARARGS,
   (char*)"V.ViewingRaysModified()\nC++: void ViewingRaysModified()\n\nMark that something has changed which requires the view rays to\nbe recomputed.\n"},
  {(char*)"GetFrustumPlanes", PyvtkCamera_GetFrustumPlanes, METH_VARARGS,
   (char*)"V.GetFrustumPlanes(float, [float, float, float, float, float,\n    float, float, float, float, float, float, float, float, float,\n     float, float, float, float, float, float, float, float,\n    float, float])\nC++: virtual void GetFrustumPlanes(double aspect,\n    double planes[24])\n\nGet the plane equations that bound the view frustum. The plane\nnormals point inward. The planes array contains six plane\nequations of the form (Ax+By+Cz+D=0), the first four values are\n(A,B,C,D) which repeats for each of the planes. The planes are\ngiven in the following order: -x,+x,-y,+y,-z,+z. Warning: it\nmeans left,right,bottom,top,far,near (NOT near,far) The aspect of\nthe viewport is needed to correctly compute the planes\n"},
  {(char*)"GetOrientation", PyvtkCamera_GetOrientation, METH_VARARGS,
   (char*)"V.GetOrientation() -> (float, float, float)\nC++: double *GetOrientation()\n\nGet the orientation of the camera.\n"},
  {(char*)"GetOrientationWXYZ", PyvtkCamera_GetOrientationWXYZ, METH_VARARGS,
   (char*)"V.GetOrientationWXYZ() -> (float, float, float, float)\nC++: double *GetOrientationWXYZ()\n\nGet the orientation of the camera.\n"},
  {(char*)"ComputeViewPlaneNormal", PyvtkCamera_ComputeViewPlaneNormal, METH_VARARGS,
   (char*)"V.ComputeViewPlaneNormal()\nC++: void ComputeViewPlaneNormal()\n\nThis method is called automatically whenever necessary, it should\nnever be used outside of vtkCamera.cxx.\n"},
  {(char*)"GetCameraLightTransformMatrix", PyvtkCamera_GetCameraLightTransformMatrix, METH_VARARGS,
   (char*)"V.GetCameraLightTransformMatrix() -> vtkMatrix4x4\nC++: vtkMatrix4x4 *GetCameraLightTransformMatrix()\n\nReturns a transformation matrix for a coordinate frame attached\nto the camera, where the camera is located at (0, 0, 1) looking\nat the focal point at (0, 0, 0), with up being (0, 1, 0).\n"},
  {(char*)"UpdateViewport", PyvtkCamera_UpdateViewport, METH_VARARGS,
   (char*)"V.UpdateViewport(vtkRenderer)\nC++: virtual void UpdateViewport(vtkRenderer *ren)\n\nUpdate the viewport\n"},
  {(char*)"SetLeftEye", PyvtkCamera_SetLeftEye, METH_VARARGS,
   (char*)"V.SetLeftEye(int)\nC++: void SetLeftEye(int a)\n\nSet the Left Eye setting\n"},
  {(char*)"GetLeftEye", PyvtkCamera_GetLeftEye, METH_VARARGS,
   (char*)"V.GetLeftEye() -> int\nC++: int GetLeftEye()\n\nSet the Left Eye setting\n"},
  {(char*)"ShallowCopy", PyvtkCamera_ShallowCopy, METH_VARARGS,
   (char*)"V.ShallowCopy(vtkCamera)\nC++: void ShallowCopy(vtkCamera *source)\n\nCopy the properties of `source' into `this'. Copy pointers of\nmatrices.\n\\pre source_exists!=0\n\\pre not_this: source!=this\n"},
  {(char*)"DeepCopy", PyvtkCamera_DeepCopy, METH_VARARGS,
   (char*)"V.DeepCopy(vtkCamera)\nC++: void DeepCopy(vtkCamera *source)\n\nCopy the properties of `source' into `this'. Copy the contents of\nthe matrices.\n\\pre source_exists!=0\n\\pre not_this: source!=this\n"},
  {(char*)"SetFreezeFocalPoint", PyvtkCamera_SetFreezeFocalPoint, METH_VARARGS,
   (char*)"V.SetFreezeFocalPoint(bool)\nC++: void SetFreezeFocalPoint(bool a)\n\nSet/Get the value of the FreezeDolly instance variable. This\ndetermines if the camera should move the focal point with the\ncamera position. HACK!!!\n"},
  {(char*)"GetFreezeFocalPoint", PyvtkCamera_GetFreezeFocalPoint, METH_VARARGS,
   (char*)"V.GetFreezeFocalPoint() -> bool\nC++: bool GetFreezeFocalPoint()\n\nSet/Get the value of the FreezeDolly instance variable. This\ndetermines if the camera should move the focal point with the\ncamera position. HACK!!!\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkCamera_StaticNew()
{
  return vtkCamera::New();
}

PyObject *PyVTKClass_vtkCameraNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkCamera_StaticNew,
    PyvtkCamera_Methods,
    "vtkCamera", modulename,
    NULL, NULL,
    PyvtkCamera_Doc(),
    PyVTKClass_vtkObjectNew(modulename));
  return cls;
}

const char **PyvtkCamera_Doc()
{
  static const char *docstring[] = {
    "vtkCamera - a virtual camera for 3D rendering\n\n",
    "Superclass: vtkObject\n\n",
    "vtkCamera is a virtual camera for 3D rendering. It provides methods\nto position and orient the view point and focal point. Convenience\nmethods for moving about the focal point also are provided. More\ncomplex methods allow the manipulation of the computer graphics model\nincluding view up vector, clipping planes, and camera perspective.\n\nSee Also:\n\nvtkPerspectiveTransform\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkCamera(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkCameraNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkCamera", o) != 0)
    {
    Py_DECREF(o);
    }

}

