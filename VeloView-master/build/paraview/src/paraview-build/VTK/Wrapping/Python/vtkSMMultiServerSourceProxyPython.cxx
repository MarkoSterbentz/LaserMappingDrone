// python wrapper for vtkSMMultiServerSourceProxy
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkSMMultiServerSourceProxy.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkSMMultiServerSourceProxy(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkSMMultiServerSourceProxyNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkSMSourceProxyNew
extern "C" { PyObject *PyVTKClass_vtkSMSourceProxyNew(const char *); }
#define DECLARED_PyVTKClass_vtkSMSourceProxyNew
#endif

static const char **PyvtkSMMultiServerSourceProxy_Doc();


static PyObject *
PyvtkSMMultiServerSourceProxy_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMMultiServerSourceProxy *op = static_cast<vtkSMMultiServerSourceProxy *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkSMMultiServerSourceProxy::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMMultiServerSourceProxy_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMMultiServerSourceProxy *op = static_cast<vtkSMMultiServerSourceProxy *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSMMultiServerSourceProxy::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMMultiServerSourceProxy_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMMultiServerSourceProxy *op = static_cast<vtkSMMultiServerSourceProxy *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkSMMultiServerSourceProxy *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSMMultiServerSourceProxy::NewInstance());

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
PyvtkSMMultiServerSourceProxy_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkSMMultiServerSourceProxy *tempr = vtkSMMultiServerSourceProxy::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMMultiServerSourceProxy_SetExternalProxy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExternalProxy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMMultiServerSourceProxy *op = static_cast<vtkSMMultiServerSourceProxy *>(vp);

  vtkSMSourceProxy *temp0 = NULL;
  int temp1 = 0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1, 2) &&
      ap.GetVTKObject(temp0, "vtkSMSourceProxy") &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
    {
    if (ap.IsBound())
      {
      op->SetExternalProxy(temp0, temp1);
      }
    else
      {
      op->vtkSMMultiServerSourceProxy::SetExternalProxy(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMMultiServerSourceProxy_GetExternalProxy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetExternalProxy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMMultiServerSourceProxy *op = static_cast<vtkSMMultiServerSourceProxy *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkSMSourceProxy *tempr = (ap.IsBound() ?
      op->GetExternalProxy() :
      op->vtkSMMultiServerSourceProxy::GetExternalProxy());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMMultiServerSourceProxy_MarkDirty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MarkDirty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMMultiServerSourceProxy *op = static_cast<vtkSMMultiServerSourceProxy *>(vp);

  vtkSMProxy *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMProxy"))
    {
    if (ap.IsBound())
      {
      op->MarkDirty(temp0);
      }
    else
      {
      op->vtkSMMultiServerSourceProxy::MarkDirty(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMMultiServerSourceProxy_LoadState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LoadState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMMultiServerSourceProxy *op = static_cast<vtkSMMultiServerSourceProxy *>(vp);

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
      op->vtkSMMultiServerSourceProxy::LoadState(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkSMMultiServerSourceProxy_Methods[] = {
  {(char*)"GetClassName", PyvtkSMMultiServerSourceProxy_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkSMMultiServerSourceProxy_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkSMMultiServerSourceProxy_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkSMMultiServerSourceProxy\nC++: vtkSMMultiServerSourceProxy *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkSMMultiServerSourceProxy_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkSMMultiServerSourceProxy\nC++: vtkSMMultiServerSourceProxy *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetExternalProxy", PyvtkSMMultiServerSourceProxy_SetExternalProxy, METH_VARARGS,
   (char*)"V.SetExternalProxy(vtkSMSourceProxy, int)\nC++: virtual void SetExternalProxy(\n    vtkSMSourceProxy *proxyFromAnotherServer, int port=0)\n\nBind proxy with a given external proxy\n"},
  {(char*)"GetExternalProxy", PyvtkSMMultiServerSourceProxy_GetExternalProxy, METH_VARARGS,
   (char*)"V.GetExternalProxy() -> vtkSMSourceProxy\nC++: virtual vtkSMSourceProxy *GetExternalProxy()\n\nReturn the proxy that is currently binded if any otherwise return\nNULL;\n"},
  {(char*)"MarkDirty", PyvtkSMMultiServerSourceProxy_MarkDirty, METH_VARARGS,
   (char*)"V.MarkDirty(vtkSMProxy)\nC++: virtual void MarkDirty(vtkSMProxy *modifiedProxy)\n\nMarks the selection proxies dirty as well as chain to superclass.\n"},
  {(char*)"LoadState", PyvtkSMMultiServerSourceProxy_LoadState, METH_VARARGS,
   (char*)"V.LoadState(vtkSMMessage, vtkSMProxyLocator)\nC++: virtual void LoadState(const vtkSMMessage *message,\n    vtkSMProxyLocator *locator)\n\nThis method is used to initialise the object to the given state\nIf the definitionOnly Flag is set to True the proxy won't load\nthe properties values and just setup the new proxy hierarchy with\nall subproxy globalID set. This allow to split the load process\nin 2 step to prevent invalid state when property refere to a\nsub-proxy that does not exist yet.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkSMMultiServerSourceProxy_StaticNew()
{
  return vtkSMMultiServerSourceProxy::New();
}

PyObject *PyVTKClass_vtkSMMultiServerSourceProxyNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkSMMultiServerSourceProxy_StaticNew,
    PyvtkSMMultiServerSourceProxy_Methods,
    "vtkSMMultiServerSourceProxy", modulename,
    NULL, NULL,
    PyvtkSMMultiServerSourceProxy_Doc(),
    PyVTKClass_vtkSMSourceProxyNew(modulename));
  return cls;
}

const char **PyvtkSMMultiServerSourceProxy_Doc()
{
  static const char *docstring[] = {
    "vtkSMMultiServerSourceProxy\n\n",
    "Superclass: vtkSMSourceProxy\n\n",
    "vtkSMMultiServerSourceProxy can be usefull in case of multi-server\nsetup when the user want to display a data object that belong to\nanother server into its local built-in view.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkSMMultiServerSourceProxy(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkSMMultiServerSourceProxyNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkSMMultiServerSourceProxy", o) != 0)
    {
    Py_DECREF(o);
    }

}

