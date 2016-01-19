// python wrapper for vtkGaussianRandomSequence
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkGaussianRandomSequence.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkGaussianRandomSequence(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkGaussianRandomSequenceNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkRandomSequenceNew
extern "C" { PyObject *PyVTKClass_vtkRandomSequenceNew(const char *); }
#define DECLARED_PyVTKClass_vtkRandomSequenceNew
#endif

static const char **PyvtkGaussianRandomSequence_Doc();


static PyObject *
PyvtkGaussianRandomSequence_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGaussianRandomSequence *op = static_cast<vtkGaussianRandomSequence *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkGaussianRandomSequence::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGaussianRandomSequence_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGaussianRandomSequence *op = static_cast<vtkGaussianRandomSequence *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkGaussianRandomSequence::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGaussianRandomSequence_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGaussianRandomSequence *op = static_cast<vtkGaussianRandomSequence *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkGaussianRandomSequence *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkGaussianRandomSequence::NewInstance());

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
PyvtkGaussianRandomSequence_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkGaussianRandomSequence *tempr = vtkGaussianRandomSequence::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGaussianRandomSequence_GetScaledValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScaledValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGaussianRandomSequence *op = static_cast<vtkGaussianRandomSequence *>(vp);

  double temp0;
  double temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    double tempr = (ap.IsBound() ?
      op->GetScaledValue(temp0, temp1) :
      op->vtkGaussianRandomSequence::GetScaledValue(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkGaussianRandomSequence_Methods[] = {
  {(char*)"GetClassName", PyvtkGaussianRandomSequence_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkGaussianRandomSequence_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkGaussianRandomSequence_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkGaussianRandomSequence\nC++: vtkGaussianRandomSequence *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkGaussianRandomSequence_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkGaussianRandomSequence\nC++: vtkGaussianRandomSequence *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetScaledValue", PyvtkGaussianRandomSequence_GetScaledValue, METH_VARARGS,
   (char*)"V.GetScaledValue(float, float) -> float\nC++: virtual double GetScaledValue(double mean,\n    double standardDeviation)\n\nConvenient method to return a value given the mean and standard\ndeviation of the Gaussian distribution from the the Gaussian\ndistribution of mean=0 and standard deviation=1.0. There is an\ninitial implementation that can be overridden by a subclass.\n"},
  {NULL, NULL, 0, NULL}
};

PyObject *PyVTKClass_vtkGaussianRandomSequenceNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(NULL,
    PyvtkGaussianRandomSequence_Methods,
    "vtkGaussianRandomSequence", modulename,
    NULL, NULL,
    PyvtkGaussianRandomSequence_Doc(),
    PyVTKClass_vtkRandomSequenceNew(modulename));
  return cls;
}

const char **PyvtkGaussianRandomSequence_Doc()
{
  static const char *docstring[] = {
    "vtkGaussianRandomSequence - Gaussian sequence of pseudo random numbers\n\n",
    "Superclass: vtkRandomSequence\n\n",
    "vtkGaussianRandomSequence is a sequence of pseudo random numbers\ndistributed according to the Gaussian/normal distribution (mean=0 and\nstandard deviation=1)\n\nThis is just an interface.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkGaussianRandomSequence(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkGaussianRandomSequenceNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkGaussianRandomSequence", o) != 0)
    {
    Py_DECREF(o);
    }

}

