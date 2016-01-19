// python wrapper for vtkContourTriangulator
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkContourTriangulator.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkContourTriangulator(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkContourTriangulatorNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkPolyDataAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
#endif

static const char **PyvtkContourTriangulator_Doc();


static PyObject *
PyvtkContourTriangulator_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourTriangulator *op = static_cast<vtkContourTriangulator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkContourTriangulator::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkContourTriangulator_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourTriangulator *op = static_cast<vtkContourTriangulator *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkContourTriangulator::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkContourTriangulator_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourTriangulator *op = static_cast<vtkContourTriangulator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkContourTriangulator *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkContourTriangulator::NewInstance());

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
PyvtkContourTriangulator_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkContourTriangulator *tempr = vtkContourTriangulator::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkContourTriangulator_GetTriangulationError(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTriangulationError");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourTriangulator *op = static_cast<vtkContourTriangulator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetTriangulationError() :
      op->vtkContourTriangulator::GetTriangulationError());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkContourTriangulator_SetTriangulationErrorDisplay(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTriangulationErrorDisplay");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourTriangulator *op = static_cast<vtkContourTriangulator *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetTriangulationErrorDisplay(temp0);
      }
    else
      {
      op->vtkContourTriangulator::SetTriangulationErrorDisplay(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkContourTriangulator_TriangulationErrorDisplayOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TriangulationErrorDisplayOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourTriangulator *op = static_cast<vtkContourTriangulator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->TriangulationErrorDisplayOn();
      }
    else
      {
      op->vtkContourTriangulator::TriangulationErrorDisplayOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkContourTriangulator_TriangulationErrorDisplayOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TriangulationErrorDisplayOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourTriangulator *op = static_cast<vtkContourTriangulator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->TriangulationErrorDisplayOff();
      }
    else
      {
      op->vtkContourTriangulator::TriangulationErrorDisplayOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkContourTriangulator_GetTriangulationErrorDisplay(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTriangulationErrorDisplay");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourTriangulator *op = static_cast<vtkContourTriangulator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetTriangulationErrorDisplay() :
      op->vtkContourTriangulator::GetTriangulationErrorDisplay());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkContourTriangulator_TriangulatePolygon(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "TriangulatePolygon");

  vtkIdList *temp0 = NULL;
  vtkPoints *temp1 = NULL;
  vtkCellArray *temp2 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkIdList") &&
      ap.GetVTKObject(temp1, "vtkPoints") &&
      ap.GetVTKObject(temp2, "vtkCellArray"))
    {
    int tempr = vtkContourTriangulator::TriangulatePolygon(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkContourTriangulator_TriangulateContours(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "TriangulateContours");

  vtkPolyData *temp0 = NULL;
  vtkIdType temp1;
  vtkIdType temp2;
  vtkCellArray *temp3 = NULL;
  double temp4[3];
  const int size4 = 3;
  PyObject *result = NULL;

  if (ap.CheckArgCount(5) &&
      ap.GetVTKObject(temp0, "vtkPolyData") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetVTKObject(temp3, "vtkCellArray") &&
      ap.GetArray(temp4, size4))
    {
    int tempr = vtkContourTriangulator::TriangulateContours(temp0, temp1, temp2, temp3, temp4);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkContourTriangulator_Methods[] = {
  {(char*)"GetClassName", PyvtkContourTriangulator_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkContourTriangulator_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkContourTriangulator_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkContourTriangulator\nC++: vtkContourTriangulator *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkContourTriangulator_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkContourTriangulator\nC++: vtkContourTriangulator *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetTriangulationError", PyvtkContourTriangulator_GetTriangulationError, METH_VARARGS,
   (char*)"V.GetTriangulationError() -> int\nC++: int GetTriangulationError()\n\nCheck if there was a triangulation failure in the last update.\n"},
  {(char*)"SetTriangulationErrorDisplay", PyvtkContourTriangulator_SetTriangulationErrorDisplay, METH_VARARGS,
   (char*)"V.SetTriangulationErrorDisplay(int)\nC++: void SetTriangulationErrorDisplay(int a)\n\nGenerate errors when the triangulation fails. Note that\ntriangulation failures are often minor, because they involve tiny\ntriangles that are too small to see.\n"},
  {(char*)"TriangulationErrorDisplayOn", PyvtkContourTriangulator_TriangulationErrorDisplayOn, METH_VARARGS,
   (char*)"V.TriangulationErrorDisplayOn()\nC++: void TriangulationErrorDisplayOn()\n\nGenerate errors when the triangulation fails. Note that\ntriangulation failures are often minor, because they involve tiny\ntriangles that are too small to see.\n"},
  {(char*)"TriangulationErrorDisplayOff", PyvtkContourTriangulator_TriangulationErrorDisplayOff, METH_VARARGS,
   (char*)"V.TriangulationErrorDisplayOff()\nC++: void TriangulationErrorDisplayOff()\n\nGenerate errors when the triangulation fails. Note that\ntriangulation failures are often minor, because they involve tiny\ntriangles that are too small to see.\n"},
  {(char*)"GetTriangulationErrorDisplay", PyvtkContourTriangulator_GetTriangulationErrorDisplay, METH_VARARGS,
   (char*)"V.GetTriangulationErrorDisplay() -> int\nC++: int GetTriangulationErrorDisplay()\n\nGenerate errors when the triangulation fails. Note that\ntriangulation failures are often minor, because they involve tiny\ntriangles that are too small to see.\n"},
  {(char*)"TriangulatePolygon", PyvtkContourTriangulator_TriangulatePolygon, METH_VARARGS | METH_STATIC,
   (char*)"V.TriangulatePolygon(vtkIdList, vtkPoints, vtkCellArray) -> int\nC++: static int TriangulatePolygon(vtkIdList *polygon,\n    vtkPoints *points, vtkCellArray *triangles)\n\nA robust method for triangulating a polygon. It cleans up the\npolygon and then applies the ear-cut triangulation. A zero return\nvalue indicates that triangulation failed.\n"},
  {(char*)"TriangulateContours", PyvtkContourTriangulator_TriangulateContours, METH_VARARGS | METH_STATIC,
   (char*)"V.TriangulateContours(vtkPolyData, int, int, vtkCellArray, (float,\n     float, float)) -> int\nC++: static int TriangulateContours(vtkPolyData *data,\n    vtkIdType firstLine, vtkIdType numLines,\n    vtkCellArray *outputPolys, const double normal[3])\n\nGiven some closed contour lines, create a triangle mesh that\nfills those lines.  The input lines must be single-segment lines,\nnot polylines.  The input lines do not have to be in order. Only\nnumLines starting from firstLine will be used.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkContourTriangulator_StaticNew()
{
  return vtkContourTriangulator::New();
}

PyObject *PyVTKClass_vtkContourTriangulatorNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkContourTriangulator_StaticNew,
    PyvtkContourTriangulator_Methods,
    "vtkContourTriangulator", modulename,
    NULL, NULL,
    PyvtkContourTriangulator_Doc(),
    PyVTKClass_vtkPolyDataAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkContourTriangulator_Doc()
{
  static const char *docstring[] = {
    "vtkContourTriangulator - Fill all 2D contours to create polygons\n\n",
    "Superclass: vtkPolyDataAlgorithm\n\n",
    "vtkContourTriangulator will generate triangles to fill all of the 2D\ncontours in its input.  The contours may be concave, and may even\ncontain holes i.e. a contour may contain an internal contour that is\nwound in the opposite direction to indicate that it is a hole.\n\nCaveats:\n\nThe triangulation of is done in O(n) time for simple convex inputs,\nbut for non-convex inputs the worst-case time is O(n^2",
    "*m^2) where n\nis the number of points and m is the number of holes. The best\ntriangulation algorithms, in contrast, are O(n log n). The resulting\ntriangles may be quite narrow, the algorithm does not attempt to\nproduce high-quality triangles.\n\nThanks:\n\nThanks to David Gobbi for contributing this class to VTK.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkContourTriangulator(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkContourTriangulatorNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkContourTriangulator", o) != 0)
    {
    Py_DECREF(o);
    }

}

