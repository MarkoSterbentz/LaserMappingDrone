// python wrapper for vtkOrientedGlyphContourRepresentation
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkOrientedGlyphContourRepresentation.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkOrientedGlyphContourRepresentation(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkOrientedGlyphContourRepresentationNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkContourRepresentationNew
extern "C" { PyObject *PyVTKClass_vtkContourRepresentationNew(const char *); }
#define DECLARED_PyVTKClass_vtkContourRepresentationNew
#endif

static const char **PyvtkOrientedGlyphContourRepresentation_Doc();


static PyObject *
PyvtkOrientedGlyphContourRepresentation_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrientedGlyphContourRepresentation *op = static_cast<vtkOrientedGlyphContourRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkOrientedGlyphContourRepresentation::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOrientedGlyphContourRepresentation_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrientedGlyphContourRepresentation *op = static_cast<vtkOrientedGlyphContourRepresentation *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkOrientedGlyphContourRepresentation::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOrientedGlyphContourRepresentation_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrientedGlyphContourRepresentation *op = static_cast<vtkOrientedGlyphContourRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkOrientedGlyphContourRepresentation *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkOrientedGlyphContourRepresentation::NewInstance());

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
PyvtkOrientedGlyphContourRepresentation_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkOrientedGlyphContourRepresentation *tempr = vtkOrientedGlyphContourRepresentation::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOrientedGlyphContourRepresentation_SetCursorShape(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCursorShape");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrientedGlyphContourRepresentation *op = static_cast<vtkOrientedGlyphContourRepresentation *>(vp);

  vtkPolyData *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPolyData"))
    {
    if (ap.IsBound())
      {
      op->SetCursorShape(temp0);
      }
    else
      {
      op->vtkOrientedGlyphContourRepresentation::SetCursorShape(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkOrientedGlyphContourRepresentation_GetCursorShape(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCursorShape");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrientedGlyphContourRepresentation *op = static_cast<vtkOrientedGlyphContourRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPolyData *tempr = (ap.IsBound() ?
      op->GetCursorShape() :
      op->vtkOrientedGlyphContourRepresentation::GetCursorShape());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOrientedGlyphContourRepresentation_SetActiveCursorShape(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetActiveCursorShape");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrientedGlyphContourRepresentation *op = static_cast<vtkOrientedGlyphContourRepresentation *>(vp);

  vtkPolyData *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPolyData"))
    {
    if (ap.IsBound())
      {
      op->SetActiveCursorShape(temp0);
      }
    else
      {
      op->vtkOrientedGlyphContourRepresentation::SetActiveCursorShape(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkOrientedGlyphContourRepresentation_GetActiveCursorShape(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActiveCursorShape");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrientedGlyphContourRepresentation *op = static_cast<vtkOrientedGlyphContourRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPolyData *tempr = (ap.IsBound() ?
      op->GetActiveCursorShape() :
      op->vtkOrientedGlyphContourRepresentation::GetActiveCursorShape());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOrientedGlyphContourRepresentation_GetProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrientedGlyphContourRepresentation *op = static_cast<vtkOrientedGlyphContourRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetProperty() :
      op->vtkOrientedGlyphContourRepresentation::GetProperty());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOrientedGlyphContourRepresentation_GetActiveProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActiveProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrientedGlyphContourRepresentation *op = static_cast<vtkOrientedGlyphContourRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetActiveProperty() :
      op->vtkOrientedGlyphContourRepresentation::GetActiveProperty());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOrientedGlyphContourRepresentation_GetLinesProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLinesProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrientedGlyphContourRepresentation *op = static_cast<vtkOrientedGlyphContourRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetLinesProperty() :
      op->vtkOrientedGlyphContourRepresentation::GetLinesProperty());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOrientedGlyphContourRepresentation_SetRenderer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRenderer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrientedGlyphContourRepresentation *op = static_cast<vtkOrientedGlyphContourRepresentation *>(vp);

  vtkRenderer *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkRenderer"))
    {
    if (ap.IsBound())
      {
      op->SetRenderer(temp0);
      }
    else
      {
      op->vtkOrientedGlyphContourRepresentation::SetRenderer(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkOrientedGlyphContourRepresentation_BuildRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BuildRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrientedGlyphContourRepresentation *op = static_cast<vtkOrientedGlyphContourRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->BuildRepresentation();
      }
    else
      {
      op->vtkOrientedGlyphContourRepresentation::BuildRepresentation();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkOrientedGlyphContourRepresentation_StartWidgetInteraction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StartWidgetInteraction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrientedGlyphContourRepresentation *op = static_cast<vtkOrientedGlyphContourRepresentation *>(vp);

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
      op->vtkOrientedGlyphContourRepresentation::StartWidgetInteraction(temp0);
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
PyvtkOrientedGlyphContourRepresentation_WidgetInteraction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WidgetInteraction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrientedGlyphContourRepresentation *op = static_cast<vtkOrientedGlyphContourRepresentation *>(vp);

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
      op->vtkOrientedGlyphContourRepresentation::WidgetInteraction(temp0);
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
PyvtkOrientedGlyphContourRepresentation_ComputeInteractionState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeInteractionState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrientedGlyphContourRepresentation *op = static_cast<vtkOrientedGlyphContourRepresentation *>(vp);

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
      op->vtkOrientedGlyphContourRepresentation::ComputeInteractionState(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOrientedGlyphContourRepresentation_GetActors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrientedGlyphContourRepresentation *op = static_cast<vtkOrientedGlyphContourRepresentation *>(vp);

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
      op->vtkOrientedGlyphContourRepresentation::GetActors(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkOrientedGlyphContourRepresentation_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrientedGlyphContourRepresentation *op = static_cast<vtkOrientedGlyphContourRepresentation *>(vp);

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
      op->vtkOrientedGlyphContourRepresentation::ReleaseGraphicsResources(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkOrientedGlyphContourRepresentation_RenderOverlay(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOverlay");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrientedGlyphContourRepresentation *op = static_cast<vtkOrientedGlyphContourRepresentation *>(vp);

  vtkViewport *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
    {
    int tempr = (ap.IsBound() ?
      op->RenderOverlay(temp0) :
      op->vtkOrientedGlyphContourRepresentation::RenderOverlay(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOrientedGlyphContourRepresentation_RenderOpaqueGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOpaqueGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrientedGlyphContourRepresentation *op = static_cast<vtkOrientedGlyphContourRepresentation *>(vp);

  vtkViewport *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
    {
    int tempr = (ap.IsBound() ?
      op->RenderOpaqueGeometry(temp0) :
      op->vtkOrientedGlyphContourRepresentation::RenderOpaqueGeometry(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOrientedGlyphContourRepresentation_RenderTranslucentPolygonalGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderTranslucentPolygonalGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrientedGlyphContourRepresentation *op = static_cast<vtkOrientedGlyphContourRepresentation *>(vp);

  vtkViewport *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
    {
    int tempr = (ap.IsBound() ?
      op->RenderTranslucentPolygonalGeometry(temp0) :
      op->vtkOrientedGlyphContourRepresentation::RenderTranslucentPolygonalGeometry(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOrientedGlyphContourRepresentation_HasTranslucentPolygonalGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasTranslucentPolygonalGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrientedGlyphContourRepresentation *op = static_cast<vtkOrientedGlyphContourRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->HasTranslucentPolygonalGeometry() :
      op->vtkOrientedGlyphContourRepresentation::HasTranslucentPolygonalGeometry());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOrientedGlyphContourRepresentation_GetContourRepresentationAsPolyData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetContourRepresentationAsPolyData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrientedGlyphContourRepresentation *op = static_cast<vtkOrientedGlyphContourRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPolyData *tempr = (ap.IsBound() ?
      op->GetContourRepresentationAsPolyData() :
      op->vtkOrientedGlyphContourRepresentation::GetContourRepresentationAsPolyData());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOrientedGlyphContourRepresentation_SetAlwaysOnTop(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAlwaysOnTop");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrientedGlyphContourRepresentation *op = static_cast<vtkOrientedGlyphContourRepresentation *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetAlwaysOnTop(temp0);
      }
    else
      {
      op->vtkOrientedGlyphContourRepresentation::SetAlwaysOnTop(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkOrientedGlyphContourRepresentation_GetAlwaysOnTop(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAlwaysOnTop");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrientedGlyphContourRepresentation *op = static_cast<vtkOrientedGlyphContourRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetAlwaysOnTop() :
      op->vtkOrientedGlyphContourRepresentation::GetAlwaysOnTop());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOrientedGlyphContourRepresentation_AlwaysOnTopOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AlwaysOnTopOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrientedGlyphContourRepresentation *op = static_cast<vtkOrientedGlyphContourRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->AlwaysOnTopOn();
      }
    else
      {
      op->vtkOrientedGlyphContourRepresentation::AlwaysOnTopOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkOrientedGlyphContourRepresentation_AlwaysOnTopOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AlwaysOnTopOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrientedGlyphContourRepresentation *op = static_cast<vtkOrientedGlyphContourRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->AlwaysOnTopOff();
      }
    else
      {
      op->vtkOrientedGlyphContourRepresentation::AlwaysOnTopOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkOrientedGlyphContourRepresentation_SetLineColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLineColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrientedGlyphContourRepresentation *op = static_cast<vtkOrientedGlyphContourRepresentation *>(vp);

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
      op->SetLineColor(temp0, temp1, temp2);
      }
    else
      {
      op->vtkOrientedGlyphContourRepresentation::SetLineColor(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkOrientedGlyphContourRepresentation_SetShowSelectedNodes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetShowSelectedNodes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrientedGlyphContourRepresentation *op = static_cast<vtkOrientedGlyphContourRepresentation *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetShowSelectedNodes(temp0);
      }
    else
      {
      op->vtkOrientedGlyphContourRepresentation::SetShowSelectedNodes(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkOrientedGlyphContourRepresentation_GetBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrientedGlyphContourRepresentation *op = static_cast<vtkOrientedGlyphContourRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetBounds() :
      op->vtkOrientedGlyphContourRepresentation::GetBounds());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkOrientedGlyphContourRepresentation_Methods[] = {
  {(char*)"GetClassName", PyvtkOrientedGlyphContourRepresentation_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\nStandard methods for instances of this class.\n"},
  {(char*)"IsA", PyvtkOrientedGlyphContourRepresentation_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\nStandard methods for instances of this class.\n"},
  {(char*)"NewInstance", PyvtkOrientedGlyphContourRepresentation_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkOrientedGlyphContourRepresentation\nC++: vtkOrientedGlyphContourRepresentation *NewInstance()\n\nStandard methods for instances of this class.\n"},
  {(char*)"SafeDownCast", PyvtkOrientedGlyphContourRepresentation_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkOrientedGlyphContourRepresentation\nC++: vtkOrientedGlyphContourRepresentation *SafeDownCast(\n    vtkObject* o)\n\nStandard methods for instances of this class.\n"},
  {(char*)"SetCursorShape", PyvtkOrientedGlyphContourRepresentation_SetCursorShape, METH_VARARGS,
   (char*)"V.SetCursorShape(vtkPolyData)\nC++: void SetCursorShape(vtkPolyData *cursorShape)\n\nSpecify the cursor shape. Keep in mind that the shape will be\naligned with the  constraining plane by orienting it such that\nthe x axis of the geometry lies along the normal of the plane.\n"},
  {(char*)"GetCursorShape", PyvtkOrientedGlyphContourRepresentation_GetCursorShape, METH_VARARGS,
   (char*)"V.GetCursorShape() -> vtkPolyData\nC++: vtkPolyData *GetCursorShape()\n\nSpecify the cursor shape. Keep in mind that the shape will be\naligned with the  constraining plane by orienting it such that\nthe x axis of the geometry lies along the normal of the plane.\n"},
  {(char*)"SetActiveCursorShape", PyvtkOrientedGlyphContourRepresentation_SetActiveCursorShape, METH_VARARGS,
   (char*)"V.SetActiveCursorShape(vtkPolyData)\nC++: void SetActiveCursorShape(vtkPolyData *activeShape)\n\nSpecify the shape of the cursor (handle) when it is active. This\nis the geometry that will be used when the mouse is close to the\nhandle or if the user is manipulating the handle.\n"},
  {(char*)"GetActiveCursorShape", PyvtkOrientedGlyphContourRepresentation_GetActiveCursorShape, METH_VARARGS,
   (char*)"V.GetActiveCursorShape() -> vtkPolyData\nC++: vtkPolyData *GetActiveCursorShape()\n\nSpecify the shape of the cursor (handle) when it is active. This\nis the geometry that will be used when the mouse is close to the\nhandle or if the user is manipulating the handle.\n"},
  {(char*)"GetProperty", PyvtkOrientedGlyphContourRepresentation_GetProperty, METH_VARARGS,
   (char*)"V.GetProperty() -> vtkProperty\nC++: vtkProperty *GetProperty()\n\nThis is the property used when the handle is not active (the\nmouse is not near the handle)\n"},
  {(char*)"GetActiveProperty", PyvtkOrientedGlyphContourRepresentation_GetActiveProperty, METH_VARARGS,
   (char*)"V.GetActiveProperty() -> vtkProperty\nC++: vtkProperty *GetActiveProperty()\n\nThis is the property used when the user is interacting with the\nhandle.\n"},
  {(char*)"GetLinesProperty", PyvtkOrientedGlyphContourRepresentation_GetLinesProperty, METH_VARARGS,
   (char*)"V.GetLinesProperty() -> vtkProperty\nC++: vtkProperty *GetLinesProperty()\n\nThis is the property used by the lines.\n"},
  {(char*)"SetRenderer", PyvtkOrientedGlyphContourRepresentation_SetRenderer, METH_VARARGS,
   (char*)"V.SetRenderer(vtkRenderer)\nC++: virtual void SetRenderer(vtkRenderer *ren)\n\nSubclasses of vtkOrientedGlyphContourRepresentation must\nimplement these methods. These are the methods that the widget\nand its representation use to communicate with each other.\n"},
  {(char*)"BuildRepresentation", PyvtkOrientedGlyphContourRepresentation_BuildRepresentation, METH_VARARGS,
   (char*)"V.BuildRepresentation()\nC++: virtual void BuildRepresentation()\n\nSubclasses of vtkOrientedGlyphContourRepresentation must\nimplement these methods. These are the methods that the widget\nand its representation use to communicate with each other.\n"},
  {(char*)"StartWidgetInteraction", PyvtkOrientedGlyphContourRepresentation_StartWidgetInteraction, METH_VARARGS,
   (char*)"V.StartWidgetInteraction([float, float])\nC++: virtual void StartWidgetInteraction(double eventPos[2])\n\nSubclasses of vtkOrientedGlyphContourRepresentation must\nimplement these methods. These are the methods that the widget\nand its representation use to communicate with each other.\n"},
  {(char*)"WidgetInteraction", PyvtkOrientedGlyphContourRepresentation_WidgetInteraction, METH_VARARGS,
   (char*)"V.WidgetInteraction([float, float])\nC++: virtual void WidgetInteraction(double eventPos[2])\n\nSubclasses of vtkOrientedGlyphContourRepresentation must\nimplement these methods. These are the methods that the widget\nand its representation use to communicate with each other.\n"},
  {(char*)"ComputeInteractionState", PyvtkOrientedGlyphContourRepresentation_ComputeInteractionState, METH_VARARGS,
   (char*)"V.ComputeInteractionState(int, int, int) -> int\nC++: virtual int ComputeInteractionState(int X, int Y,\n    int modified=0)\n\nSubclasses of vtkOrientedGlyphContourRepresentation must\nimplement these methods. These are the methods that the widget\nand its representation use to communicate with each other.\n"},
  {(char*)"GetActors", PyvtkOrientedGlyphContourRepresentation_GetActors, METH_VARARGS,
   (char*)"V.GetActors(vtkPropCollection)\nC++: virtual void GetActors(vtkPropCollection *)\n\nMethods to make this class behave as a vtkProp.\n"},
  {(char*)"ReleaseGraphicsResources", PyvtkOrientedGlyphContourRepresentation_ReleaseGraphicsResources, METH_VARARGS,
   (char*)"V.ReleaseGraphicsResources(vtkWindow)\nC++: virtual void ReleaseGraphicsResources(vtkWindow *)\n\nMethods to make this class behave as a vtkProp.\n"},
  {(char*)"RenderOverlay", PyvtkOrientedGlyphContourRepresentation_RenderOverlay, METH_VARARGS,
   (char*)"V.RenderOverlay(vtkViewport) -> int\nC++: virtual int RenderOverlay(vtkViewport *viewport)\n\nMethods to make this class behave as a vtkProp.\n"},
  {(char*)"RenderOpaqueGeometry", PyvtkOrientedGlyphContourRepresentation_RenderOpaqueGeometry, METH_VARARGS,
   (char*)"V.RenderOpaqueGeometry(vtkViewport) -> int\nC++: virtual int RenderOpaqueGeometry(vtkViewport *viewport)\n\nMethods to make this class behave as a vtkProp.\n"},
  {(char*)"RenderTranslucentPolygonalGeometry", PyvtkOrientedGlyphContourRepresentation_RenderTranslucentPolygonalGeometry, METH_VARARGS,
   (char*)"V.RenderTranslucentPolygonalGeometry(vtkViewport) -> int\nC++: virtual int RenderTranslucentPolygonalGeometry(\n    vtkViewport *viewport)\n\nMethods to make this class behave as a vtkProp.\n"},
  {(char*)"HasTranslucentPolygonalGeometry", PyvtkOrientedGlyphContourRepresentation_HasTranslucentPolygonalGeometry, METH_VARARGS,
   (char*)"V.HasTranslucentPolygonalGeometry() -> int\nC++: virtual int HasTranslucentPolygonalGeometry()\n\nMethods to make this class behave as a vtkProp.\n"},
  {(char*)"GetContourRepresentationAsPolyData", PyvtkOrientedGlyphContourRepresentation_GetContourRepresentationAsPolyData, METH_VARARGS,
   (char*)"V.GetContourRepresentationAsPolyData() -> vtkPolyData\nC++: virtual vtkPolyData *GetContourRepresentationAsPolyData()\n\nGet the points in this contour as a vtkPolyData.\n"},
  {(char*)"SetAlwaysOnTop", PyvtkOrientedGlyphContourRepresentation_SetAlwaysOnTop, METH_VARARGS,
   (char*)"V.SetAlwaysOnTop(int)\nC++: void SetAlwaysOnTop(int a)\n\nControls whether the contour widget should always appear on top\nof other actors in the scene. (In effect, this will disable\nOpenGL Depth buffer tests while rendering the contour). Default\nis to set it to false.\n"},
  {(char*)"GetAlwaysOnTop", PyvtkOrientedGlyphContourRepresentation_GetAlwaysOnTop, METH_VARARGS,
   (char*)"V.GetAlwaysOnTop() -> int\nC++: int GetAlwaysOnTop()\n\nControls whether the contour widget should always appear on top\nof other actors in the scene. (In effect, this will disable\nOpenGL Depth buffer tests while rendering the contour). Default\nis to set it to false.\n"},
  {(char*)"AlwaysOnTopOn", PyvtkOrientedGlyphContourRepresentation_AlwaysOnTopOn, METH_VARARGS,
   (char*)"V.AlwaysOnTopOn()\nC++: void AlwaysOnTopOn()\n\nControls whether the contour widget should always appear on top\nof other actors in the scene. (In effect, this will disable\nOpenGL Depth buffer tests while rendering the contour). Default\nis to set it to false.\n"},
  {(char*)"AlwaysOnTopOff", PyvtkOrientedGlyphContourRepresentation_AlwaysOnTopOff, METH_VARARGS,
   (char*)"V.AlwaysOnTopOff()\nC++: void AlwaysOnTopOff()\n\nControls whether the contour widget should always appear on top\nof other actors in the scene. (In effect, this will disable\nOpenGL Depth buffer tests while rendering the contour). Default\nis to set it to false.\n"},
  {(char*)"SetLineColor", PyvtkOrientedGlyphContourRepresentation_SetLineColor, METH_VARARGS,
   (char*)"V.SetLineColor(float, float, float)\nC++: void SetLineColor(double r, double g, double b)\n\nConvenience method to set the line color. Ideally one should use\nGetLinesProperty()->SetColor().\n"},
  {(char*)"SetShowSelectedNodes", PyvtkOrientedGlyphContourRepresentation_SetShowSelectedNodes, METH_VARARGS,
   (char*)"V.SetShowSelectedNodes(int)\nC++: virtual void SetShowSelectedNodes(int)\n\nA flag to indicate whether to show the Selected nodes Default is\nto set it to false.\n"},
  {(char*)"GetBounds", PyvtkOrientedGlyphContourRepresentation_GetBounds, METH_VARARGS,
   (char*)"V.GetBounds() -> (float, ...)\nC++: virtual double *GetBounds()\n\nReturn the bounds of the representation\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkOrientedGlyphContourRepresentation_StaticNew()
{
  return vtkOrientedGlyphContourRepresentation::New();
}

PyObject *PyVTKClass_vtkOrientedGlyphContourRepresentationNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkOrientedGlyphContourRepresentation_StaticNew,
    PyvtkOrientedGlyphContourRepresentation_Methods,
    "vtkOrientedGlyphContourRepresentation", modulename,
    NULL, NULL,
    PyvtkOrientedGlyphContourRepresentation_Doc(),
    PyVTKClass_vtkContourRepresentationNew(modulename));
  return cls;
}

const char **PyvtkOrientedGlyphContourRepresentation_Doc()
{
  static const char *docstring[] = {
    "vtkOrientedGlyphContourRepresentation - Default representation for\nthe contour widget\n\n",
    "Superclass: vtkContourRepresentation\n\n",
    "This class provides the default concrete representation for the\nvtkContourWidget. It works in conjunction with the\nvtkContourLineInterpolator and vtkPointPlacer. See vtkContourWidget\nfor details.\n\nSee Also:\n\nvtkContourRepresentation vtkContourWidget vtkPointPlacer\nvtkContourLineInterpolator\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkOrientedGlyphContourRepresentation(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkOrientedGlyphContourRepresentationNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkOrientedGlyphContourRepresentation", o) != 0)
    {
    Py_DECREF(o);
    }

}

