// python wrapper for vtkMinimalStandardRandomSequence
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkMinimalStandardRandomSequence.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkMinimalStandardRandomSequence(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkMinimalStandardRandomSequenceNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkRandomSequenceNew
extern "C" { PyObject *PyVTKClass_vtkRandomSequenceNew(const char *); }
#define DECLARED_PyVTKClass_vtkRandomSequenceNew
#endif

static const char **PyvtkMinimalStandardRandomSequence_Doc();


static PyObject *
PyvtkMinimalStandardRandomSequence_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMinimalStandardRandomSequence *op = static_cast<vtkMinimalStandardRandomSequence *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkMinimalStandardRandomSequence::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMinimalStandardRandomSequence_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMinimalStandardRandomSequence *op = static_cast<vtkMinimalStandardRandomSequence *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkMinimalStandardRandomSequence::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMinimalStandardRandomSequence_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMinimalStandardRandomSequence *op = static_cast<vtkMinimalStandardRandomSequence *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkMinimalStandardRandomSequence *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkMinimalStandardRandomSequence::NewInstance());

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
PyvtkMinimalStandardRandomSequence_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkMinimalStandardRandomSequence *tempr = vtkMinimalStandardRandomSequence::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMinimalStandardRandomSequence_SetSeed(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSeed");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMinimalStandardRandomSequence *op = static_cast<vtkMinimalStandardRandomSequence *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetSeed(temp0);
      }
    else
      {
      op->vtkMinimalStandardRandomSequence::SetSeed(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMinimalStandardRandomSequence_SetSeedOnly(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSeedOnly");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMinimalStandardRandomSequence *op = static_cast<vtkMinimalStandardRandomSequence *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetSeedOnly(temp0);
      }
    else
      {
      op->vtkMinimalStandardRandomSequence::SetSeedOnly(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMinimalStandardRandomSequence_GetSeed(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSeed");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMinimalStandardRandomSequence *op = static_cast<vtkMinimalStandardRandomSequence *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetSeed() :
      op->vtkMinimalStandardRandomSequence::GetSeed());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMinimalStandardRandomSequence_GetValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMinimalStandardRandomSequence *op = static_cast<vtkMinimalStandardRandomSequence *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetValue() :
      op->vtkMinimalStandardRandomSequence::GetValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMinimalStandardRandomSequence_Next(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Next");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMinimalStandardRandomSequence *op = static_cast<vtkMinimalStandardRandomSequence *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Next();
      }
    else
      {
      op->vtkMinimalStandardRandomSequence::Next();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMinimalStandardRandomSequence_GetRangeValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRangeValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMinimalStandardRandomSequence *op = static_cast<vtkMinimalStandardRandomSequence *>(vp);

  double temp0;
  double temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    double tempr = (ap.IsBound() ?
      op->GetRangeValue(temp0, temp1) :
      op->vtkMinimalStandardRandomSequence::GetRangeValue(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkMinimalStandardRandomSequence_Methods[] = {
  {(char*)"GetClassName", PyvtkMinimalStandardRandomSequence_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkMinimalStandardRandomSequence_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkMinimalStandardRandomSequence_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkMinimalStandardRandomSequence\nC++: vtkMinimalStandardRandomSequence *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkMinimalStandardRandomSequence_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkMinimalStandardRandomSequence\nC++: vtkMinimalStandardRandomSequence *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetSeed", PyvtkMinimalStandardRandomSequence_SetSeed, METH_VARARGS,
   (char*)"V.SetSeed(int)\nC++: void SetSeed(int value)\n\nSet the seed of the random sequence. The following pre-condition\nis stated page 1197, second column: valid_seed: value>=1 &&\nvalue<=2147483646 2147483646=(2^31)-2 This method does not have\nthis criterium as a pre-condition (ie it will not fail if an\nincorrect seed value is passed) but the value is silently changed\nto fit in the valid range [1,2147483646]. 2147483646 is added to\na null or negative value. 2147483647 is changed to be 1 (ie\n2147483646 is subtracted). Implementation note: it also performs\n3 calls to Next() to avoid the bad property that the first random\nnumber is proportional to the seed value.\n"},
  {(char*)"SetSeedOnly", PyvtkMinimalStandardRandomSequence_SetSeedOnly, METH_VARARGS,
   (char*)"V.SetSeedOnly(int)\nC++: void SetSeedOnly(int value)\n\nSet the seed of the random sequence. There is no extra internal\najustment. Only useful for writing correctness test. The\nfollowing pre-condition is stated page 1197, second column\n2147483646=(2^31)-2 This method does not have this criterium as a\npre-condition (ie it will not fail if an incorrect seed value is\npassed) but the value is silently changed to fit in the valid\nrange [1,2147483646]. 2147483646 is added to a null or negative\nvalue. 2147483647 is changed to be 1 (ie 2147483646 is\nsubtracted).\n"},
  {(char*)"GetSeed", PyvtkMinimalStandardRandomSequence_GetSeed, METH_VARARGS,
   (char*)"V.GetSeed() -> int\nC++: int GetSeed()\n\nGet the seed of the random sequence. Only useful for writing\ncorrectness test.\n"},
  {(char*)"GetValue", PyvtkMinimalStandardRandomSequence_GetValue, METH_VARARGS,
   (char*)"V.GetValue() -> float\nC++: virtual double GetValue()\n\nCurrent value\n\\post unit_range: result>=0.0 && result<=1.0\n"},
  {(char*)"Next", PyvtkMinimalStandardRandomSequence_Next, METH_VARARGS,
   (char*)"V.Next()\nC++: virtual void Next()\n\nMove to the next number in the random sequence.\n"},
  {(char*)"GetRangeValue", PyvtkMinimalStandardRandomSequence_GetRangeValue, METH_VARARGS,
   (char*)"V.GetRangeValue(float, float) -> float\nC++: virtual double GetRangeValue(double rangeMin,\n    double rangeMax)\n\nConvenient method to return a value in a specific range from the\nrange [0,1. There is an initial implementation that can be\noverridden by a subclass. There is no pre-condition on the range:\n- it can be in increasing order: rangeMin<rangeMax\n- it can be empty: rangeMin=rangeMax\n- it can be in decreasing order: rangeMin>rangeMax\n\\post result_in_range:\n(rangeMin<=rangeMax && result>=rangeMin && result<=rangeMax) ||\n(rangeMax<=rangeMin && result>=rangeMax && result<=rangeMin)\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkMinimalStandardRandomSequence_StaticNew()
{
  return vtkMinimalStandardRandomSequence::New();
}

PyObject *PyVTKClass_vtkMinimalStandardRandomSequenceNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkMinimalStandardRandomSequence_StaticNew,
    PyvtkMinimalStandardRandomSequence_Methods,
    "vtkMinimalStandardRandomSequence", modulename,
    NULL, NULL,
    PyvtkMinimalStandardRandomSequence_Doc(),
    PyVTKClass_vtkRandomSequenceNew(modulename));
  return cls;
}

const char **PyvtkMinimalStandardRandomSequence_Doc()
{
  static const char *docstring[] = {
    "vtkMinimalStandardRandomSequence - Park and Miller Sequence of pseudo\nrandom numbers\n\n",
    "Superclass: vtkRandomSequence\n\n",
    "vtkMinimalStandardRandomSequence is a sequence of statistically\nindependent pseudo random numbers uniformly distributed  between 0.0\nand 1.0.\n\nThe sequence is generated by a prime modulus multiplicative linear\ncongruential generator (PMMLCG) or \"Lehmer generator\" with multiplier\n16807 and prime modulus 2^(31)-1. The authors calls it \"minimal standard random number\ngenerator\"\n\nref: \"Random Number G",
    "enerators: Good Ones are Hard to Find,\" by\nStephen K. Park and Keith W. Miller in Communications of the ACM, 31,\n10 (Oct. 1988) pp. 1192-1201. Code is at page 1195, \"Integer version\n2\"\n\nCorrectness test is described in first column, page 1195: A seed of 1\nat step 1 should give a seed of 1043618065 at step 10001.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkMinimalStandardRandomSequence(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkMinimalStandardRandomSequenceNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkMinimalStandardRandomSequence", o) != 0)
    {
    Py_DECREF(o);
    }

}

