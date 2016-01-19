// python wrapper for vtkSMPipelineState
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkSMPipelineState.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkSMPipelineState(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkSMPipelineStateNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkSMRemoteObjectNew
extern "C" { PyObject *PyVTKClass_vtkSMRemoteObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkSMRemoteObjectNew
#endif

static const char **PyvtkSMPipelineState_Doc();


static PyObject *
PyvtkSMPipelineState_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMPipelineState *op = static_cast<vtkSMPipelineState *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkSMPipelineState::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMPipelineState_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMPipelineState *op = static_cast<vtkSMPipelineState *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSMPipelineState::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMPipelineState_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMPipelineState *op = static_cast<vtkSMPipelineState *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkSMPipelineState *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSMPipelineState::NewInstance());

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
PyvtkSMPipelineState_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkSMPipelineState *tempr = vtkSMPipelineState::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMPipelineState_GetFullState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFullState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMPipelineState *op = static_cast<vtkSMPipelineState *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const vtkSMMessage *tempr = (ap.IsBound() ?
      op->GetFullState() :
      op->vtkSMPipelineState::GetFullState());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMPipelineState_LoadState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LoadState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMPipelineState *op = static_cast<vtkSMPipelineState *>(vp);

  vtkSMMessage *temp0 = NULL;
  vtkSMProxyLocator *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkSMMessage") &&
      ap.GetVTKObject(temp1, "vtkSMProxyLocator"))
    {
    if (ap.IsBound())
      {
      op->LoadState(temp0, temp1);
      }
    else
      {
      op->vtkSMPipelineState::LoadState(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMPipelineState_ValidateState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ValidateState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMPipelineState *op = static_cast<vtkSMPipelineState *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ValidateState();
      }
    else
      {
      op->vtkSMPipelineState::ValidateState();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkSMPipelineState_Methods[] = {
  {(char*)"GetClassName", PyvtkSMPipelineState_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkSMPipelineState_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkSMPipelineState_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkSMPipelineState\nC++: vtkSMPipelineState *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkSMPipelineState_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkSMPipelineState\nC++: vtkSMPipelineState *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetFullState", PyvtkSMPipelineState_GetFullState, METH_VARARGS,
   (char*)"V.GetFullState() -> vtkSMMessage\nC++: virtual const vtkSMMessage *GetFullState()\n\nThis method return the full object state that can be used to\ncreate that object from scratch. This method will be used to fill\nthe undo stack. If not overriden this will return NULL.\n"},
  {(char*)"LoadState", PyvtkSMPipelineState_LoadState, METH_VARARGS,
   (char*)"V.LoadState(vtkSMMessage, vtkSMProxyLocator)\nC++: virtual void LoadState(const vtkSMMessage *msg,\n    vtkSMProxyLocator *locator)\n\nThis method is used to initialise the object to the given state\n"},
  {(char*)"ValidateState", PyvtkSMPipelineState_ValidateState, METH_VARARGS,
   (char*)"V.ValidateState()\nC++: void ValidateState()\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkSMPipelineState_StaticNew()
{
  return vtkSMPipelineState::New();
}

PyObject *PyVTKClass_vtkSMPipelineStateNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkSMPipelineState_StaticNew,
    PyvtkSMPipelineState_Methods,
    "vtkSMPipelineState", modulename,
    NULL, NULL,
    PyvtkSMPipelineState_Doc(),
    PyVTKClass_vtkSMRemoteObjectNew(modulename));
  return cls;
}

const char **PyvtkSMPipelineState_Doc()
{
  static const char *docstring[] = {
    "vtkSMPipelineState - class that manage the state of the processing\n\n",
    "Superclass: vtkSMRemoteObject\n\n",
    "This class is used to provide a RemoteObject API to the\nvtkSMProxyManager which allow Undo/Redo and state sharing across\nseveral ParaView clients. Basically, we expose the state management\nAPI of RemoteObject to handle registration and unregistration of\nproxies.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkSMPipelineState(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkSMPipelineStateNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkSMPipelineState", o) != 0)
    {
    Py_DECREF(o);
    }

}

