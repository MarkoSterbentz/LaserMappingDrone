// python wrapper for vtkTreeBFSIterator
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkTreeBFSIterator.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkTreeBFSIterator(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkTreeBFSIteratorNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkTreeIteratorNew
extern "C" { PyObject *PyVTKClass_vtkTreeIteratorNew(const char *); }
#define DECLARED_PyVTKClass_vtkTreeIteratorNew
#endif

static const char **PyvtkTreeBFSIterator_Doc();


static PyObject *
PyvtkTreeBFSIterator_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeBFSIterator *op = static_cast<vtkTreeBFSIterator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkTreeBFSIterator::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTreeBFSIterator_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeBFSIterator *op = static_cast<vtkTreeBFSIterator *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkTreeBFSIterator::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTreeBFSIterator_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeBFSIterator *op = static_cast<vtkTreeBFSIterator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkTreeBFSIterator *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkTreeBFSIterator::NewInstance());

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
PyvtkTreeBFSIterator_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkTreeBFSIterator *tempr = vtkTreeBFSIterator::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkTreeBFSIterator_Methods[] = {
  {(char*)"GetClassName", PyvtkTreeBFSIterator_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkTreeBFSIterator_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkTreeBFSIterator_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkTreeBFSIterator\nC++: vtkTreeBFSIterator *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkTreeBFSIterator_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkTreeBFSIterator\nC++: vtkTreeBFSIterator *SafeDownCast(vtkObject* o)\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkTreeBFSIterator_StaticNew()
{
  return vtkTreeBFSIterator::New();
}

PyObject *PyVTKClass_vtkTreeBFSIteratorNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkTreeBFSIterator_StaticNew,
    PyvtkTreeBFSIterator_Methods,
    "vtkTreeBFSIterator", modulename,
    NULL, NULL,
    PyvtkTreeBFSIterator_Doc(),
    PyVTKClass_vtkTreeIteratorNew(modulename));
  return cls;
}

const char **PyvtkTreeBFSIterator_Doc()
{
  static const char *docstring[] = {
    "vtkTreeBFSIterator - breadth first search iterator through a vtkTree\n\n",
    "Superclass: vtkTreeIterator\n\n",
    "vtkTreeBFSIterator performs a breadth first search traversal of a\ntree.\n\nAfter setting up the iterator, the normal mode of operation is to set\nup a while(iter->HasNext())loop, with the statement vtkIdType vertex\n= iter->Next()inside the loop.\n\nThanks:\n\nThanks to David Doria for submitting this class.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkTreeBFSIterator(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkTreeBFSIteratorNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkTreeBFSIterator", o) != 0)
    {
    Py_DECREF(o);
    }

}

