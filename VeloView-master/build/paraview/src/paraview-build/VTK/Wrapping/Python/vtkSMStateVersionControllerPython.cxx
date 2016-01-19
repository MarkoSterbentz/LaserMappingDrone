// python wrapper for vtkSMStateVersionController
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkSMStateVersionController.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkSMStateVersionController(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkSMStateVersionControllerNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkSMObjectNew
extern "C" { PyObject *PyVTKClass_vtkSMObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkSMObjectNew
#endif

static const char **PyvtkSMStateVersionController_Doc();


static PyObject *
PyvtkSMStateVersionController_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMStateVersionController *op = static_cast<vtkSMStateVersionController *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkSMStateVersionController::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMStateVersionController_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMStateVersionController *op = static_cast<vtkSMStateVersionController *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSMStateVersionController::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMStateVersionController_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMStateVersionController *op = static_cast<vtkSMStateVersionController *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkSMStateVersionController *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSMStateVersionController::NewInstance());

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
PyvtkSMStateVersionController_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkSMStateVersionController *tempr = vtkSMStateVersionController::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMStateVersionController_Process(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Process");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMStateVersionController *op = static_cast<vtkSMStateVersionController *>(vp);

  vtkPVXMLElement *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPVXMLElement"))
    {
    bool tempr = (ap.IsBound() ?
      op->Process(temp0) :
      op->vtkSMStateVersionController::Process(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkSMStateVersionController_Methods[] = {
  {(char*)"GetClassName", PyvtkSMStateVersionController_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkSMStateVersionController_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkSMStateVersionController_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkSMStateVersionController\nC++: vtkSMStateVersionController *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkSMStateVersionController_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkSMStateVersionController\nC++: vtkSMStateVersionController *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"Process", PyvtkSMStateVersionController_Process, METH_VARARGS,
   (char*)"V.Process(vtkPVXMLElement) -> bool\nC++: virtual bool Process(vtkPVXMLElement *root)\n\nCalled before a state is loaded. The argument must be the root\nelement for the state being loaded. eg. for server manager state,\nit will point to <ServerManagerState /> element. Returns false if\nthe conversion failed, else true.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkSMStateVersionController_StaticNew()
{
  return vtkSMStateVersionController::New();
}

PyObject *PyVTKClass_vtkSMStateVersionControllerNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkSMStateVersionController_StaticNew,
    PyvtkSMStateVersionController_Methods,
    "vtkSMStateVersionController", modulename,
    NULL, NULL,
    PyvtkSMStateVersionController_Doc(),
    PyVTKClass_vtkSMObjectNew(modulename));
  return cls;
}

const char **PyvtkSMStateVersionController_Doc()
{
  static const char *docstring[] = {
    "vtkSMStateVersionController\n\n",
    "Superclass: vtkSMObject\n\n",
    "vtkSMStateVersionController is used to convert the state XML from any\npreviously supported versions to the current version.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkSMStateVersionController(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkSMStateVersionControllerNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkSMStateVersionController", o) != 0)
    {
    Py_DECREF(o);
    }

}

