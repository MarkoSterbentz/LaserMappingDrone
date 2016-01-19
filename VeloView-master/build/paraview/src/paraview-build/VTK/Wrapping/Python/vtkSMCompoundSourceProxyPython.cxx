// python wrapper for vtkSMCompoundSourceProxy
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkSMCompoundSourceProxy.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkSMCompoundSourceProxy(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkSMCompoundSourceProxyNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkSMSourceProxyNew
extern "C" { PyObject *PyVTKClass_vtkSMSourceProxyNew(const char *); }
#define DECLARED_PyVTKClass_vtkSMSourceProxyNew
#endif

static const char **PyvtkSMCompoundSourceProxy_Doc();


static PyObject *
PyvtkSMCompoundSourceProxy_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMCompoundSourceProxy *op = static_cast<vtkSMCompoundSourceProxy *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkSMCompoundSourceProxy::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMCompoundSourceProxy_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMCompoundSourceProxy *op = static_cast<vtkSMCompoundSourceProxy *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSMCompoundSourceProxy::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMCompoundSourceProxy_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMCompoundSourceProxy *op = static_cast<vtkSMCompoundSourceProxy *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkSMCompoundSourceProxy *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSMCompoundSourceProxy::NewInstance());

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
PyvtkSMCompoundSourceProxy_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkSMCompoundSourceProxy *tempr = vtkSMCompoundSourceProxy::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMCompoundSourceProxy_AddProxy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddProxy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMCompoundSourceProxy *op = static_cast<vtkSMCompoundSourceProxy *>(vp);

  char *temp0 = NULL;
  vtkSMProxy *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkSMProxy"))
    {
    if (ap.IsBound())
      {
      op->AddProxy(temp0, temp1);
      }
    else
      {
      op->vtkSMCompoundSourceProxy::AddProxy(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMCompoundSourceProxy_ExposeProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ExposeProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMCompoundSourceProxy *op = static_cast<vtkSMCompoundSourceProxy *>(vp);

  char *temp0 = NULL;
  char *temp1 = NULL;
  char *temp2 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      op->ExposeProperty(temp0, temp1, temp2);
      }
    else
      {
      op->vtkSMCompoundSourceProxy::ExposeProperty(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMCompoundSourceProxy_ExposeOutputPort_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ExposeOutputPort");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMCompoundSourceProxy *op = static_cast<vtkSMCompoundSourceProxy *>(vp);

  char *temp0 = NULL;
  char *temp1 = NULL;
  char *temp2 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      op->ExposeOutputPort(temp0, temp1, temp2);
      }
    else
      {
      op->vtkSMCompoundSourceProxy::ExposeOutputPort(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkSMCompoundSourceProxy_ExposeOutputPort_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ExposeOutputPort");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMCompoundSourceProxy *op = static_cast<vtkSMCompoundSourceProxy *>(vp);

  char *temp0 = NULL;
  unsigned int temp1;
  char *temp2 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      op->ExposeOutputPort(temp0, temp1, temp2);
      }
    else
      {
      op->vtkSMCompoundSourceProxy::ExposeOutputPort(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkSMCompoundSourceProxy_ExposeOutputPort_Methods[] = {
  {NULL, PyvtkSMCompoundSourceProxy_ExposeOutputPort_s1, METH_VARARGS,
   (char*)"@zzz"},
  {NULL, PyvtkSMCompoundSourceProxy_ExposeOutputPort_s2, METH_VARARGS,
   (char*)"@zIz"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkSMCompoundSourceProxy_ExposeOutputPort(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkSMCompoundSourceProxy_ExposeOutputPort_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "ExposeOutputPort");
  return NULL;
}



static PyObject *
PyvtkSMCompoundSourceProxy_GetNumberOfProxies(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfProxies");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMCompoundSourceProxy *op = static_cast<vtkSMCompoundSourceProxy *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned int tempr = (ap.IsBound() ?
      op->GetNumberOfProxies() :
      op->vtkSMCompoundSourceProxy::GetNumberOfProxies());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMCompoundSourceProxy_GetProxy_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProxy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMCompoundSourceProxy *op = static_cast<vtkSMCompoundSourceProxy *>(vp);

  unsigned int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkSMProxy *tempr = (ap.IsBound() ?
      op->GetProxy(temp0) :
      op->vtkSMCompoundSourceProxy::GetProxy(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkSMCompoundSourceProxy_GetProxy_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProxy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMCompoundSourceProxy *op = static_cast<vtkSMCompoundSourceProxy *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkSMProxy *tempr = (ap.IsBound() ?
      op->GetProxy(temp0) :
      op->vtkSMCompoundSourceProxy::GetProxy(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkSMCompoundSourceProxy_GetProxy_Methods[] = {
  {NULL, PyvtkSMCompoundSourceProxy_GetProxy_s1, METH_VARARGS,
   (char*)"@I"},
  {NULL, PyvtkSMCompoundSourceProxy_GetProxy_s2, METH_VARARGS,
   (char*)"@z"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkSMCompoundSourceProxy_GetProxy(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkSMCompoundSourceProxy_GetProxy_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetProxy");
  return NULL;
}



static PyObject *
PyvtkSMCompoundSourceProxy_GetProxyName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProxyName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMCompoundSourceProxy *op = static_cast<vtkSMCompoundSourceProxy *>(vp);

  unsigned int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetProxyName(temp0) :
      op->vtkSMCompoundSourceProxy::GetProxyName(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMCompoundSourceProxy_CreateOutputPorts(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateOutputPorts");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMCompoundSourceProxy *op = static_cast<vtkSMCompoundSourceProxy *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->CreateOutputPorts();
      }
    else
      {
      op->vtkSMCompoundSourceProxy::CreateOutputPorts();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMCompoundSourceProxy_CreateSelectionProxies(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateSelectionProxies");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMCompoundSourceProxy *op = static_cast<vtkSMCompoundSourceProxy *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->CreateSelectionProxies();
      }
    else
      {
      op->vtkSMCompoundSourceProxy::CreateSelectionProxies();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMCompoundSourceProxy_UpdateVTKObjects(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateVTKObjects");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMCompoundSourceProxy *op = static_cast<vtkSMCompoundSourceProxy *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->UpdateVTKObjects();
      }
    else
      {
      op->vtkSMCompoundSourceProxy::UpdateVTKObjects();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMCompoundSourceProxy_SaveDefinition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SaveDefinition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMCompoundSourceProxy *op = static_cast<vtkSMCompoundSourceProxy *>(vp);

  vtkPVXMLElement *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPVXMLElement"))
    {
    vtkPVXMLElement *tempr = (ap.IsBound() ?
      op->SaveDefinition(temp0) :
      op->vtkSMCompoundSourceProxy::SaveDefinition(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkSMCompoundSourceProxy_Methods[] = {
  {(char*)"GetClassName", PyvtkSMCompoundSourceProxy_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkSMCompoundSourceProxy_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkSMCompoundSourceProxy_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkSMCompoundSourceProxy\nC++: vtkSMCompoundSourceProxy *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkSMCompoundSourceProxy_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkSMCompoundSourceProxy\nC++: vtkSMCompoundSourceProxy *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"AddProxy", PyvtkSMCompoundSourceProxy_AddProxy, METH_VARARGS,
   (char*)"V.AddProxy(string, vtkSMProxy)\nC++: void AddProxy(const char *name, vtkSMProxy *proxy)\n\nAdd a proxy to be included in this compound proxy. The name must\nbe unique to each proxy added, otherwise the previously added\nproxy will be replaced.\n"},
  {(char*)"ExposeProperty", PyvtkSMCompoundSourceProxy_ExposeProperty, METH_VARARGS,
   (char*)"V.ExposeProperty(string, string, string)\nC++: void ExposeProperty(const char *proxyName,\n    const char *propertyName, const char *exposedName)\n\nExpose a property from the sub proxy (added using AddProxy). Only\nexposed properties are accessible externally. Note that the sub\nproxy whose property is being exposed must have been already\nadded using AddProxy().\n"},
  {(char*)"ExposeOutputPort", PyvtkSMCompoundSourceProxy_ExposeOutputPort, METH_VARARGS,
   (char*)"V.ExposeOutputPort(string, string, string)\nC++: void ExposeOutputPort(const char *proxyName,\n    const char *portName, const char *exposedName)\nV.ExposeOutputPort(string, int, string)\nC++: void ExposeOutputPort(const char *proxyName,\n    unsigned int portIndex, const char *exposedName)\n\nExpose an output port from a subproxy. Exposed output ports are\ntreated as output ports of the vtkSMCompoundSourceProxy itself.\nThis method does not may the output port available. One must call\nCreateOutputPorts().\n"},
  {(char*)"GetNumberOfProxies", PyvtkSMCompoundSourceProxy_GetNumberOfProxies, METH_VARARGS,
   (char*)"V.GetNumberOfProxies() -> int\nC++: unsigned int GetNumberOfProxies()\n\nReturns the number of sub-proxies.\n"},
  {(char*)"GetProxy", PyvtkSMCompoundSourceProxy_GetProxy, METH_VARARGS,
   (char*)"V.GetProxy(int) -> vtkSMProxy\nC++: vtkSMProxy *GetProxy(unsigned int cc)\nV.GetProxy(string) -> vtkSMProxy\nC++: vtkSMProxy *GetProxy(const char *name)\n\nReturns the sub proxy at a given index.\n"},
  {(char*)"GetProxyName", PyvtkSMCompoundSourceProxy_GetProxyName, METH_VARARGS,
   (char*)"V.GetProxyName(int) -> string\nC++: const char *GetProxyName(unsigned int index)\n\nReturns the name used to store sub-proxy. Returns 0 if sub-proxy\ndoes not exist.\n"},
  {(char*)"CreateOutputPorts", PyvtkSMCompoundSourceProxy_CreateOutputPorts, METH_VARARGS,
   (char*)"V.CreateOutputPorts()\nC++: virtual void CreateOutputPorts()\n\nCreates the output port proxiess for this filter. Each output\nport proxy corresponds to an actual output port on the algorithm.\n"},
  {(char*)"CreateSelectionProxies", PyvtkSMCompoundSourceProxy_CreateSelectionProxies, METH_VARARGS,
   (char*)"V.CreateSelectionProxies()\nC++: virtual void CreateSelectionProxies()\n\nCreates extract selection proxies for each output port if not\nalready created. Overridden to update the selection proxies.\n"},
  {(char*)"UpdateVTKObjects", PyvtkSMCompoundSourceProxy_UpdateVTKObjects, METH_VARARGS,
   (char*)"V.UpdateVTKObjects()\nC++: virtual void UpdateVTKObjects()\n\nUpdate the VTK object on the server by pushing the values of all\nmodifed properties (un-modified properties are ignored). If the\nobject has not been created, it will be created first.\n"},
  {(char*)"SaveDefinition", PyvtkSMCompoundSourceProxy_SaveDefinition, METH_VARARGS,
   (char*)"V.SaveDefinition(vtkPVXMLElement) -> vtkPVXMLElement\nC++: vtkPVXMLElement *SaveDefinition(vtkPVXMLElement *root)\n\nThis is the same as save state except it will remove all\nreferences to \"outside\" proxies. Outside proxies are proxies that\nare not contained in the compound proxy.  As a result, the saved\nstate will be self contained.  Returns the top element created.\nIt is the caller's responsibility to delete the returned element.\nIf root is NULL, the returned element will be a top level\nelement.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkSMCompoundSourceProxy_StaticNew()
{
  return vtkSMCompoundSourceProxy::New();
}

PyObject *PyVTKClass_vtkSMCompoundSourceProxyNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkSMCompoundSourceProxy_StaticNew,
    PyvtkSMCompoundSourceProxy_Methods,
    "vtkSMCompoundSourceProxy", modulename,
    NULL, NULL,
    PyvtkSMCompoundSourceProxy_Doc(),
    PyVTKClass_vtkSMSourceProxyNew(modulename));
  return cls;
}

const char **PyvtkSMCompoundSourceProxy_Doc()
{
  static const char *docstring[] = {
    "vtkSMCompoundSourceProxy - a proxy excapsulation a pipeline of\nproxies.\n\n",
    "Superclass: vtkSMSourceProxy\n\n",
    "vtkSMCompoundSourceProxy is a proxy that allows grouping of multiple\nproxies. vtkSMProxy has also this capability since a proxy can have\nsub-proxies. However, vtkSMProxy does not allow public access to\nthese proxies. The only access is through exposed properties. The\nmain reason behind this is consistency. There are proxies that will\nnot work if the program accesses the sub-proxies directly. The m",
    "ain\npurpose of vtkSMCompoundSourceProxy is to provide an interface to\naccess the sub-proxies. The compound proxy also maintains the\nconnections between subproxies. This makes it possible to encapsulate\na pipeline into a single proxy. Since vtkSMCompoundSourceProxy is a\nvtkSMSourceProxy, it can be directly used to input to other filters,\nrepresentations etc. vtkSMCompoundSourceProxy provides API to",
    " exposed\nproperties from sub proxies as well as output ports of the\nsubproxies.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkSMCompoundSourceProxy(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkSMCompoundSourceProxyNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkSMCompoundSourceProxy", o) != 0)
    {
    Py_DECREF(o);
    }

}

