// python wrapper for vtkSynchronizedRenderers
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkSynchronizedRenderers.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkSynchronizedRenderers(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkSynchronizedRenderersNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkSynchronizedRenderers_Doc();


static PyObject *
PyvtkSynchronizedRenderers_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSynchronizedRenderers *op = static_cast<vtkSynchronizedRenderers *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkSynchronizedRenderers::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSynchronizedRenderers_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSynchronizedRenderers *op = static_cast<vtkSynchronizedRenderers *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSynchronizedRenderers::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSynchronizedRenderers_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSynchronizedRenderers *op = static_cast<vtkSynchronizedRenderers *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkSynchronizedRenderers *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSynchronizedRenderers::NewInstance());

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
PyvtkSynchronizedRenderers_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkSynchronizedRenderers *tempr = vtkSynchronizedRenderers::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSynchronizedRenderers_SetRenderer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRenderer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSynchronizedRenderers *op = static_cast<vtkSynchronizedRenderers *>(vp);

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
      op->vtkSynchronizedRenderers::SetRenderer(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSynchronizedRenderers_GetRenderer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRenderer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSynchronizedRenderers *op = static_cast<vtkSynchronizedRenderers *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkRenderer *tempr = (ap.IsBound() ?
      op->GetRenderer() :
      op->vtkSynchronizedRenderers::GetRenderer());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSynchronizedRenderers_SetParallelController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetParallelController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSynchronizedRenderers *op = static_cast<vtkSynchronizedRenderers *>(vp);

  vtkMultiProcessController *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMultiProcessController"))
    {
    if (ap.IsBound())
      {
      op->SetParallelController(temp0);
      }
    else
      {
      op->vtkSynchronizedRenderers::SetParallelController(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSynchronizedRenderers_GetParallelController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetParallelController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSynchronizedRenderers *op = static_cast<vtkSynchronizedRenderers *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkMultiProcessController *tempr = (ap.IsBound() ?
      op->GetParallelController() :
      op->vtkSynchronizedRenderers::GetParallelController());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSynchronizedRenderers_SetParallelRendering(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetParallelRendering");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSynchronizedRenderers *op = static_cast<vtkSynchronizedRenderers *>(vp);

  bool temp0 = false;
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
      op->vtkSynchronizedRenderers::SetParallelRendering(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSynchronizedRenderers_GetParallelRendering(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetParallelRendering");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSynchronizedRenderers *op = static_cast<vtkSynchronizedRenderers *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetParallelRendering() :
      op->vtkSynchronizedRenderers::GetParallelRendering());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSynchronizedRenderers_ParallelRenderingOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ParallelRenderingOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSynchronizedRenderers *op = static_cast<vtkSynchronizedRenderers *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ParallelRenderingOn();
      }
    else
      {
      op->vtkSynchronizedRenderers::ParallelRenderingOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSynchronizedRenderers_ParallelRenderingOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ParallelRenderingOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSynchronizedRenderers *op = static_cast<vtkSynchronizedRenderers *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ParallelRenderingOff();
      }
    else
      {
      op->vtkSynchronizedRenderers::ParallelRenderingOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSynchronizedRenderers_SetImageReductionFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetImageReductionFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSynchronizedRenderers *op = static_cast<vtkSynchronizedRenderers *>(vp);

  int temp0;
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
      op->vtkSynchronizedRenderers::SetImageReductionFactor(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSynchronizedRenderers_GetImageReductionFactorMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetImageReductionFactorMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSynchronizedRenderers *op = static_cast<vtkSynchronizedRenderers *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetImageReductionFactorMinValue() :
      op->vtkSynchronizedRenderers::GetImageReductionFactorMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSynchronizedRenderers_GetImageReductionFactorMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetImageReductionFactorMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSynchronizedRenderers *op = static_cast<vtkSynchronizedRenderers *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetImageReductionFactorMaxValue() :
      op->vtkSynchronizedRenderers::GetImageReductionFactorMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSynchronizedRenderers_GetImageReductionFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetImageReductionFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSynchronizedRenderers *op = static_cast<vtkSynchronizedRenderers *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetImageReductionFactor() :
      op->vtkSynchronizedRenderers::GetImageReductionFactor());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSynchronizedRenderers_SetWriteBackImages(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWriteBackImages");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSynchronizedRenderers *op = static_cast<vtkSynchronizedRenderers *>(vp);

  bool temp0 = false;
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
      op->vtkSynchronizedRenderers::SetWriteBackImages(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSynchronizedRenderers_GetWriteBackImages(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWriteBackImages");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSynchronizedRenderers *op = static_cast<vtkSynchronizedRenderers *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetWriteBackImages() :
      op->vtkSynchronizedRenderers::GetWriteBackImages());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSynchronizedRenderers_WriteBackImagesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WriteBackImagesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSynchronizedRenderers *op = static_cast<vtkSynchronizedRenderers *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->WriteBackImagesOn();
      }
    else
      {
      op->vtkSynchronizedRenderers::WriteBackImagesOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSynchronizedRenderers_WriteBackImagesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WriteBackImagesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSynchronizedRenderers *op = static_cast<vtkSynchronizedRenderers *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->WriteBackImagesOff();
      }
    else
      {
      op->vtkSynchronizedRenderers::WriteBackImagesOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSynchronizedRenderers_SetRootProcessId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRootProcessId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSynchronizedRenderers *op = static_cast<vtkSynchronizedRenderers *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetRootProcessId(temp0);
      }
    else
      {
      op->vtkSynchronizedRenderers::SetRootProcessId(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSynchronizedRenderers_GetRootProcessId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRootProcessId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSynchronizedRenderers *op = static_cast<vtkSynchronizedRenderers *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetRootProcessId() :
      op->vtkSynchronizedRenderers::GetRootProcessId());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSynchronizedRenderers_CollectiveExpandForVisiblePropBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CollectiveExpandForVisiblePropBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSynchronizedRenderers *op = static_cast<vtkSynchronizedRenderers *>(vp);

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
      op->CollectiveExpandForVisiblePropBounds(temp0);
      }
    else
      {
      op->vtkSynchronizedRenderers::CollectiveExpandForVisiblePropBounds(temp0);
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
PyvtkSynchronizedRenderers_SetCaptureDelegate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCaptureDelegate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSynchronizedRenderers *op = static_cast<vtkSynchronizedRenderers *>(vp);

  vtkSynchronizedRenderers *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSynchronizedRenderers"))
    {
    if (ap.IsBound())
      {
      op->SetCaptureDelegate(temp0);
      }
    else
      {
      op->vtkSynchronizedRenderers::SetCaptureDelegate(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSynchronizedRenderers_GetCaptureDelegate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCaptureDelegate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSynchronizedRenderers *op = static_cast<vtkSynchronizedRenderers *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkSynchronizedRenderers *tempr = (ap.IsBound() ?
      op->GetCaptureDelegate() :
      op->vtkSynchronizedRenderers::GetCaptureDelegate());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSynchronizedRenderers_SetAutomaticEventHandling(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAutomaticEventHandling");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSynchronizedRenderers *op = static_cast<vtkSynchronizedRenderers *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetAutomaticEventHandling(temp0);
      }
    else
      {
      op->vtkSynchronizedRenderers::SetAutomaticEventHandling(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSynchronizedRenderers_GetAutomaticEventHandling(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAutomaticEventHandling");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSynchronizedRenderers *op = static_cast<vtkSynchronizedRenderers *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetAutomaticEventHandling() :
      op->vtkSynchronizedRenderers::GetAutomaticEventHandling());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSynchronizedRenderers_AutomaticEventHandlingOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AutomaticEventHandlingOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSynchronizedRenderers *op = static_cast<vtkSynchronizedRenderers *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->AutomaticEventHandlingOn();
      }
    else
      {
      op->vtkSynchronizedRenderers::AutomaticEventHandlingOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSynchronizedRenderers_AutomaticEventHandlingOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AutomaticEventHandlingOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSynchronizedRenderers *op = static_cast<vtkSynchronizedRenderers *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->AutomaticEventHandlingOff();
      }
    else
      {
      op->vtkSynchronizedRenderers::AutomaticEventHandlingOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkSynchronizedRenderers_Methods[] = {
  {(char*)"GetClassName", PyvtkSynchronizedRenderers_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkSynchronizedRenderers_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkSynchronizedRenderers_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkSynchronizedRenderers\nC++: vtkSynchronizedRenderers *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkSynchronizedRenderers_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkSynchronizedRenderers\nC++: vtkSynchronizedRenderers *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetRenderer", PyvtkSynchronizedRenderers_SetRenderer, METH_VARARGS,
   (char*)"V.SetRenderer(vtkRenderer)\nC++: virtual void SetRenderer(vtkRenderer *)\n\nSet the renderer to be synchronized by this instance. A\nvtkSynchronizedRenderers instance can be used to synchronize\nexactly 1 renderer on each processes. You can create multiple\ninstances on vtkSynchronizedRenderers to synchronize multiple\nrenderers.\n"},
  {(char*)"GetRenderer", PyvtkSynchronizedRenderers_GetRenderer, METH_VARARGS,
   (char*)"V.GetRenderer() -> vtkRenderer\nC++: virtual vtkRenderer *GetRenderer()\n\nSet the renderer to be synchronized by this instance. A\nvtkSynchronizedRenderers instance can be used to synchronize\nexactly 1 renderer on each processes. You can create multiple\ninstances on vtkSynchronizedRenderers to synchronize multiple\nrenderers.\n"},
  {(char*)"SetParallelController", PyvtkSynchronizedRenderers_SetParallelController, METH_VARARGS,
   (char*)"V.SetParallelController(vtkMultiProcessController)\nC++: virtual void SetParallelController(\n    vtkMultiProcessController *)\n\nSet the parallel message communicator. This is used to\ncommunicate among processes.\n"},
  {(char*)"GetParallelController", PyvtkSynchronizedRenderers_GetParallelController, METH_VARARGS,
   (char*)"V.GetParallelController() -> vtkMultiProcessController\nC++: vtkMultiProcessController *GetParallelController()\n\nSet the parallel message communicator. This is used to\ncommunicate among processes.\n"},
  {(char*)"SetParallelRendering", PyvtkSynchronizedRenderers_SetParallelRendering, METH_VARARGS,
   (char*)"V.SetParallelRendering(bool)\nC++: void SetParallelRendering(bool a)\n\nEnable/Disable parallel rendering. Unless Parallel rendering is\non, the cameras won't be synchronized across processes.\n"},
  {(char*)"GetParallelRendering", PyvtkSynchronizedRenderers_GetParallelRendering, METH_VARARGS,
   (char*)"V.GetParallelRendering() -> bool\nC++: bool GetParallelRendering()\n\nEnable/Disable parallel rendering. Unless Parallel rendering is\non, the cameras won't be synchronized across processes.\n"},
  {(char*)"ParallelRenderingOn", PyvtkSynchronizedRenderers_ParallelRenderingOn, METH_VARARGS,
   (char*)"V.ParallelRenderingOn()\nC++: void ParallelRenderingOn()\n\nEnable/Disable parallel rendering. Unless Parallel rendering is\non, the cameras won't be synchronized across processes.\n"},
  {(char*)"ParallelRenderingOff", PyvtkSynchronizedRenderers_ParallelRenderingOff, METH_VARARGS,
   (char*)"V.ParallelRenderingOff()\nC++: void ParallelRenderingOff()\n\nEnable/Disable parallel rendering. Unless Parallel rendering is\non, the cameras won't be synchronized across processes.\n"},
  {(char*)"SetImageReductionFactor", PyvtkSynchronizedRenderers_SetImageReductionFactor, METH_VARARGS,
   (char*)"V.SetImageReductionFactor(int)\nC++: void SetImageReductionFactor(int)\n\nGet/Set the image reduction factor.\n"},
  {(char*)"GetImageReductionFactorMinValue", PyvtkSynchronizedRenderers_GetImageReductionFactorMinValue, METH_VARARGS,
   (char*)"V.GetImageReductionFactorMinValue() -> int\nC++: int GetImageReductionFactorMinValue()\n\nGet/Set the image reduction factor.\n"},
  {(char*)"GetImageReductionFactorMaxValue", PyvtkSynchronizedRenderers_GetImageReductionFactorMaxValue, METH_VARARGS,
   (char*)"V.GetImageReductionFactorMaxValue() -> int\nC++: int GetImageReductionFactorMaxValue()\n\nGet/Set the image reduction factor.\n"},
  {(char*)"GetImageReductionFactor", PyvtkSynchronizedRenderers_GetImageReductionFactor, METH_VARARGS,
   (char*)"V.GetImageReductionFactor() -> int\nC++: int GetImageReductionFactor()\n\nGet/Set the image reduction factor.\n"},
  {(char*)"SetWriteBackImages", PyvtkSynchronizedRenderers_SetWriteBackImages, METH_VARARGS,
   (char*)"V.SetWriteBackImages(bool)\nC++: void SetWriteBackImages(bool a)\n\nIf on (default), the rendered images are pasted back on to the\nscreen. You should turn this flag off on processes that are not\nmeant to be visible to the user.\n"},
  {(char*)"GetWriteBackImages", PyvtkSynchronizedRenderers_GetWriteBackImages, METH_VARARGS,
   (char*)"V.GetWriteBackImages() -> bool\nC++: bool GetWriteBackImages()\n\nIf on (default), the rendered images are pasted back on to the\nscreen. You should turn this flag off on processes that are not\nmeant to be visible to the user.\n"},
  {(char*)"WriteBackImagesOn", PyvtkSynchronizedRenderers_WriteBackImagesOn, METH_VARARGS,
   (char*)"V.WriteBackImagesOn()\nC++: void WriteBackImagesOn()\n\nIf on (default), the rendered images are pasted back on to the\nscreen. You should turn this flag off on processes that are not\nmeant to be visible to the user.\n"},
  {(char*)"WriteBackImagesOff", PyvtkSynchronizedRenderers_WriteBackImagesOff, METH_VARARGS,
   (char*)"V.WriteBackImagesOff()\nC++: void WriteBackImagesOff()\n\nIf on (default), the rendered images are pasted back on to the\nscreen. You should turn this flag off on processes that are not\nmeant to be visible to the user.\n"},
  {(char*)"SetRootProcessId", PyvtkSynchronizedRenderers_SetRootProcessId, METH_VARARGS,
   (char*)"V.SetRootProcessId(int)\nC++: void SetRootProcessId(int a)\n\nGet/Set the root-process id. This is required when the\nParallelController is a vtkSocketController. Set to 0 by default\n(which will not work when using a vtkSocketController but will\nwork for vtkMPIController).\n"},
  {(char*)"GetRootProcessId", PyvtkSynchronizedRenderers_GetRootProcessId, METH_VARARGS,
   (char*)"V.GetRootProcessId() -> int\nC++: int GetRootProcessId()\n\nGet/Set the root-process id. This is required when the\nParallelController is a vtkSocketController. Set to 0 by default\n(which will not work when using a vtkSocketController but will\nwork for vtkMPIController).\n"},
  {(char*)"CollectiveExpandForVisiblePropBounds", PyvtkSynchronizedRenderers_CollectiveExpandForVisiblePropBounds, METH_VARARGS,
   (char*)"V.CollectiveExpandForVisiblePropBounds([float, float, float,\n    float, float, float])\nC++: void CollectiveExpandForVisiblePropBounds(double bounds[6])\n\nComputes visible prob bounds. This must be called on all\nprocesses at the same time. The collective result is made\navailable on all processes once this method returns. Note that\nthis method requires that bounds is initialized to some value.\nThis expands the bounds to include the prop bounds.\n"},
  {(char*)"SetCaptureDelegate", PyvtkSynchronizedRenderers_SetCaptureDelegate, METH_VARARGS,
   (char*)"V.SetCaptureDelegate(vtkSynchronizedRenderers)\nC++: virtual void SetCaptureDelegate(vtkSynchronizedRenderers *)\n\nWhen set, this->CaptureRenderedImage() does not capture image\nfrom the screen instead passes the call to the delegate.\n"},
  {(char*)"GetCaptureDelegate", PyvtkSynchronizedRenderers_GetCaptureDelegate, METH_VARARGS,
   (char*)"V.GetCaptureDelegate() -> vtkSynchronizedRenderers\nC++: vtkSynchronizedRenderers *GetCaptureDelegate()\n\nWhen set, this->CaptureRenderedImage() does not capture image\nfrom the screen instead passes the call to the delegate.\n"},
  {(char*)"SetAutomaticEventHandling", PyvtkSynchronizedRenderers_SetAutomaticEventHandling, METH_VARARGS,
   (char*)"V.SetAutomaticEventHandling(bool)\nC++: void SetAutomaticEventHandling(bool a)\n\nWhen multiple groups of processes are synchronized together using\ndifferent controllers, one needs to specify the order in which\nthe various synchronizers execute. In such cases one starts with\nthe outer most vtkSynchronizedRenderers, sets the dependent one\nas a CaptureDelegate on it and the turn off\nAutomaticEventHandling on the delegate.\n"},
  {(char*)"GetAutomaticEventHandling", PyvtkSynchronizedRenderers_GetAutomaticEventHandling, METH_VARARGS,
   (char*)"V.GetAutomaticEventHandling() -> bool\nC++: bool GetAutomaticEventHandling()\n\nWhen multiple groups of processes are synchronized together using\ndifferent controllers, one needs to specify the order in which\nthe various synchronizers execute. In such cases one starts with\nthe outer most vtkSynchronizedRenderers, sets the dependent one\nas a CaptureDelegate on it and the turn off\nAutomaticEventHandling on the delegate.\n"},
  {(char*)"AutomaticEventHandlingOn", PyvtkSynchronizedRenderers_AutomaticEventHandlingOn, METH_VARARGS,
   (char*)"V.AutomaticEventHandlingOn()\nC++: void AutomaticEventHandlingOn()\n\nWhen multiple groups of processes are synchronized together using\ndifferent controllers, one needs to specify the order in which\nthe various synchronizers execute. In such cases one starts with\nthe outer most vtkSynchronizedRenderers, sets the dependent one\nas a CaptureDelegate on it and the turn off\nAutomaticEventHandling on the delegate.\n"},
  {(char*)"AutomaticEventHandlingOff", PyvtkSynchronizedRenderers_AutomaticEventHandlingOff, METH_VARARGS,
   (char*)"V.AutomaticEventHandlingOff()\nC++: void AutomaticEventHandlingOff()\n\nWhen multiple groups of processes are synchronized together using\ndifferent controllers, one needs to specify the order in which\nthe various synchronizers execute. In such cases one starts with\nthe outer most vtkSynchronizedRenderers, sets the dependent one\nas a CaptureDelegate on it and the turn off\nAutomaticEventHandling on the delegate.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkSynchronizedRenderers_StaticNew()
{
  return vtkSynchronizedRenderers::New();
}

PyObject *PyVTKClass_vtkSynchronizedRenderersNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkSynchronizedRenderers_StaticNew,
    PyvtkSynchronizedRenderers_Methods,
    "vtkSynchronizedRenderers", modulename,
    NULL, NULL,
    PyvtkSynchronizedRenderers_Doc(),
    PyVTKClass_vtkObjectNew(modulename));

  if (cls)
    {
    PyObject *d = PyVTKClass_GetDict(cls);
    PyObject *o;

    for (int c = 0; c < 3; c++)
      {
      static const struct { const char *name; int value; }
        constants[3] = {
          { "SYNC_RENDERER_TAG", vtkSynchronizedRenderers::SYNC_RENDERER_TAG },
          { "RESET_CAMERA_TAG", vtkSynchronizedRenderers::RESET_CAMERA_TAG },
          { "COMPUTE_BOUNDS_TAG", vtkSynchronizedRenderers::COMPUTE_BOUNDS_TAG },
        };

      o = PyInt_FromLong(constants[c].value);
      if (o)
        {
        PyDict_SetItemString(d, (char *)constants[c].name, o);
        Py_DECREF(o);
        }
      }

    }

  return cls;
}

const char **PyvtkSynchronizedRenderers_Doc()
{
  static const char *docstring[] = {
    "vtkSynchronizedRenderers - synchronizes renderers across processes.\n\n",
    "Superclass: vtkObject\n\n",
    "vtkSynchronizedRenderers is used to synchronize renderers\n(vtkRenderer and subclasses) across processes for parallel rendering.\nIt's designed to be used in conjunction with\nvtkSynchronizedRenderWindows to synchronize the render windows among\nthose processes. This class handles synchronization of certain render\nparameters among the renderers such as viewport, camera parameters.\nIt doesn't support c",
    "ompositing of rendered images across processes on\nits own. You typically either subclass to implement a compositing\nalgorithm or use a renderer capable of compositing eg. IceT based\nrenderer.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkSynchronizedRenderers(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkSynchronizedRenderersNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkSynchronizedRenderers", o) != 0)
    {
    Py_DECREF(o);
    }

}

