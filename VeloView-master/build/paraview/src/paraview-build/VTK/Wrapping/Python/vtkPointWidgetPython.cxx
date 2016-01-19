// python wrapper for vtkPointWidget
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkPointWidget.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkPointWidget(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkPointWidgetNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtk3DWidgetNew
extern "C" { PyObject *PyVTKClass_vtk3DWidgetNew(const char *); }
#define DECLARED_PyVTKClass_vtk3DWidgetNew
#endif

static const char **PyvtkPointWidget_Doc();


static PyObject *
PyvtkPointWidget_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointWidget *op = static_cast<vtkPointWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkPointWidget::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPointWidget_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointWidget *op = static_cast<vtkPointWidget *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPointWidget::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPointWidget_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointWidget *op = static_cast<vtkPointWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPointWidget *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPointWidget::NewInstance());

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
PyvtkPointWidget_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkPointWidget *tempr = vtkPointWidget::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPointWidget_SetEnabled(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEnabled");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointWidget *op = static_cast<vtkPointWidget *>(vp);

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
      op->vtkPointWidget::SetEnabled(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPointWidget_PlaceWidget_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PlaceWidget");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointWidget *op = static_cast<vtkPointWidget *>(vp);

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
      op->vtkPointWidget::PlaceWidget(temp0);
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
PyvtkPointWidget_PlaceWidget_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PlaceWidget");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointWidget *op = static_cast<vtkPointWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->PlaceWidget();
      }
    else
      {
      op->vtkPointWidget::PlaceWidget();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkPointWidget_PlaceWidget_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PlaceWidget");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointWidget *op = static_cast<vtkPointWidget *>(vp);

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
      op->vtkPointWidget::PlaceWidget(temp0, temp1, temp2, temp3, temp4, temp5);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkPointWidget_PlaceWidget(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkPointWidget_PlaceWidget_s1(self, args);
    case 0:
      return PyvtkPointWidget_PlaceWidget_s2(self, args);
    case 6:
      return PyvtkPointWidget_PlaceWidget_s3(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "PlaceWidget");
  return NULL;
}



static PyObject *
PyvtkPointWidget_GetPolyData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPolyData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointWidget *op = static_cast<vtkPointWidget *>(vp);

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
      op->vtkPointWidget::GetPolyData(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPointWidget_SetPosition_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointWidget *op = static_cast<vtkPointWidget *>(vp);

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
      op->SetPosition(temp0, temp1, temp2);
      }
    else
      {
      op->vtkPointWidget::SetPosition(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkPointWidget_SetPosition_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointWidget *op = static_cast<vtkPointWidget *>(vp);

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
      op->SetPosition(temp0);
      }
    else
      {
      op->vtkPointWidget::SetPosition(temp0);
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
PyvtkPointWidget_SetPosition(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkPointWidget_SetPosition_s1(self, args);
    case 1:
      return PyvtkPointWidget_SetPosition_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetPosition");
  return NULL;
}



static PyObject *
PyvtkPointWidget_GetPosition_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointWidget *op = static_cast<vtkPointWidget *>(vp);

  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetPosition() :
      op->vtkPointWidget::GetPosition());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}

static PyObject *
PyvtkPointWidget_GetPosition_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointWidget *op = static_cast<vtkPointWidget *>(vp);

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
      op->GetPosition(temp0);
      }
    else
      {
      op->vtkPointWidget::GetPosition(temp0);
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
PyvtkPointWidget_GetPosition(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 0:
      return PyvtkPointWidget_GetPosition_s1(self, args);
    case 1:
      return PyvtkPointWidget_GetPosition_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetPosition");
  return NULL;
}



static PyObject *
PyvtkPointWidget_SetOutline(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutline");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointWidget *op = static_cast<vtkPointWidget *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetOutline(temp0);
      }
    else
      {
      op->vtkPointWidget::SetOutline(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPointWidget_GetOutline(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutline");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointWidget *op = static_cast<vtkPointWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetOutline() :
      op->vtkPointWidget::GetOutline());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPointWidget_OutlineOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OutlineOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointWidget *op = static_cast<vtkPointWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->OutlineOn();
      }
    else
      {
      op->vtkPointWidget::OutlineOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPointWidget_OutlineOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OutlineOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointWidget *op = static_cast<vtkPointWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->OutlineOff();
      }
    else
      {
      op->vtkPointWidget::OutlineOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPointWidget_SetXShadows(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetXShadows");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointWidget *op = static_cast<vtkPointWidget *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetXShadows(temp0);
      }
    else
      {
      op->vtkPointWidget::SetXShadows(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPointWidget_GetXShadows(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetXShadows");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointWidget *op = static_cast<vtkPointWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetXShadows() :
      op->vtkPointWidget::GetXShadows());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPointWidget_XShadowsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "XShadowsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointWidget *op = static_cast<vtkPointWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->XShadowsOn();
      }
    else
      {
      op->vtkPointWidget::XShadowsOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPointWidget_XShadowsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "XShadowsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointWidget *op = static_cast<vtkPointWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->XShadowsOff();
      }
    else
      {
      op->vtkPointWidget::XShadowsOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPointWidget_SetYShadows(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetYShadows");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointWidget *op = static_cast<vtkPointWidget *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetYShadows(temp0);
      }
    else
      {
      op->vtkPointWidget::SetYShadows(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPointWidget_GetYShadows(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetYShadows");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointWidget *op = static_cast<vtkPointWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetYShadows() :
      op->vtkPointWidget::GetYShadows());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPointWidget_YShadowsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "YShadowsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointWidget *op = static_cast<vtkPointWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->YShadowsOn();
      }
    else
      {
      op->vtkPointWidget::YShadowsOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPointWidget_YShadowsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "YShadowsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointWidget *op = static_cast<vtkPointWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->YShadowsOff();
      }
    else
      {
      op->vtkPointWidget::YShadowsOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPointWidget_SetZShadows(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetZShadows");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointWidget *op = static_cast<vtkPointWidget *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetZShadows(temp0);
      }
    else
      {
      op->vtkPointWidget::SetZShadows(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPointWidget_GetZShadows(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetZShadows");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointWidget *op = static_cast<vtkPointWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetZShadows() :
      op->vtkPointWidget::GetZShadows());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPointWidget_ZShadowsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ZShadowsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointWidget *op = static_cast<vtkPointWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ZShadowsOn();
      }
    else
      {
      op->vtkPointWidget::ZShadowsOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPointWidget_ZShadowsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ZShadowsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointWidget *op = static_cast<vtkPointWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ZShadowsOff();
      }
    else
      {
      op->vtkPointWidget::ZShadowsOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPointWidget_SetTranslationMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTranslationMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointWidget *op = static_cast<vtkPointWidget *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetTranslationMode(temp0);
      }
    else
      {
      op->vtkPointWidget::SetTranslationMode(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPointWidget_GetTranslationMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTranslationMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointWidget *op = static_cast<vtkPointWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetTranslationMode() :
      op->vtkPointWidget::GetTranslationMode());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPointWidget_TranslationModeOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TranslationModeOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointWidget *op = static_cast<vtkPointWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->TranslationModeOn();
      }
    else
      {
      op->vtkPointWidget::TranslationModeOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPointWidget_TranslationModeOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TranslationModeOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointWidget *op = static_cast<vtkPointWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->TranslationModeOff();
      }
    else
      {
      op->vtkPointWidget::TranslationModeOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPointWidget_AllOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AllOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointWidget *op = static_cast<vtkPointWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->AllOn();
      }
    else
      {
      op->vtkPointWidget::AllOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPointWidget_AllOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AllOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointWidget *op = static_cast<vtkPointWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->AllOff();
      }
    else
      {
      op->vtkPointWidget::AllOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPointWidget_GetProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointWidget *op = static_cast<vtkPointWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetProperty() :
      op->vtkPointWidget::GetProperty());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPointWidget_GetSelectedProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelectedProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointWidget *op = static_cast<vtkPointWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetSelectedProperty() :
      op->vtkPointWidget::GetSelectedProperty());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPointWidget_SetHotSpotSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHotSpotSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointWidget *op = static_cast<vtkPointWidget *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetHotSpotSize(temp0);
      }
    else
      {
      op->vtkPointWidget::SetHotSpotSize(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPointWidget_GetHotSpotSizeMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHotSpotSizeMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointWidget *op = static_cast<vtkPointWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetHotSpotSizeMinValue() :
      op->vtkPointWidget::GetHotSpotSizeMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPointWidget_GetHotSpotSizeMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHotSpotSizeMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointWidget *op = static_cast<vtkPointWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetHotSpotSizeMaxValue() :
      op->vtkPointWidget::GetHotSpotSizeMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPointWidget_GetHotSpotSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHotSpotSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointWidget *op = static_cast<vtkPointWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetHotSpotSize() :
      op->vtkPointWidget::GetHotSpotSize());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkPointWidget_Methods[] = {
  {(char*)"GetClassName", PyvtkPointWidget_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkPointWidget_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkPointWidget_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkPointWidget\nC++: vtkPointWidget *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkPointWidget_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkPointWidget\nC++: vtkPointWidget *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetEnabled", PyvtkPointWidget_SetEnabled, METH_VARARGS,
   (char*)"V.SetEnabled(int)\nC++: virtual void SetEnabled(int)\n\nMethods that satisfy the superclass' API.\n"},
  {(char*)"PlaceWidget", PyvtkPointWidget_PlaceWidget, METH_VARARGS,
   (char*)"V.PlaceWidget([float, float, float, float, float, float])\nC++: virtual void PlaceWidget(double bounds[6])\nV.PlaceWidget()\nC++: void PlaceWidget()\nV.PlaceWidget(float, float, float, float, float, float)\nC++: void PlaceWidget(double xmin, double xmax, double ymin,\n    double ymax, double zmin, double zmax)\n\nMethods that satisfy the superclass' API.\n"},
  {(char*)"GetPolyData", PyvtkPointWidget_GetPolyData, METH_VARARGS,
   (char*)"V.GetPolyData(vtkPolyData)\nC++: void GetPolyData(vtkPolyData *pd)\n\nGrab the polydata (including points) that defines the point. A\nsingle point and a vertex compose the vtkPolyData.\n"},
  {(char*)"SetPosition", PyvtkPointWidget_SetPosition, METH_VARARGS,
   (char*)"V.SetPosition(float, float, float)\nC++: void SetPosition(double x, double y, double z)\nV.SetPosition([float, float, float])\nC++: void SetPosition(double x[3])\n\nSet/Get the position of the point. Note that if the position is\nset outside of the bounding box, it will be clamped to the\nboundary of the bounding box.\n"},
  {(char*)"GetPosition", PyvtkPointWidget_GetPosition, METH_VARARGS,
   (char*)"V.GetPosition() -> (float, float, float)\nC++: double *GetPosition()\nV.GetPosition([float, float, float])\nC++: void GetPosition(double xyz[3])\n\nSet/Get the position of the point. Note that if the position is\nset outside of the bounding box, it will be clamped to the\nboundary of the bounding box.\n"},
  {(char*)"SetOutline", PyvtkPointWidget_SetOutline, METH_VARARGS,
   (char*)"V.SetOutline(int)\nC++: void SetOutline(int o)\n\nTurn on/off the wireframe bounding box.\n"},
  {(char*)"GetOutline", PyvtkPointWidget_GetOutline, METH_VARARGS,
   (char*)"V.GetOutline() -> int\nC++: int GetOutline()\n\nTurn on/off the wireframe bounding box.\n"},
  {(char*)"OutlineOn", PyvtkPointWidget_OutlineOn, METH_VARARGS,
   (char*)"V.OutlineOn()\nC++: void OutlineOn()\n\nTurn on/off the wireframe bounding box.\n"},
  {(char*)"OutlineOff", PyvtkPointWidget_OutlineOff, METH_VARARGS,
   (char*)"V.OutlineOff()\nC++: void OutlineOff()\n\nTurn on/off the wireframe bounding box.\n"},
  {(char*)"SetXShadows", PyvtkPointWidget_SetXShadows, METH_VARARGS,
   (char*)"V.SetXShadows(int)\nC++: void SetXShadows(int o)\n\nTurn on/off the wireframe x-shadows.\n"},
  {(char*)"GetXShadows", PyvtkPointWidget_GetXShadows, METH_VARARGS,
   (char*)"V.GetXShadows() -> int\nC++: int GetXShadows()\n\nTurn on/off the wireframe x-shadows.\n"},
  {(char*)"XShadowsOn", PyvtkPointWidget_XShadowsOn, METH_VARARGS,
   (char*)"V.XShadowsOn()\nC++: void XShadowsOn()\n\nTurn on/off the wireframe x-shadows.\n"},
  {(char*)"XShadowsOff", PyvtkPointWidget_XShadowsOff, METH_VARARGS,
   (char*)"V.XShadowsOff()\nC++: void XShadowsOff()\n\nTurn on/off the wireframe x-shadows.\n"},
  {(char*)"SetYShadows", PyvtkPointWidget_SetYShadows, METH_VARARGS,
   (char*)"V.SetYShadows(int)\nC++: void SetYShadows(int o)\n\nTurn on/off the wireframe y-shadows.\n"},
  {(char*)"GetYShadows", PyvtkPointWidget_GetYShadows, METH_VARARGS,
   (char*)"V.GetYShadows() -> int\nC++: int GetYShadows()\n\nTurn on/off the wireframe y-shadows.\n"},
  {(char*)"YShadowsOn", PyvtkPointWidget_YShadowsOn, METH_VARARGS,
   (char*)"V.YShadowsOn()\nC++: void YShadowsOn()\n\nTurn on/off the wireframe y-shadows.\n"},
  {(char*)"YShadowsOff", PyvtkPointWidget_YShadowsOff, METH_VARARGS,
   (char*)"V.YShadowsOff()\nC++: void YShadowsOff()\n\nTurn on/off the wireframe y-shadows.\n"},
  {(char*)"SetZShadows", PyvtkPointWidget_SetZShadows, METH_VARARGS,
   (char*)"V.SetZShadows(int)\nC++: void SetZShadows(int o)\n\nTurn on/off the wireframe z-shadows.\n"},
  {(char*)"GetZShadows", PyvtkPointWidget_GetZShadows, METH_VARARGS,
   (char*)"V.GetZShadows() -> int\nC++: int GetZShadows()\n\nTurn on/off the wireframe z-shadows.\n"},
  {(char*)"ZShadowsOn", PyvtkPointWidget_ZShadowsOn, METH_VARARGS,
   (char*)"V.ZShadowsOn()\nC++: void ZShadowsOn()\n\nTurn on/off the wireframe z-shadows.\n"},
  {(char*)"ZShadowsOff", PyvtkPointWidget_ZShadowsOff, METH_VARARGS,
   (char*)"V.ZShadowsOff()\nC++: void ZShadowsOff()\n\nTurn on/off the wireframe z-shadows.\n"},
  {(char*)"SetTranslationMode", PyvtkPointWidget_SetTranslationMode, METH_VARARGS,
   (char*)"V.SetTranslationMode(int)\nC++: void SetTranslationMode(int mode)\n\nIf translation mode is on, as the widget is moved the bounding\nbox, shadows, and cursor are all translated simultaneously as the\npoint moves.\n"},
  {(char*)"GetTranslationMode", PyvtkPointWidget_GetTranslationMode, METH_VARARGS,
   (char*)"V.GetTranslationMode() -> int\nC++: int GetTranslationMode()\n\nIf translation mode is on, as the widget is moved the bounding\nbox, shadows, and cursor are all translated simultaneously as the\npoint moves.\n"},
  {(char*)"TranslationModeOn", PyvtkPointWidget_TranslationModeOn, METH_VARARGS,
   (char*)"V.TranslationModeOn()\nC++: void TranslationModeOn()\n\nIf translation mode is on, as the widget is moved the bounding\nbox, shadows, and cursor are all translated simultaneously as the\npoint moves.\n"},
  {(char*)"TranslationModeOff", PyvtkPointWidget_TranslationModeOff, METH_VARARGS,
   (char*)"V.TranslationModeOff()\nC++: void TranslationModeOff()\n\nIf translation mode is on, as the widget is moved the bounding\nbox, shadows, and cursor are all translated simultaneously as the\npoint moves.\n"},
  {(char*)"AllOn", PyvtkPointWidget_AllOn, METH_VARARGS,
   (char*)"V.AllOn()\nC++: void AllOn()\n\nConvenience methods to turn outline and shadows on and off.\n"},
  {(char*)"AllOff", PyvtkPointWidget_AllOff, METH_VARARGS,
   (char*)"V.AllOff()\nC++: void AllOff()\n\nConvenience methods to turn outline and shadows on and off.\n"},
  {(char*)"GetProperty", PyvtkPointWidget_GetProperty, METH_VARARGS,
   (char*)"V.GetProperty() -> vtkProperty\nC++: vtkProperty *GetProperty()\n\nGet the handle properties (the little balls are the handles). The\nproperties of the handles when selected and normal can be set.\n"},
  {(char*)"GetSelectedProperty", PyvtkPointWidget_GetSelectedProperty, METH_VARARGS,
   (char*)"V.GetSelectedProperty() -> vtkProperty\nC++: vtkProperty *GetSelectedProperty()\n\nGet the handle properties (the little balls are the handles). The\nproperties of the handles when selected and normal can be set.\n"},
  {(char*)"SetHotSpotSize", PyvtkPointWidget_SetHotSpotSize, METH_VARARGS,
   (char*)"V.SetHotSpotSize(float)\nC++: void SetHotSpotSize(double)\n\nSet the \"hot spot\" size; i.e., the region around the focus, in\nwhich the motion vector is used to control the constrained\nsliding action. Note the size is specified as a fraction of the\nlength of the diagonal of the point widget's bounding box.\n"},
  {(char*)"GetHotSpotSizeMinValue", PyvtkPointWidget_GetHotSpotSizeMinValue, METH_VARARGS,
   (char*)"V.GetHotSpotSizeMinValue() -> float\nC++: double GetHotSpotSizeMinValue()\n\nSet the \"hot spot\" size; i.e., the region around the focus, in\nwhich the motion vector is used to control the constrained\nsliding action. Note the size is specified as a fraction of the\nlength of the diagonal of the point widget's bounding box.\n"},
  {(char*)"GetHotSpotSizeMaxValue", PyvtkPointWidget_GetHotSpotSizeMaxValue, METH_VARARGS,
   (char*)"V.GetHotSpotSizeMaxValue() -> float\nC++: double GetHotSpotSizeMaxValue()\n\nSet the \"hot spot\" size; i.e., the region around the focus, in\nwhich the motion vector is used to control the constrained\nsliding action. Note the size is specified as a fraction of the\nlength of the diagonal of the point widget's bounding box.\n"},
  {(char*)"GetHotSpotSize", PyvtkPointWidget_GetHotSpotSize, METH_VARARGS,
   (char*)"V.GetHotSpotSize() -> float\nC++: double GetHotSpotSize()\n\nSet the \"hot spot\" size; i.e., the region around the focus, in\nwhich the motion vector is used to control the constrained\nsliding action. Note the size is specified as a fraction of the\nlength of the diagonal of the point widget's bounding box.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkPointWidget_StaticNew()
{
  return vtkPointWidget::New();
}

PyObject *PyVTKClass_vtkPointWidgetNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkPointWidget_StaticNew,
    PyvtkPointWidget_Methods,
    "vtkPointWidget", modulename,
    NULL, NULL,
    PyvtkPointWidget_Doc(),
    PyVTKClass_vtk3DWidgetNew(modulename));
  return cls;
}

const char **PyvtkPointWidget_Doc()
{
  static const char *docstring[] = {
    "vtkPointWidget - position a point in 3D space\n\n",
    "Superclass: vtk3DWidget\n\n",
    "This 3D widget allows the user to position a point in 3D space using\na 3D cursor. The cursor has an outline bounding box, axes-aligned\ncross-hairs, and axes shadows. (The outline and shadows can be turned\noff.) Any of these can be turned off. A nice feature of the object is\nthat the vtkPointWidget, like any 3D widget, will work with the\ncurrent interactor style. That is, if vtkPointWidget does not",
    " handle\nan event, then all other registered observers (including the\ninteractor style) have an opportunity to process the event.\nOtherwise, the vtkPointWidget will terminate the processing of the\nevent that it handles.\n\nTo use this object, just invoke SetInteractor() with the argument of\nthe method a vtkRenderWindowInteractor.  You may also wish to invoke\n\"PlaceWidget()\" to initially position the ",
    "widget. The interactor will\nact normally until the \"i\" key (for \"interactor\") is pressed, at\nwhich point the vtkPointWidget will appear. (See superclass\ndocumentation for information about changing this behavior.) To move\nthe point, the user can grab (left mouse) on any widget line and\n\"slide\" the point into position. Scaling is achieved by using the\nright mouse button \"up\" the render window (make",
    "s the widget bigger)\nor \"down\" the render window (makes the widget smaller). To translate\nthe widget use the middle mouse button. (Note: all of the translation\ninteractions can be constrained to one of the x-y-z axes by using the\n\"shift\" key.) The vtkPointWidget produces as output a polydata with a\nsingle point and a vertex cell.\n\nSome additional features of this class include the ability to contr",
    "ol\nthe rendered properties of the widget. You can set the properties of\nthe selected and unselected representations of the parts of the\nwidget. For example, you can set the property of the 3D cursor in its\nnormal and selected states.\n\nSee Also:\n\nvtk3DWidget vtkLineWidget vtkBoxWidget vtkPlaneWidget\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPointWidget(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPointWidgetNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPointWidget", o) != 0)
    {
    Py_DECREF(o);
    }

}

