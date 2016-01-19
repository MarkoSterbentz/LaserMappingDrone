// python wrapper for vtkNonLinearCell
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkNonLinearCell.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkNonLinearCell(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkNonLinearCellNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkCellNew
extern "C" { PyObject *PyVTKClass_vtkCellNew(const char *); }
#define DECLARED_PyVTKClass_vtkCellNew
#endif

static const char **PyvtkNonLinearCell_Doc();


static PyObject *
PyvtkNonLinearCell_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNonLinearCell *op = static_cast<vtkNonLinearCell *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkNonLinearCell::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkNonLinearCell_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNonLinearCell *op = static_cast<vtkNonLinearCell *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkNonLinearCell::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkNonLinearCell_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNonLinearCell *op = static_cast<vtkNonLinearCell *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkNonLinearCell *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkNonLinearCell::NewInstance());

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
PyvtkNonLinearCell_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkNonLinearCell *tempr = vtkNonLinearCell::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkNonLinearCell_IsLinear(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsLinear");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNonLinearCell *op = static_cast<vtkNonLinearCell *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->IsLinear() :
      op->vtkNonLinearCell::IsLinear());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkNonLinearCell_Methods[] = {
  {(char*)"GetClassName", PyvtkNonLinearCell_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkNonLinearCell_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkNonLinearCell_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkNonLinearCell\nC++: vtkNonLinearCell *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkNonLinearCell_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkNonLinearCell\nC++: vtkNonLinearCell *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"IsLinear", PyvtkNonLinearCell_IsLinear, METH_VARARGS,
   (char*)"V.IsLinear() -> int\nC++: virtual int IsLinear()\n\nNon-linear cells require special treatment (tessellation) when\nconverting to graphics primitives (during mapping). The vtkCell\nAPI IsLinear() is modified to indicate this requirement.\n"},
  {NULL, NULL, 0, NULL}
};

PyObject *PyVTKClass_vtkNonLinearCellNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(NULL,
    PyvtkNonLinearCell_Methods,
    "vtkNonLinearCell", modulename,
    NULL, NULL,
    PyvtkNonLinearCell_Doc(),
    PyVTKClass_vtkCellNew(modulename));
  return cls;
}

const char **PyvtkNonLinearCell_Doc()
{
  static const char *docstring[] = {
    "vtkNonLinearCell - abstract superclass for non-linear cells\n\n",
    "Superclass: vtkCell\n\n",
    "vtkNonLinearCell is an abstract superclass for non-linear cell types.\nCells that are a direct subclass of vtkCell or vtkCell3D are linear;\ncells that are a subclass of vtkNonLinearCell have non-linear\ninterpolation functions. Non-linear cells require special treatment\nwhen tessellating or converting to graphics primitives. Note that the\nlinearity of the cell is a function of whether the cell needs",
    "\ntessellation, which does not strictly correlate with interpolation\norder (e.g., vtkHexahedron has non-linear interpolation functions (a\nproduct of three linear functions in r-s-t) even thought\nvtkHexahedron is considered linear.)\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkNonLinearCell(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkNonLinearCellNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkNonLinearCell", o) != 0)
    {
    Py_DECREF(o);
    }

}

