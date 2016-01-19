// python wrapper for vtkSIPVRepresentationProxy
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkSIPVRepresentationProxy.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkSIPVRepresentationProxy(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkSIPVRepresentationProxyNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkSIProxyNew
extern "C" { PyObject *PyVTKClass_vtkSIProxyNew(const char *); }
#define DECLARED_PyVTKClass_vtkSIProxyNew
#endif

static const char **PyvtkSIPVRepresentationProxy_Doc();


static PyObject *
PyvtkSIPVRepresentationProxy_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSIPVRepresentationProxy *op = static_cast<vtkSIPVRepresentationProxy *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkSIPVRepresentationProxy::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSIPVRepresentationProxy_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSIPVRepresentationProxy *op = static_cast<vtkSIPVRepresentationProxy *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSIPVRepresentationProxy::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSIPVRepresentationProxy_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSIPVRepresentationProxy *op = static_cast<vtkSIPVRepresentationProxy *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkSIPVRepresentationProxy *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSIPVRepresentationProxy::NewInstance());

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
PyvtkSIPVRepresentationProxy_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkSIPVRepresentationProxy *tempr = vtkSIPVRepresentationProxy::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSIPVRepresentationProxy_AboutToDelete(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AboutToDelete");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSIPVRepresentationProxy *op = static_cast<vtkSIPVRepresentationProxy *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->AboutToDelete();
      }
    else
      {
      op->vtkSIPVRepresentationProxy::AboutToDelete();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkSIPVRepresentationProxy_Methods[] = {
  {(char*)"GetClassName", PyvtkSIPVRepresentationProxy_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkSIPVRepresentationProxy_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkSIPVRepresentationProxy_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkSIPVRepresentationProxy\nC++: vtkSIPVRepresentationProxy *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkSIPVRepresentationProxy_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkSIPVRepresentationProxy\nC++: vtkSIPVRepresentationProxy *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"AboutToDelete", PyvtkSIPVRepresentationProxy_AboutToDelete, METH_VARARGS,
   (char*)"V.AboutToDelete()\nC++: virtual void AboutToDelete()\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkSIPVRepresentationProxy_StaticNew()
{
  return vtkSIPVRepresentationProxy::New();
}

PyObject *PyVTKClass_vtkSIPVRepresentationProxyNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkSIPVRepresentationProxy_StaticNew,
    PyvtkSIPVRepresentationProxy_Methods,
    "vtkSIPVRepresentationProxy", modulename,
    NULL, NULL,
    PyvtkSIPVRepresentationProxy_Doc(),
    PyVTKClass_vtkSIProxyNew(modulename));
  return cls;
}

const char **PyvtkSIPVRepresentationProxy_Doc()
{
  static const char *docstring[] = {
    "vtkSIPVRepresentationProxy\n\n",
    "Superclass: vtkSIProxy\n\n",
    "vtkSIPVRepresentationProxy is the helper for\nvtkSMPVRepresentationProxy.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkSIPVRepresentationProxy(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkSIPVRepresentationProxyNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkSIPVRepresentationProxy", o) != 0)
    {
    Py_DECREF(o);
    }

}

