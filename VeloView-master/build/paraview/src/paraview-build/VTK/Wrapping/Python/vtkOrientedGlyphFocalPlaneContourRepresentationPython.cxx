// python wrapper for vtkOrientedGlyphFocalPlaneContourRepresentation
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkOrientedGlyphFocalPlaneContourRepresentation.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkOrientedGlyphFocalPlaneContourRepresentation(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkOrientedGlyphFocalPlaneContourRepresentationNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkFocalPlaneContourRepresentationNew
extern "C" { PyObject *PyVTKClass_vtkFocalPlaneContourRepresentationNew(const char *); }
#define DECLARED_PyVTKClass_vtkFocalPlaneContourRepresentationNew
#endif

static const char **PyvtkOrientedGlyphFocalPlaneContourRepresentation_Doc();


static PyObject *
PyvtkOrientedGlyphFocalPlaneContourRepresentation_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrientedGlyphFocalPlaneContourRepresentation *op = static_cast<vtkOrientedGlyphFocalPlaneContourRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkOrientedGlyphFocalPlaneContourRepresentation::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOrientedGlyphFocalPlaneContourRepresentation_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrientedGlyphFocalPlaneContourRepresentation *op = static_cast<vtkOrientedGlyphFocalPlaneContourRepresentation *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkOrientedGlyphFocalPlaneContourRepresentation::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOrientedGlyphFocalPlaneContourRepresentation_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrientedGlyphFocalPlaneContourRepresentation *op = static_cast<vtkOrientedGlyphFocalPlaneContourRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkOrientedGlyphFocalPlaneContourRepresentation *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkOrientedGlyphFocalPlaneContourRepresentation::NewInstance());

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
PyvtkOrientedGlyphFocalPlaneContourRepresentation_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkOrientedGlyphFocalPlaneContourRepresentation *tempr = vtkOrientedGlyphFocalPlaneContourRepresentation::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOrientedGlyphFocalPlaneContourRepresentation_SetCursorShape(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCursorShape");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrientedGlyphFocalPlaneContourRepresentation *op = static_cast<vtkOrientedGlyphFocalPlaneContourRepresentation *>(vp);

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
      op->vtkOrientedGlyphFocalPlaneContourRepresentation::SetCursorShape(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkOrientedGlyphFocalPlaneContourRepresentation_GetCursorShape(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCursorShape");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrientedGlyphFocalPlaneContourRepresentation *op = static_cast<vtkOrientedGlyphFocalPlaneContourRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPolyData *tempr = (ap.IsBound() ?
      op->GetCursorShape() :
      op->vtkOrientedGlyphFocalPlaneContourRepresentation::GetCursorShape());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOrientedGlyphFocalPlaneContourRepresentation_SetActiveCursorShape(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetActiveCursorShape");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrientedGlyphFocalPlaneContourRepresentation *op = static_cast<vtkOrientedGlyphFocalPlaneContourRepresentation *>(vp);

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
      op->vtkOrientedGlyphFocalPlaneContourRepresentation::SetActiveCursorShape(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkOrientedGlyphFocalPlaneContourRepresentation_GetActiveCursorShape(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActiveCursorShape");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrientedGlyphFocalPlaneContourRepresentation *op = static_cast<vtkOrientedGlyphFocalPlaneContourRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPolyData *tempr = (ap.IsBound() ?
      op->GetActiveCursorShape() :
      op->vtkOrientedGlyphFocalPlaneContourRepresentation::GetActiveCursorShape());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOrientedGlyphFocalPlaneContourRepresentation_GetProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrientedGlyphFocalPlaneContourRepresentation *op = static_cast<vtkOrientedGlyphFocalPlaneContourRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkProperty2D *tempr = (ap.IsBound() ?
      op->GetProperty() :
      op->vtkOrientedGlyphFocalPlaneContourRepresentation::GetProperty());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOrientedGlyphFocalPlaneContourRepresentation_GetActiveProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActiveProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrientedGlyphFocalPlaneContourRepresentation *op = static_cast<vtkOrientedGlyphFocalPlaneContourRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkProperty2D *tempr = (ap.IsBound() ?
      op->GetActiveProperty() :
      op->vtkOrientedGlyphFocalPlaneContourRepresentation::GetActiveProperty());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOrientedGlyphFocalPlaneContourRepresentation_GetLinesProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLinesProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrientedGlyphFocalPlaneContourRepresentation *op = static_cast<vtkOrientedGlyphFocalPlaneContourRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkProperty2D *tempr = (ap.IsBound() ?
      op->GetLinesProperty() :
      op->vtkOrientedGlyphFocalPlaneContourRepresentation::GetLinesProperty());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOrientedGlyphFocalPlaneContourRepresentation_SetRenderer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRenderer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrientedGlyphFocalPlaneContourRepresentation *op = static_cast<vtkOrientedGlyphFocalPlaneContourRepresentation *>(vp);

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
      op->vtkOrientedGlyphFocalPlaneContourRepresentation::SetRenderer(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkOrientedGlyphFocalPlaneContourRepresentation_BuildRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BuildRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrientedGlyphFocalPlaneContourRepresentation *op = static_cast<vtkOrientedGlyphFocalPlaneContourRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->BuildRepresentation();
      }
    else
      {
      op->vtkOrientedGlyphFocalPlaneContourRepresentation::BuildRepresentation();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkOrientedGlyphFocalPlaneContourRepresentation_StartWidgetInteraction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StartWidgetInteraction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrientedGlyphFocalPlaneContourRepresentation *op = static_cast<vtkOrientedGlyphFocalPlaneContourRepresentation *>(vp);

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
      op->vtkOrientedGlyphFocalPlaneContourRepresentation::StartWidgetInteraction(temp0);
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
PyvtkOrientedGlyphFocalPlaneContourRepresentation_WidgetInteraction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WidgetInteraction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrientedGlyphFocalPlaneContourRepresentation *op = static_cast<vtkOrientedGlyphFocalPlaneContourRepresentation *>(vp);

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
      op->vtkOrientedGlyphFocalPlaneContourRepresentation::WidgetInteraction(temp0);
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
PyvtkOrientedGlyphFocalPlaneContourRepresentation_ComputeInteractionState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeInteractionState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrientedGlyphFocalPlaneContourRepresentation *op = static_cast<vtkOrientedGlyphFocalPlaneContourRepresentation *>(vp);

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
      op->vtkOrientedGlyphFocalPlaneContourRepresentation::ComputeInteractionState(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOrientedGlyphFocalPlaneContourRepresentation_GetActors2D(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActors2D");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrientedGlyphFocalPlaneContourRepresentation *op = static_cast<vtkOrientedGlyphFocalPlaneContourRepresentation *>(vp);

  vtkPropCollection *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPropCollection"))
    {
    if (ap.IsBound())
      {
      op->GetActors2D(temp0);
      }
    else
      {
      op->vtkOrientedGlyphFocalPlaneContourRepresentation::GetActors2D(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkOrientedGlyphFocalPlaneContourRepresentation_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrientedGlyphFocalPlaneContourRepresentation *op = static_cast<vtkOrientedGlyphFocalPlaneContourRepresentation *>(vp);

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
      op->vtkOrientedGlyphFocalPlaneContourRepresentation::ReleaseGraphicsResources(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkOrientedGlyphFocalPlaneContourRepresentation_RenderOverlay(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOverlay");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrientedGlyphFocalPlaneContourRepresentation *op = static_cast<vtkOrientedGlyphFocalPlaneContourRepresentation *>(vp);

  vtkViewport *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
    {
    int tempr = (ap.IsBound() ?
      op->RenderOverlay(temp0) :
      op->vtkOrientedGlyphFocalPlaneContourRepresentation::RenderOverlay(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOrientedGlyphFocalPlaneContourRepresentation_RenderOpaqueGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOpaqueGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrientedGlyphFocalPlaneContourRepresentation *op = static_cast<vtkOrientedGlyphFocalPlaneContourRepresentation *>(vp);

  vtkViewport *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
    {
    int tempr = (ap.IsBound() ?
      op->RenderOpaqueGeometry(temp0) :
      op->vtkOrientedGlyphFocalPlaneContourRepresentation::RenderOpaqueGeometry(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOrientedGlyphFocalPlaneContourRepresentation_RenderTranslucentPolygonalGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderTranslucentPolygonalGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrientedGlyphFocalPlaneContourRepresentation *op = static_cast<vtkOrientedGlyphFocalPlaneContourRepresentation *>(vp);

  vtkViewport *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
    {
    int tempr = (ap.IsBound() ?
      op->RenderTranslucentPolygonalGeometry(temp0) :
      op->vtkOrientedGlyphFocalPlaneContourRepresentation::RenderTranslucentPolygonalGeometry(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOrientedGlyphFocalPlaneContourRepresentation_HasTranslucentPolygonalGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasTranslucentPolygonalGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrientedGlyphFocalPlaneContourRepresentation *op = static_cast<vtkOrientedGlyphFocalPlaneContourRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->HasTranslucentPolygonalGeometry() :
      op->vtkOrientedGlyphFocalPlaneContourRepresentation::HasTranslucentPolygonalGeometry());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOrientedGlyphFocalPlaneContourRepresentation_GetContourRepresentationAsPolyData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetContourRepresentationAsPolyData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrientedGlyphFocalPlaneContourRepresentation *op = static_cast<vtkOrientedGlyphFocalPlaneContourRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPolyData *tempr = (ap.IsBound() ?
      op->GetContourRepresentationAsPolyData() :
      op->vtkOrientedGlyphFocalPlaneContourRepresentation::GetContourRepresentationAsPolyData());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOrientedGlyphFocalPlaneContourRepresentation_GetContourPlaneDirectionCosines(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetContourPlaneDirectionCosines");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrientedGlyphFocalPlaneContourRepresentation *op = static_cast<vtkOrientedGlyphFocalPlaneContourRepresentation *>(vp);

  double temp0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    vtkMatrix4x4 *tempr = (ap.IsBound() ?
      op->GetContourPlaneDirectionCosines(temp0) :
      op->vtkOrientedGlyphFocalPlaneContourRepresentation::GetContourPlaneDirectionCosines(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkOrientedGlyphFocalPlaneContourRepresentation_Methods[] = {
  {(char*)"GetClassName", PyvtkOrientedGlyphFocalPlaneContourRepresentation_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\nStandard methods for instances of this class.\n"},
  {(char*)"IsA", PyvtkOrientedGlyphFocalPlaneContourRepresentation_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\nStandard methods for instances of this class.\n"},
  {(char*)"NewInstance", PyvtkOrientedGlyphFocalPlaneContourRepresentation_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkOrientedGlyphFocalPlaneContourRepresentation\nC++: vtkOrientedGlyphFocalPlaneContourRepresentation *NewInstance(\n    )\n\nStandard methods for instances of this class.\n"},
  {(char*)"SafeDownCast", PyvtkOrientedGlyphFocalPlaneContourRepresentation_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject)\n    -> vtkOrientedGlyphFocalPlaneContourRepresentation\nC++: vtkOrientedGlyphFocalPlaneContourRepresentation *SafeDownCast(\n    vtkObject* o)\n\nStandard methods for instances of this class.\n"},
  {(char*)"SetCursorShape", PyvtkOrientedGlyphFocalPlaneContourRepresentation_SetCursorShape, METH_VARARGS,
   (char*)"V.SetCursorShape(vtkPolyData)\nC++: void SetCursorShape(vtkPolyData *cursorShape)\n\nSpecify the cursor shape. Keep in mind that the shape will be\naligned with the  constraining plane by orienting it such that\nthe x axis of the geometry lies along the normal of the plane.\n"},
  {(char*)"GetCursorShape", PyvtkOrientedGlyphFocalPlaneContourRepresentation_GetCursorShape, METH_VARARGS,
   (char*)"V.GetCursorShape() -> vtkPolyData\nC++: vtkPolyData *GetCursorShape()\n\nSpecify the cursor shape. Keep in mind that the shape will be\naligned with the  constraining plane by orienting it such that\nthe x axis of the geometry lies along the normal of the plane.\n"},
  {(char*)"SetActiveCursorShape", PyvtkOrientedGlyphFocalPlaneContourRepresentation_SetActiveCursorShape, METH_VARARGS,
   (char*)"V.SetActiveCursorShape(vtkPolyData)\nC++: void SetActiveCursorShape(vtkPolyData *activeShape)\n\nSpecify the shape of the cursor (handle) when it is active. This\nis the geometry that will be used when the mouse is close to the\nhandle or if the user is manipulating the handle.\n"},
  {(char*)"GetActiveCursorShape", PyvtkOrientedGlyphFocalPlaneContourRepresentation_GetActiveCursorShape, METH_VARARGS,
   (char*)"V.GetActiveCursorShape() -> vtkPolyData\nC++: vtkPolyData *GetActiveCursorShape()\n\nSpecify the shape of the cursor (handle) when it is active. This\nis the geometry that will be used when the mouse is close to the\nhandle or if the user is manipulating the handle.\n"},
  {(char*)"GetProperty", PyvtkOrientedGlyphFocalPlaneContourRepresentation_GetProperty, METH_VARARGS,
   (char*)"V.GetProperty() -> vtkProperty2D\nC++: vtkProperty2D *GetProperty()\n\nThis is the property used when the handle is not active (the\nmouse is not near the handle)\n"},
  {(char*)"GetActiveProperty", PyvtkOrientedGlyphFocalPlaneContourRepresentation_GetActiveProperty, METH_VARARGS,
   (char*)"V.GetActiveProperty() -> vtkProperty2D\nC++: vtkProperty2D *GetActiveProperty()\n\nThis is the property used when the user is interacting with the\nhandle.\n"},
  {(char*)"GetLinesProperty", PyvtkOrientedGlyphFocalPlaneContourRepresentation_GetLinesProperty, METH_VARARGS,
   (char*)"V.GetLinesProperty() -> vtkProperty2D\nC++: vtkProperty2D *GetLinesProperty()\n\nThis is the property used by the lines.\n"},
  {(char*)"SetRenderer", PyvtkOrientedGlyphFocalPlaneContourRepresentation_SetRenderer, METH_VARARGS,
   (char*)"V.SetRenderer(vtkRenderer)\nC++: virtual void SetRenderer(vtkRenderer *ren)\n\nSubclasses of vtkOrientedGlyphFocalPlaneContourRepresentation\nmust implement these methods. These are the methods that the\nwidget and its representation use to communicate with each other.\n"},
  {(char*)"BuildRepresentation", PyvtkOrientedGlyphFocalPlaneContourRepresentation_BuildRepresentation, METH_VARARGS,
   (char*)"V.BuildRepresentation()\nC++: virtual void BuildRepresentation()\n\nSubclasses of vtkOrientedGlyphFocalPlaneContourRepresentation\nmust implement these methods. These are the methods that the\nwidget and its representation use to communicate with each other.\n"},
  {(char*)"StartWidgetInteraction", PyvtkOrientedGlyphFocalPlaneContourRepresentation_StartWidgetInteraction, METH_VARARGS,
   (char*)"V.StartWidgetInteraction([float, float])\nC++: virtual void StartWidgetInteraction(double eventPos[2])\n\nSubclasses of vtkOrientedGlyphFocalPlaneContourRepresentation\nmust implement these methods. These are the methods that the\nwidget and its representation use to communicate with each other.\n"},
  {(char*)"WidgetInteraction", PyvtkOrientedGlyphFocalPlaneContourRepresentation_WidgetInteraction, METH_VARARGS,
   (char*)"V.WidgetInteraction([float, float])\nC++: virtual void WidgetInteraction(double eventPos[2])\n\nSubclasses of vtkOrientedGlyphFocalPlaneContourRepresentation\nmust implement these methods. These are the methods that the\nwidget and its representation use to communicate with each other.\n"},
  {(char*)"ComputeInteractionState", PyvtkOrientedGlyphFocalPlaneContourRepresentation_ComputeInteractionState, METH_VARARGS,
   (char*)"V.ComputeInteractionState(int, int, int) -> int\nC++: virtual int ComputeInteractionState(int X, int Y,\n    int modified=0)\n\nSubclasses of vtkOrientedGlyphFocalPlaneContourRepresentation\nmust implement these methods. These are the methods that the\nwidget and its representation use to communicate with each other.\n"},
  {(char*)"GetActors2D", PyvtkOrientedGlyphFocalPlaneContourRepresentation_GetActors2D, METH_VARARGS,
   (char*)"V.GetActors2D(vtkPropCollection)\nC++: virtual void GetActors2D(vtkPropCollection *)\n\nMethods to make this class behave as a vtkProp.\n"},
  {(char*)"ReleaseGraphicsResources", PyvtkOrientedGlyphFocalPlaneContourRepresentation_ReleaseGraphicsResources, METH_VARARGS,
   (char*)"V.ReleaseGraphicsResources(vtkWindow)\nC++: virtual void ReleaseGraphicsResources(vtkWindow *)\n\nMethods to make this class behave as a vtkProp.\n"},
  {(char*)"RenderOverlay", PyvtkOrientedGlyphFocalPlaneContourRepresentation_RenderOverlay, METH_VARARGS,
   (char*)"V.RenderOverlay(vtkViewport) -> int\nC++: virtual int RenderOverlay(vtkViewport *viewport)\n\nMethods to make this class behave as a vtkProp.\n"},
  {(char*)"RenderOpaqueGeometry", PyvtkOrientedGlyphFocalPlaneContourRepresentation_RenderOpaqueGeometry, METH_VARARGS,
   (char*)"V.RenderOpaqueGeometry(vtkViewport) -> int\nC++: virtual int RenderOpaqueGeometry(vtkViewport *viewport)\n\nMethods to make this class behave as a vtkProp.\n"},
  {(char*)"RenderTranslucentPolygonalGeometry", PyvtkOrientedGlyphFocalPlaneContourRepresentation_RenderTranslucentPolygonalGeometry, METH_VARARGS,
   (char*)"V.RenderTranslucentPolygonalGeometry(vtkViewport) -> int\nC++: virtual int RenderTranslucentPolygonalGeometry(\n    vtkViewport *viewport)\n\nMethods to make this class behave as a vtkProp.\n"},
  {(char*)"HasTranslucentPolygonalGeometry", PyvtkOrientedGlyphFocalPlaneContourRepresentation_HasTranslucentPolygonalGeometry, METH_VARARGS,
   (char*)"V.HasTranslucentPolygonalGeometry() -> int\nC++: virtual int HasTranslucentPolygonalGeometry()\n\nMethods to make this class behave as a vtkProp.\n"},
  {(char*)"GetContourRepresentationAsPolyData", PyvtkOrientedGlyphFocalPlaneContourRepresentation_GetContourRepresentationAsPolyData, METH_VARARGS,
   (char*)"V.GetContourRepresentationAsPolyData() -> vtkPolyData\nC++: virtual vtkPolyData *GetContourRepresentationAsPolyData()\n\nGet the points in this contour as a vtkPolyData.\n"},
  {(char*)"GetContourPlaneDirectionCosines", PyvtkOrientedGlyphFocalPlaneContourRepresentation_GetContourPlaneDirectionCosines, METH_VARARGS,
   (char*)"V.GetContourPlaneDirectionCosines((float, float, float))\n    -> vtkMatrix4x4\nC++: vtkMatrix4x4 *GetContourPlaneDirectionCosines(\n    const double origin[3])\n\nDirection cosines of the plane on which the contour lies on in\nworld co-ordinates. This would be the same matrix that would be\nset in vtkImageReslice or vtkImagePlaneWidget if there were a\nplane passing through the contour points. The origin must be the\norigin of the data under the contour.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkOrientedGlyphFocalPlaneContourRepresentation_StaticNew()
{
  return vtkOrientedGlyphFocalPlaneContourRepresentation::New();
}

PyObject *PyVTKClass_vtkOrientedGlyphFocalPlaneContourRepresentationNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkOrientedGlyphFocalPlaneContourRepresentation_StaticNew,
    PyvtkOrientedGlyphFocalPlaneContourRepresentation_Methods,
    "vtkOrientedGlyphFocalPlaneContourRepresentation", modulename,
    NULL, NULL,
    PyvtkOrientedGlyphFocalPlaneContourRepresentation_Doc(),
    PyVTKClass_vtkFocalPlaneContourRepresentationNew(modulename));
  return cls;
}

const char **PyvtkOrientedGlyphFocalPlaneContourRepresentation_Doc()
{
  static const char *docstring[] = {
    "vtkOrientedGlyphFocalPlaneContourRepresentation - Contours constrained\n\n",
    "Superclass: vtkFocalPlaneContourRepresentation\n\n",
    "This class is used to represent a contour drawn on the focal plane\n(usually overlayed on top of an image or volume widget). The class\nwas written in order to be able to draw contours on a volume widget\nand have the contours overlayed on the focal plane in order to do\ncontour segmentation.\n\nSee Also:\n\nvtkOrientedGlyphContourRepresentation\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkOrientedGlyphFocalPlaneContourRepresentation(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkOrientedGlyphFocalPlaneContourRepresentationNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkOrientedGlyphFocalPlaneContourRepresentation", o) != 0)
    {
    Py_DECREF(o);
    }

}

