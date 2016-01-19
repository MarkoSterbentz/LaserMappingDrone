// python wrapper for vtkContingencyStatistics
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkContingencyStatistics.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkContingencyStatistics(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkContingencyStatisticsNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkStatisticsAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkStatisticsAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkStatisticsAlgorithmNew
#endif

static const char **PyvtkContingencyStatistics_Doc();


static PyObject *
PyvtkContingencyStatistics_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContingencyStatistics *op = static_cast<vtkContingencyStatistics *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkContingencyStatistics::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkContingencyStatistics_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContingencyStatistics *op = static_cast<vtkContingencyStatistics *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkContingencyStatistics::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkContingencyStatistics_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContingencyStatistics *op = static_cast<vtkContingencyStatistics *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkContingencyStatistics *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkContingencyStatistics::NewInstance());

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
PyvtkContingencyStatistics_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkContingencyStatistics *tempr = vtkContingencyStatistics::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkContingencyStatistics_Aggregate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Aggregate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContingencyStatistics *op = static_cast<vtkContingencyStatistics *>(vp);

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
      op->vtkContingencyStatistics::Aggregate(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkContingencyStatistics_Methods[] = {
  {(char*)"GetClassName", PyvtkContingencyStatistics_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkContingencyStatistics_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkContingencyStatistics_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkContingencyStatistics\nC++: vtkContingencyStatistics *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkContingencyStatistics_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkContingencyStatistics\nC++: vtkContingencyStatistics *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"Aggregate", PyvtkContingencyStatistics_Aggregate, METH_VARARGS,
   (char*)"V.Aggregate(vtkDataObjectCollection, vtkMultiBlockDataSet)\nC++: virtual void Aggregate(vtkDataObjectCollection *,\n    vtkMultiBlockDataSet *)\n\nGiven a collection of models, calculate aggregate model NB: not\nimplemented\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkContingencyStatistics_StaticNew()
{
  return vtkContingencyStatistics::New();
}

PyObject *PyVTKClass_vtkContingencyStatisticsNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkContingencyStatistics_StaticNew,
    PyvtkContingencyStatistics_Methods,
    "vtkContingencyStatistics", modulename,
    NULL, NULL,
    PyvtkContingencyStatistics_Doc(),
    PyVTKClass_vtkStatisticsAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkContingencyStatistics_Doc()
{
  static const char *docstring[] = {
    "vtkContingencyStatistics - A class for bivariate correlation\ncontigency\n\n",
    "Superclass: vtkStatisticsAlgorithm\n\n",
    "Given a pair of columns of interest, this class provides the\nfollowing functionalities, depending on the operation in which it is\nexecuted:\n* Learn: calculate contigency tables and corresponding discrete joint\n  probability distribution.\n* Derive: calculate conditional probabilities, information entropies,\nand pointwise mutual information.\n* Assess: given two columns of interest with the same numb",
    "er of\n  entries as input in port INPUT_DATA, and a corresponding bivariate\n  probability distribution,\n* Test: calculate Chi-square independence statistic and, if VTK to R\n  interface is available, retrieve corresponding p-value for\n  independence testing.\n\nThanks:\n\nThanks to Philippe Pebay and David Thompson from Sandia National\nLaboratories for implementing this class. Updated by Philippe Pebay,",
    "\nKitware SAS 2012\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkContingencyStatistics(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkContingencyStatisticsNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkContingencyStatistics", o) != 0)
    {
    Py_DECREF(o);
    }

}

