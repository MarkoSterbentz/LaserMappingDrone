// python wrapper for vtkPCorrelativeStatistics
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkPCorrelativeStatistics.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkPCorrelativeStatistics(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkPCorrelativeStatisticsNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkCorrelativeStatisticsNew
extern "C" { PyObject *PyVTKClass_vtkCorrelativeStatisticsNew(const char *); }
#define DECLARED_PyVTKClass_vtkCorrelativeStatisticsNew
#endif

static const char **PyvtkPCorrelativeStatistics_Doc();


static PyObject *
PyvtkPCorrelativeStatistics_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPCorrelativeStatistics *op = static_cast<vtkPCorrelativeStatistics *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkPCorrelativeStatistics::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPCorrelativeStatistics_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPCorrelativeStatistics *op = static_cast<vtkPCorrelativeStatistics *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPCorrelativeStatistics::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPCorrelativeStatistics_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPCorrelativeStatistics *op = static_cast<vtkPCorrelativeStatistics *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPCorrelativeStatistics *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPCorrelativeStatistics::NewInstance());

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
PyvtkPCorrelativeStatistics_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkPCorrelativeStatistics *tempr = vtkPCorrelativeStatistics::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPCorrelativeStatistics_SetController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPCorrelativeStatistics *op = static_cast<vtkPCorrelativeStatistics *>(vp);

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
      op->vtkPCorrelativeStatistics::SetController(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPCorrelativeStatistics_GetController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPCorrelativeStatistics *op = static_cast<vtkPCorrelativeStatistics *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkMultiProcessController *tempr = (ap.IsBound() ?
      op->GetController() :
      op->vtkPCorrelativeStatistics::GetController());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPCorrelativeStatistics_Learn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Learn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPCorrelativeStatistics *op = static_cast<vtkPCorrelativeStatistics *>(vp);

  vtkTable *temp0 = NULL;
  vtkTable *temp1 = NULL;
  vtkMultiBlockDataSet *temp2 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkTable") &&
      ap.GetVTKObject(temp1, "vtkTable") &&
      ap.GetVTKObject(temp2, "vtkMultiBlockDataSet"))
    {
    if (ap.IsBound())
      {
      op->Learn(temp0, temp1, temp2);
      }
    else
      {
      op->vtkPCorrelativeStatistics::Learn(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPCorrelativeStatistics_Test(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Test");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPCorrelativeStatistics *op = static_cast<vtkPCorrelativeStatistics *>(vp);

  vtkTable *temp0 = NULL;
  vtkMultiBlockDataSet *temp1 = NULL;
  vtkTable *temp2 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkTable") &&
      ap.GetVTKObject(temp1, "vtkMultiBlockDataSet") &&
      ap.GetVTKObject(temp2, "vtkTable"))
    {
    if (ap.IsBound())
      {
      op->Test(temp0, temp1, temp2);
      }
    else
      {
      op->vtkPCorrelativeStatistics::Test(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkPCorrelativeStatistics_Methods[] = {
  {(char*)"GetClassName", PyvtkPCorrelativeStatistics_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkPCorrelativeStatistics_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkPCorrelativeStatistics_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkPCorrelativeStatistics\nC++: vtkPCorrelativeStatistics *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkPCorrelativeStatistics_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkPCorrelativeStatistics\nC++: vtkPCorrelativeStatistics *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetController", PyvtkPCorrelativeStatistics_SetController, METH_VARARGS,
   (char*)"V.SetController(vtkMultiProcessController)\nC++: virtual void SetController(vtkMultiProcessController *)\n\nGet/Set the multiprocess controller. If no controller is set,\nsingle process is assumed.\n"},
  {(char*)"GetController", PyvtkPCorrelativeStatistics_GetController, METH_VARARGS,
   (char*)"V.GetController() -> vtkMultiProcessController\nC++: vtkMultiProcessController *GetController()\n\nGet/Set the multiprocess controller. If no controller is set,\nsingle process is assumed.\n"},
  {(char*)"Learn", PyvtkPCorrelativeStatistics_Learn, METH_VARARGS,
   (char*)"V.Learn(vtkTable, vtkTable, vtkMultiBlockDataSet)\nC++: virtual void Learn(vtkTable *inData, vtkTable *inParameters,\n    vtkMultiBlockDataSet *outMeta)\n\nExecute the parallel calculations required by the Learn option.\n"},
  {(char*)"Test", PyvtkPCorrelativeStatistics_Test, METH_VARARGS,
   (char*)"V.Test(vtkTable, vtkMultiBlockDataSet, vtkTable)\nC++: virtual void Test(vtkTable *, vtkMultiBlockDataSet *,\n    vtkTable *)\n\nExecute the calculations required by the Test option. NB: Not\nimplemented for more than 1 processor\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkPCorrelativeStatistics_StaticNew()
{
  return vtkPCorrelativeStatistics::New();
}

PyObject *PyVTKClass_vtkPCorrelativeStatisticsNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkPCorrelativeStatistics_StaticNew,
    PyvtkPCorrelativeStatistics_Methods,
    "vtkPCorrelativeStatistics", modulename,
    NULL, NULL,
    PyvtkPCorrelativeStatistics_Doc(),
    PyVTKClass_vtkCorrelativeStatisticsNew(modulename));
  return cls;
}

const char **PyvtkPCorrelativeStatistics_Doc()
{
  static const char *docstring[] = {
    "vtkPCorrelativeStatistics - A class for parallel bivariate\ncorrelative statistics\n\n",
    "Superclass: vtkCorrelativeStatistics\n\n",
    "vtkPCorrelativeStatistics is vtkCorrelativeStatistics subclass for\nparallel datasets. It learns and derives the global statistical model\non each node, but assesses each individual data points on the node\nthat owns it.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPCorrelativeStatistics(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPCorrelativeStatisticsNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPCorrelativeStatistics", o) != 0)
    {
    Py_DECREF(o);
    }

}

