// python wrapper for vtkPVPluginsInformation
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkPVPluginsInformation.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkPVPluginsInformation(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkPVPluginsInformationNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkPVInformationNew
extern "C" { PyObject *PyVTKClass_vtkPVInformationNew(const char *); }
#define DECLARED_PyVTKClass_vtkPVInformationNew
#endif

static const char **PyvtkPVPluginsInformation_Doc();


static PyObject *
PyvtkPVPluginsInformation_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPluginsInformation *op = static_cast<vtkPVPluginsInformation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkPVPluginsInformation::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVPluginsInformation_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPluginsInformation *op = static_cast<vtkPVPluginsInformation *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPVPluginsInformation::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVPluginsInformation_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPluginsInformation *op = static_cast<vtkPVPluginsInformation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPVPluginsInformation *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPVPluginsInformation::NewInstance());

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
PyvtkPVPluginsInformation_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkPVPluginsInformation *tempr = vtkPVPluginsInformation::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVPluginsInformation_GetNumberOfPlugins(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfPlugins");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPluginsInformation *op = static_cast<vtkPVPluginsInformation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned int tempr = (ap.IsBound() ?
      op->GetNumberOfPlugins() :
      op->vtkPVPluginsInformation::GetNumberOfPlugins());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVPluginsInformation_GetPluginName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPluginName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPluginsInformation *op = static_cast<vtkPVPluginsInformation *>(vp);

  unsigned int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetPluginName(temp0) :
      op->vtkPVPluginsInformation::GetPluginName(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVPluginsInformation_GetPluginFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPluginFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPluginsInformation *op = static_cast<vtkPVPluginsInformation *>(vp);

  unsigned int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetPluginFileName(temp0) :
      op->vtkPVPluginsInformation::GetPluginFileName(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVPluginsInformation_GetPluginVersion(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPluginVersion");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPluginsInformation *op = static_cast<vtkPVPluginsInformation *>(vp);

  unsigned int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetPluginVersion(temp0) :
      op->vtkPVPluginsInformation::GetPluginVersion(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVPluginsInformation_GetPluginLoaded(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPluginLoaded");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPluginsInformation *op = static_cast<vtkPVPluginsInformation *>(vp);

  unsigned int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetPluginLoaded(temp0) :
      op->vtkPVPluginsInformation::GetPluginLoaded(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVPluginsInformation_GetRequiredPlugins(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRequiredPlugins");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPluginsInformation *op = static_cast<vtkPVPluginsInformation *>(vp);

  unsigned int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetRequiredPlugins(temp0) :
      op->vtkPVPluginsInformation::GetRequiredPlugins(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVPluginsInformation_GetRequiredOnServer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRequiredOnServer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPluginsInformation *op = static_cast<vtkPVPluginsInformation *>(vp);

  unsigned int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetRequiredOnServer(temp0) :
      op->vtkPVPluginsInformation::GetRequiredOnServer(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVPluginsInformation_GetRequiredOnClient(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRequiredOnClient");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPluginsInformation *op = static_cast<vtkPVPluginsInformation *>(vp);

  unsigned int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetRequiredOnClient(temp0) :
      op->vtkPVPluginsInformation::GetRequiredOnClient(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVPluginsInformation_GetAutoLoad(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAutoLoad");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPluginsInformation *op = static_cast<vtkPVPluginsInformation *>(vp);

  unsigned int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetAutoLoad(temp0) :
      op->vtkPVPluginsInformation::GetAutoLoad(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVPluginsInformation_GetPluginStatusMessage(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPluginStatusMessage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPluginsInformation *op = static_cast<vtkPVPluginsInformation *>(vp);

  unsigned int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetPluginStatusMessage(temp0) :
      op->vtkPVPluginsInformation::GetPluginStatusMessage(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVPluginsInformation_SetAutoLoad(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAutoLoad");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPluginsInformation *op = static_cast<vtkPVPluginsInformation *>(vp);

  unsigned int temp0;
  bool temp1 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetAutoLoad(temp0, temp1);
      }
    else
      {
      op->vtkPVPluginsInformation::SetAutoLoad(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVPluginsInformation_SetAutoLoadAndForce(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAutoLoadAndForce");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPluginsInformation *op = static_cast<vtkPVPluginsInformation *>(vp);

  unsigned int temp0;
  bool temp1 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetAutoLoadAndForce(temp0, temp1);
      }
    else
      {
      op->vtkPVPluginsInformation::SetAutoLoadAndForce(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVPluginsInformation_CopyFromObject(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyFromObject");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPluginsInformation *op = static_cast<vtkPVPluginsInformation *>(vp);

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    if (ap.IsBound())
      {
      op->CopyFromObject(temp0);
      }
    else
      {
      op->vtkPVPluginsInformation::CopyFromObject(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVPluginsInformation_AddInformation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPluginsInformation *op = static_cast<vtkPVPluginsInformation *>(vp);

  vtkPVInformation *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPVInformation"))
    {
    if (ap.IsBound())
      {
      op->AddInformation(temp0);
      }
    else
      {
      op->vtkPVPluginsInformation::AddInformation(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVPluginsInformation_Update(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Update");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPluginsInformation *op = static_cast<vtkPVPluginsInformation *>(vp);

  vtkPVPluginsInformation *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPVPluginsInformation"))
    {
    if (ap.IsBound())
      {
      op->Update(temp0);
      }
    else
      {
      op->vtkPVPluginsInformation::Update(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVPluginsInformation_CopyToStream(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyToStream");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPluginsInformation *op = static_cast<vtkPVPluginsInformation *>(vp);

  vtkClientServerStream *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkClientServerStream"))
    {
    if (ap.IsBound())
      {
      op->CopyToStream(temp0);
      }
    else
      {
      op->vtkPVPluginsInformation::CopyToStream(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVPluginsInformation_CopyFromStream(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyFromStream");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPluginsInformation *op = static_cast<vtkPVPluginsInformation *>(vp);

  vtkClientServerStream *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkClientServerStream"))
    {
    if (ap.IsBound())
      {
      op->CopyFromStream(temp0);
      }
    else
      {
      op->vtkPVPluginsInformation::CopyFromStream(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVPluginsInformation_GetSearchPaths(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSearchPaths");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPluginsInformation *op = static_cast<vtkPVPluginsInformation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetSearchPaths() :
      op->vtkPVPluginsInformation::GetSearchPaths());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVPluginsInformation_PluginRequirementsSatisfied(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "PluginRequirementsSatisfied");

  vtkPVPluginsInformation *temp0 = NULL;
  vtkPVPluginsInformation *temp1 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkPVPluginsInformation") &&
      ap.GetVTKObject(temp1, "vtkPVPluginsInformation"))
    {
    bool tempr = vtkPVPluginsInformation::PluginRequirementsSatisfied(temp0, temp1);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkPVPluginsInformation_Methods[] = {
  {(char*)"GetClassName", PyvtkPVPluginsInformation_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkPVPluginsInformation_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkPVPluginsInformation_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkPVPluginsInformation\nC++: vtkPVPluginsInformation *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkPVPluginsInformation_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkPVPluginsInformation\nC++: vtkPVPluginsInformation *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetNumberOfPlugins", PyvtkPVPluginsInformation_GetNumberOfPlugins, METH_VARARGS,
   (char*)"V.GetNumberOfPlugins() -> int\nC++: unsigned int GetNumberOfPlugins()\n\nAPI to iterate over the information collected for each plugin.\n"},
  {(char*)"GetPluginName", PyvtkPVPluginsInformation_GetPluginName, METH_VARARGS,
   (char*)"V.GetPluginName(int) -> string\nC++: const char *GetPluginName(unsigned int)\n\nAPI to iterate over the information collected for each plugin.\n"},
  {(char*)"GetPluginFileName", PyvtkPVPluginsInformation_GetPluginFileName, METH_VARARGS,
   (char*)"V.GetPluginFileName(int) -> string\nC++: const char *GetPluginFileName(unsigned int)\n\nAPI to iterate over the information collected for each plugin.\n"},
  {(char*)"GetPluginVersion", PyvtkPVPluginsInformation_GetPluginVersion, METH_VARARGS,
   (char*)"V.GetPluginVersion(int) -> string\nC++: const char *GetPluginVersion(unsigned int)\n\nAPI to iterate over the information collected for each plugin.\n"},
  {(char*)"GetPluginLoaded", PyvtkPVPluginsInformation_GetPluginLoaded, METH_VARARGS,
   (char*)"V.GetPluginLoaded(int) -> bool\nC++: bool GetPluginLoaded(unsigned int)\n\nAPI to iterate over the information collected for each plugin.\n"},
  {(char*)"GetRequiredPlugins", PyvtkPVPluginsInformation_GetRequiredPlugins, METH_VARARGS,
   (char*)"V.GetRequiredPlugins(int) -> string\nC++: const char *GetRequiredPlugins(unsigned int)\n\nAPI to iterate over the information collected for each plugin.\n"},
  {(char*)"GetRequiredOnServer", PyvtkPVPluginsInformation_GetRequiredOnServer, METH_VARARGS,
   (char*)"V.GetRequiredOnServer(int) -> bool\nC++: bool GetRequiredOnServer(unsigned int)\n\nAPI to iterate over the information collected for each plugin.\n"},
  {(char*)"GetRequiredOnClient", PyvtkPVPluginsInformation_GetRequiredOnClient, METH_VARARGS,
   (char*)"V.GetRequiredOnClient(int) -> bool\nC++: bool GetRequiredOnClient(unsigned int)\n\nAPI to iterate over the information collected for each plugin.\n"},
  {(char*)"GetAutoLoad", PyvtkPVPluginsInformation_GetAutoLoad, METH_VARARGS,
   (char*)"V.GetAutoLoad(int) -> bool\nC++: bool GetAutoLoad(unsigned int)\n\nAPI to iterate over the information collected for each plugin.\n"},
  {(char*)"GetPluginStatusMessage", PyvtkPVPluginsInformation_GetPluginStatusMessage, METH_VARARGS,
   (char*)"V.GetPluginStatusMessage(int) -> string\nC++: const char *GetPluginStatusMessage(unsigned int)\n\nNote that unlike other properties, this one is updated as a\nconsequence of calling PluginRequirementsSatisfied().\n"},
  {(char*)"SetAutoLoad", PyvtkPVPluginsInformation_SetAutoLoad, METH_VARARGS,
   (char*)"V.SetAutoLoad(int, bool)\nC++: void SetAutoLoad(unsigned int cc, bool)\n\nAPI to change auto-load status.\n"},
  {(char*)"SetAutoLoadAndForce", PyvtkPVPluginsInformation_SetAutoLoadAndForce, METH_VARARGS,
   (char*)"V.SetAutoLoadAndForce(int, bool)\nC++: void SetAutoLoadAndForce(unsigned int cc, bool)\n\nThis is a hack. When the user sets an auto-load option from  the\nGUI to avoid that choice being overwritten as the information\nobject is updated over time as new plugins are loaded/unloaded,\nthe pqPluginDialog uses this method to set the auto-load flag.\nThis flag is not communicated across processes, but when called,\nGetAutoLoad() will return the value set using this method.\n"},
  {(char*)"CopyFromObject", PyvtkPVPluginsInformation_CopyFromObject, METH_VARARGS,
   (char*)"V.CopyFromObject(vtkObject)\nC++: virtual void CopyFromObject(vtkObject *)\n\nTransfer information about a single object into this object.\n"},
  {(char*)"AddInformation", PyvtkPVPluginsInformation_AddInformation, METH_VARARGS,
   (char*)"V.AddInformation(vtkPVInformation)\nC++: virtual void AddInformation(vtkPVInformation *)\n\nMerge another information object.\n"},
  {(char*)"Update", PyvtkPVPluginsInformation_Update, METH_VARARGS,
   (char*)"V.Update(vtkPVPluginsInformation)\nC++: void Update(vtkPVPluginsInformation *other)\n\nUpdates the local information with elements from other without\noverriding auto-load state.\n"},
  {(char*)"CopyToStream", PyvtkPVPluginsInformation_CopyToStream, METH_VARARGS,
   (char*)"V.CopyToStream(vtkClientServerStream)\nC++: virtual void CopyToStream(vtkClientServerStream *)\n\nManage a serialized version of the information.\n"},
  {(char*)"CopyFromStream", PyvtkPVPluginsInformation_CopyFromStream, METH_VARARGS,
   (char*)"V.CopyFromStream(vtkClientServerStream)\nC++: virtual void CopyFromStream(const vtkClientServerStream *)\n\nManage a serialized version of the information.\n"},
  {(char*)"GetSearchPaths", PyvtkPVPluginsInformation_GetSearchPaths, METH_VARARGS,
   (char*)"V.GetSearchPaths() -> string\nC++: char *GetSearchPaths()\n\nGet the plugin search path.\n"},
  {(char*)"PluginRequirementsSatisfied", PyvtkPVPluginsInformation_PluginRequirementsSatisfied, METH_VARARGS | METH_STATIC,
   (char*)"V.PluginRequirementsSatisfied(vtkPVPluginsInformation,\n    vtkPVPluginsInformation) -> bool\nC++: static bool PluginRequirementsSatisfied(\n    vtkPVPluginsInformation *client_plugins,\n    vtkPVPluginsInformation *server_plugins)\n\nMethod to validate if the plugin requirements are met across\nprocesses. This also updated the \"StatusMessage\" for all the\nplugins. If StatusMessage is empty for a loaded plugin, it\nimplies that everything is fine. If some requirement is not met,\nthe StatusMessage includes the error message.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkPVPluginsInformation_StaticNew()
{
  return vtkPVPluginsInformation::New();
}

PyObject *PyVTKClass_vtkPVPluginsInformationNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkPVPluginsInformation_StaticNew,
    PyvtkPVPluginsInformation_Methods,
    "vtkPVPluginsInformation", modulename,
    NULL, NULL,
    PyvtkPVPluginsInformation_Doc(),
    PyVTKClass_vtkPVInformationNew(modulename));
  return cls;
}

const char **PyvtkPVPluginsInformation_Doc()
{
  static const char *docstring[] = {
    "vtkPVPluginsInformation - information about plugins tracked by\n\n",
    "Superclass: vtkPVInformation\n\n",
    "vtkPVPluginsInformation is used to collect information about plugins\ntracked by vtkPVPluginTracker.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPVPluginsInformation(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPVPluginsInformationNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPVPluginsInformation", o) != 0)
    {
    Py_DECREF(o);
    }

}

