// python wrapper for vtkTriangularTCoords
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkTriangularTCoords.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkTriangularTCoords(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkTriangularTCoordsNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkPolyDataAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
#endif

static const char **PyvtkTriangularTCoords_Doc();


static PyObject *
PyvtkTriangularTCoords_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTriangularTCoords *op = static_cast<vtkTriangularTCoords *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkTriangularTCoords::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTriangularTCoords_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTriangularTCoords *op = static_cast<vtkTriangularTCoords *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkTriangularTCoords::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTriangularTCoords_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTriangularTCoords *op = static_cast<vtkTriangularTCoords *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkTriangularTCoords *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkTriangularTCoords::NewInstance());

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
PyvtkTriangularTCoords_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkTriangularTCoords *tempr = vtkTriangularTCoords::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkTriangularTCoords_Methods[] = {
  {(char*)"GetClassName", PyvtkTriangularTCoords_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkTriangularTCoords_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkTriangularTCoords_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkTriangularTCoords\nC++: vtkTriangularTCoords *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkTriangularTCoords_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkTriangularTCoords\nC++: vtkTriangularTCoords *SafeDownCast(vtkObject* o)\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkTriangularTCoords_StaticNew()
{
  return vtkTriangularTCoords::New();
}

PyObject *PyVTKClass_vtkTriangularTCoordsNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkTriangularTCoords_StaticNew,
    PyvtkTriangularTCoords_Methods,
    "vtkTriangularTCoords", modulename,
    NULL, NULL,
    PyvtkTriangularTCoords_Doc(),
    PyVTKClass_vtkPolyDataAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkTriangularTCoords_Doc()
{
  static const char *docstring[] = {
    "vtkTriangularTCoords - 2D texture coordinates based for triangles.\n\n",
    "Superclass: vtkPolyDataAlgorithm\n\n",
    "vtkTriangularTCoords is a filter that generates texture coordinates\nfor triangles. Texture coordinates for each triangle are: (0,0),\n(1,0) and (.5,sqrt(3)/2). This filter assumes that the triangle\ntexture map is symmetric about the center of the triangle. Thus the\norder Of the texture coordinates is not important. The procedural\ntexture in vtkTriangularTexture is designed with this symmetry. For\nm",
    "ore information see the paper \"Opacity-modulating Triangular\nTextures for Irregular Surfaces,\"  by Penny Rheingans, IEEE\nVisualization '96, pp. 219-225.\n\nSee Also:\n\nvtkTriangularTexture vtkThresholdPoints vtkTextureMapToPlane\nvtkTextureMapToSphere vtkTextureMapToCylinder\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkTriangularTCoords(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkTriangularTCoordsNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkTriangularTCoords", o) != 0)
    {
    Py_DECREF(o);
    }

}

