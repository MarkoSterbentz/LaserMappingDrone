// python wrapper for vtkPEquivalenceSet
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkPEquivalenceSet.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkPEquivalenceSet(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkPEquivalenceSetNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkEquivalenceSetNew
extern "C" { PyObject *PyVTKClass_vtkEquivalenceSetNew(const char *); }
#define DECLARED_PyVTKClass_vtkEquivalenceSetNew
#endif

static const char **PyvtkPEquivalenceSet_Doc();


static PyObject *
PyvtkPEquivalenceSet_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPEquivalenceSet *op = static_cast<vtkPEquivalenceSet *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkPEquivalenceSet::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPEquivalenceSet_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPEquivalenceSet *op = static_cast<vtkPEquivalenceSet *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPEquivalenceSet::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPEquivalenceSet_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPEquivalenceSet *op = static_cast<vtkPEquivalenceSet *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPEquivalenceSet *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPEquivalenceSet::NewInstance());

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
PyvtkPEquivalenceSet_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkPEquivalenceSet *tempr = vtkPEquivalenceSet::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPEquivalenceSet_ResolveEquivalences(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ResolveEquivalences");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPEquivalenceSet *op = static_cast<vtkPEquivalenceSet *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->ResolveEquivalences() :
      op->vtkPEquivalenceSet::ResolveEquivalences());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkPEquivalenceSet_Methods[] = {
  {(char*)"GetClassName", PyvtkPEquivalenceSet_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkPEquivalenceSet_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkPEquivalenceSet_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkPEquivalenceSet\nC++: vtkPEquivalenceSet *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkPEquivalenceSet_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkPEquivalenceSet\nC++: vtkPEquivalenceSet *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"ResolveEquivalences", PyvtkPEquivalenceSet_ResolveEquivalences, METH_VARARGS,
   (char*)"V.ResolveEquivalences() -> int\nC++: virtual int ResolveEquivalences()\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkPEquivalenceSet_StaticNew()
{
  return vtkPEquivalenceSet::New();
}

PyObject *PyVTKClass_vtkPEquivalenceSetNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkPEquivalenceSet_StaticNew,
    PyvtkPEquivalenceSet_Methods,
    "vtkPEquivalenceSet", modulename,
    NULL, NULL,
    PyvtkPEquivalenceSet_Doc(),
    PyVTKClass_vtkEquivalenceSetNew(modulename));
  return cls;
}

const char **PyvtkPEquivalenceSet_Doc()
{
  static const char *docstring[] = {
    "vtkPEquivalenceSet - distributed method of Equivalence\n\n",
    "Superclass: vtkEquivalenceSet\n\n",
    "Same as EquivalenceSet, but resolving is a global operation. .SEE\nvtkEquivalenceSet\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPEquivalenceSet(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPEquivalenceSetNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPEquivalenceSet", o) != 0)
    {
    Py_DECREF(o);
    }

}

