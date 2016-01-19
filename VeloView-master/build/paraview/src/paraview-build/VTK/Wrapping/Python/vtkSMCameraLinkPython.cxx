// python wrapper for vtkSMCameraLink
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkSMCameraLink.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkSMCameraLink(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkSMCameraLinkNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkSMProxyLinkNew
extern "C" { PyObject *PyVTKClass_vtkSMProxyLinkNew(const char *); }
#define DECLARED_PyVTKClass_vtkSMProxyLinkNew
#endif

static const char **PyvtkSMCameraLink_Doc();


static PyObject *
PyvtkSMCameraLink_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMCameraLink *op = static_cast<vtkSMCameraLink *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkSMCameraLink::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMCameraLink_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMCameraLink *op = static_cast<vtkSMCameraLink *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSMCameraLink::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMCameraLink_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMCameraLink *op = static_cast<vtkSMCameraLink *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkSMCameraLink *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSMCameraLink::NewInstance());

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
PyvtkSMCameraLink_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkSMCameraLink *tempr = vtkSMCameraLink::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMCameraLink_SetSynchronizeInteractiveRenders(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSynchronizeInteractiveRenders");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMCameraLink *op = static_cast<vtkSMCameraLink *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetSynchronizeInteractiveRenders(temp0);
      }
    else
      {
      op->vtkSMCameraLink::SetSynchronizeInteractiveRenders(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMCameraLink_GetSynchronizeInteractiveRenders(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSynchronizeInteractiveRenders");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMCameraLink *op = static_cast<vtkSMCameraLink *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetSynchronizeInteractiveRenders() :
      op->vtkSMCameraLink::GetSynchronizeInteractiveRenders());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMCameraLink_SynchronizeInteractiveRendersOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SynchronizeInteractiveRendersOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMCameraLink *op = static_cast<vtkSMCameraLink *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SynchronizeInteractiveRendersOn();
      }
    else
      {
      op->vtkSMCameraLink::SynchronizeInteractiveRendersOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMCameraLink_SynchronizeInteractiveRendersOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SynchronizeInteractiveRendersOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMCameraLink *op = static_cast<vtkSMCameraLink *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SynchronizeInteractiveRendersOff();
      }
    else
      {
      op->vtkSMCameraLink::SynchronizeInteractiveRendersOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMCameraLink_AddLinkedProxy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddLinkedProxy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMCameraLink *op = static_cast<vtkSMCameraLink *>(vp);

  vtkSMProxy *temp0 = NULL;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkSMProxy") &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->AddLinkedProxy(temp0, temp1);
      }
    else
      {
      op->vtkSMCameraLink::AddLinkedProxy(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMCameraLink_RemoveLinkedProxy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveLinkedProxy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMCameraLink *op = static_cast<vtkSMCameraLink *>(vp);

  vtkSMProxy *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMProxy"))
    {
    if (ap.IsBound())
      {
      op->RemoveLinkedProxy(temp0);
      }
    else
      {
      op->vtkSMCameraLink::RemoveLinkedProxy(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMCameraLink_UpdateViews(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateViews");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMCameraLink *op = static_cast<vtkSMCameraLink *>(vp);

  vtkSMProxy *temp0 = NULL;
  bool temp1 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkSMProxy") &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->UpdateViews(temp0, temp1);
      }
    else
      {
      op->vtkSMCameraLink::UpdateViews(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMCameraLink_LoadState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LoadState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMCameraLink *op = static_cast<vtkSMCameraLink *>(vp);

  vtkSMMessage *temp0 = NULL;
  vtkSMProxyLocator *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkSMMessage") &&
      ap.GetVTKObject(temp1, "vtkSMProxyLocator"))
    {
    if (ap.IsBound())
      {
      op->LoadState(temp0, temp1);
      }
    else
      {
      op->vtkSMCameraLink::LoadState(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkSMCameraLink_Methods[] = {
  {(char*)"GetClassName", PyvtkSMCameraLink_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkSMCameraLink_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkSMCameraLink_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkSMCameraLink\nC++: vtkSMCameraLink *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkSMCameraLink_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkSMCameraLink\nC++: vtkSMCameraLink *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetSynchronizeInteractiveRenders", PyvtkSMCameraLink_SetSynchronizeInteractiveRenders, METH_VARARGS,
   (char*)"V.SetSynchronizeInteractiveRenders(int)\nC++: void SetSynchronizeInteractiveRenders(int a)\n\nGet/Set if the link should synchronize interactive renders as\nwell. On by default.\n"},
  {(char*)"GetSynchronizeInteractiveRenders", PyvtkSMCameraLink_GetSynchronizeInteractiveRenders, METH_VARARGS,
   (char*)"V.GetSynchronizeInteractiveRenders() -> int\nC++: int GetSynchronizeInteractiveRenders()\n\nGet/Set if the link should synchronize interactive renders as\nwell. On by default.\n"},
  {(char*)"SynchronizeInteractiveRendersOn", PyvtkSMCameraLink_SynchronizeInteractiveRendersOn, METH_VARARGS,
   (char*)"V.SynchronizeInteractiveRendersOn()\nC++: void SynchronizeInteractiveRendersOn()\n\nGet/Set if the link should synchronize interactive renders as\nwell. On by default.\n"},
  {(char*)"SynchronizeInteractiveRendersOff", PyvtkSMCameraLink_SynchronizeInteractiveRendersOff, METH_VARARGS,
   (char*)"V.SynchronizeInteractiveRendersOff()\nC++: void SynchronizeInteractiveRendersOff()\n\nGet/Set if the link should synchronize interactive renders as\nwell. On by default.\n"},
  {(char*)"AddLinkedProxy", PyvtkSMCameraLink_AddLinkedProxy, METH_VARARGS,
   (char*)"V.AddLinkedProxy(vtkSMProxy, int)\nC++: void AddLinkedProxy(vtkSMProxy *proxy, int updateDir)\n\nAdd a property to the link. updateDir determines whether a\nproperty of the proxy is read or written. When a property of an\ninput proxy changes, it's value is pushed to all other output\nproxies in the link. A proxy can be set to be both input and\noutput by setting updateDir to INPUT | OUTPUT\n"},
  {(char*)"RemoveLinkedProxy", PyvtkSMCameraLink_RemoveLinkedProxy, METH_VARARGS,
   (char*)"V.RemoveLinkedProxy(vtkSMProxy)\nC++: virtual void RemoveLinkedProxy(vtkSMProxy *proxy)\n\nRemove a linked proxy.\n"},
  {(char*)"UpdateViews", PyvtkSMCameraLink_UpdateViews, METH_VARARGS,
   (char*)"V.UpdateViews(vtkSMProxy, bool)\nC++: virtual void UpdateViews(vtkSMProxy *caller,\n    bool interactive)\n\nUpdate all the views linked with an OUTPUT direction.interactive\nindicates if the render is interactive or not.\n"},
  {(char*)"LoadState", PyvtkSMCameraLink_LoadState, METH_VARARGS,
   (char*)"V.LoadState(vtkSMMessage, vtkSMProxyLocator)\nC++: virtual void LoadState(const vtkSMMessage *msg,\n    vtkSMProxyLocator *locator)\n\nThis method is used to initialise the object to the given state\nIf the definitionOnly Flag is set to True the proxy won't load\nthe properties values and just setup the new proxy hierarchy with\nall subproxy globalID set. This allow to split the load process\nin 2 step to prevent invalid state when property refere to a\nsub-proxy that does not exist yet.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkSMCameraLink_StaticNew()
{
  return vtkSMCameraLink::New();
}

PyObject *PyVTKClass_vtkSMCameraLinkNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkSMCameraLink_StaticNew,
    PyvtkSMCameraLink_Methods,
    "vtkSMCameraLink", modulename,
    NULL, NULL,
    PyvtkSMCameraLink_Doc(),
    PyVTKClass_vtkSMProxyLinkNew(modulename));
  return cls;
}

const char **PyvtkSMCameraLink_Doc()
{
  static const char *docstring[] = {
    "vtkSMCameraLink - creates a link between two cameras.\n\n",
    "Superclass: vtkSMProxyLink\n\n",
    "When a link is created between camera A->B, whenever any property on\ncamera A is modified, a property with the same name as the modified\nproperty (if any) on camera B is also modified to be the same as the\nproperty on the camera A. Similary whenever camera\nA->UpdateVTKObjects() is called, B->UpdateVTKObjects() is also fired.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkSMCameraLink(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkSMCameraLinkNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkSMCameraLink", o) != 0)
    {
    Py_DECREF(o);
    }

}

