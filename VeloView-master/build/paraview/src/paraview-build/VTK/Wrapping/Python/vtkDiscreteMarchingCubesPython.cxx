// python wrapper for vtkDiscreteMarchingCubes
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkDiscreteMarchingCubes.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkDiscreteMarchingCubes(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkDiscreteMarchingCubesNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkMarchingCubesNew
extern "C" { PyObject *PyVTKClass_vtkMarchingCubesNew(const char *); }
#define DECLARED_PyVTKClass_vtkMarchingCubesNew
#endif

static const char **PyvtkDiscreteMarchingCubes_Doc();


static PyObject *
PyvtkDiscreteMarchingCubes_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDiscreteMarchingCubes *op = static_cast<vtkDiscreteMarchingCubes *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkDiscreteMarchingCubes::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDiscreteMarchingCubes_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDiscreteMarchingCubes *op = static_cast<vtkDiscreteMarchingCubes *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkDiscreteMarchingCubes::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDiscreteMarchingCubes_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDiscreteMarchingCubes *op = static_cast<vtkDiscreteMarchingCubes *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkDiscreteMarchingCubes *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkDiscreteMarchingCubes::NewInstance());

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
PyvtkDiscreteMarchingCubes_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkDiscreteMarchingCubes *tempr = vtkDiscreteMarchingCubes::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkDiscreteMarchingCubes_Methods[] = {
  {(char*)"GetClassName", PyvtkDiscreteMarchingCubes_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkDiscreteMarchingCubes_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkDiscreteMarchingCubes_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkDiscreteMarchingCubes\nC++: vtkDiscreteMarchingCubes *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkDiscreteMarchingCubes_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkDiscreteMarchingCubes\nC++: vtkDiscreteMarchingCubes *SafeDownCast(vtkObject* o)\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkDiscreteMarchingCubes_StaticNew()
{
  return vtkDiscreteMarchingCubes::New();
}

PyObject *PyVTKClass_vtkDiscreteMarchingCubesNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkDiscreteMarchingCubes_StaticNew,
    PyvtkDiscreteMarchingCubes_Methods,
    "vtkDiscreteMarchingCubes", modulename,
    NULL, NULL,
    PyvtkDiscreteMarchingCubes_Doc(),
    PyVTKClass_vtkMarchingCubesNew(modulename));
  return cls;
}

const char **PyvtkDiscreteMarchingCubes_Doc()
{
  static const char *docstring[] = {
    "vtkDiscreteMarchingCubes - generate object boundaries from\n\n",
    "Superclass: vtkMarchingCubes\n\n",
    "takes as input a volume (e.g., 3D structured point set) of\nsegmentation labels and generates on output one or more models\nrepresenting the boundaries between the specified label and the\nadjacent structures.  One or more label values must be specified to\ngenerate the models.  The boundary positions are always defined to be\nhalf-way between adjacent voxels. This filter works best with\nintegral scala",
    "r values. If ComputeScalars is on (the default), each\noutput cell will have cell data that corresponds to the scalar value\n(segmentation label) of the corresponding cube. Note that this\ndiffers from vtkMarchingCubes, which stores the scalar value as point\ndata. The rationale for this difference is that cell vertices may be\nshared between multiple cells. This also means that the resultant\npolydata ",
    "may be non-manifold (cell faces may be coincident). To\nfurther process the polydata, users should either: 1) extract cells\nthat have a common scalar value using vtkThreshold, or 2) process the\ndata with filters that can handle non-manifold polydata (e.g.\nvtkWindowedSincPolyDataFilter). Also note, Normals and Gradients are\nnot computed.\n\nCaveats:\n\nThis filter is specialized to volumes. If you are i",
    "nterested in\ncontouring other types of data, use the general vtkContourFilter. If\nyou want to contour an image (i.e., a volume slice), use\nvtkMarchingSquares.\n\nSee Also:\n\nvtkContourFilter vtkSliceCubes vtkMarchingSquares vtkDividingCubes\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkDiscreteMarchingCubes(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkDiscreteMarchingCubesNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkDiscreteMarchingCubes", o) != 0)
    {
    Py_DECREF(o);
    }

}

