// python wrapper for vtkTexturedButtonRepresentation
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkTexturedButtonRepresentation.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkTexturedButtonRepresentation(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkTexturedButtonRepresentationNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkButtonRepresentationNew
extern "C" { PyObject *PyVTKClass_vtkButtonRepresentationNew(const char *); }
#define DECLARED_PyVTKClass_vtkButtonRepresentationNew
#endif

static const char **PyvtkTexturedButtonRepresentation_Doc();


static PyObject *
PyvtkTexturedButtonRepresentation_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexturedButtonRepresentation *op = static_cast<vtkTexturedButtonRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkTexturedButtonRepresentation::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTexturedButtonRepresentation_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexturedButtonRepresentation *op = static_cast<vtkTexturedButtonRepresentation *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkTexturedButtonRepresentation::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTexturedButtonRepresentation_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexturedButtonRepresentation *op = static_cast<vtkTexturedButtonRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkTexturedButtonRepresentation *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkTexturedButtonRepresentation::NewInstance());

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
PyvtkTexturedButtonRepresentation_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkTexturedButtonRepresentation *tempr = vtkTexturedButtonRepresentation::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTexturedButtonRepresentation_SetButtonGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetButtonGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexturedButtonRepresentation *op = static_cast<vtkTexturedButtonRepresentation *>(vp);

  vtkPolyData *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPolyData"))
    {
    if (ap.IsBound())
      {
      op->SetButtonGeometry(temp0);
      }
    else
      {
      op->vtkTexturedButtonRepresentation::SetButtonGeometry(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTexturedButtonRepresentation_SetButtonGeometryConnection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetButtonGeometryConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexturedButtonRepresentation *op = static_cast<vtkTexturedButtonRepresentation *>(vp);

  vtkAlgorithmOutput *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAlgorithmOutput"))
    {
    if (ap.IsBound())
      {
      op->SetButtonGeometryConnection(temp0);
      }
    else
      {
      op->vtkTexturedButtonRepresentation::SetButtonGeometryConnection(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTexturedButtonRepresentation_GetButtonGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetButtonGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexturedButtonRepresentation *op = static_cast<vtkTexturedButtonRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPolyData *tempr = (ap.IsBound() ?
      op->GetButtonGeometry() :
      op->vtkTexturedButtonRepresentation::GetButtonGeometry());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTexturedButtonRepresentation_SetFollowCamera(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFollowCamera");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexturedButtonRepresentation *op = static_cast<vtkTexturedButtonRepresentation *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetFollowCamera(temp0);
      }
    else
      {
      op->vtkTexturedButtonRepresentation::SetFollowCamera(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTexturedButtonRepresentation_GetFollowCamera(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFollowCamera");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexturedButtonRepresentation *op = static_cast<vtkTexturedButtonRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetFollowCamera() :
      op->vtkTexturedButtonRepresentation::GetFollowCamera());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTexturedButtonRepresentation_FollowCameraOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FollowCameraOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexturedButtonRepresentation *op = static_cast<vtkTexturedButtonRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->FollowCameraOn();
      }
    else
      {
      op->vtkTexturedButtonRepresentation::FollowCameraOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTexturedButtonRepresentation_FollowCameraOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FollowCameraOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexturedButtonRepresentation *op = static_cast<vtkTexturedButtonRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->FollowCameraOff();
      }
    else
      {
      op->vtkTexturedButtonRepresentation::FollowCameraOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTexturedButtonRepresentation_SetProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexturedButtonRepresentation *op = static_cast<vtkTexturedButtonRepresentation *>(vp);

  vtkProperty *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkProperty"))
    {
    if (ap.IsBound())
      {
      op->SetProperty(temp0);
      }
    else
      {
      op->vtkTexturedButtonRepresentation::SetProperty(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTexturedButtonRepresentation_GetProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexturedButtonRepresentation *op = static_cast<vtkTexturedButtonRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetProperty() :
      op->vtkTexturedButtonRepresentation::GetProperty());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTexturedButtonRepresentation_SetHoveringProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHoveringProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexturedButtonRepresentation *op = static_cast<vtkTexturedButtonRepresentation *>(vp);

  vtkProperty *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkProperty"))
    {
    if (ap.IsBound())
      {
      op->SetHoveringProperty(temp0);
      }
    else
      {
      op->vtkTexturedButtonRepresentation::SetHoveringProperty(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTexturedButtonRepresentation_GetHoveringProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHoveringProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexturedButtonRepresentation *op = static_cast<vtkTexturedButtonRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetHoveringProperty() :
      op->vtkTexturedButtonRepresentation::GetHoveringProperty());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTexturedButtonRepresentation_SetSelectingProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSelectingProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexturedButtonRepresentation *op = static_cast<vtkTexturedButtonRepresentation *>(vp);

  vtkProperty *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkProperty"))
    {
    if (ap.IsBound())
      {
      op->SetSelectingProperty(temp0);
      }
    else
      {
      op->vtkTexturedButtonRepresentation::SetSelectingProperty(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTexturedButtonRepresentation_GetSelectingProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelectingProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexturedButtonRepresentation *op = static_cast<vtkTexturedButtonRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetSelectingProperty() :
      op->vtkTexturedButtonRepresentation::GetSelectingProperty());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTexturedButtonRepresentation_SetButtonTexture(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetButtonTexture");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexturedButtonRepresentation *op = static_cast<vtkTexturedButtonRepresentation *>(vp);

  int temp0;
  vtkImageData *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkImageData"))
    {
    if (ap.IsBound())
      {
      op->SetButtonTexture(temp0, temp1);
      }
    else
      {
      op->vtkTexturedButtonRepresentation::SetButtonTexture(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTexturedButtonRepresentation_GetButtonTexture(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetButtonTexture");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexturedButtonRepresentation *op = static_cast<vtkTexturedButtonRepresentation *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkImageData *tempr = (ap.IsBound() ?
      op->GetButtonTexture(temp0) :
      op->vtkTexturedButtonRepresentation::GetButtonTexture(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTexturedButtonRepresentation_PlaceWidget_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PlaceWidget");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexturedButtonRepresentation *op = static_cast<vtkTexturedButtonRepresentation *>(vp);

  double temp0;
  double temp1[3];
  double save1[3];
  const int size1 = 3;
  double temp2[3];
  double save2[3];
  const int size2 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetArray(temp2, size2))
    {
    ap.SaveArray(temp1, save1, size1);
    ap.SaveArray(temp2, save2, size2);

    if (ap.IsBound())
      {
      op->PlaceWidget(temp0, temp1, temp2);
      }
    else
      {
      op->vtkTexturedButtonRepresentation::PlaceWidget(temp0, temp1, temp2);
      }

    if (ap.ArrayHasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(1, temp1, size1);
      }

    if (ap.ArrayHasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(2, temp2, size2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkTexturedButtonRepresentation_PlaceWidget_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PlaceWidget");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexturedButtonRepresentation *op = static_cast<vtkTexturedButtonRepresentation *>(vp);

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
      op->PlaceWidget(temp0);
      }
    else
      {
      op->vtkTexturedButtonRepresentation::PlaceWidget(temp0);
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
PyvtkTexturedButtonRepresentation_PlaceWidget(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkTexturedButtonRepresentation_PlaceWidget_s1(self, args);
    case 1:
      return PyvtkTexturedButtonRepresentation_PlaceWidget_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "PlaceWidget");
  return NULL;
}



static PyObject *
PyvtkTexturedButtonRepresentation_ComputeInteractionState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeInteractionState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexturedButtonRepresentation *op = static_cast<vtkTexturedButtonRepresentation *>(vp);

  int temp0;
  int temp1;
  int temp2 = 0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2, 3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)))
    {
    int tempr = (ap.IsBound() ?
      op->ComputeInteractionState(temp0, temp1, temp2) :
      op->vtkTexturedButtonRepresentation::ComputeInteractionState(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTexturedButtonRepresentation_BuildRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BuildRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexturedButtonRepresentation *op = static_cast<vtkTexturedButtonRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->BuildRepresentation();
      }
    else
      {
      op->vtkTexturedButtonRepresentation::BuildRepresentation();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTexturedButtonRepresentation_Highlight(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Highlight");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexturedButtonRepresentation *op = static_cast<vtkTexturedButtonRepresentation *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->Highlight(temp0);
      }
    else
      {
      op->vtkTexturedButtonRepresentation::Highlight(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTexturedButtonRepresentation_ShallowCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShallowCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexturedButtonRepresentation *op = static_cast<vtkTexturedButtonRepresentation *>(vp);

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
      op->vtkTexturedButtonRepresentation::ShallowCopy(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTexturedButtonRepresentation_GetBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexturedButtonRepresentation *op = static_cast<vtkTexturedButtonRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetBounds() :
      op->vtkTexturedButtonRepresentation::GetBounds());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTexturedButtonRepresentation_GetActors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexturedButtonRepresentation *op = static_cast<vtkTexturedButtonRepresentation *>(vp);

  vtkPropCollection *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPropCollection"))
    {
    if (ap.IsBound())
      {
      op->GetActors(temp0);
      }
    else
      {
      op->vtkTexturedButtonRepresentation::GetActors(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTexturedButtonRepresentation_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexturedButtonRepresentation *op = static_cast<vtkTexturedButtonRepresentation *>(vp);

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
      op->vtkTexturedButtonRepresentation::ReleaseGraphicsResources(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTexturedButtonRepresentation_RenderOpaqueGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOpaqueGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexturedButtonRepresentation *op = static_cast<vtkTexturedButtonRepresentation *>(vp);

  vtkViewport *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
    {
    int tempr = (ap.IsBound() ?
      op->RenderOpaqueGeometry(temp0) :
      op->vtkTexturedButtonRepresentation::RenderOpaqueGeometry(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTexturedButtonRepresentation_RenderTranslucentPolygonalGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderTranslucentPolygonalGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexturedButtonRepresentation *op = static_cast<vtkTexturedButtonRepresentation *>(vp);

  vtkViewport *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
    {
    int tempr = (ap.IsBound() ?
      op->RenderTranslucentPolygonalGeometry(temp0) :
      op->vtkTexturedButtonRepresentation::RenderTranslucentPolygonalGeometry(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTexturedButtonRepresentation_HasTranslucentPolygonalGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasTranslucentPolygonalGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexturedButtonRepresentation *op = static_cast<vtkTexturedButtonRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->HasTranslucentPolygonalGeometry() :
      op->vtkTexturedButtonRepresentation::HasTranslucentPolygonalGeometry());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkTexturedButtonRepresentation_Methods[] = {
  {(char*)"GetClassName", PyvtkTexturedButtonRepresentation_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\nStandard methods for instances of the class.\n"},
  {(char*)"IsA", PyvtkTexturedButtonRepresentation_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\nStandard methods for instances of the class.\n"},
  {(char*)"NewInstance", PyvtkTexturedButtonRepresentation_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkTexturedButtonRepresentation\nC++: vtkTexturedButtonRepresentation *NewInstance()\n\nStandard methods for instances of the class.\n"},
  {(char*)"SafeDownCast", PyvtkTexturedButtonRepresentation_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkTexturedButtonRepresentation\nC++: vtkTexturedButtonRepresentation *SafeDownCast(vtkObject* o)\n\nStandard methods for instances of the class.\n"},
  {(char*)"SetButtonGeometry", PyvtkTexturedButtonRepresentation_SetButtonGeometry, METH_VARARGS,
   (char*)"V.SetButtonGeometry(vtkPolyData)\nC++: void SetButtonGeometry(vtkPolyData *pd)\n\nSet/Get the polydata which defines the button geometry.\n"},
  {(char*)"SetButtonGeometryConnection", PyvtkTexturedButtonRepresentation_SetButtonGeometryConnection, METH_VARARGS,
   (char*)"V.SetButtonGeometryConnection(vtkAlgorithmOutput)\nC++: void SetButtonGeometryConnection(\n    vtkAlgorithmOutput *algOutput)\n\nSet/Get the polydata which defines the button geometry.\n"},
  {(char*)"GetButtonGeometry", PyvtkTexturedButtonRepresentation_GetButtonGeometry, METH_VARARGS,
   (char*)"V.GetButtonGeometry() -> vtkPolyData\nC++: vtkPolyData *GetButtonGeometry()\n\nSet/Get the polydata which defines the button geometry.\n"},
  {(char*)"SetFollowCamera", PyvtkTexturedButtonRepresentation_SetFollowCamera, METH_VARARGS,
   (char*)"V.SetFollowCamera(int)\nC++: void SetFollowCamera(int a)\n\nSpecify whether the button should always face the camera. If\nenabled, the button rotates as the camera moves.\n"},
  {(char*)"GetFollowCamera", PyvtkTexturedButtonRepresentation_GetFollowCamera, METH_VARARGS,
   (char*)"V.GetFollowCamera() -> int\nC++: int GetFollowCamera()\n\nSpecify whether the button should always face the camera. If\nenabled, the button rotates as the camera moves.\n"},
  {(char*)"FollowCameraOn", PyvtkTexturedButtonRepresentation_FollowCameraOn, METH_VARARGS,
   (char*)"V.FollowCameraOn()\nC++: void FollowCameraOn()\n\nSpecify whether the button should always face the camera. If\nenabled, the button rotates as the camera moves.\n"},
  {(char*)"FollowCameraOff", PyvtkTexturedButtonRepresentation_FollowCameraOff, METH_VARARGS,
   (char*)"V.FollowCameraOff()\nC++: void FollowCameraOff()\n\nSpecify whether the button should always face the camera. If\nenabled, the button rotates as the camera moves.\n"},
  {(char*)"SetProperty", PyvtkTexturedButtonRepresentation_SetProperty, METH_VARARGS,
   (char*)"V.SetProperty(vtkProperty)\nC++: virtual void SetProperty(vtkProperty *p)\n\nSpecify the property to use when the button is to appear \"normal\"\ni.e., the mouse pointer is not hovering or selecting the button.\n"},
  {(char*)"GetProperty", PyvtkTexturedButtonRepresentation_GetProperty, METH_VARARGS,
   (char*)"V.GetProperty() -> vtkProperty\nC++: vtkProperty *GetProperty()\n\nSpecify the property to use when the button is to appear \"normal\"\ni.e., the mouse pointer is not hovering or selecting the button.\n"},
  {(char*)"SetHoveringProperty", PyvtkTexturedButtonRepresentation_SetHoveringProperty, METH_VARARGS,
   (char*)"V.SetHoveringProperty(vtkProperty)\nC++: virtual void SetHoveringProperty(vtkProperty *p)\n\nSpecify the property to use when the hovering over the button.\n"},
  {(char*)"GetHoveringProperty", PyvtkTexturedButtonRepresentation_GetHoveringProperty, METH_VARARGS,
   (char*)"V.GetHoveringProperty() -> vtkProperty\nC++: vtkProperty *GetHoveringProperty()\n\nSpecify the property to use when the hovering over the button.\n"},
  {(char*)"SetSelectingProperty", PyvtkTexturedButtonRepresentation_SetSelectingProperty, METH_VARARGS,
   (char*)"V.SetSelectingProperty(vtkProperty)\nC++: virtual void SetSelectingProperty(vtkProperty *p)\n\nSpecify the property to use when selecting the button.\n"},
  {(char*)"GetSelectingProperty", PyvtkTexturedButtonRepresentation_GetSelectingProperty, METH_VARARGS,
   (char*)"V.GetSelectingProperty() -> vtkProperty\nC++: vtkProperty *GetSelectingProperty()\n\nSpecify the property to use when selecting the button.\n"},
  {(char*)"SetButtonTexture", PyvtkTexturedButtonRepresentation_SetButtonTexture, METH_VARARGS,
   (char*)"V.SetButtonTexture(int, vtkImageData)\nC++: void SetButtonTexture(int i, vtkImageData *image)\n\nAdd the ith texture corresponding to the ith button state. The\nparameter i should be (0 <= i < NumberOfStates).\n"},
  {(char*)"GetButtonTexture", PyvtkTexturedButtonRepresentation_GetButtonTexture, METH_VARARGS,
   (char*)"V.GetButtonTexture(int) -> vtkImageData\nC++: vtkImageData *GetButtonTexture(int i)\n\nAdd the ith texture corresponding to the ith button state. The\nparameter i should be (0 <= i < NumberOfStates).\n"},
  {(char*)"PlaceWidget", PyvtkTexturedButtonRepresentation_PlaceWidget, METH_VARARGS,
   (char*)"V.PlaceWidget(float, [float, float, float], [float, float, float])\nC++: virtual void PlaceWidget(double scale, double point[3],\n    double normal[3])\nV.PlaceWidget([float, float, float, float, float, float])\nC++: virtual void PlaceWidget(double bounds[6])\n\nAlternative method for placing a button at a given position\n(defined by point[3]); at a given orientation (normal[3], where\nthe z-axis of the button geometry is parallel to the normal); and\nscaled by the scale parameter. This method can bs used to attach \"sticky\nnotes\" or \"sticky buttons\" to objects. A great way to attach\ninteractive meta-data to 3D actors.\n"},
  {(char*)"ComputeInteractionState", PyvtkTexturedButtonRepresentation_ComputeInteractionState, METH_VARARGS,
   (char*)"V.ComputeInteractionState(int, int, int) -> int\nC++: virtual int ComputeInteractionState(int X, int Y,\n    int modify=0)\n\nProvide the necessary methods to satisfy the\nvtkWidgetRepresentation API.\n"},
  {(char*)"BuildRepresentation", PyvtkTexturedButtonRepresentation_BuildRepresentation, METH_VARARGS,
   (char*)"V.BuildRepresentation()\nC++: virtual void BuildRepresentation()\n\nProvide the necessary methods to satisfy the\nvtkWidgetRepresentation API.\n"},
  {(char*)"Highlight", PyvtkTexturedButtonRepresentation_Highlight, METH_VARARGS,
   (char*)"V.Highlight(int)\nC++: virtual void Highlight(int state)\n\nProvide the necessary methods to satisfy the\nvtkWidgetRepresentation API.\n"},
  {(char*)"ShallowCopy", PyvtkTexturedButtonRepresentation_ShallowCopy, METH_VARARGS,
   (char*)"V.ShallowCopy(vtkProp)\nC++: virtual void ShallowCopy(vtkProp *prop)\n\nProvide the necessary methods to satisfy the rendering API.\n"},
  {(char*)"GetBounds", PyvtkTexturedButtonRepresentation_GetBounds, METH_VARARGS,
   (char*)"V.GetBounds() -> (float, ...)\nC++: virtual double *GetBounds()\n\nProvide the necessary methods to satisfy the rendering API.\n"},
  {(char*)"GetActors", PyvtkTexturedButtonRepresentation_GetActors, METH_VARARGS,
   (char*)"V.GetActors(vtkPropCollection)\nC++: virtual void GetActors(vtkPropCollection *pc)\n\nProvide the necessary methods to satisfy the rendering API.\n"},
  {(char*)"ReleaseGraphicsResources", PyvtkTexturedButtonRepresentation_ReleaseGraphicsResources, METH_VARARGS,
   (char*)"V.ReleaseGraphicsResources(vtkWindow)\nC++: virtual void ReleaseGraphicsResources(vtkWindow *)\n\nProvide the necessary methods to satisfy the rendering API.\n"},
  {(char*)"RenderOpaqueGeometry", PyvtkTexturedButtonRepresentation_RenderOpaqueGeometry, METH_VARARGS,
   (char*)"V.RenderOpaqueGeometry(vtkViewport) -> int\nC++: virtual int RenderOpaqueGeometry(vtkViewport *)\n\nProvide the necessary methods to satisfy the rendering API.\n"},
  {(char*)"RenderTranslucentPolygonalGeometry", PyvtkTexturedButtonRepresentation_RenderTranslucentPolygonalGeometry, METH_VARARGS,
   (char*)"V.RenderTranslucentPolygonalGeometry(vtkViewport) -> int\nC++: virtual int RenderTranslucentPolygonalGeometry(vtkViewport *)\n\nProvide the necessary methods to satisfy the rendering API.\n"},
  {(char*)"HasTranslucentPolygonalGeometry", PyvtkTexturedButtonRepresentation_HasTranslucentPolygonalGeometry, METH_VARARGS,
   (char*)"V.HasTranslucentPolygonalGeometry() -> int\nC++: virtual int HasTranslucentPolygonalGeometry()\n\nProvide the necessary methods to satisfy the rendering API.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkTexturedButtonRepresentation_StaticNew()
{
  return vtkTexturedButtonRepresentation::New();
}

PyObject *PyVTKClass_vtkTexturedButtonRepresentationNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkTexturedButtonRepresentation_StaticNew,
    PyvtkTexturedButtonRepresentation_Methods,
    "vtkTexturedButtonRepresentation", modulename,
    NULL, NULL,
    PyvtkTexturedButtonRepresentation_Doc(),
    PyVTKClass_vtkButtonRepresentationNew(modulename));
  return cls;
}

const char **PyvtkTexturedButtonRepresentation_Doc()
{
  static const char *docstring[] = {
    "vtkTexturedButtonRepresentation - defines a representation for a\nvtkButtonWidget\n\n",
    "Superclass: vtkButtonRepresentation\n\n",
    "This class implements one type of vtkButtonRepresentation. It changes\nthe appearance of a user-provided polydata by assigning textures\naccording to the current button state. It also provides highlighting\n(when hovering and selecting the button) by fiddling with the actor's\nproperty.\n\nTo use this representation, always begin by specifying the number of\nbutton states.  Then provide a polydata (the p",
    "olydata should have\nassociated texture coordinates), and a list of textures cooresponding\nto the button states. Optionally, the HoveringProperty and\nSelectionProperty can be adjusted to obtain the appropriate\nappearance.\n\nThis widget representation has two placement methods. The\nconventional PlaceWidget() method is used to locate the textured\nbutton inside of a user-specified bounding box (note th",
    "at the button\ngeometry is uniformly scaled to fit, thus two of the three dimensions\ncan be \"large\" and the third used to perform the scaling). However\nthis PlaceWidget() method will align the geometry within x-y-z\noriented bounds. To further control the placement, use the additional\nPlaceWidget(scale,point,normal) method. This scales the geometry,\nplaces its center at the specified point position,",
    " and orients the\ngeometry's z-direction parallel to the specified normal. This can be\nused to attach \"sticky notes\" or \"sticky buttons\" to the surface of\nobjects.\n\nSee Also:\n\nvtkButtonWidget vtkButtonRepresentation vtkButtonSource\nvtkEllipticalButtonSource vtkRectangularButtonSource\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkTexturedButtonRepresentation(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkTexturedButtonRepresentationNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkTexturedButtonRepresentation", o) != 0)
    {
    Py_DECREF(o);
    }

}

