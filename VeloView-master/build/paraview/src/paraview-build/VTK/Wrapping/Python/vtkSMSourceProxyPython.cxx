// python wrapper for vtkSMSourceProxy
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkSMSourceProxy.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkSMSourceProxy(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkSMSourceProxyNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkSMProxyNew
extern "C" { PyObject *PyVTKClass_vtkSMProxyNew(const char *); }
#define DECLARED_PyVTKClass_vtkSMProxyNew
#endif

static const char **PyvtkSMSourceProxy_Doc();

#ifndef DECLARED_PyvtkSMSourceProxy_ProcessSupportType_Type
extern VTK_PYTHON_EXPORT PyTypeObject PyvtkSMSourceProxy_ProcessSupportType_Type;
#define DECLARED_PyvtkSMSourceProxy_ProcessSupportType_Type
#endif

PyTypeObject PyvtkSMSourceProxy_ProcessSupportType_Type = {
  PyObject_HEAD_INIT(&PyType_Type)
  0,
  (char*)"ProcessSupportType", // tp_name
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

PyObject *PyvtkSMSourceProxy_ProcessSupportType_FromEnum(int val)
{
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkSMSourceProxy_ProcessSupportType_Type);
  self->ob_ival = val;
  return (PyObject *)self;
}


static PyObject *
PyvtkSMSourceProxy_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSourceProxy *op = static_cast<vtkSMSourceProxy *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkSMSourceProxy::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMSourceProxy_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSourceProxy *op = static_cast<vtkSMSourceProxy *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSMSourceProxy::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMSourceProxy_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSourceProxy *op = static_cast<vtkSMSourceProxy *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkSMSourceProxy *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSMSourceProxy::NewInstance());

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
PyvtkSMSourceProxy_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkSMSourceProxy *tempr = vtkSMSourceProxy::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMSourceProxy_UpdatePipelineInformation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdatePipelineInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSourceProxy *op = static_cast<vtkSMSourceProxy *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->UpdatePipelineInformation();
      }
    else
      {
      op->vtkSMSourceProxy::UpdatePipelineInformation();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMSourceProxy_UpdatePipeline_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdatePipeline");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSourceProxy *op = static_cast<vtkSMSourceProxy *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->UpdatePipeline();
      }
    else
      {
      op->vtkSMSourceProxy::UpdatePipeline();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkSMSourceProxy_UpdatePipeline_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdatePipeline");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSourceProxy *op = static_cast<vtkSMSourceProxy *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->UpdatePipeline(temp0);
      }
    else
      {
      op->vtkSMSourceProxy::UpdatePipeline(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkSMSourceProxy_UpdatePipeline(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 0:
      return PyvtkSMSourceProxy_UpdatePipeline_s1(self, args);
    case 1:
      return PyvtkSMSourceProxy_UpdatePipeline_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "UpdatePipeline");
  return NULL;
}



static PyObject *
PyvtkSMSourceProxy_GetOutputPortsCreated(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputPortsCreated");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSourceProxy *op = static_cast<vtkSMSourceProxy *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetOutputPortsCreated() :
      op->vtkSMSourceProxy::GetOutputPortsCreated());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMSourceProxy_GetNumberOfOutputPorts(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfOutputPorts");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSourceProxy *op = static_cast<vtkSMSourceProxy *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned int tempr = (ap.IsBound() ?
      op->GetNumberOfOutputPorts() :
      op->vtkSMSourceProxy::GetNumberOfOutputPorts());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMSourceProxy_GetOutputPort_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputPort");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSourceProxy *op = static_cast<vtkSMSourceProxy *>(vp);

  unsigned int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkSMOutputPort *tempr = (ap.IsBound() ?
      op->GetOutputPort(temp0) :
      op->vtkSMSourceProxy::GetOutputPort(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkSMSourceProxy_GetOutputPort_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputPort");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSourceProxy *op = static_cast<vtkSMSourceProxy *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkSMOutputPort *tempr = (ap.IsBound() ?
      op->GetOutputPort(temp0) :
      op->vtkSMSourceProxy::GetOutputPort(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkSMSourceProxy_GetOutputPort_Methods[] = {
  {NULL, PyvtkSMSourceProxy_GetOutputPort_s1, METH_VARARGS,
   (char*)"@I"},
  {NULL, PyvtkSMSourceProxy_GetOutputPort_s2, METH_VARARGS,
   (char*)"@z"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkSMSourceProxy_GetOutputPort(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkSMSourceProxy_GetOutputPort_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetOutputPort");
  return NULL;
}



static PyObject *
PyvtkSMSourceProxy_GetOutputPortIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputPortIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSourceProxy *op = static_cast<vtkSMSourceProxy *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    unsigned int tempr = (ap.IsBound() ?
      op->GetOutputPortIndex(temp0) :
      op->vtkSMSourceProxy::GetOutputPortIndex(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMSourceProxy_GetOutputPortName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputPortName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSourceProxy *op = static_cast<vtkSMSourceProxy *>(vp);

  unsigned int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetOutputPortName(temp0) :
      op->vtkSMSourceProxy::GetOutputPortName(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMSourceProxy_GetOutputPortDocumentation_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputPortDocumentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSourceProxy *op = static_cast<vtkSMSourceProxy *>(vp);

  unsigned int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkSMDocumentation *tempr = (ap.IsBound() ?
      op->GetOutputPortDocumentation(temp0) :
      op->vtkSMSourceProxy::GetOutputPortDocumentation(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkSMSourceProxy_GetOutputPortDocumentation_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputPortDocumentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSourceProxy *op = static_cast<vtkSMSourceProxy *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkSMDocumentation *tempr = (ap.IsBound() ?
      op->GetOutputPortDocumentation(temp0) :
      op->vtkSMSourceProxy::GetOutputPortDocumentation(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkSMSourceProxy_GetOutputPortDocumentation_Methods[] = {
  {NULL, PyvtkSMSourceProxy_GetOutputPortDocumentation_s1, METH_VARARGS,
   (char*)"@I"},
  {NULL, PyvtkSMSourceProxy_GetOutputPortDocumentation_s2, METH_VARARGS,
   (char*)"@z"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkSMSourceProxy_GetOutputPortDocumentation(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkSMSourceProxy_GetOutputPortDocumentation_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetOutputPortDocumentation");
  return NULL;
}



static PyObject *
PyvtkSMSourceProxy_CreateOutputPorts(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateOutputPorts");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSourceProxy *op = static_cast<vtkSMSourceProxy *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->CreateOutputPorts();
      }
    else
      {
      op->vtkSMSourceProxy::CreateOutputPorts();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMSourceProxy_GetDataInformation_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSourceProxy *op = static_cast<vtkSMSourceProxy *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPVDataInformation *tempr = (ap.IsBound() ?
      op->GetDataInformation() :
      op->vtkSMSourceProxy::GetDataInformation());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkSMSourceProxy_GetDataInformation_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSourceProxy *op = static_cast<vtkSMSourceProxy *>(vp);

  unsigned int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkPVDataInformation *tempr = (ap.IsBound() ?
      op->GetDataInformation(temp0) :
      op->vtkSMSourceProxy::GetDataInformation(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkSMSourceProxy_GetDataInformation(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 0:
      return PyvtkSMSourceProxy_GetDataInformation_s1(self, args);
    case 1:
      return PyvtkSMSourceProxy_GetDataInformation_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetDataInformation");
  return NULL;
}



static PyObject *
PyvtkSMSourceProxy_CreateSelectionProxies(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateSelectionProxies");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSourceProxy *op = static_cast<vtkSMSourceProxy *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->CreateSelectionProxies();
      }
    else
      {
      op->vtkSMSourceProxy::CreateSelectionProxies();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMSourceProxy_SetSelectionInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSelectionInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSourceProxy *op = static_cast<vtkSMSourceProxy *>(vp);

  unsigned int temp0;
  vtkSMSourceProxy *temp1 = NULL;
  unsigned int temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkSMSourceProxy") &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      op->SetSelectionInput(temp0, temp1, temp2);
      }
    else
      {
      op->vtkSMSourceProxy::SetSelectionInput(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMSourceProxy_GetSelectionInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelectionInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSourceProxy *op = static_cast<vtkSMSourceProxy *>(vp);

  unsigned int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkSMSourceProxy *tempr = (ap.IsBound() ?
      op->GetSelectionInput(temp0) :
      op->vtkSMSourceProxy::GetSelectionInput(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMSourceProxy_GetSelectionInputPort(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelectionInputPort");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSourceProxy *op = static_cast<vtkSMSourceProxy *>(vp);

  unsigned int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    unsigned int tempr = (ap.IsBound() ?
      op->GetSelectionInputPort(temp0) :
      op->vtkSMSourceProxy::GetSelectionInputPort(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMSourceProxy_CleanSelectionInputs(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CleanSelectionInputs");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSourceProxy *op = static_cast<vtkSMSourceProxy *>(vp);

  unsigned int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->CleanSelectionInputs(temp0);
      }
    else
      {
      op->vtkSMSourceProxy::CleanSelectionInputs(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMSourceProxy_GetSelectionOutput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelectionOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSourceProxy *op = static_cast<vtkSMSourceProxy *>(vp);

  unsigned int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkSMSourceProxy *tempr = (ap.IsBound() ?
      op->GetSelectionOutput(temp0) :
      op->vtkSMSourceProxy::GetSelectionOutput(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMSourceProxy_GetProcessSupport(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProcessSupport");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSourceProxy *op = static_cast<vtkSMSourceProxy *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetProcessSupport() :
      op->vtkSMSourceProxy::GetProcessSupport());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMSourceProxy_GetMPIRequired(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMPIRequired");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSourceProxy *op = static_cast<vtkSMSourceProxy *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetMPIRequired() :
      op->vtkSMSourceProxy::GetMPIRequired());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMSourceProxy_GetNumberOfAlgorithmOutputPorts(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfAlgorithmOutputPorts");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSourceProxy *op = static_cast<vtkSMSourceProxy *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned int tempr = (ap.IsBound() ?
      op->GetNumberOfAlgorithmOutputPorts() :
      op->vtkSMSourceProxy::GetNumberOfAlgorithmOutputPorts());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMSourceProxy_GetNumberOfAlgorithmRequiredInputPorts(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfAlgorithmRequiredInputPorts");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSourceProxy *op = static_cast<vtkSMSourceProxy *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned int tempr = (ap.IsBound() ?
      op->GetNumberOfAlgorithmRequiredInputPorts() :
      op->vtkSMSourceProxy::GetNumberOfAlgorithmRequiredInputPorts());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMSourceProxy_GetGlobalID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGlobalID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSourceProxy *op = static_cast<vtkSMSourceProxy *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned int tempr = (ap.IsBound() ?
      op->GetGlobalID() :
      op->vtkSMSourceProxy::GetGlobalID());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMSourceProxy_MarkDirty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MarkDirty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSourceProxy *op = static_cast<vtkSMSourceProxy *>(vp);

  vtkSMProxy *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMProxy"))
    {
    if (ap.IsBound())
      {
      op->MarkDirty(temp0);
      }
    else
      {
      op->vtkSMSourceProxy::MarkDirty(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkSMSourceProxy_Methods[] = {
  {(char*)"GetClassName", PyvtkSMSourceProxy_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkSMSourceProxy_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkSMSourceProxy_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkSMSourceProxy\nC++: vtkSMSourceProxy *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkSMSourceProxy_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkSMSourceProxy\nC++: vtkSMSourceProxy *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"UpdatePipelineInformation", PyvtkSMSourceProxy_UpdatePipelineInformation, METH_VARARGS,
   (char*)"V.UpdatePipelineInformation()\nC++: virtual void UpdatePipelineInformation()\n\nCalls UpdateInformation() on all sources.\n"},
  {(char*)"UpdatePipeline", PyvtkSMSourceProxy_UpdatePipeline, METH_VARARGS,
   (char*)"V.UpdatePipeline()\nC++: virtual void UpdatePipeline()\nV.UpdatePipeline(float)\nC++: virtual void UpdatePipeline(double time)\n\nCalls Update() on all sources. It also creates output ports if\nthey are not already created.\n"},
  {(char*)"GetOutputPortsCreated", PyvtkSMSourceProxy_GetOutputPortsCreated, METH_VARARGS,
   (char*)"V.GetOutputPortsCreated() -> int\nC++: int GetOutputPortsCreated()\n\nReturns if the output port proxies have been created.\n"},
  {(char*)"GetNumberOfOutputPorts", PyvtkSMSourceProxy_GetNumberOfOutputPorts, METH_VARARGS,
   (char*)"V.GetNumberOfOutputPorts() -> int\nC++: virtual unsigned int GetNumberOfOutputPorts()\n\nReturn the number of output ports.\n"},
  {(char*)"GetOutputPort", PyvtkSMSourceProxy_GetOutputPort, METH_VARARGS,
   (char*)"V.GetOutputPort(int) -> vtkSMOutputPort\nC++: virtual vtkSMOutputPort *GetOutputPort(unsigned int idx)\nV.GetOutputPort(string) -> vtkSMOutputPort\nC++: virtual vtkSMOutputPort *GetOutputPort(const char *portname)\n\nReturn an output port.\n"},
  {(char*)"GetOutputPortIndex", PyvtkSMSourceProxy_GetOutputPortIndex, METH_VARARGS,
   (char*)"V.GetOutputPortIndex(string) -> int\nC++: virtual unsigned int GetOutputPortIndex(const char *portname)\n\nReturns the port index, given the name of an output port. Each\noutput port is assigned a unique name (either using the xml\nconfiguration or automatically). The automatically assigned names\nare of the type Output0, Output1 etc. Returns\nVTK_UNSIGNED_INT_MAX (i.e. ~0u) when a port with given port name\ndoes not exist.\n"},
  {(char*)"GetOutputPortName", PyvtkSMSourceProxy_GetOutputPortName, METH_VARARGS,
   (char*)"V.GetOutputPortName(int) -> string\nC++: virtual const char *GetOutputPortName(unsigned int index)\n\nReturns the output port name given its index. Each output port is\nassigned an unique name (either using the xml configuration or\nautomatically). The automatically assigned names are of the type\nOutput-0, Output-1 etc.\n"},
  {(char*)"GetOutputPortDocumentation", PyvtkSMSourceProxy_GetOutputPortDocumentation, METH_VARARGS,
   (char*)"V.GetOutputPortDocumentation(int) -> vtkSMDocumentation\nC++: vtkSMDocumentation *GetOutputPortDocumentation(\n    unsigned int index)\nV.GetOutputPortDocumentation(string) -> vtkSMDocumentation\nC++: vtkSMDocumentation *GetOutputPortDocumentation(\n    const char *portname)\n\nIt is possible to provide some documentation for each output port\nin the configuraton xml. These methods provide access to the port\nspecific documentation, if any. If no documentation is present,\nthese methods will return 0.\n"},
  {(char*)"CreateOutputPorts", PyvtkSMSourceProxy_CreateOutputPorts, METH_VARARGS,
   (char*)"V.CreateOutputPorts()\nC++: virtual void CreateOutputPorts()\n\nCreates the output port proxies for this filter. Each output port\nproxy corresponds to an actual output port on the algorithm.\n"},
  {(char*)"GetDataInformation", PyvtkSMSourceProxy_GetDataInformation, METH_VARARGS,
   (char*)"V.GetDataInformation() -> vtkPVDataInformation\nC++: vtkPVDataInformation *GetDataInformation()\nV.GetDataInformation(int) -> vtkPVDataInformation\nC++: vtkPVDataInformation *GetDataInformation(\n    unsigned int outputIdx)\n\nDataInformation is used by the source proxy to obtain information\non the output(s) from the server. If update is false the pipeline\nwill not be updated before gathering the data information.\n"},
  {(char*)"CreateSelectionProxies", PyvtkSMSourceProxy_CreateSelectionProxies, METH_VARARGS,
   (char*)"V.CreateSelectionProxies()\nC++: virtual void CreateSelectionProxies()\n\nCreates extract selection proxies for each output port if not\nalready created.\n"},
  {(char*)"SetSelectionInput", PyvtkSMSourceProxy_SetSelectionInput, METH_VARARGS,
   (char*)"V.SetSelectionInput(int, vtkSMSourceProxy, int)\nC++: void SetSelectionInput(unsigned int portIndex,\n    vtkSMSourceProxy *input, unsigned int outputPort)\n\nSet/Get the selection input. This is used to set the selection\ninput to the extarction proxy for the output port identified by\nportIndex. If no extraction proxies are present, this method has\nno effect.\n"},
  {(char*)"GetSelectionInput", PyvtkSMSourceProxy_GetSelectionInput, METH_VARARGS,
   (char*)"V.GetSelectionInput(int) -> vtkSMSourceProxy\nC++: vtkSMSourceProxy *GetSelectionInput(unsigned int portIndex)\n\nAPI to query selection input set using SetSelectionInput.\n"},
  {(char*)"GetSelectionInputPort", PyvtkSMSourceProxy_GetSelectionInputPort, METH_VARARGS,
   (char*)"V.GetSelectionInputPort(int) -> int\nC++: unsigned int GetSelectionInputPort(unsigned int portIndex)\n\nAPI to query selection input set using SetSelectionInput.\n"},
  {(char*)"CleanSelectionInputs", PyvtkSMSourceProxy_CleanSelectionInputs, METH_VARARGS,
   (char*)"V.CleanSelectionInputs(int)\nC++: void CleanSelectionInputs(unsigned int portIndex)\n\nClean all selection inputs for the given port.\n"},
  {(char*)"GetSelectionOutput", PyvtkSMSourceProxy_GetSelectionOutput, METH_VARARGS,
   (char*)"V.GetSelectionOutput(int) -> vtkSMSourceProxy\nC++: vtkSMSourceProxy *GetSelectionOutput(unsigned int portIndex)\n\nReturns the source proxy which provides the selected data from\nthe given output port.\n"},
  {(char*)"GetProcessSupport", PyvtkSMSourceProxy_GetProcessSupport, METH_VARARGS,
   (char*)"V.GetProcessSupport() -> int\nC++: int GetProcessSupport()\n\nThis returns information about whether the VTK algorithm supports\nmultiple processes or not. SINGLE_PROCESS means that this\nalgorithm works only in serial, MULTIPLE_PROCESSES means that it\nwill only useful in parallel (or it is useless in serial), BOTH\nmeans both :-) Default is BOTH. This ivar is filled from the xml\nconfiguration. This variable should not be used to determine if\nMPI is initialized. Instead use MPISupport for that.\n"},
  {(char*)"GetMPIRequired", PyvtkSMSourceProxy_GetMPIRequired, METH_VARARGS,
   (char*)"V.GetMPIRequired() -> bool\nC++: bool GetMPIRequired()\n\nThis returns information about whether the VTK algorithm\nexplicitly needs MPI to be initialized. It still may only run\nwith a single process. An example of this is a reader that uses\nMPI IO routines.\n"},
  {(char*)"GetNumberOfAlgorithmOutputPorts", PyvtkSMSourceProxy_GetNumberOfAlgorithmOutputPorts, METH_VARARGS,
   (char*)"V.GetNumberOfAlgorithmOutputPorts() -> int\nC++: unsigned int GetNumberOfAlgorithmOutputPorts()\n\nReturns the number of output ports provided by the algorithm.\n"},
  {(char*)"GetNumberOfAlgorithmRequiredInputPorts", PyvtkSMSourceProxy_GetNumberOfAlgorithmRequiredInputPorts, METH_VARARGS,
   (char*)"V.GetNumberOfAlgorithmRequiredInputPorts() -> int\nC++: virtual unsigned int GetNumberOfAlgorithmRequiredInputPorts()\n\nReturns the number of non-optional input ports required by the\nalgorithm. This value is cached after the first call.\n"},
  {(char*)"GetGlobalID", PyvtkSMSourceProxy_GetGlobalID, METH_VARARGS,
   (char*)"V.GetGlobalID() -> int\nC++: virtual vtkTypeUInt32 GetGlobalID()\n\nOverridden to reserve additional IDs for use by\n\"ExtractSelection\" proxies.\n"},
  {(char*)"MarkDirty", PyvtkSMSourceProxy_MarkDirty, METH_VARARGS,
   (char*)"V.MarkDirty(vtkSMProxy)\nC++: virtual void MarkDirty(vtkSMProxy *modifiedProxy)\n\nMarks the selection proxies dirty as well as chain to superclass.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkSMSourceProxy_StaticNew()
{
  return vtkSMSourceProxy::New();
}

PyObject *PyVTKClass_vtkSMSourceProxyNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkSMSourceProxy_StaticNew,
    PyvtkSMSourceProxy_Methods,
    "vtkSMSourceProxy", modulename,
    NULL, NULL,
    PyvtkSMSourceProxy_Doc(),
    PyVTKClass_vtkSMProxyNew(modulename));

  if (cls)
    {
    PyObject *d = PyVTKClass_GetDict(cls);
    PyObject *o;

    PyType_Ready(&PyvtkSMSourceProxy_ProcessSupportType_Type);
    PyvtkSMSourceProxy_ProcessSupportType_Type.tp_new = NULL;

    o = (PyObject *)&PyvtkSMSourceProxy_ProcessSupportType_Type;
    if (o && PyDict_SetItemString(d, (char *)"ProcessSupportType", o) != 0)
      {
      Py_DECREF(o);
      }

    for (int c = 0; c < 3; c++)
      {
      typedef vtkSMSourceProxy::ProcessSupportType cxx_enum_type;

      static const struct { const char *name; cxx_enum_type value; }
        constants[3] = {
          { "SINGLE_PROCESS", vtkSMSourceProxy::SINGLE_PROCESS },
          { "MULTIPLE_PROCESSES", vtkSMSourceProxy::MULTIPLE_PROCESSES },
          { "BOTH", vtkSMSourceProxy::BOTH },
        };

      o = PyvtkSMSourceProxy_ProcessSupportType_FromEnum(constants[c].value);
      if (o)
        {
        PyDict_SetItemString(d, (char *)constants[c].name, o);
        Py_DECREF(o);
        }
      }

    }

  return cls;
}

const char **PyvtkSMSourceProxy_Doc()
{
  static const char *docstring[] = {
    "vtkSMSourceProxy - proxy for a VTK source on a server\n\n",
    "Superclass: vtkSMProxy\n\n",
    "vtkSMSourceProxy manages VTK source(s) that are created on a server\nusing the proxy pattern. In addition to functionality provided by\nvtkSMProxy, vtkSMSourceProxy provides method to connect and update\nsources. Each source proxy has one or more output ports\n(vtkSMOutputPort). Each port represents one output of one filter.\nThese are created automatically (when CreateOutputPorts() is called)\nby the s",
    "ource. Each vtkSMSourceProxy creates a property called\nDataInformation. This property is a composite property that provides\ninformation about the output(s) of the VTK sources (obtained from the\nserver)\n\nSee Also:\n\nvtkSMProxy vtkSMOutputPort vtkSMInputProperty\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkSMSourceProxy(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkSMSourceProxyNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkSMSourceProxy", o) != 0)
    {
    Py_DECREF(o);
    }

}

