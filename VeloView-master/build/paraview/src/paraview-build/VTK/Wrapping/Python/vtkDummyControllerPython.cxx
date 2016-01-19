// python wrapper for vtkDummyController
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkDummyController.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkDummyController(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkDummyControllerNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkMultiProcessControllerNew
extern "C" { PyObject *PyVTKClass_vtkMultiProcessControllerNew(const char *); }
#define DECLARED_PyVTKClass_vtkMultiProcessControllerNew
#endif

static const char **PyvtkDummyController_Doc();


static PyObject *
PyvtkDummyController_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDummyController *op = static_cast<vtkDummyController *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkDummyController::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDummyController_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDummyController *op = static_cast<vtkDummyController *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkDummyController::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDummyController_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDummyController *op = static_cast<vtkDummyController *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkDummyController *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkDummyController::NewInstance());

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
PyvtkDummyController_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkDummyController *tempr = vtkDummyController::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDummyController_Finalize_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Finalize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDummyController *op = static_cast<vtkDummyController *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Finalize();
      }
    else
      {
      op->vtkDummyController::Finalize();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkDummyController_Finalize_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Finalize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDummyController *op = static_cast<vtkDummyController *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->Finalize(temp0);
      }
    else
      {
      op->vtkDummyController::Finalize(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkDummyController_Finalize(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 0:
      return PyvtkDummyController_Finalize_s1(self, args);
    case 1:
      return PyvtkDummyController_Finalize_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "Finalize");
  return NULL;
}



static PyObject *
PyvtkDummyController_GetLocalProcessId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLocalProcessId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDummyController *op = static_cast<vtkDummyController *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetLocalProcessId() :
      op->vtkDummyController::GetLocalProcessId());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDummyController_SingleMethodExecute(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SingleMethodExecute");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDummyController *op = static_cast<vtkDummyController *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SingleMethodExecute();
      }
    else
      {
      op->vtkDummyController::SingleMethodExecute();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDummyController_MultipleMethodExecute(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MultipleMethodExecute");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDummyController *op = static_cast<vtkDummyController *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->MultipleMethodExecute();
      }
    else
      {
      op->vtkDummyController::MultipleMethodExecute();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDummyController_CreateOutputWindow(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateOutputWindow");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDummyController *op = static_cast<vtkDummyController *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->CreateOutputWindow();
      }
    else
      {
      op->vtkDummyController::CreateOutputWindow();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDummyController_GetCommunicator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCommunicator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDummyController *op = static_cast<vtkDummyController *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkCommunicator *tempr = (ap.IsBound() ?
      op->GetCommunicator() :
      op->vtkDummyController::GetCommunicator());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDummyController_GetRMICommunicator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRMICommunicator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDummyController *op = static_cast<vtkDummyController *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkCommunicator *tempr = (ap.IsBound() ?
      op->GetRMICommunicator() :
      op->vtkDummyController::GetRMICommunicator());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDummyController_SetCommunicator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCommunicator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDummyController *op = static_cast<vtkDummyController *>(vp);

  vtkCommunicator *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCommunicator"))
    {
    if (ap.IsBound())
      {
      op->SetCommunicator(temp0);
      }
    else
      {
      op->vtkDummyController::SetCommunicator(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDummyController_SetRMICommunicator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRMICommunicator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDummyController *op = static_cast<vtkDummyController *>(vp);

  vtkCommunicator *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCommunicator"))
    {
    if (ap.IsBound())
      {
      op->SetRMICommunicator(temp0);
      }
    else
      {
      op->vtkDummyController::SetRMICommunicator(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkDummyController_Methods[] = {
  {(char*)"GetClassName", PyvtkDummyController_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkDummyController_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkDummyController_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkDummyController\nC++: vtkDummyController *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkDummyController_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkDummyController\nC++: vtkDummyController *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"Finalize", PyvtkDummyController_Finalize, METH_VARARGS,
   (char*)"V.Finalize()\nC++: virtual void Finalize()\nV.Finalize(int)\nC++: virtual void Finalize(int)\n\nThis method is for setting up the processes.\n"},
  {(char*)"GetLocalProcessId", PyvtkDummyController_GetLocalProcessId, METH_VARARGS,
   (char*)"V.GetLocalProcessId() -> int\nC++: int GetLocalProcessId()\n\nThis method always returns 0.\n"},
  {(char*)"SingleMethodExecute", PyvtkDummyController_SingleMethodExecute, METH_VARARGS,
   (char*)"V.SingleMethodExecute()\nC++: virtual void SingleMethodExecute()\n\nDirectly calls the single method.\n"},
  {(char*)"MultipleMethodExecute", PyvtkDummyController_MultipleMethodExecute, METH_VARARGS,
   (char*)"V.MultipleMethodExecute()\nC++: virtual void MultipleMethodExecute()\n\nDirectly calls multiple method 0.\n"},
  {(char*)"CreateOutputWindow", PyvtkDummyController_CreateOutputWindow, METH_VARARGS,
   (char*)"V.CreateOutputWindow()\nC++: virtual void CreateOutputWindow()\n\nDoes nothing.\n"},
  {(char*)"GetCommunicator", PyvtkDummyController_GetCommunicator, METH_VARARGS,
   (char*)"V.GetCommunicator() -> vtkCommunicator\nC++: vtkCommunicator *GetCommunicator()\n\nIf you don't need any special functionality from the controller,\nyou can swap out the dummy communicator for another one.\n"},
  {(char*)"GetRMICommunicator", PyvtkDummyController_GetRMICommunicator, METH_VARARGS,
   (char*)"V.GetRMICommunicator() -> vtkCommunicator\nC++: vtkCommunicator *GetRMICommunicator()\n\nIf you don't need any special functionality from the controller,\nyou can swap out the dummy communicator for another one.\n"},
  {(char*)"SetCommunicator", PyvtkDummyController_SetCommunicator, METH_VARARGS,
   (char*)"V.SetCommunicator(vtkCommunicator)\nC++: virtual void SetCommunicator(vtkCommunicator *)\n\nIf you don't need any special functionality from the controller,\nyou can swap out the dummy communicator for another one.\n"},
  {(char*)"SetRMICommunicator", PyvtkDummyController_SetRMICommunicator, METH_VARARGS,
   (char*)"V.SetRMICommunicator(vtkCommunicator)\nC++: virtual void SetRMICommunicator(vtkCommunicator *)\n\nIf you don't need any special functionality from the controller,\nyou can swap out the dummy communicator for another one.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkDummyController_StaticNew()
{
  return vtkDummyController::New();
}

PyObject *PyVTKClass_vtkDummyControllerNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkDummyController_StaticNew,
    PyvtkDummyController_Methods,
    "vtkDummyController", modulename,
    NULL, NULL,
    PyvtkDummyController_Doc(),
    PyVTKClass_vtkMultiProcessControllerNew(modulename));
  return cls;
}

const char **PyvtkDummyController_Doc()
{
  static const char *docstring[] = {
    "vtkDummyController - Dummy controller for single process applications\n\n",
    "Superclass: vtkMultiProcessController\n\n",
    "This is a dummy controller which can be used by applications which\nalways require a controller but are also compile on systems without\nthreads or mpi.\n\nSee Also:\n\nvtkMultiProcessController\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkDummyController(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkDummyControllerNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkDummyController", o) != 0)
    {
    Py_DECREF(o);
    }

}

