// python wrapper for vtkRenderbuffer
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkRenderbuffer.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkRenderbuffer(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkRenderbufferNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkRenderbuffer_Doc();


static PyObject *
PyvtkRenderbuffer_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderbuffer *op = static_cast<vtkRenderbuffer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkRenderbuffer::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRenderbuffer_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderbuffer *op = static_cast<vtkRenderbuffer *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkRenderbuffer::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRenderbuffer_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderbuffer *op = static_cast<vtkRenderbuffer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkRenderbuffer *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkRenderbuffer::NewInstance());

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
PyvtkRenderbuffer_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkRenderbuffer *tempr = vtkRenderbuffer::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRenderbuffer_IsSupported(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsSupported");

  vtkRenderWindow *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkRenderWindow"))
    {
    bool tempr = vtkRenderbuffer::IsSupported(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRenderbuffer_GetHandle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHandle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderbuffer *op = static_cast<vtkRenderbuffer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned int tempr = (ap.IsBound() ?
      op->GetHandle() :
      op->vtkRenderbuffer::GetHandle());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRenderbuffer_SetContext(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetContext");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderbuffer *op = static_cast<vtkRenderbuffer *>(vp);

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
      op->vtkRenderbuffer::SetContext(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderbuffer_GetContext(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetContext");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderbuffer *op = static_cast<vtkRenderbuffer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkRenderWindow *tempr = (ap.IsBound() ?
      op->GetContext() :
      op->vtkRenderbuffer::GetContext());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRenderbuffer_CreateColorAttachment(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateColorAttachment");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderbuffer *op = static_cast<vtkRenderbuffer *>(vp);

  unsigned int temp0;
  unsigned int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    int tempr = (ap.IsBound() ?
      op->CreateColorAttachment(temp0, temp1) :
      op->vtkRenderbuffer::CreateColorAttachment(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRenderbuffer_CreateDepthAttachment(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateDepthAttachment");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderbuffer *op = static_cast<vtkRenderbuffer *>(vp);

  unsigned int temp0;
  unsigned int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    int tempr = (ap.IsBound() ?
      op->CreateDepthAttachment(temp0, temp1) :
      op->vtkRenderbuffer::CreateDepthAttachment(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRenderbuffer_Create(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Create");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderbuffer *op = static_cast<vtkRenderbuffer *>(vp);

  unsigned int temp0;
  unsigned int temp1;
  unsigned int temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    int tempr = (ap.IsBound() ?
      op->Create(temp0, temp1, temp2) :
      op->vtkRenderbuffer::Create(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkRenderbuffer_Methods[] = {
  {(char*)"GetClassName", PyvtkRenderbuffer_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkRenderbuffer_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkRenderbuffer_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkRenderbuffer\nC++: vtkRenderbuffer *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkRenderbuffer_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkRenderbuffer\nC++: vtkRenderbuffer *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"IsSupported", PyvtkRenderbuffer_IsSupported, METH_VARARGS | METH_STATIC,
   (char*)"V.IsSupported(vtkRenderWindow) -> bool\nC++: static bool IsSupported(vtkRenderWindow *renWin)\n\nReturns if the context supports the required extensions.\nExtension will be loaded when the conetxt is set.\n"},
  {(char*)"GetHandle", PyvtkRenderbuffer_GetHandle, METH_VARARGS,
   (char*)"V.GetHandle() -> int\nC++: unsigned int GetHandle()\n\nGet the name of the buffer for use opengl code.\n"},
  {(char*)"SetContext", PyvtkRenderbuffer_SetContext, METH_VARARGS,
   (char*)"V.SetContext(vtkRenderWindow)\nC++: void SetContext(vtkRenderWindow *win)\n\nSetting the context has the side affect of initializing OpenGL\nrequired extensions and allocates an OpenGL name(handle) that is\nreleased when the object is destroyed. NOTE: the reference count\nto the passed in object is not incremented. Contex must be set\nprior to other use.\n"},
  {(char*)"GetContext", PyvtkRenderbuffer_GetContext, METH_VARARGS,
   (char*)"V.GetContext() -> vtkRenderWindow\nC++: vtkRenderWindow *GetContext()\n\nSetting the context has the side affect of initializing OpenGL\nrequired extensions and allocates an OpenGL name(handle) that is\nreleased when the object is destroyed. NOTE: the reference count\nto the passed in object is not incremented. Contex must be set\nprior to other use.\n"},
  {(char*)"CreateColorAttachment", PyvtkRenderbuffer_CreateColorAttachment, METH_VARARGS,
   (char*)"V.CreateColorAttachment(int, int) -> int\nC++: int CreateColorAttachment(unsigned int width,\n    unsigned int height)\n\nSets up an RGBAF renderbufffer for use as a color attachment. Use\nmode to control READ or DRAW operation.\n"},
  {(char*)"CreateDepthAttachment", PyvtkRenderbuffer_CreateDepthAttachment, METH_VARARGS,
   (char*)"V.CreateDepthAttachment(int, int) -> int\nC++: int CreateDepthAttachment(unsigned int width,\n    unsigned int height)\n\nSets up an DEPTH renderbufffer for use as a color attachment. Use\nmode to control READ or DRAW operation.\n"},
  {(char*)"Create", PyvtkRenderbuffer_Create, METH_VARARGS,
   (char*)"V.Create(int, int, int) -> int\nC++: int Create(unsigned int format, unsigned int width,\n    unsigned int height)\n\nSets up an renderbufffer. Use mode to control READ or DRAW\noperation and format to control the internal format. (see OpenGL\ndoc for more info)\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkRenderbuffer_StaticNew()
{
  return vtkRenderbuffer::New();
}

PyObject *PyVTKClass_vtkRenderbufferNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkRenderbuffer_StaticNew,
    PyvtkRenderbuffer_Methods,
    "vtkRenderbuffer", modulename,
    NULL, NULL,
    PyvtkRenderbuffer_Doc(),
    PyVTKClass_vtkObjectNew(modulename));
  return cls;
}

const char **PyvtkRenderbuffer_Doc()
{
  static const char *docstring[] = {
    "vtkRenderbuffer - Storage for FBO's\n\n",
    "Superclass: vtkObject\n\n",
    "Lightweight API to OpenGL Framebuffer Object EXT renderbuffers.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkRenderbuffer(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkRenderbufferNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkRenderbuffer", o) != 0)
    {
    Py_DECREF(o);
    }

}

