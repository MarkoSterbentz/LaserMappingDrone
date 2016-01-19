// python wrapper for vtkScalarBarActor
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkScalarBarActor.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkScalarBarActor(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkScalarBarActorNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkActor2DNew
extern "C" { PyObject *PyVTKClass_vtkActor2DNew(const char *); }
#define DECLARED_PyVTKClass_vtkActor2DNew
#endif

static const char **PyvtkScalarBarActor_Doc();


static PyObject *
PyvtkScalarBarActor_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkScalarBarActor::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkScalarBarActor_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkScalarBarActor::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkScalarBarActor_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkScalarBarActor *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkScalarBarActor::NewInstance());

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
PyvtkScalarBarActor_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkScalarBarActor *tempr = vtkScalarBarActor::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkScalarBarActor_RenderOpaqueGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOpaqueGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  vtkViewport *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
    {
    int tempr = (ap.IsBound() ?
      op->RenderOpaqueGeometry(temp0) :
      op->vtkScalarBarActor::RenderOpaqueGeometry(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkScalarBarActor_RenderTranslucentPolygonalGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderTranslucentPolygonalGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  vtkViewport *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
    {
    int tempr = (ap.IsBound() ?
      op->RenderTranslucentPolygonalGeometry(temp0) :
      op->vtkScalarBarActor::RenderTranslucentPolygonalGeometry(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkScalarBarActor_RenderOverlay(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOverlay");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  vtkViewport *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
    {
    int tempr = (ap.IsBound() ?
      op->RenderOverlay(temp0) :
      op->vtkScalarBarActor::RenderOverlay(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkScalarBarActor_HasTranslucentPolygonalGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasTranslucentPolygonalGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->HasTranslucentPolygonalGeometry() :
      op->vtkScalarBarActor::HasTranslucentPolygonalGeometry());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkScalarBarActor_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

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
      op->vtkScalarBarActor::ReleaseGraphicsResources(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkScalarBarActor_GetScalarBarRect(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalarBarRect");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  int temp0[4];
  int save0[4];
  const int size0 = 4;
  vtkViewport *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetVTKObject(temp1, "vtkViewport"))
    {
    ap.SaveArray(temp0, save0, size0);

    if (ap.IsBound())
      {
      op->GetScalarBarRect(temp0, temp1);
      }
    else
      {
      op->vtkScalarBarActor::GetScalarBarRect(temp0, temp1);
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
PyvtkScalarBarActor_SetLookupTable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLookupTable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  vtkScalarsToColors *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkScalarsToColors"))
    {
    if (ap.IsBound())
      {
      op->SetLookupTable(temp0);
      }
    else
      {
      op->vtkScalarBarActor::SetLookupTable(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkScalarBarActor_GetLookupTable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLookupTable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkScalarsToColors *tempr = (ap.IsBound() ?
      op->GetLookupTable() :
      op->vtkScalarBarActor::GetLookupTable());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkScalarBarActor_SetUseOpacity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseOpacity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetUseOpacity(temp0);
      }
    else
      {
      op->vtkScalarBarActor::SetUseOpacity(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkScalarBarActor_GetUseOpacity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseOpacity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetUseOpacity() :
      op->vtkScalarBarActor::GetUseOpacity());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkScalarBarActor_UseOpacityOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseOpacityOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->UseOpacityOn();
      }
    else
      {
      op->vtkScalarBarActor::UseOpacityOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkScalarBarActor_UseOpacityOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseOpacityOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->UseOpacityOff();
      }
    else
      {
      op->vtkScalarBarActor::UseOpacityOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkScalarBarActor_SetMaximumNumberOfColors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaximumNumberOfColors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetMaximumNumberOfColors(temp0);
      }
    else
      {
      op->vtkScalarBarActor::SetMaximumNumberOfColors(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkScalarBarActor_GetMaximumNumberOfColorsMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumNumberOfColorsMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetMaximumNumberOfColorsMinValue() :
      op->vtkScalarBarActor::GetMaximumNumberOfColorsMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkScalarBarActor_GetMaximumNumberOfColorsMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumNumberOfColorsMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetMaximumNumberOfColorsMaxValue() :
      op->vtkScalarBarActor::GetMaximumNumberOfColorsMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkScalarBarActor_GetMaximumNumberOfColors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumNumberOfColors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetMaximumNumberOfColors() :
      op->vtkScalarBarActor::GetMaximumNumberOfColors());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkScalarBarActor_SetNumberOfLabels(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfLabels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetNumberOfLabels(temp0);
      }
    else
      {
      op->vtkScalarBarActor::SetNumberOfLabels(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkScalarBarActor_GetNumberOfLabelsMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfLabelsMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfLabelsMinValue() :
      op->vtkScalarBarActor::GetNumberOfLabelsMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkScalarBarActor_GetNumberOfLabelsMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfLabelsMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfLabelsMaxValue() :
      op->vtkScalarBarActor::GetNumberOfLabelsMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkScalarBarActor_GetNumberOfLabels(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfLabels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfLabels() :
      op->vtkScalarBarActor::GetNumberOfLabels());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkScalarBarActor_SetOrientation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOrientation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetOrientation(temp0);
      }
    else
      {
      op->vtkScalarBarActor::SetOrientation(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkScalarBarActor_GetOrientationMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOrientationMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetOrientationMinValue() :
      op->vtkScalarBarActor::GetOrientationMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkScalarBarActor_GetOrientationMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOrientationMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetOrientationMaxValue() :
      op->vtkScalarBarActor::GetOrientationMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkScalarBarActor_GetOrientation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOrientation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetOrientation() :
      op->vtkScalarBarActor::GetOrientation());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkScalarBarActor_SetOrientationToHorizontal(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOrientationToHorizontal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetOrientationToHorizontal();
      }
    else
      {
      op->vtkScalarBarActor::SetOrientationToHorizontal();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkScalarBarActor_SetOrientationToVertical(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOrientationToVertical");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetOrientationToVertical();
      }
    else
      {
      op->vtkScalarBarActor::SetOrientationToVertical();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkScalarBarActor_SetTitleTextProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTitleTextProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  vtkTextProperty *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkTextProperty"))
    {
    if (ap.IsBound())
      {
      op->SetTitleTextProperty(temp0);
      }
    else
      {
      op->vtkScalarBarActor::SetTitleTextProperty(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkScalarBarActor_GetTitleTextProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTitleTextProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkTextProperty *tempr = (ap.IsBound() ?
      op->GetTitleTextProperty() :
      op->vtkScalarBarActor::GetTitleTextProperty());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkScalarBarActor_SetLabelTextProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLabelTextProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  vtkTextProperty *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkTextProperty"))
    {
    if (ap.IsBound())
      {
      op->SetLabelTextProperty(temp0);
      }
    else
      {
      op->vtkScalarBarActor::SetLabelTextProperty(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkScalarBarActor_GetLabelTextProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLabelTextProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkTextProperty *tempr = (ap.IsBound() ?
      op->GetLabelTextProperty() :
      op->vtkScalarBarActor::GetLabelTextProperty());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkScalarBarActor_SetLabelFormat(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLabelFormat");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetLabelFormat(temp0);
      }
    else
      {
      op->vtkScalarBarActor::SetLabelFormat(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkScalarBarActor_GetLabelFormat(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLabelFormat");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetLabelFormat() :
      op->vtkScalarBarActor::GetLabelFormat());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkScalarBarActor_SetTitle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTitle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetTitle(temp0);
      }
    else
      {
      op->vtkScalarBarActor::SetTitle(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkScalarBarActor_GetTitle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTitle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetTitle() :
      op->vtkScalarBarActor::GetTitle());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkScalarBarActor_SetComponentTitle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetComponentTitle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetComponentTitle(temp0);
      }
    else
      {
      op->vtkScalarBarActor::SetComponentTitle(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkScalarBarActor_GetComponentTitle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetComponentTitle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetComponentTitle() :
      op->vtkScalarBarActor::GetComponentTitle());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkScalarBarActor_ShallowCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShallowCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

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
      op->vtkScalarBarActor::ShallowCopy(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkScalarBarActor_SetTextureGridWidth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTextureGridWidth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetTextureGridWidth(temp0);
      }
    else
      {
      op->vtkScalarBarActor::SetTextureGridWidth(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkScalarBarActor_GetTextureGridWidth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTextureGridWidth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetTextureGridWidth() :
      op->vtkScalarBarActor::GetTextureGridWidth());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkScalarBarActor_GetTextureActor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTextureActor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkTexturedActor2D *tempr = (ap.IsBound() ?
      op->GetTextureActor() :
      op->vtkScalarBarActor::GetTextureActor());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkScalarBarActor_SetTextPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTextPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetTextPosition(temp0);
      }
    else
      {
      op->vtkScalarBarActor::SetTextPosition(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkScalarBarActor_GetTextPositionMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTextPositionMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetTextPositionMinValue() :
      op->vtkScalarBarActor::GetTextPositionMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkScalarBarActor_GetTextPositionMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTextPositionMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetTextPositionMaxValue() :
      op->vtkScalarBarActor::GetTextPositionMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkScalarBarActor_GetTextPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTextPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetTextPosition() :
      op->vtkScalarBarActor::GetTextPosition());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkScalarBarActor_SetTextPositionToPrecedeScalarBar(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTextPositionToPrecedeScalarBar");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetTextPositionToPrecedeScalarBar();
      }
    else
      {
      op->vtkScalarBarActor::SetTextPositionToPrecedeScalarBar();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkScalarBarActor_SetTextPositionToSucceedScalarBar(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTextPositionToSucceedScalarBar");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetTextPositionToSucceedScalarBar();
      }
    else
      {
      op->vtkScalarBarActor::SetTextPositionToSucceedScalarBar();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkScalarBarActor_SetMaximumWidthInPixels(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaximumWidthInPixels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetMaximumWidthInPixels(temp0);
      }
    else
      {
      op->vtkScalarBarActor::SetMaximumWidthInPixels(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkScalarBarActor_GetMaximumWidthInPixels(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumWidthInPixels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetMaximumWidthInPixels() :
      op->vtkScalarBarActor::GetMaximumWidthInPixels());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkScalarBarActor_SetMaximumHeightInPixels(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaximumHeightInPixels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetMaximumHeightInPixels(temp0);
      }
    else
      {
      op->vtkScalarBarActor::SetMaximumHeightInPixels(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkScalarBarActor_GetMaximumHeightInPixels(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumHeightInPixels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetMaximumHeightInPixels() :
      op->vtkScalarBarActor::GetMaximumHeightInPixels());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkScalarBarActor_SetAnnotationLeaderPadding(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAnnotationLeaderPadding");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetAnnotationLeaderPadding(temp0);
      }
    else
      {
      op->vtkScalarBarActor::SetAnnotationLeaderPadding(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkScalarBarActor_GetAnnotationLeaderPadding(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAnnotationLeaderPadding");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetAnnotationLeaderPadding() :
      op->vtkScalarBarActor::GetAnnotationLeaderPadding());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkScalarBarActor_SetDrawAnnotations(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDrawAnnotations");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetDrawAnnotations(temp0);
      }
    else
      {
      op->vtkScalarBarActor::SetDrawAnnotations(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkScalarBarActor_GetDrawAnnotations(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDrawAnnotations");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetDrawAnnotations() :
      op->vtkScalarBarActor::GetDrawAnnotations());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkScalarBarActor_DrawAnnotationsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawAnnotationsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->DrawAnnotationsOn();
      }
    else
      {
      op->vtkScalarBarActor::DrawAnnotationsOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkScalarBarActor_DrawAnnotationsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawAnnotationsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->DrawAnnotationsOff();
      }
    else
      {
      op->vtkScalarBarActor::DrawAnnotationsOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkScalarBarActor_SetDrawNanAnnotation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDrawNanAnnotation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetDrawNanAnnotation(temp0);
      }
    else
      {
      op->vtkScalarBarActor::SetDrawNanAnnotation(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkScalarBarActor_GetDrawNanAnnotation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDrawNanAnnotation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetDrawNanAnnotation() :
      op->vtkScalarBarActor::GetDrawNanAnnotation());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkScalarBarActor_DrawNanAnnotationOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawNanAnnotationOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->DrawNanAnnotationOn();
      }
    else
      {
      op->vtkScalarBarActor::DrawNanAnnotationOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkScalarBarActor_DrawNanAnnotationOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawNanAnnotationOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->DrawNanAnnotationOff();
      }
    else
      {
      op->vtkScalarBarActor::DrawNanAnnotationOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkScalarBarActor_SetFixedAnnotationLeaderLineColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFixedAnnotationLeaderLineColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetFixedAnnotationLeaderLineColor(temp0);
      }
    else
      {
      op->vtkScalarBarActor::SetFixedAnnotationLeaderLineColor(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkScalarBarActor_GetFixedAnnotationLeaderLineColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFixedAnnotationLeaderLineColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetFixedAnnotationLeaderLineColor() :
      op->vtkScalarBarActor::GetFixedAnnotationLeaderLineColor());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkScalarBarActor_FixedAnnotationLeaderLineColorOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FixedAnnotationLeaderLineColorOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->FixedAnnotationLeaderLineColorOn();
      }
    else
      {
      op->vtkScalarBarActor::FixedAnnotationLeaderLineColorOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkScalarBarActor_FixedAnnotationLeaderLineColorOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FixedAnnotationLeaderLineColorOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->FixedAnnotationLeaderLineColorOff();
      }
    else
      {
      op->vtkScalarBarActor::FixedAnnotationLeaderLineColorOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkScalarBarActor_SetNanAnnotation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNanAnnotation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetNanAnnotation(temp0);
      }
    else
      {
      op->vtkScalarBarActor::SetNanAnnotation(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkScalarBarActor_GetNanAnnotation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNanAnnotation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetNanAnnotation() :
      op->vtkScalarBarActor::GetNanAnnotation());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkScalarBarActor_SetAnnotationTextScaling(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAnnotationTextScaling");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetAnnotationTextScaling(temp0);
      }
    else
      {
      op->vtkScalarBarActor::SetAnnotationTextScaling(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkScalarBarActor_GetAnnotationTextScaling(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAnnotationTextScaling");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetAnnotationTextScaling() :
      op->vtkScalarBarActor::GetAnnotationTextScaling());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkScalarBarActor_SetDrawBackground(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDrawBackground");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetDrawBackground(temp0);
      }
    else
      {
      op->vtkScalarBarActor::SetDrawBackground(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkScalarBarActor_GetDrawBackground(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDrawBackground");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetDrawBackground() :
      op->vtkScalarBarActor::GetDrawBackground());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkScalarBarActor_DrawBackgroundOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawBackgroundOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->DrawBackgroundOn();
      }
    else
      {
      op->vtkScalarBarActor::DrawBackgroundOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkScalarBarActor_DrawBackgroundOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawBackgroundOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->DrawBackgroundOff();
      }
    else
      {
      op->vtkScalarBarActor::DrawBackgroundOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkScalarBarActor_SetDrawFrame(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDrawFrame");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetDrawFrame(temp0);
      }
    else
      {
      op->vtkScalarBarActor::SetDrawFrame(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkScalarBarActor_GetDrawFrame(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDrawFrame");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetDrawFrame() :
      op->vtkScalarBarActor::GetDrawFrame());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkScalarBarActor_DrawFrameOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawFrameOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->DrawFrameOn();
      }
    else
      {
      op->vtkScalarBarActor::DrawFrameOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkScalarBarActor_DrawFrameOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawFrameOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->DrawFrameOff();
      }
    else
      {
      op->vtkScalarBarActor::DrawFrameOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkScalarBarActor_SetDrawColorBar(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDrawColorBar");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetDrawColorBar(temp0);
      }
    else
      {
      op->vtkScalarBarActor::SetDrawColorBar(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkScalarBarActor_GetDrawColorBar(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDrawColorBar");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetDrawColorBar() :
      op->vtkScalarBarActor::GetDrawColorBar());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkScalarBarActor_DrawColorBarOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawColorBarOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->DrawColorBarOn();
      }
    else
      {
      op->vtkScalarBarActor::DrawColorBarOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkScalarBarActor_DrawColorBarOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawColorBarOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->DrawColorBarOff();
      }
    else
      {
      op->vtkScalarBarActor::DrawColorBarOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkScalarBarActor_SetDrawTickLabels(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDrawTickLabels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetDrawTickLabels(temp0);
      }
    else
      {
      op->vtkScalarBarActor::SetDrawTickLabels(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkScalarBarActor_GetDrawTickLabels(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDrawTickLabels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetDrawTickLabels() :
      op->vtkScalarBarActor::GetDrawTickLabels());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkScalarBarActor_DrawTickLabelsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawTickLabelsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->DrawTickLabelsOn();
      }
    else
      {
      op->vtkScalarBarActor::DrawTickLabelsOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkScalarBarActor_DrawTickLabelsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawTickLabelsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->DrawTickLabelsOff();
      }
    else
      {
      op->vtkScalarBarActor::DrawTickLabelsOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkScalarBarActor_SetBackgroundProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBackgroundProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  vtkProperty2D *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkProperty2D"))
    {
    if (ap.IsBound())
      {
      op->SetBackgroundProperty(temp0);
      }
    else
      {
      op->vtkScalarBarActor::SetBackgroundProperty(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkScalarBarActor_GetBackgroundProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBackgroundProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkProperty2D *tempr = (ap.IsBound() ?
      op->GetBackgroundProperty() :
      op->vtkScalarBarActor::GetBackgroundProperty());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkScalarBarActor_SetFrameProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFrameProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  vtkProperty2D *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkProperty2D"))
    {
    if (ap.IsBound())
      {
      op->SetFrameProperty(temp0);
      }
    else
      {
      op->vtkScalarBarActor::SetFrameProperty(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkScalarBarActor_GetFrameProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFrameProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkProperty2D *tempr = (ap.IsBound() ?
      op->GetFrameProperty() :
      op->vtkScalarBarActor::GetFrameProperty());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkScalarBarActor_GetTextPad(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTextPad");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetTextPad() :
      op->vtkScalarBarActor::GetTextPad());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkScalarBarActor_SetTextPad(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTextPad");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetTextPad(temp0);
      }
    else
      {
      op->vtkScalarBarActor::SetTextPad(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkScalarBarActor_GetVerticalTitleSeparation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVerticalTitleSeparation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetVerticalTitleSeparation() :
      op->vtkScalarBarActor::GetVerticalTitleSeparation());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkScalarBarActor_SetVerticalTitleSeparation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVerticalTitleSeparation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetVerticalTitleSeparation(temp0);
      }
    else
      {
      op->vtkScalarBarActor::SetVerticalTitleSeparation(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkScalarBarActor_GetBarRatio(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBarRatio");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetBarRatio() :
      op->vtkScalarBarActor::GetBarRatio());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkScalarBarActor_SetBarRatio(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBarRatio");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetBarRatio(temp0);
      }
    else
      {
      op->vtkScalarBarActor::SetBarRatio(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkScalarBarActor_GetBarRatioMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBarRatioMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetBarRatioMinValue() :
      op->vtkScalarBarActor::GetBarRatioMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkScalarBarActor_GetBarRatioMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBarRatioMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetBarRatioMaxValue() :
      op->vtkScalarBarActor::GetBarRatioMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkScalarBarActor_GetTitleRatio(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTitleRatio");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetTitleRatio() :
      op->vtkScalarBarActor::GetTitleRatio());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkScalarBarActor_SetTitleRatio(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTitleRatio");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetTitleRatio(temp0);
      }
    else
      {
      op->vtkScalarBarActor::SetTitleRatio(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkScalarBarActor_GetTitleRatioMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTitleRatioMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetTitleRatioMinValue() :
      op->vtkScalarBarActor::GetTitleRatioMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkScalarBarActor_GetTitleRatioMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTitleRatioMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetTitleRatioMaxValue() :
      op->vtkScalarBarActor::GetTitleRatioMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkScalarBarActor_Methods[] = {
  {(char*)"GetClassName", PyvtkScalarBarActor_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkScalarBarActor_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkScalarBarActor_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkScalarBarActor\nC++: vtkScalarBarActor *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkScalarBarActor_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkScalarBarActor\nC++: vtkScalarBarActor *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"RenderOpaqueGeometry", PyvtkScalarBarActor_RenderOpaqueGeometry, METH_VARARGS,
   (char*)"V.RenderOpaqueGeometry(vtkViewport) -> int\nC++: int RenderOpaqueGeometry(vtkViewport *viewport)\n\nDraw the scalar bar and annotation text to the screen.\n"},
  {(char*)"RenderTranslucentPolygonalGeometry", PyvtkScalarBarActor_RenderTranslucentPolygonalGeometry, METH_VARARGS,
   (char*)"V.RenderTranslucentPolygonalGeometry(vtkViewport) -> int\nC++: virtual int RenderTranslucentPolygonalGeometry(vtkViewport *)\n\nDraw the scalar bar and annotation text to the screen.\n"},
  {(char*)"RenderOverlay", PyvtkScalarBarActor_RenderOverlay, METH_VARARGS,
   (char*)"V.RenderOverlay(vtkViewport) -> int\nC++: int RenderOverlay(vtkViewport *viewport)\n\nDraw the scalar bar and annotation text to the screen.\n"},
  {(char*)"HasTranslucentPolygonalGeometry", PyvtkScalarBarActor_HasTranslucentPolygonalGeometry, METH_VARARGS,
   (char*)"V.HasTranslucentPolygonalGeometry() -> int\nC++: virtual int HasTranslucentPolygonalGeometry()\n\nDoes this prop have some translucent polygonal geometry?\n"},
  {(char*)"ReleaseGraphicsResources", PyvtkScalarBarActor_ReleaseGraphicsResources, METH_VARARGS,
   (char*)"V.ReleaseGraphicsResources(vtkWindow)\nC++: virtual void ReleaseGraphicsResources(vtkWindow *)\n\nRelease any graphics resources that are being consumed by this\nactor. The parameter window could be used to determine which\ngraphic resources to release.\n"},
  {(char*)"GetScalarBarRect", PyvtkScalarBarActor_GetScalarBarRect, METH_VARARGS,
   (char*)"V.GetScalarBarRect([int, int, int, int], vtkViewport)\nC++: virtual void GetScalarBarRect(int rect[4],\n    vtkViewport *viewport)\n\nFills rect with the dimensions of the scalar bar in viewport\ncoordinates. Only the color bar is considered -- text labels are\nnot considered. rect is {xmin, xmax, width, height}\n"},
  {(char*)"SetLookupTable", PyvtkScalarBarActor_SetLookupTable, METH_VARARGS,
   (char*)"V.SetLookupTable(vtkScalarsToColors)\nC++: virtual void SetLookupTable(vtkScalarsToColors *)\n\nSet/Get the lookup table to use. The lookup table specifies the\nnumber of colors to use in the table (if not overridden), the\nscalar range, and any annotated values. Annotated values are\nrendered using vtkTextActor.\n"},
  {(char*)"GetLookupTable", PyvtkScalarBarActor_GetLookupTable, METH_VARARGS,
   (char*)"V.GetLookupTable() -> vtkScalarsToColors\nC++: vtkScalarsToColors *GetLookupTable()\n\nSet/Get the lookup table to use. The lookup table specifies the\nnumber of colors to use in the table (if not overridden), the\nscalar range, and any annotated values. Annotated values are\nrendered using vtkTextActor.\n"},
  {(char*)"SetUseOpacity", PyvtkScalarBarActor_SetUseOpacity, METH_VARARGS,
   (char*)"V.SetUseOpacity(int)\nC++: void SetUseOpacity(int a)\n\nShould be display the opacity as well. This is displayed by\nchanging the opacity of the scalar bar in accordance with the\nopacity of the given color. For clarity, a texture grid is placed\nin the background if Opacity is ON. You might also want to play\nwith SetTextureGridWith in that case. [Default: off]\n"},
  {(char*)"GetUseOpacity", PyvtkScalarBarActor_GetUseOpacity, METH_VARARGS,
   (char*)"V.GetUseOpacity() -> int\nC++: int GetUseOpacity()\n\nShould be display the opacity as well. This is displayed by\nchanging the opacity of the scalar bar in accordance with the\nopacity of the given color. For clarity, a texture grid is placed\nin the background if Opacity is ON. You might also want to play\nwith SetTextureGridWith in that case. [Default: off]\n"},
  {(char*)"UseOpacityOn", PyvtkScalarBarActor_UseOpacityOn, METH_VARARGS,
   (char*)"V.UseOpacityOn()\nC++: void UseOpacityOn()\n\nShould be display the opacity as well. This is displayed by\nchanging the opacity of the scalar bar in accordance with the\nopacity of the given color. For clarity, a texture grid is placed\nin the background if Opacity is ON. You might also want to play\nwith SetTextureGridWith in that case. [Default: off]\n"},
  {(char*)"UseOpacityOff", PyvtkScalarBarActor_UseOpacityOff, METH_VARARGS,
   (char*)"V.UseOpacityOff()\nC++: void UseOpacityOff()\n\nShould be display the opacity as well. This is displayed by\nchanging the opacity of the scalar bar in accordance with the\nopacity of the given color. For clarity, a texture grid is placed\nin the background if Opacity is ON. You might also want to play\nwith SetTextureGridWith in that case. [Default: off]\n"},
  {(char*)"SetMaximumNumberOfColors", PyvtkScalarBarActor_SetMaximumNumberOfColors, METH_VARARGS,
   (char*)"V.SetMaximumNumberOfColors(int)\nC++: void SetMaximumNumberOfColors(int)\n\nSet/Get the maximum number of scalar bar segments to show. This\nmay differ from the number of colors in the lookup table, in\nwhich case the colors are samples from the lookup table.\n"},
  {(char*)"GetMaximumNumberOfColorsMinValue", PyvtkScalarBarActor_GetMaximumNumberOfColorsMinValue, METH_VARARGS,
   (char*)"V.GetMaximumNumberOfColorsMinValue() -> int\nC++: int GetMaximumNumberOfColorsMinValue()\n\nSet/Get the maximum number of scalar bar segments to show. This\nmay differ from the number of colors in the lookup table, in\nwhich case the colors are samples from the lookup table.\n"},
  {(char*)"GetMaximumNumberOfColorsMaxValue", PyvtkScalarBarActor_GetMaximumNumberOfColorsMaxValue, METH_VARARGS,
   (char*)"V.GetMaximumNumberOfColorsMaxValue() -> int\nC++: int GetMaximumNumberOfColorsMaxValue()\n\nSet/Get the maximum number of scalar bar segments to show. This\nmay differ from the number of colors in the lookup table, in\nwhich case the colors are samples from the lookup table.\n"},
  {(char*)"GetMaximumNumberOfColors", PyvtkScalarBarActor_GetMaximumNumberOfColors, METH_VARARGS,
   (char*)"V.GetMaximumNumberOfColors() -> int\nC++: int GetMaximumNumberOfColors()\n\nSet/Get the maximum number of scalar bar segments to show. This\nmay differ from the number of colors in the lookup table, in\nwhich case the colors are samples from the lookup table.\n"},
  {(char*)"SetNumberOfLabels", PyvtkScalarBarActor_SetNumberOfLabels, METH_VARARGS,
   (char*)"V.SetNumberOfLabels(int)\nC++: void SetNumberOfLabels(int)\n\nSet/Get the number of tick labels to show.\n"},
  {(char*)"GetNumberOfLabelsMinValue", PyvtkScalarBarActor_GetNumberOfLabelsMinValue, METH_VARARGS,
   (char*)"V.GetNumberOfLabelsMinValue() -> int\nC++: int GetNumberOfLabelsMinValue()\n\nSet/Get the number of tick labels to show.\n"},
  {(char*)"GetNumberOfLabelsMaxValue", PyvtkScalarBarActor_GetNumberOfLabelsMaxValue, METH_VARARGS,
   (char*)"V.GetNumberOfLabelsMaxValue() -> int\nC++: int GetNumberOfLabelsMaxValue()\n\nSet/Get the number of tick labels to show.\n"},
  {(char*)"GetNumberOfLabels", PyvtkScalarBarActor_GetNumberOfLabels, METH_VARARGS,
   (char*)"V.GetNumberOfLabels() -> int\nC++: int GetNumberOfLabels()\n\nSet/Get the number of tick labels to show.\n"},
  {(char*)"SetOrientation", PyvtkScalarBarActor_SetOrientation, METH_VARARGS,
   (char*)"V.SetOrientation(int)\nC++: void SetOrientation(int)\n\nControl the orientation of the scalar bar.\n"},
  {(char*)"GetOrientationMinValue", PyvtkScalarBarActor_GetOrientationMinValue, METH_VARARGS,
   (char*)"V.GetOrientationMinValue() -> int\nC++: int GetOrientationMinValue()\n\nControl the orientation of the scalar bar.\n"},
  {(char*)"GetOrientationMaxValue", PyvtkScalarBarActor_GetOrientationMaxValue, METH_VARARGS,
   (char*)"V.GetOrientationMaxValue() -> int\nC++: int GetOrientationMaxValue()\n\nControl the orientation of the scalar bar.\n"},
  {(char*)"GetOrientation", PyvtkScalarBarActor_GetOrientation, METH_VARARGS,
   (char*)"V.GetOrientation() -> int\nC++: int GetOrientation()\n\nControl the orientation of the scalar bar.\n"},
  {(char*)"SetOrientationToHorizontal", PyvtkScalarBarActor_SetOrientationToHorizontal, METH_VARARGS,
   (char*)"V.SetOrientationToHorizontal()\nC++: void SetOrientationToHorizontal()\n\nControl the orientation of the scalar bar.\n"},
  {(char*)"SetOrientationToVertical", PyvtkScalarBarActor_SetOrientationToVertical, METH_VARARGS,
   (char*)"V.SetOrientationToVertical()\nC++: void SetOrientationToVertical()\n\nControl the orientation of the scalar bar.\n"},
  {(char*)"SetTitleTextProperty", PyvtkScalarBarActor_SetTitleTextProperty, METH_VARARGS,
   (char*)"V.SetTitleTextProperty(vtkTextProperty)\nC++: virtual void SetTitleTextProperty(vtkTextProperty *p)\n\nSet/Get the title text property.\n"},
  {(char*)"GetTitleTextProperty", PyvtkScalarBarActor_GetTitleTextProperty, METH_VARARGS,
   (char*)"V.GetTitleTextProperty() -> vtkTextProperty\nC++: vtkTextProperty *GetTitleTextProperty()\n\nSet/Get the title text property.\n"},
  {(char*)"SetLabelTextProperty", PyvtkScalarBarActor_SetLabelTextProperty, METH_VARARGS,
   (char*)"V.SetLabelTextProperty(vtkTextProperty)\nC++: virtual void SetLabelTextProperty(vtkTextProperty *p)\n\nSet/Get the labels text property.\n"},
  {(char*)"GetLabelTextProperty", PyvtkScalarBarActor_GetLabelTextProperty, METH_VARARGS,
   (char*)"V.GetLabelTextProperty() -> vtkTextProperty\nC++: vtkTextProperty *GetLabelTextProperty()\n\nSet/Get the labels text property.\n"},
  {(char*)"SetLabelFormat", PyvtkScalarBarActor_SetLabelFormat, METH_VARARGS,
   (char*)"V.SetLabelFormat(string)\nC++: void SetLabelFormat(char *)\n\nSet/Get the format with which to print the labels on the scalar\nbar.\n"},
  {(char*)"GetLabelFormat", PyvtkScalarBarActor_GetLabelFormat, METH_VARARGS,
   (char*)"V.GetLabelFormat() -> string\nC++: char *GetLabelFormat()\n\nSet/Get the format with which to print the labels on the scalar\nbar.\n"},
  {(char*)"SetTitle", PyvtkScalarBarActor_SetTitle, METH_VARARGS,
   (char*)"V.SetTitle(string)\nC++: void SetTitle(char *)\n\nSet/Get the title of the scalar bar actor,\n"},
  {(char*)"GetTitle", PyvtkScalarBarActor_GetTitle, METH_VARARGS,
   (char*)"V.GetTitle() -> string\nC++: char *GetTitle()\n\nSet/Get the title of the scalar bar actor,\n"},
  {(char*)"SetComponentTitle", PyvtkScalarBarActor_SetComponentTitle, METH_VARARGS,
   (char*)"V.SetComponentTitle(string)\nC++: void SetComponentTitle(char *)\n\nSet/Get the title for the component that is selected,\n"},
  {(char*)"GetComponentTitle", PyvtkScalarBarActor_GetComponentTitle, METH_VARARGS,
   (char*)"V.GetComponentTitle() -> string\nC++: char *GetComponentTitle()\n\nSet/Get the title for the component that is selected,\n"},
  {(char*)"ShallowCopy", PyvtkScalarBarActor_ShallowCopy, METH_VARARGS,
   (char*)"V.ShallowCopy(vtkProp)\nC++: void ShallowCopy(vtkProp *prop)\n\nShallow copy of a scalar bar actor. Overloads the virtual vtkProp\nmethod.\n"},
  {(char*)"SetTextureGridWidth", PyvtkScalarBarActor_SetTextureGridWidth, METH_VARARGS,
   (char*)"V.SetTextureGridWidth(float)\nC++: void SetTextureGridWidth(double a)\n\nSet the width of the texture grid. Used only if UseOpacity is ON.\n"},
  {(char*)"GetTextureGridWidth", PyvtkScalarBarActor_GetTextureGridWidth, METH_VARARGS,
   (char*)"V.GetTextureGridWidth() -> float\nC++: double GetTextureGridWidth()\n\nSet the width of the texture grid. Used only if UseOpacity is ON.\n"},
  {(char*)"GetTextureActor", PyvtkScalarBarActor_GetTextureActor, METH_VARARGS,
   (char*)"V.GetTextureActor() -> vtkTexturedActor2D\nC++: vtkTexturedActor2D *GetTextureActor()\n\nGet the texture actor.. you may want to change some properties on\nit\n"},
  {(char*)"SetTextPosition", PyvtkScalarBarActor_SetTextPosition, METH_VARARGS,
   (char*)"V.SetTextPosition(int)\nC++: void SetTextPosition(int)\n\nShould the title and tick marks precede the scalar bar or succeed\nit? This is measured along the viewport coordinate direction\nperpendicular to the long axis of the scalar bar, not the reading\ndirection. Thus, succeed implies the that the text is above\nscalar bar if the orientation is horizontal or right of scalar\nbar if the orientation is vertical. Precede is the opposite.\n"},
  {(char*)"GetTextPositionMinValue", PyvtkScalarBarActor_GetTextPositionMinValue, METH_VARARGS,
   (char*)"V.GetTextPositionMinValue() -> int\nC++: int GetTextPositionMinValue()\n\nShould the title and tick marks precede the scalar bar or succeed\nit? This is measured along the viewport coordinate direction\nperpendicular to the long axis of the scalar bar, not the reading\ndirection. Thus, succeed implies the that the text is above\nscalar bar if the orientation is horizontal or right of scalar\nbar if the orientation is vertical. Precede is the opposite.\n"},
  {(char*)"GetTextPositionMaxValue", PyvtkScalarBarActor_GetTextPositionMaxValue, METH_VARARGS,
   (char*)"V.GetTextPositionMaxValue() -> int\nC++: int GetTextPositionMaxValue()\n\nShould the title and tick marks precede the scalar bar or succeed\nit? This is measured along the viewport coordinate direction\nperpendicular to the long axis of the scalar bar, not the reading\ndirection. Thus, succeed implies the that the text is above\nscalar bar if the orientation is horizontal or right of scalar\nbar if the orientation is vertical. Precede is the opposite.\n"},
  {(char*)"GetTextPosition", PyvtkScalarBarActor_GetTextPosition, METH_VARARGS,
   (char*)"V.GetTextPosition() -> int\nC++: int GetTextPosition()\n\nShould the title and tick marks precede the scalar bar or succeed\nit? This is measured along the viewport coordinate direction\nperpendicular to the long axis of the scalar bar, not the reading\ndirection. Thus, succeed implies the that the text is above\nscalar bar if the orientation is horizontal or right of scalar\nbar if the orientation is vertical. Precede is the opposite.\n"},
  {(char*)"SetTextPositionToPrecedeScalarBar", PyvtkScalarBarActor_SetTextPositionToPrecedeScalarBar, METH_VARARGS,
   (char*)"V.SetTextPositionToPrecedeScalarBar()\nC++: virtual void SetTextPositionToPrecedeScalarBar()\n\nShould the title and tick marks precede the scalar bar or succeed\nit? This is measured along the viewport coordinate direction\nperpendicular to the long axis of the scalar bar, not the reading\ndirection. Thus, succeed implies the that the text is above\nscalar bar if the orientation is horizontal or right of scalar\nbar if the orientation is vertical. Precede is the opposite.\n"},
  {(char*)"SetTextPositionToSucceedScalarBar", PyvtkScalarBarActor_SetTextPositionToSucceedScalarBar, METH_VARARGS,
   (char*)"V.SetTextPositionToSucceedScalarBar()\nC++: virtual void SetTextPositionToSucceedScalarBar()\n\nShould the title and tick marks precede the scalar bar or succeed\nit? This is measured along the viewport coordinate direction\nperpendicular to the long axis of the scalar bar, not the reading\ndirection. Thus, succeed implies the that the text is above\nscalar bar if the orientation is horizontal or right of scalar\nbar if the orientation is vertical. Precede is the opposite.\n"},
  {(char*)"SetMaximumWidthInPixels", PyvtkScalarBarActor_SetMaximumWidthInPixels, METH_VARARGS,
   (char*)"V.SetMaximumWidthInPixels(int)\nC++: void SetMaximumWidthInPixels(int a)\n\nSet/Get the maximum width and height in pixels. Specifying the\nsize as a relative fraction of the viewport can sometimes\nundesirably stretch the size of the actor too much. These methods\nallow the user to set bounds on the maximum size of the scalar\nbar in pixels along any direction. Defaults to unbounded.\n"},
  {(char*)"GetMaximumWidthInPixels", PyvtkScalarBarActor_GetMaximumWidthInPixels, METH_VARARGS,
   (char*)"V.GetMaximumWidthInPixels() -> int\nC++: int GetMaximumWidthInPixels()\n\nSet/Get the maximum width and height in pixels. Specifying the\nsize as a relative fraction of the viewport can sometimes\nundesirably stretch the size of the actor too much. These methods\nallow the user to set bounds on the maximum size of the scalar\nbar in pixels along any direction. Defaults to unbounded.\n"},
  {(char*)"SetMaximumHeightInPixels", PyvtkScalarBarActor_SetMaximumHeightInPixels, METH_VARARGS,
   (char*)"V.SetMaximumHeightInPixels(int)\nC++: void SetMaximumHeightInPixels(int a)\n\nSet/Get the maximum width and height in pixels. Specifying the\nsize as a relative fraction of the viewport can sometimes\nundesirably stretch the size of the actor too much. These methods\nallow the user to set bounds on the maximum size of the scalar\nbar in pixels along any direction. Defaults to unbounded.\n"},
  {(char*)"GetMaximumHeightInPixels", PyvtkScalarBarActor_GetMaximumHeightInPixels, METH_VARARGS,
   (char*)"V.GetMaximumHeightInPixels() -> int\nC++: int GetMaximumHeightInPixels()\n\nSet/Get the maximum width and height in pixels. Specifying the\nsize as a relative fraction of the viewport can sometimes\nundesirably stretch the size of the actor too much. These methods\nallow the user to set bounds on the maximum size of the scalar\nbar in pixels along any direction. Defaults to unbounded.\n"},
  {(char*)"SetAnnotationLeaderPadding", PyvtkScalarBarActor_SetAnnotationLeaderPadding, METH_VARARGS,
   (char*)"V.SetAnnotationLeaderPadding(float)\nC++: void SetAnnotationLeaderPadding(double a)\n\nSet/get the padding between the scalar bar and the text\nannotations. This space is used to draw leader lines. The default\nis 8 pixels.\n"},
  {(char*)"GetAnnotationLeaderPadding", PyvtkScalarBarActor_GetAnnotationLeaderPadding, METH_VARARGS,
   (char*)"V.GetAnnotationLeaderPadding() -> float\nC++: double GetAnnotationLeaderPadding()\n\nSet/get the padding between the scalar bar and the text\nannotations. This space is used to draw leader lines. The default\nis 8 pixels.\n"},
  {(char*)"SetDrawAnnotations", PyvtkScalarBarActor_SetDrawAnnotations, METH_VARARGS,
   (char*)"V.SetDrawAnnotations(int)\nC++: void SetDrawAnnotations(int a)\n\nSet/get whether text annotations should be rendered or not.\nCurrently, this only affects rendering when IndexedLookup is\ntrue. The default is true.\n"},
  {(char*)"GetDrawAnnotations", PyvtkScalarBarActor_GetDrawAnnotations, METH_VARARGS,
   (char*)"V.GetDrawAnnotations() -> int\nC++: int GetDrawAnnotations()\n\nSet/get whether text annotations should be rendered or not.\nCurrently, this only affects rendering when IndexedLookup is\ntrue. The default is true.\n"},
  {(char*)"DrawAnnotationsOn", PyvtkScalarBarActor_DrawAnnotationsOn, METH_VARARGS,
   (char*)"V.DrawAnnotationsOn()\nC++: void DrawAnnotationsOn()\n\nSet/get whether text annotations should be rendered or not.\nCurrently, this only affects rendering when IndexedLookup is\ntrue. The default is true.\n"},
  {(char*)"DrawAnnotationsOff", PyvtkScalarBarActor_DrawAnnotationsOff, METH_VARARGS,
   (char*)"V.DrawAnnotationsOff()\nC++: void DrawAnnotationsOff()\n\nSet/get whether text annotations should be rendered or not.\nCurrently, this only affects rendering when IndexedLookup is\ntrue. The default is true.\n"},
  {(char*)"SetDrawNanAnnotation", PyvtkScalarBarActor_SetDrawNanAnnotation, METH_VARARGS,
   (char*)"V.SetDrawNanAnnotation(int)\nC++: void SetDrawNanAnnotation(int a)\n\nSet/get whether the NaN annotation should be rendered or not.\nThis only affects rendering when DrawAnnotations is true. The\ndefault is false.\n"},
  {(char*)"GetDrawNanAnnotation", PyvtkScalarBarActor_GetDrawNanAnnotation, METH_VARARGS,
   (char*)"V.GetDrawNanAnnotation() -> int\nC++: int GetDrawNanAnnotation()\n\nSet/get whether the NaN annotation should be rendered or not.\nThis only affects rendering when DrawAnnotations is true. The\ndefault is false.\n"},
  {(char*)"DrawNanAnnotationOn", PyvtkScalarBarActor_DrawNanAnnotationOn, METH_VARARGS,
   (char*)"V.DrawNanAnnotationOn()\nC++: void DrawNanAnnotationOn()\n\nSet/get whether the NaN annotation should be rendered or not.\nThis only affects rendering when DrawAnnotations is true. The\ndefault is false.\n"},
  {(char*)"DrawNanAnnotationOff", PyvtkScalarBarActor_DrawNanAnnotationOff, METH_VARARGS,
   (char*)"V.DrawNanAnnotationOff()\nC++: void DrawNanAnnotationOff()\n\nSet/get whether the NaN annotation should be rendered or not.\nThis only affects rendering when DrawAnnotations is true. The\ndefault is false.\n"},
  {(char*)"SetFixedAnnotationLeaderLineColor", PyvtkScalarBarActor_SetFixedAnnotationLeaderLineColor, METH_VARARGS,
   (char*)"V.SetFixedAnnotationLeaderLineColor(int)\nC++: void SetFixedAnnotationLeaderLineColor(int a)\n\nSet/get how leader lines connecting annotations to values should\nbe colored.\n\nWhen true, leader lines are all the same color (and match the\nLabelTextProperty color). When false, leader lines take on the\ncolor of the value they correspond to. This only affects\nrendering when DrawAnnotations is true. The default is false.\n"},
  {(char*)"GetFixedAnnotationLeaderLineColor", PyvtkScalarBarActor_GetFixedAnnotationLeaderLineColor, METH_VARARGS,
   (char*)"V.GetFixedAnnotationLeaderLineColor() -> int\nC++: int GetFixedAnnotationLeaderLineColor()\n\nSet/get how leader lines connecting annotations to values should\nbe colored.\n\nWhen true, leader lines are all the same color (and match the\nLabelTextProperty color). When false, leader lines take on the\ncolor of the value they correspond to. This only affects\nrendering when DrawAnnotations is true. The default is false.\n"},
  {(char*)"FixedAnnotationLeaderLineColorOn", PyvtkScalarBarActor_FixedAnnotationLeaderLineColorOn, METH_VARARGS,
   (char*)"V.FixedAnnotationLeaderLineColorOn()\nC++: void FixedAnnotationLeaderLineColorOn()\n\nSet/get how leader lines connecting annotations to values should\nbe colored.\n\nWhen true, leader lines are all the same color (and match the\nLabelTextProperty color). When false, leader lines take on the\ncolor of the value they correspond to. This only affects\nrendering when DrawAnnotations is true. The default is false.\n"},
  {(char*)"FixedAnnotationLeaderLineColorOff", PyvtkScalarBarActor_FixedAnnotationLeaderLineColorOff, METH_VARARGS,
   (char*)"V.FixedAnnotationLeaderLineColorOff()\nC++: void FixedAnnotationLeaderLineColorOff()\n\nSet/get how leader lines connecting annotations to values should\nbe colored.\n\nWhen true, leader lines are all the same color (and match the\nLabelTextProperty color). When false, leader lines take on the\ncolor of the value they correspond to. This only affects\nrendering when DrawAnnotations is true. The default is false.\n"},
  {(char*)"SetNanAnnotation", PyvtkScalarBarActor_SetNanAnnotation, METH_VARARGS,
   (char*)"V.SetNanAnnotation(string)\nC++: void SetNanAnnotation(char *)\n\nSet/get the annotation text for \"NaN\" values.\n"},
  {(char*)"GetNanAnnotation", PyvtkScalarBarActor_GetNanAnnotation, METH_VARARGS,
   (char*)"V.GetNanAnnotation() -> string\nC++: char *GetNanAnnotation()\n\nSet/get the annotation text for \"NaN\" values.\n"},
  {(char*)"SetAnnotationTextScaling", PyvtkScalarBarActor_SetAnnotationTextScaling, METH_VARARGS,
   (char*)"V.SetAnnotationTextScaling(int)\nC++: void SetAnnotationTextScaling(int a)\n\nSet/get whether annotation labels should be scaled with the\nviewport.\n\nThe default value is 0 (no scaling). If non-zero, the\nvtkTextActor instances used to render annotation labels will have\ntheir TextScaleMode set to viewport-based scaling, which\nnonlinearly scales font size with the viewport size.\n"},
  {(char*)"GetAnnotationTextScaling", PyvtkScalarBarActor_GetAnnotationTextScaling, METH_VARARGS,
   (char*)"V.GetAnnotationTextScaling() -> int\nC++: int GetAnnotationTextScaling()\n\nSet/get whether annotation labels should be scaled with the\nviewport.\n\nThe default value is 0 (no scaling). If non-zero, the\nvtkTextActor instances used to render annotation labels will have\ntheir TextScaleMode set to viewport-based scaling, which\nnonlinearly scales font size with the viewport size.\n"},
  {(char*)"SetDrawBackground", PyvtkScalarBarActor_SetDrawBackground, METH_VARARGS,
   (char*)"V.SetDrawBackground(int)\nC++: void SetDrawBackground(int a)\n\nSet/Get whether a background should be drawn around the scalar\nbar. Default is off.\n"},
  {(char*)"GetDrawBackground", PyvtkScalarBarActor_GetDrawBackground, METH_VARARGS,
   (char*)"V.GetDrawBackground() -> int\nC++: int GetDrawBackground()\n\nSet/Get whether a background should be drawn around the scalar\nbar. Default is off.\n"},
  {(char*)"DrawBackgroundOn", PyvtkScalarBarActor_DrawBackgroundOn, METH_VARARGS,
   (char*)"V.DrawBackgroundOn()\nC++: void DrawBackgroundOn()\n\nSet/Get whether a background should be drawn around the scalar\nbar. Default is off.\n"},
  {(char*)"DrawBackgroundOff", PyvtkScalarBarActor_DrawBackgroundOff, METH_VARARGS,
   (char*)"V.DrawBackgroundOff()\nC++: void DrawBackgroundOff()\n\nSet/Get whether a background should be drawn around the scalar\nbar. Default is off.\n"},
  {(char*)"SetDrawFrame", PyvtkScalarBarActor_SetDrawFrame, METH_VARARGS,
   (char*)"V.SetDrawFrame(int)\nC++: void SetDrawFrame(int a)\n\nSet/Get whether a frame should be drawn around the scalar bar.\nDefault is off.\n"},
  {(char*)"GetDrawFrame", PyvtkScalarBarActor_GetDrawFrame, METH_VARARGS,
   (char*)"V.GetDrawFrame() -> int\nC++: int GetDrawFrame()\n\nSet/Get whether a frame should be drawn around the scalar bar.\nDefault is off.\n"},
  {(char*)"DrawFrameOn", PyvtkScalarBarActor_DrawFrameOn, METH_VARARGS,
   (char*)"V.DrawFrameOn()\nC++: void DrawFrameOn()\n\nSet/Get whether a frame should be drawn around the scalar bar.\nDefault is off.\n"},
  {(char*)"DrawFrameOff", PyvtkScalarBarActor_DrawFrameOff, METH_VARARGS,
   (char*)"V.DrawFrameOff()\nC++: void DrawFrameOff()\n\nSet/Get whether a frame should be drawn around the scalar bar.\nDefault is off.\n"},
  {(char*)"SetDrawColorBar", PyvtkScalarBarActor_SetDrawColorBar, METH_VARARGS,
   (char*)"V.SetDrawColorBar(int)\nC++: void SetDrawColorBar(int a)\n\nSet/Get whether the color bar should be drawn. If off, only the\ntickmarks and text will be drawn. Default is on.\n"},
  {(char*)"GetDrawColorBar", PyvtkScalarBarActor_GetDrawColorBar, METH_VARARGS,
   (char*)"V.GetDrawColorBar() -> int\nC++: int GetDrawColorBar()\n\nSet/Get whether the color bar should be drawn. If off, only the\ntickmarks and text will be drawn. Default is on.\n"},
  {(char*)"DrawColorBarOn", PyvtkScalarBarActor_DrawColorBarOn, METH_VARARGS,
   (char*)"V.DrawColorBarOn()\nC++: void DrawColorBarOn()\n\nSet/Get whether the color bar should be drawn. If off, only the\ntickmarks and text will be drawn. Default is on.\n"},
  {(char*)"DrawColorBarOff", PyvtkScalarBarActor_DrawColorBarOff, METH_VARARGS,
   (char*)"V.DrawColorBarOff()\nC++: void DrawColorBarOff()\n\nSet/Get whether the color bar should be drawn. If off, only the\ntickmarks and text will be drawn. Default is on.\n"},
  {(char*)"SetDrawTickLabels", PyvtkScalarBarActor_SetDrawTickLabels, METH_VARARGS,
   (char*)"V.SetDrawTickLabels(int)\nC++: void SetDrawTickLabels(int a)\n\nSet/Get whether the tick labels should be drawn. Default is on.\n"},
  {(char*)"GetDrawTickLabels", PyvtkScalarBarActor_GetDrawTickLabels, METH_VARARGS,
   (char*)"V.GetDrawTickLabels() -> int\nC++: int GetDrawTickLabels()\n\nSet/Get whether the tick labels should be drawn. Default is on.\n"},
  {(char*)"DrawTickLabelsOn", PyvtkScalarBarActor_DrawTickLabelsOn, METH_VARARGS,
   (char*)"V.DrawTickLabelsOn()\nC++: void DrawTickLabelsOn()\n\nSet/Get whether the tick labels should be drawn. Default is on.\n"},
  {(char*)"DrawTickLabelsOff", PyvtkScalarBarActor_DrawTickLabelsOff, METH_VARARGS,
   (char*)"V.DrawTickLabelsOff()\nC++: void DrawTickLabelsOff()\n\nSet/Get whether the tick labels should be drawn. Default is on.\n"},
  {(char*)"SetBackgroundProperty", PyvtkScalarBarActor_SetBackgroundProperty, METH_VARARGS,
   (char*)"V.SetBackgroundProperty(vtkProperty2D)\nC++: virtual void SetBackgroundProperty(vtkProperty2D *p)\n\nSet/Get the background property.\n"},
  {(char*)"GetBackgroundProperty", PyvtkScalarBarActor_GetBackgroundProperty, METH_VARARGS,
   (char*)"V.GetBackgroundProperty() -> vtkProperty2D\nC++: vtkProperty2D *GetBackgroundProperty()\n\nSet/Get the background property.\n"},
  {(char*)"SetFrameProperty", PyvtkScalarBarActor_SetFrameProperty, METH_VARARGS,
   (char*)"V.SetFrameProperty(vtkProperty2D)\nC++: virtual void SetFrameProperty(vtkProperty2D *p)\n\nSet/Get the frame property.\n"},
  {(char*)"GetFrameProperty", PyvtkScalarBarActor_GetFrameProperty, METH_VARARGS,
   (char*)"V.GetFrameProperty() -> vtkProperty2D\nC++: vtkProperty2D *GetFrameProperty()\n\nSet/Get the frame property.\n"},
  {(char*)"GetTextPad", PyvtkScalarBarActor_GetTextPad, METH_VARARGS,
   (char*)"V.GetTextPad() -> int\nC++: int GetTextPad()\n\nSet/get the amount of padding around text boxes. The default is 1\npixel.\n"},
  {(char*)"SetTextPad", PyvtkScalarBarActor_SetTextPad, METH_VARARGS,
   (char*)"V.SetTextPad(int)\nC++: void SetTextPad(int a)\n\nSet/get the amount of padding around text boxes. The default is 1\npixel.\n"},
  {(char*)"GetVerticalTitleSeparation", PyvtkScalarBarActor_GetVerticalTitleSeparation, METH_VARARGS,
   (char*)"V.GetVerticalTitleSeparation() -> int\nC++: int GetVerticalTitleSeparation()\n\nSet/get the margin in pixels, between the title and the bar, when\nthe Orientation is vertical. The default is 0 pixels.\n"},
  {(char*)"SetVerticalTitleSeparation", PyvtkScalarBarActor_SetVerticalTitleSeparation, METH_VARARGS,
   (char*)"V.SetVerticalTitleSeparation(int)\nC++: void SetVerticalTitleSeparation(int a)\n\nSet/get the margin in pixels, between the title and the bar, when\nthe Orientation is vertical. The default is 0 pixels.\n"},
  {(char*)"GetBarRatio", PyvtkScalarBarActor_GetBarRatio, METH_VARARGS,
   (char*)"V.GetBarRatio() -> float\nC++: double GetBarRatio()\n\nSet/get the thickness of the color bar relative to the widget\nframe. The default is 0.375 and must always be in the range ]0,\n1[.\n"},
  {(char*)"SetBarRatio", PyvtkScalarBarActor_SetBarRatio, METH_VARARGS,
   (char*)"V.SetBarRatio(float)\nC++: void SetBarRatio(double)\n\nSet/get the thickness of the color bar relative to the widget\nframe. The default is 0.375 and must always be in the range ]0,\n1[.\n"},
  {(char*)"GetBarRatioMinValue", PyvtkScalarBarActor_GetBarRatioMinValue, METH_VARARGS,
   (char*)"V.GetBarRatioMinValue() -> float\nC++: double GetBarRatioMinValue()\n\nSet/get the thickness of the color bar relative to the widget\nframe. The default is 0.375 and must always be in the range ]0,\n1[.\n"},
  {(char*)"GetBarRatioMaxValue", PyvtkScalarBarActor_GetBarRatioMaxValue, METH_VARARGS,
   (char*)"V.GetBarRatioMaxValue() -> float\nC++: double GetBarRatioMaxValue()\n\nSet/get the thickness of the color bar relative to the widget\nframe. The default is 0.375 and must always be in the range ]0,\n1[.\n"},
  {(char*)"GetTitleRatio", PyvtkScalarBarActor_GetTitleRatio, METH_VARARGS,
   (char*)"V.GetTitleRatio() -> float\nC++: double GetTitleRatio()\n\nSet/get the ratio of the title height to the tick label height\n(used only when the Orientation is horizontal). The default is\n0.5, which attempts to make the labels and title the same size.\nThis must be a number in the range ]0, 1[.\n"},
  {(char*)"SetTitleRatio", PyvtkScalarBarActor_SetTitleRatio, METH_VARARGS,
   (char*)"V.SetTitleRatio(float)\nC++: void SetTitleRatio(double)\n\nSet/get the ratio of the title height to the tick label height\n(used only when the Orientation is horizontal). The default is\n0.5, which attempts to make the labels and title the same size.\nThis must be a number in the range ]0, 1[.\n"},
  {(char*)"GetTitleRatioMinValue", PyvtkScalarBarActor_GetTitleRatioMinValue, METH_VARARGS,
   (char*)"V.GetTitleRatioMinValue() -> float\nC++: double GetTitleRatioMinValue()\n\nSet/get the ratio of the title height to the tick label height\n(used only when the Orientation is horizontal). The default is\n0.5, which attempts to make the labels and title the same size.\nThis must be a number in the range ]0, 1[.\n"},
  {(char*)"GetTitleRatioMaxValue", PyvtkScalarBarActor_GetTitleRatioMaxValue, METH_VARARGS,
   (char*)"V.GetTitleRatioMaxValue() -> float\nC++: double GetTitleRatioMaxValue()\n\nSet/get the ratio of the title height to the tick label height\n(used only when the Orientation is horizontal). The default is\n0.5, which attempts to make the labels and title the same size.\nThis must be a number in the range ]0, 1[.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkScalarBarActor_StaticNew()
{
  return vtkScalarBarActor::New();
}

PyObject *PyVTKClass_vtkScalarBarActorNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkScalarBarActor_StaticNew,
    PyvtkScalarBarActor_Methods,
    "vtkScalarBarActor", modulename,
    NULL, NULL,
    PyvtkScalarBarActor_Doc(),
    PyVTKClass_vtkActor2DNew(modulename));

  if (cls)
    {
    PyObject *d = PyVTKClass_GetDict(cls);
    PyObject *o;

    for (int c = 0; c < 2; c++)
      {
      static const struct { const char *name; int value; }
        constants[2] = {
          { "PrecedeScalarBar", vtkScalarBarActor::PrecedeScalarBar },
          { "SucceedScalarBar", vtkScalarBarActor::SucceedScalarBar },
        };

      o = PyInt_FromLong(constants[c].value);
      if (o)
        {
        PyDict_SetItemString(d, (char *)constants[c].name, o);
        Py_DECREF(o);
        }
      }

    }

  return cls;
}

const char **PyvtkScalarBarActor_Doc()
{
  static const char *docstring[] = {
    "vtkScalarBarActor - Create a scalar bar with labels\n\n",
    "Superclass: vtkActor2D\n\n",
    "vtkScalarBarActor creates a scalar bar with tick marks. A scalar bar\nis a legend that indicates to the viewer the correspondence between\ncolor value and data value. The legend consists of a rectangular bar\nmade of rectangular pieces each colored a constant value. Since\nvtkScalarBarActor is a subclass of vtkActor2D, it is drawn in the\nimage plane (i.e., in the renderer's viewport) on top of the 3D\n",
    "graphics window.\n\nTo use vtkScalarBarActor you must associate a vtkScalarsToColors (or\nsubclass) with it. The lookup table defines the colors and the range\nof scalar values used to map scalar data.  Typically, the number of\ncolors shown in the scalar bar is not equal to the number of colors\nin the lookup table, in which case sampling of the lookup table is\nperformed.\n\nOther optional capabilities i",
    "nclude specifying the fraction of the\nviewport size (both x and y directions) which will control the size\nof the scalar bar and the number of tick labels. The actual position\nof the scalar bar on the screen is controlled by using the\nvtkActor2D::SetPosition() method (by default the scalar bar is\ncentered in the viewport).  Other features include the ability to\norient the scalar bar horizontally of",
    " vertically and controlling the\nformat (printf style) with which to print the labels on the scalar\nbar. Also, the vtkScalarBarActor's property is applied to the scalar\nbar and annotations (including layer, and compositing operator).\n\nSet the text property/attributes of the title and the labels through\nthe vtkTextProperty objects associated to this actor.\n\nCaveats:\n\nIf a vtkLogLookupTable is specif",
    "ied as the lookup table to use, then\nthe labels are created using a logarithmic scale.\n\nSee Also:\n\nvtkActor2D vtkTextProperty vtkTextMapper vtkPolyDataMapper2D\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkScalarBarActor(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkScalarBarActorNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkScalarBarActor", o) != 0)
    {
    Py_DECREF(o);
    }

  for (int c = 0; c < 2; c++)
    {
    static const struct { const char *name; int value; }
      constants[2] = {
        { "VTK_ORIENT_HORIZONTAL", 0 },
        { "VTK_ORIENT_VERTICAL", 1 },
      };

    o = PyInt_FromLong(constants[c].value);
    if (o)
      {
      PyDict_SetItemString(dict, (char *)constants[c].name, o);
      Py_DECREF(o);
      }
    }

}

