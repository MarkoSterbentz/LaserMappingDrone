// python wrapper for vtkCompositeDataSet
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkCompositeDataSet.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkCompositeDataSet(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkCompositeDataSetNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkDataObjectNew
extern "C" { PyObject *PyVTKClass_vtkDataObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkDataObjectNew
#endif

static const char **PyvtkCompositeDataSet_Doc();


static PyObject *
PyvtkCompositeDataSet_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataSet *op = static_cast<vtkCompositeDataSet *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkCompositeDataSet::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCompositeDataSet_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataSet *op = static_cast<vtkCompositeDataSet *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkCompositeDataSet::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCompositeDataSet_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataSet *op = static_cast<vtkCompositeDataSet *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkCompositeDataSet *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkCompositeDataSet::NewInstance());

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
PyvtkCompositeDataSet_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkCompositeDataSet *tempr = vtkCompositeDataSet::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCompositeDataSet_NewIterator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewIterator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataSet *op = static_cast<vtkCompositeDataSet *>(vp);

  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
    {
    vtkCompositeDataIterator *tempr = op->NewIterator();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCompositeDataSet_GetDataObjectType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataObjectType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataSet *op = static_cast<vtkCompositeDataSet *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetDataObjectType() :
      op->vtkCompositeDataSet::GetDataObjectType());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCompositeDataSet_CopyStructure(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyStructure");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataSet *op = static_cast<vtkCompositeDataSet *>(vp);

  vtkCompositeDataSet *temp0 = NULL;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCompositeDataSet"))
    {
    op->CopyStructure(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCompositeDataSet_SetDataSet(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataSet");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataSet *op = static_cast<vtkCompositeDataSet *>(vp);

  vtkCompositeDataIterator *temp0 = NULL;
  vtkDataObject *temp1 = NULL;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkCompositeDataIterator") &&
      ap.GetVTKObject(temp1, "vtkDataObject"))
    {
    op->SetDataSet(temp0, temp1);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCompositeDataSet_GetDataSet(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataSet");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataSet *op = static_cast<vtkCompositeDataSet *>(vp);

  vtkCompositeDataIterator *temp0 = NULL;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCompositeDataIterator"))
    {
    vtkDataObject *tempr = op->GetDataSet(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCompositeDataSet_GetActualMemorySize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActualMemorySize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataSet *op = static_cast<vtkCompositeDataSet *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned long tempr = (ap.IsBound() ?
      op->GetActualMemorySize() :
      op->vtkCompositeDataSet::GetActualMemorySize());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCompositeDataSet_GetData_s1(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetData");

  vtkInformation *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformation"))
    {
    vtkCompositeDataSet *tempr = vtkCompositeDataSet::GetData(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkCompositeDataSet_GetData_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetData");

  vtkInformationVector *temp0 = NULL;
  int temp1 = 0;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1, 2) &&
      ap.GetVTKObject(temp0, "vtkInformationVector") &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
    {
    vtkCompositeDataSet *tempr = vtkCompositeDataSet::GetData(temp0, temp1);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkCompositeDataSet_GetData_Methods[] = {
  {NULL, PyvtkCompositeDataSet_GetData_s1, METH_VARARGS | METH_STATIC,
   (char*)"O *vtkInformation"},
  {NULL, PyvtkCompositeDataSet_GetData_s2, METH_VARARGS | METH_STATIC,
   (char*)"O|i *vtkInformationVector"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkCompositeDataSet_GetData(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkCompositeDataSet_GetData_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
    {
    case 2:
      return PyvtkCompositeDataSet_GetData_s2(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetData");
  return NULL;
}



static PyObject *
PyvtkCompositeDataSet_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataSet *op = static_cast<vtkCompositeDataSet *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Initialize();
      }
    else
      {
      op->vtkCompositeDataSet::Initialize();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCompositeDataSet_ShallowCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShallowCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataSet *op = static_cast<vtkCompositeDataSet *>(vp);

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
      op->vtkCompositeDataSet::ShallowCopy(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCompositeDataSet_DeepCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeepCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataSet *op = static_cast<vtkCompositeDataSet *>(vp);

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
      op->vtkCompositeDataSet::DeepCopy(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCompositeDataSet_GetNumberOfPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataSet *op = static_cast<vtkCompositeDataSet *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetNumberOfPoints() :
      op->vtkCompositeDataSet::GetNumberOfPoints());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCompositeDataSet_NAME(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "NAME");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkInformationStringKey *tempr = vtkCompositeDataSet::NAME();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCompositeDataSet_CURRENT_PROCESS_CAN_LOAD_BLOCK(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "CURRENT_PROCESS_CAN_LOAD_BLOCK");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkInformationIntegerKey *tempr = vtkCompositeDataSet::CURRENT_PROCESS_CAN_LOAD_BLOCK();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkCompositeDataSet_Methods[] = {
  {(char*)"GetClassName", PyvtkCompositeDataSet_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkCompositeDataSet_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkCompositeDataSet_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkCompositeDataSet\nC++: vtkCompositeDataSet *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkCompositeDataSet_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkCompositeDataSet\nC++: vtkCompositeDataSet *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"NewIterator", PyvtkCompositeDataSet_NewIterator, METH_VARARGS,
   (char*)"V.NewIterator() -> vtkCompositeDataIterator\nC++: virtual vtkCompositeDataIterator *NewIterator()\n\nReturn a new iterator (the iterator has to be deleted by user).\n"},
  {(char*)"GetDataObjectType", PyvtkCompositeDataSet_GetDataObjectType, METH_VARARGS,
   (char*)"V.GetDataObjectType() -> int\nC++: virtual int GetDataObjectType()\n\nReturn class name of data type (see vtkType.h for definitions).\n"},
  {(char*)"CopyStructure", PyvtkCompositeDataSet_CopyStructure, METH_VARARGS,
   (char*)"V.CopyStructure(vtkCompositeDataSet)\nC++: virtual void CopyStructure(vtkCompositeDataSet *input)\n\nCopies the tree structure from the input. All pointers to\nnon-composite data objects are intialized to NULL. This also\nshallow copies the meta data associated with all the nodes.\n"},
  {(char*)"SetDataSet", PyvtkCompositeDataSet_SetDataSet, METH_VARARGS,
   (char*)"V.SetDataSet(vtkCompositeDataIterator, vtkDataObject)\nC++: virtual void SetDataSet(vtkCompositeDataIterator *iter,\n    vtkDataObject *dataObj)\n\nSets the data set at the location pointed by the iterator. The\niterator does not need to be iterating over this dataset itself.\nIt can be any composite datasite with similar structure (achieved\nby using CopyStructure).\n"},
  {(char*)"GetDataSet", PyvtkCompositeDataSet_GetDataSet, METH_VARARGS,
   (char*)"V.GetDataSet(vtkCompositeDataIterator) -> vtkDataObject\nC++: virtual vtkDataObject *GetDataSet(\n    vtkCompositeDataIterator *iter)\n\nReturns the dataset located at the positiong pointed by the\niterator. The iterator does not need to be iterating over this\ndataset itself. It can be an iterator for composite dataset with\nsimilar structure (achieved by using CopyStructure).\n"},
  {(char*)"GetActualMemorySize", PyvtkCompositeDataSet_GetActualMemorySize, METH_VARARGS,
   (char*)"V.GetActualMemorySize() -> int\nC++: virtual unsigned long GetActualMemorySize()\n\nReturn the actual size of the data in kilobytes. This number is\nvalid only after the pipeline has updated.\n"},
  {(char*)"GetData", PyvtkCompositeDataSet_GetData, METH_VARARGS | METH_STATIC,
   (char*)"V.GetData(vtkInformation) -> vtkCompositeDataSet\nC++: static vtkCompositeDataSet *GetData(vtkInformation *info)\nV.GetData(vtkInformationVector, int) -> vtkCompositeDataSet\nC++: static vtkCompositeDataSet *GetData(vtkInformationVector *v,\n    int i=0)\n\nRetrieve an instance of this class from an information object.\n"},
  {(char*)"Initialize", PyvtkCompositeDataSet_Initialize, METH_VARARGS,
   (char*)"V.Initialize()\nC++: virtual void Initialize()\n\nRestore data object to initial state,\n"},
  {(char*)"ShallowCopy", PyvtkCompositeDataSet_ShallowCopy, METH_VARARGS,
   (char*)"V.ShallowCopy(vtkDataObject)\nC++: virtual void ShallowCopy(vtkDataObject *src)\n\nShallow and Deep copy.\n"},
  {(char*)"DeepCopy", PyvtkCompositeDataSet_DeepCopy, METH_VARARGS,
   (char*)"V.DeepCopy(vtkDataObject)\nC++: virtual void DeepCopy(vtkDataObject *src)\n\nShallow and Deep copy.\n"},
  {(char*)"GetNumberOfPoints", PyvtkCompositeDataSet_GetNumberOfPoints, METH_VARARGS,
   (char*)"V.GetNumberOfPoints() -> int\nC++: virtual vtkIdType GetNumberOfPoints()\n\nReturns the total number of points of all blocks. This will\niterate over all blocks and call GetNumberOfPoints() so it might\nbe expansive.\n"},
  {(char*)"NAME", PyvtkCompositeDataSet_NAME, METH_VARARGS | METH_STATIC,
   (char*)"V.NAME() -> vtkInformationStringKey\nC++: static vtkInformationStringKey *NAME()\n\nKey used to put node name in the meta-data associated with a\nnode.\n"},
  {(char*)"CURRENT_PROCESS_CAN_LOAD_BLOCK", PyvtkCompositeDataSet_CURRENT_PROCESS_CAN_LOAD_BLOCK, METH_VARARGS | METH_STATIC,
   (char*)"V.CURRENT_PROCESS_CAN_LOAD_BLOCK() -> vtkInformationIntegerKey\nC++: static vtkInformationIntegerKey *CURRENT_PROCESS_CAN_LOAD_BLOCK(\n    )\n\nKey used to indicate that the current process can load the data\nin the node.  Used for parallel readers where the nodes are\nassigned to the processes by the reader to indicate further down\nthe pipeline which nodes will be on which processes.\n***THIS IS AN EXPERIMENTAL KEY SUBJECT TO CHANGE WITHOUT\n    NOTICE***\n"},
  {NULL, NULL, 0, NULL}
};

PyObject *PyVTKClass_vtkCompositeDataSetNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(NULL,
    PyvtkCompositeDataSet_Methods,
    "vtkCompositeDataSet", modulename,
    NULL, NULL,
    PyvtkCompositeDataSet_Doc(),
    PyVTKClass_vtkDataObjectNew(modulename));
  return cls;
}

const char **PyvtkCompositeDataSet_Doc()
{
  static const char *docstring[] = {
    "vtkCompositeDataSet - abstract superclass for composite\n\n",
    "Superclass: vtkDataObject\n\n",
    "vtkCompositeDataSet is an abstract class that represents a collection\nof datasets (including other composite datasets). It provides an\ninterface to access the datasets through iterators.\nvtkCompositeDataSet provides methods that are used by subclasses to\nstore the datasets. vtkCompositeDataSet provides the datastructure\nfor a full tree representation. Subclasses provide the semantics for\nit and co",
    "ntrol how this tree is built.\n\nSee Also:\n\nvtkCompositeDataIterator\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkCompositeDataSet(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkCompositeDataSetNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkCompositeDataSet", o) != 0)
    {
    Py_DECREF(o);
    }

}

