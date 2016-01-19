// python wrapper for vtkPSciVizContingencyStats
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkPSciVizContingencyStats.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkPSciVizContingencyStats(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkPSciVizContingencyStatsNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkSciVizStatisticsNew
extern "C" { PyObject *PyVTKClass_vtkSciVizStatisticsNew(const char *); }
#define DECLARED_PyVTKClass_vtkSciVizStatisticsNew
#endif

static const char **PyvtkPSciVizContingencyStats_Doc();


static PyObject *
PyvtkPSciVizContingencyStats_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPSciVizContingencyStats *op = static_cast<vtkPSciVizContingencyStats *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkPSciVizContingencyStats::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPSciVizContingencyStats_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPSciVizContingencyStats *op = static_cast<vtkPSciVizContingencyStats *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPSciVizContingencyStats::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPSciVizContingencyStats_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPSciVizContingencyStats *op = static_cast<vtkPSciVizContingencyStats *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPSciVizContingencyStats *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPSciVizContingencyStats::NewInstance());

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
PyvtkPSciVizContingencyStats_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkPSciVizContingencyStats *tempr = vtkPSciVizContingencyStats::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkPSciVizContingencyStats_Methods[] = {
  {(char*)"GetClassName", PyvtkPSciVizContingencyStats_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkPSciVizContingencyStats_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkPSciVizContingencyStats_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkPSciVizContingencyStats\nC++: vtkPSciVizContingencyStats *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkPSciVizContingencyStats_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkPSciVizContingencyStats\nC++: vtkPSciVizContingencyStats *SafeDownCast(vtkObject* o)\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkPSciVizContingencyStats_StaticNew()
{
  return vtkPSciVizContingencyStats::New();
}

PyObject *PyVTKClass_vtkPSciVizContingencyStatsNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkPSciVizContingencyStats_StaticNew,
    PyvtkPSciVizContingencyStats_Methods,
    "vtkPSciVizContingencyStats", modulename,
    NULL, NULL,
    PyvtkPSciVizContingencyStats_Doc(),
    PyVTKClass_vtkSciVizStatisticsNew(modulename));
  return cls;
}

const char **PyvtkPSciVizContingencyStats_Doc()
{
  static const char *docstring[] = {
    "vtkPSciVizContingencyStats - Derive contingency tables and use them\nto assess the likelihood of associations.\n\n",
    "Superclass: vtkSciVizStatistics\n\n",
    "This filter either computes a statistical model of a dataset or takes\nsuch a model as its second input. Then, the model (however it is\nobtained) may optionally be used to assess the input dataset.\n\nThis filter computes contingency tables between pairs of attributes.\nThis result is a tabular bivariate probability distribution which\nserves as a Bayesian-style prior model. Data is assessed by computi",
    "ng\nthe probability of observing both variables simultaneously; the\nprobability of each variable conditioned on the other\n     (the two values need not be identical); and the pointwise mutual\ninformation (PMI).  Finally, the summary statistics include the\ninformation entropy of the observations.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPSciVizContingencyStats(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPSciVizContingencyStatsNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPSciVizContingencyStats", o) != 0)
    {
    Py_DECREF(o);
    }

}

