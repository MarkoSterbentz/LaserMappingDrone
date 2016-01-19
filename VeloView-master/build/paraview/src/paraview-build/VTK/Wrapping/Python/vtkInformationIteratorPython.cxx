// python wrapper for vtkInformationIterator
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkInformationIterator.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkInformationIterator(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkInformationIteratorNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkInformationIterator_Doc();


static PyObject *
PyvtkInformationIterator_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformationIterator *op = static_cast<vtkInformationIterator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkInformationIterator::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkInformationIterator_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformationIterator *op = static_cast<vtkInformationIterator *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkInformationIterator::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkInformationIterator_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformationIterator *op = static_cast<vtkInformationIterator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkInformationIterator *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkInformationIterator::NewInstance());

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
PyvtkInformationIterator_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkInformationIterator *tempr = vtkInformationIterator::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkInformationIterator_SetInformation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformationIterator *op = static_cast<vtkInformationIterator *>(vp);

  vtkInformation *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformation"))
    {
    if (ap.IsBound())
      {
      op->SetInformation(temp0);
      }
    else
      {
      op->vtkInformationIterator::SetInformation(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInformationIterator_GetInformation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformationIterator *op = static_cast<vtkInformationIterator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkInformation *tempr = (ap.IsBound() ?
      op->GetInformation() :
      op->vtkInformationIterator::GetInformation());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkInformationIterator_SetInformationWeak(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInformationWeak");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformationIterator *op = static_cast<vtkInformationIterator *>(vp);

  vtkInformation *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformation"))
    {
    if (ap.IsBound())
      {
      op->SetInformationWeak(temp0);
      }
    else
      {
      op->vtkInformationIterator::SetInformationWeak(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInformationIterator_InitTraversal(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InitTraversal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformationIterator *op = static_cast<vtkInformationIterator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->InitTraversal();
      }
    else
      {
      op->vtkInformationIterator::InitTraversal();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInformationIterator_GoToFirstItem(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GoToFirstItem");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformationIterator *op = static_cast<vtkInformationIterator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->GoToFirstItem();
      }
    else
      {
      op->vtkInformationIterator::GoToFirstItem();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInformationIterator_GoToNextItem(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GoToNextItem");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformationIterator *op = static_cast<vtkInformationIterator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->GoToNextItem();
      }
    else
      {
      op->vtkInformationIterator::GoToNextItem();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInformationIterator_IsDoneWithTraversal(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsDoneWithTraversal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformationIterator *op = static_cast<vtkInformationIterator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->IsDoneWithTraversal() :
      op->vtkInformationIterator::IsDoneWithTraversal());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkInformationIterator_GetCurrentKey(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCurrentKey");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformationIterator *op = static_cast<vtkInformationIterator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkInformationKey *tempr = (ap.IsBound() ?
      op->GetCurrentKey() :
      op->vtkInformationIterator::GetCurrentKey());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkInformationIterator_Methods[] = {
  {(char*)"GetClassName", PyvtkInformationIterator_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkInformationIterator_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkInformationIterator_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkInformationIterator\nC++: vtkInformationIterator *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkInformationIterator_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkInformationIterator\nC++: vtkInformationIterator *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetInformation", PyvtkInformationIterator_SetInformation, METH_VARARGS,
   (char*)"V.SetInformation(vtkInformation)\nC++: void SetInformation(vtkInformation *)\n\nSet/Get the information to iterator over.\n"},
  {(char*)"GetInformation", PyvtkInformationIterator_GetInformation, METH_VARARGS,
   (char*)"V.GetInformation() -> vtkInformation\nC++: vtkInformation *GetInformation()\n\nSet/Get the information to iterator over.\n"},
  {(char*)"SetInformationWeak", PyvtkInformationIterator_SetInformationWeak, METH_VARARGS,
   (char*)"V.SetInformationWeak(vtkInformation)\nC++: void SetInformationWeak(vtkInformation *)\n\nSet the function to iterate over. The iterator will not hold a\nreference to the information object. Can be used to optimize\ncertain places by avoiding garbage collection.\n"},
  {(char*)"InitTraversal", PyvtkInformationIterator_InitTraversal, METH_VARARGS,
   (char*)"V.InitTraversal()\nC++: void InitTraversal()\n\nMove the iterator to the beginning of the collection.\n"},
  {(char*)"GoToFirstItem", PyvtkInformationIterator_GoToFirstItem, METH_VARARGS,
   (char*)"V.GoToFirstItem()\nC++: virtual void GoToFirstItem()\n\nMove the iterator to the beginning of the collection.\n"},
  {(char*)"GoToNextItem", PyvtkInformationIterator_GoToNextItem, METH_VARARGS,
   (char*)"V.GoToNextItem()\nC++: virtual void GoToNextItem()\n\nMove the iterator to the next item in the collection.\n"},
  {(char*)"IsDoneWithTraversal", PyvtkInformationIterator_IsDoneWithTraversal, METH_VARARGS,
   (char*)"V.IsDoneWithTraversal() -> int\nC++: virtual int IsDoneWithTraversal()\n\nTest whether the iterator is currently pointing to a valid item.\nReturns 1 for yes, 0 for no.\n"},
  {(char*)"GetCurrentKey", PyvtkInformationIterator_GetCurrentKey, METH_VARARGS,
   (char*)"V.GetCurrentKey() -> vtkInformationKey\nC++: virtual vtkInformationKey *GetCurrentKey()\n\nGet the current item. Valid only when IsDoneWithTraversal()\nreturns 1.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkInformationIterator_StaticNew()
{
  return vtkInformationIterator::New();
}

PyObject *PyVTKClass_vtkInformationIteratorNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkInformationIterator_StaticNew,
    PyvtkInformationIterator_Methods,
    "vtkInformationIterator", modulename,
    NULL, NULL,
    PyvtkInformationIterator_Doc(),
    PyVTKClass_vtkObjectNew(modulename));
  return cls;
}

const char **PyvtkInformationIterator_Doc()
{
  static const char *docstring[] = {
    "vtkInformationIterator - Iterates over keys of an information object\n\n",
    "Superclass: vtkObject\n\n",
    "vtkInformationIterator can be used to iterate over the keys of an\ninformation object. The corresponding values can then be directly\nobtained from the information object using the keys.\n\nSee Also:\n\nvtkInformation vtkInformationKey\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkInformationIterator(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkInformationIteratorNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkInformationIterator", o) != 0)
    {
    Py_DECREF(o);
    }

}

