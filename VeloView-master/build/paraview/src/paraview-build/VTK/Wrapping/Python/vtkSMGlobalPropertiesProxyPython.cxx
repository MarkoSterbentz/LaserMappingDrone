// python wrapper for vtkSMGlobalPropertiesProxy
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkSMGlobalPropertiesProxy.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkSMGlobalPropertiesProxy(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkSMGlobalPropertiesProxyNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkSMProxyNew
extern "C" { PyObject *PyVTKClass_vtkSMProxyNew(const char *); }
#define DECLARED_PyVTKClass_vtkSMProxyNew
#endif

static const char **PyvtkSMGlobalPropertiesProxy_Doc();


static PyObject *
PyvtkSMGlobalPropertiesProxy_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMGlobalPropertiesProxy *op = static_cast<vtkSMGlobalPropertiesProxy *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkSMGlobalPropertiesProxy::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMGlobalPropertiesProxy_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMGlobalPropertiesProxy *op = static_cast<vtkSMGlobalPropertiesProxy *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSMGlobalPropertiesProxy::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMGlobalPropertiesProxy_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMGlobalPropertiesProxy *op = static_cast<vtkSMGlobalPropertiesProxy *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkSMGlobalPropertiesProxy *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSMGlobalPropertiesProxy::NewInstance());

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
PyvtkSMGlobalPropertiesProxy_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkSMGlobalPropertiesProxy *tempr = vtkSMGlobalPropertiesProxy::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMGlobalPropertiesProxy_Link(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Link");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMGlobalPropertiesProxy *op = static_cast<vtkSMGlobalPropertiesProxy *>(vp);

  char *temp0 = NULL;
  vtkSMProxy *temp1 = NULL;
  char *temp2 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkSMProxy") &&
      ap.GetValue(temp2))
    {
    bool tempr = (ap.IsBound() ?
      op->Link(temp0, temp1, temp2) :
      op->vtkSMGlobalPropertiesProxy::Link(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMGlobalPropertiesProxy_Unlink(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Unlink");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMGlobalPropertiesProxy *op = static_cast<vtkSMGlobalPropertiesProxy *>(vp);

  char *temp0 = NULL;
  vtkSMProxy *temp1 = NULL;
  char *temp2 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkSMProxy") &&
      ap.GetValue(temp2))
    {
    bool tempr = (ap.IsBound() ?
      op->Unlink(temp0, temp1, temp2) :
      op->vtkSMGlobalPropertiesProxy::Unlink(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMGlobalPropertiesProxy_RemoveAllLinks(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveAllLinks");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMGlobalPropertiesProxy *op = static_cast<vtkSMGlobalPropertiesProxy *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->RemoveAllLinks();
      }
    else
      {
      op->vtkSMGlobalPropertiesProxy::RemoveAllLinks();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMGlobalPropertiesProxy_GetLinkedPropertyName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLinkedPropertyName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMGlobalPropertiesProxy *op = static_cast<vtkSMGlobalPropertiesProxy *>(vp);

  vtkSMProxy *temp0 = NULL;
  char *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkSMProxy") &&
      ap.GetValue(temp1))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetLinkedPropertyName(temp0, temp1) :
      op->vtkSMGlobalPropertiesProxy::GetLinkedPropertyName(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMGlobalPropertiesProxy_SaveXMLState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SaveXMLState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMGlobalPropertiesProxy *op = static_cast<vtkSMGlobalPropertiesProxy *>(vp);

  vtkPVXMLElement *temp0 = NULL;
  vtkSMPropertyIterator *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkPVXMLElement") &&
      ap.GetVTKObject(temp1, "vtkSMPropertyIterator"))
    {
    vtkPVXMLElement *tempr = (ap.IsBound() ?
      op->SaveXMLState(temp0, temp1) :
      op->vtkSMGlobalPropertiesProxy::SaveXMLState(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMGlobalPropertiesProxy_LoadXMLState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LoadXMLState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMGlobalPropertiesProxy *op = static_cast<vtkSMGlobalPropertiesProxy *>(vp);

  vtkPVXMLElement *temp0 = NULL;
  vtkSMProxyLocator *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkPVXMLElement") &&
      ap.GetVTKObject(temp1, "vtkSMProxyLocator"))
    {
    int tempr = (ap.IsBound() ?
      op->LoadXMLState(temp0, temp1) :
      op->vtkSMGlobalPropertiesProxy::LoadXMLState(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkSMGlobalPropertiesProxy_Methods[] = {
  {(char*)"GetClassName", PyvtkSMGlobalPropertiesProxy_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkSMGlobalPropertiesProxy_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkSMGlobalPropertiesProxy_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkSMGlobalPropertiesProxy\nC++: vtkSMGlobalPropertiesProxy *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkSMGlobalPropertiesProxy_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkSMGlobalPropertiesProxy\nC++: vtkSMGlobalPropertiesProxy *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"Link", PyvtkSMGlobalPropertiesProxy_Link, METH_VARARGS,
   (char*)"V.Link(string, vtkSMProxy, string) -> bool\nC++: bool Link(const char *propertyname, vtkSMProxy *targetProxy,\n    const char *targetPropertyName)\n\nSet up a property link with the given property on the proxy with\nthe specified property on this proxy. The link is automatically\nbroken if the target property is modified outside by someone\nother than this vtkSMGlobalPropertiesProxy instance or when the\ntargetProxy is destroyed.\n"},
  {(char*)"Unlink", PyvtkSMGlobalPropertiesProxy_Unlink, METH_VARARGS,
   (char*)"V.Unlink(string, vtkSMProxy, string) -> bool\nC++: bool Unlink(const char *propertyname,\n    vtkSMProxy *targetProxy, const char *targetPropertyName)\n\nUnlink a property link,\n"},
  {(char*)"RemoveAllLinks", PyvtkSMGlobalPropertiesProxy_RemoveAllLinks, METH_VARARGS,
   (char*)"V.RemoveAllLinks()\nC++: void RemoveAllLinks()\n\nRemove all links.\n"},
  {(char*)"GetLinkedPropertyName", PyvtkSMGlobalPropertiesProxy_GetLinkedPropertyName, METH_VARARGS,
   (char*)"V.GetLinkedPropertyName(vtkSMProxy, string) -> string\nC++: const char *GetLinkedPropertyName(vtkSMProxy *targetProxy,\n    const char *targetPropertyName)\n\nIf a link between the target and a property on this proxy exists,\nreturns the name of that property else NULL.\n"},
  {(char*)"SaveXMLState", PyvtkSMGlobalPropertiesProxy_SaveXMLState, METH_VARARGS,
   (char*)"V.SaveXMLState(vtkPVXMLElement, vtkSMPropertyIterator)\n    -> vtkPVXMLElement\nC++: virtual vtkPVXMLElement *SaveXMLState(vtkPVXMLElement *root,\n    vtkSMPropertyIterator *iter)\n\nOverridden to save link state.\n"},
  {(char*)"LoadXMLState", PyvtkSMGlobalPropertiesProxy_LoadXMLState, METH_VARARGS,
   (char*)"V.LoadXMLState(vtkPVXMLElement, vtkSMProxyLocator) -> int\nC++: virtual int LoadXMLState(vtkPVXMLElement *element,\n    vtkSMProxyLocator *locator)\n\nOverridden to load links state.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkSMGlobalPropertiesProxy_StaticNew()
{
  return vtkSMGlobalPropertiesProxy::New();
}

PyObject *PyVTKClass_vtkSMGlobalPropertiesProxyNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkSMGlobalPropertiesProxy_StaticNew,
    PyvtkSMGlobalPropertiesProxy_Methods,
    "vtkSMGlobalPropertiesProxy", modulename,
    NULL, NULL,
    PyvtkSMGlobalPropertiesProxy_Doc(),
    PyVTKClass_vtkSMProxyNew(modulename));
  return cls;
}

const char **PyvtkSMGlobalPropertiesProxy_Doc()
{
  static const char *docstring[] = {
    "vtkSMGlobalPropertiesProxy - proxy that adds support for linking\n\n",
    "Superclass: vtkSMProxy\n\n",
    "vtkSMGlobalPropertiesProxy can be thought of as a proxy which\nprovides API to link its properties with any arbitrary proxy\nunidirectionally, so that if the property value on this proxy\nchanges, the linked property on every other proxy is updated. However\nif the linked property (or target property) is modified externally,\nthen the link is automatically broken.\n\nThis is suitable adding ability for c",
    "olor palettes. Using XML hints\nin the proxy definition, one can write application code that setups\nlinks with a proxy and the color palette proxy (as done in\nvtkSMParaViewPipelineController). Now as long as the user doesn't\nmodify the linked properties, the color palette can be changed and it\nwill reflect on all linked properties.\n\nvtkSMParaViewPipelineController uses the property level hint\n<Glob",
    "alPropertyLink /> to define such links e.g.  \n<DoubleVectorProperty name=\"Background\" ... >\n        ...\n     <Hints>\n       <GlobalPropertyLink type=\"ColorPalette\"\nproperty=\"BackgroundColor\" />\n     </Hints>\n   </DoubleVectorProperty>   \n\nWhile vtkSMParaViewPipelineController currently only respects hints\non the property, we can in future add support for respecting hints at\nthe proxy level if need",
    "ed.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkSMGlobalPropertiesProxy(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkSMGlobalPropertiesProxyNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkSMGlobalPropertiesProxy", o) != 0)
    {
    Py_DECREF(o);
    }

}

