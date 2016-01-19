// python wrapper for vtkPVHistogramChartRepresentation
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkInformationVector.h"
#include "vtkPVHistogramChartRepresentation.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkPVHistogramChartRepresentation(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkPVHistogramChartRepresentationNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkXYChartRepresentationNew
extern "C" { PyObject *PyVTKClass_vtkXYChartRepresentationNew(const char *); }
#define DECLARED_PyVTKClass_vtkXYChartRepresentationNew
#endif

static const char **PyvtkPVHistogramChartRepresentation_Doc();


static PyObject *
PyvtkPVHistogramChartRepresentation_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVHistogramChartRepresentation *op = static_cast<vtkPVHistogramChartRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkPVHistogramChartRepresentation::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVHistogramChartRepresentation_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVHistogramChartRepresentation *op = static_cast<vtkPVHistogramChartRepresentation *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPVHistogramChartRepresentation::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVHistogramChartRepresentation_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVHistogramChartRepresentation *op = static_cast<vtkPVHistogramChartRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPVHistogramChartRepresentation *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPVHistogramChartRepresentation::NewInstance());

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
PyvtkPVHistogramChartRepresentation_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkPVHistogramChartRepresentation *tempr = vtkPVHistogramChartRepresentation::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVHistogramChartRepresentation_SetComponent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVHistogramChartRepresentation *op = static_cast<vtkPVHistogramChartRepresentation *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetComponent(temp0);
      }
    else
      {
      op->vtkPVHistogramChartRepresentation::SetComponent(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVHistogramChartRepresentation_GetComponent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVHistogramChartRepresentation *op = static_cast<vtkPVHistogramChartRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetComponent() :
      op->vtkPVHistogramChartRepresentation::GetComponent());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVHistogramChartRepresentation_SetBinCount(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBinCount");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVHistogramChartRepresentation *op = static_cast<vtkPVHistogramChartRepresentation *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetBinCount(temp0);
      }
    else
      {
      op->vtkPVHistogramChartRepresentation::SetBinCount(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVHistogramChartRepresentation_GetBinCount(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBinCount");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVHistogramChartRepresentation *op = static_cast<vtkPVHistogramChartRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetBinCount() :
      op->vtkPVHistogramChartRepresentation::GetBinCount());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVHistogramChartRepresentation_SetCustomBinRanges(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCustomBinRanges");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVHistogramChartRepresentation *op = static_cast<vtkPVHistogramChartRepresentation *>(vp);

  double temp0;
  double temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetCustomBinRanges(temp0, temp1);
      }
    else
      {
      op->vtkPVHistogramChartRepresentation::SetCustomBinRanges(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVHistogramChartRepresentation_GetCustomBinRanges(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCustomBinRanges");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVHistogramChartRepresentation *op = static_cast<vtkPVHistogramChartRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetCustomBinRanges() :
      op->vtkPVHistogramChartRepresentation::GetCustomBinRanges());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVHistogramChartRepresentation_SetUseCustomBinRanges(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseCustomBinRanges");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVHistogramChartRepresentation *op = static_cast<vtkPVHistogramChartRepresentation *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetUseCustomBinRanges(temp0);
      }
    else
      {
      op->vtkPVHistogramChartRepresentation::SetUseCustomBinRanges(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVHistogramChartRepresentation_GetUseCustomBinRanges(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseCustomBinRanges");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVHistogramChartRepresentation *op = static_cast<vtkPVHistogramChartRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetUseCustomBinRanges() :
      op->vtkPVHistogramChartRepresentation::GetUseCustomBinRanges());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVHistogramChartRepresentation_SetHistogramColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHistogramColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVHistogramChartRepresentation *op = static_cast<vtkPVHistogramChartRepresentation *>(vp);

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
      op->vtkPVHistogramChartRepresentation::SetHistogramColor(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVHistogramChartRepresentation_SetUseColorMapping(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseColorMapping");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVHistogramChartRepresentation *op = static_cast<vtkPVHistogramChartRepresentation *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetUseColorMapping(temp0);
      }
    else
      {
      op->vtkPVHistogramChartRepresentation::SetUseColorMapping(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVHistogramChartRepresentation_SetLookupTable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLookupTable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVHistogramChartRepresentation *op = static_cast<vtkPVHistogramChartRepresentation *>(vp);

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
      op->vtkPVHistogramChartRepresentation::SetLookupTable(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVHistogramChartRepresentation_SetHistogramLineStyle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHistogramLineStyle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVHistogramChartRepresentation *op = static_cast<vtkPVHistogramChartRepresentation *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetHistogramLineStyle(temp0);
      }
    else
      {
      op->vtkPVHistogramChartRepresentation::SetHistogramLineStyle(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVHistogramChartRepresentation_SetInputArrayToProcess(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputArrayToProcess");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVHistogramChartRepresentation *op = static_cast<vtkPVHistogramChartRepresentation *>(vp);

  int temp0;
  int temp1;
  int temp2;
  int temp3;
  char *temp4 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(5) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4))
    {
    if (ap.IsBound())
      {
      op->SetInputArrayToProcess(temp0, temp1, temp2, temp3, temp4);
      }
    else
      {
      op->vtkPVHistogramChartRepresentation::SetInputArrayToProcess(temp0, temp1, temp2, temp3, temp4);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVHistogramChartRepresentation_MapSelectionToInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MapSelectionToInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVHistogramChartRepresentation *op = static_cast<vtkPVHistogramChartRepresentation *>(vp);

  vtkSelection *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSelection"))
    {
    bool tempr = (ap.IsBound() ?
      op->MapSelectionToInput(temp0) :
      op->vtkPVHistogramChartRepresentation::MapSelectionToInput(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVHistogramChartRepresentation_MapSelectionToView(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MapSelectionToView");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVHistogramChartRepresentation *op = static_cast<vtkPVHistogramChartRepresentation *>(vp);

  vtkSelection *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSelection"))
    {
    bool tempr = (ap.IsBound() ?
      op->MapSelectionToView(temp0) :
      op->vtkPVHistogramChartRepresentation::MapSelectionToView(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkPVHistogramChartRepresentation_Methods[] = {
  {(char*)"GetClassName", PyvtkPVHistogramChartRepresentation_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkPVHistogramChartRepresentation_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkPVHistogramChartRepresentation_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkPVHistogramChartRepresentation\nC++: vtkPVHistogramChartRepresentation *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkPVHistogramChartRepresentation_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkPVHistogramChartRepresentation\nC++: vtkPVHistogramChartRepresentation *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetComponent", PyvtkPVHistogramChartRepresentation_SetComponent, METH_VARARGS,
   (char*)"V.SetComponent(int)\nC++: void SetComponent(int)\n\nControls which input data component should be binned, for input\narrays with more-than-one component\n"},
  {(char*)"GetComponent", PyvtkPVHistogramChartRepresentation_GetComponent, METH_VARARGS,
   (char*)"V.GetComponent() -> int\nC++: int GetComponent()\n\nControls which input data component should be binned, for input\narrays with more-than-one component\n"},
  {(char*)"SetBinCount", PyvtkPVHistogramChartRepresentation_SetBinCount, METH_VARARGS,
   (char*)"V.SetBinCount(int)\nC++: void SetBinCount(int)\n\nControls the number of bins N in the output histogram data\n"},
  {(char*)"GetBinCount", PyvtkPVHistogramChartRepresentation_GetBinCount, METH_VARARGS,
   (char*)"V.GetBinCount() -> int\nC++: int GetBinCount()\n\nControls the number of bins N in the output histogram data\n"},
  {(char*)"SetCustomBinRanges", PyvtkPVHistogramChartRepresentation_SetCustomBinRanges, METH_VARARGS,
   (char*)"V.SetCustomBinRanges(float, float)\nC++: void SetCustomBinRanges(double min, double max)\n\nGet/Set custom bin ranges to use. These are used only when\nUseCustomBinRanges is set to true.\n"},
  {(char*)"GetCustomBinRanges", PyvtkPVHistogramChartRepresentation_GetCustomBinRanges, METH_VARARGS,
   (char*)"V.GetCustomBinRanges() -> (float, ...)\nC++: double *GetCustomBinRanges()\n\nGet/Set custom bin ranges to use. These are used only when\nUseCustomBinRanges is set to true.\n"},
  {(char*)"SetUseCustomBinRanges", PyvtkPVHistogramChartRepresentation_SetUseCustomBinRanges, METH_VARARGS,
   (char*)"V.SetUseCustomBinRanges(bool)\nC++: void SetUseCustomBinRanges(bool)\n\nWhen set to true, CustomBinRanges will  be used instead of using\nthe full range for the selected array. By default, set to false.\n"},
  {(char*)"GetUseCustomBinRanges", PyvtkPVHistogramChartRepresentation_GetUseCustomBinRanges, METH_VARARGS,
   (char*)"V.GetUseCustomBinRanges() -> bool\nC++: bool GetUseCustomBinRanges()\n\nWhen set to true, CustomBinRanges will  be used instead of using\nthe full range for the selected array. By default, set to false.\n"},
  {(char*)"SetHistogramColor", PyvtkPVHistogramChartRepresentation_SetHistogramColor, METH_VARARGS,
   (char*)"V.SetHistogramColor(float, float, float)\nC++: void SetHistogramColor(double r, double g, double b)\n\nSets the color for the histograms.\n"},
  {(char*)"SetUseColorMapping", PyvtkPVHistogramChartRepresentation_SetUseColorMapping, METH_VARARGS,
   (char*)"V.SetUseColorMapping(bool)\nC++: void SetUseColorMapping(bool colorMapping)\n\n"},
  {(char*)"SetLookupTable", PyvtkPVHistogramChartRepresentation_SetLookupTable, METH_VARARGS,
   (char*)"V.SetLookupTable(vtkScalarsToColors)\nC++: void SetLookupTable(vtkScalarsToColors *lut)\n\n"},
  {(char*)"SetHistogramLineStyle", PyvtkPVHistogramChartRepresentation_SetHistogramLineStyle, METH_VARARGS,
   (char*)"V.SetHistogramLineStyle(int)\nC++: void SetHistogramLineStyle(int style)\n\nSet the line style for the histogram.\n"},
  {(char*)"SetInputArrayToProcess", PyvtkPVHistogramChartRepresentation_SetInputArrayToProcess, METH_VARARGS,
   (char*)"V.SetInputArrayToProcess(int, int, int, int, string)\nC++: virtual void SetInputArrayToProcess(int idx, int port,\n    int connection, int fieldAssociation, const char *name)\n\nOverload the vtkAlgorithm method to update after the change\n"},
  {(char*)"MapSelectionToInput", PyvtkPVHistogramChartRepresentation_MapSelectionToInput, METH_VARARGS,
   (char*)"V.MapSelectionToInput(vtkSelection) -> bool\nC++: virtual bool MapSelectionToInput(vtkSelection *)\n\nOverridden to transform id-based selection produced by the\nhistogram view to a threshold-based selection.\n"},
  {(char*)"MapSelectionToView", PyvtkPVHistogramChartRepresentation_MapSelectionToView, METH_VARARGS,
   (char*)"V.MapSelectionToView(vtkSelection) -> bool\nC++: virtual bool MapSelectionToView(vtkSelection *sel)\n\nInverse of MapSelectionToInput().\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkPVHistogramChartRepresentation_StaticNew()
{
  return vtkPVHistogramChartRepresentation::New();
}

PyObject *PyVTKClass_vtkPVHistogramChartRepresentationNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkPVHistogramChartRepresentation_StaticNew,
    PyvtkPVHistogramChartRepresentation_Methods,
    "vtkPVHistogramChartRepresentation", modulename,
    NULL, NULL,
    PyvtkPVHistogramChartRepresentation_Doc(),
    PyVTKClass_vtkXYChartRepresentationNew(modulename));
  return cls;
}

const char **PyvtkPVHistogramChartRepresentation_Doc()
{
  static const char *docstring[] = {
    "vtkPVHistogramChartRepresentation\n\n",
    "Superclass: vtkXYChartRepresentation\n\n",
    "\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPVHistogramChartRepresentation(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPVHistogramChartRepresentationNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPVHistogramChartRepresentation", o) != 0)
    {
    Py_DECREF(o);
    }

}

