// python wrapper for vtkSISourceProxy
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkSISourceProxy.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkSISourceProxy(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkSISourceProxyNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkSIProxyNew
extern "C" { PyObject *PyVTKClass_vtkSIProxyNew(const char *); }
#define DECLARED_PyVTKClass_vtkSIProxyNew
#endif

static const char **PyvtkSISourceProxy_Doc();


static PyObject *
PyvtkSISourceProxy_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSISourceProxy *op = static_cast<vtkSISourceProxy *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkSISourceProxy::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSISourceProxy_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSISourceProxy *op = static_cast<vtkSISourceProxy *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSISourceProxy::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSISourceProxy_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSISourceProxy *op = static_cast<vtkSISourceProxy *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkSISourceProxy *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSISourceProxy::NewInstance());

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
PyvtkSISourceProxy_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkSISourceProxy *tempr = vtkSISourceProxy::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSISourceProxy_GetOutputPort(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputPort");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSISourceProxy *op = static_cast<vtkSISourceProxy *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkAlgorithmOutput *tempr = (ap.IsBound() ?
      op->GetOutputPort(temp0) :
      op->vtkSISourceProxy::GetOutputPort(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSISourceProxy_UpdatePipelineInformation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdatePipelineInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSISourceProxy *op = static_cast<vtkSISourceProxy *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->UpdatePipelineInformation();
      }
    else
      {
      op->vtkSISourceProxy::UpdatePipelineInformation();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSISourceProxy_UpdatePipeline(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdatePipeline");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSISourceProxy *op = static_cast<vtkSISourceProxy *>(vp);

  int temp0;
  double temp1;
  bool temp2 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      op->UpdatePipeline(temp0, temp1, temp2);
      }
    else
      {
      op->vtkSISourceProxy::UpdatePipeline(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSISourceProxy_SetupSelectionProxy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetupSelectionProxy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSISourceProxy *op = static_cast<vtkSISourceProxy *>(vp);

  int temp0;
  vtkSIProxy *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkSIProxy"))
    {
    if (ap.IsBound())
      {
      op->SetupSelectionProxy(temp0, temp1);
      }
    else
      {
      op->vtkSISourceProxy::SetupSelectionProxy(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSISourceProxy_SetDisablePipelineExecution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDisablePipelineExecution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSISourceProxy *op = static_cast<vtkSISourceProxy *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetDisablePipelineExecution(temp0);
      }
    else
      {
      op->vtkSISourceProxy::SetDisablePipelineExecution(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkSISourceProxy_Methods[] = {
  {(char*)"GetClassName", PyvtkSISourceProxy_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkSISourceProxy_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkSISourceProxy_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkSISourceProxy\nC++: vtkSISourceProxy *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkSISourceProxy_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkSISourceProxy\nC++: vtkSISourceProxy *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetOutputPort", PyvtkSISourceProxy_GetOutputPort, METH_VARARGS,
   (char*)"V.GetOutputPort(int) -> vtkAlgorithmOutput\nC++: virtual vtkAlgorithmOutput *GetOutputPort(int port)\n\nReturns the vtkAlgorithmOutput for an output port, if valid.\n"},
  {(char*)"UpdatePipelineInformation", PyvtkSISourceProxy_UpdatePipelineInformation, METH_VARARGS,
   (char*)"V.UpdatePipelineInformation()\nC++: virtual void UpdatePipelineInformation()\n\nTriggers UpdateInformation() on vtkObject if possible.\n"},
  {(char*)"UpdatePipeline", PyvtkSISourceProxy_UpdatePipeline, METH_VARARGS,
   (char*)"V.UpdatePipeline(int, float, bool)\nC++: virtual void UpdatePipeline(int port, double time,\n    bool doTime)\n\nTriggers UpdatePipeline(). Called from client.\n"},
  {(char*)"SetupSelectionProxy", PyvtkSISourceProxy_SetupSelectionProxy, METH_VARARGS,
   (char*)"V.SetupSelectionProxy(int, vtkSIProxy)\nC++: virtual void SetupSelectionProxy(int port,\n    vtkSIProxy *extractSelection)\n\nsetups extract selection proxies.\n"},
  {(char*)"SetDisablePipelineExecution", PyvtkSISourceProxy_SetDisablePipelineExecution, METH_VARARGS,
   (char*)"V.SetDisablePipelineExecution(bool)\nC++: virtual void SetDisablePipelineExecution(bool value)\n\nAllow to shut down pipeline execution. This is particulary useful\nfor a Catalyst session that does not contains any real data.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkSISourceProxy_StaticNew()
{
  return vtkSISourceProxy::New();
}

PyObject *PyVTKClass_vtkSISourceProxyNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkSISourceProxy_StaticNew,
    PyvtkSISourceProxy_Methods,
    "vtkSISourceProxy", modulename,
    NULL, NULL,
    PyvtkSISourceProxy_Doc(),
    PyVTKClass_vtkSIProxyNew(modulename));
  return cls;
}

const char **PyvtkSISourceProxy_Doc()
{
  static const char *docstring[] = {
    "vtkSISourceProxy\n\n",
    "Superclass: vtkSIProxy\n\n",
    "vtkSISourceProxy is the server-side helper for a vtkSMSourceProxy. It\nadds support to handle various vtkAlgorithm specific Invoke requests\ncoming from the client. vtkSISourceProxy also inserts post-processing\nfilters for each output port from the vtkAlgorithm. These\npost-processing filters deal with things like parallelizing the data\netc.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkSISourceProxy(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkSISourceProxyNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkSISourceProxy", o) != 0)
    {
    Py_DECREF(o);
    }

}

