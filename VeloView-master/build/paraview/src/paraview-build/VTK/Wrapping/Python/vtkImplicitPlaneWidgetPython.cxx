// python wrapper for vtkImplicitPlaneWidget
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkImplicitPlaneWidget.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkImplicitPlaneWidget(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkImplicitPlaneWidgetNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkPolyDataSourceWidgetNew
extern "C" { PyObject *PyVTKClass_vtkPolyDataSourceWidgetNew(const char *); }
#define DECLARED_PyVTKClass_vtkPolyDataSourceWidgetNew
#endif

static const char **PyvtkImplicitPlaneWidget_Doc();


static PyObject *
PyvtkImplicitPlaneWidget_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPlaneWidget *op = static_cast<vtkImplicitPlaneWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkImplicitPlaneWidget::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImplicitPlaneWidget_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPlaneWidget *op = static_cast<vtkImplicitPlaneWidget *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkImplicitPlaneWidget::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImplicitPlaneWidget_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPlaneWidget *op = static_cast<vtkImplicitPlaneWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkImplicitPlaneWidget *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkImplicitPlaneWidget::NewInstance());

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
PyvtkImplicitPlaneWidget_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkImplicitPlaneWidget *tempr = vtkImplicitPlaneWidget::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImplicitPlaneWidget_SetEnabled(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEnabled");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPlaneWidget *op = static_cast<vtkImplicitPlaneWidget *>(vp);

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
      op->vtkImplicitPlaneWidget::SetEnabled(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImplicitPlaneWidget_PlaceWidget_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PlaceWidget");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPlaneWidget *op = static_cast<vtkImplicitPlaneWidget *>(vp);

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
      op->vtkImplicitPlaneWidget::PlaceWidget(temp0);
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
PyvtkImplicitPlaneWidget_PlaceWidget_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PlaceWidget");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPlaneWidget *op = static_cast<vtkImplicitPlaneWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->PlaceWidget();
      }
    else
      {
      op->vtkImplicitPlaneWidget::PlaceWidget();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkImplicitPlaneWidget_PlaceWidget_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PlaceWidget");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPlaneWidget *op = static_cast<vtkImplicitPlaneWidget *>(vp);

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
      op->vtkImplicitPlaneWidget::PlaceWidget(temp0, temp1, temp2, temp3, temp4, temp5);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkImplicitPlaneWidget_PlaceWidget(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkImplicitPlaneWidget_PlaceWidget_s1(self, args);
    case 0:
      return PyvtkImplicitPlaneWidget_PlaceWidget_s2(self, args);
    case 6:
      return PyvtkImplicitPlaneWidget_PlaceWidget_s3(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "PlaceWidget");
  return NULL;
}



static PyObject *
PyvtkImplicitPlaneWidget_SetOrigin_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPlaneWidget *op = static_cast<vtkImplicitPlaneWidget *>(vp);

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
      op->SetOrigin(temp0, temp1, temp2);
      }
    else
      {
      op->vtkImplicitPlaneWidget::SetOrigin(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkImplicitPlaneWidget_SetOrigin_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPlaneWidget *op = static_cast<vtkImplicitPlaneWidget *>(vp);

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
      op->SetOrigin(temp0);
      }
    else
      {
      op->vtkImplicitPlaneWidget::SetOrigin(temp0);
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
PyvtkImplicitPlaneWidget_SetOrigin(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkImplicitPlaneWidget_SetOrigin_s1(self, args);
    case 1:
      return PyvtkImplicitPlaneWidget_SetOrigin_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetOrigin");
  return NULL;
}



static PyObject *
PyvtkImplicitPlaneWidget_GetOrigin_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPlaneWidget *op = static_cast<vtkImplicitPlaneWidget *>(vp);

  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetOrigin() :
      op->vtkImplicitPlaneWidget::GetOrigin());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}

static PyObject *
PyvtkImplicitPlaneWidget_GetOrigin_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPlaneWidget *op = static_cast<vtkImplicitPlaneWidget *>(vp);

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
      op->GetOrigin(temp0);
      }
    else
      {
      op->vtkImplicitPlaneWidget::GetOrigin(temp0);
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
PyvtkImplicitPlaneWidget_GetOrigin(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 0:
      return PyvtkImplicitPlaneWidget_GetOrigin_s1(self, args);
    case 1:
      return PyvtkImplicitPlaneWidget_GetOrigin_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetOrigin");
  return NULL;
}



static PyObject *
PyvtkImplicitPlaneWidget_SetNormal_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNormal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPlaneWidget *op = static_cast<vtkImplicitPlaneWidget *>(vp);

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
      op->SetNormal(temp0, temp1, temp2);
      }
    else
      {
      op->vtkImplicitPlaneWidget::SetNormal(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkImplicitPlaneWidget_SetNormal_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNormal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPlaneWidget *op = static_cast<vtkImplicitPlaneWidget *>(vp);

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
      op->SetNormal(temp0);
      }
    else
      {
      op->vtkImplicitPlaneWidget::SetNormal(temp0);
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
PyvtkImplicitPlaneWidget_SetNormal(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkImplicitPlaneWidget_SetNormal_s1(self, args);
    case 1:
      return PyvtkImplicitPlaneWidget_SetNormal_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetNormal");
  return NULL;
}



static PyObject *
PyvtkImplicitPlaneWidget_GetNormal_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNormal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPlaneWidget *op = static_cast<vtkImplicitPlaneWidget *>(vp);

  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetNormal() :
      op->vtkImplicitPlaneWidget::GetNormal());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}

static PyObject *
PyvtkImplicitPlaneWidget_GetNormal_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNormal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPlaneWidget *op = static_cast<vtkImplicitPlaneWidget *>(vp);

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
      op->GetNormal(temp0);
      }
    else
      {
      op->vtkImplicitPlaneWidget::GetNormal(temp0);
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
PyvtkImplicitPlaneWidget_GetNormal(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 0:
      return PyvtkImplicitPlaneWidget_GetNormal_s1(self, args);
    case 1:
      return PyvtkImplicitPlaneWidget_GetNormal_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetNormal");
  return NULL;
}



static PyObject *
PyvtkImplicitPlaneWidget_SetNormalToXAxis(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNormalToXAxis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPlaneWidget *op = static_cast<vtkImplicitPlaneWidget *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetNormalToXAxis(temp0);
      }
    else
      {
      op->vtkImplicitPlaneWidget::SetNormalToXAxis(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImplicitPlaneWidget_GetNormalToXAxis(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNormalToXAxis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPlaneWidget *op = static_cast<vtkImplicitPlaneWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNormalToXAxis() :
      op->vtkImplicitPlaneWidget::GetNormalToXAxis());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImplicitPlaneWidget_NormalToXAxisOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NormalToXAxisOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPlaneWidget *op = static_cast<vtkImplicitPlaneWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->NormalToXAxisOn();
      }
    else
      {
      op->vtkImplicitPlaneWidget::NormalToXAxisOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImplicitPlaneWidget_NormalToXAxisOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NormalToXAxisOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPlaneWidget *op = static_cast<vtkImplicitPlaneWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->NormalToXAxisOff();
      }
    else
      {
      op->vtkImplicitPlaneWidget::NormalToXAxisOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImplicitPlaneWidget_SetNormalToYAxis(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNormalToYAxis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPlaneWidget *op = static_cast<vtkImplicitPlaneWidget *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetNormalToYAxis(temp0);
      }
    else
      {
      op->vtkImplicitPlaneWidget::SetNormalToYAxis(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImplicitPlaneWidget_GetNormalToYAxis(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNormalToYAxis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPlaneWidget *op = static_cast<vtkImplicitPlaneWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNormalToYAxis() :
      op->vtkImplicitPlaneWidget::GetNormalToYAxis());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImplicitPlaneWidget_NormalToYAxisOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NormalToYAxisOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPlaneWidget *op = static_cast<vtkImplicitPlaneWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->NormalToYAxisOn();
      }
    else
      {
      op->vtkImplicitPlaneWidget::NormalToYAxisOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImplicitPlaneWidget_NormalToYAxisOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NormalToYAxisOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPlaneWidget *op = static_cast<vtkImplicitPlaneWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->NormalToYAxisOff();
      }
    else
      {
      op->vtkImplicitPlaneWidget::NormalToYAxisOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImplicitPlaneWidget_SetNormalToZAxis(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNormalToZAxis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPlaneWidget *op = static_cast<vtkImplicitPlaneWidget *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetNormalToZAxis(temp0);
      }
    else
      {
      op->vtkImplicitPlaneWidget::SetNormalToZAxis(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImplicitPlaneWidget_GetNormalToZAxis(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNormalToZAxis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPlaneWidget *op = static_cast<vtkImplicitPlaneWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNormalToZAxis() :
      op->vtkImplicitPlaneWidget::GetNormalToZAxis());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImplicitPlaneWidget_NormalToZAxisOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NormalToZAxisOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPlaneWidget *op = static_cast<vtkImplicitPlaneWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->NormalToZAxisOn();
      }
    else
      {
      op->vtkImplicitPlaneWidget::NormalToZAxisOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImplicitPlaneWidget_NormalToZAxisOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NormalToZAxisOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPlaneWidget *op = static_cast<vtkImplicitPlaneWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->NormalToZAxisOff();
      }
    else
      {
      op->vtkImplicitPlaneWidget::NormalToZAxisOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImplicitPlaneWidget_SetTubing(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTubing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPlaneWidget *op = static_cast<vtkImplicitPlaneWidget *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetTubing(temp0);
      }
    else
      {
      op->vtkImplicitPlaneWidget::SetTubing(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImplicitPlaneWidget_GetTubing(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTubing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPlaneWidget *op = static_cast<vtkImplicitPlaneWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetTubing() :
      op->vtkImplicitPlaneWidget::GetTubing());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImplicitPlaneWidget_TubingOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TubingOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPlaneWidget *op = static_cast<vtkImplicitPlaneWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->TubingOn();
      }
    else
      {
      op->vtkImplicitPlaneWidget::TubingOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImplicitPlaneWidget_TubingOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TubingOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPlaneWidget *op = static_cast<vtkImplicitPlaneWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->TubingOff();
      }
    else
      {
      op->vtkImplicitPlaneWidget::TubingOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImplicitPlaneWidget_SetDrawPlane(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDrawPlane");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPlaneWidget *op = static_cast<vtkImplicitPlaneWidget *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetDrawPlane(temp0);
      }
    else
      {
      op->vtkImplicitPlaneWidget::SetDrawPlane(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImplicitPlaneWidget_GetDrawPlane(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDrawPlane");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPlaneWidget *op = static_cast<vtkImplicitPlaneWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetDrawPlane() :
      op->vtkImplicitPlaneWidget::GetDrawPlane());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImplicitPlaneWidget_DrawPlaneOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawPlaneOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPlaneWidget *op = static_cast<vtkImplicitPlaneWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->DrawPlaneOn();
      }
    else
      {
      op->vtkImplicitPlaneWidget::DrawPlaneOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImplicitPlaneWidget_DrawPlaneOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawPlaneOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPlaneWidget *op = static_cast<vtkImplicitPlaneWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->DrawPlaneOff();
      }
    else
      {
      op->vtkImplicitPlaneWidget::DrawPlaneOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImplicitPlaneWidget_SetOutlineTranslation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutlineTranslation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPlaneWidget *op = static_cast<vtkImplicitPlaneWidget *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetOutlineTranslation(temp0);
      }
    else
      {
      op->vtkImplicitPlaneWidget::SetOutlineTranslation(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImplicitPlaneWidget_GetOutlineTranslation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutlineTranslation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPlaneWidget *op = static_cast<vtkImplicitPlaneWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetOutlineTranslation() :
      op->vtkImplicitPlaneWidget::GetOutlineTranslation());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImplicitPlaneWidget_OutlineTranslationOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OutlineTranslationOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPlaneWidget *op = static_cast<vtkImplicitPlaneWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->OutlineTranslationOn();
      }
    else
      {
      op->vtkImplicitPlaneWidget::OutlineTranslationOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImplicitPlaneWidget_OutlineTranslationOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OutlineTranslationOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPlaneWidget *op = static_cast<vtkImplicitPlaneWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->OutlineTranslationOff();
      }
    else
      {
      op->vtkImplicitPlaneWidget::OutlineTranslationOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImplicitPlaneWidget_SetOutsideBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutsideBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPlaneWidget *op = static_cast<vtkImplicitPlaneWidget *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetOutsideBounds(temp0);
      }
    else
      {
      op->vtkImplicitPlaneWidget::SetOutsideBounds(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImplicitPlaneWidget_GetOutsideBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutsideBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPlaneWidget *op = static_cast<vtkImplicitPlaneWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetOutsideBounds() :
      op->vtkImplicitPlaneWidget::GetOutsideBounds());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImplicitPlaneWidget_OutsideBoundsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OutsideBoundsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPlaneWidget *op = static_cast<vtkImplicitPlaneWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->OutsideBoundsOn();
      }
    else
      {
      op->vtkImplicitPlaneWidget::OutsideBoundsOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImplicitPlaneWidget_OutsideBoundsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OutsideBoundsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPlaneWidget *op = static_cast<vtkImplicitPlaneWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->OutsideBoundsOff();
      }
    else
      {
      op->vtkImplicitPlaneWidget::OutsideBoundsOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImplicitPlaneWidget_SetScaleEnabled(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScaleEnabled");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPlaneWidget *op = static_cast<vtkImplicitPlaneWidget *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetScaleEnabled(temp0);
      }
    else
      {
      op->vtkImplicitPlaneWidget::SetScaleEnabled(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImplicitPlaneWidget_GetScaleEnabled(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScaleEnabled");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPlaneWidget *op = static_cast<vtkImplicitPlaneWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetScaleEnabled() :
      op->vtkImplicitPlaneWidget::GetScaleEnabled());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImplicitPlaneWidget_ScaleEnabledOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ScaleEnabledOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPlaneWidget *op = static_cast<vtkImplicitPlaneWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ScaleEnabledOn();
      }
    else
      {
      op->vtkImplicitPlaneWidget::ScaleEnabledOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImplicitPlaneWidget_ScaleEnabledOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ScaleEnabledOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPlaneWidget *op = static_cast<vtkImplicitPlaneWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ScaleEnabledOff();
      }
    else
      {
      op->vtkImplicitPlaneWidget::ScaleEnabledOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImplicitPlaneWidget_SetOriginTranslation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOriginTranslation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPlaneWidget *op = static_cast<vtkImplicitPlaneWidget *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetOriginTranslation(temp0);
      }
    else
      {
      op->vtkImplicitPlaneWidget::SetOriginTranslation(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImplicitPlaneWidget_GetOriginTranslation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOriginTranslation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPlaneWidget *op = static_cast<vtkImplicitPlaneWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetOriginTranslation() :
      op->vtkImplicitPlaneWidget::GetOriginTranslation());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImplicitPlaneWidget_OriginTranslationOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OriginTranslationOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPlaneWidget *op = static_cast<vtkImplicitPlaneWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->OriginTranslationOn();
      }
    else
      {
      op->vtkImplicitPlaneWidget::OriginTranslationOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImplicitPlaneWidget_OriginTranslationOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OriginTranslationOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPlaneWidget *op = static_cast<vtkImplicitPlaneWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->OriginTranslationOff();
      }
    else
      {
      op->vtkImplicitPlaneWidget::OriginTranslationOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImplicitPlaneWidget_SetDiagonalRatio(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDiagonalRatio");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPlaneWidget *op = static_cast<vtkImplicitPlaneWidget *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetDiagonalRatio(temp0);
      }
    else
      {
      op->vtkImplicitPlaneWidget::SetDiagonalRatio(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImplicitPlaneWidget_GetDiagonalRatioMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDiagonalRatioMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPlaneWidget *op = static_cast<vtkImplicitPlaneWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetDiagonalRatioMinValue() :
      op->vtkImplicitPlaneWidget::GetDiagonalRatioMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImplicitPlaneWidget_GetDiagonalRatioMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDiagonalRatioMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPlaneWidget *op = static_cast<vtkImplicitPlaneWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetDiagonalRatioMaxValue() :
      op->vtkImplicitPlaneWidget::GetDiagonalRatioMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImplicitPlaneWidget_GetDiagonalRatio(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDiagonalRatio");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPlaneWidget *op = static_cast<vtkImplicitPlaneWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetDiagonalRatio() :
      op->vtkImplicitPlaneWidget::GetDiagonalRatio());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImplicitPlaneWidget_GetPolyData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPolyData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPlaneWidget *op = static_cast<vtkImplicitPlaneWidget *>(vp);

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
      op->vtkImplicitPlaneWidget::GetPolyData(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImplicitPlaneWidget_GetPolyDataAlgorithm(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPolyDataAlgorithm");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPlaneWidget *op = static_cast<vtkImplicitPlaneWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPolyDataAlgorithm *tempr = (ap.IsBound() ?
      op->GetPolyDataAlgorithm() :
      op->vtkImplicitPlaneWidget::GetPolyDataAlgorithm());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImplicitPlaneWidget_GetPlane(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPlane");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPlaneWidget *op = static_cast<vtkImplicitPlaneWidget *>(vp);

  vtkPlane *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPlane"))
    {
    if (ap.IsBound())
      {
      op->GetPlane(temp0);
      }
    else
      {
      op->vtkImplicitPlaneWidget::GetPlane(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImplicitPlaneWidget_UpdatePlacement(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdatePlacement");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPlaneWidget *op = static_cast<vtkImplicitPlaneWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->UpdatePlacement();
      }
    else
      {
      op->vtkImplicitPlaneWidget::UpdatePlacement();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImplicitPlaneWidget_SizeHandles(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SizeHandles");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPlaneWidget *op = static_cast<vtkImplicitPlaneWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SizeHandles();
      }
    else
      {
      op->vtkImplicitPlaneWidget::SizeHandles();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImplicitPlaneWidget_GetNormalProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNormalProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPlaneWidget *op = static_cast<vtkImplicitPlaneWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetNormalProperty() :
      op->vtkImplicitPlaneWidget::GetNormalProperty());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImplicitPlaneWidget_GetSelectedNormalProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelectedNormalProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPlaneWidget *op = static_cast<vtkImplicitPlaneWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetSelectedNormalProperty() :
      op->vtkImplicitPlaneWidget::GetSelectedNormalProperty());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImplicitPlaneWidget_GetPlaneProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPlaneProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPlaneWidget *op = static_cast<vtkImplicitPlaneWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetPlaneProperty() :
      op->vtkImplicitPlaneWidget::GetPlaneProperty());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImplicitPlaneWidget_GetSelectedPlaneProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelectedPlaneProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPlaneWidget *op = static_cast<vtkImplicitPlaneWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetSelectedPlaneProperty() :
      op->vtkImplicitPlaneWidget::GetSelectedPlaneProperty());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImplicitPlaneWidget_GetOutlineProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutlineProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPlaneWidget *op = static_cast<vtkImplicitPlaneWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetOutlineProperty() :
      op->vtkImplicitPlaneWidget::GetOutlineProperty());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImplicitPlaneWidget_GetSelectedOutlineProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelectedOutlineProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPlaneWidget *op = static_cast<vtkImplicitPlaneWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetSelectedOutlineProperty() :
      op->vtkImplicitPlaneWidget::GetSelectedOutlineProperty());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImplicitPlaneWidget_GetEdgesProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEdgesProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPlaneWidget *op = static_cast<vtkImplicitPlaneWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetEdgesProperty() :
      op->vtkImplicitPlaneWidget::GetEdgesProperty());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkImplicitPlaneWidget_Methods[] = {
  {(char*)"GetClassName", PyvtkImplicitPlaneWidget_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkImplicitPlaneWidget_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkImplicitPlaneWidget_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkImplicitPlaneWidget\nC++: vtkImplicitPlaneWidget *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkImplicitPlaneWidget_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkImplicitPlaneWidget\nC++: vtkImplicitPlaneWidget *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetEnabled", PyvtkImplicitPlaneWidget_SetEnabled, METH_VARARGS,
   (char*)"V.SetEnabled(int)\nC++: virtual void SetEnabled(int)\n\nMethods that satisfy the superclass' API.\n"},
  {(char*)"PlaceWidget", PyvtkImplicitPlaneWidget_PlaceWidget, METH_VARARGS,
   (char*)"V.PlaceWidget([float, float, float, float, float, float])\nC++: virtual void PlaceWidget(double bounds[6])\nV.PlaceWidget()\nC++: void PlaceWidget()\nV.PlaceWidget(float, float, float, float, float, float)\nC++: void PlaceWidget(double xmin, double xmax, double ymin,\n    double ymax, double zmin, double zmax)\n\nMethods that satisfy the superclass' API.\n"},
  {(char*)"SetOrigin", PyvtkImplicitPlaneWidget_SetOrigin, METH_VARARGS,
   (char*)"V.SetOrigin(float, float, float)\nC++: virtual void SetOrigin(double x, double y, double z)\nV.SetOrigin([float, float, float])\nC++: virtual void SetOrigin(double x[3])\n\nGet the origin of the plane.\n"},
  {(char*)"GetOrigin", PyvtkImplicitPlaneWidget_GetOrigin, METH_VARARGS,
   (char*)"V.GetOrigin() -> (float, float, float)\nC++: double *GetOrigin()\nV.GetOrigin([float, float, float])\nC++: void GetOrigin(double xyz[3])\n\nGet the origin of the plane.\n"},
  {(char*)"SetNormal", PyvtkImplicitPlaneWidget_SetNormal, METH_VARARGS,
   (char*)"V.SetNormal(float, float, float)\nC++: void SetNormal(double x, double y, double z)\nV.SetNormal([float, float, float])\nC++: void SetNormal(double x[3])\n\nGet the normal to the plane.\n"},
  {(char*)"GetNormal", PyvtkImplicitPlaneWidget_GetNormal, METH_VARARGS,
   (char*)"V.GetNormal() -> (float, float, float)\nC++: double *GetNormal()\nV.GetNormal([float, float, float])\nC++: void GetNormal(double xyz[3])\n\nGet the normal to the plane.\n"},
  {(char*)"SetNormalToXAxis", PyvtkImplicitPlaneWidget_SetNormalToXAxis, METH_VARARGS,
   (char*)"V.SetNormalToXAxis(int)\nC++: void SetNormalToXAxis(int)\n\nForce the plane widget to be aligned with one of the x-y-z axes.\nIf one axis is set on, the other two will be set off. Remember\nthat when the state changes, a ModifiedEvent is invoked. This can\nbe used to snap the plane to the axes if it is originally not\naligned.\n"},
  {(char*)"GetNormalToXAxis", PyvtkImplicitPlaneWidget_GetNormalToXAxis, METH_VARARGS,
   (char*)"V.GetNormalToXAxis() -> int\nC++: int GetNormalToXAxis()\n\nForce the plane widget to be aligned with one of the x-y-z axes.\nIf one axis is set on, the other two will be set off. Remember\nthat when the state changes, a ModifiedEvent is invoked. This can\nbe used to snap the plane to the axes if it is originally not\naligned.\n"},
  {(char*)"NormalToXAxisOn", PyvtkImplicitPlaneWidget_NormalToXAxisOn, METH_VARARGS,
   (char*)"V.NormalToXAxisOn()\nC++: void NormalToXAxisOn()\n\nForce the plane widget to be aligned with one of the x-y-z axes.\nIf one axis is set on, the other two will be set off. Remember\nthat when the state changes, a ModifiedEvent is invoked. This can\nbe used to snap the plane to the axes if it is originally not\naligned.\n"},
  {(char*)"NormalToXAxisOff", PyvtkImplicitPlaneWidget_NormalToXAxisOff, METH_VARARGS,
   (char*)"V.NormalToXAxisOff()\nC++: void NormalToXAxisOff()\n\nForce the plane widget to be aligned with one of the x-y-z axes.\nIf one axis is set on, the other two will be set off. Remember\nthat when the state changes, a ModifiedEvent is invoked. This can\nbe used to snap the plane to the axes if it is originally not\naligned.\n"},
  {(char*)"SetNormalToYAxis", PyvtkImplicitPlaneWidget_SetNormalToYAxis, METH_VARARGS,
   (char*)"V.SetNormalToYAxis(int)\nC++: void SetNormalToYAxis(int)\n\nForce the plane widget to be aligned with one of the x-y-z axes.\nIf one axis is set on, the other two will be set off. Remember\nthat when the state changes, a ModifiedEvent is invoked. This can\nbe used to snap the plane to the axes if it is originally not\naligned.\n"},
  {(char*)"GetNormalToYAxis", PyvtkImplicitPlaneWidget_GetNormalToYAxis, METH_VARARGS,
   (char*)"V.GetNormalToYAxis() -> int\nC++: int GetNormalToYAxis()\n\nForce the plane widget to be aligned with one of the x-y-z axes.\nIf one axis is set on, the other two will be set off. Remember\nthat when the state changes, a ModifiedEvent is invoked. This can\nbe used to snap the plane to the axes if it is originally not\naligned.\n"},
  {(char*)"NormalToYAxisOn", PyvtkImplicitPlaneWidget_NormalToYAxisOn, METH_VARARGS,
   (char*)"V.NormalToYAxisOn()\nC++: void NormalToYAxisOn()\n\nForce the plane widget to be aligned with one of the x-y-z axes.\nIf one axis is set on, the other two will be set off. Remember\nthat when the state changes, a ModifiedEvent is invoked. This can\nbe used to snap the plane to the axes if it is originally not\naligned.\n"},
  {(char*)"NormalToYAxisOff", PyvtkImplicitPlaneWidget_NormalToYAxisOff, METH_VARARGS,
   (char*)"V.NormalToYAxisOff()\nC++: void NormalToYAxisOff()\n\nForce the plane widget to be aligned with one of the x-y-z axes.\nIf one axis is set on, the other two will be set off. Remember\nthat when the state changes, a ModifiedEvent is invoked. This can\nbe used to snap the plane to the axes if it is originally not\naligned.\n"},
  {(char*)"SetNormalToZAxis", PyvtkImplicitPlaneWidget_SetNormalToZAxis, METH_VARARGS,
   (char*)"V.SetNormalToZAxis(int)\nC++: void SetNormalToZAxis(int)\n\nForce the plane widget to be aligned with one of the x-y-z axes.\nIf one axis is set on, the other two will be set off. Remember\nthat when the state changes, a ModifiedEvent is invoked. This can\nbe used to snap the plane to the axes if it is originally not\naligned.\n"},
  {(char*)"GetNormalToZAxis", PyvtkImplicitPlaneWidget_GetNormalToZAxis, METH_VARARGS,
   (char*)"V.GetNormalToZAxis() -> int\nC++: int GetNormalToZAxis()\n\nForce the plane widget to be aligned with one of the x-y-z axes.\nIf one axis is set on, the other two will be set off. Remember\nthat when the state changes, a ModifiedEvent is invoked. This can\nbe used to snap the plane to the axes if it is originally not\naligned.\n"},
  {(char*)"NormalToZAxisOn", PyvtkImplicitPlaneWidget_NormalToZAxisOn, METH_VARARGS,
   (char*)"V.NormalToZAxisOn()\nC++: void NormalToZAxisOn()\n\nForce the plane widget to be aligned with one of the x-y-z axes.\nIf one axis is set on, the other two will be set off. Remember\nthat when the state changes, a ModifiedEvent is invoked. This can\nbe used to snap the plane to the axes if it is originally not\naligned.\n"},
  {(char*)"NormalToZAxisOff", PyvtkImplicitPlaneWidget_NormalToZAxisOff, METH_VARARGS,
   (char*)"V.NormalToZAxisOff()\nC++: void NormalToZAxisOff()\n\nForce the plane widget to be aligned with one of the x-y-z axes.\nIf one axis is set on, the other two will be set off. Remember\nthat when the state changes, a ModifiedEvent is invoked. This can\nbe used to snap the plane to the axes if it is originally not\naligned.\n"},
  {(char*)"SetTubing", PyvtkImplicitPlaneWidget_SetTubing, METH_VARARGS,
   (char*)"V.SetTubing(int)\nC++: void SetTubing(int a)\n\nTurn on/off tubing of the wire outline of the plane. The tube\nthickens the line by wrapping with a vtkTubeFilter.\n"},
  {(char*)"GetTubing", PyvtkImplicitPlaneWidget_GetTubing, METH_VARARGS,
   (char*)"V.GetTubing() -> int\nC++: int GetTubing()\n\nTurn on/off tubing of the wire outline of the plane. The tube\nthickens the line by wrapping with a vtkTubeFilter.\n"},
  {(char*)"TubingOn", PyvtkImplicitPlaneWidget_TubingOn, METH_VARARGS,
   (char*)"V.TubingOn()\nC++: void TubingOn()\n\nTurn on/off tubing of the wire outline of the plane. The tube\nthickens the line by wrapping with a vtkTubeFilter.\n"},
  {(char*)"TubingOff", PyvtkImplicitPlaneWidget_TubingOff, METH_VARARGS,
   (char*)"V.TubingOff()\nC++: void TubingOff()\n\nTurn on/off tubing of the wire outline of the plane. The tube\nthickens the line by wrapping with a vtkTubeFilter.\n"},
  {(char*)"SetDrawPlane", PyvtkImplicitPlaneWidget_SetDrawPlane, METH_VARARGS,
   (char*)"V.SetDrawPlane(int)\nC++: void SetDrawPlane(int plane)\n\nEnable/disable the drawing of the plane. In some cases the plane\ninterferes with the object that it is operating on (i.e., the\nplane interferes with the cut surface it produces producing\nz-buffer artifacts.)\n"},
  {(char*)"GetDrawPlane", PyvtkImplicitPlaneWidget_GetDrawPlane, METH_VARARGS,
   (char*)"V.GetDrawPlane() -> int\nC++: int GetDrawPlane()\n\nEnable/disable the drawing of the plane. In some cases the plane\ninterferes with the object that it is operating on (i.e., the\nplane interferes with the cut surface it produces producing\nz-buffer artifacts.)\n"},
  {(char*)"DrawPlaneOn", PyvtkImplicitPlaneWidget_DrawPlaneOn, METH_VARARGS,
   (char*)"V.DrawPlaneOn()\nC++: void DrawPlaneOn()\n\nEnable/disable the drawing of the plane. In some cases the plane\ninterferes with the object that it is operating on (i.e., the\nplane interferes with the cut surface it produces producing\nz-buffer artifacts.)\n"},
  {(char*)"DrawPlaneOff", PyvtkImplicitPlaneWidget_DrawPlaneOff, METH_VARARGS,
   (char*)"V.DrawPlaneOff()\nC++: void DrawPlaneOff()\n\nEnable/disable the drawing of the plane. In some cases the plane\ninterferes with the object that it is operating on (i.e., the\nplane interferes with the cut surface it produces producing\nz-buffer artifacts.)\n"},
  {(char*)"SetOutlineTranslation", PyvtkImplicitPlaneWidget_SetOutlineTranslation, METH_VARARGS,
   (char*)"V.SetOutlineTranslation(int)\nC++: void SetOutlineTranslation(int a)\n\nTurn on/off the ability to translate the bounding box by grabbing\nit with the left mouse button.\n"},
  {(char*)"GetOutlineTranslation", PyvtkImplicitPlaneWidget_GetOutlineTranslation, METH_VARARGS,
   (char*)"V.GetOutlineTranslation() -> int\nC++: int GetOutlineTranslation()\n\nTurn on/off the ability to translate the bounding box by grabbing\nit with the left mouse button.\n"},
  {(char*)"OutlineTranslationOn", PyvtkImplicitPlaneWidget_OutlineTranslationOn, METH_VARARGS,
   (char*)"V.OutlineTranslationOn()\nC++: void OutlineTranslationOn()\n\nTurn on/off the ability to translate the bounding box by grabbing\nit with the left mouse button.\n"},
  {(char*)"OutlineTranslationOff", PyvtkImplicitPlaneWidget_OutlineTranslationOff, METH_VARARGS,
   (char*)"V.OutlineTranslationOff()\nC++: void OutlineTranslationOff()\n\nTurn on/off the ability to translate the bounding box by grabbing\nit with the left mouse button.\n"},
  {(char*)"SetOutsideBounds", PyvtkImplicitPlaneWidget_SetOutsideBounds, METH_VARARGS,
   (char*)"V.SetOutsideBounds(int)\nC++: void SetOutsideBounds(int a)\n\nTurn on/off the ability to move the widget outside of the input's\nbound\n"},
  {(char*)"GetOutsideBounds", PyvtkImplicitPlaneWidget_GetOutsideBounds, METH_VARARGS,
   (char*)"V.GetOutsideBounds() -> int\nC++: int GetOutsideBounds()\n\nTurn on/off the ability to move the widget outside of the input's\nbound\n"},
  {(char*)"OutsideBoundsOn", PyvtkImplicitPlaneWidget_OutsideBoundsOn, METH_VARARGS,
   (char*)"V.OutsideBoundsOn()\nC++: void OutsideBoundsOn()\n\nTurn on/off the ability to move the widget outside of the input's\nbound\n"},
  {(char*)"OutsideBoundsOff", PyvtkImplicitPlaneWidget_OutsideBoundsOff, METH_VARARGS,
   (char*)"V.OutsideBoundsOff()\nC++: void OutsideBoundsOff()\n\nTurn on/off the ability to move the widget outside of the input's\nbound\n"},
  {(char*)"SetScaleEnabled", PyvtkImplicitPlaneWidget_SetScaleEnabled, METH_VARARGS,
   (char*)"V.SetScaleEnabled(int)\nC++: void SetScaleEnabled(int a)\n\nTurn on/off the ability to scale with the mouse\n"},
  {(char*)"GetScaleEnabled", PyvtkImplicitPlaneWidget_GetScaleEnabled, METH_VARARGS,
   (char*)"V.GetScaleEnabled() -> int\nC++: int GetScaleEnabled()\n\nTurn on/off the ability to scale with the mouse\n"},
  {(char*)"ScaleEnabledOn", PyvtkImplicitPlaneWidget_ScaleEnabledOn, METH_VARARGS,
   (char*)"V.ScaleEnabledOn()\nC++: void ScaleEnabledOn()\n\nTurn on/off the ability to scale with the mouse\n"},
  {(char*)"ScaleEnabledOff", PyvtkImplicitPlaneWidget_ScaleEnabledOff, METH_VARARGS,
   (char*)"V.ScaleEnabledOff()\nC++: void ScaleEnabledOff()\n\nTurn on/off the ability to scale with the mouse\n"},
  {(char*)"SetOriginTranslation", PyvtkImplicitPlaneWidget_SetOriginTranslation, METH_VARARGS,
   (char*)"V.SetOriginTranslation(int)\nC++: void SetOriginTranslation(int a)\n\nTurn on/off the ability to translate the origin (sphere) with the\nleft mouse button.\n"},
  {(char*)"GetOriginTranslation", PyvtkImplicitPlaneWidget_GetOriginTranslation, METH_VARARGS,
   (char*)"V.GetOriginTranslation() -> int\nC++: int GetOriginTranslation()\n\nTurn on/off the ability to translate the origin (sphere) with the\nleft mouse button.\n"},
  {(char*)"OriginTranslationOn", PyvtkImplicitPlaneWidget_OriginTranslationOn, METH_VARARGS,
   (char*)"V.OriginTranslationOn()\nC++: void OriginTranslationOn()\n\nTurn on/off the ability to translate the origin (sphere) with the\nleft mouse button.\n"},
  {(char*)"OriginTranslationOff", PyvtkImplicitPlaneWidget_OriginTranslationOff, METH_VARARGS,
   (char*)"V.OriginTranslationOff()\nC++: void OriginTranslationOff()\n\nTurn on/off the ability to translate the origin (sphere) with the\nleft mouse button.\n"},
  {(char*)"SetDiagonalRatio", PyvtkImplicitPlaneWidget_SetDiagonalRatio, METH_VARARGS,
   (char*)"V.SetDiagonalRatio(float)\nC++: void SetDiagonalRatio(double)\n\nBy default the arrow is 30% of the diagonal length. DiagonalRatio\ncontrol this ratio in the interval [0-2]\n"},
  {(char*)"GetDiagonalRatioMinValue", PyvtkImplicitPlaneWidget_GetDiagonalRatioMinValue, METH_VARARGS,
   (char*)"V.GetDiagonalRatioMinValue() -> float\nC++: double GetDiagonalRatioMinValue()\n\nBy default the arrow is 30% of the diagonal length. DiagonalRatio\ncontrol this ratio in the interval [0-2]\n"},
  {(char*)"GetDiagonalRatioMaxValue", PyvtkImplicitPlaneWidget_GetDiagonalRatioMaxValue, METH_VARARGS,
   (char*)"V.GetDiagonalRatioMaxValue() -> float\nC++: double GetDiagonalRatioMaxValue()\n\nBy default the arrow is 30% of the diagonal length. DiagonalRatio\ncontrol this ratio in the interval [0-2]\n"},
  {(char*)"GetDiagonalRatio", PyvtkImplicitPlaneWidget_GetDiagonalRatio, METH_VARARGS,
   (char*)"V.GetDiagonalRatio() -> float\nC++: double GetDiagonalRatio()\n\nBy default the arrow is 30% of the diagonal length. DiagonalRatio\ncontrol this ratio in the interval [0-2]\n"},
  {(char*)"GetPolyData", PyvtkImplicitPlaneWidget_GetPolyData, METH_VARARGS,
   (char*)"V.GetPolyData(vtkPolyData)\nC++: void GetPolyData(vtkPolyData *pd)\n\nGrab the polydata that defines the plane. The polydata contains a\nsingle polygon that is clipped by the bounding box.\n"},
  {(char*)"GetPolyDataAlgorithm", PyvtkImplicitPlaneWidget_GetPolyDataAlgorithm, METH_VARARGS,
   (char*)"V.GetPolyDataAlgorithm() -> vtkPolyDataAlgorithm\nC++: vtkPolyDataAlgorithm *GetPolyDataAlgorithm()\n\nSatisfies superclass API.  This returns a pointer to the\nunderlying PolyData (which represents the plane).\n"},
  {(char*)"GetPlane", PyvtkImplicitPlaneWidget_GetPlane, METH_VARARGS,
   (char*)"V.GetPlane(vtkPlane)\nC++: void GetPlane(vtkPlane *plane)\n\nGet the implicit function for the plane. The user must provide\nthe instance of the class vtkPlane. Note that vtkPlane is a\nsubclass of vtkImplicitFunction, meaning that it can be used by a\nvariety of filters to perform clipping, cutting, and selection of\ndata.\n"},
  {(char*)"UpdatePlacement", PyvtkImplicitPlaneWidget_UpdatePlacement, METH_VARARGS,
   (char*)"V.UpdatePlacement()\nC++: void UpdatePlacement()\n\nSatisfies the superclass API.  This will change the state of the\nwidget to match changes that have been made to the underlying\nPolyDataSource\n"},
  {(char*)"SizeHandles", PyvtkImplicitPlaneWidget_SizeHandles, METH_VARARGS,
   (char*)"V.SizeHandles()\nC++: virtual void SizeHandles()\n\nControl widget appearance\n"},
  {(char*)"GetNormalProperty", PyvtkImplicitPlaneWidget_GetNormalProperty, METH_VARARGS,
   (char*)"V.GetNormalProperty() -> vtkProperty\nC++: vtkProperty *GetNormalProperty()\n\nGet the properties on the normal (line and cone).\n"},
  {(char*)"GetSelectedNormalProperty", PyvtkImplicitPlaneWidget_GetSelectedNormalProperty, METH_VARARGS,
   (char*)"V.GetSelectedNormalProperty() -> vtkProperty\nC++: vtkProperty *GetSelectedNormalProperty()\n\nGet the properties on the normal (line and cone).\n"},
  {(char*)"GetPlaneProperty", PyvtkImplicitPlaneWidget_GetPlaneProperty, METH_VARARGS,
   (char*)"V.GetPlaneProperty() -> vtkProperty\nC++: vtkProperty *GetPlaneProperty()\n\nGet the plane properties. The properties of the plane when\nselected and unselected can be manipulated.\n"},
  {(char*)"GetSelectedPlaneProperty", PyvtkImplicitPlaneWidget_GetSelectedPlaneProperty, METH_VARARGS,
   (char*)"V.GetSelectedPlaneProperty() -> vtkProperty\nC++: vtkProperty *GetSelectedPlaneProperty()\n\nGet the plane properties. The properties of the plane when\nselected and unselected can be manipulated.\n"},
  {(char*)"GetOutlineProperty", PyvtkImplicitPlaneWidget_GetOutlineProperty, METH_VARARGS,
   (char*)"V.GetOutlineProperty() -> vtkProperty\nC++: vtkProperty *GetOutlineProperty()\n\nGet the property of the outline.\n"},
  {(char*)"GetSelectedOutlineProperty", PyvtkImplicitPlaneWidget_GetSelectedOutlineProperty, METH_VARARGS,
   (char*)"V.GetSelectedOutlineProperty() -> vtkProperty\nC++: vtkProperty *GetSelectedOutlineProperty()\n\nGet the property of the outline.\n"},
  {(char*)"GetEdgesProperty", PyvtkImplicitPlaneWidget_GetEdgesProperty, METH_VARARGS,
   (char*)"V.GetEdgesProperty() -> vtkProperty\nC++: vtkProperty *GetEdgesProperty()\n\nGet the property of the intersection edges. (This property also\napplies to the edges when tubed.)\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkImplicitPlaneWidget_StaticNew()
{
  return vtkImplicitPlaneWidget::New();
}

PyObject *PyVTKClass_vtkImplicitPlaneWidgetNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkImplicitPlaneWidget_StaticNew,
    PyvtkImplicitPlaneWidget_Methods,
    "vtkImplicitPlaneWidget", modulename,
    NULL, NULL,
    PyvtkImplicitPlaneWidget_Doc(),
    PyVTKClass_vtkPolyDataSourceWidgetNew(modulename));
  return cls;
}

const char **PyvtkImplicitPlaneWidget_Doc()
{
  static const char *docstring[] = {
    "vtkImplicitPlaneWidget - 3D widget for manipulating an infinite plane\n\n",
    "Superclass: vtkPolyDataSourceWidget\n\n",
    "This 3D widget defines an infinite plane that can be interactively\nplaced in a scene. The widget is represented by a plane with a normal\nvector; the plane is contained by a bounding box, and where the plane\nintersects the bounding box the edges are shown (possibly tubed). The\nnormal can be selected and moved to rotate the plane; the plane\nitself can be selected and translated in various directions",
    ". As the\nplane is moved, the implicit plane function and polygon (representing\nthe plane cut against the bounding box) is updated.\n\nTo use this object, just invoke SetInteractor() with the argument of\nthe method a vtkRenderWindowInteractor.  You may also wish to invoke\n\"PlaceWidget()\" to initially position the widget. If the \"i\" key (for\n\"interactor\") is pressed, the vtkImplicitPlaneWidget will ap",
    "pear.\n(See superclass documentation for information about changing this\nbehavior.) If you select the normal vector, the plane can be\narbitrarily rotated. The plane can be translated along the normal by\nselecting the plane and moving it. The plane (the plane origin) can\nalso be arbitrary moved by selecting the plane with the middle mouse\nbutton. The right mouse button can be used to uniformly scale",
    " the\nbounding box (moving \"up\" the box scales larger; moving \"down\" the\nbox scales smaller). Events that occur outside of the widget (i.e.,\nno part of the widget is picked) are propagated to any other\nregistered obsevers (such as the interaction style).  Turn off the\nwidget by pressing the \"i\" key again (or invoke the Off() method).\n\nThe vtkImplicitPlaneWidget has several methods that can be used ",
    "in\nconjunction with other VTK objects.  The GetPolyData() method can be\nused to get a polygonal representation (the single polygon clipped by\nthe bounding box).  Typical usage of the widget is to make use of the\nStartInteractionEvent, InteractionEvent, and EndInteractionEvent\nevents. The InteractionEvent is called on mouse motion; the other two\nevents are called on button down and button up (eithe",
    "r left or right\nbutton). (Note: there is also a PlaceWidgetEvent that is invoked when\nthe widget is placed with PlaceWidget().)\n\nSome additional features of this class include the ability to control\nthe properties of the widget. You do this by setting property values\non the normal vector (selected and unselected properties); the plane\n(selected and unselected properties); the outline (selected and",
    "\nunselected properties); and the edges. The edges may also be tubed or\nnot.\n\nSee Also:\n\nvtk3DWidget vtkBoxWidget vtkPlaneWidget vtkLineWidget vtkPointWidget\nvtkSphereWidget vtkImagePlaneWidget\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkImplicitPlaneWidget(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkImplicitPlaneWidgetNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkImplicitPlaneWidget", o) != 0)
    {
    Py_DECREF(o);
    }

}

