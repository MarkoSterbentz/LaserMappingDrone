// python wrapper for vtkDijkstraImageContourLineInterpolator
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkDijkstraImageContourLineInterpolator.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkDijkstraImageContourLineInterpolator(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkDijkstraImageContourLineInterpolatorNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkContourLineInterpolatorNew
extern "C" { PyObject *PyVTKClass_vtkContourLineInterpolatorNew(const char *); }
#define DECLARED_PyVTKClass_vtkContourLineInterpolatorNew
#endif

static const char **PyvtkDijkstraImageContourLineInterpolator_Doc();


static PyObject *
PyvtkDijkstraImageContourLineInterpolator_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDijkstraImageContourLineInterpolator *op = static_cast<vtkDijkstraImageContourLineInterpolator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkDijkstraImageContourLineInterpolator::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDijkstraImageContourLineInterpolator_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDijkstraImageContourLineInterpolator *op = static_cast<vtkDijkstraImageContourLineInterpolator *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkDijkstraImageContourLineInterpolator::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDijkstraImageContourLineInterpolator_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDijkstraImageContourLineInterpolator *op = static_cast<vtkDijkstraImageContourLineInterpolator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkDijkstraImageContourLineInterpolator *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkDijkstraImageContourLineInterpolator::NewInstance());

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
PyvtkDijkstraImageContourLineInterpolator_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkDijkstraImageContourLineInterpolator *tempr = vtkDijkstraImageContourLineInterpolator::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDijkstraImageContourLineInterpolator_InterpolateLine(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InterpolateLine");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDijkstraImageContourLineInterpolator *op = static_cast<vtkDijkstraImageContourLineInterpolator *>(vp);

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
      op->vtkDijkstraImageContourLineInterpolator::InterpolateLine(temp0, temp1, temp2, temp3));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDijkstraImageContourLineInterpolator_SetCostImage(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCostImage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDijkstraImageContourLineInterpolator *op = static_cast<vtkDijkstraImageContourLineInterpolator *>(vp);

  vtkImageData *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkImageData"))
    {
    if (ap.IsBound())
      {
      op->SetCostImage(temp0);
      }
    else
      {
      op->vtkDijkstraImageContourLineInterpolator::SetCostImage(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDijkstraImageContourLineInterpolator_GetCostImage(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCostImage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDijkstraImageContourLineInterpolator *op = static_cast<vtkDijkstraImageContourLineInterpolator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkImageData *tempr = (ap.IsBound() ?
      op->GetCostImage() :
      op->vtkDijkstraImageContourLineInterpolator::GetCostImage());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDijkstraImageContourLineInterpolator_GetDijkstraImageGeodesicPath(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDijkstraImageGeodesicPath");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDijkstraImageContourLineInterpolator *op = static_cast<vtkDijkstraImageContourLineInterpolator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkDijkstraImageGeodesicPath *tempr = (ap.IsBound() ?
      op->GetDijkstraImageGeodesicPath() :
      op->vtkDijkstraImageContourLineInterpolator::GetDijkstraImageGeodesicPath());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkDijkstraImageContourLineInterpolator_Methods[] = {
  {(char*)"GetClassName", PyvtkDijkstraImageContourLineInterpolator_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\nStandard methods for instances of this class.\n"},
  {(char*)"IsA", PyvtkDijkstraImageContourLineInterpolator_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\nStandard methods for instances of this class.\n"},
  {(char*)"NewInstance", PyvtkDijkstraImageContourLineInterpolator_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkDijkstraImageContourLineInterpolator\nC++: vtkDijkstraImageContourLineInterpolator *NewInstance()\n\nStandard methods for instances of this class.\n"},
  {(char*)"SafeDownCast", PyvtkDijkstraImageContourLineInterpolator_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject)\n    -> vtkDijkstraImageContourLineInterpolator\nC++: vtkDijkstraImageContourLineInterpolator *SafeDownCast(\n    vtkObject* o)\n\nStandard methods for instances of this class.\n"},
  {(char*)"InterpolateLine", PyvtkDijkstraImageContourLineInterpolator_InterpolateLine, METH_VARARGS,
   (char*)"V.InterpolateLine(vtkRenderer, vtkContourRepresentation, int, int)\n     -> int\nC++: virtual int InterpolateLine(vtkRenderer *ren,\n    vtkContourRepresentation *rep, int idx1, int idx2)\n\nSubclasses that wish to interpolate a line segment must implement\nthis. For instance vtkBezierContourLineInterpolator adds nodes\nbetween idx1 and idx2, that allow the contour to adhere to a\nbezier curve.\n"},
  {(char*)"SetCostImage", PyvtkDijkstraImageContourLineInterpolator_SetCostImage, METH_VARARGS,
   (char*)"V.SetCostImage(vtkImageData)\nC++: virtual void SetCostImage(vtkImageData *)\n\nSet the image data for the vtkDijkstraImageGeodesicPath. If not\nset, the interpolator uses the image data input to the image\nactor. The image actor is obtained from the expected\nvtkImageActorPointPlacer.\n"},
  {(char*)"GetCostImage", PyvtkDijkstraImageContourLineInterpolator_GetCostImage, METH_VARARGS,
   (char*)"V.GetCostImage() -> vtkImageData\nC++: vtkImageData *GetCostImage()\n\nSet the image data for the vtkDijkstraImageGeodesicPath. If not\nset, the interpolator uses the image data input to the image\nactor. The image actor is obtained from the expected\nvtkImageActorPointPlacer.\n"},
  {(char*)"GetDijkstraImageGeodesicPath", PyvtkDijkstraImageContourLineInterpolator_GetDijkstraImageGeodesicPath, METH_VARARGS,
   (char*)"V.GetDijkstraImageGeodesicPath() -> vtkDijkstraImageGeodesicPath\nC++: vtkDijkstraImageGeodesicPath *GetDijkstraImageGeodesicPath()\n\naccess to the internal dijkstra path\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkDijkstraImageContourLineInterpolator_StaticNew()
{
  return vtkDijkstraImageContourLineInterpolator::New();
}

PyObject *PyVTKClass_vtkDijkstraImageContourLineInterpolatorNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkDijkstraImageContourLineInterpolator_StaticNew,
    PyvtkDijkstraImageContourLineInterpolator_Methods,
    "vtkDijkstraImageContourLineInterpolator", modulename,
    NULL, NULL,
    PyvtkDijkstraImageContourLineInterpolator_Doc(),
    PyVTKClass_vtkContourLineInterpolatorNew(modulename));
  return cls;
}

const char **PyvtkDijkstraImageContourLineInterpolator_Doc()
{
  static const char *docstring[] = {
    "vtkDijkstraImageContourLineInterpolator - Contour interpolator for\nplacing points on an image.\n\n",
    "Superclass: vtkContourLineInterpolator\n\n",
    "vtkDijkstraImageContourLineInterpolator interpolates and places\ncontour points on images. The class interpolates nodes by computing a\ngraph laying on the image data. By graph, we mean that the line\ninterpolating the two end points traverses along pixels so as to form\na shortest path. A Dijkstra algorithm is used to compute the path.\n\nThe class is meant to be used in conjunction with\nvtkImageActorP",
    "ointPlacer. One reason for this coupling is a\nperformance issue: both classes need to perform a cell pick, and\ncoupling avoids multiple cell picks (cell picks are slow).  Another\nissue is that the interpolator may need to set the image input to its\nvtkDijkstraImageGeodesicPath ivar.\n\nSee Also:\n\nvtkContourWidget vtkContourLineInterpolator\nvtkDijkstraImageGeodesicPath\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkDijkstraImageContourLineInterpolator(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkDijkstraImageContourLineInterpolatorNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkDijkstraImageContourLineInterpolator", o) != 0)
    {
    Py_DECREF(o);
    }

}

