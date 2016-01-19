// python wrapper for vtkSMPythonViewProxy
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkSMPythonViewProxy.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkSMPythonViewProxy(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkSMPythonViewProxyNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkSMViewProxyNew
extern "C" { PyObject *PyVTKClass_vtkSMViewProxyNew(const char *); }
#define DECLARED_PyVTKClass_vtkSMViewProxyNew
#endif

static const char **PyvtkSMPythonViewProxy_Doc();


static PyObject *
PyvtkSMPythonViewProxy_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMPythonViewProxy *op = static_cast<vtkSMPythonViewProxy *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkSMPythonViewProxy::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMPythonViewProxy_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMPythonViewProxy *op = static_cast<vtkSMPythonViewProxy *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSMPythonViewProxy::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMPythonViewProxy_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMPythonViewProxy *op = static_cast<vtkSMPythonViewProxy *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkSMPythonViewProxy *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSMPythonViewProxy::NewInstance());

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
PyvtkSMPythonViewProxy_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkSMPythonViewProxy *tempr = vtkSMPythonViewProxy::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMPythonViewProxy_GetRenderer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRenderer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMPythonViewProxy *op = static_cast<vtkSMPythonViewProxy *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkRenderer *tempr = (ap.IsBound() ?
      op->GetRenderer() :
      op->vtkSMPythonViewProxy::GetRenderer());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMPythonViewProxy_GetRenderWindow(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRenderWindow");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMPythonViewProxy *op = static_cast<vtkSMPythonViewProxy *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkRenderWindow *tempr = (ap.IsBound() ?
      op->GetRenderWindow() :
      op->vtkSMPythonViewProxy::GetRenderWindow());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMPythonViewProxy_LastRenderWasInteractive(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LastRenderWasInteractive");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMPythonViewProxy *op = static_cast<vtkSMPythonViewProxy *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->LastRenderWasInteractive() :
      op->vtkSMPythonViewProxy::LastRenderWasInteractive());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkSMPythonViewProxy_Methods[] = {
  {(char*)"GetClassName", PyvtkSMPythonViewProxy_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkSMPythonViewProxy_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkSMPythonViewProxy_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkSMPythonViewProxy\nC++: vtkSMPythonViewProxy *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkSMPythonViewProxy_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkSMPythonViewProxy\nC++: vtkSMPythonViewProxy *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetRenderer", PyvtkSMPythonViewProxy_GetRenderer, METH_VARARGS,
   (char*)"V.GetRenderer() -> vtkRenderer\nC++: vtkRenderer *GetRenderer()\n\nReturns the client-side renderer.\n"},
  {(char*)"GetRenderWindow", PyvtkSMPythonViewProxy_GetRenderWindow, METH_VARARGS,
   (char*)"V.GetRenderWindow() -> vtkRenderWindow\nC++: vtkRenderWindow *GetRenderWindow()\n\nReturns the client-side render window.\n"},
  {(char*)"LastRenderWasInteractive", PyvtkSMPythonViewProxy_LastRenderWasInteractive, METH_VARARGS,
   (char*)"V.LastRenderWasInteractive() -> bool\nC++: virtual bool LastRenderWasInteractive()\n\nReturns true if the most recent render indeed employed low-res\nrendering.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkSMPythonViewProxy_StaticNew()
{
  return vtkSMPythonViewProxy::New();
}

PyObject *PyVTKClass_vtkSMPythonViewProxyNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkSMPythonViewProxy_StaticNew,
    PyvtkSMPythonViewProxy_Methods,
    "vtkSMPythonViewProxy", modulename,
    NULL, NULL,
    PyvtkSMPythonViewProxy_Doc(),
    PyVTKClass_vtkSMViewProxyNew(modulename));
  return cls;
}

const char **PyvtkSMPythonViewProxy_Doc()
{
  static const char *docstring[] = {
    "vtkSMPythonViewProxy - Superclass for all view proxies\n\n",
    "Superclass: vtkSMViewProxy\n\n",
    "vtkSMPythonViewProxy is a view proxy for the vtkPythonView.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkSMPythonViewProxy(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkSMPythonViewProxyNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkSMPythonViewProxy", o) != 0)
    {
    Py_DECREF(o);
    }

}

