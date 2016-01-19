// python wrapper for vtkFrameBufferObject
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkFrameBufferObject.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkFrameBufferObject(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkFrameBufferObjectNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkFrameBufferObject_Doc();


static PyObject *
PyvtkFrameBufferObject_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFrameBufferObject *op = static_cast<vtkFrameBufferObject *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkFrameBufferObject::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkFrameBufferObject_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFrameBufferObject *op = static_cast<vtkFrameBufferObject *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkFrameBufferObject::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkFrameBufferObject_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFrameBufferObject *op = static_cast<vtkFrameBufferObject *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkFrameBufferObject *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkFrameBufferObject::NewInstance());

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
PyvtkFrameBufferObject_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkFrameBufferObject *tempr = vtkFrameBufferObject::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkFrameBufferObject_SetContext(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetContext");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFrameBufferObject *op = static_cast<vtkFrameBufferObject *>(vp);

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
      op->vtkFrameBufferObject::SetContext(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkFrameBufferObject_GetContext(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetContext");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFrameBufferObject *op = static_cast<vtkFrameBufferObject *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkRenderWindow *tempr = (ap.IsBound() ?
      op->GetContext() :
      op->vtkFrameBufferObject::GetContext());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkFrameBufferObject_Start(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Start");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFrameBufferObject *op = static_cast<vtkFrameBufferObject *>(vp);

  int temp0;
  int temp1;
  bool temp2 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    bool tempr = (ap.IsBound() ?
      op->Start(temp0, temp1, temp2) :
      op->vtkFrameBufferObject::Start(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkFrameBufferObject_StartNonOrtho(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StartNonOrtho");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFrameBufferObject *op = static_cast<vtkFrameBufferObject *>(vp);

  int temp0;
  int temp1;
  bool temp2 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    bool tempr = (ap.IsBound() ?
      op->StartNonOrtho(temp0, temp1, temp2) :
      op->vtkFrameBufferObject::StartNonOrtho(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkFrameBufferObject_RenderQuad(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderQuad");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFrameBufferObject *op = static_cast<vtkFrameBufferObject *>(vp);

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
      op->RenderQuad(temp0, temp1, temp2, temp3);
      }
    else
      {
      op->vtkFrameBufferObject::RenderQuad(temp0, temp1, temp2, temp3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkFrameBufferObject_Bind(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Bind");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFrameBufferObject *op = static_cast<vtkFrameBufferObject *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Bind();
      }
    else
      {
      op->vtkFrameBufferObject::Bind();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkFrameBufferObject_UnBind(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UnBind");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFrameBufferObject *op = static_cast<vtkFrameBufferObject *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->UnBind();
      }
    else
      {
      op->vtkFrameBufferObject::UnBind();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkFrameBufferObject_SetActiveBuffer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetActiveBuffer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFrameBufferObject *op = static_cast<vtkFrameBufferObject *>(vp);

  unsigned int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetActiveBuffer(temp0);
      }
    else
      {
      op->vtkFrameBufferObject::SetActiveBuffer(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkFrameBufferObject_SetActiveBuffers(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetActiveBuffers");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFrameBufferObject *op = static_cast<vtkFrameBufferObject *>(vp);

  int temp0;
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
      op->SetActiveBuffers(temp0, temp1);
      }
    else
      {
      op->vtkFrameBufferObject::SetActiveBuffers(temp0, temp1);
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
PyvtkFrameBufferObject_SetColorBuffer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColorBuffer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFrameBufferObject *op = static_cast<vtkFrameBufferObject *>(vp);

  unsigned int temp0;
  vtkTextureObject *temp1 = NULL;
  unsigned int temp2 = 0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2, 3) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkTextureObject") &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)))
    {
    if (ap.IsBound())
      {
      op->SetColorBuffer(temp0, temp1, temp2);
      }
    else
      {
      op->vtkFrameBufferObject::SetColorBuffer(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkFrameBufferObject_GetColorBuffer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColorBuffer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFrameBufferObject *op = static_cast<vtkFrameBufferObject *>(vp);

  unsigned int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkTextureObject *tempr = (ap.IsBound() ?
      op->GetColorBuffer(temp0) :
      op->vtkFrameBufferObject::GetColorBuffer(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkFrameBufferObject_RemoveColorBuffer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveColorBuffer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFrameBufferObject *op = static_cast<vtkFrameBufferObject *>(vp);

  unsigned int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->RemoveColorBuffer(temp0);
      }
    else
      {
      op->vtkFrameBufferObject::RemoveColorBuffer(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkFrameBufferObject_RemoveAllColorBuffers(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveAllColorBuffers");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFrameBufferObject *op = static_cast<vtkFrameBufferObject *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->RemoveAllColorBuffers();
      }
    else
      {
      op->vtkFrameBufferObject::RemoveAllColorBuffers();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkFrameBufferObject_SetDepthBuffer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDepthBuffer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFrameBufferObject *op = static_cast<vtkFrameBufferObject *>(vp);

  vtkTextureObject *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkTextureObject"))
    {
    if (ap.IsBound())
      {
      op->SetDepthBuffer(temp0);
      }
    else
      {
      op->vtkFrameBufferObject::SetDepthBuffer(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkFrameBufferObject_RemoveDepthBuffer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveDepthBuffer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFrameBufferObject *op = static_cast<vtkFrameBufferObject *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->RemoveDepthBuffer();
      }
    else
      {
      op->vtkFrameBufferObject::RemoveDepthBuffer();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkFrameBufferObject_SetDepthBufferNeeded(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDepthBufferNeeded");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFrameBufferObject *op = static_cast<vtkFrameBufferObject *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetDepthBufferNeeded(temp0);
      }
    else
      {
      op->vtkFrameBufferObject::SetDepthBufferNeeded(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkFrameBufferObject_GetDepthBufferNeeded(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDepthBufferNeeded");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFrameBufferObject *op = static_cast<vtkFrameBufferObject *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetDepthBufferNeeded() :
      op->vtkFrameBufferObject::GetDepthBufferNeeded());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkFrameBufferObject_SetNumberOfRenderTargets(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfRenderTargets");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFrameBufferObject *op = static_cast<vtkFrameBufferObject *>(vp);

  unsigned int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetNumberOfRenderTargets(temp0);
      }
    else
      {
      op->vtkFrameBufferObject::SetNumberOfRenderTargets(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkFrameBufferObject_GetNumberOfRenderTargets(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfRenderTargets");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFrameBufferObject *op = static_cast<vtkFrameBufferObject *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned int tempr = (ap.IsBound() ?
      op->GetNumberOfRenderTargets() :
      op->vtkFrameBufferObject::GetNumberOfRenderTargets());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkFrameBufferObject_GetMaximumNumberOfActiveTargets(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumNumberOfActiveTargets");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFrameBufferObject *op = static_cast<vtkFrameBufferObject *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned int tempr = (ap.IsBound() ?
      op->GetMaximumNumberOfActiveTargets() :
      op->vtkFrameBufferObject::GetMaximumNumberOfActiveTargets());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkFrameBufferObject_GetMaximumNumberOfRenderTargets(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumNumberOfRenderTargets");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFrameBufferObject *op = static_cast<vtkFrameBufferObject *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned int tempr = (ap.IsBound() ?
      op->GetMaximumNumberOfRenderTargets() :
      op->vtkFrameBufferObject::GetMaximumNumberOfRenderTargets());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkFrameBufferObject_GetLastSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLastSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFrameBufferObject *op = static_cast<vtkFrameBufferObject *>(vp);

  int sizer = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int *tempr = (ap.IsBound() ?
      op->GetLastSize() :
      op->vtkFrameBufferObject::GetLastSize());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkFrameBufferObject_IsSupported(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsSupported");

  vtkRenderWindow *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkRenderWindow"))
    {
    bool tempr = vtkFrameBufferObject::IsSupported(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkFrameBufferObject_CheckFrameBufferStatus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CheckFrameBufferStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFrameBufferObject *op = static_cast<vtkFrameBufferObject *>(vp);

  unsigned int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->CheckFrameBufferStatus(temp0) :
      op->vtkFrameBufferObject::CheckFrameBufferStatus(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkFrameBufferObject_Methods[] = {
  {(char*)"GetClassName", PyvtkFrameBufferObject_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkFrameBufferObject_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkFrameBufferObject_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkFrameBufferObject\nC++: vtkFrameBufferObject *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkFrameBufferObject_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkFrameBufferObject\nC++: vtkFrameBufferObject *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetContext", PyvtkFrameBufferObject_SetContext, METH_VARARGS,
   (char*)"V.SetContext(vtkRenderWindow)\nC++: void SetContext(vtkRenderWindow *context)\n\nGet/Set the context. Context must be a vtkOpenGLRenderWindow.\nThis does not increase the reference count of the context to\navoid reference loops. SetContext() may raise an error is the\nOpenGL context does not support the required OpenGL extensions.\n"},
  {(char*)"GetContext", PyvtkFrameBufferObject_GetContext, METH_VARARGS,
   (char*)"V.GetContext() -> vtkRenderWindow\nC++: vtkRenderWindow *GetContext()\n\nGet/Set the context. Context must be a vtkOpenGLRenderWindow.\nThis does not increase the reference count of the context to\navoid reference loops. SetContext() may raise an error is the\nOpenGL context does not support the required OpenGL extensions.\n"},
  {(char*)"Start", PyvtkFrameBufferObject_Start, METH_VARARGS,
   (char*)"V.Start(int, int, bool) -> bool\nC++: bool Start(int width, int height,\n    bool shaderSupportsTextureInt)\n\nUser must take care that width/height match the dimensions of the\nuser defined texture attachments. This method makes the \"active\nbuffers\" the buffers that will get drawn into by subsequent\ndrawing calls. Note that this does not clear the render buffers\ni.e. no glClear() calls are made by either of these methods. It's\nup to the caller to clear the buffers if needed.\n"},
  {(char*)"StartNonOrtho", PyvtkFrameBufferObject_StartNonOrtho, METH_VARARGS,
   (char*)"V.StartNonOrtho(int, int, bool) -> bool\nC++: bool StartNonOrtho(int width, int height,\n    bool shaderSupportsTextureInt)\n\nUser must take care that width/height match the dimensions of the\nuser defined texture attachments. This method makes the \"active\nbuffers\" the buffers that will get drawn into by subsequent\ndrawing calls. Note that this does not clear the render buffers\ni.e. no glClear() calls are made by either of these methods. It's\nup to the caller to clear the buffers if needed.\n"},
  {(char*)"RenderQuad", PyvtkFrameBufferObject_RenderQuad, METH_VARARGS,
   (char*)"V.RenderQuad(int, int, int, int)\nC++: void RenderQuad(int minX, int maxX, int minY, int maxY)\n\nRenders a quad at the given location with pixel coordinates. This\nmethod is provided as a convenience, since we often render quads\nin a FBO.\n\\pre positive_minX: minX>=0\n\\pre increasing_x: minX<=maxX\n\\pre valid_maxX: maxX<LastSize[0]\n\\pre positive_minY: minY>=0\n\\pre increasing_y: minY<=maxY\n\\pre valid_maxY: maxY<LastSize[1]\n"},
  {(char*)"Bind", PyvtkFrameBufferObject_Bind, METH_VARARGS,
   (char*)"V.Bind()\nC++: void Bind()\n\nMake the draw frame buffer active (uses FRAMEBUFFER).\n"},
  {(char*)"UnBind", PyvtkFrameBufferObject_UnBind, METH_VARARGS,
   (char*)"V.UnBind()\nC++: void UnBind()\n\nRestore the previous draw framebuffer if saved, else bind the\ndefault buffer.\n"},
  {(char*)"SetActiveBuffer", PyvtkFrameBufferObject_SetActiveBuffer, METH_VARARGS,
   (char*)"V.SetActiveBuffer(int)\nC++: void SetActiveBuffer(unsigned int index)\n\nChoose the buffers to render into.\n"},
  {(char*)"SetActiveBuffers", PyvtkFrameBufferObject_SetActiveBuffers, METH_VARARGS,
   (char*)"V.SetActiveBuffers(int, [int, ...])\nC++: void SetActiveBuffers(int numbuffers, unsigned int indices[])\n\nUser provided color buffers are attached by index to color\nbuffers. This command lets you select which attachments are\nwritten to. See set color buffer. This call overwrites what the\nprevious list of active buffers.\n"},
  {(char*)"SetColorBuffer", PyvtkFrameBufferObject_SetColorBuffer, METH_VARARGS,
   (char*)"V.SetColorBuffer(int, vtkTextureObject, int)\nC++: void SetColorBuffer(unsigned int index,\n    vtkTextureObject *texture, unsigned int zslice=0)\n\nInsert a color buffer into the list of available color buffers. 0\nto NumberOfRenderTargets of these are attached to color\nattachments by index. See SetActiveBuffers to select them for\nwriting. All user specified texture objects must match the FBO\ndimensions and must have been created by the time Start() gets\ncalled. If texture is a 3D texture, zslice identifies the zslice\nthat will be attached to the color buffer.\n\nCaveat:\n\nCurrently, 1D textures are not supported.\n"},
  {(char*)"GetColorBuffer", PyvtkFrameBufferObject_GetColorBuffer, METH_VARARGS,
   (char*)"V.GetColorBuffer(int) -> vtkTextureObject\nC++: vtkTextureObject *GetColorBuffer(unsigned int index)\n\n"},
  {(char*)"RemoveColorBuffer", PyvtkFrameBufferObject_RemoveColorBuffer, METH_VARARGS,
   (char*)"V.RemoveColorBuffer(int)\nC++: void RemoveColorBuffer(unsigned int index)\n\n"},
  {(char*)"RemoveAllColorBuffers", PyvtkFrameBufferObject_RemoveAllColorBuffers, METH_VARARGS,
   (char*)"V.RemoveAllColorBuffers()\nC++: void RemoveAllColorBuffers()\n\n"},
  {(char*)"SetDepthBuffer", PyvtkFrameBufferObject_SetDepthBuffer, METH_VARARGS,
   (char*)"V.SetDepthBuffer(vtkTextureObject)\nC++: void SetDepthBuffer(vtkTextureObject *depthTexture)\n\nSet the texture to use as depth buffer.\n"},
  {(char*)"RemoveDepthBuffer", PyvtkFrameBufferObject_RemoveDepthBuffer, METH_VARARGS,
   (char*)"V.RemoveDepthBuffer()\nC++: void RemoveDepthBuffer()\n\nSet the texture to use as depth buffer.\n"},
  {(char*)"SetDepthBufferNeeded", PyvtkFrameBufferObject_SetDepthBufferNeeded, METH_VARARGS,
   (char*)"V.SetDepthBufferNeeded(bool)\nC++: void SetDepthBufferNeeded(bool a)\n\nIf true, the frame buffer object will be initialized with a depth\nbuffer. Initial value is true.\n"},
  {(char*)"GetDepthBufferNeeded", PyvtkFrameBufferObject_GetDepthBufferNeeded, METH_VARARGS,
   (char*)"V.GetDepthBufferNeeded() -> bool\nC++: bool GetDepthBufferNeeded()\n\nIf true, the frame buffer object will be initialized with a depth\nbuffer. Initial value is true.\n"},
  {(char*)"SetNumberOfRenderTargets", PyvtkFrameBufferObject_SetNumberOfRenderTargets, METH_VARARGS,
   (char*)"V.SetNumberOfRenderTargets(int)\nC++: void SetNumberOfRenderTargets(unsigned int)\n\nSet/Get the number of render targets to render into at once.\nTextures (user supplied or generated internally) are attached to\ncolor attachment 0 to NumberOfRenderTargets. You can use\nSetActiveBuffer to specify which of these are actually written\nto. If zero then all of the user provided color buffers are used.\n"},
  {(char*)"GetNumberOfRenderTargets", PyvtkFrameBufferObject_GetNumberOfRenderTargets, METH_VARARGS,
   (char*)"V.GetNumberOfRenderTargets() -> int\nC++: unsigned int GetNumberOfRenderTargets()\n\nSet/Get the number of render targets to render into at once.\nTextures (user supplied or generated internally) are attached to\ncolor attachment 0 to NumberOfRenderTargets. You can use\nSetActiveBuffer to specify which of these are actually written\nto. If zero then all of the user provided color buffers are used.\n"},
  {(char*)"GetMaximumNumberOfActiveTargets", PyvtkFrameBufferObject_GetMaximumNumberOfActiveTargets, METH_VARARGS,
   (char*)"V.GetMaximumNumberOfActiveTargets() -> int\nC++: unsigned int GetMaximumNumberOfActiveTargets()\n\nReturns the maximum number of targets that can be rendered to at\none time. This limits the active targets set by\nSetActiveTargets(). The return value is valid only if GetContext\nis non-null.\n"},
  {(char*)"GetMaximumNumberOfRenderTargets", PyvtkFrameBufferObject_GetMaximumNumberOfRenderTargets, METH_VARARGS,
   (char*)"V.GetMaximumNumberOfRenderTargets() -> int\nC++: unsigned int GetMaximumNumberOfRenderTargets()\n\nReturns the maximum number of render targets available. This\nlimits the available attachement points for SetColorAttachment().\nThe return value is valid only if GetContext is non-null.\n"},
  {(char*)"GetLastSize", PyvtkFrameBufferObject_GetLastSize, METH_VARARGS,
   (char*)"V.GetLastSize() -> (int, int)\nC++: int *GetLastSize()\n\n"},
  {(char*)"IsSupported", PyvtkFrameBufferObject_IsSupported, METH_VARARGS | METH_STATIC,
   (char*)"V.IsSupported(vtkRenderWindow) -> bool\nC++: static bool IsSupported(vtkRenderWindow *renWin)\n\nReturns if the context supports the required extensions.\nExtension will be loaded when the conetxt is set.\n"},
  {(char*)"CheckFrameBufferStatus", PyvtkFrameBufferObject_CheckFrameBufferStatus, METH_VARARGS,
   (char*)"V.CheckFrameBufferStatus(int) -> int\nC++: int CheckFrameBufferStatus(unsigned int mode)\n\nValidate the current FBO configuration (attachments, formats,\netc) prints detected errors to vtkErrorMacro.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkFrameBufferObject_StaticNew()
{
  return vtkFrameBufferObject::New();
}

PyObject *PyVTKClass_vtkFrameBufferObjectNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkFrameBufferObject_StaticNew,
    PyvtkFrameBufferObject_Methods,
    "vtkFrameBufferObject", modulename,
    NULL, NULL,
    PyvtkFrameBufferObject_Doc(),
    PyVTKClass_vtkObjectNew(modulename));
  return cls;
}

const char **PyvtkFrameBufferObject_Doc()
{
  static const char *docstring[] = {
    "vtkFrameBufferObject - internal class which encapsulates OpenGL\n\n",
    "Superclass: vtkObject\n\n",
    "Encapsulates an OpenGL Frame Buffer Object. For use by\nvtkOpenGLFBORenderWindow, not to be used directly. Use\nvtkFrameBufferObject2 instead.\n\nCaveats:\n\nDON'T PLAY WITH IT YET.\n\nSee Also:\n\nvtkFrameBufferObject2, vtkRenderbufferObject\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkFrameBufferObject(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkFrameBufferObjectNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkFrameBufferObject", o) != 0)
    {
    Py_DECREF(o);
    }

}

