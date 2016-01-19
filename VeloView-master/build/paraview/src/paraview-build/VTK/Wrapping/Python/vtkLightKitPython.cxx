// python wrapper for vtkLightKit
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkLightKit.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkLightKit(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkLightKitNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkLightKit_Doc();

#ifndef DECLARED_PyvtkLightKit_LightKitType_Type
extern VTK_PYTHON_EXPORT PyTypeObject PyvtkLightKit_LightKitType_Type;
#define DECLARED_PyvtkLightKit_LightKitType_Type
#endif

PyTypeObject PyvtkLightKit_LightKitType_Type = {
  PyObject_HEAD_INIT(&PyType_Type)
  0,
  (char*)"LightKitType", // tp_name
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

PyObject *PyvtkLightKit_LightKitType_FromEnum(int val)
{
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkLightKit_LightKitType_Type);
  self->ob_ival = val;
  return (PyObject *)self;
}

#ifndef DECLARED_PyvtkLightKit_LightKitSubType_Type
extern VTK_PYTHON_EXPORT PyTypeObject PyvtkLightKit_LightKitSubType_Type;
#define DECLARED_PyvtkLightKit_LightKitSubType_Type
#endif

PyTypeObject PyvtkLightKit_LightKitSubType_Type = {
  PyObject_HEAD_INIT(&PyType_Type)
  0,
  (char*)"LightKitSubType", // tp_name
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

PyObject *PyvtkLightKit_LightKitSubType_FromEnum(int val)
{
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkLightKit_LightKitSubType_Type);
  self->ob_ival = val;
  return (PyObject *)self;
}


static PyObject *
PyvtkLightKit_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLightKit *op = static_cast<vtkLightKit *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkLightKit::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLightKit_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLightKit *op = static_cast<vtkLightKit *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkLightKit::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLightKit_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLightKit *op = static_cast<vtkLightKit *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkLightKit *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkLightKit::NewInstance());

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
PyvtkLightKit_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkLightKit *tempr = vtkLightKit::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLightKit_SetKeyLightIntensity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetKeyLightIntensity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLightKit *op = static_cast<vtkLightKit *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetKeyLightIntensity(temp0);
      }
    else
      {
      op->vtkLightKit::SetKeyLightIntensity(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLightKit_GetKeyLightIntensity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetKeyLightIntensity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLightKit *op = static_cast<vtkLightKit *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetKeyLightIntensity() :
      op->vtkLightKit::GetKeyLightIntensity());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLightKit_SetKeyToFillRatio(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetKeyToFillRatio");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLightKit *op = static_cast<vtkLightKit *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetKeyToFillRatio(temp0);
      }
    else
      {
      op->vtkLightKit::SetKeyToFillRatio(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLightKit_GetKeyToFillRatioMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetKeyToFillRatioMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLightKit *op = static_cast<vtkLightKit *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetKeyToFillRatioMinValue() :
      op->vtkLightKit::GetKeyToFillRatioMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLightKit_GetKeyToFillRatioMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetKeyToFillRatioMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLightKit *op = static_cast<vtkLightKit *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetKeyToFillRatioMaxValue() :
      op->vtkLightKit::GetKeyToFillRatioMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLightKit_GetKeyToFillRatio(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetKeyToFillRatio");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLightKit *op = static_cast<vtkLightKit *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetKeyToFillRatio() :
      op->vtkLightKit::GetKeyToFillRatio());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLightKit_SetKeyToHeadRatio(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetKeyToHeadRatio");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLightKit *op = static_cast<vtkLightKit *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetKeyToHeadRatio(temp0);
      }
    else
      {
      op->vtkLightKit::SetKeyToHeadRatio(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLightKit_GetKeyToHeadRatioMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetKeyToHeadRatioMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLightKit *op = static_cast<vtkLightKit *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetKeyToHeadRatioMinValue() :
      op->vtkLightKit::GetKeyToHeadRatioMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLightKit_GetKeyToHeadRatioMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetKeyToHeadRatioMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLightKit *op = static_cast<vtkLightKit *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetKeyToHeadRatioMaxValue() :
      op->vtkLightKit::GetKeyToHeadRatioMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLightKit_GetKeyToHeadRatio(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetKeyToHeadRatio");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLightKit *op = static_cast<vtkLightKit *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetKeyToHeadRatio() :
      op->vtkLightKit::GetKeyToHeadRatio());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLightKit_SetKeyToBackRatio(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetKeyToBackRatio");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLightKit *op = static_cast<vtkLightKit *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetKeyToBackRatio(temp0);
      }
    else
      {
      op->vtkLightKit::SetKeyToBackRatio(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLightKit_GetKeyToBackRatioMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetKeyToBackRatioMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLightKit *op = static_cast<vtkLightKit *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetKeyToBackRatioMinValue() :
      op->vtkLightKit::GetKeyToBackRatioMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLightKit_GetKeyToBackRatioMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetKeyToBackRatioMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLightKit *op = static_cast<vtkLightKit *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetKeyToBackRatioMaxValue() :
      op->vtkLightKit::GetKeyToBackRatioMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLightKit_GetKeyToBackRatio(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetKeyToBackRatio");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLightKit *op = static_cast<vtkLightKit *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetKeyToBackRatio() :
      op->vtkLightKit::GetKeyToBackRatio());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLightKit_SetKeyLightWarmth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetKeyLightWarmth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLightKit *op = static_cast<vtkLightKit *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetKeyLightWarmth(temp0);
      }
    else
      {
      op->vtkLightKit::SetKeyLightWarmth(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLightKit_GetKeyLightWarmth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetKeyLightWarmth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLightKit *op = static_cast<vtkLightKit *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetKeyLightWarmth() :
      op->vtkLightKit::GetKeyLightWarmth());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLightKit_SetFillLightWarmth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFillLightWarmth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLightKit *op = static_cast<vtkLightKit *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetFillLightWarmth(temp0);
      }
    else
      {
      op->vtkLightKit::SetFillLightWarmth(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLightKit_GetFillLightWarmth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFillLightWarmth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLightKit *op = static_cast<vtkLightKit *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetFillLightWarmth() :
      op->vtkLightKit::GetFillLightWarmth());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLightKit_SetHeadLightWarmth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHeadLightWarmth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLightKit *op = static_cast<vtkLightKit *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetHeadLightWarmth(temp0);
      }
    else
      {
      op->vtkLightKit::SetHeadLightWarmth(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLightKit_GetHeadLightWarmth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHeadLightWarmth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLightKit *op = static_cast<vtkLightKit *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetHeadLightWarmth() :
      op->vtkLightKit::GetHeadLightWarmth());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLightKit_SetBackLightWarmth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBackLightWarmth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLightKit *op = static_cast<vtkLightKit *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetBackLightWarmth(temp0);
      }
    else
      {
      op->vtkLightKit::SetBackLightWarmth(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLightKit_GetBackLightWarmth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBackLightWarmth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLightKit *op = static_cast<vtkLightKit *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetBackLightWarmth() :
      op->vtkLightKit::GetBackLightWarmth());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLightKit_GetKeyLightColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetKeyLightColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLightKit *op = static_cast<vtkLightKit *>(vp);

  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetKeyLightColor() :
      op->vtkLightKit::GetKeyLightColor());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkLightKit_GetFillLightColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFillLightColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLightKit *op = static_cast<vtkLightKit *>(vp);

  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetFillLightColor() :
      op->vtkLightKit::GetFillLightColor());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkLightKit_GetHeadLightColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHeadLightColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLightKit *op = static_cast<vtkLightKit *>(vp);

  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetHeadLightColor() :
      op->vtkLightKit::GetHeadLightColor());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkLightKit_GetBackLightColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBackLightColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLightKit *op = static_cast<vtkLightKit *>(vp);

  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetBackLightColor() :
      op->vtkLightKit::GetBackLightColor());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkLightKit_MaintainLuminanceOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MaintainLuminanceOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLightKit *op = static_cast<vtkLightKit *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->MaintainLuminanceOn();
      }
    else
      {
      op->vtkLightKit::MaintainLuminanceOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLightKit_MaintainLuminanceOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MaintainLuminanceOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLightKit *op = static_cast<vtkLightKit *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->MaintainLuminanceOff();
      }
    else
      {
      op->vtkLightKit::MaintainLuminanceOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLightKit_GetMaintainLuminance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaintainLuminance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLightKit *op = static_cast<vtkLightKit *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetMaintainLuminance() :
      op->vtkLightKit::GetMaintainLuminance());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLightKit_SetMaintainLuminance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaintainLuminance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLightKit *op = static_cast<vtkLightKit *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetMaintainLuminance(temp0);
      }
    else
      {
      op->vtkLightKit::SetMaintainLuminance(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLightKit_SetKeyLightAngle_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetKeyLightAngle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLightKit *op = static_cast<vtkLightKit *>(vp);

  double temp0;
  double temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetKeyLightAngle(temp0, temp1);
      }
    else
      {
      op->vtkLightKit::SetKeyLightAngle(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkLightKit_SetKeyLightAngle_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetKeyLightAngle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLightKit *op = static_cast<vtkLightKit *>(vp);

  double temp0[2];
  double save0[2];
  const int size0 = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    if (ap.IsBound())
      {
      op->SetKeyLightAngle(temp0);
      }
    else
      {
      op->vtkLightKit::SetKeyLightAngle(temp0);
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
PyvtkLightKit_SetKeyLightAngle(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkLightKit_SetKeyLightAngle_s1(self, args);
    case 1:
      return PyvtkLightKit_SetKeyLightAngle_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetKeyLightAngle");
  return NULL;
}



static PyObject *
PyvtkLightKit_SetKeyLightElevation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetKeyLightElevation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLightKit *op = static_cast<vtkLightKit *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetKeyLightElevation(temp0);
      }
    else
      {
      op->vtkLightKit::SetKeyLightElevation(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLightKit_SetKeyLightAzimuth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetKeyLightAzimuth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLightKit *op = static_cast<vtkLightKit *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetKeyLightAzimuth(temp0);
      }
    else
      {
      op->vtkLightKit::SetKeyLightAzimuth(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLightKit_GetKeyLightAngle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetKeyLightAngle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLightKit *op = static_cast<vtkLightKit *>(vp);

  int sizer = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetKeyLightAngle() :
      op->vtkLightKit::GetKeyLightAngle());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkLightKit_GetKeyLightElevation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetKeyLightElevation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLightKit *op = static_cast<vtkLightKit *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetKeyLightElevation() :
      op->vtkLightKit::GetKeyLightElevation());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLightKit_GetKeyLightAzimuth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetKeyLightAzimuth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLightKit *op = static_cast<vtkLightKit *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetKeyLightAzimuth() :
      op->vtkLightKit::GetKeyLightAzimuth());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLightKit_SetFillLightAngle_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFillLightAngle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLightKit *op = static_cast<vtkLightKit *>(vp);

  double temp0;
  double temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetFillLightAngle(temp0, temp1);
      }
    else
      {
      op->vtkLightKit::SetFillLightAngle(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkLightKit_SetFillLightAngle_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFillLightAngle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLightKit *op = static_cast<vtkLightKit *>(vp);

  double temp0[2];
  double save0[2];
  const int size0 = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    if (ap.IsBound())
      {
      op->SetFillLightAngle(temp0);
      }
    else
      {
      op->vtkLightKit::SetFillLightAngle(temp0);
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
PyvtkLightKit_SetFillLightAngle(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkLightKit_SetFillLightAngle_s1(self, args);
    case 1:
      return PyvtkLightKit_SetFillLightAngle_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetFillLightAngle");
  return NULL;
}



static PyObject *
PyvtkLightKit_SetFillLightElevation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFillLightElevation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLightKit *op = static_cast<vtkLightKit *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetFillLightElevation(temp0);
      }
    else
      {
      op->vtkLightKit::SetFillLightElevation(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLightKit_SetFillLightAzimuth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFillLightAzimuth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLightKit *op = static_cast<vtkLightKit *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetFillLightAzimuth(temp0);
      }
    else
      {
      op->vtkLightKit::SetFillLightAzimuth(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLightKit_GetFillLightAngle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFillLightAngle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLightKit *op = static_cast<vtkLightKit *>(vp);

  int sizer = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetFillLightAngle() :
      op->vtkLightKit::GetFillLightAngle());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkLightKit_GetFillLightElevation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFillLightElevation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLightKit *op = static_cast<vtkLightKit *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetFillLightElevation() :
      op->vtkLightKit::GetFillLightElevation());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLightKit_GetFillLightAzimuth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFillLightAzimuth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLightKit *op = static_cast<vtkLightKit *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetFillLightAzimuth() :
      op->vtkLightKit::GetFillLightAzimuth());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLightKit_SetBackLightAngle_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBackLightAngle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLightKit *op = static_cast<vtkLightKit *>(vp);

  double temp0;
  double temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetBackLightAngle(temp0, temp1);
      }
    else
      {
      op->vtkLightKit::SetBackLightAngle(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkLightKit_SetBackLightAngle_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBackLightAngle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLightKit *op = static_cast<vtkLightKit *>(vp);

  double temp0[2];
  double save0[2];
  const int size0 = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    if (ap.IsBound())
      {
      op->SetBackLightAngle(temp0);
      }
    else
      {
      op->vtkLightKit::SetBackLightAngle(temp0);
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
PyvtkLightKit_SetBackLightAngle(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkLightKit_SetBackLightAngle_s1(self, args);
    case 1:
      return PyvtkLightKit_SetBackLightAngle_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetBackLightAngle");
  return NULL;
}



static PyObject *
PyvtkLightKit_SetBackLightElevation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBackLightElevation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLightKit *op = static_cast<vtkLightKit *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetBackLightElevation(temp0);
      }
    else
      {
      op->vtkLightKit::SetBackLightElevation(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLightKit_SetBackLightAzimuth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBackLightAzimuth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLightKit *op = static_cast<vtkLightKit *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetBackLightAzimuth(temp0);
      }
    else
      {
      op->vtkLightKit::SetBackLightAzimuth(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLightKit_GetBackLightAngle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBackLightAngle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLightKit *op = static_cast<vtkLightKit *>(vp);

  int sizer = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetBackLightAngle() :
      op->vtkLightKit::GetBackLightAngle());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkLightKit_GetBackLightElevation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBackLightElevation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLightKit *op = static_cast<vtkLightKit *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetBackLightElevation() :
      op->vtkLightKit::GetBackLightElevation());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLightKit_GetBackLightAzimuth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBackLightAzimuth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLightKit *op = static_cast<vtkLightKit *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetBackLightAzimuth() :
      op->vtkLightKit::GetBackLightAzimuth());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLightKit_AddLightsToRenderer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddLightsToRenderer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLightKit *op = static_cast<vtkLightKit *>(vp);

  vtkRenderer *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkRenderer"))
    {
    if (ap.IsBound())
      {
      op->AddLightsToRenderer(temp0);
      }
    else
      {
      op->vtkLightKit::AddLightsToRenderer(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLightKit_RemoveLightsFromRenderer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveLightsFromRenderer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLightKit *op = static_cast<vtkLightKit *>(vp);

  vtkRenderer *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkRenderer"))
    {
    if (ap.IsBound())
      {
      op->RemoveLightsFromRenderer(temp0);
      }
    else
      {
      op->vtkLightKit::RemoveLightsFromRenderer(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLightKit_DeepCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeepCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLightKit *op = static_cast<vtkLightKit *>(vp);

  vtkLightKit *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkLightKit"))
    {
    if (ap.IsBound())
      {
      op->DeepCopy(temp0);
      }
    else
      {
      op->vtkLightKit::DeepCopy(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLightKit_Modified(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Modified");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLightKit *op = static_cast<vtkLightKit *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Modified();
      }
    else
      {
      op->vtkLightKit::Modified();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLightKit_Update(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Update");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLightKit *op = static_cast<vtkLightKit *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Update();
      }
    else
      {
      op->vtkLightKit::Update();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLightKit_GetStringFromType(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetStringFromType");

  int temp0;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    const char *tempr = vtkLightKit::GetStringFromType(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLightKit_GetStringFromSubType(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetStringFromSubType");

  int temp0;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    const char *tempr = vtkLightKit::GetStringFromSubType(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLightKit_GetShortStringFromSubType(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetShortStringFromSubType");

  int temp0;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    const char *tempr = vtkLightKit::GetShortStringFromSubType(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLightKit_GetSubType(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetSubType");

  typedef vtkLightKit::LightKitType temp0_type;
  temp0_type temp0;
  int temp1;
  PyObject *result = NULL;

  if (ap.CheckArgCount(2) &&
      ap.GetEnumValue(temp0, &PyvtkLightKit_LightKitType_Type) &&
      ap.GetValue(temp1))
    {
    typedef vtkLightKit::LightKitSubType tempr_type;
  tempr_type tempr = vtkLightKit::GetSubType(temp0, temp1);

    if (!ap.ErrorOccurred())
      {
      result = PyvtkLightKit_LightKitSubType_FromEnum(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkLightKit_Methods[] = {
  {(char*)"GetClassName", PyvtkLightKit_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkLightKit_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkLightKit_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkLightKit\nC++: vtkLightKit *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkLightKit_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkLightKit\nC++: vtkLightKit *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetKeyLightIntensity", PyvtkLightKit_SetKeyLightIntensity, METH_VARARGS,
   (char*)"V.SetKeyLightIntensity(float)\nC++: void SetKeyLightIntensity(double a)\n\nSet/Get the intensity of the key light.  The key light is the\nbrightest light in the scene.  The intensities of the other two\nlights are ratios of the key light's intensity.\n"},
  {(char*)"GetKeyLightIntensity", PyvtkLightKit_GetKeyLightIntensity, METH_VARARGS,
   (char*)"V.GetKeyLightIntensity() -> float\nC++: double GetKeyLightIntensity()\n\nSet/Get the intensity of the key light.  The key light is the\nbrightest light in the scene.  The intensities of the other two\nlights are ratios of the key light's intensity.\n"},
  {(char*)"SetKeyToFillRatio", PyvtkLightKit_SetKeyToFillRatio, METH_VARARGS,
   (char*)"V.SetKeyToFillRatio(float)\nC++: void SetKeyToFillRatio(double)\n\nSet/Get the key-to-fill ratio.  This ratio controls how bright\nthe fill light is compared to the key light: larger values\ncorrespond to a dimmer fill light.  The purpose of the fill light\nis to light parts of the object not lit by the key light, while\nstill maintaining constrast.  This type of lighting may\ncorrespond to indirect illumination from the key light, bounced\noff a wall, floor, or other object.  The fill light should never\nbe brighter than the key light:  a good range for the key-to-fill\nratio is between 2 and 10.\n"},
  {(char*)"GetKeyToFillRatioMinValue", PyvtkLightKit_GetKeyToFillRatioMinValue, METH_VARARGS,
   (char*)"V.GetKeyToFillRatioMinValue() -> float\nC++: double GetKeyToFillRatioMinValue()\n\nSet/Get the key-to-fill ratio.  This ratio controls how bright\nthe fill light is compared to the key light: larger values\ncorrespond to a dimmer fill light.  The purpose of the fill light\nis to light parts of the object not lit by the key light, while\nstill maintaining constrast.  This type of lighting may\ncorrespond to indirect illumination from the key light, bounced\noff a wall, floor, or other object.  The fill light should never\nbe brighter than the key light:  a good range for the key-to-fill\nratio is between 2 and 10.\n"},
  {(char*)"GetKeyToFillRatioMaxValue", PyvtkLightKit_GetKeyToFillRatioMaxValue, METH_VARARGS,
   (char*)"V.GetKeyToFillRatioMaxValue() -> float\nC++: double GetKeyToFillRatioMaxValue()\n\nSet/Get the key-to-fill ratio.  This ratio controls how bright\nthe fill light is compared to the key light: larger values\ncorrespond to a dimmer fill light.  The purpose of the fill light\nis to light parts of the object not lit by the key light, while\nstill maintaining constrast.  This type of lighting may\ncorrespond to indirect illumination from the key light, bounced\noff a wall, floor, or other object.  The fill light should never\nbe brighter than the key light:  a good range for the key-to-fill\nratio is between 2 and 10.\n"},
  {(char*)"GetKeyToFillRatio", PyvtkLightKit_GetKeyToFillRatio, METH_VARARGS,
   (char*)"V.GetKeyToFillRatio() -> float\nC++: double GetKeyToFillRatio()\n\nSet/Get the key-to-fill ratio.  This ratio controls how bright\nthe fill light is compared to the key light: larger values\ncorrespond to a dimmer fill light.  The purpose of the fill light\nis to light parts of the object not lit by the key light, while\nstill maintaining constrast.  This type of lighting may\ncorrespond to indirect illumination from the key light, bounced\noff a wall, floor, or other object.  The fill light should never\nbe brighter than the key light:  a good range for the key-to-fill\nratio is between 2 and 10.\n"},
  {(char*)"SetKeyToHeadRatio", PyvtkLightKit_SetKeyToHeadRatio, METH_VARARGS,
   (char*)"V.SetKeyToHeadRatio(float)\nC++: void SetKeyToHeadRatio(double)\n\nSet/Get the key-to-headlight ratio.  Similar to the key-to-fill\nratio, this ratio controls how bright the headlight light is\ncompared to the key light: larger values correspond to a dimmer\nheadlight light.  The headlight is special kind of fill light,\nlighting only the parts of the object that the camera can see. As\nsuch, a headlight tends to reduce the contrast of a scene.  It\ncan be used to fill in \"shadows\" of the object missed by the key\nand fill lights.  The headlight should always be significantly\ndimmer than the key light:  ratios of 2 to 15 are typical.\n"},
  {(char*)"GetKeyToHeadRatioMinValue", PyvtkLightKit_GetKeyToHeadRatioMinValue, METH_VARARGS,
   (char*)"V.GetKeyToHeadRatioMinValue() -> float\nC++: double GetKeyToHeadRatioMinValue()\n\nSet/Get the key-to-headlight ratio.  Similar to the key-to-fill\nratio, this ratio controls how bright the headlight light is\ncompared to the key light: larger values correspond to a dimmer\nheadlight light.  The headlight is special kind of fill light,\nlighting only the parts of the object that the camera can see. As\nsuch, a headlight tends to reduce the contrast of a scene.  It\ncan be used to fill in \"shadows\" of the object missed by the key\nand fill lights.  The headlight should always be significantly\ndimmer than the key light:  ratios of 2 to 15 are typical.\n"},
  {(char*)"GetKeyToHeadRatioMaxValue", PyvtkLightKit_GetKeyToHeadRatioMaxValue, METH_VARARGS,
   (char*)"V.GetKeyToHeadRatioMaxValue() -> float\nC++: double GetKeyToHeadRatioMaxValue()\n\nSet/Get the key-to-headlight ratio.  Similar to the key-to-fill\nratio, this ratio controls how bright the headlight light is\ncompared to the key light: larger values correspond to a dimmer\nheadlight light.  The headlight is special kind of fill light,\nlighting only the parts of the object that the camera can see. As\nsuch, a headlight tends to reduce the contrast of a scene.  It\ncan be used to fill in \"shadows\" of the object missed by the key\nand fill lights.  The headlight should always be significantly\ndimmer than the key light:  ratios of 2 to 15 are typical.\n"},
  {(char*)"GetKeyToHeadRatio", PyvtkLightKit_GetKeyToHeadRatio, METH_VARARGS,
   (char*)"V.GetKeyToHeadRatio() -> float\nC++: double GetKeyToHeadRatio()\n\nSet/Get the key-to-headlight ratio.  Similar to the key-to-fill\nratio, this ratio controls how bright the headlight light is\ncompared to the key light: larger values correspond to a dimmer\nheadlight light.  The headlight is special kind of fill light,\nlighting only the parts of the object that the camera can see. As\nsuch, a headlight tends to reduce the contrast of a scene.  It\ncan be used to fill in \"shadows\" of the object missed by the key\nand fill lights.  The headlight should always be significantly\ndimmer than the key light:  ratios of 2 to 15 are typical.\n"},
  {(char*)"SetKeyToBackRatio", PyvtkLightKit_SetKeyToBackRatio, METH_VARARGS,
   (char*)"V.SetKeyToBackRatio(float)\nC++: void SetKeyToBackRatio(double)\n\nSet/Get the key-to-back light ratio.  This ratio controls how\nbright the back lights are compared to the key light: larger\nvalues correspond to dimmer back lights.  The back lights fill in\nthe remaining high-contrast regions behind the object. Values\nbetween 2 and 10 are good.\n"},
  {(char*)"GetKeyToBackRatioMinValue", PyvtkLightKit_GetKeyToBackRatioMinValue, METH_VARARGS,
   (char*)"V.GetKeyToBackRatioMinValue() -> float\nC++: double GetKeyToBackRatioMinValue()\n\nSet/Get the key-to-back light ratio.  This ratio controls how\nbright the back lights are compared to the key light: larger\nvalues correspond to dimmer back lights.  The back lights fill in\nthe remaining high-contrast regions behind the object. Values\nbetween 2 and 10 are good.\n"},
  {(char*)"GetKeyToBackRatioMaxValue", PyvtkLightKit_GetKeyToBackRatioMaxValue, METH_VARARGS,
   (char*)"V.GetKeyToBackRatioMaxValue() -> float\nC++: double GetKeyToBackRatioMaxValue()\n\nSet/Get the key-to-back light ratio.  This ratio controls how\nbright the back lights are compared to the key light: larger\nvalues correspond to dimmer back lights.  The back lights fill in\nthe remaining high-contrast regions behind the object. Values\nbetween 2 and 10 are good.\n"},
  {(char*)"GetKeyToBackRatio", PyvtkLightKit_GetKeyToBackRatio, METH_VARARGS,
   (char*)"V.GetKeyToBackRatio() -> float\nC++: double GetKeyToBackRatio()\n\nSet/Get the key-to-back light ratio.  This ratio controls how\nbright the back lights are compared to the key light: larger\nvalues correspond to dimmer back lights.  The back lights fill in\nthe remaining high-contrast regions behind the object. Values\nbetween 2 and 10 are good.\n"},
  {(char*)"SetKeyLightWarmth", PyvtkLightKit_SetKeyLightWarmth, METH_VARARGS,
   (char*)"V.SetKeyLightWarmth(float)\nC++: void SetKeyLightWarmth(double a)\n\nSet the warmth of each the lights.  Warmth is a parameter that\nvaries from 0 to 1, where 0 is \"cold\" (looks icy or lit by a very\nblue sky), 1 is \"warm\" (the red of a very red sunset, or the\nembers of a campfire), and 0.5 is a neutral white.  The warmth\nscale is non-linear. Warmth values close to 0.5 are subtly\n\"warmer\" or \"cooler,\" much like a warmer tungsten incandescent\nbulb, a cooler halogen, or daylight (cooler still).  Moving\nfurther away from 0.5, colors become more quickly varying towards\nblues and reds.  With regards to aesthetics, extremes of warmth\nshould be used sparingly.\n"},
  {(char*)"GetKeyLightWarmth", PyvtkLightKit_GetKeyLightWarmth, METH_VARARGS,
   (char*)"V.GetKeyLightWarmth() -> float\nC++: double GetKeyLightWarmth()\n\nSet the warmth of each the lights.  Warmth is a parameter that\nvaries from 0 to 1, where 0 is \"cold\" (looks icy or lit by a very\nblue sky), 1 is \"warm\" (the red of a very red sunset, or the\nembers of a campfire), and 0.5 is a neutral white.  The warmth\nscale is non-linear. Warmth values close to 0.5 are subtly\n\"warmer\" or \"cooler,\" much like a warmer tungsten incandescent\nbulb, a cooler halogen, or daylight (cooler still).  Moving\nfurther away from 0.5, colors become more quickly varying towards\nblues and reds.  With regards to aesthetics, extremes of warmth\nshould be used sparingly.\n"},
  {(char*)"SetFillLightWarmth", PyvtkLightKit_SetFillLightWarmth, METH_VARARGS,
   (char*)"V.SetFillLightWarmth(float)\nC++: void SetFillLightWarmth(double a)\n\n"},
  {(char*)"GetFillLightWarmth", PyvtkLightKit_GetFillLightWarmth, METH_VARARGS,
   (char*)"V.GetFillLightWarmth() -> float\nC++: double GetFillLightWarmth()\n\n"},
  {(char*)"SetHeadLightWarmth", PyvtkLightKit_SetHeadLightWarmth, METH_VARARGS,
   (char*)"V.SetHeadLightWarmth(float)\nC++: void SetHeadLightWarmth(double a)\n\n"},
  {(char*)"GetHeadLightWarmth", PyvtkLightKit_GetHeadLightWarmth, METH_VARARGS,
   (char*)"V.GetHeadLightWarmth() -> float\nC++: double GetHeadLightWarmth()\n\n"},
  {(char*)"SetBackLightWarmth", PyvtkLightKit_SetBackLightWarmth, METH_VARARGS,
   (char*)"V.SetBackLightWarmth(float)\nC++: void SetBackLightWarmth(double a)\n\n"},
  {(char*)"GetBackLightWarmth", PyvtkLightKit_GetBackLightWarmth, METH_VARARGS,
   (char*)"V.GetBackLightWarmth() -> float\nC++: double GetBackLightWarmth()\n\n"},
  {(char*)"GetKeyLightColor", PyvtkLightKit_GetKeyLightColor, METH_VARARGS,
   (char*)"V.GetKeyLightColor() -> (float, float, float)\nC++: double *GetKeyLightColor()\n\nReturns the floating-point RGB values of each of the light's\ncolor.\n"},
  {(char*)"GetFillLightColor", PyvtkLightKit_GetFillLightColor, METH_VARARGS,
   (char*)"V.GetFillLightColor() -> (float, float, float)\nC++: double *GetFillLightColor()\n\nReturns the floating-point RGB values of each of the light's\ncolor.\n"},
  {(char*)"GetHeadLightColor", PyvtkLightKit_GetHeadLightColor, METH_VARARGS,
   (char*)"V.GetHeadLightColor() -> (float, float, float)\nC++: double *GetHeadLightColor()\n\nReturns the floating-point RGB values of each of the light's\ncolor.\n"},
  {(char*)"GetBackLightColor", PyvtkLightKit_GetBackLightColor, METH_VARARGS,
   (char*)"V.GetBackLightColor() -> (float, float, float)\nC++: double *GetBackLightColor()\n\nReturns the floating-point RGB values of each of the light's\ncolor.\n"},
  {(char*)"MaintainLuminanceOn", PyvtkLightKit_MaintainLuminanceOn, METH_VARARGS,
   (char*)"V.MaintainLuminanceOn()\nC++: void MaintainLuminanceOn()\n\nIf MaintainLuminance is set, the LightKit will attempt to\nmaintain the apparent intensity of lights based on their\nperceptual brightnesses. By default, MaintainLuminance is off.\n"},
  {(char*)"MaintainLuminanceOff", PyvtkLightKit_MaintainLuminanceOff, METH_VARARGS,
   (char*)"V.MaintainLuminanceOff()\nC++: void MaintainLuminanceOff()\n\nIf MaintainLuminance is set, the LightKit will attempt to\nmaintain the apparent intensity of lights based on their\nperceptual brightnesses. By default, MaintainLuminance is off.\n"},
  {(char*)"GetMaintainLuminance", PyvtkLightKit_GetMaintainLuminance, METH_VARARGS,
   (char*)"V.GetMaintainLuminance() -> int\nC++: int GetMaintainLuminance()\n\nIf MaintainLuminance is set, the LightKit will attempt to\nmaintain the apparent intensity of lights based on their\nperceptual brightnesses. By default, MaintainLuminance is off.\n"},
  {(char*)"SetMaintainLuminance", PyvtkLightKit_SetMaintainLuminance, METH_VARARGS,
   (char*)"V.SetMaintainLuminance(int)\nC++: void SetMaintainLuminance(int a)\n\nIf MaintainLuminance is set, the LightKit will attempt to\nmaintain the apparent intensity of lights based on their\nperceptual brightnesses. By default, MaintainLuminance is off.\n"},
  {(char*)"SetKeyLightAngle", PyvtkLightKit_SetKeyLightAngle, METH_VARARGS,
   (char*)"V.SetKeyLightAngle(float, float)\nC++: void SetKeyLightAngle(double elevation, double azimuth)\nV.SetKeyLightAngle([float, float])\nC++: void SetKeyLightAngle(double angle[2])\n\nGet/Set the position of the key, fill, and back lights using\nangular methods.  Elevation corresponds to latitude, azimuth to\nlongitude.  It is recommended that the key light always be on the\nviewer's side of the object and above the object, while the fill\nlight generally lights the part of the object not lit by the fill\nlight.  The headlight, which is always located at the viewer, can\nthen be used to reduce the contrast in the image. There are a\npair of back lights.  They are located at the same elevation and\nat opposing azimuths (ie, one to the left, and one to the right).\n They are generally set at the equator (elevation = 0), and at\napproximately 120 degrees (lighting from each side and behind).\n"},
  {(char*)"SetKeyLightElevation", PyvtkLightKit_SetKeyLightElevation, METH_VARARGS,
   (char*)"V.SetKeyLightElevation(float)\nC++: void SetKeyLightElevation(double x)\n\n"},
  {(char*)"SetKeyLightAzimuth", PyvtkLightKit_SetKeyLightAzimuth, METH_VARARGS,
   (char*)"V.SetKeyLightAzimuth(float)\nC++: void SetKeyLightAzimuth(double x)\n\n"},
  {(char*)"GetKeyLightAngle", PyvtkLightKit_GetKeyLightAngle, METH_VARARGS,
   (char*)"V.GetKeyLightAngle() -> (float, float)\nC++: double *GetKeyLightAngle()\n\n"},
  {(char*)"GetKeyLightElevation", PyvtkLightKit_GetKeyLightElevation, METH_VARARGS,
   (char*)"V.GetKeyLightElevation() -> float\nC++: double GetKeyLightElevation()\n\n"},
  {(char*)"GetKeyLightAzimuth", PyvtkLightKit_GetKeyLightAzimuth, METH_VARARGS,
   (char*)"V.GetKeyLightAzimuth() -> float\nC++: double GetKeyLightAzimuth()\n\n"},
  {(char*)"SetFillLightAngle", PyvtkLightKit_SetFillLightAngle, METH_VARARGS,
   (char*)"V.SetFillLightAngle(float, float)\nC++: void SetFillLightAngle(double elevation, double azimuth)\nV.SetFillLightAngle([float, float])\nC++: void SetFillLightAngle(double angle[2])\n\n"},
  {(char*)"SetFillLightElevation", PyvtkLightKit_SetFillLightElevation, METH_VARARGS,
   (char*)"V.SetFillLightElevation(float)\nC++: void SetFillLightElevation(double x)\n\n"},
  {(char*)"SetFillLightAzimuth", PyvtkLightKit_SetFillLightAzimuth, METH_VARARGS,
   (char*)"V.SetFillLightAzimuth(float)\nC++: void SetFillLightAzimuth(double x)\n\n"},
  {(char*)"GetFillLightAngle", PyvtkLightKit_GetFillLightAngle, METH_VARARGS,
   (char*)"V.GetFillLightAngle() -> (float, float)\nC++: double *GetFillLightAngle()\n\n"},
  {(char*)"GetFillLightElevation", PyvtkLightKit_GetFillLightElevation, METH_VARARGS,
   (char*)"V.GetFillLightElevation() -> float\nC++: double GetFillLightElevation()\n\n"},
  {(char*)"GetFillLightAzimuth", PyvtkLightKit_GetFillLightAzimuth, METH_VARARGS,
   (char*)"V.GetFillLightAzimuth() -> float\nC++: double GetFillLightAzimuth()\n\n"},
  {(char*)"SetBackLightAngle", PyvtkLightKit_SetBackLightAngle, METH_VARARGS,
   (char*)"V.SetBackLightAngle(float, float)\nC++: void SetBackLightAngle(double elevation, double azimuth)\nV.SetBackLightAngle([float, float])\nC++: void SetBackLightAngle(double angle[2])\n\n"},
  {(char*)"SetBackLightElevation", PyvtkLightKit_SetBackLightElevation, METH_VARARGS,
   (char*)"V.SetBackLightElevation(float)\nC++: void SetBackLightElevation(double x)\n\n"},
  {(char*)"SetBackLightAzimuth", PyvtkLightKit_SetBackLightAzimuth, METH_VARARGS,
   (char*)"V.SetBackLightAzimuth(float)\nC++: void SetBackLightAzimuth(double x)\n\n"},
  {(char*)"GetBackLightAngle", PyvtkLightKit_GetBackLightAngle, METH_VARARGS,
   (char*)"V.GetBackLightAngle() -> (float, float)\nC++: double *GetBackLightAngle()\n\n"},
  {(char*)"GetBackLightElevation", PyvtkLightKit_GetBackLightElevation, METH_VARARGS,
   (char*)"V.GetBackLightElevation() -> float\nC++: double GetBackLightElevation()\n\n"},
  {(char*)"GetBackLightAzimuth", PyvtkLightKit_GetBackLightAzimuth, METH_VARARGS,
   (char*)"V.GetBackLightAzimuth() -> float\nC++: double GetBackLightAzimuth()\n\n"},
  {(char*)"AddLightsToRenderer", PyvtkLightKit_AddLightsToRenderer, METH_VARARGS,
   (char*)"V.AddLightsToRenderer(vtkRenderer)\nC++: void AddLightsToRenderer(vtkRenderer *renderer)\n\nAdd lights to, or remove lights from, a renderer. Lights may be\nadded to more than one renderer, if desired.\n"},
  {(char*)"RemoveLightsFromRenderer", PyvtkLightKit_RemoveLightsFromRenderer, METH_VARARGS,
   (char*)"V.RemoveLightsFromRenderer(vtkRenderer)\nC++: void RemoveLightsFromRenderer(vtkRenderer *renderer)\n\nAdd lights to, or remove lights from, a renderer. Lights may be\nadded to more than one renderer, if desired.\n"},
  {(char*)"DeepCopy", PyvtkLightKit_DeepCopy, METH_VARARGS,
   (char*)"V.DeepCopy(vtkLightKit)\nC++: void DeepCopy(vtkLightKit *kit)\n\n"},
  {(char*)"Modified", PyvtkLightKit_Modified, METH_VARARGS,
   (char*)"V.Modified()\nC++: void Modified()\n\n"},
  {(char*)"Update", PyvtkLightKit_Update, METH_VARARGS,
   (char*)"V.Update()\nC++: void Update()\n\n"},
  {(char*)"GetStringFromType", PyvtkLightKit_GetStringFromType, METH_VARARGS | METH_STATIC,
   (char*)"V.GetStringFromType(int) -> string\nC++: static const char *GetStringFromType(int type)\n\nHelper method to go from a enum type to a string type\n"},
  {(char*)"GetStringFromSubType", PyvtkLightKit_GetStringFromSubType, METH_VARARGS | METH_STATIC,
   (char*)"V.GetStringFromSubType(int) -> string\nC++: static const char *GetStringFromSubType(int type)\n\nHelper method to go from a enum subtype to a string subtype\n"},
  {(char*)"GetShortStringFromSubType", PyvtkLightKit_GetShortStringFromSubType, METH_VARARGS | METH_STATIC,
   (char*)"V.GetShortStringFromSubType(int) -> string\nC++: static const char *GetShortStringFromSubType(int subtype)\n\nHelper method to go from a enum subtype to a string subtype The\ndifference from GetStringFromSubType is that it returns a shorter\nstrings (useful for GUI with minimun space)\n"},
  {(char*)"GetSubType", PyvtkLightKit_GetSubType, METH_VARARGS | METH_STATIC,
   (char*)"V.GetSubType(, int) ->\nC++: static LightKitSubType GetSubType(LightKitType type, int i)\n\nReturn the possible subtype from a given type. You have to pass\nin a number i [0,3] no check is done.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkLightKit_StaticNew()
{
  return vtkLightKit::New();
}

PyObject *PyVTKClass_vtkLightKitNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkLightKit_StaticNew,
    PyvtkLightKit_Methods,
    "vtkLightKit", modulename,
    NULL, NULL,
    PyvtkLightKit_Doc(),
    PyVTKClass_vtkObjectNew(modulename));

  if (cls)
    {
    PyObject *d = PyVTKClass_GetDict(cls);
    PyObject *o;

    PyType_Ready(&PyvtkLightKit_LightKitType_Type);
    PyvtkLightKit_LightKitType_Type.tp_new = NULL;

    o = (PyObject *)&PyvtkLightKit_LightKitType_Type;
    if (o && PyDict_SetItemString(d, (char *)"LightKitType", o) != 0)
      {
      Py_DECREF(o);
      }

    PyType_Ready(&PyvtkLightKit_LightKitSubType_Type);
    PyvtkLightKit_LightKitSubType_Type.tp_new = NULL;

    o = (PyObject *)&PyvtkLightKit_LightKitSubType_Type;
    if (o && PyDict_SetItemString(d, (char *)"LightKitSubType", o) != 0)
      {
      Py_DECREF(o);
      }

    for (int c = 0; c < 4; c++)
      {
      typedef vtkLightKit::LightKitType cxx_enum_type;

      static const struct { const char *name; cxx_enum_type value; }
        constants[4] = {
          { "TKeyLight", vtkLightKit::TKeyLight },
          { "TFillLight", vtkLightKit::TFillLight },
          { "TBackLight", vtkLightKit::TBackLight },
          { "THeadLight", vtkLightKit::THeadLight },
        };

      o = PyvtkLightKit_LightKitType_FromEnum(constants[c].value);
      if (o)
        {
        PyDict_SetItemString(d, (char *)constants[c].name, o);
        Py_DECREF(o);
        }
      }

    for (int c = 0; c < 7; c++)
      {
      typedef vtkLightKit::LightKitSubType cxx_enum_type;

      static const struct { const char *name; cxx_enum_type value; }
        constants[7] = {
          { "Warmth", vtkLightKit::Warmth },
          { "Intensity", vtkLightKit::Intensity },
          { "Elevation", vtkLightKit::Elevation },
          { "Azimuth", vtkLightKit::Azimuth },
          { "KFRatio", vtkLightKit::KFRatio },
          { "KBRatio", vtkLightKit::KBRatio },
          { "KHRatio", vtkLightKit::KHRatio },
        };

      o = PyvtkLightKit_LightKitSubType_FromEnum(constants[c].value);
      if (o)
        {
        PyDict_SetItemString(d, (char *)constants[c].name, o);
        Py_DECREF(o);
        }
      }

    }

  return cls;
}

const char **PyvtkLightKit_Doc()
{
  static const char *docstring[] = {
    "vtkLightKit - a simple but quality lighting kit\n\n",
    "Superclass: vtkObject\n\n",
    "vtkLightKit is designed to make general purpose lighting of vtk\nscenes simple, flexible, and attractive (or at least not horribly\nugly without significant effort).  Use a LightKit when you want more\ncontrol over your lighting than you can get with the default vtk\nlight, which is a headlight located at the camera. (HeadLights are\nvery simple to use, but they don't show the shape of objects very\nwel",
    "l, don't give a good sense of \"up\" and \"down\", and don't evenly\nlight the object.)\n\nA LightKit consists of three lights, a key light, a fill light, and a\nheadlight.  The main light is the key light.  It is usually\npositioned so that it appears like an overhead light (like the sun,\nor a ceiling light).  It is generally positioned to shine down on the\nscene from about a 45 degree angle vertically an",
    "d at least a little\noffset side to side.  The key light usually at least about twice as\nbright as the total of all other lights in the scene to provide good\nmodeling of object features.\n\nThe other lights in the kit (the fill light, headlight, and a pair of\nback lights) are weaker sources that provide extra illumination to\nfill in the spots that the key light misses.  The fill light is\nusually posi",
    "tioned across from or opposite from the key light (though\nstill on the same side of the object as the camera) in order to\nsimulate diffuse reflections from other objects in the scene.  The\nheadlight, always located at the position of the camera, reduces the\ncontrast between areas lit by the key and fill light. The two back\nlights, one on the left of the object as seen from the observer and\none on ",
    "the right, fill on the high-contrast areas behind the object. \nTo enforce the relationship between the different lights, the\nintensity of the fill, back and headlights are set as a ratio to the\nkey light brightness.  Thus, the brightness of all the lights in the\nscene can be changed by changing the key light intensity.\n\nAll lights are directional lights (infinitely far away with no\nfalloff).  Ligh",
    "ts move with the camera.\n\nFor simplicity, the position of lights in the LightKit can only be\nspecified using angles: the elevation (latitude) and azimuth\n(longitude) of each light with respect to the camera, expressed in\ndegrees.  (Lights always shine on the camera's lookat point.) For\nexample, a light at (elevation=0, azimuth=0) is located at the camera\n(a headlight).  A light at (elevation=90, a",
    "zimuth=0) is above the\nlookat point, shining down.  Negative azimuth values move the lights\nclockwise as seen above, positive values counter-clockwise.  So, a\nlight at (elevation=45, azimuth=-20) is above and in front of the\nobject and shining slightly from the left side.\n\nvtkLightKit limits the colors that can be assigned to any light to\nthose of incandescent sources such as light bulbs and sunli",
    "ght.  It\ndefines a special color spectrum called \"warmth\" from which light\ncolors can be chosen, where 0 is cold blue, 0.5 is neutral white, and\n1 is deep sunset red.  Colors close to 0.5 are \"cool whites\" and \"warm\nwhites,\" respectively.\n\nSince colors far from white on the warmth scale appear less bright,\nkey-to-fill and key-to-headlight ratios are skewed by key, fill, and\nheadlight colors.  If t",
    "he flag MaintainLuminance is set, vtkLightKit\nwill attempt to compensate for these perceptual differences by\nincreasing the brightness of more saturated colors.\n\nA LightKit is not explicitly part of the vtk pipeline.  Rather, it is\na composite object that controls the behavior of lights using a\nunified user interface.  Every time a parameter of vtkLightKit is\nadjusted, the properties of its lights",
    " are modified.\n\nCredits:\n\nvtkLightKit was originally written and contributed to vtk by Michael\nHalle (mhalle@bwh.harvard.edu) at the Surgical Planning Lab, Brigham\nand Women's Hospital.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkLightKit(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkLightKitNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkLightKit", o) != 0)
    {
    Py_DECREF(o);
    }

}

