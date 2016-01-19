// python wrapper for vtkPPCAStatistics
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkPPCAStatistics.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkPPCAStatistics(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkPPCAStatisticsNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkPCAStatisticsNew
extern "C" { PyObject *PyVTKClass_vtkPCAStatisticsNew(const char *); }
#define DECLARED_PyVTKClass_vtkPCAStatisticsNew
#endif

static const char **PyvtkPPCAStatistics_Doc();


static PyObject *
PyvtkPPCAStatistics_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPPCAStatistics *op = static_cast<vtkPPCAStatistics *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkPPCAStatistics::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPPCAStatistics_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPPCAStatistics *op = static_cast<vtkPPCAStatistics *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPPCAStatistics::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPPCAStatistics_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPPCAStatistics *op = static_cast<vtkPPCAStatistics *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPPCAStatistics *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPPCAStatistics::NewInstance());

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
PyvtkPPCAStatistics_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkPPCAStatistics *tempr = vtkPPCAStatistics::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPPCAStatistics_SetController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPPCAStatistics *op = static_cast<vtkPPCAStatistics *>(vp);

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
      op->vtkPPCAStatistics::SetController(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPPCAStatistics_GetController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPPCAStatistics *op = static_cast<vtkPPCAStatistics *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkMultiProcessController *tempr = (ap.IsBound() ?
      op->GetController() :
      op->vtkPPCAStatistics::GetController());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkPPCAStatistics_Methods[] = {
  {(char*)"GetClassName", PyvtkPPCAStatistics_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkPPCAStatistics_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkPPCAStatistics_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkPPCAStatistics\nC++: vtkPPCAStatistics *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkPPCAStatistics_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkPPCAStatistics\nC++: vtkPPCAStatistics *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetController", PyvtkPPCAStatistics_SetController, METH_VARARGS,
   (char*)"V.SetController(vtkMultiProcessController)\nC++: virtual void SetController(vtkMultiProcessController *)\n\nGet/Set the multiprocess controller. If no controller is set,\nsingle process is assumed.\n"},
  {(char*)"GetController", PyvtkPPCAStatistics_GetController, METH_VARARGS,
   (char*)"V.GetController() -> vtkMultiProcessController\nC++: vtkMultiProcessController *GetController()\n\nGet/Set the multiprocess controller. If no controller is set,\nsingle process is assumed.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkPPCAStatistics_StaticNew()
{
  return vtkPPCAStatistics::New();
}

PyObject *PyVTKClass_vtkPPCAStatisticsNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkPPCAStatistics_StaticNew,
    PyvtkPPCAStatistics_Methods,
    "vtkPPCAStatistics", modulename,
    NULL, NULL,
    PyvtkPPCAStatistics_Doc(),
    PyVTKClass_vtkPCAStatisticsNew(modulename));
  return cls;
}

const char **PyvtkPPCAStatistics_Doc()
{
  static const char *docstring[] = {
    "vtkPPCAStatistics - A class for parallel principal component analysis\n\n",
    "Superclass: vtkPCAStatistics\n\n",
    "vtkPPCAStatistics is vtkPCAStatistics subclass for parallel datasets.\nIt learns and derives the global statistical model on each node, but\nassesses each individual data points on the node that owns it.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPPCAStatistics(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPPCAStatisticsNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPPCAStatistics", o) != 0)
    {
    Py_DECREF(o);
    }

}

