// python wrapper for vtkPlaneWidget
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkPlaneWidget.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkPlaneWidget(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkPlaneWidgetNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkPolyDataSourceWidgetNew
extern "C" { PyObject *PyVTKClass_vtkPolyDataSourceWidgetNew(const char *); }
#define DECLARED_PyVTKClass_vtkPolyDataSourceWidgetNew
#endif

static const char **PyvtkPlaneWidget_Doc();


static PyObject *
PyvtkPlaneWidget_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlaneWidget *op = static_cast<vtkPlaneWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkPlaneWidget::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPlaneWidget_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlaneWidget *op = static_cast<vtkPlaneWidget *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPlaneWidget::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPlaneWidget_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlaneWidget *op = static_cast<vtkPlaneWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPlaneWidget *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPlaneWidget::NewInstance());

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
PyvtkPlaneWidget_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkPlaneWidget *tempr = vtkPlaneWidget::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPlaneWidget_SetEnabled(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEnabled");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlaneWidget *op = static_cast<vtkPlaneWidget *>(vp);

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
      op->vtkPlaneWidget::SetEnabled(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPlaneWidget_PlaceWidget_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PlaceWidget");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlaneWidget *op = static_cast<vtkPlaneWidget *>(vp);

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
      op->vtkPlaneWidget::PlaceWidget(temp0);
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
PyvtkPlaneWidget_PlaceWidget_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PlaceWidget");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlaneWidget *op = static_cast<vtkPlaneWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->PlaceWidget();
      }
    else
      {
      op->vtkPlaneWidget::PlaceWidget();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkPlaneWidget_PlaceWidget_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PlaceWidget");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlaneWidget *op = static_cast<vtkPlaneWidget *>(vp);

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
      op->vtkPlaneWidget::PlaceWidget(temp0, temp1, temp2, temp3, temp4, temp5);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkPlaneWidget_PlaceWidget(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkPlaneWidget_PlaceWidget_s1(self, args);
    case 0:
      return PyvtkPlaneWidget_PlaceWidget_s2(self, args);
    case 6:
      return PyvtkPlaneWidget_PlaceWidget_s3(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "PlaceWidget");
  return NULL;
}



static PyObject *
PyvtkPlaneWidget_SetResolution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlaneWidget *op = static_cast<vtkPlaneWidget *>(vp);

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
      op->vtkPlaneWidget::SetResolution(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPlaneWidget_GetResolution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlaneWidget *op = static_cast<vtkPlaneWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetResolution() :
      op->vtkPlaneWidget::GetResolution());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPlaneWidget_SetOrigin_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlaneWidget *op = static_cast<vtkPlaneWidget *>(vp);

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
      op->vtkPlaneWidget::SetOrigin(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkPlaneWidget_SetOrigin_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlaneWidget *op = static_cast<vtkPlaneWidget *>(vp);

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
      op->vtkPlaneWidget::SetOrigin(temp0);
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
PyvtkPlaneWidget_SetOrigin(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkPlaneWidget_SetOrigin_s1(self, args);
    case 1:
      return PyvtkPlaneWidget_SetOrigin_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetOrigin");
  return NULL;
}



static PyObject *
PyvtkPlaneWidget_GetOrigin_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlaneWidget *op = static_cast<vtkPlaneWidget *>(vp);

  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetOrigin() :
      op->vtkPlaneWidget::GetOrigin());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}

static PyObject *
PyvtkPlaneWidget_GetOrigin_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlaneWidget *op = static_cast<vtkPlaneWidget *>(vp);

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
      op->vtkPlaneWidget::GetOrigin(temp0);
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
PyvtkPlaneWidget_GetOrigin(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 0:
      return PyvtkPlaneWidget_GetOrigin_s1(self, args);
    case 1:
      return PyvtkPlaneWidget_GetOrigin_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetOrigin");
  return NULL;
}



static PyObject *
PyvtkPlaneWidget_SetPoint1_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPoint1");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlaneWidget *op = static_cast<vtkPlaneWidget *>(vp);

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
      op->vtkPlaneWidget::SetPoint1(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkPlaneWidget_SetPoint1_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPoint1");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlaneWidget *op = static_cast<vtkPlaneWidget *>(vp);

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
      op->vtkPlaneWidget::SetPoint1(temp0);
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
PyvtkPlaneWidget_SetPoint1(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkPlaneWidget_SetPoint1_s1(self, args);
    case 1:
      return PyvtkPlaneWidget_SetPoint1_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetPoint1");
  return NULL;
}



static PyObject *
PyvtkPlaneWidget_GetPoint1_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPoint1");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlaneWidget *op = static_cast<vtkPlaneWidget *>(vp);

  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetPoint1() :
      op->vtkPlaneWidget::GetPoint1());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}

static PyObject *
PyvtkPlaneWidget_GetPoint1_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPoint1");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlaneWidget *op = static_cast<vtkPlaneWidget *>(vp);

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
      op->vtkPlaneWidget::GetPoint1(temp0);
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
PyvtkPlaneWidget_GetPoint1(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 0:
      return PyvtkPlaneWidget_GetPoint1_s1(self, args);
    case 1:
      return PyvtkPlaneWidget_GetPoint1_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetPoint1");
  return NULL;
}



static PyObject *
PyvtkPlaneWidget_SetPoint2_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPoint2");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlaneWidget *op = static_cast<vtkPlaneWidget *>(vp);

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
      op->vtkPlaneWidget::SetPoint2(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkPlaneWidget_SetPoint2_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPoint2");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlaneWidget *op = static_cast<vtkPlaneWidget *>(vp);

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
      op->vtkPlaneWidget::SetPoint2(temp0);
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
PyvtkPlaneWidget_SetPoint2(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkPlaneWidget_SetPoint2_s1(self, args);
    case 1:
      return PyvtkPlaneWidget_SetPoint2_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetPoint2");
  return NULL;
}



static PyObject *
PyvtkPlaneWidget_GetPoint2_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPoint2");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlaneWidget *op = static_cast<vtkPlaneWidget *>(vp);

  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetPoint2() :
      op->vtkPlaneWidget::GetPoint2());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}

static PyObject *
PyvtkPlaneWidget_GetPoint2_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPoint2");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlaneWidget *op = static_cast<vtkPlaneWidget *>(vp);

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
      op->vtkPlaneWidget::GetPoint2(temp0);
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
PyvtkPlaneWidget_GetPoint2(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 0:
      return PyvtkPlaneWidget_GetPoint2_s1(self, args);
    case 1:
      return PyvtkPlaneWidget_GetPoint2_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetPoint2");
  return NULL;
}



static PyObject *
PyvtkPlaneWidget_SetCenter_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCenter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlaneWidget *op = static_cast<vtkPlaneWidget *>(vp);

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
      op->vtkPlaneWidget::SetCenter(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkPlaneWidget_SetCenter_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCenter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlaneWidget *op = static_cast<vtkPlaneWidget *>(vp);

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
      op->vtkPlaneWidget::SetCenter(temp0);
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
PyvtkPlaneWidget_SetCenter(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkPlaneWidget_SetCenter_s1(self, args);
    case 1:
      return PyvtkPlaneWidget_SetCenter_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetCenter");
  return NULL;
}



static PyObject *
PyvtkPlaneWidget_GetCenter_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCenter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlaneWidget *op = static_cast<vtkPlaneWidget *>(vp);

  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetCenter() :
      op->vtkPlaneWidget::GetCenter());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}

static PyObject *
PyvtkPlaneWidget_GetCenter_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCenter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlaneWidget *op = static_cast<vtkPlaneWidget *>(vp);

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
      op->vtkPlaneWidget::GetCenter(temp0);
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
PyvtkPlaneWidget_GetCenter(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 0:
      return PyvtkPlaneWidget_GetCenter_s1(self, args);
    case 1:
      return PyvtkPlaneWidget_GetCenter_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetCenter");
  return NULL;
}



static PyObject *
PyvtkPlaneWidget_SetNormal_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNormal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlaneWidget *op = static_cast<vtkPlaneWidget *>(vp);

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
      op->vtkPlaneWidget::SetNormal(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkPlaneWidget_SetNormal_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNormal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlaneWidget *op = static_cast<vtkPlaneWidget *>(vp);

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
      op->vtkPlaneWidget::SetNormal(temp0);
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
PyvtkPlaneWidget_SetNormal(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkPlaneWidget_SetNormal_s1(self, args);
    case 1:
      return PyvtkPlaneWidget_SetNormal_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetNormal");
  return NULL;
}



static PyObject *
PyvtkPlaneWidget_GetNormal_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNormal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlaneWidget *op = static_cast<vtkPlaneWidget *>(vp);

  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetNormal() :
      op->vtkPlaneWidget::GetNormal());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}

static PyObject *
PyvtkPlaneWidget_GetNormal_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNormal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlaneWidget *op = static_cast<vtkPlaneWidget *>(vp);

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
      op->vtkPlaneWidget::GetNormal(temp0);
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
PyvtkPlaneWidget_GetNormal(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 0:
      return PyvtkPlaneWidget_GetNormal_s1(self, args);
    case 1:
      return PyvtkPlaneWidget_GetNormal_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetNormal");
  return NULL;
}



static PyObject *
PyvtkPlaneWidget_SetRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlaneWidget *op = static_cast<vtkPlaneWidget *>(vp);

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
      op->vtkPlaneWidget::SetRepresentation(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPlaneWidget_GetRepresentationMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRepresentationMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlaneWidget *op = static_cast<vtkPlaneWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetRepresentationMinValue() :
      op->vtkPlaneWidget::GetRepresentationMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPlaneWidget_GetRepresentationMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRepresentationMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlaneWidget *op = static_cast<vtkPlaneWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetRepresentationMaxValue() :
      op->vtkPlaneWidget::GetRepresentationMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPlaneWidget_GetRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlaneWidget *op = static_cast<vtkPlaneWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetRepresentation() :
      op->vtkPlaneWidget::GetRepresentation());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPlaneWidget_SetRepresentationToOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRepresentationToOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlaneWidget *op = static_cast<vtkPlaneWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetRepresentationToOff();
      }
    else
      {
      op->vtkPlaneWidget::SetRepresentationToOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPlaneWidget_SetRepresentationToOutline(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRepresentationToOutline");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlaneWidget *op = static_cast<vtkPlaneWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetRepresentationToOutline();
      }
    else
      {
      op->vtkPlaneWidget::SetRepresentationToOutline();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPlaneWidget_SetRepresentationToWireframe(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRepresentationToWireframe");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlaneWidget *op = static_cast<vtkPlaneWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetRepresentationToWireframe();
      }
    else
      {
      op->vtkPlaneWidget::SetRepresentationToWireframe();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPlaneWidget_SetRepresentationToSurface(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRepresentationToSurface");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlaneWidget *op = static_cast<vtkPlaneWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetRepresentationToSurface();
      }
    else
      {
      op->vtkPlaneWidget::SetRepresentationToSurface();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPlaneWidget_SetNormalToXAxis(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNormalToXAxis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlaneWidget *op = static_cast<vtkPlaneWidget *>(vp);

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
      op->vtkPlaneWidget::SetNormalToXAxis(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPlaneWidget_GetNormalToXAxis(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNormalToXAxis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlaneWidget *op = static_cast<vtkPlaneWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNormalToXAxis() :
      op->vtkPlaneWidget::GetNormalToXAxis());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPlaneWidget_NormalToXAxisOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NormalToXAxisOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlaneWidget *op = static_cast<vtkPlaneWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->NormalToXAxisOn();
      }
    else
      {
      op->vtkPlaneWidget::NormalToXAxisOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPlaneWidget_NormalToXAxisOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NormalToXAxisOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlaneWidget *op = static_cast<vtkPlaneWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->NormalToXAxisOff();
      }
    else
      {
      op->vtkPlaneWidget::NormalToXAxisOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPlaneWidget_SetNormalToYAxis(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNormalToYAxis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlaneWidget *op = static_cast<vtkPlaneWidget *>(vp);

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
      op->vtkPlaneWidget::SetNormalToYAxis(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPlaneWidget_GetNormalToYAxis(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNormalToYAxis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlaneWidget *op = static_cast<vtkPlaneWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNormalToYAxis() :
      op->vtkPlaneWidget::GetNormalToYAxis());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPlaneWidget_NormalToYAxisOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NormalToYAxisOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlaneWidget *op = static_cast<vtkPlaneWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->NormalToYAxisOn();
      }
    else
      {
      op->vtkPlaneWidget::NormalToYAxisOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPlaneWidget_NormalToYAxisOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NormalToYAxisOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlaneWidget *op = static_cast<vtkPlaneWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->NormalToYAxisOff();
      }
    else
      {
      op->vtkPlaneWidget::NormalToYAxisOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPlaneWidget_SetNormalToZAxis(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNormalToZAxis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlaneWidget *op = static_cast<vtkPlaneWidget *>(vp);

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
      op->vtkPlaneWidget::SetNormalToZAxis(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPlaneWidget_GetNormalToZAxis(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNormalToZAxis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlaneWidget *op = static_cast<vtkPlaneWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNormalToZAxis() :
      op->vtkPlaneWidget::GetNormalToZAxis());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPlaneWidget_NormalToZAxisOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NormalToZAxisOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlaneWidget *op = static_cast<vtkPlaneWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->NormalToZAxisOn();
      }
    else
      {
      op->vtkPlaneWidget::NormalToZAxisOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPlaneWidget_NormalToZAxisOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NormalToZAxisOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlaneWidget *op = static_cast<vtkPlaneWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->NormalToZAxisOff();
      }
    else
      {
      op->vtkPlaneWidget::NormalToZAxisOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPlaneWidget_GetPolyData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPolyData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlaneWidget *op = static_cast<vtkPlaneWidget *>(vp);

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
      op->vtkPlaneWidget::GetPolyData(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPlaneWidget_GetPlane(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPlane");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlaneWidget *op = static_cast<vtkPlaneWidget *>(vp);

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
      op->vtkPlaneWidget::GetPlane(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPlaneWidget_GetPolyDataAlgorithm(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPolyDataAlgorithm");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlaneWidget *op = static_cast<vtkPlaneWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPolyDataAlgorithm *tempr = (ap.IsBound() ?
      op->GetPolyDataAlgorithm() :
      op->vtkPlaneWidget::GetPolyDataAlgorithm());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPlaneWidget_UpdatePlacement(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdatePlacement");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlaneWidget *op = static_cast<vtkPlaneWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->UpdatePlacement();
      }
    else
      {
      op->vtkPlaneWidget::UpdatePlacement();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPlaneWidget_GetHandleProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHandleProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlaneWidget *op = static_cast<vtkPlaneWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetHandleProperty() :
      op->vtkPlaneWidget::GetHandleProperty());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPlaneWidget_GetSelectedHandleProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelectedHandleProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlaneWidget *op = static_cast<vtkPlaneWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetSelectedHandleProperty() :
      op->vtkPlaneWidget::GetSelectedHandleProperty());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPlaneWidget_SetPlaneProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPlaneProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlaneWidget *op = static_cast<vtkPlaneWidget *>(vp);

  vtkProperty *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkProperty"))
    {
    if (ap.IsBound())
      {
      op->SetPlaneProperty(temp0);
      }
    else
      {
      op->vtkPlaneWidget::SetPlaneProperty(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPlaneWidget_GetPlaneProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPlaneProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlaneWidget *op = static_cast<vtkPlaneWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetPlaneProperty() :
      op->vtkPlaneWidget::GetPlaneProperty());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPlaneWidget_GetSelectedPlaneProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelectedPlaneProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlaneWidget *op = static_cast<vtkPlaneWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetSelectedPlaneProperty() :
      op->vtkPlaneWidget::GetSelectedPlaneProperty());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkPlaneWidget_Methods[] = {
  {(char*)"GetClassName", PyvtkPlaneWidget_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkPlaneWidget_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkPlaneWidget_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkPlaneWidget\nC++: vtkPlaneWidget *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkPlaneWidget_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkPlaneWidget\nC++: vtkPlaneWidget *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetEnabled", PyvtkPlaneWidget_SetEnabled, METH_VARARGS,
   (char*)"V.SetEnabled(int)\nC++: virtual void SetEnabled(int)\n\nMethods that satisfy the superclass' API.\n"},
  {(char*)"PlaceWidget", PyvtkPlaneWidget_PlaceWidget, METH_VARARGS,
   (char*)"V.PlaceWidget([float, float, float, float, float, float])\nC++: virtual void PlaceWidget(double bounds[6])\nV.PlaceWidget()\nC++: void PlaceWidget()\nV.PlaceWidget(float, float, float, float, float, float)\nC++: void PlaceWidget(double xmin, double xmax, double ymin,\n    double ymax, double zmin, double zmax)\n\nMethods that satisfy the superclass' API.\n"},
  {(char*)"SetResolution", PyvtkPlaneWidget_SetResolution, METH_VARARGS,
   (char*)"V.SetResolution(int)\nC++: void SetResolution(int r)\n\nSet/Get the resolution (number of subdivisions) of the plane.\n"},
  {(char*)"GetResolution", PyvtkPlaneWidget_GetResolution, METH_VARARGS,
   (char*)"V.GetResolution() -> int\nC++: int GetResolution()\n\nSet/Get the resolution (number of subdivisions) of the plane.\n"},
  {(char*)"SetOrigin", PyvtkPlaneWidget_SetOrigin, METH_VARARGS,
   (char*)"V.SetOrigin(float, float, float)\nC++: void SetOrigin(double x, double y, double z)\nV.SetOrigin([float, float, float])\nC++: void SetOrigin(double x[3])\n\nSet/Get the origin of the plane.\n"},
  {(char*)"GetOrigin", PyvtkPlaneWidget_GetOrigin, METH_VARARGS,
   (char*)"V.GetOrigin() -> (float, float, float)\nC++: double *GetOrigin()\nV.GetOrigin([float, float, float])\nC++: void GetOrigin(double xyz[3])\n\nSet/Get the origin of the plane.\n"},
  {(char*)"SetPoint1", PyvtkPlaneWidget_SetPoint1, METH_VARARGS,
   (char*)"V.SetPoint1(float, float, float)\nC++: void SetPoint1(double x, double y, double z)\nV.SetPoint1([float, float, float])\nC++: void SetPoint1(double x[3])\n\nSet/Get the position of the point defining the first axis of the\nplane.\n"},
  {(char*)"GetPoint1", PyvtkPlaneWidget_GetPoint1, METH_VARARGS,
   (char*)"V.GetPoint1() -> (float, float, float)\nC++: double *GetPoint1()\nV.GetPoint1([float, float, float])\nC++: void GetPoint1(double xyz[3])\n\nSet/Get the position of the point defining the first axis of the\nplane.\n"},
  {(char*)"SetPoint2", PyvtkPlaneWidget_SetPoint2, METH_VARARGS,
   (char*)"V.SetPoint2(float, float, float)\nC++: void SetPoint2(double x, double y, double z)\nV.SetPoint2([float, float, float])\nC++: void SetPoint2(double x[3])\n\nSet/Get the position of the point defining the second axis of the\nplane.\n"},
  {(char*)"GetPoint2", PyvtkPlaneWidget_GetPoint2, METH_VARARGS,
   (char*)"V.GetPoint2() -> (float, float, float)\nC++: double *GetPoint2()\nV.GetPoint2([float, float, float])\nC++: void GetPoint2(double xyz[3])\n\nSet/Get the position of the point defining the second axis of the\nplane.\n"},
  {(char*)"SetCenter", PyvtkPlaneWidget_SetCenter, METH_VARARGS,
   (char*)"V.SetCenter(float, float, float)\nC++: void SetCenter(double x, double y, double z)\nV.SetCenter([float, float, float])\nC++: void SetCenter(double x[3])\n\nGet the center of the plane.\n"},
  {(char*)"GetCenter", PyvtkPlaneWidget_GetCenter, METH_VARARGS,
   (char*)"V.GetCenter() -> (float, float, float)\nC++: double *GetCenter()\nV.GetCenter([float, float, float])\nC++: void GetCenter(double xyz[3])\n\nGet the center of the plane.\n"},
  {(char*)"SetNormal", PyvtkPlaneWidget_SetNormal, METH_VARARGS,
   (char*)"V.SetNormal(float, float, float)\nC++: void SetNormal(double x, double y, double z)\nV.SetNormal([float, float, float])\nC++: void SetNormal(double x[3])\n\nGet the normal to the plane.\n"},
  {(char*)"GetNormal", PyvtkPlaneWidget_GetNormal, METH_VARARGS,
   (char*)"V.GetNormal() -> (float, float, float)\nC++: double *GetNormal()\nV.GetNormal([float, float, float])\nC++: void GetNormal(double xyz[3])\n\nGet the normal to the plane.\n"},
  {(char*)"SetRepresentation", PyvtkPlaneWidget_SetRepresentation, METH_VARARGS,
   (char*)"V.SetRepresentation(int)\nC++: void SetRepresentation(int)\n\nControl how the plane appears when GetPolyData() is invoked. If\nthe mode is \"outline\", then just the outline of the plane is\nshown. If the mode is \"wireframe\" then the plane is drawn with\nthe outline plus the interior mesh (corresponding to the\nresolution specified). If the mode is \"surface\" then the plane is\ndrawn as a surface.\n"},
  {(char*)"GetRepresentationMinValue", PyvtkPlaneWidget_GetRepresentationMinValue, METH_VARARGS,
   (char*)"V.GetRepresentationMinValue() -> int\nC++: int GetRepresentationMinValue()\n\nControl how the plane appears when GetPolyData() is invoked. If\nthe mode is \"outline\", then just the outline of the plane is\nshown. If the mode is \"wireframe\" then the plane is drawn with\nthe outline plus the interior mesh (corresponding to the\nresolution specified). If the mode is \"surface\" then the plane is\ndrawn as a surface.\n"},
  {(char*)"GetRepresentationMaxValue", PyvtkPlaneWidget_GetRepresentationMaxValue, METH_VARARGS,
   (char*)"V.GetRepresentationMaxValue() -> int\nC++: int GetRepresentationMaxValue()\n\nControl how the plane appears when GetPolyData() is invoked. If\nthe mode is \"outline\", then just the outline of the plane is\nshown. If the mode is \"wireframe\" then the plane is drawn with\nthe outline plus the interior mesh (corresponding to the\nresolution specified). If the mode is \"surface\" then the plane is\ndrawn as a surface.\n"},
  {(char*)"GetRepresentation", PyvtkPlaneWidget_GetRepresentation, METH_VARARGS,
   (char*)"V.GetRepresentation() -> int\nC++: int GetRepresentation()\n\nControl how the plane appears when GetPolyData() is invoked. If\nthe mode is \"outline\", then just the outline of the plane is\nshown. If the mode is \"wireframe\" then the plane is drawn with\nthe outline plus the interior mesh (corresponding to the\nresolution specified). If the mode is \"surface\" then the plane is\ndrawn as a surface.\n"},
  {(char*)"SetRepresentationToOff", PyvtkPlaneWidget_SetRepresentationToOff, METH_VARARGS,
   (char*)"V.SetRepresentationToOff()\nC++: void SetRepresentationToOff()\n\nControl how the plane appears when GetPolyData() is invoked. If\nthe mode is \"outline\", then just the outline of the plane is\nshown. If the mode is \"wireframe\" then the plane is drawn with\nthe outline plus the interior mesh (corresponding to the\nresolution specified). If the mode is \"surface\" then the plane is\ndrawn as a surface.\n"},
  {(char*)"SetRepresentationToOutline", PyvtkPlaneWidget_SetRepresentationToOutline, METH_VARARGS,
   (char*)"V.SetRepresentationToOutline()\nC++: void SetRepresentationToOutline()\n\nControl how the plane appears when GetPolyData() is invoked. If\nthe mode is \"outline\", then just the outline of the plane is\nshown. If the mode is \"wireframe\" then the plane is drawn with\nthe outline plus the interior mesh (corresponding to the\nresolution specified). If the mode is \"surface\" then the plane is\ndrawn as a surface.\n"},
  {(char*)"SetRepresentationToWireframe", PyvtkPlaneWidget_SetRepresentationToWireframe, METH_VARARGS,
   (char*)"V.SetRepresentationToWireframe()\nC++: void SetRepresentationToWireframe()\n\nControl how the plane appears when GetPolyData() is invoked. If\nthe mode is \"outline\", then just the outline of the plane is\nshown. If the mode is \"wireframe\" then the plane is drawn with\nthe outline plus the interior mesh (corresponding to the\nresolution specified). If the mode is \"surface\" then the plane is\ndrawn as a surface.\n"},
  {(char*)"SetRepresentationToSurface", PyvtkPlaneWidget_SetRepresentationToSurface, METH_VARARGS,
   (char*)"V.SetRepresentationToSurface()\nC++: void SetRepresentationToSurface()\n\nControl how the plane appears when GetPolyData() is invoked. If\nthe mode is \"outline\", then just the outline of the plane is\nshown. If the mode is \"wireframe\" then the plane is drawn with\nthe outline plus the interior mesh (corresponding to the\nresolution specified). If the mode is \"surface\" then the plane is\ndrawn as a surface.\n"},
  {(char*)"SetNormalToXAxis", PyvtkPlaneWidget_SetNormalToXAxis, METH_VARARGS,
   (char*)"V.SetNormalToXAxis(int)\nC++: void SetNormalToXAxis(int a)\n\nForce the plane widget to be aligned with one of the x-y-z axes.\nRemember that when the state changes, a ModifiedEvent is invoked.\nThis can be used to snap the plane to the axes if it is\noriginally not aligned.\n"},
  {(char*)"GetNormalToXAxis", PyvtkPlaneWidget_GetNormalToXAxis, METH_VARARGS,
   (char*)"V.GetNormalToXAxis() -> int\nC++: int GetNormalToXAxis()\n\nForce the plane widget to be aligned with one of the x-y-z axes.\nRemember that when the state changes, a ModifiedEvent is invoked.\nThis can be used to snap the plane to the axes if it is\noriginally not aligned.\n"},
  {(char*)"NormalToXAxisOn", PyvtkPlaneWidget_NormalToXAxisOn, METH_VARARGS,
   (char*)"V.NormalToXAxisOn()\nC++: void NormalToXAxisOn()\n\nForce the plane widget to be aligned with one of the x-y-z axes.\nRemember that when the state changes, a ModifiedEvent is invoked.\nThis can be used to snap the plane to the axes if it is\noriginally not aligned.\n"},
  {(char*)"NormalToXAxisOff", PyvtkPlaneWidget_NormalToXAxisOff, METH_VARARGS,
   (char*)"V.NormalToXAxisOff()\nC++: void NormalToXAxisOff()\n\nForce the plane widget to be aligned with one of the x-y-z axes.\nRemember that when the state changes, a ModifiedEvent is invoked.\nThis can be used to snap the plane to the axes if it is\noriginally not aligned.\n"},
  {(char*)"SetNormalToYAxis", PyvtkPlaneWidget_SetNormalToYAxis, METH_VARARGS,
   (char*)"V.SetNormalToYAxis(int)\nC++: void SetNormalToYAxis(int a)\n\nForce the plane widget to be aligned with one of the x-y-z axes.\nRemember that when the state changes, a ModifiedEvent is invoked.\nThis can be used to snap the plane to the axes if it is\noriginally not aligned.\n"},
  {(char*)"GetNormalToYAxis", PyvtkPlaneWidget_GetNormalToYAxis, METH_VARARGS,
   (char*)"V.GetNormalToYAxis() -> int\nC++: int GetNormalToYAxis()\n\nForce the plane widget to be aligned with one of the x-y-z axes.\nRemember that when the state changes, a ModifiedEvent is invoked.\nThis can be used to snap the plane to the axes if it is\noriginally not aligned.\n"},
  {(char*)"NormalToYAxisOn", PyvtkPlaneWidget_NormalToYAxisOn, METH_VARARGS,
   (char*)"V.NormalToYAxisOn()\nC++: void NormalToYAxisOn()\n\nForce the plane widget to be aligned with one of the x-y-z axes.\nRemember that when the state changes, a ModifiedEvent is invoked.\nThis can be used to snap the plane to the axes if it is\noriginally not aligned.\n"},
  {(char*)"NormalToYAxisOff", PyvtkPlaneWidget_NormalToYAxisOff, METH_VARARGS,
   (char*)"V.NormalToYAxisOff()\nC++: void NormalToYAxisOff()\n\nForce the plane widget to be aligned with one of the x-y-z axes.\nRemember that when the state changes, a ModifiedEvent is invoked.\nThis can be used to snap the plane to the axes if it is\noriginally not aligned.\n"},
  {(char*)"SetNormalToZAxis", PyvtkPlaneWidget_SetNormalToZAxis, METH_VARARGS,
   (char*)"V.SetNormalToZAxis(int)\nC++: void SetNormalToZAxis(int a)\n\nForce the plane widget to be aligned with one of the x-y-z axes.\nRemember that when the state changes, a ModifiedEvent is invoked.\nThis can be used to snap the plane to the axes if it is\noriginally not aligned.\n"},
  {(char*)"GetNormalToZAxis", PyvtkPlaneWidget_GetNormalToZAxis, METH_VARARGS,
   (char*)"V.GetNormalToZAxis() -> int\nC++: int GetNormalToZAxis()\n\nForce the plane widget to be aligned with one of the x-y-z axes.\nRemember that when the state changes, a ModifiedEvent is invoked.\nThis can be used to snap the plane to the axes if it is\noriginally not aligned.\n"},
  {(char*)"NormalToZAxisOn", PyvtkPlaneWidget_NormalToZAxisOn, METH_VARARGS,
   (char*)"V.NormalToZAxisOn()\nC++: void NormalToZAxisOn()\n\nForce the plane widget to be aligned with one of the x-y-z axes.\nRemember that when the state changes, a ModifiedEvent is invoked.\nThis can be used to snap the plane to the axes if it is\noriginally not aligned.\n"},
  {(char*)"NormalToZAxisOff", PyvtkPlaneWidget_NormalToZAxisOff, METH_VARARGS,
   (char*)"V.NormalToZAxisOff()\nC++: void NormalToZAxisOff()\n\nForce the plane widget to be aligned with one of the x-y-z axes.\nRemember that when the state changes, a ModifiedEvent is invoked.\nThis can be used to snap the plane to the axes if it is\noriginally not aligned.\n"},
  {(char*)"GetPolyData", PyvtkPlaneWidget_GetPolyData, METH_VARARGS,
   (char*)"V.GetPolyData(vtkPolyData)\nC++: void GetPolyData(vtkPolyData *pd)\n\nGrab the polydata (including points) that defines the plane.  The\npolydata consists of (res+1)*(res+1) points, and res*res\nquadrilateral polygons, where res is the resolution of the plane.\nThese point values are guaranteed to be up-to-date when either\nthe InteractionEvent or EndInteraction events are invoked. The\nuser provides the vtkPolyData and the points and polyplane are\nadded to it.\n"},
  {(char*)"GetPlane", PyvtkPlaneWidget_GetPlane, METH_VARARGS,
   (char*)"V.GetPlane(vtkPlane)\nC++: void GetPlane(vtkPlane *plane)\n\nGet the planes describing the implicit function defined by the\nplane widget. The user must provide the instance of the class\nvtkPlane. Note that vtkPlane is a subclass of\nvtkImplicitFunction, meaning that it can be used by a variety of\nfilters to perform clipping, cutting, and selection of data.\n"},
  {(char*)"GetPolyDataAlgorithm", PyvtkPlaneWidget_GetPolyDataAlgorithm, METH_VARARGS,
   (char*)"V.GetPolyDataAlgorithm() -> vtkPolyDataAlgorithm\nC++: vtkPolyDataAlgorithm *GetPolyDataAlgorithm()\n\nSatisfies superclass API.  This returns a pointer to the\nunderlying PolyData.  Make changes to this before calling the\ninitial PlaceWidget() to have the initial placement follow suit. \nOr, make changes after the widget has been initialised and call\nUpdatePlacement() to realise.\n"},
  {(char*)"UpdatePlacement", PyvtkPlaneWidget_UpdatePlacement, METH_VARARGS,
   (char*)"V.UpdatePlacement()\nC++: void UpdatePlacement(void)\n\nSatisfies superclass API.  This will change the state of the\nwidget to match changes that have been made to the underlying\nPolyDataSource\n"},
  {(char*)"GetHandleProperty", PyvtkPlaneWidget_GetHandleProperty, METH_VARARGS,
   (char*)"V.GetHandleProperty() -> vtkProperty\nC++: vtkProperty *GetHandleProperty()\n\nGet the handle properties (the little balls are the handles). The\nproperties of the handles when selected and normal can be\nmanipulated.\n"},
  {(char*)"GetSelectedHandleProperty", PyvtkPlaneWidget_GetSelectedHandleProperty, METH_VARARGS,
   (char*)"V.GetSelectedHandleProperty() -> vtkProperty\nC++: vtkProperty *GetSelectedHandleProperty()\n\nGet the handle properties (the little balls are the handles). The\nproperties of the handles when selected and normal can be\nmanipulated.\n"},
  {(char*)"SetPlaneProperty", PyvtkPlaneWidget_SetPlaneProperty, METH_VARARGS,
   (char*)"V.SetPlaneProperty(vtkProperty)\nC++: virtual void SetPlaneProperty(vtkProperty *)\n\nGet the plane properties. The properties of the plane when\nselected and unselected can be manipulated.\n"},
  {(char*)"GetPlaneProperty", PyvtkPlaneWidget_GetPlaneProperty, METH_VARARGS,
   (char*)"V.GetPlaneProperty() -> vtkProperty\nC++: vtkProperty *GetPlaneProperty()\n\nGet the plane properties. The properties of the plane when\nselected and unselected can be manipulated.\n"},
  {(char*)"GetSelectedPlaneProperty", PyvtkPlaneWidget_GetSelectedPlaneProperty, METH_VARARGS,
   (char*)"V.GetSelectedPlaneProperty() -> vtkProperty\nC++: vtkProperty *GetSelectedPlaneProperty()\n\nGet the plane properties. The properties of the plane when\nselected and unselected can be manipulated.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkPlaneWidget_StaticNew()
{
  return vtkPlaneWidget::New();
}

PyObject *PyVTKClass_vtkPlaneWidgetNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkPlaneWidget_StaticNew,
    PyvtkPlaneWidget_Methods,
    "vtkPlaneWidget", modulename,
    NULL, NULL,
    PyvtkPlaneWidget_Doc(),
    PyVTKClass_vtkPolyDataSourceWidgetNew(modulename));
  return cls;
}

const char **PyvtkPlaneWidget_Doc()
{
  static const char *docstring[] = {
    "vtkPlaneWidget - 3D widget for manipulating a finite plane\n\n",
    "Superclass: vtkPolyDataSourceWidget\n\n",
    "This 3D widget defines a finite (bounded) plane that can be\ninteractively placed in a scene. The plane has four handles (at its\ncorner vertices), a normal vector, and the plane itself. The handles\nare used to resize the plane; the normal vector to rotate it, and the\nplane can be picked and translated. Selecting the plane while\npressing CTRL makes it spin around the normal. A nice feature of the\nob",
    "ject is that the vtkPlaneWidget, like any 3D widget, will work with\nthe current interactor style. That is, if vtkPlaneWidget does not\nhandle an event, then all other registered observers (including the\ninteractor style) have an opportunity to process the event.\nOtherwise, the vtkPlaneWidget will terminate the processing of the\nevent that it handles.\n\nTo use this object, just invoke SetInteractor()",
    " with the argument of\nthe method a vtkRenderWindowInteractor.  You may also wish to invoke\n\"PlaceWidget()\" to initially position the widget. If the \"i\" key (for\n\"interactor\") is pressed, the vtkPlaneWidget will appear. (See\nsuperclass documentation for information about changing this\nbehavior.) By grabbing the one of the four handles (use the left\nmouse button), the plane can be resized.  By grabb",
    "ing the plane\nitself, the entire plane can be arbitrarily translated. Pressing CTRL\nwhile grabbing the plane will spin the plane around the normal. If\nyou select the normal vector, the plane can be arbitrarily rotated.\nSelecting any part of the widget with the middle mouse button enables\ntranslation of the plane along its normal. (Once selected using\nmiddle mouse, moving the mouse in the direction",
    " of the normal\ntranslates the plane in the direction of the normal; moving in the\ndirection opposite the normal translates the plane in the direction\nopposite the normal.) Scaling (about the center of the plane) is\nachieved by using the right mouse button. By moving the mouse \"up\"\nthe render window the plane will be made bigger; by moving \"down\" the\nrender window the widget will be made smaller. E",
    "vents that occur\noutside of the widget (i.e., no part of the widget is picked) are\npropagated to any other registered obsevers (such as the interaction\nstyle).  Turn off the widget by pressing the \"i\" key again (or invoke\nthe Off() method).\n\nThe vtkPlaneWidget has several methods that can be used in\nconjunction with other VTK objects. The Set/GetResolution() methods\ncontrol the number of subdivisi",
    "ons of the plane; the GetPolyData()\nmethod can be used to get the polygonal representation and can be\nused for things like seeding stream lines. GetPlane() can be used to\nupdate a vtkPlane implicit function. Typical usage of the widget is\nto make use of the StartInteractionEvent, InteractionEvent, and\nEndInteractionEvent events. The InteractionEvent is called on mouse\nmotion; the other two events ",
    "are called on button down and button up\n(either left or right button).\n\nSome additional features of this class include the ability to control\nthe properties of the widget. You can set the properties of the\nselected and unselected representations of the plane. For example,\nyou can set the property for the handles and plane. In addition there\nare methods to constrain the plane so that it is perpendi",
    "cular to the\nx-y-z axes.\n\nSee Also:\n\nvtk3DWidget vtkBoxWidget vtkLineWidget vtkSphereWidget\nvtkImplicitPlaneWidget\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPlaneWidget(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPlaneWidgetNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPlaneWidget", o) != 0)
    {
    Py_DECREF(o);
    }

  for (int c = 0; c < 4; c++)
    {
    static const struct { const char *name; int value; }
      constants[4] = {
        { "VTK_PLANE_OFF", 0 },
        { "VTK_PLANE_OUTLINE", 1 },
        { "VTK_PLANE_WIREFRAME", 2 },
        { "VTK_PLANE_SURFACE", 3 },
      };

    o = PyInt_FromLong(constants[c].value);
    if (o)
      {
      PyDict_SetItemString(dict, (char *)constants[c].name, o);
      Py_DECREF(o);
      }
    }

}

