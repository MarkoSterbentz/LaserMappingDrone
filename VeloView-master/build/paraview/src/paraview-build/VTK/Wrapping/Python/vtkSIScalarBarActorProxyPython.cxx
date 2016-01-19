// python wrapper for vtkSIScalarBarActorProxy
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkSIScalarBarActorProxy.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkSIScalarBarActorProxy(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkSIScalarBarActorProxyNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkSIProxyNew
extern "C" { PyObject *PyVTKClass_vtkSIProxyNew(const char *); }
#define DECLARED_PyVTKClass_vtkSIProxyNew
#endif

static const char **PyvtkSIScalarBarActorProxy_Doc();


static PyObject *
PyvtkSIScalarBarActorProxy_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSIScalarBarActorProxy *op = static_cast<vtkSIScalarBarActorProxy *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkSIScalarBarActorProxy::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSIScalarBarActorProxy_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSIScalarBarActorProxy *op = static_cast<vtkSIScalarBarActorProxy *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSIScalarBarActorProxy::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSIScalarBarActorProxy_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSIScalarBarActorProxy *op = static_cast<vtkSIScalarBarActorProxy *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkSIScalarBarActorProxy *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSIScalarBarActorProxy::NewInstance());

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
PyvtkSIScalarBarActorProxy_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkSIScalarBarActorProxy *tempr = vtkSIScalarBarActorProxy::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkSIScalarBarActorProxy_Methods[] = {
  {(char*)"GetClassName", PyvtkSIScalarBarActorProxy_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkSIScalarBarActorProxy_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkSIScalarBarActorProxy_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkSIScalarBarActorProxy\nC++: vtkSIScalarBarActorProxy *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkSIScalarBarActorProxy_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkSIScalarBarActorProxy\nC++: vtkSIScalarBarActorProxy *SafeDownCast(vtkObject* o)\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkSIScalarBarActorProxy_StaticNew()
{
  return vtkSIScalarBarActorProxy::New();
}

PyObject *PyVTKClass_vtkSIScalarBarActorProxyNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkSIScalarBarActorProxy_StaticNew,
    PyvtkSIScalarBarActorProxy_Methods,
    "vtkSIScalarBarActorProxy", modulename,
    NULL, NULL,
    PyvtkSIScalarBarActorProxy_Doc(),
    PyVTKClass_vtkSIProxyNew(modulename));
  return cls;
}

const char **PyvtkSIScalarBarActorProxy_Doc()
{
  static const char *docstring[] = {
    "vtkSIScalarBarActorProxy\n\n",
    "Superclass: vtkSIProxy\n\n",
    "vtkSIScalarBarActorProxy is the server-side class used to bind\nsubproxy internally\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkSIScalarBarActorProxy(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkSIScalarBarActorProxyNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkSIScalarBarActorProxy", o) != 0)
    {
    Py_DECREF(o);
    }

}

