// python wrapper for vtkPKMeansStatistics
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkPKMeansStatistics.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkPKMeansStatistics(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkPKMeansStatisticsNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkKMeansStatisticsNew
extern "C" { PyObject *PyVTKClass_vtkKMeansStatisticsNew(const char *); }
#define DECLARED_PyVTKClass_vtkKMeansStatisticsNew
#endif

static const char **PyvtkPKMeansStatistics_Doc();


static PyObject *
PyvtkPKMeansStatistics_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPKMeansStatistics *op = static_cast<vtkPKMeansStatistics *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkPKMeansStatistics::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPKMeansStatistics_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPKMeansStatistics *op = static_cast<vtkPKMeansStatistics *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPKMeansStatistics::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPKMeansStatistics_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPKMeansStatistics *op = static_cast<vtkPKMeansStatistics *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPKMeansStatistics *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPKMeansStatistics::NewInstance());

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
PyvtkPKMeansStatistics_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkPKMeansStatistics *tempr = vtkPKMeansStatistics::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPKMeansStatistics_SetController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPKMeansStatistics *op = static_cast<vtkPKMeansStatistics *>(vp);

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
      op->vtkPKMeansStatistics::SetController(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPKMeansStatistics_GetController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPKMeansStatistics *op = static_cast<vtkPKMeansStatistics *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkMultiProcessController *tempr = (ap.IsBound() ?
      op->GetController() :
      op->vtkPKMeansStatistics::GetController());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPKMeansStatistics_UpdateClusterCenters(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateClusterCenters");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPKMeansStatistics *op = static_cast<vtkPKMeansStatistics *>(vp);

  vtkTable *temp0 = NULL;
  vtkTable *temp1 = NULL;
  vtkIdTypeArray *temp2 = NULL;
  vtkIdTypeArray *temp3 = NULL;
  vtkDoubleArray *temp4 = NULL;
  vtkIdTypeArray *temp5 = NULL;
  vtkIdTypeArray *temp6 = NULL;
  vtkIntArray *temp7 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(8) &&
      ap.GetVTKObject(temp0, "vtkTable") &&
      ap.GetVTKObject(temp1, "vtkTable") &&
      ap.GetVTKObject(temp2, "vtkIdTypeArray") &&
      ap.GetVTKObject(temp3, "vtkIdTypeArray") &&
      ap.GetVTKObject(temp4, "vtkDoubleArray") &&
      ap.GetVTKObject(temp5, "vtkIdTypeArray") &&
      ap.GetVTKObject(temp6, "vtkIdTypeArray") &&
      ap.GetVTKObject(temp7, "vtkIntArray"))
    {
    if (ap.IsBound())
      {
      op->UpdateClusterCenters(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7);
      }
    else
      {
      op->vtkPKMeansStatistics::UpdateClusterCenters(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPKMeansStatistics_GetTotalNumberOfObservations(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTotalNumberOfObservations");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPKMeansStatistics *op = static_cast<vtkPKMeansStatistics *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetTotalNumberOfObservations(temp0) :
      op->vtkPKMeansStatistics::GetTotalNumberOfObservations(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPKMeansStatistics_CreateInitialClusterCenters(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateInitialClusterCenters");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPKMeansStatistics *op = static_cast<vtkPKMeansStatistics *>(vp);

  vtkIdType temp0;
  vtkIdTypeArray *temp1 = NULL;
  vtkTable *temp2 = NULL;
  vtkTable *temp3 = NULL;
  vtkTable *temp4 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(5) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkIdTypeArray") &&
      ap.GetVTKObject(temp2, "vtkTable") &&
      ap.GetVTKObject(temp3, "vtkTable") &&
      ap.GetVTKObject(temp4, "vtkTable"))
    {
    if (ap.IsBound())
      {
      op->CreateInitialClusterCenters(temp0, temp1, temp2, temp3, temp4);
      }
    else
      {
      op->vtkPKMeansStatistics::CreateInitialClusterCenters(temp0, temp1, temp2, temp3, temp4);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkPKMeansStatistics_Methods[] = {
  {(char*)"GetClassName", PyvtkPKMeansStatistics_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkPKMeansStatistics_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkPKMeansStatistics_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkPKMeansStatistics\nC++: vtkPKMeansStatistics *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkPKMeansStatistics_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkPKMeansStatistics\nC++: vtkPKMeansStatistics *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetController", PyvtkPKMeansStatistics_SetController, METH_VARARGS,
   (char*)"V.SetController(vtkMultiProcessController)\nC++: virtual void SetController(vtkMultiProcessController *)\n\nGet/Set the multiprocess controller. If no controller is set,\nsingle process is assumed.\n"},
  {(char*)"GetController", PyvtkPKMeansStatistics_GetController, METH_VARARGS,
   (char*)"V.GetController() -> vtkMultiProcessController\nC++: vtkMultiProcessController *GetController()\n\nGet/Set the multiprocess controller. If no controller is set,\nsingle process is assumed.\n"},
  {(char*)"UpdateClusterCenters", PyvtkPKMeansStatistics_UpdateClusterCenters, METH_VARARGS,
   (char*)"V.UpdateClusterCenters(vtkTable, vtkTable, vtkIdTypeArray,\n    vtkIdTypeArray, vtkDoubleArray, vtkIdTypeArray,\n    vtkIdTypeArray, vtkIntArray)\nC++: virtual void UpdateClusterCenters(\n    vtkTable *newClusterElements, vtkTable *curClusterElements,\n    vtkIdTypeArray *numMembershipChanges,\n    vtkIdTypeArray *numElementsInCluster, vtkDoubleArray *error,\n    vtkIdTypeArray *startRunID, vtkIdTypeArray *endRunID,\n    vtkIntArray *computeRun)\n\nSubroutine to update new cluster centers from the old centers.\n"},
  {(char*)"GetTotalNumberOfObservations", PyvtkPKMeansStatistics_GetTotalNumberOfObservations, METH_VARARGS,
   (char*)"V.GetTotalNumberOfObservations(int) -> int\nC++: virtual vtkIdType GetTotalNumberOfObservations(\n    vtkIdType numObservations)\n\nSubroutine to get the total number of data objects.\n"},
  {(char*)"CreateInitialClusterCenters", PyvtkPKMeansStatistics_CreateInitialClusterCenters, METH_VARARGS,
   (char*)"V.CreateInitialClusterCenters(int, vtkIdTypeArray, vtkTable,\n    vtkTable, vtkTable)\nC++: virtual void CreateInitialClusterCenters(\n    vtkIdType numToAllocate, vtkIdTypeArray *numberOfClusters,\n    vtkTable *inData, vtkTable *curClusterElements,\n    vtkTable *newClusterElements)\n\nSubroutine to initialize cluster centerss if not provided by the\nuser.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkPKMeansStatistics_StaticNew()
{
  return vtkPKMeansStatistics::New();
}

PyObject *PyVTKClass_vtkPKMeansStatisticsNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkPKMeansStatistics_StaticNew,
    PyvtkPKMeansStatistics_Methods,
    "vtkPKMeansStatistics", modulename,
    NULL, NULL,
    PyvtkPKMeansStatistics_Doc(),
    PyVTKClass_vtkKMeansStatisticsNew(modulename));
  return cls;
}

const char **PyvtkPKMeansStatistics_Doc()
{
  static const char *docstring[] = {
    "vtkPKMeansStatisitcs - A class for parallel k means clustering\n\n",
    "Superclass: vtkKMeansStatistics\n\n",
    "vtkPKMeansStatistics is vtkKMeansStatistics subclass for parallel\ndatasets. It learns and derives the global statistical model on each\nnode, but assesses each individual data points on the node that owns\nit.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPKMeansStatistics(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPKMeansStatisticsNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPKMeansStatistics", o) != 0)
    {
    Py_DECREF(o);
    }

}

