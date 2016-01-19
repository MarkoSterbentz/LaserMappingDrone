// python wrapper for vtkExtractScatterPlot
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkExtractScatterPlot.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkExtractScatterPlot(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkExtractScatterPlotNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkPolyDataAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
#endif

static const char **PyvtkExtractScatterPlot_Doc();


static PyObject *
PyvtkExtractScatterPlot_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractScatterPlot *op = static_cast<vtkExtractScatterPlot *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkExtractScatterPlot::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExtractScatterPlot_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractScatterPlot *op = static_cast<vtkExtractScatterPlot *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkExtractScatterPlot::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExtractScatterPlot_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractScatterPlot *op = static_cast<vtkExtractScatterPlot *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkExtractScatterPlot *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkExtractScatterPlot::NewInstance());

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
PyvtkExtractScatterPlot_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkExtractScatterPlot *tempr = vtkExtractScatterPlot::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExtractScatterPlot_SetXComponent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetXComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractScatterPlot *op = static_cast<vtkExtractScatterPlot *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetXComponent(temp0);
      }
    else
      {
      op->vtkExtractScatterPlot::SetXComponent(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExtractScatterPlot_GetXComponentMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetXComponentMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractScatterPlot *op = static_cast<vtkExtractScatterPlot *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetXComponentMinValue() :
      op->vtkExtractScatterPlot::GetXComponentMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExtractScatterPlot_GetXComponentMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetXComponentMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractScatterPlot *op = static_cast<vtkExtractScatterPlot *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetXComponentMaxValue() :
      op->vtkExtractScatterPlot::GetXComponentMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExtractScatterPlot_GetXComponent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetXComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractScatterPlot *op = static_cast<vtkExtractScatterPlot *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetXComponent() :
      op->vtkExtractScatterPlot::GetXComponent());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExtractScatterPlot_SetYComponent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetYComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractScatterPlot *op = static_cast<vtkExtractScatterPlot *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetYComponent(temp0);
      }
    else
      {
      op->vtkExtractScatterPlot::SetYComponent(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExtractScatterPlot_GetYComponentMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetYComponentMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractScatterPlot *op = static_cast<vtkExtractScatterPlot *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetYComponentMinValue() :
      op->vtkExtractScatterPlot::GetYComponentMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExtractScatterPlot_GetYComponentMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetYComponentMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractScatterPlot *op = static_cast<vtkExtractScatterPlot *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetYComponentMaxValue() :
      op->vtkExtractScatterPlot::GetYComponentMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExtractScatterPlot_GetYComponent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetYComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractScatterPlot *op = static_cast<vtkExtractScatterPlot *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetYComponent() :
      op->vtkExtractScatterPlot::GetYComponent());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExtractScatterPlot_SetXBinCount(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetXBinCount");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractScatterPlot *op = static_cast<vtkExtractScatterPlot *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetXBinCount(temp0);
      }
    else
      {
      op->vtkExtractScatterPlot::SetXBinCount(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExtractScatterPlot_GetXBinCountMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetXBinCountMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractScatterPlot *op = static_cast<vtkExtractScatterPlot *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetXBinCountMinValue() :
      op->vtkExtractScatterPlot::GetXBinCountMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExtractScatterPlot_GetXBinCountMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetXBinCountMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractScatterPlot *op = static_cast<vtkExtractScatterPlot *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetXBinCountMaxValue() :
      op->vtkExtractScatterPlot::GetXBinCountMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExtractScatterPlot_GetXBinCount(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetXBinCount");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractScatterPlot *op = static_cast<vtkExtractScatterPlot *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetXBinCount() :
      op->vtkExtractScatterPlot::GetXBinCount());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExtractScatterPlot_SetYBinCount(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetYBinCount");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractScatterPlot *op = static_cast<vtkExtractScatterPlot *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetYBinCount(temp0);
      }
    else
      {
      op->vtkExtractScatterPlot::SetYBinCount(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExtractScatterPlot_GetYBinCountMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetYBinCountMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractScatterPlot *op = static_cast<vtkExtractScatterPlot *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetYBinCountMinValue() :
      op->vtkExtractScatterPlot::GetYBinCountMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExtractScatterPlot_GetYBinCountMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetYBinCountMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractScatterPlot *op = static_cast<vtkExtractScatterPlot *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetYBinCountMaxValue() :
      op->vtkExtractScatterPlot::GetYBinCountMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExtractScatterPlot_GetYBinCount(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetYBinCount");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractScatterPlot *op = static_cast<vtkExtractScatterPlot *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetYBinCount() :
      op->vtkExtractScatterPlot::GetYBinCount());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkExtractScatterPlot_Methods[] = {
  {(char*)"GetClassName", PyvtkExtractScatterPlot_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkExtractScatterPlot_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkExtractScatterPlot_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkExtractScatterPlot\nC++: vtkExtractScatterPlot *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkExtractScatterPlot_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkExtractScatterPlot\nC++: vtkExtractScatterPlot *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetXComponent", PyvtkExtractScatterPlot_SetXComponent, METH_VARARGS,
   (char*)"V.SetXComponent(int)\nC++: void SetXComponent(int)\n\nControls which input data component should be binned, for input\narrays with more-than-one component\n"},
  {(char*)"GetXComponentMinValue", PyvtkExtractScatterPlot_GetXComponentMinValue, METH_VARARGS,
   (char*)"V.GetXComponentMinValue() -> int\nC++: int GetXComponentMinValue()\n\nControls which input data component should be binned, for input\narrays with more-than-one component\n"},
  {(char*)"GetXComponentMaxValue", PyvtkExtractScatterPlot_GetXComponentMaxValue, METH_VARARGS,
   (char*)"V.GetXComponentMaxValue() -> int\nC++: int GetXComponentMaxValue()\n\nControls which input data component should be binned, for input\narrays with more-than-one component\n"},
  {(char*)"GetXComponent", PyvtkExtractScatterPlot_GetXComponent, METH_VARARGS,
   (char*)"V.GetXComponent() -> int\nC++: int GetXComponent()\n\nControls which input data component should be binned, for input\narrays with more-than-one component\n"},
  {(char*)"SetYComponent", PyvtkExtractScatterPlot_SetYComponent, METH_VARARGS,
   (char*)"V.SetYComponent(int)\nC++: void SetYComponent(int)\n\nControls which input data component should be binned, for input\narrays with more-than-one component\n"},
  {(char*)"GetYComponentMinValue", PyvtkExtractScatterPlot_GetYComponentMinValue, METH_VARARGS,
   (char*)"V.GetYComponentMinValue() -> int\nC++: int GetYComponentMinValue()\n\nControls which input data component should be binned, for input\narrays with more-than-one component\n"},
  {(char*)"GetYComponentMaxValue", PyvtkExtractScatterPlot_GetYComponentMaxValue, METH_VARARGS,
   (char*)"V.GetYComponentMaxValue() -> int\nC++: int GetYComponentMaxValue()\n\nControls which input data component should be binned, for input\narrays with more-than-one component\n"},
  {(char*)"GetYComponent", PyvtkExtractScatterPlot_GetYComponent, METH_VARARGS,
   (char*)"V.GetYComponent() -> int\nC++: int GetYComponent()\n\nControls which input data component should be binned, for input\narrays with more-than-one component\n"},
  {(char*)"SetXBinCount", PyvtkExtractScatterPlot_SetXBinCount, METH_VARARGS,
   (char*)"V.SetXBinCount(int)\nC++: void SetXBinCount(int)\n\nControls the number of bins along the X axis in the output\nhistogram data\n"},
  {(char*)"GetXBinCountMinValue", PyvtkExtractScatterPlot_GetXBinCountMinValue, METH_VARARGS,
   (char*)"V.GetXBinCountMinValue() -> int\nC++: int GetXBinCountMinValue()\n\nControls the number of bins along the X axis in the output\nhistogram data\n"},
  {(char*)"GetXBinCountMaxValue", PyvtkExtractScatterPlot_GetXBinCountMaxValue, METH_VARARGS,
   (char*)"V.GetXBinCountMaxValue() -> int\nC++: int GetXBinCountMaxValue()\n\nControls the number of bins along the X axis in the output\nhistogram data\n"},
  {(char*)"GetXBinCount", PyvtkExtractScatterPlot_GetXBinCount, METH_VARARGS,
   (char*)"V.GetXBinCount() -> int\nC++: int GetXBinCount()\n\nControls the number of bins along the X axis in the output\nhistogram data\n"},
  {(char*)"SetYBinCount", PyvtkExtractScatterPlot_SetYBinCount, METH_VARARGS,
   (char*)"V.SetYBinCount(int)\nC++: void SetYBinCount(int)\n\nControls the number of bins along the Y axis in the output\nhistogram data\n"},
  {(char*)"GetYBinCountMinValue", PyvtkExtractScatterPlot_GetYBinCountMinValue, METH_VARARGS,
   (char*)"V.GetYBinCountMinValue() -> int\nC++: int GetYBinCountMinValue()\n\nControls the number of bins along the Y axis in the output\nhistogram data\n"},
  {(char*)"GetYBinCountMaxValue", PyvtkExtractScatterPlot_GetYBinCountMaxValue, METH_VARARGS,
   (char*)"V.GetYBinCountMaxValue() -> int\nC++: int GetYBinCountMaxValue()\n\nControls the number of bins along the Y axis in the output\nhistogram data\n"},
  {(char*)"GetYBinCount", PyvtkExtractScatterPlot_GetYBinCount, METH_VARARGS,
   (char*)"V.GetYBinCount() -> int\nC++: int GetYBinCount()\n\nControls the number of bins along the Y axis in the output\nhistogram data\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkExtractScatterPlot_StaticNew()
{
  return vtkExtractScatterPlot::New();
}

PyObject *PyVTKClass_vtkExtractScatterPlotNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkExtractScatterPlot_StaticNew,
    PyvtkExtractScatterPlot_Methods,
    "vtkExtractScatterPlot", modulename,
    NULL, NULL,
    PyvtkExtractScatterPlot_Doc(),
    PyVTKClass_vtkPolyDataAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkExtractScatterPlot_Doc()
{
  static const char *docstring[] = {
    "vtkExtractScatterPlot - Extract a scatter plot (two-dimensional\nhistogram) from any dataset\n\n",
    "Superclass: vtkPolyDataAlgorithm\n\n",
    "\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkExtractScatterPlot(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkExtractScatterPlotNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkExtractScatterPlot", o) != 0)
    {
    Py_DECREF(o);
    }

}

