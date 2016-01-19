// python wrapper for vtkPSciVizKMeans
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkPSciVizKMeans.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkPSciVizKMeans(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkPSciVizKMeansNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkSciVizStatisticsNew
extern "C" { PyObject *PyVTKClass_vtkSciVizStatisticsNew(const char *); }
#define DECLARED_PyVTKClass_vtkSciVizStatisticsNew
#endif

static const char **PyvtkPSciVizKMeans_Doc();


static PyObject *
PyvtkPSciVizKMeans_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPSciVizKMeans *op = static_cast<vtkPSciVizKMeans *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkPSciVizKMeans::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPSciVizKMeans_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPSciVizKMeans *op = static_cast<vtkPSciVizKMeans *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPSciVizKMeans::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPSciVizKMeans_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPSciVizKMeans *op = static_cast<vtkPSciVizKMeans *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPSciVizKMeans *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPSciVizKMeans::NewInstance());

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
PyvtkPSciVizKMeans_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkPSciVizKMeans *tempr = vtkPSciVizKMeans::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPSciVizKMeans_SetK(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetK");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPSciVizKMeans *op = static_cast<vtkPSciVizKMeans *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetK(temp0);
      }
    else
      {
      op->vtkPSciVizKMeans::SetK(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPSciVizKMeans_GetK(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetK");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPSciVizKMeans *op = static_cast<vtkPSciVizKMeans *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetK() :
      op->vtkPSciVizKMeans::GetK());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPSciVizKMeans_SetMaxNumIterations(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaxNumIterations");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPSciVizKMeans *op = static_cast<vtkPSciVizKMeans *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetMaxNumIterations(temp0);
      }
    else
      {
      op->vtkPSciVizKMeans::SetMaxNumIterations(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPSciVizKMeans_GetMaxNumIterations(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaxNumIterations");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPSciVizKMeans *op = static_cast<vtkPSciVizKMeans *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetMaxNumIterations() :
      op->vtkPSciVizKMeans::GetMaxNumIterations());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPSciVizKMeans_SetTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTolerance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPSciVizKMeans *op = static_cast<vtkPSciVizKMeans *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetTolerance(temp0);
      }
    else
      {
      op->vtkPSciVizKMeans::SetTolerance(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPSciVizKMeans_GetTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTolerance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPSciVizKMeans *op = static_cast<vtkPSciVizKMeans *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetTolerance() :
      op->vtkPSciVizKMeans::GetTolerance());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkPSciVizKMeans_Methods[] = {
  {(char*)"GetClassName", PyvtkPSciVizKMeans_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkPSciVizKMeans_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkPSciVizKMeans_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkPSciVizKMeans\nC++: vtkPSciVizKMeans *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkPSciVizKMeans_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkPSciVizKMeans\nC++: vtkPSciVizKMeans *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetK", PyvtkPSciVizKMeans_SetK, METH_VARARGS,
   (char*)"V.SetK(int)\nC++: void SetK(int a)\n\nThe number of cluster centers. The initial centers will be chosen\nrandomly. In the future the filter will accept an input table of\ninitial cluster positions. The default value of K is 5.\n"},
  {(char*)"GetK", PyvtkPSciVizKMeans_GetK, METH_VARARGS,
   (char*)"V.GetK() -> int\nC++: int GetK()\n\nThe number of cluster centers. The initial centers will be chosen\nrandomly. In the future the filter will accept an input table of\ninitial cluster positions. The default value of K is 5.\n"},
  {(char*)"SetMaxNumIterations", PyvtkPSciVizKMeans_SetMaxNumIterations, METH_VARARGS,
   (char*)"V.SetMaxNumIterations(int)\nC++: void SetMaxNumIterations(int a)\n\nThe maximum number of iterations to perform when converging on\ncluster centers. The default value is 50 iterations.\n"},
  {(char*)"GetMaxNumIterations", PyvtkPSciVizKMeans_GetMaxNumIterations, METH_VARARGS,
   (char*)"V.GetMaxNumIterations() -> int\nC++: int GetMaxNumIterations()\n\nThe maximum number of iterations to perform when converging on\ncluster centers. The default value is 50 iterations.\n"},
  {(char*)"SetTolerance", PyvtkPSciVizKMeans_SetTolerance, METH_VARARGS,
   (char*)"V.SetTolerance(float)\nC++: void SetTolerance(double a)\n\nThe relative tolerance on cluster centers that will cause early\ntermination of the algorithm. The default value is 0.01: a 1\npercent change in cluster coordinates.\n"},
  {(char*)"GetTolerance", PyvtkPSciVizKMeans_GetTolerance, METH_VARARGS,
   (char*)"V.GetTolerance() -> float\nC++: double GetTolerance()\n\nThe relative tolerance on cluster centers that will cause early\ntermination of the algorithm. The default value is 0.01: a 1\npercent change in cluster coordinates.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkPSciVizKMeans_StaticNew()
{
  return vtkPSciVizKMeans::New();
}

PyObject *PyVTKClass_vtkPSciVizKMeansNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkPSciVizKMeans_StaticNew,
    PyvtkPSciVizKMeans_Methods,
    "vtkPSciVizKMeans", modulename,
    NULL, NULL,
    PyvtkPSciVizKMeans_Doc(),
    PyVTKClass_vtkSciVizStatisticsNew(modulename));
  return cls;
}

const char **PyvtkPSciVizKMeans_Doc()
{
  static const char *docstring[] = {
    "vtkPSciVizKMeans - Find k cluster centers and/or assess the closest\ncenter and distance to it for each datum.\n\n",
    "Superclass: vtkSciVizStatistics\n\n",
    "This filter either computes a statistical model of a dataset or takes\nsuch a model as its second input. Then, the model (however it is\nobtained) may optionally be used to assess the input dataset.\n\nThis filter iteratively computes the center of k clusters in a space\nwhose coordinates are specified by the arrays you select. The\nclusters are chosen as local minima of the sum of square Euclidean\ndist",
    "ances from each point to its nearest cluster center. The model is\nthen a set of cluster centers. Data is assessed by assigning a\ncluster center and distance to the cluster to each point in the input\ndata set.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPSciVizKMeans(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPSciVizKMeansNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPSciVizKMeans", o) != 0)
    {
    Py_DECREF(o);
    }

}

