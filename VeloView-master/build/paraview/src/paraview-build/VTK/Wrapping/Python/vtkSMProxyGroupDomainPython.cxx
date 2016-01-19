// python wrapper for vtkSMProxyGroupDomain
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkSMProxyGroupDomain.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkSMProxyGroupDomain(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkSMProxyGroupDomainNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkSMDomainNew
extern "C" { PyObject *PyVTKClass_vtkSMDomainNew(const char *); }
#define DECLARED_PyVTKClass_vtkSMDomainNew
#endif

static const char **PyvtkSMProxyGroupDomain_Doc();


static PyObject *
PyvtkSMProxyGroupDomain_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxyGroupDomain *op = static_cast<vtkSMProxyGroupDomain *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkSMProxyGroupDomain::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMProxyGroupDomain_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxyGroupDomain *op = static_cast<vtkSMProxyGroupDomain *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSMProxyGroupDomain::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMProxyGroupDomain_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxyGroupDomain *op = static_cast<vtkSMProxyGroupDomain *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkSMProxyGroupDomain *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSMProxyGroupDomain::NewInstance());

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
PyvtkSMProxyGroupDomain_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkSMProxyGroupDomain *tempr = vtkSMProxyGroupDomain::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMProxyGroupDomain_AddGroup(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddGroup");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxyGroupDomain *op = static_cast<vtkSMProxyGroupDomain *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->AddGroup(temp0);
      }
    else
      {
      op->vtkSMProxyGroupDomain::AddGroup(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMProxyGroupDomain_IsInDomain_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsInDomain");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxyGroupDomain *op = static_cast<vtkSMProxyGroupDomain *>(vp);

  vtkSMProperty *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMProperty"))
    {
    int tempr = (ap.IsBound() ?
      op->IsInDomain(temp0) :
      op->vtkSMProxyGroupDomain::IsInDomain(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkSMProxyGroupDomain_IsInDomain_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsInDomain");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxyGroupDomain *op = static_cast<vtkSMProxyGroupDomain *>(vp);

  vtkSMProxy *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMProxy"))
    {
    int tempr = (ap.IsBound() ?
      op->IsInDomain(temp0) :
      op->vtkSMProxyGroupDomain::IsInDomain(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkSMProxyGroupDomain_IsInDomain_Methods[] = {
  {NULL, PyvtkSMProxyGroupDomain_IsInDomain_s1, METH_VARARGS,
   (char*)"@O *vtkSMProperty"},
  {NULL, PyvtkSMProxyGroupDomain_IsInDomain_s2, METH_VARARGS,
   (char*)"@O *vtkSMProxy"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkSMProxyGroupDomain_IsInDomain(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkSMProxyGroupDomain_IsInDomain_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "IsInDomain");
  return NULL;
}



static PyObject *
PyvtkSMProxyGroupDomain_GetNumberOfGroups(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGroups");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxyGroupDomain *op = static_cast<vtkSMProxyGroupDomain *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned int tempr = (ap.IsBound() ?
      op->GetNumberOfGroups() :
      op->vtkSMProxyGroupDomain::GetNumberOfGroups());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMProxyGroupDomain_GetGroup(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGroup");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxyGroupDomain *op = static_cast<vtkSMProxyGroupDomain *>(vp);

  unsigned int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetGroup(temp0) :
      op->vtkSMProxyGroupDomain::GetGroup(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMProxyGroupDomain_GetNumberOfProxies(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfProxies");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxyGroupDomain *op = static_cast<vtkSMProxyGroupDomain *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned int tempr = (ap.IsBound() ?
      op->GetNumberOfProxies() :
      op->vtkSMProxyGroupDomain::GetNumberOfProxies());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMProxyGroupDomain_GetProxy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProxy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxyGroupDomain *op = static_cast<vtkSMProxyGroupDomain *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkSMProxy *tempr = (ap.IsBound() ?
      op->GetProxy(temp0) :
      op->vtkSMProxyGroupDomain::GetProxy(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMProxyGroupDomain_GetProxyName_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProxyName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxyGroupDomain *op = static_cast<vtkSMProxyGroupDomain *>(vp);

  unsigned int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetProxyName(temp0) :
      op->vtkSMProxyGroupDomain::GetProxyName(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkSMProxyGroupDomain_GetProxyName_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProxyName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxyGroupDomain *op = static_cast<vtkSMProxyGroupDomain *>(vp);

  vtkSMProxy *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMProxy"))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetProxyName(temp0) :
      op->vtkSMProxyGroupDomain::GetProxyName(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkSMProxyGroupDomain_GetProxyName_Methods[] = {
  {NULL, PyvtkSMProxyGroupDomain_GetProxyName_s1, METH_VARARGS,
   (char*)"@I"},
  {NULL, PyvtkSMProxyGroupDomain_GetProxyName_s2, METH_VARARGS,
   (char*)"@O *vtkSMProxy"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkSMProxyGroupDomain_GetProxyName(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkSMProxyGroupDomain_GetProxyName_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetProxyName");
  return NULL;
}


static PyMethodDef PyvtkSMProxyGroupDomain_Methods[] = {
  {(char*)"GetClassName", PyvtkSMProxyGroupDomain_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkSMProxyGroupDomain_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkSMProxyGroupDomain_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkSMProxyGroupDomain\nC++: vtkSMProxyGroupDomain *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkSMProxyGroupDomain_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkSMProxyGroupDomain\nC++: vtkSMProxyGroupDomain *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"AddGroup", PyvtkSMProxyGroupDomain_AddGroup, METH_VARARGS,
   (char*)"V.AddGroup(string)\nC++: void AddGroup(const char *group)\n\nAdd a group to the domain. The domain is the union of all groups.\n"},
  {(char*)"IsInDomain", PyvtkSMProxyGroupDomain_IsInDomain, METH_VARARGS,
   (char*)"V.IsInDomain(vtkSMProperty) -> int\nC++: virtual int IsInDomain(vtkSMProperty *property)\nV.IsInDomain(vtkSMProxy) -> int\nC++: int IsInDomain(vtkSMProxy *proxy)\n\nReturns true if the value of the propery is in the domain. The\npropery has to be a vtkSMProxyPropery or a sub-class. All proxies\npointed by the property have to be in the domain.\n"},
  {(char*)"GetNumberOfGroups", PyvtkSMProxyGroupDomain_GetNumberOfGroups, METH_VARARGS,
   (char*)"V.GetNumberOfGroups() -> int\nC++: unsigned int GetNumberOfGroups()\n\nReturns the number of groups.\n"},
  {(char*)"GetGroup", PyvtkSMProxyGroupDomain_GetGroup, METH_VARARGS,
   (char*)"V.GetGroup(int) -> string\nC++: const char *GetGroup(unsigned int idx)\n\nReturns group with give id. Does not perform bounds check.\n"},
  {(char*)"GetNumberOfProxies", PyvtkSMProxyGroupDomain_GetNumberOfProxies, METH_VARARGS,
   (char*)"V.GetNumberOfProxies() -> int\nC++: unsigned int GetNumberOfProxies()\n\nReturns the total number of proxies in the domain.\n"},
  {(char*)"GetProxy", PyvtkSMProxyGroupDomain_GetProxy, METH_VARARGS,
   (char*)"V.GetProxy(string) -> vtkSMProxy\nC++: vtkSMProxy *GetProxy(const char *name)\n\nGiven a name, returns a proxy.\n"},
  {(char*)"GetProxyName", PyvtkSMProxyGroupDomain_GetProxyName, METH_VARARGS,
   (char*)"V.GetProxyName(int) -> string\nC++: const char *GetProxyName(unsigned int idx)\nV.GetProxyName(vtkSMProxy) -> string\nC++: const char *GetProxyName(vtkSMProxy *proxy)\n\nReturns the name (in the group) of a proxy.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkSMProxyGroupDomain_StaticNew()
{
  return vtkSMProxyGroupDomain::New();
}

PyObject *PyVTKClass_vtkSMProxyGroupDomainNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkSMProxyGroupDomain_StaticNew,
    PyvtkSMProxyGroupDomain_Methods,
    "vtkSMProxyGroupDomain", modulename,
    NULL, NULL,
    PyvtkSMProxyGroupDomain_Doc(),
    PyVTKClass_vtkSMDomainNew(modulename));
  return cls;
}

const char **PyvtkSMProxyGroupDomain_Doc()
{
  static const char *docstring[] = {
    "vtkSMProxyGroupDomain - union of proxy groups\n\n",
    "Superclass: vtkSMDomain\n\n",
    "The proxy group domain consists of all proxies in a list of groups.\nThis domain is commonly used together with vtkSMProxyPropery Valid\nXML elements are:\n * <Group name=\"\"> where name is the groupname used by the proxy\n manager to refer to a group of proxies.\n // .SECTION See Also vtkSMDomain vtkSMProxyPropery\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkSMProxyGroupDomain(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkSMProxyGroupDomainNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkSMProxyGroupDomain", o) != 0)
    {
    Py_DECREF(o);
    }

}

