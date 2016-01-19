// python wrapper for vtkCameraInterpolator2
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkCameraInterpolator2.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkCameraInterpolator2(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkCameraInterpolator2New(const char *); }

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkCameraInterpolator2_Doc();

#ifndef DECLARED_PyvtkCameraInterpolator2_Modes_Type
extern VTK_PYTHON_EXPORT PyTypeObject PyvtkCameraInterpolator2_Modes_Type;
#define DECLARED_PyvtkCameraInterpolator2_Modes_Type
#endif

PyTypeObject PyvtkCameraInterpolator2_Modes_Type = {
  PyObject_HEAD_INIT(&PyType_Type)
  0,
  (char*)"Modes", // tp_name
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

PyObject *PyvtkCameraInterpolator2_Modes_FromEnum(int val)
{
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkCameraInterpolator2_Modes_Type);
  self->ob_ival = val;
  return (PyObject *)self;
}

#ifndef DECLARED_PyvtkCameraInterpolator2_PathInterpolationModes_Type
extern VTK_PYTHON_EXPORT PyTypeObject PyvtkCameraInterpolator2_PathInterpolationModes_Type;
#define DECLARED_PyvtkCameraInterpolator2_PathInterpolationModes_Type
#endif

PyTypeObject PyvtkCameraInterpolator2_PathInterpolationModes_Type = {
  PyObject_HEAD_INIT(&PyType_Type)
  0,
  (char*)"PathInterpolationModes", // tp_name
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

PyObject *PyvtkCameraInterpolator2_PathInterpolationModes_FromEnum(int val)
{
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkCameraInterpolator2_PathInterpolationModes_Type);
  self->ob_ival = val;
  return (PyObject *)self;
}


static PyObject *
PyvtkCameraInterpolator2_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraInterpolator2 *op = static_cast<vtkCameraInterpolator2 *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkCameraInterpolator2::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCameraInterpolator2_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraInterpolator2 *op = static_cast<vtkCameraInterpolator2 *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkCameraInterpolator2::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCameraInterpolator2_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraInterpolator2 *op = static_cast<vtkCameraInterpolator2 *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkCameraInterpolator2 *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkCameraInterpolator2::NewInstance());

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
PyvtkCameraInterpolator2_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkCameraInterpolator2 *tempr = vtkCameraInterpolator2::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCameraInterpolator2_AddPositionPathPoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddPositionPathPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraInterpolator2 *op = static_cast<vtkCameraInterpolator2 *>(vp);

  double temp0;
  double temp1;
  double temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      op->AddPositionPathPoint(temp0, temp1, temp2);
      }
    else
      {
      op->vtkCameraInterpolator2::AddPositionPathPoint(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCameraInterpolator2_ClearPositionPath(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClearPositionPath");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraInterpolator2 *op = static_cast<vtkCameraInterpolator2 *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ClearPositionPath();
      }
    else
      {
      op->vtkCameraInterpolator2::ClearPositionPath();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCameraInterpolator2_AddFocalPathPoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddFocalPathPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraInterpolator2 *op = static_cast<vtkCameraInterpolator2 *>(vp);

  double temp0;
  double temp1;
  double temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      op->AddFocalPathPoint(temp0, temp1, temp2);
      }
    else
      {
      op->vtkCameraInterpolator2::AddFocalPathPoint(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCameraInterpolator2_ClearFocalPath(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClearFocalPath");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraInterpolator2 *op = static_cast<vtkCameraInterpolator2 *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ClearFocalPath();
      }
    else
      {
      op->vtkCameraInterpolator2::ClearFocalPath();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCameraInterpolator2_SetFocalPointMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFocalPointMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraInterpolator2 *op = static_cast<vtkCameraInterpolator2 *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetFocalPointMode(temp0);
      }
    else
      {
      op->vtkCameraInterpolator2::SetFocalPointMode(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCameraInterpolator2_GetFocalPointModeMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFocalPointModeMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraInterpolator2 *op = static_cast<vtkCameraInterpolator2 *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetFocalPointModeMinValue() :
      op->vtkCameraInterpolator2::GetFocalPointModeMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCameraInterpolator2_GetFocalPointModeMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFocalPointModeMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraInterpolator2 *op = static_cast<vtkCameraInterpolator2 *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetFocalPointModeMaxValue() :
      op->vtkCameraInterpolator2::GetFocalPointModeMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCameraInterpolator2_GetFocalPointMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFocalPointMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraInterpolator2 *op = static_cast<vtkCameraInterpolator2 *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetFocalPointMode() :
      op->vtkCameraInterpolator2::GetFocalPointMode());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCameraInterpolator2_SetPositionMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPositionMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraInterpolator2 *op = static_cast<vtkCameraInterpolator2 *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetPositionMode(temp0);
      }
    else
      {
      op->vtkCameraInterpolator2::SetPositionMode(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCameraInterpolator2_GetPositionModeMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPositionModeMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraInterpolator2 *op = static_cast<vtkCameraInterpolator2 *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetPositionModeMinValue() :
      op->vtkCameraInterpolator2::GetPositionModeMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCameraInterpolator2_GetPositionModeMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPositionModeMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraInterpolator2 *op = static_cast<vtkCameraInterpolator2 *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetPositionModeMaxValue() :
      op->vtkCameraInterpolator2::GetPositionModeMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCameraInterpolator2_GetPositionMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPositionMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraInterpolator2 *op = static_cast<vtkCameraInterpolator2 *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetPositionMode() :
      op->vtkCameraInterpolator2::GetPositionMode());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCameraInterpolator2_SetPositionPathInterpolationMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPositionPathInterpolationMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraInterpolator2 *op = static_cast<vtkCameraInterpolator2 *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetPositionPathInterpolationMode(temp0);
      }
    else
      {
      op->vtkCameraInterpolator2::SetPositionPathInterpolationMode(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCameraInterpolator2_GetPositionPathInterpolationModeMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPositionPathInterpolationModeMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraInterpolator2 *op = static_cast<vtkCameraInterpolator2 *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetPositionPathInterpolationModeMinValue() :
      op->vtkCameraInterpolator2::GetPositionPathInterpolationModeMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCameraInterpolator2_GetPositionPathInterpolationModeMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPositionPathInterpolationModeMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraInterpolator2 *op = static_cast<vtkCameraInterpolator2 *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetPositionPathInterpolationModeMaxValue() :
      op->vtkCameraInterpolator2::GetPositionPathInterpolationModeMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCameraInterpolator2_GetPositionPathInterpolationMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPositionPathInterpolationMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraInterpolator2 *op = static_cast<vtkCameraInterpolator2 *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetPositionPathInterpolationMode() :
      op->vtkCameraInterpolator2::GetPositionPathInterpolationMode());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCameraInterpolator2_SetFocalPathInterpolationMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFocalPathInterpolationMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraInterpolator2 *op = static_cast<vtkCameraInterpolator2 *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetFocalPathInterpolationMode(temp0);
      }
    else
      {
      op->vtkCameraInterpolator2::SetFocalPathInterpolationMode(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCameraInterpolator2_GetFocalPathInterpolationModeMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFocalPathInterpolationModeMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraInterpolator2 *op = static_cast<vtkCameraInterpolator2 *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetFocalPathInterpolationModeMinValue() :
      op->vtkCameraInterpolator2::GetFocalPathInterpolationModeMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCameraInterpolator2_GetFocalPathInterpolationModeMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFocalPathInterpolationModeMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraInterpolator2 *op = static_cast<vtkCameraInterpolator2 *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetFocalPathInterpolationModeMaxValue() :
      op->vtkCameraInterpolator2::GetFocalPathInterpolationModeMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCameraInterpolator2_GetFocalPathInterpolationMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFocalPathInterpolationMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraInterpolator2 *op = static_cast<vtkCameraInterpolator2 *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetFocalPathInterpolationMode() :
      op->vtkCameraInterpolator2::GetFocalPathInterpolationMode());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCameraInterpolator2_SetClosedFocalPath(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetClosedFocalPath");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraInterpolator2 *op = static_cast<vtkCameraInterpolator2 *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetClosedFocalPath(temp0);
      }
    else
      {
      op->vtkCameraInterpolator2::SetClosedFocalPath(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCameraInterpolator2_GetClosedFocalPath(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClosedFocalPath");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraInterpolator2 *op = static_cast<vtkCameraInterpolator2 *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetClosedFocalPath() :
      op->vtkCameraInterpolator2::GetClosedFocalPath());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCameraInterpolator2_ClosedFocalPathOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClosedFocalPathOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraInterpolator2 *op = static_cast<vtkCameraInterpolator2 *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ClosedFocalPathOn();
      }
    else
      {
      op->vtkCameraInterpolator2::ClosedFocalPathOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCameraInterpolator2_ClosedFocalPathOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClosedFocalPathOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraInterpolator2 *op = static_cast<vtkCameraInterpolator2 *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ClosedFocalPathOff();
      }
    else
      {
      op->vtkCameraInterpolator2::ClosedFocalPathOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCameraInterpolator2_SetClosedPositionPath(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetClosedPositionPath");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraInterpolator2 *op = static_cast<vtkCameraInterpolator2 *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetClosedPositionPath(temp0);
      }
    else
      {
      op->vtkCameraInterpolator2::SetClosedPositionPath(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCameraInterpolator2_GetClosedPositionPath(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClosedPositionPath");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraInterpolator2 *op = static_cast<vtkCameraInterpolator2 *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetClosedPositionPath() :
      op->vtkCameraInterpolator2::GetClosedPositionPath());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCameraInterpolator2_ClosedPositionPathOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClosedPositionPathOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraInterpolator2 *op = static_cast<vtkCameraInterpolator2 *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ClosedPositionPathOn();
      }
    else
      {
      op->vtkCameraInterpolator2::ClosedPositionPathOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCameraInterpolator2_ClosedPositionPathOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClosedPositionPathOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraInterpolator2 *op = static_cast<vtkCameraInterpolator2 *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ClosedPositionPathOff();
      }
    else
      {
      op->vtkCameraInterpolator2::ClosedPositionPathOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCameraInterpolator2_InterpolateCamera(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InterpolateCamera");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraInterpolator2 *op = static_cast<vtkCameraInterpolator2 *>(vp);

  double temp0;
  vtkCamera *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkCamera"))
    {
    if (ap.IsBound())
      {
      op->InterpolateCamera(temp0, temp1);
      }
    else
      {
      op->vtkCameraInterpolator2::InterpolateCamera(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkCameraInterpolator2_Methods[] = {
  {(char*)"GetClassName", PyvtkCameraInterpolator2_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkCameraInterpolator2_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkCameraInterpolator2_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkCameraInterpolator2\nC++: vtkCameraInterpolator2 *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkCameraInterpolator2_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkCameraInterpolator2\nC++: vtkCameraInterpolator2 *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"AddPositionPathPoint", PyvtkCameraInterpolator2_AddPositionPathPoint, METH_VARARGS,
   (char*)"V.AddPositionPathPoint(float, float, float)\nC++: void AddPositionPathPoint(double x, double y, double z)\n\n"},
  {(char*)"ClearPositionPath", PyvtkCameraInterpolator2_ClearPositionPath, METH_VARARGS,
   (char*)"V.ClearPositionPath()\nC++: void ClearPositionPath()\n\n"},
  {(char*)"AddFocalPathPoint", PyvtkCameraInterpolator2_AddFocalPathPoint, METH_VARARGS,
   (char*)"V.AddFocalPathPoint(float, float, float)\nC++: void AddFocalPathPoint(double x, double y, double z)\n\n"},
  {(char*)"ClearFocalPath", PyvtkCameraInterpolator2_ClearFocalPath, METH_VARARGS,
   (char*)"V.ClearFocalPath()\nC++: void ClearFocalPath()\n\n"},
  {(char*)"SetFocalPointMode", PyvtkCameraInterpolator2_SetFocalPointMode, METH_VARARGS,
   (char*)"V.SetFocalPointMode(int)\nC++: void SetFocalPointMode(int)\n\nMode for managing the focal point. At least one of the two modes\nFocalPointMode or PositionMode must be PATH for the animation to\nhave any effect.\n"},
  {(char*)"GetFocalPointModeMinValue", PyvtkCameraInterpolator2_GetFocalPointModeMinValue, METH_VARARGS,
   (char*)"V.GetFocalPointModeMinValue() -> int\nC++: int GetFocalPointModeMinValue()\n\nMode for managing the focal point. At least one of the two modes\nFocalPointMode or PositionMode must be PATH for the animation to\nhave any effect.\n"},
  {(char*)"GetFocalPointModeMaxValue", PyvtkCameraInterpolator2_GetFocalPointModeMaxValue, METH_VARARGS,
   (char*)"V.GetFocalPointModeMaxValue() -> int\nC++: int GetFocalPointModeMaxValue()\n\nMode for managing the focal point. At least one of the two modes\nFocalPointMode or PositionMode must be PATH for the animation to\nhave any effect.\n"},
  {(char*)"GetFocalPointMode", PyvtkCameraInterpolator2_GetFocalPointMode, METH_VARARGS,
   (char*)"V.GetFocalPointMode() -> int\nC++: int GetFocalPointMode()\n\nMode for managing the focal point. At least one of the two modes\nFocalPointMode or PositionMode must be PATH for the animation to\nhave any effect.\n"},
  {(char*)"SetPositionMode", PyvtkCameraInterpolator2_SetPositionMode, METH_VARARGS,
   (char*)"V.SetPositionMode(int)\nC++: void SetPositionMode(int)\n\nMode for managing the camera position. At least one of the two\nmodes FocalPointMode or PositionMode must be PATH for the\nanimation to have any effect.\n"},
  {(char*)"GetPositionModeMinValue", PyvtkCameraInterpolator2_GetPositionModeMinValue, METH_VARARGS,
   (char*)"V.GetPositionModeMinValue() -> int\nC++: int GetPositionModeMinValue()\n\nMode for managing the camera position. At least one of the two\nmodes FocalPointMode or PositionMode must be PATH for the\nanimation to have any effect.\n"},
  {(char*)"GetPositionModeMaxValue", PyvtkCameraInterpolator2_GetPositionModeMaxValue, METH_VARARGS,
   (char*)"V.GetPositionModeMaxValue() -> int\nC++: int GetPositionModeMaxValue()\n\nMode for managing the camera position. At least one of the two\nmodes FocalPointMode or PositionMode must be PATH for the\nanimation to have any effect.\n"},
  {(char*)"GetPositionMode", PyvtkCameraInterpolator2_GetPositionMode, METH_VARARGS,
   (char*)"V.GetPositionMode() -> int\nC++: int GetPositionMode()\n\nMode for managing the camera position. At least one of the two\nmodes FocalPointMode or PositionMode must be PATH for the\nanimation to have any effect.\n"},
  {(char*)"SetPositionPathInterpolationMode", PyvtkCameraInterpolator2_SetPositionPathInterpolationMode, METH_VARARGS,
   (char*)"V.SetPositionPathInterpolationMode(int)\nC++: void SetPositionPathInterpolationMode(int)\n\n"},
  {(char*)"GetPositionPathInterpolationModeMinValue", PyvtkCameraInterpolator2_GetPositionPathInterpolationModeMinValue, METH_VARARGS,
   (char*)"V.GetPositionPathInterpolationModeMinValue() -> int\nC++: int GetPositionPathInterpolationModeMinValue()\n\n"},
  {(char*)"GetPositionPathInterpolationModeMaxValue", PyvtkCameraInterpolator2_GetPositionPathInterpolationModeMaxValue, METH_VARARGS,
   (char*)"V.GetPositionPathInterpolationModeMaxValue() -> int\nC++: int GetPositionPathInterpolationModeMaxValue()\n\n"},
  {(char*)"GetPositionPathInterpolationMode", PyvtkCameraInterpolator2_GetPositionPathInterpolationMode, METH_VARARGS,
   (char*)"V.GetPositionPathInterpolationMode() -> int\nC++: int GetPositionPathInterpolationMode()\n\n"},
  {(char*)"SetFocalPathInterpolationMode", PyvtkCameraInterpolator2_SetFocalPathInterpolationMode, METH_VARARGS,
   (char*)"V.SetFocalPathInterpolationMode(int)\nC++: void SetFocalPathInterpolationMode(int)\n\n"},
  {(char*)"GetFocalPathInterpolationModeMinValue", PyvtkCameraInterpolator2_GetFocalPathInterpolationModeMinValue, METH_VARARGS,
   (char*)"V.GetFocalPathInterpolationModeMinValue() -> int\nC++: int GetFocalPathInterpolationModeMinValue()\n\n"},
  {(char*)"GetFocalPathInterpolationModeMaxValue", PyvtkCameraInterpolator2_GetFocalPathInterpolationModeMaxValue, METH_VARARGS,
   (char*)"V.GetFocalPathInterpolationModeMaxValue() -> int\nC++: int GetFocalPathInterpolationModeMaxValue()\n\n"},
  {(char*)"GetFocalPathInterpolationMode", PyvtkCameraInterpolator2_GetFocalPathInterpolationMode, METH_VARARGS,
   (char*)"V.GetFocalPathInterpolationMode() -> int\nC++: int GetFocalPathInterpolationMode()\n\n"},
  {(char*)"SetClosedFocalPath", PyvtkCameraInterpolator2_SetClosedFocalPath, METH_VARARGS,
   (char*)"V.SetClosedFocalPath(bool)\nC++: void SetClosedFocalPath(bool a)\n\nWhen set, the FocalPointPath is treated as a closed path.\n"},
  {(char*)"GetClosedFocalPath", PyvtkCameraInterpolator2_GetClosedFocalPath, METH_VARARGS,
   (char*)"V.GetClosedFocalPath() -> bool\nC++: bool GetClosedFocalPath()\n\nWhen set, the FocalPointPath is treated as a closed path.\n"},
  {(char*)"ClosedFocalPathOn", PyvtkCameraInterpolator2_ClosedFocalPathOn, METH_VARARGS,
   (char*)"V.ClosedFocalPathOn()\nC++: void ClosedFocalPathOn()\n\nWhen set, the FocalPointPath is treated as a closed path.\n"},
  {(char*)"ClosedFocalPathOff", PyvtkCameraInterpolator2_ClosedFocalPathOff, METH_VARARGS,
   (char*)"V.ClosedFocalPathOff()\nC++: void ClosedFocalPathOff()\n\nWhen set, the FocalPointPath is treated as a closed path.\n"},
  {(char*)"SetClosedPositionPath", PyvtkCameraInterpolator2_SetClosedPositionPath, METH_VARARGS,
   (char*)"V.SetClosedPositionPath(bool)\nC++: void SetClosedPositionPath(bool a)\n\nWhen set, the PositionPath is treated as a closed path.\n"},
  {(char*)"GetClosedPositionPath", PyvtkCameraInterpolator2_GetClosedPositionPath, METH_VARARGS,
   (char*)"V.GetClosedPositionPath() -> bool\nC++: bool GetClosedPositionPath()\n\nWhen set, the PositionPath is treated as a closed path.\n"},
  {(char*)"ClosedPositionPathOn", PyvtkCameraInterpolator2_ClosedPositionPathOn, METH_VARARGS,
   (char*)"V.ClosedPositionPathOn()\nC++: void ClosedPositionPathOn()\n\nWhen set, the PositionPath is treated as a closed path.\n"},
  {(char*)"ClosedPositionPathOff", PyvtkCameraInterpolator2_ClosedPositionPathOff, METH_VARARGS,
   (char*)"V.ClosedPositionPathOff()\nC++: void ClosedPositionPathOff()\n\nWhen set, the PositionPath is treated as a closed path.\n"},
  {(char*)"InterpolateCamera", PyvtkCameraInterpolator2_InterpolateCamera, METH_VARARGS,
   (char*)"V.InterpolateCamera(float, vtkCamera)\nC++: void InterpolateCamera(double u, vtkCamera *)\n\nu has to be in the range [0, 1].\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkCameraInterpolator2_StaticNew()
{
  return vtkCameraInterpolator2::New();
}

PyObject *PyVTKClass_vtkCameraInterpolator2New(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkCameraInterpolator2_StaticNew,
    PyvtkCameraInterpolator2_Methods,
    "vtkCameraInterpolator2", modulename,
    NULL, NULL,
    PyvtkCameraInterpolator2_Doc(),
    PyVTKClass_vtkObjectNew(modulename));

  if (cls)
    {
    PyObject *d = PyVTKClass_GetDict(cls);
    PyObject *o;

    PyType_Ready(&PyvtkCameraInterpolator2_Modes_Type);
    PyvtkCameraInterpolator2_Modes_Type.tp_new = NULL;

    o = (PyObject *)&PyvtkCameraInterpolator2_Modes_Type;
    if (o && PyDict_SetItemString(d, (char *)"Modes", o) != 0)
      {
      Py_DECREF(o);
      }

    PyType_Ready(&PyvtkCameraInterpolator2_PathInterpolationModes_Type);
    PyvtkCameraInterpolator2_PathInterpolationModes_Type.tp_new = NULL;

    o = (PyObject *)&PyvtkCameraInterpolator2_PathInterpolationModes_Type;
    if (o && PyDict_SetItemString(d, (char *)"PathInterpolationModes", o) != 0)
      {
      Py_DECREF(o);
      }

    for (int c = 0; c < 4; c++)
      {
      typedef vtkCameraInterpolator2::Modes cxx_enum_type;

      static const struct { const char *name; cxx_enum_type value; }
        constants[4] = {
          { "PATH", vtkCameraInterpolator2::PATH },
          { "FIXED_DIRECTION", vtkCameraInterpolator2::FIXED_DIRECTION },
          { "LOOK_AHEAD", vtkCameraInterpolator2::LOOK_AHEAD },
          { "ORTHOGONAL", vtkCameraInterpolator2::ORTHOGONAL },
        };

      o = PyvtkCameraInterpolator2_Modes_FromEnum(constants[c].value);
      if (o)
        {
        PyDict_SetItemString(d, (char *)constants[c].name, o);
        Py_DECREF(o);
        }
      }

    for (int c = 0; c < 2; c++)
      {
      typedef vtkCameraInterpolator2::PathInterpolationModes cxx_enum_type;

      static const struct { const char *name; cxx_enum_type value; }
        constants[2] = {
          { "LINEAR", vtkCameraInterpolator2::LINEAR },
          { "SPLINE", vtkCameraInterpolator2::SPLINE },
        };

      o = PyvtkCameraInterpolator2_PathInterpolationModes_FromEnum(constants[c].value);
      if (o)
        {
        PyDict_SetItemString(d, (char *)constants[c].name, o);
        Py_DECREF(o);
        }
      }

    }

  return cls;
}

const char **PyvtkCameraInterpolator2_Doc()
{
  static const char *docstring[] = {
    "vtkCameraInterpolator2\n\n",
    "Superclass: vtkObject\n\n",
    "\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkCameraInterpolator2(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkCameraInterpolator2New(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkCameraInterpolator2", o) != 0)
    {
    Py_DECREF(o);
    }

}

