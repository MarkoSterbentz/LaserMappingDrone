// python wrapper for vtkShrinkPolyData
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkShrinkPolyData.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkShrinkPolyData(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkShrinkPolyDataNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkPolyDataAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
#endif

static const char **PyvtkShrinkPolyData_Doc();


static PyObject *
PyvtkShrinkPolyData_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkShrinkPolyData *op = static_cast<vtkShrinkPolyData *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkShrinkPolyData::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkShrinkPolyData_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkShrinkPolyData *op = static_cast<vtkShrinkPolyData *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkShrinkPolyData::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkShrinkPolyData_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkShrinkPolyData *op = static_cast<vtkShrinkPolyData *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkShrinkPolyData *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkShrinkPolyData::NewInstance());

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
PyvtkShrinkPolyData_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkShrinkPolyData *tempr = vtkShrinkPolyData::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkShrinkPolyData_SetShrinkFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetShrinkFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkShrinkPolyData *op = static_cast<vtkShrinkPolyData *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetShrinkFactor(temp0);
      }
    else
      {
      op->vtkShrinkPolyData::SetShrinkFactor(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkShrinkPolyData_GetShrinkFactorMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetShrinkFactorMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkShrinkPolyData *op = static_cast<vtkShrinkPolyData *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetShrinkFactorMinValue() :
      op->vtkShrinkPolyData::GetShrinkFactorMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkShrinkPolyData_GetShrinkFactorMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetShrinkFactorMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkShrinkPolyData *op = static_cast<vtkShrinkPolyData *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetShrinkFactorMaxValue() :
      op->vtkShrinkPolyData::GetShrinkFactorMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkShrinkPolyData_GetShrinkFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetShrinkFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkShrinkPolyData *op = static_cast<vtkShrinkPolyData *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetShrinkFactor() :
      op->vtkShrinkPolyData::GetShrinkFactor());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkShrinkPolyData_Methods[] = {
  {(char*)"GetClassName", PyvtkShrinkPolyData_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkShrinkPolyData_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkShrinkPolyData_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkShrinkPolyData\nC++: vtkShrinkPolyData *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkShrinkPolyData_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkShrinkPolyData\nC++: vtkShrinkPolyData *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetShrinkFactor", PyvtkShrinkPolyData_SetShrinkFactor, METH_VARARGS,
   (char*)"V.SetShrinkFactor(float)\nC++: void SetShrinkFactor(double)\n\nSet the fraction of shrink for each cell.\n"},
  {(char*)"GetShrinkFactorMinValue", PyvtkShrinkPolyData_GetShrinkFactorMinValue, METH_VARARGS,
   (char*)"V.GetShrinkFactorMinValue() -> float\nC++: double GetShrinkFactorMinValue()\n\nSet the fraction of shrink for each cell.\n"},
  {(char*)"GetShrinkFactorMaxValue", PyvtkShrinkPolyData_GetShrinkFactorMaxValue, METH_VARARGS,
   (char*)"V.GetShrinkFactorMaxValue() -> float\nC++: double GetShrinkFactorMaxValue()\n\nSet the fraction of shrink for each cell.\n"},
  {(char*)"GetShrinkFactor", PyvtkShrinkPolyData_GetShrinkFactor, METH_VARARGS,
   (char*)"V.GetShrinkFactor() -> float\nC++: double GetShrinkFactor()\n\nGet the fraction of shrink for each cell.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkShrinkPolyData_StaticNew()
{
  return vtkShrinkPolyData::New();
}

PyObject *PyVTKClass_vtkShrinkPolyDataNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkShrinkPolyData_StaticNew,
    PyvtkShrinkPolyData_Methods,
    "vtkShrinkPolyData", modulename,
    NULL, NULL,
    PyvtkShrinkPolyData_Doc(),
    PyVTKClass_vtkPolyDataAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkShrinkPolyData_Doc()
{
  static const char *docstring[] = {
    "vtkShrinkPolyData - shrink cells composing PolyData\n\n",
    "Superclass: vtkPolyDataAlgorithm\n\n",
    "vtkShrinkPolyData shrinks cells composing a polygonal dataset (e.g.,\nvertices, lines, polygons, and triangle strips) towards their\ncentroid. The centroid of a cell is computed as the average position\nof the cell points. Shrinking results in disconnecting the cells from\none another. The output dataset type of this filter is polygonal\ndata.\n\nDuring execution the filter passes its input cell data to ",
    "its output.\nPoint data attributes are copied to the points created during the\nshrinking process.\n\nCaveats:\n\nIt is possible to turn cells inside out or cause self intersection in\nspecial cases. Users should use the vtkTriangleFilter to triangulate\nmeshes that contain triangle strips.\n\nSee Also:\n\nvtkShrinkFilter\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkShrinkPolyData(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkShrinkPolyDataNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkShrinkPolyData", o) != 0)
    {
    Py_DECREF(o);
    }

}

