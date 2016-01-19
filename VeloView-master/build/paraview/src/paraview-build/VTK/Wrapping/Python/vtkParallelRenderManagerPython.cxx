// python wrapper for vtkParallelRenderManager
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkParallelRenderManager.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkParallelRenderManager(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkParallelRenderManagerNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkParallelRenderManager_Doc();

#ifndef DECLARED_PyvtkParallelRenderManager_Tags_Type
extern VTK_PYTHON_EXPORT PyTypeObject PyvtkParallelRenderManager_Tags_Type;
#define DECLARED_PyvtkParallelRenderManager_Tags_Type
#endif

PyTypeObject PyvtkParallelRenderManager_Tags_Type = {
  PyObject_HEAD_INIT(&PyType_Type)
  0,
  (char*)"Tags", // tp_name
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

PyObject *PyvtkParallelRenderManager_Tags_FromEnum(int val)
{
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkParallelRenderManager_Tags_Type);
  self->ob_ival = val;
  return (PyObject *)self;
}


static PyObject *
PyvtkParallelRenderManager_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelRenderManager *op = static_cast<vtkParallelRenderManager *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkParallelRenderManager::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkParallelRenderManager_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelRenderManager *op = static_cast<vtkParallelRenderManager *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkParallelRenderManager::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkParallelRenderManager_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelRenderManager *op = static_cast<vtkParallelRenderManager *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkParallelRenderManager *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkParallelRenderManager::NewInstance());

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
PyvtkParallelRenderManager_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkParallelRenderManager *tempr = vtkParallelRenderManager::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkParallelRenderManager_MakeRenderWindow(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MakeRenderWindow");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelRenderManager *op = static_cast<vtkParallelRenderManager *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkRenderWindow *tempr = (ap.IsBound() ?
      op->MakeRenderWindow() :
      op->vtkParallelRenderManager::MakeRenderWindow());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkParallelRenderManager_MakeRenderer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MakeRenderer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelRenderManager *op = static_cast<vtkParallelRenderManager *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkRenderer *tempr = (ap.IsBound() ?
      op->MakeRenderer() :
      op->vtkParallelRenderManager::MakeRenderer());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkParallelRenderManager_GetRenderWindow(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRenderWindow");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelRenderManager *op = static_cast<vtkParallelRenderManager *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkRenderWindow *tempr = (ap.IsBound() ?
      op->GetRenderWindow() :
      op->vtkParallelRenderManager::GetRenderWindow());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkParallelRenderManager_SetRenderWindow(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRenderWindow");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelRenderManager *op = static_cast<vtkParallelRenderManager *>(vp);

  vtkRenderWindow *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkRenderWindow"))
    {
    if (ap.IsBound())
      {
      op->SetRenderWindow(temp0);
      }
    else
      {
      op->vtkParallelRenderManager::SetRenderWindow(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkParallelRenderManager_GetController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelRenderManager *op = static_cast<vtkParallelRenderManager *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkMultiProcessController *tempr = (ap.IsBound() ?
      op->GetController() :
      op->vtkParallelRenderManager::GetController());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkParallelRenderManager_SetController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelRenderManager *op = static_cast<vtkParallelRenderManager *>(vp);

  vtkMultiProcessController *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMultiProcessController"))
    {
    if (ap.IsBound())
      {
      op->SetController(temp0);
      }
    else
      {
      op->vtkParallelRenderManager::SetController(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkParallelRenderManager_InitializePieces(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InitializePieces");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelRenderManager *op = static_cast<vtkParallelRenderManager *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->InitializePieces();
      }
    else
      {
      op->vtkParallelRenderManager::InitializePieces();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkParallelRenderManager_InitializeOffScreen(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InitializeOffScreen");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelRenderManager *op = static_cast<vtkParallelRenderManager *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->InitializeOffScreen();
      }
    else
      {
      op->vtkParallelRenderManager::InitializeOffScreen();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkParallelRenderManager_StartInteractor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StartInteractor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelRenderManager *op = static_cast<vtkParallelRenderManager *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->StartInteractor();
      }
    else
      {
      op->vtkParallelRenderManager::StartInteractor();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkParallelRenderManager_StartServices(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StartServices");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelRenderManager *op = static_cast<vtkParallelRenderManager *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->StartServices();
      }
    else
      {
      op->vtkParallelRenderManager::StartServices();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkParallelRenderManager_StopServices(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StopServices");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelRenderManager *op = static_cast<vtkParallelRenderManager *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->StopServices();
      }
    else
      {
      op->vtkParallelRenderManager::StopServices();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkParallelRenderManager_StartRender(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StartRender");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelRenderManager *op = static_cast<vtkParallelRenderManager *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->StartRender();
      }
    else
      {
      op->vtkParallelRenderManager::StartRender();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkParallelRenderManager_EndRender(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EndRender");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelRenderManager *op = static_cast<vtkParallelRenderManager *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->EndRender();
      }
    else
      {
      op->vtkParallelRenderManager::EndRender();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkParallelRenderManager_SatelliteStartRender(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SatelliteStartRender");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelRenderManager *op = static_cast<vtkParallelRenderManager *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SatelliteStartRender();
      }
    else
      {
      op->vtkParallelRenderManager::SatelliteStartRender();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkParallelRenderManager_SatelliteEndRender(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SatelliteEndRender");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelRenderManager *op = static_cast<vtkParallelRenderManager *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SatelliteEndRender();
      }
    else
      {
      op->vtkParallelRenderManager::SatelliteEndRender();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkParallelRenderManager_RenderRMI(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderRMI");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelRenderManager *op = static_cast<vtkParallelRenderManager *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->RenderRMI();
      }
    else
      {
      op->vtkParallelRenderManager::RenderRMI();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkParallelRenderManager_ResetCamera(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ResetCamera");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelRenderManager *op = static_cast<vtkParallelRenderManager *>(vp);

  vtkRenderer *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkRenderer"))
    {
    if (ap.IsBound())
      {
      op->ResetCamera(temp0);
      }
    else
      {
      op->vtkParallelRenderManager::ResetCamera(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkParallelRenderManager_ResetCameraClippingRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ResetCameraClippingRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelRenderManager *op = static_cast<vtkParallelRenderManager *>(vp);

  vtkRenderer *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkRenderer"))
    {
    if (ap.IsBound())
      {
      op->ResetCameraClippingRange(temp0);
      }
    else
      {
      op->vtkParallelRenderManager::ResetCameraClippingRange(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkParallelRenderManager_ComputeVisiblePropBoundsRMI(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeVisiblePropBoundsRMI");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelRenderManager *op = static_cast<vtkParallelRenderManager *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->ComputeVisiblePropBoundsRMI(temp0);
      }
    else
      {
      op->vtkParallelRenderManager::ComputeVisiblePropBoundsRMI(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkParallelRenderManager_InitializeRMIs(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InitializeRMIs");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelRenderManager *op = static_cast<vtkParallelRenderManager *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->InitializeRMIs();
      }
    else
      {
      op->vtkParallelRenderManager::InitializeRMIs();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkParallelRenderManager_ResetAllCameras(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ResetAllCameras");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelRenderManager *op = static_cast<vtkParallelRenderManager *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ResetAllCameras();
      }
    else
      {
      op->vtkParallelRenderManager::ResetAllCameras();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkParallelRenderManager_ComputeVisiblePropBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeVisiblePropBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelRenderManager *op = static_cast<vtkParallelRenderManager *>(vp);

  vtkRenderer *temp0 = NULL;
  double temp1[6];
  double save1[6];
  const int size1 = 6;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkRenderer") &&
      ap.GetArray(temp1, size1))
    {
    ap.SaveArray(temp1, save1, size1);

    if (ap.IsBound())
      {
      op->ComputeVisiblePropBounds(temp0, temp1);
      }
    else
      {
      op->vtkParallelRenderManager::ComputeVisiblePropBounds(temp0, temp1);
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
PyvtkParallelRenderManager_SetParallelRendering(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetParallelRendering");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelRenderManager *op = static_cast<vtkParallelRenderManager *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetParallelRendering(temp0);
      }
    else
      {
      op->vtkParallelRenderManager::SetParallelRendering(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkParallelRenderManager_GetParallelRendering(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetParallelRendering");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelRenderManager *op = static_cast<vtkParallelRenderManager *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetParallelRendering() :
      op->vtkParallelRenderManager::GetParallelRendering());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkParallelRenderManager_ParallelRenderingOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ParallelRenderingOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelRenderManager *op = static_cast<vtkParallelRenderManager *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ParallelRenderingOn();
      }
    else
      {
      op->vtkParallelRenderManager::ParallelRenderingOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkParallelRenderManager_ParallelRenderingOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ParallelRenderingOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelRenderManager *op = static_cast<vtkParallelRenderManager *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ParallelRenderingOff();
      }
    else
      {
      op->vtkParallelRenderManager::ParallelRenderingOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkParallelRenderManager_SetRenderEventPropagation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRenderEventPropagation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelRenderManager *op = static_cast<vtkParallelRenderManager *>(vp);

  int temp0;
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
      op->vtkParallelRenderManager::SetRenderEventPropagation(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkParallelRenderManager_GetRenderEventPropagation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRenderEventPropagation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelRenderManager *op = static_cast<vtkParallelRenderManager *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetRenderEventPropagation() :
      op->vtkParallelRenderManager::GetRenderEventPropagation());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkParallelRenderManager_RenderEventPropagationOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderEventPropagationOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelRenderManager *op = static_cast<vtkParallelRenderManager *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->RenderEventPropagationOn();
      }
    else
      {
      op->vtkParallelRenderManager::RenderEventPropagationOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkParallelRenderManager_RenderEventPropagationOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderEventPropagationOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelRenderManager *op = static_cast<vtkParallelRenderManager *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->RenderEventPropagationOff();
      }
    else
      {
      op->vtkParallelRenderManager::RenderEventPropagationOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkParallelRenderManager_SetDefaultRenderEventPropagation(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SetDefaultRenderEventPropagation");

  bool temp0 = false;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkParallelRenderManager::SetDefaultRenderEventPropagation(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkParallelRenderManager_GetDefaultRenderEventPropagation(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetDefaultRenderEventPropagation");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    bool tempr = vtkParallelRenderManager::GetDefaultRenderEventPropagation();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkParallelRenderManager_SetUseCompositing(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseCompositing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelRenderManager *op = static_cast<vtkParallelRenderManager *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetUseCompositing(temp0);
      }
    else
      {
      op->vtkParallelRenderManager::SetUseCompositing(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkParallelRenderManager_GetUseCompositing(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseCompositing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelRenderManager *op = static_cast<vtkParallelRenderManager *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetUseCompositing() :
      op->vtkParallelRenderManager::GetUseCompositing());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkParallelRenderManager_UseCompositingOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseCompositingOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelRenderManager *op = static_cast<vtkParallelRenderManager *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->UseCompositingOn();
      }
    else
      {
      op->vtkParallelRenderManager::UseCompositingOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkParallelRenderManager_UseCompositingOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseCompositingOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelRenderManager *op = static_cast<vtkParallelRenderManager *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->UseCompositingOff();
      }
    else
      {
      op->vtkParallelRenderManager::UseCompositingOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkParallelRenderManager_SetImageReductionFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetImageReductionFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelRenderManager *op = static_cast<vtkParallelRenderManager *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetImageReductionFactor(temp0);
      }
    else
      {
      op->vtkParallelRenderManager::SetImageReductionFactor(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkParallelRenderManager_GetImageReductionFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetImageReductionFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelRenderManager *op = static_cast<vtkParallelRenderManager *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetImageReductionFactor() :
      op->vtkParallelRenderManager::GetImageReductionFactor());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkParallelRenderManager_SetMaxImageReductionFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaxImageReductionFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelRenderManager *op = static_cast<vtkParallelRenderManager *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetMaxImageReductionFactor(temp0);
      }
    else
      {
      op->vtkParallelRenderManager::SetMaxImageReductionFactor(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkParallelRenderManager_GetMaxImageReductionFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaxImageReductionFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelRenderManager *op = static_cast<vtkParallelRenderManager *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetMaxImageReductionFactor() :
      op->vtkParallelRenderManager::GetMaxImageReductionFactor());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkParallelRenderManager_SetImageReductionFactorForUpdateRate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetImageReductionFactorForUpdateRate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelRenderManager *op = static_cast<vtkParallelRenderManager *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetImageReductionFactorForUpdateRate(temp0);
      }
    else
      {
      op->vtkParallelRenderManager::SetImageReductionFactorForUpdateRate(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkParallelRenderManager_SetAutoImageReductionFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAutoImageReductionFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelRenderManager *op = static_cast<vtkParallelRenderManager *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetAutoImageReductionFactor(temp0);
      }
    else
      {
      op->vtkParallelRenderManager::SetAutoImageReductionFactor(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkParallelRenderManager_GetAutoImageReductionFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAutoImageReductionFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelRenderManager *op = static_cast<vtkParallelRenderManager *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetAutoImageReductionFactor() :
      op->vtkParallelRenderManager::GetAutoImageReductionFactor());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkParallelRenderManager_AutoImageReductionFactorOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AutoImageReductionFactorOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelRenderManager *op = static_cast<vtkParallelRenderManager *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->AutoImageReductionFactorOn();
      }
    else
      {
      op->vtkParallelRenderManager::AutoImageReductionFactorOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkParallelRenderManager_AutoImageReductionFactorOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AutoImageReductionFactorOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelRenderManager *op = static_cast<vtkParallelRenderManager *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->AutoImageReductionFactorOff();
      }
    else
      {
      op->vtkParallelRenderManager::AutoImageReductionFactorOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkParallelRenderManager_GetRenderTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRenderTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelRenderManager *op = static_cast<vtkParallelRenderManager *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetRenderTime() :
      op->vtkParallelRenderManager::GetRenderTime());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkParallelRenderManager_GetImageProcessingTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetImageProcessingTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelRenderManager *op = static_cast<vtkParallelRenderManager *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetImageProcessingTime() :
      op->vtkParallelRenderManager::GetImageProcessingTime());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkParallelRenderManager_GetSyncRenderWindowRenderers(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSyncRenderWindowRenderers");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelRenderManager *op = static_cast<vtkParallelRenderManager *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetSyncRenderWindowRenderers() :
      op->vtkParallelRenderManager::GetSyncRenderWindowRenderers());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkParallelRenderManager_SetSyncRenderWindowRenderers(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSyncRenderWindowRenderers");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelRenderManager *op = static_cast<vtkParallelRenderManager *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetSyncRenderWindowRenderers(temp0);
      }
    else
      {
      op->vtkParallelRenderManager::SetSyncRenderWindowRenderers(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkParallelRenderManager_SyncRenderWindowRenderersOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SyncRenderWindowRenderersOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelRenderManager *op = static_cast<vtkParallelRenderManager *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SyncRenderWindowRenderersOn();
      }
    else
      {
      op->vtkParallelRenderManager::SyncRenderWindowRenderersOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkParallelRenderManager_SyncRenderWindowRenderersOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SyncRenderWindowRenderersOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelRenderManager *op = static_cast<vtkParallelRenderManager *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SyncRenderWindowRenderersOff();
      }
    else
      {
      op->vtkParallelRenderManager::SyncRenderWindowRenderersOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkParallelRenderManager_AddRenderer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddRenderer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelRenderManager *op = static_cast<vtkParallelRenderManager *>(vp);

  vtkRenderer *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkRenderer"))
    {
    if (ap.IsBound())
      {
      op->AddRenderer(temp0);
      }
    else
      {
      op->vtkParallelRenderManager::AddRenderer(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkParallelRenderManager_RemoveRenderer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveRenderer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelRenderManager *op = static_cast<vtkParallelRenderManager *>(vp);

  vtkRenderer *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkRenderer"))
    {
    if (ap.IsBound())
      {
      op->RemoveRenderer(temp0);
      }
    else
      {
      op->vtkParallelRenderManager::RemoveRenderer(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkParallelRenderManager_RemoveAllRenderers(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveAllRenderers");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelRenderManager *op = static_cast<vtkParallelRenderManager *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->RemoveAllRenderers();
      }
    else
      {
      op->vtkParallelRenderManager::RemoveAllRenderers();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkParallelRenderManager_SetWriteBackImages(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWriteBackImages");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelRenderManager *op = static_cast<vtkParallelRenderManager *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetWriteBackImages(temp0);
      }
    else
      {
      op->vtkParallelRenderManager::SetWriteBackImages(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkParallelRenderManager_GetWriteBackImages(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWriteBackImages");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelRenderManager *op = static_cast<vtkParallelRenderManager *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetWriteBackImages() :
      op->vtkParallelRenderManager::GetWriteBackImages());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkParallelRenderManager_WriteBackImagesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WriteBackImagesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelRenderManager *op = static_cast<vtkParallelRenderManager *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->WriteBackImagesOn();
      }
    else
      {
      op->vtkParallelRenderManager::WriteBackImagesOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkParallelRenderManager_WriteBackImagesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WriteBackImagesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelRenderManager *op = static_cast<vtkParallelRenderManager *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->WriteBackImagesOff();
      }
    else
      {
      op->vtkParallelRenderManager::WriteBackImagesOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkParallelRenderManager_SetMagnifyImages(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMagnifyImages");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelRenderManager *op = static_cast<vtkParallelRenderManager *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetMagnifyImages(temp0);
      }
    else
      {
      op->vtkParallelRenderManager::SetMagnifyImages(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkParallelRenderManager_GetMagnifyImages(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMagnifyImages");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelRenderManager *op = static_cast<vtkParallelRenderManager *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetMagnifyImages() :
      op->vtkParallelRenderManager::GetMagnifyImages());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkParallelRenderManager_MagnifyImagesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MagnifyImagesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelRenderManager *op = static_cast<vtkParallelRenderManager *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->MagnifyImagesOn();
      }
    else
      {
      op->vtkParallelRenderManager::MagnifyImagesOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkParallelRenderManager_MagnifyImagesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MagnifyImagesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelRenderManager *op = static_cast<vtkParallelRenderManager *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->MagnifyImagesOff();
      }
    else
      {
      op->vtkParallelRenderManager::MagnifyImagesOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkParallelRenderManager_SetMagnifyImageMethod(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMagnifyImageMethod");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelRenderManager *op = static_cast<vtkParallelRenderManager *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetMagnifyImageMethod(temp0);
      }
    else
      {
      op->vtkParallelRenderManager::SetMagnifyImageMethod(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkParallelRenderManager_GetMagnifyImageMethod(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMagnifyImageMethod");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelRenderManager *op = static_cast<vtkParallelRenderManager *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetMagnifyImageMethod() :
      op->vtkParallelRenderManager::GetMagnifyImageMethod());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkParallelRenderManager_SetMagnifyImageMethodToNearest(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMagnifyImageMethodToNearest");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelRenderManager *op = static_cast<vtkParallelRenderManager *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetMagnifyImageMethodToNearest();
      }
    else
      {
      op->vtkParallelRenderManager::SetMagnifyImageMethodToNearest();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkParallelRenderManager_SetMagnifyImageMethodToLinear(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMagnifyImageMethodToLinear");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelRenderManager *op = static_cast<vtkParallelRenderManager *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetMagnifyImageMethodToLinear();
      }
    else
      {
      op->vtkParallelRenderManager::SetMagnifyImageMethodToLinear();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkParallelRenderManager_MagnifyImage(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MagnifyImage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelRenderManager *op = static_cast<vtkParallelRenderManager *>(vp);

  vtkUnsignedCharArray *temp0 = NULL;
  int temp1[2];
  const int size1 = 2;
  vtkUnsignedCharArray *temp2 = NULL;
  int temp3[2];
  const int size3 = 2;
  int temp4[4];
  const int size4 = 4;
  int temp5[4];
  const int size5 = 4;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(6) &&
      ap.GetVTKObject(temp0, "vtkUnsignedCharArray") &&
      ap.GetArray(temp1, size1) &&
      ap.GetVTKObject(temp2, "vtkUnsignedCharArray") &&
      ap.GetArray(temp3, size3) &&
      ap.GetArray(temp4, size4) &&
      ap.GetArray(temp5, size5))
    {
    if (ap.IsBound())
      {
      op->MagnifyImage(temp0, temp1, temp2, temp3, temp4, temp5);
      }
    else
      {
      op->vtkParallelRenderManager::MagnifyImage(temp0, temp1, temp2, temp3, temp4, temp5);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkParallelRenderManager_MagnifyImageNearest(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "MagnifyImageNearest");

  vtkUnsignedCharArray *temp0 = NULL;
  int temp1[2];
  const int size1 = 2;
  vtkUnsignedCharArray *temp2 = NULL;
  int temp3[2];
  const int size3 = 2;
  int temp4[4];
  const int size4 = 4;
  int temp5[4];
  const int size5 = 4;
  PyObject *result = NULL;

  if (ap.CheckArgCount(6) &&
      ap.GetVTKObject(temp0, "vtkUnsignedCharArray") &&
      ap.GetArray(temp1, size1) &&
      ap.GetVTKObject(temp2, "vtkUnsignedCharArray") &&
      ap.GetArray(temp3, size3) &&
      ap.GetArray(temp4, size4) &&
      ap.GetArray(temp5, size5))
    {
    vtkParallelRenderManager::MagnifyImageNearest(temp0, temp1, temp2, temp3, temp4, temp5);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkParallelRenderManager_MagnifyImageLinear(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "MagnifyImageLinear");

  vtkUnsignedCharArray *temp0 = NULL;
  int temp1[2];
  const int size1 = 2;
  vtkUnsignedCharArray *temp2 = NULL;
  int temp3[2];
  const int size3 = 2;
  int temp4[4];
  const int size4 = 4;
  int temp5[4];
  const int size5 = 4;
  PyObject *result = NULL;

  if (ap.CheckArgCount(6) &&
      ap.GetVTKObject(temp0, "vtkUnsignedCharArray") &&
      ap.GetArray(temp1, size1) &&
      ap.GetVTKObject(temp2, "vtkUnsignedCharArray") &&
      ap.GetArray(temp3, size3) &&
      ap.GetArray(temp4, size4) &&
      ap.GetArray(temp5, size5))
    {
    vtkParallelRenderManager::MagnifyImageLinear(temp0, temp1, temp2, temp3, temp4, temp5);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkParallelRenderManager_GetPixelData_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPixelData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelRenderManager *op = static_cast<vtkParallelRenderManager *>(vp);

  vtkUnsignedCharArray *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkUnsignedCharArray"))
    {
    if (ap.IsBound())
      {
      op->GetPixelData(temp0);
      }
    else
      {
      op->vtkParallelRenderManager::GetPixelData(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkParallelRenderManager_GetPixelData_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPixelData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelRenderManager *op = static_cast<vtkParallelRenderManager *>(vp);

  int temp0;
  int temp1;
  int temp2;
  int temp3;
  vtkUnsignedCharArray *temp4 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(5) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetVTKObject(temp4, "vtkUnsignedCharArray"))
    {
    if (ap.IsBound())
      {
      op->GetPixelData(temp0, temp1, temp2, temp3, temp4);
      }
    else
      {
      op->vtkParallelRenderManager::GetPixelData(temp0, temp1, temp2, temp3, temp4);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkParallelRenderManager_GetPixelData(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkParallelRenderManager_GetPixelData_s1(self, args);
    case 5:
      return PyvtkParallelRenderManager_GetPixelData_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetPixelData");
  return NULL;
}



static PyObject *
PyvtkParallelRenderManager_GetReducedPixelData_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetReducedPixelData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelRenderManager *op = static_cast<vtkParallelRenderManager *>(vp);

  vtkUnsignedCharArray *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkUnsignedCharArray"))
    {
    if (ap.IsBound())
      {
      op->GetReducedPixelData(temp0);
      }
    else
      {
      op->vtkParallelRenderManager::GetReducedPixelData(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkParallelRenderManager_GetReducedPixelData_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetReducedPixelData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelRenderManager *op = static_cast<vtkParallelRenderManager *>(vp);

  int temp0;
  int temp1;
  int temp2;
  int temp3;
  vtkUnsignedCharArray *temp4 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(5) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetVTKObject(temp4, "vtkUnsignedCharArray"))
    {
    if (ap.IsBound())
      {
      op->GetReducedPixelData(temp0, temp1, temp2, temp3, temp4);
      }
    else
      {
      op->vtkParallelRenderManager::GetReducedPixelData(temp0, temp1, temp2, temp3, temp4);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkParallelRenderManager_GetReducedPixelData(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkParallelRenderManager_GetReducedPixelData_s1(self, args);
    case 5:
      return PyvtkParallelRenderManager_GetReducedPixelData_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetReducedPixelData");
  return NULL;
}



static PyObject *
PyvtkParallelRenderManager_GetFullImageSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFullImageSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelRenderManager *op = static_cast<vtkParallelRenderManager *>(vp);

  int sizer = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int *tempr = (ap.IsBound() ?
      op->GetFullImageSize() :
      op->vtkParallelRenderManager::GetFullImageSize());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkParallelRenderManager_GetReducedImageSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetReducedImageSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelRenderManager *op = static_cast<vtkParallelRenderManager *>(vp);

  int sizer = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int *tempr = (ap.IsBound() ?
      op->GetReducedImageSize() :
      op->vtkParallelRenderManager::GetReducedImageSize());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkParallelRenderManager_TileWindows(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TileWindows");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelRenderManager *op = static_cast<vtkParallelRenderManager *>(vp);

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
      op->TileWindows(temp0, temp1, temp2);
      }
    else
      {
      op->vtkParallelRenderManager::TileWindows(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkParallelRenderManager_SetUseRGBA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseRGBA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelRenderManager *op = static_cast<vtkParallelRenderManager *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetUseRGBA(temp0);
      }
    else
      {
      op->vtkParallelRenderManager::SetUseRGBA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkParallelRenderManager_GetUseRGBA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseRGBA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelRenderManager *op = static_cast<vtkParallelRenderManager *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetUseRGBA() :
      op->vtkParallelRenderManager::GetUseRGBA());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkParallelRenderManager_SetForceRenderWindowSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetForceRenderWindowSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelRenderManager *op = static_cast<vtkParallelRenderManager *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetForceRenderWindowSize(temp0);
      }
    else
      {
      op->vtkParallelRenderManager::SetForceRenderWindowSize(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkParallelRenderManager_GetForceRenderWindowSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetForceRenderWindowSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelRenderManager *op = static_cast<vtkParallelRenderManager *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetForceRenderWindowSize() :
      op->vtkParallelRenderManager::GetForceRenderWindowSize());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkParallelRenderManager_SetForcedRenderWindowSize_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetForcedRenderWindowSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelRenderManager *op = static_cast<vtkParallelRenderManager *>(vp);

  int temp0;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetForcedRenderWindowSize(temp0, temp1);
      }
    else
      {
      op->vtkParallelRenderManager::SetForcedRenderWindowSize(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkParallelRenderManager_SetForcedRenderWindowSize_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetForcedRenderWindowSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelRenderManager *op = static_cast<vtkParallelRenderManager *>(vp);

  int temp0[2];
  const int size0 = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetForcedRenderWindowSize(temp0);
      }
    else
      {
      op->vtkParallelRenderManager::SetForcedRenderWindowSize(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkParallelRenderManager_SetForcedRenderWindowSize(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkParallelRenderManager_SetForcedRenderWindowSize_s1(self, args);
    case 1:
      return PyvtkParallelRenderManager_SetForcedRenderWindowSize_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetForcedRenderWindowSize");
  return NULL;
}



static PyObject *
PyvtkParallelRenderManager_GetForcedRenderWindowSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetForcedRenderWindowSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelRenderManager *op = static_cast<vtkParallelRenderManager *>(vp);

  int sizer = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int *tempr = (ap.IsBound() ?
      op->GetForcedRenderWindowSize() :
      op->vtkParallelRenderManager::GetForcedRenderWindowSize());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkParallelRenderManager_CheckForAbortRender(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CheckForAbortRender");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelRenderManager *op = static_cast<vtkParallelRenderManager *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->CheckForAbortRender();
      }
    else
      {
      op->vtkParallelRenderManager::CheckForAbortRender();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkParallelRenderManager_CheckForAbortComposite(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CheckForAbortComposite");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelRenderManager *op = static_cast<vtkParallelRenderManager *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->CheckForAbortComposite() :
      op->vtkParallelRenderManager::CheckForAbortComposite());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkParallelRenderManager_SetUseBackBuffer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseBackBuffer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelRenderManager *op = static_cast<vtkParallelRenderManager *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetUseBackBuffer(temp0);
      }
    else
      {
      op->vtkParallelRenderManager::SetUseBackBuffer(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkParallelRenderManager_GetUseBackBuffer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseBackBuffer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelRenderManager *op = static_cast<vtkParallelRenderManager *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetUseBackBuffer() :
      op->vtkParallelRenderManager::GetUseBackBuffer());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkParallelRenderManager_UseBackBufferOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseBackBufferOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelRenderManager *op = static_cast<vtkParallelRenderManager *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->UseBackBufferOn();
      }
    else
      {
      op->vtkParallelRenderManager::UseBackBufferOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkParallelRenderManager_UseBackBufferOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseBackBufferOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelRenderManager *op = static_cast<vtkParallelRenderManager *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->UseBackBufferOff();
      }
    else
      {
      op->vtkParallelRenderManager::UseBackBufferOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkParallelRenderManager_SetSynchronizeTileProperties(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSynchronizeTileProperties");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelRenderManager *op = static_cast<vtkParallelRenderManager *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetSynchronizeTileProperties(temp0);
      }
    else
      {
      op->vtkParallelRenderManager::SetSynchronizeTileProperties(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkParallelRenderManager_GetSynchronizeTileProperties(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSynchronizeTileProperties");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelRenderManager *op = static_cast<vtkParallelRenderManager *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetSynchronizeTileProperties() :
      op->vtkParallelRenderManager::GetSynchronizeTileProperties());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkParallelRenderManager_SynchronizeTilePropertiesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SynchronizeTilePropertiesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelRenderManager *op = static_cast<vtkParallelRenderManager *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SynchronizeTilePropertiesOn();
      }
    else
      {
      op->vtkParallelRenderManager::SynchronizeTilePropertiesOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkParallelRenderManager_SynchronizeTilePropertiesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SynchronizeTilePropertiesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelRenderManager *op = static_cast<vtkParallelRenderManager *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SynchronizeTilePropertiesOff();
      }
    else
      {
      op->vtkParallelRenderManager::SynchronizeTilePropertiesOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkParallelRenderManager_GenericStartRenderCallback(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenericStartRenderCallback");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelRenderManager *op = static_cast<vtkParallelRenderManager *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->GenericStartRenderCallback();
      }
    else
      {
      op->vtkParallelRenderManager::GenericStartRenderCallback();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkParallelRenderManager_GenericEndRenderCallback(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenericEndRenderCallback");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelRenderManager *op = static_cast<vtkParallelRenderManager *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->GenericEndRenderCallback();
      }
    else
      {
      op->vtkParallelRenderManager::GenericEndRenderCallback();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkParallelRenderManager_Methods[] = {
  {(char*)"GetClassName", PyvtkParallelRenderManager_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkParallelRenderManager_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkParallelRenderManager_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkParallelRenderManager\nC++: vtkParallelRenderManager *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkParallelRenderManager_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkParallelRenderManager\nC++: vtkParallelRenderManager *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"MakeRenderWindow", PyvtkParallelRenderManager_MakeRenderWindow, METH_VARARGS,
   (char*)"V.MakeRenderWindow() -> vtkRenderWindow\nC++: virtual vtkRenderWindow *MakeRenderWindow()\n\nBuilds a vtkRenderWindow compatible with this render manager. \nThe user program is responsible for registering the render window\nwith the SetRenderWindow method and calling Delete.  It is not\nadvisable to use a parallel render manager with a render window\nthat was not built with this method.\n"},
  {(char*)"MakeRenderer", PyvtkParallelRenderManager_MakeRenderer, METH_VARARGS,
   (char*)"V.MakeRenderer() -> vtkRenderer\nC++: virtual vtkRenderer *MakeRenderer()\n\nBuilds a vtkRenderer compatible with this render manager. \n(Should we also register it?)  The user program is responsible\nfor calling Delete.  It is not advisable to use a parallel render\nmanager with a renderer that was not built with this method.\n"},
  {(char*)"GetRenderWindow", PyvtkParallelRenderManager_GetRenderWindow, METH_VARARGS,
   (char*)"V.GetRenderWindow() -> vtkRenderWindow\nC++: vtkRenderWindow *GetRenderWindow()\n\nSet/Get the RenderWindow to use for compositing. We add a start\nand end observer to the window.\n"},
  {(char*)"SetRenderWindow", PyvtkParallelRenderManager_SetRenderWindow, METH_VARARGS,
   (char*)"V.SetRenderWindow(vtkRenderWindow)\nC++: virtual void SetRenderWindow(vtkRenderWindow *renWin)\n\nSet/Get the RenderWindow to use for compositing. We add a start\nand end observer to the window.\n"},
  {(char*)"GetController", PyvtkParallelRenderManager_GetController, METH_VARARGS,
   (char*)"V.GetController() -> vtkMultiProcessController\nC++: vtkMultiProcessController *GetController()\n\nSet/Get the vtkMultiProcessController which will handle\ncommunications for the parallel rendering.\n"},
  {(char*)"SetController", PyvtkParallelRenderManager_SetController, METH_VARARGS,
   (char*)"V.SetController(vtkMultiProcessController)\nC++: virtual void SetController(\n    vtkMultiProcessController *controller)\n\nSet/Get the vtkMultiProcessController which will handle\ncommunications for the parallel rendering.\n"},
  {(char*)"InitializePieces", PyvtkParallelRenderManager_InitializePieces, METH_VARARGS,
   (char*)"V.InitializePieces()\nC++: virtual void InitializePieces()\n\nThis method sets the piece and number of pieces for each actor\nwith a polydata mapper.\n"},
  {(char*)"InitializeOffScreen", PyvtkParallelRenderManager_InitializeOffScreen, METH_VARARGS,
   (char*)"V.InitializeOffScreen()\nC++: virtual void InitializeOffScreen()\n\nMake all rendering windows not viewable set as off screen\nrendering. To make all renderwindows on screen rendering again,\ncall OffScreenRenderingOff on all the render windows.  This class\nassumes the window on root node is the only one viewable. \nSubclasses should change this as necessary.\n"},
  {(char*)"StartInteractor", PyvtkParallelRenderManager_StartInteractor, METH_VARARGS,
   (char*)"V.StartInteractor()\nC++: virtual void StartInteractor()\n\nInitializes the RMIs and then, if on root node, starts the\ninteractor on the attached render window.  Otherwise, starts\nprocessing RMIs. When the interactor returns, it breaks the RMI\nlistening on all other processors.\n"},
  {(char*)"StartServices", PyvtkParallelRenderManager_StartServices, METH_VARARGS,
   (char*)"V.StartServices()\nC++: virtual void StartServices()\n\nIf on node other than root, starts serving RMI requests for\nparallel renders.\n"},
  {(char*)"StopServices", PyvtkParallelRenderManager_StopServices, METH_VARARGS,
   (char*)"V.StopServices()\nC++: virtual void StopServices()\n\nIf on root node, stops the RMI processing on all service nodes.\n"},
  {(char*)"StartRender", PyvtkParallelRenderManager_StartRender, METH_VARARGS,
   (char*)"V.StartRender()\nC++: virtual void StartRender()\n\nCallbacks that initialize and finish rendering and other tasks.\n"},
  {(char*)"EndRender", PyvtkParallelRenderManager_EndRender, METH_VARARGS,
   (char*)"V.EndRender()\nC++: virtual void EndRender()\n\nCallbacks that initialize and finish rendering and other tasks.\n"},
  {(char*)"SatelliteStartRender", PyvtkParallelRenderManager_SatelliteStartRender, METH_VARARGS,
   (char*)"V.SatelliteStartRender()\nC++: virtual void SatelliteStartRender()\n\nCallbacks that initialize and finish rendering and other tasks.\n"},
  {(char*)"SatelliteEndRender", PyvtkParallelRenderManager_SatelliteEndRender, METH_VARARGS,
   (char*)"V.SatelliteEndRender()\nC++: virtual void SatelliteEndRender()\n\nCallbacks that initialize and finish rendering and other tasks.\n"},
  {(char*)"RenderRMI", PyvtkParallelRenderManager_RenderRMI, METH_VARARGS,
   (char*)"V.RenderRMI()\nC++: virtual void RenderRMI()\n\nCallbacks that initialize and finish rendering and other tasks.\n"},
  {(char*)"ResetCamera", PyvtkParallelRenderManager_ResetCamera, METH_VARARGS,
   (char*)"V.ResetCamera(vtkRenderer)\nC++: virtual void ResetCamera(vtkRenderer *ren)\n\nCallbacks that initialize and finish rendering and other tasks.\n"},
  {(char*)"ResetCameraClippingRange", PyvtkParallelRenderManager_ResetCameraClippingRange, METH_VARARGS,
   (char*)"V.ResetCameraClippingRange(vtkRenderer)\nC++: virtual void ResetCameraClippingRange(vtkRenderer *ren)\n\nCallbacks that initialize and finish rendering and other tasks.\n"},
  {(char*)"ComputeVisiblePropBoundsRMI", PyvtkParallelRenderManager_ComputeVisiblePropBoundsRMI, METH_VARARGS,
   (char*)"V.ComputeVisiblePropBoundsRMI(int)\nC++: virtual void ComputeVisiblePropBoundsRMI(int renderId)\n\nCallbacks that initialize and finish rendering and other tasks.\n"},
  {(char*)"InitializeRMIs", PyvtkParallelRenderManager_InitializeRMIs, METH_VARARGS,
   (char*)"V.InitializeRMIs()\nC++: virtual void InitializeRMIs()\n\n"},
  {(char*)"ResetAllCameras", PyvtkParallelRenderManager_ResetAllCameras, METH_VARARGS,
   (char*)"V.ResetAllCameras()\nC++: virtual void ResetAllCameras()\n\nResets the camera of each renderer contained in the RenderWindow.\nShould only be called in the \"root\" process, and all remote\nprocesses must be processing RMIs for this method to complete.\n"},
  {(char*)"ComputeVisiblePropBounds", PyvtkParallelRenderManager_ComputeVisiblePropBounds, METH_VARARGS,
   (char*)"V.ComputeVisiblePropBounds(vtkRenderer, [float, float, float,\n    float, float, float])\nC++: virtual void ComputeVisiblePropBounds(vtkRenderer *ren,\n    double bounds[6])\n\nCalculates the bounds by gathering information from all\nprocesses.\n"},
  {(char*)"SetParallelRendering", PyvtkParallelRenderManager_SetParallelRendering, METH_VARARGS,
   (char*)"V.SetParallelRendering(int)\nC++: void SetParallelRendering(int a)\n\nTurns on/off parallel rendering.  When on (the default) the\nobject responds to render events of the attached window,\npropagates the render event to other processors, and otherwise\nenables the parallel rendering process.\n"},
  {(char*)"GetParallelRendering", PyvtkParallelRenderManager_GetParallelRendering, METH_VARARGS,
   (char*)"V.GetParallelRendering() -> int\nC++: int GetParallelRendering()\n\nTurns on/off parallel rendering.  When on (the default) the\nobject responds to render events of the attached window,\npropagates the render event to other processors, and otherwise\nenables the parallel rendering process.\n"},
  {(char*)"ParallelRenderingOn", PyvtkParallelRenderManager_ParallelRenderingOn, METH_VARARGS,
   (char*)"V.ParallelRenderingOn()\nC++: void ParallelRenderingOn()\n\nTurns on/off parallel rendering.  When on (the default) the\nobject responds to render events of the attached window,\npropagates the render event to other processors, and otherwise\nenables the parallel rendering process.\n"},
  {(char*)"ParallelRenderingOff", PyvtkParallelRenderManager_ParallelRenderingOff, METH_VARARGS,
   (char*)"V.ParallelRenderingOff()\nC++: void ParallelRenderingOff()\n\nTurns on/off parallel rendering.  When on (the default) the\nobject responds to render events of the attached window,\npropagates the render event to other processors, and otherwise\nenables the parallel rendering process.\n"},
  {(char*)"SetRenderEventPropagation", PyvtkParallelRenderManager_SetRenderEventPropagation, METH_VARARGS,
   (char*)"V.SetRenderEventPropagation(int)\nC++: void SetRenderEventPropagation(int a)\n\nTurns on/off render event propagation.  When on (the default) and\nParallelRendering is on, process 0 will send an RMI call to all\nremote processes to perform a synchronized render.  When off,\nrender must be manually called on each process.\n"},
  {(char*)"GetRenderEventPropagation", PyvtkParallelRenderManager_GetRenderEventPropagation, METH_VARARGS,
   (char*)"V.GetRenderEventPropagation() -> int\nC++: int GetRenderEventPropagation()\n\nTurns on/off render event propagation.  When on (the default) and\nParallelRendering is on, process 0 will send an RMI call to all\nremote processes to perform a synchronized render.  When off,\nrender must be manually called on each process.\n"},
  {(char*)"RenderEventPropagationOn", PyvtkParallelRenderManager_RenderEventPropagationOn, METH_VARARGS,
   (char*)"V.RenderEventPropagationOn()\nC++: void RenderEventPropagationOn()\n\nTurns on/off render event propagation.  When on (the default) and\nParallelRendering is on, process 0 will send an RMI call to all\nremote processes to perform a synchronized render.  When off,\nrender must be manually called on each process.\n"},
  {(char*)"RenderEventPropagationOff", PyvtkParallelRenderManager_RenderEventPropagationOff, METH_VARARGS,
   (char*)"V.RenderEventPropagationOff()\nC++: void RenderEventPropagationOff()\n\nTurns on/off render event propagation.  When on (the default) and\nParallelRendering is on, process 0 will send an RMI call to all\nremote processes to perform a synchronized render.  When off,\nrender must be manually called on each process.\n"},
  {(char*)"SetDefaultRenderEventPropagation", PyvtkParallelRenderManager_SetDefaultRenderEventPropagation, METH_VARARGS | METH_STATIC,
   (char*)"V.SetDefaultRenderEventPropagation(bool)\nC++: static void SetDefaultRenderEventPropagation(bool val)\n\nGet/Set the default value used for RenderEventPropagation when a\nnew instance of vtkParallelRenderManager is created. Set to true\nby default.\n"},
  {(char*)"GetDefaultRenderEventPropagation", PyvtkParallelRenderManager_GetDefaultRenderEventPropagation, METH_VARARGS | METH_STATIC,
   (char*)"V.GetDefaultRenderEventPropagation() -> bool\nC++: static bool GetDefaultRenderEventPropagation()\n\nGet/Set the default value used for RenderEventPropagation when a\nnew instance of vtkParallelRenderManager is created. Set to true\nby default.\n"},
  {(char*)"SetUseCompositing", PyvtkParallelRenderManager_SetUseCompositing, METH_VARARGS,
   (char*)"V.SetUseCompositing(int)\nC++: void SetUseCompositing(int a)\n\nThis is used for tiled display rendering.  When data has been\nduplicated on all processes, then we do not need to compositing.\nCameras and renders are still propagated though.\n"},
  {(char*)"GetUseCompositing", PyvtkParallelRenderManager_GetUseCompositing, METH_VARARGS,
   (char*)"V.GetUseCompositing() -> int\nC++: int GetUseCompositing()\n\nThis is used for tiled display rendering.  When data has been\nduplicated on all processes, then we do not need to compositing.\nCameras and renders are still propagated though.\n"},
  {(char*)"UseCompositingOn", PyvtkParallelRenderManager_UseCompositingOn, METH_VARARGS,
   (char*)"V.UseCompositingOn()\nC++: void UseCompositingOn()\n\nThis is used for tiled display rendering.  When data has been\nduplicated on all processes, then we do not need to compositing.\nCameras and renders are still propagated though.\n"},
  {(char*)"UseCompositingOff", PyvtkParallelRenderManager_UseCompositingOff, METH_VARARGS,
   (char*)"V.UseCompositingOff()\nC++: void UseCompositingOff()\n\nThis is used for tiled display rendering.  When data has been\nduplicated on all processes, then we do not need to compositing.\nCameras and renders are still propagated though.\n"},
  {(char*)"SetImageReductionFactor", PyvtkParallelRenderManager_SetImageReductionFactor, METH_VARARGS,
   (char*)"V.SetImageReductionFactor(float)\nC++: virtual void SetImageReductionFactor(double factor)\n\nSet/Get the reduction factor (for sort-last based parallel\nrenderers). The size of rendered image is divided by the\nreduction factor and then is blown up to the size of the current\nvtkRenderWindow.  Setting higher reduction factors enables\nshorter image transfer times (which is often the bottleneck) but\nwill greatly reduce image quality.  A reduction factor of 2 or\ngreater should only be used for intermediate images in\ninteractive applications.  A reduction factor of 1 (or less) will\nresult in no change in image quality.  A parallel render manager\nmay ignore the image reduction factor if it will result in little\nor no performance enhancements (eg. it does not do image space\nmanipulations).\n"},
  {(char*)"GetImageReductionFactor", PyvtkParallelRenderManager_GetImageReductionFactor, METH_VARARGS,
   (char*)"V.GetImageReductionFactor() -> float\nC++: double GetImageReductionFactor()\n\nSet/Get the reduction factor (for sort-last based parallel\nrenderers). The size of rendered image is divided by the\nreduction factor and then is blown up to the size of the current\nvtkRenderWindow.  Setting higher reduction factors enables\nshorter image transfer times (which is often the bottleneck) but\nwill greatly reduce image quality.  A reduction factor of 2 or\ngreater should only be used for intermediate images in\ninteractive applications.  A reduction factor of 1 (or less) will\nresult in no change in image quality.  A parallel render manager\nmay ignore the image reduction factor if it will result in little\nor no performance enhancements (eg. it does not do image space\nmanipulations).\n"},
  {(char*)"SetMaxImageReductionFactor", PyvtkParallelRenderManager_SetMaxImageReductionFactor, METH_VARARGS,
   (char*)"V.SetMaxImageReductionFactor(float)\nC++: void SetMaxImageReductionFactor(double a)\n\n"},
  {(char*)"GetMaxImageReductionFactor", PyvtkParallelRenderManager_GetMaxImageReductionFactor, METH_VARARGS,
   (char*)"V.GetMaxImageReductionFactor() -> float\nC++: double GetMaxImageReductionFactor()\n\n"},
  {(char*)"SetImageReductionFactorForUpdateRate", PyvtkParallelRenderManager_SetImageReductionFactorForUpdateRate, METH_VARARGS,
   (char*)"V.SetImageReductionFactorForUpdateRate(float)\nC++: virtual void SetImageReductionFactorForUpdateRate(\n    double DesiredUpdateRate)\n\nSets the ReductionFactor based on the given desired update rate\nand the rendering metrics taken from the last time\nUpdateServerInfo was called.  Note that if AutoReductionFactor is\non, this function is called with the desired update rate of the\nrender window automatically.\n"},
  {(char*)"SetAutoImageReductionFactor", PyvtkParallelRenderManager_SetAutoImageReductionFactor, METH_VARARGS,
   (char*)"V.SetAutoImageReductionFactor(int)\nC++: void SetAutoImageReductionFactor(int a)\n\nIf on, the ReductionFactor is automatically adjusted to best meet\nthe the DesiredUpdateRate in the current RenderWindow based on\nmetrics from the last render.\n"},
  {(char*)"GetAutoImageReductionFactor", PyvtkParallelRenderManager_GetAutoImageReductionFactor, METH_VARARGS,
   (char*)"V.GetAutoImageReductionFactor() -> int\nC++: int GetAutoImageReductionFactor()\n\nIf on, the ReductionFactor is automatically adjusted to best meet\nthe the DesiredUpdateRate in the current RenderWindow based on\nmetrics from the last render.\n"},
  {(char*)"AutoImageReductionFactorOn", PyvtkParallelRenderManager_AutoImageReductionFactorOn, METH_VARARGS,
   (char*)"V.AutoImageReductionFactorOn()\nC++: void AutoImageReductionFactorOn()\n\nIf on, the ReductionFactor is automatically adjusted to best meet\nthe the DesiredUpdateRate in the current RenderWindow based on\nmetrics from the last render.\n"},
  {(char*)"AutoImageReductionFactorOff", PyvtkParallelRenderManager_AutoImageReductionFactorOff, METH_VARARGS,
   (char*)"V.AutoImageReductionFactorOff()\nC++: void AutoImageReductionFactorOff()\n\nIf on, the ReductionFactor is automatically adjusted to best meet\nthe the DesiredUpdateRate in the current RenderWindow based on\nmetrics from the last render.\n"},
  {(char*)"GetRenderTime", PyvtkParallelRenderManager_GetRenderTime, METH_VARARGS,
   (char*)"V.GetRenderTime() -> float\nC++: double GetRenderTime()\n\nGet rendering metrics.\n"},
  {(char*)"GetImageProcessingTime", PyvtkParallelRenderManager_GetImageProcessingTime, METH_VARARGS,
   (char*)"V.GetImageProcessingTime() -> float\nC++: double GetImageProcessingTime()\n\nGet rendering metrics.\n"},
  {(char*)"GetSyncRenderWindowRenderers", PyvtkParallelRenderManager_GetSyncRenderWindowRenderers, METH_VARARGS,
   (char*)"V.GetSyncRenderWindowRenderers() -> int\nC++: int GetSyncRenderWindowRenderers()\n\nBy default, the state of all renderers in the root's render\nwindow is propagated to the rest of the processes.  In order for\nthis to work, all render windows must have the same renderers in\nthe same order.  If this is not the case, you can turn off the\nSyncRenderWindowRenderers.  When this flag is off, the list of\nrenderers held by this parallel render manager (initially empty)\nis synced.  You can modify the list of renderers with the\nAddRenderer, RemoveRenderer, and RemoveAllRenderers methods.\n"},
  {(char*)"SetSyncRenderWindowRenderers", PyvtkParallelRenderManager_SetSyncRenderWindowRenderers, METH_VARARGS,
   (char*)"V.SetSyncRenderWindowRenderers(int)\nC++: void SetSyncRenderWindowRenderers(int a)\n\nBy default, the state of all renderers in the root's render\nwindow is propagated to the rest of the processes.  In order for\nthis to work, all render windows must have the same renderers in\nthe same order.  If this is not the case, you can turn off the\nSyncRenderWindowRenderers.  When this flag is off, the list of\nrenderers held by this parallel render manager (initially empty)\nis synced.  You can modify the list of renderers with the\nAddRenderer, RemoveRenderer, and RemoveAllRenderers methods.\n"},
  {(char*)"SyncRenderWindowRenderersOn", PyvtkParallelRenderManager_SyncRenderWindowRenderersOn, METH_VARARGS,
   (char*)"V.SyncRenderWindowRenderersOn()\nC++: void SyncRenderWindowRenderersOn()\n\nBy default, the state of all renderers in the root's render\nwindow is propagated to the rest of the processes.  In order for\nthis to work, all render windows must have the same renderers in\nthe same order.  If this is not the case, you can turn off the\nSyncRenderWindowRenderers.  When this flag is off, the list of\nrenderers held by this parallel render manager (initially empty)\nis synced.  You can modify the list of renderers with the\nAddRenderer, RemoveRenderer, and RemoveAllRenderers methods.\n"},
  {(char*)"SyncRenderWindowRenderersOff", PyvtkParallelRenderManager_SyncRenderWindowRenderersOff, METH_VARARGS,
   (char*)"V.SyncRenderWindowRenderersOff()\nC++: void SyncRenderWindowRenderersOff()\n\nBy default, the state of all renderers in the root's render\nwindow is propagated to the rest of the processes.  In order for\nthis to work, all render windows must have the same renderers in\nthe same order.  If this is not the case, you can turn off the\nSyncRenderWindowRenderers.  When this flag is off, the list of\nrenderers held by this parallel render manager (initially empty)\nis synced.  You can modify the list of renderers with the\nAddRenderer, RemoveRenderer, and RemoveAllRenderers methods.\n"},
  {(char*)"AddRenderer", PyvtkParallelRenderManager_AddRenderer, METH_VARARGS,
   (char*)"V.AddRenderer(vtkRenderer)\nC++: virtual void AddRenderer(vtkRenderer *)\n\nBy default, the state of all renderers in the root's render\nwindow is propagated to the rest of the processes.  In order for\nthis to work, all render windows must have the same renderers in\nthe same order.  If this is not the case, you can turn off the\nSyncRenderWindowRenderers.  When this flag is off, the list of\nrenderers held by this parallel render manager (initially empty)\nis synced.  You can modify the list of renderers with the\nAddRenderer, RemoveRenderer, and RemoveAllRenderers methods.\n"},
  {(char*)"RemoveRenderer", PyvtkParallelRenderManager_RemoveRenderer, METH_VARARGS,
   (char*)"V.RemoveRenderer(vtkRenderer)\nC++: virtual void RemoveRenderer(vtkRenderer *)\n\nBy default, the state of all renderers in the root's render\nwindow is propagated to the rest of the processes.  In order for\nthis to work, all render windows must have the same renderers in\nthe same order.  If this is not the case, you can turn off the\nSyncRenderWindowRenderers.  When this flag is off, the list of\nrenderers held by this parallel render manager (initially empty)\nis synced.  You can modify the list of renderers with the\nAddRenderer, RemoveRenderer, and RemoveAllRenderers methods.\n"},
  {(char*)"RemoveAllRenderers", PyvtkParallelRenderManager_RemoveAllRenderers, METH_VARARGS,
   (char*)"V.RemoveAllRenderers()\nC++: virtual void RemoveAllRenderers()\n\nBy default, the state of all renderers in the root's render\nwindow is propagated to the rest of the processes.  In order for\nthis to work, all render windows must have the same renderers in\nthe same order.  If this is not the case, you can turn off the\nSyncRenderWindowRenderers.  When this flag is off, the list of\nrenderers held by this parallel render manager (initially empty)\nis synced.  You can modify the list of renderers with the\nAddRenderer, RemoveRenderer, and RemoveAllRenderers methods.\n"},
  {(char*)"SetWriteBackImages", PyvtkParallelRenderManager_SetWriteBackImages, METH_VARARGS,
   (char*)"V.SetWriteBackImages(int)\nC++: void SetWriteBackImages(int a)\n\nIf on (the default), the result of any image space manipulations\nare written back to the render window frame buffer.  If off, the\nimage stored in the frame buffer may not be correct.  Either way,\nthe correct frame buffer images may be read with\nvtkParallelRenderManager::GetPixelData.  Turning WriteBackImages\noff may result in a speedup if the render window is not visible\nto the user and images are read back for further processing or\ntransit.\n"},
  {(char*)"GetWriteBackImages", PyvtkParallelRenderManager_GetWriteBackImages, METH_VARARGS,
   (char*)"V.GetWriteBackImages() -> int\nC++: int GetWriteBackImages()\n\nIf on (the default), the result of any image space manipulations\nare written back to the render window frame buffer.  If off, the\nimage stored in the frame buffer may not be correct.  Either way,\nthe correct frame buffer images may be read with\nvtkParallelRenderManager::GetPixelData.  Turning WriteBackImages\noff may result in a speedup if the render window is not visible\nto the user and images are read back for further processing or\ntransit.\n"},
  {(char*)"WriteBackImagesOn", PyvtkParallelRenderManager_WriteBackImagesOn, METH_VARARGS,
   (char*)"V.WriteBackImagesOn()\nC++: void WriteBackImagesOn()\n\nIf on (the default), the result of any image space manipulations\nare written back to the render window frame buffer.  If off, the\nimage stored in the frame buffer may not be correct.  Either way,\nthe correct frame buffer images may be read with\nvtkParallelRenderManager::GetPixelData.  Turning WriteBackImages\noff may result in a speedup if the render window is not visible\nto the user and images are read back for further processing or\ntransit.\n"},
  {(char*)"WriteBackImagesOff", PyvtkParallelRenderManager_WriteBackImagesOff, METH_VARARGS,
   (char*)"V.WriteBackImagesOff()\nC++: void WriteBackImagesOff()\n\nIf on (the default), the result of any image space manipulations\nare written back to the render window frame buffer.  If off, the\nimage stored in the frame buffer may not be correct.  Either way,\nthe correct frame buffer images may be read with\nvtkParallelRenderManager::GetPixelData.  Turning WriteBackImages\noff may result in a speedup if the render window is not visible\nto the user and images are read back for further processing or\ntransit.\n"},
  {(char*)"SetMagnifyImages", PyvtkParallelRenderManager_SetMagnifyImages, METH_VARARGS,
   (char*)"V.SetMagnifyImages(int)\nC++: void SetMagnifyImages(int a)\n\nIf on (the default), when the ImageReductionFactor is greater\nthan 1 and WriteBackImages is on, the image will be magnified to\nfill the entire render window.\n"},
  {(char*)"GetMagnifyImages", PyvtkParallelRenderManager_GetMagnifyImages, METH_VARARGS,
   (char*)"V.GetMagnifyImages() -> int\nC++: int GetMagnifyImages()\n\nIf on (the default), when the ImageReductionFactor is greater\nthan 1 and WriteBackImages is on, the image will be magnified to\nfill the entire render window.\n"},
  {(char*)"MagnifyImagesOn", PyvtkParallelRenderManager_MagnifyImagesOn, METH_VARARGS,
   (char*)"V.MagnifyImagesOn()\nC++: void MagnifyImagesOn()\n\nIf on (the default), when the ImageReductionFactor is greater\nthan 1 and WriteBackImages is on, the image will be magnified to\nfill the entire render window.\n"},
  {(char*)"MagnifyImagesOff", PyvtkParallelRenderManager_MagnifyImagesOff, METH_VARARGS,
   (char*)"V.MagnifyImagesOff()\nC++: void MagnifyImagesOff()\n\nIf on (the default), when the ImageReductionFactor is greater\nthan 1 and WriteBackImages is on, the image will be magnified to\nfill the entire render window.\n"},
  {(char*)"SetMagnifyImageMethod", PyvtkParallelRenderManager_SetMagnifyImageMethod, METH_VARARGS,
   (char*)"V.SetMagnifyImageMethod(int)\nC++: virtual void SetMagnifyImageMethod(int method)\n\nSets the method used to magnify images.  Nearest simply\nreplicates each pixel enough times to fill the image.  Linear\nperforms linear interpolation between the pixels.\n"},
  {(char*)"GetMagnifyImageMethod", PyvtkParallelRenderManager_GetMagnifyImageMethod, METH_VARARGS,
   (char*)"V.GetMagnifyImageMethod() -> int\nC++: int GetMagnifyImageMethod()\n\nSets the method used to magnify images.  Nearest simply\nreplicates each pixel enough times to fill the image.  Linear\nperforms linear interpolation between the pixels.\n"},
  {(char*)"SetMagnifyImageMethodToNearest", PyvtkParallelRenderManager_SetMagnifyImageMethodToNearest, METH_VARARGS,
   (char*)"V.SetMagnifyImageMethodToNearest()\nC++: void SetMagnifyImageMethodToNearest()\n\nSets the method used to magnify images.  Nearest simply\nreplicates each pixel enough times to fill the image.  Linear\nperforms linear interpolation between the pixels.\n"},
  {(char*)"SetMagnifyImageMethodToLinear", PyvtkParallelRenderManager_SetMagnifyImageMethodToLinear, METH_VARARGS,
   (char*)"V.SetMagnifyImageMethodToLinear()\nC++: void SetMagnifyImageMethodToLinear()\n\nSets the method used to magnify images.  Nearest simply\nreplicates each pixel enough times to fill the image.  Linear\nperforms linear interpolation between the pixels.\n"},
  {(char*)"MagnifyImage", PyvtkParallelRenderManager_MagnifyImage, METH_VARARGS,
   (char*)"V.MagnifyImage(vtkUnsignedCharArray, (int, int),\n    vtkUnsignedCharArray, (int, int), (int, int, int, int), (int,\n    int, int, int))\nC++: virtual void MagnifyImage(vtkUnsignedCharArray *fullImage,\n    const int fullImageSize[2],\n    vtkUnsignedCharArray *reducedImage,\n    const int reducedImageSize[2],\n    const int fullImageViewport[4]=NULL,\n    const int reducedImageViewport[4]=NULL)\n\nConvenience functions for magnifying images.\n"},
  {(char*)"MagnifyImageNearest", PyvtkParallelRenderManager_MagnifyImageNearest, METH_VARARGS | METH_STATIC,
   (char*)"V.MagnifyImageNearest(vtkUnsignedCharArray, (int, int),\n    vtkUnsignedCharArray, (int, int), (int, int, int, int), (int,\n    int, int, int))\nC++: static void MagnifyImageNearest(\n    vtkUnsignedCharArray *fullImage, const int fullImageSize[2],\n    vtkUnsignedCharArray *reducedImage,\n    const int reducedImageSize[2],\n    const int fullImageViewport[4]=NULL,\n    const int reducedImageViewport[4]=NULL)\n\nConvenience functions for magnifying images.\n"},
  {(char*)"MagnifyImageLinear", PyvtkParallelRenderManager_MagnifyImageLinear, METH_VARARGS | METH_STATIC,
   (char*)"V.MagnifyImageLinear(vtkUnsignedCharArray, (int, int),\n    vtkUnsignedCharArray, (int, int), (int, int, int, int), (int,\n    int, int, int))\nC++: static void MagnifyImageLinear(\n    vtkUnsignedCharArray *fullImage, const int fullImageSize[2],\n    vtkUnsignedCharArray *reducedImage,\n    const int reducedImageSize[2],\n    const int fullImageViewport[4]=NULL,\n    const int reducedImageViewport[4]=NULL)\n\nConvenience functions for magnifying images.\n"},
  {(char*)"GetPixelData", PyvtkParallelRenderManager_GetPixelData, METH_VARARGS,
   (char*)"V.GetPixelData(vtkUnsignedCharArray)\nC++: virtual void GetPixelData(vtkUnsignedCharArray *data)\nV.GetPixelData(int, int, int, int, vtkUnsignedCharArray)\nC++: virtual void GetPixelData(int x1, int y1, int x2, int y2,\n    vtkUnsignedCharArray *data)\n\nThe most appropriate way to retrieve full size image data after a\nrender.  Will work regardless of whether WriteBackImages or\nMagnifyImage is on or off.  The data returned may be a shallow\ncopy of an internal array.  Therefore, the data may be invalid\nafter the next render or if the ParallelRenderManager is\ndestroyed.\n"},
  {(char*)"GetReducedPixelData", PyvtkParallelRenderManager_GetReducedPixelData, METH_VARARGS,
   (char*)"V.GetReducedPixelData(vtkUnsignedCharArray)\nC++: virtual void GetReducedPixelData(vtkUnsignedCharArray *data)\nV.GetReducedPixelData(int, int, int, int, vtkUnsignedCharArray)\nC++: virtual void GetReducedPixelData(int x1, int y1, int x2,\n    int y2, vtkUnsignedCharArray *data)\n\nThe most appropriate way to retrieve reduced size image data\nafter a render.  Will work regardless of whether WriteBackImages\nor MagnifyImage is on or off.  The data returned may be a shallow\ncopy of an internal array.  Therefore, the data may be invalid\nafter the next render or if the ParallelRenderManager is\ndestroyed.\n"},
  {(char*)"GetFullImageSize", PyvtkParallelRenderManager_GetFullImageSize, METH_VARARGS,
   (char*)"V.GetFullImageSize() -> (int, int)\nC++: int *GetFullImageSize()\n\n"},
  {(char*)"GetReducedImageSize", PyvtkParallelRenderManager_GetReducedImageSize, METH_VARARGS,
   (char*)"V.GetReducedImageSize() -> (int, int)\nC++: int *GetReducedImageSize()\n\n"},
  {(char*)"TileWindows", PyvtkParallelRenderManager_TileWindows, METH_VARARGS,
   (char*)"V.TileWindows(int, int, int)\nC++: void TileWindows(int xsize, int ysize, int nColumns)\n\nGiven the x and y size of the render windows, reposition them in\na tile of n columns.\n"},
  {(char*)"SetUseRGBA", PyvtkParallelRenderManager_SetUseRGBA, METH_VARARGS,
   (char*)"V.SetUseRGBA(int)\nC++: void SetUseRGBA(int a)\n\nGet/Set if all Images must use RGBA instead of RGB. By default,\nthis flag is on.\n"},
  {(char*)"GetUseRGBA", PyvtkParallelRenderManager_GetUseRGBA, METH_VARARGS,
   (char*)"V.GetUseRGBA() -> int\nC++: int GetUseRGBA()\n\nGet/Set if all Images must use RGBA instead of RGB. By default,\nthis flag is on.\n"},
  {(char*)"SetForceRenderWindowSize", PyvtkParallelRenderManager_SetForceRenderWindowSize, METH_VARARGS,
   (char*)"V.SetForceRenderWindowSize(int)\nC++: void SetForceRenderWindowSize(int a)\n\nIf ForceRenderWindowSize is set to true, the render manager will\nuse the RenderWindowSize ivar instead of getting the size from\nthe render window.\n"},
  {(char*)"GetForceRenderWindowSize", PyvtkParallelRenderManager_GetForceRenderWindowSize, METH_VARARGS,
   (char*)"V.GetForceRenderWindowSize() -> int\nC++: int GetForceRenderWindowSize()\n\nIf ForceRenderWindowSize is set to true, the render manager will\nuse the RenderWindowSize ivar instead of getting the size from\nthe render window.\n"},
  {(char*)"SetForcedRenderWindowSize", PyvtkParallelRenderManager_SetForcedRenderWindowSize, METH_VARARGS,
   (char*)"V.SetForcedRenderWindowSize(int, int)\nC++: void SetForcedRenderWindowSize(int, int)\nV.SetForcedRenderWindowSize((int, int))\nC++: void SetForcedRenderWindowSize(int a[2])\n\n"},
  {(char*)"GetForcedRenderWindowSize", PyvtkParallelRenderManager_GetForcedRenderWindowSize, METH_VARARGS,
   (char*)"V.GetForcedRenderWindowSize() -> (int, int)\nC++: int *GetForcedRenderWindowSize()\n\n"},
  {(char*)"CheckForAbortRender", PyvtkParallelRenderManager_CheckForAbortRender, METH_VARARGS,
   (char*)"V.CheckForAbortRender()\nC++: virtual void CheckForAbortRender()\n\n"},
  {(char*)"CheckForAbortComposite", PyvtkParallelRenderManager_CheckForAbortComposite, METH_VARARGS,
   (char*)"V.CheckForAbortComposite() -> int\nC++: virtual int CheckForAbortComposite()\n\n"},
  {(char*)"SetUseBackBuffer", PyvtkParallelRenderManager_SetUseBackBuffer, METH_VARARGS,
   (char*)"V.SetUseBackBuffer(int)\nC++: void SetUseBackBuffer(int a)\n\n"},
  {(char*)"GetUseBackBuffer", PyvtkParallelRenderManager_GetUseBackBuffer, METH_VARARGS,
   (char*)"V.GetUseBackBuffer() -> int\nC++: int GetUseBackBuffer()\n\n"},
  {(char*)"UseBackBufferOn", PyvtkParallelRenderManager_UseBackBufferOn, METH_VARARGS,
   (char*)"V.UseBackBufferOn()\nC++: void UseBackBufferOn()\n\n"},
  {(char*)"UseBackBufferOff", PyvtkParallelRenderManager_UseBackBufferOff, METH_VARARGS,
   (char*)"V.UseBackBufferOff()\nC++: void UseBackBufferOff()\n\n"},
  {(char*)"SetSynchronizeTileProperties", PyvtkParallelRenderManager_SetSynchronizeTileProperties, METH_VARARGS,
   (char*)"V.SetSynchronizeTileProperties(int)\nC++: void SetSynchronizeTileProperties(int a)\n\nWhen set the render manager will synchronize the TileViewport and\nTileScale properties. This may not be desirable in cases where\nthere's some other mechanism to set the tile dimensions eg. Tile\ndisplays.\n"},
  {(char*)"GetSynchronizeTileProperties", PyvtkParallelRenderManager_GetSynchronizeTileProperties, METH_VARARGS,
   (char*)"V.GetSynchronizeTileProperties() -> int\nC++: int GetSynchronizeTileProperties()\n\nWhen set the render manager will synchronize the TileViewport and\nTileScale properties. This may not be desirable in cases where\nthere's some other mechanism to set the tile dimensions eg. Tile\ndisplays.\n"},
  {(char*)"SynchronizeTilePropertiesOn", PyvtkParallelRenderManager_SynchronizeTilePropertiesOn, METH_VARARGS,
   (char*)"V.SynchronizeTilePropertiesOn()\nC++: void SynchronizeTilePropertiesOn()\n\nWhen set the render manager will synchronize the TileViewport and\nTileScale properties. This may not be desirable in cases where\nthere's some other mechanism to set the tile dimensions eg. Tile\ndisplays.\n"},
  {(char*)"SynchronizeTilePropertiesOff", PyvtkParallelRenderManager_SynchronizeTilePropertiesOff, METH_VARARGS,
   (char*)"V.SynchronizeTilePropertiesOff()\nC++: void SynchronizeTilePropertiesOff()\n\nWhen set the render manager will synchronize the TileViewport and\nTileScale properties. This may not be desirable in cases where\nthere's some other mechanism to set the tile dimensions eg. Tile\ndisplays.\n"},
  {(char*)"GenericStartRenderCallback", PyvtkParallelRenderManager_GenericStartRenderCallback, METH_VARARGS,
   (char*)"V.GenericStartRenderCallback()\nC++: virtual void GenericStartRenderCallback()\n\nINTERNAL METHODS (DON NOT USE). There are internal methods made\npublic so that they can be called from callback functions.\n"},
  {(char*)"GenericEndRenderCallback", PyvtkParallelRenderManager_GenericEndRenderCallback, METH_VARARGS,
   (char*)"V.GenericEndRenderCallback()\nC++: virtual void GenericEndRenderCallback()\n\nINTERNAL METHODS (DON NOT USE). There are internal methods made\npublic so that they can be called from callback functions.\n"},
  {NULL, NULL, 0, NULL}
};

PyObject *PyVTKClass_vtkParallelRenderManagerNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(NULL,
    PyvtkParallelRenderManager_Methods,
    "vtkParallelRenderManager", modulename,
    NULL, NULL,
    PyvtkParallelRenderManager_Doc(),
    PyVTKClass_vtkObjectNew(modulename));

  if (cls)
    {
    PyObject *d = PyVTKClass_GetDict(cls);
    PyObject *o;

    PyType_Ready(&PyvtkParallelRenderManager_Tags_Type);
    PyvtkParallelRenderManager_Tags_Type.tp_new = NULL;

    o = (PyObject *)&PyvtkParallelRenderManager_Tags_Type;
    if (o && PyDict_SetItemString(d, (char *)"Tags", o) != 0)
      {
      Py_DECREF(o);
      }

    for (int c = 0; c < 2; c++)
      {
      static const struct { const char *name; int value; }
        constants[2] = {
          { "NEAREST", vtkParallelRenderManager::NEAREST },
          { "LINEAR", vtkParallelRenderManager::LINEAR },
        };

      o = PyInt_FromLong(constants[c].value);
      if (o)
        {
        PyDict_SetItemString(d, (char *)constants[c].name, o);
        Py_DECREF(o);
        }
      }

    for (int c = 0; c < 7; c++)
      {
      typedef vtkParallelRenderManager::Tags cxx_enum_type;

      static const struct { const char *name; cxx_enum_type value; }
        constants[7] = {
          { "RENDER_RMI_TAG", vtkParallelRenderManager::RENDER_RMI_TAG },
          { "COMPUTE_VISIBLE_PROP_BOUNDS_RMI_TAG", vtkParallelRenderManager::COMPUTE_VISIBLE_PROP_BOUNDS_RMI_TAG },
          { "WIN_INFO_TAG", vtkParallelRenderManager::WIN_INFO_TAG },
          { "REN_INFO_TAG", vtkParallelRenderManager::REN_INFO_TAG },
          { "LIGHT_INFO_TAG", vtkParallelRenderManager::LIGHT_INFO_TAG },
          { "REN_ID_TAG", vtkParallelRenderManager::REN_ID_TAG },
          { "BOUNDS_TAG", vtkParallelRenderManager::BOUNDS_TAG },
        };

      o = PyvtkParallelRenderManager_Tags_FromEnum(constants[c].value);
      if (o)
        {
        PyDict_SetItemString(d, (char *)constants[c].name, o);
        Py_DECREF(o);
        }
      }

    }

  return cls;
}

const char **PyvtkParallelRenderManager_Doc()
{
  static const char *docstring[] = {
    "vtkParallelRenderManager - An object to control parallel rendering.\n\n",
    "Superclass: vtkObject\n\n",
    "vtkParallelRenderManager operates in multiple processes.  It provides\nproper renderers and render windows for performing the parallel\nrendering correctly.  It can also attach itself to render windows and\npropagate rendering events and camera views.\n\nNote:\n\nMany parallel rendering schemes do not correctly handle transparency.\nUnless otherwise documented, assume a sub class does not.\n\nToDo:\n\nSynchro",
    "nization/barrier primitives.\n\nQuery ranges of scalar values of objects in addition to the boundary\nin three-space\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkParallelRenderManager(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkParallelRenderManagerNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkParallelRenderManager", o) != 0)
    {
    Py_DECREF(o);
    }

}

