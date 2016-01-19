// python wrapper for vtkSphereWidget
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkSphereWidget.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkSphereWidget(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkSphereWidgetNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtk3DWidgetNew
extern "C" { PyObject *PyVTKClass_vtk3DWidgetNew(const char *); }
#define DECLARED_PyVTKClass_vtk3DWidgetNew
#endif

static const char **PyvtkSphereWidget_Doc();


static PyObject *
PyvtkSphereWidget_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereWidget *op = static_cast<vtkSphereWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkSphereWidget::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSphereWidget_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereWidget *op = static_cast<vtkSphereWidget *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSphereWidget::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSphereWidget_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereWidget *op = static_cast<vtkSphereWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkSphereWidget *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSphereWidget::NewInstance());

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
PyvtkSphereWidget_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkSphereWidget *tempr = vtkSphereWidget::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSphereWidget_SetEnabled(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEnabled");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereWidget *op = static_cast<vtkSphereWidget *>(vp);

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
      op->vtkSphereWidget::SetEnabled(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSphereWidget_PlaceWidget_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PlaceWidget");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereWidget *op = static_cast<vtkSphereWidget *>(vp);

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
      op->vtkSphereWidget::PlaceWidget(temp0);
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
PyvtkSphereWidget_PlaceWidget_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PlaceWidget");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereWidget *op = static_cast<vtkSphereWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->PlaceWidget();
      }
    else
      {
      op->vtkSphereWidget::PlaceWidget();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkSphereWidget_PlaceWidget_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PlaceWidget");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereWidget *op = static_cast<vtkSphereWidget *>(vp);

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
      op->vtkSphereWidget::PlaceWidget(temp0, temp1, temp2, temp3, temp4, temp5);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkSphereWidget_PlaceWidget(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkSphereWidget_PlaceWidget_s1(self, args);
    case 0:
      return PyvtkSphereWidget_PlaceWidget_s2(self, args);
    case 6:
      return PyvtkSphereWidget_PlaceWidget_s3(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "PlaceWidget");
  return NULL;
}



static PyObject *
PyvtkSphereWidget_SetRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereWidget *op = static_cast<vtkSphereWidget *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetRepresentation(temp0);
      }
    else
      {
      op->vtkSphereWidget::SetRepresentation(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSphereWidget_GetRepresentationMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRepresentationMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereWidget *op = static_cast<vtkSphereWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetRepresentationMinValue() :
      op->vtkSphereWidget::GetRepresentationMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSphereWidget_GetRepresentationMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRepresentationMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereWidget *op = static_cast<vtkSphereWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetRepresentationMaxValue() :
      op->vtkSphereWidget::GetRepresentationMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSphereWidget_GetRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereWidget *op = static_cast<vtkSphereWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetRepresentation() :
      op->vtkSphereWidget::GetRepresentation());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSphereWidget_SetRepresentationToOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRepresentationToOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereWidget *op = static_cast<vtkSphereWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetRepresentationToOff();
      }
    else
      {
      op->vtkSphereWidget::SetRepresentationToOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSphereWidget_SetRepresentationToWireframe(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRepresentationToWireframe");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereWidget *op = static_cast<vtkSphereWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetRepresentationToWireframe();
      }
    else
      {
      op->vtkSphereWidget::SetRepresentationToWireframe();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSphereWidget_SetRepresentationToSurface(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRepresentationToSurface");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereWidget *op = static_cast<vtkSphereWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetRepresentationToSurface();
      }
    else
      {
      op->vtkSphereWidget::SetRepresentationToSurface();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSphereWidget_SetThetaResolution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetThetaResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereWidget *op = static_cast<vtkSphereWidget *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetThetaResolution(temp0);
      }
    else
      {
      op->vtkSphereWidget::SetThetaResolution(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSphereWidget_GetThetaResolution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetThetaResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereWidget *op = static_cast<vtkSphereWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetThetaResolution() :
      op->vtkSphereWidget::GetThetaResolution());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSphereWidget_SetPhiResolution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPhiResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereWidget *op = static_cast<vtkSphereWidget *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetPhiResolution(temp0);
      }
    else
      {
      op->vtkSphereWidget::SetPhiResolution(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSphereWidget_GetPhiResolution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPhiResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereWidget *op = static_cast<vtkSphereWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetPhiResolution() :
      op->vtkSphereWidget::GetPhiResolution());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSphereWidget_SetRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereWidget *op = static_cast<vtkSphereWidget *>(vp);

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
      op->vtkSphereWidget::SetRadius(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSphereWidget_GetRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereWidget *op = static_cast<vtkSphereWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetRadius() :
      op->vtkSphereWidget::GetRadius());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSphereWidget_SetCenter_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCenter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereWidget *op = static_cast<vtkSphereWidget *>(vp);

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
      op->SetCenter(temp0, temp1, temp2);
      }
    else
      {
      op->vtkSphereWidget::SetCenter(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkSphereWidget_SetCenter_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCenter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereWidget *op = static_cast<vtkSphereWidget *>(vp);

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
      op->SetCenter(temp0);
      }
    else
      {
      op->vtkSphereWidget::SetCenter(temp0);
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
PyvtkSphereWidget_SetCenter(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkSphereWidget_SetCenter_s1(self, args);
    case 1:
      return PyvtkSphereWidget_SetCenter_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetCenter");
  return NULL;
}



static PyObject *
PyvtkSphereWidget_GetCenter_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCenter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereWidget *op = static_cast<vtkSphereWidget *>(vp);

  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetCenter() :
      op->vtkSphereWidget::GetCenter());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}

static PyObject *
PyvtkSphereWidget_GetCenter_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCenter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereWidget *op = static_cast<vtkSphereWidget *>(vp);

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
      op->GetCenter(temp0);
      }
    else
      {
      op->vtkSphereWidget::GetCenter(temp0);
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
PyvtkSphereWidget_GetCenter(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 0:
      return PyvtkSphereWidget_GetCenter_s1(self, args);
    case 1:
      return PyvtkSphereWidget_GetCenter_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetCenter");
  return NULL;
}



static PyObject *
PyvtkSphereWidget_SetTranslation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTranslation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereWidget *op = static_cast<vtkSphereWidget *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetTranslation(temp0);
      }
    else
      {
      op->vtkSphereWidget::SetTranslation(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSphereWidget_GetTranslation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTranslation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereWidget *op = static_cast<vtkSphereWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetTranslation() :
      op->vtkSphereWidget::GetTranslation());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSphereWidget_TranslationOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TranslationOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereWidget *op = static_cast<vtkSphereWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->TranslationOn();
      }
    else
      {
      op->vtkSphereWidget::TranslationOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSphereWidget_TranslationOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TranslationOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereWidget *op = static_cast<vtkSphereWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->TranslationOff();
      }
    else
      {
      op->vtkSphereWidget::TranslationOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSphereWidget_SetScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereWidget *op = static_cast<vtkSphereWidget *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetScale(temp0);
      }
    else
      {
      op->vtkSphereWidget::SetScale(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSphereWidget_GetScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereWidget *op = static_cast<vtkSphereWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetScale() :
      op->vtkSphereWidget::GetScale());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSphereWidget_ScaleOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ScaleOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereWidget *op = static_cast<vtkSphereWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ScaleOn();
      }
    else
      {
      op->vtkSphereWidget::ScaleOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSphereWidget_ScaleOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ScaleOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereWidget *op = static_cast<vtkSphereWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ScaleOff();
      }
    else
      {
      op->vtkSphereWidget::ScaleOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSphereWidget_SetHandleVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHandleVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereWidget *op = static_cast<vtkSphereWidget *>(vp);

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
      op->vtkSphereWidget::SetHandleVisibility(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSphereWidget_GetHandleVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHandleVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereWidget *op = static_cast<vtkSphereWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetHandleVisibility() :
      op->vtkSphereWidget::GetHandleVisibility());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSphereWidget_HandleVisibilityOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HandleVisibilityOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereWidget *op = static_cast<vtkSphereWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->HandleVisibilityOn();
      }
    else
      {
      op->vtkSphereWidget::HandleVisibilityOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSphereWidget_HandleVisibilityOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HandleVisibilityOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereWidget *op = static_cast<vtkSphereWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->HandleVisibilityOff();
      }
    else
      {
      op->vtkSphereWidget::HandleVisibilityOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSphereWidget_SetHandleDirection_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHandleDirection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereWidget *op = static_cast<vtkSphereWidget *>(vp);

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
      op->SetHandleDirection(temp0, temp1, temp2);
      }
    else
      {
      op->vtkSphereWidget::SetHandleDirection(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkSphereWidget_SetHandleDirection_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHandleDirection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereWidget *op = static_cast<vtkSphereWidget *>(vp);

  double temp0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetHandleDirection(temp0);
      }
    else
      {
      op->vtkSphereWidget::SetHandleDirection(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkSphereWidget_SetHandleDirection(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkSphereWidget_SetHandleDirection_s1(self, args);
    case 1:
      return PyvtkSphereWidget_SetHandleDirection_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetHandleDirection");
  return NULL;
}



static PyObject *
PyvtkSphereWidget_GetHandleDirection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHandleDirection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereWidget *op = static_cast<vtkSphereWidget *>(vp);

  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetHandleDirection() :
      op->vtkSphereWidget::GetHandleDirection());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkSphereWidget_GetHandlePosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHandlePosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereWidget *op = static_cast<vtkSphereWidget *>(vp);

  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetHandlePosition() :
      op->vtkSphereWidget::GetHandlePosition());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkSphereWidget_GetPolyData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPolyData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereWidget *op = static_cast<vtkSphereWidget *>(vp);

  vtkPolyData *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPolyData"))
    {
    if (ap.IsBound())
      {
      op->GetPolyData(temp0);
      }
    else
      {
      op->vtkSphereWidget::GetPolyData(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSphereWidget_GetSphere(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSphere");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereWidget *op = static_cast<vtkSphereWidget *>(vp);

  vtkSphere *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSphere"))
    {
    if (ap.IsBound())
      {
      op->GetSphere(temp0);
      }
    else
      {
      op->vtkSphereWidget::GetSphere(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSphereWidget_GetSphereProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSphereProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereWidget *op = static_cast<vtkSphereWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetSphereProperty() :
      op->vtkSphereWidget::GetSphereProperty());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSphereWidget_GetSelectedSphereProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelectedSphereProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereWidget *op = static_cast<vtkSphereWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetSelectedSphereProperty() :
      op->vtkSphereWidget::GetSelectedSphereProperty());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSphereWidget_GetHandleProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHandleProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereWidget *op = static_cast<vtkSphereWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetHandleProperty() :
      op->vtkSphereWidget::GetHandleProperty());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSphereWidget_GetSelectedHandleProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelectedHandleProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereWidget *op = static_cast<vtkSphereWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetSelectedHandleProperty() :
      op->vtkSphereWidget::GetSelectedHandleProperty());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkSphereWidget_Methods[] = {
  {(char*)"GetClassName", PyvtkSphereWidget_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkSphereWidget_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkSphereWidget_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkSphereWidget\nC++: vtkSphereWidget *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkSphereWidget_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkSphereWidget\nC++: vtkSphereWidget *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetEnabled", PyvtkSphereWidget_SetEnabled, METH_VARARGS,
   (char*)"V.SetEnabled(int)\nC++: virtual void SetEnabled(int)\n\nMethods that satisfy the superclass' API.\n"},
  {(char*)"PlaceWidget", PyvtkSphereWidget_PlaceWidget, METH_VARARGS,
   (char*)"V.PlaceWidget([float, float, float, float, float, float])\nC++: virtual void PlaceWidget(double bounds[6])\nV.PlaceWidget()\nC++: void PlaceWidget()\nV.PlaceWidget(float, float, float, float, float, float)\nC++: void PlaceWidget(double xmin, double xmax, double ymin,\n    double ymax, double zmin, double zmax)\n\nMethods that satisfy the superclass' API.\n"},
  {(char*)"SetRepresentation", PyvtkSphereWidget_SetRepresentation, METH_VARARGS,
   (char*)"V.SetRepresentation(int)\nC++: void SetRepresentation(int)\n\nSet the representation of the sphere. Different representations\nare useful depending on the application. The default is\nVTK_SPHERE_WIREFRAME.\n"},
  {(char*)"GetRepresentationMinValue", PyvtkSphereWidget_GetRepresentationMinValue, METH_VARARGS,
   (char*)"V.GetRepresentationMinValue() -> int\nC++: int GetRepresentationMinValue()\n\nSet the representation of the sphere. Different representations\nare useful depending on the application. The default is\nVTK_SPHERE_WIREFRAME.\n"},
  {(char*)"GetRepresentationMaxValue", PyvtkSphereWidget_GetRepresentationMaxValue, METH_VARARGS,
   (char*)"V.GetRepresentationMaxValue() -> int\nC++: int GetRepresentationMaxValue()\n\nSet the representation of the sphere. Different representations\nare useful depending on the application. The default is\nVTK_SPHERE_WIREFRAME.\n"},
  {(char*)"GetRepresentation", PyvtkSphereWidget_GetRepresentation, METH_VARARGS,
   (char*)"V.GetRepresentation() -> int\nC++: int GetRepresentation()\n\nSet the representation of the sphere. Different representations\nare useful depending on the application. The default is\nVTK_SPHERE_WIREFRAME.\n"},
  {(char*)"SetRepresentationToOff", PyvtkSphereWidget_SetRepresentationToOff, METH_VARARGS,
   (char*)"V.SetRepresentationToOff()\nC++: void SetRepresentationToOff()\n\nSet the representation of the sphere. Different representations\nare useful depending on the application. The default is\nVTK_SPHERE_WIREFRAME.\n"},
  {(char*)"SetRepresentationToWireframe", PyvtkSphereWidget_SetRepresentationToWireframe, METH_VARARGS,
   (char*)"V.SetRepresentationToWireframe()\nC++: void SetRepresentationToWireframe()\n\nSet the representation of the sphere. Different representations\nare useful depending on the application. The default is\nVTK_SPHERE_WIREFRAME.\n"},
  {(char*)"SetRepresentationToSurface", PyvtkSphereWidget_SetRepresentationToSurface, METH_VARARGS,
   (char*)"V.SetRepresentationToSurface()\nC++: void SetRepresentationToSurface()\n\nSet the representation of the sphere. Different representations\nare useful depending on the application. The default is\nVTK_SPHERE_WIREFRAME.\n"},
  {(char*)"SetThetaResolution", PyvtkSphereWidget_SetThetaResolution, METH_VARARGS,
   (char*)"V.SetThetaResolution(int)\nC++: void SetThetaResolution(int r)\n\nSet/Get the resolution of the sphere in the Theta direction. The\ndefault is 16.\n"},
  {(char*)"GetThetaResolution", PyvtkSphereWidget_GetThetaResolution, METH_VARARGS,
   (char*)"V.GetThetaResolution() -> int\nC++: int GetThetaResolution()\n\nSet/Get the resolution of the sphere in the Theta direction. The\ndefault is 16.\n"},
  {(char*)"SetPhiResolution", PyvtkSphereWidget_SetPhiResolution, METH_VARARGS,
   (char*)"V.SetPhiResolution(int)\nC++: void SetPhiResolution(int r)\n\nSet/Get the resolution of the sphere in the Phi direction. The\ndefault is 8.\n"},
  {(char*)"GetPhiResolution", PyvtkSphereWidget_GetPhiResolution, METH_VARARGS,
   (char*)"V.GetPhiResolution() -> int\nC++: int GetPhiResolution()\n\nSet/Get the resolution of the sphere in the Phi direction. The\ndefault is 8.\n"},
  {(char*)"SetRadius", PyvtkSphereWidget_SetRadius, METH_VARARGS,
   (char*)"V.SetRadius(float)\nC++: void SetRadius(double r)\n\nSet/Get the radius of sphere. Default is .5.\n"},
  {(char*)"GetRadius", PyvtkSphereWidget_GetRadius, METH_VARARGS,
   (char*)"V.GetRadius() -> float\nC++: double GetRadius()\n\nSet/Get the radius of sphere. Default is .5.\n"},
  {(char*)"SetCenter", PyvtkSphereWidget_SetCenter, METH_VARARGS,
   (char*)"V.SetCenter(float, float, float)\nC++: void SetCenter(double x, double y, double z)\nV.SetCenter([float, float, float])\nC++: void SetCenter(double x[3])\n\nSet/Get the center of the sphere.\n"},
  {(char*)"GetCenter", PyvtkSphereWidget_GetCenter, METH_VARARGS,
   (char*)"V.GetCenter() -> (float, float, float)\nC++: double *GetCenter()\nV.GetCenter([float, float, float])\nC++: void GetCenter(double xyz[3])\n\nSet/Get the center of the sphere.\n"},
  {(char*)"SetTranslation", PyvtkSphereWidget_SetTranslation, METH_VARARGS,
   (char*)"V.SetTranslation(int)\nC++: void SetTranslation(int a)\n\nEnable translation and scaling of the widget. By default, the\nwidget can be translated and rotated.\n"},
  {(char*)"GetTranslation", PyvtkSphereWidget_GetTranslation, METH_VARARGS,
   (char*)"V.GetTranslation() -> int\nC++: int GetTranslation()\n\nEnable translation and scaling of the widget. By default, the\nwidget can be translated and rotated.\n"},
  {(char*)"TranslationOn", PyvtkSphereWidget_TranslationOn, METH_VARARGS,
   (char*)"V.TranslationOn()\nC++: void TranslationOn()\n\nEnable translation and scaling of the widget. By default, the\nwidget can be translated and rotated.\n"},
  {(char*)"TranslationOff", PyvtkSphereWidget_TranslationOff, METH_VARARGS,
   (char*)"V.TranslationOff()\nC++: void TranslationOff()\n\nEnable translation and scaling of the widget. By default, the\nwidget can be translated and rotated.\n"},
  {(char*)"SetScale", PyvtkSphereWidget_SetScale, METH_VARARGS,
   (char*)"V.SetScale(int)\nC++: void SetScale(int a)\n\nEnable translation and scaling of the widget. By default, the\nwidget can be translated and rotated.\n"},
  {(char*)"GetScale", PyvtkSphereWidget_GetScale, METH_VARARGS,
   (char*)"V.GetScale() -> int\nC++: int GetScale()\n\nEnable translation and scaling of the widget. By default, the\nwidget can be translated and rotated.\n"},
  {(char*)"ScaleOn", PyvtkSphereWidget_ScaleOn, METH_VARARGS,
   (char*)"V.ScaleOn()\nC++: void ScaleOn()\n\nEnable translation and scaling of the widget. By default, the\nwidget can be translated and rotated.\n"},
  {(char*)"ScaleOff", PyvtkSphereWidget_ScaleOff, METH_VARARGS,
   (char*)"V.ScaleOff()\nC++: void ScaleOff()\n\nEnable translation and scaling of the widget. By default, the\nwidget can be translated and rotated.\n"},
  {(char*)"SetHandleVisibility", PyvtkSphereWidget_SetHandleVisibility, METH_VARARGS,
   (char*)"V.SetHandleVisibility(int)\nC++: void SetHandleVisibility(int a)\n\nThe handle sits on the surface of the sphere and may be moved\naround the surface by picking (left mouse) and then moving. The\nposition of the handle can be retrieved, this is useful for\npositioning cameras and lights. By default, the handle is turned\noff.\n"},
  {(char*)"GetHandleVisibility", PyvtkSphereWidget_GetHandleVisibility, METH_VARARGS,
   (char*)"V.GetHandleVisibility() -> int\nC++: int GetHandleVisibility()\n\nThe handle sits on the surface of the sphere and may be moved\naround the surface by picking (left mouse) and then moving. The\nposition of the handle can be retrieved, this is useful for\npositioning cameras and lights. By default, the handle is turned\noff.\n"},
  {(char*)"HandleVisibilityOn", PyvtkSphereWidget_HandleVisibilityOn, METH_VARARGS,
   (char*)"V.HandleVisibilityOn()\nC++: void HandleVisibilityOn()\n\nThe handle sits on the surface of the sphere and may be moved\naround the surface by picking (left mouse) and then moving. The\nposition of the handle can be retrieved, this is useful for\npositioning cameras and lights. By default, the handle is turned\noff.\n"},
  {(char*)"HandleVisibilityOff", PyvtkSphereWidget_HandleVisibilityOff, METH_VARARGS,
   (char*)"V.HandleVisibilityOff()\nC++: void HandleVisibilityOff()\n\nThe handle sits on the surface of the sphere and may be moved\naround the surface by picking (left mouse) and then moving. The\nposition of the handle can be retrieved, this is useful for\npositioning cameras and lights. By default, the handle is turned\noff.\n"},
  {(char*)"SetHandleDirection", PyvtkSphereWidget_SetHandleDirection, METH_VARARGS,
   (char*)"V.SetHandleDirection(float, float, float)\nC++: void SetHandleDirection(double, double, double)\nV.SetHandleDirection((float, float, float))\nC++: void SetHandleDirection(double a[3])\n\n"},
  {(char*)"GetHandleDirection", PyvtkSphereWidget_GetHandleDirection, METH_VARARGS,
   (char*)"V.GetHandleDirection() -> (float, float, float)\nC++: double *GetHandleDirection()\n\n"},
  {(char*)"GetHandlePosition", PyvtkSphereWidget_GetHandlePosition, METH_VARARGS,
   (char*)"V.GetHandlePosition() -> (float, float, float)\nC++: double *GetHandlePosition()\n\n"},
  {(char*)"GetPolyData", PyvtkSphereWidget_GetPolyData, METH_VARARGS,
   (char*)"V.GetPolyData(vtkPolyData)\nC++: void GetPolyData(vtkPolyData *pd)\n\nGrab the polydata (including points) that defines the sphere. \nThe polydata consists of n+1 points, where n is the resolution of\nthe sphere. These point values are guaranteed to be up-to-date\nwhen either the InteractionEvent or EndInteraction events are\ninvoked. The user provides the vtkPolyData and the points and\npolysphere are added to it.\n"},
  {(char*)"GetSphere", PyvtkSphereWidget_GetSphere, METH_VARARGS,
   (char*)"V.GetSphere(vtkSphere)\nC++: void GetSphere(vtkSphere *sphere)\n\nGet the spherical implicit function defined by this widget.  Note\nthat vtkSphere is a subclass of vtkImplicitFunction, meaning that\nit can be used by a variety of filters to perform clipping,\ncutting, and selection of data.\n"},
  {(char*)"GetSphereProperty", PyvtkSphereWidget_GetSphereProperty, METH_VARARGS,
   (char*)"V.GetSphereProperty() -> vtkProperty\nC++: vtkProperty *GetSphereProperty()\n\nGet the sphere properties. The properties of the sphere when\nselected and unselected can be manipulated.\n"},
  {(char*)"GetSelectedSphereProperty", PyvtkSphereWidget_GetSelectedSphereProperty, METH_VARARGS,
   (char*)"V.GetSelectedSphereProperty() -> vtkProperty\nC++: vtkProperty *GetSelectedSphereProperty()\n\nGet the sphere properties. The properties of the sphere when\nselected and unselected can be manipulated.\n"},
  {(char*)"GetHandleProperty", PyvtkSphereWidget_GetHandleProperty, METH_VARARGS,
   (char*)"V.GetHandleProperty() -> vtkProperty\nC++: vtkProperty *GetHandleProperty()\n\nGet the handle properties (the little ball on the sphere is the\nhandle). The properties of the handle when selected and\nunselected can be  manipulated.\n"},
  {(char*)"GetSelectedHandleProperty", PyvtkSphereWidget_GetSelectedHandleProperty, METH_VARARGS,
   (char*)"V.GetSelectedHandleProperty() -> vtkProperty\nC++: vtkProperty *GetSelectedHandleProperty()\n\nGet the handle properties (the little ball on the sphere is the\nhandle). The properties of the handle when selected and\nunselected can be  manipulated.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkSphereWidget_StaticNew()
{
  return vtkSphereWidget::New();
}

PyObject *PyVTKClass_vtkSphereWidgetNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkSphereWidget_StaticNew,
    PyvtkSphereWidget_Methods,
    "vtkSphereWidget", modulename,
    NULL, NULL,
    PyvtkSphereWidget_Doc(),
    PyVTKClass_vtk3DWidgetNew(modulename));
  return cls;
}

const char **PyvtkSphereWidget_Doc()
{
  static const char *docstring[] = {
    "vtkSphereWidget - 3D widget for manipulating a sphere\n\n",
    "Superclass: vtk3DWidget\n\n",
    "This 3D widget defines a sphere that can be interactively placed in a\nscene.\n\nTo use this object, just invoke SetInteractor() with the argument of\nthe method a vtkRenderWindowInteractor.  You may also wish to invoke\n\"PlaceWidget()\" to initially position the widget. The interactor will\nact normally until the \"i\" key (for \"interactor\") is pressed, at\nwhich point the vtkSphereWidget will appear. (See",
    " superclass\ndocumentation for information about changing this behavior.) Events\nthat occur outside of the widget (i.e., no part of the widget is\npicked) are propagated to any other registered obsevers (such as the\ninteraction style).  Turn off the widget by pressing the \"i\" key\nagain (or invoke the Off() method).\n\nThe vtkSphereWidget has several methods that can be used in\nconjunction with other V",
    "TK objects. The Set/GetThetaResolution() and\nSet/GetPhiResolution() methods control the number of subdivisions of\nthe sphere in the theta and phi directions; the GetPolyData() method\ncan be used to get the polygonal representation and can be used for\nthings like seeding streamlines. The GetSphere() method returns a\nsphere implicit function that can be used for cutting and clipping.\nTypical usage o",
    "f the widget is to make use of the\nStartInteractionEvent, InteractionEvent, and EndInteractionEvent\nevents. The InteractionEvent is called on mouse motion; the other two\nevents are called on button down and button up (any mouse button).\n\nSome additional features of this class include the ability to control\nthe properties of the widget. You can set the properties of the\nselected and unselected repr",
    "esentations of the sphere.\n\nSee Also:\n\nvtk3DWidget vtkLineWidget vtkBoxWidget vtkPlaneWidget\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkSphereWidget(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkSphereWidgetNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkSphereWidget", o) != 0)
    {
    Py_DECREF(o);
    }

  for (int c = 0; c < 3; c++)
    {
    static const struct { const char *name; int value; }
      constants[3] = {
        { "VTK_SPHERE_OFF", 0 },
        { "VTK_SPHERE_WIREFRAME", 1 },
        { "VTK_SPHERE_SURFACE", 2 },
      };

    o = PyInt_FromLong(constants[c].value);
    if (o)
      {
      PyDict_SetItemString(dict, (char *)constants[c].name, o);
      Py_DECREF(o);
      }
    }

}

