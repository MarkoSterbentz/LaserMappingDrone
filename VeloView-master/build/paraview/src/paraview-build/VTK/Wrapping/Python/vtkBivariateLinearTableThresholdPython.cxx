// python wrapper for vtkBivariateLinearTableThreshold
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkBivariateLinearTableThreshold.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkBivariateLinearTableThreshold(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkBivariateLinearTableThresholdNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkTableAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkTableAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkTableAlgorithmNew
#endif

static const char **PyvtkBivariateLinearTableThreshold_Doc();

#ifndef DECLARED_PyvtkBivariateLinearTableThreshold_OutputPorts_Type
extern VTK_PYTHON_EXPORT PyTypeObject PyvtkBivariateLinearTableThreshold_OutputPorts_Type;
#define DECLARED_PyvtkBivariateLinearTableThreshold_OutputPorts_Type
#endif

PyTypeObject PyvtkBivariateLinearTableThreshold_OutputPorts_Type = {
  PyObject_HEAD_INIT(&PyType_Type)
  0,
  (char*)"OutputPorts", // tp_name
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

PyObject *PyvtkBivariateLinearTableThreshold_OutputPorts_FromEnum(int val)
{
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkBivariateLinearTableThreshold_OutputPorts_Type);
  self->ob_ival = val;
  return (PyObject *)self;
}

#ifndef DECLARED_PyvtkBivariateLinearTableThreshold_LinearThresholdType_Type
extern VTK_PYTHON_EXPORT PyTypeObject PyvtkBivariateLinearTableThreshold_LinearThresholdType_Type;
#define DECLARED_PyvtkBivariateLinearTableThreshold_LinearThresholdType_Type
#endif

PyTypeObject PyvtkBivariateLinearTableThreshold_LinearThresholdType_Type = {
  PyObject_HEAD_INIT(&PyType_Type)
  0,
  (char*)"LinearThresholdType", // tp_name
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

PyObject *PyvtkBivariateLinearTableThreshold_LinearThresholdType_FromEnum(int val)
{
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkBivariateLinearTableThreshold_LinearThresholdType_Type);
  self->ob_ival = val;
  return (PyObject *)self;
}


static PyObject *
PyvtkBivariateLinearTableThreshold_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBivariateLinearTableThreshold *op = static_cast<vtkBivariateLinearTableThreshold *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkBivariateLinearTableThreshold::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBivariateLinearTableThreshold_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBivariateLinearTableThreshold *op = static_cast<vtkBivariateLinearTableThreshold *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkBivariateLinearTableThreshold::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBivariateLinearTableThreshold_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBivariateLinearTableThreshold *op = static_cast<vtkBivariateLinearTableThreshold *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkBivariateLinearTableThreshold *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkBivariateLinearTableThreshold::NewInstance());

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
PyvtkBivariateLinearTableThreshold_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkBivariateLinearTableThreshold *tempr = vtkBivariateLinearTableThreshold::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBivariateLinearTableThreshold_SetInclusive(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInclusive");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBivariateLinearTableThreshold *op = static_cast<vtkBivariateLinearTableThreshold *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetInclusive(temp0);
      }
    else
      {
      op->vtkBivariateLinearTableThreshold::SetInclusive(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkBivariateLinearTableThreshold_GetInclusive(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInclusive");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBivariateLinearTableThreshold *op = static_cast<vtkBivariateLinearTableThreshold *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetInclusive() :
      op->vtkBivariateLinearTableThreshold::GetInclusive());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBivariateLinearTableThreshold_AddColumnToThreshold(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddColumnToThreshold");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBivariateLinearTableThreshold *op = static_cast<vtkBivariateLinearTableThreshold *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->AddColumnToThreshold(temp0, temp1);
      }
    else
      {
      op->vtkBivariateLinearTableThreshold::AddColumnToThreshold(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkBivariateLinearTableThreshold_GetNumberOfColumnsToThreshold(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfColumnsToThreshold");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBivariateLinearTableThreshold *op = static_cast<vtkBivariateLinearTableThreshold *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfColumnsToThreshold() :
      op->vtkBivariateLinearTableThreshold::GetNumberOfColumnsToThreshold());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBivariateLinearTableThreshold_GetColumnToThreshold(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColumnToThreshold");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBivariateLinearTableThreshold *op = static_cast<vtkBivariateLinearTableThreshold *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  vtkIdType temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      op->GetColumnToThreshold(temp0, temp1, temp2);
      }
    else
      {
      op->vtkBivariateLinearTableThreshold::GetColumnToThreshold(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      ap.SetArgValue(1, temp1);
      }
    if (!ap.ErrorOccurred())
      {
      ap.SetArgValue(2, temp2);
      }
    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkBivariateLinearTableThreshold_ClearColumnsToThreshold(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClearColumnsToThreshold");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBivariateLinearTableThreshold *op = static_cast<vtkBivariateLinearTableThreshold *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ClearColumnsToThreshold();
      }
    else
      {
      op->vtkBivariateLinearTableThreshold::ClearColumnsToThreshold();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkBivariateLinearTableThreshold_GetSelectedRowIds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelectedRowIds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBivariateLinearTableThreshold *op = static_cast<vtkBivariateLinearTableThreshold *>(vp);

  int temp0 = 0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0, 1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp0)))
    {
    vtkIdTypeArray *tempr = (ap.IsBound() ?
      op->GetSelectedRowIds(temp0) :
      op->vtkBivariateLinearTableThreshold::GetSelectedRowIds(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBivariateLinearTableThreshold_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBivariateLinearTableThreshold *op = static_cast<vtkBivariateLinearTableThreshold *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Initialize();
      }
    else
      {
      op->vtkBivariateLinearTableThreshold::Initialize();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkBivariateLinearTableThreshold_AddLineEquation_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddLineEquation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBivariateLinearTableThreshold *op = static_cast<vtkBivariateLinearTableThreshold *>(vp);

  double *temp0 = NULL;
  double *save0 = NULL;
  double small0[8];
  int size0 = 0;
  double *temp1 = NULL;
  double *save1 = NULL;
  double small1[8];
  int size1 = 0;
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
    size1 = ap.GetArgSize(1);
    temp1 = small1;
    if (size1 > 4)
      {
      temp1 = new double[2*size1];
      }
    save1 = &temp1[size1];
    }

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1))
    {
    ap.SaveArray(temp0, save0, size0);
    ap.SaveArray(temp1, save1, size1);

    if (ap.IsBound())
      {
      op->AddLineEquation(temp0, temp1);
      }
    else
      {
      op->vtkBivariateLinearTableThreshold::AddLineEquation(temp0, temp1);
      }

    if (ap.ArrayHasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(0, temp0, size0);
      }

    if (ap.ArrayHasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(1, temp1, size1);
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
  if (temp1 && temp1 != small1)
    {
    delete [] temp1;
    }

  return result;
}

static PyObject *
PyvtkBivariateLinearTableThreshold_AddLineEquation_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddLineEquation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBivariateLinearTableThreshold *op = static_cast<vtkBivariateLinearTableThreshold *>(vp);

  double *temp0 = NULL;
  double *save0 = NULL;
  double small0[8];
  int size0 = 0;
  double temp1;
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

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1))
    {
    ap.SaveArray(temp0, save0, size0);

    if (ap.IsBound())
      {
      op->AddLineEquation(temp0, temp1);
      }
    else
      {
      op->vtkBivariateLinearTableThreshold::AddLineEquation(temp0, temp1);
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
PyvtkBivariateLinearTableThreshold_AddLineEquation_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddLineEquation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBivariateLinearTableThreshold *op = static_cast<vtkBivariateLinearTableThreshold *>(vp);

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
      op->AddLineEquation(temp0, temp1, temp2);
      }
    else
      {
      op->vtkBivariateLinearTableThreshold::AddLineEquation(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkBivariateLinearTableThreshold_AddLineEquation_Methods[] = {
  {NULL, PyvtkBivariateLinearTableThreshold_AddLineEquation_s1, METH_VARARGS,
   (char*)"@OO *d *d"},
  {NULL, PyvtkBivariateLinearTableThreshold_AddLineEquation_s2, METH_VARARGS,
   (char*)"@Od *d"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkBivariateLinearTableThreshold_AddLineEquation(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkBivariateLinearTableThreshold_AddLineEquation_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkBivariateLinearTableThreshold_AddLineEquation_s3(self, args);
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "AddLineEquation");
  return NULL;
}



static PyObject *
PyvtkBivariateLinearTableThreshold_ClearLineEquations(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClearLineEquations");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBivariateLinearTableThreshold *op = static_cast<vtkBivariateLinearTableThreshold *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ClearLineEquations();
      }
    else
      {
      op->vtkBivariateLinearTableThreshold::ClearLineEquations();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkBivariateLinearTableThreshold_GetLinearThresholdType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLinearThresholdType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBivariateLinearTableThreshold *op = static_cast<vtkBivariateLinearTableThreshold *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetLinearThresholdType() :
      op->vtkBivariateLinearTableThreshold::GetLinearThresholdType());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBivariateLinearTableThreshold_SetLinearThresholdType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLinearThresholdType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBivariateLinearTableThreshold *op = static_cast<vtkBivariateLinearTableThreshold *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetLinearThresholdType(temp0);
      }
    else
      {
      op->vtkBivariateLinearTableThreshold::SetLinearThresholdType(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkBivariateLinearTableThreshold_SetLinearThresholdTypeToAbove(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLinearThresholdTypeToAbove");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBivariateLinearTableThreshold *op = static_cast<vtkBivariateLinearTableThreshold *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetLinearThresholdTypeToAbove();
      }
    else
      {
      op->vtkBivariateLinearTableThreshold::SetLinearThresholdTypeToAbove();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkBivariateLinearTableThreshold_SetLinearThresholdTypeToBelow(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLinearThresholdTypeToBelow");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBivariateLinearTableThreshold *op = static_cast<vtkBivariateLinearTableThreshold *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetLinearThresholdTypeToBelow();
      }
    else
      {
      op->vtkBivariateLinearTableThreshold::SetLinearThresholdTypeToBelow();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkBivariateLinearTableThreshold_SetLinearThresholdTypeToNear(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLinearThresholdTypeToNear");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBivariateLinearTableThreshold *op = static_cast<vtkBivariateLinearTableThreshold *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetLinearThresholdTypeToNear();
      }
    else
      {
      op->vtkBivariateLinearTableThreshold::SetLinearThresholdTypeToNear();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkBivariateLinearTableThreshold_SetLinearThresholdTypeToBetween(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLinearThresholdTypeToBetween");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBivariateLinearTableThreshold *op = static_cast<vtkBivariateLinearTableThreshold *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetLinearThresholdTypeToBetween();
      }
    else
      {
      op->vtkBivariateLinearTableThreshold::SetLinearThresholdTypeToBetween();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkBivariateLinearTableThreshold_SetColumnRanges_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColumnRanges");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBivariateLinearTableThreshold *op = static_cast<vtkBivariateLinearTableThreshold *>(vp);

  double temp0;
  double temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetColumnRanges(temp0, temp1);
      }
    else
      {
      op->vtkBivariateLinearTableThreshold::SetColumnRanges(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkBivariateLinearTableThreshold_SetColumnRanges_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColumnRanges");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBivariateLinearTableThreshold *op = static_cast<vtkBivariateLinearTableThreshold *>(vp);

  double temp0[2];
  const int size0 = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetColumnRanges(temp0);
      }
    else
      {
      op->vtkBivariateLinearTableThreshold::SetColumnRanges(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkBivariateLinearTableThreshold_SetColumnRanges(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkBivariateLinearTableThreshold_SetColumnRanges_s1(self, args);
    case 1:
      return PyvtkBivariateLinearTableThreshold_SetColumnRanges_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetColumnRanges");
  return NULL;
}



static PyObject *
PyvtkBivariateLinearTableThreshold_GetColumnRanges(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColumnRanges");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBivariateLinearTableThreshold *op = static_cast<vtkBivariateLinearTableThreshold *>(vp);

  int sizer = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetColumnRanges() :
      op->vtkBivariateLinearTableThreshold::GetColumnRanges());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkBivariateLinearTableThreshold_SetDistanceThreshold(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDistanceThreshold");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBivariateLinearTableThreshold *op = static_cast<vtkBivariateLinearTableThreshold *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetDistanceThreshold(temp0);
      }
    else
      {
      op->vtkBivariateLinearTableThreshold::SetDistanceThreshold(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkBivariateLinearTableThreshold_GetDistanceThreshold(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDistanceThreshold");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBivariateLinearTableThreshold *op = static_cast<vtkBivariateLinearTableThreshold *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetDistanceThreshold() :
      op->vtkBivariateLinearTableThreshold::GetDistanceThreshold());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBivariateLinearTableThreshold_SetUseNormalizedDistance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseNormalizedDistance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBivariateLinearTableThreshold *op = static_cast<vtkBivariateLinearTableThreshold *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetUseNormalizedDistance(temp0);
      }
    else
      {
      op->vtkBivariateLinearTableThreshold::SetUseNormalizedDistance(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkBivariateLinearTableThreshold_GetUseNormalizedDistance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseNormalizedDistance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBivariateLinearTableThreshold *op = static_cast<vtkBivariateLinearTableThreshold *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetUseNormalizedDistance() :
      op->vtkBivariateLinearTableThreshold::GetUseNormalizedDistance());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBivariateLinearTableThreshold_UseNormalizedDistanceOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseNormalizedDistanceOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBivariateLinearTableThreshold *op = static_cast<vtkBivariateLinearTableThreshold *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->UseNormalizedDistanceOn();
      }
    else
      {
      op->vtkBivariateLinearTableThreshold::UseNormalizedDistanceOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkBivariateLinearTableThreshold_UseNormalizedDistanceOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseNormalizedDistanceOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBivariateLinearTableThreshold *op = static_cast<vtkBivariateLinearTableThreshold *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->UseNormalizedDistanceOff();
      }
    else
      {
      op->vtkBivariateLinearTableThreshold::UseNormalizedDistanceOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkBivariateLinearTableThreshold_ComputeImplicitLineFunction_s1(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "ComputeImplicitLineFunction");

  double *temp0 = NULL;
  double *save0 = NULL;
  double small0[8];
  int size0 = 0;
  double *temp1 = NULL;
  double *save1 = NULL;
  double small1[8];
  int size1 = 0;
  double *temp2 = NULL;
  double *save2 = NULL;
  double small2[8];
  int size2 = 0;
  PyObject *result = NULL;

  size0 = ap.GetArgSize(0);
  temp0 = small0;
  if (size0 > 4)
    {
    temp0 = new double[2*size0];
    }
  save0 = &temp0[size0];
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
    temp2 = new double[2*size2];
    }
  save2 = &temp2[size2];

  if (ap.CheckArgCount(3) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetArray(temp2, size2))
    {
    ap.SaveArray(temp0, save0, size0);
    ap.SaveArray(temp1, save1, size1);
    ap.SaveArray(temp2, save2, size2);

    vtkBivariateLinearTableThreshold::ComputeImplicitLineFunction(temp0, temp1, temp2);

    if (ap.ArrayHasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(0, temp0, size0);
      }

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

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
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

  return result;
}

static PyObject *
PyvtkBivariateLinearTableThreshold_ComputeImplicitLineFunction_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "ComputeImplicitLineFunction");

  double *temp0 = NULL;
  double *save0 = NULL;
  double small0[8];
  int size0 = 0;
  double temp1;
  double *temp2 = NULL;
  double *save2 = NULL;
  double small2[8];
  int size2 = 0;
  PyObject *result = NULL;

  size0 = ap.GetArgSize(0);
  temp0 = small0;
  if (size0 > 4)
    {
    temp0 = new double[2*size0];
    }
  save0 = &temp0[size0];
  size2 = ap.GetArgSize(2);
  temp2 = small2;
  if (size2 > 4)
    {
    temp2 = new double[2*size2];
    }
  save2 = &temp2[size2];

  if (ap.CheckArgCount(3) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1) &&
      ap.GetArray(temp2, size2))
    {
    ap.SaveArray(temp0, save0, size0);
    ap.SaveArray(temp2, save2, size2);

    vtkBivariateLinearTableThreshold::ComputeImplicitLineFunction(temp0, temp1, temp2);

    if (ap.ArrayHasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(0, temp0, size0);
      }

    if (ap.ArrayHasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(2, temp2, size2);
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
  if (temp2 && temp2 != small2)
    {
    delete [] temp2;
    }

  return result;
}

static PyMethodDef PyvtkBivariateLinearTableThreshold_ComputeImplicitLineFunction_Methods[] = {
  {NULL, PyvtkBivariateLinearTableThreshold_ComputeImplicitLineFunction_s1, METH_VARARGS | METH_STATIC,
   (char*)"OOO *d *d *d"},
  {NULL, PyvtkBivariateLinearTableThreshold_ComputeImplicitLineFunction_s2, METH_VARARGS | METH_STATIC,
   (char*)"OdO *d *d"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkBivariateLinearTableThreshold_ComputeImplicitLineFunction(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkBivariateLinearTableThreshold_ComputeImplicitLineFunction_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
    {
    case 3:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "ComputeImplicitLineFunction");
  return NULL;
}


static PyMethodDef PyvtkBivariateLinearTableThreshold_Methods[] = {
  {(char*)"GetClassName", PyvtkBivariateLinearTableThreshold_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkBivariateLinearTableThreshold_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkBivariateLinearTableThreshold_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkBivariateLinearTableThreshold\nC++: vtkBivariateLinearTableThreshold *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkBivariateLinearTableThreshold_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkBivariateLinearTableThreshold\nC++: vtkBivariateLinearTableThreshold *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetInclusive", PyvtkBivariateLinearTableThreshold_SetInclusive, METH_VARARGS,
   (char*)"V.SetInclusive(int)\nC++: void SetInclusive(int a)\n\nInclude the line in the threshold.  Essentially whether the\nthreshold operation uses > versus >=.\n"},
  {(char*)"GetInclusive", PyvtkBivariateLinearTableThreshold_GetInclusive, METH_VARARGS,
   (char*)"V.GetInclusive() -> int\nC++: int GetInclusive()\n\nInclude the line in the threshold.  Essentially whether the\nthreshold operation uses > versus >=.\n"},
  {(char*)"AddColumnToThreshold", PyvtkBivariateLinearTableThreshold_AddColumnToThreshold, METH_VARARGS,
   (char*)"V.AddColumnToThreshold(int, int)\nC++: void AddColumnToThreshold(vtkIdType column,\n    vtkIdType component)\n\nAdd a numeric column to the pair of columns to be thresholded. \nCall twice.\n"},
  {(char*)"GetNumberOfColumnsToThreshold", PyvtkBivariateLinearTableThreshold_GetNumberOfColumnsToThreshold, METH_VARARGS,
   (char*)"V.GetNumberOfColumnsToThreshold() -> int\nC++: int GetNumberOfColumnsToThreshold()\n\nReturn how many columns have been added.  Hopefully 2.\n"},
  {(char*)"GetColumnToThreshold", PyvtkBivariateLinearTableThreshold_GetColumnToThreshold, METH_VARARGS,
   (char*)"V.GetColumnToThreshold(int, int, int)\nC++: void GetColumnToThreshold(vtkIdType idx, vtkIdType &column,\n    vtkIdType &component)\n\nReturn the column number from the input table for the idx'th\nadded column.\n"},
  {(char*)"ClearColumnsToThreshold", PyvtkBivariateLinearTableThreshold_ClearColumnsToThreshold, METH_VARARGS,
   (char*)"V.ClearColumnsToThreshold()\nC++: void ClearColumnsToThreshold()\n\nReset the columns to be thresholded.\n"},
  {(char*)"GetSelectedRowIds", PyvtkBivariateLinearTableThreshold_GetSelectedRowIds, METH_VARARGS,
   (char*)"V.GetSelectedRowIds(int) -> vtkIdTypeArray\nC++: vtkIdTypeArray *GetSelectedRowIds(int selection=0)\n\nGet the output as a table of row ids.\n"},
  {(char*)"Initialize", PyvtkBivariateLinearTableThreshold_Initialize, METH_VARARGS,
   (char*)"V.Initialize()\nC++: void Initialize()\n\nReset the columns to threshold, column ranges, etc.\n"},
  {(char*)"AddLineEquation", PyvtkBivariateLinearTableThreshold_AddLineEquation, METH_VARARGS,
   (char*)"V.AddLineEquation([float, ...], [float, ...])\nC++: void AddLineEquation(double *p1, double *p2)\nV.AddLineEquation([float, ...], float)\nC++: void AddLineEquation(double *p, double slope)\nV.AddLineEquation(float, float, float)\nC++: void AddLineEquation(double a, double b, double c)\n\nAdd a line for thresholding from two x,y points.\n"},
  {(char*)"ClearLineEquations", PyvtkBivariateLinearTableThreshold_ClearLineEquations, METH_VARARGS,
   (char*)"V.ClearLineEquations()\nC++: void ClearLineEquations()\n\nReset the list of line equations.\n"},
  {(char*)"GetLinearThresholdType", PyvtkBivariateLinearTableThreshold_GetLinearThresholdType, METH_VARARGS,
   (char*)"V.GetLinearThresholdType() -> int\nC++: int GetLinearThresholdType()\n\nSet the threshold type.  Above: find all rows that are above the\nspecified lines.  Below: find all rows that are below the\nspecified lines.  Near: find all rows that are near the specified\nlines.  Between: find all rows that are between the specified\nlines.\n"},
  {(char*)"SetLinearThresholdType", PyvtkBivariateLinearTableThreshold_SetLinearThresholdType, METH_VARARGS,
   (char*)"V.SetLinearThresholdType(int)\nC++: void SetLinearThresholdType(int a)\n\nSet the threshold type.  Above: find all rows that are above the\nspecified lines.  Below: find all rows that are below the\nspecified lines.  Near: find all rows that are near the specified\nlines.  Between: find all rows that are between the specified\nlines.\n"},
  {(char*)"SetLinearThresholdTypeToAbove", PyvtkBivariateLinearTableThreshold_SetLinearThresholdTypeToAbove, METH_VARARGS,
   (char*)"V.SetLinearThresholdTypeToAbove()\nC++: void SetLinearThresholdTypeToAbove()\n\nSet the threshold type.  Above: find all rows that are above the\nspecified lines.  Below: find all rows that are below the\nspecified lines.  Near: find all rows that are near the specified\nlines.  Between: find all rows that are between the specified\nlines.\n"},
  {(char*)"SetLinearThresholdTypeToBelow", PyvtkBivariateLinearTableThreshold_SetLinearThresholdTypeToBelow, METH_VARARGS,
   (char*)"V.SetLinearThresholdTypeToBelow()\nC++: void SetLinearThresholdTypeToBelow()\n\nSet the threshold type.  Above: find all rows that are above the\nspecified lines.  Below: find all rows that are below the\nspecified lines.  Near: find all rows that are near the specified\nlines.  Between: find all rows that are between the specified\nlines.\n"},
  {(char*)"SetLinearThresholdTypeToNear", PyvtkBivariateLinearTableThreshold_SetLinearThresholdTypeToNear, METH_VARARGS,
   (char*)"V.SetLinearThresholdTypeToNear()\nC++: void SetLinearThresholdTypeToNear()\n\nSet the threshold type.  Above: find all rows that are above the\nspecified lines.  Below: find all rows that are below the\nspecified lines.  Near: find all rows that are near the specified\nlines.  Between: find all rows that are between the specified\nlines.\n"},
  {(char*)"SetLinearThresholdTypeToBetween", PyvtkBivariateLinearTableThreshold_SetLinearThresholdTypeToBetween, METH_VARARGS,
   (char*)"V.SetLinearThresholdTypeToBetween()\nC++: void SetLinearThresholdTypeToBetween()\n\nSet the threshold type.  Above: find all rows that are above the\nspecified lines.  Below: find all rows that are below the\nspecified lines.  Near: find all rows that are near the specified\nlines.  Between: find all rows that are between the specified\nlines.\n"},
  {(char*)"SetColumnRanges", PyvtkBivariateLinearTableThreshold_SetColumnRanges, METH_VARARGS,
   (char*)"V.SetColumnRanges(float, float)\nC++: void SetColumnRanges(double, double)\nV.SetColumnRanges((float, float))\nC++: void SetColumnRanges(double a[2])\n\n"},
  {(char*)"GetColumnRanges", PyvtkBivariateLinearTableThreshold_GetColumnRanges, METH_VARARGS,
   (char*)"V.GetColumnRanges() -> (float, float)\nC++: double *GetColumnRanges()\n\n"},
  {(char*)"SetDistanceThreshold", PyvtkBivariateLinearTableThreshold_SetDistanceThreshold, METH_VARARGS,
   (char*)"V.SetDistanceThreshold(float)\nC++: void SetDistanceThreshold(double a)\n\nThe Cartesian distance within which a point will pass the near\nthreshold.\n"},
  {(char*)"GetDistanceThreshold", PyvtkBivariateLinearTableThreshold_GetDistanceThreshold, METH_VARARGS,
   (char*)"V.GetDistanceThreshold() -> float\nC++: double GetDistanceThreshold()\n\nThe Cartesian distance within which a point will pass the near\nthreshold.\n"},
  {(char*)"SetUseNormalizedDistance", PyvtkBivariateLinearTableThreshold_SetUseNormalizedDistance, METH_VARARGS,
   (char*)"V.SetUseNormalizedDistance(int)\nC++: void SetUseNormalizedDistance(int a)\n\nRenormalize the space of the data such that the X and Y axes are\n\"square\" over the specified ColumnRanges.  This essentially\nscales the data space so that ColumnRanges[1]-ColumnRanges[0] =\n1.0 and ColumnRanges[3]-ColumnRanges[2] = 1.0.  Used for scatter\nplot distance calculations.  Be sure to set DistanceThreshold\naccordingly, when used.\n"},
  {(char*)"GetUseNormalizedDistance", PyvtkBivariateLinearTableThreshold_GetUseNormalizedDistance, METH_VARARGS,
   (char*)"V.GetUseNormalizedDistance() -> int\nC++: int GetUseNormalizedDistance()\n\nRenormalize the space of the data such that the X and Y axes are\n\"square\" over the specified ColumnRanges.  This essentially\nscales the data space so that ColumnRanges[1]-ColumnRanges[0] =\n1.0 and ColumnRanges[3]-ColumnRanges[2] = 1.0.  Used for scatter\nplot distance calculations.  Be sure to set DistanceThreshold\naccordingly, when used.\n"},
  {(char*)"UseNormalizedDistanceOn", PyvtkBivariateLinearTableThreshold_UseNormalizedDistanceOn, METH_VARARGS,
   (char*)"V.UseNormalizedDistanceOn()\nC++: void UseNormalizedDistanceOn()\n\nRenormalize the space of the data such that the X and Y axes are\n\"square\" over the specified ColumnRanges.  This essentially\nscales the data space so that ColumnRanges[1]-ColumnRanges[0] =\n1.0 and ColumnRanges[3]-ColumnRanges[2] = 1.0.  Used for scatter\nplot distance calculations.  Be sure to set DistanceThreshold\naccordingly, when used.\n"},
  {(char*)"UseNormalizedDistanceOff", PyvtkBivariateLinearTableThreshold_UseNormalizedDistanceOff, METH_VARARGS,
   (char*)"V.UseNormalizedDistanceOff()\nC++: void UseNormalizedDistanceOff()\n\nRenormalize the space of the data such that the X and Y axes are\n\"square\" over the specified ColumnRanges.  This essentially\nscales the data space so that ColumnRanges[1]-ColumnRanges[0] =\n1.0 and ColumnRanges[3]-ColumnRanges[2] = 1.0.  Used for scatter\nplot distance calculations.  Be sure to set DistanceThreshold\naccordingly, when used.\n"},
  {(char*)"ComputeImplicitLineFunction", PyvtkBivariateLinearTableThreshold_ComputeImplicitLineFunction, METH_VARARGS | METH_STATIC,
   (char*)"V.ComputeImplicitLineFunction([float, ...], [float, ...], [float,\n    ...])\nC++: static void ComputeImplicitLineFunction(double *p1,\n    double *p2, double *abc)\nV.ComputeImplicitLineFunction([float, ...], float, [float, ...])\nC++: static void ComputeImplicitLineFunction(double *p,\n    double slope, double *abc)\n\nConvert the two-point line formula to implicit form.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkBivariateLinearTableThreshold_StaticNew()
{
  return vtkBivariateLinearTableThreshold::New();
}

PyObject *PyVTKClass_vtkBivariateLinearTableThresholdNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkBivariateLinearTableThreshold_StaticNew,
    PyvtkBivariateLinearTableThreshold_Methods,
    "vtkBivariateLinearTableThreshold", modulename,
    NULL, NULL,
    PyvtkBivariateLinearTableThreshold_Doc(),
    PyVTKClass_vtkTableAlgorithmNew(modulename));

  if (cls)
    {
    PyObject *d = PyVTKClass_GetDict(cls);
    PyObject *o;

    PyType_Ready(&PyvtkBivariateLinearTableThreshold_OutputPorts_Type);
    PyvtkBivariateLinearTableThreshold_OutputPorts_Type.tp_new = NULL;

    o = (PyObject *)&PyvtkBivariateLinearTableThreshold_OutputPorts_Type;
    if (o && PyDict_SetItemString(d, (char *)"OutputPorts", o) != 0)
      {
      Py_DECREF(o);
      }

    PyType_Ready(&PyvtkBivariateLinearTableThreshold_LinearThresholdType_Type);
    PyvtkBivariateLinearTableThreshold_LinearThresholdType_Type.tp_new = NULL;

    o = (PyObject *)&PyvtkBivariateLinearTableThreshold_LinearThresholdType_Type;
    if (o && PyDict_SetItemString(d, (char *)"LinearThresholdType", o) != 0)
      {
      Py_DECREF(o);
      }

    for (int c = 0; c < 2; c++)
      {
      typedef vtkBivariateLinearTableThreshold::OutputPorts cxx_enum_type;

      static const struct { const char *name; cxx_enum_type value; }
        constants[2] = {
          { "OUTPUT_ROW_IDS", vtkBivariateLinearTableThreshold::OUTPUT_ROW_IDS },
          { "OUTPUT_ROW_DATA", vtkBivariateLinearTableThreshold::OUTPUT_ROW_DATA },
        };

      o = PyvtkBivariateLinearTableThreshold_OutputPorts_FromEnum(constants[c].value);
      if (o)
        {
        PyDict_SetItemString(d, (char *)constants[c].name, o);
        Py_DECREF(o);
        }
      }

    for (int c = 0; c < 4; c++)
      {
      static const struct { const char *name; int value; }
        constants[4] = {
          { "BLT_ABOVE", vtkBivariateLinearTableThreshold::BLT_ABOVE },
          { "BLT_BELOW", vtkBivariateLinearTableThreshold::BLT_BELOW },
          { "BLT_NEAR", vtkBivariateLinearTableThreshold::BLT_NEAR },
          { "BLT_BETWEEN", vtkBivariateLinearTableThreshold::BLT_BETWEEN },
        };

      o = PyvtkBivariateLinearTableThreshold_LinearThresholdType_FromEnum(constants[c].value);
      if (o)
        {
        PyDict_SetItemString(d, (char *)constants[c].name, o);
        Py_DECREF(o);
        }
      }

    }

  return cls;
}

const char **PyvtkBivariateLinearTableThreshold_Doc()
{
  static const char *docstring[] = {
    "vtkBivariateLinearTableThreshold - performs line-based thresholding\n\n",
    "Superclass: vtkTableAlgorithm\n\n",
    "Class for filtering the rows of a two numeric columns of a vtkTable. \nThe columns are treated as the two variables of a line.  This filter\nwill then iterate through the rows of the table determining if X,Y\nvalues pairs are above/below/between/near one or more lines.\n\nThe \"between\" mode checks to see if a row is contained within the\nconvex hull of all of the specified lines.  The \"near\" mode checks",
    " if\na row is within a distance threshold two one of the specified lines. \nThis class is used in conjunction with various plotting classes, so\nit is useful to rescale the X,Y axes to a particular range of values.\n Distance comparisons can be performed in the scaled space by setting\nthe CustomRanges ivar and enabling UseNormalizedDistance.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkBivariateLinearTableThreshold(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkBivariateLinearTableThresholdNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkBivariateLinearTableThreshold", o) != 0)
    {
    Py_DECREF(o);
    }

}

