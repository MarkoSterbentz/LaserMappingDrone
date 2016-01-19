// python wrapper for vtkOpenGLTexture
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkOpenGLTexture.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkOpenGLTexture(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkOpenGLTextureNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkTextureNew
extern "C" { PyObject *PyVTKClass_vtkTextureNew(const char *); }
#define DECLARED_PyVTKClass_vtkTextureNew
#endif

static const char **PyvtkOpenGLTexture_Doc();


static PyObject *
PyvtkOpenGLTexture_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLTexture *op = static_cast<vtkOpenGLTexture *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkOpenGLTexture::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOpenGLTexture_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLTexture *op = static_cast<vtkOpenGLTexture *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkOpenGLTexture::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOpenGLTexture_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLTexture *op = static_cast<vtkOpenGLTexture *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkOpenGLTexture *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkOpenGLTexture::NewInstance());

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
PyvtkOpenGLTexture_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkOpenGLTexture *tempr = vtkOpenGLTexture::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOpenGLTexture_Load(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Load");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLTexture *op = static_cast<vtkOpenGLTexture *>(vp);

  vtkRenderer *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkRenderer"))
    {
    if (ap.IsBound())
      {
      op->Load(temp0);
      }
    else
      {
      op->vtkOpenGLTexture::Load(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkOpenGLTexture_PostRender(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PostRender");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLTexture *op = static_cast<vtkOpenGLTexture *>(vp);

  vtkRenderer *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkRenderer"))
    {
    if (ap.IsBound())
      {
      op->PostRender(temp0);
      }
    else
      {
      op->vtkOpenGLTexture::PostRender(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkOpenGLTexture_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLTexture *op = static_cast<vtkOpenGLTexture *>(vp);

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
      op->vtkOpenGLTexture::ReleaseGraphicsResources(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkOpenGLTexture_GetIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLTexture *op = static_cast<vtkOpenGLTexture *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    long tempr = (ap.IsBound() ?
      op->GetIndex() :
      op->vtkOpenGLTexture::GetIndex());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkOpenGLTexture_Methods[] = {
  {(char*)"GetClassName", PyvtkOpenGLTexture_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkOpenGLTexture_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkOpenGLTexture_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkOpenGLTexture\nC++: vtkOpenGLTexture *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkOpenGLTexture_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkOpenGLTexture\nC++: vtkOpenGLTexture *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"Load", PyvtkOpenGLTexture_Load, METH_VARARGS,
   (char*)"V.Load(vtkRenderer)\nC++: void Load(vtkRenderer *)\n\nImplement base class method.\n"},
  {(char*)"PostRender", PyvtkOpenGLTexture_PostRender, METH_VARARGS,
   (char*)"V.PostRender(vtkRenderer)\nC++: virtual void PostRender(vtkRenderer *)\n\n"},
  {(char*)"ReleaseGraphicsResources", PyvtkOpenGLTexture_ReleaseGraphicsResources, METH_VARARGS,
   (char*)"V.ReleaseGraphicsResources(vtkWindow)\nC++: void ReleaseGraphicsResources(vtkWindow *)\n\nRelease any graphics resources that are being consumed by this\ntexture. The parameter window could be used to determine which\ngraphic resources to release. Using the same texture object in\nmultiple render windows is NOT currently supported.\n"},
  {(char*)"GetIndex", PyvtkOpenGLTexture_GetIndex, METH_VARARGS,
   (char*)"V.GetIndex() -> int\nC++: long GetIndex()\n\nGet the openGL texture name to which this texture is bound. This\nis available only if GL version >= 1.1\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkOpenGLTexture_StaticNew()
{
  return vtkOpenGLTexture::New();
}

PyObject *PyVTKClass_vtkOpenGLTextureNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkOpenGLTexture_StaticNew,
    PyvtkOpenGLTexture_Methods,
    "vtkOpenGLTexture", modulename,
    NULL, NULL,
    PyvtkOpenGLTexture_Doc(),
    PyVTKClass_vtkTextureNew(modulename));
  return cls;
}

const char **PyvtkOpenGLTexture_Doc()
{
  static const char *docstring[] = {
    "vtkOpenGLTexture - OpenGL texture map\n\n",
    "Superclass: vtkTexture\n\n",
    "vtkOpenGLTexture is a concrete implementation of the abstract class\nvtkTexture. vtkOpenGLTexture interfaces to the OpenGL rendering\nlibrary.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkOpenGLTexture(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkOpenGLTextureNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkOpenGLTexture", o) != 0)
    {
    Py_DECREF(o);
    }

}

