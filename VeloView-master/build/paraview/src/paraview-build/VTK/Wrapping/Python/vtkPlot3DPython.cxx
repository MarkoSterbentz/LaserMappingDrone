// python wrapper for vtkPlot3D
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkStdString.h"
#include "vtkPlot3D.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkPlot3D(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkPlot3DNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkContextItemNew
extern "C" { PyObject *PyVTKClass_vtkContextItemNew(const char *); }
#define DECLARED_PyVTKClass_vtkContextItemNew
#endif

static const char **PyvtkPlot3D_Doc();


static PyObject *
PyvtkPlot3D_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlot3D *op = static_cast<vtkPlot3D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkPlot3D::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPlot3D_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlot3D *op = static_cast<vtkPlot3D *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPlot3D::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPlot3D_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlot3D *op = static_cast<vtkPlot3D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPlot3D *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPlot3D::NewInstance());

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
PyvtkPlot3D_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkPlot3D *tempr = vtkPlot3D::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPlot3D_SetPen(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPen");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlot3D *op = static_cast<vtkPlot3D *>(vp);

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
      op->vtkPlot3D::SetPen(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPlot3D_GetPen(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPen");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlot3D *op = static_cast<vtkPlot3D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPen *tempr = (ap.IsBound() ?
      op->GetPen() :
      op->vtkPlot3D::GetPen());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPlot3D_SetSelectionPen(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSelectionPen");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlot3D *op = static_cast<vtkPlot3D *>(vp);

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
      op->vtkPlot3D::SetSelectionPen(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPlot3D_GetSelectionPen(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelectionPen");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlot3D *op = static_cast<vtkPlot3D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPen *tempr = (ap.IsBound() ?
      op->GetSelectionPen() :
      op->vtkPlot3D::GetSelectionPen());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPlot3D_SetInputData_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlot3D *op = static_cast<vtkPlot3D *>(vp);

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
      op->vtkPlot3D::SetInputData(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkPlot3D_SetInputData_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlot3D *op = static_cast<vtkPlot3D *>(vp);

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
      op->vtkPlot3D::SetInputData(temp0, temp1, temp2, temp3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkPlot3D_SetInputData_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlot3D *op = static_cast<vtkPlot3D *>(vp);

  vtkTable *temp0 = NULL;
  vtkStdString temp1;
  vtkStdString temp2;
  vtkStdString temp3;
  vtkStdString temp4;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(5) &&
      ap.GetVTKObject(temp0, "vtkTable") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4))
    {
    if (ap.IsBound())
      {
      op->SetInputData(temp0, temp1, temp2, temp3, temp4);
      }
    else
      {
      op->vtkPlot3D::SetInputData(temp0, temp1, temp2, temp3, temp4);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkPlot3D_SetInputData_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlot3D *op = static_cast<vtkPlot3D *>(vp);

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
      op->vtkPlot3D::SetInputData(temp0, temp1, temp2, temp3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkPlot3D_SetInputData_Methods[] = {
  {NULL, PyvtkPlot3D_SetInputData_s2, METH_VARARGS,
   (char*)"@Osss *vtkTable"},
  {NULL, PyvtkPlot3D_SetInputData_s4, METH_VARARGS,
   (char*)"@OLLL *vtkTable"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkPlot3D_SetInputData(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkPlot3D_SetInputData_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkPlot3D_SetInputData_s1(self, args);
    case 5:
      return PyvtkPlot3D_SetInputData_s3(self, args);
    case 4:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetInputData");
  return NULL;
}



static PyObject *
PyvtkPlot3D_SetColors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlot3D *op = static_cast<vtkPlot3D *>(vp);

  vtkDataArray *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataArray"))
    {
    if (ap.IsBound())
      {
      op->SetColors(temp0);
      }
    else
      {
      op->vtkPlot3D::SetColors(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPlot3D_GetChart(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetChart");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlot3D *op = static_cast<vtkPlot3D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkChartXYZ *tempr = (ap.IsBound() ?
      op->GetChart() :
      op->vtkPlot3D::GetChart());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPlot3D_SetChart(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetChart");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlot3D *op = static_cast<vtkPlot3D *>(vp);

  vtkChartXYZ *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkChartXYZ"))
    {
    if (ap.IsBound())
      {
      op->SetChart(temp0);
      }
    else
      {
      op->vtkPlot3D::SetChart(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPlot3D_GetXAxisLabel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetXAxisLabel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlot3D *op = static_cast<vtkPlot3D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    std::string tempr = (ap.IsBound() ?
      op->GetXAxisLabel() :
      op->vtkPlot3D::GetXAxisLabel());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPlot3D_GetYAxisLabel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetYAxisLabel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlot3D *op = static_cast<vtkPlot3D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    std::string tempr = (ap.IsBound() ?
      op->GetYAxisLabel() :
      op->vtkPlot3D::GetYAxisLabel());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPlot3D_GetZAxisLabel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetZAxisLabel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlot3D *op = static_cast<vtkPlot3D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    std::string tempr = (ap.IsBound() ?
      op->GetZAxisLabel() :
      op->vtkPlot3D::GetZAxisLabel());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPlot3D_SetSelection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSelection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlot3D *op = static_cast<vtkPlot3D *>(vp);

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
      op->vtkPlot3D::SetSelection(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPlot3D_GetSelection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlot3D *op = static_cast<vtkPlot3D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkIdTypeArray *tempr = (ap.IsBound() ?
      op->GetSelection() :
      op->vtkPlot3D::GetSelection());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkPlot3D_Methods[] = {
  {(char*)"GetClassName", PyvtkPlot3D_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkPlot3D_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkPlot3D_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkPlot3D\nC++: vtkPlot3D *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkPlot3D_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkPlot3D\nC++: vtkPlot3D *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetPen", PyvtkPlot3D_SetPen, METH_VARARGS,
   (char*)"V.SetPen(vtkPen)\nC++: void SetPen(vtkPen *pen)\n\nSet/get the vtkPen object that controls how this plot draws\n(out)lines.\n"},
  {(char*)"GetPen", PyvtkPlot3D_GetPen, METH_VARARGS,
   (char*)"V.GetPen() -> vtkPen\nC++: vtkPen *GetPen()\n\nSet/get the vtkPen object that controls how this plot draws\n(out)lines.\n"},
  {(char*)"SetSelectionPen", PyvtkPlot3D_SetSelectionPen, METH_VARARGS,
   (char*)"V.SetSelectionPen(vtkPen)\nC++: void SetSelectionPen(vtkPen *pen)\n\nSet/get the vtkPen object that controls how this plot draws\n(out)lines.\n"},
  {(char*)"GetSelectionPen", PyvtkPlot3D_GetSelectionPen, METH_VARARGS,
   (char*)"V.GetSelectionPen() -> vtkPen\nC++: vtkPen *GetSelectionPen()\n\nSet/get the vtkPen object that controls how this plot draws\n(out)lines.\n"},
  {(char*)"SetInputData", PyvtkPlot3D_SetInputData, METH_VARARGS,
   (char*)"V.SetInputData(vtkTable)\nC++: virtual void SetInputData(vtkTable *input)\nV.SetInputData(vtkTable, string, string, string)\nC++: virtual void SetInputData(vtkTable *input,\n    const vtkStdString &xName, const vtkStdString &yName,\n    const vtkStdString &zName)\nV.SetInputData(vtkTable, string, string, string, string)\nC++: virtual void SetInputData(vtkTable *input,\n    const vtkStdString &xName, const vtkStdString &yName,\n    const vtkStdString &zName, const vtkStdString &colorName)\nV.SetInputData(vtkTable, int, int, int)\nC++: virtual void SetInputData(vtkTable *input, vtkIdType xColumn,\n     vtkIdType yColumn, vtkIdType zColumn)\n\nSet the input to the plot.\n"},
  {(char*)"SetColors", PyvtkPlot3D_SetColors, METH_VARARGS,
   (char*)"V.SetColors(vtkDataArray)\nC++: virtual void SetColors(vtkDataArray *colorArr)\n\nSet the color of each point in the plot.  The input is a single\ncomponent scalar array.  The values of this array will be passed\nthrough a lookup table to generate the color for each data point\nin the plot.\n"},
  {(char*)"GetChart", PyvtkPlot3D_GetChart, METH_VARARGS,
   (char*)"V.GetChart() -> vtkChartXYZ\nC++: vtkChartXYZ *GetChart()\n\nGet/set the chart for this plot.\n"},
  {(char*)"SetChart", PyvtkPlot3D_SetChart, METH_VARARGS,
   (char*)"V.SetChart(vtkChartXYZ)\nC++: virtual void SetChart(vtkChartXYZ *chart)\n\nGet/set the chart for this plot.\n"},
  {(char*)"GetXAxisLabel", PyvtkPlot3D_GetXAxisLabel, METH_VARARGS,
   (char*)"V.GetXAxisLabel() -> string\nC++: std::string GetXAxisLabel()\n\nGet the label for the X axis.\n"},
  {(char*)"GetYAxisLabel", PyvtkPlot3D_GetYAxisLabel, METH_VARARGS,
   (char*)"V.GetYAxisLabel() -> string\nC++: std::string GetYAxisLabel()\n\nGet the label for the Y axis.\n"},
  {(char*)"GetZAxisLabel", PyvtkPlot3D_GetZAxisLabel, METH_VARARGS,
   (char*)"V.GetZAxisLabel() -> string\nC++: std::string GetZAxisLabel()\n\nGet the label for the Z axis.\n"},
  {(char*)"SetSelection", PyvtkPlot3D_SetSelection, METH_VARARGS,
   (char*)"V.SetSelection(vtkIdTypeArray)\nC++: virtual void SetSelection(vtkIdTypeArray *id)\n\nSet/get the selection array for the plot.\n"},
  {(char*)"GetSelection", PyvtkPlot3D_GetSelection, METH_VARARGS,
   (char*)"V.GetSelection() -> vtkIdTypeArray\nC++: virtual vtkIdTypeArray *GetSelection()\n\nSet/get the selection array for the plot.\n"},
  {NULL, NULL, 0, NULL}
};

PyObject *PyVTKClass_vtkPlot3DNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(NULL,
    PyvtkPlot3D_Methods,
    "vtkPlot3D", modulename,
    NULL, NULL,
    PyvtkPlot3D_Doc(),
    PyVTKClass_vtkContextItemNew(modulename));
  return cls;
}

const char **PyvtkPlot3D_Doc()
{
  static const char *docstring[] = {
    "vtkPlot3D - Abstract class for 3D plots.\n\n",
    "Superclass: vtkContextItem\n\n",
    "The base class for all plot types used in vtkChart derived charts.\n\nSee Also:\n\nvtkPlot3DPoints vtkPlot3DLine vtkPlot3DBar vtkChart vtkChartXY\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPlot3D(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPlot3DNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPlot3D", o) != 0)
    {
    Py_DECREF(o);
    }

}

