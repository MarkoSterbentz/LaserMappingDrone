// python wrapper for vtkPVMultiClientsInformation
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkPVMultiClientsInformation.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkPVMultiClientsInformation(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkPVMultiClientsInformationNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkPVInformationNew
extern "C" { PyObject *PyVTKClass_vtkPVInformationNew(const char *); }
#define DECLARED_PyVTKClass_vtkPVInformationNew
#endif

static const char **PyvtkPVMultiClientsInformation_Doc();


static PyObject *
PyvtkPVMultiClientsInformation_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVMultiClientsInformation *op = static_cast<vtkPVMultiClientsInformation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkPVMultiClientsInformation::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVMultiClientsInformation_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVMultiClientsInformation *op = static_cast<vtkPVMultiClientsInformation *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPVMultiClientsInformation::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVMultiClientsInformation_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVMultiClientsInformation *op = static_cast<vtkPVMultiClientsInformation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPVMultiClientsInformation *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPVMultiClientsInformation::NewInstance());

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
PyvtkPVMultiClientsInformation_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkPVMultiClientsInformation *tempr = vtkPVMultiClientsInformation::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVMultiClientsInformation_DeepCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeepCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVMultiClientsInformation *op = static_cast<vtkPVMultiClientsInformation *>(vp);

  vtkPVMultiClientsInformation *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPVMultiClientsInformation"))
    {
    if (ap.IsBound())
      {
      op->DeepCopy(temp0);
      }
    else
      {
      op->vtkPVMultiClientsInformation::DeepCopy(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVMultiClientsInformation_CopyFromObject(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyFromObject");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVMultiClientsInformation *op = static_cast<vtkPVMultiClientsInformation *>(vp);

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
      op->vtkPVMultiClientsInformation::CopyFromObject(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVMultiClientsInformation_AddInformation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVMultiClientsInformation *op = static_cast<vtkPVMultiClientsInformation *>(vp);

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
      op->vtkPVMultiClientsInformation::AddInformation(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVMultiClientsInformation_CopyToStream(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyToStream");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVMultiClientsInformation *op = static_cast<vtkPVMultiClientsInformation *>(vp);

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
      op->vtkPVMultiClientsInformation::CopyToStream(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVMultiClientsInformation_CopyFromStream(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyFromStream");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVMultiClientsInformation *op = static_cast<vtkPVMultiClientsInformation *>(vp);

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
      op->vtkPVMultiClientsInformation::CopyFromStream(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVMultiClientsInformation_GetClientId_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClientId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVMultiClientsInformation *op = static_cast<vtkPVMultiClientsInformation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetClientId() :
      op->vtkPVMultiClientsInformation::GetClientId());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkPVMultiClientsInformation_GetClientId_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClientId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVMultiClientsInformation *op = static_cast<vtkPVMultiClientsInformation *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->GetClientId(temp0) :
      op->vtkPVMultiClientsInformation::GetClientId(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkPVMultiClientsInformation_GetClientId(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 0:
      return PyvtkPVMultiClientsInformation_GetClientId_s1(self, args);
    case 1:
      return PyvtkPVMultiClientsInformation_GetClientId_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetClientId");
  return NULL;
}



static PyObject *
PyvtkPVMultiClientsInformation_GetNumberOfClients(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfClients");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVMultiClientsInformation *op = static_cast<vtkPVMultiClientsInformation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfClients() :
      op->vtkPVMultiClientsInformation::GetNumberOfClients());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVMultiClientsInformation_GetMultiClientEnable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMultiClientEnable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVMultiClientsInformation *op = static_cast<vtkPVMultiClientsInformation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetMultiClientEnable() :
      op->vtkPVMultiClientsInformation::GetMultiClientEnable());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVMultiClientsInformation_GetMasterId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMasterId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVMultiClientsInformation *op = static_cast<vtkPVMultiClientsInformation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetMasterId() :
      op->vtkPVMultiClientsInformation::GetMasterId());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkPVMultiClientsInformation_Methods[] = {
  {(char*)"GetClassName", PyvtkPVMultiClientsInformation_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkPVMultiClientsInformation_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkPVMultiClientsInformation_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkPVMultiClientsInformation\nC++: vtkPVMultiClientsInformation *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkPVMultiClientsInformation_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkPVMultiClientsInformation\nC++: vtkPVMultiClientsInformation *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"DeepCopy", PyvtkPVMultiClientsInformation_DeepCopy, METH_VARARGS,
   (char*)"V.DeepCopy(vtkPVMultiClientsInformation)\nC++: void DeepCopy(vtkPVMultiClientsInformation *info)\n\n"},
  {(char*)"CopyFromObject", PyvtkPVMultiClientsInformation_CopyFromObject, METH_VARARGS,
   (char*)"V.CopyFromObject(vtkObject)\nC++: virtual void CopyFromObject(vtkObject *)\n\nTransfer information about a single object into this object.\n"},
  {(char*)"AddInformation", PyvtkPVMultiClientsInformation_AddInformation, METH_VARARGS,
   (char*)"V.AddInformation(vtkPVInformation)\nC++: virtual void AddInformation(vtkPVInformation *)\n\nMerge another information object.\n"},
  {(char*)"CopyToStream", PyvtkPVMultiClientsInformation_CopyToStream, METH_VARARGS,
   (char*)"V.CopyToStream(vtkClientServerStream)\nC++: virtual void CopyToStream(vtkClientServerStream *)\n\nManage a serialized version of the information.\n"},
  {(char*)"CopyFromStream", PyvtkPVMultiClientsInformation_CopyFromStream, METH_VARARGS,
   (char*)"V.CopyFromStream(vtkClientServerStream)\nC++: virtual void CopyFromStream(const vtkClientServerStream *)\n\nManage a serialized version of the information.\n"},
  {(char*)"GetClientId", PyvtkPVMultiClientsInformation_GetClientId, METH_VARARGS,
   (char*)"V.GetClientId() -> int\nC++: int GetClientId()\nV.GetClientId(int) -> int\nC++: int GetClientId(int idx)\n\nGet the id that correspond to the current client\n"},
  {(char*)"GetNumberOfClients", PyvtkPVMultiClientsInformation_GetNumberOfClients, METH_VARARGS,
   (char*)"V.GetNumberOfClients() -> int\nC++: int GetNumberOfClients()\n\nReturn the number of connected clients\n"},
  {(char*)"GetMultiClientEnable", PyvtkPVMultiClientsInformation_GetMultiClientEnable, METH_VARARGS,
   (char*)"V.GetMultiClientEnable() -> int\nC++: int GetMultiClientEnable()\n\nReturn 1 if the server allow server client to connect to itself\n"},
  {(char*)"GetMasterId", PyvtkPVMultiClientsInformation_GetMasterId, METH_VARARGS,
   (char*)"V.GetMasterId() -> int\nC++: int GetMasterId()\n\nReturn the Id of the client that has been elected as master\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkPVMultiClientsInformation_StaticNew()
{
  return vtkPVMultiClientsInformation::New();
}

PyObject *PyVTKClass_vtkPVMultiClientsInformationNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkPVMultiClientsInformation_StaticNew,
    PyvtkPVMultiClientsInformation_Methods,
    "vtkPVMultiClientsInformation", modulename,
    NULL, NULL,
    PyvtkPVMultiClientsInformation_Doc(),
    PyVTKClass_vtkPVInformationNew(modulename));
  return cls;
}

const char **PyvtkPVMultiClientsInformation_Doc()
{
  static const char *docstring[] = {
    "vtkPVMultiClientsInformation - Gets Multi-clients informations from\nthe server.\n\n",
    "Superclass: vtkPVInformation\n\n",
    "This objects is used by the client to get the number of multi-clients\nserver as well as their ids.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPVMultiClientsInformation(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPVMultiClientsInformationNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPVMultiClientsInformation", o) != 0)
    {
    Py_DECREF(o);
    }

}

