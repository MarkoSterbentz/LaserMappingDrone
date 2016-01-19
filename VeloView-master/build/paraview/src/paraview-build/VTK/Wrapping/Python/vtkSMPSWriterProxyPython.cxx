// python wrapper for vtkSMPSWriterProxy
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkSMPSWriterProxy.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkSMPSWriterProxy(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkSMPSWriterProxyNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkSMPWriterProxyNew
extern "C" { PyObject *PyVTKClass_vtkSMPWriterProxyNew(const char *); }
#define DECLARED_PyVTKClass_vtkSMPWriterProxyNew
#endif

static const char **PyvtkSMPSWriterProxy_Doc();


static PyObject *
PyvtkSMPSWriterProxy_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMPSWriterProxy *op = static_cast<vtkSMPSWriterProxy *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkSMPSWriterProxy::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMPSWriterProxy_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMPSWriterProxy *op = static_cast<vtkSMPSWriterProxy *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSMPSWriterProxy::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMPSWriterProxy_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMPSWriterProxy *op = static_cast<vtkSMPSWriterProxy *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkSMPSWriterProxy *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSMPSWriterProxy::NewInstance());

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
PyvtkSMPSWriterProxy_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkSMPSWriterProxy *tempr = vtkSMPSWriterProxy::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkSMPSWriterProxy_Methods[] = {
  {(char*)"GetClassName", PyvtkSMPSWriterProxy_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkSMPSWriterProxy_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkSMPSWriterProxy_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkSMPSWriterProxy\nC++: vtkSMPSWriterProxy *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkSMPSWriterProxy_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkSMPSWriterProxy\nC++: vtkSMPSWriterProxy *SafeDownCast(vtkObject* o)\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkSMPSWriterProxy_StaticNew()
{
  return vtkSMPSWriterProxy::New();
}

PyObject *PyVTKClass_vtkSMPSWriterProxyNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkSMPSWriterProxy_StaticNew,
    PyvtkSMPSWriterProxy_Methods,
    "vtkSMPSWriterProxy", modulename,
    NULL, NULL,
    PyvtkSMPSWriterProxy_Doc(),
    PyVTKClass_vtkSMPWriterProxyNew(modulename));
  return cls;
}

const char **PyvtkSMPSWriterProxy_Doc()
{
  static const char *docstring[] = {
    "vtkSMPSWriterProxy - proxy for the parallel-serial writer.\n\n",
    "Superclass: vtkSMPWriterProxy\n\n",
    "vtkSMPSWriterProxy is the proxy for all vtkParallelSerialWriter\nobjects. It is responsible of setting the internal writer that is\nconfigured as a sub-proxy.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkSMPSWriterProxy(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkSMPSWriterProxyNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkSMPSWriterProxy", o) != 0)
    {
    Py_DECREF(o);
    }

}

