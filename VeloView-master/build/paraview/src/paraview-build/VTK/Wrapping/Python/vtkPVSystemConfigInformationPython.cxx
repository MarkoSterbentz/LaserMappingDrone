// python wrapper for vtkPVSystemConfigInformation
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkPVSystemConfigInformation.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkPVSystemConfigInformation(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkPVSystemConfigInformationNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkPVInformationNew
extern "C" { PyObject *PyVTKClass_vtkPVInformationNew(const char *); }
#define DECLARED_PyVTKClass_vtkPVInformationNew
#endif

static const char **PyvtkPVSystemConfigInformation_Doc();


static PyObject *
PyvtkPVSystemConfigInformation_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSystemConfigInformation *op = static_cast<vtkPVSystemConfigInformation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkPVSystemConfigInformation::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVSystemConfigInformation_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSystemConfigInformation *op = static_cast<vtkPVSystemConfigInformation *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPVSystemConfigInformation::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVSystemConfigInformation_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSystemConfigInformation *op = static_cast<vtkPVSystemConfigInformation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPVSystemConfigInformation *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPVSystemConfigInformation::NewInstance());

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
PyvtkPVSystemConfigInformation_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkPVSystemConfigInformation *tempr = vtkPVSystemConfigInformation::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVSystemConfigInformation_CopyFromObject(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyFromObject");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSystemConfigInformation *op = static_cast<vtkPVSystemConfigInformation *>(vp);

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
      op->vtkPVSystemConfigInformation::CopyFromObject(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVSystemConfigInformation_AddInformation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSystemConfigInformation *op = static_cast<vtkPVSystemConfigInformation *>(vp);

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
      op->vtkPVSystemConfigInformation::AddInformation(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVSystemConfigInformation_CopyToStream(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyToStream");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSystemConfigInformation *op = static_cast<vtkPVSystemConfigInformation *>(vp);

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
      op->vtkPVSystemConfigInformation::CopyToStream(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVSystemConfigInformation_CopyFromStream(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyFromStream");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSystemConfigInformation *op = static_cast<vtkPVSystemConfigInformation *>(vp);

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
      op->vtkPVSystemConfigInformation::CopyFromStream(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVSystemConfigInformation_GetSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSystemConfigInformation *op = static_cast<vtkPVSystemConfigInformation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    size_t tempr = (ap.IsBound() ?
      op->GetSize() :
      op->vtkPVSystemConfigInformation::GetSize());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVSystemConfigInformation_GetOSDescriptor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOSDescriptor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSystemConfigInformation *op = static_cast<vtkPVSystemConfigInformation *>(vp);

  size_t temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetOSDescriptor(temp0) :
      op->vtkPVSystemConfigInformation::GetOSDescriptor(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVSystemConfigInformation_GetCPUDescriptor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCPUDescriptor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSystemConfigInformation *op = static_cast<vtkPVSystemConfigInformation *>(vp);

  size_t temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetCPUDescriptor(temp0) :
      op->vtkPVSystemConfigInformation::GetCPUDescriptor(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVSystemConfigInformation_GetMemoryDescriptor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMemoryDescriptor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSystemConfigInformation *op = static_cast<vtkPVSystemConfigInformation *>(vp);

  size_t temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetMemoryDescriptor(temp0) :
      op->vtkPVSystemConfigInformation::GetMemoryDescriptor(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVSystemConfigInformation_GetHostName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHostName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSystemConfigInformation *op = static_cast<vtkPVSystemConfigInformation *>(vp);

  size_t temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetHostName(temp0) :
      op->vtkPVSystemConfigInformation::GetHostName(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVSystemConfigInformation_GetProcessType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProcessType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSystemConfigInformation *op = static_cast<vtkPVSystemConfigInformation *>(vp);

  size_t temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->GetProcessType(temp0) :
      op->vtkPVSystemConfigInformation::GetProcessType(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVSystemConfigInformation_GetSystemType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSystemType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSystemConfigInformation *op = static_cast<vtkPVSystemConfigInformation *>(vp);

  size_t temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->GetSystemType(temp0) :
      op->vtkPVSystemConfigInformation::GetSystemType(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVSystemConfigInformation_GetRank(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRank");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSystemConfigInformation *op = static_cast<vtkPVSystemConfigInformation *>(vp);

  size_t temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->GetRank(temp0) :
      op->vtkPVSystemConfigInformation::GetRank(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVSystemConfigInformation_GetPid(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPid");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSystemConfigInformation *op = static_cast<vtkPVSystemConfigInformation *>(vp);

  size_t temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    long long tempr = (ap.IsBound() ?
      op->GetPid(temp0) :
      op->vtkPVSystemConfigInformation::GetPid(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVSystemConfigInformation_GetHostMemoryTotal(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHostMemoryTotal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSystemConfigInformation *op = static_cast<vtkPVSystemConfigInformation *>(vp);

  size_t temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    long long tempr = (ap.IsBound() ?
      op->GetHostMemoryTotal(temp0) :
      op->vtkPVSystemConfigInformation::GetHostMemoryTotal(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVSystemConfigInformation_GetHostMemoryAvailable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHostMemoryAvailable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSystemConfigInformation *op = static_cast<vtkPVSystemConfigInformation *>(vp);

  size_t temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    long long tempr = (ap.IsBound() ?
      op->GetHostMemoryAvailable(temp0) :
      op->vtkPVSystemConfigInformation::GetHostMemoryAvailable(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVSystemConfigInformation_GetProcMemoryAvailable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProcMemoryAvailable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSystemConfigInformation *op = static_cast<vtkPVSystemConfigInformation *>(vp);

  size_t temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    long long tempr = (ap.IsBound() ?
      op->GetProcMemoryAvailable(temp0) :
      op->vtkPVSystemConfigInformation::GetProcMemoryAvailable(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVSystemConfigInformation_Sort(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Sort");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSystemConfigInformation *op = static_cast<vtkPVSystemConfigInformation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Sort();
      }
    else
      {
      op->vtkPVSystemConfigInformation::Sort();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkPVSystemConfigInformation_Methods[] = {
  {(char*)"GetClassName", PyvtkPVSystemConfigInformation_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkPVSystemConfigInformation_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkPVSystemConfigInformation_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkPVSystemConfigInformation\nC++: vtkPVSystemConfigInformation *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkPVSystemConfigInformation_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkPVSystemConfigInformation\nC++: vtkPVSystemConfigInformation *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"CopyFromObject", PyvtkPVSystemConfigInformation_CopyFromObject, METH_VARARGS,
   (char*)"V.CopyFromObject(vtkObject)\nC++: virtual void CopyFromObject(vtkObject *obj)\n\nTransfer information about a single object into this object.\n"},
  {(char*)"AddInformation", PyvtkPVSystemConfigInformation_AddInformation, METH_VARARGS,
   (char*)"V.AddInformation(vtkPVInformation)\nC++: virtual void AddInformation(vtkPVInformation *info)\n\nMerge another information object.\n"},
  {(char*)"CopyToStream", PyvtkPVSystemConfigInformation_CopyToStream, METH_VARARGS,
   (char*)"V.CopyToStream(vtkClientServerStream)\nC++: virtual void CopyToStream(vtkClientServerStream *css)\n\nManage a serialized version of the information.\n"},
  {(char*)"CopyFromStream", PyvtkPVSystemConfigInformation_CopyFromStream, METH_VARARGS,
   (char*)"V.CopyFromStream(vtkClientServerStream)\nC++: virtual void CopyFromStream(const vtkClientServerStream *css)\n\nManage a serialized version of the information.\n"},
  {(char*)"GetSize", PyvtkPVSystemConfigInformation_GetSize, METH_VARARGS,
   (char*)"V.GetSize() -> int\nC++: size_t GetSize()\n\nAccess managed information\n"},
  {(char*)"GetOSDescriptor", PyvtkPVSystemConfigInformation_GetOSDescriptor, METH_VARARGS,
   (char*)"V.GetOSDescriptor(int) -> string\nC++: const char *GetOSDescriptor(size_t i)\n\n"},
  {(char*)"GetCPUDescriptor", PyvtkPVSystemConfigInformation_GetCPUDescriptor, METH_VARARGS,
   (char*)"V.GetCPUDescriptor(int) -> string\nC++: const char *GetCPUDescriptor(size_t i)\n\n"},
  {(char*)"GetMemoryDescriptor", PyvtkPVSystemConfigInformation_GetMemoryDescriptor, METH_VARARGS,
   (char*)"V.GetMemoryDescriptor(int) -> string\nC++: const char *GetMemoryDescriptor(size_t i)\n\n"},
  {(char*)"GetHostName", PyvtkPVSystemConfigInformation_GetHostName, METH_VARARGS,
   (char*)"V.GetHostName(int) -> string\nC++: const char *GetHostName(size_t i)\n\n"},
  {(char*)"GetProcessType", PyvtkPVSystemConfigInformation_GetProcessType, METH_VARARGS,
   (char*)"V.GetProcessType(int) -> int\nC++: int GetProcessType(size_t i)\n\n"},
  {(char*)"GetSystemType", PyvtkPVSystemConfigInformation_GetSystemType, METH_VARARGS,
   (char*)"V.GetSystemType(int) -> int\nC++: int GetSystemType(size_t i)\n\n"},
  {(char*)"GetRank", PyvtkPVSystemConfigInformation_GetRank, METH_VARARGS,
   (char*)"V.GetRank(int) -> int\nC++: int GetRank(size_t i)\n\n"},
  {(char*)"GetPid", PyvtkPVSystemConfigInformation_GetPid, METH_VARARGS,
   (char*)"V.GetPid(int) -> int\nC++: long long GetPid(size_t i)\n\n"},
  {(char*)"GetHostMemoryTotal", PyvtkPVSystemConfigInformation_GetHostMemoryTotal, METH_VARARGS,
   (char*)"V.GetHostMemoryTotal(int) -> int\nC++: long long GetHostMemoryTotal(size_t i)\n\n"},
  {(char*)"GetHostMemoryAvailable", PyvtkPVSystemConfigInformation_GetHostMemoryAvailable, METH_VARARGS,
   (char*)"V.GetHostMemoryAvailable(int) -> int\nC++: long long GetHostMemoryAvailable(size_t i)\n\n"},
  {(char*)"GetProcMemoryAvailable", PyvtkPVSystemConfigInformation_GetProcMemoryAvailable, METH_VARARGS,
   (char*)"V.GetProcMemoryAvailable(int) -> int\nC++: long long GetProcMemoryAvailable(size_t i)\n\n"},
  {(char*)"Sort", PyvtkPVSystemConfigInformation_Sort, METH_VARARGS,
   (char*)"V.Sort()\nC++: void Sort()\n\nSort elements by mpi rank.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkPVSystemConfigInformation_StaticNew()
{
  return vtkPVSystemConfigInformation::New();
}

PyObject *PyVTKClass_vtkPVSystemConfigInformationNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkPVSystemConfigInformation_StaticNew,
    PyvtkPVSystemConfigInformation_Methods,
    "vtkPVSystemConfigInformation", modulename,
    NULL, NULL,
    PyvtkPVSystemConfigInformation_Doc(),
    PyVTKClass_vtkPVInformationNew(modulename));
  return cls;
}

const char **PyvtkPVSystemConfigInformation_Doc()
{
  static const char *docstring[] = {
    "vtkPVSystemConfigInformation\n\n",
    "Superclass: vtkPVInformation\n\n",
    "A vtkClientServerStream serializable conatiner of information\ndescribing memory configuration of the host of a single process.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPVSystemConfigInformation(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPVSystemConfigInformationNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPVSystemConfigInformation", o) != 0)
    {
    Py_DECREF(o);
    }

}

