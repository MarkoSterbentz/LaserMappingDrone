// python wrapper for vtkOpenGLProjectedTetrahedraMapper
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkOpenGLProjectedTetrahedraMapper.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkOpenGLProjectedTetrahedraMapper(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkOpenGLProjectedTetrahedraMapperNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkProjectedTetrahedraMapperNew
extern "C" { PyObject *PyVTKClass_vtkProjectedTetrahedraMapperNew(const char *); }
#define DECLARED_PyVTKClass_vtkProjectedTetrahedraMapperNew
#endif

static const char **PyvtkOpenGLProjectedTetrahedraMapper_Doc();


static PyObject *
PyvtkOpenGLProjectedTetrahedraMapper_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLProjectedTetrahedraMapper *op = static_cast<vtkOpenGLProjectedTetrahedraMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkOpenGLProjectedTetrahedraMapper::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOpenGLProjectedTetrahedraMapper_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLProjectedTetrahedraMapper *op = static_cast<vtkOpenGLProjectedTetrahedraMapper *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkOpenGLProjectedTetrahedraMapper::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOpenGLProjectedTetrahedraMapper_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLProjectedTetrahedraMapper *op = static_cast<vtkOpenGLProjectedTetrahedraMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkOpenGLProjectedTetrahedraMapper *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkOpenGLProjectedTetrahedraMapper::NewInstance());

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
PyvtkOpenGLProjectedTetrahedraMapper_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkOpenGLProjectedTetrahedraMapper *tempr = vtkOpenGLProjectedTetrahedraMapper::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOpenGLProjectedTetrahedraMapper_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLProjectedTetrahedraMapper *op = static_cast<vtkOpenGLProjectedTetrahedraMapper *>(vp);

  vtkWindow *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkWindow"))
    {
    if (ap.IsBound())
      {
      op->ReleaseGraphicsResources(temp0);
      }
    else
      {
      op->vtkOpenGLProjectedTetrahedraMapper::ReleaseGraphicsResources(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkOpenGLProjectedTetrahedraMapper_Render(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Render");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLProjectedTetrahedraMapper *op = static_cast<vtkOpenGLProjectedTetrahedraMapper *>(vp);

  vtkRenderer *temp0 = NULL;
  vtkVolume *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkRenderer") &&
      ap.GetVTKObject(temp1, "vtkVolume"))
    {
    if (ap.IsBound())
      {
      op->Render(temp0, temp1);
      }
    else
      {
      op->vtkOpenGLProjectedTetrahedraMapper::Render(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkOpenGLProjectedTetrahedraMapper_SetUseFloatingPointFrameBuffer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseFloatingPointFrameBuffer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLProjectedTetrahedraMapper *op = static_cast<vtkOpenGLProjectedTetrahedraMapper *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetUseFloatingPointFrameBuffer(temp0);
      }
    else
      {
      op->vtkOpenGLProjectedTetrahedraMapper::SetUseFloatingPointFrameBuffer(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkOpenGLProjectedTetrahedraMapper_GetUseFloatingPointFrameBuffer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseFloatingPointFrameBuffer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLProjectedTetrahedraMapper *op = static_cast<vtkOpenGLProjectedTetrahedraMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetUseFloatingPointFrameBuffer() :
      op->vtkOpenGLProjectedTetrahedraMapper::GetUseFloatingPointFrameBuffer());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOpenGLProjectedTetrahedraMapper_UseFloatingPointFrameBufferOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseFloatingPointFrameBufferOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLProjectedTetrahedraMapper *op = static_cast<vtkOpenGLProjectedTetrahedraMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->UseFloatingPointFrameBufferOn();
      }
    else
      {
      op->vtkOpenGLProjectedTetrahedraMapper::UseFloatingPointFrameBufferOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkOpenGLProjectedTetrahedraMapper_UseFloatingPointFrameBufferOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseFloatingPointFrameBufferOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLProjectedTetrahedraMapper *op = static_cast<vtkOpenGLProjectedTetrahedraMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->UseFloatingPointFrameBufferOff();
      }
    else
      {
      op->vtkOpenGLProjectedTetrahedraMapper::UseFloatingPointFrameBufferOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkOpenGLProjectedTetrahedraMapper_IsSupported(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsSupported");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLProjectedTetrahedraMapper *op = static_cast<vtkOpenGLProjectedTetrahedraMapper *>(vp);

  vtkRenderWindow *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkRenderWindow"))
    {
    bool tempr = (ap.IsBound() ?
      op->IsSupported(temp0) :
      op->vtkOpenGLProjectedTetrahedraMapper::IsSupported(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkOpenGLProjectedTetrahedraMapper_Methods[] = {
  {(char*)"GetClassName", PyvtkOpenGLProjectedTetrahedraMapper_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkOpenGLProjectedTetrahedraMapper_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkOpenGLProjectedTetrahedraMapper_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkOpenGLProjectedTetrahedraMapper\nC++: vtkOpenGLProjectedTetrahedraMapper *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkOpenGLProjectedTetrahedraMapper_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkOpenGLProjectedTetrahedraMapper\nC++: vtkOpenGLProjectedTetrahedraMapper *SafeDownCast(\n    vtkObject* o)\n\n"},
  {(char*)"ReleaseGraphicsResources", PyvtkOpenGLProjectedTetrahedraMapper_ReleaseGraphicsResources, METH_VARARGS,
   (char*)"V.ReleaseGraphicsResources(vtkWindow)\nC++: virtual void ReleaseGraphicsResources(vtkWindow *window)\n\n"},
  {(char*)"Render", PyvtkOpenGLProjectedTetrahedraMapper_Render, METH_VARARGS,
   (char*)"V.Render(vtkRenderer, vtkVolume)\nC++: virtual void Render(vtkRenderer *renderer, vtkVolume *volume)\n\n"},
  {(char*)"SetUseFloatingPointFrameBuffer", PyvtkOpenGLProjectedTetrahedraMapper_SetUseFloatingPointFrameBuffer, METH_VARARGS,
   (char*)"V.SetUseFloatingPointFrameBuffer(bool)\nC++: void SetUseFloatingPointFrameBuffer(bool a)\n\nSet/get whether to use floating-point rendering buffers rather\nthan the default.\n"},
  {(char*)"GetUseFloatingPointFrameBuffer", PyvtkOpenGLProjectedTetrahedraMapper_GetUseFloatingPointFrameBuffer, METH_VARARGS,
   (char*)"V.GetUseFloatingPointFrameBuffer() -> bool\nC++: bool GetUseFloatingPointFrameBuffer()\n\nSet/get whether to use floating-point rendering buffers rather\nthan the default.\n"},
  {(char*)"UseFloatingPointFrameBufferOn", PyvtkOpenGLProjectedTetrahedraMapper_UseFloatingPointFrameBufferOn, METH_VARARGS,
   (char*)"V.UseFloatingPointFrameBufferOn()\nC++: void UseFloatingPointFrameBufferOn()\n\nSet/get whether to use floating-point rendering buffers rather\nthan the default.\n"},
  {(char*)"UseFloatingPointFrameBufferOff", PyvtkOpenGLProjectedTetrahedraMapper_UseFloatingPointFrameBufferOff, METH_VARARGS,
   (char*)"V.UseFloatingPointFrameBufferOff()\nC++: void UseFloatingPointFrameBufferOff()\n\nSet/get whether to use floating-point rendering buffers rather\nthan the default.\n"},
  {(char*)"IsSupported", PyvtkOpenGLProjectedTetrahedraMapper_IsSupported, METH_VARARGS,
   (char*)"V.IsSupported(vtkRenderWindow) -> bool\nC++: virtual bool IsSupported(vtkRenderWindow *context)\n\nReturn true if the rendering context provides the nececessary\nfunctionality to use this class.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkOpenGLProjectedTetrahedraMapper_StaticNew()
{
  return vtkOpenGLProjectedTetrahedraMapper::New();
}

PyObject *PyVTKClass_vtkOpenGLProjectedTetrahedraMapperNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkOpenGLProjectedTetrahedraMapper_StaticNew,
    PyvtkOpenGLProjectedTetrahedraMapper_Methods,
    "vtkOpenGLProjectedTetrahedraMapper", modulename,
    NULL, NULL,
    PyvtkOpenGLProjectedTetrahedraMapper_Doc(),
    PyVTKClass_vtkProjectedTetrahedraMapperNew(modulename));
  return cls;
}

const char **PyvtkOpenGLProjectedTetrahedraMapper_Doc()
{
  static const char *docstring[] = {
    "vtkOpenGLProjectedTetrahedraMapper - OpenGL implementation of PT\n\n",
    "Superclass: vtkProjectedTetrahedraMapper\n\n",
    "\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkOpenGLProjectedTetrahedraMapper(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkOpenGLProjectedTetrahedraMapperNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkOpenGLProjectedTetrahedraMapper", o) != 0)
    {
    Py_DECREF(o);
    }

}

