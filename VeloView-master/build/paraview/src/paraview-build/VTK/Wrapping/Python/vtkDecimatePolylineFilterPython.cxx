// python wrapper for vtkDecimatePolylineFilter
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkDecimatePolylineFilter.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkDecimatePolylineFilter(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkDecimatePolylineFilterNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkPolyDataAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
#endif

static const char **PyvtkDecimatePolylineFilter_Doc();


static PyObject *
PyvtkDecimatePolylineFilter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDecimatePolylineFilter *op = static_cast<vtkDecimatePolylineFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkDecimatePolylineFilter::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDecimatePolylineFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDecimatePolylineFilter *op = static_cast<vtkDecimatePolylineFilter *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkDecimatePolylineFilter::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDecimatePolylineFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDecimatePolylineFilter *op = static_cast<vtkDecimatePolylineFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkDecimatePolylineFilter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkDecimatePolylineFilter::NewInstance());

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
PyvtkDecimatePolylineFilter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkDecimatePolylineFilter *tempr = vtkDecimatePolylineFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDecimatePolylineFilter_SetTargetReduction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTargetReduction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDecimatePolylineFilter *op = static_cast<vtkDecimatePolylineFilter *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetTargetReduction(temp0);
      }
    else
      {
      op->vtkDecimatePolylineFilter::SetTargetReduction(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDecimatePolylineFilter_GetTargetReductionMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTargetReductionMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDecimatePolylineFilter *op = static_cast<vtkDecimatePolylineFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetTargetReductionMinValue() :
      op->vtkDecimatePolylineFilter::GetTargetReductionMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDecimatePolylineFilter_GetTargetReductionMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTargetReductionMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDecimatePolylineFilter *op = static_cast<vtkDecimatePolylineFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetTargetReductionMaxValue() :
      op->vtkDecimatePolylineFilter::GetTargetReductionMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDecimatePolylineFilter_GetTargetReduction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTargetReduction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDecimatePolylineFilter *op = static_cast<vtkDecimatePolylineFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetTargetReduction() :
      op->vtkDecimatePolylineFilter::GetTargetReduction());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDecimatePolylineFilter_SetOutputPointsPrecision(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputPointsPrecision");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDecimatePolylineFilter *op = static_cast<vtkDecimatePolylineFilter *>(vp);

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
      op->vtkDecimatePolylineFilter::SetOutputPointsPrecision(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDecimatePolylineFilter_GetOutputPointsPrecision(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputPointsPrecision");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDecimatePolylineFilter *op = static_cast<vtkDecimatePolylineFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetOutputPointsPrecision() :
      op->vtkDecimatePolylineFilter::GetOutputPointsPrecision());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkDecimatePolylineFilter_Methods[] = {
  {(char*)"GetClassName", PyvtkDecimatePolylineFilter_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\nStandard methods for type information and printing.\n"},
  {(char*)"IsA", PyvtkDecimatePolylineFilter_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\nStandard methods for type information and printing.\n"},
  {(char*)"NewInstance", PyvtkDecimatePolylineFilter_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkDecimatePolylineFilter\nC++: vtkDecimatePolylineFilter *NewInstance()\n\nStandard methods for type information and printing.\n"},
  {(char*)"SafeDownCast", PyvtkDecimatePolylineFilter_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkDecimatePolylineFilter\nC++: vtkDecimatePolylineFilter *SafeDownCast(vtkObject* o)\n\nStandard methods for type information and printing.\n"},
  {(char*)"SetTargetReduction", PyvtkDecimatePolylineFilter_SetTargetReduction, METH_VARARGS,
   (char*)"V.SetTargetReduction(float)\nC++: void SetTargetReduction(double)\n\nSpecify the desired reduction in the total number of polygons\n(e.g., if TargetReduction is set to 0.9, this filter will try to\nreduce the data set to 10% of its original size).\n"},
  {(char*)"GetTargetReductionMinValue", PyvtkDecimatePolylineFilter_GetTargetReductionMinValue, METH_VARARGS,
   (char*)"V.GetTargetReductionMinValue() -> float\nC++: double GetTargetReductionMinValue()\n\nSpecify the desired reduction in the total number of polygons\n(e.g., if TargetReduction is set to 0.9, this filter will try to\nreduce the data set to 10% of its original size).\n"},
  {(char*)"GetTargetReductionMaxValue", PyvtkDecimatePolylineFilter_GetTargetReductionMaxValue, METH_VARARGS,
   (char*)"V.GetTargetReductionMaxValue() -> float\nC++: double GetTargetReductionMaxValue()\n\nSpecify the desired reduction in the total number of polygons\n(e.g., if TargetReduction is set to 0.9, this filter will try to\nreduce the data set to 10% of its original size).\n"},
  {(char*)"GetTargetReduction", PyvtkDecimatePolylineFilter_GetTargetReduction, METH_VARARGS,
   (char*)"V.GetTargetReduction() -> float\nC++: double GetTargetReduction()\n\nSpecify the desired reduction in the total number of polygons\n(e.g., if TargetReduction is set to 0.9, this filter will try to\nreduce the data set to 10% of its original size).\n"},
  {(char*)"SetOutputPointsPrecision", PyvtkDecimatePolylineFilter_SetOutputPointsPrecision, METH_VARARGS,
   (char*)"V.SetOutputPointsPrecision(int)\nC++: void SetOutputPointsPrecision(int a)\n\nSet/get the desired precision for the output types. See the\ndocumentation for the vtkAlgorithm::DesiredOutputPrecision enum\nfor an explanation of the available precision settings.\n"},
  {(char*)"GetOutputPointsPrecision", PyvtkDecimatePolylineFilter_GetOutputPointsPrecision, METH_VARARGS,
   (char*)"V.GetOutputPointsPrecision() -> int\nC++: int GetOutputPointsPrecision()\n\nSet/get the desired precision for the output types. See the\ndocumentation for the vtkAlgorithm::DesiredOutputPrecision enum\nfor an explanation of the available precision settings.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkDecimatePolylineFilter_StaticNew()
{
  return vtkDecimatePolylineFilter::New();
}

PyObject *PyVTKClass_vtkDecimatePolylineFilterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkDecimatePolylineFilter_StaticNew,
    PyvtkDecimatePolylineFilter_Methods,
    "vtkDecimatePolylineFilter", modulename,
    NULL, NULL,
    PyvtkDecimatePolylineFilter_Doc(),
    PyVTKClass_vtkPolyDataAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkDecimatePolylineFilter_Doc()
{
  static const char *docstring[] = {
    "vtkDecimatePolylineFilter - reduce the number of lines in a polyline\n\n",
    "Superclass: vtkPolyDataAlgorithm\n\n",
    "vtkDecimatePolylineFilter is a filter to reduce the number of lines\nin a polyline. The algorithm functions by evaluating an error metric\nfor each vertex (i.e., the distance of the vertex to a line defined\nfrom the two vertices on either side of the vertex). Then, these\nvertices are placed into a priority queue, and those with larger\nerrors are deleted first. The decimation continues until the targ",
    "et\nreduction is reached.\n\nCaveats:\n\nThis algorithm is a very simple implementation that overlooks some\npotential complexities. First, if a vertex is multiply connected,\nmeaning that it is used by multiple polylines, then the extra\ntopological constraints are ignored. Second, the error is not updated\nas vertices are deleted (similar to iteratively computing a quadric\nerror metric). Thus, once calcu",
    "lated, the error is used to determine\nwhich vertices are removed. This can produce less than optimal\nresults.\n\nSee Also:\n\nvtkDecimate vtkDecimateProp vtkQuadricClustering vtkQuadricDecimation\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkDecimatePolylineFilter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkDecimatePolylineFilterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkDecimatePolylineFilter", o) != 0)
    {
    Py_DECREF(o);
    }

}

