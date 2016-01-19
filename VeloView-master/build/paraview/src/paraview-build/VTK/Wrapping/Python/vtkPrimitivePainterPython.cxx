// python wrapper for vtkPrimitivePainter
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkPrimitivePainter.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkPrimitivePainter(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkPrimitivePainterNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkPolyDataPainterNew
extern "C" { PyObject *PyVTKClass_vtkPolyDataPainterNew(const char *); }
#define DECLARED_PyVTKClass_vtkPolyDataPainterNew
#endif

static const char **PyvtkPrimitivePainter_Doc();


static PyObject *
PyvtkPrimitivePainter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPrimitivePainter *op = static_cast<vtkPrimitivePainter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkPrimitivePainter::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPrimitivePainter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPrimitivePainter *op = static_cast<vtkPrimitivePainter *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPrimitivePainter::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPrimitivePainter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPrimitivePainter *op = static_cast<vtkPrimitivePainter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPrimitivePainter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPrimitivePainter::NewInstance());

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
PyvtkPrimitivePainter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkPrimitivePainter *tempr = vtkPrimitivePainter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPrimitivePainter_GetSupportedPrimitive(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSupportedPrimitive");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPrimitivePainter *op = static_cast<vtkPrimitivePainter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetSupportedPrimitive() :
      op->vtkPrimitivePainter::GetSupportedPrimitive());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkPrimitivePainter_Methods[] = {
  {(char*)"GetClassName", PyvtkPrimitivePainter_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkPrimitivePainter_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkPrimitivePainter_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkPrimitivePainter\nC++: vtkPrimitivePainter *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkPrimitivePainter_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkPrimitivePainter\nC++: vtkPrimitivePainter *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetSupportedPrimitive", PyvtkPrimitivePainter_GetSupportedPrimitive, METH_VARARGS,
   (char*)"V.GetSupportedPrimitive() -> int\nC++: int GetSupportedPrimitive()\n\nGet the type of primitive supported by this painter. This must be\nset by concrete subclasses.\n"},
  {NULL, NULL, 0, NULL}
};

PyObject *PyVTKClass_vtkPrimitivePainterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(NULL,
    PyvtkPrimitivePainter_Methods,
    "vtkPrimitivePainter", modulename,
    NULL, NULL,
    PyvtkPrimitivePainter_Doc(),
    PyVTKClass_vtkPolyDataPainterNew(modulename));
  return cls;
}

const char **PyvtkPrimitivePainter_Doc()
{
  static const char *docstring[] = {
    "vtkPrimitivePainter - superclass for class that handle single\n\n",
    "Superclass: vtkPolyDataPainter\n\n",
    "This is the abstract superclass for classes that handle single type\nof primitive i.e. verts, lines, polys or tstrips. Concrete subclasses\nwill pass a Render() call to the delegate painter, if any, only if it\ncould not render.\n\nThanks:\n\nSupport for generic vertex attributes in VTK was contributed in\ncollaboration with Stephane Ploix at EDF.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPrimitivePainter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPrimitivePainterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPrimitivePainter", o) != 0)
    {
    Py_DECREF(o);
    }

}

