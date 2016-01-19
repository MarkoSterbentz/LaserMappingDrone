// python wrapper for vtkPVBoxChartRepresentation
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkPVBoxChartRepresentation.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkPVBoxChartRepresentation(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkPVBoxChartRepresentationNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkChartRepresentationNew
extern "C" { PyObject *PyVTKClass_vtkChartRepresentationNew(const char *); }
#define DECLARED_PyVTKClass_vtkChartRepresentationNew
#endif

static const char **PyvtkPVBoxChartRepresentation_Doc();


static PyObject *
PyvtkPVBoxChartRepresentation_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVBoxChartRepresentation *op = static_cast<vtkPVBoxChartRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkPVBoxChartRepresentation::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVBoxChartRepresentation_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVBoxChartRepresentation *op = static_cast<vtkPVBoxChartRepresentation *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPVBoxChartRepresentation::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVBoxChartRepresentation_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVBoxChartRepresentation *op = static_cast<vtkPVBoxChartRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPVBoxChartRepresentation *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPVBoxChartRepresentation::NewInstance());

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
PyvtkPVBoxChartRepresentation_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkPVBoxChartRepresentation *tempr = vtkPVBoxChartRepresentation::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVBoxChartRepresentation_SetVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVBoxChartRepresentation *op = static_cast<vtkPVBoxChartRepresentation *>(vp);

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
      op->vtkPVBoxChartRepresentation::SetVisibility(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVBoxChartRepresentation_SetSeriesVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSeriesVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVBoxChartRepresentation *op = static_cast<vtkPVBoxChartRepresentation *>(vp);

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
      op->vtkPVBoxChartRepresentation::SetSeriesVisibility(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVBoxChartRepresentation_SetSeriesColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSeriesColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVBoxChartRepresentation *op = static_cast<vtkPVBoxChartRepresentation *>(vp);

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
      op->SetSeriesColor(temp0, temp1, temp2, temp3);
      }
    else
      {
      op->vtkPVBoxChartRepresentation::SetSeriesColor(temp0, temp1, temp2, temp3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVBoxChartRepresentation_ClearSeriesVisibilities(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClearSeriesVisibilities");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVBoxChartRepresentation *op = static_cast<vtkPVBoxChartRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ClearSeriesVisibilities();
      }
    else
      {
      op->vtkPVBoxChartRepresentation::ClearSeriesVisibilities();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVBoxChartRepresentation_ClearSeriesColors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClearSeriesColors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVBoxChartRepresentation *op = static_cast<vtkPVBoxChartRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ClearSeriesColors();
      }
    else
      {
      op->vtkPVBoxChartRepresentation::ClearSeriesColors();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVBoxChartRepresentation_GetChart(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetChart");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVBoxChartRepresentation *op = static_cast<vtkPVBoxChartRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkChartBox *tempr = (ap.IsBound() ?
      op->GetChart() :
      op->vtkPVBoxChartRepresentation::GetChart());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVBoxChartRepresentation_SetLineThickness(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLineThickness");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVBoxChartRepresentation *op = static_cast<vtkPVBoxChartRepresentation *>(vp);

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
      op->vtkPVBoxChartRepresentation::SetLineThickness(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVBoxChartRepresentation_SetLineStyle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLineStyle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVBoxChartRepresentation *op = static_cast<vtkPVBoxChartRepresentation *>(vp);

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
      op->vtkPVBoxChartRepresentation::SetLineStyle(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVBoxChartRepresentation_SetColor_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVBoxChartRepresentation *op = static_cast<vtkPVBoxChartRepresentation *>(vp);

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
      op->vtkPVBoxChartRepresentation::SetColor(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkPVBoxChartRepresentation_SetColor_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVBoxChartRepresentation *op = static_cast<vtkPVBoxChartRepresentation *>(vp);

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
      op->vtkPVBoxChartRepresentation::SetColor(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkPVBoxChartRepresentation_SetColor(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkPVBoxChartRepresentation_SetColor_s1(self, args);
    case 1:
      return PyvtkPVBoxChartRepresentation_SetColor_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetColor");
  return NULL;
}



static PyObject *
PyvtkPVBoxChartRepresentation_SetLegend(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLegend");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVBoxChartRepresentation *op = static_cast<vtkPVBoxChartRepresentation *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetLegend(temp0);
      }
    else
      {
      op->vtkPVBoxChartRepresentation::SetLegend(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkPVBoxChartRepresentation_Methods[] = {
  {(char*)"GetClassName", PyvtkPVBoxChartRepresentation_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkPVBoxChartRepresentation_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkPVBoxChartRepresentation_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkPVBoxChartRepresentation\nC++: vtkPVBoxChartRepresentation *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkPVBoxChartRepresentation_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkPVBoxChartRepresentation\nC++: vtkPVBoxChartRepresentation *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetVisibility", PyvtkPVBoxChartRepresentation_SetVisibility, METH_VARARGS,
   (char*)"V.SetVisibility(bool)\nC++: virtual void SetVisibility(bool visible)\n\nSet visibility of the representation.\n"},
  {(char*)"SetSeriesVisibility", PyvtkPVBoxChartRepresentation_SetSeriesVisibility, METH_VARARGS,
   (char*)"V.SetSeriesVisibility(string, bool)\nC++: void SetSeriesVisibility(const char *series, bool visibility)\n\nSet/Clear the properties for series/columns.\n"},
  {(char*)"SetSeriesColor", PyvtkPVBoxChartRepresentation_SetSeriesColor, METH_VARARGS,
   (char*)"V.SetSeriesColor(string, float, float, float)\nC++: void SetSeriesColor(const char *name, double r, double g,\n    double b)\n\nSet/Clear the properties for series/columns.\n"},
  {(char*)"ClearSeriesVisibilities", PyvtkPVBoxChartRepresentation_ClearSeriesVisibilities, METH_VARARGS,
   (char*)"V.ClearSeriesVisibilities()\nC++: void ClearSeriesVisibilities()\n\n"},
  {(char*)"ClearSeriesColors", PyvtkPVBoxChartRepresentation_ClearSeriesColors, METH_VARARGS,
   (char*)"V.ClearSeriesColors()\nC++: void ClearSeriesColors()\n\n"},
  {(char*)"GetChart", PyvtkPVBoxChartRepresentation_GetChart, METH_VARARGS,
   (char*)"V.GetChart() -> vtkChartBox\nC++: vtkChartBox *GetChart()\n\nProvides access to the underlying VTK representation.\n"},
  {(char*)"SetLineThickness", PyvtkPVBoxChartRepresentation_SetLineThickness, METH_VARARGS,
   (char*)"V.SetLineThickness(int)\nC++: void SetLineThickness(int a)\n\nSets the line thickness for the plot.\n"},
  {(char*)"SetLineStyle", PyvtkPVBoxChartRepresentation_SetLineStyle, METH_VARARGS,
   (char*)"V.SetLineStyle(int)\nC++: void SetLineStyle(int a)\n\nSet the line style for the plot.\n"},
  {(char*)"SetColor", PyvtkPVBoxChartRepresentation_SetColor, METH_VARARGS,
   (char*)"V.SetColor(float, float, float)\nC++: void SetColor(double, double, double)\nV.SetColor((float, float, float))\nC++: void SetColor(double a[3])\n\n"},
  {(char*)"SetLegend", PyvtkPVBoxChartRepresentation_SetLegend, METH_VARARGS,
   (char*)"V.SetLegend(bool)\nC++: void SetLegend(bool a)\n\nSet the visibility of the legend (plot labels)\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkPVBoxChartRepresentation_StaticNew()
{
  return vtkPVBoxChartRepresentation::New();
}

PyObject *PyVTKClass_vtkPVBoxChartRepresentationNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkPVBoxChartRepresentation_StaticNew,
    PyvtkPVBoxChartRepresentation_Methods,
    "vtkPVBoxChartRepresentation", modulename,
    NULL, NULL,
    PyvtkPVBoxChartRepresentation_Doc(),
    PyVTKClass_vtkChartRepresentationNew(modulename));
  return cls;
}

const char **PyvtkPVBoxChartRepresentation_Doc()
{
  static const char *docstring[] = {
    "vtkPVBoxChartRepresentation\n\n",
    "Superclass: vtkChartRepresentation\n\n",
    "vtkPVBoxChartRepresentation is the vtkChartBox subclass for box plots\nrepresentation. It exposes API from underlying vtkChartBox.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPVBoxChartRepresentation(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPVBoxChartRepresentationNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPVBoxChartRepresentation", o) != 0)
    {
    Py_DECREF(o);
    }

}

