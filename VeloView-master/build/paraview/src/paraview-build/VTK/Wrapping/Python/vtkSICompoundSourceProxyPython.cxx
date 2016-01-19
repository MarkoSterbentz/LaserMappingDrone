// python wrapper for vtkSICompoundSourceProxy
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkSICompoundSourceProxy.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkSICompoundSourceProxy(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkSICompoundSourceProxyNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkSISourceProxyNew
extern "C" { PyObject *PyVTKClass_vtkSISourceProxyNew(const char *); }
#define DECLARED_PyVTKClass_vtkSISourceProxyNew
#endif

static const char **PyvtkSICompoundSourceProxy_Doc();


static PyObject *
PyvtkSICompoundSourceProxy_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSICompoundSourceProxy *op = static_cast<vtkSICompoundSourceProxy *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkSICompoundSourceProxy::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSICompoundSourceProxy_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSICompoundSourceProxy *op = static_cast<vtkSICompoundSourceProxy *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSICompoundSourceProxy::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSICompoundSourceProxy_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSICompoundSourceProxy *op = static_cast<vtkSICompoundSourceProxy *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkSICompoundSourceProxy *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSICompoundSourceProxy::NewInstance());

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
PyvtkSICompoundSourceProxy_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkSICompoundSourceProxy *tempr = vtkSICompoundSourceProxy::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSICompoundSourceProxy_GetOutputPort(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputPort");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSICompoundSourceProxy *op = static_cast<vtkSICompoundSourceProxy *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkAlgorithmOutput *tempr = (ap.IsBound() ?
      op->GetOutputPort(temp0) :
      op->vtkSICompoundSourceProxy::GetOutputPort(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkSICompoundSourceProxy_Methods[] = {
  {(char*)"GetClassName", PyvtkSICompoundSourceProxy_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkSICompoundSourceProxy_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkSICompoundSourceProxy_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkSICompoundSourceProxy\nC++: vtkSICompoundSourceProxy *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkSICompoundSourceProxy_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkSICompoundSourceProxy\nC++: vtkSICompoundSourceProxy *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetOutputPort", PyvtkSICompoundSourceProxy_GetOutputPort, METH_VARARGS,
   (char*)"V.GetOutputPort(int) -> vtkAlgorithmOutput\nC++: virtual vtkAlgorithmOutput *GetOutputPort(int port)\n\nReturns the vtkAlgorithmOutput for an output port, if valid.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkSICompoundSourceProxy_StaticNew()
{
  return vtkSICompoundSourceProxy::New();
}

PyObject *PyVTKClass_vtkSICompoundSourceProxyNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkSICompoundSourceProxy_StaticNew,
    PyvtkSICompoundSourceProxy_Methods,
    "vtkSICompoundSourceProxy", modulename,
    NULL, NULL,
    PyvtkSICompoundSourceProxy_Doc(),
    PyVTKClass_vtkSISourceProxyNew(modulename));
  return cls;
}

const char **PyvtkSICompoundSourceProxy_Doc()
{
  static const char *docstring[] = {
    "vtkSICompoundSourceProxy\n\n",
    "Superclass: vtkSISourceProxy\n\n",
    "vtkSICompoundSourceProxy is the server-side helper for a\nvtkSMCompoundSourceProxy. It provides the mapping to the exposed\noutput port to the underneath internal sub-proxy.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkSICompoundSourceProxy(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkSICompoundSourceProxyNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkSICompoundSourceProxy", o) != 0)
    {
    Py_DECREF(o);
    }

}

