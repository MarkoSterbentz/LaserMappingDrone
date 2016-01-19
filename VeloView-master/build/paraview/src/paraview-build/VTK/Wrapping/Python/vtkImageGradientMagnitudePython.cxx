// python wrapper for vtkImageGradientMagnitude
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkImageGradientMagnitude.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkImageGradientMagnitude(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkImageGradientMagnitudeNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkThreadedImageAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkThreadedImageAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkThreadedImageAlgorithmNew
#endif

static const char **PyvtkImageGradientMagnitude_Doc();


static PyObject *
PyvtkImageGradientMagnitude_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageGradientMagnitude *op = static_cast<vtkImageGradientMagnitude *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkImageGradientMagnitude::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageGradientMagnitude_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageGradientMagnitude *op = static_cast<vtkImageGradientMagnitude *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkImageGradientMagnitude::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageGradientMagnitude_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageGradientMagnitude *op = static_cast<vtkImageGradientMagnitude *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkImageGradientMagnitude *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkImageGradientMagnitude::NewInstance());

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
PyvtkImageGradientMagnitude_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkImageGradientMagnitude *tempr = vtkImageGradientMagnitude::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageGradientMagnitude_SetHandleBoundaries(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHandleBoundaries");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageGradientMagnitude *op = static_cast<vtkImageGradientMagnitude *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetHandleBoundaries(temp0);
      }
    else
      {
      op->vtkImageGradientMagnitude::SetHandleBoundaries(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageGradientMagnitude_GetHandleBoundaries(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHandleBoundaries");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageGradientMagnitude *op = static_cast<vtkImageGradientMagnitude *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetHandleBoundaries() :
      op->vtkImageGradientMagnitude::GetHandleBoundaries());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageGradientMagnitude_HandleBoundariesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HandleBoundariesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageGradientMagnitude *op = static_cast<vtkImageGradientMagnitude *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->HandleBoundariesOn();
      }
    else
      {
      op->vtkImageGradientMagnitude::HandleBoundariesOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageGradientMagnitude_HandleBoundariesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HandleBoundariesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageGradientMagnitude *op = static_cast<vtkImageGradientMagnitude *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->HandleBoundariesOff();
      }
    else
      {
      op->vtkImageGradientMagnitude::HandleBoundariesOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageGradientMagnitude_SetDimensionality(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDimensionality");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageGradientMagnitude *op = static_cast<vtkImageGradientMagnitude *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetDimensionality(temp0);
      }
    else
      {
      op->vtkImageGradientMagnitude::SetDimensionality(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageGradientMagnitude_GetDimensionalityMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDimensionalityMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageGradientMagnitude *op = static_cast<vtkImageGradientMagnitude *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetDimensionalityMinValue() :
      op->vtkImageGradientMagnitude::GetDimensionalityMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageGradientMagnitude_GetDimensionalityMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDimensionalityMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageGradientMagnitude *op = static_cast<vtkImageGradientMagnitude *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetDimensionalityMaxValue() :
      op->vtkImageGradientMagnitude::GetDimensionalityMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageGradientMagnitude_GetDimensionality(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDimensionality");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageGradientMagnitude *op = static_cast<vtkImageGradientMagnitude *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetDimensionality() :
      op->vtkImageGradientMagnitude::GetDimensionality());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkImageGradientMagnitude_Methods[] = {
  {(char*)"GetClassName", PyvtkImageGradientMagnitude_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkImageGradientMagnitude_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkImageGradientMagnitude_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkImageGradientMagnitude\nC++: vtkImageGradientMagnitude *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkImageGradientMagnitude_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkImageGradientMagnitude\nC++: vtkImageGradientMagnitude *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetHandleBoundaries", PyvtkImageGradientMagnitude_SetHandleBoundaries, METH_VARARGS,
   (char*)"V.SetHandleBoundaries(int)\nC++: void SetHandleBoundaries(int a)\n\nIf \"HandleBoundariesOn\" then boundary pixels are duplicated So\ncentral differences can get values.\n"},
  {(char*)"GetHandleBoundaries", PyvtkImageGradientMagnitude_GetHandleBoundaries, METH_VARARGS,
   (char*)"V.GetHandleBoundaries() -> int\nC++: int GetHandleBoundaries()\n\nIf \"HandleBoundariesOn\" then boundary pixels are duplicated So\ncentral differences can get values.\n"},
  {(char*)"HandleBoundariesOn", PyvtkImageGradientMagnitude_HandleBoundariesOn, METH_VARARGS,
   (char*)"V.HandleBoundariesOn()\nC++: void HandleBoundariesOn()\n\nIf \"HandleBoundariesOn\" then boundary pixels are duplicated So\ncentral differences can get values.\n"},
  {(char*)"HandleBoundariesOff", PyvtkImageGradientMagnitude_HandleBoundariesOff, METH_VARARGS,
   (char*)"V.HandleBoundariesOff()\nC++: void HandleBoundariesOff()\n\nIf \"HandleBoundariesOn\" then boundary pixels are duplicated So\ncentral differences can get values.\n"},
  {(char*)"SetDimensionality", PyvtkImageGradientMagnitude_SetDimensionality, METH_VARARGS,
   (char*)"V.SetDimensionality(int)\nC++: void SetDimensionality(int)\n\nDetermines how the input is interpreted (set of 2d slices ...)\n"},
  {(char*)"GetDimensionalityMinValue", PyvtkImageGradientMagnitude_GetDimensionalityMinValue, METH_VARARGS,
   (char*)"V.GetDimensionalityMinValue() -> int\nC++: int GetDimensionalityMinValue()\n\nDetermines how the input is interpreted (set of 2d slices ...)\n"},
  {(char*)"GetDimensionalityMaxValue", PyvtkImageGradientMagnitude_GetDimensionalityMaxValue, METH_VARARGS,
   (char*)"V.GetDimensionalityMaxValue() -> int\nC++: int GetDimensionalityMaxValue()\n\nDetermines how the input is interpreted (set of 2d slices ...)\n"},
  {(char*)"GetDimensionality", PyvtkImageGradientMagnitude_GetDimensionality, METH_VARARGS,
   (char*)"V.GetDimensionality() -> int\nC++: int GetDimensionality()\n\nDetermines how the input is interpreted (set of 2d slices ...)\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkImageGradientMagnitude_StaticNew()
{
  return vtkImageGradientMagnitude::New();
}

PyObject *PyVTKClass_vtkImageGradientMagnitudeNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkImageGradientMagnitude_StaticNew,
    PyvtkImageGradientMagnitude_Methods,
    "vtkImageGradientMagnitude", modulename,
    NULL, NULL,
    PyvtkImageGradientMagnitude_Doc(),
    PyVTKClass_vtkThreadedImageAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkImageGradientMagnitude_Doc()
{
  static const char *docstring[] = {
    "vtkImageGradientMagnitude - Computes magnitude of the gradient.\n\n",
    "Superclass: vtkThreadedImageAlgorithm\n\n",
    "vtkImageGradientMagnitude computes the gradient magnitude of an\nimage. Setting the dimensionality determines whether the gradient is\ncomputed on 2D images, or 3D volumes.  The default is two dimensional\nXY images.\n\nSee Also:\n\nvtkImageGradient vtkImageMagnitude\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkImageGradientMagnitude(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkImageGradientMagnitudeNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkImageGradientMagnitude", o) != 0)
    {
    Py_DECREF(o);
    }

}

