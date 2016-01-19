// python wrapper for vtkCollectionIterator
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkCollectionIterator.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkCollectionIterator(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkCollectionIteratorNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkCollectionIterator_Doc();


static PyObject *
PyvtkCollectionIterator_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCollectionIterator *op = static_cast<vtkCollectionIterator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkCollectionIterator::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCollectionIterator_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCollectionIterator *op = static_cast<vtkCollectionIterator *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkCollectionIterator::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCollectionIterator_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCollectionIterator *op = static_cast<vtkCollectionIterator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkCollectionIterator *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkCollectionIterator::NewInstance());

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
PyvtkCollectionIterator_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkCollectionIterator *tempr = vtkCollectionIterator::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCollectionIterator_SetCollection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCollection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCollectionIterator *op = static_cast<vtkCollectionIterator *>(vp);

  vtkCollection *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCollection"))
    {
    if (ap.IsBound())
      {
      op->SetCollection(temp0);
      }
    else
      {
      op->vtkCollectionIterator::SetCollection(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCollectionIterator_GetCollection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCollection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCollectionIterator *op = static_cast<vtkCollectionIterator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkCollection *tempr = (ap.IsBound() ?
      op->GetCollection() :
      op->vtkCollectionIterator::GetCollection());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCollectionIterator_InitTraversal(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InitTraversal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCollectionIterator *op = static_cast<vtkCollectionIterator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->InitTraversal();
      }
    else
      {
      op->vtkCollectionIterator::InitTraversal();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCollectionIterator_GoToFirstItem(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GoToFirstItem");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCollectionIterator *op = static_cast<vtkCollectionIterator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->GoToFirstItem();
      }
    else
      {
      op->vtkCollectionIterator::GoToFirstItem();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCollectionIterator_GoToNextItem(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GoToNextItem");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCollectionIterator *op = static_cast<vtkCollectionIterator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->GoToNextItem();
      }
    else
      {
      op->vtkCollectionIterator::GoToNextItem();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCollectionIterator_IsDoneWithTraversal(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsDoneWithTraversal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCollectionIterator *op = static_cast<vtkCollectionIterator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->IsDoneWithTraversal() :
      op->vtkCollectionIterator::IsDoneWithTraversal());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCollectionIterator_GetCurrentObject(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCurrentObject");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCollectionIterator *op = static_cast<vtkCollectionIterator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkObject *tempr = (ap.IsBound() ?
      op->GetCurrentObject() :
      op->vtkCollectionIterator::GetCurrentObject());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkCollectionIterator_Methods[] = {
  {(char*)"GetClassName", PyvtkCollectionIterator_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkCollectionIterator_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkCollectionIterator_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkCollectionIterator\nC++: vtkCollectionIterator *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkCollectionIterator_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkCollectionIterator\nC++: vtkCollectionIterator *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetCollection", PyvtkCollectionIterator_SetCollection, METH_VARARGS,
   (char*)"V.SetCollection(vtkCollection)\nC++: virtual void SetCollection(vtkCollection *)\n\nSet/Get the collection over which to iterate.\n"},
  {(char*)"GetCollection", PyvtkCollectionIterator_GetCollection, METH_VARARGS,
   (char*)"V.GetCollection() -> vtkCollection\nC++: vtkCollection *GetCollection()\n\nSet/Get the collection over which to iterate.\n"},
  {(char*)"InitTraversal", PyvtkCollectionIterator_InitTraversal, METH_VARARGS,
   (char*)"V.InitTraversal()\nC++: void InitTraversal()\n\nPosition the iterator at the first item in the collection.\n"},
  {(char*)"GoToFirstItem", PyvtkCollectionIterator_GoToFirstItem, METH_VARARGS,
   (char*)"V.GoToFirstItem()\nC++: void GoToFirstItem()\n\nPosition the iterator at the first item in the collection.\n"},
  {(char*)"GoToNextItem", PyvtkCollectionIterator_GoToNextItem, METH_VARARGS,
   (char*)"V.GoToNextItem()\nC++: void GoToNextItem()\n\nMove the iterator to the next item in the collection.\n"},
  {(char*)"IsDoneWithTraversal", PyvtkCollectionIterator_IsDoneWithTraversal, METH_VARARGS,
   (char*)"V.IsDoneWithTraversal() -> int\nC++: int IsDoneWithTraversal()\n\nTest whether the iterator is currently positioned at a valid\nitem. Returns 1 for yes, 0 for no.\n"},
  {(char*)"GetCurrentObject", PyvtkCollectionIterator_GetCurrentObject, METH_VARARGS,
   (char*)"V.GetCurrentObject() -> vtkObject\nC++: vtkObject *GetCurrentObject()\n\nGet the item at the current iterator position.  Valid only when\nIsDoneWithTraversal() returns 1.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkCollectionIterator_StaticNew()
{
  return vtkCollectionIterator::New();
}

PyObject *PyVTKClass_vtkCollectionIteratorNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkCollectionIterator_StaticNew,
    PyvtkCollectionIterator_Methods,
    "vtkCollectionIterator", modulename,
    NULL, NULL,
    PyvtkCollectionIterator_Doc(),
    PyVTKClass_vtkObjectNew(modulename));
  return cls;
}

const char **PyvtkCollectionIterator_Doc()
{
  static const char *docstring[] = {
    "vtkCollectionIterator - iterator through a vtkCollection.\n\n",
    "Superclass: vtkObject\n\n",
    "vtkCollectionIterator provides an alternative way to traverse through\nthe objects in a vtkCollection.  Unlike the collection's built in\ninterface, this allows multiple iterators to simultaneously traverse\nthe collection.  If items are removed from the collection, only the\niterators currently pointing to those items are invalidated.  Other\niterators will still continue to function normally.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkCollectionIterator(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkCollectionIteratorNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkCollectionIterator", o) != 0)
    {
    Py_DECREF(o);
    }

}

