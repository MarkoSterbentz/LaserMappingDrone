// python wrapper for vtkSMAnimationScene
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkSMAnimationScene.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkSMAnimationScene(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkSMAnimationSceneNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkAnimationCueNew
extern "C" { PyObject *PyVTKClass_vtkAnimationCueNew(const char *); }
#define DECLARED_PyVTKClass_vtkAnimationCueNew
#endif

static const char **PyvtkSMAnimationScene_Doc();


static PyObject *
PyvtkSMAnimationScene_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMAnimationScene *op = static_cast<vtkSMAnimationScene *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkSMAnimationScene::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMAnimationScene_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMAnimationScene *op = static_cast<vtkSMAnimationScene *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSMAnimationScene::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMAnimationScene_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMAnimationScene *op = static_cast<vtkSMAnimationScene *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkSMAnimationScene *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSMAnimationScene::NewInstance());

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
PyvtkSMAnimationScene_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkSMAnimationScene *tempr = vtkSMAnimationScene::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMAnimationScene_AddCue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddCue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMAnimationScene *op = static_cast<vtkSMAnimationScene *>(vp);

  vtkAnimationCue *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAnimationCue"))
    {
    if (ap.IsBound())
      {
      op->AddCue(temp0);
      }
    else
      {
      op->vtkSMAnimationScene::AddCue(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMAnimationScene_RemoveCue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveCue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMAnimationScene *op = static_cast<vtkSMAnimationScene *>(vp);

  vtkAnimationCue *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAnimationCue"))
    {
    if (ap.IsBound())
      {
      op->RemoveCue(temp0);
      }
    else
      {
      op->vtkSMAnimationScene::RemoveCue(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMAnimationScene_RemoveAllCues(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveAllCues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMAnimationScene *op = static_cast<vtkSMAnimationScene *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->RemoveAllCues();
      }
    else
      {
      op->vtkSMAnimationScene::RemoveAllCues();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMAnimationScene_GetNumberOfCues(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfCues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMAnimationScene *op = static_cast<vtkSMAnimationScene *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfCues() :
      op->vtkSMAnimationScene::GetNumberOfCues());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMAnimationScene_AddViewProxy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddViewProxy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMAnimationScene *op = static_cast<vtkSMAnimationScene *>(vp);

  vtkSMViewProxy *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMViewProxy"))
    {
    if (ap.IsBound())
      {
      op->AddViewProxy(temp0);
      }
    else
      {
      op->vtkSMAnimationScene::AddViewProxy(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMAnimationScene_RemoveViewProxy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveViewProxy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMAnimationScene *op = static_cast<vtkSMAnimationScene *>(vp);

  vtkSMViewProxy *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMViewProxy"))
    {
    if (ap.IsBound())
      {
      op->RemoveViewProxy(temp0);
      }
    else
      {
      op->vtkSMAnimationScene::RemoveViewProxy(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMAnimationScene_RemoveAllViewProxies(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveAllViewProxies");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMAnimationScene *op = static_cast<vtkSMAnimationScene *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->RemoveAllViewProxies();
      }
    else
      {
      op->vtkSMAnimationScene::RemoveAllViewProxies();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMAnimationScene_GetNumberOfViewProxies(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfViewProxies");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMAnimationScene *op = static_cast<vtkSMAnimationScene *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned int tempr = (ap.IsBound() ?
      op->GetNumberOfViewProxies() :
      op->vtkSMAnimationScene::GetNumberOfViewProxies());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMAnimationScene_GetViewProxy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetViewProxy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMAnimationScene *op = static_cast<vtkSMAnimationScene *>(vp);

  unsigned int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkSMViewProxy *tempr = (ap.IsBound() ?
      op->GetViewProxy(temp0) :
      op->vtkSMAnimationScene::GetViewProxy(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMAnimationScene_SetCaching(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCaching");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMAnimationScene *op = static_cast<vtkSMAnimationScene *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetCaching(temp0);
      }
    else
      {
      op->vtkSMAnimationScene::SetCaching(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMAnimationScene_GetCaching(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCaching");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMAnimationScene *op = static_cast<vtkSMAnimationScene *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetCaching() :
      op->vtkSMAnimationScene::GetCaching());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMAnimationScene_SetTimeKeeper(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTimeKeeper");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMAnimationScene *op = static_cast<vtkSMAnimationScene *>(vp);

  vtkSMProxy *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMProxy"))
    {
    if (ap.IsBound())
      {
      op->SetTimeKeeper(temp0);
      }
    else
      {
      op->vtkSMAnimationScene::SetTimeKeeper(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMAnimationScene_GetTimeKeeper(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTimeKeeper");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMAnimationScene *op = static_cast<vtkSMAnimationScene *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkSMProxy *tempr = (ap.IsBound() ?
      op->GetTimeKeeper() :
      op->vtkSMAnimationScene::GetTimeKeeper());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMAnimationScene_SetLockStartTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLockStartTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMAnimationScene *op = static_cast<vtkSMAnimationScene *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetLockStartTime(temp0);
      }
    else
      {
      op->vtkSMAnimationScene::SetLockStartTime(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMAnimationScene_GetLockStartTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLockStartTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMAnimationScene *op = static_cast<vtkSMAnimationScene *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetLockStartTime() :
      op->vtkSMAnimationScene::GetLockStartTime());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMAnimationScene_LockStartTimeOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LockStartTimeOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMAnimationScene *op = static_cast<vtkSMAnimationScene *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->LockStartTimeOn();
      }
    else
      {
      op->vtkSMAnimationScene::LockStartTimeOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMAnimationScene_LockStartTimeOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LockStartTimeOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMAnimationScene *op = static_cast<vtkSMAnimationScene *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->LockStartTimeOff();
      }
    else
      {
      op->vtkSMAnimationScene::LockStartTimeOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMAnimationScene_SetLockEndTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLockEndTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMAnimationScene *op = static_cast<vtkSMAnimationScene *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetLockEndTime(temp0);
      }
    else
      {
      op->vtkSMAnimationScene::SetLockEndTime(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMAnimationScene_GetLockEndTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLockEndTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMAnimationScene *op = static_cast<vtkSMAnimationScene *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetLockEndTime() :
      op->vtkSMAnimationScene::GetLockEndTime());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMAnimationScene_LockEndTimeOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LockEndTimeOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMAnimationScene *op = static_cast<vtkSMAnimationScene *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->LockEndTimeOn();
      }
    else
      {
      op->vtkSMAnimationScene::LockEndTimeOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMAnimationScene_LockEndTimeOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LockEndTimeOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMAnimationScene *op = static_cast<vtkSMAnimationScene *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->LockEndTimeOff();
      }
    else
      {
      op->vtkSMAnimationScene::LockEndTimeOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMAnimationScene_SetSceneTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSceneTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMAnimationScene *op = static_cast<vtkSMAnimationScene *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetSceneTime(temp0);
      }
    else
      {
      op->vtkSMAnimationScene::SetSceneTime(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMAnimationScene_GetSceneTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSceneTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMAnimationScene *op = static_cast<vtkSMAnimationScene *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetSceneTime() :
      op->vtkSMAnimationScene::GetSceneTime());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMAnimationScene_SetPlaybackTimeWindow_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPlaybackTimeWindow");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMAnimationScene *op = static_cast<vtkSMAnimationScene *>(vp);

  double temp0;
  double temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetPlaybackTimeWindow(temp0, temp1);
      }
    else
      {
      op->vtkSMAnimationScene::SetPlaybackTimeWindow(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkSMAnimationScene_SetPlaybackTimeWindow_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPlaybackTimeWindow");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMAnimationScene *op = static_cast<vtkSMAnimationScene *>(vp);

  double temp0[2];
  const int size0 = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetPlaybackTimeWindow(temp0);
      }
    else
      {
      op->vtkSMAnimationScene::SetPlaybackTimeWindow(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkSMAnimationScene_SetPlaybackTimeWindow(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkSMAnimationScene_SetPlaybackTimeWindow_s1(self, args);
    case 1:
      return PyvtkSMAnimationScene_SetPlaybackTimeWindow_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetPlaybackTimeWindow");
  return NULL;
}



static PyObject *
PyvtkSMAnimationScene_GetPlaybackTimeWindow(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPlaybackTimeWindow");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMAnimationScene *op = static_cast<vtkSMAnimationScene *>(vp);

  int sizer = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetPlaybackTimeWindow() :
      op->vtkSMAnimationScene::GetPlaybackTimeWindow());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkSMAnimationScene_SetLoop(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLoop");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMAnimationScene *op = static_cast<vtkSMAnimationScene *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetLoop(temp0);
      }
    else
      {
      op->vtkSMAnimationScene::SetLoop(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMAnimationScene_GetLoop(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLoop");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMAnimationScene *op = static_cast<vtkSMAnimationScene *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetLoop() :
      op->vtkSMAnimationScene::GetLoop());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMAnimationScene_Play(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Play");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMAnimationScene *op = static_cast<vtkSMAnimationScene *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Play();
      }
    else
      {
      op->vtkSMAnimationScene::Play();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMAnimationScene_Stop(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Stop");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMAnimationScene *op = static_cast<vtkSMAnimationScene *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Stop();
      }
    else
      {
      op->vtkSMAnimationScene::Stop();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMAnimationScene_GoToNext(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GoToNext");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMAnimationScene *op = static_cast<vtkSMAnimationScene *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->GoToNext();
      }
    else
      {
      op->vtkSMAnimationScene::GoToNext();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMAnimationScene_GoToPrevious(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GoToPrevious");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMAnimationScene *op = static_cast<vtkSMAnimationScene *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->GoToPrevious();
      }
    else
      {
      op->vtkSMAnimationScene::GoToPrevious();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMAnimationScene_GoToFirst(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GoToFirst");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMAnimationScene *op = static_cast<vtkSMAnimationScene *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->GoToFirst();
      }
    else
      {
      op->vtkSMAnimationScene::GoToFirst();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMAnimationScene_GoToLast(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GoToLast");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMAnimationScene *op = static_cast<vtkSMAnimationScene *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->GoToLast();
      }
    else
      {
      op->vtkSMAnimationScene::GoToLast();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMAnimationScene_SetPlayMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPlayMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMAnimationScene *op = static_cast<vtkSMAnimationScene *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetPlayMode(temp0);
      }
    else
      {
      op->vtkSMAnimationScene::SetPlayMode(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMAnimationScene_SetNumberOfFrames(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfFrames");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMAnimationScene *op = static_cast<vtkSMAnimationScene *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetNumberOfFrames(temp0);
      }
    else
      {
      op->vtkSMAnimationScene::SetNumberOfFrames(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMAnimationScene_SetDuration(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDuration");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMAnimationScene *op = static_cast<vtkSMAnimationScene *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetDuration(temp0);
      }
    else
      {
      op->vtkSMAnimationScene::SetDuration(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMAnimationScene_SetFramesPerTimestep(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFramesPerTimestep");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMAnimationScene *op = static_cast<vtkSMAnimationScene *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetFramesPerTimestep(temp0);
      }
    else
      {
      op->vtkSMAnimationScene::SetFramesPerTimestep(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkSMAnimationScene_Methods[] = {
  {(char*)"GetClassName", PyvtkSMAnimationScene_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkSMAnimationScene_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkSMAnimationScene_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkSMAnimationScene\nC++: vtkSMAnimationScene *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkSMAnimationScene_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkSMAnimationScene\nC++: vtkSMAnimationScene *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"AddCue", PyvtkSMAnimationScene_AddCue, METH_VARARGS,
   (char*)"V.AddCue(vtkAnimationCue)\nC++: void AddCue(vtkAnimationCue *cue)\n\nAdd/Remove an AnimationCue to/from the Scene. It's an error to\nadd a cue twice to the Scene.\n"},
  {(char*)"RemoveCue", PyvtkSMAnimationScene_RemoveCue, METH_VARARGS,
   (char*)"V.RemoveCue(vtkAnimationCue)\nC++: void RemoveCue(vtkAnimationCue *cue)\n\nAdd/Remove an AnimationCue to/from the Scene. It's an error to\nadd a cue twice to the Scene.\n"},
  {(char*)"RemoveAllCues", PyvtkSMAnimationScene_RemoveAllCues, METH_VARARGS,
   (char*)"V.RemoveAllCues()\nC++: void RemoveAllCues()\n\nAdd/Remove an AnimationCue to/from the Scene. It's an error to\nadd a cue twice to the Scene.\n"},
  {(char*)"GetNumberOfCues", PyvtkSMAnimationScene_GetNumberOfCues, METH_VARARGS,
   (char*)"V.GetNumberOfCues() -> int\nC++: int GetNumberOfCues()\n\nAdd/Remove an AnimationCue to/from the Scene. It's an error to\nadd a cue twice to the Scene.\n"},
  {(char*)"AddViewProxy", PyvtkSMAnimationScene_AddViewProxy, METH_VARARGS,
   (char*)"V.AddViewProxy(vtkSMViewProxy)\nC++: void AddViewProxy(vtkSMViewProxy *proxy)\n\nAdd view proxies that are involved in the animation generated by\nthis scene. When playing the animation, the scene will call\nStillRender() on the view proxies it is aware of, also updating\nany caching parameters.\n"},
  {(char*)"RemoveViewProxy", PyvtkSMAnimationScene_RemoveViewProxy, METH_VARARGS,
   (char*)"V.RemoveViewProxy(vtkSMViewProxy)\nC++: void RemoveViewProxy(vtkSMViewProxy *proxy)\n\nAdd view proxies that are involved in the animation generated by\nthis scene. When playing the animation, the scene will call\nStillRender() on the view proxies it is aware of, also updating\nany caching parameters.\n"},
  {(char*)"RemoveAllViewProxies", PyvtkSMAnimationScene_RemoveAllViewProxies, METH_VARARGS,
   (char*)"V.RemoveAllViewProxies()\nC++: void RemoveAllViewProxies()\n\nAdd view proxies that are involved in the animation generated by\nthis scene. When playing the animation, the scene will call\nStillRender() on the view proxies it is aware of, also updating\nany caching parameters.\n"},
  {(char*)"GetNumberOfViewProxies", PyvtkSMAnimationScene_GetNumberOfViewProxies, METH_VARARGS,
   (char*)"V.GetNumberOfViewProxies() -> int\nC++: unsigned int GetNumberOfViewProxies()\n\n"},
  {(char*)"GetViewProxy", PyvtkSMAnimationScene_GetViewProxy, METH_VARARGS,
   (char*)"V.GetViewProxy(int) -> vtkSMViewProxy\nC++: vtkSMViewProxy *GetViewProxy(unsigned int cc)\n\n"},
  {(char*)"SetCaching", PyvtkSMAnimationScene_SetCaching, METH_VARARGS,
   (char*)"V.SetCaching(bool)\nC++: void SetCaching(bool a)\n\nSet if caching is enabled. If Caching is true, then on every\ntime-step, this will update the UseCache and CacheKey properties\non each of the views.\n"},
  {(char*)"GetCaching", PyvtkSMAnimationScene_GetCaching, METH_VARARGS,
   (char*)"V.GetCaching() -> bool\nC++: bool GetCaching()\n\nSet if caching is enabled. If Caching is true, then on every\ntime-step, this will update the UseCache and CacheKey properties\non each of the views.\n"},
  {(char*)"SetTimeKeeper", PyvtkSMAnimationScene_SetTimeKeeper, METH_VARARGS,
   (char*)"V.SetTimeKeeper(vtkSMProxy)\nC++: void SetTimeKeeper(vtkSMProxy *)\n\nSet the time keeper. Time keeper is used to obtain the\ninformation about timesteps. This is required to play animation\nin \"Snap To Timesteps\" mode.\n"},
  {(char*)"GetTimeKeeper", PyvtkSMAnimationScene_GetTimeKeeper, METH_VARARGS,
   (char*)"V.GetTimeKeeper() -> vtkSMProxy\nC++: vtkSMProxy *GetTimeKeeper()\n\nSet the time keeper. Time keeper is used to obtain the\ninformation about timesteps. This is required to play animation\nin \"Snap To Timesteps\" mode.\n"},
  {(char*)"SetLockStartTime", PyvtkSMAnimationScene_SetLockStartTime, METH_VARARGS,
   (char*)"V.SetLockStartTime(bool)\nC++: void SetLockStartTime(bool a)\n\nLock the start time. When locked, the StartTime won't be\nautomatically updated when data time changes.\n"},
  {(char*)"GetLockStartTime", PyvtkSMAnimationScene_GetLockStartTime, METH_VARARGS,
   (char*)"V.GetLockStartTime() -> bool\nC++: bool GetLockStartTime()\n\nLock the start time. When locked, the StartTime won't be\nautomatically updated when data time changes.\n"},
  {(char*)"LockStartTimeOn", PyvtkSMAnimationScene_LockStartTimeOn, METH_VARARGS,
   (char*)"V.LockStartTimeOn()\nC++: void LockStartTimeOn()\n\nLock the start time. When locked, the StartTime won't be\nautomatically updated when data time changes.\n"},
  {(char*)"LockStartTimeOff", PyvtkSMAnimationScene_LockStartTimeOff, METH_VARARGS,
   (char*)"V.LockStartTimeOff()\nC++: void LockStartTimeOff()\n\nLock the start time. When locked, the StartTime won't be\nautomatically updated when data time changes.\n"},
  {(char*)"SetLockEndTime", PyvtkSMAnimationScene_SetLockEndTime, METH_VARARGS,
   (char*)"V.SetLockEndTime(bool)\nC++: void SetLockEndTime(bool a)\n\nLock the end time. When locked, the EndTime won't be\nautomatically updated when the data time changes.\n"},
  {(char*)"GetLockEndTime", PyvtkSMAnimationScene_GetLockEndTime, METH_VARARGS,
   (char*)"V.GetLockEndTime() -> bool\nC++: bool GetLockEndTime()\n\nLock the end time. When locked, the EndTime won't be\nautomatically updated when the data time changes.\n"},
  {(char*)"LockEndTimeOn", PyvtkSMAnimationScene_LockEndTimeOn, METH_VARARGS,
   (char*)"V.LockEndTimeOn()\nC++: void LockEndTimeOn()\n\nLock the end time. When locked, the EndTime won't be\nautomatically updated when the data time changes.\n"},
  {(char*)"LockEndTimeOff", PyvtkSMAnimationScene_LockEndTimeOff, METH_VARARGS,
   (char*)"V.LockEndTimeOff()\nC++: void LockEndTimeOff()\n\nLock the end time. When locked, the EndTime won't be\nautomatically updated when the data time changes.\n"},
  {(char*)"SetSceneTime", PyvtkSMAnimationScene_SetSceneTime, METH_VARARGS,
   (char*)"V.SetSceneTime(float)\nC++: void SetSceneTime(double time)\n\nSets the current animation time.\n"},
  {(char*)"GetSceneTime", PyvtkSMAnimationScene_GetSceneTime, METH_VARARGS,
   (char*)"V.GetSceneTime() -> float\nC++: double GetSceneTime()\n\n"},
  {(char*)"SetPlaybackTimeWindow", PyvtkSMAnimationScene_SetPlaybackTimeWindow, METH_VARARGS,
   (char*)"V.SetPlaybackTimeWindow(float, float)\nC++: void SetPlaybackTimeWindow(double, double)\nV.SetPlaybackTimeWindow((float, float))\nC++: void SetPlaybackTimeWindow(double a[2])\n\n"},
  {(char*)"GetPlaybackTimeWindow", PyvtkSMAnimationScene_GetPlaybackTimeWindow, METH_VARARGS,
   (char*)"V.GetPlaybackTimeWindow() -> (float, float)\nC++: double *GetPlaybackTimeWindow()\n\n"},
  {(char*)"SetLoop", PyvtkSMAnimationScene_SetLoop, METH_VARARGS,
   (char*)"V.SetLoop(int)\nC++: void SetLoop(int val)\n\nForwarded to vtkCompositeAnimationPlayer.\n"},
  {(char*)"GetLoop", PyvtkSMAnimationScene_GetLoop, METH_VARARGS,
   (char*)"V.GetLoop() -> int\nC++: int GetLoop()\n\nForwarded to vtkCompositeAnimationPlayer.\n"},
  {(char*)"Play", PyvtkSMAnimationScene_Play, METH_VARARGS,
   (char*)"V.Play()\nC++: void Play()\n\nForwarded to vtkCompositeAnimationPlayer.\n"},
  {(char*)"Stop", PyvtkSMAnimationScene_Stop, METH_VARARGS,
   (char*)"V.Stop()\nC++: void Stop()\n\nForwarded to vtkCompositeAnimationPlayer.\n"},
  {(char*)"GoToNext", PyvtkSMAnimationScene_GoToNext, METH_VARARGS,
   (char*)"V.GoToNext()\nC++: void GoToNext()\n\nForwarded to vtkCompositeAnimationPlayer.\n"},
  {(char*)"GoToPrevious", PyvtkSMAnimationScene_GoToPrevious, METH_VARARGS,
   (char*)"V.GoToPrevious()\nC++: void GoToPrevious()\n\nForwarded to vtkCompositeAnimationPlayer.\n"},
  {(char*)"GoToFirst", PyvtkSMAnimationScene_GoToFirst, METH_VARARGS,
   (char*)"V.GoToFirst()\nC++: void GoToFirst()\n\nForwarded to vtkCompositeAnimationPlayer.\n"},
  {(char*)"GoToLast", PyvtkSMAnimationScene_GoToLast, METH_VARARGS,
   (char*)"V.GoToLast()\nC++: void GoToLast()\n\nForwarded to vtkCompositeAnimationPlayer.\n"},
  {(char*)"SetPlayMode", PyvtkSMAnimationScene_SetPlayMode, METH_VARARGS,
   (char*)"V.SetPlayMode(int)\nC++: void SetPlayMode(int val)\n\nForwarded to vtkCompositeAnimationPlayer.\n"},
  {(char*)"SetNumberOfFrames", PyvtkSMAnimationScene_SetNumberOfFrames, METH_VARARGS,
   (char*)"V.SetNumberOfFrames(int)\nC++: void SetNumberOfFrames(int val)\n\nForwarded to vtkCompositeAnimationPlayer.\n"},
  {(char*)"SetDuration", PyvtkSMAnimationScene_SetDuration, METH_VARARGS,
   (char*)"V.SetDuration(int)\nC++: void SetDuration(int val)\n\nForwarded to vtkCompositeAnimationPlayer.\n"},
  {(char*)"SetFramesPerTimestep", PyvtkSMAnimationScene_SetFramesPerTimestep, METH_VARARGS,
   (char*)"V.SetFramesPerTimestep(int)\nC++: void SetFramesPerTimestep(int val)\n\nForwarded to vtkCompositeAnimationPlayer.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkSMAnimationScene_StaticNew()
{
  return vtkSMAnimationScene::New();
}

PyObject *PyVTKClass_vtkSMAnimationSceneNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkSMAnimationScene_StaticNew,
    PyvtkSMAnimationScene_Methods,
    "vtkSMAnimationScene", modulename,
    NULL, NULL,
    PyvtkSMAnimationScene_Doc(),
    PyVTKClass_vtkAnimationCueNew(modulename));
  return cls;
}

const char **PyvtkSMAnimationScene_Doc()
{
  static const char *docstring[] = {
    "vtkSMAnimationScene - animation scene for ParaView.\n\n",
    "Superclass: vtkAnimationCue\n\n",
    "vtkSMAnimationScene extends vtkAnimationCue to add support for a\nscene in ParaView.\n\nWe don't use vtkAnimationScene since ParaView has more elaborate\nplayback requirements. To support that, this class delegates playback\nresponsibility to vtkAnimationPlayer and subclasses.\n\nvtkSMAnimationScene also is proxy-aware and hence can work with\nproxies and views proxies for updating property values, render",
    "ing,\netc.\n\nvtkSMAnimationScene forwards the vtkCommand::StartEvent and\nvtkCommand::EndEvent from vtkCompositeAnimationPlayer to mark the\nstart and end of animation playback.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkSMAnimationScene(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkSMAnimationSceneNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkSMAnimationScene", o) != 0)
    {
    Py_DECREF(o);
    }

}

