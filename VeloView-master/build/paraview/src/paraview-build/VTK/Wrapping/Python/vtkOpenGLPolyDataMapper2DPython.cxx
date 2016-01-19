// python wrapper for vtkOpenGLPolyDataMapper2D
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkOpenGLPolyDataMapper2D.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkOpenGLPolyDataMapper2D(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkOpenGLPolyDataMapper2DNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkPolyDataMapper2DNew
extern "C" { PyObject *PyVTKClass_vtkPolyDataMapper2DNew(const char *); }
#define DECLARED_PyVTKClass_vtkPolyDataMapper2DNew
#endif

static const char **PyvtkOpenGLPolyDataMapper2D_Doc();


static PyObject *
PyvtkOpenGLPolyDataMapper2D_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLPolyDataMapper2D *op = static_cast<vtkOpenGLPolyDataMapper2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkOpenGLPolyDataMapper2D::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOpenGLPolyDataMapper2D_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLPolyDataMapper2D *op = static_cast<vtkOpenGLPolyDataMapper2D *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkOpenGLPolyDataMapper2D::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOpenGLPolyDataMapper2D_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLPolyDataMapper2D *op = static_cast<vtkOpenGLPolyDataMapper2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkOpenGLPolyDataMapper2D *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkOpenGLPolyDataMapper2D::NewInstance());

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
PyvtkOpenGLPolyDataMapper2D_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkOpenGLPolyDataMapper2D *tempr = vtkOpenGLPolyDataMapper2D::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOpenGLPolyDataMapper2D_RenderOverlay(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOverlay");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLPolyDataMapper2D *op = static_cast<vtkOpenGLPolyDataMapper2D *>(vp);

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
      op->vtkOpenGLPolyDataMapper2D::RenderOverlay(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkOpenGLPolyDataMapper2D_Methods[] = {
  {(char*)"GetClassName", PyvtkOpenGLPolyDataMapper2D_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkOpenGLPolyDataMapper2D_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkOpenGLPolyDataMapper2D_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkOpenGLPolyDataMapper2D\nC++: vtkOpenGLPolyDataMapper2D *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkOpenGLPolyDataMapper2D_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkOpenGLPolyDataMapper2D\nC++: vtkOpenGLPolyDataMapper2D *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"RenderOverlay", PyvtkOpenGLPolyDataMapper2D_RenderOverlay, METH_VARARGS,
   (char*)"V.RenderOverlay(vtkViewport, vtkActor2D)\nC++: void RenderOverlay(vtkViewport *viewport, vtkActor2D *actor)\n\nActually draw the poly data.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkOpenGLPolyDataMapper2D_StaticNew()
{
  return vtkOpenGLPolyDataMapper2D::New();
}

PyObject *PyVTKClass_vtkOpenGLPolyDataMapper2DNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkOpenGLPolyDataMapper2D_StaticNew,
    PyvtkOpenGLPolyDataMapper2D_Methods,
    "vtkOpenGLPolyDataMapper2D", modulename,
    NULL, NULL,
    PyvtkOpenGLPolyDataMapper2D_Doc(),
    PyVTKClass_vtkPolyDataMapper2DNew(modulename));
  return cls;
}

const char **PyvtkOpenGLPolyDataMapper2D_Doc()
{
  static const char *docstring[] = {
    "vtkOpenGLPolyDataMapper2D - 2D PolyData support for OpenGL\n\n",
    "Superclass: vtkPolyDataMapper2D\n\n",
    "vtkOpenGLPolyDataMapper2D provides 2D PolyData annotation support for\nvtk under OpenGL.  Normally the user should use vtkPolyDataMapper2D\nwhich in turn will use this class.\n\nSee Also:\n\nvtkPolyDataMapper2D\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkOpenGLPolyDataMapper2D(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkOpenGLPolyDataMapper2DNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkOpenGLPolyDataMapper2D", o) != 0)
    {
    Py_DECREF(o);
    }

}

