// python wrapper for vtkDataObject
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkDataObject.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkDataObject(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkDataObjectNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkDataObject_Doc();

#ifndef DECLARED_PyvtkDataObject_FieldAssociations_Type
extern VTK_PYTHON_EXPORT PyTypeObject PyvtkDataObject_FieldAssociations_Type;
#define DECLARED_PyvtkDataObject_FieldAssociations_Type
#endif

PyTypeObject PyvtkDataObject_FieldAssociations_Type = {
  PyObject_HEAD_INIT(&PyType_Type)
  0,
  (char*)"FieldAssociations", // tp_name
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

PyObject *PyvtkDataObject_FieldAssociations_FromEnum(int val)
{
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkDataObject_FieldAssociations_Type);
  self->ob_ival = val;
  return (PyObject *)self;
}

#ifndef DECLARED_PyvtkDataObject_AttributeTypes_Type
extern VTK_PYTHON_EXPORT PyTypeObject PyvtkDataObject_AttributeTypes_Type;
#define DECLARED_PyvtkDataObject_AttributeTypes_Type
#endif

PyTypeObject PyvtkDataObject_AttributeTypes_Type = {
  PyObject_HEAD_INIT(&PyType_Type)
  0,
  (char*)"AttributeTypes", // tp_name
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

PyObject *PyvtkDataObject_AttributeTypes_FromEnum(int val)
{
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkDataObject_AttributeTypes_Type);
  self->ob_ival = val;
  return (PyObject *)self;
}

#ifndef DECLARED_PyvtkDataObject_FieldOperations_Type
extern VTK_PYTHON_EXPORT PyTypeObject PyvtkDataObject_FieldOperations_Type;
#define DECLARED_PyvtkDataObject_FieldOperations_Type
#endif

PyTypeObject PyvtkDataObject_FieldOperations_Type = {
  PyObject_HEAD_INIT(&PyType_Type)
  0,
  (char*)"FieldOperations", // tp_name
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

PyObject *PyvtkDataObject_FieldOperations_FromEnum(int val)
{
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkDataObject_FieldOperations_Type);
  self->ob_ival = val;
  return (PyObject *)self;
}


static PyObject *
PyvtkDataObject_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObject *op = static_cast<vtkDataObject *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkDataObject::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataObject_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObject *op = static_cast<vtkDataObject *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkDataObject::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataObject_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObject *op = static_cast<vtkDataObject *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkDataObject *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkDataObject::NewInstance());

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
PyvtkDataObject_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkDataObject *tempr = vtkDataObject::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataObject_GetInformation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObject *op = static_cast<vtkDataObject *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkInformation *tempr = (ap.IsBound() ?
      op->GetInformation() :
      op->vtkDataObject::GetInformation());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataObject_SetInformation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObject *op = static_cast<vtkDataObject *>(vp);

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
      op->vtkDataObject::SetInformation(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataObject_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObject *op = static_cast<vtkDataObject *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMTime() :
      op->vtkDataObject::GetMTime());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataObject_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObject *op = static_cast<vtkDataObject *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Initialize();
      }
    else
      {
      op->vtkDataObject::Initialize();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataObject_ReleaseData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObject *op = static_cast<vtkDataObject *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ReleaseData();
      }
    else
      {
      op->vtkDataObject::ReleaseData();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataObject_GetDataReleased(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataReleased");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObject *op = static_cast<vtkDataObject *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetDataReleased() :
      op->vtkDataObject::GetDataReleased());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataObject_SetGlobalReleaseDataFlag(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SetGlobalReleaseDataFlag");

  int temp0;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkDataObject::SetGlobalReleaseDataFlag(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataObject_GlobalReleaseDataFlagOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GlobalReleaseDataFlagOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObject *op = static_cast<vtkDataObject *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->GlobalReleaseDataFlagOn();
      }
    else
      {
      op->vtkDataObject::GlobalReleaseDataFlagOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataObject_GlobalReleaseDataFlagOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GlobalReleaseDataFlagOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObject *op = static_cast<vtkDataObject *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->GlobalReleaseDataFlagOff();
      }
    else
      {
      op->vtkDataObject::GlobalReleaseDataFlagOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataObject_GetGlobalReleaseDataFlag(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetGlobalReleaseDataFlag");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    int tempr = vtkDataObject::GetGlobalReleaseDataFlag();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataObject_SetFieldData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFieldData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObject *op = static_cast<vtkDataObject *>(vp);

  vtkFieldData *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkFieldData"))
    {
    if (ap.IsBound())
      {
      op->SetFieldData(temp0);
      }
    else
      {
      op->vtkDataObject::SetFieldData(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataObject_GetFieldData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFieldData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObject *op = static_cast<vtkDataObject *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkFieldData *tempr = (ap.IsBound() ?
      op->GetFieldData() :
      op->vtkDataObject::GetFieldData());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataObject_GetDataObjectType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataObjectType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObject *op = static_cast<vtkDataObject *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetDataObjectType() :
      op->vtkDataObject::GetDataObjectType());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataObject_GetUpdateTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUpdateTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObject *op = static_cast<vtkDataObject *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned long tempr = (ap.IsBound() ?
      op->GetUpdateTime() :
      op->vtkDataObject::GetUpdateTime());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataObject_GetActualMemorySize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActualMemorySize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObject *op = static_cast<vtkDataObject *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned long tempr = (ap.IsBound() ?
      op->GetActualMemorySize() :
      op->vtkDataObject::GetActualMemorySize());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataObject_CopyInformationFromPipeline(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyInformationFromPipeline");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObject *op = static_cast<vtkDataObject *>(vp);

  vtkInformation *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformation"))
    {
    if (ap.IsBound())
      {
      op->CopyInformationFromPipeline(temp0);
      }
    else
      {
      op->vtkDataObject::CopyInformationFromPipeline(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataObject_GetActiveFieldInformation(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetActiveFieldInformation");

  vtkInformation *temp0 = NULL;
  int temp1;
  int temp2;
  PyObject *result = NULL;

  if (ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkInformation") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    vtkInformation *tempr = vtkDataObject::GetActiveFieldInformation(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataObject_GetNamedFieldInformation(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNamedFieldInformation");

  vtkInformation *temp0 = NULL;
  int temp1;
  char *temp2 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkInformation") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    vtkInformation *tempr = vtkDataObject::GetNamedFieldInformation(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataObject_RemoveNamedFieldInformation(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "RemoveNamedFieldInformation");

  vtkInformation *temp0 = NULL;
  int temp1;
  char *temp2 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkInformation") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    vtkDataObject::RemoveNamedFieldInformation(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataObject_SetActiveAttribute(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SetActiveAttribute");

  vtkInformation *temp0 = NULL;
  int temp1;
  char *temp2 = NULL;
  int temp3;
  PyObject *result = NULL;

  if (ap.CheckArgCount(4) &&
      ap.GetVTKObject(temp0, "vtkInformation") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
    {
    vtkInformation *tempr = vtkDataObject::SetActiveAttribute(temp0, temp1, temp2, temp3);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataObject_SetActiveAttributeInfo(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SetActiveAttributeInfo");

  vtkInformation *temp0 = NULL;
  int temp1;
  int temp2;
  char *temp3 = NULL;
  int temp4;
  int temp5;
  int temp6;
  PyObject *result = NULL;

  if (ap.CheckArgCount(7) &&
      ap.GetVTKObject(temp0, "vtkInformation") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5) &&
      ap.GetValue(temp6))
    {
    vtkDataObject::SetActiveAttributeInfo(temp0, temp1, temp2, temp3, temp4, temp5, temp6);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataObject_SetPointDataActiveScalarInfo(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SetPointDataActiveScalarInfo");

  vtkInformation *temp0 = NULL;
  int temp1;
  int temp2;
  PyObject *result = NULL;

  if (ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkInformation") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    vtkDataObject::SetPointDataActiveScalarInfo(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataObject_DataHasBeenGenerated(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DataHasBeenGenerated");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObject *op = static_cast<vtkDataObject *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->DataHasBeenGenerated();
      }
    else
      {
      op->vtkDataObject::DataHasBeenGenerated();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataObject_PrepareForNewData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PrepareForNewData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObject *op = static_cast<vtkDataObject *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->PrepareForNewData();
      }
    else
      {
      op->vtkDataObject::PrepareForNewData();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataObject_ShallowCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShallowCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObject *op = static_cast<vtkDataObject *>(vp);

  vtkDataObject *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataObject"))
    {
    if (ap.IsBound())
      {
      op->ShallowCopy(temp0);
      }
    else
      {
      op->vtkDataObject::ShallowCopy(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataObject_DeepCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeepCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObject *op = static_cast<vtkDataObject *>(vp);

  vtkDataObject *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataObject"))
    {
    if (ap.IsBound())
      {
      op->DeepCopy(temp0);
      }
    else
      {
      op->vtkDataObject::DeepCopy(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataObject_GetExtentType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetExtentType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObject *op = static_cast<vtkDataObject *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetExtentType() :
      op->vtkDataObject::GetExtentType());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataObject_Crop(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Crop");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObject *op = static_cast<vtkDataObject *>(vp);

  int *temp0 = NULL;
  int small0[4];
  int size0 = 0;
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

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->Crop(temp0);
      }
    else
      {
      op->vtkDataObject::Crop(temp0);
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


static PyObject *
PyvtkDataObject_GetAttributes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAttributes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObject *op = static_cast<vtkDataObject *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkDataSetAttributes *tempr = (ap.IsBound() ?
      op->GetAttributes(temp0) :
      op->vtkDataObject::GetAttributes(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataObject_GetAttributesAsFieldData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAttributesAsFieldData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObject *op = static_cast<vtkDataObject *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkFieldData *tempr = (ap.IsBound() ?
      op->GetAttributesAsFieldData(temp0) :
      op->vtkDataObject::GetAttributesAsFieldData(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataObject_GetAttributeTypeForArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAttributeTypeForArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObject *op = static_cast<vtkDataObject *>(vp);

  vtkAbstractArray *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAbstractArray"))
    {
    int tempr = (ap.IsBound() ?
      op->GetAttributeTypeForArray(temp0) :
      op->vtkDataObject::GetAttributeTypeForArray(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataObject_GetNumberOfElements(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfElements");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObject *op = static_cast<vtkDataObject *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetNumberOfElements(temp0) :
      op->vtkDataObject::GetNumberOfElements(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataObject_GetAssociationTypeAsString(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetAssociationTypeAsString");

  int temp0;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    const char *tempr = vtkDataObject::GetAssociationTypeAsString(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataObject_GetAssociationTypeFromString(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetAssociationTypeFromString");

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = vtkDataObject::GetAssociationTypeFromString(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataObject_DATA_TYPE_NAME(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "DATA_TYPE_NAME");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkInformationStringKey *tempr = vtkDataObject::DATA_TYPE_NAME();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataObject_DATA_OBJECT(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "DATA_OBJECT");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkInformationDataObjectKey *tempr = vtkDataObject::DATA_OBJECT();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataObject_DATA_EXTENT_TYPE(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "DATA_EXTENT_TYPE");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkInformationIntegerKey *tempr = vtkDataObject::DATA_EXTENT_TYPE();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataObject_DATA_EXTENT(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "DATA_EXTENT");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkInformationIntegerPointerKey *tempr = vtkDataObject::DATA_EXTENT();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataObject_ALL_PIECES_EXTENT(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "ALL_PIECES_EXTENT");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkInformationIntegerVectorKey *tempr = vtkDataObject::ALL_PIECES_EXTENT();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataObject_DATA_PIECE_NUMBER(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "DATA_PIECE_NUMBER");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkInformationIntegerKey *tempr = vtkDataObject::DATA_PIECE_NUMBER();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataObject_DATA_NUMBER_OF_PIECES(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "DATA_NUMBER_OF_PIECES");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkInformationIntegerKey *tempr = vtkDataObject::DATA_NUMBER_OF_PIECES();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataObject_DATA_NUMBER_OF_GHOST_LEVELS(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "DATA_NUMBER_OF_GHOST_LEVELS");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkInformationIntegerKey *tempr = vtkDataObject::DATA_NUMBER_OF_GHOST_LEVELS();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataObject_DATA_TIME_STEP(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "DATA_TIME_STEP");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkInformationDoubleKey *tempr = vtkDataObject::DATA_TIME_STEP();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataObject_POINT_DATA_VECTOR(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "POINT_DATA_VECTOR");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkInformationInformationVectorKey *tempr = vtkDataObject::POINT_DATA_VECTOR();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataObject_CELL_DATA_VECTOR(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "CELL_DATA_VECTOR");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkInformationInformationVectorKey *tempr = vtkDataObject::CELL_DATA_VECTOR();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataObject_VERTEX_DATA_VECTOR(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "VERTEX_DATA_VECTOR");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkInformationInformationVectorKey *tempr = vtkDataObject::VERTEX_DATA_VECTOR();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataObject_EDGE_DATA_VECTOR(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "EDGE_DATA_VECTOR");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkInformationInformationVectorKey *tempr = vtkDataObject::EDGE_DATA_VECTOR();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataObject_FIELD_ARRAY_TYPE(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "FIELD_ARRAY_TYPE");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkInformationIntegerKey *tempr = vtkDataObject::FIELD_ARRAY_TYPE();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataObject_FIELD_ASSOCIATION(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "FIELD_ASSOCIATION");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkInformationIntegerKey *tempr = vtkDataObject::FIELD_ASSOCIATION();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataObject_FIELD_ATTRIBUTE_TYPE(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "FIELD_ATTRIBUTE_TYPE");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkInformationIntegerKey *tempr = vtkDataObject::FIELD_ATTRIBUTE_TYPE();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataObject_FIELD_ACTIVE_ATTRIBUTE(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "FIELD_ACTIVE_ATTRIBUTE");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkInformationIntegerKey *tempr = vtkDataObject::FIELD_ACTIVE_ATTRIBUTE();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataObject_FIELD_NUMBER_OF_COMPONENTS(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "FIELD_NUMBER_OF_COMPONENTS");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkInformationIntegerKey *tempr = vtkDataObject::FIELD_NUMBER_OF_COMPONENTS();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataObject_FIELD_NUMBER_OF_TUPLES(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "FIELD_NUMBER_OF_TUPLES");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkInformationIntegerKey *tempr = vtkDataObject::FIELD_NUMBER_OF_TUPLES();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataObject_FIELD_OPERATION(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "FIELD_OPERATION");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkInformationIntegerKey *tempr = vtkDataObject::FIELD_OPERATION();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataObject_FIELD_RANGE(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "FIELD_RANGE");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkInformationDoubleVectorKey *tempr = vtkDataObject::FIELD_RANGE();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataObject_PIECE_EXTENT(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "PIECE_EXTENT");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkInformationIntegerVectorKey *tempr = vtkDataObject::PIECE_EXTENT();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataObject_FIELD_NAME(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "FIELD_NAME");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkInformationStringKey *tempr = vtkDataObject::FIELD_NAME();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataObject_ORIGIN(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "ORIGIN");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkInformationDoubleVectorKey *tempr = vtkDataObject::ORIGIN();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataObject_SPACING(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SPACING");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkInformationDoubleVectorKey *tempr = vtkDataObject::SPACING();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataObject_BOUNDING_BOX(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "BOUNDING_BOX");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkInformationDoubleVectorKey *tempr = vtkDataObject::BOUNDING_BOX();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataObject_SIL(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SIL");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkInformationDataObjectKey *tempr = vtkDataObject::SIL();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataObject_GetData_s1(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetData");

  vtkInformation *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformation"))
    {
    vtkDataObject *tempr = vtkDataObject::GetData(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkDataObject_GetData_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetData");

  vtkInformationVector *temp0 = NULL;
  int temp1 = 0;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1, 2) &&
      ap.GetVTKObject(temp0, "vtkInformationVector") &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
    {
    vtkDataObject *tempr = vtkDataObject::GetData(temp0, temp1);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkDataObject_GetData_Methods[] = {
  {NULL, PyvtkDataObject_GetData_s1, METH_VARARGS | METH_STATIC,
   (char*)"O *vtkInformation"},
  {NULL, PyvtkDataObject_GetData_s2, METH_VARARGS | METH_STATIC,
   (char*)"O|i *vtkInformationVector"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkDataObject_GetData(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkDataObject_GetData_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
    {
    case 2:
      return PyvtkDataObject_GetData_s2(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetData");
  return NULL;
}


static PyMethodDef PyvtkDataObject_Methods[] = {
  {(char*)"GetClassName", PyvtkDataObject_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkDataObject_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkDataObject_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkDataObject\nC++: vtkDataObject *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkDataObject_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkDataObject\nC++: vtkDataObject *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetInformation", PyvtkDataObject_GetInformation, METH_VARARGS,
   (char*)"V.GetInformation() -> vtkInformation\nC++: vtkInformation *GetInformation()\n\nSet/Get the information object associated with this data object.\n"},
  {(char*)"SetInformation", PyvtkDataObject_SetInformation, METH_VARARGS,
   (char*)"V.SetInformation(vtkInformation)\nC++: virtual void SetInformation(vtkInformation *)\n\nSet/Get the information object associated with this data object.\n"},
  {(char*)"GetMTime", PyvtkDataObject_GetMTime, METH_VARARGS,
   (char*)"V.GetMTime() -> int\nC++: unsigned long int GetMTime()\n\nData objects are composite objects and need to check each part\nfor MTime. The information object also needs to be considered.\n"},
  {(char*)"Initialize", PyvtkDataObject_Initialize, METH_VARARGS,
   (char*)"V.Initialize()\nC++: virtual void Initialize()\n\nRestore data object to initial state,\n"},
  {(char*)"ReleaseData", PyvtkDataObject_ReleaseData, METH_VARARGS,
   (char*)"V.ReleaseData()\nC++: void ReleaseData()\n\nRelease data back to system to conserve memory resource. Used\nduring visualization network execution.  Releasing this data does\nnot make down-stream data invalid, so it does not modify the\nMTime of this data object.\n"},
  {(char*)"GetDataReleased", PyvtkDataObject_GetDataReleased, METH_VARARGS,
   (char*)"V.GetDataReleased() -> int\nC++: int GetDataReleased()\n\nGet the flag indicating the data has been released.\n"},
  {(char*)"SetGlobalReleaseDataFlag", PyvtkDataObject_SetGlobalReleaseDataFlag, METH_VARARGS | METH_STATIC,
   (char*)"V.SetGlobalReleaseDataFlag(int)\nC++: static void SetGlobalReleaseDataFlag(int val)\n\nTurn on/off flag to control whether every object releases its\ndata after being used by a filter.\n"},
  {(char*)"GlobalReleaseDataFlagOn", PyvtkDataObject_GlobalReleaseDataFlagOn, METH_VARARGS,
   (char*)"V.GlobalReleaseDataFlagOn()\nC++: void GlobalReleaseDataFlagOn()\n\nTurn on/off flag to control whether every object releases its\ndata after being used by a filter.\n"},
  {(char*)"GlobalReleaseDataFlagOff", PyvtkDataObject_GlobalReleaseDataFlagOff, METH_VARARGS,
   (char*)"V.GlobalReleaseDataFlagOff()\nC++: void GlobalReleaseDataFlagOff()\n\nTurn on/off flag to control whether every object releases its\ndata after being used by a filter.\n"},
  {(char*)"GetGlobalReleaseDataFlag", PyvtkDataObject_GetGlobalReleaseDataFlag, METH_VARARGS | METH_STATIC,
   (char*)"V.GetGlobalReleaseDataFlag() -> int\nC++: static int GetGlobalReleaseDataFlag()\n\nTurn on/off flag to control whether every object releases its\ndata after being used by a filter.\n"},
  {(char*)"SetFieldData", PyvtkDataObject_SetFieldData, METH_VARARGS,
   (char*)"V.SetFieldData(vtkFieldData)\nC++: virtual void SetFieldData(vtkFieldData *)\n\nAssign or retrieve a general field data to this data object.\n"},
  {(char*)"GetFieldData", PyvtkDataObject_GetFieldData, METH_VARARGS,
   (char*)"V.GetFieldData() -> vtkFieldData\nC++: vtkFieldData *GetFieldData()\n\nAssign or retrieve a general field data to this data object.\n"},
  {(char*)"GetDataObjectType", PyvtkDataObject_GetDataObjectType, METH_VARARGS,
   (char*)"V.GetDataObjectType() -> int\nC++: virtual int GetDataObjectType()\n\nReturn class name of data type. This is one of\nVTK_STRUCTURED_GRID, VTK_STRUCTURED_POINTS,\nVTK_UNSTRUCTURED_GRID, VTK_POLY_DATA, or VTK_RECTILINEAR_GRID\n(see vtkSetGet.h for definitions). THIS METHOD IS THREAD SAFE\n"},
  {(char*)"GetUpdateTime", PyvtkDataObject_GetUpdateTime, METH_VARARGS,
   (char*)"V.GetUpdateTime() -> int\nC++: unsigned long GetUpdateTime()\n\nUsed by Threaded ports to determine if they should initiate an\nasynchronous update (still in development).\n"},
  {(char*)"GetActualMemorySize", PyvtkDataObject_GetActualMemorySize, METH_VARARGS,
   (char*)"V.GetActualMemorySize() -> int\nC++: virtual unsigned long GetActualMemorySize()\n\nReturn the actual size of the data in kilobytes. This number is\nvalid only after the pipeline has updated. The memory size\nreturned is guaranteed to be greater than or equal to the memory\nrequired to represent the data (e.g., extra space in arrays, etc.\nare not included in the return value).\n"},
  {(char*)"CopyInformationFromPipeline", PyvtkDataObject_CopyInformationFromPipeline, METH_VARARGS,
   (char*)"V.CopyInformationFromPipeline(vtkInformation)\nC++: virtual void CopyInformationFromPipeline(\n    vtkInformation *info)\n\nCopy information about this data object from the pipeline\ninformation to its own Information. Called right before the main\nexecution pass..\n"},
  {(char*)"GetActiveFieldInformation", PyvtkDataObject_GetActiveFieldInformation, METH_VARARGS | METH_STATIC,
   (char*)"V.GetActiveFieldInformation(vtkInformation, int, int)\n    -> vtkInformation\nC++: static vtkInformation *GetActiveFieldInformation(\n    vtkInformation *info, int fieldAssociation, int attributeType)\n\nReturn the information object within the input information\nobject's field data corresponding to the specified association\n(FIELD_ASSOCIATION_POINTS or FIELD_ASSOCIATION_CELLS) and\nattribute (SCALARS, VECTORS, NORMALS, TCOORDS, or TENSORS)\n"},
  {(char*)"GetNamedFieldInformation", PyvtkDataObject_GetNamedFieldInformation, METH_VARARGS | METH_STATIC,
   (char*)"V.GetNamedFieldInformation(vtkInformation, int, string)\n    -> vtkInformation\nC++: static vtkInformation *GetNamedFieldInformation(\n    vtkInformation *info, int fieldAssociation, const char *name)\n\nReturn the information object within the input information\nobject's field data corresponding to the specified association\n(FIELD_ASSOCIATION_POINTS or FIELD_ASSOCIATION_CELLS) and name.\n"},
  {(char*)"RemoveNamedFieldInformation", PyvtkDataObject_RemoveNamedFieldInformation, METH_VARARGS | METH_STATIC,
   (char*)"V.RemoveNamedFieldInformation(vtkInformation, int, string)\nC++: static void RemoveNamedFieldInformation(vtkInformation *info,\n     int fieldAssociation, const char *name)\n\nRemove the info associated with an array\n"},
  {(char*)"SetActiveAttribute", PyvtkDataObject_SetActiveAttribute, METH_VARARGS | METH_STATIC,
   (char*)"V.SetActiveAttribute(vtkInformation, int, string, int)\n    -> vtkInformation\nC++: static vtkInformation *SetActiveAttribute(\n    vtkInformation *info, int fieldAssociation,\n    const char *attributeName, int attributeType)\n\nSet the named array to be the active field for the specified type\n(SCALARS, VECTORS, NORMALS, TCOORDS, or TENSORS) and association\n(FIELD_ASSOCIATION_POINTS or FIELD_ASSOCIATION_CELLS).  Returns\nthe active field information object and creates on entry if one\nnot found.\n"},
  {(char*)"SetActiveAttributeInfo", PyvtkDataObject_SetActiveAttributeInfo, METH_VARARGS | METH_STATIC,
   (char*)"V.SetActiveAttributeInfo(vtkInformation, int, int, string, int,\n    int, int)\nC++: static void SetActiveAttributeInfo(vtkInformation *info,\n    int fieldAssociation, int attributeType, const char *name,\n    int arrayType, int numComponents, int numTuples)\n\nSet the name, array type, number of components, and number of\ntuples within the passed information object for the active\nattribute of type attributeType (in specified association,\nFIELD_ASSOCIATION_POINTS or FIELD_ASSOCIATION_CELLS).  If there\nis not an active attribute of the specified type, an entry in the\ninformation object is created.  If arrayType, numComponents, or\nnumTuples equal to -1, or name=NULL the value is not changed.\n"},
  {(char*)"SetPointDataActiveScalarInfo", PyvtkDataObject_SetPointDataActiveScalarInfo, METH_VARARGS | METH_STATIC,
   (char*)"V.SetPointDataActiveScalarInfo(vtkInformation, int, int)\nC++: static void SetPointDataActiveScalarInfo(\n    vtkInformation *info, int arrayType, int numComponents)\n\nConvenience version of previous method for use (primarily) by the\nImaging filters. If arrayType or numComponents == -1, the value\nis not changed.\n"},
  {(char*)"DataHasBeenGenerated", PyvtkDataObject_DataHasBeenGenerated, METH_VARARGS,
   (char*)"V.DataHasBeenGenerated()\nC++: void DataHasBeenGenerated()\n\nThis method is called by the source when it executes to generate\ndata. It is sort of the opposite of ReleaseData. It sets the\nDataReleased flag to 0, and sets a new UpdateTime.\n"},
  {(char*)"PrepareForNewData", PyvtkDataObject_PrepareForNewData, METH_VARARGS,
   (char*)"V.PrepareForNewData()\nC++: virtual void PrepareForNewData()\n\nmake the output data ready for new data to be inserted. For most\nobjects we just call Initialize. But for vtkImageData we leave\nthe old data in case the memory can be reused.\n"},
  {(char*)"ShallowCopy", PyvtkDataObject_ShallowCopy, METH_VARARGS,
   (char*)"V.ShallowCopy(vtkDataObject)\nC++: virtual void ShallowCopy(vtkDataObject *src)\n\nShallow and Deep copy.  These copy the data, but not any of the\npipeline connections.\n"},
  {(char*)"DeepCopy", PyvtkDataObject_DeepCopy, METH_VARARGS,
   (char*)"V.DeepCopy(vtkDataObject)\nC++: virtual void DeepCopy(vtkDataObject *src)\n\nShallow and Deep copy.  These copy the data, but not any of the\npipeline connections.\n"},
  {(char*)"GetExtentType", PyvtkDataObject_GetExtentType, METH_VARARGS,
   (char*)"V.GetExtentType() -> int\nC++: virtual int GetExtentType()\n\nThe ExtentType will be left as VTK_PIECES_EXTENT for data objects\nsuch as vtkPolyData and vtkUnstructuredGrid. The ExtentType will\nbe changed to VTK_3D_EXTENT for data objects with 3D structure\nsuch as vtkImageData (and its subclass vtkStructuredPoints),\nvtkRectilinearGrid, and vtkStructuredGrid. The default is the\nhave an extent in pieces, with only one piece (no streaming\npossible).\n"},
  {(char*)"Crop", PyvtkDataObject_Crop, METH_VARARGS,
   (char*)"V.Crop((int, ...))\nC++: virtual void Crop(const int *updateExtent)\n\nThis method crops the data object (if necessary) so that the\nextent matches the update extent.\n"},
  {(char*)"GetAttributes", PyvtkDataObject_GetAttributes, METH_VARARGS,
   (char*)"V.GetAttributes(int) -> vtkDataSetAttributes\nC++: virtual vtkDataSetAttributes *GetAttributes(int type)\n\nReturns the attributes of the data object of the specified\nattribute type. The type may be:  POINT  - Defined in vtkDataSet\nsubclasses. CELL   - Defined in vtkDataSet subclasses. VERTEX -\nDefined in vtkGraph subclasses. EDGE   - Defined in vtkGraph\nsubclasses. ROW    - Defined in vtkTable.  The other attribute\ntype, FIELD, will return NULL since field data is stored as a\nvtkFieldData instance, not a vtkDataSetAttributes instance. To\nretrieve field data, use GetAttributesAsFieldData.\n"},
  {(char*)"GetAttributesAsFieldData", PyvtkDataObject_GetAttributesAsFieldData, METH_VARARGS,
   (char*)"V.GetAttributesAsFieldData(int) -> vtkFieldData\nC++: virtual vtkFieldData *GetAttributesAsFieldData(int type)\n\nReturns the attributes of the data object as a vtkFieldData. This\nreturns non-null values in all the same cases as GetAttributes,\nin addition to the case of FIELD, which will return the field\ndata for any vtkDataObject subclass.\n"},
  {(char*)"GetAttributeTypeForArray", PyvtkDataObject_GetAttributeTypeForArray, METH_VARARGS,
   (char*)"V.GetAttributeTypeForArray(vtkAbstractArray) -> int\nC++: virtual int GetAttributeTypeForArray(vtkAbstractArray *arr)\n\nRetrieves the attribute type that an array came from. This is\nuseful for obtaining which attribute type a input array to an\nalgorithm came from (retrieved from\nGetInputAbstractArrayToProcesss).\n"},
  {(char*)"GetNumberOfElements", PyvtkDataObject_GetNumberOfElements, METH_VARARGS,
   (char*)"V.GetNumberOfElements(int) -> int\nC++: virtual vtkIdType GetNumberOfElements(int type)\n\nGet the number of elements for a specific attribute type (POINT,\nCELL, etc.).\n"},
  {(char*)"GetAssociationTypeAsString", PyvtkDataObject_GetAssociationTypeAsString, METH_VARARGS | METH_STATIC,
   (char*)"V.GetAssociationTypeAsString(int) -> string\nC++: static const char *GetAssociationTypeAsString(\n    int associationType)\n\nGiven an integer association type, this static method returns a\nstring type for the attribute (i.e. type = 0: returns \"Points\").\n"},
  {(char*)"GetAssociationTypeFromString", PyvtkDataObject_GetAssociationTypeFromString, METH_VARARGS | METH_STATIC,
   (char*)"V.GetAssociationTypeFromString(string) -> int\nC++: static int GetAssociationTypeFromString(\n    const char *associationType)\n\nGiven an integer association type, this static method returns a\nstring type for the attribute (i.e. type = 0: returns \"Points\").\n"},
  {(char*)"DATA_TYPE_NAME", PyvtkDataObject_DATA_TYPE_NAME, METH_VARARGS | METH_STATIC,
   (char*)"V.DATA_TYPE_NAME() -> vtkInformationStringKey\nC++: static vtkInformationStringKey *DATA_TYPE_NAME()\n\n"},
  {(char*)"DATA_OBJECT", PyvtkDataObject_DATA_OBJECT, METH_VARARGS | METH_STATIC,
   (char*)"V.DATA_OBJECT() -> vtkInformationDataObjectKey\nC++: static vtkInformationDataObjectKey *DATA_OBJECT()\n\n"},
  {(char*)"DATA_EXTENT_TYPE", PyvtkDataObject_DATA_EXTENT_TYPE, METH_VARARGS | METH_STATIC,
   (char*)"V.DATA_EXTENT_TYPE() -> vtkInformationIntegerKey\nC++: static vtkInformationIntegerKey *DATA_EXTENT_TYPE()\n\n"},
  {(char*)"DATA_EXTENT", PyvtkDataObject_DATA_EXTENT, METH_VARARGS | METH_STATIC,
   (char*)"V.DATA_EXTENT() -> vtkInformationIntegerPointerKey\nC++: static vtkInformationIntegerPointerKey *DATA_EXTENT()\n\n"},
  {(char*)"ALL_PIECES_EXTENT", PyvtkDataObject_ALL_PIECES_EXTENT, METH_VARARGS | METH_STATIC,
   (char*)"V.ALL_PIECES_EXTENT() -> vtkInformationIntegerVectorKey\nC++: static vtkInformationIntegerVectorKey *ALL_PIECES_EXTENT()\n\n"},
  {(char*)"DATA_PIECE_NUMBER", PyvtkDataObject_DATA_PIECE_NUMBER, METH_VARARGS | METH_STATIC,
   (char*)"V.DATA_PIECE_NUMBER() -> vtkInformationIntegerKey\nC++: static vtkInformationIntegerKey *DATA_PIECE_NUMBER()\n\n"},
  {(char*)"DATA_NUMBER_OF_PIECES", PyvtkDataObject_DATA_NUMBER_OF_PIECES, METH_VARARGS | METH_STATIC,
   (char*)"V.DATA_NUMBER_OF_PIECES() -> vtkInformationIntegerKey\nC++: static vtkInformationIntegerKey *DATA_NUMBER_OF_PIECES()\n\n"},
  {(char*)"DATA_NUMBER_OF_GHOST_LEVELS", PyvtkDataObject_DATA_NUMBER_OF_GHOST_LEVELS, METH_VARARGS | METH_STATIC,
   (char*)"V.DATA_NUMBER_OF_GHOST_LEVELS() -> vtkInformationIntegerKey\nC++: static vtkInformationIntegerKey *DATA_NUMBER_OF_GHOST_LEVELS(\n    )\n\n"},
  {(char*)"DATA_TIME_STEP", PyvtkDataObject_DATA_TIME_STEP, METH_VARARGS | METH_STATIC,
   (char*)"V.DATA_TIME_STEP() -> vtkInformationDoubleKey\nC++: static vtkInformationDoubleKey *DATA_TIME_STEP()\n\n"},
  {(char*)"POINT_DATA_VECTOR", PyvtkDataObject_POINT_DATA_VECTOR, METH_VARARGS | METH_STATIC,
   (char*)"V.POINT_DATA_VECTOR() -> vtkInformationInformationVectorKey\nC++: static vtkInformationInformationVectorKey *POINT_DATA_VECTOR(\n    )\n\n"},
  {(char*)"CELL_DATA_VECTOR", PyvtkDataObject_CELL_DATA_VECTOR, METH_VARARGS | METH_STATIC,
   (char*)"V.CELL_DATA_VECTOR() -> vtkInformationInformationVectorKey\nC++: static vtkInformationInformationVectorKey *CELL_DATA_VECTOR()\n\n"},
  {(char*)"VERTEX_DATA_VECTOR", PyvtkDataObject_VERTEX_DATA_VECTOR, METH_VARARGS | METH_STATIC,
   (char*)"V.VERTEX_DATA_VECTOR() -> vtkInformationInformationVectorKey\nC++: static vtkInformationInformationVectorKey *VERTEX_DATA_VECTOR(\n    )\n\n"},
  {(char*)"EDGE_DATA_VECTOR", PyvtkDataObject_EDGE_DATA_VECTOR, METH_VARARGS | METH_STATIC,
   (char*)"V.EDGE_DATA_VECTOR() -> vtkInformationInformationVectorKey\nC++: static vtkInformationInformationVectorKey *EDGE_DATA_VECTOR()\n\n"},
  {(char*)"FIELD_ARRAY_TYPE", PyvtkDataObject_FIELD_ARRAY_TYPE, METH_VARARGS | METH_STATIC,
   (char*)"V.FIELD_ARRAY_TYPE() -> vtkInformationIntegerKey\nC++: static vtkInformationIntegerKey *FIELD_ARRAY_TYPE()\n\n"},
  {(char*)"FIELD_ASSOCIATION", PyvtkDataObject_FIELD_ASSOCIATION, METH_VARARGS | METH_STATIC,
   (char*)"V.FIELD_ASSOCIATION() -> vtkInformationIntegerKey\nC++: static vtkInformationIntegerKey *FIELD_ASSOCIATION()\n\n"},
  {(char*)"FIELD_ATTRIBUTE_TYPE", PyvtkDataObject_FIELD_ATTRIBUTE_TYPE, METH_VARARGS | METH_STATIC,
   (char*)"V.FIELD_ATTRIBUTE_TYPE() -> vtkInformationIntegerKey\nC++: static vtkInformationIntegerKey *FIELD_ATTRIBUTE_TYPE()\n\n"},
  {(char*)"FIELD_ACTIVE_ATTRIBUTE", PyvtkDataObject_FIELD_ACTIVE_ATTRIBUTE, METH_VARARGS | METH_STATIC,
   (char*)"V.FIELD_ACTIVE_ATTRIBUTE() -> vtkInformationIntegerKey\nC++: static vtkInformationIntegerKey *FIELD_ACTIVE_ATTRIBUTE()\n\n"},
  {(char*)"FIELD_NUMBER_OF_COMPONENTS", PyvtkDataObject_FIELD_NUMBER_OF_COMPONENTS, METH_VARARGS | METH_STATIC,
   (char*)"V.FIELD_NUMBER_OF_COMPONENTS() -> vtkInformationIntegerKey\nC++: static vtkInformationIntegerKey *FIELD_NUMBER_OF_COMPONENTS()\n\n"},
  {(char*)"FIELD_NUMBER_OF_TUPLES", PyvtkDataObject_FIELD_NUMBER_OF_TUPLES, METH_VARARGS | METH_STATIC,
   (char*)"V.FIELD_NUMBER_OF_TUPLES() -> vtkInformationIntegerKey\nC++: static vtkInformationIntegerKey *FIELD_NUMBER_OF_TUPLES()\n\n"},
  {(char*)"FIELD_OPERATION", PyvtkDataObject_FIELD_OPERATION, METH_VARARGS | METH_STATIC,
   (char*)"V.FIELD_OPERATION() -> vtkInformationIntegerKey\nC++: static vtkInformationIntegerKey *FIELD_OPERATION()\n\n"},
  {(char*)"FIELD_RANGE", PyvtkDataObject_FIELD_RANGE, METH_VARARGS | METH_STATIC,
   (char*)"V.FIELD_RANGE() -> vtkInformationDoubleVectorKey\nC++: static vtkInformationDoubleVectorKey *FIELD_RANGE()\n\n"},
  {(char*)"PIECE_EXTENT", PyvtkDataObject_PIECE_EXTENT, METH_VARARGS | METH_STATIC,
   (char*)"V.PIECE_EXTENT() -> vtkInformationIntegerVectorKey\nC++: static vtkInformationIntegerVectorKey *PIECE_EXTENT()\n\n"},
  {(char*)"FIELD_NAME", PyvtkDataObject_FIELD_NAME, METH_VARARGS | METH_STATIC,
   (char*)"V.FIELD_NAME() -> vtkInformationStringKey\nC++: static vtkInformationStringKey *FIELD_NAME()\n\n"},
  {(char*)"ORIGIN", PyvtkDataObject_ORIGIN, METH_VARARGS | METH_STATIC,
   (char*)"V.ORIGIN() -> vtkInformationDoubleVectorKey\nC++: static vtkInformationDoubleVectorKey *ORIGIN()\n\n"},
  {(char*)"SPACING", PyvtkDataObject_SPACING, METH_VARARGS | METH_STATIC,
   (char*)"V.SPACING() -> vtkInformationDoubleVectorKey\nC++: static vtkInformationDoubleVectorKey *SPACING()\n\n"},
  {(char*)"BOUNDING_BOX", PyvtkDataObject_BOUNDING_BOX, METH_VARARGS | METH_STATIC,
   (char*)"V.BOUNDING_BOX() -> vtkInformationDoubleVectorKey\nC++: static vtkInformationDoubleVectorKey *BOUNDING_BOX()\n\n"},
  {(char*)"SIL", PyvtkDataObject_SIL, METH_VARARGS | METH_STATIC,
   (char*)"V.SIL() -> vtkInformationDataObjectKey\nC++: static vtkInformationDataObjectKey *SIL()\n\n"},
  {(char*)"GetData", PyvtkDataObject_GetData, METH_VARARGS | METH_STATIC,
   (char*)"V.GetData(vtkInformation) -> vtkDataObject\nC++: static vtkDataObject *GetData(vtkInformation *info)\nV.GetData(vtkInformationVector, int) -> vtkDataObject\nC++: static vtkDataObject *GetData(vtkInformationVector *v,\n    int i=0)\n\nRetrieve an instance of this class from an information object.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkDataObject_StaticNew()
{
  return vtkDataObject::New();
}

PyObject *PyVTKClass_vtkDataObjectNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkDataObject_StaticNew,
    PyvtkDataObject_Methods,
    "vtkDataObject", modulename,
    NULL, NULL,
    PyvtkDataObject_Doc(),
    PyVTKClass_vtkObjectNew(modulename));

  if (cls)
    {
    PyObject *d = PyVTKClass_GetDict(cls);
    PyObject *o;

    PyType_Ready(&PyvtkDataObject_FieldAssociations_Type);
    PyvtkDataObject_FieldAssociations_Type.tp_new = NULL;

    o = (PyObject *)&PyvtkDataObject_FieldAssociations_Type;
    if (o && PyDict_SetItemString(d, (char *)"FieldAssociations", o) != 0)
      {
      Py_DECREF(o);
      }

    PyType_Ready(&PyvtkDataObject_AttributeTypes_Type);
    PyvtkDataObject_AttributeTypes_Type.tp_new = NULL;

    o = (PyObject *)&PyvtkDataObject_AttributeTypes_Type;
    if (o && PyDict_SetItemString(d, (char *)"AttributeTypes", o) != 0)
      {
      Py_DECREF(o);
      }

    PyType_Ready(&PyvtkDataObject_FieldOperations_Type);
    PyvtkDataObject_FieldOperations_Type.tp_new = NULL;

    o = (PyObject *)&PyvtkDataObject_FieldOperations_Type;
    if (o && PyDict_SetItemString(d, (char *)"FieldOperations", o) != 0)
      {
      Py_DECREF(o);
      }

    for (int c = 0; c < 8; c++)
      {
      typedef vtkDataObject::FieldAssociations cxx_enum_type;

      static const struct { const char *name; cxx_enum_type value; }
        constants[8] = {
          { "FIELD_ASSOCIATION_POINTS", vtkDataObject::FIELD_ASSOCIATION_POINTS },
          { "FIELD_ASSOCIATION_CELLS", vtkDataObject::FIELD_ASSOCIATION_CELLS },
          { "FIELD_ASSOCIATION_NONE", vtkDataObject::FIELD_ASSOCIATION_NONE },
          { "FIELD_ASSOCIATION_POINTS_THEN_CELLS", vtkDataObject::FIELD_ASSOCIATION_POINTS_THEN_CELLS },
          { "FIELD_ASSOCIATION_VERTICES", vtkDataObject::FIELD_ASSOCIATION_VERTICES },
          { "FIELD_ASSOCIATION_EDGES", vtkDataObject::FIELD_ASSOCIATION_EDGES },
          { "FIELD_ASSOCIATION_ROWS", vtkDataObject::FIELD_ASSOCIATION_ROWS },
          { "NUMBER_OF_ASSOCIATIONS", vtkDataObject::NUMBER_OF_ASSOCIATIONS },
        };

      o = PyvtkDataObject_FieldAssociations_FromEnum(constants[c].value);
      if (o)
        {
        PyDict_SetItemString(d, (char *)constants[c].name, o);
        Py_DECREF(o);
        }
      }

    for (int c = 0; c < 8; c++)
      {
      typedef vtkDataObject::AttributeTypes cxx_enum_type;

      static const struct { const char *name; cxx_enum_type value; }
        constants[8] = {
          { "POINT", vtkDataObject::POINT },
          { "CELL", vtkDataObject::CELL },
          { "FIELD", vtkDataObject::FIELD },
          { "POINT_THEN_CELL", vtkDataObject::POINT_THEN_CELL },
          { "VERTEX", vtkDataObject::VERTEX },
          { "EDGE", vtkDataObject::EDGE },
          { "ROW", vtkDataObject::ROW },
          { "NUMBER_OF_ATTRIBUTE_TYPES", vtkDataObject::NUMBER_OF_ATTRIBUTE_TYPES },
        };

      o = PyvtkDataObject_AttributeTypes_FromEnum(constants[c].value);
      if (o)
        {
        PyDict_SetItemString(d, (char *)constants[c].name, o);
        Py_DECREF(o);
        }
      }

    for (int c = 0; c < 4; c++)
      {
      typedef vtkDataObject::FieldOperations cxx_enum_type;

      static const struct { const char *name; cxx_enum_type value; }
        constants[4] = {
          { "FIELD_OPERATION_PRESERVED", vtkDataObject::FIELD_OPERATION_PRESERVED },
          { "FIELD_OPERATION_REINTERPOLATED", vtkDataObject::FIELD_OPERATION_REINTERPOLATED },
          { "FIELD_OPERATION_MODIFIED", vtkDataObject::FIELD_OPERATION_MODIFIED },
          { "FIELD_OPERATION_REMOVED", vtkDataObject::FIELD_OPERATION_REMOVED },
        };

      o = PyvtkDataObject_FieldOperations_FromEnum(constants[c].value);
      if (o)
        {
        PyDict_SetItemString(d, (char *)constants[c].name, o);
        Py_DECREF(o);
        }
      }

    }

  return cls;
}

const char **PyvtkDataObject_Doc()
{
  static const char *docstring[] = {
    "vtkDataObject - general representation of visualization data\n\n",
    "Superclass: vtkObject\n\n",
    "vtkDataObject is an general representation of visualization data. It\nserves to encapsulate instance variables and methods for\nvisualization network execution, as well as representing data\nconsisting of a field (i.e., just an unstructured pile of data). This\nis to be compared with a vtkDataSet, which is data with geometric\nand/or topological structure.\n\nvtkDataObjects are used to represent arbitrar",
    "y repositories of data\nvia the vtkFieldData instance variable. These data must be eventually\nmapped into a concrete subclass of vtkDataSet before they can\nactually be displayed.\n\nSee Also:\n\nvtkDataSet vtkFieldData vtkDataObjectSource vtkDataObjectFilter\nvtkDataObjectMapper vtkDataObjectToDataSet\nvtkFieldDataToAttributeDataFilter\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkDataObject(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkDataObjectNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkDataObject", o) != 0)
    {
    Py_DECREF(o);
    }

  for (int c = 0; c < 3; c++)
    {
    static const struct { const char *name; int value; }
      constants[3] = {
        { "VTK_PIECES_EXTENT", 0 },
        { "VTK_3D_EXTENT", 1 },
        { "VTK_TIME_EXTENT", 2 },
      };

    o = PyInt_FromLong(constants[c].value);
    if (o)
      {
      PyDict_SetItemString(dict, (char *)constants[c].name, o);
      Py_DECREF(o);
      }
    }

}

