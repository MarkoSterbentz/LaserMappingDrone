// python wrapper for vtkPVSynchronizedRenderWindows
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkMultiProcessStream.h"
#include "vtkPVSynchronizedRenderWindows.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkPVSynchronizedRenderWindows(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkPVSynchronizedRenderWindowsNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkPVSynchronizedRenderWindows_Doc();

#ifndef DECLARED_PyvtkPVSynchronizedRenderWindows_StandardOperations_Type
extern VTK_PYTHON_EXPORT PyTypeObject PyvtkPVSynchronizedRenderWindows_StandardOperations_Type;
#define DECLARED_PyvtkPVSynchronizedRenderWindows_StandardOperations_Type
#endif

PyTypeObject PyvtkPVSynchronizedRenderWindows_StandardOperations_Type = {
  PyObject_HEAD_INIT(&PyType_Type)
  0,
  (char*)"StandardOperations", // tp_name
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

PyObject *PyvtkPVSynchronizedRenderWindows_StandardOperations_FromEnum(int val)
{
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkPVSynchronizedRenderWindows_StandardOperations_Type);
  self->ob_ival = val;
  return (PyObject *)self;
}

#ifndef DECLARED_PyvtkPVSynchronizedRenderWindows_ModeEnum_Type
extern VTK_PYTHON_EXPORT PyTypeObject PyvtkPVSynchronizedRenderWindows_ModeEnum_Type;
#define DECLARED_PyvtkPVSynchronizedRenderWindows_ModeEnum_Type
#endif

PyTypeObject PyvtkPVSynchronizedRenderWindows_ModeEnum_Type = {
  PyObject_HEAD_INIT(&PyType_Type)
  0,
  (char*)"ModeEnum", // tp_name
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

PyObject *PyvtkPVSynchronizedRenderWindows_ModeEnum_FromEnum(int val)
{
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkPVSynchronizedRenderWindows_ModeEnum_Type);
  self->ob_ival = val;
  return (PyObject *)self;
}


static PyObject *
PyvtkPVSynchronizedRenderWindows_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSynchronizedRenderWindows *op = static_cast<vtkPVSynchronizedRenderWindows *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkPVSynchronizedRenderWindows::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVSynchronizedRenderWindows_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSynchronizedRenderWindows *op = static_cast<vtkPVSynchronizedRenderWindows *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPVSynchronizedRenderWindows::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVSynchronizedRenderWindows_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSynchronizedRenderWindows *op = static_cast<vtkPVSynchronizedRenderWindows *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPVSynchronizedRenderWindows *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPVSynchronizedRenderWindows::NewInstance());

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
PyvtkPVSynchronizedRenderWindows_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkPVSynchronizedRenderWindows *tempr = vtkPVSynchronizedRenderWindows::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVSynchronizedRenderWindows_NewRenderWindow(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewRenderWindow");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSynchronizedRenderWindows *op = static_cast<vtkPVSynchronizedRenderWindows *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkRenderWindow *tempr = (ap.IsBound() ?
      op->NewRenderWindow() :
      op->vtkPVSynchronizedRenderWindows::NewRenderWindow());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVSynchronizedRenderWindows_AddRenderWindow(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddRenderWindow");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSynchronizedRenderWindows *op = static_cast<vtkPVSynchronizedRenderWindows *>(vp);

  unsigned int temp0;
  vtkRenderWindow *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkRenderWindow"))
    {
    if (ap.IsBound())
      {
      op->AddRenderWindow(temp0, temp1);
      }
    else
      {
      op->vtkPVSynchronizedRenderWindows::AddRenderWindow(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVSynchronizedRenderWindows_RemoveRenderWindow(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveRenderWindow");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSynchronizedRenderWindows *op = static_cast<vtkPVSynchronizedRenderWindows *>(vp);

  unsigned int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->RemoveRenderWindow(temp0);
      }
    else
      {
      op->vtkPVSynchronizedRenderWindows::RemoveRenderWindow(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVSynchronizedRenderWindows_GetRenderWindow(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRenderWindow");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSynchronizedRenderWindows *op = static_cast<vtkPVSynchronizedRenderWindows *>(vp);

  unsigned int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkRenderWindow *tempr = (ap.IsBound() ?
      op->GetRenderWindow(temp0) :
      op->vtkPVSynchronizedRenderWindows::GetRenderWindow(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVSynchronizedRenderWindows_AddRenderer_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddRenderer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSynchronizedRenderWindows *op = static_cast<vtkPVSynchronizedRenderWindows *>(vp);

  unsigned int temp0;
  vtkRenderer *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkRenderer"))
    {
    if (ap.IsBound())
      {
      op->AddRenderer(temp0, temp1);
      }
    else
      {
      op->vtkPVSynchronizedRenderWindows::AddRenderer(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkPVSynchronizedRenderWindows_AddRenderer_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddRenderer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSynchronizedRenderWindows *op = static_cast<vtkPVSynchronizedRenderWindows *>(vp);

  unsigned int temp0;
  vtkRenderer *temp1 = NULL;
  double temp2[4];
  const int size2 = 4;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkRenderer") &&
      ap.GetArray(temp2, size2))
    {
    if (ap.IsBound())
      {
      op->AddRenderer(temp0, temp1, temp2);
      }
    else
      {
      op->vtkPVSynchronizedRenderWindows::AddRenderer(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkPVSynchronizedRenderWindows_AddRenderer(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkPVSynchronizedRenderWindows_AddRenderer_s1(self, args);
    case 3:
      return PyvtkPVSynchronizedRenderWindows_AddRenderer_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "AddRenderer");
  return NULL;
}



static PyObject *
PyvtkPVSynchronizedRenderWindows_RemoveAllRenderers(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveAllRenderers");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSynchronizedRenderWindows *op = static_cast<vtkPVSynchronizedRenderWindows *>(vp);

  unsigned int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->RemoveAllRenderers(temp0);
      }
    else
      {
      op->vtkPVSynchronizedRenderWindows::RemoveAllRenderers(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVSynchronizedRenderWindows_UpdateRendererViewport(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateRendererViewport");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSynchronizedRenderWindows *op = static_cast<vtkPVSynchronizedRenderWindows *>(vp);

  unsigned int temp0;
  vtkRenderer *temp1 = NULL;
  double temp2[4];
  const int size2 = 4;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkRenderer") &&
      ap.GetArray(temp2, size2))
    {
    bool tempr = (ap.IsBound() ?
      op->UpdateRendererViewport(temp0, temp1, temp2) :
      op->vtkPVSynchronizedRenderWindows::UpdateRendererViewport(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVSynchronizedRenderWindows_SetWindowSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWindowSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSynchronizedRenderWindows *op = static_cast<vtkPVSynchronizedRenderWindows *>(vp);

  unsigned int temp0;
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
      op->SetWindowSize(temp0, temp1, temp2);
      }
    else
      {
      op->vtkPVSynchronizedRenderWindows::SetWindowSize(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVSynchronizedRenderWindows_SetWindowPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWindowPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSynchronizedRenderWindows *op = static_cast<vtkPVSynchronizedRenderWindows *>(vp);

  unsigned int temp0;
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
      op->SetWindowPosition(temp0, temp1, temp2);
      }
    else
      {
      op->vtkPVSynchronizedRenderWindows::SetWindowPosition(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVSynchronizedRenderWindows_GetWindowSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWindowSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSynchronizedRenderWindows *op = static_cast<vtkPVSynchronizedRenderWindows *>(vp);

  unsigned int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    const int *tempr = (ap.IsBound() ?
      op->GetWindowSize(temp0) :
      op->vtkPVSynchronizedRenderWindows::GetWindowSize(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVSynchronizedRenderWindows_GetWindowPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWindowPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSynchronizedRenderWindows *op = static_cast<vtkPVSynchronizedRenderWindows *>(vp);

  unsigned int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    const int *tempr = (ap.IsBound() ?
      op->GetWindowPosition(temp0) :
      op->vtkPVSynchronizedRenderWindows::GetWindowPosition(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVSynchronizedRenderWindows_SetEnabled(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEnabled");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSynchronizedRenderWindows *op = static_cast<vtkPVSynchronizedRenderWindows *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetEnabled(temp0);
      }
    else
      {
      op->vtkPVSynchronizedRenderWindows::SetEnabled(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVSynchronizedRenderWindows_GetEnabled(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEnabled");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSynchronizedRenderWindows *op = static_cast<vtkPVSynchronizedRenderWindows *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetEnabled() :
      op->vtkPVSynchronizedRenderWindows::GetEnabled());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVSynchronizedRenderWindows_EnabledOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EnabledOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSynchronizedRenderWindows *op = static_cast<vtkPVSynchronizedRenderWindows *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->EnabledOn();
      }
    else
      {
      op->vtkPVSynchronizedRenderWindows::EnabledOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVSynchronizedRenderWindows_EnabledOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EnabledOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSynchronizedRenderWindows *op = static_cast<vtkPVSynchronizedRenderWindows *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->EnabledOff();
      }
    else
      {
      op->vtkPVSynchronizedRenderWindows::EnabledOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVSynchronizedRenderWindows_SetRenderEventPropagation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRenderEventPropagation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSynchronizedRenderWindows *op = static_cast<vtkPVSynchronizedRenderWindows *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetRenderEventPropagation(temp0);
      }
    else
      {
      op->vtkPVSynchronizedRenderWindows::SetRenderEventPropagation(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVSynchronizedRenderWindows_GetRenderEventPropagation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRenderEventPropagation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSynchronizedRenderWindows *op = static_cast<vtkPVSynchronizedRenderWindows *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetRenderEventPropagation() :
      op->vtkPVSynchronizedRenderWindows::GetRenderEventPropagation());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVSynchronizedRenderWindows_RenderEventPropagationOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderEventPropagationOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSynchronizedRenderWindows *op = static_cast<vtkPVSynchronizedRenderWindows *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->RenderEventPropagationOn();
      }
    else
      {
      op->vtkPVSynchronizedRenderWindows::RenderEventPropagationOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVSynchronizedRenderWindows_RenderEventPropagationOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderEventPropagationOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSynchronizedRenderWindows *op = static_cast<vtkPVSynchronizedRenderWindows *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->RenderEventPropagationOff();
      }
    else
      {
      op->vtkPVSynchronizedRenderWindows::RenderEventPropagationOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVSynchronizedRenderWindows_GetLocalProcessIsDriver(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLocalProcessIsDriver");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSynchronizedRenderWindows *op = static_cast<vtkPVSynchronizedRenderWindows *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetLocalProcessIsDriver() :
      op->vtkPVSynchronizedRenderWindows::GetLocalProcessIsDriver());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVSynchronizedRenderWindows_SynchronizeBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SynchronizeBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSynchronizedRenderWindows *op = static_cast<vtkPVSynchronizedRenderWindows *>(vp);

  double temp0[6];
  double save0[6];
  const int size0 = 6;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    bool tempr = (ap.IsBound() ?
      op->SynchronizeBounds(temp0) :
      op->vtkPVSynchronizedRenderWindows::SynchronizeBounds(temp0));

    if (ap.ArrayHasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(0, temp0, size0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVSynchronizedRenderWindows_SynchronizeSize_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SynchronizeSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSynchronizedRenderWindows *op = static_cast<vtkPVSynchronizedRenderWindows *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    bool tempr = (ap.IsBound() ?
      op->SynchronizeSize(temp0) :
      op->vtkPVSynchronizedRenderWindows::SynchronizeSize(temp0));

    if (!ap.ErrorOccurred())
      {
      ap.SetArgValue(0, temp0);
      }
    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkPVSynchronizedRenderWindows_SynchronizeSize_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SynchronizeSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSynchronizedRenderWindows *op = static_cast<vtkPVSynchronizedRenderWindows *>(vp);

  unsigned int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    bool tempr = (ap.IsBound() ?
      op->SynchronizeSize(temp0) :
      op->vtkPVSynchronizedRenderWindows::SynchronizeSize(temp0));

    if (!ap.ErrorOccurred())
      {
      ap.SetArgValue(0, temp0);
      }
    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkPVSynchronizedRenderWindows_SynchronizeSize_Methods[] = {
  {NULL, PyvtkPVSynchronizedRenderWindows_SynchronizeSize_s1, METH_VARARGS,
   (char*)"@d"},
  {NULL, PyvtkPVSynchronizedRenderWindows_SynchronizeSize_s2, METH_VARARGS,
   (char*)"@I"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkPVSynchronizedRenderWindows_SynchronizeSize(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkPVSynchronizedRenderWindows_SynchronizeSize_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SynchronizeSize");
  return NULL;
}



static PyObject *
PyvtkPVSynchronizedRenderWindows_BroadcastToDataServer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BroadcastToDataServer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSynchronizedRenderWindows *op = static_cast<vtkPVSynchronizedRenderWindows *>(vp);

  vtkSelection *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSelection"))
    {
    bool tempr = (ap.IsBound() ?
      op->BroadcastToDataServer(temp0) :
      op->vtkPVSynchronizedRenderWindows::BroadcastToDataServer(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVSynchronizedRenderWindows_BroadcastToRenderServer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BroadcastToRenderServer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSynchronizedRenderWindows *op = static_cast<vtkPVSynchronizedRenderWindows *>(vp);

  vtkDataObject *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataObject"))
    {
    bool tempr = (ap.IsBound() ?
      op->BroadcastToRenderServer(temp0) :
      op->vtkPVSynchronizedRenderWindows::BroadcastToRenderServer(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVSynchronizedRenderWindows_Reduce(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Reduce");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSynchronizedRenderWindows *op = static_cast<vtkPVSynchronizedRenderWindows *>(vp);

  vtkIdType temp0;
  typedef vtkPVSynchronizedRenderWindows::StandardOperations temp1_type;
  temp1_type temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetEnumValue(temp1, &PyvtkPVSynchronizedRenderWindows_StandardOperations_Type))
    {
    bool tempr = (ap.IsBound() ?
      op->Reduce(temp0, temp1) :
      op->vtkPVSynchronizedRenderWindows::Reduce(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      ap.SetArgValue(0, temp0);
      }
    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVSynchronizedRenderWindows_RemoveRMICallback(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveRMICallback");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSynchronizedRenderWindows *op = static_cast<vtkPVSynchronizedRenderWindows *>(vp);

  unsigned long temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    bool tempr = (ap.IsBound() ?
      op->RemoveRMICallback(temp0) :
      op->vtkPVSynchronizedRenderWindows::RemoveRMICallback(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVSynchronizedRenderWindows_Render(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Render");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSynchronizedRenderWindows *op = static_cast<vtkPVSynchronizedRenderWindows *>(vp);

  unsigned int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->Render(temp0);
      }
    else
      {
      op->vtkPVSynchronizedRenderWindows::Render(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVSynchronizedRenderWindows_OnGetZBufferValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnGetZBufferValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSynchronizedRenderWindows *op = static_cast<vtkPVSynchronizedRenderWindows *>(vp);

  unsigned int temp0;
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
      op->OnGetZBufferValue(temp0, temp1, temp2);
      }
    else
      {
      op->vtkPVSynchronizedRenderWindows::OnGetZBufferValue(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVSynchronizedRenderWindows_GetParallelController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetParallelController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSynchronizedRenderWindows *op = static_cast<vtkPVSynchronizedRenderWindows *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkMultiProcessController *tempr = (ap.IsBound() ?
      op->GetParallelController() :
      op->vtkPVSynchronizedRenderWindows::GetParallelController());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVSynchronizedRenderWindows_GetClientServerController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClientServerController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSynchronizedRenderWindows *op = static_cast<vtkPVSynchronizedRenderWindows *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkMultiProcessController *tempr = (ap.IsBound() ?
      op->GetClientServerController() :
      op->vtkPVSynchronizedRenderWindows::GetClientServerController());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVSynchronizedRenderWindows_GetClientDataServerController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClientDataServerController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSynchronizedRenderWindows *op = static_cast<vtkPVSynchronizedRenderWindows *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkMultiProcessController *tempr = (ap.IsBound() ?
      op->GetClientDataServerController() :
      op->vtkPVSynchronizedRenderWindows::GetClientDataServerController());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVSynchronizedRenderWindows_SetRenderOneViewAtATime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRenderOneViewAtATime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSynchronizedRenderWindows *op = static_cast<vtkPVSynchronizedRenderWindows *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetRenderOneViewAtATime(temp0);
      }
    else
      {
      op->vtkPVSynchronizedRenderWindows::SetRenderOneViewAtATime(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVSynchronizedRenderWindows_GetRenderOneViewAtATime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRenderOneViewAtATime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSynchronizedRenderWindows *op = static_cast<vtkPVSynchronizedRenderWindows *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetRenderOneViewAtATime() :
      op->vtkPVSynchronizedRenderWindows::GetRenderOneViewAtATime());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVSynchronizedRenderWindows_RenderOneViewAtATimeOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOneViewAtATimeOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSynchronizedRenderWindows *op = static_cast<vtkPVSynchronizedRenderWindows *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->RenderOneViewAtATimeOn();
      }
    else
      {
      op->vtkPVSynchronizedRenderWindows::RenderOneViewAtATimeOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVSynchronizedRenderWindows_RenderOneViewAtATimeOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOneViewAtATimeOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSynchronizedRenderWindows *op = static_cast<vtkPVSynchronizedRenderWindows *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->RenderOneViewAtATimeOff();
      }
    else
      {
      op->vtkPVSynchronizedRenderWindows::RenderOneViewAtATimeOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVSynchronizedRenderWindows_BeginRender(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BeginRender");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSynchronizedRenderWindows *op = static_cast<vtkPVSynchronizedRenderWindows *>(vp);

  unsigned int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->BeginRender(temp0);
      }
    else
      {
      op->vtkPVSynchronizedRenderWindows::BeginRender(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVSynchronizedRenderWindows_GetIsInCave(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIsInCave");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSynchronizedRenderWindows *op = static_cast<vtkPVSynchronizedRenderWindows *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetIsInCave() :
      op->vtkPVSynchronizedRenderWindows::GetIsInCave());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVSynchronizedRenderWindows_GetTileDisplayParameters(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTileDisplayParameters");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSynchronizedRenderWindows *op = static_cast<vtkPVSynchronizedRenderWindows *>(vp);

  int temp0[2];
  int save0[2];
  const int size0 = 2;
  int temp1[2];
  int save1[2];
  const int size1 = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1))
    {
    ap.SaveArray(temp0, save0, size0);
    ap.SaveArray(temp1, save1, size1);

    bool tempr = (ap.IsBound() ?
      op->GetTileDisplayParameters(temp0, temp1) :
      op->vtkPVSynchronizedRenderWindows::GetTileDisplayParameters(temp0, temp1));

    if (ap.ArrayHasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(0, temp0, size0);
      }

    if (ap.ArrayHasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(1, temp1, size1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVSynchronizedRenderWindows_GetZbufferDataAtPoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetZbufferDataAtPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSynchronizedRenderWindows *op = static_cast<vtkPVSynchronizedRenderWindows *>(vp);

  int temp0;
  int temp1;
  unsigned int temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    double tempr = (ap.IsBound() ?
      op->GetZbufferDataAtPoint(temp0, temp1, temp2) :
      op->vtkPVSynchronizedRenderWindows::GetZbufferDataAtPoint(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVSynchronizedRenderWindows_GetMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSynchronizedRenderWindows *op = static_cast<vtkPVSynchronizedRenderWindows *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    typedef vtkPVSynchronizedRenderWindows::ModeEnum tempr_type;
  tempr_type tempr = (ap.IsBound() ?
      op->GetMode() :
      op->vtkPVSynchronizedRenderWindows::GetMode());

    if (!ap.ErrorOccurred())
      {
      result = PyvtkPVSynchronizedRenderWindows_ModeEnum_FromEnum(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVSynchronizedRenderWindows_GetSession(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSession");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSynchronizedRenderWindows *op = static_cast<vtkPVSynchronizedRenderWindows *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPVSession *tempr = (ap.IsBound() ?
      op->GetSession() :
      op->vtkPVSynchronizedRenderWindows::GetSession());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkPVSynchronizedRenderWindows_Methods[] = {
  {(char*)"GetClassName", PyvtkPVSynchronizedRenderWindows_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkPVSynchronizedRenderWindows_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkPVSynchronizedRenderWindows_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkPVSynchronizedRenderWindows\nC++: vtkPVSynchronizedRenderWindows *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkPVSynchronizedRenderWindows_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkPVSynchronizedRenderWindows\nC++: vtkPVSynchronizedRenderWindows *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"NewRenderWindow", PyvtkPVSynchronizedRenderWindows_NewRenderWindow, METH_VARARGS,
   (char*)"V.NewRenderWindow() -> vtkRenderWindow\nC++: virtual vtkRenderWindow *NewRenderWindow()\n\nReturns a render window for use (possibly new).\n"},
  {(char*)"AddRenderWindow", PyvtkPVSynchronizedRenderWindows_AddRenderWindow, METH_VARARGS,
   (char*)"V.AddRenderWindow(int, vtkRenderWindow)\nC++: virtual void AddRenderWindow(unsigned int id,\n    vtkRenderWindow *)\n\nRegister/UnRegister a window.\n"},
  {(char*)"RemoveRenderWindow", PyvtkPVSynchronizedRenderWindows_RemoveRenderWindow, METH_VARARGS,
   (char*)"V.RemoveRenderWindow(int)\nC++: virtual void RemoveRenderWindow(unsigned int id)\n\nRegister/UnRegister a window.\n"},
  {(char*)"GetRenderWindow", PyvtkPVSynchronizedRenderWindows_GetRenderWindow, METH_VARARGS,
   (char*)"V.GetRenderWindow(int) -> vtkRenderWindow\nC++: vtkRenderWindow *GetRenderWindow(unsigned int id)\n\nRegister/UnRegister a window.\n"},
  {(char*)"AddRenderer", PyvtkPVSynchronizedRenderWindows_AddRenderer, METH_VARARGS,
   (char*)"V.AddRenderer(int, vtkRenderer)\nC++: virtual void AddRenderer(unsigned int id, vtkRenderer *)\nV.AddRenderer(int, vtkRenderer, (float, float, float, float))\nC++: virtual void AddRenderer(unsigned int id, vtkRenderer *,\n    const double viewport[4])\n\nRegister/UnRegister the renderers. One can add multiple renderers\nfor the same id. The id must be same as that specified when\nadding the corresponding render window.\n"},
  {(char*)"RemoveAllRenderers", PyvtkPVSynchronizedRenderWindows_RemoveAllRenderers, METH_VARARGS,
   (char*)"V.RemoveAllRenderers(int)\nC++: virtual void RemoveAllRenderers(unsigned int id)\n\nRegister/UnRegister the renderers. One can add multiple renderers\nfor the same id. The id must be same as that specified when\nadding the corresponding render window.\n"},
  {(char*)"UpdateRendererViewport", PyvtkPVSynchronizedRenderWindows_UpdateRendererViewport, METH_VARARGS,
   (char*)"V.UpdateRendererViewport(int, vtkRenderer, (float, float, float,\n    float)) -> bool\nC++: virtual bool UpdateRendererViewport(unsigned int id,\n    vtkRenderer *, const double viewport[4])\n\nRegister/UnRegister the renderers. One can add multiple renderers\nfor the same id. The id must be same as that specified when\nadding the corresponding render window.\n"},
  {(char*)"SetWindowSize", PyvtkPVSynchronizedRenderWindows_SetWindowSize, METH_VARARGS,
   (char*)"V.SetWindowSize(int, int, int)\nC++: virtual void SetWindowSize(unsigned int id, int width,\n    int height)\n\nThe views are not supposed to updated the render window position\nor size directly. They should always go through this API to\nupdate the window sizes and positions. This makes it possible to\nprovide a consistent API irrespective of the mode ParaView is\nrunning in. These methods only need to be called on the \"driver\"\nnode. (No harm in calling on all nodes). By driver node, we mean\nthe CLIENT in client-server mode and the root node in batch mode.\n"},
  {(char*)"SetWindowPosition", PyvtkPVSynchronizedRenderWindows_SetWindowPosition, METH_VARARGS,
   (char*)"V.SetWindowPosition(int, int, int)\nC++: virtual void SetWindowPosition(unsigned int id, int posx,\n    int posy)\n\nThe views are not supposed to updated the render window position\nor size directly. They should always go through this API to\nupdate the window sizes and positions. This makes it possible to\nprovide a consistent API irrespective of the mode ParaView is\nrunning in. These methods only need to be called on the \"driver\"\nnode. (No harm in calling on all nodes). By driver node, we mean\nthe CLIENT in client-server mode and the root node in batch mode.\n"},
  {(char*)"GetWindowSize", PyvtkPVSynchronizedRenderWindows_GetWindowSize, METH_VARARGS,
   (char*)"V.GetWindowSize(int) -> (int, ...)\nC++: virtual const int *GetWindowSize(unsigned int id)\n\nThe views are not supposed to updated the render window position\nor size directly. They should always go through this API to\nupdate the window sizes and positions. This makes it possible to\nprovide a consistent API irrespective of the mode ParaView is\nrunning in. These methods only need to be called on the \"driver\"\nnode. (No harm in calling on all nodes). By driver node, we mean\nthe CLIENT in client-server mode and the root node in batch mode.\n"},
  {(char*)"GetWindowPosition", PyvtkPVSynchronizedRenderWindows_GetWindowPosition, METH_VARARGS,
   (char*)"V.GetWindowPosition(int) -> (int, ...)\nC++: virtual const int *GetWindowPosition(unsigned int id)\n\nThe views are not supposed to updated the render window position\nor size directly. They should always go through this API to\nupdate the window sizes and positions. This makes it possible to\nprovide a consistent API irrespective of the mode ParaView is\nrunning in. These methods only need to be called on the \"driver\"\nnode. (No harm in calling on all nodes). By driver node, we mean\nthe CLIENT in client-server mode and the root node in batch mode.\n"},
  {(char*)"SetEnabled", PyvtkPVSynchronizedRenderWindows_SetEnabled, METH_VARARGS,
   (char*)"V.SetEnabled(bool)\nC++: void SetEnabled(bool a)\n\nEnable/Disable parallel rendering.\n"},
  {(char*)"GetEnabled", PyvtkPVSynchronizedRenderWindows_GetEnabled, METH_VARARGS,
   (char*)"V.GetEnabled() -> bool\nC++: bool GetEnabled()\n\nEnable/Disable parallel rendering.\n"},
  {(char*)"EnabledOn", PyvtkPVSynchronizedRenderWindows_EnabledOn, METH_VARARGS,
   (char*)"V.EnabledOn()\nC++: void EnabledOn()\n\nEnable/Disable parallel rendering.\n"},
  {(char*)"EnabledOff", PyvtkPVSynchronizedRenderWindows_EnabledOff, METH_VARARGS,
   (char*)"V.EnabledOff()\nC++: void EnabledOff()\n\nEnable/Disable parallel rendering.\n"},
  {(char*)"SetRenderEventPropagation", PyvtkPVSynchronizedRenderWindows_SetRenderEventPropagation, METH_VARARGS,
   (char*)"V.SetRenderEventPropagation(bool)\nC++: void SetRenderEventPropagation(bool a)\n\nEnable/Disable propagation of the render event. This is typically\ntrue, unless the application is managing calling Render() on all\nprocesses involved.\n"},
  {(char*)"GetRenderEventPropagation", PyvtkPVSynchronizedRenderWindows_GetRenderEventPropagation, METH_VARARGS,
   (char*)"V.GetRenderEventPropagation() -> bool\nC++: bool GetRenderEventPropagation()\n\nEnable/Disable propagation of the render event. This is typically\ntrue, unless the application is managing calling Render() on all\nprocesses involved.\n"},
  {(char*)"RenderEventPropagationOn", PyvtkPVSynchronizedRenderWindows_RenderEventPropagationOn, METH_VARARGS,
   (char*)"V.RenderEventPropagationOn()\nC++: void RenderEventPropagationOn()\n\nEnable/Disable propagation of the render event. This is typically\ntrue, unless the application is managing calling Render() on all\nprocesses involved.\n"},
  {(char*)"RenderEventPropagationOff", PyvtkPVSynchronizedRenderWindows_RenderEventPropagationOff, METH_VARARGS,
   (char*)"V.RenderEventPropagationOff()\nC++: void RenderEventPropagationOff()\n\nEnable/Disable propagation of the render event. This is typically\ntrue, unless the application is managing calling Render() on all\nprocesses involved.\n"},
  {(char*)"GetLocalProcessIsDriver", PyvtkPVSynchronizedRenderWindows_GetLocalProcessIsDriver, METH_VARARGS,
   (char*)"V.GetLocalProcessIsDriver() -> bool\nC++: bool GetLocalProcessIsDriver()\n\nThis method returns true if the local process is the 'driver'\nprocess. In client-server configurations, client is the driver.\nIn batch configurations, root-node is the driver. In built-in\nmode, this always returns true.\n"},
  {(char*)"SynchronizeBounds", PyvtkPVSynchronizedRenderWindows_SynchronizeBounds, METH_VARARGS,
   (char*)"V.SynchronizeBounds([float, float, float, float, float, float])\n    -> bool\nC++: bool SynchronizeBounds(double bounds[6])\n\nvtkPVSynchronizedRenderWindows encapsulates a whole lot of logic\nfor communication between processes. Given the ton of information\nthis class keeps, it can easily aid vtkViews to synchronize\ninformation such as bounds/ data-size among all processes\nefficiently. This can be achieved by using these methods. Note\nthat these methods should be called on all processes at the same\ntime otherwise we will have deadlocks. We may make this API\ngeneric in future, for now this works.\n"},
  {(char*)"SynchronizeSize", PyvtkPVSynchronizedRenderWindows_SynchronizeSize, METH_VARARGS,
   (char*)"V.SynchronizeSize(float) -> bool\nC++: bool SynchronizeSize(double &size)\nV.SynchronizeSize(int) -> bool\nC++: bool SynchronizeSize(unsigned int &size)\n\nvtkPVSynchronizedRenderWindows encapsulates a whole lot of logic\nfor communication between processes. Given the ton of information\nthis class keeps, it can easily aid vtkViews to synchronize\ninformation such as bounds/ data-size among all processes\nefficiently. This can be achieved by using these methods. Note\nthat these methods should be called on all processes at the same\ntime otherwise we will have deadlocks. We may make this API\ngeneric in future, for now this works.\n"},
  {(char*)"BroadcastToDataServer", PyvtkPVSynchronizedRenderWindows_BroadcastToDataServer, METH_VARARGS,
   (char*)"V.BroadcastToDataServer(vtkSelection) -> bool\nC++: bool BroadcastToDataServer(vtkSelection *selection)\n\nvtkPVSynchronizedRenderWindows encapsulates a whole lot of logic\nfor communication between processes. Given the ton of information\nthis class keeps, it can easily aid vtkViews to synchronize\ninformation such as bounds/ data-size among all processes\nefficiently. This can be achieved by using these methods. Note\nthat these methods should be called on all processes at the same\ntime otherwise we will have deadlocks. We may make this API\ngeneric in future, for now this works.\n"},
  {(char*)"BroadcastToRenderServer", PyvtkPVSynchronizedRenderWindows_BroadcastToRenderServer, METH_VARARGS,
   (char*)"V.BroadcastToRenderServer(vtkDataObject) -> bool\nC++: bool BroadcastToRenderServer(vtkDataObject *)\n\nvtkPVSynchronizedRenderWindows encapsulates a whole lot of logic\nfor communication between processes. Given the ton of information\nthis class keeps, it can easily aid vtkViews to synchronize\ninformation such as bounds/ data-size among all processes\nefficiently. This can be achieved by using these methods. Note\nthat these methods should be called on all processes at the same\ntime otherwise we will have deadlocks. We may make this API\ngeneric in future, for now this works.\n"},
  {(char*)"Reduce", PyvtkPVSynchronizedRenderWindows_Reduce, METH_VARARGS,
   (char*)"V.Reduce(int, ) -> bool\nC++: bool Reduce(vtkIdType &value, StandardOperations operation)\n\n"},
  {(char*)"RemoveRMICallback", PyvtkPVSynchronizedRenderWindows_RemoveRMICallback, METH_VARARGS,
   (char*)"V.RemoveRMICallback(int) -> bool\nC++: bool RemoveRMICallback(unsigned long id)\n\nConvenience method to trigger an RMI call from the client/root\nnode.\n"},
  {(char*)"Render", PyvtkPVSynchronizedRenderWindows_Render, METH_VARARGS,
   (char*)"V.Render(int)\nC++: void Render(unsigned int)\n\n"},
  {(char*)"OnGetZBufferValue", PyvtkPVSynchronizedRenderWindows_OnGetZBufferValue, METH_VARARGS,
   (char*)"V.OnGetZBufferValue(int, int, int)\nC++: void OnGetZBufferValue(unsigned int, int, int)\n\n"},
  {(char*)"GetParallelController", PyvtkPVSynchronizedRenderWindows_GetParallelController, METH_VARARGS,
   (char*)"V.GetParallelController() -> vtkMultiProcessController\nC++: vtkMultiProcessController *GetParallelController()\n\n\n"},
  {(char*)"GetClientServerController", PyvtkPVSynchronizedRenderWindows_GetClientServerController, METH_VARARGS,
   (char*)"V.GetClientServerController() -> vtkMultiProcessController\nC++: vtkMultiProcessController *GetClientServerController()\n\n\n"},
  {(char*)"GetClientDataServerController", PyvtkPVSynchronizedRenderWindows_GetClientDataServerController, METH_VARARGS,
   (char*)"V.GetClientDataServerController() -> vtkMultiProcessController\nC++: vtkMultiProcessController *GetClientDataServerController()\n\n\n"},
  {(char*)"SetRenderOneViewAtATime", PyvtkPVSynchronizedRenderWindows_SetRenderOneViewAtATime, METH_VARARGS,
   (char*)"V.SetRenderOneViewAtATime(bool)\nC++: void SetRenderOneViewAtATime(bool a)\n\nBy default, this class uses the same render window for all views\non the server processes and then arranges the renderers by\nadjusting their viewports. However, this does not work well when\ndoing image capture with magnification. In those cases, you can\nforce this class to simply render the active view as the sole\nview in the window on the server side by setting this flag to\ntrue.\n"},
  {(char*)"GetRenderOneViewAtATime", PyvtkPVSynchronizedRenderWindows_GetRenderOneViewAtATime, METH_VARARGS,
   (char*)"V.GetRenderOneViewAtATime() -> bool\nC++: bool GetRenderOneViewAtATime()\n\nBy default, this class uses the same render window for all views\non the server processes and then arranges the renderers by\nadjusting their viewports. However, this does not work well when\ndoing image capture with magnification. In those cases, you can\nforce this class to simply render the active view as the sole\nview in the window on the server side by setting this flag to\ntrue.\n"},
  {(char*)"RenderOneViewAtATimeOn", PyvtkPVSynchronizedRenderWindows_RenderOneViewAtATimeOn, METH_VARARGS,
   (char*)"V.RenderOneViewAtATimeOn()\nC++: void RenderOneViewAtATimeOn()\n\nBy default, this class uses the same render window for all views\non the server processes and then arranges the renderers by\nadjusting their viewports. However, this does not work well when\ndoing image capture with magnification. In those cases, you can\nforce this class to simply render the active view as the sole\nview in the window on the server side by setting this flag to\ntrue.\n"},
  {(char*)"RenderOneViewAtATimeOff", PyvtkPVSynchronizedRenderWindows_RenderOneViewAtATimeOff, METH_VARARGS,
   (char*)"V.RenderOneViewAtATimeOff()\nC++: void RenderOneViewAtATimeOff()\n\nBy default, this class uses the same render window for all views\non the server processes and then arranges the renderers by\nadjusting their viewports. However, this does not work well when\ndoing image capture with magnification. In those cases, you can\nforce this class to simply render the active view as the sole\nview in the window on the server side by setting this flag to\ntrue.\n"},
  {(char*)"BeginRender", PyvtkPVSynchronizedRenderWindows_BeginRender, METH_VARARGS,
   (char*)"V.BeginRender(int)\nC++: void BeginRender(unsigned int id)\n\nCalled before starting render. This is needed in batch mode since\nall views share the same render window.\n"},
  {(char*)"GetIsInCave", PyvtkPVSynchronizedRenderWindows_GetIsInCave, METH_VARARGS,
   (char*)"V.GetIsInCave() -> bool\nC++: bool GetIsInCave()\n\nReturns true when in Cave mode.\n"},
  {(char*)"GetTileDisplayParameters", PyvtkPVSynchronizedRenderWindows_GetTileDisplayParameters, METH_VARARGS,
   (char*)"V.GetTileDisplayParameters([int, int], [int, int]) -> bool\nC++: bool GetTileDisplayParameters(int tile_dims[2],\n    int tile_mullions[2])\n\nThis method should only be called on RENDER_SERVER or BATCH\nprocesses. Returns true if in tile display mode and fills up\ntile_dims with the tile dimensions.\n"},
  {(char*)"GetZbufferDataAtPoint", PyvtkPVSynchronizedRenderWindows_GetZbufferDataAtPoint, METH_VARARGS,
   (char*)"V.GetZbufferDataAtPoint(int, int, int) -> float\nC++: double GetZbufferDataAtPoint(int x, int y, unsigned int id)\n\nReturns the z-buffer value at the given location. id is the view\nid used in AddRenderWindow()/AddRenderer() etc.@CallOnClientOnly\n"},
  {(char*)"GetMode", PyvtkPVSynchronizedRenderWindows_GetMode, METH_VARARGS,
   (char*)"V.GetMode() ->\nC++: ModeEnum GetMode()\n\nStreaming uses this class as a conduit for messaging. Need mode\nto use it correctly.\n"},
  {(char*)"GetSession", PyvtkPVSynchronizedRenderWindows_GetSession, METH_VARARGS,
   (char*)"V.GetSession() -> vtkPVSession\nC++: vtkPVSession *GetSession()\n\nProvides access to the session.\n"},
  {NULL, NULL, 0, NULL}
};

PyObject *PyVTKClass_vtkPVSynchronizedRenderWindowsNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(NULL,
    PyvtkPVSynchronizedRenderWindows_Methods,
    "vtkPVSynchronizedRenderWindows", modulename,
    NULL, NULL,
    PyvtkPVSynchronizedRenderWindows_Doc(),
    PyVTKClass_vtkObjectNew(modulename));

  if (cls)
    {
    PyObject *d = PyVTKClass_GetDict(cls);
    PyObject *o;

    PyType_Ready(&PyvtkPVSynchronizedRenderWindows_StandardOperations_Type);
    PyvtkPVSynchronizedRenderWindows_StandardOperations_Type.tp_new = NULL;

    o = (PyObject *)&PyvtkPVSynchronizedRenderWindows_StandardOperations_Type;
    if (o && PyDict_SetItemString(d, (char *)"StandardOperations", o) != 0)
      {
      Py_DECREF(o);
      }

    PyType_Ready(&PyvtkPVSynchronizedRenderWindows_ModeEnum_Type);
    PyvtkPVSynchronizedRenderWindows_ModeEnum_Type.tp_new = NULL;

    o = (PyObject *)&PyvtkPVSynchronizedRenderWindows_ModeEnum_Type;
    if (o && PyDict_SetItemString(d, (char *)"ModeEnum", o) != 0)
      {
      Py_DECREF(o);
      }

    for (int c = 0; c < 3; c++)
      {
      typedef vtkPVSynchronizedRenderWindows::StandardOperations cxx_enum_type;

      static const struct { const char *name; cxx_enum_type value; }
        constants[3] = {
          { "MAX_OP", vtkPVSynchronizedRenderWindows::MAX_OP },
          { "MIN_OP", vtkPVSynchronizedRenderWindows::MIN_OP },
          { "SUM_OP", vtkPVSynchronizedRenderWindows::SUM_OP },
        };

      o = PyvtkPVSynchronizedRenderWindows_StandardOperations_FromEnum(constants[c].value);
      if (o)
        {
        PyDict_SetItemString(d, (char *)constants[c].name, o);
        Py_DECREF(o);
        }
      }

    for (int c = 0; c < 3; c++)
      {
      static const struct { const char *name; int value; }
        constants[3] = {
          { "SYNC_MULTI_RENDER_WINDOW_TAG", vtkPVSynchronizedRenderWindows::SYNC_MULTI_RENDER_WINDOW_TAG },
          { "GET_ZBUFFER_VALUE_TAG", vtkPVSynchronizedRenderWindows::GET_ZBUFFER_VALUE_TAG },
          { "SYNC_TILE_DISPLAY_PARAMATERS", vtkPVSynchronizedRenderWindows::SYNC_TILE_DISPLAY_PARAMATERS },
        };

      o = PyInt_FromLong(constants[c].value);
      if (o)
        {
        PyDict_SetItemString(d, (char *)constants[c].name, o);
        Py_DECREF(o);
        }
      }

    for (int c = 0; c < 6; c++)
      {
      typedef vtkPVSynchronizedRenderWindows::ModeEnum cxx_enum_type;

      static const struct { const char *name; cxx_enum_type value; }
        constants[6] = {
          { "INVALID", vtkPVSynchronizedRenderWindows::INVALID },
          { "BUILTIN", vtkPVSynchronizedRenderWindows::BUILTIN },
          { "CLIENT", vtkPVSynchronizedRenderWindows::CLIENT },
          { "RENDER_SERVER", vtkPVSynchronizedRenderWindows::RENDER_SERVER },
          { "DATA_SERVER", vtkPVSynchronizedRenderWindows::DATA_SERVER },
          { "BATCH", vtkPVSynchronizedRenderWindows::BATCH },
        };

      o = PyvtkPVSynchronizedRenderWindows_ModeEnum_FromEnum(constants[c].value);
      if (o)
        {
        PyDict_SetItemString(d, (char *)constants[c].name, o);
        Py_DECREF(o);
        }
      }

    }

  return cls;
}

const char **PyvtkPVSynchronizedRenderWindows_Doc()
{
  static const char *docstring[] = {
    "vtkPVSynchronizedRenderWindows - synchronizes render-windows among\n\n",
    "Superclass: vtkObject\n\n",
    "vtkPVSynchronizedRenderWindows is the class used to synchronize\nrender windows in ParaView. This class can be instantiated on all\nprocesses in all modes, it automatically discovers the configuration\nand adapts its behavior accordingly. The role of this class is to set\nup the render windows on all processes and then synchronize renders.\nIt does not manage compositing or image delivery. All it does ",
    "is\nsynchronize render windows and their layouts among processes.\n\nIf the application is managing calling of vtkRenderWindow::Render()\non all processes, then one should disable RenderEventPropagation\nflag.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPVSynchronizedRenderWindows(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPVSynchronizedRenderWindowsNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPVSynchronizedRenderWindows", o) != 0)
    {
    Py_DECREF(o);
    }

}

