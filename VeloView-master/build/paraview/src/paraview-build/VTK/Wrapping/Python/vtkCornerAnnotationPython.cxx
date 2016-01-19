// python wrapper for vtkCornerAnnotation
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkCornerAnnotation.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkCornerAnnotation(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkCornerAnnotationNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkActor2DNew
extern "C" { PyObject *PyVTKClass_vtkActor2DNew(const char *); }
#define DECLARED_PyVTKClass_vtkActor2DNew
#endif

static const char **PyvtkCornerAnnotation_Doc();


static PyObject *
PyvtkCornerAnnotation_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCornerAnnotation *op = static_cast<vtkCornerAnnotation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkCornerAnnotation::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCornerAnnotation_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCornerAnnotation *op = static_cast<vtkCornerAnnotation *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkCornerAnnotation::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCornerAnnotation_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCornerAnnotation *op = static_cast<vtkCornerAnnotation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkCornerAnnotation *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkCornerAnnotation::NewInstance());

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
PyvtkCornerAnnotation_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkCornerAnnotation *tempr = vtkCornerAnnotation::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCornerAnnotation_RenderOpaqueGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOpaqueGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCornerAnnotation *op = static_cast<vtkCornerAnnotation *>(vp);

  vtkViewport *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
    {
    int tempr = (ap.IsBound() ?
      op->RenderOpaqueGeometry(temp0) :
      op->vtkCornerAnnotation::RenderOpaqueGeometry(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCornerAnnotation_RenderTranslucentPolygonalGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderTranslucentPolygonalGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCornerAnnotation *op = static_cast<vtkCornerAnnotation *>(vp);

  vtkViewport *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
    {
    int tempr = (ap.IsBound() ?
      op->RenderTranslucentPolygonalGeometry(temp0) :
      op->vtkCornerAnnotation::RenderTranslucentPolygonalGeometry(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCornerAnnotation_RenderOverlay(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOverlay");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCornerAnnotation *op = static_cast<vtkCornerAnnotation *>(vp);

  vtkViewport *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
    {
    int tempr = (ap.IsBound() ?
      op->RenderOverlay(temp0) :
      op->vtkCornerAnnotation::RenderOverlay(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCornerAnnotation_HasTranslucentPolygonalGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasTranslucentPolygonalGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCornerAnnotation *op = static_cast<vtkCornerAnnotation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->HasTranslucentPolygonalGeometry() :
      op->vtkCornerAnnotation::HasTranslucentPolygonalGeometry());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCornerAnnotation_SetMaximumLineHeight(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaximumLineHeight");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCornerAnnotation *op = static_cast<vtkCornerAnnotation *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetMaximumLineHeight(temp0);
      }
    else
      {
      op->vtkCornerAnnotation::SetMaximumLineHeight(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCornerAnnotation_GetMaximumLineHeight(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumLineHeight");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCornerAnnotation *op = static_cast<vtkCornerAnnotation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetMaximumLineHeight() :
      op->vtkCornerAnnotation::GetMaximumLineHeight());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCornerAnnotation_SetMinimumFontSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMinimumFontSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCornerAnnotation *op = static_cast<vtkCornerAnnotation *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetMinimumFontSize(temp0);
      }
    else
      {
      op->vtkCornerAnnotation::SetMinimumFontSize(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCornerAnnotation_GetMinimumFontSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMinimumFontSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCornerAnnotation *op = static_cast<vtkCornerAnnotation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetMinimumFontSize() :
      op->vtkCornerAnnotation::GetMinimumFontSize());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCornerAnnotation_SetMaximumFontSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaximumFontSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCornerAnnotation *op = static_cast<vtkCornerAnnotation *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetMaximumFontSize(temp0);
      }
    else
      {
      op->vtkCornerAnnotation::SetMaximumFontSize(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCornerAnnotation_GetMaximumFontSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumFontSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCornerAnnotation *op = static_cast<vtkCornerAnnotation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetMaximumFontSize() :
      op->vtkCornerAnnotation::GetMaximumFontSize());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCornerAnnotation_SetLinearFontScaleFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLinearFontScaleFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCornerAnnotation *op = static_cast<vtkCornerAnnotation *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetLinearFontScaleFactor(temp0);
      }
    else
      {
      op->vtkCornerAnnotation::SetLinearFontScaleFactor(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCornerAnnotation_GetLinearFontScaleFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLinearFontScaleFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCornerAnnotation *op = static_cast<vtkCornerAnnotation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetLinearFontScaleFactor() :
      op->vtkCornerAnnotation::GetLinearFontScaleFactor());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCornerAnnotation_SetNonlinearFontScaleFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNonlinearFontScaleFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCornerAnnotation *op = static_cast<vtkCornerAnnotation *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetNonlinearFontScaleFactor(temp0);
      }
    else
      {
      op->vtkCornerAnnotation::SetNonlinearFontScaleFactor(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCornerAnnotation_GetNonlinearFontScaleFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNonlinearFontScaleFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCornerAnnotation *op = static_cast<vtkCornerAnnotation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetNonlinearFontScaleFactor() :
      op->vtkCornerAnnotation::GetNonlinearFontScaleFactor());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCornerAnnotation_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCornerAnnotation *op = static_cast<vtkCornerAnnotation *>(vp);

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
      op->vtkCornerAnnotation::ReleaseGraphicsResources(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCornerAnnotation_SetText(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetText");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCornerAnnotation *op = static_cast<vtkCornerAnnotation *>(vp);

  int temp0;
  char *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetText(temp0, temp1);
      }
    else
      {
      op->vtkCornerAnnotation::SetText(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCornerAnnotation_GetText(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetText");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCornerAnnotation *op = static_cast<vtkCornerAnnotation *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetText(temp0) :
      op->vtkCornerAnnotation::GetText(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCornerAnnotation_ClearAllTexts(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClearAllTexts");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCornerAnnotation *op = static_cast<vtkCornerAnnotation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ClearAllTexts();
      }
    else
      {
      op->vtkCornerAnnotation::ClearAllTexts();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCornerAnnotation_CopyAllTextsFrom(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyAllTextsFrom");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCornerAnnotation *op = static_cast<vtkCornerAnnotation *>(vp);

  vtkCornerAnnotation *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCornerAnnotation"))
    {
    if (ap.IsBound())
      {
      op->CopyAllTextsFrom(temp0);
      }
    else
      {
      op->vtkCornerAnnotation::CopyAllTextsFrom(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCornerAnnotation_SetImageActor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetImageActor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCornerAnnotation *op = static_cast<vtkCornerAnnotation *>(vp);

  vtkImageActor *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkImageActor"))
    {
    if (ap.IsBound())
      {
      op->SetImageActor(temp0);
      }
    else
      {
      op->vtkCornerAnnotation::SetImageActor(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCornerAnnotation_GetImageActor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetImageActor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCornerAnnotation *op = static_cast<vtkCornerAnnotation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkImageActor *tempr = (ap.IsBound() ?
      op->GetImageActor() :
      op->vtkCornerAnnotation::GetImageActor());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCornerAnnotation_SetWindowLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWindowLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCornerAnnotation *op = static_cast<vtkCornerAnnotation *>(vp);

  vtkImageMapToWindowLevelColors *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkImageMapToWindowLevelColors"))
    {
    if (ap.IsBound())
      {
      op->SetWindowLevel(temp0);
      }
    else
      {
      op->vtkCornerAnnotation::SetWindowLevel(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCornerAnnotation_GetWindowLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWindowLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCornerAnnotation *op = static_cast<vtkCornerAnnotation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkImageMapToWindowLevelColors *tempr = (ap.IsBound() ?
      op->GetWindowLevel() :
      op->vtkCornerAnnotation::GetWindowLevel());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCornerAnnotation_SetLevelShift(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLevelShift");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCornerAnnotation *op = static_cast<vtkCornerAnnotation *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetLevelShift(temp0);
      }
    else
      {
      op->vtkCornerAnnotation::SetLevelShift(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCornerAnnotation_GetLevelShift(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLevelShift");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCornerAnnotation *op = static_cast<vtkCornerAnnotation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetLevelShift() :
      op->vtkCornerAnnotation::GetLevelShift());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCornerAnnotation_SetLevelScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLevelScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCornerAnnotation *op = static_cast<vtkCornerAnnotation *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetLevelScale(temp0);
      }
    else
      {
      op->vtkCornerAnnotation::SetLevelScale(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCornerAnnotation_GetLevelScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLevelScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCornerAnnotation *op = static_cast<vtkCornerAnnotation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetLevelScale() :
      op->vtkCornerAnnotation::GetLevelScale());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCornerAnnotation_SetTextProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTextProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCornerAnnotation *op = static_cast<vtkCornerAnnotation *>(vp);

  vtkTextProperty *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkTextProperty"))
    {
    if (ap.IsBound())
      {
      op->SetTextProperty(temp0);
      }
    else
      {
      op->vtkCornerAnnotation::SetTextProperty(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCornerAnnotation_GetTextProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTextProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCornerAnnotation *op = static_cast<vtkCornerAnnotation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkTextProperty *tempr = (ap.IsBound() ?
      op->GetTextProperty() :
      op->vtkCornerAnnotation::GetTextProperty());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCornerAnnotation_ShowSliceAndImageOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShowSliceAndImageOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCornerAnnotation *op = static_cast<vtkCornerAnnotation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ShowSliceAndImageOn();
      }
    else
      {
      op->vtkCornerAnnotation::ShowSliceAndImageOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCornerAnnotation_ShowSliceAndImageOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShowSliceAndImageOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCornerAnnotation *op = static_cast<vtkCornerAnnotation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ShowSliceAndImageOff();
      }
    else
      {
      op->vtkCornerAnnotation::ShowSliceAndImageOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCornerAnnotation_SetShowSliceAndImage(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetShowSliceAndImage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCornerAnnotation *op = static_cast<vtkCornerAnnotation *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetShowSliceAndImage(temp0);
      }
    else
      {
      op->vtkCornerAnnotation::SetShowSliceAndImage(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCornerAnnotation_GetShowSliceAndImage(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetShowSliceAndImage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCornerAnnotation *op = static_cast<vtkCornerAnnotation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetShowSliceAndImage() :
      op->vtkCornerAnnotation::GetShowSliceAndImage());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkCornerAnnotation_Methods[] = {
  {(char*)"GetClassName", PyvtkCornerAnnotation_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkCornerAnnotation_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkCornerAnnotation_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkCornerAnnotation\nC++: vtkCornerAnnotation *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkCornerAnnotation_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkCornerAnnotation\nC++: vtkCornerAnnotation *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"RenderOpaqueGeometry", PyvtkCornerAnnotation_RenderOpaqueGeometry, METH_VARARGS,
   (char*)"V.RenderOpaqueGeometry(vtkViewport) -> int\nC++: int RenderOpaqueGeometry(vtkViewport *viewport)\n\nDraw the scalar bar and annotation text to the screen.\n"},
  {(char*)"RenderTranslucentPolygonalGeometry", PyvtkCornerAnnotation_RenderTranslucentPolygonalGeometry, METH_VARARGS,
   (char*)"V.RenderTranslucentPolygonalGeometry(vtkViewport) -> int\nC++: virtual int RenderTranslucentPolygonalGeometry(vtkViewport *)\n\nDraw the scalar bar and annotation text to the screen.\n"},
  {(char*)"RenderOverlay", PyvtkCornerAnnotation_RenderOverlay, METH_VARARGS,
   (char*)"V.RenderOverlay(vtkViewport) -> int\nC++: int RenderOverlay(vtkViewport *viewport)\n\nDraw the scalar bar and annotation text to the screen.\n"},
  {(char*)"HasTranslucentPolygonalGeometry", PyvtkCornerAnnotation_HasTranslucentPolygonalGeometry, METH_VARARGS,
   (char*)"V.HasTranslucentPolygonalGeometry() -> int\nC++: virtual int HasTranslucentPolygonalGeometry()\n\nDoes this prop have some translucent polygonal geometry?\n"},
  {(char*)"SetMaximumLineHeight", PyvtkCornerAnnotation_SetMaximumLineHeight, METH_VARARGS,
   (char*)"V.SetMaximumLineHeight(float)\nC++: void SetMaximumLineHeight(double a)\n\nSet/Get the maximum height of a line of text as a percentage of\nthe vertical area allocated to this scaled text actor. Defaults\nto 1.0\n"},
  {(char*)"GetMaximumLineHeight", PyvtkCornerAnnotation_GetMaximumLineHeight, METH_VARARGS,
   (char*)"V.GetMaximumLineHeight() -> float\nC++: double GetMaximumLineHeight()\n\nSet/Get the maximum height of a line of text as a percentage of\nthe vertical area allocated to this scaled text actor. Defaults\nto 1.0\n"},
  {(char*)"SetMinimumFontSize", PyvtkCornerAnnotation_SetMinimumFontSize, METH_VARARGS,
   (char*)"V.SetMinimumFontSize(int)\nC++: void SetMinimumFontSize(int a)\n\nSet/Get the minimum/maximum size font that will be shown. If the\nfont drops below the minimum size it will not be rendered.\n"},
  {(char*)"GetMinimumFontSize", PyvtkCornerAnnotation_GetMinimumFontSize, METH_VARARGS,
   (char*)"V.GetMinimumFontSize() -> int\nC++: int GetMinimumFontSize()\n\nSet/Get the minimum/maximum size font that will be shown. If the\nfont drops below the minimum size it will not be rendered.\n"},
  {(char*)"SetMaximumFontSize", PyvtkCornerAnnotation_SetMaximumFontSize, METH_VARARGS,
   (char*)"V.SetMaximumFontSize(int)\nC++: void SetMaximumFontSize(int a)\n\nSet/Get the minimum/maximum size font that will be shown. If the\nfont drops below the minimum size it will not be rendered.\n"},
  {(char*)"GetMaximumFontSize", PyvtkCornerAnnotation_GetMaximumFontSize, METH_VARARGS,
   (char*)"V.GetMaximumFontSize() -> int\nC++: int GetMaximumFontSize()\n\nSet/Get the minimum/maximum size font that will be shown. If the\nfont drops below the minimum size it will not be rendered.\n"},
  {(char*)"SetLinearFontScaleFactor", PyvtkCornerAnnotation_SetLinearFontScaleFactor, METH_VARARGS,
   (char*)"V.SetLinearFontScaleFactor(float)\nC++: void SetLinearFontScaleFactor(double a)\n\nSet/Get font scaling factors The font size, f, is calculated as\nthe largest possible value such that the annotations for the\ngiven viewport do not overlap. This font size is scaled\nnon-linearly with the viewport size, to maintain an acceptable\nreadable size at larger viewport sizes, without being too big. f'\n= linearScale * pow(f,nonlinearScale)\n"},
  {(char*)"GetLinearFontScaleFactor", PyvtkCornerAnnotation_GetLinearFontScaleFactor, METH_VARARGS,
   (char*)"V.GetLinearFontScaleFactor() -> float\nC++: double GetLinearFontScaleFactor()\n\nSet/Get font scaling factors The font size, f, is calculated as\nthe largest possible value such that the annotations for the\ngiven viewport do not overlap. This font size is scaled\nnon-linearly with the viewport size, to maintain an acceptable\nreadable size at larger viewport sizes, without being too big. f'\n= linearScale * pow(f,nonlinearScale)\n"},
  {(char*)"SetNonlinearFontScaleFactor", PyvtkCornerAnnotation_SetNonlinearFontScaleFactor, METH_VARARGS,
   (char*)"V.SetNonlinearFontScaleFactor(float)\nC++: void SetNonlinearFontScaleFactor(double a)\n\nSet/Get font scaling factors The font size, f, is calculated as\nthe largest possible value such that the annotations for the\ngiven viewport do not overlap. This font size is scaled\nnon-linearly with the viewport size, to maintain an acceptable\nreadable size at larger viewport sizes, without being too big. f'\n= linearScale * pow(f,nonlinearScale)\n"},
  {(char*)"GetNonlinearFontScaleFactor", PyvtkCornerAnnotation_GetNonlinearFontScaleFactor, METH_VARARGS,
   (char*)"V.GetNonlinearFontScaleFactor() -> float\nC++: double GetNonlinearFontScaleFactor()\n\nSet/Get font scaling factors The font size, f, is calculated as\nthe largest possible value such that the annotations for the\ngiven viewport do not overlap. This font size is scaled\nnon-linearly with the viewport size, to maintain an acceptable\nreadable size at larger viewport sizes, without being too big. f'\n= linearScale * pow(f,nonlinearScale)\n"},
  {(char*)"ReleaseGraphicsResources", PyvtkCornerAnnotation_ReleaseGraphicsResources, METH_VARARGS,
   (char*)"V.ReleaseGraphicsResources(vtkWindow)\nC++: virtual void ReleaseGraphicsResources(vtkWindow *)\n\nRelease any graphics resources that are being consumed by this\nactor. The parameter window could be used to determine which\ngraphic resources to release.\n"},
  {(char*)"SetText", PyvtkCornerAnnotation_SetText, METH_VARARGS,
   (char*)"V.SetText(int, string)\nC++: void SetText(int i, const char *text)\n\nSet/Get the text to be displayed for each corner\n"},
  {(char*)"GetText", PyvtkCornerAnnotation_GetText, METH_VARARGS,
   (char*)"V.GetText(int) -> string\nC++: const char *GetText(int i)\n\nSet/Get the text to be displayed for each corner\n"},
  {(char*)"ClearAllTexts", PyvtkCornerAnnotation_ClearAllTexts, METH_VARARGS,
   (char*)"V.ClearAllTexts()\nC++: void ClearAllTexts()\n\nSet/Get the text to be displayed for each corner\n"},
  {(char*)"CopyAllTextsFrom", PyvtkCornerAnnotation_CopyAllTextsFrom, METH_VARARGS,
   (char*)"V.CopyAllTextsFrom(vtkCornerAnnotation)\nC++: void CopyAllTextsFrom(vtkCornerAnnotation *ca)\n\nSet/Get the text to be displayed for each corner\n"},
  {(char*)"SetImageActor", PyvtkCornerAnnotation_SetImageActor, METH_VARARGS,
   (char*)"V.SetImageActor(vtkImageActor)\nC++: void SetImageActor(vtkImageActor *)\n\nSet an image actor to look at for slice information\n"},
  {(char*)"GetImageActor", PyvtkCornerAnnotation_GetImageActor, METH_VARARGS,
   (char*)"V.GetImageActor() -> vtkImageActor\nC++: vtkImageActor *GetImageActor()\n\nSet an image actor to look at for slice information\n"},
  {(char*)"SetWindowLevel", PyvtkCornerAnnotation_SetWindowLevel, METH_VARARGS,
   (char*)"V.SetWindowLevel(vtkImageMapToWindowLevelColors)\nC++: void SetWindowLevel(vtkImageMapToWindowLevelColors *)\n\nSet an instance of vtkImageMapToWindowLevelColors to use for\nlooking at window level changes\n"},
  {(char*)"GetWindowLevel", PyvtkCornerAnnotation_GetWindowLevel, METH_VARARGS,
   (char*)"V.GetWindowLevel() -> vtkImageMapToWindowLevelColors\nC++: vtkImageMapToWindowLevelColors *GetWindowLevel()\n\nSet an instance of vtkImageMapToWindowLevelColors to use for\nlooking at window level changes\n"},
  {(char*)"SetLevelShift", PyvtkCornerAnnotation_SetLevelShift, METH_VARARGS,
   (char*)"V.SetLevelShift(float)\nC++: void SetLevelShift(double a)\n\nSet the value to shift the level by.\n"},
  {(char*)"GetLevelShift", PyvtkCornerAnnotation_GetLevelShift, METH_VARARGS,
   (char*)"V.GetLevelShift() -> float\nC++: double GetLevelShift()\n\nSet the value to shift the level by.\n"},
  {(char*)"SetLevelScale", PyvtkCornerAnnotation_SetLevelScale, METH_VARARGS,
   (char*)"V.SetLevelScale(float)\nC++: void SetLevelScale(double a)\n\nSet the value to scale the level by.\n"},
  {(char*)"GetLevelScale", PyvtkCornerAnnotation_GetLevelScale, METH_VARARGS,
   (char*)"V.GetLevelScale() -> float\nC++: double GetLevelScale()\n\nSet the value to scale the level by.\n"},
  {(char*)"SetTextProperty", PyvtkCornerAnnotation_SetTextProperty, METH_VARARGS,
   (char*)"V.SetTextProperty(vtkTextProperty)\nC++: virtual void SetTextProperty(vtkTextProperty *p)\n\nSet/Get the text property of all corners.\n"},
  {(char*)"GetTextProperty", PyvtkCornerAnnotation_GetTextProperty, METH_VARARGS,
   (char*)"V.GetTextProperty() -> vtkTextProperty\nC++: vtkTextProperty *GetTextProperty()\n\nSet/Get the text property of all corners.\n"},
  {(char*)"ShowSliceAndImageOn", PyvtkCornerAnnotation_ShowSliceAndImageOn, METH_VARARGS,
   (char*)"V.ShowSliceAndImageOn()\nC++: void ShowSliceAndImageOn()\n\nEven if there is an image actor, should `slice' and `image' be\ndisplayed?\n"},
  {(char*)"ShowSliceAndImageOff", PyvtkCornerAnnotation_ShowSliceAndImageOff, METH_VARARGS,
   (char*)"V.ShowSliceAndImageOff()\nC++: void ShowSliceAndImageOff()\n\nEven if there is an image actor, should `slice' and `image' be\ndisplayed?\n"},
  {(char*)"SetShowSliceAndImage", PyvtkCornerAnnotation_SetShowSliceAndImage, METH_VARARGS,
   (char*)"V.SetShowSliceAndImage(int)\nC++: void SetShowSliceAndImage(int a)\n\nEven if there is an image actor, should `slice' and `image' be\ndisplayed?\n"},
  {(char*)"GetShowSliceAndImage", PyvtkCornerAnnotation_GetShowSliceAndImage, METH_VARARGS,
   (char*)"V.GetShowSliceAndImage() -> int\nC++: int GetShowSliceAndImage()\n\nEven if there is an image actor, should `slice' and `image' be\ndisplayed?\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkCornerAnnotation_StaticNew()
{
  return vtkCornerAnnotation::New();
}

PyObject *PyVTKClass_vtkCornerAnnotationNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkCornerAnnotation_StaticNew,
    PyvtkCornerAnnotation_Methods,
    "vtkCornerAnnotation", modulename,
    NULL, NULL,
    PyvtkCornerAnnotation_Doc(),
    PyVTKClass_vtkActor2DNew(modulename));
  return cls;
}

const char **PyvtkCornerAnnotation_Doc()
{
  static const char *docstring[] = {
    "vtkCornerAnnotation - text annotation in four corners\n\n",
    "Superclass: vtkActor2D\n\n",
    "This is an annotation object that manages four text actors / mappers\nto provide annotation in the four corners of a viewport\n\nSpecial input text:\n\n- : will be replaced with slice number (relative number)\n- : will be replaced with slice number (relative number)\n- <image_and_max> : will be replaced with slice number and slice max\n  (relative)\n- <slice_and_max> : will be replaced with slice number an",
    "d slice max\n  (relative)\n- <slice_pos> : will be replaced by the position of the current slice\n- : will be replaced with window value\n- : will be replaced with level value\n- <window_level> : will be replaced with window and level value\n\nSee Also:\n\nvtkActor2D vtkTextMapper\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkCornerAnnotation(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkCornerAnnotationNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkCornerAnnotation", o) != 0)
    {
    Py_DECREF(o);
    }

}

