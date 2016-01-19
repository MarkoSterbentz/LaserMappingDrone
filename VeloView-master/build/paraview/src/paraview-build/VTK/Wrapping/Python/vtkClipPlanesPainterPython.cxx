// python wrapper for vtkClipPlanesPainter
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkClipPlanesPainter.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkClipPlanesPainter(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkClipPlanesPainterNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkPainterNew
extern "C" { PyObject *PyVTKClass_vtkPainterNew(const char *); }
#define DECLARED_PyVTKClass_vtkPainterNew
#endif

static const char **PyvtkClipPlanesPainter_Doc();


static PyObject *
PyvtkClipPlanesPainter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClipPlanesPainter *op = static_cast<vtkClipPlanesPainter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkClipPlanesPainter::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkClipPlanesPainter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClipPlanesPainter *op = static_cast<vtkClipPlanesPainter *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkClipPlanesPainter::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkClipPlanesPainter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClipPlanesPainter *op = static_cast<vtkClipPlanesPainter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkClipPlanesPainter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkClipPlanesPainter::NewInstance());

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
PyvtkClipPlanesPainter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkClipPlanesPainter *tempr = vtkClipPlanesPainter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkClipPlanesPainter_CLIPPING_PLANES(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "CLIPPING_PLANES");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkInformationObjectBaseKey *tempr = vtkClipPlanesPainter::CLIPPING_PLANES();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkClipPlanesPainter_Methods[] = {
  {(char*)"GetClassName", PyvtkClipPlanesPainter_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkClipPlanesPainter_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkClipPlanesPainter_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkClipPlanesPainter\nC++: vtkClipPlanesPainter *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkClipPlanesPainter_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkClipPlanesPainter\nC++: vtkClipPlanesPainter *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"CLIPPING_PLANES", PyvtkClipPlanesPainter_CLIPPING_PLANES, METH_VARARGS | METH_STATIC,
   (char*)"V.CLIPPING_PLANES() -> vtkInformationObjectBaseKey\nC++: static vtkInformationObjectBaseKey *CLIPPING_PLANES()\n\nGet/Set the vtkPlaneCollection which specifies the clipping\nplanes.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkClipPlanesPainter_StaticNew()
{
  return vtkClipPlanesPainter::New();
}

PyObject *PyVTKClass_vtkClipPlanesPainterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkClipPlanesPainter_StaticNew,
    PyvtkClipPlanesPainter_Methods,
    "vtkClipPlanesPainter", modulename,
    NULL, NULL,
    PyvtkClipPlanesPainter_Doc(),
    PyVTKClass_vtkPainterNew(modulename));
  return cls;
}

const char **PyvtkClipPlanesPainter_Doc()
{
  static const char *docstring[] = {
    "vtkClipPlanesPainter - abstract class defining interface for\n\n",
    "Superclass: vtkPainter\n\n",
    "\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkClipPlanesPainter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkClipPlanesPainterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkClipPlanesPainter", o) != 0)
    {
    Py_DECREF(o);
    }

}

