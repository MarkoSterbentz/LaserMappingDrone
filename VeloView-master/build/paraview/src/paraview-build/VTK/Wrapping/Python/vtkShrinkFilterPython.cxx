// python wrapper for vtkShrinkFilter
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkShrinkFilter.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkShrinkFilter(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkShrinkFilterNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkUnstructuredGridAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkUnstructuredGridAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkUnstructuredGridAlgorithmNew
#endif

static const char **PyvtkShrinkFilter_Doc();


static PyObject *
PyvtkShrinkFilter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkShrinkFilter *op = static_cast<vtkShrinkFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkShrinkFilter::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkShrinkFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkShrinkFilter *op = static_cast<vtkShrinkFilter *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkShrinkFilter::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkShrinkFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkShrinkFilter *op = static_cast<vtkShrinkFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkShrinkFilter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkShrinkFilter::NewInstance());

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
PyvtkShrinkFilter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkShrinkFilter *tempr = vtkShrinkFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkShrinkFilter_SetShrinkFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetShrinkFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkShrinkFilter *op = static_cast<vtkShrinkFilter *>(vp);

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
      op->vtkShrinkFilter::SetShrinkFactor(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkShrinkFilter_GetShrinkFactorMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetShrinkFactorMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkShrinkFilter *op = static_cast<vtkShrinkFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetShrinkFactorMinValue() :
      op->vtkShrinkFilter::GetShrinkFactorMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkShrinkFilter_GetShrinkFactorMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetShrinkFactorMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkShrinkFilter *op = static_cast<vtkShrinkFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetShrinkFactorMaxValue() :
      op->vtkShrinkFilter::GetShrinkFactorMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkShrinkFilter_GetShrinkFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetShrinkFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkShrinkFilter *op = static_cast<vtkShrinkFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetShrinkFactor() :
      op->vtkShrinkFilter::GetShrinkFactor());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkShrinkFilter_Methods[] = {
  {(char*)"GetClassName", PyvtkShrinkFilter_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkShrinkFilter_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkShrinkFilter_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkShrinkFilter\nC++: vtkShrinkFilter *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkShrinkFilter_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkShrinkFilter\nC++: vtkShrinkFilter *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetShrinkFactor", PyvtkShrinkFilter_SetShrinkFactor, METH_VARARGS,
   (char*)"V.SetShrinkFactor(float)\nC++: void SetShrinkFactor(double)\n\nGet/Set the fraction of shrink for each cell. The default is 0.5.\n"},
  {(char*)"GetShrinkFactorMinValue", PyvtkShrinkFilter_GetShrinkFactorMinValue, METH_VARARGS,
   (char*)"V.GetShrinkFactorMinValue() -> float\nC++: double GetShrinkFactorMinValue()\n\nGet/Set the fraction of shrink for each cell. The default is 0.5.\n"},
  {(char*)"GetShrinkFactorMaxValue", PyvtkShrinkFilter_GetShrinkFactorMaxValue, METH_VARARGS,
   (char*)"V.GetShrinkFactorMaxValue() -> float\nC++: double GetShrinkFactorMaxValue()\n\nGet/Set the fraction of shrink for each cell. The default is 0.5.\n"},
  {(char*)"GetShrinkFactor", PyvtkShrinkFilter_GetShrinkFactor, METH_VARARGS,
   (char*)"V.GetShrinkFactor() -> float\nC++: double GetShrinkFactor()\n\nGet/Set the fraction of shrink for each cell. The default is 0.5.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkShrinkFilter_StaticNew()
{
  return vtkShrinkFilter::New();
}

PyObject *PyVTKClass_vtkShrinkFilterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkShrinkFilter_StaticNew,
    PyvtkShrinkFilter_Methods,
    "vtkShrinkFilter", modulename,
    NULL, NULL,
    PyvtkShrinkFilter_Doc(),
    PyVTKClass_vtkUnstructuredGridAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkShrinkFilter_Doc()
{
  static const char *docstring[] = {
    "vtkShrinkFilter - shrink cells composing an arbitrary data set\n\n",
    "Superclass: vtkUnstructuredGridAlgorithm\n\n",
    "vtkShrinkFilter shrinks cells composing an arbitrary data set towards\ntheir centroid. The centroid of a cell is computed as the average\nposition of the cell points. Shrinking results in disconnecting the\ncells from one another. The output of this filter is of general\ndataset type vtkUnstructuredGrid.\n\nCaveats:\n\nIt is possible to turn cells inside out or cause self intersection in\nspecial cases.\n\nS",
    "ee Also:\n\nvtkShrinkPolyData\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkShrinkFilter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkShrinkFilterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkShrinkFilter", o) != 0)
    {
    Py_DECREF(o);
    }

}

