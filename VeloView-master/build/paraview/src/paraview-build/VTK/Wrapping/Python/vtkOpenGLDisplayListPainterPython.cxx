// python wrapper for vtkOpenGLDisplayListPainter
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkOpenGLDisplayListPainter.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkOpenGLDisplayListPainter(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkOpenGLDisplayListPainterNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkDisplayListPainterNew
extern "C" { PyObject *PyVTKClass_vtkDisplayListPainterNew(const char *); }
#define DECLARED_PyVTKClass_vtkDisplayListPainterNew
#endif

static const char **PyvtkOpenGLDisplayListPainter_Doc();


static PyObject *
PyvtkOpenGLDisplayListPainter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLDisplayListPainter *op = static_cast<vtkOpenGLDisplayListPainter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkOpenGLDisplayListPainter::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOpenGLDisplayListPainter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLDisplayListPainter *op = static_cast<vtkOpenGLDisplayListPainter *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkOpenGLDisplayListPainter::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOpenGLDisplayListPainter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLDisplayListPainter *op = static_cast<vtkOpenGLDisplayListPainter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkOpenGLDisplayListPainter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkOpenGLDisplayListPainter::NewInstance());

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
PyvtkOpenGLDisplayListPainter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkOpenGLDisplayListPainter *tempr = vtkOpenGLDisplayListPainter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOpenGLDisplayListPainter_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLDisplayListPainter *op = static_cast<vtkOpenGLDisplayListPainter *>(vp);

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
      op->vtkOpenGLDisplayListPainter::ReleaseGraphicsResources(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkOpenGLDisplayListPainter_Methods[] = {
  {(char*)"GetClassName", PyvtkOpenGLDisplayListPainter_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkOpenGLDisplayListPainter_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkOpenGLDisplayListPainter_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkOpenGLDisplayListPainter\nC++: vtkOpenGLDisplayListPainter *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkOpenGLDisplayListPainter_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkOpenGLDisplayListPainter\nC++: vtkOpenGLDisplayListPainter *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"ReleaseGraphicsResources", PyvtkOpenGLDisplayListPainter_ReleaseGraphicsResources, METH_VARARGS,
   (char*)"V.ReleaseGraphicsResources(vtkWindow)\nC++: virtual void ReleaseGraphicsResources(vtkWindow *)\n\nRelease any graphics resources that are being consumed by this\nmapper. The parameter window could be used to determine which\ngraphic resources to release. In this case, releases the display\nlists.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkOpenGLDisplayListPainter_StaticNew()
{
  return vtkOpenGLDisplayListPainter::New();
}

PyObject *PyVTKClass_vtkOpenGLDisplayListPainterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkOpenGLDisplayListPainter_StaticNew,
    PyvtkOpenGLDisplayListPainter_Methods,
    "vtkOpenGLDisplayListPainter", modulename,
    NULL, NULL,
    PyvtkOpenGLDisplayListPainter_Doc(),
    PyVTKClass_vtkDisplayListPainterNew(modulename));
  return cls;
}

const char **PyvtkOpenGLDisplayListPainter_Doc()
{
  static const char *docstring[] = {
    "vtkOpenGLDisplayListPainter - display list painter using OpenGL.\n\n",
    "Superclass: vtkDisplayListPainter\n\n",
    "vtkOpenGLDisplayListPainter creates an OpenGL display list for\nrendering. This painter creates a different display list for every\nrender request with a different set of typeflags. If any of the data\nor inputs change, then all display lists are discarded.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkOpenGLDisplayListPainter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkOpenGLDisplayListPainterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkOpenGLDisplayListPainter", o) != 0)
    {
    Py_DECREF(o);
    }

}

