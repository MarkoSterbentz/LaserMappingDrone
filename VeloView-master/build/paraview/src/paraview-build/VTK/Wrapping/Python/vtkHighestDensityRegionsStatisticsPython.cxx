// python wrapper for vtkHighestDensityRegionsStatistics
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkHighestDensityRegionsStatistics.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkHighestDensityRegionsStatistics(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkHighestDensityRegionsStatisticsNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkStatisticsAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkStatisticsAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkStatisticsAlgorithmNew
#endif

static const char **PyvtkHighestDensityRegionsStatistics_Doc();


static PyObject *
PyvtkHighestDensityRegionsStatistics_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHighestDensityRegionsStatistics *op = static_cast<vtkHighestDensityRegionsStatistics *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkHighestDensityRegionsStatistics::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHighestDensityRegionsStatistics_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHighestDensityRegionsStatistics *op = static_cast<vtkHighestDensityRegionsStatistics *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkHighestDensityRegionsStatistics::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHighestDensityRegionsStatistics_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHighestDensityRegionsStatistics *op = static_cast<vtkHighestDensityRegionsStatistics *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkHighestDensityRegionsStatistics *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkHighestDensityRegionsStatistics::NewInstance());

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
PyvtkHighestDensityRegionsStatistics_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkHighestDensityRegionsStatistics *tempr = vtkHighestDensityRegionsStatistics::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHighestDensityRegionsStatistics_Aggregate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Aggregate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHighestDensityRegionsStatistics *op = static_cast<vtkHighestDensityRegionsStatistics *>(vp);

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
      op->vtkHighestDensityRegionsStatistics::Aggregate(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkHighestDensityRegionsStatistics_SetSigma(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSigma");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHighestDensityRegionsStatistics *op = static_cast<vtkHighestDensityRegionsStatistics *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetSigma(temp0);
      }
    else
      {
      op->vtkHighestDensityRegionsStatistics::SetSigma(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkHighestDensityRegionsStatistics_GetSmoothHC1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSmoothHC1");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHighestDensityRegionsStatistics *op = static_cast<vtkHighestDensityRegionsStatistics *>(vp);

  int sizer = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetSmoothHC1() :
      op->vtkHighestDensityRegionsStatistics::GetSmoothHC1());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkHighestDensityRegionsStatistics_SetSmoothHC1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSmoothHC1");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHighestDensityRegionsStatistics *op = static_cast<vtkHighestDensityRegionsStatistics *>(vp);

  double temp0[2];
  const int size0 = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetSmoothHC1(temp0);
      }
    else
      {
      op->vtkHighestDensityRegionsStatistics::SetSmoothHC1(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkHighestDensityRegionsStatistics_GetSmoothHC2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSmoothHC2");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHighestDensityRegionsStatistics *op = static_cast<vtkHighestDensityRegionsStatistics *>(vp);

  int sizer = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetSmoothHC2() :
      op->vtkHighestDensityRegionsStatistics::GetSmoothHC2());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkHighestDensityRegionsStatistics_SetSmoothHC2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSmoothHC2");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHighestDensityRegionsStatistics *op = static_cast<vtkHighestDensityRegionsStatistics *>(vp);

  double temp0[2];
  const int size0 = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetSmoothHC2(temp0);
      }
    else
      {
      op->vtkHighestDensityRegionsStatistics::SetSmoothHC2(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkHighestDensityRegionsStatistics_Methods[] = {
  {(char*)"GetClassName", PyvtkHighestDensityRegionsStatistics_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkHighestDensityRegionsStatistics_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkHighestDensityRegionsStatistics_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkHighestDensityRegionsStatistics\nC++: vtkHighestDensityRegionsStatistics *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkHighestDensityRegionsStatistics_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkHighestDensityRegionsStatistics\nC++: vtkHighestDensityRegionsStatistics *SafeDownCast(\n    vtkObject* o)\n\n"},
  {(char*)"Aggregate", PyvtkHighestDensityRegionsStatistics_Aggregate, METH_VARARGS,
   (char*)"V.Aggregate(vtkDataObjectCollection, vtkMultiBlockDataSet)\nC++: virtual void Aggregate(vtkDataObjectCollection *,\n    vtkMultiBlockDataSet *)\n\nGiven a collection of models, calculate aggregate model\n"},
  {(char*)"SetSigma", PyvtkHighestDensityRegionsStatistics_SetSigma, METH_VARARGS,
   (char*)"V.SetSigma(float)\nC++: void SetSigma(double sigma)\n\nH is a positive matrix that defines the smooth direction. In a\nclassical HDR, we don't set a specific smooth direction for the H\nmatrix parameter (SmoothHC1, SmoothHC2). That mean H will be in a\ndiagonal form and equal to sigma * Id.\n"},
  {(char*)"GetSmoothHC1", PyvtkHighestDensityRegionsStatistics_GetSmoothHC1, METH_VARARGS,
   (char*)"V.GetSmoothHC1() -> (float, float)\nC++: double *GetSmoothHC1()\n\nGet Smooth H matrix parameter of the HDR.\n"},
  {(char*)"SetSmoothHC1", PyvtkHighestDensityRegionsStatistics_SetSmoothHC1, METH_VARARGS,
   (char*)"V.SetSmoothHC1((float, float))\nC++: void SetSmoothHC1(double a[2])\n\nGet Smooth H matrix parameter of the HDR.\n"},
  {(char*)"GetSmoothHC2", PyvtkHighestDensityRegionsStatistics_GetSmoothHC2, METH_VARARGS,
   (char*)"V.GetSmoothHC2() -> (float, float)\nC++: double *GetSmoothHC2()\n\nGet Smooth H matrix parameter of the HDR.\n"},
  {(char*)"SetSmoothHC2", PyvtkHighestDensityRegionsStatistics_SetSmoothHC2, METH_VARARGS,
   (char*)"V.SetSmoothHC2((float, float))\nC++: void SetSmoothHC2(double a[2])\n\nGet Smooth H matrix parameter of the HDR.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkHighestDensityRegionsStatistics_StaticNew()
{
  return vtkHighestDensityRegionsStatistics::New();
}

PyObject *PyVTKClass_vtkHighestDensityRegionsStatisticsNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkHighestDensityRegionsStatistics_StaticNew,
    PyvtkHighestDensityRegionsStatistics_Methods,
    "vtkHighestDensityRegionsStatistics", modulename,
    NULL, NULL,
    PyvtkHighestDensityRegionsStatistics_Doc(),
    PyVTKClass_vtkStatisticsAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkHighestDensityRegionsStatistics_Doc()
{
  static const char *docstring[] = {
    "vtkHighestDensityRegionsStatistics - Compute a random vector of\n\n",
    "Superclass: vtkStatisticsAlgorithm\n\n",
    "Given a selection of pairs of columns of interest, this class\nprovides the following functionalities, depending on the chosen\nexecution options:\n* Learn: calculates density estimator f of a random vector using a\n  smooth gaussian kernel. The output metadata on port OUTPUT_MODEL is\na multiblock dataset containing at one vtkTable holding three columns\nwhich are for the first columns the input column",
    "s of interest and for\nthe last columns the density estimators of each input pair of columns\nof interest.\n* Derive: calculate normalized (as a percentage) quantiles coming\n  from Learn output. The second block of the multibloc dataset\n  contains a vtkTable holding some pairs of columns which are for the\nsecond one the quantiles ordered from the stronger to the lower and\n  for the first one the corr",
    "espondand quantile index.\n* Assess: not implemented.\n* Test: not implemented.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkHighestDensityRegionsStatistics(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkHighestDensityRegionsStatisticsNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkHighestDensityRegionsStatistics", o) != 0)
    {
    Py_DECREF(o);
    }

}

