// python wrapper for vtkFrameBufferObject2
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkFrameBufferObject2.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkFrameBufferObject2(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkFrameBufferObject2New(const char *); }

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkFrameBufferObject2_Doc();


static PyObject *
PyvtkFrameBufferObject2_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFrameBufferObject2 *op = static_cast<vtkFrameBufferObject2 *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkFrameBufferObject2::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkFrameBufferObject2_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFrameBufferObject2 *op = static_cast<vtkFrameBufferObject2 *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkFrameBufferObject2::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkFrameBufferObject2_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFrameBufferObject2 *op = static_cast<vtkFrameBufferObject2 *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkFrameBufferObject2 *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkFrameBufferObject2::NewInstance());

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
PyvtkFrameBufferObject2_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkFrameBufferObject2 *tempr = vtkFrameBufferObject2::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkFrameBufferObject2_SetContext(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetContext");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFrameBufferObject2 *op = static_cast<vtkFrameBufferObject2 *>(vp);

  vtkRenderWindow *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkRenderWindow"))
    {
    if (ap.IsBound())
      {
      op->SetContext(temp0);
      }
    else
      {
      op->vtkFrameBufferObject2::SetContext(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkFrameBufferObject2_GetContext(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetContext");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFrameBufferObject2 *op = static_cast<vtkFrameBufferObject2 *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkRenderWindow *tempr = (ap.IsBound() ?
      op->GetContext() :
      op->vtkFrameBufferObject2::GetContext());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkFrameBufferObject2_IsSupported(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsSupported");

  vtkRenderWindow *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkRenderWindow"))
    {
    bool tempr = vtkFrameBufferObject2::IsSupported(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkFrameBufferObject2_Bind(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Bind");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFrameBufferObject2 *op = static_cast<vtkFrameBufferObject2 *>(vp);

  unsigned int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->Bind(temp0);
      }
    else
      {
      op->vtkFrameBufferObject2::Bind(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkFrameBufferObject2_UnBind(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UnBind");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFrameBufferObject2 *op = static_cast<vtkFrameBufferObject2 *>(vp);

  unsigned int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->UnBind(temp0);
      }
    else
      {
      op->vtkFrameBufferObject2::UnBind(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkFrameBufferObject2_SaveCurrentBindings(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SaveCurrentBindings");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFrameBufferObject2 *op = static_cast<vtkFrameBufferObject2 *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SaveCurrentBindings();
      }
    else
      {
      op->vtkFrameBufferObject2::SaveCurrentBindings();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkFrameBufferObject2_SaveCurrentBuffers(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SaveCurrentBuffers");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFrameBufferObject2 *op = static_cast<vtkFrameBufferObject2 *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SaveCurrentBuffers();
      }
    else
      {
      op->vtkFrameBufferObject2::SaveCurrentBuffers();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkFrameBufferObject2_RestorePreviousBuffers(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RestorePreviousBuffers");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFrameBufferObject2 *op = static_cast<vtkFrameBufferObject2 *>(vp);

  unsigned int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->RestorePreviousBuffers(temp0);
      }
    else
      {
      op->vtkFrameBufferObject2::RestorePreviousBuffers(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkFrameBufferObject2_AddColorAttachment_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddColorAttachment");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFrameBufferObject2 *op = static_cast<vtkFrameBufferObject2 *>(vp);

  unsigned int temp0;
  unsigned int temp1;
  vtkTextureObject *temp2 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetVTKObject(temp2, "vtkTextureObject"))
    {
    if (ap.IsBound())
      {
      op->AddColorAttachment(temp0, temp1, temp2);
      }
    else
      {
      op->vtkFrameBufferObject2::AddColorAttachment(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkFrameBufferObject2_AddColorAttachment_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddColorAttachment");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFrameBufferObject2 *op = static_cast<vtkFrameBufferObject2 *>(vp);

  unsigned int temp0;
  unsigned int temp1;
  vtkRenderbuffer *temp2 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetVTKObject(temp2, "vtkRenderbuffer"))
    {
    if (ap.IsBound())
      {
      op->AddColorAttachment(temp0, temp1, temp2);
      }
    else
      {
      op->vtkFrameBufferObject2::AddColorAttachment(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkFrameBufferObject2_AddColorAttachment_Methods[] = {
  {NULL, PyvtkFrameBufferObject2_AddColorAttachment_s1, METH_VARARGS,
   (char*)"@IIO *vtkTextureObject"},
  {NULL, PyvtkFrameBufferObject2_AddColorAttachment_s2, METH_VARARGS,
   (char*)"@IIO *vtkRenderbuffer"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkFrameBufferObject2_AddColorAttachment(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkFrameBufferObject2_AddColorAttachment_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "AddColorAttachment");
  return NULL;
}



static PyObject *
PyvtkFrameBufferObject2_AddTexColorAttachment(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddTexColorAttachment");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFrameBufferObject2 *op = static_cast<vtkFrameBufferObject2 *>(vp);

  unsigned int temp0;
  unsigned int temp1;
  unsigned int temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      op->AddTexColorAttachment(temp0, temp1, temp2);
      }
    else
      {
      op->vtkFrameBufferObject2::AddTexColorAttachment(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkFrameBufferObject2_RemoveTexColorAttachments(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveTexColorAttachments");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFrameBufferObject2 *op = static_cast<vtkFrameBufferObject2 *>(vp);

  unsigned int temp0;
  unsigned int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->RemoveTexColorAttachments(temp0, temp1);
      }
    else
      {
      op->vtkFrameBufferObject2::RemoveTexColorAttachments(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkFrameBufferObject2_RemoveTexColorAttachment(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveTexColorAttachment");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFrameBufferObject2 *op = static_cast<vtkFrameBufferObject2 *>(vp);

  unsigned int temp0;
  unsigned int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->RemoveTexColorAttachment(temp0, temp1);
      }
    else
      {
      op->vtkFrameBufferObject2::RemoveTexColorAttachment(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkFrameBufferObject2_AddRenColorAttachment(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddRenColorAttachment");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFrameBufferObject2 *op = static_cast<vtkFrameBufferObject2 *>(vp);

  unsigned int temp0;
  unsigned int temp1;
  unsigned int temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      op->AddRenColorAttachment(temp0, temp1, temp2);
      }
    else
      {
      op->vtkFrameBufferObject2::AddRenColorAttachment(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkFrameBufferObject2_RemoveRenColorAttachments(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveRenColorAttachments");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFrameBufferObject2 *op = static_cast<vtkFrameBufferObject2 *>(vp);

  unsigned int temp0;
  unsigned int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->RemoveRenColorAttachments(temp0, temp1);
      }
    else
      {
      op->vtkFrameBufferObject2::RemoveRenColorAttachments(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkFrameBufferObject2_RemoveRenColorAttachment(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveRenColorAttachment");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFrameBufferObject2 *op = static_cast<vtkFrameBufferObject2 *>(vp);

  unsigned int temp0;
  unsigned int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->RemoveRenColorAttachment(temp0, temp1);
      }
    else
      {
      op->vtkFrameBufferObject2::RemoveRenColorAttachment(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkFrameBufferObject2_AddDepthAttachment_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddDepthAttachment");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFrameBufferObject2 *op = static_cast<vtkFrameBufferObject2 *>(vp);

  unsigned int temp0;
  vtkTextureObject *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkTextureObject"))
    {
    if (ap.IsBound())
      {
      op->AddDepthAttachment(temp0, temp1);
      }
    else
      {
      op->vtkFrameBufferObject2::AddDepthAttachment(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkFrameBufferObject2_AddDepthAttachment_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddDepthAttachment");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFrameBufferObject2 *op = static_cast<vtkFrameBufferObject2 *>(vp);

  unsigned int temp0;
  vtkRenderbuffer *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkRenderbuffer"))
    {
    if (ap.IsBound())
      {
      op->AddDepthAttachment(temp0, temp1);
      }
    else
      {
      op->vtkFrameBufferObject2::AddDepthAttachment(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkFrameBufferObject2_AddDepthAttachment_Methods[] = {
  {NULL, PyvtkFrameBufferObject2_AddDepthAttachment_s1, METH_VARARGS,
   (char*)"@IO *vtkTextureObject"},
  {NULL, PyvtkFrameBufferObject2_AddDepthAttachment_s2, METH_VARARGS,
   (char*)"@IO *vtkRenderbuffer"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkFrameBufferObject2_AddDepthAttachment(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkFrameBufferObject2_AddDepthAttachment_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "AddDepthAttachment");
  return NULL;
}



static PyObject *
PyvtkFrameBufferObject2_AddTexDepthAttachment(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddTexDepthAttachment");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFrameBufferObject2 *op = static_cast<vtkFrameBufferObject2 *>(vp);

  unsigned int temp0;
  unsigned int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->AddTexDepthAttachment(temp0, temp1);
      }
    else
      {
      op->vtkFrameBufferObject2::AddTexDepthAttachment(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkFrameBufferObject2_RemoveTexDepthAttachment(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveTexDepthAttachment");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFrameBufferObject2 *op = static_cast<vtkFrameBufferObject2 *>(vp);

  unsigned int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->RemoveTexDepthAttachment(temp0);
      }
    else
      {
      op->vtkFrameBufferObject2::RemoveTexDepthAttachment(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkFrameBufferObject2_AddRenDepthAttachment(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddRenDepthAttachment");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFrameBufferObject2 *op = static_cast<vtkFrameBufferObject2 *>(vp);

  unsigned int temp0;
  unsigned int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->AddRenDepthAttachment(temp0, temp1);
      }
    else
      {
      op->vtkFrameBufferObject2::AddRenDepthAttachment(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkFrameBufferObject2_RemoveRenDepthAttachment(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveRenDepthAttachment");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFrameBufferObject2 *op = static_cast<vtkFrameBufferObject2 *>(vp);

  unsigned int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->RemoveRenDepthAttachment(temp0);
      }
    else
      {
      op->vtkFrameBufferObject2::RemoveRenDepthAttachment(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkFrameBufferObject2_ActivateDrawBuffer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ActivateDrawBuffer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFrameBufferObject2 *op = static_cast<vtkFrameBufferObject2 *>(vp);

  unsigned int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->ActivateDrawBuffer(temp0);
      }
    else
      {
      op->vtkFrameBufferObject2::ActivateDrawBuffer(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkFrameBufferObject2_ActivateReadBuffer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ActivateReadBuffer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFrameBufferObject2 *op = static_cast<vtkFrameBufferObject2 *>(vp);

  unsigned int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->ActivateReadBuffer(temp0);
      }
    else
      {
      op->vtkFrameBufferObject2::ActivateReadBuffer(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkFrameBufferObject2_DeactivateReadBuffer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeactivateReadBuffer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFrameBufferObject2 *op = static_cast<vtkFrameBufferObject2 *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->DeactivateReadBuffer();
      }
    else
      {
      op->vtkFrameBufferObject2::DeactivateReadBuffer();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkFrameBufferObject2_ActivateDrawBuffers_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ActivateDrawBuffers");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFrameBufferObject2 *op = static_cast<vtkFrameBufferObject2 *>(vp);

  unsigned int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->ActivateDrawBuffers(temp0);
      }
    else
      {
      op->vtkFrameBufferObject2::ActivateDrawBuffers(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkFrameBufferObject2_ActivateDrawBuffers_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ActivateDrawBuffers");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFrameBufferObject2 *op = static_cast<vtkFrameBufferObject2 *>(vp);

  unsigned int *temp0 = NULL;
  unsigned int *save0 = NULL;
  unsigned int small0[8];
  int size0 = 0;
  int temp1;
  PyObject *result = NULL;

  if (op)
    {
    size0 = ap.GetArgSize(0);
    temp0 = small0;
    if (size0 > 4)
      {
      temp0 = new unsigned int[2*size0];
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
      op->ActivateDrawBuffers(temp0, temp1);
      }
    else
      {
      op->vtkFrameBufferObject2::ActivateDrawBuffers(temp0, temp1);
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
PyvtkFrameBufferObject2_ActivateDrawBuffers(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkFrameBufferObject2_ActivateDrawBuffers_s1(self, args);
    case 2:
      return PyvtkFrameBufferObject2_ActivateDrawBuffers_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "ActivateDrawBuffers");
  return NULL;
}



static PyObject *
PyvtkFrameBufferObject2_DeactivateDrawBuffers(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeactivateDrawBuffers");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFrameBufferObject2 *op = static_cast<vtkFrameBufferObject2 *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->DeactivateDrawBuffers();
      }
    else
      {
      op->vtkFrameBufferObject2::DeactivateDrawBuffers();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkFrameBufferObject2_InitializeViewport(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "InitializeViewport");

  int temp0;
  int temp1;
  PyObject *result = NULL;

  if (ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    vtkFrameBufferObject2::InitializeViewport(temp0, temp1);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkFrameBufferObject2_CheckFrameBufferStatus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CheckFrameBufferStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFrameBufferObject2 *op = static_cast<vtkFrameBufferObject2 *>(vp);

  unsigned int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->CheckFrameBufferStatus(temp0) :
      op->vtkFrameBufferObject2::CheckFrameBufferStatus(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkFrameBufferObject2_Blit(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "Blit");

  int temp0[4];
  int save0[4];
  const int size0 = 4;
  int temp1[4];
  int save1[4];
  const int size1 = 4;
  unsigned int temp2;
  unsigned int temp3;
  PyObject *result = NULL;

  if (ap.CheckArgCount(4) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
    {
    ap.SaveArray(temp0, save0, size0);
    ap.SaveArray(temp1, save1, size1);

    int tempr = vtkFrameBufferObject2::Blit(temp0, temp1, temp2, temp3);

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
PyvtkFrameBufferObject2_DownloadColor1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DownloadColor1");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFrameBufferObject2 *op = static_cast<vtkFrameBufferObject2 *>(vp);

  int temp0[4];
  int save0[4];
  const int size0 = 4;
  int temp1;
  int temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    ap.SaveArray(temp0, save0, size0);

    vtkPixelBufferObject *tempr = (ap.IsBound() ?
      op->DownloadColor1(temp0, temp1, temp2) :
      op->vtkFrameBufferObject2::DownloadColor1(temp0, temp1, temp2));

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
PyvtkFrameBufferObject2_DownloadColor3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DownloadColor3");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFrameBufferObject2 *op = static_cast<vtkFrameBufferObject2 *>(vp);

  int temp0[4];
  int save0[4];
  const int size0 = 4;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1))
    {
    ap.SaveArray(temp0, save0, size0);

    vtkPixelBufferObject *tempr = (ap.IsBound() ?
      op->DownloadColor3(temp0, temp1) :
      op->vtkFrameBufferObject2::DownloadColor3(temp0, temp1));

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
PyvtkFrameBufferObject2_DownloadColor4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DownloadColor4");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFrameBufferObject2 *op = static_cast<vtkFrameBufferObject2 *>(vp);

  int temp0[4];
  int save0[4];
  const int size0 = 4;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1))
    {
    ap.SaveArray(temp0, save0, size0);

    vtkPixelBufferObject *tempr = (ap.IsBound() ?
      op->DownloadColor4(temp0, temp1) :
      op->vtkFrameBufferObject2::DownloadColor4(temp0, temp1));

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
PyvtkFrameBufferObject2_DownloadDepth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DownloadDepth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFrameBufferObject2 *op = static_cast<vtkFrameBufferObject2 *>(vp);

  int temp0[4];
  int save0[4];
  const int size0 = 4;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1))
    {
    ap.SaveArray(temp0, save0, size0);

    vtkPixelBufferObject *tempr = (ap.IsBound() ?
      op->DownloadDepth(temp0, temp1) :
      op->vtkFrameBufferObject2::DownloadDepth(temp0, temp1));

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
PyvtkFrameBufferObject2_Download_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Download");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFrameBufferObject2 *op = static_cast<vtkFrameBufferObject2 *>(vp);

  int temp0[4];
  int save0[4];
  const int size0 = 4;
  int temp1;
  int temp2;
  int temp3;
  int temp4;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(5) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4))
    {
    ap.SaveArray(temp0, save0, size0);

    vtkPixelBufferObject *tempr = (ap.IsBound() ?
      op->Download(temp0, temp1, temp2, temp3, temp4) :
      op->vtkFrameBufferObject2::Download(temp0, temp1, temp2, temp3, temp4));

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
PyvtkFrameBufferObject2_Download_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "Download");

  int temp0[4];
  int save0[4];
  const int size0 = 4;
  int temp1;
  int temp2;
  int temp3;
  int temp4;
  vtkPixelBufferObject *temp5 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(6) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetVTKObject(temp5, "vtkPixelBufferObject"))
    {
    ap.SaveArray(temp0, save0, size0);

    vtkFrameBufferObject2::Download(temp0, temp1, temp2, temp3, temp4, temp5);

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
PyvtkFrameBufferObject2_Download(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
    {
    case 5:
      return PyvtkFrameBufferObject2_Download_s1(self, args);
    case 6:
      return PyvtkFrameBufferObject2_Download_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "Download");
  return NULL;
}


static PyMethodDef PyvtkFrameBufferObject2_Methods[] = {
  {(char*)"GetClassName", PyvtkFrameBufferObject2_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkFrameBufferObject2_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkFrameBufferObject2_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkFrameBufferObject2\nC++: vtkFrameBufferObject2 *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkFrameBufferObject2_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkFrameBufferObject2\nC++: vtkFrameBufferObject2 *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetContext", PyvtkFrameBufferObject2_SetContext, METH_VARARGS,
   (char*)"V.SetContext(vtkRenderWindow)\nC++: void SetContext(vtkRenderWindow *context)\n\nGet/Set the context. Context must be a vtkOpenGLRenderWindow.\nThis does not increase the reference count of the context to\navoid reference loops. SetContext() may raise an error is the\nOpenGL context does not support the required OpenGL extensions.\n"},
  {(char*)"GetContext", PyvtkFrameBufferObject2_GetContext, METH_VARARGS,
   (char*)"V.GetContext() -> vtkRenderWindow\nC++: vtkRenderWindow *GetContext()\n\nGet/Set the context. Context must be a vtkOpenGLRenderWindow.\nThis does not increase the reference count of the context to\navoid reference loops. SetContext() may raise an error is the\nOpenGL context does not support the required OpenGL extensions.\n"},
  {(char*)"IsSupported", PyvtkFrameBufferObject2_IsSupported, METH_VARARGS | METH_STATIC,
   (char*)"V.IsSupported(vtkRenderWindow) -> bool\nC++: static bool IsSupported(vtkRenderWindow *renWin)\n\nReturns if the context supports the required extensions.\nExtension will be loaded when the conetxt is set.\n"},
  {(char*)"Bind", PyvtkFrameBufferObject2_Bind, METH_VARARGS,
   (char*)"V.Bind(int)\nC++: void Bind(unsigned int mode)\n\nBind FBO to FRAMEBUFFER,  DRAW_FRAMEBUFFER or READ_FRAMEBUFFER\nThe current binding is not saved, nor restored. (see\nglBindFramebuffer) This method can be used to prepare for FBO\nBlit or buffer ping-pong. Low level api.\n"},
  {(char*)"UnBind", PyvtkFrameBufferObject2_UnBind, METH_VARARGS,
   (char*)"V.UnBind(int)\nC++: void UnBind(unsigned int mode)\n\nBind saved FBO (see SaveCurrentBindings) for DRAW or READ (see\nglBindFramebuffer) If no bindings were saved bind to default FBO.\nLow level api.\n"},
  {(char*)"SaveCurrentBindings", PyvtkFrameBufferObject2_SaveCurrentBindings, METH_VARARGS,
   (char*)"V.SaveCurrentBindings()\nC++: void SaveCurrentBindings()\n\nStore the current framebuffer bindings. If this method is called\nthen UnBind will restore the saved value accoring to its mode\n(DRAW_FRAMEBUFFER,READ_FRAMEBUFFER,FRAMEBUFFER) Restoration\noccurs in UnBind. Low level api\n"},
  {(char*)"SaveCurrentBuffers", PyvtkFrameBufferObject2_SaveCurrentBuffers, METH_VARARGS,
   (char*)"V.SaveCurrentBuffers()\nC++: void SaveCurrentBuffers()\n\nStore the current draw and read buffers. When restored only the\nbuffers matching mode are modified. DRAW_FRAMEBUFFER ->\nglDrawBuffer READ_FRAMEBUFFER -> glReadBuffer FRAMEBUFFER -> both\n"},
  {(char*)"RestorePreviousBuffers", PyvtkFrameBufferObject2_RestorePreviousBuffers, METH_VARARGS,
   (char*)"V.RestorePreviousBuffers(int)\nC++: void RestorePreviousBuffers(unsigned int mode)\n\nStore the current draw and read buffers. When restored only the\nbuffers matching mode are modified. DRAW_FRAMEBUFFER ->\nglDrawBuffer READ_FRAMEBUFFER -> glReadBuffer FRAMEBUFFER -> both\n"},
  {(char*)"AddColorAttachment", PyvtkFrameBufferObject2_AddColorAttachment, METH_VARARGS,
   (char*)"V.AddColorAttachment(int, int, vtkTextureObject)\nC++: void AddColorAttachment(unsigned int mode,\n    unsigned int attId, vtkTextureObject *tex)\nV.AddColorAttachment(int, int, vtkRenderbuffer)\nC++: void AddColorAttachment(unsigned int mode,\n    unsigned int attId, vtkRenderbuffer *tex)\n\nDirectly assign/remove a texture to color attachments.\n"},
  {(char*)"AddTexColorAttachment", PyvtkFrameBufferObject2_AddTexColorAttachment, METH_VARARGS,
   (char*)"V.AddTexColorAttachment(int, int, int)\nC++: void AddTexColorAttachment(unsigned int mode,\n    unsigned int attId, unsigned int handle)\n\n"},
  {(char*)"RemoveTexColorAttachments", PyvtkFrameBufferObject2_RemoveTexColorAttachments, METH_VARARGS,
   (char*)"V.RemoveTexColorAttachments(int, int)\nC++: void RemoveTexColorAttachments(unsigned int mode,\n    unsigned int num)\n\n"},
  {(char*)"RemoveTexColorAttachment", PyvtkFrameBufferObject2_RemoveTexColorAttachment, METH_VARARGS,
   (char*)"V.RemoveTexColorAttachment(int, int)\nC++: void RemoveTexColorAttachment(unsigned int mode,\n    unsigned int attId)\n\n"},
  {(char*)"AddRenColorAttachment", PyvtkFrameBufferObject2_AddRenColorAttachment, METH_VARARGS,
   (char*)"V.AddRenColorAttachment(int, int, int)\nC++: void AddRenColorAttachment(unsigned int mode,\n    unsigned int attId, unsigned int handle)\n\n"},
  {(char*)"RemoveRenColorAttachments", PyvtkFrameBufferObject2_RemoveRenColorAttachments, METH_VARARGS,
   (char*)"V.RemoveRenColorAttachments(int, int)\nC++: void RemoveRenColorAttachments(unsigned int mode,\n    unsigned int num)\n\n"},
  {(char*)"RemoveRenColorAttachment", PyvtkFrameBufferObject2_RemoveRenColorAttachment, METH_VARARGS,
   (char*)"V.RemoveRenColorAttachment(int, int)\nC++: void RemoveRenColorAttachment(unsigned int mode,\n    unsigned int attId)\n\n"},
  {(char*)"AddDepthAttachment", PyvtkFrameBufferObject2_AddDepthAttachment, METH_VARARGS,
   (char*)"V.AddDepthAttachment(int, vtkTextureObject)\nC++: void AddDepthAttachment(unsigned int mode,\n    vtkTextureObject *tex)\nV.AddDepthAttachment(int, vtkRenderbuffer)\nC++: void AddDepthAttachment(unsigned int mode,\n    vtkRenderbuffer *tex)\n\nDirectly assign/remove a texture/renderbuffer to depth\nattachments.\n"},
  {(char*)"AddTexDepthAttachment", PyvtkFrameBufferObject2_AddTexDepthAttachment, METH_VARARGS,
   (char*)"V.AddTexDepthAttachment(int, int)\nC++: void AddTexDepthAttachment(unsigned int mode,\n    unsigned int handle)\n\nDirectly assign/remove a texture/renderbuffer to depth\nattachments.\n"},
  {(char*)"RemoveTexDepthAttachment", PyvtkFrameBufferObject2_RemoveTexDepthAttachment, METH_VARARGS,
   (char*)"V.RemoveTexDepthAttachment(int)\nC++: void RemoveTexDepthAttachment(unsigned int mode)\n\nDirectly assign/remove a texture/renderbuffer to depth\nattachments.\n"},
  {(char*)"AddRenDepthAttachment", PyvtkFrameBufferObject2_AddRenDepthAttachment, METH_VARARGS,
   (char*)"V.AddRenDepthAttachment(int, int)\nC++: void AddRenDepthAttachment(unsigned int mode,\n    unsigned int handle)\n\nDirectly assign/remove a renderbuffer to depth attachments.\n"},
  {(char*)"RemoveRenDepthAttachment", PyvtkFrameBufferObject2_RemoveRenDepthAttachment, METH_VARARGS,
   (char*)"V.RemoveRenDepthAttachment(int)\nC++: void RemoveRenDepthAttachment(unsigned int mode)\n\nDirectly assign/remove a renderbuffer to depth attachments.\n"},
  {(char*)"ActivateDrawBuffer", PyvtkFrameBufferObject2_ActivateDrawBuffer, METH_VARARGS,
   (char*)"V.ActivateDrawBuffer(int)\nC++: void ActivateDrawBuffer(unsigned int id)\n\nSelect a single specific draw or read buffer (zero based)\n"},
  {(char*)"ActivateReadBuffer", PyvtkFrameBufferObject2_ActivateReadBuffer, METH_VARARGS,
   (char*)"V.ActivateReadBuffer(int)\nC++: void ActivateReadBuffer(unsigned int id)\n\nSelect a single specific draw or read buffer (zero based)\n"},
  {(char*)"DeactivateReadBuffer", PyvtkFrameBufferObject2_DeactivateReadBuffer, METH_VARARGS,
   (char*)"V.DeactivateReadBuffer()\nC++: void DeactivateReadBuffer()\n\nSelect a single specific draw or read buffer (zero based)\n"},
  {(char*)"ActivateDrawBuffers", PyvtkFrameBufferObject2_ActivateDrawBuffers, METH_VARARGS,
   (char*)"V.ActivateDrawBuffers(int)\nC++: void ActivateDrawBuffers(unsigned int n)\nV.ActivateDrawBuffers([int, ...], int)\nC++: void ActivateDrawBuffers(unsigned int *ids, int n)\n\nSelect n consecutive write attachments. Low level api.\n"},
  {(char*)"DeactivateDrawBuffers", PyvtkFrameBufferObject2_DeactivateDrawBuffers, METH_VARARGS,
   (char*)"V.DeactivateDrawBuffers()\nC++: void DeactivateDrawBuffers()\n\nSelect n consecutive write attachments. Low level api.\n"},
  {(char*)"InitializeViewport", PyvtkFrameBufferObject2_InitializeViewport, METH_VARARGS | METH_STATIC,
   (char*)"V.InitializeViewport(int, int)\nC++: static void InitializeViewport(int width, int height)\n\nSet up ortho viewport with scissor, lighting, blend, and depth\ndisabled. The method affects the current bound FBO. The method is\nstatic so that it may be used on the default FBO without an\ninstance. Low level api.\n"},
  {(char*)"CheckFrameBufferStatus", PyvtkFrameBufferObject2_CheckFrameBufferStatus, METH_VARARGS,
   (char*)"V.CheckFrameBufferStatus(int) -> int\nC++: int CheckFrameBufferStatus(unsigned int mode)\n\nValidate the current FBO configuration (attachments, formats,\netc) prints detected errors to vtkErrorMacro. Low level api.\n"},
  {(char*)"Blit", PyvtkFrameBufferObject2_Blit, METH_VARARGS | METH_STATIC,
   (char*)"V.Blit([int, int, int, int], [int, int, int, int], int, int)\n    -> int\nC++: static int Blit(int srcExt[4], int destExt[4],\n    unsigned int bits, unsigned int mapping)\n\nCopy from the currently bound READ FBO to the currently bound\nDRAW FBO. The method is static so that one doesn't need to\nccreate an instance when transfering between attachments in the\ndefault FBO.\n"},
  {(char*)"DownloadColor1", PyvtkFrameBufferObject2_DownloadColor1, METH_VARARGS,
   (char*)"V.DownloadColor1([int, int, int, int], int, int)\n    -> vtkPixelBufferObject\nC++: vtkPixelBufferObject *DownloadColor1(int extent[4],\n    int vtkType, int channel)\n\nDownload data from the read color attachment of the currently\nbound FBO into the retruned PBO. The PBO must be free'd when you\nare finished with it. The number of components in the PBO is the\nsame as in the name of the specific  download fucntion. When\ndownloading a single color channel, the channel must be\nidentified by index, 1->red, 2->green, 3-> blue.\n"},
  {(char*)"DownloadColor3", PyvtkFrameBufferObject2_DownloadColor3, METH_VARARGS,
   (char*)"V.DownloadColor3([int, int, int, int], int)\n    -> vtkPixelBufferObject\nC++: vtkPixelBufferObject *DownloadColor3(int extent[4],\n    int vtkType)\n\n"},
  {(char*)"DownloadColor4", PyvtkFrameBufferObject2_DownloadColor4, METH_VARARGS,
   (char*)"V.DownloadColor4([int, int, int, int], int)\n    -> vtkPixelBufferObject\nC++: vtkPixelBufferObject *DownloadColor4(int extent[4],\n    int vtkType)\n\n"},
  {(char*)"DownloadDepth", PyvtkFrameBufferObject2_DownloadDepth, METH_VARARGS,
   (char*)"V.DownloadDepth([int, int, int, int], int) -> vtkPixelBufferObject\nC++: vtkPixelBufferObject *DownloadDepth(int extent[4],\n    int vtkType)\n\nDownload data from the depth attachment of the currently bound\nFBO. The returned PBO must be Delete'd by the caller. The\nretruned PBO has one component.\n"},
  {(char*)"Download", PyvtkFrameBufferObject2_Download, METH_VARARGS,
   (char*)"V.Download([int, int, int, int], int, int, int, int)\n    -> vtkPixelBufferObject\nC++: vtkPixelBufferObject *Download(int extent[4], int vtkType,\n    int nComps, int oglType, int oglFormat)\nV.Download([int, int, int, int], int, int, int, int,\n    vtkPixelBufferObject)\nC++: static void Download(int extent[4], int vtkType, int nComps,\n    int oglType, int oglFormat, vtkPixelBufferObject *pbo)\n\nDownload data from the read buffer of the current FBO. These are\nlow level meothds. In the static variant a PBO must be passed in\nsince we don't have access to a context. The static method is\nprovided so that one may download from the default FBO.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkFrameBufferObject2_StaticNew()
{
  return vtkFrameBufferObject2::New();
}

PyObject *PyVTKClass_vtkFrameBufferObject2New(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkFrameBufferObject2_StaticNew,
    PyvtkFrameBufferObject2_Methods,
    "vtkFrameBufferObject2", modulename,
    NULL, NULL,
    PyvtkFrameBufferObject2_Doc(),
    PyVTKClass_vtkObjectNew(modulename));
  return cls;
}

const char **PyvtkFrameBufferObject2_Doc()
{
  static const char *docstring[] = {
    "vtkFrameBufferObject2 - Interface to OpenGL framebuffer object.\n\n",
    "Superclass: vtkObject\n\n",
    "A light and efficient interface to an OpenGL Frame Buffer Object. Use\nis very simillalry to directly calling OpenGL, but as vtkObject it\nmay safely stored, shared, or passed around. It supports FBO Blit and\ntransfer to Pixel Buffer Object.\n\nTypical use case:{.cpp}\nvtkFrameBufferObject2 *fbo = this->Internals->FBO;\nfbo->SaveCurrentBindings();\nfbo->Bind(vtkgl::FRAMEBUFFER_EXT);\nfbo->AddDepthAttachme",
    "nt(vtkgl::DRAW_FRAMEBUFFER_EXT, depthBuffer);\nfbo->AddColorAttachment(vtkgl::DRAW_FRAMEBUFFER_EXT, 0U, colorTex1);\nfbo->AddColorAttachment(vtkgl::DRAW_FRAMEBUFFER_EXT, 1U, colorTex2);\nfbo->AddColorAttachment(vtkgl::DRAW_FRAMEBUFFER_EXT, 2U, colorTex3);\nfbo->ActivateDrawBuffers(3);\nvtkCheckFrameBufferStatusMacro(vtkgl::FRAMEBUFFER_EXT);\n\n...\n\nfbo->UnBind(vtkgl::FRAMEBUFFER_EXT);\n\nSee Also:\n\nvtkRend",
    "erbuffer, vtkPixelBufferObject\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkFrameBufferObject2(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkFrameBufferObject2New(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkFrameBufferObject2", o) != 0)
    {
    Py_DECREF(o);
    }

}

