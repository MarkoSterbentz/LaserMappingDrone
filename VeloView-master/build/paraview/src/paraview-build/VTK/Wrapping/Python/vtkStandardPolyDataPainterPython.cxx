// python wrapper for vtkStandardPolyDataPainter
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkStandardPolyDataPainter.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkStandardPolyDataPainter(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkStandardPolyDataPainterNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkPolyDataPainterNew
extern "C" { PyObject *PyVTKClass_vtkPolyDataPainterNew(const char *); }
#define DECLARED_PyVTKClass_vtkPolyDataPainterNew
#endif

static const char **PyvtkStandardPolyDataPainter_Doc();


static PyObject *
PyvtkStandardPolyDataPainter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStandardPolyDataPainter *op = static_cast<vtkStandardPolyDataPainter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkStandardPolyDataPainter::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStandardPolyDataPainter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStandardPolyDataPainter *op = static_cast<vtkStandardPolyDataPainter *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkStandardPolyDataPainter::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStandardPolyDataPainter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStandardPolyDataPainter *op = static_cast<vtkStandardPolyDataPainter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkStandardPolyDataPainter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkStandardPolyDataPainter::NewInstance());

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
PyvtkStandardPolyDataPainter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkStandardPolyDataPainter *tempr = vtkStandardPolyDataPainter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStandardPolyDataPainter_AddMultiTextureCoordsArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddMultiTextureCoordsArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStandardPolyDataPainter *op = static_cast<vtkStandardPolyDataPainter *>(vp);

  vtkDataArray *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataArray"))
    {
    if (ap.IsBound())
      {
      op->AddMultiTextureCoordsArray(temp0);
      }
    else
      {
      op->vtkStandardPolyDataPainter::AddMultiTextureCoordsArray(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkStandardPolyDataPainter_Methods[] = {
  {(char*)"GetClassName", PyvtkStandardPolyDataPainter_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkStandardPolyDataPainter_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkStandardPolyDataPainter_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkStandardPolyDataPainter\nC++: vtkStandardPolyDataPainter *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkStandardPolyDataPainter_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkStandardPolyDataPainter\nC++: vtkStandardPolyDataPainter *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"AddMultiTextureCoordsArray", PyvtkStandardPolyDataPainter_AddMultiTextureCoordsArray, METH_VARARGS,
   (char*)"V.AddMultiTextureCoordsArray(vtkDataArray)\nC++: void AddMultiTextureCoordsArray(vtkDataArray *array)\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkStandardPolyDataPainter_StaticNew()
{
  return vtkStandardPolyDataPainter::New();
}

PyObject *PyVTKClass_vtkStandardPolyDataPainterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkStandardPolyDataPainter_StaticNew,
    PyvtkStandardPolyDataPainter_Methods,
    "vtkStandardPolyDataPainter", modulename,
    NULL, NULL,
    PyvtkStandardPolyDataPainter_Doc(),
    PyVTKClass_vtkPolyDataPainterNew(modulename));
  return cls;
}

const char **PyvtkStandardPolyDataPainter_Doc()
{
  static const char *docstring[] = {
    "vtkStandardPolyDataPainter - A standard implementation of\nvtkPolyDataPainter.\n\n",
    "Superclass: vtkPolyDataPainter\n\n",
    "vtkStandardPolyDataPainter is a catch-all painter.  It should work\nwith pretty much any vtkPolyData, and attributes, and\nvtkPolyDataPainterDeviceAdapter.  On the flip side, the\nvtkStandardPolyDataPainter will be slower than the more special\npurpose painters.\n\nSee Also:\n\nvtkDefaultPainter\n\nThanks:\n\nSupport for generic vertex attributes in VTK was contributed in\ncollaboration with Stephane Ploix at ",
    "EDF.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkStandardPolyDataPainter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkStandardPolyDataPainterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkStandardPolyDataPainter", o) != 0)
    {
    Py_DECREF(o);
    }

}

