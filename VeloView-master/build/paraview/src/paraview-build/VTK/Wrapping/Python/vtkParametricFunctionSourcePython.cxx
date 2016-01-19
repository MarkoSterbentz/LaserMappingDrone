// python wrapper for vtkParametricFunctionSource
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkParametricFunctionSource.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkParametricFunctionSource(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkParametricFunctionSourceNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkPolyDataAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
#endif

static const char **PyvtkParametricFunctionSource_Doc();

#ifndef DECLARED_PyvtkParametricFunctionSource_SCALAR_MODE_Type
extern VTK_PYTHON_EXPORT PyTypeObject PyvtkParametricFunctionSource_SCALAR_MODE_Type;
#define DECLARED_PyvtkParametricFunctionSource_SCALAR_MODE_Type
#endif

PyTypeObject PyvtkParametricFunctionSource_SCALAR_MODE_Type = {
  PyObject_HEAD_INIT(&PyType_Type)
  0,
  (char*)"SCALAR_MODE", // tp_name
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

PyObject *PyvtkParametricFunctionSource_SCALAR_MODE_FromEnum(int val)
{
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkParametricFunctionSource_SCALAR_MODE_Type);
  self->ob_ival = val;
  return (PyObject *)self;
}


static PyObject *
PyvtkParametricFunctionSource_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunctionSource *op = static_cast<vtkParametricFunctionSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkParametricFunctionSource::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkParametricFunctionSource_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunctionSource *op = static_cast<vtkParametricFunctionSource *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkParametricFunctionSource::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkParametricFunctionSource_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunctionSource *op = static_cast<vtkParametricFunctionSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkParametricFunctionSource *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkParametricFunctionSource::NewInstance());

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
PyvtkParametricFunctionSource_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkParametricFunctionSource *tempr = vtkParametricFunctionSource::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkParametricFunctionSource_SetParametricFunction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetParametricFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunctionSource *op = static_cast<vtkParametricFunctionSource *>(vp);

  vtkParametricFunction *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkParametricFunction"))
    {
    if (ap.IsBound())
      {
      op->SetParametricFunction(temp0);
      }
    else
      {
      op->vtkParametricFunctionSource::SetParametricFunction(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkParametricFunctionSource_GetParametricFunction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetParametricFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunctionSource *op = static_cast<vtkParametricFunctionSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkParametricFunction *tempr = (ap.IsBound() ?
      op->GetParametricFunction() :
      op->vtkParametricFunctionSource::GetParametricFunction());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkParametricFunctionSource_SetUResolution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunctionSource *op = static_cast<vtkParametricFunctionSource *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetUResolution(temp0);
      }
    else
      {
      op->vtkParametricFunctionSource::SetUResolution(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkParametricFunctionSource_GetUResolutionMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUResolutionMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunctionSource *op = static_cast<vtkParametricFunctionSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetUResolutionMinValue() :
      op->vtkParametricFunctionSource::GetUResolutionMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkParametricFunctionSource_GetUResolutionMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUResolutionMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunctionSource *op = static_cast<vtkParametricFunctionSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetUResolutionMaxValue() :
      op->vtkParametricFunctionSource::GetUResolutionMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkParametricFunctionSource_GetUResolution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunctionSource *op = static_cast<vtkParametricFunctionSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetUResolution() :
      op->vtkParametricFunctionSource::GetUResolution());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkParametricFunctionSource_SetVResolution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunctionSource *op = static_cast<vtkParametricFunctionSource *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetVResolution(temp0);
      }
    else
      {
      op->vtkParametricFunctionSource::SetVResolution(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkParametricFunctionSource_GetVResolutionMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVResolutionMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunctionSource *op = static_cast<vtkParametricFunctionSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetVResolutionMinValue() :
      op->vtkParametricFunctionSource::GetVResolutionMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkParametricFunctionSource_GetVResolutionMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVResolutionMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunctionSource *op = static_cast<vtkParametricFunctionSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetVResolutionMaxValue() :
      op->vtkParametricFunctionSource::GetVResolutionMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkParametricFunctionSource_GetVResolution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunctionSource *op = static_cast<vtkParametricFunctionSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetVResolution() :
      op->vtkParametricFunctionSource::GetVResolution());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkParametricFunctionSource_SetWResolution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunctionSource *op = static_cast<vtkParametricFunctionSource *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetWResolution(temp0);
      }
    else
      {
      op->vtkParametricFunctionSource::SetWResolution(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkParametricFunctionSource_GetWResolutionMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWResolutionMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunctionSource *op = static_cast<vtkParametricFunctionSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetWResolutionMinValue() :
      op->vtkParametricFunctionSource::GetWResolutionMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkParametricFunctionSource_GetWResolutionMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWResolutionMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunctionSource *op = static_cast<vtkParametricFunctionSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetWResolutionMaxValue() :
      op->vtkParametricFunctionSource::GetWResolutionMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkParametricFunctionSource_GetWResolution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunctionSource *op = static_cast<vtkParametricFunctionSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetWResolution() :
      op->vtkParametricFunctionSource::GetWResolution());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkParametricFunctionSource_GenerateTextureCoordinatesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateTextureCoordinatesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunctionSource *op = static_cast<vtkParametricFunctionSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->GenerateTextureCoordinatesOn();
      }
    else
      {
      op->vtkParametricFunctionSource::GenerateTextureCoordinatesOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkParametricFunctionSource_GenerateTextureCoordinatesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateTextureCoordinatesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunctionSource *op = static_cast<vtkParametricFunctionSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->GenerateTextureCoordinatesOff();
      }
    else
      {
      op->vtkParametricFunctionSource::GenerateTextureCoordinatesOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkParametricFunctionSource_SetGenerateTextureCoordinates(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGenerateTextureCoordinates");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunctionSource *op = static_cast<vtkParametricFunctionSource *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetGenerateTextureCoordinates(temp0);
      }
    else
      {
      op->vtkParametricFunctionSource::SetGenerateTextureCoordinates(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkParametricFunctionSource_GetGenerateTextureCoordinatesMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGenerateTextureCoordinatesMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunctionSource *op = static_cast<vtkParametricFunctionSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetGenerateTextureCoordinatesMinValue() :
      op->vtkParametricFunctionSource::GetGenerateTextureCoordinatesMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkParametricFunctionSource_GetGenerateTextureCoordinatesMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGenerateTextureCoordinatesMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunctionSource *op = static_cast<vtkParametricFunctionSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetGenerateTextureCoordinatesMaxValue() :
      op->vtkParametricFunctionSource::GetGenerateTextureCoordinatesMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkParametricFunctionSource_GetGenerateTextureCoordinates(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGenerateTextureCoordinates");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunctionSource *op = static_cast<vtkParametricFunctionSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetGenerateTextureCoordinates() :
      op->vtkParametricFunctionSource::GetGenerateTextureCoordinates());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkParametricFunctionSource_GenerateNormalsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateNormalsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunctionSource *op = static_cast<vtkParametricFunctionSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->GenerateNormalsOn();
      }
    else
      {
      op->vtkParametricFunctionSource::GenerateNormalsOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkParametricFunctionSource_GenerateNormalsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateNormalsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunctionSource *op = static_cast<vtkParametricFunctionSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->GenerateNormalsOff();
      }
    else
      {
      op->vtkParametricFunctionSource::GenerateNormalsOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkParametricFunctionSource_SetGenerateNormals(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGenerateNormals");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunctionSource *op = static_cast<vtkParametricFunctionSource *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetGenerateNormals(temp0);
      }
    else
      {
      op->vtkParametricFunctionSource::SetGenerateNormals(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkParametricFunctionSource_GetGenerateNormalsMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGenerateNormalsMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunctionSource *op = static_cast<vtkParametricFunctionSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetGenerateNormalsMinValue() :
      op->vtkParametricFunctionSource::GetGenerateNormalsMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkParametricFunctionSource_GetGenerateNormalsMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGenerateNormalsMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunctionSource *op = static_cast<vtkParametricFunctionSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetGenerateNormalsMaxValue() :
      op->vtkParametricFunctionSource::GetGenerateNormalsMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkParametricFunctionSource_GetGenerateNormals(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGenerateNormals");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunctionSource *op = static_cast<vtkParametricFunctionSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetGenerateNormals() :
      op->vtkParametricFunctionSource::GetGenerateNormals());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkParametricFunctionSource_SetScalarMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunctionSource *op = static_cast<vtkParametricFunctionSource *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetScalarMode(temp0);
      }
    else
      {
      op->vtkParametricFunctionSource::SetScalarMode(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkParametricFunctionSource_GetScalarModeMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalarModeMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunctionSource *op = static_cast<vtkParametricFunctionSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetScalarModeMinValue() :
      op->vtkParametricFunctionSource::GetScalarModeMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkParametricFunctionSource_GetScalarModeMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalarModeMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunctionSource *op = static_cast<vtkParametricFunctionSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetScalarModeMaxValue() :
      op->vtkParametricFunctionSource::GetScalarModeMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkParametricFunctionSource_GetScalarMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalarMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunctionSource *op = static_cast<vtkParametricFunctionSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetScalarMode() :
      op->vtkParametricFunctionSource::GetScalarMode());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkParametricFunctionSource_SetScalarModeToNone(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarModeToNone");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunctionSource *op = static_cast<vtkParametricFunctionSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetScalarModeToNone();
      }
    else
      {
      op->vtkParametricFunctionSource::SetScalarModeToNone();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkParametricFunctionSource_SetScalarModeToU(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarModeToU");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunctionSource *op = static_cast<vtkParametricFunctionSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetScalarModeToU();
      }
    else
      {
      op->vtkParametricFunctionSource::SetScalarModeToU();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkParametricFunctionSource_SetScalarModeToV(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarModeToV");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunctionSource *op = static_cast<vtkParametricFunctionSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetScalarModeToV();
      }
    else
      {
      op->vtkParametricFunctionSource::SetScalarModeToV();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkParametricFunctionSource_SetScalarModeToU0(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarModeToU0");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunctionSource *op = static_cast<vtkParametricFunctionSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetScalarModeToU0();
      }
    else
      {
      op->vtkParametricFunctionSource::SetScalarModeToU0();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkParametricFunctionSource_SetScalarModeToV0(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarModeToV0");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunctionSource *op = static_cast<vtkParametricFunctionSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetScalarModeToV0();
      }
    else
      {
      op->vtkParametricFunctionSource::SetScalarModeToV0();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkParametricFunctionSource_SetScalarModeToU0V0(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarModeToU0V0");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunctionSource *op = static_cast<vtkParametricFunctionSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetScalarModeToU0V0();
      }
    else
      {
      op->vtkParametricFunctionSource::SetScalarModeToU0V0();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkParametricFunctionSource_SetScalarModeToModulus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarModeToModulus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunctionSource *op = static_cast<vtkParametricFunctionSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetScalarModeToModulus();
      }
    else
      {
      op->vtkParametricFunctionSource::SetScalarModeToModulus();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkParametricFunctionSource_SetScalarModeToPhase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarModeToPhase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunctionSource *op = static_cast<vtkParametricFunctionSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetScalarModeToPhase();
      }
    else
      {
      op->vtkParametricFunctionSource::SetScalarModeToPhase();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkParametricFunctionSource_SetScalarModeToQuadrant(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarModeToQuadrant");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunctionSource *op = static_cast<vtkParametricFunctionSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetScalarModeToQuadrant();
      }
    else
      {
      op->vtkParametricFunctionSource::SetScalarModeToQuadrant();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkParametricFunctionSource_SetScalarModeToX(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarModeToX");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunctionSource *op = static_cast<vtkParametricFunctionSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetScalarModeToX();
      }
    else
      {
      op->vtkParametricFunctionSource::SetScalarModeToX();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkParametricFunctionSource_SetScalarModeToY(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarModeToY");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunctionSource *op = static_cast<vtkParametricFunctionSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetScalarModeToY();
      }
    else
      {
      op->vtkParametricFunctionSource::SetScalarModeToY();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkParametricFunctionSource_SetScalarModeToZ(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarModeToZ");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunctionSource *op = static_cast<vtkParametricFunctionSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetScalarModeToZ();
      }
    else
      {
      op->vtkParametricFunctionSource::SetScalarModeToZ();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkParametricFunctionSource_SetScalarModeToDistance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarModeToDistance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunctionSource *op = static_cast<vtkParametricFunctionSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetScalarModeToDistance();
      }
    else
      {
      op->vtkParametricFunctionSource::SetScalarModeToDistance();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkParametricFunctionSource_SetScalarModeToFunctionDefined(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarModeToFunctionDefined");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunctionSource *op = static_cast<vtkParametricFunctionSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetScalarModeToFunctionDefined();
      }
    else
      {
      op->vtkParametricFunctionSource::SetScalarModeToFunctionDefined();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkParametricFunctionSource_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunctionSource *op = static_cast<vtkParametricFunctionSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMTime() :
      op->vtkParametricFunctionSource::GetMTime());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkParametricFunctionSource_SetOutputPointsPrecision(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputPointsPrecision");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunctionSource *op = static_cast<vtkParametricFunctionSource *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetOutputPointsPrecision(temp0);
      }
    else
      {
      op->vtkParametricFunctionSource::SetOutputPointsPrecision(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkParametricFunctionSource_GetOutputPointsPrecision(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputPointsPrecision");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunctionSource *op = static_cast<vtkParametricFunctionSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetOutputPointsPrecision() :
      op->vtkParametricFunctionSource::GetOutputPointsPrecision());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkParametricFunctionSource_Methods[] = {
  {(char*)"GetClassName", PyvtkParametricFunctionSource_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkParametricFunctionSource_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkParametricFunctionSource_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkParametricFunctionSource\nC++: vtkParametricFunctionSource *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkParametricFunctionSource_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkParametricFunctionSource\nC++: vtkParametricFunctionSource *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetParametricFunction", PyvtkParametricFunctionSource_SetParametricFunction, METH_VARARGS,
   (char*)"V.SetParametricFunction(vtkParametricFunction)\nC++: virtual void SetParametricFunction(vtkParametricFunction *)\n\nSpecify the parametric function to use to generate the\ntessellation.\n"},
  {(char*)"GetParametricFunction", PyvtkParametricFunctionSource_GetParametricFunction, METH_VARARGS,
   (char*)"V.GetParametricFunction() -> vtkParametricFunction\nC++: vtkParametricFunction *GetParametricFunction()\n\nSpecify the parametric function to use to generate the\ntessellation.\n"},
  {(char*)"SetUResolution", PyvtkParametricFunctionSource_SetUResolution, METH_VARARGS,
   (char*)"V.SetUResolution(int)\nC++: void SetUResolution(int)\n\nSet/Get the number of subdivisions / tessellations in the u\nparametric direction. Note that the number of tessellant points\nin the u direction is the UResolution + 1.\n"},
  {(char*)"GetUResolutionMinValue", PyvtkParametricFunctionSource_GetUResolutionMinValue, METH_VARARGS,
   (char*)"V.GetUResolutionMinValue() -> int\nC++: int GetUResolutionMinValue()\n\nSet/Get the number of subdivisions / tessellations in the u\nparametric direction. Note that the number of tessellant points\nin the u direction is the UResolution + 1.\n"},
  {(char*)"GetUResolutionMaxValue", PyvtkParametricFunctionSource_GetUResolutionMaxValue, METH_VARARGS,
   (char*)"V.GetUResolutionMaxValue() -> int\nC++: int GetUResolutionMaxValue()\n\nSet/Get the number of subdivisions / tessellations in the u\nparametric direction. Note that the number of tessellant points\nin the u direction is the UResolution + 1.\n"},
  {(char*)"GetUResolution", PyvtkParametricFunctionSource_GetUResolution, METH_VARARGS,
   (char*)"V.GetUResolution() -> int\nC++: int GetUResolution()\n\nSet/Get the number of subdivisions / tessellations in the u\nparametric direction. Note that the number of tessellant points\nin the u direction is the UResolution + 1.\n"},
  {(char*)"SetVResolution", PyvtkParametricFunctionSource_SetVResolution, METH_VARARGS,
   (char*)"V.SetVResolution(int)\nC++: void SetVResolution(int)\n\nSet/Get the number of subdivisions / tessellations in the v\nparametric direction. Note that the number of tessellant points\nin the v direction is the VResolution + 1.\n"},
  {(char*)"GetVResolutionMinValue", PyvtkParametricFunctionSource_GetVResolutionMinValue, METH_VARARGS,
   (char*)"V.GetVResolutionMinValue() -> int\nC++: int GetVResolutionMinValue()\n\nSet/Get the number of subdivisions / tessellations in the v\nparametric direction. Note that the number of tessellant points\nin the v direction is the VResolution + 1.\n"},
  {(char*)"GetVResolutionMaxValue", PyvtkParametricFunctionSource_GetVResolutionMaxValue, METH_VARARGS,
   (char*)"V.GetVResolutionMaxValue() -> int\nC++: int GetVResolutionMaxValue()\n\nSet/Get the number of subdivisions / tessellations in the v\nparametric direction. Note that the number of tessellant points\nin the v direction is the VResolution + 1.\n"},
  {(char*)"GetVResolution", PyvtkParametricFunctionSource_GetVResolution, METH_VARARGS,
   (char*)"V.GetVResolution() -> int\nC++: int GetVResolution()\n\nSet/Get the number of subdivisions / tessellations in the v\nparametric direction. Note that the number of tessellant points\nin the v direction is the VResolution + 1.\n"},
  {(char*)"SetWResolution", PyvtkParametricFunctionSource_SetWResolution, METH_VARARGS,
   (char*)"V.SetWResolution(int)\nC++: void SetWResolution(int)\n\nSet/Get the number of subdivisions / tessellations in the w\nparametric direction. Note that the number of tessellant points\nin the w direction is the WResolution + 1.\n"},
  {(char*)"GetWResolutionMinValue", PyvtkParametricFunctionSource_GetWResolutionMinValue, METH_VARARGS,
   (char*)"V.GetWResolutionMinValue() -> int\nC++: int GetWResolutionMinValue()\n\nSet/Get the number of subdivisions / tessellations in the w\nparametric direction. Note that the number of tessellant points\nin the w direction is the WResolution + 1.\n"},
  {(char*)"GetWResolutionMaxValue", PyvtkParametricFunctionSource_GetWResolutionMaxValue, METH_VARARGS,
   (char*)"V.GetWResolutionMaxValue() -> int\nC++: int GetWResolutionMaxValue()\n\nSet/Get the number of subdivisions / tessellations in the w\nparametric direction. Note that the number of tessellant points\nin the w direction is the WResolution + 1.\n"},
  {(char*)"GetWResolution", PyvtkParametricFunctionSource_GetWResolution, METH_VARARGS,
   (char*)"V.GetWResolution() -> int\nC++: int GetWResolution()\n\nSet/Get the number of subdivisions / tessellations in the w\nparametric direction. Note that the number of tessellant points\nin the w direction is the WResolution + 1.\n"},
  {(char*)"GenerateTextureCoordinatesOn", PyvtkParametricFunctionSource_GenerateTextureCoordinatesOn, METH_VARARGS,
   (char*)"V.GenerateTextureCoordinatesOn()\nC++: void GenerateTextureCoordinatesOn()\n\nSet/Get the generation of texture coordinates. This is off by\ndefault. Note that this is only applicable to parametric surfaces\nwhose parametric dimension is 2. Note that texturing may fail in\nsome cases.\n"},
  {(char*)"GenerateTextureCoordinatesOff", PyvtkParametricFunctionSource_GenerateTextureCoordinatesOff, METH_VARARGS,
   (char*)"V.GenerateTextureCoordinatesOff()\nC++: void GenerateTextureCoordinatesOff()\n\nSet/Get the generation of texture coordinates. This is off by\ndefault. Note that this is only applicable to parametric surfaces\nwhose parametric dimension is 2. Note that texturing may fail in\nsome cases.\n"},
  {(char*)"SetGenerateTextureCoordinates", PyvtkParametricFunctionSource_SetGenerateTextureCoordinates, METH_VARARGS,
   (char*)"V.SetGenerateTextureCoordinates(int)\nC++: void SetGenerateTextureCoordinates(int)\n\nSet/Get the generation of texture coordinates. This is off by\ndefault. Note that this is only applicable to parametric surfaces\nwhose parametric dimension is 2. Note that texturing may fail in\nsome cases.\n"},
  {(char*)"GetGenerateTextureCoordinatesMinValue", PyvtkParametricFunctionSource_GetGenerateTextureCoordinatesMinValue, METH_VARARGS,
   (char*)"V.GetGenerateTextureCoordinatesMinValue() -> int\nC++: int GetGenerateTextureCoordinatesMinValue()\n\nSet/Get the generation of texture coordinates. This is off by\ndefault. Note that this is only applicable to parametric surfaces\nwhose parametric dimension is 2. Note that texturing may fail in\nsome cases.\n"},
  {(char*)"GetGenerateTextureCoordinatesMaxValue", PyvtkParametricFunctionSource_GetGenerateTextureCoordinatesMaxValue, METH_VARARGS,
   (char*)"V.GetGenerateTextureCoordinatesMaxValue() -> int\nC++: int GetGenerateTextureCoordinatesMaxValue()\n\nSet/Get the generation of texture coordinates. This is off by\ndefault. Note that this is only applicable to parametric surfaces\nwhose parametric dimension is 2. Note that texturing may fail in\nsome cases.\n"},
  {(char*)"GetGenerateTextureCoordinates", PyvtkParametricFunctionSource_GetGenerateTextureCoordinates, METH_VARARGS,
   (char*)"V.GetGenerateTextureCoordinates() -> int\nC++: int GetGenerateTextureCoordinates()\n\nSet/Get the generation of texture coordinates. This is off by\ndefault. Note that this is only applicable to parametric surfaces\nwhose parametric dimension is 2. Note that texturing may fail in\nsome cases.\n"},
  {(char*)"GenerateNormalsOn", PyvtkParametricFunctionSource_GenerateNormalsOn, METH_VARARGS,
   (char*)"V.GenerateNormalsOn()\nC++: void GenerateNormalsOn()\n\nSet/Get the generation of normals. This is on by default. Note\nthat this is only applicable to parametric surfaces whose\nparametric dimension is 2.\n"},
  {(char*)"GenerateNormalsOff", PyvtkParametricFunctionSource_GenerateNormalsOff, METH_VARARGS,
   (char*)"V.GenerateNormalsOff()\nC++: void GenerateNormalsOff()\n\nSet/Get the generation of normals. This is on by default. Note\nthat this is only applicable to parametric surfaces whose\nparametric dimension is 2.\n"},
  {(char*)"SetGenerateNormals", PyvtkParametricFunctionSource_SetGenerateNormals, METH_VARARGS,
   (char*)"V.SetGenerateNormals(int)\nC++: void SetGenerateNormals(int)\n\nSet/Get the generation of normals. This is on by default. Note\nthat this is only applicable to parametric surfaces whose\nparametric dimension is 2.\n"},
  {(char*)"GetGenerateNormalsMinValue", PyvtkParametricFunctionSource_GetGenerateNormalsMinValue, METH_VARARGS,
   (char*)"V.GetGenerateNormalsMinValue() -> int\nC++: int GetGenerateNormalsMinValue()\n\nSet/Get the generation of normals. This is on by default. Note\nthat this is only applicable to parametric surfaces whose\nparametric dimension is 2.\n"},
  {(char*)"GetGenerateNormalsMaxValue", PyvtkParametricFunctionSource_GetGenerateNormalsMaxValue, METH_VARARGS,
   (char*)"V.GetGenerateNormalsMaxValue() -> int\nC++: int GetGenerateNormalsMaxValue()\n\nSet/Get the generation of normals. This is on by default. Note\nthat this is only applicable to parametric surfaces whose\nparametric dimension is 2.\n"},
  {(char*)"GetGenerateNormals", PyvtkParametricFunctionSource_GetGenerateNormals, METH_VARARGS,
   (char*)"V.GetGenerateNormals() -> int\nC++: int GetGenerateNormals()\n\nSet/Get the generation of normals. This is on by default. Note\nthat this is only applicable to parametric surfaces whose\nparametric dimension is 2.\n"},
  {(char*)"SetScalarMode", PyvtkParametricFunctionSource_SetScalarMode, METH_VARARGS,
   (char*)"V.SetScalarMode(int)\nC++: void SetScalarMode(int)\n\nGet/Set the mode used for the scalar data. See SCALAR_MODE for a\ndescription of the types of scalars generated.\n"},
  {(char*)"GetScalarModeMinValue", PyvtkParametricFunctionSource_GetScalarModeMinValue, METH_VARARGS,
   (char*)"V.GetScalarModeMinValue() -> int\nC++: int GetScalarModeMinValue()\n\nGet/Set the mode used for the scalar data. See SCALAR_MODE for a\ndescription of the types of scalars generated.\n"},
  {(char*)"GetScalarModeMaxValue", PyvtkParametricFunctionSource_GetScalarModeMaxValue, METH_VARARGS,
   (char*)"V.GetScalarModeMaxValue() -> int\nC++: int GetScalarModeMaxValue()\n\nGet/Set the mode used for the scalar data. See SCALAR_MODE for a\ndescription of the types of scalars generated.\n"},
  {(char*)"GetScalarMode", PyvtkParametricFunctionSource_GetScalarMode, METH_VARARGS,
   (char*)"V.GetScalarMode() -> int\nC++: int GetScalarMode()\n\nGet/Set the mode used for the scalar data. See SCALAR_MODE for a\ndescription of the types of scalars generated.\n"},
  {(char*)"SetScalarModeToNone", PyvtkParametricFunctionSource_SetScalarModeToNone, METH_VARARGS,
   (char*)"V.SetScalarModeToNone()\nC++: void SetScalarModeToNone(void)\n\nGet/Set the mode used for the scalar data. See SCALAR_MODE for a\ndescription of the types of scalars generated.\n"},
  {(char*)"SetScalarModeToU", PyvtkParametricFunctionSource_SetScalarModeToU, METH_VARARGS,
   (char*)"V.SetScalarModeToU()\nC++: void SetScalarModeToU(void)\n\nGet/Set the mode used for the scalar data. See SCALAR_MODE for a\ndescription of the types of scalars generated.\n"},
  {(char*)"SetScalarModeToV", PyvtkParametricFunctionSource_SetScalarModeToV, METH_VARARGS,
   (char*)"V.SetScalarModeToV()\nC++: void SetScalarModeToV(void)\n\nGet/Set the mode used for the scalar data. See SCALAR_MODE for a\ndescription of the types of scalars generated.\n"},
  {(char*)"SetScalarModeToU0", PyvtkParametricFunctionSource_SetScalarModeToU0, METH_VARARGS,
   (char*)"V.SetScalarModeToU0()\nC++: void SetScalarModeToU0(void)\n\nGet/Set the mode used for the scalar data. See SCALAR_MODE for a\ndescription of the types of scalars generated.\n"},
  {(char*)"SetScalarModeToV0", PyvtkParametricFunctionSource_SetScalarModeToV0, METH_VARARGS,
   (char*)"V.SetScalarModeToV0()\nC++: void SetScalarModeToV0(void)\n\nGet/Set the mode used for the scalar data. See SCALAR_MODE for a\ndescription of the types of scalars generated.\n"},
  {(char*)"SetScalarModeToU0V0", PyvtkParametricFunctionSource_SetScalarModeToU0V0, METH_VARARGS,
   (char*)"V.SetScalarModeToU0V0()\nC++: void SetScalarModeToU0V0(void)\n\nGet/Set the mode used for the scalar data. See SCALAR_MODE for a\ndescription of the types of scalars generated.\n"},
  {(char*)"SetScalarModeToModulus", PyvtkParametricFunctionSource_SetScalarModeToModulus, METH_VARARGS,
   (char*)"V.SetScalarModeToModulus()\nC++: void SetScalarModeToModulus(void)\n\nGet/Set the mode used for the scalar data. See SCALAR_MODE for a\ndescription of the types of scalars generated.\n"},
  {(char*)"SetScalarModeToPhase", PyvtkParametricFunctionSource_SetScalarModeToPhase, METH_VARARGS,
   (char*)"V.SetScalarModeToPhase()\nC++: void SetScalarModeToPhase(void)\n\nGet/Set the mode used for the scalar data. See SCALAR_MODE for a\ndescription of the types of scalars generated.\n"},
  {(char*)"SetScalarModeToQuadrant", PyvtkParametricFunctionSource_SetScalarModeToQuadrant, METH_VARARGS,
   (char*)"V.SetScalarModeToQuadrant()\nC++: void SetScalarModeToQuadrant(void)\n\nGet/Set the mode used for the scalar data. See SCALAR_MODE for a\ndescription of the types of scalars generated.\n"},
  {(char*)"SetScalarModeToX", PyvtkParametricFunctionSource_SetScalarModeToX, METH_VARARGS,
   (char*)"V.SetScalarModeToX()\nC++: void SetScalarModeToX(void)\n\nGet/Set the mode used for the scalar data. See SCALAR_MODE for a\ndescription of the types of scalars generated.\n"},
  {(char*)"SetScalarModeToY", PyvtkParametricFunctionSource_SetScalarModeToY, METH_VARARGS,
   (char*)"V.SetScalarModeToY()\nC++: void SetScalarModeToY(void)\n\nGet/Set the mode used for the scalar data. See SCALAR_MODE for a\ndescription of the types of scalars generated.\n"},
  {(char*)"SetScalarModeToZ", PyvtkParametricFunctionSource_SetScalarModeToZ, METH_VARARGS,
   (char*)"V.SetScalarModeToZ()\nC++: void SetScalarModeToZ(void)\n\nGet/Set the mode used for the scalar data. See SCALAR_MODE for a\ndescription of the types of scalars generated.\n"},
  {(char*)"SetScalarModeToDistance", PyvtkParametricFunctionSource_SetScalarModeToDistance, METH_VARARGS,
   (char*)"V.SetScalarModeToDistance()\nC++: void SetScalarModeToDistance(void)\n\nGet/Set the mode used for the scalar data. See SCALAR_MODE for a\ndescription of the types of scalars generated.\n"},
  {(char*)"SetScalarModeToFunctionDefined", PyvtkParametricFunctionSource_SetScalarModeToFunctionDefined, METH_VARARGS,
   (char*)"V.SetScalarModeToFunctionDefined()\nC++: void SetScalarModeToFunctionDefined(void)\n\nGet/Set the mode used for the scalar data. See SCALAR_MODE for a\ndescription of the types of scalars generated.\n"},
  {(char*)"GetMTime", PyvtkParametricFunctionSource_GetMTime, METH_VARARGS,
   (char*)"V.GetMTime() -> int\nC++: unsigned long GetMTime()\n\nReturn the MTime also considering the parametric function.\n"},
  {(char*)"SetOutputPointsPrecision", PyvtkParametricFunctionSource_SetOutputPointsPrecision, METH_VARARGS,
   (char*)"V.SetOutputPointsPrecision(int)\nC++: void SetOutputPointsPrecision(int a)\n\nSet/get the desired precision for the output points. See the\ndocumentation for the vtkAlgorithm::Precision enum for an\nexplanation of the available precision settings.\n"},
  {(char*)"GetOutputPointsPrecision", PyvtkParametricFunctionSource_GetOutputPointsPrecision, METH_VARARGS,
   (char*)"V.GetOutputPointsPrecision() -> int\nC++: int GetOutputPointsPrecision()\n\nSet/get the desired precision for the output points. See the\ndocumentation for the vtkAlgorithm::Precision enum for an\nexplanation of the available precision settings.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkParametricFunctionSource_StaticNew()
{
  return vtkParametricFunctionSource::New();
}

PyObject *PyVTKClass_vtkParametricFunctionSourceNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkParametricFunctionSource_StaticNew,
    PyvtkParametricFunctionSource_Methods,
    "vtkParametricFunctionSource", modulename,
    NULL, NULL,
    PyvtkParametricFunctionSource_Doc(),
    PyVTKClass_vtkPolyDataAlgorithmNew(modulename));

  if (cls)
    {
    PyObject *d = PyVTKClass_GetDict(cls);
    PyObject *o;

    PyType_Ready(&PyvtkParametricFunctionSource_SCALAR_MODE_Type);
    PyvtkParametricFunctionSource_SCALAR_MODE_Type.tp_new = NULL;

    o = (PyObject *)&PyvtkParametricFunctionSource_SCALAR_MODE_Type;
    if (o && PyDict_SetItemString(d, (char *)"SCALAR_MODE", o) != 0)
      {
      Py_DECREF(o);
      }

    for (int c = 0; c < 14; c++)
      {
      typedef vtkParametricFunctionSource::SCALAR_MODE cxx_enum_type;

      static const struct { const char *name; cxx_enum_type value; }
        constants[14] = {
          { "SCALAR_NONE", vtkParametricFunctionSource::SCALAR_NONE },
          { "SCALAR_U", vtkParametricFunctionSource::SCALAR_U },
          { "SCALAR_V", vtkParametricFunctionSource::SCALAR_V },
          { "SCALAR_U0", vtkParametricFunctionSource::SCALAR_U0 },
          { "SCALAR_V0", vtkParametricFunctionSource::SCALAR_V0 },
          { "SCALAR_U0V0", vtkParametricFunctionSource::SCALAR_U0V0 },
          { "SCALAR_MODULUS", vtkParametricFunctionSource::SCALAR_MODULUS },
          { "SCALAR_PHASE", vtkParametricFunctionSource::SCALAR_PHASE },
          { "SCALAR_QUADRANT", vtkParametricFunctionSource::SCALAR_QUADRANT },
          { "SCALAR_X", vtkParametricFunctionSource::SCALAR_X },
          { "SCALAR_Y", vtkParametricFunctionSource::SCALAR_Y },
          { "SCALAR_Z", vtkParametricFunctionSource::SCALAR_Z },
          { "SCALAR_DISTANCE", vtkParametricFunctionSource::SCALAR_DISTANCE },
          { "SCALAR_FUNCTION_DEFINED", vtkParametricFunctionSource::SCALAR_FUNCTION_DEFINED },
        };

      o = PyvtkParametricFunctionSource_SCALAR_MODE_FromEnum(constants[c].value);
      if (o)
        {
        PyDict_SetItemString(d, (char *)constants[c].name, o);
        Py_DECREF(o);
        }
      }

    }

  return cls;
}

const char **PyvtkParametricFunctionSource_Doc()
{
  static const char *docstring[] = {
    "vtkParametricFunctionSource - tessellate parametric functions\n\n",
    "Superclass: vtkPolyDataAlgorithm\n\n",
    "This class tessellates parametric functions. The user must specify\nhow many points in the parametric coordinate directions are required\n(i.e., the resolution), and the mode to use to generate scalars.\n\nThanks:\n\nAndrew Maclean andrew.amaclean@gmail.com for creating and\ncontributing the class.\n\nSee Also:\n\nvtkParametricFunction\n\nImplementation of parametrics for 1D lines: vtkParametricSpline\n\nSubclas",
    "ses of vtkParametricFunction implementing non-orentable\nsurfaces: vtkParametricBoy vtkParametricCrossCap\nvtkParametricFigure8Klein vtkParametricKlein vtkParametricMobius\nvtkParametricRoman\n\nSubclasses of vtkParametricFunction implementing orientable surfaces:\nvtkParametricConicSpiral vtkParametricDini vtkParametricEllipsoid\nvtkParametricEnneper vtkParametricRandomHills\nvtkParametricSuperEllipsoid ",
    "vtkParametricSuperToroid\nvtkParametricTorus\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkParametricFunctionSource(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkParametricFunctionSourceNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkParametricFunctionSource", o) != 0)
    {
    Py_DECREF(o);
    }

}

