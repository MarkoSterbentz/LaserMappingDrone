// python wrapper for vtkCompositeDataIterator
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkCompositeDataIterator.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkCompositeDataIterator(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkCompositeDataIteratorNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkCompositeDataIterator_Doc();


static PyObject *
PyvtkCompositeDataIterator_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataIterator *op = static_cast<vtkCompositeDataIterator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkCompositeDataIterator::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCompositeDataIterator_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataIterator *op = static_cast<vtkCompositeDataIterator *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkCompositeDataIterator::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCompositeDataIterator_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataIterator *op = static_cast<vtkCompositeDataIterator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkCompositeDataIterator *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkCompositeDataIterator::NewInstance());

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
PyvtkCompositeDataIterator_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkCompositeDataIterator *tempr = vtkCompositeDataIterator::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCompositeDataIterator_SetDataSet(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataSet");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataIterator *op = static_cast<vtkCompositeDataIterator *>(vp);

  vtkCompositeDataSet *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCompositeDataSet"))
    {
    if (ap.IsBound())
      {
      op->SetDataSet(temp0);
      }
    else
      {
      op->vtkCompositeDataIterator::SetDataSet(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCompositeDataIterator_GetDataSet(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataSet");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataIterator *op = static_cast<vtkCompositeDataIterator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkCompositeDataSet *tempr = (ap.IsBound() ?
      op->GetDataSet() :
      op->vtkCompositeDataIterator::GetDataSet());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCompositeDataIterator_InitTraversal(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InitTraversal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataIterator *op = static_cast<vtkCompositeDataIterator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->InitTraversal();
      }
    else
      {
      op->vtkCompositeDataIterator::InitTraversal();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCompositeDataIterator_InitReverseTraversal(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InitReverseTraversal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataIterator *op = static_cast<vtkCompositeDataIterator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->InitReverseTraversal();
      }
    else
      {
      op->vtkCompositeDataIterator::InitReverseTraversal();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCompositeDataIterator_GoToFirstItem(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GoToFirstItem");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataIterator *op = static_cast<vtkCompositeDataIterator *>(vp);

  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
    {
    op->GoToFirstItem();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCompositeDataIterator_GoToNextItem(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GoToNextItem");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataIterator *op = static_cast<vtkCompositeDataIterator *>(vp);

  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
    {
    op->GoToNextItem();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCompositeDataIterator_IsDoneWithTraversal(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsDoneWithTraversal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataIterator *op = static_cast<vtkCompositeDataIterator *>(vp);

  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
    {
    int tempr = op->IsDoneWithTraversal();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCompositeDataIterator_GetCurrentDataObject(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCurrentDataObject");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataIterator *op = static_cast<vtkCompositeDataIterator *>(vp);

  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
    {
    vtkDataObject *tempr = op->GetCurrentDataObject();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCompositeDataIterator_GetCurrentMetaData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCurrentMetaData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataIterator *op = static_cast<vtkCompositeDataIterator *>(vp);

  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
    {
    vtkInformation *tempr = op->GetCurrentMetaData();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCompositeDataIterator_HasCurrentMetaData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasCurrentMetaData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataIterator *op = static_cast<vtkCompositeDataIterator *>(vp);

  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
    {
    int tempr = op->HasCurrentMetaData();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCompositeDataIterator_SetSkipEmptyNodes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSkipEmptyNodes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataIterator *op = static_cast<vtkCompositeDataIterator *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetSkipEmptyNodes(temp0);
      }
    else
      {
      op->vtkCompositeDataIterator::SetSkipEmptyNodes(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCompositeDataIterator_GetSkipEmptyNodes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSkipEmptyNodes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataIterator *op = static_cast<vtkCompositeDataIterator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetSkipEmptyNodes() :
      op->vtkCompositeDataIterator::GetSkipEmptyNodes());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCompositeDataIterator_SkipEmptyNodesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SkipEmptyNodesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataIterator *op = static_cast<vtkCompositeDataIterator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SkipEmptyNodesOn();
      }
    else
      {
      op->vtkCompositeDataIterator::SkipEmptyNodesOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCompositeDataIterator_SkipEmptyNodesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SkipEmptyNodesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataIterator *op = static_cast<vtkCompositeDataIterator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SkipEmptyNodesOff();
      }
    else
      {
      op->vtkCompositeDataIterator::SkipEmptyNodesOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCompositeDataIterator_GetCurrentFlatIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCurrentFlatIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataIterator *op = static_cast<vtkCompositeDataIterator *>(vp);

  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
    {
    unsigned int tempr = op->GetCurrentFlatIndex();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCompositeDataIterator_GetReverse(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetReverse");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataIterator *op = static_cast<vtkCompositeDataIterator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetReverse() :
      op->vtkCompositeDataIterator::GetReverse());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkCompositeDataIterator_Methods[] = {
  {(char*)"GetClassName", PyvtkCompositeDataIterator_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkCompositeDataIterator_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkCompositeDataIterator_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkCompositeDataIterator\nC++: vtkCompositeDataIterator *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkCompositeDataIterator_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkCompositeDataIterator\nC++: vtkCompositeDataIterator *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetDataSet", PyvtkCompositeDataIterator_SetDataSet, METH_VARARGS,
   (char*)"V.SetDataSet(vtkCompositeDataSet)\nC++: virtual void SetDataSet(vtkCompositeDataSet *ds)\n\nSet the composite dataset this iterator is iterating over. Must\nbe set before traversal begins.\n"},
  {(char*)"GetDataSet", PyvtkCompositeDataIterator_GetDataSet, METH_VARARGS,
   (char*)"V.GetDataSet() -> vtkCompositeDataSet\nC++: vtkCompositeDataSet *GetDataSet()\n\nSet the composite dataset this iterator is iterating over. Must\nbe set before traversal begins.\n"},
  {(char*)"InitTraversal", PyvtkCompositeDataIterator_InitTraversal, METH_VARARGS,
   (char*)"V.InitTraversal()\nC++: virtual void InitTraversal()\n\nBegin iterating over the composite dataset structure.\n"},
  {(char*)"InitReverseTraversal", PyvtkCompositeDataIterator_InitReverseTraversal, METH_VARARGS,
   (char*)"V.InitReverseTraversal()\nC++: virtual void InitReverseTraversal()\n\nBegin iterating over the composite dataset structure in reverse\norder.\n"},
  {(char*)"GoToFirstItem", PyvtkCompositeDataIterator_GoToFirstItem, METH_VARARGS,
   (char*)"V.GoToFirstItem()\nC++: virtual void GoToFirstItem()\n\nMove the iterator to the beginning of the collection.\n"},
  {(char*)"GoToNextItem", PyvtkCompositeDataIterator_GoToNextItem, METH_VARARGS,
   (char*)"V.GoToNextItem()\nC++: virtual void GoToNextItem()\n\nMove the iterator to the next item in the collection.\n"},
  {(char*)"IsDoneWithTraversal", PyvtkCompositeDataIterator_IsDoneWithTraversal, METH_VARARGS,
   (char*)"V.IsDoneWithTraversal() -> int\nC++: virtual int IsDoneWithTraversal()\n\nTest whether the iterator is finished with the traversal. Returns\n1 for yes, and 0 for no. It is safe to call any of the\nGetCurrent...() methods only when IsDoneWithTraversal() returns\n0.\n"},
  {(char*)"GetCurrentDataObject", PyvtkCompositeDataIterator_GetCurrentDataObject, METH_VARARGS,
   (char*)"V.GetCurrentDataObject() -> vtkDataObject\nC++: virtual vtkDataObject *GetCurrentDataObject()\n\nReturns the current item. Valid only when IsDoneWithTraversal()\nreturns 0.\n"},
  {(char*)"GetCurrentMetaData", PyvtkCompositeDataIterator_GetCurrentMetaData, METH_VARARGS,
   (char*)"V.GetCurrentMetaData() -> vtkInformation\nC++: virtual vtkInformation *GetCurrentMetaData()\n\nReturns the meta-data associated with the current item. This will\nallocate a new vtkInformation object is none is already present.\nUse HasCurrentMetaData to avoid unnecessary creation of\nvtkInformation objects.\n"},
  {(char*)"HasCurrentMetaData", PyvtkCompositeDataIterator_HasCurrentMetaData, METH_VARARGS,
   (char*)"V.HasCurrentMetaData() -> int\nC++: virtual int HasCurrentMetaData()\n\nReturns if the a meta-data information object is present for the\ncurrent item. Return 1 on success, 0 otherwise.\n"},
  {(char*)"SetSkipEmptyNodes", PyvtkCompositeDataIterator_SetSkipEmptyNodes, METH_VARARGS,
   (char*)"V.SetSkipEmptyNodes(int)\nC++: void SetSkipEmptyNodes(int a)\n\nIf SkipEmptyNodes is true, then NULL datasets will be skipped.\nDefault is true.\n"},
  {(char*)"GetSkipEmptyNodes", PyvtkCompositeDataIterator_GetSkipEmptyNodes, METH_VARARGS,
   (char*)"V.GetSkipEmptyNodes() -> int\nC++: int GetSkipEmptyNodes()\n\nIf SkipEmptyNodes is true, then NULL datasets will be skipped.\nDefault is true.\n"},
  {(char*)"SkipEmptyNodesOn", PyvtkCompositeDataIterator_SkipEmptyNodesOn, METH_VARARGS,
   (char*)"V.SkipEmptyNodesOn()\nC++: void SkipEmptyNodesOn()\n\nIf SkipEmptyNodes is true, then NULL datasets will be skipped.\nDefault is true.\n"},
  {(char*)"SkipEmptyNodesOff", PyvtkCompositeDataIterator_SkipEmptyNodesOff, METH_VARARGS,
   (char*)"V.SkipEmptyNodesOff()\nC++: void SkipEmptyNodesOff()\n\nIf SkipEmptyNodes is true, then NULL datasets will be skipped.\nDefault is true.\n"},
  {(char*)"GetCurrentFlatIndex", PyvtkCompositeDataIterator_GetCurrentFlatIndex, METH_VARARGS,
   (char*)"V.GetCurrentFlatIndex() -> int\nC++: virtual unsigned int GetCurrentFlatIndex()\n\nFlat index is an index to identify the data in a composite data\nstructure\n"},
  {(char*)"GetReverse", PyvtkCompositeDataIterator_GetReverse, METH_VARARGS,
   (char*)"V.GetReverse() -> int\nC++: int GetReverse()\n\nReturns if the iteration is in reverse order.\n"},
  {NULL, NULL, 0, NULL}
};

PyObject *PyVTKClass_vtkCompositeDataIteratorNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(NULL,
    PyvtkCompositeDataIterator_Methods,
    "vtkCompositeDataIterator", modulename,
    NULL, NULL,
    PyvtkCompositeDataIterator_Doc(),
    PyVTKClass_vtkObjectNew(modulename));
  return cls;
}

const char **PyvtkCompositeDataIterator_Doc()
{
  static const char *docstring[] = {
    "vtkCompositeDataIterator - superclass for composite data iterators\n\n",
    "Superclass: vtkObject\n\n",
    "vtkCompositeDataIterator provides an interface for accessing datasets\nin a collection (vtkCompositeDataIterator).\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkCompositeDataIterator(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkCompositeDataIteratorNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkCompositeDataIterator", o) != 0)
    {
    Py_DECREF(o);
    }

}

