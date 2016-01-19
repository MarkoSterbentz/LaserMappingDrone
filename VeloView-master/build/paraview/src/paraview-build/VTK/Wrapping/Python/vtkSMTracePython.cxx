// python wrapper for vtkSMTrace
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkStdString.h"
#include "vtkSMTrace.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkSMTrace(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkSMTraceNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkSMObjectNew
extern "C" { PyObject *PyVTKClass_vtkSMObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkSMObjectNew
#endif

static const char **PyvtkSMTrace_Doc();


static PyObject *
PyvtkSMTrace_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMTrace *op = static_cast<vtkSMTrace *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkSMTrace::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMTrace_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMTrace *op = static_cast<vtkSMTrace *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSMTrace::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMTrace_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMTrace *op = static_cast<vtkSMTrace *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkSMTrace *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSMTrace::NewInstance());

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
PyvtkSMTrace_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkSMTrace *tempr = vtkSMTrace::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMTrace_GetActiveTracer(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetActiveTracer");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkSMTrace *tempr = vtkSMTrace::GetActiveTracer();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMTrace_StartTrace(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "StartTrace");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkSMTrace *tempr = vtkSMTrace::StartTrace();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMTrace_StopTrace(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "StopTrace");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkStdString tempr = vtkSMTrace::StopTrace();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMTrace_SetTraceXMLDefaults(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTraceXMLDefaults");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMTrace *op = static_cast<vtkSMTrace *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetTraceXMLDefaults(temp0);
      }
    else
      {
      op->vtkSMTrace::SetTraceXMLDefaults(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMTrace_GetTraceXMLDefaults(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTraceXMLDefaults");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMTrace *op = static_cast<vtkSMTrace *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetTraceXMLDefaults() :
      op->vtkSMTrace::GetTraceXMLDefaults());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMTrace_SetLogTraceToStdout(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLogTraceToStdout");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMTrace *op = static_cast<vtkSMTrace *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetLogTraceToStdout(temp0);
      }
    else
      {
      op->vtkSMTrace::SetLogTraceToStdout(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMTrace_GetLogTraceToStdout(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLogTraceToStdout");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMTrace *op = static_cast<vtkSMTrace *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetLogTraceToStdout() :
      op->vtkSMTrace::GetLogTraceToStdout());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMTrace_SetFullyTraceSupplementalProxies(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFullyTraceSupplementalProxies");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMTrace *op = static_cast<vtkSMTrace *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetFullyTraceSupplementalProxies(temp0);
      }
    else
      {
      op->vtkSMTrace::SetFullyTraceSupplementalProxies(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMTrace_GetFullyTraceSupplementalProxies(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFullyTraceSupplementalProxies");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMTrace *op = static_cast<vtkSMTrace *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetFullyTraceSupplementalProxies() :
      op->vtkSMTrace::GetFullyTraceSupplementalProxies());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMTrace_SetPropertiesToTraceOnCreate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPropertiesToTraceOnCreate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMTrace *op = static_cast<vtkSMTrace *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetPropertiesToTraceOnCreate(temp0);
      }
    else
      {
      op->vtkSMTrace::SetPropertiesToTraceOnCreate(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMTrace_GetPropertiesToTraceOnCreateMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPropertiesToTraceOnCreateMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMTrace *op = static_cast<vtkSMTrace *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetPropertiesToTraceOnCreateMinValue() :
      op->vtkSMTrace::GetPropertiesToTraceOnCreateMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMTrace_GetPropertiesToTraceOnCreateMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPropertiesToTraceOnCreateMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMTrace *op = static_cast<vtkSMTrace *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetPropertiesToTraceOnCreateMaxValue() :
      op->vtkSMTrace::GetPropertiesToTraceOnCreateMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMTrace_GetPropertiesToTraceOnCreate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPropertiesToTraceOnCreate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMTrace *op = static_cast<vtkSMTrace *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetPropertiesToTraceOnCreate() :
      op->vtkSMTrace::GetPropertiesToTraceOnCreate());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMTrace_GetCurrentTrace(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCurrentTrace");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMTrace *op = static_cast<vtkSMTrace *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkStdString tempr = (ap.IsBound() ?
      op->GetCurrentTrace() :
      op->vtkSMTrace::GetCurrentTrace());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMTrace_GetState(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetState");

  int temp0;
  bool temp1 = false;
  PyObject *result = NULL;

  if (ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    vtkStdString tempr = vtkSMTrace::GetState(temp0, temp1);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkSMTrace_Methods[] = {
  {(char*)"GetClassName", PyvtkSMTrace_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkSMTrace_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkSMTrace_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkSMTrace\nC++: vtkSMTrace *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkSMTrace_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkSMTrace\nC++: vtkSMTrace *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetActiveTracer", PyvtkSMTrace_GetActiveTracer, METH_VARARGS | METH_STATIC,
   (char*)"V.GetActiveTracer() -> vtkSMTrace\nC++: static vtkSMTrace *GetActiveTracer()\n\nProvides access to the \"active\" tracer. There can only be one\nactive tracer in the application currently.\n"},
  {(char*)"StartTrace", PyvtkSMTrace_StartTrace, METH_VARARGS | METH_STATIC,
   (char*)"V.StartTrace() -> vtkSMTrace\nC++: static vtkSMTrace *StartTrace()\n\nMethods to start/stop tracing. This will create a new instance of\nvtkSMTrace and set that up as the active tracer. If an active\ntracer is already present, then this will simply return the\ncurrent active tracer.\n"},
  {(char*)"StopTrace", PyvtkSMTrace_StopTrace, METH_VARARGS | METH_STATIC,
   (char*)"V.StopTrace() -> string\nC++: static vtkStdString StopTrace()\n\nStop trace and return the generated trace script. This will also\ndestroy the active tracer.\n"},
  {(char*)"SetTraceXMLDefaults", PyvtkSMTrace_SetTraceXMLDefaults, METH_VARARGS,
   (char*)"V.SetTraceXMLDefaults(bool)\nC++: void SetTraceXMLDefaults(bool a)\n\nGet/Set whether all properties should be saved for a proxy,\nincluding the default values. If false, only the properties that\nhave been modified from the XML-defaults will be logged.\n"},
  {(char*)"GetTraceXMLDefaults", PyvtkSMTrace_GetTraceXMLDefaults, METH_VARARGS,
   (char*)"V.GetTraceXMLDefaults() -> bool\nC++: bool GetTraceXMLDefaults()\n\nGet/Set whether all properties should be saved for a proxy,\nincluding the default values. If false, only the properties that\nhave been modified from the XML-defaults will be logged.\n"},
  {(char*)"SetLogTraceToStdout", PyvtkSMTrace_SetLogTraceToStdout, METH_VARARGS,
   (char*)"V.SetLogTraceToStdout(bool)\nC++: void SetLogTraceToStdout(bool a)\n\nLog generated trace to stdout as the trace is being generated\n(useful for debugging).\n"},
  {(char*)"GetLogTraceToStdout", PyvtkSMTrace_GetLogTraceToStdout, METH_VARARGS,
   (char*)"V.GetLogTraceToStdout() -> bool\nC++: bool GetLogTraceToStdout()\n\nLog generated trace to stdout as the trace is being generated\n(useful for debugging).\n"},
  {(char*)"SetFullyTraceSupplementalProxies", PyvtkSMTrace_SetFullyTraceSupplementalProxies, METH_VARARGS,
   (char*)"V.SetFullyTraceSupplementalProxies(bool)\nC++: void SetFullyTraceSupplementalProxies(bool a)\n\nSupplemental proxies are proxies that not explicitly created by\nthe user i.e. proxies such as lookup tables, scalar bars,\nanimation scene, etc. When set to true (default is false), the\nfirst time such a proxy is encountered in the trace, the trace\nwill log the property values on that proxy using the\nPropertiesToTraceOnCreate rules.\n"},
  {(char*)"GetFullyTraceSupplementalProxies", PyvtkSMTrace_GetFullyTraceSupplementalProxies, METH_VARARGS,
   (char*)"V.GetFullyTraceSupplementalProxies() -> bool\nC++: bool GetFullyTraceSupplementalProxies()\n\nSupplemental proxies are proxies that not explicitly created by\nthe user i.e. proxies such as lookup tables, scalar bars,\nanimation scene, etc. When set to true (default is false), the\nfirst time such a proxy is encountered in the trace, the trace\nwill log the property values on that proxy using the\nPropertiesToTraceOnCreate rules.\n"},
  {(char*)"SetPropertiesToTraceOnCreate", PyvtkSMTrace_SetPropertiesToTraceOnCreate, METH_VARARGS,
   (char*)"V.SetPropertiesToTraceOnCreate(int)\nC++: void SetPropertiesToTraceOnCreate(int)\n\n"},
  {(char*)"GetPropertiesToTraceOnCreateMinValue", PyvtkSMTrace_GetPropertiesToTraceOnCreateMinValue, METH_VARARGS,
   (char*)"V.GetPropertiesToTraceOnCreateMinValue() -> int\nC++: int GetPropertiesToTraceOnCreateMinValue()\n\n"},
  {(char*)"GetPropertiesToTraceOnCreateMaxValue", PyvtkSMTrace_GetPropertiesToTraceOnCreateMaxValue, METH_VARARGS,
   (char*)"V.GetPropertiesToTraceOnCreateMaxValue() -> int\nC++: int GetPropertiesToTraceOnCreateMaxValue()\n\n"},
  {(char*)"GetPropertiesToTraceOnCreate", PyvtkSMTrace_GetPropertiesToTraceOnCreate, METH_VARARGS,
   (char*)"V.GetPropertiesToTraceOnCreate() -> int\nC++: int GetPropertiesToTraceOnCreate()\n\n"},
  {(char*)"GetCurrentTrace", PyvtkSMTrace_GetCurrentTrace, METH_VARARGS,
   (char*)"V.GetCurrentTrace() -> string\nC++: vtkStdString GetCurrentTrace()\n\nReturn the current trace.\n"},
  {(char*)"GetState", PyvtkSMTrace_GetState, METH_VARARGS | METH_STATIC,
   (char*)"V.GetState(int, bool) -> string\nC++: static vtkStdString GetState(int propertiesToTraceOnCreate,\n    bool skipHiddenRepresentations)\n\nSave a Python state for the application and return it. Note this\ncannot be called when tracing is active.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkSMTrace_StaticNew()
{
  return vtkSMTrace::New();
}

PyObject *PyVTKClass_vtkSMTraceNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkSMTrace_StaticNew,
    PyvtkSMTrace_Methods,
    "vtkSMTrace", modulename,
    NULL, NULL,
    PyvtkSMTrace_Doc(),
    PyVTKClass_vtkSMObjectNew(modulename));

  if (cls)
    {
    PyObject *d = PyVTKClass_GetDict(cls);
    PyObject *o;

    for (int c = 0; c < 3; c++)
      {
      static const struct { const char *name; int value; }
        constants[3] = {
          { "RECORD_ALL_PROPERTIES", vtkSMTrace::RECORD_ALL_PROPERTIES },
          { "RECORD_MODIFIED_PROPERTIES", vtkSMTrace::RECORD_MODIFIED_PROPERTIES },
          { "RECORD_USER_MODIFIED_PROPERTIES", vtkSMTrace::RECORD_USER_MODIFIED_PROPERTIES },
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

const char **PyvtkSMTrace_Doc()
{
  static const char *docstring[] = {
    "vtkSMTrace - vtkSMTrace is used to produce Python trace in the\nParaView\n\n",
    "Superclass: vtkSMObject\n\n",
    "vtkSMTrace is used to produce Python trace in the ParaView\napplication. To start/stop trace, use the static API\nvtkSMTrace::StartTrace() and vtkSMTrace::StopTrace(). That sets up\nthe vtkSMTrace instance used as the ActiveTracer. You can setup\nconfiguration parameters on the vtkSMTrace instance returned by\nvtkSMTrace::StartTrace(). The configuration parameters control\nvarious aspects of the trace.\n",
    "\nTo effective tracing, the application logic should explicitly trace\ntraceable actions by using the SM_SCOPED_TRACE() macro. This macro\nwill have any effect only when there's an ActiveTracer setup i.e\ntracing is in effect. The result on using SM_SCOPED_TRACE() when\ntracing is active, is to crate a Python class instance. The name of\nthe class is the argument to SM_SCOPED_TRACE() and the class is\nde",
    "fined in paraview.smtrace module. There are various classes defined\nfor tracing specific actions like Show, RegisterViewProxy, and\ngeneric actions like PropertiesModified. Keyword or positional\narguments can be passed to the constructor using the following the\nsyntax:\n\n{.cpp}\n   // pass keyword arguments.\n   SM_SCOPED_TRACE(PropertiesModified)\n               .arg(\"proxy\", aProxy)\n               .a",
    "rg(\"comment\", \"some comment\");\n\n\n   // pass positional arguments.\n   SM_SCOPED_TRACE(PropertiesModified)\n               .arg(aProxy)\n               .arg(\"some comment\");\n\n\n   // mixing positional and keyword arguments.\n   SM_SCOPED_TRACE(PropertiesModified)\n               .arg(aProxy)\n               .arg(\"comment\", \"some comment\");\n\nThe constructed class instance is finalized and deleted when the\n",
    "temporary variable created by the macro goes out of scope (hence the\nname SM_SCOPED_TRACE).\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkSMTrace(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkSMTraceNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkSMTrace", o) != 0)
    {
    Py_DECREF(o);
    }

}

