// python wrapper for vtkSMComparativeViewProxy
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkSMComparativeViewProxy.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkSMComparativeViewProxy(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkSMComparativeViewProxyNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkSMViewProxyNew
extern "C" { PyObject *PyVTKClass_vtkSMViewProxyNew(const char *); }
#define DECLARED_PyVTKClass_vtkSMViewProxyNew
#endif

static const char **PyvtkSMComparativeViewProxy_Doc();


static PyObject *
PyvtkSMComparativeViewProxy_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMComparativeViewProxy *op = static_cast<vtkSMComparativeViewProxy *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkSMComparativeViewProxy::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMComparativeViewProxy_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMComparativeViewProxy *op = static_cast<vtkSMComparativeViewProxy *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSMComparativeViewProxy::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMComparativeViewProxy_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMComparativeViewProxy *op = static_cast<vtkSMComparativeViewProxy *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkSMComparativeViewProxy *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSMComparativeViewProxy::NewInstance());

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
PyvtkSMComparativeViewProxy_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkSMComparativeViewProxy *tempr = vtkSMComparativeViewProxy::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMComparativeViewProxy_Update(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Update");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMComparativeViewProxy *op = static_cast<vtkSMComparativeViewProxy *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Update();
      }
    else
      {
      op->vtkSMComparativeViewProxy::Update();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMComparativeViewProxy_GetViews(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetViews");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMComparativeViewProxy *op = static_cast<vtkSMComparativeViewProxy *>(vp);

  vtkCollection *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCollection"))
    {
    if (ap.IsBound())
      {
      op->GetViews(temp0);
      }
    else
      {
      op->vtkSMComparativeViewProxy::GetViews(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMComparativeViewProxy_GetRepresentationsForView(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRepresentationsForView");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMComparativeViewProxy *op = static_cast<vtkSMComparativeViewProxy *>(vp);

  vtkSMViewProxy *temp0 = NULL;
  vtkCollection *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkSMViewProxy") &&
      ap.GetVTKObject(temp1, "vtkCollection"))
    {
    if (ap.IsBound())
      {
      op->GetRepresentationsForView(temp0, temp1);
      }
    else
      {
      op->vtkSMComparativeViewProxy::GetRepresentationsForView(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMComparativeViewProxy_GetRepresentations(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRepresentations");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMComparativeViewProxy *op = static_cast<vtkSMComparativeViewProxy *>(vp);

  int temp0;
  int temp1;
  vtkCollection *temp2 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetVTKObject(temp2, "vtkCollection"))
    {
    if (ap.IsBound())
      {
      op->GetRepresentations(temp0, temp1, temp2);
      }
    else
      {
      op->vtkSMComparativeViewProxy::GetRepresentations(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMComparativeViewProxy_GetRootView(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRootView");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMComparativeViewProxy *op = static_cast<vtkSMComparativeViewProxy *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkSMViewProxy *tempr = (ap.IsBound() ?
      op->GetRootView() :
      op->vtkSMComparativeViewProxy::GetRootView());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMComparativeViewProxy_MarkDirty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MarkDirty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMComparativeViewProxy *op = static_cast<vtkSMComparativeViewProxy *>(vp);

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
      op->vtkSMComparativeViewProxy::MarkDirty(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMComparativeViewProxy_GetRepresentationType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRepresentationType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMComparativeViewProxy *op = static_cast<vtkSMComparativeViewProxy *>(vp);

  vtkSMSourceProxy *temp0 = NULL;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkSMSourceProxy") &&
      ap.GetValue(temp1))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetRepresentationType(temp0, temp1) :
      op->vtkSMComparativeViewProxy::GetRepresentationType(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMComparativeViewProxy_GetRenderWindow(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRenderWindow");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMComparativeViewProxy *op = static_cast<vtkSMComparativeViewProxy *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkRenderWindow *tempr = (ap.IsBound() ?
      op->GetRenderWindow() :
      op->vtkSMComparativeViewProxy::GetRenderWindow());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkSMComparativeViewProxy_Methods[] = {
  {(char*)"GetClassName", PyvtkSMComparativeViewProxy_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkSMComparativeViewProxy_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkSMComparativeViewProxy_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkSMComparativeViewProxy\nC++: vtkSMComparativeViewProxy *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkSMComparativeViewProxy_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkSMComparativeViewProxy\nC++: vtkSMComparativeViewProxy *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"Update", PyvtkSMComparativeViewProxy_Update, METH_VARARGS,
   (char*)"V.Update()\nC++: virtual void Update()\n\nUpdates the data pipelines for all visible representations.\n"},
  {(char*)"GetViews", PyvtkSMComparativeViewProxy_GetViews, METH_VARARGS,
   (char*)"V.GetViews(vtkCollection)\nC++: void GetViews(vtkCollection *collection)\n\nGet all the internal views. The views should only be used to be\nlayed out by the GUI. It's not recommended to directly change the\nproperties of the views.\n"},
  {(char*)"GetRepresentationsForView", PyvtkSMComparativeViewProxy_GetRepresentationsForView, METH_VARARGS,
   (char*)"V.GetRepresentationsForView(vtkSMViewProxy, vtkCollection)\nC++: void GetRepresentationsForView(vtkSMViewProxy *,\n    vtkCollection *)\n\nGet all internal vtkSMRepresentations for a given view.  If the\ngiven view is not managed by this comparative view it will be\nignored.  The representations should only be used by the GUI for\ncreating representation clones.  It is not recommended to\ndirectly change the properties of the returned representations.\n"},
  {(char*)"GetRepresentations", PyvtkSMComparativeViewProxy_GetRepresentations, METH_VARARGS,
   (char*)"V.GetRepresentations(int, int, vtkCollection)\nC++: void GetRepresentations(int x, int y, vtkCollection *)\n\nGet all internal vtkSMRepresentations for a given view.  If the\ngiven view is not managed by this comparative view it will be\nignored.  The representations should only be used by the GUI for\ncreating representation clones.  It is not recommended to\ndirectly change the properties of the returned representations.\n"},
  {(char*)"GetRootView", PyvtkSMComparativeViewProxy_GetRootView, METH_VARARGS,
   (char*)"V.GetRootView() -> vtkSMViewProxy\nC++: vtkSMViewProxy *GetRootView()\n\nReturns the root view proxy.\n"},
  {(char*)"MarkDirty", PyvtkSMComparativeViewProxy_MarkDirty, METH_VARARGS,
   (char*)"V.MarkDirty(vtkSMProxy)\nC++: virtual void MarkDirty(vtkSMProxy *modifiedProxy)\n\nDirty means this algorithm will execute during next update. This\nall marks all consumers as dirty.\n"},
  {(char*)"GetRepresentationType", PyvtkSMComparativeViewProxy_GetRepresentationType, METH_VARARGS,
   (char*)"V.GetRepresentationType(vtkSMSourceProxy, int) -> string\nC++: virtual const char *GetRepresentationType(\n    vtkSMSourceProxy *producer, int outputPort)\n\nOverridden to forward the call to the internal root view proxy.\n"},
  {(char*)"GetRenderWindow", PyvtkSMComparativeViewProxy_GetRenderWindow, METH_VARARGS,
   (char*)"V.GetRenderWindow() -> vtkRenderWindow\nC++: virtual vtkRenderWindow *GetRenderWindow()\n\nReturns the render-window used by the root view, if any.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkSMComparativeViewProxy_StaticNew()
{
  return vtkSMComparativeViewProxy::New();
}

PyObject *PyVTKClass_vtkSMComparativeViewProxyNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkSMComparativeViewProxy_StaticNew,
    PyvtkSMComparativeViewProxy_Methods,
    "vtkSMComparativeViewProxy", modulename,
    NULL, NULL,
    PyvtkSMComparativeViewProxy_Doc(),
    PyVTKClass_vtkSMViewProxyNew(modulename));
  return cls;
}

const char **PyvtkSMComparativeViewProxy_Doc()
{
  static const char *docstring[] = {
    "vtkSMComparativeViewProxy - view for comparative visualization/\n\n",
    "Superclass: vtkSMViewProxy\n\n",
    "vtkSMComparativeViewProxy is the view used to generate/view\ncomparative visualizations/film-strips. vtkSMComparativeViewProxy\nworks together with vtkPVComparativeView -- the vtk-object for which\nthis represents the proxy. vtkPVComparativeView is a client-side VTK\nobject which literally uses the view and representation proxies to\nsimulate the comparative view. Refer to vtkPVComparativeView for\ndeta",
    "ils.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkSMComparativeViewProxy(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkSMComparativeViewProxyNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkSMComparativeViewProxy", o) != 0)
    {
    Py_DECREF(o);
    }

}

