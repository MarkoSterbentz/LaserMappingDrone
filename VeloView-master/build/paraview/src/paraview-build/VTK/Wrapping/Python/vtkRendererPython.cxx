// python wrapper for vtkRenderer
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkRenderer.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkRenderer(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkRendererNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkViewportNew
extern "C" { PyObject *PyVTKClass_vtkViewportNew(const char *); }
#define DECLARED_PyVTKClass_vtkViewportNew
#endif

static const char **PyvtkRenderer_Doc();


static PyObject *
PyvtkRenderer_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderer *op = static_cast<vtkRenderer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkRenderer::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRenderer_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderer *op = static_cast<vtkRenderer *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkRenderer::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRenderer_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderer *op = static_cast<vtkRenderer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkRenderer *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkRenderer::NewInstance());

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
PyvtkRenderer_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkRenderer *tempr = vtkRenderer::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRenderer_AddActor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddActor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderer *op = static_cast<vtkRenderer *>(vp);

  vtkProp *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkProp"))
    {
    if (ap.IsBound())
      {
      op->AddActor(temp0);
      }
    else
      {
      op->vtkRenderer::AddActor(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderer_AddVolume(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddVolume");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderer *op = static_cast<vtkRenderer *>(vp);

  vtkProp *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkProp"))
    {
    if (ap.IsBound())
      {
      op->AddVolume(temp0);
      }
    else
      {
      op->vtkRenderer::AddVolume(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderer_RemoveActor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveActor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderer *op = static_cast<vtkRenderer *>(vp);

  vtkProp *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkProp"))
    {
    if (ap.IsBound())
      {
      op->RemoveActor(temp0);
      }
    else
      {
      op->vtkRenderer::RemoveActor(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderer_RemoveVolume(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveVolume");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderer *op = static_cast<vtkRenderer *>(vp);

  vtkProp *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkProp"))
    {
    if (ap.IsBound())
      {
      op->RemoveVolume(temp0);
      }
    else
      {
      op->vtkRenderer::RemoveVolume(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderer_AddLight(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddLight");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderer *op = static_cast<vtkRenderer *>(vp);

  vtkLight *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkLight"))
    {
    if (ap.IsBound())
      {
      op->AddLight(temp0);
      }
    else
      {
      op->vtkRenderer::AddLight(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderer_RemoveLight(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveLight");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderer *op = static_cast<vtkRenderer *>(vp);

  vtkLight *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkLight"))
    {
    if (ap.IsBound())
      {
      op->RemoveLight(temp0);
      }
    else
      {
      op->vtkRenderer::RemoveLight(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderer_RemoveAllLights(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveAllLights");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderer *op = static_cast<vtkRenderer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->RemoveAllLights();
      }
    else
      {
      op->vtkRenderer::RemoveAllLights();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderer_GetLights(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLights");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderer *op = static_cast<vtkRenderer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkLightCollection *tempr = (ap.IsBound() ?
      op->GetLights() :
      op->vtkRenderer::GetLights());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRenderer_SetLightCollection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLightCollection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderer *op = static_cast<vtkRenderer *>(vp);

  vtkLightCollection *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkLightCollection"))
    {
    if (ap.IsBound())
      {
      op->SetLightCollection(temp0);
      }
    else
      {
      op->vtkRenderer::SetLightCollection(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderer_CreateLight(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateLight");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderer *op = static_cast<vtkRenderer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->CreateLight();
      }
    else
      {
      op->vtkRenderer::CreateLight();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderer_MakeLight(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MakeLight");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderer *op = static_cast<vtkRenderer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkLight *tempr = (ap.IsBound() ?
      op->MakeLight() :
      op->vtkRenderer::MakeLight());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRenderer_GetTwoSidedLighting(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTwoSidedLighting");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderer *op = static_cast<vtkRenderer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetTwoSidedLighting() :
      op->vtkRenderer::GetTwoSidedLighting());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRenderer_SetTwoSidedLighting(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTwoSidedLighting");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderer *op = static_cast<vtkRenderer *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetTwoSidedLighting(temp0);
      }
    else
      {
      op->vtkRenderer::SetTwoSidedLighting(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderer_TwoSidedLightingOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TwoSidedLightingOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderer *op = static_cast<vtkRenderer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->TwoSidedLightingOn();
      }
    else
      {
      op->vtkRenderer::TwoSidedLightingOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderer_TwoSidedLightingOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TwoSidedLightingOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderer *op = static_cast<vtkRenderer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->TwoSidedLightingOff();
      }
    else
      {
      op->vtkRenderer::TwoSidedLightingOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderer_SetLightFollowCamera(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLightFollowCamera");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderer *op = static_cast<vtkRenderer *>(vp);

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
      op->vtkRenderer::SetLightFollowCamera(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderer_GetLightFollowCamera(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLightFollowCamera");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderer *op = static_cast<vtkRenderer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetLightFollowCamera() :
      op->vtkRenderer::GetLightFollowCamera());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRenderer_LightFollowCameraOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LightFollowCameraOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderer *op = static_cast<vtkRenderer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->LightFollowCameraOn();
      }
    else
      {
      op->vtkRenderer::LightFollowCameraOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderer_LightFollowCameraOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LightFollowCameraOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderer *op = static_cast<vtkRenderer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->LightFollowCameraOff();
      }
    else
      {
      op->vtkRenderer::LightFollowCameraOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderer_GetAutomaticLightCreation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAutomaticLightCreation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderer *op = static_cast<vtkRenderer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetAutomaticLightCreation() :
      op->vtkRenderer::GetAutomaticLightCreation());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRenderer_SetAutomaticLightCreation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAutomaticLightCreation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderer *op = static_cast<vtkRenderer *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetAutomaticLightCreation(temp0);
      }
    else
      {
      op->vtkRenderer::SetAutomaticLightCreation(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderer_AutomaticLightCreationOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AutomaticLightCreationOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderer *op = static_cast<vtkRenderer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->AutomaticLightCreationOn();
      }
    else
      {
      op->vtkRenderer::AutomaticLightCreationOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderer_AutomaticLightCreationOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AutomaticLightCreationOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderer *op = static_cast<vtkRenderer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->AutomaticLightCreationOff();
      }
    else
      {
      op->vtkRenderer::AutomaticLightCreationOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderer_UpdateLightsGeometryToFollowCamera(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateLightsGeometryToFollowCamera");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderer *op = static_cast<vtkRenderer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->UpdateLightsGeometryToFollowCamera() :
      op->vtkRenderer::UpdateLightsGeometryToFollowCamera());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRenderer_GetVolumes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVolumes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderer *op = static_cast<vtkRenderer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkVolumeCollection *tempr = (ap.IsBound() ?
      op->GetVolumes() :
      op->vtkRenderer::GetVolumes());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRenderer_GetActors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderer *op = static_cast<vtkRenderer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkActorCollection *tempr = (ap.IsBound() ?
      op->GetActors() :
      op->vtkRenderer::GetActors());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRenderer_SetActiveCamera(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetActiveCamera");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderer *op = static_cast<vtkRenderer *>(vp);

  vtkCamera *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCamera"))
    {
    if (ap.IsBound())
      {
      op->SetActiveCamera(temp0);
      }
    else
      {
      op->vtkRenderer::SetActiveCamera(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderer_GetActiveCamera(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActiveCamera");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderer *op = static_cast<vtkRenderer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkCamera *tempr = (ap.IsBound() ?
      op->GetActiveCamera() :
      op->vtkRenderer::GetActiveCamera());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRenderer_MakeCamera(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MakeCamera");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderer *op = static_cast<vtkRenderer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkCamera *tempr = (ap.IsBound() ?
      op->MakeCamera() :
      op->vtkRenderer::MakeCamera());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRenderer_SetErase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetErase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderer *op = static_cast<vtkRenderer *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetErase(temp0);
      }
    else
      {
      op->vtkRenderer::SetErase(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderer_GetErase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetErase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderer *op = static_cast<vtkRenderer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetErase() :
      op->vtkRenderer::GetErase());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRenderer_EraseOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EraseOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderer *op = static_cast<vtkRenderer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->EraseOn();
      }
    else
      {
      op->vtkRenderer::EraseOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderer_EraseOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EraseOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderer *op = static_cast<vtkRenderer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->EraseOff();
      }
    else
      {
      op->vtkRenderer::EraseOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderer_SetDraw(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDraw");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderer *op = static_cast<vtkRenderer *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetDraw(temp0);
      }
    else
      {
      op->vtkRenderer::SetDraw(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderer_GetDraw(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDraw");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderer *op = static_cast<vtkRenderer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetDraw() :
      op->vtkRenderer::GetDraw());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRenderer_DrawOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderer *op = static_cast<vtkRenderer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->DrawOn();
      }
    else
      {
      op->vtkRenderer::DrawOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderer_DrawOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderer *op = static_cast<vtkRenderer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->DrawOff();
      }
    else
      {
      op->vtkRenderer::DrawOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderer_CaptureGL2PSSpecialProp(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CaptureGL2PSSpecialProp");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderer *op = static_cast<vtkRenderer *>(vp);

  vtkProp *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkProp"))
    {
    int tempr = (ap.IsBound() ?
      op->CaptureGL2PSSpecialProp(temp0) :
      op->vtkRenderer::CaptureGL2PSSpecialProp(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRenderer_SetGL2PSSpecialPropCollection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGL2PSSpecialPropCollection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderer *op = static_cast<vtkRenderer *>(vp);

  vtkPropCollection *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPropCollection"))
    {
    if (ap.IsBound())
      {
      op->SetGL2PSSpecialPropCollection(temp0);
      }
    else
      {
      op->vtkRenderer::SetGL2PSSpecialPropCollection(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderer_AddCuller(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddCuller");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderer *op = static_cast<vtkRenderer *>(vp);

  vtkCuller *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCuller"))
    {
    if (ap.IsBound())
      {
      op->AddCuller(temp0);
      }
    else
      {
      op->vtkRenderer::AddCuller(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderer_RemoveCuller(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveCuller");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderer *op = static_cast<vtkRenderer *>(vp);

  vtkCuller *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCuller"))
    {
    if (ap.IsBound())
      {
      op->RemoveCuller(temp0);
      }
    else
      {
      op->vtkRenderer::RemoveCuller(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderer_GetCullers(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCullers");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderer *op = static_cast<vtkRenderer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkCullerCollection *tempr = (ap.IsBound() ?
      op->GetCullers() :
      op->vtkRenderer::GetCullers());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRenderer_SetAmbient_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAmbient");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderer *op = static_cast<vtkRenderer *>(vp);

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
      op->SetAmbient(temp0, temp1, temp2);
      }
    else
      {
      op->vtkRenderer::SetAmbient(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkRenderer_SetAmbient_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAmbient");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderer *op = static_cast<vtkRenderer *>(vp);

  double temp0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetAmbient(temp0);
      }
    else
      {
      op->vtkRenderer::SetAmbient(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkRenderer_SetAmbient(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkRenderer_SetAmbient_s1(self, args);
    case 1:
      return PyvtkRenderer_SetAmbient_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetAmbient");
  return NULL;
}



static PyObject *
PyvtkRenderer_GetAmbient(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAmbient");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderer *op = static_cast<vtkRenderer *>(vp);

  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetAmbient() :
      op->vtkRenderer::GetAmbient());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkRenderer_SetAllocatedRenderTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAllocatedRenderTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderer *op = static_cast<vtkRenderer *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetAllocatedRenderTime(temp0);
      }
    else
      {
      op->vtkRenderer::SetAllocatedRenderTime(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderer_GetAllocatedRenderTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAllocatedRenderTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderer *op = static_cast<vtkRenderer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetAllocatedRenderTime() :
      op->vtkRenderer::GetAllocatedRenderTime());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRenderer_GetTimeFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTimeFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderer *op = static_cast<vtkRenderer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetTimeFactor() :
      op->vtkRenderer::GetTimeFactor());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRenderer_Render(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Render");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderer *op = static_cast<vtkRenderer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Render();
      }
    else
      {
      op->vtkRenderer::Render();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderer_DeviceRender(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeviceRender");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderer *op = static_cast<vtkRenderer *>(vp);

  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
    {
    op->DeviceRender();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderer_DeviceRenderTranslucentPolygonalGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeviceRenderTranslucentPolygonalGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderer *op = static_cast<vtkRenderer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->DeviceRenderTranslucentPolygonalGeometry();
      }
    else
      {
      op->vtkRenderer::DeviceRenderTranslucentPolygonalGeometry();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderer_Clear(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Clear");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderer *op = static_cast<vtkRenderer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Clear();
      }
    else
      {
      op->vtkRenderer::Clear();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderer_VisibleActorCount(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "VisibleActorCount");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderer *op = static_cast<vtkRenderer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->VisibleActorCount() :
      op->vtkRenderer::VisibleActorCount());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRenderer_VisibleVolumeCount(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "VisibleVolumeCount");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderer *op = static_cast<vtkRenderer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->VisibleVolumeCount() :
      op->vtkRenderer::VisibleVolumeCount());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRenderer_ComputeVisiblePropBounds_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeVisiblePropBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderer *op = static_cast<vtkRenderer *>(vp);

  double temp0[6];
  double save0[6];
  const int size0 = 6;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    if (ap.IsBound())
      {
      op->ComputeVisiblePropBounds(temp0);
      }
    else
      {
      op->vtkRenderer::ComputeVisiblePropBounds(temp0);
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
PyvtkRenderer_ComputeVisiblePropBounds_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeVisiblePropBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderer *op = static_cast<vtkRenderer *>(vp);

  int sizer = 6;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->ComputeVisiblePropBounds() :
      op->vtkRenderer::ComputeVisiblePropBounds());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}

static PyObject *
PyvtkRenderer_ComputeVisiblePropBounds(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkRenderer_ComputeVisiblePropBounds_s1(self, args);
    case 0:
      return PyvtkRenderer_ComputeVisiblePropBounds_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "ComputeVisiblePropBounds");
  return NULL;
}



static PyObject *
PyvtkRenderer_ResetCameraClippingRange_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ResetCameraClippingRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderer *op = static_cast<vtkRenderer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ResetCameraClippingRange();
      }
    else
      {
      op->vtkRenderer::ResetCameraClippingRange();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkRenderer_ResetCameraClippingRange_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ResetCameraClippingRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderer *op = static_cast<vtkRenderer *>(vp);

  double temp0[6];
  double save0[6];
  const int size0 = 6;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    if (ap.IsBound())
      {
      op->ResetCameraClippingRange(temp0);
      }
    else
      {
      op->vtkRenderer::ResetCameraClippingRange(temp0);
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
PyvtkRenderer_ResetCameraClippingRange_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ResetCameraClippingRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderer *op = static_cast<vtkRenderer *>(vp);

  double temp0;
  double temp1;
  double temp2;
  double temp3;
  double temp4;
  double temp5;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(6) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5))
    {
    if (ap.IsBound())
      {
      op->ResetCameraClippingRange(temp0, temp1, temp2, temp3, temp4, temp5);
      }
    else
      {
      op->vtkRenderer::ResetCameraClippingRange(temp0, temp1, temp2, temp3, temp4, temp5);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkRenderer_ResetCameraClippingRange(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 0:
      return PyvtkRenderer_ResetCameraClippingRange_s1(self, args);
    case 1:
      return PyvtkRenderer_ResetCameraClippingRange_s2(self, args);
    case 6:
      return PyvtkRenderer_ResetCameraClippingRange_s3(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "ResetCameraClippingRange");
  return NULL;
}



static PyObject *
PyvtkRenderer_SetNearClippingPlaneTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNearClippingPlaneTolerance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderer *op = static_cast<vtkRenderer *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetNearClippingPlaneTolerance(temp0);
      }
    else
      {
      op->vtkRenderer::SetNearClippingPlaneTolerance(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderer_GetNearClippingPlaneToleranceMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNearClippingPlaneToleranceMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderer *op = static_cast<vtkRenderer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetNearClippingPlaneToleranceMinValue() :
      op->vtkRenderer::GetNearClippingPlaneToleranceMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRenderer_GetNearClippingPlaneToleranceMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNearClippingPlaneToleranceMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderer *op = static_cast<vtkRenderer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetNearClippingPlaneToleranceMaxValue() :
      op->vtkRenderer::GetNearClippingPlaneToleranceMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRenderer_GetNearClippingPlaneTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNearClippingPlaneTolerance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderer *op = static_cast<vtkRenderer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetNearClippingPlaneTolerance() :
      op->vtkRenderer::GetNearClippingPlaneTolerance());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRenderer_ResetCamera_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ResetCamera");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderer *op = static_cast<vtkRenderer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ResetCamera();
      }
    else
      {
      op->vtkRenderer::ResetCamera();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkRenderer_ResetCamera_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ResetCamera");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderer *op = static_cast<vtkRenderer *>(vp);

  double temp0[6];
  double save0[6];
  const int size0 = 6;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    if (ap.IsBound())
      {
      op->ResetCamera(temp0);
      }
    else
      {
      op->vtkRenderer::ResetCamera(temp0);
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
PyvtkRenderer_ResetCamera_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ResetCamera");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderer *op = static_cast<vtkRenderer *>(vp);

  double temp0;
  double temp1;
  double temp2;
  double temp3;
  double temp4;
  double temp5;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(6) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5))
    {
    if (ap.IsBound())
      {
      op->ResetCamera(temp0, temp1, temp2, temp3, temp4, temp5);
      }
    else
      {
      op->vtkRenderer::ResetCamera(temp0, temp1, temp2, temp3, temp4, temp5);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkRenderer_ResetCamera(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 0:
      return PyvtkRenderer_ResetCamera_s1(self, args);
    case 1:
      return PyvtkRenderer_ResetCamera_s2(self, args);
    case 6:
      return PyvtkRenderer_ResetCamera_s3(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "ResetCamera");
  return NULL;
}



static PyObject *
PyvtkRenderer_SetRenderWindow(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRenderWindow");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderer *op = static_cast<vtkRenderer *>(vp);

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
      op->vtkRenderer::SetRenderWindow(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderer_GetRenderWindow(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRenderWindow");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderer *op = static_cast<vtkRenderer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkRenderWindow *tempr = (ap.IsBound() ?
      op->GetRenderWindow() :
      op->vtkRenderer::GetRenderWindow());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRenderer_GetVTKWindow(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVTKWindow");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderer *op = static_cast<vtkRenderer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkWindow *tempr = (ap.IsBound() ?
      op->GetVTKWindow() :
      op->vtkRenderer::GetVTKWindow());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRenderer_SetBackingStore(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBackingStore");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderer *op = static_cast<vtkRenderer *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetBackingStore(temp0);
      }
    else
      {
      op->vtkRenderer::SetBackingStore(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderer_GetBackingStore(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBackingStore");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderer *op = static_cast<vtkRenderer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetBackingStore() :
      op->vtkRenderer::GetBackingStore());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRenderer_BackingStoreOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BackingStoreOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderer *op = static_cast<vtkRenderer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->BackingStoreOn();
      }
    else
      {
      op->vtkRenderer::BackingStoreOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderer_BackingStoreOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BackingStoreOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderer *op = static_cast<vtkRenderer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->BackingStoreOff();
      }
    else
      {
      op->vtkRenderer::BackingStoreOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderer_SetInteractive(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInteractive");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderer *op = static_cast<vtkRenderer *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetInteractive(temp0);
      }
    else
      {
      op->vtkRenderer::SetInteractive(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderer_GetInteractive(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInteractive");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderer *op = static_cast<vtkRenderer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetInteractive() :
      op->vtkRenderer::GetInteractive());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRenderer_InteractiveOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InteractiveOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderer *op = static_cast<vtkRenderer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->InteractiveOn();
      }
    else
      {
      op->vtkRenderer::InteractiveOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderer_InteractiveOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InteractiveOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderer *op = static_cast<vtkRenderer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->InteractiveOff();
      }
    else
      {
      op->vtkRenderer::InteractiveOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderer_SetLayer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLayer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderer *op = static_cast<vtkRenderer *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetLayer(temp0);
      }
    else
      {
      op->vtkRenderer::SetLayer(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderer_GetLayer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLayer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderer *op = static_cast<vtkRenderer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetLayer() :
      op->vtkRenderer::GetLayer());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRenderer_SetPreserveDepthBuffer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPreserveDepthBuffer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderer *op = static_cast<vtkRenderer *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetPreserveDepthBuffer(temp0);
      }
    else
      {
      op->vtkRenderer::SetPreserveDepthBuffer(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderer_GetPreserveDepthBuffer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPreserveDepthBuffer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderer *op = static_cast<vtkRenderer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetPreserveDepthBuffer() :
      op->vtkRenderer::GetPreserveDepthBuffer());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRenderer_PreserveDepthBufferOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PreserveDepthBufferOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderer *op = static_cast<vtkRenderer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->PreserveDepthBufferOn();
      }
    else
      {
      op->vtkRenderer::PreserveDepthBufferOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderer_PreserveDepthBufferOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PreserveDepthBufferOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderer *op = static_cast<vtkRenderer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->PreserveDepthBufferOff();
      }
    else
      {
      op->vtkRenderer::PreserveDepthBufferOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderer_Transparent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Transparent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderer *op = static_cast<vtkRenderer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->Transparent() :
      op->vtkRenderer::Transparent());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRenderer_WorldToView_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WorldToView");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderer *op = static_cast<vtkRenderer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->WorldToView();
      }
    else
      {
      op->vtkRenderer::WorldToView();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkRenderer_WorldToView_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WorldToView");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderer *op = static_cast<vtkRenderer *>(vp);

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
      op->WorldToView(temp0, temp1, temp2);
      }
    else
      {
      op->vtkRenderer::WorldToView(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      ap.SetArgValue(0, temp0);
      }
    if (!ap.ErrorOccurred())
      {
      ap.SetArgValue(1, temp1);
      }
    if (!ap.ErrorOccurred())
      {
      ap.SetArgValue(2, temp2);
      }
    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkRenderer_WorldToView(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 0:
      return PyvtkRenderer_WorldToView_s1(self, args);
    case 3:
      return PyvtkRenderer_WorldToView_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "WorldToView");
  return NULL;
}



static PyObject *
PyvtkRenderer_ViewToWorld_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ViewToWorld");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderer *op = static_cast<vtkRenderer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ViewToWorld();
      }
    else
      {
      op->vtkRenderer::ViewToWorld();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkRenderer_ViewToWorld_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ViewToWorld");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderer *op = static_cast<vtkRenderer *>(vp);

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
      op->ViewToWorld(temp0, temp1, temp2);
      }
    else
      {
      op->vtkRenderer::ViewToWorld(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      ap.SetArgValue(0, temp0);
      }
    if (!ap.ErrorOccurred())
      {
      ap.SetArgValue(1, temp1);
      }
    if (!ap.ErrorOccurred())
      {
      ap.SetArgValue(2, temp2);
      }
    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkRenderer_ViewToWorld(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 0:
      return PyvtkRenderer_ViewToWorld_s1(self, args);
    case 3:
      return PyvtkRenderer_ViewToWorld_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "ViewToWorld");
  return NULL;
}



static PyObject *
PyvtkRenderer_GetZ(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetZ");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderer *op = static_cast<vtkRenderer *>(vp);

  int temp0;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    double tempr = (ap.IsBound() ?
      op->GetZ(temp0, temp1) :
      op->vtkRenderer::GetZ(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRenderer_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderer *op = static_cast<vtkRenderer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMTime() :
      op->vtkRenderer::GetMTime());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRenderer_GetLastRenderTimeInSeconds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLastRenderTimeInSeconds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderer *op = static_cast<vtkRenderer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetLastRenderTimeInSeconds() :
      op->vtkRenderer::GetLastRenderTimeInSeconds());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRenderer_GetNumberOfPropsRendered(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfPropsRendered");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderer *op = static_cast<vtkRenderer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfPropsRendered() :
      op->vtkRenderer::GetNumberOfPropsRendered());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRenderer_PickProp_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PickProp");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderer *op = static_cast<vtkRenderer *>(vp);

  double temp0;
  double temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    vtkAssemblyPath *tempr = (ap.IsBound() ?
      op->PickProp(temp0, temp1) :
      op->vtkRenderer::PickProp(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkRenderer_PickProp_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PickProp");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderer *op = static_cast<vtkRenderer *>(vp);

  double temp0;
  double temp1;
  double temp2;
  double temp3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
    {
    vtkAssemblyPath *tempr = (ap.IsBound() ?
      op->PickProp(temp0, temp1, temp2, temp3) :
      op->vtkRenderer::PickProp(temp0, temp1, temp2, temp3));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkRenderer_PickProp(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkRenderer_PickProp_s1(self, args);
    case 4:
      return PyvtkRenderer_PickProp_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "PickProp");
  return NULL;
}



static PyObject *
PyvtkRenderer_StereoMidpoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StereoMidpoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderer *op = static_cast<vtkRenderer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->StereoMidpoint();
      }
    else
      {
      op->vtkRenderer::StereoMidpoint();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderer_GetTiledAspectRatio(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTiledAspectRatio");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderer *op = static_cast<vtkRenderer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetTiledAspectRatio() :
      op->vtkRenderer::GetTiledAspectRatio());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRenderer_IsActiveCameraCreated(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsActiveCameraCreated");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderer *op = static_cast<vtkRenderer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->IsActiveCameraCreated() :
      op->vtkRenderer::IsActiveCameraCreated());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRenderer_SetUseDepthPeeling(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseDepthPeeling");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderer *op = static_cast<vtkRenderer *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetUseDepthPeeling(temp0);
      }
    else
      {
      op->vtkRenderer::SetUseDepthPeeling(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderer_GetUseDepthPeeling(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseDepthPeeling");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderer *op = static_cast<vtkRenderer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetUseDepthPeeling() :
      op->vtkRenderer::GetUseDepthPeeling());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRenderer_UseDepthPeelingOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseDepthPeelingOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderer *op = static_cast<vtkRenderer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->UseDepthPeelingOn();
      }
    else
      {
      op->vtkRenderer::UseDepthPeelingOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderer_UseDepthPeelingOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseDepthPeelingOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderer *op = static_cast<vtkRenderer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->UseDepthPeelingOff();
      }
    else
      {
      op->vtkRenderer::UseDepthPeelingOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderer_SetOcclusionRatio(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOcclusionRatio");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderer *op = static_cast<vtkRenderer *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetOcclusionRatio(temp0);
      }
    else
      {
      op->vtkRenderer::SetOcclusionRatio(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderer_GetOcclusionRatioMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOcclusionRatioMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderer *op = static_cast<vtkRenderer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetOcclusionRatioMinValue() :
      op->vtkRenderer::GetOcclusionRatioMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRenderer_GetOcclusionRatioMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOcclusionRatioMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderer *op = static_cast<vtkRenderer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetOcclusionRatioMaxValue() :
      op->vtkRenderer::GetOcclusionRatioMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRenderer_GetOcclusionRatio(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOcclusionRatio");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderer *op = static_cast<vtkRenderer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetOcclusionRatio() :
      op->vtkRenderer::GetOcclusionRatio());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRenderer_SetMaximumNumberOfPeels(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaximumNumberOfPeels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderer *op = static_cast<vtkRenderer *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetMaximumNumberOfPeels(temp0);
      }
    else
      {
      op->vtkRenderer::SetMaximumNumberOfPeels(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderer_GetMaximumNumberOfPeels(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumNumberOfPeels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderer *op = static_cast<vtkRenderer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetMaximumNumberOfPeels() :
      op->vtkRenderer::GetMaximumNumberOfPeels());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRenderer_GetLastRenderingUsedDepthPeeling(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLastRenderingUsedDepthPeeling");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderer *op = static_cast<vtkRenderer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetLastRenderingUsedDepthPeeling() :
      op->vtkRenderer::GetLastRenderingUsedDepthPeeling());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRenderer_SetDelegate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDelegate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderer *op = static_cast<vtkRenderer *>(vp);

  vtkRendererDelegate *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkRendererDelegate"))
    {
    if (ap.IsBound())
      {
      op->SetDelegate(temp0);
      }
    else
      {
      op->vtkRenderer::SetDelegate(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderer_GetDelegate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDelegate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderer *op = static_cast<vtkRenderer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkRendererDelegate *tempr = (ap.IsBound() ?
      op->GetDelegate() :
      op->vtkRenderer::GetDelegate());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRenderer_GetSelector(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelector");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderer *op = static_cast<vtkRenderer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkHardwareSelector *tempr = (ap.IsBound() ?
      op->GetSelector() :
      op->vtkRenderer::GetSelector());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRenderer_SetBackgroundTexture(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBackgroundTexture");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderer *op = static_cast<vtkRenderer *>(vp);

  vtkTexture *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkTexture"))
    {
    if (ap.IsBound())
      {
      op->SetBackgroundTexture(temp0);
      }
    else
      {
      op->vtkRenderer::SetBackgroundTexture(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderer_GetBackgroundTexture(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBackgroundTexture");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderer *op = static_cast<vtkRenderer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkTexture *tempr = (ap.IsBound() ?
      op->GetBackgroundTexture() :
      op->vtkRenderer::GetBackgroundTexture());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRenderer_SetTexturedBackground(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTexturedBackground");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderer *op = static_cast<vtkRenderer *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetTexturedBackground(temp0);
      }
    else
      {
      op->vtkRenderer::SetTexturedBackground(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderer_GetTexturedBackground(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTexturedBackground");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderer *op = static_cast<vtkRenderer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetTexturedBackground() :
      op->vtkRenderer::GetTexturedBackground());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRenderer_TexturedBackgroundOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TexturedBackgroundOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderer *op = static_cast<vtkRenderer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->TexturedBackgroundOn();
      }
    else
      {
      op->vtkRenderer::TexturedBackgroundOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderer_TexturedBackgroundOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TexturedBackgroundOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderer *op = static_cast<vtkRenderer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->TexturedBackgroundOff();
      }
    else
      {
      op->vtkRenderer::TexturedBackgroundOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderer_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderer *op = static_cast<vtkRenderer *>(vp);

  vtkWindow *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkWindow"))
    {
    if (ap.IsBound())
      {
      op->ReleaseGraphicsResources(temp0);
      }
    else
      {
      op->vtkRenderer::ReleaseGraphicsResources(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkRenderer_Methods[] = {
  {(char*)"GetClassName", PyvtkRenderer_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkRenderer_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkRenderer_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkRenderer\nC++: vtkRenderer *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkRenderer_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkRenderer\nC++: vtkRenderer *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"AddActor", PyvtkRenderer_AddActor, METH_VARARGS,
   (char*)"V.AddActor(vtkProp)\nC++: void AddActor(vtkProp *p)\n\nAdd/Remove different types of props to the renderer. These\nmethods are all synonyms to AddViewProp and RemoveViewProp. They\nare here for convenience and backwards compatibility.\n"},
  {(char*)"AddVolume", PyvtkRenderer_AddVolume, METH_VARARGS,
   (char*)"V.AddVolume(vtkProp)\nC++: void AddVolume(vtkProp *p)\n\nAdd/Remove different types of props to the renderer. These\nmethods are all synonyms to AddViewProp and RemoveViewProp. They\nare here for convenience and backwards compatibility.\n"},
  {(char*)"RemoveActor", PyvtkRenderer_RemoveActor, METH_VARARGS,
   (char*)"V.RemoveActor(vtkProp)\nC++: void RemoveActor(vtkProp *p)\n\nAdd/Remove different types of props to the renderer. These\nmethods are all synonyms to AddViewProp and RemoveViewProp. They\nare here for convenience and backwards compatibility.\n"},
  {(char*)"RemoveVolume", PyvtkRenderer_RemoveVolume, METH_VARARGS,
   (char*)"V.RemoveVolume(vtkProp)\nC++: void RemoveVolume(vtkProp *p)\n\nAdd/Remove different types of props to the renderer. These\nmethods are all synonyms to AddViewProp and RemoveViewProp. They\nare here for convenience and backwards compatibility.\n"},
  {(char*)"AddLight", PyvtkRenderer_AddLight, METH_VARARGS,
   (char*)"V.AddLight(vtkLight)\nC++: void AddLight(vtkLight *)\n\nAdd a light to the list of lights.\n"},
  {(char*)"RemoveLight", PyvtkRenderer_RemoveLight, METH_VARARGS,
   (char*)"V.RemoveLight(vtkLight)\nC++: void RemoveLight(vtkLight *)\n\nRemove a light from the list of lights.\n"},
  {(char*)"RemoveAllLights", PyvtkRenderer_RemoveAllLights, METH_VARARGS,
   (char*)"V.RemoveAllLights()\nC++: void RemoveAllLights()\n\nRemove all lights from the list of lights.\n"},
  {(char*)"GetLights", PyvtkRenderer_GetLights, METH_VARARGS,
   (char*)"V.GetLights() -> vtkLightCollection\nC++: vtkLightCollection *GetLights()\n\nReturn the collection of lights.\n"},
  {(char*)"SetLightCollection", PyvtkRenderer_SetLightCollection, METH_VARARGS,
   (char*)"V.SetLightCollection(vtkLightCollection)\nC++: void SetLightCollection(vtkLightCollection *lights)\n\nSet the collection of lights. We cannot name it SetLights because\nof TestSetGet\n\\pre lights_exist: lights!=0\n\\post lights_set: lights==this->GetLights()\n"},
  {(char*)"CreateLight", PyvtkRenderer_CreateLight, METH_VARARGS,
   (char*)"V.CreateLight()\nC++: void CreateLight(void)\n\nCreate and add a light to renderer.\n"},
  {(char*)"MakeLight", PyvtkRenderer_MakeLight, METH_VARARGS,
   (char*)"V.MakeLight() -> vtkLight\nC++: virtual vtkLight *MakeLight()\n\nCreate a new Light sutible for use with this type of Renderer.\nFor example, a vtkMesaRenderer should create a vtkMesaLight in\nthis function.   The default is to just call vtkLight::New.\n"},
  {(char*)"GetTwoSidedLighting", PyvtkRenderer_GetTwoSidedLighting, METH_VARARGS,
   (char*)"V.GetTwoSidedLighting() -> int\nC++: int GetTwoSidedLighting()\n\nTurn on/off two-sided lighting of surfaces. If two-sided lighting\nis off, then only the side of the surface facing the light(s)\nwill be lit, and the other side dark. If two-sided lighting on,\nboth sides of the surface will be lit.\n"},
  {(char*)"SetTwoSidedLighting", PyvtkRenderer_SetTwoSidedLighting, METH_VARARGS,
   (char*)"V.SetTwoSidedLighting(int)\nC++: void SetTwoSidedLighting(int a)\n\nTurn on/off two-sided lighting of surfaces. If two-sided lighting\nis off, then only the side of the surface facing the light(s)\nwill be lit, and the other side dark. If two-sided lighting on,\nboth sides of the surface will be lit.\n"},
  {(char*)"TwoSidedLightingOn", PyvtkRenderer_TwoSidedLightingOn, METH_VARARGS,
   (char*)"V.TwoSidedLightingOn()\nC++: void TwoSidedLightingOn()\n\nTurn on/off two-sided lighting of surfaces. If two-sided lighting\nis off, then only the side of the surface facing the light(s)\nwill be lit, and the other side dark. If two-sided lighting on,\nboth sides of the surface will be lit.\n"},
  {(char*)"TwoSidedLightingOff", PyvtkRenderer_TwoSidedLightingOff, METH_VARARGS,
   (char*)"V.TwoSidedLightingOff()\nC++: void TwoSidedLightingOff()\n\nTurn on/off two-sided lighting of surfaces. If two-sided lighting\nis off, then only the side of the surface facing the light(s)\nwill be lit, and the other side dark. If two-sided lighting on,\nboth sides of the surface will be lit.\n"},
  {(char*)"SetLightFollowCamera", PyvtkRenderer_SetLightFollowCamera, METH_VARARGS,
   (char*)"V.SetLightFollowCamera(int)\nC++: void SetLightFollowCamera(int a)\n\nTurn on/off the automatic repositioning of lights as the camera\nmoves. If LightFollowCamera is on, lights that are designated as\nHeadlights or CameraLights will be adjusted to move with this\nrenderer's camera. If LightFollowCamera is off, the lights will\nnot be adjusted.\n\n(Note: In previous versions of vtk, this light-tracking\nfunctionality was part of the interactors, not the renderer. For\nbackwards compatibility, the older, more limited interactor\nbehavior is enabled by default. To disable this mode, turn the\ninteractor's LightFollowCamera flag OFF, and leave the renderer's\nLightFollowCamera flag ON.)\n"},
  {(char*)"GetLightFollowCamera", PyvtkRenderer_GetLightFollowCamera, METH_VARARGS,
   (char*)"V.GetLightFollowCamera() -> int\nC++: int GetLightFollowCamera()\n\nTurn on/off the automatic repositioning of lights as the camera\nmoves. If LightFollowCamera is on, lights that are designated as\nHeadlights or CameraLights will be adjusted to move with this\nrenderer's camera. If LightFollowCamera is off, the lights will\nnot be adjusted.\n\n(Note: In previous versions of vtk, this light-tracking\nfunctionality was part of the interactors, not the renderer. For\nbackwards compatibility, the older, more limited interactor\nbehavior is enabled by default. To disable this mode, turn the\ninteractor's LightFollowCamera flag OFF, and leave the renderer's\nLightFollowCamera flag ON.)\n"},
  {(char*)"LightFollowCameraOn", PyvtkRenderer_LightFollowCameraOn, METH_VARARGS,
   (char*)"V.LightFollowCameraOn()\nC++: void LightFollowCameraOn()\n\nTurn on/off the automatic repositioning of lights as the camera\nmoves. If LightFollowCamera is on, lights that are designated as\nHeadlights or CameraLights will be adjusted to move with this\nrenderer's camera. If LightFollowCamera is off, the lights will\nnot be adjusted.\n\n(Note: In previous versions of vtk, this light-tracking\nfunctionality was part of the interactors, not the renderer. For\nbackwards compatibility, the older, more limited interactor\nbehavior is enabled by default. To disable this mode, turn the\ninteractor's LightFollowCamera flag OFF, and leave the renderer's\nLightFollowCamera flag ON.)\n"},
  {(char*)"LightFollowCameraOff", PyvtkRenderer_LightFollowCameraOff, METH_VARARGS,
   (char*)"V.LightFollowCameraOff()\nC++: void LightFollowCameraOff()\n\nTurn on/off the automatic repositioning of lights as the camera\nmoves. If LightFollowCamera is on, lights that are designated as\nHeadlights or CameraLights will be adjusted to move with this\nrenderer's camera. If LightFollowCamera is off, the lights will\nnot be adjusted.\n\n(Note: In previous versions of vtk, this light-tracking\nfunctionality was part of the interactors, not the renderer. For\nbackwards compatibility, the older, more limited interactor\nbehavior is enabled by default. To disable this mode, turn the\ninteractor's LightFollowCamera flag OFF, and leave the renderer's\nLightFollowCamera flag ON.)\n"},
  {(char*)"GetAutomaticLightCreation", PyvtkRenderer_GetAutomaticLightCreation, METH_VARARGS,
   (char*)"V.GetAutomaticLightCreation() -> int\nC++: int GetAutomaticLightCreation()\n\nTurn on/off a flag which disables the automatic light creation\ncapability. Normally in VTK if no lights are associated with the\nrenderer, then a light is automatically created. However, in\nspecial circumstances this feature is undesirable, so the\nfollowing boolean is provided to disable automatic light\ncreation. (Turn AutomaticLightCreation off if you do not want\nlights to be created.)\n"},
  {(char*)"SetAutomaticLightCreation", PyvtkRenderer_SetAutomaticLightCreation, METH_VARARGS,
   (char*)"V.SetAutomaticLightCreation(int)\nC++: void SetAutomaticLightCreation(int a)\n\nTurn on/off a flag which disables the automatic light creation\ncapability. Normally in VTK if no lights are associated with the\nrenderer, then a light is automatically created. However, in\nspecial circumstances this feature is undesirable, so the\nfollowing boolean is provided to disable automatic light\ncreation. (Turn AutomaticLightCreation off if you do not want\nlights to be created.)\n"},
  {(char*)"AutomaticLightCreationOn", PyvtkRenderer_AutomaticLightCreationOn, METH_VARARGS,
   (char*)"V.AutomaticLightCreationOn()\nC++: void AutomaticLightCreationOn()\n\nTurn on/off a flag which disables the automatic light creation\ncapability. Normally in VTK if no lights are associated with the\nrenderer, then a light is automatically created. However, in\nspecial circumstances this feature is undesirable, so the\nfollowing boolean is provided to disable automatic light\ncreation. (Turn AutomaticLightCreation off if you do not want\nlights to be created.)\n"},
  {(char*)"AutomaticLightCreationOff", PyvtkRenderer_AutomaticLightCreationOff, METH_VARARGS,
   (char*)"V.AutomaticLightCreationOff()\nC++: void AutomaticLightCreationOff()\n\nTurn on/off a flag which disables the automatic light creation\ncapability. Normally in VTK if no lights are associated with the\nrenderer, then a light is automatically created. However, in\nspecial circumstances this feature is undesirable, so the\nfollowing boolean is provided to disable automatic light\ncreation. (Turn AutomaticLightCreation off if you do not want\nlights to be created.)\n"},
  {(char*)"UpdateLightsGeometryToFollowCamera", PyvtkRenderer_UpdateLightsGeometryToFollowCamera, METH_VARARGS,
   (char*)"V.UpdateLightsGeometryToFollowCamera() -> int\nC++: virtual int UpdateLightsGeometryToFollowCamera(void)\n\nAsk the lights in the scene that are not in world space (for\ninstance, Headlights or CameraLights that are attached to the\ncamera) to update their geometry to match the active camera.\n"},
  {(char*)"GetVolumes", PyvtkRenderer_GetVolumes, METH_VARARGS,
   (char*)"V.GetVolumes() -> vtkVolumeCollection\nC++: vtkVolumeCollection *GetVolumes()\n\nReturn the collection of volumes.\n"},
  {(char*)"GetActors", PyvtkRenderer_GetActors, METH_VARARGS,
   (char*)"V.GetActors() -> vtkActorCollection\nC++: vtkActorCollection *GetActors()\n\nReturn any actors in this renderer.\n"},
  {(char*)"SetActiveCamera", PyvtkRenderer_SetActiveCamera, METH_VARARGS,
   (char*)"V.SetActiveCamera(vtkCamera)\nC++: void SetActiveCamera(vtkCamera *)\n\nSpecify the camera to use for this renderer.\n"},
  {(char*)"GetActiveCamera", PyvtkRenderer_GetActiveCamera, METH_VARARGS,
   (char*)"V.GetActiveCamera() -> vtkCamera\nC++: vtkCamera *GetActiveCamera()\n\nGet the current camera. If there is not camera assigned to the\nrenderer already, a new one is created automatically. This does\n*not* reset the camera.\n"},
  {(char*)"MakeCamera", PyvtkRenderer_MakeCamera, METH_VARARGS,
   (char*)"V.MakeCamera() -> vtkCamera\nC++: virtual vtkCamera *MakeCamera()\n\nCreate a new Camera sutible for use with this type of Renderer.\nFor example, a vtkMesaRenderer should create a vtkMesaCamera in\nthis function.   The default is to just call vtkCamera::New.\n"},
  {(char*)"SetErase", PyvtkRenderer_SetErase, METH_VARARGS,
   (char*)"V.SetErase(int)\nC++: void SetErase(int a)\n\nWhen this flag is off, the renderer will not erase the background\nor the Zbuffer.  It is used to have overlapping renderers. Both\nthe RenderWindow Erase and Render Erase must be on for the camera\nto clear the renderer.  By default, Erase is on.\n"},
  {(char*)"GetErase", PyvtkRenderer_GetErase, METH_VARARGS,
   (char*)"V.GetErase() -> int\nC++: int GetErase()\n\nWhen this flag is off, the renderer will not erase the background\nor the Zbuffer.  It is used to have overlapping renderers. Both\nthe RenderWindow Erase and Render Erase must be on for the camera\nto clear the renderer.  By default, Erase is on.\n"},
  {(char*)"EraseOn", PyvtkRenderer_EraseOn, METH_VARARGS,
   (char*)"V.EraseOn()\nC++: void EraseOn()\n\nWhen this flag is off, the renderer will not erase the background\nor the Zbuffer.  It is used to have overlapping renderers. Both\nthe RenderWindow Erase and Render Erase must be on for the camera\nto clear the renderer.  By default, Erase is on.\n"},
  {(char*)"EraseOff", PyvtkRenderer_EraseOff, METH_VARARGS,
   (char*)"V.EraseOff()\nC++: void EraseOff()\n\nWhen this flag is off, the renderer will not erase the background\nor the Zbuffer.  It is used to have overlapping renderers. Both\nthe RenderWindow Erase and Render Erase must be on for the camera\nto clear the renderer.  By default, Erase is on.\n"},
  {(char*)"SetDraw", PyvtkRenderer_SetDraw, METH_VARARGS,
   (char*)"V.SetDraw(int)\nC++: void SetDraw(int a)\n\nWhen this flag is off, render commands are ignored.  It is used\nto either multiplex a vtkRenderWindow or render only part of a\nvtkRenderWindow. By default, Draw is on.\n"},
  {(char*)"GetDraw", PyvtkRenderer_GetDraw, METH_VARARGS,
   (char*)"V.GetDraw() -> int\nC++: int GetDraw()\n\nWhen this flag is off, render commands are ignored.  It is used\nto either multiplex a vtkRenderWindow or render only part of a\nvtkRenderWindow. By default, Draw is on.\n"},
  {(char*)"DrawOn", PyvtkRenderer_DrawOn, METH_VARARGS,
   (char*)"V.DrawOn()\nC++: void DrawOn()\n\nWhen this flag is off, render commands are ignored.  It is used\nto either multiplex a vtkRenderWindow or render only part of a\nvtkRenderWindow. By default, Draw is on.\n"},
  {(char*)"DrawOff", PyvtkRenderer_DrawOff, METH_VARARGS,
   (char*)"V.DrawOff()\nC++: void DrawOff()\n\nWhen this flag is off, render commands are ignored.  It is used\nto either multiplex a vtkRenderWindow or render only part of a\nvtkRenderWindow. By default, Draw is on.\n"},
  {(char*)"CaptureGL2PSSpecialProp", PyvtkRenderer_CaptureGL2PSSpecialProp, METH_VARARGS,
   (char*)"V.CaptureGL2PSSpecialProp(vtkProp) -> int\nC++: int CaptureGL2PSSpecialProp(vtkProp *)\n\nThis function is called to capture an instance of vtkProp that\nrequires special handling during\nvtkRenderWindow::CaptureGL2PSSpecialProps().\n"},
  {(char*)"SetGL2PSSpecialPropCollection", PyvtkRenderer_SetGL2PSSpecialPropCollection, METH_VARARGS,
   (char*)"V.SetGL2PSSpecialPropCollection(vtkPropCollection)\nC++: void SetGL2PSSpecialPropCollection(vtkPropCollection *)\n\nSet the prop collection object used during\nvtkRenderWindow::CaptureGL2PSSpecialProps(). Do not call\nmanually, this is handled automatically by the render window.\n"},
  {(char*)"AddCuller", PyvtkRenderer_AddCuller, METH_VARARGS,
   (char*)"V.AddCuller(vtkCuller)\nC++: void AddCuller(vtkCuller *)\n\nAdd an culler to the list of cullers.\n"},
  {(char*)"RemoveCuller", PyvtkRenderer_RemoveCuller, METH_VARARGS,
   (char*)"V.RemoveCuller(vtkCuller)\nC++: void RemoveCuller(vtkCuller *)\n\nRemove an actor from the list of cullers.\n"},
  {(char*)"GetCullers", PyvtkRenderer_GetCullers, METH_VARARGS,
   (char*)"V.GetCullers() -> vtkCullerCollection\nC++: vtkCullerCollection *GetCullers()\n\nReturn the collection of cullers.\n"},
  {(char*)"SetAmbient", PyvtkRenderer_SetAmbient, METH_VARARGS,
   (char*)"V.SetAmbient(float, float, float)\nC++: void SetAmbient(double, double, double)\nV.SetAmbient((float, float, float))\nC++: void SetAmbient(double a[3])\n\n"},
  {(char*)"GetAmbient", PyvtkRenderer_GetAmbient, METH_VARARGS,
   (char*)"V.GetAmbient() -> (float, float, float)\nC++: double *GetAmbient()\n\nSet the intensity of ambient lighting.\n"},
  {(char*)"SetAllocatedRenderTime", PyvtkRenderer_SetAllocatedRenderTime, METH_VARARGS,
   (char*)"V.SetAllocatedRenderTime(float)\nC++: void SetAllocatedRenderTime(double a)\n\nSet/Get the amount of time this renderer is allowed to spend\nrendering its scene. This is used by vtkLODActor's.\n"},
  {(char*)"GetAllocatedRenderTime", PyvtkRenderer_GetAllocatedRenderTime, METH_VARARGS,
   (char*)"V.GetAllocatedRenderTime() -> float\nC++: virtual double GetAllocatedRenderTime()\n\nSet/Get the amount of time this renderer is allowed to spend\nrendering its scene. This is used by vtkLODActor's.\n"},
  {(char*)"GetTimeFactor", PyvtkRenderer_GetTimeFactor, METH_VARARGS,
   (char*)"V.GetTimeFactor() -> float\nC++: virtual double GetTimeFactor()\n\nGet the ratio between allocated time and actual render time.\nTimeFactor has been taken out of the render process. It is still\ncomputed in case someone finds it useful. It may be taken away in\nthe future.\n"},
  {(char*)"Render", PyvtkRenderer_Render, METH_VARARGS,
   (char*)"V.Render()\nC++: virtual void Render()\n\nCALLED BY vtkRenderWindow ONLY. End-user pass your way and call\nvtkRenderWindow::Render(). Create an image. This is a superclass\nmethod which will in turn call the DeviceRender method of\nSubclasses of vtkRenderer.\n"},
  {(char*)"DeviceRender", PyvtkRenderer_DeviceRender, METH_VARARGS,
   (char*)"V.DeviceRender()\nC++: virtual void DeviceRender()\n\nCreate an image. Subclasses of vtkRenderer must implement this\nmethod.\n"},
  {(char*)"DeviceRenderTranslucentPolygonalGeometry", PyvtkRenderer_DeviceRenderTranslucentPolygonalGeometry, METH_VARARGS,
   (char*)"V.DeviceRenderTranslucentPolygonalGeometry()\nC++: virtual void DeviceRenderTranslucentPolygonalGeometry()\n\nRender translucent polygonal geometry. Default implementation\njust call UpdateTranslucentPolygonalGeometry(). Subclasses of\nvtkRenderer that can deal with depth peeling must override this\nmethod. It updates boolean ivar LastRenderingUsedDepthPeeling.\n"},
  {(char*)"Clear", PyvtkRenderer_Clear, METH_VARARGS,
   (char*)"V.Clear()\nC++: virtual void Clear()\n\nClear the image to the background color.\n"},
  {(char*)"VisibleActorCount", PyvtkRenderer_VisibleActorCount, METH_VARARGS,
   (char*)"V.VisibleActorCount() -> int\nC++: int VisibleActorCount()\n\nReturns the number of visible actors.\n"},
  {(char*)"VisibleVolumeCount", PyvtkRenderer_VisibleVolumeCount, METH_VARARGS,
   (char*)"V.VisibleVolumeCount() -> int\nC++: int VisibleVolumeCount()\n\nReturns the number of visible volumes.\n"},
  {(char*)"ComputeVisiblePropBounds", PyvtkRenderer_ComputeVisiblePropBounds, METH_VARARGS,
   (char*)"V.ComputeVisiblePropBounds([float, float, float, float, float,\n    float])\nC++: void ComputeVisiblePropBounds(double bounds[6])\nV.ComputeVisiblePropBounds() -> (float, float, float, float,\n    float, float)\nC++: double *ComputeVisiblePropBounds()\n\nCompute the bounding box of all the visible props Used in\nResetCamera() and ResetCameraClippingRange()\n"},
  {(char*)"ResetCameraClippingRange", PyvtkRenderer_ResetCameraClippingRange, METH_VARARGS,
   (char*)"V.ResetCameraClippingRange()\nC++: void ResetCameraClippingRange()\nV.ResetCameraClippingRange([float, float, float, float, float,\n    float])\nC++: void ResetCameraClippingRange(double bounds[6])\nV.ResetCameraClippingRange(float, float, float, float, float,\n    float)\nC++: void ResetCameraClippingRange(double xmin, double xmax,\n    double ymin, double ymax, double zmin, double zmax)\n\nReset the camera clipping range based on the bounds of the\nvisible actors. This ensures that no props are cut off\n"},
  {(char*)"SetNearClippingPlaneTolerance", PyvtkRenderer_SetNearClippingPlaneTolerance, METH_VARARGS,
   (char*)"V.SetNearClippingPlaneTolerance(float)\nC++: void SetNearClippingPlaneTolerance(double)\n\nSpecify tolerance for near clipping plane distance to the camera\nas a percentage of the far clipping plane distance. By default\nthis will be set to 0.01 for 16 bit zbuffers and 0.001 for higher\ndepth z buffers\n"},
  {(char*)"GetNearClippingPlaneToleranceMinValue", PyvtkRenderer_GetNearClippingPlaneToleranceMinValue, METH_VARARGS,
   (char*)"V.GetNearClippingPlaneToleranceMinValue() -> float\nC++: double GetNearClippingPlaneToleranceMinValue()\n\nSpecify tolerance for near clipping plane distance to the camera\nas a percentage of the far clipping plane distance. By default\nthis will be set to 0.01 for 16 bit zbuffers and 0.001 for higher\ndepth z buffers\n"},
  {(char*)"GetNearClippingPlaneToleranceMaxValue", PyvtkRenderer_GetNearClippingPlaneToleranceMaxValue, METH_VARARGS,
   (char*)"V.GetNearClippingPlaneToleranceMaxValue() -> float\nC++: double GetNearClippingPlaneToleranceMaxValue()\n\nSpecify tolerance for near clipping plane distance to the camera\nas a percentage of the far clipping plane distance. By default\nthis will be set to 0.01 for 16 bit zbuffers and 0.001 for higher\ndepth z buffers\n"},
  {(char*)"GetNearClippingPlaneTolerance", PyvtkRenderer_GetNearClippingPlaneTolerance, METH_VARARGS,
   (char*)"V.GetNearClippingPlaneTolerance() -> float\nC++: double GetNearClippingPlaneTolerance()\n\nSpecify tolerance for near clipping plane distance to the camera\nas a percentage of the far clipping plane distance. By default\nthis will be set to 0.01 for 16 bit zbuffers and 0.001 for higher\ndepth z buffers\n"},
  {(char*)"ResetCamera", PyvtkRenderer_ResetCamera, METH_VARARGS,
   (char*)"V.ResetCamera()\nC++: void ResetCamera()\nV.ResetCamera([float, float, float, float, float, float])\nC++: void ResetCamera(double bounds[6])\nV.ResetCamera(float, float, float, float, float, float)\nC++: void ResetCamera(double xmin, double xmax, double ymin,\n    double ymax, double zmin, double zmax)\n\nAutomatically set up the camera based on the visible actors. The\ncamera will reposition itself to view the center point of the\nactors, and move along its initial view plane normal (i.e.,\nvector defined from camera position to focal point) so that all\nof the actors can be seen.\n"},
  {(char*)"SetRenderWindow", PyvtkRenderer_SetRenderWindow, METH_VARARGS,
   (char*)"V.SetRenderWindow(vtkRenderWindow)\nC++: void SetRenderWindow(vtkRenderWindow *)\n\nSpecify the rendering window in which to draw. This is\nautomatically set when the renderer is created by MakeRenderer. \nThe user probably shouldn't ever need to call this method.\n"},
  {(char*)"GetRenderWindow", PyvtkRenderer_GetRenderWindow, METH_VARARGS,
   (char*)"V.GetRenderWindow() -> vtkRenderWindow\nC++: vtkRenderWindow *GetRenderWindow()\n\nSpecify the rendering window in which to draw. This is\nautomatically set when the renderer is created by MakeRenderer. \nThe user probably shouldn't ever need to call this method.\n"},
  {(char*)"GetVTKWindow", PyvtkRenderer_GetVTKWindow, METH_VARARGS,
   (char*)"V.GetVTKWindow() -> vtkWindow\nC++: virtual vtkWindow *GetVTKWindow()\n\nSpecify the rendering window in which to draw. This is\nautomatically set when the renderer is created by MakeRenderer. \nThe user probably shouldn't ever need to call this method.\n"},
  {(char*)"SetBackingStore", PyvtkRenderer_SetBackingStore, METH_VARARGS,
   (char*)"V.SetBackingStore(int)\nC++: void SetBackingStore(int a)\n\nTurn on/off using backing store. This may cause the re-rendering\ntime to be slightly slower when the view changes. But it is much\nfaster when the image has not changed, such as during an expose\nevent.\n"},
  {(char*)"GetBackingStore", PyvtkRenderer_GetBackingStore, METH_VARARGS,
   (char*)"V.GetBackingStore() -> int\nC++: int GetBackingStore()\n\nTurn on/off using backing store. This may cause the re-rendering\ntime to be slightly slower when the view changes. But it is much\nfaster when the image has not changed, such as during an expose\nevent.\n"},
  {(char*)"BackingStoreOn", PyvtkRenderer_BackingStoreOn, METH_VARARGS,
   (char*)"V.BackingStoreOn()\nC++: void BackingStoreOn()\n\nTurn on/off using backing store. This may cause the re-rendering\ntime to be slightly slower when the view changes. But it is much\nfaster when the image has not changed, such as during an expose\nevent.\n"},
  {(char*)"BackingStoreOff", PyvtkRenderer_BackingStoreOff, METH_VARARGS,
   (char*)"V.BackingStoreOff()\nC++: void BackingStoreOff()\n\nTurn on/off using backing store. This may cause the re-rendering\ntime to be slightly slower when the view changes. But it is much\nfaster when the image has not changed, such as during an expose\nevent.\n"},
  {(char*)"SetInteractive", PyvtkRenderer_SetInteractive, METH_VARARGS,
   (char*)"V.SetInteractive(int)\nC++: void SetInteractive(int a)\n\nTurn on/off interactive status.  An interactive renderer is one\nthat can receive events from an interactor.  Should only be set\nif there are multiple renderers in the same section of the\nviewport.\n"},
  {(char*)"GetInteractive", PyvtkRenderer_GetInteractive, METH_VARARGS,
   (char*)"V.GetInteractive() -> int\nC++: int GetInteractive()\n\nTurn on/off interactive status.  An interactive renderer is one\nthat can receive events from an interactor.  Should only be set\nif there are multiple renderers in the same section of the\nviewport.\n"},
  {(char*)"InteractiveOn", PyvtkRenderer_InteractiveOn, METH_VARARGS,
   (char*)"V.InteractiveOn()\nC++: void InteractiveOn()\n\nTurn on/off interactive status.  An interactive renderer is one\nthat can receive events from an interactor.  Should only be set\nif there are multiple renderers in the same section of the\nviewport.\n"},
  {(char*)"InteractiveOff", PyvtkRenderer_InteractiveOff, METH_VARARGS,
   (char*)"V.InteractiveOff()\nC++: void InteractiveOff()\n\nTurn on/off interactive status.  An interactive renderer is one\nthat can receive events from an interactor.  Should only be set\nif there are multiple renderers in the same section of the\nviewport.\n"},
  {(char*)"SetLayer", PyvtkRenderer_SetLayer, METH_VARARGS,
   (char*)"V.SetLayer(int)\nC++: void SetLayer(int a)\n\nSet/Get the layer that this renderer belongs to.  This is only\nused if there are layered renderers.\n"},
  {(char*)"GetLayer", PyvtkRenderer_GetLayer, METH_VARARGS,
   (char*)"V.GetLayer() -> int\nC++: int GetLayer()\n\nSet/Get the layer that this renderer belongs to.  This is only\nused if there are layered renderers.\n"},
  {(char*)"SetPreserveDepthBuffer", PyvtkRenderer_SetPreserveDepthBuffer, METH_VARARGS,
   (char*)"V.SetPreserveDepthBuffer(int)\nC++: void SetPreserveDepthBuffer(int a)\n\nNormally a renderer is treated as transparent if Layer > 0. To\ntreat a renderer at Layer 0 as transparent, set this flag to\ntrue.\n"},
  {(char*)"GetPreserveDepthBuffer", PyvtkRenderer_GetPreserveDepthBuffer, METH_VARARGS,
   (char*)"V.GetPreserveDepthBuffer() -> int\nC++: int GetPreserveDepthBuffer()\n\nNormally a renderer is treated as transparent if Layer > 0. To\ntreat a renderer at Layer 0 as transparent, set this flag to\ntrue.\n"},
  {(char*)"PreserveDepthBufferOn", PyvtkRenderer_PreserveDepthBufferOn, METH_VARARGS,
   (char*)"V.PreserveDepthBufferOn()\nC++: void PreserveDepthBufferOn()\n\nNormally a renderer is treated as transparent if Layer > 0. To\ntreat a renderer at Layer 0 as transparent, set this flag to\ntrue.\n"},
  {(char*)"PreserveDepthBufferOff", PyvtkRenderer_PreserveDepthBufferOff, METH_VARARGS,
   (char*)"V.PreserveDepthBufferOff()\nC++: void PreserveDepthBufferOff()\n\nNormally a renderer is treated as transparent if Layer > 0. To\ntreat a renderer at Layer 0 as transparent, set this flag to\ntrue.\n"},
  {(char*)"Transparent", PyvtkRenderer_Transparent, METH_VARARGS,
   (char*)"V.Transparent() -> int\nC++: int Transparent()\n\nReturns a boolean indicating if this renderer is transparent.  It\nis transparent if it is not in the deepest layer of its render\nwindow.\n"},
  {(char*)"WorldToView", PyvtkRenderer_WorldToView, METH_VARARGS,
   (char*)"V.WorldToView()\nC++: void WorldToView()\nV.WorldToView(float, float, float)\nC++: virtual void WorldToView(double &wx, double &wy, double &wz)\n\nConvert world point coordinates to view coordinates.\n"},
  {(char*)"ViewToWorld", PyvtkRenderer_ViewToWorld, METH_VARARGS,
   (char*)"V.ViewToWorld()\nC++: void ViewToWorld()\nV.ViewToWorld(float, float, float)\nC++: virtual void ViewToWorld(double &wx, double &wy, double &wz)\n\nConvert view point coordinates to world coordinates.\n"},
  {(char*)"GetZ", PyvtkRenderer_GetZ, METH_VARARGS,
   (char*)"V.GetZ(int, int) -> float\nC++: double GetZ(int x, int y)\n\nGiven a pixel location, return the Z value. The z value is\nnormalized (0,1) between the front and back clipping planes.\n"},
  {(char*)"GetMTime", PyvtkRenderer_GetMTime, METH_VARARGS,
   (char*)"V.GetMTime() -> int\nC++: unsigned long GetMTime()\n\nReturn the MTime of the renderer also considering its ivars.\n"},
  {(char*)"GetLastRenderTimeInSeconds", PyvtkRenderer_GetLastRenderTimeInSeconds, METH_VARARGS,
   (char*)"V.GetLastRenderTimeInSeconds() -> float\nC++: double GetLastRenderTimeInSeconds()\n\nGet the time required, in seconds, for the last Render call.\n"},
  {(char*)"GetNumberOfPropsRendered", PyvtkRenderer_GetNumberOfPropsRendered, METH_VARARGS,
   (char*)"V.GetNumberOfPropsRendered() -> int\nC++: int GetNumberOfPropsRendered()\n\nShould be used internally only during a render Get the number of\nprops that were rendered using a RenderOpaqueGeometry or\nRenderTranslucentPolygonalGeometry call. This is used to know if\nsomething is in the frame buffer.\n"},
  {(char*)"PickProp", PyvtkRenderer_PickProp, METH_VARARGS,
   (char*)"V.PickProp(float, float) -> vtkAssemblyPath\nC++: vtkAssemblyPath *PickProp(double selectionX,\n    double selectionY)\nV.PickProp(float, float, float, float) -> vtkAssemblyPath\nC++: vtkAssemblyPath *PickProp(double selectionX1,\n    double selectionY1, double selectionX2, double selectionY2)\n\nReturn the prop (via a vtkAssemblyPath) that has the highest z\nvalue at the given x, y position in the viewport.  Basically, the\ntop most prop that renders the pixel at selectionX, selectionY\nwill be returned. If nothing was picked then NULL is returned. \nThis method selects from the renderers Prop list.\n"},
  {(char*)"StereoMidpoint", PyvtkRenderer_StereoMidpoint, METH_VARARGS,
   (char*)"V.StereoMidpoint()\nC++: virtual void StereoMidpoint()\n\nDo anything necessary between rendering the left and right\nviewpoints in a stereo render. Doesn't do anything except in the\nderived vtkIceTRenderer in ParaView.\n"},
  {(char*)"GetTiledAspectRatio", PyvtkRenderer_GetTiledAspectRatio, METH_VARARGS,
   (char*)"V.GetTiledAspectRatio() -> float\nC++: double GetTiledAspectRatio()\n\nCompute the aspect ratio of this renderer for the current tile.\nWhen tiled displays are used the aspect ratio of the renderer for\na given tile may be different that the aspect ratio of the\nrenderer when rendered in it entirity\n"},
  {(char*)"IsActiveCameraCreated", PyvtkRenderer_IsActiveCameraCreated, METH_VARARGS,
   (char*)"V.IsActiveCameraCreated() -> int\nC++: int IsActiveCameraCreated()\n\nThis method returns 1 if the ActiveCamera has already been set or\nautomatically created by the renderer. It returns 0 if the\nActiveCamera does not yet exist.\n"},
  {(char*)"SetUseDepthPeeling", PyvtkRenderer_SetUseDepthPeeling, METH_VARARGS,
   (char*)"V.SetUseDepthPeeling(int)\nC++: void SetUseDepthPeeling(int a)\n\nTurn on/off rendering of translucent material with depth peeling\ntechnique. The render window must have alpha bits (ie call\nSetAlphaBitPlanes(1)) and no multisample buffer (ie call\nSetMultiSamples(0) ) to support depth peeling. If UseDepthPeeling\nis on and the GPU supports it, depth peeling is used for\nrendering translucent materials. If UseDepthPeeling is off, alpha\nblending is used. Initial value is off.\n"},
  {(char*)"GetUseDepthPeeling", PyvtkRenderer_GetUseDepthPeeling, METH_VARARGS,
   (char*)"V.GetUseDepthPeeling() -> int\nC++: int GetUseDepthPeeling()\n\nTurn on/off rendering of translucent material with depth peeling\ntechnique. The render window must have alpha bits (ie call\nSetAlphaBitPlanes(1)) and no multisample buffer (ie call\nSetMultiSamples(0) ) to support depth peeling. If UseDepthPeeling\nis on and the GPU supports it, depth peeling is used for\nrendering translucent materials. If UseDepthPeeling is off, alpha\nblending is used. Initial value is off.\n"},
  {(char*)"UseDepthPeelingOn", PyvtkRenderer_UseDepthPeelingOn, METH_VARARGS,
   (char*)"V.UseDepthPeelingOn()\nC++: void UseDepthPeelingOn()\n\nTurn on/off rendering of translucent material with depth peeling\ntechnique. The render window must have alpha bits (ie call\nSetAlphaBitPlanes(1)) and no multisample buffer (ie call\nSetMultiSamples(0) ) to support depth peeling. If UseDepthPeeling\nis on and the GPU supports it, depth peeling is used for\nrendering translucent materials. If UseDepthPeeling is off, alpha\nblending is used. Initial value is off.\n"},
  {(char*)"UseDepthPeelingOff", PyvtkRenderer_UseDepthPeelingOff, METH_VARARGS,
   (char*)"V.UseDepthPeelingOff()\nC++: void UseDepthPeelingOff()\n\nTurn on/off rendering of translucent material with depth peeling\ntechnique. The render window must have alpha bits (ie call\nSetAlphaBitPlanes(1)) and no multisample buffer (ie call\nSetMultiSamples(0) ) to support depth peeling. If UseDepthPeeling\nis on and the GPU supports it, depth peeling is used for\nrendering translucent materials. If UseDepthPeeling is off, alpha\nblending is used. Initial value is off.\n"},
  {(char*)"SetOcclusionRatio", PyvtkRenderer_SetOcclusionRatio, METH_VARARGS,
   (char*)"V.SetOcclusionRatio(float)\nC++: void SetOcclusionRatio(double)\n\nIn case of use of depth peeling technique for rendering\ntranslucent material, define the threshold under which the\nalgorithm stops to iterate over peel layers. This is the ratio of\nthe number of pixels that have been touched by the last layer\nover the total number of pixels of the viewport area. Initial\nvalue is 0.0, meaning rendering have to be exact. Greater values\nmay speed-up the rendering with small impact on the quality.\n"},
  {(char*)"GetOcclusionRatioMinValue", PyvtkRenderer_GetOcclusionRatioMinValue, METH_VARARGS,
   (char*)"V.GetOcclusionRatioMinValue() -> float\nC++: double GetOcclusionRatioMinValue()\n\nIn case of use of depth peeling technique for rendering\ntranslucent material, define the threshold under which the\nalgorithm stops to iterate over peel layers. This is the ratio of\nthe number of pixels that have been touched by the last layer\nover the total number of pixels of the viewport area. Initial\nvalue is 0.0, meaning rendering have to be exact. Greater values\nmay speed-up the rendering with small impact on the quality.\n"},
  {(char*)"GetOcclusionRatioMaxValue", PyvtkRenderer_GetOcclusionRatioMaxValue, METH_VARARGS,
   (char*)"V.GetOcclusionRatioMaxValue() -> float\nC++: double GetOcclusionRatioMaxValue()\n\nIn case of use of depth peeling technique for rendering\ntranslucent material, define the threshold under which the\nalgorithm stops to iterate over peel layers. This is the ratio of\nthe number of pixels that have been touched by the last layer\nover the total number of pixels of the viewport area. Initial\nvalue is 0.0, meaning rendering have to be exact. Greater values\nmay speed-up the rendering with small impact on the quality.\n"},
  {(char*)"GetOcclusionRatio", PyvtkRenderer_GetOcclusionRatio, METH_VARARGS,
   (char*)"V.GetOcclusionRatio() -> float\nC++: double GetOcclusionRatio()\n\nIn case of use of depth peeling technique for rendering\ntranslucent material, define the threshold under which the\nalgorithm stops to iterate over peel layers. This is the ratio of\nthe number of pixels that have been touched by the last layer\nover the total number of pixels of the viewport area. Initial\nvalue is 0.0, meaning rendering have to be exact. Greater values\nmay speed-up the rendering with small impact on the quality.\n"},
  {(char*)"SetMaximumNumberOfPeels", PyvtkRenderer_SetMaximumNumberOfPeels, METH_VARARGS,
   (char*)"V.SetMaximumNumberOfPeels(int)\nC++: void SetMaximumNumberOfPeels(int a)\n\nIn case of depth peeling, define the maximum number of peeling\nlayers. Initial value is 4. A special value of 0 means no maximum\nlimit. It has to be a positive value.\n"},
  {(char*)"GetMaximumNumberOfPeels", PyvtkRenderer_GetMaximumNumberOfPeels, METH_VARARGS,
   (char*)"V.GetMaximumNumberOfPeels() -> int\nC++: int GetMaximumNumberOfPeels()\n\nIn case of depth peeling, define the maximum number of peeling\nlayers. Initial value is 4. A special value of 0 means no maximum\nlimit. It has to be a positive value.\n"},
  {(char*)"GetLastRenderingUsedDepthPeeling", PyvtkRenderer_GetLastRenderingUsedDepthPeeling, METH_VARARGS,
   (char*)"V.GetLastRenderingUsedDepthPeeling() -> int\nC++: int GetLastRenderingUsedDepthPeeling()\n\nTells if the last call to\nDeviceRenderTranslucentPolygonalGeometry() actually used depth\npeeling. Initial value is false.\n"},
  {(char*)"SetDelegate", PyvtkRenderer_SetDelegate, METH_VARARGS,
   (char*)"V.SetDelegate(vtkRendererDelegate)\nC++: void SetDelegate(vtkRendererDelegate *d)\n\nSet/Get a custom Render call. Allows to hook a Render call from\nan external project.It will be used in place of\nvtkRenderer::Render() if it is not NULL and its Used ivar is set\nto true. Initial value is NULL.\n"},
  {(char*)"GetDelegate", PyvtkRenderer_GetDelegate, METH_VARARGS,
   (char*)"V.GetDelegate() -> vtkRendererDelegate\nC++: vtkRendererDelegate *GetDelegate()\n\nSet/Get a custom Render call. Allows to hook a Render call from\nan external project.It will be used in place of\nvtkRenderer::Render() if it is not NULL and its Used ivar is set\nto true. Initial value is NULL.\n"},
  {(char*)"GetSelector", PyvtkRenderer_GetSelector, METH_VARARGS,
   (char*)"V.GetSelector() -> vtkHardwareSelector\nC++: vtkHardwareSelector *GetSelector()\n\nGet the current hardware selector. If the Selector is set, it\nimplies the current render pass is for selection.\nMappers/Properties may choose to behave differently when\nrendering for hardware selection.\n"},
  {(char*)"SetBackgroundTexture", PyvtkRenderer_SetBackgroundTexture, METH_VARARGS,
   (char*)"V.SetBackgroundTexture(vtkTexture)\nC++: void SetBackgroundTexture(vtkTexture *)\n\nSet/Get the texture to be used for the background. If set and\nenabled this gets the priority over the gradient background.\n"},
  {(char*)"GetBackgroundTexture", PyvtkRenderer_GetBackgroundTexture, METH_VARARGS,
   (char*)"V.GetBackgroundTexture() -> vtkTexture\nC++: vtkTexture *GetBackgroundTexture()\n\nSet/Get the texture to be used for the background. If set and\nenabled this gets the priority over the gradient background.\n"},
  {(char*)"SetTexturedBackground", PyvtkRenderer_SetTexturedBackground, METH_VARARGS,
   (char*)"V.SetTexturedBackground(bool)\nC++: void SetTexturedBackground(bool a)\n\nSet/Get whether this viewport should have a textured background.\nDefault is off.\n"},
  {(char*)"GetTexturedBackground", PyvtkRenderer_GetTexturedBackground, METH_VARARGS,
   (char*)"V.GetTexturedBackground() -> bool\nC++: bool GetTexturedBackground()\n\nSet/Get whether this viewport should have a textured background.\nDefault is off.\n"},
  {(char*)"TexturedBackgroundOn", PyvtkRenderer_TexturedBackgroundOn, METH_VARARGS,
   (char*)"V.TexturedBackgroundOn()\nC++: void TexturedBackgroundOn()\n\nSet/Get whether this viewport should have a textured background.\nDefault is off.\n"},
  {(char*)"TexturedBackgroundOff", PyvtkRenderer_TexturedBackgroundOff, METH_VARARGS,
   (char*)"V.TexturedBackgroundOff()\nC++: void TexturedBackgroundOff()\n\nSet/Get whether this viewport should have a textured background.\nDefault is off.\n"},
  {(char*)"ReleaseGraphicsResources", PyvtkRenderer_ReleaseGraphicsResources, METH_VARARGS,
   (char*)"V.ReleaseGraphicsResources(vtkWindow)\nC++: virtual void ReleaseGraphicsResources(vtkWindow *)\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkRenderer_StaticNew()
{
  return vtkRenderer::New();
}

PyObject *PyVTKClass_vtkRendererNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkRenderer_StaticNew,
    PyvtkRenderer_Methods,
    "vtkRenderer", modulename,
    NULL, NULL,
    PyvtkRenderer_Doc(),
    PyVTKClass_vtkViewportNew(modulename));
  return cls;
}

const char **PyvtkRenderer_Doc()
{
  static const char *docstring[] = {
    "vtkRenderer - abstract specification for renderers\n\n",
    "Superclass: vtkViewport\n\n",
    "vtkRenderer provides an abstract specification for renderers. A\nrenderer is an object that controls the rendering process for\nobjects. Rendering is the process of converting geometry, a\nspecification for lights, and a camera view into an image.\nvtkRenderer also performs coordinate transformation between world\ncoordinates, view coordinates (the computer graphics rendering\ncoordinate system), and di",
    "splay coordinates (the actual screen\ncoordinates on the display device). Certain advanced rendering\nfeatures such as two-sided lighting can also be controlled.\n\nSee Also:\n\nvtkRenderWindow vtkActor vtkCamera vtkLight vtkVolume\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkRenderer(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkRendererNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkRenderer", o) != 0)
    {
    Py_DECREF(o);
    }

}

