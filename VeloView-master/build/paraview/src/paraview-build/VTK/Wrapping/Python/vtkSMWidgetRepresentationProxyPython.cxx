// python wrapper for vtkSMWidgetRepresentationProxy
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkSMWidgetRepresentationProxy.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkSMWidgetRepresentationProxy(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkSMWidgetRepresentationProxyNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkSMProxyNew
extern "C" { PyObject *PyVTKClass_vtkSMProxyNew(const char *); }
#define DECLARED_PyVTKClass_vtkSMProxyNew
#endif

static const char **PyvtkSMWidgetRepresentationProxy_Doc();


static PyObject *
PyvtkSMWidgetRepresentationProxy_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMWidgetRepresentationProxy *op = static_cast<vtkSMWidgetRepresentationProxy *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkSMWidgetRepresentationProxy::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMWidgetRepresentationProxy_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMWidgetRepresentationProxy *op = static_cast<vtkSMWidgetRepresentationProxy *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSMWidgetRepresentationProxy::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMWidgetRepresentationProxy_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMWidgetRepresentationProxy *op = static_cast<vtkSMWidgetRepresentationProxy *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkSMWidgetRepresentationProxy *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSMWidgetRepresentationProxy::NewInstance());

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
PyvtkSMWidgetRepresentationProxy_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkSMWidgetRepresentationProxy *tempr = vtkSMWidgetRepresentationProxy::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMWidgetRepresentationProxy_OnStartInteraction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnStartInteraction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMWidgetRepresentationProxy *op = static_cast<vtkSMWidgetRepresentationProxy *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->OnStartInteraction();
      }
    else
      {
      op->vtkSMWidgetRepresentationProxy::OnStartInteraction();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMWidgetRepresentationProxy_OnEndInteraction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnEndInteraction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMWidgetRepresentationProxy *op = static_cast<vtkSMWidgetRepresentationProxy *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->OnEndInteraction();
      }
    else
      {
      op->vtkSMWidgetRepresentationProxy::OnEndInteraction();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMWidgetRepresentationProxy_OnInteraction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnInteraction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMWidgetRepresentationProxy *op = static_cast<vtkSMWidgetRepresentationProxy *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->OnInteraction();
      }
    else
      {
      op->vtkSMWidgetRepresentationProxy::OnInteraction();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkSMWidgetRepresentationProxy_Methods[] = {
  {(char*)"GetClassName", PyvtkSMWidgetRepresentationProxy_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkSMWidgetRepresentationProxy_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkSMWidgetRepresentationProxy_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkSMWidgetRepresentationProxy\nC++: vtkSMWidgetRepresentationProxy *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkSMWidgetRepresentationProxy_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkSMWidgetRepresentationProxy\nC++: vtkSMWidgetRepresentationProxy *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"OnStartInteraction", PyvtkSMWidgetRepresentationProxy_OnStartInteraction, METH_VARARGS,
   (char*)"V.OnStartInteraction()\nC++: virtual void OnStartInteraction()\n\nThese method forward the representation state of the client side\nwidget representation to the server.\n"},
  {(char*)"OnEndInteraction", PyvtkSMWidgetRepresentationProxy_OnEndInteraction, METH_VARARGS,
   (char*)"V.OnEndInteraction()\nC++: virtual void OnEndInteraction()\n\nThese method forward the representation state of the client side\nwidget representation to the server.\n"},
  {(char*)"OnInteraction", PyvtkSMWidgetRepresentationProxy_OnInteraction, METH_VARARGS,
   (char*)"V.OnInteraction()\nC++: virtual void OnInteraction()\n\nThese method forward the representation state of the client side\nwidget representation to the server.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkSMWidgetRepresentationProxy_StaticNew()
{
  return vtkSMWidgetRepresentationProxy::New();
}

PyObject *PyVTKClass_vtkSMWidgetRepresentationProxyNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkSMWidgetRepresentationProxy_StaticNew,
    PyvtkSMWidgetRepresentationProxy_Methods,
    "vtkSMWidgetRepresentationProxy", modulename,
    NULL, NULL,
    PyvtkSMWidgetRepresentationProxy_Doc(),
    PyVTKClass_vtkSMProxyNew(modulename));
  return cls;
}

const char **PyvtkSMWidgetRepresentationProxy_Doc()
{
  static const char *docstring[] = {
    "vtkSMWidgetRepresentationProxy - proxy for a widget representation\n\n",
    "Superclass: vtkSMProxy\n\n",
    "vtkSMWidgetRepresentationProxy is a specialized proxy that represents\nVTK widget representation. It adds the capability of syncing the\nappearance of server-side representation to the client-side\nrepresentation\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkSMWidgetRepresentationProxy(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkSMWidgetRepresentationProxyNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkSMWidgetRepresentationProxy", o) != 0)
    {
    Py_DECREF(o);
    }

}

