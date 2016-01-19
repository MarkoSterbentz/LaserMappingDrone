// python wrapper for vtkOpenGLClipPlanesPainter
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkOpenGLClipPlanesPainter.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkOpenGLClipPlanesPainter(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkOpenGLClipPlanesPainterNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkClipPlanesPainterNew
extern "C" { PyObject *PyVTKClass_vtkClipPlanesPainterNew(const char *); }
#define DECLARED_PyVTKClass_vtkClipPlanesPainterNew
#endif

static const char **PyvtkOpenGLClipPlanesPainter_Doc();


static PyObject *
PyvtkOpenGLClipPlanesPainter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLClipPlanesPainter *op = static_cast<vtkOpenGLClipPlanesPainter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkOpenGLClipPlanesPainter::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOpenGLClipPlanesPainter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLClipPlanesPainter *op = static_cast<vtkOpenGLClipPlanesPainter *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkOpenGLClipPlanesPainter::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOpenGLClipPlanesPainter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLClipPlanesPainter *op = static_cast<vtkOpenGLClipPlanesPainter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkOpenGLClipPlanesPainter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkOpenGLClipPlanesPainter::NewInstance());

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
PyvtkOpenGLClipPlanesPainter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkOpenGLClipPlanesPainter *tempr = vtkOpenGLClipPlanesPainter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkOpenGLClipPlanesPainter_Methods[] = {
  {(char*)"GetClassName", PyvtkOpenGLClipPlanesPainter_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkOpenGLClipPlanesPainter_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkOpenGLClipPlanesPainter_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkOpenGLClipPlanesPainter\nC++: vtkOpenGLClipPlanesPainter *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkOpenGLClipPlanesPainter_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkOpenGLClipPlanesPainter\nC++: vtkOpenGLClipPlanesPainter *SafeDownCast(vtkObject* o)\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkOpenGLClipPlanesPainter_StaticNew()
{
  return vtkOpenGLClipPlanesPainter::New();
}

PyObject *PyVTKClass_vtkOpenGLClipPlanesPainterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkOpenGLClipPlanesPainter_StaticNew,
    PyvtkOpenGLClipPlanesPainter_Methods,
    "vtkOpenGLClipPlanesPainter", modulename,
    NULL, NULL,
    PyvtkOpenGLClipPlanesPainter_Doc(),
    PyVTKClass_vtkClipPlanesPainterNew(modulename));
  return cls;
}

const char **PyvtkOpenGLClipPlanesPainter_Doc()
{
  static const char *docstring[] = {
    "vtkOpenGLClipPlanesPainter - painter that manages clipping\n\n",
    "Superclass: vtkClipPlanesPainter\n\n",
    "This painter is an openGL specific painter which handles clipplanes.\nThis painter must typically be placed before the painter that do the\nprimitive rendering.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkOpenGLClipPlanesPainter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkOpenGLClipPlanesPainterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkOpenGLClipPlanesPainter", o) != 0)
    {
    Py_DECREF(o);
    }

}

