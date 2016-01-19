// python wrapper for vtkSIVectorProperty
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkSIVectorProperty.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkSIVectorProperty(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkSIVectorPropertyNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkSIPropertyNew
extern "C" { PyObject *PyVTKClass_vtkSIPropertyNew(const char *); }
#define DECLARED_PyVTKClass_vtkSIPropertyNew
#endif

static const char **PyvtkSIVectorProperty_Doc();


static PyObject *
PyvtkSIVectorProperty_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSIVectorProperty *op = static_cast<vtkSIVectorProperty *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkSIVectorProperty::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSIVectorProperty_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSIVectorProperty *op = static_cast<vtkSIVectorProperty *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSIVectorProperty::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSIVectorProperty_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSIVectorProperty *op = static_cast<vtkSIVectorProperty *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkSIVectorProperty *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSIVectorProperty::NewInstance());

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
PyvtkSIVectorProperty_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkSIVectorProperty *tempr = vtkSIVectorProperty::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSIVectorProperty_GetNumberOfElementsPerCommand(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfElementsPerCommand");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSIVectorProperty *op = static_cast<vtkSIVectorProperty *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfElementsPerCommand() :
      op->vtkSIVectorProperty::GetNumberOfElementsPerCommand());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSIVectorProperty_GetUseIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSIVectorProperty *op = static_cast<vtkSIVectorProperty *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetUseIndex() :
      op->vtkSIVectorProperty::GetUseIndex());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSIVectorProperty_GetCleanCommand(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCleanCommand");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSIVectorProperty *op = static_cast<vtkSIVectorProperty *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetCleanCommand() :
      op->vtkSIVectorProperty::GetCleanCommand());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSIVectorProperty_GetSetNumberCommand(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSetNumberCommand");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSIVectorProperty *op = static_cast<vtkSIVectorProperty *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetSetNumberCommand() :
      op->vtkSIVectorProperty::GetSetNumberCommand());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSIVectorProperty_GetInitialString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInitialString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSIVectorProperty *op = static_cast<vtkSIVectorProperty *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetInitialString() :
      op->vtkSIVectorProperty::GetInitialString());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkSIVectorProperty_Methods[] = {
  {(char*)"GetClassName", PyvtkSIVectorProperty_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkSIVectorProperty_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkSIVectorProperty_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkSIVectorProperty\nC++: vtkSIVectorProperty *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkSIVectorProperty_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkSIVectorProperty\nC++: vtkSIVectorProperty *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetNumberOfElementsPerCommand", PyvtkSIVectorProperty_GetNumberOfElementsPerCommand, METH_VARARGS,
   (char*)"V.GetNumberOfElementsPerCommand() -> int\nC++: int GetNumberOfElementsPerCommand()\n\nIf RepeatCommand is true, the command is invoked multiple times,\neach time with NumberOfElementsPerCommand values. For example, if\nRepeatCommand is true, NumberOfElementsPerCommand is 2, the\ncommand is SetFoo and the values are 1 2 3 4 5 6, the resulting\nstream will have:\n * Invoke obj SetFoo 1 2\n * Invoke obj SetFoo 3 4\n * Invoke obj SetFoo 5 6\n \n"},
  {(char*)"GetUseIndex", PyvtkSIVectorProperty_GetUseIndex, METH_VARARGS,
   (char*)"V.GetUseIndex() -> bool\nC++: bool GetUseIndex()\n\nIf UseIndex and RepeatCommand are true, the property will add an\nindex integer before each command. For example, if UseIndex and\nRepeatCommand are true, NumberOfElementsPerCommand is 2, the\ncommand is SetFoo and the values are 5 6 7 8 9 10, the resulting\nstream will have:\n * Invoke obj SetFoo 0 5 6\n * Invoke obj SetFoo 1 7 8\n * Invoke obj SetFoo 2 9 10\n \n"},
  {(char*)"GetCleanCommand", PyvtkSIVectorProperty_GetCleanCommand, METH_VARARGS,
   (char*)"V.GetCleanCommand() -> string\nC++: char *GetCleanCommand()\n\nCommand that can be used to remove all values. Typically used\nwhen RepeatCommand = 1. If set, the clean command is called\nbefore the main Command.\n"},
  {(char*)"GetSetNumberCommand", PyvtkSIVectorProperty_GetSetNumberCommand, METH_VARARGS,
   (char*)"V.GetSetNumberCommand() -> string\nC++: char *GetSetNumberCommand()\n\nIf SetNumberCommand is set, it is called before Command with the\nnumber of arguments as the parameter.\n"},
  {(char*)"GetInitialString", PyvtkSIVectorProperty_GetInitialString, METH_VARARGS,
   (char*)"V.GetInitialString() -> string\nC++: char *GetInitialString()\n\n"},
  {NULL, NULL, 0, NULL}
};

PyObject *PyVTKClass_vtkSIVectorPropertyNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(NULL,
    PyvtkSIVectorProperty_Methods,
    "vtkSIVectorProperty", modulename,
    NULL, NULL,
    PyvtkSIVectorProperty_Doc(),
    PyVTKClass_vtkSIPropertyNew(modulename));
  return cls;
}

const char **PyvtkSIVectorProperty_Doc()
{
  static const char *docstring[] = {
    "vtkSIVectorProperty\n\n",
    "Superclass: vtkSIProperty\n\n",
    "Abstract class for SIProperty that hold an array of values. Define\nthe array management API\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkSIVectorProperty(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkSIVectorPropertyNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkSIVectorProperty", o) != 0)
    {
    Py_DECREF(o);
    }

}

