// python wrapper for vtkImageGaussianSmooth
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkImageGaussianSmooth.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkImageGaussianSmooth(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkImageGaussianSmoothNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkThreadedImageAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkThreadedImageAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkThreadedImageAlgorithmNew
#endif

static const char **PyvtkImageGaussianSmooth_Doc();


static PyObject *
PyvtkImageGaussianSmooth_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageGaussianSmooth *op = static_cast<vtkImageGaussianSmooth *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkImageGaussianSmooth::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageGaussianSmooth_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageGaussianSmooth *op = static_cast<vtkImageGaussianSmooth *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkImageGaussianSmooth::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageGaussianSmooth_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageGaussianSmooth *op = static_cast<vtkImageGaussianSmooth *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkImageGaussianSmooth *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkImageGaussianSmooth::NewInstance());

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
PyvtkImageGaussianSmooth_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkImageGaussianSmooth *tempr = vtkImageGaussianSmooth::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageGaussianSmooth_SetStandardDeviations_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetStandardDeviations");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageGaussianSmooth *op = static_cast<vtkImageGaussianSmooth *>(vp);

  double temp0;
  double temp1;
  double temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      op->SetStandardDeviations(temp0, temp1, temp2);
      }
    else
      {
      op->vtkImageGaussianSmooth::SetStandardDeviations(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkImageGaussianSmooth_SetStandardDeviations_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetStandardDeviations");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageGaussianSmooth *op = static_cast<vtkImageGaussianSmooth *>(vp);

  double temp0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetStandardDeviations(temp0);
      }
    else
      {
      op->vtkImageGaussianSmooth::SetStandardDeviations(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkImageGaussianSmooth_SetStandardDeviations_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetStandardDeviations");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageGaussianSmooth *op = static_cast<vtkImageGaussianSmooth *>(vp);

  double temp0;
  double temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetStandardDeviations(temp0, temp1);
      }
    else
      {
      op->vtkImageGaussianSmooth::SetStandardDeviations(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkImageGaussianSmooth_SetStandardDeviations(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkImageGaussianSmooth_SetStandardDeviations_s1(self, args);
    case 1:
      return PyvtkImageGaussianSmooth_SetStandardDeviations_s2(self, args);
    case 2:
      return PyvtkImageGaussianSmooth_SetStandardDeviations_s3(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetStandardDeviations");
  return NULL;
}



static PyObject *
PyvtkImageGaussianSmooth_SetStandardDeviation_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetStandardDeviation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageGaussianSmooth *op = static_cast<vtkImageGaussianSmooth *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetStandardDeviation(temp0);
      }
    else
      {
      op->vtkImageGaussianSmooth::SetStandardDeviation(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkImageGaussianSmooth_SetStandardDeviation_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetStandardDeviation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageGaussianSmooth *op = static_cast<vtkImageGaussianSmooth *>(vp);

  double temp0;
  double temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetStandardDeviation(temp0, temp1);
      }
    else
      {
      op->vtkImageGaussianSmooth::SetStandardDeviation(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkImageGaussianSmooth_SetStandardDeviation_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetStandardDeviation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageGaussianSmooth *op = static_cast<vtkImageGaussianSmooth *>(vp);

  double temp0;
  double temp1;
  double temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      op->SetStandardDeviation(temp0, temp1, temp2);
      }
    else
      {
      op->vtkImageGaussianSmooth::SetStandardDeviation(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkImageGaussianSmooth_SetStandardDeviation(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkImageGaussianSmooth_SetStandardDeviation_s1(self, args);
    case 2:
      return PyvtkImageGaussianSmooth_SetStandardDeviation_s2(self, args);
    case 3:
      return PyvtkImageGaussianSmooth_SetStandardDeviation_s3(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetStandardDeviation");
  return NULL;
}



static PyObject *
PyvtkImageGaussianSmooth_GetStandardDeviations(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStandardDeviations");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageGaussianSmooth *op = static_cast<vtkImageGaussianSmooth *>(vp);

  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetStandardDeviations() :
      op->vtkImageGaussianSmooth::GetStandardDeviations());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkImageGaussianSmooth_SetRadiusFactors_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRadiusFactors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageGaussianSmooth *op = static_cast<vtkImageGaussianSmooth *>(vp);

  double temp0;
  double temp1;
  double temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      op->SetRadiusFactors(temp0, temp1, temp2);
      }
    else
      {
      op->vtkImageGaussianSmooth::SetRadiusFactors(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkImageGaussianSmooth_SetRadiusFactors_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRadiusFactors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageGaussianSmooth *op = static_cast<vtkImageGaussianSmooth *>(vp);

  double temp0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetRadiusFactors(temp0);
      }
    else
      {
      op->vtkImageGaussianSmooth::SetRadiusFactors(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkImageGaussianSmooth_SetRadiusFactors_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRadiusFactors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageGaussianSmooth *op = static_cast<vtkImageGaussianSmooth *>(vp);

  double temp0;
  double temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetRadiusFactors(temp0, temp1);
      }
    else
      {
      op->vtkImageGaussianSmooth::SetRadiusFactors(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkImageGaussianSmooth_SetRadiusFactors(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkImageGaussianSmooth_SetRadiusFactors_s1(self, args);
    case 1:
      return PyvtkImageGaussianSmooth_SetRadiusFactors_s2(self, args);
    case 2:
      return PyvtkImageGaussianSmooth_SetRadiusFactors_s3(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetRadiusFactors");
  return NULL;
}



static PyObject *
PyvtkImageGaussianSmooth_SetRadiusFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRadiusFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageGaussianSmooth *op = static_cast<vtkImageGaussianSmooth *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetRadiusFactor(temp0);
      }
    else
      {
      op->vtkImageGaussianSmooth::SetRadiusFactor(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageGaussianSmooth_GetRadiusFactors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRadiusFactors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageGaussianSmooth *op = static_cast<vtkImageGaussianSmooth *>(vp);

  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetRadiusFactors() :
      op->vtkImageGaussianSmooth::GetRadiusFactors());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkImageGaussianSmooth_SetDimensionality(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDimensionality");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageGaussianSmooth *op = static_cast<vtkImageGaussianSmooth *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetDimensionality(temp0);
      }
    else
      {
      op->vtkImageGaussianSmooth::SetDimensionality(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageGaussianSmooth_GetDimensionality(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDimensionality");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageGaussianSmooth *op = static_cast<vtkImageGaussianSmooth *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetDimensionality() :
      op->vtkImageGaussianSmooth::GetDimensionality());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkImageGaussianSmooth_Methods[] = {
  {(char*)"GetClassName", PyvtkImageGaussianSmooth_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkImageGaussianSmooth_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkImageGaussianSmooth_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkImageGaussianSmooth\nC++: vtkImageGaussianSmooth *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkImageGaussianSmooth_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkImageGaussianSmooth\nC++: vtkImageGaussianSmooth *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetStandardDeviations", PyvtkImageGaussianSmooth_SetStandardDeviations, METH_VARARGS,
   (char*)"V.SetStandardDeviations(float, float, float)\nC++: void SetStandardDeviations(double, double, double)\nV.SetStandardDeviations((float, float, float))\nC++: void SetStandardDeviations(double a[3])\nV.SetStandardDeviations(float, float)\nC++: void SetStandardDeviations(double a, double b)\n\n"},
  {(char*)"SetStandardDeviation", PyvtkImageGaussianSmooth_SetStandardDeviation, METH_VARARGS,
   (char*)"V.SetStandardDeviation(float)\nC++: void SetStandardDeviation(double std)\nV.SetStandardDeviation(float, float)\nC++: void SetStandardDeviation(double a, double b)\nV.SetStandardDeviation(float, float, float)\nC++: void SetStandardDeviation(double a, double b, double c)\n\nSets/Gets the Standard deviation of the gaussian in pixel units.\n"},
  {(char*)"GetStandardDeviations", PyvtkImageGaussianSmooth_GetStandardDeviations, METH_VARARGS,
   (char*)"V.GetStandardDeviations() -> (float, float, float)\nC++: double *GetStandardDeviations()\n\n"},
  {(char*)"SetRadiusFactors", PyvtkImageGaussianSmooth_SetRadiusFactors, METH_VARARGS,
   (char*)"V.SetRadiusFactors(float, float, float)\nC++: void SetRadiusFactors(double, double, double)\nV.SetRadiusFactors((float, float, float))\nC++: void SetRadiusFactors(double a[3])\nV.SetRadiusFactors(float, float)\nC++: void SetRadiusFactors(double f, double f2)\n\n"},
  {(char*)"SetRadiusFactor", PyvtkImageGaussianSmooth_SetRadiusFactor, METH_VARARGS,
   (char*)"V.SetRadiusFactor(float)\nC++: void SetRadiusFactor(double f)\n\nSets/Gets the Radius Factors of the gaussian (no unit). The\nradius factors determine how far out the gaussian kernel will go\nbefore being clamped to zero.\n"},
  {(char*)"GetRadiusFactors", PyvtkImageGaussianSmooth_GetRadiusFactors, METH_VARARGS,
   (char*)"V.GetRadiusFactors() -> (float, float, float)\nC++: double *GetRadiusFactors()\n\n"},
  {(char*)"SetDimensionality", PyvtkImageGaussianSmooth_SetDimensionality, METH_VARARGS,
   (char*)"V.SetDimensionality(int)\nC++: void SetDimensionality(int a)\n\nSet/Get the dimensionality of this filter. This determines\nwhether a one, two, or three dimensional gaussian is performed.\n"},
  {(char*)"GetDimensionality", PyvtkImageGaussianSmooth_GetDimensionality, METH_VARARGS,
   (char*)"V.GetDimensionality() -> int\nC++: int GetDimensionality()\n\nSet/Get the dimensionality of this filter. This determines\nwhether a one, two, or three dimensional gaussian is performed.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkImageGaussianSmooth_StaticNew()
{
  return vtkImageGaussianSmooth::New();
}

PyObject *PyVTKClass_vtkImageGaussianSmoothNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkImageGaussianSmooth_StaticNew,
    PyvtkImageGaussianSmooth_Methods,
    "vtkImageGaussianSmooth", modulename,
    NULL, NULL,
    PyvtkImageGaussianSmooth_Doc(),
    PyVTKClass_vtkThreadedImageAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkImageGaussianSmooth_Doc()
{
  static const char *docstring[] = {
    "vtkImageGaussianSmooth - Performs a gaussian convolution.\n\n",
    "Superclass: vtkThreadedImageAlgorithm\n\n",
    "vtkImageGaussianSmooth implements a convolution of the input image\nwith a gaussian. Supports from one to three dimensional convolutions.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkImageGaussianSmooth(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkImageGaussianSmoothNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkImageGaussianSmooth", o) != 0)
    {
    Py_DECREF(o);
    }

}

