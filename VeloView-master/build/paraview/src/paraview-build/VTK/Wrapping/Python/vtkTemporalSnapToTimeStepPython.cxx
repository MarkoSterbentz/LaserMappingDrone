// python wrapper for vtkTemporalSnapToTimeStep
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkTemporalSnapToTimeStep.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkTemporalSnapToTimeStep(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkTemporalSnapToTimeStepNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkAlgorithmNew
#endif

static const char **PyvtkTemporalSnapToTimeStep_Doc();


static PyObject *
PyvtkTemporalSnapToTimeStep_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalSnapToTimeStep *op = static_cast<vtkTemporalSnapToTimeStep *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkTemporalSnapToTimeStep::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTemporalSnapToTimeStep_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalSnapToTimeStep *op = static_cast<vtkTemporalSnapToTimeStep *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkTemporalSnapToTimeStep::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTemporalSnapToTimeStep_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalSnapToTimeStep *op = static_cast<vtkTemporalSnapToTimeStep *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkTemporalSnapToTimeStep *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkTemporalSnapToTimeStep::NewInstance());

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
PyvtkTemporalSnapToTimeStep_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkTemporalSnapToTimeStep *tempr = vtkTemporalSnapToTimeStep::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTemporalSnapToTimeStep_SetSnapMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSnapMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalSnapToTimeStep *op = static_cast<vtkTemporalSnapToTimeStep *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetSnapMode(temp0);
      }
    else
      {
      op->vtkTemporalSnapToTimeStep::SetSnapMode(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTemporalSnapToTimeStep_GetSnapMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSnapMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalSnapToTimeStep *op = static_cast<vtkTemporalSnapToTimeStep *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetSnapMode() :
      op->vtkTemporalSnapToTimeStep::GetSnapMode());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTemporalSnapToTimeStep_SetSnapModeToNearest(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSnapModeToNearest");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalSnapToTimeStep *op = static_cast<vtkTemporalSnapToTimeStep *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetSnapModeToNearest();
      }
    else
      {
      op->vtkTemporalSnapToTimeStep::SetSnapModeToNearest();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTemporalSnapToTimeStep_SetSnapModeToNextBelowOrEqual(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSnapModeToNextBelowOrEqual");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalSnapToTimeStep *op = static_cast<vtkTemporalSnapToTimeStep *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetSnapModeToNextBelowOrEqual();
      }
    else
      {
      op->vtkTemporalSnapToTimeStep::SetSnapModeToNextBelowOrEqual();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTemporalSnapToTimeStep_SetSnapModeToNextAboveOrEqual(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSnapModeToNextAboveOrEqual");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalSnapToTimeStep *op = static_cast<vtkTemporalSnapToTimeStep *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetSnapModeToNextAboveOrEqual();
      }
    else
      {
      op->vtkTemporalSnapToTimeStep::SetSnapModeToNextAboveOrEqual();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkTemporalSnapToTimeStep_Methods[] = {
  {(char*)"GetClassName", PyvtkTemporalSnapToTimeStep_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkTemporalSnapToTimeStep_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkTemporalSnapToTimeStep_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkTemporalSnapToTimeStep\nC++: vtkTemporalSnapToTimeStep *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkTemporalSnapToTimeStep_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkTemporalSnapToTimeStep\nC++: vtkTemporalSnapToTimeStep *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetSnapMode", PyvtkTemporalSnapToTimeStep_SetSnapMode, METH_VARARGS,
   (char*)"V.SetSnapMode(int)\nC++: void SetSnapMode(int a)\n\n"},
  {(char*)"GetSnapMode", PyvtkTemporalSnapToTimeStep_GetSnapMode, METH_VARARGS,
   (char*)"V.GetSnapMode() -> int\nC++: int GetSnapMode()\n\n"},
  {(char*)"SetSnapModeToNearest", PyvtkTemporalSnapToTimeStep_SetSnapModeToNearest, METH_VARARGS,
   (char*)"V.SetSnapModeToNearest()\nC++: void SetSnapModeToNearest()\n\n"},
  {(char*)"SetSnapModeToNextBelowOrEqual", PyvtkTemporalSnapToTimeStep_SetSnapModeToNextBelowOrEqual, METH_VARARGS,
   (char*)"V.SetSnapModeToNextBelowOrEqual()\nC++: void SetSnapModeToNextBelowOrEqual()\n\n"},
  {(char*)"SetSnapModeToNextAboveOrEqual", PyvtkTemporalSnapToTimeStep_SetSnapModeToNextAboveOrEqual, METH_VARARGS,
   (char*)"V.SetSnapModeToNextAboveOrEqual()\nC++: void SetSnapModeToNextAboveOrEqual()\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkTemporalSnapToTimeStep_StaticNew()
{
  return vtkTemporalSnapToTimeStep::New();
}

PyObject *PyVTKClass_vtkTemporalSnapToTimeStepNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkTemporalSnapToTimeStep_StaticNew,
    PyvtkTemporalSnapToTimeStep_Methods,
    "vtkTemporalSnapToTimeStep", modulename,
    NULL, NULL,
    PyvtkTemporalSnapToTimeStep_Doc(),
    PyVTKClass_vtkAlgorithmNew(modulename));

  if (cls)
    {
    PyObject *d = PyVTKClass_GetDict(cls);
    PyObject *o;

    for (int c = 0; c < 3; c++)
      {
      static const struct { const char *name; int value; }
        constants[3] = {
          { "VTK_SNAP_NEAREST", vtkTemporalSnapToTimeStep::VTK_SNAP_NEAREST },
          { "VTK_SNAP_NEXTBELOW_OR_EQUAL", vtkTemporalSnapToTimeStep::VTK_SNAP_NEXTBELOW_OR_EQUAL },
          { "VTK_SNAP_NEXTABOVE_OR_EQUAL", vtkTemporalSnapToTimeStep::VTK_SNAP_NEXTABOVE_OR_EQUAL },
        };

      o = PyInt_FromLong(constants[c].value);
      if (o)
        {
        PyDict_SetItemString(d, (char *)constants[c].name, o);
        Py_DECREF(o);
        }
      }

    }

  return cls;
}

const char **PyvtkTemporalSnapToTimeStep_Doc()
{
  static const char *docstring[] = {
    "vtkTemporalSnapToTimeStep - modify the time range/steps of temporal\ndata\n\n",
    "Superclass: vtkAlgorithm\n\n",
    "vtkTemporalSnapToTimeStep  modify the time range or time steps of the\ndata without changing the data itself. The data is not resampled by\nthis filter, only the information accompanying the data is modified.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkTemporalSnapToTimeStep(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkTemporalSnapToTimeStepNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkTemporalSnapToTimeStep", o) != 0)
    {
    Py_DECREF(o);
    }

}

