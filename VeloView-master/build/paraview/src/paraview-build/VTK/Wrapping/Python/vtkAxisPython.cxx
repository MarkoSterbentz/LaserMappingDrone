// python wrapper for vtkAxis
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkVector.h"
#include "vtkStdString.h"
#include "vtkRect.h"
#include "vtkAxis.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkAxis(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkAxisNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkContextItemNew
extern "C" { PyObject *PyVTKClass_vtkContextItemNew(const char *); }
#define DECLARED_PyVTKClass_vtkContextItemNew
#endif

static const char **PyvtkAxis_Doc();

#ifndef DECLARED_PyvtkAxis_Location_Type
extern VTK_PYTHON_EXPORT PyTypeObject PyvtkAxis_Location_Type;
#define DECLARED_PyvtkAxis_Location_Type
#endif

PyTypeObject PyvtkAxis_Location_Type = {
  PyObject_HEAD_INIT(&PyType_Type)
  0,
  (char*)"Location", // tp_name
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

PyObject *PyvtkAxis_Location_FromEnum(int val)
{
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkAxis_Location_Type);
  self->ob_ival = val;
  return (PyObject *)self;
}


static PyObject *
PyvtkAxis_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxis *op = static_cast<vtkAxis *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkAxis::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAxis_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxis *op = static_cast<vtkAxis *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkAxis::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAxis_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxis *op = static_cast<vtkAxis *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkAxis *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkAxis::NewInstance());

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
PyvtkAxis_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkAxis *tempr = vtkAxis::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAxis_SetPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxis *op = static_cast<vtkAxis *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetPosition(temp0);
      }
    else
      {
      op->vtkAxis::SetPosition(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAxis_GetPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxis *op = static_cast<vtkAxis *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetPosition() :
      op->vtkAxis::GetPosition());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAxis_SetPoint1_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPoint1");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxis *op = static_cast<vtkAxis *>(vp);

  vtkVector2f *temp0 = NULL;
  PyObject *pobj0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkVector2f"))
    {
    if (ap.IsBound())
      {
      op->SetPoint1(*temp0);
      }
    else
      {
      op->vtkAxis::SetPoint1(*temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  Py_XDECREF(pobj0);

  return result;
}

static PyObject *
PyvtkAxis_SetPoint1_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPoint1");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxis *op = static_cast<vtkAxis *>(vp);

  float temp0;
  float temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetPoint1(temp0, temp1);
      }
    else
      {
      op->vtkAxis::SetPoint1(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkAxis_SetPoint1(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkAxis_SetPoint1_s1(self, args);
    case 2:
      return PyvtkAxis_SetPoint1_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetPoint1");
  return NULL;
}



static PyObject *
PyvtkAxis_GetPoint1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPoint1");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxis *op = static_cast<vtkAxis *>(vp);

  int sizer = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    float *tempr = (ap.IsBound() ?
      op->GetPoint1() :
      op->vtkAxis::GetPoint1());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkAxis_GetPosition1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPosition1");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxis *op = static_cast<vtkAxis *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkVector2f tempr = (ap.IsBound() ?
      op->GetPosition1() :
      op->vtkAxis::GetPosition1());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildSpecialObject(&tempr, "vtkVector2f");
      }
    }

  return result;
}


static PyObject *
PyvtkAxis_SetPoint2_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPoint2");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxis *op = static_cast<vtkAxis *>(vp);

  vtkVector2f *temp0 = NULL;
  PyObject *pobj0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkVector2f"))
    {
    if (ap.IsBound())
      {
      op->SetPoint2(*temp0);
      }
    else
      {
      op->vtkAxis::SetPoint2(*temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  Py_XDECREF(pobj0);

  return result;
}

static PyObject *
PyvtkAxis_SetPoint2_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPoint2");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxis *op = static_cast<vtkAxis *>(vp);

  float temp0;
  float temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetPoint2(temp0, temp1);
      }
    else
      {
      op->vtkAxis::SetPoint2(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkAxis_SetPoint2(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkAxis_SetPoint2_s1(self, args);
    case 2:
      return PyvtkAxis_SetPoint2_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetPoint2");
  return NULL;
}



static PyObject *
PyvtkAxis_GetPoint2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPoint2");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxis *op = static_cast<vtkAxis *>(vp);

  int sizer = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    float *tempr = (ap.IsBound() ?
      op->GetPoint2() :
      op->vtkAxis::GetPoint2());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkAxis_GetPosition2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPosition2");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxis *op = static_cast<vtkAxis *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkVector2f tempr = (ap.IsBound() ?
      op->GetPosition2() :
      op->vtkAxis::GetPosition2());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildSpecialObject(&tempr, "vtkVector2f");
      }
    }

  return result;
}


static PyObject *
PyvtkAxis_SetNumberOfTicks(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfTicks");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxis *op = static_cast<vtkAxis *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetNumberOfTicks(temp0);
      }
    else
      {
      op->vtkAxis::SetNumberOfTicks(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAxis_GetNumberOfTicks(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfTicks");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxis *op = static_cast<vtkAxis *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfTicks() :
      op->vtkAxis::GetNumberOfTicks());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAxis_GetLabelProperties(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLabelProperties");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxis *op = static_cast<vtkAxis *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkTextProperty *tempr = (ap.IsBound() ?
      op->GetLabelProperties() :
      op->vtkAxis::GetLabelProperties());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAxis_SetMinimum(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMinimum");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxis *op = static_cast<vtkAxis *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetMinimum(temp0);
      }
    else
      {
      op->vtkAxis::SetMinimum(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAxis_GetMinimum(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMinimum");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxis *op = static_cast<vtkAxis *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetMinimum() :
      op->vtkAxis::GetMinimum());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAxis_SetMaximum(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaximum");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxis *op = static_cast<vtkAxis *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetMaximum(temp0);
      }
    else
      {
      op->vtkAxis::SetMaximum(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAxis_GetMaximum(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximum");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxis *op = static_cast<vtkAxis *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetMaximum() :
      op->vtkAxis::GetMaximum());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAxis_SetUnscaledMinimum(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUnscaledMinimum");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxis *op = static_cast<vtkAxis *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetUnscaledMinimum(temp0);
      }
    else
      {
      op->vtkAxis::SetUnscaledMinimum(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAxis_GetUnscaledMinimum(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUnscaledMinimum");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxis *op = static_cast<vtkAxis *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetUnscaledMinimum() :
      op->vtkAxis::GetUnscaledMinimum());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAxis_SetUnscaledMaximum(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUnscaledMaximum");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxis *op = static_cast<vtkAxis *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetUnscaledMaximum(temp0);
      }
    else
      {
      op->vtkAxis::SetUnscaledMaximum(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAxis_GetUnscaledMaximum(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUnscaledMaximum");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxis *op = static_cast<vtkAxis *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetUnscaledMaximum() :
      op->vtkAxis::GetUnscaledMaximum());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAxis_SetRange_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxis *op = static_cast<vtkAxis *>(vp);

  double temp0;
  double temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetRange(temp0, temp1);
      }
    else
      {
      op->vtkAxis::SetRange(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkAxis_SetRange_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxis *op = static_cast<vtkAxis *>(vp);

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
      op->SetRange(temp0);
      }
    else
      {
      op->vtkAxis::SetRange(temp0);
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
PyvtkAxis_SetRange(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkAxis_SetRange_s1(self, args);
    case 1:
      return PyvtkAxis_SetRange_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetRange");
  return NULL;
}



static PyObject *
PyvtkAxis_SetUnscaledRange_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUnscaledRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxis *op = static_cast<vtkAxis *>(vp);

  double temp0;
  double temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetUnscaledRange(temp0, temp1);
      }
    else
      {
      op->vtkAxis::SetUnscaledRange(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkAxis_SetUnscaledRange_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUnscaledRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxis *op = static_cast<vtkAxis *>(vp);

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
      op->SetUnscaledRange(temp0);
      }
    else
      {
      op->vtkAxis::SetUnscaledRange(temp0);
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
PyvtkAxis_SetUnscaledRange(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkAxis_SetUnscaledRange_s1(self, args);
    case 1:
      return PyvtkAxis_SetUnscaledRange_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetUnscaledRange");
  return NULL;
}



static PyObject *
PyvtkAxis_GetRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxis *op = static_cast<vtkAxis *>(vp);

  double *temp0 = NULL;
  double *save0 = NULL;
  double small0[8];
  int size0 = 0;
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

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    if (ap.IsBound())
      {
      op->GetRange(temp0);
      }
    else
      {
      op->vtkAxis::GetRange(temp0);
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
PyvtkAxis_GetUnscaledRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUnscaledRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxis *op = static_cast<vtkAxis *>(vp);

  double *temp0 = NULL;
  double *save0 = NULL;
  double small0[8];
  int size0 = 0;
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

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    if (ap.IsBound())
      {
      op->GetUnscaledRange(temp0);
      }
    else
      {
      op->vtkAxis::GetUnscaledRange(temp0);
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
PyvtkAxis_SetMinimumLimit(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMinimumLimit");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxis *op = static_cast<vtkAxis *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetMinimumLimit(temp0);
      }
    else
      {
      op->vtkAxis::SetMinimumLimit(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAxis_GetMinimumLimit(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMinimumLimit");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxis *op = static_cast<vtkAxis *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetMinimumLimit() :
      op->vtkAxis::GetMinimumLimit());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAxis_SetMaximumLimit(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaximumLimit");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxis *op = static_cast<vtkAxis *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetMaximumLimit(temp0);
      }
    else
      {
      op->vtkAxis::SetMaximumLimit(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAxis_GetMaximumLimit(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumLimit");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxis *op = static_cast<vtkAxis *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetMaximumLimit() :
      op->vtkAxis::GetMaximumLimit());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAxis_SetUnscaledMinimumLimit(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUnscaledMinimumLimit");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxis *op = static_cast<vtkAxis *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetUnscaledMinimumLimit(temp0);
      }
    else
      {
      op->vtkAxis::SetUnscaledMinimumLimit(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAxis_GetUnscaledMinimumLimit(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUnscaledMinimumLimit");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxis *op = static_cast<vtkAxis *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetUnscaledMinimumLimit() :
      op->vtkAxis::GetUnscaledMinimumLimit());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAxis_SetUnscaledMaximumLimit(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUnscaledMaximumLimit");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxis *op = static_cast<vtkAxis *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetUnscaledMaximumLimit(temp0);
      }
    else
      {
      op->vtkAxis::SetUnscaledMaximumLimit(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAxis_GetUnscaledMaximumLimit(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUnscaledMaximumLimit");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxis *op = static_cast<vtkAxis *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetUnscaledMaximumLimit() :
      op->vtkAxis::GetUnscaledMaximumLimit());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAxis_GetMargins(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMargins");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxis *op = static_cast<vtkAxis *>(vp);

  int sizer = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int *tempr = (ap.IsBound() ?
      op->GetMargins() :
      op->vtkAxis::GetMargins());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkAxis_SetMargins_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMargins");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxis *op = static_cast<vtkAxis *>(vp);

  int temp0;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetMargins(temp0, temp1);
      }
    else
      {
      op->vtkAxis::SetMargins(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkAxis_SetMargins_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMargins");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxis *op = static_cast<vtkAxis *>(vp);

  int temp0[2];
  const int size0 = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetMargins(temp0);
      }
    else
      {
      op->vtkAxis::SetMargins(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkAxis_SetMargins(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkAxis_SetMargins_s1(self, args);
    case 1:
      return PyvtkAxis_SetMargins_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetMargins");
  return NULL;
}



static PyObject *
PyvtkAxis_SetTitle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTitle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxis *op = static_cast<vtkAxis *>(vp);

  vtkStdString temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetTitle(temp0);
      }
    else
      {
      op->vtkAxis::SetTitle(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAxis_GetTitle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTitle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxis *op = static_cast<vtkAxis *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkStdString tempr = (ap.IsBound() ?
      op->GetTitle() :
      op->vtkAxis::GetTitle());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAxis_GetTitleProperties(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTitleProperties");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxis *op = static_cast<vtkAxis *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkTextProperty *tempr = (ap.IsBound() ?
      op->GetTitleProperties() :
      op->vtkAxis::GetTitleProperties());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAxis_GetLogScaleActive(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLogScaleActive");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxis *op = static_cast<vtkAxis *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetLogScaleActive() :
      op->vtkAxis::GetLogScaleActive());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAxis_GetLogScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLogScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxis *op = static_cast<vtkAxis *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetLogScale() :
      op->vtkAxis::GetLogScale());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAxis_SetLogScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLogScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxis *op = static_cast<vtkAxis *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetLogScale(temp0);
      }
    else
      {
      op->vtkAxis::SetLogScale(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAxis_LogScaleOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LogScaleOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxis *op = static_cast<vtkAxis *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->LogScaleOn();
      }
    else
      {
      op->vtkAxis::LogScaleOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAxis_LogScaleOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LogScaleOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxis *op = static_cast<vtkAxis *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->LogScaleOff();
      }
    else
      {
      op->vtkAxis::LogScaleOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAxis_SetGridVisible(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGridVisible");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxis *op = static_cast<vtkAxis *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetGridVisible(temp0);
      }
    else
      {
      op->vtkAxis::SetGridVisible(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAxis_GetGridVisible(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGridVisible");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxis *op = static_cast<vtkAxis *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetGridVisible() :
      op->vtkAxis::GetGridVisible());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAxis_SetLabelsVisible(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLabelsVisible");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxis *op = static_cast<vtkAxis *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetLabelsVisible(temp0);
      }
    else
      {
      op->vtkAxis::SetLabelsVisible(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAxis_GetLabelsVisible(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLabelsVisible");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxis *op = static_cast<vtkAxis *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetLabelsVisible() :
      op->vtkAxis::GetLabelsVisible());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAxis_SetTicksVisible(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTicksVisible");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxis *op = static_cast<vtkAxis *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetTicksVisible(temp0);
      }
    else
      {
      op->vtkAxis::SetTicksVisible(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAxis_GetTicksVisible(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTicksVisible");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxis *op = static_cast<vtkAxis *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetTicksVisible() :
      op->vtkAxis::GetTicksVisible());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAxis_SetAxisVisible(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAxisVisible");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxis *op = static_cast<vtkAxis *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetAxisVisible(temp0);
      }
    else
      {
      op->vtkAxis::SetAxisVisible(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAxis_GetAxisVisible(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAxisVisible");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxis *op = static_cast<vtkAxis *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetAxisVisible() :
      op->vtkAxis::GetAxisVisible());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAxis_SetPrecision(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPrecision");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxis *op = static_cast<vtkAxis *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetPrecision(temp0);
      }
    else
      {
      op->vtkAxis::SetPrecision(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAxis_GetPrecision(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPrecision");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxis *op = static_cast<vtkAxis *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetPrecision() :
      op->vtkAxis::GetPrecision());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAxis_SetNotation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNotation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxis *op = static_cast<vtkAxis *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetNotation(temp0);
      }
    else
      {
      op->vtkAxis::SetNotation(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAxis_GetNotation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNotation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxis *op = static_cast<vtkAxis *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNotation() :
      op->vtkAxis::GetNotation());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAxis_SetBehavior(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBehavior");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxis *op = static_cast<vtkAxis *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetBehavior(temp0);
      }
    else
      {
      op->vtkAxis::SetBehavior(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAxis_GetBehavior(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBehavior");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxis *op = static_cast<vtkAxis *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetBehavior() :
      op->vtkAxis::GetBehavior());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAxis_GetPen(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPen");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxis *op = static_cast<vtkAxis *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPen *tempr = (ap.IsBound() ?
      op->GetPen() :
      op->vtkAxis::GetPen());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAxis_GetGridPen(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGridPen");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxis *op = static_cast<vtkAxis *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPen *tempr = (ap.IsBound() ?
      op->GetGridPen() :
      op->vtkAxis::GetGridPen());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAxis_SetTickLabelAlgorithm(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTickLabelAlgorithm");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxis *op = static_cast<vtkAxis *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetTickLabelAlgorithm(temp0);
      }
    else
      {
      op->vtkAxis::SetTickLabelAlgorithm(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAxis_GetTickLabelAlgorithm(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTickLabelAlgorithm");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxis *op = static_cast<vtkAxis *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetTickLabelAlgorithm() :
      op->vtkAxis::GetTickLabelAlgorithm());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAxis_SetScalingFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalingFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxis *op = static_cast<vtkAxis *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetScalingFactor(temp0);
      }
    else
      {
      op->vtkAxis::SetScalingFactor(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAxis_GetScalingFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalingFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxis *op = static_cast<vtkAxis *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetScalingFactor() :
      op->vtkAxis::GetScalingFactor());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAxis_SetShift(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetShift");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxis *op = static_cast<vtkAxis *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetShift(temp0);
      }
    else
      {
      op->vtkAxis::SetShift(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAxis_GetShift(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetShift");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxis *op = static_cast<vtkAxis *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetShift() :
      op->vtkAxis::GetShift());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAxis_Update(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Update");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxis *op = static_cast<vtkAxis *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Update();
      }
    else
      {
      op->vtkAxis::Update();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAxis_Paint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Paint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxis *op = static_cast<vtkAxis *>(vp);

  vtkContext2D *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkContext2D"))
    {
    bool tempr = (ap.IsBound() ?
      op->Paint(temp0) :
      op->vtkAxis::Paint(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAxis_AutoScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AutoScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxis *op = static_cast<vtkAxis *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->AutoScale();
      }
    else
      {
      op->vtkAxis::AutoScale();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAxis_RecalculateTickSpacing(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RecalculateTickSpacing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxis *op = static_cast<vtkAxis *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->RecalculateTickSpacing();
      }
    else
      {
      op->vtkAxis::RecalculateTickSpacing();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAxis_GetTickPositions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTickPositions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxis *op = static_cast<vtkAxis *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkDoubleArray *tempr = (ap.IsBound() ?
      op->GetTickPositions() :
      op->vtkAxis::GetTickPositions());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAxis_GetTickScenePositions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTickScenePositions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxis *op = static_cast<vtkAxis *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkFloatArray *tempr = (ap.IsBound() ?
      op->GetTickScenePositions() :
      op->vtkAxis::GetTickScenePositions());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAxis_GetTickLabels(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTickLabels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxis *op = static_cast<vtkAxis *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkStringArray *tempr = (ap.IsBound() ?
      op->GetTickLabels() :
      op->vtkAxis::GetTickLabels());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAxis_SetCustomTickPositions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCustomTickPositions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxis *op = static_cast<vtkAxis *>(vp);

  vtkDoubleArray *temp0 = NULL;
  vtkStringArray *temp1 = 0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1, 2) &&
      ap.GetVTKObject(temp0, "vtkDoubleArray") &&
      (ap.NoArgsLeft() || ap.GetVTKObject(temp1, "vtkStringArray")))
    {
    bool tempr = (ap.IsBound() ?
      op->SetCustomTickPositions(temp0, temp1) :
      op->vtkAxis::SetCustomTickPositions(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


#if !defined(VTK_LEGACY_REMOVE)
static PyObject *
PyvtkAxis_SetTickPositions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTickPositions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxis *op = static_cast<vtkAxis *>(vp);

  vtkDoubleArray *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDoubleArray"))
    {
    if (ap.IsBound())
      {
      op->SetTickPositions(temp0);
      }
    else
      {
      op->vtkAxis::SetTickPositions(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}
#endif


#if !defined(VTK_LEGACY_REMOVE)
static PyObject *
PyvtkAxis_SetTickLabels(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTickLabels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxis *op = static_cast<vtkAxis *>(vp);

  vtkStringArray *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkStringArray"))
    {
    if (ap.IsBound())
      {
      op->SetTickLabels(temp0);
      }
    else
      {
      op->vtkAxis::SetTickLabels(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}
#endif


static PyObject *
PyvtkAxis_GetBoundingRect(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBoundingRect");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxis *op = static_cast<vtkAxis *>(vp);

  vtkContext2D *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkContext2D"))
    {
    vtkRectf tempr = (ap.IsBound() ?
      op->GetBoundingRect(temp0) :
      op->vtkAxis::GetBoundingRect(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildSpecialObject(&tempr, "vtkRectf");
      }
    }

  return result;
}


static PyObject *
PyvtkAxis_NiceNumber(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "NiceNumber");

  double temp0;
  bool temp1 = false;
  PyObject *result = NULL;

  if (ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    double tempr = vtkAxis::NiceNumber(temp0, temp1);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAxis_NiceMinMax(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "NiceMinMax");

  double temp0;
  double temp1;
  float temp2;
  float temp3;
  PyObject *result = NULL;

  if (ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
    {
    double tempr = vtkAxis::NiceMinMax(temp0, temp1, temp2, temp3);

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
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkAxis_Methods[] = {
  {(char*)"GetClassName", PyvtkAxis_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkAxis_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkAxis_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkAxis\nC++: vtkAxis *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkAxis_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkAxis\nC++: vtkAxis *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetPosition", PyvtkAxis_SetPosition, METH_VARARGS,
   (char*)"V.SetPosition(int)\nC++: virtual void SetPosition(int position)\n\nGet/set the position of the axis (LEFT, BOTTOM, RIGHT, TOP,\nPARALLEL).\n"},
  {(char*)"GetPosition", PyvtkAxis_GetPosition, METH_VARARGS,
   (char*)"V.GetPosition() -> int\nC++: int GetPosition()\n\nGet/set the position of the axis (LEFT, BOTTOM, RIGHT, TOP,\nPARALLEL).\n"},
  {(char*)"SetPoint1", PyvtkAxis_SetPoint1, METH_VARARGS,
   (char*)"V.SetPoint1(vtkVector2f)\nC++: void SetPoint1(const vtkVector2f &pos)\nV.SetPoint1(float, float)\nC++: void SetPoint1(float x, float y)\n\nSet point 1 of the axis (in pixels), this is usually the origin.\n"},
  {(char*)"GetPoint1", PyvtkAxis_GetPoint1, METH_VARARGS,
   (char*)"V.GetPoint1() -> (float, float)\nC++: float *GetPoint1()\n\n"},
  {(char*)"GetPosition1", PyvtkAxis_GetPosition1, METH_VARARGS,
   (char*)"V.GetPosition1() -> vtkVector2f\nC++: vtkVector2f GetPosition1()\n\nGet point 1 of the axis (in pixels), this is usually the origin.\n"},
  {(char*)"SetPoint2", PyvtkAxis_SetPoint2, METH_VARARGS,
   (char*)"V.SetPoint2(vtkVector2f)\nC++: void SetPoint2(const vtkVector2f &pos)\nV.SetPoint2(float, float)\nC++: void SetPoint2(float x, float y)\n\nSet point 2 of the axis (in pixels), this is usually the\nterminus.\n"},
  {(char*)"GetPoint2", PyvtkAxis_GetPoint2, METH_VARARGS,
   (char*)"V.GetPoint2() -> (float, float)\nC++: float *GetPoint2()\n\n"},
  {(char*)"GetPosition2", PyvtkAxis_GetPosition2, METH_VARARGS,
   (char*)"V.GetPosition2() -> vtkVector2f\nC++: vtkVector2f GetPosition2()\n\nGet point 2 of the axis (in pixels), this is usually the\nterminus.\n"},
  {(char*)"SetNumberOfTicks", PyvtkAxis_SetNumberOfTicks, METH_VARARGS,
   (char*)"V.SetNumberOfTicks(int)\nC++: virtual void SetNumberOfTicks(int numberOfTicks)\n\nSet the number of tick marks for this axis. Default is -1, which\nleads to automatic calculation of nicely spaced tick marks.\n"},
  {(char*)"GetNumberOfTicks", PyvtkAxis_GetNumberOfTicks, METH_VARARGS,
   (char*)"V.GetNumberOfTicks() -> int\nC++: int GetNumberOfTicks()\n\nGet the number of tick marks for this axis.\n"},
  {(char*)"GetLabelProperties", PyvtkAxis_GetLabelProperties, METH_VARARGS,
   (char*)"V.GetLabelProperties() -> vtkTextProperty\nC++: vtkTextProperty *GetLabelProperties()\n\nGet the vtkTextProperty that governs how the axis lables are\ndisplayed. Note that the alignment properties are not used.\n"},
  {(char*)"SetMinimum", PyvtkAxis_SetMinimum, METH_VARARGS,
   (char*)"V.SetMinimum(float)\nC++: virtual void SetMinimum(double minimum)\n\nSet the logical minimum value of the axis, in plot coordinates.\nIf LogScaleActive is true (not just LogScale), then this sets the\nminimum base-10 exponent.\n"},
  {(char*)"GetMinimum", PyvtkAxis_GetMinimum, METH_VARARGS,
   (char*)"V.GetMinimum() -> float\nC++: double GetMinimum()\n\nGet the logical minimum value of the axis, in plot coordinates.\nIf LogScaleActive is true (not just LogScale), then this returns\nthe minimum base-10 exponent.\n"},
  {(char*)"SetMaximum", PyvtkAxis_SetMaximum, METH_VARARGS,
   (char*)"V.SetMaximum(float)\nC++: virtual void SetMaximum(double maximum)\n\nSet the logical maximum value of the axis, in plot coordinates.\nIf LogScaleActive is true (not just LogScale), then this sets the\nmaximum base-10 exponent.\n"},
  {(char*)"GetMaximum", PyvtkAxis_GetMaximum, METH_VARARGS,
   (char*)"V.GetMaximum() -> float\nC++: double GetMaximum()\n\nGet the logical maximum value of the axis, in plot coordinates.\nIf LogScaleActive is true (not just LogScale), then this returns\nthe maximum base-10 exponent.\n"},
  {(char*)"SetUnscaledMinimum", PyvtkAxis_SetUnscaledMinimum, METH_VARARGS,
   (char*)"V.SetUnscaledMinimum(float)\nC++: virtual void SetUnscaledMinimum(double minimum)\n\nSet the logical, unscaled minimum value of the axis, in plot\ncoordinates. Use this instead of SetMinimum() if you wish to\nprovide the actual minimum instead of log10(the minimum) as part\nof the axis scale.\n"},
  {(char*)"GetUnscaledMinimum", PyvtkAxis_GetUnscaledMinimum, METH_VARARGS,
   (char*)"V.GetUnscaledMinimum() -> float\nC++: double GetUnscaledMinimum()\n\nGet the logical minimum value of the axis, in plot coordinates.\n"},
  {(char*)"SetUnscaledMaximum", PyvtkAxis_SetUnscaledMaximum, METH_VARARGS,
   (char*)"V.SetUnscaledMaximum(float)\nC++: virtual void SetUnscaledMaximum(double maximum)\n\nSet the logical maximum value of the axis, in plot coordinates.\n"},
  {(char*)"GetUnscaledMaximum", PyvtkAxis_GetUnscaledMaximum, METH_VARARGS,
   (char*)"V.GetUnscaledMaximum() -> float\nC++: double GetUnscaledMaximum()\n\nGet the logical maximum value of the axis, in plot coordinates.\n"},
  {(char*)"SetRange", PyvtkAxis_SetRange, METH_VARARGS,
   (char*)"V.SetRange(float, float)\nC++: virtual void SetRange(double minimum, double maximum)\nV.SetRange([float, float])\nC++: virtual void SetRange(double range[2])\n\nSet the logical range of the axis, in plot coordinates.\n\nThe unscaled range will always be in the same coordinate system\nof the data being plotted, regardless of whether LogScale is true\nor false. When calling SetRange() and LogScale is true, the range\nmust be specified in logarithmic coordinates. Using\nSetUnscaledRange(), you may ignore the value of LogScale.\n"},
  {(char*)"SetUnscaledRange", PyvtkAxis_SetUnscaledRange, METH_VARARGS,
   (char*)"V.SetUnscaledRange(float, float)\nC++: virtual void SetUnscaledRange(double minimum, double maximum)\nV.SetUnscaledRange([float, float])\nC++: virtual void SetUnscaledRange(double range[2])\n\nSet the logical range of the axis, in plot coordinates.\n\nThe unscaled range will always be in the same coordinate system\nof the data being plotted, regardless of whether LogScale is true\nor false. When calling SetRange() and LogScale is true, the range\nmust be specified in logarithmic coordinates. Using\nSetUnscaledRange(), you may ignore the value of LogScale.\n"},
  {(char*)"GetRange", PyvtkAxis_GetRange, METH_VARARGS,
   (char*)"V.GetRange([float, ...])\nC++: virtual void GetRange(double *range)\n\nGet the logical range of the axis, in plot coordinates.\n\nThe unscaled range will always be in the same coordinate system\nof the data being plotted, regardless of whether LogScale is true\nor false. Calling GetRange() when LogScale is true will return\nthe log10({min, max}).\n"},
  {(char*)"GetUnscaledRange", PyvtkAxis_GetUnscaledRange, METH_VARARGS,
   (char*)"V.GetUnscaledRange([float, ...])\nC++: virtual void GetUnscaledRange(double *range)\n\nGet the logical range of the axis, in plot coordinates.\n\nThe unscaled range will always be in the same coordinate system\nof the data being plotted, regardless of whether LogScale is true\nor false. Calling GetRange() when LogScale is true will return\nthe log10({min, max}).\n"},
  {(char*)"SetMinimumLimit", PyvtkAxis_SetMinimumLimit, METH_VARARGS,
   (char*)"V.SetMinimumLimit(float)\nC++: virtual void SetMinimumLimit(double lowest)\n\nSet the logical lowest possible value for Minimum, in plot\ncoordinates.\n"},
  {(char*)"GetMinimumLimit", PyvtkAxis_GetMinimumLimit, METH_VARARGS,
   (char*)"V.GetMinimumLimit() -> float\nC++: double GetMinimumLimit()\n\nGet the logical lowest possible value for Minimum, in plot\ncoordinates.\n"},
  {(char*)"SetMaximumLimit", PyvtkAxis_SetMaximumLimit, METH_VARARGS,
   (char*)"V.SetMaximumLimit(float)\nC++: virtual void SetMaximumLimit(double highest)\n\nSet the logical highest possible value for Maximum, in plot\ncoordinates.\n"},
  {(char*)"GetMaximumLimit", PyvtkAxis_GetMaximumLimit, METH_VARARGS,
   (char*)"V.GetMaximumLimit() -> float\nC++: double GetMaximumLimit()\n\nGet the logical highest possible value for Maximum, in plot\ncoordinates.\n"},
  {(char*)"SetUnscaledMinimumLimit", PyvtkAxis_SetUnscaledMinimumLimit, METH_VARARGS,
   (char*)"V.SetUnscaledMinimumLimit(float)\nC++: virtual void SetUnscaledMinimumLimit(double lowest)\n\nSet the logical lowest possible value for Minimum, in plot\ncoordinates.\n"},
  {(char*)"GetUnscaledMinimumLimit", PyvtkAxis_GetUnscaledMinimumLimit, METH_VARARGS,
   (char*)"V.GetUnscaledMinimumLimit() -> float\nC++: double GetUnscaledMinimumLimit()\n\nGet the logical lowest possible value for Minimum, in plot\ncoordinates.\n"},
  {(char*)"SetUnscaledMaximumLimit", PyvtkAxis_SetUnscaledMaximumLimit, METH_VARARGS,
   (char*)"V.SetUnscaledMaximumLimit(float)\nC++: virtual void SetUnscaledMaximumLimit(double highest)\n\nSet the logical highest possible value for Maximum, in plot\ncoordinates.\n"},
  {(char*)"GetUnscaledMaximumLimit", PyvtkAxis_GetUnscaledMaximumLimit, METH_VARARGS,
   (char*)"V.GetUnscaledMaximumLimit() -> float\nC++: double GetUnscaledMaximumLimit()\n\nGet the logical highest possible value for Maximum, in plot\ncoordinates.\n"},
  {(char*)"GetMargins", PyvtkAxis_GetMargins, METH_VARARGS,
   (char*)"V.GetMargins() -> (int, int)\nC++: int *GetMargins()\n\n"},
  {(char*)"SetMargins", PyvtkAxis_SetMargins, METH_VARARGS,
   (char*)"V.SetMargins(int, int)\nC++: void SetMargins(int, int)\nV.SetMargins((int, int))\nC++: void SetMargins(int a[2])\n\n"},
  {(char*)"SetTitle", PyvtkAxis_SetTitle, METH_VARARGS,
   (char*)"V.SetTitle(string)\nC++: virtual void SetTitle(const vtkStdString &title)\n\nGet/set the title text of the axis.\n"},
  {(char*)"GetTitle", PyvtkAxis_GetTitle, METH_VARARGS,
   (char*)"V.GetTitle() -> string\nC++: virtual vtkStdString GetTitle()\n\nGet/set the title text of the axis.\n"},
  {(char*)"GetTitleProperties", PyvtkAxis_GetTitleProperties, METH_VARARGS,
   (char*)"V.GetTitleProperties() -> vtkTextProperty\nC++: vtkTextProperty *GetTitleProperties()\n\nGet the vtkTextProperty that governs how the axis title is\ndisplayed.\n"},
  {(char*)"GetLogScaleActive", PyvtkAxis_GetLogScaleActive, METH_VARARGS,
   (char*)"V.GetLogScaleActive() -> bool\nC++: bool GetLogScaleActive()\n\nGet whether the axis is using a log scale. This will always be\nfalse when LogScale is false. It is only true when LogScale is\ntrue andthe UnscaledRange does not cross or include the origin\n(zero).\n\nThe limits ( MinimumLimit, MaximumLimit, and their unscaled\ncounterparts) do not prevent LogScaleActive from becoming true;\nthey are adjusted if they cross or include the origin and the\noriginal limits are preserved for when LogScaleActive becomes\nfalse again.\n"},
  {(char*)"GetLogScale", PyvtkAxis_GetLogScale, METH_VARARGS,
   (char*)"V.GetLogScale() -> bool\nC++: bool GetLogScale()\n\nGet/set whether the axis should attemptto use a log scale.\n\nThe default is false.\\sa{LogScaleActive}.\n"},
  {(char*)"SetLogScale", PyvtkAxis_SetLogScale, METH_VARARGS,
   (char*)"V.SetLogScale(bool)\nC++: virtual void SetLogScale(bool logScale)\n\nGet/set whether the axis should attemptto use a log scale.\n\nThe default is false.\\sa{LogScaleActive}.\n"},
  {(char*)"LogScaleOn", PyvtkAxis_LogScaleOn, METH_VARARGS,
   (char*)"V.LogScaleOn()\nC++: void LogScaleOn()\n\nGet/set whether the axis should attemptto use a log scale.\n\nThe default is false.\\sa{LogScaleActive}.\n"},
  {(char*)"LogScaleOff", PyvtkAxis_LogScaleOff, METH_VARARGS,
   (char*)"V.LogScaleOff()\nC++: void LogScaleOff()\n\nGet/set whether the axis should attemptto use a log scale.\n\nThe default is false.\\sa{LogScaleActive}.\n"},
  {(char*)"SetGridVisible", PyvtkAxis_SetGridVisible, METH_VARARGS,
   (char*)"V.SetGridVisible(bool)\nC++: void SetGridVisible(bool a)\n\nGet/set whether the axis grid lines should be drawn, default is\ntrue.\n"},
  {(char*)"GetGridVisible", PyvtkAxis_GetGridVisible, METH_VARARGS,
   (char*)"V.GetGridVisible() -> bool\nC++: bool GetGridVisible()\n\nGet/set whether the axis grid lines should be drawn, default is\ntrue.\n"},
  {(char*)"SetLabelsVisible", PyvtkAxis_SetLabelsVisible, METH_VARARGS,
   (char*)"V.SetLabelsVisible(bool)\nC++: void SetLabelsVisible(bool a)\n\nGet/set whether the axis labels should be visible.\n"},
  {(char*)"GetLabelsVisible", PyvtkAxis_GetLabelsVisible, METH_VARARGS,
   (char*)"V.GetLabelsVisible() -> bool\nC++: bool GetLabelsVisible()\n\nGet/set whether the axis labels should be visible.\n"},
  {(char*)"SetTicksVisible", PyvtkAxis_SetTicksVisible, METH_VARARGS,
   (char*)"V.SetTicksVisible(bool)\nC++: void SetTicksVisible(bool a)\n\nGet/set whether the tick marks should be visible.\n"},
  {(char*)"GetTicksVisible", PyvtkAxis_GetTicksVisible, METH_VARARGS,
   (char*)"V.GetTicksVisible() -> bool\nC++: bool GetTicksVisible()\n\nGet/set whether the tick marks should be visible.\n"},
  {(char*)"SetAxisVisible", PyvtkAxis_SetAxisVisible, METH_VARARGS,
   (char*)"V.SetAxisVisible(bool)\nC++: void SetAxisVisible(bool a)\n\nGet/set whether the axis line should be visible.\n"},
  {(char*)"GetAxisVisible", PyvtkAxis_GetAxisVisible, METH_VARARGS,
   (char*)"V.GetAxisVisible() -> bool\nC++: bool GetAxisVisible()\n\nGet/set whether the axis line should be visible.\n"},
  {(char*)"SetPrecision", PyvtkAxis_SetPrecision, METH_VARARGS,
   (char*)"V.SetPrecision(int)\nC++: virtual void SetPrecision(int precision)\n\nGet/set the numerical precision to use, default is 2.\n"},
  {(char*)"GetPrecision", PyvtkAxis_GetPrecision, METH_VARARGS,
   (char*)"V.GetPrecision() -> int\nC++: int GetPrecision()\n\nGet/set the numerical precision to use, default is 2.\n"},
  {(char*)"SetNotation", PyvtkAxis_SetNotation, METH_VARARGS,
   (char*)"V.SetNotation(int)\nC++: virtual void SetNotation(int notation)\n\nGet/set the numerical notation, standard, scientific or mixed (0,\n1, 2).\n"},
  {(char*)"GetNotation", PyvtkAxis_GetNotation, METH_VARARGS,
   (char*)"V.GetNotation() -> int\nC++: int GetNotation()\n\nGet/set the numerical notation, standard, scientific or mixed (0,\n1, 2).\n"},
  {(char*)"SetBehavior", PyvtkAxis_SetBehavior, METH_VARARGS,
   (char*)"V.SetBehavior(int)\nC++: void SetBehavior(int a)\n\nGet/set the behavior of the axis (auto or fixed). The default is\n0 (auto).\n"},
  {(char*)"GetBehavior", PyvtkAxis_GetBehavior, METH_VARARGS,
   (char*)"V.GetBehavior() -> int\nC++: int GetBehavior()\n\nGet/set the behavior of the axis (auto or fixed). The default is\n0 (auto).\n"},
  {(char*)"GetPen", PyvtkAxis_GetPen, METH_VARARGS,
   (char*)"V.GetPen() -> vtkPen\nC++: vtkPen *GetPen()\n\nGet a pointer to the vtkPen object that controls the way this\naxis is drawn.\n"},
  {(char*)"GetGridPen", PyvtkAxis_GetGridPen, METH_VARARGS,
   (char*)"V.GetGridPen() -> vtkPen\nC++: vtkPen *GetGridPen()\n\nGet a pointer to the vtkPen object that controls the way this\naxis is drawn.\n"},
  {(char*)"SetTickLabelAlgorithm", PyvtkAxis_SetTickLabelAlgorithm, METH_VARARGS,
   (char*)"V.SetTickLabelAlgorithm(int)\nC++: void SetTickLabelAlgorithm(int a)\n\nGet/set the tick label algorithm that is used to calculate the\nmin, max and tick spacing. There are currently two algoriths,\nvtkAxis::TICK_SIMPLE is the default and uses a simple algorithm.\nThe second option is vtkAxis::TICK_WILKINSON which uses an\nextended Wilkinson algorithm to find the optimal range, spacing\nand font parameters.\n"},
  {(char*)"GetTickLabelAlgorithm", PyvtkAxis_GetTickLabelAlgorithm, METH_VARARGS,
   (char*)"V.GetTickLabelAlgorithm() -> int\nC++: int GetTickLabelAlgorithm()\n\nGet/set the tick label algorithm that is used to calculate the\nmin, max and tick spacing. There are currently two algoriths,\nvtkAxis::TICK_SIMPLE is the default and uses a simple algorithm.\nThe second option is vtkAxis::TICK_WILKINSON which uses an\nextended Wilkinson algorithm to find the optimal range, spacing\nand font parameters.\n"},
  {(char*)"SetScalingFactor", PyvtkAxis_SetScalingFactor, METH_VARARGS,
   (char*)"V.SetScalingFactor(float)\nC++: void SetScalingFactor(double a)\n\nGet/set the scaling factor used for the axis, this defaults to\n1.0 (no scaling), and is used to coordinate scaling with the\nplots, charts, etc.\n"},
  {(char*)"GetScalingFactor", PyvtkAxis_GetScalingFactor, METH_VARARGS,
   (char*)"V.GetScalingFactor() -> float\nC++: double GetScalingFactor()\n\nGet/set the scaling factor used for the axis, this defaults to\n1.0 (no scaling), and is used to coordinate scaling with the\nplots, charts, etc.\n"},
  {(char*)"SetShift", PyvtkAxis_SetShift, METH_VARARGS,
   (char*)"V.SetShift(float)\nC++: void SetShift(double a)\n\nGet/set the scaling factor used for the axis, this defaults to\n1.0 (no scaling), and is used to coordinate scaling with the\nplots, charts, etc.\n"},
  {(char*)"GetShift", PyvtkAxis_GetShift, METH_VARARGS,
   (char*)"V.GetShift() -> float\nC++: double GetShift()\n\nGet/set the scaling factor used for the axis, this defaults to\n1.0 (no scaling), and is used to coordinate scaling with the\nplots, charts, etc.\n"},
  {(char*)"Update", PyvtkAxis_Update, METH_VARARGS,
   (char*)"V.Update()\nC++: virtual void Update()\n\nUpdate the geometry of the axis. Takes care of setting up the\ntick mark locations etc. Should be called by the scene before\nrendering.\n"},
  {(char*)"Paint", PyvtkAxis_Paint, METH_VARARGS,
   (char*)"V.Paint(vtkContext2D) -> bool\nC++: virtual bool Paint(vtkContext2D *painter)\n\nPaint event for the axis, called whenever the axis needs to be\ndrawn.\n"},
  {(char*)"AutoScale", PyvtkAxis_AutoScale, METH_VARARGS,
   (char*)"V.AutoScale()\nC++: virtual void AutoScale()\n\nUse this function to autoscale the axes after setting the minimum\nand maximum values. This will cause the axes to select the nicest\nnumbers that enclose the minimum and maximum values, and to\nselect an appropriate number of tick marks.\n"},
  {(char*)"RecalculateTickSpacing", PyvtkAxis_RecalculateTickSpacing, METH_VARARGS,
   (char*)"V.RecalculateTickSpacing()\nC++: virtual void RecalculateTickSpacing()\n\nRecalculate the spacing of the tick marks - typically useful to\ndo after scaling the axis.\n"},
  {(char*)"GetTickPositions", PyvtkAxis_GetTickPositions, METH_VARARGS,
   (char*)"V.GetTickPositions() -> vtkDoubleArray\nC++: virtual vtkDoubleArray *GetTickPositions()\n\nAn array with the positions of the tick marks along the axis\nline. The positions are specified in the plot coordinates of the\naxis.\n"},
  {(char*)"GetTickScenePositions", PyvtkAxis_GetTickScenePositions, METH_VARARGS,
   (char*)"V.GetTickScenePositions() -> vtkFloatArray\nC++: virtual vtkFloatArray *GetTickScenePositions()\n\nAn array with the positions of the tick marks along the axis\nline. The positions are specified in scene coordinates.\n"},
  {(char*)"GetTickLabels", PyvtkAxis_GetTickLabels, METH_VARARGS,
   (char*)"V.GetTickLabels() -> vtkStringArray\nC++: virtual vtkStringArray *GetTickLabels()\n\nA string array containing the tick labels for the axis.\n"},
  {(char*)"SetCustomTickPositions", PyvtkAxis_SetCustomTickPositions, METH_VARARGS,
   (char*)"V.SetCustomTickPositions(vtkDoubleArray, vtkStringArray) -> bool\nC++: virtual bool SetCustomTickPositions(\n    vtkDoubleArray *positions, vtkStringArray *labels=0)\n\nSet the tick positions, and optionally custom tick labels. If the\nlabels and positions are null then automatic tick labels will be\nassigned. If only positions are supplied then appropriate labels\nwill be generated according to the axis settings. If positions\nand labels are supplied they must be of the same length. Returns\ntrue on success, false on failure.\n"},
#if !defined(VTK_LEGACY_REMOVE)
  {(char*)"SetTickPositions", PyvtkAxis_SetTickPositions, METH_VARARGS,
   (char*)"V.SetTickPositions(vtkDoubleArray)\nC++: virtual void SetTickPositions(vtkDoubleArray *positions)\n\nSet the tick positions (in plot coordinates).\\deprecated 6.0 Use\nthe two parameter SetTickPositions function.\n"},
#endif
#if !defined(VTK_LEGACY_REMOVE)
  {(char*)"SetTickLabels", PyvtkAxis_SetTickLabels, METH_VARARGS,
   (char*)"V.SetTickLabels(vtkStringArray)\nC++: virtual void SetTickLabels(vtkStringArray *labels)\n\nSet the tick labels for the axis.\\deprecated 6.0 Use the two\nparameter SetTickPositions function.\n"},
#endif
  {(char*)"GetBoundingRect", PyvtkAxis_GetBoundingRect, METH_VARARGS,
   (char*)"V.GetBoundingRect(vtkContext2D) -> vtkRectf\nC++: vtkRectf GetBoundingRect(vtkContext2D *painter)\n\nRequest the space the axes require to be drawn. This is returned\nas a vtkRectf, with the corner being the offset from Point1, and\nthe width/ height being the total width/height required by the\naxis. In order to ensure the numbers are correct, Update() should\nbe called on the axis.\n"},
  {(char*)"NiceNumber", PyvtkAxis_NiceNumber, METH_VARARGS | METH_STATIC,
   (char*)"V.NiceNumber(float, bool) -> float\nC++: static double NiceNumber(double number, bool roundUp)\n\nReturn a \"nice number\", often defined as 1, 2 or 5. If roundUp is\ntrue then the nice number will be rounded up, false it is rounded\ndown. The supplied number should be between 0.0 and 9.9.\n"},
  {(char*)"NiceMinMax", PyvtkAxis_NiceMinMax, METH_VARARGS | METH_STATIC,
   (char*)"V.NiceMinMax(float, float, float, float) -> float\nC++: static double NiceMinMax(double &min, double &max,\n    float pixelRange, float tickPixelSpacing)\n\nStatic function to calculate \"nice\" minimum, maximum, and tick\nspacing values.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkAxis_StaticNew()
{
  return vtkAxis::New();
}

PyObject *PyVTKClass_vtkAxisNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkAxis_StaticNew,
    PyvtkAxis_Methods,
    "vtkAxis", modulename,
    NULL, NULL,
    PyvtkAxis_Doc(),
    PyVTKClass_vtkContextItemNew(modulename));

  if (cls)
    {
    PyObject *d = PyVTKClass_GetDict(cls);
    PyObject *o;

    PyType_Ready(&PyvtkAxis_Location_Type);
    PyvtkAxis_Location_Type.tp_new = NULL;

    o = (PyObject *)&PyvtkAxis_Location_Type;
    if (o && PyDict_SetItemString(d, (char *)"Location", o) != 0)
      {
      Py_DECREF(o);
      }

    for (int c = 0; c < 5; c++)
      {
      typedef vtkAxis::Location cxx_enum_type;

      static const struct { const char *name; cxx_enum_type value; }
        constants[5] = {
          { "LEFT", vtkAxis::LEFT },
          { "BOTTOM", vtkAxis::BOTTOM },
          { "RIGHT", vtkAxis::RIGHT },
          { "TOP", vtkAxis::TOP },
          { "PARALLEL", vtkAxis::PARALLEL },
        };

      o = PyvtkAxis_Location_FromEnum(constants[c].value);
      if (o)
        {
        PyDict_SetItemString(d, (char *)constants[c].name, o);
        Py_DECREF(o);
        }
      }

    for (int c = 0; c < 11; c++)
      {
      static const struct { const char *name; int value; }
        constants[11] = {
          { "TICK_SIMPLE", vtkAxis::TICK_SIMPLE },
          { "TICK_WILKINSON_EXTENDED", vtkAxis::TICK_WILKINSON_EXTENDED },
          { "STANDARD_NOTATION", vtkAxis::STANDARD_NOTATION },
          { "SCIENTIFIC_NOTATION", vtkAxis::SCIENTIFIC_NOTATION },
          { "FIXED_NOTATION", vtkAxis::FIXED_NOTATION },
          { "STANDARD", vtkAxis::STANDARD },
          { "SCIENTIFIC", vtkAxis::SCIENTIFIC },
          { "MIXED", vtkAxis::MIXED },
          { "AUTO", vtkAxis::AUTO },
          { "FIXED", vtkAxis::FIXED },
          { "CUSTOM", vtkAxis::CUSTOM },
        };

      o = PyInt_FromLong(constants[c].value);
      if (o)
        {
        PyDict_SetItemString(d, (char *)constants[c].name, o);
        Py_DECREF(o);
        }
      }

    }

  return cls;
}

const char **PyvtkAxis_Doc()
{
  static const char *docstring[] = {
    "vtkAxis - takes care of drawing 2D axes\n\n",
    "Superclass: vtkContextItem\n\n",
    "The vtkAxis is drawn in screen coordinates. It is usually one of the\nlast elements of a chart to be drawn. It renders the axis label, tick\nmarks and tick labels. The tick marks and labels span the range of\nvalues betweenMinimum and Maximum. The Minimum and Maximum values are\nnot allowed to extend beyond theMinimumLimit and MaximumLimit values,\nrespectively.\n\nNote that many other chart elements (e.",
    "g., vtkPlotPoints) refer to\nvtkAxis instances to determine how to scale raw data for\npresentation. In particular, care must be taken with logarithmic\nscaling. The axis Minimum, Maximum, and Limit values are stored both\nunscaled and scaled (with log(x) applied when GetLogScaleActive()\nreturns true). User interfaces will most likely present the unscaled\nvalues as they represent the values provided b",
    "y the user. Other chart\nelements may need the scaled values in order to draw in the same\ncoordinate system.\n\nJust because LogScale is set to true does not guarantee that the axis\nwill use logarithmic scaling -- the Minimum and Maximum values for\nthe axis must both lie to the same side of origin (and not include\nthe origin). Also, this switch from linear- to log-scaling may occur\nduring a rendering",
    " pass if autoscaling is enabled. Because the log\nand pow functions are not invertible and the axis itself decides when\nto switch between them without offering any external class managing\nthe axis a chance to save the old values, it saves old Limit values\nin NonLogUnscaled{Min,Max}Limit so that behavior is consistent when\nLogScale is changed from false to true and back again.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkAxis(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkAxisNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkAxis", o) != 0)
    {
    Py_DECREF(o);
    }

}

