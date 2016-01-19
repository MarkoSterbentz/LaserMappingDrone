// python wrapper for vtkSMPropertyLink
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkSMPropertyLink.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkSMPropertyLink(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkSMPropertyLinkNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkSMLinkNew
extern "C" { PyObject *PyVTKClass_vtkSMLinkNew(const char *); }
#define DECLARED_PyVTKClass_vtkSMLinkNew
#endif

static const char **PyvtkSMPropertyLink_Doc();


static PyObject *
PyvtkSMPropertyLink_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMPropertyLink *op = static_cast<vtkSMPropertyLink *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkSMPropertyLink::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMPropertyLink_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMPropertyLink *op = static_cast<vtkSMPropertyLink *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSMPropertyLink::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMPropertyLink_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMPropertyLink *op = static_cast<vtkSMPropertyLink *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkSMPropertyLink *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSMPropertyLink::NewInstance());

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
PyvtkSMPropertyLink_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkSMPropertyLink *tempr = vtkSMPropertyLink::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMPropertyLink_AddLinkedProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddLinkedProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMPropertyLink *op = static_cast<vtkSMPropertyLink *>(vp);

  vtkSMProxy *temp0 = NULL;
  char *temp1 = NULL;
  int temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkSMProxy") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      op->AddLinkedProperty(temp0, temp1, temp2);
      }
    else
      {
      op->vtkSMPropertyLink::AddLinkedProperty(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMPropertyLink_RemoveLinkedProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveLinkedProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMPropertyLink *op = static_cast<vtkSMPropertyLink *>(vp);

  vtkSMProxy *temp0 = NULL;
  char *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkSMProxy") &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->RemoveLinkedProperty(temp0, temp1);
      }
    else
      {
      op->vtkSMPropertyLink::RemoveLinkedProperty(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMPropertyLink_GetNumberOfLinkedProperties(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfLinkedProperties");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMPropertyLink *op = static_cast<vtkSMPropertyLink *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned int tempr = (ap.IsBound() ?
      op->GetNumberOfLinkedProperties() :
      op->vtkSMPropertyLink::GetNumberOfLinkedProperties());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMPropertyLink_GetLinkedProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLinkedProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMPropertyLink *op = static_cast<vtkSMPropertyLink *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkSMProperty *tempr = (ap.IsBound() ?
      op->GetLinkedProperty(temp0) :
      op->vtkSMPropertyLink::GetLinkedProperty(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMPropertyLink_GetLinkedProxy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLinkedProxy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMPropertyLink *op = static_cast<vtkSMPropertyLink *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkSMProxy *tempr = (ap.IsBound() ?
      op->GetLinkedProxy(temp0) :
      op->vtkSMPropertyLink::GetLinkedProxy(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMPropertyLink_GetLinkedPropertyName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLinkedPropertyName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMPropertyLink *op = static_cast<vtkSMPropertyLink *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetLinkedPropertyName(temp0) :
      op->vtkSMPropertyLink::GetLinkedPropertyName(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMPropertyLink_GetLinkedPropertyDirection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLinkedPropertyDirection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMPropertyLink *op = static_cast<vtkSMPropertyLink *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->GetLinkedPropertyDirection(temp0) :
      op->vtkSMPropertyLink::GetLinkedPropertyDirection(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMPropertyLink_RemoveAllLinks(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveAllLinks");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMPropertyLink *op = static_cast<vtkSMPropertyLink *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->RemoveAllLinks();
      }
    else
      {
      op->vtkSMPropertyLink::RemoveAllLinks();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMPropertyLink_LoadState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LoadState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMPropertyLink *op = static_cast<vtkSMPropertyLink *>(vp);

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
      op->vtkSMPropertyLink::LoadState(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkSMPropertyLink_Methods[] = {
  {(char*)"GetClassName", PyvtkSMPropertyLink_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkSMPropertyLink_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkSMPropertyLink_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkSMPropertyLink\nC++: vtkSMPropertyLink *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkSMPropertyLink_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkSMPropertyLink\nC++: vtkSMPropertyLink *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"AddLinkedProperty", PyvtkSMPropertyLink_AddLinkedProperty, METH_VARARGS,
   (char*)"V.AddLinkedProperty(vtkSMProxy, string, int)\nC++: void AddLinkedProperty(vtkSMProxy *proxy,\n    const char *propertyname, int updateDir)\n\nAdd a property to the link. updateDir determines whether a\nproperty of the proxy is read or written. When a property of an\ninput proxy changes, it's value is pushed to all other output\nproxies in the link. A property can be set to be both input and\noutput by adding 2 links, one to INPUT and the other to OUTPUT\nWhen a link is added, all output property values are synchronized\nwith that of the input.\n"},
  {(char*)"RemoveLinkedProperty", PyvtkSMPropertyLink_RemoveLinkedProperty, METH_VARARGS,
   (char*)"V.RemoveLinkedProperty(vtkSMProxy, string)\nC++: void RemoveLinkedProperty(vtkSMProxy *proxy,\n    const char *propertyname)\n\nAdd a property to the link. updateDir determines whether a\nproperty of the proxy is read or written. When a property of an\ninput proxy changes, it's value is pushed to all other output\nproxies in the link. A property can be set to be both input and\noutput by adding 2 links, one to INPUT and the other to OUTPUT\nWhen a link is added, all output property values are synchronized\nwith that of the input.\n"},
  {(char*)"GetNumberOfLinkedProperties", PyvtkSMPropertyLink_GetNumberOfLinkedProperties, METH_VARARGS,
   (char*)"V.GetNumberOfLinkedProperties() -> int\nC++: unsigned int GetNumberOfLinkedProperties()\n\nGet the number of properties that are involved in this link.\n"},
  {(char*)"GetLinkedProperty", PyvtkSMPropertyLink_GetLinkedProperty, METH_VARARGS,
   (char*)"V.GetLinkedProperty(int) -> vtkSMProperty\nC++: vtkSMProperty *GetLinkedProperty(int index)\n\nGet a property involved in this link.\n"},
  {(char*)"GetLinkedProxy", PyvtkSMPropertyLink_GetLinkedProxy, METH_VARARGS,
   (char*)"V.GetLinkedProxy(int) -> vtkSMProxy\nC++: vtkSMProxy *GetLinkedProxy(int index)\n\nGet a proxy involved in this link.\n"},
  {(char*)"GetLinkedPropertyName", PyvtkSMPropertyLink_GetLinkedPropertyName, METH_VARARGS,
   (char*)"V.GetLinkedPropertyName(int) -> string\nC++: const char *GetLinkedPropertyName(int index)\n\nGet a property involved in this link.\n"},
  {(char*)"GetLinkedPropertyDirection", PyvtkSMPropertyLink_GetLinkedPropertyDirection, METH_VARARGS,
   (char*)"V.GetLinkedPropertyDirection(int) -> int\nC++: int GetLinkedPropertyDirection(int index)\n\nGet the direction of a property involved in this link (see\nvtkSMLink::UpdateDirections)\n"},
  {(char*)"RemoveAllLinks", PyvtkSMPropertyLink_RemoveAllLinks, METH_VARARGS,
   (char*)"V.RemoveAllLinks()\nC++: virtual void RemoveAllLinks()\n\nRemove all links.\n"},
  {(char*)"LoadState", PyvtkSMPropertyLink_LoadState, METH_VARARGS,
   (char*)"V.LoadState(vtkSMMessage, vtkSMProxyLocator)\nC++: virtual void LoadState(const vtkSMMessage *msg,\n    vtkSMProxyLocator *locator)\n\nThis method is used to initialize the object to the given state\nIf the definitionOnly Flag is set to True the proxy won't load\nthe properties values and just setup the new proxy hierarchy with\nall subproxy globalIDs set. This enables splitting the load\nprocess in 2 step to prevent invalid state when a property refers\nto a sub-proxy that does not exist yet.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkSMPropertyLink_StaticNew()
{
  return vtkSMPropertyLink::New();
}

PyObject *PyVTKClass_vtkSMPropertyLinkNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkSMPropertyLink_StaticNew,
    PyvtkSMPropertyLink_Methods,
    "vtkSMPropertyLink", modulename,
    NULL, NULL,
    PyvtkSMPropertyLink_Doc(),
    PyVTKClass_vtkSMLinkNew(modulename));
  return cls;
}

const char **PyvtkSMPropertyLink_Doc()
{
  static const char *docstring[] = {
    "vtkSMPropertyLink -\n\n",
    "Superclass: vtkSMLink\n\n",
    "Creates a link between two properties. Can create M->N links. At the\ntime when the link is created every output property is synchornized\nwith the first input property.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkSMPropertyLink(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkSMPropertyLinkNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkSMPropertyLink", o) != 0)
    {
    Py_DECREF(o);
    }

}

