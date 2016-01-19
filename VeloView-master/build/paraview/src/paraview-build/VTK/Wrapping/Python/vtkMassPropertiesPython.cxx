// python wrapper for vtkMassProperties
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkMassProperties.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkMassProperties(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkMassPropertiesNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkPolyDataAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
#endif

static const char **PyvtkMassProperties_Doc();


static PyObject *
PyvtkMassProperties_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMassProperties *op = static_cast<vtkMassProperties *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkMassProperties::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMassProperties_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMassProperties *op = static_cast<vtkMassProperties *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkMassProperties::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMassProperties_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMassProperties *op = static_cast<vtkMassProperties *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkMassProperties *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkMassProperties::NewInstance());

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
PyvtkMassProperties_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkMassProperties *tempr = vtkMassProperties::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMassProperties_GetVolume(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVolume");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMassProperties *op = static_cast<vtkMassProperties *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetVolume() :
      op->vtkMassProperties::GetVolume());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMassProperties_GetVolumeProjected(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVolumeProjected");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMassProperties *op = static_cast<vtkMassProperties *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetVolumeProjected() :
      op->vtkMassProperties::GetVolumeProjected());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMassProperties_GetVolumeX(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVolumeX");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMassProperties *op = static_cast<vtkMassProperties *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetVolumeX() :
      op->vtkMassProperties::GetVolumeX());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMassProperties_GetVolumeY(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVolumeY");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMassProperties *op = static_cast<vtkMassProperties *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetVolumeY() :
      op->vtkMassProperties::GetVolumeY());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMassProperties_GetVolumeZ(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVolumeZ");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMassProperties *op = static_cast<vtkMassProperties *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetVolumeZ() :
      op->vtkMassProperties::GetVolumeZ());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMassProperties_GetKx(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetKx");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMassProperties *op = static_cast<vtkMassProperties *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetKx() :
      op->vtkMassProperties::GetKx());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMassProperties_GetKy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetKy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMassProperties *op = static_cast<vtkMassProperties *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetKy() :
      op->vtkMassProperties::GetKy());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMassProperties_GetKz(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetKz");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMassProperties *op = static_cast<vtkMassProperties *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetKz() :
      op->vtkMassProperties::GetKz());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMassProperties_GetSurfaceArea(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSurfaceArea");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMassProperties *op = static_cast<vtkMassProperties *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetSurfaceArea() :
      op->vtkMassProperties::GetSurfaceArea());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMassProperties_GetMinCellArea(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMinCellArea");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMassProperties *op = static_cast<vtkMassProperties *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetMinCellArea() :
      op->vtkMassProperties::GetMinCellArea());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMassProperties_GetMaxCellArea(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaxCellArea");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMassProperties *op = static_cast<vtkMassProperties *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetMaxCellArea() :
      op->vtkMassProperties::GetMaxCellArea());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMassProperties_GetNormalizedShapeIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNormalizedShapeIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMassProperties *op = static_cast<vtkMassProperties *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetNormalizedShapeIndex() :
      op->vtkMassProperties::GetNormalizedShapeIndex());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkMassProperties_Methods[] = {
  {(char*)"GetClassName", PyvtkMassProperties_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkMassProperties_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkMassProperties_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkMassProperties\nC++: vtkMassProperties *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkMassProperties_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkMassProperties\nC++: vtkMassProperties *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetVolume", PyvtkMassProperties_GetVolume, METH_VARARGS,
   (char*)"V.GetVolume() -> float\nC++: double GetVolume()\n\nCompute and return the volume.\n"},
  {(char*)"GetVolumeProjected", PyvtkMassProperties_GetVolumeProjected, METH_VARARGS,
   (char*)"V.GetVolumeProjected() -> float\nC++: double GetVolumeProjected()\n\nCompute and return the projected volume. Typically you should\ncompare this volume to the value returned by GetVolume if you get\nan error (GetVolume()-GetVolumeProjected())*10000 that is greater\nthan GetVolume() this should identify a problem:\n* Either the polydata is not closed\n* Or the polydata contains triangle that are flipped\n"},
  {(char*)"GetVolumeX", PyvtkMassProperties_GetVolumeX, METH_VARARGS,
   (char*)"V.GetVolumeX() -> float\nC++: double GetVolumeX()\n\nCompute and return the volume projected on to each axis aligned\nplane.\n"},
  {(char*)"GetVolumeY", PyvtkMassProperties_GetVolumeY, METH_VARARGS,
   (char*)"V.GetVolumeY() -> float\nC++: double GetVolumeY()\n\nCompute and return the volume projected on to each axis aligned\nplane.\n"},
  {(char*)"GetVolumeZ", PyvtkMassProperties_GetVolumeZ, METH_VARARGS,
   (char*)"V.GetVolumeZ() -> float\nC++: double GetVolumeZ()\n\nCompute and return the volume projected on to each axis aligned\nplane.\n"},
  {(char*)"GetKx", PyvtkMassProperties_GetKx, METH_VARARGS,
   (char*)"V.GetKx() -> float\nC++: double GetKx()\n\nCompute and return the weighting factors for the maximum unit\nnormal component (MUNC).\n"},
  {(char*)"GetKy", PyvtkMassProperties_GetKy, METH_VARARGS,
   (char*)"V.GetKy() -> float\nC++: double GetKy()\n\nCompute and return the weighting factors for the maximum unit\nnormal component (MUNC).\n"},
  {(char*)"GetKz", PyvtkMassProperties_GetKz, METH_VARARGS,
   (char*)"V.GetKz() -> float\nC++: double GetKz()\n\nCompute and return the weighting factors for the maximum unit\nnormal component (MUNC).\n"},
  {(char*)"GetSurfaceArea", PyvtkMassProperties_GetSurfaceArea, METH_VARARGS,
   (char*)"V.GetSurfaceArea() -> float\nC++: double GetSurfaceArea()\n\nCompute and return the area.\n"},
  {(char*)"GetMinCellArea", PyvtkMassProperties_GetMinCellArea, METH_VARARGS,
   (char*)"V.GetMinCellArea() -> float\nC++: double GetMinCellArea()\n\nCompute and return the min cell area.\n"},
  {(char*)"GetMaxCellArea", PyvtkMassProperties_GetMaxCellArea, METH_VARARGS,
   (char*)"V.GetMaxCellArea() -> float\nC++: double GetMaxCellArea()\n\nCompute and return the max cell area.\n"},
  {(char*)"GetNormalizedShapeIndex", PyvtkMassProperties_GetNormalizedShapeIndex, METH_VARARGS,
   (char*)"V.GetNormalizedShapeIndex() -> float\nC++: double GetNormalizedShapeIndex()\n\nCompute and return the normalized shape index. This characterizes\nthe deviation of the shape of an object from a sphere. A sphere's\nNSI is one. This number is always >= 1.0.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkMassProperties_StaticNew()
{
  return vtkMassProperties::New();
}

PyObject *PyVTKClass_vtkMassPropertiesNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkMassProperties_StaticNew,
    PyvtkMassProperties_Methods,
    "vtkMassProperties", modulename,
    NULL, NULL,
    PyvtkMassProperties_Doc(),
    PyVTKClass_vtkPolyDataAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkMassProperties_Doc()
{
  static const char *docstring[] = {
    "vtkMassProperties - estimate volume, area, shape index of triangle\nmesh\n\n",
    "Superclass: vtkPolyDataAlgorithm\n\n",
    "vtkMassProperties estimates the volume, the surface area, and the\nnormalized shape index of a triangle mesh.  The algorithm implemented\nhere is based on the discrete form of the divergence theorem.  The\ngeneral assumption here is that the model is of closed surface.  For\nmore details see the following reference (Alyassin A.M. et al,\n\"Evaluation of new algorithms for the interactive measurement of\n",
    "surface area and volume\", Med Phys 21(6) 1994.).\n\nCaveats:\n\nCurrently only triangles are processed. Use vtkTriangleFilter to\nconvert any strips or polygons to triangles.\n\nSee Also:\n\nvtkTriangleFilter\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkMassProperties(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkMassPropertiesNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkMassProperties", o) != 0)
    {
    Py_DECREF(o);
    }

}

