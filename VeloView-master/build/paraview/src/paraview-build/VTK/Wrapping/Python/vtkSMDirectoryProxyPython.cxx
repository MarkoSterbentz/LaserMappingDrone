// python wrapper for vtkSMDirectoryProxy
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkSMDirectoryProxy.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkSMDirectoryProxy(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkSMDirectoryProxyNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkSMProxyNew
extern "C" { PyObject *PyVTKClass_vtkSMProxyNew(const char *); }
#define DECLARED_PyVTKClass_vtkSMProxyNew
#endif

static const char **PyvtkSMDirectoryProxy_Doc();


static PyObject *
PyvtkSMDirectoryProxy_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMDirectoryProxy *op = static_cast<vtkSMDirectoryProxy *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkSMDirectoryProxy::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMDirectoryProxy_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMDirectoryProxy *op = static_cast<vtkSMDirectoryProxy *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSMDirectoryProxy::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMDirectoryProxy_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMDirectoryProxy *op = static_cast<vtkSMDirectoryProxy *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkSMDirectoryProxy *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSMDirectoryProxy::NewInstance());

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
PyvtkSMDirectoryProxy_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkSMDirectoryProxy *tempr = vtkSMDirectoryProxy::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMDirectoryProxy_MakeDirectory(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MakeDirectory");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMDirectoryProxy *op = static_cast<vtkSMDirectoryProxy *>(vp);

  char *temp0 = NULL;
  unsigned int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    bool tempr = (ap.IsBound() ?
      op->MakeDirectory(temp0, temp1) :
      op->vtkSMDirectoryProxy::MakeDirectory(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMDirectoryProxy_DeleteDirectory(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeleteDirectory");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMDirectoryProxy *op = static_cast<vtkSMDirectoryProxy *>(vp);

  char *temp0 = NULL;
  unsigned int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    bool tempr = (ap.IsBound() ?
      op->DeleteDirectory(temp0, temp1) :
      op->vtkSMDirectoryProxy::DeleteDirectory(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMDirectoryProxy_Rename(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Rename");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMDirectoryProxy *op = static_cast<vtkSMDirectoryProxy *>(vp);

  char *temp0 = NULL;
  char *temp1 = NULL;
  unsigned int temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    bool tempr = (ap.IsBound() ?
      op->Rename(temp0, temp1, temp2) :
      op->vtkSMDirectoryProxy::Rename(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMDirectoryProxy_List(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "List");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMDirectoryProxy *op = static_cast<vtkSMDirectoryProxy *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->List(temp0);
      }
    else
      {
      op->vtkSMDirectoryProxy::List(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkSMDirectoryProxy_Methods[] = {
  {(char*)"GetClassName", PyvtkSMDirectoryProxy_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkSMDirectoryProxy_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkSMDirectoryProxy_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkSMDirectoryProxy\nC++: vtkSMDirectoryProxy *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkSMDirectoryProxy_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkSMDirectoryProxy\nC++: vtkSMDirectoryProxy *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"MakeDirectory", PyvtkSMDirectoryProxy_MakeDirectory, METH_VARARGS,
   (char*)"V.MakeDirectory(string, int) -> bool\nC++: bool MakeDirectory(const char *dir, vtkTypeUInt32 processes)\n\nCreate directory.\n"},
  {(char*)"DeleteDirectory", PyvtkSMDirectoryProxy_DeleteDirectory, METH_VARARGS,
   (char*)"V.DeleteDirectory(string, int) -> bool\nC++: bool DeleteDirectory(const char *dir,\n    vtkTypeUInt32 processes)\n\nRemove a directory.\n"},
  {(char*)"Rename", PyvtkSMDirectoryProxy_Rename, METH_VARARGS,
   (char*)"V.Rename(string, string, int) -> bool\nC++: bool Rename(const char *oldname, const char *newname,\n    vtkTypeUInt32 processes)\n\nRename a file or directory.\n"},
  {(char*)"List", PyvtkSMDirectoryProxy_List, METH_VARARGS,
   (char*)"V.List(string)\nC++: void List(const char *dir)\n\nList server side directory\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkSMDirectoryProxy_StaticNew()
{
  return vtkSMDirectoryProxy::New();
}

PyObject *PyVTKClass_vtkSMDirectoryProxyNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkSMDirectoryProxy_StaticNew,
    PyvtkSMDirectoryProxy_Methods,
    "vtkSMDirectoryProxy", modulename,
    NULL, NULL,
    PyvtkSMDirectoryProxy_Doc(),
    PyVTKClass_vtkSMProxyNew(modulename));
  return cls;
}

const char **PyvtkSMDirectoryProxy_Doc()
{
  static const char *docstring[] = {
    "vtkSMDirectoryProxy\n\n",
    "Superclass: vtkSMProxy\n\n",
    "Is a utility proxy to create/delete/rename directories.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkSMDirectoryProxy(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkSMDirectoryProxyNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkSMDirectoryProxy", o) != 0)
    {
    Py_DECREF(o);
    }

}

