// python wrapper for vtkSMPluginLoaderProxy
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkSMPluginLoaderProxy.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkSMPluginLoaderProxy(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkSMPluginLoaderProxyNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkSMProxyNew
extern "C" { PyObject *PyVTKClass_vtkSMProxyNew(const char *); }
#define DECLARED_PyVTKClass_vtkSMProxyNew
#endif

static const char **PyvtkSMPluginLoaderProxy_Doc();


static PyObject *
PyvtkSMPluginLoaderProxy_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMPluginLoaderProxy *op = static_cast<vtkSMPluginLoaderProxy *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkSMPluginLoaderProxy::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMPluginLoaderProxy_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMPluginLoaderProxy *op = static_cast<vtkSMPluginLoaderProxy *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSMPluginLoaderProxy::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMPluginLoaderProxy_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMPluginLoaderProxy *op = static_cast<vtkSMPluginLoaderProxy *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkSMPluginLoaderProxy *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSMPluginLoaderProxy::NewInstance());

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
PyvtkSMPluginLoaderProxy_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkSMPluginLoaderProxy *tempr = vtkSMPluginLoaderProxy::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMPluginLoaderProxy_LoadPlugin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LoadPlugin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMPluginLoaderProxy *op = static_cast<vtkSMPluginLoaderProxy *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    bool tempr = (ap.IsBound() ?
      op->LoadPlugin(temp0) :
      op->vtkSMPluginLoaderProxy::LoadPlugin(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMPluginLoaderProxy_LoadPluginConfigurationXMLFromString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LoadPluginConfigurationXMLFromString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMPluginLoaderProxy *op = static_cast<vtkSMPluginLoaderProxy *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->LoadPluginConfigurationXMLFromString(temp0);
      }
    else
      {
      op->vtkSMPluginLoaderProxy::LoadPluginConfigurationXMLFromString(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkSMPluginLoaderProxy_Methods[] = {
  {(char*)"GetClassName", PyvtkSMPluginLoaderProxy_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkSMPluginLoaderProxy_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkSMPluginLoaderProxy_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkSMPluginLoaderProxy\nC++: vtkSMPluginLoaderProxy *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkSMPluginLoaderProxy_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkSMPluginLoaderProxy\nC++: vtkSMPluginLoaderProxy *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"LoadPlugin", PyvtkSMPluginLoaderProxy_LoadPlugin, METH_VARARGS,
   (char*)"V.LoadPlugin(string) -> bool\nC++: bool LoadPlugin(const char *filename)\n\nLoads the plugin. Returns true on success else false. To get the\nerror string, call UpdatePropertyInformation() on this proxy and\nthen look at the ErrorString property.\n"},
  {(char*)"LoadPluginConfigurationXMLFromString", PyvtkSMPluginLoaderProxy_LoadPluginConfigurationXMLFromString, METH_VARARGS,
   (char*)"V.LoadPluginConfigurationXMLFromString(string)\nC++: void LoadPluginConfigurationXMLFromString(\n    const char *xmlcontents)\n\nLoads the configuration xml contents. Look at\nvtkPVPluginTracker::LoadPluginConfigurationXMLFromString() to see\nthe details about the configuration xml.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkSMPluginLoaderProxy_StaticNew()
{
  return vtkSMPluginLoaderProxy::New();
}

PyObject *PyVTKClass_vtkSMPluginLoaderProxyNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkSMPluginLoaderProxy_StaticNew,
    PyvtkSMPluginLoaderProxy_Methods,
    "vtkSMPluginLoaderProxy", modulename,
    NULL, NULL,
    PyvtkSMPluginLoaderProxy_Doc(),
    PyVTKClass_vtkSMProxyNew(modulename));
  return cls;
}

const char **PyvtkSMPluginLoaderProxy_Doc()
{
  static const char *docstring[] = {
    "vtkSMPluginLoaderProxy - used to load a plugin remotely.\n\n",
    "Superclass: vtkSMProxy\n\n",
    "vtkSMPluginLoaderProxy is used to load a plugin on dataserver and\nrenderserver processes. Simply call\nvtkSMPluginLoaderProxy::LoadPlugin() with the right path to load the\nplugin remotely.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkSMPluginLoaderProxy(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkSMPluginLoaderProxyNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkSMPluginLoaderProxy", o) != 0)
    {
    Py_DECREF(o);
    }

}

