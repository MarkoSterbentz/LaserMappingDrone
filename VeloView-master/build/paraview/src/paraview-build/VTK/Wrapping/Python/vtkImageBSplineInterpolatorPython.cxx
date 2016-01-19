// python wrapper for vtkImageBSplineInterpolator
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkImageBSplineInterpolator.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkImageBSplineInterpolator(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkImageBSplineInterpolatorNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkAbstractImageInterpolatorNew
extern "C" { PyObject *PyVTKClass_vtkAbstractImageInterpolatorNew(const char *); }
#define DECLARED_PyVTKClass_vtkAbstractImageInterpolatorNew
#endif

static const char **PyvtkImageBSplineInterpolator_Doc();


static PyObject *
PyvtkImageBSplineInterpolator_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageBSplineInterpolator *op = static_cast<vtkImageBSplineInterpolator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkImageBSplineInterpolator::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageBSplineInterpolator_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageBSplineInterpolator *op = static_cast<vtkImageBSplineInterpolator *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkImageBSplineInterpolator::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageBSplineInterpolator_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageBSplineInterpolator *op = static_cast<vtkImageBSplineInterpolator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkImageBSplineInterpolator *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkImageBSplineInterpolator::NewInstance());

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
PyvtkImageBSplineInterpolator_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkImageBSplineInterpolator *tempr = vtkImageBSplineInterpolator::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageBSplineInterpolator_SetSplineDegree(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSplineDegree");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageBSplineInterpolator *op = static_cast<vtkImageBSplineInterpolator *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetSplineDegree(temp0);
      }
    else
      {
      op->vtkImageBSplineInterpolator::SetSplineDegree(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageBSplineInterpolator_GetSplineDegree(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSplineDegree");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageBSplineInterpolator *op = static_cast<vtkImageBSplineInterpolator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetSplineDegree() :
      op->vtkImageBSplineInterpolator::GetSplineDegree());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageBSplineInterpolator_GetSplineDegreeMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSplineDegreeMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageBSplineInterpolator *op = static_cast<vtkImageBSplineInterpolator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetSplineDegreeMinValue() :
      op->vtkImageBSplineInterpolator::GetSplineDegreeMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageBSplineInterpolator_GetSplineDegreeMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSplineDegreeMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageBSplineInterpolator *op = static_cast<vtkImageBSplineInterpolator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetSplineDegreeMaxValue() :
      op->vtkImageBSplineInterpolator::GetSplineDegreeMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageBSplineInterpolator_ComputeSupportSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeSupportSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageBSplineInterpolator *op = static_cast<vtkImageBSplineInterpolator *>(vp);

  double temp0[16];
  const int size0 = 16;
  int temp1[3];
  int save1[3];
  const int size1 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1))
    {
    ap.SaveArray(temp1, save1, size1);

    if (ap.IsBound())
      {
      op->ComputeSupportSize(temp0, temp1);
      }
    else
      {
      op->vtkImageBSplineInterpolator::ComputeSupportSize(temp0, temp1);
      }

    if (ap.ArrayHasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(1, temp1, size1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageBSplineInterpolator_IsSeparable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsSeparable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageBSplineInterpolator *op = static_cast<vtkImageBSplineInterpolator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->IsSeparable() :
      op->vtkImageBSplineInterpolator::IsSeparable());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkImageBSplineInterpolator_Methods[] = {
  {(char*)"GetClassName", PyvtkImageBSplineInterpolator_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkImageBSplineInterpolator_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkImageBSplineInterpolator_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkImageBSplineInterpolator\nC++: vtkImageBSplineInterpolator *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkImageBSplineInterpolator_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkImageBSplineInterpolator\nC++: vtkImageBSplineInterpolator *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetSplineDegree", PyvtkImageBSplineInterpolator_SetSplineDegree, METH_VARARGS,
   (char*)"V.SetSplineDegree(int)\nC++: void SetSplineDegree(int degree)\n\nSet the degree of the spline polynomial.  The default value is 3,\nand the maximum is 9.  The data must be pre-filtered for the same\ndegree of polynomial with vtkImageBSplineCoefficients.\n"},
  {(char*)"GetSplineDegree", PyvtkImageBSplineInterpolator_GetSplineDegree, METH_VARARGS,
   (char*)"V.GetSplineDegree() -> int\nC++: int GetSplineDegree()\n\nSet the degree of the spline polynomial.  The default value is 3,\nand the maximum is 9.  The data must be pre-filtered for the same\ndegree of polynomial with vtkImageBSplineCoefficients.\n"},
  {(char*)"GetSplineDegreeMinValue", PyvtkImageBSplineInterpolator_GetSplineDegreeMinValue, METH_VARARGS,
   (char*)"V.GetSplineDegreeMinValue() -> int\nC++: int GetSplineDegreeMinValue()\n\nSet the degree of the spline polynomial.  The default value is 3,\nand the maximum is 9.  The data must be pre-filtered for the same\ndegree of polynomial with vtkImageBSplineCoefficients.\n"},
  {(char*)"GetSplineDegreeMaxValue", PyvtkImageBSplineInterpolator_GetSplineDegreeMaxValue, METH_VARARGS,
   (char*)"V.GetSplineDegreeMaxValue() -> int\nC++: int GetSplineDegreeMaxValue()\n\nSet the degree of the spline polynomial.  The default value is 3,\nand the maximum is 9.  The data must be pre-filtered for the same\ndegree of polynomial with vtkImageBSplineCoefficients.\n"},
  {(char*)"ComputeSupportSize", PyvtkImageBSplineInterpolator_ComputeSupportSize, METH_VARARGS,
   (char*)"V.ComputeSupportSize((float, float, float, float, float, float,\n    float, float, float, float, float, float, float, float, float,\n     float), [int, int, int])\nC++: virtual void ComputeSupportSize(const double matrix[16],\n    int support[3])\n\nGet the support size for use in computing update extents.  If the\ndata will be sampled on a regular grid, then pass a matrix\ndescribing the structured coordinate transformation between the\noutput and the input. Otherwise, pass NULL as the matrix to\nretrieve the full kernel size.\n"},
  {(char*)"IsSeparable", PyvtkImageBSplineInterpolator_IsSeparable, METH_VARARGS,
   (char*)"V.IsSeparable() -> bool\nC++: virtual bool IsSeparable()\n\nReturns true if the interpolator supports weight precomputation.\nThis will always return true for this interpolator.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkImageBSplineInterpolator_StaticNew()
{
  return vtkImageBSplineInterpolator::New();
}

PyObject *PyVTKClass_vtkImageBSplineInterpolatorNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkImageBSplineInterpolator_StaticNew,
    PyvtkImageBSplineInterpolator_Methods,
    "vtkImageBSplineInterpolator", modulename,
    NULL, NULL,
    PyvtkImageBSplineInterpolator_Doc(),
    PyVTKClass_vtkAbstractImageInterpolatorNew(modulename));
  return cls;
}

const char **PyvtkImageBSplineInterpolator_Doc()
{
  static const char *docstring[] = {
    "vtkImageBSplineInterpolator - perform b-spline interpolation on images\n\n",
    "Superclass: vtkAbstractImageInterpolator\n\n",
    "vtkImageBSplineInterpolator can be used to perform b-spline\ninterpolation on images that have been filtered with\nvtkImageBSplineCoefficients.  The b-spline interpolants provide the\nmaximum possible degree of continuity for a given kernel size, but\nrequire that the image data be pre-filtered to generate b-spline\ncoefficients before the interpolation is performed. Interpolating\ndata that has not bee",
    "n pre-filtered will give incorrect results.\n\nSee also:\n\nvtkImageReslice vtkImageBSplineCoefficients vtkBSplineTransform\n\nThanks:\n\nThis class was written by David Gobbi at the Seaman Family MR\nResearch Centre, Foothills Medical Centre, Calgary, Alberta. DG Gobbi\nand YP Starreveld, \"Uniform B-Splines for the VTK Imaging Pipeline,\"\nVTK Journal, 2011, http://hdl.handle.net/10380/3252\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkImageBSplineInterpolator(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkImageBSplineInterpolatorNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkImageBSplineInterpolator", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(9);
  if (o)
    {
    PyDict_SetItemString(dict, (char *)"VTK_IMAGE_BSPLINE_DEGREE_MAX", o);
    Py_DECREF(o);
    }
}

