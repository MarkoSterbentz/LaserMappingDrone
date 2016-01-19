// python wrapper for vtkPOutlineCornerFilter
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkPOutlineCornerFilter.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkPOutlineCornerFilter(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkPOutlineCornerFilterNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkPolyDataAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
#endif

static const char **PyvtkPOutlineCornerFilter_Doc();


static PyObject *
PyvtkPOutlineCornerFilter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPOutlineCornerFilter *op = static_cast<vtkPOutlineCornerFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkPOutlineCornerFilter::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPOutlineCornerFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPOutlineCornerFilter *op = static_cast<vtkPOutlineCornerFilter *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPOutlineCornerFilter::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPOutlineCornerFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPOutlineCornerFilter *op = static_cast<vtkPOutlineCornerFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPOutlineCornerFilter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPOutlineCornerFilter::NewInstance());

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
PyvtkPOutlineCornerFilter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkPOutlineCornerFilter *tempr = vtkPOutlineCornerFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPOutlineCornerFilter_SetCornerFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCornerFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPOutlineCornerFilter *op = static_cast<vtkPOutlineCornerFilter *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetCornerFactor(temp0);
      }
    else
      {
      op->vtkPOutlineCornerFilter::SetCornerFactor(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPOutlineCornerFilter_GetCornerFactorMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCornerFactorMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPOutlineCornerFilter *op = static_cast<vtkPOutlineCornerFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetCornerFactorMinValue() :
      op->vtkPOutlineCornerFilter::GetCornerFactorMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPOutlineCornerFilter_GetCornerFactorMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCornerFactorMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPOutlineCornerFilter *op = static_cast<vtkPOutlineCornerFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetCornerFactorMaxValue() :
      op->vtkPOutlineCornerFilter::GetCornerFactorMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPOutlineCornerFilter_GetCornerFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCornerFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPOutlineCornerFilter *op = static_cast<vtkPOutlineCornerFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetCornerFactor() :
      op->vtkPOutlineCornerFilter::GetCornerFactor());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPOutlineCornerFilter_SetController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPOutlineCornerFilter *op = static_cast<vtkPOutlineCornerFilter *>(vp);

  vtkMultiProcessController *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMultiProcessController"))
    {
    if (ap.IsBound())
      {
      op->SetController(temp0);
      }
    else
      {
      op->vtkPOutlineCornerFilter::SetController(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPOutlineCornerFilter_GetController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPOutlineCornerFilter *op = static_cast<vtkPOutlineCornerFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkMultiProcessController *tempr = (ap.IsBound() ?
      op->GetController() :
      op->vtkPOutlineCornerFilter::GetController());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkPOutlineCornerFilter_Methods[] = {
  {(char*)"GetClassName", PyvtkPOutlineCornerFilter_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkPOutlineCornerFilter_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkPOutlineCornerFilter_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkPOutlineCornerFilter\nC++: vtkPOutlineCornerFilter *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkPOutlineCornerFilter_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkPOutlineCornerFilter\nC++: vtkPOutlineCornerFilter *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetCornerFactor", PyvtkPOutlineCornerFilter_SetCornerFactor, METH_VARARGS,
   (char*)"V.SetCornerFactor(float)\nC++: virtual void SetCornerFactor(double cornerFactor)\n\nSet/Get the factor that controls the relative size of the corners\nto the length of the corresponding bounds Typically\nvtkSetClampMacro(CornerFactor, double, 0.001, 0.5) would used but\nsince we are chaining this to an internal method we rewrite the\ncode in the macro\n"},
  {(char*)"GetCornerFactorMinValue", PyvtkPOutlineCornerFilter_GetCornerFactorMinValue, METH_VARARGS,
   (char*)"V.GetCornerFactorMinValue() -> float\nC++: virtual double GetCornerFactorMinValue()\n\nSet/Get the factor that controls the relative size of the corners\nto the length of the corresponding bounds Typically\nvtkSetClampMacro(CornerFactor, double, 0.001, 0.5) would used but\nsince we are chaining this to an internal method we rewrite the\ncode in the macro\n"},
  {(char*)"GetCornerFactorMaxValue", PyvtkPOutlineCornerFilter_GetCornerFactorMaxValue, METH_VARARGS,
   (char*)"V.GetCornerFactorMaxValue() -> float\nC++: virtual double GetCornerFactorMaxValue()\n\nSet/Get the factor that controls the relative size of the corners\nto the length of the corresponding bounds Typically\nvtkSetClampMacro(CornerFactor, double, 0.001, 0.5) would used but\nsince we are chaining this to an internal method we rewrite the\ncode in the macro\n"},
  {(char*)"GetCornerFactor", PyvtkPOutlineCornerFilter_GetCornerFactor, METH_VARARGS,
   (char*)"V.GetCornerFactor() -> float\nC++: double GetCornerFactor()\n\n"},
  {(char*)"SetController", PyvtkPOutlineCornerFilter_SetController, METH_VARARGS,
   (char*)"V.SetController(vtkMultiProcessController)\nC++: virtual void SetController(vtkMultiProcessController *)\n\nSet and get the controller.\n"},
  {(char*)"GetController", PyvtkPOutlineCornerFilter_GetController, METH_VARARGS,
   (char*)"V.GetController() -> vtkMultiProcessController\nC++: vtkMultiProcessController *GetController()\n\nSet and get the controller.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkPOutlineCornerFilter_StaticNew()
{
  return vtkPOutlineCornerFilter::New();
}

PyObject *PyVTKClass_vtkPOutlineCornerFilterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkPOutlineCornerFilter_StaticNew,
    PyvtkPOutlineCornerFilter_Methods,
    "vtkPOutlineCornerFilter", modulename,
    NULL, NULL,
    PyvtkPOutlineCornerFilter_Doc(),
    PyVTKClass_vtkPolyDataAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkPOutlineCornerFilter_Doc()
{
  static const char *docstring[] = {
    "vtkPOutlineCornerFilter - create wireframe outline corners for\narbitrary data set\n\n",
    "Superclass: vtkPolyDataAlgorithm\n\n",
    "vtkPOutlineCornerFilter works like vtkOutlineCornerFilter, but it\nlooks for data partitions in other processes.  It assumes the filter\nis operated in a data parallel pipeline.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPOutlineCornerFilter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPOutlineCornerFilterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPOutlineCornerFilter", o) != 0)
    {
    Py_DECREF(o);
    }

}

