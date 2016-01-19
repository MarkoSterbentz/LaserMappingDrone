// python wrapper for vtkUniformGridAMRDataIterator
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkUniformGridAMRDataIterator.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkUniformGridAMRDataIterator(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkUniformGridAMRDataIteratorNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkCompositeDataIteratorNew
extern "C" { PyObject *PyVTKClass_vtkCompositeDataIteratorNew(const char *); }
#define DECLARED_PyVTKClass_vtkCompositeDataIteratorNew
#endif

static const char **PyvtkUniformGridAMRDataIterator_Doc();


static PyObject *
PyvtkUniformGridAMRDataIterator_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUniformGridAMRDataIterator *op = static_cast<vtkUniformGridAMRDataIterator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkUniformGridAMRDataIterator::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkUniformGridAMRDataIterator_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUniformGridAMRDataIterator *op = static_cast<vtkUniformGridAMRDataIterator *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkUniformGridAMRDataIterator::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkUniformGridAMRDataIterator_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUniformGridAMRDataIterator *op = static_cast<vtkUniformGridAMRDataIterator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkUniformGridAMRDataIterator *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkUniformGridAMRDataIterator::NewInstance());

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
PyvtkUniformGridAMRDataIterator_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkUniformGridAMRDataIterator *tempr = vtkUniformGridAMRDataIterator::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkUniformGridAMRDataIterator_GetCurrentMetaData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCurrentMetaData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUniformGridAMRDataIterator *op = static_cast<vtkUniformGridAMRDataIterator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkInformation *tempr = (ap.IsBound() ?
      op->GetCurrentMetaData() :
      op->vtkUniformGridAMRDataIterator::GetCurrentMetaData());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkUniformGridAMRDataIterator_HasCurrentMetaData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasCurrentMetaData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUniformGridAMRDataIterator *op = static_cast<vtkUniformGridAMRDataIterator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->HasCurrentMetaData() :
      op->vtkUniformGridAMRDataIterator::HasCurrentMetaData());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkUniformGridAMRDataIterator_GetCurrentDataObject(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCurrentDataObject");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUniformGridAMRDataIterator *op = static_cast<vtkUniformGridAMRDataIterator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkDataObject *tempr = (ap.IsBound() ?
      op->GetCurrentDataObject() :
      op->vtkUniformGridAMRDataIterator::GetCurrentDataObject());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkUniformGridAMRDataIterator_GetCurrentFlatIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCurrentFlatIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUniformGridAMRDataIterator *op = static_cast<vtkUniformGridAMRDataIterator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned int tempr = (ap.IsBound() ?
      op->GetCurrentFlatIndex() :
      op->vtkUniformGridAMRDataIterator::GetCurrentFlatIndex());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkUniformGridAMRDataIterator_GetCurrentLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCurrentLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUniformGridAMRDataIterator *op = static_cast<vtkUniformGridAMRDataIterator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned int tempr = (ap.IsBound() ?
      op->GetCurrentLevel() :
      op->vtkUniformGridAMRDataIterator::GetCurrentLevel());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkUniformGridAMRDataIterator_GetCurrentIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCurrentIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUniformGridAMRDataIterator *op = static_cast<vtkUniformGridAMRDataIterator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned int tempr = (ap.IsBound() ?
      op->GetCurrentIndex() :
      op->vtkUniformGridAMRDataIterator::GetCurrentIndex());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkUniformGridAMRDataIterator_GoToFirstItem(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GoToFirstItem");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUniformGridAMRDataIterator *op = static_cast<vtkUniformGridAMRDataIterator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->GoToFirstItem();
      }
    else
      {
      op->vtkUniformGridAMRDataIterator::GoToFirstItem();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkUniformGridAMRDataIterator_GoToNextItem(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GoToNextItem");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUniformGridAMRDataIterator *op = static_cast<vtkUniformGridAMRDataIterator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->GoToNextItem();
      }
    else
      {
      op->vtkUniformGridAMRDataIterator::GoToNextItem();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkUniformGridAMRDataIterator_IsDoneWithTraversal(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsDoneWithTraversal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUniformGridAMRDataIterator *op = static_cast<vtkUniformGridAMRDataIterator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->IsDoneWithTraversal() :
      op->vtkUniformGridAMRDataIterator::IsDoneWithTraversal());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkUniformGridAMRDataIterator_Methods[] = {
  {(char*)"GetClassName", PyvtkUniformGridAMRDataIterator_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkUniformGridAMRDataIterator_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkUniformGridAMRDataIterator_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkUniformGridAMRDataIterator\nC++: vtkUniformGridAMRDataIterator *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkUniformGridAMRDataIterator_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkUniformGridAMRDataIterator\nC++: vtkUniformGridAMRDataIterator *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetCurrentMetaData", PyvtkUniformGridAMRDataIterator_GetCurrentMetaData, METH_VARARGS,
   (char*)"V.GetCurrentMetaData() -> vtkInformation\nC++: virtual vtkInformation *GetCurrentMetaData()\n\nReturns the meta-data associated with the current item. Note that\nthis points to a single instance of vtkInformation object\nallocated by the iterator and will be changed as soon as\nGoToNextItem is called.\n"},
  {(char*)"HasCurrentMetaData", PyvtkUniformGridAMRDataIterator_HasCurrentMetaData, METH_VARARGS,
   (char*)"V.HasCurrentMetaData() -> int\nC++: virtual int HasCurrentMetaData()\n\n\n"},
  {(char*)"GetCurrentDataObject", PyvtkUniformGridAMRDataIterator_GetCurrentDataObject, METH_VARARGS,
   (char*)"V.GetCurrentDataObject() -> vtkDataObject\nC++: virtual vtkDataObject *GetCurrentDataObject()\n\nReturns the current item. Valid only when IsDoneWithTraversal()\nreturns 0.\n"},
  {(char*)"GetCurrentFlatIndex", PyvtkUniformGridAMRDataIterator_GetCurrentFlatIndex, METH_VARARGS,
   (char*)"V.GetCurrentFlatIndex() -> int\nC++: unsigned int GetCurrentFlatIndex()\n\nFlat index is an index obtained by traversing the tree in\npreorder. This can be used to uniquely identify nodes in the\ntree. Not valid if IsDoneWithTraversal() returns true.\n"},
  {(char*)"GetCurrentLevel", PyvtkUniformGridAMRDataIterator_GetCurrentLevel, METH_VARARGS,
   (char*)"V.GetCurrentLevel() -> int\nC++: virtual unsigned int GetCurrentLevel()\n\nReturns the level for the current dataset.\n"},
  {(char*)"GetCurrentIndex", PyvtkUniformGridAMRDataIterator_GetCurrentIndex, METH_VARARGS,
   (char*)"V.GetCurrentIndex() -> int\nC++: virtual unsigned int GetCurrentIndex()\n\nReturns the dataset index for the current data object. Valid only\nif the current data is a leaf node i.e. no a composite dataset.\n"},
  {(char*)"GoToFirstItem", PyvtkUniformGridAMRDataIterator_GoToFirstItem, METH_VARARGS,
   (char*)"V.GoToFirstItem()\nC++: virtual void GoToFirstItem()\n\nMove the iterator to the beginning of the collection.\n"},
  {(char*)"GoToNextItem", PyvtkUniformGridAMRDataIterator_GoToNextItem, METH_VARARGS,
   (char*)"V.GoToNextItem()\nC++: virtual void GoToNextItem()\n\nMove the iterator to the next item in the collection.\n"},
  {(char*)"IsDoneWithTraversal", PyvtkUniformGridAMRDataIterator_IsDoneWithTraversal, METH_VARARGS,
   (char*)"V.IsDoneWithTraversal() -> int\nC++: virtual int IsDoneWithTraversal()\n\nTest whether the iterator is finished with the traversal. Returns\n1 for yes, and 0 for no. It is safe to call any of the\nGetCurrent...() methods only when IsDoneWithTraversal() returns\n0.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkUniformGridAMRDataIterator_StaticNew()
{
  return vtkUniformGridAMRDataIterator::New();
}

PyObject *PyVTKClass_vtkUniformGridAMRDataIteratorNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkUniformGridAMRDataIterator_StaticNew,
    PyvtkUniformGridAMRDataIterator_Methods,
    "vtkUniformGridAMRDataIterator", modulename,
    NULL, NULL,
    PyvtkUniformGridAMRDataIterator_Doc(),
    PyVTKClass_vtkCompositeDataIteratorNew(modulename));
  return cls;
}

const char **PyvtkUniformGridAMRDataIterator_Doc()
{
  static const char *docstring[] = {
    "vtkUniformGridAMRDataIterator - subclass of vtkCompositeDataIterator\n\n",
    "Superclass: vtkCompositeDataIterator\n\n",
    "\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkUniformGridAMRDataIterator(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkUniformGridAMRDataIteratorNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkUniformGridAMRDataIterator", o) != 0)
    {
    Py_DECREF(o);
    }

}

