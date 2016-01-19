// python wrapper for vtkImageInterpolator
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkImageInterpolator.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkImageInterpolator(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkImageInterpolatorNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkAbstractImageInterpolatorNew
extern "C" { PyObject *PyVTKClass_vtkAbstractImageInterpolatorNew(const char *); }
#define DECLARED_PyVTKClass_vtkAbstractImageInterpolatorNew
#endif

static const char **PyvtkImageInterpolator_Doc();


static PyObject *
PyvtkImageInterpolator_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageInterpolator *op = static_cast<vtkImageInterpolator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkImageInterpolator::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageInterpolator_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageInterpolator *op = static_cast<vtkImageInterpolator *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkImageInterpolator::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageInterpolator_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageInterpolator *op = static_cast<vtkImageInterpolator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkImageInterpolator *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkImageInterpolator::NewInstance());

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
PyvtkImageInterpolator_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkImageInterpolator *tempr = vtkImageInterpolator::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageInterpolator_SetInterpolationMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInterpolationMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageInterpolator *op = static_cast<vtkImageInterpolator *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetInterpolationMode(temp0);
      }
    else
      {
      op->vtkImageInterpolator::SetInterpolationMode(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageInterpolator_SetInterpolationModeToNearest(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInterpolationModeToNearest");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageInterpolator *op = static_cast<vtkImageInterpolator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetInterpolationModeToNearest();
      }
    else
      {
      op->vtkImageInterpolator::SetInterpolationModeToNearest();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageInterpolator_SetInterpolationModeToLinear(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInterpolationModeToLinear");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageInterpolator *op = static_cast<vtkImageInterpolator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetInterpolationModeToLinear();
      }
    else
      {
      op->vtkImageInterpolator::SetInterpolationModeToLinear();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageInterpolator_SetInterpolationModeToCubic(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInterpolationModeToCubic");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageInterpolator *op = static_cast<vtkImageInterpolator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetInterpolationModeToCubic();
      }
    else
      {
      op->vtkImageInterpolator::SetInterpolationModeToCubic();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageInterpolator_GetInterpolationMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInterpolationMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageInterpolator *op = static_cast<vtkImageInterpolator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetInterpolationMode() :
      op->vtkImageInterpolator::GetInterpolationMode());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageInterpolator_GetInterpolationModeAsString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInterpolationModeAsString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageInterpolator *op = static_cast<vtkImageInterpolator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetInterpolationModeAsString() :
      op->vtkImageInterpolator::GetInterpolationModeAsString());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageInterpolator_ComputeSupportSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeSupportSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageInterpolator *op = static_cast<vtkImageInterpolator *>(vp);

  double temp0[16];
  const int size0 = 16;
  int temp1[3];
  int save1[3];
  const int size1 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1))
    {
    ap.SaveArray(temp1, save1, size1);

    if (ap.IsBound())
      {
      op->ComputeSupportSize(temp0, temp1);
      }
    else
      {
      op->vtkImageInterpolator::ComputeSupportSize(temp0, temp1);
      }

    if (ap.ArrayHasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(1, temp1, size1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageInterpolator_IsSeparable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsSeparable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageInterpolator *op = static_cast<vtkImageInterpolator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->IsSeparable() :
      op->vtkImageInterpolator::IsSeparable());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkImageInterpolator_Methods[] = {
  {(char*)"GetClassName", PyvtkImageInterpolator_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkImageInterpolator_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkImageInterpolator_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkImageInterpolator\nC++: vtkImageInterpolator *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkImageInterpolator_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkImageInterpolator\nC++: vtkImageInterpolator *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetInterpolationMode", PyvtkImageInterpolator_SetInterpolationMode, METH_VARARGS,
   (char*)"V.SetInterpolationMode(int)\nC++: virtual void SetInterpolationMode(int mode)\n\nThe interpolation mode for point scalars (default: linear). \nSubclasses will provide additional interpolation modes, so this\nis a virtual method.\n"},
  {(char*)"SetInterpolationModeToNearest", PyvtkImageInterpolator_SetInterpolationModeToNearest, METH_VARARGS,
   (char*)"V.SetInterpolationModeToNearest()\nC++: void SetInterpolationModeToNearest()\n\nThe interpolation mode for point scalars (default: linear). \nSubclasses will provide additional interpolation modes, so this\nis a virtual method.\n"},
  {(char*)"SetInterpolationModeToLinear", PyvtkImageInterpolator_SetInterpolationModeToLinear, METH_VARARGS,
   (char*)"V.SetInterpolationModeToLinear()\nC++: void SetInterpolationModeToLinear()\n\nThe interpolation mode for point scalars (default: linear). \nSubclasses will provide additional interpolation modes, so this\nis a virtual method.\n"},
  {(char*)"SetInterpolationModeToCubic", PyvtkImageInterpolator_SetInterpolationModeToCubic, METH_VARARGS,
   (char*)"V.SetInterpolationModeToCubic()\nC++: void SetInterpolationModeToCubic()\n\nThe interpolation mode for point scalars (default: linear). \nSubclasses will provide additional interpolation modes, so this\nis a virtual method.\n"},
  {(char*)"GetInterpolationMode", PyvtkImageInterpolator_GetInterpolationMode, METH_VARARGS,
   (char*)"V.GetInterpolationMode() -> int\nC++: int GetInterpolationMode()\n\nThe interpolation mode for point scalars (default: linear). \nSubclasses will provide additional interpolation modes, so this\nis a virtual method.\n"},
  {(char*)"GetInterpolationModeAsString", PyvtkImageInterpolator_GetInterpolationModeAsString, METH_VARARGS,
   (char*)"V.GetInterpolationModeAsString() -> string\nC++: virtual const char *GetInterpolationModeAsString()\n\nThe interpolation mode for point scalars (default: linear). \nSubclasses will provide additional interpolation modes, so this\nis a virtual method.\n"},
  {(char*)"ComputeSupportSize", PyvtkImageInterpolator_ComputeSupportSize, METH_VARARGS,
   (char*)"V.ComputeSupportSize((float, float, float, float, float, float,\n    float, float, float, float, float, float, float, float, float,\n     float), [int, int, int])\nC++: virtual void ComputeSupportSize(const double matrix[16],\n    int support[3])\n\nGet the support size for use in computing update extents.  If the\ndata will be sampled on a regular grid, then pass a matrix\ndescribing the structured coordinate transformation between the\noutput and the input. Otherwise, pass NULL as the matrix to\nretrieve the full kernel size.\n"},
  {(char*)"IsSeparable", PyvtkImageInterpolator_IsSeparable, METH_VARARGS,
   (char*)"V.IsSeparable() -> bool\nC++: virtual bool IsSeparable()\n\nReturns true if the interpolator supports weight precomputation.\nThis will always return true for this interpolator.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkImageInterpolator_StaticNew()
{
  return vtkImageInterpolator::New();
}

PyObject *PyVTKClass_vtkImageInterpolatorNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkImageInterpolator_StaticNew,
    PyvtkImageInterpolator_Methods,
    "vtkImageInterpolator", modulename,
    NULL, NULL,
    PyvtkImageInterpolator_Doc(),
    PyVTKClass_vtkAbstractImageInterpolatorNew(modulename));
  return cls;
}

const char **PyvtkImageInterpolator_Doc()
{
  static const char *docstring[] = {
    "vtkImageInterpolator - interpolate data values from images\n\n",
    "Superclass: vtkAbstractImageInterpolator\n\n",
    "vtkImageInterpolator provides a simple interface for interpolating\nimage data.  It provides linear, cubic, and nearest-neighbor\ninterpolation.\n\nThanks:\n\nThanks to David Gobbi at the Seaman Family MR Centre and Dept. of\nClinical Neurosciences, Foothills Medical Centre, Calgary, for\nproviding this class.\n\nSee also:\n\nvtkImageReslice\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkImageInterpolator(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkImageInterpolatorNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkImageInterpolator", o) != 0)
    {
    Py_DECREF(o);
    }

}

