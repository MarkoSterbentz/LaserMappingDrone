// python wrapper for vtkSIWriterProxy
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkSIWriterProxy.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkSIWriterProxy(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkSIWriterProxyNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkSISourceProxyNew
extern "C" { PyObject *PyVTKClass_vtkSISourceProxyNew(const char *); }
#define DECLARED_PyVTKClass_vtkSISourceProxyNew
#endif

static const char **PyvtkSIWriterProxy_Doc();


static PyObject *
PyvtkSIWriterProxy_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSIWriterProxy *op = static_cast<vtkSIWriterProxy *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkSIWriterProxy::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSIWriterProxy_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSIWriterProxy *op = static_cast<vtkSIWriterProxy *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSIWriterProxy::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSIWriterProxy_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSIWriterProxy *op = static_cast<vtkSIWriterProxy *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkSIWriterProxy *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSIWriterProxy::NewInstance());

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
PyvtkSIWriterProxy_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkSIWriterProxy *tempr = vtkSIWriterProxy::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSIWriterProxy_AddInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSIWriterProxy *op = static_cast<vtkSIWriterProxy *>(vp);

  int temp0;
  vtkAlgorithmOutput *temp1 = NULL;
  char *temp2 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkAlgorithmOutput") &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      op->AddInput(temp0, temp1, temp2);
      }
    else
      {
      op->vtkSIWriterProxy::AddInput(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSIWriterProxy_CleanInputs(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CleanInputs");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSIWriterProxy *op = static_cast<vtkSIWriterProxy *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->CleanInputs(temp0);
      }
    else
      {
      op->vtkSIWriterProxy::CleanInputs(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSIWriterProxy_UpdatePipelineTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdatePipelineTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSIWriterProxy *op = static_cast<vtkSIWriterProxy *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->UpdatePipelineTime(temp0);
      }
    else
      {
      op->vtkSIWriterProxy::UpdatePipelineTime(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkSIWriterProxy_Methods[] = {
  {(char*)"GetClassName", PyvtkSIWriterProxy_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkSIWriterProxy_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkSIWriterProxy_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkSIWriterProxy\nC++: vtkSIWriterProxy *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkSIWriterProxy_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkSIWriterProxy\nC++: vtkSIWriterProxy *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"AddInput", PyvtkSIWriterProxy_AddInput, METH_VARARGS,
   (char*)"V.AddInput(int, vtkAlgorithmOutput, string)\nC++: virtual void AddInput(int input_port,\n    vtkAlgorithmOutput *connection, const char *method)\n\nThese methods are called to add/remove input connections by\nvtkSIInputProperty. This indirection makes it possible for\nsubclasses to insert VTK-algorithms in the input pipeline.\nOverridden to insert \"CompleteArrays\" filter in the pipeline.\n"},
  {(char*)"CleanInputs", PyvtkSIWriterProxy_CleanInputs, METH_VARARGS,
   (char*)"V.CleanInputs(string)\nC++: virtual void CleanInputs(const char *method)\n\nThese methods are called to add/remove input connections by\nvtkSIInputProperty. This indirection makes it possible for\nsubclasses to insert VTK-algorithms in the input pipeline.\nOverridden to insert \"CompleteArrays\" filter in the pipeline.\n"},
  {(char*)"UpdatePipelineTime", PyvtkSIWriterProxy_UpdatePipelineTime, METH_VARARGS,
   (char*)"V.UpdatePipelineTime(float)\nC++: virtual void UpdatePipelineTime(double time)\n\nUpdate the requested time for the pipeline. This needs to be\nseparate than vtkSISourceProxy because there are no output ports\nto do this on.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkSIWriterProxy_StaticNew()
{
  return vtkSIWriterProxy::New();
}

PyObject *PyVTKClass_vtkSIWriterProxyNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkSIWriterProxy_StaticNew,
    PyvtkSIWriterProxy_Methods,
    "vtkSIWriterProxy", modulename,
    NULL, NULL,
    PyvtkSIWriterProxy_Doc(),
    PyVTKClass_vtkSISourceProxyNew(modulename));
  return cls;
}

const char **PyvtkSIWriterProxy_Doc()
{
  static const char *docstring[] = {
    "vtkSIWriterProxy\n\n",
    "Superclass: vtkSISourceProxy\n\n",
    "ServerImplementation for WriterProxy\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkSIWriterProxy(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkSIWriterProxyNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkSIWriterProxy", o) != 0)
    {
    Py_DECREF(o);
    }

}

