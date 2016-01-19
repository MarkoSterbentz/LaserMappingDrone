// python wrapper for vtkSMSessionObject
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkSMSessionObject.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkSMSessionObject(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkSMSessionObjectNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkSMObjectNew
extern "C" { PyObject *PyVTKClass_vtkSMObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkSMObjectNew
#endif

static const char **PyvtkSMSessionObject_Doc();


static PyObject *
PyvtkSMSessionObject_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSessionObject *op = static_cast<vtkSMSessionObject *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkSMSessionObject::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMSessionObject_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSessionObject *op = static_cast<vtkSMSessionObject *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSMSessionObject::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMSessionObject_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSessionObject *op = static_cast<vtkSMSessionObject *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkSMSessionObject *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSMSessionObject::NewInstance());

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
PyvtkSMSessionObject_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkSMSessionObject *tempr = vtkSMSessionObject::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMSessionObject_SetSession(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSession");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSessionObject *op = static_cast<vtkSMSessionObject *>(vp);

  vtkSMSession *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMSession"))
    {
    if (ap.IsBound())
      {
      op->SetSession(temp0);
      }
    else
      {
      op->vtkSMSessionObject::SetSession(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMSessionObject_GetSession(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSession");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSessionObject *op = static_cast<vtkSMSessionObject *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkSMSession *tempr = (ap.IsBound() ?
      op->GetSession() :
      op->vtkSMSessionObject::GetSession());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMSessionObject_GetSessionProxyManager(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSessionProxyManager");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSessionObject *op = static_cast<vtkSMSessionObject *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkSMSessionProxyManager *tempr = (ap.IsBound() ?
      op->GetSessionProxyManager() :
      op->vtkSMSessionObject::GetSessionProxyManager());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkSMSessionObject_Methods[] = {
  {(char*)"GetClassName", PyvtkSMSessionObject_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkSMSessionObject_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkSMSessionObject_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkSMSessionObject\nC++: vtkSMSessionObject *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkSMSessionObject_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkSMSessionObject\nC++: vtkSMSessionObject *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetSession", PyvtkSMSessionObject_SetSession, METH_VARARGS,
   (char*)"V.SetSession(vtkSMSession)\nC++: virtual void SetSession(vtkSMSession *)\n\nGet/Set the session on wihch this object exists. Note that\nsession is not reference counted.\n"},
  {(char*)"GetSession", PyvtkSMSessionObject_GetSession, METH_VARARGS,
   (char*)"V.GetSession() -> vtkSMSession\nC++: virtual vtkSMSession *GetSession()\n\nGet/Set the session on wihch this object exists. Note that\nsession is not reference counted.\n"},
  {(char*)"GetSessionProxyManager", PyvtkSMSessionObject_GetSessionProxyManager, METH_VARARGS,
   (char*)"V.GetSessionProxyManager() -> vtkSMSessionProxyManager\nC++: virtual vtkSMSessionProxyManager *GetSessionProxyManager()\n\nReturn the corresponding ProxyManager if any.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkSMSessionObject_StaticNew()
{
  return vtkSMSessionObject::New();
}

PyObject *PyVTKClass_vtkSMSessionObjectNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkSMSessionObject_StaticNew,
    PyvtkSMSessionObject_Methods,
    "vtkSMSessionObject", modulename,
    NULL, NULL,
    PyvtkSMSessionObject_Doc(),
    PyVTKClass_vtkSMObjectNew(modulename));
  return cls;
}

const char **PyvtkSMSessionObject_Doc()
{
  static const char *docstring[] = {
    "vtkSMSessionObject - superclass for any server manager classes\n\n",
    "Superclass: vtkSMObject\n\n",
    "vtkSMSessionObject provides methods to set and get the relative\nsession\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkSMSessionObject(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkSMSessionObjectNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkSMSessionObject", o) != 0)
    {
    Py_DECREF(o);
    }

}

