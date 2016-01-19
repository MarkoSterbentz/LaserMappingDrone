// python wrapper for vtkSMStateLocator
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkSMStateLocator.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkSMStateLocator(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkSMStateLocatorNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkSMObjectNew
extern "C" { PyObject *PyVTKClass_vtkSMObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkSMObjectNew
#endif

static const char **PyvtkSMStateLocator_Doc();


static PyObject *
PyvtkSMStateLocator_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMStateLocator *op = static_cast<vtkSMStateLocator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkSMStateLocator::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMStateLocator_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMStateLocator *op = static_cast<vtkSMStateLocator *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSMStateLocator::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMStateLocator_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMStateLocator *op = static_cast<vtkSMStateLocator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkSMStateLocator *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSMStateLocator::NewInstance());

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
PyvtkSMStateLocator_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkSMStateLocator *tempr = vtkSMStateLocator::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMStateLocator_SetParentLocator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetParentLocator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMStateLocator *op = static_cast<vtkSMStateLocator *>(vp);

  vtkSMStateLocator *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMStateLocator"))
    {
    if (ap.IsBound())
      {
      op->SetParentLocator(temp0);
      }
    else
      {
      op->vtkSMStateLocator::SetParentLocator(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMStateLocator_GetParentLocator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetParentLocator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMStateLocator *op = static_cast<vtkSMStateLocator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkSMStateLocator *tempr = (ap.IsBound() ?
      op->GetParentLocator() :
      op->vtkSMStateLocator::GetParentLocator());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMStateLocator_InitGarbageCollector(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InitGarbageCollector");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMStateLocator *op = static_cast<vtkSMStateLocator *>(vp);

  vtkSMSession *temp0 = NULL;
  vtkUndoStack *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkSMSession") &&
      ap.GetVTKObject(temp1, "vtkUndoStack"))
    {
    if (ap.IsBound())
      {
      op->InitGarbageCollector(temp0, temp1);
      }
    else
      {
      op->vtkSMStateLocator::InitGarbageCollector(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMStateLocator_FindState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FindState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMStateLocator *op = static_cast<vtkSMStateLocator *>(vp);

  unsigned int temp0;
  vtkSMMessage *temp1 = NULL;
  bool temp2 = true;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2, 3) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkSMMessage") &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)))
    {
    bool tempr = (ap.IsBound() ?
      op->FindState(temp0, temp1, temp2) :
      op->vtkSMStateLocator::FindState(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMStateLocator_RegisterState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RegisterState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMStateLocator *op = static_cast<vtkSMStateLocator *>(vp);

  vtkSMMessage *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMMessage"))
    {
    if (ap.IsBound())
      {
      op->RegisterState(temp0);
      }
    else
      {
      op->vtkSMStateLocator::RegisterState(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMStateLocator_UnRegisterState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UnRegisterState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMStateLocator *op = static_cast<vtkSMStateLocator *>(vp);

  unsigned int temp0;
  bool temp1 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->UnRegisterState(temp0, temp1);
      }
    else
      {
      op->vtkSMStateLocator::UnRegisterState(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMStateLocator_UnRegisterAllStates(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UnRegisterAllStates");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMStateLocator *op = static_cast<vtkSMStateLocator *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->UnRegisterAllStates(temp0);
      }
    else
      {
      op->vtkSMStateLocator::UnRegisterAllStates(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMStateLocator_IsStateLocal(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsStateLocal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMStateLocator *op = static_cast<vtkSMStateLocator *>(vp);

  unsigned int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    bool tempr = (ap.IsBound() ?
      op->IsStateLocal(temp0) :
      op->vtkSMStateLocator::IsStateLocal(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMStateLocator_IsStateAvailable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsStateAvailable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMStateLocator *op = static_cast<vtkSMStateLocator *>(vp);

  unsigned int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    bool tempr = (ap.IsBound() ?
      op->IsStateAvailable(temp0) :
      op->vtkSMStateLocator::IsStateAvailable(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMStateLocator_RegisterFullState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RegisterFullState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMStateLocator *op = static_cast<vtkSMStateLocator *>(vp);

  vtkSMProxy *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMProxy"))
    {
    if (ap.IsBound())
      {
      op->RegisterFullState(temp0);
      }
    else
      {
      op->vtkSMStateLocator::RegisterFullState(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkSMStateLocator_Methods[] = {
  {(char*)"GetClassName", PyvtkSMStateLocator_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkSMStateLocator_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkSMStateLocator_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkSMStateLocator\nC++: vtkSMStateLocator *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkSMStateLocator_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkSMStateLocator\nC++: vtkSMStateLocator *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetParentLocator", PyvtkSMStateLocator_SetParentLocator, METH_VARARGS,
   (char*)"V.SetParentLocator(vtkSMStateLocator)\nC++: void SetParentLocator(vtkSMStateLocator *)\n\nSet/Get a parent locator to search which is used as a backup\nlocation to search from if a given state was not found locally.\n"},
  {(char*)"GetParentLocator", PyvtkSMStateLocator_GetParentLocator, METH_VARARGS,
   (char*)"V.GetParentLocator() -> vtkSMStateLocator\nC++: vtkSMStateLocator *GetParentLocator()\n\nSet/Get a parent locator to search which is used as a backup\nlocation to search from if a given state was not found locally.\n"},
  {(char*)"InitGarbageCollector", PyvtkSMStateLocator_InitGarbageCollector, METH_VARARGS,
   (char*)"V.InitGarbageCollector(vtkSMSession, vtkUndoStack)\nC++: void InitGarbageCollector(vtkSMSession *, vtkUndoStack *)\n\nBy initializing the garabage collector the stored state get\nremoved once their is no more chance for them to be reused inside\nthe session.\n"},
  {(char*)"FindState", PyvtkSMStateLocator_FindState, METH_VARARGS,
   (char*)"V.FindState(int, vtkSMMessage, bool) -> bool\nC++: virtual bool FindState(vtkTypeUInt32 globalID,\n    vtkSMMessage *stateToFill, bool useParent=true)\n\nFill the provided State message with the state found inside the\ncurrent locator or one of its parent. The method return true if\nthe state was successfully filled. The \"useParent\" flag allow to\ndisable parent lookup but by default it is set to true.\n"},
  {(char*)"RegisterState", PyvtkSMStateLocator_RegisterState, METH_VARARGS,
   (char*)"V.RegisterState(vtkSMMessage)\nC++: virtual void RegisterState(const vtkSMMessage *state)\n\nRegister the given state in the current locator. If a previous\nstate was available, the new one will replace it.\n"},
  {(char*)"UnRegisterState", PyvtkSMStateLocator_UnRegisterState, METH_VARARGS,
   (char*)"V.UnRegisterState(int, bool)\nC++: virtual void UnRegisterState(vtkTypeUInt32 globalID,\n    bool force)\n\nRemove a state for a given proxy inside the local locator. if\nforce is true, it will also remove it from its hierarchical\nparents.\n"},
  {(char*)"UnRegisterAllStates", PyvtkSMStateLocator_UnRegisterAllStates, METH_VARARGS,
   (char*)"V.UnRegisterAllStates(bool)\nC++: virtual void UnRegisterAllStates(bool force)\n\nRemove all the registered states if force is true, it will also\nremove it from its hierarchical parents.\n"},
  {(char*)"IsStateLocal", PyvtkSMStateLocator_IsStateLocal, METH_VARARGS,
   (char*)"V.IsStateLocal(int) -> bool\nC++: virtual bool IsStateLocal(vtkTypeUInt32 globalID)\n\nReturn true if the given state can be found locally whitout the\nhelp of on the hierarchical parent\n"},
  {(char*)"IsStateAvailable", PyvtkSMStateLocator_IsStateAvailable, METH_VARARGS,
   (char*)"V.IsStateAvailable(int) -> bool\nC++: virtual bool IsStateAvailable(vtkTypeUInt32 globalID)\n\nReturn true if the given state do exist in the locator hierachy\n"},
  {(char*)"RegisterFullState", PyvtkSMStateLocator_RegisterFullState, METH_VARARGS,
   (char*)"V.RegisterFullState(vtkSMProxy)\nC++: virtual void RegisterFullState(vtkSMProxy *proxy)\n\nRegister the given proxy state as well as all its sub-proxy state\nso if that proxy need to be renew all its sub-proxy will be renew\nin the exact same state.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkSMStateLocator_StaticNew()
{
  return vtkSMStateLocator::New();
}

PyObject *PyVTKClass_vtkSMStateLocatorNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkSMStateLocator_StaticNew,
    PyvtkSMStateLocator_Methods,
    "vtkSMStateLocator", modulename,
    NULL, NULL,
    PyvtkSMStateLocator_Doc(),
    PyVTKClass_vtkSMObjectNew(modulename));
  return cls;
}

const char **PyvtkSMStateLocator_Doc()
{
  static const char *docstring[] = {
    "vtkSMStateLocator - Class used to retreive a given message state based\n\n",
    "Superclass: vtkSMObject\n\n",
    "vtkSMStateLocator allow a hierarchical way of finding a message\nstate.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkSMStateLocator(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkSMStateLocatorNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkSMStateLocator", o) != 0)
    {
    Py_DECREF(o);
    }

}

