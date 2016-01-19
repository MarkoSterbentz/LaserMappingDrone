// python wrapper for vtkSIProxy
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkSIProxy.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkSIProxy(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkSIProxyNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkSIObjectNew
extern "C" { PyObject *PyVTKClass_vtkSIObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkSIObjectNew
#endif

static const char **PyvtkSIProxy_Doc();


static PyObject *
PyvtkSIProxy_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSIProxy *op = static_cast<vtkSIProxy *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkSIProxy::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSIProxy_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSIProxy *op = static_cast<vtkSIProxy *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSIProxy::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSIProxy_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSIProxy *op = static_cast<vtkSIProxy *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkSIProxy *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSIProxy::NewInstance());

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
PyvtkSIProxy_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkSIProxy *tempr = vtkSIProxy::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSIProxy_AboutToDelete(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AboutToDelete");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSIProxy *op = static_cast<vtkSIProxy *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->AboutToDelete();
      }
    else
      {
      op->vtkSIProxy::AboutToDelete();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSIProxy_Push(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Push");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSIProxy *op = static_cast<vtkSIProxy *>(vp);

  vtkSMMessage *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMMessage"))
    {
    if (ap.IsBound())
      {
      op->Push(temp0);
      }
    else
      {
      op->vtkSIProxy::Push(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSIProxy_Pull(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Pull");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSIProxy *op = static_cast<vtkSIProxy *>(vp);

  vtkSMMessage *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMMessage"))
    {
    if (ap.IsBound())
      {
      op->Pull(temp0);
      }
    else
      {
      op->vtkSIProxy::Pull(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSIProxy_GetVTKObject(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVTKObject");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSIProxy *op = static_cast<vtkSIProxy *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkObjectBase *tempr = (ap.IsBound() ?
      op->GetVTKObject() :
      op->vtkSIProxy::GetVTKObject());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSIProxy_SetVTKObject(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVTKObject");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSIProxy *op = static_cast<vtkSIProxy *>(vp);

  vtkObjectBase *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
    {
    if (ap.IsBound())
      {
      op->SetVTKObject(temp0);
      }
    else
      {
      op->vtkSIProxy::SetVTKObject(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSIProxy_GetSIProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSIProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSIProxy *op = static_cast<vtkSIProxy *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkSIProperty *tempr = (ap.IsBound() ?
      op->GetSIProperty(temp0) :
      op->vtkSIProxy::GetSIProperty(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSIProxy_GetVTKClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVTKClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSIProxy *op = static_cast<vtkSIProxy *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetVTKClassName() :
      op->vtkSIProxy::GetVTKClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSIProxy_GetXMLName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetXMLName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSIProxy *op = static_cast<vtkSIProxy *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetXMLName() :
      op->vtkSIProxy::GetXMLName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSIProxy_GetXMLGroup(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetXMLGroup");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSIProxy *op = static_cast<vtkSIProxy *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetXMLGroup() :
      op->vtkSIProxy::GetXMLGroup());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSIProxy_IsNullProxy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsNullProxy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSIProxy *op = static_cast<vtkSIProxy *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->IsNullProxy() :
      op->vtkSIProxy::IsNullProxy());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSIProxy_AddInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSIProxy *op = static_cast<vtkSIProxy *>(vp);

  int temp0;
  vtkAlgorithmOutput *temp1 = NULL;
  char *temp2 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkAlgorithmOutput") &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      op->AddInput(temp0, temp1, temp2);
      }
    else
      {
      op->vtkSIProxy::AddInput(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSIProxy_CleanInputs(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CleanInputs");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSIProxy *op = static_cast<vtkSIProxy *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->CleanInputs(temp0);
      }
    else
      {
      op->vtkSIProxy::CleanInputs(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSIProxy_UpdatePipelineInformation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdatePipelineInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSIProxy *op = static_cast<vtkSIProxy *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->UpdatePipelineInformation();
      }
    else
      {
      op->vtkSIProxy::UpdatePipelineInformation();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkSIProxy_Methods[] = {
  {(char*)"GetClassName", PyvtkSIProxy_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkSIProxy_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkSIProxy_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkSIProxy\nC++: vtkSIProxy *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkSIProxy_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkSIProxy\nC++: vtkSIProxy *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"AboutToDelete", PyvtkSIProxy_AboutToDelete, METH_VARARGS,
   (char*)"V.AboutToDelete()\nC++: virtual void AboutToDelete()\n\nThis method is called before the deletion of the SIObject.\nBasically this is used to remove all dependency with other\nSIObject so after a first pass on all SIObject with a\nAboutToDelete() we can simply delete the remaining SIObjects.\n"},
  {(char*)"Push", PyvtkSIProxy_Push, METH_VARARGS,
   (char*)"V.Push(vtkSMMessage)\nC++: virtual void Push(vtkSMMessage *msg)\n\nPush a new state to the underneath implementation\n"},
  {(char*)"Pull", PyvtkSIProxy_Pull, METH_VARARGS,
   (char*)"V.Pull(vtkSMMessage)\nC++: virtual void Pull(vtkSMMessage *msg)\n\nPull the current state of the underneath implementation\n"},
  {(char*)"GetVTKObject", PyvtkSIProxy_GetVTKObject, METH_VARARGS,
   (char*)"V.GetVTKObject() -> vtkObjectBase\nC++: vtkObjectBase *GetVTKObject()\n\nReturns access to the VTKObject pointer, if any. Note this is a\nraw pointer to the local instance of the VTK object. Any changes\nyou make directly using this object pointer will not be reflected\non other processes.\n"},
  {(char*)"SetVTKObject", PyvtkSIProxy_SetVTKObject, METH_VARARGS,
   (char*)"V.SetVTKObject(vtkObjectBase)\nC++: void SetVTKObject(vtkObjectBase *)\n\nReturns access to the VTKObject pointer, if any. Note this is a\nraw pointer to the local instance of the VTK object. Any changes\nyou make directly using this object pointer will not be reflected\non other processes.\n"},
  {(char*)"GetSIProperty", PyvtkSIProxy_GetSIProperty, METH_VARARGS,
   (char*)"V.GetSIProperty(string) -> vtkSIProperty\nC++: vtkSIProperty *GetSIProperty(const char *name)\n\nProvides access to the property helper.\n"},
  {(char*)"GetVTKClassName", PyvtkSIProxy_GetVTKClassName, METH_VARARGS,
   (char*)"V.GetVTKClassName() -> string\nC++: char *GetVTKClassName()\n\nReturns the VTKClassName.\n"},
  {(char*)"GetXMLName", PyvtkSIProxy_GetXMLName, METH_VARARGS,
   (char*)"V.GetXMLName() -> string\nC++: char *GetXMLName()\n\nAssigned by the XML parser. The name assigned in the XML\nconfiguration. Can be used to figure out the origin of the proxy.\n"},
  {(char*)"GetXMLGroup", PyvtkSIProxy_GetXMLGroup, METH_VARARGS,
   (char*)"V.GetXMLGroup() -> string\nC++: char *GetXMLGroup()\n\nAssigned by the XML parser. The group in the XML configuration\nthat this proxy belongs to. Can be used to figure out the origin\nof the proxy.\n"},
  {(char*)"IsNullProxy", PyvtkSIProxy_IsNullProxy, METH_VARARGS,
   (char*)"V.IsNullProxy() -> bool\nC++: bool IsNullProxy()\n\nReturn true if that Proxy is supposed to have NO vtk class, which\nmeans its a NullProxy.\n"},
  {(char*)"AddInput", PyvtkSIProxy_AddInput, METH_VARARGS,
   (char*)"V.AddInput(int, vtkAlgorithmOutput, string)\nC++: virtual void AddInput(int input_port,\n    vtkAlgorithmOutput *connection, const char *method)\n\nThese methods are called to add/remove input connections by\nvtkSIInputProperty. This indirection makes it possible for\nsubclasses to insert VTK-algorithms in the input pipeline.\n"},
  {(char*)"CleanInputs", PyvtkSIProxy_CleanInputs, METH_VARARGS,
   (char*)"V.CleanInputs(string)\nC++: virtual void CleanInputs(const char *method)\n\nThese methods are called to add/remove input connections by\nvtkSIInputProperty. This indirection makes it possible for\nsubclasses to insert VTK-algorithms in the input pipeline.\n"},
  {(char*)"UpdatePipelineInformation", PyvtkSIProxy_UpdatePipelineInformation, METH_VARARGS,
   (char*)"V.UpdatePipelineInformation()\nC++: virtual void UpdatePipelineInformation()\n\nTriggers UpdateInformation() on vtkObject if possible. Default\nimplementation does pretty much nothing.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkSIProxy_StaticNew()
{
  return vtkSIProxy::New();
}

PyObject *PyVTKClass_vtkSIProxyNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkSIProxy_StaticNew,
    PyvtkSIProxy_Methods,
    "vtkSIProxy", modulename,
    NULL, NULL,
    PyvtkSIProxy_Doc(),
    PyVTKClass_vtkSIObjectNew(modulename));
  return cls;
}

const char **PyvtkSIProxy_Doc()
{
  static const char *docstring[] = {
    "vtkSIProxy\n\n",
    "Superclass: vtkSIObject\n\n",
    "vtkSIProxy is the server-implementation for a vtkSMProxy that helps\nthe vtkSMProxy with managing/updating VTK objects.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkSIProxy(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkSIProxyNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkSIProxy", o) != 0)
    {
    Py_DECREF(o);
    }

}

