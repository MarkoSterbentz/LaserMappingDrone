// python wrapper for vtkStatisticsAlgorithm
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkStdString.h"
#include "vtkVariant.h"
#include "vtkStatisticsAlgorithm.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkStatisticsAlgorithm(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkStatisticsAlgorithmNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkTableAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkTableAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkTableAlgorithmNew
#endif

static const char **PyvtkStatisticsAlgorithm_Doc();

#ifndef DECLARED_PyvtkStatisticsAlgorithm_InputPorts_Type
extern VTK_PYTHON_EXPORT PyTypeObject PyvtkStatisticsAlgorithm_InputPorts_Type;
#define DECLARED_PyvtkStatisticsAlgorithm_InputPorts_Type
#endif

PyTypeObject PyvtkStatisticsAlgorithm_InputPorts_Type = {
  PyObject_HEAD_INIT(&PyType_Type)
  0,
  (char*)"InputPorts", // tp_name
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

PyObject *PyvtkStatisticsAlgorithm_InputPorts_FromEnum(int val)
{
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkStatisticsAlgorithm_InputPorts_Type);
  self->ob_ival = val;
  return (PyObject *)self;
}

#ifndef DECLARED_PyvtkStatisticsAlgorithm_OutputIndices_Type
extern VTK_PYTHON_EXPORT PyTypeObject PyvtkStatisticsAlgorithm_OutputIndices_Type;
#define DECLARED_PyvtkStatisticsAlgorithm_OutputIndices_Type
#endif

PyTypeObject PyvtkStatisticsAlgorithm_OutputIndices_Type = {
  PyObject_HEAD_INIT(&PyType_Type)
  0,
  (char*)"OutputIndices", // tp_name
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

PyObject *PyvtkStatisticsAlgorithm_OutputIndices_FromEnum(int val)
{
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkStatisticsAlgorithm_OutputIndices_Type);
  self->ob_ival = val;
  return (PyObject *)self;
}


static PyObject *
PyvtkStatisticsAlgorithm_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStatisticsAlgorithm *op = static_cast<vtkStatisticsAlgorithm *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkStatisticsAlgorithm::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStatisticsAlgorithm_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStatisticsAlgorithm *op = static_cast<vtkStatisticsAlgorithm *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkStatisticsAlgorithm::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStatisticsAlgorithm_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStatisticsAlgorithm *op = static_cast<vtkStatisticsAlgorithm *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkStatisticsAlgorithm *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkStatisticsAlgorithm::NewInstance());

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
PyvtkStatisticsAlgorithm_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkStatisticsAlgorithm *tempr = vtkStatisticsAlgorithm::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStatisticsAlgorithm_SetLearnOptionParameterConnection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLearnOptionParameterConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStatisticsAlgorithm *op = static_cast<vtkStatisticsAlgorithm *>(vp);

  vtkAlgorithmOutput *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAlgorithmOutput"))
    {
    if (ap.IsBound())
      {
      op->SetLearnOptionParameterConnection(temp0);
      }
    else
      {
      op->vtkStatisticsAlgorithm::SetLearnOptionParameterConnection(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkStatisticsAlgorithm_SetLearnOptionParameters(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLearnOptionParameters");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStatisticsAlgorithm *op = static_cast<vtkStatisticsAlgorithm *>(vp);

  vtkDataObject *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataObject"))
    {
    if (ap.IsBound())
      {
      op->SetLearnOptionParameters(temp0);
      }
    else
      {
      op->vtkStatisticsAlgorithm::SetLearnOptionParameters(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkStatisticsAlgorithm_SetInputModelConnection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputModelConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStatisticsAlgorithm *op = static_cast<vtkStatisticsAlgorithm *>(vp);

  vtkAlgorithmOutput *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAlgorithmOutput"))
    {
    if (ap.IsBound())
      {
      op->SetInputModelConnection(temp0);
      }
    else
      {
      op->vtkStatisticsAlgorithm::SetInputModelConnection(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkStatisticsAlgorithm_SetInputModel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputModel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStatisticsAlgorithm *op = static_cast<vtkStatisticsAlgorithm *>(vp);

  vtkDataObject *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataObject"))
    {
    if (ap.IsBound())
      {
      op->SetInputModel(temp0);
      }
    else
      {
      op->vtkStatisticsAlgorithm::SetInputModel(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkStatisticsAlgorithm_SetLearnOption(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLearnOption");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStatisticsAlgorithm *op = static_cast<vtkStatisticsAlgorithm *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetLearnOption(temp0);
      }
    else
      {
      op->vtkStatisticsAlgorithm::SetLearnOption(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkStatisticsAlgorithm_GetLearnOption(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLearnOption");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStatisticsAlgorithm *op = static_cast<vtkStatisticsAlgorithm *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetLearnOption() :
      op->vtkStatisticsAlgorithm::GetLearnOption());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStatisticsAlgorithm_SetDeriveOption(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDeriveOption");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStatisticsAlgorithm *op = static_cast<vtkStatisticsAlgorithm *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetDeriveOption(temp0);
      }
    else
      {
      op->vtkStatisticsAlgorithm::SetDeriveOption(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkStatisticsAlgorithm_GetDeriveOption(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDeriveOption");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStatisticsAlgorithm *op = static_cast<vtkStatisticsAlgorithm *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetDeriveOption() :
      op->vtkStatisticsAlgorithm::GetDeriveOption());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStatisticsAlgorithm_SetAssessOption(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAssessOption");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStatisticsAlgorithm *op = static_cast<vtkStatisticsAlgorithm *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetAssessOption(temp0);
      }
    else
      {
      op->vtkStatisticsAlgorithm::SetAssessOption(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkStatisticsAlgorithm_GetAssessOption(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAssessOption");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStatisticsAlgorithm *op = static_cast<vtkStatisticsAlgorithm *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetAssessOption() :
      op->vtkStatisticsAlgorithm::GetAssessOption());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStatisticsAlgorithm_SetTestOption(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTestOption");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStatisticsAlgorithm *op = static_cast<vtkStatisticsAlgorithm *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetTestOption(temp0);
      }
    else
      {
      op->vtkStatisticsAlgorithm::SetTestOption(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkStatisticsAlgorithm_GetTestOption(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTestOption");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStatisticsAlgorithm *op = static_cast<vtkStatisticsAlgorithm *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetTestOption() :
      op->vtkStatisticsAlgorithm::GetTestOption());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStatisticsAlgorithm_SetNumberOfPrimaryTables(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfPrimaryTables");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStatisticsAlgorithm *op = static_cast<vtkStatisticsAlgorithm *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetNumberOfPrimaryTables(temp0);
      }
    else
      {
      op->vtkStatisticsAlgorithm::SetNumberOfPrimaryTables(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkStatisticsAlgorithm_GetNumberOfPrimaryTables(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfPrimaryTables");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStatisticsAlgorithm *op = static_cast<vtkStatisticsAlgorithm *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetNumberOfPrimaryTables() :
      op->vtkStatisticsAlgorithm::GetNumberOfPrimaryTables());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStatisticsAlgorithm_SetAssessNames(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAssessNames");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStatisticsAlgorithm *op = static_cast<vtkStatisticsAlgorithm *>(vp);

  vtkStringArray *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkStringArray"))
    {
    if (ap.IsBound())
      {
      op->SetAssessNames(temp0);
      }
    else
      {
      op->vtkStatisticsAlgorithm::SetAssessNames(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkStatisticsAlgorithm_GetAssessNames(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAssessNames");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStatisticsAlgorithm *op = static_cast<vtkStatisticsAlgorithm *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkStringArray *tempr = (ap.IsBound() ?
      op->GetAssessNames() :
      op->vtkStatisticsAlgorithm::GetAssessNames());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStatisticsAlgorithm_SetColumnStatus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColumnStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStatisticsAlgorithm *op = static_cast<vtkStatisticsAlgorithm *>(vp);

  char *temp0 = NULL;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetColumnStatus(temp0, temp1);
      }
    else
      {
      op->vtkStatisticsAlgorithm::SetColumnStatus(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkStatisticsAlgorithm_ResetAllColumnStates(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ResetAllColumnStates");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStatisticsAlgorithm *op = static_cast<vtkStatisticsAlgorithm *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ResetAllColumnStates();
      }
    else
      {
      op->vtkStatisticsAlgorithm::ResetAllColumnStates();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkStatisticsAlgorithm_RequestSelectedColumns(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RequestSelectedColumns");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStatisticsAlgorithm *op = static_cast<vtkStatisticsAlgorithm *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->RequestSelectedColumns() :
      op->vtkStatisticsAlgorithm::RequestSelectedColumns());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStatisticsAlgorithm_ResetRequests(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ResetRequests");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStatisticsAlgorithm *op = static_cast<vtkStatisticsAlgorithm *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ResetRequests();
      }
    else
      {
      op->vtkStatisticsAlgorithm::ResetRequests();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkStatisticsAlgorithm_GetNumberOfRequests(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfRequests");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStatisticsAlgorithm *op = static_cast<vtkStatisticsAlgorithm *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetNumberOfRequests() :
      op->vtkStatisticsAlgorithm::GetNumberOfRequests());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStatisticsAlgorithm_GetNumberOfColumnsForRequest(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfColumnsForRequest");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStatisticsAlgorithm *op = static_cast<vtkStatisticsAlgorithm *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetNumberOfColumnsForRequest(temp0) :
      op->vtkStatisticsAlgorithm::GetNumberOfColumnsForRequest(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStatisticsAlgorithm_GetColumnForRequest_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColumnForRequest");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStatisticsAlgorithm *op = static_cast<vtkStatisticsAlgorithm *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetColumnForRequest(temp0, temp1) :
      op->vtkStatisticsAlgorithm::GetColumnForRequest(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkStatisticsAlgorithm_GetColumnForRequest_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColumnForRequest");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStatisticsAlgorithm *op = static_cast<vtkStatisticsAlgorithm *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  vtkStdString temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    int tempr = (ap.IsBound() ?
      op->GetColumnForRequest(temp0, temp1, temp2) :
      op->vtkStatisticsAlgorithm::GetColumnForRequest(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
      {
      ap.SetArgValue(2, temp2);
      }
    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkStatisticsAlgorithm_GetColumnForRequest(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkStatisticsAlgorithm_GetColumnForRequest_s1(self, args);
    case 3:
      return PyvtkStatisticsAlgorithm_GetColumnForRequest_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetColumnForRequest");
  return NULL;
}



static PyObject *
PyvtkStatisticsAlgorithm_AddColumn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddColumn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStatisticsAlgorithm *op = static_cast<vtkStatisticsAlgorithm *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->AddColumn(temp0);
      }
    else
      {
      op->vtkStatisticsAlgorithm::AddColumn(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkStatisticsAlgorithm_AddColumnPair(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddColumnPair");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStatisticsAlgorithm *op = static_cast<vtkStatisticsAlgorithm *>(vp);

  char *temp0 = NULL;
  char *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->AddColumnPair(temp0, temp1);
      }
    else
      {
      op->vtkStatisticsAlgorithm::AddColumnPair(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkStatisticsAlgorithm_SetParameter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetParameter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStatisticsAlgorithm *op = static_cast<vtkStatisticsAlgorithm *>(vp);

  char *temp0 = NULL;
  int temp1;
  vtkVariant *temp2 = NULL;
  PyObject *pobj2 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetSpecialObject(temp2, pobj2, "vtkVariant"))
    {
    bool tempr = (ap.IsBound() ?
      op->SetParameter(temp0, temp1, *temp2) :
      op->vtkStatisticsAlgorithm::SetParameter(temp0, temp1, *temp2));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  Py_XDECREF(pobj2);

  return result;
}


static PyObject *
PyvtkStatisticsAlgorithm_Aggregate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Aggregate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStatisticsAlgorithm *op = static_cast<vtkStatisticsAlgorithm *>(vp);

  vtkDataObjectCollection *temp0 = NULL;
  vtkMultiBlockDataSet *temp1 = NULL;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkDataObjectCollection") &&
      ap.GetVTKObject(temp1, "vtkMultiBlockDataSet"))
    {
    op->Aggregate(temp0, temp1);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkStatisticsAlgorithm_Methods[] = {
  {(char*)"GetClassName", PyvtkStatisticsAlgorithm_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkStatisticsAlgorithm_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkStatisticsAlgorithm_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkStatisticsAlgorithm\nC++: vtkStatisticsAlgorithm *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkStatisticsAlgorithm_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkStatisticsAlgorithm\nC++: vtkStatisticsAlgorithm *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetLearnOptionParameterConnection", PyvtkStatisticsAlgorithm_SetLearnOptionParameterConnection, METH_VARARGS,
   (char*)"V.SetLearnOptionParameterConnection(vtkAlgorithmOutput)\nC++: virtual void SetLearnOptionParameterConnection(\n    vtkAlgorithmOutput *params)\n\nA convenience method for setting learn input parameters (if one\nis expected or allowed). It is equivalent to calling\nSetInputConnection( 1, params );\n"},
  {(char*)"SetLearnOptionParameters", PyvtkStatisticsAlgorithm_SetLearnOptionParameters, METH_VARARGS,
   (char*)"V.SetLearnOptionParameters(vtkDataObject)\nC++: virtual void SetLearnOptionParameters(vtkDataObject *params)\n\nA convenience method for setting learn input parameters (if one\nis expected or allowed). It is equivalent to calling\nSetInputData( 1, params );\n"},
  {(char*)"SetInputModelConnection", PyvtkStatisticsAlgorithm_SetInputModelConnection, METH_VARARGS,
   (char*)"V.SetInputModelConnection(vtkAlgorithmOutput)\nC++: virtual void SetInputModelConnection(\n    vtkAlgorithmOutput *model)\n\nA convenience method for setting the input model connection (if\none is expected or allowed). It is equivalent to calling\nSetInputConnection( 2, model );\n"},
  {(char*)"SetInputModel", PyvtkStatisticsAlgorithm_SetInputModel, METH_VARARGS,
   (char*)"V.SetInputModel(vtkDataObject)\nC++: virtual void SetInputModel(vtkDataObject *model)\n\nA convenience method for setting the input model (if one is\nexpected or allowed). It is equivalent to calling SetInputData(\n2, model );\n"},
  {(char*)"SetLearnOption", PyvtkStatisticsAlgorithm_SetLearnOption, METH_VARARGS,
   (char*)"V.SetLearnOption(bool)\nC++: void SetLearnOption(bool a)\n\nSet/Get the Learn operation.\n"},
  {(char*)"GetLearnOption", PyvtkStatisticsAlgorithm_GetLearnOption, METH_VARARGS,
   (char*)"V.GetLearnOption() -> bool\nC++: bool GetLearnOption()\n\nSet/Get the Learn operation.\n"},
  {(char*)"SetDeriveOption", PyvtkStatisticsAlgorithm_SetDeriveOption, METH_VARARGS,
   (char*)"V.SetDeriveOption(bool)\nC++: void SetDeriveOption(bool a)\n\nSet/Get the Derive operation.\n"},
  {(char*)"GetDeriveOption", PyvtkStatisticsAlgorithm_GetDeriveOption, METH_VARARGS,
   (char*)"V.GetDeriveOption() -> bool\nC++: bool GetDeriveOption()\n\nSet/Get the Derive operation.\n"},
  {(char*)"SetAssessOption", PyvtkStatisticsAlgorithm_SetAssessOption, METH_VARARGS,
   (char*)"V.SetAssessOption(bool)\nC++: void SetAssessOption(bool a)\n\nSet/Get the Assess operation.\n"},
  {(char*)"GetAssessOption", PyvtkStatisticsAlgorithm_GetAssessOption, METH_VARARGS,
   (char*)"V.GetAssessOption() -> bool\nC++: bool GetAssessOption()\n\nSet/Get the Assess operation.\n"},
  {(char*)"SetTestOption", PyvtkStatisticsAlgorithm_SetTestOption, METH_VARARGS,
   (char*)"V.SetTestOption(bool)\nC++: void SetTestOption(bool a)\n\nSet/Get the Test operation.\n"},
  {(char*)"GetTestOption", PyvtkStatisticsAlgorithm_GetTestOption, METH_VARARGS,
   (char*)"V.GetTestOption() -> bool\nC++: bool GetTestOption()\n\nSet/Get the Test operation.\n"},
  {(char*)"SetNumberOfPrimaryTables", PyvtkStatisticsAlgorithm_SetNumberOfPrimaryTables, METH_VARARGS,
   (char*)"V.SetNumberOfPrimaryTables(int)\nC++: void SetNumberOfPrimaryTables(vtkIdType a)\n\nSet/Get the number of tables in the primary model.\n"},
  {(char*)"GetNumberOfPrimaryTables", PyvtkStatisticsAlgorithm_GetNumberOfPrimaryTables, METH_VARARGS,
   (char*)"V.GetNumberOfPrimaryTables() -> int\nC++: vtkIdType GetNumberOfPrimaryTables()\n\nSet/Get the number of tables in the primary model.\n"},
  {(char*)"SetAssessNames", PyvtkStatisticsAlgorithm_SetAssessNames, METH_VARARGS,
   (char*)"V.SetAssessNames(vtkStringArray)\nC++: virtual void SetAssessNames(vtkStringArray *)\n\nSet/get assessment names.\n"},
  {(char*)"GetAssessNames", PyvtkStatisticsAlgorithm_GetAssessNames, METH_VARARGS,
   (char*)"V.GetAssessNames() -> vtkStringArray\nC++: vtkStringArray *GetAssessNames()\n\nSet/get assessment names.\n"},
  {(char*)"SetColumnStatus", PyvtkStatisticsAlgorithm_SetColumnStatus, METH_VARARGS,
   (char*)"V.SetColumnStatus(string, int)\nC++: virtual void SetColumnStatus(const char *namCol, int status)\n\nAdd or remove a column from the current analysis request. Once\nall the column status values are set, call\nRequestSelectedColumns() before selecting another set of columns\nfor a different analysis request. The way that columns selections\nare used varies from algorithm to algorithm.\n\nNote: the set of selected columns is maintained in\nvtkStatisticsAlgorithmPrivate::Buffer until\nRequestSelectedColumns() is called, at which point the set is\nappended to vtkStatisticsAlgorithmPrivate::Requests. If there are\nany columns in vtkStatisticsAlgorithmPrivate::Buffer at the time\nRequestData() is called, RequestSelectedColumns() will be called\nand the selection added to the list of requests.\n"},
  {(char*)"ResetAllColumnStates", PyvtkStatisticsAlgorithm_ResetAllColumnStates, METH_VARARGS,
   (char*)"V.ResetAllColumnStates()\nC++: virtual void ResetAllColumnStates()\n\nSet the the status of each and every column in the current\nrequest to OFF (0).\n"},
  {(char*)"RequestSelectedColumns", PyvtkStatisticsAlgorithm_RequestSelectedColumns, METH_VARARGS,
   (char*)"V.RequestSelectedColumns() -> int\nC++: virtual int RequestSelectedColumns()\n\nUse the current column status values to produce a new request for\nstatistics to be produced when RequestData() is called. See\nSetColumnStatus() for more information.\n"},
  {(char*)"ResetRequests", PyvtkStatisticsAlgorithm_ResetRequests, METH_VARARGS,
   (char*)"V.ResetRequests()\nC++: virtual void ResetRequests()\n\nEmpty the list of current requests.\n"},
  {(char*)"GetNumberOfRequests", PyvtkStatisticsAlgorithm_GetNumberOfRequests, METH_VARARGS,
   (char*)"V.GetNumberOfRequests() -> int\nC++: virtual vtkIdType GetNumberOfRequests()\n\nReturn the number of requests. This does not include any request\nthat is in the column-status buffer but for which\nRequestSelectedColumns() has not yet been called (even though it\nis possible this request will be honored when the filter is run\n-- see SetColumnStatus() for more information).\n"},
  {(char*)"GetNumberOfColumnsForRequest", PyvtkStatisticsAlgorithm_GetNumberOfColumnsForRequest, METH_VARARGS,
   (char*)"V.GetNumberOfColumnsForRequest(int) -> int\nC++: virtual vtkIdType GetNumberOfColumnsForRequest(\n    vtkIdType request)\n\nReturn the number of columns for a given request.\n"},
  {(char*)"GetColumnForRequest", PyvtkStatisticsAlgorithm_GetColumnForRequest, METH_VARARGS,
   (char*)"V.GetColumnForRequest(int, int) -> string\nC++: virtual const char *GetColumnForRequest(vtkIdType r,\n    vtkIdType c)\nV.GetColumnForRequest(int, int, string) -> int\nC++: virtual int GetColumnForRequest(vtkIdType r, vtkIdType c,\n    vtkStdString &columnName)\n\nProvide the name of the c-th column for the r-th request.\n\nFor the version of this routine that returns an integer, if the\nrequest or column does not exist because r or c is out of bounds,\nthis routine returns 0 and the value of columnName is\nunspecified. Otherwise, it returns 1 and the value of columnName\nis set.\n\nFor the version of this routine that returns const char*, if the\nrequest or column does not exist because r or c is out of bounds,\nthe routine returns NULL. Otherwise it returns the column name.\nThis version is not thread-safe.\n"},
  {(char*)"AddColumn", PyvtkStatisticsAlgorithm_AddColumn, METH_VARARGS,
   (char*)"V.AddColumn(string)\nC++: void AddColumn(const char *namCol)\n\nConvenience method to create a request with a single column name\nnamCol in a single call; this is the preferred method to select\ncolumns, ensuring selection consistency (a single column per\nrequest). Warning: no name checking is performed on namCol; it is\nthe user's responsibility to use valid column names.\n"},
  {(char*)"AddColumnPair", PyvtkStatisticsAlgorithm_AddColumnPair, METH_VARARGS,
   (char*)"V.AddColumnPair(string, string)\nC++: void AddColumnPair(const char *namColX, const char *namColY)\n\nConvenience method to create a request with a single column name\npair\n ( namColX, namColY) in a single call; this is the preferred\nmethod to select columns pairs, ensuring selection consistency (a\npair of columns per request).\n\nUnlike SetColumnStatus(), you need not call\nRequestSelectedColumns() after AddColumnPair().\n\nWarning: namColX and namColY are only checked for their validity\nas strings; no check is made that either are valid column names.\n"},
  {(char*)"SetParameter", PyvtkStatisticsAlgorithm_SetParameter, METH_VARARGS,
   (char*)"V.SetParameter(string, int, vtkVariant) -> bool\nC++: virtual bool SetParameter(const char *parameter, int index,\n    vtkVariant value)\n\nA convenience method (in particular for access from other\napplications) to set parameter values of Learn mode. Return true\nif setting of requested parameter name was excuted, false\notherwise. NB: default method (which is sufficient for most\nstatistics algorithms) does not have any Learn parameters to set\nand always returns false.\n"},
  {(char*)"Aggregate", PyvtkStatisticsAlgorithm_Aggregate, METH_VARARGS,
   (char*)"V.Aggregate(vtkDataObjectCollection, vtkMultiBlockDataSet)\nC++: virtual void Aggregate(vtkDataObjectCollection *,\n    vtkMultiBlockDataSet *)\n\nGiven a collection of models, calculate aggregate model\n"},
  {NULL, NULL, 0, NULL}
};

PyObject *PyVTKClass_vtkStatisticsAlgorithmNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(NULL,
    PyvtkStatisticsAlgorithm_Methods,
    "vtkStatisticsAlgorithm", modulename,
    NULL, NULL,
    PyvtkStatisticsAlgorithm_Doc(),
    PyVTKClass_vtkTableAlgorithmNew(modulename));

  if (cls)
    {
    PyObject *d = PyVTKClass_GetDict(cls);
    PyObject *o;

    PyType_Ready(&PyvtkStatisticsAlgorithm_InputPorts_Type);
    PyvtkStatisticsAlgorithm_InputPorts_Type.tp_new = NULL;

    o = (PyObject *)&PyvtkStatisticsAlgorithm_InputPorts_Type;
    if (o && PyDict_SetItemString(d, (char *)"InputPorts", o) != 0)
      {
      Py_DECREF(o);
      }

    PyType_Ready(&PyvtkStatisticsAlgorithm_OutputIndices_Type);
    PyvtkStatisticsAlgorithm_OutputIndices_Type.tp_new = NULL;

    o = (PyObject *)&PyvtkStatisticsAlgorithm_OutputIndices_Type;
    if (o && PyDict_SetItemString(d, (char *)"OutputIndices", o) != 0)
      {
      Py_DECREF(o);
      }

    for (int c = 0; c < 3; c++)
      {
      typedef vtkStatisticsAlgorithm::InputPorts cxx_enum_type;

      static const struct { const char *name; cxx_enum_type value; }
        constants[3] = {
          { "INPUT_DATA", vtkStatisticsAlgorithm::INPUT_DATA },
          { "LEARN_PARAMETERS", vtkStatisticsAlgorithm::LEARN_PARAMETERS },
          { "INPUT_MODEL", vtkStatisticsAlgorithm::INPUT_MODEL },
        };

      o = PyvtkStatisticsAlgorithm_InputPorts_FromEnum(constants[c].value);
      if (o)
        {
        PyDict_SetItemString(d, (char *)constants[c].name, o);
        Py_DECREF(o);
        }
      }

    for (int c = 0; c < 4; c++)
      {
      typedef vtkStatisticsAlgorithm::OutputIndices cxx_enum_type;

      static const struct { const char *name; cxx_enum_type value; }
        constants[4] = {
          { "OUTPUT_DATA", vtkStatisticsAlgorithm::OUTPUT_DATA },
          { "OUTPUT_MODEL", vtkStatisticsAlgorithm::OUTPUT_MODEL },
          { "ASSESSMENT", vtkStatisticsAlgorithm::ASSESSMENT },
          { "OUTPUT_TEST", vtkStatisticsAlgorithm::OUTPUT_TEST },
        };

      o = PyvtkStatisticsAlgorithm_OutputIndices_FromEnum(constants[c].value);
      if (o)
        {
        PyDict_SetItemString(d, (char *)constants[c].name, o);
        Py_DECREF(o);
        }
      }

    }

  return cls;
}

const char **PyvtkStatisticsAlgorithm_Doc()
{
  static const char *docstring[] = {
    "vtkStatisticsAlgorithm - Base class for statistics algorithms\n\n",
    "Superclass: vtkTableAlgorithm\n\n",
    "All statistics algorithms can conceptually be operated with several\noperations:\n* Learn: given an input data set, calculate a minimal statistical\n  model (e.g., sums, raw moments, joint probabilities).\n* Derive: given an input minimal statistical model, derive the full\n  model (e.g., descriptive statistics, quantiles, correlations,\n  conditional probabilities). NB: It may be, or not be, a problem\n",
    "  that a full model was not derived. For instance, when doing\n  parallel calculations, one only wants to derive the full model\n  after all partial calculations have completed. On the other hand,\n  one can also directly provide a full model, that was previously\n  calculated or guessed, and not derive a new one.\n* Assess: given an input data set, input statistics, and some form of\n  threshold, asses",
    "s a subset of the data set.\n* Test: perform at least one statistical test. Therefore, a\n  vtkStatisticsAlgorithm has the following ports\n* 3 optional input ports:\n* Data (vtkTable)\n* Parameters to the learn operation (vtkTable)\n* Input model (vtkMultiBlockDataSet)\n* 3 output ports:\n* Data (input annotated with assessments when the Assess operation is\nON).\n* Output model (identical to the the input",
    " model when Learn operation\nis OFF).\n* Output of statistical tests. Some engines do not offer such tests\n  yet, in which case this output will always be empty even when the\n  Test operation is ON.\n\nThanks:\n\nThanks to Philippe Pebay and David Thompson from Sandia National\nLaboratories for implementing this class. Updated by Philippe Pebay,\nKitware SAS 2012\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkStatisticsAlgorithm(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkStatisticsAlgorithmNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkStatisticsAlgorithm", o) != 0)
    {
    Py_DECREF(o);
    }

}

