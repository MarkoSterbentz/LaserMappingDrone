// python wrapper for vtkImageNonMaximumSuppression
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkImageNonMaximumSuppression.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkImageNonMaximumSuppression(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkImageNonMaximumSuppressionNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkThreadedImageAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkThreadedImageAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkThreadedImageAlgorithmNew
#endif

static const char **PyvtkImageNonMaximumSuppression_Doc();


static PyObject *
PyvtkImageNonMaximumSuppression_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageNonMaximumSuppression *op = static_cast<vtkImageNonMaximumSuppression *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkImageNonMaximumSuppression::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageNonMaximumSuppression_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageNonMaximumSuppression *op = static_cast<vtkImageNonMaximumSuppression *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkImageNonMaximumSuppression::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageNonMaximumSuppression_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageNonMaximumSuppression *op = static_cast<vtkImageNonMaximumSuppression *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkImageNonMaximumSuppression *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkImageNonMaximumSuppression::NewInstance());

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
PyvtkImageNonMaximumSuppression_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkImageNonMaximumSuppression *tempr = vtkImageNonMaximumSuppression::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageNonMaximumSuppression_SetMagnitudeInputData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMagnitudeInputData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageNonMaximumSuppression *op = static_cast<vtkImageNonMaximumSuppression *>(vp);

  vtkImageData *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkImageData"))
    {
    if (ap.IsBound())
      {
      op->SetMagnitudeInputData(temp0);
      }
    else
      {
      op->vtkImageNonMaximumSuppression::SetMagnitudeInputData(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageNonMaximumSuppression_SetVectorInputData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVectorInputData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageNonMaximumSuppression *op = static_cast<vtkImageNonMaximumSuppression *>(vp);

  vtkImageData *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkImageData"))
    {
    if (ap.IsBound())
      {
      op->SetVectorInputData(temp0);
      }
    else
      {
      op->vtkImageNonMaximumSuppression::SetVectorInputData(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageNonMaximumSuppression_SetHandleBoundaries(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHandleBoundaries");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageNonMaximumSuppression *op = static_cast<vtkImageNonMaximumSuppression *>(vp);

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
      op->vtkImageNonMaximumSuppression::SetHandleBoundaries(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageNonMaximumSuppression_GetHandleBoundaries(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHandleBoundaries");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageNonMaximumSuppression *op = static_cast<vtkImageNonMaximumSuppression *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetHandleBoundaries() :
      op->vtkImageNonMaximumSuppression::GetHandleBoundaries());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageNonMaximumSuppression_HandleBoundariesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HandleBoundariesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageNonMaximumSuppression *op = static_cast<vtkImageNonMaximumSuppression *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->HandleBoundariesOn();
      }
    else
      {
      op->vtkImageNonMaximumSuppression::HandleBoundariesOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageNonMaximumSuppression_HandleBoundariesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HandleBoundariesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageNonMaximumSuppression *op = static_cast<vtkImageNonMaximumSuppression *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->HandleBoundariesOff();
      }
    else
      {
      op->vtkImageNonMaximumSuppression::HandleBoundariesOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageNonMaximumSuppression_SetDimensionality(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDimensionality");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageNonMaximumSuppression *op = static_cast<vtkImageNonMaximumSuppression *>(vp);

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
      op->vtkImageNonMaximumSuppression::SetDimensionality(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageNonMaximumSuppression_GetDimensionalityMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDimensionalityMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageNonMaximumSuppression *op = static_cast<vtkImageNonMaximumSuppression *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetDimensionalityMinValue() :
      op->vtkImageNonMaximumSuppression::GetDimensionalityMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageNonMaximumSuppression_GetDimensionalityMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDimensionalityMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageNonMaximumSuppression *op = static_cast<vtkImageNonMaximumSuppression *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetDimensionalityMaxValue() :
      op->vtkImageNonMaximumSuppression::GetDimensionalityMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageNonMaximumSuppression_GetDimensionality(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDimensionality");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageNonMaximumSuppression *op = static_cast<vtkImageNonMaximumSuppression *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetDimensionality() :
      op->vtkImageNonMaximumSuppression::GetDimensionality());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkImageNonMaximumSuppression_Methods[] = {
  {(char*)"GetClassName", PyvtkImageNonMaximumSuppression_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkImageNonMaximumSuppression_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkImageNonMaximumSuppression_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkImageNonMaximumSuppression\nC++: vtkImageNonMaximumSuppression *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkImageNonMaximumSuppression_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkImageNonMaximumSuppression\nC++: vtkImageNonMaximumSuppression *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetMagnitudeInputData", PyvtkImageNonMaximumSuppression_SetMagnitudeInputData, METH_VARARGS,
   (char*)"V.SetMagnitudeInputData(vtkImageData)\nC++: void SetMagnitudeInputData(vtkImageData *input)\n\nSet the magnitude and vector inputs.\n"},
  {(char*)"SetVectorInputData", PyvtkImageNonMaximumSuppression_SetVectorInputData, METH_VARARGS,
   (char*)"V.SetVectorInputData(vtkImageData)\nC++: void SetVectorInputData(vtkImageData *input)\n\nSet the magnitude and vector inputs.\n"},
  {(char*)"SetHandleBoundaries", PyvtkImageNonMaximumSuppression_SetHandleBoundaries, METH_VARARGS,
   (char*)"V.SetHandleBoundaries(int)\nC++: void SetHandleBoundaries(int a)\n\nIf \"HandleBoundariesOn\" then boundary pixels are duplicated So\ncentral differences can get values.\n"},
  {(char*)"GetHandleBoundaries", PyvtkImageNonMaximumSuppression_GetHandleBoundaries, METH_VARARGS,
   (char*)"V.GetHandleBoundaries() -> int\nC++: int GetHandleBoundaries()\n\nIf \"HandleBoundariesOn\" then boundary pixels are duplicated So\ncentral differences can get values.\n"},
  {(char*)"HandleBoundariesOn", PyvtkImageNonMaximumSuppression_HandleBoundariesOn, METH_VARARGS,
   (char*)"V.HandleBoundariesOn()\nC++: void HandleBoundariesOn()\n\nIf \"HandleBoundariesOn\" then boundary pixels are duplicated So\ncentral differences can get values.\n"},
  {(char*)"HandleBoundariesOff", PyvtkImageNonMaximumSuppression_HandleBoundariesOff, METH_VARARGS,
   (char*)"V.HandleBoundariesOff()\nC++: void HandleBoundariesOff()\n\nIf \"HandleBoundariesOn\" then boundary pixels are duplicated So\ncentral differences can get values.\n"},
  {(char*)"SetDimensionality", PyvtkImageNonMaximumSuppression_SetDimensionality, METH_VARARGS,
   (char*)"V.SetDimensionality(int)\nC++: void SetDimensionality(int)\n\nDetermines how the input is interpreted (set of 2d slices or a 3D\nvolume)\n"},
  {(char*)"GetDimensionalityMinValue", PyvtkImageNonMaximumSuppression_GetDimensionalityMinValue, METH_VARARGS,
   (char*)"V.GetDimensionalityMinValue() -> int\nC++: int GetDimensionalityMinValue()\n\nDetermines how the input is interpreted (set of 2d slices or a 3D\nvolume)\n"},
  {(char*)"GetDimensionalityMaxValue", PyvtkImageNonMaximumSuppression_GetDimensionalityMaxValue, METH_VARARGS,
   (char*)"V.GetDimensionalityMaxValue() -> int\nC++: int GetDimensionalityMaxValue()\n\nDetermines how the input is interpreted (set of 2d slices or a 3D\nvolume)\n"},
  {(char*)"GetDimensionality", PyvtkImageNonMaximumSuppression_GetDimensionality, METH_VARARGS,
   (char*)"V.GetDimensionality() -> int\nC++: int GetDimensionality()\n\nDetermines how the input is interpreted (set of 2d slices or a 3D\nvolume)\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkImageNonMaximumSuppression_StaticNew()
{
  return vtkImageNonMaximumSuppression::New();
}

PyObject *PyVTKClass_vtkImageNonMaximumSuppressionNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkImageNonMaximumSuppression_StaticNew,
    PyvtkImageNonMaximumSuppression_Methods,
    "vtkImageNonMaximumSuppression", modulename,
    NULL, NULL,
    PyvtkImageNonMaximumSuppression_Doc(),
    PyVTKClass_vtkThreadedImageAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkImageNonMaximumSuppression_Doc()
{
  static const char *docstring[] = {
    "vtkImageNonMaximumSuppression - Performs non-maximum suppression\n\n",
    "Superclass: vtkThreadedImageAlgorithm\n\n",
    "vtkImageNonMaximumSuppression Sets to zero any pixel that is not a\npeak. If a pixel has a neighbor along the vector that has larger\nmagnitude, the smaller pixel is set to zero.  The filter takes two\ninputs: a magnitude and a vector.  Output is magnitude information\nand is always in doubles. Typically this filter is used with\nvtkImageGradient and vtkImageGradientMagnitude as inputs.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkImageNonMaximumSuppression(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkImageNonMaximumSuppressionNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkImageNonMaximumSuppression", o) != 0)
    {
    Py_DECREF(o);
    }

  for (int c = 0; c < 2; c++)
    {
    static const struct { const char *name; int value; }
      constants[2] = {
        { "VTK_IMAGE_NON_MAXIMUM_SUPPRESSION_MAGNITUDE_INPUT", 0 },
        { "VTK_IMAGE_NON_MAXIMUM_SUPPRESSION_VECTOR_INPUT", 1 },
      };

    o = PyInt_FromLong(constants[c].value);
    if (o)
      {
      PyDict_SetItemString(dict, (char *)constants[c].name, o);
      Py_DECREF(o);
      }
    }

}

