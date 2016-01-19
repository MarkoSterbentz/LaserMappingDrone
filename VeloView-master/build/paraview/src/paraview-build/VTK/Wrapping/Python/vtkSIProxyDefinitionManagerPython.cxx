// python wrapper for vtkSIProxyDefinitionManager
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkSIProxyDefinitionManager.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkSIProxyDefinitionManager(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkSIProxyDefinitionManagerNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkSIObjectNew
extern "C" { PyObject *PyVTKClass_vtkSIObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkSIObjectNew
#endif

static const char **PyvtkSIProxyDefinitionManager_Doc();

#ifndef DECLARED_PyvtkSIProxyDefinitionManager_Events_Type
extern VTK_PYTHON_EXPORT PyTypeObject PyvtkSIProxyDefinitionManager_Events_Type;
#define DECLARED_PyvtkSIProxyDefinitionManager_Events_Type
#endif

PyTypeObject PyvtkSIProxyDefinitionManager_Events_Type = {
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

PyObject *PyvtkSIProxyDefinitionManager_Events_FromEnum(int val)
{
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkSIProxyDefinitionManager_Events_Type);
  self->ob_ival = val;
  return (PyObject *)self;
}


static PyObject *
PyvtkSIProxyDefinitionManager_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSIProxyDefinitionManager *op = static_cast<vtkSIProxyDefinitionManager *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkSIProxyDefinitionManager::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSIProxyDefinitionManager_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSIProxyDefinitionManager *op = static_cast<vtkSIProxyDefinitionManager *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSIProxyDefinitionManager::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSIProxyDefinitionManager_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSIProxyDefinitionManager *op = static_cast<vtkSIProxyDefinitionManager *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkSIProxyDefinitionManager *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSIProxyDefinitionManager::NewInstance());

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
PyvtkSIProxyDefinitionManager_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkSIProxyDefinitionManager *tempr = vtkSIProxyDefinitionManager::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSIProxyDefinitionManager_GetReservedGlobalID(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetReservedGlobalID");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    unsigned int tempr = vtkSIProxyDefinitionManager::GetReservedGlobalID();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSIProxyDefinitionManager_PatchXMLProperty(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "PatchXMLProperty");

  vtkPVXMLElement *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPVXMLElement"))
    {
    vtkSIProxyDefinitionManager::PatchXMLProperty(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSIProxyDefinitionManager_GetProxyDefinition_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProxyDefinition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSIProxyDefinitionManager *op = static_cast<vtkSIProxyDefinitionManager *>(vp);

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
      op->vtkSIProxyDefinitionManager::GetProxyDefinition(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkSIProxyDefinitionManager_GetProxyDefinition_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProxyDefinition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSIProxyDefinitionManager *op = static_cast<vtkSIProxyDefinitionManager *>(vp);

  char *temp0 = NULL;
  char *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    vtkPVXMLElement *tempr = (ap.IsBound() ?
      op->GetProxyDefinition(temp0, temp1) :
      op->vtkSIProxyDefinitionManager::GetProxyDefinition(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkSIProxyDefinitionManager_GetProxyDefinition(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkSIProxyDefinitionManager_GetProxyDefinition_s1(self, args);
    case 2:
      return PyvtkSIProxyDefinitionManager_GetProxyDefinition_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetProxyDefinition");
  return NULL;
}



static PyObject *
PyvtkSIProxyDefinitionManager_HasDefinition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasDefinition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSIProxyDefinitionManager *op = static_cast<vtkSIProxyDefinitionManager *>(vp);

  char *temp0 = NULL;
  char *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    bool tempr = (ap.IsBound() ?
      op->HasDefinition(temp0, temp1) :
      op->vtkSIProxyDefinitionManager::HasDefinition(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSIProxyDefinitionManager_GetCollapsedProxyDefinition_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCollapsedProxyDefinition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSIProxyDefinitionManager *op = static_cast<vtkSIProxyDefinitionManager *>(vp);

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
      op->vtkSIProxyDefinitionManager::GetCollapsedProxyDefinition(temp0, temp1, temp2, temp3));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkSIProxyDefinitionManager_GetCollapsedProxyDefinition_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCollapsedProxyDefinition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSIProxyDefinitionManager *op = static_cast<vtkSIProxyDefinitionManager *>(vp);

  char *temp0 = NULL;
  char *temp1 = NULL;
  char *temp2 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    vtkPVXMLElement *tempr = (ap.IsBound() ?
      op->GetCollapsedProxyDefinition(temp0, temp1, temp2) :
      op->vtkSIProxyDefinitionManager::GetCollapsedProxyDefinition(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkSIProxyDefinitionManager_GetCollapsedProxyDefinition(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 4:
      return PyvtkSIProxyDefinitionManager_GetCollapsedProxyDefinition_s1(self, args);
    case 3:
      return PyvtkSIProxyDefinitionManager_GetCollapsedProxyDefinition_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetCollapsedProxyDefinition");
  return NULL;
}



static PyObject *
PyvtkSIProxyDefinitionManager_AddCustomProxyDefinition_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddCustomProxyDefinition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSIProxyDefinitionManager *op = static_cast<vtkSIProxyDefinitionManager *>(vp);

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
      op->vtkSIProxyDefinitionManager::AddCustomProxyDefinition(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkSIProxyDefinitionManager_AddCustomProxyDefinition_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddCustomProxyDefinition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSIProxyDefinitionManager *op = static_cast<vtkSIProxyDefinitionManager *>(vp);

  char *temp0 = NULL;
  char *temp1 = NULL;
  char *temp2 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      op->AddCustomProxyDefinition(temp0, temp1, temp2);
      }
    else
      {
      op->vtkSIProxyDefinitionManager::AddCustomProxyDefinition(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkSIProxyDefinitionManager_AddCustomProxyDefinition_Methods[] = {
  {NULL, PyvtkSIProxyDefinitionManager_AddCustomProxyDefinition_s1, METH_VARARGS,
   (char*)"@zzO *vtkPVXMLElement"},
  {NULL, PyvtkSIProxyDefinitionManager_AddCustomProxyDefinition_s2, METH_VARARGS,
   (char*)"@zzz"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkSIProxyDefinitionManager_AddCustomProxyDefinition(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkSIProxyDefinitionManager_AddCustomProxyDefinition_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "AddCustomProxyDefinition");
  return NULL;
}



static PyObject *
PyvtkSIProxyDefinitionManager_RemoveCustomProxyDefinition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveCustomProxyDefinition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSIProxyDefinitionManager *op = static_cast<vtkSIProxyDefinitionManager *>(vp);

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
      op->vtkSIProxyDefinitionManager::RemoveCustomProxyDefinition(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSIProxyDefinitionManager_ClearCustomProxyDefinitions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClearCustomProxyDefinitions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSIProxyDefinitionManager *op = static_cast<vtkSIProxyDefinitionManager *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ClearCustomProxyDefinitions();
      }
    else
      {
      op->vtkSIProxyDefinitionManager::ClearCustomProxyDefinitions();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSIProxyDefinitionManager_LoadCustomProxyDefinitions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LoadCustomProxyDefinitions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSIProxyDefinitionManager *op = static_cast<vtkSIProxyDefinitionManager *>(vp);

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
      op->vtkSIProxyDefinitionManager::LoadCustomProxyDefinitions(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSIProxyDefinitionManager_LoadCustomProxyDefinitionsFromString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LoadCustomProxyDefinitionsFromString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSIProxyDefinitionManager *op = static_cast<vtkSIProxyDefinitionManager *>(vp);

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
      op->vtkSIProxyDefinitionManager::LoadCustomProxyDefinitionsFromString(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSIProxyDefinitionManager_SaveCustomProxyDefinitions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SaveCustomProxyDefinitions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSIProxyDefinitionManager *op = static_cast<vtkSIProxyDefinitionManager *>(vp);

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
      op->vtkSIProxyDefinitionManager::SaveCustomProxyDefinitions(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSIProxyDefinitionManager_LoadConfigurationXML(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LoadConfigurationXML");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSIProxyDefinitionManager *op = static_cast<vtkSIProxyDefinitionManager *>(vp);

  vtkPVXMLElement *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPVXMLElement"))
    {
    bool tempr = (ap.IsBound() ?
      op->LoadConfigurationXML(temp0) :
      op->vtkSIProxyDefinitionManager::LoadConfigurationXML(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSIProxyDefinitionManager_LoadConfigurationXMLFromString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LoadConfigurationXMLFromString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSIProxyDefinitionManager *op = static_cast<vtkSIProxyDefinitionManager *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    bool tempr = (ap.IsBound() ?
      op->LoadConfigurationXMLFromString(temp0) :
      op->vtkSIProxyDefinitionManager::LoadConfigurationXMLFromString(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSIProxyDefinitionManager_NewIterator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewIterator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSIProxyDefinitionManager *op = static_cast<vtkSIProxyDefinitionManager *>(vp);

  int temp0 = vtkSIProxyDefinitionManager::ALL_DEFINITIONS;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0, 1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp0)))
    {
    vtkPVProxyDefinitionIterator *tempr = (ap.IsBound() ?
      op->NewIterator(temp0) :
      op->vtkSIProxyDefinitionManager::NewIterator(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSIProxyDefinitionManager_NewSingleGroupIterator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewSingleGroupIterator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSIProxyDefinitionManager *op = static_cast<vtkSIProxyDefinitionManager *>(vp);

  char *temp0 = NULL;
  int temp1 = vtkSIProxyDefinitionManager::ALL_DEFINITIONS;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1, 2) &&
      ap.GetValue(temp0) &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
    {
    vtkPVProxyDefinitionIterator *tempr = (ap.IsBound() ?
      op->NewSingleGroupIterator(temp0, temp1) :
      op->vtkSIProxyDefinitionManager::NewSingleGroupIterator(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSIProxyDefinitionManager_EnableXMLProxyDefnitionUpdate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EnableXMLProxyDefnitionUpdate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSIProxyDefinitionManager *op = static_cast<vtkSIProxyDefinitionManager *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->EnableXMLProxyDefnitionUpdate(temp0);
      }
    else
      {
      op->vtkSIProxyDefinitionManager::EnableXMLProxyDefnitionUpdate(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSIProxyDefinitionManager_Push(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Push");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSIProxyDefinitionManager *op = static_cast<vtkSIProxyDefinitionManager *>(vp);

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
      op->vtkSIProxyDefinitionManager::Push(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSIProxyDefinitionManager_Pull(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Pull");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSIProxyDefinitionManager *op = static_cast<vtkSIProxyDefinitionManager *>(vp);

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
      op->vtkSIProxyDefinitionManager::Pull(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkSIProxyDefinitionManager_Methods[] = {
  {(char*)"GetClassName", PyvtkSIProxyDefinitionManager_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkSIProxyDefinitionManager_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkSIProxyDefinitionManager_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkSIProxyDefinitionManager\nC++: vtkSIProxyDefinitionManager *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkSIProxyDefinitionManager_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkSIProxyDefinitionManager\nC++: vtkSIProxyDefinitionManager *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetReservedGlobalID", PyvtkSIProxyDefinitionManager_GetReservedGlobalID, METH_VARARGS | METH_STATIC,
   (char*)"V.GetReservedGlobalID() -> int\nC++: static vtkTypeUInt32 GetReservedGlobalID()\n\nReturns the ID reserved for the proxy definition manager.\n"},
  {(char*)"PatchXMLProperty", PyvtkSIProxyDefinitionManager_PatchXMLProperty, METH_VARARGS | METH_STATIC,
   (char*)"V.PatchXMLProperty(vtkPVXMLElement)\nC++: static void PatchXMLProperty(vtkPVXMLElement *propElement)\n\nFor now we dynamically convert InformationHelper into the correct\nsi_class and attribute sets. THIS CODE SHOULD BE REMOVED once\nInformationHelper have been removed from legacy XML\n"},
  {(char*)"GetProxyDefinition", PyvtkSIProxyDefinitionManager_GetProxyDefinition, METH_VARARGS,
   (char*)"V.GetProxyDefinition(string, string, bool) -> vtkPVXMLElement\nC++: vtkPVXMLElement *GetProxyDefinition(const char *group,\n    const char *name, bool throwError)\nV.GetProxyDefinition(string, string) -> vtkPVXMLElement\nC++: vtkPVXMLElement *GetProxyDefinition(const char *group,\n    const char *name)\n\nReturns a registered proxy definition or return a NULL otherwise.\nMoreover, error can be throw if the definition was not found if\nthe flag throwError is true.\n"},
  {(char*)"HasDefinition", PyvtkSIProxyDefinitionManager_HasDefinition, METH_VARARGS,
   (char*)"V.HasDefinition(string, string) -> bool\nC++: bool HasDefinition(const char *groupName,\n    const char *proxyName)\n\nReturn true if the XML Definition was found\n"},
  {(char*)"GetCollapsedProxyDefinition", PyvtkSIProxyDefinitionManager_GetCollapsedProxyDefinition, METH_VARARGS,
   (char*)"V.GetCollapsedProxyDefinition(string, string, string, bool)\n    -> vtkPVXMLElement\nC++: vtkPVXMLElement *GetCollapsedProxyDefinition(\n    const char *group, const char *name, const char *subProxyName,\n     bool throwError)\nV.GetCollapsedProxyDefinition(string, string, string)\n    -> vtkPVXMLElement\nC++: vtkPVXMLElement *GetCollapsedProxyDefinition(\n    const char *group, const char *name, const char *subProxyName)\n\nReturns the same thing as GetProxyDefinition in a flatten manner.\nBy flatten, we mean that the class hierarchy has been walked and\nmerged into a single vtkPVXMLElement definition.\n"},
  {(char*)"AddCustomProxyDefinition", PyvtkSIProxyDefinitionManager_AddCustomProxyDefinition, METH_VARARGS,
   (char*)"V.AddCustomProxyDefinition(string, string, vtkPVXMLElement)\nC++: void AddCustomProxyDefinition(const char *group,\n    const char *name, vtkPVXMLElement *top)\nV.AddCustomProxyDefinition(string, string, string)\nC++: void AddCustomProxyDefinition(const char *groupName,\n    const char *proxyName, const char *xmlcontents)\n\nAdd a custom proxy definition. Custom definitions are NOT ALLOWED\nto overrive or overlap any ProxyDefinition that has been defined\nby parsing server manager proxy configuration files. This can be\na compound proxy definition (look at vtkSMCompoundSourceProxy.h)\nor a regular proxy definition. For all practical purposes,\nthere's no difference between a proxy definition added using this\nmethod or by parsing a server manager configuration file.\n"},
  {(char*)"RemoveCustomProxyDefinition", PyvtkSIProxyDefinitionManager_RemoveCustomProxyDefinition, METH_VARARGS,
   (char*)"V.RemoveCustomProxyDefinition(string, string)\nC++: void RemoveCustomProxyDefinition(const char *group,\n    const char *name)\n\nGiven its name, remove a custom proxy definition. Note that this\ncan only be used to remove definitions added using\nAddCustomProxyDefinition(), cannot be used to remove definitions\nloaded using vtkSMXMLParser.\n"},
  {(char*)"ClearCustomProxyDefinitions", PyvtkSIProxyDefinitionManager_ClearCustomProxyDefinitions, METH_VARARGS,
   (char*)"V.ClearCustomProxyDefinitions()\nC++: void ClearCustomProxyDefinitions()\n\nRemove all registered custom proxy definitions. Note that this\ncan only be used to remove definitions added using\nAddCustomProxyDefinition(), cannot be used to remove definitions\nloaded using vtkSMXMLParser.\n"},
  {(char*)"LoadCustomProxyDefinitions", PyvtkSIProxyDefinitionManager_LoadCustomProxyDefinitions, METH_VARARGS,
   (char*)"V.LoadCustomProxyDefinitions(vtkPVXMLElement)\nC++: void LoadCustomProxyDefinitions(vtkPVXMLElement *root)\n\nLoad custom proxy definitions and register them.\n"},
  {(char*)"LoadCustomProxyDefinitionsFromString", PyvtkSIProxyDefinitionManager_LoadCustomProxyDefinitionsFromString, METH_VARARGS,
   (char*)"V.LoadCustomProxyDefinitionsFromString(string)\nC++: void LoadCustomProxyDefinitionsFromString(\n    const char *xmlContent)\n\nLoad custom proxy definitions and register them.\n"},
  {(char*)"SaveCustomProxyDefinitions", PyvtkSIProxyDefinitionManager_SaveCustomProxyDefinitions, METH_VARARGS,
   (char*)"V.SaveCustomProxyDefinitions(vtkPVXMLElement)\nC++: void SaveCustomProxyDefinitions(vtkPVXMLElement *root)\n\nSave registered custom proxy definitions. The caller must release\nthe reference to the returned vtkPVXMLElement.\n"},
  {(char*)"LoadConfigurationXML", PyvtkSIProxyDefinitionManager_LoadConfigurationXML, METH_VARARGS,
   (char*)"V.LoadConfigurationXML(vtkPVXMLElement) -> bool\nC++: bool LoadConfigurationXML(vtkPVXMLElement *root)\n\nLoads server-manager configuration xml.\n"},
  {(char*)"LoadConfigurationXMLFromString", PyvtkSIProxyDefinitionManager_LoadConfigurationXMLFromString, METH_VARARGS,
   (char*)"V.LoadConfigurationXMLFromString(string) -> bool\nC++: bool LoadConfigurationXMLFromString(const char *xmlContent)\n\nLoads server-manager configuration xml.\n"},
  {(char*)"NewIterator", PyvtkSIProxyDefinitionManager_NewIterator, METH_VARARGS,
   (char*)"V.NewIterator(int) -> vtkPVProxyDefinitionIterator\nC++: vtkPVProxyDefinitionIterator *NewIterator(\n    int scope=vtkSIProxyDefinitionManager::ALL_DEFINITIONS)\n\nReturn a NEW instance of vtkPVProxyDefinitionIterator configured\nto get through all the definition available for the requested\nscope. Possible scope defined as enum inside\nvtkSIProxyDefinitionManager:\n  ALL_DEFINITIONS=0 / CORE_DEFINITIONS=1 / CUSTOM_DEFINITIONS=2\nSome extra restriction can be set directly on the iterator itself\nby setting a set of GroupName...\n"},
  {(char*)"NewSingleGroupIterator", PyvtkSIProxyDefinitionManager_NewSingleGroupIterator, METH_VARARGS,
   (char*)"V.NewSingleGroupIterator(string, int)\n    -> vtkPVProxyDefinitionIterator\nC++: vtkPVProxyDefinitionIterator *NewSingleGroupIterator(\n    const char *groupName,\n    int scope=vtkSIProxyDefinitionManager::ALL_DEFINITIONS)\n\n"},
  {(char*)"EnableXMLProxyDefnitionUpdate", PyvtkSIProxyDefinitionManager_EnableXMLProxyDefnitionUpdate, METH_VARARGS,
   (char*)"V.EnableXMLProxyDefnitionUpdate(bool)\nC++: void EnableXMLProxyDefnitionUpdate(bool)\n\nDesactivate the modification of the ProxyDefinitions for that\ngiven vtkSIProxyDefinitionManager to make sure update only come\nfrom the remote server and not plugin loaded on the client.\n"},
  {(char*)"Push", PyvtkSIProxyDefinitionManager_Push, METH_VARARGS,
   (char*)"V.Push(vtkSMMessage)\nC++: virtual void Push(vtkSMMessage *msg)\n\nPush a new state to the underneath implementation The provided\nimplementation just store the message and return it at the Pull\none.\n"},
  {(char*)"Pull", PyvtkSIProxyDefinitionManager_Pull, METH_VARARGS,
   (char*)"V.Pull(vtkSMMessage)\nC++: virtual void Pull(vtkSMMessage *msg)\n\nPull the current state of the underneath implementation The\nprovided implementation update the given message with the one\nthat has been previously pushed\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkSIProxyDefinitionManager_StaticNew()
{
  return vtkSIProxyDefinitionManager::New();
}

PyObject *PyVTKClass_vtkSIProxyDefinitionManagerNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkSIProxyDefinitionManager_StaticNew,
    PyvtkSIProxyDefinitionManager_Methods,
    "vtkSIProxyDefinitionManager", modulename,
    NULL, NULL,
    PyvtkSIProxyDefinitionManager_Doc(),
    PyVTKClass_vtkSIObjectNew(modulename));

  if (cls)
    {
    PyObject *d = PyVTKClass_GetDict(cls);
    PyObject *o;

    PyType_Ready(&PyvtkSIProxyDefinitionManager_Events_Type);
    PyvtkSIProxyDefinitionManager_Events_Type.tp_new = NULL;

    o = (PyObject *)&PyvtkSIProxyDefinitionManager_Events_Type;
    if (o && PyDict_SetItemString(d, (char *)"Events", o) != 0)
      {
      Py_DECREF(o);
      }

    for (int c = 0; c < 2; c++)
      {
      typedef vtkSIProxyDefinitionManager::Events cxx_enum_type;

      static const struct { const char *name; cxx_enum_type value; }
        constants[2] = {
          { "ProxyDefinitionsUpdated", vtkSIProxyDefinitionManager::ProxyDefinitionsUpdated },
          { "CompoundProxyDefinitionsUpdated", vtkSIProxyDefinitionManager::CompoundProxyDefinitionsUpdated },
        };

      o = PyvtkSIProxyDefinitionManager_Events_FromEnum(constants[c].value);
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
          { "ALL_DEFINITIONS", vtkSIProxyDefinitionManager::ALL_DEFINITIONS },
          { "CORE_DEFINITIONS", vtkSIProxyDefinitionManager::CORE_DEFINITIONS },
          { "CUSTOM_DEFINITIONS", vtkSIProxyDefinitionManager::CUSTOM_DEFINITIONS },
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

const char **PyvtkSIProxyDefinitionManager_Doc()
{
  static const char *docstring[] = {
    "vtkSIProxyDefinitionManager - object responsible for managing XML\n\n",
    "Superclass: vtkSIObject\n\n",
    "vtkSIProxyDefinitionManager is a class that manages XML proxies\ndefinition. It maintains a map of vtkPVXMLElement (populated by the\nXML parser) from which it can extract Hint, Documentation,\nProperties, Domains definition.\n\nThis class fires the following events:\n\\li vtkSIProxyDefinitionManager::ProxyDefinitionsUpdated - Fired any\n    time\nany definitions are updated. If a group of definitions are ",
    "being\nupdated (i.e. a new definition is registered, or unregistred, or\nmodified) then this event gets fired after all of them are updated.\n\\li vtkSIProxyDefinitionManager::CompoundProxyDefinitionsUpdated -\n    Fired\nwhen a custom proxy definition is updated. Similar to\nProxyDefinitionsUpdated this is fired after collective updates, if\napplicable. Note whenever CompoundProxyDefinitionsUpdated is fi",
    "red,\nProxyDefinitionsUpdated is also fired.\n\\li vtkCommand::RegisterEvent - Fired when a new proxy definition is\nregistered or an old one modified (through extensions). This is fired\nfor regular proxies as well as custom proxy definitions.\n\\li vtkCommand::UnRegisterEvent - Fired when a proxy definition is\nremoved. Since this class only support removing custom proxies, this\nevent is fired only when",
    " a custom proxy is removed.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkSIProxyDefinitionManager(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkSIProxyDefinitionManagerNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkSIProxyDefinitionManager", o) != 0)
    {
    Py_DECREF(o);
    }

}

