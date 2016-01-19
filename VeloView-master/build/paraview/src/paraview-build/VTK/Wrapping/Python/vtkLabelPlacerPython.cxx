// python wrapper for vtkLabelPlacer
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkLabelPlacer.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkLabelPlacer(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkLabelPlacerNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkPolyDataAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
#endif

static const char **PyvtkLabelPlacer_Doc();

#ifndef DECLARED_PyvtkLabelPlacer_LabelGravity_Type
extern VTK_PYTHON_EXPORT PyTypeObject PyvtkLabelPlacer_LabelGravity_Type;
#define DECLARED_PyvtkLabelPlacer_LabelGravity_Type
#endif

PyTypeObject PyvtkLabelPlacer_LabelGravity_Type = {
  PyObject_HEAD_INIT(&PyType_Type)
  0,
  (char*)"LabelGravity", // tp_name
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

PyObject *PyvtkLabelPlacer_LabelGravity_FromEnum(int val)
{
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkLabelPlacer_LabelGravity_Type);
  self->ob_ival = val;
  return (PyObject *)self;
}

#ifndef DECLARED_PyvtkLabelPlacer_OutputCoordinates_Type
extern VTK_PYTHON_EXPORT PyTypeObject PyvtkLabelPlacer_OutputCoordinates_Type;
#define DECLARED_PyvtkLabelPlacer_OutputCoordinates_Type
#endif

PyTypeObject PyvtkLabelPlacer_OutputCoordinates_Type = {
  PyObject_HEAD_INIT(&PyType_Type)
  0,
  (char*)"OutputCoordinates", // tp_name
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

PyObject *PyvtkLabelPlacer_OutputCoordinates_FromEnum(int val)
{
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkLabelPlacer_OutputCoordinates_Type);
  self->ob_ival = val;
  return (PyObject *)self;
}


static PyObject *
PyvtkLabelPlacer_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelPlacer *op = static_cast<vtkLabelPlacer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkLabelPlacer::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLabelPlacer_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelPlacer *op = static_cast<vtkLabelPlacer *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkLabelPlacer::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLabelPlacer_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelPlacer *op = static_cast<vtkLabelPlacer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkLabelPlacer *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkLabelPlacer::NewInstance());

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
PyvtkLabelPlacer_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkLabelPlacer *tempr = vtkLabelPlacer::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLabelPlacer_GetRenderer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRenderer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelPlacer *op = static_cast<vtkLabelPlacer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkRenderer *tempr = (ap.IsBound() ?
      op->GetRenderer() :
      op->vtkLabelPlacer::GetRenderer());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLabelPlacer_SetRenderer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRenderer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelPlacer *op = static_cast<vtkLabelPlacer *>(vp);

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
      op->vtkLabelPlacer::SetRenderer(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLabelPlacer_GetAnchorTransform(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAnchorTransform");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelPlacer *op = static_cast<vtkLabelPlacer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkCoordinate *tempr = (ap.IsBound() ?
      op->GetAnchorTransform() :
      op->vtkLabelPlacer::GetAnchorTransform());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLabelPlacer_SetGravity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGravity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelPlacer *op = static_cast<vtkLabelPlacer *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetGravity(temp0);
      }
    else
      {
      op->vtkLabelPlacer::SetGravity(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLabelPlacer_GetGravity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGravity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelPlacer *op = static_cast<vtkLabelPlacer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetGravity() :
      op->vtkLabelPlacer::GetGravity());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLabelPlacer_SetMaximumLabelFraction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaximumLabelFraction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelPlacer *op = static_cast<vtkLabelPlacer *>(vp);

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
      op->vtkLabelPlacer::SetMaximumLabelFraction(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLabelPlacer_GetMaximumLabelFractionMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumLabelFractionMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelPlacer *op = static_cast<vtkLabelPlacer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetMaximumLabelFractionMinValue() :
      op->vtkLabelPlacer::GetMaximumLabelFractionMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLabelPlacer_GetMaximumLabelFractionMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumLabelFractionMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelPlacer *op = static_cast<vtkLabelPlacer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetMaximumLabelFractionMaxValue() :
      op->vtkLabelPlacer::GetMaximumLabelFractionMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLabelPlacer_GetMaximumLabelFraction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumLabelFraction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelPlacer *op = static_cast<vtkLabelPlacer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetMaximumLabelFraction() :
      op->vtkLabelPlacer::GetMaximumLabelFraction());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLabelPlacer_SetIteratorType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIteratorType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelPlacer *op = static_cast<vtkLabelPlacer *>(vp);

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
      op->vtkLabelPlacer::SetIteratorType(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLabelPlacer_GetIteratorType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIteratorType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelPlacer *op = static_cast<vtkLabelPlacer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetIteratorType() :
      op->vtkLabelPlacer::GetIteratorType());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLabelPlacer_SetUseUnicodeStrings(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseUnicodeStrings");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelPlacer *op = static_cast<vtkLabelPlacer *>(vp);

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
      op->vtkLabelPlacer::SetUseUnicodeStrings(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLabelPlacer_GetUseUnicodeStrings(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseUnicodeStrings");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelPlacer *op = static_cast<vtkLabelPlacer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetUseUnicodeStrings() :
      op->vtkLabelPlacer::GetUseUnicodeStrings());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLabelPlacer_UseUnicodeStringsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseUnicodeStringsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelPlacer *op = static_cast<vtkLabelPlacer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->UseUnicodeStringsOn();
      }
    else
      {
      op->vtkLabelPlacer::UseUnicodeStringsOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLabelPlacer_UseUnicodeStringsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseUnicodeStringsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelPlacer *op = static_cast<vtkLabelPlacer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->UseUnicodeStringsOff();
      }
    else
      {
      op->vtkLabelPlacer::UseUnicodeStringsOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLabelPlacer_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelPlacer *op = static_cast<vtkLabelPlacer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMTime() :
      op->vtkLabelPlacer::GetMTime());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLabelPlacer_GetPositionsAsNormals(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPositionsAsNormals");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelPlacer *op = static_cast<vtkLabelPlacer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetPositionsAsNormals() :
      op->vtkLabelPlacer::GetPositionsAsNormals());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLabelPlacer_SetPositionsAsNormals(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPositionsAsNormals");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelPlacer *op = static_cast<vtkLabelPlacer *>(vp);

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
      op->vtkLabelPlacer::SetPositionsAsNormals(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLabelPlacer_PositionsAsNormalsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PositionsAsNormalsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelPlacer *op = static_cast<vtkLabelPlacer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->PositionsAsNormalsOn();
      }
    else
      {
      op->vtkLabelPlacer::PositionsAsNormalsOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLabelPlacer_PositionsAsNormalsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PositionsAsNormalsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelPlacer *op = static_cast<vtkLabelPlacer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->PositionsAsNormalsOff();
      }
    else
      {
      op->vtkLabelPlacer::PositionsAsNormalsOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLabelPlacer_GetGeneratePerturbedLabelSpokes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGeneratePerturbedLabelSpokes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelPlacer *op = static_cast<vtkLabelPlacer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetGeneratePerturbedLabelSpokes() :
      op->vtkLabelPlacer::GetGeneratePerturbedLabelSpokes());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLabelPlacer_SetGeneratePerturbedLabelSpokes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGeneratePerturbedLabelSpokes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelPlacer *op = static_cast<vtkLabelPlacer *>(vp);

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
      op->vtkLabelPlacer::SetGeneratePerturbedLabelSpokes(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLabelPlacer_GeneratePerturbedLabelSpokesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GeneratePerturbedLabelSpokesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelPlacer *op = static_cast<vtkLabelPlacer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->GeneratePerturbedLabelSpokesOn();
      }
    else
      {
      op->vtkLabelPlacer::GeneratePerturbedLabelSpokesOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLabelPlacer_GeneratePerturbedLabelSpokesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GeneratePerturbedLabelSpokesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelPlacer *op = static_cast<vtkLabelPlacer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->GeneratePerturbedLabelSpokesOff();
      }
    else
      {
      op->vtkLabelPlacer::GeneratePerturbedLabelSpokesOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLabelPlacer_GetUseDepthBuffer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseDepthBuffer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelPlacer *op = static_cast<vtkLabelPlacer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetUseDepthBuffer() :
      op->vtkLabelPlacer::GetUseDepthBuffer());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLabelPlacer_SetUseDepthBuffer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseDepthBuffer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelPlacer *op = static_cast<vtkLabelPlacer *>(vp);

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
      op->vtkLabelPlacer::SetUseDepthBuffer(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLabelPlacer_UseDepthBufferOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseDepthBufferOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelPlacer *op = static_cast<vtkLabelPlacer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->UseDepthBufferOn();
      }
    else
      {
      op->vtkLabelPlacer::UseDepthBufferOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLabelPlacer_UseDepthBufferOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseDepthBufferOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelPlacer *op = static_cast<vtkLabelPlacer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->UseDepthBufferOff();
      }
    else
      {
      op->vtkLabelPlacer::UseDepthBufferOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLabelPlacer_GetOutputTraversedBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputTraversedBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelPlacer *op = static_cast<vtkLabelPlacer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetOutputTraversedBounds() :
      op->vtkLabelPlacer::GetOutputTraversedBounds());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLabelPlacer_SetOutputTraversedBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputTraversedBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelPlacer *op = static_cast<vtkLabelPlacer *>(vp);

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
      op->vtkLabelPlacer::SetOutputTraversedBounds(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLabelPlacer_OutputTraversedBoundsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OutputTraversedBoundsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelPlacer *op = static_cast<vtkLabelPlacer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->OutputTraversedBoundsOn();
      }
    else
      {
      op->vtkLabelPlacer::OutputTraversedBoundsOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLabelPlacer_OutputTraversedBoundsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OutputTraversedBoundsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelPlacer *op = static_cast<vtkLabelPlacer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->OutputTraversedBoundsOff();
      }
    else
      {
      op->vtkLabelPlacer::OutputTraversedBoundsOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLabelPlacer_GetOutputCoordinateSystem(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputCoordinateSystem");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelPlacer *op = static_cast<vtkLabelPlacer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetOutputCoordinateSystem() :
      op->vtkLabelPlacer::GetOutputCoordinateSystem());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLabelPlacer_SetOutputCoordinateSystem(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputCoordinateSystem");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelPlacer *op = static_cast<vtkLabelPlacer *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetOutputCoordinateSystem(temp0);
      }
    else
      {
      op->vtkLabelPlacer::SetOutputCoordinateSystem(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLabelPlacer_GetOutputCoordinateSystemMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputCoordinateSystemMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelPlacer *op = static_cast<vtkLabelPlacer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetOutputCoordinateSystemMinValue() :
      op->vtkLabelPlacer::GetOutputCoordinateSystemMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLabelPlacer_GetOutputCoordinateSystemMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputCoordinateSystemMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelPlacer *op = static_cast<vtkLabelPlacer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetOutputCoordinateSystemMaxValue() :
      op->vtkLabelPlacer::GetOutputCoordinateSystemMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLabelPlacer_OutputCoordinateSystemWorld(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OutputCoordinateSystemWorld");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelPlacer *op = static_cast<vtkLabelPlacer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->OutputCoordinateSystemWorld();
      }
    else
      {
      op->vtkLabelPlacer::OutputCoordinateSystemWorld();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLabelPlacer_OutputCoordinateSystemDisplay(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OutputCoordinateSystemDisplay");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelPlacer *op = static_cast<vtkLabelPlacer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->OutputCoordinateSystemDisplay();
      }
    else
      {
      op->vtkLabelPlacer::OutputCoordinateSystemDisplay();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkLabelPlacer_Methods[] = {
  {(char*)"GetClassName", PyvtkLabelPlacer_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkLabelPlacer_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkLabelPlacer_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkLabelPlacer\nC++: vtkLabelPlacer *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkLabelPlacer_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkLabelPlacer\nC++: vtkLabelPlacer *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetRenderer", PyvtkLabelPlacer_GetRenderer, METH_VARARGS,
   (char*)"V.GetRenderer() -> vtkRenderer\nC++: vtkRenderer *GetRenderer()\n\n"},
  {(char*)"SetRenderer", PyvtkLabelPlacer_SetRenderer, METH_VARARGS,
   (char*)"V.SetRenderer(vtkRenderer)\nC++: virtual void SetRenderer(vtkRenderer *)\n\n"},
  {(char*)"GetAnchorTransform", PyvtkLabelPlacer_GetAnchorTransform, METH_VARARGS,
   (char*)"V.GetAnchorTransform() -> vtkCoordinate\nC++: vtkCoordinate *GetAnchorTransform()\n\n"},
  {(char*)"SetGravity", PyvtkLabelPlacer_SetGravity, METH_VARARGS,
   (char*)"V.SetGravity(int)\nC++: virtual void SetGravity(int gravity)\n\nThe placement of the label relative to the anchor point.\n"},
  {(char*)"GetGravity", PyvtkLabelPlacer_GetGravity, METH_VARARGS,
   (char*)"V.GetGravity() -> int\nC++: int GetGravity()\n\nThe placement of the label relative to the anchor point.\n"},
  {(char*)"SetMaximumLabelFraction", PyvtkLabelPlacer_SetMaximumLabelFraction, METH_VARARGS,
   (char*)"V.SetMaximumLabelFraction(float)\nC++: void SetMaximumLabelFraction(double)\n\nThe maximum amount of screen space labels can take up before\nplacement terminates.\n"},
  {(char*)"GetMaximumLabelFractionMinValue", PyvtkLabelPlacer_GetMaximumLabelFractionMinValue, METH_VARARGS,
   (char*)"V.GetMaximumLabelFractionMinValue() -> float\nC++: double GetMaximumLabelFractionMinValue()\n\nThe maximum amount of screen space labels can take up before\nplacement terminates.\n"},
  {(char*)"GetMaximumLabelFractionMaxValue", PyvtkLabelPlacer_GetMaximumLabelFractionMaxValue, METH_VARARGS,
   (char*)"V.GetMaximumLabelFractionMaxValue() -> float\nC++: double GetMaximumLabelFractionMaxValue()\n\nThe maximum amount of screen space labels can take up before\nplacement terminates.\n"},
  {(char*)"GetMaximumLabelFraction", PyvtkLabelPlacer_GetMaximumLabelFraction, METH_VARARGS,
   (char*)"V.GetMaximumLabelFraction() -> float\nC++: double GetMaximumLabelFraction()\n\nThe maximum amount of screen space labels can take up before\nplacement terminates.\n"},
  {(char*)"SetIteratorType", PyvtkLabelPlacer_SetIteratorType, METH_VARARGS,
   (char*)"V.SetIteratorType(int)\nC++: void SetIteratorType(int a)\n\nThe type of iterator used when traversing the labels. May be\nvtkLabelHierarchy::FRUSTUM or vtkLabelHierarchy::FULL_SORT.\n"},
  {(char*)"GetIteratorType", PyvtkLabelPlacer_GetIteratorType, METH_VARARGS,
   (char*)"V.GetIteratorType() -> int\nC++: int GetIteratorType()\n\nThe type of iterator used when traversing the labels. May be\nvtkLabelHierarchy::FRUSTUM or vtkLabelHierarchy::FULL_SORT.\n"},
  {(char*)"SetUseUnicodeStrings", PyvtkLabelPlacer_SetUseUnicodeStrings, METH_VARARGS,
   (char*)"V.SetUseUnicodeStrings(bool)\nC++: void SetUseUnicodeStrings(bool a)\n\nSet whether, or not, to use unicode strings.\n"},
  {(char*)"GetUseUnicodeStrings", PyvtkLabelPlacer_GetUseUnicodeStrings, METH_VARARGS,
   (char*)"V.GetUseUnicodeStrings() -> bool\nC++: bool GetUseUnicodeStrings()\n\nSet whether, or not, to use unicode strings.\n"},
  {(char*)"UseUnicodeStringsOn", PyvtkLabelPlacer_UseUnicodeStringsOn, METH_VARARGS,
   (char*)"V.UseUnicodeStringsOn()\nC++: void UseUnicodeStringsOn()\n\nSet whether, or not, to use unicode strings.\n"},
  {(char*)"UseUnicodeStringsOff", PyvtkLabelPlacer_UseUnicodeStringsOff, METH_VARARGS,
   (char*)"V.UseUnicodeStringsOff()\nC++: void UseUnicodeStringsOff()\n\nSet whether, or not, to use unicode strings.\n"},
  {(char*)"GetMTime", PyvtkLabelPlacer_GetMTime, METH_VARARGS,
   (char*)"V.GetMTime() -> int\nC++: virtual unsigned long GetMTime()\n\n"},
  {(char*)"GetPositionsAsNormals", PyvtkLabelPlacer_GetPositionsAsNormals, METH_VARARGS,
   (char*)"V.GetPositionsAsNormals() -> bool\nC++: bool GetPositionsAsNormals()\n\nUse label anchor point coordinates as normal vectors and\neliminate those pointing away from the camera. Valid only when\npoints are on a sphere centered at the origin (such as a 3D\ngeographic view). Off by default.\n"},
  {(char*)"SetPositionsAsNormals", PyvtkLabelPlacer_SetPositionsAsNormals, METH_VARARGS,
   (char*)"V.SetPositionsAsNormals(bool)\nC++: void SetPositionsAsNormals(bool a)\n\nUse label anchor point coordinates as normal vectors and\neliminate those pointing away from the camera. Valid only when\npoints are on a sphere centered at the origin (such as a 3D\ngeographic view). Off by default.\n"},
  {(char*)"PositionsAsNormalsOn", PyvtkLabelPlacer_PositionsAsNormalsOn, METH_VARARGS,
   (char*)"V.PositionsAsNormalsOn()\nC++: void PositionsAsNormalsOn()\n\nUse label anchor point coordinates as normal vectors and\neliminate those pointing away from the camera. Valid only when\npoints are on a sphere centered at the origin (such as a 3D\ngeographic view). Off by default.\n"},
  {(char*)"PositionsAsNormalsOff", PyvtkLabelPlacer_PositionsAsNormalsOff, METH_VARARGS,
   (char*)"V.PositionsAsNormalsOff()\nC++: void PositionsAsNormalsOff()\n\nUse label anchor point coordinates as normal vectors and\neliminate those pointing away from the camera. Valid only when\npoints are on a sphere centered at the origin (such as a 3D\ngeographic view). Off by default.\n"},
  {(char*)"GetGeneratePerturbedLabelSpokes", PyvtkLabelPlacer_GetGeneratePerturbedLabelSpokes, METH_VARARGS,
   (char*)"V.GetGeneratePerturbedLabelSpokes() -> bool\nC++: bool GetGeneratePerturbedLabelSpokes()\n\nEnable drawing spokes (lines) to anchor point coordinates that\nwere perturbed for being coincident with other anchor point\ncoordinates.\n"},
  {(char*)"SetGeneratePerturbedLabelSpokes", PyvtkLabelPlacer_SetGeneratePerturbedLabelSpokes, METH_VARARGS,
   (char*)"V.SetGeneratePerturbedLabelSpokes(bool)\nC++: void SetGeneratePerturbedLabelSpokes(bool a)\n\nEnable drawing spokes (lines) to anchor point coordinates that\nwere perturbed for being coincident with other anchor point\ncoordinates.\n"},
  {(char*)"GeneratePerturbedLabelSpokesOn", PyvtkLabelPlacer_GeneratePerturbedLabelSpokesOn, METH_VARARGS,
   (char*)"V.GeneratePerturbedLabelSpokesOn()\nC++: void GeneratePerturbedLabelSpokesOn()\n\nEnable drawing spokes (lines) to anchor point coordinates that\nwere perturbed for being coincident with other anchor point\ncoordinates.\n"},
  {(char*)"GeneratePerturbedLabelSpokesOff", PyvtkLabelPlacer_GeneratePerturbedLabelSpokesOff, METH_VARARGS,
   (char*)"V.GeneratePerturbedLabelSpokesOff()\nC++: void GeneratePerturbedLabelSpokesOff()\n\nEnable drawing spokes (lines) to anchor point coordinates that\nwere perturbed for being coincident with other anchor point\ncoordinates.\n"},
  {(char*)"GetUseDepthBuffer", PyvtkLabelPlacer_GetUseDepthBuffer, METH_VARARGS,
   (char*)"V.GetUseDepthBuffer() -> bool\nC++: bool GetUseDepthBuffer()\n\nUse the depth buffer to test each label to see if it should not\nbe displayed if it would be occluded by other objects in the\nscene. Off by default.\n"},
  {(char*)"SetUseDepthBuffer", PyvtkLabelPlacer_SetUseDepthBuffer, METH_VARARGS,
   (char*)"V.SetUseDepthBuffer(bool)\nC++: void SetUseDepthBuffer(bool a)\n\nUse the depth buffer to test each label to see if it should not\nbe displayed if it would be occluded by other objects in the\nscene. Off by default.\n"},
  {(char*)"UseDepthBufferOn", PyvtkLabelPlacer_UseDepthBufferOn, METH_VARARGS,
   (char*)"V.UseDepthBufferOn()\nC++: void UseDepthBufferOn()\n\nUse the depth buffer to test each label to see if it should not\nbe displayed if it would be occluded by other objects in the\nscene. Off by default.\n"},
  {(char*)"UseDepthBufferOff", PyvtkLabelPlacer_UseDepthBufferOff, METH_VARARGS,
   (char*)"V.UseDepthBufferOff()\nC++: void UseDepthBufferOff()\n\nUse the depth buffer to test each label to see if it should not\nbe displayed if it would be occluded by other objects in the\nscene. Off by default.\n"},
  {(char*)"GetOutputTraversedBounds", PyvtkLabelPlacer_GetOutputTraversedBounds, METH_VARARGS,
   (char*)"V.GetOutputTraversedBounds() -> bool\nC++: bool GetOutputTraversedBounds()\n\nIn the second output, output the geometry of the traversed octree\nnodes.\n"},
  {(char*)"SetOutputTraversedBounds", PyvtkLabelPlacer_SetOutputTraversedBounds, METH_VARARGS,
   (char*)"V.SetOutputTraversedBounds(bool)\nC++: void SetOutputTraversedBounds(bool a)\n\nIn the second output, output the geometry of the traversed octree\nnodes.\n"},
  {(char*)"OutputTraversedBoundsOn", PyvtkLabelPlacer_OutputTraversedBoundsOn, METH_VARARGS,
   (char*)"V.OutputTraversedBoundsOn()\nC++: void OutputTraversedBoundsOn()\n\nIn the second output, output the geometry of the traversed octree\nnodes.\n"},
  {(char*)"OutputTraversedBoundsOff", PyvtkLabelPlacer_OutputTraversedBoundsOff, METH_VARARGS,
   (char*)"V.OutputTraversedBoundsOff()\nC++: void OutputTraversedBoundsOff()\n\nIn the second output, output the geometry of the traversed octree\nnodes.\n"},
  {(char*)"GetOutputCoordinateSystem", PyvtkLabelPlacer_GetOutputCoordinateSystem, METH_VARARGS,
   (char*)"V.GetOutputCoordinateSystem() -> int\nC++: int GetOutputCoordinateSystem()\n\nSet/get the coordinate system used for output labels. The output\ndatasets may have point coordinates reported in the world space\nor display space.\n"},
  {(char*)"SetOutputCoordinateSystem", PyvtkLabelPlacer_SetOutputCoordinateSystem, METH_VARARGS,
   (char*)"V.SetOutputCoordinateSystem(int)\nC++: void SetOutputCoordinateSystem(int)\n\nSet/get the coordinate system used for output labels. The output\ndatasets may have point coordinates reported in the world space\nor display space.\n"},
  {(char*)"GetOutputCoordinateSystemMinValue", PyvtkLabelPlacer_GetOutputCoordinateSystemMinValue, METH_VARARGS,
   (char*)"V.GetOutputCoordinateSystemMinValue() -> int\nC++: int GetOutputCoordinateSystemMinValue()\n\nSet/get the coordinate system used for output labels. The output\ndatasets may have point coordinates reported in the world space\nor display space.\n"},
  {(char*)"GetOutputCoordinateSystemMaxValue", PyvtkLabelPlacer_GetOutputCoordinateSystemMaxValue, METH_VARARGS,
   (char*)"V.GetOutputCoordinateSystemMaxValue() -> int\nC++: int GetOutputCoordinateSystemMaxValue()\n\nSet/get the coordinate system used for output labels. The output\ndatasets may have point coordinates reported in the world space\nor display space.\n"},
  {(char*)"OutputCoordinateSystemWorld", PyvtkLabelPlacer_OutputCoordinateSystemWorld, METH_VARARGS,
   (char*)"V.OutputCoordinateSystemWorld()\nC++: void OutputCoordinateSystemWorld()\n\nSet/get the coordinate system used for output labels. The output\ndatasets may have point coordinates reported in the world space\nor display space.\n"},
  {(char*)"OutputCoordinateSystemDisplay", PyvtkLabelPlacer_OutputCoordinateSystemDisplay, METH_VARARGS,
   (char*)"V.OutputCoordinateSystemDisplay()\nC++: void OutputCoordinateSystemDisplay()\n\nSet/get the coordinate system used for output labels. The output\ndatasets may have point coordinates reported in the world space\nor display space.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkLabelPlacer_StaticNew()
{
  return vtkLabelPlacer::New();
}

PyObject *PyVTKClass_vtkLabelPlacerNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkLabelPlacer_StaticNew,
    PyvtkLabelPlacer_Methods,
    "vtkLabelPlacer", modulename,
    NULL, NULL,
    PyvtkLabelPlacer_Doc(),
    PyVTKClass_vtkPolyDataAlgorithmNew(modulename));

  if (cls)
    {
    PyObject *d = PyVTKClass_GetDict(cls);
    PyObject *o;

    PyType_Ready(&PyvtkLabelPlacer_LabelGravity_Type);
    PyvtkLabelPlacer_LabelGravity_Type.tp_new = NULL;

    o = (PyObject *)&PyvtkLabelPlacer_LabelGravity_Type;
    if (o && PyDict_SetItemString(d, (char *)"LabelGravity", o) != 0)
      {
      Py_DECREF(o);
      }

    PyType_Ready(&PyvtkLabelPlacer_OutputCoordinates_Type);
    PyvtkLabelPlacer_OutputCoordinates_Type.tp_new = NULL;

    o = (PyObject *)&PyvtkLabelPlacer_OutputCoordinates_Type;
    if (o && PyDict_SetItemString(d, (char *)"OutputCoordinates", o) != 0)
      {
      Py_DECREF(o);
      }

    for (int c = 0; c < 21; c++)
      {
      typedef vtkLabelPlacer::LabelGravity cxx_enum_type;

      static const struct { const char *name; cxx_enum_type value; }
        constants[21] = {
          { "VerticalBottomBit", vtkLabelPlacer::VerticalBottomBit },
          { "VerticalBaselineBit", vtkLabelPlacer::VerticalBaselineBit },
          { "VerticalCenterBit", vtkLabelPlacer::VerticalCenterBit },
          { "VerticalTopBit", vtkLabelPlacer::VerticalTopBit },
          { "HorizontalLeftBit", vtkLabelPlacer::HorizontalLeftBit },
          { "HorizontalCenterBit", vtkLabelPlacer::HorizontalCenterBit },
          { "HorizontalRightBit", vtkLabelPlacer::HorizontalRightBit },
          { "VerticalBitMask", vtkLabelPlacer::VerticalBitMask },
          { "HorizontalBitMask", vtkLabelPlacer::HorizontalBitMask },
          { "LowerLeft", vtkLabelPlacer::LowerLeft },
          { "LowerCenter", vtkLabelPlacer::LowerCenter },
          { "LowerRight", vtkLabelPlacer::LowerRight },
          { "BaselineLeft", vtkLabelPlacer::BaselineLeft },
          { "BaselineCenter", vtkLabelPlacer::BaselineCenter },
          { "BaselineRight", vtkLabelPlacer::BaselineRight },
          { "CenterLeft", vtkLabelPlacer::CenterLeft },
          { "CenterCenter", vtkLabelPlacer::CenterCenter },
          { "CenterRight", vtkLabelPlacer::CenterRight },
          { "UpperLeft", vtkLabelPlacer::UpperLeft },
          { "UpperCenter", vtkLabelPlacer::UpperCenter },
          { "UpperRight", vtkLabelPlacer::UpperRight },
        };

      o = PyvtkLabelPlacer_LabelGravity_FromEnum(constants[c].value);
      if (o)
        {
        PyDict_SetItemString(d, (char *)constants[c].name, o);
        Py_DECREF(o);
        }
      }

    for (int c = 0; c < 2; c++)
      {
      typedef vtkLabelPlacer::OutputCoordinates cxx_enum_type;

      static const struct { const char *name; cxx_enum_type value; }
        constants[2] = {
          { "WORLD", vtkLabelPlacer::WORLD },
          { "DISPLAY", vtkLabelPlacer::DISPLAY },
        };

      o = PyvtkLabelPlacer_OutputCoordinates_FromEnum(constants[c].value);
      if (o)
        {
        PyDict_SetItemString(d, (char *)constants[c].name, o);
        Py_DECREF(o);
        }
      }

    }

  return cls;
}

const char **PyvtkLabelPlacer_Doc()
{
  static const char *docstring[] = {
    "vtkLabelPlacer - place a prioritized hierarchy of labels in screen\nspace\n\n",
    "Superclass: vtkPolyDataAlgorithm\n\n",
    "This class is deprecated and will be removed from VTK in a future\nrelease. Use vtkLabelPlacementMapper instead.\n\nThis should probably be a mapper unto itself (given that the polydata\noutput could be large and will realistically always be iterated over\nexactly once before being tossed for the next frame of the render).\n\nIn any event, it takes as input one (or more, eventually)\nvtkLabelHierarchies t",
    "hat represent prioritized lists of labels sorted\nby their placement in space. As output, it provides vtkPolyData\ncontaining only VTK_QUAD cells, each representing a single label from\nthe input. Each quadrilateral has cell data indicating what label in\nthe input it corresponds to (via an array named \"LabelId\").\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkLabelPlacer(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkLabelPlacerNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkLabelPlacer", o) != 0)
    {
    Py_DECREF(o);
    }

}

