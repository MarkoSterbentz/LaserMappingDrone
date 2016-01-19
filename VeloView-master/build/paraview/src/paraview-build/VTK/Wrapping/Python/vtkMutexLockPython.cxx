// python wrapper for vtkMutexLock
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkMutexLock.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkMutexLock(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkMutexLockNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkMutexLock_Doc();


static PyObject *
PyvtkMutexLock_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMutexLock *op = static_cast<vtkMutexLock *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkMutexLock::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMutexLock_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMutexLock *op = static_cast<vtkMutexLock *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkMutexLock::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMutexLock_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMutexLock *op = static_cast<vtkMutexLock *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkMutexLock *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkMutexLock::NewInstance());

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
PyvtkMutexLock_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkMutexLock *tempr = vtkMutexLock::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMutexLock_Lock(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Lock");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMutexLock *op = static_cast<vtkMutexLock *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Lock();
      }
    else
      {
      op->vtkMutexLock::Lock();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMutexLock_Unlock(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Unlock");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMutexLock *op = static_cast<vtkMutexLock *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Unlock();
      }
    else
      {
      op->vtkMutexLock::Unlock();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkMutexLock_Methods[] = {
  {(char*)"GetClassName", PyvtkMutexLock_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkMutexLock_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkMutexLock_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkMutexLock\nC++: vtkMutexLock *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkMutexLock_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkMutexLock\nC++: vtkMutexLock *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"Lock", PyvtkMutexLock_Lock, METH_VARARGS,
   (char*)"V.Lock()\nC++: void Lock(void)\n\nLock the vtkMutexLock\n"},
  {(char*)"Unlock", PyvtkMutexLock_Unlock, METH_VARARGS,
   (char*)"V.Unlock()\nC++: void Unlock(void)\n\nUnlock the vtkMutexLock\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkMutexLock_StaticNew()
{
  return vtkMutexLock::New();
}

PyObject *PyVTKClass_vtkMutexLockNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkMutexLock_StaticNew,
    PyvtkMutexLock_Methods,
    "vtkMutexLock", modulename,
    NULL, NULL,
    PyvtkMutexLock_Doc(),
    PyVTKClass_vtkObjectNew(modulename));
  return cls;
}

const char **PyvtkMutexLock_Doc()
{
  static const char *docstring[] = {
    "vtkMutexLock - mutual exclusion locking class\n\n",
    "Superclass: vtkObject\n\n",
    "vtkMutexLock allows the locking of variables which are accessed\nthrough different threads.  This header file also defines\nvtkSimpleMutexLock which is not a subclass of vtkObject.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkMutexLock(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkMutexLockNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkMutexLock", o) != 0)
    {
    Py_DECREF(o);
    }

}

