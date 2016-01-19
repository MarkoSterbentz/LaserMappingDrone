// python wrapper for vtkPVBagChartRepresentation
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkPVBagChartRepresentation.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkPVBagChartRepresentation(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkPVBagChartRepresentationNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkChartRepresentationNew
extern "C" { PyObject *PyVTKClass_vtkChartRepresentationNew(const char *); }
#define DECLARED_PyVTKClass_vtkChartRepresentationNew
#endif

static const char **PyvtkPVBagChartRepresentation_Doc();


static PyObject *
PyvtkPVBagChartRepresentation_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVBagChartRepresentation *op = static_cast<vtkPVBagChartRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkPVBagChartRepresentation::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVBagChartRepresentation_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVBagChartRepresentation *op = static_cast<vtkPVBagChartRepresentation *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPVBagChartRepresentation::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVBagChartRepresentation_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVBagChartRepresentation *op = static_cast<vtkPVBagChartRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPVBagChartRepresentation *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPVBagChartRepresentation::NewInstance());

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
PyvtkPVBagChartRepresentation_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkPVBagChartRepresentation *tempr = vtkPVBagChartRepresentation::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVBagChartRepresentation_SetVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVBagChartRepresentation *op = static_cast<vtkPVBagChartRepresentation *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetVisibility(temp0);
      }
    else
      {
      op->vtkPVBagChartRepresentation::SetVisibility(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVBagChartRepresentation_GetChart(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetChart");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVBagChartRepresentation *op = static_cast<vtkPVBagChartRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkChartXY *tempr = (ap.IsBound() ?
      op->GetChart() :
      op->vtkPVBagChartRepresentation::GetChart());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVBagChartRepresentation_SetLineThickness(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLineThickness");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVBagChartRepresentation *op = static_cast<vtkPVBagChartRepresentation *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetLineThickness(temp0);
      }
    else
      {
      op->vtkPVBagChartRepresentation::SetLineThickness(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVBagChartRepresentation_GetLineThickness(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLineThickness");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVBagChartRepresentation *op = static_cast<vtkPVBagChartRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetLineThickness() :
      op->vtkPVBagChartRepresentation::GetLineThickness());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVBagChartRepresentation_SetLineStyle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLineStyle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVBagChartRepresentation *op = static_cast<vtkPVBagChartRepresentation *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetLineStyle(temp0);
      }
    else
      {
      op->vtkPVBagChartRepresentation::SetLineStyle(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVBagChartRepresentation_GetLineStyle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLineStyle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVBagChartRepresentation *op = static_cast<vtkPVBagChartRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetLineStyle() :
      op->vtkPVBagChartRepresentation::GetLineStyle());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVBagChartRepresentation_SetLineColor_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLineColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVBagChartRepresentation *op = static_cast<vtkPVBagChartRepresentation *>(vp);

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
      op->SetLineColor(temp0, temp1, temp2);
      }
    else
      {
      op->vtkPVBagChartRepresentation::SetLineColor(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkPVBagChartRepresentation_SetLineColor_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLineColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVBagChartRepresentation *op = static_cast<vtkPVBagChartRepresentation *>(vp);

  double temp0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetLineColor(temp0);
      }
    else
      {
      op->vtkPVBagChartRepresentation::SetLineColor(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkPVBagChartRepresentation_SetLineColor(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkPVBagChartRepresentation_SetLineColor_s1(self, args);
    case 1:
      return PyvtkPVBagChartRepresentation_SetLineColor_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetLineColor");
  return NULL;
}



static PyObject *
PyvtkPVBagChartRepresentation_GetLineColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLineColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVBagChartRepresentation *op = static_cast<vtkPVBagChartRepresentation *>(vp);

  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetLineColor() :
      op->vtkPVBagChartRepresentation::GetLineColor());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkPVBagChartRepresentation_SetBagColor_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBagColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVBagChartRepresentation *op = static_cast<vtkPVBagChartRepresentation *>(vp);

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
      op->SetBagColor(temp0, temp1, temp2);
      }
    else
      {
      op->vtkPVBagChartRepresentation::SetBagColor(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkPVBagChartRepresentation_SetBagColor_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBagColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVBagChartRepresentation *op = static_cast<vtkPVBagChartRepresentation *>(vp);

  double temp0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetBagColor(temp0);
      }
    else
      {
      op->vtkPVBagChartRepresentation::SetBagColor(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkPVBagChartRepresentation_SetBagColor(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkPVBagChartRepresentation_SetBagColor_s1(self, args);
    case 1:
      return PyvtkPVBagChartRepresentation_SetBagColor_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetBagColor");
  return NULL;
}



static PyObject *
PyvtkPVBagChartRepresentation_GetBagColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBagColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVBagChartRepresentation *op = static_cast<vtkPVBagChartRepresentation *>(vp);

  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetBagColor() :
      op->vtkPVBagChartRepresentation::GetBagColor());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkPVBagChartRepresentation_SetOpacity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOpacity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVBagChartRepresentation *op = static_cast<vtkPVBagChartRepresentation *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetOpacity(temp0);
      }
    else
      {
      op->vtkPVBagChartRepresentation::SetOpacity(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVBagChartRepresentation_GetOpacity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOpacity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVBagChartRepresentation *op = static_cast<vtkPVBagChartRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetOpacity() :
      op->vtkPVBagChartRepresentation::GetOpacity());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVBagChartRepresentation_SetPointSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPointSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVBagChartRepresentation *op = static_cast<vtkPVBagChartRepresentation *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetPointSize(temp0);
      }
    else
      {
      op->vtkPVBagChartRepresentation::SetPointSize(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVBagChartRepresentation_GetPointSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVBagChartRepresentation *op = static_cast<vtkPVBagChartRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetPointSize() :
      op->vtkPVBagChartRepresentation::GetPointSize());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVBagChartRepresentation_SetPointColor_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPointColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVBagChartRepresentation *op = static_cast<vtkPVBagChartRepresentation *>(vp);

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
      op->SetPointColor(temp0, temp1, temp2);
      }
    else
      {
      op->vtkPVBagChartRepresentation::SetPointColor(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkPVBagChartRepresentation_SetPointColor_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPointColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVBagChartRepresentation *op = static_cast<vtkPVBagChartRepresentation *>(vp);

  double temp0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetPointColor(temp0);
      }
    else
      {
      op->vtkPVBagChartRepresentation::SetPointColor(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkPVBagChartRepresentation_SetPointColor(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkPVBagChartRepresentation_SetPointColor_s1(self, args);
    case 1:
      return PyvtkPVBagChartRepresentation_SetPointColor_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetPointColor");
  return NULL;
}



static PyObject *
PyvtkPVBagChartRepresentation_GetPointColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVBagChartRepresentation *op = static_cast<vtkPVBagChartRepresentation *>(vp);

  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetPointColor() :
      op->vtkPVBagChartRepresentation::GetPointColor());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkPVBagChartRepresentation_SetXAxisSeriesName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetXAxisSeriesName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVBagChartRepresentation *op = static_cast<vtkPVBagChartRepresentation *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetXAxisSeriesName(temp0);
      }
    else
      {
      op->vtkPVBagChartRepresentation::SetXAxisSeriesName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVBagChartRepresentation_GetXAxisSeriesName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetXAxisSeriesName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVBagChartRepresentation *op = static_cast<vtkPVBagChartRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetXAxisSeriesName() :
      op->vtkPVBagChartRepresentation::GetXAxisSeriesName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVBagChartRepresentation_SetUseIndexForXAxis(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseIndexForXAxis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVBagChartRepresentation *op = static_cast<vtkPVBagChartRepresentation *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetUseIndexForXAxis(temp0);
      }
    else
      {
      op->vtkPVBagChartRepresentation::SetUseIndexForXAxis(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVBagChartRepresentation_GetUseIndexForXAxis(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseIndexForXAxis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVBagChartRepresentation *op = static_cast<vtkPVBagChartRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetUseIndexForXAxis() :
      op->vtkPVBagChartRepresentation::GetUseIndexForXAxis());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVBagChartRepresentation_SetDensitySeriesName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDensitySeriesName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVBagChartRepresentation *op = static_cast<vtkPVBagChartRepresentation *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetDensitySeriesName(temp0);
      }
    else
      {
      op->vtkPVBagChartRepresentation::SetDensitySeriesName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVBagChartRepresentation_GetDensitySeriesName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDensitySeriesName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVBagChartRepresentation *op = static_cast<vtkPVBagChartRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetDensitySeriesName() :
      op->vtkPVBagChartRepresentation::GetDensitySeriesName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVBagChartRepresentation_SetYAxisSeriesName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetYAxisSeriesName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVBagChartRepresentation *op = static_cast<vtkPVBagChartRepresentation *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetYAxisSeriesName(temp0);
      }
    else
      {
      op->vtkPVBagChartRepresentation::SetYAxisSeriesName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVBagChartRepresentation_GetYAxisSeriesName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetYAxisSeriesName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVBagChartRepresentation *op = static_cast<vtkPVBagChartRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetYAxisSeriesName() :
      op->vtkPVBagChartRepresentation::GetYAxisSeriesName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkPVBagChartRepresentation_Methods[] = {
  {(char*)"GetClassName", PyvtkPVBagChartRepresentation_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkPVBagChartRepresentation_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkPVBagChartRepresentation_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkPVBagChartRepresentation\nC++: vtkPVBagChartRepresentation *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkPVBagChartRepresentation_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkPVBagChartRepresentation\nC++: vtkPVBagChartRepresentation *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetVisibility", PyvtkPVBagChartRepresentation_SetVisibility, METH_VARARGS,
   (char*)"V.SetVisibility(bool)\nC++: virtual void SetVisibility(bool visible)\n\nSet visibility of the representation.\n"},
  {(char*)"GetChart", PyvtkPVBagChartRepresentation_GetChart, METH_VARARGS,
   (char*)"V.GetChart() -> vtkChartXY\nC++: vtkChartXY *GetChart()\n\nProvides access to the underlying VTK representation.\n"},
  {(char*)"SetLineThickness", PyvtkPVBagChartRepresentation_SetLineThickness, METH_VARARGS,
   (char*)"V.SetLineThickness(int)\nC++: void SetLineThickness(int a)\n\nSet/get the line thickness for the plot.\n"},
  {(char*)"GetLineThickness", PyvtkPVBagChartRepresentation_GetLineThickness, METH_VARARGS,
   (char*)"V.GetLineThickness() -> int\nC++: int GetLineThickness()\n\nSet/get the line thickness for the plot.\n"},
  {(char*)"SetLineStyle", PyvtkPVBagChartRepresentation_SetLineStyle, METH_VARARGS,
   (char*)"V.SetLineStyle(int)\nC++: void SetLineStyle(int a)\n\nSet/get the line style for the plot.\n"},
  {(char*)"GetLineStyle", PyvtkPVBagChartRepresentation_GetLineStyle, METH_VARARGS,
   (char*)"V.GetLineStyle() -> int\nC++: int GetLineStyle()\n\nSet/get the line style for the plot.\n"},
  {(char*)"SetLineColor", PyvtkPVBagChartRepresentation_SetLineColor, METH_VARARGS,
   (char*)"V.SetLineColor(float, float, float)\nC++: void SetLineColor(double, double, double)\nV.SetLineColor((float, float, float))\nC++: void SetLineColor(double a[3])\n\n"},
  {(char*)"GetLineColor", PyvtkPVBagChartRepresentation_GetLineColor, METH_VARARGS,
   (char*)"V.GetLineColor() -> (float, float, float)\nC++: double *GetLineColor()\n\n"},
  {(char*)"SetBagColor", PyvtkPVBagChartRepresentation_SetBagColor, METH_VARARGS,
   (char*)"V.SetBagColor(float, float, float)\nC++: void SetBagColor(double, double, double)\nV.SetBagColor((float, float, float))\nC++: void SetBagColor(double a[3])\n\n"},
  {(char*)"GetBagColor", PyvtkPVBagChartRepresentation_GetBagColor, METH_VARARGS,
   (char*)"V.GetBagColor() -> (float, float, float)\nC++: double *GetBagColor()\n\n"},
  {(char*)"SetOpacity", PyvtkPVBagChartRepresentation_SetOpacity, METH_VARARGS,
   (char*)"V.SetOpacity(float)\nC++: void SetOpacity(double a)\n\nSet/get the opacity for the bag in the plot.\n"},
  {(char*)"GetOpacity", PyvtkPVBagChartRepresentation_GetOpacity, METH_VARARGS,
   (char*)"V.GetOpacity() -> float\nC++: double GetOpacity()\n\nSet/get the opacity for the bag in the plot.\n"},
  {(char*)"SetPointSize", PyvtkPVBagChartRepresentation_SetPointSize, METH_VARARGS,
   (char*)"V.SetPointSize(int)\nC++: void SetPointSize(int a)\n\nSet/get the point size in the plot.\n"},
  {(char*)"GetPointSize", PyvtkPVBagChartRepresentation_GetPointSize, METH_VARARGS,
   (char*)"V.GetPointSize() -> int\nC++: int GetPointSize()\n\nSet/get the point size in the plot.\n"},
  {(char*)"SetPointColor", PyvtkPVBagChartRepresentation_SetPointColor, METH_VARARGS,
   (char*)"V.SetPointColor(float, float, float)\nC++: void SetPointColor(double, double, double)\nV.SetPointColor((float, float, float))\nC++: void SetPointColor(double a[3])\n\n"},
  {(char*)"GetPointColor", PyvtkPVBagChartRepresentation_GetPointColor, METH_VARARGS,
   (char*)"V.GetPointColor() -> (float, float, float)\nC++: double *GetPointColor()\n\n"},
  {(char*)"SetXAxisSeriesName", PyvtkPVBagChartRepresentation_SetXAxisSeriesName, METH_VARARGS,
   (char*)"V.SetXAxisSeriesName(string)\nC++: void SetXAxisSeriesName(char *)\n\nSet/get the series to use as the X-axis.\n"},
  {(char*)"GetXAxisSeriesName", PyvtkPVBagChartRepresentation_GetXAxisSeriesName, METH_VARARGS,
   (char*)"V.GetXAxisSeriesName() -> string\nC++: char *GetXAxisSeriesName()\n\nSet/get the series to use as the X-axis.\n"},
  {(char*)"SetUseIndexForXAxis", PyvtkPVBagChartRepresentation_SetUseIndexForXAxis, METH_VARARGS,
   (char*)"V.SetUseIndexForXAxis(bool)\nC++: void SetUseIndexForXAxis(bool a)\n\nSet/get whether the index should be used for the x axis. When\ntrue, XSeriesName is ignored.\n"},
  {(char*)"GetUseIndexForXAxis", PyvtkPVBagChartRepresentation_GetUseIndexForXAxis, METH_VARARGS,
   (char*)"V.GetUseIndexForXAxis() -> bool\nC++: bool GetUseIndexForXAxis()\n\nSet/get whether the index should be used for the x axis. When\ntrue, XSeriesName is ignored.\n"},
  {(char*)"SetDensitySeriesName", PyvtkPVBagChartRepresentation_SetDensitySeriesName, METH_VARARGS,
   (char*)"V.SetDensitySeriesName(string)\nC++: void SetDensitySeriesName(char *)\n\nSet/get the series to use as the density\n"},
  {(char*)"GetDensitySeriesName", PyvtkPVBagChartRepresentation_GetDensitySeriesName, METH_VARARGS,
   (char*)"V.GetDensitySeriesName() -> string\nC++: char *GetDensitySeriesName()\n\nSet/get the series to use as the density\n"},
  {(char*)"SetYAxisSeriesName", PyvtkPVBagChartRepresentation_SetYAxisSeriesName, METH_VARARGS,
   (char*)"V.SetYAxisSeriesName(string)\nC++: void SetYAxisSeriesName(char *)\n\nSet/get the series to use as the Y-axis\n"},
  {(char*)"GetYAxisSeriesName", PyvtkPVBagChartRepresentation_GetYAxisSeriesName, METH_VARARGS,
   (char*)"V.GetYAxisSeriesName() -> string\nC++: char *GetYAxisSeriesName()\n\nSet/get the series to use as the Y-axis\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkPVBagChartRepresentation_StaticNew()
{
  return vtkPVBagChartRepresentation::New();
}

PyObject *PyVTKClass_vtkPVBagChartRepresentationNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkPVBagChartRepresentation_StaticNew,
    PyvtkPVBagChartRepresentation_Methods,
    "vtkPVBagChartRepresentation", modulename,
    NULL, NULL,
    PyvtkPVBagChartRepresentation_Doc(),
    PyVTKClass_vtkChartRepresentationNew(modulename));
  return cls;
}

const char **PyvtkPVBagChartRepresentation_Doc()
{
  static const char *docstring[] = {
    "vtkPVBagChartRepresentation\n\n",
    "Superclass: vtkChartRepresentation\n\n",
    "vtkPVagChartRepresentation is the vtkChartRepresentation subclass for\nbag plots representation. It exposes API from underlying vtkXYChart\nand vtkPlotBag.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPVBagChartRepresentation(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPVBagChartRepresentationNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPVBagChartRepresentation", o) != 0)
    {
    Py_DECREF(o);
    }

}

