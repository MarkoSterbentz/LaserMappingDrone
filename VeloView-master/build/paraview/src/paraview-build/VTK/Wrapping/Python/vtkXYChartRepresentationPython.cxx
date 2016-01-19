// python wrapper for vtkXYChartRepresentation
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkXYChartRepresentation.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkXYChartRepresentation(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkXYChartRepresentationNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkChartRepresentationNew
extern "C" { PyObject *PyVTKClass_vtkChartRepresentationNew(const char *); }
#define DECLARED_PyVTKClass_vtkChartRepresentationNew
#endif

static const char **PyvtkXYChartRepresentation_Doc();


static PyObject *
PyvtkXYChartRepresentation_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYChartRepresentation *op = static_cast<vtkXYChartRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkXYChartRepresentation::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXYChartRepresentation_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYChartRepresentation *op = static_cast<vtkXYChartRepresentation *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkXYChartRepresentation::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXYChartRepresentation_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYChartRepresentation *op = static_cast<vtkXYChartRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkXYChartRepresentation *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkXYChartRepresentation::NewInstance());

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
PyvtkXYChartRepresentation_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkXYChartRepresentation *tempr = vtkXYChartRepresentation::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXYChartRepresentation_SetVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYChartRepresentation *op = static_cast<vtkXYChartRepresentation *>(vp);

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
      op->vtkXYChartRepresentation::SetVisibility(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXYChartRepresentation_SetChartType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetChartType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYChartRepresentation *op = static_cast<vtkXYChartRepresentation *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetChartType(temp0);
      }
    else
      {
      op->vtkXYChartRepresentation::SetChartType(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXYChartRepresentation_GetChartType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetChartType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYChartRepresentation *op = static_cast<vtkXYChartRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetChartType() :
      op->vtkXYChartRepresentation::GetChartType());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXYChartRepresentation_SetChartTypeToLine(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetChartTypeToLine");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYChartRepresentation *op = static_cast<vtkXYChartRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetChartTypeToLine();
      }
    else
      {
      op->vtkXYChartRepresentation::SetChartTypeToLine();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXYChartRepresentation_SetChartTypeToPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetChartTypeToPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYChartRepresentation *op = static_cast<vtkXYChartRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetChartTypeToPoints();
      }
    else
      {
      op->vtkXYChartRepresentation::SetChartTypeToPoints();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXYChartRepresentation_SetChartTypeToBar(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetChartTypeToBar");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYChartRepresentation *op = static_cast<vtkXYChartRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetChartTypeToBar();
      }
    else
      {
      op->vtkXYChartRepresentation::SetChartTypeToBar();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXYChartRepresentation_SetChartTypeToStacked(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetChartTypeToStacked");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYChartRepresentation *op = static_cast<vtkXYChartRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetChartTypeToStacked();
      }
    else
      {
      op->vtkXYChartRepresentation::SetChartTypeToStacked();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXYChartRepresentation_SetChartTypeToBag(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetChartTypeToBag");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYChartRepresentation *op = static_cast<vtkXYChartRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetChartTypeToBag();
      }
    else
      {
      op->vtkXYChartRepresentation::SetChartTypeToBag();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXYChartRepresentation_SetChartTypeToFunctionalBag(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetChartTypeToFunctionalBag");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYChartRepresentation *op = static_cast<vtkXYChartRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetChartTypeToFunctionalBag();
      }
    else
      {
      op->vtkXYChartRepresentation::SetChartTypeToFunctionalBag();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXYChartRepresentation_GetChart(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetChart");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYChartRepresentation *op = static_cast<vtkXYChartRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkChartXY *tempr = (ap.IsBound() ?
      op->GetChart() :
      op->vtkXYChartRepresentation::GetChart());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXYChartRepresentation_SetXAxisSeriesName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetXAxisSeriesName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYChartRepresentation *op = static_cast<vtkXYChartRepresentation *>(vp);

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
      op->vtkXYChartRepresentation::SetXAxisSeriesName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXYChartRepresentation_GetXAxisSeriesName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetXAxisSeriesName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYChartRepresentation *op = static_cast<vtkXYChartRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetXAxisSeriesName() :
      op->vtkXYChartRepresentation::GetXAxisSeriesName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXYChartRepresentation_SetUseIndexForXAxis(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseIndexForXAxis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYChartRepresentation *op = static_cast<vtkXYChartRepresentation *>(vp);

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
      op->vtkXYChartRepresentation::SetUseIndexForXAxis(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXYChartRepresentation_GetUseIndexForXAxis(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseIndexForXAxis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYChartRepresentation *op = static_cast<vtkXYChartRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetUseIndexForXAxis() :
      op->vtkXYChartRepresentation::GetUseIndexForXAxis());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXYChartRepresentation_SetSeriesVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSeriesVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYChartRepresentation *op = static_cast<vtkXYChartRepresentation *>(vp);

  char *temp0 = NULL;
  bool temp1 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetSeriesVisibility(temp0, temp1);
      }
    else
      {
      op->vtkXYChartRepresentation::SetSeriesVisibility(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXYChartRepresentation_SetLineThickness(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLineThickness");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYChartRepresentation *op = static_cast<vtkXYChartRepresentation *>(vp);

  char *temp0 = NULL;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetLineThickness(temp0, temp1);
      }
    else
      {
      op->vtkXYChartRepresentation::SetLineThickness(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXYChartRepresentation_SetLineStyle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLineStyle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYChartRepresentation *op = static_cast<vtkXYChartRepresentation *>(vp);

  char *temp0 = NULL;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetLineStyle(temp0, temp1);
      }
    else
      {
      op->vtkXYChartRepresentation::SetLineStyle(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXYChartRepresentation_SetColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYChartRepresentation *op = static_cast<vtkXYChartRepresentation *>(vp);

  char *temp0 = NULL;
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
      op->SetColor(temp0, temp1, temp2, temp3);
      }
    else
      {
      op->vtkXYChartRepresentation::SetColor(temp0, temp1, temp2, temp3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXYChartRepresentation_SetAxisCorner(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAxisCorner");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYChartRepresentation *op = static_cast<vtkXYChartRepresentation *>(vp);

  char *temp0 = NULL;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetAxisCorner(temp0, temp1);
      }
    else
      {
      op->vtkXYChartRepresentation::SetAxisCorner(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXYChartRepresentation_SetMarkerStyle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMarkerStyle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYChartRepresentation *op = static_cast<vtkXYChartRepresentation *>(vp);

  char *temp0 = NULL;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetMarkerStyle(temp0, temp1);
      }
    else
      {
      op->vtkXYChartRepresentation::SetMarkerStyle(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXYChartRepresentation_SetLabel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLabel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYChartRepresentation *op = static_cast<vtkXYChartRepresentation *>(vp);

  char *temp0 = NULL;
  char *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetLabel(temp0, temp1);
      }
    else
      {
      op->vtkXYChartRepresentation::SetLabel(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXYChartRepresentation_SetUseColorMapping(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseColorMapping");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYChartRepresentation *op = static_cast<vtkXYChartRepresentation *>(vp);

  char *temp0 = NULL;
  bool temp1 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetUseColorMapping(temp0, temp1);
      }
    else
      {
      op->vtkXYChartRepresentation::SetUseColorMapping(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXYChartRepresentation_SetLookupTable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLookupTable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYChartRepresentation *op = static_cast<vtkXYChartRepresentation *>(vp);

  char *temp0 = NULL;
  vtkScalarsToColors *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkScalarsToColors"))
    {
    if (ap.IsBound())
      {
      op->SetLookupTable(temp0, temp1);
      }
    else
      {
      op->vtkXYChartRepresentation::SetLookupTable(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXYChartRepresentation_GetLabel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLabel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYChartRepresentation *op = static_cast<vtkXYChartRepresentation *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetLabel(temp0) :
      op->vtkXYChartRepresentation::GetLabel(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXYChartRepresentation_ClearSeriesVisibilities(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClearSeriesVisibilities");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYChartRepresentation *op = static_cast<vtkXYChartRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ClearSeriesVisibilities();
      }
    else
      {
      op->vtkXYChartRepresentation::ClearSeriesVisibilities();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXYChartRepresentation_ClearLineThicknesses(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClearLineThicknesses");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYChartRepresentation *op = static_cast<vtkXYChartRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ClearLineThicknesses();
      }
    else
      {
      op->vtkXYChartRepresentation::ClearLineThicknesses();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXYChartRepresentation_ClearLineStyles(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClearLineStyles");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYChartRepresentation *op = static_cast<vtkXYChartRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ClearLineStyles();
      }
    else
      {
      op->vtkXYChartRepresentation::ClearLineStyles();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXYChartRepresentation_ClearColors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClearColors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYChartRepresentation *op = static_cast<vtkXYChartRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ClearColors();
      }
    else
      {
      op->vtkXYChartRepresentation::ClearColors();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXYChartRepresentation_ClearAxisCorners(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClearAxisCorners");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYChartRepresentation *op = static_cast<vtkXYChartRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ClearAxisCorners();
      }
    else
      {
      op->vtkXYChartRepresentation::ClearAxisCorners();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXYChartRepresentation_ClearMarkerStyles(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClearMarkerStyles");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYChartRepresentation *op = static_cast<vtkXYChartRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ClearMarkerStyles();
      }
    else
      {
      op->vtkXYChartRepresentation::ClearMarkerStyles();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXYChartRepresentation_ClearLabels(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClearLabels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYChartRepresentation *op = static_cast<vtkXYChartRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ClearLabels();
      }
    else
      {
      op->vtkXYChartRepresentation::ClearLabels();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkXYChartRepresentation_Methods[] = {
  {(char*)"GetClassName", PyvtkXYChartRepresentation_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkXYChartRepresentation_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkXYChartRepresentation_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkXYChartRepresentation\nC++: vtkXYChartRepresentation *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkXYChartRepresentation_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkXYChartRepresentation\nC++: vtkXYChartRepresentation *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetVisibility", PyvtkXYChartRepresentation_SetVisibility, METH_VARARGS,
   (char*)"V.SetVisibility(bool)\nC++: virtual void SetVisibility(bool visible)\n\nSet visibility of the representation. Overridden to ensure that\ninternally added vtkPlot instances are updated when hiding the\nrepresentation.\n"},
  {(char*)"SetChartType", PyvtkXYChartRepresentation_SetChartType, METH_VARARGS,
   (char*)"V.SetChartType(int)\nC++: void SetChartType(int a)\n\nGet/Set the chart type, defaults to line chart. This must be set\nbefore this representation is updated. Valid values are\nvtkChart::LINE, vtkChart::POINTS, vtkChart::BAR, etc. Default is\nvtkChart::LINE.\n"},
  {(char*)"GetChartType", PyvtkXYChartRepresentation_GetChartType, METH_VARARGS,
   (char*)"V.GetChartType() -> int\nC++: int GetChartType()\n\nGet/Set the chart type, defaults to line chart. This must be set\nbefore this representation is updated. Valid values are\nvtkChart::LINE, vtkChart::POINTS, vtkChart::BAR, etc. Default is\nvtkChart::LINE.\n"},
  {(char*)"SetChartTypeToLine", PyvtkXYChartRepresentation_SetChartTypeToLine, METH_VARARGS,
   (char*)"V.SetChartTypeToLine()\nC++: void SetChartTypeToLine()\n\nGet/Set the chart type, defaults to line chart. This must be set\nbefore this representation is updated. Valid values are\nvtkChart::LINE, vtkChart::POINTS, vtkChart::BAR, etc. Default is\nvtkChart::LINE.\n"},
  {(char*)"SetChartTypeToPoints", PyvtkXYChartRepresentation_SetChartTypeToPoints, METH_VARARGS,
   (char*)"V.SetChartTypeToPoints()\nC++: void SetChartTypeToPoints()\n\nGet/Set the chart type, defaults to line chart. This must be set\nbefore this representation is updated. Valid values are\nvtkChart::LINE, vtkChart::POINTS, vtkChart::BAR, etc. Default is\nvtkChart::LINE.\n"},
  {(char*)"SetChartTypeToBar", PyvtkXYChartRepresentation_SetChartTypeToBar, METH_VARARGS,
   (char*)"V.SetChartTypeToBar()\nC++: void SetChartTypeToBar()\n\nGet/Set the chart type, defaults to line chart. This must be set\nbefore this representation is updated. Valid values are\nvtkChart::LINE, vtkChart::POINTS, vtkChart::BAR, etc. Default is\nvtkChart::LINE.\n"},
  {(char*)"SetChartTypeToStacked", PyvtkXYChartRepresentation_SetChartTypeToStacked, METH_VARARGS,
   (char*)"V.SetChartTypeToStacked()\nC++: void SetChartTypeToStacked()\n\nGet/Set the chart type, defaults to line chart. This must be set\nbefore this representation is updated. Valid values are\nvtkChart::LINE, vtkChart::POINTS, vtkChart::BAR, etc. Default is\nvtkChart::LINE.\n"},
  {(char*)"SetChartTypeToBag", PyvtkXYChartRepresentation_SetChartTypeToBag, METH_VARARGS,
   (char*)"V.SetChartTypeToBag()\nC++: void SetChartTypeToBag()\n\nGet/Set the chart type, defaults to line chart. This must be set\nbefore this representation is updated. Valid values are\nvtkChart::LINE, vtkChart::POINTS, vtkChart::BAR, etc. Default is\nvtkChart::LINE.\n"},
  {(char*)"SetChartTypeToFunctionalBag", PyvtkXYChartRepresentation_SetChartTypeToFunctionalBag, METH_VARARGS,
   (char*)"V.SetChartTypeToFunctionalBag()\nC++: void SetChartTypeToFunctionalBag()\n\nGet/Set the chart type, defaults to line chart. This must be set\nbefore this representation is updated. Valid values are\nvtkChart::LINE, vtkChart::POINTS, vtkChart::BAR, etc. Default is\nvtkChart::LINE.\n"},
  {(char*)"GetChart", PyvtkXYChartRepresentation_GetChart, METH_VARARGS,
   (char*)"V.GetChart() -> vtkChartXY\nC++: vtkChartXY *GetChart()\n\nReturns the vtkChartXY instance from the view to which this\nrepresentation is added. Thus this will return a non-null value\nonly when this representation is added to a view.\n"},
  {(char*)"SetXAxisSeriesName", PyvtkXYChartRepresentation_SetXAxisSeriesName, METH_VARARGS,
   (char*)"V.SetXAxisSeriesName(string)\nC++: void SetXAxisSeriesName(char *)\n\nSet the series to use as the X-axis.\n"},
  {(char*)"GetXAxisSeriesName", PyvtkXYChartRepresentation_GetXAxisSeriesName, METH_VARARGS,
   (char*)"V.GetXAxisSeriesName() -> string\nC++: char *GetXAxisSeriesName()\n\nSet the series to use as the X-axis.\n"},
  {(char*)"SetUseIndexForXAxis", PyvtkXYChartRepresentation_SetUseIndexForXAxis, METH_VARARGS,
   (char*)"V.SetUseIndexForXAxis(bool)\nC++: void SetUseIndexForXAxis(bool a)\n\nSet whether the index should be used for the x axis. When true,\nXSeriesName is ignored.\n"},
  {(char*)"GetUseIndexForXAxis", PyvtkXYChartRepresentation_GetUseIndexForXAxis, METH_VARARGS,
   (char*)"V.GetUseIndexForXAxis() -> bool\nC++: bool GetUseIndexForXAxis()\n\nSet whether the index should be used for the x axis. When true,\nXSeriesName is ignored.\n"},
  {(char*)"SetSeriesVisibility", PyvtkXYChartRepresentation_SetSeriesVisibility, METH_VARARGS,
   (char*)"V.SetSeriesVisibility(string, bool)\nC++: void SetSeriesVisibility(const char *seriesname,\n    bool visible)\n\nSet/Clear the properties for Y series/columns.\n"},
  {(char*)"SetLineThickness", PyvtkXYChartRepresentation_SetLineThickness, METH_VARARGS,
   (char*)"V.SetLineThickness(string, int)\nC++: void SetLineThickness(const char *name, int value)\n\nSet/Clear the properties for Y series/columns.\n"},
  {(char*)"SetLineStyle", PyvtkXYChartRepresentation_SetLineStyle, METH_VARARGS,
   (char*)"V.SetLineStyle(string, int)\nC++: void SetLineStyle(const char *name, int value)\n\nSet/Clear the properties for Y series/columns.\n"},
  {(char*)"SetColor", PyvtkXYChartRepresentation_SetColor, METH_VARARGS,
   (char*)"V.SetColor(string, float, float, float)\nC++: void SetColor(const char *name, double r, double g, double b)\n\nSet/Clear the properties for Y series/columns.\n"},
  {(char*)"SetAxisCorner", PyvtkXYChartRepresentation_SetAxisCorner, METH_VARARGS,
   (char*)"V.SetAxisCorner(string, int)\nC++: void SetAxisCorner(const char *name, int corner)\n\nSet/Clear the properties for Y series/columns.\n"},
  {(char*)"SetMarkerStyle", PyvtkXYChartRepresentation_SetMarkerStyle, METH_VARARGS,
   (char*)"V.SetMarkerStyle(string, int)\nC++: void SetMarkerStyle(const char *name, int style)\n\nSet/Clear the properties for Y series/columns.\n"},
  {(char*)"SetLabel", PyvtkXYChartRepresentation_SetLabel, METH_VARARGS,
   (char*)"V.SetLabel(string, string)\nC++: void SetLabel(const char *name, const char *label)\n\nSet/Clear the properties for Y series/columns.\n"},
  {(char*)"SetUseColorMapping", PyvtkXYChartRepresentation_SetUseColorMapping, METH_VARARGS,
   (char*)"V.SetUseColorMapping(string, bool)\nC++: void SetUseColorMapping(const char *name,\n    bool useColorMapping)\n\nSet/Clear the properties for Y series/columns.\n"},
  {(char*)"SetLookupTable", PyvtkXYChartRepresentation_SetLookupTable, METH_VARARGS,
   (char*)"V.SetLookupTable(string, vtkScalarsToColors)\nC++: void SetLookupTable(const char *name,\n    vtkScalarsToColors *lut)\n\nSet/Clear the properties for Y series/columns.\n"},
  {(char*)"GetLabel", PyvtkXYChartRepresentation_GetLabel, METH_VARARGS,
   (char*)"V.GetLabel(string) -> string\nC++: const char *GetLabel(const char *name)\n\nSet/Clear the properties for Y series/columns.\n"},
  {(char*)"ClearSeriesVisibilities", PyvtkXYChartRepresentation_ClearSeriesVisibilities, METH_VARARGS,
   (char*)"V.ClearSeriesVisibilities()\nC++: void ClearSeriesVisibilities()\n\n"},
  {(char*)"ClearLineThicknesses", PyvtkXYChartRepresentation_ClearLineThicknesses, METH_VARARGS,
   (char*)"V.ClearLineThicknesses()\nC++: void ClearLineThicknesses()\n\n"},
  {(char*)"ClearLineStyles", PyvtkXYChartRepresentation_ClearLineStyles, METH_VARARGS,
   (char*)"V.ClearLineStyles()\nC++: void ClearLineStyles()\n\n"},
  {(char*)"ClearColors", PyvtkXYChartRepresentation_ClearColors, METH_VARARGS,
   (char*)"V.ClearColors()\nC++: void ClearColors()\n\n"},
  {(char*)"ClearAxisCorners", PyvtkXYChartRepresentation_ClearAxisCorners, METH_VARARGS,
   (char*)"V.ClearAxisCorners()\nC++: void ClearAxisCorners()\n\n"},
  {(char*)"ClearMarkerStyles", PyvtkXYChartRepresentation_ClearMarkerStyles, METH_VARARGS,
   (char*)"V.ClearMarkerStyles()\nC++: void ClearMarkerStyles()\n\n"},
  {(char*)"ClearLabels", PyvtkXYChartRepresentation_ClearLabels, METH_VARARGS,
   (char*)"V.ClearLabels()\nC++: void ClearLabels()\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkXYChartRepresentation_StaticNew()
{
  return vtkXYChartRepresentation::New();
}

PyObject *PyVTKClass_vtkXYChartRepresentationNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkXYChartRepresentation_StaticNew,
    PyvtkXYChartRepresentation_Methods,
    "vtkXYChartRepresentation", modulename,
    NULL, NULL,
    PyvtkXYChartRepresentation_Doc(),
    PyVTKClass_vtkChartRepresentationNew(modulename));
  return cls;
}

const char **PyvtkXYChartRepresentation_Doc()
{
  static const char *docstring[] = {
    "vtkXYChartRepresentation\n\n",
    "Superclass: vtkChartRepresentation\n\n",
    "vtkXYChartRepresentation is representation that is used to add\nvtkPlot subclasses to a vtkChartXY instance e.g. adding vtkPlotBar to\ncreate a bar chart or vtkPlotLine to create a line chart. For every\nselected series (or column in a vtkTable), this class adds a new\nvtkPlot to the vtkChartXY. vtkXYChartRepresentation provides a union\nof APIs for changing the appearance of vtkPlot instances. Develop",
    "ers\nshould only expose the applicable API in the ServerManager XML.\n\nTo select which type of vtkPlot instances this class will use, you\nmust set the ChartType. Refer to vtkChartXY::AddPlot() for details on\nwhat the type must be.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkXYChartRepresentation(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkXYChartRepresentationNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkXYChartRepresentation", o) != 0)
    {
    Py_DECREF(o);
    }

}

