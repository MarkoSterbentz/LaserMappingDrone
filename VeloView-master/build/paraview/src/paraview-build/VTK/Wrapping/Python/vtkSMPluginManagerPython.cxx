// python wrapper for vtkSMPluginManager
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkSMPluginManager.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkSMPluginManager(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkSMPluginManagerNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkSMObjectNew
extern "C" { PyObject *PyVTKClass_vtkSMObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkSMObjectNew
#endif

static const char **PyvtkSMPluginManager_Doc();


static PyObject *
PyvtkSMPluginManager_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMPluginManager *op = static_cast<vtkSMPluginManager *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkSMPluginManager::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMPluginManager_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMPluginManager *op = static_cast<vtkSMPluginManager *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSMPluginManager::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMPluginManager_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMPluginManager *op = static_cast<vtkSMPluginManager *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkSMPluginManager *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSMPluginManager::NewInstance());

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
PyvtkSMPluginManager_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkSMPluginManager *tempr = vtkSMPluginManager::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMPluginManager_RegisterSession(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RegisterSession");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMPluginManager *op = static_cast<vtkSMPluginManager *>(vp);

  vtkSMSession *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMSession"))
    {
    if (ap.IsBound())
      {
      op->RegisterSession(temp0);
      }
    else
      {
      op->vtkSMPluginManager::RegisterSession(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMPluginManager_UnRegisterSession(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UnRegisterSession");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMPluginManager *op = static_cast<vtkSMPluginManager *>(vp);

  vtkSMSession *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMSession"))
    {
    if (ap.IsBound())
      {
      op->UnRegisterSession(temp0);
      }
    else
      {
      op->vtkSMPluginManager::UnRegisterSession(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMPluginManager_GetLocalInformation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLocalInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMPluginManager *op = static_cast<vtkSMPluginManager *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPVPluginsInformation *tempr = (ap.IsBound() ?
      op->GetLocalInformation() :
      op->vtkSMPluginManager::GetLocalInformation());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMPluginManager_GetRemoteInformation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRemoteInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMPluginManager *op = static_cast<vtkSMPluginManager *>(vp);

  vtkSMSession *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMSession"))
    {
    vtkPVPluginsInformation *tempr = (ap.IsBound() ?
      op->GetRemoteInformation(temp0) :
      op->vtkSMPluginManager::GetRemoteInformation(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMPluginManager_GetLocalPluginSearchPaths(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLocalPluginSearchPaths");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMPluginManager *op = static_cast<vtkSMPluginManager *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetLocalPluginSearchPaths() :
      op->vtkSMPluginManager::GetLocalPluginSearchPaths());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMPluginManager_GetRemotePluginSearchPaths(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRemotePluginSearchPaths");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMPluginManager *op = static_cast<vtkSMPluginManager *>(vp);

  vtkSMSession *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMSession"))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetRemotePluginSearchPaths(temp0) :
      op->vtkSMPluginManager::GetRemotePluginSearchPaths(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMPluginManager_LoadRemotePlugin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LoadRemotePlugin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMPluginManager *op = static_cast<vtkSMPluginManager *>(vp);

  char *temp0 = NULL;
  vtkSMSession *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkSMSession"))
    {
    bool tempr = (ap.IsBound() ?
      op->LoadRemotePlugin(temp0, temp1) :
      op->vtkSMPluginManager::LoadRemotePlugin(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMPluginManager_LoadLocalPlugin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LoadLocalPlugin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMPluginManager *op = static_cast<vtkSMPluginManager *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    bool tempr = (ap.IsBound() ?
      op->LoadLocalPlugin(temp0) :
      op->vtkSMPluginManager::LoadLocalPlugin(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMPluginManager_LoadPluginConfigurationXMLFromString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LoadPluginConfigurationXMLFromString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMPluginManager *op = static_cast<vtkSMPluginManager *>(vp);

  char *temp0 = NULL;
  vtkSMSession *temp1 = NULL;
  bool temp2 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkSMSession") &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      op->LoadPluginConfigurationXMLFromString(temp0, temp1, temp2);
      }
    else
      {
      op->vtkSMPluginManager::LoadPluginConfigurationXMLFromString(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkSMPluginManager_Methods[] = {
  {(char*)"GetClassName", PyvtkSMPluginManager_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkSMPluginManager_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkSMPluginManager_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkSMPluginManager\nC++: vtkSMPluginManager *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkSMPluginManager_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkSMPluginManager\nC++: vtkSMPluginManager *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"RegisterSession", PyvtkSMPluginManager_RegisterSession, METH_VARARGS,
   (char*)"V.RegisterSession(vtkSMSession)\nC++: void RegisterSession(vtkSMSession *)\n\nRegister/Unregister a session. Every vtkSMSession must be\nregistered with the vtkSMPluginManager. This is done\nautomatically by vtkSMSession during the initialization stage.\nNote that the vtkSMSession is not reference counted.\n"},
  {(char*)"UnRegisterSession", PyvtkSMPluginManager_UnRegisterSession, METH_VARARGS,
   (char*)"V.UnRegisterSession(vtkSMSession)\nC++: void UnRegisterSession(vtkSMSession *)\n\nRegister/Unregister a session. Every vtkSMSession must be\nregistered with the vtkSMPluginManager. This is done\nautomatically by vtkSMSession during the initialization stage.\nNote that the vtkSMSession is not reference counted.\n"},
  {(char*)"GetLocalInformation", PyvtkSMPluginManager_GetLocalInformation, METH_VARARGS,
   (char*)"V.GetLocalInformation() -> vtkPVPluginsInformation\nC++: vtkPVPluginsInformation *GetLocalInformation()\n\nvtkPVPluginsInformation provides information about plugins\nloaded/available. LocalInformation corresponds to plugins loaded\non the local process. For remote sessions i.e. those that connect\nto a remote server process, one can use GetRemoteInformation() to\naccess information about plugins on the remote process.\n"},
  {(char*)"GetRemoteInformation", PyvtkSMPluginManager_GetRemoteInformation, METH_VARARGS,
   (char*)"V.GetRemoteInformation(vtkSMSession) -> vtkPVPluginsInformation\nC++: vtkPVPluginsInformation *GetRemoteInformation(vtkSMSession *)\n\nvtkPVPluginsInformation provides information about plugins\nloaded/available. LocalInformation corresponds to plugins loaded\non the local process. For remote sessions i.e. those that connect\nto a remote server process, one can use GetRemoteInformation() to\naccess information about plugins on the remote process.\n"},
  {(char*)"GetLocalPluginSearchPaths", PyvtkSMPluginManager_GetLocalPluginSearchPaths, METH_VARARGS,
   (char*)"V.GetLocalPluginSearchPaths() -> string\nC++: const char *GetLocalPluginSearchPaths()\n\nReturns the plugin search paths used either locally or remotely.\nFor non-remote sessions, GetRemotePluginSearchPaths() returns the\nsame value as GetLocalPluginSearchPaths().\n"},
  {(char*)"GetRemotePluginSearchPaths", PyvtkSMPluginManager_GetRemotePluginSearchPaths, METH_VARARGS,
   (char*)"V.GetRemotePluginSearchPaths(vtkSMSession) -> string\nC++: const char *GetRemotePluginSearchPaths(vtkSMSession *)\n\nReturns the plugin search paths used either locally or remotely.\nFor non-remote sessions, GetRemotePluginSearchPaths() returns the\nsame value as GetLocalPluginSearchPaths().\n"},
  {(char*)"LoadRemotePlugin", PyvtkSMPluginManager_LoadRemotePlugin, METH_VARARGS,
   (char*)"V.LoadRemotePlugin(string, vtkSMSession) -> bool\nC++: bool LoadRemotePlugin(const char *filename, vtkSMSession *)\n\nLoads the plugin either locally or remotely.\n"},
  {(char*)"LoadLocalPlugin", PyvtkSMPluginManager_LoadLocalPlugin, METH_VARARGS,
   (char*)"V.LoadLocalPlugin(string) -> bool\nC++: bool LoadLocalPlugin(const char *filename)\n\nLoads the plugin either locally or remotely.\n"},
  {(char*)"LoadPluginConfigurationXMLFromString", PyvtkSMPluginManager_LoadPluginConfigurationXMLFromString, METH_VARARGS,
   (char*)"V.LoadPluginConfigurationXMLFromString(string, vtkSMSession, bool)\nC++: void LoadPluginConfigurationXMLFromString(\n    const char *xmlcontents, vtkSMSession *session, bool remote)\n\nPlugin configuration XML is a simple XML that makes ParaView\naware of the plugins available and may result in loading of those\nplugins that are marked for auto-loading. In ParaView application\nthere are two uses for this:\n\\li .plugins - used to notify ParaView of the distributed plugins\n\\li session - used to save/restore the plugins loaded by the\n    users.\n\nThis method loads the plugin configuration xml either on the\nlocal process or the remote server process(es). session is only\nused when remote==true and session itself is a remote session.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkSMPluginManager_StaticNew()
{
  return vtkSMPluginManager::New();
}

PyObject *PyVTKClass_vtkSMPluginManagerNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkSMPluginManager_StaticNew,
    PyvtkSMPluginManager_Methods,
    "vtkSMPluginManager", modulename,
    NULL, NULL,
    PyvtkSMPluginManager_Doc(),
    PyVTKClass_vtkSMObjectNew(modulename));

  if (cls)
    {
    PyObject *d = PyVTKClass_GetDict(cls);
    PyObject *o;

    for (int c = 0; c < 3; c++)
      {
      static const struct { const char *name; int value; }
        constants[3] = {
          { "PluginLoadedEvent", vtkSMPluginManager::PluginLoadedEvent },
          { "LocalPluginLoadedEvent", vtkSMPluginManager::LocalPluginLoadedEvent },
          { "RemotePluginLoadedEvent", vtkSMPluginManager::RemotePluginLoadedEvent },
        };

      o = PyInt_FromLong(constants[c].value);
      if (o)
        {
        PyDict_SetItemString(d, (char *)constants[c].name, o);
        Py_DECREF(o);
        }
      }

    }

  return cls;
}

const char **PyvtkSMPluginManager_Doc()
{
  static const char *docstring[] = {
    "vtkSMPluginManager - manages ParaView plugins.\n\n",
    "Superclass: vtkSMObject\n\n",
    "vtkSMPluginManager is used to load plugins as well as discover\ninformation about currently loaded and available plugins.\n\nvtkSMPluginManager supports multiple sessions. Every vtkSMSession\nregisters itself with the vtkSMPluginManager during initialization.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkSMPluginManager(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkSMPluginManagerNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkSMPluginManager", o) != 0)
    {
    Py_DECREF(o);
    }

}

