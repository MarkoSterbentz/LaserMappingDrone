// python wrapper for vtkTemporalInterpolator
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkTemporalInterpolator.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkTemporalInterpolator(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkTemporalInterpolatorNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkMultiTimeStepAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkMultiTimeStepAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkMultiTimeStepAlgorithmNew
#endif

static const char **PyvtkTemporalInterpolator_Doc();


static PyObject *
PyvtkTemporalInterpolator_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalInterpolator *op = static_cast<vtkTemporalInterpolator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkTemporalInterpolator::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTemporalInterpolator_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalInterpolator *op = static_cast<vtkTemporalInterpolator *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkTemporalInterpolator::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTemporalInterpolator_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalInterpolator *op = static_cast<vtkTemporalInterpolator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkTemporalInterpolator *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkTemporalInterpolator::NewInstance());

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
PyvtkTemporalInterpolator_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkTemporalInterpolator *tempr = vtkTemporalInterpolator::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTemporalInterpolator_SetDiscreteTimeStepInterval(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDiscreteTimeStepInterval");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalInterpolator *op = static_cast<vtkTemporalInterpolator *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetDiscreteTimeStepInterval(temp0);
      }
    else
      {
      op->vtkTemporalInterpolator::SetDiscreteTimeStepInterval(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTemporalInterpolator_GetDiscreteTimeStepInterval(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDiscreteTimeStepInterval");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalInterpolator *op = static_cast<vtkTemporalInterpolator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetDiscreteTimeStepInterval() :
      op->vtkTemporalInterpolator::GetDiscreteTimeStepInterval());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTemporalInterpolator_SetResampleFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetResampleFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalInterpolator *op = static_cast<vtkTemporalInterpolator *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetResampleFactor(temp0);
      }
    else
      {
      op->vtkTemporalInterpolator::SetResampleFactor(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTemporalInterpolator_GetResampleFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetResampleFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalInterpolator *op = static_cast<vtkTemporalInterpolator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetResampleFactor() :
      op->vtkTemporalInterpolator::GetResampleFactor());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTemporalInterpolator_SetCacheData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCacheData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalInterpolator *op = static_cast<vtkTemporalInterpolator *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetCacheData(temp0);
      }
    else
      {
      op->vtkTemporalInterpolator::SetCacheData(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTemporalInterpolator_GetCacheData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCacheData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalInterpolator *op = static_cast<vtkTemporalInterpolator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetCacheData() :
      op->vtkTemporalInterpolator::GetCacheData());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkTemporalInterpolator_Methods[] = {
  {(char*)"GetClassName", PyvtkTemporalInterpolator_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkTemporalInterpolator_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkTemporalInterpolator_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkTemporalInterpolator\nC++: vtkTemporalInterpolator *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkTemporalInterpolator_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkTemporalInterpolator\nC++: vtkTemporalInterpolator *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetDiscreteTimeStepInterval", PyvtkTemporalInterpolator_SetDiscreteTimeStepInterval, METH_VARARGS,
   (char*)"V.SetDiscreteTimeStepInterval(float)\nC++: void SetDiscreteTimeStepInterval(double a)\n\nIf you require a discrete number of outputs steps, to be\ngenerated from an input source - for example, you required N\nsteps separated by T, then set DiscreteTimeStepInterval to T and\nyou will get TIME_RANGE/DiscreteTimeStepInterval steps This is a\nuseful option to use if you have a dataset with one missing time\nstep and wish to 'fill-in' the missing data with an interpolated\nvalue from the steps either side\n"},
  {(char*)"GetDiscreteTimeStepInterval", PyvtkTemporalInterpolator_GetDiscreteTimeStepInterval, METH_VARARGS,
   (char*)"V.GetDiscreteTimeStepInterval() -> float\nC++: double GetDiscreteTimeStepInterval()\n\nIf you require a discrete number of outputs steps, to be\ngenerated from an input source - for example, you required N\nsteps separated by T, then set DiscreteTimeStepInterval to T and\nyou will get TIME_RANGE/DiscreteTimeStepInterval steps This is a\nuseful option to use if you have a dataset with one missing time\nstep and wish to 'fill-in' the missing data with an interpolated\nvalue from the steps either side\n"},
  {(char*)"SetResampleFactor", PyvtkTemporalInterpolator_SetResampleFactor, METH_VARARGS,
   (char*)"V.SetResampleFactor(int)\nC++: void SetResampleFactor(int a)\n\nWhen ResampleFactor is a non zero positive integer, each pair of\ninput time steps will be interpolated between with the number of\nsteps specified. For example an input of 1,2,3,4,5 and a resample\nfactor of 10, will produce steps 0f 1.0, 1.1, 1.2.....1.9, 2.0\netc NB. Irregular input steps will produce irregular output\nsteps. Resample factor wuill only be used if\nDiscreteTimeStepInterval is zero otherwise the\nDiscreteTimeStepInterval takes precedence\n"},
  {(char*)"GetResampleFactor", PyvtkTemporalInterpolator_GetResampleFactor, METH_VARARGS,
   (char*)"V.GetResampleFactor() -> int\nC++: int GetResampleFactor()\n\nWhen ResampleFactor is a non zero positive integer, each pair of\ninput time steps will be interpolated between with the number of\nsteps specified. For example an input of 1,2,3,4,5 and a resample\nfactor of 10, will produce steps 0f 1.0, 1.1, 1.2.....1.9, 2.0\netc NB. Irregular input steps will produce irregular output\nsteps. Resample factor wuill only be used if\nDiscreteTimeStepInterval is zero otherwise the\nDiscreteTimeStepInterval takes precedence\n"},
  {(char*)"SetCacheData", PyvtkTemporalInterpolator_SetCacheData, METH_VARARGS,
   (char*)"V.SetCacheData(bool)\nC++: void SetCacheData(bool a)\n\nControls whether input data is cached to avoid updating input\nwhen multiple interpolations are asked between 2 time steps.\n"},
  {(char*)"GetCacheData", PyvtkTemporalInterpolator_GetCacheData, METH_VARARGS,
   (char*)"V.GetCacheData() -> bool\nC++: bool GetCacheData()\n\nControls whether input data is cached to avoid updating input\nwhen multiple interpolations are asked between 2 time steps.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkTemporalInterpolator_StaticNew()
{
  return vtkTemporalInterpolator::New();
}

PyObject *PyVTKClass_vtkTemporalInterpolatorNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkTemporalInterpolator_StaticNew,
    PyvtkTemporalInterpolator_Methods,
    "vtkTemporalInterpolator", modulename,
    NULL, NULL,
    PyvtkTemporalInterpolator_Doc(),
    PyVTKClass_vtkMultiTimeStepAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkTemporalInterpolator_Doc()
{
  static const char *docstring[] = {
    "vtkTemporalInterpolator - interpolate datasets between time steps to\nproduce a new dataset\n\n",
    "Superclass: vtkMultiTimeStepAlgorithm\n\n",
    "vtkTemporalInterpolator interpolates between two time steps to\nproduce new data for an arbitrary T. vtkTemporalInterpolator has\nthree modes of operation. The default mode is to produce a continuous\nrange of time values as output, which enables a filter downstream to\nrequest any value of T within the range. The second mode of operation\nis enabled by setting DiscreteTimeStepInterval to a non zero va",
    "lue.\nWhen this mode is activated, the filter will report a finite number\nof Time steps separated by deltaT between the original range of\nvalues. This mode is useful when a dataset of N time steps has one\n(or more) missing datasets for certain T values and you simply wish\nto smooth over the missing steps but otherwise use the original data.\nThe third mode of operation is enabled by setting Resample",
    "Factor to a\nnon zero positive integer value. When this mode is activated, the\nfilter will report a finite number of Time steps which contain the\noriginal steps, plus N new values between each original step\n1/ResampleFactor time units apart. Note that if the input time steps\nare irregular, then using ResampleFactor will produce an irregular\nsequence of regular steps between each of the original irr",
    "egular\nsteps (clear enough, yes?).\n\n@TODO Higher order interpolation schemes will require changes to the\nAPI as most calls assume only two timesteps are used.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkTemporalInterpolator(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkTemporalInterpolatorNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkTemporalInterpolator", o) != 0)
    {
    Py_DECREF(o);
    }

}

