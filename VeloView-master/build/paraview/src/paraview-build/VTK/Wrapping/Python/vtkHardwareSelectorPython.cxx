// python wrapper for vtkHardwareSelector
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkProp.h"
#include "vtkHardwareSelector.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkHardwareSelector(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkHardwareSelectorNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkHardwareSelector_Doc();

#ifndef DECLARED_PyvtkHardwareSelector_PassTypes_Type
extern VTK_PYTHON_EXPORT PyTypeObject PyvtkHardwareSelector_PassTypes_Type;
#define DECLARED_PyvtkHardwareSelector_PassTypes_Type
#endif

PyTypeObject PyvtkHardwareSelector_PassTypes_Type = {
  PyObject_HEAD_INIT(&PyType_Type)
  0,
  (char*)"PassTypes", // tp_name
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

PyObject *PyvtkHardwareSelector_PassTypes_FromEnum(int val)
{
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkHardwareSelector_PassTypes_Type);
  self->ob_ival = val;
  return (PyObject *)self;
}


static PyObject *
PyvtkHardwareSelector_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHardwareSelector *op = static_cast<vtkHardwareSelector *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkHardwareSelector::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHardwareSelector_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHardwareSelector *op = static_cast<vtkHardwareSelector *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkHardwareSelector::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHardwareSelector_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHardwareSelector *op = static_cast<vtkHardwareSelector *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkHardwareSelector *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkHardwareSelector::NewInstance());

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
PyvtkHardwareSelector_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkHardwareSelector *tempr = vtkHardwareSelector::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHardwareSelector_SetRenderer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRenderer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHardwareSelector *op = static_cast<vtkHardwareSelector *>(vp);

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
      op->vtkHardwareSelector::SetRenderer(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkHardwareSelector_GetRenderer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRenderer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHardwareSelector *op = static_cast<vtkHardwareSelector *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkRenderer *tempr = (ap.IsBound() ?
      op->GetRenderer() :
      op->vtkHardwareSelector::GetRenderer());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHardwareSelector_SetArea_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetArea");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHardwareSelector *op = static_cast<vtkHardwareSelector *>(vp);

  unsigned int temp0;
  unsigned int temp1;
  unsigned int temp2;
  unsigned int temp3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
    {
    if (ap.IsBound())
      {
      op->SetArea(temp0, temp1, temp2, temp3);
      }
    else
      {
      op->vtkHardwareSelector::SetArea(temp0, temp1, temp2, temp3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkHardwareSelector_SetArea_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetArea");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHardwareSelector *op = static_cast<vtkHardwareSelector *>(vp);

  unsigned int temp0[4];
  const int size0 = 4;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetArea(temp0);
      }
    else
      {
      op->vtkHardwareSelector::SetArea(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkHardwareSelector_SetArea(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 4:
      return PyvtkHardwareSelector_SetArea_s1(self, args);
    case 1:
      return PyvtkHardwareSelector_SetArea_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetArea");
  return NULL;
}



static PyObject *
PyvtkHardwareSelector_GetArea(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetArea");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHardwareSelector *op = static_cast<vtkHardwareSelector *>(vp);

  int sizer = 4;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned int *tempr = (ap.IsBound() ?
      op->GetArea() :
      op->vtkHardwareSelector::GetArea());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkHardwareSelector_SetFieldAssociation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFieldAssociation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHardwareSelector *op = static_cast<vtkHardwareSelector *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetFieldAssociation(temp0);
      }
    else
      {
      op->vtkHardwareSelector::SetFieldAssociation(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkHardwareSelector_GetFieldAssociation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFieldAssociation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHardwareSelector *op = static_cast<vtkHardwareSelector *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetFieldAssociation() :
      op->vtkHardwareSelector::GetFieldAssociation());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHardwareSelector_SetUseProcessIdFromData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseProcessIdFromData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHardwareSelector *op = static_cast<vtkHardwareSelector *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetUseProcessIdFromData(temp0);
      }
    else
      {
      op->vtkHardwareSelector::SetUseProcessIdFromData(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkHardwareSelector_GetUseProcessIdFromData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseProcessIdFromData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHardwareSelector *op = static_cast<vtkHardwareSelector *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetUseProcessIdFromData() :
      op->vtkHardwareSelector::GetUseProcessIdFromData());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHardwareSelector_Select(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Select");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHardwareSelector *op = static_cast<vtkHardwareSelector *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkSelection *tempr = (ap.IsBound() ?
      op->Select() :
      op->vtkHardwareSelector::Select());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHardwareSelector_CaptureBuffers(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CaptureBuffers");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHardwareSelector *op = static_cast<vtkHardwareSelector *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->CaptureBuffers() :
      op->vtkHardwareSelector::CaptureBuffers());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHardwareSelector_ClearBuffers(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClearBuffers");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHardwareSelector *op = static_cast<vtkHardwareSelector *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ClearBuffers();
      }
    else
      {
      op->vtkHardwareSelector::ClearBuffers();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkHardwareSelector_RenderCompositeIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderCompositeIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHardwareSelector *op = static_cast<vtkHardwareSelector *>(vp);

  unsigned int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->RenderCompositeIndex(temp0);
      }
    else
      {
      op->vtkHardwareSelector::RenderCompositeIndex(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkHardwareSelector_RenderAttributeId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderAttributeId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHardwareSelector *op = static_cast<vtkHardwareSelector *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->RenderAttributeId(temp0);
      }
    else
      {
      op->vtkHardwareSelector::RenderAttributeId(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkHardwareSelector_RenderProcessId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderProcessId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHardwareSelector *op = static_cast<vtkHardwareSelector *>(vp);

  unsigned int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->RenderProcessId(temp0);
      }
    else
      {
      op->vtkHardwareSelector::RenderProcessId(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkHardwareSelector_BeginRenderProp(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BeginRenderProp");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHardwareSelector *op = static_cast<vtkHardwareSelector *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->BeginRenderProp();
      }
    else
      {
      op->vtkHardwareSelector::BeginRenderProp();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkHardwareSelector_EndRenderProp(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EndRenderProp");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHardwareSelector *op = static_cast<vtkHardwareSelector *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->EndRenderProp();
      }
    else
      {
      op->vtkHardwareSelector::EndRenderProp();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkHardwareSelector_SetProcessID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetProcessID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHardwareSelector *op = static_cast<vtkHardwareSelector *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetProcessID(temp0);
      }
    else
      {
      op->vtkHardwareSelector::SetProcessID(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkHardwareSelector_GetProcessID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProcessID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHardwareSelector *op = static_cast<vtkHardwareSelector *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetProcessID() :
      op->vtkHardwareSelector::GetProcessID());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHardwareSelector_GetPropColorValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPropColorValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHardwareSelector *op = static_cast<vtkHardwareSelector *>(vp);

  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    float *tempr = (ap.IsBound() ?
      op->GetPropColorValue() :
      op->vtkHardwareSelector::GetPropColorValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkHardwareSelector_SetPropColorValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPropColorValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHardwareSelector *op = static_cast<vtkHardwareSelector *>(vp);

  float temp0;
  float temp1;
  float temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      op->SetPropColorValue(temp0, temp1, temp2);
      }
    else
      {
      op->vtkHardwareSelector::SetPropColorValue(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkHardwareSelector_SetPropColorValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPropColorValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHardwareSelector *op = static_cast<vtkHardwareSelector *>(vp);

  float temp0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetPropColorValue(temp0);
      }
    else
      {
      op->vtkHardwareSelector::SetPropColorValue(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkHardwareSelector_SetPropColorValue(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkHardwareSelector_SetPropColorValue_s1(self, args);
    case 1:
      return PyvtkHardwareSelector_SetPropColorValue_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetPropColorValue");
  return NULL;
}



static PyObject *
PyvtkHardwareSelector_GetCurrentPass(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCurrentPass");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHardwareSelector *op = static_cast<vtkHardwareSelector *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetCurrentPass() :
      op->vtkHardwareSelector::GetCurrentPass());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHardwareSelector_GenerateSelection_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateSelection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHardwareSelector *op = static_cast<vtkHardwareSelector *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkSelection *tempr = (ap.IsBound() ?
      op->GenerateSelection() :
      op->vtkHardwareSelector::GenerateSelection());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkHardwareSelector_GenerateSelection_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateSelection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHardwareSelector *op = static_cast<vtkHardwareSelector *>(vp);

  unsigned int temp0[4];
  unsigned int save0[4];
  const int size0 = 4;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    vtkSelection *tempr = (ap.IsBound() ?
      op->GenerateSelection(temp0) :
      op->vtkHardwareSelector::GenerateSelection(temp0));

    if (ap.ArrayHasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(0, temp0, size0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkHardwareSelector_GenerateSelection_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateSelection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHardwareSelector *op = static_cast<vtkHardwareSelector *>(vp);

  unsigned int temp0;
  unsigned int temp1;
  unsigned int temp2;
  unsigned int temp3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
    {
    vtkSelection *tempr = (ap.IsBound() ?
      op->GenerateSelection(temp0, temp1, temp2, temp3) :
      op->vtkHardwareSelector::GenerateSelection(temp0, temp1, temp2, temp3));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkHardwareSelector_GenerateSelection(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 0:
      return PyvtkHardwareSelector_GenerateSelection_s1(self, args);
    case 1:
      return PyvtkHardwareSelector_GenerateSelection_s2(self, args);
    case 4:
      return PyvtkHardwareSelector_GenerateSelection_s3(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GenerateSelection");
  return NULL;
}



static PyObject *
PyvtkHardwareSelector_GeneratePolygonSelection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GeneratePolygonSelection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHardwareSelector *op = static_cast<vtkHardwareSelector *>(vp);

  int *temp0 = NULL;
  int *save0 = NULL;
  int small0[8];
  int size0 = 0;
  vtkIdType temp1;
  PyObject *result = NULL;

  if (op)
    {
    size0 = ap.GetArgSize(0);
    temp0 = small0;
    if (size0 > 4)
      {
      temp0 = new int[2*size0];
      }
    save0 = &temp0[size0];
    }

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1))
    {
    ap.SaveArray(temp0, save0, size0);

    vtkSelection *tempr = (ap.IsBound() ?
      op->GeneratePolygonSelection(temp0, temp1) :
      op->vtkHardwareSelector::GeneratePolygonSelection(temp0, temp1));

    if (ap.ArrayHasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(0, temp0, size0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  if (temp0 && temp0 != small0)
    {
    delete [] temp0;
    }

  return result;
}


static PyObject *
PyvtkHardwareSelector_GetPropFromID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPropFromID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHardwareSelector *op = static_cast<vtkHardwareSelector *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkProp *tempr = (ap.IsBound() ?
      op->GetPropFromID(temp0) :
      op->vtkHardwareSelector::GetPropFromID(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHardwareSelector_Convert(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "Convert");

  int temp0;
  float temp1[3];
  float save1[3];
  const int size1 = 3;
  PyObject *result = NULL;

  if (ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
    {
    ap.SaveArray(temp1, save1, size1);

    vtkHardwareSelector::Convert(temp0, temp1);

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

static PyMethodDef PyvtkHardwareSelector_Methods[] = {
  {(char*)"GetClassName", PyvtkHardwareSelector_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkHardwareSelector_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkHardwareSelector_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkHardwareSelector\nC++: vtkHardwareSelector *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkHardwareSelector_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkHardwareSelector\nC++: vtkHardwareSelector *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetRenderer", PyvtkHardwareSelector_SetRenderer, METH_VARARGS,
   (char*)"V.SetRenderer(vtkRenderer)\nC++: virtual void SetRenderer(vtkRenderer *)\n\nGet/Set the renderer to perform the selection on.\n"},
  {(char*)"GetRenderer", PyvtkHardwareSelector_GetRenderer, METH_VARARGS,
   (char*)"V.GetRenderer() -> vtkRenderer\nC++: vtkRenderer *GetRenderer()\n\nGet/Set the renderer to perform the selection on.\n"},
  {(char*)"SetArea", PyvtkHardwareSelector_SetArea, METH_VARARGS,
   (char*)"V.SetArea(int, int, int, int)\nC++: void SetArea(unsigned int, unsigned int, unsigned int,\n    unsigned int)\nV.SetArea((int, int, int, int))\nC++: void SetArea(unsigned int a[4])\n\n"},
  {(char*)"GetArea", PyvtkHardwareSelector_GetArea, METH_VARARGS,
   (char*)"V.GetArea() -> (int, int, int, int)\nC++: unsigned int *GetArea()\n\n"},
  {(char*)"SetFieldAssociation", PyvtkHardwareSelector_SetFieldAssociation, METH_VARARGS,
   (char*)"V.SetFieldAssociation(int)\nC++: void SetFieldAssociation(int a)\n\nSet the field type to select. Valid values are\n\\li vtkDataObject::FIELD_ASSOCIATION_POINTS\n\\li vtkDataObject::FIELD_ASSOCIATION_CELLS\n\\li vtkDataObject::FIELD_ASSOCIATION_VERTICES\n\\li vtkDataObject::FIELD_ASSOCIATION_EDGES\n\\li vtkDataObject::FIELD_ASSOCIATION_ROWS\nCurrently only FIELD_ASSOCIATION_POINTS and\nFIELD_ASSOCIATION_CELLS are supported.\n"},
  {(char*)"GetFieldAssociation", PyvtkHardwareSelector_GetFieldAssociation, METH_VARARGS,
   (char*)"V.GetFieldAssociation() -> int\nC++: int GetFieldAssociation()\n\nSet the field type to select. Valid values are\n\\li vtkDataObject::FIELD_ASSOCIATION_POINTS\n\\li vtkDataObject::FIELD_ASSOCIATION_CELLS\n\\li vtkDataObject::FIELD_ASSOCIATION_VERTICES\n\\li vtkDataObject::FIELD_ASSOCIATION_EDGES\n\\li vtkDataObject::FIELD_ASSOCIATION_ROWS\nCurrently only FIELD_ASSOCIATION_POINTS and\nFIELD_ASSOCIATION_CELLS are supported.\n"},
  {(char*)"SetUseProcessIdFromData", PyvtkHardwareSelector_SetUseProcessIdFromData, METH_VARARGS,
   (char*)"V.SetUseProcessIdFromData(bool)\nC++: void SetUseProcessIdFromData(bool a)\n\nIn some parallel rendering setups, the process id for elements\nmust be obtained from the data itself, rather than the rendering\nprocess' id. In that case, set this flag to ON (default OFF).\n"},
  {(char*)"GetUseProcessIdFromData", PyvtkHardwareSelector_GetUseProcessIdFromData, METH_VARARGS,
   (char*)"V.GetUseProcessIdFromData() -> bool\nC++: bool GetUseProcessIdFromData()\n\nIn some parallel rendering setups, the process id for elements\nmust be obtained from the data itself, rather than the rendering\nprocess' id. In that case, set this flag to ON (default OFF).\n"},
  {(char*)"Select", PyvtkHardwareSelector_Select, METH_VARARGS,
   (char*)"V.Select() -> vtkSelection\nC++: vtkSelection *Select()\n\nPerform the selection. Returns  a new instance of vtkSelection\ncontaining the selection on success.\n"},
  {(char*)"CaptureBuffers", PyvtkHardwareSelector_CaptureBuffers, METH_VARARGS,
   (char*)"V.CaptureBuffers() -> bool\nC++: virtual bool CaptureBuffers()\n\nIt is possible to use the vtkHardwareSelector for a custom\npicking. (Look at vtkScenePicker). In that case instead of\nSelect() on can use CaptureBuffers() to render the selection\nbuffers and then get information about pixel locations suing\nGetPixelInformation(). Use ClearBuffers() to clear buffers after\none's done with the scene. The optional final parameter maxDist\nwill look for a cell within the specified number of pixels from\ndisplay_position.\n"},
  {(char*)"ClearBuffers", PyvtkHardwareSelector_ClearBuffers, METH_VARARGS,
   (char*)"V.ClearBuffers()\nC++: void ClearBuffers()\n\nIt is possible to use the vtkHardwareSelector for a custom\npicking. (Look at vtkScenePicker). In that case instead of\nSelect() on can use CaptureBuffers() to render the selection\nbuffers and then get information about pixel locations suing\nGetPixelInformation(). Use ClearBuffers() to clear buffers after\none's done with the scene. The optional final parameter maxDist\nwill look for a cell within the specified number of pixels from\ndisplay_position.\n"},
  {(char*)"RenderCompositeIndex", PyvtkHardwareSelector_RenderCompositeIndex, METH_VARARGS,
   (char*)"V.RenderCompositeIndex(int)\nC++: virtual void RenderCompositeIndex(unsigned int index)\n\nCalled by any vtkMapper or vtkProp subclass to render a\ncomposite-index. Currently indices >= 0xffffff are not supported.\n"},
  {(char*)"RenderAttributeId", PyvtkHardwareSelector_RenderAttributeId, METH_VARARGS,
   (char*)"V.RenderAttributeId(int)\nC++: virtual void RenderAttributeId(vtkIdType attribid)\n\nCalled by any vtkMapper or vtkProp subclass to render an\nattribute's id.\n"},
  {(char*)"RenderProcessId", PyvtkHardwareSelector_RenderProcessId, METH_VARARGS,
   (char*)"V.RenderProcessId(int)\nC++: virtual void RenderProcessId(unsigned int processid)\n\nCalled by any vtkMapper or subclass to render process id. This\nhas any effect when this->UseProcessIdFromData is true.\n"},
  {(char*)"BeginRenderProp", PyvtkHardwareSelector_BeginRenderProp, METH_VARARGS,
   (char*)"V.BeginRenderProp()\nC++: virtual void BeginRenderProp()\n\nCalled by the mapper (vtkHardwareSelectionPolyDataPainter) before\nand after rendering each prop.\n"},
  {(char*)"EndRenderProp", PyvtkHardwareSelector_EndRenderProp, METH_VARARGS,
   (char*)"V.EndRenderProp()\nC++: virtual void EndRenderProp()\n\nCalled by the mapper (vtkHardwareSelectionPolyDataPainter) before\nand after rendering each prop.\n"},
  {(char*)"SetProcessID", PyvtkHardwareSelector_SetProcessID, METH_VARARGS,
   (char*)"V.SetProcessID(int)\nC++: void SetProcessID(int a)\n\nGet/Set the process id. If process id < 0 (default -1), then the\nPROCESS_PASS is not rendered.\n"},
  {(char*)"GetProcessID", PyvtkHardwareSelector_GetProcessID, METH_VARARGS,
   (char*)"V.GetProcessID() -> int\nC++: int GetProcessID()\n\nGet/Set the process id. If process id < 0 (default -1), then the\nPROCESS_PASS is not rendered.\n"},
  {(char*)"GetPropColorValue", PyvtkHardwareSelector_GetPropColorValue, METH_VARARGS,
   (char*)"V.GetPropColorValue() -> (float, float, float)\nC++: float *GetPropColorValue()\n\n"},
  {(char*)"SetPropColorValue", PyvtkHardwareSelector_SetPropColorValue, METH_VARARGS,
   (char*)"V.SetPropColorValue(float, float, float)\nC++: void SetPropColorValue(float, float, float)\nV.SetPropColorValue((float, float, float))\nC++: void SetPropColorValue(float a[3])\n\n"},
  {(char*)"GetCurrentPass", PyvtkHardwareSelector_GetCurrentPass, METH_VARARGS,
   (char*)"V.GetCurrentPass() -> int\nC++: int GetCurrentPass()\n\nGet the current pass number.\n"},
  {(char*)"GenerateSelection", PyvtkHardwareSelector_GenerateSelection, METH_VARARGS,
   (char*)"V.GenerateSelection() -> vtkSelection\nC++: virtual vtkSelection *GenerateSelection()\nV.GenerateSelection([int, int, int, int]) -> vtkSelection\nC++: virtual vtkSelection *GenerateSelection(unsigned int r[4])\nV.GenerateSelection(int, int, int, int) -> vtkSelection\nC++: virtual vtkSelection *GenerateSelection(unsigned int x1,\n    unsigned int y1, unsigned int x2, unsigned int y2)\n\nGenerates the vtkSelection from pixel buffers. Requires that\nCaptureBuffers() has already been called. Optionally you may pass\na screen region (xmin, ymin, xmax, ymax) to generate a selection\nfrom. The region must be a subregion of the region specified by\nSetArea(), otherwise it will be clipped to that region.\n"},
  {(char*)"GeneratePolygonSelection", PyvtkHardwareSelector_GeneratePolygonSelection, METH_VARARGS,
   (char*)"V.GeneratePolygonSelection([int, ...], int) -> vtkSelection\nC++: virtual vtkSelection *GeneratePolygonSelection(\n    int *polygonPoints, vtkIdType count)\n\nGenerates the vtkSelection from pixel buffers. Same as\nGenerateSelection, except this one use a polygon, instead of a\nrectangle region, and select elements inside the polygon. NOTE:\nThe CaptureBuffers() needs to be called first.\n"},
  {(char*)"GetPropFromID", PyvtkHardwareSelector_GetPropFromID, METH_VARARGS,
   (char*)"V.GetPropFromID(int) -> vtkProp\nC++: vtkProp *GetPropFromID(int id)\n\nreturns the prop associated with a ID. This is valid only until\nReleasePixBuffers() gets called.\n"},
  {(char*)"Convert", PyvtkHardwareSelector_Convert, METH_VARARGS | METH_STATIC,
   (char*)"V.Convert(int, [float, float, float])\nC++: static void Convert(int id, float tcoord[3])\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkHardwareSelector_StaticNew()
{
  return vtkHardwareSelector::New();
}

PyObject *PyVTKClass_vtkHardwareSelectorNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkHardwareSelector_StaticNew,
    PyvtkHardwareSelector_Methods,
    "vtkHardwareSelector", modulename,
    NULL, NULL,
    PyvtkHardwareSelector_Doc(),
    PyVTKClass_vtkObjectNew(modulename));

  if (cls)
    {
    PyObject *d = PyVTKClass_GetDict(cls);
    PyObject *o;

    PyType_Ready(&PyvtkHardwareSelector_PassTypes_Type);
    PyvtkHardwareSelector_PassTypes_Type.tp_new = NULL;

    o = (PyObject *)&PyvtkHardwareSelector_PassTypes_Type;
    if (o && PyDict_SetItemString(d, (char *)"PassTypes", o) != 0)
      {
      Py_DECREF(o);
      }

    for (int c = 0; c < 8; c++)
      {
      typedef vtkHardwareSelector::PassTypes cxx_enum_type;

      static const struct { const char *name; cxx_enum_type value; }
        constants[8] = {
          { "PROCESS_PASS", vtkHardwareSelector::PROCESS_PASS },
          { "ACTOR_PASS", vtkHardwareSelector::ACTOR_PASS },
          { "COMPOSITE_INDEX_PASS", vtkHardwareSelector::COMPOSITE_INDEX_PASS },
          { "ID_LOW24", vtkHardwareSelector::ID_LOW24 },
          { "ID_MID24", vtkHardwareSelector::ID_MID24 },
          { "ID_HIGH16", vtkHardwareSelector::ID_HIGH16 },
          { "MAX_KNOWN_PASS", vtkHardwareSelector::MAX_KNOWN_PASS },
          { "MIN_KNOWN_PASS", vtkHardwareSelector::MIN_KNOWN_PASS },
        };

      o = PyvtkHardwareSelector_PassTypes_FromEnum(constants[c].value);
      if (o)
        {
        PyDict_SetItemString(d, (char *)constants[c].name, o);
        Py_DECREF(o);
        }
      }

    }

  return cls;
}

const char **PyvtkHardwareSelector_Doc()
{
  static const char *docstring[] = {
    "vtkHardwareSelector - manager for OpenGL-based selection.\n\n",
    "Superclass: vtkObject\n\n",
    "vtkHardwareSelector is a helper that orchestrates color buffer based\nselection. This relies on OpenGL. vtkHardwareSelector can be used to\nselect visible cells or points within a given rectangle of the\nRenderWindow. To use it, call in order:\n\\li SetRenderer() - to select the renderer in which we\nwant to select the cells/points.\n\\li SetArea() - to set the rectangular region in the render window to\ns",
    "elect\nin.\n\\li SetFieldAssociation() -  to select the attribute to select i.e.\ncells/points etc.\n\\li Finally, call Select().\nSelect will cause the attached vtkRenderer to render in a special\ncolor mode, where each cell/point is given it own color so that later\ninspection of the Rendered Pixels can determine what cells are\nvisible. Select() returns a new vtkSelection instance with the\ncells/points s",
    "elected.\n\nLimitations: Antialiasing will break this class. If your graphics\ncard settings force their use this class will return invalid results.\n\nCurrently only cells from PolyDataMappers can be selected from. When\nvtkRenderer::Selector is non-null vtkPainterPolyDataMapper uses the\nvtkHardwareSelectionPolyDataPainter which make appropriate calls to\nBeginRenderProp(), EndRenderProp(), RenderProces",
    "sId(),\nRenderAttributeId() to render colors correctly. Until alternatives to\nvtkHardwareSelectionPolyDataPainter exist that can do a similar\ncoloration of other vtkDataSet types, only polygonal data can be\nselected. If you need to select other data types, consider using\nvtkDataSetMapper and turning on it's PassThroughCellIds feature, or\nusing vtkFrustumExtractor.\n\nOnly Opaque geometry in Actors is",
    " selected from. Assemblies and\nLODMappers are not currently supported.\n\nDuring selection, visible datasets that can not be selected from are\ntemporarily hidden so as not to produce invalid indices from their\ncolors.\n\nSee Also:\n\nvtkIdentColoredPainter\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkHardwareSelector(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkHardwareSelectorNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkHardwareSelector", o) != 0)
    {
    Py_DECREF(o);
    }

}

