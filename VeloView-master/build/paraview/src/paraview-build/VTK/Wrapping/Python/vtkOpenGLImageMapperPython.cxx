// python wrapper for vtkOpenGLImageMapper
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkOpenGLImageMapper.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkOpenGLImageMapper(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkOpenGLImageMapperNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkImageMapperNew
extern "C" { PyObject *PyVTKClass_vtkImageMapperNew(const char *); }
#define DECLARED_PyVTKClass_vtkImageMapperNew
#endif

static const char **PyvtkOpenGLImageMapper_Doc();


static PyObject *
PyvtkOpenGLImageMapper_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLImageMapper *op = static_cast<vtkOpenGLImageMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkOpenGLImageMapper::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOpenGLImageMapper_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLImageMapper *op = static_cast<vtkOpenGLImageMapper *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkOpenGLImageMapper::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOpenGLImageMapper_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLImageMapper *op = static_cast<vtkOpenGLImageMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkOpenGLImageMapper *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkOpenGLImageMapper::NewInstance());

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
PyvtkOpenGLImageMapper_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkOpenGLImageMapper *tempr = vtkOpenGLImageMapper::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOpenGLImageMapper_RenderOverlay(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOverlay");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLImageMapper *op = static_cast<vtkOpenGLImageMapper *>(vp);

  vtkViewport *temp0 = NULL;
  vtkActor2D *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkViewport") &&
      ap.GetVTKObject(temp1, "vtkActor2D"))
    {
    if (ap.IsBound())
      {
      op->RenderOverlay(temp0, temp1);
      }
    else
      {
      op->vtkOpenGLImageMapper::RenderOverlay(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkOpenGLImageMapper_RenderData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLImageMapper *op = static_cast<vtkOpenGLImageMapper *>(vp);

  vtkViewport *temp0 = NULL;
  vtkImageData *temp1 = NULL;
  vtkActor2D *temp2 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkViewport") &&
      ap.GetVTKObject(temp1, "vtkImageData") &&
      ap.GetVTKObject(temp2, "vtkActor2D"))
    {
    if (ap.IsBound())
      {
      op->RenderData(temp0, temp1, temp2);
      }
    else
      {
      op->vtkOpenGLImageMapper::RenderData(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkOpenGLImageMapper_Methods[] = {
  {(char*)"GetClassName", PyvtkOpenGLImageMapper_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkOpenGLImageMapper_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkOpenGLImageMapper_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkOpenGLImageMapper\nC++: vtkOpenGLImageMapper *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkOpenGLImageMapper_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkOpenGLImageMapper\nC++: vtkOpenGLImageMapper *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"RenderOverlay", PyvtkOpenGLImageMapper_RenderOverlay, METH_VARARGS,
   (char*)"V.RenderOverlay(vtkViewport, vtkActor2D)\nC++: void RenderOverlay(vtkViewport *viewport, vtkActor2D *actor)\n\nHandle the render method.\n"},
  {(char*)"RenderData", PyvtkOpenGLImageMapper_RenderData, METH_VARARGS,
   (char*)"V.RenderData(vtkViewport, vtkImageData, vtkActor2D)\nC++: void RenderData(vtkViewport *viewport, vtkImageData *data,\n    vtkActor2D *actor)\n\nCalled by the Render function in vtkImageMapper.  Actually draws\nthe image to the screen.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkOpenGLImageMapper_StaticNew()
{
  return vtkOpenGLImageMapper::New();
}

PyObject *PyVTKClass_vtkOpenGLImageMapperNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkOpenGLImageMapper_StaticNew,
    PyvtkOpenGLImageMapper_Methods,
    "vtkOpenGLImageMapper", modulename,
    NULL, NULL,
    PyvtkOpenGLImageMapper_Doc(),
    PyVTKClass_vtkImageMapperNew(modulename));
  return cls;
}

const char **PyvtkOpenGLImageMapper_Doc()
{
  static const char *docstring[] = {
    "vtkOpenGLImageMapper - 2D image display support for OpenGL\n\n",
    "Superclass: vtkImageMapper\n\n",
    "vtkOpenGLImageMapper is a concrete subclass of vtkImageMapper that\nrenders images under OpenGL\n\nCaveats:\n\nvtkOpenGLImageMapper does not support vtkBitArray, you have to\nconvert the array first to vtkUnsignedCharArray (for example)\n\nSee Also:\n\nvtkImageMapper\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkOpenGLImageMapper(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkOpenGLImageMapperNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkOpenGLImageMapper", o) != 0)
    {
    Py_DECREF(o);
    }

}

