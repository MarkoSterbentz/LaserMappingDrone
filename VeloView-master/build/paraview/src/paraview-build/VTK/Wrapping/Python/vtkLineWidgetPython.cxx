// python wrapper for vtkLineWidget
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkLineWidget.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkLineWidget(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkLineWidgetNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtk3DWidgetNew
extern "C" { PyObject *PyVTKClass_vtk3DWidgetNew(const char *); }
#define DECLARED_PyVTKClass_vtk3DWidgetNew
#endif

static const char **PyvtkLineWidget_Doc();


static PyObject *
PyvtkLineWidget_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineWidget *op = static_cast<vtkLineWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkLineWidget::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLineWidget_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineWidget *op = static_cast<vtkLineWidget *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkLineWidget::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLineWidget_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineWidget *op = static_cast<vtkLineWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkLineWidget *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkLineWidget::NewInstance());

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
PyvtkLineWidget_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkLineWidget *tempr = vtkLineWidget::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLineWidget_SetEnabled(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEnabled");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineWidget *op = static_cast<vtkLineWidget *>(vp);

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
      op->vtkLineWidget::SetEnabled(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLineWidget_PlaceWidget_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PlaceWidget");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineWidget *op = static_cast<vtkLineWidget *>(vp);

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
      op->vtkLineWidget::PlaceWidget(temp0);
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
PyvtkLineWidget_PlaceWidget_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PlaceWidget");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineWidget *op = static_cast<vtkLineWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->PlaceWidget();
      }
    else
      {
      op->vtkLineWidget::PlaceWidget();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkLineWidget_PlaceWidget_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PlaceWidget");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineWidget *op = static_cast<vtkLineWidget *>(vp);

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
      op->vtkLineWidget::PlaceWidget(temp0, temp1, temp2, temp3, temp4, temp5);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkLineWidget_PlaceWidget(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkLineWidget_PlaceWidget_s1(self, args);
    case 0:
      return PyvtkLineWidget_PlaceWidget_s2(self, args);
    case 6:
      return PyvtkLineWidget_PlaceWidget_s3(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "PlaceWidget");
  return NULL;
}



static PyObject *
PyvtkLineWidget_SetResolution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineWidget *op = static_cast<vtkLineWidget *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetResolution(temp0);
      }
    else
      {
      op->vtkLineWidget::SetResolution(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLineWidget_GetResolution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineWidget *op = static_cast<vtkLineWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetResolution() :
      op->vtkLineWidget::GetResolution());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLineWidget_SetPoint1_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPoint1");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineWidget *op = static_cast<vtkLineWidget *>(vp);

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
      op->SetPoint1(temp0, temp1, temp2);
      }
    else
      {
      op->vtkLineWidget::SetPoint1(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkLineWidget_SetPoint1_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPoint1");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineWidget *op = static_cast<vtkLineWidget *>(vp);

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
      op->SetPoint1(temp0);
      }
    else
      {
      op->vtkLineWidget::SetPoint1(temp0);
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
PyvtkLineWidget_SetPoint1(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkLineWidget_SetPoint1_s1(self, args);
    case 1:
      return PyvtkLineWidget_SetPoint1_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetPoint1");
  return NULL;
}



static PyObject *
PyvtkLineWidget_GetPoint1_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPoint1");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineWidget *op = static_cast<vtkLineWidget *>(vp);

  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetPoint1() :
      op->vtkLineWidget::GetPoint1());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}

static PyObject *
PyvtkLineWidget_GetPoint1_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPoint1");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineWidget *op = static_cast<vtkLineWidget *>(vp);

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
      op->GetPoint1(temp0);
      }
    else
      {
      op->vtkLineWidget::GetPoint1(temp0);
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
PyvtkLineWidget_GetPoint1(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 0:
      return PyvtkLineWidget_GetPoint1_s1(self, args);
    case 1:
      return PyvtkLineWidget_GetPoint1_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetPoint1");
  return NULL;
}



static PyObject *
PyvtkLineWidget_SetPoint2_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPoint2");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineWidget *op = static_cast<vtkLineWidget *>(vp);

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
      op->SetPoint2(temp0, temp1, temp2);
      }
    else
      {
      op->vtkLineWidget::SetPoint2(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkLineWidget_SetPoint2_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPoint2");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineWidget *op = static_cast<vtkLineWidget *>(vp);

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
      op->SetPoint2(temp0);
      }
    else
      {
      op->vtkLineWidget::SetPoint2(temp0);
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
PyvtkLineWidget_SetPoint2(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkLineWidget_SetPoint2_s1(self, args);
    case 1:
      return PyvtkLineWidget_SetPoint2_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetPoint2");
  return NULL;
}



static PyObject *
PyvtkLineWidget_GetPoint2_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPoint2");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineWidget *op = static_cast<vtkLineWidget *>(vp);

  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetPoint2() :
      op->vtkLineWidget::GetPoint2());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}

static PyObject *
PyvtkLineWidget_GetPoint2_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPoint2");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineWidget *op = static_cast<vtkLineWidget *>(vp);

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
      op->GetPoint2(temp0);
      }
    else
      {
      op->vtkLineWidget::GetPoint2(temp0);
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
PyvtkLineWidget_GetPoint2(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 0:
      return PyvtkLineWidget_GetPoint2_s1(self, args);
    case 1:
      return PyvtkLineWidget_GetPoint2_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetPoint2");
  return NULL;
}



static PyObject *
PyvtkLineWidget_SetAlign(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAlign");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineWidget *op = static_cast<vtkLineWidget *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetAlign(temp0);
      }
    else
      {
      op->vtkLineWidget::SetAlign(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLineWidget_GetAlignMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAlignMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineWidget *op = static_cast<vtkLineWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetAlignMinValue() :
      op->vtkLineWidget::GetAlignMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLineWidget_GetAlignMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAlignMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineWidget *op = static_cast<vtkLineWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetAlignMaxValue() :
      op->vtkLineWidget::GetAlignMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLineWidget_GetAlign(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAlign");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineWidget *op = static_cast<vtkLineWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetAlign() :
      op->vtkLineWidget::GetAlign());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLineWidget_SetAlignToXAxis(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAlignToXAxis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineWidget *op = static_cast<vtkLineWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetAlignToXAxis();
      }
    else
      {
      op->vtkLineWidget::SetAlignToXAxis();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLineWidget_SetAlignToYAxis(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAlignToYAxis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineWidget *op = static_cast<vtkLineWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetAlignToYAxis();
      }
    else
      {
      op->vtkLineWidget::SetAlignToYAxis();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLineWidget_SetAlignToZAxis(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAlignToZAxis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineWidget *op = static_cast<vtkLineWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetAlignToZAxis();
      }
    else
      {
      op->vtkLineWidget::SetAlignToZAxis();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLineWidget_SetAlignToNone(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAlignToNone");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineWidget *op = static_cast<vtkLineWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetAlignToNone();
      }
    else
      {
      op->vtkLineWidget::SetAlignToNone();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLineWidget_SetClampToBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetClampToBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineWidget *op = static_cast<vtkLineWidget *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetClampToBounds(temp0);
      }
    else
      {
      op->vtkLineWidget::SetClampToBounds(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLineWidget_GetClampToBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClampToBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineWidget *op = static_cast<vtkLineWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetClampToBounds() :
      op->vtkLineWidget::GetClampToBounds());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLineWidget_ClampToBoundsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClampToBoundsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineWidget *op = static_cast<vtkLineWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ClampToBoundsOn();
      }
    else
      {
      op->vtkLineWidget::ClampToBoundsOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLineWidget_ClampToBoundsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClampToBoundsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineWidget *op = static_cast<vtkLineWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ClampToBoundsOff();
      }
    else
      {
      op->vtkLineWidget::ClampToBoundsOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLineWidget_GetPolyData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPolyData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineWidget *op = static_cast<vtkLineWidget *>(vp);

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
      op->vtkLineWidget::GetPolyData(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLineWidget_GetHandleProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHandleProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineWidget *op = static_cast<vtkLineWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetHandleProperty() :
      op->vtkLineWidget::GetHandleProperty());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLineWidget_GetSelectedHandleProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelectedHandleProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineWidget *op = static_cast<vtkLineWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetSelectedHandleProperty() :
      op->vtkLineWidget::GetSelectedHandleProperty());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLineWidget_GetLineProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLineProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineWidget *op = static_cast<vtkLineWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetLineProperty() :
      op->vtkLineWidget::GetLineProperty());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLineWidget_GetSelectedLineProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelectedLineProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineWidget *op = static_cast<vtkLineWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetSelectedLineProperty() :
      op->vtkLineWidget::GetSelectedLineProperty());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkLineWidget_Methods[] = {
  {(char*)"GetClassName", PyvtkLineWidget_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkLineWidget_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkLineWidget_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkLineWidget\nC++: vtkLineWidget *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkLineWidget_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkLineWidget\nC++: vtkLineWidget *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetEnabled", PyvtkLineWidget_SetEnabled, METH_VARARGS,
   (char*)"V.SetEnabled(int)\nC++: virtual void SetEnabled(int)\n\nMethods that satisfy the superclass' API.\n"},
  {(char*)"PlaceWidget", PyvtkLineWidget_PlaceWidget, METH_VARARGS,
   (char*)"V.PlaceWidget([float, float, float, float, float, float])\nC++: virtual void PlaceWidget(double bounds[6])\nV.PlaceWidget()\nC++: void PlaceWidget()\nV.PlaceWidget(float, float, float, float, float, float)\nC++: void PlaceWidget(double xmin, double xmax, double ymin,\n    double ymax, double zmin, double zmax)\n\nMethods that satisfy the superclass' API.\n"},
  {(char*)"SetResolution", PyvtkLineWidget_SetResolution, METH_VARARGS,
   (char*)"V.SetResolution(int)\nC++: void SetResolution(int r)\n\nSet/Get the resolution (number of subdivisions) of the line.\n"},
  {(char*)"GetResolution", PyvtkLineWidget_GetResolution, METH_VARARGS,
   (char*)"V.GetResolution() -> int\nC++: int GetResolution()\n\nSet/Get the resolution (number of subdivisions) of the line.\n"},
  {(char*)"SetPoint1", PyvtkLineWidget_SetPoint1, METH_VARARGS,
   (char*)"V.SetPoint1(float, float, float)\nC++: void SetPoint1(double x, double y, double z)\nV.SetPoint1([float, float, float])\nC++: void SetPoint1(double x[3])\n\nSet/Get the position of first end point.\n"},
  {(char*)"GetPoint1", PyvtkLineWidget_GetPoint1, METH_VARARGS,
   (char*)"V.GetPoint1() -> (float, float, float)\nC++: double *GetPoint1()\nV.GetPoint1([float, float, float])\nC++: void GetPoint1(double xyz[3])\n\nSet/Get the position of first end point.\n"},
  {(char*)"SetPoint2", PyvtkLineWidget_SetPoint2, METH_VARARGS,
   (char*)"V.SetPoint2(float, float, float)\nC++: void SetPoint2(double x, double y, double z)\nV.SetPoint2([float, float, float])\nC++: void SetPoint2(double x[3])\n\nSet position of other end point.\n"},
  {(char*)"GetPoint2", PyvtkLineWidget_GetPoint2, METH_VARARGS,
   (char*)"V.GetPoint2() -> (float, float, float)\nC++: double *GetPoint2()\nV.GetPoint2([float, float, float])\nC++: void GetPoint2(double xyz[3])\n\nSet position of other end point.\n"},
  {(char*)"SetAlign", PyvtkLineWidget_SetAlign, METH_VARARGS,
   (char*)"V.SetAlign(int)\nC++: void SetAlign(int)\n\nForce the line widget to be aligned with one of the x-y-z axes.\nRemember that when the state changes, a ModifiedEvent is invoked.\nThis can be used to snap the line to the axes if it is originally\nnot aligned.\n"},
  {(char*)"GetAlignMinValue", PyvtkLineWidget_GetAlignMinValue, METH_VARARGS,
   (char*)"V.GetAlignMinValue() -> int\nC++: int GetAlignMinValue()\n\nForce the line widget to be aligned with one of the x-y-z axes.\nRemember that when the state changes, a ModifiedEvent is invoked.\nThis can be used to snap the line to the axes if it is originally\nnot aligned.\n"},
  {(char*)"GetAlignMaxValue", PyvtkLineWidget_GetAlignMaxValue, METH_VARARGS,
   (char*)"V.GetAlignMaxValue() -> int\nC++: int GetAlignMaxValue()\n\nForce the line widget to be aligned with one of the x-y-z axes.\nRemember that when the state changes, a ModifiedEvent is invoked.\nThis can be used to snap the line to the axes if it is originally\nnot aligned.\n"},
  {(char*)"GetAlign", PyvtkLineWidget_GetAlign, METH_VARARGS,
   (char*)"V.GetAlign() -> int\nC++: int GetAlign()\n\nForce the line widget to be aligned with one of the x-y-z axes.\nRemember that when the state changes, a ModifiedEvent is invoked.\nThis can be used to snap the line to the axes if it is originally\nnot aligned.\n"},
  {(char*)"SetAlignToXAxis", PyvtkLineWidget_SetAlignToXAxis, METH_VARARGS,
   (char*)"V.SetAlignToXAxis()\nC++: void SetAlignToXAxis()\n\nForce the line widget to be aligned with one of the x-y-z axes.\nRemember that when the state changes, a ModifiedEvent is invoked.\nThis can be used to snap the line to the axes if it is originally\nnot aligned.\n"},
  {(char*)"SetAlignToYAxis", PyvtkLineWidget_SetAlignToYAxis, METH_VARARGS,
   (char*)"V.SetAlignToYAxis()\nC++: void SetAlignToYAxis()\n\nForce the line widget to be aligned with one of the x-y-z axes.\nRemember that when the state changes, a ModifiedEvent is invoked.\nThis can be used to snap the line to the axes if it is originally\nnot aligned.\n"},
  {(char*)"SetAlignToZAxis", PyvtkLineWidget_SetAlignToZAxis, METH_VARARGS,
   (char*)"V.SetAlignToZAxis()\nC++: void SetAlignToZAxis()\n\nForce the line widget to be aligned with one of the x-y-z axes.\nRemember that when the state changes, a ModifiedEvent is invoked.\nThis can be used to snap the line to the axes if it is originally\nnot aligned.\n"},
  {(char*)"SetAlignToNone", PyvtkLineWidget_SetAlignToNone, METH_VARARGS,
   (char*)"V.SetAlignToNone()\nC++: void SetAlignToNone()\n\nForce the line widget to be aligned with one of the x-y-z axes.\nRemember that when the state changes, a ModifiedEvent is invoked.\nThis can be used to snap the line to the axes if it is originally\nnot aligned.\n"},
  {(char*)"SetClampToBounds", PyvtkLineWidget_SetClampToBounds, METH_VARARGS,
   (char*)"V.SetClampToBounds(int)\nC++: void SetClampToBounds(int a)\n\nEnable/disable clamping of the point end points to the bounding\nbox of the data. The bounding box is defined from the last\nPlaceWidget() invocation, and includes the effect of the\nPlaceFactor which is used to gram/shrink the bounding box.\n"},
  {(char*)"GetClampToBounds", PyvtkLineWidget_GetClampToBounds, METH_VARARGS,
   (char*)"V.GetClampToBounds() -> int\nC++: int GetClampToBounds()\n\nEnable/disable clamping of the point end points to the bounding\nbox of the data. The bounding box is defined from the last\nPlaceWidget() invocation, and includes the effect of the\nPlaceFactor which is used to gram/shrink the bounding box.\n"},
  {(char*)"ClampToBoundsOn", PyvtkLineWidget_ClampToBoundsOn, METH_VARARGS,
   (char*)"V.ClampToBoundsOn()\nC++: void ClampToBoundsOn()\n\nEnable/disable clamping of the point end points to the bounding\nbox of the data. The bounding box is defined from the last\nPlaceWidget() invocation, and includes the effect of the\nPlaceFactor which is used to gram/shrink the bounding box.\n"},
  {(char*)"ClampToBoundsOff", PyvtkLineWidget_ClampToBoundsOff, METH_VARARGS,
   (char*)"V.ClampToBoundsOff()\nC++: void ClampToBoundsOff()\n\nEnable/disable clamping of the point end points to the bounding\nbox of the data. The bounding box is defined from the last\nPlaceWidget() invocation, and includes the effect of the\nPlaceFactor which is used to gram/shrink the bounding box.\n"},
  {(char*)"GetPolyData", PyvtkLineWidget_GetPolyData, METH_VARARGS,
   (char*)"V.GetPolyData(vtkPolyData)\nC++: void GetPolyData(vtkPolyData *pd)\n\nGrab the polydata (including points) that defines the line.  The\npolydata consists of n+1 points, where n is the resolution of the\nline. These point values are guaranteed to be up-to-date when\neither the InteractionEvent or EndInteraction events are invoked.\nThe user provides the vtkPolyData and the points and polyline are\nadded to it.\n"},
  {(char*)"GetHandleProperty", PyvtkLineWidget_GetHandleProperty, METH_VARARGS,
   (char*)"V.GetHandleProperty() -> vtkProperty\nC++: vtkProperty *GetHandleProperty()\n\nGet the handle properties (the little balls are the handles). The\nproperties of the handles when selected and normal can be\nmanipulated.\n"},
  {(char*)"GetSelectedHandleProperty", PyvtkLineWidget_GetSelectedHandleProperty, METH_VARARGS,
   (char*)"V.GetSelectedHandleProperty() -> vtkProperty\nC++: vtkProperty *GetSelectedHandleProperty()\n\nGet the handle properties (the little balls are the handles). The\nproperties of the handles when selected and normal can be\nmanipulated.\n"},
  {(char*)"GetLineProperty", PyvtkLineWidget_GetLineProperty, METH_VARARGS,
   (char*)"V.GetLineProperty() -> vtkProperty\nC++: vtkProperty *GetLineProperty()\n\nGet the line properties. The properties of the line when selected\nand unselected can be manipulated.\n"},
  {(char*)"GetSelectedLineProperty", PyvtkLineWidget_GetSelectedLineProperty, METH_VARARGS,
   (char*)"V.GetSelectedLineProperty() -> vtkProperty\nC++: vtkProperty *GetSelectedLineProperty()\n\nGet the line properties. The properties of the line when selected\nand unselected can be manipulated.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkLineWidget_StaticNew()
{
  return vtkLineWidget::New();
}

PyObject *PyVTKClass_vtkLineWidgetNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkLineWidget_StaticNew,
    PyvtkLineWidget_Methods,
    "vtkLineWidget", modulename,
    NULL, NULL,
    PyvtkLineWidget_Doc(),
    PyVTKClass_vtk3DWidgetNew(modulename));
  return cls;
}

const char **PyvtkLineWidget_Doc()
{
  static const char *docstring[] = {
    "vtkLineWidget - 3D widget for manipulating a line\n\n",
    "Superclass: vtk3DWidget\n\n",
    "This 3D widget defines a line that can be interactively placed in a\nscene. The line has two handles (at its endpoints), plus the line can\nbe picked to translate it in the scene.  A nice feature of the object\nis that the vtkLineWidget, like any 3D widget, will work with the\ncurrent interactor style and any other widgets present in the scene.\nThat is, if vtkLineWidget does not handle an event, then ",
    "all other\nregistered observers (including the interactor style) have an\nopportunity to process the event. Otherwise, the vtkLineWidget will\nterminate the processing of the event that it handles.\n\nTo use this object, just invoke SetInteractor() with the argument of\nthe method a vtkRenderWindowInteractor.  You may also wish to invoke\n\"PlaceWidget()\" to initially position the widget. The interactor w",
    "ill\nact normally until the \"i\" key (for \"interactor\") is pressed, at\nwhich point the vtkLineWidget will appear. (See superclass\ndocumentation for information about changing this behavior.) By\ngrabbing one of the two end point handles (use the left mouse\nbutton), the line can be oriented and stretched (the other end point\nremains fixed). By grabbing the line itself, or using the middle\nmouse button",
    ", the entire line can be translated.  Scaling (about the\ncenter of the line) is achieved by using the right mouse button. By\nmoving the mouse \"up\" the render window the line will be made bigger;\nby moving \"down\" the render window the widget will be made smaller.\nTurn off the widget by pressing the \"i\" key again (or invoke the\nOff() method). (Note: picking the line or either one of the two end\npoin",
    "t handles causes a vtkPointWidget to appear.  This widget has the\nability to constrain motion to an axis by pressing the \"shift\" key\nwhile moving the mouse.)\n\nThe vtkLineWidget has several methods that can be used in conjunction\nwith other VTK objects. The Set/GetResolution() methods control the\nnumber of subdivisions of the line; the GetPolyData() method can be\nused to get the polygonal represent",
    "ation and can be used for things\nlike seeding streamlines. Typical usage of the widget is to make use\nof the StartInteractionEvent, InteractionEvent, and\nEndInteractionEvent events. The InteractionEvent is called on mouse\nmotion; the other two events are called on button down and button up\n(either left or right button).\n\nSome additional features of this class include the ability to control\nthe pro",
    "perties of the widget. You can set the properties of the\nselected and unselected representations of the line. For example, you\ncan set the property for the handles and line. In addition there are\nmethods to constrain the line so that it is aligned along the x-y-z\naxes.\n\nSee Also:\n\nvtk3DWidget vtkBoxWidget vtkPlaneWidget\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkLineWidget(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkLineWidgetNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkLineWidget", o) != 0)
    {
    Py_DECREF(o);
    }

}

