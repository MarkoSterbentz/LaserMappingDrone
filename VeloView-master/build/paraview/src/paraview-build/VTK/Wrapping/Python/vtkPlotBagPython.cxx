// python wrapper for vtkPlotBag
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
#include "vtkPlotBag.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkPlotBag(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkPlotBagNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkPlotPointsNew
extern "C" { PyObject *PyVTKClass_vtkPlotPointsNew(const char *); }
#define DECLARED_PyVTKClass_vtkPlotPointsNew
#endif

static const char **PyvtkPlotBag_Doc();


static PyObject *
PyvtkPlotBag_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotBag *op = static_cast<vtkPlotBag *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkPlotBag::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPlotBag_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotBag *op = static_cast<vtkPlotBag *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPlotBag::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPlotBag_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotBag *op = static_cast<vtkPlotBag *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPlotBag *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPlotBag::NewInstance());

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
PyvtkPlotBag_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkPlotBag *tempr = vtkPlotBag::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPlotBag_Update(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Update");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotBag *op = static_cast<vtkPlotBag *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Update();
      }
    else
      {
      op->vtkPlotBag::Update();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPlotBag_Paint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Paint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotBag *op = static_cast<vtkPlotBag *>(vp);

  vtkContext2D *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkContext2D"))
    {
    bool tempr = (ap.IsBound() ?
      op->Paint(temp0) :
      op->vtkPlotBag::Paint(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPlotBag_PaintLegend(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PaintLegend");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotBag *op = static_cast<vtkPlotBag *>(vp);

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
      op->vtkPlotBag::PaintLegend(temp0, *temp1, temp2));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  Py_XDECREF(pobj1);

  return result;
}


static PyObject *
PyvtkPlotBag_GetLabels(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLabels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotBag *op = static_cast<vtkPlotBag *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkStringArray *tempr = (ap.IsBound() ?
      op->GetLabels() :
      op->vtkPlotBag::GetLabels());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPlotBag_GetTooltipLabel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTooltipLabel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotBag *op = static_cast<vtkPlotBag *>(vp);

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
      op->vtkPlotBag::GetTooltipLabel(*temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  Py_XDECREF(pobj0);

  return result;
}


static PyObject *
PyvtkPlotBag_SetInputData_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotBag *op = static_cast<vtkPlotBag *>(vp);

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
      op->vtkPlotBag::SetInputData(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkPlotBag_SetInputData_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotBag *op = static_cast<vtkPlotBag *>(vp);

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
      op->vtkPlotBag::SetInputData(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkPlotBag_SetInputData_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotBag *op = static_cast<vtkPlotBag *>(vp);

  vtkTable *temp0 = NULL;
  vtkStdString temp1;
  vtkStdString temp2;
  vtkStdString temp3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(4) &&
      ap.GetVTKObject(temp0, "vtkTable") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
    {
    if (ap.IsBound())
      {
      op->SetInputData(temp0, temp1, temp2, temp3);
      }
    else
      {
      op->vtkPlotBag::SetInputData(temp0, temp1, temp2, temp3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkPlotBag_SetInputData_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotBag *op = static_cast<vtkPlotBag *>(vp);

  vtkTable *temp0 = NULL;
  vtkIdType temp1;
  vtkIdType temp2;
  vtkIdType temp3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(4) &&
      ap.GetVTKObject(temp0, "vtkTable") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
    {
    if (ap.IsBound())
      {
      op->SetInputData(temp0, temp1, temp2, temp3);
      }
    else
      {
      op->vtkPlotBag::SetInputData(temp0, temp1, temp2, temp3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkPlotBag_SetInputData_Methods[] = {
  {NULL, PyvtkPlotBag_SetInputData_s3, METH_VARARGS,
   (char*)"@Osss *vtkTable"},
  {NULL, PyvtkPlotBag_SetInputData_s4, METH_VARARGS,
   (char*)"@OLLL *vtkTable"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkPlotBag_SetInputData(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkPlotBag_SetInputData_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkPlotBag_SetInputData_s1(self, args);
    case 3:
      return PyvtkPlotBag_SetInputData_s2(self, args);
    case 4:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetInputData");
  return NULL;
}



static PyObject *
PyvtkPlotBag_SetLinePen(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLinePen");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotBag *op = static_cast<vtkPlotBag *>(vp);

  vtkPen *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPen"))
    {
    if (ap.IsBound())
      {
      op->SetLinePen(temp0);
      }
    else
      {
      op->vtkPlotBag::SetLinePen(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPlotBag_GetLinePen(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLinePen");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotBag *op = static_cast<vtkPlotBag *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPen *tempr = (ap.IsBound() ?
      op->GetLinePen() :
      op->vtkPlotBag::GetLinePen());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPlotBag_SetPointPen(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPointPen");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotBag *op = static_cast<vtkPlotBag *>(vp);

  vtkPen *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPen"))
    {
    if (ap.IsBound())
      {
      op->SetPointPen(temp0);
      }
    else
      {
      op->vtkPlotBag::SetPointPen(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPlotBag_GetPointPen(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointPen");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotBag *op = static_cast<vtkPlotBag *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPen *tempr = (ap.IsBound() ?
      op->GetPointPen() :
      op->vtkPlotBag::GetPointPen());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkPlotBag_Methods[] = {
  {(char*)"GetClassName", PyvtkPlotBag_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkPlotBag_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkPlotBag_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkPlotBag\nC++: vtkPlotBag *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkPlotBag_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkPlotBag\nC++: vtkPlotBag *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"Update", PyvtkPlotBag_Update, METH_VARARGS,
   (char*)"V.Update()\nC++: virtual void Update()\n\nPerform any updates to the item that may be necessary before\nrendering. The scene should take care of calling this on all\nitems before their Paint function is invoked.\n"},
  {(char*)"Paint", PyvtkPlotBag_Paint, METH_VARARGS,
   (char*)"V.Paint(vtkContext2D) -> bool\nC++: virtual bool Paint(vtkContext2D *painter)\n\nPaint event for the XY plot, called whenever the chart needs to\nbe drawn.\n"},
  {(char*)"PaintLegend", PyvtkPlotBag_PaintLegend, METH_VARARGS,
   (char*)"V.PaintLegend(vtkContext2D, vtkRectf, int) -> bool\nC++: virtual bool PaintLegend(vtkContext2D *painter,\n    const vtkRectf &rect, int legendIndex)\n\nPaint legend event for the XY plot, called whenever the legend\nneeds the plot items symbol/mark/line drawn. A rect is supplied\nwith the lower left corner of the rect (elements 0 and 1) and\nwith width x height (elements 2 and 3). The plot can choose how\nto fill the space supplied.\n"},
  {(char*)"GetLabels", PyvtkPlotBag_GetLabels, METH_VARARGS,
   (char*)"V.GetLabels() -> vtkStringArray\nC++: virtual vtkStringArray *GetLabels()\n\nGet the plot labels. If this array has a length greater than 1\nthe index refers to the stacked objects in the plot. See\nvtkPlotBar for example.\n"},
  {(char*)"GetTooltipLabel", PyvtkPlotBag_GetTooltipLabel, METH_VARARGS,
   (char*)"V.GetTooltipLabel(vtkVector2d, int, int) -> string\nC++: virtual vtkStdString GetTooltipLabel(\n    const vtkVector2d &plotPos, vtkIdType seriesIndex,\n    vtkIdType segmentIndex)\n\nGenerate and return the tooltip label string for this plot The\nsegmentIndex parameter is ignored, except for vtkPlotBar\n"},
  {(char*)"SetInputData", PyvtkPlotBag_SetInputData, METH_VARARGS,
   (char*)"V.SetInputData(vtkTable)\nC++: virtual void SetInputData(vtkTable *table)\nV.SetInputData(vtkTable, string, string)\nC++: virtual void SetInputData(vtkTable *table,\n    const vtkStdString &yColumn,\n    const vtkStdString &densityColumn)\nV.SetInputData(vtkTable, string, string, string)\nC++: virtual void SetInputData(vtkTable *table,\n    const vtkStdString &xColumn, const vtkStdString &yColumn,\n    const vtkStdString &densityColumn)\nV.SetInputData(vtkTable, int, int, int)\nC++: virtual void SetInputData(vtkTable *table, vtkIdType xColumn,\n     vtkIdType yColumn, vtkIdType densityColumn)\n\nSet the input, we are expecting a vtkTable with three columns.\nThe first column and the second represent the x,y position . The\nfive others columns represent the quartiles used to display the\nbox. Inherited method will call the last SetInputData method with\ndefault paramaters.\n"},
  {(char*)"SetLinePen", PyvtkPlotBag_SetLinePen, METH_VARARGS,
   (char*)"V.SetLinePen(vtkPen)\nC++: void SetLinePen(vtkPen *pen)\n\nSet/get the vtkPen object that controls how this plot draws\nboundary lines.\n"},
  {(char*)"GetLinePen", PyvtkPlotBag_GetLinePen, METH_VARARGS,
   (char*)"V.GetLinePen() -> vtkPen\nC++: vtkPen *GetLinePen()\n\nSet/get the vtkPen object that controls how this plot draws\nboundary lines.\n"},
  {(char*)"SetPointPen", PyvtkPlotBag_SetPointPen, METH_VARARGS,
   (char*)"V.SetPointPen(vtkPen)\nC++: void SetPointPen(vtkPen *pen)\n\nSet/get the vtkPen object that controls how this plot draws\npoints. Those are just helpers functions:\n this pen is actually the default Plot pen.\n"},
  {(char*)"GetPointPen", PyvtkPlotBag_GetPointPen, METH_VARARGS,
   (char*)"V.GetPointPen() -> vtkPen\nC++: vtkPen *GetPointPen()\n\nSet/get the vtkPen object that controls how this plot draws\npoints. Those are just helpers functions:\n this pen is actually the default Plot pen.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkPlotBag_StaticNew()
{
  return vtkPlotBag::New();
}

PyObject *PyVTKClass_vtkPlotBagNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkPlotBag_StaticNew,
    PyvtkPlotBag_Methods,
    "vtkPlotBag", modulename,
    NULL, NULL,
    PyvtkPlotBag_Doc(),
    PyVTKClass_vtkPlotPointsNew(modulename));
  return cls;
}

const char **PyvtkPlotBag_Doc()
{
  static const char *docstring[] = {
    "vtkPlotBag - Class for drawing an a bagplot.\n\n",
    "Superclass: vtkPlotPoints\n\n",
    "This class allows to draw a bagplot given three columns from a\nvtkTable. The first two columns will represent X,Y as it is for\nvtkPlotPoints. The third one will have to specify if the density\nassigned to each point (generally obtained by the\nvtkHighestDensityRegionsStatistics filter). Points are drawn in a\nplot points fashion and 2 convex hull polygons are drawn around the\nmedian and the 3 quartil",
    "e of the density field.\n\nSee Also:\n\nvtkHighestDensityRegionsStatistics\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPlotBag(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPlotBagNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPlotBag", o) != 0)
    {
    Py_DECREF(o);
    }

}

