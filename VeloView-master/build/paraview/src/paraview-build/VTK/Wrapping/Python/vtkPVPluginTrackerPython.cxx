// python wrapper for vtkPVPluginTracker
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkPVPluginTracker.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkPVPluginTracker(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkPVPluginTrackerNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkPVPluginTracker_Doc();


static PyObject *
PyvtkPVPluginTracker_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPluginTracker *op = static_cast<vtkPVPluginTracker *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkPVPluginTracker::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVPluginTracker_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPluginTracker *op = static_cast<vtkPVPluginTracker *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPVPluginTracker::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVPluginTracker_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPluginTracker *op = static_cast<vtkPVPluginTracker *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPVPluginTracker *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPVPluginTracker::NewInstance());

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
PyvtkPVPluginTracker_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkPVPluginTracker *tempr = vtkPVPluginTracker::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVPluginTracker_GetInstance(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetInstance");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkPVPluginTracker *tempr = vtkPVPluginTracker::GetInstance();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVPluginTracker_RegisterAvailablePlugin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RegisterAvailablePlugin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPluginTracker *op = static_cast<vtkPVPluginTracker *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    unsigned int tempr = (ap.IsBound() ?
      op->RegisterAvailablePlugin(temp0) :
      op->vtkPVPluginTracker::RegisterAvailablePlugin(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVPluginTracker_LoadPluginConfigurationXML_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LoadPluginConfigurationXML");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPluginTracker *op = static_cast<vtkPVPluginTracker *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->LoadPluginConfigurationXML(temp0);
      }
    else
      {
      op->vtkPVPluginTracker::LoadPluginConfigurationXML(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkPVPluginTracker_LoadPluginConfigurationXML_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LoadPluginConfigurationXML");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPluginTracker *op = static_cast<vtkPVPluginTracker *>(vp);

  vtkPVXMLElement *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPVXMLElement"))
    {
    if (ap.IsBound())
      {
      op->LoadPluginConfigurationXML(temp0);
      }
    else
      {
      op->vtkPVPluginTracker::LoadPluginConfigurationXML(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkPVPluginTracker_LoadPluginConfigurationXML_Methods[] = {
  {NULL, PyvtkPVPluginTracker_LoadPluginConfigurationXML_s1, METH_VARARGS,
   (char*)"@z"},
  {NULL, PyvtkPVPluginTracker_LoadPluginConfigurationXML_s2, METH_VARARGS,
   (char*)"@O *vtkPVXMLElement"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkPVPluginTracker_LoadPluginConfigurationXML(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkPVPluginTracker_LoadPluginConfigurationXML_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "LoadPluginConfigurationXML");
  return NULL;
}



static PyObject *
PyvtkPVPluginTracker_LoadPluginConfigurationXMLFromString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LoadPluginConfigurationXMLFromString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPluginTracker *op = static_cast<vtkPVPluginTracker *>(vp);

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
      op->vtkPVPluginTracker::LoadPluginConfigurationXMLFromString(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVPluginTracker_GetNumberOfPlugins(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfPlugins");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPluginTracker *op = static_cast<vtkPVPluginTracker *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned int tempr = (ap.IsBound() ?
      op->GetNumberOfPlugins() :
      op->vtkPVPluginTracker::GetNumberOfPlugins());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVPluginTracker_GetPluginName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPluginName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPluginTracker *op = static_cast<vtkPVPluginTracker *>(vp);

  unsigned int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetPluginName(temp0) :
      op->vtkPVPluginTracker::GetPluginName(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVPluginTracker_GetPluginFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPluginFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPluginTracker *op = static_cast<vtkPVPluginTracker *>(vp);

  unsigned int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetPluginFileName(temp0) :
      op->vtkPVPluginTracker::GetPluginFileName(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVPluginTracker_GetPluginLoaded(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPluginLoaded");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPluginTracker *op = static_cast<vtkPVPluginTracker *>(vp);

  unsigned int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetPluginLoaded(temp0) :
      op->vtkPVPluginTracker::GetPluginLoaded(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVPluginTracker_GetPluginAutoLoad(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPluginAutoLoad");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPluginTracker *op = static_cast<vtkPVPluginTracker *>(vp);

  unsigned int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetPluginAutoLoad(temp0) :
      op->vtkPVPluginTracker::GetPluginAutoLoad(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkPVPluginTracker_Methods[] = {
  {(char*)"GetClassName", PyvtkPVPluginTracker_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkPVPluginTracker_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkPVPluginTracker_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkPVPluginTracker\nC++: vtkPVPluginTracker *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkPVPluginTracker_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkPVPluginTracker\nC++: vtkPVPluginTracker *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetInstance", PyvtkPVPluginTracker_GetInstance, METH_VARARGS | METH_STATIC,
   (char*)"V.GetInstance() -> vtkPVPluginTracker\nC++: static vtkPVPluginTracker *GetInstance()\n\nProvides access to the singleton. This will create the\nvtkPVPluginTracker singleton the first time this method is\ncalled.\n"},
  {(char*)"RegisterAvailablePlugin", PyvtkPVPluginTracker_RegisterAvailablePlugin, METH_VARARGS,
   (char*)"V.RegisterAvailablePlugin(string) -> int\nC++: unsigned int RegisterAvailablePlugin(const char *filename)\n\nThis API is used to register available plugins without actually\nloading them.\n"},
  {(char*)"LoadPluginConfigurationXML", PyvtkPVPluginTracker_LoadPluginConfigurationXML, METH_VARARGS,
   (char*)"V.LoadPluginConfigurationXML(string)\nC++: void LoadPluginConfigurationXML(const char *filename)\nV.LoadPluginConfigurationXML(vtkPVXMLElement)\nC++: void LoadPluginConfigurationXML(vtkPVXMLElement *)\n\nCalled to load application-specific configuration xml. The xml is\nof the form:<Plugins>\n   <Plugin name=\"[plugin name]\" auto_load=\"[bool]\" />\n      ...\n</Plugins>\nThis method will process the XML, locate the plugin shared\nlibrary and either load the plugin or call\nRegisterAvailablePlugin based on the status of the auto_load\nflag.\n"},
  {(char*)"LoadPluginConfigurationXMLFromString", PyvtkPVPluginTracker_LoadPluginConfigurationXMLFromString, METH_VARARGS,
   (char*)"V.LoadPluginConfigurationXMLFromString(string)\nC++: void LoadPluginConfigurationXMLFromString(\n    const char *xmlcontents)\n\nCalled to load application-specific configuration xml. The xml is\nof the form:<Plugins>\n   <Plugin name=\"[plugin name]\" auto_load=\"[bool]\" />\n      ...\n</Plugins>\nThis method will process the XML, locate the plugin shared\nlibrary and either load the plugin or call\nRegisterAvailablePlugin based on the status of the auto_load\nflag.\n"},
  {(char*)"GetNumberOfPlugins", PyvtkPVPluginTracker_GetNumberOfPlugins, METH_VARARGS,
   (char*)"V.GetNumberOfPlugins() -> int\nC++: unsigned int GetNumberOfPlugins()\n\nMethods to iterate over registered plugins.\n"},
  {(char*)"GetPluginName", PyvtkPVPluginTracker_GetPluginName, METH_VARARGS,
   (char*)"V.GetPluginName(int) -> string\nC++: const char *GetPluginName(unsigned int index)\n\nThis is provided for wrapped languages since they can't directly\naccess the vtkPVPlugin instance.\n"},
  {(char*)"GetPluginFileName", PyvtkPVPluginTracker_GetPluginFileName, METH_VARARGS,
   (char*)"V.GetPluginFileName(int) -> string\nC++: const char *GetPluginFileName(unsigned int index)\n\nThis is provided for wrapped languages since they can't directly\naccess the vtkPVPlugin instance.\n"},
  {(char*)"GetPluginLoaded", PyvtkPVPluginTracker_GetPluginLoaded, METH_VARARGS,
   (char*)"V.GetPluginLoaded(int) -> bool\nC++: bool GetPluginLoaded(unsigned int index)\n\nThis is provided for wrapped languages since they can't directly\naccess the vtkPVPlugin instance.\n"},
  {(char*)"GetPluginAutoLoad", PyvtkPVPluginTracker_GetPluginAutoLoad, METH_VARARGS,
   (char*)"V.GetPluginAutoLoad(int) -> bool\nC++: bool GetPluginAutoLoad(unsigned int index)\n\nThis is provided for wrapped languages since they can't directly\naccess the vtkPVPlugin instance.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkPVPluginTracker_StaticNew()
{
  return vtkPVPluginTracker::New();
}

PyObject *PyVTKClass_vtkPVPluginTrackerNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkPVPluginTracker_StaticNew,
    PyvtkPVPluginTracker_Methods,
    "vtkPVPluginTracker", modulename,
    NULL, NULL,
    PyvtkPVPluginTracker_Doc(),
    PyVTKClass_vtkObjectNew(modulename));
  return cls;
}

const char **PyvtkPVPluginTracker_Doc()
{
  static const char *docstring[] = {
    "vtkPVPluginTracker - a global manager for each processes to keep track\n\n",
    "Superclass: vtkObject\n\n",
    "vtkPVPluginTracker is a singleton that's present on each process to\nkeep track of plugins loaded on that process. Whenever is plugin is\nloaded (either statically using PV_PLUGIN_IMPORT() or dynamically, it\ngets registered with the  on every process that it is loaded.\nWhenever a plugin is registered, this class fires a\nvtkCommand::RegisterEvent that handlers can listen to, to process the\nplugin.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPVPluginTracker(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPVPluginTrackerNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPVPluginTracker", o) != 0)
    {
    Py_DECREF(o);
    }

}

