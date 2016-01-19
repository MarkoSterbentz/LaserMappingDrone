// python wrapper for vtkPythonInterpreter
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkPythonInterpreter.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkPythonInterpreter(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkPythonInterpreterNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkPythonInterpreter_Doc();


static PyObject *
PyvtkPythonInterpreter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPythonInterpreter *op = static_cast<vtkPythonInterpreter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkPythonInterpreter::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPythonInterpreter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPythonInterpreter *op = static_cast<vtkPythonInterpreter *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPythonInterpreter::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPythonInterpreter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPythonInterpreter *op = static_cast<vtkPythonInterpreter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPythonInterpreter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPythonInterpreter::NewInstance());

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
PyvtkPythonInterpreter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkPythonInterpreter *tempr = vtkPythonInterpreter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPythonInterpreter_Initialize(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "Initialize");

  int temp0 = 1;
  PyObject *result = NULL;

  if (ap.CheckArgCount(0, 1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp0)))
    {
    bool tempr = vtkPythonInterpreter::Initialize(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPythonInterpreter_Finalize(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "Finalize");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkPythonInterpreter::Finalize();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPythonInterpreter_IsInitialized(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsInitialized");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    bool tempr = vtkPythonInterpreter::IsInitialized();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPythonInterpreter_SetProgramName(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SetProgramName");

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkPythonInterpreter::SetProgramName(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPythonInterpreter_RunSimpleString(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "RunSimpleString");

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkPythonInterpreter::RunSimpleString(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPythonInterpreter_PrependPythonPath(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "PrependPythonPath");

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkPythonInterpreter::PrependPythonPath(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPythonInterpreter_SetCaptureStdin(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SetCaptureStdin");

  bool temp0 = false;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkPythonInterpreter::SetCaptureStdin(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPythonInterpreter_GetCaptureStdin(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetCaptureStdin");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    bool tempr = vtkPythonInterpreter::GetCaptureStdin();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkPythonInterpreter_Methods[] = {
  {(char*)"GetClassName", PyvtkPythonInterpreter_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkPythonInterpreter_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkPythonInterpreter_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkPythonInterpreter\nC++: vtkPythonInterpreter *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkPythonInterpreter_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkPythonInterpreter\nC++: vtkPythonInterpreter *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"Initialize", PyvtkPythonInterpreter_Initialize, METH_VARARGS | METH_STATIC,
   (char*)"V.Initialize(int) -> bool\nC++: static bool Initialize(int initsigs=1)\n\nCall this method to initialize Python. This has no effect if\nPython is already initialized. Returns true if Python was\ninitialized by this call, or false if Python was already\ninitialized. Although, one can call Initialize()/Finalize() pair\nmultiple times, Python documentation warns that \"Some extensions\nmay not work properly if their initialization routine is called\nmore than once; this can happen if an application calls\nPy_InitializeEx() and Py_Finalize() more than once.\"\n"},
  {(char*)"Finalize", PyvtkPythonInterpreter_Finalize, METH_VARARGS | METH_STATIC,
   (char*)"V.Finalize()\nC++: static void Finalize()\n\nCall this method to finalize Python. This has no effect if Python\nhasn't been initialized already.\n"},
  {(char*)"IsInitialized", PyvtkPythonInterpreter_IsInitialized, METH_VARARGS | METH_STATIC,
   (char*)"V.IsInitialized() -> bool\nC++: static bool IsInitialized()\n\nReturns true is Python is initialized.\n"},
  {(char*)"SetProgramName", PyvtkPythonInterpreter_SetProgramName, METH_VARARGS | METH_STATIC,
   (char*)"V.SetProgramName(string)\nC++: static void SetProgramName(const char *programname)\n\nSet the program name. This must be called before the first\nInitialize() call. If called afterwords, this will raise a\nwarning.\n"},
  {(char*)"RunSimpleString", PyvtkPythonInterpreter_RunSimpleString, METH_VARARGS | METH_STATIC,
   (char*)"V.RunSimpleString(string)\nC++: static void RunSimpleString(const char *script)\n\nDevelopers are free to call Python C API directly. This\nconvenience method is provided to overcome an issue with the\nPython interpreter with handling of DOS line endings. This will\ninitialize Python if not already initialized.\n"},
  {(char*)"PrependPythonPath", PyvtkPythonInterpreter_PrependPythonPath, METH_VARARGS | METH_STATIC,
   (char*)"V.PrependPythonPath(string)\nC++: static void PrependPythonPath(const char *)\n\nPrepends the path to the sys.path variable. If Python has been\ninitialized, this call will update the sys.path variable\notherwise the same will be done once Python has been initialized.\nThe paths added are saved so that if Python is initialized again\n(by calls to Initialize()), then these paths will be re-added.\n"},
  {(char*)"SetCaptureStdin", PyvtkPythonInterpreter_SetCaptureStdin, METH_VARARGS | METH_STATIC,
   (char*)"V.SetCaptureStdin(bool)\nC++: static void SetCaptureStdin(bool)\n\nTo capture stdin, especially for non-terminal applications, set\nCaptureStdin to true. In that case vtkCommand::UpdateEvent will\nbe fired with the calldata being a reference to a vtkStdString\nthat should be filled in with the text to be passed in as the\ninput.\n"},
  {(char*)"GetCaptureStdin", PyvtkPythonInterpreter_GetCaptureStdin, METH_VARARGS | METH_STATIC,
   (char*)"V.GetCaptureStdin() -> bool\nC++: static bool GetCaptureStdin()\n\nTo capture stdin, especially for non-terminal applications, set\nCaptureStdin to true. In that case vtkCommand::UpdateEvent will\nbe fired with the calldata being a reference to a vtkStdString\nthat should be filled in with the text to be passed in as the\ninput.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkPythonInterpreter_StaticNew()
{
  return vtkPythonInterpreter::New();
}

PyObject *PyVTKClass_vtkPythonInterpreterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkPythonInterpreter_StaticNew,
    PyvtkPythonInterpreter_Methods,
    "vtkPythonInterpreter", modulename,
    NULL, NULL,
    PyvtkPythonInterpreter_Doc(),
    PyVTKClass_vtkObjectNew(modulename));
  return cls;
}

const char **PyvtkPythonInterpreter_Doc()
{
  static const char *docstring[] = {
    "vtkPythonInterpreter - wrapper for an embedded Python interpreter.\n\n",
    "Superclass: vtkObject\n\n",
    "vtkPythonInterpreter only offers static methods. However, there may\nbe need to register callbacks to call after the Python interpreter is\ninitialized and before the interpreter is finalized. One can register\nobservers for vtkCommand:EnterEvent and vtkCommand::ExitEvent to a\nlocal instance of vtkPythonInterpreter. vtkPythonInterpreter keeps\ntracks of all instances and invokes those events on all in",
    "stances at\nappropriate times.\n\nSame is true for obtaining outputs/errors generated by Python.\nvtkCommand::ErrorEvent and vtkCommand::SetOutputEvent will be fired\nwith calldata being const char* to the messages. Note that by\ndefault, the texts will be dumped on stdout/stderr in any case.\n\nTo capture stdin, especially for non-terminal applications, set\nCaptureStdin to true. In that case vtkCommand::",
    "UpdateEvent will be\nfired with the calldata being a reference to a vtkStdString that\nshould be filled in with the text to be passed in as the input.\n\nA few of the methods on this class implicitly call\nvtkPythonInterpreter::Initialize() to ensure Python is initialized\nviz. vtkPythonInterpreter::PyMain() and\nvtkPythonInterpreter::RunSimpleString(). These implicit\ninitialization always calls vtkPytho",
    "nInterpreter::Initialize(1). If\nthat's not what is expected, ensure that you call\nvtkPythonInterpreter::Initialize(0) before calling such methods.\nRefer to Py_InitializeEx() documentation for details on the\ndifferences between the two.\n\nNotes on calling Initialize/Finalize multiple times: Although\napplications are free to call Initialize/Finalize pairs multiple\ntimes, there are subtle differences ",
    "between the first Initialize and\nsubsequence Initialize calls after Finalize especially when\nconcerning with imported modules. Refer to Python docs for details.\nIn short, modules like numpy don't continue to work after a\nre-initialize. Hence use it with caution.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPythonInterpreter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPythonInterpreterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPythonInterpreter", o) != 0)
    {
    Py_DECREF(o);
    }

}

