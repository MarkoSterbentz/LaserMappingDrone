// python wrapper for vtkDescriptiveStatistics
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkDescriptiveStatistics.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkDescriptiveStatistics(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkDescriptiveStatisticsNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkStatisticsAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkStatisticsAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkStatisticsAlgorithmNew
#endif

static const char **PyvtkDescriptiveStatistics_Doc();


static PyObject *
PyvtkDescriptiveStatistics_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDescriptiveStatistics *op = static_cast<vtkDescriptiveStatistics *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkDescriptiveStatistics::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDescriptiveStatistics_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDescriptiveStatistics *op = static_cast<vtkDescriptiveStatistics *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkDescriptiveStatistics::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDescriptiveStatistics_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDescriptiveStatistics *op = static_cast<vtkDescriptiveStatistics *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkDescriptiveStatistics *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkDescriptiveStatistics::NewInstance());

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
PyvtkDescriptiveStatistics_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkDescriptiveStatistics *tempr = vtkDescriptiveStatistics::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDescriptiveStatistics_SetUnbiasedVariance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUnbiasedVariance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDescriptiveStatistics *op = static_cast<vtkDescriptiveStatistics *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetUnbiasedVariance(temp0);
      }
    else
      {
      op->vtkDescriptiveStatistics::SetUnbiasedVariance(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDescriptiveStatistics_GetUnbiasedVariance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUnbiasedVariance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDescriptiveStatistics *op = static_cast<vtkDescriptiveStatistics *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetUnbiasedVariance() :
      op->vtkDescriptiveStatistics::GetUnbiasedVariance());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDescriptiveStatistics_UnbiasedVarianceOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UnbiasedVarianceOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDescriptiveStatistics *op = static_cast<vtkDescriptiveStatistics *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->UnbiasedVarianceOn();
      }
    else
      {
      op->vtkDescriptiveStatistics::UnbiasedVarianceOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDescriptiveStatistics_UnbiasedVarianceOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UnbiasedVarianceOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDescriptiveStatistics *op = static_cast<vtkDescriptiveStatistics *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->UnbiasedVarianceOff();
      }
    else
      {
      op->vtkDescriptiveStatistics::UnbiasedVarianceOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDescriptiveStatistics_SetG1Skewness(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetG1Skewness");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDescriptiveStatistics *op = static_cast<vtkDescriptiveStatistics *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetG1Skewness(temp0);
      }
    else
      {
      op->vtkDescriptiveStatistics::SetG1Skewness(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDescriptiveStatistics_GetG1Skewness(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetG1Skewness");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDescriptiveStatistics *op = static_cast<vtkDescriptiveStatistics *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetG1Skewness() :
      op->vtkDescriptiveStatistics::GetG1Skewness());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDescriptiveStatistics_G1SkewnessOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "G1SkewnessOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDescriptiveStatistics *op = static_cast<vtkDescriptiveStatistics *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->G1SkewnessOn();
      }
    else
      {
      op->vtkDescriptiveStatistics::G1SkewnessOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDescriptiveStatistics_G1SkewnessOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "G1SkewnessOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDescriptiveStatistics *op = static_cast<vtkDescriptiveStatistics *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->G1SkewnessOff();
      }
    else
      {
      op->vtkDescriptiveStatistics::G1SkewnessOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDescriptiveStatistics_SetG2Kurtosis(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetG2Kurtosis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDescriptiveStatistics *op = static_cast<vtkDescriptiveStatistics *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetG2Kurtosis(temp0);
      }
    else
      {
      op->vtkDescriptiveStatistics::SetG2Kurtosis(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDescriptiveStatistics_GetG2Kurtosis(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetG2Kurtosis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDescriptiveStatistics *op = static_cast<vtkDescriptiveStatistics *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetG2Kurtosis() :
      op->vtkDescriptiveStatistics::GetG2Kurtosis());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDescriptiveStatistics_G2KurtosisOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "G2KurtosisOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDescriptiveStatistics *op = static_cast<vtkDescriptiveStatistics *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->G2KurtosisOn();
      }
    else
      {
      op->vtkDescriptiveStatistics::G2KurtosisOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDescriptiveStatistics_G2KurtosisOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "G2KurtosisOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDescriptiveStatistics *op = static_cast<vtkDescriptiveStatistics *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->G2KurtosisOff();
      }
    else
      {
      op->vtkDescriptiveStatistics::G2KurtosisOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDescriptiveStatistics_SetSignedDeviations(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSignedDeviations");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDescriptiveStatistics *op = static_cast<vtkDescriptiveStatistics *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetSignedDeviations(temp0);
      }
    else
      {
      op->vtkDescriptiveStatistics::SetSignedDeviations(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDescriptiveStatistics_GetSignedDeviations(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSignedDeviations");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDescriptiveStatistics *op = static_cast<vtkDescriptiveStatistics *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetSignedDeviations() :
      op->vtkDescriptiveStatistics::GetSignedDeviations());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDescriptiveStatistics_SignedDeviationsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SignedDeviationsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDescriptiveStatistics *op = static_cast<vtkDescriptiveStatistics *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SignedDeviationsOn();
      }
    else
      {
      op->vtkDescriptiveStatistics::SignedDeviationsOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDescriptiveStatistics_SignedDeviationsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SignedDeviationsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDescriptiveStatistics *op = static_cast<vtkDescriptiveStatistics *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SignedDeviationsOff();
      }
    else
      {
      op->vtkDescriptiveStatistics::SignedDeviationsOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDescriptiveStatistics_Aggregate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Aggregate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDescriptiveStatistics *op = static_cast<vtkDescriptiveStatistics *>(vp);

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
      op->vtkDescriptiveStatistics::Aggregate(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkDescriptiveStatistics_Methods[] = {
  {(char*)"GetClassName", PyvtkDescriptiveStatistics_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkDescriptiveStatistics_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkDescriptiveStatistics_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkDescriptiveStatistics\nC++: vtkDescriptiveStatistics *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkDescriptiveStatistics_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkDescriptiveStatistics\nC++: vtkDescriptiveStatistics *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetUnbiasedVariance", PyvtkDescriptiveStatistics_SetUnbiasedVariance, METH_VARARGS,
   (char*)"V.SetUnbiasedVariance(int)\nC++: void SetUnbiasedVariance(int a)\n\nSet/get whether the unbiased estimator for the variance should be\nused, or if the population variance will be calculated. The\ndefault is that the unbiased estimator will be used.\n"},
  {(char*)"GetUnbiasedVariance", PyvtkDescriptiveStatistics_GetUnbiasedVariance, METH_VARARGS,
   (char*)"V.GetUnbiasedVariance() -> int\nC++: int GetUnbiasedVariance()\n\nSet/get whether the unbiased estimator for the variance should be\nused, or if the population variance will be calculated. The\ndefault is that the unbiased estimator will be used.\n"},
  {(char*)"UnbiasedVarianceOn", PyvtkDescriptiveStatistics_UnbiasedVarianceOn, METH_VARARGS,
   (char*)"V.UnbiasedVarianceOn()\nC++: void UnbiasedVarianceOn()\n\nSet/get whether the unbiased estimator for the variance should be\nused, or if the population variance will be calculated. The\ndefault is that the unbiased estimator will be used.\n"},
  {(char*)"UnbiasedVarianceOff", PyvtkDescriptiveStatistics_UnbiasedVarianceOff, METH_VARARGS,
   (char*)"V.UnbiasedVarianceOff()\nC++: void UnbiasedVarianceOff()\n\nSet/get whether the unbiased estimator for the variance should be\nused, or if the population variance will be calculated. The\ndefault is that the unbiased estimator will be used.\n"},
  {(char*)"SetG1Skewness", PyvtkDescriptiveStatistics_SetG1Skewness, METH_VARARGS,
   (char*)"V.SetG1Skewness(int)\nC++: void SetG1Skewness(int a)\n\nSet/get whether the G1 estimator for the skewness should be used,\nor if the g1 skewness will be calculated. The default is that the\ng1 skewness estimator will be used.\n"},
  {(char*)"GetG1Skewness", PyvtkDescriptiveStatistics_GetG1Skewness, METH_VARARGS,
   (char*)"V.GetG1Skewness() -> int\nC++: int GetG1Skewness()\n\nSet/get whether the G1 estimator for the skewness should be used,\nor if the g1 skewness will be calculated. The default is that the\ng1 skewness estimator will be used.\n"},
  {(char*)"G1SkewnessOn", PyvtkDescriptiveStatistics_G1SkewnessOn, METH_VARARGS,
   (char*)"V.G1SkewnessOn()\nC++: void G1SkewnessOn()\n\nSet/get whether the G1 estimator for the skewness should be used,\nor if the g1 skewness will be calculated. The default is that the\ng1 skewness estimator will be used.\n"},
  {(char*)"G1SkewnessOff", PyvtkDescriptiveStatistics_G1SkewnessOff, METH_VARARGS,
   (char*)"V.G1SkewnessOff()\nC++: void G1SkewnessOff()\n\nSet/get whether the G1 estimator for the skewness should be used,\nor if the g1 skewness will be calculated. The default is that the\ng1 skewness estimator will be used.\n"},
  {(char*)"SetG2Kurtosis", PyvtkDescriptiveStatistics_SetG2Kurtosis, METH_VARARGS,
   (char*)"V.SetG2Kurtosis(int)\nC++: void SetG2Kurtosis(int a)\n\nSet/get whether the G2 estimator for the kurtosis should be used,\nor if the g2 kurtosis will be calculated. The default is that the\ng2 kurtosis estimator will be used.\n"},
  {(char*)"GetG2Kurtosis", PyvtkDescriptiveStatistics_GetG2Kurtosis, METH_VARARGS,
   (char*)"V.GetG2Kurtosis() -> int\nC++: int GetG2Kurtosis()\n\nSet/get whether the G2 estimator for the kurtosis should be used,\nor if the g2 kurtosis will be calculated. The default is that the\ng2 kurtosis estimator will be used.\n"},
  {(char*)"G2KurtosisOn", PyvtkDescriptiveStatistics_G2KurtosisOn, METH_VARARGS,
   (char*)"V.G2KurtosisOn()\nC++: void G2KurtosisOn()\n\nSet/get whether the G2 estimator for the kurtosis should be used,\nor if the g2 kurtosis will be calculated. The default is that the\ng2 kurtosis estimator will be used.\n"},
  {(char*)"G2KurtosisOff", PyvtkDescriptiveStatistics_G2KurtosisOff, METH_VARARGS,
   (char*)"V.G2KurtosisOff()\nC++: void G2KurtosisOff()\n\nSet/get whether the G2 estimator for the kurtosis should be used,\nor if the g2 kurtosis will be calculated. The default is that the\ng2 kurtosis estimator will be used.\n"},
  {(char*)"SetSignedDeviations", PyvtkDescriptiveStatistics_SetSignedDeviations, METH_VARARGS,
   (char*)"V.SetSignedDeviations(int)\nC++: void SetSignedDeviations(int a)\n\nSet/get whether the deviations returned should be signed, or\nshould only have their magnitude reported. The default is that\nsigned deviations will be computed.\n"},
  {(char*)"GetSignedDeviations", PyvtkDescriptiveStatistics_GetSignedDeviations, METH_VARARGS,
   (char*)"V.GetSignedDeviations() -> int\nC++: int GetSignedDeviations()\n\nSet/get whether the deviations returned should be signed, or\nshould only have their magnitude reported. The default is that\nsigned deviations will be computed.\n"},
  {(char*)"SignedDeviationsOn", PyvtkDescriptiveStatistics_SignedDeviationsOn, METH_VARARGS,
   (char*)"V.SignedDeviationsOn()\nC++: void SignedDeviationsOn()\n\nSet/get whether the deviations returned should be signed, or\nshould only have their magnitude reported. The default is that\nsigned deviations will be computed.\n"},
  {(char*)"SignedDeviationsOff", PyvtkDescriptiveStatistics_SignedDeviationsOff, METH_VARARGS,
   (char*)"V.SignedDeviationsOff()\nC++: void SignedDeviationsOff()\n\nSet/get whether the deviations returned should be signed, or\nshould only have their magnitude reported. The default is that\nsigned deviations will be computed.\n"},
  {(char*)"Aggregate", PyvtkDescriptiveStatistics_Aggregate, METH_VARARGS,
   (char*)"V.Aggregate(vtkDataObjectCollection, vtkMultiBlockDataSet)\nC++: virtual void Aggregate(vtkDataObjectCollection *,\n    vtkMultiBlockDataSet *)\n\nGiven a collection of models, calculate aggregate model\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkDescriptiveStatistics_StaticNew()
{
  return vtkDescriptiveStatistics::New();
}

PyObject *PyVTKClass_vtkDescriptiveStatisticsNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkDescriptiveStatistics_StaticNew,
    PyvtkDescriptiveStatistics_Methods,
    "vtkDescriptiveStatistics", modulename,
    NULL, NULL,
    PyvtkDescriptiveStatistics_Doc(),
    PyVTKClass_vtkStatisticsAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkDescriptiveStatistics_Doc()
{
  static const char *docstring[] = {
    "vtkDescriptiveStatistics - A class for univariate descriptive\nstatistics\n\n",
    "Superclass: vtkStatisticsAlgorithm\n\n",
    "Given a selection of columns of interest in an input data table, this\nclass provides the following functionalities, depending on the chosen\nexecution options:\n* Learn: calculate extremal values, sample mean, and M2, M3, and M4\n  aggregates (cf. P. Pebay, Formulas for robust, one-pass parallel\n  computation of covariances and Arbitrary-Order Statistical Moments,\nSandia Report SAND2008-6212, Sep 200",
    "8,\n  http://infoserve.sandia.gov/sand_doc/2008/086212.pdf for details)\n* Derive: calculate unbiased variance estimator, standard deviation\n  estimator, two skewness estimators, and two kurtosis excess\n  estimators.\n* Assess: given an input data set, a reference value and a\n  non-negative deviation, mark each datum with corresponding relative\ndeviation (1-dimensional Mahlanobis distance). If the de",
    "viation is\n  zero, then mark each datum which are equal to the reference value\n  with 0, and all others with 1. By default, the reference value and\n  the deviation are, respectively, the mean and the standard\n  deviation of the input model.\n* Test: calculate Jarque-Bera statistic and, if VTK to R interface is\navailable, retrieve corresponding p-value for normality testing.\n\nThanks:\n\nThanks to Phil",
    "ippe Pebay and David Thompson from Sandia National\nLaboratories for implementing this class. Updated by Philippe Pebay,\nKitware SAS 2012\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkDescriptiveStatistics(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkDescriptiveStatisticsNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkDescriptiveStatistics", o) != 0)
    {
    Py_DECREF(o);
    }

}

