// python wrapper for vtkSIProxyProperty
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkSIProxyProperty.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkSIProxyProperty(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkSIProxyPropertyNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkSIPropertyNew
extern "C" { PyObject *PyVTKClass_vtkSIPropertyNew(const char *); }
#define DECLARED_PyVTKClass_vtkSIPropertyNew
#endif

static const char **PyvtkSIProxyProperty_Doc();


static PyObject *
PyvtkSIProxyProperty_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSIProxyProperty *op = static_cast<vtkSIProxyProperty *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkSIProxyProperty::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSIProxyProperty_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSIProxyProperty *op = static_cast<vtkSIProxyProperty *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSIProxyProperty::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSIProxyProperty_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSIProxyProperty *op = static_cast<vtkSIProxyProperty *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkSIProxyProperty *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSIProxyProperty::NewInstance());

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
PyvtkSIProxyProperty_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkSIProxyProperty *tempr = vtkSIProxyProperty::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSIProxyProperty_GetCleanCommand(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCleanCommand");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSIProxyProperty *op = static_cast<vtkSIProxyProperty *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetCleanCommand() :
      op->vtkSIProxyProperty::GetCleanCommand());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSIProxyProperty_GetRemoveCommand(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRemoveCommand");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSIProxyProperty *op = static_cast<vtkSIProxyProperty *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetRemoveCommand() :
      op->vtkSIProxyProperty::GetRemoveCommand());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSIProxyProperty_GetNullOnEmpty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNullOnEmpty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSIProxyProperty *op = static_cast<vtkSIProxyProperty *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetNullOnEmpty() :
      op->vtkSIProxyProperty::GetNullOnEmpty());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkSIProxyProperty_Methods[] = {
  {(char*)"GetClassName", PyvtkSIProxyProperty_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkSIProxyProperty_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkSIProxyProperty_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkSIProxyProperty\nC++: vtkSIProxyProperty *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkSIProxyProperty_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkSIProxyProperty\nC++: vtkSIProxyProperty *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetCleanCommand", PyvtkSIProxyProperty_GetCleanCommand, METH_VARARGS,
   (char*)"V.GetCleanCommand() -> string\nC++: char *GetCleanCommand()\n\nCommand that can be used to remove inputs. If set, this command\nis called before the main Command is called with all the\narguments.\n"},
  {(char*)"GetRemoveCommand", PyvtkSIProxyProperty_GetRemoveCommand, METH_VARARGS,
   (char*)"V.GetRemoveCommand() -> string\nC++: char *GetRemoveCommand()\n\nRemove command is the command called to remove the VTK object on\nthe server-side. If set, CleanCommand is ignored. Instead for\nevery proxy that was absent from the proxies previously pushed,\nthe RemoveCommand is invoked.\n"},
  {(char*)"GetNullOnEmpty", PyvtkSIProxyProperty_GetNullOnEmpty, METH_VARARGS,
   (char*)"V.GetNullOnEmpty() -> bool\nC++: bool GetNullOnEmpty()\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkSIProxyProperty_StaticNew()
{
  return vtkSIProxyProperty::New();
}

PyObject *PyVTKClass_vtkSIProxyPropertyNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkSIProxyProperty_StaticNew,
    PyvtkSIProxyProperty_Methods,
    "vtkSIProxyProperty", modulename,
    NULL, NULL,
    PyvtkSIProxyProperty_Doc(),
    PyVTKClass_vtkSIPropertyNew(modulename));
  return cls;
}

const char **PyvtkSIProxyProperty_Doc()
{
  static const char *docstring[] = {
    "vtkSIProxyProperty\n\n",
    "Superclass: vtkSIProperty\n\n",
    "ServerSide Property use to set Object array as method argument. Those\nobject could be either SMProxy instance or their SIProxy instance or\nthe VTK object managed by the SIProxy instance. The type of object is\nspecified inside the XML definition of the property with the\nattribute argument_type=[VTK, SMProxy, SIProxy].\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkSIProxyProperty(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkSIProxyPropertyNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkSIProxyProperty", o) != 0)
    {
    Py_DECREF(o);
    }

}

