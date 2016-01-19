// python wrapper for vtkPVSynchronizedRenderer
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkPVSynchronizedRenderer.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkPVSynchronizedRenderer(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkPVSynchronizedRendererNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkPVSynchronizedRenderer_Doc();


static PyObject *
PyvtkPVSynchronizedRenderer_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSynchronizedRenderer *op = static_cast<vtkPVSynchronizedRenderer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkPVSynchronizedRenderer::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVSynchronizedRenderer_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSynchronizedRenderer *op = static_cast<vtkPVSynchronizedRenderer *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPVSynchronizedRenderer::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVSynchronizedRenderer_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSynchronizedRenderer *op = static_cast<vtkPVSynchronizedRenderer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPVSynchronizedRenderer *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPVSynchronizedRenderer::NewInstance());

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
PyvtkPVSynchronizedRenderer_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkPVSynchronizedRenderer *tempr = vtkPVSynchronizedRenderer::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVSynchronizedRenderer_SetDisableIceT(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDisableIceT");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSynchronizedRenderer *op = static_cast<vtkPVSynchronizedRenderer *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetDisableIceT(temp0);
      }
    else
      {
      op->vtkPVSynchronizedRenderer::SetDisableIceT(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVSynchronizedRenderer_GetDisableIceT(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDisableIceT");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSynchronizedRenderer *op = static_cast<vtkPVSynchronizedRenderer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetDisableIceT() :
      op->vtkPVSynchronizedRenderer::GetDisableIceT());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVSynchronizedRenderer_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSynchronizedRenderer *op = static_cast<vtkPVSynchronizedRenderer *>(vp);

  vtkPVSession *temp0 = NULL;
  unsigned int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkPVSession") &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->Initialize(temp0, temp1);
      }
    else
      {
      op->vtkPVSynchronizedRenderer::Initialize(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVSynchronizedRenderer_SetKdTree(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetKdTree");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSynchronizedRenderer *op = static_cast<vtkPVSynchronizedRenderer *>(vp);

  vtkPKdTree *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPKdTree"))
    {
    if (ap.IsBound())
      {
      op->SetKdTree(temp0);
      }
    else
      {
      op->vtkPVSynchronizedRenderer::SetKdTree(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVSynchronizedRenderer_SetRenderer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRenderer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSynchronizedRenderer *op = static_cast<vtkPVSynchronizedRenderer *>(vp);

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
      op->vtkPVSynchronizedRenderer::SetRenderer(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVSynchronizedRenderer_SetEnabled(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEnabled");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSynchronizedRenderer *op = static_cast<vtkPVSynchronizedRenderer *>(vp);

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
      op->vtkPVSynchronizedRenderer::SetEnabled(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVSynchronizedRenderer_GetEnabled(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEnabled");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSynchronizedRenderer *op = static_cast<vtkPVSynchronizedRenderer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetEnabled() :
      op->vtkPVSynchronizedRenderer::GetEnabled());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVSynchronizedRenderer_EnabledOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EnabledOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSynchronizedRenderer *op = static_cast<vtkPVSynchronizedRenderer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->EnabledOn();
      }
    else
      {
      op->vtkPVSynchronizedRenderer::EnabledOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVSynchronizedRenderer_EnabledOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EnabledOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSynchronizedRenderer *op = static_cast<vtkPVSynchronizedRenderer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->EnabledOff();
      }
    else
      {
      op->vtkPVSynchronizedRenderer::EnabledOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVSynchronizedRenderer_SetImageReductionFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetImageReductionFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSynchronizedRenderer *op = static_cast<vtkPVSynchronizedRenderer *>(vp);

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
      op->vtkPVSynchronizedRenderer::SetImageReductionFactor(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVSynchronizedRenderer_GetImageReductionFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetImageReductionFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSynchronizedRenderer *op = static_cast<vtkPVSynchronizedRenderer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetImageReductionFactor() :
      op->vtkPVSynchronizedRenderer::GetImageReductionFactor());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVSynchronizedRenderer_SetDataReplicatedOnAllProcesses(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataReplicatedOnAllProcesses");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSynchronizedRenderer *op = static_cast<vtkPVSynchronizedRenderer *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetDataReplicatedOnAllProcesses(temp0);
      }
    else
      {
      op->vtkPVSynchronizedRenderer::SetDataReplicatedOnAllProcesses(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVSynchronizedRenderer_DataReplicatedOnAllProcessesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DataReplicatedOnAllProcessesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSynchronizedRenderer *op = static_cast<vtkPVSynchronizedRenderer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->DataReplicatedOnAllProcessesOn();
      }
    else
      {
      op->vtkPVSynchronizedRenderer::DataReplicatedOnAllProcessesOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVSynchronizedRenderer_DataReplicatedOnAllProcessesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DataReplicatedOnAllProcessesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSynchronizedRenderer *op = static_cast<vtkPVSynchronizedRenderer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->DataReplicatedOnAllProcessesOff();
      }
    else
      {
      op->vtkPVSynchronizedRenderer::DataReplicatedOnAllProcessesOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVSynchronizedRenderer_SetImageProcessingPass(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetImageProcessingPass");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSynchronizedRenderer *op = static_cast<vtkPVSynchronizedRenderer *>(vp);

  vtkImageProcessingPass *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkImageProcessingPass"))
    {
    if (ap.IsBound())
      {
      op->SetImageProcessingPass(temp0);
      }
    else
      {
      op->vtkPVSynchronizedRenderer::SetImageProcessingPass(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVSynchronizedRenderer_GetImageProcessingPass(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetImageProcessingPass");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSynchronizedRenderer *op = static_cast<vtkPVSynchronizedRenderer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkImageProcessingPass *tempr = (ap.IsBound() ?
      op->GetImageProcessingPass() :
      op->vtkPVSynchronizedRenderer::GetImageProcessingPass());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVSynchronizedRenderer_SetRenderPass(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRenderPass");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSynchronizedRenderer *op = static_cast<vtkPVSynchronizedRenderer *>(vp);

  vtkRenderPass *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkRenderPass"))
    {
    if (ap.IsBound())
      {
      op->SetRenderPass(temp0);
      }
    else
      {
      op->vtkPVSynchronizedRenderer::SetRenderPass(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVSynchronizedRenderer_GetRenderPass(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRenderPass");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSynchronizedRenderer *op = static_cast<vtkPVSynchronizedRenderer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkRenderPass *tempr = (ap.IsBound() ?
      op->GetRenderPass() :
      op->vtkPVSynchronizedRenderer::GetRenderPass());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVSynchronizedRenderer_ConfigureCompressor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ConfigureCompressor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSynchronizedRenderer *op = static_cast<vtkPVSynchronizedRenderer *>(vp);

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
      op->vtkPVSynchronizedRenderer::ConfigureCompressor(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVSynchronizedRenderer_SetLossLessCompression(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLossLessCompression");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSynchronizedRenderer *op = static_cast<vtkPVSynchronizedRenderer *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetLossLessCompression(temp0);
      }
    else
      {
      op->vtkPVSynchronizedRenderer::SetLossLessCompression(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVSynchronizedRenderer_SetUseDepthBuffer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseDepthBuffer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSynchronizedRenderer *op = static_cast<vtkPVSynchronizedRenderer *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetUseDepthBuffer(temp0);
      }
    else
      {
      op->vtkPVSynchronizedRenderer::SetUseDepthBuffer(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVSynchronizedRenderer_SetRenderEmptyImages(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRenderEmptyImages");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSynchronizedRenderer *op = static_cast<vtkPVSynchronizedRenderer *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetRenderEmptyImages(temp0);
      }
    else
      {
      op->vtkPVSynchronizedRenderer::SetRenderEmptyImages(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVSynchronizedRenderer_GetParallelSynchronizer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetParallelSynchronizer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSynchronizedRenderer *op = static_cast<vtkPVSynchronizedRenderer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkSynchronizedRenderers *tempr = (ap.IsBound() ?
      op->GetParallelSynchronizer() :
      op->vtkPVSynchronizedRenderer::GetParallelSynchronizer());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVSynchronizedRenderer_GetCSSynchronizer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCSSynchronizer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSynchronizedRenderer *op = static_cast<vtkPVSynchronizedRenderer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkSynchronizedRenderers *tempr = (ap.IsBound() ?
      op->GetCSSynchronizer() :
      op->vtkPVSynchronizedRenderer::GetCSSynchronizer());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkPVSynchronizedRenderer_Methods[] = {
  {(char*)"GetClassName", PyvtkPVSynchronizedRenderer_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkPVSynchronizedRenderer_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkPVSynchronizedRenderer_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkPVSynchronizedRenderer\nC++: vtkPVSynchronizedRenderer *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkPVSynchronizedRenderer_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkPVSynchronizedRenderer\nC++: vtkPVSynchronizedRenderer *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetDisableIceT", PyvtkPVSynchronizedRenderer_SetDisableIceT, METH_VARARGS,
   (char*)"V.SetDisableIceT(bool)\nC++: void SetDisableIceT(bool a)\n\nSet this flag to true before calling Initialize() to disable\nusing vtkIceTSynchronizedRenderers for parallel rendering.\n"},
  {(char*)"GetDisableIceT", PyvtkPVSynchronizedRenderer_GetDisableIceT, METH_VARARGS,
   (char*)"V.GetDisableIceT() -> bool\nC++: bool GetDisableIceT()\n\nSet this flag to true before calling Initialize() to disable\nusing vtkIceTSynchronizedRenderers for parallel rendering.\n"},
  {(char*)"Initialize", PyvtkPVSynchronizedRenderer_Initialize, METH_VARARGS,
   (char*)"V.Initialize(vtkPVSession, int)\nC++: void Initialize(vtkPVSession *session, unsigned int id)\n\n"},
  {(char*)"SetKdTree", PyvtkPVSynchronizedRenderer_SetKdTree, METH_VARARGS,
   (char*)"V.SetKdTree(vtkPKdTree)\nC++: void SetKdTree(vtkPKdTree *kdtree)\n\nkd tree that gives processes ordering. Initial value is a NULL\npointer. This is used only when UseOrderedCompositing is true.\n"},
  {(char*)"SetRenderer", PyvtkPVSynchronizedRenderer_SetRenderer, METH_VARARGS,
   (char*)"V.SetRenderer(vtkRenderer)\nC++: void SetRenderer(vtkRenderer *)\n\nSet the renderer that is being synchronized.\n"},
  {(char*)"SetEnabled", PyvtkPVSynchronizedRenderer_SetEnabled, METH_VARARGS,
   (char*)"V.SetEnabled(bool)\nC++: virtual void SetEnabled(bool enabled)\n\nEnable/Disable parallel rendering.\n"},
  {(char*)"GetEnabled", PyvtkPVSynchronizedRenderer_GetEnabled, METH_VARARGS,
   (char*)"V.GetEnabled() -> bool\nC++: bool GetEnabled()\n\nEnable/Disable parallel rendering.\n"},
  {(char*)"EnabledOn", PyvtkPVSynchronizedRenderer_EnabledOn, METH_VARARGS,
   (char*)"V.EnabledOn()\nC++: void EnabledOn()\n\nEnable/Disable parallel rendering.\n"},
  {(char*)"EnabledOff", PyvtkPVSynchronizedRenderer_EnabledOff, METH_VARARGS,
   (char*)"V.EnabledOff()\nC++: void EnabledOff()\n\nEnable/Disable parallel rendering.\n"},
  {(char*)"SetImageReductionFactor", PyvtkPVSynchronizedRenderer_SetImageReductionFactor, METH_VARARGS,
   (char*)"V.SetImageReductionFactor(int)\nC++: void SetImageReductionFactor(int)\n\nGet/Set the image reduction factor. This needs to be set on all\nprocesses and must match up.\n"},
  {(char*)"GetImageReductionFactor", PyvtkPVSynchronizedRenderer_GetImageReductionFactor, METH_VARARGS,
   (char*)"V.GetImageReductionFactor() -> int\nC++: int GetImageReductionFactor()\n\nGet/Set the image reduction factor. This needs to be set on all\nprocesses and must match up.\n"},
  {(char*)"SetDataReplicatedOnAllProcesses", PyvtkPVSynchronizedRenderer_SetDataReplicatedOnAllProcesses, METH_VARARGS,
   (char*)"V.SetDataReplicatedOnAllProcesses(bool)\nC++: void SetDataReplicatedOnAllProcesses(bool)\n\nSet to true if data is replicated on all processes. This will\nenable IceT to minimize communications since data is available on\nall process. Off by default.\n"},
  {(char*)"DataReplicatedOnAllProcessesOn", PyvtkPVSynchronizedRenderer_DataReplicatedOnAllProcessesOn, METH_VARARGS,
   (char*)"V.DataReplicatedOnAllProcessesOn()\nC++: void DataReplicatedOnAllProcessesOn()\n\nSet to true if data is replicated on all processes. This will\nenable IceT to minimize communications since data is available on\nall process. Off by default.\n"},
  {(char*)"DataReplicatedOnAllProcessesOff", PyvtkPVSynchronizedRenderer_DataReplicatedOnAllProcessesOff, METH_VARARGS,
   (char*)"V.DataReplicatedOnAllProcessesOff()\nC++: void DataReplicatedOnAllProcessesOff()\n\nSet to true if data is replicated on all processes. This will\nenable IceT to minimize communications since data is available on\nall process. Off by default.\n"},
  {(char*)"SetImageProcessingPass", PyvtkPVSynchronizedRenderer_SetImageProcessingPass, METH_VARARGS,
   (char*)"V.SetImageProcessingPass(vtkImageProcessingPass)\nC++: void SetImageProcessingPass(vtkImageProcessingPass *)\n\nGet/Set an image processing pass to process the rendered images.\n"},
  {(char*)"GetImageProcessingPass", PyvtkPVSynchronizedRenderer_GetImageProcessingPass, METH_VARARGS,
   (char*)"V.GetImageProcessingPass() -> vtkImageProcessingPass\nC++: vtkImageProcessingPass *GetImageProcessingPass()\n\nGet/Set an image processing pass to process the rendered images.\n"},
  {(char*)"SetRenderPass", PyvtkPVSynchronizedRenderer_SetRenderPass, METH_VARARGS,
   (char*)"V.SetRenderPass(vtkRenderPass)\nC++: void SetRenderPass(vtkRenderPass *)\n\nGet/Set geometry rendering pass. This pass is used to render the\ngeometry. If none specified then default rendering pipeline is\nused. This is typically the render-pass pipeline after the\nCameraPass. The CameraPass is setup by ParaView specially since\nParaView needs some customizations for multiviews/icet etc.\n"},
  {(char*)"GetRenderPass", PyvtkPVSynchronizedRenderer_GetRenderPass, METH_VARARGS,
   (char*)"V.GetRenderPass() -> vtkRenderPass\nC++: vtkRenderPass *GetRenderPass()\n\nGet/Set geometry rendering pass. This pass is used to render the\ngeometry. If none specified then default rendering pipeline is\nused. This is typically the render-pass pipeline after the\nCameraPass. The CameraPass is setup by ParaView specially since\nParaView needs some customizations for multiviews/icet etc.\n"},
  {(char*)"ConfigureCompressor", PyvtkPVSynchronizedRenderer_ConfigureCompressor, METH_VARARGS,
   (char*)"V.ConfigureCompressor(string)\nC++: void ConfigureCompressor(const char *configuration)\n\nPasses the compressor configuration to the client-server\nsynchronizer, if any. This affects the image compression used to\nrelay images back to the client. See\nvtkPVClientServerSynchronizedRenderers::ConfigureCompressor() for\ndetails.\n"},
  {(char*)"SetLossLessCompression", PyvtkPVSynchronizedRenderer_SetLossLessCompression, METH_VARARGS,
   (char*)"V.SetLossLessCompression(bool)\nC++: void SetLossLessCompression(bool)\n\nPasses the compressor configuration to the client-server\nsynchronizer, if any. This affects the image compression used to\nrelay images back to the client. See\nvtkPVClientServerSynchronizedRenderers::ConfigureCompressor() for\ndetails.\n"},
  {(char*)"SetUseDepthBuffer", PyvtkPVSynchronizedRenderer_SetUseDepthBuffer, METH_VARARGS,
   (char*)"V.SetUseDepthBuffer(bool)\nC++: void SetUseDepthBuffer(bool)\n\nActivates or de-activated the use of Depth Buffer in an\nImageProcessingPass\n"},
  {(char*)"SetRenderEmptyImages", PyvtkPVSynchronizedRenderer_SetRenderEmptyImages, METH_VARARGS,
   (char*)"V.SetRenderEmptyImages(bool)\nC++: void SetRenderEmptyImages(bool)\n\nEnable/Disable empty images optimization.\n"},
  {(char*)"GetParallelSynchronizer", PyvtkPVSynchronizedRenderer_GetParallelSynchronizer, METH_VARARGS,
   (char*)"V.GetParallelSynchronizer() -> vtkSynchronizedRenderers\nC++: vtkSynchronizedRenderers *GetParallelSynchronizer()\n\nNot for the faint hearted. This internal vtkSynchronizedRenderers\ninstances are exposed for advanced users that want to do advanced\ntricks with rendering. These will change without notice. Do not\nuse them unless you know what you are doing. ParallelSynchronizer\nis the vtkSynchronizedRenderers used to synchronize rendering\nbetween processes in an MPI group -- typically\nvtkIceTSynchronizedRenderers when available. CSSynchronizer is\nthe client-server vtkSynchronizedRenderers used in client-server\nconfigurations.\n"},
  {(char*)"GetCSSynchronizer", PyvtkPVSynchronizedRenderer_GetCSSynchronizer, METH_VARARGS,
   (char*)"V.GetCSSynchronizer() -> vtkSynchronizedRenderers\nC++: vtkSynchronizedRenderers *GetCSSynchronizer()\n\nNot for the faint hearted. This internal vtkSynchronizedRenderers\ninstances are exposed for advanced users that want to do advanced\ntricks with rendering. These will change without notice. Do not\nuse them unless you know what you are doing. ParallelSynchronizer\nis the vtkSynchronizedRenderers used to synchronize rendering\nbetween processes in an MPI group -- typically\nvtkIceTSynchronizedRenderers when available. CSSynchronizer is\nthe client-server vtkSynchronizedRenderers used in client-server\nconfigurations.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkPVSynchronizedRenderer_StaticNew()
{
  return vtkPVSynchronizedRenderer::New();
}

PyObject *PyVTKClass_vtkPVSynchronizedRendererNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkPVSynchronizedRenderer_StaticNew,
    PyvtkPVSynchronizedRenderer_Methods,
    "vtkPVSynchronizedRenderer", modulename,
    NULL, NULL,
    PyvtkPVSynchronizedRenderer_Doc(),
    PyVTKClass_vtkObjectNew(modulename));
  return cls;
}

const char **PyvtkPVSynchronizedRenderer_Doc()
{
  static const char *docstring[] = {
    "vtkPVSynchronizedRenderer - synchronizes and composites renderers\namong\n\n",
    "Superclass: vtkObject\n\n",
    "\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPVSynchronizedRenderer(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPVSynchronizedRendererNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPVSynchronizedRenderer", o) != 0)
    {
    Py_DECREF(o);
    }

}

