// python wrapper for vtkMPIMToNSocketConnection
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkMPIMToNSocketConnection.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkMPIMToNSocketConnection(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkMPIMToNSocketConnectionNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkMPIMToNSocketConnection_Doc();


static PyObject *
PyvtkMPIMToNSocketConnection_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPIMToNSocketConnection *op = static_cast<vtkMPIMToNSocketConnection *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkMPIMToNSocketConnection::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMPIMToNSocketConnection_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPIMToNSocketConnection *op = static_cast<vtkMPIMToNSocketConnection *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkMPIMToNSocketConnection::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMPIMToNSocketConnection_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPIMToNSocketConnection *op = static_cast<vtkMPIMToNSocketConnection *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkMPIMToNSocketConnection *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkMPIMToNSocketConnection::NewInstance());

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
PyvtkMPIMToNSocketConnection_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkMPIMToNSocketConnection *tempr = vtkMPIMToNSocketConnection::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMPIMToNSocketConnection_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPIMToNSocketConnection *op = static_cast<vtkMPIMToNSocketConnection *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->Initialize(temp0);
      }
    else
      {
      op->vtkMPIMToNSocketConnection::Initialize(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMPIMToNSocketConnection_ConnectMtoN(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ConnectMtoN");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPIMToNSocketConnection *op = static_cast<vtkMPIMToNSocketConnection *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ConnectMtoN();
      }
    else
      {
      op->vtkMPIMToNSocketConnection::ConnectMtoN();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMPIMToNSocketConnection_SetNumberOfConnections(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfConnections");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPIMToNSocketConnection *op = static_cast<vtkMPIMToNSocketConnection *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetNumberOfConnections(temp0);
      }
    else
      {
      op->vtkMPIMToNSocketConnection::SetNumberOfConnections(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMPIMToNSocketConnection_GetNumberOfConnections(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfConnections");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPIMToNSocketConnection *op = static_cast<vtkMPIMToNSocketConnection *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfConnections() :
      op->vtkMPIMToNSocketConnection::GetNumberOfConnections());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMPIMToNSocketConnection_SetPortInformation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPortInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPIMToNSocketConnection *op = static_cast<vtkMPIMToNSocketConnection *>(vp);

  unsigned int temp0;
  int temp1;
  char *temp2 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      op->SetPortInformation(temp0, temp1, temp2);
      }
    else
      {
      op->vtkMPIMToNSocketConnection::SetPortInformation(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMPIMToNSocketConnection_GetSocketCommunicator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSocketCommunicator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPIMToNSocketConnection *op = static_cast<vtkMPIMToNSocketConnection *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkSocketCommunicator *tempr = (ap.IsBound() ?
      op->GetSocketCommunicator() :
      op->vtkMPIMToNSocketConnection::GetSocketCommunicator());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMPIMToNSocketConnection_GetPortInformation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPortInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPIMToNSocketConnection *op = static_cast<vtkMPIMToNSocketConnection *>(vp);

  vtkMPIMToNSocketConnectionPortInformation *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMPIMToNSocketConnectionPortInformation"))
    {
    if (ap.IsBound())
      {
      op->GetPortInformation(temp0);
      }
    else
      {
      op->vtkMPIMToNSocketConnection::GetPortInformation(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMPIMToNSocketConnection_GetPortNumber(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPortNumber");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPIMToNSocketConnection *op = static_cast<vtkMPIMToNSocketConnection *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetPortNumber() :
      op->vtkMPIMToNSocketConnection::GetPortNumber());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkMPIMToNSocketConnection_Methods[] = {
  {(char*)"GetClassName", PyvtkMPIMToNSocketConnection_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkMPIMToNSocketConnection_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkMPIMToNSocketConnection_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkMPIMToNSocketConnection\nC++: vtkMPIMToNSocketConnection *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkMPIMToNSocketConnection_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkMPIMToNSocketConnection\nC++: vtkMPIMToNSocketConnection *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"Initialize", PyvtkMPIMToNSocketConnection_Initialize, METH_VARARGS,
   (char*)"V.Initialize(int)\nC++: void Initialize(int waiting_process_type)\n\n\n"},
  {(char*)"ConnectMtoN", PyvtkMPIMToNSocketConnection_ConnectMtoN, METH_VARARGS,
   (char*)"V.ConnectMtoN()\nC++: void ConnectMtoN()\n\nSetup  the connection.\n"},
  {(char*)"SetNumberOfConnections", PyvtkMPIMToNSocketConnection_SetNumberOfConnections, METH_VARARGS,
   (char*)"V.SetNumberOfConnections(int)\nC++: void SetNumberOfConnections(int)\n\nSet the number of connections to be made.\n"},
  {(char*)"GetNumberOfConnections", PyvtkMPIMToNSocketConnection_GetNumberOfConnections, METH_VARARGS,
   (char*)"V.GetNumberOfConnections() -> int\nC++: int GetNumberOfConnections()\n\nSet the number of connections to be made.\n"},
  {(char*)"SetPortInformation", PyvtkMPIMToNSocketConnection_SetPortInformation, METH_VARARGS,
   (char*)"V.SetPortInformation(int, int, string)\nC++: void SetPortInformation(unsigned int processNumber,\n    int portNumber, const char *hostName)\n\nSet up information about the remote connection.\n"},
  {(char*)"GetSocketCommunicator", PyvtkMPIMToNSocketConnection_GetSocketCommunicator, METH_VARARGS,
   (char*)"V.GetSocketCommunicator() -> vtkSocketCommunicator\nC++: vtkSocketCommunicator *GetSocketCommunicator()\n\nReturn the socket communicator for this process.\n"},
  {(char*)"GetPortInformation", PyvtkMPIMToNSocketConnection_GetPortInformation, METH_VARARGS,
   (char*)"V.GetPortInformation(vtkMPIMToNSocketConnectionPortInformation)\nC++: void GetPortInformation(\n    vtkMPIMToNSocketConnectionPortInformation *)\n\nFill the port information values into the port information\nobject.\n"},
  {(char*)"GetPortNumber", PyvtkMPIMToNSocketConnection_GetPortNumber, METH_VARARGS,
   (char*)"V.GetPortNumber() -> int\nC++: int GetPortNumber()\n\nSet port to use, if the value is 0, then the system will pick the\nport.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkMPIMToNSocketConnection_StaticNew()
{
  return vtkMPIMToNSocketConnection::New();
}

PyObject *PyVTKClass_vtkMPIMToNSocketConnectionNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkMPIMToNSocketConnection_StaticNew,
    PyvtkMPIMToNSocketConnection_Methods,
    "vtkMPIMToNSocketConnection", modulename,
    NULL, NULL,
    PyvtkMPIMToNSocketConnection_Doc(),
    PyVTKClass_vtkObjectNew(modulename));
  return cls;
}

const char **PyvtkMPIMToNSocketConnection_Doc()
{
  static const char *docstring[] = {
    "vtkMPIMToNSocketConnection - class to create socket connections\nbetween two servers \n\n",
    "Superclass: vtkObject\n\n",
    "class used to create socket connections between the render and data\nservers.  This used for example when data is on a super computer\n(SGI, IBM, etc) and Rendering on a Linux cluster with hardware\ngraphics support. This problem is known as the \"M\" to \"N\" geometry\nload redistribution problem.  It addresses the common case where\nthere is a significante mismatch in the size of large parallel\ncomputing",
    " resources and the often smaller parallel\nhardward-accelerated rendering resources. The larger number of\nprocessors on the compute servers are called M, and the smaller\nnumber of rendering processors are call N.  This class is used to\ncreate N vtkSocketCommunicator's that connect the first N of the M\nprocesses on the data server to the N processes on the render server.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkMPIMToNSocketConnection(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkMPIMToNSocketConnectionNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkMPIMToNSocketConnection", o) != 0)
    {
    Py_DECREF(o);
    }

}

