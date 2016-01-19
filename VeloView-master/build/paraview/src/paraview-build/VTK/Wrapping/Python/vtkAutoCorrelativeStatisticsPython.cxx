// python wrapper for vtkAutoCorrelativeStatistics
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkAutoCorrelativeStatistics.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkAutoCorrelativeStatistics(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkAutoCorrelativeStatisticsNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkStatisticsAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkStatisticsAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkStatisticsAlgorithmNew
#endif

static const char **PyvtkAutoCorrelativeStatistics_Doc();


static PyObject *
PyvtkAutoCorrelativeStatistics_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAutoCorrelativeStatistics *op = static_cast<vtkAutoCorrelativeStatistics *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkAutoCorrelativeStatistics::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAutoCorrelativeStatistics_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAutoCorrelativeStatistics *op = static_cast<vtkAutoCorrelativeStatistics *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkAutoCorrelativeStatistics::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAutoCorrelativeStatistics_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAutoCorrelativeStatistics *op = static_cast<vtkAutoCorrelativeStatistics *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkAutoCorrelativeStatistics *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkAutoCorrelativeStatistics::NewInstance());

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
PyvtkAutoCorrelativeStatistics_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkAutoCorrelativeStatistics *tempr = vtkAutoCorrelativeStatistics::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAutoCorrelativeStatistics_SetSliceCardinality(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSliceCardinality");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAutoCorrelativeStatistics *op = static_cast<vtkAutoCorrelativeStatistics *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetSliceCardinality(temp0);
      }
    else
      {
      op->vtkAutoCorrelativeStatistics::SetSliceCardinality(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAutoCorrelativeStatistics_GetSliceCardinalityMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSliceCardinalityMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAutoCorrelativeStatistics *op = static_cast<vtkAutoCorrelativeStatistics *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetSliceCardinalityMinValue() :
      op->vtkAutoCorrelativeStatistics::GetSliceCardinalityMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAutoCorrelativeStatistics_GetSliceCardinalityMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSliceCardinalityMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAutoCorrelativeStatistics *op = static_cast<vtkAutoCorrelativeStatistics *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetSliceCardinalityMaxValue() :
      op->vtkAutoCorrelativeStatistics::GetSliceCardinalityMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAutoCorrelativeStatistics_GetSliceCardinality(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSliceCardinality");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAutoCorrelativeStatistics *op = static_cast<vtkAutoCorrelativeStatistics *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetSliceCardinality() :
      op->vtkAutoCorrelativeStatistics::GetSliceCardinality());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAutoCorrelativeStatistics_Aggregate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Aggregate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAutoCorrelativeStatistics *op = static_cast<vtkAutoCorrelativeStatistics *>(vp);

  vtkDataObjectCollection *temp0 = NULL;
  vtkMultiBlockDataSet *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkDataObjectCollection") &&
      ap.GetVTKObject(temp1, "vtkMultiBlockDataSet"))
    {
    if (ap.IsBound())
      {
      op->Aggregate(temp0, temp1);
      }
    else
      {
      op->vtkAutoCorrelativeStatistics::Aggregate(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkAutoCorrelativeStatistics_Methods[] = {
  {(char*)"GetClassName", PyvtkAutoCorrelativeStatistics_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkAutoCorrelativeStatistics_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkAutoCorrelativeStatistics_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkAutoCorrelativeStatistics\nC++: vtkAutoCorrelativeStatistics *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkAutoCorrelativeStatistics_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkAutoCorrelativeStatistics\nC++: vtkAutoCorrelativeStatistics *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetSliceCardinality", PyvtkAutoCorrelativeStatistics_SetSliceCardinality, METH_VARARGS,
   (char*)"V.SetSliceCardinality(int)\nC++: void SetSliceCardinality(vtkIdType)\n\nSet/get the cardinality of the data set at given time, i.e., of\nany given time slice. It cannot be negative. The input data set\nis assumed to have a cardinality which is a multiple of this\nvalue. The default is 0, meaning that the user must specify a\nvalue that is consistent with the input data set.\n"},
  {(char*)"GetSliceCardinalityMinValue", PyvtkAutoCorrelativeStatistics_GetSliceCardinalityMinValue, METH_VARARGS,
   (char*)"V.GetSliceCardinalityMinValue() -> int\nC++: vtkIdType GetSliceCardinalityMinValue()\n\nSet/get the cardinality of the data set at given time, i.e., of\nany given time slice. It cannot be negative. The input data set\nis assumed to have a cardinality which is a multiple of this\nvalue. The default is 0, meaning that the user must specify a\nvalue that is consistent with the input data set.\n"},
  {(char*)"GetSliceCardinalityMaxValue", PyvtkAutoCorrelativeStatistics_GetSliceCardinalityMaxValue, METH_VARARGS,
   (char*)"V.GetSliceCardinalityMaxValue() -> int\nC++: vtkIdType GetSliceCardinalityMaxValue()\n\nSet/get the cardinality of the data set at given time, i.e., of\nany given time slice. It cannot be negative. The input data set\nis assumed to have a cardinality which is a multiple of this\nvalue. The default is 0, meaning that the user must specify a\nvalue that is consistent with the input data set.\n"},
  {(char*)"GetSliceCardinality", PyvtkAutoCorrelativeStatistics_GetSliceCardinality, METH_VARARGS,
   (char*)"V.GetSliceCardinality() -> int\nC++: vtkIdType GetSliceCardinality()\n\nSet/get the cardinality of the data set at given time, i.e., of\nany given time slice. It cannot be negative. The input data set\nis assumed to have a cardinality which is a multiple of this\nvalue. The default is 0, meaning that the user must specify a\nvalue that is consistent with the input data set.\n"},
  {(char*)"Aggregate", PyvtkAutoCorrelativeStatistics_Aggregate, METH_VARARGS,
   (char*)"V.Aggregate(vtkDataObjectCollection, vtkMultiBlockDataSet)\nC++: virtual void Aggregate(vtkDataObjectCollection *,\n    vtkMultiBlockDataSet *)\n\nGiven a collection of models, calculate aggregate model\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkAutoCorrelativeStatistics_StaticNew()
{
  return vtkAutoCorrelativeStatistics::New();
}

PyObject *PyVTKClass_vtkAutoCorrelativeStatisticsNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkAutoCorrelativeStatistics_StaticNew,
    PyvtkAutoCorrelativeStatistics_Methods,
    "vtkAutoCorrelativeStatistics", modulename,
    NULL, NULL,
    PyvtkAutoCorrelativeStatistics_Doc(),
    PyVTKClass_vtkStatisticsAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkAutoCorrelativeStatistics_Doc()
{
  static const char *docstring[] = {
    "vtkAutoCorrelativeStatistics - A class for univariate\nauto-correlative statistics\n\n",
    "Superclass: vtkStatisticsAlgorithm\n\n",
    "Given a selection of columns of interest in an input data table, this\nclass provides the following functionalities, depending on the chosen\nexecution options:\n* Learn: calculate sample mean and M2 aggregates for each variable\n  w.r.t. itself (cf. P. Pebay, Formulas for robust, one-pass parallel\ncomputation of covariances and Arbitrary-Order Statistical Moments,\n  Sandia Report SAND2008-6212, Sep 2",
    "008,\n  http://infoserve.sandia.gov/sand_doc/2008/086212.pdf for details)\n  for each specified time lag.\n* Derive: calculate unbiased autocovariance matrix estimators and its\ndeterminant, linear regressions, and Pearson correlation coefficient,\nfor each specified time lag.\n* Assess: given an input data set, two means and a 2x2 covariance\n  matrix, mark each datum with corresponding relative deviati",
    "on\n  (2-dimensional Mahlanobis distance).\n\nThanks:\n\nThis class was written by Philippe Pebay, Kitware SAS 2012\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkAutoCorrelativeStatistics(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkAutoCorrelativeStatisticsNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkAutoCorrelativeStatistics", o) != 0)
    {
    Py_DECREF(o);
    }

}

