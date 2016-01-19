// python wrapper for vtkContextTransform
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkVector.h"
#include "vtkContextMouseEvent.h"
#include "vtkContextTransform.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkContextTransform(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkContextTransformNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkAbstractContextItemNew
extern "C" { PyObject *PyVTKClass_vtkAbstractContextItemNew(const char *); }
#define DECLARED_PyVTKClass_vtkAbstractContextItemNew
#endif

static const char **PyvtkContextTransform_Doc();


static PyObject *
PyvtkContextTransform_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextTransform *op = static_cast<vtkContextTransform *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkContextTransform::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkContextTransform_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextTransform *op = static_cast<vtkContextTransform *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkContextTransform::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkContextTransform_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextTransform *op = static_cast<vtkContextTransform *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkContextTransform *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkContextTransform::NewInstance());

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
PyvtkContextTransform_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkContextTransform *tempr = vtkContextTransform::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkContextTransform_Update(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Update");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextTransform *op = static_cast<vtkContextTransform *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Update();
      }
    else
      {
      op->vtkContextTransform::Update();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkContextTransform_Paint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Paint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextTransform *op = static_cast<vtkContextTransform *>(vp);

  vtkContext2D *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkContext2D"))
    {
    bool tempr = (ap.IsBound() ?
      op->Paint(temp0) :
      op->vtkContextTransform::Paint(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkContextTransform_Translate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Translate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextTransform *op = static_cast<vtkContextTransform *>(vp);

  float temp0;
  float temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->Translate(temp0, temp1);
      }
    else
      {
      op->vtkContextTransform::Translate(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkContextTransform_Scale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Scale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextTransform *op = static_cast<vtkContextTransform *>(vp);

  float temp0;
  float temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->Scale(temp0, temp1);
      }
    else
      {
      op->vtkContextTransform::Scale(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkContextTransform_Rotate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Rotate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextTransform *op = static_cast<vtkContextTransform *>(vp);

  float temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->Rotate(temp0);
      }
    else
      {
      op->vtkContextTransform::Rotate(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkContextTransform_GetTransform(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTransform");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextTransform *op = static_cast<vtkContextTransform *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkTransform2D *tempr = (ap.IsBound() ?
      op->GetTransform() :
      op->vtkContextTransform::GetTransform());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkContextTransform_MapToParent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MapToParent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextTransform *op = static_cast<vtkContextTransform *>(vp);

  vtkVector2f *temp0 = NULL;
  PyObject *pobj0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkVector2f"))
    {
    vtkVector2f tempr = (ap.IsBound() ?
      op->MapToParent(*temp0) :
      op->vtkContextTransform::MapToParent(*temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildSpecialObject(&tempr, "vtkVector2f");
      }
    }

  Py_XDECREF(pobj0);

  return result;
}


static PyObject *
PyvtkContextTransform_MapFromParent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MapFromParent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextTransform *op = static_cast<vtkContextTransform *>(vp);

  vtkVector2f *temp0 = NULL;
  PyObject *pobj0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkVector2f"))
    {
    vtkVector2f tempr = (ap.IsBound() ?
      op->MapFromParent(*temp0) :
      op->vtkContextTransform::MapFromParent(*temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildSpecialObject(&tempr, "vtkVector2f");
      }
    }

  Py_XDECREF(pobj0);

  return result;
}


static PyObject *
PyvtkContextTransform_SetPanMouseButton(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPanMouseButton");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextTransform *op = static_cast<vtkContextTransform *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetPanMouseButton(temp0);
      }
    else
      {
      op->vtkContextTransform::SetPanMouseButton(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkContextTransform_GetPanMouseButton(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPanMouseButton");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextTransform *op = static_cast<vtkContextTransform *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetPanMouseButton() :
      op->vtkContextTransform::GetPanMouseButton());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkContextTransform_SetPanModifier(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPanModifier");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextTransform *op = static_cast<vtkContextTransform *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetPanModifier(temp0);
      }
    else
      {
      op->vtkContextTransform::SetPanModifier(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkContextTransform_GetPanModifier(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPanModifier");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextTransform *op = static_cast<vtkContextTransform *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetPanModifier() :
      op->vtkContextTransform::GetPanModifier());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkContextTransform_SetSecondaryPanMouseButton(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSecondaryPanMouseButton");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextTransform *op = static_cast<vtkContextTransform *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetSecondaryPanMouseButton(temp0);
      }
    else
      {
      op->vtkContextTransform::SetSecondaryPanMouseButton(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkContextTransform_GetSecondaryPanMouseButton(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSecondaryPanMouseButton");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextTransform *op = static_cast<vtkContextTransform *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetSecondaryPanMouseButton() :
      op->vtkContextTransform::GetSecondaryPanMouseButton());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkContextTransform_SetSecondaryPanModifier(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSecondaryPanModifier");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextTransform *op = static_cast<vtkContextTransform *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetSecondaryPanModifier(temp0);
      }
    else
      {
      op->vtkContextTransform::SetSecondaryPanModifier(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkContextTransform_GetSecondaryPanModifier(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSecondaryPanModifier");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextTransform *op = static_cast<vtkContextTransform *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetSecondaryPanModifier() :
      op->vtkContextTransform::GetSecondaryPanModifier());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkContextTransform_SetZoomMouseButton(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetZoomMouseButton");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextTransform *op = static_cast<vtkContextTransform *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetZoomMouseButton(temp0);
      }
    else
      {
      op->vtkContextTransform::SetZoomMouseButton(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkContextTransform_GetZoomMouseButton(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetZoomMouseButton");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextTransform *op = static_cast<vtkContextTransform *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetZoomMouseButton() :
      op->vtkContextTransform::GetZoomMouseButton());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkContextTransform_SetZoomModifier(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetZoomModifier");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextTransform *op = static_cast<vtkContextTransform *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetZoomModifier(temp0);
      }
    else
      {
      op->vtkContextTransform::SetZoomModifier(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkContextTransform_GetZoomModifier(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetZoomModifier");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextTransform *op = static_cast<vtkContextTransform *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetZoomModifier() :
      op->vtkContextTransform::GetZoomModifier());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkContextTransform_SetSecondaryZoomMouseButton(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSecondaryZoomMouseButton");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextTransform *op = static_cast<vtkContextTransform *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetSecondaryZoomMouseButton(temp0);
      }
    else
      {
      op->vtkContextTransform::SetSecondaryZoomMouseButton(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkContextTransform_GetSecondaryZoomMouseButton(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSecondaryZoomMouseButton");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextTransform *op = static_cast<vtkContextTransform *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetSecondaryZoomMouseButton() :
      op->vtkContextTransform::GetSecondaryZoomMouseButton());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkContextTransform_SetSecondaryZoomModifier(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSecondaryZoomModifier");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextTransform *op = static_cast<vtkContextTransform *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetSecondaryZoomModifier(temp0);
      }
    else
      {
      op->vtkContextTransform::SetSecondaryZoomModifier(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkContextTransform_GetSecondaryZoomModifier(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSecondaryZoomModifier");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextTransform *op = static_cast<vtkContextTransform *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetSecondaryZoomModifier() :
      op->vtkContextTransform::GetSecondaryZoomModifier());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkContextTransform_SetZoomOnMouseWheel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetZoomOnMouseWheel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextTransform *op = static_cast<vtkContextTransform *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetZoomOnMouseWheel(temp0);
      }
    else
      {
      op->vtkContextTransform::SetZoomOnMouseWheel(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkContextTransform_GetZoomOnMouseWheel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetZoomOnMouseWheel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextTransform *op = static_cast<vtkContextTransform *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetZoomOnMouseWheel() :
      op->vtkContextTransform::GetZoomOnMouseWheel());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkContextTransform_ZoomOnMouseWheelOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ZoomOnMouseWheelOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextTransform *op = static_cast<vtkContextTransform *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ZoomOnMouseWheelOn();
      }
    else
      {
      op->vtkContextTransform::ZoomOnMouseWheelOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkContextTransform_ZoomOnMouseWheelOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ZoomOnMouseWheelOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextTransform *op = static_cast<vtkContextTransform *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ZoomOnMouseWheelOff();
      }
    else
      {
      op->vtkContextTransform::ZoomOnMouseWheelOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkContextTransform_SetPanYOnMouseWheel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPanYOnMouseWheel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextTransform *op = static_cast<vtkContextTransform *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetPanYOnMouseWheel(temp0);
      }
    else
      {
      op->vtkContextTransform::SetPanYOnMouseWheel(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkContextTransform_GetPanYOnMouseWheel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPanYOnMouseWheel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextTransform *op = static_cast<vtkContextTransform *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetPanYOnMouseWheel() :
      op->vtkContextTransform::GetPanYOnMouseWheel());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkContextTransform_PanYOnMouseWheelOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PanYOnMouseWheelOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextTransform *op = static_cast<vtkContextTransform *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->PanYOnMouseWheelOn();
      }
    else
      {
      op->vtkContextTransform::PanYOnMouseWheelOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkContextTransform_PanYOnMouseWheelOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PanYOnMouseWheelOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextTransform *op = static_cast<vtkContextTransform *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->PanYOnMouseWheelOff();
      }
    else
      {
      op->vtkContextTransform::PanYOnMouseWheelOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkContextTransform_Methods[] = {
  {(char*)"GetClassName", PyvtkContextTransform_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkContextTransform_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkContextTransform_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkContextTransform\nC++: vtkContextTransform *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkContextTransform_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkContextTransform\nC++: vtkContextTransform *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"Update", PyvtkContextTransform_Update, METH_VARARGS,
   (char*)"V.Update()\nC++: virtual void Update()\n\nPerform any updates to the item that may be necessary before\nrendering. The scene should take care of calling this on all\nitems before their Paint function is invoked.\n"},
  {(char*)"Paint", PyvtkContextTransform_Paint, METH_VARARGS,
   (char*)"V.Paint(vtkContext2D) -> bool\nC++: virtual bool Paint(vtkContext2D *painter)\n\nPaint event for the item, called whenever the item needs to be\ndrawn.\n"},
  {(char*)"Translate", PyvtkContextTransform_Translate, METH_VARARGS,
   (char*)"V.Translate(float, float)\nC++: virtual void Translate(float dx, float dy)\n\nTranslate the item by the specified amounts dx and dy in the x\nand y directions.\n"},
  {(char*)"Scale", PyvtkContextTransform_Scale, METH_VARARGS,
   (char*)"V.Scale(float, float)\nC++: virtual void Scale(float dx, float dy)\n\nScale the item by the specified amounts dx and dy in the x and y\ndirections.\n"},
  {(char*)"Rotate", PyvtkContextTransform_Rotate, METH_VARARGS,
   (char*)"V.Rotate(float)\nC++: virtual void Rotate(float angle)\n\nRotate the item by the specified angle.\n"},
  {(char*)"GetTransform", PyvtkContextTransform_GetTransform, METH_VARARGS,
   (char*)"V.GetTransform() -> vtkTransform2D\nC++: virtual vtkTransform2D *GetTransform()\n\nAccess the vtkTransform2D that controls object transformation.\n"},
  {(char*)"MapToParent", PyvtkContextTransform_MapToParent, METH_VARARGS,
   (char*)"V.MapToParent(vtkVector2f) -> vtkVector2f\nC++: virtual vtkVector2f MapToParent(const vtkVector2f &point)\n\nTransforms a point to the parent coordinate system.\n"},
  {(char*)"MapFromParent", PyvtkContextTransform_MapFromParent, METH_VARARGS,
   (char*)"V.MapFromParent(vtkVector2f) -> vtkVector2f\nC++: virtual vtkVector2f MapFromParent(const vtkVector2f &point)\n\nTransforms a point from the parent coordinate system.\n"},
  {(char*)"SetPanMouseButton", PyvtkContextTransform_SetPanMouseButton, METH_VARARGS,
   (char*)"V.SetPanMouseButton(int)\nC++: void SetPanMouseButton(int a)\n\nThe mouse button from vtkContextMouseEvent to use for panning.\nDefault is vtkContextMouseEvent::LEFT_BUTTON.\n"},
  {(char*)"GetPanMouseButton", PyvtkContextTransform_GetPanMouseButton, METH_VARARGS,
   (char*)"V.GetPanMouseButton() -> int\nC++: int GetPanMouseButton()\n\nThe mouse button from vtkContextMouseEvent to use for panning.\nDefault is vtkContextMouseEvent::LEFT_BUTTON.\n"},
  {(char*)"SetPanModifier", PyvtkContextTransform_SetPanModifier, METH_VARARGS,
   (char*)"V.SetPanModifier(int)\nC++: void SetPanModifier(int a)\n\nThe modifier from vtkContextMouseEvent to use for panning.\nDefault is vtkContextMouseEvent::NO_MODIFIER.\n"},
  {(char*)"GetPanModifier", PyvtkContextTransform_GetPanModifier, METH_VARARGS,
   (char*)"V.GetPanModifier() -> int\nC++: int GetPanModifier()\n\nThe modifier from vtkContextMouseEvent to use for panning.\nDefault is vtkContextMouseEvent::NO_MODIFIER.\n"},
  {(char*)"SetSecondaryPanMouseButton", PyvtkContextTransform_SetSecondaryPanMouseButton, METH_VARARGS,
   (char*)"V.SetSecondaryPanMouseButton(int)\nC++: void SetSecondaryPanMouseButton(int a)\n\nA secondary mouse button from vtkContextMouseEvent to use for\npanning. Default is vtkContextMouseEvent::NO_BUTTON (disabled).\n"},
  {(char*)"GetSecondaryPanMouseButton", PyvtkContextTransform_GetSecondaryPanMouseButton, METH_VARARGS,
   (char*)"V.GetSecondaryPanMouseButton() -> int\nC++: int GetSecondaryPanMouseButton()\n\nA secondary mouse button from vtkContextMouseEvent to use for\npanning. Default is vtkContextMouseEvent::NO_BUTTON (disabled).\n"},
  {(char*)"SetSecondaryPanModifier", PyvtkContextTransform_SetSecondaryPanModifier, METH_VARARGS,
   (char*)"V.SetSecondaryPanModifier(int)\nC++: void SetSecondaryPanModifier(int a)\n\nA secondary modifier from vtkContextMouseEvent to use for\npanning. Default is vtkContextMouseEvent::NO_MODIFIER.\n"},
  {(char*)"GetSecondaryPanModifier", PyvtkContextTransform_GetSecondaryPanModifier, METH_VARARGS,
   (char*)"V.GetSecondaryPanModifier() -> int\nC++: int GetSecondaryPanModifier()\n\nA secondary modifier from vtkContextMouseEvent to use for\npanning. Default is vtkContextMouseEvent::NO_MODIFIER.\n"},
  {(char*)"SetZoomMouseButton", PyvtkContextTransform_SetZoomMouseButton, METH_VARARGS,
   (char*)"V.SetZoomMouseButton(int)\nC++: void SetZoomMouseButton(int a)\n\nThe mouse button from vtkContextMouseEvent to use for panning.\nDefault is vtkContextMouseEvent::RIGHT_BUTTON.\n"},
  {(char*)"GetZoomMouseButton", PyvtkContextTransform_GetZoomMouseButton, METH_VARARGS,
   (char*)"V.GetZoomMouseButton() -> int\nC++: int GetZoomMouseButton()\n\nThe mouse button from vtkContextMouseEvent to use for panning.\nDefault is vtkContextMouseEvent::RIGHT_BUTTON.\n"},
  {(char*)"SetZoomModifier", PyvtkContextTransform_SetZoomModifier, METH_VARARGS,
   (char*)"V.SetZoomModifier(int)\nC++: void SetZoomModifier(int a)\n\nThe modifier from vtkContextMouseEvent to use for panning.\nDefault is vtkContextMouseEvent::NO_MODIFIER.\n"},
  {(char*)"GetZoomModifier", PyvtkContextTransform_GetZoomModifier, METH_VARARGS,
   (char*)"V.GetZoomModifier() -> int\nC++: int GetZoomModifier()\n\nThe modifier from vtkContextMouseEvent to use for panning.\nDefault is vtkContextMouseEvent::NO_MODIFIER.\n"},
  {(char*)"SetSecondaryZoomMouseButton", PyvtkContextTransform_SetSecondaryZoomMouseButton, METH_VARARGS,
   (char*)"V.SetSecondaryZoomMouseButton(int)\nC++: void SetSecondaryZoomMouseButton(int a)\n\nA secondary mouse button from vtkContextMouseEvent to use for\npanning. Default is vtkContextMouseEvent::LEFT_BUTTON.\n"},
  {(char*)"GetSecondaryZoomMouseButton", PyvtkContextTransform_GetSecondaryZoomMouseButton, METH_VARARGS,
   (char*)"V.GetSecondaryZoomMouseButton() -> int\nC++: int GetSecondaryZoomMouseButton()\n\nA secondary mouse button from vtkContextMouseEvent to use for\npanning. Default is vtkContextMouseEvent::LEFT_BUTTON.\n"},
  {(char*)"SetSecondaryZoomModifier", PyvtkContextTransform_SetSecondaryZoomModifier, METH_VARARGS,
   (char*)"V.SetSecondaryZoomModifier(int)\nC++: void SetSecondaryZoomModifier(int a)\n\nA secondary modifier from vtkContextMouseEvent to use for\npanning. Default is vtkContextMouseEvent::SHIFT_MODIFIER.\n"},
  {(char*)"GetSecondaryZoomModifier", PyvtkContextTransform_GetSecondaryZoomModifier, METH_VARARGS,
   (char*)"V.GetSecondaryZoomModifier() -> int\nC++: int GetSecondaryZoomModifier()\n\nA secondary modifier from vtkContextMouseEvent to use for\npanning. Default is vtkContextMouseEvent::SHIFT_MODIFIER.\n"},
  {(char*)"SetZoomOnMouseWheel", PyvtkContextTransform_SetZoomOnMouseWheel, METH_VARARGS,
   (char*)"V.SetZoomOnMouseWheel(bool)\nC++: void SetZoomOnMouseWheel(bool a)\n\nWhether to zoom on mouse wheels. Default is true.\n"},
  {(char*)"GetZoomOnMouseWheel", PyvtkContextTransform_GetZoomOnMouseWheel, METH_VARARGS,
   (char*)"V.GetZoomOnMouseWheel() -> bool\nC++: bool GetZoomOnMouseWheel()\n\nWhether to zoom on mouse wheels. Default is true.\n"},
  {(char*)"ZoomOnMouseWheelOn", PyvtkContextTransform_ZoomOnMouseWheelOn, METH_VARARGS,
   (char*)"V.ZoomOnMouseWheelOn()\nC++: void ZoomOnMouseWheelOn()\n\nWhether to zoom on mouse wheels. Default is true.\n"},
  {(char*)"ZoomOnMouseWheelOff", PyvtkContextTransform_ZoomOnMouseWheelOff, METH_VARARGS,
   (char*)"V.ZoomOnMouseWheelOff()\nC++: void ZoomOnMouseWheelOff()\n\nWhether to zoom on mouse wheels. Default is true.\n"},
  {(char*)"SetPanYOnMouseWheel", PyvtkContextTransform_SetPanYOnMouseWheel, METH_VARARGS,
   (char*)"V.SetPanYOnMouseWheel(bool)\nC++: void SetPanYOnMouseWheel(bool a)\n\nWhether to pan in the Y direction on mouse wheels. Default is\nfalse.\n"},
  {(char*)"GetPanYOnMouseWheel", PyvtkContextTransform_GetPanYOnMouseWheel, METH_VARARGS,
   (char*)"V.GetPanYOnMouseWheel() -> bool\nC++: bool GetPanYOnMouseWheel()\n\nWhether to pan in the Y direction on mouse wheels. Default is\nfalse.\n"},
  {(char*)"PanYOnMouseWheelOn", PyvtkContextTransform_PanYOnMouseWheelOn, METH_VARARGS,
   (char*)"V.PanYOnMouseWheelOn()\nC++: void PanYOnMouseWheelOn()\n\nWhether to pan in the Y direction on mouse wheels. Default is\nfalse.\n"},
  {(char*)"PanYOnMouseWheelOff", PyvtkContextTransform_PanYOnMouseWheelOff, METH_VARARGS,
   (char*)"V.PanYOnMouseWheelOff()\nC++: void PanYOnMouseWheelOff()\n\nWhether to pan in the Y direction on mouse wheels. Default is\nfalse.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkContextTransform_StaticNew()
{
  return vtkContextTransform::New();
}

PyObject *PyVTKClass_vtkContextTransformNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkContextTransform_StaticNew,
    PyvtkContextTransform_Methods,
    "vtkContextTransform", modulename,
    NULL, NULL,
    PyvtkContextTransform_Doc(),
    PyVTKClass_vtkAbstractContextItemNew(modulename));
  return cls;
}

const char **PyvtkContextTransform_Doc()
{
  static const char *docstring[] = {
    "vtkContextTransform - all children of this item are transformed\n\n",
    "Superclass: vtkAbstractContextItem\n\n",
    "This class can be used to transform all child items of this class.\nThe default transform is the identity.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkContextTransform(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkContextTransformNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkContextTransform", o) != 0)
    {
    Py_DECREF(o);
    }

}

