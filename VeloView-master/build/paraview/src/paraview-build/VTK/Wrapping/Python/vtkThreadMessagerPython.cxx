// python wrapper for vtkThreadMessager
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkThreadMessager.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkThreadMessager(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkThreadMessagerNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkThreadMessager_Doc();


static PyObject *
PyvtkThreadMessager_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThreadMessager *op = static_cast<vtkThreadMessager *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkThreadMessager::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkThreadMessager_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThreadMessager *op = static_cast<vtkThreadMessager *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkThreadMessager::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkThreadMessager_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThreadMessager *op = static_cast<vtkThreadMessager *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkThreadMessager *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkThreadMessager::NewInstance());

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
PyvtkThreadMessager_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkThreadMessager *tempr = vtkThreadMessager::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkThreadMessager_WaitForMessage(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WaitForMessage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThreadMessager *op = static_cast<vtkThreadMessager *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->WaitForMessage();
      }
    else
      {
      op->vtkThreadMessager::WaitForMessage();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkThreadMessager_SendWakeMessage(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SendWakeMessage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThreadMessager *op = static_cast<vtkThreadMessager *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SendWakeMessage();
      }
    else
      {
      op->vtkThreadMessager::SendWakeMessage();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkThreadMessager_EnableWaitForReceiver(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EnableWaitForReceiver");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThreadMessager *op = static_cast<vtkThreadMessager *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->EnableWaitForReceiver();
      }
    else
      {
      op->vtkThreadMessager::EnableWaitForReceiver();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkThreadMessager_DisableWaitForReceiver(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DisableWaitForReceiver");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThreadMessager *op = static_cast<vtkThreadMessager *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->DisableWaitForReceiver();
      }
    else
      {
      op->vtkThreadMessager::DisableWaitForReceiver();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkThreadMessager_WaitForReceiver(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WaitForReceiver");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThreadMessager *op = static_cast<vtkThreadMessager *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->WaitForReceiver();
      }
    else
      {
      op->vtkThreadMessager::WaitForReceiver();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkThreadMessager_Methods[] = {
  {(char*)"GetClassName", PyvtkThreadMessager_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkThreadMessager_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkThreadMessager_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkThreadMessager\nC++: vtkThreadMessager *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkThreadMessager_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkThreadMessager\nC++: vtkThreadMessager *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"WaitForMessage", PyvtkThreadMessager_WaitForMessage, METH_VARARGS,
   (char*)"V.WaitForMessage()\nC++: void WaitForMessage()\n\nWait (block, non-busy) until another thread sends a message.\n"},
  {(char*)"SendWakeMessage", PyvtkThreadMessager_SendWakeMessage, METH_VARARGS,
   (char*)"V.SendWakeMessage()\nC++: void SendWakeMessage()\n\nSend a message to all threads who are waiting via\nWaitForMessage().\n"},
  {(char*)"EnableWaitForReceiver", PyvtkThreadMessager_EnableWaitForReceiver, METH_VARARGS,
   (char*)"V.EnableWaitForReceiver()\nC++: void EnableWaitForReceiver()\n\npthreads only. If the wait is enabled, the thread who is to call\nWaitForMessage() will block until a receiver thread is ready to\nreceive.\n"},
  {(char*)"DisableWaitForReceiver", PyvtkThreadMessager_DisableWaitForReceiver, METH_VARARGS,
   (char*)"V.DisableWaitForReceiver()\nC++: void DisableWaitForReceiver()\n\npthreads only. If the wait is enabled, the thread who is to call\nWaitForMessage() will block until a receiver thread is ready to\nreceive.\n"},
  {(char*)"WaitForReceiver", PyvtkThreadMessager_WaitForReceiver, METH_VARARGS,
   (char*)"V.WaitForReceiver()\nC++: void WaitForReceiver()\n\npthreads only. If wait is enable, this will block until one\nthread is ready to receive a message.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkThreadMessager_StaticNew()
{
  return vtkThreadMessager::New();
}

PyObject *PyVTKClass_vtkThreadMessagerNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkThreadMessager_StaticNew,
    PyvtkThreadMessager_Methods,
    "vtkThreadMessager", modulename,
    NULL, NULL,
    PyvtkThreadMessager_Doc(),
    PyVTKClass_vtkObjectNew(modulename));
  return cls;
}

const char **PyvtkThreadMessager_Doc()
{
  static const char *docstring[] = {
    "vtkThreadMessager - A class for performing inter-thread messaging\n\n",
    "Superclass: vtkObject\n\n",
    "vtkMultithreader is a class that provides support for messaging\nbetween threads multithreaded using pthreads or Windows messaging.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkThreadMessager(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkThreadMessagerNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkThreadMessager", o) != 0)
    {
    Py_DECREF(o);
    }

}

