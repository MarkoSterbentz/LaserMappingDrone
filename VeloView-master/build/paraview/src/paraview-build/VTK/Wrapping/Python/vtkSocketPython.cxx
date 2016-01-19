// python wrapper for vtkSocket
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkSocket.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkSocket(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkSocketNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkSocket_Doc();


static PyObject *
PyvtkSocket_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSocket *op = static_cast<vtkSocket *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkSocket::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSocket_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSocket *op = static_cast<vtkSocket *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSocket::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSocket_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSocket *op = static_cast<vtkSocket *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkSocket *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSocket::NewInstance());

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
PyvtkSocket_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkSocket *tempr = vtkSocket::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSocket_GetConnected(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetConnected");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSocket *op = static_cast<vtkSocket *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetConnected() :
      op->vtkSocket::GetConnected());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSocket_CloseSocket(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CloseSocket");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSocket *op = static_cast<vtkSocket *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->CloseSocket();
      }
    else
      {
      op->vtkSocket::CloseSocket();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSocket_Send(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Send");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSocket *op = static_cast<vtkSocket *>(vp);

  void  *temp0 = NULL;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    int tempr = (ap.IsBound() ?
      op->Send(temp0, temp1) :
      op->vtkSocket::Send(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSocket_Receive(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Receive");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSocket *op = static_cast<vtkSocket *>(vp);

  void  *temp0 = NULL;
  int temp1;
  int temp2 = 1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2, 3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)))
    {
    int tempr = (ap.IsBound() ?
      op->Receive(temp0, temp1, temp2) :
      op->vtkSocket::Receive(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSocket_GetSocketDescriptor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSocketDescriptor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSocket *op = static_cast<vtkSocket *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetSocketDescriptor() :
      op->vtkSocket::GetSocketDescriptor());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSocket_SelectSockets(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SelectSockets");

  int *temp0 = NULL;
  int small0[4];
  int size0 = 0;
  int temp1;
  unsigned long temp2;
  int *temp3 = NULL;
  int *save3 = NULL;
  int small3[8];
  int size3 = 0;
  PyObject *result = NULL;

  size0 = ap.GetArgSize(0);
  temp0 = small0;
  if (size0 > 4)
    {
    temp0 = new int[size0];
    }
  size3 = ap.GetArgSize(3);
  temp3 = small3;
  if (size3 > 4)
    {
    temp3 = new int[2*size3];
    }
  save3 = &temp3[size3];

  if (ap.CheckArgCount(4) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetArray(temp3, size3))
    {
    ap.SaveArray(temp3, save3, size3);

    int tempr = vtkSocket::SelectSockets(temp0, temp1, temp2, temp3);

    if (ap.ArrayHasChanged(temp3, save3, size3) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(3, temp3, size3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  if (temp0 && temp0 != small0)
    {
    delete [] temp0;
    }
  if (temp3 && temp3 != small3)
    {
    delete [] temp3;
    }

  return result;
}

static PyMethodDef PyvtkSocket_Methods[] = {
  {(char*)"GetClassName", PyvtkSocket_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkSocket_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkSocket_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkSocket\nC++: vtkSocket *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkSocket_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkSocket\nC++: vtkSocket *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetConnected", PyvtkSocket_GetConnected, METH_VARARGS,
   (char*)"V.GetConnected() -> int\nC++: int GetConnected()\n\nCheck is the socket is alive.\n"},
  {(char*)"CloseSocket", PyvtkSocket_CloseSocket, METH_VARARGS,
   (char*)"V.CloseSocket()\nC++: void CloseSocket()\n\nClose the socket.\n"},
  {(char*)"Send", PyvtkSocket_Send, METH_VARARGS,
   (char*)"V.Send(, int) -> int\nC++: int Send(const void *data, int length)\n\nThese methods send data over the socket. Returns 1 on success, 0\non error and raises vtkCommand::ErrorEvent.\n"},
  {(char*)"Receive", PyvtkSocket_Receive, METH_VARARGS,
   (char*)"V.Receive(, int, int) -> int\nC++: int Receive(void *data, int length, int readFully=1)\n\nReceive data from the socket. This call blocks until some data is\nread from the socket. When readFully is set, this call will block\nuntil all the requested data is read from the socket. 0 on error,\nelse number of bytes read is returned. On error,\nvtkCommand::ErrorEvent is raised.\n"},
  {(char*)"GetSocketDescriptor", PyvtkSocket_GetSocketDescriptor, METH_VARARGS,
   (char*)"V.GetSocketDescriptor() -> int\nC++: int GetSocketDescriptor()\n\nProvides access to  the internal socket descriptor. This is valid\nonly when GetConnected() returns true.\n"},
  {(char*)"SelectSockets", PyvtkSocket_SelectSockets, METH_VARARGS | METH_STATIC,
   (char*)"V.SelectSockets((int, ...), int, int, [int, ...]) -> int\nC++: static int SelectSockets(const int *sockets_to_select,\n    int size, unsigned long msec, int *selected_index)\n\nSelects set of sockets. Returns 0 on timeout, -1 on error. 1 on\nsuccess. Selected socket's index is returned thru selected_index\n"},
  {NULL, NULL, 0, NULL}
};

PyObject *PyVTKClass_vtkSocketNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(NULL,
    PyvtkSocket_Methods,
    "vtkSocket", modulename,
    NULL, NULL,
    PyvtkSocket_Doc(),
    PyVTKClass_vtkObjectNew(modulename));
  return cls;
}

const char **PyvtkSocket_Doc()
{
  static const char *docstring[] = {
    "vtkSocket - BSD socket encapsulation.\n\n",
    "Superclass: vtkObject\n\n",
    "This abstract class encapsulates a BSD socket. It provides an API for\nbasic socket operations.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkSocket(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkSocketNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkSocket", o) != 0)
    {
    Py_DECREF(o);
    }

}

