// python wrapper for vtkLabeledDataMapper
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkLabeledDataMapper.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkLabeledDataMapper(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkLabeledDataMapperNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkMapper2DNew
extern "C" { PyObject *PyVTKClass_vtkMapper2DNew(const char *); }
#define DECLARED_PyVTKClass_vtkMapper2DNew
#endif

static const char **PyvtkLabeledDataMapper_Doc();

#ifndef DECLARED_PyvtkLabeledDataMapper_Coordinates_Type
extern VTK_PYTHON_EXPORT PyTypeObject PyvtkLabeledDataMapper_Coordinates_Type;
#define DECLARED_PyvtkLabeledDataMapper_Coordinates_Type
#endif

PyTypeObject PyvtkLabeledDataMapper_Coordinates_Type = {
  PyObject_HEAD_INIT(&PyType_Type)
  0,
  (char*)"Coordinates", // tp_name
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

PyObject *PyvtkLabeledDataMapper_Coordinates_FromEnum(int val)
{
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkLabeledDataMapper_Coordinates_Type);
  self->ob_ival = val;
  return (PyObject *)self;
}


static PyObject *
PyvtkLabeledDataMapper_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabeledDataMapper *op = static_cast<vtkLabeledDataMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkLabeledDataMapper::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLabeledDataMapper_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabeledDataMapper *op = static_cast<vtkLabeledDataMapper *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkLabeledDataMapper::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLabeledDataMapper_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabeledDataMapper *op = static_cast<vtkLabeledDataMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkLabeledDataMapper *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkLabeledDataMapper::NewInstance());

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
PyvtkLabeledDataMapper_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkLabeledDataMapper *tempr = vtkLabeledDataMapper::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLabeledDataMapper_SetLabelFormat(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLabelFormat");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabeledDataMapper *op = static_cast<vtkLabeledDataMapper *>(vp);

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
      op->vtkLabeledDataMapper::SetLabelFormat(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLabeledDataMapper_GetLabelFormat(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLabelFormat");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabeledDataMapper *op = static_cast<vtkLabeledDataMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetLabelFormat() :
      op->vtkLabeledDataMapper::GetLabelFormat());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLabeledDataMapper_SetLabeledComponent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLabeledComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabeledDataMapper *op = static_cast<vtkLabeledDataMapper *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetLabeledComponent(temp0);
      }
    else
      {
      op->vtkLabeledDataMapper::SetLabeledComponent(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLabeledDataMapper_GetLabeledComponent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLabeledComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabeledDataMapper *op = static_cast<vtkLabeledDataMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetLabeledComponent() :
      op->vtkLabeledDataMapper::GetLabeledComponent());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLabeledDataMapper_SetFieldDataArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFieldDataArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabeledDataMapper *op = static_cast<vtkLabeledDataMapper *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetFieldDataArray(temp0);
      }
    else
      {
      op->vtkLabeledDataMapper::SetFieldDataArray(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLabeledDataMapper_GetFieldDataArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFieldDataArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabeledDataMapper *op = static_cast<vtkLabeledDataMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetFieldDataArray() :
      op->vtkLabeledDataMapper::GetFieldDataArray());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLabeledDataMapper_SetFieldDataName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFieldDataName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabeledDataMapper *op = static_cast<vtkLabeledDataMapper *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetFieldDataName(temp0);
      }
    else
      {
      op->vtkLabeledDataMapper::SetFieldDataName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLabeledDataMapper_GetFieldDataName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFieldDataName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabeledDataMapper *op = static_cast<vtkLabeledDataMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetFieldDataName() :
      op->vtkLabeledDataMapper::GetFieldDataName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLabeledDataMapper_SetInputData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabeledDataMapper *op = static_cast<vtkLabeledDataMapper *>(vp);

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
      op->vtkLabeledDataMapper::SetInputData(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLabeledDataMapper_GetInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabeledDataMapper *op = static_cast<vtkLabeledDataMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkDataSet *tempr = (ap.IsBound() ?
      op->GetInput() :
      op->vtkLabeledDataMapper::GetInput());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLabeledDataMapper_SetLabelMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLabelMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabeledDataMapper *op = static_cast<vtkLabeledDataMapper *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetLabelMode(temp0);
      }
    else
      {
      op->vtkLabeledDataMapper::SetLabelMode(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLabeledDataMapper_GetLabelMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLabelMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabeledDataMapper *op = static_cast<vtkLabeledDataMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetLabelMode() :
      op->vtkLabeledDataMapper::GetLabelMode());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLabeledDataMapper_SetLabelModeToLabelIds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLabelModeToLabelIds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabeledDataMapper *op = static_cast<vtkLabeledDataMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetLabelModeToLabelIds();
      }
    else
      {
      op->vtkLabeledDataMapper::SetLabelModeToLabelIds();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLabeledDataMapper_SetLabelModeToLabelScalars(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLabelModeToLabelScalars");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabeledDataMapper *op = static_cast<vtkLabeledDataMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetLabelModeToLabelScalars();
      }
    else
      {
      op->vtkLabeledDataMapper::SetLabelModeToLabelScalars();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLabeledDataMapper_SetLabelModeToLabelVectors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLabelModeToLabelVectors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabeledDataMapper *op = static_cast<vtkLabeledDataMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetLabelModeToLabelVectors();
      }
    else
      {
      op->vtkLabeledDataMapper::SetLabelModeToLabelVectors();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLabeledDataMapper_SetLabelModeToLabelNormals(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLabelModeToLabelNormals");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabeledDataMapper *op = static_cast<vtkLabeledDataMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetLabelModeToLabelNormals();
      }
    else
      {
      op->vtkLabeledDataMapper::SetLabelModeToLabelNormals();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLabeledDataMapper_SetLabelModeToLabelTCoords(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLabelModeToLabelTCoords");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabeledDataMapper *op = static_cast<vtkLabeledDataMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetLabelModeToLabelTCoords();
      }
    else
      {
      op->vtkLabeledDataMapper::SetLabelModeToLabelTCoords();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLabeledDataMapper_SetLabelModeToLabelTensors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLabelModeToLabelTensors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabeledDataMapper *op = static_cast<vtkLabeledDataMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetLabelModeToLabelTensors();
      }
    else
      {
      op->vtkLabeledDataMapper::SetLabelModeToLabelTensors();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLabeledDataMapper_SetLabelModeToLabelFieldData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLabelModeToLabelFieldData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabeledDataMapper *op = static_cast<vtkLabeledDataMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetLabelModeToLabelFieldData();
      }
    else
      {
      op->vtkLabeledDataMapper::SetLabelModeToLabelFieldData();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLabeledDataMapper_SetLabelTextProperty_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLabelTextProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabeledDataMapper *op = static_cast<vtkLabeledDataMapper *>(vp);

  vtkTextProperty *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkTextProperty"))
    {
    if (ap.IsBound())
      {
      op->SetLabelTextProperty(temp0);
      }
    else
      {
      op->vtkLabeledDataMapper::SetLabelTextProperty(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkLabeledDataMapper_SetLabelTextProperty_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLabelTextProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabeledDataMapper *op = static_cast<vtkLabeledDataMapper *>(vp);

  vtkTextProperty *temp0 = NULL;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkTextProperty") &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetLabelTextProperty(temp0, temp1);
      }
    else
      {
      op->vtkLabeledDataMapper::SetLabelTextProperty(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkLabeledDataMapper_SetLabelTextProperty(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkLabeledDataMapper_SetLabelTextProperty_s1(self, args);
    case 2:
      return PyvtkLabeledDataMapper_SetLabelTextProperty_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetLabelTextProperty");
  return NULL;
}



static PyObject *
PyvtkLabeledDataMapper_GetLabelTextProperty_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLabelTextProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabeledDataMapper *op = static_cast<vtkLabeledDataMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkTextProperty *tempr = (ap.IsBound() ?
      op->GetLabelTextProperty() :
      op->vtkLabeledDataMapper::GetLabelTextProperty());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkLabeledDataMapper_GetLabelTextProperty_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLabelTextProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabeledDataMapper *op = static_cast<vtkLabeledDataMapper *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkTextProperty *tempr = (ap.IsBound() ?
      op->GetLabelTextProperty(temp0) :
      op->vtkLabeledDataMapper::GetLabelTextProperty(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkLabeledDataMapper_GetLabelTextProperty(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 0:
      return PyvtkLabeledDataMapper_GetLabelTextProperty_s1(self, args);
    case 1:
      return PyvtkLabeledDataMapper_GetLabelTextProperty_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetLabelTextProperty");
  return NULL;
}



static PyObject *
PyvtkLabeledDataMapper_RenderOpaqueGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOpaqueGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabeledDataMapper *op = static_cast<vtkLabeledDataMapper *>(vp);

  vtkViewport *temp0 = NULL;
  vtkActor2D *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkViewport") &&
      ap.GetVTKObject(temp1, "vtkActor2D"))
    {
    if (ap.IsBound())
      {
      op->RenderOpaqueGeometry(temp0, temp1);
      }
    else
      {
      op->vtkLabeledDataMapper::RenderOpaqueGeometry(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLabeledDataMapper_RenderOverlay(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOverlay");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabeledDataMapper *op = static_cast<vtkLabeledDataMapper *>(vp);

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
      op->vtkLabeledDataMapper::RenderOverlay(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLabeledDataMapper_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabeledDataMapper *op = static_cast<vtkLabeledDataMapper *>(vp);

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
      op->vtkLabeledDataMapper::ReleaseGraphicsResources(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLabeledDataMapper_GetTransform(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTransform");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabeledDataMapper *op = static_cast<vtkLabeledDataMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkTransform *tempr = (ap.IsBound() ?
      op->GetTransform() :
      op->vtkLabeledDataMapper::GetTransform());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLabeledDataMapper_SetTransform(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTransform");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabeledDataMapper *op = static_cast<vtkLabeledDataMapper *>(vp);

  vtkTransform *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkTransform"))
    {
    if (ap.IsBound())
      {
      op->SetTransform(temp0);
      }
    else
      {
      op->vtkLabeledDataMapper::SetTransform(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLabeledDataMapper_GetCoordinateSystem(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCoordinateSystem");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabeledDataMapper *op = static_cast<vtkLabeledDataMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetCoordinateSystem() :
      op->vtkLabeledDataMapper::GetCoordinateSystem());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLabeledDataMapper_SetCoordinateSystem(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCoordinateSystem");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabeledDataMapper *op = static_cast<vtkLabeledDataMapper *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetCoordinateSystem(temp0);
      }
    else
      {
      op->vtkLabeledDataMapper::SetCoordinateSystem(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLabeledDataMapper_GetCoordinateSystemMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCoordinateSystemMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabeledDataMapper *op = static_cast<vtkLabeledDataMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetCoordinateSystemMinValue() :
      op->vtkLabeledDataMapper::GetCoordinateSystemMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLabeledDataMapper_GetCoordinateSystemMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCoordinateSystemMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabeledDataMapper *op = static_cast<vtkLabeledDataMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetCoordinateSystemMaxValue() :
      op->vtkLabeledDataMapper::GetCoordinateSystemMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLabeledDataMapper_CoordinateSystemWorld(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CoordinateSystemWorld");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabeledDataMapper *op = static_cast<vtkLabeledDataMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->CoordinateSystemWorld();
      }
    else
      {
      op->vtkLabeledDataMapper::CoordinateSystemWorld();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLabeledDataMapper_CoordinateSystemDisplay(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CoordinateSystemDisplay");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabeledDataMapper *op = static_cast<vtkLabeledDataMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->CoordinateSystemDisplay();
      }
    else
      {
      op->vtkLabeledDataMapper::CoordinateSystemDisplay();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLabeledDataMapper_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabeledDataMapper *op = static_cast<vtkLabeledDataMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMTime() :
      op->vtkLabeledDataMapper::GetMTime());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLabeledDataMapper_GetNumberOfLabels(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfLabels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabeledDataMapper *op = static_cast<vtkLabeledDataMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfLabels() :
      op->vtkLabeledDataMapper::GetNumberOfLabels());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLabeledDataMapper_GetLabelPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLabelPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabeledDataMapper *op = static_cast<vtkLabeledDataMapper *>(vp);

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
      op->GetLabelPosition(temp0, temp1);
      }
    else
      {
      op->vtkLabeledDataMapper::GetLabelPosition(temp0, temp1);
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
PyvtkLabeledDataMapper_GetLabelText(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLabelText");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabeledDataMapper *op = static_cast<vtkLabeledDataMapper *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetLabelText(temp0) :
      op->vtkLabeledDataMapper::GetLabelText(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkLabeledDataMapper_Methods[] = {
  {(char*)"GetClassName", PyvtkLabeledDataMapper_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkLabeledDataMapper_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkLabeledDataMapper_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkLabeledDataMapper\nC++: vtkLabeledDataMapper *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkLabeledDataMapper_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkLabeledDataMapper\nC++: vtkLabeledDataMapper *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetLabelFormat", PyvtkLabeledDataMapper_SetLabelFormat, METH_VARARGS,
   (char*)"V.SetLabelFormat(string)\nC++: void SetLabelFormat(char *)\n\nSet/Get the format with which to print the labels.  This should\nbe a printf-style format string.\n\nBy default, the mapper will try to print each component of the\ntuple using a sane format: %d for integers, %f for floats, %g for\ndoubles, %ld for longs, et cetera.  If you need a different\nformat, set it here.  You can do things like limit the number of\nsignificant digits, add prefixes/suffixes, basically anything\nthat printf can do.  If you only want to print one component of a\nvector, see the ivar LabeledComponent.\n"},
  {(char*)"GetLabelFormat", PyvtkLabeledDataMapper_GetLabelFormat, METH_VARARGS,
   (char*)"V.GetLabelFormat() -> string\nC++: char *GetLabelFormat()\n\nSet/Get the format with which to print the labels.  This should\nbe a printf-style format string.\n\nBy default, the mapper will try to print each component of the\ntuple using a sane format: %d for integers, %f for floats, %g for\ndoubles, %ld for longs, et cetera.  If you need a different\nformat, set it here.  You can do things like limit the number of\nsignificant digits, add prefixes/suffixes, basically anything\nthat printf can do.  If you only want to print one component of a\nvector, see the ivar LabeledComponent.\n"},
  {(char*)"SetLabeledComponent", PyvtkLabeledDataMapper_SetLabeledComponent, METH_VARARGS,
   (char*)"V.SetLabeledComponent(int)\nC++: void SetLabeledComponent(int a)\n\nSet/Get the component number to label if the data to print has\nmore than one component. For example, all the components of\nscalars, vectors, normals, etc. are labeled by default\n(LabeledComponent=(-1)). However, if this ivar is nonnegative,\nthen only the one component specified is labeled.\n"},
  {(char*)"GetLabeledComponent", PyvtkLabeledDataMapper_GetLabeledComponent, METH_VARARGS,
   (char*)"V.GetLabeledComponent() -> int\nC++: int GetLabeledComponent()\n\nSet/Get the component number to label if the data to print has\nmore than one component. For example, all the components of\nscalars, vectors, normals, etc. are labeled by default\n(LabeledComponent=(-1)). However, if this ivar is nonnegative,\nthen only the one component specified is labeled.\n"},
  {(char*)"SetFieldDataArray", PyvtkLabeledDataMapper_SetFieldDataArray, METH_VARARGS,
   (char*)"V.SetFieldDataArray(int)\nC++: void SetFieldDataArray(int arrayIndex)\n\nSet/Get the field data array to label. This instance variable is\nonly applicable if field data is labeled.  This will clear\nFieldDataName when set.\n"},
  {(char*)"GetFieldDataArray", PyvtkLabeledDataMapper_GetFieldDataArray, METH_VARARGS,
   (char*)"V.GetFieldDataArray() -> int\nC++: int GetFieldDataArray()\n\nSet/Get the field data array to label. This instance variable is\nonly applicable if field data is labeled.  This will clear\nFieldDataName when set.\n"},
  {(char*)"SetFieldDataName", PyvtkLabeledDataMapper_SetFieldDataName, METH_VARARGS,
   (char*)"V.SetFieldDataName(string)\nC++: void SetFieldDataName(const char *arrayName)\n\nSet/Get the name of the field data array to label.  This instance\nvariable is only applicable if field data is labeled.  This will\noverride FieldDataArray when set.\n"},
  {(char*)"GetFieldDataName", PyvtkLabeledDataMapper_GetFieldDataName, METH_VARARGS,
   (char*)"V.GetFieldDataName() -> string\nC++: char *GetFieldDataName()\n\nSet/Get the name of the field data array to label.  This instance\nvariable is only applicable if field data is labeled.  This will\noverride FieldDataArray when set.\n"},
  {(char*)"SetInputData", PyvtkLabeledDataMapper_SetInputData, METH_VARARGS,
   (char*)"V.SetInputData(vtkDataObject)\nC++: virtual void SetInputData(vtkDataObject *)\n\nSet the input dataset to the mapper. This mapper handles any type\nof data.\n"},
  {(char*)"GetInput", PyvtkLabeledDataMapper_GetInput, METH_VARARGS,
   (char*)"V.GetInput() -> vtkDataSet\nC++: vtkDataSet *GetInput()\n\nUse GetInputDataObject() to get the input data object for\ncomposite datasets.\n"},
  {(char*)"SetLabelMode", PyvtkLabeledDataMapper_SetLabelMode, METH_VARARGS,
   (char*)"V.SetLabelMode(int)\nC++: void SetLabelMode(int a)\n\nSpecify which data to plot: IDs, scalars, vectors, normals,\ntexture coords, tensors, or field data. If the data has more than\none component, use the method SetLabeledComponent to control\nwhich components to plot. The default is VTK_LABEL_IDS.\n"},
  {(char*)"GetLabelMode", PyvtkLabeledDataMapper_GetLabelMode, METH_VARARGS,
   (char*)"V.GetLabelMode() -> int\nC++: int GetLabelMode()\n\nSpecify which data to plot: IDs, scalars, vectors, normals,\ntexture coords, tensors, or field data. If the data has more than\none component, use the method SetLabeledComponent to control\nwhich components to plot. The default is VTK_LABEL_IDS.\n"},
  {(char*)"SetLabelModeToLabelIds", PyvtkLabeledDataMapper_SetLabelModeToLabelIds, METH_VARARGS,
   (char*)"V.SetLabelModeToLabelIds()\nC++: void SetLabelModeToLabelIds()\n\nSpecify which data to plot: IDs, scalars, vectors, normals,\ntexture coords, tensors, or field data. If the data has more than\none component, use the method SetLabeledComponent to control\nwhich components to plot. The default is VTK_LABEL_IDS.\n"},
  {(char*)"SetLabelModeToLabelScalars", PyvtkLabeledDataMapper_SetLabelModeToLabelScalars, METH_VARARGS,
   (char*)"V.SetLabelModeToLabelScalars()\nC++: void SetLabelModeToLabelScalars()\n\nSpecify which data to plot: IDs, scalars, vectors, normals,\ntexture coords, tensors, or field data. If the data has more than\none component, use the method SetLabeledComponent to control\nwhich components to plot. The default is VTK_LABEL_IDS.\n"},
  {(char*)"SetLabelModeToLabelVectors", PyvtkLabeledDataMapper_SetLabelModeToLabelVectors, METH_VARARGS,
   (char*)"V.SetLabelModeToLabelVectors()\nC++: void SetLabelModeToLabelVectors()\n\nSpecify which data to plot: IDs, scalars, vectors, normals,\ntexture coords, tensors, or field data. If the data has more than\none component, use the method SetLabeledComponent to control\nwhich components to plot. The default is VTK_LABEL_IDS.\n"},
  {(char*)"SetLabelModeToLabelNormals", PyvtkLabeledDataMapper_SetLabelModeToLabelNormals, METH_VARARGS,
   (char*)"V.SetLabelModeToLabelNormals()\nC++: void SetLabelModeToLabelNormals()\n\nSpecify which data to plot: IDs, scalars, vectors, normals,\ntexture coords, tensors, or field data. If the data has more than\none component, use the method SetLabeledComponent to control\nwhich components to plot. The default is VTK_LABEL_IDS.\n"},
  {(char*)"SetLabelModeToLabelTCoords", PyvtkLabeledDataMapper_SetLabelModeToLabelTCoords, METH_VARARGS,
   (char*)"V.SetLabelModeToLabelTCoords()\nC++: void SetLabelModeToLabelTCoords()\n\nSpecify which data to plot: IDs, scalars, vectors, normals,\ntexture coords, tensors, or field data. If the data has more than\none component, use the method SetLabeledComponent to control\nwhich components to plot. The default is VTK_LABEL_IDS.\n"},
  {(char*)"SetLabelModeToLabelTensors", PyvtkLabeledDataMapper_SetLabelModeToLabelTensors, METH_VARARGS,
   (char*)"V.SetLabelModeToLabelTensors()\nC++: void SetLabelModeToLabelTensors()\n\nSpecify which data to plot: IDs, scalars, vectors, normals,\ntexture coords, tensors, or field data. If the data has more than\none component, use the method SetLabeledComponent to control\nwhich components to plot. The default is VTK_LABEL_IDS.\n"},
  {(char*)"SetLabelModeToLabelFieldData", PyvtkLabeledDataMapper_SetLabelModeToLabelFieldData, METH_VARARGS,
   (char*)"V.SetLabelModeToLabelFieldData()\nC++: void SetLabelModeToLabelFieldData()\n\nSpecify which data to plot: IDs, scalars, vectors, normals,\ntexture coords, tensors, or field data. If the data has more than\none component, use the method SetLabeledComponent to control\nwhich components to plot. The default is VTK_LABEL_IDS.\n"},
  {(char*)"SetLabelTextProperty", PyvtkLabeledDataMapper_SetLabelTextProperty, METH_VARARGS,
   (char*)"V.SetLabelTextProperty(vtkTextProperty)\nC++: virtual void SetLabelTextProperty(vtkTextProperty *p)\nV.SetLabelTextProperty(vtkTextProperty, int)\nC++: virtual void SetLabelTextProperty(vtkTextProperty *p,\n    int type)\n\nSet/Get the text property. If an integer argument is provided,\nyou may provide different text properties for different label\ntypes. The type is determined by an optional type input array.\n"},
  {(char*)"GetLabelTextProperty", PyvtkLabeledDataMapper_GetLabelTextProperty, METH_VARARGS,
   (char*)"V.GetLabelTextProperty() -> vtkTextProperty\nC++: virtual vtkTextProperty *GetLabelTextProperty()\nV.GetLabelTextProperty(int) -> vtkTextProperty\nC++: virtual vtkTextProperty *GetLabelTextProperty(int type)\n\nSet/Get the text property. If an integer argument is provided,\nyou may provide different text properties for different label\ntypes. The type is determined by an optional type input array.\n"},
  {(char*)"RenderOpaqueGeometry", PyvtkLabeledDataMapper_RenderOpaqueGeometry, METH_VARARGS,
   (char*)"V.RenderOpaqueGeometry(vtkViewport, vtkActor2D)\nC++: void RenderOpaqueGeometry(vtkViewport *viewport,\n    vtkActor2D *actor)\n\nDraw the text to the screen at each input point.\n"},
  {(char*)"RenderOverlay", PyvtkLabeledDataMapper_RenderOverlay, METH_VARARGS,
   (char*)"V.RenderOverlay(vtkViewport, vtkActor2D)\nC++: void RenderOverlay(vtkViewport *viewport, vtkActor2D *actor)\n\nDraw the text to the screen at each input point.\n"},
  {(char*)"ReleaseGraphicsResources", PyvtkLabeledDataMapper_ReleaseGraphicsResources, METH_VARARGS,
   (char*)"V.ReleaseGraphicsResources(vtkWindow)\nC++: virtual void ReleaseGraphicsResources(vtkWindow *)\n\nRelease any graphics resources that are being consumed by this\nactor.\n"},
  {(char*)"GetTransform", PyvtkLabeledDataMapper_GetTransform, METH_VARARGS,
   (char*)"V.GetTransform() -> vtkTransform\nC++: vtkTransform *GetTransform()\n\nThe transform to apply to the labels before mapping to 2D.\n"},
  {(char*)"SetTransform", PyvtkLabeledDataMapper_SetTransform, METH_VARARGS,
   (char*)"V.SetTransform(vtkTransform)\nC++: void SetTransform(vtkTransform *t)\n\nThe transform to apply to the labels before mapping to 2D.\n"},
  {(char*)"GetCoordinateSystem", PyvtkLabeledDataMapper_GetCoordinateSystem, METH_VARARGS,
   (char*)"V.GetCoordinateSystem() -> int\nC++: int GetCoordinateSystem()\n\nSet/get the coordinate system used for output labels. The output\ndatasets may have point coordinates reported in the world space\nor display space.\n"},
  {(char*)"SetCoordinateSystem", PyvtkLabeledDataMapper_SetCoordinateSystem, METH_VARARGS,
   (char*)"V.SetCoordinateSystem(int)\nC++: void SetCoordinateSystem(int)\n\nSet/get the coordinate system used for output labels. The output\ndatasets may have point coordinates reported in the world space\nor display space.\n"},
  {(char*)"GetCoordinateSystemMinValue", PyvtkLabeledDataMapper_GetCoordinateSystemMinValue, METH_VARARGS,
   (char*)"V.GetCoordinateSystemMinValue() -> int\nC++: int GetCoordinateSystemMinValue()\n\nSet/get the coordinate system used for output labels. The output\ndatasets may have point coordinates reported in the world space\nor display space.\n"},
  {(char*)"GetCoordinateSystemMaxValue", PyvtkLabeledDataMapper_GetCoordinateSystemMaxValue, METH_VARARGS,
   (char*)"V.GetCoordinateSystemMaxValue() -> int\nC++: int GetCoordinateSystemMaxValue()\n\nSet/get the coordinate system used for output labels. The output\ndatasets may have point coordinates reported in the world space\nor display space.\n"},
  {(char*)"CoordinateSystemWorld", PyvtkLabeledDataMapper_CoordinateSystemWorld, METH_VARARGS,
   (char*)"V.CoordinateSystemWorld()\nC++: void CoordinateSystemWorld()\n\nSet/get the coordinate system used for output labels. The output\ndatasets may have point coordinates reported in the world space\nor display space.\n"},
  {(char*)"CoordinateSystemDisplay", PyvtkLabeledDataMapper_CoordinateSystemDisplay, METH_VARARGS,
   (char*)"V.CoordinateSystemDisplay()\nC++: void CoordinateSystemDisplay()\n\nSet/get the coordinate system used for output labels. The output\ndatasets may have point coordinates reported in the world space\nor display space.\n"},
  {(char*)"GetMTime", PyvtkLabeledDataMapper_GetMTime, METH_VARARGS,
   (char*)"V.GetMTime() -> int\nC++: virtual unsigned long GetMTime()\n\nReturn the modified time for this object.\n"},
  {(char*)"GetNumberOfLabels", PyvtkLabeledDataMapper_GetNumberOfLabels, METH_VARARGS,
   (char*)"V.GetNumberOfLabels() -> int\nC++: int GetNumberOfLabels()\n\nReturn the number of labels rendered by the mapper.\n"},
  {(char*)"GetLabelPosition", PyvtkLabeledDataMapper_GetLabelPosition, METH_VARARGS,
   (char*)"V.GetLabelPosition(int, [float, float, float])\nC++: void GetLabelPosition(int label, double pos[3])\n\nReturn the position of the requested label.\n"},
  {(char*)"GetLabelText", PyvtkLabeledDataMapper_GetLabelText, METH_VARARGS,
   (char*)"V.GetLabelText(int) -> string\nC++: const char *GetLabelText(int label)\n\nReturn the text for the requested label.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkLabeledDataMapper_StaticNew()
{
  return vtkLabeledDataMapper::New();
}

PyObject *PyVTKClass_vtkLabeledDataMapperNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkLabeledDataMapper_StaticNew,
    PyvtkLabeledDataMapper_Methods,
    "vtkLabeledDataMapper", modulename,
    NULL, NULL,
    PyvtkLabeledDataMapper_Doc(),
    PyVTKClass_vtkMapper2DNew(modulename));

  if (cls)
    {
    PyObject *d = PyVTKClass_GetDict(cls);
    PyObject *o;

    PyType_Ready(&PyvtkLabeledDataMapper_Coordinates_Type);
    PyvtkLabeledDataMapper_Coordinates_Type.tp_new = NULL;

    o = (PyObject *)&PyvtkLabeledDataMapper_Coordinates_Type;
    if (o && PyDict_SetItemString(d, (char *)"Coordinates", o) != 0)
      {
      Py_DECREF(o);
      }

    for (int c = 0; c < 2; c++)
      {
      typedef vtkLabeledDataMapper::Coordinates cxx_enum_type;

      static const struct { const char *name; cxx_enum_type value; }
        constants[2] = {
          { "WORLD", vtkLabeledDataMapper::WORLD },
          { "DISPLAY", vtkLabeledDataMapper::DISPLAY },
        };

      o = PyvtkLabeledDataMapper_Coordinates_FromEnum(constants[c].value);
      if (o)
        {
        PyDict_SetItemString(d, (char *)constants[c].name, o);
        Py_DECREF(o);
        }
      }

    }

  return cls;
}

const char **PyvtkLabeledDataMapper_Doc()
{
  static const char *docstring[] = {
    "vtkLabeledDataMapper - draw text labels at dataset points\n\n",
    "Superclass: vtkMapper2D\n\n",
    "vtkLabeledDataMapper is a mapper that renders text at dataset points.\nVarious items can be labeled including point ids, scalars, vectors,\nnormals, texture coordinates, tensors, and field data components.\n\nThe format with which the label is drawn is specified using a printf\nstyle format string. The font attributes of the text can be set\nthrough the vtkTextProperty associated to this mapper.\n\nBy def",
    "ault, all the components of multi-component data such as\nvectors, normals, texture coordinates, tensors, and multi-component\nscalars are labeled. However, you can specify a single component if\nyou prefer. (Note: the label format specifies the format to use for a\nsingle component. The label is creating by looping over all\ncomponents and using the label format to render each component.)\n\nCaveats:\n\nU",
    "se this filter in combination with vtkSelectVisiblePoints if you\nwant to label only points that are visible. If you want to label\ncells rather than points, use the filter vtkCellCenters to generate\npoints at the center of the cells. Also, you can use the class\nvtkIdFilter to generate ids as scalars or field data, which can then\nbe labeled.\n\nSee Also:\n\nvtkMapper2D vtkActor2D vtkTextMapper vtkTextPr",
    "operty\nvtkSelectVisiblePoints vtkIdFilter vtkCellCenters\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkLabeledDataMapper(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkLabeledDataMapperNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkLabeledDataMapper", o) != 0)
    {
    Py_DECREF(o);
    }

  for (int c = 0; c < 7; c++)
    {
    static const struct { const char *name; int value; }
      constants[7] = {
        { "VTK_LABEL_IDS", 0 },
        { "VTK_LABEL_SCALARS", 1 },
        { "VTK_LABEL_VECTORS", 2 },
        { "VTK_LABEL_NORMALS", 3 },
        { "VTK_LABEL_TCOORDS", 4 },
        { "VTK_LABEL_TENSORS", 5 },
        { "VTK_LABEL_FIELD_DATA", 6 },
      };

    o = PyInt_FromLong(constants[c].value);
    if (o)
      {
      PyDict_SetItemString(dict, (char *)constants[c].name, o);
      Py_DECREF(o);
      }
    }

}

