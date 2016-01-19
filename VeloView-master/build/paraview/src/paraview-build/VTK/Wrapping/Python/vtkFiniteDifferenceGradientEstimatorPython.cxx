// python wrapper for vtkFiniteDifferenceGradientEstimator
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkFiniteDifferenceGradientEstimator.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkFiniteDifferenceGradientEstimator(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkFiniteDifferenceGradientEstimatorNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkEncodedGradientEstimatorNew
extern "C" { PyObject *PyVTKClass_vtkEncodedGradientEstimatorNew(const char *); }
#define DECLARED_PyVTKClass_vtkEncodedGradientEstimatorNew
#endif

static const char **PyvtkFiniteDifferenceGradientEstimator_Doc();


static PyObject *
PyvtkFiniteDifferenceGradientEstimator_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFiniteDifferenceGradientEstimator *op = static_cast<vtkFiniteDifferenceGradientEstimator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkFiniteDifferenceGradientEstimator::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkFiniteDifferenceGradientEstimator_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFiniteDifferenceGradientEstimator *op = static_cast<vtkFiniteDifferenceGradientEstimator *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkFiniteDifferenceGradientEstimator::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkFiniteDifferenceGradientEstimator_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFiniteDifferenceGradientEstimator *op = static_cast<vtkFiniteDifferenceGradientEstimator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkFiniteDifferenceGradientEstimator *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkFiniteDifferenceGradientEstimator::NewInstance());

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
PyvtkFiniteDifferenceGradientEstimator_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkFiniteDifferenceGradientEstimator *tempr = vtkFiniteDifferenceGradientEstimator::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkFiniteDifferenceGradientEstimator_SetSampleSpacingInVoxels(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSampleSpacingInVoxels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFiniteDifferenceGradientEstimator *op = static_cast<vtkFiniteDifferenceGradientEstimator *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetSampleSpacingInVoxels(temp0);
      }
    else
      {
      op->vtkFiniteDifferenceGradientEstimator::SetSampleSpacingInVoxels(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkFiniteDifferenceGradientEstimator_GetSampleSpacingInVoxels(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSampleSpacingInVoxels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFiniteDifferenceGradientEstimator *op = static_cast<vtkFiniteDifferenceGradientEstimator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetSampleSpacingInVoxels() :
      op->vtkFiniteDifferenceGradientEstimator::GetSampleSpacingInVoxels());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkFiniteDifferenceGradientEstimator_Methods[] = {
  {(char*)"GetClassName", PyvtkFiniteDifferenceGradientEstimator_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkFiniteDifferenceGradientEstimator_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkFiniteDifferenceGradientEstimator_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkFiniteDifferenceGradientEstimator\nC++: vtkFiniteDifferenceGradientEstimator *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkFiniteDifferenceGradientEstimator_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkFiniteDifferenceGradientEstimator\nC++: vtkFiniteDifferenceGradientEstimator *SafeDownCast(\n    vtkObject* o)\n\n"},
  {(char*)"SetSampleSpacingInVoxels", PyvtkFiniteDifferenceGradientEstimator_SetSampleSpacingInVoxels, METH_VARARGS,
   (char*)"V.SetSampleSpacingInVoxels(int)\nC++: void SetSampleSpacingInVoxels(int a)\n\nSet/Get the spacing between samples for the finite differences\nmethod used to compute the normal. This spacing is in voxel\nunits.\n"},
  {(char*)"GetSampleSpacingInVoxels", PyvtkFiniteDifferenceGradientEstimator_GetSampleSpacingInVoxels, METH_VARARGS,
   (char*)"V.GetSampleSpacingInVoxels() -> int\nC++: int GetSampleSpacingInVoxels()\n\nSet/Get the spacing between samples for the finite differences\nmethod used to compute the normal. This spacing is in voxel\nunits.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkFiniteDifferenceGradientEstimator_StaticNew()
{
  return vtkFiniteDifferenceGradientEstimator::New();
}

PyObject *PyVTKClass_vtkFiniteDifferenceGradientEstimatorNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkFiniteDifferenceGradientEstimator_StaticNew,
    PyvtkFiniteDifferenceGradientEstimator_Methods,
    "vtkFiniteDifferenceGradientEstimator", modulename,
    NULL, NULL,
    PyvtkFiniteDifferenceGradientEstimator_Doc(),
    PyVTKClass_vtkEncodedGradientEstimatorNew(modulename));
  return cls;
}

const char **PyvtkFiniteDifferenceGradientEstimator_Doc()
{
  static const char *docstring[] = {
    "vtkFiniteDifferenceGradientEstimator - Use finite differences to\nestimate gradient.\n\n",
    "Superclass: vtkEncodedGradientEstimator\n\n",
    "vtkFiniteDifferenceGradientEstimator is a concrete subclass of\n vtkEncodedGradientEstimator that uses a central differences\ntechnique to\n estimate the gradient. The gradient at some sample location (x,y,z)\n would be estimated by:\n\n\n      nx = (f(x-dx,y,z) - f(x+dx,y,z)) / 2*dx;\n      ny = (f(x,y-dy,z) - f(x,y+dy,z)) / 2*dy;\n      nz = (f(x,y,z-dz) - f(x,y,z+dz)) / 2*dz;\n\n\n This value is normalized",
    " to determine a unit direction vector and a\n magnitude. The normal is computed in voxel space, and\n dx = dy = dz = SampleSpacingInVoxels. A scaling factor is applied to\n convert this normal from voxel space to world coordinates.\n\nSee Also:\n\nvtkEncodedGradientEstimator\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkFiniteDifferenceGradientEstimator(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkFiniteDifferenceGradientEstimatorNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkFiniteDifferenceGradientEstimator", o) != 0)
    {
    Py_DECREF(o);
    }

}

