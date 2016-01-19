// python wrapper for vtkScatterPlotMapper
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkScatterPlotMapper.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkScatterPlotMapper(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkScatterPlotMapperNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkCompositePolyDataMapper2New
extern "C" { PyObject *PyVTKClass_vtkCompositePolyDataMapper2New(const char *); }
#define DECLARED_PyVTKClass_vtkCompositePolyDataMapper2New
#endif

static const char **PyvtkScatterPlotMapper_Doc();

#ifndef DECLARED_PyvtkScatterPlotMapper_ArrayIndex_Type
extern VTK_PYTHON_EXPORT PyTypeObject PyvtkScatterPlotMapper_ArrayIndex_Type;
#define DECLARED_PyvtkScatterPlotMapper_ArrayIndex_Type
#endif

PyTypeObject PyvtkScatterPlotMapper_ArrayIndex_Type = {
  PyObject_HEAD_INIT(&PyType_Type)
  0,
  (char*)"ArrayIndex", // tp_name
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

PyObject *PyvtkScatterPlotMapper_ArrayIndex_FromEnum(int val)
{
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkScatterPlotMapper_ArrayIndex_Type);
  self->ob_ival = val;
  return (PyObject *)self;
}

#ifndef DECLARED_PyvtkScatterPlotMapper_GlyphDrawingMode_Type
extern VTK_PYTHON_EXPORT PyTypeObject PyvtkScatterPlotMapper_GlyphDrawingMode_Type;
#define DECLARED_PyvtkScatterPlotMapper_GlyphDrawingMode_Type
#endif

PyTypeObject PyvtkScatterPlotMapper_GlyphDrawingMode_Type = {
  PyObject_HEAD_INIT(&PyType_Type)
  0,
  (char*)"GlyphDrawingMode", // tp_name
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

PyObject *PyvtkScatterPlotMapper_GlyphDrawingMode_FromEnum(int val)
{
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkScatterPlotMapper_GlyphDrawingMode_Type);
  self->ob_ival = val;
  return (PyObject *)self;
}

#ifndef DECLARED_PyvtkScatterPlotMapper_ScalingArrayModes_Type
extern VTK_PYTHON_EXPORT PyTypeObject PyvtkScatterPlotMapper_ScalingArrayModes_Type;
#define DECLARED_PyvtkScatterPlotMapper_ScalingArrayModes_Type
#endif

PyTypeObject PyvtkScatterPlotMapper_ScalingArrayModes_Type = {
  PyObject_HEAD_INIT(&PyType_Type)
  0,
  (char*)"ScalingArrayModes", // tp_name
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

PyObject *PyvtkScatterPlotMapper_ScalingArrayModes_FromEnum(int val)
{
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkScatterPlotMapper_ScalingArrayModes_Type);
  self->ob_ival = val;
  return (PyObject *)self;
}

#ifndef DECLARED_PyvtkScatterPlotMapper_ScaleModes_Type
extern VTK_PYTHON_EXPORT PyTypeObject PyvtkScatterPlotMapper_ScaleModes_Type;
#define DECLARED_PyvtkScatterPlotMapper_ScaleModes_Type
#endif

PyTypeObject PyvtkScatterPlotMapper_ScaleModes_Type = {
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

PyObject *PyvtkScatterPlotMapper_ScaleModes_FromEnum(int val)
{
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkScatterPlotMapper_ScaleModes_Type);
  self->ob_ival = val;
  return (PyObject *)self;
}

#ifndef DECLARED_PyvtkScatterPlotMapper_OrientationModes_Type
extern VTK_PYTHON_EXPORT PyTypeObject PyvtkScatterPlotMapper_OrientationModes_Type;
#define DECLARED_PyvtkScatterPlotMapper_OrientationModes_Type
#endif

PyTypeObject PyvtkScatterPlotMapper_OrientationModes_Type = {
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

PyObject *PyvtkScatterPlotMapper_OrientationModes_FromEnum(int val)
{
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkScatterPlotMapper_OrientationModes_Type);
  self->ob_ival = val;
  return (PyObject *)self;
}


static PyObject *
PyvtkScatterPlotMapper_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScatterPlotMapper *op = static_cast<vtkScatterPlotMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkScatterPlotMapper::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkScatterPlotMapper_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScatterPlotMapper *op = static_cast<vtkScatterPlotMapper *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkScatterPlotMapper::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkScatterPlotMapper_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScatterPlotMapper *op = static_cast<vtkScatterPlotMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkScatterPlotMapper *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkScatterPlotMapper::NewInstance());

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
PyvtkScatterPlotMapper_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkScatterPlotMapper *tempr = vtkScatterPlotMapper::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkScatterPlotMapper_FIELD_ACTIVE_COMPONENT(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "FIELD_ACTIVE_COMPONENT");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkInformationIntegerKey *tempr = vtkScatterPlotMapper::FIELD_ACTIVE_COMPONENT();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkScatterPlotMapper_SetArrayByFieldName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetArrayByFieldName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScatterPlotMapper *op = static_cast<vtkScatterPlotMapper *>(vp);

  typedef vtkScatterPlotMapper::ArrayIndex temp0_type;
  temp0_type temp0;
  char *temp1 = NULL;
  int temp2;
  int temp3 = 0;
  int temp4 = 0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3, 5) &&
      ap.GetEnumValue(temp0, &PyvtkScatterPlotMapper_ArrayIndex_Type) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      (ap.NoArgsLeft() || ap.GetValue(temp3)) &&
      (ap.NoArgsLeft() || ap.GetValue(temp4)))
    {
    if (ap.IsBound())
      {
      op->SetArrayByFieldName(temp0, temp1, temp2, temp3, temp4);
      }
    else
      {
      op->vtkScatterPlotMapper::SetArrayByFieldName(temp0, temp1, temp2, temp3, temp4);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkScatterPlotMapper_SetArrayByFieldIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetArrayByFieldIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScatterPlotMapper *op = static_cast<vtkScatterPlotMapper *>(vp);

  typedef vtkScatterPlotMapper::ArrayIndex temp0_type;
  temp0_type temp0;
  int temp1;
  int temp2;
  int temp3 = 0;
  int temp4 = 0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3, 5) &&
      ap.GetEnumValue(temp0, &PyvtkScatterPlotMapper_ArrayIndex_Type) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      (ap.NoArgsLeft() || ap.GetValue(temp3)) &&
      (ap.NoArgsLeft() || ap.GetValue(temp4)))
    {
    if (ap.IsBound())
      {
      op->SetArrayByFieldIndex(temp0, temp1, temp2, temp3, temp4);
      }
    else
      {
      op->vtkScatterPlotMapper::SetArrayByFieldIndex(temp0, temp1, temp2, temp3, temp4);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkScatterPlotMapper_SetArrayByFieldType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetArrayByFieldType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScatterPlotMapper *op = static_cast<vtkScatterPlotMapper *>(vp);

  typedef vtkScatterPlotMapper::ArrayIndex temp0_type;
  temp0_type temp0;
  int temp1;
  int temp2;
  int temp3 = 0;
  int temp4 = 0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3, 5) &&
      ap.GetEnumValue(temp0, &PyvtkScatterPlotMapper_ArrayIndex_Type) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      (ap.NoArgsLeft() || ap.GetValue(temp3)) &&
      (ap.NoArgsLeft() || ap.GetValue(temp4)))
    {
    if (ap.IsBound())
      {
      op->SetArrayByFieldType(temp0, temp1, temp2, temp3, temp4);
      }
    else
      {
      op->vtkScatterPlotMapper::SetArrayByFieldType(temp0, temp1, temp2, temp3, temp4);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkScatterPlotMapper_SetArrayByPointCoord(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetArrayByPointCoord");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScatterPlotMapper *op = static_cast<vtkScatterPlotMapper *>(vp);

  typedef vtkScatterPlotMapper::ArrayIndex temp0_type;
  temp0_type temp0;
  int temp1 = 0;
  int temp2 = 0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1, 3) &&
      ap.GetEnumValue(temp0, &PyvtkScatterPlotMapper_ArrayIndex_Type) &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)) &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)))
    {
    if (ap.IsBound())
      {
      op->SetArrayByPointCoord(temp0, temp1, temp2);
      }
    else
      {
      op->vtkScatterPlotMapper::SetArrayByPointCoord(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkScatterPlotMapper_SetArrayByName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetArrayByName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScatterPlotMapper *op = static_cast<vtkScatterPlotMapper *>(vp);

  typedef vtkScatterPlotMapper::ArrayIndex temp0_type;
  temp0_type temp0;
  char *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetEnumValue(temp0, &PyvtkScatterPlotMapper_ArrayIndex_Type) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetArrayByName(temp0, temp1);
      }
    else
      {
      op->vtkScatterPlotMapper::SetArrayByName(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkScatterPlotMapper_SetXCoordsArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetXCoordsArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScatterPlotMapper *op = static_cast<vtkScatterPlotMapper *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetXCoordsArray(temp0);
      }
    else
      {
      op->vtkScatterPlotMapper::SetXCoordsArray(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkScatterPlotMapper_SetYCoordsArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetYCoordsArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScatterPlotMapper *op = static_cast<vtkScatterPlotMapper *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetYCoordsArray(temp0);
      }
    else
      {
      op->vtkScatterPlotMapper::SetYCoordsArray(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkScatterPlotMapper_SetZCoordsArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetZCoordsArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScatterPlotMapper *op = static_cast<vtkScatterPlotMapper *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetZCoordsArray(temp0);
      }
    else
      {
      op->vtkScatterPlotMapper::SetZCoordsArray(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkScatterPlotMapper_SetColorArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColorArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScatterPlotMapper *op = static_cast<vtkScatterPlotMapper *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetColorArray(temp0);
      }
    else
      {
      op->vtkScatterPlotMapper::SetColorArray(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkScatterPlotMapper_SetGlyphXScalingArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGlyphXScalingArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScatterPlotMapper *op = static_cast<vtkScatterPlotMapper *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetGlyphXScalingArray(temp0);
      }
    else
      {
      op->vtkScatterPlotMapper::SetGlyphXScalingArray(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkScatterPlotMapper_SetGlyphYScalingArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGlyphYScalingArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScatterPlotMapper *op = static_cast<vtkScatterPlotMapper *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetGlyphYScalingArray(temp0);
      }
    else
      {
      op->vtkScatterPlotMapper::SetGlyphYScalingArray(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkScatterPlotMapper_SetGlyphZScalingArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGlyphZScalingArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScatterPlotMapper *op = static_cast<vtkScatterPlotMapper *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetGlyphZScalingArray(temp0);
      }
    else
      {
      op->vtkScatterPlotMapper::SetGlyphZScalingArray(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkScatterPlotMapper_SetGlyphSourceArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGlyphSourceArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScatterPlotMapper *op = static_cast<vtkScatterPlotMapper *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetGlyphSourceArray(temp0);
      }
    else
      {
      op->vtkScatterPlotMapper::SetGlyphSourceArray(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkScatterPlotMapper_SetGlyphXOrientationArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGlyphXOrientationArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScatterPlotMapper *op = static_cast<vtkScatterPlotMapper *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetGlyphXOrientationArray(temp0);
      }
    else
      {
      op->vtkScatterPlotMapper::SetGlyphXOrientationArray(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkScatterPlotMapper_SetGlyphYOrientationArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGlyphYOrientationArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScatterPlotMapper *op = static_cast<vtkScatterPlotMapper *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetGlyphYOrientationArray(temp0);
      }
    else
      {
      op->vtkScatterPlotMapper::SetGlyphYOrientationArray(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkScatterPlotMapper_SetGlyphZOrientationArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGlyphZOrientationArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScatterPlotMapper *op = static_cast<vtkScatterPlotMapper *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetGlyphZOrientationArray(temp0);
      }
    else
      {
      op->vtkScatterPlotMapper::SetGlyphZOrientationArray(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkScatterPlotMapper_GetArray_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScatterPlotMapper *op = static_cast<vtkScatterPlotMapper *>(vp);

  typedef vtkScatterPlotMapper::ArrayIndex temp0_type;
  temp0_type temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetEnumValue(temp0, &PyvtkScatterPlotMapper_ArrayIndex_Type))
    {
    vtkDataArray *tempr = (ap.IsBound() ?
      op->GetArray(temp0) :
      op->vtkScatterPlotMapper::GetArray(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkScatterPlotMapper_GetArray_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScatterPlotMapper *op = static_cast<vtkScatterPlotMapper *>(vp);

  typedef vtkScatterPlotMapper::ArrayIndex temp0_type;
  temp0_type temp0;
  vtkDataSet *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetEnumValue(temp0, &PyvtkScatterPlotMapper_ArrayIndex_Type) &&
      ap.GetVTKObject(temp1, "vtkDataSet"))
    {
    vtkDataArray *tempr = (ap.IsBound() ?
      op->GetArray(temp0, temp1) :
      op->vtkScatterPlotMapper::GetArray(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkScatterPlotMapper_GetArray(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkScatterPlotMapper_GetArray_s1(self, args);
    case 2:
      return PyvtkScatterPlotMapper_GetArray_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetArray");
  return NULL;
}



static PyObject *
PyvtkScatterPlotMapper_SetThreeDMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetThreeDMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScatterPlotMapper *op = static_cast<vtkScatterPlotMapper *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetThreeDMode(temp0);
      }
    else
      {
      op->vtkScatterPlotMapper::SetThreeDMode(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkScatterPlotMapper_GetThreeDMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetThreeDMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScatterPlotMapper *op = static_cast<vtkScatterPlotMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetThreeDMode() :
      op->vtkScatterPlotMapper::GetThreeDMode());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkScatterPlotMapper_ThreeDModeOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ThreeDModeOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScatterPlotMapper *op = static_cast<vtkScatterPlotMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ThreeDModeOn();
      }
    else
      {
      op->vtkScatterPlotMapper::ThreeDModeOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkScatterPlotMapper_ThreeDModeOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ThreeDModeOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScatterPlotMapper *op = static_cast<vtkScatterPlotMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ThreeDModeOff();
      }
    else
      {
      op->vtkScatterPlotMapper::ThreeDModeOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkScatterPlotMapper_SetColorize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColorize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScatterPlotMapper *op = static_cast<vtkScatterPlotMapper *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetColorize(temp0);
      }
    else
      {
      op->vtkScatterPlotMapper::SetColorize(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkScatterPlotMapper_GetColorize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColorize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScatterPlotMapper *op = static_cast<vtkScatterPlotMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetColorize() :
      op->vtkScatterPlotMapper::GetColorize());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkScatterPlotMapper_ColorizeOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ColorizeOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScatterPlotMapper *op = static_cast<vtkScatterPlotMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ColorizeOn();
      }
    else
      {
      op->vtkScatterPlotMapper::ColorizeOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkScatterPlotMapper_ColorizeOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ColorizeOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScatterPlotMapper *op = static_cast<vtkScatterPlotMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ColorizeOff();
      }
    else
      {
      op->vtkScatterPlotMapper::ColorizeOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkScatterPlotMapper_SetGlyphMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGlyphMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScatterPlotMapper *op = static_cast<vtkScatterPlotMapper *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetGlyphMode(temp0);
      }
    else
      {
      op->vtkScatterPlotMapper::SetGlyphMode(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkScatterPlotMapper_GetGlyphMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGlyphMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScatterPlotMapper *op = static_cast<vtkScatterPlotMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetGlyphMode() :
      op->vtkScatterPlotMapper::GetGlyphMode());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkScatterPlotMapper_SetScalingArrayMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalingArrayMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScatterPlotMapper *op = static_cast<vtkScatterPlotMapper *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetScalingArrayMode(temp0);
      }
    else
      {
      op->vtkScatterPlotMapper::SetScalingArrayMode(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkScatterPlotMapper_GetScalingArrayMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalingArrayMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScatterPlotMapper *op = static_cast<vtkScatterPlotMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetScalingArrayMode() :
      op->vtkScatterPlotMapper::GetScalingArrayMode());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkScatterPlotMapper_SetScaleMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScaleMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScatterPlotMapper *op = static_cast<vtkScatterPlotMapper *>(vp);

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
      op->vtkScatterPlotMapper::SetScaleMode(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkScatterPlotMapper_GetScaleMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScaleMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScatterPlotMapper *op = static_cast<vtkScatterPlotMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetScaleMode() :
      op->vtkScatterPlotMapper::GetScaleMode());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkScatterPlotMapper_SetScaleFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScaleFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScatterPlotMapper *op = static_cast<vtkScatterPlotMapper *>(vp);

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
      op->vtkScatterPlotMapper::SetScaleFactor(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkScatterPlotMapper_GetScaleFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScaleFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScatterPlotMapper *op = static_cast<vtkScatterPlotMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetScaleFactor() :
      op->vtkScatterPlotMapper::GetScaleFactor());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkScatterPlotMapper_SetOrientationMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOrientationMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScatterPlotMapper *op = static_cast<vtkScatterPlotMapper *>(vp);

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
      op->vtkScatterPlotMapper::SetOrientationMode(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkScatterPlotMapper_GetOrientationMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOrientationMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScatterPlotMapper *op = static_cast<vtkScatterPlotMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetOrientationMode() :
      op->vtkScatterPlotMapper::GetOrientationMode());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkScatterPlotMapper_SetNestedDisplayLists(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNestedDisplayLists");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScatterPlotMapper *op = static_cast<vtkScatterPlotMapper *>(vp);

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
      op->vtkScatterPlotMapper::SetNestedDisplayLists(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkScatterPlotMapper_GetNestedDisplayLists(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNestedDisplayLists");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScatterPlotMapper *op = static_cast<vtkScatterPlotMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetNestedDisplayLists() :
      op->vtkScatterPlotMapper::GetNestedDisplayLists());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkScatterPlotMapper_NestedDisplayListsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NestedDisplayListsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScatterPlotMapper *op = static_cast<vtkScatterPlotMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->NestedDisplayListsOn();
      }
    else
      {
      op->vtkScatterPlotMapper::NestedDisplayListsOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkScatterPlotMapper_NestedDisplayListsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NestedDisplayListsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScatterPlotMapper *op = static_cast<vtkScatterPlotMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->NestedDisplayListsOff();
      }
    else
      {
      op->vtkScatterPlotMapper::NestedDisplayListsOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkScatterPlotMapper_SetParallelToCamera(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetParallelToCamera");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScatterPlotMapper *op = static_cast<vtkScatterPlotMapper *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetParallelToCamera(temp0);
      }
    else
      {
      op->vtkScatterPlotMapper::SetParallelToCamera(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkScatterPlotMapper_GetParallelToCamera(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetParallelToCamera");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScatterPlotMapper *op = static_cast<vtkScatterPlotMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetParallelToCamera() :
      op->vtkScatterPlotMapper::GetParallelToCamera());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkScatterPlotMapper_ParallelToCameraOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ParallelToCameraOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScatterPlotMapper *op = static_cast<vtkScatterPlotMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ParallelToCameraOn();
      }
    else
      {
      op->vtkScatterPlotMapper::ParallelToCameraOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkScatterPlotMapper_ParallelToCameraOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ParallelToCameraOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScatterPlotMapper *op = static_cast<vtkScatterPlotMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ParallelToCameraOff();
      }
    else
      {
      op->vtkScatterPlotMapper::ParallelToCameraOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkScatterPlotMapper_SetGlyphSourceConnection_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGlyphSourceConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScatterPlotMapper *op = static_cast<vtkScatterPlotMapper *>(vp);

  int temp0;
  vtkAlgorithmOutput *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkAlgorithmOutput"))
    {
    if (ap.IsBound())
      {
      op->SetGlyphSourceConnection(temp0, temp1);
      }
    else
      {
      op->vtkScatterPlotMapper::SetGlyphSourceConnection(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkScatterPlotMapper_SetGlyphSourceConnection_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGlyphSourceConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScatterPlotMapper *op = static_cast<vtkScatterPlotMapper *>(vp);

  vtkAlgorithmOutput *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAlgorithmOutput"))
    {
    if (ap.IsBound())
      {
      op->SetGlyphSourceConnection(temp0);
      }
    else
      {
      op->vtkScatterPlotMapper::SetGlyphSourceConnection(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkScatterPlotMapper_SetGlyphSourceConnection(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkScatterPlotMapper_SetGlyphSourceConnection_s1(self, args);
    case 1:
      return PyvtkScatterPlotMapper_SetGlyphSourceConnection_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetGlyphSourceConnection");
  return NULL;
}



static PyObject *
PyvtkScatterPlotMapper_AddGlyphSourceConnection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddGlyphSourceConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScatterPlotMapper *op = static_cast<vtkScatterPlotMapper *>(vp);

  vtkAlgorithmOutput *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAlgorithmOutput"))
    {
    if (ap.IsBound())
      {
      op->AddGlyphSourceConnection(temp0);
      }
    else
      {
      op->vtkScatterPlotMapper::AddGlyphSourceConnection(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkScatterPlotMapper_GetGlyphSource(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGlyphSource");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScatterPlotMapper *op = static_cast<vtkScatterPlotMapper *>(vp);

  int temp0 = 0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0, 1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp0)))
    {
    vtkPolyData *tempr = (ap.IsBound() ?
      op->GetGlyphSource(temp0) :
      op->vtkScatterPlotMapper::GetGlyphSource(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkScatterPlotMapper_Render(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Render");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScatterPlotMapper *op = static_cast<vtkScatterPlotMapper *>(vp);

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
      op->vtkScatterPlotMapper::Render(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkScatterPlotMapper_Methods[] = {
  {(char*)"GetClassName", PyvtkScatterPlotMapper_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkScatterPlotMapper_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkScatterPlotMapper_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkScatterPlotMapper\nC++: vtkScatterPlotMapper *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkScatterPlotMapper_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkScatterPlotMapper\nC++: vtkScatterPlotMapper *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"FIELD_ACTIVE_COMPONENT", PyvtkScatterPlotMapper_FIELD_ACTIVE_COMPONENT, METH_VARARGS | METH_STATIC,
   (char*)"V.FIELD_ACTIVE_COMPONENT() -> vtkInformationIntegerKey\nC++: static vtkInformationIntegerKey *FIELD_ACTIVE_COMPONENT()\n\n"},
  {(char*)"SetArrayByFieldName", PyvtkScatterPlotMapper_SetArrayByFieldName, METH_VARARGS,
   (char*)"V.SetArrayByFieldName(, string, int, int, int)\nC++: void SetArrayByFieldName(ArrayIndex idx,\n    const char *arrayName, int fieldAssociation, int component=0,\n    int connection=0)\n\nSet the name of the point array to use as a mask for generating\nthe glyphs. This is a convenience method. The same effect can be\nachieved by using SetInputArrayToProcess(idx, 0, connection,\n   vtkDataObject::FIELD_ASSOCIATION_POINTS, arrayName) void\nSetMaskArray();\n"},
  {(char*)"SetArrayByFieldIndex", PyvtkScatterPlotMapper_SetArrayByFieldIndex, METH_VARARGS,
   (char*)"V.SetArrayByFieldIndex(, int, int, int, int)\nC++: void SetArrayByFieldIndex(ArrayIndex idx, int fiedIndex,\n    int fieldAssociation, int component=0, int connection=0)\n\nSet the name of the point array to use as a mask for generating\nthe glyphs. This is a convenience method. The same effect can be\nachieved by using SetInputArrayToProcess(idx, 0, connection,\n   vtkDataObject::FIELD_ASSOCIATION_POINTS, arrayName) void\nSetMaskArray();\n"},
  {(char*)"SetArrayByFieldType", PyvtkScatterPlotMapper_SetArrayByFieldType, METH_VARARGS,
   (char*)"V.SetArrayByFieldType(, int, int, int, int)\nC++: void SetArrayByFieldType(ArrayIndex idx,\n    int fieldAttributeType, int fieldAssociation, int component=0,\n     int connection=0)\n\nSet the point attribute to use for generating the glyphs.idx is\none of the following:\n\\li vtkScatterPlotMapper::X_COORDS\n\\li vtkScatterPlotMapper::Y_COORDS\n\\li vtkScatterPlotMapper::Z_COORDS\n\\li vtkScatterPlotMapper::COLOR\n\\li vtkScatterPlotMapper::GLYPH_SCALING\n\\li vtkScatterPlotMapper::GLYPH_ORIENTATION\n\\li vtkScatterPlotMapper::GLYPH_SHAPEfieldAttributeType is one of\nthe following:\n\\li vtkDataSetAttributes::SCALARS\n\\li vtkDataSetAttributes::VECTORS\n\\li vtkDataSetAttributes::NORMALS\n\\li vtkDataSetAttributes::TCOORDS\n\\li vtkDataSetAttributes::TENSORS\n\nThis is a convenience method. This internally  same effect can be\nachieved by using SetInputArrayToProcess(idx, 0, connection,\n   vtkDataObject::FIELD_ASSOCIATION_POINTS, fieldAttributeType)\n"},
  {(char*)"SetArrayByPointCoord", PyvtkScatterPlotMapper_SetArrayByPointCoord, METH_VARARGS,
   (char*)"V.SetArrayByPointCoord(, int, int)\nC++: void SetArrayByPointCoord(ArrayIndex idx, int component=0,\n    int connection=0)\n\n"},
  {(char*)"SetArrayByName", PyvtkScatterPlotMapper_SetArrayByName, METH_VARARGS,
   (char*)"V.SetArrayByName(, string)\nC++: void SetArrayByName(ArrayIndex idx, const char *arrayName)\n\n"},
  {(char*)"SetXCoordsArray", PyvtkScatterPlotMapper_SetXCoordsArray, METH_VARARGS,
   (char*)"V.SetXCoordsArray(string)\nC++: void SetXCoordsArray(const char *arrayName)\n\n"},
  {(char*)"SetYCoordsArray", PyvtkScatterPlotMapper_SetYCoordsArray, METH_VARARGS,
   (char*)"V.SetYCoordsArray(string)\nC++: void SetYCoordsArray(const char *arrayName)\n\n"},
  {(char*)"SetZCoordsArray", PyvtkScatterPlotMapper_SetZCoordsArray, METH_VARARGS,
   (char*)"V.SetZCoordsArray(string)\nC++: void SetZCoordsArray(const char *arrayName)\n\n"},
  {(char*)"SetColorArray", PyvtkScatterPlotMapper_SetColorArray, METH_VARARGS,
   (char*)"V.SetColorArray(string)\nC++: void SetColorArray(const char *arrayName)\n\n"},
  {(char*)"SetGlyphXScalingArray", PyvtkScatterPlotMapper_SetGlyphXScalingArray, METH_VARARGS,
   (char*)"V.SetGlyphXScalingArray(string)\nC++: void SetGlyphXScalingArray(const char *arrayName)\n\n"},
  {(char*)"SetGlyphYScalingArray", PyvtkScatterPlotMapper_SetGlyphYScalingArray, METH_VARARGS,
   (char*)"V.SetGlyphYScalingArray(string)\nC++: void SetGlyphYScalingArray(const char *arrayName)\n\n"},
  {(char*)"SetGlyphZScalingArray", PyvtkScatterPlotMapper_SetGlyphZScalingArray, METH_VARARGS,
   (char*)"V.SetGlyphZScalingArray(string)\nC++: void SetGlyphZScalingArray(const char *arrayName)\n\n"},
  {(char*)"SetGlyphSourceArray", PyvtkScatterPlotMapper_SetGlyphSourceArray, METH_VARARGS,
   (char*)"V.SetGlyphSourceArray(string)\nC++: void SetGlyphSourceArray(const char *arrayName)\n\n"},
  {(char*)"SetGlyphXOrientationArray", PyvtkScatterPlotMapper_SetGlyphXOrientationArray, METH_VARARGS,
   (char*)"V.SetGlyphXOrientationArray(string)\nC++: void SetGlyphXOrientationArray(const char *arrayName)\n\n"},
  {(char*)"SetGlyphYOrientationArray", PyvtkScatterPlotMapper_SetGlyphYOrientationArray, METH_VARARGS,
   (char*)"V.SetGlyphYOrientationArray(string)\nC++: void SetGlyphYOrientationArray(const char *arrayName)\n\n"},
  {(char*)"SetGlyphZOrientationArray", PyvtkScatterPlotMapper_SetGlyphZOrientationArray, METH_VARARGS,
   (char*)"V.SetGlyphZOrientationArray(string)\nC++: void SetGlyphZOrientationArray(const char *arrayName)\n\n"},
  {(char*)"GetArray", PyvtkScatterPlotMapper_GetArray, METH_VARARGS,
   (char*)"V.GetArray() -> vtkDataArray\nC++: vtkDataArray *GetArray(ArrayIndex idx)\nV.GetArray(, vtkDataSet) -> vtkDataArray\nC++: vtkDataArray *GetArray(ArrayIndex idx, vtkDataSet *input)\n\n"},
  {(char*)"SetThreeDMode", PyvtkScatterPlotMapper_SetThreeDMode, METH_VARARGS,
   (char*)"V.SetThreeDMode(bool)\nC++: void SetThreeDMode(bool a)\n\nEnable or not the third (z) coordinate for 3D rendering (instead\nof 2D). Note: To work, the Z_Coords index array must be given.\n"},
  {(char*)"GetThreeDMode", PyvtkScatterPlotMapper_GetThreeDMode, METH_VARARGS,
   (char*)"V.GetThreeDMode() -> bool\nC++: bool GetThreeDMode()\n\nEnable or not the third (z) coordinate for 3D rendering (instead\nof 2D). Note: To work, the Z_Coords index array must be given.\n"},
  {(char*)"ThreeDModeOn", PyvtkScatterPlotMapper_ThreeDModeOn, METH_VARARGS,
   (char*)"V.ThreeDModeOn()\nC++: void ThreeDModeOn()\n\nEnable or not the third (z) coordinate for 3D rendering (instead\nof 2D). Note: To work, the Z_Coords index array must be given.\n"},
  {(char*)"ThreeDModeOff", PyvtkScatterPlotMapper_ThreeDModeOff, METH_VARARGS,
   (char*)"V.ThreeDModeOff()\nC++: void ThreeDModeOff()\n\nEnable or not the third (z) coordinate for 3D rendering (instead\nof 2D). Note: To work, the Z_Coords index array must be given.\n"},
  {(char*)"SetColorize", PyvtkScatterPlotMapper_SetColorize, METH_VARARGS,
   (char*)"V.SetColorize(bool)\nC++: void SetColorize(bool a)\n\nEnable or not the color painting at each point. Note: To work,\nthe Color index array must be given.\n"},
  {(char*)"GetColorize", PyvtkScatterPlotMapper_GetColorize, METH_VARARGS,
   (char*)"V.GetColorize() -> bool\nC++: bool GetColorize()\n\nEnable or not the color painting at each point. Note: To work,\nthe Color index array must be given.\n"},
  {(char*)"ColorizeOn", PyvtkScatterPlotMapper_ColorizeOn, METH_VARARGS,
   (char*)"V.ColorizeOn()\nC++: void ColorizeOn()\n\nEnable or not the color painting at each point. Note: To work,\nthe Color index array must be given.\n"},
  {(char*)"ColorizeOff", PyvtkScatterPlotMapper_ColorizeOff, METH_VARARGS,
   (char*)"V.ColorizeOff()\nC++: void ColorizeOff()\n\nEnable or not the color painting at each point. Note: To work,\nthe Color index array must be given.\n"},
  {(char*)"SetGlyphMode", PyvtkScatterPlotMapper_SetGlyphMode, METH_VARARGS,
   (char*)"V.SetGlyphMode(int)\nC++: void SetGlyphMode(int a)\n\nEnable or not the Glyph representation at each point. Note: To\nwork, at least 1 Glyph polydata input must be set and the Glyph\nindex array must be given.\n"},
  {(char*)"GetGlyphMode", PyvtkScatterPlotMapper_GetGlyphMode, METH_VARARGS,
   (char*)"V.GetGlyphMode() -> int\nC++: int GetGlyphMode()\n\nEnable or not the Glyph representation at each point. Note: To\nwork, at least 1 Glyph polydata input must be set and the Glyph\nindex array must be given.\n"},
  {(char*)"SetScalingArrayMode", PyvtkScatterPlotMapper_SetScalingArrayMode, METH_VARARGS,
   (char*)"V.SetScalingArrayMode(int)\nC++: void SetScalingArrayMode(int a)\n\nIf the GlyphMode has ScaledGlyph turned on, ScalingArrayMode\ndescribes how to data in the different GLYPH_[X,Y,Z]_SCALE arrays\n"},
  {(char*)"GetScalingArrayMode", PyvtkScatterPlotMapper_GetScalingArrayMode, METH_VARARGS,
   (char*)"V.GetScalingArrayMode() -> int\nC++: int GetScalingArrayMode()\n\nIf the GlyphMode has ScaledGlyph turned on, ScalingArrayMode\ndescribes how to data in the different GLYPH_[X,Y,Z]_SCALE arrays\n"},
  {(char*)"SetScaleMode", PyvtkScatterPlotMapper_SetScaleMode, METH_VARARGS,
   (char*)"V.SetScaleMode(int)\nC++: void SetScaleMode(int a)\n\nIf the GlyphMode has ScaledGlyph turned on, decide how to scale\nthe glyph. By Magnitude or components.\n"},
  {(char*)"GetScaleMode", PyvtkScatterPlotMapper_GetScaleMode, METH_VARARGS,
   (char*)"V.GetScaleMode() -> int\nC++: int GetScaleMode()\n\nIf the GlyphMode has ScaledGlyph turned on, decide how to scale\nthe glyph. By Magnitude or components.\n"},
  {(char*)"SetScaleFactor", PyvtkScatterPlotMapper_SetScaleFactor, METH_VARARGS,
   (char*)"V.SetScaleFactor(float)\nC++: void SetScaleFactor(double a)\n\nSpecify scale factor to scale object by. This is used only when\nScaling is On.\n"},
  {(char*)"GetScaleFactor", PyvtkScatterPlotMapper_GetScaleFactor, METH_VARARGS,
   (char*)"V.GetScaleFactor() -> float\nC++: double GetScaleFactor()\n\nSpecify scale factor to scale object by. This is used only when\nScaling is On.\n"},
  {(char*)"SetOrientationMode", PyvtkScatterPlotMapper_SetOrientationMode, METH_VARARGS,
   (char*)"V.SetOrientationMode(int)\nC++: void SetOrientationMode(int a)\n\n"},
  {(char*)"GetOrientationMode", PyvtkScatterPlotMapper_GetOrientationMode, METH_VARARGS,
   (char*)"V.GetOrientationMode() -> int\nC++: int GetOrientationMode()\n\n"},
  {(char*)"SetNestedDisplayLists", PyvtkScatterPlotMapper_SetNestedDisplayLists, METH_VARARGS,
   (char*)"V.SetNestedDisplayLists(bool)\nC++: void SetNestedDisplayLists(bool a)\n\nIf immediate mode is off, if Glyphs are in use and if\nNestedDisplayLists is false, only the mappers of each glyph use\ndisplay lists. If true, in addition, matrices transforms and\ncolor per glyph are also in a parent display list. Not relevant\nif immediate mode is on. For debugging/profiling purpose. Initial\nvalue is true.\n"},
  {(char*)"GetNestedDisplayLists", PyvtkScatterPlotMapper_GetNestedDisplayLists, METH_VARARGS,
   (char*)"V.GetNestedDisplayLists() -> bool\nC++: bool GetNestedDisplayLists()\n\nIf immediate mode is off, if Glyphs are in use and if\nNestedDisplayLists is false, only the mappers of each glyph use\ndisplay lists. If true, in addition, matrices transforms and\ncolor per glyph are also in a parent display list. Not relevant\nif immediate mode is on. For debugging/profiling purpose. Initial\nvalue is true.\n"},
  {(char*)"NestedDisplayListsOn", PyvtkScatterPlotMapper_NestedDisplayListsOn, METH_VARARGS,
   (char*)"V.NestedDisplayListsOn()\nC++: void NestedDisplayListsOn()\n\nIf immediate mode is off, if Glyphs are in use and if\nNestedDisplayLists is false, only the mappers of each glyph use\ndisplay lists. If true, in addition, matrices transforms and\ncolor per glyph are also in a parent display list. Not relevant\nif immediate mode is on. For debugging/profiling purpose. Initial\nvalue is true.\n"},
  {(char*)"NestedDisplayListsOff", PyvtkScatterPlotMapper_NestedDisplayListsOff, METH_VARARGS,
   (char*)"V.NestedDisplayListsOff()\nC++: void NestedDisplayListsOff()\n\nIf immediate mode is off, if Glyphs are in use and if\nNestedDisplayLists is false, only the mappers of each glyph use\ndisplay lists. If true, in addition, matrices transforms and\ncolor per glyph are also in a parent display list. Not relevant\nif immediate mode is on. For debugging/profiling purpose. Initial\nvalue is true.\n"},
  {(char*)"SetParallelToCamera", PyvtkScatterPlotMapper_SetParallelToCamera, METH_VARARGS,
   (char*)"V.SetParallelToCamera(bool)\nC++: void SetParallelToCamera(bool a)\n\nWhen the glyphs are in 2D, it might be useful to force them to be\nshown parallel to the camera.\n"},
  {(char*)"GetParallelToCamera", PyvtkScatterPlotMapper_GetParallelToCamera, METH_VARARGS,
   (char*)"V.GetParallelToCamera() -> bool\nC++: bool GetParallelToCamera()\n\nWhen the glyphs are in 2D, it might be useful to force them to be\nshown parallel to the camera.\n"},
  {(char*)"ParallelToCameraOn", PyvtkScatterPlotMapper_ParallelToCameraOn, METH_VARARGS,
   (char*)"V.ParallelToCameraOn()\nC++: void ParallelToCameraOn()\n\nWhen the glyphs are in 2D, it might be useful to force them to be\nshown parallel to the camera.\n"},
  {(char*)"ParallelToCameraOff", PyvtkScatterPlotMapper_ParallelToCameraOff, METH_VARARGS,
   (char*)"V.ParallelToCameraOff()\nC++: void ParallelToCameraOff()\n\nWhen the glyphs are in 2D, it might be useful to force them to be\nshown parallel to the camera.\n"},
  {(char*)"SetGlyphSourceConnection", PyvtkScatterPlotMapper_SetGlyphSourceConnection, METH_VARARGS,
   (char*)"V.SetGlyphSourceConnection(int, vtkAlgorithmOutput)\nC++: void SetGlyphSourceConnection(int id,\n    vtkAlgorithmOutput *algOutput)\nV.SetGlyphSourceConnection(vtkAlgorithmOutput)\nC++: void SetGlyphSourceConnection(vtkAlgorithmOutput *algOutput)\n\nSpecify a source object at a specified table location. New style.\nSource connection is stored in port 1. This method is equivalent\nto SetInputConnection(1, id, outputPort).\n"},
  {(char*)"AddGlyphSourceConnection", PyvtkScatterPlotMapper_AddGlyphSourceConnection, METH_VARARGS,
   (char*)"V.AddGlyphSourceConnection(vtkAlgorithmOutput)\nC++: void AddGlyphSourceConnection(vtkAlgorithmOutput *algOutput)\n\nSpecify a source object at a specified table location. New style.\nSource connection is stored in port 1. This method is equivalent\nto SetInputConnection(1, id, outputPort).\n"},
  {(char*)"GetGlyphSource", PyvtkScatterPlotMapper_GetGlyphSource, METH_VARARGS,
   (char*)"V.GetGlyphSource(int) -> vtkPolyData\nC++: vtkPolyData *GetGlyphSource(int id=0)\n\nSpecify a source object at a specified table location. New style.\nSource connection is stored in port 1. This method is equivalent\nto SetInputConnection(1, id, outputPort).\n"},
  {(char*)"Render", PyvtkScatterPlotMapper_Render, METH_VARARGS,
   (char*)"V.Render(vtkRenderer, vtkActor)\nC++: virtual void Render(vtkRenderer *renderer, vtkActor *actor)\n\nReimplemented to allow \"real\" pre rendering by\nvtkScatterPlotPainter Indeed the vtkPainter::PrepareForRendering\nis not exactly a prepare for rendering (the rendering already\nstarted).\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkScatterPlotMapper_StaticNew()
{
  return vtkScatterPlotMapper::New();
}

PyObject *PyVTKClass_vtkScatterPlotMapperNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkScatterPlotMapper_StaticNew,
    PyvtkScatterPlotMapper_Methods,
    "vtkScatterPlotMapper", modulename,
    NULL, NULL,
    PyvtkScatterPlotMapper_Doc(),
    PyVTKClass_vtkCompositePolyDataMapper2New(modulename));

  if (cls)
    {
    PyObject *d = PyVTKClass_GetDict(cls);
    PyObject *o;

    PyType_Ready(&PyvtkScatterPlotMapper_ArrayIndex_Type);
    PyvtkScatterPlotMapper_ArrayIndex_Type.tp_new = NULL;

    o = (PyObject *)&PyvtkScatterPlotMapper_ArrayIndex_Type;
    if (o && PyDict_SetItemString(d, (char *)"ArrayIndex", o) != 0)
      {
      Py_DECREF(o);
      }

    PyType_Ready(&PyvtkScatterPlotMapper_GlyphDrawingMode_Type);
    PyvtkScatterPlotMapper_GlyphDrawingMode_Type.tp_new = NULL;

    o = (PyObject *)&PyvtkScatterPlotMapper_GlyphDrawingMode_Type;
    if (o && PyDict_SetItemString(d, (char *)"GlyphDrawingMode", o) != 0)
      {
      Py_DECREF(o);
      }

    PyType_Ready(&PyvtkScatterPlotMapper_ScalingArrayModes_Type);
    PyvtkScatterPlotMapper_ScalingArrayModes_Type.tp_new = NULL;

    o = (PyObject *)&PyvtkScatterPlotMapper_ScalingArrayModes_Type;
    if (o && PyDict_SetItemString(d, (char *)"ScalingArrayModes", o) != 0)
      {
      Py_DECREF(o);
      }

    PyType_Ready(&PyvtkScatterPlotMapper_ScaleModes_Type);
    PyvtkScatterPlotMapper_ScaleModes_Type.tp_new = NULL;

    o = (PyObject *)&PyvtkScatterPlotMapper_ScaleModes_Type;
    if (o && PyDict_SetItemString(d, (char *)"ScaleModes", o) != 0)
      {
      Py_DECREF(o);
      }

    PyType_Ready(&PyvtkScatterPlotMapper_OrientationModes_Type);
    PyvtkScatterPlotMapper_OrientationModes_Type.tp_new = NULL;

    o = (PyObject *)&PyvtkScatterPlotMapper_OrientationModes_Type;
    if (o && PyDict_SetItemString(d, (char *)"OrientationModes", o) != 0)
      {
      Py_DECREF(o);
      }

    for (int c = 0; c < 12; c++)
      {
      typedef vtkScatterPlotMapper::ArrayIndex cxx_enum_type;

      static const struct { const char *name; cxx_enum_type value; }
        constants[12] = {
          { "X_COORDS", vtkScatterPlotMapper::X_COORDS },
          { "Y_COORDS", vtkScatterPlotMapper::Y_COORDS },
          { "Z_COORDS", vtkScatterPlotMapper::Z_COORDS },
          { "COLOR", vtkScatterPlotMapper::COLOR },
          { "GLYPH_X_SCALE", vtkScatterPlotMapper::GLYPH_X_SCALE },
          { "GLYPH_Y_SCALE", vtkScatterPlotMapper::GLYPH_Y_SCALE },
          { "GLYPH_Z_SCALE", vtkScatterPlotMapper::GLYPH_Z_SCALE },
          { "GLYPH_SOURCE", vtkScatterPlotMapper::GLYPH_SOURCE },
          { "GLYPH_X_ORIENTATION", vtkScatterPlotMapper::GLYPH_X_ORIENTATION },
          { "GLYPH_Y_ORIENTATION", vtkScatterPlotMapper::GLYPH_Y_ORIENTATION },
          { "GLYPH_Z_ORIENTATION", vtkScatterPlotMapper::GLYPH_Z_ORIENTATION },
          { "NUMBER_OF_ARRAYS", vtkScatterPlotMapper::NUMBER_OF_ARRAYS },
        };

      o = PyvtkScatterPlotMapper_ArrayIndex_FromEnum(constants[c].value);
      if (o)
        {
        PyDict_SetItemString(d, (char *)constants[c].name, o);
        Py_DECREF(o);
        }
      }

    for (int c = 0; c < 5; c++)
      {
      typedef vtkScatterPlotMapper::GlyphDrawingMode cxx_enum_type;

      static const struct { const char *name; cxx_enum_type value; }
        constants[5] = {
          { "NoGlyph", vtkScatterPlotMapper::NoGlyph },
          { "UseGlyph", vtkScatterPlotMapper::UseGlyph },
          { "ScaledGlyph", vtkScatterPlotMapper::ScaledGlyph },
          { "UseMultiGlyph", vtkScatterPlotMapper::UseMultiGlyph },
          { "OrientedGlyph", vtkScatterPlotMapper::OrientedGlyph },
        };

      o = PyvtkScatterPlotMapper_GlyphDrawingMode_FromEnum(constants[c].value);
      if (o)
        {
        PyDict_SetItemString(d, (char *)constants[c].name, o);
        Py_DECREF(o);
        }
      }

    for (int c = 0; c < 3; c++)
      {
      typedef vtkScatterPlotMapper::ScalingArrayModes cxx_enum_type;

      static const struct { const char *name; cxx_enum_type value; }
        constants[3] = {
          { "Xc_Yc_Zc", vtkScatterPlotMapper::Xc_Yc_Zc },
          { "Xc0_Xc1_Xc2", vtkScatterPlotMapper::Xc0_Xc1_Xc2 },
          { "Xc_Xc_Xc", vtkScatterPlotMapper::Xc_Xc_Xc },
        };

      o = PyvtkScatterPlotMapper_ScalingArrayModes_FromEnum(constants[c].value);
      if (o)
        {
        PyDict_SetItemString(d, (char *)constants[c].name, o);
        Py_DECREF(o);
        }
      }

    for (int c = 0; c < 2; c++)
      {
      typedef vtkScatterPlotMapper::ScaleModes cxx_enum_type;

      static const struct { const char *name; cxx_enum_type value; }
        constants[2] = {
          { "SCALE_BY_MAGNITUDE", vtkScatterPlotMapper::SCALE_BY_MAGNITUDE },
          { "SCALE_BY_COMPONENTS", vtkScatterPlotMapper::SCALE_BY_COMPONENTS },
        };

      o = PyvtkScatterPlotMapper_ScaleModes_FromEnum(constants[c].value);
      if (o)
        {
        PyDict_SetItemString(d, (char *)constants[c].name, o);
        Py_DECREF(o);
        }
      }

    for (int c = 0; c < 2; c++)
      {
      typedef vtkScatterPlotMapper::OrientationModes cxx_enum_type;

      static const struct { const char *name; cxx_enum_type value; }
        constants[2] = {
          { "DIRECTION", vtkScatterPlotMapper::DIRECTION },
          { "ROTATION", vtkScatterPlotMapper::ROTATION },
        };

      o = PyvtkScatterPlotMapper_OrientationModes_FromEnum(constants[c].value);
      if (o)
        {
        PyDict_SetItemString(d, (char *)constants[c].name, o);
        Py_DECREF(o);
        }
      }

    }

  return cls;
}

const char **PyvtkScatterPlotMapper_Doc()
{
  static const char *docstring[] = {
    "vtkScatterPlotMapper - Display a vtkDataSet with flexibility\n\n",
    "Superclass: vtkCompositePolyDataMapper2\n\n",
    "The mappers gives flexibility in the display of the input. By setting\nthe arrays to process, every element of the display can be\ncontrolled. i.e. the coordinates of the points can be controlled by\nany field array or the color of the points can controlled by the\nx-axes.\n\nImplementation:\n\nSee Also:\n\nvtkGlyph3D, vtkCompositePolyDataMapper2\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkScatterPlotMapper(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkScatterPlotMapperNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkScatterPlotMapper", o) != 0)
    {
    Py_DECREF(o);
    }

}

