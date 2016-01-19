// python wrapper for vtkPolygonalSurfaceContourLineInterpolator
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkPolygonalSurfaceContourLineInterpolator.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkPolygonalSurfaceContourLineInterpolator(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkPolygonalSurfaceContourLineInterpolatorNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkPolyDataContourLineInterpolatorNew
extern "C" { PyObject *PyVTKClass_vtkPolyDataContourLineInterpolatorNew(const char *); }
#define DECLARED_PyVTKClass_vtkPolyDataContourLineInterpolatorNew
#endif

static const char **PyvtkPolygonalSurfaceContourLineInterpolator_Doc();


static PyObject *
PyvtkPolygonalSurfaceContourLineInterpolator_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolygonalSurfaceContourLineInterpolator *op = static_cast<vtkPolygonalSurfaceContourLineInterpolator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkPolygonalSurfaceContourLineInterpolator::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPolygonalSurfaceContourLineInterpolator_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolygonalSurfaceContourLineInterpolator *op = static_cast<vtkPolygonalSurfaceContourLineInterpolator *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPolygonalSurfaceContourLineInterpolator::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPolygonalSurfaceContourLineInterpolator_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolygonalSurfaceContourLineInterpolator *op = static_cast<vtkPolygonalSurfaceContourLineInterpolator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPolygonalSurfaceContourLineInterpolator *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPolygonalSurfaceContourLineInterpolator::NewInstance());

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
PyvtkPolygonalSurfaceContourLineInterpolator_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkPolygonalSurfaceContourLineInterpolator *tempr = vtkPolygonalSurfaceContourLineInterpolator::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPolygonalSurfaceContourLineInterpolator_InterpolateLine(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InterpolateLine");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolygonalSurfaceContourLineInterpolator *op = static_cast<vtkPolygonalSurfaceContourLineInterpolator *>(vp);

  vtkRenderer *temp0 = NULL;
  vtkContourRepresentation *temp1 = NULL;
  int temp2;
  int temp3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(4) &&
      ap.GetVTKObject(temp0, "vtkRenderer") &&
      ap.GetVTKObject(temp1, "vtkContourRepresentation") &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
    {
    int tempr = (ap.IsBound() ?
      op->InterpolateLine(temp0, temp1, temp2, temp3) :
      op->vtkPolygonalSurfaceContourLineInterpolator::InterpolateLine(temp0, temp1, temp2, temp3));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPolygonalSurfaceContourLineInterpolator_UpdateNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolygonalSurfaceContourLineInterpolator *op = static_cast<vtkPolygonalSurfaceContourLineInterpolator *>(vp);

  vtkRenderer *temp0 = NULL;
  vtkContourRepresentation *temp1 = NULL;
  double *temp2 = NULL;
  double *save2 = NULL;
  double small2[8];
  int size2 = 0;
  int temp3;
  PyObject *result = NULL;

  if (op)
    {
    size2 = ap.GetArgSize(2);
    temp2 = small2;
    if (size2 > 4)
      {
      temp2 = new double[2*size2];
      }
    save2 = &temp2[size2];
    }

  if (op && ap.CheckArgCount(4) &&
      ap.GetVTKObject(temp0, "vtkRenderer") &&
      ap.GetVTKObject(temp1, "vtkContourRepresentation") &&
      ap.GetArray(temp2, size2) &&
      ap.GetValue(temp3))
    {
    ap.SaveArray(temp2, save2, size2);

    int tempr = (ap.IsBound() ?
      op->UpdateNode(temp0, temp1, temp2, temp3) :
      op->vtkPolygonalSurfaceContourLineInterpolator::UpdateNode(temp0, temp1, temp2, temp3));

    if (ap.ArrayHasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(2, temp2, size2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  if (temp2 && temp2 != small2)
    {
    delete [] temp2;
    }

  return result;
}


static PyObject *
PyvtkPolygonalSurfaceContourLineInterpolator_SetDistanceOffset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDistanceOffset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolygonalSurfaceContourLineInterpolator *op = static_cast<vtkPolygonalSurfaceContourLineInterpolator *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetDistanceOffset(temp0);
      }
    else
      {
      op->vtkPolygonalSurfaceContourLineInterpolator::SetDistanceOffset(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPolygonalSurfaceContourLineInterpolator_GetDistanceOffset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDistanceOffset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolygonalSurfaceContourLineInterpolator *op = static_cast<vtkPolygonalSurfaceContourLineInterpolator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetDistanceOffset() :
      op->vtkPolygonalSurfaceContourLineInterpolator::GetDistanceOffset());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPolygonalSurfaceContourLineInterpolator_GetContourPointIds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetContourPointIds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolygonalSurfaceContourLineInterpolator *op = static_cast<vtkPolygonalSurfaceContourLineInterpolator *>(vp);

  vtkContourRepresentation *temp0 = NULL;
  vtkIdList *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkContourRepresentation") &&
      ap.GetVTKObject(temp1, "vtkIdList"))
    {
    if (ap.IsBound())
      {
      op->GetContourPointIds(temp0, temp1);
      }
    else
      {
      op->vtkPolygonalSurfaceContourLineInterpolator::GetContourPointIds(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkPolygonalSurfaceContourLineInterpolator_Methods[] = {
  {(char*)"GetClassName", PyvtkPolygonalSurfaceContourLineInterpolator_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\nStandard methods for instances of this class.\n"},
  {(char*)"IsA", PyvtkPolygonalSurfaceContourLineInterpolator_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\nStandard methods for instances of this class.\n"},
  {(char*)"NewInstance", PyvtkPolygonalSurfaceContourLineInterpolator_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkPolygonalSurfaceContourLineInterpolator\nC++: vtkPolygonalSurfaceContourLineInterpolator *NewInstance()\n\nStandard methods for instances of this class.\n"},
  {(char*)"SafeDownCast", PyvtkPolygonalSurfaceContourLineInterpolator_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject)\n    -> vtkPolygonalSurfaceContourLineInterpolator\nC++: vtkPolygonalSurfaceContourLineInterpolator *SafeDownCast(\n    vtkObject* o)\n\nStandard methods for instances of this class.\n"},
  {(char*)"InterpolateLine", PyvtkPolygonalSurfaceContourLineInterpolator_InterpolateLine, METH_VARARGS,
   (char*)"V.InterpolateLine(vtkRenderer, vtkContourRepresentation, int, int)\n     -> int\nC++: virtual int InterpolateLine(vtkRenderer *ren,\n    vtkContourRepresentation *rep, int idx1, int idx2)\n\nSubclasses that wish to interpolate a line segment must implement\nthis. For instance vtkBezierContourLineInterpolator adds nodes\nbetween idx1 and idx2, that allow the contour to adhere to a\nbezier curve.\n"},
  {(char*)"UpdateNode", PyvtkPolygonalSurfaceContourLineInterpolator_UpdateNode, METH_VARARGS,
   (char*)"V.UpdateNode(vtkRenderer, vtkContourRepresentation, [float, ...],\n    int) -> int\nC++: virtual int UpdateNode(vtkRenderer *,\n    vtkContourRepresentation *, double *node, int idx)\n\nThe interpolator is given a chance to update the node.\nvtkImageContourLineInterpolator updates the idx'th node in the\ncontour, so it automatically sticks to edges in the vicinity as\nthe user constructs the contour. Returns 0 if the node (world\nposition) is unchanged.\n"},
  {(char*)"SetDistanceOffset", PyvtkPolygonalSurfaceContourLineInterpolator_SetDistanceOffset, METH_VARARGS,
   (char*)"V.SetDistanceOffset(float)\nC++: void SetDistanceOffset(double a)\n\nHeight offset at which points may be placed on the polygonal\nsurface. If you specify a non-zero value here, be sure to have\ncomputed vertex normals on your input polygonal data. (easily\ndone with vtkPolyDataNormals).\n"},
  {(char*)"GetDistanceOffset", PyvtkPolygonalSurfaceContourLineInterpolator_GetDistanceOffset, METH_VARARGS,
   (char*)"V.GetDistanceOffset() -> float\nC++: double GetDistanceOffset()\n\nHeight offset at which points may be placed on the polygonal\nsurface. If you specify a non-zero value here, be sure to have\ncomputed vertex normals on your input polygonal data. (easily\ndone with vtkPolyDataNormals).\n"},
  {(char*)"GetContourPointIds", PyvtkPolygonalSurfaceContourLineInterpolator_GetContourPointIds, METH_VARARGS,
   (char*)"V.GetContourPointIds(vtkContourRepresentation, vtkIdList)\nC++: void GetContourPointIds(vtkContourRepresentation *rep,\n    vtkIdList *idList)\n\nGet the contour point ids. These point ids correspond to those on\nthe polygonal surface\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkPolygonalSurfaceContourLineInterpolator_StaticNew()
{
  return vtkPolygonalSurfaceContourLineInterpolator::New();
}

PyObject *PyVTKClass_vtkPolygonalSurfaceContourLineInterpolatorNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkPolygonalSurfaceContourLineInterpolator_StaticNew,
    PyvtkPolygonalSurfaceContourLineInterpolator_Methods,
    "vtkPolygonalSurfaceContourLineInterpolator", modulename,
    NULL, NULL,
    PyvtkPolygonalSurfaceContourLineInterpolator_Doc(),
    PyVTKClass_vtkPolyDataContourLineInterpolatorNew(modulename));
  return cls;
}

const char **PyvtkPolygonalSurfaceContourLineInterpolator_Doc()
{
  static const char *docstring[] = {
    "vtkPolygonalSurfaceContourLineInterpolator - Contour interpolator for\nto place points on polygonal surfaces.\n\n",
    "Superclass: vtkPolyDataContourLineInterpolator\n\n",
    "vtkPolygonalSurfaceContourLineInterpolator interpolates and places\ncontour points on polygonal surfaces. The class interpolates nodes by\ncomputing a graph geodesic laying on the polygonal data. By \\em graph\nGeodesic, we mean that the line interpolating the two end points\ntraverses along on the mesh edges so as to form the shortest path. A\nDijkstra algorithm is used to compute the path. See\nvtkDijk",
    "straGraphGeodesicPath.\n\nThe class is mean to be used in conjunction with\nvtkPolygonalSurfacePointPlacer. The reason for this weak coupling is\na performance issue, both classes need to perform a cell pick, and\ncoupling avoids multiple cell picks (cell picks are slow).\n\nCaveats:\n\nYou should have computed cell normals for the input polydata.\n\nSee Also:\n\nvtkDijkstraGraphGeodesicPath, vtkPolyDataNormal",
    "s\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPolygonalSurfaceContourLineInterpolator(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPolygonalSurfaceContourLineInterpolatorNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPolygonalSurfaceContourLineInterpolator", o) != 0)
    {
    Py_DECREF(o);
    }

}

