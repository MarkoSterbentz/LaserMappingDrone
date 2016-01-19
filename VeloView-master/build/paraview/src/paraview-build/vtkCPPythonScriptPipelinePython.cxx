// python wrapper for vtkCPPythonScriptPipeline
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkCPPythonScriptPipeline.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkCPPythonScriptPipeline(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkCPPythonScriptPipelineNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkCPPipelineNew
extern "C" { PyObject *PyVTKClass_vtkCPPipelineNew(const char *); }
#define DECLARED_PyVTKClass_vtkCPPipelineNew
#endif

static const char **PyvtkCPPythonScriptPipeline_Doc();


static PyObject *
PyvtkCPPythonScriptPipeline_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCPPythonScriptPipeline *op = static_cast<vtkCPPythonScriptPipeline *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkCPPythonScriptPipeline::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCPPythonScriptPipeline_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCPPythonScriptPipeline *op = static_cast<vtkCPPythonScriptPipeline *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkCPPythonScriptPipeline::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCPPythonScriptPipeline_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCPPythonScriptPipeline *op = static_cast<vtkCPPythonScriptPipeline *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkCPPythonScriptPipeline *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkCPPythonScriptPipeline::NewInstance());

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
PyvtkCPPythonScriptPipeline_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkCPPythonScriptPipeline *tempr = vtkCPPythonScriptPipeline::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCPPythonScriptPipeline_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCPPythonScriptPipeline *op = static_cast<vtkCPPythonScriptPipeline *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->Initialize(temp0) :
      op->vtkCPPythonScriptPipeline::Initialize(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCPPythonScriptPipeline_RequestDataDescription(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RequestDataDescription");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCPPythonScriptPipeline *op = static_cast<vtkCPPythonScriptPipeline *>(vp);

  vtkCPDataDescription *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCPDataDescription"))
    {
    int tempr = (ap.IsBound() ?
      op->RequestDataDescription(temp0) :
      op->vtkCPPythonScriptPipeline::RequestDataDescription(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCPPythonScriptPipeline_CoProcess(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CoProcess");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCPPythonScriptPipeline *op = static_cast<vtkCPPythonScriptPipeline *>(vp);

  vtkCPDataDescription *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCPDataDescription"))
    {
    int tempr = (ap.IsBound() ?
      op->CoProcess(temp0) :
      op->vtkCPPythonScriptPipeline::CoProcess(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCPPythonScriptPipeline_Finalize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Finalize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCPPythonScriptPipeline *op = static_cast<vtkCPPythonScriptPipeline *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->Finalize() :
      op->vtkCPPythonScriptPipeline::Finalize());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkCPPythonScriptPipeline_Methods[] = {
  {(char*)"GetClassName", PyvtkCPPythonScriptPipeline_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkCPPythonScriptPipeline_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkCPPythonScriptPipeline_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkCPPythonScriptPipeline\nC++: vtkCPPythonScriptPipeline *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkCPPythonScriptPipeline_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkCPPythonScriptPipeline\nC++: vtkCPPythonScriptPipeline *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"Initialize", PyvtkCPPythonScriptPipeline_Initialize, METH_VARARGS,
   (char*)"V.Initialize(string) -> int\nC++: int Initialize(const char *fileName)\n\n"},
  {(char*)"RequestDataDescription", PyvtkCPPythonScriptPipeline_RequestDataDescription, METH_VARARGS,
   (char*)"V.RequestDataDescription(vtkCPDataDescription) -> int\nC++: virtual int RequestDataDescription(\n    vtkCPDataDescription *dataDescription)\n\n"},
  {(char*)"CoProcess", PyvtkCPPythonScriptPipeline_CoProcess, METH_VARARGS,
   (char*)"V.CoProcess(vtkCPDataDescription) -> int\nC++: virtual int CoProcess(vtkCPDataDescription *dataDescription)\n\n"},
  {(char*)"Finalize", PyvtkCPPythonScriptPipeline_Finalize, METH_VARARGS,
   (char*)"V.Finalize() -> int\nC++: virtual int Finalize()\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkCPPythonScriptPipeline_StaticNew()
{
  return vtkCPPythonScriptPipeline::New();
}

PyObject *PyVTKClass_vtkCPPythonScriptPipelineNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkCPPythonScriptPipeline_StaticNew,
    PyvtkCPPythonScriptPipeline_Methods,
    "vtkCPPythonScriptPipeline", modulename,
    NULL, NULL,
    PyvtkCPPythonScriptPipeline_Doc(),
    PyVTKClass_vtkCPPipelineNew(modulename));
  return cls;
}

const char **PyvtkCPPythonScriptPipeline_Doc()
{
  static const char *docstring[] = {
    "vtkCPPythonScriptPipeline - no description provided.\n\n",
    "Superclass: vtkCPPipeline\n\n",
    "\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkCPPythonScriptPipeline(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkCPPythonScriptPipelineNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkCPPythonScriptPipeline", o) != 0)
    {
    Py_DECREF(o);
    }

}

