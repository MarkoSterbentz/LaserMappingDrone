// python wrapper for vtkPVMemoryUseInformation
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkPVMemoryUseInformation.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkPVMemoryUseInformation(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkPVMemoryUseInformationNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkPVInformationNew
extern "C" { PyObject *PyVTKClass_vtkPVInformationNew(const char *); }
#define DECLARED_PyVTKClass_vtkPVInformationNew
#endif

static const char **PyvtkPVMemoryUseInformation_Doc();


static PyObject *
PyvtkPVMemoryUseInformation_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVMemoryUseInformation *op = static_cast<vtkPVMemoryUseInformation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkPVMemoryUseInformation::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVMemoryUseInformation_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVMemoryUseInformation *op = static_cast<vtkPVMemoryUseInformation *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPVMemoryUseInformation::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVMemoryUseInformation_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVMemoryUseInformation *op = static_cast<vtkPVMemoryUseInformation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPVMemoryUseInformation *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPVMemoryUseInformation::NewInstance());

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
PyvtkPVMemoryUseInformation_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkPVMemoryUseInformation *tempr = vtkPVMemoryUseInformation::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVMemoryUseInformation_CopyFromObject(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyFromObject");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVMemoryUseInformation *op = static_cast<vtkPVMemoryUseInformation *>(vp);

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
      op->vtkPVMemoryUseInformation::CopyFromObject(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVMemoryUseInformation_AddInformation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVMemoryUseInformation *op = static_cast<vtkPVMemoryUseInformation *>(vp);

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
      op->vtkPVMemoryUseInformation::AddInformation(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVMemoryUseInformation_CopyToStream(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyToStream");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVMemoryUseInformation *op = static_cast<vtkPVMemoryUseInformation *>(vp);

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
      op->vtkPVMemoryUseInformation::CopyToStream(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVMemoryUseInformation_CopyFromStream(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyFromStream");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVMemoryUseInformation *op = static_cast<vtkPVMemoryUseInformation *>(vp);

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
      op->vtkPVMemoryUseInformation::CopyFromStream(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVMemoryUseInformation_GetSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVMemoryUseInformation *op = static_cast<vtkPVMemoryUseInformation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    size_t tempr = (ap.IsBound() ?
      op->GetSize() :
      op->vtkPVMemoryUseInformation::GetSize());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVMemoryUseInformation_GetProcessType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProcessType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVMemoryUseInformation *op = static_cast<vtkPVMemoryUseInformation *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->GetProcessType(temp0) :
      op->vtkPVMemoryUseInformation::GetProcessType(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVMemoryUseInformation_GetRank(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRank");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVMemoryUseInformation *op = static_cast<vtkPVMemoryUseInformation *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->GetRank(temp0) :
      op->vtkPVMemoryUseInformation::GetRank(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVMemoryUseInformation_GetProcMemoryUse(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProcMemoryUse");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVMemoryUseInformation *op = static_cast<vtkPVMemoryUseInformation *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    long long tempr = (ap.IsBound() ?
      op->GetProcMemoryUse(temp0) :
      op->vtkPVMemoryUseInformation::GetProcMemoryUse(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVMemoryUseInformation_GetHostMemoryUse(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHostMemoryUse");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVMemoryUseInformation *op = static_cast<vtkPVMemoryUseInformation *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    long long tempr = (ap.IsBound() ?
      op->GetHostMemoryUse(temp0) :
      op->vtkPVMemoryUseInformation::GetHostMemoryUse(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkPVMemoryUseInformation_Methods[] = {
  {(char*)"GetClassName", PyvtkPVMemoryUseInformation_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkPVMemoryUseInformation_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkPVMemoryUseInformation_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkPVMemoryUseInformation\nC++: vtkPVMemoryUseInformation *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkPVMemoryUseInformation_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkPVMemoryUseInformation\nC++: vtkPVMemoryUseInformation *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"CopyFromObject", PyvtkPVMemoryUseInformation_CopyFromObject, METH_VARARGS,
   (char*)"V.CopyFromObject(vtkObject)\nC++: virtual void CopyFromObject(vtkObject *)\n\nTransfer information about a single object into this object.\n"},
  {(char*)"AddInformation", PyvtkPVMemoryUseInformation_AddInformation, METH_VARARGS,
   (char*)"V.AddInformation(vtkPVInformation)\nC++: virtual void AddInformation(vtkPVInformation *)\n\nMerge another information object.\n"},
  {(char*)"CopyToStream", PyvtkPVMemoryUseInformation_CopyToStream, METH_VARARGS,
   (char*)"V.CopyToStream(vtkClientServerStream)\nC++: virtual void CopyToStream(vtkClientServerStream *)\n\nManage a serialized version of the information.\n"},
  {(char*)"CopyFromStream", PyvtkPVMemoryUseInformation_CopyFromStream, METH_VARARGS,
   (char*)"V.CopyFromStream(vtkClientServerStream)\nC++: virtual void CopyFromStream(const vtkClientServerStream *)\n\nManage a serialized version of the information.\n"},
  {(char*)"GetSize", PyvtkPVMemoryUseInformation_GetSize, METH_VARARGS,
   (char*)"V.GetSize() -> int\nC++: size_t GetSize()\n\naccess the managed information.\n"},
  {(char*)"GetProcessType", PyvtkPVMemoryUseInformation_GetProcessType, METH_VARARGS,
   (char*)"V.GetProcessType(int) -> int\nC++: int GetProcessType(int i)\n\naccess the managed information.\n"},
  {(char*)"GetRank", PyvtkPVMemoryUseInformation_GetRank, METH_VARARGS,
   (char*)"V.GetRank(int) -> int\nC++: int GetRank(int i)\n\naccess the managed information.\n"},
  {(char*)"GetProcMemoryUse", PyvtkPVMemoryUseInformation_GetProcMemoryUse, METH_VARARGS,
   (char*)"V.GetProcMemoryUse(int) -> int\nC++: long long GetProcMemoryUse(int i)\n\naccess the managed information.\n"},
  {(char*)"GetHostMemoryUse", PyvtkPVMemoryUseInformation_GetHostMemoryUse, METH_VARARGS,
   (char*)"V.GetHostMemoryUse(int) -> int\nC++: long long GetHostMemoryUse(int i)\n\naccess the managed information.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkPVMemoryUseInformation_StaticNew()
{
  return vtkPVMemoryUseInformation::New();
}

PyObject *PyVTKClass_vtkPVMemoryUseInformationNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkPVMemoryUseInformation_StaticNew,
    PyvtkPVMemoryUseInformation_Methods,
    "vtkPVMemoryUseInformation", modulename,
    NULL, NULL,
    PyvtkPVMemoryUseInformation_Doc(),
    PyVTKClass_vtkPVInformationNew(modulename));
  return cls;
}

const char **PyvtkPVMemoryUseInformation_Doc()
{
  static const char *docstring[] = {
    "vtkPVMemoryUseInformation\n\n",
    "Superclass: vtkPVInformation\n\n",
    "A vtkClientServerStream serializable container for a single process's\ninstantaneous memory usage.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPVMemoryUseInformation(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPVMemoryUseInformationNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPVMemoryUseInformation", o) != 0)
    {
    Py_DECREF(o);
    }

}

