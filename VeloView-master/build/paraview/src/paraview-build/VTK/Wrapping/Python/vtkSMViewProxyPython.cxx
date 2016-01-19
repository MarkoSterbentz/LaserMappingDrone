// python wrapper for vtkSMViewProxy
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkSMViewProxy.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkSMViewProxy(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkSMViewProxyNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkSMProxyNew
extern "C" { PyObject *PyVTKClass_vtkSMProxyNew(const char *); }
#define DECLARED_PyVTKClass_vtkSMProxyNew
#endif

static const char **PyvtkSMViewProxy_Doc();


static PyObject *
PyvtkSMViewProxy_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMViewProxy *op = static_cast<vtkSMViewProxy *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkSMViewProxy::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMViewProxy_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMViewProxy *op = static_cast<vtkSMViewProxy *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSMViewProxy::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMViewProxy_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMViewProxy *op = static_cast<vtkSMViewProxy *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkSMViewProxy *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSMViewProxy::NewInstance());

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
PyvtkSMViewProxy_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkSMViewProxy *tempr = vtkSMViewProxy::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMViewProxy_SetEnable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEnable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMViewProxy *op = static_cast<vtkSMViewProxy *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetEnable(temp0);
      }
    else
      {
      op->vtkSMViewProxy::SetEnable(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMViewProxy_GetEnable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEnable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMViewProxy *op = static_cast<vtkSMViewProxy *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetEnable() :
      op->vtkSMViewProxy::GetEnable());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMViewProxy_EnableOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EnableOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMViewProxy *op = static_cast<vtkSMViewProxy *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->EnableOn();
      }
    else
      {
      op->vtkSMViewProxy::EnableOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMViewProxy_EnableOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EnableOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMViewProxy *op = static_cast<vtkSMViewProxy *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->EnableOff();
      }
    else
      {
      op->vtkSMViewProxy::EnableOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMViewProxy_StillRender(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StillRender");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMViewProxy *op = static_cast<vtkSMViewProxy *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->StillRender();
      }
    else
      {
      op->vtkSMViewProxy::StillRender();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMViewProxy_InteractiveRender(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InteractiveRender");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMViewProxy *op = static_cast<vtkSMViewProxy *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->InteractiveRender();
      }
    else
      {
      op->vtkSMViewProxy::InteractiveRender();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMViewProxy_Update(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Update");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMViewProxy *op = static_cast<vtkSMViewProxy *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Update();
      }
    else
      {
      op->vtkSMViewProxy::Update();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMViewProxy_CanDisplayData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CanDisplayData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMViewProxy *op = static_cast<vtkSMViewProxy *>(vp);

  vtkSMSourceProxy *temp0 = NULL;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkSMSourceProxy") &&
      ap.GetValue(temp1))
    {
    bool tempr = (ap.IsBound() ?
      op->CanDisplayData(temp0, temp1) :
      op->vtkSMViewProxy::CanDisplayData(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMViewProxy_CreateDefaultRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateDefaultRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMViewProxy *op = static_cast<vtkSMViewProxy *>(vp);

  vtkSMProxy *temp0 = NULL;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkSMProxy") &&
      ap.GetValue(temp1))
    {
    vtkSMRepresentationProxy *tempr = (ap.IsBound() ?
      op->CreateDefaultRepresentation(temp0, temp1) :
      op->vtkSMViewProxy::CreateDefaultRepresentation(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMViewProxy_GetRepresentationType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRepresentationType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMViewProxy *op = static_cast<vtkSMViewProxy *>(vp);

  vtkSMSourceProxy *temp0 = NULL;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkSMSourceProxy") &&
      ap.GetValue(temp1))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetRepresentationType(temp0, temp1) :
      op->vtkSMViewProxy::GetRepresentationType(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMViewProxy_FindRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FindRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMViewProxy *op = static_cast<vtkSMViewProxy *>(vp);

  vtkSMSourceProxy *temp0 = NULL;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkSMSourceProxy") &&
      ap.GetValue(temp1))
    {
    vtkSMRepresentationProxy *tempr = (ap.IsBound() ?
      op->FindRepresentation(temp0, temp1) :
      op->vtkSMViewProxy::FindRepresentation(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMViewProxy_CaptureWindow(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CaptureWindow");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMViewProxy *op = static_cast<vtkSMViewProxy *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkImageData *tempr = (ap.IsBound() ?
      op->CaptureWindow(temp0) :
      op->vtkSMViewProxy::CaptureWindow(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMViewProxy_GetClientSideView(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClientSideView");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMViewProxy *op = static_cast<vtkSMViewProxy *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkView *tempr = (ap.IsBound() ?
      op->GetClientSideView() :
      op->vtkSMViewProxy::GetClientSideView());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMViewProxy_WriteImage(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WriteImage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMViewProxy *op = static_cast<vtkSMViewProxy *>(vp);

  char *temp0 = NULL;
  char *temp1 = NULL;
  int temp2 = 1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2, 3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)))
    {
    int tempr = (ap.IsBound() ?
      op->WriteImage(temp0, temp1, temp2) :
      op->vtkSMViewProxy::WriteImage(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMViewProxy_HasDirtyRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasDirtyRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMViewProxy *op = static_cast<vtkSMViewProxy *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->HasDirtyRepresentation() :
      op->vtkSMViewProxy::HasDirtyRepresentation());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMViewProxy_GetNeedsUpdate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNeedsUpdate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMViewProxy *op = static_cast<vtkSMViewProxy *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetNeedsUpdate() :
      op->vtkSMViewProxy::GetNeedsUpdate());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMViewProxy_GetRenderWindow(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRenderWindow");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMViewProxy *op = static_cast<vtkSMViewProxy *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkRenderWindow *tempr = (ap.IsBound() ?
      op->GetRenderWindow() :
      op->vtkSMViewProxy::GetRenderWindow());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMViewProxy_SetTransparentBackground(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SetTransparentBackground");

  bool temp0 = false;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkSMViewProxy::SetTransparentBackground(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMViewProxy_HideOtherRepresentationsIfNeeded_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HideOtherRepresentationsIfNeeded");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMViewProxy *op = static_cast<vtkSMViewProxy *>(vp);

  vtkSMProxy *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMProxy"))
    {
    bool tempr = (ap.IsBound() ?
      op->HideOtherRepresentationsIfNeeded(temp0) :
      op->vtkSMViewProxy::HideOtherRepresentationsIfNeeded(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkSMViewProxy_HideOtherRepresentationsIfNeeded_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "HideOtherRepresentationsIfNeeded");

  vtkSMViewProxy *temp0 = NULL;
  vtkSMProxy *temp1 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkSMViewProxy") &&
      ap.GetVTKObject(temp1, "vtkSMProxy"))
    {
    bool tempr = vtkSMViewProxy::HideOtherRepresentationsIfNeeded(temp0, temp1);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkSMViewProxy_HideOtherRepresentationsIfNeeded(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
    {
    case 1:
      return PyvtkSMViewProxy_HideOtherRepresentationsIfNeeded_s1(self, args);
    case 2:
      return PyvtkSMViewProxy_HideOtherRepresentationsIfNeeded_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "HideOtherRepresentationsIfNeeded");
  return NULL;
}


static PyMethodDef PyvtkSMViewProxy_Methods[] = {
  {(char*)"GetClassName", PyvtkSMViewProxy_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkSMViewProxy_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkSMViewProxy_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkSMViewProxy\nC++: vtkSMViewProxy *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkSMViewProxy_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkSMViewProxy\nC++: vtkSMViewProxy *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetEnable", PyvtkSMViewProxy_SetEnable, METH_VARARGS,
   (char*)"V.SetEnable(bool)\nC++: void SetEnable(bool a)\n\nEnable/Disable a view.\n"},
  {(char*)"GetEnable", PyvtkSMViewProxy_GetEnable, METH_VARARGS,
   (char*)"V.GetEnable() -> bool\nC++: bool GetEnable()\n\nEnable/Disable a view.\n"},
  {(char*)"EnableOn", PyvtkSMViewProxy_EnableOn, METH_VARARGS,
   (char*)"V.EnableOn()\nC++: void EnableOn()\n\nEnable/Disable a view.\n"},
  {(char*)"EnableOff", PyvtkSMViewProxy_EnableOff, METH_VARARGS,
   (char*)"V.EnableOff()\nC++: void EnableOff()\n\nEnable/Disable a view.\n"},
  {(char*)"StillRender", PyvtkSMViewProxy_StillRender, METH_VARARGS,
   (char*)"V.StillRender()\nC++: virtual void StillRender()\n\nRenders the view using full resolution.\n"},
  {(char*)"InteractiveRender", PyvtkSMViewProxy_InteractiveRender, METH_VARARGS,
   (char*)"V.InteractiveRender()\nC++: virtual void InteractiveRender()\n\nRenders the view using lower resolution is possible.\n"},
  {(char*)"Update", PyvtkSMViewProxy_Update, METH_VARARGS,
   (char*)"V.Update()\nC++: virtual void Update()\n\nCalled vtkPVView::Update on the server-side.\n"},
  {(char*)"CanDisplayData", PyvtkSMViewProxy_CanDisplayData, METH_VARARGS,
   (char*)"V.CanDisplayData(vtkSMSourceProxy, int) -> bool\nC++: virtual bool CanDisplayData(vtkSMSourceProxy *producer,\n    int outputPort)\n\nReturns true if the view can display the data produced by the\nproducer's port. Internally calls GetRepresentationType() and\nreturns true only if the type is valid a representation proxy of\nthat type can be created.\n"},
  {(char*)"CreateDefaultRepresentation", PyvtkSMViewProxy_CreateDefaultRepresentation, METH_VARARGS,
   (char*)"V.CreateDefaultRepresentation(vtkSMProxy, int)\n    -> vtkSMRepresentationProxy\nC++: virtual vtkSMRepresentationProxy *CreateDefaultRepresentation(\n    vtkSMProxy *, int)\n\nCreate a default representation for the given source proxy.\nReturns a new proxy. In version 4.1 and earlier, subclasses\noverrode this method. Since 4.2, the preferred way is to simply\noverride GetRepresentationType(). That ensures that\nCreateDefaultRepresentation() and CanDisplayData() both work as\nexpected.\n"},
  {(char*)"GetRepresentationType", PyvtkSMViewProxy_GetRepresentationType, METH_VARARGS,
   (char*)"V.GetRepresentationType(vtkSMSourceProxy, int) -> string\nC++: virtual const char *GetRepresentationType(\n    vtkSMSourceProxy *producer, int outputPort)\n\nReturns the xml name of the representation proxy to create to\nshow the data produced in this view, if any. Default\nimplementation checks if the producer has any \"Hints\" that define\nthe representation to create in this view and if so, returns\nthat. Or if this->DefaultRepresentationName is set and its Input\nproperty can accept the data produced, returns\nthis->DefaultRepresentationName. Subclasses should override this\nmethod.\n"},
  {(char*)"FindRepresentation", PyvtkSMViewProxy_FindRepresentation, METH_VARARGS,
   (char*)"V.FindRepresentation(vtkSMSourceProxy, int)\n    -> vtkSMRepresentationProxy\nC++: virtual vtkSMRepresentationProxy *FindRepresentation(\n    vtkSMSourceProxy *producer, int outputPort)\n\nFinds the representation proxy showing the data produced by the\nprovided producer, if any. Note the representation may not\nnecessarily be visible.\n"},
  {(char*)"CaptureWindow", PyvtkSMViewProxy_CaptureWindow, METH_VARARGS,
   (char*)"V.CaptureWindow(int) -> vtkImageData\nC++: vtkImageData *CaptureWindow(int magnification)\n\nCaptures a image from this view. Default implementation returns\nNULL. Subclasses should override CaptureWindowInternal() to do\nthe actual image capture.\n"},
  {(char*)"GetClientSideView", PyvtkSMViewProxy_GetClientSideView, METH_VARARGS,
   (char*)"V.GetClientSideView() -> vtkView\nC++: vtkView *GetClientSideView()\n\nReturns the client-side vtkView, if any.\n"},
  {(char*)"WriteImage", PyvtkSMViewProxy_WriteImage, METH_VARARGS,
   (char*)"V.WriteImage(string, string, int) -> int\nC++: int WriteImage(const char *filename, const char *writerName,\n    int magnification=1)\n\nSaves a screenshot of the view to disk. The writerName argument\nspecifies the vtkImageWriter subclass to use.\n"},
  {(char*)"HasDirtyRepresentation", PyvtkSMViewProxy_HasDirtyRepresentation, METH_VARARGS,
   (char*)"V.HasDirtyRepresentation() -> bool\nC++: virtual bool HasDirtyRepresentation()\n\nReturn true any internal representation is dirty. This can be\nusefull to know if the internal geometry has changed. DEPRECATED:\nUse GetNeedsUpdate() instead.\n"},
  {(char*)"GetNeedsUpdate", PyvtkSMViewProxy_GetNeedsUpdate, METH_VARARGS,
   (char*)"V.GetNeedsUpdate() -> bool\nC++: bool GetNeedsUpdate()\n\nReturns true if the subsequent call to Update() will result in an\nactual update. If returned true, it means that the view thinks\nits rendering is obsolete and needs to be re-generated.\n"},
  {(char*)"GetRenderWindow", PyvtkSMViewProxy_GetRenderWindow, METH_VARARGS,
   (char*)"V.GetRenderWindow() -> vtkRenderWindow\nC++: virtual vtkRenderWindow *GetRenderWindow()\n\nReturn the vtkRenderWindow used by this view, if any. Note, views\nlike vtkSMComparativeViewProxy can have more than 1 render window\nin play, in which case, using this method alone may yield\nincorrect results. Also, certain views don't use a\nvtkRenderWindow at all (e.g. Spreadsheet View), in which case,\nthis method will return NULL. Default implementation returns\nNULL.\n"},
  {(char*)"SetTransparentBackground", PyvtkSMViewProxy_SetTransparentBackground, METH_VARARGS | METH_STATIC,
   (char*)"V.SetTransparentBackground(bool)\nC++: static void SetTransparentBackground(bool val)\n\nSets whether screenshots have a transparent background.\n"},
  {(char*)"HideOtherRepresentationsIfNeeded", PyvtkSMViewProxy_HideOtherRepresentationsIfNeeded, METH_VARARGS,
   (char*)"V.HideOtherRepresentationsIfNeeded(vtkSMProxy) -> bool\nC++: virtual bool HideOtherRepresentationsIfNeeded(\n    vtkSMProxy *repr)\nV.HideOtherRepresentationsIfNeeded(vtkSMViewProxy, vtkSMProxy)\n    -> bool\nC++: static bool HideOtherRepresentationsIfNeeded(\n    vtkSMViewProxy *self, vtkSMProxy *repr)\n\nMethod used to hide other representations if the view has a\n<ShowOneRepresentationAtATime/> hint. This only affects other\nrepresentations that have data inputs, not non-data\nrepresentations. Returns true if any representations were hidden\nby this call, otherwise returns false.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkSMViewProxy_StaticNew()
{
  return vtkSMViewProxy::New();
}

PyObject *PyVTKClass_vtkSMViewProxyNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkSMViewProxy_StaticNew,
    PyvtkSMViewProxy_Methods,
    "vtkSMViewProxy", modulename,
    NULL, NULL,
    PyvtkSMViewProxy_Doc(),
    PyVTKClass_vtkSMProxyNew(modulename));
  return cls;
}

const char **PyvtkSMViewProxy_Doc()
{
  static const char *docstring[] = {
    "vtkSMViewProxy - Superclass for all view proxies.\n\n",
    "Superclass: vtkSMProxy\n\n",
    "vtkSMViewProxy is a superclass for all view proxies. A view proxy\nabstracts the logic to take one or more representation proxies and\nshow then in some viewport such as vtkRenderWindow. This class may\ndirectly be used as the view proxy for views that do all the\nrendering work at the GUI level. The VTKObject corresponding to this\nclass has to be a vtkView subclass.\n\nEvents:\n\n\\li vtkCommand::StartEve",
    "nt(callData: int:0) -- start of\n    StillRender().\n\\li vtkCommand::EndEvent(callData: int:0) -- end of StillRender().\n\\li vtkCommand::StartEvent(callData: int:1) -- start of\n    InteractiveRender().\n\\li vtkCommand::EndEvent(callData: int:1) -- end of\n    InteractiveRender().\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkSMViewProxy(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkSMViewProxyNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkSMViewProxy", o) != 0)
    {
    Py_DECREF(o);
    }

}

