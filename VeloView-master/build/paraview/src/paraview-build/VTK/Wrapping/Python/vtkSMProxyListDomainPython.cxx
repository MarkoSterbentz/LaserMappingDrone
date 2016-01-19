// python wrapper for vtkSMProxyListDomain
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkSMProxyListDomain.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkSMProxyListDomain(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkSMProxyListDomainNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkSMDomainNew
extern "C" { PyObject *PyVTKClass_vtkSMDomainNew(const char *); }
#define DECLARED_PyVTKClass_vtkSMDomainNew
#endif

static const char **PyvtkSMProxyListDomain_Doc();


static PyObject *
PyvtkSMProxyListDomain_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxyListDomain *op = static_cast<vtkSMProxyListDomain *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkSMProxyListDomain::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMProxyListDomain_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxyListDomain *op = static_cast<vtkSMProxyListDomain *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSMProxyListDomain::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMProxyListDomain_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxyListDomain *op = static_cast<vtkSMProxyListDomain *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkSMProxyListDomain *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSMProxyListDomain::NewInstance());

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
PyvtkSMProxyListDomain_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkSMProxyListDomain *tempr = vtkSMProxyListDomain::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMProxyListDomain_GetNumberOfProxyTypes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfProxyTypes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxyListDomain *op = static_cast<vtkSMProxyListDomain *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned int tempr = (ap.IsBound() ?
      op->GetNumberOfProxyTypes() :
      op->vtkSMProxyListDomain::GetNumberOfProxyTypes());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMProxyListDomain_GetProxyGroup(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProxyGroup");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxyListDomain *op = static_cast<vtkSMProxyListDomain *>(vp);

  unsigned int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetProxyGroup(temp0) :
      op->vtkSMProxyListDomain::GetProxyGroup(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMProxyListDomain_GetProxyName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProxyName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxyListDomain *op = static_cast<vtkSMProxyListDomain *>(vp);

  unsigned int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetProxyName(temp0) :
      op->vtkSMProxyListDomain::GetProxyName(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMProxyListDomain_IsInDomain(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsInDomain");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxyListDomain *op = static_cast<vtkSMProxyListDomain *>(vp);

  vtkSMProperty *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMProperty"))
    {
    int tempr = (ap.IsBound() ?
      op->IsInDomain(temp0) :
      op->vtkSMProxyListDomain::IsInDomain(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMProxyListDomain_AddProxy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddProxy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxyListDomain *op = static_cast<vtkSMProxyListDomain *>(vp);

  vtkSMProxy *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMProxy"))
    {
    if (ap.IsBound())
      {
      op->AddProxy(temp0);
      }
    else
      {
      op->vtkSMProxyListDomain::AddProxy(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMProxyListDomain_HasProxy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasProxy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxyListDomain *op = static_cast<vtkSMProxyListDomain *>(vp);

  vtkSMProxy *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMProxy"))
    {
    bool tempr = (ap.IsBound() ?
      op->HasProxy(temp0) :
      op->vtkSMProxyListDomain::HasProxy(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMProxyListDomain_GetNumberOfProxies(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfProxies");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxyListDomain *op = static_cast<vtkSMProxyListDomain *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned int tempr = (ap.IsBound() ?
      op->GetNumberOfProxies() :
      op->vtkSMProxyListDomain::GetNumberOfProxies());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMProxyListDomain_GetProxy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProxy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxyListDomain *op = static_cast<vtkSMProxyListDomain *>(vp);

  unsigned int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkSMProxy *tempr = (ap.IsBound() ?
      op->GetProxy(temp0) :
      op->vtkSMProxyListDomain::GetProxy(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMProxyListDomain_RemoveProxy_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveProxy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxyListDomain *op = static_cast<vtkSMProxyListDomain *>(vp);

  vtkSMProxy *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMProxy"))
    {
    int tempr = (ap.IsBound() ?
      op->RemoveProxy(temp0) :
      op->vtkSMProxyListDomain::RemoveProxy(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkSMProxyListDomain_RemoveProxy_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveProxy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxyListDomain *op = static_cast<vtkSMProxyListDomain *>(vp);

  unsigned int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->RemoveProxy(temp0) :
      op->vtkSMProxyListDomain::RemoveProxy(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkSMProxyListDomain_RemoveProxy_Methods[] = {
  {NULL, PyvtkSMProxyListDomain_RemoveProxy_s1, METH_VARARGS,
   (char*)"@O *vtkSMProxy"},
  {NULL, PyvtkSMProxyListDomain_RemoveProxy_s2, METH_VARARGS,
   (char*)"@I"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkSMProxyListDomain_RemoveProxy(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkSMProxyListDomain_RemoveProxy_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "RemoveProxy");
  return NULL;
}



static PyObject *
PyvtkSMProxyListDomain_CreateProxies(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateProxies");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxyListDomain *op = static_cast<vtkSMProxyListDomain *>(vp);

  vtkSMSessionProxyManager *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMSessionProxyManager"))
    {
    if (ap.IsBound())
      {
      op->CreateProxies(temp0);
      }
    else
      {
      op->vtkSMProxyListDomain::CreateProxies(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMProxyListDomain_SetDefaultValues(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDefaultValues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxyListDomain *op = static_cast<vtkSMProxyListDomain *>(vp);

  vtkSMProperty *temp0 = NULL;
  bool temp1 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkSMProperty") &&
      ap.GetValue(temp1))
    {
    int tempr = (ap.IsBound() ?
      op->SetDefaultValues(temp0, temp1) :
      op->vtkSMProxyListDomain::SetDefaultValues(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkSMProxyListDomain_Methods[] = {
  {(char*)"GetClassName", PyvtkSMProxyListDomain_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkSMProxyListDomain_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkSMProxyListDomain_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkSMProxyListDomain\nC++: vtkSMProxyListDomain *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkSMProxyListDomain_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkSMProxyListDomain\nC++: vtkSMProxyListDomain *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetNumberOfProxyTypes", PyvtkSMProxyListDomain_GetNumberOfProxyTypes, METH_VARARGS,
   (char*)"V.GetNumberOfProxyTypes() -> int\nC++: unsigned int GetNumberOfProxyTypes()\n\nReturns the number of proxies in the domain.\n"},
  {(char*)"GetProxyGroup", PyvtkSMProxyListDomain_GetProxyGroup, METH_VARARGS,
   (char*)"V.GetProxyGroup(int) -> string\nC++: const char *GetProxyGroup(unsigned int index)\n\nReturns the xml group name for the proxy at a given index.\n"},
  {(char*)"GetProxyName", PyvtkSMProxyListDomain_GetProxyName, METH_VARARGS,
   (char*)"V.GetProxyName(int) -> string\nC++: const char *GetProxyName(unsigned int index)\n\nReturns the xml type name for the proxy at a given index.\n"},
  {(char*)"IsInDomain", PyvtkSMProxyListDomain_IsInDomain, METH_VARARGS,
   (char*)"V.IsInDomain(vtkSMProperty) -> int\nC++: virtual int IsInDomain(vtkSMProperty *property)\n\nThis always returns true.\n"},
  {(char*)"AddProxy", PyvtkSMProxyListDomain_AddProxy, METH_VARARGS,
   (char*)"V.AddProxy(vtkSMProxy)\nC++: void AddProxy(vtkSMProxy *)\n\nAdd a proxy to the domain.\n"},
  {(char*)"HasProxy", PyvtkSMProxyListDomain_HasProxy, METH_VARARGS,
   (char*)"V.HasProxy(vtkSMProxy) -> bool\nC++: bool HasProxy(vtkSMProxy *)\n\nReturns if the proxy is present in the domain.\n"},
  {(char*)"GetNumberOfProxies", PyvtkSMProxyListDomain_GetNumberOfProxies, METH_VARARGS,
   (char*)"V.GetNumberOfProxies() -> int\nC++: unsigned int GetNumberOfProxies()\n\nGet number of proxies in the domain.\n"},
  {(char*)"GetProxy", PyvtkSMProxyListDomain_GetProxy, METH_VARARGS,
   (char*)"V.GetProxy(int) -> vtkSMProxy\nC++: vtkSMProxy *GetProxy(unsigned int index)\n\nGet proxy at a given index.\n"},
  {(char*)"RemoveProxy", PyvtkSMProxyListDomain_RemoveProxy, METH_VARARGS,
   (char*)"V.RemoveProxy(vtkSMProxy) -> int\nC++: int RemoveProxy(vtkSMProxy *proxy)\nV.RemoveProxy(int) -> int\nC++: int RemoveProxy(unsigned int index)\n\nRemoves the first occurence of the proxy in the domain. Returns\nif the proxy was removed.\n"},
  {(char*)"CreateProxies", PyvtkSMProxyListDomain_CreateProxies, METH_VARARGS,
   (char*)"V.CreateProxies(vtkSMSessionProxyManager)\nC++: void CreateProxies(vtkSMSessionProxyManager *pxm)\n\nCreates and populates the domain with the proxy-types. This will\nremove any existing proxies in the domain. Note that the newly\ncreated proxies won't be registered with the proxy manager.\n"},
  {(char*)"SetDefaultValues", PyvtkSMProxyListDomain_SetDefaultValues, METH_VARARGS,
   (char*)"V.SetDefaultValues(vtkSMProperty, bool) -> int\nC++: virtual int SetDefaultValues(vtkSMProperty *prop,\n    bool use_unchecked_values)\n\nA vtkSMProperty is often defined with a default value in the XML\nitself. However, many times, the default value must be determined\nat run time. To facilitate this, domains can override this method\nto compute and set the default value for the property. Note that\nunlike the compile-time default values, the application must\nexplicitly call this method to initialize the property.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkSMProxyListDomain_StaticNew()
{
  return vtkSMProxyListDomain::New();
}

PyObject *PyVTKClass_vtkSMProxyListDomainNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkSMProxyListDomain_StaticNew,
    PyvtkSMProxyListDomain_Methods,
    "vtkSMProxyListDomain", modulename,
    NULL, NULL,
    PyvtkSMProxyListDomain_Doc(),
    PyVTKClass_vtkSMDomainNew(modulename));
  return cls;
}

const char **PyvtkSMProxyListDomain_Doc()
{
  static const char *docstring[] = {
    "vtkSMProxyListDomain - union of proxies.\n\n",
    "Superclass: vtkSMDomain\n\n",
    "This domain is a collection of proxies that can be assigned as the\nvalue to a vtkSMProxyProperty. The Server Mananger configuration\ndefines the proxy types that form this list, while the value of this\ndomain is the list of instances of proxies.\n\nSee Also:\n\nvtkSMDomain vtkSMProxyProperty\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkSMProxyListDomain(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkSMProxyListDomainNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkSMProxyListDomain", o) != 0)
    {
    Py_DECREF(o);
    }

}

