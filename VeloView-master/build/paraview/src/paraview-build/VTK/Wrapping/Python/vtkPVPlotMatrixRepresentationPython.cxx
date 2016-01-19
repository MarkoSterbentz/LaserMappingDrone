// python wrapper for vtkPVPlotMatrixRepresentation
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkPVPlotMatrixRepresentation.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkPVPlotMatrixRepresentation(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkPVPlotMatrixRepresentationNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkChartRepresentationNew
extern "C" { PyObject *PyVTKClass_vtkChartRepresentationNew(const char *); }
#define DECLARED_PyVTKClass_vtkChartRepresentationNew
#endif

static const char **PyvtkPVPlotMatrixRepresentation_Doc();


static PyObject *
PyvtkPVPlotMatrixRepresentation_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPlotMatrixRepresentation *op = static_cast<vtkPVPlotMatrixRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkPVPlotMatrixRepresentation::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVPlotMatrixRepresentation_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPlotMatrixRepresentation *op = static_cast<vtkPVPlotMatrixRepresentation *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPVPlotMatrixRepresentation::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVPlotMatrixRepresentation_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPlotMatrixRepresentation *op = static_cast<vtkPVPlotMatrixRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPVPlotMatrixRepresentation *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPVPlotMatrixRepresentation::NewInstance());

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
PyvtkPVPlotMatrixRepresentation_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkPVPlotMatrixRepresentation *tempr = vtkPVPlotMatrixRepresentation::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVPlotMatrixRepresentation_SetVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPlotMatrixRepresentation *op = static_cast<vtkPVPlotMatrixRepresentation *>(vp);

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
      op->vtkPVPlotMatrixRepresentation::SetVisibility(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVPlotMatrixRepresentation_SetSeriesVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSeriesVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPlotMatrixRepresentation *op = static_cast<vtkPVPlotMatrixRepresentation *>(vp);

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
      op->vtkPVPlotMatrixRepresentation::SetSeriesVisibility(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVPlotMatrixRepresentation_ClearSeriesVisibilities(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClearSeriesVisibilities");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPlotMatrixRepresentation *op = static_cast<vtkPVPlotMatrixRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ClearSeriesVisibilities();
      }
    else
      {
      op->vtkPVPlotMatrixRepresentation::ClearSeriesVisibilities();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVPlotMatrixRepresentation_SetColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPlotMatrixRepresentation *op = static_cast<vtkPVPlotMatrixRepresentation *>(vp);

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
      op->vtkPVPlotMatrixRepresentation::SetColor(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVPlotMatrixRepresentation_SetActivePlotColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetActivePlotColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPlotMatrixRepresentation *op = static_cast<vtkPVPlotMatrixRepresentation *>(vp);

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
      op->SetActivePlotColor(temp0, temp1, temp2);
      }
    else
      {
      op->vtkPVPlotMatrixRepresentation::SetActivePlotColor(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVPlotMatrixRepresentation_SetHistogramColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHistogramColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPlotMatrixRepresentation *op = static_cast<vtkPVPlotMatrixRepresentation *>(vp);

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
      op->SetHistogramColor(temp0, temp1, temp2);
      }
    else
      {
      op->vtkPVPlotMatrixRepresentation::SetHistogramColor(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVPlotMatrixRepresentation_SetMarkerStyle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMarkerStyle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPlotMatrixRepresentation *op = static_cast<vtkPVPlotMatrixRepresentation *>(vp);

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
      op->vtkPVPlotMatrixRepresentation::SetMarkerStyle(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVPlotMatrixRepresentation_SetActivePlotMarkerStyle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetActivePlotMarkerStyle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPlotMatrixRepresentation *op = static_cast<vtkPVPlotMatrixRepresentation *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetActivePlotMarkerStyle(temp0);
      }
    else
      {
      op->vtkPVPlotMatrixRepresentation::SetActivePlotMarkerStyle(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVPlotMatrixRepresentation_SetMarkerSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMarkerSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPlotMatrixRepresentation *op = static_cast<vtkPVPlotMatrixRepresentation *>(vp);

  double temp0;
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
      op->vtkPVPlotMatrixRepresentation::SetMarkerSize(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVPlotMatrixRepresentation_SetActivePlotMarkerSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetActivePlotMarkerSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPlotMatrixRepresentation *op = static_cast<vtkPVPlotMatrixRepresentation *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetActivePlotMarkerSize(temp0);
      }
    else
      {
      op->vtkPVPlotMatrixRepresentation::SetActivePlotMarkerSize(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVPlotMatrixRepresentation_GetPlotMatrix(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPlotMatrix");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPlotMatrixRepresentation *op = static_cast<vtkPVPlotMatrixRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkScatterPlotMatrix *tempr = (ap.IsBound() ?
      op->GetPlotMatrix() :
      op->vtkPVPlotMatrixRepresentation::GetPlotMatrix());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkPVPlotMatrixRepresentation_Methods[] = {
  {(char*)"GetClassName", PyvtkPVPlotMatrixRepresentation_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkPVPlotMatrixRepresentation_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkPVPlotMatrixRepresentation_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkPVPlotMatrixRepresentation\nC++: vtkPVPlotMatrixRepresentation *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkPVPlotMatrixRepresentation_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkPVPlotMatrixRepresentation\nC++: vtkPVPlotMatrixRepresentation *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetVisibility", PyvtkPVPlotMatrixRepresentation_SetVisibility, METH_VARARGS,
   (char*)"V.SetVisibility(bool)\nC++: virtual void SetVisibility(bool visible)\n\nSets the visibility for the plot matrix representation.\n"},
  {(char*)"SetSeriesVisibility", PyvtkPVPlotMatrixRepresentation_SetSeriesVisibility, METH_VARARGS,
   (char*)"V.SetSeriesVisibility(string, bool)\nC++: void SetSeriesVisibility(const char *series, bool visibility)\n\nSet series visibility given its name. The order in which\nSetSeriesVisibility is called is used to determine the order for\neach of the plots in the grid.\n"},
  {(char*)"ClearSeriesVisibilities", PyvtkPVPlotMatrixRepresentation_ClearSeriesVisibilities, METH_VARARGS,
   (char*)"V.ClearSeriesVisibilities()\nC++: void ClearSeriesVisibilities()\n\nSet series visibility given its name. The order in which\nSetSeriesVisibility is called is used to determine the order for\neach of the plots in the grid.\n"},
  {(char*)"SetColor", PyvtkPVPlotMatrixRepresentation_SetColor, METH_VARARGS,
   (char*)"V.SetColor(float, float, float)\nC++: void SetColor(double r, double g, double b)\n\nSets the color for the scatter plots in the plot matrix.\n"},
  {(char*)"SetActivePlotColor", PyvtkPVPlotMatrixRepresentation_SetActivePlotColor, METH_VARARGS,
   (char*)"V.SetActivePlotColor(float, float, float)\nC++: void SetActivePlotColor(double r, double g, double b)\n\nSets the color for the active plot.\n"},
  {(char*)"SetHistogramColor", PyvtkPVPlotMatrixRepresentation_SetHistogramColor, METH_VARARGS,
   (char*)"V.SetHistogramColor(float, float, float)\nC++: void SetHistogramColor(double r, double g, double b)\n\nSets the color for the histograms.\n"},
  {(char*)"SetMarkerStyle", PyvtkPVPlotMatrixRepresentation_SetMarkerStyle, METH_VARARGS,
   (char*)"V.SetMarkerStyle(int)\nC++: void SetMarkerStyle(int style)\n\nSets the marker style for the scatter plots.\n"},
  {(char*)"SetActivePlotMarkerStyle", PyvtkPVPlotMatrixRepresentation_SetActivePlotMarkerStyle, METH_VARARGS,
   (char*)"V.SetActivePlotMarkerStyle(int)\nC++: void SetActivePlotMarkerStyle(int style)\n\nSets the marker style for the active plot.\n"},
  {(char*)"SetMarkerSize", PyvtkPVPlotMatrixRepresentation_SetMarkerSize, METH_VARARGS,
   (char*)"V.SetMarkerSize(float)\nC++: void SetMarkerSize(double size)\n\nSets the marker size for the scatter plots.\n"},
  {(char*)"SetActivePlotMarkerSize", PyvtkPVPlotMatrixRepresentation_SetActivePlotMarkerSize, METH_VARARGS,
   (char*)"V.SetActivePlotMarkerSize(float)\nC++: void SetActivePlotMarkerSize(double size)\n\nSets the marker size for the active plots.\n"},
  {(char*)"GetPlotMatrix", PyvtkPVPlotMatrixRepresentation_GetPlotMatrix, METH_VARARGS,
   (char*)"V.GetPlotMatrix() -> vtkScatterPlotMatrix\nC++: vtkScatterPlotMatrix *GetPlotMatrix()\n\nReturns the scatter plot matrix.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkPVPlotMatrixRepresentation_StaticNew()
{
  return vtkPVPlotMatrixRepresentation::New();
}

PyObject *PyVTKClass_vtkPVPlotMatrixRepresentationNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkPVPlotMatrixRepresentation_StaticNew,
    PyvtkPVPlotMatrixRepresentation_Methods,
    "vtkPVPlotMatrixRepresentation", modulename,
    NULL, NULL,
    PyvtkPVPlotMatrixRepresentation_Doc(),
    PyVTKClass_vtkChartRepresentationNew(modulename));
  return cls;
}

const char **PyvtkPVPlotMatrixRepresentation_Doc()
{
  static const char *docstring[] = {
    "vtkPVPlotMatrixRepresentation - vtkChartRepresentation subclass for\n\n",
    "Superclass: vtkChartRepresentation\n\n",
    "vtkPVPlotMatrixRepresentation manages representations in a\nvtkScatterPlotMatrix view. It exposes API that affects how the matrix\nis rendered as well as API to control which of the columns in the\ninput vtkTable are to be plotted in the matrix.\n\nvtkPVPlotMatrixRepresentation currently does not support multiblock\nof tables and only the first table is rendered.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPVPlotMatrixRepresentation(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPVPlotMatrixRepresentationNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPVPlotMatrixRepresentation", o) != 0)
    {
    Py_DECREF(o);
    }

}

