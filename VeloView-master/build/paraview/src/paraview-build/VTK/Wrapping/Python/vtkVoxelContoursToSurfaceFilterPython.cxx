// python wrapper for vtkVoxelContoursToSurfaceFilter
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkVoxelContoursToSurfaceFilter.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkVoxelContoursToSurfaceFilter(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkVoxelContoursToSurfaceFilterNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkPolyDataAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
#endif

static const char **PyvtkVoxelContoursToSurfaceFilter_Doc();


static PyObject *
PyvtkVoxelContoursToSurfaceFilter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVoxelContoursToSurfaceFilter *op = static_cast<vtkVoxelContoursToSurfaceFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkVoxelContoursToSurfaceFilter::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVoxelContoursToSurfaceFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVoxelContoursToSurfaceFilter *op = static_cast<vtkVoxelContoursToSurfaceFilter *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkVoxelContoursToSurfaceFilter::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVoxelContoursToSurfaceFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVoxelContoursToSurfaceFilter *op = static_cast<vtkVoxelContoursToSurfaceFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkVoxelContoursToSurfaceFilter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkVoxelContoursToSurfaceFilter::NewInstance());

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
PyvtkVoxelContoursToSurfaceFilter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkVoxelContoursToSurfaceFilter *tempr = vtkVoxelContoursToSurfaceFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVoxelContoursToSurfaceFilter_SetMemoryLimitInBytes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMemoryLimitInBytes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVoxelContoursToSurfaceFilter *op = static_cast<vtkVoxelContoursToSurfaceFilter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetMemoryLimitInBytes(temp0);
      }
    else
      {
      op->vtkVoxelContoursToSurfaceFilter::SetMemoryLimitInBytes(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkVoxelContoursToSurfaceFilter_GetMemoryLimitInBytes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMemoryLimitInBytes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVoxelContoursToSurfaceFilter *op = static_cast<vtkVoxelContoursToSurfaceFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetMemoryLimitInBytes() :
      op->vtkVoxelContoursToSurfaceFilter::GetMemoryLimitInBytes());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVoxelContoursToSurfaceFilter_SetSpacing_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSpacing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVoxelContoursToSurfaceFilter *op = static_cast<vtkVoxelContoursToSurfaceFilter *>(vp);

  double temp0;
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
      op->SetSpacing(temp0, temp1, temp2);
      }
    else
      {
      op->vtkVoxelContoursToSurfaceFilter::SetSpacing(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkVoxelContoursToSurfaceFilter_SetSpacing_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSpacing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVoxelContoursToSurfaceFilter *op = static_cast<vtkVoxelContoursToSurfaceFilter *>(vp);

  double temp0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetSpacing(temp0);
      }
    else
      {
      op->vtkVoxelContoursToSurfaceFilter::SetSpacing(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkVoxelContoursToSurfaceFilter_SetSpacing(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkVoxelContoursToSurfaceFilter_SetSpacing_s1(self, args);
    case 1:
      return PyvtkVoxelContoursToSurfaceFilter_SetSpacing_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetSpacing");
  return NULL;
}



static PyObject *
PyvtkVoxelContoursToSurfaceFilter_GetSpacing(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSpacing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVoxelContoursToSurfaceFilter *op = static_cast<vtkVoxelContoursToSurfaceFilter *>(vp);

  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetSpacing() :
      op->vtkVoxelContoursToSurfaceFilter::GetSpacing());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}

static PyMethodDef PyvtkVoxelContoursToSurfaceFilter_Methods[] = {
  {(char*)"GetClassName", PyvtkVoxelContoursToSurfaceFilter_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkVoxelContoursToSurfaceFilter_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkVoxelContoursToSurfaceFilter_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkVoxelContoursToSurfaceFilter\nC++: vtkVoxelContoursToSurfaceFilter *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkVoxelContoursToSurfaceFilter_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkVoxelContoursToSurfaceFilter\nC++: vtkVoxelContoursToSurfaceFilter *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetMemoryLimitInBytes", PyvtkVoxelContoursToSurfaceFilter_SetMemoryLimitInBytes, METH_VARARGS,
   (char*)"V.SetMemoryLimitInBytes(int)\nC++: void SetMemoryLimitInBytes(int a)\n\nSet / Get the memory limit in bytes for this filter. This is the\nlimit of the size of the structured points data set that is\ncreated for intermediate processing. The data will be streamed\nthrough this volume in as many pieces as necessary.\n"},
  {(char*)"GetMemoryLimitInBytes", PyvtkVoxelContoursToSurfaceFilter_GetMemoryLimitInBytes, METH_VARARGS,
   (char*)"V.GetMemoryLimitInBytes() -> int\nC++: int GetMemoryLimitInBytes()\n\nSet / Get the memory limit in bytes for this filter. This is the\nlimit of the size of the structured points data set that is\ncreated for intermediate processing. The data will be streamed\nthrough this volume in as many pieces as necessary.\n"},
  {(char*)"SetSpacing", PyvtkVoxelContoursToSurfaceFilter_SetSpacing, METH_VARARGS,
   (char*)"V.SetSpacing(float, float, float)\nC++: void SetSpacing(double, double, double)\nV.SetSpacing((float, float, float))\nC++: void SetSpacing(double a[3])\n\n"},
  {(char*)"GetSpacing", PyvtkVoxelContoursToSurfaceFilter_GetSpacing, METH_VARARGS,
   (char*)"V.GetSpacing() -> (float, float, float)\nC++: double *GetSpacing()\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkVoxelContoursToSurfaceFilter_StaticNew()
{
  return vtkVoxelContoursToSurfaceFilter::New();
}

PyObject *PyVTKClass_vtkVoxelContoursToSurfaceFilterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkVoxelContoursToSurfaceFilter_StaticNew,
    PyvtkVoxelContoursToSurfaceFilter_Methods,
    "vtkVoxelContoursToSurfaceFilter", modulename,
    NULL, NULL,
    PyvtkVoxelContoursToSurfaceFilter_Doc(),
    PyVTKClass_vtkPolyDataAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkVoxelContoursToSurfaceFilter_Doc()
{
  static const char *docstring[] = {
    "vtkVoxelContoursToSurfaceFilter - create surface from contours\n\n",
    "Superclass: vtkPolyDataAlgorithm\n\n",
    "vtkVoxelContoursToSurfaceFilter is a filter that takes contours and\nproduces surfaces. There are some restrictions for the contours:\n\n- The contours are input as vtkPolyData, with the contours being\n  polys in the vtkPolyData.\n- The contours lie on XY planes - each contour has a constant Z\n- The contours are ordered in the polys of the vtkPolyData such that\n  all contours on the first (lowest) XY ",
    "plane are first, then\n  continuing in order of increasing Z value.\n- The X, Y and Z coordinates are all integer values.\n- The desired sampling of the contour data is 1x1x1 - Aspect can be\n  used to control the aspect ratio in the output polygonal dataset.\n\nThis filter takes the contours and produces a structured points\ndataset of signed floating point number indicating distance from a\ncontour. A c",
    "ontouring filter is then applied to generate 3D surfaces\nfrom a stack of 2D contour distance slices. This is done in a\nstreaming fashion so as not to use to much memory.\n\nSee Also:\n\nvtkPolyDataAlgorithm\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkVoxelContoursToSurfaceFilter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkVoxelContoursToSurfaceFilterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkVoxelContoursToSurfaceFilter", o) != 0)
    {
    Py_DECREF(o);
    }

}

