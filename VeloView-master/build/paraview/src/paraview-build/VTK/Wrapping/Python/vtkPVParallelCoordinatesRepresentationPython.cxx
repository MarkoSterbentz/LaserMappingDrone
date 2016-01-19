// python wrapper for vtkPVParallelCoordinatesRepresentation
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkPVParallelCoordinatesRepresentation.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkPVParallelCoordinatesRepresentation(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkPVParallelCoordinatesRepresentationNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkChartRepresentationNew
extern "C" { PyObject *PyVTKClass_vtkChartRepresentationNew(const char *); }
#define DECLARED_PyVTKClass_vtkChartRepresentationNew
#endif

static const char **PyvtkPVParallelCoordinatesRepresentation_Doc();


static PyObject *
PyvtkPVParallelCoordinatesRepresentation_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVParallelCoordinatesRepresentation *op = static_cast<vtkPVParallelCoordinatesRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkPVParallelCoordinatesRepresentation::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVParallelCoordinatesRepresentation_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVParallelCoordinatesRepresentation *op = static_cast<vtkPVParallelCoordinatesRepresentation *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPVParallelCoordinatesRepresentation::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVParallelCoordinatesRepresentation_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVParallelCoordinatesRepresentation *op = static_cast<vtkPVParallelCoordinatesRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPVParallelCoordinatesRepresentation *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPVParallelCoordinatesRepresentation::NewInstance());

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
PyvtkPVParallelCoordinatesRepresentation_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkPVParallelCoordinatesRepresentation *tempr = vtkPVParallelCoordinatesRepresentation::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVParallelCoordinatesRepresentation_SetVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVParallelCoordinatesRepresentation *op = static_cast<vtkPVParallelCoordinatesRepresentation *>(vp);

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
      op->vtkPVParallelCoordinatesRepresentation::SetVisibility(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVParallelCoordinatesRepresentation_SetSeriesVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSeriesVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVParallelCoordinatesRepresentation *op = static_cast<vtkPVParallelCoordinatesRepresentation *>(vp);

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
      op->vtkPVParallelCoordinatesRepresentation::SetSeriesVisibility(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVParallelCoordinatesRepresentation_ClearSeriesVisibilities(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClearSeriesVisibilities");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVParallelCoordinatesRepresentation *op = static_cast<vtkPVParallelCoordinatesRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ClearSeriesVisibilities();
      }
    else
      {
      op->vtkPVParallelCoordinatesRepresentation::ClearSeriesVisibilities();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVParallelCoordinatesRepresentation_GetChart(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetChart");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVParallelCoordinatesRepresentation *op = static_cast<vtkPVParallelCoordinatesRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkChartParallelCoordinates *tempr = (ap.IsBound() ?
      op->GetChart() :
      op->vtkPVParallelCoordinatesRepresentation::GetChart());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVParallelCoordinatesRepresentation_SetLineThickness(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLineThickness");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVParallelCoordinatesRepresentation *op = static_cast<vtkPVParallelCoordinatesRepresentation *>(vp);

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
      op->vtkPVParallelCoordinatesRepresentation::SetLineThickness(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVParallelCoordinatesRepresentation_SetLineStyle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLineStyle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVParallelCoordinatesRepresentation *op = static_cast<vtkPVParallelCoordinatesRepresentation *>(vp);

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
      op->vtkPVParallelCoordinatesRepresentation::SetLineStyle(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVParallelCoordinatesRepresentation_SetColor_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVParallelCoordinatesRepresentation *op = static_cast<vtkPVParallelCoordinatesRepresentation *>(vp);

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
      op->vtkPVParallelCoordinatesRepresentation::SetColor(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkPVParallelCoordinatesRepresentation_SetColor_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVParallelCoordinatesRepresentation *op = static_cast<vtkPVParallelCoordinatesRepresentation *>(vp);

  double temp0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetColor(temp0);
      }
    else
      {
      op->vtkPVParallelCoordinatesRepresentation::SetColor(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkPVParallelCoordinatesRepresentation_SetColor(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkPVParallelCoordinatesRepresentation_SetColor_s1(self, args);
    case 1:
      return PyvtkPVParallelCoordinatesRepresentation_SetColor_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetColor");
  return NULL;
}



static PyObject *
PyvtkPVParallelCoordinatesRepresentation_SetOpacity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOpacity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVParallelCoordinatesRepresentation *op = static_cast<vtkPVParallelCoordinatesRepresentation *>(vp);

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
      op->vtkPVParallelCoordinatesRepresentation::SetOpacity(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkPVParallelCoordinatesRepresentation_Methods[] = {
  {(char*)"GetClassName", PyvtkPVParallelCoordinatesRepresentation_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkPVParallelCoordinatesRepresentation_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkPVParallelCoordinatesRepresentation_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkPVParallelCoordinatesRepresentation\nC++: vtkPVParallelCoordinatesRepresentation *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkPVParallelCoordinatesRepresentation_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject)\n    -> vtkPVParallelCoordinatesRepresentation\nC++: vtkPVParallelCoordinatesRepresentation *SafeDownCast(\n    vtkObject* o)\n\n"},
  {(char*)"SetVisibility", PyvtkPVParallelCoordinatesRepresentation_SetVisibility, METH_VARARGS,
   (char*)"V.SetVisibility(bool)\nC++: virtual void SetVisibility(bool visible)\n\nSet visibility of the representation.\n"},
  {(char*)"SetSeriesVisibility", PyvtkPVParallelCoordinatesRepresentation_SetSeriesVisibility, METH_VARARGS,
   (char*)"V.SetSeriesVisibility(string, bool)\nC++: void SetSeriesVisibility(const char *series, bool visibility)\n\nSet series visibility given its name. The order is currently\nignored, but in future we can add support to respect that as in\nvtkPVPlotMatrixRepresentation.\n"},
  {(char*)"ClearSeriesVisibilities", PyvtkPVParallelCoordinatesRepresentation_ClearSeriesVisibilities, METH_VARARGS,
   (char*)"V.ClearSeriesVisibilities()\nC++: void ClearSeriesVisibilities()\n\nSet series visibility given its name. The order is currently\nignored, but in future we can add support to respect that as in\nvtkPVPlotMatrixRepresentation.\n"},
  {(char*)"GetChart", PyvtkPVParallelCoordinatesRepresentation_GetChart, METH_VARARGS,
   (char*)"V.GetChart() -> vtkChartParallelCoordinates\nC++: vtkChartParallelCoordinates *GetChart()\n\nProvides access to the underlying VTK representation.\n"},
  {(char*)"SetLineThickness", PyvtkPVParallelCoordinatesRepresentation_SetLineThickness, METH_VARARGS,
   (char*)"V.SetLineThickness(int)\nC++: void SetLineThickness(int a)\n\nSets the line thickness for the plot.\n"},
  {(char*)"SetLineStyle", PyvtkPVParallelCoordinatesRepresentation_SetLineStyle, METH_VARARGS,
   (char*)"V.SetLineStyle(int)\nC++: void SetLineStyle(int a)\n\nSet the line style for the plot.\n"},
  {(char*)"SetColor", PyvtkPVParallelCoordinatesRepresentation_SetColor, METH_VARARGS,
   (char*)"V.SetColor(float, float, float)\nC++: void SetColor(double, double, double)\nV.SetColor((float, float, float))\nC++: void SetColor(double a[3])\n\n"},
  {(char*)"SetOpacity", PyvtkPVParallelCoordinatesRepresentation_SetOpacity, METH_VARARGS,
   (char*)"V.SetOpacity(float)\nC++: void SetOpacity(double a)\n\nSets the opacity for the lines in the plot.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkPVParallelCoordinatesRepresentation_StaticNew()
{
  return vtkPVParallelCoordinatesRepresentation::New();
}

PyObject *PyVTKClass_vtkPVParallelCoordinatesRepresentationNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkPVParallelCoordinatesRepresentation_StaticNew,
    PyvtkPVParallelCoordinatesRepresentation_Methods,
    "vtkPVParallelCoordinatesRepresentation", modulename,
    NULL, NULL,
    PyvtkPVParallelCoordinatesRepresentation_Doc(),
    PyVTKClass_vtkChartRepresentationNew(modulename));
  return cls;
}

const char **PyvtkPVParallelCoordinatesRepresentation_Doc()
{
  static const char *docstring[] = {
    "vtkPVParallelCoordinatesRepresentation\n\n",
    "Superclass: vtkChartRepresentation\n\n",
    "vtkPVParallelCoordinatesRepresentation is the\nvtkChartParallelCoordinates subclass for parallel coordinates\nrepresentation. It exposes API from underlying\nvtkChartParallelCoordinates.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPVParallelCoordinatesRepresentation(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPVParallelCoordinatesRepresentationNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPVParallelCoordinatesRepresentation", o) != 0)
    {
    Py_DECREF(o);
    }

}

