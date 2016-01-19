// python wrapper for vtkLeaderActor2D
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkLeaderActor2D.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkLeaderActor2D(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkLeaderActor2DNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkActor2DNew
extern "C" { PyObject *PyVTKClass_vtkActor2DNew(const char *); }
#define DECLARED_PyVTKClass_vtkActor2DNew
#endif

static const char **PyvtkLeaderActor2D_Doc();


static PyObject *
PyvtkLeaderActor2D_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLeaderActor2D *op = static_cast<vtkLeaderActor2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkLeaderActor2D::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLeaderActor2D_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLeaderActor2D *op = static_cast<vtkLeaderActor2D *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkLeaderActor2D::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLeaderActor2D_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLeaderActor2D *op = static_cast<vtkLeaderActor2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkLeaderActor2D *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkLeaderActor2D::NewInstance());

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
PyvtkLeaderActor2D_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkLeaderActor2D *tempr = vtkLeaderActor2D::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLeaderActor2D_SetRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLeaderActor2D *op = static_cast<vtkLeaderActor2D *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetRadius(temp0);
      }
    else
      {
      op->vtkLeaderActor2D::SetRadius(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLeaderActor2D_GetRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLeaderActor2D *op = static_cast<vtkLeaderActor2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetRadius() :
      op->vtkLeaderActor2D::GetRadius());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLeaderActor2D_SetLabel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLabel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLeaderActor2D *op = static_cast<vtkLeaderActor2D *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetLabel(temp0);
      }
    else
      {
      op->vtkLeaderActor2D::SetLabel(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLeaderActor2D_GetLabel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLabel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLeaderActor2D *op = static_cast<vtkLeaderActor2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetLabel() :
      op->vtkLeaderActor2D::GetLabel());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLeaderActor2D_SetLabelTextProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLabelTextProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLeaderActor2D *op = static_cast<vtkLeaderActor2D *>(vp);

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
      op->vtkLeaderActor2D::SetLabelTextProperty(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLeaderActor2D_GetLabelTextProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLabelTextProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLeaderActor2D *op = static_cast<vtkLeaderActor2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkTextProperty *tempr = (ap.IsBound() ?
      op->GetLabelTextProperty() :
      op->vtkLeaderActor2D::GetLabelTextProperty());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLeaderActor2D_SetLabelFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLabelFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLeaderActor2D *op = static_cast<vtkLeaderActor2D *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetLabelFactor(temp0);
      }
    else
      {
      op->vtkLeaderActor2D::SetLabelFactor(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLeaderActor2D_GetLabelFactorMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLabelFactorMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLeaderActor2D *op = static_cast<vtkLeaderActor2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetLabelFactorMinValue() :
      op->vtkLeaderActor2D::GetLabelFactorMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLeaderActor2D_GetLabelFactorMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLabelFactorMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLeaderActor2D *op = static_cast<vtkLeaderActor2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetLabelFactorMaxValue() :
      op->vtkLeaderActor2D::GetLabelFactorMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLeaderActor2D_GetLabelFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLabelFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLeaderActor2D *op = static_cast<vtkLeaderActor2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetLabelFactor() :
      op->vtkLeaderActor2D::GetLabelFactor());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLeaderActor2D_SetArrowPlacement(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetArrowPlacement");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLeaderActor2D *op = static_cast<vtkLeaderActor2D *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetArrowPlacement(temp0);
      }
    else
      {
      op->vtkLeaderActor2D::SetArrowPlacement(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLeaderActor2D_GetArrowPlacementMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetArrowPlacementMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLeaderActor2D *op = static_cast<vtkLeaderActor2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetArrowPlacementMinValue() :
      op->vtkLeaderActor2D::GetArrowPlacementMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLeaderActor2D_GetArrowPlacementMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetArrowPlacementMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLeaderActor2D *op = static_cast<vtkLeaderActor2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetArrowPlacementMaxValue() :
      op->vtkLeaderActor2D::GetArrowPlacementMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLeaderActor2D_GetArrowPlacement(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetArrowPlacement");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLeaderActor2D *op = static_cast<vtkLeaderActor2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetArrowPlacement() :
      op->vtkLeaderActor2D::GetArrowPlacement());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLeaderActor2D_SetArrowPlacementToNone(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetArrowPlacementToNone");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLeaderActor2D *op = static_cast<vtkLeaderActor2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetArrowPlacementToNone();
      }
    else
      {
      op->vtkLeaderActor2D::SetArrowPlacementToNone();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLeaderActor2D_SetArrowPlacementToPoint1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetArrowPlacementToPoint1");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLeaderActor2D *op = static_cast<vtkLeaderActor2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetArrowPlacementToPoint1();
      }
    else
      {
      op->vtkLeaderActor2D::SetArrowPlacementToPoint1();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLeaderActor2D_SetArrowPlacementToPoint2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetArrowPlacementToPoint2");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLeaderActor2D *op = static_cast<vtkLeaderActor2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetArrowPlacementToPoint2();
      }
    else
      {
      op->vtkLeaderActor2D::SetArrowPlacementToPoint2();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLeaderActor2D_SetArrowPlacementToBoth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetArrowPlacementToBoth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLeaderActor2D *op = static_cast<vtkLeaderActor2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetArrowPlacementToBoth();
      }
    else
      {
      op->vtkLeaderActor2D::SetArrowPlacementToBoth();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLeaderActor2D_SetArrowStyle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetArrowStyle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLeaderActor2D *op = static_cast<vtkLeaderActor2D *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetArrowStyle(temp0);
      }
    else
      {
      op->vtkLeaderActor2D::SetArrowStyle(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLeaderActor2D_GetArrowStyleMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetArrowStyleMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLeaderActor2D *op = static_cast<vtkLeaderActor2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetArrowStyleMinValue() :
      op->vtkLeaderActor2D::GetArrowStyleMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLeaderActor2D_GetArrowStyleMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetArrowStyleMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLeaderActor2D *op = static_cast<vtkLeaderActor2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetArrowStyleMaxValue() :
      op->vtkLeaderActor2D::GetArrowStyleMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLeaderActor2D_GetArrowStyle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetArrowStyle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLeaderActor2D *op = static_cast<vtkLeaderActor2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetArrowStyle() :
      op->vtkLeaderActor2D::GetArrowStyle());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLeaderActor2D_SetArrowStyleToFilled(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetArrowStyleToFilled");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLeaderActor2D *op = static_cast<vtkLeaderActor2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetArrowStyleToFilled();
      }
    else
      {
      op->vtkLeaderActor2D::SetArrowStyleToFilled();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLeaderActor2D_SetArrowStyleToOpen(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetArrowStyleToOpen");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLeaderActor2D *op = static_cast<vtkLeaderActor2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetArrowStyleToOpen();
      }
    else
      {
      op->vtkLeaderActor2D::SetArrowStyleToOpen();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLeaderActor2D_SetArrowStyleToHollow(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetArrowStyleToHollow");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLeaderActor2D *op = static_cast<vtkLeaderActor2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetArrowStyleToHollow();
      }
    else
      {
      op->vtkLeaderActor2D::SetArrowStyleToHollow();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLeaderActor2D_SetArrowLength(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetArrowLength");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLeaderActor2D *op = static_cast<vtkLeaderActor2D *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetArrowLength(temp0);
      }
    else
      {
      op->vtkLeaderActor2D::SetArrowLength(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLeaderActor2D_GetArrowLengthMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetArrowLengthMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLeaderActor2D *op = static_cast<vtkLeaderActor2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetArrowLengthMinValue() :
      op->vtkLeaderActor2D::GetArrowLengthMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLeaderActor2D_GetArrowLengthMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetArrowLengthMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLeaderActor2D *op = static_cast<vtkLeaderActor2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetArrowLengthMaxValue() :
      op->vtkLeaderActor2D::GetArrowLengthMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLeaderActor2D_GetArrowLength(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetArrowLength");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLeaderActor2D *op = static_cast<vtkLeaderActor2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetArrowLength() :
      op->vtkLeaderActor2D::GetArrowLength());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLeaderActor2D_SetArrowWidth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetArrowWidth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLeaderActor2D *op = static_cast<vtkLeaderActor2D *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetArrowWidth(temp0);
      }
    else
      {
      op->vtkLeaderActor2D::SetArrowWidth(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLeaderActor2D_GetArrowWidthMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetArrowWidthMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLeaderActor2D *op = static_cast<vtkLeaderActor2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetArrowWidthMinValue() :
      op->vtkLeaderActor2D::GetArrowWidthMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLeaderActor2D_GetArrowWidthMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetArrowWidthMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLeaderActor2D *op = static_cast<vtkLeaderActor2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetArrowWidthMaxValue() :
      op->vtkLeaderActor2D::GetArrowWidthMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLeaderActor2D_GetArrowWidth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetArrowWidth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLeaderActor2D *op = static_cast<vtkLeaderActor2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetArrowWidth() :
      op->vtkLeaderActor2D::GetArrowWidth());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLeaderActor2D_SetMinimumArrowSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMinimumArrowSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLeaderActor2D *op = static_cast<vtkLeaderActor2D *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetMinimumArrowSize(temp0);
      }
    else
      {
      op->vtkLeaderActor2D::SetMinimumArrowSize(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLeaderActor2D_GetMinimumArrowSizeMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMinimumArrowSizeMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLeaderActor2D *op = static_cast<vtkLeaderActor2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetMinimumArrowSizeMinValue() :
      op->vtkLeaderActor2D::GetMinimumArrowSizeMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLeaderActor2D_GetMinimumArrowSizeMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMinimumArrowSizeMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLeaderActor2D *op = static_cast<vtkLeaderActor2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetMinimumArrowSizeMaxValue() :
      op->vtkLeaderActor2D::GetMinimumArrowSizeMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLeaderActor2D_GetMinimumArrowSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMinimumArrowSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLeaderActor2D *op = static_cast<vtkLeaderActor2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetMinimumArrowSize() :
      op->vtkLeaderActor2D::GetMinimumArrowSize());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLeaderActor2D_SetMaximumArrowSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaximumArrowSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLeaderActor2D *op = static_cast<vtkLeaderActor2D *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetMaximumArrowSize(temp0);
      }
    else
      {
      op->vtkLeaderActor2D::SetMaximumArrowSize(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLeaderActor2D_GetMaximumArrowSizeMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumArrowSizeMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLeaderActor2D *op = static_cast<vtkLeaderActor2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetMaximumArrowSizeMinValue() :
      op->vtkLeaderActor2D::GetMaximumArrowSizeMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLeaderActor2D_GetMaximumArrowSizeMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumArrowSizeMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLeaderActor2D *op = static_cast<vtkLeaderActor2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetMaximumArrowSizeMaxValue() :
      op->vtkLeaderActor2D::GetMaximumArrowSizeMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLeaderActor2D_GetMaximumArrowSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumArrowSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLeaderActor2D *op = static_cast<vtkLeaderActor2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetMaximumArrowSize() :
      op->vtkLeaderActor2D::GetMaximumArrowSize());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLeaderActor2D_SetAutoLabel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAutoLabel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLeaderActor2D *op = static_cast<vtkLeaderActor2D *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetAutoLabel(temp0);
      }
    else
      {
      op->vtkLeaderActor2D::SetAutoLabel(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLeaderActor2D_GetAutoLabel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAutoLabel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLeaderActor2D *op = static_cast<vtkLeaderActor2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetAutoLabel() :
      op->vtkLeaderActor2D::GetAutoLabel());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLeaderActor2D_AutoLabelOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AutoLabelOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLeaderActor2D *op = static_cast<vtkLeaderActor2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->AutoLabelOn();
      }
    else
      {
      op->vtkLeaderActor2D::AutoLabelOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLeaderActor2D_AutoLabelOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AutoLabelOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLeaderActor2D *op = static_cast<vtkLeaderActor2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->AutoLabelOff();
      }
    else
      {
      op->vtkLeaderActor2D::AutoLabelOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLeaderActor2D_SetLabelFormat(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLabelFormat");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLeaderActor2D *op = static_cast<vtkLeaderActor2D *>(vp);

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
      op->vtkLeaderActor2D::SetLabelFormat(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLeaderActor2D_GetLabelFormat(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLabelFormat");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLeaderActor2D *op = static_cast<vtkLeaderActor2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetLabelFormat() :
      op->vtkLeaderActor2D::GetLabelFormat());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLeaderActor2D_GetLength(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLength");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLeaderActor2D *op = static_cast<vtkLeaderActor2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetLength() :
      op->vtkLeaderActor2D::GetLength());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLeaderActor2D_GetAngle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAngle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLeaderActor2D *op = static_cast<vtkLeaderActor2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetAngle() :
      op->vtkLeaderActor2D::GetAngle());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLeaderActor2D_RenderOverlay(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOverlay");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLeaderActor2D *op = static_cast<vtkLeaderActor2D *>(vp);

  vtkViewport *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
    {
    int tempr = (ap.IsBound() ?
      op->RenderOverlay(temp0) :
      op->vtkLeaderActor2D::RenderOverlay(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLeaderActor2D_RenderOpaqueGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOpaqueGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLeaderActor2D *op = static_cast<vtkLeaderActor2D *>(vp);

  vtkViewport *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
    {
    int tempr = (ap.IsBound() ?
      op->RenderOpaqueGeometry(temp0) :
      op->vtkLeaderActor2D::RenderOpaqueGeometry(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLeaderActor2D_RenderTranslucentPolygonalGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderTranslucentPolygonalGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLeaderActor2D *op = static_cast<vtkLeaderActor2D *>(vp);

  vtkViewport *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
    {
    int tempr = (ap.IsBound() ?
      op->RenderTranslucentPolygonalGeometry(temp0) :
      op->vtkLeaderActor2D::RenderTranslucentPolygonalGeometry(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLeaderActor2D_HasTranslucentPolygonalGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasTranslucentPolygonalGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLeaderActor2D *op = static_cast<vtkLeaderActor2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->HasTranslucentPolygonalGeometry() :
      op->vtkLeaderActor2D::HasTranslucentPolygonalGeometry());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLeaderActor2D_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLeaderActor2D *op = static_cast<vtkLeaderActor2D *>(vp);

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
      op->vtkLeaderActor2D::ReleaseGraphicsResources(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLeaderActor2D_ShallowCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShallowCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLeaderActor2D *op = static_cast<vtkLeaderActor2D *>(vp);

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
      op->vtkLeaderActor2D::ShallowCopy(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkLeaderActor2D_Methods[] = {
  {(char*)"GetClassName", PyvtkLeaderActor2D_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkLeaderActor2D_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkLeaderActor2D_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkLeaderActor2D\nC++: vtkLeaderActor2D *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkLeaderActor2D_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkLeaderActor2D\nC++: vtkLeaderActor2D *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetRadius", PyvtkLeaderActor2D_SetRadius, METH_VARARGS,
   (char*)"V.SetRadius(float)\nC++: void SetRadius(double a)\n\nSet/Get a radius which can be used to curve the leader.  If a\nradius is specified whose absolute value is greater than one half\nthe distance between the two points defined by the superclasses'\nPosition and Position2 ivars, then the leader will be curved. A\npositive radius will produce a curve such that the center is to\nthe right of the line from Position and Position2; a negative\nradius will produce a curve in the opposite sense. By default,\nthe radius is set to zero and thus there is no curvature. Note\nthat the radius is expresses as a multiple of the distance\nbetween (Position,Position2); this avoids issues relative to\ncoordinate system transformations.\n"},
  {(char*)"GetRadius", PyvtkLeaderActor2D_GetRadius, METH_VARARGS,
   (char*)"V.GetRadius() -> float\nC++: double GetRadius()\n\nSet/Get a radius which can be used to curve the leader.  If a\nradius is specified whose absolute value is greater than one half\nthe distance between the two points defined by the superclasses'\nPosition and Position2 ivars, then the leader will be curved. A\npositive radius will produce a curve such that the center is to\nthe right of the line from Position and Position2; a negative\nradius will produce a curve in the opposite sense. By default,\nthe radius is set to zero and thus there is no curvature. Note\nthat the radius is expresses as a multiple of the distance\nbetween (Position,Position2); this avoids issues relative to\ncoordinate system transformations.\n"},
  {(char*)"SetLabel", PyvtkLeaderActor2D_SetLabel, METH_VARARGS,
   (char*)"V.SetLabel(string)\nC++: void SetLabel(char *)\n\nSet/Get the label for the leader. If the label is an empty\nstring, then it will not be drawn.\n"},
  {(char*)"GetLabel", PyvtkLeaderActor2D_GetLabel, METH_VARARGS,
   (char*)"V.GetLabel() -> string\nC++: char *GetLabel()\n\nSet/Get the label for the leader. If the label is an empty\nstring, then it will not be drawn.\n"},
  {(char*)"SetLabelTextProperty", PyvtkLeaderActor2D_SetLabelTextProperty, METH_VARARGS,
   (char*)"V.SetLabelTextProperty(vtkTextProperty)\nC++: virtual void SetLabelTextProperty(vtkTextProperty *p)\n\nSet/Get the text property of the label.\n"},
  {(char*)"GetLabelTextProperty", PyvtkLeaderActor2D_GetLabelTextProperty, METH_VARARGS,
   (char*)"V.GetLabelTextProperty() -> vtkTextProperty\nC++: vtkTextProperty *GetLabelTextProperty()\n\nSet/Get the text property of the label.\n"},
  {(char*)"SetLabelFactor", PyvtkLeaderActor2D_SetLabelFactor, METH_VARARGS,
   (char*)"V.SetLabelFactor(float)\nC++: void SetLabelFactor(double)\n\nSet/Get the factor that controls the overall size of the fonts\nused to label the leader.\n"},
  {(char*)"GetLabelFactorMinValue", PyvtkLeaderActor2D_GetLabelFactorMinValue, METH_VARARGS,
   (char*)"V.GetLabelFactorMinValue() -> float\nC++: double GetLabelFactorMinValue()\n\nSet/Get the factor that controls the overall size of the fonts\nused to label the leader.\n"},
  {(char*)"GetLabelFactorMaxValue", PyvtkLeaderActor2D_GetLabelFactorMaxValue, METH_VARARGS,
   (char*)"V.GetLabelFactorMaxValue() -> float\nC++: double GetLabelFactorMaxValue()\n\nSet/Get the factor that controls the overall size of the fonts\nused to label the leader.\n"},
  {(char*)"GetLabelFactor", PyvtkLeaderActor2D_GetLabelFactor, METH_VARARGS,
   (char*)"V.GetLabelFactor() -> float\nC++: double GetLabelFactor()\n\nSet/Get the factor that controls the overall size of the fonts\nused to label the leader.\n"},
  {(char*)"SetArrowPlacement", PyvtkLeaderActor2D_SetArrowPlacement, METH_VARARGS,
   (char*)"V.SetArrowPlacement(int)\nC++: void SetArrowPlacement(int)\n\nControl whether arrow heads are drawn on the leader. Arrows may\nbe drawn on one end, both ends, or not at all.\n"},
  {(char*)"GetArrowPlacementMinValue", PyvtkLeaderActor2D_GetArrowPlacementMinValue, METH_VARARGS,
   (char*)"V.GetArrowPlacementMinValue() -> int\nC++: int GetArrowPlacementMinValue()\n\nControl whether arrow heads are drawn on the leader. Arrows may\nbe drawn on one end, both ends, or not at all.\n"},
  {(char*)"GetArrowPlacementMaxValue", PyvtkLeaderActor2D_GetArrowPlacementMaxValue, METH_VARARGS,
   (char*)"V.GetArrowPlacementMaxValue() -> int\nC++: int GetArrowPlacementMaxValue()\n\nControl whether arrow heads are drawn on the leader. Arrows may\nbe drawn on one end, both ends, or not at all.\n"},
  {(char*)"GetArrowPlacement", PyvtkLeaderActor2D_GetArrowPlacement, METH_VARARGS,
   (char*)"V.GetArrowPlacement() -> int\nC++: int GetArrowPlacement()\n\nControl whether arrow heads are drawn on the leader. Arrows may\nbe drawn on one end, both ends, or not at all.\n"},
  {(char*)"SetArrowPlacementToNone", PyvtkLeaderActor2D_SetArrowPlacementToNone, METH_VARARGS,
   (char*)"V.SetArrowPlacementToNone()\nC++: void SetArrowPlacementToNone()\n\nControl whether arrow heads are drawn on the leader. Arrows may\nbe drawn on one end, both ends, or not at all.\n"},
  {(char*)"SetArrowPlacementToPoint1", PyvtkLeaderActor2D_SetArrowPlacementToPoint1, METH_VARARGS,
   (char*)"V.SetArrowPlacementToPoint1()\nC++: void SetArrowPlacementToPoint1()\n\nControl whether arrow heads are drawn on the leader. Arrows may\nbe drawn on one end, both ends, or not at all.\n"},
  {(char*)"SetArrowPlacementToPoint2", PyvtkLeaderActor2D_SetArrowPlacementToPoint2, METH_VARARGS,
   (char*)"V.SetArrowPlacementToPoint2()\nC++: void SetArrowPlacementToPoint2()\n\nControl whether arrow heads are drawn on the leader. Arrows may\nbe drawn on one end, both ends, or not at all.\n"},
  {(char*)"SetArrowPlacementToBoth", PyvtkLeaderActor2D_SetArrowPlacementToBoth, METH_VARARGS,
   (char*)"V.SetArrowPlacementToBoth()\nC++: void SetArrowPlacementToBoth()\n\nControl whether arrow heads are drawn on the leader. Arrows may\nbe drawn on one end, both ends, or not at all.\n"},
  {(char*)"SetArrowStyle", PyvtkLeaderActor2D_SetArrowStyle, METH_VARARGS,
   (char*)"V.SetArrowStyle(int)\nC++: void SetArrowStyle(int)\n\nControl the appearance of the arrow heads. A solid arrow head is\na filled triangle; a open arrow looks like a \"V\"; and a hollow\narrow looks like a non-filled triangle.\n"},
  {(char*)"GetArrowStyleMinValue", PyvtkLeaderActor2D_GetArrowStyleMinValue, METH_VARARGS,
   (char*)"V.GetArrowStyleMinValue() -> int\nC++: int GetArrowStyleMinValue()\n\nControl the appearance of the arrow heads. A solid arrow head is\na filled triangle; a open arrow looks like a \"V\"; and a hollow\narrow looks like a non-filled triangle.\n"},
  {(char*)"GetArrowStyleMaxValue", PyvtkLeaderActor2D_GetArrowStyleMaxValue, METH_VARARGS,
   (char*)"V.GetArrowStyleMaxValue() -> int\nC++: int GetArrowStyleMaxValue()\n\nControl the appearance of the arrow heads. A solid arrow head is\na filled triangle; a open arrow looks like a \"V\"; and a hollow\narrow looks like a non-filled triangle.\n"},
  {(char*)"GetArrowStyle", PyvtkLeaderActor2D_GetArrowStyle, METH_VARARGS,
   (char*)"V.GetArrowStyle() -> int\nC++: int GetArrowStyle()\n\nControl the appearance of the arrow heads. A solid arrow head is\na filled triangle; a open arrow looks like a \"V\"; and a hollow\narrow looks like a non-filled triangle.\n"},
  {(char*)"SetArrowStyleToFilled", PyvtkLeaderActor2D_SetArrowStyleToFilled, METH_VARARGS,
   (char*)"V.SetArrowStyleToFilled()\nC++: void SetArrowStyleToFilled()\n\nControl the appearance of the arrow heads. A solid arrow head is\na filled triangle; a open arrow looks like a \"V\"; and a hollow\narrow looks like a non-filled triangle.\n"},
  {(char*)"SetArrowStyleToOpen", PyvtkLeaderActor2D_SetArrowStyleToOpen, METH_VARARGS,
   (char*)"V.SetArrowStyleToOpen()\nC++: void SetArrowStyleToOpen()\n\nControl the appearance of the arrow heads. A solid arrow head is\na filled triangle; a open arrow looks like a \"V\"; and a hollow\narrow looks like a non-filled triangle.\n"},
  {(char*)"SetArrowStyleToHollow", PyvtkLeaderActor2D_SetArrowStyleToHollow, METH_VARARGS,
   (char*)"V.SetArrowStyleToHollow()\nC++: void SetArrowStyleToHollow()\n\nControl the appearance of the arrow heads. A solid arrow head is\na filled triangle; a open arrow looks like a \"V\"; and a hollow\narrow looks like a non-filled triangle.\n"},
  {(char*)"SetArrowLength", PyvtkLeaderActor2D_SetArrowLength, METH_VARARGS,
   (char*)"V.SetArrowLength(float)\nC++: void SetArrowLength(double)\n\nSpecify the arrow length and base width (in normalized viewport\ncoordinates).\n"},
  {(char*)"GetArrowLengthMinValue", PyvtkLeaderActor2D_GetArrowLengthMinValue, METH_VARARGS,
   (char*)"V.GetArrowLengthMinValue() -> float\nC++: double GetArrowLengthMinValue()\n\nSpecify the arrow length and base width (in normalized viewport\ncoordinates).\n"},
  {(char*)"GetArrowLengthMaxValue", PyvtkLeaderActor2D_GetArrowLengthMaxValue, METH_VARARGS,
   (char*)"V.GetArrowLengthMaxValue() -> float\nC++: double GetArrowLengthMaxValue()\n\nSpecify the arrow length and base width (in normalized viewport\ncoordinates).\n"},
  {(char*)"GetArrowLength", PyvtkLeaderActor2D_GetArrowLength, METH_VARARGS,
   (char*)"V.GetArrowLength() -> float\nC++: double GetArrowLength()\n\nSpecify the arrow length and base width (in normalized viewport\ncoordinates).\n"},
  {(char*)"SetArrowWidth", PyvtkLeaderActor2D_SetArrowWidth, METH_VARARGS,
   (char*)"V.SetArrowWidth(float)\nC++: void SetArrowWidth(double)\n\nSpecify the arrow length and base width (in normalized viewport\ncoordinates).\n"},
  {(char*)"GetArrowWidthMinValue", PyvtkLeaderActor2D_GetArrowWidthMinValue, METH_VARARGS,
   (char*)"V.GetArrowWidthMinValue() -> float\nC++: double GetArrowWidthMinValue()\n\nSpecify the arrow length and base width (in normalized viewport\ncoordinates).\n"},
  {(char*)"GetArrowWidthMaxValue", PyvtkLeaderActor2D_GetArrowWidthMaxValue, METH_VARARGS,
   (char*)"V.GetArrowWidthMaxValue() -> float\nC++: double GetArrowWidthMaxValue()\n\nSpecify the arrow length and base width (in normalized viewport\ncoordinates).\n"},
  {(char*)"GetArrowWidth", PyvtkLeaderActor2D_GetArrowWidth, METH_VARARGS,
   (char*)"V.GetArrowWidth() -> float\nC++: double GetArrowWidth()\n\nSpecify the arrow length and base width (in normalized viewport\ncoordinates).\n"},
  {(char*)"SetMinimumArrowSize", PyvtkLeaderActor2D_SetMinimumArrowSize, METH_VARARGS,
   (char*)"V.SetMinimumArrowSize(float)\nC++: void SetMinimumArrowSize(double)\n\nLimit the minimum and maximum size of the arrows. These values\nare expressed in pixels and clamp the minimum/maximum possible\nsize for the width/length of the arrow head. (When clamped, the\nratio between length and width is preserved.)\n"},
  {(char*)"GetMinimumArrowSizeMinValue", PyvtkLeaderActor2D_GetMinimumArrowSizeMinValue, METH_VARARGS,
   (char*)"V.GetMinimumArrowSizeMinValue() -> float\nC++: double GetMinimumArrowSizeMinValue()\n\nLimit the minimum and maximum size of the arrows. These values\nare expressed in pixels and clamp the minimum/maximum possible\nsize for the width/length of the arrow head. (When clamped, the\nratio between length and width is preserved.)\n"},
  {(char*)"GetMinimumArrowSizeMaxValue", PyvtkLeaderActor2D_GetMinimumArrowSizeMaxValue, METH_VARARGS,
   (char*)"V.GetMinimumArrowSizeMaxValue() -> float\nC++: double GetMinimumArrowSizeMaxValue()\n\nLimit the minimum and maximum size of the arrows. These values\nare expressed in pixels and clamp the minimum/maximum possible\nsize for the width/length of the arrow head. (When clamped, the\nratio between length and width is preserved.)\n"},
  {(char*)"GetMinimumArrowSize", PyvtkLeaderActor2D_GetMinimumArrowSize, METH_VARARGS,
   (char*)"V.GetMinimumArrowSize() -> float\nC++: double GetMinimumArrowSize()\n\nLimit the minimum and maximum size of the arrows. These values\nare expressed in pixels and clamp the minimum/maximum possible\nsize for the width/length of the arrow head. (When clamped, the\nratio between length and width is preserved.)\n"},
  {(char*)"SetMaximumArrowSize", PyvtkLeaderActor2D_SetMaximumArrowSize, METH_VARARGS,
   (char*)"V.SetMaximumArrowSize(float)\nC++: void SetMaximumArrowSize(double)\n\nLimit the minimum and maximum size of the arrows. These values\nare expressed in pixels and clamp the minimum/maximum possible\nsize for the width/length of the arrow head. (When clamped, the\nratio between length and width is preserved.)\n"},
  {(char*)"GetMaximumArrowSizeMinValue", PyvtkLeaderActor2D_GetMaximumArrowSizeMinValue, METH_VARARGS,
   (char*)"V.GetMaximumArrowSizeMinValue() -> float\nC++: double GetMaximumArrowSizeMinValue()\n\nLimit the minimum and maximum size of the arrows. These values\nare expressed in pixels and clamp the minimum/maximum possible\nsize for the width/length of the arrow head. (When clamped, the\nratio between length and width is preserved.)\n"},
  {(char*)"GetMaximumArrowSizeMaxValue", PyvtkLeaderActor2D_GetMaximumArrowSizeMaxValue, METH_VARARGS,
   (char*)"V.GetMaximumArrowSizeMaxValue() -> float\nC++: double GetMaximumArrowSizeMaxValue()\n\nLimit the minimum and maximum size of the arrows. These values\nare expressed in pixels and clamp the minimum/maximum possible\nsize for the width/length of the arrow head. (When clamped, the\nratio between length and width is preserved.)\n"},
  {(char*)"GetMaximumArrowSize", PyvtkLeaderActor2D_GetMaximumArrowSize, METH_VARARGS,
   (char*)"V.GetMaximumArrowSize() -> float\nC++: double GetMaximumArrowSize()\n\nLimit the minimum and maximum size of the arrows. These values\nare expressed in pixels and clamp the minimum/maximum possible\nsize for the width/length of the arrow head. (When clamped, the\nratio between length and width is preserved.)\n"},
  {(char*)"SetAutoLabel", PyvtkLeaderActor2D_SetAutoLabel, METH_VARARGS,
   (char*)"V.SetAutoLabel(int)\nC++: void SetAutoLabel(int a)\n\nEnable auto-labelling. In this mode, the label is automatically\nupdated based on distance (in world coordinates) between the two\nend points; or if a curved leader is being generated, the angle\nin degrees between the two points.\n"},
  {(char*)"GetAutoLabel", PyvtkLeaderActor2D_GetAutoLabel, METH_VARARGS,
   (char*)"V.GetAutoLabel() -> int\nC++: int GetAutoLabel()\n\nEnable auto-labelling. In this mode, the label is automatically\nupdated based on distance (in world coordinates) between the two\nend points; or if a curved leader is being generated, the angle\nin degrees between the two points.\n"},
  {(char*)"AutoLabelOn", PyvtkLeaderActor2D_AutoLabelOn, METH_VARARGS,
   (char*)"V.AutoLabelOn()\nC++: void AutoLabelOn()\n\nEnable auto-labelling. In this mode, the label is automatically\nupdated based on distance (in world coordinates) between the two\nend points; or if a curved leader is being generated, the angle\nin degrees between the two points.\n"},
  {(char*)"AutoLabelOff", PyvtkLeaderActor2D_AutoLabelOff, METH_VARARGS,
   (char*)"V.AutoLabelOff()\nC++: void AutoLabelOff()\n\nEnable auto-labelling. In this mode, the label is automatically\nupdated based on distance (in world coordinates) between the two\nend points; or if a curved leader is being generated, the angle\nin degrees between the two points.\n"},
  {(char*)"SetLabelFormat", PyvtkLeaderActor2D_SetLabelFormat, METH_VARARGS,
   (char*)"V.SetLabelFormat(string)\nC++: void SetLabelFormat(char *)\n\nSpecify the format to use for auto-labelling.\n"},
  {(char*)"GetLabelFormat", PyvtkLeaderActor2D_GetLabelFormat, METH_VARARGS,
   (char*)"V.GetLabelFormat() -> string\nC++: char *GetLabelFormat()\n\nSpecify the format to use for auto-labelling.\n"},
  {(char*)"GetLength", PyvtkLeaderActor2D_GetLength, METH_VARARGS,
   (char*)"V.GetLength() -> float\nC++: double GetLength()\n\nObtain the length of the leader if the leader is not curved,\notherwise obtain the angle that the leader circumscribes.\n"},
  {(char*)"GetAngle", PyvtkLeaderActor2D_GetAngle, METH_VARARGS,
   (char*)"V.GetAngle() -> float\nC++: double GetAngle()\n\nObtain the length of the leader if the leader is not curved,\notherwise obtain the angle that the leader circumscribes.\n"},
  {(char*)"RenderOverlay", PyvtkLeaderActor2D_RenderOverlay, METH_VARARGS,
   (char*)"V.RenderOverlay(vtkViewport) -> int\nC++: int RenderOverlay(vtkViewport *viewport)\n\nMethods required by vtkProp and vtkActor2D superclasses.\n"},
  {(char*)"RenderOpaqueGeometry", PyvtkLeaderActor2D_RenderOpaqueGeometry, METH_VARARGS,
   (char*)"V.RenderOpaqueGeometry(vtkViewport) -> int\nC++: int RenderOpaqueGeometry(vtkViewport *viewport)\n\nMethods required by vtkProp and vtkActor2D superclasses.\n"},
  {(char*)"RenderTranslucentPolygonalGeometry", PyvtkLeaderActor2D_RenderTranslucentPolygonalGeometry, METH_VARARGS,
   (char*)"V.RenderTranslucentPolygonalGeometry(vtkViewport) -> int\nC++: virtual int RenderTranslucentPolygonalGeometry(vtkViewport *)\n\nMethods required by vtkProp and vtkActor2D superclasses.\n"},
  {(char*)"HasTranslucentPolygonalGeometry", PyvtkLeaderActor2D_HasTranslucentPolygonalGeometry, METH_VARARGS,
   (char*)"V.HasTranslucentPolygonalGeometry() -> int\nC++: virtual int HasTranslucentPolygonalGeometry()\n\nDoes this prop have some translucent polygonal geometry?\n"},
  {(char*)"ReleaseGraphicsResources", PyvtkLeaderActor2D_ReleaseGraphicsResources, METH_VARARGS,
   (char*)"V.ReleaseGraphicsResources(vtkWindow)\nC++: void ReleaseGraphicsResources(vtkWindow *)\n\n"},
  {(char*)"ShallowCopy", PyvtkLeaderActor2D_ShallowCopy, METH_VARARGS,
   (char*)"V.ShallowCopy(vtkProp)\nC++: void ShallowCopy(vtkProp *prop)\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkLeaderActor2D_StaticNew()
{
  return vtkLeaderActor2D::New();
}

PyObject *PyVTKClass_vtkLeaderActor2DNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkLeaderActor2D_StaticNew,
    PyvtkLeaderActor2D_Methods,
    "vtkLeaderActor2D", modulename,
    NULL, NULL,
    PyvtkLeaderActor2D_Doc(),
    PyVTKClass_vtkActor2DNew(modulename));

  if (cls)
    {
    PyObject *d = PyVTKClass_GetDict(cls);
    PyObject *o;

    for (int c = 0; c < 7; c++)
      {
      static const struct { const char *name; int value; }
        constants[7] = {
          { "VTK_ARROW_NONE", vtkLeaderActor2D::VTK_ARROW_NONE },
          { "VTK_ARROW_POINT1", vtkLeaderActor2D::VTK_ARROW_POINT1 },
          { "VTK_ARROW_POINT2", vtkLeaderActor2D::VTK_ARROW_POINT2 },
          { "VTK_ARROW_BOTH", vtkLeaderActor2D::VTK_ARROW_BOTH },
          { "VTK_ARROW_FILLED", vtkLeaderActor2D::VTK_ARROW_FILLED },
          { "VTK_ARROW_OPEN", vtkLeaderActor2D::VTK_ARROW_OPEN },
          { "VTK_ARROW_HOLLOW", vtkLeaderActor2D::VTK_ARROW_HOLLOW },
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

const char **PyvtkLeaderActor2D_Doc()
{
  static const char *docstring[] = {
    "vtkLeaderActor2D - create a leader with optional label and arrows\n\n",
    "Superclass: vtkActor2D\n\n",
    "vtkLeaderActor2D creates a leader with an optional label and arrows.\n(A leader is typically used to indicate distance between points.)\nvtkLeaderActor2D is a type of vtkActor2D; that is, it is drawn on the\noverlay plane and is not occluded by 3D geometry. To use this class,\nyou typically specify two points defining the start and end points of\nthe line (x-y definition using vtkCoordinate class), whe",
    "ther to place\narrows on one or both end points, and whether to label the leader.\nAlso, this class has a special feature that allows curved leaders to\nbe created by specifying a radius.\n\nUse the vtkLeaderActor2D uses its superclass vtkActor2D instance\nvariables Position and Position2 vtkCoordinates to place an instance\nof vtkLeaderActor2D (i.e., these two data members represent the start\nand end po",
    "ints of the leader).  Using these vtkCoordinates you can\nspecify the position of the leader in a variety of coordinate\nsystems.\n\nTo control the appearance of the actor, use the superclasses\nvtkActor2D::vtkProperty2D and the vtkTextProperty objects associated\nwith this actor.\n\nSee Also:\n\nvtkAxisActor2D vtkActor2D vtkCoordinate vtkTextProperty\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkLeaderActor2D(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkLeaderActor2DNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkLeaderActor2D", o) != 0)
    {
    Py_DECREF(o);
    }

}

