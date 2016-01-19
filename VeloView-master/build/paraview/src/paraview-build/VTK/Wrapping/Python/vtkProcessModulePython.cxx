// python wrapper for vtkProcessModule
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkProcessModule.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkProcessModule(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkProcessModuleNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkProcessModule_Doc();

#ifndef DECLARED_PyvtkProcessModule_ProcessTypes_Type
extern VTK_PYTHON_EXPORT PyTypeObject PyvtkProcessModule_ProcessTypes_Type;
#define DECLARED_PyvtkProcessModule_ProcessTypes_Type
#endif

PyTypeObject PyvtkProcessModule_ProcessTypes_Type = {
  PyObject_HEAD_INIT(&PyType_Type)
  0,
  (char*)"ProcessTypes", // tp_name
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

PyObject *PyvtkProcessModule_ProcessTypes_FromEnum(int val)
{
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkProcessModule_ProcessTypes_Type);
  self->ob_ival = val;
  return (PyObject *)self;
}

#ifndef DECLARED_PyvtkProcessModule_ServerFlags_Type
extern VTK_PYTHON_EXPORT PyTypeObject PyvtkProcessModule_ServerFlags_Type;
#define DECLARED_PyvtkProcessModule_ServerFlags_Type
#endif

PyTypeObject PyvtkProcessModule_ServerFlags_Type = {
  PyObject_HEAD_INIT(&PyType_Type)
  0,
  (char*)"ServerFlags", // tp_name
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

PyObject *PyvtkProcessModule_ServerFlags_FromEnum(int val)
{
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkProcessModule_ServerFlags_Type);
  self->ob_ival = val;
  return (PyObject *)self;
}


static PyObject *
PyvtkProcessModule_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProcessModule *op = static_cast<vtkProcessModule *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkProcessModule::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkProcessModule_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProcessModule *op = static_cast<vtkProcessModule *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkProcessModule::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkProcessModule_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProcessModule *op = static_cast<vtkProcessModule *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkProcessModule *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkProcessModule::NewInstance());

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
PyvtkProcessModule_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkProcessModule *tempr = vtkProcessModule::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkProcessModule_GetProcessType(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetProcessType");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    typedef vtkProcessModule::ProcessTypes tempr_type;
  tempr_type tempr = vtkProcessModule::GetProcessType();

    if (!ap.ErrorOccurred())
      {
      result = PyvtkProcessModule_ProcessTypes_FromEnum(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkProcessModule_GetProcessTypeAsInt(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetProcessTypeAsInt");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    unsigned int tempr = vtkProcessModule::GetProcessTypeAsInt();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkProcessModule_UpdateProcessType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateProcessType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProcessModule *op = static_cast<vtkProcessModule *>(vp);

  typedef vtkProcessModule::ProcessTypes temp0_type;
  temp0_type temp0;
  bool temp1 = true;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1, 2) &&
      ap.GetEnumValue(temp0, &PyvtkProcessModule_ProcessTypes_Type) &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
    {
    if (ap.IsBound())
      {
      op->UpdateProcessType(temp0, temp1);
      }
    else
      {
      op->vtkProcessModule::UpdateProcessType(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkProcessModule_Finalize(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "Finalize");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    bool tempr = vtkProcessModule::Finalize();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkProcessModule_RegisterSession(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RegisterSession");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProcessModule *op = static_cast<vtkProcessModule *>(vp);

  vtkSession *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSession"))
    {
    vtkIdType tempr = (ap.IsBound() ?
      op->RegisterSession(temp0) :
      op->vtkProcessModule::RegisterSession(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkProcessModule_UnRegisterSession_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UnRegisterSession");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProcessModule *op = static_cast<vtkProcessModule *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    bool tempr = (ap.IsBound() ?
      op->UnRegisterSession(temp0) :
      op->vtkProcessModule::UnRegisterSession(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkProcessModule_UnRegisterSession_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UnRegisterSession");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProcessModule *op = static_cast<vtkProcessModule *>(vp);

  vtkSession *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSession"))
    {
    bool tempr = (ap.IsBound() ?
      op->UnRegisterSession(temp0) :
      op->vtkProcessModule::UnRegisterSession(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkProcessModule_UnRegisterSession_Methods[] = {
  {NULL, PyvtkProcessModule_UnRegisterSession_s1, METH_VARARGS,
   (char*)"@L"},
  {NULL, PyvtkProcessModule_UnRegisterSession_s2, METH_VARARGS,
   (char*)"@O *vtkSession"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkProcessModule_UnRegisterSession(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkProcessModule_UnRegisterSession_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "UnRegisterSession");
  return NULL;
}



static PyObject *
PyvtkProcessModule_GetEventCallDataSessionId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEventCallDataSessionId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProcessModule *op = static_cast<vtkProcessModule *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetEventCallDataSessionId() :
      op->vtkProcessModule::GetEventCallDataSessionId());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkProcessModule_GetSession_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSession");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProcessModule *op = static_cast<vtkProcessModule *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkSession *tempr = (ap.IsBound() ?
      op->GetSession(temp0) :
      op->vtkProcessModule::GetSession(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkProcessModule_GetSession_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSession");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProcessModule *op = static_cast<vtkProcessModule *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkSession *tempr = (ap.IsBound() ?
      op->GetSession() :
      op->vtkProcessModule::GetSession());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkProcessModule_GetSession(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkProcessModule_GetSession_s1(self, args);
    case 0:
      return PyvtkProcessModule_GetSession_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetSession");
  return NULL;
}



static PyObject *
PyvtkProcessModule_GetSessionID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSessionID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProcessModule *op = static_cast<vtkProcessModule *>(vp);

  vtkSession *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSession"))
    {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetSessionID(temp0) :
      op->vtkProcessModule::GetSessionID(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkProcessModule_NewSessionIterator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewSessionIterator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProcessModule *op = static_cast<vtkProcessModule *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkSessionIterator *tempr = (ap.IsBound() ?
      op->NewSessionIterator() :
      op->vtkProcessModule::NewSessionIterator());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkProcessModule_GetActiveSession(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActiveSession");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProcessModule *op = static_cast<vtkProcessModule *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkSession *tempr = (ap.IsBound() ?
      op->GetActiveSession() :
      op->vtkProcessModule::GetActiveSession());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkProcessModule_GetMultipleSessionsSupport(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMultipleSessionsSupport");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProcessModule *op = static_cast<vtkProcessModule *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetMultipleSessionsSupport() :
      op->vtkProcessModule::GetMultipleSessionsSupport());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkProcessModule_SetMultipleSessionsSupport(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMultipleSessionsSupport");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProcessModule *op = static_cast<vtkProcessModule *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetMultipleSessionsSupport(temp0);
      }
    else
      {
      op->vtkProcessModule::SetMultipleSessionsSupport(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkProcessModule_MultipleSessionsSupportOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MultipleSessionsSupportOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProcessModule *op = static_cast<vtkProcessModule *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->MultipleSessionsSupportOn();
      }
    else
      {
      op->vtkProcessModule::MultipleSessionsSupportOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkProcessModule_MultipleSessionsSupportOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MultipleSessionsSupportOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProcessModule *op = static_cast<vtkProcessModule *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->MultipleSessionsSupportOff();
      }
    else
      {
      op->vtkProcessModule::MultipleSessionsSupportOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkProcessModule_GetProcessModule(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetProcessModule");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkProcessModule *tempr = vtkProcessModule::GetProcessModule();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkProcessModule_GetOptions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOptions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProcessModule *op = static_cast<vtkProcessModule *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPVOptions *tempr = (ap.IsBound() ?
      op->GetOptions() :
      op->vtkProcessModule::GetOptions());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkProcessModule_SetOptions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOptions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProcessModule *op = static_cast<vtkProcessModule *>(vp);

  vtkPVOptions *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPVOptions"))
    {
    if (ap.IsBound())
      {
      op->SetOptions(temp0);
      }
    else
      {
      op->vtkProcessModule::SetOptions(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkProcessModule_GetNetworkAccessManager(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNetworkAccessManager");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProcessModule *op = static_cast<vtkProcessModule *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkNetworkAccessManager *tempr = (ap.IsBound() ?
      op->GetNetworkAccessManager() :
      op->vtkProcessModule::GetNetworkAccessManager());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkProcessModule_SetNetworkAccessManager(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNetworkAccessManager");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProcessModule *op = static_cast<vtkProcessModule *>(vp);

  vtkNetworkAccessManager *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkNetworkAccessManager"))
    {
    if (ap.IsBound())
      {
      op->SetNetworkAccessManager(temp0);
      }
    else
      {
      op->vtkProcessModule::SetNetworkAccessManager(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkProcessModule_GetGlobalController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGlobalController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProcessModule *op = static_cast<vtkProcessModule *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkMultiProcessController *tempr = (ap.IsBound() ?
      op->GetGlobalController() :
      op->vtkProcessModule::GetGlobalController());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkProcessModule_GetNumberOfLocalPartitions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfLocalPartitions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProcessModule *op = static_cast<vtkProcessModule *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfLocalPartitions() :
      op->vtkProcessModule::GetNumberOfLocalPartitions());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkProcessModule_GetPartitionId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPartitionId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProcessModule *op = static_cast<vtkProcessModule *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetPartitionId() :
      op->vtkProcessModule::GetPartitionId());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkProcessModule_IsMPIInitialized(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsMPIInitialized");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProcessModule *op = static_cast<vtkProcessModule *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->IsMPIInitialized() :
      op->vtkProcessModule::IsMPIInitialized());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkProcessModule_GetReportInterpreterErrors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetReportInterpreterErrors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProcessModule *op = static_cast<vtkProcessModule *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetReportInterpreterErrors() :
      op->vtkProcessModule::GetReportInterpreterErrors());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkProcessModule_SetReportInterpreterErrors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetReportInterpreterErrors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProcessModule *op = static_cast<vtkProcessModule *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetReportInterpreterErrors(temp0);
      }
    else
      {
      op->vtkProcessModule::SetReportInterpreterErrors(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkProcessModule_ReportInterpreterErrorsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReportInterpreterErrorsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProcessModule *op = static_cast<vtkProcessModule *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ReportInterpreterErrorsOn();
      }
    else
      {
      op->vtkProcessModule::ReportInterpreterErrorsOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkProcessModule_ReportInterpreterErrorsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReportInterpreterErrorsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProcessModule *op = static_cast<vtkProcessModule *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ReportInterpreterErrorsOff();
      }
    else
      {
      op->vtkProcessModule::ReportInterpreterErrorsOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkProcessModule_GetSymmetricMPIMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSymmetricMPIMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProcessModule *op = static_cast<vtkProcessModule *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetSymmetricMPIMode() :
      op->vtkProcessModule::GetSymmetricMPIMode());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkProcessModule_Methods[] = {
  {(char*)"GetClassName", PyvtkProcessModule_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkProcessModule_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkProcessModule_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkProcessModule\nC++: vtkProcessModule *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkProcessModule_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkProcessModule\nC++: vtkProcessModule *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetProcessType", PyvtkProcessModule_GetProcessType, METH_VARARGS | METH_STATIC,
   (char*)"V.GetProcessType() ->\nC++: static ProcessTypes GetProcessType()\n\n"},
  {(char*)"GetProcessTypeAsInt", PyvtkProcessModule_GetProcessTypeAsInt, METH_VARARGS | METH_STATIC,
   (char*)"V.GetProcessTypeAsInt() -> int\nC++: static unsigned int GetProcessTypeAsInt()\n\n"},
  {(char*)"UpdateProcessType", PyvtkProcessModule_UpdateProcessType, METH_VARARGS,
   (char*)"V.UpdateProcessType(, bool)\nC++: void UpdateProcessType(ProcessTypes newType,\n    bool dontKnowWhatImDoing=true)\n\nThis method has been added to support migration from one type to\nanother but this method call if NOT RECOMMENDED.\n-> We use it to handle the Animation saving at disconnection time\non the server side. We create a new session and migrate the sever\nprocess to a batch process.\n"},
  {(char*)"Finalize", PyvtkProcessModule_Finalize, METH_VARARGS | METH_STATIC,
   (char*)"V.Finalize() -> bool\nC++: static bool Finalize()\n\nFinalizes and cleans up the process.\n"},
  {(char*)"RegisterSession", PyvtkProcessModule_RegisterSession, METH_VARARGS,
   (char*)"V.RegisterSession(vtkSession) -> int\nC++: vtkIdType RegisterSession(vtkSession *)\n\nRegisters a new session. A new ID is assigned for the session and\nthat ID is returned. The ID can be used in future to access this\nsession. Fires vtkCommand::ConnectionCreatedEvent every time a\nsession is registered. The event-data for this event is a\nvtkIdType whose value is the session id.\n"},
  {(char*)"UnRegisterSession", PyvtkProcessModule_UnRegisterSession, METH_VARARGS,
   (char*)"V.UnRegisterSession(int) -> bool\nC++: bool UnRegisterSession(vtkIdType sessionID)\nV.UnRegisterSession(vtkSession) -> bool\nC++: bool UnRegisterSession(vtkSession *session)\n\nUnregister a session given its ID. This is the same ID that is\nreturned when the session was registered. Returns true is the\nsession was unregistered. Unregistering a session implies that\nthe ProcessModule will no longer monitor communication on the\nsockets, if any, in the session. Fires\nvtkCommand::ConnectionClosedEvent every time a session is\nunregistered. The event-data for this event is a vtkIdType whose\nvalue is the session id.\n"},
  {(char*)"GetEventCallDataSessionId", PyvtkProcessModule_GetEventCallDataSessionId, METH_VARARGS,
   (char*)"V.GetEventCallDataSessionId() -> int\nC++: vtkIdType GetEventCallDataSessionId()\n\nRegisterSession and UnRegisterSession fire events with SessionID\nin calldata. To provide access to that in Python, we have this\nmethod. The value is valid only in\nvtkCommand::ConnectionCreatedEvent and\nvtkCommand::ConnectionClosedEvent callbacks and is set to 0 at\nother times.\n"},
  {(char*)"GetSession", PyvtkProcessModule_GetSession, METH_VARARGS,
   (char*)"V.GetSession(int) -> vtkSession\nC++: vtkSession *GetSession(vtkIdType)\nV.GetSession() -> vtkSession\nC++: vtkSession *GetSession()\n\nReturns the session associated with a given ID.\n"},
  {(char*)"GetSessionID", PyvtkProcessModule_GetSessionID, METH_VARARGS,
   (char*)"V.GetSessionID(vtkSession) -> int\nC++: vtkIdType GetSessionID(vtkSession *)\n\nReturns the session id for the session, if any. Return 0 is the\nsession has not been registered with the process module.\n"},
  {(char*)"NewSessionIterator", PyvtkProcessModule_NewSessionIterator, METH_VARARGS,
   (char*)"V.NewSessionIterator() -> vtkSessionIterator\nC++: vtkSessionIterator *NewSessionIterator()\n\nReturns a new session iterator that can be used to iterate over\nthe registered sessions.\n"},
  {(char*)"GetActiveSession", PyvtkProcessModule_GetActiveSession, METH_VARARGS,
   (char*)"V.GetActiveSession() -> vtkSession\nC++: vtkSession *GetActiveSession()\n\nWhenever any session is processing some message, it typically\nmarks itself active with the process module. The active session\ncan be accessed using this method.\n"},
  {(char*)"GetMultipleSessionsSupport", PyvtkProcessModule_GetMultipleSessionsSupport, METH_VARARGS,
   (char*)"V.GetMultipleSessionsSupport() -> bool\nC++: bool GetMultipleSessionsSupport()\n\nReturn true, if multiple sessions can be used simultanuously. We\nset the default to be FALSE.\n"},
  {(char*)"SetMultipleSessionsSupport", PyvtkProcessModule_SetMultipleSessionsSupport, METH_VARARGS,
   (char*)"V.SetMultipleSessionsSupport(bool)\nC++: void SetMultipleSessionsSupport(bool a)\n\nReturn true, if multiple sessions can be used simultanuously. We\nset the default to be FALSE.\n"},
  {(char*)"MultipleSessionsSupportOn", PyvtkProcessModule_MultipleSessionsSupportOn, METH_VARARGS,
   (char*)"V.MultipleSessionsSupportOn()\nC++: void MultipleSessionsSupportOn()\n\nReturn true, if multiple sessions can be used simultanuously. We\nset the default to be FALSE.\n"},
  {(char*)"MultipleSessionsSupportOff", PyvtkProcessModule_MultipleSessionsSupportOff, METH_VARARGS,
   (char*)"V.MultipleSessionsSupportOff()\nC++: void MultipleSessionsSupportOff()\n\nReturn true, if multiple sessions can be used simultanuously. We\nset the default to be FALSE.\n"},
  {(char*)"GetProcessModule", PyvtkProcessModule_GetProcessModule, METH_VARARGS | METH_STATIC,
   (char*)"V.GetProcessModule() -> vtkProcessModule\nC++: static vtkProcessModule *GetProcessModule()\n\nProvides access to the global ProcessModule. This method can only\nbe called after Initialize().\n"},
  {(char*)"GetOptions", PyvtkProcessModule_GetOptions, METH_VARARGS,
   (char*)"V.GetOptions() -> vtkPVOptions\nC++: vtkPVOptions *GetOptions()\n\nSet/Get the application command line options object. Note that\nthis has to be explicitly set. vtkProcessModule::Initialize()\ndoes not initialize the vtkPVOptions.\n"},
  {(char*)"SetOptions", PyvtkProcessModule_SetOptions, METH_VARARGS,
   (char*)"V.SetOptions(vtkPVOptions)\nC++: void SetOptions(vtkPVOptions *op)\n\nSet/Get the application command line options object. Note that\nthis has to be explicitly set. vtkProcessModule::Initialize()\ndoes not initialize the vtkPVOptions.\n"},
  {(char*)"GetNetworkAccessManager", PyvtkProcessModule_GetNetworkAccessManager, METH_VARARGS,
   (char*)"V.GetNetworkAccessManager() -> vtkNetworkAccessManager\nC++: vtkNetworkAccessManager *GetNetworkAccessManager()\n\nGet/Set the network access manager. vtkNetworkAccessManager\nencapsulates the setup of interprocess communication channels. By\ndefault a vtkTCPNetworkAccessManager is setup. If you want to\nchange the network access manager, it should be done only when no\nsessions are present. Ideally, you want to do that during the\ninitialization of the process itself.\n"},
  {(char*)"SetNetworkAccessManager", PyvtkProcessModule_SetNetworkAccessManager, METH_VARARGS,
   (char*)"V.SetNetworkAccessManager(vtkNetworkAccessManager)\nC++: void SetNetworkAccessManager(vtkNetworkAccessManager *)\n\nGet/Set the network access manager. vtkNetworkAccessManager\nencapsulates the setup of interprocess communication channels. By\ndefault a vtkTCPNetworkAccessManager is setup. If you want to\nchange the network access manager, it should be done only when no\nsessions are present. Ideally, you want to do that during the\ninitialization of the process itself.\n"},
  {(char*)"GetGlobalController", PyvtkProcessModule_GetGlobalController, METH_VARARGS,
   (char*)"V.GetGlobalController() -> vtkMultiProcessController\nC++: vtkMultiProcessController *GetGlobalController()\n\nProvides access to the global MPI controller, if any. Same can be\nobtained using vtkMultiProcessController::GetGlobalController();\n"},
  {(char*)"GetNumberOfLocalPartitions", PyvtkProcessModule_GetNumberOfLocalPartitions, METH_VARARGS,
   (char*)"V.GetNumberOfLocalPartitions() -> int\nC++: int GetNumberOfLocalPartitions()\n\nReturns the number of processes in this process group.\n"},
  {(char*)"GetPartitionId", PyvtkProcessModule_GetPartitionId, METH_VARARGS,
   (char*)"V.GetPartitionId() -> int\nC++: int GetPartitionId()\n\nReturns the local process id.\n"},
  {(char*)"IsMPIInitialized", PyvtkProcessModule_IsMPIInitialized, METH_VARARGS,
   (char*)"V.IsMPIInitialized() -> bool\nC++: bool IsMPIInitialized()\n\nReturn whether MPI is initialized in this process group.\n"},
  {(char*)"GetReportInterpreterErrors", PyvtkProcessModule_GetReportInterpreterErrors, METH_VARARGS,
   (char*)"V.GetReportInterpreterErrors() -> bool\nC++: bool GetReportInterpreterErrors()\n\nSet/Get whether to report errors from the Interpreter.\n"},
  {(char*)"SetReportInterpreterErrors", PyvtkProcessModule_SetReportInterpreterErrors, METH_VARARGS,
   (char*)"V.SetReportInterpreterErrors(bool)\nC++: void SetReportInterpreterErrors(bool a)\n\nSet/Get whether to report errors from the Interpreter.\n"},
  {(char*)"ReportInterpreterErrorsOn", PyvtkProcessModule_ReportInterpreterErrorsOn, METH_VARARGS,
   (char*)"V.ReportInterpreterErrorsOn()\nC++: void ReportInterpreterErrorsOn()\n\nSet/Get whether to report errors from the Interpreter.\n"},
  {(char*)"ReportInterpreterErrorsOff", PyvtkProcessModule_ReportInterpreterErrorsOff, METH_VARARGS,
   (char*)"V.ReportInterpreterErrorsOff()\nC++: void ReportInterpreterErrorsOff()\n\nSet/Get whether to report errors from the Interpreter.\n"},
  {(char*)"GetSymmetricMPIMode", PyvtkProcessModule_GetSymmetricMPIMode, METH_VARARGS,
   (char*)"V.GetSymmetricMPIMode() -> bool\nC++: bool GetSymmetricMPIMode()\n\nReturns true if ParaView is to be run in symmetric mode.\nSymmetric mode implies that satellites process same code as the\nroot node. This is applicable only for PROCESS_BATCH.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkProcessModule_StaticNew()
{
  return vtkProcessModule::New();
}

PyObject *PyVTKClass_vtkProcessModuleNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkProcessModule_StaticNew,
    PyvtkProcessModule_Methods,
    "vtkProcessModule", modulename,
    NULL, NULL,
    PyvtkProcessModule_Doc(),
    PyVTKClass_vtkObjectNew(modulename));

  if (cls)
    {
    PyObject *d = PyVTKClass_GetDict(cls);
    PyObject *o;

    PyType_Ready(&PyvtkProcessModule_ProcessTypes_Type);
    PyvtkProcessModule_ProcessTypes_Type.tp_new = NULL;

    o = (PyObject *)&PyvtkProcessModule_ProcessTypes_Type;
    if (o && PyDict_SetItemString(d, (char *)"ProcessTypes", o) != 0)
      {
      Py_DECREF(o);
      }

    PyType_Ready(&PyvtkProcessModule_ServerFlags_Type);
    PyvtkProcessModule_ServerFlags_Type.tp_new = NULL;

    o = (PyObject *)&PyvtkProcessModule_ServerFlags_Type;
    if (o && PyDict_SetItemString(d, (char *)"ServerFlags", o) != 0)
      {
      Py_DECREF(o);
      }

    for (int c = 0; c < 6; c++)
      {
      typedef vtkProcessModule::ProcessTypes cxx_enum_type;

      static const struct { const char *name; cxx_enum_type value; }
        constants[6] = {
          { "PROCESS_CLIENT", vtkProcessModule::PROCESS_CLIENT },
          { "PROCESS_SERVER", vtkProcessModule::PROCESS_SERVER },
          { "PROCESS_DATA_SERVER", vtkProcessModule::PROCESS_DATA_SERVER },
          { "PROCESS_RENDER_SERVER", vtkProcessModule::PROCESS_RENDER_SERVER },
          { "PROCESS_BATCH", vtkProcessModule::PROCESS_BATCH },
          { "PROCESS_INVALID", vtkProcessModule::PROCESS_INVALID },
        };

      o = PyvtkProcessModule_ProcessTypes_FromEnum(constants[c].value);
      if (o)
        {
        PyDict_SetItemString(d, (char *)constants[c].name, o);
        Py_DECREF(o);
        }
      }

    for (int c = 0; c < 7; c++)
      {
      typedef vtkProcessModule::ServerFlags cxx_enum_type;

      static const struct { const char *name; cxx_enum_type value; }
        constants[7] = {
          { "DATA_SERVER", vtkProcessModule::DATA_SERVER },
          { "DATA_SERVER_ROOT", vtkProcessModule::DATA_SERVER_ROOT },
          { "RENDER_SERVER", vtkProcessModule::RENDER_SERVER },
          { "RENDER_SERVER_ROOT", vtkProcessModule::RENDER_SERVER_ROOT },
          { "SERVERS", vtkProcessModule::SERVERS },
          { "CLIENT", vtkProcessModule::CLIENT },
          { "CLIENT_AND_SERVERS", vtkProcessModule::CLIENT_AND_SERVERS },
        };

      o = PyvtkProcessModule_ServerFlags_FromEnum(constants[c].value);
      if (o)
        {
        PyDict_SetItemString(d, (char *)constants[c].name, o);
        Py_DECREF(o);
        }
      }

    }

  return cls;
}

const char **PyvtkProcessModule_Doc()
{
  static const char *docstring[] = {
    "vtkProcessModule - process initialization and management core for\n\n",
    "Superclass: vtkObject\n\n",
    "\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkProcessModule(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkProcessModuleNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkProcessModule", o) != 0)
    {
    Py_DECREF(o);
    }

}

