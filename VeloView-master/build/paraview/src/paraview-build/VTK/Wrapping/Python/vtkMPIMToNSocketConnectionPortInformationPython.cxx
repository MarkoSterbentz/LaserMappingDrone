// python wrapper for vtkMPIMToNSocketConnectionPortInformation
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkMPIMToNSocketConnectionPortInformation.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkMPIMToNSocketConnectionPortInformation(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkMPIMToNSocketConnectionPortInformationNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkPVInformationNew
extern "C" { PyObject *PyVTKClass_vtkPVInformationNew(const char *); }
#define DECLARED_PyVTKClass_vtkPVInformationNew
#endif

static const char **PyvtkMPIMToNSocketConnectionPortInformation_Doc();


static PyObject *
PyvtkMPIMToNSocketConnectionPortInformation_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPIMToNSocketConnectionPortInformation *op = static_cast<vtkMPIMToNSocketConnectionPortInformation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkMPIMToNSocketConnectionPortInformation::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMPIMToNSocketConnectionPortInformation_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPIMToNSocketConnectionPortInformation *op = static_cast<vtkMPIMToNSocketConnectionPortInformation *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkMPIMToNSocketConnectionPortInformation::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMPIMToNSocketConnectionPortInformation_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPIMToNSocketConnectionPortInformation *op = static_cast<vtkMPIMToNSocketConnectionPortInformation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkMPIMToNSocketConnectionPortInformation *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkMPIMToNSocketConnectionPortInformation::NewInstance());

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
PyvtkMPIMToNSocketConnectionPortInformation_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkMPIMToNSocketConnectionPortInformation *tempr = vtkMPIMToNSocketConnectionPortInformation::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMPIMToNSocketConnectionPortInformation_SetConnectionInformation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetConnectionInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPIMToNSocketConnectionPortInformation *op = static_cast<vtkMPIMToNSocketConnectionPortInformation *>(vp);

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
      op->SetConnectionInformation(temp0, temp1, temp2);
      }
    else
      {
      op->vtkMPIMToNSocketConnectionPortInformation::SetConnectionInformation(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMPIMToNSocketConnectionPortInformation_GetNumberOfConnections(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfConnections");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPIMToNSocketConnectionPortInformation *op = static_cast<vtkMPIMToNSocketConnectionPortInformation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfConnections() :
      op->vtkMPIMToNSocketConnectionPortInformation::GetNumberOfConnections());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMPIMToNSocketConnectionPortInformation_GetProcessPort(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProcessPort");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPIMToNSocketConnectionPortInformation *op = static_cast<vtkMPIMToNSocketConnectionPortInformation *>(vp);

  unsigned int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->GetProcessPort(temp0) :
      op->vtkMPIMToNSocketConnectionPortInformation::GetProcessPort(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMPIMToNSocketConnectionPortInformation_GetProcessHostName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProcessHostName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPIMToNSocketConnectionPortInformation *op = static_cast<vtkMPIMToNSocketConnectionPortInformation *>(vp);

  unsigned int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetProcessHostName(temp0) :
      op->vtkMPIMToNSocketConnectionPortInformation::GetProcessHostName(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMPIMToNSocketConnectionPortInformation_CopyFromObject(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyFromObject");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPIMToNSocketConnectionPortInformation *op = static_cast<vtkMPIMToNSocketConnectionPortInformation *>(vp);

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    if (ap.IsBound())
      {
      op->CopyFromObject(temp0);
      }
    else
      {
      op->vtkMPIMToNSocketConnectionPortInformation::CopyFromObject(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMPIMToNSocketConnectionPortInformation_AddInformation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPIMToNSocketConnectionPortInformation *op = static_cast<vtkMPIMToNSocketConnectionPortInformation *>(vp);

  vtkPVInformation *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPVInformation"))
    {
    if (ap.IsBound())
      {
      op->AddInformation(temp0);
      }
    else
      {
      op->vtkMPIMToNSocketConnectionPortInformation::AddInformation(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMPIMToNSocketConnectionPortInformation_CopyToStream(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyToStream");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPIMToNSocketConnectionPortInformation *op = static_cast<vtkMPIMToNSocketConnectionPortInformation *>(vp);

  vtkClientServerStream *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkClientServerStream"))
    {
    if (ap.IsBound())
      {
      op->CopyToStream(temp0);
      }
    else
      {
      op->vtkMPIMToNSocketConnectionPortInformation::CopyToStream(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMPIMToNSocketConnectionPortInformation_CopyFromStream(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyFromStream");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPIMToNSocketConnectionPortInformation *op = static_cast<vtkMPIMToNSocketConnectionPortInformation *>(vp);

  vtkClientServerStream *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkClientServerStream"))
    {
    if (ap.IsBound())
      {
      op->CopyFromStream(temp0);
      }
    else
      {
      op->vtkMPIMToNSocketConnectionPortInformation::CopyFromStream(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkMPIMToNSocketConnectionPortInformation_Methods[] = {
  {(char*)"GetClassName", PyvtkMPIMToNSocketConnectionPortInformation_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkMPIMToNSocketConnectionPortInformation_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkMPIMToNSocketConnectionPortInformation_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkMPIMToNSocketConnectionPortInformation\nC++: vtkMPIMToNSocketConnectionPortInformation *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkMPIMToNSocketConnectionPortInformation_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject)\n    -> vtkMPIMToNSocketConnectionPortInformation\nC++: vtkMPIMToNSocketConnectionPortInformation *SafeDownCast(\n    vtkObject* o)\n\n"},
  {(char*)"SetConnectionInformation", PyvtkMPIMToNSocketConnectionPortInformation_SetConnectionInformation, METH_VARARGS,
   (char*)"V.SetConnectionInformation(int, int, string)\nC++: void SetConnectionInformation(unsigned int processNumber,\n    int portNumber, const char *hostname)\n\nSet the port and host information for a specific process number.\n"},
  {(char*)"GetNumberOfConnections", PyvtkMPIMToNSocketConnectionPortInformation_GetNumberOfConnections, METH_VARARGS,
   (char*)"V.GetNumberOfConnections() -> int\nC++: int GetNumberOfConnections()\n\nSet/Get the number of connections.\n"},
  {(char*)"GetProcessPort", PyvtkMPIMToNSocketConnectionPortInformation_GetProcessPort, METH_VARARGS,
   (char*)"V.GetProcessPort(int) -> int\nC++: int GetProcessPort(unsigned int processNumber)\n\nAccess information about a particular process.\n"},
  {(char*)"GetProcessHostName", PyvtkMPIMToNSocketConnectionPortInformation_GetProcessHostName, METH_VARARGS,
   (char*)"V.GetProcessHostName(int) -> string\nC++: const char *GetProcessHostName(unsigned int processNumber)\n\nAccess information about a particular process.\n"},
  {(char*)"CopyFromObject", PyvtkMPIMToNSocketConnectionPortInformation_CopyFromObject, METH_VARARGS,
   (char*)"V.CopyFromObject(vtkObject)\nC++: virtual void CopyFromObject(vtkObject *)\n\nTransfer information about a single object into this object.\n"},
  {(char*)"AddInformation", PyvtkMPIMToNSocketConnectionPortInformation_AddInformation, METH_VARARGS,
   (char*)"V.AddInformation(vtkPVInformation)\nC++: virtual void AddInformation(vtkPVInformation *)\n\nMerge another information object.\n"},
  {(char*)"CopyToStream", PyvtkMPIMToNSocketConnectionPortInformation_CopyToStream, METH_VARARGS,
   (char*)"V.CopyToStream(vtkClientServerStream)\nC++: virtual void CopyToStream(vtkClientServerStream *)\n\nManage a serialized version of the information.\n"},
  {(char*)"CopyFromStream", PyvtkMPIMToNSocketConnectionPortInformation_CopyFromStream, METH_VARARGS,
   (char*)"V.CopyFromStream(vtkClientServerStream)\nC++: virtual void CopyFromStream(const vtkClientServerStream *)\n\nManage a serialized version of the information.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkMPIMToNSocketConnectionPortInformation_StaticNew()
{
  return vtkMPIMToNSocketConnectionPortInformation::New();
}

PyObject *PyVTKClass_vtkMPIMToNSocketConnectionPortInformationNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkMPIMToNSocketConnectionPortInformation_StaticNew,
    PyvtkMPIMToNSocketConnectionPortInformation_Methods,
    "vtkMPIMToNSocketConnectionPortInformation", modulename,
    NULL, NULL,
    PyvtkMPIMToNSocketConnectionPortInformation_Doc(),
    PyVTKClass_vtkPVInformationNew(modulename));
  return cls;
}

const char **PyvtkMPIMToNSocketConnectionPortInformation_Doc()
{
  static const char *docstring[] = {
    "vtkMPIMToNSocketConnectionPortInformation - holds port and host name\n\n",
    "Superclass: vtkPVInformation\n\n",
    "and host information from a render server.  This information is used\nby the data server to make the connections to the render server\nprocesses.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkMPIMToNSocketConnectionPortInformation(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkMPIMToNSocketConnectionPortInformationNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkMPIMToNSocketConnectionPortInformation", o) != 0)
    {
    Py_DECREF(o);
    }

}

