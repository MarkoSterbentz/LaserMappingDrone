// python wrapper for vtkSplineRepresentation
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkSplineRepresentation.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkSplineRepresentation(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkSplineRepresentationNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkWidgetRepresentationNew
extern "C" { PyObject *PyVTKClass_vtkWidgetRepresentationNew(const char *); }
#define DECLARED_PyVTKClass_vtkWidgetRepresentationNew
#endif

static const char **PyvtkSplineRepresentation_Doc();

#ifndef DECLARED_PyvtkSplineRepresentation__InteractionState_Type
extern VTK_PYTHON_EXPORT PyTypeObject PyvtkSplineRepresentation__InteractionState_Type;
#define DECLARED_PyvtkSplineRepresentation__InteractionState_Type
#endif

PyTypeObject PyvtkSplineRepresentation__InteractionState_Type = {
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

PyObject *PyvtkSplineRepresentation__InteractionState_FromEnum(int val)
{
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkSplineRepresentation__InteractionState_Type);
  self->ob_ival = val;
  return (PyObject *)self;
}


static PyObject *
PyvtkSplineRepresentation_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineRepresentation *op = static_cast<vtkSplineRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkSplineRepresentation::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSplineRepresentation_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineRepresentation *op = static_cast<vtkSplineRepresentation *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSplineRepresentation::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSplineRepresentation_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineRepresentation *op = static_cast<vtkSplineRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkSplineRepresentation *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSplineRepresentation::NewInstance());

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
PyvtkSplineRepresentation_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkSplineRepresentation *tempr = vtkSplineRepresentation::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSplineRepresentation_SetInteractionState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInteractionState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineRepresentation *op = static_cast<vtkSplineRepresentation *>(vp);

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
      op->vtkSplineRepresentation::SetInteractionState(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSplineRepresentation_SetProjectToPlane(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetProjectToPlane");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineRepresentation *op = static_cast<vtkSplineRepresentation *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetProjectToPlane(temp0);
      }
    else
      {
      op->vtkSplineRepresentation::SetProjectToPlane(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSplineRepresentation_GetProjectToPlane(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProjectToPlane");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineRepresentation *op = static_cast<vtkSplineRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetProjectToPlane() :
      op->vtkSplineRepresentation::GetProjectToPlane());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSplineRepresentation_ProjectToPlaneOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ProjectToPlaneOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineRepresentation *op = static_cast<vtkSplineRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ProjectToPlaneOn();
      }
    else
      {
      op->vtkSplineRepresentation::ProjectToPlaneOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSplineRepresentation_ProjectToPlaneOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ProjectToPlaneOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineRepresentation *op = static_cast<vtkSplineRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ProjectToPlaneOff();
      }
    else
      {
      op->vtkSplineRepresentation::ProjectToPlaneOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSplineRepresentation_SetPlaneSource(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPlaneSource");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineRepresentation *op = static_cast<vtkSplineRepresentation *>(vp);

  vtkPlaneSource *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPlaneSource"))
    {
    if (ap.IsBound())
      {
      op->SetPlaneSource(temp0);
      }
    else
      {
      op->vtkSplineRepresentation::SetPlaneSource(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSplineRepresentation_SetProjectionNormal(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetProjectionNormal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineRepresentation *op = static_cast<vtkSplineRepresentation *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetProjectionNormal(temp0);
      }
    else
      {
      op->vtkSplineRepresentation::SetProjectionNormal(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSplineRepresentation_GetProjectionNormalMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProjectionNormalMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineRepresentation *op = static_cast<vtkSplineRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetProjectionNormalMinValue() :
      op->vtkSplineRepresentation::GetProjectionNormalMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSplineRepresentation_GetProjectionNormalMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProjectionNormalMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineRepresentation *op = static_cast<vtkSplineRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetProjectionNormalMaxValue() :
      op->vtkSplineRepresentation::GetProjectionNormalMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSplineRepresentation_GetProjectionNormal(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProjectionNormal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineRepresentation *op = static_cast<vtkSplineRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetProjectionNormal() :
      op->vtkSplineRepresentation::GetProjectionNormal());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSplineRepresentation_SetProjectionNormalToXAxes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetProjectionNormalToXAxes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineRepresentation *op = static_cast<vtkSplineRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetProjectionNormalToXAxes();
      }
    else
      {
      op->vtkSplineRepresentation::SetProjectionNormalToXAxes();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSplineRepresentation_SetProjectionNormalToYAxes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetProjectionNormalToYAxes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineRepresentation *op = static_cast<vtkSplineRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetProjectionNormalToYAxes();
      }
    else
      {
      op->vtkSplineRepresentation::SetProjectionNormalToYAxes();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSplineRepresentation_SetProjectionNormalToZAxes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetProjectionNormalToZAxes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineRepresentation *op = static_cast<vtkSplineRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetProjectionNormalToZAxes();
      }
    else
      {
      op->vtkSplineRepresentation::SetProjectionNormalToZAxes();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSplineRepresentation_SetProjectionNormalToOblique(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetProjectionNormalToOblique");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineRepresentation *op = static_cast<vtkSplineRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetProjectionNormalToOblique();
      }
    else
      {
      op->vtkSplineRepresentation::SetProjectionNormalToOblique();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSplineRepresentation_SetProjectionPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetProjectionPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineRepresentation *op = static_cast<vtkSplineRepresentation *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetProjectionPosition(temp0);
      }
    else
      {
      op->vtkSplineRepresentation::SetProjectionPosition(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSplineRepresentation_GetProjectionPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProjectionPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineRepresentation *op = static_cast<vtkSplineRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetProjectionPosition() :
      op->vtkSplineRepresentation::GetProjectionPosition());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSplineRepresentation_GetPolyData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPolyData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineRepresentation *op = static_cast<vtkSplineRepresentation *>(vp);

  vtkPolyData *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPolyData"))
    {
    if (ap.IsBound())
      {
      op->GetPolyData(temp0);
      }
    else
      {
      op->vtkSplineRepresentation::GetPolyData(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSplineRepresentation_GetHandleProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHandleProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineRepresentation *op = static_cast<vtkSplineRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetHandleProperty() :
      op->vtkSplineRepresentation::GetHandleProperty());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSplineRepresentation_GetSelectedHandleProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelectedHandleProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineRepresentation *op = static_cast<vtkSplineRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetSelectedHandleProperty() :
      op->vtkSplineRepresentation::GetSelectedHandleProperty());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSplineRepresentation_GetLineProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLineProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineRepresentation *op = static_cast<vtkSplineRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetLineProperty() :
      op->vtkSplineRepresentation::GetLineProperty());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSplineRepresentation_GetSelectedLineProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelectedLineProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineRepresentation *op = static_cast<vtkSplineRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetSelectedLineProperty() :
      op->vtkSplineRepresentation::GetSelectedLineProperty());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSplineRepresentation_SetNumberOfHandles(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfHandles");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineRepresentation *op = static_cast<vtkSplineRepresentation *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetNumberOfHandles(temp0);
      }
    else
      {
      op->vtkSplineRepresentation::SetNumberOfHandles(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSplineRepresentation_GetNumberOfHandles(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfHandles");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineRepresentation *op = static_cast<vtkSplineRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfHandles() :
      op->vtkSplineRepresentation::GetNumberOfHandles());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSplineRepresentation_SetResolution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineRepresentation *op = static_cast<vtkSplineRepresentation *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetResolution(temp0);
      }
    else
      {
      op->vtkSplineRepresentation::SetResolution(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSplineRepresentation_GetResolution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineRepresentation *op = static_cast<vtkSplineRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetResolution() :
      op->vtkSplineRepresentation::GetResolution());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSplineRepresentation_SetParametricSpline(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetParametricSpline");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineRepresentation *op = static_cast<vtkSplineRepresentation *>(vp);

  vtkParametricSpline *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkParametricSpline"))
    {
    if (ap.IsBound())
      {
      op->SetParametricSpline(temp0);
      }
    else
      {
      op->vtkSplineRepresentation::SetParametricSpline(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSplineRepresentation_GetParametricSpline(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetParametricSpline");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineRepresentation *op = static_cast<vtkSplineRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkParametricSpline *tempr = (ap.IsBound() ?
      op->GetParametricSpline() :
      op->vtkSplineRepresentation::GetParametricSpline());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSplineRepresentation_SetHandlePosition_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHandlePosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineRepresentation *op = static_cast<vtkSplineRepresentation *>(vp);

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
      op->SetHandlePosition(temp0, temp1, temp2, temp3);
      }
    else
      {
      op->vtkSplineRepresentation::SetHandlePosition(temp0, temp1, temp2, temp3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkSplineRepresentation_SetHandlePosition_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHandlePosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineRepresentation *op = static_cast<vtkSplineRepresentation *>(vp);

  int temp0;
  double temp1[3];
  double save1[3];
  const int size1 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
    {
    ap.SaveArray(temp1, save1, size1);

    if (ap.IsBound())
      {
      op->SetHandlePosition(temp0, temp1);
      }
    else
      {
      op->vtkSplineRepresentation::SetHandlePosition(temp0, temp1);
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

  return result;
}

static PyObject *
PyvtkSplineRepresentation_SetHandlePosition(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 4:
      return PyvtkSplineRepresentation_SetHandlePosition_s1(self, args);
    case 2:
      return PyvtkSplineRepresentation_SetHandlePosition_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetHandlePosition");
  return NULL;
}



static PyObject *
PyvtkSplineRepresentation_GetHandlePosition_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHandlePosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineRepresentation *op = static_cast<vtkSplineRepresentation *>(vp);

  int temp0;
  double temp1[3];
  double save1[3];
  const int size1 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
    {
    ap.SaveArray(temp1, save1, size1);

    if (ap.IsBound())
      {
      op->GetHandlePosition(temp0, temp1);
      }
    else
      {
      op->vtkSplineRepresentation::GetHandlePosition(temp0, temp1);
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

  return result;
}

static PyObject *
PyvtkSplineRepresentation_GetHandlePosition_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHandlePosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineRepresentation *op = static_cast<vtkSplineRepresentation *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetHandlePosition(temp0) :
      op->vtkSplineRepresentation::GetHandlePosition(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkSplineRepresentation_GetHandlePosition(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkSplineRepresentation_GetHandlePosition_s1(self, args);
    case 1:
      return PyvtkSplineRepresentation_GetHandlePosition_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetHandlePosition");
  return NULL;
}



static PyObject *
PyvtkSplineRepresentation_GetHandlePositions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHandlePositions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineRepresentation *op = static_cast<vtkSplineRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkDoubleArray *tempr = (ap.IsBound() ?
      op->GetHandlePositions() :
      op->vtkSplineRepresentation::GetHandlePositions());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSplineRepresentation_SetClosed(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetClosed");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineRepresentation *op = static_cast<vtkSplineRepresentation *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetClosed(temp0);
      }
    else
      {
      op->vtkSplineRepresentation::SetClosed(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSplineRepresentation_GetClosed(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClosed");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineRepresentation *op = static_cast<vtkSplineRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetClosed() :
      op->vtkSplineRepresentation::GetClosed());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSplineRepresentation_ClosedOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClosedOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineRepresentation *op = static_cast<vtkSplineRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ClosedOn();
      }
    else
      {
      op->vtkSplineRepresentation::ClosedOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSplineRepresentation_ClosedOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClosedOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineRepresentation *op = static_cast<vtkSplineRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ClosedOff();
      }
    else
      {
      op->vtkSplineRepresentation::ClosedOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSplineRepresentation_IsClosed(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsClosed");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineRepresentation *op = static_cast<vtkSplineRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->IsClosed() :
      op->vtkSplineRepresentation::IsClosed());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSplineRepresentation_GetSummedLength(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSummedLength");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineRepresentation *op = static_cast<vtkSplineRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetSummedLength() :
      op->vtkSplineRepresentation::GetSummedLength());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSplineRepresentation_InitializeHandles(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InitializeHandles");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineRepresentation *op = static_cast<vtkSplineRepresentation *>(vp);

  vtkPoints *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPoints"))
    {
    if (ap.IsBound())
      {
      op->InitializeHandles(temp0);
      }
    else
      {
      op->vtkSplineRepresentation::InitializeHandles(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSplineRepresentation_BuildRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BuildRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineRepresentation *op = static_cast<vtkSplineRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->BuildRepresentation();
      }
    else
      {
      op->vtkSplineRepresentation::BuildRepresentation();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSplineRepresentation_ComputeInteractionState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeInteractionState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineRepresentation *op = static_cast<vtkSplineRepresentation *>(vp);

  int temp0;
  int temp1;
  int temp2 = 0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2, 3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)))
    {
    int tempr = (ap.IsBound() ?
      op->ComputeInteractionState(temp0, temp1, temp2) :
      op->vtkSplineRepresentation::ComputeInteractionState(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSplineRepresentation_StartWidgetInteraction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StartWidgetInteraction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineRepresentation *op = static_cast<vtkSplineRepresentation *>(vp);

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
      op->StartWidgetInteraction(temp0);
      }
    else
      {
      op->vtkSplineRepresentation::StartWidgetInteraction(temp0);
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
PyvtkSplineRepresentation_WidgetInteraction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WidgetInteraction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineRepresentation *op = static_cast<vtkSplineRepresentation *>(vp);

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
      op->WidgetInteraction(temp0);
      }
    else
      {
      op->vtkSplineRepresentation::WidgetInteraction(temp0);
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
PyvtkSplineRepresentation_EndWidgetInteraction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EndWidgetInteraction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineRepresentation *op = static_cast<vtkSplineRepresentation *>(vp);

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
      op->EndWidgetInteraction(temp0);
      }
    else
      {
      op->vtkSplineRepresentation::EndWidgetInteraction(temp0);
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
PyvtkSplineRepresentation_GetBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineRepresentation *op = static_cast<vtkSplineRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetBounds() :
      op->vtkSplineRepresentation::GetBounds());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSplineRepresentation_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineRepresentation *op = static_cast<vtkSplineRepresentation *>(vp);

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
      op->vtkSplineRepresentation::ReleaseGraphicsResources(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSplineRepresentation_RenderOpaqueGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOpaqueGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineRepresentation *op = static_cast<vtkSplineRepresentation *>(vp);

  vtkViewport *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
    {
    int tempr = (ap.IsBound() ?
      op->RenderOpaqueGeometry(temp0) :
      op->vtkSplineRepresentation::RenderOpaqueGeometry(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSplineRepresentation_RenderTranslucentPolygonalGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderTranslucentPolygonalGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineRepresentation *op = static_cast<vtkSplineRepresentation *>(vp);

  vtkViewport *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
    {
    int tempr = (ap.IsBound() ?
      op->RenderTranslucentPolygonalGeometry(temp0) :
      op->vtkSplineRepresentation::RenderTranslucentPolygonalGeometry(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSplineRepresentation_RenderOverlay(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOverlay");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineRepresentation *op = static_cast<vtkSplineRepresentation *>(vp);

  vtkViewport *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
    {
    int tempr = (ap.IsBound() ?
      op->RenderOverlay(temp0) :
      op->vtkSplineRepresentation::RenderOverlay(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSplineRepresentation_HasTranslucentPolygonalGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasTranslucentPolygonalGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineRepresentation *op = static_cast<vtkSplineRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->HasTranslucentPolygonalGeometry() :
      op->vtkSplineRepresentation::HasTranslucentPolygonalGeometry());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSplineRepresentation_SetLineColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLineColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineRepresentation *op = static_cast<vtkSplineRepresentation *>(vp);

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
      op->SetLineColor(temp0, temp1, temp2);
      }
    else
      {
      op->vtkSplineRepresentation::SetLineColor(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkSplineRepresentation_Methods[] = {
  {(char*)"GetClassName", PyvtkSplineRepresentation_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkSplineRepresentation_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkSplineRepresentation_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkSplineRepresentation\nC++: vtkSplineRepresentation *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkSplineRepresentation_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkSplineRepresentation\nC++: vtkSplineRepresentation *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetInteractionState", PyvtkSplineRepresentation_SetInteractionState, METH_VARARGS,
   (char*)"V.SetInteractionState(int)\nC++: void SetInteractionState(int a)\n\n"},
  {(char*)"SetProjectToPlane", PyvtkSplineRepresentation_SetProjectToPlane, METH_VARARGS,
   (char*)"V.SetProjectToPlane(int)\nC++: void SetProjectToPlane(int a)\n\nForce the spline widget to be projected onto one of the\northogonal planes. Remember that when the InteractionState\nchanges, a ModifiedEvent is invoked. This can be used to snap the\nspline to the plane if it is originally not aligned.  The normal\nin SetProjectionNormal is 0,1,2 for YZ,XZ,XY planes respectively\nand 3 for arbitrary oblique planes when the widget is tied to a\nvtkPlaneSource.\n"},
  {(char*)"GetProjectToPlane", PyvtkSplineRepresentation_GetProjectToPlane, METH_VARARGS,
   (char*)"V.GetProjectToPlane() -> int\nC++: int GetProjectToPlane()\n\nForce the spline widget to be projected onto one of the\northogonal planes. Remember that when the InteractionState\nchanges, a ModifiedEvent is invoked. This can be used to snap the\nspline to the plane if it is originally not aligned.  The normal\nin SetProjectionNormal is 0,1,2 for YZ,XZ,XY planes respectively\nand 3 for arbitrary oblique planes when the widget is tied to a\nvtkPlaneSource.\n"},
  {(char*)"ProjectToPlaneOn", PyvtkSplineRepresentation_ProjectToPlaneOn, METH_VARARGS,
   (char*)"V.ProjectToPlaneOn()\nC++: void ProjectToPlaneOn()\n\nForce the spline widget to be projected onto one of the\northogonal planes. Remember that when the InteractionState\nchanges, a ModifiedEvent is invoked. This can be used to snap the\nspline to the plane if it is originally not aligned.  The normal\nin SetProjectionNormal is 0,1,2 for YZ,XZ,XY planes respectively\nand 3 for arbitrary oblique planes when the widget is tied to a\nvtkPlaneSource.\n"},
  {(char*)"ProjectToPlaneOff", PyvtkSplineRepresentation_ProjectToPlaneOff, METH_VARARGS,
   (char*)"V.ProjectToPlaneOff()\nC++: void ProjectToPlaneOff()\n\nForce the spline widget to be projected onto one of the\northogonal planes. Remember that when the InteractionState\nchanges, a ModifiedEvent is invoked. This can be used to snap the\nspline to the plane if it is originally not aligned.  The normal\nin SetProjectionNormal is 0,1,2 for YZ,XZ,XY planes respectively\nand 3 for arbitrary oblique planes when the widget is tied to a\nvtkPlaneSource.\n"},
  {(char*)"SetPlaneSource", PyvtkSplineRepresentation_SetPlaneSource, METH_VARARGS,
   (char*)"V.SetPlaneSource(vtkPlaneSource)\nC++: void SetPlaneSource(vtkPlaneSource *plane)\n\nSet up a reference to a vtkPlaneSource that could be from another\nwidget object, e.g. a vtkPolyDataSourceWidget.\n"},
  {(char*)"SetProjectionNormal", PyvtkSplineRepresentation_SetProjectionNormal, METH_VARARGS,
   (char*)"V.SetProjectionNormal(int)\nC++: void SetProjectionNormal(int)\n\n"},
  {(char*)"GetProjectionNormalMinValue", PyvtkSplineRepresentation_GetProjectionNormalMinValue, METH_VARARGS,
   (char*)"V.GetProjectionNormalMinValue() -> int\nC++: int GetProjectionNormalMinValue()\n\n"},
  {(char*)"GetProjectionNormalMaxValue", PyvtkSplineRepresentation_GetProjectionNormalMaxValue, METH_VARARGS,
   (char*)"V.GetProjectionNormalMaxValue() -> int\nC++: int GetProjectionNormalMaxValue()\n\n"},
  {(char*)"GetProjectionNormal", PyvtkSplineRepresentation_GetProjectionNormal, METH_VARARGS,
   (char*)"V.GetProjectionNormal() -> int\nC++: int GetProjectionNormal()\n\n"},
  {(char*)"SetProjectionNormalToXAxes", PyvtkSplineRepresentation_SetProjectionNormalToXAxes, METH_VARARGS,
   (char*)"V.SetProjectionNormalToXAxes()\nC++: void SetProjectionNormalToXAxes()\n\n"},
  {(char*)"SetProjectionNormalToYAxes", PyvtkSplineRepresentation_SetProjectionNormalToYAxes, METH_VARARGS,
   (char*)"V.SetProjectionNormalToYAxes()\nC++: void SetProjectionNormalToYAxes()\n\n"},
  {(char*)"SetProjectionNormalToZAxes", PyvtkSplineRepresentation_SetProjectionNormalToZAxes, METH_VARARGS,
   (char*)"V.SetProjectionNormalToZAxes()\nC++: void SetProjectionNormalToZAxes()\n\n"},
  {(char*)"SetProjectionNormalToOblique", PyvtkSplineRepresentation_SetProjectionNormalToOblique, METH_VARARGS,
   (char*)"V.SetProjectionNormalToOblique()\nC++: void SetProjectionNormalToOblique()\n\n"},
  {(char*)"SetProjectionPosition", PyvtkSplineRepresentation_SetProjectionPosition, METH_VARARGS,
   (char*)"V.SetProjectionPosition(float)\nC++: void SetProjectionPosition(double position)\n\nSet the position of spline handles and points in terms of a\nplane's position. i.e., if ProjectionNormal is 0, all of the\nx-coordinate values of the points are set to position. Any value\ncan be passed (and is ignored) to update the spline points when\nProjection normal is set to 3 for arbritrary plane orientations.\n"},
  {(char*)"GetProjectionPosition", PyvtkSplineRepresentation_GetProjectionPosition, METH_VARARGS,
   (char*)"V.GetProjectionPosition() -> float\nC++: double GetProjectionPosition()\n\nSet the position of spline handles and points in terms of a\nplane's position. i.e., if ProjectionNormal is 0, all of the\nx-coordinate values of the points are set to position. Any value\ncan be passed (and is ignored) to update the spline points when\nProjection normal is set to 3 for arbritrary plane orientations.\n"},
  {(char*)"GetPolyData", PyvtkSplineRepresentation_GetPolyData, METH_VARARGS,
   (char*)"V.GetPolyData(vtkPolyData)\nC++: void GetPolyData(vtkPolyData *pd)\n\nGrab the polydata (including points) that defines the spline. \nThe polydata consists of points and line segments numbering\nResolution + 1 and Resoltuion, respectively. Points are\nguaranteed to be up-to-date when either the InteractionEvent or \nEndInteraction events are invoked. The user provides the\nvtkPolyData and the points and polyline are added to it.\n"},
  {(char*)"GetHandleProperty", PyvtkSplineRepresentation_GetHandleProperty, METH_VARARGS,
   (char*)"V.GetHandleProperty() -> vtkProperty\nC++: vtkProperty *GetHandleProperty()\n\nSet/Get the handle properties (the spheres are the handles). The\nproperties of the handles when selected and unselected can be\nmanipulated.\n"},
  {(char*)"GetSelectedHandleProperty", PyvtkSplineRepresentation_GetSelectedHandleProperty, METH_VARARGS,
   (char*)"V.GetSelectedHandleProperty() -> vtkProperty\nC++: vtkProperty *GetSelectedHandleProperty()\n\nSet/Get the handle properties (the spheres are the handles). The\nproperties of the handles when selected and unselected can be\nmanipulated.\n"},
  {(char*)"GetLineProperty", PyvtkSplineRepresentation_GetLineProperty, METH_VARARGS,
   (char*)"V.GetLineProperty() -> vtkProperty\nC++: vtkProperty *GetLineProperty()\n\nSet/Get the line properties. The properties of the line when\nselected and unselected can be manipulated.\n"},
  {(char*)"GetSelectedLineProperty", PyvtkSplineRepresentation_GetSelectedLineProperty, METH_VARARGS,
   (char*)"V.GetSelectedLineProperty() -> vtkProperty\nC++: vtkProperty *GetSelectedLineProperty()\n\nSet/Get the line properties. The properties of the line when\nselected and unselected can be manipulated.\n"},
  {(char*)"SetNumberOfHandles", PyvtkSplineRepresentation_SetNumberOfHandles, METH_VARARGS,
   (char*)"V.SetNumberOfHandles(int)\nC++: virtual void SetNumberOfHandles(int npts)\n\nSet/Get the number of handles for this widget.\n"},
  {(char*)"GetNumberOfHandles", PyvtkSplineRepresentation_GetNumberOfHandles, METH_VARARGS,
   (char*)"V.GetNumberOfHandles() -> int\nC++: int GetNumberOfHandles()\n\nSet/Get the number of handles for this widget.\n"},
  {(char*)"SetResolution", PyvtkSplineRepresentation_SetResolution, METH_VARARGS,
   (char*)"V.SetResolution(int)\nC++: void SetResolution(int resolution)\n\nSet/Get the number of line segments representing the spline for\nthis widget.\n"},
  {(char*)"GetResolution", PyvtkSplineRepresentation_GetResolution, METH_VARARGS,
   (char*)"V.GetResolution() -> int\nC++: int GetResolution()\n\nSet/Get the number of line segments representing the spline for\nthis widget.\n"},
  {(char*)"SetParametricSpline", PyvtkSplineRepresentation_SetParametricSpline, METH_VARARGS,
   (char*)"V.SetParametricSpline(vtkParametricSpline)\nC++: virtual void SetParametricSpline(vtkParametricSpline *)\n\nSet the parametric spline object. Through vtkParametricSpline's\nAPI, the user can supply and configure one of currently two types\nof spline: vtkCardinalSpline, vtkKochanekSpline. The widget\ncontrols the open or closed configuration of the spline. WARNING:\nThe widget does not enforce internal consistency so that all\nthree are of the same type.\n"},
  {(char*)"GetParametricSpline", PyvtkSplineRepresentation_GetParametricSpline, METH_VARARGS,
   (char*)"V.GetParametricSpline() -> vtkParametricSpline\nC++: vtkParametricSpline *GetParametricSpline()\n\nSet the parametric spline object. Through vtkParametricSpline's\nAPI, the user can supply and configure one of currently two types\nof spline: vtkCardinalSpline, vtkKochanekSpline. The widget\ncontrols the open or closed configuration of the spline. WARNING:\nThe widget does not enforce internal consistency so that all\nthree are of the same type.\n"},
  {(char*)"SetHandlePosition", PyvtkSplineRepresentation_SetHandlePosition, METH_VARARGS,
   (char*)"V.SetHandlePosition(int, float, float, float)\nC++: void SetHandlePosition(int handle, double x, double y,\n    double z)\nV.SetHandlePosition(int, [float, float, float])\nC++: void SetHandlePosition(int handle, double xyz[3])\n\nSet/Get the position of the spline handles. Call\nGetNumberOfHandles to determine the valid range of handle\nindices.\n"},
  {(char*)"GetHandlePosition", PyvtkSplineRepresentation_GetHandlePosition, METH_VARARGS,
   (char*)"V.GetHandlePosition(int, [float, float, float])\nC++: void GetHandlePosition(int handle, double xyz[3])\nV.GetHandlePosition(int) -> (float, ...)\nC++: double *GetHandlePosition(int handle)\n\nSet/Get the position of the spline handles. Call\nGetNumberOfHandles to determine the valid range of handle\nindices.\n"},
  {(char*)"GetHandlePositions", PyvtkSplineRepresentation_GetHandlePositions, METH_VARARGS,
   (char*)"V.GetHandlePositions() -> vtkDoubleArray\nC++: vtkDoubleArray *GetHandlePositions()\n\nSet/Get the position of the spline handles. Call\nGetNumberOfHandles to determine the valid range of handle\nindices.\n"},
  {(char*)"SetClosed", PyvtkSplineRepresentation_SetClosed, METH_VARARGS,
   (char*)"V.SetClosed(int)\nC++: void SetClosed(int closed)\n\nControl whether the spline is open or closed. A closed spline\nforms a continuous loop: the first and last points are the same,\nand derivatives are continuous.  A minimum of 3 handles are\nrequired to form a closed loop.  This method enforces consistency\nwith user supplied subclasses of vtkSpline.\n"},
  {(char*)"GetClosed", PyvtkSplineRepresentation_GetClosed, METH_VARARGS,
   (char*)"V.GetClosed() -> int\nC++: int GetClosed()\n\nControl whether the spline is open or closed. A closed spline\nforms a continuous loop: the first and last points are the same,\nand derivatives are continuous.  A minimum of 3 handles are\nrequired to form a closed loop.  This method enforces consistency\nwith user supplied subclasses of vtkSpline.\n"},
  {(char*)"ClosedOn", PyvtkSplineRepresentation_ClosedOn, METH_VARARGS,
   (char*)"V.ClosedOn()\nC++: void ClosedOn()\n\nControl whether the spline is open or closed. A closed spline\nforms a continuous loop: the first and last points are the same,\nand derivatives are continuous.  A minimum of 3 handles are\nrequired to form a closed loop.  This method enforces consistency\nwith user supplied subclasses of vtkSpline.\n"},
  {(char*)"ClosedOff", PyvtkSplineRepresentation_ClosedOff, METH_VARARGS,
   (char*)"V.ClosedOff()\nC++: void ClosedOff()\n\nControl whether the spline is open or closed. A closed spline\nforms a continuous loop: the first and last points are the same,\nand derivatives are continuous.  A minimum of 3 handles are\nrequired to form a closed loop.  This method enforces consistency\nwith user supplied subclasses of vtkSpline.\n"},
  {(char*)"IsClosed", PyvtkSplineRepresentation_IsClosed, METH_VARARGS,
   (char*)"V.IsClosed() -> int\nC++: int IsClosed()\n\nConvenience method to determine whether the spline is closed in a\ngeometric sense.  The widget may be set \"closed\" but still be\ngeometrically open (e.g., a straight line).\n"},
  {(char*)"GetSummedLength", PyvtkSplineRepresentation_GetSummedLength, METH_VARARGS,
   (char*)"V.GetSummedLength() -> float\nC++: double GetSummedLength()\n\nGet the approximate vs. the true arc length of the spline.\nCalculated as the summed lengths of the individual straight line\nsegments. Use SetResolution to control the accuracy.\n"},
  {(char*)"InitializeHandles", PyvtkSplineRepresentation_InitializeHandles, METH_VARARGS,
   (char*)"V.InitializeHandles(vtkPoints)\nC++: void InitializeHandles(vtkPoints *points)\n\nConvenience method to allocate and set the handles from a\nvtkPoints instance.  If the first and last points are the same,\nthe spline sets Closed to the on InteractionState and disregards\nthe last point, otherwise Closed remains unchanged.\n"},
  {(char*)"BuildRepresentation", PyvtkSplineRepresentation_BuildRepresentation, METH_VARARGS,
   (char*)"V.BuildRepresentation()\nC++: virtual void BuildRepresentation()\n\nThese are methods that satisfy vtkWidgetRepresentation's API.\nNote that a version of place widget is available where the center\nand handle position are specified.\n"},
  {(char*)"ComputeInteractionState", PyvtkSplineRepresentation_ComputeInteractionState, METH_VARARGS,
   (char*)"V.ComputeInteractionState(int, int, int) -> int\nC++: virtual int ComputeInteractionState(int X, int Y,\n    int modify=0)\n\nThese are methods that satisfy vtkWidgetRepresentation's API.\nNote that a version of place widget is available where the center\nand handle position are specified.\n"},
  {(char*)"StartWidgetInteraction", PyvtkSplineRepresentation_StartWidgetInteraction, METH_VARARGS,
   (char*)"V.StartWidgetInteraction([float, float])\nC++: virtual void StartWidgetInteraction(double e[2])\n\nThese are methods that satisfy vtkWidgetRepresentation's API.\nNote that a version of place widget is available where the center\nand handle position are specified.\n"},
  {(char*)"WidgetInteraction", PyvtkSplineRepresentation_WidgetInteraction, METH_VARARGS,
   (char*)"V.WidgetInteraction([float, float])\nC++: virtual void WidgetInteraction(double e[2])\n\nThese are methods that satisfy vtkWidgetRepresentation's API.\nNote that a version of place widget is available where the center\nand handle position are specified.\n"},
  {(char*)"EndWidgetInteraction", PyvtkSplineRepresentation_EndWidgetInteraction, METH_VARARGS,
   (char*)"V.EndWidgetInteraction([float, float])\nC++: virtual void EndWidgetInteraction(double e[2])\n\nThese are methods that satisfy vtkWidgetRepresentation's API.\nNote that a version of place widget is available where the center\nand handle position are specified.\n"},
  {(char*)"GetBounds", PyvtkSplineRepresentation_GetBounds, METH_VARARGS,
   (char*)"V.GetBounds() -> (float, ...)\nC++: virtual double *GetBounds()\n\nThese are methods that satisfy vtkWidgetRepresentation's API.\nNote that a version of place widget is available where the center\nand handle position are specified.\n"},
  {(char*)"ReleaseGraphicsResources", PyvtkSplineRepresentation_ReleaseGraphicsResources, METH_VARARGS,
   (char*)"V.ReleaseGraphicsResources(vtkWindow)\nC++: virtual void ReleaseGraphicsResources(vtkWindow *)\n\nMethods supporting, and required by, the rendering process.\n"},
  {(char*)"RenderOpaqueGeometry", PyvtkSplineRepresentation_RenderOpaqueGeometry, METH_VARARGS,
   (char*)"V.RenderOpaqueGeometry(vtkViewport) -> int\nC++: virtual int RenderOpaqueGeometry(vtkViewport *)\n\nMethods supporting, and required by, the rendering process.\n"},
  {(char*)"RenderTranslucentPolygonalGeometry", PyvtkSplineRepresentation_RenderTranslucentPolygonalGeometry, METH_VARARGS,
   (char*)"V.RenderTranslucentPolygonalGeometry(vtkViewport) -> int\nC++: virtual int RenderTranslucentPolygonalGeometry(vtkViewport *)\n\nMethods supporting, and required by, the rendering process.\n"},
  {(char*)"RenderOverlay", PyvtkSplineRepresentation_RenderOverlay, METH_VARARGS,
   (char*)"V.RenderOverlay(vtkViewport) -> int\nC++: virtual int RenderOverlay(vtkViewport *)\n\nMethods supporting, and required by, the rendering process.\n"},
  {(char*)"HasTranslucentPolygonalGeometry", PyvtkSplineRepresentation_HasTranslucentPolygonalGeometry, METH_VARARGS,
   (char*)"V.HasTranslucentPolygonalGeometry() -> int\nC++: virtual int HasTranslucentPolygonalGeometry()\n\nMethods supporting, and required by, the rendering process.\n"},
  {(char*)"SetLineColor", PyvtkSplineRepresentation_SetLineColor, METH_VARARGS,
   (char*)"V.SetLineColor(float, float, float)\nC++: void SetLineColor(double r, double g, double b)\n\nConvenience method to set the line color. Ideally one should use\nGetLineProperty()->SetColor().\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkSplineRepresentation_StaticNew()
{
  return vtkSplineRepresentation::New();
}

PyObject *PyVTKClass_vtkSplineRepresentationNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkSplineRepresentation_StaticNew,
    PyvtkSplineRepresentation_Methods,
    "vtkSplineRepresentation", modulename,
    NULL, NULL,
    PyvtkSplineRepresentation_Doc(),
    PyVTKClass_vtkWidgetRepresentationNew(modulename));

  if (cls)
    {
    PyObject *d = PyVTKClass_GetDict(cls);
    PyObject *o;

    PyType_Ready(&PyvtkSplineRepresentation__InteractionState_Type);
    PyvtkSplineRepresentation__InteractionState_Type.tp_new = NULL;

    o = (PyObject *)&PyvtkSplineRepresentation__InteractionState_Type;
    if (o && PyDict_SetItemString(d, (char *)"_InteractionState", o) != 0)
      {
      Py_DECREF(o);
      }

    for (int c = 0; c < 8; c++)
      {
      typedef vtkSplineRepresentation::_InteractionState cxx_enum_type;

      static const struct { const char *name; cxx_enum_type value; }
        constants[8] = {
          { "Outside", vtkSplineRepresentation::Outside },
          { "OnHandle", vtkSplineRepresentation::OnHandle },
          { "OnLine", vtkSplineRepresentation::OnLine },
          { "Moving", vtkSplineRepresentation::Moving },
          { "Scaling", vtkSplineRepresentation::Scaling },
          { "Spinning", vtkSplineRepresentation::Spinning },
          { "Inserting", vtkSplineRepresentation::Inserting },
          { "Erasing", vtkSplineRepresentation::Erasing },
        };

      o = PyvtkSplineRepresentation__InteractionState_FromEnum(constants[c].value);
      if (o)
        {
        PyDict_SetItemString(d, (char *)constants[c].name, o);
        Py_DECREF(o);
        }
      }

    }

  return cls;
}

const char **PyvtkSplineRepresentation_Doc()
{
  static const char *docstring[] = {
    "vtkSplineRepresentation - vtkWidgetRepresentation for a spline.\n\n",
    "Superclass: vtkWidgetRepresentation\n\n",
    "vtkSplineRepresentation is a vtkWidgetRepresentation for a spline.\nThis 3D widget defines a spline that can be interactively placed in a\nscene. The spline has handles, the number of which can be changed,\nplus it can be picked on the spline itself to translate or rotate it\nin the scene. This is based on vtkSplineWidget.\n\nSee Also:\n\nvtkSplineWidget, vtkSplineWidget2\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkSplineRepresentation(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkSplineRepresentationNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkSplineRepresentation", o) != 0)
    {
    Py_DECREF(o);
    }

  for (int c = 0; c < 4; c++)
    {
    static const struct { const char *name; int value; }
      constants[4] = {
        { "VTK_PROJECTION_YZ", 0 },
        { "VTK_PROJECTION_XZ", 1 },
        { "VTK_PROJECTION_XY", 2 },
        { "VTK_PROJECTION_OBLIQUE", 3 },
      };

    o = PyInt_FromLong(constants[c].value);
    if (o)
      {
      PyDict_SetItemString(dict, (char *)constants[c].name, o);
      Py_DECREF(o);
      }
    }

}

