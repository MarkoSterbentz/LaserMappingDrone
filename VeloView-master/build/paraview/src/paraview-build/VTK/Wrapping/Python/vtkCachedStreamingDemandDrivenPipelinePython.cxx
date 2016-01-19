// python wrapper for vtkCachedStreamingDemandDrivenPipeline
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkCachedStreamingDemandDrivenPipeline.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkCachedStreamingDemandDrivenPipeline(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkCachedStreamingDemandDrivenPipelineNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkStreamingDemandDrivenPipelineNew
extern "C" { PyObject *PyVTKClass_vtkStreamingDemandDrivenPipelineNew(const char *); }
#define DECLARED_PyVTKClass_vtkStreamingDemandDrivenPipelineNew
#endif

static const char **PyvtkCachedStreamingDemandDrivenPipeline_Doc();


static PyObject *
PyvtkCachedStreamingDemandDrivenPipeline_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCachedStreamingDemandDrivenPipeline *op = static_cast<vtkCachedStreamingDemandDrivenPipeline *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkCachedStreamingDemandDrivenPipeline::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCachedStreamingDemandDrivenPipeline_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCachedStreamingDemandDrivenPipeline *op = static_cast<vtkCachedStreamingDemandDrivenPipeline *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkCachedStreamingDemandDrivenPipeline::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCachedStreamingDemandDrivenPipeline_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCachedStreamingDemandDrivenPipeline *op = static_cast<vtkCachedStreamingDemandDrivenPipeline *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkCachedStreamingDemandDrivenPipeline *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkCachedStreamingDemandDrivenPipeline::NewInstance());

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
PyvtkCachedStreamingDemandDrivenPipeline_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkCachedStreamingDemandDrivenPipeline *tempr = vtkCachedStreamingDemandDrivenPipeline::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCachedStreamingDemandDrivenPipeline_Update_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Update");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCachedStreamingDemandDrivenPipeline *op = static_cast<vtkCachedStreamingDemandDrivenPipeline *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->Update() :
      op->vtkCachedStreamingDemandDrivenPipeline::Update());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkCachedStreamingDemandDrivenPipeline_Update_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Update");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCachedStreamingDemandDrivenPipeline *op = static_cast<vtkCachedStreamingDemandDrivenPipeline *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->Update(temp0) :
      op->vtkCachedStreamingDemandDrivenPipeline::Update(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkCachedStreamingDemandDrivenPipeline_Update(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 0:
      return PyvtkCachedStreamingDemandDrivenPipeline_Update_s1(self, args);
    case 1:
      return PyvtkCachedStreamingDemandDrivenPipeline_Update_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "Update");
  return NULL;
}



static PyObject *
PyvtkCachedStreamingDemandDrivenPipeline_SetCacheSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCacheSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCachedStreamingDemandDrivenPipeline *op = static_cast<vtkCachedStreamingDemandDrivenPipeline *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetCacheSize(temp0);
      }
    else
      {
      op->vtkCachedStreamingDemandDrivenPipeline::SetCacheSize(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCachedStreamingDemandDrivenPipeline_GetCacheSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCacheSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCachedStreamingDemandDrivenPipeline *op = static_cast<vtkCachedStreamingDemandDrivenPipeline *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetCacheSize() :
      op->vtkCachedStreamingDemandDrivenPipeline::GetCacheSize());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkCachedStreamingDemandDrivenPipeline_Methods[] = {
  {(char*)"GetClassName", PyvtkCachedStreamingDemandDrivenPipeline_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkCachedStreamingDemandDrivenPipeline_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkCachedStreamingDemandDrivenPipeline_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkCachedStreamingDemandDrivenPipeline\nC++: vtkCachedStreamingDemandDrivenPipeline *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkCachedStreamingDemandDrivenPipeline_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject)\n    -> vtkCachedStreamingDemandDrivenPipeline\nC++: vtkCachedStreamingDemandDrivenPipeline *SafeDownCast(\n    vtkObject* o)\n\n"},
  {(char*)"Update", PyvtkCachedStreamingDemandDrivenPipeline_Update, METH_VARARGS,
   (char*)"V.Update() -> int\nC++: virtual int Update()\nV.Update(int) -> int\nC++: virtual int Update(int port)\n\nBring the algorithm's outputs up-to-date.\n"},
  {(char*)"SetCacheSize", PyvtkCachedStreamingDemandDrivenPipeline_SetCacheSize, METH_VARARGS,
   (char*)"V.SetCacheSize(int)\nC++: void SetCacheSize(int size)\n\nThis is the maximum number of images that can be retained in\nmemory. it defaults to 10.\n"},
  {(char*)"GetCacheSize", PyvtkCachedStreamingDemandDrivenPipeline_GetCacheSize, METH_VARARGS,
   (char*)"V.GetCacheSize() -> int\nC++: int GetCacheSize()\n\nThis is the maximum number of images that can be retained in\nmemory. it defaults to 10.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkCachedStreamingDemandDrivenPipeline_StaticNew()
{
  return vtkCachedStreamingDemandDrivenPipeline::New();
}

PyObject *PyVTKClass_vtkCachedStreamingDemandDrivenPipelineNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkCachedStreamingDemandDrivenPipeline_StaticNew,
    PyvtkCachedStreamingDemandDrivenPipeline_Methods,
    "vtkCachedStreamingDemandDrivenPipeline", modulename,
    NULL, NULL,
    PyvtkCachedStreamingDemandDrivenPipeline_Doc(),
    PyVTKClass_vtkStreamingDemandDrivenPipelineNew(modulename));
  return cls;
}

const char **PyvtkCachedStreamingDemandDrivenPipeline_Doc()
{
  static const char *docstring[] = {
    "vtkCachedStreamingDemandDrivenPipeline -\n\n",
    "Superclass: vtkStreamingDemandDrivenPipeline\n\n",
    "vtkCachedStreamingDemandDrivenPipeline\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkCachedStreamingDemandDrivenPipeline(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkCachedStreamingDemandDrivenPipelineNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkCachedStreamingDemandDrivenPipeline", o) != 0)
    {
    Py_DECREF(o);
    }

}

