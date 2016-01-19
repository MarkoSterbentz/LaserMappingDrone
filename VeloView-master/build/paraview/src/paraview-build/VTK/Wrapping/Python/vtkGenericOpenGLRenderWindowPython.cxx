// python wrapper for vtkGenericOpenGLRenderWindow
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkGenericOpenGLRenderWindow.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkGenericOpenGLRenderWindow(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkGenericOpenGLRenderWindowNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkOpenGLRenderWindowNew
extern "C" { PyObject *PyVTKClass_vtkOpenGLRenderWindowNew(const char *); }
#define DECLARED_PyVTKClass_vtkOpenGLRenderWindowNew
#endif

static const char **PyvtkGenericOpenGLRenderWindow_Doc();


static PyObject *
PyvtkGenericOpenGLRenderWindow_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericOpenGLRenderWindow *op = static_cast<vtkGenericOpenGLRenderWindow *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkGenericOpenGLRenderWindow::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericOpenGLRenderWindow_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericOpenGLRenderWindow *op = static_cast<vtkGenericOpenGLRenderWindow *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkGenericOpenGLRenderWindow::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericOpenGLRenderWindow_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericOpenGLRenderWindow *op = static_cast<vtkGenericOpenGLRenderWindow *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkGenericOpenGLRenderWindow *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkGenericOpenGLRenderWindow::NewInstance());

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
PyvtkGenericOpenGLRenderWindow_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkGenericOpenGLRenderWindow *tempr = vtkGenericOpenGLRenderWindow::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericOpenGLRenderWindow_Finalize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Finalize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericOpenGLRenderWindow *op = static_cast<vtkGenericOpenGLRenderWindow *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Finalize();
      }
    else
      {
      op->vtkGenericOpenGLRenderWindow::Finalize();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGenericOpenGLRenderWindow_Frame(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Frame");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericOpenGLRenderWindow *op = static_cast<vtkGenericOpenGLRenderWindow *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Frame();
      }
    else
      {
      op->vtkGenericOpenGLRenderWindow::Frame();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGenericOpenGLRenderWindow_MakeCurrent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MakeCurrent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericOpenGLRenderWindow *op = static_cast<vtkGenericOpenGLRenderWindow *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->MakeCurrent();
      }
    else
      {
      op->vtkGenericOpenGLRenderWindow::MakeCurrent();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGenericOpenGLRenderWindow_IsCurrent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsCurrent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericOpenGLRenderWindow *op = static_cast<vtkGenericOpenGLRenderWindow *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->IsCurrent() :
      op->vtkGenericOpenGLRenderWindow::IsCurrent());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericOpenGLRenderWindow_SupportsOpenGL(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SupportsOpenGL");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericOpenGLRenderWindow *op = static_cast<vtkGenericOpenGLRenderWindow *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->SupportsOpenGL() :
      op->vtkGenericOpenGLRenderWindow::SupportsOpenGL());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericOpenGLRenderWindow_IsDirect(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsDirect");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericOpenGLRenderWindow *op = static_cast<vtkGenericOpenGLRenderWindow *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->IsDirect() :
      op->vtkGenericOpenGLRenderWindow::IsDirect());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericOpenGLRenderWindow_SetFrontBuffer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFrontBuffer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericOpenGLRenderWindow *op = static_cast<vtkGenericOpenGLRenderWindow *>(vp);

  unsigned int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetFrontBuffer(temp0);
      }
    else
      {
      op->vtkGenericOpenGLRenderWindow::SetFrontBuffer(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGenericOpenGLRenderWindow_SetFrontLeftBuffer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFrontLeftBuffer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericOpenGLRenderWindow *op = static_cast<vtkGenericOpenGLRenderWindow *>(vp);

  unsigned int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetFrontLeftBuffer(temp0);
      }
    else
      {
      op->vtkGenericOpenGLRenderWindow::SetFrontLeftBuffer(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGenericOpenGLRenderWindow_SetFrontRightBuffer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFrontRightBuffer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericOpenGLRenderWindow *op = static_cast<vtkGenericOpenGLRenderWindow *>(vp);

  unsigned int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetFrontRightBuffer(temp0);
      }
    else
      {
      op->vtkGenericOpenGLRenderWindow::SetFrontRightBuffer(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGenericOpenGLRenderWindow_SetBackBuffer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBackBuffer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericOpenGLRenderWindow *op = static_cast<vtkGenericOpenGLRenderWindow *>(vp);

  unsigned int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetBackBuffer(temp0);
      }
    else
      {
      op->vtkGenericOpenGLRenderWindow::SetBackBuffer(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGenericOpenGLRenderWindow_SetBackLeftBuffer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBackLeftBuffer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericOpenGLRenderWindow *op = static_cast<vtkGenericOpenGLRenderWindow *>(vp);

  unsigned int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetBackLeftBuffer(temp0);
      }
    else
      {
      op->vtkGenericOpenGLRenderWindow::SetBackLeftBuffer(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGenericOpenGLRenderWindow_SetBackRightBuffer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBackRightBuffer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericOpenGLRenderWindow *op = static_cast<vtkGenericOpenGLRenderWindow *>(vp);

  unsigned int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetBackRightBuffer(temp0);
      }
    else
      {
      op->vtkGenericOpenGLRenderWindow::SetBackRightBuffer(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGenericOpenGLRenderWindow_PushState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PushState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericOpenGLRenderWindow *op = static_cast<vtkGenericOpenGLRenderWindow *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->PushState();
      }
    else
      {
      op->vtkGenericOpenGLRenderWindow::PushState();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGenericOpenGLRenderWindow_PopState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PopState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericOpenGLRenderWindow *op = static_cast<vtkGenericOpenGLRenderWindow *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->PopState();
      }
    else
      {
      op->vtkGenericOpenGLRenderWindow::PopState();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGenericOpenGLRenderWindow_SetWindowId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWindowId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericOpenGLRenderWindow *op = static_cast<vtkGenericOpenGLRenderWindow *>(vp);

  void  *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetWindowId(temp0);
      }
    else
      {
      op->vtkGenericOpenGLRenderWindow::SetWindowId(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGenericOpenGLRenderWindow_GetGenericWindowId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGenericWindowId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericOpenGLRenderWindow *op = static_cast<vtkGenericOpenGLRenderWindow *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    void  *tempr = (ap.IsBound() ?
      op->GetGenericWindowId() :
      op->vtkGenericOpenGLRenderWindow::GetGenericWindowId());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericOpenGLRenderWindow_SetDisplayId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDisplayId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericOpenGLRenderWindow *op = static_cast<vtkGenericOpenGLRenderWindow *>(vp);

  void  *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetDisplayId(temp0);
      }
    else
      {
      op->vtkGenericOpenGLRenderWindow::SetDisplayId(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGenericOpenGLRenderWindow_SetParentId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetParentId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericOpenGLRenderWindow *op = static_cast<vtkGenericOpenGLRenderWindow *>(vp);

  void  *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetParentId(temp0);
      }
    else
      {
      op->vtkGenericOpenGLRenderWindow::SetParentId(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGenericOpenGLRenderWindow_GetGenericDisplayId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGenericDisplayId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericOpenGLRenderWindow *op = static_cast<vtkGenericOpenGLRenderWindow *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    void  *tempr = (ap.IsBound() ?
      op->GetGenericDisplayId() :
      op->vtkGenericOpenGLRenderWindow::GetGenericDisplayId());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericOpenGLRenderWindow_GetGenericParentId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGenericParentId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericOpenGLRenderWindow *op = static_cast<vtkGenericOpenGLRenderWindow *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    void  *tempr = (ap.IsBound() ?
      op->GetGenericParentId() :
      op->vtkGenericOpenGLRenderWindow::GetGenericParentId());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericOpenGLRenderWindow_GetGenericContext(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGenericContext");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericOpenGLRenderWindow *op = static_cast<vtkGenericOpenGLRenderWindow *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    void  *tempr = (ap.IsBound() ?
      op->GetGenericContext() :
      op->vtkGenericOpenGLRenderWindow::GetGenericContext());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericOpenGLRenderWindow_GetGenericDrawable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGenericDrawable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericOpenGLRenderWindow *op = static_cast<vtkGenericOpenGLRenderWindow *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    void  *tempr = (ap.IsBound() ?
      op->GetGenericDrawable() :
      op->vtkGenericOpenGLRenderWindow::GetGenericDrawable());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericOpenGLRenderWindow_SetWindowInfo(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWindowInfo");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericOpenGLRenderWindow *op = static_cast<vtkGenericOpenGLRenderWindow *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetWindowInfo(temp0);
      }
    else
      {
      op->vtkGenericOpenGLRenderWindow::SetWindowInfo(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGenericOpenGLRenderWindow_SetParentInfo(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetParentInfo");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericOpenGLRenderWindow *op = static_cast<vtkGenericOpenGLRenderWindow *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetParentInfo(temp0);
      }
    else
      {
      op->vtkGenericOpenGLRenderWindow::SetParentInfo(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGenericOpenGLRenderWindow_GetScreenSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScreenSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericOpenGLRenderWindow *op = static_cast<vtkGenericOpenGLRenderWindow *>(vp);

  int sizer = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int *tempr = (ap.IsBound() ?
      op->GetScreenSize() :
      op->vtkGenericOpenGLRenderWindow::GetScreenSize());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericOpenGLRenderWindow_Start(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Start");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericOpenGLRenderWindow *op = static_cast<vtkGenericOpenGLRenderWindow *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Start();
      }
    else
      {
      op->vtkGenericOpenGLRenderWindow::Start();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGenericOpenGLRenderWindow_HideCursor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HideCursor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericOpenGLRenderWindow *op = static_cast<vtkGenericOpenGLRenderWindow *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->HideCursor();
      }
    else
      {
      op->vtkGenericOpenGLRenderWindow::HideCursor();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGenericOpenGLRenderWindow_ShowCursor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShowCursor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericOpenGLRenderWindow *op = static_cast<vtkGenericOpenGLRenderWindow *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ShowCursor();
      }
    else
      {
      op->vtkGenericOpenGLRenderWindow::ShowCursor();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGenericOpenGLRenderWindow_SetFullScreen(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFullScreen");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericOpenGLRenderWindow *op = static_cast<vtkGenericOpenGLRenderWindow *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetFullScreen(temp0);
      }
    else
      {
      op->vtkGenericOpenGLRenderWindow::SetFullScreen(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGenericOpenGLRenderWindow_WindowRemap(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WindowRemap");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericOpenGLRenderWindow *op = static_cast<vtkGenericOpenGLRenderWindow *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->WindowRemap();
      }
    else
      {
      op->vtkGenericOpenGLRenderWindow::WindowRemap();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGenericOpenGLRenderWindow_GetEventPending(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEventPending");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericOpenGLRenderWindow *op = static_cast<vtkGenericOpenGLRenderWindow *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetEventPending() :
      op->vtkGenericOpenGLRenderWindow::GetEventPending());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericOpenGLRenderWindow_SetNextWindowId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNextWindowId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericOpenGLRenderWindow *op = static_cast<vtkGenericOpenGLRenderWindow *>(vp);

  void  *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetNextWindowId(temp0);
      }
    else
      {
      op->vtkGenericOpenGLRenderWindow::SetNextWindowId(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGenericOpenGLRenderWindow_SetNextWindowInfo(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNextWindowInfo");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericOpenGLRenderWindow *op = static_cast<vtkGenericOpenGLRenderWindow *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetNextWindowInfo(temp0);
      }
    else
      {
      op->vtkGenericOpenGLRenderWindow::SetNextWindowInfo(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGenericOpenGLRenderWindow_CreateAWindow(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateAWindow");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericOpenGLRenderWindow *op = static_cast<vtkGenericOpenGLRenderWindow *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->CreateAWindow();
      }
    else
      {
      op->vtkGenericOpenGLRenderWindow::CreateAWindow();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGenericOpenGLRenderWindow_DestroyWindow(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DestroyWindow");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericOpenGLRenderWindow *op = static_cast<vtkGenericOpenGLRenderWindow *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->DestroyWindow();
      }
    else
      {
      op->vtkGenericOpenGLRenderWindow::DestroyWindow();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGenericOpenGLRenderWindow_SetIsDirect(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIsDirect");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericOpenGLRenderWindow *op = static_cast<vtkGenericOpenGLRenderWindow *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetIsDirect(temp0);
      }
    else
      {
      op->vtkGenericOpenGLRenderWindow::SetIsDirect(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGenericOpenGLRenderWindow_SetSupportsOpenGL(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSupportsOpenGL");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericOpenGLRenderWindow *op = static_cast<vtkGenericOpenGLRenderWindow *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetSupportsOpenGL(temp0);
      }
    else
      {
      op->vtkGenericOpenGLRenderWindow::SetSupportsOpenGL(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGenericOpenGLRenderWindow_SetIsCurrent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIsCurrent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericOpenGLRenderWindow *op = static_cast<vtkGenericOpenGLRenderWindow *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetIsCurrent(temp0);
      }
    else
      {
      op->vtkGenericOpenGLRenderWindow::SetIsCurrent(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkGenericOpenGLRenderWindow_Methods[] = {
  {(char*)"GetClassName", PyvtkGenericOpenGLRenderWindow_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkGenericOpenGLRenderWindow_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkGenericOpenGLRenderWindow_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkGenericOpenGLRenderWindow\nC++: vtkGenericOpenGLRenderWindow *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkGenericOpenGLRenderWindow_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkGenericOpenGLRenderWindow\nC++: vtkGenericOpenGLRenderWindow *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"Finalize", PyvtkGenericOpenGLRenderWindow_Finalize, METH_VARARGS,
   (char*)"V.Finalize()\nC++: void Finalize()\n\n"},
  {(char*)"Frame", PyvtkGenericOpenGLRenderWindow_Frame, METH_VARARGS,
   (char*)"V.Frame()\nC++: void Frame()\n\n"},
  {(char*)"MakeCurrent", PyvtkGenericOpenGLRenderWindow_MakeCurrent, METH_VARARGS,
   (char*)"V.MakeCurrent()\nC++: void MakeCurrent()\n\n"},
  {(char*)"IsCurrent", PyvtkGenericOpenGLRenderWindow_IsCurrent, METH_VARARGS,
   (char*)"V.IsCurrent() -> bool\nC++: bool IsCurrent()\n\n"},
  {(char*)"SupportsOpenGL", PyvtkGenericOpenGLRenderWindow_SupportsOpenGL, METH_VARARGS,
   (char*)"V.SupportsOpenGL() -> int\nC++: int SupportsOpenGL()\n\n"},
  {(char*)"IsDirect", PyvtkGenericOpenGLRenderWindow_IsDirect, METH_VARARGS,
   (char*)"V.IsDirect() -> int\nC++: int IsDirect()\n\n"},
  {(char*)"SetFrontBuffer", PyvtkGenericOpenGLRenderWindow_SetFrontBuffer, METH_VARARGS,
   (char*)"V.SetFrontBuffer(int)\nC++: void SetFrontBuffer(unsigned int)\n\n"},
  {(char*)"SetFrontLeftBuffer", PyvtkGenericOpenGLRenderWindow_SetFrontLeftBuffer, METH_VARARGS,
   (char*)"V.SetFrontLeftBuffer(int)\nC++: void SetFrontLeftBuffer(unsigned int)\n\n"},
  {(char*)"SetFrontRightBuffer", PyvtkGenericOpenGLRenderWindow_SetFrontRightBuffer, METH_VARARGS,
   (char*)"V.SetFrontRightBuffer(int)\nC++: void SetFrontRightBuffer(unsigned int)\n\n"},
  {(char*)"SetBackBuffer", PyvtkGenericOpenGLRenderWindow_SetBackBuffer, METH_VARARGS,
   (char*)"V.SetBackBuffer(int)\nC++: void SetBackBuffer(unsigned int)\n\n"},
  {(char*)"SetBackLeftBuffer", PyvtkGenericOpenGLRenderWindow_SetBackLeftBuffer, METH_VARARGS,
   (char*)"V.SetBackLeftBuffer(int)\nC++: void SetBackLeftBuffer(unsigned int)\n\n"},
  {(char*)"SetBackRightBuffer", PyvtkGenericOpenGLRenderWindow_SetBackRightBuffer, METH_VARARGS,
   (char*)"V.SetBackRightBuffer(int)\nC++: void SetBackRightBuffer(unsigned int)\n\n"},
  {(char*)"PushState", PyvtkGenericOpenGLRenderWindow_PushState, METH_VARARGS,
   (char*)"V.PushState()\nC++: void PushState()\n\n"},
  {(char*)"PopState", PyvtkGenericOpenGLRenderWindow_PopState, METH_VARARGS,
   (char*)"V.PopState()\nC++: void PopState()\n\n"},
  {(char*)"SetWindowId", PyvtkGenericOpenGLRenderWindow_SetWindowId, METH_VARARGS,
   (char*)"V.SetWindowId()\nC++: void SetWindowId(void *)\n\n"},
  {(char*)"GetGenericWindowId", PyvtkGenericOpenGLRenderWindow_GetGenericWindowId, METH_VARARGS,
   (char*)"V.GetGenericWindowId() ->\nC++: void *GetGenericWindowId()\n\n"},
  {(char*)"SetDisplayId", PyvtkGenericOpenGLRenderWindow_SetDisplayId, METH_VARARGS,
   (char*)"V.SetDisplayId()\nC++: void SetDisplayId(void *)\n\n"},
  {(char*)"SetParentId", PyvtkGenericOpenGLRenderWindow_SetParentId, METH_VARARGS,
   (char*)"V.SetParentId()\nC++: void SetParentId(void *)\n\n"},
  {(char*)"GetGenericDisplayId", PyvtkGenericOpenGLRenderWindow_GetGenericDisplayId, METH_VARARGS,
   (char*)"V.GetGenericDisplayId() ->\nC++: void *GetGenericDisplayId()\n\n"},
  {(char*)"GetGenericParentId", PyvtkGenericOpenGLRenderWindow_GetGenericParentId, METH_VARARGS,
   (char*)"V.GetGenericParentId() ->\nC++: void *GetGenericParentId()\n\n"},
  {(char*)"GetGenericContext", PyvtkGenericOpenGLRenderWindow_GetGenericContext, METH_VARARGS,
   (char*)"V.GetGenericContext() ->\nC++: void *GetGenericContext()\n\n"},
  {(char*)"GetGenericDrawable", PyvtkGenericOpenGLRenderWindow_GetGenericDrawable, METH_VARARGS,
   (char*)"V.GetGenericDrawable() ->\nC++: void *GetGenericDrawable()\n\n"},
  {(char*)"SetWindowInfo", PyvtkGenericOpenGLRenderWindow_SetWindowInfo, METH_VARARGS,
   (char*)"V.SetWindowInfo(string)\nC++: void SetWindowInfo(char *)\n\n"},
  {(char*)"SetParentInfo", PyvtkGenericOpenGLRenderWindow_SetParentInfo, METH_VARARGS,
   (char*)"V.SetParentInfo(string)\nC++: void SetParentInfo(char *)\n\n"},
  {(char*)"GetScreenSize", PyvtkGenericOpenGLRenderWindow_GetScreenSize, METH_VARARGS,
   (char*)"V.GetScreenSize() -> (int, int)\nC++: int *GetScreenSize()\n\n"},
  {(char*)"Start", PyvtkGenericOpenGLRenderWindow_Start, METH_VARARGS,
   (char*)"V.Start()\nC++: void Start()\n\n"},
  {(char*)"HideCursor", PyvtkGenericOpenGLRenderWindow_HideCursor, METH_VARARGS,
   (char*)"V.HideCursor()\nC++: void HideCursor()\n\n"},
  {(char*)"ShowCursor", PyvtkGenericOpenGLRenderWindow_ShowCursor, METH_VARARGS,
   (char*)"V.ShowCursor()\nC++: void ShowCursor()\n\n"},
  {(char*)"SetFullScreen", PyvtkGenericOpenGLRenderWindow_SetFullScreen, METH_VARARGS,
   (char*)"V.SetFullScreen(int)\nC++: void SetFullScreen(int)\n\n"},
  {(char*)"WindowRemap", PyvtkGenericOpenGLRenderWindow_WindowRemap, METH_VARARGS,
   (char*)"V.WindowRemap()\nC++: void WindowRemap()\n\n"},
  {(char*)"GetEventPending", PyvtkGenericOpenGLRenderWindow_GetEventPending, METH_VARARGS,
   (char*)"V.GetEventPending() -> int\nC++: int GetEventPending()\n\n"},
  {(char*)"SetNextWindowId", PyvtkGenericOpenGLRenderWindow_SetNextWindowId, METH_VARARGS,
   (char*)"V.SetNextWindowId()\nC++: void SetNextWindowId(void *)\n\n"},
  {(char*)"SetNextWindowInfo", PyvtkGenericOpenGLRenderWindow_SetNextWindowInfo, METH_VARARGS,
   (char*)"V.SetNextWindowInfo(string)\nC++: void SetNextWindowInfo(char *)\n\n"},
  {(char*)"CreateAWindow", PyvtkGenericOpenGLRenderWindow_CreateAWindow, METH_VARARGS,
   (char*)"V.CreateAWindow()\nC++: void CreateAWindow()\n\n"},
  {(char*)"DestroyWindow", PyvtkGenericOpenGLRenderWindow_DestroyWindow, METH_VARARGS,
   (char*)"V.DestroyWindow()\nC++: void DestroyWindow()\n\n"},
  {(char*)"SetIsDirect", PyvtkGenericOpenGLRenderWindow_SetIsDirect, METH_VARARGS,
   (char*)"V.SetIsDirect(int)\nC++: void SetIsDirect(int newValue)\n\nAllow to update state within observer callback without changing\ndata argument and MTime.\n"},
  {(char*)"SetSupportsOpenGL", PyvtkGenericOpenGLRenderWindow_SetSupportsOpenGL, METH_VARARGS,
   (char*)"V.SetSupportsOpenGL(int)\nC++: void SetSupportsOpenGL(int newValue)\n\nAllow to update state within observer callback without changing\ndata argument and MTime.\n"},
  {(char*)"SetIsCurrent", PyvtkGenericOpenGLRenderWindow_SetIsCurrent, METH_VARARGS,
   (char*)"V.SetIsCurrent(bool)\nC++: void SetIsCurrent(bool newValue)\n\nAllow to update state within observer callback without changing\ndata argument and MTime.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkGenericOpenGLRenderWindow_StaticNew()
{
  return vtkGenericOpenGLRenderWindow::New();
}

PyObject *PyVTKClass_vtkGenericOpenGLRenderWindowNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkGenericOpenGLRenderWindow_StaticNew,
    PyvtkGenericOpenGLRenderWindow_Methods,
    "vtkGenericOpenGLRenderWindow", modulename,
    NULL, NULL,
    PyvtkGenericOpenGLRenderWindow_Doc(),
    PyVTKClass_vtkOpenGLRenderWindowNew(modulename));
  return cls;
}

const char **PyvtkGenericOpenGLRenderWindow_Doc()
{
  static const char *docstring[] = {
    "vtkGenericOpenGLRenderWindow - platform independent render window\n\n",
    "Superclass: vtkOpenGLRenderWindow\n\n",
    "vtkGenericOpenGLRenderWindow provides a skeleton for implementing a\nrender window using one's own OpenGL context and drawable. To be\neffective, one must register an observer for WindowMakeCurrentEvent,\nWindowIsCurrentEvent and WindowFrameEvent.  When this class sends a\nWindowIsCurrentEvent, the call data is an bool* which one can use to\nreturn whether the context is current.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkGenericOpenGLRenderWindow(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkGenericOpenGLRenderWindowNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkGenericOpenGLRenderWindow", o) != 0)
    {
    Py_DECREF(o);
    }

}

