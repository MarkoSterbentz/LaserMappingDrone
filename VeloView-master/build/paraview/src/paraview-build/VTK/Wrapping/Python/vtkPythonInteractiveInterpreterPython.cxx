// python wrapper for vtkPythonInteractiveInterpreter
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkPythonInteractiveInterpreter.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkPythonInteractiveInterpreter(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkPythonInteractiveInterpreterNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkPythonInteractiveInterpreter_Doc();


static PyObject *
PyvtkPythonInteractiveInterpreter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPythonInteractiveInterpreter *op = static_cast<vtkPythonInteractiveInterpreter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkPythonInteractiveInterpreter::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPythonInteractiveInterpreter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPythonInteractiveInterpreter *op = static_cast<vtkPythonInteractiveInterpreter *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPythonInteractiveInterpreter::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPythonInteractiveInterpreter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPythonInteractiveInterpreter *op = static_cast<vtkPythonInteractiveInterpreter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPythonInteractiveInterpreter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPythonInteractiveInterpreter::NewInstance());

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
PyvtkPythonInteractiveInterpreter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkPythonInteractiveInterpreter *tempr = vtkPythonInteractiveInterpreter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPythonInteractiveInterpreter_Reset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Reset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPythonInteractiveInterpreter *op = static_cast<vtkPythonInteractiveInterpreter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Reset();
      }
    else
      {
      op->vtkPythonInteractiveInterpreter::Reset();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPythonInteractiveInterpreter_RunStringWithConsoleLocals(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RunStringWithConsoleLocals");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPythonInteractiveInterpreter *op = static_cast<vtkPythonInteractiveInterpreter *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->RunStringWithConsoleLocals(temp0) :
      op->vtkPythonInteractiveInterpreter::RunStringWithConsoleLocals(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPythonInteractiveInterpreter_GetInteractiveConsolePyObject(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInteractiveConsolePyObject");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPythonInteractiveInterpreter *op = static_cast<vtkPythonInteractiveInterpreter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    void  *tempr = (ap.IsBound() ?
      op->GetInteractiveConsolePyObject() :
      op->vtkPythonInteractiveInterpreter::GetInteractiveConsolePyObject());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPythonInteractiveInterpreter_GetInteractiveConsoleLocalsPyObject(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInteractiveConsoleLocalsPyObject");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPythonInteractiveInterpreter *op = static_cast<vtkPythonInteractiveInterpreter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    void  *tempr = (ap.IsBound() ?
      op->GetInteractiveConsoleLocalsPyObject() :
      op->vtkPythonInteractiveInterpreter::GetInteractiveConsoleLocalsPyObject());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkPythonInteractiveInterpreter_Methods[] = {
  {(char*)"GetClassName", PyvtkPythonInteractiveInterpreter_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkPythonInteractiveInterpreter_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkPythonInteractiveInterpreter_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkPythonInteractiveInterpreter\nC++: vtkPythonInteractiveInterpreter *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkPythonInteractiveInterpreter_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkPythonInteractiveInterpreter\nC++: vtkPythonInteractiveInterpreter *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"Reset", PyvtkPythonInteractiveInterpreter_Reset, METH_VARARGS,
   (char*)"V.Reset()\nC++: void Reset()\n\nThis destroys the internal code.InteractiveConsole instance.\nHence, next time Push() will be called, it will use a brand new\ninstance of code.InteractiveConsole().\n"},
  {(char*)"RunStringWithConsoleLocals", PyvtkPythonInteractiveInterpreter_RunStringWithConsoleLocals, METH_VARARGS,
   (char*)"V.RunStringWithConsoleLocals(string) -> int\nC++: int RunStringWithConsoleLocals(const char *script)\n\nExecutes the given python source code using the context given by\nthe locals() object used by this interactive console.  This is\nsimilar to using vtkPythonInterpreter::RunSimpleString(), except\nthat method will execute code in the context of the __main__\nmodule. Returns 0 on success or -1 if an exception was raised.\n"},
  {(char*)"GetInteractiveConsolePyObject", PyvtkPythonInteractiveInterpreter_GetInteractiveConsolePyObject, METH_VARARGS,
   (char*)"V.GetInteractiveConsolePyObject() ->\nC++: void *GetInteractiveConsolePyObject()\n\nProvides access to the internal PyObject instances used for the\ncode.InteractiveConsole() as well as the dictionary for the\nlocals of the code.InteractiveConsole() instance. Do not use if\nyou are not sure what these are for.\n"},
  {(char*)"GetInteractiveConsoleLocalsPyObject", PyvtkPythonInteractiveInterpreter_GetInteractiveConsoleLocalsPyObject, METH_VARARGS,
   (char*)"V.GetInteractiveConsoleLocalsPyObject() ->\nC++: void *GetInteractiveConsoleLocalsPyObject()\n\nProvides access to the internal PyObject instances used for the\ncode.InteractiveConsole() as well as the dictionary for the\nlocals of the code.InteractiveConsole() instance. Do not use if\nyou are not sure what these are for.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkPythonInteractiveInterpreter_StaticNew()
{
  return vtkPythonInteractiveInterpreter::New();
}

PyObject *PyVTKClass_vtkPythonInteractiveInterpreterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkPythonInteractiveInterpreter_StaticNew,
    PyvtkPythonInteractiveInterpreter_Methods,
    "vtkPythonInteractiveInterpreter", modulename,
    NULL, NULL,
    PyvtkPythonInteractiveInterpreter_Doc(),
    PyVTKClass_vtkObjectNew(modulename));
  return cls;
}

const char **PyvtkPythonInteractiveInterpreter_Doc()
{
  static const char *docstring[] = {
    "vtkPythonInteractiveInterpreter - interpreter for interactive shells.\n\n",
    "Superclass: vtkObject\n\n",
    "vtkPythonInteractiveInterpreter provides an interpreter that can be\nused in interactive shells. It mimicks the behaviour of the\ninteractive console (much like the default Python shell) providing\nthe \"read-eval-print\" loops. It also handles incomplete statements\ncorrectly. It uses \"code\" module provided by Python standard library\nto achieve this. It uses vtkPythonInterpreter to ensure that the\nglob",
    "al Python environment is setup correctly. Note that any time the\nvtkPythonInterpreter::Finalize() is called, the interactive\ninterpreter will be destroyed as well. Subsequent calls to\nvtkPythonInterpreter::Push() will reinitialize Python as start a new\ninteractive interpreter shell.\n\nThis class also observers and forwards all events invoked by a\nvtkPythonInterpreter instance include vtkCommand::En",
    "terEvent,\nvtkCommand::ExitEvent, vtkCommand::UpdateEvent,\nvtkCommand::ErrorEvent and vtkCommand::SetOutputEvent.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPythonInteractiveInterpreter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPythonInteractiveInterpreterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPythonInteractiveInterpreter", o) != 0)
    {
    Py_DECREF(o);
    }

}

