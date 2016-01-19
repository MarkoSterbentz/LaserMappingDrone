// python wrapper for vtkPMultiCorrelativeStatistics
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkPMultiCorrelativeStatistics.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkPMultiCorrelativeStatistics(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkPMultiCorrelativeStatisticsNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkMultiCorrelativeStatisticsNew
extern "C" { PyObject *PyVTKClass_vtkMultiCorrelativeStatisticsNew(const char *); }
#define DECLARED_PyVTKClass_vtkMultiCorrelativeStatisticsNew
#endif

static const char **PyvtkPMultiCorrelativeStatistics_Doc();


static PyObject *
PyvtkPMultiCorrelativeStatistics_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPMultiCorrelativeStatistics *op = static_cast<vtkPMultiCorrelativeStatistics *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkPMultiCorrelativeStatistics::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPMultiCorrelativeStatistics_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPMultiCorrelativeStatistics *op = static_cast<vtkPMultiCorrelativeStatistics *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPMultiCorrelativeStatistics::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPMultiCorrelativeStatistics_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPMultiCorrelativeStatistics *op = static_cast<vtkPMultiCorrelativeStatistics *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPMultiCorrelativeStatistics *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPMultiCorrelativeStatistics::NewInstance());

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
PyvtkPMultiCorrelativeStatistics_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkPMultiCorrelativeStatistics *tempr = vtkPMultiCorrelativeStatistics::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPMultiCorrelativeStatistics_SetController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPMultiCorrelativeStatistics *op = static_cast<vtkPMultiCorrelativeStatistics *>(vp);

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
      op->vtkPMultiCorrelativeStatistics::SetController(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPMultiCorrelativeStatistics_GetController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPMultiCorrelativeStatistics *op = static_cast<vtkPMultiCorrelativeStatistics *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkMultiProcessController *tempr = (ap.IsBound() ?
      op->GetController() :
      op->vtkPMultiCorrelativeStatistics::GetController());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPMultiCorrelativeStatistics_GatherStatistics(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GatherStatistics");

  vtkMultiProcessController *temp0 = NULL;
  vtkTable *temp1 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkMultiProcessController") &&
      ap.GetVTKObject(temp1, "vtkTable"))
    {
    vtkPMultiCorrelativeStatistics::GatherStatistics(temp0, temp1);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkPMultiCorrelativeStatistics_Methods[] = {
  {(char*)"GetClassName", PyvtkPMultiCorrelativeStatistics_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkPMultiCorrelativeStatistics_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkPMultiCorrelativeStatistics_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkPMultiCorrelativeStatistics\nC++: vtkPMultiCorrelativeStatistics *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkPMultiCorrelativeStatistics_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkPMultiCorrelativeStatistics\nC++: vtkPMultiCorrelativeStatistics *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetController", PyvtkPMultiCorrelativeStatistics_SetController, METH_VARARGS,
   (char*)"V.SetController(vtkMultiProcessController)\nC++: virtual void SetController(vtkMultiProcessController *)\n\nGet/Set the multiprocess controller. If no controller is set,\nsingle process is assumed.\n"},
  {(char*)"GetController", PyvtkPMultiCorrelativeStatistics_GetController, METH_VARARGS,
   (char*)"V.GetController() -> vtkMultiProcessController\nC++: vtkMultiProcessController *GetController()\n\nGet/Set the multiprocess controller. If no controller is set,\nsingle process is assumed.\n"},
  {(char*)"GatherStatistics", PyvtkPMultiCorrelativeStatistics_GatherStatistics, METH_VARARGS | METH_STATIC,
   (char*)"V.GatherStatistics(vtkMultiProcessController, vtkTable)\nC++: static void GatherStatistics(\n    vtkMultiProcessController *curController, vtkTable *sparseCov)\n\nPerforms Reduction\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkPMultiCorrelativeStatistics_StaticNew()
{
  return vtkPMultiCorrelativeStatistics::New();
}

PyObject *PyVTKClass_vtkPMultiCorrelativeStatisticsNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkPMultiCorrelativeStatistics_StaticNew,
    PyvtkPMultiCorrelativeStatistics_Methods,
    "vtkPMultiCorrelativeStatistics", modulename,
    NULL, NULL,
    PyvtkPMultiCorrelativeStatistics_Doc(),
    PyVTKClass_vtkMultiCorrelativeStatisticsNew(modulename));
  return cls;
}

const char **PyvtkPMultiCorrelativeStatistics_Doc()
{
  static const char *docstring[] = {
    "vtkPMultiCorrelativeStatistics - A class for parallel bivariate\ncorrelative statistics\n\n",
    "Superclass: vtkMultiCorrelativeStatistics\n\n",
    "vtkPMultiCorrelativeStatistics is vtkMultiCorrelativeStatistics\nsubclass for parallel datasets. It learns and derives the global\nstatistical model on each node, but assesses each individual data\npoints on the node that owns it.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPMultiCorrelativeStatistics(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPMultiCorrelativeStatisticsNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPMultiCorrelativeStatistics", o) != 0)
    {
    Py_DECREF(o);
    }

}

