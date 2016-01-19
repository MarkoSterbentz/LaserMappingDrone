// python wrapper for vtkPVPluginLoader
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkPVPluginLoader.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkPVPluginLoader(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkPVPluginLoaderNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkPVPluginLoader_Doc();


static PyObject *
PyvtkPVPluginLoader_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPluginLoader *op = static_cast<vtkPVPluginLoader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkPVPluginLoader::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVPluginLoader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPluginLoader *op = static_cast<vtkPVPluginLoader *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPVPluginLoader::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVPluginLoader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPluginLoader *op = static_cast<vtkPVPluginLoader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPVPluginLoader *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPVPluginLoader::NewInstance());

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
PyvtkPVPluginLoader_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkPVPluginLoader *tempr = vtkPVPluginLoader::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVPluginLoader_LoadPlugin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LoadPlugin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPluginLoader *op = static_cast<vtkPVPluginLoader *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    bool tempr = (ap.IsBound() ?
      op->LoadPlugin(temp0) :
      op->vtkPVPluginLoader::LoadPlugin(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVPluginLoader_LoadPluginSilently(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LoadPluginSilently");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPluginLoader *op = static_cast<vtkPVPluginLoader *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    bool tempr = (ap.IsBound() ?
      op->LoadPluginSilently(temp0) :
      op->vtkPVPluginLoader::LoadPluginSilently(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVPluginLoader_LoadPluginConfigurationXMLFromString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LoadPluginConfigurationXMLFromString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPluginLoader *op = static_cast<vtkPVPluginLoader *>(vp);

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
      op->vtkPVPluginLoader::LoadPluginConfigurationXMLFromString(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVPluginLoader_LoadPluginsFromPluginSearchPath(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LoadPluginsFromPluginSearchPath");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPluginLoader *op = static_cast<vtkPVPluginLoader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->LoadPluginsFromPluginSearchPath();
      }
    else
      {
      op->vtkPVPluginLoader::LoadPluginsFromPluginSearchPath();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVPluginLoader_LoadPluginsFromPath(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LoadPluginsFromPath");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPluginLoader *op = static_cast<vtkPVPluginLoader *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->LoadPluginsFromPath(temp0);
      }
    else
      {
      op->vtkPVPluginLoader::LoadPluginsFromPath(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVPluginLoader_GetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPluginLoader *op = static_cast<vtkPVPluginLoader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetFileName() :
      op->vtkPVPluginLoader::GetFileName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVPluginLoader_GetPluginName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPluginName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPluginLoader *op = static_cast<vtkPVPluginLoader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetPluginName() :
      op->vtkPVPluginLoader::GetPluginName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVPluginLoader_GetPluginVersion(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPluginVersion");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPluginLoader *op = static_cast<vtkPVPluginLoader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetPluginVersion() :
      op->vtkPVPluginLoader::GetPluginVersion());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVPluginLoader_GetErrorString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetErrorString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPluginLoader *op = static_cast<vtkPVPluginLoader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetErrorString() :
      op->vtkPVPluginLoader::GetErrorString());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVPluginLoader_GetSearchPaths(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSearchPaths");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPluginLoader *op = static_cast<vtkPVPluginLoader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetSearchPaths() :
      op->vtkPVPluginLoader::GetSearchPaths());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVPluginLoader_GetLoaded(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLoaded");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPluginLoader *op = static_cast<vtkPVPluginLoader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetLoaded() :
      op->vtkPVPluginLoader::GetLoaded());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkPVPluginLoader_Methods[] = {
  {(char*)"GetClassName", PyvtkPVPluginLoader_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkPVPluginLoader_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkPVPluginLoader_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkPVPluginLoader\nC++: vtkPVPluginLoader *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkPVPluginLoader_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkPVPluginLoader\nC++: vtkPVPluginLoader *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"LoadPlugin", PyvtkPVPluginLoader_LoadPlugin, METH_VARARGS,
   (char*)"V.LoadPlugin(string) -> bool\nC++: bool LoadPlugin(const char *filename)\n\nTries to the load the plugin given the path to the plugin file.\n"},
  {(char*)"LoadPluginSilently", PyvtkPVPluginLoader_LoadPluginSilently, METH_VARARGS,
   (char*)"V.LoadPluginSilently(string) -> bool\nC++: bool LoadPluginSilently(const char *filename)\n\nTries to the load the plugin given the path to the plugin file.\n"},
  {(char*)"LoadPluginConfigurationXMLFromString", PyvtkPVPluginLoader_LoadPluginConfigurationXMLFromString, METH_VARARGS,
   (char*)"V.LoadPluginConfigurationXMLFromString(string)\nC++: void LoadPluginConfigurationXMLFromString(\n    const char *xmlcontents)\n\nSimply forwards the call to\nvtkPVPluginLoader::LoadPluginConfigurationXMLFromString to load\nconfiguration xml.\n"},
  {(char*)"LoadPluginsFromPluginSearchPath", PyvtkPVPluginLoader_LoadPluginsFromPluginSearchPath, METH_VARARGS,
   (char*)"V.LoadPluginsFromPluginSearchPath()\nC++: void LoadPluginsFromPluginSearchPath()\n\nLoads all plugins under the directories mentioned in the\nSearchPaths.\n"},
  {(char*)"LoadPluginsFromPath", PyvtkPVPluginLoader_LoadPluginsFromPath, METH_VARARGS,
   (char*)"V.LoadPluginsFromPath(string)\nC++: void LoadPluginsFromPath(const char *path)\n\nLoads all plugin libraries at a path.\n"},
  {(char*)"GetFileName", PyvtkPVPluginLoader_GetFileName, METH_VARARGS,
   (char*)"V.GetFileName() -> string\nC++: char *GetFileName()\n\nReturns the full filename for the plugin attempted to load most\nrecently using LoadPlugin().\n"},
  {(char*)"GetPluginName", PyvtkPVPluginLoader_GetPluginName, METH_VARARGS,
   (char*)"V.GetPluginName() -> string\nC++: char *GetPluginName()\n\nGet the plugin name. This returns a valid name only after the\nplugin has been loaded.\n"},
  {(char*)"GetPluginVersion", PyvtkPVPluginLoader_GetPluginVersion, METH_VARARGS,
   (char*)"V.GetPluginVersion() -> string\nC++: char *GetPluginVersion()\n\nGet the plugin version string. This returns a valid version\nstring only after the plugin has been loaded.\n"},
  {(char*)"GetErrorString", PyvtkPVPluginLoader_GetErrorString, METH_VARARGS,
   (char*)"V.GetErrorString() -> string\nC++: char *GetErrorString()\n\nGet the error string if the plugin failed to load. Returns NULL\nif the plugin was loaded successfully.\n"},
  {(char*)"GetSearchPaths", PyvtkPVPluginLoader_GetSearchPaths, METH_VARARGS,
   (char*)"V.GetSearchPaths() -> string\nC++: char *GetSearchPaths()\n\nGet a string of standard search paths (path1;path2;path3) search\npaths are based on PV_PLUGIN_PATH, plugin dir relative to\nexecutable.\n"},
  {(char*)"GetLoaded", PyvtkPVPluginLoader_GetLoaded, METH_VARARGS,
   (char*)"V.GetLoaded() -> bool\nC++: bool GetLoaded()\n\nReturns the status of most recent LoadPlugin call.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkPVPluginLoader_StaticNew()
{
  return vtkPVPluginLoader::New();
}

PyObject *PyVTKClass_vtkPVPluginLoaderNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkPVPluginLoader_StaticNew,
    PyvtkPVPluginLoader_Methods,
    "vtkPVPluginLoader", modulename,
    NULL, NULL,
    PyvtkPVPluginLoader_Doc(),
    PyVTKClass_vtkObjectNew(modulename));
  return cls;
}

const char **PyvtkPVPluginLoader_Doc()
{
  static const char *docstring[] = {
    "vtkPVPluginLoader - Used to load ParaView plugins.\n\n",
    "Superclass: vtkObject\n\n",
    "vtkPVPluginLoader can be used to load plugins for ParaView.\nvtkPVPluginLoader loads the plugin on the local process. For verbose\ndetails during the process of loading the plugin, try setting the\nenvironment variable PV_PLUGIN_DEBUG. This class only needed when\nloading plugins from shared libraries dynamically. For statically\nimporting plugins, one directly uses PV_PLUGIN_IMPORT() macro defined\nin ",
    "vtkPVPlugin.h.\n\n",
    NULL
  };

  return docstring;
}


static const char **PyvtkPVPluginLoaderCleanerInitializer_Doc();

static PyMethodDef PyvtkPVPluginLoaderCleanerInitializer_Methods[] = {
  {NULL, NULL, 0, NULL}
};

#ifndef DECLARED_PyvtkPVPluginLoaderCleanerInitializer_Type
extern VTK_PYTHON_EXPORT PyTypeObject PyvtkPVPluginLoaderCleanerInitializer_Type;
#define DECLARED_PyvtkPVPluginLoaderCleanerInitializer_Type
#endif


static PyObject *
PyvtkPVPluginLoaderCleanerInitializer_vtkPVPluginLoaderCleanerInitializer(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkPVPluginLoaderCleanerInitializer");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkPVPluginLoaderCleanerInitializer *op = new vtkPVPluginLoaderCleanerInitializer();

    result = PyVTKSpecialObject_New("vtkPVPluginLoaderCleanerInitializer", op);
    }

  return result;
}

static PyMethodDef PyvtkPVPluginLoaderCleanerInitializer_vtkPVPluginLoaderCleanerInitializer_Methods[] = {
  {NULL, NULL, 0, NULL}
};

static PyMethodDef PyvtkPVPluginLoaderCleanerInitializer_NewMethod = \
{ (char*)"vtkPVPluginLoaderCleanerInitializer", PyvtkPVPluginLoaderCleanerInitializer_vtkPVPluginLoaderCleanerInitializer, 1,
  (char*)"" };

#if PY_VERSION_HEX >= 0x02020000
static PyObject *
PyvtkPVPluginLoaderCleanerInitializer_New(PyTypeObject *, PyObject *args, PyObject *kwds)
{
  if (kwds && PyDict_Size(kwds))
    {
    PyErr_SetString(PyExc_TypeError,
                    "this function takes no keyword arguments");
    return NULL;
    }

  return PyvtkPVPluginLoaderCleanerInitializer_vtkPVPluginLoaderCleanerInitializer(NULL, args);
}
#endif

static void PyvtkPVPluginLoaderCleanerInitializer_Delete(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  if (obj->vtk_ptr)
    {
    delete static_cast<vtkPVPluginLoaderCleanerInitializer *>(obj->vtk_ptr);
    }
#if PY_MAJOR_VERSION >= 2
  PyObject_Del(self);
#else
  PyMem_DEL(self);
#endif
}

static long PyvtkPVPluginLoaderCleanerInitializer_Hash(PyObject *self)
{
#if PY_VERSION_HEX >= 0x020600B2
  return PyObject_HashNotImplemented(self);
#else
  char text[256];
  sprintf(text, "unhashable type: '%s'", self->ob_type->tp_name);
  PyErr_SetString(PyExc_TypeError, text);
  return -1;
#endif
}

PyTypeObject PyvtkPVPluginLoaderCleanerInitializer_Type = {
  PyObject_HEAD_INIT(&PyType_Type)
  0,
  (char*)"vtkPVPluginLoaderCleanerInitializer", // tp_name
  sizeof(PyVTKSpecialObject), // tp_basicsize
  0, // tp_itemsize
  PyvtkPVPluginLoaderCleanerInitializer_Delete, // tp_dealloc
  0, // tp_print
  0, // tp_getattr
  0, // tp_setattr
  0, // tp_compare
  PyVTKSpecialObject_Repr, // tp_repr
  0, // tp_as_number
  0, // tp_as_sequence
  0, // tp_as_mapping
  PyvtkPVPluginLoaderCleanerInitializer_Hash, // tp_hash
  0, // tp_call
  0, // tp_str
#if PY_VERSION_HEX >= 0x02020000
  PyObject_GenericGetAttr, // tp_getattro
#else
  PyVTKSpecialObject_GetAttr, // tp_getattro
#endif
  0, // tp_setattro
  0, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  0, // tp_doc
  0, // tp_traverse
  0, // tp_clear
  0, // tp_richcompare
  0, // tp_weaklistoffset
#if PY_VERSION_HEX >= 0x02020000
  0, // tp_iter
  0, // tp_iternext
  PyvtkPVPluginLoaderCleanerInitializer_Methods, // tp_methods
  0, // tp_members
  0, // tp_getset
  0, // tp_base
  0, // tp_dict
  0, // tp_descr_get
  0, // tp_descr_set
  0, // tp_dictoffset
  0, // tp_init
  0, // tp_alloc
  PyvtkPVPluginLoaderCleanerInitializer_New, // tp_new
#if PY_VERSION_HEX >= 0x02030000
  PyObject_Del, // tp_free
#else
  _PyObject_Del, // tp_free
#endif
  0, // tp_is_gc
  0, // tp_bases
  0, // tp_mro
  0, // tp_cache
  0, // tp_subclasses
  0, // tp_weaklist
#endif
  VTK_WRAP_PYTHON_SUPRESS_UNINITIALIZED
};

static void *PyvtkPVPluginLoaderCleanerInitializer_CCopy(const void *obj)
{
  if (obj)
    {
    return new vtkPVPluginLoaderCleanerInitializer(*static_cast<const vtkPVPluginLoaderCleanerInitializer*>(obj));
    }
  return 0;
}

static PyObject *PyvtkPVPluginLoaderCleanerInitializer_TypeNew(const char *)
{
  PyObject *cls = PyVTKSpecialType_New(
    &PyvtkPVPluginLoaderCleanerInitializer_Type,
    PyvtkPVPluginLoaderCleanerInitializer_Methods,
    PyvtkPVPluginLoaderCleanerInitializer_vtkPVPluginLoaderCleanerInitializer_Methods,
    &PyvtkPVPluginLoaderCleanerInitializer_NewMethod,
    PyvtkPVPluginLoaderCleanerInitializer_Doc(), &PyvtkPVPluginLoaderCleanerInitializer_CCopy);

  return cls;
}

const char **PyvtkPVPluginLoaderCleanerInitializer_Doc()
{
  static const char *docstring[] = {
    "vtkPVPluginLoader - Used to load ParaView plugins.\n\n",
    "vtkPVPluginLoader can be used to load plugins for ParaView.\nvtkPVPluginLoader loads the plugin on the local process. For verbose\ndetails during the process of loading the plugin, try setting the\nenvironment variable PV_PLUGIN_DEBUG. This class only needed when\nloading plugins from shared libraries dynamically. For statically\nimporting plugins, one directly uses PV_PLUGIN_IMPORT() macro defined\nin ",
    "vtkPVPlugin.h.\n\n",
    "V.vtkPVPluginLoaderCleanerInitializer()\nC++: vtkPVPluginLoaderCleanerInitializer()\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPVPluginLoader(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPVPluginLoaderNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPVPluginLoader", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyvtkPVPluginLoaderCleanerInitializer_TypeNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPVPluginLoaderCleanerInitializer", o) != 0)
    {
    Py_DECREF(o);
    }

}

