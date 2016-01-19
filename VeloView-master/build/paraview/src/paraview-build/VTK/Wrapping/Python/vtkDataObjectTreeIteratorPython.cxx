// python wrapper for vtkDataObjectTreeIterator
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkDataObjectTreeIterator.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkDataObjectTreeIterator(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkDataObjectTreeIteratorNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkCompositeDataIteratorNew
extern "C" { PyObject *PyVTKClass_vtkCompositeDataIteratorNew(const char *); }
#define DECLARED_PyVTKClass_vtkCompositeDataIteratorNew
#endif

static const char **PyvtkDataObjectTreeIterator_Doc();


static PyObject *
PyvtkDataObjectTreeIterator_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectTreeIterator *op = static_cast<vtkDataObjectTreeIterator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkDataObjectTreeIterator::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataObjectTreeIterator_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectTreeIterator *op = static_cast<vtkDataObjectTreeIterator *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkDataObjectTreeIterator::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataObjectTreeIterator_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectTreeIterator *op = static_cast<vtkDataObjectTreeIterator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkDataObjectTreeIterator *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkDataObjectTreeIterator::NewInstance());

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
PyvtkDataObjectTreeIterator_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkDataObjectTreeIterator *tempr = vtkDataObjectTreeIterator::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataObjectTreeIterator_GoToFirstItem(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GoToFirstItem");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectTreeIterator *op = static_cast<vtkDataObjectTreeIterator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->GoToFirstItem();
      }
    else
      {
      op->vtkDataObjectTreeIterator::GoToFirstItem();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataObjectTreeIterator_GoToNextItem(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GoToNextItem");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectTreeIterator *op = static_cast<vtkDataObjectTreeIterator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->GoToNextItem();
      }
    else
      {
      op->vtkDataObjectTreeIterator::GoToNextItem();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataObjectTreeIterator_IsDoneWithTraversal(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsDoneWithTraversal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectTreeIterator *op = static_cast<vtkDataObjectTreeIterator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->IsDoneWithTraversal() :
      op->vtkDataObjectTreeIterator::IsDoneWithTraversal());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataObjectTreeIterator_GetCurrentDataObject(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCurrentDataObject");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectTreeIterator *op = static_cast<vtkDataObjectTreeIterator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkDataObject *tempr = (ap.IsBound() ?
      op->GetCurrentDataObject() :
      op->vtkDataObjectTreeIterator::GetCurrentDataObject());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataObjectTreeIterator_GetCurrentMetaData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCurrentMetaData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectTreeIterator *op = static_cast<vtkDataObjectTreeIterator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkInformation *tempr = (ap.IsBound() ?
      op->GetCurrentMetaData() :
      op->vtkDataObjectTreeIterator::GetCurrentMetaData());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataObjectTreeIterator_HasCurrentMetaData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasCurrentMetaData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectTreeIterator *op = static_cast<vtkDataObjectTreeIterator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->HasCurrentMetaData() :
      op->vtkDataObjectTreeIterator::HasCurrentMetaData());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataObjectTreeIterator_GetCurrentFlatIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCurrentFlatIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectTreeIterator *op = static_cast<vtkDataObjectTreeIterator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned int tempr = (ap.IsBound() ?
      op->GetCurrentFlatIndex() :
      op->vtkDataObjectTreeIterator::GetCurrentFlatIndex());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataObjectTreeIterator_SetVisitOnlyLeaves(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVisitOnlyLeaves");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectTreeIterator *op = static_cast<vtkDataObjectTreeIterator *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetVisitOnlyLeaves(temp0);
      }
    else
      {
      op->vtkDataObjectTreeIterator::SetVisitOnlyLeaves(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataObjectTreeIterator_GetVisitOnlyLeaves(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVisitOnlyLeaves");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectTreeIterator *op = static_cast<vtkDataObjectTreeIterator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetVisitOnlyLeaves() :
      op->vtkDataObjectTreeIterator::GetVisitOnlyLeaves());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataObjectTreeIterator_VisitOnlyLeavesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "VisitOnlyLeavesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectTreeIterator *op = static_cast<vtkDataObjectTreeIterator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->VisitOnlyLeavesOn();
      }
    else
      {
      op->vtkDataObjectTreeIterator::VisitOnlyLeavesOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataObjectTreeIterator_VisitOnlyLeavesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "VisitOnlyLeavesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectTreeIterator *op = static_cast<vtkDataObjectTreeIterator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->VisitOnlyLeavesOff();
      }
    else
      {
      op->vtkDataObjectTreeIterator::VisitOnlyLeavesOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataObjectTreeIterator_SetTraverseSubTree(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTraverseSubTree");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectTreeIterator *op = static_cast<vtkDataObjectTreeIterator *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetTraverseSubTree(temp0);
      }
    else
      {
      op->vtkDataObjectTreeIterator::SetTraverseSubTree(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataObjectTreeIterator_GetTraverseSubTree(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTraverseSubTree");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectTreeIterator *op = static_cast<vtkDataObjectTreeIterator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetTraverseSubTree() :
      op->vtkDataObjectTreeIterator::GetTraverseSubTree());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataObjectTreeIterator_TraverseSubTreeOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TraverseSubTreeOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectTreeIterator *op = static_cast<vtkDataObjectTreeIterator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->TraverseSubTreeOn();
      }
    else
      {
      op->vtkDataObjectTreeIterator::TraverseSubTreeOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataObjectTreeIterator_TraverseSubTreeOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TraverseSubTreeOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectTreeIterator *op = static_cast<vtkDataObjectTreeIterator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->TraverseSubTreeOff();
      }
    else
      {
      op->vtkDataObjectTreeIterator::TraverseSubTreeOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkDataObjectTreeIterator_Methods[] = {
  {(char*)"GetClassName", PyvtkDataObjectTreeIterator_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkDataObjectTreeIterator_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkDataObjectTreeIterator_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkDataObjectTreeIterator\nC++: vtkDataObjectTreeIterator *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkDataObjectTreeIterator_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkDataObjectTreeIterator\nC++: vtkDataObjectTreeIterator *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GoToFirstItem", PyvtkDataObjectTreeIterator_GoToFirstItem, METH_VARARGS,
   (char*)"V.GoToFirstItem()\nC++: virtual void GoToFirstItem()\n\nMove the iterator to the beginning of the collection.\n"},
  {(char*)"GoToNextItem", PyvtkDataObjectTreeIterator_GoToNextItem, METH_VARARGS,
   (char*)"V.GoToNextItem()\nC++: virtual void GoToNextItem()\n\nMove the iterator to the next item in the collection.\n"},
  {(char*)"IsDoneWithTraversal", PyvtkDataObjectTreeIterator_IsDoneWithTraversal, METH_VARARGS,
   (char*)"V.IsDoneWithTraversal() -> int\nC++: virtual int IsDoneWithTraversal()\n\nTest whether the iterator is finished with the traversal. Returns\n1 for yes, and 0 for no. It is safe to call any of the\nGetCurrent...() methods only when IsDoneWithTraversal() returns\n0.\n"},
  {(char*)"GetCurrentDataObject", PyvtkDataObjectTreeIterator_GetCurrentDataObject, METH_VARARGS,
   (char*)"V.GetCurrentDataObject() -> vtkDataObject\nC++: virtual vtkDataObject *GetCurrentDataObject()\n\nReturns the current item. Valid only when IsDoneWithTraversal()\nreturns 0.\n"},
  {(char*)"GetCurrentMetaData", PyvtkDataObjectTreeIterator_GetCurrentMetaData, METH_VARARGS,
   (char*)"V.GetCurrentMetaData() -> vtkInformation\nC++: virtual vtkInformation *GetCurrentMetaData()\n\nReturns the meta-data associated with the current item. Note\nthat, depending on iterator implementation, the returned\ninformation is not necessarily stored on the current object. So\nmodifying the information is forbidden.\n"},
  {(char*)"HasCurrentMetaData", PyvtkDataObjectTreeIterator_HasCurrentMetaData, METH_VARARGS,
   (char*)"V.HasCurrentMetaData() -> int\nC++: virtual int HasCurrentMetaData()\n\nReturns if the a meta-data information object is present for the\ncurrent item. Return 1 on success, 0 otherwise.\n"},
  {(char*)"GetCurrentFlatIndex", PyvtkDataObjectTreeIterator_GetCurrentFlatIndex, METH_VARARGS,
   (char*)"V.GetCurrentFlatIndex() -> int\nC++: virtual unsigned int GetCurrentFlatIndex()\n\nFlat index is an index obtained by traversing the tree in\npreorder. This can be used to uniquely identify nodes in the\ntree. Not valid if IsDoneWithTraversal() returns true.\n"},
  {(char*)"SetVisitOnlyLeaves", PyvtkDataObjectTreeIterator_SetVisitOnlyLeaves, METH_VARARGS,
   (char*)"V.SetVisitOnlyLeaves(int)\nC++: void SetVisitOnlyLeaves(int a)\n\nIf VisitOnlyLeaves is true, the iterator will only visit nodes\n(sub-datasets) that are not composite. If it encounters a\ncomposite data set, it will automatically traverse that composite\ndataset until it finds non-composite datasets. With this options,\nit is possible to visit all non-composite datasets in tree of\ncomposite datasets (composite of composite of composite for\nexample :-) ) If VisitOnlyLeaves is false, GetCurrentDataObject()\nmay return vtkCompositeDataSet. By default, VisitOnlyLeaves is 1.\n"},
  {(char*)"GetVisitOnlyLeaves", PyvtkDataObjectTreeIterator_GetVisitOnlyLeaves, METH_VARARGS,
   (char*)"V.GetVisitOnlyLeaves() -> int\nC++: int GetVisitOnlyLeaves()\n\nIf VisitOnlyLeaves is true, the iterator will only visit nodes\n(sub-datasets) that are not composite. If it encounters a\ncomposite data set, it will automatically traverse that composite\ndataset until it finds non-composite datasets. With this options,\nit is possible to visit all non-composite datasets in tree of\ncomposite datasets (composite of composite of composite for\nexample :-) ) If VisitOnlyLeaves is false, GetCurrentDataObject()\nmay return vtkCompositeDataSet. By default, VisitOnlyLeaves is 1.\n"},
  {(char*)"VisitOnlyLeavesOn", PyvtkDataObjectTreeIterator_VisitOnlyLeavesOn, METH_VARARGS,
   (char*)"V.VisitOnlyLeavesOn()\nC++: void VisitOnlyLeavesOn()\n\nIf VisitOnlyLeaves is true, the iterator will only visit nodes\n(sub-datasets) that are not composite. If it encounters a\ncomposite data set, it will automatically traverse that composite\ndataset until it finds non-composite datasets. With this options,\nit is possible to visit all non-composite datasets in tree of\ncomposite datasets (composite of composite of composite for\nexample :-) ) If VisitOnlyLeaves is false, GetCurrentDataObject()\nmay return vtkCompositeDataSet. By default, VisitOnlyLeaves is 1.\n"},
  {(char*)"VisitOnlyLeavesOff", PyvtkDataObjectTreeIterator_VisitOnlyLeavesOff, METH_VARARGS,
   (char*)"V.VisitOnlyLeavesOff()\nC++: void VisitOnlyLeavesOff()\n\nIf VisitOnlyLeaves is true, the iterator will only visit nodes\n(sub-datasets) that are not composite. If it encounters a\ncomposite data set, it will automatically traverse that composite\ndataset until it finds non-composite datasets. With this options,\nit is possible to visit all non-composite datasets in tree of\ncomposite datasets (composite of composite of composite for\nexample :-) ) If VisitOnlyLeaves is false, GetCurrentDataObject()\nmay return vtkCompositeDataSet. By default, VisitOnlyLeaves is 1.\n"},
  {(char*)"SetTraverseSubTree", PyvtkDataObjectTreeIterator_SetTraverseSubTree, METH_VARARGS,
   (char*)"V.SetTraverseSubTree(int)\nC++: void SetTraverseSubTree(int a)\n\nIf TraverseSubTree is set to true, the iterator will visit the\nentire tree structure, otherwise it only visits the first level\nchildren. Set to 1 by default.\n"},
  {(char*)"GetTraverseSubTree", PyvtkDataObjectTreeIterator_GetTraverseSubTree, METH_VARARGS,
   (char*)"V.GetTraverseSubTree() -> int\nC++: int GetTraverseSubTree()\n\nIf TraverseSubTree is set to true, the iterator will visit the\nentire tree structure, otherwise it only visits the first level\nchildren. Set to 1 by default.\n"},
  {(char*)"TraverseSubTreeOn", PyvtkDataObjectTreeIterator_TraverseSubTreeOn, METH_VARARGS,
   (char*)"V.TraverseSubTreeOn()\nC++: void TraverseSubTreeOn()\n\nIf TraverseSubTree is set to true, the iterator will visit the\nentire tree structure, otherwise it only visits the first level\nchildren. Set to 1 by default.\n"},
  {(char*)"TraverseSubTreeOff", PyvtkDataObjectTreeIterator_TraverseSubTreeOff, METH_VARARGS,
   (char*)"V.TraverseSubTreeOff()\nC++: void TraverseSubTreeOff()\n\nIf TraverseSubTree is set to true, the iterator will visit the\nentire tree structure, otherwise it only visits the first level\nchildren. Set to 1 by default.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkDataObjectTreeIterator_StaticNew()
{
  return vtkDataObjectTreeIterator::New();
}

PyObject *PyVTKClass_vtkDataObjectTreeIteratorNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkDataObjectTreeIterator_StaticNew,
    PyvtkDataObjectTreeIterator_Methods,
    "vtkDataObjectTreeIterator", modulename,
    NULL, NULL,
    PyvtkDataObjectTreeIterator_Doc(),
    PyVTKClass_vtkCompositeDataIteratorNew(modulename));
  return cls;
}

const char **PyvtkDataObjectTreeIterator_Doc()
{
  static const char *docstring[] = {
    "vtkDataObjectTreeIterator - superclass for composite data iterators\n\n",
    "Superclass: vtkCompositeDataIterator\n\n",
    "vtkDataObjectTreeIterator provides an interface for accessing\ndatasets in a collection (vtkDataObjectTreeIterator).\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkDataObjectTreeIterator(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkDataObjectTreeIteratorNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkDataObjectTreeIterator", o) != 0)
    {
    Py_DECREF(o);
    }

}

