// python wrapper for vtkGlyph3DMapper
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkGlyph3DMapper.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkGlyph3DMapper(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkGlyph3DMapperNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkMapperNew
extern "C" { PyObject *PyVTKClass_vtkMapperNew(const char *); }
#define DECLARED_PyVTKClass_vtkMapperNew
#endif

static const char **PyvtkGlyph3DMapper_Doc();

#ifndef DECLARED_PyvtkGlyph3DMapper_ArrayIndexes_Type
extern VTK_PYTHON_EXPORT PyTypeObject PyvtkGlyph3DMapper_ArrayIndexes_Type;
#define DECLARED_PyvtkGlyph3DMapper_ArrayIndexes_Type
#endif

PyTypeObject PyvtkGlyph3DMapper_ArrayIndexes_Type = {
  PyObject_HEAD_INIT(&PyType_Type)
  0,
  (char*)"ArrayIndexes", // tp_name
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

PyObject *PyvtkGlyph3DMapper_ArrayIndexes_FromEnum(int val)
{
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkGlyph3DMapper_ArrayIndexes_Type);
  self->ob_ival = val;
  return (PyObject *)self;
}

#ifndef DECLARED_PyvtkGlyph3DMapper_ScaleModes_Type
extern VTK_PYTHON_EXPORT PyTypeObject PyvtkGlyph3DMapper_ScaleModes_Type;
#define DECLARED_PyvtkGlyph3DMapper_ScaleModes_Type
#endif

PyTypeObject PyvtkGlyph3DMapper_ScaleModes_Type = {
  PyObject_HEAD_INIT(&PyType_Type)
  0,
  (char*)"ScaleModes", // tp_name
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

PyObject *PyvtkGlyph3DMapper_ScaleModes_FromEnum(int val)
{
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkGlyph3DMapper_ScaleModes_Type);
  self->ob_ival = val;
  return (PyObject *)self;
}

#ifndef DECLARED_PyvtkGlyph3DMapper_OrientationModes_Type
extern VTK_PYTHON_EXPORT PyTypeObject PyvtkGlyph3DMapper_OrientationModes_Type;
#define DECLARED_PyvtkGlyph3DMapper_OrientationModes_Type
#endif

PyTypeObject PyvtkGlyph3DMapper_OrientationModes_Type = {
  PyObject_HEAD_INIT(&PyType_Type)
  0,
  (char*)"OrientationModes", // tp_name
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

PyObject *PyvtkGlyph3DMapper_OrientationModes_FromEnum(int val)
{
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkGlyph3DMapper_OrientationModes_Type);
  self->ob_ival = val;
  return (PyObject *)self;
}


static PyObject *
PyvtkGlyph3DMapper_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3DMapper *op = static_cast<vtkGlyph3DMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkGlyph3DMapper::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGlyph3DMapper_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3DMapper *op = static_cast<vtkGlyph3DMapper *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkGlyph3DMapper::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGlyph3DMapper_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3DMapper *op = static_cast<vtkGlyph3DMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkGlyph3DMapper *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkGlyph3DMapper::NewInstance());

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
PyvtkGlyph3DMapper_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkGlyph3DMapper *tempr = vtkGlyph3DMapper::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGlyph3DMapper_SetSourceConnection_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSourceConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3DMapper *op = static_cast<vtkGlyph3DMapper *>(vp);

  int temp0;
  vtkAlgorithmOutput *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkAlgorithmOutput"))
    {
    if (ap.IsBound())
      {
      op->SetSourceConnection(temp0, temp1);
      }
    else
      {
      op->vtkGlyph3DMapper::SetSourceConnection(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkGlyph3DMapper_SetSourceConnection_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSourceConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3DMapper *op = static_cast<vtkGlyph3DMapper *>(vp);

  vtkAlgorithmOutput *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAlgorithmOutput"))
    {
    if (ap.IsBound())
      {
      op->SetSourceConnection(temp0);
      }
    else
      {
      op->vtkGlyph3DMapper::SetSourceConnection(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkGlyph3DMapper_SetSourceConnection(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkGlyph3DMapper_SetSourceConnection_s1(self, args);
    case 1:
      return PyvtkGlyph3DMapper_SetSourceConnection_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetSourceConnection");
  return NULL;
}



static PyObject *
PyvtkGlyph3DMapper_SetInputData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3DMapper *op = static_cast<vtkGlyph3DMapper *>(vp);

  vtkDataObject *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataObject"))
    {
    if (ap.IsBound())
      {
      op->SetInputData(temp0);
      }
    else
      {
      op->vtkGlyph3DMapper::SetInputData(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGlyph3DMapper_SetSourceData_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSourceData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3DMapper *op = static_cast<vtkGlyph3DMapper *>(vp);

  int temp0;
  vtkPolyData *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkPolyData"))
    {
    if (ap.IsBound())
      {
      op->SetSourceData(temp0, temp1);
      }
    else
      {
      op->vtkGlyph3DMapper::SetSourceData(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkGlyph3DMapper_SetSourceData_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSourceData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3DMapper *op = static_cast<vtkGlyph3DMapper *>(vp);

  vtkPolyData *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPolyData"))
    {
    if (ap.IsBound())
      {
      op->SetSourceData(temp0);
      }
    else
      {
      op->vtkGlyph3DMapper::SetSourceData(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkGlyph3DMapper_SetSourceData(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkGlyph3DMapper_SetSourceData_s1(self, args);
    case 1:
      return PyvtkGlyph3DMapper_SetSourceData_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetSourceData");
  return NULL;
}



static PyObject *
PyvtkGlyph3DMapper_GetSource(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSource");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3DMapper *op = static_cast<vtkGlyph3DMapper *>(vp);

  int temp0 = 0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0, 1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp0)))
    {
    vtkPolyData *tempr = (ap.IsBound() ?
      op->GetSource(temp0) :
      op->vtkGlyph3DMapper::GetSource(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGlyph3DMapper_SetScaling(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScaling");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3DMapper *op = static_cast<vtkGlyph3DMapper *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetScaling(temp0);
      }
    else
      {
      op->vtkGlyph3DMapper::SetScaling(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGlyph3DMapper_ScalingOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ScalingOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3DMapper *op = static_cast<vtkGlyph3DMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ScalingOn();
      }
    else
      {
      op->vtkGlyph3DMapper::ScalingOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGlyph3DMapper_ScalingOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ScalingOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3DMapper *op = static_cast<vtkGlyph3DMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ScalingOff();
      }
    else
      {
      op->vtkGlyph3DMapper::ScalingOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGlyph3DMapper_GetScaling(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScaling");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3DMapper *op = static_cast<vtkGlyph3DMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetScaling() :
      op->vtkGlyph3DMapper::GetScaling());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGlyph3DMapper_SetScaleMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScaleMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3DMapper *op = static_cast<vtkGlyph3DMapper *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetScaleMode(temp0);
      }
    else
      {
      op->vtkGlyph3DMapper::SetScaleMode(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGlyph3DMapper_GetScaleMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScaleMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3DMapper *op = static_cast<vtkGlyph3DMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetScaleMode() :
      op->vtkGlyph3DMapper::GetScaleMode());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGlyph3DMapper_SetScaleFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScaleFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3DMapper *op = static_cast<vtkGlyph3DMapper *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetScaleFactor(temp0);
      }
    else
      {
      op->vtkGlyph3DMapper::SetScaleFactor(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGlyph3DMapper_GetScaleFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScaleFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3DMapper *op = static_cast<vtkGlyph3DMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetScaleFactor() :
      op->vtkGlyph3DMapper::GetScaleFactor());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGlyph3DMapper_SetScaleModeToScaleByMagnitude(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScaleModeToScaleByMagnitude");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3DMapper *op = static_cast<vtkGlyph3DMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetScaleModeToScaleByMagnitude();
      }
    else
      {
      op->vtkGlyph3DMapper::SetScaleModeToScaleByMagnitude();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGlyph3DMapper_SetScaleModeToScaleByVectorComponents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScaleModeToScaleByVectorComponents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3DMapper *op = static_cast<vtkGlyph3DMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetScaleModeToScaleByVectorComponents();
      }
    else
      {
      op->vtkGlyph3DMapper::SetScaleModeToScaleByVectorComponents();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGlyph3DMapper_SetScaleModeToNoDataScaling(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScaleModeToNoDataScaling");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3DMapper *op = static_cast<vtkGlyph3DMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetScaleModeToNoDataScaling();
      }
    else
      {
      op->vtkGlyph3DMapper::SetScaleModeToNoDataScaling();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGlyph3DMapper_GetScaleModeAsString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScaleModeAsString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3DMapper *op = static_cast<vtkGlyph3DMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetScaleModeAsString() :
      op->vtkGlyph3DMapper::GetScaleModeAsString());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGlyph3DMapper_SetRange_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3DMapper *op = static_cast<vtkGlyph3DMapper *>(vp);

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
      op->vtkGlyph3DMapper::SetRange(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkGlyph3DMapper_SetRange_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3DMapper *op = static_cast<vtkGlyph3DMapper *>(vp);

  double temp0[2];
  const int size0 = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetRange(temp0);
      }
    else
      {
      op->vtkGlyph3DMapper::SetRange(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkGlyph3DMapper_SetRange(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkGlyph3DMapper_SetRange_s1(self, args);
    case 1:
      return PyvtkGlyph3DMapper_SetRange_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetRange");
  return NULL;
}



static PyObject *
PyvtkGlyph3DMapper_GetRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3DMapper *op = static_cast<vtkGlyph3DMapper *>(vp);

  int sizer = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetRange() :
      op->vtkGlyph3DMapper::GetRange());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkGlyph3DMapper_SetOrient(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOrient");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3DMapper *op = static_cast<vtkGlyph3DMapper *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetOrient(temp0);
      }
    else
      {
      op->vtkGlyph3DMapper::SetOrient(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGlyph3DMapper_GetOrient(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOrient");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3DMapper *op = static_cast<vtkGlyph3DMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetOrient() :
      op->vtkGlyph3DMapper::GetOrient());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGlyph3DMapper_OrientOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OrientOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3DMapper *op = static_cast<vtkGlyph3DMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->OrientOn();
      }
    else
      {
      op->vtkGlyph3DMapper::OrientOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGlyph3DMapper_OrientOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OrientOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3DMapper *op = static_cast<vtkGlyph3DMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->OrientOff();
      }
    else
      {
      op->vtkGlyph3DMapper::OrientOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGlyph3DMapper_SetOrientationMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOrientationMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3DMapper *op = static_cast<vtkGlyph3DMapper *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetOrientationMode(temp0);
      }
    else
      {
      op->vtkGlyph3DMapper::SetOrientationMode(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGlyph3DMapper_GetOrientationModeMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOrientationModeMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3DMapper *op = static_cast<vtkGlyph3DMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetOrientationModeMinValue() :
      op->vtkGlyph3DMapper::GetOrientationModeMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGlyph3DMapper_GetOrientationModeMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOrientationModeMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3DMapper *op = static_cast<vtkGlyph3DMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetOrientationModeMaxValue() :
      op->vtkGlyph3DMapper::GetOrientationModeMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGlyph3DMapper_GetOrientationMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOrientationMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3DMapper *op = static_cast<vtkGlyph3DMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetOrientationMode() :
      op->vtkGlyph3DMapper::GetOrientationMode());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGlyph3DMapper_SetOrientationModeToDirection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOrientationModeToDirection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3DMapper *op = static_cast<vtkGlyph3DMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetOrientationModeToDirection();
      }
    else
      {
      op->vtkGlyph3DMapper::SetOrientationModeToDirection();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGlyph3DMapper_SetOrientationModeToRotation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOrientationModeToRotation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3DMapper *op = static_cast<vtkGlyph3DMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetOrientationModeToRotation();
      }
    else
      {
      op->vtkGlyph3DMapper::SetOrientationModeToRotation();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGlyph3DMapper_GetOrientationModeAsString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOrientationModeAsString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3DMapper *op = static_cast<vtkGlyph3DMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetOrientationModeAsString() :
      op->vtkGlyph3DMapper::GetOrientationModeAsString());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGlyph3DMapper_SetClamping(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetClamping");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3DMapper *op = static_cast<vtkGlyph3DMapper *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetClamping(temp0);
      }
    else
      {
      op->vtkGlyph3DMapper::SetClamping(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGlyph3DMapper_GetClamping(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClamping");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3DMapper *op = static_cast<vtkGlyph3DMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetClamping() :
      op->vtkGlyph3DMapper::GetClamping());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGlyph3DMapper_ClampingOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClampingOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3DMapper *op = static_cast<vtkGlyph3DMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ClampingOn();
      }
    else
      {
      op->vtkGlyph3DMapper::ClampingOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGlyph3DMapper_ClampingOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClampingOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3DMapper *op = static_cast<vtkGlyph3DMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ClampingOff();
      }
    else
      {
      op->vtkGlyph3DMapper::ClampingOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGlyph3DMapper_SetSourceIndexing(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSourceIndexing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3DMapper *op = static_cast<vtkGlyph3DMapper *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetSourceIndexing(temp0);
      }
    else
      {
      op->vtkGlyph3DMapper::SetSourceIndexing(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGlyph3DMapper_GetSourceIndexing(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSourceIndexing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3DMapper *op = static_cast<vtkGlyph3DMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetSourceIndexing() :
      op->vtkGlyph3DMapper::GetSourceIndexing());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGlyph3DMapper_SourceIndexingOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SourceIndexingOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3DMapper *op = static_cast<vtkGlyph3DMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SourceIndexingOn();
      }
    else
      {
      op->vtkGlyph3DMapper::SourceIndexingOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGlyph3DMapper_SourceIndexingOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SourceIndexingOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3DMapper *op = static_cast<vtkGlyph3DMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SourceIndexingOff();
      }
    else
      {
      op->vtkGlyph3DMapper::SourceIndexingOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGlyph3DMapper_SetUseSelectionIds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseSelectionIds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3DMapper *op = static_cast<vtkGlyph3DMapper *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetUseSelectionIds(temp0);
      }
    else
      {
      op->vtkGlyph3DMapper::SetUseSelectionIds(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGlyph3DMapper_UseSelectionIdsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseSelectionIdsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3DMapper *op = static_cast<vtkGlyph3DMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->UseSelectionIdsOn();
      }
    else
      {
      op->vtkGlyph3DMapper::UseSelectionIdsOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGlyph3DMapper_UseSelectionIdsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseSelectionIdsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3DMapper *op = static_cast<vtkGlyph3DMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->UseSelectionIdsOff();
      }
    else
      {
      op->vtkGlyph3DMapper::UseSelectionIdsOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGlyph3DMapper_GetUseSelectionIds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseSelectionIds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3DMapper *op = static_cast<vtkGlyph3DMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetUseSelectionIds() :
      op->vtkGlyph3DMapper::GetUseSelectionIds());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGlyph3DMapper_GetBounds_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3DMapper *op = static_cast<vtkGlyph3DMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetBounds() :
      op->vtkGlyph3DMapper::GetBounds());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkGlyph3DMapper_GetBounds_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3DMapper *op = static_cast<vtkGlyph3DMapper *>(vp);

  double temp0[6];
  double save0[6];
  const int size0 = 6;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    if (ap.IsBound())
      {
      op->GetBounds(temp0);
      }
    else
      {
      op->vtkGlyph3DMapper::GetBounds(temp0);
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
PyvtkGlyph3DMapper_GetBounds(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 0:
      return PyvtkGlyph3DMapper_GetBounds_s1(self, args);
    case 1:
      return PyvtkGlyph3DMapper_GetBounds_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetBounds");
  return NULL;
}



static PyObject *
PyvtkGlyph3DMapper_Render(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Render");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3DMapper *op = static_cast<vtkGlyph3DMapper *>(vp);

  vtkRenderer *temp0 = NULL;
  vtkActor *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkRenderer") &&
      ap.GetVTKObject(temp1, "vtkActor"))
    {
    if (ap.IsBound())
      {
      op->Render(temp0, temp1);
      }
    else
      {
      op->vtkGlyph3DMapper::Render(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGlyph3DMapper_SetNestedDisplayLists(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNestedDisplayLists");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3DMapper *op = static_cast<vtkGlyph3DMapper *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetNestedDisplayLists(temp0);
      }
    else
      {
      op->vtkGlyph3DMapper::SetNestedDisplayLists(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGlyph3DMapper_GetNestedDisplayLists(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNestedDisplayLists");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3DMapper *op = static_cast<vtkGlyph3DMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetNestedDisplayLists() :
      op->vtkGlyph3DMapper::GetNestedDisplayLists());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGlyph3DMapper_NestedDisplayListsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NestedDisplayListsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3DMapper *op = static_cast<vtkGlyph3DMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->NestedDisplayListsOn();
      }
    else
      {
      op->vtkGlyph3DMapper::NestedDisplayListsOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGlyph3DMapper_NestedDisplayListsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NestedDisplayListsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3DMapper *op = static_cast<vtkGlyph3DMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->NestedDisplayListsOff();
      }
    else
      {
      op->vtkGlyph3DMapper::NestedDisplayListsOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGlyph3DMapper_SetMasking(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMasking");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3DMapper *op = static_cast<vtkGlyph3DMapper *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetMasking(temp0);
      }
    else
      {
      op->vtkGlyph3DMapper::SetMasking(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGlyph3DMapper_GetMasking(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMasking");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3DMapper *op = static_cast<vtkGlyph3DMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetMasking() :
      op->vtkGlyph3DMapper::GetMasking());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGlyph3DMapper_MaskingOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MaskingOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3DMapper *op = static_cast<vtkGlyph3DMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->MaskingOn();
      }
    else
      {
      op->vtkGlyph3DMapper::MaskingOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGlyph3DMapper_MaskingOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MaskingOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3DMapper *op = static_cast<vtkGlyph3DMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->MaskingOff();
      }
    else
      {
      op->vtkGlyph3DMapper::MaskingOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGlyph3DMapper_SetMaskArray_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaskArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3DMapper *op = static_cast<vtkGlyph3DMapper *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetMaskArray(temp0);
      }
    else
      {
      op->vtkGlyph3DMapper::SetMaskArray(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkGlyph3DMapper_SetMaskArray_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaskArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3DMapper *op = static_cast<vtkGlyph3DMapper *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetMaskArray(temp0);
      }
    else
      {
      op->vtkGlyph3DMapper::SetMaskArray(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkGlyph3DMapper_SetMaskArray_Methods[] = {
  {NULL, PyvtkGlyph3DMapper_SetMaskArray_s1, METH_VARARGS,
   (char*)"@z"},
  {NULL, PyvtkGlyph3DMapper_SetMaskArray_s2, METH_VARARGS,
   (char*)"@i"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkGlyph3DMapper_SetMaskArray(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkGlyph3DMapper_SetMaskArray_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetMaskArray");
  return NULL;
}



static PyObject *
PyvtkGlyph3DMapper_SetOrientationArray_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOrientationArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3DMapper *op = static_cast<vtkGlyph3DMapper *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetOrientationArray(temp0);
      }
    else
      {
      op->vtkGlyph3DMapper::SetOrientationArray(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkGlyph3DMapper_SetOrientationArray_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOrientationArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3DMapper *op = static_cast<vtkGlyph3DMapper *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetOrientationArray(temp0);
      }
    else
      {
      op->vtkGlyph3DMapper::SetOrientationArray(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkGlyph3DMapper_SetOrientationArray_Methods[] = {
  {NULL, PyvtkGlyph3DMapper_SetOrientationArray_s1, METH_VARARGS,
   (char*)"@z"},
  {NULL, PyvtkGlyph3DMapper_SetOrientationArray_s2, METH_VARARGS,
   (char*)"@i"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkGlyph3DMapper_SetOrientationArray(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkGlyph3DMapper_SetOrientationArray_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetOrientationArray");
  return NULL;
}



static PyObject *
PyvtkGlyph3DMapper_SetScaleArray_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScaleArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3DMapper *op = static_cast<vtkGlyph3DMapper *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetScaleArray(temp0);
      }
    else
      {
      op->vtkGlyph3DMapper::SetScaleArray(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkGlyph3DMapper_SetScaleArray_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScaleArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3DMapper *op = static_cast<vtkGlyph3DMapper *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetScaleArray(temp0);
      }
    else
      {
      op->vtkGlyph3DMapper::SetScaleArray(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkGlyph3DMapper_SetScaleArray_Methods[] = {
  {NULL, PyvtkGlyph3DMapper_SetScaleArray_s1, METH_VARARGS,
   (char*)"@z"},
  {NULL, PyvtkGlyph3DMapper_SetScaleArray_s2, METH_VARARGS,
   (char*)"@i"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkGlyph3DMapper_SetScaleArray(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkGlyph3DMapper_SetScaleArray_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetScaleArray");
  return NULL;
}



static PyObject *
PyvtkGlyph3DMapper_SetSourceIndexArray_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSourceIndexArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3DMapper *op = static_cast<vtkGlyph3DMapper *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetSourceIndexArray(temp0);
      }
    else
      {
      op->vtkGlyph3DMapper::SetSourceIndexArray(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkGlyph3DMapper_SetSourceIndexArray_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSourceIndexArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3DMapper *op = static_cast<vtkGlyph3DMapper *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetSourceIndexArray(temp0);
      }
    else
      {
      op->vtkGlyph3DMapper::SetSourceIndexArray(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkGlyph3DMapper_SetSourceIndexArray_Methods[] = {
  {NULL, PyvtkGlyph3DMapper_SetSourceIndexArray_s1, METH_VARARGS,
   (char*)"@z"},
  {NULL, PyvtkGlyph3DMapper_SetSourceIndexArray_s2, METH_VARARGS,
   (char*)"@i"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkGlyph3DMapper_SetSourceIndexArray(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkGlyph3DMapper_SetSourceIndexArray_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetSourceIndexArray");
  return NULL;
}



static PyObject *
PyvtkGlyph3DMapper_SetSelectionIdArray_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSelectionIdArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3DMapper *op = static_cast<vtkGlyph3DMapper *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetSelectionIdArray(temp0);
      }
    else
      {
      op->vtkGlyph3DMapper::SetSelectionIdArray(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkGlyph3DMapper_SetSelectionIdArray_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSelectionIdArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3DMapper *op = static_cast<vtkGlyph3DMapper *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetSelectionIdArray(temp0);
      }
    else
      {
      op->vtkGlyph3DMapper::SetSelectionIdArray(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkGlyph3DMapper_SetSelectionIdArray_Methods[] = {
  {NULL, PyvtkGlyph3DMapper_SetSelectionIdArray_s1, METH_VARARGS,
   (char*)"@z"},
  {NULL, PyvtkGlyph3DMapper_SetSelectionIdArray_s2, METH_VARARGS,
   (char*)"@i"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkGlyph3DMapper_SetSelectionIdArray(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkGlyph3DMapper_SetSelectionIdArray_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetSelectionIdArray");
  return NULL;
}



static PyObject *
PyvtkGlyph3DMapper_SetSelectionColorId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSelectionColorId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3DMapper *op = static_cast<vtkGlyph3DMapper *>(vp);

  unsigned int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetSelectionColorId(temp0);
      }
    else
      {
      op->vtkGlyph3DMapper::SetSelectionColorId(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGlyph3DMapper_GetSelectionColorId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelectionColorId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3DMapper *op = static_cast<vtkGlyph3DMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned int tempr = (ap.IsBound() ?
      op->GetSelectionColorId() :
      op->vtkGlyph3DMapper::GetSelectionColorId());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGlyph3DMapper_SetSelectMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSelectMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3DMapper *op = static_cast<vtkGlyph3DMapper *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetSelectMode(temp0);
      }
    else
      {
      op->vtkGlyph3DMapper::SetSelectMode(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGlyph3DMapper_GetSupportsSelection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSupportsSelection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3DMapper *op = static_cast<vtkGlyph3DMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetSupportsSelection() :
      op->vtkGlyph3DMapper::GetSupportsSelection());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkGlyph3DMapper_Methods[] = {
  {(char*)"GetClassName", PyvtkGlyph3DMapper_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkGlyph3DMapper_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkGlyph3DMapper_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkGlyph3DMapper\nC++: vtkGlyph3DMapper *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkGlyph3DMapper_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkGlyph3DMapper\nC++: vtkGlyph3DMapper *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetSourceConnection", PyvtkGlyph3DMapper_SetSourceConnection, METH_VARARGS,
   (char*)"V.SetSourceConnection(int, vtkAlgorithmOutput)\nC++: void SetSourceConnection(int idx,\n    vtkAlgorithmOutput *algOutput)\nV.SetSourceConnection(vtkAlgorithmOutput)\nC++: void SetSourceConnection(vtkAlgorithmOutput *algOutput)\n\nSpecify a source object at a specified table location. New style.\nSource connection is stored in port 1. This method is equivalent\nto SetInputConnection(1, id, outputPort).\n"},
  {(char*)"SetInputData", PyvtkGlyph3DMapper_SetInputData, METH_VARARGS,
   (char*)"V.SetInputData(vtkDataObject)\nC++: void SetInputData(vtkDataObject *)\n\nAssign a data object as input. Note that this method does not\nestablish a pipeline connection. Use SetInputConnection() to\nsetup a pipeline connection.\n"},
  {(char*)"SetSourceData", PyvtkGlyph3DMapper_SetSourceData, METH_VARARGS,
   (char*)"V.SetSourceData(int, vtkPolyData)\nC++: void SetSourceData(int idx, vtkPolyData *pd)\nV.SetSourceData(vtkPolyData)\nC++: void SetSourceData(vtkPolyData *pd)\n\nSpecify a source object at a specified table location.\n"},
  {(char*)"GetSource", PyvtkGlyph3DMapper_GetSource, METH_VARARGS,
   (char*)"V.GetSource(int) -> vtkPolyData\nC++: vtkPolyData *GetSource(int idx=0)\n\nGet a pointer to a source object at a specified table location.\n"},
  {(char*)"SetScaling", PyvtkGlyph3DMapper_SetScaling, METH_VARARGS,
   (char*)"V.SetScaling(bool)\nC++: void SetScaling(bool a)\n\nTurn on/off scaling of source geometry. When turned on,\nScaleFactor controls the scale applied. To scale with some data\narray, ScaleMode should be set accordingly.\n"},
  {(char*)"ScalingOn", PyvtkGlyph3DMapper_ScalingOn, METH_VARARGS,
   (char*)"V.ScalingOn()\nC++: void ScalingOn()\n\nTurn on/off scaling of source geometry. When turned on,\nScaleFactor controls the scale applied. To scale with some data\narray, ScaleMode should be set accordingly.\n"},
  {(char*)"ScalingOff", PyvtkGlyph3DMapper_ScalingOff, METH_VARARGS,
   (char*)"V.ScalingOff()\nC++: void ScalingOff()\n\nTurn on/off scaling of source geometry. When turned on,\nScaleFactor controls the scale applied. To scale with some data\narray, ScaleMode should be set accordingly.\n"},
  {(char*)"GetScaling", PyvtkGlyph3DMapper_GetScaling, METH_VARARGS,
   (char*)"V.GetScaling() -> bool\nC++: bool GetScaling()\n\nTurn on/off scaling of source geometry. When turned on,\nScaleFactor controls the scale applied. To scale with some data\narray, ScaleMode should be set accordingly.\n"},
  {(char*)"SetScaleMode", PyvtkGlyph3DMapper_SetScaleMode, METH_VARARGS,
   (char*)"V.SetScaleMode(int)\nC++: void SetScaleMode(int a)\n\nEither scale by individual components (SCALE_BY_COMPONENTS) or\nmagnitude (SCALE_BY_MAGNITUDE) of the chosen array to SCALE with\nor disable scaling using data array all together\n(NO_DATA_SCALING). Default is NO_DATA_SCALING.\n"},
  {(char*)"GetScaleMode", PyvtkGlyph3DMapper_GetScaleMode, METH_VARARGS,
   (char*)"V.GetScaleMode() -> int\nC++: int GetScaleMode()\n\nEither scale by individual components (SCALE_BY_COMPONENTS) or\nmagnitude (SCALE_BY_MAGNITUDE) of the chosen array to SCALE with\nor disable scaling using data array all together\n(NO_DATA_SCALING). Default is NO_DATA_SCALING.\n"},
  {(char*)"SetScaleFactor", PyvtkGlyph3DMapper_SetScaleFactor, METH_VARARGS,
   (char*)"V.SetScaleFactor(float)\nC++: void SetScaleFactor(double a)\n\nSpecify scale factor to scale object by. This is used only when\nScaling is On.\n"},
  {(char*)"GetScaleFactor", PyvtkGlyph3DMapper_GetScaleFactor, METH_VARARGS,
   (char*)"V.GetScaleFactor() -> float\nC++: double GetScaleFactor()\n\nSpecify scale factor to scale object by. This is used only when\nScaling is On.\n"},
  {(char*)"SetScaleModeToScaleByMagnitude", PyvtkGlyph3DMapper_SetScaleModeToScaleByMagnitude, METH_VARARGS,
   (char*)"V.SetScaleModeToScaleByMagnitude()\nC++: void SetScaleModeToScaleByMagnitude()\n\n"},
  {(char*)"SetScaleModeToScaleByVectorComponents", PyvtkGlyph3DMapper_SetScaleModeToScaleByVectorComponents, METH_VARARGS,
   (char*)"V.SetScaleModeToScaleByVectorComponents()\nC++: void SetScaleModeToScaleByVectorComponents()\n\n"},
  {(char*)"SetScaleModeToNoDataScaling", PyvtkGlyph3DMapper_SetScaleModeToNoDataScaling, METH_VARARGS,
   (char*)"V.SetScaleModeToNoDataScaling()\nC++: void SetScaleModeToNoDataScaling()\n\n"},
  {(char*)"GetScaleModeAsString", PyvtkGlyph3DMapper_GetScaleModeAsString, METH_VARARGS,
   (char*)"V.GetScaleModeAsString() -> string\nC++: const char *GetScaleModeAsString()\n\n"},
  {(char*)"SetRange", PyvtkGlyph3DMapper_SetRange, METH_VARARGS,
   (char*)"V.SetRange(float, float)\nC++: void SetRange(double, double)\nV.SetRange((float, float))\nC++: void SetRange(double a[2])\n\n"},
  {(char*)"GetRange", PyvtkGlyph3DMapper_GetRange, METH_VARARGS,
   (char*)"V.GetRange() -> (float, float)\nC++: double *GetRange()\n\nSpecify range to map scalar values into.\n"},
  {(char*)"SetOrient", PyvtkGlyph3DMapper_SetOrient, METH_VARARGS,
   (char*)"V.SetOrient(bool)\nC++: void SetOrient(bool a)\n\nTurn on/off orienting of input geometry. When turned on, the\norientation array specified using SetOrientationArray() will be\nused.\n"},
  {(char*)"GetOrient", PyvtkGlyph3DMapper_GetOrient, METH_VARARGS,
   (char*)"V.GetOrient() -> bool\nC++: bool GetOrient()\n\nTurn on/off orienting of input geometry. When turned on, the\norientation array specified using SetOrientationArray() will be\nused.\n"},
  {(char*)"OrientOn", PyvtkGlyph3DMapper_OrientOn, METH_VARARGS,
   (char*)"V.OrientOn()\nC++: void OrientOn()\n\nTurn on/off orienting of input geometry. When turned on, the\norientation array specified using SetOrientationArray() will be\nused.\n"},
  {(char*)"OrientOff", PyvtkGlyph3DMapper_OrientOff, METH_VARARGS,
   (char*)"V.OrientOff()\nC++: void OrientOff()\n\nTurn on/off orienting of input geometry. When turned on, the\norientation array specified using SetOrientationArray() will be\nused.\n"},
  {(char*)"SetOrientationMode", PyvtkGlyph3DMapper_SetOrientationMode, METH_VARARGS,
   (char*)"V.SetOrientationMode(int)\nC++: void SetOrientationMode(int)\n\nOrientation mode indicates if the OrientationArray provides the\ndirection vector for the orientation or the rotations around each\naxes. Default is DIRECTION\n"},
  {(char*)"GetOrientationModeMinValue", PyvtkGlyph3DMapper_GetOrientationModeMinValue, METH_VARARGS,
   (char*)"V.GetOrientationModeMinValue() -> int\nC++: int GetOrientationModeMinValue()\n\nOrientation mode indicates if the OrientationArray provides the\ndirection vector for the orientation or the rotations around each\naxes. Default is DIRECTION\n"},
  {(char*)"GetOrientationModeMaxValue", PyvtkGlyph3DMapper_GetOrientationModeMaxValue, METH_VARARGS,
   (char*)"V.GetOrientationModeMaxValue() -> int\nC++: int GetOrientationModeMaxValue()\n\nOrientation mode indicates if the OrientationArray provides the\ndirection vector for the orientation or the rotations around each\naxes. Default is DIRECTION\n"},
  {(char*)"GetOrientationMode", PyvtkGlyph3DMapper_GetOrientationMode, METH_VARARGS,
   (char*)"V.GetOrientationMode() -> int\nC++: int GetOrientationMode()\n\nOrientation mode indicates if the OrientationArray provides the\ndirection vector for the orientation or the rotations around each\naxes. Default is DIRECTION\n"},
  {(char*)"SetOrientationModeToDirection", PyvtkGlyph3DMapper_SetOrientationModeToDirection, METH_VARARGS,
   (char*)"V.SetOrientationModeToDirection()\nC++: void SetOrientationModeToDirection()\n\nOrientation mode indicates if the OrientationArray provides the\ndirection vector for the orientation or the rotations around each\naxes. Default is DIRECTION\n"},
  {(char*)"SetOrientationModeToRotation", PyvtkGlyph3DMapper_SetOrientationModeToRotation, METH_VARARGS,
   (char*)"V.SetOrientationModeToRotation()\nC++: void SetOrientationModeToRotation()\n\nOrientation mode indicates if the OrientationArray provides the\ndirection vector for the orientation or the rotations around each\naxes. Default is DIRECTION\n"},
  {(char*)"GetOrientationModeAsString", PyvtkGlyph3DMapper_GetOrientationModeAsString, METH_VARARGS,
   (char*)"V.GetOrientationModeAsString() -> string\nC++: const char *GetOrientationModeAsString()\n\nOrientation mode indicates if the OrientationArray provides the\ndirection vector for the orientation or the rotations around each\naxes. Default is DIRECTION\n"},
  {(char*)"SetClamping", PyvtkGlyph3DMapper_SetClamping, METH_VARARGS,
   (char*)"V.SetClamping(bool)\nC++: void SetClamping(bool a)\n\nTurn on/off clamping of data values to scale with to the\nspecified range.\n"},
  {(char*)"GetClamping", PyvtkGlyph3DMapper_GetClamping, METH_VARARGS,
   (char*)"V.GetClamping() -> bool\nC++: bool GetClamping()\n\nTurn on/off clamping of data values to scale with to the\nspecified range.\n"},
  {(char*)"ClampingOn", PyvtkGlyph3DMapper_ClampingOn, METH_VARARGS,
   (char*)"V.ClampingOn()\nC++: void ClampingOn()\n\nTurn on/off clamping of data values to scale with to the\nspecified range.\n"},
  {(char*)"ClampingOff", PyvtkGlyph3DMapper_ClampingOff, METH_VARARGS,
   (char*)"V.ClampingOff()\nC++: void ClampingOff()\n\nTurn on/off clamping of data values to scale with to the\nspecified range.\n"},
  {(char*)"SetSourceIndexing", PyvtkGlyph3DMapper_SetSourceIndexing, METH_VARARGS,
   (char*)"V.SetSourceIndexing(bool)\nC++: void SetSourceIndexing(bool a)\n\nEnable/disable indexing into table of the glyph sources. When\ndisabled, only the 1st source input will be used to generate the\nglyph. Otherwise the source index array will be used to select\nthe glyph source. The source index array can be specified using\nSetSourceIndexArray().\n"},
  {(char*)"GetSourceIndexing", PyvtkGlyph3DMapper_GetSourceIndexing, METH_VARARGS,
   (char*)"V.GetSourceIndexing() -> bool\nC++: bool GetSourceIndexing()\n\nEnable/disable indexing into table of the glyph sources. When\ndisabled, only the 1st source input will be used to generate the\nglyph. Otherwise the source index array will be used to select\nthe glyph source. The source index array can be specified using\nSetSourceIndexArray().\n"},
  {(char*)"SourceIndexingOn", PyvtkGlyph3DMapper_SourceIndexingOn, METH_VARARGS,
   (char*)"V.SourceIndexingOn()\nC++: void SourceIndexingOn()\n\nEnable/disable indexing into table of the glyph sources. When\ndisabled, only the 1st source input will be used to generate the\nglyph. Otherwise the source index array will be used to select\nthe glyph source. The source index array can be specified using\nSetSourceIndexArray().\n"},
  {(char*)"SourceIndexingOff", PyvtkGlyph3DMapper_SourceIndexingOff, METH_VARARGS,
   (char*)"V.SourceIndexingOff()\nC++: void SourceIndexingOff()\n\nEnable/disable indexing into table of the glyph sources. When\ndisabled, only the 1st source input will be used to generate the\nglyph. Otherwise the source index array will be used to select\nthe glyph source. The source index array can be specified using\nSetSourceIndexArray().\n"},
  {(char*)"SetUseSelectionIds", PyvtkGlyph3DMapper_SetUseSelectionIds, METH_VARARGS,
   (char*)"V.SetUseSelectionIds(bool)\nC++: void SetUseSelectionIds(bool a)\n\nTurn on/off custom selection ids. If enabled, the id values set\nwith SetSelectionIdArray are returned from pick events.\n"},
  {(char*)"UseSelectionIdsOn", PyvtkGlyph3DMapper_UseSelectionIdsOn, METH_VARARGS,
   (char*)"V.UseSelectionIdsOn()\nC++: void UseSelectionIdsOn()\n\nTurn on/off custom selection ids. If enabled, the id values set\nwith SetSelectionIdArray are returned from pick events.\n"},
  {(char*)"UseSelectionIdsOff", PyvtkGlyph3DMapper_UseSelectionIdsOff, METH_VARARGS,
   (char*)"V.UseSelectionIdsOff()\nC++: void UseSelectionIdsOff()\n\nTurn on/off custom selection ids. If enabled, the id values set\nwith SetSelectionIdArray are returned from pick events.\n"},
  {(char*)"GetUseSelectionIds", PyvtkGlyph3DMapper_GetUseSelectionIds, METH_VARARGS,
   (char*)"V.GetUseSelectionIds() -> bool\nC++: bool GetUseSelectionIds()\n\nTurn on/off custom selection ids. If enabled, the id values set\nwith SetSelectionIdArray are returned from pick events.\n"},
  {(char*)"GetBounds", PyvtkGlyph3DMapper_GetBounds, METH_VARARGS,
   (char*)"V.GetBounds() -> (float, ...)\nC++: virtual double *GetBounds()\nV.GetBounds([float, float, float, float, float, float])\nC++: virtual void GetBounds(double bounds[6])\n\nRedefined to take into account the bounds of the scaled glyphs.\n"},
  {(char*)"Render", PyvtkGlyph3DMapper_Render, METH_VARARGS,
   (char*)"V.Render(vtkRenderer, vtkActor)\nC++: virtual void Render(vtkRenderer *ren, vtkActor *act)\n\nAll the work is done is derived classes.\n"},
  {(char*)"SetNestedDisplayLists", PyvtkGlyph3DMapper_SetNestedDisplayLists, METH_VARARGS,
   (char*)"V.SetNestedDisplayLists(bool)\nC++: void SetNestedDisplayLists(bool a)\n\nIf immediate mode is off, if NestedDisplayLists is false, only\nthe mappers of each glyph use display lists. If true, in\naddition, matrices transforms and color per glyph are also in a\nparent display list. Not relevant if immediate mode is on. For\ndebugging/profiling purpose. Initial value is true.\n"},
  {(char*)"GetNestedDisplayLists", PyvtkGlyph3DMapper_GetNestedDisplayLists, METH_VARARGS,
   (char*)"V.GetNestedDisplayLists() -> bool\nC++: bool GetNestedDisplayLists()\n\nIf immediate mode is off, if NestedDisplayLists is false, only\nthe mappers of each glyph use display lists. If true, in\naddition, matrices transforms and color per glyph are also in a\nparent display list. Not relevant if immediate mode is on. For\ndebugging/profiling purpose. Initial value is true.\n"},
  {(char*)"NestedDisplayListsOn", PyvtkGlyph3DMapper_NestedDisplayListsOn, METH_VARARGS,
   (char*)"V.NestedDisplayListsOn()\nC++: void NestedDisplayListsOn()\n\nIf immediate mode is off, if NestedDisplayLists is false, only\nthe mappers of each glyph use display lists. If true, in\naddition, matrices transforms and color per glyph are also in a\nparent display list. Not relevant if immediate mode is on. For\ndebugging/profiling purpose. Initial value is true.\n"},
  {(char*)"NestedDisplayListsOff", PyvtkGlyph3DMapper_NestedDisplayListsOff, METH_VARARGS,
   (char*)"V.NestedDisplayListsOff()\nC++: void NestedDisplayListsOff()\n\nIf immediate mode is off, if NestedDisplayLists is false, only\nthe mappers of each glyph use display lists. If true, in\naddition, matrices transforms and color per glyph are also in a\nparent display list. Not relevant if immediate mode is on. For\ndebugging/profiling purpose. Initial value is true.\n"},
  {(char*)"SetMasking", PyvtkGlyph3DMapper_SetMasking, METH_VARARGS,
   (char*)"V.SetMasking(bool)\nC++: void SetMasking(bool a)\n\nTells the mapper to skip glyphing input points that haves false\nvalues in the mask array. If there is no mask array (id access\nmode is set and there is no such id, or array name access mode is\nset and the there is no such name), masking is silently ignored.\nA mask array is a vtkBitArray with only one component. Initial\nvalue is false.\n"},
  {(char*)"GetMasking", PyvtkGlyph3DMapper_GetMasking, METH_VARARGS,
   (char*)"V.GetMasking() -> bool\nC++: bool GetMasking()\n\nTells the mapper to skip glyphing input points that haves false\nvalues in the mask array. If there is no mask array (id access\nmode is set and there is no such id, or array name access mode is\nset and the there is no such name), masking is silently ignored.\nA mask array is a vtkBitArray with only one component. Initial\nvalue is false.\n"},
  {(char*)"MaskingOn", PyvtkGlyph3DMapper_MaskingOn, METH_VARARGS,
   (char*)"V.MaskingOn()\nC++: void MaskingOn()\n\nTells the mapper to skip glyphing input points that haves false\nvalues in the mask array. If there is no mask array (id access\nmode is set and there is no such id, or array name access mode is\nset and the there is no such name), masking is silently ignored.\nA mask array is a vtkBitArray with only one component. Initial\nvalue is false.\n"},
  {(char*)"MaskingOff", PyvtkGlyph3DMapper_MaskingOff, METH_VARARGS,
   (char*)"V.MaskingOff()\nC++: void MaskingOff()\n\nTells the mapper to skip glyphing input points that haves false\nvalues in the mask array. If there is no mask array (id access\nmode is set and there is no such id, or array name access mode is\nset and the there is no such name), masking is silently ignored.\nA mask array is a vtkBitArray with only one component. Initial\nvalue is false.\n"},
  {(char*)"SetMaskArray", PyvtkGlyph3DMapper_SetMaskArray, METH_VARARGS,
   (char*)"V.SetMaskArray(string)\nC++: void SetMaskArray(const char *maskarrayname)\nV.SetMaskArray(int)\nC++: void SetMaskArray(int fieldAttributeType)\n\nSet the name of the point array to use as a mask for generating\nthe glyphs. This is a convenience method. The same effect can be\nachieved by using SetInputArrayToProcess(vtkGlyph3DMapper::MASK,\n0, 0,\n   vtkDataObject::FIELD_ASSOCIATION_POINTS, maskarrayname)\n"},
  {(char*)"SetOrientationArray", PyvtkGlyph3DMapper_SetOrientationArray, METH_VARARGS,
   (char*)"V.SetOrientationArray(string)\nC++: void SetOrientationArray(const char *orientationarrayname)\nV.SetOrientationArray(int)\nC++: void SetOrientationArray(int fieldAttributeType)\n\nTells the mapper to use an orientation array if Orient is true.\nAn orientation array is a vtkDataArray with 3 components. The\nfirst component is the angle of rotation along the X axis. The\nsecond component is the angle of rotation along the Y axis. The\nthird component is the angle of rotation along the Z axis.\nOrientation is specified in X,Y,Z order but the rotations are\nperformed in Z,X an Y. This definition is compliant with\nSetOrientation method on vtkProp3D. By using vector or normal\nthere is a degree of freedom or rotation left (underconstrained).\nWith the orientation array, there is no degree of freedom left.\nThis is convenience method. The same effect can be achieved by\nusing SetInputArrayToProcess(vtkGlyph3DMapper::ORIENTATION, 0, 0,\n   vtkDataObject::FIELD_ASSOCIATION_POINTS,\norientationarrayname);\n"},
  {(char*)"SetScaleArray", PyvtkGlyph3DMapper_SetScaleArray, METH_VARARGS,
   (char*)"V.SetScaleArray(string)\nC++: void SetScaleArray(const char *scalarsarrayname)\nV.SetScaleArray(int)\nC++: void SetScaleArray(int fieldAttributeType)\n\nConvenience method to set the array to scale with. This is same\nas calling SetInputArrayToProcess(vtkGlyph3DMapper::SCALE, 0, 0,\n   vtkDataObject::FIELD_ASSOCIATION_POINTS, scalarsarrayname).\n"},
  {(char*)"SetSourceIndexArray", PyvtkGlyph3DMapper_SetSourceIndexArray, METH_VARARGS,
   (char*)"V.SetSourceIndexArray(string)\nC++: void SetSourceIndexArray(const char *arrayname)\nV.SetSourceIndexArray(int)\nC++: void SetSourceIndexArray(int fieldAttributeType)\n\nConvenience method to set the array to use as index within the\nsources. This is same as calling\nSetInputArrayToProcess(vtkGlyph3DMapper::SOURCE_INDEX, 0, 0,\n   vtkDataObject::FIELD_ASSOCIATION_POINTS, arrayname).\n"},
  {(char*)"SetSelectionIdArray", PyvtkGlyph3DMapper_SetSelectionIdArray, METH_VARARGS,
   (char*)"V.SetSelectionIdArray(string)\nC++: void SetSelectionIdArray(const char *selectionIdArrayName)\nV.SetSelectionIdArray(int)\nC++: void SetSelectionIdArray(int fieldAttributeType)\n\nConvenience method to set the array used for selection IDs. This\nis same as calling\nSetInputArrayToProcess(vtkGlyph3DMapper::SELECTIONID, 0, 0,\n   vtkDataObject::FIELD_ASSOCIATION_POINTS,\nselectionidarrayname).\n\nIf no selection id array is specified, the index of the glyph\npoint is used.\n"},
  {(char*)"SetSelectionColorId", PyvtkGlyph3DMapper_SetSelectionColorId, METH_VARARGS,
   (char*)"V.SetSelectionColorId(int)\nC++: void SetSelectionColorId(unsigned int a)\n\nFor selection by color id mode (not for end-user, called by\nvtkGlyphSelectionRenderMode). 0 is reserved for miss. it has to\nstart at 1. Initial value is 1.\n"},
  {(char*)"GetSelectionColorId", PyvtkGlyph3DMapper_GetSelectionColorId, METH_VARARGS,
   (char*)"V.GetSelectionColorId() -> int\nC++: unsigned int GetSelectionColorId()\n\nFor selection by color id mode (not for end-user, called by\nvtkGlyphSelectionRenderMode). 0 is reserved for miss. it has to\nstart at 1. Initial value is 1.\n"},
  {(char*)"SetSelectMode", PyvtkGlyph3DMapper_SetSelectMode, METH_VARARGS,
   (char*)"V.SetSelectMode(int)\nC++: void SetSelectMode(int a)\n\nCalled by vtkGlyphSelectionRenderMode.\n"},
  {(char*)"GetSupportsSelection", PyvtkGlyph3DMapper_GetSupportsSelection, METH_VARARGS,
   (char*)"V.GetSupportsSelection() -> bool\nC++: virtual bool GetSupportsSelection()\n\nWARNING: INTERNAL METHOD - NOT INTENDED FOR GENERAL USE DO NOT\nUSE THIS METHOD OUTSIDE OF THE RENDERING PROCESS Used by\nvtkHardwareSelector to determine if the prop supports hardware\nselection.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkGlyph3DMapper_StaticNew()
{
  return vtkGlyph3DMapper::New();
}

PyObject *PyVTKClass_vtkGlyph3DMapperNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkGlyph3DMapper_StaticNew,
    PyvtkGlyph3DMapper_Methods,
    "vtkGlyph3DMapper", modulename,
    NULL, NULL,
    PyvtkGlyph3DMapper_Doc(),
    PyVTKClass_vtkMapperNew(modulename));

  if (cls)
    {
    PyObject *d = PyVTKClass_GetDict(cls);
    PyObject *o;

    PyType_Ready(&PyvtkGlyph3DMapper_ArrayIndexes_Type);
    PyvtkGlyph3DMapper_ArrayIndexes_Type.tp_new = NULL;

    o = (PyObject *)&PyvtkGlyph3DMapper_ArrayIndexes_Type;
    if (o && PyDict_SetItemString(d, (char *)"ArrayIndexes", o) != 0)
      {
      Py_DECREF(o);
      }

    PyType_Ready(&PyvtkGlyph3DMapper_ScaleModes_Type);
    PyvtkGlyph3DMapper_ScaleModes_Type.tp_new = NULL;

    o = (PyObject *)&PyvtkGlyph3DMapper_ScaleModes_Type;
    if (o && PyDict_SetItemString(d, (char *)"ScaleModes", o) != 0)
      {
      Py_DECREF(o);
      }

    PyType_Ready(&PyvtkGlyph3DMapper_OrientationModes_Type);
    PyvtkGlyph3DMapper_OrientationModes_Type.tp_new = NULL;

    o = (PyObject *)&PyvtkGlyph3DMapper_OrientationModes_Type;
    if (o && PyDict_SetItemString(d, (char *)"OrientationModes", o) != 0)
      {
      Py_DECREF(o);
      }

    for (int c = 0; c < 5; c++)
      {
      typedef vtkGlyph3DMapper::ArrayIndexes cxx_enum_type;

      static const struct { const char *name; cxx_enum_type value; }
        constants[5] = {
          { "SCALE", vtkGlyph3DMapper::SCALE },
          { "SOURCE_INDEX", vtkGlyph3DMapper::SOURCE_INDEX },
          { "MASK", vtkGlyph3DMapper::MASK },
          { "ORIENTATION", vtkGlyph3DMapper::ORIENTATION },
          { "SELECTIONID", vtkGlyph3DMapper::SELECTIONID },
        };

      o = PyvtkGlyph3DMapper_ArrayIndexes_FromEnum(constants[c].value);
      if (o)
        {
        PyDict_SetItemString(d, (char *)constants[c].name, o);
        Py_DECREF(o);
        }
      }

    for (int c = 0; c < 3; c++)
      {
      typedef vtkGlyph3DMapper::ScaleModes cxx_enum_type;

      static const struct { const char *name; cxx_enum_type value; }
        constants[3] = {
          { "NO_DATA_SCALING", vtkGlyph3DMapper::NO_DATA_SCALING },
          { "SCALE_BY_MAGNITUDE", vtkGlyph3DMapper::SCALE_BY_MAGNITUDE },
          { "SCALE_BY_COMPONENTS", vtkGlyph3DMapper::SCALE_BY_COMPONENTS },
        };

      o = PyvtkGlyph3DMapper_ScaleModes_FromEnum(constants[c].value);
      if (o)
        {
        PyDict_SetItemString(d, (char *)constants[c].name, o);
        Py_DECREF(o);
        }
      }

    for (int c = 0; c < 2; c++)
      {
      typedef vtkGlyph3DMapper::OrientationModes cxx_enum_type;

      static const struct { const char *name; cxx_enum_type value; }
        constants[2] = {
          { "DIRECTION", vtkGlyph3DMapper::DIRECTION },
          { "ROTATION", vtkGlyph3DMapper::ROTATION },
        };

      o = PyvtkGlyph3DMapper_OrientationModes_FromEnum(constants[c].value);
      if (o)
        {
        PyDict_SetItemString(d, (char *)constants[c].name, o);
        Py_DECREF(o);
        }
      }

    }

  return cls;
}

const char **PyvtkGlyph3DMapper_Doc()
{
  static const char *docstring[] = {
    "vtkGlyph3DMapper - vtkGlyph3D on the GPU.\n\n",
    "Superclass: vtkMapper\n\n",
    "Do the same job than vtkGlyph3D but on the GPU. For this reason, it\nis a mapper not a vtkPolyDataAlgorithm. Also, some methods of\nvtkGlyph3D don't make sense in vtkGlyph3DMapper: GeneratePointIds,\nold-style SetSource, PointIdsName, IsPointVisible.\n\nImplementation:\n\nSee Also:\n\nvtkGlyph3D\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkGlyph3DMapper(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkGlyph3DMapperNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkGlyph3DMapper", o) != 0)
    {
    Py_DECREF(o);
    }

}

