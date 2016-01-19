// python wrapper for vtkServerSocket
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkServerSocket.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkServerSocket(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkServerSocketNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkSocketNew
extern "C" { PyObject *PyVTKClass_vtkSocketNew(const char *); }
#define DECLARED_PyVTKClass_vtkSocketNew
#endif

static const char **PyvtkServerSocket_Doc();


static PyObject *
PyvtkServerSocket_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkServerSocket *op = static_cast<vtkServerSocket *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkServerSocket::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkServerSocket_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkServerSocket *op = static_cast<vtkServerSocket *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkServerSocket::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkServerSocket_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkServerSocket *op = static_cast<vtkServerSocket *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkServerSocket *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkServerSocket::NewInstance());

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
PyvtkServerSocket_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkServerSocket *tempr = vtkServerSocket::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkServerSocket_CreateServer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateServer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkServerSocket *op = static_cast<vtkServerSocket *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->CreateServer(temp0) :
      op->vtkServerSocket::CreateServer(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkServerSocket_WaitForConnection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WaitForConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkServerSocket *op = static_cast<vtkServerSocket *>(vp);

  unsigned long temp0 = 0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0, 1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp0)))
    {
    vtkClientSocket *tempr = (ap.IsBound() ?
      op->WaitForConnection(temp0) :
      op->vtkServerSocket::WaitForConnection(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkServerSocket_GetServerPort(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetServerPort");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkServerSocket *op = static_cast<vtkServerSocket *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetServerPort() :
      op->vtkServerSocket::GetServerPort());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkServerSocket_Methods[] = {
  {(char*)"GetClassName", PyvtkServerSocket_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkServerSocket_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkServerSocket_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkServerSocket\nC++: vtkServerSocket *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkServerSocket_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkServerSocket\nC++: vtkServerSocket *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"CreateServer", PyvtkServerSocket_CreateServer, METH_VARARGS,
   (char*)"V.CreateServer(int) -> int\nC++: int CreateServer(int port)\n\nCreates a server socket at a given port and binds to it. Returns\n-1 on error. 0 on success.\n"},
  {(char*)"WaitForConnection", PyvtkServerSocket_WaitForConnection, METH_VARARGS,
   (char*)"V.WaitForConnection(int) -> vtkClientSocket\nC++: vtkClientSocket *WaitForConnection(unsigned long msec=0)\n\nWaits for a connection. When a connection is received a new\nvtkClientSocket object is created and returned. Returns NULL on\ntimeout.\n"},
  {(char*)"GetServerPort", PyvtkServerSocket_GetServerPort, METH_VARARGS,
   (char*)"V.GetServerPort() -> int\nC++: int GetServerPort()\n\nReturns the port on which the server is running.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkServerSocket_StaticNew()
{
  return vtkServerSocket::New();
}

PyObject *PyVTKClass_vtkServerSocketNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkServerSocket_StaticNew,
    PyvtkServerSocket_Methods,
    "vtkServerSocket", modulename,
    NULL, NULL,
    PyvtkServerSocket_Doc(),
    PyVTKClass_vtkSocketNew(modulename));
  return cls;
}

const char **PyvtkServerSocket_Doc()
{
  static const char *docstring[] = {
    "vtkServerSocket - Encapsulate a socket that accepts connections.\n\n",
    "Superclass: vtkSocket\n\n",
    "\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkServerSocket(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkServerSocketNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkServerSocket", o) != 0)
    {
    Py_DECREF(o);
    }

}

