// python wrapper for vtkPVRenderViewProxy
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkPVRenderViewProxy.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkPVRenderViewProxy(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkPVRenderViewProxyNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkPVRenderViewProxy_Doc();


static PyObject *
PyvtkPVRenderViewProxy_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRenderViewProxy *op = static_cast<vtkPVRenderViewProxy *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkPVRenderViewProxy::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVRenderViewProxy_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRenderViewProxy *op = static_cast<vtkPVRenderViewProxy *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPVRenderViewProxy::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVRenderViewProxy_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRenderViewProxy *op = static_cast<vtkPVRenderViewProxy *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPVRenderViewProxy *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPVRenderViewProxy::NewInstance());

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
PyvtkPVRenderViewProxy_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkPVRenderViewProxy *tempr = vtkPVRenderViewProxy::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVRenderViewProxy_EventuallyRender(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EventuallyRender");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRenderViewProxy *op = static_cast<vtkPVRenderViewProxy *>(vp);

  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
    {
    op->EventuallyRender();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVRenderViewProxy_GetRenderWindow(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRenderWindow");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRenderViewProxy *op = static_cast<vtkPVRenderViewProxy *>(vp);

  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
    {
    vtkRenderWindow *tempr = op->GetRenderWindow();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVRenderViewProxy_Render(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Render");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRenderViewProxy *op = static_cast<vtkPVRenderViewProxy *>(vp);

  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
    {
    op->Render();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVRenderViewProxy_LastRenderWasInteractive(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LastRenderWasInteractive");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRenderViewProxy *op = static_cast<vtkPVRenderViewProxy *>(vp);

  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
    {
    bool tempr = op->LastRenderWasInteractive();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkPVRenderViewProxy_Methods[] = {
  {(char*)"GetClassName", PyvtkPVRenderViewProxy_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkPVRenderViewProxy_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkPVRenderViewProxy_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkPVRenderViewProxy\nC++: vtkPVRenderViewProxy *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkPVRenderViewProxy_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkPVRenderViewProxy\nC++: vtkPVRenderViewProxy *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"EventuallyRender", PyvtkPVRenderViewProxy_EventuallyRender, METH_VARARGS,
   (char*)"V.EventuallyRender()\nC++: virtual void EventuallyRender()\n\nForward these calls to an actual vtkPVRenderView in a sub class.\n"},
  {(char*)"GetRenderWindow", PyvtkPVRenderViewProxy_GetRenderWindow, METH_VARARGS,
   (char*)"V.GetRenderWindow() -> vtkRenderWindow\nC++: virtual vtkRenderWindow *GetRenderWindow()\n\nForward these calls to an actual vtkPVRenderView in a sub class.\n"},
  {(char*)"Render", PyvtkPVRenderViewProxy_Render, METH_VARARGS,
   (char*)"V.Render()\nC++: virtual void Render()\n\nForward these calls to an actual vtkPVRenderView in a sub class.\n"},
  {(char*)"LastRenderWasInteractive", PyvtkPVRenderViewProxy_LastRenderWasInteractive, METH_VARARGS,
   (char*)"V.LastRenderWasInteractive() -> bool\nC++: virtual bool LastRenderWasInteractive()\n\nReturns true if the most recent render indeed employed low-res\nrendering.\n"},
  {NULL, NULL, 0, NULL}
};

PyObject *PyVTKClass_vtkPVRenderViewProxyNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(NULL,
    PyvtkPVRenderViewProxy_Methods,
    "vtkPVRenderViewProxy", modulename,
    NULL, NULL,
    PyvtkPVRenderViewProxy_Doc(),
    PyVTKClass_vtkObjectNew(modulename));
  return cls;
}

const char **PyvtkPVRenderViewProxy_Doc()
{
  static const char *docstring[] = {
    "vtkPVRenderViewProxy - Forwards calls to the vtkPVRenderView class\n\n",
    "Superclass: vtkObject\n\n",
    "This class is used to allow separation between client GUI code and\nserver code. It forwards calls to the vtkPVRenderView class.\n\nSee Also:\n\nvtkPVRenderModuleProxy\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPVRenderViewProxy(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPVRenderViewProxyNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPVRenderViewProxy", o) != 0)
    {
    Py_DECREF(o);
    }

}

