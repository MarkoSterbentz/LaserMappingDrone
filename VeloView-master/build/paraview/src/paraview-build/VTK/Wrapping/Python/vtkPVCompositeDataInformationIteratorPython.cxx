// python wrapper for vtkPVCompositeDataInformationIterator
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkPVCompositeDataInformationIterator.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkPVCompositeDataInformationIterator(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkPVCompositeDataInformationIteratorNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkPVCompositeDataInformationIterator_Doc();


static PyObject *
PyvtkPVCompositeDataInformationIterator_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVCompositeDataInformationIterator *op = static_cast<vtkPVCompositeDataInformationIterator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkPVCompositeDataInformationIterator::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVCompositeDataInformationIterator_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVCompositeDataInformationIterator *op = static_cast<vtkPVCompositeDataInformationIterator *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPVCompositeDataInformationIterator::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVCompositeDataInformationIterator_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVCompositeDataInformationIterator *op = static_cast<vtkPVCompositeDataInformationIterator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPVCompositeDataInformationIterator *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPVCompositeDataInformationIterator::NewInstance());

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
PyvtkPVCompositeDataInformationIterator_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkPVCompositeDataInformationIterator *tempr = vtkPVCompositeDataInformationIterator::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVCompositeDataInformationIterator_SetDataInformation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVCompositeDataInformationIterator *op = static_cast<vtkPVCompositeDataInformationIterator *>(vp);

  vtkPVDataInformation *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPVDataInformation"))
    {
    if (ap.IsBound())
      {
      op->SetDataInformation(temp0);
      }
    else
      {
      op->vtkPVCompositeDataInformationIterator::SetDataInformation(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVCompositeDataInformationIterator_GetDataInformation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVCompositeDataInformationIterator *op = static_cast<vtkPVCompositeDataInformationIterator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPVDataInformation *tempr = (ap.IsBound() ?
      op->GetDataInformation() :
      op->vtkPVCompositeDataInformationIterator::GetDataInformation());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVCompositeDataInformationIterator_InitTraversal(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InitTraversal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVCompositeDataInformationIterator *op = static_cast<vtkPVCompositeDataInformationIterator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->InitTraversal();
      }
    else
      {
      op->vtkPVCompositeDataInformationIterator::InitTraversal();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVCompositeDataInformationIterator_IsDoneWithTraversal(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsDoneWithTraversal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVCompositeDataInformationIterator *op = static_cast<vtkPVCompositeDataInformationIterator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->IsDoneWithTraversal() :
      op->vtkPVCompositeDataInformationIterator::IsDoneWithTraversal());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVCompositeDataInformationIterator_GoToNextItem(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GoToNextItem");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVCompositeDataInformationIterator *op = static_cast<vtkPVCompositeDataInformationIterator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->GoToNextItem();
      }
    else
      {
      op->vtkPVCompositeDataInformationIterator::GoToNextItem();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVCompositeDataInformationIterator_GetCurrentDataInformation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCurrentDataInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVCompositeDataInformationIterator *op = static_cast<vtkPVCompositeDataInformationIterator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPVDataInformation *tempr = (ap.IsBound() ?
      op->GetCurrentDataInformation() :
      op->vtkPVCompositeDataInformationIterator::GetCurrentDataInformation());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVCompositeDataInformationIterator_GetCurrentName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCurrentName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVCompositeDataInformationIterator *op = static_cast<vtkPVCompositeDataInformationIterator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetCurrentName() :
      op->vtkPVCompositeDataInformationIterator::GetCurrentName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVCompositeDataInformationIterator_GetCurrentFlatIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCurrentFlatIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVCompositeDataInformationIterator *op = static_cast<vtkPVCompositeDataInformationIterator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned int tempr = (ap.IsBound() ?
      op->GetCurrentFlatIndex() :
      op->vtkPVCompositeDataInformationIterator::GetCurrentFlatIndex());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkPVCompositeDataInformationIterator_Methods[] = {
  {(char*)"GetClassName", PyvtkPVCompositeDataInformationIterator_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkPVCompositeDataInformationIterator_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkPVCompositeDataInformationIterator_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkPVCompositeDataInformationIterator\nC++: vtkPVCompositeDataInformationIterator *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkPVCompositeDataInformationIterator_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkPVCompositeDataInformationIterator\nC++: vtkPVCompositeDataInformationIterator *SafeDownCast(\n    vtkObject* o)\n\n"},
  {(char*)"SetDataInformation", PyvtkPVCompositeDataInformationIterator_SetDataInformation, METH_VARARGS,
   (char*)"V.SetDataInformation(vtkPVDataInformation)\nC++: void SetDataInformation(vtkPVDataInformation *)\n\nGet/Set the vtkPVDataInformation instance to iterate over. It is\nassumed that the argument represents the data information for a\ncomposite dataset.\n"},
  {(char*)"GetDataInformation", PyvtkPVCompositeDataInformationIterator_GetDataInformation, METH_VARARGS,
   (char*)"V.GetDataInformation() -> vtkPVDataInformation\nC++: vtkPVDataInformation *GetDataInformation()\n\nGet/Set the vtkPVDataInformation instance to iterate over. It is\nassumed that the argument represents the data information for a\ncomposite dataset.\n"},
  {(char*)"InitTraversal", PyvtkPVCompositeDataInformationIterator_InitTraversal, METH_VARARGS,
   (char*)"V.InitTraversal()\nC++: void InitTraversal()\n\nInitializes the traversal.\n"},
  {(char*)"IsDoneWithTraversal", PyvtkPVCompositeDataInformationIterator_IsDoneWithTraversal, METH_VARARGS,
   (char*)"V.IsDoneWithTraversal() -> bool\nC++: bool IsDoneWithTraversal()\n\nReturns true, if the iterator is finished with the traversal.\n"},
  {(char*)"GoToNextItem", PyvtkPVCompositeDataInformationIterator_GoToNextItem, METH_VARARGS,
   (char*)"V.GoToNextItem()\nC++: void GoToNextItem()\n\nGoes to the next node.\n"},
  {(char*)"GetCurrentDataInformation", PyvtkPVCompositeDataInformationIterator_GetCurrentDataInformation, METH_VARARGS,
   (char*)"V.GetCurrentDataInformation() -> vtkPVDataInformation\nC++: vtkPVDataInformation *GetCurrentDataInformation()\n\nReturns the current nodes data-information. If current node is a\npiece within a multi-piece dataset, then this will return NULL.\n"},
  {(char*)"GetCurrentName", PyvtkPVCompositeDataInformationIterator_GetCurrentName, METH_VARARGS,
   (char*)"V.GetCurrentName() -> string\nC++: const char *GetCurrentName()\n\nReturns the name for the current node. Name may be valid only for\na child node. The root node has no name. Returns NULL when no\nname is provided.\n"},
  {(char*)"GetCurrentFlatIndex", PyvtkPVCompositeDataInformationIterator_GetCurrentFlatIndex, METH_VARARGS,
   (char*)"V.GetCurrentFlatIndex() -> int\nC++: unsigned int GetCurrentFlatIndex()\n\nReturns the current flat index/composite index. This is only\nvalid is IsDoneWithTraversal() returns false.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkPVCompositeDataInformationIterator_StaticNew()
{
  return vtkPVCompositeDataInformationIterator::New();
}

PyObject *PyVTKClass_vtkPVCompositeDataInformationIteratorNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkPVCompositeDataInformationIterator_StaticNew,
    PyvtkPVCompositeDataInformationIterator_Methods,
    "vtkPVCompositeDataInformationIterator", modulename,
    NULL, NULL,
    PyvtkPVCompositeDataInformationIterator_Doc(),
    PyVTKClass_vtkObjectNew(modulename));
  return cls;
}

const char **PyvtkPVCompositeDataInformationIterator_Doc()
{
  static const char *docstring[] = {
    "vtkPVCompositeDataInformationIterator - iterator used to iterate over\n\n",
    "Superclass: vtkObject\n\n",
    "vtkPVCompositeDataInformationIterator is an iterator used to iterate\nover data information for a composite data set.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPVCompositeDataInformationIterator(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPVCompositeDataInformationIteratorNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPVCompositeDataInformationIterator", o) != 0)
    {
    Py_DECREF(o);
    }

}

