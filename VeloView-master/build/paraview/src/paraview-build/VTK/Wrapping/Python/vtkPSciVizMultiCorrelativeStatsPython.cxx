// python wrapper for vtkPSciVizMultiCorrelativeStats
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkPSciVizMultiCorrelativeStats.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkPSciVizMultiCorrelativeStats(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkPSciVizMultiCorrelativeStatsNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkSciVizStatisticsNew
extern "C" { PyObject *PyVTKClass_vtkSciVizStatisticsNew(const char *); }
#define DECLARED_PyVTKClass_vtkSciVizStatisticsNew
#endif

static const char **PyvtkPSciVizMultiCorrelativeStats_Doc();


static PyObject *
PyvtkPSciVizMultiCorrelativeStats_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPSciVizMultiCorrelativeStats *op = static_cast<vtkPSciVizMultiCorrelativeStats *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkPSciVizMultiCorrelativeStats::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPSciVizMultiCorrelativeStats_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPSciVizMultiCorrelativeStats *op = static_cast<vtkPSciVizMultiCorrelativeStats *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPSciVizMultiCorrelativeStats::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPSciVizMultiCorrelativeStats_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPSciVizMultiCorrelativeStats *op = static_cast<vtkPSciVizMultiCorrelativeStats *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPSciVizMultiCorrelativeStats *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPSciVizMultiCorrelativeStats::NewInstance());

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
PyvtkPSciVizMultiCorrelativeStats_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkPSciVizMultiCorrelativeStats *tempr = vtkPSciVizMultiCorrelativeStats::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkPSciVizMultiCorrelativeStats_Methods[] = {
  {(char*)"GetClassName", PyvtkPSciVizMultiCorrelativeStats_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkPSciVizMultiCorrelativeStats_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkPSciVizMultiCorrelativeStats_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkPSciVizMultiCorrelativeStats\nC++: vtkPSciVizMultiCorrelativeStats *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkPSciVizMultiCorrelativeStats_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkPSciVizMultiCorrelativeStats\nC++: vtkPSciVizMultiCorrelativeStats *SafeDownCast(vtkObject* o)\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkPSciVizMultiCorrelativeStats_StaticNew()
{
  return vtkPSciVizMultiCorrelativeStats::New();
}

PyObject *PyVTKClass_vtkPSciVizMultiCorrelativeStatsNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkPSciVizMultiCorrelativeStats_StaticNew,
    PyvtkPSciVizMultiCorrelativeStats_Methods,
    "vtkPSciVizMultiCorrelativeStats", modulename,
    NULL, NULL,
    PyvtkPSciVizMultiCorrelativeStats_Doc(),
    PyVTKClass_vtkSciVizStatisticsNew(modulename));
  return cls;
}

const char **PyvtkPSciVizMultiCorrelativeStats_Doc()
{
  static const char *docstring[] = {
    "vtkPSciVizMultiCorrelativeStats - Fit a multivariate Gaussian to data\nand/or assess Mahalanobis distance of each datum from the mean.\n\n",
    "Superclass: vtkSciVizStatistics\n\n",
    "This filter either computes a statistical model of a dataset or takes\nsuch a model as its second input. Then, the model (however it is\nobtained) may optionally be used to assess the input dataset.\n\nThis filter computes the covariance matrix for all the arrays you\nselect plus the mean of each array. The model is thus a multivariate\nGaussian distribution with the mean vector and variances provided.\n",
    "Data is assessed using this model by computing the Mahalanobis\ndistance for each input point. This distance will always be positive.\n\nThe learned model output format is rather dense and can be confusing,\nso it is discussed here. The first filter output is a multiblock\ndataset consisting of 2 tables:  Raw covariance data. Covariance\nmatrix and its Cholesky decomposition.  The raw covariance table h",
    "as\n3 meaningful columns: 2 titled \"Column1\" and \"Column2\" whose entries\ngenerally refer to the N arrays you selected when preparing the\nfilter and 1 column titled \"Entries\" that contains numeric values.\nThe first row will always contain the number of observations in the\nstatistical analysis. The next N rows contain the mean for each of\nthe N arrays you selected. The remaining rows contain covarian",
    "ces of\npairs of arrays.\n\nThe second table (covariance matrix and Cholesky decomposition)\ncontains information derived from the raw covariance data of the\nfirst table. The first N rows of the first column contain the name of\none array you selected for analysis. These rows are followed by a\nsingle entry labeled \"Cholesky\" for a total of N+1 rows. The second\ncolumn, Mean contains the mean of each var",
    "iable in the first N\nentries and the number of observations processed in the final (N+1)\nrow.\n\nThe remaining columns (there are N, one for each array) contain 2\nmatrices in triangular format. The upper right triangle contains the\ncovariance matrix (which is symmetric, so its lower triangle may be\ninferred). The lower left triangle contains the Cholesky\ndecomposition of the covariance matrix (which",
    " is triangular, so its\nupper triangle is zero). Because the diagonal must be stored for both\nmatrices, an additional row is required - hence the N+1 rows and the\nfinal entry of the column named \"Column\".\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPSciVizMultiCorrelativeStats(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPSciVizMultiCorrelativeStatsNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPSciVizMultiCorrelativeStats", o) != 0)
    {
    Py_DECREF(o);
    }

}

