// python wrapper for vtkSICollaborationManager
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkSICollaborationManager.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkSICollaborationManager(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkSICollaborationManagerNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkSIObjectNew
extern "C" { PyObject *PyVTKClass_vtkSIObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkSIObjectNew
#endif

static const char **PyvtkSICollaborationManager_Doc();


static PyObject *
PyvtkSICollaborationManager_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSICollaborationManager *op = static_cast<vtkSICollaborationManager *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkSICollaborationManager::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSICollaborationManager_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSICollaborationManager *op = static_cast<vtkSICollaborationManager *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSICollaborationManager::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSICollaborationManager_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSICollaborationManager *op = static_cast<vtkSICollaborationManager *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkSICollaborationManager *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSICollaborationManager::NewInstance());

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
PyvtkSICollaborationManager_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkSICollaborationManager *tempr = vtkSICollaborationManager::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSICollaborationManager_Push(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Push");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSICollaborationManager *op = static_cast<vtkSICollaborationManager *>(vp);

  vtkSMMessage *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMMessage"))
    {
    if (ap.IsBound())
      {
      op->Push(temp0);
      }
    else
      {
      op->vtkSICollaborationManager::Push(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSICollaborationManager_Pull(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Pull");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSICollaborationManager *op = static_cast<vtkSICollaborationManager *>(vp);

  vtkSMMessage *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMMessage"))
    {
    if (ap.IsBound())
      {
      op->Pull(temp0);
      }
    else
      {
      op->vtkSICollaborationManager::Pull(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkSICollaborationManager_Methods[] = {
  {(char*)"GetClassName", PyvtkSICollaborationManager_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkSICollaborationManager_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkSICollaborationManager_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkSICollaborationManager\nC++: vtkSICollaborationManager *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkSICollaborationManager_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkSICollaborationManager\nC++: vtkSICollaborationManager *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"Push", PyvtkSICollaborationManager_Push, METH_VARARGS,
   (char*)"V.Push(vtkSMMessage)\nC++: virtual void Push(vtkSMMessage *msg)\n\nPush a new state to the underneath implementation The provided\nimplementation just store the message and return it at the Pull\none.\n"},
  {(char*)"Pull", PyvtkSICollaborationManager_Pull, METH_VARARGS,
   (char*)"V.Pull(vtkSMMessage)\nC++: virtual void Pull(vtkSMMessage *msg)\n\nPull the current state of the underneath implementation The\nprovided implementation update the given message with the one\nthat has been previously pushed\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkSICollaborationManager_StaticNew()
{
  return vtkSICollaborationManager::New();
}

PyObject *PyVTKClass_vtkSICollaborationManagerNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkSICollaborationManager_StaticNew,
    PyvtkSICollaborationManager_Methods,
    "vtkSICollaborationManager", modulename,
    NULL, NULL,
    PyvtkSICollaborationManager_Doc(),
    PyVTKClass_vtkSIObjectNew(modulename));
  return cls;
}

const char **PyvtkSICollaborationManager_Doc()
{
  static const char *docstring[] = {
    "vtkSICollaborationManager\n\n",
    "Superclass: vtkSIObject\n\n",
    "Object that managed multi-client communication and provide the group\nawareness\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkSICollaborationManager(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkSICollaborationManagerNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkSICollaborationManager", o) != 0)
    {
    Py_DECREF(o);
    }

}

