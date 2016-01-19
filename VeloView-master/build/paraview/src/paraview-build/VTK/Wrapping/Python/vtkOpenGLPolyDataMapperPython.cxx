// python wrapper for vtkOpenGLPolyDataMapper
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkOpenGLPolyDataMapper.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkOpenGLPolyDataMapper(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkOpenGLPolyDataMapperNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkPolyDataMapperNew
extern "C" { PyObject *PyVTKClass_vtkPolyDataMapperNew(const char *); }
#define DECLARED_PyVTKClass_vtkPolyDataMapperNew
#endif

static const char **PyvtkOpenGLPolyDataMapper_Doc();


static PyObject *
PyvtkOpenGLPolyDataMapper_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLPolyDataMapper *op = static_cast<vtkOpenGLPolyDataMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkOpenGLPolyDataMapper::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOpenGLPolyDataMapper_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLPolyDataMapper *op = static_cast<vtkOpenGLPolyDataMapper *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkOpenGLPolyDataMapper::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOpenGLPolyDataMapper_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLPolyDataMapper *op = static_cast<vtkOpenGLPolyDataMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkOpenGLPolyDataMapper *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkOpenGLPolyDataMapper::NewInstance());

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
PyvtkOpenGLPolyDataMapper_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkOpenGLPolyDataMapper *tempr = vtkOpenGLPolyDataMapper::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOpenGLPolyDataMapper_RenderPiece(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderPiece");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLPolyDataMapper *op = static_cast<vtkOpenGLPolyDataMapper *>(vp);

  vtkRenderer *temp0 = NULL;
  vtkActor *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkRenderer") &&
      ap.GetVTKObject(temp1, "vtkActor"))
    {
    if (ap.IsBound())
      {
      op->RenderPiece(temp0, temp1);
      }
    else
      {
      op->vtkOpenGLPolyDataMapper::RenderPiece(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkOpenGLPolyDataMapper_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLPolyDataMapper *op = static_cast<vtkOpenGLPolyDataMapper *>(vp);

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
      op->vtkOpenGLPolyDataMapper::ReleaseGraphicsResources(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkOpenGLPolyDataMapper_Draw(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Draw");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLPolyDataMapper *op = static_cast<vtkOpenGLPolyDataMapper *>(vp);

  vtkRenderer *temp0 = NULL;
  vtkActor *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkRenderer") &&
      ap.GetVTKObject(temp1, "vtkActor"))
    {
    int tempr = (ap.IsBound() ?
      op->Draw(temp0, temp1) :
      op->vtkOpenGLPolyDataMapper::Draw(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkOpenGLPolyDataMapper_Methods[] = {
  {(char*)"GetClassName", PyvtkOpenGLPolyDataMapper_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkOpenGLPolyDataMapper_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkOpenGLPolyDataMapper_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkOpenGLPolyDataMapper\nC++: vtkOpenGLPolyDataMapper *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkOpenGLPolyDataMapper_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkOpenGLPolyDataMapper\nC++: vtkOpenGLPolyDataMapper *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"RenderPiece", PyvtkOpenGLPolyDataMapper_RenderPiece, METH_VARARGS,
   (char*)"V.RenderPiece(vtkRenderer, vtkActor)\nC++: virtual void RenderPiece(vtkRenderer *ren, vtkActor *a)\n\nImplement superclass render method.\n"},
  {(char*)"ReleaseGraphicsResources", PyvtkOpenGLPolyDataMapper_ReleaseGraphicsResources, METH_VARARGS,
   (char*)"V.ReleaseGraphicsResources(vtkWindow)\nC++: void ReleaseGraphicsResources(vtkWindow *)\n\nRelease any graphics resources that are being consumed by this\nmapper. The parameter window could be used to determine which\ngraphic resources to release.\n"},
  {(char*)"Draw", PyvtkOpenGLPolyDataMapper_Draw, METH_VARARGS,
   (char*)"V.Draw(vtkRenderer, vtkActor) -> int\nC++: virtual int Draw(vtkRenderer *ren, vtkActor *a)\n\nDraw method for OpenGL.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkOpenGLPolyDataMapper_StaticNew()
{
  return vtkOpenGLPolyDataMapper::New();
}

PyObject *PyVTKClass_vtkOpenGLPolyDataMapperNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkOpenGLPolyDataMapper_StaticNew,
    PyvtkOpenGLPolyDataMapper_Methods,
    "vtkOpenGLPolyDataMapper", modulename,
    NULL, NULL,
    PyvtkOpenGLPolyDataMapper_Doc(),
    PyVTKClass_vtkPolyDataMapperNew(modulename));
  return cls;
}

const char **PyvtkOpenGLPolyDataMapper_Doc()
{
  static const char *docstring[] = {
    "vtkOpenGLPolyDataMapper - a PolyDataMapper for the OpenGL library\n\n",
    "Superclass: vtkPolyDataMapper\n\n",
    "vtkOpenGLPolyDataMapper is a subclass of vtkPolyDataMapper.\nvtkOpenGLPolyDataMapper is a geometric PolyDataMapper for the OpenGL\nrendering library.@deprecated Replaced by vtkPainterPolyDataMapper as\nof VTK 6.2.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkOpenGLPolyDataMapper(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkOpenGLPolyDataMapperNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkOpenGLPolyDataMapper", o) != 0)
    {
    Py_DECREF(o);
    }

}

