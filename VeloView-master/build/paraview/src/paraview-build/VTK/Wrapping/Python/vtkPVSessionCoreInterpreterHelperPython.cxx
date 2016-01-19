// python wrapper for vtkPVSessionCoreInterpreterHelper
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkPVSessionCoreInterpreterHelper.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkPVSessionCoreInterpreterHelper(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkPVSessionCoreInterpreterHelperNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkPVSessionCoreInterpreterHelper_Doc();


static PyObject *
PyvtkPVSessionCoreInterpreterHelper_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSessionCoreInterpreterHelper *op = static_cast<vtkPVSessionCoreInterpreterHelper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkPVSessionCoreInterpreterHelper::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVSessionCoreInterpreterHelper_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSessionCoreInterpreterHelper *op = static_cast<vtkPVSessionCoreInterpreterHelper *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPVSessionCoreInterpreterHelper::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVSessionCoreInterpreterHelper_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSessionCoreInterpreterHelper *op = static_cast<vtkPVSessionCoreInterpreterHelper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPVSessionCoreInterpreterHelper *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPVSessionCoreInterpreterHelper::NewInstance());

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
PyvtkPVSessionCoreInterpreterHelper_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkPVSessionCoreInterpreterHelper *tempr = vtkPVSessionCoreInterpreterHelper::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVSessionCoreInterpreterHelper_GetSIObject(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSIObject");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSessionCoreInterpreterHelper *op = static_cast<vtkPVSessionCoreInterpreterHelper *>(vp);

  unsigned int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkSIObject *tempr = (ap.IsBound() ?
      op->GetSIObject(temp0) :
      op->vtkPVSessionCoreInterpreterHelper::GetSIObject(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVSessionCoreInterpreterHelper_GetVTKObject(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVTKObject");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSessionCoreInterpreterHelper *op = static_cast<vtkPVSessionCoreInterpreterHelper *>(vp);

  unsigned int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkObjectBase *tempr = (ap.IsBound() ?
      op->GetVTKObject(temp0) :
      op->vtkPVSessionCoreInterpreterHelper::GetVTKObject(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVSessionCoreInterpreterHelper_GetNextGlobalIdChunk(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNextGlobalIdChunk");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSessionCoreInterpreterHelper *op = static_cast<vtkPVSessionCoreInterpreterHelper *>(vp);

  unsigned int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    unsigned int tempr = (ap.IsBound() ?
      op->GetNextGlobalIdChunk(temp0) :
      op->vtkPVSessionCoreInterpreterHelper::GetNextGlobalIdChunk(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVSessionCoreInterpreterHelper_GetProcessModule(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProcessModule");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSessionCoreInterpreterHelper *op = static_cast<vtkPVSessionCoreInterpreterHelper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkProcessModule *tempr = (ap.IsBound() ?
      op->GetProcessModule() :
      op->vtkPVSessionCoreInterpreterHelper::GetProcessModule());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVSessionCoreInterpreterHelper_GetActiveProgressHandler(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActiveProgressHandler");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSessionCoreInterpreterHelper *op = static_cast<vtkPVSessionCoreInterpreterHelper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPVProgressHandler *tempr = (ap.IsBound() ?
      op->GetActiveProgressHandler() :
      op->vtkPVSessionCoreInterpreterHelper::GetActiveProgressHandler());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVSessionCoreInterpreterHelper_SetMPIMToNSocketConnection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMPIMToNSocketConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSessionCoreInterpreterHelper *op = static_cast<vtkPVSessionCoreInterpreterHelper *>(vp);

  vtkMPIMToNSocketConnection *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMPIMToNSocketConnection"))
    {
    if (ap.IsBound())
      {
      op->SetMPIMToNSocketConnection(temp0);
      }
    else
      {
      op->vtkPVSessionCoreInterpreterHelper::SetMPIMToNSocketConnection(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVSessionCoreInterpreterHelper_SetCore(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCore");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSessionCoreInterpreterHelper *op = static_cast<vtkPVSessionCoreInterpreterHelper *>(vp);

  vtkPVSessionCore *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPVSessionCore"))
    {
    if (ap.IsBound())
      {
      op->SetCore(temp0);
      }
    else
      {
      op->vtkPVSessionCoreInterpreterHelper::SetCore(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVSessionCoreInterpreterHelper_SetLogLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLogLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSessionCoreInterpreterHelper *op = static_cast<vtkPVSessionCoreInterpreterHelper *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetLogLevel(temp0);
      }
    else
      {
      op->vtkPVSessionCoreInterpreterHelper::SetLogLevel(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkPVSessionCoreInterpreterHelper_Methods[] = {
  {(char*)"GetClassName", PyvtkPVSessionCoreInterpreterHelper_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkPVSessionCoreInterpreterHelper_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkPVSessionCoreInterpreterHelper_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkPVSessionCoreInterpreterHelper\nC++: vtkPVSessionCoreInterpreterHelper *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkPVSessionCoreInterpreterHelper_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkPVSessionCoreInterpreterHelper\nC++: vtkPVSessionCoreInterpreterHelper *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetSIObject", PyvtkPVSessionCoreInterpreterHelper_GetSIObject, METH_VARARGS,
   (char*)"V.GetSIObject(int) -> vtkSIObject\nC++: vtkSIObject *GetSIObject(vtkTypeUInt32 gid)\n\nReturns the vtkSIObject for the global-id. This is used by\nSIOBJECT() and SIPROXY() stream (vtkClientServerStream)\nmanipulator macros.\n"},
  {(char*)"GetVTKObject", PyvtkPVSessionCoreInterpreterHelper_GetVTKObject, METH_VARARGS,
   (char*)"V.GetVTKObject(int) -> vtkObjectBase\nC++: vtkObjectBase *GetVTKObject(vtkTypeUInt32 gid)\n\nReturns the vtkObject corresponding to the global id. This is\nused by the VTKOBJECT() stream (vtkClientServerStream)\nmanipulator macros.\n"},
  {(char*)"GetNextGlobalIdChunk", PyvtkPVSessionCoreInterpreterHelper_GetNextGlobalIdChunk, METH_VARARGS,
   (char*)"V.GetNextGlobalIdChunk(int) -> int\nC++: vtkTypeUInt32 GetNextGlobalIdChunk(vtkTypeUInt32 chunkSize)\n\nReserve a global id block.\n"},
  {(char*)"GetProcessModule", PyvtkPVSessionCoreInterpreterHelper_GetProcessModule, METH_VARARGS,
   (char*)"V.GetProcessModule() -> vtkProcessModule\nC++: vtkProcessModule *GetProcessModule()\n\nProvides access to the process module.\n"},
  {(char*)"GetActiveProgressHandler", PyvtkPVSessionCoreInterpreterHelper_GetActiveProgressHandler, METH_VARARGS,
   (char*)"V.GetActiveProgressHandler() -> vtkPVProgressHandler\nC++: vtkPVProgressHandler *GetActiveProgressHandler()\n\nProvides access to the progress handler.\n"},
  {(char*)"SetMPIMToNSocketConnection", PyvtkPVSessionCoreInterpreterHelper_SetMPIMToNSocketConnection, METH_VARARGS,
   (char*)"V.SetMPIMToNSocketConnection(vtkMPIMToNSocketConnection)\nC++: void SetMPIMToNSocketConnection(vtkMPIMToNSocketConnection *)\n\nSets and initializes the MPIMToNSocketConnection for\ncommunicating between data-server and render-server.\n"},
  {(char*)"SetCore", PyvtkPVSessionCoreInterpreterHelper_SetCore, METH_VARARGS,
   (char*)"V.SetCore(vtkPVSessionCore)\nC++: void SetCore(vtkPVSessionCore *)\n\nUsed by vtkPVSessionCore to pass the core. This is not reference\ncounted.\n"},
  {(char*)"SetLogLevel", PyvtkPVSessionCoreInterpreterHelper_SetLogLevel, METH_VARARGS,
   (char*)"V.SetLogLevel(int)\nC++: void SetLogLevel(int a)\n\nSwitch from 0:vtkErrorMacro to 1:vtkWarningMacro\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkPVSessionCoreInterpreterHelper_StaticNew()
{
  return vtkPVSessionCoreInterpreterHelper::New();
}

PyObject *PyVTKClass_vtkPVSessionCoreInterpreterHelperNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkPVSessionCoreInterpreterHelper_StaticNew,
    PyvtkPVSessionCoreInterpreterHelper_Methods,
    "vtkPVSessionCoreInterpreterHelper", modulename,
    NULL, NULL,
    PyvtkPVSessionCoreInterpreterHelper_Doc(),
    PyVTKClass_vtkObjectNew(modulename));
  return cls;
}

const char **PyvtkPVSessionCoreInterpreterHelper_Doc()
{
  static const char *docstring[] = {
    "vtkPVSessionCoreInterpreterHelper\n\n",
    "Superclass: vtkObject\n\n",
    "vtkPVSessionCoreInterpreterHelper is used by vtkPVSessionCore to\navoid a circular reference between the vtkPVSessionCore instance and\nits Interpreter.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPVSessionCoreInterpreterHelper(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPVSessionCoreInterpreterHelperNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPVSessionCoreInterpreterHelper", o) != 0)
    {
    Py_DECREF(o);
    }

}

