// python wrapper for vtkPOrderStatistics
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkPOrderStatistics.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkPOrderStatistics(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkPOrderStatisticsNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkOrderStatisticsNew
extern "C" { PyObject *PyVTKClass_vtkOrderStatisticsNew(const char *); }
#define DECLARED_PyVTKClass_vtkOrderStatisticsNew
#endif

static const char **PyvtkPOrderStatistics_Doc();


static PyObject *
PyvtkPOrderStatistics_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPOrderStatistics *op = static_cast<vtkPOrderStatistics *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkPOrderStatistics::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPOrderStatistics_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPOrderStatistics *op = static_cast<vtkPOrderStatistics *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPOrderStatistics::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPOrderStatistics_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPOrderStatistics *op = static_cast<vtkPOrderStatistics *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPOrderStatistics *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPOrderStatistics::NewInstance());

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
PyvtkPOrderStatistics_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkPOrderStatistics *tempr = vtkPOrderStatistics::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPOrderStatistics_SetController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPOrderStatistics *op = static_cast<vtkPOrderStatistics *>(vp);

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
      op->vtkPOrderStatistics::SetController(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPOrderStatistics_GetController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPOrderStatistics *op = static_cast<vtkPOrderStatistics *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkMultiProcessController *tempr = (ap.IsBound() ?
      op->GetController() :
      op->vtkPOrderStatistics::GetController());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPOrderStatistics_Learn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Learn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPOrderStatistics *op = static_cast<vtkPOrderStatistics *>(vp);

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
      op->vtkPOrderStatistics::Learn(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkPOrderStatistics_Methods[] = {
  {(char*)"GetClassName", PyvtkPOrderStatistics_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkPOrderStatistics_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkPOrderStatistics_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkPOrderStatistics\nC++: vtkPOrderStatistics *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkPOrderStatistics_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkPOrderStatistics\nC++: vtkPOrderStatistics *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetController", PyvtkPOrderStatistics_SetController, METH_VARARGS,
   (char*)"V.SetController(vtkMultiProcessController)\nC++: virtual void SetController(vtkMultiProcessController *)\n\nGet/Set the multiprocess controller. If no controller is set,\nsingle process is assumed.\n"},
  {(char*)"GetController", PyvtkPOrderStatistics_GetController, METH_VARARGS,
   (char*)"V.GetController() -> vtkMultiProcessController\nC++: vtkMultiProcessController *GetController()\n\nGet/Set the multiprocess controller. If no controller is set,\nsingle process is assumed.\n"},
  {(char*)"Learn", PyvtkPOrderStatistics_Learn, METH_VARARGS,
   (char*)"V.Learn(vtkTable, vtkTable, vtkMultiBlockDataSet)\nC++: virtual void Learn(vtkTable *, vtkTable *,\n    vtkMultiBlockDataSet *)\n\nExecute the parallel calculations required by the Learn option.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkPOrderStatistics_StaticNew()
{
  return vtkPOrderStatistics::New();
}

PyObject *PyVTKClass_vtkPOrderStatisticsNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkPOrderStatistics_StaticNew,
    PyvtkPOrderStatistics_Methods,
    "vtkPOrderStatistics", modulename,
    NULL, NULL,
    PyvtkPOrderStatistics_Doc(),
    PyVTKClass_vtkOrderStatisticsNew(modulename));
  return cls;
}

const char **PyvtkPOrderStatistics_Doc()
{
  static const char *docstring[] = {
    "vtkPOrderStatistics - A class for parallel univariate order statistics\n\n",
    "Superclass: vtkOrderStatistics\n\n",
    "vtkPOrderStatistics is vtkOrderStatistics subclass for parallel\ndatasets. It learns and derives the global statistical model on each\nnode, but assesses each individual data points on the node that owns\nit.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPOrderStatistics(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPOrderStatisticsNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPOrderStatistics", o) != 0)
    {
    Py_DECREF(o);
    }

}

