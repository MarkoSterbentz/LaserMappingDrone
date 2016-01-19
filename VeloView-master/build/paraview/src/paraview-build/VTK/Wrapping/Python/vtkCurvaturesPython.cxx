// python wrapper for vtkCurvatures
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkCurvatures.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkCurvatures(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkCurvaturesNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkPolyDataAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
#endif

static const char **PyvtkCurvatures_Doc();


static PyObject *
PyvtkCurvatures_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCurvatures *op = static_cast<vtkCurvatures *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkCurvatures::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCurvatures_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCurvatures *op = static_cast<vtkCurvatures *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkCurvatures::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCurvatures_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCurvatures *op = static_cast<vtkCurvatures *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkCurvatures *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkCurvatures::NewInstance());

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
PyvtkCurvatures_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkCurvatures *tempr = vtkCurvatures::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCurvatures_SetCurvatureType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCurvatureType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCurvatures *op = static_cast<vtkCurvatures *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetCurvatureType(temp0);
      }
    else
      {
      op->vtkCurvatures::SetCurvatureType(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCurvatures_GetCurvatureType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCurvatureType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCurvatures *op = static_cast<vtkCurvatures *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetCurvatureType() :
      op->vtkCurvatures::GetCurvatureType());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCurvatures_SetCurvatureTypeToGaussian(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCurvatureTypeToGaussian");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCurvatures *op = static_cast<vtkCurvatures *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetCurvatureTypeToGaussian();
      }
    else
      {
      op->vtkCurvatures::SetCurvatureTypeToGaussian();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCurvatures_SetCurvatureTypeToMean(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCurvatureTypeToMean");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCurvatures *op = static_cast<vtkCurvatures *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetCurvatureTypeToMean();
      }
    else
      {
      op->vtkCurvatures::SetCurvatureTypeToMean();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCurvatures_SetCurvatureTypeToMaximum(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCurvatureTypeToMaximum");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCurvatures *op = static_cast<vtkCurvatures *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetCurvatureTypeToMaximum();
      }
    else
      {
      op->vtkCurvatures::SetCurvatureTypeToMaximum();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCurvatures_SetCurvatureTypeToMinimum(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCurvatureTypeToMinimum");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCurvatures *op = static_cast<vtkCurvatures *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetCurvatureTypeToMinimum();
      }
    else
      {
      op->vtkCurvatures::SetCurvatureTypeToMinimum();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCurvatures_SetInvertMeanCurvature(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInvertMeanCurvature");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCurvatures *op = static_cast<vtkCurvatures *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetInvertMeanCurvature(temp0);
      }
    else
      {
      op->vtkCurvatures::SetInvertMeanCurvature(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCurvatures_GetInvertMeanCurvature(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInvertMeanCurvature");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCurvatures *op = static_cast<vtkCurvatures *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetInvertMeanCurvature() :
      op->vtkCurvatures::GetInvertMeanCurvature());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCurvatures_InvertMeanCurvatureOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InvertMeanCurvatureOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCurvatures *op = static_cast<vtkCurvatures *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->InvertMeanCurvatureOn();
      }
    else
      {
      op->vtkCurvatures::InvertMeanCurvatureOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCurvatures_InvertMeanCurvatureOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InvertMeanCurvatureOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCurvatures *op = static_cast<vtkCurvatures *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->InvertMeanCurvatureOff();
      }
    else
      {
      op->vtkCurvatures::InvertMeanCurvatureOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkCurvatures_Methods[] = {
  {(char*)"GetClassName", PyvtkCurvatures_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkCurvatures_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkCurvatures_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkCurvatures\nC++: vtkCurvatures *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkCurvatures_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkCurvatures\nC++: vtkCurvatures *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetCurvatureType", PyvtkCurvatures_SetCurvatureType, METH_VARARGS,
   (char*)"V.SetCurvatureType(int)\nC++: void SetCurvatureType(int a)\n\nSet/Get Curvature type VTK_CURVATURE_GAUSS: Gaussian curvature,\nstored as DataArray \"Gauss_Curvature\" VTK_CURVATURE_MEAN : Mean\ncurvature, stored as DataArray \"Mean_Curvature\"\n"},
  {(char*)"GetCurvatureType", PyvtkCurvatures_GetCurvatureType, METH_VARARGS,
   (char*)"V.GetCurvatureType() -> int\nC++: int GetCurvatureType()\n\nSet/Get Curvature type VTK_CURVATURE_GAUSS: Gaussian curvature,\nstored as DataArray \"Gauss_Curvature\" VTK_CURVATURE_MEAN : Mean\ncurvature, stored as DataArray \"Mean_Curvature\"\n"},
  {(char*)"SetCurvatureTypeToGaussian", PyvtkCurvatures_SetCurvatureTypeToGaussian, METH_VARARGS,
   (char*)"V.SetCurvatureTypeToGaussian()\nC++: void SetCurvatureTypeToGaussian()\n\nSet/Get Curvature type VTK_CURVATURE_GAUSS: Gaussian curvature,\nstored as DataArray \"Gauss_Curvature\" VTK_CURVATURE_MEAN : Mean\ncurvature, stored as DataArray \"Mean_Curvature\"\n"},
  {(char*)"SetCurvatureTypeToMean", PyvtkCurvatures_SetCurvatureTypeToMean, METH_VARARGS,
   (char*)"V.SetCurvatureTypeToMean()\nC++: void SetCurvatureTypeToMean()\n\nSet/Get Curvature type VTK_CURVATURE_GAUSS: Gaussian curvature,\nstored as DataArray \"Gauss_Curvature\" VTK_CURVATURE_MEAN : Mean\ncurvature, stored as DataArray \"Mean_Curvature\"\n"},
  {(char*)"SetCurvatureTypeToMaximum", PyvtkCurvatures_SetCurvatureTypeToMaximum, METH_VARARGS,
   (char*)"V.SetCurvatureTypeToMaximum()\nC++: void SetCurvatureTypeToMaximum()\n\nSet/Get Curvature type VTK_CURVATURE_GAUSS: Gaussian curvature,\nstored as DataArray \"Gauss_Curvature\" VTK_CURVATURE_MEAN : Mean\ncurvature, stored as DataArray \"Mean_Curvature\"\n"},
  {(char*)"SetCurvatureTypeToMinimum", PyvtkCurvatures_SetCurvatureTypeToMinimum, METH_VARARGS,
   (char*)"V.SetCurvatureTypeToMinimum()\nC++: void SetCurvatureTypeToMinimum()\n\nSet/Get Curvature type VTK_CURVATURE_GAUSS: Gaussian curvature,\nstored as DataArray \"Gauss_Curvature\" VTK_CURVATURE_MEAN : Mean\ncurvature, stored as DataArray \"Mean_Curvature\"\n"},
  {(char*)"SetInvertMeanCurvature", PyvtkCurvatures_SetInvertMeanCurvature, METH_VARARGS,
   (char*)"V.SetInvertMeanCurvature(int)\nC++: void SetInvertMeanCurvature(int a)\n\nSet/Get the flag which inverts the mean curvature calculation for\nmeshes with inward pointing normals (default false)\n"},
  {(char*)"GetInvertMeanCurvature", PyvtkCurvatures_GetInvertMeanCurvature, METH_VARARGS,
   (char*)"V.GetInvertMeanCurvature() -> int\nC++: int GetInvertMeanCurvature()\n\nSet/Get the flag which inverts the mean curvature calculation for\nmeshes with inward pointing normals (default false)\n"},
  {(char*)"InvertMeanCurvatureOn", PyvtkCurvatures_InvertMeanCurvatureOn, METH_VARARGS,
   (char*)"V.InvertMeanCurvatureOn()\nC++: void InvertMeanCurvatureOn()\n\nSet/Get the flag which inverts the mean curvature calculation for\nmeshes with inward pointing normals (default false)\n"},
  {(char*)"InvertMeanCurvatureOff", PyvtkCurvatures_InvertMeanCurvatureOff, METH_VARARGS,
   (char*)"V.InvertMeanCurvatureOff()\nC++: void InvertMeanCurvatureOff()\n\nSet/Get the flag which inverts the mean curvature calculation for\nmeshes with inward pointing normals (default false)\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkCurvatures_StaticNew()
{
  return vtkCurvatures::New();
}

PyObject *PyVTKClass_vtkCurvaturesNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkCurvatures_StaticNew,
    PyvtkCurvatures_Methods,
    "vtkCurvatures", modulename,
    NULL, NULL,
    PyvtkCurvatures_Doc(),
    PyVTKClass_vtkPolyDataAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkCurvatures_Doc()
{
  static const char *docstring[] = {
    "vtkCurvatures - compute curvatures (Gauss and mean) of a Polydata\nobject\n\n",
    "Superclass: vtkPolyDataAlgorithm\n\n",
    "vtkCurvatures takes a polydata input and computes the curvature of\nthe mesh at each point. Four possible methods of computation are\navailable :\n\nGauss Curvature discrete Gauss curvature (K) computation,$K(vertex v)\n= 2*PI-\\sum_{facet neighbs f of v} (angle_f at v) $ The contribution\nof every facet is for the moment weighted by $Area(facet)/3 $ The\nunits of Gaussian Curvature are $[1/m^2] $\n\nMean C",
    "urvature$H(vertex v) = average over edges neighbs e of H(e)\n$$H(edge e) = length(e)*dihedral_angle(e) $ NB: dihedral_angle is the\nORIENTED angle between -PI and PI, this means that the surface is\nassumed to be orientable the computation creates the orientation The\nunits of Mean Curvature are [1/m]\n\nMaximum ( $k_max $) and Minimum ( $k_min $) Principal\nCurvatures$k_max = H + sqrt(H^2 - K) $$k_min =",
    " H - sqrt(H^2 - K) $\nExcepting spherical and planar surfaces which have equal principal\ncurvatures, the curvature at a point on a surface varies with the\ndirection one \"sets off\" from the point. For all directions, the\ncurvature will pass through two extrema: a minimum ( $k_min $) and a\nmaximum ( $k_max $) which occur at mutually orthogonal directions to\neach other.\n\nNB. The sign of the Gauss curv",
    "ature is a geometric ivariant, it\nshould be +ve when the surface looks like a sphere, -ve when it looks\nlike a saddle, however, the sign of the Mean curvature is not, it\ndepends on the convention for normals - This code assumes that\nnormals point outwards (ie from the surface of a sphere outwards). If\na given mesh produces curvatures of opposite senses then the flag\nInvertMeanCurvature can be set ",
    "and the Curvature reported by the Mean\ncalculation will be inverted.\n\nThanks:\n\nPhilip Batchelor philipp.batchelor@kcl.ac.uk for creating and\ncontributing the class and Andrew Maclean a.maclean@acfr.usyd.edu.au\nfor cleanups and fixes. Thanks also to Goodwin Lawlor for\ncontributing patch to calculate principal curvatures\n\nSee Also:\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkCurvatures(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkCurvaturesNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkCurvatures", o) != 0)
    {
    Py_DECREF(o);
    }

  for (int c = 0; c < 4; c++)
    {
    static const struct { const char *name; int value; }
      constants[4] = {
        { "VTK_CURVATURE_GAUSS", 0 },
        { "VTK_CURVATURE_MEAN", 1 },
        { "VTK_CURVATURE_MAXIMUM", 2 },
        { "VTK_CURVATURE_MINIMUM", 3 },
      };

    o = PyInt_FromLong(constants[c].value);
    if (o)
      {
      PyDict_SetItemString(dict, (char *)constants[c].name, o);
      Py_DECREF(o);
      }
    }

}

