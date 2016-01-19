// python wrapper for vtkSessionIterator
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkSessionIterator.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkSessionIterator(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkSessionIteratorNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkSessionIterator_Doc();


static PyObject *
PyvtkSessionIterator_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSessionIterator *op = static_cast<vtkSessionIterator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkSessionIterator::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSessionIterator_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSessionIterator *op = static_cast<vtkSessionIterator *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSessionIterator::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSessionIterator_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSessionIterator *op = static_cast<vtkSessionIterator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkSessionIterator *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSessionIterator::NewInstance());

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
PyvtkSessionIterator_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkSessionIterator *tempr = vtkSessionIterator::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSessionIterator_InitTraversal(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InitTraversal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSessionIterator *op = static_cast<vtkSessionIterator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->InitTraversal();
      }
    else
      {
      op->vtkSessionIterator::InitTraversal();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSessionIterator_GoToNextItem(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GoToNextItem");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSessionIterator *op = static_cast<vtkSessionIterator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->GoToNextItem();
      }
    else
      {
      op->vtkSessionIterator::GoToNextItem();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSessionIterator_IsDoneWithTraversal(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsDoneWithTraversal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSessionIterator *op = static_cast<vtkSessionIterator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->IsDoneWithTraversal() :
      op->vtkSessionIterator::IsDoneWithTraversal());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSessionIterator_GetCurrentSession(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCurrentSession");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSessionIterator *op = static_cast<vtkSessionIterator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkSession *tempr = (ap.IsBound() ?
      op->GetCurrentSession() :
      op->vtkSessionIterator::GetCurrentSession());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSessionIterator_GetCurrentSessionId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCurrentSessionId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSessionIterator *op = static_cast<vtkSessionIterator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetCurrentSessionId() :
      op->vtkSessionIterator::GetCurrentSessionId());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkSessionIterator_Methods[] = {
  {(char*)"GetClassName", PyvtkSessionIterator_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkSessionIterator_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkSessionIterator_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkSessionIterator\nC++: vtkSessionIterator *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkSessionIterator_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkSessionIterator\nC++: vtkSessionIterator *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"InitTraversal", PyvtkSessionIterator_InitTraversal, METH_VARARGS,
   (char*)"V.InitTraversal()\nC++: virtual void InitTraversal()\n\nBegin iterating over the composite dataset structure.\n"},
  {(char*)"GoToNextItem", PyvtkSessionIterator_GoToNextItem, METH_VARARGS,
   (char*)"V.GoToNextItem()\nC++: virtual void GoToNextItem()\n\nMove the iterator to the next item in the collection.\n"},
  {(char*)"IsDoneWithTraversal", PyvtkSessionIterator_IsDoneWithTraversal, METH_VARARGS,
   (char*)"V.IsDoneWithTraversal() -> bool\nC++: virtual bool IsDoneWithTraversal()\n\nTest whether the iterator is finished with the traversal. Returns\n1 for yes, and 0 for no. It is safe to call any of the\nGetCurrent...() methods only when IsDoneWithTraversal() returns\n0.\n"},
  {(char*)"GetCurrentSession", PyvtkSessionIterator_GetCurrentSession, METH_VARARGS,
   (char*)"V.GetCurrentSession() -> vtkSession\nC++: vtkSession *GetCurrentSession()\n\nReturns the current session.\n"},
  {(char*)"GetCurrentSessionId", PyvtkSessionIterator_GetCurrentSessionId, METH_VARARGS,
   (char*)"V.GetCurrentSessionId() -> int\nC++: vtkIdType GetCurrentSessionId()\n\nReturns the current session id.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkSessionIterator_StaticNew()
{
  return vtkSessionIterator::New();
}

PyObject *PyVTKClass_vtkSessionIteratorNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkSessionIterator_StaticNew,
    PyvtkSessionIterator_Methods,
    "vtkSessionIterator", modulename,
    NULL, NULL,
    PyvtkSessionIterator_Doc(),
    PyVTKClass_vtkObjectNew(modulename));
  return cls;
}

const char **PyvtkSessionIterator_Doc()
{
  static const char *docstring[] = {
    "vtkSessionIterator\n\n",
    "Superclass: vtkObject\n\n",
    "vtkSessionIterator is used to iterate over sessions in the global\nProcessModule.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkSessionIterator(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkSessionIteratorNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkSessionIterator", o) != 0)
    {
    Py_DECREF(o);
    }

}

