// python wrapper for vtkAMRStreamingVolumeRepresentation
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkAMRStreamingVolumeRepresentation.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkAMRStreamingVolumeRepresentation(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkAMRStreamingVolumeRepresentationNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkPVDataRepresentationNew
extern "C" { PyObject *PyVTKClass_vtkPVDataRepresentationNew(const char *); }
#define DECLARED_PyVTKClass_vtkPVDataRepresentationNew
#endif

static const char **PyvtkAMRStreamingVolumeRepresentation_Doc();

#ifndef DECLARED_PyvtkAMRStreamingVolumeRepresentation_ResamplingModes_Type
extern VTK_PYTHON_EXPORT PyTypeObject PyvtkAMRStreamingVolumeRepresentation_ResamplingModes_Type;
#define DECLARED_PyvtkAMRStreamingVolumeRepresentation_ResamplingModes_Type
#endif

PyTypeObject PyvtkAMRStreamingVolumeRepresentation_ResamplingModes_Type = {
  PyObject_HEAD_INIT(&PyType_Type)
  0,
  (char*)"ResamplingModes", // tp_name
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

PyObject *PyvtkAMRStreamingVolumeRepresentation_ResamplingModes_FromEnum(int val)
{
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkAMRStreamingVolumeRepresentation_ResamplingModes_Type);
  self->ob_ival = val;
  return (PyObject *)self;
}


static PyObject *
PyvtkAMRStreamingVolumeRepresentation_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRStreamingVolumeRepresentation *op = static_cast<vtkAMRStreamingVolumeRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkAMRStreamingVolumeRepresentation::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAMRStreamingVolumeRepresentation_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRStreamingVolumeRepresentation *op = static_cast<vtkAMRStreamingVolumeRepresentation *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkAMRStreamingVolumeRepresentation::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAMRStreamingVolumeRepresentation_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRStreamingVolumeRepresentation *op = static_cast<vtkAMRStreamingVolumeRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkAMRStreamingVolumeRepresentation *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkAMRStreamingVolumeRepresentation::NewInstance());

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
PyvtkAMRStreamingVolumeRepresentation_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkAMRStreamingVolumeRepresentation *tempr = vtkAMRStreamingVolumeRepresentation::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAMRStreamingVolumeRepresentation_SetResamplingMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetResamplingMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRStreamingVolumeRepresentation *op = static_cast<vtkAMRStreamingVolumeRepresentation *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetResamplingMode(temp0);
      }
    else
      {
      op->vtkAMRStreamingVolumeRepresentation::SetResamplingMode(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAMRStreamingVolumeRepresentation_GetResamplingMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetResamplingMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRStreamingVolumeRepresentation *op = static_cast<vtkAMRStreamingVolumeRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetResamplingMode() :
      op->vtkAMRStreamingVolumeRepresentation::GetResamplingMode());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAMRStreamingVolumeRepresentation_ProcessViewRequest(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ProcessViewRequest");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRStreamingVolumeRepresentation *op = static_cast<vtkAMRStreamingVolumeRepresentation *>(vp);

  vtkInformationRequestKey *temp0 = NULL;
  vtkInformation *temp1 = NULL;
  vtkInformation *temp2 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkInformationRequestKey") &&
      ap.GetVTKObject(temp1, "vtkInformation") &&
      ap.GetVTKObject(temp2, "vtkInformation"))
    {
    int tempr = (ap.IsBound() ?
      op->ProcessViewRequest(temp0, temp1, temp2) :
      op->vtkAMRStreamingVolumeRepresentation::ProcessViewRequest(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAMRStreamingVolumeRepresentation_SetVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRStreamingVolumeRepresentation *op = static_cast<vtkAMRStreamingVolumeRepresentation *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetVisibility(temp0);
      }
    else
      {
      op->vtkAMRStreamingVolumeRepresentation::SetVisibility(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAMRStreamingVolumeRepresentation_SetNumberOfSamples(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfSamples");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRStreamingVolumeRepresentation *op = static_cast<vtkAMRStreamingVolumeRepresentation *>(vp);

  int temp0;
  int temp1;
  int temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      op->SetNumberOfSamples(temp0, temp1, temp2);
      }
    else
      {
      op->vtkAMRStreamingVolumeRepresentation::SetNumberOfSamples(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAMRStreamingVolumeRepresentation_SetStreamingRequestSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetStreamingRequestSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRStreamingVolumeRepresentation *op = static_cast<vtkAMRStreamingVolumeRepresentation *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetStreamingRequestSize(temp0);
      }
    else
      {
      op->vtkAMRStreamingVolumeRepresentation::SetStreamingRequestSize(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAMRStreamingVolumeRepresentation_GetStreamingRequestSizeMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStreamingRequestSizeMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRStreamingVolumeRepresentation *op = static_cast<vtkAMRStreamingVolumeRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetStreamingRequestSizeMinValue() :
      op->vtkAMRStreamingVolumeRepresentation::GetStreamingRequestSizeMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAMRStreamingVolumeRepresentation_GetStreamingRequestSizeMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStreamingRequestSizeMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRStreamingVolumeRepresentation *op = static_cast<vtkAMRStreamingVolumeRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetStreamingRequestSizeMaxValue() :
      op->vtkAMRStreamingVolumeRepresentation::GetStreamingRequestSizeMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAMRStreamingVolumeRepresentation_GetStreamingRequestSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStreamingRequestSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRStreamingVolumeRepresentation *op = static_cast<vtkAMRStreamingVolumeRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetStreamingRequestSize() :
      op->vtkAMRStreamingVolumeRepresentation::GetStreamingRequestSize());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAMRStreamingVolumeRepresentation_SetInputArrayToProcess_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputArrayToProcess");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRStreamingVolumeRepresentation *op = static_cast<vtkAMRStreamingVolumeRepresentation *>(vp);

  int temp0;
  int temp1;
  int temp2;
  int temp3;
  char *temp4 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(5) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4))
    {
    if (ap.IsBound())
      {
      op->SetInputArrayToProcess(temp0, temp1, temp2, temp3, temp4);
      }
    else
      {
      op->vtkAMRStreamingVolumeRepresentation::SetInputArrayToProcess(temp0, temp1, temp2, temp3, temp4);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkAMRStreamingVolumeRepresentation_SetInputArrayToProcess_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputArrayToProcess");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRStreamingVolumeRepresentation *op = static_cast<vtkAMRStreamingVolumeRepresentation *>(vp);

  int temp0;
  int temp1;
  int temp2;
  int temp3;
  int temp4;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(5) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4))
    {
    if (ap.IsBound())
      {
      op->SetInputArrayToProcess(temp0, temp1, temp2, temp3, temp4);
      }
    else
      {
      op->vtkAMRStreamingVolumeRepresentation::SetInputArrayToProcess(temp0, temp1, temp2, temp3, temp4);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkAMRStreamingVolumeRepresentation_SetInputArrayToProcess_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputArrayToProcess");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRStreamingVolumeRepresentation *op = static_cast<vtkAMRStreamingVolumeRepresentation *>(vp);

  int temp0;
  vtkInformation *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkInformation"))
    {
    if (ap.IsBound())
      {
      op->SetInputArrayToProcess(temp0, temp1);
      }
    else
      {
      op->vtkAMRStreamingVolumeRepresentation::SetInputArrayToProcess(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkAMRStreamingVolumeRepresentation_SetInputArrayToProcess_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputArrayToProcess");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRStreamingVolumeRepresentation *op = static_cast<vtkAMRStreamingVolumeRepresentation *>(vp);

  int temp0;
  int temp1;
  int temp2;
  char *temp3 = NULL;
  char *temp4 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(5) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4))
    {
    if (ap.IsBound())
      {
      op->SetInputArrayToProcess(temp0, temp1, temp2, temp3, temp4);
      }
    else
      {
      op->vtkAMRStreamingVolumeRepresentation::SetInputArrayToProcess(temp0, temp1, temp2, temp3, temp4);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkAMRStreamingVolumeRepresentation_SetInputArrayToProcess_Methods[] = {
  {NULL, PyvtkAMRStreamingVolumeRepresentation_SetInputArrayToProcess_s1, METH_VARARGS,
   (char*)"@iiiiz"},
  {NULL, PyvtkAMRStreamingVolumeRepresentation_SetInputArrayToProcess_s2, METH_VARARGS,
   (char*)"@iiiii"},
  {NULL, PyvtkAMRStreamingVolumeRepresentation_SetInputArrayToProcess_s4, METH_VARARGS,
   (char*)"@iiizz"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkAMRStreamingVolumeRepresentation_SetInputArrayToProcess(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkAMRStreamingVolumeRepresentation_SetInputArrayToProcess_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkAMRStreamingVolumeRepresentation_SetInputArrayToProcess_s3(self, args);
    case 5:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetInputArrayToProcess");
  return NULL;
}



static PyObject *
PyvtkAMRStreamingVolumeRepresentation_SetOrientation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOrientation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRStreamingVolumeRepresentation *op = static_cast<vtkAMRStreamingVolumeRepresentation *>(vp);

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
      op->SetOrientation(temp0, temp1, temp2);
      }
    else
      {
      op->vtkAMRStreamingVolumeRepresentation::SetOrientation(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAMRStreamingVolumeRepresentation_SetOrigin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRStreamingVolumeRepresentation *op = static_cast<vtkAMRStreamingVolumeRepresentation *>(vp);

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
      op->SetOrigin(temp0, temp1, temp2);
      }
    else
      {
      op->vtkAMRStreamingVolumeRepresentation::SetOrigin(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAMRStreamingVolumeRepresentation_SetPickable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPickable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRStreamingVolumeRepresentation *op = static_cast<vtkAMRStreamingVolumeRepresentation *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetPickable(temp0);
      }
    else
      {
      op->vtkAMRStreamingVolumeRepresentation::SetPickable(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAMRStreamingVolumeRepresentation_SetPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRStreamingVolumeRepresentation *op = static_cast<vtkAMRStreamingVolumeRepresentation *>(vp);

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
      op->SetPosition(temp0, temp1, temp2);
      }
    else
      {
      op->vtkAMRStreamingVolumeRepresentation::SetPosition(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAMRStreamingVolumeRepresentation_SetScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRStreamingVolumeRepresentation *op = static_cast<vtkAMRStreamingVolumeRepresentation *>(vp);

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
      op->SetScale(temp0, temp1, temp2);
      }
    else
      {
      op->vtkAMRStreamingVolumeRepresentation::SetScale(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAMRStreamingVolumeRepresentation_SetInterpolationType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInterpolationType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRStreamingVolumeRepresentation *op = static_cast<vtkAMRStreamingVolumeRepresentation *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetInterpolationType(temp0);
      }
    else
      {
      op->vtkAMRStreamingVolumeRepresentation::SetInterpolationType(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAMRStreamingVolumeRepresentation_SetColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRStreamingVolumeRepresentation *op = static_cast<vtkAMRStreamingVolumeRepresentation *>(vp);

  vtkColorTransferFunction *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkColorTransferFunction"))
    {
    if (ap.IsBound())
      {
      op->SetColor(temp0);
      }
    else
      {
      op->vtkAMRStreamingVolumeRepresentation::SetColor(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAMRStreamingVolumeRepresentation_SetScalarOpacity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarOpacity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRStreamingVolumeRepresentation *op = static_cast<vtkAMRStreamingVolumeRepresentation *>(vp);

  vtkPiecewiseFunction *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPiecewiseFunction"))
    {
    if (ap.IsBound())
      {
      op->SetScalarOpacity(temp0);
      }
    else
      {
      op->vtkAMRStreamingVolumeRepresentation::SetScalarOpacity(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAMRStreamingVolumeRepresentation_SetScalarOpacityUnitDistance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarOpacityUnitDistance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRStreamingVolumeRepresentation *op = static_cast<vtkAMRStreamingVolumeRepresentation *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetScalarOpacityUnitDistance(temp0);
      }
    else
      {
      op->vtkAMRStreamingVolumeRepresentation::SetScalarOpacityUnitDistance(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAMRStreamingVolumeRepresentation_SetAmbient(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAmbient");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRStreamingVolumeRepresentation *op = static_cast<vtkAMRStreamingVolumeRepresentation *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetAmbient(temp0);
      }
    else
      {
      op->vtkAMRStreamingVolumeRepresentation::SetAmbient(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAMRStreamingVolumeRepresentation_SetDiffuse(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDiffuse");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRStreamingVolumeRepresentation *op = static_cast<vtkAMRStreamingVolumeRepresentation *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetDiffuse(temp0);
      }
    else
      {
      op->vtkAMRStreamingVolumeRepresentation::SetDiffuse(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAMRStreamingVolumeRepresentation_SetSpecular(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSpecular");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRStreamingVolumeRepresentation *op = static_cast<vtkAMRStreamingVolumeRepresentation *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetSpecular(temp0);
      }
    else
      {
      op->vtkAMRStreamingVolumeRepresentation::SetSpecular(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAMRStreamingVolumeRepresentation_SetSpecularPower(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSpecularPower");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRStreamingVolumeRepresentation *op = static_cast<vtkAMRStreamingVolumeRepresentation *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetSpecularPower(temp0);
      }
    else
      {
      op->vtkAMRStreamingVolumeRepresentation::SetSpecularPower(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAMRStreamingVolumeRepresentation_SetShade(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetShade");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRStreamingVolumeRepresentation *op = static_cast<vtkAMRStreamingVolumeRepresentation *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetShade(temp0);
      }
    else
      {
      op->vtkAMRStreamingVolumeRepresentation::SetShade(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAMRStreamingVolumeRepresentation_SetIndependantComponents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIndependantComponents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRStreamingVolumeRepresentation *op = static_cast<vtkAMRStreamingVolumeRepresentation *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetIndependantComponents(temp0);
      }
    else
      {
      op->vtkAMRStreamingVolumeRepresentation::SetIndependantComponents(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAMRStreamingVolumeRepresentation_SetRequestedRenderMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRequestedRenderMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRStreamingVolumeRepresentation *op = static_cast<vtkAMRStreamingVolumeRepresentation *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetRequestedRenderMode(temp0);
      }
    else
      {
      op->vtkAMRStreamingVolumeRepresentation::SetRequestedRenderMode(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkAMRStreamingVolumeRepresentation_Methods[] = {
  {(char*)"GetClassName", PyvtkAMRStreamingVolumeRepresentation_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkAMRStreamingVolumeRepresentation_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkAMRStreamingVolumeRepresentation_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkAMRStreamingVolumeRepresentation\nC++: vtkAMRStreamingVolumeRepresentation *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkAMRStreamingVolumeRepresentation_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkAMRStreamingVolumeRepresentation\nC++: vtkAMRStreamingVolumeRepresentation *SafeDownCast(\n    vtkObject* o)\n\n"},
  {(char*)"SetResamplingMode", PyvtkAMRStreamingVolumeRepresentation_SetResamplingMode, METH_VARARGS,
   (char*)"V.SetResamplingMode(int)\nC++: void SetResamplingMode(int val)\n\nThis control the logic used to determine how to place the\nresampling grid within the AMR bounds.\n\\li RESAMPLE_OVER_DATA_BOUNDS implies that the amr volume is\nset to the data bounds and is not updated as the user interacts.\n\\li RESAMPLE_USING_VIEW_FRUSTUM indicates that the uniform grid\n    must be\nrepositioned when the camera changes using the current view\nfrustum.\n"},
  {(char*)"GetResamplingMode", PyvtkAMRStreamingVolumeRepresentation_GetResamplingMode, METH_VARARGS,
   (char*)"V.GetResamplingMode() -> int\nC++: int GetResamplingMode()\n\nThis control the logic used to determine how to place the\nresampling grid within the AMR bounds.\n\\li RESAMPLE_OVER_DATA_BOUNDS implies that the amr volume is\nset to the data bounds and is not updated as the user interacts.\n\\li RESAMPLE_USING_VIEW_FRUSTUM indicates that the uniform grid\n    must be\nrepositioned when the camera changes using the current view\nfrustum.\n"},
  {(char*)"ProcessViewRequest", PyvtkAMRStreamingVolumeRepresentation_ProcessViewRequest, METH_VARARGS,
   (char*)"V.ProcessViewRequest(vtkInformationRequestKey, vtkInformation,\n    vtkInformation) -> int\nC++: virtual int ProcessViewRequest(\n    vtkInformationRequestKey *request_type,\n    vtkInformation *inInfo, vtkInformation *outInfo)\n\nvtkAlgorithm::ProcessRequest() equivalent for rendering passes.\nThis is typically called by the vtkView to request meta-data from\nthe representations or ask them to perform certain tasks e.g.\nPrepareForRendering. Overridden to skip processing when\nvisibility if off.\n"},
  {(char*)"SetVisibility", PyvtkAMRStreamingVolumeRepresentation_SetVisibility, METH_VARARGS,
   (char*)"V.SetVisibility(bool)\nC++: virtual void SetVisibility(bool val)\n\nGet/Set the visibility for this representation. When the\nvisibility of representation of false, all view passes are\nignored.\n"},
  {(char*)"SetNumberOfSamples", PyvtkAMRStreamingVolumeRepresentation_SetNumberOfSamples, METH_VARARGS,
   (char*)"V.SetNumberOfSamples(int, int, int)\nC++: void SetNumberOfSamples(int x, int y, int z)\n\nGet/Set the resample buffer size. This controls the resolution at\nwhich the data is resampled.\n"},
  {(char*)"SetStreamingRequestSize", PyvtkAMRStreamingVolumeRepresentation_SetStreamingRequestSize, METH_VARARGS,
   (char*)"V.SetStreamingRequestSize(int)\nC++: void SetStreamingRequestSize(int)\n\nSet the number of blocks to request at a given time on a single\nprocess when streaming.\n"},
  {(char*)"GetStreamingRequestSizeMinValue", PyvtkAMRStreamingVolumeRepresentation_GetStreamingRequestSizeMinValue, METH_VARARGS,
   (char*)"V.GetStreamingRequestSizeMinValue() -> int\nC++: int GetStreamingRequestSizeMinValue()\n\nSet the number of blocks to request at a given time on a single\nprocess when streaming.\n"},
  {(char*)"GetStreamingRequestSizeMaxValue", PyvtkAMRStreamingVolumeRepresentation_GetStreamingRequestSizeMaxValue, METH_VARARGS,
   (char*)"V.GetStreamingRequestSizeMaxValue() -> int\nC++: int GetStreamingRequestSizeMaxValue()\n\nSet the number of blocks to request at a given time on a single\nprocess when streaming.\n"},
  {(char*)"GetStreamingRequestSize", PyvtkAMRStreamingVolumeRepresentation_GetStreamingRequestSize, METH_VARARGS,
   (char*)"V.GetStreamingRequestSize() -> int\nC++: int GetStreamingRequestSize()\n\nSet the number of blocks to request at a given time on a single\nprocess when streaming.\n"},
  {(char*)"SetInputArrayToProcess", PyvtkAMRStreamingVolumeRepresentation_SetInputArrayToProcess, METH_VARARGS,
   (char*)"V.SetInputArrayToProcess(int, int, int, int, string)\nC++: virtual void SetInputArrayToProcess(int idx, int port,\n    int connection, int fieldAssociation, const char *name)\nV.SetInputArrayToProcess(int, int, int, int, int)\nC++: virtual void SetInputArrayToProcess(int idx, int port,\n    int connection, int fieldAssociation, int fieldAttributeType)\nV.SetInputArrayToProcess(int, vtkInformation)\nC++: virtual void SetInputArrayToProcess(int idx,\n    vtkInformation *info)\nV.SetInputArrayToProcess(int, int, int, string, string)\nC++: virtual void SetInputArrayToProcess(int idx, int port,\n    int connection, const char *fieldAssociation,\n    const char *attributeTypeorName)\n\nSet the input data arrays that this algorithm will process.\n"},
  {(char*)"SetOrientation", PyvtkAMRStreamingVolumeRepresentation_SetOrientation, METH_VARARGS,
   (char*)"V.SetOrientation(float, float, float)\nC++: void SetOrientation(double, double, double)\n\n"},
  {(char*)"SetOrigin", PyvtkAMRStreamingVolumeRepresentation_SetOrigin, METH_VARARGS,
   (char*)"V.SetOrigin(float, float, float)\nC++: void SetOrigin(double, double, double)\n\n"},
  {(char*)"SetPickable", PyvtkAMRStreamingVolumeRepresentation_SetPickable, METH_VARARGS,
   (char*)"V.SetPickable(int)\nC++: void SetPickable(int val)\n\n"},
  {(char*)"SetPosition", PyvtkAMRStreamingVolumeRepresentation_SetPosition, METH_VARARGS,
   (char*)"V.SetPosition(float, float, float)\nC++: void SetPosition(double, double, double)\n\n"},
  {(char*)"SetScale", PyvtkAMRStreamingVolumeRepresentation_SetScale, METH_VARARGS,
   (char*)"V.SetScale(float, float, float)\nC++: void SetScale(double, double, double)\n\n"},
  {(char*)"SetInterpolationType", PyvtkAMRStreamingVolumeRepresentation_SetInterpolationType, METH_VARARGS,
   (char*)"V.SetInterpolationType(int)\nC++: void SetInterpolationType(int val)\n\n"},
  {(char*)"SetColor", PyvtkAMRStreamingVolumeRepresentation_SetColor, METH_VARARGS,
   (char*)"V.SetColor(vtkColorTransferFunction)\nC++: void SetColor(vtkColorTransferFunction *lut)\n\n"},
  {(char*)"SetScalarOpacity", PyvtkAMRStreamingVolumeRepresentation_SetScalarOpacity, METH_VARARGS,
   (char*)"V.SetScalarOpacity(vtkPiecewiseFunction)\nC++: void SetScalarOpacity(vtkPiecewiseFunction *pwf)\n\n"},
  {(char*)"SetScalarOpacityUnitDistance", PyvtkAMRStreamingVolumeRepresentation_SetScalarOpacityUnitDistance, METH_VARARGS,
   (char*)"V.SetScalarOpacityUnitDistance(float)\nC++: void SetScalarOpacityUnitDistance(double val)\n\n"},
  {(char*)"SetAmbient", PyvtkAMRStreamingVolumeRepresentation_SetAmbient, METH_VARARGS,
   (char*)"V.SetAmbient(float)\nC++: void SetAmbient(double)\n\n"},
  {(char*)"SetDiffuse", PyvtkAMRStreamingVolumeRepresentation_SetDiffuse, METH_VARARGS,
   (char*)"V.SetDiffuse(float)\nC++: void SetDiffuse(double)\n\n"},
  {(char*)"SetSpecular", PyvtkAMRStreamingVolumeRepresentation_SetSpecular, METH_VARARGS,
   (char*)"V.SetSpecular(float)\nC++: void SetSpecular(double)\n\n"},
  {(char*)"SetSpecularPower", PyvtkAMRStreamingVolumeRepresentation_SetSpecularPower, METH_VARARGS,
   (char*)"V.SetSpecularPower(float)\nC++: void SetSpecularPower(double)\n\n"},
  {(char*)"SetShade", PyvtkAMRStreamingVolumeRepresentation_SetShade, METH_VARARGS,
   (char*)"V.SetShade(bool)\nC++: void SetShade(bool)\n\n"},
  {(char*)"SetIndependantComponents", PyvtkAMRStreamingVolumeRepresentation_SetIndependantComponents, METH_VARARGS,
   (char*)"V.SetIndependantComponents(bool)\nC++: void SetIndependantComponents(bool)\n\n"},
  {(char*)"SetRequestedRenderMode", PyvtkAMRStreamingVolumeRepresentation_SetRequestedRenderMode, METH_VARARGS,
   (char*)"V.SetRequestedRenderMode(int)\nC++: void SetRequestedRenderMode(int)\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkAMRStreamingVolumeRepresentation_StaticNew()
{
  return vtkAMRStreamingVolumeRepresentation::New();
}

PyObject *PyVTKClass_vtkAMRStreamingVolumeRepresentationNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkAMRStreamingVolumeRepresentation_StaticNew,
    PyvtkAMRStreamingVolumeRepresentation_Methods,
    "vtkAMRStreamingVolumeRepresentation", modulename,
    NULL, NULL,
    PyvtkAMRStreamingVolumeRepresentation_Doc(),
    PyVTKClass_vtkPVDataRepresentationNew(modulename));

  if (cls)
    {
    PyObject *d = PyVTKClass_GetDict(cls);
    PyObject *o;

    PyType_Ready(&PyvtkAMRStreamingVolumeRepresentation_ResamplingModes_Type);
    PyvtkAMRStreamingVolumeRepresentation_ResamplingModes_Type.tp_new = NULL;

    o = (PyObject *)&PyvtkAMRStreamingVolumeRepresentation_ResamplingModes_Type;
    if (o && PyDict_SetItemString(d, (char *)"ResamplingModes", o) != 0)
      {
      Py_DECREF(o);
      }

    for (int c = 0; c < 2; c++)
      {
      typedef vtkAMRStreamingVolumeRepresentation::ResamplingModes cxx_enum_type;

      static const struct { const char *name; cxx_enum_type value; }
        constants[2] = {
          { "RESAMPLE_OVER_DATA_BOUNDS", vtkAMRStreamingVolumeRepresentation::RESAMPLE_OVER_DATA_BOUNDS },
          { "RESAMPLE_USING_VIEW_FRUSTUM", vtkAMRStreamingVolumeRepresentation::RESAMPLE_USING_VIEW_FRUSTUM },
        };

      o = PyvtkAMRStreamingVolumeRepresentation_ResamplingModes_FromEnum(constants[c].value);
      if (o)
        {
        PyDict_SetItemString(d, (char *)constants[c].name, o);
        Py_DECREF(o);
        }
      }

    }

  return cls;
}

const char **PyvtkAMRStreamingVolumeRepresentation_Doc()
{
  static const char *docstring[] = {
    "vtkAMRStreamingVolumeRepresentation - representation used for volume\n\n",
    "Superclass: vtkPVDataRepresentation\n\n",
    "vtkAMRStreamingVolumeRepresentation  is a representation used for\nvolume rendering AMR datasets with ability to stream blocks from the\ninput pipeline.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkAMRStreamingVolumeRepresentation(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkAMRStreamingVolumeRepresentationNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkAMRStreamingVolumeRepresentation", o) != 0)
    {
    Py_DECREF(o);
    }

}

