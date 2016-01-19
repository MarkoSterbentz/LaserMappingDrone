// python wrapper for vtkMultiProcessController
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkMultiProcessStream.h"
#include "vtkMultiProcessController.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkMultiProcessController(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkMultiProcessControllerNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkMultiProcessController_Doc();

#ifndef DECLARED_PyvtkMultiProcessController_Errors_Type
extern VTK_PYTHON_EXPORT PyTypeObject PyvtkMultiProcessController_Errors_Type;
#define DECLARED_PyvtkMultiProcessController_Errors_Type
#endif

PyTypeObject PyvtkMultiProcessController_Errors_Type = {
  PyObject_HEAD_INIT(&PyType_Type)
  0,
  (char*)"Errors", // tp_name
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

PyObject *PyvtkMultiProcessController_Errors_FromEnum(int val)
{
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkMultiProcessController_Errors_Type);
  self->ob_ival = val;
  return (PyObject *)self;
}

#ifndef DECLARED_PyvtkMultiProcessController_Consts_Type
extern VTK_PYTHON_EXPORT PyTypeObject PyvtkMultiProcessController_Consts_Type;
#define DECLARED_PyvtkMultiProcessController_Consts_Type
#endif

PyTypeObject PyvtkMultiProcessController_Consts_Type = {
  PyObject_HEAD_INIT(&PyType_Type)
  0,
  (char*)"Consts", // tp_name
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

PyObject *PyvtkMultiProcessController_Consts_FromEnum(int val)
{
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkMultiProcessController_Consts_Type);
  self->ob_ival = val;
  return (PyObject *)self;
}

#ifndef DECLARED_PyvtkMultiProcessController_Tags_Type
extern VTK_PYTHON_EXPORT PyTypeObject PyvtkMultiProcessController_Tags_Type;
#define DECLARED_PyvtkMultiProcessController_Tags_Type
#endif

PyTypeObject PyvtkMultiProcessController_Tags_Type = {
  PyObject_HEAD_INIT(&PyType_Type)
  0,
  (char*)"Tags", // tp_name
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

PyObject *PyvtkMultiProcessController_Tags_FromEnum(int val)
{
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkMultiProcessController_Tags_Type);
  self->ob_ival = val;
  return (PyObject *)self;
}


static PyObject *
PyvtkMultiProcessController_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiProcessController *op = static_cast<vtkMultiProcessController *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkMultiProcessController::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMultiProcessController_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiProcessController *op = static_cast<vtkMultiProcessController *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkMultiProcessController::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMultiProcessController_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiProcessController *op = static_cast<vtkMultiProcessController *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkMultiProcessController *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkMultiProcessController::NewInstance());

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
PyvtkMultiProcessController_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkMultiProcessController *tempr = vtkMultiProcessController::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMultiProcessController_Finalize_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Finalize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiProcessController *op = static_cast<vtkMultiProcessController *>(vp);

  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
    {
    op->Finalize();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkMultiProcessController_Finalize_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Finalize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiProcessController *op = static_cast<vtkMultiProcessController *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    op->Finalize(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkMultiProcessController_Finalize(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 0:
      return PyvtkMultiProcessController_Finalize_s1(self, args);
    case 1:
      return PyvtkMultiProcessController_Finalize_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "Finalize");
  return NULL;
}



static PyObject *
PyvtkMultiProcessController_SetNumberOfProcesses(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfProcesses");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiProcessController *op = static_cast<vtkMultiProcessController *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetNumberOfProcesses(temp0);
      }
    else
      {
      op->vtkMultiProcessController::SetNumberOfProcesses(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMultiProcessController_GetNumberOfProcesses(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfProcesses");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiProcessController *op = static_cast<vtkMultiProcessController *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfProcesses() :
      op->vtkMultiProcessController::GetNumberOfProcesses());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMultiProcessController_SetSingleProcessObject(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSingleProcessObject");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiProcessController *op = static_cast<vtkMultiProcessController *>(vp);

  vtkProcess *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkProcess"))
    {
    if (ap.IsBound())
      {
      op->SetSingleProcessObject(temp0);
      }
    else
      {
      op->vtkMultiProcessController::SetSingleProcessObject(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMultiProcessController_SingleMethodExecute(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SingleMethodExecute");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiProcessController *op = static_cast<vtkMultiProcessController *>(vp);

  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
    {
    op->SingleMethodExecute();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMultiProcessController_MultipleMethodExecute(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MultipleMethodExecute");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiProcessController *op = static_cast<vtkMultiProcessController *>(vp);

  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
    {
    op->MultipleMethodExecute();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMultiProcessController_GetLocalProcessId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLocalProcessId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiProcessController *op = static_cast<vtkMultiProcessController *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetLocalProcessId() :
      op->vtkMultiProcessController::GetLocalProcessId());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMultiProcessController_GetGlobalController(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetGlobalController");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkMultiProcessController *tempr = vtkMultiProcessController::GetGlobalController();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMultiProcessController_CreateOutputWindow(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateOutputWindow");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiProcessController *op = static_cast<vtkMultiProcessController *>(vp);

  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
    {
    op->CreateOutputWindow();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMultiProcessController_CreateSubController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateSubController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiProcessController *op = static_cast<vtkMultiProcessController *>(vp);

  vtkProcessGroup *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkProcessGroup"))
    {
    vtkMultiProcessController *tempr = (ap.IsBound() ?
      op->CreateSubController(temp0) :
      op->vtkMultiProcessController::CreateSubController(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMultiProcessController_PartitionController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PartitionController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiProcessController *op = static_cast<vtkMultiProcessController *>(vp);

  int temp0;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    vtkMultiProcessController *tempr = (ap.IsBound() ?
      op->PartitionController(temp0, temp1) :
      op->vtkMultiProcessController::PartitionController(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMultiProcessController_RemoveFirstRMI(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveFirstRMI");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiProcessController *op = static_cast<vtkMultiProcessController *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->RemoveFirstRMI(temp0) :
      op->vtkMultiProcessController::RemoveFirstRMI(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMultiProcessController_RemoveRMI(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveRMI");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiProcessController *op = static_cast<vtkMultiProcessController *>(vp);

  unsigned long temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->RemoveRMI(temp0) :
      op->vtkMultiProcessController::RemoveRMI(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMultiProcessController_RemoveAllRMICallbacks(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveAllRMICallbacks");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiProcessController *op = static_cast<vtkMultiProcessController *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->RemoveAllRMICallbacks(temp0);
      }
    else
      {
      op->vtkMultiProcessController::RemoveAllRMICallbacks(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMultiProcessController_RemoveRMICallback(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveRMICallback");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiProcessController *op = static_cast<vtkMultiProcessController *>(vp);

  unsigned long temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    bool tempr = (ap.IsBound() ?
      op->RemoveRMICallback(temp0) :
      op->vtkMultiProcessController::RemoveRMICallback(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMultiProcessController_TriggerRMI_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TriggerRMI");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiProcessController *op = static_cast<vtkMultiProcessController *>(vp);

  int temp0;
  void  *temp1 = NULL;
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
      op->TriggerRMI(temp0, temp1, temp2, temp3);
      }
    else
      {
      op->vtkMultiProcessController::TriggerRMI(temp0, temp1, temp2, temp3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkMultiProcessController_TriggerRMI_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TriggerRMI");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiProcessController *op = static_cast<vtkMultiProcessController *>(vp);

  int temp0;
  char *temp1 = NULL;
  int temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      op->TriggerRMI(temp0, temp1, temp2);
      }
    else
      {
      op->vtkMultiProcessController::TriggerRMI(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkMultiProcessController_TriggerRMI_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TriggerRMI");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiProcessController *op = static_cast<vtkMultiProcessController *>(vp);

  int temp0;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->TriggerRMI(temp0, temp1);
      }
    else
      {
      op->vtkMultiProcessController::TriggerRMI(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkMultiProcessController_TriggerRMI(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 4:
      return PyvtkMultiProcessController_TriggerRMI_s1(self, args);
    case 3:
      return PyvtkMultiProcessController_TriggerRMI_s2(self, args);
    case 2:
      return PyvtkMultiProcessController_TriggerRMI_s3(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "TriggerRMI");
  return NULL;
}



static PyObject *
PyvtkMultiProcessController_TriggerBreakRMIs(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TriggerBreakRMIs");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiProcessController *op = static_cast<vtkMultiProcessController *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->TriggerBreakRMIs();
      }
    else
      {
      op->vtkMultiProcessController::TriggerBreakRMIs();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMultiProcessController_TriggerRMIOnAllChildren_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TriggerRMIOnAllChildren");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiProcessController *op = static_cast<vtkMultiProcessController *>(vp);

  void  *temp0 = NULL;
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
      op->TriggerRMIOnAllChildren(temp0, temp1, temp2);
      }
    else
      {
      op->vtkMultiProcessController::TriggerRMIOnAllChildren(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkMultiProcessController_TriggerRMIOnAllChildren_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TriggerRMIOnAllChildren");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiProcessController *op = static_cast<vtkMultiProcessController *>(vp);

  char *temp0 = NULL;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->TriggerRMIOnAllChildren(temp0, temp1);
      }
    else
      {
      op->vtkMultiProcessController::TriggerRMIOnAllChildren(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkMultiProcessController_TriggerRMIOnAllChildren_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TriggerRMIOnAllChildren");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiProcessController *op = static_cast<vtkMultiProcessController *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->TriggerRMIOnAllChildren(temp0);
      }
    else
      {
      op->vtkMultiProcessController::TriggerRMIOnAllChildren(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkMultiProcessController_TriggerRMIOnAllChildren(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkMultiProcessController_TriggerRMIOnAllChildren_s1(self, args);
    case 2:
      return PyvtkMultiProcessController_TriggerRMIOnAllChildren_s2(self, args);
    case 1:
      return PyvtkMultiProcessController_TriggerRMIOnAllChildren_s3(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "TriggerRMIOnAllChildren");
  return NULL;
}



static PyObject *
PyvtkMultiProcessController_BroadcastTriggerRMIOnAllChildren(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BroadcastTriggerRMIOnAllChildren");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiProcessController *op = static_cast<vtkMultiProcessController *>(vp);

  void  *temp0 = NULL;
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
      op->BroadcastTriggerRMIOnAllChildren(temp0, temp1, temp2);
      }
    else
      {
      op->vtkMultiProcessController::BroadcastTriggerRMIOnAllChildren(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMultiProcessController_ProcessRMIs_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ProcessRMIs");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiProcessController *op = static_cast<vtkMultiProcessController *>(vp);

  int temp0;
  int temp1 = 0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1, 2) &&
      ap.GetValue(temp0) &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
    {
    int tempr = (ap.IsBound() ?
      op->ProcessRMIs(temp0, temp1) :
      op->vtkMultiProcessController::ProcessRMIs(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkMultiProcessController_ProcessRMIs_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ProcessRMIs");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiProcessController *op = static_cast<vtkMultiProcessController *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->ProcessRMIs() :
      op->vtkMultiProcessController::ProcessRMIs());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkMultiProcessController_ProcessRMIs(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
    case 2:
      return PyvtkMultiProcessController_ProcessRMIs_s1(self, args);
    case 0:
      return PyvtkMultiProcessController_ProcessRMIs_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "ProcessRMIs");
  return NULL;
}



static PyObject *
PyvtkMultiProcessController_BroadcastProcessRMIs(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BroadcastProcessRMIs");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiProcessController *op = static_cast<vtkMultiProcessController *>(vp);

  int temp0;
  int temp1 = 0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1, 2) &&
      ap.GetValue(temp0) &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
    {
    int tempr = (ap.IsBound() ?
      op->BroadcastProcessRMIs(temp0, temp1) :
      op->vtkMultiProcessController::BroadcastProcessRMIs(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMultiProcessController_SetBreakFlag(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBreakFlag");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiProcessController *op = static_cast<vtkMultiProcessController *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetBreakFlag(temp0);
      }
    else
      {
      op->vtkMultiProcessController::SetBreakFlag(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMultiProcessController_GetBreakFlag(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBreakFlag");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiProcessController *op = static_cast<vtkMultiProcessController *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetBreakFlag() :
      op->vtkMultiProcessController::GetBreakFlag());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMultiProcessController_SetBroadcastTriggerRMI(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBroadcastTriggerRMI");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiProcessController *op = static_cast<vtkMultiProcessController *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetBroadcastTriggerRMI(temp0);
      }
    else
      {
      op->vtkMultiProcessController::SetBroadcastTriggerRMI(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMultiProcessController_GetBroadcastTriggerRMI(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBroadcastTriggerRMI");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiProcessController *op = static_cast<vtkMultiProcessController *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetBroadcastTriggerRMI() :
      op->vtkMultiProcessController::GetBroadcastTriggerRMI());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMultiProcessController_BroadcastTriggerRMIOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BroadcastTriggerRMIOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiProcessController *op = static_cast<vtkMultiProcessController *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->BroadcastTriggerRMIOn();
      }
    else
      {
      op->vtkMultiProcessController::BroadcastTriggerRMIOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMultiProcessController_BroadcastTriggerRMIOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BroadcastTriggerRMIOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiProcessController *op = static_cast<vtkMultiProcessController *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->BroadcastTriggerRMIOff();
      }
    else
      {
      op->vtkMultiProcessController::BroadcastTriggerRMIOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMultiProcessController_GetCommunicator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCommunicator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiProcessController *op = static_cast<vtkMultiProcessController *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkCommunicator *tempr = (ap.IsBound() ?
      op->GetCommunicator() :
      op->vtkMultiProcessController::GetCommunicator());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMultiProcessController_GetBreakRMITag(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetBreakRMITag");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    int tempr = vtkMultiProcessController::GetBreakRMITag();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMultiProcessController_GetRMITag(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetRMITag");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    int tempr = vtkMultiProcessController::GetRMITag();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMultiProcessController_GetRMIArgTag(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetRMIArgTag");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    int tempr = vtkMultiProcessController::GetRMIArgTag();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMultiProcessController_Barrier(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Barrier");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiProcessController *op = static_cast<vtkMultiProcessController *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Barrier();
      }
    else
      {
      op->vtkMultiProcessController::Barrier();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMultiProcessController_SetGlobalController(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SetGlobalController");

  vtkMultiProcessController *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMultiProcessController"))
    {
    vtkMultiProcessController::SetGlobalController(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMultiProcessController_Send_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Send");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiProcessController *op = static_cast<vtkMultiProcessController *>(vp);

  int *temp0 = NULL;
  int small0[4];
  int size0 = 0;
  vtkIdType temp1;
  int temp2;
  int temp3;
  PyObject *result = NULL;

  if (op)
    {
    size0 = ap.GetArgSize(0);
    temp0 = small0;
    if (size0 > 4)
      {
      temp0 = new int[size0];
      }
    }

  if (op && ap.CheckArgCount(4) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
    {
    int tempr = (ap.IsBound() ?
      op->Send(temp0, temp1, temp2, temp3) :
      op->vtkMultiProcessController::Send(temp0, temp1, temp2, temp3));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  if (temp0 && temp0 != small0)
    {
    delete [] temp0;
    }

  return result;
}

static PyObject *
PyvtkMultiProcessController_Send_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Send");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiProcessController *op = static_cast<vtkMultiProcessController *>(vp);

  unsigned long *temp0 = NULL;
  unsigned long small0[4];
  int size0 = 0;
  vtkIdType temp1;
  int temp2;
  int temp3;
  PyObject *result = NULL;

  if (op)
    {
    size0 = ap.GetArgSize(0);
    temp0 = small0;
    if (size0 > 4)
      {
      temp0 = new unsigned long[size0];
      }
    }

  if (op && ap.CheckArgCount(4) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
    {
    int tempr = (ap.IsBound() ?
      op->Send(temp0, temp1, temp2, temp3) :
      op->vtkMultiProcessController::Send(temp0, temp1, temp2, temp3));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  if (temp0 && temp0 != small0)
    {
    delete [] temp0;
    }

  return result;
}

static PyObject *
PyvtkMultiProcessController_Send_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Send");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiProcessController *op = static_cast<vtkMultiProcessController *>(vp);

  char *temp0 = NULL;
  vtkIdType temp1;
  int temp2;
  int temp3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
    {
    int tempr = (ap.IsBound() ?
      op->Send(temp0, temp1, temp2, temp3) :
      op->vtkMultiProcessController::Send(temp0, temp1, temp2, temp3));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkMultiProcessController_Send_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Send");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiProcessController *op = static_cast<vtkMultiProcessController *>(vp);

  double *temp0 = NULL;
  double small0[4];
  int size0 = 0;
  vtkIdType temp1;
  int temp2;
  int temp3;
  PyObject *result = NULL;

  if (op)
    {
    size0 = ap.GetArgSize(0);
    temp0 = small0;
    if (size0 > 4)
      {
      temp0 = new double[size0];
      }
    }

  if (op && ap.CheckArgCount(4) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
    {
    int tempr = (ap.IsBound() ?
      op->Send(temp0, temp1, temp2, temp3) :
      op->vtkMultiProcessController::Send(temp0, temp1, temp2, temp3));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  if (temp0 && temp0 != small0)
    {
    delete [] temp0;
    }

  return result;
}

static PyObject *
PyvtkMultiProcessController_Send_s5(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Send");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiProcessController *op = static_cast<vtkMultiProcessController *>(vp);

  vtkIdType *temp0 = NULL;
  vtkIdType small0[4];
  int size0 = 0;
  vtkIdType temp1;
  int temp2;
  int temp3;
  PyObject *result = NULL;

  if (op)
    {
    size0 = ap.GetArgSize(0);
    temp0 = small0;
    if (size0 > 4)
      {
      temp0 = new vtkIdType[size0];
      }
    }

  if (op && ap.CheckArgCount(4) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
    {
    int tempr = (ap.IsBound() ?
      op->Send(temp0, temp1, temp2, temp3) :
      op->vtkMultiProcessController::Send(temp0, temp1, temp2, temp3));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  if (temp0 && temp0 != small0)
    {
    delete [] temp0;
    }

  return result;
}

static PyObject *
PyvtkMultiProcessController_Send_s6(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Send");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiProcessController *op = static_cast<vtkMultiProcessController *>(vp);

  vtkDataObject *temp0 = NULL;
  int temp1;
  int temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkDataObject") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    int tempr = (ap.IsBound() ?
      op->Send(temp0, temp1, temp2) :
      op->vtkMultiProcessController::Send(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkMultiProcessController_Send_s7(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Send");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiProcessController *op = static_cast<vtkMultiProcessController *>(vp);

  vtkDataArray *temp0 = NULL;
  int temp1;
  int temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkDataArray") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    int tempr = (ap.IsBound() ?
      op->Send(temp0, temp1, temp2) :
      op->vtkMultiProcessController::Send(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkMultiProcessController_Send_Methods[] = {
  {NULL, PyvtkMultiProcessController_Send_s1, METH_VARARGS,
   (char*)"@OLii *i"},
  {NULL, PyvtkMultiProcessController_Send_s2, METH_VARARGS,
   (char*)"@OLii *k"},
  {NULL, PyvtkMultiProcessController_Send_s3, METH_VARARGS,
   (char*)"@zLii"},
  {NULL, PyvtkMultiProcessController_Send_s4, METH_VARARGS,
   (char*)"@OLii *d"},
  {NULL, PyvtkMultiProcessController_Send_s5, METH_VARARGS,
   (char*)"@OLii *L"},
  {NULL, PyvtkMultiProcessController_Send_s6, METH_VARARGS,
   (char*)"@Oii *vtkDataObject"},
  {NULL, PyvtkMultiProcessController_Send_s7, METH_VARARGS,
   (char*)"@Oii *vtkDataArray"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkMultiProcessController_Send(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkMultiProcessController_Send_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
    case 4:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "Send");
  return NULL;
}



static PyObject *
PyvtkMultiProcessController_Receive_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Receive");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiProcessController *op = static_cast<vtkMultiProcessController *>(vp);

  int *temp0 = NULL;
  int *save0 = NULL;
  int small0[8];
  int size0 = 0;
  vtkIdType temp1;
  int temp2;
  int temp3;
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

  if (op && ap.CheckArgCount(4) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
    {
    ap.SaveArray(temp0, save0, size0);

    int tempr = (ap.IsBound() ?
      op->Receive(temp0, temp1, temp2, temp3) :
      op->vtkMultiProcessController::Receive(temp0, temp1, temp2, temp3));

    if (ap.ArrayHasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(0, temp0, size0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  if (temp0 && temp0 != small0)
    {
    delete [] temp0;
    }

  return result;
}

static PyObject *
PyvtkMultiProcessController_Receive_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Receive");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiProcessController *op = static_cast<vtkMultiProcessController *>(vp);

  unsigned long *temp0 = NULL;
  unsigned long *save0 = NULL;
  unsigned long small0[8];
  int size0 = 0;
  vtkIdType temp1;
  int temp2;
  int temp3;
  PyObject *result = NULL;

  if (op)
    {
    size0 = ap.GetArgSize(0);
    temp0 = small0;
    if (size0 > 4)
      {
      temp0 = new unsigned long[2*size0];
      }
    save0 = &temp0[size0];
    }

  if (op && ap.CheckArgCount(4) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
    {
    ap.SaveArray(temp0, save0, size0);

    int tempr = (ap.IsBound() ?
      op->Receive(temp0, temp1, temp2, temp3) :
      op->vtkMultiProcessController::Receive(temp0, temp1, temp2, temp3));

    if (ap.ArrayHasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(0, temp0, size0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  if (temp0 && temp0 != small0)
    {
    delete [] temp0;
    }

  return result;
}

static PyObject *
PyvtkMultiProcessController_Receive_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Receive");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiProcessController *op = static_cast<vtkMultiProcessController *>(vp);

  char *temp0 = NULL;
  vtkIdType temp1;
  int temp2;
  int temp3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
    {
    int tempr = (ap.IsBound() ?
      op->Receive(temp0, temp1, temp2, temp3) :
      op->vtkMultiProcessController::Receive(temp0, temp1, temp2, temp3));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkMultiProcessController_Receive_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Receive");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiProcessController *op = static_cast<vtkMultiProcessController *>(vp);

  double *temp0 = NULL;
  double *save0 = NULL;
  double small0[8];
  int size0 = 0;
  vtkIdType temp1;
  int temp2;
  int temp3;
  PyObject *result = NULL;

  if (op)
    {
    size0 = ap.GetArgSize(0);
    temp0 = small0;
    if (size0 > 4)
      {
      temp0 = new double[2*size0];
      }
    save0 = &temp0[size0];
    }

  if (op && ap.CheckArgCount(4) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
    {
    ap.SaveArray(temp0, save0, size0);

    int tempr = (ap.IsBound() ?
      op->Receive(temp0, temp1, temp2, temp3) :
      op->vtkMultiProcessController::Receive(temp0, temp1, temp2, temp3));

    if (ap.ArrayHasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(0, temp0, size0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  if (temp0 && temp0 != small0)
    {
    delete [] temp0;
    }

  return result;
}

static PyObject *
PyvtkMultiProcessController_Receive_s5(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Receive");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiProcessController *op = static_cast<vtkMultiProcessController *>(vp);

  vtkIdType *temp0 = NULL;
  vtkIdType *save0 = NULL;
  vtkIdType small0[8];
  int size0 = 0;
  vtkIdType temp1;
  int temp2;
  int temp3;
  PyObject *result = NULL;

  if (op)
    {
    size0 = ap.GetArgSize(0);
    temp0 = small0;
    if (size0 > 4)
      {
      temp0 = new vtkIdType[2*size0];
      }
    save0 = &temp0[size0];
    }

  if (op && ap.CheckArgCount(4) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
    {
    ap.SaveArray(temp0, save0, size0);

    int tempr = (ap.IsBound() ?
      op->Receive(temp0, temp1, temp2, temp3) :
      op->vtkMultiProcessController::Receive(temp0, temp1, temp2, temp3));

    if (ap.ArrayHasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(0, temp0, size0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  if (temp0 && temp0 != small0)
    {
    delete [] temp0;
    }

  return result;
}

static PyObject *
PyvtkMultiProcessController_Receive_s6(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Receive");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiProcessController *op = static_cast<vtkMultiProcessController *>(vp);

  vtkDataObject *temp0 = NULL;
  int temp1;
  int temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkDataObject") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    int tempr = (ap.IsBound() ?
      op->Receive(temp0, temp1, temp2) :
      op->vtkMultiProcessController::Receive(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkMultiProcessController_Receive_s7(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Receive");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiProcessController *op = static_cast<vtkMultiProcessController *>(vp);

  vtkDataArray *temp0 = NULL;
  int temp1;
  int temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkDataArray") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    int tempr = (ap.IsBound() ?
      op->Receive(temp0, temp1, temp2) :
      op->vtkMultiProcessController::Receive(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkMultiProcessController_Receive_Methods[] = {
  {NULL, PyvtkMultiProcessController_Receive_s1, METH_VARARGS,
   (char*)"@OLii *i"},
  {NULL, PyvtkMultiProcessController_Receive_s2, METH_VARARGS,
   (char*)"@OLii *k"},
  {NULL, PyvtkMultiProcessController_Receive_s3, METH_VARARGS,
   (char*)"@zLii"},
  {NULL, PyvtkMultiProcessController_Receive_s4, METH_VARARGS,
   (char*)"@OLii *d"},
  {NULL, PyvtkMultiProcessController_Receive_s5, METH_VARARGS,
   (char*)"@OLii *L"},
  {NULL, PyvtkMultiProcessController_Receive_s6, METH_VARARGS,
   (char*)"@Oii *vtkDataObject"},
  {NULL, PyvtkMultiProcessController_Receive_s7, METH_VARARGS,
   (char*)"@Oii *vtkDataArray"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkMultiProcessController_Receive(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkMultiProcessController_Receive_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
    case 4:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "Receive");
  return NULL;
}



static PyObject *
PyvtkMultiProcessController_ReceiveDataObject(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReceiveDataObject");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiProcessController *op = static_cast<vtkMultiProcessController *>(vp);

  int temp0;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    vtkDataObject *tempr = (ap.IsBound() ?
      op->ReceiveDataObject(temp0, temp1) :
      op->vtkMultiProcessController::ReceiveDataObject(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMultiProcessController_GetCount(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCount");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiProcessController *op = static_cast<vtkMultiProcessController *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetCount() :
      op->vtkMultiProcessController::GetCount());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMultiProcessController_Broadcast_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Broadcast");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiProcessController *op = static_cast<vtkMultiProcessController *>(vp);

  int *temp0 = NULL;
  int *save0 = NULL;
  int small0[8];
  int size0 = 0;
  vtkIdType temp1;
  int temp2;
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

  if (op && ap.CheckArgCount(3) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    ap.SaveArray(temp0, save0, size0);

    int tempr = (ap.IsBound() ?
      op->Broadcast(temp0, temp1, temp2) :
      op->vtkMultiProcessController::Broadcast(temp0, temp1, temp2));

    if (ap.ArrayHasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(0, temp0, size0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  if (temp0 && temp0 != small0)
    {
    delete [] temp0;
    }

  return result;
}

static PyObject *
PyvtkMultiProcessController_Broadcast_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Broadcast");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiProcessController *op = static_cast<vtkMultiProcessController *>(vp);

  unsigned long *temp0 = NULL;
  unsigned long *save0 = NULL;
  unsigned long small0[8];
  int size0 = 0;
  vtkIdType temp1;
  int temp2;
  PyObject *result = NULL;

  if (op)
    {
    size0 = ap.GetArgSize(0);
    temp0 = small0;
    if (size0 > 4)
      {
      temp0 = new unsigned long[2*size0];
      }
    save0 = &temp0[size0];
    }

  if (op && ap.CheckArgCount(3) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    ap.SaveArray(temp0, save0, size0);

    int tempr = (ap.IsBound() ?
      op->Broadcast(temp0, temp1, temp2) :
      op->vtkMultiProcessController::Broadcast(temp0, temp1, temp2));

    if (ap.ArrayHasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(0, temp0, size0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  if (temp0 && temp0 != small0)
    {
    delete [] temp0;
    }

  return result;
}

static PyObject *
PyvtkMultiProcessController_Broadcast_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Broadcast");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiProcessController *op = static_cast<vtkMultiProcessController *>(vp);

  char *temp0 = NULL;
  vtkIdType temp1;
  int temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    int tempr = (ap.IsBound() ?
      op->Broadcast(temp0, temp1, temp2) :
      op->vtkMultiProcessController::Broadcast(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkMultiProcessController_Broadcast_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Broadcast");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiProcessController *op = static_cast<vtkMultiProcessController *>(vp);

  double *temp0 = NULL;
  double *save0 = NULL;
  double small0[8];
  int size0 = 0;
  vtkIdType temp1;
  int temp2;
  PyObject *result = NULL;

  if (op)
    {
    size0 = ap.GetArgSize(0);
    temp0 = small0;
    if (size0 > 4)
      {
      temp0 = new double[2*size0];
      }
    save0 = &temp0[size0];
    }

  if (op && ap.CheckArgCount(3) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    ap.SaveArray(temp0, save0, size0);

    int tempr = (ap.IsBound() ?
      op->Broadcast(temp0, temp1, temp2) :
      op->vtkMultiProcessController::Broadcast(temp0, temp1, temp2));

    if (ap.ArrayHasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(0, temp0, size0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  if (temp0 && temp0 != small0)
    {
    delete [] temp0;
    }

  return result;
}

static PyObject *
PyvtkMultiProcessController_Broadcast_s5(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Broadcast");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiProcessController *op = static_cast<vtkMultiProcessController *>(vp);

  vtkIdType *temp0 = NULL;
  vtkIdType *save0 = NULL;
  vtkIdType small0[8];
  int size0 = 0;
  vtkIdType temp1;
  int temp2;
  PyObject *result = NULL;

  if (op)
    {
    size0 = ap.GetArgSize(0);
    temp0 = small0;
    if (size0 > 4)
      {
      temp0 = new vtkIdType[2*size0];
      }
    save0 = &temp0[size0];
    }

  if (op && ap.CheckArgCount(3) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    ap.SaveArray(temp0, save0, size0);

    int tempr = (ap.IsBound() ?
      op->Broadcast(temp0, temp1, temp2) :
      op->vtkMultiProcessController::Broadcast(temp0, temp1, temp2));

    if (ap.ArrayHasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(0, temp0, size0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  if (temp0 && temp0 != small0)
    {
    delete [] temp0;
    }

  return result;
}

static PyObject *
PyvtkMultiProcessController_Broadcast_s6(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Broadcast");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiProcessController *op = static_cast<vtkMultiProcessController *>(vp);

  vtkDataObject *temp0 = NULL;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkDataObject") &&
      ap.GetValue(temp1))
    {
    int tempr = (ap.IsBound() ?
      op->Broadcast(temp0, temp1) :
      op->vtkMultiProcessController::Broadcast(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkMultiProcessController_Broadcast_s7(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Broadcast");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiProcessController *op = static_cast<vtkMultiProcessController *>(vp);

  vtkDataArray *temp0 = NULL;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkDataArray") &&
      ap.GetValue(temp1))
    {
    int tempr = (ap.IsBound() ?
      op->Broadcast(temp0, temp1) :
      op->vtkMultiProcessController::Broadcast(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkMultiProcessController_Broadcast_Methods[] = {
  {NULL, PyvtkMultiProcessController_Broadcast_s1, METH_VARARGS,
   (char*)"@OLi *i"},
  {NULL, PyvtkMultiProcessController_Broadcast_s2, METH_VARARGS,
   (char*)"@OLi *k"},
  {NULL, PyvtkMultiProcessController_Broadcast_s3, METH_VARARGS,
   (char*)"@zLi"},
  {NULL, PyvtkMultiProcessController_Broadcast_s4, METH_VARARGS,
   (char*)"@OLi *d"},
  {NULL, PyvtkMultiProcessController_Broadcast_s5, METH_VARARGS,
   (char*)"@OLi *L"},
  {NULL, PyvtkMultiProcessController_Broadcast_s6, METH_VARARGS,
   (char*)"@Oi *vtkDataObject"},
  {NULL, PyvtkMultiProcessController_Broadcast_s7, METH_VARARGS,
   (char*)"@Oi *vtkDataArray"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkMultiProcessController_Broadcast(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkMultiProcessController_Broadcast_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
    case 3:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "Broadcast");
  return NULL;
}



static PyObject *
PyvtkMultiProcessController_Gather_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Gather");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiProcessController *op = static_cast<vtkMultiProcessController *>(vp);

  int *temp0 = NULL;
  int small0[4];
  int size0 = 0;
  int *temp1 = NULL;
  int *save1 = NULL;
  int small1[8];
  int size1 = 0;
  vtkIdType temp2;
  int temp3;
  PyObject *result = NULL;

  if (op)
    {
    size0 = ap.GetArgSize(0);
    temp0 = small0;
    if (size0 > 4)
      {
      temp0 = new int[size0];
      }
    size1 = ap.GetArgSize(1);
    temp1 = small1;
    if (size1 > 4)
      {
      temp1 = new int[2*size1];
      }
    save1 = &temp1[size1];
    }

  if (op && ap.CheckArgCount(4) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
    {
    ap.SaveArray(temp1, save1, size1);

    int tempr = (ap.IsBound() ?
      op->Gather(temp0, temp1, temp2, temp3) :
      op->vtkMultiProcessController::Gather(temp0, temp1, temp2, temp3));

    if (ap.ArrayHasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(1, temp1, size1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  if (temp0 && temp0 != small0)
    {
    delete [] temp0;
    }
  if (temp1 && temp1 != small1)
    {
    delete [] temp1;
    }

  return result;
}

static PyObject *
PyvtkMultiProcessController_Gather_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Gather");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiProcessController *op = static_cast<vtkMultiProcessController *>(vp);

  unsigned long *temp0 = NULL;
  unsigned long small0[4];
  int size0 = 0;
  unsigned long *temp1 = NULL;
  unsigned long *save1 = NULL;
  unsigned long small1[8];
  int size1 = 0;
  vtkIdType temp2;
  int temp3;
  PyObject *result = NULL;

  if (op)
    {
    size0 = ap.GetArgSize(0);
    temp0 = small0;
    if (size0 > 4)
      {
      temp0 = new unsigned long[size0];
      }
    size1 = ap.GetArgSize(1);
    temp1 = small1;
    if (size1 > 4)
      {
      temp1 = new unsigned long[2*size1];
      }
    save1 = &temp1[size1];
    }

  if (op && ap.CheckArgCount(4) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
    {
    ap.SaveArray(temp1, save1, size1);

    int tempr = (ap.IsBound() ?
      op->Gather(temp0, temp1, temp2, temp3) :
      op->vtkMultiProcessController::Gather(temp0, temp1, temp2, temp3));

    if (ap.ArrayHasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(1, temp1, size1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  if (temp0 && temp0 != small0)
    {
    delete [] temp0;
    }
  if (temp1 && temp1 != small1)
    {
    delete [] temp1;
    }

  return result;
}

static PyObject *
PyvtkMultiProcessController_Gather_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Gather");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiProcessController *op = static_cast<vtkMultiProcessController *>(vp);

  char *temp0 = NULL;
  char *temp1 = NULL;
  vtkIdType temp2;
  int temp3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
    {
    int tempr = (ap.IsBound() ?
      op->Gather(temp0, temp1, temp2, temp3) :
      op->vtkMultiProcessController::Gather(temp0, temp1, temp2, temp3));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkMultiProcessController_Gather_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Gather");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiProcessController *op = static_cast<vtkMultiProcessController *>(vp);

  double *temp0 = NULL;
  double small0[4];
  int size0 = 0;
  double *temp1 = NULL;
  double *save1 = NULL;
  double small1[8];
  int size1 = 0;
  vtkIdType temp2;
  int temp3;
  PyObject *result = NULL;

  if (op)
    {
    size0 = ap.GetArgSize(0);
    temp0 = small0;
    if (size0 > 4)
      {
      temp0 = new double[size0];
      }
    size1 = ap.GetArgSize(1);
    temp1 = small1;
    if (size1 > 4)
      {
      temp1 = new double[2*size1];
      }
    save1 = &temp1[size1];
    }

  if (op && ap.CheckArgCount(4) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
    {
    ap.SaveArray(temp1, save1, size1);

    int tempr = (ap.IsBound() ?
      op->Gather(temp0, temp1, temp2, temp3) :
      op->vtkMultiProcessController::Gather(temp0, temp1, temp2, temp3));

    if (ap.ArrayHasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(1, temp1, size1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  if (temp0 && temp0 != small0)
    {
    delete [] temp0;
    }
  if (temp1 && temp1 != small1)
    {
    delete [] temp1;
    }

  return result;
}

static PyObject *
PyvtkMultiProcessController_Gather_s5(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Gather");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiProcessController *op = static_cast<vtkMultiProcessController *>(vp);

  vtkIdType *temp0 = NULL;
  vtkIdType small0[4];
  int size0 = 0;
  vtkIdType *temp1 = NULL;
  vtkIdType *save1 = NULL;
  vtkIdType small1[8];
  int size1 = 0;
  vtkIdType temp2;
  int temp3;
  PyObject *result = NULL;

  if (op)
    {
    size0 = ap.GetArgSize(0);
    temp0 = small0;
    if (size0 > 4)
      {
      temp0 = new vtkIdType[size0];
      }
    size1 = ap.GetArgSize(1);
    temp1 = small1;
    if (size1 > 4)
      {
      temp1 = new vtkIdType[2*size1];
      }
    save1 = &temp1[size1];
    }

  if (op && ap.CheckArgCount(4) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
    {
    ap.SaveArray(temp1, save1, size1);

    int tempr = (ap.IsBound() ?
      op->Gather(temp0, temp1, temp2, temp3) :
      op->vtkMultiProcessController::Gather(temp0, temp1, temp2, temp3));

    if (ap.ArrayHasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(1, temp1, size1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  if (temp0 && temp0 != small0)
    {
    delete [] temp0;
    }
  if (temp1 && temp1 != small1)
    {
    delete [] temp1;
    }

  return result;
}

static PyObject *
PyvtkMultiProcessController_Gather_s6(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Gather");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiProcessController *op = static_cast<vtkMultiProcessController *>(vp);

  vtkDataArray *temp0 = NULL;
  vtkDataArray *temp1 = NULL;
  int temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkDataArray") &&
      ap.GetVTKObject(temp1, "vtkDataArray") &&
      ap.GetValue(temp2))
    {
    int tempr = (ap.IsBound() ?
      op->Gather(temp0, temp1, temp2) :
      op->vtkMultiProcessController::Gather(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkMultiProcessController_Gather_Methods[] = {
  {NULL, PyvtkMultiProcessController_Gather_s1, METH_VARARGS,
   (char*)"@OOLi *i *i"},
  {NULL, PyvtkMultiProcessController_Gather_s2, METH_VARARGS,
   (char*)"@OOLi *k *k"},
  {NULL, PyvtkMultiProcessController_Gather_s3, METH_VARARGS,
   (char*)"@zzLi"},
  {NULL, PyvtkMultiProcessController_Gather_s4, METH_VARARGS,
   (char*)"@OOLi *d *d"},
  {NULL, PyvtkMultiProcessController_Gather_s5, METH_VARARGS,
   (char*)"@OOLi *L *L"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkMultiProcessController_Gather(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkMultiProcessController_Gather_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkMultiProcessController_Gather_s6(self, args);
    case 4:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "Gather");
  return NULL;
}



static PyObject *
PyvtkMultiProcessController_GatherV_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GatherV");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiProcessController *op = static_cast<vtkMultiProcessController *>(vp);

  int *temp0 = NULL;
  int small0[4];
  int size0 = 0;
  int *temp1 = NULL;
  int *save1 = NULL;
  int small1[8];
  int size1 = 0;
  vtkIdType temp2;
  vtkIdType *temp3 = NULL;
  vtkIdType *save3 = NULL;
  vtkIdType small3[8];
  int size3 = 0;
  vtkIdType *temp4 = NULL;
  vtkIdType *save4 = NULL;
  vtkIdType small4[8];
  int size4 = 0;
  int temp5;
  PyObject *result = NULL;

  if (op)
    {
    size0 = ap.GetArgSize(0);
    temp0 = small0;
    if (size0 > 4)
      {
      temp0 = new int[size0];
      }
    size1 = ap.GetArgSize(1);
    temp1 = small1;
    if (size1 > 4)
      {
      temp1 = new int[2*size1];
      }
    save1 = &temp1[size1];
    size3 = ap.GetArgSize(3);
    temp3 = small3;
    if (size3 > 4)
      {
      temp3 = new vtkIdType[2*size3];
      }
    save3 = &temp3[size3];
    size4 = ap.GetArgSize(4);
    temp4 = small4;
    if (size4 > 4)
      {
      temp4 = new vtkIdType[2*size4];
      }
    save4 = &temp4[size4];
    }

  if (op && ap.CheckArgCount(6) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2) &&
      ap.GetArray(temp3, size3) &&
      ap.GetArray(temp4, size4) &&
      ap.GetValue(temp5))
    {
    ap.SaveArray(temp1, save1, size1);
    ap.SaveArray(temp3, save3, size3);
    ap.SaveArray(temp4, save4, size4);

    int tempr = (ap.IsBound() ?
      op->GatherV(temp0, temp1, temp2, temp3, temp4, temp5) :
      op->vtkMultiProcessController::GatherV(temp0, temp1, temp2, temp3, temp4, temp5));

    if (ap.ArrayHasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(1, temp1, size1);
      }

    if (ap.ArrayHasChanged(temp3, save3, size3) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(3, temp3, size3);
      }

    if (ap.ArrayHasChanged(temp4, save4, size4) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(4, temp4, size4);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  if (temp0 && temp0 != small0)
    {
    delete [] temp0;
    }
  if (temp1 && temp1 != small1)
    {
    delete [] temp1;
    }
  if (temp3 && temp3 != small3)
    {
    delete [] temp3;
    }
  if (temp4 && temp4 != small4)
    {
    delete [] temp4;
    }

  return result;
}

static PyObject *
PyvtkMultiProcessController_GatherV_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GatherV");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiProcessController *op = static_cast<vtkMultiProcessController *>(vp);

  unsigned long *temp0 = NULL;
  unsigned long small0[4];
  int size0 = 0;
  unsigned long *temp1 = NULL;
  unsigned long *save1 = NULL;
  unsigned long small1[8];
  int size1 = 0;
  vtkIdType temp2;
  vtkIdType *temp3 = NULL;
  vtkIdType *save3 = NULL;
  vtkIdType small3[8];
  int size3 = 0;
  vtkIdType *temp4 = NULL;
  vtkIdType *save4 = NULL;
  vtkIdType small4[8];
  int size4 = 0;
  int temp5;
  PyObject *result = NULL;

  if (op)
    {
    size0 = ap.GetArgSize(0);
    temp0 = small0;
    if (size0 > 4)
      {
      temp0 = new unsigned long[size0];
      }
    size1 = ap.GetArgSize(1);
    temp1 = small1;
    if (size1 > 4)
      {
      temp1 = new unsigned long[2*size1];
      }
    save1 = &temp1[size1];
    size3 = ap.GetArgSize(3);
    temp3 = small3;
    if (size3 > 4)
      {
      temp3 = new vtkIdType[2*size3];
      }
    save3 = &temp3[size3];
    size4 = ap.GetArgSize(4);
    temp4 = small4;
    if (size4 > 4)
      {
      temp4 = new vtkIdType[2*size4];
      }
    save4 = &temp4[size4];
    }

  if (op && ap.CheckArgCount(6) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2) &&
      ap.GetArray(temp3, size3) &&
      ap.GetArray(temp4, size4) &&
      ap.GetValue(temp5))
    {
    ap.SaveArray(temp1, save1, size1);
    ap.SaveArray(temp3, save3, size3);
    ap.SaveArray(temp4, save4, size4);

    int tempr = (ap.IsBound() ?
      op->GatherV(temp0, temp1, temp2, temp3, temp4, temp5) :
      op->vtkMultiProcessController::GatherV(temp0, temp1, temp2, temp3, temp4, temp5));

    if (ap.ArrayHasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(1, temp1, size1);
      }

    if (ap.ArrayHasChanged(temp3, save3, size3) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(3, temp3, size3);
      }

    if (ap.ArrayHasChanged(temp4, save4, size4) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(4, temp4, size4);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  if (temp0 && temp0 != small0)
    {
    delete [] temp0;
    }
  if (temp1 && temp1 != small1)
    {
    delete [] temp1;
    }
  if (temp3 && temp3 != small3)
    {
    delete [] temp3;
    }
  if (temp4 && temp4 != small4)
    {
    delete [] temp4;
    }

  return result;
}

static PyObject *
PyvtkMultiProcessController_GatherV_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GatherV");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiProcessController *op = static_cast<vtkMultiProcessController *>(vp);

  char *temp0 = NULL;
  char *temp1 = NULL;
  vtkIdType temp2;
  vtkIdType *temp3 = NULL;
  vtkIdType *save3 = NULL;
  vtkIdType small3[8];
  int size3 = 0;
  vtkIdType *temp4 = NULL;
  vtkIdType *save4 = NULL;
  vtkIdType small4[8];
  int size4 = 0;
  int temp5;
  PyObject *result = NULL;

  if (op)
    {
    size3 = ap.GetArgSize(3);
    temp3 = small3;
    if (size3 > 4)
      {
      temp3 = new vtkIdType[2*size3];
      }
    save3 = &temp3[size3];
    size4 = ap.GetArgSize(4);
    temp4 = small4;
    if (size4 > 4)
      {
      temp4 = new vtkIdType[2*size4];
      }
    save4 = &temp4[size4];
    }

  if (op && ap.CheckArgCount(6) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetArray(temp3, size3) &&
      ap.GetArray(temp4, size4) &&
      ap.GetValue(temp5))
    {
    ap.SaveArray(temp3, save3, size3);
    ap.SaveArray(temp4, save4, size4);

    int tempr = (ap.IsBound() ?
      op->GatherV(temp0, temp1, temp2, temp3, temp4, temp5) :
      op->vtkMultiProcessController::GatherV(temp0, temp1, temp2, temp3, temp4, temp5));

    if (ap.ArrayHasChanged(temp3, save3, size3) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(3, temp3, size3);
      }

    if (ap.ArrayHasChanged(temp4, save4, size4) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(4, temp4, size4);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  if (temp3 && temp3 != small3)
    {
    delete [] temp3;
    }
  if (temp4 && temp4 != small4)
    {
    delete [] temp4;
    }

  return result;
}

static PyObject *
PyvtkMultiProcessController_GatherV_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GatherV");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiProcessController *op = static_cast<vtkMultiProcessController *>(vp);

  double *temp0 = NULL;
  double small0[4];
  int size0 = 0;
  double *temp1 = NULL;
  double *save1 = NULL;
  double small1[8];
  int size1 = 0;
  vtkIdType temp2;
  vtkIdType *temp3 = NULL;
  vtkIdType *save3 = NULL;
  vtkIdType small3[8];
  int size3 = 0;
  vtkIdType *temp4 = NULL;
  vtkIdType *save4 = NULL;
  vtkIdType small4[8];
  int size4 = 0;
  int temp5;
  PyObject *result = NULL;

  if (op)
    {
    size0 = ap.GetArgSize(0);
    temp0 = small0;
    if (size0 > 4)
      {
      temp0 = new double[size0];
      }
    size1 = ap.GetArgSize(1);
    temp1 = small1;
    if (size1 > 4)
      {
      temp1 = new double[2*size1];
      }
    save1 = &temp1[size1];
    size3 = ap.GetArgSize(3);
    temp3 = small3;
    if (size3 > 4)
      {
      temp3 = new vtkIdType[2*size3];
      }
    save3 = &temp3[size3];
    size4 = ap.GetArgSize(4);
    temp4 = small4;
    if (size4 > 4)
      {
      temp4 = new vtkIdType[2*size4];
      }
    save4 = &temp4[size4];
    }

  if (op && ap.CheckArgCount(6) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2) &&
      ap.GetArray(temp3, size3) &&
      ap.GetArray(temp4, size4) &&
      ap.GetValue(temp5))
    {
    ap.SaveArray(temp1, save1, size1);
    ap.SaveArray(temp3, save3, size3);
    ap.SaveArray(temp4, save4, size4);

    int tempr = (ap.IsBound() ?
      op->GatherV(temp0, temp1, temp2, temp3, temp4, temp5) :
      op->vtkMultiProcessController::GatherV(temp0, temp1, temp2, temp3, temp4, temp5));

    if (ap.ArrayHasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(1, temp1, size1);
      }

    if (ap.ArrayHasChanged(temp3, save3, size3) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(3, temp3, size3);
      }

    if (ap.ArrayHasChanged(temp4, save4, size4) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(4, temp4, size4);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  if (temp0 && temp0 != small0)
    {
    delete [] temp0;
    }
  if (temp1 && temp1 != small1)
    {
    delete [] temp1;
    }
  if (temp3 && temp3 != small3)
    {
    delete [] temp3;
    }
  if (temp4 && temp4 != small4)
    {
    delete [] temp4;
    }

  return result;
}

static PyObject *
PyvtkMultiProcessController_GatherV_s5(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GatherV");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiProcessController *op = static_cast<vtkMultiProcessController *>(vp);

  vtkIdType *temp0 = NULL;
  vtkIdType small0[4];
  int size0 = 0;
  vtkIdType *temp1 = NULL;
  vtkIdType *save1 = NULL;
  vtkIdType small1[8];
  int size1 = 0;
  vtkIdType temp2;
  vtkIdType *temp3 = NULL;
  vtkIdType *save3 = NULL;
  vtkIdType small3[8];
  int size3 = 0;
  vtkIdType *temp4 = NULL;
  vtkIdType *save4 = NULL;
  vtkIdType small4[8];
  int size4 = 0;
  int temp5;
  PyObject *result = NULL;

  if (op)
    {
    size0 = ap.GetArgSize(0);
    temp0 = small0;
    if (size0 > 4)
      {
      temp0 = new vtkIdType[size0];
      }
    size1 = ap.GetArgSize(1);
    temp1 = small1;
    if (size1 > 4)
      {
      temp1 = new vtkIdType[2*size1];
      }
    save1 = &temp1[size1];
    size3 = ap.GetArgSize(3);
    temp3 = small3;
    if (size3 > 4)
      {
      temp3 = new vtkIdType[2*size3];
      }
    save3 = &temp3[size3];
    size4 = ap.GetArgSize(4);
    temp4 = small4;
    if (size4 > 4)
      {
      temp4 = new vtkIdType[2*size4];
      }
    save4 = &temp4[size4];
    }

  if (op && ap.CheckArgCount(6) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2) &&
      ap.GetArray(temp3, size3) &&
      ap.GetArray(temp4, size4) &&
      ap.GetValue(temp5))
    {
    ap.SaveArray(temp1, save1, size1);
    ap.SaveArray(temp3, save3, size3);
    ap.SaveArray(temp4, save4, size4);

    int tempr = (ap.IsBound() ?
      op->GatherV(temp0, temp1, temp2, temp3, temp4, temp5) :
      op->vtkMultiProcessController::GatherV(temp0, temp1, temp2, temp3, temp4, temp5));

    if (ap.ArrayHasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(1, temp1, size1);
      }

    if (ap.ArrayHasChanged(temp3, save3, size3) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(3, temp3, size3);
      }

    if (ap.ArrayHasChanged(temp4, save4, size4) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(4, temp4, size4);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  if (temp0 && temp0 != small0)
    {
    delete [] temp0;
    }
  if (temp1 && temp1 != small1)
    {
    delete [] temp1;
    }
  if (temp3 && temp3 != small3)
    {
    delete [] temp3;
    }
  if (temp4 && temp4 != small4)
    {
    delete [] temp4;
    }

  return result;
}

static PyObject *
PyvtkMultiProcessController_GatherV_s6(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GatherV");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiProcessController *op = static_cast<vtkMultiProcessController *>(vp);

  vtkDataArray *temp0 = NULL;
  vtkDataArray *temp1 = NULL;
  vtkIdType *temp2 = NULL;
  vtkIdType *save2 = NULL;
  vtkIdType small2[8];
  int size2 = 0;
  vtkIdType *temp3 = NULL;
  vtkIdType *save3 = NULL;
  vtkIdType small3[8];
  int size3 = 0;
  int temp4;
  PyObject *result = NULL;

  if (op)
    {
    size2 = ap.GetArgSize(2);
    temp2 = small2;
    if (size2 > 4)
      {
      temp2 = new vtkIdType[2*size2];
      }
    save2 = &temp2[size2];
    size3 = ap.GetArgSize(3);
    temp3 = small3;
    if (size3 > 4)
      {
      temp3 = new vtkIdType[2*size3];
      }
    save3 = &temp3[size3];
    }

  if (op && ap.CheckArgCount(5) &&
      ap.GetVTKObject(temp0, "vtkDataArray") &&
      ap.GetVTKObject(temp1, "vtkDataArray") &&
      ap.GetArray(temp2, size2) &&
      ap.GetArray(temp3, size3) &&
      ap.GetValue(temp4))
    {
    ap.SaveArray(temp2, save2, size2);
    ap.SaveArray(temp3, save3, size3);

    int tempr = (ap.IsBound() ?
      op->GatherV(temp0, temp1, temp2, temp3, temp4) :
      op->vtkMultiProcessController::GatherV(temp0, temp1, temp2, temp3, temp4));

    if (ap.ArrayHasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(2, temp2, size2);
      }

    if (ap.ArrayHasChanged(temp3, save3, size3) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(3, temp3, size3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  if (temp2 && temp2 != small2)
    {
    delete [] temp2;
    }
  if (temp3 && temp3 != small3)
    {
    delete [] temp3;
    }

  return result;
}

static PyObject *
PyvtkMultiProcessController_GatherV_s7(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GatherV");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiProcessController *op = static_cast<vtkMultiProcessController *>(vp);

  vtkDataArray *temp0 = NULL;
  vtkDataArray *temp1 = NULL;
  int temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkDataArray") &&
      ap.GetVTKObject(temp1, "vtkDataArray") &&
      ap.GetValue(temp2))
    {
    int tempr = (ap.IsBound() ?
      op->GatherV(temp0, temp1, temp2) :
      op->vtkMultiProcessController::GatherV(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkMultiProcessController_GatherV_Methods[] = {
  {NULL, PyvtkMultiProcessController_GatherV_s1, METH_VARARGS,
   (char*)"@OOLOOi *i *i *L *L"},
  {NULL, PyvtkMultiProcessController_GatherV_s2, METH_VARARGS,
   (char*)"@OOLOOi *k *k *L *L"},
  {NULL, PyvtkMultiProcessController_GatherV_s3, METH_VARARGS,
   (char*)"@zzLOOi *L *L"},
  {NULL, PyvtkMultiProcessController_GatherV_s4, METH_VARARGS,
   (char*)"@OOLOOi *d *d *L *L"},
  {NULL, PyvtkMultiProcessController_GatherV_s5, METH_VARARGS,
   (char*)"@OOLOOi *L *L *L *L"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkMultiProcessController_GatherV(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkMultiProcessController_GatherV_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 5:
      return PyvtkMultiProcessController_GatherV_s6(self, args);
    case 3:
      return PyvtkMultiProcessController_GatherV_s7(self, args);
    case 6:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GatherV");
  return NULL;
}



static PyObject *
PyvtkMultiProcessController_Scatter_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Scatter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiProcessController *op = static_cast<vtkMultiProcessController *>(vp);

  int *temp0 = NULL;
  int small0[4];
  int size0 = 0;
  int *temp1 = NULL;
  int *save1 = NULL;
  int small1[8];
  int size1 = 0;
  vtkIdType temp2;
  int temp3;
  PyObject *result = NULL;

  if (op)
    {
    size0 = ap.GetArgSize(0);
    temp0 = small0;
    if (size0 > 4)
      {
      temp0 = new int[size0];
      }
    size1 = ap.GetArgSize(1);
    temp1 = small1;
    if (size1 > 4)
      {
      temp1 = new int[2*size1];
      }
    save1 = &temp1[size1];
    }

  if (op && ap.CheckArgCount(4) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
    {
    ap.SaveArray(temp1, save1, size1);

    int tempr = (ap.IsBound() ?
      op->Scatter(temp0, temp1, temp2, temp3) :
      op->vtkMultiProcessController::Scatter(temp0, temp1, temp2, temp3));

    if (ap.ArrayHasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(1, temp1, size1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  if (temp0 && temp0 != small0)
    {
    delete [] temp0;
    }
  if (temp1 && temp1 != small1)
    {
    delete [] temp1;
    }

  return result;
}

static PyObject *
PyvtkMultiProcessController_Scatter_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Scatter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiProcessController *op = static_cast<vtkMultiProcessController *>(vp);

  unsigned long *temp0 = NULL;
  unsigned long small0[4];
  int size0 = 0;
  unsigned long *temp1 = NULL;
  unsigned long *save1 = NULL;
  unsigned long small1[8];
  int size1 = 0;
  vtkIdType temp2;
  int temp3;
  PyObject *result = NULL;

  if (op)
    {
    size0 = ap.GetArgSize(0);
    temp0 = small0;
    if (size0 > 4)
      {
      temp0 = new unsigned long[size0];
      }
    size1 = ap.GetArgSize(1);
    temp1 = small1;
    if (size1 > 4)
      {
      temp1 = new unsigned long[2*size1];
      }
    save1 = &temp1[size1];
    }

  if (op && ap.CheckArgCount(4) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
    {
    ap.SaveArray(temp1, save1, size1);

    int tempr = (ap.IsBound() ?
      op->Scatter(temp0, temp1, temp2, temp3) :
      op->vtkMultiProcessController::Scatter(temp0, temp1, temp2, temp3));

    if (ap.ArrayHasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(1, temp1, size1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  if (temp0 && temp0 != small0)
    {
    delete [] temp0;
    }
  if (temp1 && temp1 != small1)
    {
    delete [] temp1;
    }

  return result;
}

static PyObject *
PyvtkMultiProcessController_Scatter_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Scatter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiProcessController *op = static_cast<vtkMultiProcessController *>(vp);

  char *temp0 = NULL;
  char *temp1 = NULL;
  vtkIdType temp2;
  int temp3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
    {
    int tempr = (ap.IsBound() ?
      op->Scatter(temp0, temp1, temp2, temp3) :
      op->vtkMultiProcessController::Scatter(temp0, temp1, temp2, temp3));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkMultiProcessController_Scatter_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Scatter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiProcessController *op = static_cast<vtkMultiProcessController *>(vp);

  double *temp0 = NULL;
  double small0[4];
  int size0 = 0;
  double *temp1 = NULL;
  double *save1 = NULL;
  double small1[8];
  int size1 = 0;
  vtkIdType temp2;
  int temp3;
  PyObject *result = NULL;

  if (op)
    {
    size0 = ap.GetArgSize(0);
    temp0 = small0;
    if (size0 > 4)
      {
      temp0 = new double[size0];
      }
    size1 = ap.GetArgSize(1);
    temp1 = small1;
    if (size1 > 4)
      {
      temp1 = new double[2*size1];
      }
    save1 = &temp1[size1];
    }

  if (op && ap.CheckArgCount(4) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
    {
    ap.SaveArray(temp1, save1, size1);

    int tempr = (ap.IsBound() ?
      op->Scatter(temp0, temp1, temp2, temp3) :
      op->vtkMultiProcessController::Scatter(temp0, temp1, temp2, temp3));

    if (ap.ArrayHasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(1, temp1, size1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  if (temp0 && temp0 != small0)
    {
    delete [] temp0;
    }
  if (temp1 && temp1 != small1)
    {
    delete [] temp1;
    }

  return result;
}

static PyObject *
PyvtkMultiProcessController_Scatter_s5(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Scatter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiProcessController *op = static_cast<vtkMultiProcessController *>(vp);

  vtkIdType *temp0 = NULL;
  vtkIdType small0[4];
  int size0 = 0;
  vtkIdType *temp1 = NULL;
  vtkIdType *save1 = NULL;
  vtkIdType small1[8];
  int size1 = 0;
  vtkIdType temp2;
  int temp3;
  PyObject *result = NULL;

  if (op)
    {
    size0 = ap.GetArgSize(0);
    temp0 = small0;
    if (size0 > 4)
      {
      temp0 = new vtkIdType[size0];
      }
    size1 = ap.GetArgSize(1);
    temp1 = small1;
    if (size1 > 4)
      {
      temp1 = new vtkIdType[2*size1];
      }
    save1 = &temp1[size1];
    }

  if (op && ap.CheckArgCount(4) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
    {
    ap.SaveArray(temp1, save1, size1);

    int tempr = (ap.IsBound() ?
      op->Scatter(temp0, temp1, temp2, temp3) :
      op->vtkMultiProcessController::Scatter(temp0, temp1, temp2, temp3));

    if (ap.ArrayHasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(1, temp1, size1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  if (temp0 && temp0 != small0)
    {
    delete [] temp0;
    }
  if (temp1 && temp1 != small1)
    {
    delete [] temp1;
    }

  return result;
}

static PyObject *
PyvtkMultiProcessController_Scatter_s6(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Scatter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiProcessController *op = static_cast<vtkMultiProcessController *>(vp);

  vtkDataArray *temp0 = NULL;
  vtkDataArray *temp1 = NULL;
  int temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkDataArray") &&
      ap.GetVTKObject(temp1, "vtkDataArray") &&
      ap.GetValue(temp2))
    {
    int tempr = (ap.IsBound() ?
      op->Scatter(temp0, temp1, temp2) :
      op->vtkMultiProcessController::Scatter(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkMultiProcessController_Scatter_Methods[] = {
  {NULL, PyvtkMultiProcessController_Scatter_s1, METH_VARARGS,
   (char*)"@OOLi *i *i"},
  {NULL, PyvtkMultiProcessController_Scatter_s2, METH_VARARGS,
   (char*)"@OOLi *k *k"},
  {NULL, PyvtkMultiProcessController_Scatter_s3, METH_VARARGS,
   (char*)"@zzLi"},
  {NULL, PyvtkMultiProcessController_Scatter_s4, METH_VARARGS,
   (char*)"@OOLi *d *d"},
  {NULL, PyvtkMultiProcessController_Scatter_s5, METH_VARARGS,
   (char*)"@OOLi *L *L"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkMultiProcessController_Scatter(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkMultiProcessController_Scatter_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkMultiProcessController_Scatter_s6(self, args);
    case 4:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "Scatter");
  return NULL;
}



static PyObject *
PyvtkMultiProcessController_ScatterV_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ScatterV");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiProcessController *op = static_cast<vtkMultiProcessController *>(vp);

  int *temp0 = NULL;
  int small0[4];
  int size0 = 0;
  int *temp1 = NULL;
  int *save1 = NULL;
  int small1[8];
  int size1 = 0;
  vtkIdType *temp2 = NULL;
  vtkIdType *save2 = NULL;
  vtkIdType small2[8];
  int size2 = 0;
  vtkIdType *temp3 = NULL;
  vtkIdType *save3 = NULL;
  vtkIdType small3[8];
  int size3 = 0;
  vtkIdType temp4;
  int temp5;
  PyObject *result = NULL;

  if (op)
    {
    size0 = ap.GetArgSize(0);
    temp0 = small0;
    if (size0 > 4)
      {
      temp0 = new int[size0];
      }
    size1 = ap.GetArgSize(1);
    temp1 = small1;
    if (size1 > 4)
      {
      temp1 = new int[2*size1];
      }
    save1 = &temp1[size1];
    size2 = ap.GetArgSize(2);
    temp2 = small2;
    if (size2 > 4)
      {
      temp2 = new vtkIdType[2*size2];
      }
    save2 = &temp2[size2];
    size3 = ap.GetArgSize(3);
    temp3 = small3;
    if (size3 > 4)
      {
      temp3 = new vtkIdType[2*size3];
      }
    save3 = &temp3[size3];
    }

  if (op && ap.CheckArgCount(6) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetArray(temp2, size2) &&
      ap.GetArray(temp3, size3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5))
    {
    ap.SaveArray(temp1, save1, size1);
    ap.SaveArray(temp2, save2, size2);
    ap.SaveArray(temp3, save3, size3);

    int tempr = (ap.IsBound() ?
      op->ScatterV(temp0, temp1, temp2, temp3, temp4, temp5) :
      op->vtkMultiProcessController::ScatterV(temp0, temp1, temp2, temp3, temp4, temp5));

    if (ap.ArrayHasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(1, temp1, size1);
      }

    if (ap.ArrayHasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(2, temp2, size2);
      }

    if (ap.ArrayHasChanged(temp3, save3, size3) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(3, temp3, size3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  if (temp0 && temp0 != small0)
    {
    delete [] temp0;
    }
  if (temp1 && temp1 != small1)
    {
    delete [] temp1;
    }
  if (temp2 && temp2 != small2)
    {
    delete [] temp2;
    }
  if (temp3 && temp3 != small3)
    {
    delete [] temp3;
    }

  return result;
}

static PyObject *
PyvtkMultiProcessController_ScatterV_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ScatterV");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiProcessController *op = static_cast<vtkMultiProcessController *>(vp);

  unsigned long *temp0 = NULL;
  unsigned long small0[4];
  int size0 = 0;
  unsigned long *temp1 = NULL;
  unsigned long *save1 = NULL;
  unsigned long small1[8];
  int size1 = 0;
  vtkIdType *temp2 = NULL;
  vtkIdType *save2 = NULL;
  vtkIdType small2[8];
  int size2 = 0;
  vtkIdType *temp3 = NULL;
  vtkIdType *save3 = NULL;
  vtkIdType small3[8];
  int size3 = 0;
  vtkIdType temp4;
  int temp5;
  PyObject *result = NULL;

  if (op)
    {
    size0 = ap.GetArgSize(0);
    temp0 = small0;
    if (size0 > 4)
      {
      temp0 = new unsigned long[size0];
      }
    size1 = ap.GetArgSize(1);
    temp1 = small1;
    if (size1 > 4)
      {
      temp1 = new unsigned long[2*size1];
      }
    save1 = &temp1[size1];
    size2 = ap.GetArgSize(2);
    temp2 = small2;
    if (size2 > 4)
      {
      temp2 = new vtkIdType[2*size2];
      }
    save2 = &temp2[size2];
    size3 = ap.GetArgSize(3);
    temp3 = small3;
    if (size3 > 4)
      {
      temp3 = new vtkIdType[2*size3];
      }
    save3 = &temp3[size3];
    }

  if (op && ap.CheckArgCount(6) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetArray(temp2, size2) &&
      ap.GetArray(temp3, size3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5))
    {
    ap.SaveArray(temp1, save1, size1);
    ap.SaveArray(temp2, save2, size2);
    ap.SaveArray(temp3, save3, size3);

    int tempr = (ap.IsBound() ?
      op->ScatterV(temp0, temp1, temp2, temp3, temp4, temp5) :
      op->vtkMultiProcessController::ScatterV(temp0, temp1, temp2, temp3, temp4, temp5));

    if (ap.ArrayHasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(1, temp1, size1);
      }

    if (ap.ArrayHasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(2, temp2, size2);
      }

    if (ap.ArrayHasChanged(temp3, save3, size3) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(3, temp3, size3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  if (temp0 && temp0 != small0)
    {
    delete [] temp0;
    }
  if (temp1 && temp1 != small1)
    {
    delete [] temp1;
    }
  if (temp2 && temp2 != small2)
    {
    delete [] temp2;
    }
  if (temp3 && temp3 != small3)
    {
    delete [] temp3;
    }

  return result;
}

static PyObject *
PyvtkMultiProcessController_ScatterV_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ScatterV");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiProcessController *op = static_cast<vtkMultiProcessController *>(vp);

  char *temp0 = NULL;
  char *temp1 = NULL;
  vtkIdType *temp2 = NULL;
  vtkIdType *save2 = NULL;
  vtkIdType small2[8];
  int size2 = 0;
  vtkIdType *temp3 = NULL;
  vtkIdType *save3 = NULL;
  vtkIdType small3[8];
  int size3 = 0;
  vtkIdType temp4;
  int temp5;
  PyObject *result = NULL;

  if (op)
    {
    size2 = ap.GetArgSize(2);
    temp2 = small2;
    if (size2 > 4)
      {
      temp2 = new vtkIdType[2*size2];
      }
    save2 = &temp2[size2];
    size3 = ap.GetArgSize(3);
    temp3 = small3;
    if (size3 > 4)
      {
      temp3 = new vtkIdType[2*size3];
      }
    save3 = &temp3[size3];
    }

  if (op && ap.CheckArgCount(6) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetArray(temp2, size2) &&
      ap.GetArray(temp3, size3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5))
    {
    ap.SaveArray(temp2, save2, size2);
    ap.SaveArray(temp3, save3, size3);

    int tempr = (ap.IsBound() ?
      op->ScatterV(temp0, temp1, temp2, temp3, temp4, temp5) :
      op->vtkMultiProcessController::ScatterV(temp0, temp1, temp2, temp3, temp4, temp5));

    if (ap.ArrayHasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(2, temp2, size2);
      }

    if (ap.ArrayHasChanged(temp3, save3, size3) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(3, temp3, size3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  if (temp2 && temp2 != small2)
    {
    delete [] temp2;
    }
  if (temp3 && temp3 != small3)
    {
    delete [] temp3;
    }

  return result;
}

static PyObject *
PyvtkMultiProcessController_ScatterV_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ScatterV");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiProcessController *op = static_cast<vtkMultiProcessController *>(vp);

  double *temp0 = NULL;
  double small0[4];
  int size0 = 0;
  double *temp1 = NULL;
  double *save1 = NULL;
  double small1[8];
  int size1 = 0;
  vtkIdType *temp2 = NULL;
  vtkIdType *save2 = NULL;
  vtkIdType small2[8];
  int size2 = 0;
  vtkIdType *temp3 = NULL;
  vtkIdType *save3 = NULL;
  vtkIdType small3[8];
  int size3 = 0;
  vtkIdType temp4;
  int temp5;
  PyObject *result = NULL;

  if (op)
    {
    size0 = ap.GetArgSize(0);
    temp0 = small0;
    if (size0 > 4)
      {
      temp0 = new double[size0];
      }
    size1 = ap.GetArgSize(1);
    temp1 = small1;
    if (size1 > 4)
      {
      temp1 = new double[2*size1];
      }
    save1 = &temp1[size1];
    size2 = ap.GetArgSize(2);
    temp2 = small2;
    if (size2 > 4)
      {
      temp2 = new vtkIdType[2*size2];
      }
    save2 = &temp2[size2];
    size3 = ap.GetArgSize(3);
    temp3 = small3;
    if (size3 > 4)
      {
      temp3 = new vtkIdType[2*size3];
      }
    save3 = &temp3[size3];
    }

  if (op && ap.CheckArgCount(6) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetArray(temp2, size2) &&
      ap.GetArray(temp3, size3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5))
    {
    ap.SaveArray(temp1, save1, size1);
    ap.SaveArray(temp2, save2, size2);
    ap.SaveArray(temp3, save3, size3);

    int tempr = (ap.IsBound() ?
      op->ScatterV(temp0, temp1, temp2, temp3, temp4, temp5) :
      op->vtkMultiProcessController::ScatterV(temp0, temp1, temp2, temp3, temp4, temp5));

    if (ap.ArrayHasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(1, temp1, size1);
      }

    if (ap.ArrayHasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(2, temp2, size2);
      }

    if (ap.ArrayHasChanged(temp3, save3, size3) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(3, temp3, size3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  if (temp0 && temp0 != small0)
    {
    delete [] temp0;
    }
  if (temp1 && temp1 != small1)
    {
    delete [] temp1;
    }
  if (temp2 && temp2 != small2)
    {
    delete [] temp2;
    }
  if (temp3 && temp3 != small3)
    {
    delete [] temp3;
    }

  return result;
}

static PyObject *
PyvtkMultiProcessController_ScatterV_s5(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ScatterV");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiProcessController *op = static_cast<vtkMultiProcessController *>(vp);

  vtkIdType *temp0 = NULL;
  vtkIdType small0[4];
  int size0 = 0;
  vtkIdType *temp1 = NULL;
  vtkIdType *save1 = NULL;
  vtkIdType small1[8];
  int size1 = 0;
  vtkIdType *temp2 = NULL;
  vtkIdType *save2 = NULL;
  vtkIdType small2[8];
  int size2 = 0;
  vtkIdType *temp3 = NULL;
  vtkIdType *save3 = NULL;
  vtkIdType small3[8];
  int size3 = 0;
  vtkIdType temp4;
  int temp5;
  PyObject *result = NULL;

  if (op)
    {
    size0 = ap.GetArgSize(0);
    temp0 = small0;
    if (size0 > 4)
      {
      temp0 = new vtkIdType[size0];
      }
    size1 = ap.GetArgSize(1);
    temp1 = small1;
    if (size1 > 4)
      {
      temp1 = new vtkIdType[2*size1];
      }
    save1 = &temp1[size1];
    size2 = ap.GetArgSize(2);
    temp2 = small2;
    if (size2 > 4)
      {
      temp2 = new vtkIdType[2*size2];
      }
    save2 = &temp2[size2];
    size3 = ap.GetArgSize(3);
    temp3 = small3;
    if (size3 > 4)
      {
      temp3 = new vtkIdType[2*size3];
      }
    save3 = &temp3[size3];
    }

  if (op && ap.CheckArgCount(6) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetArray(temp2, size2) &&
      ap.GetArray(temp3, size3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5))
    {
    ap.SaveArray(temp1, save1, size1);
    ap.SaveArray(temp2, save2, size2);
    ap.SaveArray(temp3, save3, size3);

    int tempr = (ap.IsBound() ?
      op->ScatterV(temp0, temp1, temp2, temp3, temp4, temp5) :
      op->vtkMultiProcessController::ScatterV(temp0, temp1, temp2, temp3, temp4, temp5));

    if (ap.ArrayHasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(1, temp1, size1);
      }

    if (ap.ArrayHasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(2, temp2, size2);
      }

    if (ap.ArrayHasChanged(temp3, save3, size3) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(3, temp3, size3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  if (temp0 && temp0 != small0)
    {
    delete [] temp0;
    }
  if (temp1 && temp1 != small1)
    {
    delete [] temp1;
    }
  if (temp2 && temp2 != small2)
    {
    delete [] temp2;
    }
  if (temp3 && temp3 != small3)
    {
    delete [] temp3;
    }

  return result;
}

static PyMethodDef PyvtkMultiProcessController_ScatterV_Methods[] = {
  {NULL, PyvtkMultiProcessController_ScatterV_s1, METH_VARARGS,
   (char*)"@OOOOLi *i *i *L *L"},
  {NULL, PyvtkMultiProcessController_ScatterV_s2, METH_VARARGS,
   (char*)"@OOOOLi *k *k *L *L"},
  {NULL, PyvtkMultiProcessController_ScatterV_s3, METH_VARARGS,
   (char*)"@zzOOLi *L *L"},
  {NULL, PyvtkMultiProcessController_ScatterV_s4, METH_VARARGS,
   (char*)"@OOOOLi *d *d *L *L"},
  {NULL, PyvtkMultiProcessController_ScatterV_s5, METH_VARARGS,
   (char*)"@OOOOLi *L *L *L *L"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkMultiProcessController_ScatterV(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkMultiProcessController_ScatterV_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 6:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "ScatterV");
  return NULL;
}



static PyObject *
PyvtkMultiProcessController_AllGather_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AllGather");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiProcessController *op = static_cast<vtkMultiProcessController *>(vp);

  int *temp0 = NULL;
  int small0[4];
  int size0 = 0;
  int *temp1 = NULL;
  int *save1 = NULL;
  int small1[8];
  int size1 = 0;
  vtkIdType temp2;
  PyObject *result = NULL;

  if (op)
    {
    size0 = ap.GetArgSize(0);
    temp0 = small0;
    if (size0 > 4)
      {
      temp0 = new int[size0];
      }
    size1 = ap.GetArgSize(1);
    temp1 = small1;
    if (size1 > 4)
      {
      temp1 = new int[2*size1];
      }
    save1 = &temp1[size1];
    }

  if (op && ap.CheckArgCount(3) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2))
    {
    ap.SaveArray(temp1, save1, size1);

    int tempr = (ap.IsBound() ?
      op->AllGather(temp0, temp1, temp2) :
      op->vtkMultiProcessController::AllGather(temp0, temp1, temp2));

    if (ap.ArrayHasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(1, temp1, size1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  if (temp0 && temp0 != small0)
    {
    delete [] temp0;
    }
  if (temp1 && temp1 != small1)
    {
    delete [] temp1;
    }

  return result;
}

static PyObject *
PyvtkMultiProcessController_AllGather_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AllGather");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiProcessController *op = static_cast<vtkMultiProcessController *>(vp);

  unsigned long *temp0 = NULL;
  unsigned long small0[4];
  int size0 = 0;
  unsigned long *temp1 = NULL;
  unsigned long *save1 = NULL;
  unsigned long small1[8];
  int size1 = 0;
  vtkIdType temp2;
  PyObject *result = NULL;

  if (op)
    {
    size0 = ap.GetArgSize(0);
    temp0 = small0;
    if (size0 > 4)
      {
      temp0 = new unsigned long[size0];
      }
    size1 = ap.GetArgSize(1);
    temp1 = small1;
    if (size1 > 4)
      {
      temp1 = new unsigned long[2*size1];
      }
    save1 = &temp1[size1];
    }

  if (op && ap.CheckArgCount(3) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2))
    {
    ap.SaveArray(temp1, save1, size1);

    int tempr = (ap.IsBound() ?
      op->AllGather(temp0, temp1, temp2) :
      op->vtkMultiProcessController::AllGather(temp0, temp1, temp2));

    if (ap.ArrayHasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(1, temp1, size1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  if (temp0 && temp0 != small0)
    {
    delete [] temp0;
    }
  if (temp1 && temp1 != small1)
    {
    delete [] temp1;
    }

  return result;
}

static PyObject *
PyvtkMultiProcessController_AllGather_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AllGather");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiProcessController *op = static_cast<vtkMultiProcessController *>(vp);

  char *temp0 = NULL;
  char *temp1 = NULL;
  vtkIdType temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    int tempr = (ap.IsBound() ?
      op->AllGather(temp0, temp1, temp2) :
      op->vtkMultiProcessController::AllGather(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkMultiProcessController_AllGather_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AllGather");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiProcessController *op = static_cast<vtkMultiProcessController *>(vp);

  double *temp0 = NULL;
  double small0[4];
  int size0 = 0;
  double *temp1 = NULL;
  double *save1 = NULL;
  double small1[8];
  int size1 = 0;
  vtkIdType temp2;
  PyObject *result = NULL;

  if (op)
    {
    size0 = ap.GetArgSize(0);
    temp0 = small0;
    if (size0 > 4)
      {
      temp0 = new double[size0];
      }
    size1 = ap.GetArgSize(1);
    temp1 = small1;
    if (size1 > 4)
      {
      temp1 = new double[2*size1];
      }
    save1 = &temp1[size1];
    }

  if (op && ap.CheckArgCount(3) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2))
    {
    ap.SaveArray(temp1, save1, size1);

    int tempr = (ap.IsBound() ?
      op->AllGather(temp0, temp1, temp2) :
      op->vtkMultiProcessController::AllGather(temp0, temp1, temp2));

    if (ap.ArrayHasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(1, temp1, size1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  if (temp0 && temp0 != small0)
    {
    delete [] temp0;
    }
  if (temp1 && temp1 != small1)
    {
    delete [] temp1;
    }

  return result;
}

static PyObject *
PyvtkMultiProcessController_AllGather_s5(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AllGather");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiProcessController *op = static_cast<vtkMultiProcessController *>(vp);

  vtkIdType *temp0 = NULL;
  vtkIdType small0[4];
  int size0 = 0;
  vtkIdType *temp1 = NULL;
  vtkIdType *save1 = NULL;
  vtkIdType small1[8];
  int size1 = 0;
  vtkIdType temp2;
  PyObject *result = NULL;

  if (op)
    {
    size0 = ap.GetArgSize(0);
    temp0 = small0;
    if (size0 > 4)
      {
      temp0 = new vtkIdType[size0];
      }
    size1 = ap.GetArgSize(1);
    temp1 = small1;
    if (size1 > 4)
      {
      temp1 = new vtkIdType[2*size1];
      }
    save1 = &temp1[size1];
    }

  if (op && ap.CheckArgCount(3) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2))
    {
    ap.SaveArray(temp1, save1, size1);

    int tempr = (ap.IsBound() ?
      op->AllGather(temp0, temp1, temp2) :
      op->vtkMultiProcessController::AllGather(temp0, temp1, temp2));

    if (ap.ArrayHasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(1, temp1, size1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  if (temp0 && temp0 != small0)
    {
    delete [] temp0;
    }
  if (temp1 && temp1 != small1)
    {
    delete [] temp1;
    }

  return result;
}

static PyObject *
PyvtkMultiProcessController_AllGather_s6(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AllGather");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiProcessController *op = static_cast<vtkMultiProcessController *>(vp);

  vtkDataArray *temp0 = NULL;
  vtkDataArray *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkDataArray") &&
      ap.GetVTKObject(temp1, "vtkDataArray"))
    {
    int tempr = (ap.IsBound() ?
      op->AllGather(temp0, temp1) :
      op->vtkMultiProcessController::AllGather(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkMultiProcessController_AllGather_Methods[] = {
  {NULL, PyvtkMultiProcessController_AllGather_s1, METH_VARARGS,
   (char*)"@OOL *i *i"},
  {NULL, PyvtkMultiProcessController_AllGather_s2, METH_VARARGS,
   (char*)"@OOL *k *k"},
  {NULL, PyvtkMultiProcessController_AllGather_s3, METH_VARARGS,
   (char*)"@zzL"},
  {NULL, PyvtkMultiProcessController_AllGather_s4, METH_VARARGS,
   (char*)"@OOL *d *d"},
  {NULL, PyvtkMultiProcessController_AllGather_s5, METH_VARARGS,
   (char*)"@OOL *L *L"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkMultiProcessController_AllGather(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkMultiProcessController_AllGather_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkMultiProcessController_AllGather_s6(self, args);
    case 3:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "AllGather");
  return NULL;
}



static PyObject *
PyvtkMultiProcessController_AllGatherV_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AllGatherV");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiProcessController *op = static_cast<vtkMultiProcessController *>(vp);

  int *temp0 = NULL;
  int small0[4];
  int size0 = 0;
  int *temp1 = NULL;
  int *save1 = NULL;
  int small1[8];
  int size1 = 0;
  vtkIdType temp2;
  vtkIdType *temp3 = NULL;
  vtkIdType *save3 = NULL;
  vtkIdType small3[8];
  int size3 = 0;
  vtkIdType *temp4 = NULL;
  vtkIdType *save4 = NULL;
  vtkIdType small4[8];
  int size4 = 0;
  PyObject *result = NULL;

  if (op)
    {
    size0 = ap.GetArgSize(0);
    temp0 = small0;
    if (size0 > 4)
      {
      temp0 = new int[size0];
      }
    size1 = ap.GetArgSize(1);
    temp1 = small1;
    if (size1 > 4)
      {
      temp1 = new int[2*size1];
      }
    save1 = &temp1[size1];
    size3 = ap.GetArgSize(3);
    temp3 = small3;
    if (size3 > 4)
      {
      temp3 = new vtkIdType[2*size3];
      }
    save3 = &temp3[size3];
    size4 = ap.GetArgSize(4);
    temp4 = small4;
    if (size4 > 4)
      {
      temp4 = new vtkIdType[2*size4];
      }
    save4 = &temp4[size4];
    }

  if (op && ap.CheckArgCount(5) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2) &&
      ap.GetArray(temp3, size3) &&
      ap.GetArray(temp4, size4))
    {
    ap.SaveArray(temp1, save1, size1);
    ap.SaveArray(temp3, save3, size3);
    ap.SaveArray(temp4, save4, size4);

    int tempr = (ap.IsBound() ?
      op->AllGatherV(temp0, temp1, temp2, temp3, temp4) :
      op->vtkMultiProcessController::AllGatherV(temp0, temp1, temp2, temp3, temp4));

    if (ap.ArrayHasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(1, temp1, size1);
      }

    if (ap.ArrayHasChanged(temp3, save3, size3) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(3, temp3, size3);
      }

    if (ap.ArrayHasChanged(temp4, save4, size4) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(4, temp4, size4);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  if (temp0 && temp0 != small0)
    {
    delete [] temp0;
    }
  if (temp1 && temp1 != small1)
    {
    delete [] temp1;
    }
  if (temp3 && temp3 != small3)
    {
    delete [] temp3;
    }
  if (temp4 && temp4 != small4)
    {
    delete [] temp4;
    }

  return result;
}

static PyObject *
PyvtkMultiProcessController_AllGatherV_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AllGatherV");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiProcessController *op = static_cast<vtkMultiProcessController *>(vp);

  unsigned long *temp0 = NULL;
  unsigned long small0[4];
  int size0 = 0;
  unsigned long *temp1 = NULL;
  unsigned long *save1 = NULL;
  unsigned long small1[8];
  int size1 = 0;
  vtkIdType temp2;
  vtkIdType *temp3 = NULL;
  vtkIdType *save3 = NULL;
  vtkIdType small3[8];
  int size3 = 0;
  vtkIdType *temp4 = NULL;
  vtkIdType *save4 = NULL;
  vtkIdType small4[8];
  int size4 = 0;
  PyObject *result = NULL;

  if (op)
    {
    size0 = ap.GetArgSize(0);
    temp0 = small0;
    if (size0 > 4)
      {
      temp0 = new unsigned long[size0];
      }
    size1 = ap.GetArgSize(1);
    temp1 = small1;
    if (size1 > 4)
      {
      temp1 = new unsigned long[2*size1];
      }
    save1 = &temp1[size1];
    size3 = ap.GetArgSize(3);
    temp3 = small3;
    if (size3 > 4)
      {
      temp3 = new vtkIdType[2*size3];
      }
    save3 = &temp3[size3];
    size4 = ap.GetArgSize(4);
    temp4 = small4;
    if (size4 > 4)
      {
      temp4 = new vtkIdType[2*size4];
      }
    save4 = &temp4[size4];
    }

  if (op && ap.CheckArgCount(5) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2) &&
      ap.GetArray(temp3, size3) &&
      ap.GetArray(temp4, size4))
    {
    ap.SaveArray(temp1, save1, size1);
    ap.SaveArray(temp3, save3, size3);
    ap.SaveArray(temp4, save4, size4);

    int tempr = (ap.IsBound() ?
      op->AllGatherV(temp0, temp1, temp2, temp3, temp4) :
      op->vtkMultiProcessController::AllGatherV(temp0, temp1, temp2, temp3, temp4));

    if (ap.ArrayHasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(1, temp1, size1);
      }

    if (ap.ArrayHasChanged(temp3, save3, size3) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(3, temp3, size3);
      }

    if (ap.ArrayHasChanged(temp4, save4, size4) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(4, temp4, size4);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  if (temp0 && temp0 != small0)
    {
    delete [] temp0;
    }
  if (temp1 && temp1 != small1)
    {
    delete [] temp1;
    }
  if (temp3 && temp3 != small3)
    {
    delete [] temp3;
    }
  if (temp4 && temp4 != small4)
    {
    delete [] temp4;
    }

  return result;
}

static PyObject *
PyvtkMultiProcessController_AllGatherV_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AllGatherV");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiProcessController *op = static_cast<vtkMultiProcessController *>(vp);

  char *temp0 = NULL;
  char *temp1 = NULL;
  vtkIdType temp2;
  vtkIdType *temp3 = NULL;
  vtkIdType *save3 = NULL;
  vtkIdType small3[8];
  int size3 = 0;
  vtkIdType *temp4 = NULL;
  vtkIdType *save4 = NULL;
  vtkIdType small4[8];
  int size4 = 0;
  PyObject *result = NULL;

  if (op)
    {
    size3 = ap.GetArgSize(3);
    temp3 = small3;
    if (size3 > 4)
      {
      temp3 = new vtkIdType[2*size3];
      }
    save3 = &temp3[size3];
    size4 = ap.GetArgSize(4);
    temp4 = small4;
    if (size4 > 4)
      {
      temp4 = new vtkIdType[2*size4];
      }
    save4 = &temp4[size4];
    }

  if (op && ap.CheckArgCount(5) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetArray(temp3, size3) &&
      ap.GetArray(temp4, size4))
    {
    ap.SaveArray(temp3, save3, size3);
    ap.SaveArray(temp4, save4, size4);

    int tempr = (ap.IsBound() ?
      op->AllGatherV(temp0, temp1, temp2, temp3, temp4) :
      op->vtkMultiProcessController::AllGatherV(temp0, temp1, temp2, temp3, temp4));

    if (ap.ArrayHasChanged(temp3, save3, size3) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(3, temp3, size3);
      }

    if (ap.ArrayHasChanged(temp4, save4, size4) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(4, temp4, size4);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  if (temp3 && temp3 != small3)
    {
    delete [] temp3;
    }
  if (temp4 && temp4 != small4)
    {
    delete [] temp4;
    }

  return result;
}

static PyObject *
PyvtkMultiProcessController_AllGatherV_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AllGatherV");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiProcessController *op = static_cast<vtkMultiProcessController *>(vp);

  double *temp0 = NULL;
  double small0[4];
  int size0 = 0;
  double *temp1 = NULL;
  double *save1 = NULL;
  double small1[8];
  int size1 = 0;
  vtkIdType temp2;
  vtkIdType *temp3 = NULL;
  vtkIdType *save3 = NULL;
  vtkIdType small3[8];
  int size3 = 0;
  vtkIdType *temp4 = NULL;
  vtkIdType *save4 = NULL;
  vtkIdType small4[8];
  int size4 = 0;
  PyObject *result = NULL;

  if (op)
    {
    size0 = ap.GetArgSize(0);
    temp0 = small0;
    if (size0 > 4)
      {
      temp0 = new double[size0];
      }
    size1 = ap.GetArgSize(1);
    temp1 = small1;
    if (size1 > 4)
      {
      temp1 = new double[2*size1];
      }
    save1 = &temp1[size1];
    size3 = ap.GetArgSize(3);
    temp3 = small3;
    if (size3 > 4)
      {
      temp3 = new vtkIdType[2*size3];
      }
    save3 = &temp3[size3];
    size4 = ap.GetArgSize(4);
    temp4 = small4;
    if (size4 > 4)
      {
      temp4 = new vtkIdType[2*size4];
      }
    save4 = &temp4[size4];
    }

  if (op && ap.CheckArgCount(5) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2) &&
      ap.GetArray(temp3, size3) &&
      ap.GetArray(temp4, size4))
    {
    ap.SaveArray(temp1, save1, size1);
    ap.SaveArray(temp3, save3, size3);
    ap.SaveArray(temp4, save4, size4);

    int tempr = (ap.IsBound() ?
      op->AllGatherV(temp0, temp1, temp2, temp3, temp4) :
      op->vtkMultiProcessController::AllGatherV(temp0, temp1, temp2, temp3, temp4));

    if (ap.ArrayHasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(1, temp1, size1);
      }

    if (ap.ArrayHasChanged(temp3, save3, size3) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(3, temp3, size3);
      }

    if (ap.ArrayHasChanged(temp4, save4, size4) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(4, temp4, size4);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  if (temp0 && temp0 != small0)
    {
    delete [] temp0;
    }
  if (temp1 && temp1 != small1)
    {
    delete [] temp1;
    }
  if (temp3 && temp3 != small3)
    {
    delete [] temp3;
    }
  if (temp4 && temp4 != small4)
    {
    delete [] temp4;
    }

  return result;
}

static PyObject *
PyvtkMultiProcessController_AllGatherV_s5(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AllGatherV");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiProcessController *op = static_cast<vtkMultiProcessController *>(vp);

  vtkIdType *temp0 = NULL;
  vtkIdType small0[4];
  int size0 = 0;
  vtkIdType *temp1 = NULL;
  vtkIdType *save1 = NULL;
  vtkIdType small1[8];
  int size1 = 0;
  vtkIdType temp2;
  vtkIdType *temp3 = NULL;
  vtkIdType *save3 = NULL;
  vtkIdType small3[8];
  int size3 = 0;
  vtkIdType *temp4 = NULL;
  vtkIdType *save4 = NULL;
  vtkIdType small4[8];
  int size4 = 0;
  PyObject *result = NULL;

  if (op)
    {
    size0 = ap.GetArgSize(0);
    temp0 = small0;
    if (size0 > 4)
      {
      temp0 = new vtkIdType[size0];
      }
    size1 = ap.GetArgSize(1);
    temp1 = small1;
    if (size1 > 4)
      {
      temp1 = new vtkIdType[2*size1];
      }
    save1 = &temp1[size1];
    size3 = ap.GetArgSize(3);
    temp3 = small3;
    if (size3 > 4)
      {
      temp3 = new vtkIdType[2*size3];
      }
    save3 = &temp3[size3];
    size4 = ap.GetArgSize(4);
    temp4 = small4;
    if (size4 > 4)
      {
      temp4 = new vtkIdType[2*size4];
      }
    save4 = &temp4[size4];
    }

  if (op && ap.CheckArgCount(5) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2) &&
      ap.GetArray(temp3, size3) &&
      ap.GetArray(temp4, size4))
    {
    ap.SaveArray(temp1, save1, size1);
    ap.SaveArray(temp3, save3, size3);
    ap.SaveArray(temp4, save4, size4);

    int tempr = (ap.IsBound() ?
      op->AllGatherV(temp0, temp1, temp2, temp3, temp4) :
      op->vtkMultiProcessController::AllGatherV(temp0, temp1, temp2, temp3, temp4));

    if (ap.ArrayHasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(1, temp1, size1);
      }

    if (ap.ArrayHasChanged(temp3, save3, size3) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(3, temp3, size3);
      }

    if (ap.ArrayHasChanged(temp4, save4, size4) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(4, temp4, size4);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  if (temp0 && temp0 != small0)
    {
    delete [] temp0;
    }
  if (temp1 && temp1 != small1)
    {
    delete [] temp1;
    }
  if (temp3 && temp3 != small3)
    {
    delete [] temp3;
    }
  if (temp4 && temp4 != small4)
    {
    delete [] temp4;
    }

  return result;
}

static PyObject *
PyvtkMultiProcessController_AllGatherV_s6(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AllGatherV");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiProcessController *op = static_cast<vtkMultiProcessController *>(vp);

  vtkDataArray *temp0 = NULL;
  vtkDataArray *temp1 = NULL;
  vtkIdType *temp2 = NULL;
  vtkIdType *save2 = NULL;
  vtkIdType small2[8];
  int size2 = 0;
  vtkIdType *temp3 = NULL;
  vtkIdType *save3 = NULL;
  vtkIdType small3[8];
  int size3 = 0;
  PyObject *result = NULL;

  if (op)
    {
    size2 = ap.GetArgSize(2);
    temp2 = small2;
    if (size2 > 4)
      {
      temp2 = new vtkIdType[2*size2];
      }
    save2 = &temp2[size2];
    size3 = ap.GetArgSize(3);
    temp3 = small3;
    if (size3 > 4)
      {
      temp3 = new vtkIdType[2*size3];
      }
    save3 = &temp3[size3];
    }

  if (op && ap.CheckArgCount(4) &&
      ap.GetVTKObject(temp0, "vtkDataArray") &&
      ap.GetVTKObject(temp1, "vtkDataArray") &&
      ap.GetArray(temp2, size2) &&
      ap.GetArray(temp3, size3))
    {
    ap.SaveArray(temp2, save2, size2);
    ap.SaveArray(temp3, save3, size3);

    int tempr = (ap.IsBound() ?
      op->AllGatherV(temp0, temp1, temp2, temp3) :
      op->vtkMultiProcessController::AllGatherV(temp0, temp1, temp2, temp3));

    if (ap.ArrayHasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(2, temp2, size2);
      }

    if (ap.ArrayHasChanged(temp3, save3, size3) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(3, temp3, size3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  if (temp2 && temp2 != small2)
    {
    delete [] temp2;
    }
  if (temp3 && temp3 != small3)
    {
    delete [] temp3;
    }

  return result;
}

static PyObject *
PyvtkMultiProcessController_AllGatherV_s7(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AllGatherV");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiProcessController *op = static_cast<vtkMultiProcessController *>(vp);

  vtkDataArray *temp0 = NULL;
  vtkDataArray *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkDataArray") &&
      ap.GetVTKObject(temp1, "vtkDataArray"))
    {
    int tempr = (ap.IsBound() ?
      op->AllGatherV(temp0, temp1) :
      op->vtkMultiProcessController::AllGatherV(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkMultiProcessController_AllGatherV_Methods[] = {
  {NULL, PyvtkMultiProcessController_AllGatherV_s1, METH_VARARGS,
   (char*)"@OOLOO *i *i *L *L"},
  {NULL, PyvtkMultiProcessController_AllGatherV_s2, METH_VARARGS,
   (char*)"@OOLOO *k *k *L *L"},
  {NULL, PyvtkMultiProcessController_AllGatherV_s3, METH_VARARGS,
   (char*)"@zzLOO *L *L"},
  {NULL, PyvtkMultiProcessController_AllGatherV_s4, METH_VARARGS,
   (char*)"@OOLOO *d *d *L *L"},
  {NULL, PyvtkMultiProcessController_AllGatherV_s5, METH_VARARGS,
   (char*)"@OOLOO *L *L *L *L"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkMultiProcessController_AllGatherV(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkMultiProcessController_AllGatherV_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 4:
      return PyvtkMultiProcessController_AllGatherV_s6(self, args);
    case 2:
      return PyvtkMultiProcessController_AllGatherV_s7(self, args);
    case 5:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "AllGatherV");
  return NULL;
}



static PyObject *
PyvtkMultiProcessController_Reduce_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Reduce");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiProcessController *op = static_cast<vtkMultiProcessController *>(vp);

  int *temp0 = NULL;
  int small0[4];
  int size0 = 0;
  int *temp1 = NULL;
  int *save1 = NULL;
  int small1[8];
  int size1 = 0;
  vtkIdType temp2;
  int temp3;
  int temp4;
  PyObject *result = NULL;

  if (op)
    {
    size0 = ap.GetArgSize(0);
    temp0 = small0;
    if (size0 > 4)
      {
      temp0 = new int[size0];
      }
    size1 = ap.GetArgSize(1);
    temp1 = small1;
    if (size1 > 4)
      {
      temp1 = new int[2*size1];
      }
    save1 = &temp1[size1];
    }

  if (op && ap.CheckArgCount(5) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4))
    {
    ap.SaveArray(temp1, save1, size1);

    int tempr = (ap.IsBound() ?
      op->Reduce(temp0, temp1, temp2, temp3, temp4) :
      op->vtkMultiProcessController::Reduce(temp0, temp1, temp2, temp3, temp4));

    if (ap.ArrayHasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(1, temp1, size1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  if (temp0 && temp0 != small0)
    {
    delete [] temp0;
    }
  if (temp1 && temp1 != small1)
    {
    delete [] temp1;
    }

  return result;
}

static PyObject *
PyvtkMultiProcessController_Reduce_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Reduce");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiProcessController *op = static_cast<vtkMultiProcessController *>(vp);

  unsigned long *temp0 = NULL;
  unsigned long small0[4];
  int size0 = 0;
  unsigned long *temp1 = NULL;
  unsigned long *save1 = NULL;
  unsigned long small1[8];
  int size1 = 0;
  vtkIdType temp2;
  int temp3;
  int temp4;
  PyObject *result = NULL;

  if (op)
    {
    size0 = ap.GetArgSize(0);
    temp0 = small0;
    if (size0 > 4)
      {
      temp0 = new unsigned long[size0];
      }
    size1 = ap.GetArgSize(1);
    temp1 = small1;
    if (size1 > 4)
      {
      temp1 = new unsigned long[2*size1];
      }
    save1 = &temp1[size1];
    }

  if (op && ap.CheckArgCount(5) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4))
    {
    ap.SaveArray(temp1, save1, size1);

    int tempr = (ap.IsBound() ?
      op->Reduce(temp0, temp1, temp2, temp3, temp4) :
      op->vtkMultiProcessController::Reduce(temp0, temp1, temp2, temp3, temp4));

    if (ap.ArrayHasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(1, temp1, size1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  if (temp0 && temp0 != small0)
    {
    delete [] temp0;
    }
  if (temp1 && temp1 != small1)
    {
    delete [] temp1;
    }

  return result;
}

static PyObject *
PyvtkMultiProcessController_Reduce_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Reduce");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiProcessController *op = static_cast<vtkMultiProcessController *>(vp);

  char *temp0 = NULL;
  char *temp1 = NULL;
  vtkIdType temp2;
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
    int tempr = (ap.IsBound() ?
      op->Reduce(temp0, temp1, temp2, temp3, temp4) :
      op->vtkMultiProcessController::Reduce(temp0, temp1, temp2, temp3, temp4));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkMultiProcessController_Reduce_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Reduce");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiProcessController *op = static_cast<vtkMultiProcessController *>(vp);

  double *temp0 = NULL;
  double small0[4];
  int size0 = 0;
  double *temp1 = NULL;
  double *save1 = NULL;
  double small1[8];
  int size1 = 0;
  vtkIdType temp2;
  int temp3;
  int temp4;
  PyObject *result = NULL;

  if (op)
    {
    size0 = ap.GetArgSize(0);
    temp0 = small0;
    if (size0 > 4)
      {
      temp0 = new double[size0];
      }
    size1 = ap.GetArgSize(1);
    temp1 = small1;
    if (size1 > 4)
      {
      temp1 = new double[2*size1];
      }
    save1 = &temp1[size1];
    }

  if (op && ap.CheckArgCount(5) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4))
    {
    ap.SaveArray(temp1, save1, size1);

    int tempr = (ap.IsBound() ?
      op->Reduce(temp0, temp1, temp2, temp3, temp4) :
      op->vtkMultiProcessController::Reduce(temp0, temp1, temp2, temp3, temp4));

    if (ap.ArrayHasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(1, temp1, size1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  if (temp0 && temp0 != small0)
    {
    delete [] temp0;
    }
  if (temp1 && temp1 != small1)
    {
    delete [] temp1;
    }

  return result;
}

static PyObject *
PyvtkMultiProcessController_Reduce_s5(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Reduce");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiProcessController *op = static_cast<vtkMultiProcessController *>(vp);

  vtkIdType *temp0 = NULL;
  vtkIdType small0[4];
  int size0 = 0;
  vtkIdType *temp1 = NULL;
  vtkIdType *save1 = NULL;
  vtkIdType small1[8];
  int size1 = 0;
  vtkIdType temp2;
  int temp3;
  int temp4;
  PyObject *result = NULL;

  if (op)
    {
    size0 = ap.GetArgSize(0);
    temp0 = small0;
    if (size0 > 4)
      {
      temp0 = new vtkIdType[size0];
      }
    size1 = ap.GetArgSize(1);
    temp1 = small1;
    if (size1 > 4)
      {
      temp1 = new vtkIdType[2*size1];
      }
    save1 = &temp1[size1];
    }

  if (op && ap.CheckArgCount(5) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4))
    {
    ap.SaveArray(temp1, save1, size1);

    int tempr = (ap.IsBound() ?
      op->Reduce(temp0, temp1, temp2, temp3, temp4) :
      op->vtkMultiProcessController::Reduce(temp0, temp1, temp2, temp3, temp4));

    if (ap.ArrayHasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(1, temp1, size1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  if (temp0 && temp0 != small0)
    {
    delete [] temp0;
    }
  if (temp1 && temp1 != small1)
    {
    delete [] temp1;
    }

  return result;
}

static PyObject *
PyvtkMultiProcessController_Reduce_s6(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Reduce");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiProcessController *op = static_cast<vtkMultiProcessController *>(vp);

  vtkDataArray *temp0 = NULL;
  vtkDataArray *temp1 = NULL;
  int temp2;
  int temp3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(4) &&
      ap.GetVTKObject(temp0, "vtkDataArray") &&
      ap.GetVTKObject(temp1, "vtkDataArray") &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
    {
    int tempr = (ap.IsBound() ?
      op->Reduce(temp0, temp1, temp2, temp3) :
      op->vtkMultiProcessController::Reduce(temp0, temp1, temp2, temp3));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkMultiProcessController_Reduce_Methods[] = {
  {NULL, PyvtkMultiProcessController_Reduce_s1, METH_VARARGS,
   (char*)"@OOLii *i *i"},
  {NULL, PyvtkMultiProcessController_Reduce_s2, METH_VARARGS,
   (char*)"@OOLii *k *k"},
  {NULL, PyvtkMultiProcessController_Reduce_s3, METH_VARARGS,
   (char*)"@zzLii"},
  {NULL, PyvtkMultiProcessController_Reduce_s4, METH_VARARGS,
   (char*)"@OOLii *d *d"},
  {NULL, PyvtkMultiProcessController_Reduce_s5, METH_VARARGS,
   (char*)"@OOLii *L *L"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkMultiProcessController_Reduce(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkMultiProcessController_Reduce_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 4:
      return PyvtkMultiProcessController_Reduce_s6(self, args);
    case 5:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "Reduce");
  return NULL;
}



static PyObject *
PyvtkMultiProcessController_AllReduce_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AllReduce");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiProcessController *op = static_cast<vtkMultiProcessController *>(vp);

  int *temp0 = NULL;
  int small0[4];
  int size0 = 0;
  int *temp1 = NULL;
  int *save1 = NULL;
  int small1[8];
  int size1 = 0;
  vtkIdType temp2;
  int temp3;
  PyObject *result = NULL;

  if (op)
    {
    size0 = ap.GetArgSize(0);
    temp0 = small0;
    if (size0 > 4)
      {
      temp0 = new int[size0];
      }
    size1 = ap.GetArgSize(1);
    temp1 = small1;
    if (size1 > 4)
      {
      temp1 = new int[2*size1];
      }
    save1 = &temp1[size1];
    }

  if (op && ap.CheckArgCount(4) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
    {
    ap.SaveArray(temp1, save1, size1);

    int tempr = (ap.IsBound() ?
      op->AllReduce(temp0, temp1, temp2, temp3) :
      op->vtkMultiProcessController::AllReduce(temp0, temp1, temp2, temp3));

    if (ap.ArrayHasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(1, temp1, size1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  if (temp0 && temp0 != small0)
    {
    delete [] temp0;
    }
  if (temp1 && temp1 != small1)
    {
    delete [] temp1;
    }

  return result;
}

static PyObject *
PyvtkMultiProcessController_AllReduce_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AllReduce");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiProcessController *op = static_cast<vtkMultiProcessController *>(vp);

  unsigned long *temp0 = NULL;
  unsigned long small0[4];
  int size0 = 0;
  unsigned long *temp1 = NULL;
  unsigned long *save1 = NULL;
  unsigned long small1[8];
  int size1 = 0;
  vtkIdType temp2;
  int temp3;
  PyObject *result = NULL;

  if (op)
    {
    size0 = ap.GetArgSize(0);
    temp0 = small0;
    if (size0 > 4)
      {
      temp0 = new unsigned long[size0];
      }
    size1 = ap.GetArgSize(1);
    temp1 = small1;
    if (size1 > 4)
      {
      temp1 = new unsigned long[2*size1];
      }
    save1 = &temp1[size1];
    }

  if (op && ap.CheckArgCount(4) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
    {
    ap.SaveArray(temp1, save1, size1);

    int tempr = (ap.IsBound() ?
      op->AllReduce(temp0, temp1, temp2, temp3) :
      op->vtkMultiProcessController::AllReduce(temp0, temp1, temp2, temp3));

    if (ap.ArrayHasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(1, temp1, size1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  if (temp0 && temp0 != small0)
    {
    delete [] temp0;
    }
  if (temp1 && temp1 != small1)
    {
    delete [] temp1;
    }

  return result;
}

static PyObject *
PyvtkMultiProcessController_AllReduce_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AllReduce");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiProcessController *op = static_cast<vtkMultiProcessController *>(vp);

  char *temp0 = NULL;
  char *temp1 = NULL;
  vtkIdType temp2;
  int temp3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
    {
    int tempr = (ap.IsBound() ?
      op->AllReduce(temp0, temp1, temp2, temp3) :
      op->vtkMultiProcessController::AllReduce(temp0, temp1, temp2, temp3));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkMultiProcessController_AllReduce_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AllReduce");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiProcessController *op = static_cast<vtkMultiProcessController *>(vp);

  double *temp0 = NULL;
  double small0[4];
  int size0 = 0;
  double *temp1 = NULL;
  double *save1 = NULL;
  double small1[8];
  int size1 = 0;
  vtkIdType temp2;
  int temp3;
  PyObject *result = NULL;

  if (op)
    {
    size0 = ap.GetArgSize(0);
    temp0 = small0;
    if (size0 > 4)
      {
      temp0 = new double[size0];
      }
    size1 = ap.GetArgSize(1);
    temp1 = small1;
    if (size1 > 4)
      {
      temp1 = new double[2*size1];
      }
    save1 = &temp1[size1];
    }

  if (op && ap.CheckArgCount(4) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
    {
    ap.SaveArray(temp1, save1, size1);

    int tempr = (ap.IsBound() ?
      op->AllReduce(temp0, temp1, temp2, temp3) :
      op->vtkMultiProcessController::AllReduce(temp0, temp1, temp2, temp3));

    if (ap.ArrayHasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(1, temp1, size1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  if (temp0 && temp0 != small0)
    {
    delete [] temp0;
    }
  if (temp1 && temp1 != small1)
    {
    delete [] temp1;
    }

  return result;
}

static PyObject *
PyvtkMultiProcessController_AllReduce_s5(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AllReduce");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiProcessController *op = static_cast<vtkMultiProcessController *>(vp);

  vtkIdType *temp0 = NULL;
  vtkIdType small0[4];
  int size0 = 0;
  vtkIdType *temp1 = NULL;
  vtkIdType *save1 = NULL;
  vtkIdType small1[8];
  int size1 = 0;
  vtkIdType temp2;
  int temp3;
  PyObject *result = NULL;

  if (op)
    {
    size0 = ap.GetArgSize(0);
    temp0 = small0;
    if (size0 > 4)
      {
      temp0 = new vtkIdType[size0];
      }
    size1 = ap.GetArgSize(1);
    temp1 = small1;
    if (size1 > 4)
      {
      temp1 = new vtkIdType[2*size1];
      }
    save1 = &temp1[size1];
    }

  if (op && ap.CheckArgCount(4) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
    {
    ap.SaveArray(temp1, save1, size1);

    int tempr = (ap.IsBound() ?
      op->AllReduce(temp0, temp1, temp2, temp3) :
      op->vtkMultiProcessController::AllReduce(temp0, temp1, temp2, temp3));

    if (ap.ArrayHasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(1, temp1, size1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  if (temp0 && temp0 != small0)
    {
    delete [] temp0;
    }
  if (temp1 && temp1 != small1)
    {
    delete [] temp1;
    }

  return result;
}

static PyObject *
PyvtkMultiProcessController_AllReduce_s6(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AllReduce");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiProcessController *op = static_cast<vtkMultiProcessController *>(vp);

  vtkDataArray *temp0 = NULL;
  vtkDataArray *temp1 = NULL;
  int temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkDataArray") &&
      ap.GetVTKObject(temp1, "vtkDataArray") &&
      ap.GetValue(temp2))
    {
    int tempr = (ap.IsBound() ?
      op->AllReduce(temp0, temp1, temp2) :
      op->vtkMultiProcessController::AllReduce(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkMultiProcessController_AllReduce_Methods[] = {
  {NULL, PyvtkMultiProcessController_AllReduce_s1, METH_VARARGS,
   (char*)"@OOLi *i *i"},
  {NULL, PyvtkMultiProcessController_AllReduce_s2, METH_VARARGS,
   (char*)"@OOLi *k *k"},
  {NULL, PyvtkMultiProcessController_AllReduce_s3, METH_VARARGS,
   (char*)"@zzLi"},
  {NULL, PyvtkMultiProcessController_AllReduce_s4, METH_VARARGS,
   (char*)"@OOLi *d *d"},
  {NULL, PyvtkMultiProcessController_AllReduce_s5, METH_VARARGS,
   (char*)"@OOLi *L *L"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkMultiProcessController_AllReduce(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkMultiProcessController_AllReduce_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkMultiProcessController_AllReduce_s6(self, args);
    case 4:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "AllReduce");
  return NULL;
}


static PyMethodDef PyvtkMultiProcessController_Methods[] = {
  {(char*)"GetClassName", PyvtkMultiProcessController_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkMultiProcessController_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkMultiProcessController_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkMultiProcessController\nC++: vtkMultiProcessController *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkMultiProcessController_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkMultiProcessController\nC++: vtkMultiProcessController *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"Finalize", PyvtkMultiProcessController_Finalize, METH_VARARGS,
   (char*)"V.Finalize()\nC++: virtual void Finalize()\nV.Finalize(int)\nC++: virtual void Finalize(int finalizedExternally)\n\nThis method is for cleaning up. If a subclass needs to clean up\nprocess communication (i.e. MPI) it would over ride this method.\n"},
  {(char*)"SetNumberOfProcesses", PyvtkMultiProcessController_SetNumberOfProcesses, METH_VARARGS,
   (char*)"V.SetNumberOfProcesses(int)\nC++: void SetNumberOfProcesses(int num)\n\nSet the number of processes you will be using.  This defaults to\nthe maximum number available.  If you set this to a value higher\nthan the default, you will get an error.\n"},
  {(char*)"GetNumberOfProcesses", PyvtkMultiProcessController_GetNumberOfProcesses, METH_VARARGS,
   (char*)"V.GetNumberOfProcesses() -> int\nC++: int GetNumberOfProcesses()\n\nSet the number of processes you will be using.  This defaults to\nthe maximum number available.  If you set this to a value higher\nthan the default, you will get an error.\n"},
  {(char*)"SetSingleProcessObject", PyvtkMultiProcessController_SetSingleProcessObject, METH_VARARGS,
   (char*)"V.SetSingleProcessObject(vtkProcess)\nC++: void SetSingleProcessObject(vtkProcess *p)\n\nObject-oriented flavor of SetSingleMethod(). Instead of passing\nsome function pointer and user data, a vtkProcess object is\npassed where the method to execute is Execute() and the data the\nobject itself.\n"},
  {(char*)"SingleMethodExecute", PyvtkMultiProcessController_SingleMethodExecute, METH_VARARGS,
   (char*)"V.SingleMethodExecute()\nC++: virtual void SingleMethodExecute()\n\nExecute the SingleMethod (as define by SetSingleMethod) using\nthis->NumberOfProcesses processes.  This will only return when\nall the processes finish executing their methods.\n"},
  {(char*)"MultipleMethodExecute", PyvtkMultiProcessController_MultipleMethodExecute, METH_VARARGS,
   (char*)"V.MultipleMethodExecute()\nC++: virtual void MultipleMethodExecute()\n\nExecute the MultipleMethods (as define by calling\nSetMultipleMethod for each of the required\nthis->NumberOfProcesses methods) using this->NumberOfProcesses\nprocesses.\n"},
  {(char*)"GetLocalProcessId", PyvtkMultiProcessController_GetLocalProcessId, METH_VARARGS,
   (char*)"V.GetLocalProcessId() -> int\nC++: int GetLocalProcessId()\n\nTells you which process [0, NumProcess) you are in.\n"},
  {(char*)"GetGlobalController", PyvtkMultiProcessController_GetGlobalController, METH_VARARGS | METH_STATIC,
   (char*)"V.GetGlobalController() -> vtkMultiProcessController\nC++: static vtkMultiProcessController *GetGlobalController()\n\nThis convenience method returns the controller associated with\nthe local process.  It returns NULL until the processes are\nspawned. It is better if you hang on to the controller passed as\nan argument to the SingleMethod or MultipleMethod functions.\n"},
  {(char*)"CreateOutputWindow", PyvtkMultiProcessController_CreateOutputWindow, METH_VARARGS,
   (char*)"V.CreateOutputWindow()\nC++: virtual void CreateOutputWindow()\n\nThis method can be used to tell the controller to create a\nspecial output window in which all messages are preceded by the\nprocess id.\n"},
  {(char*)"CreateSubController", PyvtkMultiProcessController_CreateSubController, METH_VARARGS,
   (char*)"V.CreateSubController(vtkProcessGroup)\n    -> vtkMultiProcessController\nC++: virtual vtkMultiProcessController *CreateSubController(\n    vtkProcessGroup *group)\n\nCreates a new controller with the processes specified by the\ngiven group. The new controller will already be initialized for\nyou.  You are responsible for deleting the controller once you\nare done.  It is invalid to pass this method a group with a\ndifferent communicator than is used by this controller.  This\noperation is collective across all processes defined in the\ngroup.  It is undefined what will happen if the group is not the\nsame on all processes.  This method must be called by all\nprocesses in the controller regardless of whether they are in the\ngroup.  NULL is returned on all process not in the group.\n"},
  {(char*)"PartitionController", PyvtkMultiProcessController_PartitionController, METH_VARARGS,
   (char*)"V.PartitionController(int, int) -> vtkMultiProcessController\nC++: virtual vtkMultiProcessController *PartitionController(\n    int localColor, int localKey)\n\nPartitions this controller based on a coloring.  That is, each\nprocess passes in a color.  All processes with the same color are\ngrouped into the same partition.  The processes are ordered by\ntheir self-assigned key. Lower keys have lower process ids.  Ties\nare broken by the current process ids.  (For example, if all the\nkeys are 0, then the resulting processes will be ordered in the\nsame way.)  This method returns a new controller to each process\nthat represents the local partition.  This is basically the same\noperation as MPI_Comm_split.\n"},
  {(char*)"RemoveFirstRMI", PyvtkMultiProcessController_RemoveFirstRMI, METH_VARARGS,
   (char*)"V.RemoveFirstRMI(int) -> int\nC++: virtual int RemoveFirstRMI(int tag)\n\nRemove the first RMI matching the tag.\n"},
  {(char*)"RemoveRMI", PyvtkMultiProcessController_RemoveRMI, METH_VARARGS,
   (char*)"V.RemoveRMI(int) -> int\nC++: virtual int RemoveRMI(unsigned long id)\n\nRemove the  RMI matching the id. The id is the same id returned\nby AddRMI().\n"},
  {(char*)"RemoveAllRMICallbacks", PyvtkMultiProcessController_RemoveAllRMICallbacks, METH_VARARGS,
   (char*)"V.RemoveAllRMICallbacks(int)\nC++: virtual void RemoveAllRMICallbacks(int tag)\n\nThese methods are a part of the newer API to add multiple rmi\ncallbacks. When the RMI is triggered, all the callbacks are\ncalled Removes all callbacks for the tag.\n"},
  {(char*)"RemoveRMICallback", PyvtkMultiProcessController_RemoveRMICallback, METH_VARARGS,
   (char*)"V.RemoveRMICallback(int) -> bool\nC++: virtual bool RemoveRMICallback(unsigned long id)\n\nRemove a callback. Returns true is the remove was successful.\n"},
  {(char*)"TriggerRMI", PyvtkMultiProcessController_TriggerRMI, METH_VARARGS,
   (char*)"V.TriggerRMI(int, , int, int)\nC++: void TriggerRMI(int remoteProcessId, void *arg,\n    int argLength, int tag)\nV.TriggerRMI(int, string, int)\nC++: void TriggerRMI(int remoteProcessId, const char *arg,\n    int tag)\nV.TriggerRMI(int, int)\nC++: void TriggerRMI(int remoteProcessId, int tag)\n\nA method to trigger a method invocation in another process.\n"},
  {(char*)"TriggerBreakRMIs", PyvtkMultiProcessController_TriggerBreakRMIs, METH_VARARGS,
   (char*)"V.TriggerBreakRMIs()\nC++: void TriggerBreakRMIs()\n\nA conveniance method.  Called on process 0 to break \"ProcessRMIs\"\nloop on all other processes.\n"},
  {(char*)"TriggerRMIOnAllChildren", PyvtkMultiProcessController_TriggerRMIOnAllChildren, METH_VARARGS,
   (char*)"V.TriggerRMIOnAllChildren(, int, int)\nC++: void TriggerRMIOnAllChildren(void *arg, int argLength,\n    int tag)\nV.TriggerRMIOnAllChildren(string, int)\nC++: void TriggerRMIOnAllChildren(const char *arg, int tag)\nV.TriggerRMIOnAllChildren(int)\nC++: void TriggerRMIOnAllChildren(int tag)\n\nThis is a convenicence method to trigger an RMI call on all the\n\"children\" of the current node. The children of the current node\ncan be determined by drawing a binary tree starting at node 0 and\nthen assigned nodes ids incrementally in a breadth-first fashion\nfrom left to right. This is designed to be used when trigger an\nRMI call on all satellites from the root node.\n"},
  {(char*)"BroadcastTriggerRMIOnAllChildren", PyvtkMultiProcessController_BroadcastTriggerRMIOnAllChildren, METH_VARARGS,
   (char*)"V.BroadcastTriggerRMIOnAllChildren(, int, int)\nC++: void BroadcastTriggerRMIOnAllChildren(void *arg,\n    int argLength, int tag)\n\nThis is a convenicence method to trigger an RMI call on all the\n\"children\" of the current node. The children of the current node\ncan be determined by drawing a binary tree starting at node 0 and\nthen assigned nodes ids incrementally in a breadth-first fashion\nfrom left to right. This is designed to be used when trigger an\nRMI call on all satellites from the root node.\n"},
  {(char*)"ProcessRMIs", PyvtkMultiProcessController_ProcessRMIs, METH_VARARGS,
   (char*)"V.ProcessRMIs(int, int) -> int\nC++: int ProcessRMIs(int reportErrors, int dont_loop=0)\nV.ProcessRMIs() -> int\nC++: int ProcessRMIs()\n\nCalling this method gives control to the controller to start\nprocessing RMIs. Possible return values are: RMI_NO_ERROR,\nRMI_TAG_ERROR : rmi tag could not be received, RMI_ARG_ERROR :\nrmi arg could not be received. If reportErrors is false, no\nvtkErrorMacro is called. ProcessRMIs() calls ProcessRMIs(int)\nwith reportErrors = 0. If dont_loop is 1, this call just process\none RMI message and exits.\n"},
  {(char*)"BroadcastProcessRMIs", PyvtkMultiProcessController_BroadcastProcessRMIs, METH_VARARGS,
   (char*)"V.BroadcastProcessRMIs(int, int) -> int\nC++: int BroadcastProcessRMIs(int reportErrors, int dont_loop=0)\n\nCalling this method gives control to the controller to start\nprocessing RMIs. Possible return values are: RMI_NO_ERROR,\nRMI_TAG_ERROR : rmi tag could not be received, RMI_ARG_ERROR :\nrmi arg could not be received. If reportErrors is false, no\nvtkErrorMacro is called. ProcessRMIs() calls ProcessRMIs(int)\nwith reportErrors = 0. If dont_loop is 1, this call just process\none RMI message and exits.\n"},
  {(char*)"SetBreakFlag", PyvtkMultiProcessController_SetBreakFlag, METH_VARARGS,
   (char*)"V.SetBreakFlag(int)\nC++: void SetBreakFlag(int a)\n\nSetting this flag to 1 will cause the ProcessRMIs loop to return.\nThis also causes vtkUpStreamPorts to return from their\nWaitForUpdate loops.\n"},
  {(char*)"GetBreakFlag", PyvtkMultiProcessController_GetBreakFlag, METH_VARARGS,
   (char*)"V.GetBreakFlag() -> int\nC++: int GetBreakFlag()\n\nSetting this flag to 1 will cause the ProcessRMIs loop to return.\nThis also causes vtkUpStreamPorts to return from their\nWaitForUpdate loops.\n"},
  {(char*)"SetBroadcastTriggerRMI", PyvtkMultiProcessController_SetBroadcastTriggerRMI, METH_VARARGS,
   (char*)"V.SetBroadcastTriggerRMI(bool)\nC++: void SetBroadcastTriggerRMI(bool a)\n\nSetting this flag to 1 will cause the TriggerRMIOnAllChildren to\nuse a collective broadcast operation to communicate the RMI tag\nto the sattelites.\n"},
  {(char*)"GetBroadcastTriggerRMI", PyvtkMultiProcessController_GetBroadcastTriggerRMI, METH_VARARGS,
   (char*)"V.GetBroadcastTriggerRMI() -> bool\nC++: bool GetBroadcastTriggerRMI()\n\nSetting this flag to 1 will cause the TriggerRMIOnAllChildren to\nuse a collective broadcast operation to communicate the RMI tag\nto the sattelites.\n"},
  {(char*)"BroadcastTriggerRMIOn", PyvtkMultiProcessController_BroadcastTriggerRMIOn, METH_VARARGS,
   (char*)"V.BroadcastTriggerRMIOn()\nC++: void BroadcastTriggerRMIOn()\n\nSetting this flag to 1 will cause the TriggerRMIOnAllChildren to\nuse a collective broadcast operation to communicate the RMI tag\nto the sattelites.\n"},
  {(char*)"BroadcastTriggerRMIOff", PyvtkMultiProcessController_BroadcastTriggerRMIOff, METH_VARARGS,
   (char*)"V.BroadcastTriggerRMIOff()\nC++: void BroadcastTriggerRMIOff()\n\nSetting this flag to 1 will cause the TriggerRMIOnAllChildren to\nuse a collective broadcast operation to communicate the RMI tag\nto the sattelites.\n"},
  {(char*)"GetCommunicator", PyvtkMultiProcessController_GetCommunicator, METH_VARARGS,
   (char*)"V.GetCommunicator() -> vtkCommunicator\nC++: vtkCommunicator *GetCommunicator()\n\nReturns the communicator associated with this controller. A\ndefault communicator is created in constructor.\n"},
  {(char*)"GetBreakRMITag", PyvtkMultiProcessController_GetBreakRMITag, METH_VARARGS | METH_STATIC,
   (char*)"V.GetBreakRMITag() -> int\nC++: static int GetBreakRMITag()\n\nAccessor to some default tags.\n"},
  {(char*)"GetRMITag", PyvtkMultiProcessController_GetRMITag, METH_VARARGS | METH_STATIC,
   (char*)"V.GetRMITag() -> int\nC++: static int GetRMITag()\n\nAccessor to some default tags.\n"},
  {(char*)"GetRMIArgTag", PyvtkMultiProcessController_GetRMIArgTag, METH_VARARGS | METH_STATIC,
   (char*)"V.GetRMIArgTag() -> int\nC++: static int GetRMIArgTag()\n\nAccessor to some default tags.\n"},
  {(char*)"Barrier", PyvtkMultiProcessController_Barrier, METH_VARARGS,
   (char*)"V.Barrier()\nC++: void Barrier()\n\nThis method can be used to synchronize processes.\n"},
  {(char*)"SetGlobalController", PyvtkMultiProcessController_SetGlobalController, METH_VARARGS | METH_STATIC,
   (char*)"V.SetGlobalController(vtkMultiProcessController)\nC++: static void SetGlobalController(\n    vtkMultiProcessController *controller)\n\n"},
  {(char*)"Send", PyvtkMultiProcessController_Send, METH_VARARGS,
   (char*)"V.Send((int, ...), int, int, int) -> int\nC++: int Send(const int *data, vtkIdType length,\n    int remoteProcessId, int tag)\nV.Send((int, ...), int, int, int) -> int\nC++: int Send(const unsigned long *data, vtkIdType length,\n    int remoteProcessId, int tag)\nV.Send(string, int, int, int) -> int\nC++: int Send(const char *data, vtkIdType length,\n    int remoteProcessId, int tag)\nV.Send((float, ...), int, int, int) -> int\nC++: int Send(const double *data, vtkIdType length,\n    int remoteProcessId, int tag)\nV.Send((int, ...), int, int, int) -> int\nC++: int Send(const vtkIdType *data, vtkIdType length,\n    int remoteProcessId, int tag)\nV.Send(vtkDataObject, int, int) -> int\nC++: int Send(vtkDataObject *data, int remoteId, int tag)\nV.Send(vtkDataArray, int, int) -> int\nC++: int Send(vtkDataArray *data, int remoteId, int tag)\n\nThis method sends data to another process.  Tag eliminates\nambiguity when multiple sends or receives exist in the same\nprocess. It is recommended to use custom tag number over 100.\nvtkMultiProcessController has reserved tags between 1 and 4.\nvtkCommunicator has reserved tags between 10 and 16.\n"},
  {(char*)"Receive", PyvtkMultiProcessController_Receive, METH_VARARGS,
   (char*)"V.Receive([int, ...], int, int, int) -> int\nC++: int Receive(int *data, vtkIdType maxlength,\n    int remoteProcessId, int tag)\nV.Receive([int, ...], int, int, int) -> int\nC++: int Receive(unsigned long *data, vtkIdType maxlength,\n    int remoteProcessId, int tag)\nV.Receive(string, int, int, int) -> int\nC++: int Receive(char *data, vtkIdType maxlength,\n    int remoteProcessId, int tag)\nV.Receive([float, ...], int, int, int) -> int\nC++: int Receive(double *data, vtkIdType maxlength,\n    int remoteProcessId, int tag)\nV.Receive([int, ...], int, int, int) -> int\nC++: int Receive(vtkIdType *data, vtkIdType maxlength,\n    int remoteProcessId, int tag)\nV.Receive(vtkDataObject, int, int) -> int\nC++: int Receive(vtkDataObject *data, int remoteId, int tag)\nV.Receive(vtkDataArray, int, int) -> int\nC++: int Receive(vtkDataArray *data, int remoteId, int tag)\n\nThis method receives data from a corresponding send. It blocks\nuntil the receive is finished.  It calls methods in \"data\" to\ncommunicate the sending data. In the overrloads that take in a \\c\nmaxlength argument, this length is the maximum length of the\nmessage to receive. If the maxlength is less than the length of\nthe message sent by the sender, an error will be flagged. Once a\nmessage is received, use the GetCount() method to determine the\nactual size of the data received.\n"},
  {(char*)"ReceiveDataObject", PyvtkMultiProcessController_ReceiveDataObject, METH_VARARGS,
   (char*)"V.ReceiveDataObject(int, int) -> vtkDataObject\nC++: vtkDataObject *ReceiveDataObject(int remoteId, int tag)\n\nReceive a stream from the other processes.\n"},
  {(char*)"GetCount", PyvtkMultiProcessController_GetCount, METH_VARARGS,
   (char*)"V.GetCount() -> int\nC++: vtkIdType GetCount()\n\nReturns the number of words received by the most recent\nReceive(). Note that this is not the number of bytes received,\nbut the number of items of the data-type received by the most\nrecent Receive() eg. if Receive(int*,..) was used, then this\nreturns the number of ints received; if Receive(double*,..) was\nused, then this returns the number of doubles received etc. The\nreturn value is valid only after a successful Receive().\n"},
  {(char*)"Broadcast", PyvtkMultiProcessController_Broadcast, METH_VARARGS,
   (char*)"V.Broadcast([int, ...], int, int) -> int\nC++: int Broadcast(int *data, vtkIdType length, int srcProcessId)\nV.Broadcast([int, ...], int, int) -> int\nC++: int Broadcast(unsigned long *data, vtkIdType length,\n    int srcProcessId)\nV.Broadcast(string, int, int) -> int\nC++: int Broadcast(char *data, vtkIdType length, int srcProcessId)\nV.Broadcast([float, ...], int, int) -> int\nC++: int Broadcast(double *data, vtkIdType length,\n    int srcProcessId)\nV.Broadcast([int, ...], int, int) -> int\nC++: int Broadcast(vtkIdType *data, vtkIdType length,\n    int srcProcessId)\nV.Broadcast(vtkDataObject, int) -> int\nC++: int Broadcast(vtkDataObject *data, int srcProcessId)\nV.Broadcast(vtkDataArray, int) -> int\nC++: int Broadcast(vtkDataArray *data, int srcProcessId)\n\nBroadcast sends the array in the process with id srcProcessId to\nall of the other processes.  All processes must call these method\nwith the same arguments in order for it to complete.\n"},
  {(char*)"Gather", PyvtkMultiProcessController_Gather, METH_VARARGS,
   (char*)"V.Gather((int, ...), [int, ...], int, int) -> int\nC++: int Gather(const int *sendBuffer, int *recvBuffer,\n    vtkIdType length, int destProcessId)\nV.Gather((int, ...), [int, ...], int, int) -> int\nC++: int Gather(const unsigned long *sendBuffer,\n    unsigned long *recvBuffer, vtkIdType length,\n    int destProcessId)\nV.Gather(string, string, int, int) -> int\nC++: int Gather(const char *sendBuffer, char *recvBuffer,\n    vtkIdType length, int destProcessId)\nV.Gather((float, ...), [float, ...], int, int) -> int\nC++: int Gather(const double *sendBuffer, double *recvBuffer,\n    vtkIdType length, int destProcessId)\nV.Gather((int, ...), [int, ...], int, int) -> int\nC++: int Gather(const vtkIdType *sendBuffer,\n    vtkIdType *recvBuffer, vtkIdType length, int destProcessId)\nV.Gather(vtkDataArray, vtkDataArray, int) -> int\nC++: int Gather(vtkDataArray *sendBuffer,\n    vtkDataArray *recvBuffer, int destProcessId)\n\nGather collects arrays in the process with id destProcessId. \nEach process (including the destination) sends the contents of\nits send buffer to the destination process.  The destination\nprocess receives the messages and stores them in rank order.  The\nlength argument (which must be the same on all processes) is the\nlength of the sendBuffers.  The recvBuffer (on te destination\nprocess) must be of length length*numProcesses.  Gather is the\ninverse operation of Scatter.\n"},
  {(char*)"GatherV", PyvtkMultiProcessController_GatherV, METH_VARARGS,
   (char*)"V.GatherV((int, ...), [int, ...], int, [int, ...], [int, ...],\n    int) -> int\nC++: int GatherV(const int *sendBuffer, int *recvBuffer,\n    vtkIdType sendLength, vtkIdType *recvLengths,\n    vtkIdType *offsets, int destProcessId)\nV.GatherV((int, ...), [int, ...], int, [int, ...], [int, ...],\n    int) -> int\nC++: int GatherV(const unsigned long *sendBuffer,\n    unsigned long *recvBuffer, vtkIdType sendLength,\n    vtkIdType *recvLengths, vtkIdType *offsets, int destProcessId)\nV.GatherV(string, string, int, [int, ...], [int, ...], int) -> int\nC++: int GatherV(const char *sendBuffer, char *recvBuffer,\n    vtkIdType sendLength, vtkIdType *recvLengths,\n    vtkIdType *offsets, int destProcessId)\nV.GatherV((float, ...), [float, ...], int, [int, ...], [int, ...],\n     int) -> int\nC++: int GatherV(const double *sendBuffer, double *recvBuffer,\n    vtkIdType sendLength, vtkIdType *recvLengths,\n    vtkIdType *offsets, int destProcessId)\nV.GatherV((int, ...), [int, ...], int, [int, ...], [int, ...],\n    int) -> int\nC++: int GatherV(const vtkIdType *sendBuffer,\n    vtkIdType *recvBuffer, vtkIdType sendLength,\n    vtkIdType *recvLengths, vtkIdType *offsets, int destProcessId)\nV.GatherV(vtkDataArray, vtkDataArray, [int, ...], [int, ...], int)\n     -> int\nC++: int GatherV(vtkDataArray *sendBuffer,\n    vtkDataArray *recvBuffer, vtkIdType *recvLengths,\n    vtkIdType *offsets, int destProcessId)\nV.GatherV(vtkDataArray, vtkDataArray, int) -> int\nC++: int GatherV(vtkDataArray *sendBuffer,\n    vtkDataArray *recvBuffer, int destProcessId)\n\nGatherV is the vector variant of Gather.  It extends the\nfunctionality of Gather by allowing a varying count of data from\neach process. GatherV collects arrays in the process with id\ndestProcessId.  Each process (including the destination) sends\nthe contents of its send buffer to the destination process.  The\ndestination process receives the messages and stores them in rank\norder.  The sendLength argument defines how much the local\nprocess ...\n [Truncated]\n"},
  {(char*)"Scatter", PyvtkMultiProcessController_Scatter, METH_VARARGS,
   (char*)"V.Scatter((int, ...), [int, ...], int, int) -> int\nC++: int Scatter(const int *sendBuffer, int *recvBuffer,\n    vtkIdType length, int srcProcessId)\nV.Scatter((int, ...), [int, ...], int, int) -> int\nC++: int Scatter(const unsigned long *sendBuffer,\n    unsigned long *recvBuffer, vtkIdType length, int srcProcessId)\nV.Scatter(string, string, int, int) -> int\nC++: int Scatter(const char *sendBuffer, char *recvBuffer,\n    vtkIdType length, int srcProcessId)\nV.Scatter((float, ...), [float, ...], int, int) -> int\nC++: int Scatter(const double *sendBuffer, double *recvBuffer,\n    vtkIdType length, int srcProcessId)\nV.Scatter((int, ...), [int, ...], int, int) -> int\nC++: int Scatter(const vtkIdType *sendBuffer,\n    vtkIdType *recvBuffer, vtkIdType length, int srcProcessId)\nV.Scatter(vtkDataArray, vtkDataArray, int) -> int\nC++: int Scatter(vtkDataArray *sendBuffer,\n    vtkDataArray *recvBuffer, int srcProcessId)\n\nScatter takes an array in the process with id srcProcessId and\ndistributes it.  Each process (including the source) receives a\nportion of the send buffer.  Process 0 receives the first length\nvalues, process 1 receives the second length values, and so on. \nScatter is the inverse operation of Gather.\n"},
  {(char*)"ScatterV", PyvtkMultiProcessController_ScatterV, METH_VARARGS,
   (char*)"V.ScatterV((int, ...), [int, ...], [int, ...], [int, ...], int,\n    int) -> int\nC++: int ScatterV(const int *sendBuffer, int *recvBuffer,\n    vtkIdType *sendLengths, vtkIdType *offsets,\n    vtkIdType recvLength, int srcProcessId)\nV.ScatterV((int, ...), [int, ...], [int, ...], [int, ...], int,\n    int) -> int\nC++: int ScatterV(const unsigned long *sendBuffer,\n    unsigned long *recvBuffer, vtkIdType *sendLengths,\n    vtkIdType *offsets, vtkIdType recvLength, int srcProcessId)\nV.ScatterV(string, string, [int, ...], [int, ...], int, int)\n    -> int\nC++: int ScatterV(const char *sendBuffer, char *recvBuffer,\n    vtkIdType *sendLengths, vtkIdType *offsets,\n    vtkIdType recvLength, int srcProcessId)\nV.ScatterV((float, ...), [float, ...], [int, ...], [int, ...],\n    int, int) -> int\nC++: int ScatterV(const double *sendBuffer, double *recvBuffer,\n    vtkIdType *sendLengths, vtkIdType *offsets,\n    vtkIdType recvLength, int srcProcessId)\nV.ScatterV((int, ...), [int, ...], [int, ...], [int, ...], int,\n    int) -> int\nC++: int ScatterV(const vtkIdType *sendBuffer,\n    vtkIdType *recvBuffer, vtkIdType *sendLengths,\n    vtkIdType *offsets, vtkIdType recvLength, int srcProcessId)\n\nScatterV is the vector variant of Scatter.  It extends the\nfunctionality of Scatter by allowing a varying count of data to\neach process. ScatterV takes an array in the process with id\nsrcProcessId and distributes it.  Each process (including the\nsource) receives a portion of the send buffer defined by the\nsendLengths and offsets arrays.\n"},
  {(char*)"AllGather", PyvtkMultiProcessController_AllGather, METH_VARARGS,
   (char*)"V.AllGather((int, ...), [int, ...], int) -> int\nC++: int AllGather(const int *sendBuffer, int *recvBuffer,\n    vtkIdType length)\nV.AllGather((int, ...), [int, ...], int) -> int\nC++: int AllGather(const unsigned long *sendBuffer,\n    unsigned long *recvBuffer, vtkIdType length)\nV.AllGather(string, string, int) -> int\nC++: int AllGather(const char *sendBuffer, char *recvBuffer,\n    vtkIdType length)\nV.AllGather((float, ...), [float, ...], int) -> int\nC++: int AllGather(const double *sendBuffer, double *recvBuffer,\n    vtkIdType length)\nV.AllGather((int, ...), [int, ...], int) -> int\nC++: int AllGather(const vtkIdType *sendBuffer,\n    vtkIdType *recvBuffer, vtkIdType length)\nV.AllGather(vtkDataArray, vtkDataArray) -> int\nC++: int AllGather(vtkDataArray *sendBuffer,\n    vtkDataArray *recvBuffer)\n\nSame as gather except that the result ends up on all processes.\n"},
  {(char*)"AllGatherV", PyvtkMultiProcessController_AllGatherV, METH_VARARGS,
   (char*)"V.AllGatherV((int, ...), [int, ...], int, [int, ...], [int, ...])\n    -> int\nC++: int AllGatherV(const int *sendBuffer, int *recvBuffer,\n    vtkIdType sendLength, vtkIdType *recvLengths,\n    vtkIdType *offsets)\nV.AllGatherV((int, ...), [int, ...], int, [int, ...], [int, ...])\n    -> int\nC++: int AllGatherV(const unsigned long *sendBuffer,\n    unsigned long *recvBuffer, vtkIdType sendLength,\n    vtkIdType *recvLengths, vtkIdType *offsets)\nV.AllGatherV(string, string, int, [int, ...], [int, ...]) -> int\nC++: int AllGatherV(const char *sendBuffer, char *recvBuffer,\n    vtkIdType sendLength, vtkIdType *recvLengths,\n    vtkIdType *offsets)\nV.AllGatherV((float, ...), [float, ...], int, [int, ...], [int,\n    ...]) -> int\nC++: int AllGatherV(const double *sendBuffer, double *recvBuffer,\n    vtkIdType sendLength, vtkIdType *recvLengths,\n    vtkIdType *offsets)\nV.AllGatherV((int, ...), [int, ...], int, [int, ...], [int, ...])\n    -> int\nC++: int AllGatherV(const vtkIdType *sendBuffer,\n    vtkIdType *recvBuffer, vtkIdType sendLength,\n    vtkIdType *recvLengths, vtkIdType *offsets)\nV.AllGatherV(vtkDataArray, vtkDataArray, [int, ...], [int, ...])\n    -> int\nC++: int AllGatherV(vtkDataArray *sendBuffer,\n    vtkDataArray *recvBuffer, vtkIdType *recvLengths,\n    vtkIdType *offsets)\nV.AllGatherV(vtkDataArray, vtkDataArray) -> int\nC++: int AllGatherV(vtkDataArray *sendBuffer,\n    vtkDataArray *recvBuffer)\n\nSame as GatherV except that the result is placed in all\nprocesses.\n"},
  {(char*)"Reduce", PyvtkMultiProcessController_Reduce, METH_VARARGS,
   (char*)"V.Reduce((int, ...), [int, ...], int, int, int) -> int\nC++: int Reduce(const int *sendBuffer, int *recvBuffer,\n    vtkIdType length, int operation, int destProcessId)\nV.Reduce((int, ...), [int, ...], int, int, int) -> int\nC++: int Reduce(const unsigned long *sendBuffer,\n    unsigned long *recvBuffer, vtkIdType length, int operation,\n    int destProcessId)\nV.Reduce(string, string, int, int, int) -> int\nC++: int Reduce(const char *sendBuffer, char *recvBuffer,\n    vtkIdType length, int operation, int destProcessId)\nV.Reduce((float, ...), [float, ...], int, int, int) -> int\nC++: int Reduce(const double *sendBuffer, double *recvBuffer,\n    vtkIdType length, int operation, int destProcessId)\nV.Reduce((int, ...), [int, ...], int, int, int) -> int\nC++: int Reduce(const vtkIdType *sendBuffer,\n    vtkIdType *recvBuffer, vtkIdType length, int operation,\n    int destProcessId)\nV.Reduce(vtkDataArray, vtkDataArray, int, int) -> int\nC++: int Reduce(vtkDataArray *sendBuffer,\n    vtkDataArray *recvBuffer, int operation, int destProcessId)\n\nReduce an array to the given destination process.  This version\nof Reduce takes an identifier defined in the\nvtkCommunicator::StandardOperations enum to define the operation.\n"},
  {(char*)"AllReduce", PyvtkMultiProcessController_AllReduce, METH_VARARGS,
   (char*)"V.AllReduce((int, ...), [int, ...], int, int) -> int\nC++: int AllReduce(const int *sendBuffer, int *recvBuffer,\n    vtkIdType length, int operation)\nV.AllReduce((int, ...), [int, ...], int, int) -> int\nC++: int AllReduce(const unsigned long *sendBuffer,\n    unsigned long *recvBuffer, vtkIdType length, int operation)\nV.AllReduce(string, string, int, int) -> int\nC++: int AllReduce(const char *sendBuffer, char *recvBuffer,\n    vtkIdType length, int operation)\nV.AllReduce((float, ...), [float, ...], int, int) -> int\nC++: int AllReduce(const double *sendBuffer, double *recvBuffer,\n    vtkIdType length, int operation)\nV.AllReduce((int, ...), [int, ...], int, int) -> int\nC++: int AllReduce(const vtkIdType *sendBuffer,\n    vtkIdType *recvBuffer, vtkIdType length, int operation)\nV.AllReduce(vtkDataArray, vtkDataArray, int) -> int\nC++: int AllReduce(vtkDataArray *sendBuffer,\n    vtkDataArray *recvBuffer, int operation)\n\nSame as Reduce except that the result is placed in all of the\nprocesses.\n"},
  {NULL, NULL, 0, NULL}
};

PyObject *PyVTKClass_vtkMultiProcessControllerNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(NULL,
    PyvtkMultiProcessController_Methods,
    "vtkMultiProcessController", modulename,
    NULL, NULL,
    PyvtkMultiProcessController_Doc(),
    PyVTKClass_vtkObjectNew(modulename));

  if (cls)
    {
    PyObject *d = PyVTKClass_GetDict(cls);
    PyObject *o;

    PyType_Ready(&PyvtkMultiProcessController_Errors_Type);
    PyvtkMultiProcessController_Errors_Type.tp_new = NULL;

    o = (PyObject *)&PyvtkMultiProcessController_Errors_Type;
    if (o && PyDict_SetItemString(d, (char *)"Errors", o) != 0)
      {
      Py_DECREF(o);
      }

    PyType_Ready(&PyvtkMultiProcessController_Consts_Type);
    PyvtkMultiProcessController_Consts_Type.tp_new = NULL;

    o = (PyObject *)&PyvtkMultiProcessController_Consts_Type;
    if (o && PyDict_SetItemString(d, (char *)"Consts", o) != 0)
      {
      Py_DECREF(o);
      }

    PyType_Ready(&PyvtkMultiProcessController_Tags_Type);
    PyvtkMultiProcessController_Tags_Type.tp_new = NULL;

    o = (PyObject *)&PyvtkMultiProcessController_Tags_Type;
    if (o && PyDict_SetItemString(d, (char *)"Tags", o) != 0)
      {
      Py_DECREF(o);
      }

    for (int c = 0; c < 3; c++)
      {
      typedef vtkMultiProcessController::Errors cxx_enum_type;

      static const struct { const char *name; cxx_enum_type value; }
        constants[3] = {
          { "RMI_NO_ERROR", vtkMultiProcessController::RMI_NO_ERROR },
          { "RMI_TAG_ERROR", vtkMultiProcessController::RMI_TAG_ERROR },
          { "RMI_ARG_ERROR", vtkMultiProcessController::RMI_ARG_ERROR },
        };

      o = PyvtkMultiProcessController_Errors_FromEnum(constants[c].value);
      if (o)
        {
        PyDict_SetItemString(d, (char *)constants[c].name, o);
        Py_DECREF(o);
        }
      }

    for (int c = 0; c < 2; c++)
      {
      typedef vtkMultiProcessController::Consts cxx_enum_type;

      static const struct { const char *name; cxx_enum_type value; }
        constants[2] = {
          { "ANY_SOURCE", vtkMultiProcessController::ANY_SOURCE },
          { "INVALID_SOURCE", vtkMultiProcessController::INVALID_SOURCE },
        };

      o = PyvtkMultiProcessController_Consts_FromEnum(constants[c].value);
      if (o)
        {
        PyDict_SetItemString(d, (char *)constants[c].name, o);
        Py_DECREF(o);
        }
      }

    for (int c = 0; c < 4; c++)
      {
      typedef vtkMultiProcessController::Tags cxx_enum_type;

      static const struct { const char *name; cxx_enum_type value; }
        constants[4] = {
          { "RMI_TAG", vtkMultiProcessController::RMI_TAG },
          { "RMI_ARG_TAG", vtkMultiProcessController::RMI_ARG_TAG },
          { "BREAK_RMI_TAG", vtkMultiProcessController::BREAK_RMI_TAG },
          { "XML_WRITER_DATA_INFO", vtkMultiProcessController::XML_WRITER_DATA_INFO },
        };

      o = PyvtkMultiProcessController_Tags_FromEnum(constants[c].value);
      if (o)
        {
        PyDict_SetItemString(d, (char *)constants[c].name, o);
        Py_DECREF(o);
        }
      }

    }

  return cls;
}

const char **PyvtkMultiProcessController_Doc()
{
  static const char *docstring[] = {
    "vtkMultiProcessController - Multiprocessing communication superclass\n\n",
    "Superclass: vtkObject\n\n",
    "vtkMultiProcessController is used to control multiple processes in a\ndistributed computing environment. It has methods for executing\nsingle/multiple method(s) on multiple processors, triggering\nregistered callbacks (Remote Methods) (AddRMI(), TriggerRMI()) and\ncommunication. Please note that the communication is done using the\ncommunicator which is accessible to the user. Therefore it is\npossible ",
    "to get the communicator with GetCommunicator() and use it to\nsend and receive data. This is the encouraged communication method.\nThe internal (RMI) communications are done using a second internal\ncommunicator (called RMICommunicator).\n\nThere are two modes for RMI communication: (1) Send/Receive mode and\n(2) Broadcast (collective) mode. The Send/Receive mode arranges\nprocesses in a binary tree usin",
    "g post-order traversal and propagates\nthe RMI trigger starting from the root (rank 0) to the children. It\nis commonly employed to communicate between client/server over TCP.\nAlthough, the Send/Receive mode can be employed transparently over\nTCP or MPI, it is not optimal for triggering the RMIs on the\nsatellite ranks. The Broadcast mode provides a more desirable\nalternative, namely, it uses MPI_Bro",
    "adcast for communication, which\nis the nominal way of achieving this in an MPI context. The\nunderlying communication mode used for triggering RMIs is controlled\nby the \"BroadcastTriggerRMI\" variable. Note, that mixing between the\ntwo modes for RMI communication is not correct behavior. All\nprocesses within the vtkMultiProcessController must use the same mode\nfor triggering RMI.\n\nSee Also:\n\nvtkMPIC",
    "ontroller vtkCommunicator vtkMPICommunicator\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkMultiProcessController(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkMultiProcessControllerNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkMultiProcessController", o) != 0)
    {
    Py_DECREF(o);
    }

}

