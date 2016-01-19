// python wrapper for vtkSMWriterProxy
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkSMWriterProxy.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkSMWriterProxy(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkSMWriterProxyNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkSMSourceProxyNew
extern "C" { PyObject *PyVTKClass_vtkSMSourceProxyNew(const char *); }
#define DECLARED_PyVTKClass_vtkSMSourceProxyNew
#endif

static const char **PyvtkSMWriterProxy_Doc();


static PyObject *
PyvtkSMWriterProxy_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMWriterProxy *op = static_cast<vtkSMWriterProxy *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkSMWriterProxy::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMWriterProxy_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMWriterProxy *op = static_cast<vtkSMWriterProxy *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSMWriterProxy::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMWriterProxy_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMWriterProxy *op = static_cast<vtkSMWriterProxy *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkSMWriterProxy *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSMWriterProxy::NewInstance());

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
PyvtkSMWriterProxy_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkSMWriterProxy *tempr = vtkSMWriterProxy::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMWriterProxy_UpdatePipeline_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdatePipeline");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMWriterProxy *op = static_cast<vtkSMWriterProxy *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->UpdatePipeline();
      }
    else
      {
      op->vtkSMWriterProxy::UpdatePipeline();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkSMWriterProxy_UpdatePipeline_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdatePipeline");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMWriterProxy *op = static_cast<vtkSMWriterProxy *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->UpdatePipeline(temp0);
      }
    else
      {
      op->vtkSMWriterProxy::UpdatePipeline(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkSMWriterProxy_UpdatePipeline(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 0:
      return PyvtkSMWriterProxy_UpdatePipeline_s1(self, args);
    case 1:
      return PyvtkSMWriterProxy_UpdatePipeline_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "UpdatePipeline");
  return NULL;
}



static PyObject *
PyvtkSMWriterProxy_SetSupportsParallel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSupportsParallel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMWriterProxy *op = static_cast<vtkSMWriterProxy *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetSupportsParallel(temp0);
      }
    else
      {
      op->vtkSMWriterProxy::SetSupportsParallel(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMWriterProxy_GetSupportsParallel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSupportsParallel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMWriterProxy *op = static_cast<vtkSMWriterProxy *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetSupportsParallel() :
      op->vtkSMWriterProxy::GetSupportsParallel());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMWriterProxy_GetParallelOnly(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetParallelOnly");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMWriterProxy *op = static_cast<vtkSMWriterProxy *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetParallelOnly() :
      op->vtkSMWriterProxy::GetParallelOnly());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMWriterProxy_SetParallelOnly(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetParallelOnly");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMWriterProxy *op = static_cast<vtkSMWriterProxy *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetParallelOnly(temp0);
      }
    else
      {
      op->vtkSMWriterProxy::SetParallelOnly(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkSMWriterProxy_Methods[] = {
  {(char*)"GetClassName", PyvtkSMWriterProxy_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkSMWriterProxy_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkSMWriterProxy_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkSMWriterProxy\nC++: vtkSMWriterProxy *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkSMWriterProxy_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkSMWriterProxy\nC++: vtkSMWriterProxy *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"UpdatePipeline", PyvtkSMWriterProxy_UpdatePipeline, METH_VARARGS,
   (char*)"V.UpdatePipeline()\nC++: virtual void UpdatePipeline()\nV.UpdatePipeline(float)\nC++: virtual void UpdatePipeline(double time)\n\nUpdates the pipeline and writes the file(s). Must call\nUpdateVTKObjects() before calling UpdatePipeline() to ensure that\nthe filename etc. are set correctly.\n"},
  {(char*)"SetSupportsParallel", PyvtkSMWriterProxy_SetSupportsParallel, METH_VARARGS,
   (char*)"V.SetSupportsParallel(int)\nC++: void SetSupportsParallel(int a)\n\nFlag indicating if the writer supports writing in parallel. Not\nset by default.\n"},
  {(char*)"GetSupportsParallel", PyvtkSMWriterProxy_GetSupportsParallel, METH_VARARGS,
   (char*)"V.GetSupportsParallel() -> int\nC++: int GetSupportsParallel()\n\nFlag indicating if the writer supports writing in parallel. Not\nset by default.\n"},
  {(char*)"GetParallelOnly", PyvtkSMWriterProxy_GetParallelOnly, METH_VARARGS,
   (char*)"V.GetParallelOnly() -> int\nC++: int GetParallelOnly()\n\nFlag indicating if the writer works only in parallel. If this is\nset, SupportsParallel is always true.\n"},
  {(char*)"SetParallelOnly", PyvtkSMWriterProxy_SetParallelOnly, METH_VARARGS,
   (char*)"V.SetParallelOnly(int)\nC++: void SetParallelOnly(int a)\n\nFlag indicating if the writer works only in parallel. If this is\nset, SupportsParallel is always true.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkSMWriterProxy_StaticNew()
{
  return vtkSMWriterProxy::New();
}

PyObject *PyVTKClass_vtkSMWriterProxyNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkSMWriterProxy_StaticNew,
    PyvtkSMWriterProxy_Methods,
    "vtkSMWriterProxy", modulename,
    NULL, NULL,
    PyvtkSMWriterProxy_Doc(),
    PyVTKClass_vtkSMSourceProxyNew(modulename));
  return cls;
}

const char **PyvtkSMWriterProxy_Doc()
{
  static const char *docstring[] = {
    "vtkSMWriterProxy - proxy for a VTK writer on a server\n\n",
    "Superclass: vtkSMSourceProxy\n\n",
    "vtkSMWriterProxy manages VTK writers that are created on a server\nusing the proxy pattern. vtkSMWriterProxy also provides support for\nmeta-writers. i.e. if the proxy has a subproxy name \"Writer\" that\nthis proxy represents a meta-writer which uses the given writer as\nthe writer to write each component.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkSMWriterProxy(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkSMWriterProxyNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkSMWriterProxy", o) != 0)
    {
    Py_DECREF(o);
    }

}

