// python wrapper for vtkAbstractPolygonalHandleRepresentation3D
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkAbstractPolygonalHandleRepresentation3D.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkAbstractPolygonalHandleRepresentation3D(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkAbstractPolygonalHandleRepresentation3DNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkHandleRepresentationNew
extern "C" { PyObject *PyVTKClass_vtkHandleRepresentationNew(const char *); }
#define DECLARED_PyVTKClass_vtkHandleRepresentationNew
#endif

static const char **PyvtkAbstractPolygonalHandleRepresentation3D_Doc();


static PyObject *
PyvtkAbstractPolygonalHandleRepresentation3D_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractPolygonalHandleRepresentation3D *op = static_cast<vtkAbstractPolygonalHandleRepresentation3D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkAbstractPolygonalHandleRepresentation3D::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAbstractPolygonalHandleRepresentation3D_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractPolygonalHandleRepresentation3D *op = static_cast<vtkAbstractPolygonalHandleRepresentation3D *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkAbstractPolygonalHandleRepresentation3D::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAbstractPolygonalHandleRepresentation3D_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractPolygonalHandleRepresentation3D *op = static_cast<vtkAbstractPolygonalHandleRepresentation3D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkAbstractPolygonalHandleRepresentation3D *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkAbstractPolygonalHandleRepresentation3D::NewInstance());

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
PyvtkAbstractPolygonalHandleRepresentation3D_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkAbstractPolygonalHandleRepresentation3D *tempr = vtkAbstractPolygonalHandleRepresentation3D::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAbstractPolygonalHandleRepresentation3D_SetWorldPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWorldPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractPolygonalHandleRepresentation3D *op = static_cast<vtkAbstractPolygonalHandleRepresentation3D *>(vp);

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
      op->SetWorldPosition(temp0);
      }
    else
      {
      op->vtkAbstractPolygonalHandleRepresentation3D::SetWorldPosition(temp0);
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
PyvtkAbstractPolygonalHandleRepresentation3D_SetDisplayPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDisplayPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractPolygonalHandleRepresentation3D *op = static_cast<vtkAbstractPolygonalHandleRepresentation3D *>(vp);

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
      op->SetDisplayPosition(temp0);
      }
    else
      {
      op->vtkAbstractPolygonalHandleRepresentation3D::SetDisplayPosition(temp0);
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
PyvtkAbstractPolygonalHandleRepresentation3D_SetHandle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHandle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractPolygonalHandleRepresentation3D *op = static_cast<vtkAbstractPolygonalHandleRepresentation3D *>(vp);

  vtkPolyData *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPolyData"))
    {
    if (ap.IsBound())
      {
      op->SetHandle(temp0);
      }
    else
      {
      op->vtkAbstractPolygonalHandleRepresentation3D::SetHandle(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAbstractPolygonalHandleRepresentation3D_GetHandle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHandle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractPolygonalHandleRepresentation3D *op = static_cast<vtkAbstractPolygonalHandleRepresentation3D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPolyData *tempr = (ap.IsBound() ?
      op->GetHandle() :
      op->vtkAbstractPolygonalHandleRepresentation3D::GetHandle());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAbstractPolygonalHandleRepresentation3D_SetProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractPolygonalHandleRepresentation3D *op = static_cast<vtkAbstractPolygonalHandleRepresentation3D *>(vp);

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
      op->vtkAbstractPolygonalHandleRepresentation3D::SetProperty(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAbstractPolygonalHandleRepresentation3D_SetSelectedProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSelectedProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractPolygonalHandleRepresentation3D *op = static_cast<vtkAbstractPolygonalHandleRepresentation3D *>(vp);

  vtkProperty *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkProperty"))
    {
    if (ap.IsBound())
      {
      op->SetSelectedProperty(temp0);
      }
    else
      {
      op->vtkAbstractPolygonalHandleRepresentation3D::SetSelectedProperty(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAbstractPolygonalHandleRepresentation3D_GetProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractPolygonalHandleRepresentation3D *op = static_cast<vtkAbstractPolygonalHandleRepresentation3D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetProperty() :
      op->vtkAbstractPolygonalHandleRepresentation3D::GetProperty());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAbstractPolygonalHandleRepresentation3D_GetSelectedProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelectedProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractPolygonalHandleRepresentation3D *op = static_cast<vtkAbstractPolygonalHandleRepresentation3D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetSelectedProperty() :
      op->vtkAbstractPolygonalHandleRepresentation3D::GetSelectedProperty());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAbstractPolygonalHandleRepresentation3D_GetTransform(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTransform");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractPolygonalHandleRepresentation3D *op = static_cast<vtkAbstractPolygonalHandleRepresentation3D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkAbstractTransform *tempr = (ap.IsBound() ?
      op->GetTransform() :
      op->vtkAbstractPolygonalHandleRepresentation3D::GetTransform());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAbstractPolygonalHandleRepresentation3D_BuildRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BuildRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractPolygonalHandleRepresentation3D *op = static_cast<vtkAbstractPolygonalHandleRepresentation3D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->BuildRepresentation();
      }
    else
      {
      op->vtkAbstractPolygonalHandleRepresentation3D::BuildRepresentation();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAbstractPolygonalHandleRepresentation3D_StartWidgetInteraction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StartWidgetInteraction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractPolygonalHandleRepresentation3D *op = static_cast<vtkAbstractPolygonalHandleRepresentation3D *>(vp);

  double temp0[2];
  double save0[2];
  const int size0 = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    if (ap.IsBound())
      {
      op->StartWidgetInteraction(temp0);
      }
    else
      {
      op->vtkAbstractPolygonalHandleRepresentation3D::StartWidgetInteraction(temp0);
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
PyvtkAbstractPolygonalHandleRepresentation3D_WidgetInteraction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WidgetInteraction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractPolygonalHandleRepresentation3D *op = static_cast<vtkAbstractPolygonalHandleRepresentation3D *>(vp);

  double temp0[2];
  double save0[2];
  const int size0 = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    if (ap.IsBound())
      {
      op->WidgetInteraction(temp0);
      }
    else
      {
      op->vtkAbstractPolygonalHandleRepresentation3D::WidgetInteraction(temp0);
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
PyvtkAbstractPolygonalHandleRepresentation3D_ComputeInteractionState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeInteractionState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractPolygonalHandleRepresentation3D *op = static_cast<vtkAbstractPolygonalHandleRepresentation3D *>(vp);

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
      op->vtkAbstractPolygonalHandleRepresentation3D::ComputeInteractionState(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAbstractPolygonalHandleRepresentation3D_ShallowCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShallowCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractPolygonalHandleRepresentation3D *op = static_cast<vtkAbstractPolygonalHandleRepresentation3D *>(vp);

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
      op->vtkAbstractPolygonalHandleRepresentation3D::ShallowCopy(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAbstractPolygonalHandleRepresentation3D_DeepCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeepCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractPolygonalHandleRepresentation3D *op = static_cast<vtkAbstractPolygonalHandleRepresentation3D *>(vp);

  vtkProp *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkProp"))
    {
    if (ap.IsBound())
      {
      op->DeepCopy(temp0);
      }
    else
      {
      op->vtkAbstractPolygonalHandleRepresentation3D::DeepCopy(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAbstractPolygonalHandleRepresentation3D_GetActors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractPolygonalHandleRepresentation3D *op = static_cast<vtkAbstractPolygonalHandleRepresentation3D *>(vp);

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
      op->vtkAbstractPolygonalHandleRepresentation3D::GetActors(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAbstractPolygonalHandleRepresentation3D_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractPolygonalHandleRepresentation3D *op = static_cast<vtkAbstractPolygonalHandleRepresentation3D *>(vp);

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
      op->vtkAbstractPolygonalHandleRepresentation3D::ReleaseGraphicsResources(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAbstractPolygonalHandleRepresentation3D_RenderOpaqueGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOpaqueGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractPolygonalHandleRepresentation3D *op = static_cast<vtkAbstractPolygonalHandleRepresentation3D *>(vp);

  vtkViewport *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
    {
    int tempr = (ap.IsBound() ?
      op->RenderOpaqueGeometry(temp0) :
      op->vtkAbstractPolygonalHandleRepresentation3D::RenderOpaqueGeometry(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAbstractPolygonalHandleRepresentation3D_RenderTranslucentPolygonalGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderTranslucentPolygonalGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractPolygonalHandleRepresentation3D *op = static_cast<vtkAbstractPolygonalHandleRepresentation3D *>(vp);

  vtkViewport *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
    {
    int tempr = (ap.IsBound() ?
      op->RenderTranslucentPolygonalGeometry(temp0) :
      op->vtkAbstractPolygonalHandleRepresentation3D::RenderTranslucentPolygonalGeometry(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAbstractPolygonalHandleRepresentation3D_HasTranslucentPolygonalGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasTranslucentPolygonalGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractPolygonalHandleRepresentation3D *op = static_cast<vtkAbstractPolygonalHandleRepresentation3D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->HasTranslucentPolygonalGeometry() :
      op->vtkAbstractPolygonalHandleRepresentation3D::HasTranslucentPolygonalGeometry());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAbstractPolygonalHandleRepresentation3D_GetBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractPolygonalHandleRepresentation3D *op = static_cast<vtkAbstractPolygonalHandleRepresentation3D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetBounds() :
      op->vtkAbstractPolygonalHandleRepresentation3D::GetBounds());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAbstractPolygonalHandleRepresentation3D_SetLabelVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLabelVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractPolygonalHandleRepresentation3D *op = static_cast<vtkAbstractPolygonalHandleRepresentation3D *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetLabelVisibility(temp0);
      }
    else
      {
      op->vtkAbstractPolygonalHandleRepresentation3D::SetLabelVisibility(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAbstractPolygonalHandleRepresentation3D_GetLabelVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLabelVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractPolygonalHandleRepresentation3D *op = static_cast<vtkAbstractPolygonalHandleRepresentation3D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetLabelVisibility() :
      op->vtkAbstractPolygonalHandleRepresentation3D::GetLabelVisibility());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAbstractPolygonalHandleRepresentation3D_LabelVisibilityOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LabelVisibilityOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractPolygonalHandleRepresentation3D *op = static_cast<vtkAbstractPolygonalHandleRepresentation3D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->LabelVisibilityOn();
      }
    else
      {
      op->vtkAbstractPolygonalHandleRepresentation3D::LabelVisibilityOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAbstractPolygonalHandleRepresentation3D_LabelVisibilityOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LabelVisibilityOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractPolygonalHandleRepresentation3D *op = static_cast<vtkAbstractPolygonalHandleRepresentation3D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->LabelVisibilityOff();
      }
    else
      {
      op->vtkAbstractPolygonalHandleRepresentation3D::LabelVisibilityOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAbstractPolygonalHandleRepresentation3D_SetLabelText(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLabelText");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractPolygonalHandleRepresentation3D *op = static_cast<vtkAbstractPolygonalHandleRepresentation3D *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetLabelText(temp0);
      }
    else
      {
      op->vtkAbstractPolygonalHandleRepresentation3D::SetLabelText(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAbstractPolygonalHandleRepresentation3D_GetLabelText(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLabelText");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractPolygonalHandleRepresentation3D *op = static_cast<vtkAbstractPolygonalHandleRepresentation3D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetLabelText() :
      op->vtkAbstractPolygonalHandleRepresentation3D::GetLabelText());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAbstractPolygonalHandleRepresentation3D_SetLabelTextScale_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLabelTextScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractPolygonalHandleRepresentation3D *op = static_cast<vtkAbstractPolygonalHandleRepresentation3D *>(vp);

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
      op->SetLabelTextScale(temp0);
      }
    else
      {
      op->vtkAbstractPolygonalHandleRepresentation3D::SetLabelTextScale(temp0);
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
PyvtkAbstractPolygonalHandleRepresentation3D_SetLabelTextScale_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLabelTextScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractPolygonalHandleRepresentation3D *op = static_cast<vtkAbstractPolygonalHandleRepresentation3D *>(vp);

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
      op->SetLabelTextScale(temp0, temp1, temp2);
      }
    else
      {
      op->vtkAbstractPolygonalHandleRepresentation3D::SetLabelTextScale(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkAbstractPolygonalHandleRepresentation3D_SetLabelTextScale(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkAbstractPolygonalHandleRepresentation3D_SetLabelTextScale_s1(self, args);
    case 3:
      return PyvtkAbstractPolygonalHandleRepresentation3D_SetLabelTextScale_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetLabelTextScale");
  return NULL;
}



static PyObject *
PyvtkAbstractPolygonalHandleRepresentation3D_GetLabelTextScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLabelTextScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractPolygonalHandleRepresentation3D *op = static_cast<vtkAbstractPolygonalHandleRepresentation3D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetLabelTextScale() :
      op->vtkAbstractPolygonalHandleRepresentation3D::GetLabelTextScale());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAbstractPolygonalHandleRepresentation3D_GetLabelTextActor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLabelTextActor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractPolygonalHandleRepresentation3D *op = static_cast<vtkAbstractPolygonalHandleRepresentation3D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkFollower *tempr = (ap.IsBound() ?
      op->GetLabelTextActor() :
      op->vtkAbstractPolygonalHandleRepresentation3D::GetLabelTextActor());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAbstractPolygonalHandleRepresentation3D_SetUniformScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUniformScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractPolygonalHandleRepresentation3D *op = static_cast<vtkAbstractPolygonalHandleRepresentation3D *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetUniformScale(temp0);
      }
    else
      {
      op->vtkAbstractPolygonalHandleRepresentation3D::SetUniformScale(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAbstractPolygonalHandleRepresentation3D_SetHandleVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHandleVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractPolygonalHandleRepresentation3D *op = static_cast<vtkAbstractPolygonalHandleRepresentation3D *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetHandleVisibility(temp0);
      }
    else
      {
      op->vtkAbstractPolygonalHandleRepresentation3D::SetHandleVisibility(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAbstractPolygonalHandleRepresentation3D_GetHandleVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHandleVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractPolygonalHandleRepresentation3D *op = static_cast<vtkAbstractPolygonalHandleRepresentation3D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetHandleVisibility() :
      op->vtkAbstractPolygonalHandleRepresentation3D::GetHandleVisibility());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAbstractPolygonalHandleRepresentation3D_HandleVisibilityOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HandleVisibilityOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractPolygonalHandleRepresentation3D *op = static_cast<vtkAbstractPolygonalHandleRepresentation3D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->HandleVisibilityOn();
      }
    else
      {
      op->vtkAbstractPolygonalHandleRepresentation3D::HandleVisibilityOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAbstractPolygonalHandleRepresentation3D_HandleVisibilityOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HandleVisibilityOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractPolygonalHandleRepresentation3D *op = static_cast<vtkAbstractPolygonalHandleRepresentation3D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->HandleVisibilityOff();
      }
    else
      {
      op->vtkAbstractPolygonalHandleRepresentation3D::HandleVisibilityOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAbstractPolygonalHandleRepresentation3D_Highlight(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Highlight");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractPolygonalHandleRepresentation3D *op = static_cast<vtkAbstractPolygonalHandleRepresentation3D *>(vp);

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
      op->vtkAbstractPolygonalHandleRepresentation3D::Highlight(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAbstractPolygonalHandleRepresentation3D_SetSmoothMotion(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSmoothMotion");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractPolygonalHandleRepresentation3D *op = static_cast<vtkAbstractPolygonalHandleRepresentation3D *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetSmoothMotion(temp0);
      }
    else
      {
      op->vtkAbstractPolygonalHandleRepresentation3D::SetSmoothMotion(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAbstractPolygonalHandleRepresentation3D_GetSmoothMotion(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSmoothMotion");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractPolygonalHandleRepresentation3D *op = static_cast<vtkAbstractPolygonalHandleRepresentation3D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetSmoothMotion() :
      op->vtkAbstractPolygonalHandleRepresentation3D::GetSmoothMotion());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAbstractPolygonalHandleRepresentation3D_SmoothMotionOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SmoothMotionOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractPolygonalHandleRepresentation3D *op = static_cast<vtkAbstractPolygonalHandleRepresentation3D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SmoothMotionOn();
      }
    else
      {
      op->vtkAbstractPolygonalHandleRepresentation3D::SmoothMotionOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAbstractPolygonalHandleRepresentation3D_SmoothMotionOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SmoothMotionOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractPolygonalHandleRepresentation3D *op = static_cast<vtkAbstractPolygonalHandleRepresentation3D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SmoothMotionOff();
      }
    else
      {
      op->vtkAbstractPolygonalHandleRepresentation3D::SmoothMotionOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkAbstractPolygonalHandleRepresentation3D_Methods[] = {
  {(char*)"GetClassName", PyvtkAbstractPolygonalHandleRepresentation3D_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\nStandard methods for instances of this class.\n"},
  {(char*)"IsA", PyvtkAbstractPolygonalHandleRepresentation3D_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\nStandard methods for instances of this class.\n"},
  {(char*)"NewInstance", PyvtkAbstractPolygonalHandleRepresentation3D_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkAbstractPolygonalHandleRepresentation3D\nC++: vtkAbstractPolygonalHandleRepresentation3D *NewInstance()\n\nStandard methods for instances of this class.\n"},
  {(char*)"SafeDownCast", PyvtkAbstractPolygonalHandleRepresentation3D_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject)\n    -> vtkAbstractPolygonalHandleRepresentation3D\nC++: vtkAbstractPolygonalHandleRepresentation3D *SafeDownCast(\n    vtkObject* o)\n\nStandard methods for instances of this class.\n"},
  {(char*)"SetWorldPosition", PyvtkAbstractPolygonalHandleRepresentation3D_SetWorldPosition, METH_VARARGS,
   (char*)"V.SetWorldPosition([float, float, float])\nC++: virtual void SetWorldPosition(double p[3])\n\nSet the position of the point in world and display coordinates.\n"},
  {(char*)"SetDisplayPosition", PyvtkAbstractPolygonalHandleRepresentation3D_SetDisplayPosition, METH_VARARGS,
   (char*)"V.SetDisplayPosition([float, float, float])\nC++: virtual void SetDisplayPosition(double p[3])\n\nSet the position of the point in world and display coordinates.\n"},
  {(char*)"SetHandle", PyvtkAbstractPolygonalHandleRepresentation3D_SetHandle, METH_VARARGS,
   (char*)"V.SetHandle(vtkPolyData)\nC++: void SetHandle(vtkPolyData *)\n\nSet/get the handle polydata.\n"},
  {(char*)"GetHandle", PyvtkAbstractPolygonalHandleRepresentation3D_GetHandle, METH_VARARGS,
   (char*)"V.GetHandle() -> vtkPolyData\nC++: vtkPolyData *GetHandle()\n\nSet/get the handle polydata.\n"},
  {(char*)"SetProperty", PyvtkAbstractPolygonalHandleRepresentation3D_SetProperty, METH_VARARGS,
   (char*)"V.SetProperty(vtkProperty)\nC++: void SetProperty(vtkProperty *)\n\nSet/Get the handle properties when unselected and selected.\n"},
  {(char*)"SetSelectedProperty", PyvtkAbstractPolygonalHandleRepresentation3D_SetSelectedProperty, METH_VARARGS,
   (char*)"V.SetSelectedProperty(vtkProperty)\nC++: void SetSelectedProperty(vtkProperty *)\n\nSet/Get the handle properties when unselected and selected.\n"},
  {(char*)"GetProperty", PyvtkAbstractPolygonalHandleRepresentation3D_GetProperty, METH_VARARGS,
   (char*)"V.GetProperty() -> vtkProperty\nC++: vtkProperty *GetProperty()\n\nSet/Get the handle properties when unselected and selected.\n"},
  {(char*)"GetSelectedProperty", PyvtkAbstractPolygonalHandleRepresentation3D_GetSelectedProperty, METH_VARARGS,
   (char*)"V.GetSelectedProperty() -> vtkProperty\nC++: vtkProperty *GetSelectedProperty()\n\nSet/Get the handle properties when unselected and selected.\n"},
  {(char*)"GetTransform", PyvtkAbstractPolygonalHandleRepresentation3D_GetTransform, METH_VARARGS,
   (char*)"V.GetTransform() -> vtkAbstractTransform\nC++: virtual vtkAbstractTransform *GetTransform()\n\nGet the transform used to transform the generic handle polydata\nbefore placing it in the render window\n"},
  {(char*)"BuildRepresentation", PyvtkAbstractPolygonalHandleRepresentation3D_BuildRepresentation, METH_VARARGS,
   (char*)"V.BuildRepresentation()\nC++: virtual void BuildRepresentation()\n\nMethods to make this class properly act like a\nvtkWidgetRepresentation.\n"},
  {(char*)"StartWidgetInteraction", PyvtkAbstractPolygonalHandleRepresentation3D_StartWidgetInteraction, METH_VARARGS,
   (char*)"V.StartWidgetInteraction([float, float])\nC++: virtual void StartWidgetInteraction(double eventPos[2])\n\nMethods to make this class properly act like a\nvtkWidgetRepresentation.\n"},
  {(char*)"WidgetInteraction", PyvtkAbstractPolygonalHandleRepresentation3D_WidgetInteraction, METH_VARARGS,
   (char*)"V.WidgetInteraction([float, float])\nC++: virtual void WidgetInteraction(double eventPos[2])\n\nMethods to make this class properly act like a\nvtkWidgetRepresentation.\n"},
  {(char*)"ComputeInteractionState", PyvtkAbstractPolygonalHandleRepresentation3D_ComputeInteractionState, METH_VARARGS,
   (char*)"V.ComputeInteractionState(int, int, int) -> int\nC++: virtual int ComputeInteractionState(int X, int Y,\n    int modify=0)\n\nMethods to make this class properly act like a\nvtkWidgetRepresentation.\n"},
  {(char*)"ShallowCopy", PyvtkAbstractPolygonalHandleRepresentation3D_ShallowCopy, METH_VARARGS,
   (char*)"V.ShallowCopy(vtkProp)\nC++: virtual void ShallowCopy(vtkProp *prop)\n\nMethods to make this class behave as a vtkProp.\n"},
  {(char*)"DeepCopy", PyvtkAbstractPolygonalHandleRepresentation3D_DeepCopy, METH_VARARGS,
   (char*)"V.DeepCopy(vtkProp)\nC++: virtual void DeepCopy(vtkProp *prop)\n\nMethods to make this class behave as a vtkProp.\n"},
  {(char*)"GetActors", PyvtkAbstractPolygonalHandleRepresentation3D_GetActors, METH_VARARGS,
   (char*)"V.GetActors(vtkPropCollection)\nC++: virtual void GetActors(vtkPropCollection *)\n\nMethods to make this class behave as a vtkProp.\n"},
  {(char*)"ReleaseGraphicsResources", PyvtkAbstractPolygonalHandleRepresentation3D_ReleaseGraphicsResources, METH_VARARGS,
   (char*)"V.ReleaseGraphicsResources(vtkWindow)\nC++: virtual void ReleaseGraphicsResources(vtkWindow *)\n\nMethods to make this class behave as a vtkProp.\n"},
  {(char*)"RenderOpaqueGeometry", PyvtkAbstractPolygonalHandleRepresentation3D_RenderOpaqueGeometry, METH_VARARGS,
   (char*)"V.RenderOpaqueGeometry(vtkViewport) -> int\nC++: virtual int RenderOpaqueGeometry(vtkViewport *viewport)\n\nMethods to make this class behave as a vtkProp.\n"},
  {(char*)"RenderTranslucentPolygonalGeometry", PyvtkAbstractPolygonalHandleRepresentation3D_RenderTranslucentPolygonalGeometry, METH_VARARGS,
   (char*)"V.RenderTranslucentPolygonalGeometry(vtkViewport) -> int\nC++: virtual int RenderTranslucentPolygonalGeometry(\n    vtkViewport *viewport)\n\nMethods to make this class behave as a vtkProp.\n"},
  {(char*)"HasTranslucentPolygonalGeometry", PyvtkAbstractPolygonalHandleRepresentation3D_HasTranslucentPolygonalGeometry, METH_VARARGS,
   (char*)"V.HasTranslucentPolygonalGeometry() -> int\nC++: virtual int HasTranslucentPolygonalGeometry()\n\nMethods to make this class behave as a vtkProp.\n"},
  {(char*)"GetBounds", PyvtkAbstractPolygonalHandleRepresentation3D_GetBounds, METH_VARARGS,
   (char*)"V.GetBounds() -> (float, ...)\nC++: virtual double *GetBounds()\n\nMethods to make this class behave as a vtkProp.\n"},
  {(char*)"SetLabelVisibility", PyvtkAbstractPolygonalHandleRepresentation3D_SetLabelVisibility, METH_VARARGS,
   (char*)"V.SetLabelVisibility(int)\nC++: void SetLabelVisibility(int a)\n\nA label may be associated with the seed. The string can be set\nvia SetLabelText. The visibility of the label can be turned on /\noff.\n"},
  {(char*)"GetLabelVisibility", PyvtkAbstractPolygonalHandleRepresentation3D_GetLabelVisibility, METH_VARARGS,
   (char*)"V.GetLabelVisibility() -> int\nC++: int GetLabelVisibility()\n\nA label may be associated with the seed. The string can be set\nvia SetLabelText. The visibility of the label can be turned on /\noff.\n"},
  {(char*)"LabelVisibilityOn", PyvtkAbstractPolygonalHandleRepresentation3D_LabelVisibilityOn, METH_VARARGS,
   (char*)"V.LabelVisibilityOn()\nC++: void LabelVisibilityOn()\n\nA label may be associated with the seed. The string can be set\nvia SetLabelText. The visibility of the label can be turned on /\noff.\n"},
  {(char*)"LabelVisibilityOff", PyvtkAbstractPolygonalHandleRepresentation3D_LabelVisibilityOff, METH_VARARGS,
   (char*)"V.LabelVisibilityOff()\nC++: void LabelVisibilityOff()\n\nA label may be associated with the seed. The string can be set\nvia SetLabelText. The visibility of the label can be turned on /\noff.\n"},
  {(char*)"SetLabelText", PyvtkAbstractPolygonalHandleRepresentation3D_SetLabelText, METH_VARARGS,
   (char*)"V.SetLabelText(string)\nC++: virtual void SetLabelText(const char *label)\n\nA label may be associated with the seed. The string can be set\nvia SetLabelText. The visibility of the label can be turned on /\noff.\n"},
  {(char*)"GetLabelText", PyvtkAbstractPolygonalHandleRepresentation3D_GetLabelText, METH_VARARGS,
   (char*)"V.GetLabelText() -> string\nC++: virtual char *GetLabelText()\n\nA label may be associated with the seed. The string can be set\nvia SetLabelText. The visibility of the label can be turned on /\noff.\n"},
  {(char*)"SetLabelTextScale", PyvtkAbstractPolygonalHandleRepresentation3D_SetLabelTextScale, METH_VARARGS,
   (char*)"V.SetLabelTextScale([float, float, float])\nC++: virtual void SetLabelTextScale(double scale[3])\nV.SetLabelTextScale(float, float, float)\nC++: void SetLabelTextScale(double x, double y, double z)\n\nScale text (font size along each dimension).\n"},
  {(char*)"GetLabelTextScale", PyvtkAbstractPolygonalHandleRepresentation3D_GetLabelTextScale, METH_VARARGS,
   (char*)"V.GetLabelTextScale() -> (float, ...)\nC++: virtual double *GetLabelTextScale()\n\nScale text (font size along each dimension).\n"},
  {(char*)"GetLabelTextActor", PyvtkAbstractPolygonalHandleRepresentation3D_GetLabelTextActor, METH_VARARGS,
   (char*)"V.GetLabelTextActor() -> vtkFollower\nC++: vtkFollower *GetLabelTextActor()\n\nGet the label text actor\n"},
  {(char*)"SetUniformScale", PyvtkAbstractPolygonalHandleRepresentation3D_SetUniformScale, METH_VARARGS,
   (char*)"V.SetUniformScale(float)\nC++: virtual void SetUniformScale(double scale)\n\nThe handle may be scaled uniformly in all three dimensions using\nthis API. The handle can also be scaled interactively using the\nright mouse button.\n"},
  {(char*)"SetHandleVisibility", PyvtkAbstractPolygonalHandleRepresentation3D_SetHandleVisibility, METH_VARARGS,
   (char*)"V.SetHandleVisibility(int)\nC++: void SetHandleVisibility(int a)\n\nToogle the visibility of the handle on and off\n"},
  {(char*)"GetHandleVisibility", PyvtkAbstractPolygonalHandleRepresentation3D_GetHandleVisibility, METH_VARARGS,
   (char*)"V.GetHandleVisibility() -> int\nC++: int GetHandleVisibility()\n\nToogle the visibility of the handle on and off\n"},
  {(char*)"HandleVisibilityOn", PyvtkAbstractPolygonalHandleRepresentation3D_HandleVisibilityOn, METH_VARARGS,
   (char*)"V.HandleVisibilityOn()\nC++: void HandleVisibilityOn()\n\nToogle the visibility of the handle on and off\n"},
  {(char*)"HandleVisibilityOff", PyvtkAbstractPolygonalHandleRepresentation3D_HandleVisibilityOff, METH_VARARGS,
   (char*)"V.HandleVisibilityOff()\nC++: void HandleVisibilityOff()\n\nToogle the visibility of the handle on and off\n"},
  {(char*)"Highlight", PyvtkAbstractPolygonalHandleRepresentation3D_Highlight, METH_VARARGS,
   (char*)"V.Highlight(int)\nC++: void Highlight(int highlight)\n\n"},
  {(char*)"SetSmoothMotion", PyvtkAbstractPolygonalHandleRepresentation3D_SetSmoothMotion, METH_VARARGS,
   (char*)"V.SetSmoothMotion(int)\nC++: void SetSmoothMotion(int a)\n\nTurn on/off smooth motion of the handle. See the documentation of\nMoveFocusRequest for details. By default, SmoothMotion is ON.\nHowever, in certain applications the user may want to turn it\noff. For instance when using certain specific PointPlacer's with\nthe representation such as the vtkCellCentersPointPlacer, which\ncauses the representation to snap to the center of cells, or\nusing a vtkPolygonalSurfacePointPlacer which constrains the\nwidget to the surface of a mesh. In such cases, inherent\nrestrictions on handle placement might conflict with a request\nfor smooth motion of the handles.\n"},
  {(char*)"GetSmoothMotion", PyvtkAbstractPolygonalHandleRepresentation3D_GetSmoothMotion, METH_VARARGS,
   (char*)"V.GetSmoothMotion() -> int\nC++: int GetSmoothMotion()\n\nTurn on/off smooth motion of the handle. See the documentation of\nMoveFocusRequest for details. By default, SmoothMotion is ON.\nHowever, in certain applications the user may want to turn it\noff. For instance when using certain specific PointPlacer's with\nthe representation such as the vtkCellCentersPointPlacer, which\ncauses the representation to snap to the center of cells, or\nusing a vtkPolygonalSurfacePointPlacer which constrains the\nwidget to the surface of a mesh. In such cases, inherent\nrestrictions on handle placement might conflict with a request\nfor smooth motion of the handles.\n"},
  {(char*)"SmoothMotionOn", PyvtkAbstractPolygonalHandleRepresentation3D_SmoothMotionOn, METH_VARARGS,
   (char*)"V.SmoothMotionOn()\nC++: void SmoothMotionOn()\n\nTurn on/off smooth motion of the handle. See the documentation of\nMoveFocusRequest for details. By default, SmoothMotion is ON.\nHowever, in certain applications the user may want to turn it\noff. For instance when using certain specific PointPlacer's with\nthe representation such as the vtkCellCentersPointPlacer, which\ncauses the representation to snap to the center of cells, or\nusing a vtkPolygonalSurfacePointPlacer which constrains the\nwidget to the surface of a mesh. In such cases, inherent\nrestrictions on handle placement might conflict with a request\nfor smooth motion of the handles.\n"},
  {(char*)"SmoothMotionOff", PyvtkAbstractPolygonalHandleRepresentation3D_SmoothMotionOff, METH_VARARGS,
   (char*)"V.SmoothMotionOff()\nC++: void SmoothMotionOff()\n\nTurn on/off smooth motion of the handle. See the documentation of\nMoveFocusRequest for details. By default, SmoothMotion is ON.\nHowever, in certain applications the user may want to turn it\noff. For instance when using certain specific PointPlacer's with\nthe representation such as the vtkCellCentersPointPlacer, which\ncauses the representation to snap to the center of cells, or\nusing a vtkPolygonalSurfacePointPlacer which constrains the\nwidget to the surface of a mesh. In such cases, inherent\nrestrictions on handle placement might conflict with a request\nfor smooth motion of the handles.\n"},
  {NULL, NULL, 0, NULL}
};

PyObject *PyVTKClass_vtkAbstractPolygonalHandleRepresentation3DNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(NULL,
    PyvtkAbstractPolygonalHandleRepresentation3D_Methods,
    "vtkAbstractPolygonalHandleRepresentation3D", modulename,
    NULL, NULL,
    PyvtkAbstractPolygonalHandleRepresentation3D_Doc(),
    PyVTKClass_vtkHandleRepresentationNew(modulename));
  return cls;
}

const char **PyvtkAbstractPolygonalHandleRepresentation3D_Doc()
{
  static const char *docstring[] = {
    "vtkAbstractPolygonalHandleRepresentation3D - represent a user defined\nhandle geometry in 3D while maintaining a fixed orientation w.r.t the\ncamera.\n\n",
    "Superclass: vtkHandleRepresentation\n\n",
    "This class serves as the geometrical representation of a\nvtkHandleWidget. The handle can be represented by an arbitrary\npolygonal data (vtkPolyData), set via SetHandle(vtkPolyData *). The\nactual position of the handle will be initially assumed to be\n(0,0,0). You can specify an offset from this position if desired.\nThis class differs from vtkPolygonalHandleRepresentation3D in that\nthe handle will a",
    "lways remain front facing, ie it maintains a fixed\norientation with respect to the camera. This is done by using\nvtkFollowers internally to render the actors.\n\nSee Also:\n\nvtkPolygonalHandleRepresentation3D vtkHandleRepresentation\nvtkHandleWidget\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkAbstractPolygonalHandleRepresentation3D(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkAbstractPolygonalHandleRepresentation3DNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkAbstractPolygonalHandleRepresentation3D", o) != 0)
    {
    Py_DECREF(o);
    }

}

