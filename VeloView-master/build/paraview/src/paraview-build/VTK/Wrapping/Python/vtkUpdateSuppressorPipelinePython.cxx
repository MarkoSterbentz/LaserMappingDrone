// python wrapper for vtkUpdateSuppressorPipeline
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkInformationVector.h"
#include "vtkUpdateSuppressorPipeline.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkUpdateSuppressorPipeline(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkUpdateSuppressorPipelineNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkCompositeDataPipelineNew
extern "C" { PyObject *PyVTKClass_vtkCompositeDataPipelineNew(const char *); }
#define DECLARED_PyVTKClass_vtkCompositeDataPipelineNew
#endif

static const char **PyvtkUpdateSuppressorPipeline_Doc();


static PyObject *
PyvtkUpdateSuppressorPipeline_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUpdateSuppressorPipeline *op = static_cast<vtkUpdateSuppressorPipeline *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkUpdateSuppressorPipeline::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkUpdateSuppressorPipeline_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUpdateSuppressorPipeline *op = static_cast<vtkUpdateSuppressorPipeline *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkUpdateSuppressorPipeline::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkUpdateSuppressorPipeline_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUpdateSuppressorPipeline *op = static_cast<vtkUpdateSuppressorPipeline *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkUpdateSuppressorPipeline *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkUpdateSuppressorPipeline::NewInstance());

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
PyvtkUpdateSuppressorPipeline_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkUpdateSuppressorPipeline *tempr = vtkUpdateSuppressorPipeline::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkUpdateSuppressorPipeline_SetEnabled(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEnabled");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUpdateSuppressorPipeline *op = static_cast<vtkUpdateSuppressorPipeline *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetEnabled(temp0);
      }
    else
      {
      op->vtkUpdateSuppressorPipeline::SetEnabled(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkUpdateSuppressorPipeline_GetEnabled(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEnabled");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUpdateSuppressorPipeline *op = static_cast<vtkUpdateSuppressorPipeline *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetEnabled() :
      op->vtkUpdateSuppressorPipeline::GetEnabled());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkUpdateSuppressorPipeline_Methods[] = {
  {(char*)"GetClassName", PyvtkUpdateSuppressorPipeline_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkUpdateSuppressorPipeline_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkUpdateSuppressorPipeline_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkUpdateSuppressorPipeline\nC++: vtkUpdateSuppressorPipeline *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkUpdateSuppressorPipeline_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkUpdateSuppressorPipeline\nC++: vtkUpdateSuppressorPipeline *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetEnabled", PyvtkUpdateSuppressorPipeline_SetEnabled, METH_VARARGS,
   (char*)"V.SetEnabled(bool)\nC++: void SetEnabled(bool e)\n\nGet/Set if the update suppressions are enabled. Enabled by\ndefault.\n"},
  {(char*)"GetEnabled", PyvtkUpdateSuppressorPipeline_GetEnabled, METH_VARARGS,
   (char*)"V.GetEnabled() -> bool\nC++: bool GetEnabled()\n\nGet/Set if the update suppressions are enabled. Enabled by\ndefault.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkUpdateSuppressorPipeline_StaticNew()
{
  return vtkUpdateSuppressorPipeline::New();
}

PyObject *PyVTKClass_vtkUpdateSuppressorPipelineNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkUpdateSuppressorPipeline_StaticNew,
    PyvtkUpdateSuppressorPipeline_Methods,
    "vtkUpdateSuppressorPipeline", modulename,
    NULL, NULL,
    PyvtkUpdateSuppressorPipeline_Doc(),
    PyVTKClass_vtkCompositeDataPipelineNew(modulename));
  return cls;
}

const char **PyvtkUpdateSuppressorPipeline_Doc()
{
  static const char *docstring[] = {
    "vtkUpdateSuppressorPipeline - pipeline for vtkPVUpdateSuppressor\n\n",
    "Superclass: vtkCompositeDataPipeline\n\n",
    "vtkUpdateSuppressorPipeline is designed to for with\nvtkPVUpdateSuppressor. It stops all update extent and data requests.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkUpdateSuppressorPipeline(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkUpdateSuppressorPipelineNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkUpdateSuppressorPipeline", o) != 0)
    {
    Py_DECREF(o);
    }

}

