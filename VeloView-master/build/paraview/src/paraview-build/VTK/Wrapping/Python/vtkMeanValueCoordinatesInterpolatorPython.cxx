// python wrapper for vtkMeanValueCoordinatesInterpolator
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkMeanValueCoordinatesInterpolator.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkMeanValueCoordinatesInterpolator(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkMeanValueCoordinatesInterpolatorNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkMeanValueCoordinatesInterpolator_Doc();


static PyObject *
PyvtkMeanValueCoordinatesInterpolator_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeanValueCoordinatesInterpolator *op = static_cast<vtkMeanValueCoordinatesInterpolator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkMeanValueCoordinatesInterpolator::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMeanValueCoordinatesInterpolator_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeanValueCoordinatesInterpolator *op = static_cast<vtkMeanValueCoordinatesInterpolator *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkMeanValueCoordinatesInterpolator::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMeanValueCoordinatesInterpolator_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeanValueCoordinatesInterpolator *op = static_cast<vtkMeanValueCoordinatesInterpolator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkMeanValueCoordinatesInterpolator *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkMeanValueCoordinatesInterpolator::NewInstance());

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
PyvtkMeanValueCoordinatesInterpolator_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkMeanValueCoordinatesInterpolator *tempr = vtkMeanValueCoordinatesInterpolator::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMeanValueCoordinatesInterpolator_ComputeInterpolationWeights_s1(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "ComputeInterpolationWeights");

  double temp0[3];
  double save0[3];
  const int size0 = 3;
  vtkPoints *temp1 = NULL;
  vtkIdList *temp2 = NULL;
  double *temp3 = NULL;
  double *save3 = NULL;
  double small3[8];
  int size3 = 0;
  PyObject *result = NULL;

  size3 = ap.GetArgSize(3);
  temp3 = small3;
  if (size3 > 4)
    {
    temp3 = new double[2*size3];
    }
  save3 = &temp3[size3];

  if (ap.CheckArgCount(4) &&
      ap.GetArray(temp0, size0) &&
      ap.GetVTKObject(temp1, "vtkPoints") &&
      ap.GetVTKObject(temp2, "vtkIdList") &&
      ap.GetArray(temp3, size3))
    {
    ap.SaveArray(temp0, save0, size0);
    ap.SaveArray(temp3, save3, size3);

    vtkMeanValueCoordinatesInterpolator::ComputeInterpolationWeights(temp0, temp1, temp2, temp3);

    if (ap.ArrayHasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(0, temp0, size0);
      }

    if (ap.ArrayHasChanged(temp3, save3, size3) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(3, temp3, size3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  if (temp3 && temp3 != small3)
    {
    delete [] temp3;
    }

  return result;
}

static PyObject *
PyvtkMeanValueCoordinatesInterpolator_ComputeInterpolationWeights_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "ComputeInterpolationWeights");

  double temp0[3];
  double save0[3];
  const int size0 = 3;
  vtkPoints *temp1 = NULL;
  vtkCellArray *temp2 = NULL;
  double *temp3 = NULL;
  double *save3 = NULL;
  double small3[8];
  int size3 = 0;
  PyObject *result = NULL;

  size3 = ap.GetArgSize(3);
  temp3 = small3;
  if (size3 > 4)
    {
    temp3 = new double[2*size3];
    }
  save3 = &temp3[size3];

  if (ap.CheckArgCount(4) &&
      ap.GetArray(temp0, size0) &&
      ap.GetVTKObject(temp1, "vtkPoints") &&
      ap.GetVTKObject(temp2, "vtkCellArray") &&
      ap.GetArray(temp3, size3))
    {
    ap.SaveArray(temp0, save0, size0);
    ap.SaveArray(temp3, save3, size3);

    vtkMeanValueCoordinatesInterpolator::ComputeInterpolationWeights(temp0, temp1, temp2, temp3);

    if (ap.ArrayHasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(0, temp0, size0);
      }

    if (ap.ArrayHasChanged(temp3, save3, size3) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(3, temp3, size3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  if (temp3 && temp3 != small3)
    {
    delete [] temp3;
    }

  return result;
}

static PyMethodDef PyvtkMeanValueCoordinatesInterpolator_ComputeInterpolationWeights_Methods[] = {
  {NULL, PyvtkMeanValueCoordinatesInterpolator_ComputeInterpolationWeights_s1, METH_VARARGS | METH_STATIC,
   (char*)"OOOO *d *vtkPoints *vtkIdList *d"},
  {NULL, PyvtkMeanValueCoordinatesInterpolator_ComputeInterpolationWeights_s2, METH_VARARGS | METH_STATIC,
   (char*)"OOOO *d *vtkPoints *vtkCellArray *d"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkMeanValueCoordinatesInterpolator_ComputeInterpolationWeights(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkMeanValueCoordinatesInterpolator_ComputeInterpolationWeights_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
    {
    case 4:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "ComputeInterpolationWeights");
  return NULL;
}


static PyMethodDef PyvtkMeanValueCoordinatesInterpolator_Methods[] = {
  {(char*)"GetClassName", PyvtkMeanValueCoordinatesInterpolator_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkMeanValueCoordinatesInterpolator_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkMeanValueCoordinatesInterpolator_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkMeanValueCoordinatesInterpolator\nC++: vtkMeanValueCoordinatesInterpolator *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkMeanValueCoordinatesInterpolator_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkMeanValueCoordinatesInterpolator\nC++: vtkMeanValueCoordinatesInterpolator *SafeDownCast(\n    vtkObject* o)\n\n"},
  {(char*)"ComputeInterpolationWeights", PyvtkMeanValueCoordinatesInterpolator_ComputeInterpolationWeights, METH_VARARGS | METH_STATIC,
   (char*)"V.ComputeInterpolationWeights([float, float, float], vtkPoints,\n    vtkIdList, [float, ...])\nC++: static void ComputeInterpolationWeights(double x[3],\n    vtkPoints *pts, vtkIdList *tris, double *weights)\nV.ComputeInterpolationWeights([float, float, float], vtkPoints,\n    vtkCellArray, [float, ...])\nC++: static void ComputeInterpolationWeights(double x[3],\n    vtkPoints *pts, vtkCellArray *tris, double *weights)\n\nMethod to generate interpolation weights for a point x[3] from a\nlist of triangles.  In this version of the method, the triangles\nare defined by a vtkPoints array plus a vtkIdList, where the\nvtkIdList is organized such that three ids in order define a\ntriangle.  Note that number of weights must equal the number of\npoints.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkMeanValueCoordinatesInterpolator_StaticNew()
{
  return vtkMeanValueCoordinatesInterpolator::New();
}

PyObject *PyVTKClass_vtkMeanValueCoordinatesInterpolatorNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkMeanValueCoordinatesInterpolator_StaticNew,
    PyvtkMeanValueCoordinatesInterpolator_Methods,
    "vtkMeanValueCoordinatesInterpolator", modulename,
    NULL, NULL,
    PyvtkMeanValueCoordinatesInterpolator_Doc(),
    PyVTKClass_vtkObjectNew(modulename));
  return cls;
}

const char **PyvtkMeanValueCoordinatesInterpolator_Doc()
{
  static const char *docstring[] = {
    "vtkMeanValueCoordinatesInterpolator - compute interpolation computes\n\n",
    "Superclass: vtkObject\n\n",
    "vtkMeanValueCoordinatesInterpolator computes interpolation weights\nfor a closed, manifold polyhedron mesh.  Once computed, the\ninterpolation weights can be used to interpolate data anywhere\ninterior or exterior to the mesh. This work implements two MVC\nalgorithms. The first one is for triangular meshes which is\ndocumented in the Siggraph 2005 paper by Tao Ju, Scot Schaefer and\nJoe Warren from Rice",
    " University \"Mean Value Coordinates for Closed\nTriangular Meshes\". The second one is for general polyhedron mesh\nwhich is documented in the Eurographics Symposium on Geometry\nProcessing 2006 paper by Torsten Langer, Alexander Belyaev and\nHans-Peter Seidel from MPI Informatik \"Spherical Barycentric\nCoordinates\". The filter will automatically choose which algorithm to\nuse based on whether the input ",
    "mesh is triangulated or not.\n\nIn VTK this class was initially created to interpolate data across\npolyhedral cells. In addition, the class can be used to interpolate\ndata values from a polyhedron mesh, and to smoothly deform a mesh\nfrom an associated control mesh.\n\nSee Also:\n\nvtkPolyhedralCell\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkMeanValueCoordinatesInterpolator(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkMeanValueCoordinatesInterpolatorNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkMeanValueCoordinatesInterpolator", o) != 0)
    {
    Py_DECREF(o);
    }

}

