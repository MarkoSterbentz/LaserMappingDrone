// python wrapper for vtkPVOptions
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkPVOptions.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkPVOptions(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkPVOptionsNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkCommandOptionsNew
extern "C" { PyObject *PyVTKClass_vtkCommandOptionsNew(const char *); }
#define DECLARED_PyVTKClass_vtkCommandOptionsNew
#endif

static const char **PyvtkPVOptions_Doc();

#ifndef DECLARED_PyvtkPVOptions_ProcessTypeEnum_Type
extern VTK_PYTHON_EXPORT PyTypeObject PyvtkPVOptions_ProcessTypeEnum_Type;
#define DECLARED_PyvtkPVOptions_ProcessTypeEnum_Type
#endif

PyTypeObject PyvtkPVOptions_ProcessTypeEnum_Type = {
  PyObject_HEAD_INIT(&PyType_Type)
  0,
  (char*)"ProcessTypeEnum", // tp_name
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

PyObject *PyvtkPVOptions_ProcessTypeEnum_FromEnum(int val)
{
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkPVOptions_ProcessTypeEnum_Type);
  self->ob_ival = val;
  return (PyObject *)self;
}


static PyObject *
PyvtkPVOptions_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVOptions *op = static_cast<vtkPVOptions *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkPVOptions::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVOptions_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVOptions *op = static_cast<vtkPVOptions *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPVOptions::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVOptions_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVOptions *op = static_cast<vtkPVOptions *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPVOptions *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPVOptions::NewInstance());

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
PyvtkPVOptions_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkPVOptions *tempr = vtkPVOptions::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVOptions_GetHostName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHostName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVOptions *op = static_cast<vtkPVOptions *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetHostName() :
      op->vtkPVOptions::GetHostName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVOptions_GetConnectID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetConnectID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVOptions *op = static_cast<vtkPVOptions *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetConnectID() :
      op->vtkPVOptions::GetConnectID());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVOptions_GetUseOffscreenRendering(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseOffscreenRendering");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVOptions *op = static_cast<vtkPVOptions *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetUseOffscreenRendering() :
      op->vtkPVOptions::GetUseOffscreenRendering());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVOptions_GetUseStereoRendering(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseStereoRendering");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVOptions *op = static_cast<vtkPVOptions *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetUseStereoRendering() :
      op->vtkPVOptions::GetUseStereoRendering());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVOptions_GetStereoType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStereoType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVOptions *op = static_cast<vtkPVOptions *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetStereoType() :
      op->vtkPVOptions::GetStereoType());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVOptions_GetReverseConnection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetReverseConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVOptions *op = static_cast<vtkPVOptions *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetReverseConnection() :
      op->vtkPVOptions::GetReverseConnection());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVOptions_GetUseRenderingGroup(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseRenderingGroup");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVOptions *op = static_cast<vtkPVOptions *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetUseRenderingGroup() :
      op->vtkPVOptions::GetUseRenderingGroup());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVOptions_GetTileDimensions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTileDimensions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVOptions *op = static_cast<vtkPVOptions *>(vp);

  int sizer = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int *tempr = (ap.IsBound() ?
      op->GetTileDimensions() :
      op->vtkPVOptions::GetTileDimensions());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkPVOptions_GetTileMullions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTileMullions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVOptions *op = static_cast<vtkPVOptions *>(vp);

  int sizer = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int *tempr = (ap.IsBound() ?
      op->GetTileMullions() :
      op->vtkPVOptions::GetTileMullions());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkPVOptions_GetParaViewDataName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetParaViewDataName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVOptions *op = static_cast<vtkPVOptions *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetParaViewDataName() :
      op->vtkPVOptions::GetParaViewDataName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVOptions_GetStateFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStateFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVOptions *op = static_cast<vtkPVOptions *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetStateFileName() :
      op->vtkPVOptions::GetStateFileName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVOptions_GetTimeout(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTimeout");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVOptions *op = static_cast<vtkPVOptions *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetTimeout() :
      op->vtkPVOptions::GetTimeout());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVOptions_SetConnectID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetConnectID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVOptions *op = static_cast<vtkPVOptions *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetConnectID(temp0);
      }
    else
      {
      op->vtkPVOptions::SetConnectID(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVOptions_SetLogFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLogFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVOptions *op = static_cast<vtkPVOptions *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetLogFileName(temp0);
      }
    else
      {
      op->vtkPVOptions::SetLogFileName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVOptions_GetLogFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLogFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVOptions *op = static_cast<vtkPVOptions *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetLogFileName() :
      op->vtkPVOptions::GetLogFileName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVOptions_SetTileDimensions_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTileDimensions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVOptions *op = static_cast<vtkPVOptions *>(vp);

  int temp0;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetTileDimensions(temp0, temp1);
      }
    else
      {
      op->vtkPVOptions::SetTileDimensions(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkPVOptions_SetTileDimensions_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTileDimensions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVOptions *op = static_cast<vtkPVOptions *>(vp);

  int temp0[2];
  const int size0 = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetTileDimensions(temp0);
      }
    else
      {
      op->vtkPVOptions::SetTileDimensions(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkPVOptions_SetTileDimensions(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkPVOptions_SetTileDimensions_s1(self, args);
    case 1:
      return PyvtkPVOptions_SetTileDimensions_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetTileDimensions");
  return NULL;
}



static PyObject *
PyvtkPVOptions_SetTileMullions_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTileMullions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVOptions *op = static_cast<vtkPVOptions *>(vp);

  int temp0;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetTileMullions(temp0, temp1);
      }
    else
      {
      op->vtkPVOptions::SetTileMullions(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkPVOptions_SetTileMullions_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTileMullions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVOptions *op = static_cast<vtkPVOptions *>(vp);

  int temp0[2];
  const int size0 = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetTileMullions(temp0);
      }
    else
      {
      op->vtkPVOptions::SetTileMullions(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkPVOptions_SetTileMullions(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkPVOptions_SetTileMullions_s1(self, args);
    case 1:
      return PyvtkPVOptions_SetTileMullions_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetTileMullions");
  return NULL;
}



static PyObject *
PyvtkPVOptions_SetUseOffscreenRendering(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseOffscreenRendering");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVOptions *op = static_cast<vtkPVOptions *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetUseOffscreenRendering(temp0);
      }
    else
      {
      op->vtkPVOptions::SetUseOffscreenRendering(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVOptions_GetMultiClientMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMultiClientMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVOptions *op = static_cast<vtkPVOptions *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetMultiClientMode() :
      op->vtkPVOptions::GetMultiClientMode());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVOptions_IsMultiClientModeDebug(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsMultiClientModeDebug");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVOptions *op = static_cast<vtkPVOptions *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->IsMultiClientModeDebug() :
      op->vtkPVOptions::IsMultiClientModeDebug());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVOptions_GetMultiServerMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMultiServerMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVOptions *op = static_cast<vtkPVOptions *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetMultiServerMode() :
      op->vtkPVOptions::GetMultiServerMode());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVOptions_GetSymmetricMPIMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSymmetricMPIMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVOptions *op = static_cast<vtkPVOptions *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetSymmetricMPIMode() :
      op->vtkPVOptions::GetSymmetricMPIMode());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVOptions_SetSymmetricMPIMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSymmetricMPIMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVOptions *op = static_cast<vtkPVOptions *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetSymmetricMPIMode(temp0);
      }
    else
      {
      op->vtkPVOptions::SetSymmetricMPIMode(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVOptions_GetTellVersion(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTellVersion");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVOptions *op = static_cast<vtkPVOptions *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetTellVersion() :
      op->vtkPVOptions::GetTellVersion());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVOptions_GetServerURL(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetServerURL");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVOptions *op = static_cast<vtkPVOptions *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetServerURL() :
      op->vtkPVOptions::GetServerURL());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVOptions_SetParaViewDataName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetParaViewDataName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVOptions *op = static_cast<vtkPVOptions *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetParaViewDataName(temp0);
      }
    else
      {
      op->vtkPVOptions::SetParaViewDataName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVOptions_GetEnableStreaming(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEnableStreaming");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVOptions *op = static_cast<vtkPVOptions *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetEnableStreaming() :
      op->vtkPVOptions::GetEnableStreaming());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVOptions_GetUseCudaInterop(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseCudaInterop");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVOptions *op = static_cast<vtkPVOptions *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetUseCudaInterop() :
      op->vtkPVOptions::GetUseCudaInterop());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVOptions_SetSatelliteMessageIds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSatelliteMessageIds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVOptions *op = static_cast<vtkPVOptions *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetSatelliteMessageIds(temp0);
      }
    else
      {
      op->vtkPVOptions::SetSatelliteMessageIds(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVOptions_GetSatelliteMessageIds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSatelliteMessageIds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVOptions *op = static_cast<vtkPVOptions *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetSatelliteMessageIds() :
      op->vtkPVOptions::GetSatelliteMessageIds());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVOptions_GetPrintMonitors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPrintMonitors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVOptions *op = static_cast<vtkPVOptions *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetPrintMonitors() :
      op->vtkPVOptions::GetPrintMonitors());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVOptions_GetTestPlugin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTestPlugin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVOptions *op = static_cast<vtkPVOptions *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetTestPlugin() :
      op->vtkPVOptions::GetTestPlugin());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVOptions_GetTestPluginPath(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTestPluginPath");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVOptions *op = static_cast<vtkPVOptions *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetTestPluginPath() :
      op->vtkPVOptions::GetTestPluginPath());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVOptions_GetEnableStackTrace(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEnableStackTrace");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVOptions *op = static_cast<vtkPVOptions *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetEnableStackTrace() :
      op->vtkPVOptions::GetEnableStackTrace());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVOptions_SetEnableStackTrace(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEnableStackTrace");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVOptions *op = static_cast<vtkPVOptions *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetEnableStackTrace(temp0);
      }
    else
      {
      op->vtkPVOptions::SetEnableStackTrace(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVOptions_GetDisableRegistry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDisableRegistry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVOptions *op = static_cast<vtkPVOptions *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetDisableRegistry() :
      op->vtkPVOptions::GetDisableRegistry());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVOptions_GetDisableXDisplayTests(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDisableXDisplayTests");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVOptions *op = static_cast<vtkPVOptions *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetDisableXDisplayTests() :
      op->vtkPVOptions::GetDisableXDisplayTests());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkPVOptions_Methods[] = {
  {(char*)"GetClassName", PyvtkPVOptions_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkPVOptions_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkPVOptions_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkPVOptions\nC++: vtkPVOptions *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkPVOptions_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkPVOptions\nC++: vtkPVOptions *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetHostName", PyvtkPVOptions_GetHostName, METH_VARARGS,
   (char*)"V.GetHostName() -> string\nC++: char *GetHostName()\n\nConvenience method to get the local process's host name.\n"},
  {(char*)"GetConnectID", PyvtkPVOptions_GetConnectID, METH_VARARGS,
   (char*)"V.GetConnectID() -> int\nC++: int GetConnectID()\n\n"},
  {(char*)"GetUseOffscreenRendering", PyvtkPVOptions_GetUseOffscreenRendering, METH_VARARGS,
   (char*)"V.GetUseOffscreenRendering() -> int\nC++: int GetUseOffscreenRendering()\n\n"},
  {(char*)"GetUseStereoRendering", PyvtkPVOptions_GetUseStereoRendering, METH_VARARGS,
   (char*)"V.GetUseStereoRendering() -> int\nC++: int GetUseStereoRendering()\n\n"},
  {(char*)"GetStereoType", PyvtkPVOptions_GetStereoType, METH_VARARGS,
   (char*)"V.GetStereoType() -> string\nC++: char *GetStereoType()\n\n"},
  {(char*)"GetReverseConnection", PyvtkPVOptions_GetReverseConnection, METH_VARARGS,
   (char*)"V.GetReverseConnection() -> int\nC++: int GetReverseConnection()\n\n"},
  {(char*)"GetUseRenderingGroup", PyvtkPVOptions_GetUseRenderingGroup, METH_VARARGS,
   (char*)"V.GetUseRenderingGroup() -> int\nC++: int GetUseRenderingGroup()\n\n"},
  {(char*)"GetTileDimensions", PyvtkPVOptions_GetTileDimensions, METH_VARARGS,
   (char*)"V.GetTileDimensions() -> (int, int)\nC++: int *GetTileDimensions()\n\n"},
  {(char*)"GetTileMullions", PyvtkPVOptions_GetTileMullions, METH_VARARGS,
   (char*)"V.GetTileMullions() -> (int, int)\nC++: int *GetTileMullions()\n\n"},
  {(char*)"GetParaViewDataName", PyvtkPVOptions_GetParaViewDataName, METH_VARARGS,
   (char*)"V.GetParaViewDataName() -> string\nC++: char *GetParaViewDataName()\n\nThis is the argument specified by --data on the command line.\nAdditionally, this can also correspond to the last argument\nspecified on the command line if the argument is unknown.\n"},
  {(char*)"GetStateFileName", PyvtkPVOptions_GetStateFileName, METH_VARARGS,
   (char*)"V.GetStateFileName() -> string\nC++: char *GetStateFileName()\n\nState file to load on startup.\n"},
  {(char*)"GetTimeout", PyvtkPVOptions_GetTimeout, METH_VARARGS,
   (char*)"V.GetTimeout() -> int\nC++: int GetTimeout()\n\nValid on PVSERVER and PVDATA_SERVER only. It denotes the time (in\nminutes) since the time that the connection was established with\nthe server that the server may timeout. timeout <= 0 means no\ntimeout.\n"},
  {(char*)"SetConnectID", PyvtkPVOptions_SetConnectID, METH_VARARGS,
   (char*)"V.SetConnectID(int)\nC++: void SetConnectID(int a)\n\nClients need to set the ConnectID so they can handle server\nconnections after the client has started.\n"},
  {(char*)"SetLogFileName", PyvtkPVOptions_SetLogFileName, METH_VARARGS,
   (char*)"V.SetLogFileName(string)\nC++: void SetLogFileName(char *)\n\nLog filename.\n"},
  {(char*)"GetLogFileName", PyvtkPVOptions_GetLogFileName, METH_VARARGS,
   (char*)"V.GetLogFileName() -> string\nC++: char *GetLogFileName()\n\nLog filename.\n"},
  {(char*)"SetTileDimensions", PyvtkPVOptions_SetTileDimensions, METH_VARARGS,
   (char*)"V.SetTileDimensions(int, int)\nC++: void SetTileDimensions(int, int)\nV.SetTileDimensions((int, int))\nC++: void SetTileDimensions(int a[2])\n\n"},
  {(char*)"SetTileMullions", PyvtkPVOptions_SetTileMullions, METH_VARARGS,
   (char*)"V.SetTileMullions(int, int)\nC++: void SetTileMullions(int, int)\nV.SetTileMullions((int, int))\nC++: void SetTileMullions(int a[2])\n\n"},
  {(char*)"SetUseOffscreenRendering", PyvtkPVOptions_SetUseOffscreenRendering, METH_VARARGS,
   (char*)"V.SetUseOffscreenRendering(int)\nC++: void SetUseOffscreenRendering(int a)\n\nvtkPVProcessModule needs to set this.\n"},
  {(char*)"GetMultiClientMode", PyvtkPVOptions_GetMultiClientMode, METH_VARARGS,
   (char*)"V.GetMultiClientMode() -> int\nC++: virtual int GetMultiClientMode()\n\nIs this server was started for collaboration meaning that it\nallow several clients to connect to the same server and share the\nsame pipeline and visualization.\n"},
  {(char*)"IsMultiClientModeDebug", PyvtkPVOptions_IsMultiClientModeDebug, METH_VARARGS,
   (char*)"V.IsMultiClientModeDebug() -> int\nC++: virtual int IsMultiClientModeDebug()\n\nIs this server was started for collaboration meaning that it\nallow several clients to connect to the same server and share the\nsame pipeline and visualization.\n"},
  {(char*)"GetMultiServerMode", PyvtkPVOptions_GetMultiServerMode, METH_VARARGS,
   (char*)"V.GetMultiServerMode() -> int\nC++: int GetMultiServerMode()\n\nIs this client allow multiple server connection in parallel\n"},
  {(char*)"GetSymmetricMPIMode", PyvtkPVOptions_GetSymmetricMPIMode, METH_VARARGS,
   (char*)"V.GetSymmetricMPIMode() -> int\nC++: int GetSymmetricMPIMode()\n\nIndicates if the application is in symmetric mpi mode. This is\napplicable only to PVBATCH type of processes. Typically, when set\nto true, the python script is run on satellites as well,\notherwise only the root node processes the python script.\nDisabled by default.\n"},
  {(char*)"SetSymmetricMPIMode", PyvtkPVOptions_SetSymmetricMPIMode, METH_VARARGS,
   (char*)"V.SetSymmetricMPIMode(int)\nC++: void SetSymmetricMPIMode(int a)\n\nIndicates if the application is in symmetric mpi mode. This is\napplicable only to PVBATCH type of processes. Typically, when set\nto true, the python script is run on satellites as well,\notherwise only the root node processes the python script.\nDisabled by default.\n"},
  {(char*)"GetTellVersion", PyvtkPVOptions_GetTellVersion, METH_VARARGS,
   (char*)"V.GetTellVersion() -> int\nC++: int GetTellVersion()\n\nShould this run print the version numbers and exit.\n"},
  {(char*)"GetServerURL", PyvtkPVOptions_GetServerURL, METH_VARARGS,
   (char*)"V.GetServerURL() -> string\nC++: char *GetServerURL()\n\n"},
  {(char*)"SetParaViewDataName", PyvtkPVOptions_SetParaViewDataName, METH_VARARGS,
   (char*)"V.SetParaViewDataName(string)\nC++: void SetParaViewDataName(char *)\n\nThis is used when user want to open a file at startup\n"},
  {(char*)"GetEnableStreaming", PyvtkPVOptions_GetEnableStreaming, METH_VARARGS,
   (char*)"V.GetEnableStreaming() -> int\nC++: int GetEnableStreaming()\n\nUntil streaming becomes mainstream, we enable streaming support\nby passing a command line argument to all processes.\n"},
  {(char*)"GetUseCudaInterop", PyvtkPVOptions_GetUseCudaInterop, METH_VARARGS,
   (char*)"V.GetUseCudaInterop() -> int\nC++: int GetUseCudaInterop()\n\nWhen set, use cuda interop feature\n"},
  {(char*)"SetSatelliteMessageIds", PyvtkPVOptions_SetSatelliteMessageIds, METH_VARARGS,
   (char*)"V.SetSatelliteMessageIds(int)\nC++: void SetSatelliteMessageIds(int a)\n\nInclude originating process id text into server to client\nmessages.\n"},
  {(char*)"GetSatelliteMessageIds", PyvtkPVOptions_GetSatelliteMessageIds, METH_VARARGS,
   (char*)"V.GetSatelliteMessageIds() -> int\nC++: int GetSatelliteMessageIds()\n\nInclude originating process id text into server to client\nmessages.\n"},
  {(char*)"GetPrintMonitors", PyvtkPVOptions_GetPrintMonitors, METH_VARARGS,
   (char*)"V.GetPrintMonitors() -> int\nC++: int GetPrintMonitors()\n\nShould this process just print monitor information and exit?\n"},
  {(char*)"GetTestPlugin", PyvtkPVOptions_GetTestPlugin, METH_VARARGS,
   (char*)"V.GetTestPlugin() -> string\nC++: char *GetTestPlugin()\n\nAdding ability to test plugins by loading them at command line\n"},
  {(char*)"GetTestPluginPath", PyvtkPVOptions_GetTestPluginPath, METH_VARARGS,
   (char*)"V.GetTestPluginPath() -> string\nC++: char *GetTestPluginPath()\n\nAdding ability to test plugins by loading them at command line\n"},
  {(char*)"GetEnableStackTrace", PyvtkPVOptions_GetEnableStackTrace, METH_VARARGS,
   (char*)"V.GetEnableStackTrace() -> int\nC++: int GetEnableStackTrace()\n\nFlag for controlling auto generation of stack trace on POSIX\nsystems after crash.\n"},
  {(char*)"SetEnableStackTrace", PyvtkPVOptions_SetEnableStackTrace, METH_VARARGS,
   (char*)"V.SetEnableStackTrace(int)\nC++: void SetEnableStackTrace(int a)\n\nFlag for controlling auto generation of stack trace on POSIX\nsystems after crash.\n"},
  {(char*)"GetDisableRegistry", PyvtkPVOptions_GetDisableRegistry, METH_VARARGS,
   (char*)"V.GetDisableRegistry() -> int\nC++: int GetDisableRegistry()\n\nFlag for disabling loading of options and settings stored by the\napplication. Often used for testing.\n"},
  {(char*)"GetDisableXDisplayTests", PyvtkPVOptions_GetDisableXDisplayTests, METH_VARARGS,
   (char*)"V.GetDisableXDisplayTests() -> int\nC++: int GetDisableXDisplayTests()\n\nXDisplay test on server processes during initialization sometimes\nhappens too early and may result in remote rendering prematurely\ndisabled. When this flag is set, ParaView will skip such\nX-display tests. Note, if the display is truly inaccessible when\nParaView tries to connect to the server, we will indeed get\nruntimes errors, including segfaults.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkPVOptions_StaticNew()
{
  return vtkPVOptions::New();
}

PyObject *PyVTKClass_vtkPVOptionsNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkPVOptions_StaticNew,
    PyvtkPVOptions_Methods,
    "vtkPVOptions", modulename,
    NULL, NULL,
    PyvtkPVOptions_Doc(),
    PyVTKClass_vtkCommandOptionsNew(modulename));

  if (cls)
    {
    PyObject *d = PyVTKClass_GetDict(cls);
    PyObject *o;

    PyType_Ready(&PyvtkPVOptions_ProcessTypeEnum_Type);
    PyvtkPVOptions_ProcessTypeEnum_Type.tp_new = NULL;

    o = (PyObject *)&PyvtkPVOptions_ProcessTypeEnum_Type;
    if (o && PyDict_SetItemString(d, (char *)"ProcessTypeEnum", o) != 0)
      {
      Py_DECREF(o);
      }

    for (int c = 0; c < 7; c++)
      {
      typedef vtkPVOptions::ProcessTypeEnum cxx_enum_type;

      static const struct { const char *name; cxx_enum_type value; }
        constants[7] = {
          { "PARAVIEW", vtkPVOptions::PARAVIEW },
          { "PVCLIENT", vtkPVOptions::PVCLIENT },
          { "PVSERVER", vtkPVOptions::PVSERVER },
          { "PVRENDER_SERVER", vtkPVOptions::PVRENDER_SERVER },
          { "PVDATA_SERVER", vtkPVOptions::PVDATA_SERVER },
          { "PVBATCH", vtkPVOptions::PVBATCH },
          { "ALLPROCESS", vtkPVOptions::ALLPROCESS },
        };

      o = PyvtkPVOptions_ProcessTypeEnum_FromEnum(constants[c].value);
      if (o)
        {
        PyDict_SetItemString(d, (char *)constants[c].name, o);
        Py_DECREF(o);
        }
      }

    }

  return cls;
}

const char **PyvtkPVOptions_Doc()
{
  static const char *docstring[] = {
    "vtkPVOptions - ParaView options storage\n\n",
    "Superclass: vtkCommandOptions\n\n",
    "An object of this class represents a storage for ParaView options\n\nThese options can be retrieved during run-time, set using\nconfiguration file or using Command Line Arguments.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPVOptions(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPVOptionsNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPVOptions", o) != 0)
    {
    Py_DECREF(o);
    }

}

