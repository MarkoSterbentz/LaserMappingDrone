// python wrapper for vtkCleanArrays
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkCleanArrays.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkCleanArrays(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkCleanArraysNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkDataSetAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkDataSetAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkDataSetAlgorithmNew
#endif

static const char **PyvtkCleanArrays_Doc();


static PyObject *
PyvtkCleanArrays_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCleanArrays *op = static_cast<vtkCleanArrays *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkCleanArrays::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCleanArrays_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCleanArrays *op = static_cast<vtkCleanArrays *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkCleanArrays::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCleanArrays_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCleanArrays *op = static_cast<vtkCleanArrays *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkCleanArrays *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkCleanArrays::NewInstance());

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
PyvtkCleanArrays_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkCleanArrays *tempr = vtkCleanArrays::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCleanArrays_SetController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCleanArrays *op = static_cast<vtkCleanArrays *>(vp);

  vtkMultiProcessController *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMultiProcessController"))
    {
    if (ap.IsBound())
      {
      op->SetController(temp0);
      }
    else
      {
      op->vtkCleanArrays::SetController(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCleanArrays_GetController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCleanArrays *op = static_cast<vtkCleanArrays *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkMultiProcessController *tempr = (ap.IsBound() ?
      op->GetController() :
      op->vtkCleanArrays::GetController());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCleanArrays_SetFillPartialArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFillPartialArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCleanArrays *op = static_cast<vtkCleanArrays *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetFillPartialArrays(temp0);
      }
    else
      {
      op->vtkCleanArrays::SetFillPartialArrays(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCleanArrays_GetFillPartialArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFillPartialArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCleanArrays *op = static_cast<vtkCleanArrays *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetFillPartialArrays() :
      op->vtkCleanArrays::GetFillPartialArrays());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCleanArrays_FillPartialArraysOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FillPartialArraysOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCleanArrays *op = static_cast<vtkCleanArrays *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->FillPartialArraysOn();
      }
    else
      {
      op->vtkCleanArrays::FillPartialArraysOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCleanArrays_FillPartialArraysOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FillPartialArraysOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCleanArrays *op = static_cast<vtkCleanArrays *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->FillPartialArraysOff();
      }
    else
      {
      op->vtkCleanArrays::FillPartialArraysOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkCleanArrays_Methods[] = {
  {(char*)"GetClassName", PyvtkCleanArrays_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkCleanArrays_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkCleanArrays_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkCleanArrays\nC++: vtkCleanArrays *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkCleanArrays_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkCleanArrays\nC++: vtkCleanArrays *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetController", PyvtkCleanArrays_SetController, METH_VARARGS,
   (char*)"V.SetController(vtkMultiProcessController)\nC++: void SetController(vtkMultiProcessController *controller)\n\nThe user can set the controller used for inter-process\ncommunication. By default set to the global communicator.\n"},
  {(char*)"GetController", PyvtkCleanArrays_GetController, METH_VARARGS,
   (char*)"V.GetController() -> vtkMultiProcessController\nC++: vtkMultiProcessController *GetController()\n\nThe user can set the controller used for inter-process\ncommunication. By default set to the global communicator.\n"},
  {(char*)"SetFillPartialArrays", PyvtkCleanArrays_SetFillPartialArrays, METH_VARARGS,
   (char*)"V.SetFillPartialArrays(bool)\nC++: void SetFillPartialArrays(bool a)\n\nWhen set to true (false by default), 0 filled array will be added\nfor missing arrays on this process (instead of removing partial\narrays).\n"},
  {(char*)"GetFillPartialArrays", PyvtkCleanArrays_GetFillPartialArrays, METH_VARARGS,
   (char*)"V.GetFillPartialArrays() -> bool\nC++: bool GetFillPartialArrays()\n\nWhen set to true (false by default), 0 filled array will be added\nfor missing arrays on this process (instead of removing partial\narrays).\n"},
  {(char*)"FillPartialArraysOn", PyvtkCleanArrays_FillPartialArraysOn, METH_VARARGS,
   (char*)"V.FillPartialArraysOn()\nC++: void FillPartialArraysOn()\n\nWhen set to true (false by default), 0 filled array will be added\nfor missing arrays on this process (instead of removing partial\narrays).\n"},
  {(char*)"FillPartialArraysOff", PyvtkCleanArrays_FillPartialArraysOff, METH_VARARGS,
   (char*)"V.FillPartialArraysOff()\nC++: void FillPartialArraysOff()\n\nWhen set to true (false by default), 0 filled array will be added\nfor missing arrays on this process (instead of removing partial\narrays).\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkCleanArrays_StaticNew()
{
  return vtkCleanArrays::New();
}

PyObject *PyVTKClass_vtkCleanArraysNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkCleanArrays_StaticNew,
    PyvtkCleanArrays_Methods,
    "vtkCleanArrays", modulename,
    NULL, NULL,
    PyvtkCleanArrays_Doc(),
    PyVTKClass_vtkDataSetAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkCleanArrays_Doc()
{
  static const char *docstring[] = {
    "vtkCleanArrays - filter used to remove partial arrays across\nprocesses.\n\n",
    "Superclass: vtkDataSetAlgorithm\n\n",
    "vtkCleanArrays is a filter used to remove (or fill up) partial arrays\nin a vtkDataSet across processes. Empty dataset on any processes is\nignored i.e. it does not affect the arrays on any processes.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkCleanArrays(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkCleanArraysNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkCleanArrays", o) != 0)
    {
    Py_DECREF(o);
    }

}

