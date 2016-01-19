// python wrapper for vtkPVRenderView
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkPVRenderView.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkPVRenderView(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkPVRenderViewNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkPVViewNew
extern "C" { PyObject *PyVTKClass_vtkPVViewNew(const char *); }
#define DECLARED_PyVTKClass_vtkPVViewNew
#endif

static const char **PyvtkPVRenderView_Doc();

#ifndef DECLARED_PyvtkPVRenderView_InteractionModes_Type
extern VTK_PYTHON_EXPORT PyTypeObject PyvtkPVRenderView_InteractionModes_Type;
#define DECLARED_PyvtkPVRenderView_InteractionModes_Type
#endif

PyTypeObject PyvtkPVRenderView_InteractionModes_Type = {
  PyObject_HEAD_INIT(&PyType_Type)
  0,
  (char*)"InteractionModes", // tp_name
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

PyObject *PyvtkPVRenderView_InteractionModes_FromEnum(int val)
{
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkPVRenderView_InteractionModes_Type);
  self->ob_ival = val;
  return (PyObject *)self;
}


static PyObject *
PyvtkPVRenderView_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRenderView *op = static_cast<vtkPVRenderView *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkPVRenderView::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVRenderView_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRenderView *op = static_cast<vtkPVRenderView *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPVRenderView::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVRenderView_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRenderView *op = static_cast<vtkPVRenderView *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPVRenderView *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPVRenderView::NewInstance());

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
PyvtkPVRenderView_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkPVRenderView *tempr = vtkPVRenderView::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVRenderView_SetInteractionMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInteractionMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRenderView *op = static_cast<vtkPVRenderView *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetInteractionMode(temp0);
      }
    else
      {
      op->vtkPVRenderView::SetInteractionMode(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVRenderView_GetInteractionMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInteractionMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRenderView *op = static_cast<vtkPVRenderView *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetInteractionMode() :
      op->vtkPVRenderView::GetInteractionMode());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVRenderView_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRenderView *op = static_cast<vtkPVRenderView *>(vp);

  unsigned int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->Initialize(temp0);
      }
    else
      {
      op->vtkPVRenderView::Initialize(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVRenderView_GetNonCompositedRenderer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNonCompositedRenderer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRenderView *op = static_cast<vtkPVRenderView *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkRenderer *tempr = (ap.IsBound() ?
      op->GetNonCompositedRenderer() :
      op->vtkPVRenderView::GetNonCompositedRenderer());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVRenderView_GetRenderer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRenderer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRenderView *op = static_cast<vtkPVRenderView *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkRenderer *tempr = (ap.IsBound() ?
      op->GetRenderer() :
      op->vtkPVRenderView::GetRenderer());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVRenderView_GetActiveCamera(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActiveCamera");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRenderView *op = static_cast<vtkPVRenderView *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkCamera *tempr = (ap.IsBound() ?
      op->GetActiveCamera() :
      op->vtkPVRenderView::GetActiveCamera());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVRenderView_SetActiveCamera(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetActiveCamera");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRenderView *op = static_cast<vtkPVRenderView *>(vp);

  vtkCamera *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCamera"))
    {
    if (ap.IsBound())
      {
      op->SetActiveCamera(temp0);
      }
    else
      {
      op->vtkPVRenderView::SetActiveCamera(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVRenderView_GetRenderWindow(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRenderWindow");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRenderView *op = static_cast<vtkPVRenderView *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkRenderWindow *tempr = (ap.IsBound() ?
      op->GetRenderWindow() :
      op->vtkPVRenderView::GetRenderWindow());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVRenderView_GetInteractor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInteractor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRenderView *op = static_cast<vtkPVRenderView *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPVGenericRenderWindowInteractor *tempr = (ap.IsBound() ?
      op->GetInteractor() :
      op->vtkPVRenderView::GetInteractor());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVRenderView_GetInteractorStyle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInteractorStyle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRenderView *op = static_cast<vtkPVRenderView *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPVInteractorStyle *tempr = (ap.IsBound() ?
      op->GetInteractorStyle() :
      op->vtkPVRenderView::GetInteractorStyle());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVRenderView_ResetCamera_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ResetCamera");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRenderView *op = static_cast<vtkPVRenderView *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ResetCamera();
      }
    else
      {
      op->vtkPVRenderView::ResetCamera();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkPVRenderView_ResetCamera_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ResetCamera");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRenderView *op = static_cast<vtkPVRenderView *>(vp);

  double temp0[6];
  double save0[6];
  const int size0 = 6;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    if (ap.IsBound())
      {
      op->ResetCamera(temp0);
      }
    else
      {
      op->vtkPVRenderView::ResetCamera(temp0);
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
PyvtkPVRenderView_ResetCamera(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 0:
      return PyvtkPVRenderView_ResetCamera_s1(self, args);
    case 1:
      return PyvtkPVRenderView_ResetCamera_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "ResetCamera");
  return NULL;
}



static PyObject *
PyvtkPVRenderView_StillRender(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StillRender");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRenderView *op = static_cast<vtkPVRenderView *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->StillRender();
      }
    else
      {
      op->vtkPVRenderView::StillRender();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVRenderView_InteractiveRender(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InteractiveRender");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRenderView *op = static_cast<vtkPVRenderView *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->InteractiveRender();
      }
    else
      {
      op->vtkPVRenderView::InteractiveRender();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVRenderView_SetStillRenderImageReductionFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetStillRenderImageReductionFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRenderView *op = static_cast<vtkPVRenderView *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetStillRenderImageReductionFactor(temp0);
      }
    else
      {
      op->vtkPVRenderView::SetStillRenderImageReductionFactor(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVRenderView_GetStillRenderImageReductionFactorMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStillRenderImageReductionFactorMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRenderView *op = static_cast<vtkPVRenderView *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetStillRenderImageReductionFactorMinValue() :
      op->vtkPVRenderView::GetStillRenderImageReductionFactorMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVRenderView_GetStillRenderImageReductionFactorMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStillRenderImageReductionFactorMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRenderView *op = static_cast<vtkPVRenderView *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetStillRenderImageReductionFactorMaxValue() :
      op->vtkPVRenderView::GetStillRenderImageReductionFactorMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVRenderView_GetStillRenderImageReductionFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStillRenderImageReductionFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRenderView *op = static_cast<vtkPVRenderView *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetStillRenderImageReductionFactor() :
      op->vtkPVRenderView::GetStillRenderImageReductionFactor());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVRenderView_SetInteractiveRenderImageReductionFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInteractiveRenderImageReductionFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRenderView *op = static_cast<vtkPVRenderView *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetInteractiveRenderImageReductionFactor(temp0);
      }
    else
      {
      op->vtkPVRenderView::SetInteractiveRenderImageReductionFactor(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVRenderView_GetInteractiveRenderImageReductionFactorMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInteractiveRenderImageReductionFactorMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRenderView *op = static_cast<vtkPVRenderView *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetInteractiveRenderImageReductionFactorMinValue() :
      op->vtkPVRenderView::GetInteractiveRenderImageReductionFactorMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVRenderView_GetInteractiveRenderImageReductionFactorMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInteractiveRenderImageReductionFactorMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRenderView *op = static_cast<vtkPVRenderView *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetInteractiveRenderImageReductionFactorMaxValue() :
      op->vtkPVRenderView::GetInteractiveRenderImageReductionFactorMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVRenderView_GetInteractiveRenderImageReductionFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInteractiveRenderImageReductionFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRenderView *op = static_cast<vtkPVRenderView *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetInteractiveRenderImageReductionFactor() :
      op->vtkPVRenderView::GetInteractiveRenderImageReductionFactor());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVRenderView_SetRemoteRenderingThreshold(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRemoteRenderingThreshold");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRenderView *op = static_cast<vtkPVRenderView *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetRemoteRenderingThreshold(temp0);
      }
    else
      {
      op->vtkPVRenderView::SetRemoteRenderingThreshold(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVRenderView_GetRemoteRenderingThreshold(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRemoteRenderingThreshold");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRenderView *op = static_cast<vtkPVRenderView *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetRemoteRenderingThreshold() :
      op->vtkPVRenderView::GetRemoteRenderingThreshold());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVRenderView_SetLODRenderingThreshold(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLODRenderingThreshold");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRenderView *op = static_cast<vtkPVRenderView *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetLODRenderingThreshold(temp0);
      }
    else
      {
      op->vtkPVRenderView::SetLODRenderingThreshold(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVRenderView_GetLODRenderingThreshold(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLODRenderingThreshold");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRenderView *op = static_cast<vtkPVRenderView *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetLODRenderingThreshold() :
      op->vtkPVRenderView::GetLODRenderingThreshold());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVRenderView_SetLODResolution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLODResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRenderView *op = static_cast<vtkPVRenderView *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetLODResolution(temp0);
      }
    else
      {
      op->vtkPVRenderView::SetLODResolution(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVRenderView_GetLODResolutionMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLODResolutionMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRenderView *op = static_cast<vtkPVRenderView *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetLODResolutionMinValue() :
      op->vtkPVRenderView::GetLODResolutionMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVRenderView_GetLODResolutionMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLODResolutionMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRenderView *op = static_cast<vtkPVRenderView *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetLODResolutionMaxValue() :
      op->vtkPVRenderView::GetLODResolutionMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVRenderView_GetLODResolution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLODResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRenderView *op = static_cast<vtkPVRenderView *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetLODResolution() :
      op->vtkPVRenderView::GetLODResolution());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVRenderView_SetUseOutlineForLODRendering(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseOutlineForLODRendering");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRenderView *op = static_cast<vtkPVRenderView *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetUseOutlineForLODRendering(temp0);
      }
    else
      {
      op->vtkPVRenderView::SetUseOutlineForLODRendering(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVRenderView_GetUseOutlineForLODRendering(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseOutlineForLODRendering");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRenderView *op = static_cast<vtkPVRenderView *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetUseOutlineForLODRendering() :
      op->vtkPVRenderView::GetUseOutlineForLODRendering());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVRenderView_ConfigureCompressor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ConfigureCompressor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRenderView *op = static_cast<vtkPVRenderView *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->ConfigureCompressor(temp0);
      }
    else
      {
      op->vtkPVRenderView::ConfigureCompressor(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVRenderView_ResetCameraClippingRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ResetCameraClippingRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRenderView *op = static_cast<vtkPVRenderView *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ResetCameraClippingRange();
      }
    else
      {
      op->vtkPVRenderView::ResetCameraClippingRange();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVRenderView_SetUseLightKit(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseLightKit");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRenderView *op = static_cast<vtkPVRenderView *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetUseLightKit(temp0);
      }
    else
      {
      op->vtkPVRenderView::SetUseLightKit(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVRenderView_GetUseLightKit(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseLightKit");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRenderView *op = static_cast<vtkPVRenderView *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetUseLightKit() :
      op->vtkPVRenderView::GetUseLightKit());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVRenderView_UseLightKitOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseLightKitOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRenderView *op = static_cast<vtkPVRenderView *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->UseLightKitOn();
      }
    else
      {
      op->vtkPVRenderView::UseLightKitOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVRenderView_UseLightKitOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseLightKitOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRenderView *op = static_cast<vtkPVRenderView *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->UseLightKitOff();
      }
    else
      {
      op->vtkPVRenderView::UseLightKitOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVRenderView_StreamingUpdate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StreamingUpdate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRenderView *op = static_cast<vtkPVRenderView *>(vp);

  double temp0[24];
  const int size0 = 24;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->StreamingUpdate(temp0);
      }
    else
      {
      op->vtkPVRenderView::StreamingUpdate(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVRenderView_DeliverStreamedPieces(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeliverStreamedPieces");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRenderView *op = static_cast<vtkPVRenderView *>(vp);

  unsigned int temp0;
  unsigned int *temp1 = NULL;
  unsigned int *save1 = NULL;
  unsigned int small1[8];
  int size1 = 0;
  PyObject *result = NULL;

  if (op)
    {
    size1 = ap.GetArgSize(1);
    temp1 = small1;
    if (size1 > 4)
      {
      temp1 = new unsigned int[2*size1];
      }
    save1 = &temp1[size1];
    }

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
    {
    ap.SaveArray(temp1, save1, size1);

    if (ap.IsBound())
      {
      op->DeliverStreamedPieces(temp0, temp1);
      }
    else
      {
      op->vtkPVRenderView::DeliverStreamedPieces(temp0, temp1);
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

  if (temp1 && temp1 != small1)
    {
    delete [] temp1;
    }

  return result;
}


static PyObject *
PyvtkPVRenderView_USE_LOD(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "USE_LOD");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkInformationIntegerKey *tempr = vtkPVRenderView::USE_LOD();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVRenderView_LOD_RESOLUTION(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "LOD_RESOLUTION");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkInformationDoubleKey *tempr = vtkPVRenderView::LOD_RESOLUTION();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVRenderView_USE_OUTLINE_FOR_LOD(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "USE_OUTLINE_FOR_LOD");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkInformationIntegerKey *tempr = vtkPVRenderView::USE_OUTLINE_FOR_LOD();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVRenderView_RENDER_EMPTY_IMAGES(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "RENDER_EMPTY_IMAGES");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkInformationIntegerKey *tempr = vtkPVRenderView::RENDER_EMPTY_IMAGES();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVRenderView_NEED_ORDERED_COMPOSITING(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "NEED_ORDERED_COMPOSITING");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkInformationIntegerKey *tempr = vtkPVRenderView::NEED_ORDERED_COMPOSITING();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVRenderView_VIEW_PLANES(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "VIEW_PLANES");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkInformationDoubleVectorKey *tempr = vtkPVRenderView::VIEW_PLANES();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVRenderView_REQUEST_STREAMING_UPDATE(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "REQUEST_STREAMING_UPDATE");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkInformationRequestKey *tempr = vtkPVRenderView::REQUEST_STREAMING_UPDATE();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVRenderView_REQUEST_PROCESS_STREAMED_PIECE(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "REQUEST_PROCESS_STREAMED_PIECE");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkInformationRequestKey *tempr = vtkPVRenderView::REQUEST_PROCESS_STREAMED_PIECE();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVRenderView_SelectCells_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SelectCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRenderView *op = static_cast<vtkPVRenderView *>(vp);

  int temp0[4];
  int save0[4];
  const int size0 = 4;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    if (ap.IsBound())
      {
      op->SelectCells(temp0);
      }
    else
      {
      op->vtkPVRenderView::SelectCells(temp0);
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
PyvtkPVRenderView_SelectCells_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SelectCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRenderView *op = static_cast<vtkPVRenderView *>(vp);

  int temp0;
  int temp1;
  int temp2;
  int temp3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
    {
    if (ap.IsBound())
      {
      op->SelectCells(temp0, temp1, temp2, temp3);
      }
    else
      {
      op->vtkPVRenderView::SelectCells(temp0, temp1, temp2, temp3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkPVRenderView_SelectCells(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkPVRenderView_SelectCells_s1(self, args);
    case 4:
      return PyvtkPVRenderView_SelectCells_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SelectCells");
  return NULL;
}



static PyObject *
PyvtkPVRenderView_SelectPoints_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SelectPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRenderView *op = static_cast<vtkPVRenderView *>(vp);

  int temp0[4];
  int save0[4];
  const int size0 = 4;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    if (ap.IsBound())
      {
      op->SelectPoints(temp0);
      }
    else
      {
      op->vtkPVRenderView::SelectPoints(temp0);
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
PyvtkPVRenderView_SelectPoints_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SelectPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRenderView *op = static_cast<vtkPVRenderView *>(vp);

  int temp0;
  int temp1;
  int temp2;
  int temp3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
    {
    if (ap.IsBound())
      {
      op->SelectPoints(temp0, temp1, temp2, temp3);
      }
    else
      {
      op->vtkPVRenderView::SelectPoints(temp0, temp1, temp2, temp3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkPVRenderView_SelectPoints(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkPVRenderView_SelectPoints_s1(self, args);
    case 4:
      return PyvtkPVRenderView_SelectPoints_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SelectPoints");
  return NULL;
}



static PyObject *
PyvtkPVRenderView_Select(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Select");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRenderView *op = static_cast<vtkPVRenderView *>(vp);

  int temp0;
  int temp1[4];
  int save1[4];
  const int size1 = 4;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
    {
    ap.SaveArray(temp1, save1, size1);

    if (ap.IsBound())
      {
      op->Select(temp0, temp1);
      }
    else
      {
      op->vtkPVRenderView::Select(temp0, temp1);
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
PyvtkPVRenderView_SelectPolygonPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SelectPolygonPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRenderView *op = static_cast<vtkPVRenderView *>(vp);

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

    if (ap.IsBound())
      {
      op->SelectPolygonPoints(temp0, temp1);
      }
    else
      {
      op->vtkPVRenderView::SelectPolygonPoints(temp0, temp1);
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

  if (temp0 && temp0 != small0)
    {
    delete [] temp0;
    }

  return result;
}


static PyObject *
PyvtkPVRenderView_SelectPolygonCells(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SelectPolygonCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRenderView *op = static_cast<vtkPVRenderView *>(vp);

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

    if (ap.IsBound())
      {
      op->SelectPolygonCells(temp0, temp1);
      }
    else
      {
      op->vtkPVRenderView::SelectPolygonCells(temp0, temp1);
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

  if (temp0 && temp0 != small0)
    {
    delete [] temp0;
    }

  return result;
}


static PyObject *
PyvtkPVRenderView_SelectPolygon(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SelectPolygon");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRenderView *op = static_cast<vtkPVRenderView *>(vp);

  int temp0;
  int *temp1 = NULL;
  int *save1 = NULL;
  int small1[8];
  int size1 = 0;
  vtkIdType temp2;
  PyObject *result = NULL;

  if (op)
    {
    size1 = ap.GetArgSize(1);
    temp1 = small1;
    if (size1 > 4)
      {
      temp1 = new int[2*size1];
      }
    save1 = &temp1[size1];
    }

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2))
    {
    ap.SaveArray(temp1, save1, size1);

    if (ap.IsBound())
      {
      op->SelectPolygon(temp0, temp1, temp2);
      }
    else
      {
      op->vtkPVRenderView::SelectPolygon(temp0, temp1, temp2);
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

  if (temp1 && temp1 != small1)
    {
    delete [] temp1;
    }

  return result;
}


static PyObject *
PyvtkPVRenderView_GetLastSelection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLastSelection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRenderView *op = static_cast<vtkPVRenderView *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkSelection *tempr = (ap.IsBound() ?
      op->GetLastSelection() :
      op->vtkPVRenderView::GetLastSelection());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVRenderView_SetUseInteractiveRenderingForScreenshots(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseInteractiveRenderingForScreenshots");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRenderView *op = static_cast<vtkPVRenderView *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetUseInteractiveRenderingForScreenshots(temp0);
      }
    else
      {
      op->vtkPVRenderView::SetUseInteractiveRenderingForScreenshots(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVRenderView_UseInteractiveRenderingForScreenshotsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseInteractiveRenderingForScreenshotsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRenderView *op = static_cast<vtkPVRenderView *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->UseInteractiveRenderingForScreenshotsOn();
      }
    else
      {
      op->vtkPVRenderView::UseInteractiveRenderingForScreenshotsOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVRenderView_UseInteractiveRenderingForScreenshotsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseInteractiveRenderingForScreenshotsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRenderView *op = static_cast<vtkPVRenderView *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->UseInteractiveRenderingForScreenshotsOff();
      }
    else
      {
      op->vtkPVRenderView::UseInteractiveRenderingForScreenshotsOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVRenderView_GetUseInteractiveRenderingForScreenshots(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseInteractiveRenderingForScreenshots");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRenderView *op = static_cast<vtkPVRenderView *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetUseInteractiveRenderingForScreenshots() :
      op->vtkPVRenderView::GetUseInteractiveRenderingForScreenshots());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVRenderView_SetUseOffscreenRenderingForScreenshots(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseOffscreenRenderingForScreenshots");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRenderView *op = static_cast<vtkPVRenderView *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetUseOffscreenRenderingForScreenshots(temp0);
      }
    else
      {
      op->vtkPVRenderView::SetUseOffscreenRenderingForScreenshots(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVRenderView_UseOffscreenRenderingForScreenshotsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseOffscreenRenderingForScreenshotsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRenderView *op = static_cast<vtkPVRenderView *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->UseOffscreenRenderingForScreenshotsOn();
      }
    else
      {
      op->vtkPVRenderView::UseOffscreenRenderingForScreenshotsOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVRenderView_UseOffscreenRenderingForScreenshotsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseOffscreenRenderingForScreenshotsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRenderView *op = static_cast<vtkPVRenderView *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->UseOffscreenRenderingForScreenshotsOff();
      }
    else
      {
      op->vtkPVRenderView::UseOffscreenRenderingForScreenshotsOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVRenderView_GetUseOffscreenRenderingForScreenshots(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseOffscreenRenderingForScreenshots");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRenderView *op = static_cast<vtkPVRenderView *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetUseOffscreenRenderingForScreenshots() :
      op->vtkPVRenderView::GetUseOffscreenRenderingForScreenshots());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVRenderView_SetUseOffscreenRendering(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseOffscreenRendering");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRenderView *op = static_cast<vtkPVRenderView *>(vp);

  bool temp0 = false;
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
      op->vtkPVRenderView::SetUseOffscreenRendering(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVRenderView_UseOffscreenRenderingOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseOffscreenRenderingOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRenderView *op = static_cast<vtkPVRenderView *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->UseOffscreenRenderingOn();
      }
    else
      {
      op->vtkPVRenderView::UseOffscreenRenderingOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVRenderView_UseOffscreenRenderingOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseOffscreenRenderingOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRenderView *op = static_cast<vtkPVRenderView *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->UseOffscreenRenderingOff();
      }
    else
      {
      op->vtkPVRenderView::UseOffscreenRenderingOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVRenderView_GetUseOffscreenRendering(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseOffscreenRendering");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRenderView *op = static_cast<vtkPVRenderView *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetUseOffscreenRendering() :
      op->vtkPVRenderView::GetUseOffscreenRendering());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVRenderView_GetRemoteRenderingAvailable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRemoteRenderingAvailable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRenderView *op = static_cast<vtkPVRenderView *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetRemoteRenderingAvailable() :
      op->vtkPVRenderView::GetRemoteRenderingAvailable());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVRenderView_RemoteRenderingAvailableOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoteRenderingAvailableOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRenderView *op = static_cast<vtkPVRenderView *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->RemoteRenderingAvailableOff();
      }
    else
      {
      op->vtkPVRenderView::RemoteRenderingAvailableOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVRenderView_GetUsedLODForLastRender(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUsedLODForLastRender");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRenderView *op = static_cast<vtkPVRenderView *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetUsedLODForLastRender() :
      op->vtkPVRenderView::GetUsedLODForLastRender());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVRenderView_InvalidateCachedSelection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InvalidateCachedSelection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRenderView *op = static_cast<vtkPVRenderView *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->InvalidateCachedSelection();
      }
    else
      {
      op->vtkPVRenderView::InvalidateCachedSelection();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVRenderView_GetZbufferDataAtPoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetZbufferDataAtPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRenderView *op = static_cast<vtkPVRenderView *>(vp);

  int temp0;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    double tempr = (ap.IsBound() ?
      op->GetZbufferDataAtPoint(temp0, temp1) :
      op->vtkPVRenderView::GetZbufferDataAtPoint(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVRenderView_SetPiece(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SetPiece");

  vtkInformation *temp0 = NULL;
  vtkPVDataRepresentation *temp1 = NULL;
  vtkDataObject *temp2 = NULL;
  unsigned long temp3 = 0;
  PyObject *result = NULL;

  if (ap.CheckArgCount(3, 4) &&
      ap.GetVTKObject(temp0, "vtkInformation") &&
      ap.GetVTKObject(temp1, "vtkPVDataRepresentation") &&
      ap.GetVTKObject(temp2, "vtkDataObject") &&
      (ap.NoArgsLeft() || ap.GetValue(temp3)))
    {
    vtkPVRenderView::SetPiece(temp0, temp1, temp2, temp3);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVRenderView_GetPieceProducer(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetPieceProducer");

  vtkInformation *temp0 = NULL;
  vtkPVDataRepresentation *temp1 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkInformation") &&
      ap.GetVTKObject(temp1, "vtkPVDataRepresentation"))
    {
    vtkAlgorithmOutput *tempr = vtkPVRenderView::GetPieceProducer(temp0, temp1);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVRenderView_SetPieceLOD(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SetPieceLOD");

  vtkInformation *temp0 = NULL;
  vtkPVDataRepresentation *temp1 = NULL;
  vtkDataObject *temp2 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkInformation") &&
      ap.GetVTKObject(temp1, "vtkPVDataRepresentation") &&
      ap.GetVTKObject(temp2, "vtkDataObject"))
    {
    vtkPVRenderView::SetPieceLOD(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVRenderView_GetPieceProducerLOD(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetPieceProducerLOD");

  vtkInformation *temp0 = NULL;
  vtkPVDataRepresentation *temp1 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkInformation") &&
      ap.GetVTKObject(temp1, "vtkPVDataRepresentation"))
    {
    vtkAlgorithmOutput *tempr = vtkPVRenderView::GetPieceProducerLOD(temp0, temp1);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVRenderView_MarkAsRedistributable(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "MarkAsRedistributable");

  vtkInformation *temp0 = NULL;
  vtkPVDataRepresentation *temp1 = NULL;
  bool temp2 = true;
  PyObject *result = NULL;

  if (ap.CheckArgCount(2, 3) &&
      ap.GetVTKObject(temp0, "vtkInformation") &&
      ap.GetVTKObject(temp1, "vtkPVDataRepresentation") &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)))
    {
    vtkPVRenderView::MarkAsRedistributable(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVRenderView_SetGeometryBounds(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SetGeometryBounds");

  vtkInformation *temp0 = NULL;
  double temp1[6];
  double save1[6];
  const int size1 = 6;
  vtkMatrix4x4 *temp2 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(2, 3) &&
      ap.GetVTKObject(temp0, "vtkInformation") &&
      ap.GetArray(temp1, size1) &&
      (ap.NoArgsLeft() || ap.GetVTKObject(temp2, "vtkMatrix4x4")))
    {
    ap.SaveArray(temp1, save1, size1);

    vtkPVRenderView::SetGeometryBounds(temp0, temp1, temp2);

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
PyvtkPVRenderView_SetStreamable(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SetStreamable");

  vtkInformation *temp0 = NULL;
  vtkPVDataRepresentation *temp1 = NULL;
  bool temp2 = false;
  PyObject *result = NULL;

  if (ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkInformation") &&
      ap.GetVTKObject(temp1, "vtkPVDataRepresentation") &&
      ap.GetValue(temp2))
    {
    vtkPVRenderView::SetStreamable(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVRenderView_SetNextStreamedPiece(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SetNextStreamedPiece");

  vtkInformation *temp0 = NULL;
  vtkPVDataRepresentation *temp1 = NULL;
  vtkDataObject *temp2 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkInformation") &&
      ap.GetVTKObject(temp1, "vtkPVDataRepresentation") &&
      ap.GetVTKObject(temp2, "vtkDataObject"))
    {
    vtkPVRenderView::SetNextStreamedPiece(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVRenderView_GetCurrentStreamedPiece(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetCurrentStreamedPiece");

  vtkInformation *temp0 = NULL;
  vtkPVDataRepresentation *temp1 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkInformation") &&
      ap.GetVTKObject(temp1, "vtkPVDataRepresentation"))
    {
    vtkDataObject *tempr = vtkPVRenderView::GetCurrentStreamedPiece(temp0, temp1);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVRenderView_SetDeliverToAllProcesses(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SetDeliverToAllProcesses");

  vtkInformation *temp0 = NULL;
  vtkPVDataRepresentation *temp1 = NULL;
  bool temp2 = false;
  PyObject *result = NULL;

  if (ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkInformation") &&
      ap.GetVTKObject(temp1, "vtkPVDataRepresentation") &&
      ap.GetValue(temp2))
    {
    vtkPVRenderView::SetDeliverToAllProcesses(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVRenderView_SetDeliverToClientAndRenderingProcesses(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SetDeliverToClientAndRenderingProcesses");

  vtkInformation *temp0 = NULL;
  vtkPVDataRepresentation *temp1 = NULL;
  bool temp2 = false;
  bool temp3 = false;
  PyObject *result = NULL;

  if (ap.CheckArgCount(4) &&
      ap.GetVTKObject(temp0, "vtkInformation") &&
      ap.GetVTKObject(temp1, "vtkPVDataRepresentation") &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
    {
    vtkPVRenderView::SetDeliverToClientAndRenderingProcesses(temp0, temp1, temp2, temp3);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVRenderView_SetOrderedCompositingInformation(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SetOrderedCompositingInformation");

  vtkInformation *temp0 = NULL;
  vtkPVDataRepresentation *temp1 = NULL;
  vtkExtentTranslator *temp2 = NULL;
  int temp3[6];
  const int size3 = 6;
  double temp4[3];
  const int size4 = 3;
  double temp5[3];
  const int size5 = 3;
  PyObject *result = NULL;

  if (ap.CheckArgCount(6) &&
      ap.GetVTKObject(temp0, "vtkInformation") &&
      ap.GetVTKObject(temp1, "vtkPVDataRepresentation") &&
      ap.GetVTKObject(temp2, "vtkExtentTranslator") &&
      ap.GetArray(temp3, size3) &&
      ap.GetArray(temp4, size4) &&
      ap.GetArray(temp5, size5))
    {
    vtkPVRenderView::SetOrderedCompositingInformation(temp0, temp1, temp2, temp3, temp4, temp5);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVRenderView_SetRequiresDistributedRendering(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SetRequiresDistributedRendering");

  vtkInformation *temp0 = NULL;
  vtkPVDataRepresentation *temp1 = NULL;
  bool temp2 = false;
  bool temp3 = false;
  PyObject *result = NULL;

  if (ap.CheckArgCount(3, 4) &&
      ap.GetVTKObject(temp0, "vtkInformation") &&
      ap.GetVTKObject(temp1, "vtkPVDataRepresentation") &&
      ap.GetValue(temp2) &&
      (ap.NoArgsLeft() || ap.GetValue(temp3)))
    {
    vtkPVRenderView::SetRequiresDistributedRendering(temp0, temp1, temp2, temp3);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVRenderView_SetRequiresDistributedRenderingLOD(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SetRequiresDistributedRenderingLOD");

  vtkInformation *temp0 = NULL;
  vtkPVDataRepresentation *temp1 = NULL;
  bool temp2 = false;
  PyObject *result = NULL;

  if (ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkInformation") &&
      ap.GetVTKObject(temp1, "vtkPVDataRepresentation") &&
      ap.GetValue(temp2))
    {
    vtkPVRenderView::SetRequiresDistributedRenderingLOD(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVRenderView_RegisterPropForHardwareSelection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RegisterPropForHardwareSelection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRenderView *op = static_cast<vtkPVRenderView *>(vp);

  vtkPVDataRepresentation *temp0 = NULL;
  vtkProp *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkPVDataRepresentation") &&
      ap.GetVTKObject(temp1, "vtkProp"))
    {
    if (ap.IsBound())
      {
      op->RegisterPropForHardwareSelection(temp0, temp1);
      }
    else
      {
      op->vtkPVRenderView::RegisterPropForHardwareSelection(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVRenderView_UnRegisterPropForHardwareSelection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UnRegisterPropForHardwareSelection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRenderView *op = static_cast<vtkPVRenderView *>(vp);

  vtkPVDataRepresentation *temp0 = NULL;
  vtkProp *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkPVDataRepresentation") &&
      ap.GetVTKObject(temp1, "vtkProp"))
    {
    if (ap.IsBound())
      {
      op->UnRegisterPropForHardwareSelection(temp0, temp1);
      }
    else
      {
      op->vtkPVRenderView::UnRegisterPropForHardwareSelection(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVRenderView_SetLightSwitch(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLightSwitch");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRenderView *op = static_cast<vtkPVRenderView *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetLightSwitch(temp0);
      }
    else
      {
      op->vtkPVRenderView::SetLightSwitch(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVRenderView_GetLightSwitch(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLightSwitch");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRenderView *op = static_cast<vtkPVRenderView *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetLightSwitch() :
      op->vtkPVRenderView::GetLightSwitch());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVRenderView_LightSwitchOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LightSwitchOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRenderView *op = static_cast<vtkPVRenderView *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->LightSwitchOn();
      }
    else
      {
      op->vtkPVRenderView::LightSwitchOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVRenderView_LightSwitchOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LightSwitchOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRenderView *op = static_cast<vtkPVRenderView *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->LightSwitchOff();
      }
    else
      {
      op->vtkPVRenderView::LightSwitchOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVRenderView_SetShowAnnotation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetShowAnnotation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRenderView *op = static_cast<vtkPVRenderView *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetShowAnnotation(temp0);
      }
    else
      {
      op->vtkPVRenderView::SetShowAnnotation(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVRenderView_SetOrientationAxesInteractivity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOrientationAxesInteractivity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRenderView *op = static_cast<vtkPVRenderView *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetOrientationAxesInteractivity(temp0);
      }
    else
      {
      op->vtkPVRenderView::SetOrientationAxesInteractivity(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVRenderView_SetOrientationAxesVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOrientationAxesVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRenderView *op = static_cast<vtkPVRenderView *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetOrientationAxesVisibility(temp0);
      }
    else
      {
      op->vtkPVRenderView::SetOrientationAxesVisibility(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVRenderView_SetOrientationAxesLabelColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOrientationAxesLabelColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRenderView *op = static_cast<vtkPVRenderView *>(vp);

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
      op->SetOrientationAxesLabelColor(temp0, temp1, temp2);
      }
    else
      {
      op->vtkPVRenderView::SetOrientationAxesLabelColor(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVRenderView_SetOrientationAxesOutlineColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOrientationAxesOutlineColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRenderView *op = static_cast<vtkPVRenderView *>(vp);

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
      op->SetOrientationAxesOutlineColor(temp0, temp1, temp2);
      }
    else
      {
      op->vtkPVRenderView::SetOrientationAxesOutlineColor(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVRenderView_SetCenterAxesVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCenterAxesVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRenderView *op = static_cast<vtkPVRenderView *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetCenterAxesVisibility(temp0);
      }
    else
      {
      op->vtkPVRenderView::SetCenterAxesVisibility(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVRenderView_SetCenterOfRotation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCenterOfRotation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRenderView *op = static_cast<vtkPVRenderView *>(vp);

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
      op->SetCenterOfRotation(temp0, temp1, temp2);
      }
    else
      {
      op->vtkPVRenderView::SetCenterOfRotation(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVRenderView_SetRotationFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRotationFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRenderView *op = static_cast<vtkPVRenderView *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetRotationFactor(temp0);
      }
    else
      {
      op->vtkPVRenderView::SetRotationFactor(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVRenderView_SetNonInteractiveRenderDelay(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNonInteractiveRenderDelay");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRenderView *op = static_cast<vtkPVRenderView *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetNonInteractiveRenderDelay(temp0);
      }
    else
      {
      op->vtkPVRenderView::SetNonInteractiveRenderDelay(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVRenderView_SetKeyLightWarmth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetKeyLightWarmth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRenderView *op = static_cast<vtkPVRenderView *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetKeyLightWarmth(temp0);
      }
    else
      {
      op->vtkPVRenderView::SetKeyLightWarmth(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVRenderView_SetKeyLightIntensity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetKeyLightIntensity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRenderView *op = static_cast<vtkPVRenderView *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetKeyLightIntensity(temp0);
      }
    else
      {
      op->vtkPVRenderView::SetKeyLightIntensity(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVRenderView_SetKeyLightElevation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetKeyLightElevation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRenderView *op = static_cast<vtkPVRenderView *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetKeyLightElevation(temp0);
      }
    else
      {
      op->vtkPVRenderView::SetKeyLightElevation(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVRenderView_SetKeyLightAzimuth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetKeyLightAzimuth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRenderView *op = static_cast<vtkPVRenderView *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetKeyLightAzimuth(temp0);
      }
    else
      {
      op->vtkPVRenderView::SetKeyLightAzimuth(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVRenderView_SetFillLightWarmth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFillLightWarmth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRenderView *op = static_cast<vtkPVRenderView *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetFillLightWarmth(temp0);
      }
    else
      {
      op->vtkPVRenderView::SetFillLightWarmth(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVRenderView_SetKeyToFillRatio(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetKeyToFillRatio");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRenderView *op = static_cast<vtkPVRenderView *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetKeyToFillRatio(temp0);
      }
    else
      {
      op->vtkPVRenderView::SetKeyToFillRatio(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVRenderView_SetFillLightElevation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFillLightElevation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRenderView *op = static_cast<vtkPVRenderView *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetFillLightElevation(temp0);
      }
    else
      {
      op->vtkPVRenderView::SetFillLightElevation(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVRenderView_SetFillLightAzimuth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFillLightAzimuth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRenderView *op = static_cast<vtkPVRenderView *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetFillLightAzimuth(temp0);
      }
    else
      {
      op->vtkPVRenderView::SetFillLightAzimuth(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVRenderView_SetBackLightWarmth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBackLightWarmth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRenderView *op = static_cast<vtkPVRenderView *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetBackLightWarmth(temp0);
      }
    else
      {
      op->vtkPVRenderView::SetBackLightWarmth(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVRenderView_SetKeyToBackRatio(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetKeyToBackRatio");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRenderView *op = static_cast<vtkPVRenderView *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetKeyToBackRatio(temp0);
      }
    else
      {
      op->vtkPVRenderView::SetKeyToBackRatio(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVRenderView_SetBackLightElevation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBackLightElevation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRenderView *op = static_cast<vtkPVRenderView *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetBackLightElevation(temp0);
      }
    else
      {
      op->vtkPVRenderView::SetBackLightElevation(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVRenderView_SetBackLightAzimuth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBackLightAzimuth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRenderView *op = static_cast<vtkPVRenderView *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetBackLightAzimuth(temp0);
      }
    else
      {
      op->vtkPVRenderView::SetBackLightAzimuth(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVRenderView_SetHeadLightWarmth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHeadLightWarmth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRenderView *op = static_cast<vtkPVRenderView *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetHeadLightWarmth(temp0);
      }
    else
      {
      op->vtkPVRenderView::SetHeadLightWarmth(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVRenderView_SetKeyToHeadRatio(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetKeyToHeadRatio");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRenderView *op = static_cast<vtkPVRenderView *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetKeyToHeadRatio(temp0);
      }
    else
      {
      op->vtkPVRenderView::SetKeyToHeadRatio(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVRenderView_SetMaintainLuminance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaintainLuminance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRenderView *op = static_cast<vtkPVRenderView *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetMaintainLuminance(temp0);
      }
    else
      {
      op->vtkPVRenderView::SetMaintainLuminance(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVRenderView_SetUseDepthPeeling(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseDepthPeeling");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRenderView *op = static_cast<vtkPVRenderView *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetUseDepthPeeling(temp0);
      }
    else
      {
      op->vtkPVRenderView::SetUseDepthPeeling(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVRenderView_SetMaximumNumberOfPeels(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaximumNumberOfPeels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRenderView *op = static_cast<vtkPVRenderView *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetMaximumNumberOfPeels(temp0);
      }
    else
      {
      op->vtkPVRenderView::SetMaximumNumberOfPeels(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVRenderView_SetBackground(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBackground");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRenderView *op = static_cast<vtkPVRenderView *>(vp);

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
      op->SetBackground(temp0, temp1, temp2);
      }
    else
      {
      op->vtkPVRenderView::SetBackground(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVRenderView_SetBackground2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBackground2");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRenderView *op = static_cast<vtkPVRenderView *>(vp);

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
      op->SetBackground2(temp0, temp1, temp2);
      }
    else
      {
      op->vtkPVRenderView::SetBackground2(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVRenderView_SetBackgroundTexture(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBackgroundTexture");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRenderView *op = static_cast<vtkPVRenderView *>(vp);

  vtkTexture *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkTexture"))
    {
    if (ap.IsBound())
      {
      op->SetBackgroundTexture(temp0);
      }
    else
      {
      op->vtkPVRenderView::SetBackgroundTexture(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVRenderView_SetGradientBackground(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGradientBackground");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRenderView *op = static_cast<vtkPVRenderView *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetGradientBackground(temp0);
      }
    else
      {
      op->vtkPVRenderView::SetGradientBackground(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVRenderView_SetTexturedBackground(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTexturedBackground");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRenderView *op = static_cast<vtkPVRenderView *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetTexturedBackground(temp0);
      }
    else
      {
      op->vtkPVRenderView::SetTexturedBackground(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVRenderView_SetAmbientColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAmbientColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRenderView *op = static_cast<vtkPVRenderView *>(vp);

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
      op->SetAmbientColor(temp0, temp1, temp2);
      }
    else
      {
      op->vtkPVRenderView::SetAmbientColor(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVRenderView_SetSpecularColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSpecularColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRenderView *op = static_cast<vtkPVRenderView *>(vp);

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
      op->SetSpecularColor(temp0, temp1, temp2);
      }
    else
      {
      op->vtkPVRenderView::SetSpecularColor(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVRenderView_SetDiffuseColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDiffuseColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRenderView *op = static_cast<vtkPVRenderView *>(vp);

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
      op->SetDiffuseColor(temp0, temp1, temp2);
      }
    else
      {
      op->vtkPVRenderView::SetDiffuseColor(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVRenderView_SetIntensity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIntensity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRenderView *op = static_cast<vtkPVRenderView *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetIntensity(temp0);
      }
    else
      {
      op->vtkPVRenderView::SetIntensity(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVRenderView_SetLightType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLightType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRenderView *op = static_cast<vtkPVRenderView *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetLightType(temp0);
      }
    else
      {
      op->vtkPVRenderView::SetLightType(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVRenderView_SetStereoCapableWindow(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetStereoCapableWindow");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRenderView *op = static_cast<vtkPVRenderView *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetStereoCapableWindow(temp0);
      }
    else
      {
      op->vtkPVRenderView::SetStereoCapableWindow(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVRenderView_SetStereoRender(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetStereoRender");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRenderView *op = static_cast<vtkPVRenderView *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetStereoRender(temp0);
      }
    else
      {
      op->vtkPVRenderView::SetStereoRender(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVRenderView_SetStereoType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetStereoType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRenderView *op = static_cast<vtkPVRenderView *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetStereoType(temp0);
      }
    else
      {
      op->vtkPVRenderView::SetStereoType(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVRenderView_SetMultiSamples(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMultiSamples");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRenderView *op = static_cast<vtkPVRenderView *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetMultiSamples(temp0);
      }
    else
      {
      op->vtkPVRenderView::SetMultiSamples(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVRenderView_SetAlphaBitPlanes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAlphaBitPlanes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRenderView *op = static_cast<vtkPVRenderView *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetAlphaBitPlanes(temp0);
      }
    else
      {
      op->vtkPVRenderView::SetAlphaBitPlanes(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVRenderView_SetStencilCapable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetStencilCapable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRenderView *op = static_cast<vtkPVRenderView *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetStencilCapable(temp0);
      }
    else
      {
      op->vtkPVRenderView::SetStencilCapable(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVRenderView_SetCamera2DManipulators(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCamera2DManipulators");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRenderView *op = static_cast<vtkPVRenderView *>(vp);

  int temp0[9];
  const int size0 = 9;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetCamera2DManipulators(temp0);
      }
    else
      {
      op->vtkPVRenderView::SetCamera2DManipulators(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVRenderView_SetCamera3DManipulators(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCamera3DManipulators");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRenderView *op = static_cast<vtkPVRenderView *>(vp);

  int temp0[9];
  const int size0 = 9;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetCamera3DManipulators(temp0);
      }
    else
      {
      op->vtkPVRenderView::SetCamera3DManipulators(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVRenderView_SetCameraManipulators(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCameraManipulators");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRenderView *op = static_cast<vtkPVRenderView *>(vp);

  vtkPVInteractorStyle *temp0 = NULL;
  int temp1[9];
  const int size1 = 9;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkPVInteractorStyle") &&
      ap.GetArray(temp1, size1))
    {
    if (ap.IsBound())
      {
      op->SetCameraManipulators(temp0, temp1);
      }
    else
      {
      op->vtkPVRenderView::SetCameraManipulators(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVRenderView_Update(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Update");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRenderView *op = static_cast<vtkPVRenderView *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Update();
      }
    else
      {
      op->vtkPVRenderView::Update();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVRenderView_UpdateLOD(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateLOD");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRenderView *op = static_cast<vtkPVRenderView *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->UpdateLOD();
      }
    else
      {
      op->vtkPVRenderView::UpdateLOD();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVRenderView_GetUseLODForInteractiveRender(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseLODForInteractiveRender");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRenderView *op = static_cast<vtkPVRenderView *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetUseLODForInteractiveRender() :
      op->vtkPVRenderView::GetUseLODForInteractiveRender());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVRenderView_GetUseDistributedRenderingForStillRender(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseDistributedRenderingForStillRender");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRenderView *op = static_cast<vtkPVRenderView *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetUseDistributedRenderingForStillRender() :
      op->vtkPVRenderView::GetUseDistributedRenderingForStillRender());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVRenderView_GetUseDistributedRenderingForInteractiveRender(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseDistributedRenderingForInteractiveRender");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRenderView *op = static_cast<vtkPVRenderView *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetUseDistributedRenderingForInteractiveRender() :
      op->vtkPVRenderView::GetUseDistributedRenderingForInteractiveRender());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVRenderView_GetStillRenderProcesses(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStillRenderProcesses");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRenderView *op = static_cast<vtkPVRenderView *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned int tempr = (ap.IsBound() ?
      op->GetStillRenderProcesses() :
      op->vtkPVRenderView::GetStillRenderProcesses());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVRenderView_GetInteractiveRenderProcesses(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInteractiveRenderProcesses");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRenderView *op = static_cast<vtkPVRenderView *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned int tempr = (ap.IsBound() ?
      op->GetInteractiveRenderProcesses() :
      op->vtkPVRenderView::GetInteractiveRenderProcesses());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVRenderView_GetDataDistributionMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataDistributionMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRenderView *op = static_cast<vtkPVRenderView *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->GetDataDistributionMode(temp0) :
      op->vtkPVRenderView::GetDataDistributionMode(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVRenderView_GetDeliveryManager(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDeliveryManager");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRenderView *op = static_cast<vtkPVRenderView *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPVDataDeliveryManager *tempr = (ap.IsBound() ?
      op->GetDeliveryManager() :
      op->vtkPVRenderView::GetDeliveryManager());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVRenderView_Deliver(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Deliver");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRenderView *op = static_cast<vtkPVRenderView *>(vp);

  int temp0;
  unsigned int temp1;
  unsigned int *temp2 = NULL;
  unsigned int *save2 = NULL;
  unsigned int small2[8];
  int size2 = 0;
  PyObject *result = NULL;

  if (op)
    {
    size2 = ap.GetArgSize(2);
    temp2 = small2;
    if (size2 > 4)
      {
      temp2 = new unsigned int[2*size2];
      }
    save2 = &temp2[size2];
    }

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetArray(temp2, size2))
    {
    ap.SaveArray(temp2, save2, size2);

    if (ap.IsBound())
      {
      op->Deliver(temp0, temp1, temp2);
      }
    else
      {
      op->vtkPVRenderView::Deliver(temp0, temp1, temp2);
      }

    if (ap.ArrayHasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(2, temp2, size2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  if (temp2 && temp2 != small2)
    {
    delete [] temp2;
    }

  return result;
}


static PyObject *
PyvtkPVRenderView_GetUseOrderedCompositing(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseOrderedCompositing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRenderView *op = static_cast<vtkPVRenderView *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetUseOrderedCompositing() :
      op->vtkPVRenderView::GetUseOrderedCompositing());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVRenderView_GetRenderEmptyImages(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRenderEmptyImages");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRenderView *op = static_cast<vtkPVRenderView *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetRenderEmptyImages() :
      op->vtkPVRenderView::GetRenderEmptyImages());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVRenderView_GetUpdateTimeStamp(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUpdateTimeStamp");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRenderView *op = static_cast<vtkPVRenderView *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned long tempr = (ap.IsBound() ?
      op->GetUpdateTimeStamp() :
      op->vtkPVRenderView::GetUpdateTimeStamp());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVRenderView_CopyViewUpdateOptions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyViewUpdateOptions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRenderView *op = static_cast<vtkPVRenderView *>(vp);

  vtkPVRenderView *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPVRenderView"))
    {
    if (ap.IsBound())
      {
      op->CopyViewUpdateOptions(temp0);
      }
    else
      {
      op->vtkPVRenderView::CopyViewUpdateOptions(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVRenderView_AddPropToRenderer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddPropToRenderer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRenderView *op = static_cast<vtkPVRenderView *>(vp);

  vtkProp *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkProp"))
    {
    if (ap.IsBound())
      {
      op->AddPropToRenderer(temp0);
      }
    else
      {
      op->vtkPVRenderView::AddPropToRenderer(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVRenderView_RemovePropFromRenderer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemovePropFromRenderer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRenderView *op = static_cast<vtkPVRenderView *>(vp);

  vtkProp *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkProp"))
    {
    if (ap.IsBound())
      {
      op->RemovePropFromRenderer(temp0);
      }
    else
      {
      op->vtkPVRenderView::RemovePropFromRenderer(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkPVRenderView_Methods[] = {
  {(char*)"GetClassName", PyvtkPVRenderView_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkPVRenderView_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkPVRenderView_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkPVRenderView\nC++: vtkPVRenderView *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkPVRenderView_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkPVRenderView\nC++: vtkPVRenderView *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetInteractionMode", PyvtkPVRenderView_SetInteractionMode, METH_VARARGS,
   (char*)"V.SetInteractionMode(int)\nC++: virtual void SetInteractionMode(int mode)\n\nGet/Set the interaction mode. Default is INTERACTION_MODE_3D. If\nINTERACTION_MODE_SELECTION is selected, then whenever the user\ndrags and creates a selection region, this class will fire a\nvtkCommand::SelectionChangedEvent event with the selection region\nas the argument.@CallOnAllProcessess - this must be called on all\nprocesses, however it will have any effect only the driver\nprocesses i.e. the process with the interactor.\n"},
  {(char*)"GetInteractionMode", PyvtkPVRenderView_GetInteractionMode, METH_VARARGS,
   (char*)"V.GetInteractionMode() -> int\nC++: int GetInteractionMode()\n\nGet/Set the interaction mode. Default is INTERACTION_MODE_3D. If\nINTERACTION_MODE_SELECTION is selected, then whenever the user\ndrags and creates a selection region, this class will fire a\nvtkCommand::SelectionChangedEvent event with the selection region\nas the argument.@CallOnAllProcessess - this must be called on all\nprocesses, however it will have any effect only the driver\nprocesses i.e. the process with the interactor.\n"},
  {(char*)"Initialize", PyvtkPVRenderView_Initialize, METH_VARARGS,
   (char*)"V.Initialize(int)\nC++: virtual void Initialize(unsigned int id)\n\nInitialize the view with an identifier. Unless noted otherwise,\nthis method must be called before calling any other methods on\nthis class.@CallOnAllProcessess\n"},
  {(char*)"GetNonCompositedRenderer", PyvtkPVRenderView_GetNonCompositedRenderer, METH_VARARGS,
   (char*)"V.GetNonCompositedRenderer() -> vtkRenderer\nC++: vtkRenderer *GetNonCompositedRenderer()\n\nGets the non-composited renderer for this view. This is typically\nused for labels, 2D annotations etc.@CallOnAllProcessess\n"},
  {(char*)"GetRenderer", PyvtkPVRenderView_GetRenderer, METH_VARARGS,
   (char*)"V.GetRenderer() -> vtkRenderer\nC++: vtkRenderer *GetRenderer()\n\nGets the non-composited renderer for this view. This is typically\nused for labels, 2D annotations etc.@CallOnAllProcessess\n"},
  {(char*)"GetActiveCamera", PyvtkPVRenderView_GetActiveCamera, METH_VARARGS,
   (char*)"V.GetActiveCamera() -> vtkCamera\nC++: vtkCamera *GetActiveCamera()\n\nGet/Set the active camera. The active camera is set on both the\ncomposited and non-composited renderer.\n"},
  {(char*)"SetActiveCamera", PyvtkPVRenderView_SetActiveCamera, METH_VARARGS,
   (char*)"V.SetActiveCamera(vtkCamera)\nC++: virtual void SetActiveCamera(vtkCamera *)\n\nGet/Set the active camera. The active camera is set on both the\ncomposited and non-composited renderer.\n"},
  {(char*)"GetRenderWindow", PyvtkPVRenderView_GetRenderWindow, METH_VARARGS,
   (char*)"V.GetRenderWindow() -> vtkRenderWindow\nC++: vtkRenderWindow *GetRenderWindow()\n\nReturns the render window.\n"},
  {(char*)"GetInteractor", PyvtkPVRenderView_GetInteractor, METH_VARARGS,
   (char*)"V.GetInteractor() -> vtkPVGenericRenderWindowInteractor\nC++: vtkPVGenericRenderWindowInteractor *GetInteractor()\n\nReturns the interactor. .\n"},
  {(char*)"GetInteractorStyle", PyvtkPVRenderView_GetInteractorStyle, METH_VARARGS,
   (char*)"V.GetInteractorStyle() -> vtkPVInteractorStyle\nC++: vtkPVInteractorStyle *GetInteractorStyle()\n\nReturns the interactor style.\n"},
  {(char*)"ResetCamera", PyvtkPVRenderView_ResetCamera, METH_VARARGS,
   (char*)"V.ResetCamera()\nC++: void ResetCamera()\nV.ResetCamera([float, float, float, float, float, float])\nC++: void ResetCamera(double bounds[6])\n\nResets the active camera using collective\nprop-bounds.@CallOnAllProcessess\n"},
  {(char*)"StillRender", PyvtkPVRenderView_StillRender, METH_VARARGS,
   (char*)"V.StillRender()\nC++: virtual void StillRender()\n\nTriggers a high-resolution render.@CallOnAllProcessess\n"},
  {(char*)"InteractiveRender", PyvtkPVRenderView_InteractiveRender, METH_VARARGS,
   (char*)"V.InteractiveRender()\nC++: virtual void InteractiveRender()\n\nTriggers a interactive render. Based on the settings on the view,\nthis may result in a low-resolution rendering or a simplified\ngeometry rendering.@CallOnAllProcessess\n"},
  {(char*)"SetStillRenderImageReductionFactor", PyvtkPVRenderView_SetStillRenderImageReductionFactor, METH_VARARGS,
   (char*)"V.SetStillRenderImageReductionFactor(int)\nC++: void SetStillRenderImageReductionFactor(int)\n\nGet/Set the reduction-factor to use when for StillRender(). This\nis typically set to 1, but in some cases with terrible\nconnectivity or really large displays, one may want to use a\nsub-sampled image even for StillRender(). This is set it number\nof pixels to be sub-sampled by. Note that image reduction factors\nhave no effect when in built-in mode.@CallOnAllProcessess\n"},
  {(char*)"GetStillRenderImageReductionFactorMinValue", PyvtkPVRenderView_GetStillRenderImageReductionFactorMinValue, METH_VARARGS,
   (char*)"V.GetStillRenderImageReductionFactorMinValue() -> int\nC++: int GetStillRenderImageReductionFactorMinValue()\n\nGet/Set the reduction-factor to use when for StillRender(). This\nis typically set to 1, but in some cases with terrible\nconnectivity or really large displays, one may want to use a\nsub-sampled image even for StillRender(). This is set it number\nof pixels to be sub-sampled by. Note that image reduction factors\nhave no effect when in built-in mode.@CallOnAllProcessess\n"},
  {(char*)"GetStillRenderImageReductionFactorMaxValue", PyvtkPVRenderView_GetStillRenderImageReductionFactorMaxValue, METH_VARARGS,
   (char*)"V.GetStillRenderImageReductionFactorMaxValue() -> int\nC++: int GetStillRenderImageReductionFactorMaxValue()\n\nGet/Set the reduction-factor to use when for StillRender(). This\nis typically set to 1, but in some cases with terrible\nconnectivity or really large displays, one may want to use a\nsub-sampled image even for StillRender(). This is set it number\nof pixels to be sub-sampled by. Note that image reduction factors\nhave no effect when in built-in mode.@CallOnAllProcessess\n"},
  {(char*)"GetStillRenderImageReductionFactor", PyvtkPVRenderView_GetStillRenderImageReductionFactor, METH_VARARGS,
   (char*)"V.GetStillRenderImageReductionFactor() -> int\nC++: int GetStillRenderImageReductionFactor()\n\nGet/Set the reduction-factor to use when for StillRender(). This\nis typically set to 1, but in some cases with terrible\nconnectivity or really large displays, one may want to use a\nsub-sampled image even for StillRender(). This is set it number\nof pixels to be sub-sampled by. Note that image reduction factors\nhave no effect when in built-in mode.@CallOnAllProcessess\n"},
  {(char*)"SetInteractiveRenderImageReductionFactor", PyvtkPVRenderView_SetInteractiveRenderImageReductionFactor, METH_VARARGS,
   (char*)"V.SetInteractiveRenderImageReductionFactor(int)\nC++: void SetInteractiveRenderImageReductionFactor(int)\n\nGet/Set the reduction-factor to use when for InteractiveRender().\nThis is set it number of pixels to be sub-sampled by. Note that\nimage reduction factors have no effect when in built-in\nmode.@CallOnAllProcessess\n"},
  {(char*)"GetInteractiveRenderImageReductionFactorMinValue", PyvtkPVRenderView_GetInteractiveRenderImageReductionFactorMinValue, METH_VARARGS,
   (char*)"V.GetInteractiveRenderImageReductionFactorMinValue() -> int\nC++: int GetInteractiveRenderImageReductionFactorMinValue()\n\nGet/Set the reduction-factor to use when for InteractiveRender().\nThis is set it number of pixels to be sub-sampled by. Note that\nimage reduction factors have no effect when in built-in\nmode.@CallOnAllProcessess\n"},
  {(char*)"GetInteractiveRenderImageReductionFactorMaxValue", PyvtkPVRenderView_GetInteractiveRenderImageReductionFactorMaxValue, METH_VARARGS,
   (char*)"V.GetInteractiveRenderImageReductionFactorMaxValue() -> int\nC++: int GetInteractiveRenderImageReductionFactorMaxValue()\n\nGet/Set the reduction-factor to use when for InteractiveRender().\nThis is set it number of pixels to be sub-sampled by. Note that\nimage reduction factors have no effect when in built-in\nmode.@CallOnAllProcessess\n"},
  {(char*)"GetInteractiveRenderImageReductionFactor", PyvtkPVRenderView_GetInteractiveRenderImageReductionFactor, METH_VARARGS,
   (char*)"V.GetInteractiveRenderImageReductionFactor() -> int\nC++: int GetInteractiveRenderImageReductionFactor()\n\nGet/Set the reduction-factor to use when for InteractiveRender().\nThis is set it number of pixels to be sub-sampled by. Note that\nimage reduction factors have no effect when in built-in\nmode.@CallOnAllProcessess\n"},
  {(char*)"SetRemoteRenderingThreshold", PyvtkPVRenderView_SetRemoteRenderingThreshold, METH_VARARGS,
   (char*)"V.SetRemoteRenderingThreshold(float)\nC++: void SetRemoteRenderingThreshold(double a)\n\nGet/Set the data-size in megabytes above which remote-rendering\nshould be used, if possible.@CallOnAllProcessess\n"},
  {(char*)"GetRemoteRenderingThreshold", PyvtkPVRenderView_GetRemoteRenderingThreshold, METH_VARARGS,
   (char*)"V.GetRemoteRenderingThreshold() -> float\nC++: double GetRemoteRenderingThreshold()\n\nGet/Set the data-size in megabytes above which remote-rendering\nshould be used, if possible.@CallOnAllProcessess\n"},
  {(char*)"SetLODRenderingThreshold", PyvtkPVRenderView_SetLODRenderingThreshold, METH_VARARGS,
   (char*)"V.SetLODRenderingThreshold(float)\nC++: void SetLODRenderingThreshold(double a)\n\nGet/Set the data-size in megabytes above which LOD rendering\nshould be used, if possible.@CallOnAllProcessess\n"},
  {(char*)"GetLODRenderingThreshold", PyvtkPVRenderView_GetLODRenderingThreshold, METH_VARARGS,
   (char*)"V.GetLODRenderingThreshold() -> float\nC++: double GetLODRenderingThreshold()\n\nGet/Set the data-size in megabytes above which LOD rendering\nshould be used, if possible.@CallOnAllProcessess\n"},
  {(char*)"SetLODResolution", PyvtkPVRenderView_SetLODResolution, METH_VARARGS,
   (char*)"V.SetLODResolution(float)\nC++: void SetLODResolution(double)\n\nGet/Set the LOD resolution. This affects the size of the grid\nused for quadric clustering, for example. 1.0 implies maximum\nresolution while 0 implies minimum\nresolution.@CallOnAllProcessess\n"},
  {(char*)"GetLODResolutionMinValue", PyvtkPVRenderView_GetLODResolutionMinValue, METH_VARARGS,
   (char*)"V.GetLODResolutionMinValue() -> float\nC++: double GetLODResolutionMinValue()\n\nGet/Set the LOD resolution. This affects the size of the grid\nused for quadric clustering, for example. 1.0 implies maximum\nresolution while 0 implies minimum\nresolution.@CallOnAllProcessess\n"},
  {(char*)"GetLODResolutionMaxValue", PyvtkPVRenderView_GetLODResolutionMaxValue, METH_VARARGS,
   (char*)"V.GetLODResolutionMaxValue() -> float\nC++: double GetLODResolutionMaxValue()\n\nGet/Set the LOD resolution. This affects the size of the grid\nused for quadric clustering, for example. 1.0 implies maximum\nresolution while 0 implies minimum\nresolution.@CallOnAllProcessess\n"},
  {(char*)"GetLODResolution", PyvtkPVRenderView_GetLODResolution, METH_VARARGS,
   (char*)"V.GetLODResolution() -> float\nC++: double GetLODResolution()\n\nGet/Set the LOD resolution. This affects the size of the grid\nused for quadric clustering, for example. 1.0 implies maximum\nresolution while 0 implies minimum\nresolution.@CallOnAllProcessess\n"},
  {(char*)"SetUseOutlineForLODRendering", PyvtkPVRenderView_SetUseOutlineForLODRendering, METH_VARARGS,
   (char*)"V.SetUseOutlineForLODRendering(bool)\nC++: void SetUseOutlineForLODRendering(bool a)\n\nWhen set to true, instead of using simplified geometry for LOD\nrendering, uses outline, if possible. Note that not all\nrepresentations support this mode and hence one may still see\nnon-outline data being rendering when this flag is ON and LOD is\nbeing used.\n"},
  {(char*)"GetUseOutlineForLODRendering", PyvtkPVRenderView_GetUseOutlineForLODRendering, METH_VARARGS,
   (char*)"V.GetUseOutlineForLODRendering() -> bool\nC++: bool GetUseOutlineForLODRendering()\n\nWhen set to true, instead of using simplified geometry for LOD\nrendering, uses outline, if possible. Note that not all\nrepresentations support this mode and hence one may still see\nnon-outline data being rendering when this flag is ON and LOD is\nbeing used.\n"},
  {(char*)"ConfigureCompressor", PyvtkPVRenderView_ConfigureCompressor, METH_VARARGS,
   (char*)"V.ConfigureCompressor(string)\nC++: void ConfigureCompressor(const char *configuration)\n\nPasses the compressor configuration to the client-server\nsynchronizer, if any. This affects the image compression used to\nrelay images back to the client. See\nvtkPVClientServerSynchronizedRenderers::ConfigureCompressor() for\ndetails.@CallOnAllProcessess\n"},
  {(char*)"ResetCameraClippingRange", PyvtkPVRenderView_ResetCameraClippingRange, METH_VARARGS,
   (char*)"V.ResetCameraClippingRange()\nC++: virtual void ResetCameraClippingRange()\n\nResets the clipping range. One does not need to call this\ndirectly ever. It is called periodically by the vtkRenderer to\nreset the camera range.\n"},
  {(char*)"SetUseLightKit", PyvtkPVRenderView_SetUseLightKit, METH_VARARGS,
   (char*)"V.SetUseLightKit(bool)\nC++: void SetUseLightKit(bool enable)\n\nEnable/Disable light kit.@CallOnAllProcessess\n"},
  {(char*)"GetUseLightKit", PyvtkPVRenderView_GetUseLightKit, METH_VARARGS,
   (char*)"V.GetUseLightKit() -> bool\nC++: bool GetUseLightKit()\n\nEnable/Disable light kit.@CallOnAllProcessess\n"},
  {(char*)"UseLightKitOn", PyvtkPVRenderView_UseLightKitOn, METH_VARARGS,
   (char*)"V.UseLightKitOn()\nC++: void UseLightKitOn()\n\nEnable/Disable light kit.@CallOnAllProcessess\n"},
  {(char*)"UseLightKitOff", PyvtkPVRenderView_UseLightKitOff, METH_VARARGS,
   (char*)"V.UseLightKitOff()\nC++: void UseLightKitOff()\n\nEnable/Disable light kit.@CallOnAllProcessess\n"},
  {(char*)"StreamingUpdate", PyvtkPVRenderView_StreamingUpdate, METH_VARARGS,
   (char*)"V.StreamingUpdate((float, float, float, float, float, float,\n    float, float, float, float, float, float, float, float, float,\n     float, float, float, float, float, float, float, float,\n    float))\nC++: void StreamingUpdate(const double view_planes[24])\n\n\n"},
  {(char*)"DeliverStreamedPieces", PyvtkPVRenderView_DeliverStreamedPieces, METH_VARARGS,
   (char*)"V.DeliverStreamedPieces(int, [int, ...])\nC++: void DeliverStreamedPieces(unsigned int size,\n    unsigned int *representation_ids)\n\n\n"},
  {(char*)"USE_LOD", PyvtkPVRenderView_USE_LOD, METH_VARARGS | METH_STATIC,
   (char*)"V.USE_LOD() -> vtkInformationIntegerKey\nC++: static vtkInformationIntegerKey *USE_LOD()\n\nUSE_LOD indicates if LOD is being used for the current\nrender/update.\n"},
  {(char*)"LOD_RESOLUTION", PyvtkPVRenderView_LOD_RESOLUTION, METH_VARARGS | METH_STATIC,
   (char*)"V.LOD_RESOLUTION() -> vtkInformationDoubleKey\nC++: static vtkInformationDoubleKey *LOD_RESOLUTION()\n\nIndicates the LOD resolution in REQUEST_UPDATE_LOD() pass.\n"},
  {(char*)"USE_OUTLINE_FOR_LOD", PyvtkPVRenderView_USE_OUTLINE_FOR_LOD, METH_VARARGS | METH_STATIC,
   (char*)"V.USE_OUTLINE_FOR_LOD() -> vtkInformationIntegerKey\nC++: static vtkInformationIntegerKey *USE_OUTLINE_FOR_LOD()\n\nIndicates the LOD must use outline if possible in\nREQUEST_UPDATE_LOD() pass.\n"},
  {(char*)"RENDER_EMPTY_IMAGES", PyvtkPVRenderView_RENDER_EMPTY_IMAGES, METH_VARARGS | METH_STATIC,
   (char*)"V.RENDER_EMPTY_IMAGES() -> vtkInformationIntegerKey\nC++: static vtkInformationIntegerKey *RENDER_EMPTY_IMAGES()\n\nRepresentation can publish this key in their\nREQUEST_INFORMATION() pass to indicate that the representation\nneeds to disable IceT's empty image optimization. This is\ntypically only needed if a painter will make use of MPI global\ncollective communications.\n"},
  {(char*)"NEED_ORDERED_COMPOSITING", PyvtkPVRenderView_NEED_ORDERED_COMPOSITING, METH_VARARGS | METH_STATIC,
   (char*)"V.NEED_ORDERED_COMPOSITING() -> vtkInformationIntegerKey\nC++: static vtkInformationIntegerKey *NEED_ORDERED_COMPOSITING()\n\nRepresentation can publish this key in their\nREQUEST_INFORMATION() pass to indicate that the representation\nneeds ordered compositing.\n"},
  {(char*)"VIEW_PLANES", PyvtkPVRenderView_VIEW_PLANES, METH_VARARGS | METH_STATIC,
   (char*)"V.VIEW_PLANES() -> vtkInformationDoubleVectorKey\nC++: static vtkInformationDoubleVectorKey *VIEW_PLANES()\n\nKey used to pass meta-data about the view frustum in\nREQUEST_STREAMING_UPDATE() pass. The value is a double vector\nwith exactly 24 values.\n"},
  {(char*)"REQUEST_STREAMING_UPDATE", PyvtkPVRenderView_REQUEST_STREAMING_UPDATE, METH_VARARGS | METH_STATIC,
   (char*)"V.REQUEST_STREAMING_UPDATE() -> vtkInformationRequestKey\nC++: static vtkInformationRequestKey *REQUEST_STREAMING_UPDATE()\n\nStreaming pass request.\n"},
  {(char*)"REQUEST_PROCESS_STREAMED_PIECE", PyvtkPVRenderView_REQUEST_PROCESS_STREAMED_PIECE, METH_VARARGS | METH_STATIC,
   (char*)"V.REQUEST_PROCESS_STREAMED_PIECE() -> vtkInformationRequestKey\nC++: static vtkInformationRequestKey *REQUEST_PROCESS_STREAMED_PIECE(\n    )\n\nPass to relay the streamed \"piece\" to the representations.\n"},
  {(char*)"SelectCells", PyvtkPVRenderView_SelectCells, METH_VARARGS,
   (char*)"V.SelectCells([int, int, int, int])\nC++: void SelectCells(int region[4])\nV.SelectCells(int, int, int, int)\nC++: void SelectCells(int region0, int region1, int region2,\n    int region3)\n\nMake a selection. This will result in setting up of\nthis->LastSelection which can be accessed using\nGetLastSelection().@CallOnAllProcessess\n"},
  {(char*)"SelectPoints", PyvtkPVRenderView_SelectPoints, METH_VARARGS,
   (char*)"V.SelectPoints([int, int, int, int])\nC++: void SelectPoints(int region[4])\nV.SelectPoints(int, int, int, int)\nC++: void SelectPoints(int region0, int region1, int region2,\n    int region3)\n\nMake a selection. This will result in setting up of\nthis->LastSelection which can be accessed using\nGetLastSelection().@CallOnAllProcessess\n"},
  {(char*)"Select", PyvtkPVRenderView_Select, METH_VARARGS,
   (char*)"V.Select(int, [int, int, int, int])\nC++: void Select(int field_association, int region[4])\n\nMake a selection. This will result in setting up of\nthis->LastSelection which can be accessed using\nGetLastSelection().@CallOnAllProcessess\n"},
  {(char*)"SelectPolygonPoints", PyvtkPVRenderView_SelectPolygonPoints, METH_VARARGS,
   (char*)"V.SelectPolygonPoints([int, ...], int)\nC++: void SelectPolygonPoints(int *polygon2DArray,\n    vtkIdType arrayLen)\n\nMake a selection with a polygon. The polygon2DArray should\ncontain the polygon points in display units of (x, y) tuples, and\narrayLen is the total length of polygon2DArray. This will result\nin setting up of this->LastSelection which can be accessed using\nGetLastSelection().@CallOnAllProcessess\n"},
  {(char*)"SelectPolygonCells", PyvtkPVRenderView_SelectPolygonCells, METH_VARARGS,
   (char*)"V.SelectPolygonCells([int, ...], int)\nC++: void SelectPolygonCells(int *polygon2DArray,\n    vtkIdType arrayLen)\n\nMake a selection with a polygon. The polygon2DArray should\ncontain the polygon points in display units of (x, y) tuples, and\narrayLen is the total length of polygon2DArray. This will result\nin setting up of this->LastSelection which can be accessed using\nGetLastSelection().@CallOnAllProcessess\n"},
  {(char*)"SelectPolygon", PyvtkPVRenderView_SelectPolygon, METH_VARARGS,
   (char*)"V.SelectPolygon(int, [int, ...], int)\nC++: void SelectPolygon(int field_association,\n    int *polygon2DArray, vtkIdType arrayLen)\n\nMake a selection with a polygon. The polygon2DArray should\ncontain the polygon points in display units of (x, y) tuples, and\narrayLen is the total length of polygon2DArray. This will result\nin setting up of this->LastSelection which can be accessed using\nGetLastSelection().@CallOnAllProcessess\n"},
  {(char*)"GetLastSelection", PyvtkPVRenderView_GetLastSelection, METH_VARARGS,
   (char*)"V.GetLastSelection() -> vtkSelection\nC++: vtkSelection *GetLastSelection()\n\nProvides access to the last selection.\n"},
  {(char*)"SetUseInteractiveRenderingForScreenshots", PyvtkPVRenderView_SetUseInteractiveRenderingForScreenshots, METH_VARARGS,
   (char*)"V.SetUseInteractiveRenderingForScreenshots(bool)\nC++: void SetUseInteractiveRenderingForScreenshots(bool a)\n\nSet or get whether capture should be done as StillRender or\nInteractiveRender when capturing screenshots.\n"},
  {(char*)"UseInteractiveRenderingForScreenshotsOn", PyvtkPVRenderView_UseInteractiveRenderingForScreenshotsOn, METH_VARARGS,
   (char*)"V.UseInteractiveRenderingForScreenshotsOn()\nC++: void UseInteractiveRenderingForScreenshotsOn()\n\nSet or get whether capture should be done as StillRender or\nInteractiveRender when capturing screenshots.\n"},
  {(char*)"UseInteractiveRenderingForScreenshotsOff", PyvtkPVRenderView_UseInteractiveRenderingForScreenshotsOff, METH_VARARGS,
   (char*)"V.UseInteractiveRenderingForScreenshotsOff()\nC++: void UseInteractiveRenderingForScreenshotsOff()\n\nSet or get whether capture should be done as StillRender or\nInteractiveRender when capturing screenshots.\n"},
  {(char*)"GetUseInteractiveRenderingForScreenshots", PyvtkPVRenderView_GetUseInteractiveRenderingForScreenshots, METH_VARARGS,
   (char*)"V.GetUseInteractiveRenderingForScreenshots() -> bool\nC++: bool GetUseInteractiveRenderingForScreenshots()\n\nSet or get whether capture should be done as StillRender or\nInteractiveRender when capturing screenshots.\n"},
  {(char*)"SetUseOffscreenRenderingForScreenshots", PyvtkPVRenderView_SetUseOffscreenRenderingForScreenshots, METH_VARARGS,
   (char*)"V.SetUseOffscreenRenderingForScreenshots(bool)\nC++: void SetUseOffscreenRenderingForScreenshots(bool a)\n\nSet or get whether offscreen rendering should be used during\nCaptureWindow calls. On Apple machines, this flag has no effect.\n"},
  {(char*)"UseOffscreenRenderingForScreenshotsOn", PyvtkPVRenderView_UseOffscreenRenderingForScreenshotsOn, METH_VARARGS,
   (char*)"V.UseOffscreenRenderingForScreenshotsOn()\nC++: void UseOffscreenRenderingForScreenshotsOn()\n\nSet or get whether offscreen rendering should be used during\nCaptureWindow calls. On Apple machines, this flag has no effect.\n"},
  {(char*)"UseOffscreenRenderingForScreenshotsOff", PyvtkPVRenderView_UseOffscreenRenderingForScreenshotsOff, METH_VARARGS,
   (char*)"V.UseOffscreenRenderingForScreenshotsOff()\nC++: void UseOffscreenRenderingForScreenshotsOff()\n\nSet or get whether offscreen rendering should be used during\nCaptureWindow calls. On Apple machines, this flag has no effect.\n"},
  {(char*)"GetUseOffscreenRenderingForScreenshots", PyvtkPVRenderView_GetUseOffscreenRenderingForScreenshots, METH_VARARGS,
   (char*)"V.GetUseOffscreenRenderingForScreenshots() -> bool\nC++: bool GetUseOffscreenRenderingForScreenshots()\n\nSet or get whether offscreen rendering should be used during\nCaptureWindow calls. On Apple machines, this flag has no effect.\n"},
  {(char*)"SetUseOffscreenRendering", PyvtkPVRenderView_SetUseOffscreenRendering, METH_VARARGS,
   (char*)"V.SetUseOffscreenRendering(bool)\nC++: virtual void SetUseOffscreenRendering(bool)\n\nGet/Set whether to use offscreen rendering for all rendering.\nThis is merely a suggestion. If --use-offscreen-rendering command\nline option is specified, then setting this flag to 0 on that\nprocess has no effect. Setting it to true, however, will ensure\nthat even is\n--use-offscreen-rendering is not specified, it will use offscreen\n    rendering.\n"},
  {(char*)"UseOffscreenRenderingOn", PyvtkPVRenderView_UseOffscreenRenderingOn, METH_VARARGS,
   (char*)"V.UseOffscreenRenderingOn()\nC++: void UseOffscreenRenderingOn()\n\nGet/Set whether to use offscreen rendering for all rendering.\nThis is merely a suggestion. If --use-offscreen-rendering command\nline option is specified, then setting this flag to 0 on that\nprocess has no effect. Setting it to true, however, will ensure\nthat even is\n--use-offscreen-rendering is not specified, it will use offscreen\n    rendering.\n"},
  {(char*)"UseOffscreenRenderingOff", PyvtkPVRenderView_UseOffscreenRenderingOff, METH_VARARGS,
   (char*)"V.UseOffscreenRenderingOff()\nC++: void UseOffscreenRenderingOff()\n\nGet/Set whether to use offscreen rendering for all rendering.\nThis is merely a suggestion. If --use-offscreen-rendering command\nline option is specified, then setting this flag to 0 on that\nprocess has no effect. Setting it to true, however, will ensure\nthat even is\n--use-offscreen-rendering is not specified, it will use offscreen\n    rendering.\n"},
  {(char*)"GetUseOffscreenRendering", PyvtkPVRenderView_GetUseOffscreenRendering, METH_VARARGS,
   (char*)"V.GetUseOffscreenRendering() -> bool\nC++: bool GetUseOffscreenRendering()\n\nGet/Set whether to use offscreen rendering for all rendering.\nThis is merely a suggestion. If --use-offscreen-rendering command\nline option is specified, then setting this flag to 0 on that\nprocess has no effect. Setting it to true, however, will ensure\nthat even is\n--use-offscreen-rendering is not specified, it will use offscreen\n    rendering.\n"},
  {(char*)"GetRemoteRenderingAvailable", PyvtkPVRenderView_GetRemoteRenderingAvailable, METH_VARARGS,
   (char*)"V.GetRemoteRenderingAvailable() -> bool\nC++: bool GetRemoteRenderingAvailable()\n\nReturns if remote-rendering is possible on the current group of\nprocesses.\n"},
  {(char*)"RemoteRenderingAvailableOff", PyvtkPVRenderView_RemoteRenderingAvailableOff, METH_VARARGS,
   (char*)"V.RemoteRenderingAvailableOff()\nC++: void RemoteRenderingAvailableOff()\n\nReturns if remote-rendering is possible on the current group of\nprocesses.\n"},
  {(char*)"GetUsedLODForLastRender", PyvtkPVRenderView_GetUsedLODForLastRender, METH_VARARGS,
   (char*)"V.GetUsedLODForLastRender() -> bool\nC++: bool GetUsedLODForLastRender()\n\nReturns true if the most recent render used LOD.\n"},
  {(char*)"InvalidateCachedSelection", PyvtkPVRenderView_InvalidateCachedSelection, METH_VARARGS,
   (char*)"V.InvalidateCachedSelection()\nC++: void InvalidateCachedSelection()\n\nInvalidates cached selection. Called explicitly when view proxy\nthinks the cache may have become obsolete.@CallOnAllProcessess\n"},
  {(char*)"GetZbufferDataAtPoint", PyvtkPVRenderView_GetZbufferDataAtPoint, METH_VARARGS,
   (char*)"V.GetZbufferDataAtPoint(int, int) -> float\nC++: double GetZbufferDataAtPoint(int x, int y)\n\nReturns the z-buffer value at the given\nlocation.@CallOnClientOnly\n"},
  {(char*)"SetPiece", PyvtkPVRenderView_SetPiece, METH_VARARGS | METH_STATIC,
   (char*)"V.SetPiece(vtkInformation, vtkPVDataRepresentation, vtkDataObject,\n     int)\nC++: static void SetPiece(vtkInformation *info,\n    vtkPVDataRepresentation *repr, vtkDataObject *data,\n    unsigned long trueSize=0)\n\nConvenience methods used by representations to pass represented\ndata. If trueSize is non-zero, then that's the size used in\nmaking decisions about LOD/remote rendering etc and not the\nactual size of the dataset.\n"},
  {(char*)"GetPieceProducer", PyvtkPVRenderView_GetPieceProducer, METH_VARARGS | METH_STATIC,
   (char*)"V.GetPieceProducer(vtkInformation, vtkPVDataRepresentation)\n    -> vtkAlgorithmOutput\nC++: static vtkAlgorithmOutput *GetPieceProducer(\n    vtkInformation *info, vtkPVDataRepresentation *repr)\n\nConvenience methods used by representations to pass represented\ndata. If trueSize is non-zero, then that's the size used in\nmaking decisions about LOD/remote rendering etc and not the\nactual size of the dataset.\n"},
  {(char*)"SetPieceLOD", PyvtkPVRenderView_SetPieceLOD, METH_VARARGS | METH_STATIC,
   (char*)"V.SetPieceLOD(vtkInformation, vtkPVDataRepresentation,\n    vtkDataObject)\nC++: static void SetPieceLOD(vtkInformation *info,\n    vtkPVDataRepresentation *repr, vtkDataObject *data)\n\nConvenience methods used by representations to pass represented\ndata. If trueSize is non-zero, then that's the size used in\nmaking decisions about LOD/remote rendering etc and not the\nactual size of the dataset.\n"},
  {(char*)"GetPieceProducerLOD", PyvtkPVRenderView_GetPieceProducerLOD, METH_VARARGS | METH_STATIC,
   (char*)"V.GetPieceProducerLOD(vtkInformation, vtkPVDataRepresentation)\n    -> vtkAlgorithmOutput\nC++: static vtkAlgorithmOutput *GetPieceProducerLOD(\n    vtkInformation *info, vtkPVDataRepresentation *repr)\n\nConvenience methods used by representations to pass represented\ndata. If trueSize is non-zero, then that's the size used in\nmaking decisions about LOD/remote rendering etc and not the\nactual size of the dataset.\n"},
  {(char*)"MarkAsRedistributable", PyvtkPVRenderView_MarkAsRedistributable, METH_VARARGS | METH_STATIC,
   (char*)"V.MarkAsRedistributable(vtkInformation, vtkPVDataRepresentation,\n    bool)\nC++: static void MarkAsRedistributable(vtkInformation *info,\n    vtkPVDataRepresentation *repr, bool value=true)\n\nConvenience methods used by representations to pass represented\ndata. If trueSize is non-zero, then that's the size used in\nmaking decisions about LOD/remote rendering etc and not the\nactual size of the dataset.\n"},
  {(char*)"SetGeometryBounds", PyvtkPVRenderView_SetGeometryBounds, METH_VARARGS | METH_STATIC,
   (char*)"V.SetGeometryBounds(vtkInformation, [float, float, float, float,\n    float, float], vtkMatrix4x4)\nC++: static void SetGeometryBounds(vtkInformation *info,\n    double bounds[6], vtkMatrix4x4 *transform=NULL)\n\nConvenience methods used by representations to pass represented\ndata. If trueSize is non-zero, then that's the size used in\nmaking decisions about LOD/remote rendering etc and not the\nactual size of the dataset.\n"},
  {(char*)"SetStreamable", PyvtkPVRenderView_SetStreamable, METH_VARARGS | METH_STATIC,
   (char*)"V.SetStreamable(vtkInformation, vtkPVDataRepresentation, bool)\nC++: static void SetStreamable(vtkInformation *info,\n    vtkPVDataRepresentation *repr, bool streamable)\n\nConvenience methods used by representations to pass represented\ndata. If trueSize is non-zero, then that's the size used in\nmaking decisions about LOD/remote rendering etc and not the\nactual size of the dataset.\n"},
  {(char*)"SetNextStreamedPiece", PyvtkPVRenderView_SetNextStreamedPiece, METH_VARARGS | METH_STATIC,
   (char*)"V.SetNextStreamedPiece(vtkInformation, vtkPVDataRepresentation,\n    vtkDataObject)\nC++: static void SetNextStreamedPiece(vtkInformation *info,\n    vtkPVDataRepresentation *repr, vtkDataObject *piece)\n\nConvenience methods used by representations to pass represented\ndata. If trueSize is non-zero, then that's the size used in\nmaking decisions about LOD/remote rendering etc and not the\nactual size of the dataset.\n"},
  {(char*)"GetCurrentStreamedPiece", PyvtkPVRenderView_GetCurrentStreamedPiece, METH_VARARGS | METH_STATIC,
   (char*)"V.GetCurrentStreamedPiece(vtkInformation, vtkPVDataRepresentation)\n     -> vtkDataObject\nC++: static vtkDataObject *GetCurrentStreamedPiece(\n    vtkInformation *info, vtkPVDataRepresentation *repr)\n\nConvenience methods used by representations to pass represented\ndata. If trueSize is non-zero, then that's the size used in\nmaking decisions about LOD/remote rendering etc and not the\nactual size of the dataset.\n"},
  {(char*)"SetDeliverToAllProcesses", PyvtkPVRenderView_SetDeliverToAllProcesses, METH_VARARGS | METH_STATIC,
   (char*)"V.SetDeliverToAllProcesses(vtkInformation,\n    vtkPVDataRepresentation, bool)\nC++: static void SetDeliverToAllProcesses(vtkInformation *info,\n    vtkPVDataRepresentation *repr, bool clone)\n\nRequests the view to deliver the pieces produced by the repr to\nall processes after a gather to the root node to merge the\ndatasets generated by each process.\n"},
  {(char*)"SetDeliverToClientAndRenderingProcesses", PyvtkPVRenderView_SetDeliverToClientAndRenderingProcesses, METH_VARARGS | METH_STATIC,
   (char*)"V.SetDeliverToClientAndRenderingProcesses(vtkInformation,\n    vtkPVDataRepresentation, bool, bool)\nC++: static void SetDeliverToClientAndRenderingProcesses(\n    vtkInformation *info, vtkPVDataRepresentation *repr,\n    bool deliver_to_client, bool gather_before_delivery)\n\nRequests the view to deliver the data to the client always. This\nis essential for representation that render in the non-composited\nviews e.g. the text-source representation. If\nSetDeliverToAllProcesses() is true, this is redundant.\ngather_before_delivery can be used to indicate if the data on the\nserver-nodes must be gathered to the root node before shipping to\nthe client. If gather_before_delivery is false, only the data\nfrom the root node will be sent to the client without any\nparallel communication.\n"},
  {(char*)"SetOrderedCompositingInformation", PyvtkPVRenderView_SetOrderedCompositingInformation, METH_VARARGS | METH_STATIC,
   (char*)"V.SetOrderedCompositingInformation(vtkInformation,\n    vtkPVDataRepresentation, vtkExtentTranslator, (int, int, int,\n    int, int, int), (float, float, float), (float, float, float))\nC++: static void SetOrderedCompositingInformation(\n    vtkInformation *info, vtkPVDataRepresentation *repr,\n    vtkExtentTranslator *translator, const int whole_extents[6],\n    const double origin[3], const double spacing[3])\n\nPass the structured-meta-data for determining rendering order for\nordered compositing.\n"},
  {(char*)"SetRequiresDistributedRendering", PyvtkPVRenderView_SetRequiresDistributedRendering, METH_VARARGS | METH_STATIC,
   (char*)"V.SetRequiresDistributedRendering(vtkInformation,\n    vtkPVDataRepresentation, bool, bool)\nC++: static void SetRequiresDistributedRendering(\n    vtkInformation *info, vtkPVDataRepresentation *repr,\n    bool value, bool for_lod=false)\n\nSome representation only work when remote rendering or local\nrendering. Use this method in REQUEST_UPDATE() pass to tell the\nview if the representation requires a particular mode. Note, only\nuse this to \"require\" a remote or local render. value == true\nindicates that the representation requires distributed rendering,\nvalue == false indicates the representation can only render\nproperty on the client or root node.\n"},
  {(char*)"SetRequiresDistributedRenderingLOD", PyvtkPVRenderView_SetRequiresDistributedRenderingLOD, METH_VARARGS | METH_STATIC,
   (char*)"V.SetRequiresDistributedRenderingLOD(vtkInformation,\n    vtkPVDataRepresentation, bool)\nC++: static void SetRequiresDistributedRenderingLOD(\n    vtkInformation *info, vtkPVDataRepresentation *repr,\n    bool value)\n\nSome representation only work when remote rendering or local\nrendering. Use this method in REQUEST_UPDATE() pass to tell the\nview if the representation requires a particular mode. Note, only\nuse this to \"require\" a remote or local render. value == true\nindicates that the representation requires distributed rendering,\nvalue == false indicates the representation can only render\nproperty on the client or root node.\n"},
  {(char*)"RegisterPropForHardwareSelection", PyvtkPVRenderView_RegisterPropForHardwareSelection, METH_VARARGS,
   (char*)"V.RegisterPropForHardwareSelection(vtkPVDataRepresentation,\n    vtkProp)\nC++: void RegisterPropForHardwareSelection(\n    vtkPVDataRepresentation *repr, vtkProp *prop)\n\nRepresentations that support hardware (render-buffer based)\nselection, should register the prop that they use for selection\nrendering. They can do that in the\nvtkPVDataRepresentation::AddToView() implementation.\n"},
  {(char*)"UnRegisterPropForHardwareSelection", PyvtkPVRenderView_UnRegisterPropForHardwareSelection, METH_VARARGS,
   (char*)"V.UnRegisterPropForHardwareSelection(vtkPVDataRepresentation,\n    vtkProp)\nC++: void UnRegisterPropForHardwareSelection(\n    vtkPVDataRepresentation *repr, vtkProp *prop)\n\nRepresentations that support hardware (render-buffer based)\nselection, should register the prop that they use for selection\nrendering. They can do that in the\nvtkPVDataRepresentation::AddToView() implementation.\n"},
  {(char*)"SetLightSwitch", PyvtkPVRenderView_SetLightSwitch, METH_VARARGS,
   (char*)"V.SetLightSwitch(bool)\nC++: void SetLightSwitch(bool enable)\n\nTurn on/off the default light in the 3D renderer.\n"},
  {(char*)"GetLightSwitch", PyvtkPVRenderView_GetLightSwitch, METH_VARARGS,
   (char*)"V.GetLightSwitch() -> bool\nC++: bool GetLightSwitch()\n\nTurn on/off the default light in the 3D renderer.\n"},
  {(char*)"LightSwitchOn", PyvtkPVRenderView_LightSwitchOn, METH_VARARGS,
   (char*)"V.LightSwitchOn()\nC++: void LightSwitchOn()\n\nTurn on/off the default light in the 3D renderer.\n"},
  {(char*)"LightSwitchOff", PyvtkPVRenderView_LightSwitchOff, METH_VARARGS,
   (char*)"V.LightSwitchOff()\nC++: void LightSwitchOff()\n\nTurn on/off the default light in the 3D renderer.\n"},
  {(char*)"SetShowAnnotation", PyvtkPVRenderView_SetShowAnnotation, METH_VARARGS,
   (char*)"V.SetShowAnnotation(bool)\nC++: void SetShowAnnotation(bool val)\n\nEnable/disable showing of annotation for developers.\n"},
  {(char*)"SetOrientationAxesInteractivity", PyvtkPVRenderView_SetOrientationAxesInteractivity, METH_VARARGS,
   (char*)"V.SetOrientationAxesInteractivity(bool)\nC++: virtual void SetOrientationAxesInteractivity(bool)\n\n"},
  {(char*)"SetOrientationAxesVisibility", PyvtkPVRenderView_SetOrientationAxesVisibility, METH_VARARGS,
   (char*)"V.SetOrientationAxesVisibility(bool)\nC++: virtual void SetOrientationAxesVisibility(bool)\n\n"},
  {(char*)"SetOrientationAxesLabelColor", PyvtkPVRenderView_SetOrientationAxesLabelColor, METH_VARARGS,
   (char*)"V.SetOrientationAxesLabelColor(float, float, float)\nC++: void SetOrientationAxesLabelColor(double r, double g,\n    double b)\n\n"},
  {(char*)"SetOrientationAxesOutlineColor", PyvtkPVRenderView_SetOrientationAxesOutlineColor, METH_VARARGS,
   (char*)"V.SetOrientationAxesOutlineColor(float, float, float)\nC++: void SetOrientationAxesOutlineColor(double r, double g,\n    double b)\n\n"},
  {(char*)"SetCenterAxesVisibility", PyvtkPVRenderView_SetCenterAxesVisibility, METH_VARARGS,
   (char*)"V.SetCenterAxesVisibility(bool)\nC++: virtual void SetCenterAxesVisibility(bool)\n\n"},
  {(char*)"SetCenterOfRotation", PyvtkPVRenderView_SetCenterOfRotation, METH_VARARGS,
   (char*)"V.SetCenterOfRotation(float, float, float)\nC++: void SetCenterOfRotation(double x, double y, double z)\n\n"},
  {(char*)"SetRotationFactor", PyvtkPVRenderView_SetRotationFactor, METH_VARARGS,
   (char*)"V.SetRotationFactor(float)\nC++: void SetRotationFactor(double factor)\n\n"},
  {(char*)"SetNonInteractiveRenderDelay", PyvtkPVRenderView_SetNonInteractiveRenderDelay, METH_VARARGS,
   (char*)"V.SetNonInteractiveRenderDelay(float)\nC++: void SetNonInteractiveRenderDelay(double seconds)\n\n"},
  {(char*)"SetKeyLightWarmth", PyvtkPVRenderView_SetKeyLightWarmth, METH_VARARGS,
   (char*)"V.SetKeyLightWarmth(float)\nC++: void SetKeyLightWarmth(double val)\n\n"},
  {(char*)"SetKeyLightIntensity", PyvtkPVRenderView_SetKeyLightIntensity, METH_VARARGS,
   (char*)"V.SetKeyLightIntensity(float)\nC++: void SetKeyLightIntensity(double val)\n\n"},
  {(char*)"SetKeyLightElevation", PyvtkPVRenderView_SetKeyLightElevation, METH_VARARGS,
   (char*)"V.SetKeyLightElevation(float)\nC++: void SetKeyLightElevation(double val)\n\n"},
  {(char*)"SetKeyLightAzimuth", PyvtkPVRenderView_SetKeyLightAzimuth, METH_VARARGS,
   (char*)"V.SetKeyLightAzimuth(float)\nC++: void SetKeyLightAzimuth(double val)\n\n"},
  {(char*)"SetFillLightWarmth", PyvtkPVRenderView_SetFillLightWarmth, METH_VARARGS,
   (char*)"V.SetFillLightWarmth(float)\nC++: void SetFillLightWarmth(double val)\n\n"},
  {(char*)"SetKeyToFillRatio", PyvtkPVRenderView_SetKeyToFillRatio, METH_VARARGS,
   (char*)"V.SetKeyToFillRatio(float)\nC++: void SetKeyToFillRatio(double val)\n\n"},
  {(char*)"SetFillLightElevation", PyvtkPVRenderView_SetFillLightElevation, METH_VARARGS,
   (char*)"V.SetFillLightElevation(float)\nC++: void SetFillLightElevation(double val)\n\n"},
  {(char*)"SetFillLightAzimuth", PyvtkPVRenderView_SetFillLightAzimuth, METH_VARARGS,
   (char*)"V.SetFillLightAzimuth(float)\nC++: void SetFillLightAzimuth(double val)\n\n"},
  {(char*)"SetBackLightWarmth", PyvtkPVRenderView_SetBackLightWarmth, METH_VARARGS,
   (char*)"V.SetBackLightWarmth(float)\nC++: void SetBackLightWarmth(double val)\n\n"},
  {(char*)"SetKeyToBackRatio", PyvtkPVRenderView_SetKeyToBackRatio, METH_VARARGS,
   (char*)"V.SetKeyToBackRatio(float)\nC++: void SetKeyToBackRatio(double val)\n\n"},
  {(char*)"SetBackLightElevation", PyvtkPVRenderView_SetBackLightElevation, METH_VARARGS,
   (char*)"V.SetBackLightElevation(float)\nC++: void SetBackLightElevation(double val)\n\n"},
  {(char*)"SetBackLightAzimuth", PyvtkPVRenderView_SetBackLightAzimuth, METH_VARARGS,
   (char*)"V.SetBackLightAzimuth(float)\nC++: void SetBackLightAzimuth(double val)\n\n"},
  {(char*)"SetHeadLightWarmth", PyvtkPVRenderView_SetHeadLightWarmth, METH_VARARGS,
   (char*)"V.SetHeadLightWarmth(float)\nC++: void SetHeadLightWarmth(double val)\n\n"},
  {(char*)"SetKeyToHeadRatio", PyvtkPVRenderView_SetKeyToHeadRatio, METH_VARARGS,
   (char*)"V.SetKeyToHeadRatio(float)\nC++: void SetKeyToHeadRatio(double val)\n\n"},
  {(char*)"SetMaintainLuminance", PyvtkPVRenderView_SetMaintainLuminance, METH_VARARGS,
   (char*)"V.SetMaintainLuminance(int)\nC++: void SetMaintainLuminance(int val)\n\n"},
  {(char*)"SetUseDepthPeeling", PyvtkPVRenderView_SetUseDepthPeeling, METH_VARARGS,
   (char*)"V.SetUseDepthPeeling(int)\nC++: virtual void SetUseDepthPeeling(int val)\n\n"},
  {(char*)"SetMaximumNumberOfPeels", PyvtkPVRenderView_SetMaximumNumberOfPeels, METH_VARARGS,
   (char*)"V.SetMaximumNumberOfPeels(int)\nC++: virtual void SetMaximumNumberOfPeels(int val)\n\n"},
  {(char*)"SetBackground", PyvtkPVRenderView_SetBackground, METH_VARARGS,
   (char*)"V.SetBackground(float, float, float)\nC++: virtual void SetBackground(double r, double g, double b)\n\n"},
  {(char*)"SetBackground2", PyvtkPVRenderView_SetBackground2, METH_VARARGS,
   (char*)"V.SetBackground2(float, float, float)\nC++: virtual void SetBackground2(double r, double g, double b)\n\n"},
  {(char*)"SetBackgroundTexture", PyvtkPVRenderView_SetBackgroundTexture, METH_VARARGS,
   (char*)"V.SetBackgroundTexture(vtkTexture)\nC++: virtual void SetBackgroundTexture(vtkTexture *val)\n\n"},
  {(char*)"SetGradientBackground", PyvtkPVRenderView_SetGradientBackground, METH_VARARGS,
   (char*)"V.SetGradientBackground(int)\nC++: virtual void SetGradientBackground(int val)\n\n"},
  {(char*)"SetTexturedBackground", PyvtkPVRenderView_SetTexturedBackground, METH_VARARGS,
   (char*)"V.SetTexturedBackground(int)\nC++: virtual void SetTexturedBackground(int val)\n\n"},
  {(char*)"SetAmbientColor", PyvtkPVRenderView_SetAmbientColor, METH_VARARGS,
   (char*)"V.SetAmbientColor(float, float, float)\nC++: void SetAmbientColor(double r, double g, double b)\n\n"},
  {(char*)"SetSpecularColor", PyvtkPVRenderView_SetSpecularColor, METH_VARARGS,
   (char*)"V.SetSpecularColor(float, float, float)\nC++: void SetSpecularColor(double r, double g, double b)\n\n"},
  {(char*)"SetDiffuseColor", PyvtkPVRenderView_SetDiffuseColor, METH_VARARGS,
   (char*)"V.SetDiffuseColor(float, float, float)\nC++: void SetDiffuseColor(double r, double g, double b)\n\n"},
  {(char*)"SetIntensity", PyvtkPVRenderView_SetIntensity, METH_VARARGS,
   (char*)"V.SetIntensity(float)\nC++: void SetIntensity(double val)\n\n"},
  {(char*)"SetLightType", PyvtkPVRenderView_SetLightType, METH_VARARGS,
   (char*)"V.SetLightType(int)\nC++: void SetLightType(int val)\n\n"},
  {(char*)"SetStereoCapableWindow", PyvtkPVRenderView_SetStereoCapableWindow, METH_VARARGS,
   (char*)"V.SetStereoCapableWindow(int)\nC++: void SetStereoCapableWindow(int val)\n\n"},
  {(char*)"SetStereoRender", PyvtkPVRenderView_SetStereoRender, METH_VARARGS,
   (char*)"V.SetStereoRender(int)\nC++: void SetStereoRender(int val)\n\n"},
  {(char*)"SetStereoType", PyvtkPVRenderView_SetStereoType, METH_VARARGS,
   (char*)"V.SetStereoType(int)\nC++: void SetStereoType(int val)\n\n"},
  {(char*)"SetMultiSamples", PyvtkPVRenderView_SetMultiSamples, METH_VARARGS,
   (char*)"V.SetMultiSamples(int)\nC++: void SetMultiSamples(int val)\n\n"},
  {(char*)"SetAlphaBitPlanes", PyvtkPVRenderView_SetAlphaBitPlanes, METH_VARARGS,
   (char*)"V.SetAlphaBitPlanes(int)\nC++: void SetAlphaBitPlanes(int val)\n\n"},
  {(char*)"SetStencilCapable", PyvtkPVRenderView_SetStencilCapable, METH_VARARGS,
   (char*)"V.SetStencilCapable(int)\nC++: void SetStencilCapable(int val)\n\n"},
  {(char*)"SetCamera2DManipulators", PyvtkPVRenderView_SetCamera2DManipulators, METH_VARARGS,
   (char*)"V.SetCamera2DManipulators((int, int, int, int, int, int, int, int,\n     int))\nC++: virtual void SetCamera2DManipulators(\n    const int manipulators[9])\n\n"},
  {(char*)"SetCamera3DManipulators", PyvtkPVRenderView_SetCamera3DManipulators, METH_VARARGS,
   (char*)"V.SetCamera3DManipulators((int, int, int, int, int, int, int, int,\n     int))\nC++: virtual void SetCamera3DManipulators(\n    const int manipulators[9])\n\n"},
  {(char*)"SetCameraManipulators", PyvtkPVRenderView_SetCameraManipulators, METH_VARARGS,
   (char*)"V.SetCameraManipulators(vtkPVInteractorStyle, (int, int, int, int,\n     int, int, int, int, int))\nC++: void SetCameraManipulators(vtkPVInteractorStyle *style,\n    const int manipulators[9])\n\n"},
  {(char*)"Update", PyvtkPVRenderView_Update, METH_VARARGS,
   (char*)"V.Update()\nC++: virtual void Update()\n\nOverridden to synchronize information among processes whenever\ndata changes. The vtkSMViewProxy ensures that this method is\ncalled only when something has changed on the view-proxy or one\nof its representations or their inputs. Hence it's okay to do\nsome extra inter-process communication here.\n"},
  {(char*)"UpdateLOD", PyvtkPVRenderView_UpdateLOD, METH_VARARGS,
   (char*)"V.UpdateLOD()\nC++: virtual void UpdateLOD()\n\nAsks representations to update their LOD geometries.\n"},
  {(char*)"GetUseLODForInteractiveRender", PyvtkPVRenderView_GetUseLODForInteractiveRender, METH_VARARGS,
   (char*)"V.GetUseLODForInteractiveRender() -> bool\nC++: bool GetUseLODForInteractiveRender()\n\nReturns whether the view will use LOD rendering for the next\nInteractiveRender() call based on the geometry sizes determined\nby the most recent call to Update().\n"},
  {(char*)"GetUseDistributedRenderingForStillRender", PyvtkPVRenderView_GetUseDistributedRenderingForStillRender, METH_VARARGS,
   (char*)"V.GetUseDistributedRenderingForStillRender() -> bool\nC++: bool GetUseDistributedRenderingForStillRender()\n\nReturns whether the view will use distributed rendering for the\nnext StillRender() call based on the geometry sizes determined by\nthe most recent call to Update().\n"},
  {(char*)"GetUseDistributedRenderingForInteractiveRender", PyvtkPVRenderView_GetUseDistributedRenderingForInteractiveRender, METH_VARARGS,
   (char*)"V.GetUseDistributedRenderingForInteractiveRender() -> bool\nC++: bool GetUseDistributedRenderingForInteractiveRender()\n\nReturns whether the view will use distributed rendering for the\nnext InteractiveRender() call based on the geometry sizes\ndetermined by the most recent calls to Update() and UpdateLOD().\n"},
  {(char*)"GetStillRenderProcesses", PyvtkPVRenderView_GetStillRenderProcesses, METH_VARARGS,
   (char*)"V.GetStillRenderProcesses() -> int\nC++: vtkTypeUInt32 GetStillRenderProcesses()\n\nReturns the processes (vtkPVSession::ServerFlags) that are to be\ninvolved in the next StillRender() call based on the decisions\nmade during the most recent Update().\n"},
  {(char*)"GetInteractiveRenderProcesses", PyvtkPVRenderView_GetInteractiveRenderProcesses, METH_VARARGS,
   (char*)"V.GetInteractiveRenderProcesses() -> int\nC++: vtkTypeUInt32 GetInteractiveRenderProcesses()\n\nReturns the processes (vtkPVSession::ServerFlags) that are to be\ninvolved in the next InteractiveRender() call based on the\ndecisions made during the most recent Update() and UpdateLOD().\n"},
  {(char*)"GetDataDistributionMode", PyvtkPVRenderView_GetDataDistributionMode, METH_VARARGS,
   (char*)"V.GetDataDistributionMode(bool) -> int\nC++: int GetDataDistributionMode(bool use_remote_rendering)\n\nReturns the data distribution mode to use.\n"},
  {(char*)"GetDeliveryManager", PyvtkPVRenderView_GetDeliveryManager, METH_VARARGS,
   (char*)"V.GetDeliveryManager() -> vtkPVDataDeliveryManager\nC++: vtkPVDataDeliveryManager *GetDeliveryManager()\n\nProvides access to the geometry storage for this view.\n"},
  {(char*)"Deliver", PyvtkPVRenderView_Deliver, METH_VARARGS,
   (char*)"V.Deliver(int, int, [int, ...])\nC++: void Deliver(int use_lod, unsigned int size,\n    unsigned int *representation_ids)\n\nCalled on all processes to request data-delivery for the list of\nrepresentations. Note this method has to be called on all\nprocesses or it may lead to deadlock.\n"},
  {(char*)"GetUseOrderedCompositing", PyvtkPVRenderView_GetUseOrderedCompositing, METH_VARARGS,
   (char*)"V.GetUseOrderedCompositing() -> bool\nC++: bool GetUseOrderedCompositing()\n\nReturns true when ordered compositing is needed on the current\ngroup of processes. Note that unlike most other functions, this\nmay return different values on different processes e.g.\n\\li always false on client and dataserver\n\\li true on pvserver or renderserver if opacity < 1 or volume\n    present, else\n    false\n"},
  {(char*)"GetRenderEmptyImages", PyvtkPVRenderView_GetRenderEmptyImages, METH_VARARGS,
   (char*)"V.GetRenderEmptyImages() -> bool\nC++: bool GetRenderEmptyImages()\n\nReturns true when the compositor should not use the empty images\noptimization.\n"},
  {(char*)"GetUpdateTimeStamp", PyvtkPVRenderView_GetUpdateTimeStamp, METH_VARARGS,
   (char*)"V.GetUpdateTimeStamp() -> int\nC++: unsigned long GetUpdateTimeStamp()\n\nProvides access to the time when Update() was last called.\n"},
  {(char*)"CopyViewUpdateOptions", PyvtkPVRenderView_CopyViewUpdateOptions, METH_VARARGS,
   (char*)"V.CopyViewUpdateOptions(vtkPVRenderView)\nC++: void CopyViewUpdateOptions(vtkPVRenderView *otherView)\n\nCopy internal fields that are used for rendering decision such as\nremote/local rendering, composite and so on. This method was\nintroduced for the quad view so internal views could use the\ndecision that were made in the main view.\n"},
  {(char*)"AddPropToRenderer", PyvtkPVRenderView_AddPropToRenderer, METH_VARARGS,
   (char*)"V.AddPropToRenderer(vtkProp)\nC++: void AddPropToRenderer(vtkProp *prop)\n\nAdd props directly to the view.\n"},
  {(char*)"RemovePropFromRenderer", PyvtkPVRenderView_RemovePropFromRenderer, METH_VARARGS,
   (char*)"V.RemovePropFromRenderer(vtkProp)\nC++: void RemovePropFromRenderer(vtkProp *prop)\n\nAdd props directly to the view.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkPVRenderView_StaticNew()
{
  return vtkPVRenderView::New();
}

PyObject *PyVTKClass_vtkPVRenderViewNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkPVRenderView_StaticNew,
    PyvtkPVRenderView_Methods,
    "vtkPVRenderView", modulename,
    NULL, NULL,
    PyvtkPVRenderView_Doc(),
    PyVTKClass_vtkPVViewNew(modulename));

  if (cls)
    {
    PyObject *d = PyVTKClass_GetDict(cls);
    PyObject *o;

    PyType_Ready(&PyvtkPVRenderView_InteractionModes_Type);
    PyvtkPVRenderView_InteractionModes_Type.tp_new = NULL;

    o = (PyObject *)&PyvtkPVRenderView_InteractionModes_Type;
    if (o && PyDict_SetItemString(d, (char *)"InteractionModes", o) != 0)
      {
      Py_DECREF(o);
      }

    for (int c = 0; c < 5; c++)
      {
      typedef vtkPVRenderView::InteractionModes cxx_enum_type;

      static const struct { const char *name; cxx_enum_type value; }
        constants[5] = {
          { "INTERACTION_MODE_3D", vtkPVRenderView::INTERACTION_MODE_3D },
          { "INTERACTION_MODE_2D", vtkPVRenderView::INTERACTION_MODE_2D },
          { "INTERACTION_MODE_SELECTION", vtkPVRenderView::INTERACTION_MODE_SELECTION },
          { "INTERACTION_MODE_ZOOM", vtkPVRenderView::INTERACTION_MODE_ZOOM },
          { "INTERACTION_MODE_POLYGON", vtkPVRenderView::INTERACTION_MODE_POLYGON },
        };

      o = PyvtkPVRenderView_InteractionModes_FromEnum(constants[c].value);
      if (o)
        {
        PyDict_SetItemString(d, (char *)constants[c].name, o);
        Py_DECREF(o);
        }
      }

    }

  return cls;
}

const char **PyvtkPVRenderView_Doc()
{
  static const char *docstring[] = {
    "vtkPVRenderView - Render View for ParaView.\n\n",
    "Superclass: vtkPVView\n\n",
    "vtkRenderView equivalent that is specialized for ParaView.\nvtkRenderView handles polygonal rendering for ParaView in all the\ndifferent modes of operation. vtkPVRenderView instance must be\ncreated on all involved processes. vtkPVRenderView uses the\ninformation about what process it has been created on to decide what\npart of the \"rendering\" happens on the process.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPVRenderView(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPVRenderViewNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPVRenderView", o) != 0)
    {
    Py_DECREF(o);
    }

}

