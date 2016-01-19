// python wrapper for vtkHandleRepresentation
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkHandleRepresentation.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkHandleRepresentation(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkHandleRepresentationNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkWidgetRepresentationNew
extern "C" { PyObject *PyVTKClass_vtkWidgetRepresentationNew(const char *); }
#define DECLARED_PyVTKClass_vtkWidgetRepresentationNew
#endif

static const char **PyvtkHandleRepresentation_Doc();

#ifndef DECLARED_PyvtkHandleRepresentation__InteractionState_Type
extern VTK_PYTHON_EXPORT PyTypeObject PyvtkHandleRepresentation__InteractionState_Type;
#define DECLARED_PyvtkHandleRepresentation__InteractionState_Type
#endif

PyTypeObject PyvtkHandleRepresentation__InteractionState_Type = {
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

PyObject *PyvtkHandleRepresentation__InteractionState_FromEnum(int val)
{
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkHandleRepresentation__InteractionState_Type);
  self->ob_ival = val;
  return (PyObject *)self;
}


static PyObject *
PyvtkHandleRepresentation_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHandleRepresentation *op = static_cast<vtkHandleRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkHandleRepresentation::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHandleRepresentation_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHandleRepresentation *op = static_cast<vtkHandleRepresentation *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkHandleRepresentation::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHandleRepresentation_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHandleRepresentation *op = static_cast<vtkHandleRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkHandleRepresentation *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkHandleRepresentation::NewInstance());

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
PyvtkHandleRepresentation_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkHandleRepresentation *tempr = vtkHandleRepresentation::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHandleRepresentation_SetDisplayPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDisplayPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHandleRepresentation *op = static_cast<vtkHandleRepresentation *>(vp);

  double temp0[3];
  double save0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    if (ap.IsBound())
      {
      op->SetDisplayPosition(temp0);
      }
    else
      {
      op->vtkHandleRepresentation::SetDisplayPosition(temp0);
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
PyvtkHandleRepresentation_GetDisplayPosition_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDisplayPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHandleRepresentation *op = static_cast<vtkHandleRepresentation *>(vp);

  double temp0[3];
  double save0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    if (ap.IsBound())
      {
      op->GetDisplayPosition(temp0);
      }
    else
      {
      op->vtkHandleRepresentation::GetDisplayPosition(temp0);
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
PyvtkHandleRepresentation_GetDisplayPosition_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDisplayPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHandleRepresentation *op = static_cast<vtkHandleRepresentation *>(vp);

  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetDisplayPosition() :
      op->vtkHandleRepresentation::GetDisplayPosition());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}

static PyObject *
PyvtkHandleRepresentation_GetDisplayPosition(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkHandleRepresentation_GetDisplayPosition_s1(self, args);
    case 0:
      return PyvtkHandleRepresentation_GetDisplayPosition_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetDisplayPosition");
  return NULL;
}



static PyObject *
PyvtkHandleRepresentation_SetWorldPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWorldPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHandleRepresentation *op = static_cast<vtkHandleRepresentation *>(vp);

  double temp0[3];
  double save0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    if (ap.IsBound())
      {
      op->SetWorldPosition(temp0);
      }
    else
      {
      op->vtkHandleRepresentation::SetWorldPosition(temp0);
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
PyvtkHandleRepresentation_GetWorldPosition_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWorldPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHandleRepresentation *op = static_cast<vtkHandleRepresentation *>(vp);

  double temp0[3];
  double save0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    if (ap.IsBound())
      {
      op->GetWorldPosition(temp0);
      }
    else
      {
      op->vtkHandleRepresentation::GetWorldPosition(temp0);
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
PyvtkHandleRepresentation_GetWorldPosition_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWorldPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHandleRepresentation *op = static_cast<vtkHandleRepresentation *>(vp);

  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetWorldPosition() :
      op->vtkHandleRepresentation::GetWorldPosition());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}

static PyObject *
PyvtkHandleRepresentation_GetWorldPosition(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkHandleRepresentation_GetWorldPosition_s1(self, args);
    case 0:
      return PyvtkHandleRepresentation_GetWorldPosition_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetWorldPosition");
  return NULL;
}



static PyObject *
PyvtkHandleRepresentation_SetTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTolerance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHandleRepresentation *op = static_cast<vtkHandleRepresentation *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetTolerance(temp0);
      }
    else
      {
      op->vtkHandleRepresentation::SetTolerance(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkHandleRepresentation_GetToleranceMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetToleranceMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHandleRepresentation *op = static_cast<vtkHandleRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetToleranceMinValue() :
      op->vtkHandleRepresentation::GetToleranceMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHandleRepresentation_GetToleranceMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetToleranceMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHandleRepresentation *op = static_cast<vtkHandleRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetToleranceMaxValue() :
      op->vtkHandleRepresentation::GetToleranceMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHandleRepresentation_GetTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTolerance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHandleRepresentation *op = static_cast<vtkHandleRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetTolerance() :
      op->vtkHandleRepresentation::GetTolerance());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHandleRepresentation_SetActiveRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetActiveRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHandleRepresentation *op = static_cast<vtkHandleRepresentation *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetActiveRepresentation(temp0);
      }
    else
      {
      op->vtkHandleRepresentation::SetActiveRepresentation(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkHandleRepresentation_GetActiveRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActiveRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHandleRepresentation *op = static_cast<vtkHandleRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetActiveRepresentation() :
      op->vtkHandleRepresentation::GetActiveRepresentation());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHandleRepresentation_ActiveRepresentationOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ActiveRepresentationOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHandleRepresentation *op = static_cast<vtkHandleRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ActiveRepresentationOn();
      }
    else
      {
      op->vtkHandleRepresentation::ActiveRepresentationOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkHandleRepresentation_ActiveRepresentationOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ActiveRepresentationOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHandleRepresentation *op = static_cast<vtkHandleRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ActiveRepresentationOff();
      }
    else
      {
      op->vtkHandleRepresentation::ActiveRepresentationOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkHandleRepresentation_SetInteractionState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInteractionState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHandleRepresentation *op = static_cast<vtkHandleRepresentation *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetInteractionState(temp0);
      }
    else
      {
      op->vtkHandleRepresentation::SetInteractionState(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkHandleRepresentation_GetInteractionStateMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInteractionStateMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHandleRepresentation *op = static_cast<vtkHandleRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetInteractionStateMinValue() :
      op->vtkHandleRepresentation::GetInteractionStateMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHandleRepresentation_GetInteractionStateMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInteractionStateMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHandleRepresentation *op = static_cast<vtkHandleRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetInteractionStateMaxValue() :
      op->vtkHandleRepresentation::GetInteractionStateMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHandleRepresentation_SetConstrained(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetConstrained");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHandleRepresentation *op = static_cast<vtkHandleRepresentation *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetConstrained(temp0);
      }
    else
      {
      op->vtkHandleRepresentation::SetConstrained(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkHandleRepresentation_GetConstrained(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetConstrained");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHandleRepresentation *op = static_cast<vtkHandleRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetConstrained() :
      op->vtkHandleRepresentation::GetConstrained());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHandleRepresentation_ConstrainedOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ConstrainedOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHandleRepresentation *op = static_cast<vtkHandleRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ConstrainedOn();
      }
    else
      {
      op->vtkHandleRepresentation::ConstrainedOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkHandleRepresentation_ConstrainedOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ConstrainedOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHandleRepresentation *op = static_cast<vtkHandleRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ConstrainedOff();
      }
    else
      {
      op->vtkHandleRepresentation::ConstrainedOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkHandleRepresentation_CheckConstraint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CheckConstraint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHandleRepresentation *op = static_cast<vtkHandleRepresentation *>(vp);

  vtkRenderer *temp0 = NULL;
  double temp1[2];
  double save1[2];
  const int size1 = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkRenderer") &&
      ap.GetArray(temp1, size1))
    {
    ap.SaveArray(temp1, save1, size1);

    int tempr = (ap.IsBound() ?
      op->CheckConstraint(temp0, temp1) :
      op->vtkHandleRepresentation::CheckConstraint(temp0, temp1));

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

  return result;
}


static PyObject *
PyvtkHandleRepresentation_ShallowCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShallowCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHandleRepresentation *op = static_cast<vtkHandleRepresentation *>(vp);

  vtkProp *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkProp"))
    {
    if (ap.IsBound())
      {
      op->ShallowCopy(temp0);
      }
    else
      {
      op->vtkHandleRepresentation::ShallowCopy(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkHandleRepresentation_DeepCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeepCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHandleRepresentation *op = static_cast<vtkHandleRepresentation *>(vp);

  vtkProp *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkProp"))
    {
    if (ap.IsBound())
      {
      op->DeepCopy(temp0);
      }
    else
      {
      op->vtkHandleRepresentation::DeepCopy(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkHandleRepresentation_SetRenderer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRenderer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHandleRepresentation *op = static_cast<vtkHandleRepresentation *>(vp);

  vtkRenderer *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkRenderer"))
    {
    if (ap.IsBound())
      {
      op->SetRenderer(temp0);
      }
    else
      {
      op->vtkHandleRepresentation::SetRenderer(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkHandleRepresentation_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHandleRepresentation *op = static_cast<vtkHandleRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMTime() :
      op->vtkHandleRepresentation::GetMTime());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHandleRepresentation_SetPointPlacer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPointPlacer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHandleRepresentation *op = static_cast<vtkHandleRepresentation *>(vp);

  vtkPointPlacer *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPointPlacer"))
    {
    if (ap.IsBound())
      {
      op->SetPointPlacer(temp0);
      }
    else
      {
      op->vtkHandleRepresentation::SetPointPlacer(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkHandleRepresentation_GetPointPlacer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointPlacer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHandleRepresentation *op = static_cast<vtkHandleRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPointPlacer *tempr = (ap.IsBound() ?
      op->GetPointPlacer() :
      op->vtkHandleRepresentation::GetPointPlacer());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkHandleRepresentation_Methods[] = {
  {(char*)"GetClassName", PyvtkHandleRepresentation_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\nStandard methods for instances of this class.\n"},
  {(char*)"IsA", PyvtkHandleRepresentation_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\nStandard methods for instances of this class.\n"},
  {(char*)"NewInstance", PyvtkHandleRepresentation_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkHandleRepresentation\nC++: vtkHandleRepresentation *NewInstance()\n\nStandard methods for instances of this class.\n"},
  {(char*)"SafeDownCast", PyvtkHandleRepresentation_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkHandleRepresentation\nC++: vtkHandleRepresentation *SafeDownCast(vtkObject* o)\n\nStandard methods for instances of this class.\n"},
  {(char*)"SetDisplayPosition", PyvtkHandleRepresentation_SetDisplayPosition, METH_VARARGS,
   (char*)"V.SetDisplayPosition([float, float, float])\nC++: virtual void SetDisplayPosition(double pos[3])\n\nHandles usually have their coordinates set in display coordinates\n(generally by an associated widget) and internally maintain the\nposition in world coordinates. (Using world coordinates insures\nthat handles are rendered in the right position when the camera\nview changes.) These methods are often subclassed because special\nconstraint operations can be used to control the actual\npositioning.\n"},
  {(char*)"GetDisplayPosition", PyvtkHandleRepresentation_GetDisplayPosition, METH_VARARGS,
   (char*)"V.GetDisplayPosition([float, float, float])\nC++: virtual void GetDisplayPosition(double pos[3])\nV.GetDisplayPosition() -> (float, float, float)\nC++: virtual double *GetDisplayPosition()\n\nHandles usually have their coordinates set in display coordinates\n(generally by an associated widget) and internally maintain the\nposition in world coordinates. (Using world coordinates insures\nthat handles are rendered in the right position when the camera\nview changes.) These methods are often subclassed because special\nconstraint operations can be used to control the actual\npositioning.\n"},
  {(char*)"SetWorldPosition", PyvtkHandleRepresentation_SetWorldPosition, METH_VARARGS,
   (char*)"V.SetWorldPosition([float, float, float])\nC++: virtual void SetWorldPosition(double pos[3])\n\nHandles usually have their coordinates set in display coordinates\n(generally by an associated widget) and internally maintain the\nposition in world coordinates. (Using world coordinates insures\nthat handles are rendered in the right position when the camera\nview changes.) These methods are often subclassed because special\nconstraint operations can be used to control the actual\npositioning.\n"},
  {(char*)"GetWorldPosition", PyvtkHandleRepresentation_GetWorldPosition, METH_VARARGS,
   (char*)"V.GetWorldPosition([float, float, float])\nC++: virtual void GetWorldPosition(double pos[3])\nV.GetWorldPosition() -> (float, float, float)\nC++: virtual double *GetWorldPosition()\n\nHandles usually have their coordinates set in display coordinates\n(generally by an associated widget) and internally maintain the\nposition in world coordinates. (Using world coordinates insures\nthat handles are rendered in the right position when the camera\nview changes.) These methods are often subclassed because special\nconstraint operations can be used to control the actual\npositioning.\n"},
  {(char*)"SetTolerance", PyvtkHandleRepresentation_SetTolerance, METH_VARARGS,
   (char*)"V.SetTolerance(int)\nC++: void SetTolerance(int)\n\nThe tolerance representing the distance to the widget (in pixels)\nin which the cursor is considered near enough to the widget to be\nactive.\n"},
  {(char*)"GetToleranceMinValue", PyvtkHandleRepresentation_GetToleranceMinValue, METH_VARARGS,
   (char*)"V.GetToleranceMinValue() -> int\nC++: int GetToleranceMinValue()\n\nThe tolerance representing the distance to the widget (in pixels)\nin which the cursor is considered near enough to the widget to be\nactive.\n"},
  {(char*)"GetToleranceMaxValue", PyvtkHandleRepresentation_GetToleranceMaxValue, METH_VARARGS,
   (char*)"V.GetToleranceMaxValue() -> int\nC++: int GetToleranceMaxValue()\n\nThe tolerance representing the distance to the widget (in pixels)\nin which the cursor is considered near enough to the widget to be\nactive.\n"},
  {(char*)"GetTolerance", PyvtkHandleRepresentation_GetTolerance, METH_VARARGS,
   (char*)"V.GetTolerance() -> int\nC++: int GetTolerance()\n\nThe tolerance representing the distance to the widget (in pixels)\nin which the cursor is considered near enough to the widget to be\nactive.\n"},
  {(char*)"SetActiveRepresentation", PyvtkHandleRepresentation_SetActiveRepresentation, METH_VARARGS,
   (char*)"V.SetActiveRepresentation(int)\nC++: void SetActiveRepresentation(int a)\n\nFlag controls whether the widget becomes visible when the mouse\npointer moves close to it (i.e., the widget becomes active). By\ndefault, ActiveRepresentation is off and the representation is\nalways visible.\n"},
  {(char*)"GetActiveRepresentation", PyvtkHandleRepresentation_GetActiveRepresentation, METH_VARARGS,
   (char*)"V.GetActiveRepresentation() -> int\nC++: int GetActiveRepresentation()\n\nFlag controls whether the widget becomes visible when the mouse\npointer moves close to it (i.e., the widget becomes active). By\ndefault, ActiveRepresentation is off and the representation is\nalways visible.\n"},
  {(char*)"ActiveRepresentationOn", PyvtkHandleRepresentation_ActiveRepresentationOn, METH_VARARGS,
   (char*)"V.ActiveRepresentationOn()\nC++: void ActiveRepresentationOn()\n\nFlag controls whether the widget becomes visible when the mouse\npointer moves close to it (i.e., the widget becomes active). By\ndefault, ActiveRepresentation is off and the representation is\nalways visible.\n"},
  {(char*)"ActiveRepresentationOff", PyvtkHandleRepresentation_ActiveRepresentationOff, METH_VARARGS,
   (char*)"V.ActiveRepresentationOff()\nC++: void ActiveRepresentationOff()\n\nFlag controls whether the widget becomes visible when the mouse\npointer moves close to it (i.e., the widget becomes active). By\ndefault, ActiveRepresentation is off and the representation is\nalways visible.\n"},
  {(char*)"SetInteractionState", PyvtkHandleRepresentation_SetInteractionState, METH_VARARGS,
   (char*)"V.SetInteractionState(int)\nC++: void SetInteractionState(int)\n\nThe interaction state may be set from a widget (e.g.,\nHandleWidget) or other object. This controls how the interaction\nwith the widget proceeds. Normally this method is used as part of\na handshaking processwith the widget: First\nComputeInteractionState() is invoked that returns a state based\non geometric considerations (i.e., cursor near a widget feature),\nthen based on events, the widget may modify this further.\n"},
  {(char*)"GetInteractionStateMinValue", PyvtkHandleRepresentation_GetInteractionStateMinValue, METH_VARARGS,
   (char*)"V.GetInteractionStateMinValue() -> int\nC++: int GetInteractionStateMinValue()\n\nThe interaction state may be set from a widget (e.g.,\nHandleWidget) or other object. This controls how the interaction\nwith the widget proceeds. Normally this method is used as part of\na handshaking processwith the widget: First\nComputeInteractionState() is invoked that returns a state based\non geometric considerations (i.e., cursor near a widget feature),\nthen based on events, the widget may modify this further.\n"},
  {(char*)"GetInteractionStateMaxValue", PyvtkHandleRepresentation_GetInteractionStateMaxValue, METH_VARARGS,
   (char*)"V.GetInteractionStateMaxValue() -> int\nC++: int GetInteractionStateMaxValue()\n\nThe interaction state may be set from a widget (e.g.,\nHandleWidget) or other object. This controls how the interaction\nwith the widget proceeds. Normally this method is used as part of\na handshaking processwith the widget: First\nComputeInteractionState() is invoked that returns a state based\non geometric considerations (i.e., cursor near a widget feature),\nthen based on events, the widget may modify this further.\n"},
  {(char*)"SetConstrained", PyvtkHandleRepresentation_SetConstrained, METH_VARARGS,
   (char*)"V.SetConstrained(int)\nC++: void SetConstrained(int a)\n\nSpecify whether any motions (such as scale, translate, etc.) are\nconstrained in some way (along an axis, etc.) Widgets can use\nthis to control the resulting motion.\n"},
  {(char*)"GetConstrained", PyvtkHandleRepresentation_GetConstrained, METH_VARARGS,
   (char*)"V.GetConstrained() -> int\nC++: int GetConstrained()\n\nSpecify whether any motions (such as scale, translate, etc.) are\nconstrained in some way (along an axis, etc.) Widgets can use\nthis to control the resulting motion.\n"},
  {(char*)"ConstrainedOn", PyvtkHandleRepresentation_ConstrainedOn, METH_VARARGS,
   (char*)"V.ConstrainedOn()\nC++: void ConstrainedOn()\n\nSpecify whether any motions (such as scale, translate, etc.) are\nconstrained in some way (along an axis, etc.) Widgets can use\nthis to control the resulting motion.\n"},
  {(char*)"ConstrainedOff", PyvtkHandleRepresentation_ConstrainedOff, METH_VARARGS,
   (char*)"V.ConstrainedOff()\nC++: void ConstrainedOff()\n\nSpecify whether any motions (such as scale, translate, etc.) are\nconstrained in some way (along an axis, etc.) Widgets can use\nthis to control the resulting motion.\n"},
  {(char*)"CheckConstraint", PyvtkHandleRepresentation_CheckConstraint, METH_VARARGS,
   (char*)"V.CheckConstraint(vtkRenderer, [float, float]) -> int\nC++: virtual int CheckConstraint(vtkRenderer *renderer,\n    double pos[2])\n\nMethod has to be overridden in the subclasses which has\nconstraints on placing the handle (Ex.\nvtkConstrainedPointHandleRepresentation). It should return 1 if\nthe position is within the constraint, else it should return\n0. By default it returns 1.\n"},
  {(char*)"ShallowCopy", PyvtkHandleRepresentation_ShallowCopy, METH_VARARGS,
   (char*)"V.ShallowCopy(vtkProp)\nC++: virtual void ShallowCopy(vtkProp *prop)\n\nMethods to make this class properly act like a\nvtkWidgetRepresentation.\n"},
  {(char*)"DeepCopy", PyvtkHandleRepresentation_DeepCopy, METH_VARARGS,
   (char*)"V.DeepCopy(vtkProp)\nC++: virtual void DeepCopy(vtkProp *prop)\n\nMethods to make this class properly act like a\nvtkWidgetRepresentation.\n"},
  {(char*)"SetRenderer", PyvtkHandleRepresentation_SetRenderer, METH_VARARGS,
   (char*)"V.SetRenderer(vtkRenderer)\nC++: virtual void SetRenderer(vtkRenderer *ren)\n\nMethods to make this class properly act like a\nvtkWidgetRepresentation.\n"},
  {(char*)"GetMTime", PyvtkHandleRepresentation_GetMTime, METH_VARARGS,
   (char*)"V.GetMTime() -> int\nC++: virtual unsigned long GetMTime()\n\nOverload the superclasses' GetMTime() because the internal\nvtkCoordinates are used to keep the state of the representation.\n"},
  {(char*)"SetPointPlacer", PyvtkHandleRepresentation_SetPointPlacer, METH_VARARGS,
   (char*)"V.SetPointPlacer(vtkPointPlacer)\nC++: virtual void SetPointPlacer(vtkPointPlacer *)\n\nSet/Get the point placer. Point placers can be used to dictate\nconstraints on the placement of handles. As an example, see\nvtkBoundedPlanePointPlacer (constrains the placement of handles\nto a set of bounded planes) vtkFocalPlanePointPlacer (constrains\nplacement on the focal plane) etc. The default point placer is\nvtkPointPlacer (which does not apply any constraints, so the\nhandles are free to move anywhere).\n"},
  {(char*)"GetPointPlacer", PyvtkHandleRepresentation_GetPointPlacer, METH_VARARGS,
   (char*)"V.GetPointPlacer() -> vtkPointPlacer\nC++: vtkPointPlacer *GetPointPlacer()\n\nSet/Get the point placer. Point placers can be used to dictate\nconstraints on the placement of handles. As an example, see\nvtkBoundedPlanePointPlacer (constrains the placement of handles\nto a set of bounded planes) vtkFocalPlanePointPlacer (constrains\nplacement on the focal plane) etc. The default point placer is\nvtkPointPlacer (which does not apply any constraints, so the\nhandles are free to move anywhere).\n"},
  {NULL, NULL, 0, NULL}
};

PyObject *PyVTKClass_vtkHandleRepresentationNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(NULL,
    PyvtkHandleRepresentation_Methods,
    "vtkHandleRepresentation", modulename,
    NULL, NULL,
    PyvtkHandleRepresentation_Doc(),
    PyVTKClass_vtkWidgetRepresentationNew(modulename));

  if (cls)
    {
    PyObject *d = PyVTKClass_GetDict(cls);
    PyObject *o;

    PyType_Ready(&PyvtkHandleRepresentation__InteractionState_Type);
    PyvtkHandleRepresentation__InteractionState_Type.tp_new = NULL;

    o = (PyObject *)&PyvtkHandleRepresentation__InteractionState_Type;
    if (o && PyDict_SetItemString(d, (char *)"_InteractionState", o) != 0)
      {
      Py_DECREF(o);
      }

    for (int c = 0; c < 5; c++)
      {
      typedef vtkHandleRepresentation::_InteractionState cxx_enum_type;

      static const struct { const char *name; cxx_enum_type value; }
        constants[5] = {
          { "Outside", vtkHandleRepresentation::Outside },
          { "Nearby", vtkHandleRepresentation::Nearby },
          { "Selecting", vtkHandleRepresentation::Selecting },
          { "Translating", vtkHandleRepresentation::Translating },
          { "Scaling", vtkHandleRepresentation::Scaling },
        };

      o = PyvtkHandleRepresentation__InteractionState_FromEnum(constants[c].value);
      if (o)
        {
        PyDict_SetItemString(d, (char *)constants[c].name, o);
        Py_DECREF(o);
        }
      }

    }

  return cls;
}

const char **PyvtkHandleRepresentation_Doc()
{
  static const char *docstring[] = {
    "vtkHandleRepresentation - abstract class for representing widget\nhandles\n\n",
    "Superclass: vtkWidgetRepresentation\n\n",
    "This class defines an API for widget handle representations. These\nrepresentations interact with vtkHandleWidget. Various\nrepresentations can be used depending on the nature of the handle.\nThe basic functionality of the handle representation is to maintain a\nposition. The position is represented via a vtkCoordinate, meaning\nthat the position can be easily obtained in a variety of coordinate\nsystem",
    "s.\n\nOptional features for this representation include an active mode (the\nwidget appears only when the mouse pointer is close to it). The\nactive distance is expressed in pixels and represents a circle in\ndisplay space.\n\nThe class may be subclassed so that alternative representations can\nbe created.  The class defines an API and a default implementation\nthat the vtkHandleWidget interacts with to re",
    "nder itself in the\nscene.\n\nCaveats:\n\nThe separation of the widget event handling and representation\nenables users and developers to create new appearances for the\nwidget. It also facilitates parallel processing, where the client\napplication handles events, and remote representations of the widget\nare slaves to the client (and do not handle events).\n\nSee Also:\n\nvtkRectilinearWipeWidget vtkWidgetRep",
    "resentation vtkAbstractWidget\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkHandleRepresentation(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkHandleRepresentationNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkHandleRepresentation", o) != 0)
    {
    Py_DECREF(o);
    }

}

