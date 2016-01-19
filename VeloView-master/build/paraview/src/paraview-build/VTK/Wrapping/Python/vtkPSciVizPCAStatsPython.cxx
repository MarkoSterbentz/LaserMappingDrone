// python wrapper for vtkPSciVizPCAStats
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkPSciVizPCAStats.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkPSciVizPCAStats(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkPSciVizPCAStatsNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkSciVizStatisticsNew
extern "C" { PyObject *PyVTKClass_vtkSciVizStatisticsNew(const char *); }
#define DECLARED_PyVTKClass_vtkSciVizStatisticsNew
#endif

static const char **PyvtkPSciVizPCAStats_Doc();


static PyObject *
PyvtkPSciVizPCAStats_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPSciVizPCAStats *op = static_cast<vtkPSciVizPCAStats *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkPSciVizPCAStats::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPSciVizPCAStats_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPSciVizPCAStats *op = static_cast<vtkPSciVizPCAStats *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPSciVizPCAStats::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPSciVizPCAStats_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPSciVizPCAStats *op = static_cast<vtkPSciVizPCAStats *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPSciVizPCAStats *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPSciVizPCAStats::NewInstance());

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
PyvtkPSciVizPCAStats_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkPSciVizPCAStats *tempr = vtkPSciVizPCAStats::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPSciVizPCAStats_SetNormalizationScheme(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNormalizationScheme");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPSciVizPCAStats *op = static_cast<vtkPSciVizPCAStats *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetNormalizationScheme(temp0);
      }
    else
      {
      op->vtkPSciVizPCAStats::SetNormalizationScheme(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPSciVizPCAStats_GetNormalizationScheme(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNormalizationScheme");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPSciVizPCAStats *op = static_cast<vtkPSciVizPCAStats *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNormalizationScheme() :
      op->vtkPSciVizPCAStats::GetNormalizationScheme());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPSciVizPCAStats_SetBasisScheme(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBasisScheme");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPSciVizPCAStats *op = static_cast<vtkPSciVizPCAStats *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetBasisScheme(temp0);
      }
    else
      {
      op->vtkPSciVizPCAStats::SetBasisScheme(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPSciVizPCAStats_GetBasisScheme(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBasisScheme");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPSciVizPCAStats *op = static_cast<vtkPSciVizPCAStats *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetBasisScheme() :
      op->vtkPSciVizPCAStats::GetBasisScheme());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPSciVizPCAStats_SetFixedBasisSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFixedBasisSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPSciVizPCAStats *op = static_cast<vtkPSciVizPCAStats *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetFixedBasisSize(temp0);
      }
    else
      {
      op->vtkPSciVizPCAStats::SetFixedBasisSize(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPSciVizPCAStats_GetFixedBasisSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFixedBasisSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPSciVizPCAStats *op = static_cast<vtkPSciVizPCAStats *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetFixedBasisSize() :
      op->vtkPSciVizPCAStats::GetFixedBasisSize());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPSciVizPCAStats_SetFixedBasisEnergy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFixedBasisEnergy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPSciVizPCAStats *op = static_cast<vtkPSciVizPCAStats *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetFixedBasisEnergy(temp0);
      }
    else
      {
      op->vtkPSciVizPCAStats::SetFixedBasisEnergy(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPSciVizPCAStats_GetFixedBasisEnergyMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFixedBasisEnergyMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPSciVizPCAStats *op = static_cast<vtkPSciVizPCAStats *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetFixedBasisEnergyMinValue() :
      op->vtkPSciVizPCAStats::GetFixedBasisEnergyMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPSciVizPCAStats_GetFixedBasisEnergyMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFixedBasisEnergyMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPSciVizPCAStats *op = static_cast<vtkPSciVizPCAStats *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetFixedBasisEnergyMaxValue() :
      op->vtkPSciVizPCAStats::GetFixedBasisEnergyMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPSciVizPCAStats_GetFixedBasisEnergy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFixedBasisEnergy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPSciVizPCAStats *op = static_cast<vtkPSciVizPCAStats *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetFixedBasisEnergy() :
      op->vtkPSciVizPCAStats::GetFixedBasisEnergy());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPSciVizPCAStats_SetRobustPCA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRobustPCA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPSciVizPCAStats *op = static_cast<vtkPSciVizPCAStats *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetRobustPCA(temp0);
      }
    else
      {
      op->vtkPSciVizPCAStats::SetRobustPCA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPSciVizPCAStats_GetRobustPCA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRobustPCA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPSciVizPCAStats *op = static_cast<vtkPSciVizPCAStats *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetRobustPCA() :
      op->vtkPSciVizPCAStats::GetRobustPCA());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPSciVizPCAStats_RobustPCAOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RobustPCAOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPSciVizPCAStats *op = static_cast<vtkPSciVizPCAStats *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->RobustPCAOn();
      }
    else
      {
      op->vtkPSciVizPCAStats::RobustPCAOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPSciVizPCAStats_RobustPCAOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RobustPCAOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPSciVizPCAStats *op = static_cast<vtkPSciVizPCAStats *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->RobustPCAOff();
      }
    else
      {
      op->vtkPSciVizPCAStats::RobustPCAOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkPSciVizPCAStats_Methods[] = {
  {(char*)"GetClassName", PyvtkPSciVizPCAStats_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkPSciVizPCAStats_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkPSciVizPCAStats_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkPSciVizPCAStats\nC++: vtkPSciVizPCAStats *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkPSciVizPCAStats_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkPSciVizPCAStats\nC++: vtkPSciVizPCAStats *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetNormalizationScheme", PyvtkPSciVizPCAStats_SetNormalizationScheme, METH_VARARGS,
   (char*)"V.SetNormalizationScheme(int)\nC++: void SetNormalizationScheme(int a)\n\n"},
  {(char*)"GetNormalizationScheme", PyvtkPSciVizPCAStats_GetNormalizationScheme, METH_VARARGS,
   (char*)"V.GetNormalizationScheme() -> int\nC++: int GetNormalizationScheme()\n\n"},
  {(char*)"SetBasisScheme", PyvtkPSciVizPCAStats_SetBasisScheme, METH_VARARGS,
   (char*)"V.SetBasisScheme(int)\nC++: void SetBasisScheme(int a)\n\n"},
  {(char*)"GetBasisScheme", PyvtkPSciVizPCAStats_GetBasisScheme, METH_VARARGS,
   (char*)"V.GetBasisScheme() -> int\nC++: int GetBasisScheme()\n\n"},
  {(char*)"SetFixedBasisSize", PyvtkPSciVizPCAStats_SetFixedBasisSize, METH_VARARGS,
   (char*)"V.SetFixedBasisSize(int)\nC++: void SetFixedBasisSize(int a)\n\n"},
  {(char*)"GetFixedBasisSize", PyvtkPSciVizPCAStats_GetFixedBasisSize, METH_VARARGS,
   (char*)"V.GetFixedBasisSize() -> int\nC++: int GetFixedBasisSize()\n\n"},
  {(char*)"SetFixedBasisEnergy", PyvtkPSciVizPCAStats_SetFixedBasisEnergy, METH_VARARGS,
   (char*)"V.SetFixedBasisEnergy(float)\nC++: void SetFixedBasisEnergy(double)\n\n"},
  {(char*)"GetFixedBasisEnergyMinValue", PyvtkPSciVizPCAStats_GetFixedBasisEnergyMinValue, METH_VARARGS,
   (char*)"V.GetFixedBasisEnergyMinValue() -> float\nC++: double GetFixedBasisEnergyMinValue()\n\n"},
  {(char*)"GetFixedBasisEnergyMaxValue", PyvtkPSciVizPCAStats_GetFixedBasisEnergyMaxValue, METH_VARARGS,
   (char*)"V.GetFixedBasisEnergyMaxValue() -> float\nC++: double GetFixedBasisEnergyMaxValue()\n\n"},
  {(char*)"GetFixedBasisEnergy", PyvtkPSciVizPCAStats_GetFixedBasisEnergy, METH_VARARGS,
   (char*)"V.GetFixedBasisEnergy() -> float\nC++: double GetFixedBasisEnergy()\n\n"},
  {(char*)"SetRobustPCA", PyvtkPSciVizPCAStats_SetRobustPCA, METH_VARARGS,
   (char*)"V.SetRobustPCA(bool)\nC++: void SetRobustPCA(bool a)\n\n"},
  {(char*)"GetRobustPCA", PyvtkPSciVizPCAStats_GetRobustPCA, METH_VARARGS,
   (char*)"V.GetRobustPCA() -> bool\nC++: bool GetRobustPCA()\n\n"},
  {(char*)"RobustPCAOn", PyvtkPSciVizPCAStats_RobustPCAOn, METH_VARARGS,
   (char*)"V.RobustPCAOn()\nC++: void RobustPCAOn()\n\n"},
  {(char*)"RobustPCAOff", PyvtkPSciVizPCAStats_RobustPCAOff, METH_VARARGS,
   (char*)"V.RobustPCAOff()\nC++: void RobustPCAOff()\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkPSciVizPCAStats_StaticNew()
{
  return vtkPSciVizPCAStats::New();
}

PyObject *PyVTKClass_vtkPSciVizPCAStatsNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkPSciVizPCAStats_StaticNew,
    PyvtkPSciVizPCAStats_Methods,
    "vtkPSciVizPCAStats", modulename,
    NULL, NULL,
    PyvtkPSciVizPCAStats_Doc(),
    PyVTKClass_vtkSciVizStatisticsNew(modulename));
  return cls;
}

const char **PyvtkPSciVizPCAStats_Doc()
{
  static const char *docstring[] = {
    "vtkPSciVizPCAStats - Perform PCA on data and/or project data into a\nsubspace defined by the PCA.\n\n",
    "Superclass: vtkSciVizStatistics\n\n",
    "This filter either computes a statistical model of a dataset or takes\nsuch a model as its second input. Then, the model (however it is\nobtained) may optionally be used to assess the input dataset.\n\nThis filter performs additional analysis above and beyond the\nvtkPSciVizMultiCorrelativeStats filter. It computes the eigenvalues\nand eigenvectors of the covariance matrix from the multicorrelative\nfilt",
    "er. Data is then assessed by projecting the original tuples into\na possibly lower-dimensional space.\n\nSince the PCA filter uses the multicorrelative filter's analysis, it\nshares the same raw covariance table specified in the\nmulticorrelative documentation. The second table in the multiblock\ndataset comprising the model output is an expanded version of the\nmulticorrelative version.\n\nAs with the mul",
    "ticorrlative filter, the second model table contains\nthe mean values, the upper-triangular portion of the symmetric\ncovariance matrix, and the non-zero lower-triangular portion of the\nCholesky decomposition of the covariance matrix. Below these entries\nare the eigenvalues of the covariance matrix (in the column labeled\n\"Mean\") and the eigenvectors (as row vectors) in an additional NxN\nmatrix.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPSciVizPCAStats(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPSciVizPCAStatsNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPSciVizPCAStats", o) != 0)
    {
    Py_DECREF(o);
    }

}

