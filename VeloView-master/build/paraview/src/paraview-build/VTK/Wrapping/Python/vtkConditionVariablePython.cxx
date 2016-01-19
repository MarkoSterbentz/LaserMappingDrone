// python wrapper for vtkConditionVariable
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkMutexLock.h"
#include "vtkIndent.h"
#include "vtkConditionVariable.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkConditionVariable(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkConditionVariableNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkConditionVariable_Doc();


static PyObject *
PyvtkConditionVariable_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConditionVariable *op = static_cast<vtkConditionVariable *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkConditionVariable::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkConditionVariable_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConditionVariable *op = static_cast<vtkConditionVariable *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkConditionVariable::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkConditionVariable_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConditionVariable *op = static_cast<vtkConditionVariable *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkConditionVariable *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkConditionVariable::NewInstance());

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
PyvtkConditionVariable_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkConditionVariable *tempr = vtkConditionVariable::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkConditionVariable_Signal(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Signal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConditionVariable *op = static_cast<vtkConditionVariable *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Signal();
      }
    else
      {
      op->vtkConditionVariable::Signal();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkConditionVariable_Broadcast(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Broadcast");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConditionVariable *op = static_cast<vtkConditionVariable *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Broadcast();
      }
    else
      {
      op->vtkConditionVariable::Broadcast();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkConditionVariable_Wait(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Wait");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConditionVariable *op = static_cast<vtkConditionVariable *>(vp);

  vtkMutexLock *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMutexLock"))
    {
    int tempr = (ap.IsBound() ?
      op->Wait(temp0) :
      op->vtkConditionVariable::Wait(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkConditionVariable_Methods[] = {
  {(char*)"GetClassName", PyvtkConditionVariable_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkConditionVariable_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkConditionVariable_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkConditionVariable\nC++: vtkConditionVariable *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkConditionVariable_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkConditionVariable\nC++: vtkConditionVariable *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"Signal", PyvtkConditionVariable_Signal, METH_VARARGS,
   (char*)"V.Signal()\nC++: void Signal()\n\nWake one thread waiting for the condition to change.\n"},
  {(char*)"Broadcast", PyvtkConditionVariable_Broadcast, METH_VARARGS,
   (char*)"V.Broadcast()\nC++: void Broadcast()\n\nWake all threads waiting for the condition to change.\n"},
  {(char*)"Wait", PyvtkConditionVariable_Wait, METH_VARARGS,
   (char*)"V.Wait(vtkMutexLock) -> int\nC++: int Wait(vtkMutexLock *mutex)\n\nWait for the condition to change. Upon entry, the mutex must be\nlocked and the lock held by the calling thread. Upon exit, the\nmutex will be locked and held by the calling thread. Between\nentry and exit, the mutex will be unlocked and may be held by\nother threads.\n\n@param mutex The mutex that should be locked on entry and will be\nlocked on exit (but not in between)@retval Normally, this\n    function returns 0. Should a thread be interrupted by a\n    signal, a non-zero value may be returned.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkConditionVariable_StaticNew()
{
  return vtkConditionVariable::New();
}

PyObject *PyVTKClass_vtkConditionVariableNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkConditionVariable_StaticNew,
    PyvtkConditionVariable_Methods,
    "vtkConditionVariable", modulename,
    NULL, NULL,
    PyvtkConditionVariable_Doc(),
    PyVTKClass_vtkObjectNew(modulename));
  return cls;
}

const char **PyvtkConditionVariable_Doc()
{
  static const char *docstring[] = {
    "vtkConditionVariable - mutual exclusion locking class\n\n",
    "Superclass: vtkObject\n\n",
    "vtkConditionVariable allows the locking of variables which are\naccessed through different threads.  This header file also defines\nvtkSimpleConditionVariable which is not a subclass of vtkObject.\n\nThe win32 implementation is based on notes provided by Douglas C.\nSchmidt and Irfan Pyarali, Department of Computer Science, Washington\nUniversity, St. Louis, Missouri.\nhttp://www.cs.wustl.edu/~schmidt/wi",
    "n32-cv-1.html\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkConditionVariable(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkConditionVariableNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkConditionVariable", o) != 0)
    {
    Py_DECREF(o);
    }

}

