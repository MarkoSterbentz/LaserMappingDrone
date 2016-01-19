// python wrapper for vtkPCAAnalysisFilter
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkPCAAnalysisFilter.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkPCAAnalysisFilter(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkPCAAnalysisFilterNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkMultiBlockDataSetAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkMultiBlockDataSetAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkMultiBlockDataSetAlgorithmNew
#endif

static const char **PyvtkPCAAnalysisFilter_Doc();


static PyObject *
PyvtkPCAAnalysisFilter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPCAAnalysisFilter *op = static_cast<vtkPCAAnalysisFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkPCAAnalysisFilter::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPCAAnalysisFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPCAAnalysisFilter *op = static_cast<vtkPCAAnalysisFilter *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPCAAnalysisFilter::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPCAAnalysisFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPCAAnalysisFilter *op = static_cast<vtkPCAAnalysisFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPCAAnalysisFilter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPCAAnalysisFilter::NewInstance());

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
PyvtkPCAAnalysisFilter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkPCAAnalysisFilter *tempr = vtkPCAAnalysisFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPCAAnalysisFilter_GetEvals(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEvals");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPCAAnalysisFilter *op = static_cast<vtkPCAAnalysisFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkFloatArray *tempr = (ap.IsBound() ?
      op->GetEvals() :
      op->vtkPCAAnalysisFilter::GetEvals());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPCAAnalysisFilter_GetParameterisedShape(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetParameterisedShape");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPCAAnalysisFilter *op = static_cast<vtkPCAAnalysisFilter *>(vp);

  vtkFloatArray *temp0 = NULL;
  vtkPointSet *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkFloatArray") &&
      ap.GetVTKObject(temp1, "vtkPointSet"))
    {
    if (ap.IsBound())
      {
      op->GetParameterisedShape(temp0, temp1);
      }
    else
      {
      op->vtkPCAAnalysisFilter::GetParameterisedShape(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPCAAnalysisFilter_GetShapeParameters(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetShapeParameters");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPCAAnalysisFilter *op = static_cast<vtkPCAAnalysisFilter *>(vp);

  vtkPointSet *temp0 = NULL;
  vtkFloatArray *temp1 = NULL;
  int temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkPointSet") &&
      ap.GetVTKObject(temp1, "vtkFloatArray") &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      op->GetShapeParameters(temp0, temp1, temp2);
      }
    else
      {
      op->vtkPCAAnalysisFilter::GetShapeParameters(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPCAAnalysisFilter_GetModesRequiredFor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetModesRequiredFor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPCAAnalysisFilter *op = static_cast<vtkPCAAnalysisFilter *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->GetModesRequiredFor(temp0) :
      op->vtkPCAAnalysisFilter::GetModesRequiredFor(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkPCAAnalysisFilter_Methods[] = {
  {(char*)"GetClassName", PyvtkPCAAnalysisFilter_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkPCAAnalysisFilter_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkPCAAnalysisFilter_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkPCAAnalysisFilter\nC++: vtkPCAAnalysisFilter *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkPCAAnalysisFilter_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkPCAAnalysisFilter\nC++: vtkPCAAnalysisFilter *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetEvals", PyvtkPCAAnalysisFilter_GetEvals, METH_VARARGS,
   (char*)"V.GetEvals() -> vtkFloatArray\nC++: vtkFloatArray *GetEvals()\n\nGet the vector of eigenvalues sorted in descending order\n"},
  {(char*)"GetParameterisedShape", PyvtkPCAAnalysisFilter_GetParameterisedShape, METH_VARARGS,
   (char*)"V.GetParameterisedShape(vtkFloatArray, vtkPointSet)\nC++: void GetParameterisedShape(vtkFloatArray *b,\n    vtkPointSet *shape)\n\nFills the shape with:\n\nmean + b[0] * sqrt(eigenvalue[0]) * eigenvector[0]\n     + b[1] * sqrt(eigenvalue[1]) * eigenvector[1] ...\n     + b[sizeb-1] * sqrt(eigenvalue[bsize-1]) *\neigenvector[bsize-1]\n\nhere b are the parameters expressed in standard deviations bsize\nis the number of parameters in the b vector This function assumes\nthat shape is already allocated with the right size, it just\nmoves the points.\n"},
  {(char*)"GetShapeParameters", PyvtkPCAAnalysisFilter_GetShapeParameters, METH_VARARGS,
   (char*)"V.GetShapeParameters(vtkPointSet, vtkFloatArray, int)\nC++: void GetShapeParameters(vtkPointSet *shape, vtkFloatArray *b,\n     int bsize)\n\nReturn the bsize parameters b that best model the given shape (in\nstandard deviations). That is that the given shape will be\napproximated by:\n\nshape ~ mean + b[0] * sqrt(eigenvalue[0]) * eigenvector[0]\n             + b[1] * sqrt(eigenvalue[1]) * eigenvector[1]\n        ...\n             + b[bsize-1] * sqrt(eigenvalue[bsize-1]) *\neigenvector[bsize-1]\n"},
  {(char*)"GetModesRequiredFor", PyvtkPCAAnalysisFilter_GetModesRequiredFor, METH_VARARGS,
   (char*)"V.GetModesRequiredFor(float) -> int\nC++: int GetModesRequiredFor(double proportion)\n\nRetrieve how many modes are necessary to model the given\nproportion of the variation. proportion should be between 0 and 1\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkPCAAnalysisFilter_StaticNew()
{
  return vtkPCAAnalysisFilter::New();
}

PyObject *PyVTKClass_vtkPCAAnalysisFilterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkPCAAnalysisFilter_StaticNew,
    PyvtkPCAAnalysisFilter_Methods,
    "vtkPCAAnalysisFilter", modulename,
    NULL, NULL,
    PyvtkPCAAnalysisFilter_Doc(),
    PyVTKClass_vtkMultiBlockDataSetAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkPCAAnalysisFilter_Doc()
{
  static const char *docstring[] = {
    "vtkPCAAnalysisFilter - Performs principal component analysis of a set\nof aligned pointsets\n\n",
    "Superclass: vtkMultiBlockDataSetAlgorithm\n\n",
    "vtkPCAAnalysisFilter is a filter that takes as input a set of aligned\npointsets (any object derived from vtkPointSet) and performs a\nprincipal component analysis of the coordinates. This can be used to\nvisualise the major or minor modes of variation seen in a set of\nsimilar biological objects with corresponding landmarks.\nvtkPCAAnalysisFilter is designed to work with the output from the\nvtkProcrus",
    "tesAnalysisFilter vtkPCAAnalysisFilter requires a\nvtkMultiBlock input consisting of vtkPointSets as first level\nchildren.\n\nvtkPCAAnalysisFilter is an implementation of (for example):\n\nT. Cootes et al. : Active Shape Models - their training and\napplication. Computer Vision and Image Understanding, 61(1):38-59,\n1995.\n\nThe material can also be found in Tim Cootes' ever-changing online\nreport publishe",
    "d at his website: http://www.isbe.man.ac.uk/~bim/\n\nCaveats:\n\nAll of the input pointsets must have the same number of points.\n\nThanks:\n\nRasmus Paulsen and Tim Hutton who developed and contributed this\nclass\n\nSee Also:\n\nvtkProcrustesAlignmentFilter\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPCAAnalysisFilter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPCAAnalysisFilterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPCAAnalysisFilter", o) != 0)
    {
    Py_DECREF(o);
    }

}

