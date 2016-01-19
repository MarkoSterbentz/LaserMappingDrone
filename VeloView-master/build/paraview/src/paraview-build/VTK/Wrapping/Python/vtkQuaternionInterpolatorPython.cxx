// python wrapper for vtkQuaternionInterpolator
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkQuaternion.h"
#include "vtkQuaternionInterpolator.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkQuaternionInterpolator(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkQuaternionInterpolatorNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkQuaternionInterpolator_Doc();


static PyObject *
PyvtkQuaternionInterpolator_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuaternionInterpolator *op = static_cast<vtkQuaternionInterpolator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkQuaternionInterpolator::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkQuaternionInterpolator_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuaternionInterpolator *op = static_cast<vtkQuaternionInterpolator *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkQuaternionInterpolator::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkQuaternionInterpolator_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuaternionInterpolator *op = static_cast<vtkQuaternionInterpolator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkQuaternionInterpolator *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkQuaternionInterpolator::NewInstance());

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
PyvtkQuaternionInterpolator_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkQuaternionInterpolator *tempr = vtkQuaternionInterpolator::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkQuaternionInterpolator_GetNumberOfQuaternions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfQuaternions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuaternionInterpolator *op = static_cast<vtkQuaternionInterpolator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfQuaternions() :
      op->vtkQuaternionInterpolator::GetNumberOfQuaternions());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkQuaternionInterpolator_GetMinimumT(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMinimumT");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuaternionInterpolator *op = static_cast<vtkQuaternionInterpolator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetMinimumT() :
      op->vtkQuaternionInterpolator::GetMinimumT());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkQuaternionInterpolator_GetMaximumT(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumT");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuaternionInterpolator *op = static_cast<vtkQuaternionInterpolator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetMaximumT() :
      op->vtkQuaternionInterpolator::GetMaximumT());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkQuaternionInterpolator_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuaternionInterpolator *op = static_cast<vtkQuaternionInterpolator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Initialize();
      }
    else
      {
      op->vtkQuaternionInterpolator::Initialize();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkQuaternionInterpolator_AddQuaternion_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddQuaternion");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuaternionInterpolator *op = static_cast<vtkQuaternionInterpolator *>(vp);

  double temp0;
  vtkQuaterniond *temp1 = NULL;
  PyObject *pobj1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetSpecialObject(temp1, pobj1, "vtkQuaterniond"))
    {
    if (ap.IsBound())
      {
      op->AddQuaternion(temp0, *temp1);
      }
    else
      {
      op->vtkQuaternionInterpolator::AddQuaternion(temp0, *temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  Py_XDECREF(pobj1);

  return result;
}

static PyObject *
PyvtkQuaternionInterpolator_AddQuaternion_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddQuaternion");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuaternionInterpolator *op = static_cast<vtkQuaternionInterpolator *>(vp);

  double temp0;
  double temp1[4];
  double save1[4];
  const int size1 = 4;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
    {
    ap.SaveArray(temp1, save1, size1);

    if (ap.IsBound())
      {
      op->AddQuaternion(temp0, temp1);
      }
    else
      {
      op->vtkQuaternionInterpolator::AddQuaternion(temp0, temp1);
      }

    if (ap.ArrayHasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(1, temp1, size1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkQuaternionInterpolator_AddQuaternion_Methods[] = {
  {NULL, PyvtkQuaternionInterpolator_AddQuaternion_s1, METH_VARARGS,
   (char*)"@dO &vtkQuaterniond"},
  {NULL, PyvtkQuaternionInterpolator_AddQuaternion_s2, METH_VARARGS,
   (char*)"@dO *d"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkQuaternionInterpolator_AddQuaternion(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkQuaternionInterpolator_AddQuaternion_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "AddQuaternion");
  return NULL;
}



static PyObject *
PyvtkQuaternionInterpolator_RemoveQuaternion(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveQuaternion");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuaternionInterpolator *op = static_cast<vtkQuaternionInterpolator *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->RemoveQuaternion(temp0);
      }
    else
      {
      op->vtkQuaternionInterpolator::RemoveQuaternion(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkQuaternionInterpolator_InterpolateQuaternion_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InterpolateQuaternion");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuaternionInterpolator *op = static_cast<vtkQuaternionInterpolator *>(vp);

  double temp0;
  vtkQuaterniond *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetSpecialObject(temp1, "vtkQuaterniond"))
    {
    if (ap.IsBound())
      {
      op->InterpolateQuaternion(temp0, *temp1);
      }
    else
      {
      op->vtkQuaternionInterpolator::InterpolateQuaternion(temp0, *temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkQuaternionInterpolator_InterpolateQuaternion_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InterpolateQuaternion");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuaternionInterpolator *op = static_cast<vtkQuaternionInterpolator *>(vp);

  double temp0;
  double temp1[4];
  double save1[4];
  const int size1 = 4;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
    {
    ap.SaveArray(temp1, save1, size1);

    if (ap.IsBound())
      {
      op->InterpolateQuaternion(temp0, temp1);
      }
    else
      {
      op->vtkQuaternionInterpolator::InterpolateQuaternion(temp0, temp1);
      }

    if (ap.ArrayHasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(1, temp1, size1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkQuaternionInterpolator_InterpolateQuaternion_Methods[] = {
  {NULL, PyvtkQuaternionInterpolator_InterpolateQuaternion_s1, METH_VARARGS,
   (char*)"@dO &vtkQuaterniond"},
  {NULL, PyvtkQuaternionInterpolator_InterpolateQuaternion_s2, METH_VARARGS,
   (char*)"@dO *d"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkQuaternionInterpolator_InterpolateQuaternion(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkQuaternionInterpolator_InterpolateQuaternion_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "InterpolateQuaternion");
  return NULL;
}



static PyObject *
PyvtkQuaternionInterpolator_SetInterpolationType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInterpolationType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuaternionInterpolator *op = static_cast<vtkQuaternionInterpolator *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetInterpolationType(temp0);
      }
    else
      {
      op->vtkQuaternionInterpolator::SetInterpolationType(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkQuaternionInterpolator_GetInterpolationTypeMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInterpolationTypeMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuaternionInterpolator *op = static_cast<vtkQuaternionInterpolator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetInterpolationTypeMinValue() :
      op->vtkQuaternionInterpolator::GetInterpolationTypeMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkQuaternionInterpolator_GetInterpolationTypeMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInterpolationTypeMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuaternionInterpolator *op = static_cast<vtkQuaternionInterpolator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetInterpolationTypeMaxValue() :
      op->vtkQuaternionInterpolator::GetInterpolationTypeMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkQuaternionInterpolator_GetInterpolationType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInterpolationType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuaternionInterpolator *op = static_cast<vtkQuaternionInterpolator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetInterpolationType() :
      op->vtkQuaternionInterpolator::GetInterpolationType());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkQuaternionInterpolator_SetInterpolationTypeToLinear(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInterpolationTypeToLinear");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuaternionInterpolator *op = static_cast<vtkQuaternionInterpolator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetInterpolationTypeToLinear();
      }
    else
      {
      op->vtkQuaternionInterpolator::SetInterpolationTypeToLinear();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkQuaternionInterpolator_SetInterpolationTypeToSpline(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInterpolationTypeToSpline");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuaternionInterpolator *op = static_cast<vtkQuaternionInterpolator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetInterpolationTypeToSpline();
      }
    else
      {
      op->vtkQuaternionInterpolator::SetInterpolationTypeToSpline();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkQuaternionInterpolator_Methods[] = {
  {(char*)"GetClassName", PyvtkQuaternionInterpolator_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkQuaternionInterpolator_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkQuaternionInterpolator_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkQuaternionInterpolator\nC++: vtkQuaternionInterpolator *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkQuaternionInterpolator_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkQuaternionInterpolator\nC++: vtkQuaternionInterpolator *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetNumberOfQuaternions", PyvtkQuaternionInterpolator_GetNumberOfQuaternions, METH_VARARGS,
   (char*)"V.GetNumberOfQuaternions() -> int\nC++: int GetNumberOfQuaternions()\n\nReturn the number of quaternions in the list of quaternions to be\ninterpolated.\n"},
  {(char*)"GetMinimumT", PyvtkQuaternionInterpolator_GetMinimumT, METH_VARARGS,
   (char*)"V.GetMinimumT() -> float\nC++: double GetMinimumT()\n\nObtain some information about the interpolation range. The\nnumbers returned (corresponding to parameter t, usually thought\nof as time) are undefined if the list of transforms is empty.\nThis is a convenience method for interpolation.\n"},
  {(char*)"GetMaximumT", PyvtkQuaternionInterpolator_GetMaximumT, METH_VARARGS,
   (char*)"V.GetMaximumT() -> float\nC++: double GetMaximumT()\n\nObtain some information about the interpolation range. The\nnumbers returned (corresponding to parameter t, usually thought\nof as time) are undefined if the list of transforms is empty.\nThis is a convenience method for interpolation.\n"},
  {(char*)"Initialize", PyvtkQuaternionInterpolator_Initialize, METH_VARARGS,
   (char*)"V.Initialize()\nC++: void Initialize()\n\nReset the class so that it contains no data; i.e., the array of\n(t,q[4]) information is discarded.\n"},
  {(char*)"AddQuaternion", PyvtkQuaternionInterpolator_AddQuaternion, METH_VARARGS,
   (char*)"V.AddQuaternion(float, vtkQuaterniond)\nC++: void AddQuaternion(double t, const vtkQuaterniond &q)\nV.AddQuaternion(float, [float, float, float, float])\nC++: void AddQuaternion(double t, double q[4])\n\nAdd another quaternion to the list of quaternions to be\ninterpolated. Note that using the same time t value more than\nonce replaces the previous quaternion at t. At least one\nquaternions must be added to define an interpolation functios.\n"},
  {(char*)"RemoveQuaternion", PyvtkQuaternionInterpolator_RemoveQuaternion, METH_VARARGS,
   (char*)"V.RemoveQuaternion(float)\nC++: void RemoveQuaternion(double t)\n\nDelete the quaternion at a particular parameter t. If there is no\nquaternion tuple defined at t, then the method does nothing.\n"},
  {(char*)"InterpolateQuaternion", PyvtkQuaternionInterpolator_InterpolateQuaternion, METH_VARARGS,
   (char*)"V.InterpolateQuaternion(float, vtkQuaterniond)\nC++: void InterpolateQuaternion(double t, vtkQuaterniond &q)\nV.InterpolateQuaternion(float, [float, float, float, float])\nC++: void InterpolateQuaternion(double t, double q[4])\n\nInterpolate the list of quaternions and determine a new\nquaternion (i.e., fill in the quaternion provided). If t is\noutside the range of (min,max) values, then t is clamped to lie\nwithin the range.\n"},
  {(char*)"SetInterpolationType", PyvtkQuaternionInterpolator_SetInterpolationType, METH_VARARGS,
   (char*)"V.SetInterpolationType(int)\nC++: void SetInterpolationType(int)\n\nSpecify which type of function to use for interpolation. By\ndefault (SetInterpolationFunctionToSpline()), cubic spline\ninterpolation using a modifed Kochanek basis is employed.\nOtherwise, if SetInterpolationFunctionToLinear() is invoked,\nlinear spherical interpolation is used between each pair of\nquaternions.\n"},
  {(char*)"GetInterpolationTypeMinValue", PyvtkQuaternionInterpolator_GetInterpolationTypeMinValue, METH_VARARGS,
   (char*)"V.GetInterpolationTypeMinValue() -> int\nC++: int GetInterpolationTypeMinValue()\n\nSpecify which type of function to use for interpolation. By\ndefault (SetInterpolationFunctionToSpline()), cubic spline\ninterpolation using a modifed Kochanek basis is employed.\nOtherwise, if SetInterpolationFunctionToLinear() is invoked,\nlinear spherical interpolation is used between each pair of\nquaternions.\n"},
  {(char*)"GetInterpolationTypeMaxValue", PyvtkQuaternionInterpolator_GetInterpolationTypeMaxValue, METH_VARARGS,
   (char*)"V.GetInterpolationTypeMaxValue() -> int\nC++: int GetInterpolationTypeMaxValue()\n\nSpecify which type of function to use for interpolation. By\ndefault (SetInterpolationFunctionToSpline()), cubic spline\ninterpolation using a modifed Kochanek basis is employed.\nOtherwise, if SetInterpolationFunctionToLinear() is invoked,\nlinear spherical interpolation is used between each pair of\nquaternions.\n"},
  {(char*)"GetInterpolationType", PyvtkQuaternionInterpolator_GetInterpolationType, METH_VARARGS,
   (char*)"V.GetInterpolationType() -> int\nC++: int GetInterpolationType()\n\nSpecify which type of function to use for interpolation. By\ndefault (SetInterpolationFunctionToSpline()), cubic spline\ninterpolation using a modifed Kochanek basis is employed.\nOtherwise, if SetInterpolationFunctionToLinear() is invoked,\nlinear spherical interpolation is used between each pair of\nquaternions.\n"},
  {(char*)"SetInterpolationTypeToLinear", PyvtkQuaternionInterpolator_SetInterpolationTypeToLinear, METH_VARARGS,
   (char*)"V.SetInterpolationTypeToLinear()\nC++: void SetInterpolationTypeToLinear()\n\nSpecify which type of function to use for interpolation. By\ndefault (SetInterpolationFunctionToSpline()), cubic spline\ninterpolation using a modifed Kochanek basis is employed.\nOtherwise, if SetInterpolationFunctionToLinear() is invoked,\nlinear spherical interpolation is used between each pair of\nquaternions.\n"},
  {(char*)"SetInterpolationTypeToSpline", PyvtkQuaternionInterpolator_SetInterpolationTypeToSpline, METH_VARARGS,
   (char*)"V.SetInterpolationTypeToSpline()\nC++: void SetInterpolationTypeToSpline()\n\nSpecify which type of function to use for interpolation. By\ndefault (SetInterpolationFunctionToSpline()), cubic spline\ninterpolation using a modifed Kochanek basis is employed.\nOtherwise, if SetInterpolationFunctionToLinear() is invoked,\nlinear spherical interpolation is used between each pair of\nquaternions.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkQuaternionInterpolator_StaticNew()
{
  return vtkQuaternionInterpolator::New();
}

PyObject *PyVTKClass_vtkQuaternionInterpolatorNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkQuaternionInterpolator_StaticNew,
    PyvtkQuaternionInterpolator_Methods,
    "vtkQuaternionInterpolator", modulename,
    NULL, NULL,
    PyvtkQuaternionInterpolator_Doc(),
    PyVTKClass_vtkObjectNew(modulename));

  if (cls)
    {
    PyObject *d = PyVTKClass_GetDict(cls);
    PyObject *o;

    for (int c = 0; c < 2; c++)
      {
      static const struct { const char *name; int value; }
        constants[2] = {
          { "INTERPOLATION_TYPE_LINEAR", vtkQuaternionInterpolator::INTERPOLATION_TYPE_LINEAR },
          { "INTERPOLATION_TYPE_SPLINE", vtkQuaternionInterpolator::INTERPOLATION_TYPE_SPLINE },
        };

      o = PyInt_FromLong(constants[c].value);
      if (o)
        {
        PyDict_SetItemString(d, (char *)constants[c].name, o);
        Py_DECREF(o);
        }
      }

    }

  return cls;
}

const char **PyvtkQuaternionInterpolator_Doc()
{
  static const char *docstring[] = {
    "vtkQuaternionInterpolator - interpolate a quaternion\n\n",
    "Superclass: vtkObject\n\n",
    "This class is used to interpolate a series of quaternions\nrepresenting the rotations of a 3D object.  The interpolation may be\nlinear in form (using spherical linear interpolation SLERP), or via\nspline interpolation (using SQUAD). In either case the interpolation\nis specialized to quaternions since the interpolation occurs on the\nsurface of the unit quaternion sphere.\n\nTo use this class, specify a",
    "t least two pairs of (t,q[4]) with the\nAddQuaternion() method.  Next interpolate the tuples with the\nInterpolateQuaternion(t,q[4]) method, where \"t\" must be in the range\nof (t_min,t_max) parameter values specified by the AddQuaternion()\nmethod (t is clamped otherwise), and q[4] is filled in by the method.\n\nThere are several important background references. Ken Shoemake\ndescribed the practical appl",
    "ication of quaternions for the\ninterpolation of rotation (K. Shoemake, \"Animating rotation with quaternion\ncurves\", Computer Graphics (Siggraph '85) 19(3):245--254, 1985).\nAnother fine reference (available on-line) is E. B. Dam, M. Koch, and\nM. Lillholm, Technical Report DIKU-TR-98/5, Dept. of Computer\nScience, University of Copenhagen, Denmark.\n\nCaveats:\n\nNote that for two or less quaternions, Sl",
    "erp (linear) interpolation\nis performed even if spline interpolation is requested. Also, the\ntangents to the first and last segments of spline interpolation are\n(arbitrarily) defined by repeating the first and last quaternions.\n\nThere are several methods particular to quaternions (norms, products,\netc.) implemented interior to this class. These may be moved to a\nseparate quaternion class at some p",
    "oint.\n\nSee also:\n\nvtkQuaternion\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkQuaternionInterpolator(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkQuaternionInterpolatorNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkQuaternionInterpolator", o) != 0)
    {
    Py_DECREF(o);
    }

}

