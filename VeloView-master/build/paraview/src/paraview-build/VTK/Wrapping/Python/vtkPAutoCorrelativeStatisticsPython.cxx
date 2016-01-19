// python wrapper for vtkPAutoCorrelativeStatistics
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkPAutoCorrelativeStatistics.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkPAutoCorrelativeStatistics(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkPAutoCorrelativeStatisticsNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkAutoCorrelativeStatisticsNew
extern "C" { PyObject *PyVTKClass_vtkAutoCorrelativeStatisticsNew(const char *); }
#define DECLARED_PyVTKClass_vtkAutoCorrelativeStatisticsNew
#endif

static const char **PyvtkPAutoCorrelativeStatistics_Doc();


static PyObject *
PyvtkPAutoCorrelativeStatistics_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPAutoCorrelativeStatistics *op = static_cast<vtkPAutoCorrelativeStatistics *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkPAutoCorrelativeStatistics::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPAutoCorrelativeStatistics_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPAutoCorrelativeStatistics *op = static_cast<vtkPAutoCorrelativeStatistics *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPAutoCorrelativeStatistics::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPAutoCorrelativeStatistics_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPAutoCorrelativeStatistics *op = static_cast<vtkPAutoCorrelativeStatistics *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPAutoCorrelativeStatistics *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPAutoCorrelativeStatistics::NewInstance());

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
PyvtkPAutoCorrelativeStatistics_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkPAutoCorrelativeStatistics *tempr = vtkPAutoCorrelativeStatistics::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPAutoCorrelativeStatistics_SetController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPAutoCorrelativeStatistics *op = static_cast<vtkPAutoCorrelativeStatistics *>(vp);

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
      op->vtkPAutoCorrelativeStatistics::SetController(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPAutoCorrelativeStatistics_GetController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPAutoCorrelativeStatistics *op = static_cast<vtkPAutoCorrelativeStatistics *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkMultiProcessController *tempr = (ap.IsBound() ?
      op->GetController() :
      op->vtkPAutoCorrelativeStatistics::GetController());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPAutoCorrelativeStatistics_Learn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Learn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPAutoCorrelativeStatistics *op = static_cast<vtkPAutoCorrelativeStatistics *>(vp);

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
      op->vtkPAutoCorrelativeStatistics::Learn(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPAutoCorrelativeStatistics_Test(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Test");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPAutoCorrelativeStatistics *op = static_cast<vtkPAutoCorrelativeStatistics *>(vp);

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
      op->vtkPAutoCorrelativeStatistics::Test(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkPAutoCorrelativeStatistics_Methods[] = {
  {(char*)"GetClassName", PyvtkPAutoCorrelativeStatistics_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkPAutoCorrelativeStatistics_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkPAutoCorrelativeStatistics_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkPAutoCorrelativeStatistics\nC++: vtkPAutoCorrelativeStatistics *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkPAutoCorrelativeStatistics_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkPAutoCorrelativeStatistics\nC++: vtkPAutoCorrelativeStatistics *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetController", PyvtkPAutoCorrelativeStatistics_SetController, METH_VARARGS,
   (char*)"V.SetController(vtkMultiProcessController)\nC++: virtual void SetController(vtkMultiProcessController *)\n\nGet/Set the multiprocess controller. If no controller is set,\nsingle process is assumed.\n"},
  {(char*)"GetController", PyvtkPAutoCorrelativeStatistics_GetController, METH_VARARGS,
   (char*)"V.GetController() -> vtkMultiProcessController\nC++: vtkMultiProcessController *GetController()\n\nGet/Set the multiprocess controller. If no controller is set,\nsingle process is assumed.\n"},
  {(char*)"Learn", PyvtkPAutoCorrelativeStatistics_Learn, METH_VARARGS,
   (char*)"V.Learn(vtkTable, vtkTable, vtkMultiBlockDataSet)\nC++: virtual void Learn(vtkTable *inData, vtkTable *inParameters,\n    vtkMultiBlockDataSet *outMeta)\n\nExecute the parallel calculations required by the Learn option.\n"},
  {(char*)"Test", PyvtkPAutoCorrelativeStatistics_Test, METH_VARARGS,
   (char*)"V.Test(vtkTable, vtkMultiBlockDataSet, vtkTable)\nC++: virtual void Test(vtkTable *, vtkMultiBlockDataSet *,\n    vtkTable *)\n\nExecute the calculations required by the Test option. NB: Not\nimplemented for more than 1 processor\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkPAutoCorrelativeStatistics_StaticNew()
{
  return vtkPAutoCorrelativeStatistics::New();
}

PyObject *PyVTKClass_vtkPAutoCorrelativeStatisticsNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkPAutoCorrelativeStatistics_StaticNew,
    PyvtkPAutoCorrelativeStatistics_Methods,
    "vtkPAutoCorrelativeStatistics", modulename,
    NULL, NULL,
    PyvtkPAutoCorrelativeStatistics_Doc(),
    PyVTKClass_vtkAutoCorrelativeStatisticsNew(modulename));
  return cls;
}

const char **PyvtkPAutoCorrelativeStatistics_Doc()
{
  static const char *docstring[] = {
    "vtkPAutoCorrelativeStatistics - A class for parallel auto-correlative\nstatistics\n\n",
    "Superclass: vtkAutoCorrelativeStatistics\n\n",
    "vtkPAutoCorrelativeStatistics is vtkAutoCorrelativeStatistics\nsubclass for parallel datasets. It learns and derives the global\nstatistical model on each node, but assesses each individual data\npoints on the node that owns it.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPAutoCorrelativeStatistics(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPAutoCorrelativeStatisticsNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPAutoCorrelativeStatistics", o) != 0)
    {
    Py_DECREF(o);
    }

}

