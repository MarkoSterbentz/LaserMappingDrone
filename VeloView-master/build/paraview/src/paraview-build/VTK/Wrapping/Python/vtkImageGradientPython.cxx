// python wrapper for vtkImageGradient
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkImageGradient.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkImageGradient(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkImageGradientNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkThreadedImageAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkThreadedImageAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkThreadedImageAlgorithmNew
#endif

static const char **PyvtkImageGradient_Doc();


static PyObject *
PyvtkImageGradient_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageGradient *op = static_cast<vtkImageGradient *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkImageGradient::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageGradient_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageGradient *op = static_cast<vtkImageGradient *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkImageGradient::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageGradient_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageGradient *op = static_cast<vtkImageGradient *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkImageGradient *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkImageGradient::NewInstance());

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
PyvtkImageGradient_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkImageGradient *tempr = vtkImageGradient::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageGradient_SetDimensionality(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDimensionality");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageGradient *op = static_cast<vtkImageGradient *>(vp);

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
      op->vtkImageGradient::SetDimensionality(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageGradient_GetDimensionalityMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDimensionalityMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageGradient *op = static_cast<vtkImageGradient *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetDimensionalityMinValue() :
      op->vtkImageGradient::GetDimensionalityMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageGradient_GetDimensionalityMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDimensionalityMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageGradient *op = static_cast<vtkImageGradient *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetDimensionalityMaxValue() :
      op->vtkImageGradient::GetDimensionalityMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageGradient_GetDimensionality(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDimensionality");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageGradient *op = static_cast<vtkImageGradient *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetDimensionality() :
      op->vtkImageGradient::GetDimensionality());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageGradient_SetHandleBoundaries(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHandleBoundaries");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageGradient *op = static_cast<vtkImageGradient *>(vp);

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
      op->vtkImageGradient::SetHandleBoundaries(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageGradient_GetHandleBoundaries(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHandleBoundaries");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageGradient *op = static_cast<vtkImageGradient *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetHandleBoundaries() :
      op->vtkImageGradient::GetHandleBoundaries());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageGradient_HandleBoundariesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HandleBoundariesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageGradient *op = static_cast<vtkImageGradient *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->HandleBoundariesOn();
      }
    else
      {
      op->vtkImageGradient::HandleBoundariesOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageGradient_HandleBoundariesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HandleBoundariesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageGradient *op = static_cast<vtkImageGradient *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->HandleBoundariesOff();
      }
    else
      {
      op->vtkImageGradient::HandleBoundariesOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkImageGradient_Methods[] = {
  {(char*)"GetClassName", PyvtkImageGradient_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkImageGradient_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkImageGradient_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkImageGradient\nC++: vtkImageGradient *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkImageGradient_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkImageGradient\nC++: vtkImageGradient *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetDimensionality", PyvtkImageGradient_SetDimensionality, METH_VARARGS,
   (char*)"V.SetDimensionality(int)\nC++: void SetDimensionality(int)\n\nDetermines how the input is interpreted (set of 2d slices ...)\n"},
  {(char*)"GetDimensionalityMinValue", PyvtkImageGradient_GetDimensionalityMinValue, METH_VARARGS,
   (char*)"V.GetDimensionalityMinValue() -> int\nC++: int GetDimensionalityMinValue()\n\nDetermines how the input is interpreted (set of 2d slices ...)\n"},
  {(char*)"GetDimensionalityMaxValue", PyvtkImageGradient_GetDimensionalityMaxValue, METH_VARARGS,
   (char*)"V.GetDimensionalityMaxValue() -> int\nC++: int GetDimensionalityMaxValue()\n\nDetermines how the input is interpreted (set of 2d slices ...)\n"},
  {(char*)"GetDimensionality", PyvtkImageGradient_GetDimensionality, METH_VARARGS,
   (char*)"V.GetDimensionality() -> int\nC++: int GetDimensionality()\n\nDetermines how the input is interpreted (set of 2d slices ...)\n"},
  {(char*)"SetHandleBoundaries", PyvtkImageGradient_SetHandleBoundaries, METH_VARARGS,
   (char*)"V.SetHandleBoundaries(int)\nC++: void SetHandleBoundaries(int a)\n\nGet/Set whether to handle boundaries.  If enabled, boundary\npixels are treated as duplicated so that central differencing\nworks for the boundary pixels.  If disabled, the output whole\nextent of the image is reduced by one pixel.\n"},
  {(char*)"GetHandleBoundaries", PyvtkImageGradient_GetHandleBoundaries, METH_VARARGS,
   (char*)"V.GetHandleBoundaries() -> int\nC++: int GetHandleBoundaries()\n\nGet/Set whether to handle boundaries.  If enabled, boundary\npixels are treated as duplicated so that central differencing\nworks for the boundary pixels.  If disabled, the output whole\nextent of the image is reduced by one pixel.\n"},
  {(char*)"HandleBoundariesOn", PyvtkImageGradient_HandleBoundariesOn, METH_VARARGS,
   (char*)"V.HandleBoundariesOn()\nC++: void HandleBoundariesOn()\n\nGet/Set whether to handle boundaries.  If enabled, boundary\npixels are treated as duplicated so that central differencing\nworks for the boundary pixels.  If disabled, the output whole\nextent of the image is reduced by one pixel.\n"},
  {(char*)"HandleBoundariesOff", PyvtkImageGradient_HandleBoundariesOff, METH_VARARGS,
   (char*)"V.HandleBoundariesOff()\nC++: void HandleBoundariesOff()\n\nGet/Set whether to handle boundaries.  If enabled, boundary\npixels are treated as duplicated so that central differencing\nworks for the boundary pixels.  If disabled, the output whole\nextent of the image is reduced by one pixel.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkImageGradient_StaticNew()
{
  return vtkImageGradient::New();
}

PyObject *PyVTKClass_vtkImageGradientNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkImageGradient_StaticNew,
    PyvtkImageGradient_Methods,
    "vtkImageGradient", modulename,
    NULL, NULL,
    PyvtkImageGradient_Doc(),
    PyVTKClass_vtkThreadedImageAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkImageGradient_Doc()
{
  static const char *docstring[] = {
    "vtkImageGradient - Computes the gradient vector.\n\n",
    "Superclass: vtkThreadedImageAlgorithm\n\n",
    "vtkImageGradient computes the gradient vector of an image.  The\nvector results are stored as scalar components. The Dimensionality\ndetermines whether to perform a 2d or 3d gradient. The default is two\ndimensional XY gradient.  OutputScalarType is always double. Gradient\nis computed using central differences.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkImageGradient(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkImageGradientNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkImageGradient", o) != 0)
    {
    Py_DECREF(o);
    }

}

