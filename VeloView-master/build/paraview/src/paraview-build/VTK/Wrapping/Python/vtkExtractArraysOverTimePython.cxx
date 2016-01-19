// python wrapper for vtkExtractArraysOverTime
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkExtractArraysOverTime.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkExtractArraysOverTime(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkExtractArraysOverTimeNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkMultiBlockDataSetAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkMultiBlockDataSetAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkMultiBlockDataSetAlgorithmNew
#endif

static const char **PyvtkExtractArraysOverTime_Doc();


static PyObject *
PyvtkExtractArraysOverTime_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractArraysOverTime *op = static_cast<vtkExtractArraysOverTime *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkExtractArraysOverTime::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExtractArraysOverTime_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractArraysOverTime *op = static_cast<vtkExtractArraysOverTime *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkExtractArraysOverTime::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExtractArraysOverTime_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractArraysOverTime *op = static_cast<vtkExtractArraysOverTime *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkExtractArraysOverTime *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkExtractArraysOverTime::NewInstance());

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
PyvtkExtractArraysOverTime_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkExtractArraysOverTime *tempr = vtkExtractArraysOverTime::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExtractArraysOverTime_GetNumberOfTimeSteps(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfTimeSteps");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractArraysOverTime *op = static_cast<vtkExtractArraysOverTime *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfTimeSteps() :
      op->vtkExtractArraysOverTime::GetNumberOfTimeSteps());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExtractArraysOverTime_SetSelectionConnection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSelectionConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractArraysOverTime *op = static_cast<vtkExtractArraysOverTime *>(vp);

  vtkAlgorithmOutput *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAlgorithmOutput"))
    {
    if (ap.IsBound())
      {
      op->SetSelectionConnection(temp0);
      }
    else
      {
      op->vtkExtractArraysOverTime::SetSelectionConnection(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExtractArraysOverTime_SetSelectionExtractor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSelectionExtractor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractArraysOverTime *op = static_cast<vtkExtractArraysOverTime *>(vp);

  vtkExtractSelection *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkExtractSelection"))
    {
    if (ap.IsBound())
      {
      op->SetSelectionExtractor(temp0);
      }
    else
      {
      op->vtkExtractArraysOverTime::SetSelectionExtractor(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExtractArraysOverTime_GetSelectionExtractor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelectionExtractor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractArraysOverTime *op = static_cast<vtkExtractArraysOverTime *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkExtractSelection *tempr = (ap.IsBound() ?
      op->GetSelectionExtractor() :
      op->vtkExtractArraysOverTime::GetSelectionExtractor());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExtractArraysOverTime_SetReportStatisticsOnly(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetReportStatisticsOnly");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractArraysOverTime *op = static_cast<vtkExtractArraysOverTime *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetReportStatisticsOnly(temp0);
      }
    else
      {
      op->vtkExtractArraysOverTime::SetReportStatisticsOnly(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExtractArraysOverTime_GetReportStatisticsOnly(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetReportStatisticsOnly");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractArraysOverTime *op = static_cast<vtkExtractArraysOverTime *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetReportStatisticsOnly() :
      op->vtkExtractArraysOverTime::GetReportStatisticsOnly());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExtractArraysOverTime_ReportStatisticsOnlyOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReportStatisticsOnlyOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractArraysOverTime *op = static_cast<vtkExtractArraysOverTime *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ReportStatisticsOnlyOn();
      }
    else
      {
      op->vtkExtractArraysOverTime::ReportStatisticsOnlyOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExtractArraysOverTime_ReportStatisticsOnlyOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReportStatisticsOnlyOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractArraysOverTime *op = static_cast<vtkExtractArraysOverTime *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ReportStatisticsOnlyOff();
      }
    else
      {
      op->vtkExtractArraysOverTime::ReportStatisticsOnlyOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkExtractArraysOverTime_Methods[] = {
  {(char*)"GetClassName", PyvtkExtractArraysOverTime_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkExtractArraysOverTime_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkExtractArraysOverTime_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkExtractArraysOverTime\nC++: vtkExtractArraysOverTime *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkExtractArraysOverTime_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkExtractArraysOverTime\nC++: vtkExtractArraysOverTime *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetNumberOfTimeSteps", PyvtkExtractArraysOverTime_GetNumberOfTimeSteps, METH_VARARGS,
   (char*)"V.GetNumberOfTimeSteps() -> int\nC++: int GetNumberOfTimeSteps()\n\nGet the number of time steps\n"},
  {(char*)"SetSelectionConnection", PyvtkExtractArraysOverTime_SetSelectionConnection, METH_VARARGS,
   (char*)"V.SetSelectionConnection(vtkAlgorithmOutput)\nC++: void SetSelectionConnection(vtkAlgorithmOutput *algOutput)\n\nConvenience method to specify the selection connection (2nd input\nport)\n"},
  {(char*)"SetSelectionExtractor", PyvtkExtractArraysOverTime_SetSelectionExtractor, METH_VARARGS,
   (char*)"V.SetSelectionExtractor(vtkExtractSelection)\nC++: virtual void SetSelectionExtractor(vtkExtractSelection *)\n\nSet/get the vtkExtractSelection instance used to obtain array\nvalues at each time step. An instance of vtkExtractSelection is\ncreated on demand when the filter is first executed.\n\nThis is used by ParaView to override the default extractor with\none that supports Python-based QUERY selection.\n"},
  {(char*)"GetSelectionExtractor", PyvtkExtractArraysOverTime_GetSelectionExtractor, METH_VARARGS,
   (char*)"V.GetSelectionExtractor() -> vtkExtractSelection\nC++: vtkExtractSelection *GetSelectionExtractor()\n\nSet/get the vtkExtractSelection instance used to obtain array\nvalues at each time step. An instance of vtkExtractSelection is\ncreated on demand when the filter is first executed.\n\nThis is used by ParaView to override the default extractor with\none that supports Python-based QUERY selection.\n"},
  {(char*)"SetReportStatisticsOnly", PyvtkExtractArraysOverTime_SetReportStatisticsOnly, METH_VARARGS,
   (char*)"V.SetReportStatisticsOnly(int)\nC++: void SetReportStatisticsOnly(int a)\n\nInstead of breaking a selection into a separate time-history\ntable for each (block,ID)-tuple, you may call\nReportStatisticsOnlyOn(). Then a single table per block of the\ninput dataset will report the minimum, maximum, quartiles, and\n(for numerical arrays) the average and standard deviation of the\nselection over time.\n\nThe default is off to preserve backwards-compatibility.\n"},
  {(char*)"GetReportStatisticsOnly", PyvtkExtractArraysOverTime_GetReportStatisticsOnly, METH_VARARGS,
   (char*)"V.GetReportStatisticsOnly() -> int\nC++: int GetReportStatisticsOnly()\n\nInstead of breaking a selection into a separate time-history\ntable for each (block,ID)-tuple, you may call\nReportStatisticsOnlyOn(). Then a single table per block of the\ninput dataset will report the minimum, maximum, quartiles, and\n(for numerical arrays) the average and standard deviation of the\nselection over time.\n\nThe default is off to preserve backwards-compatibility.\n"},
  {(char*)"ReportStatisticsOnlyOn", PyvtkExtractArraysOverTime_ReportStatisticsOnlyOn, METH_VARARGS,
   (char*)"V.ReportStatisticsOnlyOn()\nC++: void ReportStatisticsOnlyOn()\n\nInstead of breaking a selection into a separate time-history\ntable for each (block,ID)-tuple, you may call\nReportStatisticsOnlyOn(). Then a single table per block of the\ninput dataset will report the minimum, maximum, quartiles, and\n(for numerical arrays) the average and standard deviation of the\nselection over time.\n\nThe default is off to preserve backwards-compatibility.\n"},
  {(char*)"ReportStatisticsOnlyOff", PyvtkExtractArraysOverTime_ReportStatisticsOnlyOff, METH_VARARGS,
   (char*)"V.ReportStatisticsOnlyOff()\nC++: void ReportStatisticsOnlyOff()\n\nInstead of breaking a selection into a separate time-history\ntable for each (block,ID)-tuple, you may call\nReportStatisticsOnlyOn(). Then a single table per block of the\ninput dataset will report the minimum, maximum, quartiles, and\n(for numerical arrays) the average and standard deviation of the\nselection over time.\n\nThe default is off to preserve backwards-compatibility.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkExtractArraysOverTime_StaticNew()
{
  return vtkExtractArraysOverTime::New();
}

PyObject *PyVTKClass_vtkExtractArraysOverTimeNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkExtractArraysOverTime_StaticNew,
    PyvtkExtractArraysOverTime_Methods,
    "vtkExtractArraysOverTime", modulename,
    NULL, NULL,
    PyvtkExtractArraysOverTime_Doc(),
    PyVTKClass_vtkMultiBlockDataSetAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkExtractArraysOverTime_Doc()
{
  static const char *docstring[] = {
    "vtkExtractArraysOverTime - extracts a selection over time.\n\n",
    "Superclass: vtkMultiBlockDataSetAlgorithm\n\n",
    "vtkExtractArraysOverTime extracts a selection over time. The output\nis a multiblock dataset. If selection content type is\nvtkSelection::Locations, then each output block corresponds to each\nprobed location. Otherwise, each output block corresponds to an\nextracted cell/point depending on whether the selection field type is\nCELL or POINT. Each block is a vtkTable with a column named Time (or\nTimeDat",
    "a if Time exists in the input). When extracting point data,\nthe input point coordinates are copied to a column named Point\nCoordinates or Points (if Point Coordinates exists in the input).\nThis algorithm does not produce a TIME_STEPS or TIME_RANGE\ninformation because it works across time. .Section Caveat This\nalgorithm works only with source that produce TIME_STEPS().\nContinuous time range is not ",
    "yet supported.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkExtractArraysOverTime(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkExtractArraysOverTimeNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkExtractArraysOverTime", o) != 0)
    {
    Py_DECREF(o);
    }

}

