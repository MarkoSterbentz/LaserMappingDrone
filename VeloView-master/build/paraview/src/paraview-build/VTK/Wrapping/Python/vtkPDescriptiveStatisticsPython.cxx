// python wrapper for vtkPDescriptiveStatistics
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkPDescriptiveStatistics.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkPDescriptiveStatistics(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkPDescriptiveStatisticsNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkDescriptiveStatisticsNew
extern "C" { PyObject *PyVTKClass_vtkDescriptiveStatisticsNew(const char *); }
#define DECLARED_PyVTKClass_vtkDescriptiveStatisticsNew
#endif

static const char **PyvtkPDescriptiveStatistics_Doc();


static PyObject *
PyvtkPDescriptiveStatistics_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPDescriptiveStatistics *op = static_cast<vtkPDescriptiveStatistics *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkPDescriptiveStatistics::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPDescriptiveStatistics_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPDescriptiveStatistics *op = static_cast<vtkPDescriptiveStatistics *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPDescriptiveStatistics::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPDescriptiveStatistics_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPDescriptiveStatistics *op = static_cast<vtkPDescriptiveStatistics *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPDescriptiveStatistics *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPDescriptiveStatistics::NewInstance());

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
PyvtkPDescriptiveStatistics_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkPDescriptiveStatistics *tempr = vtkPDescriptiveStatistics::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPDescriptiveStatistics_SetController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPDescriptiveStatistics *op = static_cast<vtkPDescriptiveStatistics *>(vp);

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
      op->vtkPDescriptiveStatistics::SetController(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPDescriptiveStatistics_GetController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPDescriptiveStatistics *op = static_cast<vtkPDescriptiveStatistics *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkMultiProcessController *tempr = (ap.IsBound() ?
      op->GetController() :
      op->vtkPDescriptiveStatistics::GetController());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPDescriptiveStatistics_Learn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Learn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPDescriptiveStatistics *op = static_cast<vtkPDescriptiveStatistics *>(vp);

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
      op->vtkPDescriptiveStatistics::Learn(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkPDescriptiveStatistics_Methods[] = {
  {(char*)"GetClassName", PyvtkPDescriptiveStatistics_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkPDescriptiveStatistics_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkPDescriptiveStatistics_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkPDescriptiveStatistics\nC++: vtkPDescriptiveStatistics *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkPDescriptiveStatistics_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkPDescriptiveStatistics\nC++: vtkPDescriptiveStatistics *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetController", PyvtkPDescriptiveStatistics_SetController, METH_VARARGS,
   (char*)"V.SetController(vtkMultiProcessController)\nC++: virtual void SetController(vtkMultiProcessController *)\n\nGet/Set the multiprocess controller. If no controller is set,\nsingle process is assumed.\n"},
  {(char*)"GetController", PyvtkPDescriptiveStatistics_GetController, METH_VARARGS,
   (char*)"V.GetController() -> vtkMultiProcessController\nC++: vtkMultiProcessController *GetController()\n\nGet/Set the multiprocess controller. If no controller is set,\nsingle process is assumed.\n"},
  {(char*)"Learn", PyvtkPDescriptiveStatistics_Learn, METH_VARARGS,
   (char*)"V.Learn(vtkTable, vtkTable, vtkMultiBlockDataSet)\nC++: virtual void Learn(vtkTable *inData, vtkTable *inParameters,\n    vtkMultiBlockDataSet *outMeta)\n\nExecute the parallel calculations required by the Learn option.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkPDescriptiveStatistics_StaticNew()
{
  return vtkPDescriptiveStatistics::New();
}

PyObject *PyVTKClass_vtkPDescriptiveStatisticsNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkPDescriptiveStatistics_StaticNew,
    PyvtkPDescriptiveStatistics_Methods,
    "vtkPDescriptiveStatistics", modulename,
    NULL, NULL,
    PyvtkPDescriptiveStatistics_Doc(),
    PyVTKClass_vtkDescriptiveStatisticsNew(modulename));
  return cls;
}

const char **PyvtkPDescriptiveStatistics_Doc()
{
  static const char *docstring[] = {
    "vtkPDescriptiveStatistics - A class for parallel univariate\ndescriptive statistics\n\n",
    "Superclass: vtkDescriptiveStatistics\n\n",
    "vtkPDescriptiveStatistics is vtkDescriptiveStatistics subclass for\nparallel datasets. It learns and derives the global statistical model\non each node, but assesses each individual data points on the node\nthat owns it.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPDescriptiveStatistics(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPDescriptiveStatisticsNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPDescriptiveStatistics", o) != 0)
    {
    Py_DECREF(o);
    }

}

