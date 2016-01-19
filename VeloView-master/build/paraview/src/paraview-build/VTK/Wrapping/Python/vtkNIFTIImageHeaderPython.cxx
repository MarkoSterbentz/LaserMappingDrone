// python wrapper for vtkNIFTIImageHeader
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkNIFTIImageHeader.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkNIFTIImageHeader(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkNIFTIImageHeaderNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkNIFTIImageHeader_Doc();

#ifndef DECLARED_PyvtkNIFTIImageHeader_IntentCodeEnum_Type
extern VTK_PYTHON_EXPORT PyTypeObject PyvtkNIFTIImageHeader_IntentCodeEnum_Type;
#define DECLARED_PyvtkNIFTIImageHeader_IntentCodeEnum_Type
#endif

PyTypeObject PyvtkNIFTIImageHeader_IntentCodeEnum_Type = {
  PyObject_HEAD_INIT(&PyType_Type)
  0,
  (char*)"IntentCodeEnum", // tp_name
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

PyObject *PyvtkNIFTIImageHeader_IntentCodeEnum_FromEnum(int val)
{
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkNIFTIImageHeader_IntentCodeEnum_Type);
  self->ob_ival = val;
  return (PyObject *)self;
}

#ifndef DECLARED_PyvtkNIFTIImageHeader_XFormCodeEnum_Type
extern VTK_PYTHON_EXPORT PyTypeObject PyvtkNIFTIImageHeader_XFormCodeEnum_Type;
#define DECLARED_PyvtkNIFTIImageHeader_XFormCodeEnum_Type
#endif

PyTypeObject PyvtkNIFTIImageHeader_XFormCodeEnum_Type = {
  PyObject_HEAD_INIT(&PyType_Type)
  0,
  (char*)"XFormCodeEnum", // tp_name
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

PyObject *PyvtkNIFTIImageHeader_XFormCodeEnum_FromEnum(int val)
{
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkNIFTIImageHeader_XFormCodeEnum_Type);
  self->ob_ival = val;
  return (PyObject *)self;
}

#ifndef DECLARED_PyvtkNIFTIImageHeader_SliceCodeEnum_Type
extern VTK_PYTHON_EXPORT PyTypeObject PyvtkNIFTIImageHeader_SliceCodeEnum_Type;
#define DECLARED_PyvtkNIFTIImageHeader_SliceCodeEnum_Type
#endif

PyTypeObject PyvtkNIFTIImageHeader_SliceCodeEnum_Type = {
  PyObject_HEAD_INIT(&PyType_Type)
  0,
  (char*)"SliceCodeEnum", // tp_name
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

PyObject *PyvtkNIFTIImageHeader_SliceCodeEnum_FromEnum(int val)
{
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkNIFTIImageHeader_SliceCodeEnum_Type);
  self->ob_ival = val;
  return (PyObject *)self;
}

#ifndef DECLARED_PyvtkNIFTIImageHeader_UnitsXYZTEnum_Type
extern VTK_PYTHON_EXPORT PyTypeObject PyvtkNIFTIImageHeader_UnitsXYZTEnum_Type;
#define DECLARED_PyvtkNIFTIImageHeader_UnitsXYZTEnum_Type
#endif

PyTypeObject PyvtkNIFTIImageHeader_UnitsXYZTEnum_Type = {
  PyObject_HEAD_INIT(&PyType_Type)
  0,
  (char*)"UnitsXYZTEnum", // tp_name
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

PyObject *PyvtkNIFTIImageHeader_UnitsXYZTEnum_FromEnum(int val)
{
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkNIFTIImageHeader_UnitsXYZTEnum_Type);
  self->ob_ival = val;
  return (PyObject *)self;
}

#ifndef DECLARED_PyvtkNIFTIImageHeader_DataTypeEnum_Type
extern VTK_PYTHON_EXPORT PyTypeObject PyvtkNIFTIImageHeader_DataTypeEnum_Type;
#define DECLARED_PyvtkNIFTIImageHeader_DataTypeEnum_Type
#endif

PyTypeObject PyvtkNIFTIImageHeader_DataTypeEnum_Type = {
  PyObject_HEAD_INIT(&PyType_Type)
  0,
  (char*)"DataTypeEnum", // tp_name
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

PyObject *PyvtkNIFTIImageHeader_DataTypeEnum_FromEnum(int val)
{
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkNIFTIImageHeader_DataTypeEnum_Type);
  self->ob_ival = val;
  return (PyObject *)self;
}

#ifndef DECLARED_PyvtkNIFTIImageHeader_HeaderSizeEnum_Type
extern VTK_PYTHON_EXPORT PyTypeObject PyvtkNIFTIImageHeader_HeaderSizeEnum_Type;
#define DECLARED_PyvtkNIFTIImageHeader_HeaderSizeEnum_Type
#endif

PyTypeObject PyvtkNIFTIImageHeader_HeaderSizeEnum_Type = {
  PyObject_HEAD_INIT(&PyType_Type)
  0,
  (char*)"HeaderSizeEnum", // tp_name
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

PyObject *PyvtkNIFTIImageHeader_HeaderSizeEnum_FromEnum(int val)
{
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkNIFTIImageHeader_HeaderSizeEnum_Type);
  self->ob_ival = val;
  return (PyObject *)self;
}


static PyObject *
PyvtkNIFTIImageHeader_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNIFTIImageHeader *op = static_cast<vtkNIFTIImageHeader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkNIFTIImageHeader::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkNIFTIImageHeader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNIFTIImageHeader *op = static_cast<vtkNIFTIImageHeader *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkNIFTIImageHeader::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkNIFTIImageHeader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNIFTIImageHeader *op = static_cast<vtkNIFTIImageHeader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkNIFTIImageHeader *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkNIFTIImageHeader::NewInstance());

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
PyvtkNIFTIImageHeader_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkNIFTIImageHeader *tempr = vtkNIFTIImageHeader::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkNIFTIImageHeader_GetMagic(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMagic");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNIFTIImageHeader *op = static_cast<vtkNIFTIImageHeader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetMagic() :
      op->vtkNIFTIImageHeader::GetMagic());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkNIFTIImageHeader_GetVoxOffset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVoxOffset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNIFTIImageHeader *op = static_cast<vtkNIFTIImageHeader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    long long tempr = (ap.IsBound() ?
      op->GetVoxOffset() :
      op->vtkNIFTIImageHeader::GetVoxOffset());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkNIFTIImageHeader_GetDataType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNIFTIImageHeader *op = static_cast<vtkNIFTIImageHeader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetDataType() :
      op->vtkNIFTIImageHeader::GetDataType());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkNIFTIImageHeader_GetBitPix(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBitPix");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNIFTIImageHeader *op = static_cast<vtkNIFTIImageHeader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetBitPix() :
      op->vtkNIFTIImageHeader::GetBitPix());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkNIFTIImageHeader_GetDim(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDim");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNIFTIImageHeader *op = static_cast<vtkNIFTIImageHeader *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    long long tempr = (ap.IsBound() ?
      op->GetDim(temp0) :
      op->vtkNIFTIImageHeader::GetDim(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkNIFTIImageHeader_GetPixDim(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPixDim");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNIFTIImageHeader *op = static_cast<vtkNIFTIImageHeader *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    double tempr = (ap.IsBound() ?
      op->GetPixDim(temp0) :
      op->vtkNIFTIImageHeader::GetPixDim(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkNIFTIImageHeader_SetIntentCode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIntentCode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNIFTIImageHeader *op = static_cast<vtkNIFTIImageHeader *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetIntentCode(temp0);
      }
    else
      {
      op->vtkNIFTIImageHeader::SetIntentCode(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkNIFTIImageHeader_GetIntentCode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIntentCode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNIFTIImageHeader *op = static_cast<vtkNIFTIImageHeader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetIntentCode() :
      op->vtkNIFTIImageHeader::GetIntentCode());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkNIFTIImageHeader_SetIntentName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIntentName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNIFTIImageHeader *op = static_cast<vtkNIFTIImageHeader *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetIntentName(temp0);
      }
    else
      {
      op->vtkNIFTIImageHeader::SetIntentName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkNIFTIImageHeader_GetIntentName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIntentName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNIFTIImageHeader *op = static_cast<vtkNIFTIImageHeader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetIntentName() :
      op->vtkNIFTIImageHeader::GetIntentName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkNIFTIImageHeader_SetIntentP1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIntentP1");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNIFTIImageHeader *op = static_cast<vtkNIFTIImageHeader *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetIntentP1(temp0);
      }
    else
      {
      op->vtkNIFTIImageHeader::SetIntentP1(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkNIFTIImageHeader_GetIntentP1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIntentP1");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNIFTIImageHeader *op = static_cast<vtkNIFTIImageHeader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetIntentP1() :
      op->vtkNIFTIImageHeader::GetIntentP1());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkNIFTIImageHeader_SetIntentP2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIntentP2");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNIFTIImageHeader *op = static_cast<vtkNIFTIImageHeader *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetIntentP2(temp0);
      }
    else
      {
      op->vtkNIFTIImageHeader::SetIntentP2(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkNIFTIImageHeader_GetIntentP2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIntentP2");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNIFTIImageHeader *op = static_cast<vtkNIFTIImageHeader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetIntentP2() :
      op->vtkNIFTIImageHeader::GetIntentP2());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkNIFTIImageHeader_SetIntentP3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIntentP3");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNIFTIImageHeader *op = static_cast<vtkNIFTIImageHeader *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetIntentP3(temp0);
      }
    else
      {
      op->vtkNIFTIImageHeader::SetIntentP3(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkNIFTIImageHeader_GetIntentP3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIntentP3");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNIFTIImageHeader *op = static_cast<vtkNIFTIImageHeader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetIntentP3() :
      op->vtkNIFTIImageHeader::GetIntentP3());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkNIFTIImageHeader_SetSclSlope(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSclSlope");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNIFTIImageHeader *op = static_cast<vtkNIFTIImageHeader *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetSclSlope(temp0);
      }
    else
      {
      op->vtkNIFTIImageHeader::SetSclSlope(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkNIFTIImageHeader_GetSclSlope(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSclSlope");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNIFTIImageHeader *op = static_cast<vtkNIFTIImageHeader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetSclSlope() :
      op->vtkNIFTIImageHeader::GetSclSlope());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkNIFTIImageHeader_SetSclInter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSclInter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNIFTIImageHeader *op = static_cast<vtkNIFTIImageHeader *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetSclInter(temp0);
      }
    else
      {
      op->vtkNIFTIImageHeader::SetSclInter(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkNIFTIImageHeader_GetSclInter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSclInter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNIFTIImageHeader *op = static_cast<vtkNIFTIImageHeader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetSclInter() :
      op->vtkNIFTIImageHeader::GetSclInter());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkNIFTIImageHeader_SetCalMin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCalMin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNIFTIImageHeader *op = static_cast<vtkNIFTIImageHeader *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetCalMin(temp0);
      }
    else
      {
      op->vtkNIFTIImageHeader::SetCalMin(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkNIFTIImageHeader_GetCalMin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCalMin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNIFTIImageHeader *op = static_cast<vtkNIFTIImageHeader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetCalMin() :
      op->vtkNIFTIImageHeader::GetCalMin());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkNIFTIImageHeader_SetCalMax(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCalMax");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNIFTIImageHeader *op = static_cast<vtkNIFTIImageHeader *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetCalMax(temp0);
      }
    else
      {
      op->vtkNIFTIImageHeader::SetCalMax(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkNIFTIImageHeader_GetCalMax(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCalMax");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNIFTIImageHeader *op = static_cast<vtkNIFTIImageHeader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetCalMax() :
      op->vtkNIFTIImageHeader::GetCalMax());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkNIFTIImageHeader_SetSliceDuration(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSliceDuration");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNIFTIImageHeader *op = static_cast<vtkNIFTIImageHeader *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetSliceDuration(temp0);
      }
    else
      {
      op->vtkNIFTIImageHeader::SetSliceDuration(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkNIFTIImageHeader_GetSliceDuration(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSliceDuration");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNIFTIImageHeader *op = static_cast<vtkNIFTIImageHeader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetSliceDuration() :
      op->vtkNIFTIImageHeader::GetSliceDuration());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkNIFTIImageHeader_SetTOffset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTOffset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNIFTIImageHeader *op = static_cast<vtkNIFTIImageHeader *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetTOffset(temp0);
      }
    else
      {
      op->vtkNIFTIImageHeader::SetTOffset(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkNIFTIImageHeader_GetTOffset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTOffset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNIFTIImageHeader *op = static_cast<vtkNIFTIImageHeader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetTOffset() :
      op->vtkNIFTIImageHeader::GetTOffset());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkNIFTIImageHeader_SetSliceStart(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSliceStart");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNIFTIImageHeader *op = static_cast<vtkNIFTIImageHeader *>(vp);

  long long temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetSliceStart(temp0);
      }
    else
      {
      op->vtkNIFTIImageHeader::SetSliceStart(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkNIFTIImageHeader_GetSliceStart(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSliceStart");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNIFTIImageHeader *op = static_cast<vtkNIFTIImageHeader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    long long tempr = (ap.IsBound() ?
      op->GetSliceStart() :
      op->vtkNIFTIImageHeader::GetSliceStart());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkNIFTIImageHeader_SetSliceEnd(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSliceEnd");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNIFTIImageHeader *op = static_cast<vtkNIFTIImageHeader *>(vp);

  long long temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetSliceEnd(temp0);
      }
    else
      {
      op->vtkNIFTIImageHeader::SetSliceEnd(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkNIFTIImageHeader_GetSliceEnd(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSliceEnd");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNIFTIImageHeader *op = static_cast<vtkNIFTIImageHeader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    long long tempr = (ap.IsBound() ?
      op->GetSliceEnd() :
      op->vtkNIFTIImageHeader::GetSliceEnd());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkNIFTIImageHeader_SetSliceCode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSliceCode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNIFTIImageHeader *op = static_cast<vtkNIFTIImageHeader *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetSliceCode(temp0);
      }
    else
      {
      op->vtkNIFTIImageHeader::SetSliceCode(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkNIFTIImageHeader_GetSliceCode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSliceCode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNIFTIImageHeader *op = static_cast<vtkNIFTIImageHeader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetSliceCode() :
      op->vtkNIFTIImageHeader::GetSliceCode());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkNIFTIImageHeader_SetXYZTUnits(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetXYZTUnits");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNIFTIImageHeader *op = static_cast<vtkNIFTIImageHeader *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetXYZTUnits(temp0);
      }
    else
      {
      op->vtkNIFTIImageHeader::SetXYZTUnits(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkNIFTIImageHeader_GetXYZTUnits(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetXYZTUnits");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNIFTIImageHeader *op = static_cast<vtkNIFTIImageHeader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetXYZTUnits() :
      op->vtkNIFTIImageHeader::GetXYZTUnits());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkNIFTIImageHeader_SetDimInfo(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDimInfo");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNIFTIImageHeader *op = static_cast<vtkNIFTIImageHeader *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetDimInfo(temp0);
      }
    else
      {
      op->vtkNIFTIImageHeader::SetDimInfo(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkNIFTIImageHeader_GetDimInfo(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDimInfo");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNIFTIImageHeader *op = static_cast<vtkNIFTIImageHeader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetDimInfo() :
      op->vtkNIFTIImageHeader::GetDimInfo());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkNIFTIImageHeader_SetDescrip(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDescrip");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNIFTIImageHeader *op = static_cast<vtkNIFTIImageHeader *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetDescrip(temp0);
      }
    else
      {
      op->vtkNIFTIImageHeader::SetDescrip(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkNIFTIImageHeader_GetDescrip(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDescrip");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNIFTIImageHeader *op = static_cast<vtkNIFTIImageHeader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetDescrip() :
      op->vtkNIFTIImageHeader::GetDescrip());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkNIFTIImageHeader_SetAuxFile(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAuxFile");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNIFTIImageHeader *op = static_cast<vtkNIFTIImageHeader *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetAuxFile(temp0);
      }
    else
      {
      op->vtkNIFTIImageHeader::SetAuxFile(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkNIFTIImageHeader_GetAuxFile(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAuxFile");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNIFTIImageHeader *op = static_cast<vtkNIFTIImageHeader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetAuxFile() :
      op->vtkNIFTIImageHeader::GetAuxFile());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkNIFTIImageHeader_SetQFormCode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetQFormCode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNIFTIImageHeader *op = static_cast<vtkNIFTIImageHeader *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetQFormCode(temp0);
      }
    else
      {
      op->vtkNIFTIImageHeader::SetQFormCode(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkNIFTIImageHeader_GetQFormCode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetQFormCode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNIFTIImageHeader *op = static_cast<vtkNIFTIImageHeader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetQFormCode() :
      op->vtkNIFTIImageHeader::GetQFormCode());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkNIFTIImageHeader_SetSFormCode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSFormCode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNIFTIImageHeader *op = static_cast<vtkNIFTIImageHeader *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetSFormCode(temp0);
      }
    else
      {
      op->vtkNIFTIImageHeader::SetSFormCode(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkNIFTIImageHeader_GetSFormCode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSFormCode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNIFTIImageHeader *op = static_cast<vtkNIFTIImageHeader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetSFormCode() :
      op->vtkNIFTIImageHeader::GetSFormCode());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkNIFTIImageHeader_SetQuaternB(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetQuaternB");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNIFTIImageHeader *op = static_cast<vtkNIFTIImageHeader *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetQuaternB(temp0);
      }
    else
      {
      op->vtkNIFTIImageHeader::SetQuaternB(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkNIFTIImageHeader_GetQuaternB(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetQuaternB");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNIFTIImageHeader *op = static_cast<vtkNIFTIImageHeader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetQuaternB() :
      op->vtkNIFTIImageHeader::GetQuaternB());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkNIFTIImageHeader_SetQuaternC(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetQuaternC");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNIFTIImageHeader *op = static_cast<vtkNIFTIImageHeader *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetQuaternC(temp0);
      }
    else
      {
      op->vtkNIFTIImageHeader::SetQuaternC(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkNIFTIImageHeader_GetQuaternC(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetQuaternC");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNIFTIImageHeader *op = static_cast<vtkNIFTIImageHeader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetQuaternC() :
      op->vtkNIFTIImageHeader::GetQuaternC());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkNIFTIImageHeader_SetQuaternD(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetQuaternD");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNIFTIImageHeader *op = static_cast<vtkNIFTIImageHeader *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetQuaternD(temp0);
      }
    else
      {
      op->vtkNIFTIImageHeader::SetQuaternD(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkNIFTIImageHeader_GetQuaternD(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetQuaternD");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNIFTIImageHeader *op = static_cast<vtkNIFTIImageHeader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetQuaternD() :
      op->vtkNIFTIImageHeader::GetQuaternD());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkNIFTIImageHeader_SetQOffsetX(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetQOffsetX");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNIFTIImageHeader *op = static_cast<vtkNIFTIImageHeader *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetQOffsetX(temp0);
      }
    else
      {
      op->vtkNIFTIImageHeader::SetQOffsetX(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkNIFTIImageHeader_GetQOffsetX(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetQOffsetX");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNIFTIImageHeader *op = static_cast<vtkNIFTIImageHeader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetQOffsetX() :
      op->vtkNIFTIImageHeader::GetQOffsetX());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkNIFTIImageHeader_SetQOffsetY(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetQOffsetY");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNIFTIImageHeader *op = static_cast<vtkNIFTIImageHeader *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetQOffsetY(temp0);
      }
    else
      {
      op->vtkNIFTIImageHeader::SetQOffsetY(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkNIFTIImageHeader_GetQOffsetY(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetQOffsetY");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNIFTIImageHeader *op = static_cast<vtkNIFTIImageHeader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetQOffsetY() :
      op->vtkNIFTIImageHeader::GetQOffsetY());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkNIFTIImageHeader_SetQOffsetZ(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetQOffsetZ");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNIFTIImageHeader *op = static_cast<vtkNIFTIImageHeader *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetQOffsetZ(temp0);
      }
    else
      {
      op->vtkNIFTIImageHeader::SetQOffsetZ(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkNIFTIImageHeader_GetQOffsetZ(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetQOffsetZ");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNIFTIImageHeader *op = static_cast<vtkNIFTIImageHeader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetQOffsetZ() :
      op->vtkNIFTIImageHeader::GetQOffsetZ());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkNIFTIImageHeader_SetSRowX_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSRowX");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNIFTIImageHeader *op = static_cast<vtkNIFTIImageHeader *>(vp);

  double temp0;
  double temp1;
  double temp2;
  double temp3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
    {
    if (ap.IsBound())
      {
      op->SetSRowX(temp0, temp1, temp2, temp3);
      }
    else
      {
      op->vtkNIFTIImageHeader::SetSRowX(temp0, temp1, temp2, temp3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkNIFTIImageHeader_SetSRowX_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSRowX");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNIFTIImageHeader *op = static_cast<vtkNIFTIImageHeader *>(vp);

  double temp0[4];
  const int size0 = 4;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetSRowX(temp0);
      }
    else
      {
      op->vtkNIFTIImageHeader::SetSRowX(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkNIFTIImageHeader_SetSRowX(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 4:
      return PyvtkNIFTIImageHeader_SetSRowX_s1(self, args);
    case 1:
      return PyvtkNIFTIImageHeader_SetSRowX_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetSRowX");
  return NULL;
}



static PyObject *
PyvtkNIFTIImageHeader_GetSRowX(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSRowX");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNIFTIImageHeader *op = static_cast<vtkNIFTIImageHeader *>(vp);

  int sizer = 4;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetSRowX() :
      op->vtkNIFTIImageHeader::GetSRowX());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkNIFTIImageHeader_SetSRowY_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSRowY");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNIFTIImageHeader *op = static_cast<vtkNIFTIImageHeader *>(vp);

  double temp0;
  double temp1;
  double temp2;
  double temp3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
    {
    if (ap.IsBound())
      {
      op->SetSRowY(temp0, temp1, temp2, temp3);
      }
    else
      {
      op->vtkNIFTIImageHeader::SetSRowY(temp0, temp1, temp2, temp3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkNIFTIImageHeader_SetSRowY_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSRowY");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNIFTIImageHeader *op = static_cast<vtkNIFTIImageHeader *>(vp);

  double temp0[4];
  const int size0 = 4;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetSRowY(temp0);
      }
    else
      {
      op->vtkNIFTIImageHeader::SetSRowY(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkNIFTIImageHeader_SetSRowY(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 4:
      return PyvtkNIFTIImageHeader_SetSRowY_s1(self, args);
    case 1:
      return PyvtkNIFTIImageHeader_SetSRowY_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetSRowY");
  return NULL;
}



static PyObject *
PyvtkNIFTIImageHeader_GetSRowY(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSRowY");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNIFTIImageHeader *op = static_cast<vtkNIFTIImageHeader *>(vp);

  int sizer = 4;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetSRowY() :
      op->vtkNIFTIImageHeader::GetSRowY());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkNIFTIImageHeader_SetSRowZ_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSRowZ");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNIFTIImageHeader *op = static_cast<vtkNIFTIImageHeader *>(vp);

  double temp0;
  double temp1;
  double temp2;
  double temp3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
    {
    if (ap.IsBound())
      {
      op->SetSRowZ(temp0, temp1, temp2, temp3);
      }
    else
      {
      op->vtkNIFTIImageHeader::SetSRowZ(temp0, temp1, temp2, temp3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkNIFTIImageHeader_SetSRowZ_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSRowZ");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNIFTIImageHeader *op = static_cast<vtkNIFTIImageHeader *>(vp);

  double temp0[4];
  const int size0 = 4;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetSRowZ(temp0);
      }
    else
      {
      op->vtkNIFTIImageHeader::SetSRowZ(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkNIFTIImageHeader_SetSRowZ(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 4:
      return PyvtkNIFTIImageHeader_SetSRowZ_s1(self, args);
    case 1:
      return PyvtkNIFTIImageHeader_SetSRowZ_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetSRowZ");
  return NULL;
}



static PyObject *
PyvtkNIFTIImageHeader_GetSRowZ(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSRowZ");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNIFTIImageHeader *op = static_cast<vtkNIFTIImageHeader *>(vp);

  int sizer = 4;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetSRowZ() :
      op->vtkNIFTIImageHeader::GetSRowZ());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkNIFTIImageHeader_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNIFTIImageHeader *op = static_cast<vtkNIFTIImageHeader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Initialize();
      }
    else
      {
      op->vtkNIFTIImageHeader::Initialize();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkNIFTIImageHeader_DeepCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeepCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNIFTIImageHeader *op = static_cast<vtkNIFTIImageHeader *>(vp);

  vtkNIFTIImageHeader *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkNIFTIImageHeader"))
    {
    if (ap.IsBound())
      {
      op->DeepCopy(temp0);
      }
    else
      {
      op->vtkNIFTIImageHeader::DeepCopy(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkNIFTIImageHeader_Methods[] = {
  {(char*)"GetClassName", PyvtkNIFTIImageHeader_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\nStatic method for construction.\n"},
  {(char*)"IsA", PyvtkNIFTIImageHeader_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\nStatic method for construction.\n"},
  {(char*)"NewInstance", PyvtkNIFTIImageHeader_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkNIFTIImageHeader\nC++: vtkNIFTIImageHeader *NewInstance()\n\nStatic method for construction.\n"},
  {(char*)"SafeDownCast", PyvtkNIFTIImageHeader_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkNIFTIImageHeader\nC++: vtkNIFTIImageHeader *SafeDownCast(vtkObject* o)\n\nStatic method for construction.\n"},
  {(char*)"GetMagic", PyvtkNIFTIImageHeader_GetMagic, METH_VARARGS,
   (char*)"V.GetMagic() -> string\nC++: const char *GetMagic()\n\nGet the magic number for the NIFTI file as a null-terminated\nstring.\n"},
  {(char*)"GetVoxOffset", PyvtkNIFTIImageHeader_GetVoxOffset, METH_VARARGS,
   (char*)"V.GetVoxOffset() -> int\nC++: vtkTypeInt64 GetVoxOffset()\n\nGet the offset to the pixel data within the file.\n"},
  {(char*)"GetDataType", PyvtkNIFTIImageHeader_GetDataType, METH_VARARGS,
   (char*)"V.GetDataType() -> int\nC++: int GetDataType()\n\nGet the data type.\n"},
  {(char*)"GetBitPix", PyvtkNIFTIImageHeader_GetBitPix, METH_VARARGS,
   (char*)"V.GetBitPix() -> int\nC++: int GetBitPix()\n\nGet the number of bits per pixel.\n"},
  {(char*)"GetDim", PyvtkNIFTIImageHeader_GetDim, METH_VARARGS,
   (char*)"V.GetDim(int) -> int\nC++: vtkTypeInt64 GetDim(int i)\n\nGet the nth dimension of the data, where GetDim(0) returns the\nnumber of dimensions that are defined for the file.\n"},
  {(char*)"GetPixDim", PyvtkNIFTIImageHeader_GetPixDim, METH_VARARGS,
   (char*)"V.GetPixDim(int) -> float\nC++: double GetPixDim(int i)\n\nGet the sample spacing in the nth dimension. If GetPixDim(0) is\nnegative, then the quaternion for the qform describes the correct\norientation only after the slice ordering has been reversed.\n"},
  {(char*)"SetIntentCode", PyvtkNIFTIImageHeader_SetIntentCode, METH_VARARGS,
   (char*)"V.SetIntentCode(int)\nC++: void SetIntentCode(int a)\n\nGet the NIFTI intent code.  This is an enumerated value in the\nNIFTI header that states what the data is intended to be used\nfor.\n"},
  {(char*)"GetIntentCode", PyvtkNIFTIImageHeader_GetIntentCode, METH_VARARGS,
   (char*)"V.GetIntentCode() -> int\nC++: int GetIntentCode()\n\nGet the NIFTI intent code.  This is an enumerated value in the\nNIFTI header that states what the data is intended to be used\nfor.\n"},
  {(char*)"SetIntentName", PyvtkNIFTIImageHeader_SetIntentName, METH_VARARGS,
   (char*)"V.SetIntentName(string)\nC++: void SetIntentName(const char *name)\n\nGet the intent name.  This should match the intent code.\n"},
  {(char*)"GetIntentName", PyvtkNIFTIImageHeader_GetIntentName, METH_VARARGS,
   (char*)"V.GetIntentName() -> string\nC++: const char *GetIntentName()\n\nGet the intent name.  This should match the intent code.\n"},
  {(char*)"SetIntentP1", PyvtkNIFTIImageHeader_SetIntentP1, METH_VARARGS,
   (char*)"V.SetIntentP1(float)\nC++: void SetIntentP1(double a)\n\nGet one of the NIFTI intent parameters.  The definition of these\nparameters varies according to the IntentCode.\n"},
  {(char*)"GetIntentP1", PyvtkNIFTIImageHeader_GetIntentP1, METH_VARARGS,
   (char*)"V.GetIntentP1() -> float\nC++: double GetIntentP1()\n\nGet one of the NIFTI intent parameters.  The definition of these\nparameters varies according to the IntentCode.\n"},
  {(char*)"SetIntentP2", PyvtkNIFTIImageHeader_SetIntentP2, METH_VARARGS,
   (char*)"V.SetIntentP2(float)\nC++: void SetIntentP2(double a)\n\nGet one of the NIFTI intent parameters.  The definition of these\nparameters varies according to the IntentCode.\n"},
  {(char*)"GetIntentP2", PyvtkNIFTIImageHeader_GetIntentP2, METH_VARARGS,
   (char*)"V.GetIntentP2() -> float\nC++: double GetIntentP2()\n\nGet one of the NIFTI intent parameters.  The definition of these\nparameters varies according to the IntentCode.\n"},
  {(char*)"SetIntentP3", PyvtkNIFTIImageHeader_SetIntentP3, METH_VARARGS,
   (char*)"V.SetIntentP3(float)\nC++: void SetIntentP3(double a)\n\nGet one of the NIFTI intent parameters.  The definition of these\nparameters varies according to the IntentCode.\n"},
  {(char*)"GetIntentP3", PyvtkNIFTIImageHeader_GetIntentP3, METH_VARARGS,
   (char*)"V.GetIntentP3() -> float\nC++: double GetIntentP3()\n\nGet one of the NIFTI intent parameters.  The definition of these\nparameters varies according to the IntentCode.\n"},
  {(char*)"SetSclSlope", PyvtkNIFTIImageHeader_SetSclSlope, METH_VARARGS,
   (char*)"V.SetSclSlope(float)\nC++: void SetSclSlope(double a)\n\nGet the scale and slope to apply to the data in order to get the\nreal-valued data values.\n"},
  {(char*)"GetSclSlope", PyvtkNIFTIImageHeader_GetSclSlope, METH_VARARGS,
   (char*)"V.GetSclSlope() -> float\nC++: double GetSclSlope()\n\nGet the scale and slope to apply to the data in order to get the\nreal-valued data values.\n"},
  {(char*)"SetSclInter", PyvtkNIFTIImageHeader_SetSclInter, METH_VARARGS,
   (char*)"V.SetSclInter(float)\nC++: void SetSclInter(double a)\n\nGet the scale and slope to apply to the data in order to get the\nreal-valued data values.\n"},
  {(char*)"GetSclInter", PyvtkNIFTIImageHeader_GetSclInter, METH_VARARGS,
   (char*)"V.GetSclInter() -> float\nC++: double GetSclInter()\n\nGet the scale and slope to apply to the data in order to get the\nreal-valued data values.\n"},
  {(char*)"SetCalMin", PyvtkNIFTIImageHeader_SetCalMin, METH_VARARGS,
   (char*)"V.SetCalMin(float)\nC++: void SetCalMin(double a)\n\nGet the calibrated range of the data, i.e. the values stored in\nthe cal_min and cal_max fields in the header.\n"},
  {(char*)"GetCalMin", PyvtkNIFTIImageHeader_GetCalMin, METH_VARARGS,
   (char*)"V.GetCalMin() -> float\nC++: double GetCalMin()\n\nGet the calibrated range of the data, i.e. the values stored in\nthe cal_min and cal_max fields in the header.\n"},
  {(char*)"SetCalMax", PyvtkNIFTIImageHeader_SetCalMax, METH_VARARGS,
   (char*)"V.SetCalMax(float)\nC++: void SetCalMax(double a)\n\nGet the calibrated range of the data, i.e. the values stored in\nthe cal_min and cal_max fields in the header.\n"},
  {(char*)"GetCalMax", PyvtkNIFTIImageHeader_GetCalMax, METH_VARARGS,
   (char*)"V.GetCalMax() -> float\nC++: double GetCalMax()\n\nGet the calibrated range of the data, i.e. the values stored in\nthe cal_min and cal_max fields in the header.\n"},
  {(char*)"SetSliceDuration", PyvtkNIFTIImageHeader_SetSliceDuration, METH_VARARGS,
   (char*)"V.SetSliceDuration(float)\nC++: void SetSliceDuration(double a)\n\nGet the slice_duration and toffset from the header.\n"},
  {(char*)"GetSliceDuration", PyvtkNIFTIImageHeader_GetSliceDuration, METH_VARARGS,
   (char*)"V.GetSliceDuration() -> float\nC++: double GetSliceDuration()\n\nGet the slice_duration and toffset from the header.\n"},
  {(char*)"SetTOffset", PyvtkNIFTIImageHeader_SetTOffset, METH_VARARGS,
   (char*)"V.SetTOffset(float)\nC++: void SetTOffset(double a)\n\nGet the slice_duration and toffset from the header.\n"},
  {(char*)"GetTOffset", PyvtkNIFTIImageHeader_GetTOffset, METH_VARARGS,
   (char*)"V.GetTOffset() -> float\nC++: double GetTOffset()\n\nGet the slice_duration and toffset from the header.\n"},
  {(char*)"SetSliceStart", PyvtkNIFTIImageHeader_SetSliceStart, METH_VARARGS,
   (char*)"V.SetSliceStart(int)\nC++: void SetSliceStart(vtkTypeInt64 a)\n\nGet the slice range for the data.\n"},
  {(char*)"GetSliceStart", PyvtkNIFTIImageHeader_GetSliceStart, METH_VARARGS,
   (char*)"V.GetSliceStart() -> int\nC++: vtkTypeInt64 GetSliceStart()\n\nGet the slice range for the data.\n"},
  {(char*)"SetSliceEnd", PyvtkNIFTIImageHeader_SetSliceEnd, METH_VARARGS,
   (char*)"V.SetSliceEnd(int)\nC++: void SetSliceEnd(vtkTypeInt64 a)\n\nGet the slice range for the data.\n"},
  {(char*)"GetSliceEnd", PyvtkNIFTIImageHeader_GetSliceEnd, METH_VARARGS,
   (char*)"V.GetSliceEnd() -> int\nC++: vtkTypeInt64 GetSliceEnd()\n\nGet the slice range for the data.\n"},
  {(char*)"SetSliceCode", PyvtkNIFTIImageHeader_SetSliceCode, METH_VARARGS,
   (char*)"V.SetSliceCode(int)\nC++: void SetSliceCode(int a)\n\nGet the slice code for the data.\n"},
  {(char*)"GetSliceCode", PyvtkNIFTIImageHeader_GetSliceCode, METH_VARARGS,
   (char*)"V.GetSliceCode() -> int\nC++: int GetSliceCode()\n\nGet the slice code for the data.\n"},
  {(char*)"SetXYZTUnits", PyvtkNIFTIImageHeader_SetXYZTUnits, METH_VARARGS,
   (char*)"V.SetXYZTUnits(int)\nC++: void SetXYZTUnits(int a)\n\nGet a bitfield that describes the units for the first 4 dims.\n"},
  {(char*)"GetXYZTUnits", PyvtkNIFTIImageHeader_GetXYZTUnits, METH_VARARGS,
   (char*)"V.GetXYZTUnits() -> int\nC++: int GetXYZTUnits()\n\nGet a bitfield that describes the units for the first 4 dims.\n"},
  {(char*)"SetDimInfo", PyvtkNIFTIImageHeader_SetDimInfo, METH_VARARGS,
   (char*)"V.SetDimInfo(int)\nC++: void SetDimInfo(int a)\n\nGet a bitfield with extra information about the dimensions, it\nstates which dimensions are the phase encode, frequency encode,\nand slice encode dimensions for MRI acquisitions.\n"},
  {(char*)"GetDimInfo", PyvtkNIFTIImageHeader_GetDimInfo, METH_VARARGS,
   (char*)"V.GetDimInfo() -> int\nC++: int GetDimInfo()\n\nGet a bitfield with extra information about the dimensions, it\nstates which dimensions are the phase encode, frequency encode,\nand slice encode dimensions for MRI acquisitions.\n"},
  {(char*)"SetDescrip", PyvtkNIFTIImageHeader_SetDescrip, METH_VARARGS,
   (char*)"V.SetDescrip(string)\nC++: void SetDescrip(const char *descrip)\n\nGet a null-terminated file descriptor, this usually gives the\nname of the software that wrote the file. It will have a maximum\nlength of 80 characters.  Use ASCII to ensure compatibility with\nall NIFTI software, the NIFTI standard itself does not specify\nwhat encodings are permitted.\n"},
  {(char*)"GetDescrip", PyvtkNIFTIImageHeader_GetDescrip, METH_VARARGS,
   (char*)"V.GetDescrip() -> string\nC++: const char *GetDescrip()\n\nGet a null-terminated file descriptor, this usually gives the\nname of the software that wrote the file. It will have a maximum\nlength of 80 characters.  Use ASCII to ensure compatibility with\nall NIFTI software, the NIFTI standard itself does not specify\nwhat encodings are permitted.\n"},
  {(char*)"SetAuxFile", PyvtkNIFTIImageHeader_SetAuxFile, METH_VARARGS,
   (char*)"V.SetAuxFile(string)\nC++: void SetAuxFile(const char *auxfile)\n\nGet an auxilliary file, e.g. a color table, that is associated\nwith this data.  The length of the filename must be a maximum of\n24 characters, and it will be assumed to be in the same directory\nas the NIFTI file.\n"},
  {(char*)"GetAuxFile", PyvtkNIFTIImageHeader_GetAuxFile, METH_VARARGS,
   (char*)"V.GetAuxFile() -> string\nC++: const char *GetAuxFile()\n\nGet an auxilliary file, e.g. a color table, that is associated\nwith this data.  The length of the filename must be a maximum of\n24 characters, and it will be assumed to be in the same directory\nas the NIFTI file.\n"},
  {(char*)"SetQFormCode", PyvtkNIFTIImageHeader_SetQFormCode, METH_VARARGS,
   (char*)"V.SetQFormCode(int)\nC++: void SetQFormCode(int a)\n\nGet the QForm or SForm code.\n"},
  {(char*)"GetQFormCode", PyvtkNIFTIImageHeader_GetQFormCode, METH_VARARGS,
   (char*)"V.GetQFormCode() -> int\nC++: int GetQFormCode()\n\nGet the QForm or SForm code.\n"},
  {(char*)"SetSFormCode", PyvtkNIFTIImageHeader_SetSFormCode, METH_VARARGS,
   (char*)"V.SetSFormCode(int)\nC++: void SetSFormCode(int a)\n\nGet the QForm or SForm code.\n"},
  {(char*)"GetSFormCode", PyvtkNIFTIImageHeader_GetSFormCode, METH_VARARGS,
   (char*)"V.GetSFormCode() -> int\nC++: int GetSFormCode()\n\nGet the QForm or SForm code.\n"},
  {(char*)"SetQuaternB", PyvtkNIFTIImageHeader_SetQuaternB, METH_VARARGS,
   (char*)"V.SetQuaternB(float)\nC++: void SetQuaternB(double a)\n\nGet information about the quaternion transformation.  Note that\nthe vtkNIFTIImageWriter ignores this part of the header if a\nquaternion has been set via\nvtkNIFTIImageWriter::SetQFormMatrix().\n"},
  {(char*)"GetQuaternB", PyvtkNIFTIImageHeader_GetQuaternB, METH_VARARGS,
   (char*)"V.GetQuaternB() -> float\nC++: double GetQuaternB()\n\nGet information about the quaternion transformation.  Note that\nthe vtkNIFTIImageWriter ignores this part of the header if a\nquaternion has been set via\nvtkNIFTIImageWriter::SetQFormMatrix().\n"},
  {(char*)"SetQuaternC", PyvtkNIFTIImageHeader_SetQuaternC, METH_VARARGS,
   (char*)"V.SetQuaternC(float)\nC++: void SetQuaternC(double a)\n\nGet information about the quaternion transformation.  Note that\nthe vtkNIFTIImageWriter ignores this part of the header if a\nquaternion has been set via\nvtkNIFTIImageWriter::SetQFormMatrix().\n"},
  {(char*)"GetQuaternC", PyvtkNIFTIImageHeader_GetQuaternC, METH_VARARGS,
   (char*)"V.GetQuaternC() -> float\nC++: double GetQuaternC()\n\nGet information about the quaternion transformation.  Note that\nthe vtkNIFTIImageWriter ignores this part of the header if a\nquaternion has been set via\nvtkNIFTIImageWriter::SetQFormMatrix().\n"},
  {(char*)"SetQuaternD", PyvtkNIFTIImageHeader_SetQuaternD, METH_VARARGS,
   (char*)"V.SetQuaternD(float)\nC++: void SetQuaternD(double a)\n\nGet information about the quaternion transformation.  Note that\nthe vtkNIFTIImageWriter ignores this part of the header if a\nquaternion has been set via\nvtkNIFTIImageWriter::SetQFormMatrix().\n"},
  {(char*)"GetQuaternD", PyvtkNIFTIImageHeader_GetQuaternD, METH_VARARGS,
   (char*)"V.GetQuaternD() -> float\nC++: double GetQuaternD()\n\nGet information about the quaternion transformation.  Note that\nthe vtkNIFTIImageWriter ignores this part of the header if a\nquaternion has been set via\nvtkNIFTIImageWriter::SetQFormMatrix().\n"},
  {(char*)"SetQOffsetX", PyvtkNIFTIImageHeader_SetQOffsetX, METH_VARARGS,
   (char*)"V.SetQOffsetX(float)\nC++: void SetQOffsetX(double a)\n\nGet information about the quaternion transformation.  Note that\nthe vtkNIFTIImageWriter ignores this part of the header if a\nquaternion has been set via\nvtkNIFTIImageWriter::SetQFormMatrix().\n"},
  {(char*)"GetQOffsetX", PyvtkNIFTIImageHeader_GetQOffsetX, METH_VARARGS,
   (char*)"V.GetQOffsetX() -> float\nC++: double GetQOffsetX()\n\nGet information about the quaternion transformation.  Note that\nthe vtkNIFTIImageWriter ignores this part of the header if a\nquaternion has been set via\nvtkNIFTIImageWriter::SetQFormMatrix().\n"},
  {(char*)"SetQOffsetY", PyvtkNIFTIImageHeader_SetQOffsetY, METH_VARARGS,
   (char*)"V.SetQOffsetY(float)\nC++: void SetQOffsetY(double a)\n\nGet information about the quaternion transformation.  Note that\nthe vtkNIFTIImageWriter ignores this part of the header if a\nquaternion has been set via\nvtkNIFTIImageWriter::SetQFormMatrix().\n"},
  {(char*)"GetQOffsetY", PyvtkNIFTIImageHeader_GetQOffsetY, METH_VARARGS,
   (char*)"V.GetQOffsetY() -> float\nC++: double GetQOffsetY()\n\nGet information about the quaternion transformation.  Note that\nthe vtkNIFTIImageWriter ignores this part of the header if a\nquaternion has been set via\nvtkNIFTIImageWriter::SetQFormMatrix().\n"},
  {(char*)"SetQOffsetZ", PyvtkNIFTIImageHeader_SetQOffsetZ, METH_VARARGS,
   (char*)"V.SetQOffsetZ(float)\nC++: void SetQOffsetZ(double a)\n\nGet information about the quaternion transformation.  Note that\nthe vtkNIFTIImageWriter ignores this part of the header if a\nquaternion has been set via\nvtkNIFTIImageWriter::SetQFormMatrix().\n"},
  {(char*)"GetQOffsetZ", PyvtkNIFTIImageHeader_GetQOffsetZ, METH_VARARGS,
   (char*)"V.GetQOffsetZ() -> float\nC++: double GetQOffsetZ()\n\nGet information about the quaternion transformation.  Note that\nthe vtkNIFTIImageWriter ignores this part of the header if a\nquaternion has been set via\nvtkNIFTIImageWriter::SetQFormMatrix().\n"},
  {(char*)"SetSRowX", PyvtkNIFTIImageHeader_SetSRowX, METH_VARARGS,
   (char*)"V.SetSRowX(float, float, float, float)\nC++: void SetSRowX(double, double, double, double)\nV.SetSRowX((float, float, float, float))\nC++: void SetSRowX(double a[4])\n\n"},
  {(char*)"GetSRowX", PyvtkNIFTIImageHeader_GetSRowX, METH_VARARGS,
   (char*)"V.GetSRowX() -> (float, float, float, float)\nC++: double *GetSRowX()\n\n"},
  {(char*)"SetSRowY", PyvtkNIFTIImageHeader_SetSRowY, METH_VARARGS,
   (char*)"V.SetSRowY(float, float, float, float)\nC++: void SetSRowY(double, double, double, double)\nV.SetSRowY((float, float, float, float))\nC++: void SetSRowY(double a[4])\n\n"},
  {(char*)"GetSRowY", PyvtkNIFTIImageHeader_GetSRowY, METH_VARARGS,
   (char*)"V.GetSRowY() -> (float, float, float, float)\nC++: double *GetSRowY()\n\n"},
  {(char*)"SetSRowZ", PyvtkNIFTIImageHeader_SetSRowZ, METH_VARARGS,
   (char*)"V.SetSRowZ(float, float, float, float)\nC++: void SetSRowZ(double, double, double, double)\nV.SetSRowZ((float, float, float, float))\nC++: void SetSRowZ(double a[4])\n\n"},
  {(char*)"GetSRowZ", PyvtkNIFTIImageHeader_GetSRowZ, METH_VARARGS,
   (char*)"V.GetSRowZ() -> (float, float, float, float)\nC++: double *GetSRowZ()\n\n"},
  {(char*)"Initialize", PyvtkNIFTIImageHeader_Initialize, METH_VARARGS,
   (char*)"V.Initialize()\nC++: void Initialize()\n\nInitialize the header to default values.\n"},
  {(char*)"DeepCopy", PyvtkNIFTIImageHeader_DeepCopy, METH_VARARGS,
   (char*)"V.DeepCopy(vtkNIFTIImageHeader)\nC++: void DeepCopy(vtkNIFTIImageHeader *o)\n\nMake a copy of the header.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkNIFTIImageHeader_StaticNew()
{
  return vtkNIFTIImageHeader::New();
}

PyObject *PyVTKClass_vtkNIFTIImageHeaderNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkNIFTIImageHeader_StaticNew,
    PyvtkNIFTIImageHeader_Methods,
    "vtkNIFTIImageHeader", modulename,
    NULL, NULL,
    PyvtkNIFTIImageHeader_Doc(),
    PyVTKClass_vtkObjectNew(modulename));

  if (cls)
    {
    PyObject *d = PyVTKClass_GetDict(cls);
    PyObject *o;

    PyType_Ready(&PyvtkNIFTIImageHeader_IntentCodeEnum_Type);
    PyvtkNIFTIImageHeader_IntentCodeEnum_Type.tp_new = NULL;

    o = (PyObject *)&PyvtkNIFTIImageHeader_IntentCodeEnum_Type;
    if (o && PyDict_SetItemString(d, (char *)"IntentCodeEnum", o) != 0)
      {
      Py_DECREF(o);
      }

    PyType_Ready(&PyvtkNIFTIImageHeader_XFormCodeEnum_Type);
    PyvtkNIFTIImageHeader_XFormCodeEnum_Type.tp_new = NULL;

    o = (PyObject *)&PyvtkNIFTIImageHeader_XFormCodeEnum_Type;
    if (o && PyDict_SetItemString(d, (char *)"XFormCodeEnum", o) != 0)
      {
      Py_DECREF(o);
      }

    PyType_Ready(&PyvtkNIFTIImageHeader_SliceCodeEnum_Type);
    PyvtkNIFTIImageHeader_SliceCodeEnum_Type.tp_new = NULL;

    o = (PyObject *)&PyvtkNIFTIImageHeader_SliceCodeEnum_Type;
    if (o && PyDict_SetItemString(d, (char *)"SliceCodeEnum", o) != 0)
      {
      Py_DECREF(o);
      }

    PyType_Ready(&PyvtkNIFTIImageHeader_UnitsXYZTEnum_Type);
    PyvtkNIFTIImageHeader_UnitsXYZTEnum_Type.tp_new = NULL;

    o = (PyObject *)&PyvtkNIFTIImageHeader_UnitsXYZTEnum_Type;
    if (o && PyDict_SetItemString(d, (char *)"UnitsXYZTEnum", o) != 0)
      {
      Py_DECREF(o);
      }

    PyType_Ready(&PyvtkNIFTIImageHeader_DataTypeEnum_Type);
    PyvtkNIFTIImageHeader_DataTypeEnum_Type.tp_new = NULL;

    o = (PyObject *)&PyvtkNIFTIImageHeader_DataTypeEnum_Type;
    if (o && PyDict_SetItemString(d, (char *)"DataTypeEnum", o) != 0)
      {
      Py_DECREF(o);
      }

    PyType_Ready(&PyvtkNIFTIImageHeader_HeaderSizeEnum_Type);
    PyvtkNIFTIImageHeader_HeaderSizeEnum_Type.tp_new = NULL;

    o = (PyObject *)&PyvtkNIFTIImageHeader_HeaderSizeEnum_Type;
    if (o && PyDict_SetItemString(d, (char *)"HeaderSizeEnum", o) != 0)
      {
      Py_DECREF(o);
      }

    for (int c = 0; c < 40; c++)
      {
      typedef vtkNIFTIImageHeader::IntentCodeEnum cxx_enum_type;

      static const struct { const char *name; cxx_enum_type value; }
        constants[40] = {
          { "IntentNone", vtkNIFTIImageHeader::IntentNone },
          { "IntentCorrel", vtkNIFTIImageHeader::IntentCorrel },
          { "IntentTTest", vtkNIFTIImageHeader::IntentTTest },
          { "IntentFTest", vtkNIFTIImageHeader::IntentFTest },
          { "IntentZScore", vtkNIFTIImageHeader::IntentZScore },
          { "IntentChiSQ", vtkNIFTIImageHeader::IntentChiSQ },
          { "IntentBeta", vtkNIFTIImageHeader::IntentBeta },
          { "IntentBinom", vtkNIFTIImageHeader::IntentBinom },
          { "IntentGamma", vtkNIFTIImageHeader::IntentGamma },
          { "IntentPoisson", vtkNIFTIImageHeader::IntentPoisson },
          { "IntentNormal", vtkNIFTIImageHeader::IntentNormal },
          { "IntentFTestNonc", vtkNIFTIImageHeader::IntentFTestNonc },
          { "IntentChiSQNonc", vtkNIFTIImageHeader::IntentChiSQNonc },
          { "IntentLogistic", vtkNIFTIImageHeader::IntentLogistic },
          { "IntentLaplace", vtkNIFTIImageHeader::IntentLaplace },
          { "IntentUniform", vtkNIFTIImageHeader::IntentUniform },
          { "IntentTTestNonc", vtkNIFTIImageHeader::IntentTTestNonc },
          { "IntentWeibull", vtkNIFTIImageHeader::IntentWeibull },
          { "IntentChi", vtkNIFTIImageHeader::IntentChi },
          { "IntentInvGauss", vtkNIFTIImageHeader::IntentInvGauss },
          { "IntentExtVal", vtkNIFTIImageHeader::IntentExtVal },
          { "IntentPVal", vtkNIFTIImageHeader::IntentPVal },
          { "IntentLogPVal", vtkNIFTIImageHeader::IntentLogPVal },
          { "IntentLog10PVal", vtkNIFTIImageHeader::IntentLog10PVal },
          { "IntentEstimate", vtkNIFTIImageHeader::IntentEstimate },
          { "IntentLabel", vtkNIFTIImageHeader::IntentLabel },
          { "IntentNeuroName", vtkNIFTIImageHeader::IntentNeuroName },
          { "IntentGenMatrix", vtkNIFTIImageHeader::IntentGenMatrix },
          { "IntentSymMatrix", vtkNIFTIImageHeader::IntentSymMatrix },
          { "IntentDispVect", vtkNIFTIImageHeader::IntentDispVect },
          { "IntentVector", vtkNIFTIImageHeader::IntentVector },
          { "IntentPointSet", vtkNIFTIImageHeader::IntentPointSet },
          { "IntentTriangle", vtkNIFTIImageHeader::IntentTriangle },
          { "IntentQuaternion", vtkNIFTIImageHeader::IntentQuaternion },
          { "IntentDimless", vtkNIFTIImageHeader::IntentDimless },
          { "IntentTimeSeries", vtkNIFTIImageHeader::IntentTimeSeries },
          { "IntentNodeIndex", vtkNIFTIImageHeader::IntentNodeIndex },
          { "IntentRGBVector", vtkNIFTIImageHeader::IntentRGBVector },
          { "IntentRGBAVector", vtkNIFTIImageHeader::IntentRGBAVector },
          { "IntentShape", vtkNIFTIImageHeader::IntentShape },
        };

      o = PyvtkNIFTIImageHeader_IntentCodeEnum_FromEnum(constants[c].value);
      if (o)
        {
        PyDict_SetItemString(d, (char *)constants[c].name, o);
        Py_DECREF(o);
        }
      }

    for (int c = 0; c < 5; c++)
      {
      typedef vtkNIFTIImageHeader::XFormCodeEnum cxx_enum_type;

      static const struct { const char *name; cxx_enum_type value; }
        constants[5] = {
          { "XFormUnkown", vtkNIFTIImageHeader::XFormUnkown },
          { "XFormScannerAnat", vtkNIFTIImageHeader::XFormScannerAnat },
          { "XFormAlignedAnat", vtkNIFTIImageHeader::XFormAlignedAnat },
          { "XFormTalairach", vtkNIFTIImageHeader::XFormTalairach },
          { "XFormMNI152", vtkNIFTIImageHeader::XFormMNI152 },
        };

      o = PyvtkNIFTIImageHeader_XFormCodeEnum_FromEnum(constants[c].value);
      if (o)
        {
        PyDict_SetItemString(d, (char *)constants[c].name, o);
        Py_DECREF(o);
        }
      }

    for (int c = 0; c < 7; c++)
      {
      typedef vtkNIFTIImageHeader::SliceCodeEnum cxx_enum_type;

      static const struct { const char *name; cxx_enum_type value; }
        constants[7] = {
          { "SliceUnknown", vtkNIFTIImageHeader::SliceUnknown },
          { "SliceSeqInc", vtkNIFTIImageHeader::SliceSeqInc },
          { "SliceSeqDec", vtkNIFTIImageHeader::SliceSeqDec },
          { "SliceAltInc", vtkNIFTIImageHeader::SliceAltInc },
          { "SliceAltDec", vtkNIFTIImageHeader::SliceAltDec },
          { "SliceAltInc2", vtkNIFTIImageHeader::SliceAltInc2 },
          { "SliceAltDec2", vtkNIFTIImageHeader::SliceAltDec2 },
        };

      o = PyvtkNIFTIImageHeader_SliceCodeEnum_FromEnum(constants[c].value);
      if (o)
        {
        PyDict_SetItemString(d, (char *)constants[c].name, o);
        Py_DECREF(o);
        }
      }

    for (int c = 0; c < 12; c++)
      {
      typedef vtkNIFTIImageHeader::UnitsXYZTEnum cxx_enum_type;

      static const struct { const char *name; cxx_enum_type value; }
        constants[12] = {
          { "UnitsUnknown", vtkNIFTIImageHeader::UnitsUnknown },
          { "UnitsMeter", vtkNIFTIImageHeader::UnitsMeter },
          { "UnitsMM", vtkNIFTIImageHeader::UnitsMM },
          { "UnitsMicron", vtkNIFTIImageHeader::UnitsMicron },
          { "UnitsSpace", vtkNIFTIImageHeader::UnitsSpace },
          { "UnitsSec", vtkNIFTIImageHeader::UnitsSec },
          { "UnitsMSec", vtkNIFTIImageHeader::UnitsMSec },
          { "UnitsUSec", vtkNIFTIImageHeader::UnitsUSec },
          { "UnitsHz", vtkNIFTIImageHeader::UnitsHz },
          { "UnitsPPM", vtkNIFTIImageHeader::UnitsPPM },
          { "UnitsRads", vtkNIFTIImageHeader::UnitsRads },
          { "UnitsTime", vtkNIFTIImageHeader::UnitsTime },
        };

      o = PyvtkNIFTIImageHeader_UnitsXYZTEnum_FromEnum(constants[c].value);
      if (o)
        {
        PyDict_SetItemString(d, (char *)constants[c].name, o);
        Py_DECREF(o);
        }
      }

    for (int c = 0; c < 16; c++)
      {
      typedef vtkNIFTIImageHeader::DataTypeEnum cxx_enum_type;

      static const struct { const char *name; cxx_enum_type value; }
        constants[16] = {
          { "TypeUInt8", vtkNIFTIImageHeader::TypeUInt8 },
          { "TypeInt16", vtkNIFTIImageHeader::TypeInt16 },
          { "TypeInt32", vtkNIFTIImageHeader::TypeInt32 },
          { "TypeFloat32", vtkNIFTIImageHeader::TypeFloat32 },
          { "TypeComplex64", vtkNIFTIImageHeader::TypeComplex64 },
          { "TypeFloat64", vtkNIFTIImageHeader::TypeFloat64 },
          { "TypeRGB24", vtkNIFTIImageHeader::TypeRGB24 },
          { "TypeInt8", vtkNIFTIImageHeader::TypeInt8 },
          { "TypeUInt16", vtkNIFTIImageHeader::TypeUInt16 },
          { "TypeUInt32", vtkNIFTIImageHeader::TypeUInt32 },
          { "TypeInt64", vtkNIFTIImageHeader::TypeInt64 },
          { "TypeUInt64", vtkNIFTIImageHeader::TypeUInt64 },
          { "TypeFloat128", vtkNIFTIImageHeader::TypeFloat128 },
          { "TypeComplex128", vtkNIFTIImageHeader::TypeComplex128 },
          { "TypeComplex256", vtkNIFTIImageHeader::TypeComplex256 },
          { "TypeRGBA32", vtkNIFTIImageHeader::TypeRGBA32 },
        };

      o = PyvtkNIFTIImageHeader_DataTypeEnum_FromEnum(constants[c].value);
      if (o)
        {
        PyDict_SetItemString(d, (char *)constants[c].name, o);
        Py_DECREF(o);
        }
      }

    for (int c = 0; c < 2; c++)
      {
      typedef vtkNIFTIImageHeader::HeaderSizeEnum cxx_enum_type;

      static const struct { const char *name; cxx_enum_type value; }
        constants[2] = {
          { "NIFTI1HeaderSize", vtkNIFTIImageHeader::NIFTI1HeaderSize },
          { "NIFTI2HeaderSize", vtkNIFTIImageHeader::NIFTI2HeaderSize },
        };

      o = PyvtkNIFTIImageHeader_HeaderSizeEnum_FromEnum(constants[c].value);
      if (o)
        {
        PyDict_SetItemString(d, (char *)constants[c].name, o);
        Py_DECREF(o);
        }
      }

    }

  return cls;
}

const char **PyvtkNIFTIImageHeader_Doc()
{
  static const char *docstring[] = {
    "vtkNIFTIImageHeader - Store NIfTI header information.\n\n",
    "Superclass: vtkObject\n\n",
    "This class stores the header of a NIfTI file in a VTK-friendly\nformat. By using this class, it is possible to specify the header\ninformation that will be stored in a file written by the\nvtkNIFTIImageWriter.  Note that the SForm and QForm orientation\ninformation in this class will be ignored by the writer if an SForm\nand QForm have been explicitly set via the writer's SetSForm and\nSetQForm methods.",
    "  Also note that all info like Dim, PixDim,\nDataType, etc. will be ignored by the writer because this information\nmust instead be taken from the vtkImageData information.  Finally,\nnote that the vtkNIFTIImageWriter will ignore the Descrip field,\nsince it has its own SetDescription method.\n\nThanks:\n\nThis class was contributed to VTK by the Calgary Image Processing and\nAnalysis Centre (CIPAC).\n\nSee ",
    "Also:\n\nvtkNIFTIImageReader, vtkNIFTIImageWriter\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkNIFTIImageHeader(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkNIFTIImageHeaderNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkNIFTIImageHeader", o) != 0)
    {
    Py_DECREF(o);
    }

}

