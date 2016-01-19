// python wrapper for vtkGridTransform
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkGridTransform.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkGridTransform(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkGridTransformNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkWarpTransformNew
extern "C" { PyObject *PyVTKClass_vtkWarpTransformNew(const char *); }
#define DECLARED_PyVTKClass_vtkWarpTransformNew
#endif

static const char **PyvtkGridTransform_Doc();


static PyObject *
PyvtkGridTransform_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridTransform *op = static_cast<vtkGridTransform *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkGridTransform::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGridTransform_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridTransform *op = static_cast<vtkGridTransform *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkGridTransform::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGridTransform_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridTransform *op = static_cast<vtkGridTransform *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkGridTransform *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkGridTransform::NewInstance());

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
PyvtkGridTransform_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkGridTransform *tempr = vtkGridTransform::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGridTransform_SetDisplacementGridConnection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDisplacementGridConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridTransform *op = static_cast<vtkGridTransform *>(vp);

  vtkAlgorithmOutput *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAlgorithmOutput"))
    {
    if (ap.IsBound())
      {
      op->SetDisplacementGridConnection(temp0);
      }
    else
      {
      op->vtkGridTransform::SetDisplacementGridConnection(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGridTransform_SetDisplacementGridData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDisplacementGridData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridTransform *op = static_cast<vtkGridTransform *>(vp);

  vtkImageData *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkImageData"))
    {
    if (ap.IsBound())
      {
      op->SetDisplacementGridData(temp0);
      }
    else
      {
      op->vtkGridTransform::SetDisplacementGridData(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGridTransform_GetDisplacementGrid(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDisplacementGrid");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridTransform *op = static_cast<vtkGridTransform *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkImageData *tempr = (ap.IsBound() ?
      op->GetDisplacementGrid() :
      op->vtkGridTransform::GetDisplacementGrid());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGridTransform_SetDisplacementScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDisplacementScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridTransform *op = static_cast<vtkGridTransform *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetDisplacementScale(temp0);
      }
    else
      {
      op->vtkGridTransform::SetDisplacementScale(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGridTransform_GetDisplacementScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDisplacementScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridTransform *op = static_cast<vtkGridTransform *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetDisplacementScale() :
      op->vtkGridTransform::GetDisplacementScale());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGridTransform_SetDisplacementShift(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDisplacementShift");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridTransform *op = static_cast<vtkGridTransform *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetDisplacementShift(temp0);
      }
    else
      {
      op->vtkGridTransform::SetDisplacementShift(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGridTransform_GetDisplacementShift(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDisplacementShift");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridTransform *op = static_cast<vtkGridTransform *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetDisplacementShift() :
      op->vtkGridTransform::GetDisplacementShift());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGridTransform_SetInterpolationMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInterpolationMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridTransform *op = static_cast<vtkGridTransform *>(vp);

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
      op->vtkGridTransform::SetInterpolationMode(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGridTransform_GetInterpolationMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInterpolationMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridTransform *op = static_cast<vtkGridTransform *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetInterpolationMode() :
      op->vtkGridTransform::GetInterpolationMode());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGridTransform_SetInterpolationModeToNearestNeighbor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInterpolationModeToNearestNeighbor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridTransform *op = static_cast<vtkGridTransform *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetInterpolationModeToNearestNeighbor();
      }
    else
      {
      op->vtkGridTransform::SetInterpolationModeToNearestNeighbor();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGridTransform_SetInterpolationModeToLinear(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInterpolationModeToLinear");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridTransform *op = static_cast<vtkGridTransform *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetInterpolationModeToLinear();
      }
    else
      {
      op->vtkGridTransform::SetInterpolationModeToLinear();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGridTransform_SetInterpolationModeToCubic(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInterpolationModeToCubic");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridTransform *op = static_cast<vtkGridTransform *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetInterpolationModeToCubic();
      }
    else
      {
      op->vtkGridTransform::SetInterpolationModeToCubic();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGridTransform_GetInterpolationModeAsString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInterpolationModeAsString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridTransform *op = static_cast<vtkGridTransform *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetInterpolationModeAsString() :
      op->vtkGridTransform::GetInterpolationModeAsString());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGridTransform_MakeTransform(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MakeTransform");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridTransform *op = static_cast<vtkGridTransform *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkAbstractTransform *tempr = (ap.IsBound() ?
      op->MakeTransform() :
      op->vtkGridTransform::MakeTransform());

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
PyvtkGridTransform_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridTransform *op = static_cast<vtkGridTransform *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMTime() :
      op->vtkGridTransform::GetMTime());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkGridTransform_Methods[] = {
  {(char*)"GetClassName", PyvtkGridTransform_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkGridTransform_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkGridTransform_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkGridTransform\nC++: vtkGridTransform *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkGridTransform_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkGridTransform\nC++: vtkGridTransform *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetDisplacementGridConnection", PyvtkGridTransform_SetDisplacementGridConnection, METH_VARARGS,
   (char*)"V.SetDisplacementGridConnection(vtkAlgorithmOutput)\nC++: virtual void SetDisplacementGridConnection(\n    vtkAlgorithmOutput *)\n\nSet/Get the grid transform (the grid transform must have three\ncomponents for displacement in x, y, and z respectively). The\nvtkGridTransform class will never modify the data. Note that\nSetDisplacementGridData() does not setup a pipeline connection\nwhereas SetDisplacementGridConnection does.\n"},
  {(char*)"SetDisplacementGridData", PyvtkGridTransform_SetDisplacementGridData, METH_VARARGS,
   (char*)"V.SetDisplacementGridData(vtkImageData)\nC++: virtual void SetDisplacementGridData(vtkImageData *)\n\nSet/Get the grid transform (the grid transform must have three\ncomponents for displacement in x, y, and z respectively). The\nvtkGridTransform class will never modify the data. Note that\nSetDisplacementGridData() does not setup a pipeline connection\nwhereas SetDisplacementGridConnection does.\n"},
  {(char*)"GetDisplacementGrid", PyvtkGridTransform_GetDisplacementGrid, METH_VARARGS,
   (char*)"V.GetDisplacementGrid() -> vtkImageData\nC++: virtual vtkImageData *GetDisplacementGrid()\n\nSet/Get the grid transform (the grid transform must have three\ncomponents for displacement in x, y, and z respectively). The\nvtkGridTransform class will never modify the data. Note that\nSetDisplacementGridData() does not setup a pipeline connection\nwhereas SetDisplacementGridConnection does.\n"},
  {(char*)"SetDisplacementScale", PyvtkGridTransform_SetDisplacementScale, METH_VARARGS,
   (char*)"V.SetDisplacementScale(float)\nC++: void SetDisplacementScale(double a)\n\nSet scale factor to be applied to the displacements. This is used\nprimarily for grids which contain integer data types.  Default: 1\n"},
  {(char*)"GetDisplacementScale", PyvtkGridTransform_GetDisplacementScale, METH_VARARGS,
   (char*)"V.GetDisplacementScale() -> float\nC++: double GetDisplacementScale()\n\nSet scale factor to be applied to the displacements. This is used\nprimarily for grids which contain integer data types.  Default: 1\n"},
  {(char*)"SetDisplacementShift", PyvtkGridTransform_SetDisplacementShift, METH_VARARGS,
   (char*)"V.SetDisplacementShift(float)\nC++: void SetDisplacementShift(double a)\n\nSet a shift to be applied to the displacements.  The shift is\napplied after the scale, i.e. x = scale*y + shift. Default: 0\n"},
  {(char*)"GetDisplacementShift", PyvtkGridTransform_GetDisplacementShift, METH_VARARGS,
   (char*)"V.GetDisplacementShift() -> float\nC++: double GetDisplacementShift()\n\nSet a shift to be applied to the displacements.  The shift is\napplied after the scale, i.e. x = scale*y + shift. Default: 0\n"},
  {(char*)"SetInterpolationMode", PyvtkGridTransform_SetInterpolationMode, METH_VARARGS,
   (char*)"V.SetInterpolationMode(int)\nC++: void SetInterpolationMode(int mode)\n\nSet interpolation mode for sampling the grid.  Higher-order\ninterpolation allows you to use a sparser grid. Default: Linear.\n"},
  {(char*)"GetInterpolationMode", PyvtkGridTransform_GetInterpolationMode, METH_VARARGS,
   (char*)"V.GetInterpolationMode() -> int\nC++: int GetInterpolationMode()\n\nSet interpolation mode for sampling the grid.  Higher-order\ninterpolation allows you to use a sparser grid. Default: Linear.\n"},
  {(char*)"SetInterpolationModeToNearestNeighbor", PyvtkGridTransform_SetInterpolationModeToNearestNeighbor, METH_VARARGS,
   (char*)"V.SetInterpolationModeToNearestNeighbor()\nC++: void SetInterpolationModeToNearestNeighbor()\n\nSet interpolation mode for sampling the grid.  Higher-order\ninterpolation allows you to use a sparser grid. Default: Linear.\n"},
  {(char*)"SetInterpolationModeToLinear", PyvtkGridTransform_SetInterpolationModeToLinear, METH_VARARGS,
   (char*)"V.SetInterpolationModeToLinear()\nC++: void SetInterpolationModeToLinear()\n\nSet interpolation mode for sampling the grid.  Higher-order\ninterpolation allows you to use a sparser grid. Default: Linear.\n"},
  {(char*)"SetInterpolationModeToCubic", PyvtkGridTransform_SetInterpolationModeToCubic, METH_VARARGS,
   (char*)"V.SetInterpolationModeToCubic()\nC++: void SetInterpolationModeToCubic()\n\nSet interpolation mode for sampling the grid.  Higher-order\ninterpolation allows you to use a sparser grid. Default: Linear.\n"},
  {(char*)"GetInterpolationModeAsString", PyvtkGridTransform_GetInterpolationModeAsString, METH_VARARGS,
   (char*)"V.GetInterpolationModeAsString() -> string\nC++: const char *GetInterpolationModeAsString()\n\nSet interpolation mode for sampling the grid.  Higher-order\ninterpolation allows you to use a sparser grid. Default: Linear.\n"},
  {(char*)"MakeTransform", PyvtkGridTransform_MakeTransform, METH_VARARGS,
   (char*)"V.MakeTransform() -> vtkAbstractTransform\nC++: vtkAbstractTransform *MakeTransform()\n\nMake another transform of the same type.\n"},
  {(char*)"GetMTime", PyvtkGridTransform_GetMTime, METH_VARARGS,
   (char*)"V.GetMTime() -> int\nC++: unsigned long GetMTime()\n\nGet the MTime.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkGridTransform_StaticNew()
{
  return vtkGridTransform::New();
}

PyObject *PyVTKClass_vtkGridTransformNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkGridTransform_StaticNew,
    PyvtkGridTransform_Methods,
    "vtkGridTransform", modulename,
    NULL, NULL,
    PyvtkGridTransform_Doc(),
    PyVTKClass_vtkWarpTransformNew(modulename));
  return cls;
}

const char **PyvtkGridTransform_Doc()
{
  static const char *docstring[] = {
    "vtkGridTransform - a nonlinear warp transformation\n\n",
    "Superclass: vtkWarpTransform\n\n",
    "vtkGridTransform describes a nonlinear warp transformation as a set\nof displacement vectors sampled along a uniform 3D grid.\n\nCaveats:\n\nThe inverse grid transform is calculated using an iterative method,\nand is several times more expensive than the forward transform.\n\nSee Also:\n\nvtkThinPlateSplineTransform vtkGeneralTransform vtkTransformToGrid\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkGridTransform(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkGridTransformNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkGridTransform", o) != 0)
    {
    Py_DECREF(o);
    }

  for (int c = 0; c < 3; c++)
    {
    static const struct { const char *name; int value; }
      constants[3] = {
        { "VTK_GRID_NEAREST", VTK_NEAREST_INTERPOLATION },
        { "VTK_GRID_LINEAR", VTK_LINEAR_INTERPOLATION },
        { "VTK_GRID_CUBIC", VTK_CUBIC_INTERPOLATION },
      };

    o = PyInt_FromLong(constants[c].value);
    if (o)
      {
      PyDict_SetItemString(dict, (char *)constants[c].name, o);
      Py_DECREF(o);
      }
    }

}

