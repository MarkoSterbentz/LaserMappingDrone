// python wrapper for vtkMarchingSquares
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkMarchingSquares.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkMarchingSquares(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkMarchingSquaresNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkPolyDataAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
#endif

static const char **PyvtkMarchingSquares_Doc();


static PyObject *
PyvtkMarchingSquares_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMarchingSquares *op = static_cast<vtkMarchingSquares *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkMarchingSquares::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMarchingSquares_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMarchingSquares *op = static_cast<vtkMarchingSquares *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkMarchingSquares::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMarchingSquares_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMarchingSquares *op = static_cast<vtkMarchingSquares *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkMarchingSquares *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkMarchingSquares::NewInstance());

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
PyvtkMarchingSquares_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkMarchingSquares *tempr = vtkMarchingSquares::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMarchingSquares_SetImageRange_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetImageRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMarchingSquares *op = static_cast<vtkMarchingSquares *>(vp);

  int temp0[6];
  const int size0 = 6;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetImageRange(temp0);
      }
    else
      {
      op->vtkMarchingSquares::SetImageRange(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkMarchingSquares_SetImageRange_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetImageRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMarchingSquares *op = static_cast<vtkMarchingSquares *>(vp);

  int temp0;
  int temp1;
  int temp2;
  int temp3;
  int temp4;
  int temp5;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(6) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5))
    {
    if (ap.IsBound())
      {
      op->SetImageRange(temp0, temp1, temp2, temp3, temp4, temp5);
      }
    else
      {
      op->vtkMarchingSquares::SetImageRange(temp0, temp1, temp2, temp3, temp4, temp5);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkMarchingSquares_SetImageRange(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkMarchingSquares_SetImageRange_s1(self, args);
    case 6:
      return PyvtkMarchingSquares_SetImageRange_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetImageRange");
  return NULL;
}



static PyObject *
PyvtkMarchingSquares_GetImageRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetImageRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMarchingSquares *op = static_cast<vtkMarchingSquares *>(vp);

  int sizer = 6;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int *tempr = (ap.IsBound() ?
      op->GetImageRange() :
      op->vtkMarchingSquares::GetImageRange());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkMarchingSquares_SetValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMarchingSquares *op = static_cast<vtkMarchingSquares *>(vp);

  int temp0;
  double temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetValue(temp0, temp1);
      }
    else
      {
      op->vtkMarchingSquares::SetValue(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMarchingSquares_GetValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMarchingSquares *op = static_cast<vtkMarchingSquares *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    double tempr = (ap.IsBound() ?
      op->GetValue(temp0) :
      op->vtkMarchingSquares::GetValue(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMarchingSquares_GetValues_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMarchingSquares *op = static_cast<vtkMarchingSquares *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetValues() :
      op->vtkMarchingSquares::GetValues());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkMarchingSquares_GetValues_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMarchingSquares *op = static_cast<vtkMarchingSquares *>(vp);

  double *temp0 = NULL;
  double *save0 = NULL;
  double small0[8];
  int size0 = 0;
  PyObject *result = NULL;

  if (op)
    {
    size0 = ap.GetArgSize(0);
    temp0 = small0;
    if (size0 > 4)
      {
      temp0 = new double[2*size0];
      }
    save0 = &temp0[size0];
    }

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    if (ap.IsBound())
      {
      op->GetValues(temp0);
      }
    else
      {
      op->vtkMarchingSquares::GetValues(temp0);
      }

    if (ap.ArrayHasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(0, temp0, size0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  if (temp0 && temp0 != small0)
    {
    delete [] temp0;
    }

  return result;
}

static PyObject *
PyvtkMarchingSquares_GetValues(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 0:
      return PyvtkMarchingSquares_GetValues_s1(self, args);
    case 1:
      return PyvtkMarchingSquares_GetValues_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetValues");
  return NULL;
}



static PyObject *
PyvtkMarchingSquares_SetNumberOfContours(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfContours");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMarchingSquares *op = static_cast<vtkMarchingSquares *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetNumberOfContours(temp0);
      }
    else
      {
      op->vtkMarchingSquares::SetNumberOfContours(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMarchingSquares_GetNumberOfContours(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfContours");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMarchingSquares *op = static_cast<vtkMarchingSquares *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfContours() :
      op->vtkMarchingSquares::GetNumberOfContours());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMarchingSquares_GenerateValues_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateValues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMarchingSquares *op = static_cast<vtkMarchingSquares *>(vp);

  int temp0;
  double temp1[2];
  double save1[2];
  const int size1 = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
    {
    ap.SaveArray(temp1, save1, size1);

    if (ap.IsBound())
      {
      op->GenerateValues(temp0, temp1);
      }
    else
      {
      op->vtkMarchingSquares::GenerateValues(temp0, temp1);
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
PyvtkMarchingSquares_GenerateValues_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateValues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMarchingSquares *op = static_cast<vtkMarchingSquares *>(vp);

  int temp0;
  double temp1;
  double temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      op->GenerateValues(temp0, temp1, temp2);
      }
    else
      {
      op->vtkMarchingSquares::GenerateValues(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkMarchingSquares_GenerateValues(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkMarchingSquares_GenerateValues_s1(self, args);
    case 3:
      return PyvtkMarchingSquares_GenerateValues_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GenerateValues");
  return NULL;
}



static PyObject *
PyvtkMarchingSquares_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMarchingSquares *op = static_cast<vtkMarchingSquares *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMTime() :
      op->vtkMarchingSquares::GetMTime());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMarchingSquares_SetLocator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLocator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMarchingSquares *op = static_cast<vtkMarchingSquares *>(vp);

  vtkIncrementalPointLocator *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkIncrementalPointLocator"))
    {
    if (ap.IsBound())
      {
      op->SetLocator(temp0);
      }
    else
      {
      op->vtkMarchingSquares::SetLocator(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMarchingSquares_GetLocator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLocator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMarchingSquares *op = static_cast<vtkMarchingSquares *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkIncrementalPointLocator *tempr = (ap.IsBound() ?
      op->GetLocator() :
      op->vtkMarchingSquares::GetLocator());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMarchingSquares_CreateDefaultLocator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateDefaultLocator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMarchingSquares *op = static_cast<vtkMarchingSquares *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->CreateDefaultLocator();
      }
    else
      {
      op->vtkMarchingSquares::CreateDefaultLocator();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkMarchingSquares_Methods[] = {
  {(char*)"GetClassName", PyvtkMarchingSquares_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkMarchingSquares_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkMarchingSquares_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkMarchingSquares\nC++: vtkMarchingSquares *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkMarchingSquares_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkMarchingSquares\nC++: vtkMarchingSquares *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetImageRange", PyvtkMarchingSquares_SetImageRange, METH_VARARGS,
   (char*)"V.SetImageRange((int, int, int, int, int, int))\nC++: void SetImageRange(int a[6])\nV.SetImageRange(int, int, int, int, int, int)\nC++: void SetImageRange(int imin, int imax, int jmin, int jmax,\n    int kmin, int kmax)\n\nSet/Get the i-j-k index range which define a plane on which to\ngenerate contour lines. Using this ivar it is possible to input a\n3D volume directly and then generate contour lines on one of the\ni-j-k planes, or a portion of a plane.\n"},
  {(char*)"GetImageRange", PyvtkMarchingSquares_GetImageRange, METH_VARARGS,
   (char*)"V.GetImageRange() -> (int, int, int, int, int, int)\nC++: int *GetImageRange()\n\nSet/Get the i-j-k index range which define a plane on which to\ngenerate contour lines. Using this ivar it is possible to input a\n3D volume directly and then generate contour lines on one of the\ni-j-k planes, or a portion of a plane.\n"},
  {(char*)"SetValue", PyvtkMarchingSquares_SetValue, METH_VARARGS,
   (char*)"V.SetValue(int, float)\nC++: void SetValue(int i, double value)\n\nMethods to set contour values\n"},
  {(char*)"GetValue", PyvtkMarchingSquares_GetValue, METH_VARARGS,
   (char*)"V.GetValue(int) -> float\nC++: double GetValue(int i)\n\nMethods to set contour values\n"},
  {(char*)"GetValues", PyvtkMarchingSquares_GetValues, METH_VARARGS,
   (char*)"V.GetValues() -> (float, ...)\nC++: double *GetValues()\nV.GetValues([float, ...])\nC++: void GetValues(double *contourValues)\n\nMethods to set contour values\n"},
  {(char*)"SetNumberOfContours", PyvtkMarchingSquares_SetNumberOfContours, METH_VARARGS,
   (char*)"V.SetNumberOfContours(int)\nC++: void SetNumberOfContours(int number)\n\nMethods to set contour values\n"},
  {(char*)"GetNumberOfContours", PyvtkMarchingSquares_GetNumberOfContours, METH_VARARGS,
   (char*)"V.GetNumberOfContours() -> int\nC++: int GetNumberOfContours()\n\nMethods to set contour values\n"},
  {(char*)"GenerateValues", PyvtkMarchingSquares_GenerateValues, METH_VARARGS,
   (char*)"V.GenerateValues(int, [float, float])\nC++: void GenerateValues(int numContours, double range[2])\nV.GenerateValues(int, float, float)\nC++: void GenerateValues(int numContours, double rangeStart,\n    double rangeEnd)\n\nMethods to set contour values\n"},
  {(char*)"GetMTime", PyvtkMarchingSquares_GetMTime, METH_VARARGS,
   (char*)"V.GetMTime() -> int\nC++: unsigned long int GetMTime()\n\nBecause we delegate to vtkContourValues\n"},
  {(char*)"SetLocator", PyvtkMarchingSquares_SetLocator, METH_VARARGS,
   (char*)"V.SetLocator(vtkIncrementalPointLocator)\nC++: void SetLocator(vtkIncrementalPointLocator *locator)\n\n"},
  {(char*)"GetLocator", PyvtkMarchingSquares_GetLocator, METH_VARARGS,
   (char*)"V.GetLocator() -> vtkIncrementalPointLocator\nC++: vtkIncrementalPointLocator *GetLocator()\n\n"},
  {(char*)"CreateDefaultLocator", PyvtkMarchingSquares_CreateDefaultLocator, METH_VARARGS,
   (char*)"V.CreateDefaultLocator()\nC++: void CreateDefaultLocator()\n\nCreate default locator. Used to create one when none is\nspecified. The locator is used to merge coincident points.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkMarchingSquares_StaticNew()
{
  return vtkMarchingSquares::New();
}

PyObject *PyVTKClass_vtkMarchingSquaresNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkMarchingSquares_StaticNew,
    PyvtkMarchingSquares_Methods,
    "vtkMarchingSquares", modulename,
    NULL, NULL,
    PyvtkMarchingSquares_Doc(),
    PyVTKClass_vtkPolyDataAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkMarchingSquares_Doc()
{
  static const char *docstring[] = {
    "vtkMarchingSquares - generate isoline(s) from structured points set\n\n",
    "Superclass: vtkPolyDataAlgorithm\n\n",
    "vtkMarchingSquares is a filter that takes as input a structured\npoints set and generates on output one or more isolines.  One or more\ncontour values must be specified to generate the isolines. \nAlternatively, you can specify a min/max scalar range and the number\nof contours to generate a series of evenly spaced contour values.\n\nTo generate contour lines the input data must be of topological\ndimens",
    "ion 2 (i.e., an image). If not, you can use the ImageRange ivar\nto select an image plane from an input volume. This avoids having to\nextract a plane first (using vtkExtractSubVolume).  The filter deals\nwith this by first trying to use the input data directly, and if not\na 2D image, then uses the ImageRange ivar to reduce it to an image.\n\nCaveats:\n\nThis filter is specialized to images. If you are i",
    "nterested in\ncontouring other types of data, use the general vtkContourFilter.\n\nSee Also:\n\nvtkContourFilter vtkMarchingCubes vtkSliceCubes vtkDividingCubes\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkMarchingSquares(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkMarchingSquaresNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkMarchingSquares", o) != 0)
    {
    Py_DECREF(o);
    }

}

