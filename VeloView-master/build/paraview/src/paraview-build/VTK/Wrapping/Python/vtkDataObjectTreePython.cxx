// python wrapper for vtkDataObjectTree
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkDataObjectTree.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkDataObjectTree(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkDataObjectTreeNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkCompositeDataSetNew
extern "C" { PyObject *PyVTKClass_vtkCompositeDataSetNew(const char *); }
#define DECLARED_PyVTKClass_vtkCompositeDataSetNew
#endif

static const char **PyvtkDataObjectTree_Doc();


static PyObject *
PyvtkDataObjectTree_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectTree *op = static_cast<vtkDataObjectTree *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkDataObjectTree::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataObjectTree_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectTree *op = static_cast<vtkDataObjectTree *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkDataObjectTree::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataObjectTree_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectTree *op = static_cast<vtkDataObjectTree *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkDataObjectTree *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkDataObjectTree::NewInstance());

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
PyvtkDataObjectTree_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkDataObjectTree *tempr = vtkDataObjectTree::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataObjectTree_NewTreeIterator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewTreeIterator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectTree *op = static_cast<vtkDataObjectTree *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkDataObjectTreeIterator *tempr = (ap.IsBound() ?
      op->NewTreeIterator() :
      op->vtkDataObjectTree::NewTreeIterator());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataObjectTree_NewIterator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewIterator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectTree *op = static_cast<vtkDataObjectTree *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkCompositeDataIterator *tempr = (ap.IsBound() ?
      op->NewIterator() :
      op->vtkDataObjectTree::NewIterator());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataObjectTree_CopyStructure(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyStructure");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectTree *op = static_cast<vtkDataObjectTree *>(vp);

  vtkCompositeDataSet *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCompositeDataSet"))
    {
    if (ap.IsBound())
      {
      op->CopyStructure(temp0);
      }
    else
      {
      op->vtkDataObjectTree::CopyStructure(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataObjectTree_SetDataSet(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataSet");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectTree *op = static_cast<vtkDataObjectTree *>(vp);

  vtkCompositeDataIterator *temp0 = NULL;
  vtkDataObject *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkCompositeDataIterator") &&
      ap.GetVTKObject(temp1, "vtkDataObject"))
    {
    if (ap.IsBound())
      {
      op->SetDataSet(temp0, temp1);
      }
    else
      {
      op->vtkDataObjectTree::SetDataSet(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataObjectTree_SetDataSetFrom(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataSetFrom");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectTree *op = static_cast<vtkDataObjectTree *>(vp);

  vtkDataObjectTreeIterator *temp0 = NULL;
  vtkDataObject *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkDataObjectTreeIterator") &&
      ap.GetVTKObject(temp1, "vtkDataObject"))
    {
    if (ap.IsBound())
      {
      op->SetDataSetFrom(temp0, temp1);
      }
    else
      {
      op->vtkDataObjectTree::SetDataSetFrom(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataObjectTree_GetDataSet(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataSet");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectTree *op = static_cast<vtkDataObjectTree *>(vp);

  vtkCompositeDataIterator *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCompositeDataIterator"))
    {
    vtkDataObject *tempr = (ap.IsBound() ?
      op->GetDataSet(temp0) :
      op->vtkDataObjectTree::GetDataSet(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataObjectTree_GetMetaData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMetaData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectTree *op = static_cast<vtkDataObjectTree *>(vp);

  vtkCompositeDataIterator *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCompositeDataIterator"))
    {
    vtkInformation *tempr = (ap.IsBound() ?
      op->GetMetaData(temp0) :
      op->vtkDataObjectTree::GetMetaData(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataObjectTree_HasMetaData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasMetaData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectTree *op = static_cast<vtkDataObjectTree *>(vp);

  vtkCompositeDataIterator *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCompositeDataIterator"))
    {
    int tempr = (ap.IsBound() ?
      op->HasMetaData(temp0) :
      op->vtkDataObjectTree::HasMetaData(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataObjectTree_GetActualMemorySize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActualMemorySize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectTree *op = static_cast<vtkDataObjectTree *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned long tempr = (ap.IsBound() ?
      op->GetActualMemorySize() :
      op->vtkDataObjectTree::GetActualMemorySize());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataObjectTree_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectTree *op = static_cast<vtkDataObjectTree *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Initialize();
      }
    else
      {
      op->vtkDataObjectTree::Initialize();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataObjectTree_ShallowCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShallowCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectTree *op = static_cast<vtkDataObjectTree *>(vp);

  vtkDataObject *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataObject"))
    {
    if (ap.IsBound())
      {
      op->ShallowCopy(temp0);
      }
    else
      {
      op->vtkDataObjectTree::ShallowCopy(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataObjectTree_DeepCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeepCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectTree *op = static_cast<vtkDataObjectTree *>(vp);

  vtkDataObject *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataObject"))
    {
    if (ap.IsBound())
      {
      op->DeepCopy(temp0);
      }
    else
      {
      op->vtkDataObjectTree::DeepCopy(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataObjectTree_GetNumberOfPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectTree *op = static_cast<vtkDataObjectTree *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetNumberOfPoints() :
      op->vtkDataObjectTree::GetNumberOfPoints());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataObjectTree_GetData_s1(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetData");

  vtkInformation *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformation"))
    {
    vtkDataObjectTree *tempr = vtkDataObjectTree::GetData(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkDataObjectTree_GetData_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetData");

  vtkInformationVector *temp0 = NULL;
  int temp1 = 0;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1, 2) &&
      ap.GetVTKObject(temp0, "vtkInformationVector") &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
    {
    vtkDataObjectTree *tempr = vtkDataObjectTree::GetData(temp0, temp1);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkDataObjectTree_GetData_Methods[] = {
  {NULL, PyvtkDataObjectTree_GetData_s1, METH_VARARGS | METH_STATIC,
   (char*)"O *vtkInformation"},
  {NULL, PyvtkDataObjectTree_GetData_s2, METH_VARARGS | METH_STATIC,
   (char*)"O|i *vtkInformationVector"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkDataObjectTree_GetData(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkDataObjectTree_GetData_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
    {
    case 2:
      return PyvtkDataObjectTree_GetData_s2(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetData");
  return NULL;
}


static PyMethodDef PyvtkDataObjectTree_Methods[] = {
  {(char*)"GetClassName", PyvtkDataObjectTree_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkDataObjectTree_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkDataObjectTree_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkDataObjectTree\nC++: vtkDataObjectTree *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkDataObjectTree_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkDataObjectTree\nC++: vtkDataObjectTree *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"NewTreeIterator", PyvtkDataObjectTree_NewTreeIterator, METH_VARARGS,
   (char*)"V.NewTreeIterator() -> vtkDataObjectTreeIterator\nC++: virtual vtkDataObjectTreeIterator *NewTreeIterator()\n\nReturn a new iterator (the iterator has to be deleted by user).\n"},
  {(char*)"NewIterator", PyvtkDataObjectTree_NewIterator, METH_VARARGS,
   (char*)"V.NewIterator() -> vtkCompositeDataIterator\nC++: virtual vtkCompositeDataIterator *NewIterator()\n\nReturn a new iterator (the iterator has to be deleted by user).\n\nUse NewTreeIterator when you have a pointer to a\nvtkDataObjectTree and NewIterator when you have a pointer to a\nvtkCompositeDataSet; NewIterator is inherited and calls\nNewTreeIterator internally.\n"},
  {(char*)"CopyStructure", PyvtkDataObjectTree_CopyStructure, METH_VARARGS,
   (char*)"V.CopyStructure(vtkCompositeDataSet)\nC++: virtual void CopyStructure(vtkCompositeDataSet *input)\n\nCopies the tree structure from the input. All pointers to\nnon-composite data objects are intialized to NULL. This also\nshallow copies the meta data associated with all the nodes.\n"},
  {(char*)"SetDataSet", PyvtkDataObjectTree_SetDataSet, METH_VARARGS,
   (char*)"V.SetDataSet(vtkCompositeDataIterator, vtkDataObject)\nC++: virtual void SetDataSet(vtkCompositeDataIterator *iter,\n    vtkDataObject *dataObj)\n\nSets the data set at the location pointed by the iterator. The\niterator does not need to be iterating over this dataset itself.\nIt can be any composite datasite with similar structure (achieved\nby using CopyStructure).\n"},
  {(char*)"SetDataSetFrom", PyvtkDataObjectTree_SetDataSetFrom, METH_VARARGS,
   (char*)"V.SetDataSetFrom(vtkDataObjectTreeIterator, vtkDataObject)\nC++: void SetDataSetFrom(vtkDataObjectTreeIterator *iter,\n    vtkDataObject *dataObj)\n\nSets the data at the location provided by a\nvtkDataObjectTreeIterator\n"},
  {(char*)"GetDataSet", PyvtkDataObjectTree_GetDataSet, METH_VARARGS,
   (char*)"V.GetDataSet(vtkCompositeDataIterator) -> vtkDataObject\nC++: virtual vtkDataObject *GetDataSet(\n    vtkCompositeDataIterator *iter)\n\nReturns the dataset located at the positiong pointed by the\niterator. The iterator does not need to be iterating over this\ndataset itself. It can be an iterator for composite dataset with\nsimilar structure (achieved by using CopyStructure).\n"},
  {(char*)"GetMetaData", PyvtkDataObjectTree_GetMetaData, METH_VARARGS,
   (char*)"V.GetMetaData(vtkCompositeDataIterator) -> vtkInformation\nC++: virtual vtkInformation *GetMetaData(\n    vtkCompositeDataIterator *iter)\n\nReturns the meta-data associated with the position pointed by the\niterator. This will create a new vtkInformation object if none\nalready exists. Use HasMetaData to avoid creating the\nvtkInformation object unnecessarily. The iterator does not need\nto be iterating over this dataset itself. It can be an iterator\nfor composite dataset with similar structure (achieved by using\nCopyStructure).\n"},
  {(char*)"HasMetaData", PyvtkDataObjectTree_HasMetaData, METH_VARARGS,
   (char*)"V.HasMetaData(vtkCompositeDataIterator) -> int\nC++: virtual int HasMetaData(vtkCompositeDataIterator *iter)\n\nReturns if any meta-data associated with the position pointed by\nthe iterator. The iterator does not need to be iterating over\nthis dataset itself. It can be an iterator for composite dataset\nwith similar structure (achieved by using CopyStructure).\n"},
  {(char*)"GetActualMemorySize", PyvtkDataObjectTree_GetActualMemorySize, METH_VARARGS,
   (char*)"V.GetActualMemorySize() -> int\nC++: virtual unsigned long GetActualMemorySize()\n\nReturn the actual size of the data in kilobytes. This number is\nvalid only after the pipeline has updated.\n"},
  {(char*)"Initialize", PyvtkDataObjectTree_Initialize, METH_VARARGS,
   (char*)"V.Initialize()\nC++: virtual void Initialize()\n\nRestore data object to initial state,\n"},
  {(char*)"ShallowCopy", PyvtkDataObjectTree_ShallowCopy, METH_VARARGS,
   (char*)"V.ShallowCopy(vtkDataObject)\nC++: virtual void ShallowCopy(vtkDataObject *src)\n\nShallow and Deep copy.\n"},
  {(char*)"DeepCopy", PyvtkDataObjectTree_DeepCopy, METH_VARARGS,
   (char*)"V.DeepCopy(vtkDataObject)\nC++: virtual void DeepCopy(vtkDataObject *src)\n\nShallow and Deep copy.\n"},
  {(char*)"GetNumberOfPoints", PyvtkDataObjectTree_GetNumberOfPoints, METH_VARARGS,
   (char*)"V.GetNumberOfPoints() -> int\nC++: virtual vtkIdType GetNumberOfPoints()\n\nReturns the total number of points of all blocks. This will\niterate over all blocks and call GetNumberOfPoints() so it might\nbe expansive.\n"},
  {(char*)"GetData", PyvtkDataObjectTree_GetData, METH_VARARGS | METH_STATIC,
   (char*)"V.GetData(vtkInformation) -> vtkDataObjectTree\nC++: static vtkDataObjectTree *GetData(vtkInformation *info)\nV.GetData(vtkInformationVector, int) -> vtkDataObjectTree\nC++: static vtkDataObjectTree *GetData(vtkInformationVector *v,\n    int i=0)\n\nRetrieve an instance of this class from an information object.\n"},
  {NULL, NULL, 0, NULL}
};

PyObject *PyVTKClass_vtkDataObjectTreeNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(NULL,
    PyvtkDataObjectTree_Methods,
    "vtkDataObjectTree", modulename,
    NULL, NULL,
    PyvtkDataObjectTree_Doc(),
    PyVTKClass_vtkCompositeDataSetNew(modulename));
  return cls;
}

const char **PyvtkDataObjectTree_Doc()
{
  static const char *docstring[] = {
    "vtkDataObjectTree - provides implementation for most abstract\n\n",
    "Superclass: vtkCompositeDataSet\n\n",
    "vtkDataObjectTree is represents a collection of datasets (including\nother composite datasets). It provides an interface to access the\ndatasets through iterators. vtkDataObjectTree provides methods that\nare used by subclasses to store the datasets. vtkDataObjectTree\nprovides the datastructure for a full tree representation. Subclasses\nprovide the semantics for it and control how this tree is built.",
    "\n\nSee Also:\n\nvtkDataObjectTreeIterator\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkDataObjectTree(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkDataObjectTreeNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkDataObjectTree", o) != 0)
    {
    Py_DECREF(o);
    }

}

