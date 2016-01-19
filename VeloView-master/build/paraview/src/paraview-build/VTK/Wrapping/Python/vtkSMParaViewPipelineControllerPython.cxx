// python wrapper for vtkSMParaViewPipelineController
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkStdString.h"
#include "vtkSMParaViewPipelineController.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkSMParaViewPipelineController(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkSMParaViewPipelineControllerNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkSMObjectNew
extern "C" { PyObject *PyVTKClass_vtkSMObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkSMObjectNew
#endif

static const char **PyvtkSMParaViewPipelineController_Doc();


static PyObject *
PyvtkSMParaViewPipelineController_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMParaViewPipelineController *op = static_cast<vtkSMParaViewPipelineController *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkSMParaViewPipelineController::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMParaViewPipelineController_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMParaViewPipelineController *op = static_cast<vtkSMParaViewPipelineController *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSMParaViewPipelineController::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMParaViewPipelineController_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMParaViewPipelineController *op = static_cast<vtkSMParaViewPipelineController *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkSMParaViewPipelineController *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSMParaViewPipelineController::NewInstance());

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
PyvtkSMParaViewPipelineController_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkSMParaViewPipelineController *tempr = vtkSMParaViewPipelineController::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMParaViewPipelineController_InitializeSession(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InitializeSession");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMParaViewPipelineController *op = static_cast<vtkSMParaViewPipelineController *>(vp);

  vtkSMSession *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMSession"))
    {
    bool tempr = (ap.IsBound() ?
      op->InitializeSession(temp0) :
      op->vtkSMParaViewPipelineController::InitializeSession(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMParaViewPipelineController_FindTimeKeeper(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FindTimeKeeper");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMParaViewPipelineController *op = static_cast<vtkSMParaViewPipelineController *>(vp);

  vtkSMSession *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMSession"))
    {
    vtkSMProxy *tempr = (ap.IsBound() ?
      op->FindTimeKeeper(temp0) :
      op->vtkSMParaViewPipelineController::FindTimeKeeper(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMParaViewPipelineController_PreInitializeProxy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PreInitializeProxy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMParaViewPipelineController *op = static_cast<vtkSMParaViewPipelineController *>(vp);

  vtkSMProxy *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMProxy"))
    {
    bool tempr = (ap.IsBound() ?
      op->PreInitializeProxy(temp0) :
      op->vtkSMParaViewPipelineController::PreInitializeProxy(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMParaViewPipelineController_PostInitializeProxy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PostInitializeProxy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMParaViewPipelineController *op = static_cast<vtkSMParaViewPipelineController *>(vp);

  vtkSMProxy *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMProxy"))
    {
    bool tempr = (ap.IsBound() ?
      op->PostInitializeProxy(temp0) :
      op->vtkSMParaViewPipelineController::PostInitializeProxy(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMParaViewPipelineController_InitializeProxy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InitializeProxy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMParaViewPipelineController *op = static_cast<vtkSMParaViewPipelineController *>(vp);

  vtkSMProxy *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMProxy"))
    {
    bool tempr = (ap.IsBound() ?
      op->InitializeProxy(temp0) :
      op->vtkSMParaViewPipelineController::InitializeProxy(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMParaViewPipelineController_FinalizeProxy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FinalizeProxy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMParaViewPipelineController *op = static_cast<vtkSMParaViewPipelineController *>(vp);

  vtkSMProxy *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMProxy"))
    {
    bool tempr = (ap.IsBound() ?
      op->FinalizeProxy(temp0) :
      op->vtkSMParaViewPipelineController::FinalizeProxy(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMParaViewPipelineController_RegisterPipelineProxy_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RegisterPipelineProxy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMParaViewPipelineController *op = static_cast<vtkSMParaViewPipelineController *>(vp);

  vtkSMProxy *temp0 = NULL;
  char *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkSMProxy") &&
      ap.GetValue(temp1))
    {
    bool tempr = (ap.IsBound() ?
      op->RegisterPipelineProxy(temp0, temp1) :
      op->vtkSMParaViewPipelineController::RegisterPipelineProxy(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkSMParaViewPipelineController_RegisterPipelineProxy_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RegisterPipelineProxy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMParaViewPipelineController *op = static_cast<vtkSMParaViewPipelineController *>(vp);

  vtkSMProxy *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMProxy"))
    {
    bool tempr = (ap.IsBound() ?
      op->RegisterPipelineProxy(temp0) :
      op->vtkSMParaViewPipelineController::RegisterPipelineProxy(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkSMParaViewPipelineController_RegisterPipelineProxy(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkSMParaViewPipelineController_RegisterPipelineProxy_s1(self, args);
    case 1:
      return PyvtkSMParaViewPipelineController_RegisterPipelineProxy_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "RegisterPipelineProxy");
  return NULL;
}



static PyObject *
PyvtkSMParaViewPipelineController_UnRegisterPipelineProxy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UnRegisterPipelineProxy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMParaViewPipelineController *op = static_cast<vtkSMParaViewPipelineController *>(vp);

  vtkSMProxy *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMProxy"))
    {
    bool tempr = (ap.IsBound() ?
      op->UnRegisterPipelineProxy(temp0) :
      op->vtkSMParaViewPipelineController::UnRegisterPipelineProxy(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMParaViewPipelineController_RegisterViewProxy_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RegisterViewProxy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMParaViewPipelineController *op = static_cast<vtkSMParaViewPipelineController *>(vp);

  vtkSMProxy *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMProxy"))
    {
    bool tempr = (ap.IsBound() ?
      op->RegisterViewProxy(temp0) :
      op->vtkSMParaViewPipelineController::RegisterViewProxy(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkSMParaViewPipelineController_RegisterViewProxy_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RegisterViewProxy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMParaViewPipelineController *op = static_cast<vtkSMParaViewPipelineController *>(vp);

  vtkSMProxy *temp0 = NULL;
  char *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkSMProxy") &&
      ap.GetValue(temp1))
    {
    bool tempr = (ap.IsBound() ?
      op->RegisterViewProxy(temp0, temp1) :
      op->vtkSMParaViewPipelineController::RegisterViewProxy(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkSMParaViewPipelineController_RegisterViewProxy(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkSMParaViewPipelineController_RegisterViewProxy_s1(self, args);
    case 2:
      return PyvtkSMParaViewPipelineController_RegisterViewProxy_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "RegisterViewProxy");
  return NULL;
}



static PyObject *
PyvtkSMParaViewPipelineController_UnRegisterViewProxy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UnRegisterViewProxy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMParaViewPipelineController *op = static_cast<vtkSMParaViewPipelineController *>(vp);

  vtkSMProxy *temp0 = NULL;
  bool temp1 = true;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1, 2) &&
      ap.GetVTKObject(temp0, "vtkSMProxy") &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
    {
    bool tempr = (ap.IsBound() ?
      op->UnRegisterViewProxy(temp0, temp1) :
      op->vtkSMParaViewPipelineController::UnRegisterViewProxy(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMParaViewPipelineController_RegisterRepresentationProxy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RegisterRepresentationProxy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMParaViewPipelineController *op = static_cast<vtkSMParaViewPipelineController *>(vp);

  vtkSMProxy *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMProxy"))
    {
    bool tempr = (ap.IsBound() ?
      op->RegisterRepresentationProxy(temp0) :
      op->vtkSMParaViewPipelineController::RegisterRepresentationProxy(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMParaViewPipelineController_UnRegisterRepresentationProxy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UnRegisterRepresentationProxy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMParaViewPipelineController *op = static_cast<vtkSMParaViewPipelineController *>(vp);

  vtkSMProxy *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMProxy"))
    {
    bool tempr = (ap.IsBound() ?
      op->UnRegisterRepresentationProxy(temp0) :
      op->vtkSMParaViewPipelineController::UnRegisterRepresentationProxy(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMParaViewPipelineController_RegisterColorTransferFunctionProxy_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RegisterColorTransferFunctionProxy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMParaViewPipelineController *op = static_cast<vtkSMParaViewPipelineController *>(vp);

  vtkSMProxy *temp0 = NULL;
  char *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkSMProxy") &&
      ap.GetValue(temp1))
    {
    bool tempr = (ap.IsBound() ?
      op->RegisterColorTransferFunctionProxy(temp0, temp1) :
      op->vtkSMParaViewPipelineController::RegisterColorTransferFunctionProxy(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkSMParaViewPipelineController_RegisterColorTransferFunctionProxy_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RegisterColorTransferFunctionProxy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMParaViewPipelineController *op = static_cast<vtkSMParaViewPipelineController *>(vp);

  vtkSMProxy *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMProxy"))
    {
    bool tempr = (ap.IsBound() ?
      op->RegisterColorTransferFunctionProxy(temp0) :
      op->vtkSMParaViewPipelineController::RegisterColorTransferFunctionProxy(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkSMParaViewPipelineController_RegisterColorTransferFunctionProxy(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkSMParaViewPipelineController_RegisterColorTransferFunctionProxy_s1(self, args);
    case 1:
      return PyvtkSMParaViewPipelineController_RegisterColorTransferFunctionProxy_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "RegisterColorTransferFunctionProxy");
  return NULL;
}



static PyObject *
PyvtkSMParaViewPipelineController_RegisterOpacityTransferFunction_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RegisterOpacityTransferFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMParaViewPipelineController *op = static_cast<vtkSMParaViewPipelineController *>(vp);

  vtkSMProxy *temp0 = NULL;
  char *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkSMProxy") &&
      ap.GetValue(temp1))
    {
    bool tempr = (ap.IsBound() ?
      op->RegisterOpacityTransferFunction(temp0, temp1) :
      op->vtkSMParaViewPipelineController::RegisterOpacityTransferFunction(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkSMParaViewPipelineController_RegisterOpacityTransferFunction_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RegisterOpacityTransferFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMParaViewPipelineController *op = static_cast<vtkSMParaViewPipelineController *>(vp);

  vtkSMProxy *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMProxy"))
    {
    bool tempr = (ap.IsBound() ?
      op->RegisterOpacityTransferFunction(temp0) :
      op->vtkSMParaViewPipelineController::RegisterOpacityTransferFunction(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkSMParaViewPipelineController_RegisterOpacityTransferFunction(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkSMParaViewPipelineController_RegisterOpacityTransferFunction_s1(self, args);
    case 1:
      return PyvtkSMParaViewPipelineController_RegisterOpacityTransferFunction_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "RegisterOpacityTransferFunction");
  return NULL;
}



static PyObject *
PyvtkSMParaViewPipelineController_FindAnimationScene(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FindAnimationScene");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMParaViewPipelineController *op = static_cast<vtkSMParaViewPipelineController *>(vp);

  vtkSMSession *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMSession"))
    {
    vtkSMProxy *tempr = (ap.IsBound() ?
      op->FindAnimationScene(temp0) :
      op->vtkSMParaViewPipelineController::FindAnimationScene(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMParaViewPipelineController_GetAnimationScene(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAnimationScene");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMParaViewPipelineController *op = static_cast<vtkSMParaViewPipelineController *>(vp);

  vtkSMSession *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMSession"))
    {
    vtkSMProxy *tempr = (ap.IsBound() ?
      op->GetAnimationScene(temp0) :
      op->vtkSMParaViewPipelineController::GetAnimationScene(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMParaViewPipelineController_FindTimeAnimationTrack(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FindTimeAnimationTrack");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMParaViewPipelineController *op = static_cast<vtkSMParaViewPipelineController *>(vp);

  vtkSMProxy *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMProxy"))
    {
    vtkSMProxy *tempr = (ap.IsBound() ?
      op->FindTimeAnimationTrack(temp0) :
      op->vtkSMParaViewPipelineController::FindTimeAnimationTrack(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMParaViewPipelineController_GetTimeAnimationTrack(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTimeAnimationTrack");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMParaViewPipelineController *op = static_cast<vtkSMParaViewPipelineController *>(vp);

  vtkSMProxy *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMProxy"))
    {
    vtkSMProxy *tempr = (ap.IsBound() ?
      op->GetTimeAnimationTrack(temp0) :
      op->vtkSMParaViewPipelineController::GetTimeAnimationTrack(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMParaViewPipelineController_RegisterAnimationProxy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RegisterAnimationProxy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMParaViewPipelineController *op = static_cast<vtkSMParaViewPipelineController *>(vp);

  vtkSMProxy *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMProxy"))
    {
    bool tempr = (ap.IsBound() ?
      op->RegisterAnimationProxy(temp0) :
      op->vtkSMParaViewPipelineController::RegisterAnimationProxy(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMParaViewPipelineController_UnRegisterAnimationProxy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UnRegisterAnimationProxy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMParaViewPipelineController *op = static_cast<vtkSMParaViewPipelineController *>(vp);

  vtkSMProxy *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMProxy"))
    {
    bool tempr = (ap.IsBound() ?
      op->UnRegisterAnimationProxy(temp0) :
      op->vtkSMParaViewPipelineController::UnRegisterAnimationProxy(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMParaViewPipelineController_UpdateSettingsProxies(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateSettingsProxies");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMParaViewPipelineController *op = static_cast<vtkSMParaViewPipelineController *>(vp);

  vtkSMSession *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMSession"))
    {
    if (ap.IsBound())
      {
      op->UpdateSettingsProxies(temp0);
      }
    else
      {
      op->vtkSMParaViewPipelineController::UpdateSettingsProxies(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMParaViewPipelineController_UnRegisterProxy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UnRegisterProxy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMParaViewPipelineController *op = static_cast<vtkSMParaViewPipelineController *>(vp);

  vtkSMProxy *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMProxy"))
    {
    bool tempr = (ap.IsBound() ?
      op->UnRegisterProxy(temp0) :
      op->vtkSMParaViewPipelineController::UnRegisterProxy(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMParaViewPipelineController_GetHelperProxyGroupName(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetHelperProxyGroupName");

  vtkSMProxy *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMProxy"))
    {
    vtkStdString tempr = vtkSMParaViewPipelineController::GetHelperProxyGroupName(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkSMParaViewPipelineController_Methods[] = {
  {(char*)"GetClassName", PyvtkSMParaViewPipelineController_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkSMParaViewPipelineController_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkSMParaViewPipelineController_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkSMParaViewPipelineController\nC++: vtkSMParaViewPipelineController *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkSMParaViewPipelineController_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkSMParaViewPipelineController\nC++: vtkSMParaViewPipelineController *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"InitializeSession", PyvtkSMParaViewPipelineController_InitializeSession, METH_VARARGS,
   (char*)"V.InitializeSession(vtkSMSession) -> bool\nC++: virtual bool InitializeSession(vtkSMSession *session)\n\nCall this method to setup a branch new session with state\nconsidered essential for ParaView session. Returns true on\nsuccess.\n"},
  {(char*)"FindTimeKeeper", PyvtkSMParaViewPipelineController_FindTimeKeeper, METH_VARARGS,
   (char*)"V.FindTimeKeeper(vtkSMSession) -> vtkSMProxy\nC++: virtual vtkSMProxy *FindTimeKeeper(vtkSMSession *session)\n\nReturns the TimeKeeper proxy associated with the session.\n"},
  {(char*)"PreInitializeProxy", PyvtkSMParaViewPipelineController_PreInitializeProxy, METH_VARARGS,
   (char*)"V.PreInitializeProxy(vtkSMProxy) -> bool\nC++: virtual bool PreInitializeProxy(vtkSMProxy *proxy)\n\nPre-initializes a proxy i.e. prepares the proxy for\ninitialization. One should call this before changing any\nproperties on the proxy. We load the property values from XML\ndefaults as well as user-preferences here.\n"},
  {(char*)"PostInitializeProxy", PyvtkSMParaViewPipelineController_PostInitializeProxy, METH_VARARGS,
   (char*)"V.PostInitializeProxy(vtkSMProxy) -> bool\nC++: virtual bool PostInitializeProxy(vtkSMProxy *proxy)\n\nFinal step in proxy initialization. When this method is called,\nall essential properties on the proxy (such as inputs for\nfilters, or filename on readers) are assumed to be set up so that\ndomains can be updated. This method setups up property values for\nthose properties that weren't modified since the\nPreInitializeProxy() using the domains, if possible. This enables\nthe application to select data-specific default values. NOTE:\nThis method does not register the proxy with the proxy manager.\nIt may, however register any helper proxies created for this\nproxy.\n"},
  {(char*)"InitializeProxy", PyvtkSMParaViewPipelineController_InitializeProxy, METH_VARARGS,
   (char*)"V.InitializeProxy(vtkSMProxy) -> bool\nC++: bool InitializeProxy(vtkSMProxy *proxy)\n\nConvenience method to call PreInitializeProxy and\nPostInitializeProxy.\n"},
  {(char*)"FinalizeProxy", PyvtkSMParaViewPipelineController_FinalizeProxy, METH_VARARGS,
   (char*)"V.FinalizeProxy(vtkSMProxy) -> bool\nC++: virtual bool FinalizeProxy(vtkSMProxy *proxy)\n\nCleans up any helper proxies registered for the proxy in\nPreInitializeProxy/PostInitializeProxy. Similar to\nPreInitializeProxy/PostInitializeProxy methods, this doesn't\naffect the proxy manager registration state for the proxy itself.\n"},
  {(char*)"RegisterPipelineProxy", PyvtkSMParaViewPipelineController_RegisterPipelineProxy, METH_VARARGS,
   (char*)"V.RegisterPipelineProxy(vtkSMProxy, string) -> bool\nC++: virtual bool RegisterPipelineProxy(vtkSMProxy *proxy,\n    const char *proxyname)\nV.RegisterPipelineProxy(vtkSMProxy) -> bool\nC++: virtual bool RegisterPipelineProxy(vtkSMProxy *proxy)\n\nUse this method after PreInitializeProxy() and\nPostInitializeProxy() to register a pipeline proxy with the proxy\nmanager. This method does additional updates required for\npipeline proxies such as registering the proxy with the\nTimeKeeper, creating additional helper proxies for enabling\nrepresentation animations, and updating the active-source. This\nmethod will register the proxy in an appropriate group so that\nthe application becomes aware of it. One can optionally pass in\nthe registration name to use. Otherwise, this code will come up\nwith a unique name. Caveat: while pipeline proxies are generally\nregistered under the \"sources\" group, there's one exception:\nsources that produce vtkSelection. ParaView treats them specially\nand registers them under \"selection_sources\".\n"},
  {(char*)"UnRegisterPipelineProxy", PyvtkSMParaViewPipelineController_UnRegisterPipelineProxy, METH_VARARGS,
   (char*)"V.UnRegisterPipelineProxy(vtkSMProxy) -> bool\nC++: virtual bool UnRegisterPipelineProxy(vtkSMProxy *proxy)\n\nUnregisters a pipeline proxy. This is the inverse of\nRegisterPipelineProxy() and hence unsets the active source if the\nactive source if this proxy, unregisters the proxy with the\nTimeKeeper etc. Users can use either this method or the catch-all\nvtkSMParaViewPipelineController::UnRegisterProxy() method which\ndetermines the type of the proxy and then calls the appropriate\nmethod.\n"},
  {(char*)"RegisterViewProxy", PyvtkSMParaViewPipelineController_RegisterViewProxy, METH_VARARGS,
   (char*)"V.RegisterViewProxy(vtkSMProxy) -> bool\nC++: virtual bool RegisterViewProxy(vtkSMProxy *proxy)\nV.RegisterViewProxy(vtkSMProxy, string) -> bool\nC++: virtual bool RegisterViewProxy(vtkSMProxy *proxy,\n    const char *proxyname)\n\nUse this method after PreInitializeProxy() and\nPostInitializeProxy() to register a view proxy with the proxy\nmanager. This will also perform any additional setups as needed\ne.g. registering the view with the animation scene and the timer\nkeeper.\n"},
  {(char*)"UnRegisterViewProxy", PyvtkSMParaViewPipelineController_UnRegisterViewProxy, METH_VARARGS,
   (char*)"V.UnRegisterViewProxy(vtkSMProxy, bool) -> bool\nC++: virtual bool UnRegisterViewProxy(vtkSMProxy *proxy,\n    bool unregister_representations=true)\n\nInverse of RegisterViewProxy. Users can use either this method or\nthe catch-all vtkSMParaViewPipelineController::UnRegisterProxy()\nmethod which determines the type of the proxy and then calls the\nappropriate method. If the optional argument,\nunregister_representations, is false (default is true), then this\nmethod will skip the unregistering of representations. Default\nbehaviour is to unregister all representations too.\n"},
  {(char*)"RegisterRepresentationProxy", PyvtkSMParaViewPipelineController_RegisterRepresentationProxy, METH_VARARGS,
   (char*)"V.RegisterRepresentationProxy(vtkSMProxy) -> bool\nC++: virtual bool RegisterRepresentationProxy(vtkSMProxy *proxy)\n\nRegistration method for representations to be used after\nPreInitializeProxy() and PostInitializeProxy(). Register the\nproxy under the appropriate group.\n"},
  {(char*)"UnRegisterRepresentationProxy", PyvtkSMParaViewPipelineController_UnRegisterRepresentationProxy, METH_VARARGS,
   (char*)"V.UnRegisterRepresentationProxy(vtkSMProxy) -> bool\nC++: virtual bool UnRegisterRepresentationProxy(vtkSMProxy *proxy)\n\nUnregisters a representation proxy. Users can use either this\nmethod or the catch-all\nvtkSMParaViewPipelineController::UnRegisterProxy() method which\ndetermines the type of the proxy and then calls the appropriate\nmethod.\n"},
  {(char*)"RegisterColorTransferFunctionProxy", PyvtkSMParaViewPipelineController_RegisterColorTransferFunctionProxy, METH_VARARGS,
   (char*)"V.RegisterColorTransferFunctionProxy(vtkSMProxy, string) -> bool\nC++: virtual bool RegisterColorTransferFunctionProxy(\n    vtkSMProxy *proxy, const char *proxyname)\nV.RegisterColorTransferFunctionProxy(vtkSMProxy) -> bool\nC++: virtual bool RegisterColorTransferFunctionProxy(\n    vtkSMProxy *proxy)\n\nRegistration method for color transfer function proxies to be\nused after PreInitializeProxy() and PostInitializeProxy() calls.\n"},
  {(char*)"RegisterOpacityTransferFunction", PyvtkSMParaViewPipelineController_RegisterOpacityTransferFunction, METH_VARARGS,
   (char*)"V.RegisterOpacityTransferFunction(vtkSMProxy, string) -> bool\nC++: virtual bool RegisterOpacityTransferFunction(\n    vtkSMProxy *proxy, const char *proxyname)\nV.RegisterOpacityTransferFunction(vtkSMProxy) -> bool\nC++: virtual bool RegisterOpacityTransferFunction(\n    vtkSMProxy *proxy)\n\nRegistration method for opacity transfer function proxies.\n"},
  {(char*)"FindAnimationScene", PyvtkSMParaViewPipelineController_FindAnimationScene, METH_VARARGS,
   (char*)"V.FindAnimationScene(vtkSMSession) -> vtkSMProxy\nC++: virtual vtkSMProxy *FindAnimationScene(vtkSMSession *session)\n\nReturns the animation scene, if any. Returns NULL if none exists.\n"},
  {(char*)"GetAnimationScene", PyvtkSMParaViewPipelineController_GetAnimationScene, METH_VARARGS,
   (char*)"V.GetAnimationScene(vtkSMSession) -> vtkSMProxy\nC++: virtual vtkSMProxy *GetAnimationScene(vtkSMSession *session)\n\nReturns the animation scene for the session. If none exists, a\nnew one will be created. This may returns NULL if animation scene\nproxy is not available in the session.\n"},
  {(char*)"FindTimeAnimationTrack", PyvtkSMParaViewPipelineController_FindTimeAnimationTrack, METH_VARARGS,
   (char*)"V.FindTimeAnimationTrack(vtkSMProxy) -> vtkSMProxy\nC++: virtual vtkSMProxy *FindTimeAnimationTrack(vtkSMProxy *scene)\n\nReturn the animation track for time, if any. Returns NULL if none\nexists.\n"},
  {(char*)"GetTimeAnimationTrack", PyvtkSMParaViewPipelineController_GetTimeAnimationTrack, METH_VARARGS,
   (char*)"V.GetTimeAnimationTrack(vtkSMProxy) -> vtkSMProxy\nC++: virtual vtkSMProxy *GetTimeAnimationTrack(vtkSMProxy *scene)\n\nReturn the animation track for time. If none exists, a new one\nwill be created. Returns NULL if the proxy is not available in\nthe session.\n"},
  {(char*)"RegisterAnimationProxy", PyvtkSMParaViewPipelineController_RegisterAnimationProxy, METH_VARARGS,
   (char*)"V.RegisterAnimationProxy(vtkSMProxy) -> bool\nC++: virtual bool RegisterAnimationProxy(vtkSMProxy *proxy)\n\nUse this method after PreInitializeProxy() and\nPostInitializeProxy() to register an animation proxy with the\nproxy manager.\n"},
  {(char*)"UnRegisterAnimationProxy", PyvtkSMParaViewPipelineController_UnRegisterAnimationProxy, METH_VARARGS,
   (char*)"V.UnRegisterAnimationProxy(vtkSMProxy) -> bool\nC++: virtual bool UnRegisterAnimationProxy(vtkSMProxy *proxy)\n\nInverse of RegisterAnimationProxy. Also unregisters cues if proxy\nis scene, keyframes if proxy is a cue, etc. Users can use either\nthis method or the catch-all\nvtkSMParaViewPipelineController::UnRegisterProxy() method which\ndetermines the type of the proxy and then calls the appropriate\nmethod.\n"},
  {(char*)"UpdateSettingsProxies", PyvtkSMParaViewPipelineController_UpdateSettingsProxies, METH_VARARGS,
   (char*)"V.UpdateSettingsProxies(vtkSMSession)\nC++: virtual void UpdateSettingsProxies(vtkSMSession *session)\n\nInitializes and registers proxies in the \"settings\" group that\nhaven't been already. This may be called whenever a new settings\nproxy definition becomes available, say, after loading a plugin.\n"},
  {(char*)"UnRegisterProxy", PyvtkSMParaViewPipelineController_UnRegisterProxy, METH_VARARGS,
   (char*)"V.UnRegisterProxy(vtkSMProxy) -> bool\nC++: virtual bool UnRegisterProxy(vtkSMProxy *proxy)\n\nA catch-all method do cleanup and unregister any proxies that\nwere registered using Register..Proxy() APIs on this class. It\ndetermines what known types the \"proxy\" is, i.e. is it a view, or\npipeline, or representation etc., and then calls the appropriate\nUnRegister...Proxy() method.\n"},
  {(char*)"GetHelperProxyGroupName", PyvtkSMParaViewPipelineController_GetHelperProxyGroupName, METH_VARARGS | METH_STATIC,
   (char*)"V.GetHelperProxyGroupName(vtkSMProxy) -> string\nC++: static vtkStdString GetHelperProxyGroupName(vtkSMProxy *)\n\nFor a given proxy returns the name of the group used for helper\nproxies.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkSMParaViewPipelineController_StaticNew()
{
  return vtkSMParaViewPipelineController::New();
}

PyObject *PyVTKClass_vtkSMParaViewPipelineControllerNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkSMParaViewPipelineController_StaticNew,
    PyvtkSMParaViewPipelineController_Methods,
    "vtkSMParaViewPipelineController", modulename,
    NULL, NULL,
    PyvtkSMParaViewPipelineController_Doc(),
    PyVTKClass_vtkSMObjectNew(modulename));
  return cls;
}

const char **PyvtkSMParaViewPipelineController_Doc()
{
  static const char *docstring[] = {
    "vtkSMParaViewPipelineController\n\n",
    "Superclass: vtkSMObject\n\n",
    "\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkSMParaViewPipelineController(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkSMParaViewPipelineControllerNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkSMParaViewPipelineController", o) != 0)
    {
    Py_DECREF(o);
    }

}

