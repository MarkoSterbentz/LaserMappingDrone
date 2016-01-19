// python wrapper for vtkLabelPlacementMapper
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkLabelPlacementMapper.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkLabelPlacementMapper(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkLabelPlacementMapperNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkMapper2DNew
extern "C" { PyObject *PyVTKClass_vtkMapper2DNew(const char *); }
#define DECLARED_PyVTKClass_vtkMapper2DNew
#endif

static const char **PyvtkLabelPlacementMapper_Doc();

#ifndef DECLARED_PyvtkLabelPlacementMapper_LabelShape_Type
extern VTK_PYTHON_EXPORT PyTypeObject PyvtkLabelPlacementMapper_LabelShape_Type;
#define DECLARED_PyvtkLabelPlacementMapper_LabelShape_Type
#endif

PyTypeObject PyvtkLabelPlacementMapper_LabelShape_Type = {
  PyObject_HEAD_INIT(&PyType_Type)
  0,
  (char*)"LabelShape", // tp_name
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

PyObject *PyvtkLabelPlacementMapper_LabelShape_FromEnum(int val)
{
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkLabelPlacementMapper_LabelShape_Type);
  self->ob_ival = val;
  return (PyObject *)self;
}

#ifndef DECLARED_PyvtkLabelPlacementMapper_LabelStyle_Type
extern VTK_PYTHON_EXPORT PyTypeObject PyvtkLabelPlacementMapper_LabelStyle_Type;
#define DECLARED_PyvtkLabelPlacementMapper_LabelStyle_Type
#endif

PyTypeObject PyvtkLabelPlacementMapper_LabelStyle_Type = {
  PyObject_HEAD_INIT(&PyType_Type)
  0,
  (char*)"LabelStyle", // tp_name
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

PyObject *PyvtkLabelPlacementMapper_LabelStyle_FromEnum(int val)
{
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkLabelPlacementMapper_LabelStyle_Type);
  self->ob_ival = val;
  return (PyObject *)self;
}


static PyObject *
PyvtkLabelPlacementMapper_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelPlacementMapper *op = static_cast<vtkLabelPlacementMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkLabelPlacementMapper::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLabelPlacementMapper_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelPlacementMapper *op = static_cast<vtkLabelPlacementMapper *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkLabelPlacementMapper::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLabelPlacementMapper_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelPlacementMapper *op = static_cast<vtkLabelPlacementMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkLabelPlacementMapper *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkLabelPlacementMapper::NewInstance());

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
PyvtkLabelPlacementMapper_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkLabelPlacementMapper *tempr = vtkLabelPlacementMapper::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLabelPlacementMapper_RenderOverlay(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOverlay");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelPlacementMapper *op = static_cast<vtkLabelPlacementMapper *>(vp);

  vtkViewport *temp0 = NULL;
  vtkActor2D *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkViewport") &&
      ap.GetVTKObject(temp1, "vtkActor2D"))
    {
    if (ap.IsBound())
      {
      op->RenderOverlay(temp0, temp1);
      }
    else
      {
      op->vtkLabelPlacementMapper::RenderOverlay(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLabelPlacementMapper_SetRenderStrategy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRenderStrategy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelPlacementMapper *op = static_cast<vtkLabelPlacementMapper *>(vp);

  vtkLabelRenderStrategy *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkLabelRenderStrategy"))
    {
    if (ap.IsBound())
      {
      op->SetRenderStrategy(temp0);
      }
    else
      {
      op->vtkLabelPlacementMapper::SetRenderStrategy(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLabelPlacementMapper_GetRenderStrategy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRenderStrategy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelPlacementMapper *op = static_cast<vtkLabelPlacementMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkLabelRenderStrategy *tempr = (ap.IsBound() ?
      op->GetRenderStrategy() :
      op->vtkLabelPlacementMapper::GetRenderStrategy());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLabelPlacementMapper_SetMaximumLabelFraction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaximumLabelFraction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelPlacementMapper *op = static_cast<vtkLabelPlacementMapper *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetMaximumLabelFraction(temp0);
      }
    else
      {
      op->vtkLabelPlacementMapper::SetMaximumLabelFraction(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLabelPlacementMapper_GetMaximumLabelFractionMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumLabelFractionMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelPlacementMapper *op = static_cast<vtkLabelPlacementMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetMaximumLabelFractionMinValue() :
      op->vtkLabelPlacementMapper::GetMaximumLabelFractionMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLabelPlacementMapper_GetMaximumLabelFractionMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumLabelFractionMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelPlacementMapper *op = static_cast<vtkLabelPlacementMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetMaximumLabelFractionMaxValue() :
      op->vtkLabelPlacementMapper::GetMaximumLabelFractionMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLabelPlacementMapper_GetMaximumLabelFraction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumLabelFraction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelPlacementMapper *op = static_cast<vtkLabelPlacementMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetMaximumLabelFraction() :
      op->vtkLabelPlacementMapper::GetMaximumLabelFraction());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLabelPlacementMapper_SetIteratorType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIteratorType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelPlacementMapper *op = static_cast<vtkLabelPlacementMapper *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetIteratorType(temp0);
      }
    else
      {
      op->vtkLabelPlacementMapper::SetIteratorType(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLabelPlacementMapper_GetIteratorType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIteratorType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelPlacementMapper *op = static_cast<vtkLabelPlacementMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetIteratorType() :
      op->vtkLabelPlacementMapper::GetIteratorType());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLabelPlacementMapper_SetUseUnicodeStrings(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseUnicodeStrings");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelPlacementMapper *op = static_cast<vtkLabelPlacementMapper *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetUseUnicodeStrings(temp0);
      }
    else
      {
      op->vtkLabelPlacementMapper::SetUseUnicodeStrings(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLabelPlacementMapper_GetUseUnicodeStrings(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseUnicodeStrings");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelPlacementMapper *op = static_cast<vtkLabelPlacementMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetUseUnicodeStrings() :
      op->vtkLabelPlacementMapper::GetUseUnicodeStrings());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLabelPlacementMapper_UseUnicodeStringsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseUnicodeStringsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelPlacementMapper *op = static_cast<vtkLabelPlacementMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->UseUnicodeStringsOn();
      }
    else
      {
      op->vtkLabelPlacementMapper::UseUnicodeStringsOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLabelPlacementMapper_UseUnicodeStringsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseUnicodeStringsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelPlacementMapper *op = static_cast<vtkLabelPlacementMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->UseUnicodeStringsOff();
      }
    else
      {
      op->vtkLabelPlacementMapper::UseUnicodeStringsOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLabelPlacementMapper_GetPositionsAsNormals(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPositionsAsNormals");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelPlacementMapper *op = static_cast<vtkLabelPlacementMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetPositionsAsNormals() :
      op->vtkLabelPlacementMapper::GetPositionsAsNormals());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLabelPlacementMapper_SetPositionsAsNormals(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPositionsAsNormals");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelPlacementMapper *op = static_cast<vtkLabelPlacementMapper *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetPositionsAsNormals(temp0);
      }
    else
      {
      op->vtkLabelPlacementMapper::SetPositionsAsNormals(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLabelPlacementMapper_PositionsAsNormalsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PositionsAsNormalsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelPlacementMapper *op = static_cast<vtkLabelPlacementMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->PositionsAsNormalsOn();
      }
    else
      {
      op->vtkLabelPlacementMapper::PositionsAsNormalsOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLabelPlacementMapper_PositionsAsNormalsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PositionsAsNormalsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelPlacementMapper *op = static_cast<vtkLabelPlacementMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->PositionsAsNormalsOff();
      }
    else
      {
      op->vtkLabelPlacementMapper::PositionsAsNormalsOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLabelPlacementMapper_GetGeneratePerturbedLabelSpokes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGeneratePerturbedLabelSpokes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelPlacementMapper *op = static_cast<vtkLabelPlacementMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetGeneratePerturbedLabelSpokes() :
      op->vtkLabelPlacementMapper::GetGeneratePerturbedLabelSpokes());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLabelPlacementMapper_SetGeneratePerturbedLabelSpokes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGeneratePerturbedLabelSpokes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelPlacementMapper *op = static_cast<vtkLabelPlacementMapper *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetGeneratePerturbedLabelSpokes(temp0);
      }
    else
      {
      op->vtkLabelPlacementMapper::SetGeneratePerturbedLabelSpokes(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLabelPlacementMapper_GeneratePerturbedLabelSpokesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GeneratePerturbedLabelSpokesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelPlacementMapper *op = static_cast<vtkLabelPlacementMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->GeneratePerturbedLabelSpokesOn();
      }
    else
      {
      op->vtkLabelPlacementMapper::GeneratePerturbedLabelSpokesOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLabelPlacementMapper_GeneratePerturbedLabelSpokesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GeneratePerturbedLabelSpokesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelPlacementMapper *op = static_cast<vtkLabelPlacementMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->GeneratePerturbedLabelSpokesOff();
      }
    else
      {
      op->vtkLabelPlacementMapper::GeneratePerturbedLabelSpokesOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLabelPlacementMapper_GetUseDepthBuffer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseDepthBuffer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelPlacementMapper *op = static_cast<vtkLabelPlacementMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetUseDepthBuffer() :
      op->vtkLabelPlacementMapper::GetUseDepthBuffer());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLabelPlacementMapper_SetUseDepthBuffer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseDepthBuffer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelPlacementMapper *op = static_cast<vtkLabelPlacementMapper *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetUseDepthBuffer(temp0);
      }
    else
      {
      op->vtkLabelPlacementMapper::SetUseDepthBuffer(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLabelPlacementMapper_UseDepthBufferOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseDepthBufferOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelPlacementMapper *op = static_cast<vtkLabelPlacementMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->UseDepthBufferOn();
      }
    else
      {
      op->vtkLabelPlacementMapper::UseDepthBufferOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLabelPlacementMapper_UseDepthBufferOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseDepthBufferOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelPlacementMapper *op = static_cast<vtkLabelPlacementMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->UseDepthBufferOff();
      }
    else
      {
      op->vtkLabelPlacementMapper::UseDepthBufferOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLabelPlacementMapper_SetPlaceAllLabels(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPlaceAllLabels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelPlacementMapper *op = static_cast<vtkLabelPlacementMapper *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetPlaceAllLabels(temp0);
      }
    else
      {
      op->vtkLabelPlacementMapper::SetPlaceAllLabels(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLabelPlacementMapper_GetPlaceAllLabels(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPlaceAllLabels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelPlacementMapper *op = static_cast<vtkLabelPlacementMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetPlaceAllLabels() :
      op->vtkLabelPlacementMapper::GetPlaceAllLabels());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLabelPlacementMapper_PlaceAllLabelsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PlaceAllLabelsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelPlacementMapper *op = static_cast<vtkLabelPlacementMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->PlaceAllLabelsOn();
      }
    else
      {
      op->vtkLabelPlacementMapper::PlaceAllLabelsOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLabelPlacementMapper_PlaceAllLabelsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PlaceAllLabelsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelPlacementMapper *op = static_cast<vtkLabelPlacementMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->PlaceAllLabelsOff();
      }
    else
      {
      op->vtkLabelPlacementMapper::PlaceAllLabelsOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLabelPlacementMapper_SetOutputTraversedBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputTraversedBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelPlacementMapper *op = static_cast<vtkLabelPlacementMapper *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetOutputTraversedBounds(temp0);
      }
    else
      {
      op->vtkLabelPlacementMapper::SetOutputTraversedBounds(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLabelPlacementMapper_GetOutputTraversedBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputTraversedBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelPlacementMapper *op = static_cast<vtkLabelPlacementMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetOutputTraversedBounds() :
      op->vtkLabelPlacementMapper::GetOutputTraversedBounds());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLabelPlacementMapper_OutputTraversedBoundsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OutputTraversedBoundsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelPlacementMapper *op = static_cast<vtkLabelPlacementMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->OutputTraversedBoundsOn();
      }
    else
      {
      op->vtkLabelPlacementMapper::OutputTraversedBoundsOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLabelPlacementMapper_OutputTraversedBoundsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OutputTraversedBoundsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelPlacementMapper *op = static_cast<vtkLabelPlacementMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->OutputTraversedBoundsOff();
      }
    else
      {
      op->vtkLabelPlacementMapper::OutputTraversedBoundsOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLabelPlacementMapper_SetShape(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetShape");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelPlacementMapper *op = static_cast<vtkLabelPlacementMapper *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetShape(temp0);
      }
    else
      {
      op->vtkLabelPlacementMapper::SetShape(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLabelPlacementMapper_GetShapeMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetShapeMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelPlacementMapper *op = static_cast<vtkLabelPlacementMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetShapeMinValue() :
      op->vtkLabelPlacementMapper::GetShapeMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLabelPlacementMapper_GetShapeMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetShapeMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelPlacementMapper *op = static_cast<vtkLabelPlacementMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetShapeMaxValue() :
      op->vtkLabelPlacementMapper::GetShapeMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLabelPlacementMapper_GetShape(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetShape");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelPlacementMapper *op = static_cast<vtkLabelPlacementMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetShape() :
      op->vtkLabelPlacementMapper::GetShape());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLabelPlacementMapper_SetShapeToNone(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetShapeToNone");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelPlacementMapper *op = static_cast<vtkLabelPlacementMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetShapeToNone();
      }
    else
      {
      op->vtkLabelPlacementMapper::SetShapeToNone();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLabelPlacementMapper_SetShapeToRect(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetShapeToRect");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelPlacementMapper *op = static_cast<vtkLabelPlacementMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetShapeToRect();
      }
    else
      {
      op->vtkLabelPlacementMapper::SetShapeToRect();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLabelPlacementMapper_SetShapeToRoundedRect(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetShapeToRoundedRect");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelPlacementMapper *op = static_cast<vtkLabelPlacementMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetShapeToRoundedRect();
      }
    else
      {
      op->vtkLabelPlacementMapper::SetShapeToRoundedRect();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLabelPlacementMapper_SetStyle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetStyle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelPlacementMapper *op = static_cast<vtkLabelPlacementMapper *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetStyle(temp0);
      }
    else
      {
      op->vtkLabelPlacementMapper::SetStyle(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLabelPlacementMapper_GetStyleMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStyleMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelPlacementMapper *op = static_cast<vtkLabelPlacementMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetStyleMinValue() :
      op->vtkLabelPlacementMapper::GetStyleMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLabelPlacementMapper_GetStyleMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStyleMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelPlacementMapper *op = static_cast<vtkLabelPlacementMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetStyleMaxValue() :
      op->vtkLabelPlacementMapper::GetStyleMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLabelPlacementMapper_GetStyle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStyle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelPlacementMapper *op = static_cast<vtkLabelPlacementMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetStyle() :
      op->vtkLabelPlacementMapper::GetStyle());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLabelPlacementMapper_SetStyleToFilled(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetStyleToFilled");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelPlacementMapper *op = static_cast<vtkLabelPlacementMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetStyleToFilled();
      }
    else
      {
      op->vtkLabelPlacementMapper::SetStyleToFilled();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLabelPlacementMapper_SetStyleToOutline(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetStyleToOutline");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelPlacementMapper *op = static_cast<vtkLabelPlacementMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetStyleToOutline();
      }
    else
      {
      op->vtkLabelPlacementMapper::SetStyleToOutline();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLabelPlacementMapper_SetMargin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMargin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelPlacementMapper *op = static_cast<vtkLabelPlacementMapper *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetMargin(temp0);
      }
    else
      {
      op->vtkLabelPlacementMapper::SetMargin(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLabelPlacementMapper_GetMargin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMargin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelPlacementMapper *op = static_cast<vtkLabelPlacementMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetMargin() :
      op->vtkLabelPlacementMapper::GetMargin());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLabelPlacementMapper_SetBackgroundColor_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBackgroundColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelPlacementMapper *op = static_cast<vtkLabelPlacementMapper *>(vp);

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
      op->SetBackgroundColor(temp0, temp1, temp2);
      }
    else
      {
      op->vtkLabelPlacementMapper::SetBackgroundColor(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkLabelPlacementMapper_SetBackgroundColor_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBackgroundColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelPlacementMapper *op = static_cast<vtkLabelPlacementMapper *>(vp);

  double temp0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetBackgroundColor(temp0);
      }
    else
      {
      op->vtkLabelPlacementMapper::SetBackgroundColor(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkLabelPlacementMapper_SetBackgroundColor(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkLabelPlacementMapper_SetBackgroundColor_s1(self, args);
    case 1:
      return PyvtkLabelPlacementMapper_SetBackgroundColor_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetBackgroundColor");
  return NULL;
}



static PyObject *
PyvtkLabelPlacementMapper_GetBackgroundColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBackgroundColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelPlacementMapper *op = static_cast<vtkLabelPlacementMapper *>(vp);

  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetBackgroundColor() :
      op->vtkLabelPlacementMapper::GetBackgroundColor());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkLabelPlacementMapper_SetBackgroundOpacity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBackgroundOpacity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelPlacementMapper *op = static_cast<vtkLabelPlacementMapper *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetBackgroundOpacity(temp0);
      }
    else
      {
      op->vtkLabelPlacementMapper::SetBackgroundOpacity(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLabelPlacementMapper_GetBackgroundOpacityMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBackgroundOpacityMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelPlacementMapper *op = static_cast<vtkLabelPlacementMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetBackgroundOpacityMinValue() :
      op->vtkLabelPlacementMapper::GetBackgroundOpacityMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLabelPlacementMapper_GetBackgroundOpacityMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBackgroundOpacityMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelPlacementMapper *op = static_cast<vtkLabelPlacementMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetBackgroundOpacityMaxValue() :
      op->vtkLabelPlacementMapper::GetBackgroundOpacityMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLabelPlacementMapper_GetBackgroundOpacity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBackgroundOpacity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelPlacementMapper *op = static_cast<vtkLabelPlacementMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetBackgroundOpacity() :
      op->vtkLabelPlacementMapper::GetBackgroundOpacity());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLabelPlacementMapper_GetAnchorTransform(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAnchorTransform");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelPlacementMapper *op = static_cast<vtkLabelPlacementMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkCoordinate *tempr = (ap.IsBound() ?
      op->GetAnchorTransform() :
      op->vtkLabelPlacementMapper::GetAnchorTransform());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkLabelPlacementMapper_Methods[] = {
  {(char*)"GetClassName", PyvtkLabelPlacementMapper_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkLabelPlacementMapper_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkLabelPlacementMapper_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkLabelPlacementMapper\nC++: vtkLabelPlacementMapper *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkLabelPlacementMapper_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkLabelPlacementMapper\nC++: vtkLabelPlacementMapper *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"RenderOverlay", PyvtkLabelPlacementMapper_RenderOverlay, METH_VARARGS,
   (char*)"V.RenderOverlay(vtkViewport, vtkActor2D)\nC++: void RenderOverlay(vtkViewport *viewport, vtkActor2D *actor)\n\nDraw non-overlapping labels to the screen.\n"},
  {(char*)"SetRenderStrategy", PyvtkLabelPlacementMapper_SetRenderStrategy, METH_VARARGS,
   (char*)"V.SetRenderStrategy(vtkLabelRenderStrategy)\nC++: virtual void SetRenderStrategy(vtkLabelRenderStrategy *s)\n\nSet the label rendering strategy.\n"},
  {(char*)"GetRenderStrategy", PyvtkLabelPlacementMapper_GetRenderStrategy, METH_VARARGS,
   (char*)"V.GetRenderStrategy() -> vtkLabelRenderStrategy\nC++: vtkLabelRenderStrategy *GetRenderStrategy()\n\nSet the label rendering strategy.\n"},
  {(char*)"SetMaximumLabelFraction", PyvtkLabelPlacementMapper_SetMaximumLabelFraction, METH_VARARGS,
   (char*)"V.SetMaximumLabelFraction(float)\nC++: void SetMaximumLabelFraction(double)\n\nThe maximum fraction of the screen that the labels may cover.\nLabel placement stops when this fraction is reached.\n"},
  {(char*)"GetMaximumLabelFractionMinValue", PyvtkLabelPlacementMapper_GetMaximumLabelFractionMinValue, METH_VARARGS,
   (char*)"V.GetMaximumLabelFractionMinValue() -> float\nC++: double GetMaximumLabelFractionMinValue()\n\nThe maximum fraction of the screen that the labels may cover.\nLabel placement stops when this fraction is reached.\n"},
  {(char*)"GetMaximumLabelFractionMaxValue", PyvtkLabelPlacementMapper_GetMaximumLabelFractionMaxValue, METH_VARARGS,
   (char*)"V.GetMaximumLabelFractionMaxValue() -> float\nC++: double GetMaximumLabelFractionMaxValue()\n\nThe maximum fraction of the screen that the labels may cover.\nLabel placement stops when this fraction is reached.\n"},
  {(char*)"GetMaximumLabelFraction", PyvtkLabelPlacementMapper_GetMaximumLabelFraction, METH_VARARGS,
   (char*)"V.GetMaximumLabelFraction() -> float\nC++: double GetMaximumLabelFraction()\n\nThe maximum fraction of the screen that the labels may cover.\nLabel placement stops when this fraction is reached.\n"},
  {(char*)"SetIteratorType", PyvtkLabelPlacementMapper_SetIteratorType, METH_VARARGS,
   (char*)"V.SetIteratorType(int)\nC++: void SetIteratorType(int a)\n\nThe type of iterator used when traversing the labels. May be\nvtkLabelHierarchy::FRUSTUM or vtkLabelHierarchy::FULL_SORT\n"},
  {(char*)"GetIteratorType", PyvtkLabelPlacementMapper_GetIteratorType, METH_VARARGS,
   (char*)"V.GetIteratorType() -> int\nC++: int GetIteratorType()\n\nThe type of iterator used when traversing the labels. May be\nvtkLabelHierarchy::FRUSTUM or vtkLabelHierarchy::FULL_SORT\n"},
  {(char*)"SetUseUnicodeStrings", PyvtkLabelPlacementMapper_SetUseUnicodeStrings, METH_VARARGS,
   (char*)"V.SetUseUnicodeStrings(bool)\nC++: void SetUseUnicodeStrings(bool a)\n\nSet whether, or not, to use unicode strings.\n"},
  {(char*)"GetUseUnicodeStrings", PyvtkLabelPlacementMapper_GetUseUnicodeStrings, METH_VARARGS,
   (char*)"V.GetUseUnicodeStrings() -> bool\nC++: bool GetUseUnicodeStrings()\n\nSet whether, or not, to use unicode strings.\n"},
  {(char*)"UseUnicodeStringsOn", PyvtkLabelPlacementMapper_UseUnicodeStringsOn, METH_VARARGS,
   (char*)"V.UseUnicodeStringsOn()\nC++: void UseUnicodeStringsOn()\n\nSet whether, or not, to use unicode strings.\n"},
  {(char*)"UseUnicodeStringsOff", PyvtkLabelPlacementMapper_UseUnicodeStringsOff, METH_VARARGS,
   (char*)"V.UseUnicodeStringsOff()\nC++: void UseUnicodeStringsOff()\n\nSet whether, or not, to use unicode strings.\n"},
  {(char*)"GetPositionsAsNormals", PyvtkLabelPlacementMapper_GetPositionsAsNormals, METH_VARARGS,
   (char*)"V.GetPositionsAsNormals() -> bool\nC++: bool GetPositionsAsNormals()\n\nUse label anchor point coordinates as normal vectors and\neliminate those pointing away from the camera. Valid only when\npoints are on a sphere centered at the origin (such as a 3D\ngeographic view). Off by default.\n"},
  {(char*)"SetPositionsAsNormals", PyvtkLabelPlacementMapper_SetPositionsAsNormals, METH_VARARGS,
   (char*)"V.SetPositionsAsNormals(bool)\nC++: void SetPositionsAsNormals(bool a)\n\nUse label anchor point coordinates as normal vectors and\neliminate those pointing away from the camera. Valid only when\npoints are on a sphere centered at the origin (such as a 3D\ngeographic view). Off by default.\n"},
  {(char*)"PositionsAsNormalsOn", PyvtkLabelPlacementMapper_PositionsAsNormalsOn, METH_VARARGS,
   (char*)"V.PositionsAsNormalsOn()\nC++: void PositionsAsNormalsOn()\n\nUse label anchor point coordinates as normal vectors and\neliminate those pointing away from the camera. Valid only when\npoints are on a sphere centered at the origin (such as a 3D\ngeographic view). Off by default.\n"},
  {(char*)"PositionsAsNormalsOff", PyvtkLabelPlacementMapper_PositionsAsNormalsOff, METH_VARARGS,
   (char*)"V.PositionsAsNormalsOff()\nC++: void PositionsAsNormalsOff()\n\nUse label anchor point coordinates as normal vectors and\neliminate those pointing away from the camera. Valid only when\npoints are on a sphere centered at the origin (such as a 3D\ngeographic view). Off by default.\n"},
  {(char*)"GetGeneratePerturbedLabelSpokes", PyvtkLabelPlacementMapper_GetGeneratePerturbedLabelSpokes, METH_VARARGS,
   (char*)"V.GetGeneratePerturbedLabelSpokes() -> bool\nC++: bool GetGeneratePerturbedLabelSpokes()\n\nEnable drawing spokes (lines) to anchor point coordinates that\nwere perturbed for being coincident with other anchor point\ncoordinates.\n"},
  {(char*)"SetGeneratePerturbedLabelSpokes", PyvtkLabelPlacementMapper_SetGeneratePerturbedLabelSpokes, METH_VARARGS,
   (char*)"V.SetGeneratePerturbedLabelSpokes(bool)\nC++: void SetGeneratePerturbedLabelSpokes(bool a)\n\nEnable drawing spokes (lines) to anchor point coordinates that\nwere perturbed for being coincident with other anchor point\ncoordinates.\n"},
  {(char*)"GeneratePerturbedLabelSpokesOn", PyvtkLabelPlacementMapper_GeneratePerturbedLabelSpokesOn, METH_VARARGS,
   (char*)"V.GeneratePerturbedLabelSpokesOn()\nC++: void GeneratePerturbedLabelSpokesOn()\n\nEnable drawing spokes (lines) to anchor point coordinates that\nwere perturbed for being coincident with other anchor point\ncoordinates.\n"},
  {(char*)"GeneratePerturbedLabelSpokesOff", PyvtkLabelPlacementMapper_GeneratePerturbedLabelSpokesOff, METH_VARARGS,
   (char*)"V.GeneratePerturbedLabelSpokesOff()\nC++: void GeneratePerturbedLabelSpokesOff()\n\nEnable drawing spokes (lines) to anchor point coordinates that\nwere perturbed for being coincident with other anchor point\ncoordinates.\n"},
  {(char*)"GetUseDepthBuffer", PyvtkLabelPlacementMapper_GetUseDepthBuffer, METH_VARARGS,
   (char*)"V.GetUseDepthBuffer() -> bool\nC++: bool GetUseDepthBuffer()\n\nUse the depth buffer to test each label to see if it should not\nbe displayed if it would be occluded by other objects in the\nscene. Off by default.\n"},
  {(char*)"SetUseDepthBuffer", PyvtkLabelPlacementMapper_SetUseDepthBuffer, METH_VARARGS,
   (char*)"V.SetUseDepthBuffer(bool)\nC++: void SetUseDepthBuffer(bool a)\n\nUse the depth buffer to test each label to see if it should not\nbe displayed if it would be occluded by other objects in the\nscene. Off by default.\n"},
  {(char*)"UseDepthBufferOn", PyvtkLabelPlacementMapper_UseDepthBufferOn, METH_VARARGS,
   (char*)"V.UseDepthBufferOn()\nC++: void UseDepthBufferOn()\n\nUse the depth buffer to test each label to see if it should not\nbe displayed if it would be occluded by other objects in the\nscene. Off by default.\n"},
  {(char*)"UseDepthBufferOff", PyvtkLabelPlacementMapper_UseDepthBufferOff, METH_VARARGS,
   (char*)"V.UseDepthBufferOff()\nC++: void UseDepthBufferOff()\n\nUse the depth buffer to test each label to see if it should not\nbe displayed if it would be occluded by other objects in the\nscene. Off by default.\n"},
  {(char*)"SetPlaceAllLabels", PyvtkLabelPlacementMapper_SetPlaceAllLabels, METH_VARARGS,
   (char*)"V.SetPlaceAllLabels(bool)\nC++: void SetPlaceAllLabels(bool a)\n\nTells the placer to place every label regardless of overlap. Off\nby default.\n"},
  {(char*)"GetPlaceAllLabels", PyvtkLabelPlacementMapper_GetPlaceAllLabels, METH_VARARGS,
   (char*)"V.GetPlaceAllLabels() -> bool\nC++: bool GetPlaceAllLabels()\n\nTells the placer to place every label regardless of overlap. Off\nby default.\n"},
  {(char*)"PlaceAllLabelsOn", PyvtkLabelPlacementMapper_PlaceAllLabelsOn, METH_VARARGS,
   (char*)"V.PlaceAllLabelsOn()\nC++: void PlaceAllLabelsOn()\n\nTells the placer to place every label regardless of overlap. Off\nby default.\n"},
  {(char*)"PlaceAllLabelsOff", PyvtkLabelPlacementMapper_PlaceAllLabelsOff, METH_VARARGS,
   (char*)"V.PlaceAllLabelsOff()\nC++: void PlaceAllLabelsOff()\n\nTells the placer to place every label regardless of overlap. Off\nby default.\n"},
  {(char*)"SetOutputTraversedBounds", PyvtkLabelPlacementMapper_SetOutputTraversedBounds, METH_VARARGS,
   (char*)"V.SetOutputTraversedBounds(bool)\nC++: void SetOutputTraversedBounds(bool a)\n\nWhether to render traversed bounds. Off by default.\n"},
  {(char*)"GetOutputTraversedBounds", PyvtkLabelPlacementMapper_GetOutputTraversedBounds, METH_VARARGS,
   (char*)"V.GetOutputTraversedBounds() -> bool\nC++: bool GetOutputTraversedBounds()\n\nWhether to render traversed bounds. Off by default.\n"},
  {(char*)"OutputTraversedBoundsOn", PyvtkLabelPlacementMapper_OutputTraversedBoundsOn, METH_VARARGS,
   (char*)"V.OutputTraversedBoundsOn()\nC++: void OutputTraversedBoundsOn()\n\nWhether to render traversed bounds. Off by default.\n"},
  {(char*)"OutputTraversedBoundsOff", PyvtkLabelPlacementMapper_OutputTraversedBoundsOff, METH_VARARGS,
   (char*)"V.OutputTraversedBoundsOff()\nC++: void OutputTraversedBoundsOff()\n\nWhether to render traversed bounds. Off by default.\n"},
  {(char*)"SetShape", PyvtkLabelPlacementMapper_SetShape, METH_VARARGS,
   (char*)"V.SetShape(int)\nC++: void SetShape(int)\n\nThe shape of the label background, should be one of the values in\nthe LabelShape enumeration.\n"},
  {(char*)"GetShapeMinValue", PyvtkLabelPlacementMapper_GetShapeMinValue, METH_VARARGS,
   (char*)"V.GetShapeMinValue() -> int\nC++: int GetShapeMinValue()\n\nThe shape of the label background, should be one of the values in\nthe LabelShape enumeration.\n"},
  {(char*)"GetShapeMaxValue", PyvtkLabelPlacementMapper_GetShapeMaxValue, METH_VARARGS,
   (char*)"V.GetShapeMaxValue() -> int\nC++: int GetShapeMaxValue()\n\nThe shape of the label background, should be one of the values in\nthe LabelShape enumeration.\n"},
  {(char*)"GetShape", PyvtkLabelPlacementMapper_GetShape, METH_VARARGS,
   (char*)"V.GetShape() -> int\nC++: int GetShape()\n\nThe shape of the label background, should be one of the values in\nthe LabelShape enumeration.\n"},
  {(char*)"SetShapeToNone", PyvtkLabelPlacementMapper_SetShapeToNone, METH_VARARGS,
   (char*)"V.SetShapeToNone()\nC++: virtual void SetShapeToNone()\n\nThe shape of the label background, should be one of the values in\nthe LabelShape enumeration.\n"},
  {(char*)"SetShapeToRect", PyvtkLabelPlacementMapper_SetShapeToRect, METH_VARARGS,
   (char*)"V.SetShapeToRect()\nC++: virtual void SetShapeToRect()\n\nThe shape of the label background, should be one of the values in\nthe LabelShape enumeration.\n"},
  {(char*)"SetShapeToRoundedRect", PyvtkLabelPlacementMapper_SetShapeToRoundedRect, METH_VARARGS,
   (char*)"V.SetShapeToRoundedRect()\nC++: virtual void SetShapeToRoundedRect()\n\nThe shape of the label background, should be one of the values in\nthe LabelShape enumeration.\n"},
  {(char*)"SetStyle", PyvtkLabelPlacementMapper_SetStyle, METH_VARARGS,
   (char*)"V.SetStyle(int)\nC++: void SetStyle(int)\n\nThe style of the label background shape, should be one of the\nvalues in the LabelStyle enumeration.\n"},
  {(char*)"GetStyleMinValue", PyvtkLabelPlacementMapper_GetStyleMinValue, METH_VARARGS,
   (char*)"V.GetStyleMinValue() -> int\nC++: int GetStyleMinValue()\n\nThe style of the label background shape, should be one of the\nvalues in the LabelStyle enumeration.\n"},
  {(char*)"GetStyleMaxValue", PyvtkLabelPlacementMapper_GetStyleMaxValue, METH_VARARGS,
   (char*)"V.GetStyleMaxValue() -> int\nC++: int GetStyleMaxValue()\n\nThe style of the label background shape, should be one of the\nvalues in the LabelStyle enumeration.\n"},
  {(char*)"GetStyle", PyvtkLabelPlacementMapper_GetStyle, METH_VARARGS,
   (char*)"V.GetStyle() -> int\nC++: int GetStyle()\n\nThe style of the label background shape, should be one of the\nvalues in the LabelStyle enumeration.\n"},
  {(char*)"SetStyleToFilled", PyvtkLabelPlacementMapper_SetStyleToFilled, METH_VARARGS,
   (char*)"V.SetStyleToFilled()\nC++: virtual void SetStyleToFilled()\n\nThe style of the label background shape, should be one of the\nvalues in the LabelStyle enumeration.\n"},
  {(char*)"SetStyleToOutline", PyvtkLabelPlacementMapper_SetStyleToOutline, METH_VARARGS,
   (char*)"V.SetStyleToOutline()\nC++: virtual void SetStyleToOutline()\n\nThe style of the label background shape, should be one of the\nvalues in the LabelStyle enumeration.\n"},
  {(char*)"SetMargin", PyvtkLabelPlacementMapper_SetMargin, METH_VARARGS,
   (char*)"V.SetMargin(float)\nC++: void SetMargin(double a)\n\nThe size of the margin on the label background shape. Default is\n5.\n"},
  {(char*)"GetMargin", PyvtkLabelPlacementMapper_GetMargin, METH_VARARGS,
   (char*)"V.GetMargin() -> float\nC++: double GetMargin()\n\nThe size of the margin on the label background shape. Default is\n5.\n"},
  {(char*)"SetBackgroundColor", PyvtkLabelPlacementMapper_SetBackgroundColor, METH_VARARGS,
   (char*)"V.SetBackgroundColor(float, float, float)\nC++: void SetBackgroundColor(double, double, double)\nV.SetBackgroundColor((float, float, float))\nC++: void SetBackgroundColor(double a[3])\n\n"},
  {(char*)"GetBackgroundColor", PyvtkLabelPlacementMapper_GetBackgroundColor, METH_VARARGS,
   (char*)"V.GetBackgroundColor() -> (float, float, float)\nC++: double *GetBackgroundColor()\n\n"},
  {(char*)"SetBackgroundOpacity", PyvtkLabelPlacementMapper_SetBackgroundOpacity, METH_VARARGS,
   (char*)"V.SetBackgroundOpacity(float)\nC++: void SetBackgroundOpacity(double)\n\nThe opacity of the background shape.\n"},
  {(char*)"GetBackgroundOpacityMinValue", PyvtkLabelPlacementMapper_GetBackgroundOpacityMinValue, METH_VARARGS,
   (char*)"V.GetBackgroundOpacityMinValue() -> float\nC++: double GetBackgroundOpacityMinValue()\n\nThe opacity of the background shape.\n"},
  {(char*)"GetBackgroundOpacityMaxValue", PyvtkLabelPlacementMapper_GetBackgroundOpacityMaxValue, METH_VARARGS,
   (char*)"V.GetBackgroundOpacityMaxValue() -> float\nC++: double GetBackgroundOpacityMaxValue()\n\nThe opacity of the background shape.\n"},
  {(char*)"GetBackgroundOpacity", PyvtkLabelPlacementMapper_GetBackgroundOpacity, METH_VARARGS,
   (char*)"V.GetBackgroundOpacity() -> float\nC++: double GetBackgroundOpacity()\n\nThe opacity of the background shape.\n"},
  {(char*)"GetAnchorTransform", PyvtkLabelPlacementMapper_GetAnchorTransform, METH_VARARGS,
   (char*)"V.GetAnchorTransform() -> vtkCoordinate\nC++: vtkCoordinate *GetAnchorTransform()\n\nGet the transform for the anchor points.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkLabelPlacementMapper_StaticNew()
{
  return vtkLabelPlacementMapper::New();
}

PyObject *PyVTKClass_vtkLabelPlacementMapperNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkLabelPlacementMapper_StaticNew,
    PyvtkLabelPlacementMapper_Methods,
    "vtkLabelPlacementMapper", modulename,
    NULL, NULL,
    PyvtkLabelPlacementMapper_Doc(),
    PyVTKClass_vtkMapper2DNew(modulename));

  if (cls)
    {
    PyObject *d = PyVTKClass_GetDict(cls);
    PyObject *o;

    PyType_Ready(&PyvtkLabelPlacementMapper_LabelShape_Type);
    PyvtkLabelPlacementMapper_LabelShape_Type.tp_new = NULL;

    o = (PyObject *)&PyvtkLabelPlacementMapper_LabelShape_Type;
    if (o && PyDict_SetItemString(d, (char *)"LabelShape", o) != 0)
      {
      Py_DECREF(o);
      }

    PyType_Ready(&PyvtkLabelPlacementMapper_LabelStyle_Type);
    PyvtkLabelPlacementMapper_LabelStyle_Type.tp_new = NULL;

    o = (PyObject *)&PyvtkLabelPlacementMapper_LabelStyle_Type;
    if (o && PyDict_SetItemString(d, (char *)"LabelStyle", o) != 0)
      {
      Py_DECREF(o);
      }

    for (int c = 0; c < 4; c++)
      {
      typedef vtkLabelPlacementMapper::LabelShape cxx_enum_type;

      static const struct { const char *name; cxx_enum_type value; }
        constants[4] = {
          { "NONE", vtkLabelPlacementMapper::NONE },
          { "RECT", vtkLabelPlacementMapper::RECT },
          { "ROUNDED_RECT", vtkLabelPlacementMapper::ROUNDED_RECT },
          { "NUMBER_OF_LABEL_SHAPES", vtkLabelPlacementMapper::NUMBER_OF_LABEL_SHAPES },
        };

      o = PyvtkLabelPlacementMapper_LabelShape_FromEnum(constants[c].value);
      if (o)
        {
        PyDict_SetItemString(d, (char *)constants[c].name, o);
        Py_DECREF(o);
        }
      }

    for (int c = 0; c < 3; c++)
      {
      typedef vtkLabelPlacementMapper::LabelStyle cxx_enum_type;

      static const struct { const char *name; cxx_enum_type value; }
        constants[3] = {
          { "FILLED", vtkLabelPlacementMapper::FILLED },
          { "OUTLINE", vtkLabelPlacementMapper::OUTLINE },
          { "NUMBER_OF_LABEL_STYLES", vtkLabelPlacementMapper::NUMBER_OF_LABEL_STYLES },
        };

      o = PyvtkLabelPlacementMapper_LabelStyle_FromEnum(constants[c].value);
      if (o)
        {
        PyDict_SetItemString(d, (char *)constants[c].name, o);
        Py_DECREF(o);
        }
      }

    }

  return cls;
}

const char **PyvtkLabelPlacementMapper_Doc()
{
  static const char *docstring[] = {
    "vtkLabelPlacementMapper - Places and renders non-overlapping labels.\n\n",
    "Superclass: vtkMapper2D\n\n",
    "To use this mapper, first send your data through\nvtkPointSetToLabelHierarchy, which takes a set of points, associates\nspecial arrays to the points (label, priority, etc.), and produces a\nprioritized spatial tree of labels.\n\nThis mapper then takes that hierarchy (or hierarchies) as input, and\nevery frame will decide which labels and/or icons to place in order\nof priority, and will render only those",
    " labels/icons. A label render\nstrategy is used to render the labels, and can use e.g. FreeType or\nQt for rendering.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkLabelPlacementMapper(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkLabelPlacementMapperNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkLabelPlacementMapper", o) != 0)
    {
    Py_DECREF(o);
    }

}

