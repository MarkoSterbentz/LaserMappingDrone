// python wrapper for vtkUnstructuredGridBunykRayCastFunction
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkUnstructuredGridBunykRayCastFunction.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkUnstructuredGridBunykRayCastFunction(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkUnstructuredGridBunykRayCastFunctionNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkUnstructuredGridVolumeRayCastFunctionNew
extern "C" { PyObject *PyVTKClass_vtkUnstructuredGridVolumeRayCastFunctionNew(const char *); }
#define DECLARED_PyVTKClass_vtkUnstructuredGridVolumeRayCastFunctionNew
#endif

static const char **PyvtkUnstructuredGridBunykRayCastFunction_Doc();


static PyObject *
PyvtkUnstructuredGridBunykRayCastFunction_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridBunykRayCastFunction *op = static_cast<vtkUnstructuredGridBunykRayCastFunction *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkUnstructuredGridBunykRayCastFunction::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkUnstructuredGridBunykRayCastFunction_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridBunykRayCastFunction *op = static_cast<vtkUnstructuredGridBunykRayCastFunction *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkUnstructuredGridBunykRayCastFunction::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkUnstructuredGridBunykRayCastFunction_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridBunykRayCastFunction *op = static_cast<vtkUnstructuredGridBunykRayCastFunction *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkUnstructuredGridBunykRayCastFunction *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkUnstructuredGridBunykRayCastFunction::NewInstance());

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
PyvtkUnstructuredGridBunykRayCastFunction_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkUnstructuredGridBunykRayCastFunction *tempr = vtkUnstructuredGridBunykRayCastFunction::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkUnstructuredGridBunykRayCastFunction_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridBunykRayCastFunction *op = static_cast<vtkUnstructuredGridBunykRayCastFunction *>(vp);

  vtkRenderer *temp0 = NULL;
  vtkVolume *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkRenderer") &&
      ap.GetVTKObject(temp1, "vtkVolume"))
    {
    if (ap.IsBound())
      {
      op->Initialize(temp0, temp1);
      }
    else
      {
      op->vtkUnstructuredGridBunykRayCastFunction::Initialize(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkUnstructuredGridBunykRayCastFunction_Finalize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Finalize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridBunykRayCastFunction *op = static_cast<vtkUnstructuredGridBunykRayCastFunction *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Finalize();
      }
    else
      {
      op->vtkUnstructuredGridBunykRayCastFunction::Finalize();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkUnstructuredGridBunykRayCastFunction_NewIterator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewIterator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridBunykRayCastFunction *op = static_cast<vtkUnstructuredGridBunykRayCastFunction *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkUnstructuredGridVolumeRayCastIterator *tempr = (ap.IsBound() ?
      op->NewIterator() :
      op->vtkUnstructuredGridBunykRayCastFunction::NewIterator());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkUnstructuredGridBunykRayCastFunction_GetPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridBunykRayCastFunction *op = static_cast<vtkUnstructuredGridBunykRayCastFunction *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetPoints() :
      op->vtkUnstructuredGridBunykRayCastFunction::GetPoints());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkUnstructuredGridBunykRayCastFunction_GetViewToWorldMatrix(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetViewToWorldMatrix");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridBunykRayCastFunction *op = static_cast<vtkUnstructuredGridBunykRayCastFunction *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkMatrix4x4 *tempr = (ap.IsBound() ?
      op->GetViewToWorldMatrix() :
      op->vtkUnstructuredGridBunykRayCastFunction::GetViewToWorldMatrix());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkUnstructuredGridBunykRayCastFunction_GetImageOrigin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetImageOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridBunykRayCastFunction *op = static_cast<vtkUnstructuredGridBunykRayCastFunction *>(vp);

  int sizer = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int *tempr = (ap.IsBound() ?
      op->GetImageOrigin() :
      op->vtkUnstructuredGridBunykRayCastFunction::GetImageOrigin());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkUnstructuredGridBunykRayCastFunction_GetImageViewportSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetImageViewportSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridBunykRayCastFunction *op = static_cast<vtkUnstructuredGridBunykRayCastFunction *>(vp);

  int sizer = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int *tempr = (ap.IsBound() ?
      op->GetImageViewportSize() :
      op->vtkUnstructuredGridBunykRayCastFunction::GetImageViewportSize());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}

static PyMethodDef PyvtkUnstructuredGridBunykRayCastFunction_Methods[] = {
  {(char*)"GetClassName", PyvtkUnstructuredGridBunykRayCastFunction_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkUnstructuredGridBunykRayCastFunction_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkUnstructuredGridBunykRayCastFunction_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkUnstructuredGridBunykRayCastFunction\nC++: vtkUnstructuredGridBunykRayCastFunction *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkUnstructuredGridBunykRayCastFunction_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject)\n    -> vtkUnstructuredGridBunykRayCastFunction\nC++: vtkUnstructuredGridBunykRayCastFunction *SafeDownCast(\n    vtkObject* o)\n\n"},
  {(char*)"Initialize", PyvtkUnstructuredGridBunykRayCastFunction_Initialize, METH_VARARGS,
   (char*)"V.Initialize(vtkRenderer, vtkVolume)\nC++: virtual void Initialize(vtkRenderer *ren, vtkVolume *vol)\n\nCalled by the ray cast mapper at the start of rendering\n"},
  {(char*)"Finalize", PyvtkUnstructuredGridBunykRayCastFunction_Finalize, METH_VARARGS,
   (char*)"V.Finalize()\nC++: virtual void Finalize()\n\nCalled by the ray cast mapper at the end of rendering\n"},
  {(char*)"NewIterator", PyvtkUnstructuredGridBunykRayCastFunction_NewIterator, METH_VARARGS,
   (char*)"V.NewIterator() -> vtkUnstructuredGridVolumeRayCastIterator\nC++: virtual vtkUnstructuredGridVolumeRayCastIterator *NewIterator(\n    )\n\n"},
  {(char*)"GetPoints", PyvtkUnstructuredGridBunykRayCastFunction_GetPoints, METH_VARARGS,
   (char*)"V.GetPoints() -> (float, ...)\nC++: double *GetPoints()\n\nAccess to an internal structure for the templated method.\n"},
  {(char*)"GetViewToWorldMatrix", PyvtkUnstructuredGridBunykRayCastFunction_GetViewToWorldMatrix, METH_VARARGS,
   (char*)"V.GetViewToWorldMatrix() -> vtkMatrix4x4\nC++: vtkMatrix4x4 *GetViewToWorldMatrix()\n\nAccess to an internal structure for the templated method.\n"},
  {(char*)"GetImageOrigin", PyvtkUnstructuredGridBunykRayCastFunction_GetImageOrigin, METH_VARARGS,
   (char*)"V.GetImageOrigin() -> (int, int)\nC++: int *GetImageOrigin()\n\nAccess to an internal structure for the templated method.\n"},
  {(char*)"GetImageViewportSize", PyvtkUnstructuredGridBunykRayCastFunction_GetImageViewportSize, METH_VARARGS,
   (char*)"V.GetImageViewportSize() -> (int, int)\nC++: int *GetImageViewportSize()\n\nAccess to an internal structure for the templated method.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkUnstructuredGridBunykRayCastFunction_StaticNew()
{
  return vtkUnstructuredGridBunykRayCastFunction::New();
}

PyObject *PyVTKClass_vtkUnstructuredGridBunykRayCastFunctionNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkUnstructuredGridBunykRayCastFunction_StaticNew,
    PyvtkUnstructuredGridBunykRayCastFunction_Methods,
    "vtkUnstructuredGridBunykRayCastFunction", modulename,
    NULL, NULL,
    PyvtkUnstructuredGridBunykRayCastFunction_Doc(),
    PyVTKClass_vtkUnstructuredGridVolumeRayCastFunctionNew(modulename));
  return cls;
}

const char **PyvtkUnstructuredGridBunykRayCastFunction_Doc()
{
  static const char *docstring[] = {
    "vtkUnstructuredGridBunykRayCastFunction - a superclass for ray\ncasting functions\n\n",
    "Superclass: vtkUnstructuredGridVolumeRayCastFunction\n\n",
    "vtkUnstructuredGridBunykRayCastFunction is a concrete implementation\nof a ray cast function for unstructured grid data. This class was\nbased on the paper \"Simple, Fast, Robust Ray Casting of Irregular\nGrids\" by Paul Bunyk, Arie Kaufmna, and Claudio Silva. This method is\nquite memory intensive (with extra explicit copies of the data) and\ntherefore should not be used for very large data. This method",
    " assumes\nthat the input data is composed entirely of tetras - use\nvtkDataSetTriangleFilter before setting the input on the mapper.\n\nThe basic idea of this method is as follows:\n\n1) Enumerate the triangles. At each triangle have space for some\n   information that will be used during rendering. This includes\n   which tetra the triangles belong to, the plane equation and the\n   Barycentric coefficien",
    "ts.\n\n2) Keep a reference to all four triangles for each tetra.\n\n3) At the beginning of each render, do the precomputation. This\n   includes creating an array of transformed points (in view\n   coordinates) and computing the view dependent info per triangle\n   (plane equations and barycentric coords in view space)\n\n4) Find all front facing boundary triangles (a triangle is on the\n   boundary if it b",
    "elongs to only one tetra). For each triangle, find\nall pixels in the image that intersect the triangle, and add this to\n   the sorted (by depth) intersection list at each pixel.\n\n5) For each ray cast, traverse the intersection list. At each\n   intersection, accumulate opacity and color contribution per tetra\n   along the ray until you reach an exiting triangle (on the\n   boundary).\n\nSee Also:\n\nvtk",
    "UnstructuredGridVolumeRayCastMapper\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkUnstructuredGridBunykRayCastFunction(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkUnstructuredGridBunykRayCastFunctionNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkUnstructuredGridBunykRayCastFunction", o) != 0)
    {
    Py_DECREF(o);
    }

  for (int c = 0; c < 2; c++)
    {
    static const struct { const char *name; int value; }
      constants[2] = {
        { "VTK_BUNYKRCF_MAX_ARRAYS", 10000 },
        { "VTK_BUNYKRCF_ARRAY_SIZE", 10000 },
      };

    o = PyInt_FromLong(constants[c].value);
    if (o)
      {
      PyDict_SetItemString(dict, (char *)constants[c].name, o);
      Py_DECREF(o);
      }
    }

}

