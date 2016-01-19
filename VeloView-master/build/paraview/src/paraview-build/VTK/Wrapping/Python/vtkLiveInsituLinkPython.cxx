// python wrapper for vtkLiveInsituLink
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkLiveInsituLink.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkLiveInsituLink(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkLiveInsituLinkNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkSMObjectNew
extern "C" { PyObject *PyVTKClass_vtkSMObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkSMObjectNew
#endif

static const char **PyvtkLiveInsituLink_Doc();

#ifndef DECLARED_PyvtkLiveInsituLink_NotificationTags_Type
extern VTK_PYTHON_EXPORT PyTypeObject PyvtkLiveInsituLink_NotificationTags_Type;
#define DECLARED_PyvtkLiveInsituLink_NotificationTags_Type
#endif

PyTypeObject PyvtkLiveInsituLink_NotificationTags_Type = {
  PyObject_HEAD_INIT(&PyType_Type)
  0,
  (char*)"NotificationTags", // tp_name
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

PyObject *PyvtkLiveInsituLink_NotificationTags_FromEnum(int val)
{
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkLiveInsituLink_NotificationTags_Type);
  self->ob_ival = val;
  return (PyObject *)self;
}


static PyObject *
PyvtkLiveInsituLink_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLiveInsituLink *op = static_cast<vtkLiveInsituLink *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkLiveInsituLink::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLiveInsituLink_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLiveInsituLink *op = static_cast<vtkLiveInsituLink *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkLiveInsituLink::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLiveInsituLink_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLiveInsituLink *op = static_cast<vtkLiveInsituLink *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkLiveInsituLink *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkLiveInsituLink::NewInstance());

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
PyvtkLiveInsituLink_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkLiveInsituLink *tempr = vtkLiveInsituLink::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLiveInsituLink_SetInsituPort(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInsituPort");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLiveInsituLink *op = static_cast<vtkLiveInsituLink *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetInsituPort(temp0);
      }
    else
      {
      op->vtkLiveInsituLink::SetInsituPort(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLiveInsituLink_GetInsituPort(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInsituPort");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLiveInsituLink *op = static_cast<vtkLiveInsituLink *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetInsituPort() :
      op->vtkLiveInsituLink::GetInsituPort());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLiveInsituLink_SetHostname(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHostname");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLiveInsituLink *op = static_cast<vtkLiveInsituLink *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetHostname(temp0);
      }
    else
      {
      op->vtkLiveInsituLink::SetHostname(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLiveInsituLink_GetHostname(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHostname");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLiveInsituLink *op = static_cast<vtkLiveInsituLink *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetHostname() :
      op->vtkLiveInsituLink::GetHostname());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLiveInsituLink_SetProcessType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetProcessType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLiveInsituLink *op = static_cast<vtkLiveInsituLink *>(vp);

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
      op->vtkLiveInsituLink::SetProcessType(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLiveInsituLink_GetProcessTypeMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProcessTypeMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLiveInsituLink *op = static_cast<vtkLiveInsituLink *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetProcessTypeMinValue() :
      op->vtkLiveInsituLink::GetProcessTypeMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLiveInsituLink_GetProcessTypeMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProcessTypeMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLiveInsituLink *op = static_cast<vtkLiveInsituLink *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetProcessTypeMaxValue() :
      op->vtkLiveInsituLink::GetProcessTypeMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLiveInsituLink_GetProcessType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProcessType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLiveInsituLink *op = static_cast<vtkLiveInsituLink *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetProcessType() :
      op->vtkLiveInsituLink::GetProcessType());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLiveInsituLink_SetProxyId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetProxyId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLiveInsituLink *op = static_cast<vtkLiveInsituLink *>(vp);

  unsigned int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetProxyId(temp0);
      }
    else
      {
      op->vtkLiveInsituLink::SetProxyId(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLiveInsituLink_GetProxyId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProxyId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLiveInsituLink *op = static_cast<vtkLiveInsituLink *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned int tempr = (ap.IsBound() ?
      op->GetProxyId() :
      op->vtkLiveInsituLink::GetProxyId());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLiveInsituLink_GetSimulationPaused(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSimulationPaused");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLiveInsituLink *op = static_cast<vtkLiveInsituLink *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetSimulationPaused() :
      op->vtkLiveInsituLink::GetSimulationPaused());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLiveInsituLink_SetSimulationPaused(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSimulationPaused");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLiveInsituLink *op = static_cast<vtkLiveInsituLink *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetSimulationPaused(temp0);
      }
    else
      {
      op->vtkLiveInsituLink::SetSimulationPaused(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLiveInsituLink_Initialize_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLiveInsituLink *op = static_cast<vtkLiveInsituLink *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Initialize();
      }
    else
      {
      op->vtkLiveInsituLink::Initialize();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkLiveInsituLink_Initialize_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLiveInsituLink *op = static_cast<vtkLiveInsituLink *>(vp);

  vtkSMSessionProxyManager *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMSessionProxyManager"))
    {
    if (ap.IsBound())
      {
      op->Initialize(temp0);
      }
    else
      {
      op->vtkLiveInsituLink::Initialize(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkLiveInsituLink_Initialize(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 0:
      return PyvtkLiveInsituLink_Initialize_s1(self, args);
    case 1:
      return PyvtkLiveInsituLink_Initialize_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "Initialize");
  return NULL;
}



static PyObject *
PyvtkLiveInsituLink_InsituInitialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsituInitialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLiveInsituLink *op = static_cast<vtkLiveInsituLink *>(vp);

  vtkSMSessionProxyManager *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMSessionProxyManager"))
    {
    if (ap.IsBound())
      {
      op->InsituInitialize(temp0);
      }
    else
      {
      op->vtkLiveInsituLink::InsituInitialize(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLiveInsituLink_InsituUpdate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsituUpdate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLiveInsituLink *op = static_cast<vtkLiveInsituLink *>(vp);

  double temp0;
  vtkIdType temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->InsituUpdate(temp0, temp1);
      }
    else
      {
      op->vtkLiveInsituLink::InsituUpdate(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLiveInsituLink_InsituPostProcess(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsituPostProcess");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLiveInsituLink *op = static_cast<vtkLiveInsituLink *>(vp);

  double temp0;
  vtkIdType temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->InsituPostProcess(temp0, temp1);
      }
    else
      {
      op->vtkLiveInsituLink::InsituPostProcess(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLiveInsituLink_WaitForLiveChange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WaitForLiveChange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLiveInsituLink *op = static_cast<vtkLiveInsituLink *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->WaitForLiveChange() :
      op->vtkLiveInsituLink::WaitForLiveChange());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLiveInsituLink_OnLiveChanged(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnLiveChanged");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLiveInsituLink *op = static_cast<vtkLiveInsituLink *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->OnLiveChanged();
      }
    else
      {
      op->vtkLiveInsituLink::OnLiveChanged();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLiveInsituLink_RegisterExtract(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RegisterExtract");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLiveInsituLink *op = static_cast<vtkLiveInsituLink *>(vp);

  vtkTrivialProducer *temp0 = NULL;
  char *temp1 = NULL;
  char *temp2 = NULL;
  int temp3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(4) &&
      ap.GetVTKObject(temp0, "vtkTrivialProducer") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
    {
    if (ap.IsBound())
      {
      op->RegisterExtract(temp0, temp1, temp2, temp3);
      }
    else
      {
      op->vtkLiveInsituLink::RegisterExtract(temp0, temp1, temp2, temp3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLiveInsituLink_UnRegisterExtract(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UnRegisterExtract");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLiveInsituLink *op = static_cast<vtkLiveInsituLink *>(vp);

  vtkTrivialProducer *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkTrivialProducer"))
    {
    if (ap.IsBound())
      {
      op->UnRegisterExtract(temp0);
      }
    else
      {
      op->vtkLiveInsituLink::UnRegisterExtract(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLiveInsituLink_OnInsituUpdate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnInsituUpdate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLiveInsituLink *op = static_cast<vtkLiveInsituLink *>(vp);

  double temp0;
  vtkIdType temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->OnInsituUpdate(temp0, temp1);
      }
    else
      {
      op->vtkLiveInsituLink::OnInsituUpdate(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLiveInsituLink_OnInsituPostProcess(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnInsituPostProcess");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLiveInsituLink *op = static_cast<vtkLiveInsituLink *>(vp);

  double temp0;
  vtkIdType temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->OnInsituPostProcess(temp0, temp1);
      }
    else
      {
      op->vtkLiveInsituLink::OnInsituPostProcess(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLiveInsituLink_LiveChanged(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LiveChanged");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLiveInsituLink *op = static_cast<vtkLiveInsituLink *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->LiveChanged();
      }
    else
      {
      op->vtkLiveInsituLink::LiveChanged();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLiveInsituLink_UpdateInsituXMLState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateInsituXMLState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLiveInsituLink *op = static_cast<vtkLiveInsituLink *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->UpdateInsituXMLState(temp0);
      }
    else
      {
      op->vtkLiveInsituLink::UpdateInsituXMLState(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLiveInsituLink_FilterXMLState(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "FilterXMLState");

  vtkPVXMLElement *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPVXMLElement"))
    {
    bool tempr = vtkLiveInsituLink::FilterXMLState(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLiveInsituLink_InsituConnect(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsituConnect");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLiveInsituLink *op = static_cast<vtkLiveInsituLink *>(vp);

  vtkMultiProcessController *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMultiProcessController"))
    {
    if (ap.IsBound())
      {
      op->InsituConnect(temp0);
      }
    else
      {
      op->vtkLiveInsituLink::InsituConnect(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLiveInsituLink_DropLiveInsituConnection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DropLiveInsituConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLiveInsituLink *op = static_cast<vtkLiveInsituLink *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->DropLiveInsituConnection();
      }
    else
      {
      op->vtkLiveInsituLink::DropLiveInsituConnection();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkLiveInsituLink_Methods[] = {
  {(char*)"GetClassName", PyvtkLiveInsituLink_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkLiveInsituLink_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkLiveInsituLink_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkLiveInsituLink\nC++: vtkLiveInsituLink *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkLiveInsituLink_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkLiveInsituLink\nC++: vtkLiveInsituLink *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetInsituPort", PyvtkLiveInsituLink_SetInsituPort, METH_VARARGS,
   (char*)"V.SetInsituPort(int)\nC++: void SetInsituPort(int a)\n\nSet the port number. This is the port on which the root\ndata-server node will open a server-socket to accept connections\nfrom VTK InSitu Library.\n"},
  {(char*)"GetInsituPort", PyvtkLiveInsituLink_GetInsituPort, METH_VARARGS,
   (char*)"V.GetInsituPort() -> int\nC++: int GetInsituPort()\n\nSet the port number. This is the port on which the root\ndata-server node will open a server-socket to accept connections\nfrom VTK InSitu Library.\n"},
  {(char*)"SetHostname", PyvtkLiveInsituLink_SetHostname, METH_VARARGS,
   (char*)"V.SetHostname(string)\nC++: void SetHostname(char *)\n\nSet the host name.\n"},
  {(char*)"GetHostname", PyvtkLiveInsituLink_GetHostname, METH_VARARGS,
   (char*)"V.GetHostname() -> string\nC++: char *GetHostname()\n\nSet the host name.\n"},
  {(char*)"SetProcessType", PyvtkLiveInsituLink_SetProcessType, METH_VARARGS,
   (char*)"V.SetProcessType(int)\nC++: void SetProcessType(int)\n\nSet/Get the link type i.e. whether the current process is the\nvisualization process or the insitu process.\n"},
  {(char*)"GetProcessTypeMinValue", PyvtkLiveInsituLink_GetProcessTypeMinValue, METH_VARARGS,
   (char*)"V.GetProcessTypeMinValue() -> int\nC++: int GetProcessTypeMinValue()\n\nSet/Get the link type i.e. whether the current process is the\nvisualization process or the insitu process.\n"},
  {(char*)"GetProcessTypeMaxValue", PyvtkLiveInsituLink_GetProcessTypeMaxValue, METH_VARARGS,
   (char*)"V.GetProcessTypeMaxValue() -> int\nC++: int GetProcessTypeMaxValue()\n\nSet/Get the link type i.e. whether the current process is the\nvisualization process or the insitu process.\n"},
  {(char*)"GetProcessType", PyvtkLiveInsituLink_GetProcessType, METH_VARARGS,
   (char*)"V.GetProcessType() -> int\nC++: int GetProcessType()\n\nSet/Get the link type i.e. whether the current process is the\nvisualization process or the insitu process.\n"},
  {(char*)"SetProxyId", PyvtkLiveInsituLink_SetProxyId, METH_VARARGS,
   (char*)"V.SetProxyId(int)\nC++: void SetProxyId(unsigned int a)\n\nWhen instantiated on the ParaView visualization server side using\na vtkSMProxy, ProxyId is used to identify the proxy corresponding\nto this instance. That helps us construct notification messages\nthat the visualization server can send to the client.\n"},
  {(char*)"GetProxyId", PyvtkLiveInsituLink_GetProxyId, METH_VARARGS,
   (char*)"V.GetProxyId() -> int\nC++: unsigned int GetProxyId()\n\nWhen instantiated on the ParaView visualization server side using\na vtkSMProxy, ProxyId is used to identify the proxy corresponding\nto this instance. That helps us construct notification messages\nthat the visualization server can send to the client.\n"},
  {(char*)"GetSimulationPaused", PyvtkLiveInsituLink_GetSimulationPaused, METH_VARARGS,
   (char*)"V.GetSimulationPaused() -> int\nC++: int GetSimulationPaused()\n\n'SimulationPaused' is set/reset on Paraview Live and sent to\nInsitu every time step.\n"},
  {(char*)"SetSimulationPaused", PyvtkLiveInsituLink_SetSimulationPaused, METH_VARARGS,
   (char*)"V.SetSimulationPaused(int)\nC++: void SetSimulationPaused(int paused)\n\n'SimulationPaused' is set/reset on Paraview Live and sent to\nInsitu every time step.\n"},
  {(char*)"Initialize", PyvtkLiveInsituLink_Initialize, METH_VARARGS,
   (char*)"V.Initialize()\nC++: void Initialize()\nV.Initialize(vtkSMSessionProxyManager)\nC++: void Initialize(vtkSMSessionProxyManager *)\n\nInitializes the link.\n"},
  {(char*)"InsituInitialize", PyvtkLiveInsituLink_InsituInitialize, METH_VARARGS,
   (char*)"V.InsituInitialize(vtkSMSessionProxyManager)\nC++: void InsituInitialize(vtkSMSessionProxyManager *pxm)\n\nMust be called at the beginning with the proxy manager.\nvtkLiveInsituLink makes an attempt to connect to ParaView, \nhowever that attempt may fail if ParaView is not yet ready to\naccept connections. In that case, vtkLiveInsituLink will make an\nattempt to connect on every subsequent InsituUpdate() call.\n"},
  {(char*)"InsituUpdate", PyvtkLiveInsituLink_InsituUpdate, METH_VARARGS,
   (char*)"V.InsituUpdate(float, int)\nC++: void InsituUpdate(double time, vtkIdType timeStep)\n\nEvery time Insitu is ready to communicate with ParaView\nvisualization engine call this method. The goal of this call is\ntoo get the latest updates from ParaView including changes to\nstate for the co-processing pipeline or changes in what extract\nthe visualization engine is expecting. This method's primary goal\nis to obtain information from ParaView vis engine. If no active\nconnection to ParaView visualization engine exists, this will\nmake an attempt to connect to ParaView.\n"},
  {(char*)"InsituPostProcess", PyvtkLiveInsituLink_InsituPostProcess, METH_VARARGS,
   (char*)"V.InsituPostProcess(float, int)\nC++: void InsituPostProcess(double time, vtkIdType timeStep)\n\nEvery time Insitu is ready to push extracts to ParaView\nvisualization engine, call this method. If no active ParaView\nvisualization engine connection exists (or the connection dies),\nthen this method does nothing (besides some bookkeeping). \nOtherwise, this will push any extracts requested to the ParaView\nvisualization engine.\n"},
  {(char*)"WaitForLiveChange", PyvtkLiveInsituLink_WaitForLiveChange, METH_VARARGS,
   (char*)"V.WaitForLiveChange() -> int\nC++: int WaitForLiveChange()\n\nis called on the catalyst side. Insitu stops until the pipeline\nis edited, an extract is added or removed or the user continues\nthe simulation. Returns != 0 if the visualization side\ndisconnected, 0 otherwise\n"},
  {(char*)"OnLiveChanged", PyvtkLiveInsituLink_OnLiveChanged, METH_VARARGS,
   (char*)"V.OnLiveChanged()\nC++: void OnLiveChanged()\n\n"},
  {(char*)"RegisterExtract", PyvtkLiveInsituLink_RegisterExtract, METH_VARARGS,
   (char*)"V.RegisterExtract(vtkTrivialProducer, string, string, int)\nC++: void RegisterExtract(vtkTrivialProducer *producer,\n    const char *groupname, const char *proxyname, int portnumber)\n\n"},
  {(char*)"UnRegisterExtract", PyvtkLiveInsituLink_UnRegisterExtract, METH_VARARGS,
   (char*)"V.UnRegisterExtract(vtkTrivialProducer)\nC++: void UnRegisterExtract(vtkTrivialProducer *producer)\n\n"},
  {(char*)"OnInsituUpdate", PyvtkLiveInsituLink_OnInsituUpdate, METH_VARARGS,
   (char*)"V.OnInsituUpdate(float, int)\nC++: void OnInsituUpdate(double time, vtkIdType timeStep)\n\n"},
  {(char*)"OnInsituPostProcess", PyvtkLiveInsituLink_OnInsituPostProcess, METH_VARARGS,
   (char*)"V.OnInsituPostProcess(float, int)\nC++: void OnInsituPostProcess(double time, vtkIdType timeStep)\n\n"},
  {(char*)"LiveChanged", PyvtkLiveInsituLink_LiveChanged, METH_VARARGS,
   (char*)"V.LiveChanged()\nC++: void LiveChanged()\n\nSignal a change on the ParaView Live side and transmit it to the\nInsitu side. This is called when the state or extracts are\nchanged or when the simulation is continued.\n"},
  {(char*)"UpdateInsituXMLState", PyvtkLiveInsituLink_UpdateInsituXMLState, METH_VARARGS,
   (char*)"V.UpdateInsituXMLState(string)\nC++: void UpdateInsituXMLState(const char *txt)\n\n"},
  {(char*)"FilterXMLState", PyvtkLiveInsituLink_FilterXMLState, METH_VARARGS | METH_STATIC,
   (char*)"V.FilterXMLState(vtkPVXMLElement) -> bool\nC++: static bool FilterXMLState(vtkPVXMLElement *xmlState)\n\nThis method will remove references to proxy that shouldn't be\nshared with ParaView Return true if something has been removed\n"},
  {(char*)"InsituConnect", PyvtkLiveInsituLink_InsituConnect, METH_VARARGS,
   (char*)"V.InsituConnect(vtkMultiProcessController)\nC++: void InsituConnect(vtkMultiProcessController *controller)\n\n"},
  {(char*)"DropLiveInsituConnection", PyvtkLiveInsituLink_DropLiveInsituConnection, METH_VARARGS,
   (char*)"V.DropLiveInsituConnection()\nC++: void DropLiveInsituConnection()\n\nCalled to drop the connection between Insitu and ParaView Live.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkLiveInsituLink_StaticNew()
{
  return vtkLiveInsituLink::New();
}

PyObject *PyVTKClass_vtkLiveInsituLinkNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkLiveInsituLink_StaticNew,
    PyvtkLiveInsituLink_Methods,
    "vtkLiveInsituLink", modulename,
    NULL, NULL,
    PyvtkLiveInsituLink_Doc(),
    PyVTKClass_vtkSMObjectNew(modulename));

  if (cls)
    {
    PyObject *d = PyVTKClass_GetDict(cls);
    PyObject *o;

    PyType_Ready(&PyvtkLiveInsituLink_NotificationTags_Type);
    PyvtkLiveInsituLink_NotificationTags_Type.tp_new = NULL;

    o = (PyObject *)&PyvtkLiveInsituLink_NotificationTags_Type;
    if (o && PyDict_SetItemString(d, (char *)"NotificationTags", o) != 0)
      {
      Py_DECREF(o);
      }

    for (int c = 0; c < 2; c++)
      {
      static const struct { const char *name; int value; }
        constants[2] = {
          { "LIVE", vtkLiveInsituLink::LIVE },
          { "INSITU", vtkLiveInsituLink::INSITU },
        };

      o = PyInt_FromLong(constants[c].value);
      if (o)
        {
        PyDict_SetItemString(d, (char *)constants[c].name, o);
        Py_DECREF(o);
        }
      }

    for (int c = 0; c < 3; c++)
      {
      typedef vtkLiveInsituLink::NotificationTags cxx_enum_type;

      static const struct { const char *name; cxx_enum_type value; }
        constants[3] = {
          { "CONNECTED", vtkLiveInsituLink::CONNECTED },
          { "NEXT_TIMESTEP_AVAILABLE", vtkLiveInsituLink::NEXT_TIMESTEP_AVAILABLE },
          { "DISCONNECTED", vtkLiveInsituLink::DISCONNECTED },
        };

      o = PyvtkLiveInsituLink_NotificationTags_FromEnum(constants[c].value);
      if (o)
        {
        PyDict_SetItemString(d, (char *)constants[c].name, o);
        Py_DECREF(o);
        }
      }

    }

  return cls;
}

const char **PyvtkLiveInsituLink_Doc()
{
  static const char *docstring[] = {
    "vtkLiveInsituLink - link for live-coprocessing.\n\n",
    "Superclass: vtkSMObject\n\n",
    "vtkLiveInsituLink manages the communication link between Insitu and\nLive visualization servers. vtkLiveInsituLink is created on both ends\nof the live-insitu channel i.e. in Insitu code (by instantiating\nvtkLiveInsituLink directly) and in the Live ParaView application (by\nusing a proxy that instantiates the vtkLiveInsituLink).@ingroup\nLiveInsitu\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkLiveInsituLink(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkLiveInsituLinkNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkLiveInsituLink", o) != 0)
    {
    Py_DECREF(o);
    }

}

