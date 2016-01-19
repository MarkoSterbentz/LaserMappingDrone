// python wrapper for vtkExtractDataOverTime
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkExtractDataOverTime.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkExtractDataOverTime(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkExtractDataOverTimeNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkPointSetAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkPointSetAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkPointSetAlgorithmNew
#endif

static const char **PyvtkExtractDataOverTime_Doc();


static PyObject *
PyvtkExtractDataOverTime_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractDataOverTime *op = static_cast<vtkExtractDataOverTime *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkExtractDataOverTime::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExtractDataOverTime_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractDataOverTime *op = static_cast<vtkExtractDataOverTime *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkExtractDataOverTime::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExtractDataOverTime_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractDataOverTime *op = static_cast<vtkExtractDataOverTime *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkExtractDataOverTime *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkExtractDataOverTime::NewInstance());

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
PyvtkExtractDataOverTime_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkExtractDataOverTime *tempr = vtkExtractDataOverTime::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExtractDataOverTime_SetPointIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPointIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractDataOverTime *op = static_cast<vtkExtractDataOverTime *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetPointIndex(temp0);
      }
    else
      {
      op->vtkExtractDataOverTime::SetPointIndex(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExtractDataOverTime_GetPointIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractDataOverTime *op = static_cast<vtkExtractDataOverTime *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetPointIndex() :
      op->vtkExtractDataOverTime::GetPointIndex());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExtractDataOverTime_GetNumberOfTimeSteps(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfTimeSteps");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractDataOverTime *op = static_cast<vtkExtractDataOverTime *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfTimeSteps() :
      op->vtkExtractDataOverTime::GetNumberOfTimeSteps());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkExtractDataOverTime_Methods[] = {
  {(char*)"GetClassName", PyvtkExtractDataOverTime_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkExtractDataOverTime_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkExtractDataOverTime_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkExtractDataOverTime\nC++: vtkExtractDataOverTime *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkExtractDataOverTime_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkExtractDataOverTime\nC++: vtkExtractDataOverTime *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetPointIndex", PyvtkExtractDataOverTime_SetPointIndex, METH_VARARGS,
   (char*)"V.SetPointIndex(int)\nC++: void SetPointIndex(int a)\n\nIndex of point to extract at each time step\n"},
  {(char*)"GetPointIndex", PyvtkExtractDataOverTime_GetPointIndex, METH_VARARGS,
   (char*)"V.GetPointIndex() -> int\nC++: int GetPointIndex()\n\nIndex of point to extract at each time step\n"},
  {(char*)"GetNumberOfTimeSteps", PyvtkExtractDataOverTime_GetNumberOfTimeSteps, METH_VARARGS,
   (char*)"V.GetNumberOfTimeSteps() -> int\nC++: int GetNumberOfTimeSteps()\n\nGet the number of time steps\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkExtractDataOverTime_StaticNew()
{
  return vtkExtractDataOverTime::New();
}

PyObject *PyVTKClass_vtkExtractDataOverTimeNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkExtractDataOverTime_StaticNew,
    PyvtkExtractDataOverTime_Methods,
    "vtkExtractDataOverTime", modulename,
    NULL, NULL,
    PyvtkExtractDataOverTime_Doc(),
    PyVTKClass_vtkPointSetAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkExtractDataOverTime_Doc()
{
  static const char *docstring[] = {
    "vtkExtractDataOverTime - extract point data from a time sequence for\n\n",
    "Superclass: vtkPointSetAlgorithm\n\n",
    "This filter extracts the point data from a time sequence and\nspecified index and creates an output of the same type as the input\nbut with Points containing \"number of time steps\" points; the point\nand PointData corresponding to the PointIndex are extracted at each\ntime step and added to the output.  A PointData array is added called\n\"Time\" (or \"TimeData\" if there is already an array called \"Time\")",
    ",\nwhich is the time at each index.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkExtractDataOverTime(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkExtractDataOverTimeNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkExtractDataOverTime", o) != 0)
    {
    Py_DECREF(o);
    }

}

