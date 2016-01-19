// python wrapper for vtkDynamicLoader
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkDynamicLoader.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkDynamicLoader(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkDynamicLoaderNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkDynamicLoader_Doc();


static PyObject *
PyvtkDynamicLoader_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDynamicLoader *op = static_cast<vtkDynamicLoader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkDynamicLoader::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDynamicLoader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDynamicLoader *op = static_cast<vtkDynamicLoader *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkDynamicLoader::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDynamicLoader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDynamicLoader *op = static_cast<vtkDynamicLoader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkDynamicLoader *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkDynamicLoader::NewInstance());

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
PyvtkDynamicLoader_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkDynamicLoader *tempr = vtkDynamicLoader::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDynamicLoader_LibPrefix(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "LibPrefix");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    const char *tempr = vtkDynamicLoader::LibPrefix();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDynamicLoader_LibExtension(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "LibExtension");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    const char *tempr = vtkDynamicLoader::LibExtension();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDynamicLoader_LastError(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "LastError");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    const char *tempr = vtkDynamicLoader::LastError();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkDynamicLoader_Methods[] = {
  {(char*)"GetClassName", PyvtkDynamicLoader_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkDynamicLoader_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkDynamicLoader_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkDynamicLoader\nC++: vtkDynamicLoader *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkDynamicLoader_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkDynamicLoader\nC++: vtkDynamicLoader *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"LibPrefix", PyvtkDynamicLoader_LibPrefix, METH_VARARGS | METH_STATIC,
   (char*)"V.LibPrefix() -> string\nC++: static const char *LibPrefix()\n\nReturn the library prefix for the given architecture\n"},
  {(char*)"LibExtension", PyvtkDynamicLoader_LibExtension, METH_VARARGS | METH_STATIC,
   (char*)"V.LibExtension() -> string\nC++: static const char *LibExtension()\n\nReturn the library extension for the given architecture\n"},
  {(char*)"LastError", PyvtkDynamicLoader_LastError, METH_VARARGS | METH_STATIC,
   (char*)"V.LastError() -> string\nC++: static const char *LastError()\n\nReturn the last error produced from a calls made on this class.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkDynamicLoader_StaticNew()
{
  return vtkDynamicLoader::New();
}

PyObject *PyVTKClass_vtkDynamicLoaderNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkDynamicLoader_StaticNew,
    PyvtkDynamicLoader_Methods,
    "vtkDynamicLoader", modulename,
    NULL, NULL,
    PyvtkDynamicLoader_Doc(),
    PyVTKClass_vtkObjectNew(modulename));
  return cls;
}

const char **PyvtkDynamicLoader_Doc()
{
  static const char *docstring[] = {
    "vtkDynamicLoader - class interface to system dynamic libraries\n\n",
    "Superclass: vtkObject\n\n",
    "vtkDynamicLoader provides a portable interface to loading dynamic\nlibraries into a process.\n\nSee Also:\n\nA more portable and lightweight solution is kwsys::DynamicLoader\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkDynamicLoader(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkDynamicLoaderNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkDynamicLoader", o) != 0)
    {
    Py_DECREF(o);
    }

}

