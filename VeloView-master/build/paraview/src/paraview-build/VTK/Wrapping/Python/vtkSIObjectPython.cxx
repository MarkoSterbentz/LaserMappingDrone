// python wrapper for vtkSIObject
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkSIObject.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkSIObject(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkSIObjectNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkSIObject_Doc();


static PyObject *
PyvtkSIObject_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSIObject *op = static_cast<vtkSIObject *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkSIObject::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSIObject_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSIObject *op = static_cast<vtkSIObject *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSIObject::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSIObject_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSIObject *op = static_cast<vtkSIObject *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkSIObject *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSIObject::NewInstance());

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
PyvtkSIObject_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkSIObject *tempr = vtkSIObject::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSIObject_AboutToDelete(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AboutToDelete");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSIObject *op = static_cast<vtkSIObject *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->AboutToDelete();
      }
    else
      {
      op->vtkSIObject::AboutToDelete();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSIObject_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSIObject *op = static_cast<vtkSIObject *>(vp);

  vtkPVSessionCore *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPVSessionCore"))
    {
    if (ap.IsBound())
      {
      op->Initialize(temp0);
      }
    else
      {
      op->vtkSIObject::Initialize(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSIObject_Push(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Push");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSIObject *op = static_cast<vtkSIObject *>(vp);

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
      op->vtkSIObject::Push(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSIObject_Pull(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Pull");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSIObject *op = static_cast<vtkSIObject *>(vp);

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
      op->vtkSIObject::Pull(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSIObject_GetInterpreter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInterpreter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSIObject *op = static_cast<vtkSIObject *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkClientServerInterpreter *tempr = (ap.IsBound() ?
      op->GetInterpreter() :
      op->vtkSIObject::GetInterpreter());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSIObject_GetSIObject(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSIObject");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSIObject *op = static_cast<vtkSIObject *>(vp);

  unsigned int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkSIObject *tempr = (ap.IsBound() ?
      op->GetSIObject(temp0) :
      op->vtkSIObject::GetSIObject(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSIObject_GetRemoteObject(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRemoteObject");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSIObject *op = static_cast<vtkSIObject *>(vp);

  unsigned int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkObject *tempr = (ap.IsBound() ?
      op->GetRemoteObject(temp0) :
      op->vtkSIObject::GetRemoteObject(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSIObject_SetGlobalID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGlobalID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSIObject *op = static_cast<vtkSIObject *>(vp);

  unsigned int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetGlobalID(temp0);
      }
    else
      {
      op->vtkSIObject::SetGlobalID(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSIObject_GetGlobalID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGlobalID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSIObject *op = static_cast<vtkSIObject *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned int tempr = (ap.IsBound() ?
      op->GetGlobalID() :
      op->vtkSIObject::GetGlobalID());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkSIObject_Methods[] = {
  {(char*)"GetClassName", PyvtkSIObject_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkSIObject_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkSIObject_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkSIObject\nC++: vtkSIObject *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkSIObject_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkSIObject\nC++: vtkSIObject *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"AboutToDelete", PyvtkSIObject_AboutToDelete, METH_VARARGS,
   (char*)"V.AboutToDelete()\nC++: virtual void AboutToDelete()\n\nThis method is called before the deletion of the SIObject.\nBasically this is used to remove all dependency with other\nSIObject so after a first pass on all SIObject with a\nAboutToDelete() we can simply delete the remaining SIObjects.\n"},
  {(char*)"Initialize", PyvtkSIObject_Initialize, METH_VARARGS,
   (char*)"V.Initialize(vtkPVSessionCore)\nC++: virtual void Initialize(vtkPVSessionCore *session)\n\nInitializes the instance. Session is the session to which this\ninstance belongs to. During initialization, the SIObject\nbasically obtains ivars for necessary components.\n"},
  {(char*)"Push", PyvtkSIObject_Push, METH_VARARGS,
   (char*)"V.Push(vtkSMMessage)\nC++: virtual void Push(vtkSMMessage *msg)\n\nPush a new state to the underneath implementation The provided\nimplementation just store the message and return it at the Pull\none.\n"},
  {(char*)"Pull", PyvtkSIObject_Pull, METH_VARARGS,
   (char*)"V.Pull(vtkSMMessage)\nC++: virtual void Pull(vtkSMMessage *msg)\n\nPull the current state of the underneath implementation The\nprovided implementation update the given message with the one\nthat has been previously pushed\n"},
  {(char*)"GetInterpreter", PyvtkSIObject_GetInterpreter, METH_VARARGS,
   (char*)"V.GetInterpreter() -> vtkClientServerInterpreter\nC++: vtkClientServerInterpreter *GetInterpreter()\n\nProvides access to the Interpreter.\n"},
  {(char*)"GetSIObject", PyvtkSIObject_GetSIObject, METH_VARARGS,
   (char*)"V.GetSIObject(int) -> vtkSIObject\nC++: vtkSIObject *GetSIObject(vtkTypeUInt32 globalid)\n\nConvenience method to obtain a vtkSIObject subclass given its\nglobal id.\n"},
  {(char*)"GetRemoteObject", PyvtkSIObject_GetRemoteObject, METH_VARARGS,
   (char*)"V.GetRemoteObject(int) -> vtkObject\nC++: vtkObject *GetRemoteObject(vtkTypeUInt32 globalid)\n\nConvenience method to obtain a vtkObject subclass given its\nglobal id.\n"},
  {(char*)"SetGlobalID", PyvtkSIObject_SetGlobalID, METH_VARARGS,
   (char*)"V.SetGlobalID(int)\nC++: void SetGlobalID(vtkTypeUInt32 a)\n\nGet/Set the global id for this object.\n"},
  {(char*)"GetGlobalID", PyvtkSIObject_GetGlobalID, METH_VARARGS,
   (char*)"V.GetGlobalID() -> int\nC++: vtkTypeUInt32 GetGlobalID()\n\nGet/Set the global id for this object.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkSIObject_StaticNew()
{
  return vtkSIObject::New();
}

PyObject *PyVTKClass_vtkSIObjectNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkSIObject_StaticNew,
    PyvtkSIObject_Methods,
    "vtkSIObject", modulename,
    NULL, NULL,
    PyvtkSIObject_Doc(),
    PyVTKClass_vtkObjectNew(modulename));
  return cls;
}

const char **PyvtkSIObject_Doc()
{
  static const char *docstring[] = {
    "vtkSIObject\n\n",
    "Superclass: vtkObject\n\n",
    "Object that is managed by vtkPVSessionCore which wrap concrete class\nsuch as the vtk ones.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkSIObject(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkSIObjectNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkSIObject", o) != 0)
    {
    Py_DECREF(o);
    }

}

