// python wrapper for vtkQuadRotationalExtrusionFilter
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkQuadRotationalExtrusionFilter.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkQuadRotationalExtrusionFilter(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkQuadRotationalExtrusionFilterNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkMultiBlockDataSetAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkMultiBlockDataSetAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkMultiBlockDataSetAlgorithmNew
#endif

static const char **PyvtkQuadRotationalExtrusionFilter_Doc();

#ifndef DECLARED_PyvtkQuadRotationalExtrusionFilter_RotationAxis_Type
extern VTK_PYTHON_EXPORT PyTypeObject PyvtkQuadRotationalExtrusionFilter_RotationAxis_Type;
#define DECLARED_PyvtkQuadRotationalExtrusionFilter_RotationAxis_Type
#endif

PyTypeObject PyvtkQuadRotationalExtrusionFilter_RotationAxis_Type = {
  PyObject_HEAD_INIT(&PyType_Type)
  0,
  (char*)"RotationAxis", // tp_name
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

PyObject *PyvtkQuadRotationalExtrusionFilter_RotationAxis_FromEnum(int val)
{
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkQuadRotationalExtrusionFilter_RotationAxis_Type);
  self->ob_ival = val;
  return (PyObject *)self;
}


static PyObject *
PyvtkQuadRotationalExtrusionFilter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadRotationalExtrusionFilter *op = static_cast<vtkQuadRotationalExtrusionFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkQuadRotationalExtrusionFilter::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkQuadRotationalExtrusionFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadRotationalExtrusionFilter *op = static_cast<vtkQuadRotationalExtrusionFilter *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkQuadRotationalExtrusionFilter::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkQuadRotationalExtrusionFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadRotationalExtrusionFilter *op = static_cast<vtkQuadRotationalExtrusionFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkQuadRotationalExtrusionFilter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkQuadRotationalExtrusionFilter::NewInstance());

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
PyvtkQuadRotationalExtrusionFilter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkQuadRotationalExtrusionFilter *tempr = vtkQuadRotationalExtrusionFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkQuadRotationalExtrusionFilter_SetAxis(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAxis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadRotationalExtrusionFilter *op = static_cast<vtkQuadRotationalExtrusionFilter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetAxis(temp0);
      }
    else
      {
      op->vtkQuadRotationalExtrusionFilter::SetAxis(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkQuadRotationalExtrusionFilter_GetAxisMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAxisMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadRotationalExtrusionFilter *op = static_cast<vtkQuadRotationalExtrusionFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetAxisMinValue() :
      op->vtkQuadRotationalExtrusionFilter::GetAxisMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkQuadRotationalExtrusionFilter_GetAxisMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAxisMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadRotationalExtrusionFilter *op = static_cast<vtkQuadRotationalExtrusionFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetAxisMaxValue() :
      op->vtkQuadRotationalExtrusionFilter::GetAxisMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkQuadRotationalExtrusionFilter_GetAxis(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAxis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadRotationalExtrusionFilter *op = static_cast<vtkQuadRotationalExtrusionFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetAxis() :
      op->vtkQuadRotationalExtrusionFilter::GetAxis());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkQuadRotationalExtrusionFilter_SetAxisToX(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAxisToX");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadRotationalExtrusionFilter *op = static_cast<vtkQuadRotationalExtrusionFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetAxisToX();
      }
    else
      {
      op->vtkQuadRotationalExtrusionFilter::SetAxisToX();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkQuadRotationalExtrusionFilter_SetAxisToY(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAxisToY");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadRotationalExtrusionFilter *op = static_cast<vtkQuadRotationalExtrusionFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetAxisToY();
      }
    else
      {
      op->vtkQuadRotationalExtrusionFilter::SetAxisToY();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkQuadRotationalExtrusionFilter_SetAxisToZ(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAxisToZ");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadRotationalExtrusionFilter *op = static_cast<vtkQuadRotationalExtrusionFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetAxisToZ();
      }
    else
      {
      op->vtkQuadRotationalExtrusionFilter::SetAxisToZ();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkQuadRotationalExtrusionFilter_SetResolution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadRotationalExtrusionFilter *op = static_cast<vtkQuadRotationalExtrusionFilter *>(vp);

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
      op->vtkQuadRotationalExtrusionFilter::SetResolution(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkQuadRotationalExtrusionFilter_GetResolutionMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetResolutionMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadRotationalExtrusionFilter *op = static_cast<vtkQuadRotationalExtrusionFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetResolutionMinValue() :
      op->vtkQuadRotationalExtrusionFilter::GetResolutionMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkQuadRotationalExtrusionFilter_GetResolutionMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetResolutionMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadRotationalExtrusionFilter *op = static_cast<vtkQuadRotationalExtrusionFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetResolutionMaxValue() :
      op->vtkQuadRotationalExtrusionFilter::GetResolutionMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkQuadRotationalExtrusionFilter_GetResolution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadRotationalExtrusionFilter *op = static_cast<vtkQuadRotationalExtrusionFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetResolution() :
      op->vtkQuadRotationalExtrusionFilter::GetResolution());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkQuadRotationalExtrusionFilter_SetCapping(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCapping");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadRotationalExtrusionFilter *op = static_cast<vtkQuadRotationalExtrusionFilter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetCapping(temp0);
      }
    else
      {
      op->vtkQuadRotationalExtrusionFilter::SetCapping(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkQuadRotationalExtrusionFilter_GetCapping(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCapping");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadRotationalExtrusionFilter *op = static_cast<vtkQuadRotationalExtrusionFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetCapping() :
      op->vtkQuadRotationalExtrusionFilter::GetCapping());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkQuadRotationalExtrusionFilter_CappingOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CappingOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadRotationalExtrusionFilter *op = static_cast<vtkQuadRotationalExtrusionFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->CappingOn();
      }
    else
      {
      op->vtkQuadRotationalExtrusionFilter::CappingOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkQuadRotationalExtrusionFilter_CappingOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CappingOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadRotationalExtrusionFilter *op = static_cast<vtkQuadRotationalExtrusionFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->CappingOff();
      }
    else
      {
      op->vtkQuadRotationalExtrusionFilter::CappingOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkQuadRotationalExtrusionFilter_SetDefaultAngle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDefaultAngle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadRotationalExtrusionFilter *op = static_cast<vtkQuadRotationalExtrusionFilter *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetDefaultAngle(temp0);
      }
    else
      {
      op->vtkQuadRotationalExtrusionFilter::SetDefaultAngle(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkQuadRotationalExtrusionFilter_GetDefaultAngle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDefaultAngle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadRotationalExtrusionFilter *op = static_cast<vtkQuadRotationalExtrusionFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetDefaultAngle() :
      op->vtkQuadRotationalExtrusionFilter::GetDefaultAngle());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkQuadRotationalExtrusionFilter_RemoveAllPerBlockAngles(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveAllPerBlockAngles");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadRotationalExtrusionFilter *op = static_cast<vtkQuadRotationalExtrusionFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->RemoveAllPerBlockAngles();
      }
    else
      {
      op->vtkQuadRotationalExtrusionFilter::RemoveAllPerBlockAngles();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkQuadRotationalExtrusionFilter_AddPerBlockAngle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddPerBlockAngle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadRotationalExtrusionFilter *op = static_cast<vtkQuadRotationalExtrusionFilter *>(vp);

  vtkIdType temp0;
  double temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->AddPerBlockAngle(temp0, temp1);
      }
    else
      {
      op->vtkQuadRotationalExtrusionFilter::AddPerBlockAngle(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkQuadRotationalExtrusionFilter_SetTranslation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTranslation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadRotationalExtrusionFilter *op = static_cast<vtkQuadRotationalExtrusionFilter *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetTranslation(temp0);
      }
    else
      {
      op->vtkQuadRotationalExtrusionFilter::SetTranslation(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkQuadRotationalExtrusionFilter_GetTranslation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTranslation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadRotationalExtrusionFilter *op = static_cast<vtkQuadRotationalExtrusionFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetTranslation() :
      op->vtkQuadRotationalExtrusionFilter::GetTranslation());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkQuadRotationalExtrusionFilter_SetDeltaRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDeltaRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadRotationalExtrusionFilter *op = static_cast<vtkQuadRotationalExtrusionFilter *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetDeltaRadius(temp0);
      }
    else
      {
      op->vtkQuadRotationalExtrusionFilter::SetDeltaRadius(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkQuadRotationalExtrusionFilter_GetDeltaRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDeltaRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadRotationalExtrusionFilter *op = static_cast<vtkQuadRotationalExtrusionFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetDeltaRadius() :
      op->vtkQuadRotationalExtrusionFilter::GetDeltaRadius());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkQuadRotationalExtrusionFilter_Methods[] = {
  {(char*)"GetClassName", PyvtkQuadRotationalExtrusionFilter_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkQuadRotationalExtrusionFilter_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkQuadRotationalExtrusionFilter_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkQuadRotationalExtrusionFilter\nC++: vtkQuadRotationalExtrusionFilter *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkQuadRotationalExtrusionFilter_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkQuadRotationalExtrusionFilter\nC++: vtkQuadRotationalExtrusionFilter *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetAxis", PyvtkQuadRotationalExtrusionFilter_SetAxis, METH_VARARGS,
   (char*)"V.SetAxis(int)\nC++: void SetAxis(int)\n\nSet the axis of rotation to use. It is set by default to Z.\n"},
  {(char*)"GetAxisMinValue", PyvtkQuadRotationalExtrusionFilter_GetAxisMinValue, METH_VARARGS,
   (char*)"V.GetAxisMinValue() -> int\nC++: int GetAxisMinValue()\n\nSet the axis of rotation to use. It is set by default to Z.\n"},
  {(char*)"GetAxisMaxValue", PyvtkQuadRotationalExtrusionFilter_GetAxisMaxValue, METH_VARARGS,
   (char*)"V.GetAxisMaxValue() -> int\nC++: int GetAxisMaxValue()\n\nSet the axis of rotation to use. It is set by default to Z.\n"},
  {(char*)"GetAxis", PyvtkQuadRotationalExtrusionFilter_GetAxis, METH_VARARGS,
   (char*)"V.GetAxis() -> int\nC++: int GetAxis()\n\nSet the axis of rotation to use. It is set by default to Z.\n"},
  {(char*)"SetAxisToX", PyvtkQuadRotationalExtrusionFilter_SetAxisToX, METH_VARARGS,
   (char*)"V.SetAxisToX()\nC++: void SetAxisToX()\n\nSet the axis of rotation to use. It is set by default to Z.\n"},
  {(char*)"SetAxisToY", PyvtkQuadRotationalExtrusionFilter_SetAxisToY, METH_VARARGS,
   (char*)"V.SetAxisToY()\nC++: void SetAxisToY()\n\nSet the axis of rotation to use. It is set by default to Z.\n"},
  {(char*)"SetAxisToZ", PyvtkQuadRotationalExtrusionFilter_SetAxisToZ, METH_VARARGS,
   (char*)"V.SetAxisToZ()\nC++: void SetAxisToZ()\n\nSet the axis of rotation to use. It is set by default to Z.\n"},
  {(char*)"SetResolution", PyvtkQuadRotationalExtrusionFilter_SetResolution, METH_VARARGS,
   (char*)"V.SetResolution(int)\nC++: void SetResolution(int)\n\nSet/Get resolution of sweep operation. Resolution controls the\nnumber of intermediate node points.\n"},
  {(char*)"GetResolutionMinValue", PyvtkQuadRotationalExtrusionFilter_GetResolutionMinValue, METH_VARARGS,
   (char*)"V.GetResolutionMinValue() -> int\nC++: int GetResolutionMinValue()\n\nSet/Get resolution of sweep operation. Resolution controls the\nnumber of intermediate node points.\n"},
  {(char*)"GetResolutionMaxValue", PyvtkQuadRotationalExtrusionFilter_GetResolutionMaxValue, METH_VARARGS,
   (char*)"V.GetResolutionMaxValue() -> int\nC++: int GetResolutionMaxValue()\n\nSet/Get resolution of sweep operation. Resolution controls the\nnumber of intermediate node points.\n"},
  {(char*)"GetResolution", PyvtkQuadRotationalExtrusionFilter_GetResolution, METH_VARARGS,
   (char*)"V.GetResolution() -> int\nC++: int GetResolution()\n\nSet/Get resolution of sweep operation. Resolution controls the\nnumber of intermediate node points.\n"},
  {(char*)"SetCapping", PyvtkQuadRotationalExtrusionFilter_SetCapping, METH_VARARGS,
   (char*)"V.SetCapping(int)\nC++: void SetCapping(int a)\n\nTurn on/off the capping of the skirt.\n"},
  {(char*)"GetCapping", PyvtkQuadRotationalExtrusionFilter_GetCapping, METH_VARARGS,
   (char*)"V.GetCapping() -> int\nC++: int GetCapping()\n\nTurn on/off the capping of the skirt.\n"},
  {(char*)"CappingOn", PyvtkQuadRotationalExtrusionFilter_CappingOn, METH_VARARGS,
   (char*)"V.CappingOn()\nC++: void CappingOn()\n\nTurn on/off the capping of the skirt.\n"},
  {(char*)"CappingOff", PyvtkQuadRotationalExtrusionFilter_CappingOff, METH_VARARGS,
   (char*)"V.CappingOff()\nC++: void CappingOff()\n\nTurn on/off the capping of the skirt.\n"},
  {(char*)"SetDefaultAngle", PyvtkQuadRotationalExtrusionFilter_SetDefaultAngle, METH_VARARGS,
   (char*)"V.SetDefaultAngle(float)\nC++: void SetDefaultAngle(double a)\n\nSet/Get angle of rotation.\n"},
  {(char*)"GetDefaultAngle", PyvtkQuadRotationalExtrusionFilter_GetDefaultAngle, METH_VARARGS,
   (char*)"V.GetDefaultAngle() -> float\nC++: double GetDefaultAngle()\n\nSet/Get angle of rotation.\n"},
  {(char*)"RemoveAllPerBlockAngles", PyvtkQuadRotationalExtrusionFilter_RemoveAllPerBlockAngles, METH_VARARGS,
   (char*)"V.RemoveAllPerBlockAngles()\nC++: void RemoveAllPerBlockAngles()\n\nSet/Get angles of rotation for each block in a composite data\nset.\n"},
  {(char*)"AddPerBlockAngle", PyvtkQuadRotationalExtrusionFilter_AddPerBlockAngle, METH_VARARGS,
   (char*)"V.AddPerBlockAngle(int, float)\nC++: void AddPerBlockAngle(vtkIdType blockId, double angle)\n\nSet/Get angles of rotation for each block in a composite data\nset.\n"},
  {(char*)"SetTranslation", PyvtkQuadRotationalExtrusionFilter_SetTranslation, METH_VARARGS,
   (char*)"V.SetTranslation(float)\nC++: void SetTranslation(double a)\n\nSet/Get total amount of translation along the z-axis.\n"},
  {(char*)"GetTranslation", PyvtkQuadRotationalExtrusionFilter_GetTranslation, METH_VARARGS,
   (char*)"V.GetTranslation() -> float\nC++: double GetTranslation()\n\nSet/Get total amount of translation along the z-axis.\n"},
  {(char*)"SetDeltaRadius", PyvtkQuadRotationalExtrusionFilter_SetDeltaRadius, METH_VARARGS,
   (char*)"V.SetDeltaRadius(float)\nC++: void SetDeltaRadius(double a)\n\nSet/Get change in radius during sweep process.\n"},
  {(char*)"GetDeltaRadius", PyvtkQuadRotationalExtrusionFilter_GetDeltaRadius, METH_VARARGS,
   (char*)"V.GetDeltaRadius() -> float\nC++: double GetDeltaRadius()\n\nSet/Get change in radius during sweep process.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkQuadRotationalExtrusionFilter_StaticNew()
{
  return vtkQuadRotationalExtrusionFilter::New();
}

PyObject *PyVTKClass_vtkQuadRotationalExtrusionFilterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkQuadRotationalExtrusionFilter_StaticNew,
    PyvtkQuadRotationalExtrusionFilter_Methods,
    "vtkQuadRotationalExtrusionFilter", modulename,
    NULL, NULL,
    PyvtkQuadRotationalExtrusionFilter_Doc(),
    PyVTKClass_vtkMultiBlockDataSetAlgorithmNew(modulename));

  if (cls)
    {
    PyObject *d = PyVTKClass_GetDict(cls);
    PyObject *o;

    PyType_Ready(&PyvtkQuadRotationalExtrusionFilter_RotationAxis_Type);
    PyvtkQuadRotationalExtrusionFilter_RotationAxis_Type.tp_new = NULL;

    o = (PyObject *)&PyvtkQuadRotationalExtrusionFilter_RotationAxis_Type;
    if (o && PyDict_SetItemString(d, (char *)"RotationAxis", o) != 0)
      {
      Py_DECREF(o);
      }

    for (int c = 0; c < 3; c++)
      {
      typedef vtkQuadRotationalExtrusionFilter::RotationAxis cxx_enum_type;

      static const struct { const char *name; cxx_enum_type value; }
        constants[3] = {
          { "USE_X", vtkQuadRotationalExtrusionFilter::USE_X },
          { "USE_Y", vtkQuadRotationalExtrusionFilter::USE_Y },
          { "USE_Z", vtkQuadRotationalExtrusionFilter::USE_Z },
        };

      o = PyvtkQuadRotationalExtrusionFilter_RotationAxis_FromEnum(constants[c].value);
      if (o)
        {
        PyDict_SetItemString(d, (char *)constants[c].name, o);
        Py_DECREF(o);
        }
      }

    }

  return cls;
}

const char **PyvtkQuadRotationalExtrusionFilter_Doc()
{
  static const char *docstring[] = {
    "vtkQuadRotationalExtrusionFilter - sweep polygonal data creating\n\"skirt\" from free edges and lines, and lines from vertices\n\n",
    "Superclass: vtkMultiBlockDataSetAlgorithm\n\n",
    "vtkQuadRotationalExtrusionFilter is a modeling filter. It takes\npolygonal data as input and generates polygonal data on output. The\ninput dataset is swept around the z-axis to create new polygonal\nprimitives. These primitives form a \"skirt\" or swept surface. For\nexample, sweeping a line results in a cylindrical shell, and sweeping\na circle creates a torus.\n\nThere are a number of control parameters",
    " for this filter. You can\ncontrol whether the sweep of a 2D object (i.e., polygon or triangle\nstrip) is capped with the generating geometry via the \"Capping\"\ninstance variable. Also, you can control the angle of rotation, and\nwhether translation along the z-axis is performed along with the\nrotation. (Translation is useful for creating \"springs\".) You also\ncan adjust the radius of the generating ge",
    "ometry using the\n\"DeltaRotation\" instance variable.\n\nThe skirt is generated by locating certain topological features. Free\nedges (edges of polygons or triangle strips only used by one polygon\nor triangle strips) generate surfaces. This is true also of lines or\npolylines. Vertices generate lines.\n\nThis filter can be used to model axisymmetric objects like cylinders,\nbottles, and wine glasses; or tr",
    "anslational/rotational symmetric\nobjects like springs or corkscrews.\n\nCaveats:\n\nIf the object sweeps 360 degrees, radius does not vary, and the\nobject does not translate, capping is not performed. This is because\nthe cap is unnecessary.\n\nSome polygonal objects have no free edges (e.g., sphere). When swept,\nthis will result in two separate surfaces if capping is on, or no\nsurface if capping is off.",
    "\n\nSee Also:\n\nvtkLinearExtrusionFilter vtkRotationalExtrusionFilter\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkQuadRotationalExtrusionFilter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkQuadRotationalExtrusionFilterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkQuadRotationalExtrusionFilter", o) != 0)
    {
    Py_DECREF(o);
    }

}

