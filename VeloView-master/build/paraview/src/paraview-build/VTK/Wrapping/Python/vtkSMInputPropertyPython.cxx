// python wrapper for vtkSMInputProperty
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkSMProxy.h"
#include "vtkSMInputProperty.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkSMInputProperty(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkSMInputPropertyNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkSMProxyPropertyNew
extern "C" { PyObject *PyVTKClass_vtkSMProxyPropertyNew(const char *); }
#define DECLARED_PyVTKClass_vtkSMProxyPropertyNew
#endif

static const char **PyvtkSMInputProperty_Doc();


static PyObject *
PyvtkSMInputProperty_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMInputProperty *op = static_cast<vtkSMInputProperty *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkSMInputProperty::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMInputProperty_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMInputProperty *op = static_cast<vtkSMInputProperty *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSMInputProperty::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMInputProperty_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMInputProperty *op = static_cast<vtkSMInputProperty *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkSMInputProperty *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSMInputProperty::NewInstance());

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
PyvtkSMInputProperty_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkSMInputProperty *tempr = vtkSMInputProperty::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMInputProperty_SetMultipleInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMultipleInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMInputProperty *op = static_cast<vtkSMInputProperty *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetMultipleInput(temp0);
      }
    else
      {
      op->vtkSMInputProperty::SetMultipleInput(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMInputProperty_GetMultipleInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMultipleInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMInputProperty *op = static_cast<vtkSMInputProperty *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetMultipleInput() :
      op->vtkSMInputProperty::GetMultipleInput());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMInputProperty_AddInputConnection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddInputConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMInputProperty *op = static_cast<vtkSMInputProperty *>(vp);

  vtkSMProxy *temp0 = NULL;
  unsigned int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkSMProxy") &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->AddInputConnection(temp0, temp1);
      }
    else
      {
      op->vtkSMInputProperty::AddInputConnection(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMInputProperty_SetInputConnection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMInputProperty *op = static_cast<vtkSMInputProperty *>(vp);

  unsigned int temp0;
  vtkSMProxy *temp1 = NULL;
  unsigned int temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkSMProxy") &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      op->SetInputConnection(temp0, temp1, temp2);
      }
    else
      {
      op->vtkSMInputProperty::SetInputConnection(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMInputProperty_AddUncheckedInputConnection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddUncheckedInputConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMInputProperty *op = static_cast<vtkSMInputProperty *>(vp);

  vtkSMProxy *temp0 = NULL;
  unsigned int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkSMProxy") &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->AddUncheckedInputConnection(temp0, temp1);
      }
    else
      {
      op->vtkSMInputProperty::AddUncheckedInputConnection(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMInputProperty_SetUncheckedInputConnection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUncheckedInputConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMInputProperty *op = static_cast<vtkSMInputProperty *>(vp);

  unsigned int temp0;
  vtkSMProxy *temp1 = NULL;
  unsigned int temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkSMProxy") &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      op->SetUncheckedInputConnection(temp0, temp1, temp2);
      }
    else
      {
      op->vtkSMInputProperty::SetUncheckedInputConnection(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMInputProperty_GetOutputPortForConnection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputPortForConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMInputProperty *op = static_cast<vtkSMInputProperty *>(vp);

  unsigned int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    unsigned int tempr = (ap.IsBound() ?
      op->GetOutputPortForConnection(temp0) :
      op->vtkSMInputProperty::GetOutputPortForConnection(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMInputProperty_GetUncheckedOutputPortForConnection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUncheckedOutputPortForConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMInputProperty *op = static_cast<vtkSMInputProperty *>(vp);

  unsigned int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    unsigned int tempr = (ap.IsBound() ?
      op->GetUncheckedOutputPortForConnection(temp0) :
      op->vtkSMInputProperty::GetUncheckedOutputPortForConnection(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMInputProperty_SetPortIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPortIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMInputProperty *op = static_cast<vtkSMInputProperty *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetPortIndex(temp0);
      }
    else
      {
      op->vtkSMInputProperty::SetPortIndex(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMInputProperty_GetPortIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPortIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMInputProperty *op = static_cast<vtkSMInputProperty *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetPortIndex() :
      op->vtkSMInputProperty::GetPortIndex());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkSMInputProperty_Methods[] = {
  {(char*)"GetClassName", PyvtkSMInputProperty_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkSMInputProperty_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkSMInputProperty_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkSMInputProperty\nC++: vtkSMInputProperty *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkSMInputProperty_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkSMInputProperty\nC++: vtkSMInputProperty *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetMultipleInput", PyvtkSMInputProperty_SetMultipleInput, METH_VARARGS,
   (char*)"V.SetMultipleInput(int)\nC++: void SetMultipleInput(int a)\n\nShould be set to true if the \"input port\" this property\nrepresents can accept multiple inputs (for example, an append\nfilter)\n"},
  {(char*)"GetMultipleInput", PyvtkSMInputProperty_GetMultipleInput, METH_VARARGS,
   (char*)"V.GetMultipleInput() -> int\nC++: int GetMultipleInput()\n\nShould be set to true if the \"input port\" this property\nrepresents can accept multiple inputs (for example, an append\nfilter)\n"},
  {(char*)"AddInputConnection", PyvtkSMInputProperty_AddInputConnection, METH_VARARGS,
   (char*)"V.AddInputConnection(vtkSMProxy, int)\nC++: void AddInputConnection(vtkSMProxy *proxy,\n    unsigned int outputPort)\n\nAdd a proxy to the list of input proxies. The outputPort controls\nwhich outputPort will be used in connecting the pipeline. The\nproxy is added with corresponding Add and Set methods and can be\nremoved with RemoveXXX() methods as usual.\n"},
  {(char*)"SetInputConnection", PyvtkSMInputProperty_SetInputConnection, METH_VARARGS,
   (char*)"V.SetInputConnection(int, vtkSMProxy, int)\nC++: void SetInputConnection(unsigned int idx, vtkSMProxy *proxy,\n    unsigned int outputPort)\n\nAdd a proxy to the list of input proxies. The outputPort controls\nwhich outputPort will be used in connecting the pipeline. The\nproxy is added with corresponding Add and Set methods and can be\nremoved with RemoveXXX() methods as usual.\n"},
  {(char*)"AddUncheckedInputConnection", PyvtkSMInputProperty_AddUncheckedInputConnection, METH_VARARGS,
   (char*)"V.AddUncheckedInputConnection(vtkSMProxy, int)\nC++: void AddUncheckedInputConnection(vtkSMProxy *proxy,\n    unsigned int outputPort)\n\n"},
  {(char*)"SetUncheckedInputConnection", PyvtkSMInputProperty_SetUncheckedInputConnection, METH_VARARGS,
   (char*)"V.SetUncheckedInputConnection(int, vtkSMProxy, int)\nC++: void SetUncheckedInputConnection(unsigned int idx,\n    vtkSMProxy *proxy, unsigned int inputPort)\n\n"},
  {(char*)"GetOutputPortForConnection", PyvtkSMInputProperty_GetOutputPortForConnection, METH_VARARGS,
   (char*)"V.GetOutputPortForConnection(int) -> int\nC++: unsigned int GetOutputPortForConnection(unsigned int idx)\n\nGiven an index for a connection (proxy), returns which output\nport is used to connect the pipeline.\n"},
  {(char*)"GetUncheckedOutputPortForConnection", PyvtkSMInputProperty_GetUncheckedOutputPortForConnection, METH_VARARGS,
   (char*)"V.GetUncheckedOutputPortForConnection(int) -> int\nC++: unsigned int GetUncheckedOutputPortForConnection(\n    unsigned int idx)\n\nGiven an index for a connection (proxy), returns which output\nport is used to connect the pipeline.\n"},
  {(char*)"SetPortIndex", PyvtkSMInputProperty_SetPortIndex, METH_VARARGS,
   (char*)"V.SetPortIndex(int)\nC++: void SetPortIndex(int a)\n\nControls which input port this property uses when making\nconnections. By default, this is 0.\n"},
  {(char*)"GetPortIndex", PyvtkSMInputProperty_GetPortIndex, METH_VARARGS,
   (char*)"V.GetPortIndex() -> int\nC++: int GetPortIndex()\n\nControls which input port this property uses when making\nconnections. By default, this is 0.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkSMInputProperty_StaticNew()
{
  return vtkSMInputProperty::New();
}

PyObject *PyVTKClass_vtkSMInputPropertyNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkSMInputProperty_StaticNew,
    PyvtkSMInputProperty_Methods,
    "vtkSMInputProperty", modulename,
    NULL, NULL,
    PyvtkSMInputProperty_Doc(),
    PyVTKClass_vtkSMProxyPropertyNew(modulename));
  return cls;
}

const char **PyvtkSMInputProperty_Doc()
{
  static const char *docstring[] = {
    "vtkSMInputProperty - proxy representing inputs to a filter\n\n",
    "Superclass: vtkSMProxyProperty\n\n",
    "vtkSMInputProperty is a concrete sub-class of vtkSMProperty\nrepresenting inputs to a filter (through vtkSMProxy). It is a special\nproperty that always calls AddInput on a vtkSMSourceProxy. The xml\nconfiguration for input proxy supports the following attributes:\nmultiple_input: For an input port that connects multiple connections\nsuch as the input of an append filter. port_index: The input port to\n",
    "be used.\n\nSee Also:\n\nvtkSMInputProperty vtkSMSourceProxy\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkSMInputProperty(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkSMInputPropertyNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkSMInputProperty", o) != 0)
    {
    Py_DECREF(o);
    }

}

