// python wrapper for vtkGPUInfo
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkGPUInfo.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkGPUInfo(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkGPUInfoNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkGPUInfo_Doc();


static PyObject *
PyvtkGPUInfo_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGPUInfo *op = static_cast<vtkGPUInfo *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkGPUInfo::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGPUInfo_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGPUInfo *op = static_cast<vtkGPUInfo *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkGPUInfo::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGPUInfo_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGPUInfo *op = static_cast<vtkGPUInfo *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkGPUInfo *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkGPUInfo::NewInstance());

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
PyvtkGPUInfo_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkGPUInfo *tempr = vtkGPUInfo::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGPUInfo_SetDedicatedVideoMemory(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDedicatedVideoMemory");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGPUInfo *op = static_cast<vtkGPUInfo *>(vp);

  unsigned long long temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetDedicatedVideoMemory(temp0);
      }
    else
      {
      op->vtkGPUInfo::SetDedicatedVideoMemory(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGPUInfo_GetDedicatedVideoMemory(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDedicatedVideoMemory");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGPUInfo *op = static_cast<vtkGPUInfo *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned long long tempr = (ap.IsBound() ?
      op->GetDedicatedVideoMemory() :
      op->vtkGPUInfo::GetDedicatedVideoMemory());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGPUInfo_SetDedicatedSystemMemory(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDedicatedSystemMemory");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGPUInfo *op = static_cast<vtkGPUInfo *>(vp);

  unsigned long long temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetDedicatedSystemMemory(temp0);
      }
    else
      {
      op->vtkGPUInfo::SetDedicatedSystemMemory(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGPUInfo_GetDedicatedSystemMemory(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDedicatedSystemMemory");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGPUInfo *op = static_cast<vtkGPUInfo *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned long long tempr = (ap.IsBound() ?
      op->GetDedicatedSystemMemory() :
      op->vtkGPUInfo::GetDedicatedSystemMemory());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGPUInfo_SetSharedSystemMemory(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSharedSystemMemory");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGPUInfo *op = static_cast<vtkGPUInfo *>(vp);

  unsigned long long temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetSharedSystemMemory(temp0);
      }
    else
      {
      op->vtkGPUInfo::SetSharedSystemMemory(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGPUInfo_GetSharedSystemMemory(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSharedSystemMemory");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGPUInfo *op = static_cast<vtkGPUInfo *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned long long tempr = (ap.IsBound() ?
      op->GetSharedSystemMemory() :
      op->vtkGPUInfo::GetSharedSystemMemory());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkGPUInfo_Methods[] = {
  {(char*)"GetClassName", PyvtkGPUInfo_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkGPUInfo_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkGPUInfo_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkGPUInfo\nC++: vtkGPUInfo *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkGPUInfo_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkGPUInfo\nC++: vtkGPUInfo *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetDedicatedVideoMemory", PyvtkGPUInfo_SetDedicatedVideoMemory, METH_VARARGS,
   (char*)"V.SetDedicatedVideoMemory(int)\nC++: void SetDedicatedVideoMemory(vtkTypeUInt64 a)\n\nSet/Get dedicated video memory in bytes. Initial value is 0.\nUsually the fastest one. If it is not 0, it should be taken into\naccount first and DedicatedSystemMemory or SharedSystemMemory\nshould be ignored.\n"},
  {(char*)"GetDedicatedVideoMemory", PyvtkGPUInfo_GetDedicatedVideoMemory, METH_VARARGS,
   (char*)"V.GetDedicatedVideoMemory() -> int\nC++: vtkTypeUInt64 GetDedicatedVideoMemory()\n\nSet/Get dedicated video memory in bytes. Initial value is 0.\nUsually the fastest one. If it is not 0, it should be taken into\naccount first and DedicatedSystemMemory or SharedSystemMemory\nshould be ignored.\n"},
  {(char*)"SetDedicatedSystemMemory", PyvtkGPUInfo_SetDedicatedSystemMemory, METH_VARARGS,
   (char*)"V.SetDedicatedSystemMemory(int)\nC++: void SetDedicatedSystemMemory(vtkTypeUInt64 a)\n\nSet/Get dedicated system memory in bytes. Initial value is 0.\nThis is slow memory. If it is not 0, this value should be taken\ninto account only if there is no DedicatedVideoMemory and\nSharedSystemMemory should be ignored.\n"},
  {(char*)"GetDedicatedSystemMemory", PyvtkGPUInfo_GetDedicatedSystemMemory, METH_VARARGS,
   (char*)"V.GetDedicatedSystemMemory() -> int\nC++: vtkTypeUInt64 GetDedicatedSystemMemory()\n\nSet/Get dedicated system memory in bytes. Initial value is 0.\nThis is slow memory. If it is not 0, this value should be taken\ninto account only if there is no DedicatedVideoMemory and\nSharedSystemMemory should be ignored.\n"},
  {(char*)"SetSharedSystemMemory", PyvtkGPUInfo_SetSharedSystemMemory, METH_VARARGS,
   (char*)"V.SetSharedSystemMemory(int)\nC++: void SetSharedSystemMemory(vtkTypeUInt64 a)\n\nSet/Get shared system memory in bytes. Initial value is 0.\nSlowest memory. This value should be taken into account only if\nthere is neither DedicatedVideoMemory nor DedicatedSystemMemory.\n"},
  {(char*)"GetSharedSystemMemory", PyvtkGPUInfo_GetSharedSystemMemory, METH_VARARGS,
   (char*)"V.GetSharedSystemMemory() -> int\nC++: vtkTypeUInt64 GetSharedSystemMemory()\n\nSet/Get shared system memory in bytes. Initial value is 0.\nSlowest memory. This value should be taken into account only if\nthere is neither DedicatedVideoMemory nor DedicatedSystemMemory.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkGPUInfo_StaticNew()
{
  return vtkGPUInfo::New();
}

PyObject *PyVTKClass_vtkGPUInfoNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkGPUInfo_StaticNew,
    PyvtkGPUInfo_Methods,
    "vtkGPUInfo", modulename,
    NULL, NULL,
    PyvtkGPUInfo_Doc(),
    PyVTKClass_vtkObjectNew(modulename));
  return cls;
}

const char **PyvtkGPUInfo_Doc()
{
  static const char *docstring[] = {
    "vtkGPUInfo - Stores GPU VRAM information.\n\n",
    "Superclass: vtkObject\n\n",
    "vtkGPUInfo stores information about GPU Video RAM. An host can have\nseveral GPUs. The values are set by vtkGPUInfoList.\n\nSee Also:\n\nvtkGPUInfoList vtkDirectXGPUInfoList vtkCoreGraphicsGPUInfoList\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkGPUInfo(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkGPUInfoNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkGPUInfo", o) != 0)
    {
    Py_DECREF(o);
    }

}

