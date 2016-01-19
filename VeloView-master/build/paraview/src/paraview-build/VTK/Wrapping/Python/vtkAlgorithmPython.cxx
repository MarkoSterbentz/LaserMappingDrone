// python wrapper for vtkAlgorithm
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkInformationVector.h"
#include "vtkAlgorithm.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkAlgorithm(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkAlgorithmNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkAlgorithm_Doc();

#ifndef DECLARED_PyvtkAlgorithm_DesiredOutputPrecision_Type
extern VTK_PYTHON_EXPORT PyTypeObject PyvtkAlgorithm_DesiredOutputPrecision_Type;
#define DECLARED_PyvtkAlgorithm_DesiredOutputPrecision_Type
#endif

PyTypeObject PyvtkAlgorithm_DesiredOutputPrecision_Type = {
  PyObject_HEAD_INIT(&PyType_Type)
  0,
  (char*)"DesiredOutputPrecision", // tp_name
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

PyObject *PyvtkAlgorithm_DesiredOutputPrecision_FromEnum(int val)
{
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkAlgorithm_DesiredOutputPrecision_Type);
  self->ob_ival = val;
  return (PyObject *)self;
}


static PyObject *
PyvtkAlgorithm_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAlgorithm *op = static_cast<vtkAlgorithm *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkAlgorithm::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAlgorithm_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAlgorithm *op = static_cast<vtkAlgorithm *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkAlgorithm::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAlgorithm_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAlgorithm *op = static_cast<vtkAlgorithm *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkAlgorithm *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkAlgorithm::NewInstance());

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
PyvtkAlgorithm_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkAlgorithm *tempr = vtkAlgorithm::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAlgorithm_HasExecutive(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasExecutive");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAlgorithm *op = static_cast<vtkAlgorithm *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->HasExecutive() :
      op->vtkAlgorithm::HasExecutive());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAlgorithm_GetExecutive(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetExecutive");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAlgorithm *op = static_cast<vtkAlgorithm *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkExecutive *tempr = (ap.IsBound() ?
      op->GetExecutive() :
      op->vtkAlgorithm::GetExecutive());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAlgorithm_SetExecutive(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExecutive");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAlgorithm *op = static_cast<vtkAlgorithm *>(vp);

  vtkExecutive *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkExecutive"))
    {
    if (ap.IsBound())
      {
      op->SetExecutive(temp0);
      }
    else
      {
      op->vtkAlgorithm::SetExecutive(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAlgorithm_ProcessRequest(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ProcessRequest");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAlgorithm *op = static_cast<vtkAlgorithm *>(vp);

  vtkInformation *temp0 = NULL;
  vtkCollection *temp1 = NULL;
  vtkInformationVector *temp2 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkInformation") &&
      ap.GetVTKObject(temp1, "vtkCollection") &&
      ap.GetVTKObject(temp2, "vtkInformationVector"))
    {
    int tempr = (ap.IsBound() ?
      op->ProcessRequest(temp0, temp1, temp2) :
      op->vtkAlgorithm::ProcessRequest(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAlgorithm_ModifyRequest(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ModifyRequest");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAlgorithm *op = static_cast<vtkAlgorithm *>(vp);

  vtkInformation *temp0 = NULL;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkInformation") &&
      ap.GetValue(temp1))
    {
    int tempr = (ap.IsBound() ?
      op->ModifyRequest(temp0, temp1) :
      op->vtkAlgorithm::ModifyRequest(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAlgorithm_GetInputPortInformation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInputPortInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAlgorithm *op = static_cast<vtkAlgorithm *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkInformation *tempr = (ap.IsBound() ?
      op->GetInputPortInformation(temp0) :
      op->vtkAlgorithm::GetInputPortInformation(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAlgorithm_GetOutputPortInformation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputPortInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAlgorithm *op = static_cast<vtkAlgorithm *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkInformation *tempr = (ap.IsBound() ?
      op->GetOutputPortInformation(temp0) :
      op->vtkAlgorithm::GetOutputPortInformation(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAlgorithm_GetInformation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAlgorithm *op = static_cast<vtkAlgorithm *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkInformation *tempr = (ap.IsBound() ?
      op->GetInformation() :
      op->vtkAlgorithm::GetInformation());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAlgorithm_SetInformation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAlgorithm *op = static_cast<vtkAlgorithm *>(vp);

  vtkInformation *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformation"))
    {
    if (ap.IsBound())
      {
      op->SetInformation(temp0);
      }
    else
      {
      op->vtkAlgorithm::SetInformation(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAlgorithm_GetNumberOfInputPorts(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfInputPorts");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAlgorithm *op = static_cast<vtkAlgorithm *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfInputPorts() :
      op->vtkAlgorithm::GetNumberOfInputPorts());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAlgorithm_GetNumberOfOutputPorts(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfOutputPorts");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAlgorithm *op = static_cast<vtkAlgorithm *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfOutputPorts() :
      op->vtkAlgorithm::GetNumberOfOutputPorts());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAlgorithm_SetAbortExecute(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAbortExecute");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAlgorithm *op = static_cast<vtkAlgorithm *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetAbortExecute(temp0);
      }
    else
      {
      op->vtkAlgorithm::SetAbortExecute(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAlgorithm_GetAbortExecute(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAbortExecute");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAlgorithm *op = static_cast<vtkAlgorithm *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetAbortExecute() :
      op->vtkAlgorithm::GetAbortExecute());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAlgorithm_AbortExecuteOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AbortExecuteOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAlgorithm *op = static_cast<vtkAlgorithm *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->AbortExecuteOn();
      }
    else
      {
      op->vtkAlgorithm::AbortExecuteOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAlgorithm_AbortExecuteOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AbortExecuteOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAlgorithm *op = static_cast<vtkAlgorithm *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->AbortExecuteOff();
      }
    else
      {
      op->vtkAlgorithm::AbortExecuteOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAlgorithm_SetProgress(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetProgress");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAlgorithm *op = static_cast<vtkAlgorithm *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetProgress(temp0);
      }
    else
      {
      op->vtkAlgorithm::SetProgress(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAlgorithm_GetProgressMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProgressMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAlgorithm *op = static_cast<vtkAlgorithm *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetProgressMinValue() :
      op->vtkAlgorithm::GetProgressMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAlgorithm_GetProgressMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProgressMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAlgorithm *op = static_cast<vtkAlgorithm *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetProgressMaxValue() :
      op->vtkAlgorithm::GetProgressMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAlgorithm_GetProgress(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProgress");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAlgorithm *op = static_cast<vtkAlgorithm *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetProgress() :
      op->vtkAlgorithm::GetProgress());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAlgorithm_UpdateProgress(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateProgress");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAlgorithm *op = static_cast<vtkAlgorithm *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->UpdateProgress(temp0);
      }
    else
      {
      op->vtkAlgorithm::UpdateProgress(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAlgorithm_SetProgressText(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetProgressText");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAlgorithm *op = static_cast<vtkAlgorithm *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetProgressText(temp0);
      }
    else
      {
      op->vtkAlgorithm::SetProgressText(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAlgorithm_GetProgressText(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProgressText");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAlgorithm *op = static_cast<vtkAlgorithm *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetProgressText() :
      op->vtkAlgorithm::GetProgressText());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAlgorithm_GetErrorCode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetErrorCode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAlgorithm *op = static_cast<vtkAlgorithm *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned long tempr = (ap.IsBound() ?
      op->GetErrorCode() :
      op->vtkAlgorithm::GetErrorCode());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAlgorithm_INPUT_IS_OPTIONAL(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "INPUT_IS_OPTIONAL");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkInformationIntegerKey *tempr = vtkAlgorithm::INPUT_IS_OPTIONAL();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAlgorithm_INPUT_IS_REPEATABLE(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "INPUT_IS_REPEATABLE");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkInformationIntegerKey *tempr = vtkAlgorithm::INPUT_IS_REPEATABLE();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAlgorithm_INPUT_REQUIRED_FIELDS(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "INPUT_REQUIRED_FIELDS");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkInformationInformationVectorKey *tempr = vtkAlgorithm::INPUT_REQUIRED_FIELDS();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAlgorithm_INPUT_REQUIRED_DATA_TYPE(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "INPUT_REQUIRED_DATA_TYPE");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkInformationStringVectorKey *tempr = vtkAlgorithm::INPUT_REQUIRED_DATA_TYPE();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAlgorithm_INPUT_ARRAYS_TO_PROCESS(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "INPUT_ARRAYS_TO_PROCESS");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkInformationInformationVectorKey *tempr = vtkAlgorithm::INPUT_ARRAYS_TO_PROCESS();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAlgorithm_INPUT_PORT(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "INPUT_PORT");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkInformationIntegerKey *tempr = vtkAlgorithm::INPUT_PORT();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAlgorithm_INPUT_CONNECTION(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "INPUT_CONNECTION");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkInformationIntegerKey *tempr = vtkAlgorithm::INPUT_CONNECTION();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAlgorithm_CAN_PRODUCE_SUB_EXTENT(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "CAN_PRODUCE_SUB_EXTENT");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkInformationIntegerKey *tempr = vtkAlgorithm::CAN_PRODUCE_SUB_EXTENT();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAlgorithm_CAN_HANDLE_PIECE_REQUEST(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "CAN_HANDLE_PIECE_REQUEST");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkInformationIntegerKey *tempr = vtkAlgorithm::CAN_HANDLE_PIECE_REQUEST();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAlgorithm_SetInputArrayToProcess_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputArrayToProcess");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAlgorithm *op = static_cast<vtkAlgorithm *>(vp);

  int temp0;
  int temp1;
  int temp2;
  int temp3;
  char *temp4 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(5) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4))
    {
    if (ap.IsBound())
      {
      op->SetInputArrayToProcess(temp0, temp1, temp2, temp3, temp4);
      }
    else
      {
      op->vtkAlgorithm::SetInputArrayToProcess(temp0, temp1, temp2, temp3, temp4);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkAlgorithm_SetInputArrayToProcess_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputArrayToProcess");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAlgorithm *op = static_cast<vtkAlgorithm *>(vp);

  int temp0;
  int temp1;
  int temp2;
  int temp3;
  int temp4;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(5) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4))
    {
    if (ap.IsBound())
      {
      op->SetInputArrayToProcess(temp0, temp1, temp2, temp3, temp4);
      }
    else
      {
      op->vtkAlgorithm::SetInputArrayToProcess(temp0, temp1, temp2, temp3, temp4);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkAlgorithm_SetInputArrayToProcess_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputArrayToProcess");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAlgorithm *op = static_cast<vtkAlgorithm *>(vp);

  int temp0;
  vtkInformation *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkInformation"))
    {
    if (ap.IsBound())
      {
      op->SetInputArrayToProcess(temp0, temp1);
      }
    else
      {
      op->vtkAlgorithm::SetInputArrayToProcess(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkAlgorithm_SetInputArrayToProcess_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputArrayToProcess");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAlgorithm *op = static_cast<vtkAlgorithm *>(vp);

  int temp0;
  int temp1;
  int temp2;
  char *temp3 = NULL;
  char *temp4 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(5) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4))
    {
    if (ap.IsBound())
      {
      op->SetInputArrayToProcess(temp0, temp1, temp2, temp3, temp4);
      }
    else
      {
      op->vtkAlgorithm::SetInputArrayToProcess(temp0, temp1, temp2, temp3, temp4);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkAlgorithm_SetInputArrayToProcess_Methods[] = {
  {NULL, PyvtkAlgorithm_SetInputArrayToProcess_s1, METH_VARARGS,
   (char*)"@iiiiz"},
  {NULL, PyvtkAlgorithm_SetInputArrayToProcess_s2, METH_VARARGS,
   (char*)"@iiiii"},
  {NULL, PyvtkAlgorithm_SetInputArrayToProcess_s4, METH_VARARGS,
   (char*)"@iiizz"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkAlgorithm_SetInputArrayToProcess(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkAlgorithm_SetInputArrayToProcess_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkAlgorithm_SetInputArrayToProcess_s3(self, args);
    case 5:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetInputArrayToProcess");
  return NULL;
}



static PyObject *
PyvtkAlgorithm_GetInputArrayInformation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInputArrayInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAlgorithm *op = static_cast<vtkAlgorithm *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkInformation *tempr = (ap.IsBound() ?
      op->GetInputArrayInformation(temp0) :
      op->vtkAlgorithm::GetInputArrayInformation(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAlgorithm_RemoveAllInputs(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveAllInputs");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAlgorithm *op = static_cast<vtkAlgorithm *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->RemoveAllInputs();
      }
    else
      {
      op->vtkAlgorithm::RemoveAllInputs();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAlgorithm_GetOutputDataObject(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputDataObject");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAlgorithm *op = static_cast<vtkAlgorithm *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkDataObject *tempr = (ap.IsBound() ?
      op->GetOutputDataObject(temp0) :
      op->vtkAlgorithm::GetOutputDataObject(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAlgorithm_GetInputDataObject(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInputDataObject");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAlgorithm *op = static_cast<vtkAlgorithm *>(vp);

  int temp0;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    vtkDataObject *tempr = (ap.IsBound() ?
      op->GetInputDataObject(temp0, temp1) :
      op->vtkAlgorithm::GetInputDataObject(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAlgorithm_SetInputConnection_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAlgorithm *op = static_cast<vtkAlgorithm *>(vp);

  int temp0;
  vtkAlgorithmOutput *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkAlgorithmOutput"))
    {
    if (ap.IsBound())
      {
      op->SetInputConnection(temp0, temp1);
      }
    else
      {
      op->vtkAlgorithm::SetInputConnection(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkAlgorithm_SetInputConnection_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAlgorithm *op = static_cast<vtkAlgorithm *>(vp);

  vtkAlgorithmOutput *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAlgorithmOutput"))
    {
    if (ap.IsBound())
      {
      op->SetInputConnection(temp0);
      }
    else
      {
      op->vtkAlgorithm::SetInputConnection(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkAlgorithm_SetInputConnection(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkAlgorithm_SetInputConnection_s1(self, args);
    case 1:
      return PyvtkAlgorithm_SetInputConnection_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetInputConnection");
  return NULL;
}



static PyObject *
PyvtkAlgorithm_AddInputConnection_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddInputConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAlgorithm *op = static_cast<vtkAlgorithm *>(vp);

  int temp0;
  vtkAlgorithmOutput *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkAlgorithmOutput"))
    {
    if (ap.IsBound())
      {
      op->AddInputConnection(temp0, temp1);
      }
    else
      {
      op->vtkAlgorithm::AddInputConnection(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkAlgorithm_AddInputConnection_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddInputConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAlgorithm *op = static_cast<vtkAlgorithm *>(vp);

  vtkAlgorithmOutput *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAlgorithmOutput"))
    {
    if (ap.IsBound())
      {
      op->AddInputConnection(temp0);
      }
    else
      {
      op->vtkAlgorithm::AddInputConnection(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkAlgorithm_AddInputConnection(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkAlgorithm_AddInputConnection_s1(self, args);
    case 1:
      return PyvtkAlgorithm_AddInputConnection_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "AddInputConnection");
  return NULL;
}



static PyObject *
PyvtkAlgorithm_RemoveInputConnection_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveInputConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAlgorithm *op = static_cast<vtkAlgorithm *>(vp);

  int temp0;
  vtkAlgorithmOutput *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkAlgorithmOutput"))
    {
    if (ap.IsBound())
      {
      op->RemoveInputConnection(temp0, temp1);
      }
    else
      {
      op->vtkAlgorithm::RemoveInputConnection(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkAlgorithm_RemoveInputConnection_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveInputConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAlgorithm *op = static_cast<vtkAlgorithm *>(vp);

  int temp0;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->RemoveInputConnection(temp0, temp1);
      }
    else
      {
      op->vtkAlgorithm::RemoveInputConnection(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkAlgorithm_RemoveInputConnection_Methods[] = {
  {NULL, PyvtkAlgorithm_RemoveInputConnection_s1, METH_VARARGS,
   (char*)"@iO *vtkAlgorithmOutput"},
  {NULL, PyvtkAlgorithm_RemoveInputConnection_s2, METH_VARARGS,
   (char*)"@ii"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkAlgorithm_RemoveInputConnection(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkAlgorithm_RemoveInputConnection_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "RemoveInputConnection");
  return NULL;
}



static PyObject *
PyvtkAlgorithm_RemoveAllInputConnections(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveAllInputConnections");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAlgorithm *op = static_cast<vtkAlgorithm *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->RemoveAllInputConnections(temp0);
      }
    else
      {
      op->vtkAlgorithm::RemoveAllInputConnections(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAlgorithm_SetInputDataObject_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputDataObject");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAlgorithm *op = static_cast<vtkAlgorithm *>(vp);

  int temp0;
  vtkDataObject *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkDataObject"))
    {
    if (ap.IsBound())
      {
      op->SetInputDataObject(temp0, temp1);
      }
    else
      {
      op->vtkAlgorithm::SetInputDataObject(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkAlgorithm_SetInputDataObject_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputDataObject");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAlgorithm *op = static_cast<vtkAlgorithm *>(vp);

  vtkDataObject *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataObject"))
    {
    if (ap.IsBound())
      {
      op->SetInputDataObject(temp0);
      }
    else
      {
      op->vtkAlgorithm::SetInputDataObject(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkAlgorithm_SetInputDataObject(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkAlgorithm_SetInputDataObject_s1(self, args);
    case 1:
      return PyvtkAlgorithm_SetInputDataObject_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetInputDataObject");
  return NULL;
}



static PyObject *
PyvtkAlgorithm_AddInputDataObject_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddInputDataObject");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAlgorithm *op = static_cast<vtkAlgorithm *>(vp);

  int temp0;
  vtkDataObject *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkDataObject"))
    {
    if (ap.IsBound())
      {
      op->AddInputDataObject(temp0, temp1);
      }
    else
      {
      op->vtkAlgorithm::AddInputDataObject(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkAlgorithm_AddInputDataObject_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddInputDataObject");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAlgorithm *op = static_cast<vtkAlgorithm *>(vp);

  vtkDataObject *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataObject"))
    {
    if (ap.IsBound())
      {
      op->AddInputDataObject(temp0);
      }
    else
      {
      op->vtkAlgorithm::AddInputDataObject(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkAlgorithm_AddInputDataObject(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkAlgorithm_AddInputDataObject_s1(self, args);
    case 1:
      return PyvtkAlgorithm_AddInputDataObject_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "AddInputDataObject");
  return NULL;
}



static PyObject *
PyvtkAlgorithm_GetOutputPort_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputPort");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAlgorithm *op = static_cast<vtkAlgorithm *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkAlgorithmOutput *tempr = (ap.IsBound() ?
      op->GetOutputPort(temp0) :
      op->vtkAlgorithm::GetOutputPort(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkAlgorithm_GetOutputPort_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputPort");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAlgorithm *op = static_cast<vtkAlgorithm *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkAlgorithmOutput *tempr = (ap.IsBound() ?
      op->GetOutputPort() :
      op->vtkAlgorithm::GetOutputPort());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkAlgorithm_GetOutputPort(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkAlgorithm_GetOutputPort_s1(self, args);
    case 0:
      return PyvtkAlgorithm_GetOutputPort_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetOutputPort");
  return NULL;
}



static PyObject *
PyvtkAlgorithm_GetNumberOfInputConnections(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfInputConnections");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAlgorithm *op = static_cast<vtkAlgorithm *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfInputConnections(temp0) :
      op->vtkAlgorithm::GetNumberOfInputConnections(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAlgorithm_GetTotalNumberOfInputConnections(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTotalNumberOfInputConnections");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAlgorithm *op = static_cast<vtkAlgorithm *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetTotalNumberOfInputConnections() :
      op->vtkAlgorithm::GetTotalNumberOfInputConnections());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAlgorithm_GetInputConnection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInputConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAlgorithm *op = static_cast<vtkAlgorithm *>(vp);

  int temp0;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    vtkAlgorithmOutput *tempr = (ap.IsBound() ?
      op->GetInputConnection(temp0, temp1) :
      op->vtkAlgorithm::GetInputConnection(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAlgorithm_GetInputAlgorithm_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInputAlgorithm");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAlgorithm *op = static_cast<vtkAlgorithm *>(vp);

  int temp0;
  int temp1;
  int temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    vtkAlgorithm *tempr = (ap.IsBound() ?
      op->GetInputAlgorithm(temp0, temp1, temp2) :
      op->vtkAlgorithm::GetInputAlgorithm(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
      {
      ap.SetArgValue(2, temp2);
      }
    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkAlgorithm_GetInputAlgorithm_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInputAlgorithm");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAlgorithm *op = static_cast<vtkAlgorithm *>(vp);

  int temp0;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    vtkAlgorithm *tempr = (ap.IsBound() ?
      op->GetInputAlgorithm(temp0, temp1) :
      op->vtkAlgorithm::GetInputAlgorithm(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkAlgorithm_GetInputAlgorithm_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInputAlgorithm");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAlgorithm *op = static_cast<vtkAlgorithm *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkAlgorithm *tempr = (ap.IsBound() ?
      op->GetInputAlgorithm() :
      op->vtkAlgorithm::GetInputAlgorithm());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkAlgorithm_GetInputAlgorithm(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkAlgorithm_GetInputAlgorithm_s1(self, args);
    case 2:
      return PyvtkAlgorithm_GetInputAlgorithm_s2(self, args);
    case 0:
      return PyvtkAlgorithm_GetInputAlgorithm_s3(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetInputAlgorithm");
  return NULL;
}



static PyObject *
PyvtkAlgorithm_GetInputExecutive_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInputExecutive");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAlgorithm *op = static_cast<vtkAlgorithm *>(vp);

  int temp0;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    vtkExecutive *tempr = (ap.IsBound() ?
      op->GetInputExecutive(temp0, temp1) :
      op->vtkAlgorithm::GetInputExecutive(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkAlgorithm_GetInputExecutive_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInputExecutive");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAlgorithm *op = static_cast<vtkAlgorithm *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkExecutive *tempr = (ap.IsBound() ?
      op->GetInputExecutive() :
      op->vtkAlgorithm::GetInputExecutive());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkAlgorithm_GetInputExecutive(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkAlgorithm_GetInputExecutive_s1(self, args);
    case 0:
      return PyvtkAlgorithm_GetInputExecutive_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetInputExecutive");
  return NULL;
}



static PyObject *
PyvtkAlgorithm_GetInputInformation_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInputInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAlgorithm *op = static_cast<vtkAlgorithm *>(vp);

  int temp0;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    vtkInformation *tempr = (ap.IsBound() ?
      op->GetInputInformation(temp0, temp1) :
      op->vtkAlgorithm::GetInputInformation(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkAlgorithm_GetInputInformation_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInputInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAlgorithm *op = static_cast<vtkAlgorithm *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkInformation *tempr = (ap.IsBound() ?
      op->GetInputInformation() :
      op->vtkAlgorithm::GetInputInformation());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkAlgorithm_GetInputInformation(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkAlgorithm_GetInputInformation_s1(self, args);
    case 0:
      return PyvtkAlgorithm_GetInputInformation_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetInputInformation");
  return NULL;
}



static PyObject *
PyvtkAlgorithm_GetOutputInformation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAlgorithm *op = static_cast<vtkAlgorithm *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkInformation *tempr = (ap.IsBound() ?
      op->GetOutputInformation(temp0) :
      op->vtkAlgorithm::GetOutputInformation(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAlgorithm_Update_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Update");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAlgorithm *op = static_cast<vtkAlgorithm *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->Update(temp0);
      }
    else
      {
      op->vtkAlgorithm::Update(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkAlgorithm_Update_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Update");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAlgorithm *op = static_cast<vtkAlgorithm *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Update();
      }
    else
      {
      op->vtkAlgorithm::Update();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkAlgorithm_Update(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkAlgorithm_Update_s1(self, args);
    case 0:
      return PyvtkAlgorithm_Update_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "Update");
  return NULL;
}



static PyObject *
PyvtkAlgorithm_UpdateInformation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAlgorithm *op = static_cast<vtkAlgorithm *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->UpdateInformation();
      }
    else
      {
      op->vtkAlgorithm::UpdateInformation();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAlgorithm_UpdateDataObject(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateDataObject");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAlgorithm *op = static_cast<vtkAlgorithm *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->UpdateDataObject();
      }
    else
      {
      op->vtkAlgorithm::UpdateDataObject();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAlgorithm_PropagateUpdateExtent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PropagateUpdateExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAlgorithm *op = static_cast<vtkAlgorithm *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->PropagateUpdateExtent();
      }
    else
      {
      op->vtkAlgorithm::PropagateUpdateExtent();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAlgorithm_UpdateWholeExtent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateWholeExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAlgorithm *op = static_cast<vtkAlgorithm *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->UpdateWholeExtent();
      }
    else
      {
      op->vtkAlgorithm::UpdateWholeExtent();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAlgorithm_ConvertTotalInputToPortConnection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ConvertTotalInputToPortConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAlgorithm *op = static_cast<vtkAlgorithm *>(vp);

  int temp0;
  int temp1;
  int temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      op->ConvertTotalInputToPortConnection(temp0, temp1, temp2);
      }
    else
      {
      op->vtkAlgorithm::ConvertTotalInputToPortConnection(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      ap.SetArgValue(1, temp1);
      }
    if (!ap.ErrorOccurred())
      {
      ap.SetArgValue(2, temp2);
      }
    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAlgorithm_SetReleaseDataFlag(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetReleaseDataFlag");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAlgorithm *op = static_cast<vtkAlgorithm *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetReleaseDataFlag(temp0);
      }
    else
      {
      op->vtkAlgorithm::SetReleaseDataFlag(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAlgorithm_GetReleaseDataFlag(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetReleaseDataFlag");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAlgorithm *op = static_cast<vtkAlgorithm *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetReleaseDataFlag() :
      op->vtkAlgorithm::GetReleaseDataFlag());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAlgorithm_ReleaseDataFlagOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseDataFlagOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAlgorithm *op = static_cast<vtkAlgorithm *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ReleaseDataFlagOn();
      }
    else
      {
      op->vtkAlgorithm::ReleaseDataFlagOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAlgorithm_ReleaseDataFlagOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseDataFlagOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAlgorithm *op = static_cast<vtkAlgorithm *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ReleaseDataFlagOff();
      }
    else
      {
      op->vtkAlgorithm::ReleaseDataFlagOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAlgorithm_UpdateExtentIsEmpty_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateExtentIsEmpty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAlgorithm *op = static_cast<vtkAlgorithm *>(vp);

  vtkInformation *temp0 = NULL;
  vtkDataObject *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkInformation") &&
      ap.GetVTKObject(temp1, "vtkDataObject"))
    {
    int tempr = (ap.IsBound() ?
      op->UpdateExtentIsEmpty(temp0, temp1) :
      op->vtkAlgorithm::UpdateExtentIsEmpty(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkAlgorithm_UpdateExtentIsEmpty_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateExtentIsEmpty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAlgorithm *op = static_cast<vtkAlgorithm *>(vp);

  vtkInformation *temp0 = NULL;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkInformation") &&
      ap.GetValue(temp1))
    {
    int tempr = (ap.IsBound() ?
      op->UpdateExtentIsEmpty(temp0, temp1) :
      op->vtkAlgorithm::UpdateExtentIsEmpty(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkAlgorithm_UpdateExtentIsEmpty_Methods[] = {
  {NULL, PyvtkAlgorithm_UpdateExtentIsEmpty_s1, METH_VARARGS,
   (char*)"@OO *vtkInformation *vtkDataObject"},
  {NULL, PyvtkAlgorithm_UpdateExtentIsEmpty_s2, METH_VARARGS,
   (char*)"@Oi *vtkInformation"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkAlgorithm_UpdateExtentIsEmpty(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkAlgorithm_UpdateExtentIsEmpty_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "UpdateExtentIsEmpty");
  return NULL;
}



static PyObject *
PyvtkAlgorithm_SetDefaultExecutivePrototype(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SetDefaultExecutivePrototype");

  vtkExecutive *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkExecutive"))
    {
    vtkAlgorithm::SetDefaultExecutivePrototype(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAlgorithm_SetUpdateExtentToWholeExtent_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUpdateExtentToWholeExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAlgorithm *op = static_cast<vtkAlgorithm *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->SetUpdateExtentToWholeExtent(temp0) :
      op->vtkAlgorithm::SetUpdateExtentToWholeExtent(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkAlgorithm_SetUpdateExtentToWholeExtent_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUpdateExtentToWholeExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAlgorithm *op = static_cast<vtkAlgorithm *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->SetUpdateExtentToWholeExtent() :
      op->vtkAlgorithm::SetUpdateExtentToWholeExtent());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkAlgorithm_SetUpdateExtentToWholeExtent(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkAlgorithm_SetUpdateExtentToWholeExtent_s1(self, args);
    case 0:
      return PyvtkAlgorithm_SetUpdateExtentToWholeExtent_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetUpdateExtentToWholeExtent");
  return NULL;
}



static PyObject *
PyvtkAlgorithm_SetUpdateExtent_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUpdateExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAlgorithm *op = static_cast<vtkAlgorithm *>(vp);

  int temp0;
  int temp1;
  int temp2;
  int temp3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
    {
    if (ap.IsBound())
      {
      op->SetUpdateExtent(temp0, temp1, temp2, temp3);
      }
    else
      {
      op->vtkAlgorithm::SetUpdateExtent(temp0, temp1, temp2, temp3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkAlgorithm_SetUpdateExtent_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUpdateExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAlgorithm *op = static_cast<vtkAlgorithm *>(vp);

  int temp0;
  int temp1;
  int temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      op->SetUpdateExtent(temp0, temp1, temp2);
      }
    else
      {
      op->vtkAlgorithm::SetUpdateExtent(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkAlgorithm_SetUpdateExtent_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUpdateExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAlgorithm *op = static_cast<vtkAlgorithm *>(vp);

  int temp0;
  int temp1[6];
  int save1[6];
  const int size1 = 6;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
    {
    ap.SaveArray(temp1, save1, size1);

    if (ap.IsBound())
      {
      op->SetUpdateExtent(temp0, temp1);
      }
    else
      {
      op->vtkAlgorithm::SetUpdateExtent(temp0, temp1);
      }

    if (ap.ArrayHasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(1, temp1, size1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkAlgorithm_SetUpdateExtent_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUpdateExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAlgorithm *op = static_cast<vtkAlgorithm *>(vp);

  int temp0[6];
  int save0[6];
  const int size0 = 6;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    if (ap.IsBound())
      {
      op->SetUpdateExtent(temp0);
      }
    else
      {
      op->vtkAlgorithm::SetUpdateExtent(temp0);
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

  return result;
}

static PyObject *
PyvtkAlgorithm_SetUpdateExtent(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 4:
      return PyvtkAlgorithm_SetUpdateExtent_s1(self, args);
    case 3:
      return PyvtkAlgorithm_SetUpdateExtent_s2(self, args);
    case 2:
      return PyvtkAlgorithm_SetUpdateExtent_s3(self, args);
    case 1:
      return PyvtkAlgorithm_SetUpdateExtent_s4(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetUpdateExtent");
  return NULL;
}



static PyObject *
PyvtkAlgorithm_GetUpdateExtent_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUpdateExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAlgorithm *op = static_cast<vtkAlgorithm *>(vp);

  int sizer = 6;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int *tempr = (ap.IsBound() ?
      op->GetUpdateExtent() :
      op->vtkAlgorithm::GetUpdateExtent());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}

static PyObject *
PyvtkAlgorithm_GetUpdateExtent_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUpdateExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAlgorithm *op = static_cast<vtkAlgorithm *>(vp);

  int temp0;
  int sizer = 6;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int *tempr = (ap.IsBound() ?
      op->GetUpdateExtent(temp0) :
      op->vtkAlgorithm::GetUpdateExtent(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}

static PyObject *
PyvtkAlgorithm_GetUpdateExtent_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUpdateExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAlgorithm *op = static_cast<vtkAlgorithm *>(vp);

  int temp0;
  int temp1;
  int temp2;
  int temp3;
  int temp4;
  int temp5;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(6) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5))
    {
    if (ap.IsBound())
      {
      op->GetUpdateExtent(temp0, temp1, temp2, temp3, temp4, temp5);
      }
    else
      {
      op->vtkAlgorithm::GetUpdateExtent(temp0, temp1, temp2, temp3, temp4, temp5);
      }

    if (!ap.ErrorOccurred())
      {
      ap.SetArgValue(0, temp0);
      }
    if (!ap.ErrorOccurred())
      {
      ap.SetArgValue(1, temp1);
      }
    if (!ap.ErrorOccurred())
      {
      ap.SetArgValue(2, temp2);
      }
    if (!ap.ErrorOccurred())
      {
      ap.SetArgValue(3, temp3);
      }
    if (!ap.ErrorOccurred())
      {
      ap.SetArgValue(4, temp4);
      }
    if (!ap.ErrorOccurred())
      {
      ap.SetArgValue(5, temp5);
      }
    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkAlgorithm_GetUpdateExtent_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUpdateExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAlgorithm *op = static_cast<vtkAlgorithm *>(vp);

  int temp0;
  int temp1;
  int temp2;
  int temp3;
  int temp4;
  int temp5;
  int temp6;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(7) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5) &&
      ap.GetValue(temp6))
    {
    if (ap.IsBound())
      {
      op->GetUpdateExtent(temp0, temp1, temp2, temp3, temp4, temp5, temp6);
      }
    else
      {
      op->vtkAlgorithm::GetUpdateExtent(temp0, temp1, temp2, temp3, temp4, temp5, temp6);
      }

    if (!ap.ErrorOccurred())
      {
      ap.SetArgValue(1, temp1);
      }
    if (!ap.ErrorOccurred())
      {
      ap.SetArgValue(2, temp2);
      }
    if (!ap.ErrorOccurred())
      {
      ap.SetArgValue(3, temp3);
      }
    if (!ap.ErrorOccurred())
      {
      ap.SetArgValue(4, temp4);
      }
    if (!ap.ErrorOccurred())
      {
      ap.SetArgValue(5, temp5);
      }
    if (!ap.ErrorOccurred())
      {
      ap.SetArgValue(6, temp6);
      }
    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkAlgorithm_GetUpdateExtent_s5(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUpdateExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAlgorithm *op = static_cast<vtkAlgorithm *>(vp);

  int temp0[6];
  int save0[6];
  const int size0 = 6;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    if (ap.IsBound())
      {
      op->GetUpdateExtent(temp0);
      }
    else
      {
      op->vtkAlgorithm::GetUpdateExtent(temp0);
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

  return result;
}

static PyObject *
PyvtkAlgorithm_GetUpdateExtent_s6(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUpdateExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAlgorithm *op = static_cast<vtkAlgorithm *>(vp);

  int temp0;
  int temp1[6];
  int save1[6];
  const int size1 = 6;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
    {
    ap.SaveArray(temp1, save1, size1);

    if (ap.IsBound())
      {
      op->GetUpdateExtent(temp0, temp1);
      }
    else
      {
      op->vtkAlgorithm::GetUpdateExtent(temp0, temp1);
      }

    if (ap.ArrayHasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(1, temp1, size1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkAlgorithm_GetUpdateExtent_Methods[] = {
  {NULL, PyvtkAlgorithm_GetUpdateExtent_s2, METH_VARARGS,
   (char*)"@i"},
  {NULL, PyvtkAlgorithm_GetUpdateExtent_s5, METH_VARARGS,
   (char*)"@O *i"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkAlgorithm_GetUpdateExtent(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkAlgorithm_GetUpdateExtent_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 0:
      return PyvtkAlgorithm_GetUpdateExtent_s1(self, args);
    case 6:
      return PyvtkAlgorithm_GetUpdateExtent_s3(self, args);
    case 7:
      return PyvtkAlgorithm_GetUpdateExtent_s4(self, args);
    case 2:
      return PyvtkAlgorithm_GetUpdateExtent_s6(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetUpdateExtent");
  return NULL;
}



static PyObject *
PyvtkAlgorithm_GetUpdatePiece_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUpdatePiece");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAlgorithm *op = static_cast<vtkAlgorithm *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetUpdatePiece() :
      op->vtkAlgorithm::GetUpdatePiece());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkAlgorithm_GetUpdatePiece_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUpdatePiece");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAlgorithm *op = static_cast<vtkAlgorithm *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->GetUpdatePiece(temp0) :
      op->vtkAlgorithm::GetUpdatePiece(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkAlgorithm_GetUpdatePiece(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 0:
      return PyvtkAlgorithm_GetUpdatePiece_s1(self, args);
    case 1:
      return PyvtkAlgorithm_GetUpdatePiece_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetUpdatePiece");
  return NULL;
}



static PyObject *
PyvtkAlgorithm_GetUpdateNumberOfPieces_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUpdateNumberOfPieces");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAlgorithm *op = static_cast<vtkAlgorithm *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetUpdateNumberOfPieces() :
      op->vtkAlgorithm::GetUpdateNumberOfPieces());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkAlgorithm_GetUpdateNumberOfPieces_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUpdateNumberOfPieces");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAlgorithm *op = static_cast<vtkAlgorithm *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->GetUpdateNumberOfPieces(temp0) :
      op->vtkAlgorithm::GetUpdateNumberOfPieces(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkAlgorithm_GetUpdateNumberOfPieces(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 0:
      return PyvtkAlgorithm_GetUpdateNumberOfPieces_s1(self, args);
    case 1:
      return PyvtkAlgorithm_GetUpdateNumberOfPieces_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetUpdateNumberOfPieces");
  return NULL;
}



static PyObject *
PyvtkAlgorithm_GetUpdateGhostLevel_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUpdateGhostLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAlgorithm *op = static_cast<vtkAlgorithm *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetUpdateGhostLevel() :
      op->vtkAlgorithm::GetUpdateGhostLevel());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkAlgorithm_GetUpdateGhostLevel_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUpdateGhostLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAlgorithm *op = static_cast<vtkAlgorithm *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->GetUpdateGhostLevel(temp0) :
      op->vtkAlgorithm::GetUpdateGhostLevel(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkAlgorithm_GetUpdateGhostLevel(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 0:
      return PyvtkAlgorithm_GetUpdateGhostLevel_s1(self, args);
    case 1:
      return PyvtkAlgorithm_GetUpdateGhostLevel_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetUpdateGhostLevel");
  return NULL;
}



static PyObject *
PyvtkAlgorithm_SetProgressObserver(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetProgressObserver");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAlgorithm *op = static_cast<vtkAlgorithm *>(vp);

  vtkProgressObserver *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkProgressObserver"))
    {
    if (ap.IsBound())
      {
      op->SetProgressObserver(temp0);
      }
    else
      {
      op->vtkAlgorithm::SetProgressObserver(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAlgorithm_GetProgressObserver(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProgressObserver");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAlgorithm *op = static_cast<vtkAlgorithm *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkProgressObserver *tempr = (ap.IsBound() ?
      op->GetProgressObserver() :
      op->vtkAlgorithm::GetProgressObserver());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkAlgorithm_Methods[] = {
  {(char*)"GetClassName", PyvtkAlgorithm_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkAlgorithm_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkAlgorithm_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkAlgorithm\nC++: vtkAlgorithm *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkAlgorithm_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkAlgorithm\nC++: vtkAlgorithm *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"HasExecutive", PyvtkAlgorithm_HasExecutive, METH_VARARGS,
   (char*)"V.HasExecutive() -> int\nC++: int HasExecutive()\n\nCheck whether this algorithm has an assigned executive.  This\nwill NOT create a default executive.\n"},
  {(char*)"GetExecutive", PyvtkAlgorithm_GetExecutive, METH_VARARGS,
   (char*)"V.GetExecutive() -> vtkExecutive\nC++: vtkExecutive *GetExecutive()\n\nGet this algorithm's executive.  If it has none, a default\nexecutive will be created.\n"},
  {(char*)"SetExecutive", PyvtkAlgorithm_SetExecutive, METH_VARARGS,
   (char*)"V.SetExecutive(vtkExecutive)\nC++: virtual void SetExecutive(vtkExecutive *executive)\n\nSet this algorithm's executive.  This algorithm is removed from\nany executive to which it has previously been assigned and then\nassigned to the given executive.\n"},
  {(char*)"ProcessRequest", PyvtkAlgorithm_ProcessRequest, METH_VARARGS,
   (char*)"V.ProcessRequest(vtkInformation, vtkCollection,\n    vtkInformationVector) -> int\nC++: int ProcessRequest(vtkInformation *request,\n    vtkCollection *inInfo, vtkInformationVector *outInfo)\n\nVersion of ProcessRequest() that is wrapped. This converts the\ncollection to an array and calls the other version.\n"},
  {(char*)"ModifyRequest", PyvtkAlgorithm_ModifyRequest, METH_VARARGS,
   (char*)"V.ModifyRequest(vtkInformation, int) -> int\nC++: virtual int ModifyRequest(vtkInformation *request, int when)\n\nThis method gives the algorithm a chance to modify the contents\nof a request before or after (specified in the when argument) it\nis forwarded. The default implementation is empty. Returns 1 on\nsuccess, 0 on failure. When can be either\nvtkExecutive::BeforeForward or vtkExecutive::AfterForward.\n"},
  {(char*)"GetInputPortInformation", PyvtkAlgorithm_GetInputPortInformation, METH_VARARGS,
   (char*)"V.GetInputPortInformation(int) -> vtkInformation\nC++: vtkInformation *GetInputPortInformation(int port)\n\nGet the information object associated with an input port.  There\nis one input port per kind of input to the algorithm.  Each input\nport tells executives what kind of data and downstream requests\nthis algorithm can handle for that input.\n"},
  {(char*)"GetOutputPortInformation", PyvtkAlgorithm_GetOutputPortInformation, METH_VARARGS,
   (char*)"V.GetOutputPortInformation(int) -> vtkInformation\nC++: vtkInformation *GetOutputPortInformation(int port)\n\nGet the information object associated with an output port.  There\nis one output port per output from the algorithm.  Each output\nport tells executives what kind of upstream requests this\nalgorithm can handle for that output.\n"},
  {(char*)"GetInformation", PyvtkAlgorithm_GetInformation, METH_VARARGS,
   (char*)"V.GetInformation() -> vtkInformation\nC++: vtkInformation *GetInformation()\n\nSet/Get the information object associated with this algorithm.\n"},
  {(char*)"SetInformation", PyvtkAlgorithm_SetInformation, METH_VARARGS,
   (char*)"V.SetInformation(vtkInformation)\nC++: virtual void SetInformation(vtkInformation *)\n\nSet/Get the information object associated with this algorithm.\n"},
  {(char*)"GetNumberOfInputPorts", PyvtkAlgorithm_GetNumberOfInputPorts, METH_VARARGS,
   (char*)"V.GetNumberOfInputPorts() -> int\nC++: int GetNumberOfInputPorts()\n\nGet the number of input ports used by the algorithm.\n"},
  {(char*)"GetNumberOfOutputPorts", PyvtkAlgorithm_GetNumberOfOutputPorts, METH_VARARGS,
   (char*)"V.GetNumberOfOutputPorts() -> int\nC++: int GetNumberOfOutputPorts()\n\nGet the number of output ports provided by the algorithm.\n"},
  {(char*)"SetAbortExecute", PyvtkAlgorithm_SetAbortExecute, METH_VARARGS,
   (char*)"V.SetAbortExecute(int)\nC++: void SetAbortExecute(int a)\n\nSet/Get the AbortExecute flag for the process object. Process\nobjects may handle premature termination of execution in\ndifferent ways.\n"},
  {(char*)"GetAbortExecute", PyvtkAlgorithm_GetAbortExecute, METH_VARARGS,
   (char*)"V.GetAbortExecute() -> int\nC++: int GetAbortExecute()\n\nSet/Get the AbortExecute flag for the process object. Process\nobjects may handle premature termination of execution in\ndifferent ways.\n"},
  {(char*)"AbortExecuteOn", PyvtkAlgorithm_AbortExecuteOn, METH_VARARGS,
   (char*)"V.AbortExecuteOn()\nC++: void AbortExecuteOn()\n\nSet/Get the AbortExecute flag for the process object. Process\nobjects may handle premature termination of execution in\ndifferent ways.\n"},
  {(char*)"AbortExecuteOff", PyvtkAlgorithm_AbortExecuteOff, METH_VARARGS,
   (char*)"V.AbortExecuteOff()\nC++: void AbortExecuteOff()\n\nSet/Get the AbortExecute flag for the process object. Process\nobjects may handle premature termination of execution in\ndifferent ways.\n"},
  {(char*)"SetProgress", PyvtkAlgorithm_SetProgress, METH_VARARGS,
   (char*)"V.SetProgress(float)\nC++: void SetProgress(double)\n\nSet/Get the execution progress of a process object.\n"},
  {(char*)"GetProgressMinValue", PyvtkAlgorithm_GetProgressMinValue, METH_VARARGS,
   (char*)"V.GetProgressMinValue() -> float\nC++: double GetProgressMinValue()\n\nSet/Get the execution progress of a process object.\n"},
  {(char*)"GetProgressMaxValue", PyvtkAlgorithm_GetProgressMaxValue, METH_VARARGS,
   (char*)"V.GetProgressMaxValue() -> float\nC++: double GetProgressMaxValue()\n\nSet/Get the execution progress of a process object.\n"},
  {(char*)"GetProgress", PyvtkAlgorithm_GetProgress, METH_VARARGS,
   (char*)"V.GetProgress() -> float\nC++: double GetProgress()\n\nSet/Get the execution progress of a process object.\n"},
  {(char*)"UpdateProgress", PyvtkAlgorithm_UpdateProgress, METH_VARARGS,
   (char*)"V.UpdateProgress(float)\nC++: void UpdateProgress(double amount)\n\nUpdate the progress of the process object. If a ProgressMethod\nexists, executes it.  Then set the Progress ivar to amount. The\nparameter amount should range between (0,1).\n"},
  {(char*)"SetProgressText", PyvtkAlgorithm_SetProgressText, METH_VARARGS,
   (char*)"V.SetProgressText(string)\nC++: void SetProgressText(const char *ptext)\n\nSet the current text message associated with the progress state.\nThis may be used by a calling process/GUI. Note: Because\nSetProgressText() is called from inside RequestData() it does not\nmodify the algorithm object. Algorithms are not allowed to modify\nthemselves from inside RequestData().\n"},
  {(char*)"GetProgressText", PyvtkAlgorithm_GetProgressText, METH_VARARGS,
   (char*)"V.GetProgressText() -> string\nC++: char *GetProgressText()\n\nSet the current text message associated with the progress state.\nThis may be used by a calling process/GUI. Note: Because\nSetProgressText() is called from inside RequestData() it does not\nmodify the algorithm object. Algorithms are not allowed to modify\nthemselves from inside RequestData().\n"},
  {(char*)"GetErrorCode", PyvtkAlgorithm_GetErrorCode, METH_VARARGS,
   (char*)"V.GetErrorCode() -> int\nC++: unsigned long GetErrorCode()\n\nThe error code contains a possible error that occurred while\nreading or writing the file.\n"},
  {(char*)"INPUT_IS_OPTIONAL", PyvtkAlgorithm_INPUT_IS_OPTIONAL, METH_VARARGS | METH_STATIC,
   (char*)"V.INPUT_IS_OPTIONAL() -> vtkInformationIntegerKey\nC++: static vtkInformationIntegerKey *INPUT_IS_OPTIONAL()\n\nKeys used to specify input port requirements.\\ingroup\nInformationKeys\n"},
  {(char*)"INPUT_IS_REPEATABLE", PyvtkAlgorithm_INPUT_IS_REPEATABLE, METH_VARARGS | METH_STATIC,
   (char*)"V.INPUT_IS_REPEATABLE() -> vtkInformationIntegerKey\nC++: static vtkInformationIntegerKey *INPUT_IS_REPEATABLE()\n\n\\ingroup InformationKeys\n"},
  {(char*)"INPUT_REQUIRED_FIELDS", PyvtkAlgorithm_INPUT_REQUIRED_FIELDS, METH_VARARGS | METH_STATIC,
   (char*)"V.INPUT_REQUIRED_FIELDS() -> vtkInformationInformationVectorKey\nC++: static vtkInformationInformationVectorKey *INPUT_REQUIRED_FIELDS(\n    )\n\n\\ingroup InformationKeys\n"},
  {(char*)"INPUT_REQUIRED_DATA_TYPE", PyvtkAlgorithm_INPUT_REQUIRED_DATA_TYPE, METH_VARARGS | METH_STATIC,
   (char*)"V.INPUT_REQUIRED_DATA_TYPE() -> vtkInformationStringVectorKey\nC++: static vtkInformationStringVectorKey *INPUT_REQUIRED_DATA_TYPE(\n    )\n\n\\ingroup InformationKeys\n"},
  {(char*)"INPUT_ARRAYS_TO_PROCESS", PyvtkAlgorithm_INPUT_ARRAYS_TO_PROCESS, METH_VARARGS | METH_STATIC,
   (char*)"V.INPUT_ARRAYS_TO_PROCESS() -> vtkInformationInformationVectorKey\nC++: static vtkInformationInformationVectorKey *INPUT_ARRAYS_TO_PROCESS(\n    )\n\n\\ingroup InformationKeys\n"},
  {(char*)"INPUT_PORT", PyvtkAlgorithm_INPUT_PORT, METH_VARARGS | METH_STATIC,
   (char*)"V.INPUT_PORT() -> vtkInformationIntegerKey\nC++: static vtkInformationIntegerKey *INPUT_PORT()\n\n\\ingroup InformationKeys\n"},
  {(char*)"INPUT_CONNECTION", PyvtkAlgorithm_INPUT_CONNECTION, METH_VARARGS | METH_STATIC,
   (char*)"V.INPUT_CONNECTION() -> vtkInformationIntegerKey\nC++: static vtkInformationIntegerKey *INPUT_CONNECTION()\n\n\\ingroup InformationKeys\n"},
  {(char*)"CAN_PRODUCE_SUB_EXTENT", PyvtkAlgorithm_CAN_PRODUCE_SUB_EXTENT, METH_VARARGS | METH_STATIC,
   (char*)"V.CAN_PRODUCE_SUB_EXTENT() -> vtkInformationIntegerKey\nC++: static vtkInformationIntegerKey *CAN_PRODUCE_SUB_EXTENT()\n\nThis key tells the executive that a particular output port is\ncapable of producing an arbitrary subextent of the whole extent.\nMany image sources and readers fall into this category but some\nsuch as the legacy structured data readers cannot support this\nfeature.\\ingroup InformationKeys\n"},
  {(char*)"CAN_HANDLE_PIECE_REQUEST", PyvtkAlgorithm_CAN_HANDLE_PIECE_REQUEST, METH_VARARGS | METH_STATIC,
   (char*)"V.CAN_HANDLE_PIECE_REQUEST() -> vtkInformationIntegerKey\nC++: static vtkInformationIntegerKey *CAN_HANDLE_PIECE_REQUEST()\n\nKey that tells the pipeline that a particular algorithm can or\ncannot handle piece request. If a filter cannot handle piece\nrequests and is asked for a piece, the executive will flag an\nerror. If a structured data source cannot handle piece requests\nbut can produce sub-extents (CAN_PRODUCE_SUB_EXTENT), the\nexecutive will use an extent translator to split the extent into\npieces. Otherwise, if a source cannot handle piece requests, the\nexecutive will ask for the whole data for piece 0 and not execute\nthe source for other pieces.\\ingroup InformationKeys\n"},
  {(char*)"SetInputArrayToProcess", PyvtkAlgorithm_SetInputArrayToProcess, METH_VARARGS,
   (char*)"V.SetInputArrayToProcess(int, int, int, int, string)\nC++: virtual void SetInputArrayToProcess(int idx, int port,\n    int connection, int fieldAssociation, const char *name)\nV.SetInputArrayToProcess(int, int, int, int, int)\nC++: virtual void SetInputArrayToProcess(int idx, int port,\n    int connection, int fieldAssociation, int fieldAttributeType)\nV.SetInputArrayToProcess(int, vtkInformation)\nC++: virtual void SetInputArrayToProcess(int idx,\n    vtkInformation *info)\nV.SetInputArrayToProcess(int, int, int, string, string)\nC++: virtual void SetInputArrayToProcess(int idx, int port,\n    int connection, const char *fieldAssociation,\n    const char *attributeTypeorName)\n\nSet the input data arrays that this algorithm will process.\nSpecifically the idx array that this algorithm will process\n(starting from 0) is the array on port, connection with the\nspecified association and name or attribute type (such as\nSCALARS). The fieldAssociation refers to which field in the data\nobject the array is stored. See vtkDataObject::FieldAssociations\nfor detail.\n"},
  {(char*)"GetInputArrayInformation", PyvtkAlgorithm_GetInputArrayInformation, METH_VARARGS,
   (char*)"V.GetInputArrayInformation(int) -> vtkInformation\nC++: vtkInformation *GetInputArrayInformation(int idx)\n\nGet the info object for the specified input array to this\nalgorithm\n"},
  {(char*)"RemoveAllInputs", PyvtkAlgorithm_RemoveAllInputs, METH_VARARGS,
   (char*)"V.RemoveAllInputs()\nC++: void RemoveAllInputs()\n\nRemove all the input data.\n"},
  {(char*)"GetOutputDataObject", PyvtkAlgorithm_GetOutputDataObject, METH_VARARGS,
   (char*)"V.GetOutputDataObject(int) -> vtkDataObject\nC++: vtkDataObject *GetOutputDataObject(int port)\n\nGet the data object that will contain the algorithm output for\nthe given port.\n"},
  {(char*)"GetInputDataObject", PyvtkAlgorithm_GetInputDataObject, METH_VARARGS,
   (char*)"V.GetInputDataObject(int, int) -> vtkDataObject\nC++: vtkDataObject *GetInputDataObject(int port, int connection)\n\nGet the data object that will contain the algorithm input for the\ngiven port and given connection.\n"},
  {(char*)"SetInputConnection", PyvtkAlgorithm_SetInputConnection, METH_VARARGS,
   (char*)"V.SetInputConnection(int, vtkAlgorithmOutput)\nC++: virtual void SetInputConnection(int port,\n    vtkAlgorithmOutput *input)\nV.SetInputConnection(vtkAlgorithmOutput)\nC++: virtual void SetInputConnection(vtkAlgorithmOutput *input)\n\nSet the connection for the given input port index.  Each input\nport of a filter has a specific purpose.  A port may have zero or\nmore connections and the required number is specified by each\nfilter.  Setting the connection with this method removes all\nother connections from the port.  To add more than one connection\nuse AddInputConnection().\n\nThe input for the connection is the output port of another\nfilter, which is obtained with GetOutputPort().  Typical usage is\n\n\n  filter2->SetInputConnection(0, filter1->GetOutputPort(0)).\n"},
  {(char*)"AddInputConnection", PyvtkAlgorithm_AddInputConnection, METH_VARARGS,
   (char*)"V.AddInputConnection(int, vtkAlgorithmOutput)\nC++: virtual void AddInputConnection(int port,\n    vtkAlgorithmOutput *input)\nV.AddInputConnection(vtkAlgorithmOutput)\nC++: virtual void AddInputConnection(vtkAlgorithmOutput *input)\n\nAdd a connection to the given input port index.  See\nSetInputConnection() for details on input connections.  This\nmethod is the complement to RemoveInputConnection() in that it\nadds only the connection specified without affecting other\nconnections.  Typical usage is\n\n\n  filter2->AddInputConnection(0, filter1->GetOutputPort(0)).\n"},
  {(char*)"RemoveInputConnection", PyvtkAlgorithm_RemoveInputConnection, METH_VARARGS,
   (char*)"V.RemoveInputConnection(int, vtkAlgorithmOutput)\nC++: virtual void RemoveInputConnection(int port,\n    vtkAlgorithmOutput *input)\nV.RemoveInputConnection(int, int)\nC++: virtual void RemoveInputConnection(int port, int idx)\n\nRemove a connection from the given input port index.  See\nSetInputConnection() for details on input connection.  This\nmethod is the complement to AddInputConnection() in that it\nremoves only the connection specified without affecting other\nconnections.  Typical usage is\n\n\n  filter2->RemoveInputConnection(0, filter1->GetOutputPort(0)).\n"},
  {(char*)"RemoveAllInputConnections", PyvtkAlgorithm_RemoveAllInputConnections, METH_VARARGS,
   (char*)"V.RemoveAllInputConnections(int)\nC++: virtual void RemoveAllInputConnections(int port)\n\nRemoves all input connections.\n"},
  {(char*)"SetInputDataObject", PyvtkAlgorithm_SetInputDataObject, METH_VARARGS,
   (char*)"V.SetInputDataObject(int, vtkDataObject)\nC++: virtual void SetInputDataObject(int port,\n    vtkDataObject *data)\nV.SetInputDataObject(vtkDataObject)\nC++: virtual void SetInputDataObject(vtkDataObject *data)\n\nSets the data-object as an input on the given port index. Setting\nthe input with this method removes all other connections from the\nport. Internally, this method creates a vtkTrivialProducer\ninstance and sets that as the input-connection for the given\nport. It is safe to call this method repeatedly with the same\ninput data object. The MTime of the vtkAlgorithm will not change\nunless the data object changed.\n"},
  {(char*)"AddInputDataObject", PyvtkAlgorithm_AddInputDataObject, METH_VARARGS,
   (char*)"V.AddInputDataObject(int, vtkDataObject)\nC++: virtual void AddInputDataObject(int port,\n    vtkDataObject *data)\nV.AddInputDataObject(vtkDataObject)\nC++: virtual void AddInputDataObject(vtkDataObject *data)\n\nAdd the data-object as an input to this given port. This will add\na new input connection on the specified port without affecting\nany existing connections on the same input port.\n"},
  {(char*)"GetOutputPort", PyvtkAlgorithm_GetOutputPort, METH_VARARGS,
   (char*)"V.GetOutputPort(int) -> vtkAlgorithmOutput\nC++: vtkAlgorithmOutput *GetOutputPort(int index)\nV.GetOutputPort() -> vtkAlgorithmOutput\nC++: vtkAlgorithmOutput *GetOutputPort()\n\nGet a proxy object corresponding to the given output port of this\nalgorithm.  The proxy object can be passed to another algorithm's\nSetInputConnection(), AddInputConnection(), and\nRemoveInputConnection() methods to modify pipeline connectivity.\n"},
  {(char*)"GetNumberOfInputConnections", PyvtkAlgorithm_GetNumberOfInputConnections, METH_VARARGS,
   (char*)"V.GetNumberOfInputConnections(int) -> int\nC++: int GetNumberOfInputConnections(int port)\n\nGet the number of inputs currently connected to a port.\n"},
  {(char*)"GetTotalNumberOfInputConnections", PyvtkAlgorithm_GetTotalNumberOfInputConnections, METH_VARARGS,
   (char*)"V.GetTotalNumberOfInputConnections() -> int\nC++: int GetTotalNumberOfInputConnections()\n\nGet the total number of inputs for this algorithm\n"},
  {(char*)"GetInputConnection", PyvtkAlgorithm_GetInputConnection, METH_VARARGS,
   (char*)"V.GetInputConnection(int, int) -> vtkAlgorithmOutput\nC++: vtkAlgorithmOutput *GetInputConnection(int port, int index)\n\nGet the algorithm output port connected to an input port.\n"},
  {(char*)"GetInputAlgorithm", PyvtkAlgorithm_GetInputAlgorithm, METH_VARARGS,
   (char*)"V.GetInputAlgorithm(int, int, int) -> vtkAlgorithm\nC++: vtkAlgorithm *GetInputAlgorithm(int port, int index,\n    int &algPort)\nV.GetInputAlgorithm(int, int) -> vtkAlgorithm\nC++: vtkAlgorithm *GetInputAlgorithm(int port, int index)\nV.GetInputAlgorithm() -> vtkAlgorithm\nC++: vtkAlgorithm *GetInputAlgorithm()\n\nReturns the algorithm and the output port index of that algorithm\nconnected to a port-index pair.\n"},
  {(char*)"GetInputExecutive", PyvtkAlgorithm_GetInputExecutive, METH_VARARGS,
   (char*)"V.GetInputExecutive(int, int) -> vtkExecutive\nC++: vtkExecutive *GetInputExecutive(int port, int index)\nV.GetInputExecutive() -> vtkExecutive\nC++: vtkExecutive *GetInputExecutive()\n\nReturns the executive associated with a particular input\nconnection.\n"},
  {(char*)"GetInputInformation", PyvtkAlgorithm_GetInputInformation, METH_VARARGS,
   (char*)"V.GetInputInformation(int, int) -> vtkInformation\nC++: vtkInformation *GetInputInformation(int port, int index)\nV.GetInputInformation() -> vtkInformation\nC++: vtkInformation *GetInputInformation()\n\nReturn the information object that is associated with a\nparticular input connection. This can be used to get meta-data\ncoming from the REQUEST_INFORMATION pass and set requests for the\nREQUEST_UPDATE_EXTENT pass. NOTE: Do not use this in any of the\npipeline passes. Use the information objects passed as arguments\ninstead.\n"},
  {(char*)"GetOutputInformation", PyvtkAlgorithm_GetOutputInformation, METH_VARARGS,
   (char*)"V.GetOutputInformation(int) -> vtkInformation\nC++: vtkInformation *GetOutputInformation(int port)\n\nReturn the information object that is associated with a\nparticular output port. This can be used to set meta-data coming\nduring the REQUEST_INFORMATION. NOTE: Do not use this in any of\nthe pipeline passes. Use the information objects passed as\narguments instead.\n"},
  {(char*)"Update", PyvtkAlgorithm_Update, METH_VARARGS,
   (char*)"V.Update(int)\nC++: virtual void Update(int port)\nV.Update()\nC++: virtual void Update()\n\nBring this algorithm's outputs up-to-date.\n"},
  {(char*)"UpdateInformation", PyvtkAlgorithm_UpdateInformation, METH_VARARGS,
   (char*)"V.UpdateInformation()\nC++: virtual void UpdateInformation()\n\nBring the algorithm's information up-to-date.\n"},
  {(char*)"UpdateDataObject", PyvtkAlgorithm_UpdateDataObject, METH_VARARGS,
   (char*)"V.UpdateDataObject()\nC++: virtual void UpdateDataObject()\n\nCreate output object(s).\n"},
  {(char*)"PropagateUpdateExtent", PyvtkAlgorithm_PropagateUpdateExtent, METH_VARARGS,
   (char*)"V.PropagateUpdateExtent()\nC++: virtual void PropagateUpdateExtent()\n\nPropagate meta-data upstream.\n"},
  {(char*)"UpdateWholeExtent", PyvtkAlgorithm_UpdateWholeExtent, METH_VARARGS,
   (char*)"V.UpdateWholeExtent()\nC++: virtual void UpdateWholeExtent()\n\nBring this algorithm's outputs up-to-date.\n"},
  {(char*)"ConvertTotalInputToPortConnection", PyvtkAlgorithm_ConvertTotalInputToPortConnection, METH_VARARGS,
   (char*)"V.ConvertTotalInputToPortConnection(int, int, int)\nC++: void ConvertTotalInputToPortConnection(int ind, int &port,\n    int &conn)\n\nConvenience routine to convert from a linear ordering of input\nconnections to a port/connection pair.\n"},
  {(char*)"SetReleaseDataFlag", PyvtkAlgorithm_SetReleaseDataFlag, METH_VARARGS,
   (char*)"V.SetReleaseDataFlag(int)\nC++: virtual void SetReleaseDataFlag(int)\n\nTurn release data flag on or off for all output ports.\n"},
  {(char*)"GetReleaseDataFlag", PyvtkAlgorithm_GetReleaseDataFlag, METH_VARARGS,
   (char*)"V.GetReleaseDataFlag() -> int\nC++: virtual int GetReleaseDataFlag()\n\nTurn release data flag on or off for all output ports.\n"},
  {(char*)"ReleaseDataFlagOn", PyvtkAlgorithm_ReleaseDataFlagOn, METH_VARARGS,
   (char*)"V.ReleaseDataFlagOn()\nC++: void ReleaseDataFlagOn()\n\nTurn release data flag on or off for all output ports.\n"},
  {(char*)"ReleaseDataFlagOff", PyvtkAlgorithm_ReleaseDataFlagOff, METH_VARARGS,
   (char*)"V.ReleaseDataFlagOff()\nC++: void ReleaseDataFlagOff()\n\nTurn release data flag on or off for all output ports.\n"},
  {(char*)"UpdateExtentIsEmpty", PyvtkAlgorithm_UpdateExtentIsEmpty, METH_VARARGS,
   (char*)"V.UpdateExtentIsEmpty(vtkInformation, vtkDataObject) -> int\nC++: int UpdateExtentIsEmpty(vtkInformation *pinfo,\n    vtkDataObject *output)\nV.UpdateExtentIsEmpty(vtkInformation, int) -> int\nC++: int UpdateExtentIsEmpty(vtkInformation *pinfo,\n    int extentType)\n\nThis detects when the UpdateExtent will generate no data This\ncondition is satisfied when the UpdateExtent has zero volume\n(0,-1,...) or the UpdateNumberOfPieces is 0. The source uses this\ncall to determine whether to call Execute.\n"},
  {(char*)"SetDefaultExecutivePrototype", PyvtkAlgorithm_SetDefaultExecutivePrototype, METH_VARARGS | METH_STATIC,
   (char*)"V.SetDefaultExecutivePrototype(vtkExecutive)\nC++: static void SetDefaultExecutivePrototype(vtkExecutive *proto)\n\nIf the DefaultExecutivePrototype is set, a copy of it is created\nin CreateDefaultExecutive() using NewInstance().\n"},
  {(char*)"SetUpdateExtentToWholeExtent", PyvtkAlgorithm_SetUpdateExtentToWholeExtent, METH_VARARGS,
   (char*)"V.SetUpdateExtentToWholeExtent(int) -> int\nC++: int SetUpdateExtentToWholeExtent(int port)\nV.SetUpdateExtentToWholeExtent() -> int\nC++: int SetUpdateExtentToWholeExtent()\n\nIf the whole output extent is required, this method can be called\nto set the output update extent to the whole extent. This method\nassumes that the whole extent is known (that UpdateInformation\nhas been called).\n"},
  {(char*)"SetUpdateExtent", PyvtkAlgorithm_SetUpdateExtent, METH_VARARGS,
   (char*)"V.SetUpdateExtent(int, int, int, int)\nC++: void SetUpdateExtent(int port, int piece, int numPieces,\n    int ghostLevel)\nV.SetUpdateExtent(int, int, int)\nC++: void SetUpdateExtent(int piece, int numPieces,\n    int ghostLevel)\nV.SetUpdateExtent(int, [int, int, int, int, int, int])\nC++: void SetUpdateExtent(int port, int extent[6])\nV.SetUpdateExtent([int, int, int, int, int, int])\nC++: void SetUpdateExtent(int extent[6])\n\nSet the output update extent in terms of piece and ghost levels.\n"},
  {(char*)"GetUpdateExtent", PyvtkAlgorithm_GetUpdateExtent, METH_VARARGS,
   (char*)"V.GetUpdateExtent() -> (int, int, int, int, int, int)\nC++: int *GetUpdateExtent()\nV.GetUpdateExtent(int) -> (int, int, int, int, int, int)\nC++: int *GetUpdateExtent(int port)\nV.GetUpdateExtent(int, int, int, int, int, int)\nC++: void GetUpdateExtent(int &x0, int &x1, int &y0, int &y1,\n    int &z0, int &z1)\nV.GetUpdateExtent(int, int, int, int, int, int, int)\nC++: void GetUpdateExtent(int port, int &x0, int &x1, int &y0,\n    int &y1, int &z0, int &z1)\nV.GetUpdateExtent([int, int, int, int, int, int])\nC++: void GetUpdateExtent(int extent[6])\nV.GetUpdateExtent(int, [int, int, int, int, int, int])\nC++: void GetUpdateExtent(int port, int extent[6])\n\nThese functions return the update extent for output ports that\nuse 3D extents. Where port is not specified, it is assumed to be\n0.\n"},
  {(char*)"GetUpdatePiece", PyvtkAlgorithm_GetUpdatePiece, METH_VARARGS,
   (char*)"V.GetUpdatePiece() -> int\nC++: int GetUpdatePiece()\nV.GetUpdatePiece(int) -> int\nC++: int GetUpdatePiece(int port)\n\nThese functions return the update extent for output ports that\nuse piece extents. Where port is not specified, it is assumed to\nbe 0.\n"},
  {(char*)"GetUpdateNumberOfPieces", PyvtkAlgorithm_GetUpdateNumberOfPieces, METH_VARARGS,
   (char*)"V.GetUpdateNumberOfPieces() -> int\nC++: int GetUpdateNumberOfPieces()\nV.GetUpdateNumberOfPieces(int) -> int\nC++: int GetUpdateNumberOfPieces(int port)\n\nThese functions return the update extent for output ports that\nuse piece extents. Where port is not specified, it is assumed to\nbe 0.\n"},
  {(char*)"GetUpdateGhostLevel", PyvtkAlgorithm_GetUpdateGhostLevel, METH_VARARGS,
   (char*)"V.GetUpdateGhostLevel() -> int\nC++: int GetUpdateGhostLevel()\nV.GetUpdateGhostLevel(int) -> int\nC++: int GetUpdateGhostLevel(int port)\n\nThese functions return the update extent for output ports that\nuse piece extents. Where port is not specified, it is assumed to\nbe 0.\n"},
  {(char*)"SetProgressObserver", PyvtkAlgorithm_SetProgressObserver, METH_VARARGS,
   (char*)"V.SetProgressObserver(vtkProgressObserver)\nC++: void SetProgressObserver(vtkProgressObserver *)\n\nIf an ProgressObserver is set, the algorithm will report progress\nthrough it rather than directly. This means that it will call\nUpdateProgress() on the ProgressObserver rather than itself\nreport it and set progress. This is most useful in situations\nwhere multiple threads are executing an algorithm at the same\ntime and want to handle progress locally.\n"},
  {(char*)"GetProgressObserver", PyvtkAlgorithm_GetProgressObserver, METH_VARARGS,
   (char*)"V.GetProgressObserver() -> vtkProgressObserver\nC++: vtkProgressObserver *GetProgressObserver()\n\nIf an ProgressObserver is set, the algorithm will report progress\nthrough it rather than directly. This means that it will call\nUpdateProgress() on the ProgressObserver rather than itself\nreport it and set progress. This is most useful in situations\nwhere multiple threads are executing an algorithm at the same\ntime and want to handle progress locally.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkAlgorithm_StaticNew()
{
  return vtkAlgorithm::New();
}

PyObject *PyVTKClass_vtkAlgorithmNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkAlgorithm_StaticNew,
    PyvtkAlgorithm_Methods,
    "vtkAlgorithm", modulename,
    NULL, NULL,
    PyvtkAlgorithm_Doc(),
    PyVTKClass_vtkObjectNew(modulename));

  if (cls)
    {
    PyObject *d = PyVTKClass_GetDict(cls);
    PyObject *o;

    PyType_Ready(&PyvtkAlgorithm_DesiredOutputPrecision_Type);
    PyvtkAlgorithm_DesiredOutputPrecision_Type.tp_new = NULL;

    o = (PyObject *)&PyvtkAlgorithm_DesiredOutputPrecision_Type;
    if (o && PyDict_SetItemString(d, (char *)"DesiredOutputPrecision", o) != 0)
      {
      Py_DECREF(o);
      }

    for (int c = 0; c < 3; c++)
      {
      typedef vtkAlgorithm::DesiredOutputPrecision cxx_enum_type;

      static const struct { const char *name; cxx_enum_type value; }
        constants[3] = {
          { "SINGLE_PRECISION", vtkAlgorithm::SINGLE_PRECISION },
          { "DOUBLE_PRECISION", vtkAlgorithm::DOUBLE_PRECISION },
          { "DEFAULT_PRECISION", vtkAlgorithm::DEFAULT_PRECISION },
        };

      o = PyvtkAlgorithm_DesiredOutputPrecision_FromEnum(constants[c].value);
      if (o)
        {
        PyDict_SetItemString(d, (char *)constants[c].name, o);
        Py_DECREF(o);
        }
      }

    }

  return cls;
}

const char **PyvtkAlgorithm_Doc()
{
  static const char *docstring[] = {
    "vtkAlgorithm - Superclass for all sources, filters, and sinks in VTK.\n\n",
    "Superclass: vtkObject\n\n",
    "vtkAlgorithm is the superclass for all sources, filters, and sinks in\nVTK.  It defines a generalized interface for executing data\nprocessing algorithms.  Pipeline connections are associated with\ninput and output ports that are independent of the type of data\npassing through the connections.\n\nInstances may be used independently or within pipelines with a\nvariety of architectures and update mechanis",
    "ms.  Pipelines are\ncontrolled by instances of vtkExecutive.  Every vtkAlgorithm instance\nhas an associated vtkExecutive when it is used in a pipeline.  The\nexecutive is responsible for data flow.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkAlgorithm(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkAlgorithmNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkAlgorithm", o) != 0)
    {
    Py_DECREF(o);
    }

}

