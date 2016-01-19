// python wrapper for vtkExtractTemporalFieldData
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkExtractTemporalFieldData.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkExtractTemporalFieldData(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkExtractTemporalFieldDataNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkTableAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkTableAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkTableAlgorithmNew
#endif

static const char **PyvtkExtractTemporalFieldData_Doc();


static PyObject *
PyvtkExtractTemporalFieldData_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractTemporalFieldData *op = static_cast<vtkExtractTemporalFieldData *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkExtractTemporalFieldData::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExtractTemporalFieldData_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractTemporalFieldData *op = static_cast<vtkExtractTemporalFieldData *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkExtractTemporalFieldData::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExtractTemporalFieldData_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractTemporalFieldData *op = static_cast<vtkExtractTemporalFieldData *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkExtractTemporalFieldData *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkExtractTemporalFieldData::NewInstance());

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
PyvtkExtractTemporalFieldData_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkExtractTemporalFieldData *tempr = vtkExtractTemporalFieldData::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExtractTemporalFieldData_GetNumberOfTimeSteps(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfTimeSteps");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractTemporalFieldData *op = static_cast<vtkExtractTemporalFieldData *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfTimeSteps() :
      op->vtkExtractTemporalFieldData::GetNumberOfTimeSteps());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkExtractTemporalFieldData_Methods[] = {
  {(char*)"GetClassName", PyvtkExtractTemporalFieldData_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkExtractTemporalFieldData_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkExtractTemporalFieldData_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkExtractTemporalFieldData\nC++: vtkExtractTemporalFieldData *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkExtractTemporalFieldData_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkExtractTemporalFieldData\nC++: vtkExtractTemporalFieldData *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetNumberOfTimeSteps", PyvtkExtractTemporalFieldData_GetNumberOfTimeSteps, METH_VARARGS,
   (char*)"V.GetNumberOfTimeSteps() -> int\nC++: int GetNumberOfTimeSteps()\n\nGet the number of time steps\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkExtractTemporalFieldData_StaticNew()
{
  return vtkExtractTemporalFieldData::New();
}

PyObject *PyVTKClass_vtkExtractTemporalFieldDataNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkExtractTemporalFieldData_StaticNew,
    PyvtkExtractTemporalFieldData_Methods,
    "vtkExtractTemporalFieldData", modulename,
    NULL, NULL,
    PyvtkExtractTemporalFieldData_Doc(),
    PyVTKClass_vtkTableAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkExtractTemporalFieldData_Doc()
{
  static const char *docstring[] = {
    "vtkExtractTemporalFieldData - Extract temporal arrays from input\nfield data\n\n",
    "Superclass: vtkTableAlgorithm\n\n",
    "vtkExtractTemporalFieldData extracts arrays from the input\nvtkFieldData. These arrays are assumed to contain temporal data,\nwhere the nth tuple contains the value for the nth timestep. The\noutput is a 1D rectilinear grid where the XCoordinates correspond to\ntime (the same array is also copied to a point array named Time or\nTimeData (if Time exists in the input). This algorithm does not\nproduce a T",
    "IME_STEPS or TIME_RANGE information because it works\nacross time. .Section Caveat This algorithm works only with source\nthat produce TIME_STEPS(). Continuous time range is not yet\nsupported.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkExtractTemporalFieldData(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkExtractTemporalFieldDataNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkExtractTemporalFieldData", o) != 0)
    {
    Py_DECREF(o);
    }

}

