// python wrapper for vtkCommandOptions
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkCommandOptions.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkCommandOptions(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkCommandOptionsNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkCommandOptions_Doc();


static PyObject *
PyvtkCommandOptions_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommandOptions *op = static_cast<vtkCommandOptions *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkCommandOptions::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCommandOptions_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommandOptions *op = static_cast<vtkCommandOptions *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkCommandOptions::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCommandOptions_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommandOptions *op = static_cast<vtkCommandOptions *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkCommandOptions *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkCommandOptions::NewInstance());

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
PyvtkCommandOptions_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkCommandOptions *tempr = vtkCommandOptions::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCommandOptions_GetHelp(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHelp");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommandOptions *op = static_cast<vtkCommandOptions *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetHelp() :
      op->vtkCommandOptions::GetHelp());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCommandOptions_GetHelpSelected(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHelpSelected");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommandOptions *op = static_cast<vtkCommandOptions *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetHelpSelected() :
      op->vtkCommandOptions::GetHelpSelected());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCommandOptions_SetHelpSelected(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHelpSelected");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommandOptions *op = static_cast<vtkCommandOptions *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetHelpSelected(temp0);
      }
    else
      {
      op->vtkCommandOptions::SetHelpSelected(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCommandOptions_GetProcessType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProcessType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommandOptions *op = static_cast<vtkCommandOptions *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetProcessType() :
      op->vtkCommandOptions::GetProcessType());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCommandOptions_SetProcessType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetProcessType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommandOptions *op = static_cast<vtkCommandOptions *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetProcessType(temp0);
      }
    else
      {
      op->vtkCommandOptions::SetProcessType(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCommandOptions_GetUnknownArgument(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUnknownArgument");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommandOptions *op = static_cast<vtkCommandOptions *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetUnknownArgument() :
      op->vtkCommandOptions::GetUnknownArgument());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCommandOptions_GetErrorMessage(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetErrorMessage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommandOptions *op = static_cast<vtkCommandOptions *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetErrorMessage() :
      op->vtkCommandOptions::GetErrorMessage());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCommandOptions_GetArgv0(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetArgv0");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommandOptions *op = static_cast<vtkCommandOptions *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetArgv0() :
      op->vtkCommandOptions::GetArgv0());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCommandOptions_GetApplicationPath(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetApplicationPath");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommandOptions *op = static_cast<vtkCommandOptions *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetApplicationPath() :
      op->vtkCommandOptions::GetApplicationPath());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCommandOptions_GetLastArgument(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLastArgument");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommandOptions *op = static_cast<vtkCommandOptions *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetLastArgument() :
      op->vtkCommandOptions::GetLastArgument());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkCommandOptions_Methods[] = {
  {(char*)"GetClassName", PyvtkCommandOptions_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkCommandOptions_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkCommandOptions_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkCommandOptions\nC++: vtkCommandOptions *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkCommandOptions_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkCommandOptions\nC++: vtkCommandOptions *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetHelp", PyvtkCommandOptions_GetHelp, METH_VARARGS,
   (char*)"V.GetHelp() -> string\nC++: const char *GetHelp()\n\n"},
  {(char*)"GetHelpSelected", PyvtkCommandOptions_GetHelpSelected, METH_VARARGS,
   (char*)"V.GetHelpSelected() -> int\nC++: int GetHelpSelected()\n\nWas help selected?\n"},
  {(char*)"SetHelpSelected", PyvtkCommandOptions_SetHelpSelected, METH_VARARGS,
   (char*)"V.SetHelpSelected(int)\nC++: void SetHelpSelected(int a)\n\nWas help selected?\n"},
  {(char*)"GetProcessType", PyvtkCommandOptions_GetProcessType, METH_VARARGS,
   (char*)"V.GetProcessType() -> int\nC++: int GetProcessType()\n\nSet/Get the type of the process for this set of options.\ndata-server, render-server, combined-server or client.\n"},
  {(char*)"SetProcessType", PyvtkCommandOptions_SetProcessType, METH_VARARGS,
   (char*)"V.SetProcessType(int)\nC++: void SetProcessType(int p)\n\nSet/Get the type of the process for this set of options.\ndata-server, render-server, combined-server or client.\n"},
  {(char*)"GetUnknownArgument", PyvtkCommandOptions_GetUnknownArgument, METH_VARARGS,
   (char*)"V.GetUnknownArgument() -> string\nC++: char *GetUnknownArgument()\n\nIn case of unknown argument, set this variable with the unknown\nargument.\n"},
  {(char*)"GetErrorMessage", PyvtkCommandOptions_GetErrorMessage, METH_VARARGS,
   (char*)"V.GetErrorMessage() -> string\nC++: char *GetErrorMessage()\n\nGet the error message if Parse returned 0.\n"},
  {(char*)"GetArgv0", PyvtkCommandOptions_GetArgv0, METH_VARARGS,
   (char*)"V.GetArgv0() -> string\nC++: const char *GetArgv0()\n\nGet argv[0]\n"},
  {(char*)"GetApplicationPath", PyvtkCommandOptions_GetApplicationPath, METH_VARARGS,
   (char*)"V.GetApplicationPath() -> string\nC++: char *GetApplicationPath()\n\nGet full path of executable (based on Argv0)\n"},
  {(char*)"GetLastArgument", PyvtkCommandOptions_GetLastArgument, METH_VARARGS,
   (char*)"V.GetLastArgument() -> int\nC++: int GetLastArgument()\n\nGet the index of the last argument parsed.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkCommandOptions_StaticNew()
{
  return vtkCommandOptions::New();
}

PyObject *PyVTKClass_vtkCommandOptionsNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkCommandOptions_StaticNew,
    PyvtkCommandOptions_Methods,
    "vtkCommandOptions", modulename,
    NULL, NULL,
    PyvtkCommandOptions_Doc(),
    PyVTKClass_vtkObjectNew(modulename));

  if (cls)
    {
    PyObject *d = PyVTKClass_GetDict(cls);
    PyObject *o;

    for (int c = 0; c < 2; c++)
      {
      static const struct { const char *name; int value; }
        constants[2] = {
          { "EVERYBODY", vtkCommandOptions::EVERYBODY },
          { "XMLONLY", vtkCommandOptions::XMLONLY },
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

const char **PyvtkCommandOptions_Doc()
{
  static const char *docstring[] = {
    "vtkCommandOptions - ParaView options storage\n\n",
    "Superclass: vtkObject\n\n",
    "An object of this class represents a storage for ParaView options\n\nThese options can be retrieved during run-time, set using\nconfiguration file or using Command Line Arguments.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkCommandOptions(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkCommandOptionsNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkCommandOptions", o) != 0)
    {
    Py_DECREF(o);
    }

}

