// python wrapper for vtkTransformInterpolator
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkTransformInterpolator.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkTransformInterpolator(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkTransformInterpolatorNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkTransformInterpolator_Doc();


static PyObject *
PyvtkTransformInterpolator_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransformInterpolator *op = static_cast<vtkTransformInterpolator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkTransformInterpolator::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTransformInterpolator_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransformInterpolator *op = static_cast<vtkTransformInterpolator *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkTransformInterpolator::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTransformInterpolator_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransformInterpolator *op = static_cast<vtkTransformInterpolator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkTransformInterpolator *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkTransformInterpolator::NewInstance());

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
PyvtkTransformInterpolator_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkTransformInterpolator *tempr = vtkTransformInterpolator::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTransformInterpolator_GetNumberOfTransforms(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfTransforms");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransformInterpolator *op = static_cast<vtkTransformInterpolator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfTransforms() :
      op->vtkTransformInterpolator::GetNumberOfTransforms());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTransformInterpolator_GetMinimumT(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMinimumT");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransformInterpolator *op = static_cast<vtkTransformInterpolator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetMinimumT() :
      op->vtkTransformInterpolator::GetMinimumT());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTransformInterpolator_GetMaximumT(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumT");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransformInterpolator *op = static_cast<vtkTransformInterpolator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetMaximumT() :
      op->vtkTransformInterpolator::GetMaximumT());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTransformInterpolator_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransformInterpolator *op = static_cast<vtkTransformInterpolator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Initialize();
      }
    else
      {
      op->vtkTransformInterpolator::Initialize();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTransformInterpolator_AddTransform_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddTransform");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransformInterpolator *op = static_cast<vtkTransformInterpolator *>(vp);

  double temp0;
  vtkTransform *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkTransform"))
    {
    if (ap.IsBound())
      {
      op->AddTransform(temp0, temp1);
      }
    else
      {
      op->vtkTransformInterpolator::AddTransform(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkTransformInterpolator_AddTransform_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddTransform");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransformInterpolator *op = static_cast<vtkTransformInterpolator *>(vp);

  double temp0;
  vtkMatrix4x4 *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkMatrix4x4"))
    {
    if (ap.IsBound())
      {
      op->AddTransform(temp0, temp1);
      }
    else
      {
      op->vtkTransformInterpolator::AddTransform(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkTransformInterpolator_AddTransform_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddTransform");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransformInterpolator *op = static_cast<vtkTransformInterpolator *>(vp);

  double temp0;
  vtkProp3D *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkProp3D"))
    {
    if (ap.IsBound())
      {
      op->AddTransform(temp0, temp1);
      }
    else
      {
      op->vtkTransformInterpolator::AddTransform(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkTransformInterpolator_AddTransform_Methods[] = {
  {NULL, PyvtkTransformInterpolator_AddTransform_s1, METH_VARARGS,
   (char*)"@dO *vtkTransform"},
  {NULL, PyvtkTransformInterpolator_AddTransform_s2, METH_VARARGS,
   (char*)"@dO *vtkMatrix4x4"},
  {NULL, PyvtkTransformInterpolator_AddTransform_s3, METH_VARARGS,
   (char*)"@dO *vtkProp3D"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkTransformInterpolator_AddTransform(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkTransformInterpolator_AddTransform_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "AddTransform");
  return NULL;
}



static PyObject *
PyvtkTransformInterpolator_RemoveTransform(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveTransform");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransformInterpolator *op = static_cast<vtkTransformInterpolator *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->RemoveTransform(temp0);
      }
    else
      {
      op->vtkTransformInterpolator::RemoveTransform(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTransformInterpolator_InterpolateTransform(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InterpolateTransform");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransformInterpolator *op = static_cast<vtkTransformInterpolator *>(vp);

  double temp0;
  vtkTransform *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkTransform"))
    {
    if (ap.IsBound())
      {
      op->InterpolateTransform(temp0, temp1);
      }
    else
      {
      op->vtkTransformInterpolator::InterpolateTransform(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTransformInterpolator_SetInterpolationType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInterpolationType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransformInterpolator *op = static_cast<vtkTransformInterpolator *>(vp);

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
      op->vtkTransformInterpolator::SetInterpolationType(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTransformInterpolator_GetInterpolationTypeMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInterpolationTypeMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransformInterpolator *op = static_cast<vtkTransformInterpolator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetInterpolationTypeMinValue() :
      op->vtkTransformInterpolator::GetInterpolationTypeMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTransformInterpolator_GetInterpolationTypeMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInterpolationTypeMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransformInterpolator *op = static_cast<vtkTransformInterpolator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetInterpolationTypeMaxValue() :
      op->vtkTransformInterpolator::GetInterpolationTypeMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTransformInterpolator_GetInterpolationType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInterpolationType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransformInterpolator *op = static_cast<vtkTransformInterpolator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetInterpolationType() :
      op->vtkTransformInterpolator::GetInterpolationType());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTransformInterpolator_SetInterpolationTypeToLinear(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInterpolationTypeToLinear");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransformInterpolator *op = static_cast<vtkTransformInterpolator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetInterpolationTypeToLinear();
      }
    else
      {
      op->vtkTransformInterpolator::SetInterpolationTypeToLinear();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTransformInterpolator_SetInterpolationTypeToSpline(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInterpolationTypeToSpline");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransformInterpolator *op = static_cast<vtkTransformInterpolator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetInterpolationTypeToSpline();
      }
    else
      {
      op->vtkTransformInterpolator::SetInterpolationTypeToSpline();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTransformInterpolator_SetInterpolationTypeToManual(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInterpolationTypeToManual");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransformInterpolator *op = static_cast<vtkTransformInterpolator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetInterpolationTypeToManual();
      }
    else
      {
      op->vtkTransformInterpolator::SetInterpolationTypeToManual();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTransformInterpolator_SetPositionInterpolator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPositionInterpolator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransformInterpolator *op = static_cast<vtkTransformInterpolator *>(vp);

  vtkTupleInterpolator *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkTupleInterpolator"))
    {
    if (ap.IsBound())
      {
      op->SetPositionInterpolator(temp0);
      }
    else
      {
      op->vtkTransformInterpolator::SetPositionInterpolator(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTransformInterpolator_GetPositionInterpolator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPositionInterpolator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransformInterpolator *op = static_cast<vtkTransformInterpolator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkTupleInterpolator *tempr = (ap.IsBound() ?
      op->GetPositionInterpolator() :
      op->vtkTransformInterpolator::GetPositionInterpolator());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTransformInterpolator_SetScaleInterpolator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScaleInterpolator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransformInterpolator *op = static_cast<vtkTransformInterpolator *>(vp);

  vtkTupleInterpolator *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkTupleInterpolator"))
    {
    if (ap.IsBound())
      {
      op->SetScaleInterpolator(temp0);
      }
    else
      {
      op->vtkTransformInterpolator::SetScaleInterpolator(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTransformInterpolator_GetScaleInterpolator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScaleInterpolator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransformInterpolator *op = static_cast<vtkTransformInterpolator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkTupleInterpolator *tempr = (ap.IsBound() ?
      op->GetScaleInterpolator() :
      op->vtkTransformInterpolator::GetScaleInterpolator());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTransformInterpolator_SetRotationInterpolator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRotationInterpolator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransformInterpolator *op = static_cast<vtkTransformInterpolator *>(vp);

  vtkQuaternionInterpolator *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkQuaternionInterpolator"))
    {
    if (ap.IsBound())
      {
      op->SetRotationInterpolator(temp0);
      }
    else
      {
      op->vtkTransformInterpolator::SetRotationInterpolator(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTransformInterpolator_GetRotationInterpolator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRotationInterpolator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransformInterpolator *op = static_cast<vtkTransformInterpolator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkQuaternionInterpolator *tempr = (ap.IsBound() ?
      op->GetRotationInterpolator() :
      op->vtkTransformInterpolator::GetRotationInterpolator());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTransformInterpolator_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransformInterpolator *op = static_cast<vtkTransformInterpolator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMTime() :
      op->vtkTransformInterpolator::GetMTime());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkTransformInterpolator_Methods[] = {
  {(char*)"GetClassName", PyvtkTransformInterpolator_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkTransformInterpolator_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkTransformInterpolator_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkTransformInterpolator\nC++: vtkTransformInterpolator *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkTransformInterpolator_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkTransformInterpolator\nC++: vtkTransformInterpolator *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetNumberOfTransforms", PyvtkTransformInterpolator_GetNumberOfTransforms, METH_VARARGS,
   (char*)"V.GetNumberOfTransforms() -> int\nC++: int GetNumberOfTransforms()\n\nReturn the number of transforms in the list of transforms.\n"},
  {(char*)"GetMinimumT", PyvtkTransformInterpolator_GetMinimumT, METH_VARARGS,
   (char*)"V.GetMinimumT() -> float\nC++: double GetMinimumT()\n\nObtain some information about the interpolation range. The\nnumbers returned (corresponding to parameter t, usually thought\nof as time) are undefined if the list of transforms is empty.\n"},
  {(char*)"GetMaximumT", PyvtkTransformInterpolator_GetMaximumT, METH_VARARGS,
   (char*)"V.GetMaximumT() -> float\nC++: double GetMaximumT()\n\nObtain some information about the interpolation range. The\nnumbers returned (corresponding to parameter t, usually thought\nof as time) are undefined if the list of transforms is empty.\n"},
  {(char*)"Initialize", PyvtkTransformInterpolator_Initialize, METH_VARARGS,
   (char*)"V.Initialize()\nC++: void Initialize()\n\nClear the list of transforms.\n"},
  {(char*)"AddTransform", PyvtkTransformInterpolator_AddTransform, METH_VARARGS,
   (char*)"V.AddTransform(float, vtkTransform)\nC++: void AddTransform(double t, vtkTransform *xform)\nV.AddTransform(float, vtkMatrix4x4)\nC++: void AddTransform(double t, vtkMatrix4x4 *matrix)\nV.AddTransform(float, vtkProp3D)\nC++: void AddTransform(double t, vtkProp3D *prop3D)\n\nAdd another transform to the list of transformations defining the\ntransform function. Note that using the same time t value more\nthan once replaces the previous transform value at t. At least\ntwo transforms must be added to define a function. There are\nvariants to this method depending on whether you are adding a\nvtkTransform, vtkMaxtirx4x4, and/or vtkProp3D.\n"},
  {(char*)"RemoveTransform", PyvtkTransformInterpolator_RemoveTransform, METH_VARARGS,
   (char*)"V.RemoveTransform(float)\nC++: void RemoveTransform(double t)\n\nDelete the transform at a particular parameter t. If there is no\ntransform defined at location t, then the method does nothing.\n"},
  {(char*)"InterpolateTransform", PyvtkTransformInterpolator_InterpolateTransform, METH_VARARGS,
   (char*)"V.InterpolateTransform(float, vtkTransform)\nC++: void InterpolateTransform(double t, vtkTransform *xform)\n\nInterpolate the list of transforms and determine a new transform\n(i.e., fill in the transformation provided). If t is outside the\nrange of (min,max) values, then t is clamped.\n"},
  {(char*)"SetInterpolationType", PyvtkTransformInterpolator_SetInterpolationType, METH_VARARGS,
   (char*)"V.SetInterpolationType(int)\nC++: void SetInterpolationType(int)\n\nThese are convenience methods to switch between linear and spline\ninterpolation. The methods simply forward the request for linear\nor spline interpolation to the position, scale and orientation\ninterpolators. Note that if the InterpolationType is set to\n\"Manual\", then the interpolators are expected to be directly\nmanipulated and this class does not forward the request for\ninterpolation type to its interpolators.\n"},
  {(char*)"GetInterpolationTypeMinValue", PyvtkTransformInterpolator_GetInterpolationTypeMinValue, METH_VARARGS,
   (char*)"V.GetInterpolationTypeMinValue() -> int\nC++: int GetInterpolationTypeMinValue()\n\nThese are convenience methods to switch between linear and spline\ninterpolation. The methods simply forward the request for linear\nor spline interpolation to the position, scale and orientation\ninterpolators. Note that if the InterpolationType is set to\n\"Manual\", then the interpolators are expected to be directly\nmanipulated and this class does not forward the request for\ninterpolation type to its interpolators.\n"},
  {(char*)"GetInterpolationTypeMaxValue", PyvtkTransformInterpolator_GetInterpolationTypeMaxValue, METH_VARARGS,
   (char*)"V.GetInterpolationTypeMaxValue() -> int\nC++: int GetInterpolationTypeMaxValue()\n\nThese are convenience methods to switch between linear and spline\ninterpolation. The methods simply forward the request for linear\nor spline interpolation to the position, scale and orientation\ninterpolators. Note that if the InterpolationType is set to\n\"Manual\", then the interpolators are expected to be directly\nmanipulated and this class does not forward the request for\ninterpolation type to its interpolators.\n"},
  {(char*)"GetInterpolationType", PyvtkTransformInterpolator_GetInterpolationType, METH_VARARGS,
   (char*)"V.GetInterpolationType() -> int\nC++: int GetInterpolationType()\n\nThese are convenience methods to switch between linear and spline\ninterpolation. The methods simply forward the request for linear\nor spline interpolation to the position, scale and orientation\ninterpolators. Note that if the InterpolationType is set to\n\"Manual\", then the interpolators are expected to be directly\nmanipulated and this class does not forward the request for\ninterpolation type to its interpolators.\n"},
  {(char*)"SetInterpolationTypeToLinear", PyvtkTransformInterpolator_SetInterpolationTypeToLinear, METH_VARARGS,
   (char*)"V.SetInterpolationTypeToLinear()\nC++: void SetInterpolationTypeToLinear()\n\nThese are convenience methods to switch between linear and spline\ninterpolation. The methods simply forward the request for linear\nor spline interpolation to the position, scale and orientation\ninterpolators. Note that if the InterpolationType is set to\n\"Manual\", then the interpolators are expected to be directly\nmanipulated and this class does not forward the request for\ninterpolation type to its interpolators.\n"},
  {(char*)"SetInterpolationTypeToSpline", PyvtkTransformInterpolator_SetInterpolationTypeToSpline, METH_VARARGS,
   (char*)"V.SetInterpolationTypeToSpline()\nC++: void SetInterpolationTypeToSpline()\n\nThese are convenience methods to switch between linear and spline\ninterpolation. The methods simply forward the request for linear\nor spline interpolation to the position, scale and orientation\ninterpolators. Note that if the InterpolationType is set to\n\"Manual\", then the interpolators are expected to be directly\nmanipulated and this class does not forward the request for\ninterpolation type to its interpolators.\n"},
  {(char*)"SetInterpolationTypeToManual", PyvtkTransformInterpolator_SetInterpolationTypeToManual, METH_VARARGS,
   (char*)"V.SetInterpolationTypeToManual()\nC++: void SetInterpolationTypeToManual()\n\nThese are convenience methods to switch between linear and spline\ninterpolation. The methods simply forward the request for linear\nor spline interpolation to the position, scale and orientation\ninterpolators. Note that if the InterpolationType is set to\n\"Manual\", then the interpolators are expected to be directly\nmanipulated and this class does not forward the request for\ninterpolation type to its interpolators.\n"},
  {(char*)"SetPositionInterpolator", PyvtkTransformInterpolator_SetPositionInterpolator, METH_VARARGS,
   (char*)"V.SetPositionInterpolator(vtkTupleInterpolator)\nC++: virtual void SetPositionInterpolator(vtkTupleInterpolator *)\n\nSet/Get the tuple interpolator used to interpolate the position\nportion of the transformation matrix. Note that you can modify\nthe behavior of the interpolator (linear vs spline interpolation;\nchange spline basis) by manipulating the interpolator instances.\n"},
  {(char*)"GetPositionInterpolator", PyvtkTransformInterpolator_GetPositionInterpolator, METH_VARARGS,
   (char*)"V.GetPositionInterpolator() -> vtkTupleInterpolator\nC++: vtkTupleInterpolator *GetPositionInterpolator()\n\nSet/Get the tuple interpolator used to interpolate the position\nportion of the transformation matrix. Note that you can modify\nthe behavior of the interpolator (linear vs spline interpolation;\nchange spline basis) by manipulating the interpolator instances.\n"},
  {(char*)"SetScaleInterpolator", PyvtkTransformInterpolator_SetScaleInterpolator, METH_VARARGS,
   (char*)"V.SetScaleInterpolator(vtkTupleInterpolator)\nC++: virtual void SetScaleInterpolator(vtkTupleInterpolator *)\n\nSet/Get the tuple interpolator used to interpolate the scale\nportion of the transformation matrix. Note that you can modify\nthe behavior of the interpolator (linear vs spline interpolation;\nchange spline basis) by manipulating the interpolator instances.\n"},
  {(char*)"GetScaleInterpolator", PyvtkTransformInterpolator_GetScaleInterpolator, METH_VARARGS,
   (char*)"V.GetScaleInterpolator() -> vtkTupleInterpolator\nC++: vtkTupleInterpolator *GetScaleInterpolator()\n\nSet/Get the tuple interpolator used to interpolate the scale\nportion of the transformation matrix. Note that you can modify\nthe behavior of the interpolator (linear vs spline interpolation;\nchange spline basis) by manipulating the interpolator instances.\n"},
  {(char*)"SetRotationInterpolator", PyvtkTransformInterpolator_SetRotationInterpolator, METH_VARARGS,
   (char*)"V.SetRotationInterpolator(vtkQuaternionInterpolator)\nC++: virtual void SetRotationInterpolator(\n    vtkQuaternionInterpolator *)\n\nSet/Get the tuple interpolator used to interpolate the\norientation portion of the transformation matrix. Note that you\ncan modify the behavior of the interpolator (linear vs spline\ninterpolation; change spline basis) by manipulating the\ninterpolator instances.\n"},
  {(char*)"GetRotationInterpolator", PyvtkTransformInterpolator_GetRotationInterpolator, METH_VARARGS,
   (char*)"V.GetRotationInterpolator() -> vtkQuaternionInterpolator\nC++: vtkQuaternionInterpolator *GetRotationInterpolator()\n\nSet/Get the tuple interpolator used to interpolate the\norientation portion of the transformation matrix. Note that you\ncan modify the behavior of the interpolator (linear vs spline\ninterpolation; change spline basis) by manipulating the\ninterpolator instances.\n"},
  {(char*)"GetMTime", PyvtkTransformInterpolator_GetMTime, METH_VARARGS,
   (char*)"V.GetMTime() -> int\nC++: unsigned long GetMTime()\n\nOverride GetMTime() because we depend on the interpolators which\nmay be modified outside of this class.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkTransformInterpolator_StaticNew()
{
  return vtkTransformInterpolator::New();
}

PyObject *PyVTKClass_vtkTransformInterpolatorNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkTransformInterpolator_StaticNew,
    PyvtkTransformInterpolator_Methods,
    "vtkTransformInterpolator", modulename,
    NULL, NULL,
    PyvtkTransformInterpolator_Doc(),
    PyVTKClass_vtkObjectNew(modulename));

  if (cls)
    {
    PyObject *d = PyVTKClass_GetDict(cls);
    PyObject *o;

    for (int c = 0; c < 3; c++)
      {
      static const struct { const char *name; int value; }
        constants[3] = {
          { "INTERPOLATION_TYPE_LINEAR", vtkTransformInterpolator::INTERPOLATION_TYPE_LINEAR },
          { "INTERPOLATION_TYPE_SPLINE", vtkTransformInterpolator::INTERPOLATION_TYPE_SPLINE },
          { "INTERPOLATION_TYPE_MANUAL", vtkTransformInterpolator::INTERPOLATION_TYPE_MANUAL },
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

const char **PyvtkTransformInterpolator_Doc()
{
  static const char *docstring[] = {
    "vtkTransformInterpolator - interpolate a series of transformation\nmatrices\n\n",
    "Superclass: vtkObject\n\n",
    "This class is used to interpolate a series of 4x4 transformation\nmatrices. Position, scale and orientation (i.e., rotations) are\ninterpolated separately, and can be interpolated linearly or with a\nspline function. Note that orientation is interpolated using\nquaternions via SLERP (spherical linear interpolation) or the special\nvtkQuaternionSpline class.\n\nTo use this class, specify at least two pair",
    "s of (t,transformation\nmatrix) with the AddTransform() method.  Then interpolated the\ntransforms with the InterpolateTransform(t,transform) method, where\n\"t\" must be in the range of (min,max) times specified by the\nAddTransform() method.\n\nBy default, spline interpolation is used for the interpolation of the\ntransformation matrices. The position, scale and orientation of the\nmatrices are interpolat",
    "ed with instances of the classes\nvtkTupleInterpolator (position,scale) and vtkQuaternionInterpolator\n(rotation). The user can override the interpolation behavior by\ngaining access to these separate interpolation classes.  These\ninterpolator classes (vtkTupleInterpolator and\nvtkQuaternionInterpolator) can be modified to perform linear versus\nspline interpolation, and/or different spline basis funct",
    "ions can be\nspecified.\n\nCaveats:\n\nThe interpolator classes are initialized when the\nInterpolateTransform() is called. Any changes to the interpolators,\nor additions to the list of transforms to be interpolated, causes a\nreinitialization of the interpolators the next time\nInterpolateTransform() is invoked. Thus the best performance is\nobtained by 1) configuring the interpolators, 2) adding all the\n",
    "transforms, and 3) finally performing interpolation.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkTransformInterpolator(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkTransformInterpolatorNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkTransformInterpolator", o) != 0)
    {
    Py_DECREF(o);
    }

}

