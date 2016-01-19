// python wrapper for vtkSMProxyProperty
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkSMProxy.h"
#include "vtkSMProxyProperty.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkSMProxyProperty(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkSMProxyPropertyNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkSMPropertyNew
extern "C" { PyObject *PyVTKClass_vtkSMPropertyNew(const char *); }
#define DECLARED_PyVTKClass_vtkSMPropertyNew
#endif

static const char **PyvtkSMProxyProperty_Doc();


static PyObject *
PyvtkSMProxyProperty_EnableProxyCreation(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "EnableProxyCreation");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkSMProxyProperty::EnableProxyCreation();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMProxyProperty_DisableProxyCreation(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "DisableProxyCreation");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkSMProxyProperty::DisableProxyCreation();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMProxyProperty_CanCreateProxy(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "CanCreateProxy");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    bool tempr = vtkSMProxyProperty::CanCreateProxy();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMProxyProperty_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxyProperty *op = static_cast<vtkSMProxyProperty *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkSMProxyProperty::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMProxyProperty_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxyProperty *op = static_cast<vtkSMProxyProperty *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSMProxyProperty::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMProxyProperty_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxyProperty *op = static_cast<vtkSMProxyProperty *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkSMProxyProperty *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSMProxyProperty::NewInstance());

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
PyvtkSMProxyProperty_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkSMProxyProperty *tempr = vtkSMProxyProperty::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMProxyProperty_AddProxy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddProxy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxyProperty *op = static_cast<vtkSMProxyProperty *>(vp);

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
      op->vtkSMProxyProperty::AddProxy(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMProxyProperty_SetProxy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetProxy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxyProperty *op = static_cast<vtkSMProxyProperty *>(vp);

  unsigned int temp0;
  vtkSMProxy *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkSMProxy"))
    {
    if (ap.IsBound())
      {
      op->SetProxy(temp0, temp1);
      }
    else
      {
      op->vtkSMProxyProperty::SetProxy(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMProxyProperty_RemoveProxy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveProxy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxyProperty *op = static_cast<vtkSMProxyProperty *>(vp);

  vtkSMProxy *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMProxy"))
    {
    if (ap.IsBound())
      {
      op->RemoveProxy(temp0);
      }
    else
      {
      op->vtkSMProxyProperty::RemoveProxy(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMProxyProperty_RemoveAllProxies(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveAllProxies");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxyProperty *op = static_cast<vtkSMProxyProperty *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->RemoveAllProxies();
      }
    else
      {
      op->vtkSMProxyProperty::RemoveAllProxies();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMProxyProperty_IsProxyAdded(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsProxyAdded");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxyProperty *op = static_cast<vtkSMProxyProperty *>(vp);

  vtkSMProxy *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMProxy"))
    {
    bool tempr = (ap.IsBound() ?
      op->IsProxyAdded(temp0) :
      op->vtkSMProxyProperty::IsProxyAdded(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMProxyProperty_AddUncheckedProxy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddUncheckedProxy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxyProperty *op = static_cast<vtkSMProxyProperty *>(vp);

  vtkSMProxy *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMProxy"))
    {
    if (ap.IsBound())
      {
      op->AddUncheckedProxy(temp0);
      }
    else
      {
      op->vtkSMProxyProperty::AddUncheckedProxy(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMProxyProperty_SetUncheckedProxy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUncheckedProxy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxyProperty *op = static_cast<vtkSMProxyProperty *>(vp);

  unsigned int temp0;
  vtkSMProxy *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkSMProxy"))
    {
    if (ap.IsBound())
      {
      op->SetUncheckedProxy(temp0, temp1);
      }
    else
      {
      op->vtkSMProxyProperty::SetUncheckedProxy(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMProxyProperty_RemoveAllUncheckedProxies(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveAllUncheckedProxies");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxyProperty *op = static_cast<vtkSMProxyProperty *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->RemoveAllUncheckedProxies();
      }
    else
      {
      op->vtkSMProxyProperty::RemoveAllUncheckedProxies();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMProxyProperty_GetNumberOfProxies(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfProxies");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxyProperty *op = static_cast<vtkSMProxyProperty *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned int tempr = (ap.IsBound() ?
      op->GetNumberOfProxies() :
      op->vtkSMProxyProperty::GetNumberOfProxies());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMProxyProperty_GetNumberOfUncheckedProxies(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfUncheckedProxies");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxyProperty *op = static_cast<vtkSMProxyProperty *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned int tempr = (ap.IsBound() ?
      op->GetNumberOfUncheckedProxies() :
      op->vtkSMProxyProperty::GetNumberOfUncheckedProxies());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMProxyProperty_SetNumberOfProxies(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfProxies");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxyProperty *op = static_cast<vtkSMProxyProperty *>(vp);

  unsigned int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetNumberOfProxies(temp0);
      }
    else
      {
      op->vtkSMProxyProperty::SetNumberOfProxies(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMProxyProperty_SetNumberOfUncheckedProxies(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfUncheckedProxies");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxyProperty *op = static_cast<vtkSMProxyProperty *>(vp);

  unsigned int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetNumberOfUncheckedProxies(temp0);
      }
    else
      {
      op->vtkSMProxyProperty::SetNumberOfUncheckedProxies(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMProxyProperty_GetProxy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProxy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxyProperty *op = static_cast<vtkSMProxyProperty *>(vp);

  unsigned int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkSMProxy *tempr = (ap.IsBound() ?
      op->GetProxy(temp0) :
      op->vtkSMProxyProperty::GetProxy(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMProxyProperty_GetUncheckedProxy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUncheckedProxy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxyProperty *op = static_cast<vtkSMProxyProperty *>(vp);

  unsigned int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkSMProxy *tempr = (ap.IsBound() ?
      op->GetUncheckedProxy(temp0) :
      op->vtkSMProxyProperty::GetUncheckedProxy(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMProxyProperty_Copy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Copy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxyProperty *op = static_cast<vtkSMProxyProperty *>(vp);

  vtkSMProperty *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMProperty"))
    {
    if (ap.IsBound())
      {
      op->Copy(temp0);
      }
    else
      {
      op->vtkSMProxyProperty::Copy(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMProxyProperty_GetSkipDependency(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSkipDependency");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxyProperty *op = static_cast<vtkSMProxyProperty *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetSkipDependency() :
      op->vtkSMProxyProperty::GetSkipDependency());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMProxyProperty_UpdateAllInputs(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateAllInputs");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxyProperty *op = static_cast<vtkSMProxyProperty *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->UpdateAllInputs();
      }
    else
      {
      op->vtkSMProxyProperty::UpdateAllInputs();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMProxyProperty_IsValueDefault(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsValueDefault");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxyProperty *op = static_cast<vtkSMProxyProperty *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->IsValueDefault() :
      op->vtkSMProxyProperty::IsValueDefault());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMProxyProperty_ResetToXMLDefaults(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ResetToXMLDefaults");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxyProperty *op = static_cast<vtkSMProxyProperty *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ResetToXMLDefaults();
      }
    else
      {
      op->vtkSMProxyProperty::ResetToXMLDefaults();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkSMProxyProperty_Methods[] = {
  {(char*)"EnableProxyCreation", PyvtkSMProxyProperty_EnableProxyCreation, METH_VARARGS | METH_STATIC,
   (char*)"V.EnableProxyCreation()\nC++: static void EnableProxyCreation()\n\nWhen we load ProxyManager state we want Proxy/InputProperty to be\nable to create the corresponding missing proxy. Although when the\ngoal is to load a state on any standard proxy, we do not want\nthat proxy property be able to create new proxy based on some\nprevious state.\n"},
  {(char*)"DisableProxyCreation", PyvtkSMProxyProperty_DisableProxyCreation, METH_VARARGS | METH_STATIC,
   (char*)"V.DisableProxyCreation()\nC++: static void DisableProxyCreation()\n\nWhen we load ProxyManager state we want Proxy/InputProperty to be\nable to create the corresponding missing proxy. Although when the\ngoal is to load a state on any standard proxy, we do not want\nthat proxy property be able to create new proxy based on some\nprevious state.\n"},
  {(char*)"CanCreateProxy", PyvtkSMProxyProperty_CanCreateProxy, METH_VARARGS | METH_STATIC,
   (char*)"V.CanCreateProxy() -> bool\nC++: static bool CanCreateProxy()\n\nWhen we load ProxyManager state we want Proxy/InputProperty to be\nable to create the corresponding missing proxy. Although when the\ngoal is to load a state on any standard proxy, we do not want\nthat proxy property be able to create new proxy based on some\nprevious state.\n"},
  {(char*)"GetClassName", PyvtkSMProxyProperty_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkSMProxyProperty_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkSMProxyProperty_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkSMProxyProperty\nC++: vtkSMProxyProperty *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkSMProxyProperty_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkSMProxyProperty\nC++: vtkSMProxyProperty *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"AddProxy", PyvtkSMProxyProperty_AddProxy, METH_VARARGS,
   (char*)"V.AddProxy(vtkSMProxy)\nC++: virtual void AddProxy(vtkSMProxy *proxy)\n\nAdd/remove/set a proxy to the list of proxies. For SetProxy, the\nproperty automatically resizes to accommodate the index\nspecified.\n"},
  {(char*)"SetProxy", PyvtkSMProxyProperty_SetProxy, METH_VARARGS,
   (char*)"V.SetProxy(int, vtkSMProxy)\nC++: virtual void SetProxy(unsigned int idx, vtkSMProxy *proxy)\n\nAdd/remove/set a proxy to the list of proxies. For SetProxy, the\nproperty automatically resizes to accommodate the index\nspecified.\n"},
  {(char*)"RemoveProxy", PyvtkSMProxyProperty_RemoveProxy, METH_VARARGS,
   (char*)"V.RemoveProxy(vtkSMProxy)\nC++: virtual void RemoveProxy(vtkSMProxy *proxy)\n\nAdd/remove/set a proxy to the list of proxies. For SetProxy, the\nproperty automatically resizes to accommodate the index\nspecified.\n"},
  {(char*)"RemoveAllProxies", PyvtkSMProxyProperty_RemoveAllProxies, METH_VARARGS,
   (char*)"V.RemoveAllProxies()\nC++: virtual void RemoveAllProxies()\n\nAdd/remove/set a proxy to the list of proxies. For SetProxy, the\nproperty automatically resizes to accommodate the index\nspecified.\n"},
  {(char*)"IsProxyAdded", PyvtkSMProxyProperty_IsProxyAdded, METH_VARARGS,
   (char*)"V.IsProxyAdded(vtkSMProxy) -> bool\nC++: bool IsProxyAdded(vtkSMProxy *proxy)\n\nReturns if the given proxy is already added to the property.\n"},
  {(char*)"AddUncheckedProxy", PyvtkSMProxyProperty_AddUncheckedProxy, METH_VARARGS,
   (char*)"V.AddUncheckedProxy(vtkSMProxy)\nC++: virtual void AddUncheckedProxy(vtkSMProxy *proxy)\n\nAdd an unchecked proxy. Does not modify the property. Unchecked\nproxies are used by domains when verifying whether a value is\nacceptable. To check if a value is in the domains, you can do the\nfollowing:\n - RemoveAllUncheckedProxies()\n - AddUncheckedProxy(proxy)\n - IsInDomains()\n \n"},
  {(char*)"SetUncheckedProxy", PyvtkSMProxyProperty_SetUncheckedProxy, METH_VARARGS,
   (char*)"V.SetUncheckedProxy(int, vtkSMProxy)\nC++: virtual void SetUncheckedProxy(unsigned int idx,\n    vtkSMProxy *proxy)\n\nAdd an unchecked proxy. Does not modify the property. Unchecked\nproxies are used by domains when verifying whether a value is\nacceptable. To check if a value is in the domains, you can do the\nfollowing:\n - RemoveAllUncheckedProxies()\n - AddUncheckedProxy(proxy)\n - IsInDomains()\n \n"},
  {(char*)"RemoveAllUncheckedProxies", PyvtkSMProxyProperty_RemoveAllUncheckedProxies, METH_VARARGS,
   (char*)"V.RemoveAllUncheckedProxies()\nC++: virtual void RemoveAllUncheckedProxies()\n\nRemoves all unchecked proxies.\n"},
  {(char*)"GetNumberOfProxies", PyvtkSMProxyProperty_GetNumberOfProxies, METH_VARARGS,
   (char*)"V.GetNumberOfProxies() -> int\nC++: unsigned int GetNumberOfProxies()\n\nReturns the number of proxies.\n"},
  {(char*)"GetNumberOfUncheckedProxies", PyvtkSMProxyProperty_GetNumberOfUncheckedProxies, METH_VARARGS,
   (char*)"V.GetNumberOfUncheckedProxies() -> int\nC++: unsigned int GetNumberOfUncheckedProxies()\n\nReturns the number of unchecked proxies.\n"},
  {(char*)"SetNumberOfProxies", PyvtkSMProxyProperty_SetNumberOfProxies, METH_VARARGS,
   (char*)"V.SetNumberOfProxies(int)\nC++: void SetNumberOfProxies(unsigned int count)\n\nSet the number of proxies.\n"},
  {(char*)"SetNumberOfUncheckedProxies", PyvtkSMProxyProperty_SetNumberOfUncheckedProxies, METH_VARARGS,
   (char*)"V.SetNumberOfUncheckedProxies(int)\nC++: void SetNumberOfUncheckedProxies(unsigned int count)\n\nSet the number of proxies.\n"},
  {(char*)"GetProxy", PyvtkSMProxyProperty_GetProxy, METH_VARARGS,
   (char*)"V.GetProxy(int) -> vtkSMProxy\nC++: vtkSMProxy *GetProxy(unsigned int idx)\n\nReturn a proxy. No bounds check is performed.\n"},
  {(char*)"GetUncheckedProxy", PyvtkSMProxyProperty_GetUncheckedProxy, METH_VARARGS,
   (char*)"V.GetUncheckedProxy(int) -> vtkSMProxy\nC++: vtkSMProxy *GetUncheckedProxy(unsigned int idx)\n\nReturn a proxy. No bounds check is performed.\n"},
  {(char*)"Copy", PyvtkSMProxyProperty_Copy, METH_VARARGS,
   (char*)"V.Copy(vtkSMProperty)\nC++: virtual void Copy(vtkSMProperty *src)\n\nCopy all property values.\n"},
  {(char*)"GetSkipDependency", PyvtkSMProxyProperty_GetSkipDependency, METH_VARARGS,
   (char*)"V.GetSkipDependency() -> bool\nC++: bool GetSkipDependency()\n\nReturns whether the \"skip_dependency\" attribute is set.\n"},
  {(char*)"UpdateAllInputs", PyvtkSMProxyProperty_UpdateAllInputs, METH_VARARGS,
   (char*)"V.UpdateAllInputs()\nC++: virtual void UpdateAllInputs()\n\nUpdate all proxies referred by this property (if any).\n"},
  {(char*)"IsValueDefault", PyvtkSMProxyProperty_IsValueDefault, METH_VARARGS,
   (char*)"V.IsValueDefault() -> bool\nC++: virtual bool IsValueDefault()\n\n"},
  {(char*)"ResetToXMLDefaults", PyvtkSMProxyProperty_ResetToXMLDefaults, METH_VARARGS,
   (char*)"V.ResetToXMLDefaults()\nC++: virtual void ResetToXMLDefaults()\n\nFor properties that support specifying defaults in XML\nconfiguration, this method will reset the property value to the\ndefault values specified in the XML. Simply clears the property.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkSMProxyProperty_StaticNew()
{
  return vtkSMProxyProperty::New();
}

PyObject *PyVTKClass_vtkSMProxyPropertyNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkSMProxyProperty_StaticNew,
    PyvtkSMProxyProperty_Methods,
    "vtkSMProxyProperty", modulename,
    NULL, NULL,
    PyvtkSMProxyProperty_Doc(),
    PyVTKClass_vtkSMPropertyNew(modulename));
  return cls;
}

const char **PyvtkSMProxyProperty_Doc()
{
  static const char *docstring[] = {
    "vtkSMProxyProperty - property representing pointer(s) to vtkObject(s)\n\n",
    "Superclass: vtkSMProperty\n\n",
    "vtkSMProxyProperty is a concrete sub-class of vtkSMProperty\nrepresenting pointer(s) to vtkObject(s) (through vtkSMProxy).\n\nvtkSMProperty::UpdateDomains() is called by vtkSMProperty itself\nwhenever its unchecked values are modified. In case of\nproxy-properties, the dependent domains typically tend to depend on\nthe data information provided by the source-proxies added to the\nproperty. Thus, to ensur",
    "e that the domains get updated if the data\ninformation changes, vtkSMProxyProperty ensures that\nvtkSMProperty::UpdateDomains() is called whenever any of the added\nproxies fires the vtkCommand::UpdateDataEvent (which is fired\nwhenever the pipeline us updated through the ServerManager indicating\nthat the data-information last used may have been invalidated).\n\nBesides the standard set of attributes, ",
    "the following XML attributes\nare supported:\n\\li command : identifies the method to call on the VTK object e.g.\nAddRepresentation.\n\\li clean_command : if present, called once before invoking the\n    method\nspecified by command every time the property value is pushed e.g.\nRemoveAllRepresentations. If property can take multiple values then\nthe command is called for for each of the values after the cl",
    "ean\ncommand for every push.\n\\li remove_command : an alternative to clean_command where instead of\nresetting and adding all the values for every push, this simply calls\nthe specified method to remove the vtk-objects no longer referred to\ne.g. RemoveRepresentation.\n\\li argument_type : identifies the type for value passed to the\n    method on the\nVTK object. Accepted values are \"VTK\", \"SMProxy\" or \"S",
    "IProxy\".\nDefault is VTK.\n\\li null_on_empty : if set to 1, whenever the property's value\n    changes to\nempty i.e. it contains no proxies, the command is called on the VTK\nobject with NULL argument useful when there's no clean_command that\ncan be called on the VTK object to unset the property e.g.\nSetLookupTable(NULL). li skip_dependency : if set to 1, this property\ndoes not result in adding a depe",
    "ndency between the proxies set as\nvalues of this property and the proxy to which the property belongs\n(which is the default behaviour). Use this with care as it would mean\nthat ParaView would no realize any updates are needed to the pipeline\nif any proxy set on the property changes. This is necessary in some\ncases, e.g. if LUT proxy on a representation changes, we don't want\nto representation to t",
    "reat it same as if the input pipeline changed!\n\nSee Also:\n\nvtkSMProperty\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkSMProxyProperty(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkSMProxyPropertyNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkSMProxyProperty", o) != 0)
    {
    Py_DECREF(o);
    }

}

