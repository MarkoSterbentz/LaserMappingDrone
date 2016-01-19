// python wrapper for vtkOpenGLLightingPainter
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkOpenGLLightingPainter.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkOpenGLLightingPainter(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkOpenGLLightingPainterNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkLightingPainterNew
extern "C" { PyObject *PyVTKClass_vtkLightingPainterNew(const char *); }
#define DECLARED_PyVTKClass_vtkLightingPainterNew
#endif

static const char **PyvtkOpenGLLightingPainter_Doc();


static PyObject *
PyvtkOpenGLLightingPainter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLLightingPainter *op = static_cast<vtkOpenGLLightingPainter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkOpenGLLightingPainter::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOpenGLLightingPainter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLLightingPainter *op = static_cast<vtkOpenGLLightingPainter *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkOpenGLLightingPainter::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOpenGLLightingPainter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLLightingPainter *op = static_cast<vtkOpenGLLightingPainter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkOpenGLLightingPainter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkOpenGLLightingPainter::NewInstance());

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
PyvtkOpenGLLightingPainter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkOpenGLLightingPainter *tempr = vtkOpenGLLightingPainter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOpenGLLightingPainter_GetTimeToDraw(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTimeToDraw");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLLightingPainter *op = static_cast<vtkOpenGLLightingPainter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetTimeToDraw() :
      op->vtkOpenGLLightingPainter::GetTimeToDraw());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkOpenGLLightingPainter_Methods[] = {
  {(char*)"GetClassName", PyvtkOpenGLLightingPainter_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkOpenGLLightingPainter_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkOpenGLLightingPainter_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkOpenGLLightingPainter\nC++: vtkOpenGLLightingPainter *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkOpenGLLightingPainter_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkOpenGLLightingPainter\nC++: vtkOpenGLLightingPainter *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetTimeToDraw", PyvtkOpenGLLightingPainter_GetTimeToDraw, METH_VARARGS,
   (char*)"V.GetTimeToDraw() -> float\nC++: virtual double GetTimeToDraw()\n\nThis painter overrides GetTimeToDraw() to never pass the request\nto the delegate. This is done since this class may propagate a\nsingle render request multiple times to the delegate. In that\ncase the time accumulation responsibility is borne by the painter\ncausing the multiple rendering requests i.e. this painter itself.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkOpenGLLightingPainter_StaticNew()
{
  return vtkOpenGLLightingPainter::New();
}

PyObject *PyVTKClass_vtkOpenGLLightingPainterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkOpenGLLightingPainter_StaticNew,
    PyvtkOpenGLLightingPainter_Methods,
    "vtkOpenGLLightingPainter", modulename,
    NULL, NULL,
    PyvtkOpenGLLightingPainter_Doc(),
    PyVTKClass_vtkLightingPainterNew(modulename));
  return cls;
}

const char **PyvtkOpenGLLightingPainter_Doc()
{
  static const char *docstring[] = {
    "vtkOpenGLLightingPainter - painter that manages lighting.\n\n",
    "Superclass: vtkLightingPainter\n\n",
    "This painter manages lighting. Ligting is disabled when rendering\npoints/lines and no normals are present or rendering Polygons/TStrips\nand representation is points and no normals are present.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkOpenGLLightingPainter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkOpenGLLightingPainterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkOpenGLLightingPainter", o) != 0)
    {
    Py_DECREF(o);
    }

}

