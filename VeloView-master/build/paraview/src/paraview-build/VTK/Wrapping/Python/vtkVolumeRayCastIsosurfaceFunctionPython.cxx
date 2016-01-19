// python wrapper for vtkVolumeRayCastIsosurfaceFunction
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkVolumeRayCastIsosurfaceFunction.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkVolumeRayCastIsosurfaceFunction(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkVolumeRayCastIsosurfaceFunctionNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkVolumeRayCastFunctionNew
extern "C" { PyObject *PyVTKClass_vtkVolumeRayCastFunctionNew(const char *); }
#define DECLARED_PyVTKClass_vtkVolumeRayCastFunctionNew
#endif

static const char **PyvtkVolumeRayCastIsosurfaceFunction_Doc();


static PyObject *
PyvtkVolumeRayCastIsosurfaceFunction_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeRayCastIsosurfaceFunction *op = static_cast<vtkVolumeRayCastIsosurfaceFunction *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkVolumeRayCastIsosurfaceFunction::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeRayCastIsosurfaceFunction_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeRayCastIsosurfaceFunction *op = static_cast<vtkVolumeRayCastIsosurfaceFunction *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkVolumeRayCastIsosurfaceFunction::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeRayCastIsosurfaceFunction_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeRayCastIsosurfaceFunction *op = static_cast<vtkVolumeRayCastIsosurfaceFunction *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkVolumeRayCastIsosurfaceFunction *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkVolumeRayCastIsosurfaceFunction::NewInstance());

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
PyvtkVolumeRayCastIsosurfaceFunction_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkVolumeRayCastIsosurfaceFunction *tempr = vtkVolumeRayCastIsosurfaceFunction::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeRayCastIsosurfaceFunction_GetZeroOpacityThreshold(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetZeroOpacityThreshold");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeRayCastIsosurfaceFunction *op = static_cast<vtkVolumeRayCastIsosurfaceFunction *>(vp);

  vtkVolume *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkVolume"))
    {
    float tempr = (ap.IsBound() ?
      op->GetZeroOpacityThreshold(temp0) :
      op->vtkVolumeRayCastIsosurfaceFunction::GetZeroOpacityThreshold(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeRayCastIsosurfaceFunction_SetIsoValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIsoValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeRayCastIsosurfaceFunction *op = static_cast<vtkVolumeRayCastIsosurfaceFunction *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetIsoValue(temp0);
      }
    else
      {
      op->vtkVolumeRayCastIsosurfaceFunction::SetIsoValue(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeRayCastIsosurfaceFunction_GetIsoValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIsoValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeRayCastIsosurfaceFunction *op = static_cast<vtkVolumeRayCastIsosurfaceFunction *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetIsoValue() :
      op->vtkVolumeRayCastIsosurfaceFunction::GetIsoValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeRayCastIsosurfaceFunction_CastRay(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CastRay");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeRayCastIsosurfaceFunction *op = static_cast<vtkVolumeRayCastIsosurfaceFunction *>(vp);

  vtkVolumeRayCastDynamicInfo *temp0 = NULL;
  vtkVolumeRayCastStaticInfo *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkVolumeRayCastDynamicInfo") &&
      ap.GetVTKObject(temp1, "vtkVolumeRayCastStaticInfo"))
    {
    if (ap.IsBound())
      {
      op->CastRay(temp0, temp1);
      }
    else
      {
      op->vtkVolumeRayCastIsosurfaceFunction::CastRay(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkVolumeRayCastIsosurfaceFunction_Methods[] = {
  {(char*)"GetClassName", PyvtkVolumeRayCastIsosurfaceFunction_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkVolumeRayCastIsosurfaceFunction_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkVolumeRayCastIsosurfaceFunction_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkVolumeRayCastIsosurfaceFunction\nC++: vtkVolumeRayCastIsosurfaceFunction *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkVolumeRayCastIsosurfaceFunction_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkVolumeRayCastIsosurfaceFunction\nC++: vtkVolumeRayCastIsosurfaceFunction *SafeDownCast(\n    vtkObject* o)\n\n"},
  {(char*)"GetZeroOpacityThreshold", PyvtkVolumeRayCastIsosurfaceFunction_GetZeroOpacityThreshold, METH_VARARGS,
   (char*)"V.GetZeroOpacityThreshold(vtkVolume) -> float\nC++: float GetZeroOpacityThreshold(vtkVolume *vol)\n\nGet the scalar value below which all scalar values have 0 opacity\n"},
  {(char*)"SetIsoValue", PyvtkVolumeRayCastIsosurfaceFunction_SetIsoValue, METH_VARARGS,
   (char*)"V.SetIsoValue(float)\nC++: void SetIsoValue(double a)\n\nSet/Get the value of IsoValue.\n"},
  {(char*)"GetIsoValue", PyvtkVolumeRayCastIsosurfaceFunction_GetIsoValue, METH_VARARGS,
   (char*)"V.GetIsoValue() -> float\nC++: double GetIsoValue()\n\nSet/Get the value of IsoValue.\n"},
  {(char*)"CastRay", PyvtkVolumeRayCastIsosurfaceFunction_CastRay, METH_VARARGS,
   (char*)"V.CastRay(vtkVolumeRayCastDynamicInfo, vtkVolumeRayCastStaticInfo)\nC++: void CastRay(vtkVolumeRayCastDynamicInfo *dynamicInfo,\n    vtkVolumeRayCastStaticInfo *staticInfo)\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkVolumeRayCastIsosurfaceFunction_StaticNew()
{
  return vtkVolumeRayCastIsosurfaceFunction::New();
}

PyObject *PyVTKClass_vtkVolumeRayCastIsosurfaceFunctionNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkVolumeRayCastIsosurfaceFunction_StaticNew,
    PyvtkVolumeRayCastIsosurfaceFunction_Methods,
    "vtkVolumeRayCastIsosurfaceFunction", modulename,
    NULL, NULL,
    PyvtkVolumeRayCastIsosurfaceFunction_Doc(),
    PyVTKClass_vtkVolumeRayCastFunctionNew(modulename));
  return cls;
}

const char **PyvtkVolumeRayCastIsosurfaceFunction_Doc()
{
  static const char *docstring[] = {
    "vtkVolumeRayCastIsosurfaceFunction - An isosurface ray caster for\nvolumes\n\n",
    "Superclass: vtkVolumeRayCastFunction\n\n",
    "vtkVolumeRayCastIsosurfaceFunction is a volume ray cast function that\nintersects a ray with an analytic isosurface in a scalar field. The\ncolor and shading parameters are defined in the vtkVolumeProperty of\nthe vtkVolume, as well as the interpolation type to use when locating\nthe surface (either a nearest neighbor approach or a tri-linear\ninterpolation approach)\n\nSee Also:\n\nvtkVolumeRayCastFunctio",
    "n vtkVolumeRayCastMapper vtkVolumeProperty\nvtkVolumeRayCastCompositeFunction vtkVolumeRayCastMIPFunction\nvtkVolume vtkVolumeProperty\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkVolumeRayCastIsosurfaceFunction(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkVolumeRayCastIsosurfaceFunctionNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkVolumeRayCastIsosurfaceFunction", o) != 0)
    {
    Py_DECREF(o);
    }

}

