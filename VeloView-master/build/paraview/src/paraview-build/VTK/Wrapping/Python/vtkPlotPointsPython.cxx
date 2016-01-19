// python wrapper for vtkPlotPoints
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
#include "vtkContextPolygon.h"
#include "vtkPlotPoints.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkPlotPoints(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkPlotPointsNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkPlotNew
extern "C" { PyObject *PyVTKClass_vtkPlotNew(const char *); }
#define DECLARED_PyVTKClass_vtkPlotNew
#endif

static const char **PyvtkPlotPoints_Doc();


static PyObject *
PyvtkPlotPoints_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotPoints *op = static_cast<vtkPlotPoints *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkPlotPoints::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPlotPoints_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotPoints *op = static_cast<vtkPlotPoints *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPlotPoints::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPlotPoints_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotPoints *op = static_cast<vtkPlotPoints *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPlotPoints *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPlotPoints::NewInstance());

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
PyvtkPlotPoints_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkPlotPoints *tempr = vtkPlotPoints::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPlotPoints_Update(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Update");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotPoints *op = static_cast<vtkPlotPoints *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Update();
      }
    else
      {
      op->vtkPlotPoints::Update();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPlotPoints_Paint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Paint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotPoints *op = static_cast<vtkPlotPoints *>(vp);

  vtkContext2D *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkContext2D"))
    {
    bool tempr = (ap.IsBound() ?
      op->Paint(temp0) :
      op->vtkPlotPoints::Paint(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPlotPoints_PaintLegend(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PaintLegend");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotPoints *op = static_cast<vtkPlotPoints *>(vp);

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
      op->vtkPlotPoints::PaintLegend(temp0, *temp1, temp2));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  Py_XDECREF(pobj1);

  return result;
}


static PyObject *
PyvtkPlotPoints_GetBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotPoints *op = static_cast<vtkPlotPoints *>(vp);

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
      op->vtkPlotPoints::GetBounds(temp0);
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
PyvtkPlotPoints_GetUnscaledInputBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUnscaledInputBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotPoints *op = static_cast<vtkPlotPoints *>(vp);

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
      op->vtkPlotPoints::GetUnscaledInputBounds(temp0);
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
PyvtkPlotPoints_SetLookupTable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLookupTable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotPoints *op = static_cast<vtkPlotPoints *>(vp);

  vtkScalarsToColors *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkScalarsToColors"))
    {
    if (ap.IsBound())
      {
      op->SetLookupTable(temp0);
      }
    else
      {
      op->vtkPlotPoints::SetLookupTable(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPlotPoints_GetLookupTable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLookupTable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotPoints *op = static_cast<vtkPlotPoints *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkScalarsToColors *tempr = (ap.IsBound() ?
      op->GetLookupTable() :
      op->vtkPlotPoints::GetLookupTable());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPlotPoints_CreateDefaultLookupTable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateDefaultLookupTable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotPoints *op = static_cast<vtkPlotPoints *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->CreateDefaultLookupTable();
      }
    else
      {
      op->vtkPlotPoints::CreateDefaultLookupTable();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPlotPoints_SetScalarVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotPoints *op = static_cast<vtkPlotPoints *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetScalarVisibility(temp0);
      }
    else
      {
      op->vtkPlotPoints::SetScalarVisibility(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPlotPoints_GetScalarVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalarVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotPoints *op = static_cast<vtkPlotPoints *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetScalarVisibility() :
      op->vtkPlotPoints::GetScalarVisibility());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPlotPoints_ScalarVisibilityOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ScalarVisibilityOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotPoints *op = static_cast<vtkPlotPoints *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ScalarVisibilityOn();
      }
    else
      {
      op->vtkPlotPoints::ScalarVisibilityOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPlotPoints_ScalarVisibilityOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ScalarVisibilityOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotPoints *op = static_cast<vtkPlotPoints *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ScalarVisibilityOff();
      }
    else
      {
      op->vtkPlotPoints::ScalarVisibilityOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPlotPoints_SelectColorArray_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SelectColorArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotPoints *op = static_cast<vtkPlotPoints *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SelectColorArray(temp0);
      }
    else
      {
      op->vtkPlotPoints::SelectColorArray(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkPlotPoints_SelectColorArray_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SelectColorArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotPoints *op = static_cast<vtkPlotPoints *>(vp);

  vtkStdString temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SelectColorArray(temp0);
      }
    else
      {
      op->vtkPlotPoints::SelectColorArray(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkPlotPoints_SelectColorArray_Methods[] = {
  {NULL, PyvtkPlotPoints_SelectColorArray_s1, METH_VARARGS,
   (char*)"@L"},
  {NULL, PyvtkPlotPoints_SelectColorArray_s2, METH_VARARGS,
   (char*)"@s"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkPlotPoints_SelectColorArray(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkPlotPoints_SelectColorArray_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SelectColorArray");
  return NULL;
}



static PyObject *
PyvtkPlotPoints_GetColorArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColorArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotPoints *op = static_cast<vtkPlotPoints *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkStdString tempr = (ap.IsBound() ?
      op->GetColorArrayName() :
      op->vtkPlotPoints::GetColorArrayName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPlotPoints_SelectPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SelectPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotPoints *op = static_cast<vtkPlotPoints *>(vp);

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
      op->vtkPlotPoints::SelectPoints(*temp0, *temp1));

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
PyvtkPlotPoints_SelectPointsInPolygon(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SelectPointsInPolygon");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotPoints *op = static_cast<vtkPlotPoints *>(vp);

  vtkContextPolygon *temp0 = NULL;
  PyObject *pobj0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkContextPolygon"))
    {
    bool tempr = (ap.IsBound() ?
      op->SelectPointsInPolygon(*temp0) :
      op->vtkPlotPoints::SelectPointsInPolygon(*temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  Py_XDECREF(pobj0);

  return result;
}


static PyObject *
PyvtkPlotPoints_GetMarkerStyle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMarkerStyle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotPoints *op = static_cast<vtkPlotPoints *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetMarkerStyle() :
      op->vtkPlotPoints::GetMarkerStyle());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPlotPoints_SetMarkerStyle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMarkerStyle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotPoints *op = static_cast<vtkPlotPoints *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetMarkerStyle(temp0);
      }
    else
      {
      op->vtkPlotPoints::SetMarkerStyle(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPlotPoints_GetMarkerSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMarkerSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotPoints *op = static_cast<vtkPlotPoints *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    float tempr = (ap.IsBound() ?
      op->GetMarkerSize() :
      op->vtkPlotPoints::GetMarkerSize());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPlotPoints_SetMarkerSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMarkerSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotPoints *op = static_cast<vtkPlotPoints *>(vp);

  float temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetMarkerSize(temp0);
      }
    else
      {
      op->vtkPlotPoints::SetMarkerSize(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPlotPoints_GetValidPointMaskName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValidPointMaskName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotPoints *op = static_cast<vtkPlotPoints *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkStdString tempr = (ap.IsBound() ?
      op->GetValidPointMaskName() :
      op->vtkPlotPoints::GetValidPointMaskName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPlotPoints_SetValidPointMaskName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValidPointMaskName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotPoints *op = static_cast<vtkPlotPoints *>(vp);

  vtkStdString temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetValidPointMaskName(temp0);
      }
    else
      {
      op->vtkPlotPoints::SetValidPointMaskName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkPlotPoints_Methods[] = {
  {(char*)"GetClassName", PyvtkPlotPoints_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkPlotPoints_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkPlotPoints_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkPlotPoints\nC++: vtkPlotPoints *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkPlotPoints_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkPlotPoints\nC++: vtkPlotPoints *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"Update", PyvtkPlotPoints_Update, METH_VARARGS,
   (char*)"V.Update()\nC++: virtual void Update()\n\nPerform any updates to the item that may be necessary before\nrendering. The scene should take care of calling this on all\nitems before their Paint function is invoked.\n"},
  {(char*)"Paint", PyvtkPlotPoints_Paint, METH_VARARGS,
   (char*)"V.Paint(vtkContext2D) -> bool\nC++: virtual bool Paint(vtkContext2D *painter)\n\nPaint event for the XY plot, called whenever the chart needs to\nbe drawn\n"},
  {(char*)"PaintLegend", PyvtkPlotPoints_PaintLegend, METH_VARARGS,
   (char*)"V.PaintLegend(vtkContext2D, vtkRectf, int) -> bool\nC++: virtual bool PaintLegend(vtkContext2D *painter,\n    const vtkRectf &rect, int legendIndex)\n\nPaint legend event for the XY plot, called whenever the legend\nneeds the plot items symbol/mark/line drawn. A rect is supplied\nwith the lower left corner of the rect (elements 0 and 1) and\nwith width x height (elements 2 and 3). The plot can choose how\nto fill the space supplied.\n"},
  {(char*)"GetBounds", PyvtkPlotPoints_GetBounds, METH_VARARGS,
   (char*)"V.GetBounds([float, float, float, float])\nC++: virtual void GetBounds(double bounds[4])\n\nGet the bounds for this plot as (Xmin, Xmax, Ymin, Ymax).\n"},
  {(char*)"GetUnscaledInputBounds", PyvtkPlotPoints_GetUnscaledInputBounds, METH_VARARGS,
   (char*)"V.GetUnscaledInputBounds([float, float, float, float])\nC++: virtual void GetUnscaledInputBounds(double bounds[4])\n\nGet the non-log-scaled bounds on chart inputs for this plot as\n(Xmin, Xmax, Ymin, Ymax).\n"},
  {(char*)"SetLookupTable", PyvtkPlotPoints_SetLookupTable, METH_VARARGS,
   (char*)"V.SetLookupTable(vtkScalarsToColors)\nC++: void SetLookupTable(vtkScalarsToColors *lut)\n\nSpecify a lookup table for the mapper to use.\n"},
  {(char*)"GetLookupTable", PyvtkPlotPoints_GetLookupTable, METH_VARARGS,
   (char*)"V.GetLookupTable() -> vtkScalarsToColors\nC++: vtkScalarsToColors *GetLookupTable()\n\nSpecify a lookup table for the mapper to use.\n"},
  {(char*)"CreateDefaultLookupTable", PyvtkPlotPoints_CreateDefaultLookupTable, METH_VARARGS,
   (char*)"V.CreateDefaultLookupTable()\nC++: virtual void CreateDefaultLookupTable()\n\nCreate default lookup table. Generally used to create one when\nnone is available with the scalar data.\n"},
  {(char*)"SetScalarVisibility", PyvtkPlotPoints_SetScalarVisibility, METH_VARARGS,
   (char*)"V.SetScalarVisibility(int)\nC++: void SetScalarVisibility(int a)\n\nTurn on/off flag to control whether scalar data is used to color\nobjects.\n"},
  {(char*)"GetScalarVisibility", PyvtkPlotPoints_GetScalarVisibility, METH_VARARGS,
   (char*)"V.GetScalarVisibility() -> int\nC++: int GetScalarVisibility()\n\nTurn on/off flag to control whether scalar data is used to color\nobjects.\n"},
  {(char*)"ScalarVisibilityOn", PyvtkPlotPoints_ScalarVisibilityOn, METH_VARARGS,
   (char*)"V.ScalarVisibilityOn()\nC++: void ScalarVisibilityOn()\n\nTurn on/off flag to control whether scalar data is used to color\nobjects.\n"},
  {(char*)"ScalarVisibilityOff", PyvtkPlotPoints_ScalarVisibilityOff, METH_VARARGS,
   (char*)"V.ScalarVisibilityOff()\nC++: void ScalarVisibilityOff()\n\nTurn on/off flag to control whether scalar data is used to color\nobjects.\n"},
  {(char*)"SelectColorArray", PyvtkPlotPoints_SelectColorArray, METH_VARARGS,
   (char*)"V.SelectColorArray(int)\nC++: void SelectColorArray(vtkIdType arrayNum)\nV.SelectColorArray(string)\nC++: void SelectColorArray(const vtkStdString &arrayName)\n\nWhen ScalarMode is set to UsePointFieldData or UseCellFieldData,\nyou can specify which array to use for coloring using these\nmethods. The lookup table will decide how to convert vectors to\ncolors.\n"},
  {(char*)"GetColorArrayName", PyvtkPlotPoints_GetColorArrayName, METH_VARARGS,
   (char*)"V.GetColorArrayName() -> string\nC++: vtkStdString GetColorArrayName()\n\nGet the array name to color by.\n"},
  {(char*)"SelectPoints", PyvtkPlotPoints_SelectPoints, METH_VARARGS,
   (char*)"V.SelectPoints(vtkVector2f, vtkVector2f) -> bool\nC++: virtual bool SelectPoints(const vtkVector2f &min,\n    const vtkVector2f &max)\n\nSelect all points in the specified rectangle.\n"},
  {(char*)"SelectPointsInPolygon", PyvtkPlotPoints_SelectPointsInPolygon, METH_VARARGS,
   (char*)"V.SelectPointsInPolygon(vtkContextPolygon) -> bool\nC++: virtual bool SelectPointsInPolygon(\n    const vtkContextPolygon &polygon)\n\nSelect all points in the specified polygon.\n"},
  {(char*)"GetMarkerStyle", PyvtkPlotPoints_GetMarkerStyle, METH_VARARGS,
   (char*)"V.GetMarkerStyle() -> int\nC++: int GetMarkerStyle()\n\nGet/set the marker style that should be used. The default is\nnone, the enum in this class is used as a parameter.\n"},
  {(char*)"SetMarkerStyle", PyvtkPlotPoints_SetMarkerStyle, METH_VARARGS,
   (char*)"V.SetMarkerStyle(int)\nC++: void SetMarkerStyle(int a)\n\nGet/set the marker style that should be used. The default is\nnone, the enum in this class is used as a parameter.\n"},
  {(char*)"GetMarkerSize", PyvtkPlotPoints_GetMarkerSize, METH_VARARGS,
   (char*)"V.GetMarkerSize() -> float\nC++: float GetMarkerSize()\n\nGet/set the marker size that should be used. The default is\nnegative, and in that case it is 2.3 times the pen width, if less\nthan 8 will be used.\n"},
  {(char*)"SetMarkerSize", PyvtkPlotPoints_SetMarkerSize, METH_VARARGS,
   (char*)"V.SetMarkerSize(float)\nC++: void SetMarkerSize(float a)\n\nGet/set the marker size that should be used. The default is\nnegative, and in that case it is 2.3 times the pen width, if less\nthan 8 will be used.\n"},
  {(char*)"GetValidPointMaskName", PyvtkPlotPoints_GetValidPointMaskName, METH_VARARGS,
   (char*)"V.GetValidPointMaskName() -> string\nC++: vtkStdString GetValidPointMaskName()\n\nGet/set the valid point mask array name.\n"},
  {(char*)"SetValidPointMaskName", PyvtkPlotPoints_SetValidPointMaskName, METH_VARARGS,
   (char*)"V.SetValidPointMaskName(string)\nC++: void SetValidPointMaskName(vtkStdString a)\n\nGet/set the valid point mask array name.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkPlotPoints_StaticNew()
{
  return vtkPlotPoints::New();
}

PyObject *PyVTKClass_vtkPlotPointsNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkPlotPoints_StaticNew,
    PyvtkPlotPoints_Methods,
    "vtkPlotPoints", modulename,
    NULL, NULL,
    PyvtkPlotPoints_Doc(),
    PyVTKClass_vtkPlotNew(modulename));

  if (cls)
    {
    PyObject *d = PyVTKClass_GetDict(cls);
    PyObject *o;

    for (int c = 0; c < 6; c++)
      {
      static const struct { const char *name; int value; }
        constants[6] = {
          { "NONE", vtkPlotPoints::NONE },
          { "CROSS", vtkPlotPoints::CROSS },
          { "PLUS", vtkPlotPoints::PLUS },
          { "SQUARE", vtkPlotPoints::SQUARE },
          { "CIRCLE", vtkPlotPoints::CIRCLE },
          { "DIAMOND", vtkPlotPoints::DIAMOND },
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

const char **PyvtkPlotPoints_Doc()
{
  static const char *docstring[] = {
    "vtkPlotPoints - Class for drawing an points given two columns from a\n\n",
    "Superclass: vtkPlot\n\n",
    "This class draws points in a plot given two columns from a table. If\nyou need a line as well you should use vtkPlotLine which derives from\nvtkPlotPoints and is capable of drawing both points and a line.\n\nSee Also:\n\nvtkPlotLine\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPlotPoints(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPlotPointsNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPlotPoints", o) != 0)
    {
    Py_DECREF(o);
    }

}

