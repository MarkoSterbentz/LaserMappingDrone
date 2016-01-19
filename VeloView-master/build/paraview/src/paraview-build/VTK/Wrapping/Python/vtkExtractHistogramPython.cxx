// python wrapper for vtkExtractHistogram
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkExtractHistogram.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkExtractHistogram(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkExtractHistogramNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkTableAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkTableAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkTableAlgorithmNew
#endif

static const char **PyvtkExtractHistogram_Doc();


static PyObject *
PyvtkExtractHistogram_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractHistogram *op = static_cast<vtkExtractHistogram *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkExtractHistogram::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExtractHistogram_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractHistogram *op = static_cast<vtkExtractHistogram *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkExtractHistogram::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExtractHistogram_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractHistogram *op = static_cast<vtkExtractHistogram *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkExtractHistogram *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkExtractHistogram::NewInstance());

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
PyvtkExtractHistogram_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkExtractHistogram *tempr = vtkExtractHistogram::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExtractHistogram_SetComponent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractHistogram *op = static_cast<vtkExtractHistogram *>(vp);

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
      op->vtkExtractHistogram::SetComponent(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExtractHistogram_GetComponentMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetComponentMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractHistogram *op = static_cast<vtkExtractHistogram *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetComponentMinValue() :
      op->vtkExtractHistogram::GetComponentMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExtractHistogram_GetComponentMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetComponentMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractHistogram *op = static_cast<vtkExtractHistogram *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetComponentMaxValue() :
      op->vtkExtractHistogram::GetComponentMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExtractHistogram_GetComponent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractHistogram *op = static_cast<vtkExtractHistogram *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetComponent() :
      op->vtkExtractHistogram::GetComponent());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExtractHistogram_SetBinCount(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBinCount");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractHistogram *op = static_cast<vtkExtractHistogram *>(vp);

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
      op->vtkExtractHistogram::SetBinCount(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExtractHistogram_GetBinCountMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBinCountMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractHistogram *op = static_cast<vtkExtractHistogram *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetBinCountMinValue() :
      op->vtkExtractHistogram::GetBinCountMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExtractHistogram_GetBinCountMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBinCountMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractHistogram *op = static_cast<vtkExtractHistogram *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetBinCountMaxValue() :
      op->vtkExtractHistogram::GetBinCountMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExtractHistogram_GetBinCount(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBinCount");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractHistogram *op = static_cast<vtkExtractHistogram *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetBinCount() :
      op->vtkExtractHistogram::GetBinCount());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExtractHistogram_SetCustomBinRanges_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCustomBinRanges");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractHistogram *op = static_cast<vtkExtractHistogram *>(vp);

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
      op->vtkExtractHistogram::SetCustomBinRanges(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkExtractHistogram_SetCustomBinRanges_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCustomBinRanges");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractHistogram *op = static_cast<vtkExtractHistogram *>(vp);

  double temp0[2];
  const int size0 = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetCustomBinRanges(temp0);
      }
    else
      {
      op->vtkExtractHistogram::SetCustomBinRanges(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkExtractHistogram_SetCustomBinRanges(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkExtractHistogram_SetCustomBinRanges_s1(self, args);
    case 1:
      return PyvtkExtractHistogram_SetCustomBinRanges_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetCustomBinRanges");
  return NULL;
}



static PyObject *
PyvtkExtractHistogram_GetCustomBinRanges(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCustomBinRanges");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractHistogram *op = static_cast<vtkExtractHistogram *>(vp);

  int sizer = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetCustomBinRanges() :
      op->vtkExtractHistogram::GetCustomBinRanges());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkExtractHistogram_SetUseCustomBinRanges(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseCustomBinRanges");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractHistogram *op = static_cast<vtkExtractHistogram *>(vp);

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
      op->vtkExtractHistogram::SetUseCustomBinRanges(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExtractHistogram_GetUseCustomBinRanges(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseCustomBinRanges");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractHistogram *op = static_cast<vtkExtractHistogram *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetUseCustomBinRanges() :
      op->vtkExtractHistogram::GetUseCustomBinRanges());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExtractHistogram_UseCustomBinRangesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseCustomBinRangesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractHistogram *op = static_cast<vtkExtractHistogram *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->UseCustomBinRangesOn();
      }
    else
      {
      op->vtkExtractHistogram::UseCustomBinRangesOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExtractHistogram_UseCustomBinRangesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseCustomBinRangesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractHistogram *op = static_cast<vtkExtractHistogram *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->UseCustomBinRangesOff();
      }
    else
      {
      op->vtkExtractHistogram::UseCustomBinRangesOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExtractHistogram_SetCalculateAverages(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCalculateAverages");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractHistogram *op = static_cast<vtkExtractHistogram *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetCalculateAverages(temp0);
      }
    else
      {
      op->vtkExtractHistogram::SetCalculateAverages(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExtractHistogram_GetCalculateAverages(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCalculateAverages");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractHistogram *op = static_cast<vtkExtractHistogram *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetCalculateAverages() :
      op->vtkExtractHistogram::GetCalculateAverages());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExtractHistogram_CalculateAveragesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CalculateAveragesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractHistogram *op = static_cast<vtkExtractHistogram *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->CalculateAveragesOn();
      }
    else
      {
      op->vtkExtractHistogram::CalculateAveragesOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExtractHistogram_CalculateAveragesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CalculateAveragesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractHistogram *op = static_cast<vtkExtractHistogram *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->CalculateAveragesOff();
      }
    else
      {
      op->vtkExtractHistogram::CalculateAveragesOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkExtractHistogram_Methods[] = {
  {(char*)"GetClassName", PyvtkExtractHistogram_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkExtractHistogram_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkExtractHistogram_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkExtractHistogram\nC++: vtkExtractHistogram *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkExtractHistogram_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkExtractHistogram\nC++: vtkExtractHistogram *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetComponent", PyvtkExtractHistogram_SetComponent, METH_VARARGS,
   (char*)"V.SetComponent(int)\nC++: void SetComponent(int)\n\nControls which input data component should be binned, for input\narrays with more-than-one component\n"},
  {(char*)"GetComponentMinValue", PyvtkExtractHistogram_GetComponentMinValue, METH_VARARGS,
   (char*)"V.GetComponentMinValue() -> int\nC++: int GetComponentMinValue()\n\nControls which input data component should be binned, for input\narrays with more-than-one component\n"},
  {(char*)"GetComponentMaxValue", PyvtkExtractHistogram_GetComponentMaxValue, METH_VARARGS,
   (char*)"V.GetComponentMaxValue() -> int\nC++: int GetComponentMaxValue()\n\nControls which input data component should be binned, for input\narrays with more-than-one component\n"},
  {(char*)"GetComponent", PyvtkExtractHistogram_GetComponent, METH_VARARGS,
   (char*)"V.GetComponent() -> int\nC++: int GetComponent()\n\nControls which input data component should be binned, for input\narrays with more-than-one component\n"},
  {(char*)"SetBinCount", PyvtkExtractHistogram_SetBinCount, METH_VARARGS,
   (char*)"V.SetBinCount(int)\nC++: void SetBinCount(int)\n\nControls the number of bins N in the output histogram data\n"},
  {(char*)"GetBinCountMinValue", PyvtkExtractHistogram_GetBinCountMinValue, METH_VARARGS,
   (char*)"V.GetBinCountMinValue() -> int\nC++: int GetBinCountMinValue()\n\nControls the number of bins N in the output histogram data\n"},
  {(char*)"GetBinCountMaxValue", PyvtkExtractHistogram_GetBinCountMaxValue, METH_VARARGS,
   (char*)"V.GetBinCountMaxValue() -> int\nC++: int GetBinCountMaxValue()\n\nControls the number of bins N in the output histogram data\n"},
  {(char*)"GetBinCount", PyvtkExtractHistogram_GetBinCount, METH_VARARGS,
   (char*)"V.GetBinCount() -> int\nC++: int GetBinCount()\n\nControls the number of bins N in the output histogram data\n"},
  {(char*)"SetCustomBinRanges", PyvtkExtractHistogram_SetCustomBinRanges, METH_VARARGS,
   (char*)"V.SetCustomBinRanges(float, float)\nC++: void SetCustomBinRanges(double, double)\nV.SetCustomBinRanges((float, float))\nC++: void SetCustomBinRanges(double a[2])\n\n"},
  {(char*)"GetCustomBinRanges", PyvtkExtractHistogram_GetCustomBinRanges, METH_VARARGS,
   (char*)"V.GetCustomBinRanges() -> (float, float)\nC++: double *GetCustomBinRanges()\n\n"},
  {(char*)"SetUseCustomBinRanges", PyvtkExtractHistogram_SetUseCustomBinRanges, METH_VARARGS,
   (char*)"V.SetUseCustomBinRanges(bool)\nC++: void SetUseCustomBinRanges(bool a)\n\nWhen set to true, CustomBinRanges will  be used instead of using\nthe full range for the selected array. By default, set to false.\n"},
  {(char*)"GetUseCustomBinRanges", PyvtkExtractHistogram_GetUseCustomBinRanges, METH_VARARGS,
   (char*)"V.GetUseCustomBinRanges() -> bool\nC++: bool GetUseCustomBinRanges()\n\nWhen set to true, CustomBinRanges will  be used instead of using\nthe full range for the selected array. By default, set to false.\n"},
  {(char*)"UseCustomBinRangesOn", PyvtkExtractHistogram_UseCustomBinRangesOn, METH_VARARGS,
   (char*)"V.UseCustomBinRangesOn()\nC++: void UseCustomBinRangesOn()\n\nWhen set to true, CustomBinRanges will  be used instead of using\nthe full range for the selected array. By default, set to false.\n"},
  {(char*)"UseCustomBinRangesOff", PyvtkExtractHistogram_UseCustomBinRangesOff, METH_VARARGS,
   (char*)"V.UseCustomBinRangesOff()\nC++: void UseCustomBinRangesOff()\n\nWhen set to true, CustomBinRanges will  be used instead of using\nthe full range for the selected array. By default, set to false.\n"},
  {(char*)"SetCalculateAverages", PyvtkExtractHistogram_SetCalculateAverages, METH_VARARGS,
   (char*)"V.SetCalculateAverages(int)\nC++: void SetCalculateAverages(int a)\n\nThis option controls whether the algorithm calculates averages of\nvariables other than the primary variable that fall into each\nbin. False by default.\n"},
  {(char*)"GetCalculateAverages", PyvtkExtractHistogram_GetCalculateAverages, METH_VARARGS,
   (char*)"V.GetCalculateAverages() -> int\nC++: int GetCalculateAverages()\n\nThis option controls whether the algorithm calculates averages of\nvariables other than the primary variable that fall into each\nbin. False by default.\n"},
  {(char*)"CalculateAveragesOn", PyvtkExtractHistogram_CalculateAveragesOn, METH_VARARGS,
   (char*)"V.CalculateAveragesOn()\nC++: void CalculateAveragesOn()\n\nThis option controls whether the algorithm calculates averages of\nvariables other than the primary variable that fall into each\nbin. False by default.\n"},
  {(char*)"CalculateAveragesOff", PyvtkExtractHistogram_CalculateAveragesOff, METH_VARARGS,
   (char*)"V.CalculateAveragesOff()\nC++: void CalculateAveragesOff()\n\nThis option controls whether the algorithm calculates averages of\nvariables other than the primary variable that fall into each\nbin. False by default.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkExtractHistogram_StaticNew()
{
  return vtkExtractHistogram::New();
}

PyObject *PyVTKClass_vtkExtractHistogramNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkExtractHistogram_StaticNew,
    PyvtkExtractHistogram_Methods,
    "vtkExtractHistogram", modulename,
    NULL, NULL,
    PyvtkExtractHistogram_Doc(),
    PyVTKClass_vtkTableAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkExtractHistogram_Doc()
{
  static const char *docstring[] = {
    "vtkExtractHistogram - Extract histogram data (binned values) from any \n\n",
    "Superclass: vtkTableAlgorithm\n\n",
    "vtkExtractHistogram accepts any vtkDataSet as input and produces a\nvtkPolyData containing histogram data as output.  The output\nvtkPolyData will have contain a vtkDoubleArray named \"bin_extents\"\nwhich contains the boundaries between each histogram bin, and a\nvtkUnsignedLongArray named \"bin_values\" which will contain the value\nfor each bin.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkExtractHistogram(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkExtractHistogramNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkExtractHistogram", o) != 0)
    {
    Py_DECREF(o);
    }

}

