// python wrapper for vtkPVView
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkPVView.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkPVView(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkPVViewNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkViewNew
extern "C" { PyObject *PyVTKClass_vtkViewNew(const char *); }
#define DECLARED_PyVTKClass_vtkViewNew
#endif

static const char **PyvtkPVView_Doc();


static PyObject *
PyvtkPVView_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVView *op = static_cast<vtkPVView *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkPVView::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVView_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVView *op = static_cast<vtkPVView *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPVView::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVView_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVView *op = static_cast<vtkPVView *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPVView *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPVView::NewInstance());

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
PyvtkPVView_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkPVView *tempr = vtkPVView::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVView_SetEnableStreaming(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SetEnableStreaming");

  bool temp0 = false;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkPVView::SetEnableStreaming(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVView_GetEnableStreaming(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetEnableStreaming");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    bool tempr = vtkPVView::GetEnableStreaming();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVView_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVView *op = static_cast<vtkPVView *>(vp);

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
      op->vtkPVView::Initialize(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVView_SetPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVView *op = static_cast<vtkPVView *>(vp);

  int temp0;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetPosition(temp0, temp1);
      }
    else
      {
      op->vtkPVView::SetPosition(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVView_GetPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVView *op = static_cast<vtkPVView *>(vp);

  int sizer = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int *tempr = (ap.IsBound() ?
      op->GetPosition() :
      op->vtkPVView::GetPosition());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkPVView_SetSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVView *op = static_cast<vtkPVView *>(vp);

  int temp0;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetSize(temp0, temp1);
      }
    else
      {
      op->vtkPVView::SetSize(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVView_GetSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVView *op = static_cast<vtkPVView *>(vp);

  int sizer = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int *tempr = (ap.IsBound() ?
      op->GetSize() :
      op->vtkPVView::GetSize());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkPVView_StillRender(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StillRender");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVView *op = static_cast<vtkPVView *>(vp);

  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
    {
    op->StillRender();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVView_InteractiveRender(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InteractiveRender");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVView *op = static_cast<vtkPVView *>(vp);

  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
    {
    op->InteractiveRender();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVView_SynchronizeBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SynchronizeBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVView *op = static_cast<vtkPVView *>(vp);

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
      op->vtkPVView::SynchronizeBounds(temp0));

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
PyvtkPVView_SynchronizeSize_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SynchronizeSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVView *op = static_cast<vtkPVView *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    bool tempr = (ap.IsBound() ?
      op->SynchronizeSize(temp0) :
      op->vtkPVView::SynchronizeSize(temp0));

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
PyvtkPVView_SynchronizeSize_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SynchronizeSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVView *op = static_cast<vtkPVView *>(vp);

  unsigned int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    bool tempr = (ap.IsBound() ?
      op->SynchronizeSize(temp0) :
      op->vtkPVView::SynchronizeSize(temp0));

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

static PyMethodDef PyvtkPVView_SynchronizeSize_Methods[] = {
  {NULL, PyvtkPVView_SynchronizeSize_s1, METH_VARARGS,
   (char*)"@d"},
  {NULL, PyvtkPVView_SynchronizeSize_s2, METH_VARARGS,
   (char*)"@I"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkPVView_SynchronizeSize(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkPVView_SynchronizeSize_Methods;
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
PyvtkPVView_SetViewTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetViewTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVView *op = static_cast<vtkPVView *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetViewTime(temp0);
      }
    else
      {
      op->vtkPVView::SetViewTime(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVView_GetViewTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetViewTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVView *op = static_cast<vtkPVView *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetViewTime() :
      op->vtkPVView::GetViewTime());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVView_SetCacheKey(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCacheKey");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVView *op = static_cast<vtkPVView *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetCacheKey(temp0);
      }
    else
      {
      op->vtkPVView::SetCacheKey(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVView_GetCacheKey(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCacheKey");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVView *op = static_cast<vtkPVView *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetCacheKey() :
      op->vtkPVView::GetCacheKey());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVView_SetUseCache(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseCache");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVView *op = static_cast<vtkPVView *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetUseCache(temp0);
      }
    else
      {
      op->vtkPVView::SetUseCache(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVView_GetUseCache(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseCache");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVView *op = static_cast<vtkPVView *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetUseCache() :
      op->vtkPVView::GetUseCache());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVView_PrepareForScreenshot(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PrepareForScreenshot");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVView *op = static_cast<vtkPVView *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->PrepareForScreenshot();
      }
    else
      {
      op->vtkPVView::PrepareForScreenshot();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVView_CleanupAfterScreenshot(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CleanupAfterScreenshot");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVView *op = static_cast<vtkPVView *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->CleanupAfterScreenshot();
      }
    else
      {
      op->vtkPVView::CleanupAfterScreenshot();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVView_VIEW(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "VIEW");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkInformationObjectBaseKey *tempr = vtkPVView::VIEW();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVView_REQUEST_UPDATE(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "REQUEST_UPDATE");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkInformationRequestKey *tempr = vtkPVView::REQUEST_UPDATE();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVView_REQUEST_UPDATE_LOD(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "REQUEST_UPDATE_LOD");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkInformationRequestKey *tempr = vtkPVView::REQUEST_UPDATE_LOD();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVView_REQUEST_RENDER(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "REQUEST_RENDER");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkInformationRequestKey *tempr = vtkPVView::REQUEST_RENDER();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVView_Update(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Update");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVView *op = static_cast<vtkPVView *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Update();
      }
    else
      {
      op->vtkPVView::Update();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVView_InTileDisplayMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InTileDisplayMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVView *op = static_cast<vtkPVView *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->InTileDisplayMode() :
      op->vtkPVView::InTileDisplayMode());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVView_GetIdentifier(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIdentifier");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVView *op = static_cast<vtkPVView *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned int tempr = (ap.IsBound() ?
      op->GetIdentifier() :
      op->vtkPVView::GetIdentifier());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkPVView_Methods[] = {
  {(char*)"GetClassName", PyvtkPVView_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkPVView_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkPVView_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkPVView\nC++: vtkPVView *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkPVView_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkPVView\nC++: vtkPVView *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetEnableStreaming", PyvtkPVView_SetEnableStreaming, METH_VARARGS | METH_STATIC,
   (char*)"V.SetEnableStreaming(bool)\nC++: static void SetEnableStreaming(bool)\n\n"},
  {(char*)"GetEnableStreaming", PyvtkPVView_GetEnableStreaming, METH_VARARGS | METH_STATIC,
   (char*)"V.GetEnableStreaming() -> bool\nC++: static bool GetEnableStreaming()\n\n"},
  {(char*)"Initialize", PyvtkPVView_Initialize, METH_VARARGS,
   (char*)"V.Initialize(int)\nC++: virtual void Initialize(unsigned int id)\n\nInitialize the view with an identifier. Unless noted otherwise,\nthis method must be called before calling any other methods on\nthis class.@CallOnAllProcessess\n"},
  {(char*)"SetPosition", PyvtkPVView_SetPosition, METH_VARARGS,
   (char*)"V.SetPosition(int, int)\nC++: virtual void SetPosition(int, int)\n\nSet the position on this view in the multiview configuration.\nThis can be called only after Initialize().@CallOnAllProcessess\n"},
  {(char*)"GetPosition", PyvtkPVView_GetPosition, METH_VARARGS,
   (char*)"V.GetPosition() -> (int, int)\nC++: int *GetPosition()\n\n"},
  {(char*)"SetSize", PyvtkPVView_SetSize, METH_VARARGS,
   (char*)"V.SetSize(int, int)\nC++: virtual void SetSize(int, int)\n\nSet the size of this view in the multiview configuration. This\ncan be called only after Initialize().@CallOnAllProcessess\n"},
  {(char*)"GetSize", PyvtkPVView_GetSize, METH_VARARGS,
   (char*)"V.GetSize() -> (int, int)\nC++: int *GetSize()\n\n"},
  {(char*)"StillRender", PyvtkPVView_StillRender, METH_VARARGS,
   (char*)"V.StillRender()\nC++: virtual void StillRender()\n\nTriggers a high-resolution render.@CallOnAllProcessess\n"},
  {(char*)"InteractiveRender", PyvtkPVView_InteractiveRender, METH_VARARGS,
   (char*)"V.InteractiveRender()\nC++: virtual void InteractiveRender()\n\nTriggers a interactive render. Based on the settings on the view,\nthis may result in a low-resolution rendering or a simplified\ngeometry rendering.@CallOnAllProcessess\n"},
  {(char*)"SynchronizeBounds", PyvtkPVView_SynchronizeBounds, METH_VARARGS,
   (char*)"V.SynchronizeBounds([float, float, float, float, float, float])\n    -> bool\nC++: bool SynchronizeBounds(double bounds[6])\n\nThis encapsulates a whole lot of logic for communication between\nprocesses. Given the ton of information this class keeps, it can\neasily aid vtkViews to synchronize information such as bounds/\ndata-size among all processes efficiently. This can be achieved\nby using these methods. Note that these methods should be called\non all processes at the same time otherwise we will have\ndeadlocks. We may make this API generic in future, for now this\nworks.\n"},
  {(char*)"SynchronizeSize", PyvtkPVView_SynchronizeSize, METH_VARARGS,
   (char*)"V.SynchronizeSize(float) -> bool\nC++: bool SynchronizeSize(double &size)\nV.SynchronizeSize(int) -> bool\nC++: bool SynchronizeSize(unsigned int &size)\n\nThis encapsulates a whole lot of logic for communication between\nprocesses. Given the ton of information this class keeps, it can\neasily aid vtkViews to synchronize information such as bounds/\ndata-size among all processes efficiently. This can be achieved\nby using these methods. Note that these methods should be called\non all processes at the same time otherwise we will have\ndeadlocks. We may make this API generic in future, for now this\nworks.\n"},
  {(char*)"SetViewTime", PyvtkPVView_SetViewTime, METH_VARARGS,
   (char*)"V.SetViewTime(float)\nC++: virtual void SetViewTime(double value)\n\nGet/Set the time this view is showing. Whenever time is changed,\nthis fires a ViewTimeChangedEvent event.@CallOnAllProcessess\n"},
  {(char*)"GetViewTime", PyvtkPVView_GetViewTime, METH_VARARGS,
   (char*)"V.GetViewTime() -> float\nC++: double GetViewTime()\n\nGet/Set the time this view is showing. Whenever time is changed,\nthis fires a ViewTimeChangedEvent event.@CallOnAllProcessess\n"},
  {(char*)"SetCacheKey", PyvtkPVView_SetCacheKey, METH_VARARGS,
   (char*)"V.SetCacheKey(float)\nC++: void SetCacheKey(double a)\n\nGet/Set the cache key. When caching is enabled, this key is used\nto identify what geometry cache to use for the current render. It\nis passed on to the representations in vtkPVView::Update(). The\nCacheKey is respected only when UseCache is\ntrue.@CallOnAllProcessess\n"},
  {(char*)"GetCacheKey", PyvtkPVView_GetCacheKey, METH_VARARGS,
   (char*)"V.GetCacheKey() -> float\nC++: double GetCacheKey()\n\nGet/Set the cache key. When caching is enabled, this key is used\nto identify what geometry cache to use for the current render. It\nis passed on to the representations in vtkPVView::Update(). The\nCacheKey is respected only when UseCache is\ntrue.@CallOnAllProcessess\n"},
  {(char*)"SetUseCache", PyvtkPVView_SetUseCache, METH_VARARGS,
   (char*)"V.SetUseCache(bool)\nC++: void SetUseCache(bool a)\n\nGet/Set whether caching is enabled.@CallOnAllProcessess\n"},
  {(char*)"GetUseCache", PyvtkPVView_GetUseCache, METH_VARARGS,
   (char*)"V.GetUseCache() -> bool\nC++: bool GetUseCache()\n\nGet/Set whether caching is enabled.@CallOnAllProcessess\n"},
  {(char*)"PrepareForScreenshot", PyvtkPVView_PrepareForScreenshot, METH_VARARGS,
   (char*)"V.PrepareForScreenshot()\nC++: virtual void PrepareForScreenshot()\n\nThese methods are used to setup the view for capturing screen\nshots.\n"},
  {(char*)"CleanupAfterScreenshot", PyvtkPVView_CleanupAfterScreenshot, METH_VARARGS,
   (char*)"V.CleanupAfterScreenshot()\nC++: virtual void CleanupAfterScreenshot()\n\nThese methods are used to setup the view for capturing screen\nshots.\n"},
  {(char*)"VIEW", PyvtkPVView_VIEW, METH_VARARGS | METH_STATIC,
   (char*)"V.VIEW() -> vtkInformationObjectBaseKey\nC++: static vtkInformationObjectBaseKey *VIEW()\n\nKey used to pass the vtkPVView pointer to the representation\nduring any of the view passes such as REQUEST_UPDATE(),\nREQUEST_UPDATE_LOD(), REQUEST_RENDER(), etc.\n"},
  {(char*)"REQUEST_UPDATE", PyvtkPVView_REQUEST_UPDATE, METH_VARARGS | METH_STATIC,
   (char*)"V.REQUEST_UPDATE() -> vtkInformationRequestKey\nC++: static vtkInformationRequestKey *REQUEST_UPDATE()\n\nThis is a Update-Data pass. All representations are expected to\nupdate their inputs and prepare geometries for rendering. All\nheavy work that has to happen only when input-data changes can be\ndone in this pass. This is the first pass.\n"},
  {(char*)"REQUEST_UPDATE_LOD", PyvtkPVView_REQUEST_UPDATE_LOD, METH_VARARGS | METH_STATIC,
   (char*)"V.REQUEST_UPDATE_LOD() -> vtkInformationRequestKey\nC++: static vtkInformationRequestKey *REQUEST_UPDATE_LOD()\n\nThis is a Update-LOD-Data pass. All representations are expected\nto update their lod-data, if any. This is assured to be called\nonly after REQUEST_UPDATE() pass.\n"},
  {(char*)"REQUEST_RENDER", PyvtkPVView_REQUEST_RENDER, METH_VARARGS | METH_STATIC,
   (char*)"V.REQUEST_RENDER() -> vtkInformationRequestKey\nC++: static vtkInformationRequestKey *REQUEST_RENDER()\n\nThis is a render pass. This is called for every render, hence\nrepresentations should not do any work that doesn't depend on\nthings that could change every render.\n"},
  {(char*)"Update", PyvtkPVView_Update, METH_VARARGS,
   (char*)"V.Update()\nC++: virtual void Update()\n\nOverridden to not call Update() directly on the input\nrepresentations, instead use ProcessViewRequest() for all\nvtkPVDataRepresentations.\n"},
  {(char*)"InTileDisplayMode", PyvtkPVView_InTileDisplayMode, METH_VARARGS,
   (char*)"V.InTileDisplayMode() -> bool\nC++: bool InTileDisplayMode()\n\nReturns true if the application is currently in tile display\nmode.\n"},
  {(char*)"GetIdentifier", PyvtkPVView_GetIdentifier, METH_VARARGS,
   (char*)"V.GetIdentifier() -> int\nC++: unsigned int GetIdentifier()\n\n"},
  {NULL, NULL, 0, NULL}
};

PyObject *PyVTKClass_vtkPVViewNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(NULL,
    PyvtkPVView_Methods,
    "vtkPVView", modulename,
    NULL, NULL,
    PyvtkPVView_Doc(),
    PyVTKClass_vtkViewNew(modulename));

  if (cls)
    {
    PyObject *d = PyVTKClass_GetDict(cls);
    PyObject *o;

    o = PyInt_FromLong(vtkPVView::ViewTimeChangedEvent);
    if (o)
      {
      PyDict_SetItemString(d, (char *)"ViewTimeChangedEvent", o);
      Py_DECREF(o);
      }
    }

  return cls;
}

const char **PyvtkPVView_Doc()
{
  static const char *docstring[] = {
    "vtkPVView - baseclass for all ParaView views.\n\n",
    "Superclass: vtkView\n\n",
    "vtkPVView adds API to vtkView for ParaView specific views. Typically,\none writes a simple vtkView subclass for their custom view. Then one\nsubclasses vtkPVView to use their own vtkView subclass with added\nsupport for parallel rendering, tile-displays and client-server. Even\nif the view is client-only view, it needs to address these other\nconfiguration gracefully.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPVView(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPVViewNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPVView", o) != 0)
    {
    Py_DECREF(o);
    }

}

