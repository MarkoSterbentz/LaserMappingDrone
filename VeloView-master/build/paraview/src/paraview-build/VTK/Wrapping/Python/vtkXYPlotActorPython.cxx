// python wrapper for vtkXYPlotActor
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkXYPlotActor.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkXYPlotActor(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkXYPlotActorNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkActor2DNew
extern "C" { PyObject *PyVTKClass_vtkActor2DNew(const char *); }
#define DECLARED_PyVTKClass_vtkActor2DNew
#endif

static const char **PyvtkXYPlotActor_Doc();

#ifndef DECLARED_PyvtkXYPlotActor_Alignment_Type
extern VTK_PYTHON_EXPORT PyTypeObject PyvtkXYPlotActor_Alignment_Type;
#define DECLARED_PyvtkXYPlotActor_Alignment_Type
#endif

PyTypeObject PyvtkXYPlotActor_Alignment_Type = {
  PyObject_HEAD_INIT(&PyType_Type)
  0,
  (char*)"Alignment", // tp_name
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

PyObject *PyvtkXYPlotActor_Alignment_FromEnum(int val)
{
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkXYPlotActor_Alignment_Type);
  self->ob_ival = val;
  return (PyObject *)self;
}


static PyObject *
PyvtkXYPlotActor_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkXYPlotActor::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXYPlotActor_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkXYPlotActor::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXYPlotActor_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkXYPlotActor *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkXYPlotActor::NewInstance());

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
PyvtkXYPlotActor_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkXYPlotActor *tempr = vtkXYPlotActor::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXYPlotActor_AddDataSetInput_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddDataSetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  vtkDataSet *temp0 = NULL;
  char *temp1 = NULL;
  int temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkDataSet") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      op->AddDataSetInput(temp0, temp1, temp2);
      }
    else
      {
      op->vtkXYPlotActor::AddDataSetInput(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkXYPlotActor_AddDataSetInput_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddDataSetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  vtkDataSet *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataSet"))
    {
    if (ap.IsBound())
      {
      op->AddDataSetInput(temp0);
      }
    else
      {
      op->vtkXYPlotActor::AddDataSetInput(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkXYPlotActor_AddDataSetInput(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkXYPlotActor_AddDataSetInput_s1(self, args);
    case 1:
      return PyvtkXYPlotActor_AddDataSetInput_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "AddDataSetInput");
  return NULL;
}



static PyObject *
PyvtkXYPlotActor_AddDataSetInputConnection_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddDataSetInputConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  vtkAlgorithmOutput *temp0 = NULL;
  char *temp1 = NULL;
  int temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkAlgorithmOutput") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      op->AddDataSetInputConnection(temp0, temp1, temp2);
      }
    else
      {
      op->vtkXYPlotActor::AddDataSetInputConnection(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkXYPlotActor_AddDataSetInputConnection_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddDataSetInputConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  vtkAlgorithmOutput *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAlgorithmOutput"))
    {
    if (ap.IsBound())
      {
      op->AddDataSetInputConnection(temp0);
      }
    else
      {
      op->vtkXYPlotActor::AddDataSetInputConnection(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkXYPlotActor_AddDataSetInputConnection(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkXYPlotActor_AddDataSetInputConnection_s1(self, args);
    case 1:
      return PyvtkXYPlotActor_AddDataSetInputConnection_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "AddDataSetInputConnection");
  return NULL;
}



static PyObject *
PyvtkXYPlotActor_RemoveDataSetInput_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveDataSetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  vtkDataSet *temp0 = NULL;
  char *temp1 = NULL;
  int temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkDataSet") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      op->RemoveDataSetInput(temp0, temp1, temp2);
      }
    else
      {
      op->vtkXYPlotActor::RemoveDataSetInput(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkXYPlotActor_RemoveDataSetInput_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveDataSetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  vtkDataSet *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataSet"))
    {
    if (ap.IsBound())
      {
      op->RemoveDataSetInput(temp0);
      }
    else
      {
      op->vtkXYPlotActor::RemoveDataSetInput(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkXYPlotActor_RemoveDataSetInput(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkXYPlotActor_RemoveDataSetInput_s1(self, args);
    case 1:
      return PyvtkXYPlotActor_RemoveDataSetInput_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "RemoveDataSetInput");
  return NULL;
}



static PyObject *
PyvtkXYPlotActor_RemoveDataSetInputConnection_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveDataSetInputConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  vtkAlgorithmOutput *temp0 = NULL;
  char *temp1 = NULL;
  int temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkAlgorithmOutput") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      op->RemoveDataSetInputConnection(temp0, temp1, temp2);
      }
    else
      {
      op->vtkXYPlotActor::RemoveDataSetInputConnection(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkXYPlotActor_RemoveDataSetInputConnection_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveDataSetInputConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  vtkAlgorithmOutput *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAlgorithmOutput"))
    {
    if (ap.IsBound())
      {
      op->RemoveDataSetInputConnection(temp0);
      }
    else
      {
      op->vtkXYPlotActor::RemoveDataSetInputConnection(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkXYPlotActor_RemoveDataSetInputConnection(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkXYPlotActor_RemoveDataSetInputConnection_s1(self, args);
    case 1:
      return PyvtkXYPlotActor_RemoveDataSetInputConnection_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "RemoveDataSetInputConnection");
  return NULL;
}



static PyObject *
PyvtkXYPlotActor_RemoveAllDataSetInputConnections(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveAllDataSetInputConnections");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->RemoveAllDataSetInputConnections();
      }
    else
      {
      op->vtkXYPlotActor::RemoveAllDataSetInputConnections();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXYPlotActor_SetPointComponent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPointComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  int temp0;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetPointComponent(temp0, temp1);
      }
    else
      {
      op->vtkXYPlotActor::SetPointComponent(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXYPlotActor_GetPointComponent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->GetPointComponent(temp0) :
      op->vtkXYPlotActor::GetPointComponent(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXYPlotActor_SetXValues(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetXValues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetXValues(temp0);
      }
    else
      {
      op->vtkXYPlotActor::SetXValues(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXYPlotActor_GetXValuesMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetXValuesMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetXValuesMinValue() :
      op->vtkXYPlotActor::GetXValuesMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXYPlotActor_GetXValuesMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetXValuesMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetXValuesMaxValue() :
      op->vtkXYPlotActor::GetXValuesMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXYPlotActor_GetXValues(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetXValues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetXValues() :
      op->vtkXYPlotActor::GetXValues());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXYPlotActor_SetXValuesToIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetXValuesToIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetXValuesToIndex();
      }
    else
      {
      op->vtkXYPlotActor::SetXValuesToIndex();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXYPlotActor_SetXValuesToArcLength(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetXValuesToArcLength");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetXValuesToArcLength();
      }
    else
      {
      op->vtkXYPlotActor::SetXValuesToArcLength();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXYPlotActor_SetXValuesToNormalizedArcLength(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetXValuesToNormalizedArcLength");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetXValuesToNormalizedArcLength();
      }
    else
      {
      op->vtkXYPlotActor::SetXValuesToNormalizedArcLength();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXYPlotActor_SetXValuesToValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetXValuesToValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetXValuesToValue();
      }
    else
      {
      op->vtkXYPlotActor::SetXValuesToValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXYPlotActor_GetXValuesAsString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetXValuesAsString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetXValuesAsString() :
      op->vtkXYPlotActor::GetXValuesAsString());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXYPlotActor_AddDataObjectInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddDataObjectInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  vtkDataObject *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataObject"))
    {
    if (ap.IsBound())
      {
      op->AddDataObjectInput(temp0);
      }
    else
      {
      op->vtkXYPlotActor::AddDataObjectInput(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXYPlotActor_AddDataObjectInputConnection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddDataObjectInputConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  vtkAlgorithmOutput *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAlgorithmOutput"))
    {
    if (ap.IsBound())
      {
      op->AddDataObjectInputConnection(temp0);
      }
    else
      {
      op->vtkXYPlotActor::AddDataObjectInputConnection(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXYPlotActor_RemoveDataObjectInputConnection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveDataObjectInputConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  vtkAlgorithmOutput *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAlgorithmOutput"))
    {
    if (ap.IsBound())
      {
      op->RemoveDataObjectInputConnection(temp0);
      }
    else
      {
      op->vtkXYPlotActor::RemoveDataObjectInputConnection(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXYPlotActor_RemoveDataObjectInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveDataObjectInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  vtkDataObject *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataObject"))
    {
    if (ap.IsBound())
      {
      op->RemoveDataObjectInput(temp0);
      }
    else
      {
      op->vtkXYPlotActor::RemoveDataObjectInput(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXYPlotActor_SetDataObjectPlotMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataObjectPlotMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetDataObjectPlotMode(temp0);
      }
    else
      {
      op->vtkXYPlotActor::SetDataObjectPlotMode(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXYPlotActor_GetDataObjectPlotModeMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataObjectPlotModeMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetDataObjectPlotModeMinValue() :
      op->vtkXYPlotActor::GetDataObjectPlotModeMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXYPlotActor_GetDataObjectPlotModeMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataObjectPlotModeMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetDataObjectPlotModeMaxValue() :
      op->vtkXYPlotActor::GetDataObjectPlotModeMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXYPlotActor_GetDataObjectPlotMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataObjectPlotMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetDataObjectPlotMode() :
      op->vtkXYPlotActor::GetDataObjectPlotMode());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXYPlotActor_SetDataObjectPlotModeToRows(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataObjectPlotModeToRows");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetDataObjectPlotModeToRows();
      }
    else
      {
      op->vtkXYPlotActor::SetDataObjectPlotModeToRows();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXYPlotActor_SetDataObjectPlotModeToColumns(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataObjectPlotModeToColumns");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetDataObjectPlotModeToColumns();
      }
    else
      {
      op->vtkXYPlotActor::SetDataObjectPlotModeToColumns();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXYPlotActor_GetDataObjectPlotModeAsString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataObjectPlotModeAsString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetDataObjectPlotModeAsString() :
      op->vtkXYPlotActor::GetDataObjectPlotModeAsString());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXYPlotActor_SetDataObjectXComponent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataObjectXComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  int temp0;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetDataObjectXComponent(temp0, temp1);
      }
    else
      {
      op->vtkXYPlotActor::SetDataObjectXComponent(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXYPlotActor_GetDataObjectXComponent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataObjectXComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->GetDataObjectXComponent(temp0) :
      op->vtkXYPlotActor::GetDataObjectXComponent(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXYPlotActor_SetDataObjectYComponent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataObjectYComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  int temp0;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetDataObjectYComponent(temp0, temp1);
      }
    else
      {
      op->vtkXYPlotActor::SetDataObjectYComponent(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXYPlotActor_GetDataObjectYComponent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataObjectYComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->GetDataObjectYComponent(temp0) :
      op->vtkXYPlotActor::GetDataObjectYComponent(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXYPlotActor_SetPlotColor_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPlotColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  int temp0;
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
      op->SetPlotColor(temp0, temp1, temp2, temp3);
      }
    else
      {
      op->vtkXYPlotActor::SetPlotColor(temp0, temp1, temp2, temp3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkXYPlotActor_SetPlotColor_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPlotColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  int temp0;
  double temp1[3];
  const int size1 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
    {
    if (ap.IsBound())
      {
      op->SetPlotColor(temp0, temp1);
      }
    else
      {
      op->vtkXYPlotActor::SetPlotColor(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkXYPlotActor_SetPlotColor(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 4:
      return PyvtkXYPlotActor_SetPlotColor_s1(self, args);
    case 2:
      return PyvtkXYPlotActor_SetPlotColor_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetPlotColor");
  return NULL;
}



static PyObject *
PyvtkXYPlotActor_GetPlotColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPlotColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  int temp0;
  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetPlotColor(temp0) :
      op->vtkXYPlotActor::GetPlotColor(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkXYPlotActor_SetPlotSymbol(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPlotSymbol");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  int temp0;
  vtkPolyData *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkPolyData"))
    {
    if (ap.IsBound())
      {
      op->SetPlotSymbol(temp0, temp1);
      }
    else
      {
      op->vtkXYPlotActor::SetPlotSymbol(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXYPlotActor_GetPlotSymbol(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPlotSymbol");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkPolyData *tempr = (ap.IsBound() ?
      op->GetPlotSymbol(temp0) :
      op->vtkXYPlotActor::GetPlotSymbol(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXYPlotActor_SetPlotLabel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPlotLabel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  int temp0;
  char *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetPlotLabel(temp0, temp1);
      }
    else
      {
      op->vtkXYPlotActor::SetPlotLabel(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXYPlotActor_GetPlotLabel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPlotLabel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetPlotLabel(temp0) :
      op->vtkXYPlotActor::GetPlotLabel(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXYPlotActor_GetPlotCurvePoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPlotCurvePoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetPlotCurvePoints() :
      op->vtkXYPlotActor::GetPlotCurvePoints());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXYPlotActor_SetPlotCurvePoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPlotCurvePoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetPlotCurvePoints(temp0);
      }
    else
      {
      op->vtkXYPlotActor::SetPlotCurvePoints(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXYPlotActor_PlotCurvePointsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PlotCurvePointsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->PlotCurvePointsOn();
      }
    else
      {
      op->vtkXYPlotActor::PlotCurvePointsOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXYPlotActor_PlotCurvePointsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PlotCurvePointsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->PlotCurvePointsOff();
      }
    else
      {
      op->vtkXYPlotActor::PlotCurvePointsOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXYPlotActor_GetPlotCurveLines(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPlotCurveLines");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetPlotCurveLines() :
      op->vtkXYPlotActor::GetPlotCurveLines());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXYPlotActor_SetPlotCurveLines(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPlotCurveLines");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetPlotCurveLines(temp0);
      }
    else
      {
      op->vtkXYPlotActor::SetPlotCurveLines(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXYPlotActor_PlotCurveLinesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PlotCurveLinesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->PlotCurveLinesOn();
      }
    else
      {
      op->vtkXYPlotActor::PlotCurveLinesOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXYPlotActor_PlotCurveLinesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PlotCurveLinesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->PlotCurveLinesOff();
      }
    else
      {
      op->vtkXYPlotActor::PlotCurveLinesOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXYPlotActor_SetPlotLines_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPlotLines");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  int temp0;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetPlotLines(temp0, temp1);
      }
    else
      {
      op->vtkXYPlotActor::SetPlotLines(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkXYPlotActor_SetPlotLines_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPlotLines");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetPlotLines(temp0);
      }
    else
      {
      op->vtkXYPlotActor::SetPlotLines(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkXYPlotActor_SetPlotLines(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkXYPlotActor_SetPlotLines_s1(self, args);
    case 1:
      return PyvtkXYPlotActor_SetPlotLines_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetPlotLines");
  return NULL;
}



static PyObject *
PyvtkXYPlotActor_GetPlotLines_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPlotLines");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->GetPlotLines(temp0) :
      op->vtkXYPlotActor::GetPlotLines(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkXYPlotActor_GetPlotLines_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPlotLines");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetPlotLines() :
      op->vtkXYPlotActor::GetPlotLines());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkXYPlotActor_GetPlotLines(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkXYPlotActor_GetPlotLines_s1(self, args);
    case 0:
      return PyvtkXYPlotActor_GetPlotLines_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetPlotLines");
  return NULL;
}



static PyObject *
PyvtkXYPlotActor_SetPlotPoints_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPlotPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  int temp0;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetPlotPoints(temp0, temp1);
      }
    else
      {
      op->vtkXYPlotActor::SetPlotPoints(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkXYPlotActor_SetPlotPoints_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPlotPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetPlotPoints(temp0);
      }
    else
      {
      op->vtkXYPlotActor::SetPlotPoints(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkXYPlotActor_SetPlotPoints(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkXYPlotActor_SetPlotPoints_s1(self, args);
    case 1:
      return PyvtkXYPlotActor_SetPlotPoints_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetPlotPoints");
  return NULL;
}



static PyObject *
PyvtkXYPlotActor_GetPlotPoints_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPlotPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->GetPlotPoints(temp0) :
      op->vtkXYPlotActor::GetPlotPoints(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkXYPlotActor_GetPlotPoints_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPlotPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetPlotPoints() :
      op->vtkXYPlotActor::GetPlotPoints());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkXYPlotActor_GetPlotPoints(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkXYPlotActor_GetPlotPoints_s1(self, args);
    case 0:
      return PyvtkXYPlotActor_GetPlotPoints_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetPlotPoints");
  return NULL;
}



static PyObject *
PyvtkXYPlotActor_SetExchangeAxes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExchangeAxes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetExchangeAxes(temp0);
      }
    else
      {
      op->vtkXYPlotActor::SetExchangeAxes(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXYPlotActor_GetExchangeAxes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetExchangeAxes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetExchangeAxes() :
      op->vtkXYPlotActor::GetExchangeAxes());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXYPlotActor_ExchangeAxesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ExchangeAxesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ExchangeAxesOn();
      }
    else
      {
      op->vtkXYPlotActor::ExchangeAxesOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXYPlotActor_ExchangeAxesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ExchangeAxesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ExchangeAxesOff();
      }
    else
      {
      op->vtkXYPlotActor::ExchangeAxesOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXYPlotActor_SetReverseXAxis(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetReverseXAxis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetReverseXAxis(temp0);
      }
    else
      {
      op->vtkXYPlotActor::SetReverseXAxis(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXYPlotActor_GetReverseXAxis(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetReverseXAxis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetReverseXAxis() :
      op->vtkXYPlotActor::GetReverseXAxis());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXYPlotActor_ReverseXAxisOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReverseXAxisOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ReverseXAxisOn();
      }
    else
      {
      op->vtkXYPlotActor::ReverseXAxisOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXYPlotActor_ReverseXAxisOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReverseXAxisOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ReverseXAxisOff();
      }
    else
      {
      op->vtkXYPlotActor::ReverseXAxisOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXYPlotActor_SetReverseYAxis(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetReverseYAxis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetReverseYAxis(temp0);
      }
    else
      {
      op->vtkXYPlotActor::SetReverseYAxis(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXYPlotActor_GetReverseYAxis(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetReverseYAxis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetReverseYAxis() :
      op->vtkXYPlotActor::GetReverseYAxis());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXYPlotActor_ReverseYAxisOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReverseYAxisOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ReverseYAxisOn();
      }
    else
      {
      op->vtkXYPlotActor::ReverseYAxisOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXYPlotActor_ReverseYAxisOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReverseYAxisOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ReverseYAxisOff();
      }
    else
      {
      op->vtkXYPlotActor::ReverseYAxisOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXYPlotActor_GetLegendActor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLegendActor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkLegendBoxActor *tempr = (ap.IsBound() ?
      op->GetLegendActor() :
      op->vtkXYPlotActor::GetLegendActor());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXYPlotActor_GetGlyphSource(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGlyphSource");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkGlyphSource2D *tempr = (ap.IsBound() ?
      op->GetGlyphSource() :
      op->vtkXYPlotActor::GetGlyphSource());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXYPlotActor_SetTitle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTitle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  char *temp0 = NULL;
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
      op->vtkXYPlotActor::SetTitle(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXYPlotActor_GetTitle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTitle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetTitle() :
      op->vtkXYPlotActor::GetTitle());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXYPlotActor_SetXTitle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetXTitle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetXTitle(temp0);
      }
    else
      {
      op->vtkXYPlotActor::SetXTitle(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXYPlotActor_GetXTitle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetXTitle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetXTitle() :
      op->vtkXYPlotActor::GetXTitle());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXYPlotActor_SetYTitle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetYTitle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetYTitle(temp0);
      }
    else
      {
      op->vtkXYPlotActor::SetYTitle(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXYPlotActor_GetYTitle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetYTitle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetYTitle() :
      op->vtkXYPlotActor::GetYTitle());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXYPlotActor_GetXAxisActor2D(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetXAxisActor2D");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkAxisActor2D *tempr = (ap.IsBound() ?
      op->GetXAxisActor2D() :
      op->vtkXYPlotActor::GetXAxisActor2D());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXYPlotActor_GetYAxisActor2D(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetYAxisActor2D");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkAxisActor2D *tempr = (ap.IsBound() ?
      op->GetYAxisActor2D() :
      op->vtkXYPlotActor::GetYAxisActor2D());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXYPlotActor_SetXRange_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetXRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  double temp0;
  double temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetXRange(temp0, temp1);
      }
    else
      {
      op->vtkXYPlotActor::SetXRange(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkXYPlotActor_SetXRange_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetXRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  double temp0[2];
  const int size0 = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetXRange(temp0);
      }
    else
      {
      op->vtkXYPlotActor::SetXRange(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkXYPlotActor_SetXRange(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkXYPlotActor_SetXRange_s1(self, args);
    case 1:
      return PyvtkXYPlotActor_SetXRange_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetXRange");
  return NULL;
}



static PyObject *
PyvtkXYPlotActor_GetXRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetXRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  int sizer = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetXRange() :
      op->vtkXYPlotActor::GetXRange());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkXYPlotActor_SetYRange_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetYRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  double temp0;
  double temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetYRange(temp0, temp1);
      }
    else
      {
      op->vtkXYPlotActor::SetYRange(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkXYPlotActor_SetYRange_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetYRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  double temp0[2];
  const int size0 = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetYRange(temp0);
      }
    else
      {
      op->vtkXYPlotActor::SetYRange(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkXYPlotActor_SetYRange(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkXYPlotActor_SetYRange_s1(self, args);
    case 1:
      return PyvtkXYPlotActor_SetYRange_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetYRange");
  return NULL;
}



static PyObject *
PyvtkXYPlotActor_GetYRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetYRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  int sizer = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetYRange() :
      op->vtkXYPlotActor::GetYRange());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkXYPlotActor_SetPlotRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPlotRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

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
      op->SetPlotRange(temp0, temp1, temp2, temp3);
      }
    else
      {
      op->vtkXYPlotActor::SetPlotRange(temp0, temp1, temp2, temp3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXYPlotActor_SetNumberOfXLabels(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfXLabels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetNumberOfXLabels(temp0);
      }
    else
      {
      op->vtkXYPlotActor::SetNumberOfXLabels(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXYPlotActor_GetNumberOfXLabelsMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfXLabelsMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfXLabelsMinValue() :
      op->vtkXYPlotActor::GetNumberOfXLabelsMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXYPlotActor_GetNumberOfXLabelsMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfXLabelsMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfXLabelsMaxValue() :
      op->vtkXYPlotActor::GetNumberOfXLabelsMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXYPlotActor_GetNumberOfXLabels(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfXLabels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfXLabels() :
      op->vtkXYPlotActor::GetNumberOfXLabels());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXYPlotActor_SetNumberOfYLabels(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfYLabels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetNumberOfYLabels(temp0);
      }
    else
      {
      op->vtkXYPlotActor::SetNumberOfYLabels(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXYPlotActor_GetNumberOfYLabelsMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfYLabelsMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfYLabelsMinValue() :
      op->vtkXYPlotActor::GetNumberOfYLabelsMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXYPlotActor_GetNumberOfYLabelsMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfYLabelsMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfYLabelsMaxValue() :
      op->vtkXYPlotActor::GetNumberOfYLabelsMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXYPlotActor_GetNumberOfYLabels(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfYLabels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfYLabels() :
      op->vtkXYPlotActor::GetNumberOfYLabels());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXYPlotActor_SetNumberOfLabels(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfLabels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetNumberOfLabels(temp0);
      }
    else
      {
      op->vtkXYPlotActor::SetNumberOfLabels(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXYPlotActor_SetAdjustXLabels(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAdjustXLabels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetAdjustXLabels(temp0);
      }
    else
      {
      op->vtkXYPlotActor::SetAdjustXLabels(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXYPlotActor_GetAdjustXLabels(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAdjustXLabels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetAdjustXLabels() :
      op->vtkXYPlotActor::GetAdjustXLabels());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXYPlotActor_SetAdjustYLabels(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAdjustYLabels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetAdjustYLabels(temp0);
      }
    else
      {
      op->vtkXYPlotActor::SetAdjustYLabels(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXYPlotActor_GetAdjustYLabels(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAdjustYLabels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetAdjustYLabels() :
      op->vtkXYPlotActor::GetAdjustYLabels());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXYPlotActor_SetNumberOfXMinorTicks(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfXMinorTicks");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetNumberOfXMinorTicks(temp0);
      }
    else
      {
      op->vtkXYPlotActor::SetNumberOfXMinorTicks(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXYPlotActor_GetNumberOfXMinorTicks(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfXMinorTicks");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfXMinorTicks() :
      op->vtkXYPlotActor::GetNumberOfXMinorTicks());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXYPlotActor_SetNumberOfYMinorTicks(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfYMinorTicks");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetNumberOfYMinorTicks(temp0);
      }
    else
      {
      op->vtkXYPlotActor::SetNumberOfYMinorTicks(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXYPlotActor_GetNumberOfYMinorTicks(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfYMinorTicks");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfYMinorTicks() :
      op->vtkXYPlotActor::GetNumberOfYMinorTicks());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXYPlotActor_SetLegend(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLegend");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetLegend(temp0);
      }
    else
      {
      op->vtkXYPlotActor::SetLegend(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXYPlotActor_GetLegend(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLegend");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetLegend() :
      op->vtkXYPlotActor::GetLegend());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXYPlotActor_LegendOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LegendOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->LegendOn();
      }
    else
      {
      op->vtkXYPlotActor::LegendOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXYPlotActor_LegendOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LegendOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->LegendOff();
      }
    else
      {
      op->vtkXYPlotActor::LegendOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXYPlotActor_SetTitlePosition_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTitlePosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  double temp0;
  double temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetTitlePosition(temp0, temp1);
      }
    else
      {
      op->vtkXYPlotActor::SetTitlePosition(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkXYPlotActor_SetTitlePosition_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTitlePosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  double temp0[2];
  const int size0 = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetTitlePosition(temp0);
      }
    else
      {
      op->vtkXYPlotActor::SetTitlePosition(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkXYPlotActor_SetTitlePosition(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkXYPlotActor_SetTitlePosition_s1(self, args);
    case 1:
      return PyvtkXYPlotActor_SetTitlePosition_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetTitlePosition");
  return NULL;
}



static PyObject *
PyvtkXYPlotActor_GetTitlePosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTitlePosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  int sizer = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetTitlePosition() :
      op->vtkXYPlotActor::GetTitlePosition());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkXYPlotActor_SetAdjustTitlePosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAdjustTitlePosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetAdjustTitlePosition(temp0);
      }
    else
      {
      op->vtkXYPlotActor::SetAdjustTitlePosition(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXYPlotActor_GetAdjustTitlePosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAdjustTitlePosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetAdjustTitlePosition() :
      op->vtkXYPlotActor::GetAdjustTitlePosition());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXYPlotActor_AdjustTitlePositionOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AdjustTitlePositionOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->AdjustTitlePositionOn();
      }
    else
      {
      op->vtkXYPlotActor::AdjustTitlePositionOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXYPlotActor_AdjustTitlePositionOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AdjustTitlePositionOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->AdjustTitlePositionOff();
      }
    else
      {
      op->vtkXYPlotActor::AdjustTitlePositionOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXYPlotActor_SetAdjustTitlePositionMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAdjustTitlePositionMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetAdjustTitlePositionMode(temp0);
      }
    else
      {
      op->vtkXYPlotActor::SetAdjustTitlePositionMode(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXYPlotActor_GetAdjustTitlePositionMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAdjustTitlePositionMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetAdjustTitlePositionMode() :
      op->vtkXYPlotActor::GetAdjustTitlePositionMode());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXYPlotActor_SetLegendPosition_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLegendPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  double temp0;
  double temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetLegendPosition(temp0, temp1);
      }
    else
      {
      op->vtkXYPlotActor::SetLegendPosition(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkXYPlotActor_SetLegendPosition_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLegendPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  double temp0[2];
  const int size0 = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetLegendPosition(temp0);
      }
    else
      {
      op->vtkXYPlotActor::SetLegendPosition(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkXYPlotActor_SetLegendPosition(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkXYPlotActor_SetLegendPosition_s1(self, args);
    case 1:
      return PyvtkXYPlotActor_SetLegendPosition_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetLegendPosition");
  return NULL;
}



static PyObject *
PyvtkXYPlotActor_GetLegendPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLegendPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  int sizer = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetLegendPosition() :
      op->vtkXYPlotActor::GetLegendPosition());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkXYPlotActor_SetLegendPosition2_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLegendPosition2");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  double temp0;
  double temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetLegendPosition2(temp0, temp1);
      }
    else
      {
      op->vtkXYPlotActor::SetLegendPosition2(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkXYPlotActor_SetLegendPosition2_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLegendPosition2");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  double temp0[2];
  const int size0 = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetLegendPosition2(temp0);
      }
    else
      {
      op->vtkXYPlotActor::SetLegendPosition2(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkXYPlotActor_SetLegendPosition2(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkXYPlotActor_SetLegendPosition2_s1(self, args);
    case 1:
      return PyvtkXYPlotActor_SetLegendPosition2_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetLegendPosition2");
  return NULL;
}



static PyObject *
PyvtkXYPlotActor_GetLegendPosition2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLegendPosition2");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  int sizer = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetLegendPosition2() :
      op->vtkXYPlotActor::GetLegendPosition2());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkXYPlotActor_SetTitleTextProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTitleTextProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  vtkTextProperty *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkTextProperty"))
    {
    if (ap.IsBound())
      {
      op->SetTitleTextProperty(temp0);
      }
    else
      {
      op->vtkXYPlotActor::SetTitleTextProperty(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXYPlotActor_GetTitleTextProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTitleTextProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkTextProperty *tempr = (ap.IsBound() ?
      op->GetTitleTextProperty() :
      op->vtkXYPlotActor::GetTitleTextProperty());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXYPlotActor_SetAxisTitleTextProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAxisTitleTextProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  vtkTextProperty *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkTextProperty"))
    {
    if (ap.IsBound())
      {
      op->SetAxisTitleTextProperty(temp0);
      }
    else
      {
      op->vtkXYPlotActor::SetAxisTitleTextProperty(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXYPlotActor_GetAxisTitleTextProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAxisTitleTextProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkTextProperty *tempr = (ap.IsBound() ?
      op->GetAxisTitleTextProperty() :
      op->vtkXYPlotActor::GetAxisTitleTextProperty());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXYPlotActor_SetAxisLabelTextProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAxisLabelTextProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  vtkTextProperty *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkTextProperty"))
    {
    if (ap.IsBound())
      {
      op->SetAxisLabelTextProperty(temp0);
      }
    else
      {
      op->vtkXYPlotActor::SetAxisLabelTextProperty(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXYPlotActor_GetAxisLabelTextProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAxisLabelTextProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkTextProperty *tempr = (ap.IsBound() ?
      op->GetAxisLabelTextProperty() :
      op->vtkXYPlotActor::GetAxisLabelTextProperty());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXYPlotActor_SetLogx(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLogx");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetLogx(temp0);
      }
    else
      {
      op->vtkXYPlotActor::SetLogx(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXYPlotActor_GetLogx(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLogx");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetLogx() :
      op->vtkXYPlotActor::GetLogx());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXYPlotActor_LogxOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LogxOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->LogxOn();
      }
    else
      {
      op->vtkXYPlotActor::LogxOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXYPlotActor_LogxOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LogxOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->LogxOff();
      }
    else
      {
      op->vtkXYPlotActor::LogxOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXYPlotActor_SetLabelFormat(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLabelFormat");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

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
      op->vtkXYPlotActor::SetLabelFormat(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXYPlotActor_GetLabelFormat(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLabelFormat");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetLabelFormat() :
      op->vtkXYPlotActor::GetLabelFormat());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXYPlotActor_SetXLabelFormat(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetXLabelFormat");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetXLabelFormat(temp0);
      }
    else
      {
      op->vtkXYPlotActor::SetXLabelFormat(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXYPlotActor_GetXLabelFormat(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetXLabelFormat");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetXLabelFormat() :
      op->vtkXYPlotActor::GetXLabelFormat());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXYPlotActor_SetYLabelFormat(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetYLabelFormat");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetYLabelFormat(temp0);
      }
    else
      {
      op->vtkXYPlotActor::SetYLabelFormat(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXYPlotActor_GetYLabelFormat(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetYLabelFormat");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetYLabelFormat() :
      op->vtkXYPlotActor::GetYLabelFormat());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXYPlotActor_SetBorder(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBorder");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetBorder(temp0);
      }
    else
      {
      op->vtkXYPlotActor::SetBorder(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXYPlotActor_GetBorderMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBorderMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetBorderMinValue() :
      op->vtkXYPlotActor::GetBorderMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXYPlotActor_GetBorderMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBorderMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetBorderMaxValue() :
      op->vtkXYPlotActor::GetBorderMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXYPlotActor_GetBorder(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBorder");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetBorder() :
      op->vtkXYPlotActor::GetBorder());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXYPlotActor_PlotPointsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PlotPointsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->PlotPointsOn();
      }
    else
      {
      op->vtkXYPlotActor::PlotPointsOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXYPlotActor_PlotPointsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PlotPointsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->PlotPointsOff();
      }
    else
      {
      op->vtkXYPlotActor::PlotPointsOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXYPlotActor_PlotLinesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PlotLinesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->PlotLinesOn();
      }
    else
      {
      op->vtkXYPlotActor::PlotLinesOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXYPlotActor_PlotLinesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PlotLinesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->PlotLinesOff();
      }
    else
      {
      op->vtkXYPlotActor::PlotLinesOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXYPlotActor_SetGlyphSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGlyphSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetGlyphSize(temp0);
      }
    else
      {
      op->vtkXYPlotActor::SetGlyphSize(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXYPlotActor_GetGlyphSizeMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGlyphSizeMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetGlyphSizeMinValue() :
      op->vtkXYPlotActor::GetGlyphSizeMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXYPlotActor_GetGlyphSizeMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGlyphSizeMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetGlyphSizeMaxValue() :
      op->vtkXYPlotActor::GetGlyphSizeMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXYPlotActor_GetGlyphSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGlyphSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetGlyphSize() :
      op->vtkXYPlotActor::GetGlyphSize());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXYPlotActor_ViewportToPlotCoordinate_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ViewportToPlotCoordinate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  vtkViewport *temp0 = NULL;
  double temp1;
  double temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkViewport") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      op->ViewportToPlotCoordinate(temp0, temp1, temp2);
      }
    else
      {
      op->vtkXYPlotActor::ViewportToPlotCoordinate(temp0, temp1, temp2);
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
PyvtkXYPlotActor_ViewportToPlotCoordinate_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ViewportToPlotCoordinate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  vtkViewport *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
    {
    if (ap.IsBound())
      {
      op->ViewportToPlotCoordinate(temp0);
      }
    else
      {
      op->vtkXYPlotActor::ViewportToPlotCoordinate(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkXYPlotActor_ViewportToPlotCoordinate(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkXYPlotActor_ViewportToPlotCoordinate_s1(self, args);
    case 1:
      return PyvtkXYPlotActor_ViewportToPlotCoordinate_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "ViewportToPlotCoordinate");
  return NULL;
}



static PyObject *
PyvtkXYPlotActor_SetPlotCoordinate_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPlotCoordinate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  double temp0;
  double temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetPlotCoordinate(temp0, temp1);
      }
    else
      {
      op->vtkXYPlotActor::SetPlotCoordinate(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkXYPlotActor_SetPlotCoordinate_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPlotCoordinate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  double temp0[2];
  const int size0 = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetPlotCoordinate(temp0);
      }
    else
      {
      op->vtkXYPlotActor::SetPlotCoordinate(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkXYPlotActor_SetPlotCoordinate(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkXYPlotActor_SetPlotCoordinate_s1(self, args);
    case 1:
      return PyvtkXYPlotActor_SetPlotCoordinate_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetPlotCoordinate");
  return NULL;
}



static PyObject *
PyvtkXYPlotActor_GetPlotCoordinate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPlotCoordinate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  int sizer = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetPlotCoordinate() :
      op->vtkXYPlotActor::GetPlotCoordinate());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkXYPlotActor_PlotToViewportCoordinate_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PlotToViewportCoordinate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  vtkViewport *temp0 = NULL;
  double temp1;
  double temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkViewport") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      op->PlotToViewportCoordinate(temp0, temp1, temp2);
      }
    else
      {
      op->vtkXYPlotActor::PlotToViewportCoordinate(temp0, temp1, temp2);
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
PyvtkXYPlotActor_PlotToViewportCoordinate_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PlotToViewportCoordinate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  vtkViewport *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
    {
    if (ap.IsBound())
      {
      op->PlotToViewportCoordinate(temp0);
      }
    else
      {
      op->vtkXYPlotActor::PlotToViewportCoordinate(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkXYPlotActor_PlotToViewportCoordinate(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkXYPlotActor_PlotToViewportCoordinate_s1(self, args);
    case 1:
      return PyvtkXYPlotActor_PlotToViewportCoordinate_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "PlotToViewportCoordinate");
  return NULL;
}



static PyObject *
PyvtkXYPlotActor_SetViewportCoordinate_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetViewportCoordinate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  double temp0;
  double temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetViewportCoordinate(temp0, temp1);
      }
    else
      {
      op->vtkXYPlotActor::SetViewportCoordinate(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkXYPlotActor_SetViewportCoordinate_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetViewportCoordinate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  double temp0[2];
  const int size0 = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetViewportCoordinate(temp0);
      }
    else
      {
      op->vtkXYPlotActor::SetViewportCoordinate(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkXYPlotActor_SetViewportCoordinate(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkXYPlotActor_SetViewportCoordinate_s1(self, args);
    case 1:
      return PyvtkXYPlotActor_SetViewportCoordinate_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetViewportCoordinate");
  return NULL;
}



static PyObject *
PyvtkXYPlotActor_GetViewportCoordinate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetViewportCoordinate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  int sizer = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetViewportCoordinate() :
      op->vtkXYPlotActor::GetViewportCoordinate());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkXYPlotActor_IsInPlot(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsInPlot");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  vtkViewport *temp0 = NULL;
  double temp1;
  double temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkViewport") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    int tempr = (ap.IsBound() ?
      op->IsInPlot(temp0, temp1, temp2) :
      op->vtkXYPlotActor::IsInPlot(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXYPlotActor_SetChartBox(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetChartBox");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetChartBox(temp0);
      }
    else
      {
      op->vtkXYPlotActor::SetChartBox(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXYPlotActor_GetChartBox(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetChartBox");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetChartBox() :
      op->vtkXYPlotActor::GetChartBox());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXYPlotActor_ChartBoxOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ChartBoxOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ChartBoxOn();
      }
    else
      {
      op->vtkXYPlotActor::ChartBoxOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXYPlotActor_ChartBoxOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ChartBoxOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ChartBoxOff();
      }
    else
      {
      op->vtkXYPlotActor::ChartBoxOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXYPlotActor_SetChartBorder(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetChartBorder");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetChartBorder(temp0);
      }
    else
      {
      op->vtkXYPlotActor::SetChartBorder(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXYPlotActor_GetChartBorder(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetChartBorder");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetChartBorder() :
      op->vtkXYPlotActor::GetChartBorder());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXYPlotActor_ChartBorderOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ChartBorderOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ChartBorderOn();
      }
    else
      {
      op->vtkXYPlotActor::ChartBorderOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXYPlotActor_ChartBorderOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ChartBorderOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ChartBorderOff();
      }
    else
      {
      op->vtkXYPlotActor::ChartBorderOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXYPlotActor_GetChartBoxProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetChartBoxProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkProperty2D *tempr = (ap.IsBound() ?
      op->GetChartBoxProperty() :
      op->vtkXYPlotActor::GetChartBoxProperty());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXYPlotActor_SetShowReferenceXLine(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetShowReferenceXLine");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetShowReferenceXLine(temp0);
      }
    else
      {
      op->vtkXYPlotActor::SetShowReferenceXLine(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXYPlotActor_GetShowReferenceXLine(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetShowReferenceXLine");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetShowReferenceXLine() :
      op->vtkXYPlotActor::GetShowReferenceXLine());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXYPlotActor_ShowReferenceXLineOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShowReferenceXLineOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ShowReferenceXLineOn();
      }
    else
      {
      op->vtkXYPlotActor::ShowReferenceXLineOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXYPlotActor_ShowReferenceXLineOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShowReferenceXLineOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ShowReferenceXLineOff();
      }
    else
      {
      op->vtkXYPlotActor::ShowReferenceXLineOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXYPlotActor_SetReferenceXValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetReferenceXValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetReferenceXValue(temp0);
      }
    else
      {
      op->vtkXYPlotActor::SetReferenceXValue(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXYPlotActor_GetReferenceXValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetReferenceXValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetReferenceXValue() :
      op->vtkXYPlotActor::GetReferenceXValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXYPlotActor_SetShowReferenceYLine(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetShowReferenceYLine");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetShowReferenceYLine(temp0);
      }
    else
      {
      op->vtkXYPlotActor::SetShowReferenceYLine(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXYPlotActor_GetShowReferenceYLine(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetShowReferenceYLine");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetShowReferenceYLine() :
      op->vtkXYPlotActor::GetShowReferenceYLine());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXYPlotActor_ShowReferenceYLineOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShowReferenceYLineOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ShowReferenceYLineOn();
      }
    else
      {
      op->vtkXYPlotActor::ShowReferenceYLineOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXYPlotActor_ShowReferenceYLineOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShowReferenceYLineOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ShowReferenceYLineOff();
      }
    else
      {
      op->vtkXYPlotActor::ShowReferenceYLineOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXYPlotActor_SetReferenceYValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetReferenceYValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetReferenceYValue(temp0);
      }
    else
      {
      op->vtkXYPlotActor::SetReferenceYValue(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXYPlotActor_GetReferenceYValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetReferenceYValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetReferenceYValue() :
      op->vtkXYPlotActor::GetReferenceYValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXYPlotActor_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMTime() :
      op->vtkXYPlotActor::GetMTime());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXYPlotActor_RenderOpaqueGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOpaqueGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  vtkViewport *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
    {
    int tempr = (ap.IsBound() ?
      op->RenderOpaqueGeometry(temp0) :
      op->vtkXYPlotActor::RenderOpaqueGeometry(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXYPlotActor_RenderOverlay(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOverlay");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  vtkViewport *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
    {
    int tempr = (ap.IsBound() ?
      op->RenderOverlay(temp0) :
      op->vtkXYPlotActor::RenderOverlay(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXYPlotActor_RenderTranslucentPolygonalGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderTranslucentPolygonalGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  vtkViewport *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
    {
    int tempr = (ap.IsBound() ?
      op->RenderTranslucentPolygonalGeometry(temp0) :
      op->vtkXYPlotActor::RenderTranslucentPolygonalGeometry(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXYPlotActor_HasTranslucentPolygonalGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasTranslucentPolygonalGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->HasTranslucentPolygonalGeometry() :
      op->vtkXYPlotActor::HasTranslucentPolygonalGeometry());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXYPlotActor_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  vtkWindow *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkWindow"))
    {
    if (ap.IsBound())
      {
      op->ReleaseGraphicsResources(temp0);
      }
    else
      {
      op->vtkXYPlotActor::ReleaseGraphicsResources(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXYPlotActor_SetXTitlePosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetXTitlePosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetXTitlePosition(temp0);
      }
    else
      {
      op->vtkXYPlotActor::SetXTitlePosition(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXYPlotActor_GetXTitlePosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetXTitlePosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetXTitlePosition() :
      op->vtkXYPlotActor::GetXTitlePosition());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXYPlotActor_SetYTitlePosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetYTitlePosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetYTitlePosition(temp0);
      }
    else
      {
      op->vtkXYPlotActor::SetYTitlePosition(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXYPlotActor_GetYTitlePosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetYTitlePosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetYTitlePosition() :
      op->vtkXYPlotActor::GetYTitlePosition());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXYPlotActor_SetYTitlePositionToTop(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetYTitlePositionToTop");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetYTitlePositionToTop();
      }
    else
      {
      op->vtkXYPlotActor::SetYTitlePositionToTop();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXYPlotActor_SetYTitlePositionToHCenter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetYTitlePositionToHCenter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetYTitlePositionToHCenter();
      }
    else
      {
      op->vtkXYPlotActor::SetYTitlePositionToHCenter();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXYPlotActor_SetYTitlePositionToVCenter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetYTitlePositionToVCenter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetYTitlePositionToVCenter();
      }
    else
      {
      op->vtkXYPlotActor::SetYTitlePositionToVCenter();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXYPlotActor_SetPlotGlyphType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPlotGlyphType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  int temp0;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetPlotGlyphType(temp0, temp1);
      }
    else
      {
      op->vtkXYPlotActor::SetPlotGlyphType(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXYPlotActor_SetLineWidth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLineWidth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetLineWidth(temp0);
      }
    else
      {
      op->vtkXYPlotActor::SetLineWidth(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXYPlotActor_AddUserCurvesPoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddUserCurvesPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

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
      op->AddUserCurvesPoint(temp0, temp1, temp2);
      }
    else
      {
      op->vtkXYPlotActor::AddUserCurvesPoint(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXYPlotActor_RemoveAllActiveCurves(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveAllActiveCurves");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->RemoveAllActiveCurves();
      }
    else
      {
      op->vtkXYPlotActor::RemoveAllActiveCurves();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXYPlotActor_SetLegendBorder(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLegendBorder");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetLegendBorder(temp0);
      }
    else
      {
      op->vtkXYPlotActor::SetLegendBorder(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXYPlotActor_SetLegendBox(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLegendBox");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetLegendBox(temp0);
      }
    else
      {
      op->vtkXYPlotActor::SetLegendBox(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXYPlotActor_SetLegendUseBackground(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLegendUseBackground");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetLegendUseBackground(temp0);
      }
    else
      {
      op->vtkXYPlotActor::SetLegendUseBackground(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXYPlotActor_SetLegendBackgroundColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLegendBackgroundColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

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
      op->SetLegendBackgroundColor(temp0, temp1, temp2);
      }
    else
      {
      op->vtkXYPlotActor::SetLegendBackgroundColor(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXYPlotActor_SetTitleColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTitleColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

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
      op->SetTitleColor(temp0, temp1, temp2);
      }
    else
      {
      op->vtkXYPlotActor::SetTitleColor(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXYPlotActor_SetTitleFontFamily(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTitleFontFamily");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetTitleFontFamily(temp0);
      }
    else
      {
      op->vtkXYPlotActor::SetTitleFontFamily(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXYPlotActor_SetTitleBold(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTitleBold");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetTitleBold(temp0);
      }
    else
      {
      op->vtkXYPlotActor::SetTitleBold(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXYPlotActor_SetTitleItalic(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTitleItalic");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetTitleItalic(temp0);
      }
    else
      {
      op->vtkXYPlotActor::SetTitleItalic(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXYPlotActor_SetTitleShadow(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTitleShadow");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetTitleShadow(temp0);
      }
    else
      {
      op->vtkXYPlotActor::SetTitleShadow(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXYPlotActor_SetTitleFontSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTitleFontSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetTitleFontSize(temp0);
      }
    else
      {
      op->vtkXYPlotActor::SetTitleFontSize(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXYPlotActor_SetTitleJustification(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTitleJustification");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetTitleJustification(temp0);
      }
    else
      {
      op->vtkXYPlotActor::SetTitleJustification(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXYPlotActor_SetTitleVerticalJustification(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTitleVerticalJustification");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetTitleVerticalJustification(temp0);
      }
    else
      {
      op->vtkXYPlotActor::SetTitleVerticalJustification(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXYPlotActor_SetXAxisColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetXAxisColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

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
      op->SetXAxisColor(temp0, temp1, temp2);
      }
    else
      {
      op->vtkXYPlotActor::SetXAxisColor(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXYPlotActor_SetYAxisColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetYAxisColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

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
      op->SetYAxisColor(temp0, temp1, temp2);
      }
    else
      {
      op->vtkXYPlotActor::SetYAxisColor(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXYPlotActor_SetAxisTitleColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAxisTitleColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

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
      op->SetAxisTitleColor(temp0, temp1, temp2);
      }
    else
      {
      op->vtkXYPlotActor::SetAxisTitleColor(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXYPlotActor_SetAxisTitleFontFamily(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAxisTitleFontFamily");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetAxisTitleFontFamily(temp0);
      }
    else
      {
      op->vtkXYPlotActor::SetAxisTitleFontFamily(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXYPlotActor_SetAxisTitleBold(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAxisTitleBold");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetAxisTitleBold(temp0);
      }
    else
      {
      op->vtkXYPlotActor::SetAxisTitleBold(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXYPlotActor_SetAxisTitleItalic(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAxisTitleItalic");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetAxisTitleItalic(temp0);
      }
    else
      {
      op->vtkXYPlotActor::SetAxisTitleItalic(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXYPlotActor_SetAxisTitleShadow(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAxisTitleShadow");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetAxisTitleShadow(temp0);
      }
    else
      {
      op->vtkXYPlotActor::SetAxisTitleShadow(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXYPlotActor_SetAxisTitleFontSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAxisTitleFontSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetAxisTitleFontSize(temp0);
      }
    else
      {
      op->vtkXYPlotActor::SetAxisTitleFontSize(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXYPlotActor_SetAxisTitleJustification(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAxisTitleJustification");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetAxisTitleJustification(temp0);
      }
    else
      {
      op->vtkXYPlotActor::SetAxisTitleJustification(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXYPlotActor_SetAxisTitleVerticalJustification(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAxisTitleVerticalJustification");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetAxisTitleVerticalJustification(temp0);
      }
    else
      {
      op->vtkXYPlotActor::SetAxisTitleVerticalJustification(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXYPlotActor_SetAxisLabelColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAxisLabelColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

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
      op->SetAxisLabelColor(temp0, temp1, temp2);
      }
    else
      {
      op->vtkXYPlotActor::SetAxisLabelColor(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXYPlotActor_SetAxisLabelFontFamily(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAxisLabelFontFamily");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetAxisLabelFontFamily(temp0);
      }
    else
      {
      op->vtkXYPlotActor::SetAxisLabelFontFamily(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXYPlotActor_SetAxisLabelBold(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAxisLabelBold");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetAxisLabelBold(temp0);
      }
    else
      {
      op->vtkXYPlotActor::SetAxisLabelBold(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXYPlotActor_SetAxisLabelItalic(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAxisLabelItalic");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetAxisLabelItalic(temp0);
      }
    else
      {
      op->vtkXYPlotActor::SetAxisLabelItalic(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXYPlotActor_SetAxisLabelShadow(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAxisLabelShadow");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetAxisLabelShadow(temp0);
      }
    else
      {
      op->vtkXYPlotActor::SetAxisLabelShadow(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXYPlotActor_SetAxisLabelFontSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAxisLabelFontSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetAxisLabelFontSize(temp0);
      }
    else
      {
      op->vtkXYPlotActor::SetAxisLabelFontSize(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXYPlotActor_SetAxisLabelJustification(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAxisLabelJustification");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetAxisLabelJustification(temp0);
      }
    else
      {
      op->vtkXYPlotActor::SetAxisLabelJustification(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXYPlotActor_SetAxisLabelVerticalJustification(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAxisLabelVerticalJustification");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetAxisLabelVerticalJustification(temp0);
      }
    else
      {
      op->vtkXYPlotActor::SetAxisLabelVerticalJustification(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkXYPlotActor_Methods[] = {
  {(char*)"GetClassName", PyvtkXYPlotActor_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkXYPlotActor_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkXYPlotActor_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkXYPlotActor\nC++: vtkXYPlotActor *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkXYPlotActor_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkXYPlotActor\nC++: vtkXYPlotActor *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"AddDataSetInput", PyvtkXYPlotActor_AddDataSetInput, METH_VARARGS,
   (char*)"V.AddDataSetInput(vtkDataSet, string, int)\nC++: void AddDataSetInput(vtkDataSet *ds, const char *arrayName,\n    int component)\nV.AddDataSetInput(vtkDataSet)\nC++: void AddDataSetInput(vtkDataSet *ds)\n\nAdd a dataset to the list of data to append. The array name\nspecifies which point array to plot. The array must be a\nvtkDataArray subclass, i.e. a numeric array. If the array name is\nNULL, then the default scalars are used.  The array can have\nmultiple components, but only the first component is ploted. Note\nthat AddInputDataSet() does not setup a pipeline connection\nwhereas AddInputConnection() does.\n"},
  {(char*)"AddDataSetInputConnection", PyvtkXYPlotActor_AddDataSetInputConnection, METH_VARARGS,
   (char*)"V.AddDataSetInputConnection(vtkAlgorithmOutput, string, int)\nC++: void AddDataSetInputConnection(vtkAlgorithmOutput *in,\n    const char *arrayName, int component)\nV.AddDataSetInputConnection(vtkAlgorithmOutput)\nC++: void AddDataSetInputConnection(vtkAlgorithmOutput *in)\n\nAdd a dataset to the list of data to append. The array name\nspecifies which point array to plot. The array must be a\nvtkDataArray subclass, i.e. a numeric array. If the array name is\nNULL, then the default scalars are used.  The array can have\nmultiple components, but only the first component is ploted. Note\nthat AddInputDataSet() does not setup a pipeline connection\nwhereas AddInputConnection() does.\n"},
  {(char*)"RemoveDataSetInput", PyvtkXYPlotActor_RemoveDataSetInput, METH_VARARGS,
   (char*)"V.RemoveDataSetInput(vtkDataSet, string, int)\nC++: void RemoveDataSetInput(vtkDataSet *ds,\n    const char *arrayName, int component)\nV.RemoveDataSetInput(vtkDataSet)\nC++: void RemoveDataSetInput(vtkDataSet *ds)\n\nRemove a dataset from the list of data to append.\n"},
  {(char*)"RemoveDataSetInputConnection", PyvtkXYPlotActor_RemoveDataSetInputConnection, METH_VARARGS,
   (char*)"V.RemoveDataSetInputConnection(vtkAlgorithmOutput, string, int)\nC++: void RemoveDataSetInputConnection(vtkAlgorithmOutput *in,\n    const char *arrayName, int component)\nV.RemoveDataSetInputConnection(vtkAlgorithmOutput)\nC++: void RemoveDataSetInputConnection(vtkAlgorithmOutput *in)\n\nRemove a dataset from the list of data to append.\n"},
  {(char*)"RemoveAllDataSetInputConnections", PyvtkXYPlotActor_RemoveAllDataSetInputConnections, METH_VARARGS,
   (char*)"V.RemoveAllDataSetInputConnections()\nC++: void RemoveAllDataSetInputConnections()\n\nThis removes all of the data set inputs, but does not change the\ndata object inputs.\n"},
  {(char*)"SetPointComponent", PyvtkXYPlotActor_SetPointComponent, METH_VARARGS,
   (char*)"V.SetPointComponent(int, int)\nC++: void SetPointComponent(int i, int comp)\n\nIf plotting points by value, which component to use to determine\nthe value. This sets a value per each input dataset (i.e., the\nith dataset).\n"},
  {(char*)"GetPointComponent", PyvtkXYPlotActor_GetPointComponent, METH_VARARGS,
   (char*)"V.GetPointComponent(int) -> int\nC++: int GetPointComponent(int i)\n\nIf plotting points by value, which component to use to determine\nthe value. This sets a value per each input dataset (i.e., the\nith dataset).\n"},
  {(char*)"SetXValues", PyvtkXYPlotActor_SetXValues, METH_VARARGS,
   (char*)"V.SetXValues(int)\nC++: void SetXValues(int)\n\nSpecify how the independent (x) variable is computed from the\npoints. The independent variable can be the scalar/point index\n(i.e., point id), the accumulated arc length along the points,\nthe normalized arc length, or by component value. If plotting\ndatasets (e.g., points), the value that is used is specified by\nthe PointComponent ivar.  (Note: these methods also control how\nfield data is plotted. Field data is usually plotted by value or\nindex, if plotting length 1-dimensional length measures are\nused.)\n"},
  {(char*)"GetXValuesMinValue", PyvtkXYPlotActor_GetXValuesMinValue, METH_VARARGS,
   (char*)"V.GetXValuesMinValue() -> int\nC++: int GetXValuesMinValue()\n\nSpecify how the independent (x) variable is computed from the\npoints. The independent variable can be the scalar/point index\n(i.e., point id), the accumulated arc length along the points,\nthe normalized arc length, or by component value. If plotting\ndatasets (e.g., points), the value that is used is specified by\nthe PointComponent ivar.  (Note: these methods also control how\nfield data is plotted. Field data is usually plotted by value or\nindex, if plotting length 1-dimensional length measures are\nused.)\n"},
  {(char*)"GetXValuesMaxValue", PyvtkXYPlotActor_GetXValuesMaxValue, METH_VARARGS,
   (char*)"V.GetXValuesMaxValue() -> int\nC++: int GetXValuesMaxValue()\n\nSpecify how the independent (x) variable is computed from the\npoints. The independent variable can be the scalar/point index\n(i.e., point id), the accumulated arc length along the points,\nthe normalized arc length, or by component value. If plotting\ndatasets (e.g., points), the value that is used is specified by\nthe PointComponent ivar.  (Note: these methods also control how\nfield data is plotted. Field data is usually plotted by value or\nindex, if plotting length 1-dimensional length measures are\nused.)\n"},
  {(char*)"GetXValues", PyvtkXYPlotActor_GetXValues, METH_VARARGS,
   (char*)"V.GetXValues() -> int\nC++: int GetXValues()\n\nSpecify how the independent (x) variable is computed from the\npoints. The independent variable can be the scalar/point index\n(i.e., point id), the accumulated arc length along the points,\nthe normalized arc length, or by component value. If plotting\ndatasets (e.g., points), the value that is used is specified by\nthe PointComponent ivar.  (Note: these methods also control how\nfield data is plotted. Field data is usually plotted by value or\nindex, if plotting length 1-dimensional length measures are\nused.)\n"},
  {(char*)"SetXValuesToIndex", PyvtkXYPlotActor_SetXValuesToIndex, METH_VARARGS,
   (char*)"V.SetXValuesToIndex()\nC++: void SetXValuesToIndex()\n\nSpecify how the independent (x) variable is computed from the\npoints. The independent variable can be the scalar/point index\n(i.e., point id), the accumulated arc length along the points,\nthe normalized arc length, or by component value. If plotting\ndatasets (e.g., points), the value that is used is specified by\nthe PointComponent ivar.  (Note: these methods also control how\nfield data is plotted. Field data is usually plotted by value or\nindex, if plotting length 1-dimensional length measures are\nused.)\n"},
  {(char*)"SetXValuesToArcLength", PyvtkXYPlotActor_SetXValuesToArcLength, METH_VARARGS,
   (char*)"V.SetXValuesToArcLength()\nC++: void SetXValuesToArcLength()\n\nSpecify how the independent (x) variable is computed from the\npoints. The independent variable can be the scalar/point index\n(i.e., point id), the accumulated arc length along the points,\nthe normalized arc length, or by component value. If plotting\ndatasets (e.g., points), the value that is used is specified by\nthe PointComponent ivar.  (Note: these methods also control how\nfield data is plotted. Field data is usually plotted by value or\nindex, if plotting length 1-dimensional length measures are\nused.)\n"},
  {(char*)"SetXValuesToNormalizedArcLength", PyvtkXYPlotActor_SetXValuesToNormalizedArcLength, METH_VARARGS,
   (char*)"V.SetXValuesToNormalizedArcLength()\nC++: void SetXValuesToNormalizedArcLength()\n\nSpecify how the independent (x) variable is computed from the\npoints. The independent variable can be the scalar/point index\n(i.e., point id), the accumulated arc length along the points,\nthe normalized arc length, or by component value. If plotting\ndatasets (e.g., points), the value that is used is specified by\nthe PointComponent ivar.  (Note: these methods also control how\nfield data is plotted. Field data is usually plotted by value or\nindex, if plotting length 1-dimensional length measures are\nused.)\n"},
  {(char*)"SetXValuesToValue", PyvtkXYPlotActor_SetXValuesToValue, METH_VARARGS,
   (char*)"V.SetXValuesToValue()\nC++: void SetXValuesToValue()\n\nSpecify how the independent (x) variable is computed from the\npoints. The independent variable can be the scalar/point index\n(i.e., point id), the accumulated arc length along the points,\nthe normalized arc length, or by component value. If plotting\ndatasets (e.g., points), the value that is used is specified by\nthe PointComponent ivar.  (Note: these methods also control how\nfield data is plotted. Field data is usually plotted by value or\nindex, if plotting length 1-dimensional length measures are\nused.)\n"},
  {(char*)"GetXValuesAsString", PyvtkXYPlotActor_GetXValuesAsString, METH_VARARGS,
   (char*)"V.GetXValuesAsString() -> string\nC++: const char *GetXValuesAsString()\n\nSpecify how the independent (x) variable is computed from the\npoints. The independent variable can be the scalar/point index\n(i.e., point id), the accumulated arc length along the points,\nthe normalized arc length, or by component value. If plotting\ndatasets (e.g., points), the value that is used is specified by\nthe PointComponent ivar.  (Note: these methods also control how\nfield data is plotted. Field data is usually plotted by value or\nindex, if plotting length 1-dimensional length measures are\nused.)\n"},
  {(char*)"AddDataObjectInput", PyvtkXYPlotActor_AddDataObjectInput, METH_VARARGS,
   (char*)"V.AddDataObjectInput(vtkDataObject)\nC++: void AddDataObjectInput(vtkDataObject *in)\n\nAdd a data object to the list of data to display.\n"},
  {(char*)"AddDataObjectInputConnection", PyvtkXYPlotActor_AddDataObjectInputConnection, METH_VARARGS,
   (char*)"V.AddDataObjectInputConnection(vtkAlgorithmOutput)\nC++: void AddDataObjectInputConnection(vtkAlgorithmOutput *alg)\n\nAdd a data object to the list of data to display.\n"},
  {(char*)"RemoveDataObjectInputConnection", PyvtkXYPlotActor_RemoveDataObjectInputConnection, METH_VARARGS,
   (char*)"V.RemoveDataObjectInputConnection(vtkAlgorithmOutput)\nC++: void RemoveDataObjectInputConnection(\n    vtkAlgorithmOutput *aout)\n\nRemove a dataset from the list of data to display.\n"},
  {(char*)"RemoveDataObjectInput", PyvtkXYPlotActor_RemoveDataObjectInput, METH_VARARGS,
   (char*)"V.RemoveDataObjectInput(vtkDataObject)\nC++: void RemoveDataObjectInput(vtkDataObject *in)\n\nRemove a dataset from the list of data to display.\n"},
  {(char*)"SetDataObjectPlotMode", PyvtkXYPlotActor_SetDataObjectPlotMode, METH_VARARGS,
   (char*)"V.SetDataObjectPlotMode(int)\nC++: void SetDataObjectPlotMode(int)\n\nIndicate whether to plot rows or columns. If plotting rows, then\nthe dependent variables is taken from a specified row, versus\nrows (y).\n"},
  {(char*)"GetDataObjectPlotModeMinValue", PyvtkXYPlotActor_GetDataObjectPlotModeMinValue, METH_VARARGS,
   (char*)"V.GetDataObjectPlotModeMinValue() -> int\nC++: int GetDataObjectPlotModeMinValue()\n\nIndicate whether to plot rows or columns. If plotting rows, then\nthe dependent variables is taken from a specified row, versus\nrows (y).\n"},
  {(char*)"GetDataObjectPlotModeMaxValue", PyvtkXYPlotActor_GetDataObjectPlotModeMaxValue, METH_VARARGS,
   (char*)"V.GetDataObjectPlotModeMaxValue() -> int\nC++: int GetDataObjectPlotModeMaxValue()\n\nIndicate whether to plot rows or columns. If plotting rows, then\nthe dependent variables is taken from a specified row, versus\nrows (y).\n"},
  {(char*)"GetDataObjectPlotMode", PyvtkXYPlotActor_GetDataObjectPlotMode, METH_VARARGS,
   (char*)"V.GetDataObjectPlotMode() -> int\nC++: int GetDataObjectPlotMode()\n\nIndicate whether to plot rows or columns. If plotting rows, then\nthe dependent variables is taken from a specified row, versus\nrows (y).\n"},
  {(char*)"SetDataObjectPlotModeToRows", PyvtkXYPlotActor_SetDataObjectPlotModeToRows, METH_VARARGS,
   (char*)"V.SetDataObjectPlotModeToRows()\nC++: void SetDataObjectPlotModeToRows()\n\nIndicate whether to plot rows or columns. If plotting rows, then\nthe dependent variables is taken from a specified row, versus\nrows (y).\n"},
  {(char*)"SetDataObjectPlotModeToColumns", PyvtkXYPlotActor_SetDataObjectPlotModeToColumns, METH_VARARGS,
   (char*)"V.SetDataObjectPlotModeToColumns()\nC++: void SetDataObjectPlotModeToColumns()\n\nIndicate whether to plot rows or columns. If plotting rows, then\nthe dependent variables is taken from a specified row, versus\nrows (y).\n"},
  {(char*)"GetDataObjectPlotModeAsString", PyvtkXYPlotActor_GetDataObjectPlotModeAsString, METH_VARARGS,
   (char*)"V.GetDataObjectPlotModeAsString() -> string\nC++: const char *GetDataObjectPlotModeAsString()\n\nIndicate whether to plot rows or columns. If plotting rows, then\nthe dependent variables is taken from a specified row, versus\nrows (y).\n"},
  {(char*)"SetDataObjectXComponent", PyvtkXYPlotActor_SetDataObjectXComponent, METH_VARARGS,
   (char*)"V.SetDataObjectXComponent(int, int)\nC++: void SetDataObjectXComponent(int i, int comp)\n\nSpecify which component of the input data object to use as the\nindependent variable for the ith input data object. (This ivar is\nignored if plotting the index.) Note that the value is\ninterpreted differently depending on DataObjectPlotMode. If the\nmode is Rows, then the value of DataObjectXComponent is the row\nnumber; otherwise it's the column number.\n"},
  {(char*)"GetDataObjectXComponent", PyvtkXYPlotActor_GetDataObjectXComponent, METH_VARARGS,
   (char*)"V.GetDataObjectXComponent(int) -> int\nC++: int GetDataObjectXComponent(int i)\n\nSpecify which component of the input data object to use as the\nindependent variable for the ith input data object. (This ivar is\nignored if plotting the index.) Note that the value is\ninterpreted differently depending on DataObjectPlotMode. If the\nmode is Rows, then the value of DataObjectXComponent is the row\nnumber; otherwise it's the column number.\n"},
  {(char*)"SetDataObjectYComponent", PyvtkXYPlotActor_SetDataObjectYComponent, METH_VARARGS,
   (char*)"V.SetDataObjectYComponent(int, int)\nC++: void SetDataObjectYComponent(int i, int comp)\n\nSpecify which component of the input data object to use as the\ndependent variable for the ith input data object. (This ivar is\nignored if plotting the index.) Note that the value is\ninterpreted differently depending on DataObjectPlotMode. If the\nmode is Rows, then the value of DataObjectYComponent is the row\nnumber; otherwise it's the column number.\n"},
  {(char*)"GetDataObjectYComponent", PyvtkXYPlotActor_GetDataObjectYComponent, METH_VARARGS,
   (char*)"V.GetDataObjectYComponent(int) -> int\nC++: int GetDataObjectYComponent(int i)\n\nSpecify which component of the input data object to use as the\ndependent variable for the ith input data object. (This ivar is\nignored if plotting the index.) Note that the value is\ninterpreted differently depending on DataObjectPlotMode. If the\nmode is Rows, then the value of DataObjectYComponent is the row\nnumber; otherwise it's the column number.\n"},
  {(char*)"SetPlotColor", PyvtkXYPlotActor_SetPlotColor, METH_VARARGS,
   (char*)"V.SetPlotColor(int, float, float, float)\nC++: void SetPlotColor(int i, double r, double g, double b)\nV.SetPlotColor(int, (float, float, float))\nC++: void SetPlotColor(int i, const double color[3])\n\n"},
  {(char*)"GetPlotColor", PyvtkXYPlotActor_GetPlotColor, METH_VARARGS,
   (char*)"V.GetPlotColor(int) -> (float, float, float)\nC++: double *GetPlotColor(int i)\n\n"},
  {(char*)"SetPlotSymbol", PyvtkXYPlotActor_SetPlotSymbol, METH_VARARGS,
   (char*)"V.SetPlotSymbol(int, vtkPolyData)\nC++: void SetPlotSymbol(int i, vtkPolyData *input)\n\n"},
  {(char*)"GetPlotSymbol", PyvtkXYPlotActor_GetPlotSymbol, METH_VARARGS,
   (char*)"V.GetPlotSymbol(int) -> vtkPolyData\nC++: vtkPolyData *GetPlotSymbol(int i)\n\n"},
  {(char*)"SetPlotLabel", PyvtkXYPlotActor_SetPlotLabel, METH_VARARGS,
   (char*)"V.SetPlotLabel(int, string)\nC++: void SetPlotLabel(int i, const char *label)\n\n"},
  {(char*)"GetPlotLabel", PyvtkXYPlotActor_GetPlotLabel, METH_VARARGS,
   (char*)"V.GetPlotLabel(int) -> string\nC++: const char *GetPlotLabel(int i)\n\n"},
  {(char*)"GetPlotCurvePoints", PyvtkXYPlotActor_GetPlotCurvePoints, METH_VARARGS,
   (char*)"V.GetPlotCurvePoints() -> int\nC++: int GetPlotCurvePoints()\n\n"},
  {(char*)"SetPlotCurvePoints", PyvtkXYPlotActor_SetPlotCurvePoints, METH_VARARGS,
   (char*)"V.SetPlotCurvePoints(int)\nC++: void SetPlotCurvePoints(int a)\n\n"},
  {(char*)"PlotCurvePointsOn", PyvtkXYPlotActor_PlotCurvePointsOn, METH_VARARGS,
   (char*)"V.PlotCurvePointsOn()\nC++: void PlotCurvePointsOn()\n\n"},
  {(char*)"PlotCurvePointsOff", PyvtkXYPlotActor_PlotCurvePointsOff, METH_VARARGS,
   (char*)"V.PlotCurvePointsOff()\nC++: void PlotCurvePointsOff()\n\n"},
  {(char*)"GetPlotCurveLines", PyvtkXYPlotActor_GetPlotCurveLines, METH_VARARGS,
   (char*)"V.GetPlotCurveLines() -> int\nC++: int GetPlotCurveLines()\n\n"},
  {(char*)"SetPlotCurveLines", PyvtkXYPlotActor_SetPlotCurveLines, METH_VARARGS,
   (char*)"V.SetPlotCurveLines(int)\nC++: void SetPlotCurveLines(int a)\n\n"},
  {(char*)"PlotCurveLinesOn", PyvtkXYPlotActor_PlotCurveLinesOn, METH_VARARGS,
   (char*)"V.PlotCurveLinesOn()\nC++: void PlotCurveLinesOn()\n\n"},
  {(char*)"PlotCurveLinesOff", PyvtkXYPlotActor_PlotCurveLinesOff, METH_VARARGS,
   (char*)"V.PlotCurveLinesOff()\nC++: void PlotCurveLinesOff()\n\n"},
  {(char*)"SetPlotLines", PyvtkXYPlotActor_SetPlotLines, METH_VARARGS,
   (char*)"V.SetPlotLines(int, int)\nC++: void SetPlotLines(int i, int)\nV.SetPlotLines(int)\nC++: void SetPlotLines(int a)\n\n"},
  {(char*)"GetPlotLines", PyvtkXYPlotActor_GetPlotLines, METH_VARARGS,
   (char*)"V.GetPlotLines(int) -> int\nC++: int GetPlotLines(int i)\nV.GetPlotLines() -> int\nC++: int GetPlotLines()\n\n"},
  {(char*)"SetPlotPoints", PyvtkXYPlotActor_SetPlotPoints, METH_VARARGS,
   (char*)"V.SetPlotPoints(int, int)\nC++: void SetPlotPoints(int i, int)\nV.SetPlotPoints(int)\nC++: void SetPlotPoints(int a)\n\n"},
  {(char*)"GetPlotPoints", PyvtkXYPlotActor_GetPlotPoints, METH_VARARGS,
   (char*)"V.GetPlotPoints(int) -> int\nC++: int GetPlotPoints(int i)\nV.GetPlotPoints() -> int\nC++: int GetPlotPoints()\n\n"},
  {(char*)"SetExchangeAxes", PyvtkXYPlotActor_SetExchangeAxes, METH_VARARGS,
   (char*)"V.SetExchangeAxes(int)\nC++: void SetExchangeAxes(int a)\n\nEnable/Disable exchange of the x-y axes (i.e., what was x becomes\ny, and vice-versa). Exchanging axes affects the labeling as well.\n"},
  {(char*)"GetExchangeAxes", PyvtkXYPlotActor_GetExchangeAxes, METH_VARARGS,
   (char*)"V.GetExchangeAxes() -> int\nC++: int GetExchangeAxes()\n\nEnable/Disable exchange of the x-y axes (i.e., what was x becomes\ny, and vice-versa). Exchanging axes affects the labeling as well.\n"},
  {(char*)"ExchangeAxesOn", PyvtkXYPlotActor_ExchangeAxesOn, METH_VARARGS,
   (char*)"V.ExchangeAxesOn()\nC++: void ExchangeAxesOn()\n\nEnable/Disable exchange of the x-y axes (i.e., what was x becomes\ny, and vice-versa). Exchanging axes affects the labeling as well.\n"},
  {(char*)"ExchangeAxesOff", PyvtkXYPlotActor_ExchangeAxesOff, METH_VARARGS,
   (char*)"V.ExchangeAxesOff()\nC++: void ExchangeAxesOff()\n\nEnable/Disable exchange of the x-y axes (i.e., what was x becomes\ny, and vice-versa). Exchanging axes affects the labeling as well.\n"},
  {(char*)"SetReverseXAxis", PyvtkXYPlotActor_SetReverseXAxis, METH_VARARGS,
   (char*)"V.SetReverseXAxis(int)\nC++: void SetReverseXAxis(int a)\n\nNormally the x-axis is plotted from minimum to maximum. Setting\nthis instance variable causes the x-axis to be plotted from\nmaximum to minimum. Note that boolean always applies to the\nx-axis even if ExchangeAxes is set.\n"},
  {(char*)"GetReverseXAxis", PyvtkXYPlotActor_GetReverseXAxis, METH_VARARGS,
   (char*)"V.GetReverseXAxis() -> int\nC++: int GetReverseXAxis()\n\nNormally the x-axis is plotted from minimum to maximum. Setting\nthis instance variable causes the x-axis to be plotted from\nmaximum to minimum. Note that boolean always applies to the\nx-axis even if ExchangeAxes is set.\n"},
  {(char*)"ReverseXAxisOn", PyvtkXYPlotActor_ReverseXAxisOn, METH_VARARGS,
   (char*)"V.ReverseXAxisOn()\nC++: void ReverseXAxisOn()\n\nNormally the x-axis is plotted from minimum to maximum. Setting\nthis instance variable causes the x-axis to be plotted from\nmaximum to minimum. Note that boolean always applies to the\nx-axis even if ExchangeAxes is set.\n"},
  {(char*)"ReverseXAxisOff", PyvtkXYPlotActor_ReverseXAxisOff, METH_VARARGS,
   (char*)"V.ReverseXAxisOff()\nC++: void ReverseXAxisOff()\n\nNormally the x-axis is plotted from minimum to maximum. Setting\nthis instance variable causes the x-axis to be plotted from\nmaximum to minimum. Note that boolean always applies to the\nx-axis even if ExchangeAxes is set.\n"},
  {(char*)"SetReverseYAxis", PyvtkXYPlotActor_SetReverseYAxis, METH_VARARGS,
   (char*)"V.SetReverseYAxis(int)\nC++: void SetReverseYAxis(int a)\n\nNormally the y-axis is plotted from minimum to maximum. Setting\nthis instance variable causes the y-axis to be plotted from\nmaximum to minimum. Note that boolean always applies to the\ny-axis even if ExchangeAxes is set.\n"},
  {(char*)"GetReverseYAxis", PyvtkXYPlotActor_GetReverseYAxis, METH_VARARGS,
   (char*)"V.GetReverseYAxis() -> int\nC++: int GetReverseYAxis()\n\nNormally the y-axis is plotted from minimum to maximum. Setting\nthis instance variable causes the y-axis to be plotted from\nmaximum to minimum. Note that boolean always applies to the\ny-axis even if ExchangeAxes is set.\n"},
  {(char*)"ReverseYAxisOn", PyvtkXYPlotActor_ReverseYAxisOn, METH_VARARGS,
   (char*)"V.ReverseYAxisOn()\nC++: void ReverseYAxisOn()\n\nNormally the y-axis is plotted from minimum to maximum. Setting\nthis instance variable causes the y-axis to be plotted from\nmaximum to minimum. Note that boolean always applies to the\ny-axis even if ExchangeAxes is set.\n"},
  {(char*)"ReverseYAxisOff", PyvtkXYPlotActor_ReverseYAxisOff, METH_VARARGS,
   (char*)"V.ReverseYAxisOff()\nC++: void ReverseYAxisOff()\n\nNormally the y-axis is plotted from minimum to maximum. Setting\nthis instance variable causes the y-axis to be plotted from\nmaximum to minimum. Note that boolean always applies to the\ny-axis even if ExchangeAxes is set.\n"},
  {(char*)"GetLegendActor", PyvtkXYPlotActor_GetLegendActor, METH_VARARGS,
   (char*)"V.GetLegendActor() -> vtkLegendBoxActor\nC++: vtkLegendBoxActor *GetLegendActor()\n\nRetrieve handles to the legend box and glyph source. This is\nuseful if you would like to change the default behavior of the\nlegend box or glyph source. For example, the default glyph can be\nchanged from a line to a vertex plus line, etc.)\n"},
  {(char*)"GetGlyphSource", PyvtkXYPlotActor_GetGlyphSource, METH_VARARGS,
   (char*)"V.GetGlyphSource() -> vtkGlyphSource2D\nC++: vtkGlyphSource2D *GetGlyphSource()\n\nRetrieve handles to the legend box and glyph source. This is\nuseful if you would like to change the default behavior of the\nlegend box or glyph source. For example, the default glyph can be\nchanged from a line to a vertex plus line, etc.)\n"},
  {(char*)"SetTitle", PyvtkXYPlotActor_SetTitle, METH_VARARGS,
   (char*)"V.SetTitle(string)\nC++: void SetTitle(char *)\n\nSet/Get the title of the x-y plot.\n"},
  {(char*)"GetTitle", PyvtkXYPlotActor_GetTitle, METH_VARARGS,
   (char*)"V.GetTitle() -> string\nC++: char *GetTitle()\n\nSet/Get the title of the x-y plot.\n"},
  {(char*)"SetXTitle", PyvtkXYPlotActor_SetXTitle, METH_VARARGS,
   (char*)"V.SetXTitle(string)\nC++: void SetXTitle(char *)\n\nSet/Get the title of the x axis\n"},
  {(char*)"GetXTitle", PyvtkXYPlotActor_GetXTitle, METH_VARARGS,
   (char*)"V.GetXTitle() -> string\nC++: char *GetXTitle()\n\nSet/Get the title of the x axis\n"},
  {(char*)"SetYTitle", PyvtkXYPlotActor_SetYTitle, METH_VARARGS,
   (char*)"V.SetYTitle(string)\nC++: virtual void SetYTitle(const char *)\n\nSet/Get the title of the y axis\n"},
  {(char*)"GetYTitle", PyvtkXYPlotActor_GetYTitle, METH_VARARGS,
   (char*)"V.GetYTitle() -> string\nC++: char *GetYTitle()\n\nSet/Get the title of the y axis\n"},
  {(char*)"GetXAxisActor2D", PyvtkXYPlotActor_GetXAxisActor2D, METH_VARARGS,
   (char*)"V.GetXAxisActor2D() -> vtkAxisActor2D\nC++: vtkAxisActor2D *GetXAxisActor2D()\n\nRetrieve handles to the X and Y axis (so that you can set their\ntext properties for example)\n"},
  {(char*)"GetYAxisActor2D", PyvtkXYPlotActor_GetYAxisActor2D, METH_VARARGS,
   (char*)"V.GetYAxisActor2D() -> vtkAxisActor2D\nC++: vtkAxisActor2D *GetYAxisActor2D()\n\nRetrieve handles to the X and Y axis (so that you can set their\ntext properties for example)\n"},
  {(char*)"SetXRange", PyvtkXYPlotActor_SetXRange, METH_VARARGS,
   (char*)"V.SetXRange(float, float)\nC++: void SetXRange(double, double)\nV.SetXRange((float, float))\nC++: void SetXRange(double a[2])\n\n"},
  {(char*)"GetXRange", PyvtkXYPlotActor_GetXRange, METH_VARARGS,
   (char*)"V.GetXRange() -> (float, float)\nC++: double *GetXRange()\n\nSet the plot range (range of independent and dependent variables)\nto plot. Data outside of the range will be clipped. If the plot\nrange of either the x or y variables is set to (v1,v2), where v1\n== v2, then the range will be computed automatically. Note that\nthe x-range values should be consistent with the way the\nindependent variable is created (via INDEX, DISTANCE, or\nARC_LENGTH).\n"},
  {(char*)"SetYRange", PyvtkXYPlotActor_SetYRange, METH_VARARGS,
   (char*)"V.SetYRange(float, float)\nC++: void SetYRange(double, double)\nV.SetYRange((float, float))\nC++: void SetYRange(double a[2])\n\n"},
  {(char*)"GetYRange", PyvtkXYPlotActor_GetYRange, METH_VARARGS,
   (char*)"V.GetYRange() -> (float, float)\nC++: double *GetYRange()\n\nSet the plot range (range of independent and dependent variables)\nto plot. Data outside of the range will be clipped. If the plot\nrange of either the x or y variables is set to (v1,v2), where v1\n== v2, then the range will be computed automatically. Note that\nthe x-range values should be consistent with the way the\nindependent variable is created (via INDEX, DISTANCE, or\nARC_LENGTH).\n"},
  {(char*)"SetPlotRange", PyvtkXYPlotActor_SetPlotRange, METH_VARARGS,
   (char*)"V.SetPlotRange(float, float, float, float)\nC++: void SetPlotRange(double xmin, double ymin, double xmax,\n    double ymax)\n\nSet the plot range (range of independent and dependent variables)\nto plot. Data outside of the range will be clipped. If the plot\nrange of either the x or y variables is set to (v1,v2), where v1\n== v2, then the range will be computed automatically. Note that\nthe x-range values should be consistent with the way the\nindependent variable is created (via INDEX, DISTANCE, or\nARC_LENGTH).\n"},
  {(char*)"SetNumberOfXLabels", PyvtkXYPlotActor_SetNumberOfXLabels, METH_VARARGS,
   (char*)"V.SetNumberOfXLabels(int)\nC++: void SetNumberOfXLabels(int)\n\nSet/Get the number of annotation labels to show along the x and y\naxes. This values is a suggestion: the number of labels may vary\ndepending on the particulars of the data. The convenience method\nSetNumberOfLabels() sets the number of x and y labels to the same\nvalue.\n"},
  {(char*)"GetNumberOfXLabelsMinValue", PyvtkXYPlotActor_GetNumberOfXLabelsMinValue, METH_VARARGS,
   (char*)"V.GetNumberOfXLabelsMinValue() -> int\nC++: int GetNumberOfXLabelsMinValue()\n\nSet/Get the number of annotation labels to show along the x and y\naxes. This values is a suggestion: the number of labels may vary\ndepending on the particulars of the data. The convenience method\nSetNumberOfLabels() sets the number of x and y labels to the same\nvalue.\n"},
  {(char*)"GetNumberOfXLabelsMaxValue", PyvtkXYPlotActor_GetNumberOfXLabelsMaxValue, METH_VARARGS,
   (char*)"V.GetNumberOfXLabelsMaxValue() -> int\nC++: int GetNumberOfXLabelsMaxValue()\n\nSet/Get the number of annotation labels to show along the x and y\naxes. This values is a suggestion: the number of labels may vary\ndepending on the particulars of the data. The convenience method\nSetNumberOfLabels() sets the number of x and y labels to the same\nvalue.\n"},
  {(char*)"GetNumberOfXLabels", PyvtkXYPlotActor_GetNumberOfXLabels, METH_VARARGS,
   (char*)"V.GetNumberOfXLabels() -> int\nC++: int GetNumberOfXLabels()\n\nSet/Get the number of annotation labels to show along the x and y\naxes. This values is a suggestion: the number of labels may vary\ndepending on the particulars of the data. The convenience method\nSetNumberOfLabels() sets the number of x and y labels to the same\nvalue.\n"},
  {(char*)"SetNumberOfYLabels", PyvtkXYPlotActor_SetNumberOfYLabels, METH_VARARGS,
   (char*)"V.SetNumberOfYLabels(int)\nC++: void SetNumberOfYLabels(int)\n\nSet/Get the number of annotation labels to show along the x and y\naxes. This values is a suggestion: the number of labels may vary\ndepending on the particulars of the data. The convenience method\nSetNumberOfLabels() sets the number of x and y labels to the same\nvalue.\n"},
  {(char*)"GetNumberOfYLabelsMinValue", PyvtkXYPlotActor_GetNumberOfYLabelsMinValue, METH_VARARGS,
   (char*)"V.GetNumberOfYLabelsMinValue() -> int\nC++: int GetNumberOfYLabelsMinValue()\n\nSet/Get the number of annotation labels to show along the x and y\naxes. This values is a suggestion: the number of labels may vary\ndepending on the particulars of the data. The convenience method\nSetNumberOfLabels() sets the number of x and y labels to the same\nvalue.\n"},
  {(char*)"GetNumberOfYLabelsMaxValue", PyvtkXYPlotActor_GetNumberOfYLabelsMaxValue, METH_VARARGS,
   (char*)"V.GetNumberOfYLabelsMaxValue() -> int\nC++: int GetNumberOfYLabelsMaxValue()\n\nSet/Get the number of annotation labels to show along the x and y\naxes. This values is a suggestion: the number of labels may vary\ndepending on the particulars of the data. The convenience method\nSetNumberOfLabels() sets the number of x and y labels to the same\nvalue.\n"},
  {(char*)"GetNumberOfYLabels", PyvtkXYPlotActor_GetNumberOfYLabels, METH_VARARGS,
   (char*)"V.GetNumberOfYLabels() -> int\nC++: int GetNumberOfYLabels()\n\nSet/Get the number of annotation labels to show along the x and y\naxes. This values is a suggestion: the number of labels may vary\ndepending on the particulars of the data. The convenience method\nSetNumberOfLabels() sets the number of x and y labels to the same\nvalue.\n"},
  {(char*)"SetNumberOfLabels", PyvtkXYPlotActor_SetNumberOfLabels, METH_VARARGS,
   (char*)"V.SetNumberOfLabels(int)\nC++: void SetNumberOfLabels(int num)\n\nSet/Get the number of annotation labels to show along the x and y\naxes. This values is a suggestion: the number of labels may vary\ndepending on the particulars of the data. The convenience method\nSetNumberOfLabels() sets the number of x and y labels to the same\nvalue.\n"},
  {(char*)"SetAdjustXLabels", PyvtkXYPlotActor_SetAdjustXLabels, METH_VARARGS,
   (char*)"V.SetAdjustXLabels(int)\nC++: void SetAdjustXLabels(int adjust)\n\nSet/Get the flag that controls whether the labels and ticks are\nadjusted for \"nice\" numerical values to make it easier to read\nthe labels. The adjustment is based in the Range instance\nvariable. Call GetAdjustedRange and GetAdjustedNumberOfLabels to\nget the adjusted range and number of labels.\n"},
  {(char*)"GetAdjustXLabels", PyvtkXYPlotActor_GetAdjustXLabels, METH_VARARGS,
   (char*)"V.GetAdjustXLabels() -> int\nC++: int GetAdjustXLabels()\n\nSet/Get the flag that controls whether the labels and ticks are\nadjusted for \"nice\" numerical values to make it easier to read\nthe labels. The adjustment is based in the Range instance\nvariable. Call GetAdjustedRange and GetAdjustedNumberOfLabels to\nget the adjusted range and number of labels.\n"},
  {(char*)"SetAdjustYLabels", PyvtkXYPlotActor_SetAdjustYLabels, METH_VARARGS,
   (char*)"V.SetAdjustYLabels(int)\nC++: void SetAdjustYLabels(int adjust)\n\nSet/Get the flag that controls whether the labels and ticks are\nadjusted for \"nice\" numerical values to make it easier to read\nthe labels. The adjustment is based in the Range instance\nvariable. Call GetAdjustedRange and GetAdjustedNumberOfLabels to\nget the adjusted range and number of labels.\n"},
  {(char*)"GetAdjustYLabels", PyvtkXYPlotActor_GetAdjustYLabels, METH_VARARGS,
   (char*)"V.GetAdjustYLabels() -> int\nC++: int GetAdjustYLabels()\n\nSet/Get the flag that controls whether the labels and ticks are\nadjusted for \"nice\" numerical values to make it easier to read\nthe labels. The adjustment is based in the Range instance\nvariable. Call GetAdjustedRange and GetAdjustedNumberOfLabels to\nget the adjusted range and number of labels.\n"},
  {(char*)"SetNumberOfXMinorTicks", PyvtkXYPlotActor_SetNumberOfXMinorTicks, METH_VARARGS,
   (char*)"V.SetNumberOfXMinorTicks(int)\nC++: void SetNumberOfXMinorTicks(int num)\n\nSet/Get the number of minor ticks in X or Y.\n"},
  {(char*)"GetNumberOfXMinorTicks", PyvtkXYPlotActor_GetNumberOfXMinorTicks, METH_VARARGS,
   (char*)"V.GetNumberOfXMinorTicks() -> int\nC++: int GetNumberOfXMinorTicks()\n\nSet/Get the number of minor ticks in X or Y.\n"},
  {(char*)"SetNumberOfYMinorTicks", PyvtkXYPlotActor_SetNumberOfYMinorTicks, METH_VARARGS,
   (char*)"V.SetNumberOfYMinorTicks(int)\nC++: void SetNumberOfYMinorTicks(int num)\n\nSet/Get the number of minor ticks in X or Y.\n"},
  {(char*)"GetNumberOfYMinorTicks", PyvtkXYPlotActor_GetNumberOfYMinorTicks, METH_VARARGS,
   (char*)"V.GetNumberOfYMinorTicks() -> int\nC++: int GetNumberOfYMinorTicks()\n\nSet/Get the number of minor ticks in X or Y.\n"},
  {(char*)"SetLegend", PyvtkXYPlotActor_SetLegend, METH_VARARGS,
   (char*)"V.SetLegend(int)\nC++: void SetLegend(int a)\n\nEnable/Disable the creation of a legend. If on, the legend labels\nwill be created automatically unless the per plot legend symbol\nhas been set.\n"},
  {(char*)"GetLegend", PyvtkXYPlotActor_GetLegend, METH_VARARGS,
   (char*)"V.GetLegend() -> int\nC++: int GetLegend()\n\nEnable/Disable the creation of a legend. If on, the legend labels\nwill be created automatically unless the per plot legend symbol\nhas been set.\n"},
  {(char*)"LegendOn", PyvtkXYPlotActor_LegendOn, METH_VARARGS,
   (char*)"V.LegendOn()\nC++: void LegendOn()\n\nEnable/Disable the creation of a legend. If on, the legend labels\nwill be created automatically unless the per plot legend symbol\nhas been set.\n"},
  {(char*)"LegendOff", PyvtkXYPlotActor_LegendOff, METH_VARARGS,
   (char*)"V.LegendOff()\nC++: void LegendOff()\n\nEnable/Disable the creation of a legend. If on, the legend labels\nwill be created automatically unless the per plot legend symbol\nhas been set.\n"},
  {(char*)"SetTitlePosition", PyvtkXYPlotActor_SetTitlePosition, METH_VARARGS,
   (char*)"V.SetTitlePosition(float, float)\nC++: void SetTitlePosition(double, double)\nV.SetTitlePosition((float, float))\nC++: void SetTitlePosition(double a[2])\n\n"},
  {(char*)"GetTitlePosition", PyvtkXYPlotActor_GetTitlePosition, METH_VARARGS,
   (char*)"V.GetTitlePosition() -> (float, float)\nC++: double *GetTitlePosition()\n\n"},
  {(char*)"SetAdjustTitlePosition", PyvtkXYPlotActor_SetAdjustTitlePosition, METH_VARARGS,
   (char*)"V.SetAdjustTitlePosition(int)\nC++: void SetAdjustTitlePosition(int a)\n\nIf true, the xyplot actor will adjust the position of the title\nautomatically to be upper-middle. Default is true.\n"},
  {(char*)"GetAdjustTitlePosition", PyvtkXYPlotActor_GetAdjustTitlePosition, METH_VARARGS,
   (char*)"V.GetAdjustTitlePosition() -> int\nC++: int GetAdjustTitlePosition()\n\nIf true, the xyplot actor will adjust the position of the title\nautomatically to be upper-middle. Default is true.\n"},
  {(char*)"AdjustTitlePositionOn", PyvtkXYPlotActor_AdjustTitlePositionOn, METH_VARARGS,
   (char*)"V.AdjustTitlePositionOn()\nC++: void AdjustTitlePositionOn()\n\nIf true, the xyplot actor will adjust the position of the title\nautomatically to be upper-middle. Default is true.\n"},
  {(char*)"AdjustTitlePositionOff", PyvtkXYPlotActor_AdjustTitlePositionOff, METH_VARARGS,
   (char*)"V.AdjustTitlePositionOff()\nC++: void AdjustTitlePositionOff()\n\nIf true, the xyplot actor will adjust the position of the title\nautomatically to be upper-middle. Default is true.\n"},
  {(char*)"SetAdjustTitlePositionMode", PyvtkXYPlotActor_SetAdjustTitlePositionMode, METH_VARARGS,
   (char*)"V.SetAdjustTitlePositionMode(int)\nC++: void SetAdjustTitlePositionMode(int a)\n\nIf AdjustTitlePosition is true, the xyplot actor will adjust the\nposition of the title automatically depending on the given mode,\nthe mode is a combination of the Alignment flags. by default:\nvtkXYPlotActor::AlignHCenter | vtkXYPlotActor::Top |\nvtkXYPlotActor::AlignAxisVCenter\n"},
  {(char*)"GetAdjustTitlePositionMode", PyvtkXYPlotActor_GetAdjustTitlePositionMode, METH_VARARGS,
   (char*)"V.GetAdjustTitlePositionMode() -> int\nC++: int GetAdjustTitlePositionMode()\n\nIf AdjustTitlePosition is true, the xyplot actor will adjust the\nposition of the title automatically depending on the given mode,\nthe mode is a combination of the Alignment flags. by default:\nvtkXYPlotActor::AlignHCenter | vtkXYPlotActor::Top |\nvtkXYPlotActor::AlignAxisVCenter\n"},
  {(char*)"SetLegendPosition", PyvtkXYPlotActor_SetLegendPosition, METH_VARARGS,
   (char*)"V.SetLegendPosition(float, float)\nC++: void SetLegendPosition(double, double)\nV.SetLegendPosition((float, float))\nC++: void SetLegendPosition(double a[2])\n\n"},
  {(char*)"GetLegendPosition", PyvtkXYPlotActor_GetLegendPosition, METH_VARARGS,
   (char*)"V.GetLegendPosition() -> (float, float)\nC++: double *GetLegendPosition()\n\n"},
  {(char*)"SetLegendPosition2", PyvtkXYPlotActor_SetLegendPosition2, METH_VARARGS,
   (char*)"V.SetLegendPosition2(float, float)\nC++: void SetLegendPosition2(double, double)\nV.SetLegendPosition2((float, float))\nC++: void SetLegendPosition2(double a[2])\n\n"},
  {(char*)"GetLegendPosition2", PyvtkXYPlotActor_GetLegendPosition2, METH_VARARGS,
   (char*)"V.GetLegendPosition2() -> (float, float)\nC++: double *GetLegendPosition2()\n\n"},
  {(char*)"SetTitleTextProperty", PyvtkXYPlotActor_SetTitleTextProperty, METH_VARARGS,
   (char*)"V.SetTitleTextProperty(vtkTextProperty)\nC++: virtual void SetTitleTextProperty(vtkTextProperty *p)\n\nSet/Get the title text property.\n"},
  {(char*)"GetTitleTextProperty", PyvtkXYPlotActor_GetTitleTextProperty, METH_VARARGS,
   (char*)"V.GetTitleTextProperty() -> vtkTextProperty\nC++: vtkTextProperty *GetTitleTextProperty()\n\nSet/Get the title text property.\n"},
  {(char*)"SetAxisTitleTextProperty", PyvtkXYPlotActor_SetAxisTitleTextProperty, METH_VARARGS,
   (char*)"V.SetAxisTitleTextProperty(vtkTextProperty)\nC++: virtual void SetAxisTitleTextProperty(vtkTextProperty *p)\n\nSet/Get the title text property of all axes. Note that each axis\ncan be controlled individually through the GetX/YAxisActor2D()\nmethods.\n"},
  {(char*)"GetAxisTitleTextProperty", PyvtkXYPlotActor_GetAxisTitleTextProperty, METH_VARARGS,
   (char*)"V.GetAxisTitleTextProperty() -> vtkTextProperty\nC++: vtkTextProperty *GetAxisTitleTextProperty()\n\nSet/Get the title text property of all axes. Note that each axis\ncan be controlled individually through the GetX/YAxisActor2D()\nmethods.\n"},
  {(char*)"SetAxisLabelTextProperty", PyvtkXYPlotActor_SetAxisLabelTextProperty, METH_VARARGS,
   (char*)"V.SetAxisLabelTextProperty(vtkTextProperty)\nC++: virtual void SetAxisLabelTextProperty(vtkTextProperty *p)\n\nSet/Get the labels text property of all axes. Note that each axis\ncan be controlled individually through the GetX/YAxisActor2D()\nmethods.\n"},
  {(char*)"GetAxisLabelTextProperty", PyvtkXYPlotActor_GetAxisLabelTextProperty, METH_VARARGS,
   (char*)"V.GetAxisLabelTextProperty() -> vtkTextProperty\nC++: vtkTextProperty *GetAxisLabelTextProperty()\n\nSet/Get the labels text property of all axes. Note that each axis\ncan be controlled individually through the GetX/YAxisActor2D()\nmethods.\n"},
  {(char*)"SetLogx", PyvtkXYPlotActor_SetLogx, METH_VARARGS,
   (char*)"V.SetLogx(int)\nC++: void SetLogx(int a)\n\nEnable/Disable plotting of Log of x-values.\n"},
  {(char*)"GetLogx", PyvtkXYPlotActor_GetLogx, METH_VARARGS,
   (char*)"V.GetLogx() -> int\nC++: int GetLogx()\n\nEnable/Disable plotting of Log of x-values.\n"},
  {(char*)"LogxOn", PyvtkXYPlotActor_LogxOn, METH_VARARGS,
   (char*)"V.LogxOn()\nC++: void LogxOn()\n\nEnable/Disable plotting of Log of x-values.\n"},
  {(char*)"LogxOff", PyvtkXYPlotActor_LogxOff, METH_VARARGS,
   (char*)"V.LogxOff()\nC++: void LogxOff()\n\nEnable/Disable plotting of Log of x-values.\n"},
  {(char*)"SetLabelFormat", PyvtkXYPlotActor_SetLabelFormat, METH_VARARGS,
   (char*)"V.SetLabelFormat(string)\nC++: virtual void SetLabelFormat(const char *)\n\nSet/Get the format with which to print the labels . This sets\nboth X and Y label formats. GetLabelFormat() returns X label\nformat.\n"},
  {(char*)"GetLabelFormat", PyvtkXYPlotActor_GetLabelFormat, METH_VARARGS,
   (char*)"V.GetLabelFormat() -> string\nC++: const char *GetLabelFormat()\n\nSet/Get the format with which to print the labels . This sets\nboth X and Y label formats. GetLabelFormat() returns X label\nformat.\n"},
  {(char*)"SetXLabelFormat", PyvtkXYPlotActor_SetXLabelFormat, METH_VARARGS,
   (char*)"V.SetXLabelFormat(string)\nC++: virtual void SetXLabelFormat(const char *)\n\nSet/Get the format with which to print the X label.\n"},
  {(char*)"GetXLabelFormat", PyvtkXYPlotActor_GetXLabelFormat, METH_VARARGS,
   (char*)"V.GetXLabelFormat() -> string\nC++: char *GetXLabelFormat()\n\nSet/Get the format with which to print the X label.\n"},
  {(char*)"SetYLabelFormat", PyvtkXYPlotActor_SetYLabelFormat, METH_VARARGS,
   (char*)"V.SetYLabelFormat(string)\nC++: virtual void SetYLabelFormat(const char *)\n\nSet/Get the format with which to print the Y label.\n"},
  {(char*)"GetYLabelFormat", PyvtkXYPlotActor_GetYLabelFormat, METH_VARARGS,
   (char*)"V.GetYLabelFormat() -> string\nC++: char *GetYLabelFormat()\n\nSet/Get the format with which to print the Y label.\n"},
  {(char*)"SetBorder", PyvtkXYPlotActor_SetBorder, METH_VARARGS,
   (char*)"V.SetBorder(int)\nC++: void SetBorder(int)\n\nSet/Get the spacing between the plot window and the plot. The\nvalue is specified in pixels.\n"},
  {(char*)"GetBorderMinValue", PyvtkXYPlotActor_GetBorderMinValue, METH_VARARGS,
   (char*)"V.GetBorderMinValue() -> int\nC++: int GetBorderMinValue()\n\nSet/Get the spacing between the plot window and the plot. The\nvalue is specified in pixels.\n"},
  {(char*)"GetBorderMaxValue", PyvtkXYPlotActor_GetBorderMaxValue, METH_VARARGS,
   (char*)"V.GetBorderMaxValue() -> int\nC++: int GetBorderMaxValue()\n\nSet/Get the spacing between the plot window and the plot. The\nvalue is specified in pixels.\n"},
  {(char*)"GetBorder", PyvtkXYPlotActor_GetBorder, METH_VARARGS,
   (char*)"V.GetBorder() -> int\nC++: int GetBorder()\n\nSet/Get the spacing between the plot window and the plot. The\nvalue is specified in pixels.\n"},
  {(char*)"PlotPointsOn", PyvtkXYPlotActor_PlotPointsOn, METH_VARARGS,
   (char*)"V.PlotPointsOn()\nC++: void PlotPointsOn()\n\nSet/Get whether the points are rendered.  The point size can be\nset in the property object. This is a global flag which affects\nthe plot only if per curve symbols are not defined.\n"},
  {(char*)"PlotPointsOff", PyvtkXYPlotActor_PlotPointsOff, METH_VARARGS,
   (char*)"V.PlotPointsOff()\nC++: void PlotPointsOff()\n\nSet/Get whether the points are rendered.  The point size can be\nset in the property object. This is a global flag which affects\nthe plot only if per curve symbols are not defined.\n"},
  {(char*)"PlotLinesOn", PyvtkXYPlotActor_PlotLinesOn, METH_VARARGS,
   (char*)"V.PlotLinesOn()\nC++: void PlotLinesOn()\n\nSet/Get whether the lines are rendered.  The line width can be\nset in the property object.\n"},
  {(char*)"PlotLinesOff", PyvtkXYPlotActor_PlotLinesOff, METH_VARARGS,
   (char*)"V.PlotLinesOff()\nC++: void PlotLinesOff()\n\nSet/Get whether the lines are rendered.  The line width can be\nset in the property object.\n"},
  {(char*)"SetGlyphSize", PyvtkXYPlotActor_SetGlyphSize, METH_VARARGS,
   (char*)"V.SetGlyphSize(float)\nC++: void SetGlyphSize(double)\n\nSet/Get the factor that controls how big glyphs are in the plot.\nThe number is expressed as a fraction of the length of the\ndiagonal of the plot bounding box.\n"},
  {(char*)"GetGlyphSizeMinValue", PyvtkXYPlotActor_GetGlyphSizeMinValue, METH_VARARGS,
   (char*)"V.GetGlyphSizeMinValue() -> float\nC++: double GetGlyphSizeMinValue()\n\nSet/Get the factor that controls how big glyphs are in the plot.\nThe number is expressed as a fraction of the length of the\ndiagonal of the plot bounding box.\n"},
  {(char*)"GetGlyphSizeMaxValue", PyvtkXYPlotActor_GetGlyphSizeMaxValue, METH_VARARGS,
   (char*)"V.GetGlyphSizeMaxValue() -> float\nC++: double GetGlyphSizeMaxValue()\n\nSet/Get the factor that controls how big glyphs are in the plot.\nThe number is expressed as a fraction of the length of the\ndiagonal of the plot bounding box.\n"},
  {(char*)"GetGlyphSize", PyvtkXYPlotActor_GetGlyphSize, METH_VARARGS,
   (char*)"V.GetGlyphSize() -> float\nC++: double GetGlyphSize()\n\nSet/Get the factor that controls how big glyphs are in the plot.\nThe number is expressed as a fraction of the length of the\ndiagonal of the plot bounding box.\n"},
  {(char*)"ViewportToPlotCoordinate", PyvtkXYPlotActor_ViewportToPlotCoordinate, METH_VARARGS,
   (char*)"V.ViewportToPlotCoordinate(vtkViewport, float, float)\nC++: void ViewportToPlotCoordinate(vtkViewport *viewport,\n    double &u, double &v)\nV.ViewportToPlotCoordinate(vtkViewport)\nC++: void ViewportToPlotCoordinate(vtkViewport *viewport)\n\nGiven a position within the viewport used by the plot, return the\nthe plot coordinates (XAxis value, YAxis value)\n"},
  {(char*)"SetPlotCoordinate", PyvtkXYPlotActor_SetPlotCoordinate, METH_VARARGS,
   (char*)"V.SetPlotCoordinate(float, float)\nC++: void SetPlotCoordinate(double, double)\nV.SetPlotCoordinate((float, float))\nC++: void SetPlotCoordinate(double a[2])\n\n"},
  {(char*)"GetPlotCoordinate", PyvtkXYPlotActor_GetPlotCoordinate, METH_VARARGS,
   (char*)"V.GetPlotCoordinate() -> (float, float)\nC++: double *GetPlotCoordinate()\n\n"},
  {(char*)"PlotToViewportCoordinate", PyvtkXYPlotActor_PlotToViewportCoordinate, METH_VARARGS,
   (char*)"V.PlotToViewportCoordinate(vtkViewport, float, float)\nC++: void PlotToViewportCoordinate(vtkViewport *viewport,\n    double &u, double &v)\nV.PlotToViewportCoordinate(vtkViewport)\nC++: void PlotToViewportCoordinate(vtkViewport *viewport)\n\nGiven a plot coordinate, return the viewpoint position\n"},
  {(char*)"SetViewportCoordinate", PyvtkXYPlotActor_SetViewportCoordinate, METH_VARARGS,
   (char*)"V.SetViewportCoordinate(float, float)\nC++: void SetViewportCoordinate(double, double)\nV.SetViewportCoordinate((float, float))\nC++: void SetViewportCoordinate(double a[2])\n\n"},
  {(char*)"GetViewportCoordinate", PyvtkXYPlotActor_GetViewportCoordinate, METH_VARARGS,
   (char*)"V.GetViewportCoordinate() -> (float, float)\nC++: double *GetViewportCoordinate()\n\n"},
  {(char*)"IsInPlot", PyvtkXYPlotActor_IsInPlot, METH_VARARGS,
   (char*)"V.IsInPlot(vtkViewport, float, float) -> int\nC++: int IsInPlot(vtkViewport *viewport, double u, double v)\n\nIs the specified viewport position within the plot area (as\nopposed to the region used by the plot plus the labels)?\n"},
  {(char*)"SetChartBox", PyvtkXYPlotActor_SetChartBox, METH_VARARGS,
   (char*)"V.SetChartBox(int)\nC++: void SetChartBox(int a)\n\nSet/Get the flag that controls whether a box will be drawn/filled\ncorresponding to the chart box.\n"},
  {(char*)"GetChartBox", PyvtkXYPlotActor_GetChartBox, METH_VARARGS,
   (char*)"V.GetChartBox() -> int\nC++: int GetChartBox()\n\nSet/Get the flag that controls whether a box will be drawn/filled\ncorresponding to the chart box.\n"},
  {(char*)"ChartBoxOn", PyvtkXYPlotActor_ChartBoxOn, METH_VARARGS,
   (char*)"V.ChartBoxOn()\nC++: void ChartBoxOn()\n\nSet/Get the flag that controls whether a box will be drawn/filled\ncorresponding to the chart box.\n"},
  {(char*)"ChartBoxOff", PyvtkXYPlotActor_ChartBoxOff, METH_VARARGS,
   (char*)"V.ChartBoxOff()\nC++: void ChartBoxOff()\n\nSet/Get the flag that controls whether a box will be drawn/filled\ncorresponding to the chart box.\n"},
  {(char*)"SetChartBorder", PyvtkXYPlotActor_SetChartBorder, METH_VARARGS,
   (char*)"V.SetChartBorder(int)\nC++: void SetChartBorder(int a)\n\nSet/Get the flag that controls whether a box will be drawn/filled\ncorresponding to the legend box.\n"},
  {(char*)"GetChartBorder", PyvtkXYPlotActor_GetChartBorder, METH_VARARGS,
   (char*)"V.GetChartBorder() -> int\nC++: int GetChartBorder()\n\nSet/Get the flag that controls whether a box will be drawn/filled\ncorresponding to the legend box.\n"},
  {(char*)"ChartBorderOn", PyvtkXYPlotActor_ChartBorderOn, METH_VARARGS,
   (char*)"V.ChartBorderOn()\nC++: void ChartBorderOn()\n\nSet/Get the flag that controls whether a box will be drawn/filled\ncorresponding to the legend box.\n"},
  {(char*)"ChartBorderOff", PyvtkXYPlotActor_ChartBorderOff, METH_VARARGS,
   (char*)"V.ChartBorderOff()\nC++: void ChartBorderOff()\n\nSet/Get the flag that controls whether a box will be drawn/filled\ncorresponding to the legend box.\n"},
  {(char*)"GetChartBoxProperty", PyvtkXYPlotActor_GetChartBoxProperty, METH_VARARGS,
   (char*)"V.GetChartBoxProperty() -> vtkProperty2D\nC++: vtkProperty2D *GetChartBoxProperty()\n\nGet the box vtkProperty2D.\n"},
  {(char*)"SetShowReferenceXLine", PyvtkXYPlotActor_SetShowReferenceXLine, METH_VARARGS,
   (char*)"V.SetShowReferenceXLine(int)\nC++: void SetShowReferenceXLine(int a)\n\nSet/Get if the X reference line is visible. hidden by default\n"},
  {(char*)"GetShowReferenceXLine", PyvtkXYPlotActor_GetShowReferenceXLine, METH_VARARGS,
   (char*)"V.GetShowReferenceXLine() -> int\nC++: int GetShowReferenceXLine()\n\nSet/Get if the X reference line is visible. hidden by default\n"},
  {(char*)"ShowReferenceXLineOn", PyvtkXYPlotActor_ShowReferenceXLineOn, METH_VARARGS,
   (char*)"V.ShowReferenceXLineOn()\nC++: void ShowReferenceXLineOn()\n\nSet/Get if the X reference line is visible. hidden by default\n"},
  {(char*)"ShowReferenceXLineOff", PyvtkXYPlotActor_ShowReferenceXLineOff, METH_VARARGS,
   (char*)"V.ShowReferenceXLineOff()\nC++: void ShowReferenceXLineOff()\n\nSet/Get if the X reference line is visible. hidden by default\n"},
  {(char*)"SetReferenceXValue", PyvtkXYPlotActor_SetReferenceXValue, METH_VARARGS,
   (char*)"V.SetReferenceXValue(float)\nC++: void SetReferenceXValue(double a)\n\n"},
  {(char*)"GetReferenceXValue", PyvtkXYPlotActor_GetReferenceXValue, METH_VARARGS,
   (char*)"V.GetReferenceXValue() -> float\nC++: double GetReferenceXValue()\n\n"},
  {(char*)"SetShowReferenceYLine", PyvtkXYPlotActor_SetShowReferenceYLine, METH_VARARGS,
   (char*)"V.SetShowReferenceYLine(int)\nC++: void SetShowReferenceYLine(int a)\n\nSet/Get if the Y reference line is visible. hidden by default\n"},
  {(char*)"GetShowReferenceYLine", PyvtkXYPlotActor_GetShowReferenceYLine, METH_VARARGS,
   (char*)"V.GetShowReferenceYLine() -> int\nC++: int GetShowReferenceYLine()\n\nSet/Get if the Y reference line is visible. hidden by default\n"},
  {(char*)"ShowReferenceYLineOn", PyvtkXYPlotActor_ShowReferenceYLineOn, METH_VARARGS,
   (char*)"V.ShowReferenceYLineOn()\nC++: void ShowReferenceYLineOn()\n\nSet/Get if the Y reference line is visible. hidden by default\n"},
  {(char*)"ShowReferenceYLineOff", PyvtkXYPlotActor_ShowReferenceYLineOff, METH_VARARGS,
   (char*)"V.ShowReferenceYLineOff()\nC++: void ShowReferenceYLineOff()\n\nSet/Get if the Y reference line is visible. hidden by default\n"},
  {(char*)"SetReferenceYValue", PyvtkXYPlotActor_SetReferenceYValue, METH_VARARGS,
   (char*)"V.SetReferenceYValue(float)\nC++: void SetReferenceYValue(double a)\n\n"},
  {(char*)"GetReferenceYValue", PyvtkXYPlotActor_GetReferenceYValue, METH_VARARGS,
   (char*)"V.GetReferenceYValue() -> float\nC++: double GetReferenceYValue()\n\n"},
  {(char*)"GetMTime", PyvtkXYPlotActor_GetMTime, METH_VARARGS,
   (char*)"V.GetMTime() -> int\nC++: unsigned long GetMTime()\n\nTake into account the modified time of internal helper classes.\n"},
  {(char*)"RenderOpaqueGeometry", PyvtkXYPlotActor_RenderOpaqueGeometry, METH_VARARGS,
   (char*)"V.RenderOpaqueGeometry(vtkViewport) -> int\nC++: int RenderOpaqueGeometry(vtkViewport *)\n\nWARNING: INTERNAL METHOD - NOT INTENDED FOR GENERAL USE DO NOT\nUSE THIS METHOD OUTSIDE OF THE RENDERING PROCESS. Draw the x-y\nplot.\n"},
  {(char*)"RenderOverlay", PyvtkXYPlotActor_RenderOverlay, METH_VARARGS,
   (char*)"V.RenderOverlay(vtkViewport) -> int\nC++: int RenderOverlay(vtkViewport *)\n\nWARNING: INTERNAL METHOD - NOT INTENDED FOR GENERAL USE DO NOT\nUSE THIS METHOD OUTSIDE OF THE RENDERING PROCESS. Draw the x-y\nplot.\n"},
  {(char*)"RenderTranslucentPolygonalGeometry", PyvtkXYPlotActor_RenderTranslucentPolygonalGeometry, METH_VARARGS,
   (char*)"V.RenderTranslucentPolygonalGeometry(vtkViewport) -> int\nC++: virtual int RenderTranslucentPolygonalGeometry(vtkViewport *)\n\nWARNING: INTERNAL METHOD - NOT INTENDED FOR GENERAL USE DO NOT\nUSE THIS METHOD OUTSIDE OF THE RENDERING PROCESS. Draw the x-y\nplot.\n"},
  {(char*)"HasTranslucentPolygonalGeometry", PyvtkXYPlotActor_HasTranslucentPolygonalGeometry, METH_VARARGS,
   (char*)"V.HasTranslucentPolygonalGeometry() -> int\nC++: virtual int HasTranslucentPolygonalGeometry()\n\nDoes this prop have some translucent polygonal geometry?\n"},
  {(char*)"ReleaseGraphicsResources", PyvtkXYPlotActor_ReleaseGraphicsResources, METH_VARARGS,
   (char*)"V.ReleaseGraphicsResources(vtkWindow)\nC++: void ReleaseGraphicsResources(vtkWindow *)\n\nRelease any graphics resources that are being consumed by this\nactor. The parameter window could be used to determine which\ngraphic resources to release.\n"},
  {(char*)"SetXTitlePosition", PyvtkXYPlotActor_SetXTitlePosition, METH_VARARGS,
   (char*)"V.SetXTitlePosition(float)\nC++: void SetXTitlePosition(double position)\n\nSet/Get the position of the title of X axis.\n"},
  {(char*)"GetXTitlePosition", PyvtkXYPlotActor_GetXTitlePosition, METH_VARARGS,
   (char*)"V.GetXTitlePosition() -> float\nC++: double GetXTitlePosition()\n\nSet/Get the position of the title of X axis.\n"},
  {(char*)"SetYTitlePosition", PyvtkXYPlotActor_SetYTitlePosition, METH_VARARGS,
   (char*)"V.SetYTitlePosition(int)\nC++: void SetYTitlePosition(int a)\n\nSet/Get the position of the title of Y axis.\n"},
  {(char*)"GetYTitlePosition", PyvtkXYPlotActor_GetYTitlePosition, METH_VARARGS,
   (char*)"V.GetYTitlePosition() -> int\nC++: int GetYTitlePosition()\n\nSet/Get the position of the title of Y axis.\n"},
  {(char*)"SetYTitlePositionToTop", PyvtkXYPlotActor_SetYTitlePositionToTop, METH_VARARGS,
   (char*)"V.SetYTitlePositionToTop()\nC++: void SetYTitlePositionToTop()\n\nSet/Get the position of the title of Y axis.\n"},
  {(char*)"SetYTitlePositionToHCenter", PyvtkXYPlotActor_SetYTitlePositionToHCenter, METH_VARARGS,
   (char*)"V.SetYTitlePositionToHCenter()\nC++: void SetYTitlePositionToHCenter()\n\nSet/Get the position of the title of Y axis.\n"},
  {(char*)"SetYTitlePositionToVCenter", PyvtkXYPlotActor_SetYTitlePositionToVCenter, METH_VARARGS,
   (char*)"V.SetYTitlePositionToVCenter()\nC++: void SetYTitlePositionToVCenter()\n\nSet/Get the position of the title of Y axis.\n"},
  {(char*)"SetPlotGlyphType", PyvtkXYPlotActor_SetPlotGlyphType, METH_VARARGS,
   (char*)"V.SetPlotGlyphType(int, int)\nC++: virtual void SetPlotGlyphType(int, int)\n\nSet plot properties\n"},
  {(char*)"SetLineWidth", PyvtkXYPlotActor_SetLineWidth, METH_VARARGS,
   (char*)"V.SetLineWidth(float)\nC++: virtual void SetLineWidth(double)\n\nSet plot properties\n"},
  {(char*)"AddUserCurvesPoint", PyvtkXYPlotActor_AddUserCurvesPoint, METH_VARARGS,
   (char*)"V.AddUserCurvesPoint(float, float, float)\nC++: virtual void AddUserCurvesPoint(double, double, double)\n\nSet plot properties\n"},
  {(char*)"RemoveAllActiveCurves", PyvtkXYPlotActor_RemoveAllActiveCurves, METH_VARARGS,
   (char*)"V.RemoveAllActiveCurves()\nC++: virtual void RemoveAllActiveCurves()\n\nSet plot properties\n"},
  {(char*)"SetLegendBorder", PyvtkXYPlotActor_SetLegendBorder, METH_VARARGS,
   (char*)"V.SetLegendBorder(int)\nC++: virtual void SetLegendBorder(int)\n\nSet legend properties\n"},
  {(char*)"SetLegendBox", PyvtkXYPlotActor_SetLegendBox, METH_VARARGS,
   (char*)"V.SetLegendBox(int)\nC++: virtual void SetLegendBox(int)\n\nSet legend properties\n"},
  {(char*)"SetLegendUseBackground", PyvtkXYPlotActor_SetLegendUseBackground, METH_VARARGS,
   (char*)"V.SetLegendUseBackground(int)\nC++: virtual void SetLegendUseBackground(int)\n\nSet legend properties\n"},
  {(char*)"SetLegendBackgroundColor", PyvtkXYPlotActor_SetLegendBackgroundColor, METH_VARARGS,
   (char*)"V.SetLegendBackgroundColor(float, float, float)\nC++: virtual void SetLegendBackgroundColor(double, double, double)\n\nSet legend properties\n"},
  {(char*)"SetTitleColor", PyvtkXYPlotActor_SetTitleColor, METH_VARARGS,
   (char*)"V.SetTitleColor(float, float, float)\nC++: virtual void SetTitleColor(double, double, double)\n\nSet title properties\n"},
  {(char*)"SetTitleFontFamily", PyvtkXYPlotActor_SetTitleFontFamily, METH_VARARGS,
   (char*)"V.SetTitleFontFamily(int)\nC++: virtual void SetTitleFontFamily(int)\n\nSet title properties\n"},
  {(char*)"SetTitleBold", PyvtkXYPlotActor_SetTitleBold, METH_VARARGS,
   (char*)"V.SetTitleBold(int)\nC++: virtual void SetTitleBold(int)\n\nSet title properties\n"},
  {(char*)"SetTitleItalic", PyvtkXYPlotActor_SetTitleItalic, METH_VARARGS,
   (char*)"V.SetTitleItalic(int)\nC++: virtual void SetTitleItalic(int)\n\nSet title properties\n"},
  {(char*)"SetTitleShadow", PyvtkXYPlotActor_SetTitleShadow, METH_VARARGS,
   (char*)"V.SetTitleShadow(int)\nC++: virtual void SetTitleShadow(int)\n\nSet title properties\n"},
  {(char*)"SetTitleFontSize", PyvtkXYPlotActor_SetTitleFontSize, METH_VARARGS,
   (char*)"V.SetTitleFontSize(int)\nC++: virtual void SetTitleFontSize(int)\n\nSet title properties\n"},
  {(char*)"SetTitleJustification", PyvtkXYPlotActor_SetTitleJustification, METH_VARARGS,
   (char*)"V.SetTitleJustification(int)\nC++: virtual void SetTitleJustification(int)\n\nSet title properties\n"},
  {(char*)"SetTitleVerticalJustification", PyvtkXYPlotActor_SetTitleVerticalJustification, METH_VARARGS,
   (char*)"V.SetTitleVerticalJustification(int)\nC++: virtual void SetTitleVerticalJustification(int)\n\nSet title properties\n"},
  {(char*)"SetXAxisColor", PyvtkXYPlotActor_SetXAxisColor, METH_VARARGS,
   (char*)"V.SetXAxisColor(float, float, float)\nC++: virtual void SetXAxisColor(double, double, double)\n\nSet axes properties\n"},
  {(char*)"SetYAxisColor", PyvtkXYPlotActor_SetYAxisColor, METH_VARARGS,
   (char*)"V.SetYAxisColor(float, float, float)\nC++: virtual void SetYAxisColor(double, double, double)\n\nSet axes properties\n"},
  {(char*)"SetAxisTitleColor", PyvtkXYPlotActor_SetAxisTitleColor, METH_VARARGS,
   (char*)"V.SetAxisTitleColor(float, float, float)\nC++: virtual void SetAxisTitleColor(double, double, double)\n\nSet axis title properties\n"},
  {(char*)"SetAxisTitleFontFamily", PyvtkXYPlotActor_SetAxisTitleFontFamily, METH_VARARGS,
   (char*)"V.SetAxisTitleFontFamily(int)\nC++: virtual void SetAxisTitleFontFamily(int)\n\nSet axis title properties\n"},
  {(char*)"SetAxisTitleBold", PyvtkXYPlotActor_SetAxisTitleBold, METH_VARARGS,
   (char*)"V.SetAxisTitleBold(int)\nC++: virtual void SetAxisTitleBold(int)\n\nSet axis title properties\n"},
  {(char*)"SetAxisTitleItalic", PyvtkXYPlotActor_SetAxisTitleItalic, METH_VARARGS,
   (char*)"V.SetAxisTitleItalic(int)\nC++: virtual void SetAxisTitleItalic(int)\n\nSet axis title properties\n"},
  {(char*)"SetAxisTitleShadow", PyvtkXYPlotActor_SetAxisTitleShadow, METH_VARARGS,
   (char*)"V.SetAxisTitleShadow(int)\nC++: virtual void SetAxisTitleShadow(int)\n\nSet axis title properties\n"},
  {(char*)"SetAxisTitleFontSize", PyvtkXYPlotActor_SetAxisTitleFontSize, METH_VARARGS,
   (char*)"V.SetAxisTitleFontSize(int)\nC++: virtual void SetAxisTitleFontSize(int)\n\nSet axis title properties\n"},
  {(char*)"SetAxisTitleJustification", PyvtkXYPlotActor_SetAxisTitleJustification, METH_VARARGS,
   (char*)"V.SetAxisTitleJustification(int)\nC++: virtual void SetAxisTitleJustification(int)\n\nSet axis title properties\n"},
  {(char*)"SetAxisTitleVerticalJustification", PyvtkXYPlotActor_SetAxisTitleVerticalJustification, METH_VARARGS,
   (char*)"V.SetAxisTitleVerticalJustification(int)\nC++: virtual void SetAxisTitleVerticalJustification(int)\n\nSet axis title properties\n"},
  {(char*)"SetAxisLabelColor", PyvtkXYPlotActor_SetAxisLabelColor, METH_VARARGS,
   (char*)"V.SetAxisLabelColor(float, float, float)\nC++: virtual void SetAxisLabelColor(double, double, double)\n\nSet axis label properties\n"},
  {(char*)"SetAxisLabelFontFamily", PyvtkXYPlotActor_SetAxisLabelFontFamily, METH_VARARGS,
   (char*)"V.SetAxisLabelFontFamily(int)\nC++: virtual void SetAxisLabelFontFamily(int)\n\nSet axis label properties\n"},
  {(char*)"SetAxisLabelBold", PyvtkXYPlotActor_SetAxisLabelBold, METH_VARARGS,
   (char*)"V.SetAxisLabelBold(int)\nC++: virtual void SetAxisLabelBold(int)\n\nSet axis label properties\n"},
  {(char*)"SetAxisLabelItalic", PyvtkXYPlotActor_SetAxisLabelItalic, METH_VARARGS,
   (char*)"V.SetAxisLabelItalic(int)\nC++: virtual void SetAxisLabelItalic(int)\n\nSet axis label properties\n"},
  {(char*)"SetAxisLabelShadow", PyvtkXYPlotActor_SetAxisLabelShadow, METH_VARARGS,
   (char*)"V.SetAxisLabelShadow(int)\nC++: virtual void SetAxisLabelShadow(int)\n\nSet axis label properties\n"},
  {(char*)"SetAxisLabelFontSize", PyvtkXYPlotActor_SetAxisLabelFontSize, METH_VARARGS,
   (char*)"V.SetAxisLabelFontSize(int)\nC++: virtual void SetAxisLabelFontSize(int)\n\nSet axis label properties\n"},
  {(char*)"SetAxisLabelJustification", PyvtkXYPlotActor_SetAxisLabelJustification, METH_VARARGS,
   (char*)"V.SetAxisLabelJustification(int)\nC++: virtual void SetAxisLabelJustification(int)\n\nSet axis label properties\n"},
  {(char*)"SetAxisLabelVerticalJustification", PyvtkXYPlotActor_SetAxisLabelVerticalJustification, METH_VARARGS,
   (char*)"V.SetAxisLabelVerticalJustification(int)\nC++: virtual void SetAxisLabelVerticalJustification(int)\n\nSet axis label properties\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkXYPlotActor_StaticNew()
{
  return vtkXYPlotActor::New();
}

PyObject *PyVTKClass_vtkXYPlotActorNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkXYPlotActor_StaticNew,
    PyvtkXYPlotActor_Methods,
    "vtkXYPlotActor", modulename,
    NULL, NULL,
    PyvtkXYPlotActor_Doc(),
    PyVTKClass_vtkActor2DNew(modulename));

  if (cls)
    {
    PyObject *d = PyVTKClass_GetDict(cls);
    PyObject *o;

    PyType_Ready(&PyvtkXYPlotActor_Alignment_Type);
    PyvtkXYPlotActor_Alignment_Type.tp_new = NULL;

    o = (PyObject *)&PyvtkXYPlotActor_Alignment_Type;
    if (o && PyDict_SetItemString(d, (char *)"Alignment", o) != 0)
      {
      Py_DECREF(o);
      }

    for (int c = 0; c < 12; c++)
      {
      typedef vtkXYPlotActor::Alignment cxx_enum_type;

      static const struct { const char *name; cxx_enum_type value; }
        constants[12] = {
          { "AlignLeft", vtkXYPlotActor::AlignLeft },
          { "AlignRight", vtkXYPlotActor::AlignRight },
          { "AlignHCenter", vtkXYPlotActor::AlignHCenter },
          { "AlignTop", vtkXYPlotActor::AlignTop },
          { "AlignBottom", vtkXYPlotActor::AlignBottom },
          { "AlignVCenter", vtkXYPlotActor::AlignVCenter },
          { "AlignAxisLeft", vtkXYPlotActor::AlignAxisLeft },
          { "AlignAxisRight", vtkXYPlotActor::AlignAxisRight },
          { "AlignAxisHCenter", vtkXYPlotActor::AlignAxisHCenter },
          { "AlignAxisTop", vtkXYPlotActor::AlignAxisTop },
          { "AlignAxisBottom", vtkXYPlotActor::AlignAxisBottom },
          { "AlignAxisVCenter", vtkXYPlotActor::AlignAxisVCenter },
        };

      o = PyvtkXYPlotActor_Alignment_FromEnum(constants[c].value);
      if (o)
        {
        PyDict_SetItemString(d, (char *)constants[c].name, o);
        Py_DECREF(o);
        }
      }

    }

  return cls;
}

const char **PyvtkXYPlotActor_Doc()
{
  static const char *docstring[] = {
    "vtkXYPlotActor - generate an x-y plot from input dataset(s) or field\ndata\n\n",
    "Superclass: vtkActor2D\n\n",
    "vtkXYPlotActor creates an x-y plot of data from one or more input\ndata sets or field data. The class plots dataset scalar values\n(y-axis) against the points (x-axis). The x-axis values are generated\nby taking the point ids, computing a cumulative arc length, or a\nnormalized arc length. More than one input data set can be specified\nto generate multiple plots. Alternatively, if field data is supplie",
    "d\nas input, the class plots one component against another. (The user\nmust specify which component to use as the x-axis and which for the\ny-axis.)\n\nTo use this class to plot dataset(s), you must specify one or more\ninput datasets containing scalar and point data.  You'll probably\nalso want to invoke a method to control how the point coordinates are\nconverted into x values (by default point ids are ",
    "used).\n\nTo use this class to plot field data, you must specify one or more\ninput data objects with its associated field data. You'll also want\nto specify which component to use as the x-axis and which to use as\nthe y-axis. Note that when plotting field data, the x and y values\nare used directly (i.e., there are no options to normalize the\ncomponents).\n\nOnce you've set up the plot, you'll want to p",
    "osition it.  The\nPositionCoordinate defines the lower-left location of the x-y plot\n(specified in normalized viewport coordinates) and the\nPosition2Coordinate define the upper-right corner. (Note: the\nPosition2Coordinate is relative to PositionCoordinate, so you can\nmove the vtkXYPlotActor around the viewport by setting just the\nPositionCoordinate.) The combination of the two position coordinates\n",
    "specifies a rectangle in which the plot will lie.\n\nOptional features include the ability to specify axes labels, label\nformat and plot title. You can also manually specify the x and y plot\nranges (by default they are computed automatically). The Border\ninstance variable is used to create space between the boundary of the\nplot window (specified by PositionCoordinate and Position2Coordinate)\nand the",
    " plot itself.\n\nThe font property of the plot title can be modified through the\nTitleTextProperty attribute. The font property of the axes titles and\nlabels can be modified through the AxisTitleTextProperty and\nAxisLabelTextProperty attributes. You may also use the\nGetXAxisActor2D or GetYAxisActor2D methods to access each individual\naxis actor to modify their font properties. In the same way, the\nG",
    "etLegendBoxActor method can be used to access the legend box actor\nto modify its font properties.\n\nThere are several advanced features as well. You can assign per curve\nproperties (such as color and a plot symbol). (Note that each input\ndataset and/or data object creates a single curve.) Another option is\nto add a plot legend that graphically indicates the correspondance\nbetween the curve, curve s",
    "ymbols, and the data source. You can also\nexchange the x and y axes if you prefer you plot orientation that\nway.\n\nCaveats:\n\nIf you are interested in plotting something other than scalar data,\nyou can use the vtk data shuffling filters (e.g.,\nvtkAttributeDataToFieldDataFilter and\nvtkFieldDataToAttributeDataFilter) to convert the data into scalar\ndata and/or points.\n\nSee Also:\n\nvtkActor2D vtkTextMap",
    "per vtkScalarBarActor vtkAxisActor2D\nvtkCubeAxesActor2D vtkAttributeDataToFieldDataFilter\nvtkFieldDataToAttributeDataFilter vtkTextProperty\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkXYPlotActor(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkXYPlotActorNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkXYPlotActor", o) != 0)
    {
    Py_DECREF(o);
    }

  for (int c = 0; c < 9; c++)
    {
    static const struct { const char *name; int value; }
      constants[9] = {
        { "VTK_XYPLOT_INDEX", 0 },
        { "VTK_XYPLOT_ARC_LENGTH", 1 },
        { "VTK_XYPLOT_NORMALIZED_ARC_LENGTH", 2 },
        { "VTK_XYPLOT_VALUE", 3 },
        { "VTK_XYPLOT_ROW", 0 },
        { "VTK_XYPLOT_COLUMN", 1 },
        { "VTK_XYPLOT_Y_AXIS_TOP", 0 },
        { "VTK_XYPLOT_Y_AXIS_HCENTER", 1 },
        { "VTK_XYPLOT_Y_AXIS_VCENTER", 2 },
      };

    o = PyInt_FromLong(constants[c].value);
    if (o)
      {
      PyDict_SetItemString(dict, (char *)constants[c].name, o);
      Py_DECREF(o);
      }
    }

}

