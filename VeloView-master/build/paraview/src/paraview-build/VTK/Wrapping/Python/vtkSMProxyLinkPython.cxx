// python wrapper for vtkSMProxyLink
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkSMProxyLink.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkSMProxyLink(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkSMProxyLinkNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkSMLinkNew
extern "C" { PyObject *PyVTKClass_vtkSMLinkNew(const char *); }
#define DECLARED_PyVTKClass_vtkSMLinkNew
#endif

static const char **PyvtkSMProxyLink_Doc();


static PyObject *
PyvtkSMProxyLink_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxyLink *op = static_cast<vtkSMProxyLink *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkSMProxyLink::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMProxyLink_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxyLink *op = static_cast<vtkSMProxyLink *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSMProxyLink::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMProxyLink_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxyLink *op = static_cast<vtkSMProxyLink *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkSMProxyLink *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSMProxyLink::NewInstance());

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
PyvtkSMProxyLink_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkSMProxyLink *tempr = vtkSMProxyLink::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMProxyLink_AddLinkedProxy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddLinkedProxy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxyLink *op = static_cast<vtkSMProxyLink *>(vp);

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
      op->vtkSMProxyLink::AddLinkedProxy(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMProxyLink_RemoveLinkedProxy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveLinkedProxy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxyLink *op = static_cast<vtkSMProxyLink *>(vp);

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
      op->vtkSMProxyLink::RemoveLinkedProxy(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMProxyLink_GetNumberOfLinkedProxies(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfLinkedProxies");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxyLink *op = static_cast<vtkSMProxyLink *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned int tempr = (ap.IsBound() ?
      op->GetNumberOfLinkedProxies() :
      op->vtkSMProxyLink::GetNumberOfLinkedProxies());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMProxyLink_GetLinkedProxy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLinkedProxy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxyLink *op = static_cast<vtkSMProxyLink *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkSMProxy *tempr = (ap.IsBound() ?
      op->GetLinkedProxy(temp0) :
      op->vtkSMProxyLink::GetLinkedProxy(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMProxyLink_GetLinkedProxyDirection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLinkedProxyDirection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxyLink *op = static_cast<vtkSMProxyLink *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->GetLinkedProxyDirection(temp0) :
      op->vtkSMProxyLink::GetLinkedProxyDirection(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMProxyLink_AddException(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddException");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxyLink *op = static_cast<vtkSMProxyLink *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->AddException(temp0);
      }
    else
      {
      op->vtkSMProxyLink::AddException(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMProxyLink_RemoveException(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveException");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxyLink *op = static_cast<vtkSMProxyLink *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->RemoveException(temp0);
      }
    else
      {
      op->vtkSMProxyLink::RemoveException(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMProxyLink_RemoveAllLinks(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveAllLinks");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxyLink *op = static_cast<vtkSMProxyLink *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->RemoveAllLinks();
      }
    else
      {
      op->vtkSMProxyLink::RemoveAllLinks();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMProxyLink_LoadState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LoadState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxyLink *op = static_cast<vtkSMProxyLink *>(vp);

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
      op->vtkSMProxyLink::LoadState(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkSMProxyLink_Methods[] = {
  {(char*)"GetClassName", PyvtkSMProxyLink_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkSMProxyLink_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkSMProxyLink_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkSMProxyLink\nC++: vtkSMProxyLink *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkSMProxyLink_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkSMProxyLink\nC++: vtkSMProxyLink *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"AddLinkedProxy", PyvtkSMProxyLink_AddLinkedProxy, METH_VARARGS,
   (char*)"V.AddLinkedProxy(vtkSMProxy, int)\nC++: virtual void AddLinkedProxy(vtkSMProxy *proxy, int updateDir)\n\nAdd a property to the link. updateDir determines whether a\nproperty of the proxy is read or written. When a property of an\ninput proxy changes, it's value is pushed to all other output\nproxies in the link. A proxy can be set to be both input and\noutput by adding 2 link, one to INPUT and the other to OUTPUT\n"},
  {(char*)"RemoveLinkedProxy", PyvtkSMProxyLink_RemoveLinkedProxy, METH_VARARGS,
   (char*)"V.RemoveLinkedProxy(vtkSMProxy)\nC++: virtual void RemoveLinkedProxy(vtkSMProxy *proxy)\n\nRemove a linked proxy.\n"},
  {(char*)"GetNumberOfLinkedProxies", PyvtkSMProxyLink_GetNumberOfLinkedProxies, METH_VARARGS,
   (char*)"V.GetNumberOfLinkedProxies() -> int\nC++: unsigned int GetNumberOfLinkedProxies()\n\nGet the number of proxies that are involved in this link.\n"},
  {(char*)"GetLinkedProxy", PyvtkSMProxyLink_GetLinkedProxy, METH_VARARGS,
   (char*)"V.GetLinkedProxy(int) -> vtkSMProxy\nC++: vtkSMProxy *GetLinkedProxy(int index)\n\nGet a proxy involved in this link.\n"},
  {(char*)"GetLinkedProxyDirection", PyvtkSMProxyLink_GetLinkedProxyDirection, METH_VARARGS,
   (char*)"V.GetLinkedProxyDirection(int) -> int\nC++: int GetLinkedProxyDirection(int index)\n\nGet the direction of a proxy involved in this link (see\nvtkSMLink::UpdateDirections)\n"},
  {(char*)"AddException", PyvtkSMProxyLink_AddException, METH_VARARGS,
   (char*)"V.AddException(string)\nC++: void AddException(const char *propertyname)\n\nIt is possible to exclude certain properties from being\nsynchronized by this link. This method can be used to add/remove\nthe names for such exception properties.\n"},
  {(char*)"RemoveException", PyvtkSMProxyLink_RemoveException, METH_VARARGS,
   (char*)"V.RemoveException(string)\nC++: void RemoveException(const char *propertyname)\n\nIt is possible to exclude certain properties from being\nsynchronized by this link. This method can be used to add/remove\nthe names for such exception properties.\n"},
  {(char*)"RemoveAllLinks", PyvtkSMProxyLink_RemoveAllLinks, METH_VARARGS,
   (char*)"V.RemoveAllLinks()\nC++: virtual void RemoveAllLinks()\n\nRemove all links.\n"},
  {(char*)"LoadState", PyvtkSMProxyLink_LoadState, METH_VARARGS,
   (char*)"V.LoadState(vtkSMMessage, vtkSMProxyLocator)\nC++: virtual void LoadState(const vtkSMMessage *msg,\n    vtkSMProxyLocator *locator)\n\nThis method is used to initialise the object to the given state\nIf the definitionOnly Flag is set to True the proxy won't load\nthe properties values and just setup the new proxy hierarchy with\nall subproxy globalID set. This allow to split the load process\nin 2 step to prevent invalid state when property refere to a\nsub-proxy that does not exist yet.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkSMProxyLink_StaticNew()
{
  return vtkSMProxyLink::New();
}

PyObject *PyVTKClass_vtkSMProxyLinkNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkSMProxyLink_StaticNew,
    PyvtkSMProxyLink_Methods,
    "vtkSMProxyLink", modulename,
    NULL, NULL,
    PyvtkSMProxyLink_Doc(),
    PyVTKClass_vtkSMLinkNew(modulename));
  return cls;
}

const char **PyvtkSMProxyLink_Doc()
{
  static const char *docstring[] = {
    "vtkSMProxyLink - creates a link between two proxies.\n\n",
    "Superclass: vtkSMLink\n\n",
    "When a link is created between proxy A->B, whenever any property on\nproxy A is modified, a property with the same name as the modified\nproperty (if any) on proxy B is also modified to be the same as the\nproperty on the proxy A. Similary whenever proxy\nA->UpdateVTKObjects() is called, B->UpdateVTKObjects() is also fired.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkSMProxyLink(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkSMProxyLinkNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkSMProxyLink", o) != 0)
    {
    Py_DECREF(o);
    }

}

