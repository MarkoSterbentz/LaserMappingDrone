// python wrapper for vtkPVSessionCore
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkPVSessionCore.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkPVSessionCore(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkPVSessionCoreNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkPVSessionCore_Doc();

#ifndef DECLARED_PyvtkPVSessionCore_MessageTypes_Type
extern VTK_PYTHON_EXPORT PyTypeObject PyvtkPVSessionCore_MessageTypes_Type;
#define DECLARED_PyvtkPVSessionCore_MessageTypes_Type
#endif

PyTypeObject PyvtkPVSessionCore_MessageTypes_Type = {
  PyObject_HEAD_INIT(&PyType_Type)
  0,
  (char*)"MessageTypes", // tp_name
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

PyObject *PyvtkPVSessionCore_MessageTypes_FromEnum(int val)
{
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkPVSessionCore_MessageTypes_Type);
  self->ob_ival = val;
  return (PyObject *)self;
}


static PyObject *
PyvtkPVSessionCore_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSessionCore *op = static_cast<vtkPVSessionCore *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkPVSessionCore::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVSessionCore_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSessionCore *op = static_cast<vtkPVSessionCore *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPVSessionCore::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVSessionCore_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSessionCore *op = static_cast<vtkPVSessionCore *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPVSessionCore *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPVSessionCore::NewInstance());

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
PyvtkPVSessionCore_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkPVSessionCore *tempr = vtkPVSessionCore::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVSessionCore_GetInterpreter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInterpreter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSessionCore *op = static_cast<vtkPVSessionCore *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkClientServerInterpreter *tempr = (ap.IsBound() ?
      op->GetInterpreter() :
      op->vtkPVSessionCore::GetInterpreter());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVSessionCore_GetProxyDefinitionManager(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProxyDefinitionManager");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSessionCore *op = static_cast<vtkPVSessionCore *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkSIProxyDefinitionManager *tempr = (ap.IsBound() ?
      op->GetProxyDefinitionManager() :
      op->vtkPVSessionCore::GetProxyDefinitionManager());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVSessionCore_PushState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PushState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSessionCore *op = static_cast<vtkPVSessionCore *>(vp);

  vtkSMMessage *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMMessage"))
    {
    if (ap.IsBound())
      {
      op->PushState(temp0);
      }
    else
      {
      op->vtkPVSessionCore::PushState(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVSessionCore_PullState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PullState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSessionCore *op = static_cast<vtkPVSessionCore *>(vp);

  vtkSMMessage *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMMessage"))
    {
    if (ap.IsBound())
      {
      op->PullState(temp0);
      }
    else
      {
      op->vtkPVSessionCore::PullState(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVSessionCore_UnRegisterSIObject(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UnRegisterSIObject");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSessionCore *op = static_cast<vtkPVSessionCore *>(vp);

  vtkSMMessage *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMMessage"))
    {
    if (ap.IsBound())
      {
      op->UnRegisterSIObject(temp0);
      }
    else
      {
      op->vtkPVSessionCore::UnRegisterSIObject(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVSessionCore_RegisterSIObject(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RegisterSIObject");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSessionCore *op = static_cast<vtkPVSessionCore *>(vp);

  vtkSMMessage *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMMessage"))
    {
    if (ap.IsBound())
      {
      op->RegisterSIObject(temp0);
      }
    else
      {
      op->vtkPVSessionCore::RegisterSIObject(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVSessionCore_GetSIObject(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSIObject");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSessionCore *op = static_cast<vtkPVSessionCore *>(vp);

  unsigned int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkSIObject *tempr = (ap.IsBound() ?
      op->GetSIObject(temp0) :
      op->vtkPVSessionCore::GetSIObject(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVSessionCore_GetRemoteObject(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRemoteObject");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSessionCore *op = static_cast<vtkPVSessionCore *>(vp);

  unsigned int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkObject *tempr = (ap.IsBound() ?
      op->GetRemoteObject(temp0) :
      op->vtkPVSessionCore::GetRemoteObject(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVSessionCore_RegisterRemoteObject(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RegisterRemoteObject");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSessionCore *op = static_cast<vtkPVSessionCore *>(vp);

  unsigned int temp0;
  vtkObject *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkObject"))
    {
    if (ap.IsBound())
      {
      op->RegisterRemoteObject(temp0, temp1);
      }
    else
      {
      op->vtkPVSessionCore::RegisterRemoteObject(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVSessionCore_UnRegisterRemoteObject(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UnRegisterRemoteObject");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSessionCore *op = static_cast<vtkPVSessionCore *>(vp);

  unsigned int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->UnRegisterRemoteObject(temp0);
      }
    else
      {
      op->vtkPVSessionCore::UnRegisterRemoteObject(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVSessionCore_GatherInformation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GatherInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSessionCore *op = static_cast<vtkPVSessionCore *>(vp);

  unsigned int temp0;
  vtkPVInformation *temp1 = NULL;
  unsigned int temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkPVInformation") &&
      ap.GetValue(temp2))
    {
    bool tempr = (ap.IsBound() ?
      op->GatherInformation(temp0, temp1, temp2) :
      op->vtkPVSessionCore::GatherInformation(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVSessionCore_GetNumberOfProcesses(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfProcesses");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSessionCore *op = static_cast<vtkPVSessionCore *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfProcesses() :
      op->vtkPVSessionCore::GetNumberOfProcesses());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVSessionCore_SetMPIMToNSocketConnection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMPIMToNSocketConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSessionCore *op = static_cast<vtkPVSessionCore *>(vp);

  vtkMPIMToNSocketConnection *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMPIMToNSocketConnection"))
    {
    if (ap.IsBound())
      {
      op->SetMPIMToNSocketConnection(temp0);
      }
    else
      {
      op->vtkPVSessionCore::SetMPIMToNSocketConnection(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVSessionCore_GetMPIMToNSocketConnection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMPIMToNSocketConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSessionCore *op = static_cast<vtkPVSessionCore *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkMPIMToNSocketConnection *tempr = (ap.IsBound() ?
      op->GetMPIMToNSocketConnection() :
      op->vtkPVSessionCore::GetMPIMToNSocketConnection());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVSessionCore_GetNextGlobalUniqueIdentifier(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNextGlobalUniqueIdentifier");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSessionCore *op = static_cast<vtkPVSessionCore *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned int tempr = (ap.IsBound() ?
      op->GetNextGlobalUniqueIdentifier() :
      op->vtkPVSessionCore::GetNextGlobalUniqueIdentifier());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVSessionCore_GetNextChunkGlobalUniqueIdentifier(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNextChunkGlobalUniqueIdentifier");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSessionCore *op = static_cast<vtkPVSessionCore *>(vp);

  unsigned int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    unsigned int tempr = (ap.IsBound() ?
      op->GetNextChunkGlobalUniqueIdentifier(temp0) :
      op->vtkPVSessionCore::GetNextChunkGlobalUniqueIdentifier(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVSessionCore_PushStateSatelliteCallback(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PushStateSatelliteCallback");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSessionCore *op = static_cast<vtkPVSessionCore *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->PushStateSatelliteCallback();
      }
    else
      {
      op->vtkPVSessionCore::PushStateSatelliteCallback();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVSessionCore_ExecuteStreamSatelliteCallback(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ExecuteStreamSatelliteCallback");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSessionCore *op = static_cast<vtkPVSessionCore *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ExecuteStreamSatelliteCallback();
      }
    else
      {
      op->vtkPVSessionCore::ExecuteStreamSatelliteCallback();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVSessionCore_GatherInformationStatelliteCallback(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GatherInformationStatelliteCallback");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSessionCore *op = static_cast<vtkPVSessionCore *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->GatherInformationStatelliteCallback();
      }
    else
      {
      op->vtkPVSessionCore::GatherInformationStatelliteCallback();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVSessionCore_RegisterSIObjectSatelliteCallback(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RegisterSIObjectSatelliteCallback");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSessionCore *op = static_cast<vtkPVSessionCore *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->RegisterSIObjectSatelliteCallback();
      }
    else
      {
      op->vtkPVSessionCore::RegisterSIObjectSatelliteCallback();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVSessionCore_UnRegisterSIObjectSatelliteCallback(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UnRegisterSIObjectSatelliteCallback");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSessionCore *op = static_cast<vtkPVSessionCore *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->UnRegisterSIObjectSatelliteCallback();
      }
    else
      {
      op->vtkPVSessionCore::UnRegisterSIObjectSatelliteCallback();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVSessionCore_GetAllRemoteObjects(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAllRemoteObjects");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSessionCore *op = static_cast<vtkPVSessionCore *>(vp);

  vtkCollection *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCollection"))
    {
    if (ap.IsBound())
      {
      op->GetAllRemoteObjects(temp0);
      }
    else
      {
      op->vtkPVSessionCore::GetAllRemoteObjects(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVSessionCore_GarbageCollectSIObject(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GarbageCollectSIObject");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSessionCore *op = static_cast<vtkPVSessionCore *>(vp);

  int *temp0 = NULL;
  int *save0 = NULL;
  int small0[8];
  int size0 = 0;
  int temp1;
  PyObject *result = NULL;

  if (op)
    {
    size0 = ap.GetArgSize(0);
    temp0 = small0;
    if (size0 > 4)
      {
      temp0 = new int[2*size0];
      }
    save0 = &temp0[size0];
    }

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1))
    {
    ap.SaveArray(temp0, save0, size0);

    if (ap.IsBound())
      {
      op->GarbageCollectSIObject(temp0, temp1);
      }
    else
      {
      op->vtkPVSessionCore::GarbageCollectSIObject(temp0, temp1);
      }

    if (ap.ArrayHasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(0, temp0, size0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  if (temp0 && temp0 != small0)
    {
    delete [] temp0;
    }

  return result;
}

static PyMethodDef PyvtkPVSessionCore_Methods[] = {
  {(char*)"GetClassName", PyvtkPVSessionCore_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkPVSessionCore_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkPVSessionCore_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkPVSessionCore\nC++: vtkPVSessionCore *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkPVSessionCore_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkPVSessionCore\nC++: vtkPVSessionCore *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetInterpreter", PyvtkPVSessionCore_GetInterpreter, METH_VARARGS,
   (char*)"V.GetInterpreter() -> vtkClientServerInterpreter\nC++: vtkClientServerInterpreter *GetInterpreter()\n\nProvides access to the interpreter.\n"},
  {(char*)"GetProxyDefinitionManager", PyvtkPVSessionCore_GetProxyDefinitionManager, METH_VARARGS,
   (char*)"V.GetProxyDefinitionManager() -> vtkSIProxyDefinitionManager\nC++: vtkSIProxyDefinitionManager *GetProxyDefinitionManager()\n\nProvides access to the proxy definition manager.\n"},
  {(char*)"PushState", PyvtkPVSessionCore_PushState, METH_VARARGS,
   (char*)"V.PushState(vtkSMMessage)\nC++: virtual void PushState(vtkSMMessage *message)\n\nPush the state message. This might forward the message to the MPI\nstatellites if needed.\n"},
  {(char*)"PullState", PyvtkPVSessionCore_PullState, METH_VARARGS,
   (char*)"V.PullState(vtkSMMessage)\nC++: virtual void PullState(vtkSMMessage *message)\n\nPull the state message from the local SI object instances.\n"},
  {(char*)"UnRegisterSIObject", PyvtkPVSessionCore_UnRegisterSIObject, METH_VARARGS,
   (char*)"V.UnRegisterSIObject(vtkSMMessage)\nC++: virtual void UnRegisterSIObject(vtkSMMessage *message)\n\nNotify that the given SIObject is not used anymore . This does\nnot necessary delete the SIObject specially if this one is used\nby other local SIObject. It only decrease its reference count.\n"},
  {(char*)"RegisterSIObject", PyvtkPVSessionCore_RegisterSIObject, METH_VARARGS,
   (char*)"V.RegisterSIObject(vtkSMMessage)\nC++: virtual void RegisterSIObject(vtkSMMessage *message)\n\nNotify that the given SIObject is used. It only increase its\nreference count.\n"},
  {(char*)"GetSIObject", PyvtkPVSessionCore_GetSIObject, METH_VARARGS,
   (char*)"V.GetSIObject(int) -> vtkSIObject\nC++: vtkSIObject *GetSIObject(vtkTypeUInt32 globalid)\n\nReturns a vtkSIObject or subclass given its global id, if any\notherwise return NULL;\n"},
  {(char*)"GetRemoteObject", PyvtkPVSessionCore_GetRemoteObject, METH_VARARGS,
   (char*)"V.GetRemoteObject(int) -> vtkObject\nC++: vtkObject *GetRemoteObject(vtkTypeUInt32 globalid)\n\nReturn a vtkObject given its global id if any otherwise return\nNULL;\n"},
  {(char*)"RegisterRemoteObject", PyvtkPVSessionCore_RegisterRemoteObject, METH_VARARGS,
   (char*)"V.RegisterRemoteObject(int, vtkObject)\nC++: void RegisterRemoteObject(vtkTypeUInt32 globalid,\n    vtkObject *obj)\n\nRegister a remote object\n"},
  {(char*)"UnRegisterRemoteObject", PyvtkPVSessionCore_UnRegisterRemoteObject, METH_VARARGS,
   (char*)"V.UnRegisterRemoteObject(int)\nC++: void UnRegisterRemoteObject(vtkTypeUInt32 globalid)\n\nUnregister a remote object\n"},
  {(char*)"GatherInformation", PyvtkPVSessionCore_GatherInformation, METH_VARARGS,
   (char*)"V.GatherInformation(int, vtkPVInformation, int) -> bool\nC++: virtual bool GatherInformation(vtkTypeUInt32 location,\n    vtkPVInformation *information, vtkTypeUInt32 globalid)\n\nGather information about an object referred by the\nglobalid.location identifies the processes to gather the\ninformation from.\n"},
  {(char*)"GetNumberOfProcesses", PyvtkPVSessionCore_GetNumberOfProcesses, METH_VARARGS,
   (char*)"V.GetNumberOfProcesses() -> int\nC++: int GetNumberOfProcesses()\n\nReturns the number of processes. This simply calls the\nGetNumberOfProcesses() on this->ParallelController\n"},
  {(char*)"SetMPIMToNSocketConnection", PyvtkPVSessionCore_SetMPIMToNSocketConnection, METH_VARARGS,
   (char*)"V.SetMPIMToNSocketConnection(vtkMPIMToNSocketConnection)\nC++: void SetMPIMToNSocketConnection(vtkMPIMToNSocketConnection *)\n\nGet/Set the socket connection used to communicate betweeen\ndata=server and render-server processes. This is valid only on\ndata-server and render-server processes.\n"},
  {(char*)"GetMPIMToNSocketConnection", PyvtkPVSessionCore_GetMPIMToNSocketConnection, METH_VARARGS,
   (char*)"V.GetMPIMToNSocketConnection() -> vtkMPIMToNSocketConnection\nC++: vtkMPIMToNSocketConnection *GetMPIMToNSocketConnection()\n\nGet/Set the socket connection used to communicate betweeen\ndata=server and render-server processes. This is valid only on\ndata-server and render-server processes.\n"},
  {(char*)"GetNextGlobalUniqueIdentifier", PyvtkPVSessionCore_GetNextGlobalUniqueIdentifier, METH_VARARGS,
   (char*)"V.GetNextGlobalUniqueIdentifier() -> int\nC++: virtual vtkTypeUInt32 GetNextGlobalUniqueIdentifier()\n\nProvides the next available identifier. This implementation works\nlocally. without any code distribution. To support the\ndistributed architecture the vtkSMSessionClient overide those\nmethod to call them on the DATA_SERVER vtkPVSessionBase instance.\n"},
  {(char*)"GetNextChunkGlobalUniqueIdentifier", PyvtkPVSessionCore_GetNextChunkGlobalUniqueIdentifier, METH_VARARGS,
   (char*)"V.GetNextChunkGlobalUniqueIdentifier(int) -> int\nC++: virtual vtkTypeUInt32 GetNextChunkGlobalUniqueIdentifier(\n    vtkTypeUInt32 chunkSize)\n\nReturn the first Id of the requested chunk. 1 =\nReverveNextIdChunk(10); | Reserved ids [1,2,3,4,5,6,7,8,9,10] 11\n= ReverveNextIdChunk(10);| Reserved ids\n[11,12,13,14,15,16,17,18,19,20] b = a + 10;\n"},
  {(char*)"PushStateSatelliteCallback", PyvtkPVSessionCore_PushStateSatelliteCallback, METH_VARARGS,
   (char*)"V.PushStateSatelliteCallback()\nC++: void PushStateSatelliteCallback()\n\n"},
  {(char*)"ExecuteStreamSatelliteCallback", PyvtkPVSessionCore_ExecuteStreamSatelliteCallback, METH_VARARGS,
   (char*)"V.ExecuteStreamSatelliteCallback()\nC++: void ExecuteStreamSatelliteCallback()\n\n"},
  {(char*)"GatherInformationStatelliteCallback", PyvtkPVSessionCore_GatherInformationStatelliteCallback, METH_VARARGS,
   (char*)"V.GatherInformationStatelliteCallback()\nC++: void GatherInformationStatelliteCallback()\n\n"},
  {(char*)"RegisterSIObjectSatelliteCallback", PyvtkPVSessionCore_RegisterSIObjectSatelliteCallback, METH_VARARGS,
   (char*)"V.RegisterSIObjectSatelliteCallback()\nC++: void RegisterSIObjectSatelliteCallback()\n\n"},
  {(char*)"UnRegisterSIObjectSatelliteCallback", PyvtkPVSessionCore_UnRegisterSIObjectSatelliteCallback, METH_VARARGS,
   (char*)"V.UnRegisterSIObjectSatelliteCallback()\nC++: void UnRegisterSIObjectSatelliteCallback()\n\n"},
  {(char*)"GetAllRemoteObjects", PyvtkPVSessionCore_GetAllRemoteObjects, METH_VARARGS,
   (char*)"V.GetAllRemoteObjects(vtkCollection)\nC++: virtual void GetAllRemoteObjects(vtkCollection *collection)\n\nAllow the user to fill a vtkCollection with all RemoteObjects\nThis is usefull when you want to hold a reference to them to\nprevent any deletion across several method call.\n"},
  {(char*)"GarbageCollectSIObject", PyvtkPVSessionCore_GarbageCollectSIObject, METH_VARARGS,
   (char*)"V.GarbageCollectSIObject([int, ...], int)\nC++: void GarbageCollectSIObject(int *clientIds, int nbClients)\n\nDelete SIObject that are held by clients that disapeared from the\ngiven list.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkPVSessionCore_StaticNew()
{
  return vtkPVSessionCore::New();
}

PyObject *PyVTKClass_vtkPVSessionCoreNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkPVSessionCore_StaticNew,
    PyvtkPVSessionCore_Methods,
    "vtkPVSessionCore", modulename,
    NULL, NULL,
    PyvtkPVSessionCore_Doc(),
    PyVTKClass_vtkObjectNew(modulename));

  if (cls)
    {
    PyObject *d = PyVTKClass_GetDict(cls);
    PyObject *o;

    PyType_Ready(&PyvtkPVSessionCore_MessageTypes_Type);
    PyvtkPVSessionCore_MessageTypes_Type.tp_new = NULL;

    o = (PyObject *)&PyvtkPVSessionCore_MessageTypes_Type;
    if (o && PyDict_SetItemString(d, (char *)"MessageTypes", o) != 0)
      {
      Py_DECREF(o);
      }

    for (int c = 0; c < 6; c++)
      {
      typedef vtkPVSessionCore::MessageTypes cxx_enum_type;

      static const struct { const char *name; cxx_enum_type value; }
        constants[6] = {
          { "PUSH_STATE", vtkPVSessionCore::PUSH_STATE },
          { "PULL_STATE", vtkPVSessionCore::PULL_STATE },
          { "EXECUTE_STREAM", vtkPVSessionCore::EXECUTE_STREAM },
          { "GATHER_INFORMATION", vtkPVSessionCore::GATHER_INFORMATION },
          { "REGISTER_SI", vtkPVSessionCore::REGISTER_SI },
          { "UNREGISTER_SI", vtkPVSessionCore::UNREGISTER_SI },
        };

      o = PyvtkPVSessionCore_MessageTypes_FromEnum(constants[c].value);
      if (o)
        {
        PyDict_SetItemString(d, (char *)constants[c].name, o);
        Py_DECREF(o);
        }
      }

    }

  return cls;
}

const char **PyvtkPVSessionCore_Doc()
{
  static const char *docstring[] = {
    "vtkPVSessionCore\n\n",
    "Superclass: vtkObject\n\n",
    "vtkPVSessionCore is used by vtkSMSession. vtkPVSessionCore handle the\ncommunication to MPI satellites and ServerImplementation code\ninstanciation and execution. On the other hand, the vtkSMSession\ndispatch the request to the right process and therefore to the right\nvtkPVSessionCore instance.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPVSessionCore(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPVSessionCoreNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPVSessionCore", o) != 0)
    {
    Py_DECREF(o);
    }

}

