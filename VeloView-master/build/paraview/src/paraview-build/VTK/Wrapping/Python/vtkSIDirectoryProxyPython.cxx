// python wrapper for vtkSIDirectoryProxy
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkSIDirectoryProxy.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkSIDirectoryProxy(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkSIDirectoryProxyNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkSIProxyNew
extern "C" { PyObject *PyVTKClass_vtkSIProxyNew(const char *); }
#define DECLARED_PyVTKClass_vtkSIProxyNew
#endif

static const char **PyvtkSIDirectoryProxy_Doc();


static PyObject *
PyvtkSIDirectoryProxy_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSIDirectoryProxy *op = static_cast<vtkSIDirectoryProxy *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkSIDirectoryProxy::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSIDirectoryProxy_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSIDirectoryProxy *op = static_cast<vtkSIDirectoryProxy *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSIDirectoryProxy::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSIDirectoryProxy_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSIDirectoryProxy *op = static_cast<vtkSIDirectoryProxy *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkSIDirectoryProxy *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSIDirectoryProxy::NewInstance());

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
PyvtkSIDirectoryProxy_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkSIDirectoryProxy *tempr = vtkSIDirectoryProxy::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSIDirectoryProxy_Pull(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Pull");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSIDirectoryProxy *op = static_cast<vtkSIDirectoryProxy *>(vp);

  vtkSMMessage *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMMessage"))
    {
    if (ap.IsBound())
      {
      op->Pull(temp0);
      }
    else
      {
      op->vtkSIDirectoryProxy::Pull(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkSIDirectoryProxy_Methods[] = {
  {(char*)"GetClassName", PyvtkSIDirectoryProxy_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkSIDirectoryProxy_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkSIDirectoryProxy_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkSIDirectoryProxy\nC++: vtkSIDirectoryProxy *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkSIDirectoryProxy_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkSIDirectoryProxy\nC++: vtkSIDirectoryProxy *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"Pull", PyvtkSIDirectoryProxy_Pull, METH_VARARGS,
   (char*)"V.Pull(vtkSMMessage)\nC++: virtual void Pull(vtkSMMessage *msg)\n\nPull the current state of the underneath implementation\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkSIDirectoryProxy_StaticNew()
{
  return vtkSIDirectoryProxy::New();
}

PyObject *PyVTKClass_vtkSIDirectoryProxyNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkSIDirectoryProxy_StaticNew,
    PyvtkSIDirectoryProxy_Methods,
    "vtkSIDirectoryProxy", modulename,
    NULL, NULL,
    PyvtkSIDirectoryProxy_Doc(),
    PyVTKClass_vtkSIProxyNew(modulename));
  return cls;
}

const char **PyvtkSIDirectoryProxy_Doc()
{
  static const char *docstring[] = {
    "vtkSIDirectoryProxy\n\n",
    "Superclass: vtkSIProxy\n\n",
    "vtkSIDirectoryProxy is the server-implementation for a vtkSMDirectory\nwhich will customly handle server file listing for the pull request\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkSIDirectoryProxy(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkSIDirectoryProxyNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkSIDirectoryProxy", o) != 0)
    {
    Py_DECREF(o);
    }

}

