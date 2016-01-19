// python wrapper for vtkPlot
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkRect.h"
#include "vtkStdString.h"
#include "vtkVector.h"
#include "vtkVector.h"
#include "vtkContextPolygon.h"
#include "vtkRect.h"
#include "vtkVariant.h"
#include "vtkPlot.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkPlot(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkPlotNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkContextItemNew
extern "C" { PyObject *PyVTKClass_vtkContextItemNew(const char *); }
#define DECLARED_PyVTKClass_vtkContextItemNew
#endif

static const char **PyvtkPlot_Doc();


static PyObject *
PyvtkPlot_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlot *op = static_cast<vtkPlot *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkPlot::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPlot_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlot *op = static_cast<vtkPlot *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPlot::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPlot_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlot *op = static_cast<vtkPlot *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPlot *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPlot::NewInstance());

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
PyvtkPlot_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkPlot *tempr = vtkPlot::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPlot_PaintLegend(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PaintLegend");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlot *op = static_cast<vtkPlot *>(vp);

  vtkContext2D *temp0 = NULL;
  vtkRectf *temp1 = NULL;
  PyObject *pobj1 = NULL;
  int temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkContext2D") &&
      ap.GetSpecialObject(temp1, pobj1, "vtkRectf") &&
      ap.GetValue(temp2))
    {
    bool tempr = (ap.IsBound() ?
      op->PaintLegend(temp0, *temp1, temp2) :
      op->vtkPlot::PaintLegend(temp0, *temp1, temp2));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  Py_XDECREF(pobj1);

  return result;
}


static PyObject *
PyvtkPlot_SetTooltipLabelFormat(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTooltipLabelFormat");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlot *op = static_cast<vtkPlot *>(vp);

  vtkStdString temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetTooltipLabelFormat(temp0);
      }
    else
      {
      op->vtkPlot::SetTooltipLabelFormat(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPlot_GetTooltipLabelFormat(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTooltipLabelFormat");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlot *op = static_cast<vtkPlot *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkStdString tempr = (ap.IsBound() ?
      op->GetTooltipLabelFormat() :
      op->vtkPlot::GetTooltipLabelFormat());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPlot_SetTooltipNotation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTooltipNotation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlot *op = static_cast<vtkPlot *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetTooltipNotation(temp0);
      }
    else
      {
      op->vtkPlot::SetTooltipNotation(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPlot_GetTooltipNotation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTooltipNotation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlot *op = static_cast<vtkPlot *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetTooltipNotation() :
      op->vtkPlot::GetTooltipNotation());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPlot_SetTooltipPrecision(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTooltipPrecision");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlot *op = static_cast<vtkPlot *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetTooltipPrecision(temp0);
      }
    else
      {
      op->vtkPlot::SetTooltipPrecision(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPlot_GetTooltipPrecision(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTooltipPrecision");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlot *op = static_cast<vtkPlot *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetTooltipPrecision() :
      op->vtkPlot::GetTooltipPrecision());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPlot_GetTooltipLabel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTooltipLabel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlot *op = static_cast<vtkPlot *>(vp);

  vtkVector2d *temp0 = NULL;
  PyObject *pobj0 = NULL;
  vtkIdType temp1;
  vtkIdType temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkVector2d") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    vtkStdString tempr = (ap.IsBound() ?
      op->GetTooltipLabel(*temp0, temp1, temp2) :
      op->vtkPlot::GetTooltipLabel(*temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  Py_XDECREF(pobj0);

  return result;
}


static PyObject *
PyvtkPlot_SelectPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SelectPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlot *op = static_cast<vtkPlot *>(vp);

  vtkVector2f *temp0 = NULL;
  PyObject *pobj0 = NULL;
  vtkVector2f *temp1 = NULL;
  PyObject *pobj1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkVector2f") &&
      ap.GetSpecialObject(temp1, pobj1, "vtkVector2f"))
    {
    bool tempr = (ap.IsBound() ?
      op->SelectPoints(*temp0, *temp1) :
      op->vtkPlot::SelectPoints(*temp0, *temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  Py_XDECREF(pobj0);
  Py_XDECREF(pobj1);

  return result;
}


static PyObject *
PyvtkPlot_SelectPointsInPolygon(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SelectPointsInPolygon");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlot *op = static_cast<vtkPlot *>(vp);

  vtkContextPolygon *temp0 = NULL;
  PyObject *pobj0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkContextPolygon"))
    {
    bool tempr = (ap.IsBound() ?
      op->SelectPointsInPolygon(*temp0) :
      op->vtkPlot::SelectPointsInPolygon(*temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  Py_XDECREF(pobj0);

  return result;
}


static PyObject *
PyvtkPlot_SetColor_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlot *op = static_cast<vtkPlot *>(vp);

  unsigned char temp0;
  unsigned char temp1;
  unsigned char temp2;
  unsigned char temp3;
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
      op->vtkPlot::SetColor(temp0, temp1, temp2, temp3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkPlot_SetColor_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlot *op = static_cast<vtkPlot *>(vp);

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
      op->SetColor(temp0, temp1, temp2);
      }
    else
      {
      op->vtkPlot::SetColor(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkPlot_SetColor(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 4:
      return PyvtkPlot_SetColor_s1(self, args);
    case 3:
      return PyvtkPlot_SetColor_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetColor");
  return NULL;
}



static PyObject *
PyvtkPlot_GetColor_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlot *op = static_cast<vtkPlot *>(vp);

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
      op->GetColor(temp0);
      }
    else
      {
      op->vtkPlot::GetColor(temp0);
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
PyvtkPlot_GetColor_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlot *op = static_cast<vtkPlot *>(vp);

  unsigned char temp0[3];
  unsigned char save0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    if (ap.IsBound())
      {
      op->GetColor(temp0);
      }
    else
      {
      op->vtkPlot::GetColor(temp0);
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

static PyMethodDef PyvtkPlot_GetColor_Methods[] = {
  {NULL, PyvtkPlot_GetColor_s1, METH_VARARGS,
   (char*)"@O *d"},
  {NULL, PyvtkPlot_GetColor_s2, METH_VARARGS,
   (char*)"@O *b"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkPlot_GetColor(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkPlot_GetColor_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetColor");
  return NULL;
}



static PyObject *
PyvtkPlot_SetWidth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWidth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlot *op = static_cast<vtkPlot *>(vp);

  float temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetWidth(temp0);
      }
    else
      {
      op->vtkPlot::SetWidth(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPlot_GetWidth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWidth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlot *op = static_cast<vtkPlot *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    float tempr = (ap.IsBound() ?
      op->GetWidth() :
      op->vtkPlot::GetWidth());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPlot_SetPen(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPen");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlot *op = static_cast<vtkPlot *>(vp);

  vtkPen *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPen"))
    {
    if (ap.IsBound())
      {
      op->SetPen(temp0);
      }
    else
      {
      op->vtkPlot::SetPen(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPlot_GetPen(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPen");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlot *op = static_cast<vtkPlot *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPen *tempr = (ap.IsBound() ?
      op->GetPen() :
      op->vtkPlot::GetPen());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPlot_SetBrush(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBrush");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlot *op = static_cast<vtkPlot *>(vp);

  vtkBrush *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkBrush"))
    {
    if (ap.IsBound())
      {
      op->SetBrush(temp0);
      }
    else
      {
      op->vtkPlot::SetBrush(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPlot_GetBrush(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBrush");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlot *op = static_cast<vtkPlot *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkBrush *tempr = (ap.IsBound() ?
      op->GetBrush() :
      op->vtkPlot::GetBrush());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPlot_SetSelectionPen(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSelectionPen");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlot *op = static_cast<vtkPlot *>(vp);

  vtkPen *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPen"))
    {
    if (ap.IsBound())
      {
      op->SetSelectionPen(temp0);
      }
    else
      {
      op->vtkPlot::SetSelectionPen(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPlot_GetSelectionPen(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelectionPen");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlot *op = static_cast<vtkPlot *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPen *tempr = (ap.IsBound() ?
      op->GetSelectionPen() :
      op->vtkPlot::GetSelectionPen());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPlot_SetSelectionBrush(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSelectionBrush");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlot *op = static_cast<vtkPlot *>(vp);

  vtkBrush *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkBrush"))
    {
    if (ap.IsBound())
      {
      op->SetSelectionBrush(temp0);
      }
    else
      {
      op->vtkPlot::SetSelectionBrush(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPlot_GetSelectionBrush(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelectionBrush");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlot *op = static_cast<vtkPlot *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkBrush *tempr = (ap.IsBound() ?
      op->GetSelectionBrush() :
      op->vtkPlot::GetSelectionBrush());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPlot_SetLabel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLabel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlot *op = static_cast<vtkPlot *>(vp);

  vtkStdString temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetLabel(temp0);
      }
    else
      {
      op->vtkPlot::SetLabel(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPlot_GetLabel_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLabel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlot *op = static_cast<vtkPlot *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkStdString tempr = (ap.IsBound() ?
      op->GetLabel() :
      op->vtkPlot::GetLabel());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkPlot_GetLabel_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLabel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlot *op = static_cast<vtkPlot *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkStdString tempr = (ap.IsBound() ?
      op->GetLabel(temp0) :
      op->vtkPlot::GetLabel(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkPlot_GetLabel(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 0:
      return PyvtkPlot_GetLabel_s1(self, args);
    case 1:
      return PyvtkPlot_GetLabel_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetLabel");
  return NULL;
}



static PyObject *
PyvtkPlot_SetLabels(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLabels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlot *op = static_cast<vtkPlot *>(vp);

  vtkStringArray *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkStringArray"))
    {
    if (ap.IsBound())
      {
      op->SetLabels(temp0);
      }
    else
      {
      op->vtkPlot::SetLabels(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPlot_GetLabels(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLabels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlot *op = static_cast<vtkPlot *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkStringArray *tempr = (ap.IsBound() ?
      op->GetLabels() :
      op->vtkPlot::GetLabels());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPlot_GetNumberOfLabels(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfLabels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlot *op = static_cast<vtkPlot *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfLabels() :
      op->vtkPlot::GetNumberOfLabels());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPlot_SetIndexedLabels(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIndexedLabels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlot *op = static_cast<vtkPlot *>(vp);

  vtkStringArray *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkStringArray"))
    {
    if (ap.IsBound())
      {
      op->SetIndexedLabels(temp0);
      }
    else
      {
      op->vtkPlot::SetIndexedLabels(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPlot_GetIndexedLabels(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIndexedLabels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlot *op = static_cast<vtkPlot *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkStringArray *tempr = (ap.IsBound() ?
      op->GetIndexedLabels() :
      op->vtkPlot::GetIndexedLabels());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPlot_GetData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlot *op = static_cast<vtkPlot *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkContextMapper2D *tempr = (ap.IsBound() ?
      op->GetData() :
      op->vtkPlot::GetData());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPlot_GetUseIndexForXSeries(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseIndexForXSeries");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlot *op = static_cast<vtkPlot *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetUseIndexForXSeries() :
      op->vtkPlot::GetUseIndexForXSeries());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPlot_SetUseIndexForXSeries(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseIndexForXSeries");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlot *op = static_cast<vtkPlot *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetUseIndexForXSeries(temp0);
      }
    else
      {
      op->vtkPlot::SetUseIndexForXSeries(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPlot_SetInputData_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlot *op = static_cast<vtkPlot *>(vp);

  vtkTable *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkTable"))
    {
    if (ap.IsBound())
      {
      op->SetInputData(temp0);
      }
    else
      {
      op->vtkPlot::SetInputData(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkPlot_SetInputData_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlot *op = static_cast<vtkPlot *>(vp);

  vtkTable *temp0 = NULL;
  vtkStdString temp1;
  vtkStdString temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkTable") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      op->SetInputData(temp0, temp1, temp2);
      }
    else
      {
      op->vtkPlot::SetInputData(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkPlot_SetInputData_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlot *op = static_cast<vtkPlot *>(vp);

  vtkTable *temp0 = NULL;
  vtkIdType temp1;
  vtkIdType temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkTable") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      op->SetInputData(temp0, temp1, temp2);
      }
    else
      {
      op->vtkPlot::SetInputData(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkPlot_SetInputData_Methods[] = {
  {NULL, PyvtkPlot_SetInputData_s2, METH_VARARGS,
   (char*)"@Oss *vtkTable"},
  {NULL, PyvtkPlot_SetInputData_s3, METH_VARARGS,
   (char*)"@OLL *vtkTable"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkPlot_SetInputData(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkPlot_SetInputData_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkPlot_SetInputData_s1(self, args);
    case 3:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetInputData");
  return NULL;
}



static PyObject *
PyvtkPlot_GetInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlot *op = static_cast<vtkPlot *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkTable *tempr = (ap.IsBound() ?
      op->GetInput() :
      op->vtkPlot::GetInput());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPlot_SetInputArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlot *op = static_cast<vtkPlot *>(vp);

  int temp0;
  vtkStdString temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetInputArray(temp0, temp1);
      }
    else
      {
      op->vtkPlot::SetInputArray(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPlot_SetSelection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSelection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlot *op = static_cast<vtkPlot *>(vp);

  vtkIdTypeArray *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkIdTypeArray"))
    {
    if (ap.IsBound())
      {
      op->SetSelection(temp0);
      }
    else
      {
      op->vtkPlot::SetSelection(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPlot_GetSelection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlot *op = static_cast<vtkPlot *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkIdTypeArray *tempr = (ap.IsBound() ?
      op->GetSelection() :
      op->vtkPlot::GetSelection());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPlot_GetXAxis(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetXAxis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlot *op = static_cast<vtkPlot *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkAxis *tempr = (ap.IsBound() ?
      op->GetXAxis() :
      op->vtkPlot::GetXAxis());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPlot_SetXAxis(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetXAxis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlot *op = static_cast<vtkPlot *>(vp);

  vtkAxis *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAxis"))
    {
    if (ap.IsBound())
      {
      op->SetXAxis(temp0);
      }
    else
      {
      op->vtkPlot::SetXAxis(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPlot_GetYAxis(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetYAxis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlot *op = static_cast<vtkPlot *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkAxis *tempr = (ap.IsBound() ?
      op->GetYAxis() :
      op->vtkPlot::GetYAxis());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPlot_SetYAxis(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetYAxis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlot *op = static_cast<vtkPlot *>(vp);

  vtkAxis *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAxis"))
    {
    if (ap.IsBound())
      {
      op->SetYAxis(temp0);
      }
    else
      {
      op->vtkPlot::SetYAxis(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPlot_SetShiftScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetShiftScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlot *op = static_cast<vtkPlot *>(vp);

  vtkRectd *temp0 = NULL;
  PyObject *pobj0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkRectd"))
    {
    if (ap.IsBound())
      {
      op->SetShiftScale(*temp0);
      }
    else
      {
      op->vtkPlot::SetShiftScale(*temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  Py_XDECREF(pobj0);

  return result;
}


static PyObject *
PyvtkPlot_GetShiftScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetShiftScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlot *op = static_cast<vtkPlot *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkRectd tempr = (ap.IsBound() ?
      op->GetShiftScale() :
      op->vtkPlot::GetShiftScale());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildSpecialObject(&tempr, "vtkRectd");
      }
    }

  return result;
}


static PyObject *
PyvtkPlot_GetBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlot *op = static_cast<vtkPlot *>(vp);

  double temp0[4];
  double save0[4];
  const int size0 = 4;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    if (ap.IsBound())
      {
      op->GetBounds(temp0);
      }
    else
      {
      op->vtkPlot::GetBounds(temp0);
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
PyvtkPlot_GetUnscaledInputBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUnscaledInputBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlot *op = static_cast<vtkPlot *>(vp);

  double temp0[4];
  double save0[4];
  const int size0 = 4;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    if (ap.IsBound())
      {
      op->GetUnscaledInputBounds(temp0);
      }
    else
      {
      op->vtkPlot::GetUnscaledInputBounds(temp0);
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
PyvtkPlot_SetProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlot *op = static_cast<vtkPlot *>(vp);

  vtkStdString temp0;
  vtkVariant *temp1 = NULL;
  PyObject *pobj1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetSpecialObject(temp1, pobj1, "vtkVariant"))
    {
    if (ap.IsBound())
      {
      op->SetProperty(temp0, *temp1);
      }
    else
      {
      op->vtkPlot::SetProperty(temp0, *temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  Py_XDECREF(pobj1);

  return result;
}


static PyObject *
PyvtkPlot_GetProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlot *op = static_cast<vtkPlot *>(vp);

  vtkStdString temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkVariant tempr = (ap.IsBound() ?
      op->GetProperty(temp0) :
      op->vtkPlot::GetProperty(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildSpecialObject(&tempr, "vtkVariant");
      }
    }

  return result;
}

static PyMethodDef PyvtkPlot_Methods[] = {
  {(char*)"GetClassName", PyvtkPlot_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkPlot_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkPlot_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkPlot\nC++: vtkPlot *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkPlot_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkPlot\nC++: vtkPlot *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"PaintLegend", PyvtkPlot_PaintLegend, METH_VARARGS,
   (char*)"V.PaintLegend(vtkContext2D, vtkRectf, int) -> bool\nC++: virtual bool PaintLegend(vtkContext2D *painter,\n    const vtkRectf &rect, int legendIndex)\n\nPaint legend event for the plot, called whenever the legend needs\nthe plot items symbol/mark/line drawn. A rect is supplied with\nthe lower left corner of the rect (elements 0 and 1) and with\nwidth x height (elements 2 and 3). The plot can choose how to\nfill the space supplied. The index is used by Plots that return\nmore than one label.\n"},
  {(char*)"SetTooltipLabelFormat", PyvtkPlot_SetTooltipLabelFormat, METH_VARARGS,
   (char*)"V.SetTooltipLabelFormat(string)\nC++: virtual void SetTooltipLabelFormat(const vtkStdString &label)\n\nSets/gets a printf-style string to build custom tooltip labels\nfrom. An empty string generates the default tooltip labels. The\nfollowing case-sensitive format tags (without quotes) are\nrecognized:\n  '%x' The X value of the plot element\n  '%y' The Y value of the plot element\n  '%i' The IndexedLabels entry for the plot element\n  '%l' The value of the plot's GetLabel() function\n  '%s' (vtkPlotBar only) The Labels entry for the bar segment Any\nother characters or unrecognized format tags are printed in the\ntooltip label verbatim.\n"},
  {(char*)"GetTooltipLabelFormat", PyvtkPlot_GetTooltipLabelFormat, METH_VARARGS,
   (char*)"V.GetTooltipLabelFormat() -> string\nC++: virtual vtkStdString GetTooltipLabelFormat()\n\nSets/gets a printf-style string to build custom tooltip labels\nfrom. An empty string generates the default tooltip labels. The\nfollowing case-sensitive format tags (without quotes) are\nrecognized:\n  '%x' The X value of the plot element\n  '%y' The Y value of the plot element\n  '%i' The IndexedLabels entry for the plot element\n  '%l' The value of the plot's GetLabel() function\n  '%s' (vtkPlotBar only) The Labels entry for the bar segment Any\nother characters or unrecognized format tags are printed in the\ntooltip label verbatim.\n"},
  {(char*)"SetTooltipNotation", PyvtkPlot_SetTooltipNotation, METH_VARARGS,
   (char*)"V.SetTooltipNotation(int)\nC++: virtual void SetTooltipNotation(int notation)\n\nSets/gets the tooltip notation style.\n"},
  {(char*)"GetTooltipNotation", PyvtkPlot_GetTooltipNotation, METH_VARARGS,
   (char*)"V.GetTooltipNotation() -> int\nC++: virtual int GetTooltipNotation()\n\nSets/gets the tooltip notation style.\n"},
  {(char*)"SetTooltipPrecision", PyvtkPlot_SetTooltipPrecision, METH_VARARGS,
   (char*)"V.SetTooltipPrecision(int)\nC++: virtual void SetTooltipPrecision(int precision)\n\nSets/gets the tooltip precision.\n"},
  {(char*)"GetTooltipPrecision", PyvtkPlot_GetTooltipPrecision, METH_VARARGS,
   (char*)"V.GetTooltipPrecision() -> int\nC++: virtual int GetTooltipPrecision()\n\nSets/gets the tooltip precision.\n"},
  {(char*)"GetTooltipLabel", PyvtkPlot_GetTooltipLabel, METH_VARARGS,
   (char*)"V.GetTooltipLabel(vtkVector2d, int, int) -> string\nC++: virtual vtkStdString GetTooltipLabel(\n    const vtkVector2d &plotPos, vtkIdType seriesIndex,\n    vtkIdType segmentIndex)\n\nGenerate and return the tooltip label string for this plot The\nsegmentIndex parameter is ignored, except for vtkPlotBar\n"},
  {(char*)"SelectPoints", PyvtkPlot_SelectPoints, METH_VARARGS,
   (char*)"V.SelectPoints(vtkVector2f, vtkVector2f) -> bool\nC++: virtual bool SelectPoints(const vtkVector2f &min,\n    const vtkVector2f &max)\n\nSelect all points in the specified rectangle.\n"},
  {(char*)"SelectPointsInPolygon", PyvtkPlot_SelectPointsInPolygon, METH_VARARGS,
   (char*)"V.SelectPointsInPolygon(vtkContextPolygon) -> bool\nC++: virtual bool SelectPointsInPolygon(\n    const vtkContextPolygon &polygon)\n\nSelect all points in the specified polygon.\n"},
  {(char*)"SetColor", PyvtkPlot_SetColor, METH_VARARGS,
   (char*)"V.SetColor(int, int, int, int)\nC++: virtual void SetColor(unsigned char r, unsigned char g,\n    unsigned char b, unsigned char a)\nV.SetColor(float, float, float)\nC++: virtual void SetColor(double r, double g, double b)\n\nSet the plot color\n"},
  {(char*)"GetColor", PyvtkPlot_GetColor, METH_VARARGS,
   (char*)"V.GetColor([float, float, float])\nC++: virtual void GetColor(double rgb[3])\nV.GetColor([int, int, int])\nC++: void GetColor(unsigned char rgb[3])\n\nSet the plot color\n"},
  {(char*)"SetWidth", PyvtkPlot_SetWidth, METH_VARARGS,
   (char*)"V.SetWidth(float)\nC++: virtual void SetWidth(float width)\n\nSet the width of the line.\n"},
  {(char*)"GetWidth", PyvtkPlot_GetWidth, METH_VARARGS,
   (char*)"V.GetWidth() -> float\nC++: virtual float GetWidth()\n\nGet the width of the line.\n"},
  {(char*)"SetPen", PyvtkPlot_SetPen, METH_VARARGS,
   (char*)"V.SetPen(vtkPen)\nC++: void SetPen(vtkPen *pen)\n\nSet/get the vtkPen object that controls how this plot draws\n(out)lines.\n"},
  {(char*)"GetPen", PyvtkPlot_GetPen, METH_VARARGS,
   (char*)"V.GetPen() -> vtkPen\nC++: vtkPen *GetPen()\n\nSet/get the vtkPen object that controls how this plot draws\n(out)lines.\n"},
  {(char*)"SetBrush", PyvtkPlot_SetBrush, METH_VARARGS,
   (char*)"V.SetBrush(vtkBrush)\nC++: void SetBrush(vtkBrush *brush)\n\nSet/get the vtkBrush object that controls how this plot fills\nshapes.\n"},
  {(char*)"GetBrush", PyvtkPlot_GetBrush, METH_VARARGS,
   (char*)"V.GetBrush() -> vtkBrush\nC++: vtkBrush *GetBrush()\n\nSet/get the vtkBrush object that controls how this plot fills\nshapes.\n"},
  {(char*)"SetSelectionPen", PyvtkPlot_SetSelectionPen, METH_VARARGS,
   (char*)"V.SetSelectionPen(vtkPen)\nC++: void SetSelectionPen(vtkPen *pen)\n\nSet/get the vtkBrush object that controls how this plot fills\nselected shapes.\n"},
  {(char*)"GetSelectionPen", PyvtkPlot_GetSelectionPen, METH_VARARGS,
   (char*)"V.GetSelectionPen() -> vtkPen\nC++: vtkPen *GetSelectionPen()\n\nSet/get the vtkBrush object that controls how this plot fills\nselected shapes.\n"},
  {(char*)"SetSelectionBrush", PyvtkPlot_SetSelectionBrush, METH_VARARGS,
   (char*)"V.SetSelectionBrush(vtkBrush)\nC++: void SetSelectionBrush(vtkBrush *brush)\n\nSet/get the vtkBrush object that controls how this plot fills\nselected shapes.\n"},
  {(char*)"GetSelectionBrush", PyvtkPlot_GetSelectionBrush, METH_VARARGS,
   (char*)"V.GetSelectionBrush() -> vtkBrush\nC++: vtkBrush *GetSelectionBrush()\n\nSet/get the vtkBrush object that controls how this plot fills\nselected shapes.\n"},
  {(char*)"SetLabel", PyvtkPlot_SetLabel, METH_VARARGS,
   (char*)"V.SetLabel(string)\nC++: virtual void SetLabel(const vtkStdString &label)\n\nSet the label of this plot.\n"},
  {(char*)"GetLabel", PyvtkPlot_GetLabel, METH_VARARGS,
   (char*)"V.GetLabel() -> string\nC++: virtual vtkStdString GetLabel()\nV.GetLabel(int) -> string\nC++: vtkStdString GetLabel(vtkIdType index)\n\nGet the label of this plot.\n"},
  {(char*)"SetLabels", PyvtkPlot_SetLabels, METH_VARARGS,
   (char*)"V.SetLabels(vtkStringArray)\nC++: virtual void SetLabels(vtkStringArray *labels)\n\nSet the plot labels, these are used for stacked chart variants,\nwith the index referring to the stacking index.\n"},
  {(char*)"GetLabels", PyvtkPlot_GetLabels, METH_VARARGS,
   (char*)"V.GetLabels() -> vtkStringArray\nC++: virtual vtkStringArray *GetLabels()\n\nGet the plot labels. If this array has a length greater than 1\nthe index refers to the stacked objects in the plot. See\nvtkPlotBar for example.\n"},
  {(char*)"GetNumberOfLabels", PyvtkPlot_GetNumberOfLabels, METH_VARARGS,
   (char*)"V.GetNumberOfLabels() -> int\nC++: virtual int GetNumberOfLabels()\n\nGet the number of labels associated with this plot.\n"},
  {(char*)"SetIndexedLabels", PyvtkPlot_SetIndexedLabels, METH_VARARGS,
   (char*)"V.SetIndexedLabels(vtkStringArray)\nC++: void SetIndexedLabels(vtkStringArray *labels)\n\nSet indexed labels for the plot. If set, this array can be used\nto provide custom labels for each point in a plot. This array\nshould be the same length as the points array. Default is null\n(no indexed labels).\n"},
  {(char*)"GetIndexedLabels", PyvtkPlot_GetIndexedLabels, METH_VARARGS,
   (char*)"V.GetIndexedLabels() -> vtkStringArray\nC++: virtual vtkStringArray *GetIndexedLabels()\n\nGet the indexed labels array.\n"},
  {(char*)"GetData", PyvtkPlot_GetData, METH_VARARGS,
   (char*)"V.GetData() -> vtkContextMapper2D\nC++: vtkContextMapper2D *GetData()\n\nGet the data object that the plot will draw.\n"},
  {(char*)"GetUseIndexForXSeries", PyvtkPlot_GetUseIndexForXSeries, METH_VARARGS,
   (char*)"V.GetUseIndexForXSeries() -> bool\nC++: bool GetUseIndexForXSeries()\n\nUse the Y array index for the X value. If true any X column\nsetting will be ignored, and the X values will simply be the\nindex of the Y column.\n"},
  {(char*)"SetUseIndexForXSeries", PyvtkPlot_SetUseIndexForXSeries, METH_VARARGS,
   (char*)"V.SetUseIndexForXSeries(bool)\nC++: void SetUseIndexForXSeries(bool a)\n\nUse the Y array index for the X value. If true any X column\nsetting will be ignored, and the X values will simply be the\nindex of the Y column.\n"},
  {(char*)"SetInputData", PyvtkPlot_SetInputData, METH_VARARGS,
   (char*)"V.SetInputData(vtkTable)\nC++: virtual void SetInputData(vtkTable *table)\nV.SetInputData(vtkTable, string, string)\nC++: virtual void SetInputData(vtkTable *table,\n    const vtkStdString &xColumn, const vtkStdString &yColumn)\nV.SetInputData(vtkTable, int, int)\nC++: void SetInputData(vtkTable *table, vtkIdType xColumn,\n    vtkIdType yColumn)\n\nThis is a convenience function to set the input table and the x,\ny column for the plot.\n"},
  {(char*)"GetInput", PyvtkPlot_GetInput, METH_VARARGS,
   (char*)"V.GetInput() -> vtkTable\nC++: virtual vtkTable *GetInput()\n\nGet the input table used by the plot.\n"},
  {(char*)"SetInputArray", PyvtkPlot_SetInputArray, METH_VARARGS,
   (char*)"V.SetInputArray(int, string)\nC++: virtual void SetInputArray(int index,\n    const vtkStdString &name)\n\nConvenience function to set the input arrays. For most plots\nindex 0 is the x axis, and index 1 is the y axis. The name is the\nname of the column in the vtkTable.\n"},
  {(char*)"SetSelection", PyvtkPlot_SetSelection, METH_VARARGS,
   (char*)"V.SetSelection(vtkIdTypeArray)\nC++: virtual void SetSelection(vtkIdTypeArray *id)\n\n"},
  {(char*)"GetSelection", PyvtkPlot_GetSelection, METH_VARARGS,
   (char*)"V.GetSelection() -> vtkIdTypeArray\nC++: vtkIdTypeArray *GetSelection()\n\n"},
  {(char*)"GetXAxis", PyvtkPlot_GetXAxis, METH_VARARGS,
   (char*)"V.GetXAxis() -> vtkAxis\nC++: vtkAxis *GetXAxis()\n\nGet/set the X axis associated with this plot.\n"},
  {(char*)"SetXAxis", PyvtkPlot_SetXAxis, METH_VARARGS,
   (char*)"V.SetXAxis(vtkAxis)\nC++: virtual void SetXAxis(vtkAxis *axis)\n\nGet/set the X axis associated with this plot.\n"},
  {(char*)"GetYAxis", PyvtkPlot_GetYAxis, METH_VARARGS,
   (char*)"V.GetYAxis() -> vtkAxis\nC++: vtkAxis *GetYAxis()\n\nGet/set the Y axis associated with this plot.\n"},
  {(char*)"SetYAxis", PyvtkPlot_SetYAxis, METH_VARARGS,
   (char*)"V.SetYAxis(vtkAxis)\nC++: virtual void SetYAxis(vtkAxis *axis)\n\nGet/set the Y axis associated with this plot.\n"},
  {(char*)"SetShiftScale", PyvtkPlot_SetShiftScale, METH_VARARGS,
   (char*)"V.SetShiftScale(vtkRectd)\nC++: void SetShiftScale(const vtkRectd &scaling)\n\nGet/set the origin shift and scaling factor used by the plot,\nthis is normally 0.0 offset and 1.0 scaling, but can be used to\nrender data outside of the single precision range. The chart that\nowns the plot should set this and ensure the appropriate matrix\nis used when rendering the plot.\n"},
  {(char*)"GetShiftScale", PyvtkPlot_GetShiftScale, METH_VARARGS,
   (char*)"V.GetShiftScale() -> vtkRectd\nC++: vtkRectd GetShiftScale()\n\nGet/set the origin shift and scaling factor used by the plot,\nthis is normally 0.0 offset and 1.0 scaling, but can be used to\nrender data outside of the single precision range. The chart that\nowns the plot should set this and ensure the appropriate matrix\nis used when rendering the plot.\n"},
  {(char*)"GetBounds", PyvtkPlot_GetBounds, METH_VARARGS,
   (char*)"V.GetBounds([float, float, float, float])\nC++: virtual void GetBounds(double bounds[4])\n\nGet the bounds for this plot as (Xmin, Xmax, Ymin, Ymax).\n\nSee GetUnscaledInputBounds for more information.\n"},
  {(char*)"GetUnscaledInputBounds", PyvtkPlot_GetUnscaledInputBounds, METH_VARARGS,
   (char*)"V.GetUnscaledInputBounds([float, float, float, float])\nC++: virtual void GetUnscaledInputBounds(double bounds[4])\n\nProvide un-log-scaled bounds for the plot inputs.\n\nThis function is analogous to GetBounds() with 2 exceptions:\n1. It will never return log-scaled bounds even when the x- and/or\ny-axes are log-scaled.\n2. It will always return the bounds along the *input* axes rather\nthan the output chart coordinates. Thus GetXAxis() returns the\n   axis associated with the first 2 bounds entries and GetYAxis()\nreturns the axis associated with the next 2 bounds entries.\n\nFor example, vtkPlotBar's GetBounds() method will swap axis\nbounds when its orientation is vertical while its\nGetUnscaledInputBounds() will not swap axis bounds.\n\nThis method is provided so user interfaces can determine whether\nor not to allow log-scaling of a particular vtkAxis.\n\nSubclasses of vtkPlot are responsible for implementing this\nfunction to transform input plot data.\n\nThe returned bounds are stored as (Xmin, Xmax, Ymin, Ymax).\n"},
  {(char*)"SetProperty", PyvtkPlot_SetProperty, METH_VARARGS,
   (char*)"V.SetProperty(string, vtkVariant)\nC++: virtual void SetProperty(const vtkStdString &property,\n    const vtkVariant &var)\n\nA General setter/getter that should be overridden. It can\nsilently drop options, case is important\n"},
  {(char*)"GetProperty", PyvtkPlot_GetProperty, METH_VARARGS,
   (char*)"V.GetProperty(string) -> vtkVariant\nC++: virtual vtkVariant GetProperty(const vtkStdString &property)\n\nA General setter/getter that should be overridden. It can\nsilently drop options, case is important\n"},
  {NULL, NULL, 0, NULL}
};

PyObject *PyVTKClass_vtkPlotNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(NULL,
    PyvtkPlot_Methods,
    "vtkPlot", modulename,
    NULL, NULL,
    PyvtkPlot_Doc(),
    PyVTKClass_vtkContextItemNew(modulename));
  return cls;
}

const char **PyvtkPlot_Doc()
{
  static const char *docstring[] = {
    "vtkPlot - Abstract class for 2D plots.\n\n",
    "Superclass: vtkContextItem\n\n",
    "The base class for all plot types used in vtkChart derived charts.\n\nSee Also:\n\nvtkPlotPoints vtkPlotLine vtkPlotBar vtkChart vtkChartXY\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPlot(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPlotNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPlot", o) != 0)
    {
    Py_DECREF(o);
    }

}

