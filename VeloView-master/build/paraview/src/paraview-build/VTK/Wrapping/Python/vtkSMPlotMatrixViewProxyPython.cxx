// python wrapper for vtkSMPlotMatrixViewProxy
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkSMPlotMatrixViewProxy.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkSMPlotMatrixViewProxy(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkSMPlotMatrixViewProxyNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkSMContextViewProxyNew
extern "C" { PyObject *PyVTKClass_vtkSMContextViewProxyNew(const char *); }
#define DECLARED_PyVTKClass_vtkSMContextViewProxyNew
#endif

static const char **PyvtkSMPlotMatrixViewProxy_Doc();


static PyObject *
PyvtkSMPlotMatrixViewProxy_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMPlotMatrixViewProxy *op = static_cast<vtkSMPlotMatrixViewProxy *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkSMPlotMatrixViewProxy::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMPlotMatrixViewProxy_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMPlotMatrixViewProxy *op = static_cast<vtkSMPlotMatrixViewProxy *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSMPlotMatrixViewProxy::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMPlotMatrixViewProxy_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMPlotMatrixViewProxy *op = static_cast<vtkSMPlotMatrixViewProxy *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkSMPlotMatrixViewProxy *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSMPlotMatrixViewProxy::NewInstance());

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
PyvtkSMPlotMatrixViewProxy_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkSMPlotMatrixViewProxy *tempr = vtkSMPlotMatrixViewProxy::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMPlotMatrixViewProxy_GetContextItem(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetContextItem");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMPlotMatrixViewProxy *op = static_cast<vtkSMPlotMatrixViewProxy *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkAbstractContextItem *tempr = (ap.IsBound() ?
      op->GetContextItem() :
      op->vtkSMPlotMatrixViewProxy::GetContextItem());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkSMPlotMatrixViewProxy_Methods[] = {
  {(char*)"GetClassName", PyvtkSMPlotMatrixViewProxy_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkSMPlotMatrixViewProxy_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkSMPlotMatrixViewProxy_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkSMPlotMatrixViewProxy\nC++: vtkSMPlotMatrixViewProxy *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkSMPlotMatrixViewProxy_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkSMPlotMatrixViewProxy\nC++: vtkSMPlotMatrixViewProxy *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetContextItem", PyvtkSMPlotMatrixViewProxy_GetContextItem, METH_VARARGS,
   (char*)"V.GetContextItem() -> vtkAbstractContextItem\nC++: virtual vtkAbstractContextItem *GetContextItem()\n\nProvides access to the vtk plot matrix.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkSMPlotMatrixViewProxy_StaticNew()
{
  return vtkSMPlotMatrixViewProxy::New();
}

PyObject *PyVTKClass_vtkSMPlotMatrixViewProxyNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkSMPlotMatrixViewProxy_StaticNew,
    PyvtkSMPlotMatrixViewProxy_Methods,
    "vtkSMPlotMatrixViewProxy", modulename,
    NULL, NULL,
    PyvtkSMPlotMatrixViewProxy_Doc(),
    PyVTKClass_vtkSMContextViewProxyNew(modulename));
  return cls;
}

const char **PyvtkSMPlotMatrixViewProxy_Doc()
{
  static const char *docstring[] = {
    "vtkSMPlotMatrixViewProxy - Proxy class for plot matrix view\n\n",
    "Superclass: vtkSMContextViewProxy\n\n",
    "\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkSMPlotMatrixViewProxy(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkSMPlotMatrixViewProxyNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkSMPlotMatrixViewProxy", o) != 0)
    {
    Py_DECREF(o);
    }

}

