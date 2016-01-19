// python wrapper for vtkOpenGLCompositePainter
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkOpenGLCompositePainter.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkOpenGLCompositePainter(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkOpenGLCompositePainterNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkCompositePainterNew
extern "C" { PyObject *PyVTKClass_vtkCompositePainterNew(const char *); }
#define DECLARED_PyVTKClass_vtkCompositePainterNew
#endif

static const char **PyvtkOpenGLCompositePainter_Doc();


static PyObject *
PyvtkOpenGLCompositePainter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLCompositePainter *op = static_cast<vtkOpenGLCompositePainter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkOpenGLCompositePainter::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOpenGLCompositePainter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLCompositePainter *op = static_cast<vtkOpenGLCompositePainter *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkOpenGLCompositePainter::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOpenGLCompositePainter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLCompositePainter *op = static_cast<vtkOpenGLCompositePainter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkOpenGLCompositePainter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkOpenGLCompositePainter::NewInstance());

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
PyvtkOpenGLCompositePainter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkOpenGLCompositePainter *tempr = vtkOpenGLCompositePainter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkOpenGLCompositePainter_Methods[] = {
  {(char*)"GetClassName", PyvtkOpenGLCompositePainter_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkOpenGLCompositePainter_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkOpenGLCompositePainter_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkOpenGLCompositePainter\nC++: vtkOpenGLCompositePainter *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkOpenGLCompositePainter_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkOpenGLCompositePainter\nC++: vtkOpenGLCompositePainter *SafeDownCast(vtkObject* o)\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkOpenGLCompositePainter_StaticNew()
{
  return vtkOpenGLCompositePainter::New();
}

PyObject *PyVTKClass_vtkOpenGLCompositePainterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkOpenGLCompositePainter_StaticNew,
    PyvtkOpenGLCompositePainter_Methods,
    "vtkOpenGLCompositePainter", modulename,
    NULL, NULL,
    PyvtkOpenGLCompositePainter_Doc(),
    PyVTKClass_vtkCompositePainterNew(modulename));
  return cls;
}

const char **PyvtkOpenGLCompositePainter_Doc()
{
  static const char *docstring[] = {
    "vtkOpenGLCompositePainter - composite painter for OpenGL.\n\n",
    "Superclass: vtkCompositePainter\n\n",
    "\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkOpenGLCompositePainter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkOpenGLCompositePainterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkOpenGLCompositePainter", o) != 0)
    {
    Py_DECREF(o);
    }

}

