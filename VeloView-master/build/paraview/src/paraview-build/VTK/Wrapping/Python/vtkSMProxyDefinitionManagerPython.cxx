// python wrapper for vtkSMProxyDefinitionManager
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkSMProxyDefinitionManager.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkSMProxyDefinitionManager(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkSMProxyDefinitionManagerNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkSMRemoteObjectNew
extern "C" { PyObject *PyVTKClass_vtkSMRemoteObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkSMRemoteObjectNew
#endif

static const char **PyvtkSMProxyDefinitionManager_Doc();

#ifndef DECLARED_PyvtkSMProxyDefinitionManager_Events_Type
extern VTK_PYTHON_EXPORT PyTypeObject PyvtkSMProxyDefinitionManager_Events_Type;
#define DECLARED_PyvtkSMProxyDefinitionManager_Events_Type
#endif

PyTypeObject PyvtkSMProxyDefinitionManager_Events_Type = {
  PyObject_HEAD_INIT(&PyType_Type)
  0,
  (char*)"Events", // tp_name
  sizeof(PyIntObject), // tp_basicsize
  0, // tp_itemsize
  0, // tp_dealloc
  0, // tp_print
  0, // tp_getattr
  0, // tp_setattr
  0, // tp_compare
  0, // tp_repr
  0, // tp_as_number
  0, // tp_as_sequence
  0, // tp_as_mapping
  0, // tp_hash
  0, // tp_call
  0, // tp_str
  0, // tp_getattro
  0, // tp_setattro
  0, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  0, // tp_doc
  0, // tp_traverse
  0, // tp_clear
  0, // tp_richcompare
  0, // tp_weaklistoffset
  0, // tp_iter
  0, // tp_iternext
  0, // tp_methods
  0, // tp_members
  0, // tp_getset
  &PyInt_Type, // tp_base
  0, // tp_dict
  0, // tp_descr_get
  0, // tp_descr_set
  0, // tp_dictoffset
  0, // tp_init
  0, // tp_alloc
  0, // tp_new
  PyObject_Del, // tp_free
  0, // tp_is_gc
  0, // tp_bases
  0, // tp_mro
  0, // tp_cache
  0, // tp_subclasses
  0, // tp_weaklist
  VTK_WRAP_PYTHON_SUPRESS_UNINITIALIZED
};

PyObject *PyvtkSMProxyDefinitionManager_Events_FromEnum(int val)
{
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkSMProxyDefinitionManager_Events_Type);
  self->ob_ival = val;
  return (PyObject *)self;
}


static PyObject *
PyvtkSMProxyDefinitionManager_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxyDefinitionManager *op = static_cast<vtkSMProxyDefinitionManager *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkSMProxyDefinitionManager::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMProxyDefinitionManager_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxyDefinitionManager *op = static_cast<vtkSMProxyDefinitionManager *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSMProxyDefinitionManager::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMProxyDefinitionManager_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxyDefinitionManager *op = static_cast<vtkSMProxyDefinitionManager *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkSMProxyDefinitionManager *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSMProxyDefinitionManager::NewInstance());

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
PyvtkSMProxyDefinitionManager_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkSMProxyDefinitionManager *tempr = vtkSMProxyDefinitionManager::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMProxyDefinitionManager_SynchronizeDefinitions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SynchronizeDefinitions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxyDefinitionManager *op = static_cast<vtkSMProxyDefinitionManager *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SynchronizeDefinitions();
      }
    else
      {
      op->vtkSMProxyDefinitionManager::SynchronizeDefinitions();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMProxyDefinitionManager_SetSession(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSession");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxyDefinitionManager *op = static_cast<vtkSMProxyDefinitionManager *>(vp);

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
      op->vtkSMProxyDefinitionManager::SetSession(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMProxyDefinitionManager_GetProxyDefinition_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProxyDefinition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxyDefinitionManager *op = static_cast<vtkSMProxyDefinitionManager *>(vp);

  char *temp0 = NULL;
  char *temp1 = NULL;
  bool temp2 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    vtkPVXMLElement *tempr = (ap.IsBound() ?
      op->GetProxyDefinition(temp0, temp1, temp2) :
      op->vtkSMProxyDefinitionManager::GetProxyDefinition(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkSMProxyDefinitionManager_GetProxyDefinition_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProxyDefinition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxyDefinitionManager *op = static_cast<vtkSMProxyDefinitionManager *>(vp);

  char *temp0 = NULL;
  char *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    vtkPVXMLElement *tempr = (ap.IsBound() ?
      op->GetProxyDefinition(temp0, temp1) :
      op->vtkSMProxyDefinitionManager::GetProxyDefinition(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkSMProxyDefinitionManager_GetProxyDefinition(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkSMProxyDefinitionManager_GetProxyDefinition_s1(self, args);
    case 2:
      return PyvtkSMProxyDefinitionManager_GetProxyDefinition_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetProxyDefinition");
  return NULL;
}



static PyObject *
PyvtkSMProxyDefinitionManager_GetCollapsedProxyDefinition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCollapsedProxyDefinition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxyDefinitionManager *op = static_cast<vtkSMProxyDefinitionManager *>(vp);

  char *temp0 = NULL;
  char *temp1 = NULL;
  char *temp2 = NULL;
  bool temp3 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
    {
    vtkPVXMLElement *tempr = (ap.IsBound() ?
      op->GetCollapsedProxyDefinition(temp0, temp1, temp2, temp3) :
      op->vtkSMProxyDefinitionManager::GetCollapsedProxyDefinition(temp0, temp1, temp2, temp3));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMProxyDefinitionManager_HasDefinition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasDefinition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxyDefinitionManager *op = static_cast<vtkSMProxyDefinitionManager *>(vp);

  char *temp0 = NULL;
  char *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    bool tempr = (ap.IsBound() ?
      op->HasDefinition(temp0, temp1) :
      op->vtkSMProxyDefinitionManager::HasDefinition(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMProxyDefinitionManager_SaveCustomProxyDefinitions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SaveCustomProxyDefinitions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxyDefinitionManager *op = static_cast<vtkSMProxyDefinitionManager *>(vp);

  vtkPVXMLElement *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPVXMLElement"))
    {
    if (ap.IsBound())
      {
      op->SaveCustomProxyDefinitions(temp0);
      }
    else
      {
      op->vtkSMProxyDefinitionManager::SaveCustomProxyDefinitions(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMProxyDefinitionManager_NewIterator_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewIterator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxyDefinitionManager *op = static_cast<vtkSMProxyDefinitionManager *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPVProxyDefinitionIterator *tempr = (ap.IsBound() ?
      op->NewIterator() :
      op->vtkSMProxyDefinitionManager::NewIterator());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkSMProxyDefinitionManager_NewIterator_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewIterator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxyDefinitionManager *op = static_cast<vtkSMProxyDefinitionManager *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkPVProxyDefinitionIterator *tempr = (ap.IsBound() ?
      op->NewIterator(temp0) :
      op->vtkSMProxyDefinitionManager::NewIterator(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkSMProxyDefinitionManager_NewIterator(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 0:
      return PyvtkSMProxyDefinitionManager_NewIterator_s1(self, args);
    case 1:
      return PyvtkSMProxyDefinitionManager_NewIterator_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "NewIterator");
  return NULL;
}



static PyObject *
PyvtkSMProxyDefinitionManager_NewSingleGroupIterator_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewSingleGroupIterator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxyDefinitionManager *op = static_cast<vtkSMProxyDefinitionManager *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkPVProxyDefinitionIterator *tempr = (ap.IsBound() ?
      op->NewSingleGroupIterator(temp0) :
      op->vtkSMProxyDefinitionManager::NewSingleGroupIterator(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkSMProxyDefinitionManager_NewSingleGroupIterator_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewSingleGroupIterator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxyDefinitionManager *op = static_cast<vtkSMProxyDefinitionManager *>(vp);

  char *temp0 = NULL;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    vtkPVProxyDefinitionIterator *tempr = (ap.IsBound() ?
      op->NewSingleGroupIterator(temp0, temp1) :
      op->vtkSMProxyDefinitionManager::NewSingleGroupIterator(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkSMProxyDefinitionManager_NewSingleGroupIterator(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkSMProxyDefinitionManager_NewSingleGroupIterator_s1(self, args);
    case 2:
      return PyvtkSMProxyDefinitionManager_NewSingleGroupIterator_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "NewSingleGroupIterator");
  return NULL;
}



static PyObject *
PyvtkSMProxyDefinitionManager_AddCustomProxyDefinition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddCustomProxyDefinition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxyDefinitionManager *op = static_cast<vtkSMProxyDefinitionManager *>(vp);

  char *temp0 = NULL;
  char *temp1 = NULL;
  vtkPVXMLElement *temp2 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetVTKObject(temp2, "vtkPVXMLElement"))
    {
    if (ap.IsBound())
      {
      op->AddCustomProxyDefinition(temp0, temp1, temp2);
      }
    else
      {
      op->vtkSMProxyDefinitionManager::AddCustomProxyDefinition(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMProxyDefinitionManager_RemoveCustomProxyDefinition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveCustomProxyDefinition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxyDefinitionManager *op = static_cast<vtkSMProxyDefinitionManager *>(vp);

  char *temp0 = NULL;
  char *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->RemoveCustomProxyDefinition(temp0, temp1);
      }
    else
      {
      op->vtkSMProxyDefinitionManager::RemoveCustomProxyDefinition(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMProxyDefinitionManager_ClearCustomProxyDefinitions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClearCustomProxyDefinitions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxyDefinitionManager *op = static_cast<vtkSMProxyDefinitionManager *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ClearCustomProxyDefinitions();
      }
    else
      {
      op->vtkSMProxyDefinitionManager::ClearCustomProxyDefinitions();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMProxyDefinitionManager_LoadCustomProxyDefinitions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LoadCustomProxyDefinitions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxyDefinitionManager *op = static_cast<vtkSMProxyDefinitionManager *>(vp);

  vtkPVXMLElement *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPVXMLElement"))
    {
    if (ap.IsBound())
      {
      op->LoadCustomProxyDefinitions(temp0);
      }
    else
      {
      op->vtkSMProxyDefinitionManager::LoadCustomProxyDefinitions(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMProxyDefinitionManager_LoadCustomProxyDefinitionsFromString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LoadCustomProxyDefinitionsFromString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxyDefinitionManager *op = static_cast<vtkSMProxyDefinitionManager *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->LoadCustomProxyDefinitionsFromString(temp0);
      }
    else
      {
      op->vtkSMProxyDefinitionManager::LoadCustomProxyDefinitionsFromString(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMProxyDefinitionManager_LoadConfigurationXML(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LoadConfigurationXML");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxyDefinitionManager *op = static_cast<vtkSMProxyDefinitionManager *>(vp);

  vtkPVXMLElement *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPVXMLElement"))
    {
    bool tempr = (ap.IsBound() ?
      op->LoadConfigurationXML(temp0) :
      op->vtkSMProxyDefinitionManager::LoadConfigurationXML(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMProxyDefinitionManager_LoadConfigurationXMLFromString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LoadConfigurationXMLFromString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxyDefinitionManager *op = static_cast<vtkSMProxyDefinitionManager *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    bool tempr = (ap.IsBound() ?
      op->LoadConfigurationXMLFromString(temp0) :
      op->vtkSMProxyDefinitionManager::LoadConfigurationXMLFromString(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMProxyDefinitionManager_LoadState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LoadState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxyDefinitionManager *op = static_cast<vtkSMProxyDefinitionManager *>(vp);

  vtkSMMessage *temp0 = NULL;
  vtkSMProxyLocator *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkSMMessage") &&
      ap.GetVTKObject(temp1, "vtkSMProxyLocator"))
    {
    if (ap.IsBound())
      {
      op->LoadState(temp0, temp1);
      }
    else
      {
      op->vtkSMProxyDefinitionManager::LoadState(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkSMProxyDefinitionManager_Methods[] = {
  {(char*)"GetClassName", PyvtkSMProxyDefinitionManager_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkSMProxyDefinitionManager_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkSMProxyDefinitionManager_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkSMProxyDefinitionManager\nC++: vtkSMProxyDefinitionManager *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkSMProxyDefinitionManager_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkSMProxyDefinitionManager\nC++: vtkSMProxyDefinitionManager *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SynchronizeDefinitions", PyvtkSMProxyDefinitionManager_SynchronizeDefinitions, METH_VARARGS,
   (char*)"V.SynchronizeDefinitions()\nC++: void SynchronizeDefinitions()\n\nSynchronizes the client-side definitions using the server-side\ndefinitions, if applicable. Call this method after any code that\ncould result in changing of the XML definitions on the server\ne.g. loading of plugins.\n"},
  {(char*)"SetSession", PyvtkSMProxyDefinitionManager_SetSession, METH_VARARGS,
   (char*)"V.SetSession(vtkSMSession)\nC++: virtual void SetSession(vtkSMSession *)\n\nOverridden call SynchronizeDefinitions() when the session\nchanges. Also ensures that the internal references to\nvtkSIProxyDefinitionManager are updated correctly.\n"},
  {(char*)"GetProxyDefinition", PyvtkSMProxyDefinitionManager_GetProxyDefinition, METH_VARARGS,
   (char*)"V.GetProxyDefinition(string, string, bool) -> vtkPVXMLElement\nC++: vtkPVXMLElement *GetProxyDefinition(const char *group,\n    const char *name, bool throwError)\nV.GetProxyDefinition(string, string) -> vtkPVXMLElement\nC++: vtkPVXMLElement *GetProxyDefinition(const char *group,\n    const char *name)\n\nReturns a registered proxy definition or return a NULL otherwise.\nMoreover, error can be throw if the definition was not found if\nthe flag throwError is true.\n"},
  {(char*)"GetCollapsedProxyDefinition", PyvtkSMProxyDefinitionManager_GetCollapsedProxyDefinition, METH_VARARGS,
   (char*)"V.GetCollapsedProxyDefinition(string, string, string, bool)\n    -> vtkPVXMLElement\nC++: vtkPVXMLElement *GetCollapsedProxyDefinition(\n    const char *group, const char *name, const char *subProxyName,\n     bool throwError)\n\nReturns the same thing as GetProxyDefinition in a flatten manner.\nBy flatten, we mean that the class hierarchy has been walked and\nmerged into a single vtkPVXMLElement definition.\n"},
  {(char*)"HasDefinition", PyvtkSMProxyDefinitionManager_HasDefinition, METH_VARARGS,
   (char*)"V.HasDefinition(string, string) -> bool\nC++: bool HasDefinition(const char *groupName,\n    const char *proxyName)\n\nReturn true if the XML Definition was found\n"},
  {(char*)"SaveCustomProxyDefinitions", PyvtkSMProxyDefinitionManager_SaveCustomProxyDefinitions, METH_VARARGS,
   (char*)"V.SaveCustomProxyDefinitions(vtkPVXMLElement)\nC++: void SaveCustomProxyDefinitions(vtkPVXMLElement *root)\n\nSave registered custom proxy definitions. The caller must release\nthe reference to the returned vtkPVXMLElement.\n"},
  {(char*)"NewIterator", PyvtkSMProxyDefinitionManager_NewIterator, METH_VARARGS,
   (char*)"V.NewIterator() -> vtkPVProxyDefinitionIterator\nC++: vtkPVProxyDefinitionIterator *NewIterator()\nV.NewIterator(int) -> vtkPVProxyDefinitionIterator\nC++: vtkPVProxyDefinitionIterator *NewIterator(int scope)\n\nReturn a NEW instance of vtkPVProxyDefinitionIterator configured\nto get through all the definition available for the requested\nscope. Possible scope defined as enum inside\nvtkSIProxyDefinitionManager: ALL_DEFINITIONS=0 /\nCORE_DEFINITIONS=1 / CUSTOM_DEFINITIONS=2 Some extra restriction\ncan be set directly on the iterator itself by setting a set of\nGroupName...\n"},
  {(char*)"NewSingleGroupIterator", PyvtkSMProxyDefinitionManager_NewSingleGroupIterator, METH_VARARGS,
   (char*)"V.NewSingleGroupIterator(string) -> vtkPVProxyDefinitionIterator\nC++: vtkPVProxyDefinitionIterator *NewSingleGroupIterator(\n    const char *groupName)\nV.NewSingleGroupIterator(string, int)\n    -> vtkPVProxyDefinitionIterator\nC++: vtkPVProxyDefinitionIterator *NewSingleGroupIterator(\n    const char *groupName, int scope)\n\n"},
  {(char*)"AddCustomProxyDefinition", PyvtkSMProxyDefinitionManager_AddCustomProxyDefinition, METH_VARARGS,
   (char*)"V.AddCustomProxyDefinition(string, string, vtkPVXMLElement)\nC++: void AddCustomProxyDefinition(const char *group,\n    const char *name, vtkPVXMLElement *top)\n\nAdd/Remove/Clear custom proxy definitions.\n"},
  {(char*)"RemoveCustomProxyDefinition", PyvtkSMProxyDefinitionManager_RemoveCustomProxyDefinition, METH_VARARGS,
   (char*)"V.RemoveCustomProxyDefinition(string, string)\nC++: void RemoveCustomProxyDefinition(const char *group,\n    const char *name)\n\nAdd/Remove/Clear custom proxy definitions.\n"},
  {(char*)"ClearCustomProxyDefinitions", PyvtkSMProxyDefinitionManager_ClearCustomProxyDefinitions, METH_VARARGS,
   (char*)"V.ClearCustomProxyDefinitions()\nC++: void ClearCustomProxyDefinitions()\n\nAdd/Remove/Clear custom proxy definitions.\n"},
  {(char*)"LoadCustomProxyDefinitions", PyvtkSMProxyDefinitionManager_LoadCustomProxyDefinitions, METH_VARARGS,
   (char*)"V.LoadCustomProxyDefinitions(vtkPVXMLElement)\nC++: void LoadCustomProxyDefinitions(vtkPVXMLElement *root)\n\nLoad custom proxy definitions and register them.\n"},
  {(char*)"LoadCustomProxyDefinitionsFromString", PyvtkSMProxyDefinitionManager_LoadCustomProxyDefinitionsFromString, METH_VARARGS,
   (char*)"V.LoadCustomProxyDefinitionsFromString(string)\nC++: void LoadCustomProxyDefinitionsFromString(\n    const char *xmlContent)\n\nLoad custom proxy definitions and register them.\n"},
  {(char*)"LoadConfigurationXML", PyvtkSMProxyDefinitionManager_LoadConfigurationXML, METH_VARARGS,
   (char*)"V.LoadConfigurationXML(vtkPVXMLElement) -> bool\nC++: bool LoadConfigurationXML(vtkPVXMLElement *root)\n\nLoads server-manager configuration xml.\n"},
  {(char*)"LoadConfigurationXMLFromString", PyvtkSMProxyDefinitionManager_LoadConfigurationXMLFromString, METH_VARARGS,
   (char*)"V.LoadConfigurationXMLFromString(string) -> bool\nC++: bool LoadConfigurationXMLFromString(const char *xmlContent)\n\nLoads server-manager configuration xml.\n"},
  {(char*)"LoadState", PyvtkSMProxyDefinitionManager_LoadState, METH_VARARGS,
   (char*)"V.LoadState(vtkSMMessage, vtkSMProxyLocator)\nC++: virtual void LoadState(const vtkSMMessage *msg,\n    vtkSMProxyLocator *locator)\n\nThis method is used to initialise the object to the given state\nIf the definitionOnly Flag is set to True the proxy won't load\nthe properties values and just setup the new proxy hierarchy with\nall subproxy globalID set. This allow to split the load process\nin 2 step to prevent invalid state when property refere to a\nsub-proxy that does not exist yet.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkSMProxyDefinitionManager_StaticNew()
{
  return vtkSMProxyDefinitionManager::New();
}

PyObject *PyVTKClass_vtkSMProxyDefinitionManagerNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkSMProxyDefinitionManager_StaticNew,
    PyvtkSMProxyDefinitionManager_Methods,
    "vtkSMProxyDefinitionManager", modulename,
    NULL, NULL,
    PyvtkSMProxyDefinitionManager_Doc(),
    PyVTKClass_vtkSMRemoteObjectNew(modulename));

  if (cls)
    {
    PyObject *d = PyVTKClass_GetDict(cls);
    PyObject *o;

    PyType_Ready(&PyvtkSMProxyDefinitionManager_Events_Type);
    PyvtkSMProxyDefinitionManager_Events_Type.tp_new = NULL;

    o = (PyObject *)&PyvtkSMProxyDefinitionManager_Events_Type;
    if (o && PyDict_SetItemString(d, (char *)"Events", o) != 0)
      {
      Py_DECREF(o);
      }

    for (int c = 0; c < 2; c++)
      {
      typedef vtkSMProxyDefinitionManager::Events cxx_enum_type;

      static const struct { const char *name; cxx_enum_type value; }
        constants[2] = {
          { "ProxyDefinitionsUpdated", vtkSMProxyDefinitionManager::ProxyDefinitionsUpdated },
          { "CompoundProxyDefinitionsUpdated", vtkSMProxyDefinitionManager::CompoundProxyDefinitionsUpdated },
        };

      o = PyvtkSMProxyDefinitionManager_Events_FromEnum(constants[c].value);
      if (o)
        {
        PyDict_SetItemString(d, (char *)constants[c].name, o);
        Py_DECREF(o);
        }
      }

    for (int c = 0; c < 3; c++)
      {
      static const struct { const char *name; int value; }
        constants[3] = {
          { "ALL_DEFINITIONS", vtkSMProxyDefinitionManager::ALL_DEFINITIONS },
          { "CORE_DEFINITIONS", vtkSMProxyDefinitionManager::CORE_DEFINITIONS },
          { "CUSTOM_DEFINITIONS", vtkSMProxyDefinitionManager::CUSTOM_DEFINITIONS },
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

const char **PyvtkSMProxyDefinitionManager_Doc()
{
  static const char *docstring[] = {
    "vtkSMProxyDefinitionManager\n\n",
    "Superclass: vtkSMRemoteObject\n\n",
    "vtkSMProxyDefinitionManager is a remote-object that represents the\nvtkSIProxyDefinitionManager instance on all the processes. ParaView\nclients should use API on this class to add/update xml definitions to\nensure that the xmls are processed/updated correctly on all the\nprocesses.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkSMProxyDefinitionManager(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkSMProxyDefinitionManagerNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkSMProxyDefinitionManager", o) != 0)
    {
    Py_DECREF(o);
    }

}

