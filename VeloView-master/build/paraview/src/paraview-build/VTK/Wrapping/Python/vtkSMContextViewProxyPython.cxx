// python wrapper for vtkSMContextViewProxy
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkSMContextViewProxy.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkSMContextViewProxy(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkSMContextViewProxyNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkSMViewProxyNew
extern "C" { PyObject *PyVTKClass_vtkSMViewProxyNew(const char *); }
#define DECLARED_PyVTKClass_vtkSMViewProxyNew
#endif

static const char **PyvtkSMContextViewProxy_Doc();


static PyObject *
PyvtkSMContextViewProxy_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMContextViewProxy *op = static_cast<vtkSMContextViewProxy *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkSMContextViewProxy::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMContextViewProxy_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMContextViewProxy *op = static_cast<vtkSMContextViewProxy *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSMContextViewProxy::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMContextViewProxy_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMContextViewProxy *op = static_cast<vtkSMContextViewProxy *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkSMContextViewProxy *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSMContextViewProxy::NewInstance());

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
PyvtkSMContextViewProxy_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkSMContextViewProxy *tempr = vtkSMContextViewProxy::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMContextViewProxy_GetContextView(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetContextView");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMContextViewProxy *op = static_cast<vtkSMContextViewProxy *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkContextView *tempr = (ap.IsBound() ?
      op->GetContextView() :
      op->vtkSMContextViewProxy::GetContextView());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMContextViewProxy_GetContextItem(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetContextItem");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMContextViewProxy *op = static_cast<vtkSMContextViewProxy *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkAbstractContextItem *tempr = (ap.IsBound() ?
      op->GetContextItem() :
      op->vtkSMContextViewProxy::GetContextItem());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMContextViewProxy_ResetDisplay(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ResetDisplay");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMContextViewProxy *op = static_cast<vtkSMContextViewProxy *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ResetDisplay();
      }
    else
      {
      op->vtkSMContextViewProxy::ResetDisplay();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMContextViewProxy_GetRenderWindow(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRenderWindow");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMContextViewProxy *op = static_cast<vtkSMContextViewProxy *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkRenderWindow *tempr = (ap.IsBound() ?
      op->GetRenderWindow() :
      op->vtkSMContextViewProxy::GetRenderWindow());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMContextViewProxy_CanDisplayData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CanDisplayData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMContextViewProxy *op = static_cast<vtkSMContextViewProxy *>(vp);

  vtkSMSourceProxy *temp0 = NULL;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkSMSourceProxy") &&
      ap.GetValue(temp1))
    {
    bool tempr = (ap.IsBound() ?
      op->CanDisplayData(temp0, temp1) :
      op->vtkSMContextViewProxy::CanDisplayData(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMContextViewProxy_GetCurrentSelection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCurrentSelection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMContextViewProxy *op = static_cast<vtkSMContextViewProxy *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkSelection *tempr = (ap.IsBound() ?
      op->GetCurrentSelection() :
      op->vtkSMContextViewProxy::GetCurrentSelection());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkSMContextViewProxy_Methods[] = {
  {(char*)"GetClassName", PyvtkSMContextViewProxy_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkSMContextViewProxy_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkSMContextViewProxy_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkSMContextViewProxy\nC++: vtkSMContextViewProxy *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkSMContextViewProxy_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkSMContextViewProxy\nC++: vtkSMContextViewProxy *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetContextView", PyvtkSMContextViewProxy_GetContextView, METH_VARARGS,
   (char*)"V.GetContextView() -> vtkContextView\nC++: vtkContextView *GetContextView()\n\nProvides access to the vtk chart view.\n"},
  {(char*)"GetContextItem", PyvtkSMContextViewProxy_GetContextItem, METH_VARARGS,
   (char*)"V.GetContextItem() -> vtkAbstractContextItem\nC++: virtual vtkAbstractContextItem *GetContextItem()\n\nProvides access to the vtk chart.\n"},
  {(char*)"ResetDisplay", PyvtkSMContextViewProxy_ResetDisplay, METH_VARARGS,
   (char*)"V.ResetDisplay()\nC++: virtual void ResetDisplay()\n\nResets the zoom level to 100%\n"},
  {(char*)"GetRenderWindow", PyvtkSMContextViewProxy_GetRenderWindow, METH_VARARGS,
   (char*)"V.GetRenderWindow() -> vtkRenderWindow\nC++: virtual vtkRenderWindow *GetRenderWindow()\n\nReturn the render window from which offscreen rendering and\ninteractor can be accessed\n"},
  {(char*)"CanDisplayData", PyvtkSMContextViewProxy_CanDisplayData, METH_VARARGS,
   (char*)"V.CanDisplayData(vtkSMSourceProxy, int) -> bool\nC++: virtual bool CanDisplayData(vtkSMSourceProxy *producer,\n    int outputPort)\n\nOverridden to report to applications that producers producing\nnon-table datasets are only viewable if they have the \"Plottable\"\nhint. This avoid applications from inadvertently showing large\ndata in charts. CreateDefaultRepresentation() will still work\nwithout regard for this Plottable hint.\n"},
  {(char*)"GetCurrentSelection", PyvtkSMContextViewProxy_GetCurrentSelection, METH_VARARGS,
   (char*)"V.GetCurrentSelection() -> vtkSelection\nC++: vtkSelection *GetCurrentSelection()\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkSMContextViewProxy_StaticNew()
{
  return vtkSMContextViewProxy::New();
}

PyObject *PyVTKClass_vtkSMContextViewProxyNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkSMContextViewProxy_StaticNew,
    PyvtkSMContextViewProxy_Methods,
    "vtkSMContextViewProxy", modulename,
    NULL, NULL,
    PyvtkSMContextViewProxy_Doc(),
    PyVTKClass_vtkSMViewProxyNew(modulename));
  return cls;
}

const char **PyvtkSMContextViewProxy_Doc()
{
  static const char *docstring[] = {
    "vtkSMContextViewProxy - abstract base class for all Chart Views.\n\n",
    "Superclass: vtkSMViewProxy\n\n",
    "vtkSMContextViewProxy is an abstract base class for all\nvtkContextView subclasses.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkSMContextViewProxy(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkSMContextViewProxyNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkSMContextViewProxy", o) != 0)
    {
    Py_DECREF(o);
    }

}

