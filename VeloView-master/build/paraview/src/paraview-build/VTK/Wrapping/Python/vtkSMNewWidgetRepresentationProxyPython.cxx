// python wrapper for vtkSMNewWidgetRepresentationProxy
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkSMNewWidgetRepresentationProxy.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkSMNewWidgetRepresentationProxy(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkSMNewWidgetRepresentationProxyNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkSMProxyNew
extern "C" { PyObject *PyVTKClass_vtkSMProxyNew(const char *); }
#define DECLARED_PyVTKClass_vtkSMProxyNew
#endif

static const char **PyvtkSMNewWidgetRepresentationProxy_Doc();


static PyObject *
PyvtkSMNewWidgetRepresentationProxy_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMNewWidgetRepresentationProxy *op = static_cast<vtkSMNewWidgetRepresentationProxy *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkSMNewWidgetRepresentationProxy::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMNewWidgetRepresentationProxy_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMNewWidgetRepresentationProxy *op = static_cast<vtkSMNewWidgetRepresentationProxy *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSMNewWidgetRepresentationProxy::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMNewWidgetRepresentationProxy_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMNewWidgetRepresentationProxy *op = static_cast<vtkSMNewWidgetRepresentationProxy *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkSMNewWidgetRepresentationProxy *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSMNewWidgetRepresentationProxy::NewInstance());

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
PyvtkSMNewWidgetRepresentationProxy_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkSMNewWidgetRepresentationProxy *tempr = vtkSMNewWidgetRepresentationProxy::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMNewWidgetRepresentationProxy_GetWidget(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWidget");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMNewWidgetRepresentationProxy *op = static_cast<vtkSMNewWidgetRepresentationProxy *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkAbstractWidget *tempr = (ap.IsBound() ?
      op->GetWidget() :
      op->vtkSMNewWidgetRepresentationProxy::GetWidget());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMNewWidgetRepresentationProxy_GetRepresentationProxy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRepresentationProxy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMNewWidgetRepresentationProxy *op = static_cast<vtkSMNewWidgetRepresentationProxy *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkSMProxy *tempr = (ap.IsBound() ?
      op->GetRepresentationProxy() :
      op->vtkSMNewWidgetRepresentationProxy::GetRepresentationProxy());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkSMNewWidgetRepresentationProxy_Methods[] = {
  {(char*)"GetClassName", PyvtkSMNewWidgetRepresentationProxy_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkSMNewWidgetRepresentationProxy_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkSMNewWidgetRepresentationProxy_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkSMNewWidgetRepresentationProxy\nC++: vtkSMNewWidgetRepresentationProxy *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkSMNewWidgetRepresentationProxy_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkSMNewWidgetRepresentationProxy\nC++: vtkSMNewWidgetRepresentationProxy *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetWidget", PyvtkSMNewWidgetRepresentationProxy_GetWidget, METH_VARARGS,
   (char*)"V.GetWidget() -> vtkAbstractWidget\nC++: vtkAbstractWidget *GetWidget()\n\nGet the widget for the representation.\n"},
  {(char*)"GetRepresentationProxy", PyvtkSMNewWidgetRepresentationProxy_GetRepresentationProxy, METH_VARARGS,
   (char*)"V.GetRepresentationProxy() -> vtkSMProxy\nC++: vtkSMProxy *GetRepresentationProxy()\n\nGet Representation Proxy.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkSMNewWidgetRepresentationProxy_StaticNew()
{
  return vtkSMNewWidgetRepresentationProxy::New();
}

PyObject *PyVTKClass_vtkSMNewWidgetRepresentationProxyNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkSMNewWidgetRepresentationProxy_StaticNew,
    PyvtkSMNewWidgetRepresentationProxy_Methods,
    "vtkSMNewWidgetRepresentationProxy", modulename,
    NULL, NULL,
    PyvtkSMNewWidgetRepresentationProxy_Doc(),
    PyVTKClass_vtkSMProxyNew(modulename));
  return cls;
}

const char **PyvtkSMNewWidgetRepresentationProxy_Doc()
{
  static const char *docstring[] = {
    "vtkSMNewWidgetRepresentationProxy - representation that can be used to\n\n",
    "Superclass: vtkSMProxy\n\n",
    "vtkSMNewWidgetRepresentationProxy is a concrete representation that\ncan be used to render the surface in a vtkSMRenderViewProxy. It uses\na vtkPVGeometryFilter to convert non-polydata input to polydata that\ncan be rendered. It supports rendering the data as a surface,\nwireframe or points.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkSMNewWidgetRepresentationProxy(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkSMNewWidgetRepresentationProxyNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkSMNewWidgetRepresentationProxy", o) != 0)
    {
    Py_DECREF(o);
    }

}

