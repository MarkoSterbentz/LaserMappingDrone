// python wrapper for vtkRandomSequence
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkRandomSequence.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkRandomSequence(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkRandomSequenceNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkRandomSequence_Doc();


static PyObject *
PyvtkRandomSequence_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomSequence *op = static_cast<vtkRandomSequence *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkRandomSequence::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRandomSequence_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomSequence *op = static_cast<vtkRandomSequence *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkRandomSequence::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRandomSequence_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomSequence *op = static_cast<vtkRandomSequence *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkRandomSequence *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkRandomSequence::NewInstance());

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
PyvtkRandomSequence_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkRandomSequence *tempr = vtkRandomSequence::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRandomSequence_GetValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomSequence *op = static_cast<vtkRandomSequence *>(vp);

  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
    {
    double tempr = op->GetValue();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRandomSequence_Next(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Next");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomSequence *op = static_cast<vtkRandomSequence *>(vp);

  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
    {
    op->Next();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkRandomSequence_Methods[] = {
  {(char*)"GetClassName", PyvtkRandomSequence_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkRandomSequence_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkRandomSequence_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkRandomSequence\nC++: vtkRandomSequence *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkRandomSequence_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkRandomSequence\nC++: vtkRandomSequence *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetValue", PyvtkRandomSequence_GetValue, METH_VARARGS,
   (char*)"V.GetValue() -> float\nC++: virtual double GetValue()\n\nCurrent value\n"},
  {(char*)"Next", PyvtkRandomSequence_Next, METH_VARARGS,
   (char*)"V.Next()\nC++: virtual void Next()\n\nMove to the next number in the random sequence.\n"},
  {NULL, NULL, 0, NULL}
};

PyObject *PyVTKClass_vtkRandomSequenceNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(NULL,
    PyvtkRandomSequence_Methods,
    "vtkRandomSequence", modulename,
    NULL, NULL,
    PyvtkRandomSequence_Doc(),
    PyVTKClass_vtkObjectNew(modulename));
  return cls;
}

const char **PyvtkRandomSequence_Doc()
{
  static const char *docstring[] = {
    "vtkRandomSequence - Sequence of random numbers.\n\n",
    "Superclass: vtkObject\n\n",
    "vtkRandomSequence defines the interface of any sequence of random\nnumbers.\n\nAt this level of abstraction, there is no assumption about the\ndistribution of the numbers or about the quality of the sequence of\nnumbers to be statistically independent. There is no assumption about\nthe range of values.\n\nTo the question about why a random \"sequence\" class instead of a\nrandom \"generator\" class or to a ran",
    "dom \"number\" class?, see the OOSC\nbook: \"Object-Oriented Software Construction\", 2nd Edition, by\nBertrand Meyer. chapter 23, \"Principles of class design\",\n\"Pseudo-random number generators: a design exercise\", page 754--755.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkRandomSequence(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkRandomSequenceNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkRandomSequence", o) != 0)
    {
    Py_DECREF(o);
    }

}

