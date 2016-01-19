// python wrapper for vtkBoxMuellerRandomSequence
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkBoxMuellerRandomSequence.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkBoxMuellerRandomSequence(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkBoxMuellerRandomSequenceNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkGaussianRandomSequenceNew
extern "C" { PyObject *PyVTKClass_vtkGaussianRandomSequenceNew(const char *); }
#define DECLARED_PyVTKClass_vtkGaussianRandomSequenceNew
#endif

static const char **PyvtkBoxMuellerRandomSequence_Doc();


static PyObject *
PyvtkBoxMuellerRandomSequence_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxMuellerRandomSequence *op = static_cast<vtkBoxMuellerRandomSequence *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkBoxMuellerRandomSequence::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBoxMuellerRandomSequence_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxMuellerRandomSequence *op = static_cast<vtkBoxMuellerRandomSequence *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkBoxMuellerRandomSequence::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBoxMuellerRandomSequence_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxMuellerRandomSequence *op = static_cast<vtkBoxMuellerRandomSequence *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkBoxMuellerRandomSequence *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkBoxMuellerRandomSequence::NewInstance());

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
PyvtkBoxMuellerRandomSequence_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkBoxMuellerRandomSequence *tempr = vtkBoxMuellerRandomSequence::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBoxMuellerRandomSequence_GetValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxMuellerRandomSequence *op = static_cast<vtkBoxMuellerRandomSequence *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetValue() :
      op->vtkBoxMuellerRandomSequence::GetValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBoxMuellerRandomSequence_Next(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Next");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxMuellerRandomSequence *op = static_cast<vtkBoxMuellerRandomSequence *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Next();
      }
    else
      {
      op->vtkBoxMuellerRandomSequence::Next();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkBoxMuellerRandomSequence_GetUniformSequence(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUniformSequence");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxMuellerRandomSequence *op = static_cast<vtkBoxMuellerRandomSequence *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkRandomSequence *tempr = (ap.IsBound() ?
      op->GetUniformSequence() :
      op->vtkBoxMuellerRandomSequence::GetUniformSequence());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBoxMuellerRandomSequence_SetUniformSequence(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUniformSequence");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxMuellerRandomSequence *op = static_cast<vtkBoxMuellerRandomSequence *>(vp);

  vtkRandomSequence *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkRandomSequence"))
    {
    if (ap.IsBound())
      {
      op->SetUniformSequence(temp0);
      }
    else
      {
      op->vtkBoxMuellerRandomSequence::SetUniformSequence(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkBoxMuellerRandomSequence_Methods[] = {
  {(char*)"GetClassName", PyvtkBoxMuellerRandomSequence_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkBoxMuellerRandomSequence_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkBoxMuellerRandomSequence_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkBoxMuellerRandomSequence\nC++: vtkBoxMuellerRandomSequence *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkBoxMuellerRandomSequence_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkBoxMuellerRandomSequence\nC++: vtkBoxMuellerRandomSequence *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetValue", PyvtkBoxMuellerRandomSequence_GetValue, METH_VARARGS,
   (char*)"V.GetValue() -> float\nC++: virtual double GetValue()\n\nCurrent value.\n"},
  {(char*)"Next", PyvtkBoxMuellerRandomSequence_Next, METH_VARARGS,
   (char*)"V.Next()\nC++: virtual void Next()\n\nMove to the next number in the random sequence.\n"},
  {(char*)"GetUniformSequence", PyvtkBoxMuellerRandomSequence_GetUniformSequence, METH_VARARGS,
   (char*)"V.GetUniformSequence() -> vtkRandomSequence\nC++: vtkRandomSequence *GetUniformSequence()\n\nReturn the uniformly distributed sequence of random numbers.\n"},
  {(char*)"SetUniformSequence", PyvtkBoxMuellerRandomSequence_SetUniformSequence, METH_VARARGS,
   (char*)"V.SetUniformSequence(vtkRandomSequence)\nC++: void SetUniformSequence(vtkRandomSequence *uniformSequence)\n\nSet the uniformly distributed sequence of random numbers. Default\nis a .\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkBoxMuellerRandomSequence_StaticNew()
{
  return vtkBoxMuellerRandomSequence::New();
}

PyObject *PyVTKClass_vtkBoxMuellerRandomSequenceNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkBoxMuellerRandomSequence_StaticNew,
    PyvtkBoxMuellerRandomSequence_Methods,
    "vtkBoxMuellerRandomSequence", modulename,
    NULL, NULL,
    PyvtkBoxMuellerRandomSequence_Doc(),
    PyVTKClass_vtkGaussianRandomSequenceNew(modulename));
  return cls;
}

const char **PyvtkBoxMuellerRandomSequence_Doc()
{
  static const char *docstring[] = {
    "vtkBoxMuellerRandomSequence - Gaussian sequence of pseudo random\nnumbers implemented with the Box-Mueller transform\n\n",
    "Superclass: vtkGaussianRandomSequence\n\n",
    "vtkGaussianRandomSequence is a sequence of pseudo random numbers\ndistributed according to the Gaussian/normal distribution (mean=0 and\nstandard deviation=1).\n\nIt based is calculation from a uniformly distributed pseudo random\nsequence. The initial sequence is a vtkMinimalStandardRandomSequence.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkBoxMuellerRandomSequence(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkBoxMuellerRandomSequenceNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkBoxMuellerRandomSequence", o) != 0)
    {
    Py_DECREF(o);
    }

}

