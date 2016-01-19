// python wrapper for vtkTreeIterator
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkTreeIterator.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkTreeIterator(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkTreeIteratorNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkTreeIterator_Doc();


static PyObject *
PyvtkTreeIterator_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeIterator *op = static_cast<vtkTreeIterator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkTreeIterator::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTreeIterator_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeIterator *op = static_cast<vtkTreeIterator *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkTreeIterator::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTreeIterator_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeIterator *op = static_cast<vtkTreeIterator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkTreeIterator *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkTreeIterator::NewInstance());

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
PyvtkTreeIterator_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkTreeIterator *tempr = vtkTreeIterator::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTreeIterator_SetTree(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTree");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeIterator *op = static_cast<vtkTreeIterator *>(vp);

  vtkTree *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkTree"))
    {
    if (ap.IsBound())
      {
      op->SetTree(temp0);
      }
    else
      {
      op->vtkTreeIterator::SetTree(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTreeIterator_GetTree(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTree");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeIterator *op = static_cast<vtkTreeIterator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkTree *tempr = (ap.IsBound() ?
      op->GetTree() :
      op->vtkTreeIterator::GetTree());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTreeIterator_SetStartVertex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetStartVertex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeIterator *op = static_cast<vtkTreeIterator *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetStartVertex(temp0);
      }
    else
      {
      op->vtkTreeIterator::SetStartVertex(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTreeIterator_GetStartVertex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStartVertex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeIterator *op = static_cast<vtkTreeIterator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetStartVertex() :
      op->vtkTreeIterator::GetStartVertex());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTreeIterator_Next(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Next");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeIterator *op = static_cast<vtkTreeIterator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkIdType tempr = (ap.IsBound() ?
      op->Next() :
      op->vtkTreeIterator::Next());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTreeIterator_HasNext(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasNext");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeIterator *op = static_cast<vtkTreeIterator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->HasNext() :
      op->vtkTreeIterator::HasNext());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTreeIterator_Restart(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Restart");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeIterator *op = static_cast<vtkTreeIterator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Restart();
      }
    else
      {
      op->vtkTreeIterator::Restart();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkTreeIterator_Methods[] = {
  {(char*)"GetClassName", PyvtkTreeIterator_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkTreeIterator_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkTreeIterator_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkTreeIterator\nC++: vtkTreeIterator *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkTreeIterator_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkTreeIterator\nC++: vtkTreeIterator *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetTree", PyvtkTreeIterator_SetTree, METH_VARARGS,
   (char*)"V.SetTree(vtkTree)\nC++: void SetTree(vtkTree *graph)\n\nSet/get the graph to iterate over.\n"},
  {(char*)"GetTree", PyvtkTreeIterator_GetTree, METH_VARARGS,
   (char*)"V.GetTree() -> vtkTree\nC++: vtkTree *GetTree()\n\nSet/get the graph to iterate over.\n"},
  {(char*)"SetStartVertex", PyvtkTreeIterator_SetStartVertex, METH_VARARGS,
   (char*)"V.SetStartVertex(int)\nC++: void SetStartVertex(vtkIdType vertex)\n\nThe start vertex of the traversal. The tree iterator will only\niterate over the subtree rooted at vertex. If not set (or set to\na negative value), starts at the root of the tree.\n"},
  {(char*)"GetStartVertex", PyvtkTreeIterator_GetStartVertex, METH_VARARGS,
   (char*)"V.GetStartVertex() -> int\nC++: vtkIdType GetStartVertex()\n\nThe start vertex of the traversal. The tree iterator will only\niterate over the subtree rooted at vertex. If not set (or set to\na negative value), starts at the root of the tree.\n"},
  {(char*)"Next", PyvtkTreeIterator_Next, METH_VARARGS,
   (char*)"V.Next() -> int\nC++: vtkIdType Next()\n\nThe next vertex visited in the graph.\n"},
  {(char*)"HasNext", PyvtkTreeIterator_HasNext, METH_VARARGS,
   (char*)"V.HasNext() -> bool\nC++: bool HasNext()\n\nReturn true when all vertices have been visited.\n"},
  {(char*)"Restart", PyvtkTreeIterator_Restart, METH_VARARGS,
   (char*)"V.Restart()\nC++: void Restart()\n\nReset the iterator to its start vertex.\n"},
  {NULL, NULL, 0, NULL}
};

PyObject *PyVTKClass_vtkTreeIteratorNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(NULL,
    PyvtkTreeIterator_Methods,
    "vtkTreeIterator", modulename,
    NULL, NULL,
    PyvtkTreeIterator_Doc(),
    PyVTKClass_vtkObjectNew(modulename));
  return cls;
}

const char **PyvtkTreeIterator_Doc()
{
  static const char *docstring[] = {
    "vtkTreeIterator - Abstract class for iterator over a vtkTree.\n\n",
    "Superclass: vtkObject\n\n",
    "The base class for tree iterators vtkTreeBFSIterator and\nvtkTreeDFSIterator.\n\nAfter setting up the iterator, the normal mode of operation is to set\nup a while(iter->HasNext())loop, with the statement vtkIdType vertex\n= iter->Next()inside the loop.\n\nSee Also:\n\nvtkTreeBFSIterator vtkTreeDFSIterator\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkTreeIterator(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkTreeIteratorNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkTreeIterator", o) != 0)
    {
    Py_DECREF(o);
    }

}

