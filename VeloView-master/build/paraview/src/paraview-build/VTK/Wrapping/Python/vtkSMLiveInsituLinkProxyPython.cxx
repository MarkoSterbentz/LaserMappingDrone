// python wrapper for vtkSMLiveInsituLinkProxy
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkSMLiveInsituLinkProxy.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkSMLiveInsituLinkProxy(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkSMLiveInsituLinkProxyNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkSMProxyNew
extern "C" { PyObject *PyVTKClass_vtkSMProxyNew(const char *); }
#define DECLARED_PyVTKClass_vtkSMProxyNew
#endif

static const char **PyvtkSMLiveInsituLinkProxy_Doc();


static PyObject *
PyvtkSMLiveInsituLinkProxy_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMLiveInsituLinkProxy *op = static_cast<vtkSMLiveInsituLinkProxy *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkSMLiveInsituLinkProxy::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMLiveInsituLinkProxy_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMLiveInsituLinkProxy *op = static_cast<vtkSMLiveInsituLinkProxy *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSMLiveInsituLinkProxy::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMLiveInsituLinkProxy_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMLiveInsituLinkProxy *op = static_cast<vtkSMLiveInsituLinkProxy *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkSMLiveInsituLinkProxy *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSMLiveInsituLinkProxy::NewInstance());

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
PyvtkSMLiveInsituLinkProxy_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkSMLiveInsituLinkProxy *tempr = vtkSMLiveInsituLinkProxy::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMLiveInsituLinkProxy_GetInsituProxyManager(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInsituProxyManager");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMLiveInsituLinkProxy *op = static_cast<vtkSMLiveInsituLinkProxy *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkSMSessionProxyManager *tempr = (ap.IsBound() ?
      op->GetInsituProxyManager() :
      op->vtkSMLiveInsituLinkProxy::GetInsituProxyManager());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMLiveInsituLinkProxy_SetInsituProxyManager(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInsituProxyManager");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMLiveInsituLinkProxy *op = static_cast<vtkSMLiveInsituLinkProxy *>(vp);

  vtkSMSessionProxyManager *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMSessionProxyManager"))
    {
    if (ap.IsBound())
      {
      op->SetInsituProxyManager(temp0);
      }
    else
      {
      op->vtkSMLiveInsituLinkProxy::SetInsituProxyManager(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMLiveInsituLinkProxy_HasExtract(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasExtract");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMLiveInsituLinkProxy *op = static_cast<vtkSMLiveInsituLinkProxy *>(vp);

  char *temp0 = NULL;
  char *temp1 = NULL;
  int temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    bool tempr = (ap.IsBound() ?
      op->HasExtract(temp0, temp1, temp2) :
      op->vtkSMLiveInsituLinkProxy::HasExtract(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMLiveInsituLinkProxy_CreateExtract(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateExtract");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMLiveInsituLinkProxy *op = static_cast<vtkSMLiveInsituLinkProxy *>(vp);

  char *temp0 = NULL;
  char *temp1 = NULL;
  int temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    vtkSMProxy *tempr = (ap.IsBound() ?
      op->CreateExtract(temp0, temp1, temp2) :
      op->vtkSMLiveInsituLinkProxy::CreateExtract(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMLiveInsituLinkProxy_RemoveExtract(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveExtract");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMLiveInsituLinkProxy *op = static_cast<vtkSMLiveInsituLinkProxy *>(vp);

  vtkSMProxy *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMProxy"))
    {
    if (ap.IsBound())
      {
      op->RemoveExtract(temp0);
      }
    else
      {
      op->vtkSMLiveInsituLinkProxy::RemoveExtract(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMLiveInsituLinkProxy_LiveChanged(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LiveChanged");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMLiveInsituLinkProxy *op = static_cast<vtkSMLiveInsituLinkProxy *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->LiveChanged();
      }
    else
      {
      op->vtkSMLiveInsituLinkProxy::LiveChanged();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMLiveInsituLinkProxy_GetTimeStep(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTimeStep");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMLiveInsituLinkProxy *op = static_cast<vtkSMLiveInsituLinkProxy *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetTimeStep() :
      op->vtkSMLiveInsituLinkProxy::GetTimeStep());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMLiveInsituLinkProxy_LoadState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LoadState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMLiveInsituLinkProxy *op = static_cast<vtkSMLiveInsituLinkProxy *>(vp);

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
      op->vtkSMLiveInsituLinkProxy::LoadState(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkSMLiveInsituLinkProxy_Methods[] = {
  {(char*)"GetClassName", PyvtkSMLiveInsituLinkProxy_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkSMLiveInsituLinkProxy_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkSMLiveInsituLinkProxy_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkSMLiveInsituLinkProxy\nC++: vtkSMLiveInsituLinkProxy *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkSMLiveInsituLinkProxy_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkSMLiveInsituLinkProxy\nC++: vtkSMLiveInsituLinkProxy *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetInsituProxyManager", PyvtkSMLiveInsituLinkProxy_GetInsituProxyManager, METH_VARARGS,
   (char*)"V.GetInsituProxyManager() -> vtkSMSessionProxyManager\nC++: vtkSMSessionProxyManager *GetInsituProxyManager()\n\nProvides access to the a dummy proxy manager representing the\ninsitu visualization pipeline.\n"},
  {(char*)"SetInsituProxyManager", PyvtkSMLiveInsituLinkProxy_SetInsituProxyManager, METH_VARARGS,
   (char*)"V.SetInsituProxyManager(vtkSMSessionProxyManager)\nC++: void SetInsituProxyManager(vtkSMSessionProxyManager *)\n\nProvides access to the a dummy proxy manager representing the\ninsitu visualization pipeline.\n"},
  {(char*)"HasExtract", PyvtkSMLiveInsituLinkProxy_HasExtract, METH_VARARGS,
   (char*)"V.HasExtract(string, string, int) -> bool\nC++: bool HasExtract(const char *reg_group, const char *reg_name,\n    int port_number)\n\n\n"},
  {(char*)"CreateExtract", PyvtkSMLiveInsituLinkProxy_CreateExtract, METH_VARARGS,
   (char*)"V.CreateExtract(string, string, int) -> vtkSMProxy\nC++: vtkSMProxy *CreateExtract(const char *reg_group,\n    const char *reg_name, int port_number)\n\n\n"},
  {(char*)"RemoveExtract", PyvtkSMLiveInsituLinkProxy_RemoveExtract, METH_VARARGS,
   (char*)"V.RemoveExtract(vtkSMProxy)\nC++: void RemoveExtract(vtkSMProxy *)\n\n\n"},
  {(char*)"LiveChanged", PyvtkSMLiveInsituLinkProxy_LiveChanged, METH_VARARGS,
   (char*)"V.LiveChanged()\nC++: void LiveChanged()\n\nWakes up Insitu side if simulation is paused. Handles corectly\nseveral calls on the LIVE side.\n"},
  {(char*)"GetTimeStep", PyvtkSMLiveInsituLinkProxy_GetTimeStep, METH_VARARGS,
   (char*)"V.GetTimeStep() -> int\nC++: vtkIdType GetTimeStep()\n\nWakes up Insitu side if simulation is paused. Handles corectly\nseveral calls on the LIVE side.\n"},
  {(char*)"LoadState", PyvtkSMLiveInsituLinkProxy_LoadState, METH_VARARGS,
   (char*)"V.LoadState(vtkSMMessage, vtkSMProxyLocator)\nC++: virtual void LoadState(const vtkSMMessage *msg,\n    vtkSMProxyLocator *locator)\n\nOverridden to handle server-notification messages.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkSMLiveInsituLinkProxy_StaticNew()
{
  return vtkSMLiveInsituLinkProxy::New();
}

PyObject *PyVTKClass_vtkSMLiveInsituLinkProxyNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkSMLiveInsituLinkProxy_StaticNew,
    PyvtkSMLiveInsituLinkProxy_Methods,
    "vtkSMLiveInsituLinkProxy", modulename,
    NULL, NULL,
    PyvtkSMLiveInsituLinkProxy_Doc(),
    PyVTKClass_vtkSMProxyNew(modulename));
  return cls;
}

const char **PyvtkSMLiveInsituLinkProxy_Doc()
{
  static const char *docstring[] = {
    "vtkSMLiveInsituLinkProxy - Performs additional operation on\n\n",
    "Superclass: vtkSMProxy\n\n",
    "Besides setting or getting parameters from its object\n(vtkSMLiveInsituLink) it receives paraview state from its object and\napplies it to the InsituProxyManager as well as sending modified\nparaview state to its object.@ingroup LiveInsitu\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkSMLiveInsituLinkProxy(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkSMLiveInsituLinkProxyNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkSMLiveInsituLinkProxy", o) != 0)
    {
    Py_DECREF(o);
    }

}

