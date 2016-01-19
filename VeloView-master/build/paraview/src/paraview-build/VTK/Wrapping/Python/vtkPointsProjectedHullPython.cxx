// python wrapper for vtkPointsProjectedHull
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkPointsProjectedHull.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkPointsProjectedHull(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkPointsProjectedHullNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkPointsNew
extern "C" { PyObject *PyVTKClass_vtkPointsNew(const char *); }
#define DECLARED_PyVTKClass_vtkPointsNew
#endif

static const char **PyvtkPointsProjectedHull_Doc();


static PyObject *
PyvtkPointsProjectedHull_RectangleIntersectionX_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RectangleIntersectionX");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointsProjectedHull *op = static_cast<vtkPointsProjectedHull *>(vp);

  vtkPoints *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPoints"))
    {
    int tempr = (ap.IsBound() ?
      op->RectangleIntersectionX(temp0) :
      op->vtkPointsProjectedHull::RectangleIntersectionX(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkPointsProjectedHull_RectangleIntersectionX_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RectangleIntersectionX");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointsProjectedHull *op = static_cast<vtkPointsProjectedHull *>(vp);

  double temp0;
  double temp1;
  double temp2;
  double temp3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
    {
    int tempr = (ap.IsBound() ?
      op->RectangleIntersectionX(temp0, temp1, temp2, temp3) :
      op->vtkPointsProjectedHull::RectangleIntersectionX(temp0, temp1, temp2, temp3));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkPointsProjectedHull_RectangleIntersectionX(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkPointsProjectedHull_RectangleIntersectionX_s1(self, args);
    case 4:
      return PyvtkPointsProjectedHull_RectangleIntersectionX_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "RectangleIntersectionX");
  return NULL;
}



static PyObject *
PyvtkPointsProjectedHull_RectangleIntersectionY_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RectangleIntersectionY");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointsProjectedHull *op = static_cast<vtkPointsProjectedHull *>(vp);

  vtkPoints *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPoints"))
    {
    int tempr = (ap.IsBound() ?
      op->RectangleIntersectionY(temp0) :
      op->vtkPointsProjectedHull::RectangleIntersectionY(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkPointsProjectedHull_RectangleIntersectionY_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RectangleIntersectionY");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointsProjectedHull *op = static_cast<vtkPointsProjectedHull *>(vp);

  double temp0;
  double temp1;
  double temp2;
  double temp3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
    {
    int tempr = (ap.IsBound() ?
      op->RectangleIntersectionY(temp0, temp1, temp2, temp3) :
      op->vtkPointsProjectedHull::RectangleIntersectionY(temp0, temp1, temp2, temp3));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkPointsProjectedHull_RectangleIntersectionY(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkPointsProjectedHull_RectangleIntersectionY_s1(self, args);
    case 4:
      return PyvtkPointsProjectedHull_RectangleIntersectionY_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "RectangleIntersectionY");
  return NULL;
}



static PyObject *
PyvtkPointsProjectedHull_RectangleIntersectionZ_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RectangleIntersectionZ");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointsProjectedHull *op = static_cast<vtkPointsProjectedHull *>(vp);

  vtkPoints *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPoints"))
    {
    int tempr = (ap.IsBound() ?
      op->RectangleIntersectionZ(temp0) :
      op->vtkPointsProjectedHull::RectangleIntersectionZ(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkPointsProjectedHull_RectangleIntersectionZ_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RectangleIntersectionZ");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointsProjectedHull *op = static_cast<vtkPointsProjectedHull *>(vp);

  double temp0;
  double temp1;
  double temp2;
  double temp3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
    {
    int tempr = (ap.IsBound() ?
      op->RectangleIntersectionZ(temp0, temp1, temp2, temp3) :
      op->vtkPointsProjectedHull::RectangleIntersectionZ(temp0, temp1, temp2, temp3));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkPointsProjectedHull_RectangleIntersectionZ(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkPointsProjectedHull_RectangleIntersectionZ_s1(self, args);
    case 4:
      return PyvtkPointsProjectedHull_RectangleIntersectionZ_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "RectangleIntersectionZ");
  return NULL;
}



static PyObject *
PyvtkPointsProjectedHull_GetCCWHullX(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCCWHullX");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointsProjectedHull *op = static_cast<vtkPointsProjectedHull *>(vp);

  double *temp0 = NULL;
  double *save0 = NULL;
  double small0[8];
  int size0 = 0;
  int temp1;
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

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1))
    {
    ap.SaveArray(temp0, save0, size0);

    int tempr = (ap.IsBound() ?
      op->GetCCWHullX(temp0, temp1) :
      op->vtkPointsProjectedHull::GetCCWHullX(temp0, temp1));

    if (ap.ArrayHasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(0, temp0, size0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  if (temp0 && temp0 != small0)
    {
    delete [] temp0;
    }

  return result;
}


static PyObject *
PyvtkPointsProjectedHull_GetCCWHullY(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCCWHullY");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointsProjectedHull *op = static_cast<vtkPointsProjectedHull *>(vp);

  double *temp0 = NULL;
  double *save0 = NULL;
  double small0[8];
  int size0 = 0;
  int temp1;
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

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1))
    {
    ap.SaveArray(temp0, save0, size0);

    int tempr = (ap.IsBound() ?
      op->GetCCWHullY(temp0, temp1) :
      op->vtkPointsProjectedHull::GetCCWHullY(temp0, temp1));

    if (ap.ArrayHasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(0, temp0, size0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  if (temp0 && temp0 != small0)
    {
    delete [] temp0;
    }

  return result;
}


static PyObject *
PyvtkPointsProjectedHull_GetCCWHullZ(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCCWHullZ");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointsProjectedHull *op = static_cast<vtkPointsProjectedHull *>(vp);

  double *temp0 = NULL;
  double *save0 = NULL;
  double small0[8];
  int size0 = 0;
  int temp1;
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

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1))
    {
    ap.SaveArray(temp0, save0, size0);

    int tempr = (ap.IsBound() ?
      op->GetCCWHullZ(temp0, temp1) :
      op->vtkPointsProjectedHull::GetCCWHullZ(temp0, temp1));

    if (ap.ArrayHasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(0, temp0, size0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  if (temp0 && temp0 != small0)
    {
    delete [] temp0;
    }

  return result;
}


static PyObject *
PyvtkPointsProjectedHull_GetSizeCCWHullX(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSizeCCWHullX");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointsProjectedHull *op = static_cast<vtkPointsProjectedHull *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetSizeCCWHullX() :
      op->vtkPointsProjectedHull::GetSizeCCWHullX());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPointsProjectedHull_GetSizeCCWHullY(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSizeCCWHullY");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointsProjectedHull *op = static_cast<vtkPointsProjectedHull *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetSizeCCWHullY() :
      op->vtkPointsProjectedHull::GetSizeCCWHullY());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPointsProjectedHull_GetSizeCCWHullZ(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSizeCCWHullZ");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointsProjectedHull *op = static_cast<vtkPointsProjectedHull *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetSizeCCWHullZ() :
      op->vtkPointsProjectedHull::GetSizeCCWHullZ());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPointsProjectedHull_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointsProjectedHull *op = static_cast<vtkPointsProjectedHull *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Initialize();
      }
    else
      {
      op->vtkPointsProjectedHull::Initialize();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPointsProjectedHull_Reset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Reset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointsProjectedHull *op = static_cast<vtkPointsProjectedHull *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Reset();
      }
    else
      {
      op->vtkPointsProjectedHull::Reset();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPointsProjectedHull_Update(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Update");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointsProjectedHull *op = static_cast<vtkPointsProjectedHull *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Update();
      }
    else
      {
      op->vtkPointsProjectedHull::Update();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkPointsProjectedHull_Methods[] = {
  {(char*)"RectangleIntersectionX", PyvtkPointsProjectedHull_RectangleIntersectionX, METH_VARARGS,
   (char*)"V.RectangleIntersectionX(vtkPoints) -> int\nC++: int RectangleIntersectionX(vtkPoints *R)\nV.RectangleIntersectionX(float, float, float, float) -> int\nC++: int RectangleIntersectionX(double ymin, double ymax,\n    double zmin, double zmax)\n\ndetermine whether the resulting rectangle intersects the\n  convex hull of the projection of the points along that axis.\n"},
  {(char*)"RectangleIntersectionY", PyvtkPointsProjectedHull_RectangleIntersectionY, METH_VARARGS,
   (char*)"V.RectangleIntersectionY(vtkPoints) -> int\nC++: int RectangleIntersectionY(vtkPoints *R)\nV.RectangleIntersectionY(float, float, float, float) -> int\nC++: int RectangleIntersectionY(double zmin, double zmax,\n    double xmin, double xmax)\n\nof the parallel projection along the Y axis of the points\n"},
  {(char*)"RectangleIntersectionZ", PyvtkPointsProjectedHull_RectangleIntersectionZ, METH_VARARGS,
   (char*)"V.RectangleIntersectionZ(vtkPoints) -> int\nC++: int RectangleIntersectionZ(vtkPoints *R)\nV.RectangleIntersectionZ(float, float, float, float) -> int\nC++: int RectangleIntersectionZ(double xmin, double xmax,\n    double ymin, double ymax)\n\nof the parallel projection along the Z axis of the points\n"},
  {(char*)"GetCCWHullX", PyvtkPointsProjectedHull_GetCCWHullX, METH_VARARGS,
   (char*)"V.GetCCWHullX([float, ...], int) -> int\nC++: int GetCCWHullX(double *pts, int len)\n\nReturns the coordinates (y,z) of the points in the convex hull\n  of the projection of the points down the positive x-axis.  pts\nhas\n  storage for len*2 values.\n"},
  {(char*)"GetCCWHullY", PyvtkPointsProjectedHull_GetCCWHullY, METH_VARARGS,
   (char*)"V.GetCCWHullY([float, ...], int) -> int\nC++: int GetCCWHullY(double *pts, int len)\n\nReturns the coordinates (z, x) of the points in the convex hull\n  of the projection of the points down the positive y-axis.  pts\nhas\n  storage for len*2 values.\n"},
  {(char*)"GetCCWHullZ", PyvtkPointsProjectedHull_GetCCWHullZ, METH_VARARGS,
   (char*)"V.GetCCWHullZ([float, ...], int) -> int\nC++: int GetCCWHullZ(double *pts, int len)\n\nReturns the coordinates (x, y) of the points in the convex hull\n  of the projection of the points down the positive z-axis.  pts\nhas\n  storage for len*2 values.\n"},
  {(char*)"GetSizeCCWHullX", PyvtkPointsProjectedHull_GetSizeCCWHullX, METH_VARARGS,
   (char*)"V.GetSizeCCWHullX() -> int\nC++: int GetSizeCCWHullX()\n\nReturns the number of points in the convex hull of the projection\n of the points down the positive x-axis\n"},
  {(char*)"GetSizeCCWHullY", PyvtkPointsProjectedHull_GetSizeCCWHullY, METH_VARARGS,
   (char*)"V.GetSizeCCWHullY() -> int\nC++: int GetSizeCCWHullY()\n\nReturns the number of points in the convex hull of the projection\n of the points down the positive y-axis\n"},
  {(char*)"GetSizeCCWHullZ", PyvtkPointsProjectedHull_GetSizeCCWHullZ, METH_VARARGS,
   (char*)"V.GetSizeCCWHullZ() -> int\nC++: int GetSizeCCWHullZ()\n\nReturns the number of points in the convex hull of the projection\n of the points down the positive z-axis\n"},
  {(char*)"Initialize", PyvtkPointsProjectedHull_Initialize, METH_VARARGS,
   (char*)"V.Initialize()\nC++: void Initialize()\n\n"},
  {(char*)"Reset", PyvtkPointsProjectedHull_Reset, METH_VARARGS,
   (char*)"V.Reset()\nC++: void Reset()\n\n"},
  {(char*)"Update", PyvtkPointsProjectedHull_Update, METH_VARARGS,
   (char*)"V.Update()\nC++: void Update()\n\nForces recalculation of convex hulls, use this if\n  you delete/add points\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkPointsProjectedHull_StaticNew()
{
  return vtkPointsProjectedHull::New();
}

PyObject *PyVTKClass_vtkPointsProjectedHullNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkPointsProjectedHull_StaticNew,
    PyvtkPointsProjectedHull_Methods,
    "vtkPointsProjectedHull", modulename,
    NULL, NULL,
    PyvtkPointsProjectedHull_Doc(),
    PyVTKClass_vtkPointsNew(modulename));
  return cls;
}

const char **PyvtkPointsProjectedHull_Doc()
{
  static const char *docstring[] = {
    "vtkPointsProjectedHull - the convex hull of the orthogonal\n\n",
    "Superclass: vtkPoints\n\n",
    "a subclass of vtkPoints, it maintains the counter clockwise\n   convex hull of the points (projected orthogonally in the\n   three coordinate directions) and has a method to\n   test for intersection of that hull with an axis aligned\n   rectangle.  This is used for intersection tests of 3D volumes.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPointsProjectedHull(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPointsProjectedHullNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPointsProjectedHull", o) != 0)
    {
    Py_DECREF(o);
    }

}

