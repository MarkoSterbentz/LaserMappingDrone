// python wrapper for vtkChartLegend
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkVector.h"
#include "vtkRect.h"
#include "vtkContextMouseEvent.h"
#include "vtkChartLegend.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkChartLegend(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkChartLegendNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkContextItemNew
extern "C" { PyObject *PyVTKClass_vtkContextItemNew(const char *); }
#define DECLARED_PyVTKClass_vtkContextItemNew
#endif

static const char **PyvtkChartLegend_Doc();


static PyObject *
PyvtkChartLegend_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartLegend *op = static_cast<vtkChartLegend *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkChartLegend::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkChartLegend_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartLegend *op = static_cast<vtkChartLegend *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkChartLegend::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkChartLegend_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartLegend *op = static_cast<vtkChartLegend *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkChartLegend *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkChartLegend::NewInstance());

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
PyvtkChartLegend_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkChartLegend *tempr = vtkChartLegend::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkChartLegend_SetPoint_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartLegend *op = static_cast<vtkChartLegend *>(vp);

  float temp0;
  float temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetPoint(temp0, temp1);
      }
    else
      {
      op->vtkChartLegend::SetPoint(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkChartLegend_SetPoint_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartLegend *op = static_cast<vtkChartLegend *>(vp);

  float temp0[2];
  const int size0 = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetPoint(temp0);
      }
    else
      {
      op->vtkChartLegend::SetPoint(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkChartLegend_SetPoint_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartLegend *op = static_cast<vtkChartLegend *>(vp);

  vtkVector2f *temp0 = NULL;
  PyObject *pobj0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkVector2f"))
    {
    if (ap.IsBound())
      {
      op->SetPoint(*temp0);
      }
    else
      {
      op->vtkChartLegend::SetPoint(*temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkChartLegend_SetPoint_Methods[] = {
  {NULL, PyvtkChartLegend_SetPoint_s2, METH_VARARGS,
   (char*)"@O *f"},
  {NULL, PyvtkChartLegend_SetPoint_s3, METH_VARARGS,
   (char*)"@O &vtkVector2f"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkChartLegend_SetPoint(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkChartLegend_SetPoint_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkChartLegend_SetPoint_s1(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetPoint");
  return NULL;
}



static PyObject *
PyvtkChartLegend_GetPoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartLegend *op = static_cast<vtkChartLegend *>(vp);

  int sizer = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    float *tempr = (ap.IsBound() ?
      op->GetPoint() :
      op->vtkChartLegend::GetPoint());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkChartLegend_GetPointVector(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointVector");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartLegend *op = static_cast<vtkChartLegend *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const vtkVector2f *tempr = (ap.IsBound() ?
      &op->GetPointVector() :
      &op->vtkChartLegend::GetPointVector());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildSpecialObject(tempr, "vtkVector2f");
      }
    }

  return result;
}


static PyObject *
PyvtkChartLegend_SetHorizontalAlignment(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHorizontalAlignment");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartLegend *op = static_cast<vtkChartLegend *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetHorizontalAlignment(temp0);
      }
    else
      {
      op->vtkChartLegend::SetHorizontalAlignment(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkChartLegend_GetHorizontalAlignment(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHorizontalAlignment");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartLegend *op = static_cast<vtkChartLegend *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetHorizontalAlignment() :
      op->vtkChartLegend::GetHorizontalAlignment());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkChartLegend_SetVerticalAlignment(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVerticalAlignment");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartLegend *op = static_cast<vtkChartLegend *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetVerticalAlignment(temp0);
      }
    else
      {
      op->vtkChartLegend::SetVerticalAlignment(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkChartLegend_GetVerticalAlignment(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVerticalAlignment");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartLegend *op = static_cast<vtkChartLegend *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetVerticalAlignment() :
      op->vtkChartLegend::GetVerticalAlignment());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkChartLegend_SetPadding(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPadding");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartLegend *op = static_cast<vtkChartLegend *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetPadding(temp0);
      }
    else
      {
      op->vtkChartLegend::SetPadding(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkChartLegend_GetPadding(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPadding");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartLegend *op = static_cast<vtkChartLegend *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetPadding() :
      op->vtkChartLegend::GetPadding());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkChartLegend_SetSymbolWidth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSymbolWidth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartLegend *op = static_cast<vtkChartLegend *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetSymbolWidth(temp0);
      }
    else
      {
      op->vtkChartLegend::SetSymbolWidth(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkChartLegend_GetSymbolWidth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSymbolWidth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartLegend *op = static_cast<vtkChartLegend *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetSymbolWidth() :
      op->vtkChartLegend::GetSymbolWidth());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkChartLegend_SetLabelSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLabelSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartLegend *op = static_cast<vtkChartLegend *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetLabelSize(temp0);
      }
    else
      {
      op->vtkChartLegend::SetLabelSize(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkChartLegend_GetLabelSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLabelSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartLegend *op = static_cast<vtkChartLegend *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetLabelSize() :
      op->vtkChartLegend::GetLabelSize());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkChartLegend_SetInline(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInline");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartLegend *op = static_cast<vtkChartLegend *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetInline(temp0);
      }
    else
      {
      op->vtkChartLegend::SetInline(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkChartLegend_GetInline(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInline");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartLegend *op = static_cast<vtkChartLegend *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetInline() :
      op->vtkChartLegend::GetInline());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkChartLegend_SetDragEnabled(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDragEnabled");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartLegend *op = static_cast<vtkChartLegend *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetDragEnabled(temp0);
      }
    else
      {
      op->vtkChartLegend::SetDragEnabled(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkChartLegend_GetDragEnabled(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDragEnabled");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartLegend *op = static_cast<vtkChartLegend *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetDragEnabled() :
      op->vtkChartLegend::GetDragEnabled());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkChartLegend_SetChart(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetChart");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartLegend *op = static_cast<vtkChartLegend *>(vp);

  vtkChart *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkChart"))
    {
    if (ap.IsBound())
      {
      op->SetChart(temp0);
      }
    else
      {
      op->vtkChartLegend::SetChart(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkChartLegend_GetChart(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetChart");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartLegend *op = static_cast<vtkChartLegend *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkChart *tempr = (ap.IsBound() ?
      op->GetChart() :
      op->vtkChartLegend::GetChart());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkChartLegend_Update(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Update");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartLegend *op = static_cast<vtkChartLegend *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Update();
      }
    else
      {
      op->vtkChartLegend::Update();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkChartLegend_Paint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Paint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartLegend *op = static_cast<vtkChartLegend *>(vp);

  vtkContext2D *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkContext2D"))
    {
    bool tempr = (ap.IsBound() ?
      op->Paint(temp0) :
      op->vtkChartLegend::Paint(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkChartLegend_GetBoundingRect(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBoundingRect");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartLegend *op = static_cast<vtkChartLegend *>(vp);

  vtkContext2D *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkContext2D"))
    {
    vtkRectf tempr = (ap.IsBound() ?
      op->GetBoundingRect(temp0) :
      op->vtkChartLegend::GetBoundingRect(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildSpecialObject(&tempr, "vtkRectf");
      }
    }

  return result;
}


static PyObject *
PyvtkChartLegend_GetPen(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPen");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartLegend *op = static_cast<vtkChartLegend *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPen *tempr = (ap.IsBound() ?
      op->GetPen() :
      op->vtkChartLegend::GetPen());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkChartLegend_GetBrush(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBrush");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartLegend *op = static_cast<vtkChartLegend *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkBrush *tempr = (ap.IsBound() ?
      op->GetBrush() :
      op->vtkChartLegend::GetBrush());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkChartLegend_GetLabelProperties(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLabelProperties");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartLegend *op = static_cast<vtkChartLegend *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkTextProperty *tempr = (ap.IsBound() ?
      op->GetLabelProperties() :
      op->vtkChartLegend::GetLabelProperties());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkChartLegend_SetCacheBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCacheBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartLegend *op = static_cast<vtkChartLegend *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetCacheBounds(temp0);
      }
    else
      {
      op->vtkChartLegend::SetCacheBounds(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkChartLegend_GetCacheBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCacheBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartLegend *op = static_cast<vtkChartLegend *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetCacheBounds() :
      op->vtkChartLegend::GetCacheBounds());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkChartLegend_CacheBoundsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CacheBoundsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartLegend *op = static_cast<vtkChartLegend *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->CacheBoundsOn();
      }
    else
      {
      op->vtkChartLegend::CacheBoundsOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkChartLegend_CacheBoundsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CacheBoundsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartLegend *op = static_cast<vtkChartLegend *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->CacheBoundsOff();
      }
    else
      {
      op->vtkChartLegend::CacheBoundsOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkChartLegend_Methods[] = {
  {(char*)"GetClassName", PyvtkChartLegend_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkChartLegend_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkChartLegend_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkChartLegend\nC++: vtkChartLegend *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkChartLegend_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkChartLegend\nC++: vtkChartLegend *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetPoint", PyvtkChartLegend_SetPoint, METH_VARARGS,
   (char*)"V.SetPoint(float, float)\nC++: void SetPoint(float, float)\nV.SetPoint((float, float))\nC++: void SetPoint(float a[2])\nV.SetPoint(vtkVector2f)\nC++: void SetPoint(const vtkVector2f &point)\n\n"},
  {(char*)"GetPoint", PyvtkChartLegend_GetPoint, METH_VARARGS,
   (char*)"V.GetPoint() -> (float, float)\nC++: float *GetPoint()\n\n"},
  {(char*)"GetPointVector", PyvtkChartLegend_GetPointVector, METH_VARARGS,
   (char*)"V.GetPointVector() -> vtkVector2f\nC++: const vtkVector2f &GetPointVector()\n\nGet point the legend box is anchored to.\n"},
  {(char*)"SetHorizontalAlignment", PyvtkChartLegend_SetHorizontalAlignment, METH_VARARGS,
   (char*)"V.SetHorizontalAlignment(int)\nC++: void SetHorizontalAlignment(int a)\n\nSet the horizontal alignment of the legend to the point\nspecified. Valid values are LEFT, CENTER and RIGHT.\n"},
  {(char*)"GetHorizontalAlignment", PyvtkChartLegend_GetHorizontalAlignment, METH_VARARGS,
   (char*)"V.GetHorizontalAlignment() -> int\nC++: int GetHorizontalAlignment()\n\nGet the horizontal alignment of the legend to the point\nspecified.\n"},
  {(char*)"SetVerticalAlignment", PyvtkChartLegend_SetVerticalAlignment, METH_VARARGS,
   (char*)"V.SetVerticalAlignment(int)\nC++: void SetVerticalAlignment(int a)\n\nSet the vertical alignment of the legend to the point specified.\nValid values are TOP, CENTER and BOTTOM.\n"},
  {(char*)"GetVerticalAlignment", PyvtkChartLegend_GetVerticalAlignment, METH_VARARGS,
   (char*)"V.GetVerticalAlignment() -> int\nC++: int GetVerticalAlignment()\n\nGet the vertical alignment of the legend to the point specified.\n"},
  {(char*)"SetPadding", PyvtkChartLegend_SetPadding, METH_VARARGS,
   (char*)"V.SetPadding(int)\nC++: void SetPadding(int a)\n\nSet the padding between legend marks, default is 5.\n"},
  {(char*)"GetPadding", PyvtkChartLegend_GetPadding, METH_VARARGS,
   (char*)"V.GetPadding() -> int\nC++: int GetPadding()\n\nGet the padding between legend marks.\n"},
  {(char*)"SetSymbolWidth", PyvtkChartLegend_SetSymbolWidth, METH_VARARGS,
   (char*)"V.SetSymbolWidth(int)\nC++: void SetSymbolWidth(int a)\n\nSet the symbol width, default is 15.\n"},
  {(char*)"GetSymbolWidth", PyvtkChartLegend_GetSymbolWidth, METH_VARARGS,
   (char*)"V.GetSymbolWidth() -> int\nC++: int GetSymbolWidth()\n\nGet the legend symbol width.\n"},
  {(char*)"SetLabelSize", PyvtkChartLegend_SetLabelSize, METH_VARARGS,
   (char*)"V.SetLabelSize(int)\nC++: virtual void SetLabelSize(int size)\n\nSet the point size of the label text.\n"},
  {(char*)"GetLabelSize", PyvtkChartLegend_GetLabelSize, METH_VARARGS,
   (char*)"V.GetLabelSize() -> int\nC++: virtual int GetLabelSize()\n\nGet the point size of the label text.\n"},
  {(char*)"SetInline", PyvtkChartLegend_SetInline, METH_VARARGS,
   (char*)"V.SetInline(bool)\nC++: void SetInline(bool a)\n\nGet/set if the legend should be drawn inline (inside the chart),\nor not. True would generally request that the chart draws it\ninside the chart, false would adjust the chart axes and make\nspace to draw the axes outside.\n"},
  {(char*)"GetInline", PyvtkChartLegend_GetInline, METH_VARARGS,
   (char*)"V.GetInline() -> bool\nC++: bool GetInline()\n\nGet/set if the legend should be drawn inline (inside the chart),\nor not. True would generally request that the chart draws it\ninside the chart, false would adjust the chart axes and make\nspace to draw the axes outside.\n"},
  {(char*)"SetDragEnabled", PyvtkChartLegend_SetDragEnabled, METH_VARARGS,
   (char*)"V.SetDragEnabled(bool)\nC++: void SetDragEnabled(bool a)\n\nGet/set if the legend can be dragged with the mouse button, or\nnot. True results in left click and drag causing the legend to\nmove around the scene. False disables response to mouse events.\nThe default is true.\n"},
  {(char*)"GetDragEnabled", PyvtkChartLegend_GetDragEnabled, METH_VARARGS,
   (char*)"V.GetDragEnabled() -> bool\nC++: bool GetDragEnabled()\n\nGet/set if the legend can be dragged with the mouse button, or\nnot. True results in left click and drag causing the legend to\nmove around the scene. False disables response to mouse events.\nThe default is true.\n"},
  {(char*)"SetChart", PyvtkChartLegend_SetChart, METH_VARARGS,
   (char*)"V.SetChart(vtkChart)\nC++: void SetChart(vtkChart *chart)\n\nSet the chart that the legend belongs to and will draw the legend\nfor.\n"},
  {(char*)"GetChart", PyvtkChartLegend_GetChart, METH_VARARGS,
   (char*)"V.GetChart() -> vtkChart\nC++: vtkChart *GetChart()\n\nGet the chart that the legend belongs to and will draw the legend\nfor.\n"},
  {(char*)"Update", PyvtkChartLegend_Update, METH_VARARGS,
   (char*)"V.Update()\nC++: virtual void Update()\n\nUpdate the geometry of the axis. Takes care of setting up the\ntick mark locations etc. Should be called by the scene before\nrendering.\n"},
  {(char*)"Paint", PyvtkChartLegend_Paint, METH_VARARGS,
   (char*)"V.Paint(vtkContext2D) -> bool\nC++: virtual bool Paint(vtkContext2D *painter)\n\nPaint event for the axis, called whenever the axis needs to be\ndrawn.\n"},
  {(char*)"GetBoundingRect", PyvtkChartLegend_GetBoundingRect, METH_VARARGS,
   (char*)"V.GetBoundingRect(vtkContext2D) -> vtkRectf\nC++: virtual vtkRectf GetBoundingRect(vtkContext2D *painter)\n\nRequest the space the legend requires to be drawn. This is\nreturned as a vtkRect4f, with the corner being the offset from\nPoint, and the width/ height being the total width/height\nrequired by the axis. In order to ensure the numbers are correct,\nUpdate() should be called first.\n"},
  {(char*)"GetPen", PyvtkChartLegend_GetPen, METH_VARARGS,
   (char*)"V.GetPen() -> vtkPen\nC++: vtkPen *GetPen()\n\nGet the pen used to draw the legend outline.\n"},
  {(char*)"GetBrush", PyvtkChartLegend_GetBrush, METH_VARARGS,
   (char*)"V.GetBrush() -> vtkBrush\nC++: vtkBrush *GetBrush()\n\nGet the brush used to draw the legend background.\n"},
  {(char*)"GetLabelProperties", PyvtkChartLegend_GetLabelProperties, METH_VARARGS,
   (char*)"V.GetLabelProperties() -> vtkTextProperty\nC++: vtkTextProperty *GetLabelProperties()\n\nGet the vtkTextProperty for the legend's labels.\n"},
  {(char*)"SetCacheBounds", PyvtkChartLegend_SetCacheBounds, METH_VARARGS,
   (char*)"V.SetCacheBounds(bool)\nC++: void SetCacheBounds(bool a)\n\nToggle whether or not this legend should attempt to cache its\nposition and size.  The default value is true.  If this value is\nset to false, the legend will recalculate its position and bounds\nevery time it is drawn.  If users will be able to zoom in or out\non your legend, you may want to set this to false.  Otherwise,\nthe border around the legend may not resize appropriately.\n"},
  {(char*)"GetCacheBounds", PyvtkChartLegend_GetCacheBounds, METH_VARARGS,
   (char*)"V.GetCacheBounds() -> bool\nC++: bool GetCacheBounds()\n\nToggle whether or not this legend should attempt to cache its\nposition and size.  The default value is true.  If this value is\nset to false, the legend will recalculate its position and bounds\nevery time it is drawn.  If users will be able to zoom in or out\non your legend, you may want to set this to false.  Otherwise,\nthe border around the legend may not resize appropriately.\n"},
  {(char*)"CacheBoundsOn", PyvtkChartLegend_CacheBoundsOn, METH_VARARGS,
   (char*)"V.CacheBoundsOn()\nC++: void CacheBoundsOn()\n\nToggle whether or not this legend should attempt to cache its\nposition and size.  The default value is true.  If this value is\nset to false, the legend will recalculate its position and bounds\nevery time it is drawn.  If users will be able to zoom in or out\non your legend, you may want to set this to false.  Otherwise,\nthe border around the legend may not resize appropriately.\n"},
  {(char*)"CacheBoundsOff", PyvtkChartLegend_CacheBoundsOff, METH_VARARGS,
   (char*)"V.CacheBoundsOff()\nC++: void CacheBoundsOff()\n\nToggle whether or not this legend should attempt to cache its\nposition and size.  The default value is true.  If this value is\nset to false, the legend will recalculate its position and bounds\nevery time it is drawn.  If users will be able to zoom in or out\non your legend, you may want to set this to false.  Otherwise,\nthe border around the legend may not resize appropriately.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkChartLegend_StaticNew()
{
  return vtkChartLegend::New();
}

PyObject *PyVTKClass_vtkChartLegendNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkChartLegend_StaticNew,
    PyvtkChartLegend_Methods,
    "vtkChartLegend", modulename,
    NULL, NULL,
    PyvtkChartLegend_Doc(),
    PyVTKClass_vtkContextItemNew(modulename));

  if (cls)
    {
    PyObject *d = PyVTKClass_GetDict(cls);
    PyObject *o;

    for (int c = 0; c < 6; c++)
      {
      static const struct { const char *name; int value; }
        constants[6] = {
          { "LEFT", vtkChartLegend::LEFT },
          { "CENTER", vtkChartLegend::CENTER },
          { "RIGHT", vtkChartLegend::RIGHT },
          { "TOP", vtkChartLegend::TOP },
          { "BOTTOM", vtkChartLegend::BOTTOM },
          { "CUSTOM", vtkChartLegend::CUSTOM },
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

const char **PyvtkChartLegend_Doc()
{
  static const char *docstring[] = {
    "vtkChartLegend - draw the chart legend\n\n",
    "Superclass: vtkContextItem\n\n",
    "The vtkChartLegend is drawn in screen coordinates. It is usually one\nof the last elements of a chart to be drawn. It renders the the\nmark/line for each plot, and the plot labels.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkChartLegend(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkChartLegendNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkChartLegend", o) != 0)
    {
    Py_DECREF(o);
    }

}

