// python wrapper for vtkImageTracerWidget
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkImageTracerWidget.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkImageTracerWidget(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkImageTracerWidgetNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtk3DWidgetNew
extern "C" { PyObject *PyVTKClass_vtk3DWidgetNew(const char *); }
#define DECLARED_PyVTKClass_vtk3DWidgetNew
#endif

static const char **PyvtkImageTracerWidget_Doc();


static PyObject *
PyvtkImageTracerWidget_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageTracerWidget *op = static_cast<vtkImageTracerWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkImageTracerWidget::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageTracerWidget_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageTracerWidget *op = static_cast<vtkImageTracerWidget *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkImageTracerWidget::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageTracerWidget_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageTracerWidget *op = static_cast<vtkImageTracerWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkImageTracerWidget *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkImageTracerWidget::NewInstance());

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
PyvtkImageTracerWidget_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkImageTracerWidget *tempr = vtkImageTracerWidget::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageTracerWidget_SetEnabled(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEnabled");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageTracerWidget *op = static_cast<vtkImageTracerWidget *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetEnabled(temp0);
      }
    else
      {
      op->vtkImageTracerWidget::SetEnabled(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageTracerWidget_PlaceWidget_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PlaceWidget");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageTracerWidget *op = static_cast<vtkImageTracerWidget *>(vp);

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
      op->vtkImageTracerWidget::PlaceWidget(temp0);
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
PyvtkImageTracerWidget_PlaceWidget_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PlaceWidget");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageTracerWidget *op = static_cast<vtkImageTracerWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->PlaceWidget();
      }
    else
      {
      op->vtkImageTracerWidget::PlaceWidget();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkImageTracerWidget_PlaceWidget_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PlaceWidget");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageTracerWidget *op = static_cast<vtkImageTracerWidget *>(vp);

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
      op->PlaceWidget(temp0, temp1, temp2, temp3, temp4, temp5);
      }
    else
      {
      op->vtkImageTracerWidget::PlaceWidget(temp0, temp1, temp2, temp3, temp4, temp5);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkImageTracerWidget_PlaceWidget(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkImageTracerWidget_PlaceWidget_s1(self, args);
    case 0:
      return PyvtkImageTracerWidget_PlaceWidget_s2(self, args);
    case 6:
      return PyvtkImageTracerWidget_PlaceWidget_s3(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "PlaceWidget");
  return NULL;
}



static PyObject *
PyvtkImageTracerWidget_SetHandleProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHandleProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageTracerWidget *op = static_cast<vtkImageTracerWidget *>(vp);

  vtkProperty *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkProperty"))
    {
    if (ap.IsBound())
      {
      op->SetHandleProperty(temp0);
      }
    else
      {
      op->vtkImageTracerWidget::SetHandleProperty(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageTracerWidget_GetHandleProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHandleProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageTracerWidget *op = static_cast<vtkImageTracerWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetHandleProperty() :
      op->vtkImageTracerWidget::GetHandleProperty());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageTracerWidget_SetSelectedHandleProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSelectedHandleProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageTracerWidget *op = static_cast<vtkImageTracerWidget *>(vp);

  vtkProperty *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkProperty"))
    {
    if (ap.IsBound())
      {
      op->SetSelectedHandleProperty(temp0);
      }
    else
      {
      op->vtkImageTracerWidget::SetSelectedHandleProperty(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageTracerWidget_GetSelectedHandleProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelectedHandleProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageTracerWidget *op = static_cast<vtkImageTracerWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetSelectedHandleProperty() :
      op->vtkImageTracerWidget::GetSelectedHandleProperty());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageTracerWidget_SetLineProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLineProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageTracerWidget *op = static_cast<vtkImageTracerWidget *>(vp);

  vtkProperty *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkProperty"))
    {
    if (ap.IsBound())
      {
      op->SetLineProperty(temp0);
      }
    else
      {
      op->vtkImageTracerWidget::SetLineProperty(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageTracerWidget_GetLineProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLineProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageTracerWidget *op = static_cast<vtkImageTracerWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetLineProperty() :
      op->vtkImageTracerWidget::GetLineProperty());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageTracerWidget_SetSelectedLineProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSelectedLineProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageTracerWidget *op = static_cast<vtkImageTracerWidget *>(vp);

  vtkProperty *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkProperty"))
    {
    if (ap.IsBound())
      {
      op->SetSelectedLineProperty(temp0);
      }
    else
      {
      op->vtkImageTracerWidget::SetSelectedLineProperty(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageTracerWidget_GetSelectedLineProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelectedLineProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageTracerWidget *op = static_cast<vtkImageTracerWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetSelectedLineProperty() :
      op->vtkImageTracerWidget::GetSelectedLineProperty());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageTracerWidget_SetViewProp(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetViewProp");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageTracerWidget *op = static_cast<vtkImageTracerWidget *>(vp);

  vtkProp *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkProp"))
    {
    if (ap.IsBound())
      {
      op->SetViewProp(temp0);
      }
    else
      {
      op->vtkImageTracerWidget::SetViewProp(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageTracerWidget_SetProjectToPlane(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetProjectToPlane");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageTracerWidget *op = static_cast<vtkImageTracerWidget *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetProjectToPlane(temp0);
      }
    else
      {
      op->vtkImageTracerWidget::SetProjectToPlane(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageTracerWidget_GetProjectToPlane(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProjectToPlane");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageTracerWidget *op = static_cast<vtkImageTracerWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetProjectToPlane() :
      op->vtkImageTracerWidget::GetProjectToPlane());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageTracerWidget_ProjectToPlaneOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ProjectToPlaneOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageTracerWidget *op = static_cast<vtkImageTracerWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ProjectToPlaneOn();
      }
    else
      {
      op->vtkImageTracerWidget::ProjectToPlaneOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageTracerWidget_ProjectToPlaneOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ProjectToPlaneOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageTracerWidget *op = static_cast<vtkImageTracerWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ProjectToPlaneOff();
      }
    else
      {
      op->vtkImageTracerWidget::ProjectToPlaneOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageTracerWidget_SetProjectionNormal(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetProjectionNormal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageTracerWidget *op = static_cast<vtkImageTracerWidget *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetProjectionNormal(temp0);
      }
    else
      {
      op->vtkImageTracerWidget::SetProjectionNormal(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageTracerWidget_GetProjectionNormalMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProjectionNormalMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageTracerWidget *op = static_cast<vtkImageTracerWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetProjectionNormalMinValue() :
      op->vtkImageTracerWidget::GetProjectionNormalMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageTracerWidget_GetProjectionNormalMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProjectionNormalMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageTracerWidget *op = static_cast<vtkImageTracerWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetProjectionNormalMaxValue() :
      op->vtkImageTracerWidget::GetProjectionNormalMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageTracerWidget_GetProjectionNormal(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProjectionNormal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageTracerWidget *op = static_cast<vtkImageTracerWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetProjectionNormal() :
      op->vtkImageTracerWidget::GetProjectionNormal());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageTracerWidget_SetProjectionNormalToXAxes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetProjectionNormalToXAxes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageTracerWidget *op = static_cast<vtkImageTracerWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetProjectionNormalToXAxes();
      }
    else
      {
      op->vtkImageTracerWidget::SetProjectionNormalToXAxes();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageTracerWidget_SetProjectionNormalToYAxes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetProjectionNormalToYAxes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageTracerWidget *op = static_cast<vtkImageTracerWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetProjectionNormalToYAxes();
      }
    else
      {
      op->vtkImageTracerWidget::SetProjectionNormalToYAxes();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageTracerWidget_SetProjectionNormalToZAxes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetProjectionNormalToZAxes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageTracerWidget *op = static_cast<vtkImageTracerWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetProjectionNormalToZAxes();
      }
    else
      {
      op->vtkImageTracerWidget::SetProjectionNormalToZAxes();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageTracerWidget_SetProjectionPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetProjectionPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageTracerWidget *op = static_cast<vtkImageTracerWidget *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetProjectionPosition(temp0);
      }
    else
      {
      op->vtkImageTracerWidget::SetProjectionPosition(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageTracerWidget_GetProjectionPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProjectionPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageTracerWidget *op = static_cast<vtkImageTracerWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetProjectionPosition() :
      op->vtkImageTracerWidget::GetProjectionPosition());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageTracerWidget_SetSnapToImage(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSnapToImage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageTracerWidget *op = static_cast<vtkImageTracerWidget *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetSnapToImage(temp0);
      }
    else
      {
      op->vtkImageTracerWidget::SetSnapToImage(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageTracerWidget_GetSnapToImage(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSnapToImage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageTracerWidget *op = static_cast<vtkImageTracerWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetSnapToImage() :
      op->vtkImageTracerWidget::GetSnapToImage());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageTracerWidget_SnapToImageOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SnapToImageOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageTracerWidget *op = static_cast<vtkImageTracerWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SnapToImageOn();
      }
    else
      {
      op->vtkImageTracerWidget::SnapToImageOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageTracerWidget_SnapToImageOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SnapToImageOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageTracerWidget *op = static_cast<vtkImageTracerWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SnapToImageOff();
      }
    else
      {
      op->vtkImageTracerWidget::SnapToImageOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageTracerWidget_SetAutoClose(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAutoClose");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageTracerWidget *op = static_cast<vtkImageTracerWidget *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetAutoClose(temp0);
      }
    else
      {
      op->vtkImageTracerWidget::SetAutoClose(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageTracerWidget_GetAutoClose(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAutoClose");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageTracerWidget *op = static_cast<vtkImageTracerWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetAutoClose() :
      op->vtkImageTracerWidget::GetAutoClose());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageTracerWidget_AutoCloseOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AutoCloseOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageTracerWidget *op = static_cast<vtkImageTracerWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->AutoCloseOn();
      }
    else
      {
      op->vtkImageTracerWidget::AutoCloseOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageTracerWidget_AutoCloseOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AutoCloseOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageTracerWidget *op = static_cast<vtkImageTracerWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->AutoCloseOff();
      }
    else
      {
      op->vtkImageTracerWidget::AutoCloseOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageTracerWidget_SetCaptureRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCaptureRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageTracerWidget *op = static_cast<vtkImageTracerWidget *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetCaptureRadius(temp0);
      }
    else
      {
      op->vtkImageTracerWidget::SetCaptureRadius(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageTracerWidget_GetCaptureRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCaptureRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageTracerWidget *op = static_cast<vtkImageTracerWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetCaptureRadius() :
      op->vtkImageTracerWidget::GetCaptureRadius());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageTracerWidget_GetPath(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPath");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageTracerWidget *op = static_cast<vtkImageTracerWidget *>(vp);

  vtkPolyData *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPolyData"))
    {
    if (ap.IsBound())
      {
      op->GetPath(temp0);
      }
    else
      {
      op->vtkImageTracerWidget::GetPath(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageTracerWidget_GetGlyphSource(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGlyphSource");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageTracerWidget *op = static_cast<vtkImageTracerWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkGlyphSource2D *tempr = (ap.IsBound() ?
      op->GetGlyphSource() :
      op->vtkImageTracerWidget::GetGlyphSource());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageTracerWidget_SetImageSnapType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetImageSnapType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageTracerWidget *op = static_cast<vtkImageTracerWidget *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetImageSnapType(temp0);
      }
    else
      {
      op->vtkImageTracerWidget::SetImageSnapType(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageTracerWidget_GetImageSnapTypeMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetImageSnapTypeMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageTracerWidget *op = static_cast<vtkImageTracerWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetImageSnapTypeMinValue() :
      op->vtkImageTracerWidget::GetImageSnapTypeMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageTracerWidget_GetImageSnapTypeMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetImageSnapTypeMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageTracerWidget *op = static_cast<vtkImageTracerWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetImageSnapTypeMaxValue() :
      op->vtkImageTracerWidget::GetImageSnapTypeMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageTracerWidget_GetImageSnapType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetImageSnapType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageTracerWidget *op = static_cast<vtkImageTracerWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetImageSnapType() :
      op->vtkImageTracerWidget::GetImageSnapType());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageTracerWidget_SetHandlePosition_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHandlePosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageTracerWidget *op = static_cast<vtkImageTracerWidget *>(vp);

  int temp0;
  double temp1[3];
  double save1[3];
  const int size1 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
    {
    ap.SaveArray(temp1, save1, size1);

    if (ap.IsBound())
      {
      op->SetHandlePosition(temp0, temp1);
      }
    else
      {
      op->vtkImageTracerWidget::SetHandlePosition(temp0, temp1);
      }

    if (ap.ArrayHasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(1, temp1, size1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkImageTracerWidget_SetHandlePosition_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHandlePosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageTracerWidget *op = static_cast<vtkImageTracerWidget *>(vp);

  int temp0;
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
    if (ap.IsBound())
      {
      op->SetHandlePosition(temp0, temp1, temp2, temp3);
      }
    else
      {
      op->vtkImageTracerWidget::SetHandlePosition(temp0, temp1, temp2, temp3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkImageTracerWidget_SetHandlePosition(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkImageTracerWidget_SetHandlePosition_s1(self, args);
    case 4:
      return PyvtkImageTracerWidget_SetHandlePosition_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetHandlePosition");
  return NULL;
}



static PyObject *
PyvtkImageTracerWidget_GetHandlePosition_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHandlePosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageTracerWidget *op = static_cast<vtkImageTracerWidget *>(vp);

  int temp0;
  double temp1[3];
  double save1[3];
  const int size1 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
    {
    ap.SaveArray(temp1, save1, size1);

    if (ap.IsBound())
      {
      op->GetHandlePosition(temp0, temp1);
      }
    else
      {
      op->vtkImageTracerWidget::GetHandlePosition(temp0, temp1);
      }

    if (ap.ArrayHasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(1, temp1, size1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkImageTracerWidget_GetHandlePosition_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHandlePosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageTracerWidget *op = static_cast<vtkImageTracerWidget *>(vp);

  int temp0;
  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetHandlePosition(temp0) :
      op->vtkImageTracerWidget::GetHandlePosition(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}

static PyObject *
PyvtkImageTracerWidget_GetHandlePosition(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkImageTracerWidget_GetHandlePosition_s1(self, args);
    case 1:
      return PyvtkImageTracerWidget_GetHandlePosition_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetHandlePosition");
  return NULL;
}



static PyObject *
PyvtkImageTracerWidget_GetNumberOfHandles(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfHandles");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageTracerWidget *op = static_cast<vtkImageTracerWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfHandles() :
      op->vtkImageTracerWidget::GetNumberOfHandles());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageTracerWidget_SetInteraction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInteraction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageTracerWidget *op = static_cast<vtkImageTracerWidget *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetInteraction(temp0);
      }
    else
      {
      op->vtkImageTracerWidget::SetInteraction(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageTracerWidget_GetInteraction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInteraction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageTracerWidget *op = static_cast<vtkImageTracerWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetInteraction() :
      op->vtkImageTracerWidget::GetInteraction());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageTracerWidget_InteractionOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InteractionOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageTracerWidget *op = static_cast<vtkImageTracerWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->InteractionOn();
      }
    else
      {
      op->vtkImageTracerWidget::InteractionOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageTracerWidget_InteractionOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InteractionOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageTracerWidget *op = static_cast<vtkImageTracerWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->InteractionOff();
      }
    else
      {
      op->vtkImageTracerWidget::InteractionOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageTracerWidget_InitializeHandles(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InitializeHandles");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageTracerWidget *op = static_cast<vtkImageTracerWidget *>(vp);

  vtkPoints *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPoints"))
    {
    if (ap.IsBound())
      {
      op->InitializeHandles(temp0);
      }
    else
      {
      op->vtkImageTracerWidget::InitializeHandles(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageTracerWidget_IsClosed(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsClosed");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageTracerWidget *op = static_cast<vtkImageTracerWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->IsClosed() :
      op->vtkImageTracerWidget::IsClosed());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageTracerWidget_SetHandleLeftMouseButton(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHandleLeftMouseButton");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageTracerWidget *op = static_cast<vtkImageTracerWidget *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetHandleLeftMouseButton(temp0);
      }
    else
      {
      op->vtkImageTracerWidget::SetHandleLeftMouseButton(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageTracerWidget_GetHandleLeftMouseButton(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHandleLeftMouseButton");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageTracerWidget *op = static_cast<vtkImageTracerWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetHandleLeftMouseButton() :
      op->vtkImageTracerWidget::GetHandleLeftMouseButton());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageTracerWidget_HandleLeftMouseButtonOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HandleLeftMouseButtonOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageTracerWidget *op = static_cast<vtkImageTracerWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->HandleLeftMouseButtonOn();
      }
    else
      {
      op->vtkImageTracerWidget::HandleLeftMouseButtonOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageTracerWidget_HandleLeftMouseButtonOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HandleLeftMouseButtonOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageTracerWidget *op = static_cast<vtkImageTracerWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->HandleLeftMouseButtonOff();
      }
    else
      {
      op->vtkImageTracerWidget::HandleLeftMouseButtonOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageTracerWidget_SetHandleMiddleMouseButton(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHandleMiddleMouseButton");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageTracerWidget *op = static_cast<vtkImageTracerWidget *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetHandleMiddleMouseButton(temp0);
      }
    else
      {
      op->vtkImageTracerWidget::SetHandleMiddleMouseButton(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageTracerWidget_GetHandleMiddleMouseButton(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHandleMiddleMouseButton");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageTracerWidget *op = static_cast<vtkImageTracerWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetHandleMiddleMouseButton() :
      op->vtkImageTracerWidget::GetHandleMiddleMouseButton());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageTracerWidget_HandleMiddleMouseButtonOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HandleMiddleMouseButtonOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageTracerWidget *op = static_cast<vtkImageTracerWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->HandleMiddleMouseButtonOn();
      }
    else
      {
      op->vtkImageTracerWidget::HandleMiddleMouseButtonOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageTracerWidget_HandleMiddleMouseButtonOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HandleMiddleMouseButtonOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageTracerWidget *op = static_cast<vtkImageTracerWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->HandleMiddleMouseButtonOff();
      }
    else
      {
      op->vtkImageTracerWidget::HandleMiddleMouseButtonOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageTracerWidget_SetHandleRightMouseButton(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHandleRightMouseButton");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageTracerWidget *op = static_cast<vtkImageTracerWidget *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetHandleRightMouseButton(temp0);
      }
    else
      {
      op->vtkImageTracerWidget::SetHandleRightMouseButton(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageTracerWidget_GetHandleRightMouseButton(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHandleRightMouseButton");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageTracerWidget *op = static_cast<vtkImageTracerWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetHandleRightMouseButton() :
      op->vtkImageTracerWidget::GetHandleRightMouseButton());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageTracerWidget_HandleRightMouseButtonOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HandleRightMouseButtonOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageTracerWidget *op = static_cast<vtkImageTracerWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->HandleRightMouseButtonOn();
      }
    else
      {
      op->vtkImageTracerWidget::HandleRightMouseButtonOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageTracerWidget_HandleRightMouseButtonOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HandleRightMouseButtonOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageTracerWidget *op = static_cast<vtkImageTracerWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->HandleRightMouseButtonOff();
      }
    else
      {
      op->vtkImageTracerWidget::HandleRightMouseButtonOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


#if !defined(VTK_LEGACY_REMOVE)
static PyObject *
PyvtkImageTracerWidget_SetProp(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetProp");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageTracerWidget *op = static_cast<vtkImageTracerWidget *>(vp);

  vtkProp *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkProp"))
    {
    if (ap.IsBound())
      {
      op->SetProp(temp0);
      }
    else
      {
      op->vtkImageTracerWidget::SetProp(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}
#endif

static PyMethodDef PyvtkImageTracerWidget_Methods[] = {
  {(char*)"GetClassName", PyvtkImageTracerWidget_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkImageTracerWidget_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkImageTracerWidget_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkImageTracerWidget\nC++: vtkImageTracerWidget *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkImageTracerWidget_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkImageTracerWidget\nC++: vtkImageTracerWidget *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetEnabled", PyvtkImageTracerWidget_SetEnabled, METH_VARARGS,
   (char*)"V.SetEnabled(int)\nC++: virtual void SetEnabled(int)\n\nMethods that satisfy the superclass' API.\n"},
  {(char*)"PlaceWidget", PyvtkImageTracerWidget_PlaceWidget, METH_VARARGS,
   (char*)"V.PlaceWidget([float, float, float, float, float, float])\nC++: virtual void PlaceWidget(double bounds[6])\nV.PlaceWidget()\nC++: void PlaceWidget()\nV.PlaceWidget(float, float, float, float, float, float)\nC++: void PlaceWidget(double xmin, double xmax, double ymin,\n    double ymax, double zmin, double zmax)\n\nMethods that satisfy the superclass' API.\n"},
  {(char*)"SetHandleProperty", PyvtkImageTracerWidget_SetHandleProperty, METH_VARARGS,
   (char*)"V.SetHandleProperty(vtkProperty)\nC++: virtual void SetHandleProperty(vtkProperty *)\n\nSet/Get the handle properties (the 2D glyphs are the handles).\nThe properties of the handles when selected and normal can be\nmanipulated.\n"},
  {(char*)"GetHandleProperty", PyvtkImageTracerWidget_GetHandleProperty, METH_VARARGS,
   (char*)"V.GetHandleProperty() -> vtkProperty\nC++: vtkProperty *GetHandleProperty()\n\nSet/Get the handle properties (the 2D glyphs are the handles).\nThe properties of the handles when selected and normal can be\nmanipulated.\n"},
  {(char*)"SetSelectedHandleProperty", PyvtkImageTracerWidget_SetSelectedHandleProperty, METH_VARARGS,
   (char*)"V.SetSelectedHandleProperty(vtkProperty)\nC++: virtual void SetSelectedHandleProperty(vtkProperty *)\n\nSet/Get the handle properties (the 2D glyphs are the handles).\nThe properties of the handles when selected and normal can be\nmanipulated.\n"},
  {(char*)"GetSelectedHandleProperty", PyvtkImageTracerWidget_GetSelectedHandleProperty, METH_VARARGS,
   (char*)"V.GetSelectedHandleProperty() -> vtkProperty\nC++: vtkProperty *GetSelectedHandleProperty()\n\nSet/Get the handle properties (the 2D glyphs are the handles).\nThe properties of the handles when selected and normal can be\nmanipulated.\n"},
  {(char*)"SetLineProperty", PyvtkImageTracerWidget_SetLineProperty, METH_VARARGS,
   (char*)"V.SetLineProperty(vtkProperty)\nC++: virtual void SetLineProperty(vtkProperty *)\n\nSet/Get the line properties. The properties of the line when\nselected and unselected can be manipulated.\n"},
  {(char*)"GetLineProperty", PyvtkImageTracerWidget_GetLineProperty, METH_VARARGS,
   (char*)"V.GetLineProperty() -> vtkProperty\nC++: vtkProperty *GetLineProperty()\n\nSet/Get the line properties. The properties of the line when\nselected and unselected can be manipulated.\n"},
  {(char*)"SetSelectedLineProperty", PyvtkImageTracerWidget_SetSelectedLineProperty, METH_VARARGS,
   (char*)"V.SetSelectedLineProperty(vtkProperty)\nC++: virtual void SetSelectedLineProperty(vtkProperty *)\n\nSet/Get the line properties. The properties of the line when\nselected and unselected can be manipulated.\n"},
  {(char*)"GetSelectedLineProperty", PyvtkImageTracerWidget_GetSelectedLineProperty, METH_VARARGS,
   (char*)"V.GetSelectedLineProperty() -> vtkProperty\nC++: vtkProperty *GetSelectedLineProperty()\n\nSet/Get the line properties. The properties of the line when\nselected and unselected can be manipulated.\n"},
  {(char*)"SetViewProp", PyvtkImageTracerWidget_SetViewProp, METH_VARARGS,
   (char*)"V.SetViewProp(vtkProp)\nC++: void SetViewProp(vtkProp *prop)\n\nSet the prop, usually a vtkImageActor, to trace over.\n"},
  {(char*)"SetProjectToPlane", PyvtkImageTracerWidget_SetProjectToPlane, METH_VARARGS,
   (char*)"V.SetProjectToPlane(int)\nC++: void SetProjectToPlane(int a)\n\nForce handles to be on a specific ortho plane. Default is Off.\n"},
  {(char*)"GetProjectToPlane", PyvtkImageTracerWidget_GetProjectToPlane, METH_VARARGS,
   (char*)"V.GetProjectToPlane() -> int\nC++: int GetProjectToPlane()\n\nForce handles to be on a specific ortho plane. Default is Off.\n"},
  {(char*)"ProjectToPlaneOn", PyvtkImageTracerWidget_ProjectToPlaneOn, METH_VARARGS,
   (char*)"V.ProjectToPlaneOn()\nC++: void ProjectToPlaneOn()\n\nForce handles to be on a specific ortho plane. Default is Off.\n"},
  {(char*)"ProjectToPlaneOff", PyvtkImageTracerWidget_ProjectToPlaneOff, METH_VARARGS,
   (char*)"V.ProjectToPlaneOff()\nC++: void ProjectToPlaneOff()\n\nForce handles to be on a specific ortho plane. Default is Off.\n"},
  {(char*)"SetProjectionNormal", PyvtkImageTracerWidget_SetProjectionNormal, METH_VARARGS,
   (char*)"V.SetProjectionNormal(int)\nC++: void SetProjectionNormal(int)\n\nSet the projection normal.  The normal in SetProjectionNormal is\n0,1,2 for YZ,XZ,XY planes respectively.  Since the handles are 2D\nglyphs, it is necessary to specify a plane on which to generate\nthem, even though ProjectToPlane may be turned off.\n"},
  {(char*)"GetProjectionNormalMinValue", PyvtkImageTracerWidget_GetProjectionNormalMinValue, METH_VARARGS,
   (char*)"V.GetProjectionNormalMinValue() -> int\nC++: int GetProjectionNormalMinValue()\n\nSet the projection normal.  The normal in SetProjectionNormal is\n0,1,2 for YZ,XZ,XY planes respectively.  Since the handles are 2D\nglyphs, it is necessary to specify a plane on which to generate\nthem, even though ProjectToPlane may be turned off.\n"},
  {(char*)"GetProjectionNormalMaxValue", PyvtkImageTracerWidget_GetProjectionNormalMaxValue, METH_VARARGS,
   (char*)"V.GetProjectionNormalMaxValue() -> int\nC++: int GetProjectionNormalMaxValue()\n\nSet the projection normal.  The normal in SetProjectionNormal is\n0,1,2 for YZ,XZ,XY planes respectively.  Since the handles are 2D\nglyphs, it is necessary to specify a plane on which to generate\nthem, even though ProjectToPlane may be turned off.\n"},
  {(char*)"GetProjectionNormal", PyvtkImageTracerWidget_GetProjectionNormal, METH_VARARGS,
   (char*)"V.GetProjectionNormal() -> int\nC++: int GetProjectionNormal()\n\nSet the projection normal.  The normal in SetProjectionNormal is\n0,1,2 for YZ,XZ,XY planes respectively.  Since the handles are 2D\nglyphs, it is necessary to specify a plane on which to generate\nthem, even though ProjectToPlane may be turned off.\n"},
  {(char*)"SetProjectionNormalToXAxes", PyvtkImageTracerWidget_SetProjectionNormalToXAxes, METH_VARARGS,
   (char*)"V.SetProjectionNormalToXAxes()\nC++: void SetProjectionNormalToXAxes()\n\nSet the projection normal.  The normal in SetProjectionNormal is\n0,1,2 for YZ,XZ,XY planes respectively.  Since the handles are 2D\nglyphs, it is necessary to specify a plane on which to generate\nthem, even though ProjectToPlane may be turned off.\n"},
  {(char*)"SetProjectionNormalToYAxes", PyvtkImageTracerWidget_SetProjectionNormalToYAxes, METH_VARARGS,
   (char*)"V.SetProjectionNormalToYAxes()\nC++: void SetProjectionNormalToYAxes()\n\nSet the projection normal.  The normal in SetProjectionNormal is\n0,1,2 for YZ,XZ,XY planes respectively.  Since the handles are 2D\nglyphs, it is necessary to specify a plane on which to generate\nthem, even though ProjectToPlane may be turned off.\n"},
  {(char*)"SetProjectionNormalToZAxes", PyvtkImageTracerWidget_SetProjectionNormalToZAxes, METH_VARARGS,
   (char*)"V.SetProjectionNormalToZAxes()\nC++: void SetProjectionNormalToZAxes()\n\nSet the projection normal.  The normal in SetProjectionNormal is\n0,1,2 for YZ,XZ,XY planes respectively.  Since the handles are 2D\nglyphs, it is necessary to specify a plane on which to generate\nthem, even though ProjectToPlane may be turned off.\n"},
  {(char*)"SetProjectionPosition", PyvtkImageTracerWidget_SetProjectionPosition, METH_VARARGS,
   (char*)"V.SetProjectionPosition(float)\nC++: void SetProjectionPosition(double position)\n\nSet the position of the widgets' handles in terms of a plane's\nposition. e.g., if ProjectionNormal is 0, all of the x-coordinate\nvalues of the handles are set to ProjectionPosition.  No attempt\nis made to ensure that the position is within the bounds of\neither the underlying image data or the prop on which tracing is\nperformed.\n"},
  {(char*)"GetProjectionPosition", PyvtkImageTracerWidget_GetProjectionPosition, METH_VARARGS,
   (char*)"V.GetProjectionPosition() -> float\nC++: double GetProjectionPosition()\n\nSet the position of the widgets' handles in terms of a plane's\nposition. e.g., if ProjectionNormal is 0, all of the x-coordinate\nvalues of the handles are set to ProjectionPosition.  No attempt\nis made to ensure that the position is within the bounds of\neither the underlying image data or the prop on which tracing is\nperformed.\n"},
  {(char*)"SetSnapToImage", PyvtkImageTracerWidget_SetSnapToImage, METH_VARARGS,
   (char*)"V.SetSnapToImage(int)\nC++: void SetSnapToImage(int snap)\n\nForce snapping to image data while tracing. Default is Off.\n"},
  {(char*)"GetSnapToImage", PyvtkImageTracerWidget_GetSnapToImage, METH_VARARGS,
   (char*)"V.GetSnapToImage() -> int\nC++: int GetSnapToImage()\n\nForce snapping to image data while tracing. Default is Off.\n"},
  {(char*)"SnapToImageOn", PyvtkImageTracerWidget_SnapToImageOn, METH_VARARGS,
   (char*)"V.SnapToImageOn()\nC++: void SnapToImageOn()\n\nForce snapping to image data while tracing. Default is Off.\n"},
  {(char*)"SnapToImageOff", PyvtkImageTracerWidget_SnapToImageOff, METH_VARARGS,
   (char*)"V.SnapToImageOff()\nC++: void SnapToImageOff()\n\nForce snapping to image data while tracing. Default is Off.\n"},
  {(char*)"SetAutoClose", PyvtkImageTracerWidget_SetAutoClose, METH_VARARGS,
   (char*)"V.SetAutoClose(int)\nC++: void SetAutoClose(int a)\n\nIn concert with a CaptureRadius value, automatically form a\nclosed path by connecting first to last path points. Default is\nOff.\n"},
  {(char*)"GetAutoClose", PyvtkImageTracerWidget_GetAutoClose, METH_VARARGS,
   (char*)"V.GetAutoClose() -> int\nC++: int GetAutoClose()\n\nIn concert with a CaptureRadius value, automatically form a\nclosed path by connecting first to last path points. Default is\nOff.\n"},
  {(char*)"AutoCloseOn", PyvtkImageTracerWidget_AutoCloseOn, METH_VARARGS,
   (char*)"V.AutoCloseOn()\nC++: void AutoCloseOn()\n\nIn concert with a CaptureRadius value, automatically form a\nclosed path by connecting first to last path points. Default is\nOff.\n"},
  {(char*)"AutoCloseOff", PyvtkImageTracerWidget_AutoCloseOff, METH_VARARGS,
   (char*)"V.AutoCloseOff()\nC++: void AutoCloseOff()\n\nIn concert with a CaptureRadius value, automatically form a\nclosed path by connecting first to last path points. Default is\nOff.\n"},
  {(char*)"SetCaptureRadius", PyvtkImageTracerWidget_SetCaptureRadius, METH_VARARGS,
   (char*)"V.SetCaptureRadius(float)\nC++: void SetCaptureRadius(double a)\n\nSet/Get the capture radius for automatic path closing.  For image\ndata, capture radius should be half the distance between\nvoxel/pixel centers. Default is 1.0\n"},
  {(char*)"GetCaptureRadius", PyvtkImageTracerWidget_GetCaptureRadius, METH_VARARGS,
   (char*)"V.GetCaptureRadius() -> float\nC++: double GetCaptureRadius()\n\nSet/Get the capture radius for automatic path closing.  For image\ndata, capture radius should be half the distance between\nvoxel/pixel centers. Default is 1.0\n"},
  {(char*)"GetPath", PyvtkImageTracerWidget_GetPath, METH_VARARGS,
   (char*)"V.GetPath(vtkPolyData)\nC++: void GetPath(vtkPolyData *pd)\n\nGrab the points and lines that define the traced path. These\npoint values are guaranteed to be up-to-date when either the\nInteractionEvent or EndInteraction events are invoked. The user\nprovides the vtkPolyData and the points and cells representing\nthe line are added to it.\n"},
  {(char*)"GetGlyphSource", PyvtkImageTracerWidget_GetGlyphSource, METH_VARARGS,
   (char*)"V.GetGlyphSource() -> vtkGlyphSource2D\nC++: vtkGlyphSource2D *GetGlyphSource()\n\nGet the handles' geometric representation via vtkGlyphSource2D.\n"},
  {(char*)"SetImageSnapType", PyvtkImageTracerWidget_SetImageSnapType, METH_VARARGS,
   (char*)"V.SetImageSnapType(int)\nC++: void SetImageSnapType(int)\n\nSet/Get the type of snapping to image data: center of a\npixel/voxel or nearest point defining a pixel/voxel.\n"},
  {(char*)"GetImageSnapTypeMinValue", PyvtkImageTracerWidget_GetImageSnapTypeMinValue, METH_VARARGS,
   (char*)"V.GetImageSnapTypeMinValue() -> int\nC++: int GetImageSnapTypeMinValue()\n\nSet/Get the type of snapping to image data: center of a\npixel/voxel or nearest point defining a pixel/voxel.\n"},
  {(char*)"GetImageSnapTypeMaxValue", PyvtkImageTracerWidget_GetImageSnapTypeMaxValue, METH_VARARGS,
   (char*)"V.GetImageSnapTypeMaxValue() -> int\nC++: int GetImageSnapTypeMaxValue()\n\nSet/Get the type of snapping to image data: center of a\npixel/voxel or nearest point defining a pixel/voxel.\n"},
  {(char*)"GetImageSnapType", PyvtkImageTracerWidget_GetImageSnapType, METH_VARARGS,
   (char*)"V.GetImageSnapType() -> int\nC++: int GetImageSnapType()\n\nSet/Get the type of snapping to image data: center of a\npixel/voxel or nearest point defining a pixel/voxel.\n"},
  {(char*)"SetHandlePosition", PyvtkImageTracerWidget_SetHandlePosition, METH_VARARGS,
   (char*)"V.SetHandlePosition(int, [float, float, float])\nC++: void SetHandlePosition(int handle, double xyz[3])\nV.SetHandlePosition(int, float, float, float)\nC++: void SetHandlePosition(int handle, double x, double y,\n    double z)\n\nSet/Get the handle position in terms of a zero-based array of\nhandles.\n"},
  {(char*)"GetHandlePosition", PyvtkImageTracerWidget_GetHandlePosition, METH_VARARGS,
   (char*)"V.GetHandlePosition(int, [float, float, float])\nC++: void GetHandlePosition(int handle, double xyz[3])\nV.GetHandlePosition(int) -> (float, float, float)\nC++: double *GetHandlePosition(int handle)\n\nSet/Get the handle position in terms of a zero-based array of\nhandles.\n"},
  {(char*)"GetNumberOfHandles", PyvtkImageTracerWidget_GetNumberOfHandles, METH_VARARGS,
   (char*)"V.GetNumberOfHandles() -> int\nC++: int GetNumberOfHandles()\n\nGet the number of handles.\n"},
  {(char*)"SetInteraction", PyvtkImageTracerWidget_SetInteraction, METH_VARARGS,
   (char*)"V.SetInteraction(int)\nC++: void SetInteraction(int interact)\n\nEnable/disable mouse interaction when the widget is visible.\n"},
  {(char*)"GetInteraction", PyvtkImageTracerWidget_GetInteraction, METH_VARARGS,
   (char*)"V.GetInteraction() -> int\nC++: int GetInteraction()\n\nEnable/disable mouse interaction when the widget is visible.\n"},
  {(char*)"InteractionOn", PyvtkImageTracerWidget_InteractionOn, METH_VARARGS,
   (char*)"V.InteractionOn()\nC++: void InteractionOn()\n\nEnable/disable mouse interaction when the widget is visible.\n"},
  {(char*)"InteractionOff", PyvtkImageTracerWidget_InteractionOff, METH_VARARGS,
   (char*)"V.InteractionOff()\nC++: void InteractionOff()\n\nEnable/disable mouse interaction when the widget is visible.\n"},
  {(char*)"InitializeHandles", PyvtkImageTracerWidget_InitializeHandles, METH_VARARGS,
   (char*)"V.InitializeHandles(vtkPoints)\nC++: void InitializeHandles(vtkPoints *)\n\nInitialize the widget with a set of points and generate lines\nbetween them.  If AutoClose is on it will handle the case wherein\nthe first and last points are congruent.\n"},
  {(char*)"IsClosed", PyvtkImageTracerWidget_IsClosed, METH_VARARGS,
   (char*)"V.IsClosed() -> int\nC++: int IsClosed()\n\nIs the path closed or open?\n"},
  {(char*)"SetHandleLeftMouseButton", PyvtkImageTracerWidget_SetHandleLeftMouseButton, METH_VARARGS,
   (char*)"V.SetHandleLeftMouseButton(int)\nC++: void SetHandleLeftMouseButton(int a)\n\nEnable/Disable mouse button events\n"},
  {(char*)"GetHandleLeftMouseButton", PyvtkImageTracerWidget_GetHandleLeftMouseButton, METH_VARARGS,
   (char*)"V.GetHandleLeftMouseButton() -> int\nC++: int GetHandleLeftMouseButton()\n\nEnable/Disable mouse button events\n"},
  {(char*)"HandleLeftMouseButtonOn", PyvtkImageTracerWidget_HandleLeftMouseButtonOn, METH_VARARGS,
   (char*)"V.HandleLeftMouseButtonOn()\nC++: void HandleLeftMouseButtonOn()\n\nEnable/Disable mouse button events\n"},
  {(char*)"HandleLeftMouseButtonOff", PyvtkImageTracerWidget_HandleLeftMouseButtonOff, METH_VARARGS,
   (char*)"V.HandleLeftMouseButtonOff()\nC++: void HandleLeftMouseButtonOff()\n\nEnable/Disable mouse button events\n"},
  {(char*)"SetHandleMiddleMouseButton", PyvtkImageTracerWidget_SetHandleMiddleMouseButton, METH_VARARGS,
   (char*)"V.SetHandleMiddleMouseButton(int)\nC++: void SetHandleMiddleMouseButton(int a)\n\nEnable/Disable mouse button events\n"},
  {(char*)"GetHandleMiddleMouseButton", PyvtkImageTracerWidget_GetHandleMiddleMouseButton, METH_VARARGS,
   (char*)"V.GetHandleMiddleMouseButton() -> int\nC++: int GetHandleMiddleMouseButton()\n\nEnable/Disable mouse button events\n"},
  {(char*)"HandleMiddleMouseButtonOn", PyvtkImageTracerWidget_HandleMiddleMouseButtonOn, METH_VARARGS,
   (char*)"V.HandleMiddleMouseButtonOn()\nC++: void HandleMiddleMouseButtonOn()\n\nEnable/Disable mouse button events\n"},
  {(char*)"HandleMiddleMouseButtonOff", PyvtkImageTracerWidget_HandleMiddleMouseButtonOff, METH_VARARGS,
   (char*)"V.HandleMiddleMouseButtonOff()\nC++: void HandleMiddleMouseButtonOff()\n\nEnable/Disable mouse button events\n"},
  {(char*)"SetHandleRightMouseButton", PyvtkImageTracerWidget_SetHandleRightMouseButton, METH_VARARGS,
   (char*)"V.SetHandleRightMouseButton(int)\nC++: void SetHandleRightMouseButton(int a)\n\nEnable/Disable mouse button events\n"},
  {(char*)"GetHandleRightMouseButton", PyvtkImageTracerWidget_GetHandleRightMouseButton, METH_VARARGS,
   (char*)"V.GetHandleRightMouseButton() -> int\nC++: int GetHandleRightMouseButton()\n\nEnable/Disable mouse button events\n"},
  {(char*)"HandleRightMouseButtonOn", PyvtkImageTracerWidget_HandleRightMouseButtonOn, METH_VARARGS,
   (char*)"V.HandleRightMouseButtonOn()\nC++: void HandleRightMouseButtonOn()\n\nEnable/Disable mouse button events\n"},
  {(char*)"HandleRightMouseButtonOff", PyvtkImageTracerWidget_HandleRightMouseButtonOff, METH_VARARGS,
   (char*)"V.HandleRightMouseButtonOff()\nC++: void HandleRightMouseButtonOff()\n\nEnable/Disable mouse button events\n"},
#if !defined(VTK_LEGACY_REMOVE)
  {(char*)"SetProp", PyvtkImageTracerWidget_SetProp, METH_VARARGS,
   (char*)"V.SetProp(vtkProp)\nC++: void SetProp(vtkProp *prop)\n\n@deprecated Replaced by vtkImageTracerWidget::SetViewProp() as of\nVTK 5.0.\n"},
#endif
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkImageTracerWidget_StaticNew()
{
  return vtkImageTracerWidget::New();
}

PyObject *PyVTKClass_vtkImageTracerWidgetNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkImageTracerWidget_StaticNew,
    PyvtkImageTracerWidget_Methods,
    "vtkImageTracerWidget", modulename,
    NULL, NULL,
    PyvtkImageTracerWidget_Doc(),
    PyVTKClass_vtk3DWidgetNew(modulename));
  return cls;
}

const char **PyvtkImageTracerWidget_Doc()
{
  static const char *docstring[] = {
    "vtkImageTracerWidget - 3D widget for tracing on planar props.\n\n",
    "Superclass: vtk3DWidget\n\n",
    "vtkImageTracerWidget is different from other widgets in three\ndistinct ways:\n1) any sub-class of vtkProp can be input rather than just vtkProp3D,\n   so that vtkImageActor can be set as the prop and then traced over,\n2) the widget fires pick events at the input prop to decide where to\n   move its handles, 3) the widget has 2D glyphs for handles instead\n   of 3D spheres as is done in other sub-class",
    "es of vtk3DWidget. This\nwidget is primarily designed for manually tracing over image data.\n   The button actions and key modifiers are as follows for\n   controlling the widget:\n1) left button click over the image, hold and drag draws a free hand\n   line.\n2) left button click and release erases the widget line, if it\n   exists, and repositions the first handle.\n3) middle button click starts a snap ",
    "drawn line.  The line is\n   terminated by clicking the middle button while depressing the ctrl\nkey.\n4) when tracing a continuous or snap drawn line, if the last cursor\n   position is within a specified tolerance to the first handle, the\n   widget line will form a closed loop.\n5) right button clicking and holding on any handle that is part of a\n   snap drawn line allows handle dragging: existing li",
    "ne segments are\nupdated accordingly.  If the path is open and AutoClose is set to On,\nthe path can be closed by repositioning the first and last points\n   over one another.\n6) ctrl key + right button down on any handle will erase it: existing\n   snap drawn line segments are updated accordingly.  If the line was\nformed by continuous tracing, the line is deleted leaving one handle.\n7) shift key + ri",
    "ght button down on any snap drawn line segment will\n   insert a handle at the cursor position.  The line segment is split\naccordingly.\n\nCaveats:\n\nthe input vtkDataSet should be vtkImageData.\n\nSee Also:\n\nvtk3DWidget vtkBoxWidget vtkLineWidget vtkPointWidget vtkSphereWidget\nvtkImagePlaneWidget vtkImplicitPlaneWidget vtkPlaneWidget\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkImageTracerWidget(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkImageTracerWidgetNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkImageTracerWidget", o) != 0)
    {
    Py_DECREF(o);
    }

  for (int c = 0; c < 5; c++)
    {
    static const struct { const char *name; int value; }
      constants[5] = {
        { "VTK_ITW_PROJECTION_YZ", 0 },
        { "VTK_ITW_PROJECTION_XZ", 1 },
        { "VTK_ITW_PROJECTION_XY", 2 },
        { "VTK_ITW_SNAP_CELLS", 0 },
        { "VTK_ITW_SNAP_POINTS", 1 },
      };

    o = PyInt_FromLong(constants[c].value);
    if (o)
      {
      PyDict_SetItemString(dict, (char *)constants[c].name, o);
      Py_DECREF(o);
      }
    }

}

