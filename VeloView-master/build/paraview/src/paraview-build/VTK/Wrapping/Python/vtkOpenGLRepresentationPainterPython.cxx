// python wrapper for vtkOpenGLRepresentationPainter
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkOpenGLRepresentationPainter.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkOpenGLRepresentationPainter(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkOpenGLRepresentationPainterNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkRepresentationPainterNew
extern "C" { PyObject *PyVTKClass_vtkRepresentationPainterNew(const char *); }
#define DECLARED_PyVTKClass_vtkRepresentationPainterNew
#endif

static const char **PyvtkOpenGLRepresentationPainter_Doc();


static PyObject *
PyvtkOpenGLRepresentationPainter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLRepresentationPainter *op = static_cast<vtkOpenGLRepresentationPainter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkOpenGLRepresentationPainter::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOpenGLRepresentationPainter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLRepresentationPainter *op = static_cast<vtkOpenGLRepresentationPainter *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkOpenGLRepresentationPainter::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOpenGLRepresentationPainter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLRepresentationPainter *op = static_cast<vtkOpenGLRepresentationPainter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkOpenGLRepresentationPainter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkOpenGLRepresentationPainter::NewInstance());

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
PyvtkOpenGLRepresentationPainter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkOpenGLRepresentationPainter *tempr = vtkOpenGLRepresentationPainter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOpenGLRepresentationPainter_GetTimeToDraw(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTimeToDraw");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLRepresentationPainter *op = static_cast<vtkOpenGLRepresentationPainter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetTimeToDraw() :
      op->vtkOpenGLRepresentationPainter::GetTimeToDraw());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkOpenGLRepresentationPainter_Methods[] = {
  {(char*)"GetClassName", PyvtkOpenGLRepresentationPainter_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkOpenGLRepresentationPainter_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkOpenGLRepresentationPainter_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkOpenGLRepresentationPainter\nC++: vtkOpenGLRepresentationPainter *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkOpenGLRepresentationPainter_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkOpenGLRepresentationPainter\nC++: vtkOpenGLRepresentationPainter *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetTimeToDraw", PyvtkOpenGLRepresentationPainter_GetTimeToDraw, METH_VARARGS,
   (char*)"V.GetTimeToDraw() -> float\nC++: virtual double GetTimeToDraw()\n\nThis painter overrides GetTimeToDraw() to never pass the request\nto the delegate. This is done since this class may propagate a\nsingle render request multiple times to the delegate. In that\ncase the time accumulation responsibility is borne by the painter\ncausing the multiple rendering requests i.e. this painter itself.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkOpenGLRepresentationPainter_StaticNew()
{
  return vtkOpenGLRepresentationPainter::New();
}

PyObject *PyVTKClass_vtkOpenGLRepresentationPainterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkOpenGLRepresentationPainter_StaticNew,
    PyvtkOpenGLRepresentationPainter_Methods,
    "vtkOpenGLRepresentationPainter", modulename,
    NULL, NULL,
    PyvtkOpenGLRepresentationPainter_Doc(),
    PyVTKClass_vtkRepresentationPainterNew(modulename));
  return cls;
}

const char **PyvtkOpenGLRepresentationPainter_Doc()
{
  static const char *docstring[] = {
    "vtkOpenGLRepresentationPainter - painter handling representation\n\n",
    "Superclass: vtkRepresentationPainter\n\n",
    "This is OpenGL implementation of a painter handling representation\ni.e. Points, Wireframe, Surface.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkOpenGLRepresentationPainter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkOpenGLRepresentationPainterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkOpenGLRepresentationPainter", o) != 0)
    {
    Py_DECREF(o);
    }

}

