// python wrapper for vtkBezierContourLineInterpolator
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkBezierContourLineInterpolator.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkBezierContourLineInterpolator(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkBezierContourLineInterpolatorNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkContourLineInterpolatorNew
extern "C" { PyObject *PyVTKClass_vtkContourLineInterpolatorNew(const char *); }
#define DECLARED_PyVTKClass_vtkContourLineInterpolatorNew
#endif

static const char **PyvtkBezierContourLineInterpolator_Doc();


static PyObject *
PyvtkBezierContourLineInterpolator_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBezierContourLineInterpolator *op = static_cast<vtkBezierContourLineInterpolator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkBezierContourLineInterpolator::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBezierContourLineInterpolator_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBezierContourLineInterpolator *op = static_cast<vtkBezierContourLineInterpolator *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkBezierContourLineInterpolator::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBezierContourLineInterpolator_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBezierContourLineInterpolator *op = static_cast<vtkBezierContourLineInterpolator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkBezierContourLineInterpolator *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkBezierContourLineInterpolator::NewInstance());

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
PyvtkBezierContourLineInterpolator_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkBezierContourLineInterpolator *tempr = vtkBezierContourLineInterpolator::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBezierContourLineInterpolator_InterpolateLine(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InterpolateLine");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBezierContourLineInterpolator *op = static_cast<vtkBezierContourLineInterpolator *>(vp);

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
      op->vtkBezierContourLineInterpolator::InterpolateLine(temp0, temp1, temp2, temp3));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBezierContourLineInterpolator_SetMaximumCurveError(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaximumCurveError");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBezierContourLineInterpolator *op = static_cast<vtkBezierContourLineInterpolator *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetMaximumCurveError(temp0);
      }
    else
      {
      op->vtkBezierContourLineInterpolator::SetMaximumCurveError(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkBezierContourLineInterpolator_GetMaximumCurveErrorMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumCurveErrorMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBezierContourLineInterpolator *op = static_cast<vtkBezierContourLineInterpolator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetMaximumCurveErrorMinValue() :
      op->vtkBezierContourLineInterpolator::GetMaximumCurveErrorMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBezierContourLineInterpolator_GetMaximumCurveErrorMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumCurveErrorMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBezierContourLineInterpolator *op = static_cast<vtkBezierContourLineInterpolator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetMaximumCurveErrorMaxValue() :
      op->vtkBezierContourLineInterpolator::GetMaximumCurveErrorMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBezierContourLineInterpolator_GetMaximumCurveError(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumCurveError");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBezierContourLineInterpolator *op = static_cast<vtkBezierContourLineInterpolator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetMaximumCurveError() :
      op->vtkBezierContourLineInterpolator::GetMaximumCurveError());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBezierContourLineInterpolator_SetMaximumCurveLineSegments(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaximumCurveLineSegments");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBezierContourLineInterpolator *op = static_cast<vtkBezierContourLineInterpolator *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetMaximumCurveLineSegments(temp0);
      }
    else
      {
      op->vtkBezierContourLineInterpolator::SetMaximumCurveLineSegments(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkBezierContourLineInterpolator_GetMaximumCurveLineSegmentsMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumCurveLineSegmentsMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBezierContourLineInterpolator *op = static_cast<vtkBezierContourLineInterpolator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetMaximumCurveLineSegmentsMinValue() :
      op->vtkBezierContourLineInterpolator::GetMaximumCurveLineSegmentsMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBezierContourLineInterpolator_GetMaximumCurveLineSegmentsMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumCurveLineSegmentsMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBezierContourLineInterpolator *op = static_cast<vtkBezierContourLineInterpolator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetMaximumCurveLineSegmentsMaxValue() :
      op->vtkBezierContourLineInterpolator::GetMaximumCurveLineSegmentsMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBezierContourLineInterpolator_GetMaximumCurveLineSegments(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumCurveLineSegments");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBezierContourLineInterpolator *op = static_cast<vtkBezierContourLineInterpolator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetMaximumCurveLineSegments() :
      op->vtkBezierContourLineInterpolator::GetMaximumCurveLineSegments());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBezierContourLineInterpolator_GetSpan(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSpan");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBezierContourLineInterpolator *op = static_cast<vtkBezierContourLineInterpolator *>(vp);

  int temp0;
  vtkIntArray *temp1 = NULL;
  vtkContourRepresentation *temp2 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkIntArray") &&
      ap.GetVTKObject(temp2, "vtkContourRepresentation"))
    {
    if (ap.IsBound())
      {
      op->GetSpan(temp0, temp1, temp2);
      }
    else
      {
      op->vtkBezierContourLineInterpolator::GetSpan(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkBezierContourLineInterpolator_Methods[] = {
  {(char*)"GetClassName", PyvtkBezierContourLineInterpolator_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\nStandard methods for instances of this class.\n"},
  {(char*)"IsA", PyvtkBezierContourLineInterpolator_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\nStandard methods for instances of this class.\n"},
  {(char*)"NewInstance", PyvtkBezierContourLineInterpolator_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkBezierContourLineInterpolator\nC++: vtkBezierContourLineInterpolator *NewInstance()\n\nStandard methods for instances of this class.\n"},
  {(char*)"SafeDownCast", PyvtkBezierContourLineInterpolator_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkBezierContourLineInterpolator\nC++: vtkBezierContourLineInterpolator *SafeDownCast(vtkObject* o)\n\nStandard methods for instances of this class.\n"},
  {(char*)"InterpolateLine", PyvtkBezierContourLineInterpolator_InterpolateLine, METH_VARARGS,
   (char*)"V.InterpolateLine(vtkRenderer, vtkContourRepresentation, int, int)\n     -> int\nC++: virtual int InterpolateLine(vtkRenderer *ren,\n    vtkContourRepresentation *rep, int idx1, int idx2)\n\n"},
  {(char*)"SetMaximumCurveError", PyvtkBezierContourLineInterpolator_SetMaximumCurveError, METH_VARARGS,
   (char*)"V.SetMaximumCurveError(float)\nC++: void SetMaximumCurveError(double)\n\nThe difference between a line segment connecting two points and\nthe curve connecting the same points. In the limit of the length\nof the curve dx -> 0, the two values will be the same. The\nsmaller this number, the finer the bezier curve will be\ninterpolated. Default is 0.005\n"},
  {(char*)"GetMaximumCurveErrorMinValue", PyvtkBezierContourLineInterpolator_GetMaximumCurveErrorMinValue, METH_VARARGS,
   (char*)"V.GetMaximumCurveErrorMinValue() -> float\nC++: double GetMaximumCurveErrorMinValue()\n\nThe difference between a line segment connecting two points and\nthe curve connecting the same points. In the limit of the length\nof the curve dx -> 0, the two values will be the same. The\nsmaller this number, the finer the bezier curve will be\ninterpolated. Default is 0.005\n"},
  {(char*)"GetMaximumCurveErrorMaxValue", PyvtkBezierContourLineInterpolator_GetMaximumCurveErrorMaxValue, METH_VARARGS,
   (char*)"V.GetMaximumCurveErrorMaxValue() -> float\nC++: double GetMaximumCurveErrorMaxValue()\n\nThe difference between a line segment connecting two points and\nthe curve connecting the same points. In the limit of the length\nof the curve dx -> 0, the two values will be the same. The\nsmaller this number, the finer the bezier curve will be\ninterpolated. Default is 0.005\n"},
  {(char*)"GetMaximumCurveError", PyvtkBezierContourLineInterpolator_GetMaximumCurveError, METH_VARARGS,
   (char*)"V.GetMaximumCurveError() -> float\nC++: double GetMaximumCurveError()\n\nThe difference between a line segment connecting two points and\nthe curve connecting the same points. In the limit of the length\nof the curve dx -> 0, the two values will be the same. The\nsmaller this number, the finer the bezier curve will be\ninterpolated. Default is 0.005\n"},
  {(char*)"SetMaximumCurveLineSegments", PyvtkBezierContourLineInterpolator_SetMaximumCurveLineSegments, METH_VARARGS,
   (char*)"V.SetMaximumCurveLineSegments(int)\nC++: void SetMaximumCurveLineSegments(int)\n\nMaximum number of bezier line segments between two nodes. Larger\nvalues create a finer interpolation. Default is 100.\n"},
  {(char*)"GetMaximumCurveLineSegmentsMinValue", PyvtkBezierContourLineInterpolator_GetMaximumCurveLineSegmentsMinValue, METH_VARARGS,
   (char*)"V.GetMaximumCurveLineSegmentsMinValue() -> int\nC++: int GetMaximumCurveLineSegmentsMinValue()\n\nMaximum number of bezier line segments between two nodes. Larger\nvalues create a finer interpolation. Default is 100.\n"},
  {(char*)"GetMaximumCurveLineSegmentsMaxValue", PyvtkBezierContourLineInterpolator_GetMaximumCurveLineSegmentsMaxValue, METH_VARARGS,
   (char*)"V.GetMaximumCurveLineSegmentsMaxValue() -> int\nC++: int GetMaximumCurveLineSegmentsMaxValue()\n\nMaximum number of bezier line segments between two nodes. Larger\nvalues create a finer interpolation. Default is 100.\n"},
  {(char*)"GetMaximumCurveLineSegments", PyvtkBezierContourLineInterpolator_GetMaximumCurveLineSegments, METH_VARARGS,
   (char*)"V.GetMaximumCurveLineSegments() -> int\nC++: int GetMaximumCurveLineSegments()\n\nMaximum number of bezier line segments between two nodes. Larger\nvalues create a finer interpolation. Default is 100.\n"},
  {(char*)"GetSpan", PyvtkBezierContourLineInterpolator_GetSpan, METH_VARARGS,
   (char*)"V.GetSpan(int, vtkIntArray, vtkContourRepresentation)\nC++: virtual void GetSpan(int nodeIndex, vtkIntArray *nodeIndices,\n     vtkContourRepresentation *rep)\n\nSpan of the interpolator. ie. the number of control points its\nsupposed to interpolate given a node.\n\nThe first argument is the current nodeIndex. ie, you'd be trying\nto interpolate between nodes \"nodeIndex\" and \"nodeIndex-1\",\nunless you're closing the contour in which case, you're trying to\ninterpolate \"nodeIndex\" and \"Node=0\". The node span is returned\nin a vtkIntArray.\n\nThe node span is returned in a vtkIntArray. The node span\nreturned by this interpolator will be a 2-tuple with a span of 4.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkBezierContourLineInterpolator_StaticNew()
{
  return vtkBezierContourLineInterpolator::New();
}

PyObject *PyVTKClass_vtkBezierContourLineInterpolatorNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkBezierContourLineInterpolator_StaticNew,
    PyvtkBezierContourLineInterpolator_Methods,
    "vtkBezierContourLineInterpolator", modulename,
    NULL, NULL,
    PyvtkBezierContourLineInterpolator_Doc(),
    PyVTKClass_vtkContourLineInterpolatorNew(modulename));
  return cls;
}

const char **PyvtkBezierContourLineInterpolator_Doc()
{
  static const char *docstring[] = {
    "vtkBezierContourLineInterpolator - Interpolates supplied nodes with\nbezier line segments\n\n",
    "Superclass: vtkContourLineInterpolator\n\n",
    "The line interpolator interpolates supplied nodes (see\nInterpolateLine) with bezier line segments. The finess of the curve\nmay be controlled using SetMaximumCurveError and\nSetMaximumNumberOfLineSegments.\n\nSee Also:\n\nvtkContourLineInterpolator\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkBezierContourLineInterpolator(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkBezierContourLineInterpolatorNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkBezierContourLineInterpolator", o) != 0)
    {
    Py_DECREF(o);
    }

}

