// python wrapper for vtkDataSetAttributes
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkDataSetAttributes.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkDataSetAttributes(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkDataSetAttributesNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkFieldDataNew
extern "C" { PyObject *PyVTKClass_vtkFieldDataNew(const char *); }
#define DECLARED_PyVTKClass_vtkFieldDataNew
#endif

static const char **PyvtkDataSetAttributes_Doc();

#ifndef DECLARED_PyvtkDataSetAttributes_AttributeTypes_Type
extern VTK_PYTHON_EXPORT PyTypeObject PyvtkDataSetAttributes_AttributeTypes_Type;
#define DECLARED_PyvtkDataSetAttributes_AttributeTypes_Type
#endif

PyTypeObject PyvtkDataSetAttributes_AttributeTypes_Type = {
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

PyObject *PyvtkDataSetAttributes_AttributeTypes_FromEnum(int val)
{
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkDataSetAttributes_AttributeTypes_Type);
  self->ob_ival = val;
  return (PyObject *)self;
}

#ifndef DECLARED_PyvtkDataSetAttributes_AttributeLimitTypes_Type
extern VTK_PYTHON_EXPORT PyTypeObject PyvtkDataSetAttributes_AttributeLimitTypes_Type;
#define DECLARED_PyvtkDataSetAttributes_AttributeLimitTypes_Type
#endif

PyTypeObject PyvtkDataSetAttributes_AttributeLimitTypes_Type = {
  PyObject_HEAD_INIT(&PyType_Type)
  0,
  (char*)"AttributeLimitTypes", // tp_name
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

PyObject *PyvtkDataSetAttributes_AttributeLimitTypes_FromEnum(int val)
{
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkDataSetAttributes_AttributeLimitTypes_Type);
  self->ob_ival = val;
  return (PyObject *)self;
}

#ifndef DECLARED_PyvtkDataSetAttributes_AttributeCopyOperations_Type
extern VTK_PYTHON_EXPORT PyTypeObject PyvtkDataSetAttributes_AttributeCopyOperations_Type;
#define DECLARED_PyvtkDataSetAttributes_AttributeCopyOperations_Type
#endif

PyTypeObject PyvtkDataSetAttributes_AttributeCopyOperations_Type = {
  PyObject_HEAD_INIT(&PyType_Type)
  0,
  (char*)"AttributeCopyOperations", // tp_name
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

PyObject *PyvtkDataSetAttributes_AttributeCopyOperations_FromEnum(int val)
{
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkDataSetAttributes_AttributeCopyOperations_Type);
  self->ob_ival = val;
  return (PyObject *)self;
}


static PyObject *
PyvtkDataSetAttributes_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetAttributes *op = static_cast<vtkDataSetAttributes *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkDataSetAttributes::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataSetAttributes_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetAttributes *op = static_cast<vtkDataSetAttributes *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkDataSetAttributes::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataSetAttributes_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetAttributes *op = static_cast<vtkDataSetAttributes *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkDataSetAttributes *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkDataSetAttributes::NewInstance());

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
PyvtkDataSetAttributes_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkDataSetAttributes *tempr = vtkDataSetAttributes::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataSetAttributes_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetAttributes *op = static_cast<vtkDataSetAttributes *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Initialize();
      }
    else
      {
      op->vtkDataSetAttributes::Initialize();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataSetAttributes_Update(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Update");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetAttributes *op = static_cast<vtkDataSetAttributes *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Update();
      }
    else
      {
      op->vtkDataSetAttributes::Update();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataSetAttributes_DeepCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeepCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetAttributes *op = static_cast<vtkDataSetAttributes *>(vp);

  vtkFieldData *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkFieldData"))
    {
    if (ap.IsBound())
      {
      op->DeepCopy(temp0);
      }
    else
      {
      op->vtkDataSetAttributes::DeepCopy(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataSetAttributes_ShallowCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShallowCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetAttributes *op = static_cast<vtkDataSetAttributes *>(vp);

  vtkFieldData *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkFieldData"))
    {
    if (ap.IsBound())
      {
      op->ShallowCopy(temp0);
      }
    else
      {
      op->vtkDataSetAttributes::ShallowCopy(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataSetAttributes_SetScalars(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalars");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetAttributes *op = static_cast<vtkDataSetAttributes *>(vp);

  vtkDataArray *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataArray"))
    {
    int tempr = (ap.IsBound() ?
      op->SetScalars(temp0) :
      op->vtkDataSetAttributes::SetScalars(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataSetAttributes_SetActiveScalars(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetActiveScalars");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetAttributes *op = static_cast<vtkDataSetAttributes *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->SetActiveScalars(temp0) :
      op->vtkDataSetAttributes::SetActiveScalars(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataSetAttributes_GetScalars_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalars");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetAttributes *op = static_cast<vtkDataSetAttributes *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkDataArray *tempr = (ap.IsBound() ?
      op->GetScalars() :
      op->vtkDataSetAttributes::GetScalars());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkDataSetAttributes_GetScalars_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalars");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetAttributes *op = static_cast<vtkDataSetAttributes *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkDataArray *tempr = (ap.IsBound() ?
      op->GetScalars(temp0) :
      op->vtkDataSetAttributes::GetScalars(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkDataSetAttributes_GetScalars(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 0:
      return PyvtkDataSetAttributes_GetScalars_s1(self, args);
    case 1:
      return PyvtkDataSetAttributes_GetScalars_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetScalars");
  return NULL;
}



static PyObject *
PyvtkDataSetAttributes_SetVectors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVectors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetAttributes *op = static_cast<vtkDataSetAttributes *>(vp);

  vtkDataArray *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataArray"))
    {
    int tempr = (ap.IsBound() ?
      op->SetVectors(temp0) :
      op->vtkDataSetAttributes::SetVectors(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataSetAttributes_SetActiveVectors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetActiveVectors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetAttributes *op = static_cast<vtkDataSetAttributes *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->SetActiveVectors(temp0) :
      op->vtkDataSetAttributes::SetActiveVectors(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataSetAttributes_GetVectors_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVectors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetAttributes *op = static_cast<vtkDataSetAttributes *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkDataArray *tempr = (ap.IsBound() ?
      op->GetVectors() :
      op->vtkDataSetAttributes::GetVectors());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkDataSetAttributes_GetVectors_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVectors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetAttributes *op = static_cast<vtkDataSetAttributes *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkDataArray *tempr = (ap.IsBound() ?
      op->GetVectors(temp0) :
      op->vtkDataSetAttributes::GetVectors(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkDataSetAttributes_GetVectors(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 0:
      return PyvtkDataSetAttributes_GetVectors_s1(self, args);
    case 1:
      return PyvtkDataSetAttributes_GetVectors_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetVectors");
  return NULL;
}



static PyObject *
PyvtkDataSetAttributes_SetNormals(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNormals");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetAttributes *op = static_cast<vtkDataSetAttributes *>(vp);

  vtkDataArray *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataArray"))
    {
    int tempr = (ap.IsBound() ?
      op->SetNormals(temp0) :
      op->vtkDataSetAttributes::SetNormals(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataSetAttributes_SetActiveNormals(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetActiveNormals");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetAttributes *op = static_cast<vtkDataSetAttributes *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->SetActiveNormals(temp0) :
      op->vtkDataSetAttributes::SetActiveNormals(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataSetAttributes_GetNormals_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNormals");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetAttributes *op = static_cast<vtkDataSetAttributes *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkDataArray *tempr = (ap.IsBound() ?
      op->GetNormals() :
      op->vtkDataSetAttributes::GetNormals());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkDataSetAttributes_GetNormals_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNormals");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetAttributes *op = static_cast<vtkDataSetAttributes *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkDataArray *tempr = (ap.IsBound() ?
      op->GetNormals(temp0) :
      op->vtkDataSetAttributes::GetNormals(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkDataSetAttributes_GetNormals(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 0:
      return PyvtkDataSetAttributes_GetNormals_s1(self, args);
    case 1:
      return PyvtkDataSetAttributes_GetNormals_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetNormals");
  return NULL;
}



static PyObject *
PyvtkDataSetAttributes_SetTCoords(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTCoords");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetAttributes *op = static_cast<vtkDataSetAttributes *>(vp);

  vtkDataArray *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataArray"))
    {
    int tempr = (ap.IsBound() ?
      op->SetTCoords(temp0) :
      op->vtkDataSetAttributes::SetTCoords(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataSetAttributes_SetActiveTCoords(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetActiveTCoords");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetAttributes *op = static_cast<vtkDataSetAttributes *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->SetActiveTCoords(temp0) :
      op->vtkDataSetAttributes::SetActiveTCoords(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataSetAttributes_GetTCoords_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTCoords");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetAttributes *op = static_cast<vtkDataSetAttributes *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkDataArray *tempr = (ap.IsBound() ?
      op->GetTCoords() :
      op->vtkDataSetAttributes::GetTCoords());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkDataSetAttributes_GetTCoords_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTCoords");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetAttributes *op = static_cast<vtkDataSetAttributes *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkDataArray *tempr = (ap.IsBound() ?
      op->GetTCoords(temp0) :
      op->vtkDataSetAttributes::GetTCoords(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkDataSetAttributes_GetTCoords(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 0:
      return PyvtkDataSetAttributes_GetTCoords_s1(self, args);
    case 1:
      return PyvtkDataSetAttributes_GetTCoords_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetTCoords");
  return NULL;
}



static PyObject *
PyvtkDataSetAttributes_SetTensors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTensors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetAttributes *op = static_cast<vtkDataSetAttributes *>(vp);

  vtkDataArray *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataArray"))
    {
    int tempr = (ap.IsBound() ?
      op->SetTensors(temp0) :
      op->vtkDataSetAttributes::SetTensors(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataSetAttributes_SetActiveTensors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetActiveTensors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetAttributes *op = static_cast<vtkDataSetAttributes *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->SetActiveTensors(temp0) :
      op->vtkDataSetAttributes::SetActiveTensors(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataSetAttributes_GetTensors_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTensors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetAttributes *op = static_cast<vtkDataSetAttributes *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkDataArray *tempr = (ap.IsBound() ?
      op->GetTensors() :
      op->vtkDataSetAttributes::GetTensors());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkDataSetAttributes_GetTensors_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTensors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetAttributes *op = static_cast<vtkDataSetAttributes *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkDataArray *tempr = (ap.IsBound() ?
      op->GetTensors(temp0) :
      op->vtkDataSetAttributes::GetTensors(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkDataSetAttributes_GetTensors(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 0:
      return PyvtkDataSetAttributes_GetTensors_s1(self, args);
    case 1:
      return PyvtkDataSetAttributes_GetTensors_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetTensors");
  return NULL;
}



static PyObject *
PyvtkDataSetAttributes_SetGlobalIds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGlobalIds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetAttributes *op = static_cast<vtkDataSetAttributes *>(vp);

  vtkDataArray *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataArray"))
    {
    int tempr = (ap.IsBound() ?
      op->SetGlobalIds(temp0) :
      op->vtkDataSetAttributes::SetGlobalIds(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataSetAttributes_SetActiveGlobalIds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetActiveGlobalIds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetAttributes *op = static_cast<vtkDataSetAttributes *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->SetActiveGlobalIds(temp0) :
      op->vtkDataSetAttributes::SetActiveGlobalIds(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataSetAttributes_GetGlobalIds_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGlobalIds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetAttributes *op = static_cast<vtkDataSetAttributes *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkDataArray *tempr = (ap.IsBound() ?
      op->GetGlobalIds() :
      op->vtkDataSetAttributes::GetGlobalIds());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkDataSetAttributes_GetGlobalIds_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGlobalIds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetAttributes *op = static_cast<vtkDataSetAttributes *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkDataArray *tempr = (ap.IsBound() ?
      op->GetGlobalIds(temp0) :
      op->vtkDataSetAttributes::GetGlobalIds(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkDataSetAttributes_GetGlobalIds(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 0:
      return PyvtkDataSetAttributes_GetGlobalIds_s1(self, args);
    case 1:
      return PyvtkDataSetAttributes_GetGlobalIds_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetGlobalIds");
  return NULL;
}



static PyObject *
PyvtkDataSetAttributes_SetPedigreeIds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPedigreeIds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetAttributes *op = static_cast<vtkDataSetAttributes *>(vp);

  vtkAbstractArray *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAbstractArray"))
    {
    int tempr = (ap.IsBound() ?
      op->SetPedigreeIds(temp0) :
      op->vtkDataSetAttributes::SetPedigreeIds(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataSetAttributes_SetActivePedigreeIds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetActivePedigreeIds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetAttributes *op = static_cast<vtkDataSetAttributes *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->SetActivePedigreeIds(temp0) :
      op->vtkDataSetAttributes::SetActivePedigreeIds(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataSetAttributes_GetPedigreeIds_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPedigreeIds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetAttributes *op = static_cast<vtkDataSetAttributes *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkAbstractArray *tempr = (ap.IsBound() ?
      op->GetPedigreeIds() :
      op->vtkDataSetAttributes::GetPedigreeIds());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkDataSetAttributes_GetPedigreeIds_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPedigreeIds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetAttributes *op = static_cast<vtkDataSetAttributes *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkAbstractArray *tempr = (ap.IsBound() ?
      op->GetPedigreeIds(temp0) :
      op->vtkDataSetAttributes::GetPedigreeIds(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkDataSetAttributes_GetPedigreeIds(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 0:
      return PyvtkDataSetAttributes_GetPedigreeIds_s1(self, args);
    case 1:
      return PyvtkDataSetAttributes_GetPedigreeIds_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetPedigreeIds");
  return NULL;
}



static PyObject *
PyvtkDataSetAttributes_SetActiveAttribute_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetActiveAttribute");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetAttributes *op = static_cast<vtkDataSetAttributes *>(vp);

  char *temp0 = NULL;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    int tempr = (ap.IsBound() ?
      op->SetActiveAttribute(temp0, temp1) :
      op->vtkDataSetAttributes::SetActiveAttribute(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkDataSetAttributes_SetActiveAttribute_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetActiveAttribute");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetAttributes *op = static_cast<vtkDataSetAttributes *>(vp);

  int temp0;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    int tempr = (ap.IsBound() ?
      op->SetActiveAttribute(temp0, temp1) :
      op->vtkDataSetAttributes::SetActiveAttribute(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkDataSetAttributes_SetActiveAttribute_Methods[] = {
  {NULL, PyvtkDataSetAttributes_SetActiveAttribute_s1, METH_VARARGS,
   (char*)"@zi"},
  {NULL, PyvtkDataSetAttributes_SetActiveAttribute_s2, METH_VARARGS,
   (char*)"@ii"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkDataSetAttributes_SetActiveAttribute(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkDataSetAttributes_SetActiveAttribute_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetActiveAttribute");
  return NULL;
}



static PyObject *
PyvtkDataSetAttributes_GetAttributeIndices(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAttributeIndices");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetAttributes *op = static_cast<vtkDataSetAttributes *>(vp);

  int *temp0 = NULL;
  int *save0 = NULL;
  int small0[8];
  int size0 = 0;
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

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    if (ap.IsBound())
      {
      op->GetAttributeIndices(temp0);
      }
    else
      {
      op->vtkDataSetAttributes::GetAttributeIndices(temp0);
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


static PyObject *
PyvtkDataSetAttributes_IsArrayAnAttribute(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsArrayAnAttribute");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetAttributes *op = static_cast<vtkDataSetAttributes *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsArrayAnAttribute(temp0) :
      op->vtkDataSetAttributes::IsArrayAnAttribute(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataSetAttributes_SetAttribute(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAttribute");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetAttributes *op = static_cast<vtkDataSetAttributes *>(vp);

  vtkAbstractArray *temp0 = NULL;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkAbstractArray") &&
      ap.GetValue(temp1))
    {
    int tempr = (ap.IsBound() ?
      op->SetAttribute(temp0, temp1) :
      op->vtkDataSetAttributes::SetAttribute(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataSetAttributes_GetAttribute(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAttribute");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetAttributes *op = static_cast<vtkDataSetAttributes *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkDataArray *tempr = (ap.IsBound() ?
      op->GetAttribute(temp0) :
      op->vtkDataSetAttributes::GetAttribute(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataSetAttributes_GetAbstractAttribute(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAbstractAttribute");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetAttributes *op = static_cast<vtkDataSetAttributes *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkAbstractArray *tempr = (ap.IsBound() ?
      op->GetAbstractAttribute(temp0) :
      op->vtkDataSetAttributes::GetAbstractAttribute(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataSetAttributes_RemoveArray_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetAttributes *op = static_cast<vtkDataSetAttributes *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->RemoveArray(temp0);
      }
    else
      {
      op->vtkDataSetAttributes::RemoveArray(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkDataSetAttributes_RemoveArray_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetAttributes *op = static_cast<vtkDataSetAttributes *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->RemoveArray(temp0);
      }
    else
      {
      op->vtkDataSetAttributes::RemoveArray(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkDataSetAttributes_RemoveArray_Methods[] = {
  {NULL, PyvtkDataSetAttributes_RemoveArray_s1, METH_VARARGS,
   (char*)"@z"},
  {NULL, PyvtkDataSetAttributes_RemoveArray_s2, METH_VARARGS,
   (char*)"@i"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkDataSetAttributes_RemoveArray(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkDataSetAttributes_RemoveArray_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "RemoveArray");
  return NULL;
}



static PyObject *
PyvtkDataSetAttributes_GetAttributeTypeAsString(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetAttributeTypeAsString");

  int temp0;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    const char *tempr = vtkDataSetAttributes::GetAttributeTypeAsString(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataSetAttributes_GetLongAttributeTypeAsString(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetLongAttributeTypeAsString");

  int temp0;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    const char *tempr = vtkDataSetAttributes::GetLongAttributeTypeAsString(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataSetAttributes_SetCopyAttribute(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCopyAttribute");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetAttributes *op = static_cast<vtkDataSetAttributes *>(vp);

  int temp0;
  int temp1;
  int temp2 = vtkDataSetAttributes::ALLCOPY;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2, 3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)))
    {
    if (ap.IsBound())
      {
      op->SetCopyAttribute(temp0, temp1, temp2);
      }
    else
      {
      op->vtkDataSetAttributes::SetCopyAttribute(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataSetAttributes_SetCopyScalars(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCopyScalars");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetAttributes *op = static_cast<vtkDataSetAttributes *>(vp);

  int temp0;
  int temp1 = vtkDataSetAttributes::ALLCOPY;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1, 2) &&
      ap.GetValue(temp0) &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
    {
    if (ap.IsBound())
      {
      op->SetCopyScalars(temp0, temp1);
      }
    else
      {
      op->vtkDataSetAttributes::SetCopyScalars(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataSetAttributes_GetCopyScalars(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCopyScalars");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetAttributes *op = static_cast<vtkDataSetAttributes *>(vp);

  int temp0 = vtkDataSetAttributes::ALLCOPY;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0, 1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp0)))
    {
    int tempr = (ap.IsBound() ?
      op->GetCopyScalars(temp0) :
      op->vtkDataSetAttributes::GetCopyScalars(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataSetAttributes_CopyScalarsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyScalarsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetAttributes *op = static_cast<vtkDataSetAttributes *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->CopyScalarsOn();
      }
    else
      {
      op->vtkDataSetAttributes::CopyScalarsOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataSetAttributes_CopyScalarsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyScalarsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetAttributes *op = static_cast<vtkDataSetAttributes *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->CopyScalarsOff();
      }
    else
      {
      op->vtkDataSetAttributes::CopyScalarsOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataSetAttributes_SetCopyVectors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCopyVectors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetAttributes *op = static_cast<vtkDataSetAttributes *>(vp);

  int temp0;
  int temp1 = vtkDataSetAttributes::ALLCOPY;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1, 2) &&
      ap.GetValue(temp0) &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
    {
    if (ap.IsBound())
      {
      op->SetCopyVectors(temp0, temp1);
      }
    else
      {
      op->vtkDataSetAttributes::SetCopyVectors(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataSetAttributes_GetCopyVectors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCopyVectors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetAttributes *op = static_cast<vtkDataSetAttributes *>(vp);

  int temp0 = vtkDataSetAttributes::ALLCOPY;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0, 1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp0)))
    {
    int tempr = (ap.IsBound() ?
      op->GetCopyVectors(temp0) :
      op->vtkDataSetAttributes::GetCopyVectors(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataSetAttributes_CopyVectorsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyVectorsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetAttributes *op = static_cast<vtkDataSetAttributes *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->CopyVectorsOn();
      }
    else
      {
      op->vtkDataSetAttributes::CopyVectorsOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataSetAttributes_CopyVectorsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyVectorsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetAttributes *op = static_cast<vtkDataSetAttributes *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->CopyVectorsOff();
      }
    else
      {
      op->vtkDataSetAttributes::CopyVectorsOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataSetAttributes_SetCopyNormals(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCopyNormals");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetAttributes *op = static_cast<vtkDataSetAttributes *>(vp);

  int temp0;
  int temp1 = vtkDataSetAttributes::ALLCOPY;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1, 2) &&
      ap.GetValue(temp0) &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
    {
    if (ap.IsBound())
      {
      op->SetCopyNormals(temp0, temp1);
      }
    else
      {
      op->vtkDataSetAttributes::SetCopyNormals(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataSetAttributes_GetCopyNormals(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCopyNormals");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetAttributes *op = static_cast<vtkDataSetAttributes *>(vp);

  int temp0 = vtkDataSetAttributes::ALLCOPY;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0, 1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp0)))
    {
    int tempr = (ap.IsBound() ?
      op->GetCopyNormals(temp0) :
      op->vtkDataSetAttributes::GetCopyNormals(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataSetAttributes_CopyNormalsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyNormalsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetAttributes *op = static_cast<vtkDataSetAttributes *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->CopyNormalsOn();
      }
    else
      {
      op->vtkDataSetAttributes::CopyNormalsOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataSetAttributes_CopyNormalsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyNormalsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetAttributes *op = static_cast<vtkDataSetAttributes *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->CopyNormalsOff();
      }
    else
      {
      op->vtkDataSetAttributes::CopyNormalsOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataSetAttributes_SetCopyTCoords(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCopyTCoords");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetAttributes *op = static_cast<vtkDataSetAttributes *>(vp);

  int temp0;
  int temp1 = vtkDataSetAttributes::ALLCOPY;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1, 2) &&
      ap.GetValue(temp0) &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
    {
    if (ap.IsBound())
      {
      op->SetCopyTCoords(temp0, temp1);
      }
    else
      {
      op->vtkDataSetAttributes::SetCopyTCoords(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataSetAttributes_GetCopyTCoords(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCopyTCoords");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetAttributes *op = static_cast<vtkDataSetAttributes *>(vp);

  int temp0 = vtkDataSetAttributes::ALLCOPY;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0, 1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp0)))
    {
    int tempr = (ap.IsBound() ?
      op->GetCopyTCoords(temp0) :
      op->vtkDataSetAttributes::GetCopyTCoords(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataSetAttributes_CopyTCoordsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyTCoordsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetAttributes *op = static_cast<vtkDataSetAttributes *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->CopyTCoordsOn();
      }
    else
      {
      op->vtkDataSetAttributes::CopyTCoordsOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataSetAttributes_CopyTCoordsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyTCoordsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetAttributes *op = static_cast<vtkDataSetAttributes *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->CopyTCoordsOff();
      }
    else
      {
      op->vtkDataSetAttributes::CopyTCoordsOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataSetAttributes_SetCopyTensors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCopyTensors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetAttributes *op = static_cast<vtkDataSetAttributes *>(vp);

  int temp0;
  int temp1 = vtkDataSetAttributes::ALLCOPY;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1, 2) &&
      ap.GetValue(temp0) &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
    {
    if (ap.IsBound())
      {
      op->SetCopyTensors(temp0, temp1);
      }
    else
      {
      op->vtkDataSetAttributes::SetCopyTensors(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataSetAttributes_GetCopyTensors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCopyTensors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetAttributes *op = static_cast<vtkDataSetAttributes *>(vp);

  int temp0 = vtkDataSetAttributes::ALLCOPY;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0, 1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp0)))
    {
    int tempr = (ap.IsBound() ?
      op->GetCopyTensors(temp0) :
      op->vtkDataSetAttributes::GetCopyTensors(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataSetAttributes_CopyTensorsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyTensorsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetAttributes *op = static_cast<vtkDataSetAttributes *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->CopyTensorsOn();
      }
    else
      {
      op->vtkDataSetAttributes::CopyTensorsOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataSetAttributes_CopyTensorsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyTensorsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetAttributes *op = static_cast<vtkDataSetAttributes *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->CopyTensorsOff();
      }
    else
      {
      op->vtkDataSetAttributes::CopyTensorsOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataSetAttributes_SetCopyGlobalIds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCopyGlobalIds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetAttributes *op = static_cast<vtkDataSetAttributes *>(vp);

  int temp0;
  int temp1 = vtkDataSetAttributes::ALLCOPY;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1, 2) &&
      ap.GetValue(temp0) &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
    {
    if (ap.IsBound())
      {
      op->SetCopyGlobalIds(temp0, temp1);
      }
    else
      {
      op->vtkDataSetAttributes::SetCopyGlobalIds(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataSetAttributes_GetCopyGlobalIds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCopyGlobalIds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetAttributes *op = static_cast<vtkDataSetAttributes *>(vp);

  int temp0 = vtkDataSetAttributes::ALLCOPY;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0, 1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp0)))
    {
    int tempr = (ap.IsBound() ?
      op->GetCopyGlobalIds(temp0) :
      op->vtkDataSetAttributes::GetCopyGlobalIds(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataSetAttributes_CopyGlobalIdsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyGlobalIdsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetAttributes *op = static_cast<vtkDataSetAttributes *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->CopyGlobalIdsOn();
      }
    else
      {
      op->vtkDataSetAttributes::CopyGlobalIdsOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataSetAttributes_CopyGlobalIdsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyGlobalIdsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetAttributes *op = static_cast<vtkDataSetAttributes *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->CopyGlobalIdsOff();
      }
    else
      {
      op->vtkDataSetAttributes::CopyGlobalIdsOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataSetAttributes_SetCopyPedigreeIds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCopyPedigreeIds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetAttributes *op = static_cast<vtkDataSetAttributes *>(vp);

  int temp0;
  int temp1 = vtkDataSetAttributes::ALLCOPY;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1, 2) &&
      ap.GetValue(temp0) &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
    {
    if (ap.IsBound())
      {
      op->SetCopyPedigreeIds(temp0, temp1);
      }
    else
      {
      op->vtkDataSetAttributes::SetCopyPedigreeIds(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataSetAttributes_GetCopyPedigreeIds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCopyPedigreeIds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetAttributes *op = static_cast<vtkDataSetAttributes *>(vp);

  int temp0 = vtkDataSetAttributes::ALLCOPY;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0, 1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp0)))
    {
    int tempr = (ap.IsBound() ?
      op->GetCopyPedigreeIds(temp0) :
      op->vtkDataSetAttributes::GetCopyPedigreeIds(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataSetAttributes_CopyPedigreeIdsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyPedigreeIdsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetAttributes *op = static_cast<vtkDataSetAttributes *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->CopyPedigreeIdsOn();
      }
    else
      {
      op->vtkDataSetAttributes::CopyPedigreeIdsOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataSetAttributes_CopyPedigreeIdsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyPedigreeIdsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetAttributes *op = static_cast<vtkDataSetAttributes *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->CopyPedigreeIdsOff();
      }
    else
      {
      op->vtkDataSetAttributes::CopyPedigreeIdsOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataSetAttributes_CopyAllOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyAllOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetAttributes *op = static_cast<vtkDataSetAttributes *>(vp);

  int temp0 = vtkDataSetAttributes::ALLCOPY;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0, 1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp0)))
    {
    if (ap.IsBound())
      {
      op->CopyAllOn(temp0);
      }
    else
      {
      op->vtkDataSetAttributes::CopyAllOn(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataSetAttributes_CopyAllOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyAllOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetAttributes *op = static_cast<vtkDataSetAttributes *>(vp);

  int temp0 = vtkDataSetAttributes::ALLCOPY;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0, 1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp0)))
    {
    if (ap.IsBound())
      {
      op->CopyAllOff(temp0);
      }
    else
      {
      op->vtkDataSetAttributes::CopyAllOff(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataSetAttributes_PassData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PassData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetAttributes *op = static_cast<vtkDataSetAttributes *>(vp);

  vtkFieldData *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkFieldData"))
    {
    if (ap.IsBound())
      {
      op->PassData(temp0);
      }
    else
      {
      op->vtkDataSetAttributes::PassData(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataSetAttributes_CopyAllocate_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyAllocate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetAttributes *op = static_cast<vtkDataSetAttributes *>(vp);

  vtkDataSetAttributes *temp0 = NULL;
  vtkIdType temp1 = 0;
  vtkIdType temp2 = 1000;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1, 3) &&
      ap.GetVTKObject(temp0, "vtkDataSetAttributes") &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)) &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)))
    {
    if (ap.IsBound())
      {
      op->CopyAllocate(temp0, temp1, temp2);
      }
    else
      {
      op->vtkDataSetAttributes::CopyAllocate(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkDataSetAttributes_CopyAllocate_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyAllocate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetAttributes *op = static_cast<vtkDataSetAttributes *>(vp);

  vtkDataSetAttributes *temp0 = NULL;
  vtkIdType temp1;
  vtkIdType temp2;
  int temp3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(4) &&
      ap.GetVTKObject(temp0, "vtkDataSetAttributes") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
    {
    if (ap.IsBound())
      {
      op->CopyAllocate(temp0, temp1, temp2, temp3);
      }
    else
      {
      op->vtkDataSetAttributes::CopyAllocate(temp0, temp1, temp2, temp3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkDataSetAttributes_CopyAllocate(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
    case 2:
    case 3:
      return PyvtkDataSetAttributes_CopyAllocate_s1(self, args);
    case 4:
      return PyvtkDataSetAttributes_CopyAllocate_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "CopyAllocate");
  return NULL;
}



static PyObject *
PyvtkDataSetAttributes_CopyStructuredData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyStructuredData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetAttributes *op = static_cast<vtkDataSetAttributes *>(vp);

  vtkDataSetAttributes *temp0 = NULL;
  int *temp1 = NULL;
  int small1[4];
  int size1 = 0;
  int *temp2 = NULL;
  int small2[4];
  int size2 = 0;
  PyObject *result = NULL;

  if (op)
    {
    size1 = ap.GetArgSize(1);
    temp1 = small1;
    if (size1 > 4)
      {
      temp1 = new int[size1];
      }
    size2 = ap.GetArgSize(2);
    temp2 = small2;
    if (size2 > 4)
      {
      temp2 = new int[size2];
      }
    }

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkDataSetAttributes") &&
      ap.GetArray(temp1, size1) &&
      ap.GetArray(temp2, size2))
    {
    if (ap.IsBound())
      {
      op->CopyStructuredData(temp0, temp1, temp2);
      }
    else
      {
      op->vtkDataSetAttributes::CopyStructuredData(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  if (temp1 && temp1 != small1)
    {
    delete [] temp1;
    }
  if (temp2 && temp2 != small2)
    {
    delete [] temp2;
    }

  return result;
}


static PyObject *
PyvtkDataSetAttributes_CopyData_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetAttributes *op = static_cast<vtkDataSetAttributes *>(vp);

  vtkDataSetAttributes *temp0 = NULL;
  vtkIdType temp1;
  vtkIdType temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkDataSetAttributes") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      op->CopyData(temp0, temp1, temp2);
      }
    else
      {
      op->vtkDataSetAttributes::CopyData(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkDataSetAttributes_CopyData_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetAttributes *op = static_cast<vtkDataSetAttributes *>(vp);

  vtkDataSetAttributes *temp0 = NULL;
  vtkIdList *temp1 = NULL;
  vtkIdList *temp2 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkDataSetAttributes") &&
      ap.GetVTKObject(temp1, "vtkIdList") &&
      ap.GetVTKObject(temp2, "vtkIdList"))
    {
    if (ap.IsBound())
      {
      op->CopyData(temp0, temp1, temp2);
      }
    else
      {
      op->vtkDataSetAttributes::CopyData(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkDataSetAttributes_CopyData_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetAttributes *op = static_cast<vtkDataSetAttributes *>(vp);

  vtkDataSetAttributes *temp0 = NULL;
  vtkIdType temp1;
  vtkIdType temp2;
  vtkIdType temp3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(4) &&
      ap.GetVTKObject(temp0, "vtkDataSetAttributes") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
    {
    if (ap.IsBound())
      {
      op->CopyData(temp0, temp1, temp2, temp3);
      }
    else
      {
      op->vtkDataSetAttributes::CopyData(temp0, temp1, temp2, temp3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkDataSetAttributes_CopyData_Methods[] = {
  {NULL, PyvtkDataSetAttributes_CopyData_s1, METH_VARARGS,
   (char*)"@OLL *vtkDataSetAttributes"},
  {NULL, PyvtkDataSetAttributes_CopyData_s2, METH_VARARGS,
   (char*)"@OOO *vtkDataSetAttributes *vtkIdList *vtkIdList"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkDataSetAttributes_CopyData(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkDataSetAttributes_CopyData_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 4:
      return PyvtkDataSetAttributes_CopyData_s3(self, args);
    case 3:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "CopyData");
  return NULL;
}



static PyObject *
PyvtkDataSetAttributes_CopyTuple(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyTuple");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetAttributes *op = static_cast<vtkDataSetAttributes *>(vp);

  vtkAbstractArray *temp0 = NULL;
  vtkAbstractArray *temp1 = NULL;
  vtkIdType temp2;
  vtkIdType temp3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(4) &&
      ap.GetVTKObject(temp0, "vtkAbstractArray") &&
      ap.GetVTKObject(temp1, "vtkAbstractArray") &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
    {
    if (ap.IsBound())
      {
      op->CopyTuple(temp0, temp1, temp2, temp3);
      }
    else
      {
      op->vtkDataSetAttributes::CopyTuple(temp0, temp1, temp2, temp3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataSetAttributes_CopyTuples_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyTuples");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetAttributes *op = static_cast<vtkDataSetAttributes *>(vp);

  vtkAbstractArray *temp0 = NULL;
  vtkAbstractArray *temp1 = NULL;
  vtkIdList *temp2 = NULL;
  vtkIdList *temp3 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(4) &&
      ap.GetVTKObject(temp0, "vtkAbstractArray") &&
      ap.GetVTKObject(temp1, "vtkAbstractArray") &&
      ap.GetVTKObject(temp2, "vtkIdList") &&
      ap.GetVTKObject(temp3, "vtkIdList"))
    {
    if (ap.IsBound())
      {
      op->CopyTuples(temp0, temp1, temp2, temp3);
      }
    else
      {
      op->vtkDataSetAttributes::CopyTuples(temp0, temp1, temp2, temp3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkDataSetAttributes_CopyTuples_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyTuples");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetAttributes *op = static_cast<vtkDataSetAttributes *>(vp);

  vtkAbstractArray *temp0 = NULL;
  vtkAbstractArray *temp1 = NULL;
  vtkIdType temp2;
  vtkIdType temp3;
  vtkIdType temp4;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(5) &&
      ap.GetVTKObject(temp0, "vtkAbstractArray") &&
      ap.GetVTKObject(temp1, "vtkAbstractArray") &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4))
    {
    if (ap.IsBound())
      {
      op->CopyTuples(temp0, temp1, temp2, temp3, temp4);
      }
    else
      {
      op->vtkDataSetAttributes::CopyTuples(temp0, temp1, temp2, temp3, temp4);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkDataSetAttributes_CopyTuples(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 4:
      return PyvtkDataSetAttributes_CopyTuples_s1(self, args);
    case 5:
      return PyvtkDataSetAttributes_CopyTuples_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "CopyTuples");
  return NULL;
}



static PyObject *
PyvtkDataSetAttributes_InterpolateAllocate_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InterpolateAllocate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetAttributes *op = static_cast<vtkDataSetAttributes *>(vp);

  vtkDataSetAttributes *temp0 = NULL;
  vtkIdType temp1 = 0;
  vtkIdType temp2 = 1000;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1, 3) &&
      ap.GetVTKObject(temp0, "vtkDataSetAttributes") &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)) &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)))
    {
    if (ap.IsBound())
      {
      op->InterpolateAllocate(temp0, temp1, temp2);
      }
    else
      {
      op->vtkDataSetAttributes::InterpolateAllocate(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkDataSetAttributes_InterpolateAllocate_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InterpolateAllocate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetAttributes *op = static_cast<vtkDataSetAttributes *>(vp);

  vtkDataSetAttributes *temp0 = NULL;
  vtkIdType temp1;
  vtkIdType temp2;
  int temp3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(4) &&
      ap.GetVTKObject(temp0, "vtkDataSetAttributes") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
    {
    if (ap.IsBound())
      {
      op->InterpolateAllocate(temp0, temp1, temp2, temp3);
      }
    else
      {
      op->vtkDataSetAttributes::InterpolateAllocate(temp0, temp1, temp2, temp3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkDataSetAttributes_InterpolateAllocate(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
    case 2:
    case 3:
      return PyvtkDataSetAttributes_InterpolateAllocate_s1(self, args);
    case 4:
      return PyvtkDataSetAttributes_InterpolateAllocate_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "InterpolateAllocate");
  return NULL;
}



static PyObject *
PyvtkDataSetAttributes_InterpolatePoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InterpolatePoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetAttributes *op = static_cast<vtkDataSetAttributes *>(vp);

  vtkDataSetAttributes *temp0 = NULL;
  vtkIdType temp1;
  vtkIdList *temp2 = NULL;
  double *temp3 = NULL;
  double *save3 = NULL;
  double small3[8];
  int size3 = 0;
  PyObject *result = NULL;

  if (op)
    {
    size3 = ap.GetArgSize(3);
    temp3 = small3;
    if (size3 > 4)
      {
      temp3 = new double[2*size3];
      }
    save3 = &temp3[size3];
    }

  if (op && ap.CheckArgCount(4) &&
      ap.GetVTKObject(temp0, "vtkDataSetAttributes") &&
      ap.GetValue(temp1) &&
      ap.GetVTKObject(temp2, "vtkIdList") &&
      ap.GetArray(temp3, size3))
    {
    ap.SaveArray(temp3, save3, size3);

    if (ap.IsBound())
      {
      op->InterpolatePoint(temp0, temp1, temp2, temp3);
      }
    else
      {
      op->vtkDataSetAttributes::InterpolatePoint(temp0, temp1, temp2, temp3);
      }

    if (ap.ArrayHasChanged(temp3, save3, size3) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(3, temp3, size3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  if (temp3 && temp3 != small3)
    {
    delete [] temp3;
    }

  return result;
}


static PyObject *
PyvtkDataSetAttributes_InterpolateEdge(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InterpolateEdge");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetAttributes *op = static_cast<vtkDataSetAttributes *>(vp);

  vtkDataSetAttributes *temp0 = NULL;
  vtkIdType temp1;
  vtkIdType temp2;
  vtkIdType temp3;
  double temp4;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(5) &&
      ap.GetVTKObject(temp0, "vtkDataSetAttributes") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4))
    {
    if (ap.IsBound())
      {
      op->InterpolateEdge(temp0, temp1, temp2, temp3, temp4);
      }
    else
      {
      op->vtkDataSetAttributes::InterpolateEdge(temp0, temp1, temp2, temp3, temp4);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataSetAttributes_InterpolateTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InterpolateTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetAttributes *op = static_cast<vtkDataSetAttributes *>(vp);

  vtkDataSetAttributes *temp0 = NULL;
  vtkDataSetAttributes *temp1 = NULL;
  vtkIdType temp2;
  double temp3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(4) &&
      ap.GetVTKObject(temp0, "vtkDataSetAttributes") &&
      ap.GetVTKObject(temp1, "vtkDataSetAttributes") &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
    {
    if (ap.IsBound())
      {
      op->InterpolateTime(temp0, temp1, temp2, temp3);
      }
    else
      {
      op->vtkDataSetAttributes::InterpolateTime(temp0, temp1, temp2, temp3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkDataSetAttributes_Methods[] = {
  {(char*)"GetClassName", PyvtkDataSetAttributes_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkDataSetAttributes_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkDataSetAttributes_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkDataSetAttributes\nC++: vtkDataSetAttributes *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkDataSetAttributes_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkDataSetAttributes\nC++: vtkDataSetAttributes *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"Initialize", PyvtkDataSetAttributes_Initialize, METH_VARARGS,
   (char*)"V.Initialize()\nC++: virtual void Initialize()\n\nInitialize all of the object's data to NULL Also, clear the copy\nflags.\n"},
  {(char*)"Update", PyvtkDataSetAttributes_Update, METH_VARARGS,
   (char*)"V.Update()\nC++: virtual void Update()\n\nAttributes have a chance to bring themselves up to date; right\nnow this is ignored.\n"},
  {(char*)"DeepCopy", PyvtkDataSetAttributes_DeepCopy, METH_VARARGS,
   (char*)"V.DeepCopy(vtkFieldData)\nC++: virtual void DeepCopy(vtkFieldData *pd)\n\nDeep copy of data (i.e., create new data arrays and copy from\ninput data). Ignores the copy flags but preserves them in the\noutput.\n"},
  {(char*)"ShallowCopy", PyvtkDataSetAttributes_ShallowCopy, METH_VARARGS,
   (char*)"V.ShallowCopy(vtkFieldData)\nC++: virtual void ShallowCopy(vtkFieldData *pd)\n\nShallow copy of data (i.e., use reference counting). Ignores the\ncopy flags but preserves them in the output.\n"},
  {(char*)"SetScalars", PyvtkDataSetAttributes_SetScalars, METH_VARARGS,
   (char*)"V.SetScalars(vtkDataArray) -> int\nC++: int SetScalars(vtkDataArray *da)\n\nSet/Get the scalar data.\n"},
  {(char*)"SetActiveScalars", PyvtkDataSetAttributes_SetActiveScalars, METH_VARARGS,
   (char*)"V.SetActiveScalars(string) -> int\nC++: int SetActiveScalars(const char *name)\n\nSet/Get the scalar data.\n"},
  {(char*)"GetScalars", PyvtkDataSetAttributes_GetScalars, METH_VARARGS,
   (char*)"V.GetScalars() -> vtkDataArray\nC++: vtkDataArray *GetScalars()\nV.GetScalars(string) -> vtkDataArray\nC++: vtkDataArray *GetScalars(const char *name)\n\nSet/Get the scalar data.\n"},
  {(char*)"SetVectors", PyvtkDataSetAttributes_SetVectors, METH_VARARGS,
   (char*)"V.SetVectors(vtkDataArray) -> int\nC++: int SetVectors(vtkDataArray *da)\n\nSet/Get the vector data.\n"},
  {(char*)"SetActiveVectors", PyvtkDataSetAttributes_SetActiveVectors, METH_VARARGS,
   (char*)"V.SetActiveVectors(string) -> int\nC++: int SetActiveVectors(const char *name)\n\nSet/Get the vector data.\n"},
  {(char*)"GetVectors", PyvtkDataSetAttributes_GetVectors, METH_VARARGS,
   (char*)"V.GetVectors() -> vtkDataArray\nC++: vtkDataArray *GetVectors()\nV.GetVectors(string) -> vtkDataArray\nC++: vtkDataArray *GetVectors(const char *name)\n\nSet/Get the vector data.\n"},
  {(char*)"SetNormals", PyvtkDataSetAttributes_SetNormals, METH_VARARGS,
   (char*)"V.SetNormals(vtkDataArray) -> int\nC++: int SetNormals(vtkDataArray *da)\n\nSet/get the normal data.\n"},
  {(char*)"SetActiveNormals", PyvtkDataSetAttributes_SetActiveNormals, METH_VARARGS,
   (char*)"V.SetActiveNormals(string) -> int\nC++: int SetActiveNormals(const char *name)\n\nSet/get the normal data.\n"},
  {(char*)"GetNormals", PyvtkDataSetAttributes_GetNormals, METH_VARARGS,
   (char*)"V.GetNormals() -> vtkDataArray\nC++: vtkDataArray *GetNormals()\nV.GetNormals(string) -> vtkDataArray\nC++: vtkDataArray *GetNormals(const char *name)\n\nSet/get the normal data.\n"},
  {(char*)"SetTCoords", PyvtkDataSetAttributes_SetTCoords, METH_VARARGS,
   (char*)"V.SetTCoords(vtkDataArray) -> int\nC++: int SetTCoords(vtkDataArray *da)\n\nSet/Get the texture coordinate data.\n"},
  {(char*)"SetActiveTCoords", PyvtkDataSetAttributes_SetActiveTCoords, METH_VARARGS,
   (char*)"V.SetActiveTCoords(string) -> int\nC++: int SetActiveTCoords(const char *name)\n\nSet/Get the texture coordinate data.\n"},
  {(char*)"GetTCoords", PyvtkDataSetAttributes_GetTCoords, METH_VARARGS,
   (char*)"V.GetTCoords() -> vtkDataArray\nC++: vtkDataArray *GetTCoords()\nV.GetTCoords(string) -> vtkDataArray\nC++: vtkDataArray *GetTCoords(const char *name)\n\nSet/Get the texture coordinate data.\n"},
  {(char*)"SetTensors", PyvtkDataSetAttributes_SetTensors, METH_VARARGS,
   (char*)"V.SetTensors(vtkDataArray) -> int\nC++: int SetTensors(vtkDataArray *da)\n\nSet/Get the tensor data.\n"},
  {(char*)"SetActiveTensors", PyvtkDataSetAttributes_SetActiveTensors, METH_VARARGS,
   (char*)"V.SetActiveTensors(string) -> int\nC++: int SetActiveTensors(const char *name)\n\nSet/Get the tensor data.\n"},
  {(char*)"GetTensors", PyvtkDataSetAttributes_GetTensors, METH_VARARGS,
   (char*)"V.GetTensors() -> vtkDataArray\nC++: vtkDataArray *GetTensors()\nV.GetTensors(string) -> vtkDataArray\nC++: vtkDataArray *GetTensors(const char *name)\n\nSet/Get the tensor data.\n"},
  {(char*)"SetGlobalIds", PyvtkDataSetAttributes_SetGlobalIds, METH_VARARGS,
   (char*)"V.SetGlobalIds(vtkDataArray) -> int\nC++: int SetGlobalIds(vtkDataArray *da)\n\nSet/Get the global id data.\n"},
  {(char*)"SetActiveGlobalIds", PyvtkDataSetAttributes_SetActiveGlobalIds, METH_VARARGS,
   (char*)"V.SetActiveGlobalIds(string) -> int\nC++: int SetActiveGlobalIds(const char *name)\n\nSet/Get the global id data.\n"},
  {(char*)"GetGlobalIds", PyvtkDataSetAttributes_GetGlobalIds, METH_VARARGS,
   (char*)"V.GetGlobalIds() -> vtkDataArray\nC++: vtkDataArray *GetGlobalIds()\nV.GetGlobalIds(string) -> vtkDataArray\nC++: vtkDataArray *GetGlobalIds(const char *name)\n\nSet/Get the global id data.\n"},
  {(char*)"SetPedigreeIds", PyvtkDataSetAttributes_SetPedigreeIds, METH_VARARGS,
   (char*)"V.SetPedigreeIds(vtkAbstractArray) -> int\nC++: int SetPedigreeIds(vtkAbstractArray *da)\n\nSet/Get the pedigree id data.\n"},
  {(char*)"SetActivePedigreeIds", PyvtkDataSetAttributes_SetActivePedigreeIds, METH_VARARGS,
   (char*)"V.SetActivePedigreeIds(string) -> int\nC++: int SetActivePedigreeIds(const char *name)\n\nSet/Get the pedigree id data.\n"},
  {(char*)"GetPedigreeIds", PyvtkDataSetAttributes_GetPedigreeIds, METH_VARARGS,
   (char*)"V.GetPedigreeIds() -> vtkAbstractArray\nC++: vtkAbstractArray *GetPedigreeIds()\nV.GetPedigreeIds(string) -> vtkAbstractArray\nC++: vtkAbstractArray *GetPedigreeIds(const char *name)\n\nSet/Get the pedigree id data.\n"},
  {(char*)"SetActiveAttribute", PyvtkDataSetAttributes_SetActiveAttribute, METH_VARARGS,
   (char*)"V.SetActiveAttribute(string, int) -> int\nC++: int SetActiveAttribute(const char *name, int attributeType)\nV.SetActiveAttribute(int, int) -> int\nC++: int SetActiveAttribute(int index, int attributeType)\n\nMake the array with the given name the active attribute.\nAttribute types are:\n vtkDataSetAttributes::SCALARS = 0\n vtkDataSetAttributes::VECTORS = 1\n vtkDataSetAttributes::NORMALS = 2\n vtkDataSetAttributes::TCOORDS = 3\n vtkDataSetAttributes::TENSORS = 4\n vtkDataSetAttributes::GLOBALIDS = 5\n vtkDataSetAttributes::PEDIGREEIDS = 6\n vtkDataSetAttributes::EDGEFLAG = 7 Returns the index of the\narray if successful, -1 if the array is not in the list of\narrays.\n"},
  {(char*)"GetAttributeIndices", PyvtkDataSetAttributes_GetAttributeIndices, METH_VARARGS,
   (char*)"V.GetAttributeIndices([int, ...])\nC++: void GetAttributeIndices(int *indexArray)\n\nGet the field data array indices corresponding to scalars,\nvectors, tensors, etc.\n"},
  {(char*)"IsArrayAnAttribute", PyvtkDataSetAttributes_IsArrayAnAttribute, METH_VARARGS,
   (char*)"V.IsArrayAnAttribute(int) -> int\nC++: int IsArrayAnAttribute(int idx)\n\nDetermine whether a data array of index idx is considered a data\nset attribute (i.e., scalar, vector, tensor, etc). Return\nless-than zero if it is, otherwise an index 0<=idx<NUM_ATTRIBUTES\nto indicate which attribute.\n"},
  {(char*)"SetAttribute", PyvtkDataSetAttributes_SetAttribute, METH_VARARGS,
   (char*)"V.SetAttribute(vtkAbstractArray, int) -> int\nC++: int SetAttribute(vtkAbstractArray *aa, int attributeType)\n\nSet an array to use as the given attribute type (i.e.,\nvtkDataSetAttributes::SCALAR, vtkDataSetAttributes::VECTOR,\nvtkDataSetAttributes::TENSOR, etc.). If this attribute was\npreviously set to another array, that array is removed from the\nvtkDataSetAttributes object and the array aa is used as the\nattribute.\n\nReturns the index of aa within the vtkDataSetAttributes object\n(i.e., the index to pass to the method GetArray(int) to obtain\naa) if the attribute was set to aa successfully. If aa was\nalready set as the given attributeType, returns the index of aa.\n\nReturns -1 in the following cases:\n\n- aa is NULL (used to unset an attribute; not an error indicator)\n- aa is not a subclass of vtkDataArray, unless the attributeType\n  is vtkDataSetAttributes::PEDIGREEIDS (error indicator)\n- aa has a number of components incompatible with the attribute\n  type (error indicator)\n"},
  {(char*)"GetAttribute", PyvtkDataSetAttributes_GetAttribute, METH_VARARGS,
   (char*)"V.GetAttribute(int) -> vtkDataArray\nC++: vtkDataArray *GetAttribute(int attributeType)\n\nReturn an attribute given the attribute type (see\nvtkDataSetAttributes::AttributeTypes). Some attributes (such as\nPEDIGREEIDS) may not be vtkDataArray subclass, so in that case\nuse GetAbstractAttribute().\n"},
  {(char*)"GetAbstractAttribute", PyvtkDataSetAttributes_GetAbstractAttribute, METH_VARARGS,
   (char*)"V.GetAbstractAttribute(int) -> vtkAbstractArray\nC++: vtkAbstractArray *GetAbstractAttribute(int attributeType)\n\nReturn an attribute given the attribute type (see\nvtkDataSetAttributes::AttributeTypes). This is the same as\nGetAttribute(), except that the returned array is a\nvtkAbstractArray instead of vtkDataArray. Some attributes (such\nas PEDIGREEIDS) may not be vtkDataArray subclass.\n"},
  {(char*)"RemoveArray", PyvtkDataSetAttributes_RemoveArray, METH_VARARGS,
   (char*)"V.RemoveArray(string)\nC++: virtual void RemoveArray(const char *name)\nV.RemoveArray(int)\nC++: virtual void RemoveArray(int index)\n\nRemove an array (with the given name) from the list of arrays.\n"},
  {(char*)"GetAttributeTypeAsString", PyvtkDataSetAttributes_GetAttributeTypeAsString, METH_VARARGS | METH_STATIC,
   (char*)"V.GetAttributeTypeAsString(int) -> string\nC++: static const char *GetAttributeTypeAsString(\n    int attributeType)\n\nGiven an integer attribute type, this static method returns a\nstring type for the attribute (i.e. type = 0: returns \"Scalars\").\n"},
  {(char*)"GetLongAttributeTypeAsString", PyvtkDataSetAttributes_GetLongAttributeTypeAsString, METH_VARARGS | METH_STATIC,
   (char*)"V.GetLongAttributeTypeAsString(int) -> string\nC++: static const char *GetLongAttributeTypeAsString(\n    int attributeType)\n\nGiven an integer attribute type, this static method returns a\nstring type for the attribute (i.e. type = 0: returns \"Scalars\").\n"},
  {(char*)"SetCopyAttribute", PyvtkDataSetAttributes_SetCopyAttribute, METH_VARARGS,
   (char*)"V.SetCopyAttribute(int, int, int)\nC++: void SetCopyAttribute(int index, int value,\n    int ctype=vtkDataSetAttributes::ALLCOPY)\n\nSpecify whether to copy the data attribute referred to by index.\nctype selects from the AttributeCopyOperations. If ctype is set\nto ALLCOPY, then COPYTUPLE, INTERPOLATE, and PASSDATA are set to\nvalue. If value is 0, copying is disallowed. otherwise it is\nallowed.\n"},
  {(char*)"SetCopyScalars", PyvtkDataSetAttributes_SetCopyScalars, METH_VARARGS,
   (char*)"V.SetCopyScalars(int, int)\nC++: void SetCopyScalars(int i,\n    int ctype=vtkDataSetAttributes::ALLCOPY)\n\nTurn on/off the copying of scalar data. ctype is one of the\nAttributeCopyOperations, and controls copy, interpolate and\npassdata behavior. For set, ctype=ALLCOPY means set all three\nflags to the same value. For get, ctype=ALLCOPY returns true only\nif all three flags are true.\n\nDuring copying, interpolation and passdata, the following rules\nare followed for each array:\n1. If the copy/interpolate/pass flag for an attribute is set (on\n   or off), it is applied. This overrides rules 2 and 3.\n2. If the copy flag for an array is set (on or off), it is\n   applied This overrides rule 3.\n3. If CopyAllOn is set, copy the array. If CopyAllOff is set, do\n   not copy the array\n"},
  {(char*)"GetCopyScalars", PyvtkDataSetAttributes_GetCopyScalars, METH_VARARGS,
   (char*)"V.GetCopyScalars(int) -> int\nC++: int GetCopyScalars(int ctype=vtkDataSetAttributes::ALLCOPY)\n\nTurn on/off the copying of scalar data. ctype is one of the\nAttributeCopyOperations, and controls copy, interpolate and\npassdata behavior. For set, ctype=ALLCOPY means set all three\nflags to the same value. For get, ctype=ALLCOPY returns true only\nif all three flags are true.\n\nDuring copying, interpolation and passdata, the following rules\nare followed for each array:\n1. If the copy/interpolate/pass flag for an attribute is set (on\n   or off), it is applied. This overrides rules 2 and 3.\n2. If the copy flag for an array is set (on or off), it is\n   applied This overrides rule 3.\n3. If CopyAllOn is set, copy the array. If CopyAllOff is set, do\n   not copy the array\n"},
  {(char*)"CopyScalarsOn", PyvtkDataSetAttributes_CopyScalarsOn, METH_VARARGS,
   (char*)"V.CopyScalarsOn()\nC++: void CopyScalarsOn()\n\nTurn on/off the copying of scalar data. ctype is one of the\nAttributeCopyOperations, and controls copy, interpolate and\npassdata behavior. For set, ctype=ALLCOPY means set all three\nflags to the same value. For get, ctype=ALLCOPY returns true only\nif all three flags are true.\n\nDuring copying, interpolation and passdata, the following rules\nare followed for each array:\n1. If the copy/interpolate/pass flag for an attribute is set (on\n   or off), it is applied. This overrides rules 2 and 3.\n2. If the copy flag for an array is set (on or off), it is\n   applied This overrides rule 3.\n3. If CopyAllOn is set, copy the array. If CopyAllOff is set, do\n   not copy the array\n"},
  {(char*)"CopyScalarsOff", PyvtkDataSetAttributes_CopyScalarsOff, METH_VARARGS,
   (char*)"V.CopyScalarsOff()\nC++: void CopyScalarsOff()\n\nTurn on/off the copying of scalar data. ctype is one of the\nAttributeCopyOperations, and controls copy, interpolate and\npassdata behavior. For set, ctype=ALLCOPY means set all three\nflags to the same value. For get, ctype=ALLCOPY returns true only\nif all three flags are true.\n\nDuring copying, interpolation and passdata, the following rules\nare followed for each array:\n1. If the copy/interpolate/pass flag for an attribute is set (on\n   or off), it is applied. This overrides rules 2 and 3.\n2. If the copy flag for an array is set (on or off), it is\n   applied This overrides rule 3.\n3. If CopyAllOn is set, copy the array. If CopyAllOff is set, do\n   not copy the array\n"},
  {(char*)"SetCopyVectors", PyvtkDataSetAttributes_SetCopyVectors, METH_VARARGS,
   (char*)"V.SetCopyVectors(int, int)\nC++: void SetCopyVectors(int i,\n    int ctype=vtkDataSetAttributes::ALLCOPY)\n\nTurn on/off the copying of vector data. ctype is one of the\nAttributeCopyOperations, and controls copy, interpolate and\npassdata behavior. For set, ctype=ALLCOPY means set all three\nflags to the same value. For get, ctype=ALLCOPY returns true only\nif all three flags are true.\n\nDuring copying, interpolation and passdata, the following rules\nare followed for each array:\n1. If the copy/interpolate/pass flag for an attribute is set (on\n   or off), it is applied. This overrides rules 2 and 3.\n2. If the copy flag for an array is set (on or off), it is\n   applied This overrides rule 3.\n3. If CopyAllOn is set, copy the array. If CopyAllOff is set, do\n   not copy the array\n"},
  {(char*)"GetCopyVectors", PyvtkDataSetAttributes_GetCopyVectors, METH_VARARGS,
   (char*)"V.GetCopyVectors(int) -> int\nC++: int GetCopyVectors(int ctype=vtkDataSetAttributes::ALLCOPY)\n\nTurn on/off the copying of vector data. ctype is one of the\nAttributeCopyOperations, and controls copy, interpolate and\npassdata behavior. For set, ctype=ALLCOPY means set all three\nflags to the same value. For get, ctype=ALLCOPY returns true only\nif all three flags are true.\n\nDuring copying, interpolation and passdata, the following rules\nare followed for each array:\n1. If the copy/interpolate/pass flag for an attribute is set (on\n   or off), it is applied. This overrides rules 2 and 3.\n2. If the copy flag for an array is set (on or off), it is\n   applied This overrides rule 3.\n3. If CopyAllOn is set, copy the array. If CopyAllOff is set, do\n   not copy the array\n"},
  {(char*)"CopyVectorsOn", PyvtkDataSetAttributes_CopyVectorsOn, METH_VARARGS,
   (char*)"V.CopyVectorsOn()\nC++: void CopyVectorsOn()\n\nTurn on/off the copying of vector data. ctype is one of the\nAttributeCopyOperations, and controls copy, interpolate and\npassdata behavior. For set, ctype=ALLCOPY means set all three\nflags to the same value. For get, ctype=ALLCOPY returns true only\nif all three flags are true.\n\nDuring copying, interpolation and passdata, the following rules\nare followed for each array:\n1. If the copy/interpolate/pass flag for an attribute is set (on\n   or off), it is applied. This overrides rules 2 and 3.\n2. If the copy flag for an array is set (on or off), it is\n   applied This overrides rule 3.\n3. If CopyAllOn is set, copy the array. If CopyAllOff is set, do\n   not copy the array\n"},
  {(char*)"CopyVectorsOff", PyvtkDataSetAttributes_CopyVectorsOff, METH_VARARGS,
   (char*)"V.CopyVectorsOff()\nC++: void CopyVectorsOff()\n\nTurn on/off the copying of vector data. ctype is one of the\nAttributeCopyOperations, and controls copy, interpolate and\npassdata behavior. For set, ctype=ALLCOPY means set all three\nflags to the same value. For get, ctype=ALLCOPY returns true only\nif all three flags are true.\n\nDuring copying, interpolation and passdata, the following rules\nare followed for each array:\n1. If the copy/interpolate/pass flag for an attribute is set (on\n   or off), it is applied. This overrides rules 2 and 3.\n2. If the copy flag for an array is set (on or off), it is\n   applied This overrides rule 3.\n3. If CopyAllOn is set, copy the array. If CopyAllOff is set, do\n   not copy the array\n"},
  {(char*)"SetCopyNormals", PyvtkDataSetAttributes_SetCopyNormals, METH_VARARGS,
   (char*)"V.SetCopyNormals(int, int)\nC++: void SetCopyNormals(int i,\n    int ctype=vtkDataSetAttributes::ALLCOPY)\n\nTurn on/off the copying of normals data. ctype is one of the\nAttributeCopyOperations, and controls copy, interpolate and\npassdata behavior. For set, ctype=ALLCOPY means set all three\nflags to the same value. For get, ctype=ALLCOPY returns true only\nif all three flags are true.\n\nDuring copying, interpolation and passdata, the following rules\nare followed for each array:\n1. If the copy/interpolate/pass flag for an attribute is set (on\n   or off), it is applied. This overrides rules 2 and 3.\n2. If the copy flag for an array is set (on or off), it is\n   applied This overrides rule 3.\n3. If CopyAllOn is set, copy the array. If CopyAllOff is set, do\n   not copy the array\n"},
  {(char*)"GetCopyNormals", PyvtkDataSetAttributes_GetCopyNormals, METH_VARARGS,
   (char*)"V.GetCopyNormals(int) -> int\nC++: int GetCopyNormals(int ctype=vtkDataSetAttributes::ALLCOPY)\n\nTurn on/off the copying of normals data. ctype is one of the\nAttributeCopyOperations, and controls copy, interpolate and\npassdata behavior. For set, ctype=ALLCOPY means set all three\nflags to the same value. For get, ctype=ALLCOPY returns true only\nif all three flags are true.\n\nDuring copying, interpolation and passdata, the following rules\nare followed for each array:\n1. If the copy/interpolate/pass flag for an attribute is set (on\n   or off), it is applied. This overrides rules 2 and 3.\n2. If the copy flag for an array is set (on or off), it is\n   applied This overrides rule 3.\n3. If CopyAllOn is set, copy the array. If CopyAllOff is set, do\n   not copy the array\n"},
  {(char*)"CopyNormalsOn", PyvtkDataSetAttributes_CopyNormalsOn, METH_VARARGS,
   (char*)"V.CopyNormalsOn()\nC++: void CopyNormalsOn()\n\nTurn on/off the copying of normals data. ctype is one of the\nAttributeCopyOperations, and controls copy, interpolate and\npassdata behavior. For set, ctype=ALLCOPY means set all three\nflags to the same value. For get, ctype=ALLCOPY returns true only\nif all three flags are true.\n\nDuring copying, interpolation and passdata, the following rules\nare followed for each array:\n1. If the copy/interpolate/pass flag for an attribute is set (on\n   or off), it is applied. This overrides rules 2 and 3.\n2. If the copy flag for an array is set (on or off), it is\n   applied This overrides rule 3.\n3. If CopyAllOn is set, copy the array. If CopyAllOff is set, do\n   not copy the array\n"},
  {(char*)"CopyNormalsOff", PyvtkDataSetAttributes_CopyNormalsOff, METH_VARARGS,
   (char*)"V.CopyNormalsOff()\nC++: void CopyNormalsOff()\n\nTurn on/off the copying of normals data. ctype is one of the\nAttributeCopyOperations, and controls copy, interpolate and\npassdata behavior. For set, ctype=ALLCOPY means set all three\nflags to the same value. For get, ctype=ALLCOPY returns true only\nif all three flags are true.\n\nDuring copying, interpolation and passdata, the following rules\nare followed for each array:\n1. If the copy/interpolate/pass flag for an attribute is set (on\n   or off), it is applied. This overrides rules 2 and 3.\n2. If the copy flag for an array is set (on or off), it is\n   applied This overrides rule 3.\n3. If CopyAllOn is set, copy the array. If CopyAllOff is set, do\n   not copy the array\n"},
  {(char*)"SetCopyTCoords", PyvtkDataSetAttributes_SetCopyTCoords, METH_VARARGS,
   (char*)"V.SetCopyTCoords(int, int)\nC++: void SetCopyTCoords(int i,\n    int ctype=vtkDataSetAttributes::ALLCOPY)\n\nTurn on/off the copying of texture coordinates data. ctype is one\nof the AttributeCopyOperations, and controls copy, interpolate\nand passdata behavior. For set, ctype=ALLCOPY means set all three\nflags to the same value. For get, ctype=ALLCOPY returns true only\nif all three flags are true.\n\nDuring copying, interpolation and passdata, the following rules\nare followed for each array:\n1. If the copy/interpolate/pass flag for an attribute is set (on\n   or off), it is applied. This overrides rules 2 and 3.\n2. If the copy flag for an array is set (on or off), it is\n   applied This overrides rule 3.\n3. If CopyAllOn is set, copy the array. If CopyAllOff is set, do\n   not copy the array\n"},
  {(char*)"GetCopyTCoords", PyvtkDataSetAttributes_GetCopyTCoords, METH_VARARGS,
   (char*)"V.GetCopyTCoords(int) -> int\nC++: int GetCopyTCoords(int ctype=vtkDataSetAttributes::ALLCOPY)\n\nTurn on/off the copying of texture coordinates data. ctype is one\nof the AttributeCopyOperations, and controls copy, interpolate\nand passdata behavior. For set, ctype=ALLCOPY means set all three\nflags to the same value. For get, ctype=ALLCOPY returns true only\nif all three flags are true.\n\nDuring copying, interpolation and passdata, the following rules\nare followed for each array:\n1. If the copy/interpolate/pass flag for an attribute is set (on\n   or off), it is applied. This overrides rules 2 and 3.\n2. If the copy flag for an array is set (on or off), it is\n   applied This overrides rule 3.\n3. If CopyAllOn is set, copy the array. If CopyAllOff is set, do\n   not copy the array\n"},
  {(char*)"CopyTCoordsOn", PyvtkDataSetAttributes_CopyTCoordsOn, METH_VARARGS,
   (char*)"V.CopyTCoordsOn()\nC++: void CopyTCoordsOn()\n\nTurn on/off the copying of texture coordinates data. ctype is one\nof the AttributeCopyOperations, and controls copy, interpolate\nand passdata behavior. For set, ctype=ALLCOPY means set all three\nflags to the same value. For get, ctype=ALLCOPY returns true only\nif all three flags are true.\n\nDuring copying, interpolation and passdata, the following rules\nare followed for each array:\n1. If the copy/interpolate/pass flag for an attribute is set (on\n   or off), it is applied. This overrides rules 2 and 3.\n2. If the copy flag for an array is set (on or off), it is\n   applied This overrides rule 3.\n3. If CopyAllOn is set, copy the array. If CopyAllOff is set, do\n   not copy the array\n"},
  {(char*)"CopyTCoordsOff", PyvtkDataSetAttributes_CopyTCoordsOff, METH_VARARGS,
   (char*)"V.CopyTCoordsOff()\nC++: void CopyTCoordsOff()\n\nTurn on/off the copying of texture coordinates data. ctype is one\nof the AttributeCopyOperations, and controls copy, interpolate\nand passdata behavior. For set, ctype=ALLCOPY means set all three\nflags to the same value. For get, ctype=ALLCOPY returns true only\nif all three flags are true.\n\nDuring copying, interpolation and passdata, the following rules\nare followed for each array:\n1. If the copy/interpolate/pass flag for an attribute is set (on\n   or off), it is applied. This overrides rules 2 and 3.\n2. If the copy flag for an array is set (on or off), it is\n   applied This overrides rule 3.\n3. If CopyAllOn is set, copy the array. If CopyAllOff is set, do\n   not copy the array\n"},
  {(char*)"SetCopyTensors", PyvtkDataSetAttributes_SetCopyTensors, METH_VARARGS,
   (char*)"V.SetCopyTensors(int, int)\nC++: void SetCopyTensors(int i,\n    int ctype=vtkDataSetAttributes::ALLCOPY)\n\nTurn on/off the copying of tensor data. ctype is one of the\nAttributeCopyOperations, and controls copy, interpolate and\npassdata behavior. For set, ctype=ALLCOPY means set all three\nflags to the same value. For get, ctype=ALLCOPY returns true only\nif all three flags are true.\n\nDuring copying, interpolation and passdata, the following rules\nare followed for each array:\n1. If the copy/interpolate/pass flag for an attribute is set (on\n   or off), it is applied. This overrides rules 2 and 3.\n2. If the copy flag for an array is set (on or off), it is\n   applied This overrides rule 3.\n3. If CopyAllOn is set, copy the array. If CopyAllOff is set, do\n   not copy the array\n"},
  {(char*)"GetCopyTensors", PyvtkDataSetAttributes_GetCopyTensors, METH_VARARGS,
   (char*)"V.GetCopyTensors(int) -> int\nC++: int GetCopyTensors(int ctype=vtkDataSetAttributes::ALLCOPY)\n\nTurn on/off the copying of tensor data. ctype is one of the\nAttributeCopyOperations, and controls copy, interpolate and\npassdata behavior. For set, ctype=ALLCOPY means set all three\nflags to the same value. For get, ctype=ALLCOPY returns true only\nif all three flags are true.\n\nDuring copying, interpolation and passdata, the following rules\nare followed for each array:\n1. If the copy/interpolate/pass flag for an attribute is set (on\n   or off), it is applied. This overrides rules 2 and 3.\n2. If the copy flag for an array is set (on or off), it is\n   applied This overrides rule 3.\n3. If CopyAllOn is set, copy the array. If CopyAllOff is set, do\n   not copy the array\n"},
  {(char*)"CopyTensorsOn", PyvtkDataSetAttributes_CopyTensorsOn, METH_VARARGS,
   (char*)"V.CopyTensorsOn()\nC++: void CopyTensorsOn()\n\nTurn on/off the copying of tensor data. ctype is one of the\nAttributeCopyOperations, and controls copy, interpolate and\npassdata behavior. For set, ctype=ALLCOPY means set all three\nflags to the same value. For get, ctype=ALLCOPY returns true only\nif all three flags are true.\n\nDuring copying, interpolation and passdata, the following rules\nare followed for each array:\n1. If the copy/interpolate/pass flag for an attribute is set (on\n   or off), it is applied. This overrides rules 2 and 3.\n2. If the copy flag for an array is set (on or off), it is\n   applied This overrides rule 3.\n3. If CopyAllOn is set, copy the array. If CopyAllOff is set, do\n   not copy the array\n"},
  {(char*)"CopyTensorsOff", PyvtkDataSetAttributes_CopyTensorsOff, METH_VARARGS,
   (char*)"V.CopyTensorsOff()\nC++: void CopyTensorsOff()\n\nTurn on/off the copying of tensor data. ctype is one of the\nAttributeCopyOperations, and controls copy, interpolate and\npassdata behavior. For set, ctype=ALLCOPY means set all three\nflags to the same value. For get, ctype=ALLCOPY returns true only\nif all three flags are true.\n\nDuring copying, interpolation and passdata, the following rules\nare followed for each array:\n1. If the copy/interpolate/pass flag for an attribute is set (on\n   or off), it is applied. This overrides rules 2 and 3.\n2. If the copy flag for an array is set (on or off), it is\n   applied This overrides rule 3.\n3. If CopyAllOn is set, copy the array. If CopyAllOff is set, do\n   not copy the array\n"},
  {(char*)"SetCopyGlobalIds", PyvtkDataSetAttributes_SetCopyGlobalIds, METH_VARARGS,
   (char*)"V.SetCopyGlobalIds(int, int)\nC++: void SetCopyGlobalIds(int i,\n    int ctype=vtkDataSetAttributes::ALLCOPY)\n\nTurn on/off the copying of global id data. ctype is one of the\nAttributeCopyOperations, and controls copy, interpolate and\npassdata behavior. For set, ctype=ALLCOPY means set all three\nflags to the same value. For get, ctype=ALLCOPY returns true only\nif all three flags are true.\n\nDuring copying, interpolation and passdata, the following rules\nare followed for each array:\n1. If the copy/interpolate/pass for an attribute is set (on or\n   off), it is applied. This overrides rules 2 and 3.\n2. If the copy flag for an array is set (on or off), it is\n   applied This overrides rule 3.\n3. If CopyAllOn is set, copy the array. If CopyAllOff is set, do\n   not copy the array\n"},
  {(char*)"GetCopyGlobalIds", PyvtkDataSetAttributes_GetCopyGlobalIds, METH_VARARGS,
   (char*)"V.GetCopyGlobalIds(int) -> int\nC++: int GetCopyGlobalIds(int ctype=vtkDataSetAttributes::ALLCOPY)\n\nTurn on/off the copying of global id data. ctype is one of the\nAttributeCopyOperations, and controls copy, interpolate and\npassdata behavior. For set, ctype=ALLCOPY means set all three\nflags to the same value. For get, ctype=ALLCOPY returns true only\nif all three flags are true.\n\nDuring copying, interpolation and passdata, the following rules\nare followed for each array:\n1. If the copy/interpolate/pass for an attribute is set (on or\n   off), it is applied. This overrides rules 2 and 3.\n2. If the copy flag for an array is set (on or off), it is\n   applied This overrides rule 3.\n3. If CopyAllOn is set, copy the array. If CopyAllOff is set, do\n   not copy the array\n"},
  {(char*)"CopyGlobalIdsOn", PyvtkDataSetAttributes_CopyGlobalIdsOn, METH_VARARGS,
   (char*)"V.CopyGlobalIdsOn()\nC++: void CopyGlobalIdsOn()\n\nTurn on/off the copying of global id data. ctype is one of the\nAttributeCopyOperations, and controls copy, interpolate and\npassdata behavior. For set, ctype=ALLCOPY means set all three\nflags to the same value. For get, ctype=ALLCOPY returns true only\nif all three flags are true.\n\nDuring copying, interpolation and passdata, the following rules\nare followed for each array:\n1. If the copy/interpolate/pass for an attribute is set (on or\n   off), it is applied. This overrides rules 2 and 3.\n2. If the copy flag for an array is set (on or off), it is\n   applied This overrides rule 3.\n3. If CopyAllOn is set, copy the array. If CopyAllOff is set, do\n   not copy the array\n"},
  {(char*)"CopyGlobalIdsOff", PyvtkDataSetAttributes_CopyGlobalIdsOff, METH_VARARGS,
   (char*)"V.CopyGlobalIdsOff()\nC++: void CopyGlobalIdsOff()\n\nTurn on/off the copying of global id data. ctype is one of the\nAttributeCopyOperations, and controls copy, interpolate and\npassdata behavior. For set, ctype=ALLCOPY means set all three\nflags to the same value. For get, ctype=ALLCOPY returns true only\nif all three flags are true.\n\nDuring copying, interpolation and passdata, the following rules\nare followed for each array:\n1. If the copy/interpolate/pass for an attribute is set (on or\n   off), it is applied. This overrides rules 2 and 3.\n2. If the copy flag for an array is set (on or off), it is\n   applied This overrides rule 3.\n3. If CopyAllOn is set, copy the array. If CopyAllOff is set, do\n   not copy the array\n"},
  {(char*)"SetCopyPedigreeIds", PyvtkDataSetAttributes_SetCopyPedigreeIds, METH_VARARGS,
   (char*)"V.SetCopyPedigreeIds(int, int)\nC++: void SetCopyPedigreeIds(int i,\n    int ctype=vtkDataSetAttributes::ALLCOPY)\n\nTurn on/off the copying of pedigree id data. ctype is one of the\nAttributeCopyOperations, and controls copy, interpolate and\npassdata behavior. For set, ctype=ALLCOPY means set all three\nflags to the same value. For get, ctype=ALLCOPY returns true only\nif all three flags are true.\n\nDuring copying, interpolation and passdata, the following rules\nare followed for each array:\n1. If the copy/interpolate/pass for an attribute is set (on or\n   off), it is applied. This overrides rules 2 and 3.\n2. If the copy flag for an array is set (on or off), it is\n   applied This overrides rule 3.\n3. If CopyAllOn is set, copy the array. If CopyAllOff is set, do\n   not copy the array\n"},
  {(char*)"GetCopyPedigreeIds", PyvtkDataSetAttributes_GetCopyPedigreeIds, METH_VARARGS,
   (char*)"V.GetCopyPedigreeIds(int) -> int\nC++: int GetCopyPedigreeIds(\n    int ctype=vtkDataSetAttributes::ALLCOPY)\n\nTurn on/off the copying of pedigree id data. ctype is one of the\nAttributeCopyOperations, and controls copy, interpolate and\npassdata behavior. For set, ctype=ALLCOPY means set all three\nflags to the same value. For get, ctype=ALLCOPY returns true only\nif all three flags are true.\n\nDuring copying, interpolation and passdata, the following rules\nare followed for each array:\n1. If the copy/interpolate/pass for an attribute is set (on or\n   off), it is applied. This overrides rules 2 and 3.\n2. If the copy flag for an array is set (on or off), it is\n   applied This overrides rule 3.\n3. If CopyAllOn is set, copy the array. If CopyAllOff is set, do\n   not copy the array\n"},
  {(char*)"CopyPedigreeIdsOn", PyvtkDataSetAttributes_CopyPedigreeIdsOn, METH_VARARGS,
   (char*)"V.CopyPedigreeIdsOn()\nC++: void CopyPedigreeIdsOn()\n\nTurn on/off the copying of pedigree id data. ctype is one of the\nAttributeCopyOperations, and controls copy, interpolate and\npassdata behavior. For set, ctype=ALLCOPY means set all three\nflags to the same value. For get, ctype=ALLCOPY returns true only\nif all three flags are true.\n\nDuring copying, interpolation and passdata, the following rules\nare followed for each array:\n1. If the copy/interpolate/pass for an attribute is set (on or\n   off), it is applied. This overrides rules 2 and 3.\n2. If the copy flag for an array is set (on or off), it is\n   applied This overrides rule 3.\n3. If CopyAllOn is set, copy the array. If CopyAllOff is set, do\n   not copy the array\n"},
  {(char*)"CopyPedigreeIdsOff", PyvtkDataSetAttributes_CopyPedigreeIdsOff, METH_VARARGS,
   (char*)"V.CopyPedigreeIdsOff()\nC++: void CopyPedigreeIdsOff()\n\nTurn on/off the copying of pedigree id data. ctype is one of the\nAttributeCopyOperations, and controls copy, interpolate and\npassdata behavior. For set, ctype=ALLCOPY means set all three\nflags to the same value. For get, ctype=ALLCOPY returns true only\nif all three flags are true.\n\nDuring copying, interpolation and passdata, the following rules\nare followed for each array:\n1. If the copy/interpolate/pass for an attribute is set (on or\n   off), it is applied. This overrides rules 2 and 3.\n2. If the copy flag for an array is set (on or off), it is\n   applied This overrides rule 3.\n3. If CopyAllOn is set, copy the array. If CopyAllOff is set, do\n   not copy the array\n"},
  {(char*)"CopyAllOn", PyvtkDataSetAttributes_CopyAllOn, METH_VARARGS,
   (char*)"V.CopyAllOn(int)\nC++: virtual void CopyAllOn(\n    int ctype=vtkDataSetAttributes::ALLCOPY)\n\nTurn on copying of all data. ctype is one of the\nAttributeCopyOperations, and controls copy, interpolate and\npassdata behavior. For set, ctype=ALLCOPY means set all three\nflags to the same value. For get, ctype=ALLCOPY returns true only\nif all three flags are true.\n\nDuring copying, interpolation and passdata, the following rules\nare followed for each array:\n1. If the copy/interpolate/pass flag for an attribute is set (on\n   or off), it is applied. This overrides rules 2 and 3.\n2. If the copy flag for an array is set (on or off), it is\n   applied This overrides rule 3.\n3. If CopyAllOn is set, copy the array. If CopyAllOff is set, do\n   not copy the array\n"},
  {(char*)"CopyAllOff", PyvtkDataSetAttributes_CopyAllOff, METH_VARARGS,
   (char*)"V.CopyAllOff(int)\nC++: virtual void CopyAllOff(\n    int ctype=vtkDataSetAttributes::ALLCOPY)\n\nTurn off copying of all data. ctype is one of the\nAttributeCopyOperations, and controls copy, interpolate and\npassdata behavior. For set, ctype=ALLCOPY means set all three\nflags to the same value. For get, ctype=ALLCOPY returns true only\nif all three flags are true.\n\nDuring copying, interpolation and passdata, the following rules\nare followed for each array:\n1. If the copy/interpolate/pass flag for an attribute is set (on\n   or off), it is applied. This overrides rules 2 and 3.\n2. If the copy flag for an array is set (on or off), it is\n   applied This overrides rule 3.\n3. If CopyAllOn is set, copy the array. If CopyAllOff is set, do\n   not copy the array\n"},
  {(char*)"PassData", PyvtkDataSetAttributes_PassData, METH_VARARGS,
   (char*)"V.PassData(vtkFieldData)\nC++: virtual void PassData(vtkFieldData *fd)\n\nPass entire arrays of input data through to output. Obey the\n\"copy\" flags. When passing a field,  the following copying rules\nare followed: 1) Check if a field is an attribute, if yes and if\nthere is a PASSDATA copy flag for that attribute (on or off),\nobey the flag for that attribute, ignore (2) and (3), 2) if there\nis a copy field for that field (on or off), obey the flag, ignore\n(3) 3) obey CopyAllOn/Off\n"},
  {(char*)"CopyAllocate", PyvtkDataSetAttributes_CopyAllocate, METH_VARARGS,
   (char*)"V.CopyAllocate(vtkDataSetAttributes, int, int)\nC++: void CopyAllocate(vtkDataSetAttributes *pd, vtkIdType sze=0,\n    vtkIdType ext=1000)\nV.CopyAllocate(vtkDataSetAttributes, int, int, int)\nC++: void CopyAllocate(vtkDataSetAttributes *pd, vtkIdType sze,\n    vtkIdType ext, int shallowCopyArrays)\n\nAllocates point data for point-by-point (or cell-by-cell) copy\noperation. If sze=0, then use the input DataSetAttributes to\ncreate (i.e., find initial size of) new objects; otherwise use\nthe sze variable. Note that pd HAS to be the vtkDataSetAttributes\nobject which will later be used with CopyData. If this is not the\ncase, consider using the alternative forms of CopyAllocate and\nCopyData. ext is no longer used. If shallowCopyArrays is true,\ninput arrays are copied to the output instead of new ones being\nallocated.\n"},
  {(char*)"CopyStructuredData", PyvtkDataSetAttributes_CopyStructuredData, METH_VARARGS,
   (char*)"V.CopyStructuredData(vtkDataSetAttributes, (int, ...), (int, ...))\nC++: void CopyStructuredData(vtkDataSetAttributes *inDsa,\n    const int *inExt, const int *outExt)\n\nThis method is used to copy data arrays in images. You should\ncall \"CopyAllocate\" before calling this method.\n"},
  {(char*)"CopyData", PyvtkDataSetAttributes_CopyData, METH_VARARGS,
   (char*)"V.CopyData(vtkDataSetAttributes, int, int)\nC++: void CopyData(vtkDataSetAttributes *fromPd, vtkIdType fromId,\n     vtkIdType toId)\nV.CopyData(vtkDataSetAttributes, vtkIdList, vtkIdList)\nC++: void CopyData(vtkDataSetAttributes *fromPd,\n    vtkIdList *fromIds, vtkIdList *toIds)\nV.CopyData(vtkDataSetAttributes, int, int, int)\nC++: void CopyData(vtkDataSetAttributes *fromPd,\n    vtkIdType dstStart, vtkIdType n, vtkIdType srcStart)\n\nCopy the attribute data from one id to another. Make sure\nCopyAllocate() has been invoked before using this method. When\ncopying a field, the following copying rules are followed: 1)\nCheck if a field is an attribute, if yes and if there is a\nCOPYTUPLE copy flag for that attribute (on or off), obey the \nflag for that attribute, ignore (2) and (3), 2) if there is a\ncopy field for that field (on or off), obey the flag, ignore (3)\n3) obey CopyAllOn/Off\n"},
  {(char*)"CopyTuple", PyvtkDataSetAttributes_CopyTuple, METH_VARARGS,
   (char*)"V.CopyTuple(vtkAbstractArray, vtkAbstractArray, int, int)\nC++: void CopyTuple(vtkAbstractArray *fromData,\n    vtkAbstractArray *toData, vtkIdType fromId, vtkIdType toId)\n\nCopy a tuple (or set of tuples) of data from one data array to\nanother. This method assumes that the fromData and toData objects\nare of the same type, and have the same number of components.\nThis is true if you invoke CopyAllocate() or\nInterpolateAllocate().\n"},
  {(char*)"CopyTuples", PyvtkDataSetAttributes_CopyTuples, METH_VARARGS,
   (char*)"V.CopyTuples(vtkAbstractArray, vtkAbstractArray, vtkIdList,\n    vtkIdList)\nC++: void CopyTuples(vtkAbstractArray *fromData,\n    vtkAbstractArray *toData, vtkIdList *fromIds,\n    vtkIdList *toIds)\nV.CopyTuples(vtkAbstractArray, vtkAbstractArray, int, int, int)\nC++: void CopyTuples(vtkAbstractArray *fromData,\n    vtkAbstractArray *toData, vtkIdType dstStart, vtkIdType n,\n    vtkIdType srcStart)\n\nCopy a tuple (or set of tuples) of data from one data array to\nanother. This method assumes that the fromData and toData objects\nare of the same type, and have the same number of components.\nThis is true if you invoke CopyAllocate() or\nInterpolateAllocate().\n"},
  {(char*)"InterpolateAllocate", PyvtkDataSetAttributes_InterpolateAllocate, METH_VARARGS,
   (char*)"V.InterpolateAllocate(vtkDataSetAttributes, int, int)\nC++: void InterpolateAllocate(vtkDataSetAttributes *pd,\n    vtkIdType sze=0, vtkIdType ext=1000)\nV.InterpolateAllocate(vtkDataSetAttributes, int, int, int)\nC++: void InterpolateAllocate(vtkDataSetAttributes *pd,\n    vtkIdType sze, vtkIdType ext, int shallowCopyArrays)\n\nInitialize point interpolation method. Note that pd HAS to be the\nvtkDataSetAttributes object which will later be used with\nInterpolatePoint or InterpolateEdge. ext is no longer used. If\nshallowCopyArrays is true, input arrays are copied to the output\ninstead of new ones being allocated.\n"},
  {(char*)"InterpolatePoint", PyvtkDataSetAttributes_InterpolatePoint, METH_VARARGS,
   (char*)"V.InterpolatePoint(vtkDataSetAttributes, int, vtkIdList, [float,\n    ...])\nC++: void InterpolatePoint(vtkDataSetAttributes *fromPd,\n    vtkIdType toId, vtkIdList *ids, double *weights)\n\nInterpolate data set attributes from other data set attributes\ngiven cell or point ids and associated interpolation weights. If\nthe INTERPOLATION copy flag is set to 0 for an array,\ninterpolation is prevented. If the flag is set to 1, weighted\ninterpolation occurs. If the flag is set to 2, nearest neighbor\ninterpolation is used.\n"},
  {(char*)"InterpolateEdge", PyvtkDataSetAttributes_InterpolateEdge, METH_VARARGS,
   (char*)"V.InterpolateEdge(vtkDataSetAttributes, int, int, int, float)\nC++: void InterpolateEdge(vtkDataSetAttributes *fromPd,\n    vtkIdType toId, vtkIdType p1, vtkIdType p2, double t)\n\nInterpolate data from the two points p1,p2 (forming an edge) and\nan interpolation factor, t, along the edge. The weight ranges\nfrom (0,1), with t=0 located at p1. Make sure that the method\nInterpolateAllocate() has been invoked before using this method.\nIf the INTERPOLATION copy flag is set to 0 for an array,\ninterpolation is prevented. If the flag is set to 1, weighted\ninterpolation occurs. If the flag is set to 2, nearest neighbor\ninterpolation is used.\n"},
  {(char*)"InterpolateTime", PyvtkDataSetAttributes_InterpolateTime, METH_VARARGS,
   (char*)"V.InterpolateTime(vtkDataSetAttributes, vtkDataSetAttributes, int,\n     float)\nC++: void InterpolateTime(vtkDataSetAttributes *from1,\n    vtkDataSetAttributes *from2, vtkIdType id, double t)\n\nInterpolate data from the same id (point or cell) at different\npoints in time (parameter t). Two input data set attributes\nobjects are input. The parameter t lies between (0<=t<=1).\nIMPORTANT: it is assumed that the number of attributes and number\nof components is the same for both from1 and from2, and the type\nof data for from1 and from2 are the same. Make sure that the\nmethod InterpolateAllocate() has been invoked before using this\nmethod. If the INTERPOLATION copy flag is set to 0 for an array,\ninterpolation is prevented. If the flag is set to 1, weighted\ninterpolation occurs. If the flag is set to 2, nearest neighbor\ninterpolation is used.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkDataSetAttributes_StaticNew()
{
  return vtkDataSetAttributes::New();
}

PyObject *PyVTKClass_vtkDataSetAttributesNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkDataSetAttributes_StaticNew,
    PyvtkDataSetAttributes_Methods,
    "vtkDataSetAttributes", modulename,
    NULL, NULL,
    PyvtkDataSetAttributes_Doc(),
    PyVTKClass_vtkFieldDataNew(modulename));

  if (cls)
    {
    PyObject *d = PyVTKClass_GetDict(cls);
    PyObject *o;

    PyType_Ready(&PyvtkDataSetAttributes_AttributeTypes_Type);
    PyvtkDataSetAttributes_AttributeTypes_Type.tp_new = NULL;

    o = (PyObject *)&PyvtkDataSetAttributes_AttributeTypes_Type;
    if (o && PyDict_SetItemString(d, (char *)"AttributeTypes", o) != 0)
      {
      Py_DECREF(o);
      }

    PyType_Ready(&PyvtkDataSetAttributes_AttributeLimitTypes_Type);
    PyvtkDataSetAttributes_AttributeLimitTypes_Type.tp_new = NULL;

    o = (PyObject *)&PyvtkDataSetAttributes_AttributeLimitTypes_Type;
    if (o && PyDict_SetItemString(d, (char *)"AttributeLimitTypes", o) != 0)
      {
      Py_DECREF(o);
      }

    PyType_Ready(&PyvtkDataSetAttributes_AttributeCopyOperations_Type);
    PyvtkDataSetAttributes_AttributeCopyOperations_Type.tp_new = NULL;

    o = (PyObject *)&PyvtkDataSetAttributes_AttributeCopyOperations_Type;
    if (o && PyDict_SetItemString(d, (char *)"AttributeCopyOperations", o) != 0)
      {
      Py_DECREF(o);
      }

    for (int c = 0; c < 9; c++)
      {
      typedef vtkDataSetAttributes::AttributeTypes cxx_enum_type;

      static const struct { const char *name; cxx_enum_type value; }
        constants[9] = {
          { "SCALARS", vtkDataSetAttributes::SCALARS },
          { "VECTORS", vtkDataSetAttributes::VECTORS },
          { "NORMALS", vtkDataSetAttributes::NORMALS },
          { "TCOORDS", vtkDataSetAttributes::TCOORDS },
          { "TENSORS", vtkDataSetAttributes::TENSORS },
          { "GLOBALIDS", vtkDataSetAttributes::GLOBALIDS },
          { "PEDIGREEIDS", vtkDataSetAttributes::PEDIGREEIDS },
          { "EDGEFLAG", vtkDataSetAttributes::EDGEFLAG },
          { "NUM_ATTRIBUTES", vtkDataSetAttributes::NUM_ATTRIBUTES },
        };

      o = PyvtkDataSetAttributes_AttributeTypes_FromEnum(constants[c].value);
      if (o)
        {
        PyDict_SetItemString(d, (char *)constants[c].name, o);
        Py_DECREF(o);
        }
      }

    for (int c = 0; c < 3; c++)
      {
      typedef vtkDataSetAttributes::AttributeLimitTypes cxx_enum_type;

      static const struct { const char *name; cxx_enum_type value; }
        constants[3] = {
          { "MAX", vtkDataSetAttributes::MAX },
          { "EXACT", vtkDataSetAttributes::EXACT },
          { "NOLIMIT", vtkDataSetAttributes::NOLIMIT },
        };

      o = PyvtkDataSetAttributes_AttributeLimitTypes_FromEnum(constants[c].value);
      if (o)
        {
        PyDict_SetItemString(d, (char *)constants[c].name, o);
        Py_DECREF(o);
        }
      }

    for (int c = 0; c < 4; c++)
      {
      typedef vtkDataSetAttributes::AttributeCopyOperations cxx_enum_type;

      static const struct { const char *name; cxx_enum_type value; }
        constants[4] = {
          { "COPYTUPLE", vtkDataSetAttributes::COPYTUPLE },
          { "INTERPOLATE", vtkDataSetAttributes::INTERPOLATE },
          { "PASSDATA", vtkDataSetAttributes::PASSDATA },
          { "ALLCOPY", vtkDataSetAttributes::ALLCOPY },
        };

      o = PyvtkDataSetAttributes_AttributeCopyOperations_FromEnum(constants[c].value);
      if (o)
        {
        PyDict_SetItemString(d, (char *)constants[c].name, o);
        Py_DECREF(o);
        }
      }

    }

  return cls;
}

const char **PyvtkDataSetAttributes_Doc()
{
  static const char *docstring[] = {
    "vtkDataSetAttributes - represent and manipulate attribute data in a\ndataset\n\n",
    "Superclass: vtkFieldData\n\n",
    "vtkDataSetAttributes is a class that is used to represent and\nmanipulate attribute data (e.g., scalars, vectors, normals, texture\ncoordinates, tensors, global ids, pedigree ids, and field data).\n\nThis adds to vtkFieldData the ability to pick one of the arrays from\nthe field as the currently active array for each attribute type. In\nother words, you pick one array to be called \"THE\" Scalars, and the",
    "n\nfilters down the pipeline will treat that array specially. For\nexample vtkContourFilter will contour \"THE\" Scalar array unless a\ndifferent array is asked for.\n\nAdditionally vtkDataSetAttributes provides methods that filters call\nto pass data through, copy data into, and interpolate from Fields.\nPassData passes entire arrays from the source to the destination.\nCopy passes through some subset of t",
    "he tuples from the source to the\ndestination. Interpolate interpolates from the chosen tuple(s) in the\nsource data, using the provided weights, to produce new tuples in the\ndestination. Each attribute type has pass, copy and interpolate\n\"copy\" flags that can be set in the destination to choose which\nattribute arrays will be transferred from the source to the\ndestination.\n\nFinally this class provid",
    "es a mechanism to determine which attributes\na group of sources have in common, and to copy tuples from a source\ninto the destination, for only those attributes that are held by all.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkDataSetAttributes(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkDataSetAttributesNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkDataSetAttributes", o) != 0)
    {
    Py_DECREF(o);
    }

}

