// python wrapper for vtkSliderRepresentation
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkSliderRepresentation.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkSliderRepresentation(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkSliderRepresentationNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkWidgetRepresentationNew
extern "C" { PyObject *PyVTKClass_vtkWidgetRepresentationNew(const char *); }
#define DECLARED_PyVTKClass_vtkWidgetRepresentationNew
#endif

static const char **PyvtkSliderRepresentation_Doc();

#ifndef DECLARED_PyvtkSliderRepresentation__InteractionState_Type
extern VTK_PYTHON_EXPORT PyTypeObject PyvtkSliderRepresentation__InteractionState_Type;
#define DECLARED_PyvtkSliderRepresentation__InteractionState_Type
#endif

PyTypeObject PyvtkSliderRepresentation__InteractionState_Type = {
  PyObject_HEAD_INIT(&PyType_Type)
  0,
  (char*)"_InteractionState", // tp_name
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

PyObject *PyvtkSliderRepresentation__InteractionState_FromEnum(int val)
{
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkSliderRepresentation__InteractionState_Type);
  self->ob_ival = val;
  return (PyObject *)self;
}


static PyObject *
PyvtkSliderRepresentation_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSliderRepresentation *op = static_cast<vtkSliderRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkSliderRepresentation::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSliderRepresentation_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSliderRepresentation *op = static_cast<vtkSliderRepresentation *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSliderRepresentation::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSliderRepresentation_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSliderRepresentation *op = static_cast<vtkSliderRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkSliderRepresentation *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSliderRepresentation::NewInstance());

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
PyvtkSliderRepresentation_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkSliderRepresentation *tempr = vtkSliderRepresentation::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSliderRepresentation_SetValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSliderRepresentation *op = static_cast<vtkSliderRepresentation *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetValue(temp0);
      }
    else
      {
      op->vtkSliderRepresentation::SetValue(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSliderRepresentation_GetValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSliderRepresentation *op = static_cast<vtkSliderRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetValue() :
      op->vtkSliderRepresentation::GetValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSliderRepresentation_SetMinimumValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMinimumValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSliderRepresentation *op = static_cast<vtkSliderRepresentation *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetMinimumValue(temp0);
      }
    else
      {
      op->vtkSliderRepresentation::SetMinimumValue(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSliderRepresentation_GetMinimumValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMinimumValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSliderRepresentation *op = static_cast<vtkSliderRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetMinimumValue() :
      op->vtkSliderRepresentation::GetMinimumValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSliderRepresentation_SetMaximumValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaximumValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSliderRepresentation *op = static_cast<vtkSliderRepresentation *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetMaximumValue(temp0);
      }
    else
      {
      op->vtkSliderRepresentation::SetMaximumValue(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSliderRepresentation_GetMaximumValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSliderRepresentation *op = static_cast<vtkSliderRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetMaximumValue() :
      op->vtkSliderRepresentation::GetMaximumValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSliderRepresentation_SetSliderLength(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSliderLength");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSliderRepresentation *op = static_cast<vtkSliderRepresentation *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetSliderLength(temp0);
      }
    else
      {
      op->vtkSliderRepresentation::SetSliderLength(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSliderRepresentation_GetSliderLengthMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSliderLengthMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSliderRepresentation *op = static_cast<vtkSliderRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetSliderLengthMinValue() :
      op->vtkSliderRepresentation::GetSliderLengthMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSliderRepresentation_GetSliderLengthMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSliderLengthMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSliderRepresentation *op = static_cast<vtkSliderRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetSliderLengthMaxValue() :
      op->vtkSliderRepresentation::GetSliderLengthMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSliderRepresentation_GetSliderLength(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSliderLength");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSliderRepresentation *op = static_cast<vtkSliderRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetSliderLength() :
      op->vtkSliderRepresentation::GetSliderLength());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSliderRepresentation_SetSliderWidth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSliderWidth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSliderRepresentation *op = static_cast<vtkSliderRepresentation *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetSliderWidth(temp0);
      }
    else
      {
      op->vtkSliderRepresentation::SetSliderWidth(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSliderRepresentation_GetSliderWidthMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSliderWidthMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSliderRepresentation *op = static_cast<vtkSliderRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetSliderWidthMinValue() :
      op->vtkSliderRepresentation::GetSliderWidthMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSliderRepresentation_GetSliderWidthMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSliderWidthMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSliderRepresentation *op = static_cast<vtkSliderRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetSliderWidthMaxValue() :
      op->vtkSliderRepresentation::GetSliderWidthMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSliderRepresentation_GetSliderWidth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSliderWidth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSliderRepresentation *op = static_cast<vtkSliderRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetSliderWidth() :
      op->vtkSliderRepresentation::GetSliderWidth());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSliderRepresentation_SetTubeWidth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTubeWidth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSliderRepresentation *op = static_cast<vtkSliderRepresentation *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetTubeWidth(temp0);
      }
    else
      {
      op->vtkSliderRepresentation::SetTubeWidth(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSliderRepresentation_GetTubeWidthMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTubeWidthMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSliderRepresentation *op = static_cast<vtkSliderRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetTubeWidthMinValue() :
      op->vtkSliderRepresentation::GetTubeWidthMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSliderRepresentation_GetTubeWidthMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTubeWidthMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSliderRepresentation *op = static_cast<vtkSliderRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetTubeWidthMaxValue() :
      op->vtkSliderRepresentation::GetTubeWidthMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSliderRepresentation_GetTubeWidth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTubeWidth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSliderRepresentation *op = static_cast<vtkSliderRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetTubeWidth() :
      op->vtkSliderRepresentation::GetTubeWidth());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSliderRepresentation_SetEndCapLength(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEndCapLength");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSliderRepresentation *op = static_cast<vtkSliderRepresentation *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetEndCapLength(temp0);
      }
    else
      {
      op->vtkSliderRepresentation::SetEndCapLength(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSliderRepresentation_GetEndCapLengthMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEndCapLengthMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSliderRepresentation *op = static_cast<vtkSliderRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetEndCapLengthMinValue() :
      op->vtkSliderRepresentation::GetEndCapLengthMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSliderRepresentation_GetEndCapLengthMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEndCapLengthMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSliderRepresentation *op = static_cast<vtkSliderRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetEndCapLengthMaxValue() :
      op->vtkSliderRepresentation::GetEndCapLengthMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSliderRepresentation_GetEndCapLength(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEndCapLength");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSliderRepresentation *op = static_cast<vtkSliderRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetEndCapLength() :
      op->vtkSliderRepresentation::GetEndCapLength());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSliderRepresentation_SetEndCapWidth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEndCapWidth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSliderRepresentation *op = static_cast<vtkSliderRepresentation *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetEndCapWidth(temp0);
      }
    else
      {
      op->vtkSliderRepresentation::SetEndCapWidth(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSliderRepresentation_GetEndCapWidthMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEndCapWidthMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSliderRepresentation *op = static_cast<vtkSliderRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetEndCapWidthMinValue() :
      op->vtkSliderRepresentation::GetEndCapWidthMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSliderRepresentation_GetEndCapWidthMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEndCapWidthMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSliderRepresentation *op = static_cast<vtkSliderRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetEndCapWidthMaxValue() :
      op->vtkSliderRepresentation::GetEndCapWidthMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSliderRepresentation_GetEndCapWidth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEndCapWidth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSliderRepresentation *op = static_cast<vtkSliderRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetEndCapWidth() :
      op->vtkSliderRepresentation::GetEndCapWidth());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSliderRepresentation_SetTitleText(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTitleText");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSliderRepresentation *op = static_cast<vtkSliderRepresentation *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetTitleText(temp0);
      }
    else
      {
      op->vtkSliderRepresentation::SetTitleText(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSliderRepresentation_GetTitleText(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTitleText");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSliderRepresentation *op = static_cast<vtkSliderRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetTitleText() :
      op->vtkSliderRepresentation::GetTitleText());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSliderRepresentation_SetLabelFormat(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLabelFormat");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSliderRepresentation *op = static_cast<vtkSliderRepresentation *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetLabelFormat(temp0);
      }
    else
      {
      op->vtkSliderRepresentation::SetLabelFormat(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSliderRepresentation_GetLabelFormat(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLabelFormat");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSliderRepresentation *op = static_cast<vtkSliderRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetLabelFormat() :
      op->vtkSliderRepresentation::GetLabelFormat());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSliderRepresentation_SetLabelHeight(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLabelHeight");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSliderRepresentation *op = static_cast<vtkSliderRepresentation *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetLabelHeight(temp0);
      }
    else
      {
      op->vtkSliderRepresentation::SetLabelHeight(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSliderRepresentation_GetLabelHeightMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLabelHeightMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSliderRepresentation *op = static_cast<vtkSliderRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetLabelHeightMinValue() :
      op->vtkSliderRepresentation::GetLabelHeightMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSliderRepresentation_GetLabelHeightMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLabelHeightMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSliderRepresentation *op = static_cast<vtkSliderRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetLabelHeightMaxValue() :
      op->vtkSliderRepresentation::GetLabelHeightMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSliderRepresentation_GetLabelHeight(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLabelHeight");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSliderRepresentation *op = static_cast<vtkSliderRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetLabelHeight() :
      op->vtkSliderRepresentation::GetLabelHeight());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSliderRepresentation_SetTitleHeight(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTitleHeight");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSliderRepresentation *op = static_cast<vtkSliderRepresentation *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetTitleHeight(temp0);
      }
    else
      {
      op->vtkSliderRepresentation::SetTitleHeight(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSliderRepresentation_GetTitleHeightMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTitleHeightMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSliderRepresentation *op = static_cast<vtkSliderRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetTitleHeightMinValue() :
      op->vtkSliderRepresentation::GetTitleHeightMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSliderRepresentation_GetTitleHeightMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTitleHeightMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSliderRepresentation *op = static_cast<vtkSliderRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetTitleHeightMaxValue() :
      op->vtkSliderRepresentation::GetTitleHeightMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSliderRepresentation_GetTitleHeight(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTitleHeight");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSliderRepresentation *op = static_cast<vtkSliderRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetTitleHeight() :
      op->vtkSliderRepresentation::GetTitleHeight());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSliderRepresentation_SetShowSliderLabel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetShowSliderLabel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSliderRepresentation *op = static_cast<vtkSliderRepresentation *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetShowSliderLabel(temp0);
      }
    else
      {
      op->vtkSliderRepresentation::SetShowSliderLabel(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSliderRepresentation_GetShowSliderLabel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetShowSliderLabel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSliderRepresentation *op = static_cast<vtkSliderRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetShowSliderLabel() :
      op->vtkSliderRepresentation::GetShowSliderLabel());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSliderRepresentation_ShowSliderLabelOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShowSliderLabelOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSliderRepresentation *op = static_cast<vtkSliderRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ShowSliderLabelOn();
      }
    else
      {
      op->vtkSliderRepresentation::ShowSliderLabelOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSliderRepresentation_ShowSliderLabelOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShowSliderLabelOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSliderRepresentation *op = static_cast<vtkSliderRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ShowSliderLabelOff();
      }
    else
      {
      op->vtkSliderRepresentation::ShowSliderLabelOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSliderRepresentation_GetCurrentT(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCurrentT");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSliderRepresentation *op = static_cast<vtkSliderRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetCurrentT() :
      op->vtkSliderRepresentation::GetCurrentT());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSliderRepresentation_GetPickedT(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPickedT");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSliderRepresentation *op = static_cast<vtkSliderRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetPickedT() :
      op->vtkSliderRepresentation::GetPickedT());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkSliderRepresentation_Methods[] = {
  {(char*)"GetClassName", PyvtkSliderRepresentation_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\nStandard methods for the class.\n"},
  {(char*)"IsA", PyvtkSliderRepresentation_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\nStandard methods for the class.\n"},
  {(char*)"NewInstance", PyvtkSliderRepresentation_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkSliderRepresentation\nC++: vtkSliderRepresentation *NewInstance()\n\nStandard methods for the class.\n"},
  {(char*)"SafeDownCast", PyvtkSliderRepresentation_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkSliderRepresentation\nC++: vtkSliderRepresentation *SafeDownCast(vtkObject* o)\n\nStandard methods for the class.\n"},
  {(char*)"SetValue", PyvtkSliderRepresentation_SetValue, METH_VARARGS,
   (char*)"V.SetValue(float)\nC++: void SetValue(double value)\n\nSpecify the current value for the widget. The value should lie\nbetween the minimum and maximum values.\n"},
  {(char*)"GetValue", PyvtkSliderRepresentation_GetValue, METH_VARARGS,
   (char*)"V.GetValue() -> float\nC++: double GetValue()\n\nSpecify the current value for the widget. The value should lie\nbetween the minimum and maximum values.\n"},
  {(char*)"SetMinimumValue", PyvtkSliderRepresentation_SetMinimumValue, METH_VARARGS,
   (char*)"V.SetMinimumValue(float)\nC++: void SetMinimumValue(double value)\n\nSet the current minimum value that the slider can take. Setting\nthe minimum value greater than the maximum value will cause the\nmaximum value to grow to (minimum value + 1).\n"},
  {(char*)"GetMinimumValue", PyvtkSliderRepresentation_GetMinimumValue, METH_VARARGS,
   (char*)"V.GetMinimumValue() -> float\nC++: double GetMinimumValue()\n\nSet the current minimum value that the slider can take. Setting\nthe minimum value greater than the maximum value will cause the\nmaximum value to grow to (minimum value + 1).\n"},
  {(char*)"SetMaximumValue", PyvtkSliderRepresentation_SetMaximumValue, METH_VARARGS,
   (char*)"V.SetMaximumValue(float)\nC++: void SetMaximumValue(double value)\n\nSet the current maximum value that the slider can take. Setting\nthe maximum value less than the minimum value will cause the\nminimum value to change to (maximum value - 1).\n"},
  {(char*)"GetMaximumValue", PyvtkSliderRepresentation_GetMaximumValue, METH_VARARGS,
   (char*)"V.GetMaximumValue() -> float\nC++: double GetMaximumValue()\n\nSet the current maximum value that the slider can take. Setting\nthe maximum value less than the minimum value will cause the\nminimum value to change to (maximum value - 1).\n"},
  {(char*)"SetSliderLength", PyvtkSliderRepresentation_SetSliderLength, METH_VARARGS,
   (char*)"V.SetSliderLength(float)\nC++: void SetSliderLength(double)\n\nSpecify the length of the slider shape (in normalized display\ncoordinates [0.01,0.5]). The slider length by default is 0.05.\n"},
  {(char*)"GetSliderLengthMinValue", PyvtkSliderRepresentation_GetSliderLengthMinValue, METH_VARARGS,
   (char*)"V.GetSliderLengthMinValue() -> float\nC++: double GetSliderLengthMinValue()\n\nSpecify the length of the slider shape (in normalized display\ncoordinates [0.01,0.5]). The slider length by default is 0.05.\n"},
  {(char*)"GetSliderLengthMaxValue", PyvtkSliderRepresentation_GetSliderLengthMaxValue, METH_VARARGS,
   (char*)"V.GetSliderLengthMaxValue() -> float\nC++: double GetSliderLengthMaxValue()\n\nSpecify the length of the slider shape (in normalized display\ncoordinates [0.01,0.5]). The slider length by default is 0.05.\n"},
  {(char*)"GetSliderLength", PyvtkSliderRepresentation_GetSliderLength, METH_VARARGS,
   (char*)"V.GetSliderLength() -> float\nC++: double GetSliderLength()\n\nSpecify the length of the slider shape (in normalized display\ncoordinates [0.01,0.5]). The slider length by default is 0.05.\n"},
  {(char*)"SetSliderWidth", PyvtkSliderRepresentation_SetSliderWidth, METH_VARARGS,
   (char*)"V.SetSliderWidth(float)\nC++: void SetSliderWidth(double)\n\nSet the width of the slider in the directions orthogonal to the\nslider axis. Using this it is possible to create ellipsoidal and\nhockey puck sliders (in some subclasses). By default the width is\n0.05.\n"},
  {(char*)"GetSliderWidthMinValue", PyvtkSliderRepresentation_GetSliderWidthMinValue, METH_VARARGS,
   (char*)"V.GetSliderWidthMinValue() -> float\nC++: double GetSliderWidthMinValue()\n\nSet the width of the slider in the directions orthogonal to the\nslider axis. Using this it is possible to create ellipsoidal and\nhockey puck sliders (in some subclasses). By default the width is\n0.05.\n"},
  {(char*)"GetSliderWidthMaxValue", PyvtkSliderRepresentation_GetSliderWidthMaxValue, METH_VARARGS,
   (char*)"V.GetSliderWidthMaxValue() -> float\nC++: double GetSliderWidthMaxValue()\n\nSet the width of the slider in the directions orthogonal to the\nslider axis. Using this it is possible to create ellipsoidal and\nhockey puck sliders (in some subclasses). By default the width is\n0.05.\n"},
  {(char*)"GetSliderWidth", PyvtkSliderRepresentation_GetSliderWidth, METH_VARARGS,
   (char*)"V.GetSliderWidth() -> float\nC++: double GetSliderWidth()\n\nSet the width of the slider in the directions orthogonal to the\nslider axis. Using this it is possible to create ellipsoidal and\nhockey puck sliders (in some subclasses). By default the width is\n0.05.\n"},
  {(char*)"SetTubeWidth", PyvtkSliderRepresentation_SetTubeWidth, METH_VARARGS,
   (char*)"V.SetTubeWidth(float)\nC++: void SetTubeWidth(double)\n\nSet the width of the tube (in normalized display coordinates) on\nwhich the slider moves. By default the width is 0.05.\n"},
  {(char*)"GetTubeWidthMinValue", PyvtkSliderRepresentation_GetTubeWidthMinValue, METH_VARARGS,
   (char*)"V.GetTubeWidthMinValue() -> float\nC++: double GetTubeWidthMinValue()\n\nSet the width of the tube (in normalized display coordinates) on\nwhich the slider moves. By default the width is 0.05.\n"},
  {(char*)"GetTubeWidthMaxValue", PyvtkSliderRepresentation_GetTubeWidthMaxValue, METH_VARARGS,
   (char*)"V.GetTubeWidthMaxValue() -> float\nC++: double GetTubeWidthMaxValue()\n\nSet the width of the tube (in normalized display coordinates) on\nwhich the slider moves. By default the width is 0.05.\n"},
  {(char*)"GetTubeWidth", PyvtkSliderRepresentation_GetTubeWidth, METH_VARARGS,
   (char*)"V.GetTubeWidth() -> float\nC++: double GetTubeWidth()\n\nSet the width of the tube (in normalized display coordinates) on\nwhich the slider moves. By default the width is 0.05.\n"},
  {(char*)"SetEndCapLength", PyvtkSliderRepresentation_SetEndCapLength, METH_VARARGS,
   (char*)"V.SetEndCapLength(float)\nC++: void SetEndCapLength(double)\n\nSpecify the length of each end cap (in normalized coordinates\n[0.0,0.25]). By default the length is 0.025. If the end cap\nlength is set to 0.0, then the end cap will not display at all.\n"},
  {(char*)"GetEndCapLengthMinValue", PyvtkSliderRepresentation_GetEndCapLengthMinValue, METH_VARARGS,
   (char*)"V.GetEndCapLengthMinValue() -> float\nC++: double GetEndCapLengthMinValue()\n\nSpecify the length of each end cap (in normalized coordinates\n[0.0,0.25]). By default the length is 0.025. If the end cap\nlength is set to 0.0, then the end cap will not display at all.\n"},
  {(char*)"GetEndCapLengthMaxValue", PyvtkSliderRepresentation_GetEndCapLengthMaxValue, METH_VARARGS,
   (char*)"V.GetEndCapLengthMaxValue() -> float\nC++: double GetEndCapLengthMaxValue()\n\nSpecify the length of each end cap (in normalized coordinates\n[0.0,0.25]). By default the length is 0.025. If the end cap\nlength is set to 0.0, then the end cap will not display at all.\n"},
  {(char*)"GetEndCapLength", PyvtkSliderRepresentation_GetEndCapLength, METH_VARARGS,
   (char*)"V.GetEndCapLength() -> float\nC++: double GetEndCapLength()\n\nSpecify the length of each end cap (in normalized coordinates\n[0.0,0.25]). By default the length is 0.025. If the end cap\nlength is set to 0.0, then the end cap will not display at all.\n"},
  {(char*)"SetEndCapWidth", PyvtkSliderRepresentation_SetEndCapWidth, METH_VARARGS,
   (char*)"V.SetEndCapWidth(float)\nC++: void SetEndCapWidth(double)\n\nSpecify the width of each end cap (in normalized coordinates\n[0.0,0.25]). By default the width is twice the tube width.\n"},
  {(char*)"GetEndCapWidthMinValue", PyvtkSliderRepresentation_GetEndCapWidthMinValue, METH_VARARGS,
   (char*)"V.GetEndCapWidthMinValue() -> float\nC++: double GetEndCapWidthMinValue()\n\nSpecify the width of each end cap (in normalized coordinates\n[0.0,0.25]). By default the width is twice the tube width.\n"},
  {(char*)"GetEndCapWidthMaxValue", PyvtkSliderRepresentation_GetEndCapWidthMaxValue, METH_VARARGS,
   (char*)"V.GetEndCapWidthMaxValue() -> float\nC++: double GetEndCapWidthMaxValue()\n\nSpecify the width of each end cap (in normalized coordinates\n[0.0,0.25]). By default the width is twice the tube width.\n"},
  {(char*)"GetEndCapWidth", PyvtkSliderRepresentation_GetEndCapWidth, METH_VARARGS,
   (char*)"V.GetEndCapWidth() -> float\nC++: double GetEndCapWidth()\n\nSpecify the width of each end cap (in normalized coordinates\n[0.0,0.25]). By default the width is twice the tube width.\n"},
  {(char*)"SetTitleText", PyvtkSliderRepresentation_SetTitleText, METH_VARARGS,
   (char*)"V.SetTitleText(string)\nC++: virtual void SetTitleText(const char *)\n\nSpecify the label text for this widget. If the value is not set,\nor set to the empty string \"\", then the label text is not\ndisplayed.\n"},
  {(char*)"GetTitleText", PyvtkSliderRepresentation_GetTitleText, METH_VARARGS,
   (char*)"V.GetTitleText() -> string\nC++: virtual const char *GetTitleText()\n\nSpecify the label text for this widget. If the value is not set,\nor set to the empty string \"\", then the label text is not\ndisplayed.\n"},
  {(char*)"SetLabelFormat", PyvtkSliderRepresentation_SetLabelFormat, METH_VARARGS,
   (char*)"V.SetLabelFormat(string)\nC++: void SetLabelFormat(char *)\n\nSet/Get the format with which to print the slider value.\n"},
  {(char*)"GetLabelFormat", PyvtkSliderRepresentation_GetLabelFormat, METH_VARARGS,
   (char*)"V.GetLabelFormat() -> string\nC++: char *GetLabelFormat()\n\nSet/Get the format with which to print the slider value.\n"},
  {(char*)"SetLabelHeight", PyvtkSliderRepresentation_SetLabelHeight, METH_VARARGS,
   (char*)"V.SetLabelHeight(float)\nC++: void SetLabelHeight(double)\n\nSpecify the relative height of the label as compared to the\nlength of the slider.\n"},
  {(char*)"GetLabelHeightMinValue", PyvtkSliderRepresentation_GetLabelHeightMinValue, METH_VARARGS,
   (char*)"V.GetLabelHeightMinValue() -> float\nC++: double GetLabelHeightMinValue()\n\nSpecify the relative height of the label as compared to the\nlength of the slider.\n"},
  {(char*)"GetLabelHeightMaxValue", PyvtkSliderRepresentation_GetLabelHeightMaxValue, METH_VARARGS,
   (char*)"V.GetLabelHeightMaxValue() -> float\nC++: double GetLabelHeightMaxValue()\n\nSpecify the relative height of the label as compared to the\nlength of the slider.\n"},
  {(char*)"GetLabelHeight", PyvtkSliderRepresentation_GetLabelHeight, METH_VARARGS,
   (char*)"V.GetLabelHeight() -> float\nC++: double GetLabelHeight()\n\nSpecify the relative height of the label as compared to the\nlength of the slider.\n"},
  {(char*)"SetTitleHeight", PyvtkSliderRepresentation_SetTitleHeight, METH_VARARGS,
   (char*)"V.SetTitleHeight(float)\nC++: void SetTitleHeight(double)\n\nSpecify the relative height of the title as compared to the\nlength of the slider.\n"},
  {(char*)"GetTitleHeightMinValue", PyvtkSliderRepresentation_GetTitleHeightMinValue, METH_VARARGS,
   (char*)"V.GetTitleHeightMinValue() -> float\nC++: double GetTitleHeightMinValue()\n\nSpecify the relative height of the title as compared to the\nlength of the slider.\n"},
  {(char*)"GetTitleHeightMaxValue", PyvtkSliderRepresentation_GetTitleHeightMaxValue, METH_VARARGS,
   (char*)"V.GetTitleHeightMaxValue() -> float\nC++: double GetTitleHeightMaxValue()\n\nSpecify the relative height of the title as compared to the\nlength of the slider.\n"},
  {(char*)"GetTitleHeight", PyvtkSliderRepresentation_GetTitleHeight, METH_VARARGS,
   (char*)"V.GetTitleHeight() -> float\nC++: double GetTitleHeight()\n\nSpecify the relative height of the title as compared to the\nlength of the slider.\n"},
  {(char*)"SetShowSliderLabel", PyvtkSliderRepresentation_SetShowSliderLabel, METH_VARARGS,
   (char*)"V.SetShowSliderLabel(int)\nC++: void SetShowSliderLabel(int a)\n\nIndicate whether the slider text label should be displayed. This\nis a number corresponding to the current Value of this widget.\n"},
  {(char*)"GetShowSliderLabel", PyvtkSliderRepresentation_GetShowSliderLabel, METH_VARARGS,
   (char*)"V.GetShowSliderLabel() -> int\nC++: int GetShowSliderLabel()\n\nIndicate whether the slider text label should be displayed. This\nis a number corresponding to the current Value of this widget.\n"},
  {(char*)"ShowSliderLabelOn", PyvtkSliderRepresentation_ShowSliderLabelOn, METH_VARARGS,
   (char*)"V.ShowSliderLabelOn()\nC++: void ShowSliderLabelOn()\n\nIndicate whether the slider text label should be displayed. This\nis a number corresponding to the current Value of this widget.\n"},
  {(char*)"ShowSliderLabelOff", PyvtkSliderRepresentation_ShowSliderLabelOff, METH_VARARGS,
   (char*)"V.ShowSliderLabelOff()\nC++: void ShowSliderLabelOff()\n\nIndicate whether the slider text label should be displayed. This\nis a number corresponding to the current Value of this widget.\n"},
  {(char*)"GetCurrentT", PyvtkSliderRepresentation_GetCurrentT, METH_VARARGS,
   (char*)"V.GetCurrentT() -> float\nC++: virtual double GetCurrentT()\n\nMethods to interface with the vtkSliderWidget. Subclasses of this\nclass actually do something.\n"},
  {(char*)"GetPickedT", PyvtkSliderRepresentation_GetPickedT, METH_VARARGS,
   (char*)"V.GetPickedT() -> float\nC++: virtual double GetPickedT()\n\nMethods to interface with the vtkSliderWidget. Subclasses of this\nclass actually do something.\n"},
  {NULL, NULL, 0, NULL}
};

PyObject *PyVTKClass_vtkSliderRepresentationNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(NULL,
    PyvtkSliderRepresentation_Methods,
    "vtkSliderRepresentation", modulename,
    NULL, NULL,
    PyvtkSliderRepresentation_Doc(),
    PyVTKClass_vtkWidgetRepresentationNew(modulename));

  if (cls)
    {
    PyObject *d = PyVTKClass_GetDict(cls);
    PyObject *o;

    PyType_Ready(&PyvtkSliderRepresentation__InteractionState_Type);
    PyvtkSliderRepresentation__InteractionState_Type.tp_new = NULL;

    o = (PyObject *)&PyvtkSliderRepresentation__InteractionState_Type;
    if (o && PyDict_SetItemString(d, (char *)"_InteractionState", o) != 0)
      {
      Py_DECREF(o);
      }

    for (int c = 0; c < 5; c++)
      {
      typedef vtkSliderRepresentation::_InteractionState cxx_enum_type;

      static const struct { const char *name; cxx_enum_type value; }
        constants[5] = {
          { "Outside", vtkSliderRepresentation::Outside },
          { "Tube", vtkSliderRepresentation::Tube },
          { "LeftCap", vtkSliderRepresentation::LeftCap },
          { "RightCap", vtkSliderRepresentation::RightCap },
          { "Slider", vtkSliderRepresentation::Slider },
        };

      o = PyvtkSliderRepresentation__InteractionState_FromEnum(constants[c].value);
      if (o)
        {
        PyDict_SetItemString(d, (char *)constants[c].name, o);
        Py_DECREF(o);
        }
      }

    }

  return cls;
}

const char **PyvtkSliderRepresentation_Doc()
{
  static const char *docstring[] = {
    "vtkSliderRepresentation - abstract class defines the representation\nfor a vtkSliderWidget\n\n",
    "Superclass: vtkWidgetRepresentation\n\n",
    "This abstract class is used to specify how the vtkSliderWidget should\ninteract with representations of the vtkSliderWidget. This class may\nbe subclassed so that alternative representations can be created. The\nclass defines an API, and a default implementation, that the\nvtkSliderWidget interacts with to render itself in the scene.\n\nSee Also:\n\nvtkSliderWidget\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkSliderRepresentation(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkSliderRepresentationNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkSliderRepresentation", o) != 0)
    {
    Py_DECREF(o);
    }

}

