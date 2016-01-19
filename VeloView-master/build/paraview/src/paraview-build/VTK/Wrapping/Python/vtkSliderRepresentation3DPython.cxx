// python wrapper for vtkSliderRepresentation3D
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkSliderRepresentation3D.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkSliderRepresentation3D(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkSliderRepresentation3DNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkSliderRepresentationNew
extern "C" { PyObject *PyVTKClass_vtkSliderRepresentationNew(const char *); }
#define DECLARED_PyVTKClass_vtkSliderRepresentationNew
#endif

static const char **PyvtkSliderRepresentation3D_Doc();


static PyObject *
PyvtkSliderRepresentation3D_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSliderRepresentation3D *op = static_cast<vtkSliderRepresentation3D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkSliderRepresentation3D::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSliderRepresentation3D_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSliderRepresentation3D *op = static_cast<vtkSliderRepresentation3D *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSliderRepresentation3D::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSliderRepresentation3D_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSliderRepresentation3D *op = static_cast<vtkSliderRepresentation3D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkSliderRepresentation3D *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSliderRepresentation3D::NewInstance());

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
PyvtkSliderRepresentation3D_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkSliderRepresentation3D *tempr = vtkSliderRepresentation3D::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSliderRepresentation3D_GetPoint1Coordinate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPoint1Coordinate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSliderRepresentation3D *op = static_cast<vtkSliderRepresentation3D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkCoordinate *tempr = (ap.IsBound() ?
      op->GetPoint1Coordinate() :
      op->vtkSliderRepresentation3D::GetPoint1Coordinate());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSliderRepresentation3D_SetPoint1InWorldCoordinates(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPoint1InWorldCoordinates");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSliderRepresentation3D *op = static_cast<vtkSliderRepresentation3D *>(vp);

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
      op->SetPoint1InWorldCoordinates(temp0, temp1, temp2);
      }
    else
      {
      op->vtkSliderRepresentation3D::SetPoint1InWorldCoordinates(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSliderRepresentation3D_GetPoint2Coordinate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPoint2Coordinate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSliderRepresentation3D *op = static_cast<vtkSliderRepresentation3D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkCoordinate *tempr = (ap.IsBound() ?
      op->GetPoint2Coordinate() :
      op->vtkSliderRepresentation3D::GetPoint2Coordinate());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSliderRepresentation3D_SetPoint2InWorldCoordinates(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPoint2InWorldCoordinates");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSliderRepresentation3D *op = static_cast<vtkSliderRepresentation3D *>(vp);

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
      op->SetPoint2InWorldCoordinates(temp0, temp1, temp2);
      }
    else
      {
      op->vtkSliderRepresentation3D::SetPoint2InWorldCoordinates(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSliderRepresentation3D_SetTitleText(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTitleText");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSliderRepresentation3D *op = static_cast<vtkSliderRepresentation3D *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetTitleText(temp0);
      }
    else
      {
      op->vtkSliderRepresentation3D::SetTitleText(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSliderRepresentation3D_GetTitleText(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTitleText");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSliderRepresentation3D *op = static_cast<vtkSliderRepresentation3D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetTitleText() :
      op->vtkSliderRepresentation3D::GetTitleText());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSliderRepresentation3D_SetSliderShape(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSliderShape");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSliderRepresentation3D *op = static_cast<vtkSliderRepresentation3D *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetSliderShape(temp0);
      }
    else
      {
      op->vtkSliderRepresentation3D::SetSliderShape(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSliderRepresentation3D_GetSliderShapeMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSliderShapeMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSliderRepresentation3D *op = static_cast<vtkSliderRepresentation3D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetSliderShapeMinValue() :
      op->vtkSliderRepresentation3D::GetSliderShapeMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSliderRepresentation3D_GetSliderShapeMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSliderShapeMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSliderRepresentation3D *op = static_cast<vtkSliderRepresentation3D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetSliderShapeMaxValue() :
      op->vtkSliderRepresentation3D::GetSliderShapeMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSliderRepresentation3D_GetSliderShape(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSliderShape");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSliderRepresentation3D *op = static_cast<vtkSliderRepresentation3D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetSliderShape() :
      op->vtkSliderRepresentation3D::GetSliderShape());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSliderRepresentation3D_SetSliderShapeToSphere(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSliderShapeToSphere");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSliderRepresentation3D *op = static_cast<vtkSliderRepresentation3D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetSliderShapeToSphere();
      }
    else
      {
      op->vtkSliderRepresentation3D::SetSliderShapeToSphere();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSliderRepresentation3D_SetSliderShapeToCylinder(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSliderShapeToCylinder");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSliderRepresentation3D *op = static_cast<vtkSliderRepresentation3D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetSliderShapeToCylinder();
      }
    else
      {
      op->vtkSliderRepresentation3D::SetSliderShapeToCylinder();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSliderRepresentation3D_SetRotation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRotation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSliderRepresentation3D *op = static_cast<vtkSliderRepresentation3D *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetRotation(temp0);
      }
    else
      {
      op->vtkSliderRepresentation3D::SetRotation(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSliderRepresentation3D_GetRotation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRotation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSliderRepresentation3D *op = static_cast<vtkSliderRepresentation3D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetRotation() :
      op->vtkSliderRepresentation3D::GetRotation());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSliderRepresentation3D_GetSliderProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSliderProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSliderRepresentation3D *op = static_cast<vtkSliderRepresentation3D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetSliderProperty() :
      op->vtkSliderRepresentation3D::GetSliderProperty());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSliderRepresentation3D_GetTubeProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTubeProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSliderRepresentation3D *op = static_cast<vtkSliderRepresentation3D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetTubeProperty() :
      op->vtkSliderRepresentation3D::GetTubeProperty());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSliderRepresentation3D_GetCapProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCapProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSliderRepresentation3D *op = static_cast<vtkSliderRepresentation3D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetCapProperty() :
      op->vtkSliderRepresentation3D::GetCapProperty());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSliderRepresentation3D_GetSelectedProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelectedProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSliderRepresentation3D *op = static_cast<vtkSliderRepresentation3D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetSelectedProperty() :
      op->vtkSliderRepresentation3D::GetSelectedProperty());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSliderRepresentation3D_PlaceWidget(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PlaceWidget");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSliderRepresentation3D *op = static_cast<vtkSliderRepresentation3D *>(vp);

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
      op->vtkSliderRepresentation3D::PlaceWidget(temp0);
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
PyvtkSliderRepresentation3D_BuildRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BuildRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSliderRepresentation3D *op = static_cast<vtkSliderRepresentation3D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->BuildRepresentation();
      }
    else
      {
      op->vtkSliderRepresentation3D::BuildRepresentation();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSliderRepresentation3D_StartWidgetInteraction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StartWidgetInteraction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSliderRepresentation3D *op = static_cast<vtkSliderRepresentation3D *>(vp);

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
      op->vtkSliderRepresentation3D::StartWidgetInteraction(temp0);
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
PyvtkSliderRepresentation3D_WidgetInteraction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WidgetInteraction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSliderRepresentation3D *op = static_cast<vtkSliderRepresentation3D *>(vp);

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
      op->vtkSliderRepresentation3D::WidgetInteraction(temp0);
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
PyvtkSliderRepresentation3D_Highlight(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Highlight");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSliderRepresentation3D *op = static_cast<vtkSliderRepresentation3D *>(vp);

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
      op->vtkSliderRepresentation3D::Highlight(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSliderRepresentation3D_GetBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSliderRepresentation3D *op = static_cast<vtkSliderRepresentation3D *>(vp);

  int sizer = 6;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetBounds() :
      op->vtkSliderRepresentation3D::GetBounds());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkSliderRepresentation3D_GetActors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSliderRepresentation3D *op = static_cast<vtkSliderRepresentation3D *>(vp);

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
      op->vtkSliderRepresentation3D::GetActors(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSliderRepresentation3D_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSliderRepresentation3D *op = static_cast<vtkSliderRepresentation3D *>(vp);

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
      op->vtkSliderRepresentation3D::ReleaseGraphicsResources(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSliderRepresentation3D_RenderOpaqueGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOpaqueGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSliderRepresentation3D *op = static_cast<vtkSliderRepresentation3D *>(vp);

  vtkViewport *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
    {
    int tempr = (ap.IsBound() ?
      op->RenderOpaqueGeometry(temp0) :
      op->vtkSliderRepresentation3D::RenderOpaqueGeometry(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSliderRepresentation3D_RenderTranslucentPolygonalGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderTranslucentPolygonalGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSliderRepresentation3D *op = static_cast<vtkSliderRepresentation3D *>(vp);

  vtkViewport *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
    {
    int tempr = (ap.IsBound() ?
      op->RenderTranslucentPolygonalGeometry(temp0) :
      op->vtkSliderRepresentation3D::RenderTranslucentPolygonalGeometry(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSliderRepresentation3D_HasTranslucentPolygonalGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasTranslucentPolygonalGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSliderRepresentation3D *op = static_cast<vtkSliderRepresentation3D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->HasTranslucentPolygonalGeometry() :
      op->vtkSliderRepresentation3D::HasTranslucentPolygonalGeometry());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSliderRepresentation3D_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSliderRepresentation3D *op = static_cast<vtkSliderRepresentation3D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMTime() :
      op->vtkSliderRepresentation3D::GetMTime());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkSliderRepresentation3D_Methods[] = {
  {(char*)"GetClassName", PyvtkSliderRepresentation3D_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\nStandard methods for the class.\n"},
  {(char*)"IsA", PyvtkSliderRepresentation3D_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\nStandard methods for the class.\n"},
  {(char*)"NewInstance", PyvtkSliderRepresentation3D_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkSliderRepresentation3D\nC++: vtkSliderRepresentation3D *NewInstance()\n\nStandard methods for the class.\n"},
  {(char*)"SafeDownCast", PyvtkSliderRepresentation3D_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkSliderRepresentation3D\nC++: vtkSliderRepresentation3D *SafeDownCast(vtkObject* o)\n\nStandard methods for the class.\n"},
  {(char*)"GetPoint1Coordinate", PyvtkSliderRepresentation3D_GetPoint1Coordinate, METH_VARARGS,
   (char*)"V.GetPoint1Coordinate() -> vtkCoordinate\nC++: vtkCoordinate *GetPoint1Coordinate()\n\nPosition the first end point of the slider. Note that this point\nis an instance of vtkCoordinate, meaning that Point 1 can be\nspecified in a variety of coordinate systems, and can even be\nrelative to another point. To set the point, you'll want to get\nthe Point1Coordinate and then invoke the necessary methods to put\nit into the correct coordinate system and set the correct initial\nvalue.\n"},
  {(char*)"SetPoint1InWorldCoordinates", PyvtkSliderRepresentation3D_SetPoint1InWorldCoordinates, METH_VARARGS,
   (char*)"V.SetPoint1InWorldCoordinates(float, float, float)\nC++: void SetPoint1InWorldCoordinates(double x, double y,\n    double z)\n\nPosition the first end point of the slider. Note that this point\nis an instance of vtkCoordinate, meaning that Point 1 can be\nspecified in a variety of coordinate systems, and can even be\nrelative to another point. To set the point, you'll want to get\nthe Point1Coordinate and then invoke the necessary methods to put\nit into the correct coordinate system and set the correct initial\nvalue.\n"},
  {(char*)"GetPoint2Coordinate", PyvtkSliderRepresentation3D_GetPoint2Coordinate, METH_VARARGS,
   (char*)"V.GetPoint2Coordinate() -> vtkCoordinate\nC++: vtkCoordinate *GetPoint2Coordinate()\n\nPosition the second end point of the slider. Note that this point\nis an instance of vtkCoordinate, meaning that Point 1 can be\nspecified in a variety of coordinate systems, and can even be\nrelative to another point. To set the point, you'll want to get\nthe Point2Coordinate and then invoke the necessary methods to put\nit into the correct coordinate system and set the correct initial\nvalue.\n"},
  {(char*)"SetPoint2InWorldCoordinates", PyvtkSliderRepresentation3D_SetPoint2InWorldCoordinates, METH_VARARGS,
   (char*)"V.SetPoint2InWorldCoordinates(float, float, float)\nC++: void SetPoint2InWorldCoordinates(double x, double y,\n    double z)\n\nPosition the second end point of the slider. Note that this point\nis an instance of vtkCoordinate, meaning that Point 1 can be\nspecified in a variety of coordinate systems, and can even be\nrelative to another point. To set the point, you'll want to get\nthe Point2Coordinate and then invoke the necessary methods to put\nit into the correct coordinate system and set the correct initial\nvalue.\n"},
  {(char*)"SetTitleText", PyvtkSliderRepresentation3D_SetTitleText, METH_VARARGS,
   (char*)"V.SetTitleText(string)\nC++: virtual void SetTitleText(const char *)\n\nSpecify the title text for this widget. If the value is not set,\nor set to the empty string \"\", then the title text is not\ndisplayed.\n"},
  {(char*)"GetTitleText", PyvtkSliderRepresentation3D_GetTitleText, METH_VARARGS,
   (char*)"V.GetTitleText() -> string\nC++: virtual const char *GetTitleText()\n\nSpecify the title text for this widget. If the value is not set,\nor set to the empty string \"\", then the title text is not\ndisplayed.\n"},
  {(char*)"SetSliderShape", PyvtkSliderRepresentation3D_SetSliderShape, METH_VARARGS,
   (char*)"V.SetSliderShape(int)\nC++: void SetSliderShape(int)\n\nSpecify whether to use a sphere or cylinder slider shape. By\ndefault, a sphere shape is used.\n"},
  {(char*)"GetSliderShapeMinValue", PyvtkSliderRepresentation3D_GetSliderShapeMinValue, METH_VARARGS,
   (char*)"V.GetSliderShapeMinValue() -> int\nC++: int GetSliderShapeMinValue()\n\nSpecify whether to use a sphere or cylinder slider shape. By\ndefault, a sphere shape is used.\n"},
  {(char*)"GetSliderShapeMaxValue", PyvtkSliderRepresentation3D_GetSliderShapeMaxValue, METH_VARARGS,
   (char*)"V.GetSliderShapeMaxValue() -> int\nC++: int GetSliderShapeMaxValue()\n\nSpecify whether to use a sphere or cylinder slider shape. By\ndefault, a sphere shape is used.\n"},
  {(char*)"GetSliderShape", PyvtkSliderRepresentation3D_GetSliderShape, METH_VARARGS,
   (char*)"V.GetSliderShape() -> int\nC++: int GetSliderShape()\n\nSpecify whether to use a sphere or cylinder slider shape. By\ndefault, a sphere shape is used.\n"},
  {(char*)"SetSliderShapeToSphere", PyvtkSliderRepresentation3D_SetSliderShapeToSphere, METH_VARARGS,
   (char*)"V.SetSliderShapeToSphere()\nC++: void SetSliderShapeToSphere()\n\nSpecify whether to use a sphere or cylinder slider shape. By\ndefault, a sphere shape is used.\n"},
  {(char*)"SetSliderShapeToCylinder", PyvtkSliderRepresentation3D_SetSliderShapeToCylinder, METH_VARARGS,
   (char*)"V.SetSliderShapeToCylinder()\nC++: void SetSliderShapeToCylinder()\n\nSpecify whether to use a sphere or cylinder slider shape. By\ndefault, a sphere shape is used.\n"},
  {(char*)"SetRotation", PyvtkSliderRepresentation3D_SetRotation, METH_VARARGS,
   (char*)"V.SetRotation(float)\nC++: void SetRotation(double a)\n\nSet the rotation of the slider widget around the axis of the\nwidget. This is used to control which way the widget is initially\noriented. (This is especially important for the label and title.)\n"},
  {(char*)"GetRotation", PyvtkSliderRepresentation3D_GetRotation, METH_VARARGS,
   (char*)"V.GetRotation() -> float\nC++: double GetRotation()\n\nSet the rotation of the slider widget around the axis of the\nwidget. This is used to control which way the widget is initially\noriented. (This is especially important for the label and title.)\n"},
  {(char*)"GetSliderProperty", PyvtkSliderRepresentation3D_GetSliderProperty, METH_VARARGS,
   (char*)"V.GetSliderProperty() -> vtkProperty\nC++: vtkProperty *GetSliderProperty()\n\nGet the slider properties. The properties of the slider when\nselected and unselected can be manipulated.\n"},
  {(char*)"GetTubeProperty", PyvtkSliderRepresentation3D_GetTubeProperty, METH_VARARGS,
   (char*)"V.GetTubeProperty() -> vtkProperty\nC++: vtkProperty *GetTubeProperty()\n\nGet the properties for the tube and end caps.\n"},
  {(char*)"GetCapProperty", PyvtkSliderRepresentation3D_GetCapProperty, METH_VARARGS,
   (char*)"V.GetCapProperty() -> vtkProperty\nC++: vtkProperty *GetCapProperty()\n\nGet the properties for the tube and end caps.\n"},
  {(char*)"GetSelectedProperty", PyvtkSliderRepresentation3D_GetSelectedProperty, METH_VARARGS,
   (char*)"V.GetSelectedProperty() -> vtkProperty\nC++: vtkProperty *GetSelectedProperty()\n\nGet the selection property. This property is used to modify the\nappearance of selected objects (e.g., the slider).\n"},
  {(char*)"PlaceWidget", PyvtkSliderRepresentation3D_PlaceWidget, METH_VARARGS,
   (char*)"V.PlaceWidget([float, float, float, float, float, float])\nC++: virtual void PlaceWidget(double bounds[6])\n\nMethods to interface with the vtkSliderWidget.\n"},
  {(char*)"BuildRepresentation", PyvtkSliderRepresentation3D_BuildRepresentation, METH_VARARGS,
   (char*)"V.BuildRepresentation()\nC++: virtual void BuildRepresentation()\n\nMethods to interface with the vtkSliderWidget.\n"},
  {(char*)"StartWidgetInteraction", PyvtkSliderRepresentation3D_StartWidgetInteraction, METH_VARARGS,
   (char*)"V.StartWidgetInteraction([float, float])\nC++: virtual void StartWidgetInteraction(double eventPos[2])\n\nMethods to interface with the vtkSliderWidget.\n"},
  {(char*)"WidgetInteraction", PyvtkSliderRepresentation3D_WidgetInteraction, METH_VARARGS,
   (char*)"V.WidgetInteraction([float, float])\nC++: virtual void WidgetInteraction(double newEventPos[2])\n\nMethods to interface with the vtkSliderWidget.\n"},
  {(char*)"Highlight", PyvtkSliderRepresentation3D_Highlight, METH_VARARGS,
   (char*)"V.Highlight(int)\nC++: virtual void Highlight(int)\n\nMethods to interface with the vtkSliderWidget.\n"},
  {(char*)"GetBounds", PyvtkSliderRepresentation3D_GetBounds, METH_VARARGS,
   (char*)"V.GetBounds() -> (float, float, float, float, float, float)\nC++: virtual double *GetBounds()\n\n"},
  {(char*)"GetActors", PyvtkSliderRepresentation3D_GetActors, METH_VARARGS,
   (char*)"V.GetActors(vtkPropCollection)\nC++: virtual void GetActors(vtkPropCollection *)\n\n"},
  {(char*)"ReleaseGraphicsResources", PyvtkSliderRepresentation3D_ReleaseGraphicsResources, METH_VARARGS,
   (char*)"V.ReleaseGraphicsResources(vtkWindow)\nC++: virtual void ReleaseGraphicsResources(vtkWindow *)\n\n"},
  {(char*)"RenderOpaqueGeometry", PyvtkSliderRepresentation3D_RenderOpaqueGeometry, METH_VARARGS,
   (char*)"V.RenderOpaqueGeometry(vtkViewport) -> int\nC++: virtual int RenderOpaqueGeometry(vtkViewport *)\n\n"},
  {(char*)"RenderTranslucentPolygonalGeometry", PyvtkSliderRepresentation3D_RenderTranslucentPolygonalGeometry, METH_VARARGS,
   (char*)"V.RenderTranslucentPolygonalGeometry(vtkViewport) -> int\nC++: virtual int RenderTranslucentPolygonalGeometry(vtkViewport *)\n\n"},
  {(char*)"HasTranslucentPolygonalGeometry", PyvtkSliderRepresentation3D_HasTranslucentPolygonalGeometry, METH_VARARGS,
   (char*)"V.HasTranslucentPolygonalGeometry() -> int\nC++: virtual int HasTranslucentPolygonalGeometry()\n\n"},
  {(char*)"GetMTime", PyvtkSliderRepresentation3D_GetMTime, METH_VARARGS,
   (char*)"V.GetMTime() -> int\nC++: virtual unsigned long GetMTime()\n\nOverride GetMTime to include point coordinates\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkSliderRepresentation3D_StaticNew()
{
  return vtkSliderRepresentation3D::New();
}

PyObject *PyVTKClass_vtkSliderRepresentation3DNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkSliderRepresentation3D_StaticNew,
    PyvtkSliderRepresentation3D_Methods,
    "vtkSliderRepresentation3D", modulename,
    NULL, NULL,
    PyvtkSliderRepresentation3D_Doc(),
    PyVTKClass_vtkSliderRepresentationNew(modulename));
  return cls;
}

const char **PyvtkSliderRepresentation3D_Doc()
{
  static const char *docstring[] = {
    "vtkSliderRepresentation3D - provide the representation for a\nvtkSliderWidget with a 3D skin\n\n",
    "Superclass: vtkSliderRepresentation\n\n",
    "This class is used to represent and render a vtkSliderWidget. To use\nthis class, you must at a minimum specify the end points of the\nslider. Optional instance variable can be used to modify the\nappearance of the widget.\n\nSee Also:\n\nvtkSliderWidget\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkSliderRepresentation3D(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkSliderRepresentation3DNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkSliderRepresentation3D", o) != 0)
    {
    Py_DECREF(o);
    }

}

