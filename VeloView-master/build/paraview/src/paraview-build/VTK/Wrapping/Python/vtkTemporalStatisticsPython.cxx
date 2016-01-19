// python wrapper for vtkTemporalStatistics
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkTemporalStatistics.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkTemporalStatistics(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkTemporalStatisticsNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkPassInputTypeAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkPassInputTypeAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkPassInputTypeAlgorithmNew
#endif

static const char **PyvtkTemporalStatistics_Doc();


static PyObject *
PyvtkTemporalStatistics_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalStatistics *op = static_cast<vtkTemporalStatistics *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkTemporalStatistics::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTemporalStatistics_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalStatistics *op = static_cast<vtkTemporalStatistics *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkTemporalStatistics::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTemporalStatistics_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalStatistics *op = static_cast<vtkTemporalStatistics *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkTemporalStatistics *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkTemporalStatistics::NewInstance());

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
PyvtkTemporalStatistics_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkTemporalStatistics *tempr = vtkTemporalStatistics::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTemporalStatistics_GetComputeAverage(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetComputeAverage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalStatistics *op = static_cast<vtkTemporalStatistics *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetComputeAverage() :
      op->vtkTemporalStatistics::GetComputeAverage());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTemporalStatistics_SetComputeAverage(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetComputeAverage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalStatistics *op = static_cast<vtkTemporalStatistics *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetComputeAverage(temp0);
      }
    else
      {
      op->vtkTemporalStatistics::SetComputeAverage(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTemporalStatistics_ComputeAverageOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeAverageOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalStatistics *op = static_cast<vtkTemporalStatistics *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ComputeAverageOn();
      }
    else
      {
      op->vtkTemporalStatistics::ComputeAverageOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTemporalStatistics_ComputeAverageOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeAverageOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalStatistics *op = static_cast<vtkTemporalStatistics *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ComputeAverageOff();
      }
    else
      {
      op->vtkTemporalStatistics::ComputeAverageOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTemporalStatistics_GetComputeMinimum(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetComputeMinimum");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalStatistics *op = static_cast<vtkTemporalStatistics *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetComputeMinimum() :
      op->vtkTemporalStatistics::GetComputeMinimum());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTemporalStatistics_SetComputeMinimum(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetComputeMinimum");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalStatistics *op = static_cast<vtkTemporalStatistics *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetComputeMinimum(temp0);
      }
    else
      {
      op->vtkTemporalStatistics::SetComputeMinimum(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTemporalStatistics_ComputeMinimumOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeMinimumOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalStatistics *op = static_cast<vtkTemporalStatistics *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ComputeMinimumOn();
      }
    else
      {
      op->vtkTemporalStatistics::ComputeMinimumOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTemporalStatistics_ComputeMinimumOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeMinimumOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalStatistics *op = static_cast<vtkTemporalStatistics *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ComputeMinimumOff();
      }
    else
      {
      op->vtkTemporalStatistics::ComputeMinimumOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTemporalStatistics_GetComputeMaximum(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetComputeMaximum");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalStatistics *op = static_cast<vtkTemporalStatistics *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetComputeMaximum() :
      op->vtkTemporalStatistics::GetComputeMaximum());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTemporalStatistics_SetComputeMaximum(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetComputeMaximum");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalStatistics *op = static_cast<vtkTemporalStatistics *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetComputeMaximum(temp0);
      }
    else
      {
      op->vtkTemporalStatistics::SetComputeMaximum(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTemporalStatistics_ComputeMaximumOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeMaximumOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalStatistics *op = static_cast<vtkTemporalStatistics *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ComputeMaximumOn();
      }
    else
      {
      op->vtkTemporalStatistics::ComputeMaximumOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTemporalStatistics_ComputeMaximumOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeMaximumOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalStatistics *op = static_cast<vtkTemporalStatistics *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ComputeMaximumOff();
      }
    else
      {
      op->vtkTemporalStatistics::ComputeMaximumOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTemporalStatistics_GetComputeStandardDeviation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetComputeStandardDeviation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalStatistics *op = static_cast<vtkTemporalStatistics *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetComputeStandardDeviation() :
      op->vtkTemporalStatistics::GetComputeStandardDeviation());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTemporalStatistics_SetComputeStandardDeviation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetComputeStandardDeviation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalStatistics *op = static_cast<vtkTemporalStatistics *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetComputeStandardDeviation(temp0);
      }
    else
      {
      op->vtkTemporalStatistics::SetComputeStandardDeviation(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTemporalStatistics_ComputeStandardDeviationOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeStandardDeviationOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalStatistics *op = static_cast<vtkTemporalStatistics *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ComputeStandardDeviationOn();
      }
    else
      {
      op->vtkTemporalStatistics::ComputeStandardDeviationOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTemporalStatistics_ComputeStandardDeviationOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeStandardDeviationOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalStatistics *op = static_cast<vtkTemporalStatistics *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ComputeStandardDeviationOff();
      }
    else
      {
      op->vtkTemporalStatistics::ComputeStandardDeviationOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkTemporalStatistics_Methods[] = {
  {(char*)"GetClassName", PyvtkTemporalStatistics_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkTemporalStatistics_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkTemporalStatistics_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkTemporalStatistics\nC++: vtkTemporalStatistics *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkTemporalStatistics_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkTemporalStatistics\nC++: vtkTemporalStatistics *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetComputeAverage", PyvtkTemporalStatistics_GetComputeAverage, METH_VARARGS,
   (char*)"V.GetComputeAverage() -> int\nC++: int GetComputeAverage()\n\nTurn on/off the computation of the average values over time.  On\nby default.  The resulting array names have \"_average\" appended\nto them.\n"},
  {(char*)"SetComputeAverage", PyvtkTemporalStatistics_SetComputeAverage, METH_VARARGS,
   (char*)"V.SetComputeAverage(int)\nC++: void SetComputeAverage(int a)\n\nTurn on/off the computation of the average values over time.  On\nby default.  The resulting array names have \"_average\" appended\nto them.\n"},
  {(char*)"ComputeAverageOn", PyvtkTemporalStatistics_ComputeAverageOn, METH_VARARGS,
   (char*)"V.ComputeAverageOn()\nC++: void ComputeAverageOn()\n\nTurn on/off the computation of the average values over time.  On\nby default.  The resulting array names have \"_average\" appended\nto them.\n"},
  {(char*)"ComputeAverageOff", PyvtkTemporalStatistics_ComputeAverageOff, METH_VARARGS,
   (char*)"V.ComputeAverageOff()\nC++: void ComputeAverageOff()\n\nTurn on/off the computation of the average values over time.  On\nby default.  The resulting array names have \"_average\" appended\nto them.\n"},
  {(char*)"GetComputeMinimum", PyvtkTemporalStatistics_GetComputeMinimum, METH_VARARGS,
   (char*)"V.GetComputeMinimum() -> int\nC++: int GetComputeMinimum()\n\nTurn on/off the computation of the minimum values over time.  On\nby default.  The resulting array names have \"_minimum\" appended\nto them.\n"},
  {(char*)"SetComputeMinimum", PyvtkTemporalStatistics_SetComputeMinimum, METH_VARARGS,
   (char*)"V.SetComputeMinimum(int)\nC++: void SetComputeMinimum(int a)\n\nTurn on/off the computation of the minimum values over time.  On\nby default.  The resulting array names have \"_minimum\" appended\nto them.\n"},
  {(char*)"ComputeMinimumOn", PyvtkTemporalStatistics_ComputeMinimumOn, METH_VARARGS,
   (char*)"V.ComputeMinimumOn()\nC++: void ComputeMinimumOn()\n\nTurn on/off the computation of the minimum values over time.  On\nby default.  The resulting array names have \"_minimum\" appended\nto them.\n"},
  {(char*)"ComputeMinimumOff", PyvtkTemporalStatistics_ComputeMinimumOff, METH_VARARGS,
   (char*)"V.ComputeMinimumOff()\nC++: void ComputeMinimumOff()\n\nTurn on/off the computation of the minimum values over time.  On\nby default.  The resulting array names have \"_minimum\" appended\nto them.\n"},
  {(char*)"GetComputeMaximum", PyvtkTemporalStatistics_GetComputeMaximum, METH_VARARGS,
   (char*)"V.GetComputeMaximum() -> int\nC++: int GetComputeMaximum()\n\nTurn on/off the computation of the maximum values over time.  On\nby default.  The resulting array names have \"_maximum\" appended\nto them.\n"},
  {(char*)"SetComputeMaximum", PyvtkTemporalStatistics_SetComputeMaximum, METH_VARARGS,
   (char*)"V.SetComputeMaximum(int)\nC++: void SetComputeMaximum(int a)\n\nTurn on/off the computation of the maximum values over time.  On\nby default.  The resulting array names have \"_maximum\" appended\nto them.\n"},
  {(char*)"ComputeMaximumOn", PyvtkTemporalStatistics_ComputeMaximumOn, METH_VARARGS,
   (char*)"V.ComputeMaximumOn()\nC++: void ComputeMaximumOn()\n\nTurn on/off the computation of the maximum values over time.  On\nby default.  The resulting array names have \"_maximum\" appended\nto them.\n"},
  {(char*)"ComputeMaximumOff", PyvtkTemporalStatistics_ComputeMaximumOff, METH_VARARGS,
   (char*)"V.ComputeMaximumOff()\nC++: void ComputeMaximumOff()\n\nTurn on/off the computation of the maximum values over time.  On\nby default.  The resulting array names have \"_maximum\" appended\nto them.\n"},
  {(char*)"GetComputeStandardDeviation", PyvtkTemporalStatistics_GetComputeStandardDeviation, METH_VARARGS,
   (char*)"V.GetComputeStandardDeviation() -> int\nC++: int GetComputeStandardDeviation()\n\n"},
  {(char*)"SetComputeStandardDeviation", PyvtkTemporalStatistics_SetComputeStandardDeviation, METH_VARARGS,
   (char*)"V.SetComputeStandardDeviation(int)\nC++: void SetComputeStandardDeviation(int a)\n\n"},
  {(char*)"ComputeStandardDeviationOn", PyvtkTemporalStatistics_ComputeStandardDeviationOn, METH_VARARGS,
   (char*)"V.ComputeStandardDeviationOn()\nC++: void ComputeStandardDeviationOn()\n\n"},
  {(char*)"ComputeStandardDeviationOff", PyvtkTemporalStatistics_ComputeStandardDeviationOff, METH_VARARGS,
   (char*)"V.ComputeStandardDeviationOff()\nC++: void ComputeStandardDeviationOff()\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkTemporalStatistics_StaticNew()
{
  return vtkTemporalStatistics::New();
}

PyObject *PyVTKClass_vtkTemporalStatisticsNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkTemporalStatistics_StaticNew,
    PyvtkTemporalStatistics_Methods,
    "vtkTemporalStatistics", modulename,
    NULL, NULL,
    PyvtkTemporalStatistics_Doc(),
    PyVTKClass_vtkPassInputTypeAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkTemporalStatistics_Doc()
{
  static const char *docstring[] = {
    "vtkTemporalStatistics - Compute statistics of point or cell data as\nit changes over time\n\n",
    "Superclass: vtkPassInputTypeAlgorithm\n\n",
    "Given an input that changes over time, vtkTemporalStatistics looks at\nthe data for each time step and computes some statistical information\nof how a point or cell variable changes over time.  For example,\nvtkTemporalStatistics can compute the average value of \"pressure\"\nover time of each point.\n\nNote that this filter will require the upstream filter to be run on\nevery time step that it reports tha",
    "t it can compute.  This may be a\ntime consuming operation.\n\nvtkTemporalStatistics ignores the temporal spacing.  Each timestep\nwill be weighted the same regardless of how long of an interval it is\nto the next timestep.  Thus, the average statistic may be quite\ndifferent from an integration of the variable if the time spacing\nvaries.\n\nThanks:\n\nThis class was originally written by Kenneth Moreland\n(",
    "kmorel@sandia.gov) from Sandia National Laboratories.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkTemporalStatistics(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkTemporalStatisticsNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkTemporalStatistics", o) != 0)
    {
    Py_DECREF(o);
    }

}

