// python wrapper for vtkAppendFilter
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkAppendFilter.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkAppendFilter(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkAppendFilterNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkUnstructuredGridAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkUnstructuredGridAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkUnstructuredGridAlgorithmNew
#endif

static const char **PyvtkAppendFilter_Doc();


static PyObject *
PyvtkAppendFilter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAppendFilter *op = static_cast<vtkAppendFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkAppendFilter::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAppendFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAppendFilter *op = static_cast<vtkAppendFilter *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkAppendFilter::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAppendFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAppendFilter *op = static_cast<vtkAppendFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkAppendFilter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkAppendFilter::NewInstance());

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
PyvtkAppendFilter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkAppendFilter *tempr = vtkAppendFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAppendFilter_GetInput_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAppendFilter *op = static_cast<vtkAppendFilter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkDataSet *tempr = (ap.IsBound() ?
      op->GetInput(temp0) :
      op->vtkAppendFilter::GetInput(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkAppendFilter_GetInput_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAppendFilter *op = static_cast<vtkAppendFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkDataSet *tempr = (ap.IsBound() ?
      op->GetInput() :
      op->vtkAppendFilter::GetInput());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkAppendFilter_GetInput(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkAppendFilter_GetInput_s1(self, args);
    case 0:
      return PyvtkAppendFilter_GetInput_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetInput");
  return NULL;
}



static PyObject *
PyvtkAppendFilter_GetMergePoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMergePoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAppendFilter *op = static_cast<vtkAppendFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetMergePoints() :
      op->vtkAppendFilter::GetMergePoints());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAppendFilter_SetMergePoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMergePoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAppendFilter *op = static_cast<vtkAppendFilter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetMergePoints(temp0);
      }
    else
      {
      op->vtkAppendFilter::SetMergePoints(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAppendFilter_MergePointsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MergePointsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAppendFilter *op = static_cast<vtkAppendFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->MergePointsOn();
      }
    else
      {
      op->vtkAppendFilter::MergePointsOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAppendFilter_MergePointsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MergePointsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAppendFilter *op = static_cast<vtkAppendFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->MergePointsOff();
      }
    else
      {
      op->vtkAppendFilter::MergePointsOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAppendFilter_RemoveInputData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveInputData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAppendFilter *op = static_cast<vtkAppendFilter *>(vp);

  vtkDataSet *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataSet"))
    {
    if (ap.IsBound())
      {
      op->RemoveInputData(temp0);
      }
    else
      {
      op->vtkAppendFilter::RemoveInputData(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAppendFilter_GetInputList(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInputList");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAppendFilter *op = static_cast<vtkAppendFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkDataSetCollection *tempr = (ap.IsBound() ?
      op->GetInputList() :
      op->vtkAppendFilter::GetInputList());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAppendFilter_SetOutputPointsPrecision(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputPointsPrecision");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAppendFilter *op = static_cast<vtkAppendFilter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetOutputPointsPrecision(temp0);
      }
    else
      {
      op->vtkAppendFilter::SetOutputPointsPrecision(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAppendFilter_GetOutputPointsPrecisionMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputPointsPrecisionMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAppendFilter *op = static_cast<vtkAppendFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetOutputPointsPrecisionMinValue() :
      op->vtkAppendFilter::GetOutputPointsPrecisionMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAppendFilter_GetOutputPointsPrecisionMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputPointsPrecisionMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAppendFilter *op = static_cast<vtkAppendFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetOutputPointsPrecisionMaxValue() :
      op->vtkAppendFilter::GetOutputPointsPrecisionMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAppendFilter_GetOutputPointsPrecision(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputPointsPrecision");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAppendFilter *op = static_cast<vtkAppendFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetOutputPointsPrecision() :
      op->vtkAppendFilter::GetOutputPointsPrecision());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkAppendFilter_Methods[] = {
  {(char*)"GetClassName", PyvtkAppendFilter_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkAppendFilter_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkAppendFilter_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkAppendFilter\nC++: vtkAppendFilter *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkAppendFilter_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkAppendFilter\nC++: vtkAppendFilter *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetInput", PyvtkAppendFilter_GetInput, METH_VARARGS,
   (char*)"V.GetInput(int) -> vtkDataSet\nC++: vtkDataSet *GetInput(int idx)\nV.GetInput() -> vtkDataSet\nC++: vtkDataSet *GetInput()\n\nGet any input of this filter.\n"},
  {(char*)"GetMergePoints", PyvtkAppendFilter_GetMergePoints, METH_VARARGS,
   (char*)"V.GetMergePoints() -> int\nC++: int GetMergePoints()\n\nGet if the filter should merge coincidental points Note: The\nfilter will only merge points if the ghost cell array doesn't\nexist Defaults to Off\n"},
  {(char*)"SetMergePoints", PyvtkAppendFilter_SetMergePoints, METH_VARARGS,
   (char*)"V.SetMergePoints(int)\nC++: void SetMergePoints(int a)\n\nSet the filter to merge coincidental points. Note: The filter\nwill only merge points if the ghost cell array doesn't exist\nDefaults to Off\n"},
  {(char*)"MergePointsOn", PyvtkAppendFilter_MergePointsOn, METH_VARARGS,
   (char*)"V.MergePointsOn()\nC++: void MergePointsOn()\n\n"},
  {(char*)"MergePointsOff", PyvtkAppendFilter_MergePointsOff, METH_VARARGS,
   (char*)"V.MergePointsOff()\nC++: void MergePointsOff()\n\n"},
  {(char*)"RemoveInputData", PyvtkAppendFilter_RemoveInputData, METH_VARARGS,
   (char*)"V.RemoveInputData(vtkDataSet)\nC++: void RemoveInputData(vtkDataSet *in)\n\nRemove a dataset from the list of data to append.\n"},
  {(char*)"GetInputList", PyvtkAppendFilter_GetInputList, METH_VARARGS,
   (char*)"V.GetInputList() -> vtkDataSetCollection\nC++: vtkDataSetCollection *GetInputList()\n\nReturns a copy of the input array.  Modifications to this list\nwill not be reflected in the actual inputs.\n"},
  {(char*)"SetOutputPointsPrecision", PyvtkAppendFilter_SetOutputPointsPrecision, METH_VARARGS,
   (char*)"V.SetOutputPointsPrecision(int)\nC++: void SetOutputPointsPrecision(int)\n\nSet/get the desired precision for the output types. See the\ndocumentation for the vtkAlgorithm::Precision enum for an\nexplanation of the available precision settings.\n"},
  {(char*)"GetOutputPointsPrecisionMinValue", PyvtkAppendFilter_GetOutputPointsPrecisionMinValue, METH_VARARGS,
   (char*)"V.GetOutputPointsPrecisionMinValue() -> int\nC++: int GetOutputPointsPrecisionMinValue()\n\nSet/get the desired precision for the output types. See the\ndocumentation for the vtkAlgorithm::Precision enum for an\nexplanation of the available precision settings.\n"},
  {(char*)"GetOutputPointsPrecisionMaxValue", PyvtkAppendFilter_GetOutputPointsPrecisionMaxValue, METH_VARARGS,
   (char*)"V.GetOutputPointsPrecisionMaxValue() -> int\nC++: int GetOutputPointsPrecisionMaxValue()\n\nSet/get the desired precision for the output types. See the\ndocumentation for the vtkAlgorithm::Precision enum for an\nexplanation of the available precision settings.\n"},
  {(char*)"GetOutputPointsPrecision", PyvtkAppendFilter_GetOutputPointsPrecision, METH_VARARGS,
   (char*)"V.GetOutputPointsPrecision() -> int\nC++: int GetOutputPointsPrecision()\n\nSet/get the desired precision for the output types. See the\ndocumentation for the vtkAlgorithm::Precision enum for an\nexplanation of the available precision settings.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkAppendFilter_StaticNew()
{
  return vtkAppendFilter::New();
}

PyObject *PyVTKClass_vtkAppendFilterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkAppendFilter_StaticNew,
    PyvtkAppendFilter_Methods,
    "vtkAppendFilter", modulename,
    NULL, NULL,
    PyvtkAppendFilter_Doc(),
    PyVTKClass_vtkUnstructuredGridAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkAppendFilter_Doc()
{
  static const char *docstring[] = {
    "vtkAppendFilter - appends one or more datasets together into a single\nunstructured grid\n\n",
    "Superclass: vtkUnstructuredGridAlgorithm\n\n",
    "vtkAppendFilter is a filter that appends one of more datasets into a\nsingle unstructured grid. All geometry is extracted and appended, but\npoint attributes (i.e., scalars, vectors, normals, field data, etc.)\nare extracted and appended only if all datasets have the point\nattributes available. (For example, if one dataset has scalars but\nanother does not, scalars will not be appended.)\n\nSee Also:\n\nv",
    "tkAppendPolyData\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkAppendFilter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkAppendFilterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkAppendFilter", o) != 0)
    {
    Py_DECREF(o);
    }

}

