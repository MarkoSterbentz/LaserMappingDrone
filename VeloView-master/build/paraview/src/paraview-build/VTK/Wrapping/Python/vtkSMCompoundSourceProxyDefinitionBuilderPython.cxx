// python wrapper for vtkSMCompoundSourceProxyDefinitionBuilder
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkSMCompoundSourceProxyDefinitionBuilder.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkSMCompoundSourceProxyDefinitionBuilder(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkSMCompoundSourceProxyDefinitionBuilderNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkSMObjectNew
extern "C" { PyObject *PyVTKClass_vtkSMObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkSMObjectNew
#endif

static const char **PyvtkSMCompoundSourceProxyDefinitionBuilder_Doc();


static PyObject *
PyvtkSMCompoundSourceProxyDefinitionBuilder_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMCompoundSourceProxyDefinitionBuilder *op = static_cast<vtkSMCompoundSourceProxyDefinitionBuilder *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkSMCompoundSourceProxyDefinitionBuilder::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMCompoundSourceProxyDefinitionBuilder_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMCompoundSourceProxyDefinitionBuilder *op = static_cast<vtkSMCompoundSourceProxyDefinitionBuilder *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSMCompoundSourceProxyDefinitionBuilder::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMCompoundSourceProxyDefinitionBuilder_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMCompoundSourceProxyDefinitionBuilder *op = static_cast<vtkSMCompoundSourceProxyDefinitionBuilder *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkSMCompoundSourceProxyDefinitionBuilder *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSMCompoundSourceProxyDefinitionBuilder::NewInstance());

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
PyvtkSMCompoundSourceProxyDefinitionBuilder_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkSMCompoundSourceProxyDefinitionBuilder *tempr = vtkSMCompoundSourceProxyDefinitionBuilder::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMCompoundSourceProxyDefinitionBuilder_Reset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Reset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMCompoundSourceProxyDefinitionBuilder *op = static_cast<vtkSMCompoundSourceProxyDefinitionBuilder *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Reset();
      }
    else
      {
      op->vtkSMCompoundSourceProxyDefinitionBuilder::Reset();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMCompoundSourceProxyDefinitionBuilder_AddProxy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddProxy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMCompoundSourceProxyDefinitionBuilder *op = static_cast<vtkSMCompoundSourceProxyDefinitionBuilder *>(vp);

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
      op->vtkSMCompoundSourceProxyDefinitionBuilder::AddProxy(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMCompoundSourceProxyDefinitionBuilder_ExposeProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ExposeProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMCompoundSourceProxyDefinitionBuilder *op = static_cast<vtkSMCompoundSourceProxyDefinitionBuilder *>(vp);

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
      op->vtkSMCompoundSourceProxyDefinitionBuilder::ExposeProperty(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMCompoundSourceProxyDefinitionBuilder_ExposeOutputPort_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ExposeOutputPort");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMCompoundSourceProxyDefinitionBuilder *op = static_cast<vtkSMCompoundSourceProxyDefinitionBuilder *>(vp);

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
      op->vtkSMCompoundSourceProxyDefinitionBuilder::ExposeOutputPort(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkSMCompoundSourceProxyDefinitionBuilder_ExposeOutputPort_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ExposeOutputPort");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMCompoundSourceProxyDefinitionBuilder *op = static_cast<vtkSMCompoundSourceProxyDefinitionBuilder *>(vp);

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
      op->vtkSMCompoundSourceProxyDefinitionBuilder::ExposeOutputPort(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkSMCompoundSourceProxyDefinitionBuilder_ExposeOutputPort_Methods[] = {
  {NULL, PyvtkSMCompoundSourceProxyDefinitionBuilder_ExposeOutputPort_s1, METH_VARARGS,
   (char*)"@zzz"},
  {NULL, PyvtkSMCompoundSourceProxyDefinitionBuilder_ExposeOutputPort_s2, METH_VARARGS,
   (char*)"@zIz"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkSMCompoundSourceProxyDefinitionBuilder_ExposeOutputPort(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkSMCompoundSourceProxyDefinitionBuilder_ExposeOutputPort_Methods;
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
PyvtkSMCompoundSourceProxyDefinitionBuilder_GetNumberOfProxies(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfProxies");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMCompoundSourceProxyDefinitionBuilder *op = static_cast<vtkSMCompoundSourceProxyDefinitionBuilder *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned int tempr = (ap.IsBound() ?
      op->GetNumberOfProxies() :
      op->vtkSMCompoundSourceProxyDefinitionBuilder::GetNumberOfProxies());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMCompoundSourceProxyDefinitionBuilder_GetProxy_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProxy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMCompoundSourceProxyDefinitionBuilder *op = static_cast<vtkSMCompoundSourceProxyDefinitionBuilder *>(vp);

  unsigned int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkSMProxy *tempr = (ap.IsBound() ?
      op->GetProxy(temp0) :
      op->vtkSMCompoundSourceProxyDefinitionBuilder::GetProxy(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkSMCompoundSourceProxyDefinitionBuilder_GetProxy_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProxy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMCompoundSourceProxyDefinitionBuilder *op = static_cast<vtkSMCompoundSourceProxyDefinitionBuilder *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkSMProxy *tempr = (ap.IsBound() ?
      op->GetProxy(temp0) :
      op->vtkSMCompoundSourceProxyDefinitionBuilder::GetProxy(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkSMCompoundSourceProxyDefinitionBuilder_GetProxy_Methods[] = {
  {NULL, PyvtkSMCompoundSourceProxyDefinitionBuilder_GetProxy_s1, METH_VARARGS,
   (char*)"@I"},
  {NULL, PyvtkSMCompoundSourceProxyDefinitionBuilder_GetProxy_s2, METH_VARARGS,
   (char*)"@z"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkSMCompoundSourceProxyDefinitionBuilder_GetProxy(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkSMCompoundSourceProxyDefinitionBuilder_GetProxy_Methods;
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
PyvtkSMCompoundSourceProxyDefinitionBuilder_GetProxyName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProxyName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMCompoundSourceProxyDefinitionBuilder *op = static_cast<vtkSMCompoundSourceProxyDefinitionBuilder *>(vp);

  unsigned int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetProxyName(temp0) :
      op->vtkSMCompoundSourceProxyDefinitionBuilder::GetProxyName(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMCompoundSourceProxyDefinitionBuilder_SaveDefinition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SaveDefinition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMCompoundSourceProxyDefinitionBuilder *op = static_cast<vtkSMCompoundSourceProxyDefinitionBuilder *>(vp);

  vtkPVXMLElement *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPVXMLElement"))
    {
    vtkPVXMLElement *tempr = (ap.IsBound() ?
      op->SaveDefinition(temp0) :
      op->vtkSMCompoundSourceProxyDefinitionBuilder::SaveDefinition(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkSMCompoundSourceProxyDefinitionBuilder_Methods[] = {
  {(char*)"GetClassName", PyvtkSMCompoundSourceProxyDefinitionBuilder_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkSMCompoundSourceProxyDefinitionBuilder_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkSMCompoundSourceProxyDefinitionBuilder_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkSMCompoundSourceProxyDefinitionBuilder\nC++: vtkSMCompoundSourceProxyDefinitionBuilder *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkSMCompoundSourceProxyDefinitionBuilder_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject)\n    -> vtkSMCompoundSourceProxyDefinitionBuilder\nC++: vtkSMCompoundSourceProxyDefinitionBuilder *SafeDownCast(\n    vtkObject* o)\n\n"},
  {(char*)"Reset", PyvtkSMCompoundSourceProxyDefinitionBuilder_Reset, METH_VARARGS,
   (char*)"V.Reset()\nC++: void Reset()\n\nResets the builder. This can be used when using the builder to\ncreate multiple definitions.\n"},
  {(char*)"AddProxy", PyvtkSMCompoundSourceProxyDefinitionBuilder_AddProxy, METH_VARARGS,
   (char*)"V.AddProxy(string, vtkSMProxy)\nC++: void AddProxy(const char *name, vtkSMProxy *proxy)\n\nAdd a proxy to be included in this compound proxy. The name must\nbe unique to each proxy added, otherwise the previously added\nproxy will be replaced.\n"},
  {(char*)"ExposeProperty", PyvtkSMCompoundSourceProxyDefinitionBuilder_ExposeProperty, METH_VARARGS,
   (char*)"V.ExposeProperty(string, string, string)\nC++: void ExposeProperty(const char *proxyName,\n    const char *propertyName, const char *exposedName)\n\nExpose a property from the sub proxy (added using AddProxy). Only\nexposed properties are accessible externally. Note that the sub\nproxy whose property is being exposed must have been already\nadded using AddProxy().\n"},
  {(char*)"ExposeOutputPort", PyvtkSMCompoundSourceProxyDefinitionBuilder_ExposeOutputPort, METH_VARARGS,
   (char*)"V.ExposeOutputPort(string, string, string)\nC++: void ExposeOutputPort(const char *proxyName,\n    const char *portName, const char *exposedName)\nV.ExposeOutputPort(string, int, string)\nC++: void ExposeOutputPort(const char *proxyName,\n    unsigned int portIndex, const char *exposedName)\n\nExpose an output port from a subproxy. Exposed output ports are\ntreated as output ports of the vtkSMCompoundSourceProxy itself.\nThis method does not may the output port available. One must call\nCreateOutputPorts().\n"},
  {(char*)"GetNumberOfProxies", PyvtkSMCompoundSourceProxyDefinitionBuilder_GetNumberOfProxies, METH_VARARGS,
   (char*)"V.GetNumberOfProxies() -> int\nC++: unsigned int GetNumberOfProxies()\n\nReturns the number of sub-proxies.\n"},
  {(char*)"GetProxy", PyvtkSMCompoundSourceProxyDefinitionBuilder_GetProxy, METH_VARARGS,
   (char*)"V.GetProxy(int) -> vtkSMProxy\nC++: vtkSMProxy *GetProxy(unsigned int cc)\nV.GetProxy(string) -> vtkSMProxy\nC++: vtkSMProxy *GetProxy(const char *name)\n\nReturns the sub proxy at a given index.\n"},
  {(char*)"GetProxyName", PyvtkSMCompoundSourceProxyDefinitionBuilder_GetProxyName, METH_VARARGS,
   (char*)"V.GetProxyName(int) -> string\nC++: const char *GetProxyName(unsigned int index)\n\nReturns the name used to store sub-proxy. Returns 0 if sub-proxy\ndoes not exist.\n"},
  {(char*)"SaveDefinition", PyvtkSMCompoundSourceProxyDefinitionBuilder_SaveDefinition, METH_VARARGS,
   (char*)"V.SaveDefinition(vtkPVXMLElement) -> vtkPVXMLElement\nC++: vtkPVXMLElement *SaveDefinition(vtkPVXMLElement *root)\n\nThis is the same as save state except it will remove all\nreferences to \"outside\" proxies. Outside proxies are proxies that\nare not contained in the compound proxy.  As a result, the saved\nstate will be self contained.  Returns the top element created.\nIt is the caller's responsibility to delete the returned element.\nIf root is NULL, the returned element will be a top level\nelement.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkSMCompoundSourceProxyDefinitionBuilder_StaticNew()
{
  return vtkSMCompoundSourceProxyDefinitionBuilder::New();
}

PyObject *PyVTKClass_vtkSMCompoundSourceProxyDefinitionBuilderNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkSMCompoundSourceProxyDefinitionBuilder_StaticNew,
    PyvtkSMCompoundSourceProxyDefinitionBuilder_Methods,
    "vtkSMCompoundSourceProxyDefinitionBuilder", modulename,
    NULL, NULL,
    PyvtkSMCompoundSourceProxyDefinitionBuilder_Doc(),
    PyVTKClass_vtkSMObjectNew(modulename));
  return cls;
}

const char **PyvtkSMCompoundSourceProxyDefinitionBuilder_Doc()
{
  static const char *docstring[] = {
    "vtkSMCompoundSourceProxyDefinitionBuilder - used to build a\n\n",
    "Superclass: vtkSMObject\n\n",
    "vtkSMCompoundSourceProxyDefinitionBuilder is used to create a XML\ndefinition for a compound-proxy consisting of other proxies. This\nclass can only build one compound-proxy definition at a time. Use\nReset() to start a new definition.\n\nSee Also:\n\nvtkSMCompoundSourceProxy\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkSMCompoundSourceProxyDefinitionBuilder(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkSMCompoundSourceProxyDefinitionBuilderNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkSMCompoundSourceProxyDefinitionBuilder", o) != 0)
    {
    Py_DECREF(o);
    }

}

