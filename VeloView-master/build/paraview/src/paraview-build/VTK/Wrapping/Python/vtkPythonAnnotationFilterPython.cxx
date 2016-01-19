// python wrapper for vtkPythonAnnotationFilter
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkPythonAnnotationFilter.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkPythonAnnotationFilter(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkPythonAnnotationFilterNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkTableAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkTableAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkTableAlgorithmNew
#endif

static const char **PyvtkPythonAnnotationFilter_Doc();


static PyObject *
PyvtkPythonAnnotationFilter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPythonAnnotationFilter *op = static_cast<vtkPythonAnnotationFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkPythonAnnotationFilter::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPythonAnnotationFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPythonAnnotationFilter *op = static_cast<vtkPythonAnnotationFilter *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPythonAnnotationFilter::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPythonAnnotationFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPythonAnnotationFilter *op = static_cast<vtkPythonAnnotationFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPythonAnnotationFilter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPythonAnnotationFilter::NewInstance());

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
PyvtkPythonAnnotationFilter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkPythonAnnotationFilter *tempr = vtkPythonAnnotationFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPythonAnnotationFilter_SetExpression(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExpression");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPythonAnnotationFilter *op = static_cast<vtkPythonAnnotationFilter *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetExpression(temp0);
      }
    else
      {
      op->vtkPythonAnnotationFilter::SetExpression(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPythonAnnotationFilter_GetExpression(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetExpression");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPythonAnnotationFilter *op = static_cast<vtkPythonAnnotationFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetExpression() :
      op->vtkPythonAnnotationFilter::GetExpression());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPythonAnnotationFilter_SetArrayAssociation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetArrayAssociation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPythonAnnotationFilter *op = static_cast<vtkPythonAnnotationFilter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetArrayAssociation(temp0);
      }
    else
      {
      op->vtkPythonAnnotationFilter::SetArrayAssociation(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPythonAnnotationFilter_GetArrayAssociation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetArrayAssociation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPythonAnnotationFilter *op = static_cast<vtkPythonAnnotationFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetArrayAssociation() :
      op->vtkPythonAnnotationFilter::GetArrayAssociation());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPythonAnnotationFilter_GetComputedAnnotationValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetComputedAnnotationValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPythonAnnotationFilter *op = static_cast<vtkPythonAnnotationFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetComputedAnnotationValue() :
      op->vtkPythonAnnotationFilter::GetComputedAnnotationValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPythonAnnotationFilter_GetDataTimeValid(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataTimeValid");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPythonAnnotationFilter *op = static_cast<vtkPythonAnnotationFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetDataTimeValid() :
      op->vtkPythonAnnotationFilter::GetDataTimeValid());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPythonAnnotationFilter_GetDataTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPythonAnnotationFilter *op = static_cast<vtkPythonAnnotationFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetDataTime() :
      op->vtkPythonAnnotationFilter::GetDataTime());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPythonAnnotationFilter_GetNumberOfTimeSteps(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfTimeSteps");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPythonAnnotationFilter *op = static_cast<vtkPythonAnnotationFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfTimeSteps() :
      op->vtkPythonAnnotationFilter::GetNumberOfTimeSteps());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPythonAnnotationFilter_GetTimeStep(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTimeStep");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPythonAnnotationFilter *op = static_cast<vtkPythonAnnotationFilter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    double tempr = (ap.IsBound() ?
      op->GetTimeStep(temp0) :
      op->vtkPythonAnnotationFilter::GetTimeStep(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPythonAnnotationFilter_GetTimeRangeValid(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTimeRangeValid");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPythonAnnotationFilter *op = static_cast<vtkPythonAnnotationFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetTimeRangeValid() :
      op->vtkPythonAnnotationFilter::GetTimeRangeValid());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPythonAnnotationFilter_GetTimeRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTimeRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPythonAnnotationFilter *op = static_cast<vtkPythonAnnotationFilter *>(vp);

  int sizer = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetTimeRange() :
      op->vtkPythonAnnotationFilter::GetTimeRange());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkPythonAnnotationFilter_GetCurrentInputDataObject(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCurrentInputDataObject");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPythonAnnotationFilter *op = static_cast<vtkPythonAnnotationFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkDataObject *tempr = (ap.IsBound() ?
      op->GetCurrentInputDataObject() :
      op->vtkPythonAnnotationFilter::GetCurrentInputDataObject());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPythonAnnotationFilter_SetComputedAnnotationValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetComputedAnnotationValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPythonAnnotationFilter *op = static_cast<vtkPythonAnnotationFilter *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetComputedAnnotationValue(temp0);
      }
    else
      {
      op->vtkPythonAnnotationFilter::SetComputedAnnotationValue(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkPythonAnnotationFilter_Methods[] = {
  {(char*)"GetClassName", PyvtkPythonAnnotationFilter_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkPythonAnnotationFilter_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkPythonAnnotationFilter_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkPythonAnnotationFilter\nC++: vtkPythonAnnotationFilter *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkPythonAnnotationFilter_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkPythonAnnotationFilter\nC++: vtkPythonAnnotationFilter *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetExpression", PyvtkPythonAnnotationFilter_SetExpression, METH_VARARGS,
   (char*)"V.SetExpression(string)\nC++: void SetExpression(char *)\n\nSet the expression to evaluate. Here is a set of common\nexpressions:\n- \"Momentum %s\" %\n  str(Momentum[available_timesteps.index(provided_time)])\n"},
  {(char*)"GetExpression", PyvtkPythonAnnotationFilter_GetExpression, METH_VARARGS,
   (char*)"V.GetExpression() -> string\nC++: char *GetExpression()\n\nSet the expression to evaluate. Here is a set of common\nexpressions:\n- \"Momentum %s\" %\n  str(Momentum[available_timesteps.index(provided_time)])\n"},
  {(char*)"SetArrayAssociation", PyvtkPythonAnnotationFilter_SetArrayAssociation, METH_VARARGS,
   (char*)"V.SetArrayAssociation(int)\nC++: void SetArrayAssociation(int a)\n\nSet the input array association. This dictates which array names\nare made available in the namespace by default. You can still use\ninput.PointData['foo'] or input.CellData['bar'] explicitly to\npick a specific array in your expression.\n"},
  {(char*)"GetArrayAssociation", PyvtkPythonAnnotationFilter_GetArrayAssociation, METH_VARARGS,
   (char*)"V.GetArrayAssociation() -> int\nC++: int GetArrayAssociation()\n\nSet the input array association. This dictates which array names\nare made available in the namespace by default. You can still use\ninput.PointData['foo'] or input.CellData['bar'] explicitly to\npick a specific array in your expression.\n"},
  {(char*)"GetComputedAnnotationValue", PyvtkPythonAnnotationFilter_GetComputedAnnotationValue, METH_VARARGS,
   (char*)"V.GetComputedAnnotationValue() -> string\nC++: char *GetComputedAnnotationValue()\n\nGet the value that is going to be printed to the output.\n"},
  {(char*)"GetDataTimeValid", PyvtkPythonAnnotationFilter_GetDataTimeValid, METH_VARARGS,
   (char*)"V.GetDataTimeValid() -> bool\nC++: bool GetDataTimeValid()\n\nGet methods for use in annotation.py. The values are only valid\nduring RequestData().\n"},
  {(char*)"GetDataTime", PyvtkPythonAnnotationFilter_GetDataTime, METH_VARARGS,
   (char*)"V.GetDataTime() -> float\nC++: double GetDataTime()\n\nGet methods for use in annotation.py. The values are only valid\nduring RequestData().\n"},
  {(char*)"GetNumberOfTimeSteps", PyvtkPythonAnnotationFilter_GetNumberOfTimeSteps, METH_VARARGS,
   (char*)"V.GetNumberOfTimeSteps() -> int\nC++: int GetNumberOfTimeSteps()\n\n"},
  {(char*)"GetTimeStep", PyvtkPythonAnnotationFilter_GetTimeStep, METH_VARARGS,
   (char*)"V.GetTimeStep(int) -> float\nC++: double GetTimeStep(int index)\n\n"},
  {(char*)"GetTimeRangeValid", PyvtkPythonAnnotationFilter_GetTimeRangeValid, METH_VARARGS,
   (char*)"V.GetTimeRangeValid() -> bool\nC++: bool GetTimeRangeValid()\n\n"},
  {(char*)"GetTimeRange", PyvtkPythonAnnotationFilter_GetTimeRange, METH_VARARGS,
   (char*)"V.GetTimeRange() -> (float, float)\nC++: double *GetTimeRange()\n\n"},
  {(char*)"GetCurrentInputDataObject", PyvtkPythonAnnotationFilter_GetCurrentInputDataObject, METH_VARARGS,
   (char*)"V.GetCurrentInputDataObject() -> vtkDataObject\nC++: vtkDataObject *GetCurrentInputDataObject()\n\n"},
  {(char*)"SetComputedAnnotationValue", PyvtkPythonAnnotationFilter_SetComputedAnnotationValue, METH_VARARGS,
   (char*)"V.SetComputedAnnotationValue(string)\nC++: void SetComputedAnnotationValue(const char *value)\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkPythonAnnotationFilter_StaticNew()
{
  return vtkPythonAnnotationFilter::New();
}

PyObject *PyVTKClass_vtkPythonAnnotationFilterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkPythonAnnotationFilter_StaticNew,
    PyvtkPythonAnnotationFilter_Methods,
    "vtkPythonAnnotationFilter", modulename,
    NULL, NULL,
    PyvtkPythonAnnotationFilter_Doc(),
    PyVTKClass_vtkTableAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkPythonAnnotationFilter_Doc()
{
  static const char *docstring[] = {
    "vtkPythonAnnotationFilter - filter used to generate text annotation\n\n",
    "Superclass: vtkTableAlgorithm\n\n",
    "vtkPythonAnnotationFilter is designed to generate vtkTableAlgorithm\nwith a single string in it. The goal is that user will write a Python\nexpression, similar to an expression in Python Calculator\n(vtkPythonCalculator). The generated result is converted to string\nand placed in the output.\n\nThe variables available in the expression evaluation scope are as\nfollows:\n\\li sanitized array names for all a",
    "rrays in the chosen\n    ArrayAssociation.\n\\li input: refers to the input dataset (wrapped as\nvtk.numpy_interface.dataset_adapter.DataObject or subclass).\n\\li time_value: vtkDataObject::DATA_TIME_STEP() from input.\n\\li time_steps: vtkDataObject::TIME_STEPS() from the input, if any\n\\li time_range: vtkDataObject::TIME_RANGE() from the input, if any\n\nExamples of valid expressions are:\n\\li \"Max temp is",
    " %s\" % max(Temp)\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPythonAnnotationFilter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPythonAnnotationFilterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPythonAnnotationFilter", o) != 0)
    {
    Py_DECREF(o);
    }

}

